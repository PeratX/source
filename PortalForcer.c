

void __fastcall PortalForcer::serialize(PortalForcer *this, CompoundTag *a2)
{
  PortalForcer::serialize(this, a2);
}


void __fastcall PortalForcer::~PortalForcer(PortalForcer *this)
{
  PortalForcer::~PortalForcer(this);
}


int __fastcall PortalForcer::createPortal(PortalForcer *this, const Entity *a2, int a3)
{
  PortalForcer *v4; // r7@1
  int v5; // r6@1
  int v6; // r5@1
  int v7; // r11@1
  float v8; // r1@1
  int v9; // r4@1
  int v10; // r10@1
  float v11; // r1@1
  int v12; // r5@1
  char v13; // r8@1
  BlockSource *v14; // r7@1
  BlockSource *v15; // r0@1
  int v17; // r1@3
  signed int v20; // r5@6
  signed int v22; // r1@13
  int v26; // r0@14
  int v27; // r1@14
  int v28; // r8@18
  int v29; // r9@18
  int v30; // r0@18
  signed int v31; // r5@19
  Material *v32; // r0@20
  __int64 v33; // r0@27
  int v35; // r0@31
  int v36; // r0@33
  int v37; // r0@37
  signed int v38; // r0@39
  int v40; // r10@52
  signed int v42; // r5@53
  signed int v44; // r1@59
  int v45; // r9@60
  int v46; // r5@60
  signed int v47; // r11@60
  int v48; // r0@60
  int v49; // r10@61
  Material *v50; // r0@61
  __int64 v52; // r0@67
  int v54; // r0@71
  int v55; // r0@73
  int v56; // r0@77
  signed int v57; // r0@79
  int v58; // r2@87
  bool v59; // zf@87
  bool v60; // nf@87
  unsigned __int8 v61; // vf@87
  int v62; // r1@87
  int v63; // r3@87
  int v64; // r5@93
  int v65; // r10@97
  int v66; // r4@97
  int v67; // r0@97
  int v68; // ST64_4@98
  BlockSource *v69; // r1@99
  int v70; // r11@99
  int v71; // r5@99
  int v72; // r6@99
  int v73; // r4@99
  int v74; // r8@92
  char v75; // r0@115
  int v76; // r0@117
  signed int v77; // r5@118
  int v78; // r8@120
  int v79; // r9@120
  __int64 v80; // r9@125
  int v81; // r2@126
  int v82; // r1@128
  int v84; // [sp+10h] [bp-D0h]@3
  int v85; // [sp+14h] [bp-CCh]@3
  PortalForcer *v86; // [sp+18h] [bp-C8h]@1
  int v87; // [sp+1Ch] [bp-C4h]@3
  int v88; // [sp+20h] [bp-C0h]@3
  int v89; // [sp+24h] [bp-BCh]@3
  int v90; // [sp+24h] [bp-BCh]@91
  signed int v91; // [sp+28h] [bp-B8h]@1
  int v92; // [sp+28h] [bp-B8h]@89
  int v93; // [sp+2Ch] [bp-B4h]@50
  int v94; // [sp+2Ch] [bp-B4h]@117
  int v95; // [sp+30h] [bp-B0h]@14
  int v96; // [sp+30h] [bp-B0h]@117
  signed int v97; // [sp+34h] [bp-ACh]@14
  int v98; // [sp+34h] [bp-ACh]@49
  int v99; // [sp+34h] [bp-ACh]@117
  int v100; // [sp+38h] [bp-A8h]@4
  int v101; // [sp+38h] [bp-A8h]@60
  int v102; // [sp+38h] [bp-A8h]@117
  int v103; // [sp+3Ch] [bp-A4h]@19
  int v104; // [sp+3Ch] [bp-A4h]@53
  int v105; // [sp+3Ch] [bp-A4h]@117
  int v106; // [sp+40h] [bp-A0h]@19
  int v107; // [sp+40h] [bp-A0h]@53
  int v108; // [sp+40h] [bp-A0h]@93
  int v109; // [sp+40h] [bp-A0h]@117
  int v110; // [sp+44h] [bp-9Ch]@1
  int v111; // [sp+44h] [bp-9Ch]@118
  int v112; // [sp+48h] [bp-98h]@3
  char v113; // [sp+48h] [bp-98h]@117
  const Entity *v114; // [sp+4Ch] [bp-94h]@1
  int v115; // [sp+4Ch] [bp-94h]@93
  int v116; // [sp+50h] [bp-90h]@3
  int v117; // [sp+50h] [bp-90h]@93
  int v118; // [sp+50h] [bp-90h]@115
  int v119; // [sp+54h] [bp-8Ch]@2
  int v120; // [sp+54h] [bp-8Ch]@3
  int v121; // [sp+58h] [bp-88h]@1
  int v122; // [sp+5Ch] [bp-84h]@19
  int v123; // [sp+5Ch] [bp-84h]@60
  int v124; // [sp+5Ch] [bp-84h]@89
  int v125; // [sp+5Ch] [bp-84h]@115
  int v126; // [sp+60h] [bp-80h]@3
  int v127; // [sp+60h] [bp-80h]@51
  int v128; // [sp+60h] [bp-80h]@97
  int v129; // [sp+64h] [bp-7Ch]@6
  int v130; // [sp+64h] [bp-7Ch]@59
  int v131; // [sp+64h] [bp-7Ch]@99
  int v132; // [sp+64h] [bp-7Ch]@117
  int v133; // [sp+68h] [bp-78h]@18
  int v134; // [sp+68h] [bp-78h]@59
  int v135; // [sp+68h] [bp-78h]@97
  int v136; // [sp+68h] [bp-78h]@99
  int v137; // [sp+68h] [bp-78h]@117
  int v138; // [sp+6Ch] [bp-74h]@16
  int v139; // [sp+6Ch] [bp-74h]@97
  int v140; // [sp+6Ch] [bp-74h]@117
  int v141; // [sp+70h] [bp-70h]@61
  int v142; // [sp+70h] [bp-70h]@97
  int v143; // [sp+70h] [bp-70h]@117
  int v144; // [sp+74h] [bp-6Ch]@125
  int v145; // [sp+78h] [bp-68h]@125
  int v146; // [sp+7Ch] [bp-64h]@125
  char v147; // [sp+80h] [bp-60h]@119
  char v148; // [sp+84h] [bp-5Ch]@102
  unsigned __int8 v149; // [sp+88h] [bp-58h]@99
  char v150; // [sp+8Ch] [bp-54h]@98

  _R9 = a2;
  v4 = this;
  v5 = a3;
  v114 = a2;
  v86 = this;
  v6 = j_mce::Math::floor(*((mce::Math **)a2 + 18), *(float *)&a2);
  v121 = v6;
  v7 = v6 + v5;
  v9 = j_mce::Math::floor(*((mce::Math **)_R9 + 19), v8);
  v10 = v6 - v5;
  v12 = j_mce::Math::floor(*((mce::Math **)_R9 + 20), v11);
  v13 = j_Random::_genRandInt32((PortalForcer *)((char *)v4 + 16));
  v14 = (BlockSource *)j_Entity::getRegion(_R9);
  v15 = (BlockSource *)j_Entity::getRegion(_R9);
  v110 = j_BlockSource::getDimensionConst(v15);
  v91 = 0;
  if ( v10 <= v7 )
  {
    __asm
    {
      VMOV.F32        S16, #-1.0
      VMOV.F32        S18, #0.5
    }
    v112 = v13 & 3;
    v116 = v12 + v5;
    v17 = v12 - v5;
    v85 = v112 | 4;
    _R8 = v10;
    v89 = v7;
    v126 = v9;
    v84 = v5;
    v88 = v12 - v5;
    v87 = v12;
    v120 = v12;
    do
      __asm { VMOV            S0, R8 }
      v100 = _R8;
      __asm { VCVT.F32.S32    S0, S0 }
      if ( v17 <= v116 )
      {
        __asm
        {
          VADD.F32        S0, S0, S18
          VLDR            S2, [R9,#0x48]
        }
        _R6 = v17;
          VSUB.F32        S0, S0, S2
          VMUL.F32        S20, S0, S0
        do
          __asm { VMOV            S0, R6 }
          v129 = _R6;
          __asm
          {
            VCVT.F32.S32    S0, S0
            VLDR            S2, [R9,#0x50]
          }
          v20 = *(_WORD *)(v110 + 120);
            VADD.F32        S0, S0, S18
            VSUB.F32        S0, S0, S2
            VMUL.F32        S0, S0, S0
            VADD.F32        S22, S0, S20
          while ( v20 > 0 )
            if ( j_BlockSource::isEmptyBlock(v14, _R8, --v20, _R6) == 1 )
            {
              do
              {
                _R4 = v20;
                if ( v20 < 1 )
                  break;
                --v20;
              }
              while ( j_BlockSource::isEmptyBlock(v14, _R8, _R4 - 1, _R6) );
              __asm
                VMOV            S0, R4
                VCVT.F32.S32    S0, S0
              v22 = v112;
              __asm { VADD.F32        S24, S0, S18 }
LABEL_14:
              v97 = v22;
              _VF = __OFSUB__(v22 % 4, 1);
              _ZF = v22 % 4 == 1;
              _NF = v22 % 4 - 1 < 0;
              v26 = v22 % 2;
              v95 = v22 % 4;
              v27 = 1 - v22 % 2;
              if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                v26 = -v26;
              v138 = v26;
                v27 = -v27;
              v28 = _R8 - v26;
              v133 = v27;
              v29 = v129 - v27;
              v30 = 0;
LABEL_19:
              v31 = 0;
              v103 = v30;
              v106 = v29;
              v122 = v28;
              while ( 1 )
                v32 = (Material *)BlockSource::getMaterial(v14, v28, _R4 - 1, v29);
                if ( !j_Material::isSolid(v32) )
                BlockSource::getMaterial(v14, v28, _R4, v29);
                if ( j_BlockSource::isEmptyBlock(v14, v28, _R4, v29) != 1 )
                BlockSource::getMaterial(v14, v28, _R4 + 1, v29);
                if ( j_BlockSource::isEmptyBlock(v14, v28, _R4 + 1, v29) != 1 )
                BlockSource::getMaterial(v14, v28, _R4 + 2, v29);
                if ( j_BlockSource::isEmptyBlock(v14, v28, _R4 + 2, v29) != 1 )
                BlockSource::getMaterial(v14, v28, _R4 + 3, v29);
                if ( j_BlockSource::isEmptyBlock(v14, v28, _R4 + 3, v29) != 1 )
                ++v31;
                v28 += v138;
                v29 += v133;
                if ( v31 >= 4 )
                {
                  v28 = v122 + v133;
                  v29 = v106 - v138;
                  v30 = v103 + 1;
                  if ( v103 + 1 < 3 )
                    goto LABEL_19;
                  _R9 = v114;
                  v33 = 0LL;
                  __asm
                  {
                    VLDR            S0, [R9,#0x4C]
                    VSUB.F32        S0, S24, S0
                    VMUL.F32        S0, S0, S0
                    VADD.F32        S0, S22, S0
                    VCMPE.F32       S0, S16
                    VMRS            APSR_nzcv, FPSCR
                    VCMPE.F32       S16, #0.0
                  }
                  if ( _NF ^ _VF )
                    LODWORD(v33) = 1;
                  __asm { VMRS            APSR_nzcv, FPSCR }
                    HIDWORD(v33) = 1;
                  _R8 = v100;
                  _ZF = v33 == 0;
                  v35 = v121;
                  if ( !_ZF )
                    v35 = v100;
                  v121 = v35;
                  v36 = v126;
                    v36 = _R4;
                  v126 = v36;
                    __asm { VMOVNE.F32      S16, S0 }
                  v37 = v87;
                    v37 = v129;
                  v87 = v37;
                  v38 = v91;
                    v38 = v95;
                  v91 = v38;
                  v22 = v97 + 1;
                  if ( v97 + 1 >= v85 )
                    v20 = _R4;
                    goto LABEL_7;
                  goto LABEL_14;
                }
              v20 = _R4;
              _R9 = v114;
              _R8 = v100;
LABEL_7:
              _R6 = v129;
            }
          _VF = __OFSUB__(_R6, v116);
          _NF = _R6++ - v116 < 0;
        while ( _NF ^ _VF );
      }
      _VF = __OFSUB__(_R8, v7);
      _NF = _R8 - v7 < 0;
      v17 = v88;
      ++_R8;
    while ( _NF ^ _VF );
      VCMPE.F32       S16, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      _R11 = v10;
      v9 = v126;
      if ( v10 > v89 )
        v119 = v87;
      else
        v98 = v120 - 1 - v84;
          __asm { VMOV            S0, R11 }
          v93 = _R11;
          __asm { VCVT.F32.S32    S0, S0 }
          if ( v17 <= v116 )
            __asm
              VADD.F32        S0, S0, S18
              VLDR            S2, [R9,#0x48]
            v40 = v98;
            _R6 = v17;
            v127 = v9;
              VSUB.F32        S0, S0, S2
              VMUL.F32        S20, S0, S0
            do
              __asm { VMOV            S0, R6 }
              v104 = _R6;
              v107 = v40;
                VLDR            S2, [R9,#0x50]
              v42 = *(_WORD *)(v110 + 120);
                VADD.F32        S0, S0, S18
                VSUB.F32        S0, S0, S2
                VMUL.F32        S0, S0, S0
                VADD.F32        S22, S0, S20
LABEL_55:
              while ( v42 >= 1 )
                if ( j_BlockSource::isEmptyBlock(v14, _R11, --v42, _R6) == 1 )
                  do
                    _R4 = v42;
                    if ( v42 < 1 )
                      break;
                    --v42;
                  while ( j_BlockSource::isEmptyBlock(v14, _R11, _R4 - 1, _R6) );
                    VMOV            S0, R4
                    VCVT.F32.S32    S0, S0
                  v44 = v112;
                  v130 = _R4 + 2;
                  v134 = _R4 + 1;
                  __asm { VADD.F32        S24, S0, S18 }
                    v101 = v44;
                    v45 = v44 % 2;
                    v46 = _R11 - v44 % 2;
                    v123 = 1 - v44 % 2;
                    v47 = 0;
                    v48 = v40;
                    do
                    {
                      v49 = v45 + v48;
                      v141 = v48;
                      v50 = (Material *)BlockSource::getMaterial(v14, v46, _R4 - 1, v45 + v48);
                      if ( !j_Material::isSolid(v50)
                        || (BlockSource::getMaterial(v14, v46, _R4, v49),
                            j_BlockSource::isEmptyBlock(v14, v46, _R4, v49) != 1)
                        || (BlockSource::getMaterial(v14, v46, v134, v49),
                            j_BlockSource::isEmptyBlock(v14, v46, v134, v49) != 1)
                        || (BlockSource::getMaterial(v14, v46, v130, v49),
                            j_BlockSource::isEmptyBlock(v14, v46, v130, v49) != 1)
                        || (BlockSource::getMaterial(v14, v46, _R4 + 3, v49),
                            j_BlockSource::isEmptyBlock(v14, v46, _R4 + 3, v49) != 1) )
                      {
                        v42 = _R4;
                        _R9 = v114;
                        _R11 = v93;
                        v40 = v107;
                        _R6 = v104;
                        goto LABEL_55;
                      }
                      ++v47;
                      v46 += v45;
                      v48 = v141 + v123;
                    }
                    while ( v47 < 4 );
                    _R3 = v114;
                    v52 = 0LL;
                    __asm
                      VLDR            S0, [R3,#0x4C]
                      VSUB.F32        S0, S24, S0
                      VMUL.F32        S0, S0, S0
                      VADD.F32        S0, S22, S0
                      VCMPE.F32       S0, S16
                      VMRS            APSR_nzcv, FPSCR
                      VCMPE.F32       S16, #0.0
                    if ( _NF ^ _VF )
                      LODWORD(v52) = 1;
                    __asm { VMRS            APSR_nzcv, FPSCR }
                      HIDWORD(v52) = 1;
                    _R11 = v93;
                    _ZF = v52 == 0;
                    v54 = v121;
                    if ( !_ZF )
                      v54 = v93;
                    v121 = v54;
                    v55 = v127;
                      v55 = _R4;
                    v127 = v55;
                      __asm { VMOVNE.F32      S16, S0 }
                    _R6 = v104;
                    v56 = v119;
                      v56 = v104;
                    v119 = v56;
                    v57 = v91;
                      v57 = v45;
                    v91 = v57;
                    v40 = v107;
                    v44 = v101 + 1;
                  while ( v101 <= v112 );
                  v42 = _R4;
              ++v40;
              _VF = __OFSUB__(_R6, v116);
              _NF = _R6++ - v116 < 0;
            while ( _NF ^ _VF );
          else
          v9 = v127;
          _VF = __OFSUB__(_R11, v89);
          _NF = _R11 - v89 < 0;
          v17 = v88;
          ++_R11;
    else
      v119 = v87;
  }
  else
    v119 = v12;
    __asm { VMOV.F32        S16, #-1.0 }
  __asm { VCMPE.F32       S16, #0.0 }
  v58 = v91 % 2;
  v61 = __OFSUB__(v91 % 4, 1);
  v59 = v91 % 4 == 1;
  v60 = v91 % 4 - 1 < 0;
  v62 = 1 - v91 % 2;
  v63 = v91 % 2;
  if ( v91 % 4 > 1 )
    v63 = -v63;
  v124 = v63;
  v92 = -v63;
  if ( !((unsigned __int8)(v60 ^ v61) | v59) )
    v62 = -v62;
  v90 = -v62;
  __asm { VMRS            APSR_nzcv, FPSCR }
  if ( _NF ^ _VF )
    v115 = v63 + v62;
    v108 = v58;
    v64 = v121 - v62;
    v117 = v62;
    if ( v9 < 70 )
      v9 = 70;
    if ( v9 > *(_WORD *)(v110 + 120) - 10 )
      v9 = *(_WORD *)(v110 + 120) - 10;
    v65 = v119;
    v135 = v9 + 2;
    v139 = v9 + 1;
    v142 = v9 - 1;
    v128 = v9;
    v66 = v63;
    v67 = 3;
      v68 = v67;
      v150 = *(_BYTE *)(Block::mObsidian + 4);
      j_BlockSource::setBlock((int)v14, v64, v142, v66 + v65, &v150, 3);
      v150 = BlockID::AIR;
      j_BlockSource::setBlock((int)v14, v64, v128, v66 + v65, &v150, 3);
      j_BlockSource::setBlock((int)v14, v64, v139, v66 + v65, &v150, 3);
      j_BlockSource::setBlock((int)v14, v64, v135, v66 + v65, &v150, 3);
      j_BlockSource::setBlock((int)v14, v124 + v64, v142, v115 + v65, &v150, 3);
      j_BlockSource::setBlock((int)v14, v124 + v64, v128, v115 + v65, &v150, 3);
      j_BlockSource::setBlock((int)v14, v124 + v64, v139, v115 + v65, &v150, 3);
      v66 = v124;
      j_BlockSource::setBlock((int)v14, v124 + v64, v135, v115 + v65, &v150, 3);
      v65 -= v124;
      v64 += v117;
      v67 = v68 - 1;
    while ( v68 != 1 );
    v69 = (BlockSource *)&v149;
    v74 = v124;
    v70 = 0;
    v71 = v121 - 2 * v117;
    v72 = v119 - 2 * v124;
    v136 = 2 * v117;
    v131 = 2 * v124;
    v73 = v117;
      if ( (v70 | 4) == 4 )
        j_BlockSource::getBlockID(v69, (int)v14, v71, v142, v72);
        if ( v149 == BlockID::AIR )
          v148 = *(_BYTE *)(Block::mNetherrack + 4);
          j_BlockSource::setBlock((int)v14, v71, v142, v72, &v148, 3);
        j_BlockSource::getBlockID((BlockSource *)&v149, (int)v14, v74 + v71, v142, v73 + v72);
          j_BlockSource::setBlock((int)v14, v74 + v71, v142, v73 + v72, &v148, 3);
        j_BlockSource::getBlockID(v69, (int)v14, v92 + v71, v142, v90 + v72);
          j_BlockSource::setBlock((int)v14, v92 + v71, v142, v90 + v72, &v148, 3);
        j_BlockSource::getBlockID((BlockSource *)&v149, (int)v14, v71, v142, v72);
        j_BlockSource::getBlockID((BlockSource *)&v149, (int)v14, v124 + v71, v142, v117 + v72);
          j_BlockSource::setBlock((int)v14, v124 + v71, v142, v117 + v72, &v148, 3);
        j_BlockSource::getBlockID((BlockSource *)&v149, (int)v14, v131 + v71, v142, v136 + v72);
          j_BlockSource::setBlock((int)v14, v131 + v71, v142, v136 + v72, &v148, 3);
      v73 = v117;
      ++v70;
      v74 = v124;
      v69 = (BlockSource *)&v149;
      v71 += v117;
      v72 += v124;
    while ( v70 != 5 );
    v62 = v117;
    v9 = v128;
    v58 = v108;
    v74 = v63;
  v75 = 2;
  v118 = v62;
  v125 = v74;
  if ( v58 )
    v75 = 1;
  v113 = v75;
  v76 = 0;
  v109 = v119 + 2 * v62;
  v105 = v121 + 2 * v74;
  v102 = v62 + v119;
  v94 = v121 - v74;
  v143 = v9 + 3;
  v140 = v9 + 2;
  v137 = v9 + 1;
  v132 = v9 - 1;
  v99 = v74 + v121;
  v96 = v119 - v62;
  do
    v77 = 0;
    v111 = v76;
    while ( 1 )
      while ( 1 )
        v78 = v119 + (v77 - 1) * v118;
        v79 = v121 + (v77 - 1) * v125;
        if ( v77 )
          break;
        v147 = *(_BYTE *)(Block::mObsidian + 4);
        j_BlockSource::setBlockAndData((int)v14, v79, v132, v78, &v147, 0, 2);
        j_BlockSource::setBlockAndData((int)v14, v79, v9, v78, &v147, 0, 2);
        j_BlockSource::setBlockAndData((int)v14, v79, v137, v78, &v147, 0, 2);
        j_BlockSource::setBlockAndData((int)v14, v79, v140, v78, &v147, 0, 2);
        j_BlockSource::setBlockAndData((int)v14, v79, v143, v78, &v147, 0, 2);
        v77 = 1;
      if ( v77 == 3 )
        break;
      v147 = *(_BYTE *)(Block::mObsidian + 4);
      j_BlockSource::setBlockAndData((int)v14, v121 + (v77 - 1) * v125, v132, v119 + (v77 - 1) * v118, &v147, 0, 2);
      v147 = *(_BYTE *)(Block::mPortal + 4);
      j_BlockSource::setBlockAndData((int)v14, v79, v9, v78, &v147, v113, 2);
      j_BlockSource::setBlockAndData((int)v14, v79, v137, v78, &v147, v113, 2);
      j_BlockSource::setBlockAndData((int)v14, v79, v140, v78, &v147, v113, 2);
      j_BlockSource::setBlockAndData((int)v14, v79, v143, v78, &v147, 0, 2);
      if ( ++v77 == 4 )
        goto LABEL_125;
    v147 = *(_BYTE *)(Block::mObsidian + 4);
    j_BlockSource::setBlockAndData((int)v14, v79, v132, v78, &v147, 0, 2);
    j_BlockSource::setBlockAndData((int)v14, v79, v9, v78, &v147, 0, 2);
    j_BlockSource::setBlockAndData((int)v14, v79, v137, v78, &v147, 0, 2);
    j_BlockSource::setBlockAndData((int)v14, v79, v140, v78, &v147, 0, 2);
    j_BlockSource::setBlockAndData((int)v14, v79, v143, v78, &v147, 0, 2);
LABEL_125:
    v144 = v94;
    v145 = v9 - 1;
    v146 = v96;
    BlockSource::updateNeighborsAt(v14, (const BlockPos *)&v144);
    v145 = v9;
    v145 = v9 + 1;
    v145 = v9 + 2;
    v145 = v9 + 3;
    HIDWORD(v80) = v9 - 1;
    v144 = v121;
    v146 = v119;
    *(_QWORD *)&v145 = __PAIR__(v119, v137);
    LODWORD(v80) = v99;
    *(_QWORD *)&v144 = v80;
    v146 = v102;
    HIDWORD(v80) = v9;
    v144 = v99;
    LODWORD(v80) = v105;
    v144 = v105;
    v146 = v109;
    v76 = v111 + 1;
  while ( v111 != 3 );
  v81 = v90;
  if ( v118 >= 0 )
    v81 = v118;
  v82 = v92;
  if ( v125 >= 0 )
    v82 = v125;
  return PortalForcer::addPortalRecord(v86, v14, v121, v9, v119, v82, v81);
}


int __fastcall PortalForcer::force(PortalForcer *this, Entity *a2)
{
  Entity *v2; // r5@1
  PortalForcer *v3; // r6@1
  int v4; // r0@2
  __int64 v5; // kr00_8@2
  int v6; // r11@2
  int v7; // r2@2
  int v8; // r5@2
  _DWORD *v9; // r7@2
  int v10; // r9@3
  signed int v11; // r5@3
  int result; // r0@6
  int v13; // r4@7
  int v14; // r0@7
  int v15; // r11@7
  int v18; // r1@9
  int v19; // r2@10
  int v20; // r4@10
  int v21; // r3@10
  int v24; // r5@10
  int v25; // r6@11
  int v26; // lr@11
  int v28; // r0@11
  int v30; // r7@13
  int v34; // r0@19
  int v37; // r4@26
  int v38; // r0@26
  int v40; // r0@26
  int v46; // r0@25
  int *v47; // r2@25
  int v48; // r1@25
  Entity *v49; // [sp+Ch] [bp-94h]@2
  Entity *v50; // [sp+Ch] [bp-94h]@7
  int v51; // [sp+10h] [bp-90h]@2
  int v52; // [sp+14h] [bp-8Ch]@3
  int v53; // [sp+1Ch] [bp-84h]@2
  PortalForcer *v54; // [sp+20h] [bp-80h]@2
  PortalForcer *v55; // [sp+20h] [bp-80h]@7
  int v56; // [sp+2Ch] [bp-74h]@26
  PortalForcer *v57; // [sp+30h] [bp-70h]@30
  int v58; // [sp+34h] [bp-6Ch]@30
  int v59; // [sp+38h] [bp-68h]@7
  int v60; // [sp+3Ch] [bp-64h]@19
  int v61; // [sp+40h] [bp-60h]@10
  char v62; // [sp+44h] [bp-5Ch]@6
  int v63; // [sp+48h] [bp-58h]@6
  int v64; // [sp+4Ch] [bp-54h]@6
  int v65; // [sp+50h] [bp-50h]@6
  char v66; // [sp+54h] [bp-4Ch]@6
  char v67; // [sp+60h] [bp-40h]@4
  int v68; // [sp+64h] [bp-3Ch]@2
  PortalForcer *v69; // [sp+68h] [bp-38h]@2
  int v70; // [sp+6Ch] [bp-34h]@2
  int v71; // [sp+70h] [bp-30h]@2
  PortalForcer *v72; // [sp+74h] [bp-2Ch]@2
  int v73; // [sp+78h] [bp-28h]@2

  v2 = a2;
  v3 = this;
  if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 524))(a2) == 2 )
  {
    v4 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 52))(v2);
    j_BlockPos::BlockPos((int)&v68, v4);
    v5 = *(_QWORD *)&v68;
    v54 = v69;
    v51 = v70;
    v71 = v68;
    v53 = (int)v69 - 1;
    v72 = (PortalForcer *)((char *)v69 - 1);
    v73 = v70;
    v49 = v2;
    v6 = j_Entity::getRegion(v2);
    v7 = HIDWORD(v5) - 2;
    v8 = -2;
    v9 = &Block::mObsidian;
    do
    {
      v52 = v8;
      v10 = v51 - v8;
      v11 = -2;
      do
      {
        v67 = *(_BYTE *)(*v9 + 4);
        j_BlockSource::setBlock(v6, v5 + v11, v7, v10, &v67, 3);
        v67 = BlockID::AIR;
        j_BlockSource::setBlock(v6, v5 + v11, v53, v10, &v67, 3);
        j_BlockSource::setBlock(v6, v5 + v11, (int)v54, v10, &v67, 3);
        j_BlockSource::setBlock(v6, v5 + v11, HIDWORD(v5) + 1, v10, &v67, 3);
        v7 = HIDWORD(v5) - 2;
        v9 = &Block::mObsidian;
        ++v11;
      }
      while ( v11 != 3 );
      v8 = v52 + 1;
    }
    while ( v52 != 2 );
    j_Vec3::Vec3((int)&v66, (int)&v71);
    j_Entity::getRotation((Entity *)&v62, (int)v49);
    v64 = 0;
    v65 = v63;
    j_Entity::moveTo((int)v49, (int)&v66);
    *(_QWORD *)((char *)v49 + 108) = *(_QWORD *)&Vec3::ZERO;
    result = dword_2822498;
    *((_DWORD *)v49 + 29) = dword_2822498;
  }
  else
    v71 = 0;
    v72 = 0;
    v73 = 0;
    v13 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 524))(v2);
    v50 = v2;
    v14 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 52))(v2);
    j_BlockPos::BlockPos((int)&v59, v14);
    v55 = v3;
    v71 = BlockPos::ZERO;
    v72 = (PortalForcer *)unk_2816278;
    v73 = dword_281627C;
    v15 = *((_DWORD *)v3 + 7 * v13 + 635);
    if ( !v15 )
      goto LABEL_36;
    __asm { VMOV.F32        S0, #-1.0 }
      _R0 = *(_DWORD *)(v15 + 16);
      v18 = (char)_R0;
      if ( (char)_R0 >= 1 )
        v19 = v59;
        v20 = 0;
        v21 = v61;
        __asm
        {
          SBFX.W          R9, R0, #8, #8
          SBFX.W          R10, R0, #0x10, #8
        }
        v24 = 0;
        do
          v25 = *(_DWORD *)(v15 + 12);
          v26 = *(_DWORD *)(v15 + 4);
          _R8 = v24 - v61 + v25;
          v28 = v24 - v61 + v25;
          if ( _R8 < 0 )
            v28 = v21 - v25;
          _R12 = v20 - v59 + v26;
          v30 = v20 - v59 + v26;
          if ( _R12 < 0 )
            v30 = v19 - v26;
          _VF = __OFSUB__(v30, 128);
          _ZF = v30 == 128;
          _NF = v30 - 128 < 0;
          if ( v30 <= 128 )
          {
            _VF = __OFSUB__(v28, 128);
            _ZF = v28 == 128;
            _NF = v28 - 128 < 0;
          }
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            __asm { VMOV            S2, R12 }
            v34 = *(_DWORD *)(v15 + 8);
            __asm
            {
              VMOV            S4, R8
              VCVT.F32.S32    S2, S2
              VCVT.F32.S32    S4, S4
              VCMPE.F32       S0, #0.0
            }
            _R7 = v34 - v60;
              VMRS            APSR_nzcv, FPSCR
              VMOV            S6, R7
              VCVT.F32.S32    S6, S6
              VMUL.F32        S2, S2, S2
              VMUL.F32        S4, S4, S4
              VMUL.F32        S6, S6, S6
              VADD.F32        S2, S4, S2
              VADD.F32        S2, S2, S6
            if ( _NF ^ _VF )
              __asm { VMOV.F32        S0, S2 }
              v71 = v20 + v26;
              v72 = (PortalForcer *)v34;
              v73 = v24 + v25;
            else
              __asm
              {
                VCMPEGE.F32     S2, S0
                VMRSGE          APSR_nzcv, FPSCR
              }
          v19 -= _R9;
          v20 += _R9;
          v21 -= _R10;
          v24 += _R10;
          --v18;
        while ( v18 );
      v15 = *(_DWORD *)v15;
    while ( v15 );
    __asm
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
LABEL_36:
      _R5 = v50;
      v37 = PortalForcer::createPortal(v55, v50, 16);
      v38 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R5 + 52))(_R5);
      j_BlockPos::BlockPos((int)&v56, v38);
      _R6 = *(_DWORD *)(v37 + 12);
      v40 = (char)_R6;
      if ( (char)_R6 > 0 )
        _R1 = *(_DWORD *)v37;
        _R2 = *(_DWORD *)(v37 + 4);
        _R3 = *(_DWORD *)(v37 + 8);
          VMOV.F32        S2, #0.5
          VMOV            S0, R2
          VCVT.F32.S32    S0, S0
          VLDR            S6, [R5,#0x4C]
          VLDR            S4, [R5,#0x48]
          VLDR            S8, [R5,#0x50]
          SBFX.W          R7, R6, #8, #8
          SBFX.W          R6, R6, #0x10, #8
          VADD.F32        S0, S0, S2
          VSUB.F32        S10, S0, S6
          VSUB.F32        S0, S2, S4
          VMOV.F32        S6, #-1.0
          VSUB.F32        S2, S2, S8
          VMUL.F32        S4, S10, S10
          __asm
            VMOV            S8, R1
            VMOV            S10, R3
            VCVT.F32.S32    S8, S8
            VCVT.F32.S32    S10, S10
            VCMPE.F32       S6, #0.0
            VMRS            APSR_nzcv, FPSCR
            VADD.F32        S8, S0, S8
            VADD.F32        S10, S10, S2
            VMUL.F32        S8, S8, S8
            VMUL.F32        S10, S10, S10
            VADD.F32        S8, S8, S4
            VADD.F32        S8, S8, S10
          if ( _NF ^ _VF )
            __asm { VMOV.F32        S6, S8 }
            v56 = _R1;
            v57 = (PortalForcer *)_R2;
            v58 = _R3;
          else
              VCMPEGE.F32     S8, S6
              VMRSGE          APSR_nzcv, FPSCR
          _R1 += _R7;
          _R3 += _R6;
          --v40;
        while ( v40 );
      v71 = v56;
      v72 = v57;
      v73 = v58;
      v46 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v50 + 524))(v50);
      v47 = &v71;
      v48 = (int)v50;
    else
    result = PortalForcer::travelPortal(v46, v48, (int)v47);
  return result;
}


