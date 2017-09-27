

int __fastcall RenderChunkSorter::RenderChunkSorter(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  __int64 v4; // r0@1
  int v5; // r5@2
  unsigned int *v6; // r6@9
  int v7; // r5@16
  unsigned int *v8; // r6@23
  int v10; // [sp+0h] [bp-20h]@2
  int v11; // [sp+4h] [bp-1Ch]@2

  v2 = a2;
  v3 = a1;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 196) = 0;
  *(_DWORD *)(a1 + 200) = 0;
  _aeabi_memclr4(a1, 184);
  *(_DWORD *)(v3 + 204) = *(_DWORD *)v2;
  *(_DWORD *)(v3 + 208) = 0;
  LODWORD(v4) = *(_DWORD *)(v2 + 4);
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v3 + 208) = v4;
  *(_DWORD *)v2 = 0;
  *(_BYTE *)(v3 + 212) = 0;
  LODWORD(v4) = *(_DWORD *)(v3 + 204);
  if ( !(_DWORD)v4 )
  {
    j__ZNSt12__shared_ptrI27RenderChunkSorterSharedInfoLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v10);
    v4 = *(_QWORD *)&v10;
    v10 = 0;
    v11 = 0;
    *(_DWORD *)(v3 + 204) = v4;
    v5 = *(_DWORD *)(v3 + 208);
    *(_DWORD *)(v3 + 208) = HIDWORD(v4);
    if ( v5 )
    {
      HIDWORD(v4) = v5 + 4;
      if ( &pthread_create )
      {
        __dmb();
        do
          LODWORD(v4) = __ldrex((unsigned int *)HIDWORD(v4));
        while ( __strex(v4 - 1, (unsigned int *)HIDWORD(v4)) );
      }
      else
        LODWORD(v4) = (*(_DWORD *)HIDWORD(v4))--;
      if ( (_DWORD)v4 == 1 )
        v6 = (unsigned int *)(v5 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
        if ( &pthread_create )
        {
          __dmb();
          do
            LODWORD(v4) = __ldrex(v6);
          while ( __strex(v4 - 1, v6) );
        }
        else
          LODWORD(v4) = (*v6)--;
        if ( (_DWORD)v4 == 1 )
          LODWORD(v4) = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
    }
    v7 = v11;
    if ( v11 )
      HIDWORD(v4) = v11 + 4;
        v8 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
            LODWORD(v4) = __ldrex(v8);
          while ( __strex(v4 - 1, v8) );
          LODWORD(v4) = (*v8)--;
          LODWORD(v4) = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  *(_DWORD *)(v3 + 188) = mce::PolygonHelper::getVertsPerQuadFace((mce::PolygonHelper *)v4);
  return v3;
}


