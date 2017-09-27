

int __fastcall LargeHellCaveFeature::addRoom(int a1, int a2, Random *this, int a4, int a5)
{
  Random *v5; // r5@1
  int v6; // r7@1
  LevelChunk *v7; // r4@1
  int v8; // r6@1
  int v15; // [sp+4h] [bp-2Ch]@0

  v5 = this;
  v6 = a1;
  v7 = (LevelChunk *)a4;
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
  return j_LargeHellCaveFeature::addTunnel(v6, v8, (int)v5, v7, a5, v15, 0, 0, -1, -1);
}


unsigned int __fastcall LargeHellCaveFeature::addFeature(__int64 a1, LevelChunk *a2, int a3, Random *a4, int a5, int a6)
{
  int v6; // r10@1
  int v7; // r11@1
  unsigned int v8; // r8@1
  unsigned int v9; // r8@1
  unsigned int result; // r0@1
  unsigned __int8 v16; // r9@3
  int v17; // r1@3
  char v18; // r4@4
  char v20; // r0@4
  LevelChunk *v23; // r11@5
  signed int v24; // r8@5
  int v26; // r0@6
  signed int v27; // r10@7
  int v32; // [sp+4h] [bp-ACh]@0
  int v33; // [sp+8h] [bp-A8h]@0
  int v34; // [sp+Ch] [bp-A4h]@0
  signed int v35; // [sp+28h] [bp-88h]@1
  int v36; // [sp+2Ch] [bp-84h]@4
  LevelChunk *v37; // [sp+30h] [bp-80h]@1
  __int64 v38; // [sp+34h] [bp-7Ch]@1
  float v39; // [sp+3Ch] [bp-74h]@6

  v6 = HIDWORD(a1);
  v7 = a1;
  v37 = a2;
  v38 = a1;
  v8 = j_Random::_genRandInt32(a4) % 0xA + 1;
  v9 = j_Random::_genRandInt32(a4) % v8 + 1;
  v35 = j_Random::_genRandInt32(a4) % v9;
  result = j_Random::_genRandInt32(a4);
  if ( v35 )
  {
    result %= 5u;
    if ( !result )
    {
      __asm
      {
        VMOV.F32        S20, #6.0
        VMOV.F32        S22, #1.0
        VMOV.F32        S24, #-0.5
        VMOV.F32        S26, #0.25
        VLDR            D9, =2.32830644e-10
      }
      _R2 = &mce::Math::PI;
      v16 = 0;
      __asm { VLDR            S0, [R2] }
      v17 = 0;
      __asm { VADD.F32        S16, S0, S0 }
      do
        v36 = v17;
        v18 = j_Random::_genRandInt32(a4);
        _R5 = j_Random::_genRandInt32(a4) & 0x7F;
        v20 = j_Random::_genRandInt32(a4);
        __asm { VMOV            S0, R5 }
        _R0 = v20 & 0xF | 16 * a5;
        __asm
        {
          VMOV            S2, R0
          VCVT.F32.S32    S2, S2
          VCVT.F32.S32    S0, S0
        }
        _R0 = 16 * a6 | v18 & 0xF;
          VMOV            S4, R0
          VCVT.F32.S32    S4, S4
          VSTR            S2, [SP,#0xB0+var_74]
          VSTR            S0, [SP,#0xB0+var_70]
          VSTR            S4, [SP,#0xB0+var_6C]
        if ( j_Random::_genRandInt32(a4) & 3 )
          v23 = v37;
          v24 = 1;
        else
          _R0 = j_Random::_genRandInt32(a4);
          __asm
          {
            VMOV            S0, R0
            VCVT.F64.U32    D0, S0
          }
          v26 = v7;
            VMUL.F64        D0, D0, D9
            VCVT.F32.F64    S0, D0
            VMUL.F32        S0, S0, S20
            VADD.F32        S0, S0, S22
            VSTR            S0, [SP,#0xB0+var_AC]
          j_LargeHellCaveFeature::addTunnel(v26, v6, (int)a4, v37, (int)&v39, v32, v16, v16, -1, -1);
          v24 = (j_Random::_genRandInt32(a4) & 3) + 1;
        v27 = 0;
        do
          _R4 = j_Random::_genRandInt32(a4);
          _R5 = j_Random::_genRandInt32(a4);
            VCVT.F64.U32    D14, S0
            VMOV            S0, R5
            VCVT.F64.U32    D15, S0
            VMUL.F64        D2, D14, D9
            VMOV            S2, R4
            VCVT.F64.U32    D1, S2
            VMUL.F64        D3, D15, D9
            VCVT.F32.F64    S4, D2
            VMUL.F64        D1, D1, D9
            VCVT.F32.F64    S6, D3
            VADD.F32        S4, S4, S4
            VCVT.F32.F64    S2, D1
            VADD.F32        S0, S4, S0
            VADD.F32        S6, S6, S24
            VMUL.F32        S2, S16, S2
            VADD.F32        S0, S0, S0
            VMUL.F32        S4, S6, S26
            VSTR            S2, [SP,#0xB0+var_A8]
            VSTR            S4, [SP,#0xB0+var_A4]
          j_LargeHellCaveFeature::addTunnel(v38, SHIDWORD(v38), (int)a4, v23, (int)&v39, v32, v33, v34, 0, 0);
          ++v27;
        while ( v27 < v24 );
        v16 = 0;
        result = v35;
        v37 = v23;
        v17 = v36 + 1;
        v6 = HIDWORD(v38);
        v7 = v38;
      while ( v36 + 1 < v35 );
    }
  }
  return result;
}


unsigned int __fastcall LargeHellCaveFeature::apply(__int64 a1, int a2, Dimension *this, Random *a4)
{
  Dimension *v4; // r0@1
  unsigned int v5; // r5@1
  int v6; // r0@1
  signed int v7; // r1@1
  int v8; // r3@2
  int v9; // r3@2
  char *v10; // r7@2
  unsigned int v11; // r5@3
  unsigned int v12; // r6@3
  char *v13; // r7@3
  int v14; // r9@3
  int v15; // r10@4
  Dimension *v16; // r0@5
  int v17; // r8@5
  unsigned int v18; // r0@5
  int v19; // r1@5
  signed int v20; // r2@5
  int v21; // r0@6
  char *v22; // r5@6
  int v23; // r3@6
  int v24; // r3@6
  unsigned int result; // r0@7
  int v26; // r2@7
  bool v27; // nf@7
  unsigned __int8 v28; // vf@7
  int v29; // r2@8
  int v30; // [sp+Ch] [bp-44h]@3
  __int64 v31; // [sp+18h] [bp-38h]@1
  Dimension *v32; // [sp+20h] [bp-30h]@1
  LevelChunk *v33; // [sp+24h] [bp-2Ch]@1

  v33 = (LevelChunk *)a2;
  v31 = a1;
  v32 = this;
  v4 = j_Dimension::getBiomes(this);
  v5 = *((_DWORD *)j_ThreadLocal<BiomeSource>::getLocal((int)v4) + 12);
  j_Random::_checkThreadId(a4);
  *(_DWORD *)a4 = v5;
  *((_DWORD *)a4 + 625) = 625;
  v6 = 0;
  v7 = 1;
  *((_BYTE *)a4 + 2504) = 0;
  *((_DWORD *)a4 + 627) = 0;
  *((_DWORD *)a4 + 1) = v5;
  do
  {
    v8 = v5 ^ (v5 >> 30);
    v5 = v7++ + 1812433253 * v8;
    v9 = v6 + 1812433253 * v8 + 1;
    v10 = (char *)a4 + 4 * v6++;
    *((_DWORD *)v10 + 2) = v9;
  }
  while ( v6 != 397 );
  *((_DWORD *)a4 + 625) = 624;
  *((_DWORD *)a4 + 628) = 398;
  v11 = j_Random::_genRandInt32(a4);
  v12 = j_Random::_genRandInt32(a4);
  v13 = j_LevelChunk::getPosition(v33);
  v14 = *(_DWORD *)v13 - 8;
  v30 = (v11 >> 1) | 1;
    v15 = *((_DWORD *)v13 + 1) - 8;
    do
    {
      v16 = j_Dimension::getBiomes(v32);
      v17 = *((_DWORD *)j_ThreadLocal<BiomeSource>::getLocal((int)v16) + 12);
      j_Random::_checkThreadId(a4);
      v18 = (v14 * v30 + v15 * ((v12 >> 1) | 1)) ^ v17;
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
      result = j_LargeHellCaveFeature::addFeature(v31, v33, v24, a4, v14, v15);
      v26 = *((_DWORD *)v13 + 1) + 8;
      v28 = __OFSUB__(v15, v26);
      v27 = v15++ - v26 < 0;
    }
    while ( v27 ^ v28 );
    v29 = *(_DWORD *)v13 + 8;
    v28 = __OFSUB__(v14, v29);
    v27 = v14++ - v29 < 0;
  while ( v27 ^ v28 );
  return result;
}


int __fastcall LargeHellCaveFeature::addTunnel(int a1, int a2, int a3, LevelChunk *this, int a5, int a6, int a7, int a8, int a9, int a10)
{
  Random *v10; // r4@1
  char *v11; // r0@1
  __int64 v12; // r5@1
  __int64 v13; // r1@1
  unsigned int v14; // r0@1
  unsigned int v21; // r0@1
  int v25; // r1@1
  signed int v26; // r7@1
  int v27; // r0@2
  int *v28; // r3@2
  int v29; // r2@2
  unsigned int v31; // r4@9
  int result; // r0@11
  int v35; // r1@12
  int v37; // r0@15
  float v40; // r1@15
  float v43; // r1@15
  float v45; // r1@15
  float v48; // r1@15
  int v59; // r0@25
  int v60; // r4@25
  int v64; // r0@25
  float v65; // r1@25
  int v66; // r7@27
  int v67; // r11@27
  int v68; // r6@27
  int v69; // r0@29
  float v70; // r1@29
  int v71; // r10@29
  int v72; // r0@29
  int v73; // r6@31
  int v75; // r9@33
  float v76; // r1@33
  int v77; // r0@33
  float v78; // r1@33
  int v79; // r7@33
  int v80; // r0@33
  int v82; // r0@35
  int v83; // r12@35
  unsigned int v84; // r2@35
  int v85; // r0@35
  int v86; // r5@35
  signed int v87; // r1@40
  signed int v88; // r0@40
  int v89; // r7@42
  int v90; // r0@44
  int v91; // r1@44
  int v92; // r8@46
  signed int v93; // r3@46
  int v94; // r9@46
  int v95; // r5@50
  int v96; // r4@50
  unsigned int v97; // r7@51
  int v98; // r6@53
  int v99; // r6@54
  int v100; // r3@54
  int v102; // r3@68
  int v103; // r6@70
  int v104; // r7@70
  bool v105; // zf@70
  int v106; // r3@76
  int v107; // r6@78
  int v108; // r7@78
  bool v109; // zf@78
  int v110; // r3@83
  int v111; // r6@85
  int v112; // r7@85
  bool v113; // zf@85
  signed int v114; // r3@97
  signed int v115; // r2@97
  int v116; // r1@102
  signed int v117; // r3@102
  int v118; // r1@102
  int v120; // r4@107
  int v121; // r12@107
  int v122; // r5@107
  int v123; // r3@107
  int v124; // r0@107
  _BYTE *v126; // r2@108
  int v127; // r6@108
  int v129; // r6@112
  int v130; // lr@112
  bool v131; // zf@112
  int v133; // ST04_4@124
  int v134; // ST08_4@124
  int v135; // ST0C_4@124
  int v136; // [sp+4h] [bp-B44h]@0
  int v137; // [sp+8h] [bp-B40h]@0
  int v138; // [sp+Ch] [bp-B3Ch]@0
  int v139; // [sp+34h] [bp-B14h]@1
  LevelChunk *v140; // [sp+38h] [bp-B10h]@1
  unsigned int v141; // [sp+3Ch] [bp-B0Ch]@44
  int v142; // [sp+40h] [bp-B08h]@42
  int v143; // [sp+48h] [bp-B00h]@46
  int v144; // [sp+54h] [bp-AF4h]@46
  _DWORD *v147; // [sp+60h] [bp-AE8h]@1
  int v148; // [sp+64h] [bp-AE4h]@12
  int v149; // [sp+68h] [bp-AE0h]@46
  int v150; // [sp+6Ch] [bp-ADCh]@46
  char *v152; // [sp+74h] [bp-AD4h]@1
  int v153; // [sp+78h] [bp-AD0h]@104
  int v155; // [sp+80h] [bp-AC8h]@33
  int v156; // [sp+80h] [bp-AC8h]@97
  int v158; // [sp+88h] [bp-AC0h]@27
  int v159; // [sp+8Ch] [bp-ABCh]@25
  int v160; // [sp+8Ch] [bp-ABCh]@105
  int v166; // [sp+A4h] [bp-AA4h]@104
  int v169; // [sp+B0h] [bp-A98h]@37
  int v170; // [sp+B4h] [bp-A94h]@46
  int v171; // [sp+B4h] [bp-A94h]@104
  int v172; // [sp+B8h] [bp-A90h]@35
  int v173; // [sp+BCh] [bp-A8Ch]@12
  unsigned int v181; // [sp+FCh] [bp-A4Ch]@1
  unsigned int v182; // [sp+100h] [bp-A48h]@1
  char v183; // [sp+800h] [bp-348h]@1
  int v184; // [sp+AC0h] [bp-88h]@1
  char v185; // [sp+AC4h] [bp-84h]@1
  int v186; // [sp+AC8h] [bp-80h]@1
  int v187; // [sp+ACCh] [bp-7Ch]@3
  unsigned __int64 v188; // [sp+AD0h] [bp-78h]@1
  int v189; // [sp+AD8h] [bp-70h]@1

  v139 = a1;
  v140 = this;
  v10 = (Random *)a3;
  v147 = (_DWORD *)a2;
  v11 = j_LevelChunk::getPosition(this);
  v152 = v11;
  v12 = *(_QWORD *)v11;
  v13 = *(_QWORD *)a5;
  v189 = *(_DWORD *)(a5 + 8);
  v188 = __PAIR__(HIDWORD(v13), (unsigned int)v13);
  v14 = j_Random::_genRandInt32(v10);
  _R3 = &v183;
  _R8 = a10;
  __asm { VLDR            S18, [R3,#0x354] }
  v21 = v14 >> 1;
  _LR = 16 * HIDWORD(v12) | 8;
  __asm { VLDR            S16, [R3,#0x350] }
  _R12 = 16 * v12 | 8;
  __asm { VLDR            S28, [R3,#0x34C] }
  v181 = v21;
  v184 = 625;
  v25 = 0;
  v26 = 1;
  v185 = 0;
  v186 = 0;
  v182 = v21;
  do
  {
    v27 = v21 ^ (v21 >> 30);
    v28 = (int *)(&v181 + v25);
    v29 = v25++ + 1812433253 * v27;
    v21 = v26++ + 1812433253 * v27;
    v28[2] = v29 + 1;
  }
  while ( v25 != 397 );
  __asm
    VMOV            S0, LR
    VCVT.F32.S32    S20, S0
    VMOV            S0, R12
    VCVT.F32.S32    S22, S0
  v184 = 624;
  v187 = 398;
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    _R8 = 112 - j_Random::_genRandInt32((Random *)&v181) % 0x1C;
  _R11 = a9;
  if ( a9 == -1 )
    _R11 = _R8 / 2;
  if ( (unsigned int)(_R8 + 1) >= 3 )
    v31 = j_Random::_genRandInt32((Random *)&v181) % (_R8 / 2);
  else
    v31 = 0;
  result = j_Random::_genRandInt32((Random *)&v181);
  if ( _R8 > _R11 )
    __asm { VMOV            S6, R8 }
    v173 = _R8;
    __asm { VMOV.F32        S0, #16.0 }
    v148 = v31 + _R8 / 4;
    __asm
    {
      VCVT.F32.S32    S6, S6
      VMOV.F32        S4, #-16.0
      VMOV.F32        S2, #18.0
    }
    _R2 = dword_1AEBAA4;
    _R1 = &mce::Math::PI;
      VMOV.F64        D15, #1.0
      VSTR            S6, [SP,#0xB48+var_AA0]
      VADD.F32        S6, S20, S0
      VADD.F32        S0, S22, S0
      VLDR            S27, [R1]
      VADD.F32        S2, S28, S2
      VSTR            S20, [SP,#0xB48+var_AAC]
      VSTR            S22, [SP,#0xB48+var_AB0]
      VSTR            S6, [SP,#0xB48+var_ACC]
    v35 = (int)Block::mNetherrack;
      VSTR            S0, [SP,#0xB48+var_AC4]
      VADD.F32        S0, S20, S4
      VLDR            S21, =0.0
      VLDR            D12, =-0.7
      VSTR            S0, [SP,#0xB48+var_AB8]
      VADD.F32        S0, S22, S4
      VMOV.F64        D11, #0.5
      VSTR            S0, [SP,#0xB48+var_AB4]
      VMUL.F32        S0, S2, S2
      VSTR            S0, [SP,#0xB48+var_AA8]
    if ( _ZF )
      _R2 = &dword_1AEBAA4[1];
      VLDR            S0, [R2]
      VSTR            S0, [SP,#0xB48+var_A9C]
      VSTR            S21, [SP,#0xB48+var_A54]
    do
      __asm
      {
        VMOV            S0, R11
        VCVT.F32.S32    S0, S0
        VLDR            S2, [SP,#0xB48+var_AA0]
        VMUL.F32        S0, S27, S0
        VDIV.F32        S0, S0, S2
        VMOV            R0, S0
      }
      v37 = j_mce::Math::sin(_R0, *(float *)&v35);
      __asm { VMOV            R5, S18 }
      _R4 = v37;
      _R0 = j_mce::Math::cos(_R5, v40);
        VMOV            S19, R0
        VMOV            R7, S16
      _R5 = j_mce::Math::sin(_R5, v43);
      _R0 = j_mce::Math::cos(_R7, v45);
        VMOV            S0, R0
        VMUL.F32        S0, S0, S19
      _R6 = (__int64 *)&v188;
        VLDR            S2, [R6]
        VADD.F32        S20, S2, S0
        VMOV            S0, R5
        VSTR            S20, [R6]
        VLDR            S2, [R6,#4]
        VADD.F32        S29, S2, S0
        VSTR            S29, [R6,#4]
      _R0 = j_mce::Math::sin(_R7, v48);
        VLDR            S2, [R6,#8]
        VADD.F32        S19, S2, S0
        VSTR            S19, [R6,#8]
      _R0 = j_Random::_genRandInt32((Random *)&v181);
        VCVT.F64.U32    D0, S0
        VSTR            D0, [SP,#0xB48+var_A60]
        VSTR            D0, [SP,#0xB48+var_A68]
      _R5 = j_Random::_genRandInt32((Random *)&v181);
        VSTR            D0, [SP,#0xB48+var_A70]
        VSTR            D0, [SP,#0xB48+var_A78]
        VLDR            S2, =0.1
        VSTR            D0, [SP,#0xB48+var_A88]
        VMOV.F32        S4, S2
        VLDR            S2, [SP,#0xB48+var_A54]
        VSTR            D0, [SP,#0xB48+var_A80]
        VLDR            S0, [SP,#0xB48+var_A9C]
        VMUL.F32        S2, S2, S4
        VMUL.F32        S4, S21, S4
        VMUL.F32        S0, S0, S18
        VADD.F32        S16, S16, S4
        VADD.F32        S18, S0, S2
      if ( _ZF )
        goto LABEL_127;
        VMOV.F32        S0, #1.0
        VCMPE.F32       S28, S0
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v35 = v148;
        if ( _R11 == v148 )
        {
          __asm
          {
            VMOV            S0, R0
            VLDR            D1, =2.32830644e-10
            VMOV.F32        S20, #0.5
            VCVT.F64.U32    D0, S0
            VMOV.F64        D12, D1
            VMUL.F64        D0, D0, D12
            VCVT.F32.F64    S0, D0
            VMUL.F32        S0, S0, S20
            VLDR            S2, =0.33333
            VMUL.F32        S22, S27, S20
            VMUL.F32        S18, S18, S2
            VADD.F32        S0, S0, S20
            VSUB.F32        S2, S16, S22
            VSTR            S18, [SP,#0xB48+var_B3C]
            VSTR            S2, [SP,#0xB48+var_B40]
            VSTR            S0, [SP,#0xB48+var_B44]
          }
          j_LargeHellCaveFeature::addTunnel(v139, (int)v147, (int)&v181, v140, (int)&v188, v136, v137, v138, v148, v173);
          _R0 = j_Random::_genRandInt32((Random *)&v181);
            VADD.F32        S2, S22, S16
          return j_LargeHellCaveFeature::addTunnel(
                   v139,
                   (int)v147,
                   (int)&v181,
                   v140,
                   (int)&v188,
                   v133,
                   v134,
                   v135,
                   v148,
                   v173);
        }
      if ( _R0 & 3 )
LABEL_127:
        __asm { VLDR            S0, [SP,#0xB48+var_AB0] }
        result = v173 - _R11;
        __asm
          VSUB.F32        S0, S20, S0
          VMOV            S2, R0
          VCVT.F32.S32    S2, S2
          VLDR            S4, [SP,#0xB48+var_AAC]
          VSUB.F32        S4, S19, S4
          VMUL.F32        S0, S0, S0
          VMUL.F32        S2, S2, S2
          VMUL.F32        S4, S4, S4
          VSUB.F32        S0, S0, S2
          VLDR            S2, [SP,#0xB48+var_AA8]
          VADD.F32        S0, S0, S4
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          return result;
          VMOV            S0, R4
          VMOV.F32        S2, #1.5
          VMUL.F32        S0, S0, S28
          VADD.F32        S17, S0, S2
          VLDR            S2, [SP,#0xB48+var_AB4]
          VADD.F32        S0, S17, S17
          VSUB.F32        S2, S2, S0
          VCMPE.F32       S20, S2
        if ( !(_NF ^ _VF) )
            VLDRGE          S2, [SP,#0xB48+var_AB8]
            VSUBGE.F32      S2, S2, S0
            VCMPEGE.F32     S19, S2
            VMRSGE          APSR_nzcv, FPSCR
            VLDR            S2, [SP,#0xB48+var_AC4]
            VADD.F32        S2, S2, S0
            VCMPE.F32       S20, S2
            VMRS            APSR_nzcv, FPSCR
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            __asm
            {
              VLDRLE          S2, [SP,#0xB48+var_ACC]
              VADDLE.F32      S0, S2, S0
              VCMPELE.F32     S19, S0
              VMRSLE          APSR_nzcv, FPSCR
            }
            _R6 = &v183;
              VLDR            S0, [R6,#0x360]
              VMUL.F32        S26, S17, S0
              VSUB.F32        S0, S20, S17
              VSTR            S26, [SP,#0xB48+var_AF0]
              VMOV            R0, S0
            v59 = j_mce::Math::floor(_R0, *(float *)&v35);
              VADD.F32        S0, S20, S17
              VSUB.F32        S2, S29, S26
              VSTR            S20, [SP,#0xB48+var_AD8]
              VMOV.F32        S20, S21
              VSTR            S29, [SP,#0xB48+var_AEC]
              VMOV.F32        S21, S27
            v60 = v59 - 16 * *(_DWORD *)v152;
            v159 = v59 - 16 * *(_DWORD *)v152;
              VMOV            R1, S0
              VADD.F32        S0, S29, S26
              VMOV.F32        S29, S28
              VMOV.F32        S28, S18
              VMOV.F32        S18, S16
              VMOV            R8, S2
              VSUB.F32        S16, S19, S17
              VMOV            R9, S0
            v64 = j_mce::Math::floor(_R1, *(float *)&_R1);
            v66 = v64;
            v158 = _R11;
            v67 = v60 - 1;
            v68 = *(_DWORD *)v152;
            if ( v60 < 1 )
              v67 = 0;
            v69 = j_mce::Math::floor(_R8, v65);
            v71 = v69 - 1;
            _VF = __OFSUB__(v69, 2);
            _NF = v69 - 2 < 0;
            v72 = v66 - 16 * v68;
            if ( _NF ^ _VF )
              v71 = 1;
            v73 = v72 + 1;
            if ( v72 > 15 )
              v73 = 16;
            __asm { VMOV            R8, S16 }
            v155 = v73;
              VMOV.F32        S16, S18
              VMOV.F32        S18, S28
              VMOV.F32        S27, S21
              VMOV.F32        S28, S29
              VMOV.F32        S21, S20
            v75 = j_mce::Math::floor(_R9, v70);
            v77 = j_mce::Math::floor(_R8, v76);
            __asm { VADD.F32        S0, S19, S17 }
            v78 = *((float *)v152 + 1);
            v79 = v77 - 16 * LODWORD(v78);
            v80 = v79 - 1;
            if ( v79 < 1 )
              v80 = 0;
            v172 = v80;
            __asm { VMOV            R0, S0 }
            v82 = j_mce::Math::floor(_R0, v78);
            v35 = *((_DWORD *)v152 + 1);
            v83 = v67;
            _R11 = v158;
            v84 = v75 + 1;
            v85 = v82 - 16 * v35;
            v86 = v85 + 1;
            if ( v85 > 15 )
              v86 = 16;
            v169 = v86;
            if ( v84 > 0x78 )
              v84 = 120;
            if ( v83 < v73 )
              v87 = 1;
              v88 = 1;
              if ( v79 > 1 )
                v88 = v79;
              v142 = v79;
              v89 = v159;
              if ( v159 > 1 )
                v87 = v159;
              v90 = (v87 << 11) + (v88 << 7);
              v91 = -121;
              v141 = -2 - v75;
              if ( 119 != v75 && (unsigned int)(-2 - v75) >= 0xFFFFFF87 )
                v91 = -2 - v75;
              v143 = v84;
              __asm { VLDR            S0, [SP,#0xB48+var_AD8] }
              v92 = v90 - v91 + *v147 - 2176;
              v93 = 0;
              v149 = 1 - v91;
              v150 = v86 - 1;
              v94 = v83;
              v35 = (int)&Block::mFlowingLava;
              v144 = v73 - 1;
              v170 = v71 - 1;
              do
              {
                if ( v172 < v86 )
                {
                  v35 = v93 ^ 1;
                  if ( (v93 ^ 1) & 1 )
                  {
                    v35 = v84 + 1;
                    if ( (signed int)(v84 + 1) >= v170 )
                    {
                      v95 = v172;
                      v96 = v92;
                      while ( !(v93 & 1) )
                      {
                        if ( v95 == v150 )
                        {
                          v102 = v149;
                          v35 = 0;
                          while ( 1 )
                          {
                            if ( (unsigned int)--v102 <= 0x7F )
                            {
                              v103 = *(_BYTE *)(v96 + v35);
                              v104 = *(_BYTE *)(Block::mFlowingLava + 4);
                              v105 = v103 == v104;
                              if ( v103 != v104 )
                                v105 = v103 == *(_BYTE *)(Block::mStillLava + 4);
                              if ( v105 )
                                goto LABEL_121;
                            }
                            --v35;
                            if ( v102 < v71 )
                              goto LABEL_89;
                          }
                        }
                        if ( v95 == v172 )
                          v106 = v149;
                            if ( (unsigned int)--v106 <= 0x7F )
                              v107 = *(_BYTE *)(v96 + v35);
                              v108 = *(_BYTE *)(Block::mFlowingLava + 4);
                              v109 = v107 == v108;
                              if ( v107 != v108 )
                                v109 = v107 == *(_BYTE *)(Block::mStillLava + 4);
                              if ( v109 )
                            if ( v106 < v71 )
                        v110 = v149;
                        v35 = v96;
                        if ( v94 == v144 )
                            if ( (unsigned int)--v110 <= 0x7F )
                              v111 = *(_BYTE *)v35;
                              v112 = *(_BYTE *)(Block::mFlowingLava + 4);
                              v113 = v111 == v112;
                              if ( v111 != v112 )
                                v113 = v111 == *(_BYTE *)(Block::mStillLava + 4);
                              if ( v113 )
                            if ( v110 < v71 )
LABEL_89:
                              v93 = 0;
                              goto LABEL_90;
                        v97 = v84 + 1;
                        do
                          if ( v97 <= 0x7F )
                            v99 = *(_BYTE *)(Block::mFlowingLava + 4);
                            v100 = *(_BYTE *)(*v147 + v97 + ((v95 + 16 * v94) << 7));
                            _ZF = v100 == v99;
                            if ( v100 != v99 )
                              _ZF = *(_BYTE *)(*v147 + v97 + ((v95 + 16 * v94) << 7)) == *(_BYTE *)(Block::mStillLava + 4);
                            v93 = _ZF != 0;
                            v98 = v71;
                            if ( v97 == v170 )
                              v98 = v97;
                            if ( v94 == v83 )
                          else
                            v93 = 0;
                            v98 = v97;
                          if ( v93 )
                            break;
                          v97 = v98 - 1;
                        while ( v98 >= v71 );
LABEL_90:
                        ++v95;
                        v35 = v169;
                        if ( v95 >= v169 )
                          v73 = v155;
                          v89 = v159;
                          goto LABEL_94;
                        v73 = v155;
                        v96 += 128;
                        v89 = v159;
                        v35 = v93 ^ 1;
                        if ( v93 == 1 )
                      }
                      goto LABEL_121;
                    }
                  }
                }
LABEL_94:
                v86 = v169;
                if ( ++v94 >= v73 )
                  break;
                v92 += 2048;
                v35 = v93 ^ 1;
              }
              while ( (v93 ^ 1) & 1 );
              if ( v93 & 1 )
                goto LABEL_121;
              __asm { VMOV.F32        S8, S0 }
              v114 = v142;
              v115 = v89;
              v156 = v73;
              if ( v83 < v73 )
                __asm
                  VCVT.F64.F32    D0, S19
                  VCVT.F64.F32    D4, S8
                  VLDR            S2, [SP,#0xB48+var_AF0]
                  VLDR            S4, [SP,#0xB48+var_AEC]
                if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                  v114 = 1;
                __asm { VSUB.F64        D0, D11, D0 }
                  v115 = 1;
                v116 = (v115 << 11) + (v114 << 7);
                v117 = v141;
                v118 = v116 - 2177;
                if ( v141 <= 0xFFFFFF87 )
                  v117 = -121;
                v153 = 16 * *(_DWORD *)v152;
                v166 = v118 - v117;
                __asm { VSUB.F64        D4, D11, D4 }
                v35 = -2 - v117;
                v171 = -2 - v117;
                  VCVT.F64.F32    D1, S2
                  VCVT.F64.F32    D2, S4
                  VCVT.F64.F32    D3, S17
                do
                  v160 = v83;
                  _R0 = v153 + v83;
                  __asm
                    VMOV            S10, R0
                    VCVT.F64.S32    D5, S10
                  if ( v172 < v169 && v143 > v71 )
                    __asm { VADD.F64        D5, D4, D5 }
                    v120 = Block::mGrass;
                    v121 = 16 * *((_DWORD *)v152 + 1);
                    __asm { VDIV.F64        D5, D5, D3 }
                    v122 = Block::mDirt;
                    v123 = *v147 + v166;
                    v124 = v172;
                    v35 = Block::mNetherrack;
                    __asm { VMUL.F64        D5, D5, D5 }
                    do
                      _R2 = v121 + v124;
                      __asm { VMOV            S12, R2 }
                      v126 = (_BYTE *)v123;
                      __asm { VCVT.F64.S32    D6, S12 }
                      v127 = v171;
                      __asm
                        VADD.F64        D6, D0, D6
                        VDIV.F64        D6, D6, D3
                        VMUL.F64        D6, D6, D6
                        VADD.F64        D6, D6, D5
                      do
                        _R8 = v127;
                        __asm
                          VMOV            S14, R8
                          VCVT.F64.S32    D7, S14
                          VADD.F64        D7, D7, D11
                          VSUB.F64        D7, D7, D2
                          VDIV.F64        D7, D7, D1
                          VCMPE.F64       D7, D12
                          VMRS            APSR_nzcv, FPSCR
                        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                          __asm
                            VMUL.F64        D7, D7, D7
                            VADD.F64        D7, D6, D7
                            VCMPE.F64       D7, D15
                            VMRS            APSR_nzcv, FPSCR
                          if ( _NF ^ _VF )
                            v129 = *v126;
                            v130 = *(_BYTE *)(v35 + 4);
                            v131 = v129 == v130;
                            if ( v129 != v130 )
                              v131 = v129 == *(_BYTE *)(v122 + 4);
                            if ( v131 || v129 == *(_BYTE *)(v120 + 4) )
                              *v126 = BlockID::AIR;
                        --v126;
                        v127 = _R8 - 1;
                      while ( _R8 > v71 );
                      ++v124;
                      v123 += 128;
                    while ( v124 < v169 );
                  v166 += 2048;
                  v83 = v160 + 1;
                while ( v160 + 1 < v156 );
            result = a9;
            if ( a9 == -1 )
              return result;
LABEL_121:
      __asm { VLDR            D0, =2.32830644e-10 }
      ++_R11;
        VLDR            D1, [SP,#0xB48+var_A68]
        VMOV.F64        D5, D0
      result = v173;
        VLDR            D0, [SP,#0xB48+var_A60]
        VMUL.F64        D1, D1, D5
        VMUL.F64        D0, D0, D5
        VLDR            D2, [SP,#0xB48+var_A70]
        VLDR            D3, [SP,#0xB48+var_A78]
        VMUL.F64        D2, D2, D5
        VMUL.F64        D3, D3, D5
        VCVT.F32.F64    S0, D0
        VCVT.F32.F64    S2, D1
        VLDR            D4, [SP,#0xB48+var_A88]
        VSUB.F32        S0, S0, S2
        VLDR            D6, [SP,#0xB48+var_A80]
        VMUL.F64        D4, D4, D5
        VMUL.F64        D5, D6, D5
        VCVT.F32.F64    S4, D2
        VCVT.F32.F64    S6, D3
        VCVT.F32.F64    S2, D4
        VCVT.F32.F64    S8, D5
        VADD.F32        S0, S0, S0
        VLDR            S10, [SP,#0xB48+var_A54]
        VSUB.F32        S4, S4, S6
        VMOV.F32        S6, #4.0
        VMUL.F32        S0, S8, S0
        VMOV.F32        S8, #0.75
        VMUL.F32        S2, S2, S6
        VLDR            S6, =0.9
        VMUL.F32        S6, S10, S6
        VMUL.F32        S8, S21, S8
        VADD.F32        S0, S0, S6
        VADD.F32        S21, S2, S8
        VSTR            S0, [SP,#0xB48+var_A54]
    while ( !((unsigned __int8)(_NF ^ _VF) | _ZF) );
  return result;
}