_DWORD *__fastcall PortalForcer::printPortalRecords(PortalForcer *this, int a2)
{
  _DWORD *result; // r0@1

  for ( result = (_DWORD *)*((_DWORD *)this + 7 * a2 + 635); result; result = (_DWORD *)*result )
    ;
  return result;
}


void __fastcall PortalForcer::~PortalForcer(PortalForcer *this)
{
  PortalForcer *v1; // r0@1

  v1 = PortalForcer::~PortalForcer(this);
  j_j_j__ZdlPv_6((void *)v1);
}


PortalForcer *__fastcall PortalForcer::~PortalForcer(PortalForcer *this)
{
  PortalForcer *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  char *v4; // r0@3
  void *v5; // r0@6
  void *v6; // r5@7
  char *v7; // r0@8
  void *v8; // r0@11
  void *v9; // r5@12
  char *v10; // r0@13
  int v11; // r1@16
  void *v12; // r0@16
  unsigned int *v14; // r2@18
  signed int v15; // r1@20

  v1 = this;
  *(_DWORD *)this = &off_27196D4;
  v2 = (void *)*((_DWORD *)this + 649);
  if ( v2 )
  {
    do
    {
      v3 = *(void **)v2;
      j_operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  j___aeabi_memclr4(*((_DWORD *)v1 + 647), 4 * *((_DWORD *)v1 + 648));
  *((_DWORD *)v1 + 649) = 0;
  *((_DWORD *)v1 + 650) = 0;
  v4 = (char *)*((_DWORD *)v1 + 647);
  if ( v4 && (char *)v1 + 2612 != v4 )
    j_operator delete(v4);
  v5 = (void *)*((_DWORD *)v1 + 642);
  if ( v5 )
      v6 = *(void **)v5;
      j_operator delete(v5);
      v5 = v6;
    while ( v6 );
  j___aeabi_memclr4(*((_DWORD *)v1 + 640), 4 * *((_DWORD *)v1 + 641));
  *((_DWORD *)v1 + 642) = 0;
  *((_DWORD *)v1 + 643) = 0;
  v7 = (char *)*((_DWORD *)v1 + 640);
  if ( v7 && (char *)v1 + 2584 != v7 )
    j_operator delete(v7);
  v8 = (void *)*((_DWORD *)v1 + 635);
  if ( v8 )
      v9 = *(void **)v8;
      j_operator delete(v8);
      v8 = v9;
    while ( v9 );
  j___aeabi_memclr4(*((_DWORD *)v1 + 633), 4 * *((_DWORD *)v1 + 634));
  *((_DWORD *)v1 + 635) = 0;
  *((_DWORD *)v1 + 636) = 0;
  v10 = (char *)*((_DWORD *)v1 + 633);
  if ( v10 && (char *)v1 + 2556 != v10 )
    j_operator delete(v10);
  *(_DWORD *)v1 = &off_271859C;
  v11 = *((_DWORD *)v1 + 2);
  v12 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  return v1;
}


void __fastcall PortalForcer::deserialize(PortalForcer *this, const CompoundTag *a2)
{
  PortalForcer::deserialize(this, a2);
}


signed int __fastcall PortalForcer::findPortal(int a1, int a2, int a3, int a4, int a5)
{
  int i; // r7@1
  int v9; // r10@5
  int v10; // r6@5
  int v11; // r12@5
  int v12; // r1@5
  int v13; // r4@5
  int v15; // r9@6
  int v16; // r11@6
  int v17; // r5@6
  int v18; // r2@6
  int v20; // r0@6
  int v21; // r5@6
  int v23; // r0@8
  int v24; // r2@8
  int v29; // r0@16
  signed int result; // r0@19
  int v31; // [sp+4h] [bp-34h]@5
  int v32; // [sp+8h] [bp-30h]@5
  int v33; // [sp+Ch] [bp-2Ch]@4
  int v34; // [sp+10h] [bp-28h]@1

  v34 = a3;
  __asm { VMOV.F32        S0, #-1.0 }
  *(_DWORD *)a5 = BlockPos::ZERO;
  *(_DWORD *)(a5 + 4) = unk_2816278;
  *(_DWORD *)(a5 + 8) = dword_281627C;
  for ( i = *(_DWORD *)(a1 + 28 * a2 + 2540); i; i = *(_DWORD *)i )
  {
    _R0 = *(_DWORD *)(i + 16);
    v33 = (char)_R0;
    if ( (char)_R0 >= 1 )
    {
      __asm { SBFX.W          R1, R0, #8, #8 }
      v32 = _R1;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v12 = 0;
      v13 = 0;
      __asm { SBFX.W          R0, R0, #0x10, #8 }
      v31 = _R0;
      do
      {
        v15 = *(_DWORD *)(i + 12);
        v16 = *(_DWORD *)(i + 4);
        v17 = *(_DWORD *)(v34 + 8);
        v18 = *(_DWORD *)v34;
        v20 = v17 - v15;
        v21 = v10 + v15 - v17;
        _LR = v21;
        if ( v21 < 0 )
          v21 = v9 + v20;
        v23 = v18 - v16;
        v24 = v12 + v16 - v18;
        _R8 = v24;
        if ( v24 < 0 )
          v24 = v11 + v23;
        _VF = __OFSUB__(v24, a4);
        _ZF = v24 == a4;
        _NF = v24 - a4 < 0;
        if ( v24 <= a4 )
        {
          _VF = __OFSUB__(v21, a4);
          _ZF = v21 == a4;
          _NF = v21 - a4 < 0;
        }
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          __asm
          {
            VMOV            S2, R8
            VMOV            S4, LR
            VCVT.F32.S32    S2, S2
            VCVT.F32.S32    S4, S4
            VCMPE.F32       S0, #0.0
            VMRS            APSR_nzcv, FPSCR
          }
          _R0 = *(_DWORD *)(i + 8) - *(_DWORD *)(v34 + 4);
            VMUL.F32        S2, S2, S2
            VMOV            S6, R0
            VMUL.F32        S4, S4, S4
            VCVT.F32.S32    S6, S6
            VADD.F32        S2, S4, S2
            VMUL.F32        S6, S6, S6
            VADD.F32        S2, S2, S6
          if ( _NF ^ _VF )
            __asm { VMOV.F32        S0, S2 }
            v29 = *(_DWORD *)(i + 8);
            *(_DWORD *)a5 = v12 + v16;
            *(_DWORD *)(a5 + 4) = v29;
            *(_DWORD *)(a5 + 8) = v10 + v15;
          else
            __asm
            {
              VCMPEGE.F32     S2, S0
              VMRSGE          APSR_nzcv, FPSCR
            }
        ++v13;
        v9 -= v31;
        v10 += v31;
        v11 -= v32;
        v12 += v32;
      }
      while ( v13 < v33 );
    }
  }
  __asm { VCMPE.F32       S0, #0.0 }
  result = 0;
  __asm { VMRS            APSR_nzcv, FPSCR }
  if ( !(_NF ^ _VF) )
    result = 1;
  return result;
}


signed int __fastcall PortalForcer::removePortalRecord(PortalForcer *this, BlockSource *a2, const BlockPos *a3)
{
  PortalForcer *v3; // r5@1
  const BlockPos *v4; // r4@1
  int v5; // r0@1
  __int64 v6; // r10@1
  int v7; // r0@1
  unsigned int v8; // r5@1
  unsigned int v9; // r7@1
  int v10; // r4@1
  int v11; // r0@1
  int v12; // r8@2
  int v13; // r6@2
  int v14; // r1@4
  bool v15; // zf@4
  int v16; // r9@9
  signed int result; // r0@11
  _DWORD *v18; // r5@13
  int v19; // r7@14
  unsigned int v20; // r8@14
  int v21; // r9@14
  int v22; // r10@14
  int *v23; // r11@14
  _DWORD *v24; // r4@14
  _DWORD *v25; // r0@14
  _DWORD *v26; // r6@15
  int v27; // r1@18
  int v28; // r1@21
  int v29; // r1@22
  PortalForcer *v30; // [sp+0h] [bp-30h]@1
  BlockSource *v31; // [sp+4h] [bp-2Ch]@1
  int v32; // [sp+8h] [bp-28h]@1
  int v33; // [sp+8h] [bp-28h]@22

  v3 = this;
  v31 = a2;
  v4 = a3;
  v30 = this;
  v5 = j_BlockSource::getDimensionId(a2);
  v6 = *(_QWORD *)v4;
  v7 = (int)v3 + 28 * v5;
  v32 = *((_DWORD *)v4 + 2);
  v8 = *(_DWORD *)(v7 + 2536);
  v9 = 8976890 * *(_QWORD *)v4 + 981131 * (*(_QWORD *)v4 >> 32) + v32;
  v10 = v9 % *(_DWORD *)(v7 + 2536);
  v11 = *(_DWORD *)(*(_DWORD *)(v7 + 2532) + 4 * v10);
  if ( !v11 )
    return j_j_j__ZNK11BlockSource14getDimensionIdEv_1(v31);
  v12 = *(_DWORD *)v11;
  v13 = *(_DWORD *)(*(_DWORD *)v11 + 20);
  while ( 1 )
  {
    if ( v13 == v9 )
    {
      v14 = *(_DWORD *)(v12 + 4);
      v15 = (_DWORD)v6 == v14;
      if ( (_DWORD)v6 == v14 )
        v15 = HIDWORD(v6) == *(_DWORD *)(v12 + 8);
      if ( v15 && v32 == *(_DWORD *)(v12 + 12) )
        break;
    }
    v16 = *(_DWORD *)v12;
    if ( *(_DWORD *)v12 )
      v13 = *(_DWORD *)(v16 + 20);
      v11 = v12;
      v12 = *(_DWORD *)v12;
      if ( *(_DWORD *)(v16 + 20) % v8 == v10 )
        continue;
  }
  v18 = *(_DWORD **)v11;
  result = j_BlockSource::getDimensionId(v31);
  if ( v18 )
    v19 = (int)v30 + 28 * j_BlockSource::getDimensionId(v31);
    v20 = *(_DWORD *)(v19 + 2536);
    v21 = *(_DWORD *)(v19 + 2532);
    v22 = v18[5] % *(_DWORD *)(v19 + 2536);
    v23 = (int *)(v19 + 2532);
    v24 = *(_DWORD **)(v21 + 4 * v22);
    v25 = *(_DWORD **)(v21 + 4 * v22);
    do
      v26 = v25;
      v25 = (_DWORD *)*v25;
    while ( v25 != v18 );
    if ( v24 != v26 )
      if ( *v18 )
      {
        v27 = *(_DWORD *)(*v18 + 20) % v20;
        if ( v27 != v22 )
          *(_DWORD *)(v21 + 4 * v27) = v26;
      }
      goto LABEL_27;
    v28 = *v18;
    if ( *v18 )
      v33 = *v18;
      v29 = *(_DWORD *)(v28 + 20) % v20;
      if ( v29 == v22 )
LABEL_27:
        *v26 = *v18;
        j_operator delete(v18);
        --*(_DWORD *)(v19 + 2544);
        result = 1;
        *((_BYTE *)v30 + 4) = 1;
        return result;
      *(_DWORD *)(v21 + 4 * v29) = v24;
      v21 = *v23;
      v28 = v33;
      v24 = *(_DWORD **)(*v23 + 4 * v22);
    if ( (_DWORD *)(v19 + 2540) == v24 )
      *v24 = v28;
    *(_DWORD *)(v21 + 4 * v22) = 0;
    goto LABEL_27;
  return result;
}


void __fastcall PortalForcer::deserialize(PortalForcer *this, const CompoundTag *a2)
{
  PortalForcer *v2; // r11@1
  const CompoundTag *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r6@2
  void *v6; // r0@3
  void *v7; // r7@4
  void *v8; // r0@5
  void *v9; // r6@6
  ListTag *v10; // r7@7
  void *v11; // r0@7
  void **v12; // r10@10
  void **v13; // r5@10
  int v14; // r6@10
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  unsigned int *v19; // r2@19
  signed int v20; // r1@21
  unsigned int *v21; // r2@23
  signed int v22; // r1@25
  void **v23; // r5@26
  unsigned int *v24; // r2@27
  signed int v25; // r1@29
  unsigned int *v26; // r2@31
  signed int v27; // r1@33
  unsigned int *v28; // r2@35
  signed int v29; // r1@37
  int v30; // r8@67
  int v31; // r4@68
  void *v32; // r0@68
  void *v33; // r0@69
  void *v34; // r0@70
  void **v35; // r4@71
  int v36; // r10@71
  void *v37; // r0@71
  int v38; // r5@72
  void *v39; // r0@72
  int v40; // r5@73
  void *v41; // r0@73
  int v42; // r5@74
  void *v43; // r0@74
  unsigned int *v44; // r2@78
  signed int v45; // r1@80
  int v46; // [sp+1Ch] [bp-94h]@70
  int v47; // [sp+20h] [bp-90h]@70
  int v48; // [sp+24h] [bp-8Ch]@69
  char v49; // [sp+2Ch] [bp-84h]@75
  int v50; // [sp+34h] [bp-7Ch]@75
  int v51; // [sp+38h] [bp-78h]@75
  int v52; // [sp+3Ch] [bp-74h]@75
  int v53; // [sp+44h] [bp-6Ch]@35
  int v54; // [sp+48h] [bp-68h]@75
  int v55; // [sp+50h] [bp-60h]@31
  int v56; // [sp+54h] [bp-5Ch]@74
  int v57; // [sp+5Ch] [bp-54h]@26
  int v58; // [sp+60h] [bp-50h]@73
  int v59; // [sp+68h] [bp-48h]@23
  int v60; // [sp+70h] [bp-40h]@10
  int v61; // [sp+78h] [bp-38h]@15
  int v62; // [sp+80h] [bp-30h]@10
  int v63; // [sp+88h] [bp-28h]@7

  v2 = this;
  v3 = a2;
  v4 = (void *)*((_DWORD *)this + 635);
  if ( v4 )
  {
    do
    {
      v5 = *(void **)v4;
      j_operator delete(v4);
      v4 = v5;
    }
    while ( v5 );
  }
  j___aeabi_memclr4(*((_DWORD *)v2 + 633), 4 * *((_DWORD *)v2 + 634));
  *((_DWORD *)v2 + 635) = 0;
  *((_DWORD *)v2 + 636) = 0;
  v6 = (void *)*((_DWORD *)v2 + 642);
  if ( v6 )
      v7 = *(void **)v6;
      j_operator delete(v6);
      v6 = v7;
    while ( v7 );
  j___aeabi_memclr4(*((_DWORD *)v2 + 640), 4 * *((_DWORD *)v2 + 641));
  *((_DWORD *)v2 + 642) = 0;
  *((_DWORD *)v2 + 643) = 0;
  v8 = (void *)*((_DWORD *)v2 + 649);
  if ( v8 )
      v9 = *(void **)v8;
      j_operator delete(v8);
      v8 = v9;
    while ( v9 );
  j___aeabi_memclr4(*((_DWORD *)v2 + 647), 4 * *((_DWORD *)v2 + 648));
  *((_DWORD *)v2 + 649) = 0;
  *((_DWORD *)v2 + 650) = 0;
  sub_21E94B4((void **)&v63, "PortalRecords");
  v10 = (ListTag *)j_CompoundTag::getList((int)v3, (const void **)&v63);
  v11 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v63 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
    else
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  if ( v10 && j_ListTag::size(v10) >= 1 )
    v12 = (void **)&v62;
    v13 = (void **)&v60;
    v14 = 0;
      v30 = j_ListTag::get(v10, v14);
      if ( (*(int (**)(void))(*(_DWORD *)v30 + 24))() == 10 )
      {
        sub_21E94B4(v12, "DimId");
        v31 = j_CompoundTag::getInt(v30, (const void **)v12);
        v32 = (void *)(v62 - 12);
        if ( (int *)(v62 - 12) != &dword_28898C0 )
        {
          v15 = (unsigned int *)(v62 - 4);
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
            j_j_j_j__ZdlPv_9(v32);
        }
        sub_21E94B4((void **)&v61, "TpX");
        v48 = j_CompoundTag::getInt(v30, (const void **)&v61);
        v33 = (void *)(v61 - 12);
        if ( (int *)(v61 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v61 - 4);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v33);
        sub_21E94B4(v13, "TpY");
        v46 = j_CompoundTag::getInt(v30, (const void **)v13);
        v47 = v31;
        v34 = (void *)(v60 - 12);
        if ( (int *)(v60 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v60 - 4);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v34);
        v35 = v12;
        sub_21E94B4((void **)&v59, "TpZ");
        v36 = j_CompoundTag::getInt(v30, (const void **)&v59);
        v23 = (void **)&v57;
        v37 = (void *)(v59 - 12);
        if ( (int *)(v59 - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(v59 - 4);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v23 = (void **)&v57;
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v37);
        sub_21E94B4(v23, "Span");
        v38 = j_CompoundTag::getByte(v30, (const void **)v23);
        v39 = (void *)(v57 - 12);
        if ( (int *)(v57 - 12) != &dword_28898C0 )
          v24 = (unsigned int *)(v57 - 4);
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
            v25 = (*v24)--;
          if ( v25 <= 0 )
            j_j_j_j__ZdlPv_9(v39);
        v58 = v38;
        sub_21E94B4((void **)&v55, "Xa");
        v40 = j_CompoundTag::getByte(v30, (const void **)&v55);
        v41 = (void *)(v55 - 12);
        if ( (int *)(v55 - 12) != &dword_28898C0 )
          v26 = (unsigned int *)(v55 - 4);
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
            v27 = (*v26)--;
          if ( v27 <= 0 )
            j_j_j_j__ZdlPv_9(v41);
        v56 = v40;
        sub_21E94B4((void **)&v53, "Za");
        v42 = j_CompoundTag::getByte(v30, (const void **)&v53);
        v43 = (void *)(v53 - 12);
        if ( (int *)(v53 - 12) != &dword_28898C0 )
          v28 = (unsigned int *)(v53 - 4);
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
            v29 = (*v28)--;
          if ( v29 <= 0 )
            j_j_j_j__ZdlPv_9(v43);
        v50 = v48;
        v54 = v42;
        v51 = v46;
        v52 = v36;
        std::_Hashtable<PortalRecord,PortalRecord,std::allocator<PortalRecord>,std::__detail::_Identity,std::equal_to<PortalRecord>,std::hash<PortalRecord>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_emplace<BlockPos,int &,int &,int &>(
          &v49,
          (unsigned __int64 *)((char *)v2 + 28 * v47 + 2532),
          (int)&v50,
          &v58,
          &v56,
          &v54);
        v13 = (void **)&v60;
        v12 = v35;
      }
      ++v14;
    while ( v14 < j_ListTag::size(v10) );
}


void __fastcall PortalForcer::serialize(PortalForcer *this, CompoundTag *a2)
{
  PortalForcer *v2; // r5@1
  CompoundTag *v3; // r4@1
  int v4; // r4@2
  int i; // r9@3
  void *v6; // r5@8
  void *v7; // r0@8
  void *v8; // r0@9
  void *v9; // r0@10
  void *v10; // r0@11
  void *v11; // r0@12
  void *v12; // r0@13
  void *v13; // r0@14
  unsigned int *v14; // r2@16
  signed int v15; // r1@18
  unsigned int *v16; // r2@20
  signed int v17; // r1@22
  unsigned int *v18; // r2@24
  signed int v19; // r1@26
  unsigned int *v20; // r2@28
  signed int v21; // r1@30
  unsigned int *v22; // r2@32
  signed int v23; // r1@34
  unsigned int *v24; // r2@36
  signed int v25; // r1@38
  unsigned int *v26; // r2@40
  signed int v27; // r1@42
  void *v28; // r0@75
  unsigned int *v29; // r2@77
  signed int v30; // r1@79
  int v31; // [sp+14h] [bp-84h]@2
  PortalForcer *v32; // [sp+1Ch] [bp-7Ch]@1
  void *v33; // [sp+20h] [bp-78h]@2
  int v34; // [sp+24h] [bp-74h]@3
  void *v35; // [sp+28h] [bp-70h]@73
  int v36; // [sp+30h] [bp-68h]@73
  void *v37; // [sp+34h] [bp-64h]@4
  int v38; // [sp+3Ch] [bp-5Ch]@14
  int v39; // [sp+44h] [bp-54h]@13
  int v40; // [sp+4Ch] [bp-4Ch]@12
  int v41; // [sp+54h] [bp-44h]@11
  int v42; // [sp+5Ch] [bp-3Ch]@10
  int v43; // [sp+64h] [bp-34h]@9
  int v44; // [sp+6Ch] [bp-2Ch]@8

  v2 = this;
  v3 = a2;
  v32 = this;
  if ( !j_Level::isClientSide(*((Level **)this + 3)) )
  {
    v31 = (int)v3;
    v33 = j_operator new(0x14u);
    ListTag::ListTag((int)v33);
    v4 = 0;
    do
    {
      v34 = v4;
      for ( i = *((_DWORD *)v2 + 7 * v4 + 635); i; i = *(_DWORD *)i )
      {
        v6 = j_operator new(0x1Cu);
        j_CompoundTag::CompoundTag((int)v6);
        sub_21E94B4((void **)&v44, "DimId");
        j_CompoundTag::putInt((int)v6, (const void **)&v44, v4);
        v7 = (void *)(v44 - 12);
        if ( (int *)(v44 - 12) != &dword_28898C0 )
        {
          v14 = (unsigned int *)(v44 - 4);
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
            j_j_j_j__ZdlPv_9(v7);
        }
        sub_21E94B4((void **)&v43, "TpX");
        j_CompoundTag::putInt((int)v6, (const void **)&v43, *(_DWORD *)(i + 4));
        v8 = (void *)(v43 - 12);
        if ( (int *)(v43 - 12) != &dword_28898C0 )
          v16 = (unsigned int *)(v43 - 4);
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
            v17 = (*v16)--;
          if ( v17 <= 0 )
            j_j_j_j__ZdlPv_9(v8);
        sub_21E94B4((void **)&v42, "TpY");
        j_CompoundTag::putInt((int)v6, (const void **)&v42, *(_DWORD *)(i + 8));
        v9 = (void *)(v42 - 12);
        if ( (int *)(v42 - 12) != &dword_28898C0 )
          v18 = (unsigned int *)(v42 - 4);
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
            v19 = (*v18)--;
          if ( v19 <= 0 )
            j_j_j_j__ZdlPv_9(v9);
        sub_21E94B4((void **)&v41, "TpZ");
        j_CompoundTag::putInt((int)v6, (const void **)&v41, *(_DWORD *)(i + 12));
        v10 = (void *)(v41 - 12);
        if ( (int *)(v41 - 12) != &dword_28898C0 )
          v20 = (unsigned int *)(v41 - 4);
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        sub_21E94B4((void **)&v40, "Span");
        j_CompoundTag::putByte((int)v6, (const void **)&v40, *(_BYTE *)(i + 16));
        v11 = (void *)(v40 - 12);
        if ( (int *)(v40 - 12) != &dword_28898C0 )
          v22 = (unsigned int *)(v40 - 4);
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
            v23 = (*v22)--;
          if ( v23 <= 0 )
            j_j_j_j__ZdlPv_9(v11);
        sub_21E94B4((void **)&v39, "Xa");
        v4 = v34;
        j_CompoundTag::putByte((int)v6, (const void **)&v39, *(_BYTE *)(i + 17));
        v12 = (void *)(v39 - 12);
        if ( (int *)(v39 - 12) != &dword_28898C0 )
          v24 = (unsigned int *)(v39 - 4);
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
            v25 = (*v24)--;
          if ( v25 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        sub_21E94B4((void **)&v38, "Za");
        j_CompoundTag::putByte((int)v6, (const void **)&v38, *(_BYTE *)(i + 18));
        v13 = (void *)(v38 - 12);
        if ( (int *)(v38 - 12) != &dword_28898C0 )
          v26 = (unsigned int *)(v38 - 4);
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
            v27 = (*v26)--;
          if ( v27 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        v37 = v6;
        j_ListTag::add((int)v33, (int *)&v37);
        if ( v37 )
          (*(void (**)(void))(*(_DWORD *)v37 + 4))();
        v37 = 0;
      }
      v2 = v32;
      ++v4;
    }
    while ( v4 < 3 );
    sub_21E94B4((void **)&v36, "PortalRecords");
    v35 = v33;
    j_CompoundTag::put(v31, (const void **)&v36, (int *)&v35);
    if ( v35 )
      (*(void (**)(void))(*(_DWORD *)v35 + 4))();
    v35 = 0;
    v28 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v36 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
      else
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v28);
  }
}


int __fastcall PortalForcer::PortalForcer(int a1, Level *a2)
{
  int v2; // r4@1
  Level *v3; // r5@1
  double v4; // r0@1
  signed int v5; // r2@1
  int v6; // r5@2
  int v7; // r6@2
  double v8; // r0@3
  int v9; // r6@5
  void *v10; // r5@5
  double v11; // r0@6
  int v12; // r6@8
  void *v13; // r5@8
  unsigned int v14; // r0@9
  int v15; // r6@11
  void *v16; // r5@11

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_271859C;
  sub_21E8AF4((int *)(a1 + 8), (int *)&PortalForcer::PORTAL_FILE_ID);
  *(_DWORD *)v2 = &off_27196D4;
  *(_DWORD *)(v2 + 12) = v3;
  *(_QWORD *)&v4 = (unsigned int)j_Level::getSeed(v3);
  *(_DWORD *)(v2 + 16) = LODWORD(v4);
  v5 = 1;
  *(_DWORD *)(v2 + 2516) = 625;
  *(_BYTE *)(v2 + 2520) = 0;
  *(_DWORD *)(v2 + 2524) = 0;
  *(_DWORD *)(v2 + 20) = LODWORD(v4);
  do
  {
    LODWORD(v4) ^= LODWORD(v4) >> 30;
    v6 = v2 + 4 * HIDWORD(v4);
    v7 = HIDWORD(v4)++ + 1812433253 * LODWORD(v4);
    LODWORD(v4) = v5++ + 1812433253 * LODWORD(v4);
    *(_DWORD *)(v6 + 24) = v7 + 1;
  }
  while ( HIDWORD(v4) != 397 );
  *(_DWORD *)(v2 + 2516) = 624;
  *(_DWORD *)(v2 + 2528) = 398;
  *(_DWORD *)(v2 + 2540) = 0;
  *(_DWORD *)(v2 + 2544) = 0;
  *(_DWORD *)(v2 + 2548) = 1065353216;
  *(_DWORD *)(v2 + 2552) = 0;
  LODWORD(v4) = v2 + 2548;
  v8 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v4)));
  *(_DWORD *)(v2 + 2536) = LODWORD(v8);
  if ( LODWORD(v8) == 1 )
    v10 = (void *)(v2 + 2556);
    *(_DWORD *)(v2 + 2556) = 0;
  else
    if ( LODWORD(v8) >= 0x40000000 )
      goto LABEL_16;
    v9 = 4 * LODWORD(v8);
    v10 = j_operator new(4 * LODWORD(v8));
    j___aeabi_memclr4((int)v10, v9);
  *(_DWORD *)(v2 + 2532) = v10;
  *(_DWORD *)(v2 + 2568) = 0;
  *(_DWORD *)(v2 + 2572) = 0;
  *(_DWORD *)(v2 + 2576) = 1065353216;
  *(_DWORD *)(v2 + 2580) = 0;
  LODWORD(v8) = v2 + 2576;
  v11 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v8)));
  *(_DWORD *)(v2 + 2564) = LODWORD(v11);
  if ( LODWORD(v11) == 1 )
    v13 = (void *)(v2 + 2584);
    *(_DWORD *)(v2 + 2584) = 0;
    if ( LODWORD(v11) >> 30 )
    v12 = 4 * LODWORD(v11);
    v13 = j_operator new(4 * LODWORD(v11));
    j___aeabi_memclr4((int)v13, v12);
  *(_DWORD *)(v2 + 2560) = v13;
  *(_DWORD *)(v2 + 2596) = 0;
  *(_DWORD *)(v2 + 2600) = 0;
  *(_DWORD *)(v2 + 2604) = 1065353216;
  *(_DWORD *)(v2 + 2608) = 0;
  LODWORD(v11) = v2 + 2604;
  v14 = sub_21E6254(v11);
  *(_DWORD *)(v2 + 2592) = v14;
  if ( v14 == 1 )
    v16 = (void *)(v2 + 2612);
    *(_DWORD *)(v2 + 2612) = 0;
    goto LABEL_12;
  if ( v14 >> 30 )
LABEL_16:
    sub_21E57F4();
  v15 = 4 * v14;
  v16 = j_operator new(4 * v14);
  j___aeabi_memclr4((int)v16, v15);
LABEL_12:
  *(_DWORD *)(v2 + 2588) = v16;
  return v2;
}


int __fastcall PortalForcer::addPortalRecord(PortalForcer *this, BlockSource *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r7@1
  int v8; // r6@1
  int v9; // r5@1
  BlockSource *v10; // r10@1
  signed int v11; // r8@6
  int v12; // r4@6
  int v13; // r11@6
  int v14; // r0@8
  PortalForcer *v16; // [sp+14h] [bp-54h]@1
  int v17; // [sp+18h] [bp-50h]@8
  int v18; // [sp+1Ch] [bp-4Ch]@8
  int v19; // [sp+20h] [bp-48h]@8
  int v20; // [sp+24h] [bp-44h]@8
  unsigned __int8 v21; // [sp+2Ch] [bp-3Ch]@5
  int v22; // [sp+30h] [bp-38h]@5
  unsigned __int8 v23; // [sp+34h] [bp-34h]@3
  unsigned __int8 v24; // [sp+38h] [bp-30h]@2
  int v25; // [sp+3Ch] [bp-2Ch]@1
  int v26; // [sp+40h] [bp-28h]@1

  v16 = this;
  v7 = a4 + 1;
  v8 = a5;
  v9 = a3;
  v10 = a2;
  v25 = a7;
  v26 = a6;
  do
    j_BlockSource::getBlockID((BlockSource *)&v24, (int)v10, v9, v7-- - 2, a5);
  while ( v24 == *(_BYTE *)(Block::mPortal + 4) );
  j_BlockSource::getBlockID((BlockSource *)&v23, (int)v10, v9 - a6, v7, a5 - a7);
  for ( ; v23 == *(_BYTE *)(Block::mPortal + 4); v9 -= a6 )
  {
    j_BlockSource::getBlockID((BlockSource *)&v23, (int)v10, -2 * a6 + v9, v7, -2 * a7 + v8);
    v8 -= a7;
  }
  v22 = 1;
  j_BlockSource::getBlockID((BlockSource *)&v21, (int)v10, v9 + a6, v7, a7 + v8);
  if ( v21 == *(_BYTE *)(Block::mPortal + 4) )
    v11 = 2;
    v12 = v9 + 2 * a6;
    v13 = v8 + 2 * a7;
    do
    {
      v22 = v11;
      j_BlockSource::getBlockID((BlockSource *)&v21, (int)v10, v12, v7, v13);
      ++v11;
      v12 += a6;
      v13 += a7;
    }
    while ( v21 == *(_BYTE *)(Block::mPortal + 4) );
  *((_BYTE *)v16 + 4) = 1;
  v14 = j_BlockSource::getDimensionId(v10);
  v17 = v9;
  v18 = v7;
  v19 = v8;
  std::_Hashtable<PortalRecord,PortalRecord,std::allocator<PortalRecord>,std::__detail::_Identity,std::equal_to<PortalRecord>,std::hash<PortalRecord>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_emplace<BlockPos,int &,int &,int &>(
    &v20,
    (unsigned __int64 *)((char *)v16 + 28 * v14 + 2532),
    (int)&v17,
    &v22,
    &v26,
    &v25);
  return v20 + 4;
}


int __fastcall PortalForcer::travelPortal(int a1, int a2, int a3)
{
  int v3; // r7@1
  const BlockPos *v8; // r5@1
  int v9; // r6@1
  int v10; // r1@1
  unsigned int v11; // r0@1
  int v15; // [sp+4h] [bp-3Ch]@7
  char v16; // [sp+Ch] [bp-34h]@1
  PortalBlock *v17; // [sp+Dh] [bp-33h]@1
  float v20; // [sp+1Ch] [bp-24h]@8

  v3 = a3;
  _R4 = a2;
  j_Vec3::Vec3((int)&v17 + 3, a3);
  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S2, [SP,#0x40+var_33+3]
    VLDR            S4, [SP,#0x40+var_2C]
    VLDR            S6, [SP,#0x40+var_28]
    VADD.F32        S2, S2, S0
    VADD.F32        S4, S4, S0
    VADD.F32        S0, S6, S0
    VSTR            S2, [SP,#0x40+var_24]
    VSTR            S4, [SP,#0x40+var_20]
    VSTR            S0, [SP,#0x40+var_1C]
  }
  v8 = (const BlockPos *)j_Entity::getRegion((Entity *)_R4);
  v9 = Entity::getPortalEntranceAxis((Entity *)_R4);
  j_BlockSource::getBlockAndData((BlockSource *)&v16, v8, v3);
  v11 = j_PortalBlock::getAxis((PortalBlock *)(unsigned __int8)v17, v10);
  if ( v11 != v9 )
    _ZF = v9 == 0;
    if ( v9 )
      _ZF = v11 == 0;
    if ( !_ZF )
    {
      _R0 = dword_195E034;
      __asm { VLDR            S0, [R4,#0x7C] }
      if ( _ZF )
        _R0 = &dword_195E034[1];
      __asm
      {
        VLDR            S2, [R0]
        VADD.F32        S0, S2, S0
      }
      v15 = *(_DWORD *)(_R4 + 120);
      __asm { VSTR            S0, [SP,#0x40+var_38] }
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)_R4 + 72))(_R4, &v15);
    }
  *(_DWORD *)(_R4 + 224) = 0;
  return j_Entity::moveTo(_R4, (int)&v20);
}
