

signed int __fastcall LargeCaveFeature::isDiggable(_BYTE *a1, _BYTE *a2)
{
  int v2; // r2@1
  signed int result; // r0@10

  v2 = *a1;
  if ( v2 != *(_BYTE *)(Block::mStone + 4)
    && v2 != *(_BYTE *)(Block::mDirt + 4)
    && v2 != *(_BYTE *)(Block::mGrass + 4)
    && v2 != *(_BYTE *)(Block::mHardenedClay + 4)
    && v2 != *(_BYTE *)(Block::mStainedClay + 4)
    && v2 != *(_BYTE *)(Block::mSandStone + 4)
    && v2 != *(_BYTE *)(Block::mRedSandstone + 4)
    && v2 != *(_BYTE *)(Block::mMycelium + 4)
    && v2 != *(_BYTE *)(Block::mPodzol + 4) )
  {
    result = 0;
    if ( v2 == *(_BYTE *)(Block::mSand + 4) && *a2 != *(_BYTE *)(Block::mStillWater + 4) )
      result = 1;
  }
  else
    result = 1;
  return result;
}


signed int __fastcall LargeCaveFeature::_thinSand(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r2@2
  signed int result; // r0@3

  if ( a4 - 3 <= a5 || (v5 = *(_BYTE *)(a2 + 1), v5 != *(_BYTE *)(Block::mSand + 4)) )
  {
    result = 0;
  }
  else
    if ( v5 == *(_BYTE *)(a2 + 2) && v5 == *(_BYTE *)(a2 + 3) )
      result = 1;
  return result;
}


