

int __fastcall FancyTreeFeature::_limb(Feature *a1, BlockSource *a2, unsigned __int64 *a3, int a4, char *a5)
{
  unsigned __int64 *v5; // r4@1
  Feature *v6; // r6@1
  int v7; // r1@1
  int v8; // r2@1
  int result; // r0@1
  int v10; // r7@1
  int v12; // r3@1
  int v14; // r7@1
  int v15; // r9@3
  int v21; // r3@5
  int v22; // r5@7
  int v24; // r7@14
  signed int v29; // r0@20
  signed int v30; // r8@24
  BlockState *v31; // r0@28
  __int64 v32; // r10@28
  BlockSource *v33; // [sp+4h] [bp-5Ch]@1
  char v34; // [sp+8h] [bp-58h]@28
  char v35; // [sp+9h] [bp-57h]@28
  int v36; // [sp+Ch] [bp-54h]@16
  int v37; // [sp+10h] [bp-50h]@16
  int v38; // [sp+14h] [bp-4Ch]@16

  v5 = a3;
  v33 = a2;
  v6 = a1;
  v7 = *a3 >> 32;
  v8 = *a3;
  result = *((_DWORD *)v5 + 2);
  v10 = *(_QWORD *)a4;
  _R12 = (*(_QWORD *)a4 >> 32) - v7;
  v12 = *(_DWORD *)(a4 + 8);
  _LR = v10 - v8;
  v14 = _R12;
  if ( _R12 < 0 )
    v14 = -_R12;
  v15 = _LR;
  _R8 = v12 - result;
  if ( _LR < 0 )
    v15 = -_LR;
  __asm { VMOV            S4, R12 }
  v21 = v15;
  if ( v14 > v15 )
    v21 = v14;
  v22 = _R8;
  __asm { VMOV            S0, R8 }
  if ( _NF )
    v22 = -_R8;
  __asm { VMOV            S6, LR }
  _VF = __OFSUB__(v22, v14);
  _ZF = v22 == v14;
  _NF = v22 - v14 < 0;
  _R7 = v21;
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    _R7 = v22;
  __asm { VCVT.F32.S32    S0, S0 }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    _R7 = v21;
  __asm
  {
    VMOV            S2, R7
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S6, S6
  }
  if ( !_ZF )
    __asm { VDIV.F32        S16, S0, S2 }
    v24 = _R7 + 1;
    _R5 = 0;
    __asm
    {
      VDIV.F32        S18, S4, S2
      VDIV.F32        S20, S6, S2
      VMOV.F32        S22, #0.5
    }
    while ( 1 )
      __asm
      {
        VMOV            S0, R5
        VCVT.F32.S32    S0, S0
        VMUL.F32        S2, S0, S16
        VMUL.F32        S4, S0, S20
        VMUL.F32        S0, S0, S18
        VADD.F32        S2, S2, S22
        VADD.F32        S4, S4, S22
        VADD.F32        S0, S0, S22
        VCVTR.S32.F32   S2, S2
        VCVTR.S32.F32   S4, S4
        VCVTR.S32.F32   S0, S0
        VMOV            R3, S4
      }
      v36 = v8 + _R3;
      __asm { VMOV            R2, S0 }
      v37 = v7 + _R2;
      __asm { VMOV            R1, S2 }
      v38 = result + _R1;
      if ( _R1 < 0 )
        _R1 = -_R1;
      if ( _R3 < 0 )
        _R3 = -_R3;
      v29 = _R3;
      if ( _R3 < _R1 )
        v29 = _R1;
      if ( v29 < 1 )
        v30 = 0;
      else if ( _R3 == v29 )
        v30 = 1;
      else
        if ( _R1 == v29 )
          v30 = 2;
      v31 = (BlockState *)Block::getBlockState(Block::mLog, 12);
      v32 = *(_QWORD *)v31;
      BlockState::getMask(v31);
      v34 = *a5;
      v35 = v30 << (v32 + 1 - BYTE4(v32));
      result = Feature::_setBlockAndData(v6, v33, (const BlockPos *)&v36, (const FullBlock *)&v34);
      if ( v24 == ++_R5 )
        break;
      v7 = *v5 >> 32;
      v8 = *v5;
      result = *((_DWORD *)v5 + 2);
  return result;
}


