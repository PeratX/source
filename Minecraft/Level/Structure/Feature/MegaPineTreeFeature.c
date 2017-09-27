

void __fastcall MegaPineTreeFeature::~MegaPineTreeFeature(MegaPineTreeFeature *this)
{
  MegaPineTreeFeature::~MegaPineTreeFeature(this);
}


void __fastcall MegaPineTreeFeature::~MegaPineTreeFeature(MegaPineTreeFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


int __fastcall MegaPineTreeFeature::createCrown(MegaPineTreeFeature *this, BlockSource *a2, const BlockPos *a3, int a4, Random *a5)
{
  MegaPineTreeFeature *v5; // r11@1
  const BlockPos *v6; // r5@1
  unsigned int v7; // r6@1
  int v8; // r0@2
  int v9; // r3@4
  int result; // r0@4
  int v15; // r6@5
  int v16; // r7@5
  int v17; // r9@5
  int v18; // r0@5
  int v20; // r4@7
  int v24; // r8@7
  signed int v25; // r0@7
  int v26; // r3@11
  int v27; // [sp+0h] [bp-50h]@5
  BlockSource *v28; // [sp+4h] [bp-4Ch]@1
  int v29; // [sp+8h] [bp-48h]@1
  int v30; // [sp+Ch] [bp-44h]@7
  int v31; // [sp+10h] [bp-40h]@7
  int v32; // [sp+14h] [bp-3Ch]@7

  v5 = this;
  v29 = a4;
  v6 = a3;
  v28 = a2;
  v7 = j_Random::_genRandInt32(a5) % 5;
  if ( *((_BYTE *)v5 + 40) )
    v8 = MegaTreeFeature::_getBaseHeight(v5);
  else
    v8 = 3;
  v9 = *((_DWORD *)v6 + 1);
  result = v8 + v7;
  if ( v9 - result != v9 + 1 )
  {
    __asm { VMOV            S0, R0 }
    v15 = result - v9;
    __asm { VMOV.F32        S18, #3.5 }
    v16 = -result;
    __asm { VCVT.F32.S32    S16, S0 }
    v17 = 0;
    v18 = *((_DWORD *)v6 + 1);
    v27 = *((_DWORD *)v6 + 1);
    while ( 1 )
    {
      _R10 = v15 + v18;
      __asm
      {
        VMOV            S0, R10
        VCVT.F32.S32    S0, S0
      }
      v20 = *((_DWORD *)v6 + 2);
      v30 = *(_DWORD *)v6;
        VDIV.F32        S0, S0, S16
        VMUL.F32        S0, S0, S18
        VMOV            R0, S0
      _R0 = floorf(_R0);
        VMOV            S0, R0
        VCVTR.S32.F32   S0, S0
      v31 = v27 + v16;
      v32 = v20;
      __asm { VMOV            R0, S0 }
      v24 = _R0 + v29;
      v25 = 0;
      if ( !(_NF ^ _VF) && v24 == v17 )
        v25 = 0;
        if ( !(((_BYTE)v27 + (_BYTE)v16) & 1) )
          v25 = 1;
      v26 = v24;
      if ( v25 )
        v26 = v24 + 1;
      result = MegaTreeFeature::_placeDoubleTrunkLeaves(v5, v28, (const BlockPos *)&v30, v26);
      if ( !v16 )
        break;
      --v15;
      v18 = *((_DWORD *)v6 + 1);
      ++v16;
      v17 = v24;
    }
  }
  return result;
}


int __fastcall MegaPineTreeFeature::_placePodzolCircle(MegaPineTreeFeature *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r9@1
  MegaPineTreeFeature *v5; // r6@1
  int v6; // r7@1
  signed int v7; // r5@1
  __int64 v8; // kr00_8@2
  int v9; // r3@2
  int v10; // r0@2
  int v11; // r1@5
  int v12; // r2@5
  __int64 v13; // r0@5
  int v14; // r2@5
  int v15; // r0@5
  __int64 v16; // r0@6
  int v17; // r2@6
  int v18; // r1@6
  int v19; // r2@6
  __int64 v20; // r0@6
  int v21; // r2@6
  __int64 v22; // r0@6
  int v23; // r2@6
  int result; // r0@7
  int v25; // [sp+0h] [bp-28h]@5
  int v26; // [sp+4h] [bp-24h]@5
  int v27; // [sp+8h] [bp-20h]@5

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = 0;
  v7 = 2;
  do
  {
    v8 = *(_QWORD *)v3;
    v9 = v6 - 2;
    v10 = *((_DWORD *)v3 + 2);
    if ( v6 - 2 < 0 )
      v9 = v7;
    if ( v9 == 2 )
    {
      v25 = *(_QWORD *)v3 + v6 - 2;
      v26 = HIDWORD(v8);
      v27 = v10 - 1;
      MegaPineTreeFeature::_placePodzolAt(__PAIR__((unsigned int)v4, (unsigned int)v5), (const BlockPos *)&v25);
      v11 = *((_DWORD *)v3 + 1);
      v12 = *((_DWORD *)v3 + 2);
      v25 = *(_DWORD *)v3 + v6 - 2;
      v26 = v11;
      v27 = v12;
      HIDWORD(v13) = *((_DWORD *)v3 + 1);
      v14 = *((_DWORD *)v3 + 2);
      LODWORD(v13) = *(_DWORD *)v3 + v6 - 2;
      *(_QWORD *)&v25 = v13;
      v15 = v14 + 1;
    }
    else
      v27 = v10 - 2;
      HIDWORD(v16) = *((_DWORD *)v3 + 1);
      v17 = *((_DWORD *)v3 + 2);
      LODWORD(v16) = *(_DWORD *)v3 + v6 - 2;
      *(_QWORD *)&v25 = v16;
      v27 = v17 - 1;
      v18 = *((_DWORD *)v3 + 1);
      v19 = *((_DWORD *)v3 + 2);
      v26 = v18;
      v27 = v19;
      HIDWORD(v20) = *((_DWORD *)v3 + 1);
      v21 = *((_DWORD *)v3 + 2);
      LODWORD(v20) = *(_DWORD *)v3 + v6 - 2;
      *(_QWORD *)&v25 = v20;
      v27 = v21 + 1;
      HIDWORD(v22) = *((_DWORD *)v3 + 1);
      v23 = *((_DWORD *)v3 + 2);
      LODWORD(v22) = *(_DWORD *)v3 + v6 - 2;
      *(_QWORD *)&v25 = v22;
      v15 = v23 + 2;
    v27 = v15;
    result = MegaPineTreeFeature::_placePodzolAt(__PAIR__((unsigned int)v4, (unsigned int)v5), (const BlockPos *)&v25);
    ++v6;
    --v7;
  }
  while ( v6 != 5 );
  return result;
}


int __fastcall MegaPineTreeFeature::_placePodzolAt(__int64 this, const BlockPos *a2)
{
  const BlockPos *v2; // r6@1
  signed int v3; // r7@1
  int v4; // r1@2
  int v5; // r2@2
  Block *v6; // r5@2
  int result; // r0@5
  __int64 v8; // [sp+4h] [bp-3Ch]@1
  char v9; // [sp+Ch] [bp-34h]@9
  char v10; // [sp+Dh] [bp-33h]@9
  int v11; // [sp+10h] [bp-30h]@2
  int v12; // [sp+14h] [bp-2Ch]@2
  int v13; // [sp+18h] [bp-28h]@2

  v8 = this;
  v2 = a2;
  v3 = 6;
  while ( 1 )
  {
    v4 = *((_DWORD *)v2 + 1);
    v5 = *((_DWORD *)v2 + 2);
    v11 = *(_DWORD *)v2;
    v12 = v3 + v4 - 4;
    v13 = v5;
    v6 = (Block *)BlockSource::getBlock((BlockSource *)HIDWORD(v8), (const BlockPos *)&v11);
    if ( Block::isType(v6, (const Block *)Block::mGrass)
      || Block::isType(v6, (const Block *)Block::mDirt)
      || Block::isType(v6, (const Block *)Block::mPodzol) == 1 )
    {
      break;
    }
    result = Block::isType(v6, (const Block *)Block::mAir);
    if ( v3 - 4 > -1 || result != 1 )
      if ( --v3 )
        continue;
    return result;
  }
  v9 = *(_BYTE *)(Block::mPodzol + 4);
  v10 = 0;
  return Feature::_setBlockAndData(
           (Feature *)v8,
           (BlockSource *)HIDWORD(v8),
           (const BlockPos *)&v11,
           (const FullBlock *)&v9);
}


signed int __fastcall MegaPineTreeFeature::place(MegaPineTreeFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r8@1
  BlockSource *v5; // r5@1
  const BlockPos *v6; // r4@1
  MegaPineTreeFeature *v7; // r6@1
  int v8; // r7@1
  int v9; // r10@2 OVERLAPPED
  unsigned int v10; // r0@2
  int v11; // r9@2
  int v12; // r8@2
  unsigned int v13; // r9@2
  int v14; // r0@3
  signed int result; // r0@4
  int v17; // r11@6
  int v23; // r9@8
  signed int v26; // r0@8
  int v27; // r3@12
  int v28; // r9@16
  int v29; // r1@17
  int v30; // r2@17
  const Material *v31; // r0@17
  int v32; // r1@18
  int v33; // r2@18
  char v34; // r7@18
  char v35; // r0@18
  int v36; // r1@20
  int v37; // r2@20
  const Material *v38; // r0@20
  int v39; // r1@21
  int v40; // r2@21
  char v41; // r7@21
  char v42; // r0@21
  int v43; // r1@22
  int v44; // r2@22
  const Material *v45; // r0@22
  int v46; // r1@23
  int v47; // r2@23
  char v48; // r7@23
  char v49; // r0@23
  int v50; // r1@24
  int v51; // r2@24
  const Material *v52; // r0@24
  int v53; // r1@25
  int v54; // r2@25
  char v55; // r7@25
  char v56; // r0@25
  int v57; // [sp+4h] [bp-BCh]@3
  int v58; // [sp+8h] [bp-B8h]@2
  char v59; // [sp+Ch] [bp-B4h]@25
  char v60; // [sp+Dh] [bp-B3h]@25
  int v61; // [sp+10h] [bp-B0h]@25
  int v62; // [sp+14h] [bp-ACh]@25
  int v63; // [sp+18h] [bp-A8h]@25
  int v64; // [sp+1Ch] [bp-A4h]@24
  int v65; // [sp+20h] [bp-A0h]@24
  int v66; // [sp+24h] [bp-9Ch]@24
  char v67; // [sp+28h] [bp-98h]@23
  char v68; // [sp+29h] [bp-97h]@23
  int v69; // [sp+2Ch] [bp-94h]@23
  int v70; // [sp+30h] [bp-90h]@23
  int v71; // [sp+34h] [bp-8Ch]@23
  int v72; // [sp+38h] [bp-88h]@22
  int v73; // [sp+3Ch] [bp-84h]@22
  int v74; // [sp+40h] [bp-80h]@22
  char v75; // [sp+44h] [bp-7Ch]@21
  char v76; // [sp+45h] [bp-7Bh]@21
  int v77; // [sp+48h] [bp-78h]@21
  int v78; // [sp+4Ch] [bp-74h]@21
  int v79; // [sp+50h] [bp-70h]@21
  int v80; // [sp+54h] [bp-6Ch]@20
  int v81; // [sp+58h] [bp-68h]@20
  int v82; // [sp+5Ch] [bp-64h]@20
  char v83; // [sp+60h] [bp-60h]@18
  char v84; // [sp+61h] [bp-5Fh]@18
  int v85; // [sp+64h] [bp-5Ch]@18
  int v86; // [sp+68h] [bp-58h]@18
  int v87; // [sp+6Ch] [bp-54h]@18
  int v88; // [sp+70h] [bp-50h]@17
  int v89; // [sp+74h] [bp-4Ch]@17
  int v90; // [sp+78h] [bp-48h]@17
  int v91; // [sp+7Ch] [bp-44h]@8
  int v92; // [sp+80h] [bp-40h]@8
  int v93; // [sp+84h] [bp-3Ch]@8

  v4 = a4;
  v5 = a2;
  v6 = a3;
  v7 = this;
  v8 = MegaTreeFeature::_calcTreeHeigth(this, a4);
  if ( MegaTreeFeature::_prepareTree(v7, v5, v6, v8) == 1 )
  {
    v58 = *(_DWORD *)v6;
    *(_QWORD *)(&v9 - 1) = *(_QWORD *)((char *)v6 + 4);
    v10 = j_Random::_genRandInt32(v4);
    v12 = v11 + v8;
    v13 = v10 % 5;
    if ( *((_BYTE *)v7 + 40) )
    {
      v57 = v8;
      v14 = MegaTreeFeature::_getBaseHeight(v7);
    }
    else
      v14 = 3;
    _R7 = v14 + v13;
    v17 = v12 - (v14 + v13);
    if ( v12 - (v14 + v13) != v12 + 1 )
      __asm { VMOV            S0, R7 }
      _R8 = 0;
      __asm
      {
        VMOV.F32        S18, #3.5
        VCVT.F32.S32    S16, S0
      }
      do
        __asm { VMOV            S0, R7 }
        v23 = _R8;
        __asm
        {
          VCVT.F32.S32    S0, S0
          VDIV.F32        S0, S0, S16
          VMUL.F32        S0, S0, S18
          VMOV            R0, S0
        }
        _R0 = floorf(_R0);
        __asm { VMOV            S0, R0 }
        v91 = v58;
        v92 = v17;
        v26 = 0;
        __asm { VCVTR.S32.F32   S0, S0 }
        v93 = v9;
        __asm { VMOV            R8, S0 }
        if ( !(_NF ^ _VF) && _R8 == v23 )
          v26 = 0;
          if ( !(v17 & 1) )
            v26 = 1;
        v27 = _R8;
        if ( v26 )
          v27 = _R8 + 1;
        MegaTreeFeature::_placeDoubleTrunkLeaves(v7, v5, (const BlockPos *)&v91, v27);
        --_R7;
        ++v17;
      while ( _R7 != -1 );
    if ( v57 )
      v28 = 0;
        v29 = *((_DWORD *)v6 + 1);
        v30 = *((_DWORD *)v6 + 2);
        v88 = *(_DWORD *)v6;
        v89 = v28 + v29;
        v90 = v30;
        v31 = (const Material *)Feature::_getMaterial(v7, v5, (const BlockPos *)&v88);
        if ( TreeFeature::_isFree(v7, v31) == 1 )
          v32 = *((_DWORD *)v6 + 1);
          v33 = *((_DWORD *)v6 + 2);
          v85 = *(_DWORD *)v6;
          v86 = v28 + v32;
          v87 = v33;
          v34 = *(_BYTE *)(Block::mLog + 4);
          v35 = MegaTreeFeature::_getTrunkType(v7);
          v83 = v34;
          v84 = v35;
          Feature::_setBlockAndData(v7, v5, (const BlockPos *)&v85, (const FullBlock *)&v83);
        if ( v28 < v57 - 1 )
          v36 = *((_DWORD *)v6 + 1);
          v37 = *((_DWORD *)v6 + 2);
          v80 = *(_DWORD *)v6 + 1;
          v81 = v28 + v36;
          v82 = v37;
          v38 = (const Material *)Feature::_getMaterial(v7, v5, (const BlockPos *)&v80);
          if ( TreeFeature::_isFree(v7, v38) == 1 )
          {
            v39 = *((_DWORD *)v6 + 1);
            v40 = *((_DWORD *)v6 + 2);
            v77 = *(_DWORD *)v6 + 1;
            v78 = v28 + v39;
            v79 = v40;
            v41 = *(_BYTE *)(Block::mLog + 4);
            v42 = MegaTreeFeature::_getTrunkType(v7);
            v75 = v41;
            v76 = v42;
            Feature::_setBlockAndData(v7, v5, (const BlockPos *)&v77, (const FullBlock *)&v75);
          }
          v43 = *((_DWORD *)v6 + 1);
          v44 = *((_DWORD *)v6 + 2);
          v72 = *(_DWORD *)v6 + 1;
          v73 = v28 + v43;
          v74 = v44 + 1;
          v45 = (const Material *)Feature::_getMaterial(v7, v5, (const BlockPos *)&v72);
          if ( TreeFeature::_isFree(v7, v45) == 1 )
            v46 = *((_DWORD *)v6 + 1);
            v47 = *((_DWORD *)v6 + 2);
            v69 = *(_DWORD *)v6 + 1;
            v70 = v28 + v46;
            v71 = v47 + 1;
            v48 = *(_BYTE *)(Block::mLog + 4);
            v49 = MegaTreeFeature::_getTrunkType(v7);
            v67 = v48;
            v68 = v49;
            Feature::_setBlockAndData(v7, v5, (const BlockPos *)&v69, (const FullBlock *)&v67);
          v50 = *((_DWORD *)v6 + 1);
          v51 = *((_DWORD *)v6 + 2);
          v64 = *(_DWORD *)v6;
          v65 = v28 + v50;
          v66 = v51 + 1;
          v52 = (const Material *)Feature::_getMaterial(v7, v5, (const BlockPos *)&v64);
          if ( TreeFeature::_isFree(v7, v52) == 1 )
            v53 = *((_DWORD *)v6 + 1);
            v54 = *((_DWORD *)v6 + 2);
            v61 = *(_DWORD *)v6;
            v62 = v28 + v53;
            v63 = v54 + 1;
            v55 = *(_BYTE *)(Block::mLog + 4);
            v56 = MegaTreeFeature::_getTrunkType(v7);
            v59 = v55;
            v60 = v56;
            Feature::_setBlockAndData(v7, v5, (const BlockPos *)&v61, (const FullBlock *)&v59);
        ++v28;
      while ( v57 != v28 );
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall MegaPineTreeFeature::MegaPineTreeFeature(MegaTreeFeature *a1, Entity *a2, char a3)
{
  char v3; // r4@1
  int result; // r0@1

  v3 = a3;
  result = MegaTreeFeature::MegaTreeFeature(a1, a2, 13, 15, 4294967297LL);
  *(_DWORD *)result = &off_2718B40;
  *(_BYTE *)(result + 40) = v3;
  return result;
}


int __fastcall MegaPineTreeFeature::postPlaceTree(MegaPineTreeFeature *this, BlockSource *a2, Random *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r4@1
  Random *v5; // r5@1
  BlockSource *v6; // r9@1
  MegaPineTreeFeature *v7; // r10@1
  __int64 v8; // r0@1
  int v9; // r2@1
  __int64 v10; // r0@1
  int v11; // r2@1
  __int64 v12; // r0@1
  int v13; // r2@1
  __int64 v14; // r0@1
  int v15; // r2@1
  signed int v16; // r6@1
  char v17; // r0@2
  int v18; // r2@2
  unsigned int v19; // r1@2
  bool v20; // zf@3
  int result; // r0@6
  int v22; // r3@7
  int v23; // r7@7
  int v24; // [sp+4h] [bp-5Ch]@7
  int v25; // [sp+8h] [bp-58h]@7
  unsigned int v26; // [sp+Ch] [bp-54h]@7
  __int64 v27; // [sp+10h] [bp-50h]@1
  int v28; // [sp+18h] [bp-48h]@1
  __int64 v29; // [sp+1Ch] [bp-44h]@1
  int v30; // [sp+24h] [bp-3Ch]@1
  __int64 v31; // [sp+28h] [bp-38h]@1
  int v32; // [sp+30h] [bp-30h]@1
  __int64 v33; // [sp+34h] [bp-2Ch]@1
  int v34; // [sp+3Ch] [bp-24h]@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = this;
  HIDWORD(v8) = *((_DWORD *)a4 + 1);
  v9 = *((_DWORD *)a4 + 2);
  LODWORD(v8) = *(_DWORD *)a4 - 1;
  v33 = v8;
  v34 = v9 - 1;
  MegaPineTreeFeature::_placePodzolCircle(v7, v6, (const BlockPos *)&v33);
  HIDWORD(v10) = *((_DWORD *)v4 + 1);
  v11 = *((_DWORD *)v4 + 2);
  LODWORD(v10) = *(_DWORD *)v4 + 2;
  v31 = v10;
  v32 = v11 - 1;
  MegaPineTreeFeature::_placePodzolCircle(v7, v6, (const BlockPos *)&v31);
  HIDWORD(v12) = *((_DWORD *)v4 + 1);
  v13 = *((_DWORD *)v4 + 2);
  LODWORD(v12) = *(_DWORD *)v4 - 1;
  v29 = v12;
  v30 = v13 + 2;
  MegaPineTreeFeature::_placePodzolCircle(v7, v6, (const BlockPos *)&v29);
  HIDWORD(v14) = *((_DWORD *)v4 + 1);
  v15 = *((_DWORD *)v4 + 2);
  LODWORD(v14) = *(_DWORD *)v4 + 2;
  v27 = v14;
  v28 = v15 + 2;
  MegaPineTreeFeature::_placePodzolCircle(v7, v6, (const BlockPos *)&v27);
  v16 = 5;
  do
  {
    v17 = j_Random::_genRandInt32(v5);
    v18 = v17 & 7;
    v19 = v17 & 0x3F;
    if ( (v17 & 0x38) == 56 )
      goto LABEL_11;
    v20 = v18 == 0;
    if ( v17 & 7 )
      v20 = v18 == 7;
    if ( v20 || (result = v19 + 7, v19 + 7 <= 0xE) )
    {
LABEL_11:
      v22 = *((_DWORD *)v4 + 1);
      v23 = *((_DWORD *)v4 + 2);
      v24 = *(_DWORD *)v4 + v18 - 3;
      v25 = v22;
      v26 = v23 + (v19 >> 3) - 3;
      result = MegaPineTreeFeature::_placePodzolCircle(v7, v6, (const BlockPos *)&v24);
    }
    --v16;
  }
  while ( v16 );
  return result;
}
