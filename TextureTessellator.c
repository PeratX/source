

int __fastcall TextureTessellator::_addLighting(TextureTessellator *this, Tessellator *a2, const mce::ImageBuffer *a3, const Vec3 *_R3, const unsigned __int8 *a5, int a6, int a7, bool a8)
{
  Tessellator *v8; // r5@1
  float *v17; // r1@2
  float v19; // [sp+0h] [bp-30h]@3
  float v20; // [sp+10h] [bp-20h]@2

  v8 = a2;
  __asm { VLDR            S10, =0.0039216 }
  _R1 = *a5;
  _R2 = a5[1];
  _R4 = a5[2];
  __asm { VMOV            S0, R1 }
  _R0 = a5[3];
  __asm
  {
    VMOV            S2, R2
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S4, S2
    VMOV            S2, R4
    VCVT.F32.U32    S6, S2
    VMOV            S2, R0
    VCVT.F32.U32    S8, S2
    VMUL.F32        S2, S0, S10
    VMUL.F32        S4, S4, S10
    VMUL.F32        S6, S6, S10
    VMUL.F32        S0, S8, S10
    VSTR            S2, [SP,#0x30+var_20]
    VSTR            S4, [SP,#0x30+var_1C]
    VSTR            S6, [SP,#0x30+var_18]
    VSTR            S0, [SP,#0x30+var_14]
  }
  if ( _ZF )
    __asm
    {
      VMOV.F32        S8, #1.0
      VLDR            S10, [R3]
      VLDR            S12, [R3,#4]
    }
    v17 = &v19;
      VLDR            S14, [R3,#8]
      VMUL.F32        S10, S10, S10
      VLDR            S1, =0.275
      VMUL.F32        S14, S14, S14
      VADD.F32        S12, S12, S8
      VSUB.F32        S10, S14, S10
      VMOV.F32        S14, #0.75
      VMUL.F32        S12, S12, S1
      VLDR            S1, =0.1
      VMUL.F32        S10, S10, S1
      VADD.F32        S12, S12, S14
      VADD.F32        S10, S12, S10
      VLDR            S12, =0.0
      VCMPE.F32       S10, #0.0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S10, S8
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S12, S10 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S12, S8 }
      VMUL.F32        S2, S12, S2
      VMUL.F32        S4, S12, S4
      VMUL.F32        S6, S12, S6
      VSTR            S2, [SP,#0x30+var_30]
      VSTR            S4, [SP,#0x30+var_2C]
      VSTR            S6, [SP,#0x30+var_28]
      VSTR            S0, [SP,#0x30+var_24]
  else
    Tessellator::normal(v8, _R3);
    v17 = &v20;
  return Tessellator::color(v8, (const Color *)v17);
}


char *__fastcall TextureTessellator::tessellate(TextureTessellator *this, Tessellator *a2, const mce::ImageBuffer *a3, int a4, int a5, int a6, int a7, bool a8, int a9, bool a10)
{
  TextureTessellator *v10; // r7@1
  int v11; // r8@1
  mce::ImageBuffer *v12; // r6@1
  Tessellator *v13; // r4@1
  int v14; // r0@1
  char *v23; // r0@3
  unsigned int v24; // r10@3
  char *v25; // r0@3
  int v27; // r2@3
  unsigned int v28; // r9@4
  int v29; // r5@4
  int v30; // r8@4
  int v31; // r1@4
  Tessellator *v33; // r7@6
  const mce::ImageBuffer *v36; // r2@7
  unsigned int v37; // r6@7
  TextureTessellator *v38; // r0@10
  float v42; // ST24_4@12
  float v43; // ST00_4@12
  float v44; // ST04_4@12
  float v46; // ST00_4@12
  float v47; // ST04_4@12
  float v48; // ST00_4@12
  float v49; // ST04_4@12
  float v50; // ST00_4@12
  float v51; // ST04_4@12
  int *v52; // r1@12 OVERLAPPED
  signed int v53; // r2@12 OVERLAPPED
  int v54; // r0@13
  TextureTessellator *v55; // r0@18
  int v56; // r9@18
  const unsigned __int8 *v57; // ST00_4@20
  Tessellator *v58; // r6@20
  float v61; // ST00_4@20
  float v62; // ST04_4@20
  Tessellator *v63; // r0@20
  float v65; // ST00_4@20
  float v66; // ST04_4@20
  float v68; // ST00_4@20
  float v69; // ST04_4@20
  float v70; // ST00_4@20
  float v71; // ST04_4@20
  int *v72; // r1@20 OVERLAPPED
  signed int v73; // r2@20 OVERLAPPED
  int v74; // r0@21
  int *v79; // r11@36
  char v81; // r10@36
  int *v84; // r8@40
  const mce::ImageBuffer *v85; // r2@44
  int v86; // r9@45
  char v87; // r0@47
  char v88; // r0@51
  const unsigned __int8 *v89; // r0@53
  const Vec3 *v90; // r3@55
  float v94; // ST00_4@59
  float v95; // ST04_4@59
  float v97; // ST00_4@61
  float v98; // ST04_4@61
  int *v99; // r1@61 OVERLAPPED
  signed int v100; // r2@61 OVERLAPPED
  int v101; // r0@62
  signed int v102; // r0@64
  int v103; // r2@64
  int v104; // r0@65
  int *v108; // r11@79
  Tessellator *v110; // r8@79
  char v111; // r9@79
  int *v114; // r10@83
  const mce::ImageBuffer *v115; // r2@87
  int v116; // r5@88
  char v117; // r0@90
  char v118; // r0@94
  const unsigned __int8 *v119; // r0@96
  const Vec3 *v120; // r3@98
  float v124; // ST00_4@102
  float v125; // ST04_4@102
  float v127; // ST00_4@102
  float v128; // ST04_4@102
  int *v129; // r1@104 OVERLAPPED
  signed int v130; // r2@104 OVERLAPPED
  int v131; // r0@105
  signed int v132; // r0@107
  int v133; // r2@107
  int v134; // r0@108
  mce::PolygonHelper *v136; // r0@116
  int v137; // r6@116
  signed int v138; // r0@116
  char *result; // r0@116
  _DWORD *v140; // r6@116
  int v141; // r7@116
  _DWORD *v142; // r9@116
  int v143; // r8@116
  unsigned int v144; // r5@116
  Tessellator *v145; // r11@119
  unsigned int v146; // r4@119
  int v147; // r2@120
  int v148; // r2@123
  float v149; // [sp+0h] [bp-B8h]@57
  float v150; // [sp+0h] [bp-B8h]@59
  float v151; // [sp+0h] [bp-B8h]@100
  float v152; // [sp+0h] [bp-B8h]@102
  int v153; // [sp+4h] [bp-B4h]@0
  float v154; // [sp+4h] [bp-B4h]@57
  float v155; // [sp+4h] [bp-B4h]@59
  float v156; // [sp+4h] [bp-B4h]@100
  float v157; // [sp+4h] [bp-B4h]@102
  int v158; // [sp+8h] [bp-B0h]@0
  bool v159; // [sp+Ch] [bp-ACh]@53
  bool v160; // [sp+Ch] [bp-ACh]@96
  Tessellator *v161; // [sp+1Ch] [bp-9Ch]@1
  int v162; // [sp+20h] [bp-98h]@1
  float v163; // [sp+24h] [bp-94h]@33
  float v164; // [sp+24h] [bp-94h]@76
  unsigned int v165; // [sp+28h] [bp-90h]@5
  int v166; // [sp+28h] [bp-90h]@33
  int v167; // [sp+28h] [bp-90h]@76
  int v168; // [sp+2Ch] [bp-8Ch]@1
  float v169; // [sp+30h] [bp-88h]@4
  float v170; // [sp+30h] [bp-88h]@33
  float v171; // [sp+30h] [bp-88h]@76
  TextureTessellator *v172; // [sp+34h] [bp-84h]@3
  TextureTessellator *v173; // [sp+38h] [bp-80h]@1
  TextureTessellator *v174; // [sp+3Ch] [bp-7Ch]@1
  unsigned int v175; // [sp+40h] [bp-78h]@3
  unsigned int v176; // [sp+40h] [bp-78h]@73
  unsigned int v177; // [sp+44h] [bp-74h]@3
  const mce::ImageBuffer *v178; // [sp+48h] [bp-70h]@1
  mce::ImageBuffer *v179; // [sp+48h] [bp-70h]@119
  int v180; // [sp+4Ch] [bp-6Ch]@1

  v10 = this;
  v11 = a4;
  v12 = a3;
  v173 = (TextureTessellator *)*(_BYTE *)this;
  v13 = a2;
  v14 = *((_DWORD *)this + 2);
  v168 = a4;
  v178 = a3;
  v161 = a2;
  v174 = v10;
  v162 = (int)v10 + 4;
  *((_DWORD *)v10 + 3) = *((_DWORD *)v10 + 1);
  *((_DWORD *)v10 + 4) = v14;
  Tessellator::begin((int)a2, 2, 0, 0);
  _R0 = a6 - v11;
  __asm
  {
    VMOV.F32        S18, #1.0
    VMOV            S0, R0
    VCVT.F32.S32    S16, S0
    VLDR            S0, =0.0625
  }
  _R0 = a7 - a5;
  v180 = 0;
    VMOV            S26, R0
    VMOV.F32        S28, S18
    VMUL.F32        S0, S16, S0
  if ( !_ZF )
    __asm { VMOVNE.F32      S28, S0 }
  _R9 = *(_DWORD *)mce::ImageBuffer::getImageDescription(v12);
  _R5 = *((_DWORD *)mce::ImageBuffer::getImageDescription(v12) + 1);
  v23 = mce::ImageBuffer::getImageDescription(v12);
  v24 = *(_DWORD *)v23;
  v175 = *(_DWORD *)v23;
  v25 = mce::ImageBuffer::getImageDescription(v12);
    VMOV            S0, R5
    VMOV            S2, R9
  v177 = *((_DWORD *)v25 + 1);
  v172 = (TextureTessellator *)((char *)v10 + 12);
  _R1 = &Vec3::ZERO;
  v27 = v11;
    VLDR            S20, [R1,#4]
    VCVT.F32.U32    S2, S2
    VCVT.F32.U32    S0, S0
    VCVT.F32.S32    S26, S26
    VDIV.F32        S22, S18, S2
    VDIV.F32        S24, S18, S0
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v29 = a5;
    v31 = a7;
  else
    __asm
    {
      VMOV.F32        S0, #0.5
      VADD.F32        S30, S20, S28
      VLDR            S21, =0.0
    }
    v28 = v11;
    __asm { VMUL.F32        S17, S24, S0 }
    v169 = *(float *)&Vec3::ZERO;
    __asm { VMUL.F32        S19, S22, S0 }
    v30 = a5 - a7;
    do
      v165 = v28;
      if ( v31 <= v29 )
      {
        _R0 = v169;
        __asm
        {
          VMOV            S0, R0
          VADD.F32        S23, S0, S18
        }
      }
      else
        _R0 = v28 - v27;
        __asm { VMOV.F32        S27, S21 }
        v33 = v13;
        _R11 = 0;
          VCVT.F32.S32    S0, S0
          VMOV            S2, R0
          VADD.F32        S23, S2, S18
          VDIV.F32        S0, S0, S16
          VADD.F32        S25, S0, S19
        do
          __asm
          {
            VMOV            S0, R11
            VCVT.F32.S32    S29, S0
          }
          v37 = mce::ImageBuffer::get(v178, 0)
              + 4 * ((v28 % v24 + v24) % v24 + ((v29 + _R11) % v177 + v177) % v177 * v24);
          if ( (unsigned int)*(_BYTE *)(v37 + 3) >= 2 )
            __asm
            {
              VDIV.F32        S0, S29, S26
              VADD.F32        S29, S0, S17
            }
            if ( _ZF )
              v38 = v173;
              if ( v173 )
                v38 = (TextureTessellator *)1;
              TextureTessellator::_addLighting(
                v38,
                v33,
                v36,
                (const Vec3 *)&Vec3::NEG_UNIT_Y,
                (const unsigned __int8 *)v37,
                v153,
                v158,
                (bool)v38);
              __asm
              {
                VMOV            R8, S23
                VMOV            R5, S20
                VSTR            S25, [SP,#0xB8+var_B8]
                VMOV            R3, S27
                VSTR            S29, [SP,#0xB8+var_B4]
              }
              v42 = _R3;
              Tessellator::vertexUV(v33, _R8, _R5, _R3, v43, v44);
                VADD.F32        S0, S27, S18
                VMOV            R9, S0
              Tessellator::vertexUV(v33, _R8, _R5, _R9, v46, v47);
              Tessellator::vertexUV(v33, v169, _R5, _R9, v48, v49);
              Tessellator::vertexUV(v33, v169, _R5, v42, v50, v51);
              *(_QWORD *)&v52 = *(_QWORD *)v172;
              if ( *((_DWORD *)v174 + 3) == *((_DWORD *)v174 + 5) )
                std::vector<bool,std::allocator<bool>>::_M_insert_aux(v162, v52, v53, 0);
                v29 = a5;
                v30 = a5 - a7;
                v28 = v165;
              else
                v54 = *((_DWORD *)v174 + 4);
                *((_DWORD *)v174 + 4) = v54 + 1;
                if ( v54 == 31 )
                {
                  *((_DWORD *)v174 + 3) = v52 + 1;
                  *((_DWORD *)v174 + 4) = 0;
                }
                v36 = (const mce::ImageBuffer *)(1 << v53);
                *v52 &= ~(unsigned int)v36;
            if ( a9 == 1 )
              v55 = v173;
              v56 = v30;
                v55 = (TextureTessellator *)1;
              v57 = (const unsigned __int8 *)v37;
              v58 = v33;
              TextureTessellator::_addLighting(v55, v33, v36, (const Vec3 *)&Vec3::UNIT_Y, v57, v153, v158, (bool)v55);
                VMOV            R4, S30
                VMOV            R8, S27
              Tessellator::vertexUV(v33, v169, _R4, _R8, v61, v62);
              __asm { VADD.F32        S0, S27, S18 }
              v63 = v33;
                VMOV            R7, S0
              Tessellator::vertexUV(v63, v169, _R4, _R7, v65, v66);
                VMOV            R5, S23
              Tessellator::vertexUV(v58, _R5, _R4, _R7, v68, v69);
              __asm { VSTR            S25, [SP,#0xB8+var_B8] }
              v33 = v58;
              __asm { VSTR            S29, [SP,#0xB8+var_B4] }
              Tessellator::vertexUV(v58, _R5, _R4, _R8, v70, v71);
              *(_QWORD *)&v72 = *(_QWORD *)v172;
                std::vector<bool,std::allocator<bool>>::_M_insert_aux(v162, v72, v73, 0);
                v30 = v56;
                v74 = *((_DWORD *)v174 + 4);
                *((_DWORD *)v174 + 4) = v74 + 1;
                if ( v74 == 31 )
                  *((_DWORD *)v174 + 3) = v72 + 1;
                *v72 &= ~(1 << v73);
              v28 = v165;
          __asm { VADD.F32        S27, S27, S18 }
          ++_R11;
        while ( v30 + _R11 );
        v13 = v33;
        v27 = v168;
        v31 = a7;
      __asm { VMOV            R0, S23 }
      ++v28;
      v169 = _R0;
    while ( v28 != a6 );
    _R0 = &Vec3::ZERO;
    __asm { VLDR            S20, [R0,#4] }
  if ( v31 > v29 )
      VLDR            S17, =0.0
    v170 = *(float *)&v29;
    v163 = *(float *)&dword_2822498;
    v166 = v27 - a6;
    while ( 1 )
      if ( a6 < v27 )
        _R0 = v163;
          VADD.F32        S19, S0, S18
        goto LABEL_72;
      __asm
        VMOV.F32        S23, S17
        VMOV.F32        S25, S17
      v79 = &v180;
      _R0 = LODWORD(v170) - v29;
      v81 = 1;
      _R6 = 0;
        VMOV            S0, R0
        VCVT.F32.S32    S0, S0
        VDIV.F32        S21, S0, S26
        VADD.F32        S0, S21, S24
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S0, S18
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S23, S0 }
      __asm { VMRS            APSR_nzcv, FPSCR }
      _R0 = v163;
        VMOV            S2, R0
        VADD.F32        S19, S2, S18
        __asm { VMOVGT.F32      S23, S18 }
      do
        v84 = v79;
          VMOV            S0, R6
          VMOV.F32        S27, S17
          VDIV.F32        S29, S0, S16
          VADD.F32        S0, S29, S22
          VCMPE.F32       S0, #0.0
          VMRS            APSR_nzcv, FPSCR
          VCMPE.F32       S0, S18
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm { VMOVGT.F32      S27, S0 }
        __asm { VMRS            APSR_nzcv, FPSCR }
          __asm { VMOVGT.F32      S27, S18 }
        v79 = (int *)(mce::ImageBuffer::get(v178, 0)
                    + 4 * (((v27 + _R6) % v175 + v175) % v175 + (LODWORD(v170) % v177 + v177) % v177 * v175));
        if ( !(v166 + _R6) )
          _ZF = (v81 & 1) == 0;
          v86 = 1;
          v81 = 1;
          if ( !_ZF )
            goto LABEL_70;
LABEL_51:
          v88 = (char)v173;
          if ( v173 )
            v88 = 1;
          v159 = v88;
          v89 = (const unsigned __int8 *)v79;
          if ( v86 )
            v89 = (const unsigned __int8 *)v84;
          v90 = (const Vec3 *)&Vec3::NEG_UNIT_X;
            v90 = (const Vec3 *)Vec3::UNIT_X;
          TextureTessellator::_addLighting((TextureTessellator *)&Vec3::UNIT_X, v161, v85, v90, v89, v153, v158, v159);
            VMOV            R5, S25
            VMOV            R7, S20
            VSUB.F32        S0, S29, S22
            __asm { VMOVNE.F32      S29, S0 }
            VSTR            S29, [SP,#0xB8+var_B8]
            VSTR            S21, [SP,#0xB8+var_B4]
          Tessellator::vertexUV(v161, _R5, _R7, v163, v149, v154);
            VMOV            R8, S19
            VSTR            S23, [SP,#0xB8+var_B4]
          Tessellator::vertexUV(v161, _R5, _R7, _R8, v94, v95);
            VMOV            R7, S30
            VSUB.F32        S0, S27, S22
            __asm { VMOVNE.F32      S27, S0 }
            VSTR            S27, [SP,#0xB8+var_B8]
          Tessellator::vertexUV(v161, _R5, _R7, _R8, v150, v155);
          Tessellator::vertexUV(v161, _R5, _R7, v163, v97, v98);
          *(_QWORD *)&v99 = *(_QWORD *)v172;
          if ( *((_DWORD *)v174 + 3) == *((_DWORD *)v174 + 5) )
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(v162, v99, v100, v86);
          else
            v101 = *((_DWORD *)v174 + 4);
            *((_DWORD *)v174 + 4) = v101 + 1;
            if ( v101 == 31 )
              *((_DWORD *)v174 + 3) = v99 + 1;
              *((_DWORD *)v174 + 4) = 0;
            v102 = 1 << v100;
            v103 = *v99;
            if ( v86 == 1 )
              v104 = v102 | v103;
            else
              v104 = v103 & ~v102;
            *v99 = v104;
          v81 = v86;
          goto LABEL_70;
        v86 = 0;
        if ( (unsigned int)*((_BYTE *)v79 + 3) < 0xA )
        v87 = v81 ^ v86;
        v81 = v86;
        if ( v87 & 1 )
          goto LABEL_51;
LABEL_70:
        __asm { VADD.F32        S25, S25, S18 }
        ++_R6;
      while ( v168 + _R6 - 1 < a6 );
      v13 = v161;
      v29 = a5;
      v31 = a7;
      v24 = v175;
LABEL_72:
      __asm { VMOV            R0, S19 }
      v163 = _R0;
      if ( ++LODWORD(v170) == v31 )
        v176 = v24;
        _R0 = &Vec3::ZERO;
        __asm { VLDR            S20, [R0,#4] }
        goto LABEL_75;
  v176 = v24;
LABEL_75:
  if ( a6 <= v27 )
    goto LABEL_116;
    VADD.F32        S28, S20, S28
    VLDR            S30, =0.0
  v171 = *(float *)&v27;
  v164 = *(float *)&Vec3::ZERO;
  v167 = v29 - v31;
  do
    if ( v31 < v29 )
      _R0 = v164;
        VADD.F32        S17, S0, S18
      goto LABEL_115;
      VMOV.F32        S21, S30
      VMOV.F32        S23, S30
    v108 = &v180;
    _R0 = LODWORD(v171) - v27;
    v110 = v13;
    v111 = 1;
    _R6 = 0;
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VDIV.F32        S19, S0, S16
      VADD.F32        S0, S19, S22
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S0, S18
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S21, S0 }
    __asm { VMRS            APSR_nzcv, FPSCR }
    _R0 = v164;
      VMOV            S2, R0
      VADD.F32        S17, S2, S18
      __asm { VMOVGT.F32      S21, S18 }
      v114 = v108;
        VMOV            S0, R6
        VMOV.F32        S27, S30
        VDIV.F32        S25, S0, S26
        VADD.F32        S0, S25, S24
        __asm { VMOVGT.F32      S27, S0 }
        __asm { VMOVGT.F32      S27, S18 }
      v108 = (int *)(mce::ImageBuffer::get(v178, 0)
                   + 4 * ((LODWORD(v171) % v176 + v176) % v176 + ((v29 + _R6) % v177 + v177) % v177 * v176));
      if ( !(v167 + _R6) )
        _ZF = (v111 & 1) == 0;
        v116 = 1;
        v111 = 1;
        if ( !_ZF )
          goto LABEL_113;
LABEL_94:
        v118 = (char)v173;
        if ( v173 )
          v118 = 1;
        v160 = v118;
        v119 = (const unsigned __int8 *)v108;
        if ( v116 )
          v119 = (const unsigned __int8 *)v114;
        v120 = (const Vec3 *)&Vec3::NEG_UNIT_Z;
          v120 = (const Vec3 *)&Vec3::UNIT_Z;
        TextureTessellator::_addLighting((TextureTessellator *)&Vec3::UNIT_Z, v110, v115, v120, v119, v153, v158, v160);
          VMOV            R7, S28
          VMOV            R4, S23
          VSUB.F32        S0, S27, S24
          __asm { VMOVNE.F32      S27, S0 }
          VSTR            S19, [SP,#0xB8+var_B8]
          VSTR            S27, [SP,#0xB8+var_B4]
        Tessellator::vertexUV(v110, v164, _R7, _R4, v151, v156);
          VMOV            R9, S17
          VSTR            S21, [SP,#0xB8+var_B8]
        Tessellator::vertexUV(v110, _R9, _R7, _R4, v124, v125);
          VMOV            R7, S20
          VSTR            S19, [SP,#0xB8+var_B4]
        Tessellator::vertexUV(v110, _R9, _R7, _R4, v127, v128);
        __asm { VSUB.F32        S0, S25, S24 }
          __asm { VMOVNE.F32      S25, S0 }
          VSTR            S25, [SP,#0xB8+var_B4]
        Tessellator::vertexUV(v110, v164, _R7, _R4, v152, v157);
        *(_QWORD *)&v129 = *(_QWORD *)v172;
        if ( *((_DWORD *)v174 + 3) == *((_DWORD *)v174 + 5) )
          std::vector<bool,std::allocator<bool>>::_M_insert_aux(v162, v129, v130, v116);
        else
          v131 = *((_DWORD *)v174 + 4);
          *((_DWORD *)v174 + 4) = v131 + 1;
          if ( v131 == 31 )
            *((_DWORD *)v174 + 3) = v129 + 1;
            *((_DWORD *)v174 + 4) = 0;
          v132 = 1 << v130;
          v133 = *v129;
          if ( v116 == 1 )
            v134 = v132 | v133;
            v134 = v133 & ~v132;
          *v129 = v134;
        v111 = v116;
        goto LABEL_113;
      v116 = 0;
      if ( (unsigned int)*((_BYTE *)v108 + 3) < 0xA )
      v117 = v111 ^ v116;
      v111 = v116;
      if ( v117 & 1 )
        goto LABEL_94;
LABEL_113:
      __asm { VADD.F32        S23, S23, S18 }
      ++_R6;
    while ( a5 + _R6 - 1 < a7 );
    v13 = v110;
    v27 = v168;
LABEL_115:
    __asm { VMOV            R0, S17 }
    ++LODWORD(v171);
    v164 = _R0;
  while ( LODWORD(v171) != a6 );
LABEL_116:
  v136 = (mce::PolygonHelper *)(*((_DWORD *)v174 + 3) - *((_DWORD *)v174 + 1));
  v137 = *((_DWORD *)v174 + 4) - *((_DWORD *)v174 + 2) + 8 * (_DWORD)v136;
  v138 = mce::PolygonHelper::getVertsPerQuadFace(v136);
  result = Tessellator::beginIndices(v13, v137 * v138);
  v140 = (_DWORD *)*((_DWORD *)v174 + 1);
  v141 = *((_DWORD *)v174 + 2);
  v142 = (_DWORD *)*((_DWORD *)v174 + 3);
  v143 = *((_DWORD *)v174 + 4);
  v144 = 0;
  while ( v140 != v142 )
    v145 = v13;
    v146 = v144;
    v179 = (mce::ImageBuffer *)(4 * v141);
      v147 = *v140 & (1 << v141);
      Tessellator::quad(v145, v146, v147 != 0);
      ++v141;
      v146 += 4;
    while ( v141 != 32 );
    result = (char *)(v144 + 128);
    v13 = v145;
    v144 = v144 + 128 - (_DWORD)v179;
LABEL_117:
    ++v140;
    v141 = 0;
  while ( v143 != v141 )
    v148 = *v142 & (1 << v141);
    result = (char *)Tessellator::quad(v13, v144, v148 != 0);
    ++v141;
    v144 += 4;
    if ( v141 == 32 )
      goto LABEL_117;
  return result;
}


int __fastcall TextureTessellator::TextureTessellator(int result)
{
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_BYTE *)result = 0;
  return result;
}