int __fastcall FancyTreeFeature::_getTreeShape(FancyTreeFeature *this, int _R1, int _R2)
{
  int result; // r0@9

  __asm
  {
    VMOV            S0, R1
    VLDR            S4, =0.3
    VMOV            S2, R2
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VMUL.F32        S4, S0, S4
    VCMPE.F32       S2, S4
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) )
    __asm
    {
      VMOV.F32        S16, #0.5
      VMUL.F32        S18, S0, S16
      VSUB.F32        S20, S18, S2
      VMUL.F32        S0, S18, S18
      VMUL.F32        S2, S20, S20
      VSUB.F32        S0, S0, S2
      VMOV            R0, S0
    }
    _R0 = mce::Math::sqrt(_R0, *(float *)&_R1);
      VCMPE.F32       S20, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( !_ZF )
      __asm
      {
        VABS.F32        S0, S20
        VCMPE.F32       S0, S18
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !(_NF ^ _VF) )
        __asm { VLDR            S0, =0.0 }
        goto LABEL_9;
      __asm { VMOV            S18, R0 }
    __asm { VMUL.F32        S0, S18, S16 }
    goto LABEL_9;
  __asm { VMOV.F32        S0, #-1.0 }
LABEL_9:
  __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall FancyTreeFeature::_makeBranches(int result, BlockSource *a2, unsigned __int64 *a3, int a4, int a5)
{
  int v5; // r5@1
  int v6; // r7@1
  int v7; // r4@1
  BlockSource *v8; // r9@1
  Feature *v9; // r10@1
  int v15; // r0@3
  int v16; // r2@3
  char v17; // [sp+8h] [bp-40h]@4
  unsigned __int64 v18; // [sp+Ch] [bp-3Ch]@3
  int v19; // [sp+10h] [bp-38h]@3
  int v20; // [sp+14h] [bp-34h]@3

  v5 = *a3 >> 32;
  v6 = *a3;
  v7 = a4;
  v8 = a2;
  v9 = (Feature *)result;
  if ( v6 != v5 )
  {
    _R0 = a5;
    __asm
    {
      VLDR            S2, =0.2
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VMUL.F32        S16, S0, S2
    }
    do
      v15 = *(_DWORD *)(v6 + 12);
      v16 = *(_DWORD *)(v7 + 8);
      LODWORD(v18) = *(_DWORD *)v7;
      v19 = v15;
      v20 = v16;
      result = v15 - *(_DWORD *)(v7 + 4);
      __asm
      {
        VMOV            S0, R0
        VCVT.F32.S32    S0, S0
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !(_NF ^ _VF) )
        v17 = *(_BYTE *)(Block::mLog + 4);
        result = FancyTreeFeature::_limb(v9, v8, &v18, v6, &v17);
      v6 += 16;
    while ( v5 != v6 );
  }
  return result;
}


signed int __fastcall FancyTreeFeature::_trimBranches(FancyTreeFeature *this, int _R1, int _R2)
{
  signed int result; // r0@1

  __asm
  {
    VMOV            S0, R1
    VLDR            S2, =0.2
    VMOV            S4, R2
  }
  result = 0;
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S4, S4
    VMUL.F32        S0, S0, S2
    VCMPE.F32       S4, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    result = 1;
  return result;
}


signed int __fastcall FancyTreeFeature::_checkLocation(FancyTreeFeature *this, BlockSource *a2, const BlockPos *a3, int *a4)
{
  const BlockPos *v4; // r6@1
  BlockSource *v5; // r7@1
  FancyTreeFeature *v6; // r5@1
  int v7; // r0@1
  int v8; // r1@1
  int v9; // r2@1
  int *v10; // r4@1
  int v11; // r1@4
  int v12; // r2@4
  int v13; // r3@4
  signed int v14; // r0@4
  int v16; // [sp+0h] [bp-30h]@4
  int v17; // [sp+4h] [bp-2Ch]@4
  int v18; // [sp+8h] [bp-28h]@4
  int v19; // [sp+Ch] [bp-24h]@1
  int v20; // [sp+10h] [bp-20h]@1
  int v21; // [sp+14h] [bp-1Ch]@1
  unsigned __int8 v22; // [sp+18h] [bp-18h]@1

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 2);
  v10 = a4;
  v19 = v7;
  v20 = v8 - 1;
  v21 = v9;
  Feature::_getBlockID((Feature *)&v22, v6, v5, (const BlockPos *)&v19);
  if ( v22 != *(_BYTE *)(Block::mDirt + 4)
    && v22 != *(_BYTE *)(Block::mGrass + 4)
    && v22 != *(_BYTE *)(Block::mFarmland + 4) )
  {
    return 0;
  }
  v11 = *((_DWORD *)v4 + 1);
  v12 = *((_DWORD *)v4 + 2);
  v13 = *v10;
  v16 = *(_DWORD *)v4;
  v17 = v13 + v11 - 1;
  v18 = v12;
  v14 = FancyTreeFeature::_checkLine(v6, v5, v4, (const BlockPos *)&v16);
  if ( v14 != -1 )
    if ( v14 < *((_DWORD *)v6 + 13) )
      return 0;
    *v10 = v14;
  return 1;
}


int __fastcall FancyTreeFeature::_getSteps(FancyTreeFeature *this, const BlockPos *a2)
{
  int v2; // r0@1
  int v3; // r2@1
  bool v4; // nf@1
  int v5; // r1@1
  int v6; // r3@5
  bool v7; // zf@9
  unsigned __int8 v8; // vf@9
  int result; // r0@9

  v2 = *(_QWORD *)a2 >> 32;
  v3 = *(_QWORD *)a2;
  v4 = v2 < 0;
  v5 = *((_DWORD *)a2 + 2);
  if ( v4 )
    v2 = -v2;
  if ( v3 < 0 )
    v3 = -v3;
  v6 = v3;
  if ( v2 > v3 )
    v6 = v2;
  if ( v5 < 0 )
    v5 = -v5;
  v8 = __OFSUB__(v5, v2);
  v7 = v5 == v2;
  v4 = v5 - v2 < 0;
  result = v6;
  if ( !((unsigned __int8)(v4 ^ v8) | v7) )
    result = v5;
  if ( v5 <= v3 )
    result = v6;
  return result;
}