unsigned int __fastcall LargeCaveFeature::addRoom(int a1, int a2, Random *this, int a4, int a5)
{
  Random *v5; // r5@1
  int v6; // r7@1
  int v7; // r4@1
  int v8; // r6@1
  int v15; // [sp+4h] [bp-2Ch]@0

  v5 = this;
  v6 = a1;
  v7 = a4;
  v8 = a2;
  _R0 = j_Random::_genRandInt32(this);
  __asm
  {
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VMOV.F32        S4, #1.0
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VMOV.F32        S2, #6.0
    VCVT.F32.F64    S0, D0
    VMUL.F32        S0, S0, S2
    VADD.F32        S0, S0, S4
    VSTR            S0, [SP,#0x30+var_2C]
  }
  return j_LargeCaveFeature::addTunnel(v6, v8, v5, v7, a5, v15, 0, 0, -1, -1);
}


unsigned int __fastcall LargeCaveFeature::addTunnel(int a1, int a2, Random *this, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // r11@1
  __int64 v12; // r4@1
  int v13; // r1@1
  int v14; // r3@1
  unsigned int v15; // r0@1
  unsigned int v23; // r0@1
  int v27; // r1@1
  int v28; // r0@2
  int *v29; // r3@2
  int v30; // r2@2
  int v31; // r1@6
  unsigned int v32; // r4@9
  unsigned int result; // r0@11
  float v55; // r0@25
  float v58; // r0@25
  float v59; // r6@25
  __int64 v64; // kr08_8@27
  int v67; // r3@31
  int v68; // r1@31
  int v70; // r6@35
  int v72; // r2@37
  int v73; // r3@37
  signed int v76; // r5@41
  int v77; // r4@41
  int v78; // lr@44
  int v79; // r3@44
  int v80; // r8@44
  int v81; // r12@44
  char v82; // r10@46
  int v83; // r0@48
  int v84; // r3@48
  int v85; // lr@53
  _BYTE *v86; // r2@53
  int v87; // r11@53
  int v88; // r0@55
  int v89; // r5@56
  int v91; // r0@64
  int v92; // r5@65
  bool v93; // zf@65
  _BYTE *v94; // r0@73
  int v95; // r5@73
  int v96; // r0@80
  int v97; // r7@81
  bool v98; // zf@81
  int v99; // r3@86
  int v100; // r12@94
  int v102; // r9@97
  char v104; // r4@101
  int v105; // lr@101
  int v106; // r0@101
  int v107; // r0@105
  int v108; // r10@105
  char v109; // r2@105
  int v110; // r8@105
  int v111; // r3@105
  int v112; // r2@108
  bool v113; // zf@108
  int v114; // r0@121
  int v115; // r2@123
  bool v116; // zf@123
  unsigned int v117; // r0@127
  unsigned int v118; // r2@127
  unsigned int v119; // r3@127
  int v120; // r0@132
  int v122; // ST04_4@143
  int v123; // ST08_4@143
  int v124; // ST0C_4@143
  int v125; // [sp+4h] [bp-B64h]@0
  int v126; // [sp+8h] [bp-B60h]@0
  int v127; // [sp+Ch] [bp-B5Ch]@0
  int v128; // [sp+28h] [bp-B40h]@1
  int v129; // [sp+30h] [bp-B38h]@12
  __int64 *v131; // [sp+3Ch] [bp-B2Ch]@1
  signed int v134; // [sp+48h] [bp-B20h]@6
  int v144; // [sp+80h] [bp-AE8h]@44
  int v151; // [sp+B8h] [bp-AB0h]@8
  int v152; // [sp+C0h] [bp-AA8h]@1
  int v153; // [sp+C4h] [bp-AA4h]@48
  signed int v154; // [sp+CCh] [bp-A9Ch]@41
  int v155; // [sp+D4h] [bp-A94h]@48
  int v156; // [sp+D8h] [bp-A90h]@51
  int v157; // [sp+E4h] [bp-A84h]@48
  int v158; // [sp+F4h] [bp-A74h]@39
  int v159; // [sp+104h] [bp-A64h]@44
  int v160; // [sp+10Ch] [bp-A5Ch]@37
  int v161; // [sp+118h] [bp-A50h]@48
  unsigned int v162; // [sp+11Ch] [bp-A4Ch]@1
  unsigned int v163; // [sp+120h] [bp-A48h]@1
  char v164; // [sp+800h] [bp-368h]@1
  int v165; // [sp+AE0h] [bp-88h]@1
  char v166; // [sp+AE4h] [bp-84h]@1
  int v167; // [sp+AE8h] [bp-80h]@1
  int v168; // [sp+AECh] [bp-7Ch]@3
  int v169; // [sp+AF0h] [bp-78h]@1
  int v170; // [sp+AF4h] [bp-74h]@1
  int v171; // [sp+AF8h] [bp-70h]@1

  v128 = a1;
  v10 = a2;
  _R8 = &v169;
  v131 = (__int64 *)a4;
  v152 = a2;
  v12 = *(_QWORD *)a4;
  v14 = *(_QWORD *)a5 >> 32;
  v13 = *(_QWORD *)a5;
  v171 = *(_DWORD *)(a5 + 8);
  v170 = v14;
  v169 = v13;
  v15 = j_Random::_genRandInt32(this);
  _R3 = &v164;
  _R9 = a10;
  __asm { VLDR            S16, [R3,#0x374] }
  HIDWORD(_R6) = 1;
  v23 = v15 >> 1;
  __asm { VLDR            S28, [R3,#0x370] }
  _LR = 16 * HIDWORD(v12) | 8;
  _R12 = 16 * v12 | 8;
  __asm { VLDR            S18, [R3,#0x36C] }
  v162 = v23;
  v165 = 625;
  v27 = 0;
  v166 = 0;
  v167 = 0;
  v163 = v23;
  do
  {
    v28 = v23 ^ (v23 >> 30);
    v29 = (int *)(&v162 + v27);
    v30 = v27++ + 1812433253 * v28;
    v23 = HIDWORD(_R6)++ + 1812433253 * v28;
    v29[2] = v30 + 1;
  }
  while ( v27 != 397 );
  __asm
    VMOV            S0, LR
    VCVT.F32.S32    S19, S0
    VMOV            S0, R12
    VSTR            S19, [SP,#0xB68+var_B24]
    VCVT.F32.S32    S29, S0
  v165 = 624;
  v168 = 398;
  __asm { VSTR            S29, [SP,#0xB68+var_B28] }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    _R9 = 112 - j_Random::_genRandInt32((Random *)&v162) % 0x1C;
  v31 = a9;
  v134 = _R9;
  if ( a9 == -1 )
    v31 = _R9 / 2;
  v151 = v31;
  if ( (unsigned int)(_R9 + 1) >= 3 )
    v32 = j_Random::_genRandInt32((Random *)&v162) % (_R9 / 2);
  else
    v32 = 0;
  result = j_Random::_genRandInt32((Random *)&v162);
  if ( _R9 > v151 )
    __asm
    {
      VMOV.F32        S0, #16.0
      VMOV.F32        S2, #18.0
      VMOV.F32        S4, #-16.0
      VMOV            S6, R9
    }
    v129 = v32 + _R9 / 4;
      VCVT.F32.S32    S6, S6
      VLDR            S17, =0.0
      VADD.F32        S8, S19, S0
      VADD.F32        S0, S29, S0
    _R2 = dword_1AEAF6C;
      VMOV.F32        S30, #0.5
      VLDR            D12, =-0.7
    _R1 = &mce::Math::PI;
      VMOV.F32        S20, #1.0
      VSTR            S6, [SP,#0xB68+var_B30]
      VMOV.F32        S22, S17
      VSTR            S8, [SP,#0xB68+var_B1C]
      VSTR            S0, [SP,#0xB68+var_B18]
      VADD.F32        S0, S18, S2
      VCVT.F64.F32    D1, S18
      VSTR            D1, [SP,#0xB68+var_B08]
      VADD.F32        S2, S19, S4
      VMUL.F32        S0, S0, S0
      VMOV.F32        S18, S6
      VSTR            S2, [SP,#0xB68+var_B14]
      VADD.F32        S2, S29, S4
      VSTR            S0, [SP,#0xB68+var_AFC]
      VSTR            S2, [SP,#0xB68+var_B0C]
      VLDR            S2, [R1]
      VSTR            S2, [SP,#0xB68+var_AF4]
    if ( result == 6 * (result / 6) )
      _R2 = &dword_1AEAF6C[1];
      VLDR            S0, [R2]
      VSTR            S0, [SP,#0xB68+var_AF8]
    while ( 1 )
      __asm { VMOV            R4, S16 }
      _R0 = j_cosf(_R4);
      __asm
      {
        VCVT.F64.F32    D0, S28
        VMOV            R6, R7, D0
        VMOV            S26, R0
      }
      _R0 = COERCE_UNSIGNED_INT64(j_cos(_R6));
        VCVT.F64.F32    D13, S26
        VMOV            D0, R0, R1
        VLDR            S2, [R8]
      _R0 = v151;
        VMOV.F32        S31, S17
        VMUL.F64        D0, D0, D13
        VCVT.F64.F32    D1, S2
        VADD.F64        D0, D1, D0
        VMOV            S2, R0
        VCVT.F32.F64    S23, D0
        VCVT.F32.S32    S2, S2
        VLDR            S4, [SP,#0xB68+var_AF4]
        VMUL.F32        S2, S4, S2
        VDIV.F32        S17, S2, S18
      _R0 = j_sinf(_R4);
        VMOV            S21, R0
        VSTR            S23, [R8]
      _R0 = j_sin(_R6);
        VLDR            S0, [R8,#4]
        VMOV            D1, R0, R1
        VCVT.F64.F32    D2, S17
        VADD.F32        S21, S0, S21
        VMUL.F64        D0, D1, D13
        VSTR            S21, [R8,#4]
        VMOV            R0, R1, D2
        VLDR            S2, [R8,#8]
        VMOV.F32        S27, S31
        VCVT.F32.F64    S26, D0
        VSTR            S26, [R8,#8]
      LODWORD(_R6) = COERCE_UNSIGNED_INT64(j_sin(_R0));
      _R0 = j_Random::_genRandInt32((Random *)&v162);
        VMOV            S0, R0
        VCVT.F64.U32    D0, S0
        VSTR            D0, [SP,#0xB68+var_AB8]
        VSTR            D0, [SP,#0xB68+var_AC0]
      HIDWORD(_R6) = j_Random::_genRandInt32((Random *)&v162);
        VSTR            D0, [SP,#0xB68+var_AC8]
        VSTR            D0, [SP,#0xB68+var_AD0]
        VLDR            S2, =0.1
        VSTR            D0, [SP,#0xB68+var_AD8]
        VMOV            S0, R7
        VMOV.F32        S4, S2
        VSTR            D0, [SP,#0xB68+var_AE0]
        VMUL.F32        S2, S22, S4
        VLDR            S0, [SP,#0xB68+var_AF8]
        VMUL.F32        S4, S27, S4
        VMUL.F32        S0, S0, S16
        VADD.F32        S28, S28, S4
        VADD.F32        S16, S0, S2
      if ( _ZF )
        goto LABEL_147;
      _LR = &v164;
        VLDR            S0, [LR,#0x36C]
        VCMPE.F32       S0, S20
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) && v151 == v129 )
        __asm
        {
          VMOV            S0, R0
          VLDR            D1, =2.32830644e-10
          VCVT.F64.U32    D0, S0
          VMOV.F64        D11, D1
          VMUL.F64        D0, D0, D11
          VCVT.F32.F64    S0, D0
          VLDR            S2, [SP,#0xB68+var_AF4]
          VMUL.F32        S0, S0, S30
          VMUL.F32        S20, S2, S30
          VLDR            S2, =0.33333
          VMUL.F32        S18, S16, S2
          VADD.F32        S0, S0, S30
          VSUB.F32        S2, S28, S20
          VSTR            S18, [SP,#0xB68+var_B5C]
          VSTR            S2, [SP,#0xB68+var_B60]
          VSTR            S0, [SP,#0xB68+var_B64]
        }
        j_LargeCaveFeature::addTunnel(v128, v10, (Random *)&v162, (int)v131, (int)_R8, v125, v126, v127, v129, _R9);
        _R0 = j_Random::_genRandInt32((Random *)&v162);
          VADD.F32        S2, S20, S28
        return j_LargeCaveFeature::addTunnel(
                 v128,
                 v10,
                 (Random *)&v162,
                 (int)v131,
                 (int)_R8,
                 v122,
                 v123,
                 v124,
                 v129,
                 _R9);
      if ( _R0 & 3 )
LABEL_147:
          VSUB.F32        S0, S23, S29
          VSUB.F32        S4, S26, S19
        result = _R9 - v151;
          VMOV            S2, R0
          VCVT.F32.S32    S2, S2
          VMUL.F32        S0, S0, S0
          VMUL.F32        S4, S4, S4
          VMUL.F32        S2, S2, S2
          VSUB.F32        S0, S0, S2
          VLDR            S2, [SP,#0xB68+var_AFC]
          VADD.F32        S0, S0, S4
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          return result;
          VMOV            D0, R6, R4
          VLDR            D1, [SP,#0xB68+var_B08]
          VMUL.F64        D0, D0, D1
          VMOV.F64        D1, #1.5
          VADD.F64        D0, D0, D1
          VCVT.F32.F64    S17, D0
          VADD.F32        S0, S17, S17
          VLDR            S2, [SP,#0xB68+var_B0C]
          VSUB.F32        S2, S2, S0
          VCMPE.F32       S23, S2
        if ( !(_NF ^ _VF) )
          __asm
          {
            VLDRGE          S2, [SP,#0xB68+var_B14]
            VSUBGE.F32      S2, S2, S0
            VCMPEGE.F32     S26, S2
            VMRSGE          APSR_nzcv, FPSCR
            VLDR            S2, [SP,#0xB68+var_B18]
            VADD.F32        S2, S2, S0
            VCMPE.F32       S23, S2
            VMRS            APSR_nzcv, FPSCR
          }
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            __asm
            {
              VLDRLE          S2, [SP,#0xB68+var_B1C]
              VADDLE.F32      S0, S2, S0
              VCMPELE.F32     S26, S0
              VMRSLE          APSR_nzcv, FPSCR
            }
            _R5 = &v164;
              VSTR            S27, [SP,#0xB68+var_B00]
              VLDR            S0, [R5,#0x380]
              VMUL.F32        S31, S17, S0
              VSUB.F32        S0, S23, S17
              VMOV            R0, S0
            _R0 = j_floorf_0(_R0);
              VADD.F32        S0, S23, S17
              VSUB.F32        S2, S21, S31
              VMOV.F32        S29, S16
              VMOV            S16, R0
              VADD.F32        S27, S26, S17
              VMOV            R1, S0
              VMOV            R4, S2
            _R0 = j_floorf_0(_R1);
            __asm { VMOV            S18, R0 }
            v55 = j_floorf_0(_R4);
            __asm { VADD.F32        S0, S21, S31 }
            _R4 = v55;
            __asm { VMOV            R0, S0 }
            v58 = j_floorf_0(_R0);
            __asm { VSUB.F32        S0, S26, S17 }
            v59 = v58;
              VMOV.F32        S19, S28
              VMOV            S28, R0
              VMOV            R0, S27
              VMOV            S0, R0
              VCVTR.S32.F32   S6, S18
              VCVTR.S32.F32   S8, S16
              VCVTR.S32.F32   S10, S28
              VCVTR.S32.F32   S0, S0
              VMOV            S2, R6
            v64 = *v131;
              VMOV            S4, R4
              VCVTR.S32.F32   S2, S2
              VCVTR.S32.F32   S4, S4
              VMOV.F32        S16, S29
              VMOV.F32        S28, S19
              VMOV            R1, S2
            HIDWORD(_R6) = _R1 + 1;
            if ( _R1 + 1 <= 1 )
              HIDWORD(_R6) = 1;
            __asm { VMOV            R1, S4 }
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              HIDWORD(_R6) = 120;
            v67 = _R1 - 1;
            v68 = 1;
            if ( v67 > 1 )
              v68 = v67;
            __asm { VMOV            R3, S0 }
              v68 = HIDWORD(_R6);
            v70 = _R3 - 16 * HIDWORD(v64) + 1;
            __asm { VMOV            R3, S10 }
              v70 = 16;
            v160 = v70;
            v72 = _R3 - 16 * HIDWORD(v64);
            v73 = v72 - 1;
            if ( v72 < 1 )
              v73 = 0;
            v158 = v73;
            __asm { VMOV            R3, S6 }
            result = _R3 - 16 * v64 + 1;
            __asm { VMOV            R3, S8 }
              result = 16;
            v154 = result;
            v76 = _R3 - 16 * v64;
            v77 = v76 - 1;
            if ( v76 < 1 )
              v77 = 0;
            if ( v77 >= (signed int)result )
              goto LABEL_139;
            v78 = *(_DWORD *)(v10 + 16);
            v79 = *(_DWORD *)(v10 + 20);
            LODWORD(_R6) = *(_DWORD *)v10;
            v80 = v68 - 1;
            v144 = *(_DWORD *)(v10 + 16);
            v81 = HIDWORD(_R6) + 2;
            v159 = *(_DWORD *)(v10 + 20);
            if ( v72 <= 1 )
              v72 = 1;
            v82 = 0;
            if ( v76 <= 1 )
              v76 = 1;
              VLDR            S19, [SP,#0xB68+var_B24]
              VLDR            S29, [SP,#0xB68+var_B28]
              VLDR            S18, [SP,#0xB68+var_B30]
              VLDR            S27, [SP,#0xB68+var_B00]
            v157 = HIDWORD(_R6);
            v161 = v77;
            v155 = HIDWORD(_R6) + 1;
            v83 = v78 * v79;
            v84 = HIDWORD(_R6) + v79 * (v72 + v78 * (v76 - 1) - 1) + LODWORD(_R6) + 1;
            v153 = v83;
            do
              if ( v158 >= v160 )
              {
                v156 = v84;
              }
              else if ( v155 >= v80 )
                v85 = v158;
                v86 = (_BYTE *)v84;
                v87 = *(_BYTE *)(Block::mFlowingWater + 4);
                do
                {
                  if ( v85 == v160 - 1 )
                  {
                    v88 = 0;
                    do
                    {
                      v89 = v86[v88];
                      _ZF = v89 == v87;
                      if ( v89 != v87 )
                      {
                        HIDWORD(_R6) = *(_BYTE *)(Block::mStillWater + 4);
                        _ZF = v89 == HIDWORD(_R6);
                      }
                      if ( _ZF )
                        v82 = 1;
                      --v88;
                    }
                    while ( v81 + v88 >= v68 );
                  }
                  else if ( v85 == v158 )
                    v91 = 0;
                      v92 = v86[v91];
                      v93 = v92 == v87;
                      if ( v92 != v87 )
                        v93 = v92 == HIDWORD(_R6);
                      if ( v93 )
                      --v91;
                    while ( v81 + v91 >= v68 );
                  else if ( v161 == v154 - 1 )
                    v94 = v86;
                    v95 = v81;
                      HIDWORD(_R6) = *v94;
                      if ( HIDWORD(_R6) == v87 )
                      else if ( HIDWORD(_R6) == *(_BYTE *)(Block::mStillWater + 4) )
                      --v95;
                      --v94;
                    while ( v95 >= v68 );
                  else
                    v96 = v155;
                      v97 = *(_BYTE *)(LODWORD(_R6) + (v144 * v161 + v85) * v159 + v96);
                      v98 = v97 == v87;
                      if ( v97 != v87 )
                        v98 = v97 == *(_BYTE *)(Block::mStillWater + 4);
                      if ( v98 )
                      v99 = v68;
                      if ( v96 == v80 )
                        v99 = v96;
                      HIDWORD(_R6) = v161;
                      if ( v161 == v77 )
                      v96 = v99 - 1;
                    while ( v99 >= v68 );
                  ++v85;
                  v86 += v159;
                }
                while ( v85 < v160 );
              else
              v10 = v152;
              v84 = v156 + v153;
              ++v161;
            while ( v161 < v154 );
            _R8 = &v169;
            _R9 = v134;
            if ( !(v82 & 1) )
              break;
LABEL_140:
        VLDR            D0, =2.32830644e-10
        VLDR            D1, [SP,#0xB68+var_AC0]
        VMOV.F64        D5, D0
      result = v151++ + 1;
        VLDR            D0, [SP,#0xB68+var_AB8]
        VMUL.F64        D1, D1, D5
        VMUL.F64        D0, D0, D5
        VLDR            D2, [SP,#0xB68+var_AC8]
        VLDR            D3, [SP,#0xB68+var_AD0]
        VMUL.F64        D2, D2, D5
        VMUL.F64        D3, D3, D5
        VCVT.F32.F64    S0, D0
        VCVT.F32.F64    S2, D1
        VLDR            D4, [SP,#0xB68+var_AD8]
        VSUB.F32        S0, S0, S2
        VLDR            D6, [SP,#0xB68+var_AE0]
        VMUL.F64        D4, D4, D5
        VMUL.F64        D5, D6, D5
        VCVT.F32.F64    S2, D2
        VCVT.F32.F64    S4, D3
        VCVT.F32.F64    S6, D4
        VSUB.F32        S2, S2, S4
        VMOV.F32        S4, #4.0
        VCVT.F32.F64    S8, D5
        VADD.F32        S0, S0, S0
        VMUL.F32        S4, S6, S4
        VLDR            S6, =0.9
        VMUL.F32        S6, S22, S6
        VMUL.F32        S0, S8, S0
        VMOV.F32        S8, #0.75
        VADD.F32        S22, S0, S6
        VMUL.F32        S8, S27, S8
        VADD.F32        S17, S2, S8
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        return result;
    result = v154;
    v100 = v77;
    if ( v77 < v154 )
        VSUB.F32        S0, S30, S26
        VSUB.F32        S2, S30, S23
      do
        _R0 = 16 * v64 + v100;
          VMOV            S4, R0
          VCVT.F32.S32    S4, S4
        if ( v158 < v160 )
          __asm { VADD.F32        S4, S2, S4 }
          v102 = v158;
            VDIV.F32        S4, S4, S17
            VMUL.F32        S4, S4, S4
          do
            _R0 = 16 * HIDWORD(v64) + v102;
              VMOV            S6, R0
              VCVT.F32.S32    S6, S6
              VADD.F32        S6, S0, S6
              VDIV.F32        S6, S6, S17
              VMUL.F32        S6, S6, S6
              VADD.F32        S6, S6, S4
              VCMPE.F32       S6, S20
              VMRS            APSR_nzcv, FPSCR
            if ( _NF ^ _VF && v157 > v68 )
              v104 = 0;
              v105 = (*(_QWORD *)(v152 + 16) >> 32) * (v102 + v100 * *(_QWORD *)(v152 + 16));
              v106 = v157 - 1;
              do
                LODWORD(_R6) = v106;
                __asm
                  VMOV            S8, R6
                  VCVT.F32.S32    S8, S8
                  VADD.F32        S8, S8, S30
                  VSUB.F32        S8, S8, S21
                  VDIV.F32        S8, S8, S31
                  VCVT.F64.F32    D5, S8
                  VCMPE.F64       D5, D12
                  VMRS            APSR_nzcv, FPSCR
                if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                  __asm
                    VMUL.F32        S8, S8, S8
                    VADD.F32        S8, S6, S8
                    VCMPE.F32       S8, S20
                    VMRS            APSR_nzcv, FPSCR
                  if ( _NF ^ _VF )
                    HIDWORD(_R6) = *(_DWORD *)v152 + v105 + v106;
                    v107 = *(_BYTE *)(HIDWORD(_R6) + 1);
                    v108 = Block::mGrass;
                    v109 = 0;
                    v110 = *(_BYTE *)(HIDWORD(_R6) + 2);
                    v111 = *(_BYTE *)(Block::mGrass + 4);
                    if ( v107 == v111 )
                      v109 = 1;
                    v104 |= v109;
                    if ( v107 == *(_BYTE *)(Block::mStone + 4) )
                      goto LABEL_146;
                    v112 = *(_BYTE *)(Block::mDirt + 4);
                    v113 = v107 == v112;
                    if ( v107 != v112 )
                      v113 = v107 == v111;
                    if ( v113
                      || v107 == *(_BYTE *)(Block::mHardenedClay + 4)
                      || v107 == *(_BYTE *)(Block::mStainedClay + 4)
                      || v107 == *(_BYTE *)(Block::mSandStone + 4)
                      || v107 == *(_BYTE *)(Block::mRedSandstone + 4)
                      || v107 == *(_BYTE *)(Block::mMycelium + 4)
                      || v107 == *(_BYTE *)(Block::mPodzol + 4)
                      || v107 == *(_BYTE *)(Block::mSand + 4) && v110 != *(_BYTE *)(Block::mStillWater + 4) )
LABEL_146:
                      if ( LODWORD(_R6) + 1 > 10 )
                        v114 = *(_DWORD *)(v152 + 20);
                        if ( (signed __int16)v114 - 3 >= LODWORD(_R6) + 1 && v110 == *(_BYTE *)(Block::mSand + 4) )
                        {
                          v115 = *(_BYTE *)(HIDWORD(_R6) + 3);
                          v116 = v110 == v115;
                          if ( v110 == v115 )
                            v116 = v110 == *(_BYTE *)(HIDWORD(_R6) + 4);
                          if ( v116 )
                          {
                            *(_BYTE *)(HIDWORD(_R6) + 2) = *(_BYTE *)(Block::mSandStone + 4);
                            v117 = LODWORD(_R6) + v114 * (v102 + v100 * *(_DWORD *)(v152 + 16)) + 1;
                            v118 = *(_BYTE *)(*(_DWORD *)(v152 + 8) + (v117 >> 1));
                            v119 = v118 >> 4;
                            if ( !(v117 & 1) )
                              v119 = v118 & 0xF;
                            if ( v119 == 1 )
                              *(_BYTE *)(HIDWORD(_R6) + 2) = *(_BYTE *)(Block::mRedSandstone + 4);
                          }
                        }
                        *(_BYTE *)(HIDWORD(_R6) + 1) = BlockID::AIR;
                        if ( v104 & 1 )
                          v104 = 1;
                          v120 = *(_DWORD *)v152 + v105;
                          if ( *(_BYTE *)(v120 + LODWORD(_R6)) == *(_BYTE *)(Block::mDirt + 4) )
                            *(_BYTE *)(v120 + LODWORD(_R6)) = *(_BYTE *)(v108 + 4);
                        else
                          v104 = 0;
                      else
                        *(_BYTE *)(HIDWORD(_R6) + 1) = *(_BYTE *)(Block::mStillLava + 4);
                v106 = LODWORD(_R6) - 1;
              while ( SLODWORD(_R6) > v68 );
            ++v102;
          while ( v102 < v160 );
        ++v100;
        result = v154;
      while ( v100 < v154 );
LABEL_139:
    _R8 = &v169;
    _R9 = v134;
      VLDR            S19, [SP,#0xB68+var_B24]
      VLDR            S29, [SP,#0xB68+var_B28]
      VLDR            S18, [SP,#0xB68+var_B30]
      VLDR            S27, [SP,#0xB68+var_B00]
    if ( _ZF )
      return result;
    goto LABEL_140;
  return result;
}


int __fastcall LargeCaveFeature::addFeature(Random *a1, int a2, int a3, int a4, Random *a5, int a6, int a7)
{
  Random *v7; // r7@1
  Random *v8; // r11@1
  int v9; // r10@1
  unsigned int v10; // r8@1
  unsigned int v11; // r5@1
  unsigned int v12; // r4@1
  unsigned int v13; // r9@1
  unsigned int v14; // r1@1
  int result; // r0@1
  float *v21; // r5@3
  unsigned __int8 v22; // r6@3
  int v23; // r1@3
  char v24; // r8@4
  unsigned int v25; // r4@4
  char v27; // r0@4
  Random *v30; // r9@5
  int v31; // r8@5
  int v32; // r6@5
  signed int v33; // r7@5
  int v35; // ST08_4@6
  int v36; // ST0C_4@6
  signed int v37; // r10@7
  int v42; // [sp+4h] [bp-A4h]@0
  int v43; // [sp+8h] [bp-A0h]@0
  int v44; // [sp+Ch] [bp-9Ch]@0
  int v45; // [sp+28h] [bp-80h]@1
  int v46; // [sp+2Ch] [bp-7Ch]@1
  int v47; // [sp+30h] [bp-78h]@4
  float v48; // [sp+34h] [bp-74h]@3

  v7 = a5;
  v8 = a1;
  v46 = a3;
  v9 = a2;
  v10 = j_Random::_genRandInt32(a5);
  v11 = j_Random::_genRandInt32(a5);
  v12 = j_Random::_genRandInt32(a5);
  v13 = j_Random::_genRandInt32(a5);
  v14 = v11 % (v10 % 0x28 + 1) + 1;
  result = v12 / v14;
  v45 = v12 % v14;
  if ( v12 % v14 )
  {
    result = v13 % 0xF;
    if ( !(v13 % 0xF) )
    {
      __asm
      {
        VMOV.F32        S17, #6.0
        VMOV.F32        S22, #1.0
        VMOV.F32        S24, #-0.5
        VMOV.F32        S26, #0.25
        VLDR            D9, =2.32830644e-10
      }
      _R2 = &mce::Math::PI;
      v21 = &v48;
      v22 = 0;
      __asm { VLDR            S0, [R2] }
      v23 = 0;
      __asm { VADD.F32        S16, S0, S0 }
      do
        v47 = v23;
        v24 = j_Random::_genRandInt32(v7);
        v25 = j_Random::_genRandInt32(v7) % 0x78 + 8;
        _R4 = j_Random::_genRandInt32(v7) % v25;
        v27 = j_Random::_genRandInt32(v7);
        __asm { VMOV            S2, R4 }
        _R0 = v27 & 0xF | 16 * a6;
        __asm
        {
          VMOV            S0, R0
          VCVT.F32.S32    S0, S0
          VCVT.F32.S32    S2, S2
        }
        _R0 = 16 * a7 | v24 & 0xF;
          VMOV            S4, R0
          VCVT.F32.S32    S4, S4
          VSTR            S0, [SP,#0xA8+var_74]
          VSTR            S2, [SP,#0xA8+var_70]
          VSTR            S4, [SP,#0xA8+var_6C]
        if ( j_Random::_genRandInt32(v7) & 3 )
          v30 = v7;
          v31 = (int)v8;
          v32 = v9;
          v33 = 1;
        else
          _R0 = j_Random::_genRandInt32(v7);
          __asm
          {
            VMOV            S0, R0
            VCVT.F64.U32    D0, S0
          }
          v35 = v22;
          v36 = v22;
            VMUL.F64        D0, D0, D9
            VCVT.F32.F64    S0, D0
            VMUL.F32        S0, S0, S17
            VADD.F32        S0, S0, S22
            VSTR            S0, [SP,#0xA8+var_A4]
          j_LargeCaveFeature::addTunnel((int)v8, v9, v7, v46, (int)v21, v42, v35, v36, -1, -1);
          v33 = (j_Random::_genRandInt32(v7) & 3) + 1;
        v37 = 0;
        do
          _R4 = j_Random::_genRandInt32(v30);
          _R0 = j_Random::_genRandInt32(v30);
            VCVT.F64.U32    D14, S0
            VCVT.F64.U32    D15, S0
            VMOV            S0, R4
            VCVT.F64.U32    D10, S0
            VMUL.F64        D1, D14, D9
            VMUL.F64        D2, D15, D9
            VMUL.F64        D3, D10, D9
            VCVT.F32.F64    S2, D1
            VCVT.F32.F64    S4, D2
            VCVT.F32.F64    S6, D3
            VADD.F32        S2, S2, S24
            VADD.F32        S4, S4, S4
            VMUL.F32        S6, S16, S6
            VMUL.F32        S2, S2, S26
            VADD.F32        S0, S4, S0
            VSTR            S6, [SP,#0xA8+var_A0]
            VSTR            S2, [SP,#0xA8+var_9C]
          j_LargeCaveFeature::addTunnel(v31, v32, v30, v46, (int)&v48, v42, v43, v44, 0, 0);
          ++v37;
        while ( v37 < v33 );
        v21 = &v48;
        result = v45;
        v9 = v32;
        v23 = v47 + 1;
        v8 = (Random *)v31;
        v22 = 0;
        v7 = v30;
      while ( v47 + 1 < v45 );
    }
  }
  return result;
}


int __fastcall LargeCaveFeature::apply(__int64 a1, int a2, Dimension *this, Random *a4)
{
  int v4; // r11@1
  Dimension *v5; // r0@1
  unsigned int v6; // r6@1
  int v7; // r0@1
  signed int v8; // r1@1
  int v9; // r3@2
  int v10; // r2@2
  char *v11; // r3@2
  unsigned int v12; // r5@3
  unsigned int v13; // r0@3
  int v14; // r8@3
  int v15; // r6@4
  Dimension *v16; // r0@5
  int v17; // r9@5
  unsigned int v18; // r0@5
  int v19; // r1@5
  signed int v20; // r2@5
  int v21; // r0@6
  char *v22; // r5@6
  int v23; // r3@6
  int v24; // r3@6
  int v25; // r0@7
  bool v26; // nf@7
  unsigned __int8 v27; // vf@7
  int result; // r0@8
  int v29; // [sp+10h] [bp-40h]@3
  int v30; // [sp+14h] [bp-3Ch]@3
  __int64 v31; // [sp+1Ch] [bp-34h]@1
  Dimension *v32; // [sp+24h] [bp-2Ch]@1

  v32 = this;
  v4 = a2;
  v31 = a1;
  v5 = j_Dimension::getBiomes(this);
  v6 = *((_DWORD *)j_ThreadLocal<BiomeSource>::getLocal((int)v5) + 12);
  j_Random::_checkThreadId(a4);
  *(_DWORD *)a4 = v6;
  *((_DWORD *)a4 + 625) = 625;
  v7 = 0;
  v8 = 1;
  *((_BYTE *)a4 + 2504) = 0;
  *((_DWORD *)a4 + 627) = 0;
  *((_DWORD *)a4 + 1) = v6;
  do
  {
    v9 = v6 ^ (v6 >> 30);
    v6 = v8++ + 1812433253 * v9;
    v10 = v7 + 1812433253 * v9;
    v11 = (char *)a4 + 4 * v7++;
    *((_DWORD *)v11 + 2) = v10 + 1;
  }
  while ( v7 != 397 );
  *((_DWORD *)a4 + 625) = 624;
  *((_DWORD *)a4 + 628) = 398;
  v12 = j_Random::_genRandInt32(a4);
  v13 = j_Random::_genRandInt32(a4);
  v14 = *(_DWORD *)v4 - 8;
  v29 = (v12 >> 1) | 1;
  v30 = (v13 >> 1) | 1;
    v15 = *(_DWORD *)(v4 + 4) - 8;
    do
    {
      v16 = j_Dimension::getBiomes(v32);
      v17 = *((_DWORD *)j_ThreadLocal<BiomeSource>::getLocal((int)v16) + 12);
      j_Random::_checkThreadId(a4);
      v18 = (v14 * v29 + v15 * v30) ^ v17;
      *(_DWORD *)a4 = v18;
      *((_DWORD *)a4 + 625) = 625;
      v19 = 0;
      *((_BYTE *)a4 + 2504) = 0;
      *((_DWORD *)a4 + 627) = 0;
      v20 = 1;
      *((_DWORD *)a4 + 1) = v18;
      do
      {
        v21 = v18 ^ (v18 >> 30);
        v22 = (char *)a4 + 4 * v19;
        v23 = v19++ + 1812433253 * v21;
        v18 = v20++ + 1812433253 * v21;
        v24 = v23 + 1;
        *((_DWORD *)v22 + 2) = v24;
      }
      while ( v19 != 397 );
      *((_DWORD *)a4 + 625) = 624;
      *((_DWORD *)a4 + 628) = 398;
      j_LargeCaveFeature::addFeature((Random *)v31, SHIDWORD(v31), v4, v24, a4, v14, v15);
      v25 = *(_DWORD *)(v4 + 4) + 8;
      v27 = __OFSUB__(v15, v25);
      v26 = v15++ - v25 < 0;
    }
    while ( v26 ^ v27 );
    result = *(_DWORD *)v4 + 8;
    v27 = __OFSUB__(v14, result);
    v26 = v14++ - result < 0;
  while ( v26 ^ v27 );
  return result;
}
