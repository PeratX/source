

int __fastcall LakeFeature::LakeFeature(Feature *a1, _BYTE *a2)
{
  _BYTE *v2; // r4@1
  int result; // r0@1

  v2 = a2;
  result = j_Feature::Feature(a1, 0);
  *(_DWORD *)result = &off_2723688;
  *(_BYTE *)(result + 12) = *v2;
  *(_BYTE *)(result + 13) = BlockID::AIR;
  return result;
}


int __fastcall LakeFeature::place(LakeFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r10@1
  Random *v5; // r9@1
  __int64 v8; // r0@1
  int v9; // r2@1
  char v10; // r0@5
  int v13; // r11@5
  int v14; // r8@5
  _BYTE *v22; // r1@6
  _BYTE *v24; // r3@7
  signed int v25; // r4@23
  int v26; // r5@24
  signed int v27; // r8@25
  Material *v28; // r0@27
  bool *v29; // r6@35
  int v30; // r8@35
  int v31; // r11@36
  signed int v32; // r5@37
  char *v33; // r1@39
  int v34; // r5@45
  unsigned int v35; // r11@45
  int v36; // r4@46
  signed int v37; // r8@47
  _BYTE *v38; // r7@47
  int *v39; // r0@55
  int v40; // r6@56
  int v41; // r4@57
  signed int v42; // r5@58
  Material *v43; // r0@62
  int result; // r0@29
  bool *v45; // [sp+0h] [bp-918h]@36
  unsigned int v46; // [sp+0h] [bp-918h]@46
  bool *v47; // [sp+4h] [bp-914h]@37
  Feature *v48; // [sp+8h] [bp-910h]@1
  char v49; // [sp+Ch] [bp-90Ch]@63
  char v50; // [sp+Dh] [bp-90Bh]@63
  int v51; // [sp+10h] [bp-908h]@63
  int v52; // [sp+14h] [bp-904h]@63
  int v53; // [sp+18h] [bp-900h]@63
  int v54; // [sp+1Ch] [bp-8FCh]@62
  int v55; // [sp+20h] [bp-8F8h]@62
  int v56; // [sp+24h] [bp-8F4h]@62
  int v57; // [sp+28h] [bp-8F0h]@59
  signed int v58; // [sp+2Ch] [bp-8ECh]@59
  int v59; // [sp+30h] [bp-8E8h]@59
  char v60; // [sp+34h] [bp-8E4h]@51
  char v61; // [sp+35h] [bp-8E3h]@51
  int v62; // [sp+38h] [bp-8E0h]@51
  int v63; // [sp+3Ch] [bp-8DCh]@51
  int v64; // [sp+40h] [bp-8D8h]@51
  char v65; // [sp+44h] [bp-8D4h]@50
  int v66; // [sp+48h] [bp-8D0h]@50
  int v67; // [sp+4Ch] [bp-8CCh]@50
  int v68; // [sp+50h] [bp-8C8h]@50
  unsigned __int8 v69; // [sp+54h] [bp-8C4h]@49
  int v70; // [sp+58h] [bp-8C0h]@49
  int v71; // [sp+5Ch] [bp-8BCh]@49
  int v72; // [sp+60h] [bp-8B8h]@49
  char v73; // [sp+64h] [bp-8B4h]@41
  char v74; // [sp+65h] [bp-8B3h]@41
  int v75; // [sp+68h] [bp-8B0h]@39
  int v76; // [sp+6Ch] [bp-8ACh]@39
  int v77; // [sp+70h] [bp-8A8h]@39
  unsigned __int8 v78; // [sp+74h] [bp-8A4h]@31
  int v79; // [sp+78h] [bp-8A0h]@31
  int v80; // [sp+7Ch] [bp-89Ch]@31
  int v81; // [sp+80h] [bp-898h]@31
  int v82; // [sp+84h] [bp-894h]@27
  int v83; // [sp+88h] [bp-890h]@27
  int v84; // [sp+8Ch] [bp-88Ch]@27
  int v85; // [sp+90h] [bp-888h]@26
  signed int v86; // [sp+94h] [bp-884h]@26
  int v87; // [sp+98h] [bp-880h]@26
  __int64 v88; // [sp+9Ch] [bp-87Ch]@1
  int v89; // [sp+A4h] [bp-874h]@1
  bool v90; // [sp+A8h] [bp-870h]@5
  _BYTE v91[3]; // [sp+131h] [bp-7E7h]@6
  RakNet *v92; // [sp+8ACh] [bp-6Ch]@1

  v48 = this;
  v4 = a2;
  v5 = a4;
  v92 = _stack_chk_guard;
  v8 = *(_QWORD *)a3;
  _VF = __OFSUB__(*(_QWORD *)a3 >> 32, 1);
  _NF = (signed int)((*(_QWORD *)a3 >> 32) - 1) < 0;
  LODWORD(v8) = *(_QWORD *)a3 - 8;
  v9 = *((_DWORD *)a3 + 2);
  v88 = v8;
  v89 = v9 - 8;
  if ( !(_NF ^ _VF) )
  {
    do
    {
      LODWORD(v8) = j_BlockSource::isEmptyBlock(v4, (const BlockPos *)&v88);
      HIDWORD(v8) = HIDWORD(v88);
      if ( (_DWORD)v8 != 1 )
        break;
      _VF = __OFSUB__(HIDWORD(v88), 1);
      HIDWORD(v8) = HIDWORD(v88) - 1;
      HIDWORD(v88) = HIDWORD(v8);
    }
    while ( !((unsigned __int8)((SHIDWORD(v8) < 0) ^ _VF) | (HIDWORD(v8) == 0)) );
  }
  HIDWORD(v88) = HIDWORD(v8) - 4;
  j___aeabi_memclr8_0((int)&v90, 2048);
  v10 = j_Random::_genRandInt32(v5);
  __asm
    VMOV.F32        S18, #5.0
    VMOV.F32        S22, #3.0
    VMOV.F32        S23, #6.0
  v13 = v10 & 3 | 4;
    VMOV.F32        S28, #1.0
    VLDR            D8, =2.32830644e-10
    VMOV.F32        S29, #13.5
  v14 = 0;
  __asm { VMOV.F32        S19, #1.5 }
  do
    _R6 = j_Random::_genRandInt32(v5);
    _R0 = j_Random::_genRandInt32(v5);
    __asm
      VMOV            S0, R0
      VCVT.F64.U32    D0, S0
      VMUL.F64        D10, D0, D8
    _R7 = j_Random::_genRandInt32(v5);
    _R4 = j_Random::_genRandInt32(v5);
      VCVT.F32.F64    S2, D10
      VMUL.F64        D0, D0, D8
      VADD.F32        S20, S2, S2
      VMOV            S4, R6
      VMOV            S2, R7
      VCVT.F64.U32    D2, S4
      VCVT.F64.U32    D1, S2
      VCVT.F32.F64    S0, D0
      VSUB.F32        S6, S18, S20
      VMUL.F64        D13, D1, D8
      VMOV            S2, R4
      VMUL.F64        D12, D2, D8
      VCVT.F64.U32    D15, S2
      VMUL.F32        S21, S0, S6
      VMOV.F32        S10, #4.0
      VMOV.F32        S14, #2.0
    _R0 = (LakeFeature *)1;
      VADD.F32        S4, S20, S28
      VSUB.F32        S6, S23, S21
      VSUB.F32        S8, S18, S21
      VSUB.F32        S12, S22, S21
      VSUB.F32        S10, S10, S21
      VSUB.F32        S14, S14, S21
      VSUB.F32        S5, S28, S21
      VCVT.F32.F64    S3, D13
    v22 = v91;
      VCVT.F32.F64    S2, D12
      VDIV.F32        S7, S6, S4
      VMUL.F32        S6, S3, S22
      VDIV.F32        S3, S5, S4
      VDIV.F32        S13, S12, S4
      VDIV.F32        S15, S14, S4
      VDIV.F32        S9, S8, S4
      VDIV.F32        S11, S10, S4
      VMUL.F64        D10, D15, D8
      VMUL.F32        S2, S2, S22
      VCVT.F32.F64    S10, D0
      VCVT.F32.F64    S4, D10
      VSUB.F32        S8, S29, S2
      VSUB.F32        S12, S29, S6
      VADD.F32        S0, S2, S19
      VADD.F32        S2, S6, S19
      VMUL.F32        S14, S13, S13
      VMUL.F32        S1, S15, S15
      VMUL.F32        S3, S3, S3
      VMUL.F32        S4, S4, S8
      VMUL.F32        S6, S10, S12
      VMUL.F32        S8, S7, S7
      VMUL.F32        S10, S9, S9
      VMUL.F32        S12, S11, S11
      __asm { VMOV            S5, R0 }
      _R2 = 1;
      v24 = v22;
      __asm
      {
        VCVT.F32.S32    S5, S5
        VSUB.F32        S5, S5, S4
        VDIV.F32        S5, S5, S0
        VMUL.F32        S5, S5, S5
      }
      do
        __asm { VMOV            S7, R2 }
        ++_R2;
        __asm
        {
          VCVT.F32.S32    S7, S7
          VSUB.F32        S7, S7, S6
          VDIV.F32        S7, S7, S2
          VMUL.F32        S7, S7, S7
          VADD.F32        S7, S7, S5
          VADD.F32        S9, S7, S3
          VCMPE.F32       S9, S28
          VMRS            APSR_nzcv, FPSCR
          VADD.F32        S9, S7, S1
          VADD.F32        S9, S7, S14
        }
        if ( _NF ^ _VF )
          *v24 = 1;
          VADD.F32        S9, S7, S12
          v24[1] = 1;
          VADD.F32        S9, S7, S10
          VADD.F32        S7, S7, S8
          v24[2] = 1;
          v24[3] = 1;
          VCMPE.F32       S7, S28
          v24[4] = 1;
        __asm { VMRS            APSR_nzcv, FPSCR }
          v24[5] = 1;
        v24 += 8;
      while ( _R2 != 15 );
      _R0 = (LakeFeature *)((char *)_R0 + 1);
      v22 += 128;
    while ( _R0 != (LakeFeature *)15 );
    ++v14;
  while ( v14 < v13 );
  v25 = 0;
    v26 = 0;
    while ( 2 )
      v27 = 0;
        v85 = v25;
        v86 = v27;
        v87 = v26;
        _R0 = (LakeFeature *)j_LakeFeature::_check(_R0, (const BlockPos *)&v85, &v90);
        if ( _R0 == (LakeFeature *)1 )
          v82 = v88 + v25;
          v83 = v27 + HIDWORD(v88);
          v84 = v89 + v26;
          v28 = (Material *)j_BlockSource::getMaterial(v4, (const BlockPos *)&v82);
          if ( v27 < 4 )
          {
            _R0 = (LakeFeature *)j_Material::isSolid(v28);
            if ( !_R0 )
            {
              v79 = v88 + v25;
              v80 = v27 + HIDWORD(v88);
              v81 = v89 + v26;
              j_BlockSource::getBlockID((BlockSource *)&v78, v4, (int)&v79);
              _R0 = (LakeFeature *)*((_BYTE *)v48 + 12);
              if ( (LakeFeature *)v78 != _R0 )
              {
                result = 0;
                goto LABEL_69;
              }
            }
          }
          else
            _R0 = (LakeFeature *)j_Material::isLiquid(v28);
            if ( _R0 )
              result = 0;
              goto LABEL_69;
        ++v27;
      while ( v27 < 8 );
      if ( ++v26 < 16 )
        continue;
      break;
    ++v25;
  while ( v25 < 16 );
  v29 = &v90;
  v30 = 0;
    v31 = 0;
    v45 = v29;
      v32 = 0;
      v47 = v29;
        if ( *v29 )
          v75 = v88 + v30;
          v76 = v32 + HIDWORD(v88);
          v77 = v89 + v31;
          v33 = (char *)v48 + 12;
          if ( v32 > 3 )
            v33 = (char *)v48 + 13;
          v73 = *v33;
          v74 = 0;
          j_Feature::_setBlockAndData(v48, v4, (const BlockPos *)&v75, (const FullBlock *)&v73);
        ++v32;
        ++v29;
      while ( v32 != 8 );
      ++v31;
      v29 = v47 + 8;
    while ( v31 != 16 );
    ++v30;
    v29 = v45 + 128;
  while ( v30 != 16 );
  v34 = 0;
  v35 = (unsigned int)&v90 | 4;
    v36 = 0;
    v46 = v35;
      v37 = 4;
      v38 = (_BYTE *)v35;
        if ( *v38 )
          v70 = v88 + v34;
          v71 = v37 + HIDWORD(v88) - 1;
          v72 = v89 + v36;
          j_BlockSource::getBlockID((BlockSource *)&v69, v4, (int)&v70);
          if ( v69 == *(_BYTE *)(Block::mDirt + 4) )
            v66 = v88 + v34;
            v67 = v37 + HIDWORD(v88);
            v68 = v89 + v36;
            j_BlockSource::getBrightnessPair((BlockSource *)&v65, v4, (const BlockPos *)&v66);
            if ( v65 )
              v62 = v88 + v34;
              v63 = v37 + HIDWORD(v88) - 1;
              v64 = v89 + v36;
              v60 = *(_BYTE *)(Block::mGrass + 4);
              v61 = 0;
              j_Feature::_setBlockAndData(v48, v4, (const BlockPos *)&v62, (const FullBlock *)&v60);
        ++v37;
        ++v38;
      while ( v37 != 8 );
      ++v36;
      v35 += 8;
    while ( v36 != 16 );
    ++v34;
    v35 = v46 + 128;
  while ( v34 != 16 );
  v39 = (int *)j_Block::getMaterial((Block *)Block::mBlocks[*((_BYTE *)v48 + 12)]);
  if ( j_Material::isType(v39, 6) == 1 )
    v40 = 0;
    result = (int)&Block::mStone;
      v41 = 0;
        v42 = 0;
        do
          v57 = v40;
          v58 = v42;
          v59 = v41;
          result = j_LakeFeature::_check((LakeFeature *)result, (const BlockPos *)&v57, &v90);
          if ( result == 1 )
            if ( v42 < 4 || (result = j_Random::_genRandInt32(v5), result & 1) )
              v54 = v88 + v40;
              v55 = v42 + HIDWORD(v88);
              v56 = v89 + v41;
              v43 = (Material *)j_BlockSource::getMaterial(v4, (const BlockPos *)&v54);
              result = j_Material::isSolid(v43);
              if ( result == 1 )
                v51 = v88 + v40;
                v52 = v42 + HIDWORD(v88);
                v53 = v89 + v41;
                v49 = *(_BYTE *)(Block::mStone + 4);
                v50 = 0;
                result = j_Feature::_setBlockAndData(v48, v4, (const BlockPos *)&v51, (const FullBlock *)&v49);
          ++v42;
        while ( v42 != 8 );
        ++v41;
      while ( v41 != 16 );
      ++v40;
      result = 1;
    while ( v40 != 16 );
  else
    result = 1;
LABEL_69:
  if ( _stack_chk_guard != v92 )
    j___stack_chk_fail_0(result);
  return result;
}


int __fastcall LakeFeature::LakeFeature(Feature *a1, _BYTE *a2, _BYTE *a3)
{
  _BYTE *v3; // r5@1
  _BYTE *v4; // r4@1
  int result; // r0@1

  v3 = a2;
  v4 = a3;
  result = j_Feature::Feature(a1, 0);
  *(_DWORD *)result = &off_2723688;
  *(_BYTE *)(result + 12) = *v3;
  *(_BYTE *)(result + 13) = *v4;
  return result;
}


void __fastcall LakeFeature::~LakeFeature(LakeFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Feature::~Feature(this);
  j_j_j__ZdlPv_7(v1);
}


signed int __fastcall LakeFeature::_check(LakeFeature *this, const BlockPos *a2, bool *a3)
{
  __int64 v3; // kr00_8@1
  signed int v4; // r3@1
  int v5; // r4@1
  signed int result; // r0@2
  int v7; // r12@3

  v3 = *(_QWORD *)a2;
  v4 = *((_DWORD *)a2 + 2);
  v5 = v4 + 16 * *(_QWORD *)a2;
  if ( *(&a3[8 * v5] + (*(_QWORD *)a2 >> 32)) )
    return 0;
  v7 = 16 * v3;
  if ( (signed int)v3 > 14 )
    goto LABEL_19;
  if ( *(&a3[8 * (v7 + v4) + 128] + HIDWORD(v3)) )
    return 1;
  if ( (signed int)v3 >= 1 )
  {
LABEL_19:
    if ( *(&a3[8 * (v7 + v4) - 128] + HIDWORD(v3)) )
      return 1;
  }
  if ( v4 > 14 )
    goto LABEL_20;
  if ( *(&a3[8 * (v4 + v7) + 8] + HIDWORD(v3)) )
  if ( v4 >= 1 )
LABEL_20:
    if ( !*(&a3[8 * (v4 + v7) - 8] + HIDWORD(v3)) )
      goto LABEL_11;
LABEL_11:
  if ( SHIDWORD(v3) > 6 )
    goto LABEL_21;
  if ( *(&a3[(_DWORD)v3 + 1] + HIDWORD(v3)) )
  if ( SHIDWORD(v3) >= 1 )
LABEL_21:
    result = *(&a3[HIDWORD(v3) - 1] + v3) != 0;
  else
    result = 0;
  return result;
}


void __fastcall LakeFeature::~LakeFeature(LakeFeature *this)
{
  LakeFeature::~LakeFeature(this);
}
