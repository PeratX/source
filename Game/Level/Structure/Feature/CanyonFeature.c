

unsigned int __fastcall CanyonFeature::addFeature(Random *a1, int a2, int a3, int a4, Random *a5, int a6, int a7)
{
  int v7; // r4@1
  int v8; // r5@1
  unsigned int result; // r0@1
  unsigned int v15; // r7@2
  int v24; // [sp+4h] [bp-6Ch]@0
  int v25; // [sp+8h] [bp-68h]@0
  int v26; // [sp+Ch] [bp-64h]@0
  float v27; // [sp+1Ch] [bp-54h]@8
  int v28; // [sp+24h] [bp-4Ch]@2

  v7 = a3;
  v8 = a2;
  result = j_Random::_genRandInt32(a5) % 0x96;
  if ( !result )
  {
    v28 = 0;
    _R0 = j_Random::_genRandInt32(a5) & 0xF | 16 * a6;
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VSTR            S0, [SP,#0x70+var_54]
    }
    v15 = j_Random::_genRandInt32(a5) % 0x28 + 8;
    _R0 = j_Random::_genRandInt32(a5) % v15 + 20;
      VCVT.F32.S32    S16, S0
      VSTR            S16, [SP,#0x70+var_50]
    if ( j_Random::_genRandInt32(a5) <= 1 )
      __asm
      {
        VMOVLS.F32      S0, #15.0
        VADDLS.F32      S0, S16, S0
        VSTRLS          S0, [SP,#0x70+var_50]
      }
    _R0 = j_Random::_genRandInt32(a5) & 0xF | 16 * a7;
      VSTR            S0, [SP,#0x70+var_4C]
    _R0 = j_Random::_genRandInt32(a5);
      VCVT.F64.U32    D8, S0
      VCVT.F64.U32    D9, S0
      VCVT.F64.U32    D10, S0
      VLDR            D12, =2.32830644e-10
      VCVT.F64.U32    D11, S0
      VMUL.F64        D2, D9, D12
    _R0 = &mce::Math::PI;
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D12
      VCVT.F32.F64    S0, D0
      VCVT.F32.F64    S4, D2
      VLDR            S5, =0.05
      VMOV.F32        S12, #3.0
      VMUL.F64        D1, D8, D12
      VCMPE.F32       S0, S5
      VMRS            APSR_nzcv, FPSCR
      VMUL.F64        D3, D10, D12
      VMUL.F64        D4, D11, D12
      VCVT.F32.F64    S2, D1
      VMOV.F32        S3, #6.0
      VMOV.F32        S10, #-0.5
      VCVT.F32.F64    S6, D3
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S12, S3 }
      VCVT.F32.F64    S8, D4
      VADD.F32        S4, S4, S10
      VMOV.F32        S1, #0.25
      VLDR            S10, =40.0
      VADD.F32        S6, S8, S6
      VLDR            S8, [R0]
      VADD.F32        S2, S2, S2
      VMOV.F32        S14, #4.0
      VMUL.F32        S0, S4, S1
      VMUL.F32        S4, S6, S12
      VMUL.F32        S2, S8, S2
      __asm { VMOVLT.F32      S14, S10 }
      VSTR            S2, [SP,#0x70+var_68]
      VSTR            S14, [SP,#0x70+var_58]
      VSTR            S0, [SP,#0x70+var_64]
      VSTR            S4, [SP,#0x70+var_6C]
    result = j_CanyonFeature::addTunnel((int)&v27, v8, a5, v7, (int)&v27, v24, v25, v26, 0, 0);
  }
  return result;
}


int __fastcall CanyonFeature::apply(__int64 a1, int a2, Dimension *this, Random *a4)
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
      j_CanyonFeature::addFeature((Random *)v31, SHIDWORD(v31), v4, v24, a4, v14, v15);
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


int __fastcall CanyonFeature::addTunnel(int a1, int a2, Random *this, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  __int64 v15; // r4@1
  unsigned int v16; // r0@1
  unsigned int v20; // r0@1
  int v24; // r1@1
  signed int v25; // r7@1
  int v26; // r0@2
  int *v27; // r3@2
  int v28; // r2@2
  int v29; // r7@6
  double v35; // kr00_8@16
  float v56; // r0@24
  float v59; // r0@24
  int v65; // r7@26
  __int64 v66; // kr08_8@26
  int v68; // r6@26
  int v70; // r1@30
  int v72; // r2@34
  signed int v75; // r3@38
  signed int v77; // r2@40
  int v78; // lr@43
  int v79; // r11@43
  int v80; // r4@43
  int v81; // r5@43
  signed int v82; // r10@47
  int v83; // r8@47
  int v84; // r4@52
  int v85; // r5@52
  int v86; // r2@54
  int v87; // r0@55
  int v88; // r2@60
  int v89; // r0@61
  _BYTE *v90; // r2@66
  int v91; // r6@66
  int v92; // r0@67
  int v93; // r2@71
  int v94; // r0@72
  int v95; // r0@74
  int v96; // r2@83
  int v98; // r9@88
  char v100; // r11@91
  int v103; // r10@91
  signed int v104; // r5@92
  int v105; // r8@94
  int v106; // r1@94
  char v107; // r0@94
  int v108; // r0@100
  int v110; // [sp+20h] [bp-D08h]@6
  int v116; // [sp+3Ch] [bp-CECh]@24
  int v132; // [sp+9Ch] [bp-C8Ch]@47
  int v133; // [sp+A0h] [bp-C88h]@47
  signed int v134; // [sp+A8h] [bp-C80h]@40
  int v135; // [sp+ACh] [bp-C7Ch]@47
  int v136; // [sp+B0h] [bp-C78h]@50
  int v137; // [sp+BCh] [bp-C6Ch]@1
  int v138; // [sp+C8h] [bp-C60h]@38
  int v139; // [sp+D0h] [bp-C58h]@43
  int v140; // [sp+D4h] [bp-C54h]@36
  int v141; // [sp+DCh] [bp-C4Ch]@1
  signed int v142; // [sp+E0h] [bp-C48h]@42
  char v143[4]; // [sp+E4h] [bp-C44h]@91
  unsigned __int8 v144; // [sp+E8h] [bp-C40h]@94
  char v145[512]; // [sp+ECh] [bp-C3Ch]@10
  unsigned int v146; // [sp+2ECh] [bp-A3Ch]@1
  unsigned int v147; // [sp+2F0h] [bp-A38h]@1
  char v148; // [sp+C00h] [bp-128h]@1
  int v149; // [sp+CB0h] [bp-78h]@1
  char v150; // [sp+CB4h] [bp-74h]@1
  int v151; // [sp+CB8h] [bp-70h]@1
  int v152; // [sp+CBCh] [bp-6Ch]@3

  _R0 = a5;
  v137 = a4;
  v141 = a2;
  __asm
  {
    VLDR            S0, [R0,#4]
    VLDR            S31, [R0]
    VLDR            S30, [R0,#8]
  }
  v15 = *(_QWORD *)a4;
  __asm { VSTR            S0, [SP,#0xD28+var_C90] }
  v16 = j_Random::_genRandInt32(this);
  _R3 = &v148;
  _R11 = a10;
  __asm { VLDR            S23, [R3,#0x134] }
  v20 = v16 >> 1;
  __asm { VLDR            S22, [R3,#0x130] }
  _LR = 16 * HIDWORD(v15) | 8;
  _R12 = 16 * v15 | 8;
  __asm { VLDR            S16, [R3,#0x12C] }
  v146 = v20;
  v149 = 625;
  v24 = 0;
  v25 = 1;
  v150 = 0;
  v151 = 0;
  v147 = v20;
  do
    v26 = v20 ^ (v20 >> 30);
    v27 = (int *)(&v146 + v24);
    v28 = v24++ + 1812433253 * v26;
    v20 = v25++ + 1812433253 * v26;
    v27[2] = v28 + 1;
  while ( v24 != 397 );
    VMOV            S0, LR
    VCVT.F32.S32    S18, S0
    VMOV            S0, R12
    VCVT.F32.S32    S17, S0
  v149 = 624;
  v152 = 398;
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    _R11 = 112 - j_Random::_genRandInt32((Random *)&v146) % 0x1C;
    VMOV.F32        S24, #1.0
    VLDR            D10, =2.32830644e-10
  v29 = 0;
  v110 = _R11;
  __asm { VMOV.F32        S28, S24 }
    if ( !v29
      || (LODWORD(_R0) = j_Random::_genRandInt32((Random *)&v146),
          HIDWORD(_R0) = 3 * (LODWORD(_R0) / 3),
          LODWORD(_R0) == HIDWORD(_R0)) )
    {
      _R0 = j_Random::_genRandInt32((Random *)&v146);
      __asm
      {
        VMOV            S0, R0
        VCVT.F64.U32    D14, S0
      }
      LODWORD(_R0) = j_Random::_genRandInt32((Random *)&v146);
        VMUL.F64        D1, D14, D10
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D10
        VCVT.F32.F64    S2, D1
        VCVT.F32.F64    S0, D0
        VMUL.F32        S0, S0, S2
        VADD.F32        S28, S0, S24
    }
    __asm { VMUL.F32        S0, S28, S28 }
    LODWORD(_R0) = &v145[v29];
    v29 += 4;
    __asm { VSTR            S0, [R0] }
  while ( !_ZF );
  _R5 = a9;
  if ( a9 == -1 )
    _R5 = _R11 / 2;
  if ( _R11 > _R5 )
    __asm
      VMOV.F32        S0, #18.0
      VMOV            S6, R11
      VLDR            S29, =0.16667
      VMOV.F32        S2, #16.0
      VCVT.F32.S32    S6, S6
      VSTR            S18, [SP,#0xD28+var_CE0]
    _R0 = &mce::Math::PI;
      VMOV.F32        S4, #-16.0
      VMOV.F32        S27, #1.0
      VSTR            S17, [SP,#0xD28+var_CE4]
      VADD.F32        S0, S16, S0
      VSTR            S6, [SP,#0xD28+var_CD4]
      VADD.F32        S6, S18, S2
      VADD.F32        S2, S17, S2
      VMUL.F32        S0, S0, S0
      VSTR            S6, [SP,#0xD28+var_D04]
      VSTR            S2, [SP,#0xD28+var_D00]
      VADD.F32        S2, S18, S4
      VSTR            S0, [SP,#0xD28+var_CE8]
      VCVT.F64.F32    D0, S16
      VSTR            D0, [SP,#0xD28+var_CF8]
      VLDR            S0, [R0]
      VSTR            S2, [SP,#0xD28+var_CFC]
      VADD.F32        S2, S17, S4
      VSTR            S0, [SP,#0xD28+var_CD8]
      VSTR            S2, [SP,#0xD28+var_CF0]
      VLDR            S2, =0.0
      VSTR            S2, [SP,#0xD28+var_C94]
      VSTR            S2, [SP,#0xD28+var_C98]
    while ( 1 )
        VMOV            S0, R5
        VCVT.F32.S32    S0, S0
        VLDR            S2, [SP,#0xD28+var_CD8]
        VMUL.F32        S0, S2, S0
        VLDR            S2, [SP,#0xD28+var_CD4]
        VDIV.F32        S0, S0, S2
        VCVT.F64.F32    D0, S0
        VMOV            R0, R1, D0
      _R7 = (int *)&v146;
      v35 = j_sin(_R0);
      _R8 = j_Random::_genRandInt32((Random *)&v146);
      _R4 = j_Random::_genRandInt32((Random *)&v146);
      __asm { VCVT.F64.F32    D9, S22 }
        VSTR            D0, [SP,#0xD28+var_CA0]
        VSTR            D0, [SP,#0xD28+var_CA8]
        VMOV            S0, R4
        VCVT.F64.U32    D8, S0
      _R6 = j_Random::_genRandInt32((Random *)&v146);
      __asm { VMOV            R10, S23 }
        VSTR            D0, [SP,#0xD28+var_CB0]
        VSTR            D0, [SP,#0xD28+var_CB8]
        VMOV            S0, R8
        VCVT.F64.U32    D12, S0
      _R0 = j_cosf(_R10);
      __asm { VMOV            S28, R0 }
        VMOV            R4, R7, D9
        VCVT.F64.F32    D9, S28
        VSTR            D0, [SP,#0xD28+var_CC8]
        VMOV            S0, R6
        VSTR            D0, [SP,#0xD28+var_CC0]
      _R0 = COERCE_UNSIGNED_INT64(j_sin(COERCE_DOUBLE(__PAIR__(&v146, _R4))));
        VMOV.F32        S28, S31
        VMOV.F32        S26, S30
        VMOV            D15, R0, R1
      _R0 = COERCE_UNSIGNED_INT64(j_cos(COERCE_DOUBLE(__PAIR__(&v146, _R4))));
        VMUL.F64        D1, D15, D9
        VCVT.F64.F32    D2, S26
        VMOV            D0, R0, R1
        VADD.F64        D15, D1, D2
        VMUL.F64        D9, D0, D9
      _R0 = j_sinf(_R10);
        VCVT.F64.F32    D0, S28
        VADD.F64        D0, D9, D0
        VMOV            S2, R0
        VLDR            S4, [SP,#0xD28+var_C90]
        VCVT.F32.F64    S30, D15
        VADD.F32        S4, S2, S4
        VCVT.F32.F64    S31, D0
        VSTR            S4, [SP,#0xD28+var_C90]
      if ( _ZF || (LODWORD(_R0) = j_Random::_genRandInt32((Random *)&v146), LOBYTE(_R0) & 3) )
        LODWORD(_R0) = _R11 - _R5;
        __asm
        {
          VLDR            S0, [SP,#0xD28+var_CE4]
          VMOV            S2, R0
          VSUB.F32        S0, S31, S0
          VCVT.F32.S32    S2, S2
          VLDR            S4, [SP,#0xD28+var_CE0]
          VSUB.F32        S4, S30, S4
          VMUL.F32        S0, S0, S0
          VMUL.F32        S2, S2, S2
          VMUL.F32        S4, S4, S4
          VSUB.F32        S0, S0, S2
          VLDR            S2, [SP,#0xD28+var_CE8]
          VADD.F32        S0, S0, S4
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          return *(unsigned __int64 *)&_R0;
        _R0 = v35;
          VMOV.F64        D2, #1.5
          VMOV            D0, R0, R1
          VLDR            D1, [SP,#0xD28+var_CF8]
          VMUL.F64        D0, D0, D1
          VMUL.F64        D1, D12, D10
          VADD.F64        D0, D0, D2
          VCVT.F32.F64    S2, D1
          VMOV.F32        S4, #0.25
          VCVT.F32.F64    S0, D0
          VMUL.F32        S2, S2, S4
          VMOV.F32        S4, #0.75
          VADD.F32        S2, S2, S4
          VLDR            S4, [SP,#0xD28+var_CF0]
          VMUL.F32        S25, S2, S0
          VADD.F32        S2, S25, S25
          VSUB.F32        S4, S4, S2
          VCMPE.F32       S31, S4
        if ( !(_NF ^ _VF) )
          __asm
          {
            VLDRGE          S4, [SP,#0xD28+var_CFC]
            VSUBGE.F32      S4, S4, S2
            VCMPEGE.F32     S30, S4
            VMRSGE          APSR_nzcv, FPSCR
            VLDR            S4, [SP,#0xD28+var_D00]
            VADD.F32        S4, S4, S2
            VCMPE.F32       S31, S4
            VMRS            APSR_nzcv, FPSCR
          }
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            __asm
            {
              VLDRLE          S4, [SP,#0xD28+var_D04]
              VADDLE.F32      S2, S4, S2
              VCMPELE.F32     S30, S2
              VMRSLE          APSR_nzcv, FPSCR
              VMUL.F64        D1, D8, D10
            }
            v116 = _R5;
            _R5 = &v148;
              VCVT.F32.F64    S2, D1
              VMOV.F32        S4, #0.25
              VMUL.F32        S2, S2, S4
              VMOV.F32        S4, #0.75
              VADD.F32        S2, S2, S4
              VLDR            S4, [R5,#0x140]
              VMUL.F32        S0, S0, S4
              VMUL.F32        S19, S0, S2
              VSUB.F32        S0, S31, S25
              VMOV            R0, S0
            _R0 = j_floorf_0(_R0);
              VADD.F32        S0, S31, S25
              VLDR            S24, [SP,#0xD28+var_C90]
              VMOV            S16, R0
              VSUB.F32        S2, S24, S19
              VMOV            R1, S0
              VMOV            R4, S2
            _R0 = j_floorf_0(_R1);
            __asm { VMOV            S18, R0 }
            v56 = j_floorf_0(_R4);
            __asm { VADD.F32        S0, S19, S24 }
            _R4 = v56;
            __asm { VMOV            R0, S0 }
            v59 = j_floorf_0(_R0);
            __asm { VSUB.F32        S0, S30, S25 }
            _R7 = v59;
              VADD.F32        S0, S30, S25
              VSTR            S30, [SP,#0xD28+var_CDC]
              VMOV            S24, R0
              VMOV            S0, R0
              VMOV            S2, R7
            v65 = 1;
              VCVTR.S32.F32   S6, S18
              VCVTR.S32.F32   S8, S16
              VCVTR.S32.F32   S10, S24
              VCVTR.S32.F32   S0, S0
              VMOV            S4, R4
            v66 = *(_QWORD *)v137;
              VCVTR.S32.F32   S2, S2
              VCVTR.S32.F32   S4, S4
              VMOV            R1, S2
            v68 = _R1 + 1;
            if ( _R1 + 1 <= 1 )
              v68 = 1;
            __asm { VMOV            R1, S4 }
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              v68 = 120;
            v70 = _R1 - 1;
            if ( v70 > 1 )
              v65 = v70;
            __asm { VMOV            R1, S0 }
              v65 = v68;
            v72 = _R1 - 16 * HIDWORD(v66) + 1;
            __asm { VMOV            R1, S10 }
              v72 = 16;
            v140 = v72;
            LODWORD(_R0) = _R1 - 16 * HIDWORD(v66);
            HIDWORD(_R0) = LODWORD(_R0) - 1;
            if ( SLODWORD(_R0) < 1 )
              HIDWORD(_R0) = 0;
            v138 = HIDWORD(_R0);
            __asm { VMOV            R1, S6 }
            v75 = _R1 - 16 * v66 + 1;
            __asm { VMOV            R1, S8 }
              v75 = 16;
            v134 = v75;
            v77 = HIDWORD(_R0) - 16 * v66;
            HIDWORD(_R0) = v77 - 1;
            if ( v77 < 1 )
            v142 = HIDWORD(_R0);
            if ( SHIDWORD(_R0) >= v75 )
              goto LABEL_107;
            v78 = v65 - 1;
            v79 = v68 + 2;
            v80 = *(_DWORD *)(v141 + 16);
            v81 = *(_DWORD *)(v141 + 20);
            HIDWORD(_R0) = *(_DWORD *)v141;
            v139 = *(_DWORD *)(v141 + 20);
            if ( SHIDWORD(v66) <= 1 )
              LODWORD(_R0) = 1;
            if ( v77 <= 1 )
              v77 = 1;
            v82 = v142;
            v133 = v68;
            v83 = v68 + v81 * (LODWORD(_R0) + v80 * (v77 - 1) - 1) + HIDWORD(_R0) + 1;
            v135 = v68 + 1;
            v132 = v80 * v81;
            do
              if ( v138 >= v140 )
              {
                v136 = v83;
              }
              else if ( v135 >= v78 )
                v84 = v138;
                v85 = *(_BYTE *)(Block::mFlowingWater + 4);
                do
                {
                  if ( v84 == v140 - 1 )
                  {
                    v86 = 0;
                    do
                    {
                      v87 = *(_BYTE *)(v83 + v86);
                      if ( v87 != v85 )
                        _ZF = v87 == *(_BYTE *)(Block::mStillWater + 4);
                      --v86;
                    }
                    while ( v79 + v86 >= v65 );
                  }
                  else if ( v84 == v138 )
                    v88 = 0;
                      v89 = *(_BYTE *)(v83 + v88);
                      if ( v89 != v85 )
                        _ZF = v89 == *(_BYTE *)(Block::mStillWater + 4);
                      --v88;
                    while ( v79 + v88 >= v65 );
                  else if ( v82 == v75 - 1 )
                    v90 = (_BYTE *)v83;
                    v91 = v79;
                      v92 = *v90;
                      if ( v92 != v85 )
                        _ZF = v92 == *(_BYTE *)(Block::mStillWater + 4);
                      --v91;
                      --v90;
                    while ( v91 >= v65 );
                  else
                    v93 = v135;
                      v94 = *(_BYTE *)(HIDWORD(_R0) + (*(_DWORD *)(v141 + 16) * v82 + v84) * v139 + v93);
                      if ( v94 != v85 )
                        _ZF = v94 == *(_BYTE *)(Block::mStillWater + 4);
                      v95 = v65;
                      if ( v93 == v78 )
                        v95 = v93;
                      if ( v82 == v142 )
                      v93 = v95 - 1;
                    while ( v95 >= v65 );
                  ++v84;
                  v83 += v139;
                }
                while ( v84 < v140 );
              else
              ++v82;
              v83 = v136 + v132;
              LODWORD(_R0) = v75;
            while ( v82 < v75 );
            _R11 = v110;
            _R5 = v116;
            __asm { VLDR            S30, [SP,#0xD28+var_CDC] }
            if ( _ZF )
              break;
LABEL_108:
        VLDR            D0, [SP,#0xD28+var_CA0]
        VMOV.F32        S14, #4.0
        VLDR            D1, [SP,#0xD28+var_CA8]
      ++_R5;
        VMUL.F64        D1, D1, D10
        VLDR            D2, [SP,#0xD28+var_CB0]
        VLDR            D3, [SP,#0xD28+var_CB8]
        VMUL.F64        D2, D2, D10
        VMUL.F64        D3, D3, D10
        VLDR            D4, [SP,#0xD28+var_CC8]
        VMUL.F64        D4, D4, D10
        VLDR            D5, [SP,#0xD28+var_CC0]
        VSUB.F32        S0, S0, S2
        VCVT.F32.F64    S4, D2
        VMUL.F64        D5, D5, D10
        VCVT.F32.F64    S6, D3
        VCVT.F32.F64    S8, D4
        VSUB.F32        S4, S4, S6
        VLDR            S2, =0.05
        VADD.F32        S0, S0, S0
        VLDR            S3, [SP,#0xD28+var_C98]
        VCVT.F32.F64    S6, D5
        VMUL.F32        S8, S8, S14
        VLDR            S14, =0.8
        VMOV.F32        S12, S2
        VLDR            S1, [SP,#0xD28+var_C94]
        VMUL.F32        S0, S6, S0
        VMOV.F32        S6, #0.5
        VMUL.F32        S14, S3, S14
        VMUL.F32        S4, S8, S4
        VMUL.F32        S2, S1, S12
        VMUL.F32        S10, S3, S12
        VLDR            S12, =0.7
        VMUL.F32        S6, S1, S6
        VMUL.F32        S12, S23, S12
        VADD.F32        S0, S0, S14
        VADD.F32        S22, S22, S2
        VADD.F32        S23, S12, S10
        VSTR            S0, [SP,#0xD28+var_C98]
        VADD.F32        S0, S4, S6
        VSTR            S0, [SP,#0xD28+var_C94]
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        return *(unsigned __int64 *)&_R0;
    v96 = *(_QWORD *)v137;
    _R0 = COERCE_DOUBLE(__PAIR__(v142, v75));
    if ( v142 < v75 )
        VMOV.F32        S2, #0.5
        VLDR            S0, [SP,#0xD28+var_C90]
        VSUB.F32        S30, S2, S0
        VLDR            S0, [SP,#0xD28+var_CDC]
        VSUB.F32        S18, S2, S31
        VSUB.F32        S28, S2, S0
      while ( 1 )
        _R0 = v142 + 16 * v96;
          VMOV            S0, R0
          VCVT.F32.S32    S0, S0
        if ( v138 < v140 && v133 > v65 )
          __asm { VADD.F32        S0, S18, S0 }
          v98 = v138;
            VDIV.F32        S0, S0, S25
            VMUL.F32        S16, S0, S0
          do
            _R0 = v98 + 16 * *(_DWORD *)(v137 + 4);
              VCVT.F32.S32    S0, S0
              VADD.F32        S0, S28, S0
              VDIV.F32        S0, S0, S25
              VMUL.F32        S0, S0, S0
              VADD.F32        S17, S0, S16
              VCMPE.F32       S17, S27
              VMRS            APSR_nzcv, FPSCR
            if ( _NF ^ _VF )
              v100 = 0;
              _R6 = &v143[4 * v133];
              _R4 = v133;
              v103 = (*(_QWORD *)(v141 + 16) >> 32) * (v98 + v142 * *(_QWORD *)(v141 + 16));
              do
                v104 = _R4--;
                __asm
                  VMOV            S0, R4
                  VCVT.F32.S32    S0, S0
                  VLDR            S2, [R6]
                  VMUL.F32        S2, S2, S17
                  VADD.F32        S0, S30, S0
                  VDIV.F32        S0, S0, S19
                  VMUL.F32        S0, S0, S0
                  VMUL.F32        S0, S0, S29
                  VADD.F32        S0, S2, S0
                  VCMPE.F32       S0, S27
                  VMRS            APSR_nzcv, FPSCR
                if ( _NF ^ _VF )
                  v105 = *(_DWORD *)v141 + v103;
                  v106 = *(_BYTE *)(Block::mGrass + 4);
                  v144 = *(_BYTE *)(v105 + v104);
                  v107 = 0;
                  v143[0] = *(_BYTE *)(v105 + v104 + 1);
                  if ( v144 == v106 )
                    v107 = 1;
                  v100 |= v107;
                  if ( j_LargeCaveFeature::isDiggable(&v144, v143) == 1 )
                    if ( v104 >= 11 )
                      *(_BYTE *)(v105 + v104) = BlockID::AIR;
                      if ( v100 & 1 )
                      {
                        v108 = *(_DWORD *)v141 + v103 + v104;
                        if ( *(_BYTE *)(v108 - 1) == *(_BYTE *)(Block::mDirt + 4) )
                        {
                          v100 = 1;
                          *(_BYTE *)(v108 - 1) = *(_BYTE *)(Block::mGrass + 4);
                        }
                        else
                      }
                      else
                        v100 = 0;
                    else
                      *(_BYTE *)(v105 + v104) = *(_BYTE *)(Block::mStillLava + 4);
                _R6 -= 4;
              while ( _R4 > v65 );
            ++v98;
          while ( v98 < v140 );
        LODWORD(_R0) = v134;
        HIDWORD(_R0) = v142 + 1;
        v142 = HIDWORD(_R0);
        if ( SHIDWORD(_R0) >= v134 )
          break;
        v96 = *(_DWORD *)v137;
LABEL_107:
    _R11 = v110;
    _R5 = v116;
    __asm { VLDR            S30, [SP,#0xD28+var_CDC] }
    if ( _ZF )
      return *(unsigned __int64 *)&_R0;
    goto LABEL_108;
  return *(unsigned __int64 *)&_R0;
}