unsigned int __fastcall RenderChunkSorter::sortAndCullFaces(int a1, int a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v4; // r8@1
  int v5; // r9@1
  int v6; // r5@1
  int v7; // r6@1
  _QWORD *v8; // r0@2
  __int64 v9; // r1@3
  signed int v10; // r1@4
  unsigned int result; // r0@6
  int v13; // r0@7
  __int64 v14; // r1@7
  int v15; // r0@7
  int v16; // r3@7
  int v17; // r1@9
  int v18; // r2@11
  __int64 v19; // kr00_8@13
  int v20; // r7@13
  signed int v21; // r3@13
  signed int v22; // r5@13
  signed int v23; // r7@13
  int v24; // r1@13
  signed int v25; // r0@13
  signed int v26; // lr@13
  int v27; // r2@13
  signed int v29; // r2@15
  signed int v31; // r1@17
  int v32; // r0@17
  int v33; // r0@19
  signed int v34; // r5@19
  signed int v35; // r5@21
  signed int v36; // r2@21
  signed int v37; // r5@23
  int v38; // r0@25
  signed int v39; // r1@25
  int v40; // r0@27
  signed int v41; // r1@27
  int v42; // r1@29
  int i; // r3@34
  unsigned int v45; // r7@34
  signed int v46; // r1@35
  int v49; // r0@41
  int v50; // r1@42
  int v51; // r1@46
  int v52; // r1@50
  int v53; // r0@54
  int *v54; // lr@55
  int v55; // r0@55
  unsigned int *v56; // r10@55
  _DWORD *v57; // r4@55
  int v58; // r0@56
  char v59; // r2@57
  int v60; // r9@57
  unsigned int v61; // r11@57
  unsigned int v62; // r6@57
  int v63; // r6@58
  unsigned int v64; // r0@58
  int v65; // r5@60
  int v66; // r7@60
  int v68; // r1@64 OVERLAPPED
  int v69; // r2@64
  int v70; // r0@71
  unsigned int v71; // r1@71
  int v72; // r0@73
  int v73; // r1@73 OVERLAPPED
  int v74; // r2@73
  int v75; // r5@75
  int v77; // r9@81
  __int64 v81; // kr10_8@84
  int v82; // r6@85
  int v83; // r3@85
  int v84; // r7@86
  int v85; // r5@86
  int v87; // r12@88
  _QWORD *v88; // r6@88
  _QWORD *v91; // r2@95
  __int64 v94; // kr30_8@103
  int v95; // r7@104
  int v96; // r6@104
  int v97; // r2@105
  int v98; // r5@105
  int v100; // r12@107
  _QWORD *v101; // r2@107
  int v102; // r10@112
  _DWORD *v103; // r5@112
  int v104; // r6@112
  unsigned int v105; // r7@112
  _DWORD *v106; // r2@112
  int v107; // r4@112
  int v108; // r9@112
  _DWORD *v109; // r9@112
  int v110; // r0@115
  int v111; // r1@115
  int v112; // r5@115
  unsigned int v113; // r6@115
  int v114; // r11@115
  signed int v115; // r7@115
  int v116; // r1@115
  unsigned int v117; // r0@115
  int v118; // r4@116
  _DWORD *v119; // r5@116
  int v120; // r0@119
  signed int v121; // r3@119
  int *v122; // r1@121
  int v123; // r6@121
  int v124; // t1@122
  int *v125; // r1@125
  int v126; // r6@125
  int v127; // r3@126
  int v128; // r3@126
  int v129; // t1@126
  unsigned int v130; // [sp+4h] [bp-104h]@41
  int v131; // [sp+8h] [bp-100h]@37
  char *v132; // [sp+Ch] [bp-FCh]@55
  unsigned __int64 *v133; // [sp+10h] [bp-F8h]@34
  int v134; // [sp+14h] [bp-F4h]@34
  int v135; // [sp+18h] [bp-F0h]@55
  int v136; // [sp+18h] [bp-F0h]@115
  int v137; // [sp+1Ch] [bp-ECh]@64
  float v138; // [sp+20h] [bp-E8h]@60
  int v141; // [sp+2Ch] [bp-DCh]@60
  char v142; // [sp+30h] [bp-D8h]@13
  char v143; // [sp+3Ch] [bp-CCh]@7
  char v144; // [sp+48h] [bp-C0h]@7
  __int64 v145; // [sp+54h] [bp-B4h]@7
  int v146; // [sp+5Ch] [bp-ACh]@7
  char v147; // [sp+60h] [bp-A8h]@6
  int v148; // [sp+6Ch] [bp-9Ch]@6
  int v149; // [sp+70h] [bp-98h]@6
  int v150; // [sp+74h] [bp-94h]@6
  int v151; // [sp+78h] [bp-90h]@6
  int v152; // [sp+7Ch] [bp-8Ch]@6
  int v153; // [sp+80h] [bp-88h]@6
  int v154; // [sp+84h] [bp-84h]@6
  int v155; // [sp+88h] [bp-80h]@6
  int v156; // [sp+8Ch] [bp-7Ch]@6
  int v157; // [sp+90h] [bp-78h]@6
  int v158; // [sp+94h] [bp-74h]@6
  int v159; // [sp+98h] [bp-70h]@6
  int v160; // [sp+9Ch] [bp-6Ch]@6
  int v161; // [sp+A0h] [bp-68h]@6
  int v162; // [sp+A4h] [bp-64h]@6
  int v163; // [sp+A8h] [bp-60h]@6
  int v164; // [sp+ACh] [bp-5Ch]@6
  char v165; // [sp+B0h] [bp-58h]@7
  signed int v166; // [sp+B4h] [bp-54h]@9
  signed int v167; // [sp+B8h] [bp-50h]@11
  int v168; // [sp+BCh] [bp-4Ch]@7
  int v169; // [sp+C0h] [bp-48h]@9
  int v170; // [sp+C4h] [bp-44h]@11

  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = 0;
  if ( a4 != a3 )
  {
    v8 = a3;
    do
    {
      v9 = *v8;
      v8 = (_QWORD *)((char *)v8 + 12);
      v7 += (HIDWORD(v9) - (signed int)v9) >> 4;
    }
    while ( a4 != v8 );
  }
  v10 = 4;
  if ( (v7 & 0x3FFFFFFFu) < 0x4000 )
    v10 = 2;
  _R11 = v6;
  *(_DWORD *)(v6 + 184) = v10;
  *(_DWORD *)(v6 + 4) = *(_DWORD *)v6;
  _aeabi_memclr8(&v147, 76);
  v148 = 0;
  v149 = 0;
  v150 = 0;
  v151 = 0;
  v152 = 0;
  v153 = 0;
  v154 = 0;
  v155 = 0;
  v156 = 0;
  v157 = 0;
  v158 = 0;
  v159 = 0;
  v160 = 0;
  v161 = 0;
  v162 = 0;
  v163 = 0;
  v164 = 0;
  result = _aeabi_memcpy4(v6 + 12, &v147, 80);
  if ( v7 )
    v13 = *(_DWORD *)(v6 + 204);
    LODWORD(v14) = *(_DWORD *)v13;
    __dmb();
    HIDWORD(v14) = *(_DWORD *)(v13 + 4);
    v15 = *(_DWORD *)(v13 + 8);
    v145 = v14;
    v146 = v15;
    SubChunkPos::operator BlockPos((int)&v144, v5);
    BlockPos::BlockPos((int)&v143, (int)&v145);
    SubChunkPos::SubChunkPos((SubChunkPos *)&v168, (const BlockPos *)&v144);
    SubChunkPos::SubChunkPos((SubChunkPos *)&v165, (const BlockPos *)&v143);
    v16 = (v168 - *(_DWORD *)&v165) >> 31;
    if ( v168 - *(_DWORD *)&v165 > 0 )
      v16 = 1;
    v17 = (v169 - v166) >> 31;
    if ( v169 - v166 > 0 )
      v17 = 1;
    v18 = (v170 - v167) >> 31;
    if ( v170 - v167 > 0 )
      v18 = 1;
    *(_DWORD *)(v6 + 192) = v16;
    *(_DWORD *)(v6 + 196) = v17;
    *(_DWORD *)(v6 + 200) = v18;
    SubChunkPos::operator BlockPos((int)&v142, v5);
    BlockPos::BlockPos((int)&v168, (int)&v145);
    v19 = *(_QWORD *)&v168;
    v20 = v170;
    SubChunkPos::operator BlockPos((int)&v165, v5);
    v21 = v20 - 4;
    v22 = v19 + 4;
    v23 = v20 + 4;
    v24 = *(_DWORD *)&v165 >> 4;
    v25 = 0;
    v26 = 0;
    v27 = (1 - (v21 >> 4) + (v23 >> 4)) * (1 - (((signed int)v19 - 4) >> 4) + (((signed int)v19 + 4) >> 4));
    if ( *(_DWORD *)&v165 >> 4 >= ((signed int)v19 - 4) >> 4 )
      v25 = 1;
    _ZF = v27 == 0;
    _NF = v27 < 0;
    v29 = 0;
    if ( !_NF && !_ZF )
      v29 = 1;
    _VF = __OFSUB__(v24, v22 >> 4);
    _ZF = v24 == v22 >> 4;
    _NF = v24 - (v22 >> 4) < 0;
    v31 = 0;
    v32 = v25 & v29;
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      v31 = 1;
    v33 = v32 & v31;
    v34 = -32768;
    if ( !((unsigned __int8)((HIDWORD(v19) + 32764 < 0) ^ __OFADD__(HIDWORD(v19) - 4, 0x8000)) | (HIDWORD(v19) == -32764)) )
      v34 = HIDWORD(v19) - 4;
    v35 = v34 >> 4;
    v36 = v166 >> 4;
    if ( HIDWORD(v19) - 4 >= 0x8000 )
      v35 = 2047;
    _VF = __OFSUB__(v36, v35);
    _NF = v36 - v35 < 0;
    v37 = 0;
    if ( !(_NF ^ _VF) )
      v37 = 1;
    __asm
      VLDR            S0, [R11,#0xC0]
      VLDR            S2, [R11,#0xC4]
    v38 = v33 & v37;
      VLDR            S4, [R11,#0xC8]
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
    v39 = 0;
    __asm { VMUL.F32        S6, S0, S0 }
      v39 = 1;
    __asm { VMUL.F32        S8, S2, S2 }
    v40 = v38 & v39;
    __asm { VMUL.F32        S10, S4, S4 }
    v41 = 0;
    if ( v167 >> 4 >= v21 >> 4 )
      v41 = 1;
    v42 = v41 & v40;
    if ( v167 >> 4 <= v23 >> 4 )
      v26 = 1;
      VADD.F32        S6, S8, S6
      VLDR            S8, =0.0001
      VADD.F32        S6, S6, S10
      VSQRT.F32       S6, S6
      VCMPE.F32       S6, S8
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      _R0 = &Vec3::ZERO;
      __asm
      {
        VLDR            S16, [R0]
        VLDR            S18, [R0,#4]
        VLDR            S20, [R0,#8]
      }
    else
        VDIV.F32        S20, S4, S6
        VDIV.F32        S18, S2, S6
        VDIV.F32        S16, S0, S6
    i = _R11;
    v45 = 0;
    v134 = v26 & v42;
    v133 = (unsigned __int64 *)(_R11 + 172);
      *(_DWORD *)(i + 176) = *(_DWORD *)(i + 172);
      v170 = 0;
      v46 = *(_BYTE *)(i + 212);
      if ( *(_BYTE *)(i + 212) )
        v46 = 1;
      v131 = *((_DWORD *)*(&off_26E67E0 + v45) + 1);
      if ( v134 | v46 )
        goto LABEL_130;
      _CF = (v45 | 1) >= 5;
      _ZF = (v45 | 1) == 5;
      if ( (v45 | 1) != 5 )
        _CF = v45 - 7 >= 1;
        _ZF = v45 == 8;
      if ( _ZF || !_CF )
LABEL_130:
        v130 = v45;
        v168 = 66565;
        LOWORD(v169) = 515;
        v49 = 6;
        goto LABEL_53;
      v50 = *(_DWORD *)(i + 192);
      if ( v50 <= 0 )
        LOBYTE(v168) = 5;
        v49 = 1;
        v170 = 1;
        if ( v50 < 0 )
          goto LABEL_46;
      else
        v49 = 0;
      *(_BYTE *)(v49 | (unsigned int)&v168) = 4;
      v49 = v170++ + 1;
LABEL_46:
      v51 = *(_DWORD *)(i + 196);
      if ( v51 <= 0 )
        *((_BYTE *)&v168 + v49) = 1;
        v49 = v170++ + 1;
        if ( v51 < 0 )
          goto LABEL_50;
      *((_BYTE *)&v168 + v49) = 0;
LABEL_50:
      v52 = *(_DWORD *)(i + 200);
      if ( v52 <= 0 )
        *((_BYTE *)&v168 + v49) = 3;
        if ( v52 < 0 )
          goto LABEL_54;
      *((_BYTE *)&v168 + v49) = 2;
      v49 = v170 + 1;
LABEL_53:
      v170 = v49;
LABEL_54:
      *((_BYTE *)&v168 + v49) = 6;
      v53 = v170++ + 1;
      if ( v170 )
        v54 = &v168;
        v132 = (char *)&v168 + v53;
        v55 = i + 8 * v130;
        v56 = (unsigned int *)(v55 + 92);
        v57 = (_DWORD *)(v55 + 96);
        v135 = v55 + 92;
        do
        {
          v58 = *(_BYTE *)v54;
          if ( *((_DWORD *)v4 + 3 * v58 + 1) != *((_DWORD *)v4 + 3 * v58) )
          {
            v59 = *(_BYTE *)v54;
            v60 = 0;
            v61 = 0;
            v62 = 0;
            if ( v131 == 1 )
            {
              do
              {
                v63 = *(_DWORD *)(*((_DWORD *)v4 + 3 * v58) + v60);
                v64 = *(_DWORD *)(i + 188) * v63;
                if ( v64 >= *v56 )
                {
                  if ( v64 < *v56 + *v57 )
                  {
                    v141 = 0;
                    v65 = *((_DWORD *)v4 + 3 * v59);
                    v66 = i;
                    Vec3::Vec3((int)&v138, (int)&v142);
                    i = v66;
                    _R0 = v65 + v60;
                    __asm
                    {
                      VLDR            S0, [SP,#0x108+var_E8]
                      VLDR            S2, [SP,#0x108+var_E4]
                      VLDR            S6, [R0,#4]
                      VLDR            S8, [R0,#8]
                      VLDR            S10, [R0,#0xC]
                      VADD.F32        S6, S0, S6
                      VLDR            S4, [SP,#0x108+var_E0]
                      VADD.F32        S2, S2, S8
                      VLDR            S8, [SP,#0x108+var_B4]
                      VADD.F32        S4, S4, S10
                      VLDR            S0, [SP,#0x108+var_AC]
                      VLDR            S10, [SP,#0x108+var_B4+4]
                      VSUB.F32        S2, S2, S10
                      VSUB.F32        S0, S4, S0
                      VSUB.F32        S4, S6, S8
                    }
                    if ( _ZF )
                      __asm
                      {
                        VMUL.F32        S4, S4, S16
                        VMUL.F32        S2, S2, S18
                        VMUL.F32        S0, S0, S20
                      }
                    else
                        VMUL.F32        S4, S4, S4
                        VMUL.F32        S2, S2, S2
                        VMUL.F32        S0, S0, S0
                    __asm { VADD.F32        S2, S2, S4 }
                    v137 = 4 * v63;
                      VADD.F32        S0, S2, S0
                      VSTR            S0, [SP,#0x108+var_DC]
                    *(_QWORD *)&v68 = *(_QWORD *)(v66 + 176);
                    if ( v68 == v69 )
                      std::vector<RenderChunkSorter::FaceInfo,std::allocator<RenderChunkSorter::FaceInfo>>::_M_emplace_back_aux<float &,unsigned int>(
                        v133,
                        &v141,
                        &v137);
                      i = v66;
                      __asm { VSTR            S0, [R1] }
                      *(_DWORD *)(v68 + 4) = 4 * v63;
                      *(_DWORD *)(v66 + 176) = v68 + 8;
                    v59 = *(_BYTE *)v54;
                  }
                  v56 = (unsigned int *)v135;
                }
                v58 = v59;
                v60 += 16;
                ++v61;
              }
              while ( v61 < (*((_DWORD *)v4 + 3 * v59 + 1) - *((_DWORD *)v4 + 3 * v59)) >> 4 );
            }
            else
                v70 = *(_DWORD *)(*((_DWORD *)v4 + 3 * v58) + v60);
                v71 = *(_DWORD *)(i + 188) * v70;
                if ( v71 >= *v56 && v71 < *v56 + *v57 )
                  v72 = 4 * v70;
                  v141 = 0;
                  v137 = v72;
                  *(_QWORD *)&v73 = *(_QWORD *)(i + 176);
                  if ( v73 == v74 )
                    v75 = i;
                    std::vector<RenderChunkSorter::FaceInfo,std::allocator<RenderChunkSorter::FaceInfo>>::_M_emplace_back_aux<float &,unsigned int>(
                      v133,
                      &v141,
                      &v137);
                    i = v75;
                  else
                    *(_DWORD *)v73 = 0;
                    *(_DWORD *)(v73 + 4) = v72;
                    *(_DWORD *)(i + 176) = v73 + 8;
                  v59 = *(_BYTE *)v54;
                ++v62;
              while ( v62 < (*((_DWORD *)v4 + 3 * v59 + 1) - *((_DWORD *)v4 + 3 * v59)) >> 4 );
          }
          v54 = (int *)((char *)v54 + 1);
        }
        while ( (int *)v132 != v54 );
      if ( v131 == 1 )
        _KR08_8 = *(_QWORD *)(i + 172);
        if ( (_DWORD)_KR08_8 != HIDWORD(_KR08_8) )
          v77 = i;
          sub_1346BAC(
            _KR08_8,
            (char *)HIDWORD(_KR08_8),
            2 * (31 - __clz((HIDWORD(_KR08_8) - (signed int)_KR08_8) >> 3)));
          if ( HIDWORD(_KR08_8) - (signed int)_KR08_8 < 129 )
            _R0 = (_QWORD *)(_KR08_8 + 8);
            i = v77;
            if ( (_DWORD)_KR08_8 + 8 != HIDWORD(_KR08_8) )
              _R1 = _KR08_8;
                __asm
                  VLDR            S0, [R0]
                  VLDR            S2, [R10]
                  VCMPE.F32       S0, S2
                  VMRS            APSR_nzcv, FPSCR
                if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                  __asm { VLDR            S2, [R1] }
                  _R7 = (_QWORD *)_R1;
                  v100 = *(_DWORD *)(_R1 + 12);
                  v101 = _R0;
                  __asm
                    VCMPE.F32       S2, S0
                    VMRS            APSR_nzcv, FPSCR
                  while ( _NF ^ _VF )
                    *v101 = *_R7;
                    v101 = _R7;
                    __asm { VLDR            S2, [R7,#-8] }
                    --_R7;
                      VCMPE.F32       S2, S0
                      VMRS            APSR_nzcv, FPSCR
                  __asm { VSTR            S0, [R2] }
                  *((_DWORD *)v101 + 1) = v100;
                else
                  v94 = *_R0;
                  if ( (signed int)((signed int)_R0 - _KR08_8) >= 1 )
                    v95 = ((signed int)((signed int)_R0 - _KR08_8) >> 3) + 1;
                    v96 = 0;
                    do
                      --v95;
                      v97 = *(_DWORD *)(_R1 + v96 * 8 + 4);
                      LODWORD(_R0[v96]) = *(_DWORD *)(_R1 + v96 * 8);
                      v98 = (int)&_R0[v96];
                      --v96;
                      *(_DWORD *)(v98 + 4) = v97;
                    while ( v95 > 1 );
                  *(_QWORD *)_KR08_8 = v94;
                ++_R0;
                _R1 += 8;
              while ( _R0 != (_QWORD *)HIDWORD(_KR08_8) );
          else
            _R1 = (_QWORD *)(_KR08_8 + 8);
            _R0 = (_QWORD *)(_KR08_8 + 128);
            _R2 = _KR08_8;
            do
              __asm
                VLDR            S0, [R1]
                VLDR            S2, [R10]
                VCMPE.F32       S0, S2
                VMRS            APSR_nzcv, FPSCR
              if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                __asm { VLDR            S2, [R2] }
                _R7 = (_QWORD *)_R2;
                v87 = *(_DWORD *)(_R2 + 12);
                v88 = _R1;
                  VCMPE.F32       S2, S0
                while ( _NF ^ _VF )
                  *v88 = *_R7;
                  v88 = _R7;
                  __asm { VLDR            S2, [R7,#-8] }
                  --_R7;
                __asm { VSTR            S0, [R6] }
                *((_DWORD *)v88 + 1) = v87;
              else
                v81 = *_R1;
                if ( (signed int)((signed int)_R1 - _KR08_8) >= 1 )
                  v82 = ((signed int)((signed int)_R1 - _KR08_8) >> 3) + 1;
                  v83 = 0;
                  do
                    --v82;
                    v84 = *(_DWORD *)(_R2 + v83 * 8 + 4);
                    LODWORD(_R1[v83]) = *(_DWORD *)(_R2 + v83 * 8);
                    v85 = (int)&_R1[v83];
                    --v83;
                    *(_DWORD *)(v85 + 4) = v84;
                  while ( v82 > 1 );
                *(_QWORD *)_KR08_8 = v81;
              ++_R1;
              _R2 += 8;
            while ( _R1 != _R0 );
            for ( i = v77; _R0 != (_QWORD *)HIDWORD(_KR08_8); *v91 = _KR20_8 )
              _KR20_8 = *_R0;
                VLDR            S2, [R0,#-8]
                VMOV            S0, R1
                VCMPE.F32       S2, S0
              if ( _NF ^ _VF )
                _R7 = _R0 - 1;
                v91 = _R0;
                do
                  *v91 = *_R7;
                  v91 = _R7;
                while ( _NF ^ _VF );
              ++_R0;
      v102 = *(_QWORD *)i;
      v103 = (_DWORD *)i;
      v104 = *(_DWORD *)(i + 184);
      v105 = v130;
      v106 = (_DWORD *)i;
      v107 = i + 8 * v130;
      v108 = i + 8 * v130;
      *(_DWORD *)(v108 + 12) = (unsigned int)((*(_QWORD *)i >> 32) - v102) / *(_DWORD *)(i + 184);
      v109 = (_DWORD *)(v108 + 12);
      if ( v104 == 4 )
        v110 = *(_DWORD *)(i + 4);
        v136 = i + 8 * v130;
        v111 = *(_QWORD *)(i + 172) >> 32;
        v112 = *(_QWORD *)(i + 172);
        v113 = v110 - v102;
        v114 = *(_DWORD *)(i + 188);
        v115 = v111 - v112;
        v116 = (v111 - v112) >> 1;
        v117 = v110 - v102 + v116 * v114;
        if ( v113 >= v117 )
          if ( v113 > v117 )
            *(_DWORD *)(i + 4) = v117 + v102;
        else
          v118 = *(_QWORD *)(i + 172);
          v119 = (_DWORD *)i;
          std::vector<unsigned char,std::allocator<unsigned char>>::_M_default_append(i, v116 * v114);
          v102 = *v119;
          v106 = v119;
          v112 = v118;
        v120 = v102 + v113;
        v121 = v115 >> 3;
        if ( v114 == 4 )
          v105 = v130;
          v107 = v136;
          if ( v121 )
            v122 = (int *)(v112 + 4);
            v123 = 8 * v121;
              v123 -= 8;
              *(_DWORD *)v120 = *v122 + 1;
              *(_DWORD *)(v120 + 4) = *v122 + 2;
              *(_DWORD *)(v120 + 8) = *v122 + 3;
              v124 = *v122;
              v122 += 2;
              *(_DWORD *)(v120 + 12) = v124;
              v120 += 16;
            while ( v123 );
            v125 = (int *)(v112 + 4);
            v126 = 8 * v121;
              v126 -= 8;
              *(_DWORD *)v120 = *v125 + 1;
              v127 = *v125 + 2;
              *(_DWORD *)(v120 + 16) = v127;
              *(_DWORD *)(v120 + 4) = v127;
              v128 = *v125;
              *(_DWORD *)(v120 + 8) = *v125;
              *(_DWORD *)(v120 + 12) = v128;
              v129 = *v125;
              v125 += 2;
              *(_DWORD *)(v120 + 20) = v129 + 3;
              v120 += 24;
            while ( v126 );
      else if ( v104 == 2 )
        _createIndicesForFaces<unsigned short>(
          *(_QWORD *)(i + 172),
          *(_QWORD *)(i + 172) >> 32,
          (__int64 *)i,
          *(_DWORD *)(i + 188));
        v102 = *v103;
        v106 = v103;
      v45 = v105 + 1;
      i = (int)v106;
      result = (unsigned int)(v106[1] - v102) / v106[46] - *v109;
      *(_DWORD *)(v107 + 16) = result;
    while ( v45 < 0xA );
  return result;
}


int __fastcall RenderChunkSorter::convertRenderLayersToTerrainLayers(int a1, int a2, int a3)
{
  int v3; // r1@1
  __int64 v4; // kr00_8@1
  int v5; // r1@1
  __int64 v6; // r3@1
  int v7; // r1@1
  __int64 v8; // kr08_8@1
  int v9; // r1@1
  __int64 v10; // kr10_8@1
  int v11; // r1@1
  __int64 v12; // kr18_8@1
  int v13; // r1@1
  int v14; // r1@1
  __int64 v15; // kr20_8@1
  int v16; // r1@1
  __int64 v17; // kr28_8@1
  int v18; // r1@1
  int v19; // r1@1
  __int64 v20; // kr30_8@1
  int v21; // r1@1
  __int64 v22; // kr38_8@1
  int v23; // r1@1
  __int64 v24; // kr40_8@1
  int v25; // r1@1
  __int64 v26; // kr48_8@1
  int result; // r0@1

  v3 = TerrainLayer::DoubleSide;
  v4 = *(_QWORD *)a3;
  *(_DWORD *)(a1 + 8 * TerrainLayer::DoubleSide) = *(_QWORD *)a3;
  *(_DWORD *)(a1 + 8 * v3 + 4) = HIDWORD(v4);
  v5 = TerrainLayer::Blend;
  v6 = *(_QWORD *)(a3 + 8);
  *(_DWORD *)(a1 + 8 * TerrainLayer::Blend) = v6;
  *(_DWORD *)(a1 + 8 * v5 + 4) = HIDWORD(v6);
  v7 = TerrainLayer::BlendFar;
  v8 = *(_QWORD *)(a3 + 8);
  *(_DWORD *)(a1 + 8 * TerrainLayer::BlendFar) = v8;
  *(_DWORD *)(a1 + 8 * v7 + 4) = HIDWORD(v8);
  v9 = TerrainLayer::Water;
  v10 = *(_QWORD *)(a3 + 16);
  *(_DWORD *)(a1 + 8 * TerrainLayer::Water) = v10;
  *(_DWORD *)(a1 + 8 * v9 + 4) = HIDWORD(v10);
  v11 = TerrainLayer::Opaque;
  v12 = *(_QWORD *)(a3 + 24);
  *(_DWORD *)(a1 + 8 * TerrainLayer::Opaque) = v12;
  *(_DWORD *)(a1 + 8 * v11 + 4) = HIDWORD(v12);
  v13 = TerrainLayer::Alpha;
  *(_DWORD *)(a1 + 8 * TerrainLayer::Alpha) = *(_DWORD *)(a3 + 32);
  *(_DWORD *)(a1 + 8 * v13 + 4) = *(_DWORD *)(a3 + 36) + *(_DWORD *)(a3 + 44);
  v14 = TerrainLayer::EndPortal;
  v15 = *(_QWORD *)(a3 + 72);
  *(_DWORD *)(a1 + 8 * TerrainLayer::EndPortal) = v15;
  *(_DWORD *)(a1 + 8 * v14 + 4) = HIDWORD(v15);
  v16 = TerrainLayer::AlphaSingleSide;
  v17 = *(_QWORD *)(a3 + 64);
  *(_DWORD *)(a1 + 8 * TerrainLayer::AlphaSingleSide) = v17;
  *(_DWORD *)(a1 + 8 * v16 + 4) = HIDWORD(v17);
  v18 = TerrainLayer::Far;
  *(_DWORD *)(a1 + 8 * TerrainLayer::Far) = *(_DWORD *)(a3 + 16);
  *(_DWORD *)(a1 + 8 * v18 + 4) = *(_DWORD *)(a3 + 36) + *(_DWORD *)(a3 + 28) + *(_DWORD *)(a3 + 20);
  v19 = TerrainLayer::OpaqueSeasons;
  v20 = *(_QWORD *)(a3 + 48);
  *(_DWORD *)(a1 + 8 * TerrainLayer::OpaqueSeasons) = v20;
  *(_DWORD *)(a1 + 8 * v19 + 4) = HIDWORD(v20);
  v21 = TerrainLayer::AlphaSeasons;
  v22 = *(_QWORD *)(a3 + 56);
  *(_DWORD *)(a1 + 8 * TerrainLayer::AlphaSeasons) = v22;
  *(_DWORD *)(a1 + 8 * v21 + 4) = HIDWORD(v22);
  v23 = TerrainLayer::FarSeasons;
  v24 = *(_QWORD *)(a3 + 48);
  *(_DWORD *)(a1 + 8 * TerrainLayer::FarSeasons) = v24;
  *(_DWORD *)(a1 + 8 * v23 + 4) = HIDWORD(v24);
  v25 = TerrainLayer::FarSeasonsAlpha;
  v26 = *(_QWORD *)(a3 + 56);
  *(_DWORD *)(a1 + 8 * TerrainLayer::FarSeasonsAlpha) = v26;
  result = a1 + 8 * v25;
  *(_DWORD *)(result + 4) = HIDWORD(v26);
  return result;
}


int __fastcall RenderChunkSorter::shouldSortAccurate(RenderChunkSorter *this, const Vec3 *a2, const SubChunkPos *a3)
{
  const Vec3 *v3; // r4@1
  __int64 v4; // kr00_8@1
  int v5; // r7@1
  signed int v6; // r3@1
  signed int v7; // r6@1
  signed int v8; // r7@1
  int v9; // r1@1
  signed int v10; // r4@1
  int v11; // r2@1
  signed int v12; // r0@3
  bool v13; // zf@3
  bool v14; // nf@3
  signed int v15; // r2@3
  unsigned __int8 v16; // vf@5
  signed int v17; // r1@5
  int v18; // r2@5
  signed int v19; // r4@7
  int v20; // r1@7
  signed int v21; // r5@7
  signed int v22; // r6@7
  signed int v23; // r5@9
  signed int v24; // r2@9
  int v25; // r1@13
  signed int v26; // r5@15
  signed int v27; // r2@17
  int v28; // r1@19
  signed int v29; // r3@19
  int v30; // r1@21
  int v32; // [sp+0h] [bp-30h]@1
  signed int v33; // [sp+4h] [bp-2Ch]@9
  int v34; // [sp+8h] [bp-28h]@19
  int v35; // [sp+Ch] [bp-24h]@1
  int v36; // [sp+14h] [bp-1Ch]@1

  v3 = a2;
  BlockPos::BlockPos((int)&v35, (int)this);
  v4 = *(_QWORD *)&v35;
  v5 = v36;
  SubChunkPos::operator BlockPos((int)&v32, (int)v3);
  v6 = v5 - 4;
  v7 = v4 + 4;
  v8 = v5 + 4;
  v9 = v32 >> 4;
  v10 = 0;
  v11 = (1 - (v6 >> 4) + (v8 >> 4)) * (1 - (((signed int)v4 - 4) >> 4) + (((signed int)v4 + 4) >> 4));
  if ( v32 >> 4 >= ((signed int)v4 - 4) >> 4 )
    v10 = 1;
  v12 = 0;
  v13 = v11 == 0;
  v14 = v11 < 0;
  v15 = 0;
  if ( !v14 && !v13 )
    v15 = 1;
  v16 = __OFSUB__(v9, v7 >> 4);
  v13 = v9 == v7 >> 4;
  v14 = v9 - (v7 >> 4) < 0;
  v17 = 0;
  v18 = v15 & v10;
  if ( (unsigned __int8)(v14 ^ v16) | v13 )
    v17 = 1;
  v19 = -32768;
  v20 = v17 & v18;
  v21 = -32768;
  v22 = 0;
  if ( !((unsigned __int8)((HIDWORD(v4) + 32764 < 0) ^ __OFADD__(HIDWORD(v4) - 4, 0x8000)) | (HIDWORD(v4) == -32764)) )
    v21 = HIDWORD(v4) - 4;
  v23 = v21 >> 4;
  v24 = v33 >> 4;
  if ( HIDWORD(v4) - 4 >= 0x8000 )
    v23 = 2047;
  if ( v24 >= v23 )
    v22 = 1;
  v25 = v20 & v22;
  if ( !((unsigned __int8)((HIDWORD(v4) + 32772 < 0) ^ __OFADD__(HIDWORD(v4) + 4, 0x8000)) | (HIDWORD(v4) == -32772)) )
    v19 = HIDWORD(v4) + 4;
  v26 = v19 >> 4;
  if ( HIDWORD(v4) + 4 >= 0x8000 )
    v26 = 2047;
  v16 = __OFSUB__(v24, v26);
  v13 = v24 == v26;
  v14 = v24 - v26 < 0;
  v27 = 0;
    v27 = 1;
  v28 = v25 & v27;
  v16 = __OFSUB__(v34 >> 4, v6 >> 4);
  v14 = (v34 >> 4) - (v6 >> 4) < 0;
  v29 = 0;
  if ( !(v14 ^ v16) )
    v29 = 1;
  v30 = v28 & v29;
  if ( v34 >> 4 <= v8 >> 4 )
    v12 = 1;
  return v12 & v30;
}


signed int __fastcall RenderChunkSorter::signDelta(RenderChunkSorter *this, const BlockPos *a2, const BlockPos *a3)
{
  RenderChunkSorter *v3; // r4@1
  const BlockPos *v4; // r5@1
  int v5; // r3@1
  signed int v6; // r0@1
  bool v7; // nf@3
  signed int v8; // r1@3
  signed int result; // r0@3
  signed int v10; // r2@5
  int v11; // [sp+0h] [bp-28h]@1
  int v12; // [sp+4h] [bp-24h]@1
  int v13; // [sp+8h] [bp-20h]@3
  int v14; // [sp+Ch] [bp-1Ch]@1
  int v15; // [sp+10h] [bp-18h]@1
  int v16; // [sp+14h] [bp-14h]@3

  v3 = this;
  v4 = a3;
  SubChunkPos::SubChunkPos((SubChunkPos *)&v14, a2);
  SubChunkPos::SubChunkPos((SubChunkPos *)&v11, v4);
  v5 = (v14 - v11) >> 31;
  v6 = v15 - v12;
  if ( v14 - v11 > 0 )
    v5 = 1;
  v7 = v6 < 0;
  v8 = v6 >> 31;
  result = v16 - v13;
  if ( !v7 && v15 != v12 )
    v8 = 1;
  v10 = result >> 31;
  if ( result > 0 )
    v10 = 1;
  *(_DWORD *)v3 = v5;
  *((_DWORD *)v3 + 1) = v8;
  *((_DWORD *)v3 + 2) = v10;
  return result;
}


RenderChunkSorter *__fastcall RenderChunkSorter::~RenderChunkSorter(RenderChunkSorter *this)
{
  RenderChunkSorter *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  void *v7; // r0@15

  v1 = this;
  v2 = *((_DWORD *)this + 52);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  v7 = (void *)*((_DWORD *)v1 + 43);
  if ( v7 )
    operator delete(v7);
  if ( *(_DWORD *)v1 )
    operator delete(*(void **)v1);
  return v1;
}