int __fastcall FancyTreeFeature::_makeTrunk(FancyTreeFeature *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  FancyTreeFeature *v4; // r5@1
  const BlockPos *v5; // r6@1
  BlockSource *v6; // r9@1
  __int64 v7; // kr00_8@1
  int v8; // r7@1
  int v9; // r10@1
  char v10; // r4@1
  int result; // r0@1
  int v12; // r1@2
  int v13; // r2@2
  __int64 v14; // r0@2
  int v15; // r2@2
  int v16; // r7@2
  int v17; // r2@2
  char v18; // [sp+8h] [bp-88h]@2
  int v19; // [sp+Ch] [bp-84h]@2
  int v20; // [sp+10h] [bp-80h]@2
  int v21; // [sp+14h] [bp-7Ch]@2
  __int64 v22; // [sp+18h] [bp-78h]@2
  int v23; // [sp+20h] [bp-70h]@2
  char v24; // [sp+24h] [bp-6Ch]@2
  int v25; // [sp+28h] [bp-68h]@2
  int v26; // [sp+2Ch] [bp-64h]@2
  int v27; // [sp+30h] [bp-60h]@2
  __int64 v28; // [sp+34h] [bp-5Ch]@2
  int v29; // [sp+3Ch] [bp-54h]@2
  char v30; // [sp+40h] [bp-50h]@2
  int v31; // [sp+44h] [bp-4Ch]@2
  int v32; // [sp+48h] [bp-48h]@2
  int v33; // [sp+4Ch] [bp-44h]@2
  int v34[3]; // [sp+50h] [bp-40h]@2
  char v35; // [sp+5Ch] [bp-34h]@1
  int v36; // [sp+60h] [bp-30h]@1
  int v37; // [sp+64h] [bp-2Ch]@1
  int v38; // [sp+68h] [bp-28h]@1

  v4 = this;
  v5 = a3;
  v6 = a2;
  v7 = *(_QWORD *)a3;
  v8 = *((_DWORD *)a3 + 2);
  v9 = (*(_QWORD *)a3 >> 32) + a4;
  v36 = *(_QWORD *)a3;
  v37 = v9;
  v38 = v8;
  v10 = *(_BYTE *)(Block::mLog + 4);
  v35 = *(_BYTE *)(Block::mLog + 4);
  FancyTreeFeature::_limb(this, a2, (unsigned __int64 *)a3, (int)&v36, &v35);
  result = *((_DWORD *)v4 + 11);
  if ( result == 2 )
  {
    v12 = *((_DWORD *)v5 + 1);
    v13 = *((_DWORD *)v5 + 2);
    v34[0] = *(_DWORD *)v5 + 1;
    v34[1] = v12;
    v34[2] = v13;
    v31 = v7 + 1;
    v32 = v9;
    v33 = v8;
    v30 = v10;
    FancyTreeFeature::_limb(v4, v6, (unsigned __int64 *)v34, (int)&v31, &v30);
    HIDWORD(v14) = *((_DWORD *)v5 + 1);
    v15 = *((_DWORD *)v5 + 2);
    v16 = v8 + 1;
    LODWORD(v14) = *(_DWORD *)v5 + 1;
    v28 = v14;
    v29 = v15 + 1;
    v25 = v7 + 1;
    v26 = v9;
    v27 = v16;
    v24 = v10;
    FancyTreeFeature::_limb(v4, v6, (unsigned __int64 *)&v28, (int)&v25, &v24);
    v17 = *((_DWORD *)v5 + 2);
    v22 = *(_QWORD *)v5;
    v23 = v17 + 1;
    v19 = v7;
    v20 = v9;
    v21 = v16;
    v18 = v10;
    result = FancyTreeFeature::_limb(v4, v6, (unsigned __int64 *)&v22, (int)&v19, &v18);
  }
  return result;
}


signed int __fastcall FancyTreeFeature::place(FancyTreeFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v5; // r5@1
  unsigned int v6; // r8@1
  const BlockPos *v7; // r4@1
  BlockSource *v8; // r9@1
  unsigned int v9; // r8@2
  int v10; // r1@4
  int v11; // r2@4
  int v12; // r1@7
  int v13; // r3@7
  int v20; // r2@11
  int v21; // r1@11
  int v22; // r3@11
  int v23; // r7@11
  signed int v27; // r1@13
  signed int v28; // r7@13
  signed int v30; // r10@26
  Random *v31; // r9@27
  float v35; // r1@27
  float v37; // r1@27
  int v39; // r1@27
  int v40; // r2@27
  int v42; // r8@27
  int v45; // r4@27
  int v46; // r1@27
  FancyTreeFeature *v47; // r7@27
  float v48; // r1@28
  int v53; // r1@28
  int *v55; // r11@36
  int v56; // r5@37
  int v57; // r0@38
  int v58; // r11@39
  int v59; // r10@39
  int v60; // r2@41
  int v61; // r3@41
  int v63; // r7@49
  int v64; // r0@50
  int v65; // r2@50
  int v67; // [sp+8h] [bp-108h]@13
  signed int v68; // [sp+Ch] [bp-104h]@18
  signed int v69; // [sp+10h] [bp-100h]@15
  int v70; // [sp+14h] [bp-FCh]@19
  void *ptr; // [sp+18h] [bp-F8h]@13
  int *ptra; // [sp+18h] [bp-F8h]@36
  int v73; // [sp+1Ch] [bp-F4h]@26
  int *v74; // [sp+1Ch] [bp-F4h]@36
  BlockSource *v75; // [sp+20h] [bp-F0h]@15
  BlockPos *v76; // [sp+24h] [bp-ECh]@11
  int v77; // [sp+28h] [bp-E8h]@31
  int v78; // [sp+2Ch] [bp-E4h]@31
  int v79; // [sp+30h] [bp-E0h]@31
  void *v80; // [sp+34h] [bp-DCh]@31
  int v81; // [sp+38h] [bp-D8h]@28
  void *v82; // [sp+3Ch] [bp-D4h]@30
  int v83; // [sp+40h] [bp-D0h]@30
  int v84; // [sp+44h] [bp-CCh]@27
  int v85; // [sp+48h] [bp-C8h]@27
  int v86; // [sp+4Ch] [bp-C4h]@27
  int v87; // [sp+50h] [bp-C0h]@27
  int v88; // [sp+54h] [bp-BCh]@27
  int v89; // [sp+58h] [bp-B8h]@27
  int v90; // [sp+5Ch] [bp-B4h]@11
  int v91; // [sp+60h] [bp-B0h]@11
  int v92; // [sp+64h] [bp-ACh]@11
  int v93; // [sp+68h] [bp-A8h]@13
  int *v94; // [sp+6Ch] [bp-A4h]@7
  int v95; // [sp+70h] [bp-A0h]@7
  int v96; // [sp+74h] [bp-9Ch]@7
  int *v97; // [sp+78h] [bp-98h]@4
  int *v98; // [sp+7Ch] [bp-94h]@4
  int *v99; // [sp+80h] [bp-90h]@4
  unsigned __int8 v100; // [sp+84h] [bp-8Ch]@4
  char v101; // [sp+88h] [bp-88h]@51
  unsigned __int64 v102; // [sp+8Ch] [bp-84h]@50
  int v103; // [sp+94h] [bp-7Ch]@50
  char v104; // [sp+98h] [bp-78h]@46
  int v105; // [sp+9Ch] [bp-74h]@41
  int v106; // [sp+A0h] [bp-70h]@41
  int v107; // [sp+A4h] [bp-6Ch]@41

  _R6 = this;
  v5 = a4;
  v6 = *((_DWORD *)this + 6);
  v7 = a3;
  v8 = a2;
  if ( v6 )
    v9 = Random::_genRandInt32(a4) % v6;
  else
    v9 = 0;
  v10 = *((_DWORD *)v7 + 1);
  v11 = *((_DWORD *)v7 + 2);
  v97 = *(int **)v7;
  v98 = (int *)(v10 - 1);
  v99 = (int *)v11;
  Feature::_getBlockID((Feature *)&v100, _R6, v8, (const BlockPos *)&v97);
  if ( v100 != *(_BYTE *)(Block::mDirt + 4)
    && v100 != *(_BYTE *)(Block::mGrass + 4)
    && v100 != *(_BYTE *)(Block::mFarmland + 4) )
  {
    return 0;
  }
  v12 = *((_DWORD *)v7 + 1);
  v13 = *((_DWORD *)v7 + 2);
  v94 = *(int **)v7;
  v95 = v9 + v12 + 4;
  v96 = v13;
  _R0 = FancyTreeFeature::_checkLine(_R6, v8, v7, (const BlockPos *)&v94);
  if ( _R0 == -1 )
    _R0 = v9 + 5;
  else if ( _R0 < *((_DWORD *)_R6 + 13) )
  __asm
    VMOV            S0, R0
    VCVT.F32.S32    S16, S0
    VLDR            S2, [R6,#0x1C]
  v20 = *((_DWORD *)_R6 + 12);
    VLDR            S0, =0.076923
    VLDR            S4, [R6,#0x28]
  v76 = v7;
  v21 = *((_DWORD *)v7 + 1);
  v97 = 0;
  v98 = 0;
  __asm { VMUL.F32        S2, S2, S16 }
  v99 = 0;
  v22 = *(_DWORD *)v7;
  __asm { VMUL.F32        S0, S16, S0 }
  v23 = *((_DWORD *)v7 + 2);
  _R4 = _R0 - v20;
  v90 = v22;
  v91 = v21 + _R0 - v20;
  __asm { VCVTR.S32.F32   S2, S2 }
  v92 = v23;
    VMUL.F32        S0, S0, S4
    VLDR            S4, =1.382
    VMOV            R2, S2
    VMUL.F32        S0, S0, S0
    VADD.F32        S0, S0, S4
  if ( _R2 >= _R0 )
    _R2 = _R0 - 1;
  v67 = _R2;
  ptr = (void *)(_R2 + v21);
  __asm { VCVTR.S32.F32   S0, S0 }
  v93 = _R2 + v21;
  __asm { VMOV            R0, S0 }
  v27 = _R0;
  v28 = _R0;
  if ( _R0 < 1 )
    v27 = 1;
  v69 = v27;
  std::vector<FancyTreeFeature::FoliageCoords,std::allocator<FancyTreeFeature::FoliageCoords>>::_M_emplace_back_aux<FancyTreeFeature::FoliageCoords>(
    (unsigned __int64 *)&v97,
    (int)&v90);
  v75 = v8;
  if ( _R4 >= 0 )
    __asm { VMOV.F32        S18, #0.5 }
    HIDWORD(_R0) = ptr;
    __asm
    {
      VLDR            S0, =0.3
      VLDR            D14, =2.32830644e-10
    }
    LODWORD(_R0) = &mce::Math::PI;
      VMOV            S2, R1
      VMUL.F32        S24, S16, S0
      VLDR            S30, =0.328
      VCVT.F32.S32    S22, S2
      VLDR            S19, =0.0
      VMUL.F32        S20, S16, S18
      VLDR            S0, [R0]
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      v28 = 1;
    __asm { VADD.F32        S17, S0, S0 }
    v68 = v28;
    __asm { VMUL.F32        S25, S20, S20 }
    do
      __asm { VMOV            S0, R4 }
      v70 = _R4;
      __asm
      {
        VCVT.F32.S32    S0, S0
        VCMPE.F32       S0, S24
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !(_NF ^ _VF) )
        __asm
        {
          VSUB.F32        S26, S20, S0
          VMUL.F32        S0, S26, S26
          VSUB.F32        S0, S25, S0
          VMOV            R0, S0
        }
        LODWORD(_R0) = mce::Math::sqrt((mce::Math *)_R0, *((float *)&_R0 + 1));
          VMOV.F32        S0, S20
          VCMPE.F32       S26, #0.0
          VMRS            APSR_nzcv, FPSCR
        if ( !_ZF )
          __asm
          {
            VABS.F32        S0, S26
            VMOV.F32        S21, S19
            VCMPE.F32       S0, S20
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !(_NF ^ _VF) )
            goto LABEL_25;
          __asm { VMOV            S0, R0 }
          VMUL.F32        S21, S0, S18
          VCMPE.F32       S21, #0.0
        if ( !(_NF ^ _VF) )
LABEL_25:
          if ( v69 )
            v30 = v68;
            v73 = _R4 - 1;
            do
            {
              __asm { VLDR            S23, [R6,#0x24] }
              v31 = v5;
              _R0 = Random::_genRandInt32(v5);
              __asm
              {
                VMOV            S0, R0
                VCVT.F64.U32    D13, S0
              }
                VCVT.F64.U32    D0, S0
                VMUL.F64        D0, D0, D14
                VCVT.F32.F64    S0, D0
                VMUL.F32        S0, S0, S17
                VMOV            R11, S0
              _R8 = mce::Math::sin(_R11, v35);
              _R0 = mce::Math::cos(_R11, v37);
                VMUL.F64        D0, D13, D14
                VMUL.F32        S2, S23, S21
                VADD.F32        S0, S0, S30
                VMOV            S4, R0
              v39 = *((_DWORD *)v76 + 1);
              v40 = *((_DWORD *)v76 + 2);
                VMUL.F32        S0, S2, S0
                VMOV            S2, R8
                VMUL.F32        S2, S2, S0
                VMUL.F32        S0, S4, S0
                VADD.F32        S2, S2, S18
                VADD.F32        S0, S0, S18
                VCVTR.S32.F32   S2, S2
                VCVTR.S32.F32   S0, S0
                VMOV            R3, S2
              v42 = *(_DWORD *)v76 + _R3;
              v87 = v42;
              _R5 = v73 + v39;
              __asm { VMOV            R0, S0 }
              v88 = _R5;
              v45 = v40 + _R0;
              v89 = v40 + _R0;
              v46 = *((_DWORD *)_R6 + 12);
              v84 = v42;
              v85 = v46 + _R5;
              v86 = v40 + _R0;
              v47 = _R6;
              if ( FancyTreeFeature::_checkLine(_R6, v75, (const BlockPos *)&v87, (const BlockPos *)&v84) == -1 )
                LODWORD(v48) = *((_DWORD *)v76 + 2) - v45;
                _R0 = (*(_DWORD *)v76 - v42) * (*(_DWORD *)v76 - v42) + LODWORD(v48) * LODWORD(v48);
                __asm
                {
                  VMOV            S0, R0
                  VCVT.F32.S32    S0, S0
                  VMOV            R0, S0
                }
                _R0 = mce::Math::sqrt(_R0, v48);
                __asm { VMOV            S0, R0 }
                _R0 = _R6;
                  VLDR            S2, [R0,#0x20]
                  VMOV            S4, R5
                  VCVT.F32.S32    S4, S4
                  VMUL.F32        S0, S2, S0
                v53 = *((_DWORD *)v76 + 2);
                  VSUB.F32        S0, S4, S0
                  VCMPE.F32       S0, S22
                  VMRS            APSR_nzcv, FPSCR
                  VCVTR.S32.F32   S2, S0
                v81 = *(_DWORD *)v76;
                __asm { VMOV            R6, S2 }
                if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                  _R6 = ptr;
                v82 = _R6;
                v83 = v53;
                if ( FancyTreeFeature::_checkLine(v47, v75, (const BlockPos *)&v81, (const BlockPos *)&v87) == -1 )
                  v77 = v42;
                  v78 = _R5;
                  v79 = v45;
                  v80 = _R6;
                  _R0 = *(_QWORD *)&v98;
                  if ( v98 == v99 )
                  {
                    std::vector<FancyTreeFeature::FoliageCoords,std::allocator<FancyTreeFeature::FoliageCoords>>::_M_emplace_back_aux<FancyTreeFeature::FoliageCoords>(
                      (unsigned __int64 *)&v97,
                      (int)&v77);
                  }
                  else
                    *v98 = v42;
                    *(_DWORD *)(_R0 + 4) = _R5;
                    *(_DWORD *)(_R0 + 8) = v45;
                    *(_DWORD *)(_R0 + 12) = _R6;
                    v98 = (int *)(_R0 + 16);
              --v30;
              v5 = v31;
              _R6 = v47;
            }
            while ( v30 );
          goto LABEL_35;
LABEL_35:
      _R4 = v70 - 1;
    while ( v70 > 0 );
  v55 = v98;
  ptra = v97;
  v74 = v98;
  if ( v97 != v98 )
      VMOV.F32        S18, #-1.0
      VMOV.F32        S20, #3.0
    v56 = (int)v97;
    __asm { VMOV.F32        S22, #2.0 }
      v57 = *((_DWORD *)_R6 + 12);
      if ( v57 )
        v58 = v57 - 1;
        v59 = 0;
        while ( 1 )
          __asm { VMOV.F32        S0, S18 }
          v60 = *(_DWORD *)(v56 + 4);
          v61 = *(_DWORD *)(v56 + 8);
          v105 = *(_DWORD *)v56;
          v106 = v59 + v60;
          v107 = v61;
          if ( v57 > v59 )
            __asm { VMOV.F32        S0, S20 }
            if ( v59 == v57 - 1 )
              __asm { VMOVEQ.F32      S0, S22 }
            if ( !v59 )
          __asm { VMOV            R3, S0 }
          v104 = *(_BYTE *)(Block::mLeaves + 4);
          FancyTreeFeature::_crossection(_R6, v75, (int)&v105, _R3, (int)&v104);
          if ( v58 == v59 )
            break;
          ++v59;
          v57 = *((_DWORD *)_R6 + 12);
      v55 = v74;
      v56 += 16;
    while ( (int *)v56 != v74 );
  FancyTreeFeature::_makeTrunk(_R6, v75, v76, v67);
  if ( ptra != v55 )
      VLDR            S0, =0.2
      VMUL.F32        S16, S16, S0
    v63 = (int)ptra;
      v64 = *(_DWORD *)(v63 + 12);
      v65 = *((_DWORD *)v76 + 2);
      LODWORD(v102) = *(_DWORD *)v76;
      HIDWORD(v102) = v64;
      v103 = v65;
      _R0 = v64 - *((_DWORD *)v76 + 1);
        VMOV            S0, R0
        VCMPE.F32       S0, S16
        v101 = *(_BYTE *)(Block::mLog + 4);
        FancyTreeFeature::_limb(_R6, v75, &v102, v63, &v101);
      v63 += 16;
    while ( v55 != (int *)v63 );
  if ( ptra )
    j_operator delete(ptra);
  return 1;
}


int __fastcall FancyTreeFeature::_makeFoliage(int a1, BlockSource *a2, unsigned __int64 *a3)
{
  int v3; // r5@1
  int result; // r0@1
  int v5; // r7@1
  BlockSource *v6; // r11@1
  int v11; // r0@3
  int v12; // r4@4
  int v13; // r8@4
  int v14; // r2@6
  int v15; // r3@6
  int v17; // [sp+4h] [bp-54h]@1
  char v18; // [sp+8h] [bp-50h]@11
  int v19; // [sp+Ch] [bp-4Ch]@6
  int v20; // [sp+10h] [bp-48h]@6
  int v21; // [sp+14h] [bp-44h]@6

  v3 = a1;
  result = *a3 >> 32;
  v5 = *a3;
  v6 = a2;
  v17 = result;
  if ( v5 != result )
  {
    __asm
    {
      VMOV.F32        S16, #-1.0
      VMOV.F32        S18, #3.0
      VMOV.F32        S20, #2.0
    }
    do
      v11 = *(_DWORD *)(v3 + 48);
      if ( v11 )
      {
        v12 = v11 - 1;
        v13 = 0;
        while ( 1 )
        {
          __asm { VMOV.F32        S0, S16 }
          v14 = *(_DWORD *)(v5 + 4);
          v15 = *(_DWORD *)(v5 + 8);
          v19 = *(_DWORD *)v5;
          v20 = v13 + v14;
          v21 = v15;
          if ( v11 > v13 )
          {
            __asm { VMOV.F32        S0, S18 }
            if ( v13 == v11 - 1 )
              __asm { VMOVEQ.F32      S0, S20 }
            if ( !v13 )
          }
          __asm { VMOV            R3, S0 }
          v18 = *(_BYTE *)(Block::mLeaves + 4);
          FancyTreeFeature::_crossection((Feature *)v3, v6, (int)&v19, _R3, (int)&v18);
          if ( v12 == v13 )
            break;
          ++v13;
          v11 = *(_DWORD *)(v3 + 48);
        }
      }
      v5 += 16;
      result = v17;
    while ( v5 != v17 );
  }
  return result;
}


int __fastcall FancyTreeFeature::_foliageCluster(int result, BlockSource *a2, const FancyTreeFeature::FoliageCoords *a3)
{
  int v3; // r6@1
  const FancyTreeFeature::FoliageCoords *v4; // r4@1
  int v5; // r10@1
  BlockSource *v6; // r9@1
  int v11; // r5@2
  int v12; // r1@3
  int v13; // r2@3
  int v14; // r0@3
  char v16; // [sp+8h] [bp-50h]@8
  int v17; // [sp+Ch] [bp-4Ch]@3
  int v18; // [sp+10h] [bp-48h]@3
  int v19; // [sp+14h] [bp-44h]@3

  v3 = result;
  v4 = a3;
  v5 = *(_DWORD *)(result + 48);
  v6 = a2;
  if ( v5 )
  {
    __asm
    {
      VMOV.F32        S16, #-1.0
      VMOV.F32        S18, #3.0
      VMOV.F32        S20, #2.0
    }
    v11 = 0;
    do
      v12 = *((_DWORD *)v4 + 1);
      v13 = *((_DWORD *)v4 + 2);
      __asm { VMOV.F32        S0, S16 }
      v17 = *(_DWORD *)v4;
      v18 = v11 + v12;
      v19 = v13;
      v14 = *(_DWORD *)(v3 + 48);
      if ( v14 > v11 )
      {
        __asm { VMOV.F32        S0, S18 }
        if ( v11 == v14 - 1 )
          __asm { VMOVEQ.F32      S0, S20 }
        if ( !v11 )
      }
      __asm { VMOV            R3, S0 }
      v16 = *(_BYTE *)(Block::mLeaves + 4);
      result = FancyTreeFeature::_crossection((Feature *)v3, v6, (int)&v17, _R3, (int)&v16);
      ++v11;
    while ( v5 != v11 );
  }
  return result;
}


void __fastcall FancyTreeFeature::~FancyTreeFeature(FancyTreeFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


int __fastcall FancyTreeFeature::_crossection(Feature *this, BlockSource *a2, int a3, int _R3, int a5)
{
  Feature *v9; // r6@1
  int v10; // r4@1
  BlockSource *v11; // r5@1
  int result; // r0@1
  int v13; // r9@2
  int v15; // r10@5
  int v16; // r8@5
  int v17; // r11@5
  __int64 v19; // r0@10
  int v20; // r2@10
  const Material *v21; // r0@10
  int v22; // [sp+0h] [bp-60h]@2
  int v23; // [sp+4h] [bp-5Ch]@2
  int v24; // [sp+8h] [bp-58h]@2
  int v25; // [sp+Ch] [bp-54h]@1
  char v26; // [sp+10h] [bp-50h]@11
  char v27; // [sp+11h] [bp-4Fh]@11
  __int64 v28; // [sp+14h] [bp-4Ch]@10
  int v29; // [sp+1Ch] [bp-44h]@10

  __asm
  {
    VLDR            S2, =0.618
    VMOV            S0, R3
  }
  v9 = this;
  v10 = a3;
  __asm { VADD.F32        S2, S0, S2 }
  v11 = a2;
    VCVTR.S32.F32   S2, S2
    VMOV            R0, S2
  v25 = result + 1;
  if ( result + 1 + result )
    __asm
    {
      VMUL.F32        S0, S0, S0
      VMOV.F32        S18, #0.5
    }
    v13 = -result;
    v24 = result;
    v23 = -result;
    v22 = 2 * result | 1;
    __asm { VCVT.F64.F32    D8, S0 }
    do
      _R0 = v13;
      if ( v13 < 0 )
        _R0 = -v13;
      __asm
      {
        VMOV            S0, R0
        VCVT.F32.S32    S0, S0
      }
      v15 = v24;
      v16 = v23;
      v17 = v22;
        VADD.F32        S0, S0, S18
        VCVT.F64.F32    D0, S0
        VMUL.F64        D10, D0, D0
      do
        _R0 = v16;
        if ( v16 < 0 )
          _R0 = v15;
        __asm
        {
          VMOV            S0, R0
          VCVT.F32.S32    S0, S0
          VADD.F32        S0, S0, S18
          VCVT.F64.F32    D0, S0
          VMUL.F64        D0, D0, D0
          VADD.F64        D0, D0, D10
          VCMPE.F64       D0, D8
          VMRS            APSR_nzcv, FPSCR
        }
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          HIDWORD(v19) = *(_DWORD *)(v10 + 4);
          v20 = *(_DWORD *)(v10 + 8);
          LODWORD(v19) = *(_DWORD *)v10 + v13;
          v28 = v19;
          v29 = v16 + v20;
          v21 = (const Material *)Feature::_getMaterial(v9, v11, (const BlockPos *)&v28);
          if ( TreeFeature::_isFree(v9, v21) == 1 )
          {
            v26 = *(_BYTE *)a5;
            v27 = 0;
            Feature::_setBlockAndData(v9, v11, (const BlockPos *)&v28, (const FullBlock *)&v26);
          }
        --v17;
        --v15;
        ++v16;
      while ( v17 );
      ++v13;
      result = v25;
    while ( v13 != v25 );
  return result;
}


int __fastcall FancyTreeFeature::FancyTreeFeature(TreeFeature *a1, Entity *a2)
{
  int result; // r0@1

  result = TreeFeature::TreeFeature(a1, a2, 0, 0, 0);
  *(_DWORD *)result = &off_2718A78;
  *(_DWORD *)(result + 24) = 12;
  *(_DWORD *)(result + 28) = 1058944319;
  *(_DWORD *)(result + 32) = 1052971631;
  *(_DWORD *)(result + 36) = 1065353216;
  *(_DWORD *)(result + 40) = 1065353216;
  *(_DWORD *)(result + 44) = 1;
  *(_QWORD *)(result + 48) = 25769803780LL;
  return result;
}


int __fastcall FancyTreeFeature::FoliageCoords::FoliageCoords(int result, int a2, int a3)
{
  int v3; // r1@1

  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  v3 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(result + 8) = *(_QWORD *)(&a3 - 1);
  return result;
}


signed int __fastcall FancyTreeFeature::_getFoliageShape(FancyTreeFeature *this, int a2)
{
  signed int result; // r0@5

  _VF = 0;
  _ZF = a2 == 0;
  _NF = a2 < 0;
  if ( a2 >= 0 )
  {
    this = (FancyTreeFeature *)*((_DWORD *)this + 12);
    _VF = __OFSUB__(this, a2);
    _ZF = this == (FancyTreeFeature *)a2;
    _NF = (signed int)this - a2 < 0;
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    result = -1082130432;
  else
    __asm
    {
      VMOV.F32        S2, #2.0
      VMOV.F32        S0, #3.0
    }
    if ( (FancyTreeFeature *)((char *)this - 1) == (FancyTreeFeature *)a2 )
      __asm { VMOVEQ.F32      S0, S2 }
    if ( !a2 )
    __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall FancyTreeFeature::_getLogFacingData(FancyTreeFeature *this, const BlockPos *a2, const BlockPos *a3)
{
  int v3; // r0@1
  int v4; // r1@3
  signed int v5; // r2@5
  signed int v6; // r4@9
  BlockState *v7; // r0@13
  __int64 v8; // r5@13

  v3 = *((_DWORD *)a3 + 2) - *((_DWORD *)a2 + 2);
  if ( v3 < 0 )
    v3 = -v3;
  v4 = *(_DWORD *)a3 - *(_DWORD *)a2;
  if ( v4 < 0 )
    v4 = -v4;
  v5 = v4;
  if ( v4 < v3 )
    v5 = v3;
  if ( v5 < 1 )
  {
    v6 = 0;
  }
  else if ( v4 == v5 )
    v6 = 1;
  else
    if ( v3 == v5 )
      v6 = 2;
  v7 = (BlockState *)Block::getBlockState(Block::mLog, 12);
  v8 = *(_QWORD *)v7;
  BlockState::getMask(v7);
  return (unsigned __int8)(v6 << (v8 + 1 - BYTE4(v8)));
}


void __fastcall FancyTreeFeature::~FancyTreeFeature(FancyTreeFeature *this)
{
  FancyTreeFeature::~FancyTreeFeature(this);
}


signed int __fastcall FancyTreeFeature::_checkLine(FancyTreeFeature *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r8@1
  BlockSource *v6; // r6@1
  int v7; // r1@1
  int v8; // r2@1
  int v9; // r0@1
  int v10; // r7@1
  int v12; // r3@1
  int v14; // r5@1
  int v15; // r10@3
  int v21; // r7@5
  int v22; // r3@7
  int v29; // [sp+0h] [bp-50h]@16
  int v30; // [sp+4h] [bp-4Ch]@16
  int v31; // [sp+8h] [bp-48h]@16
  int v32; // [sp+Ch] [bp-44h]@16

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = *(_QWORD *)a3 >> 32;
  v8 = *(_QWORD *)a3;
  v9 = *((_DWORD *)v4 + 2);
  v10 = *(_QWORD *)a4;
  _R12 = (*(_QWORD *)a4 >> 32) - v7;
  v12 = *((_DWORD *)a4 + 2);
  _LR = v10 - v8;
  v14 = _R12;
  if ( _R12 < 0 )
    v14 = -_R12;
  v15 = v10 - v8;
  _R9 = v12 - v9;
  if ( _LR < 0 )
    v15 = -_LR;
  __asm { VMOV            S4, R12 }
  v21 = v15;
  if ( v14 > v15 )
    v21 = v14;
  v22 = v12 - v9;
  __asm { VMOV            S0, R9 }
  if ( _NF )
    v22 = -_R9;
  __asm { VMOV            S6, LR }
  _VF = __OFSUB__(v22, v14);
  _ZF = v22 == v14;
  _NF = v22 - v14 < 0;
  _R5 = v21;
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    _R5 = v22;
  __asm { VCVT.F32.S32    S0, S0 }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    _R5 = v21;
  __asm
  {
    VMOV            S2, R5
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S6, S6
  }
  if ( _ZF )
LABEL_18:
    _R7 = -1;
  else
    __asm { VDIV.F32        S16, S0, S2 }
    _R7 = 0;
    __asm
    {
      VDIV.F32        S18, S4, S2
      VDIV.F32        S20, S6, S2
      VMOV.F32        S22, #0.5
    }
    while ( 1 )
      __asm
      {
        VMOV            S0, R7
        VCVT.F32.S32    S0, S0
        VMUL.F32        S2, S0, S16
        VMUL.F32        S4, S0, S20
        VMUL.F32        S0, S0, S18
        VADD.F32        S2, S2, S22
        VADD.F32        S4, S4, S22
        VADD.F32        S0, S0, S22
        VCVTR.S32.F32   S2, S2
        VCVTR.S32.F32   S4, S4
        VCVTR.S32.F32   S0, S0
        VMOV            R3, S4
      }
      v30 = v8 + _R3;
      __asm { VMOV            R2, S0 }
      v31 = v7 + _R2;
      __asm { VMOV            R1, S2 }
      v32 = v9 + _R1;
      Feature::_getBlockID((Feature *)&v29, v6, v5, (const BlockPos *)&v30);
      if ( TreeFeature::_isFree((int)v6, &v29) != 1 )
        break;
      if ( _R5 == _R7 )
        goto LABEL_18;
      v7 = *(_QWORD *)v4 >> 32;
      v8 = *(_QWORD *)v4;
      ++_R7;
      v9 = *((_DWORD *)v4 + 2);
  return _R7;
}
