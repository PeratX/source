

int __fastcall MegaJungleTreeFeature::_createCrown(MegaJungleTreeFeature *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  const BlockPos *v4; // r7@1
  BlockSource *v5; // r4@1
  MegaJungleTreeFeature *v6; // r6@1
  int v7; // r0@1
  int v8; // r1@1
  int v9; // r2@1
  int v10; // r5@1
  int v11; // r1@1
  int v12; // r2@1
  int v13; // r1@1
  int v14; // r2@1
  int v16; // [sp+4h] [bp-24h]@1
  int v17; // [sp+8h] [bp-20h]@1
  int v18; // [sp+Ch] [bp-1Ch]@1

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 2);
  v10 = a4;
  v16 = v7;
  v17 = v8 - 2;
  v18 = v9;
  MegaTreeFeature::_placeDoubleTrunkLeaves(v6, v5, (const BlockPos *)&v16, a4 + 3);
  v11 = *((_DWORD *)v4 + 1);
  v12 = *((_DWORD *)v4 + 2);
  v16 = *(_DWORD *)v4;
  v17 = v11 - 1;
  v18 = v12;
  MegaTreeFeature::_placeDoubleTrunkLeaves(v6, v5, (const BlockPos *)&v16, v10 + 2);
  v13 = *((_DWORD *)v4 + 1);
  v14 = *((_DWORD *)v4 + 2);
  v17 = v13;
  v18 = v14;
  return MegaTreeFeature::_placeDoubleTrunkLeaves(v6, v5, (const BlockPos *)&v16, v10 + 1);
}


_DWORD *__fastcall MegaJungleTreeFeature::MegaJungleTreeFeature(MegaTreeFeature *a1, Entity *a2, int a3, int a4, __int64 a5)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)MegaTreeFeature::MegaTreeFeature(a1, a2, a3, a4, a5);
  *result = &off_2718B2C;
  return result;
}


unsigned int __fastcall MegaJungleTreeFeature::_placeVines(MegaJungleTreeFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4, int a5, int a6, int a7)
{
  Random *v7; // r10@1
  const BlockPos *v8; // r7@1
  BlockSource *v9; // r4@1
  TreeFeature *v10; // r5@1
  const Material *v11; // r0@1
  unsigned int result; // r0@1
  signed int v13; // r2@3
  int v14; // r3@3
  int v15; // r6@3
  int v16; // r7@3
  signed int v17; // r0@5
  int v18; // [sp+0h] [bp-40h]@5
  int v19; // [sp+4h] [bp-3Ch]@5
  int v20; // [sp+8h] [bp-38h]@7
  int v21; // [sp+Ch] [bp-34h]@5
  int v22; // [sp+10h] [bp-30h]@5
  int v23; // [sp+14h] [bp-2Ch]@5
  char v24; // [sp+18h] [bp-28h]@2
  char v25; // [sp+19h] [bp-27h]@2
  char v26; // [sp+1Ch] [bp-24h]@9
  char v27; // [sp+1Dh] [bp-23h]@9

  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = this;
  v11 = (const Material *)Feature::_getMaterial(this, a2, a3);
  result = TreeFeature::_isFree(v10, v11);
  if ( result == 1 )
  {
    v24 = *(_BYTE *)(Block::mLog + 4);
    v25 = MegaTreeFeature::_getTrunkType(v10);
    result = Feature::_setBlockAndData(v10, v9, v8, (const FullBlock *)&v24);
    if ( a5 >= 1 )
    {
      v13 = 1;
      v14 = *(_DWORD *)v8;
      v15 = *((_DWORD *)v8 + 1);
      v16 = *((_DWORD *)v8 + 2);
      if ( VineBlock::VINE_EAST == a6 )
        v13 = -1;
      v21 = v14 + v13;
      v22 = v15;
      v23 = v16;
      v17 = -1;
      v18 = v14;
      v19 = v15;
      if ( VineBlock::VINE_NORTH == a7 )
        v17 = 1;
      v20 = v17 + v16;
      if ( j_Random::_genRandInt32(v7) % 3 && Feature::_isEmptyBlock(v10, v9, (const BlockPos *)&v21) == 1 )
      {
        v26 = *(_BYTE *)(Block::mVine + 4);
        v27 = a6;
        Feature::_setBlockAndData(v10, v9, (const BlockPos *)&v21, (const FullBlock *)&v26);
      }
      result = j_Random::_genRandInt32(v7) % 3;
      if ( result )
        result = Feature::_isEmptyBlock(v10, v9, (const BlockPos *)&v18);
        if ( result == 1 )
        {
          v26 = *(_BYTE *)(Block::mVine + 4);
          v27 = a7;
          result = Feature::_setBlockAndData(v10, v9, (const BlockPos *)&v18, (const FullBlock *)&v26);
        }
    }
  }
  return result;
}


void __fastcall MegaJungleTreeFeature::~MegaJungleTreeFeature(MegaJungleTreeFeature *this)
{
  MegaJungleTreeFeature::~MegaJungleTreeFeature(this);
}


void __fastcall MegaJungleTreeFeature::~MegaJungleTreeFeature(MegaJungleTreeFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


signed int __fastcall MegaJungleTreeFeature::place(MegaJungleTreeFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r11@1
  BlockSource *v5; // r8@1
  const BlockPos *v6; // r4@1
  MegaJungleTreeFeature *v7; // r7@1
  signed int v8; // r6@1
  const BlockPos *v9; // r5@2
  unsigned int v10; // r10@2
  unsigned int v11; // r4@2
  int v12; // r9@2
  MegaJungleTreeFeature *v13; // r10@2
  BlockSource *v14; // r9@2
  int v15; // r4@2
  char v16; // r0@2
  int v17; // r1@2
  int v18; // r4@2
  float v26; // r1@4
  float v27; // r1@4
  float v28; // r1@4
  int v29; // r0@4
  const BlockPos *v30; // r11@4
  MegaTreeFeature *v32; // r4@4
  int v33; // r5@5
  int v35; // r7@5
  float v36; // r1@5
  int v39; // r10@5
  int v41; // r9@5
  char v42; // r0@5
  char v43; // r0@6
  MegaTreeFeature *v44; // r7@6
  int v45; // r6@6
  int v46; // r4@7
  const BlockPos *v47; // r8@11
  int v48; // r5@12
  int v49; // r4@12
  int v50; // r7@12
  int v51; // r2@14
  __int64 v52; // r0@15
  signed int result; // r0@17
  signed int v54; // [sp+1Ch] [bp-BCh]@2
  int v55; // [sp+1Ch] [bp-BCh]@12
  int v56; // [sp+20h] [bp-B8h]@3
  int v57; // [sp+20h] [bp-B8h]@12
  const BlockPos *v58; // [sp+24h] [bp-B4h]@2
  Random *v59; // [sp+28h] [bp-B0h]@1
  int v60; // [sp+2Ch] [bp-ACh]@4
  int v61; // [sp+2Ch] [bp-ACh]@12
  int v62; // [sp+30h] [bp-A8h]@12
  int v63; // [sp+34h] [bp-A4h]@4
  int v64; // [sp+34h] [bp-A4h]@12
  BlockSource *v65; // [sp+38h] [bp-A0h]@2
  unsigned __int64 v66; // [sp+3Ch] [bp-9Ch]@15
  int v67; // [sp+44h] [bp-94h]@15
  __int64 v68; // [sp+48h] [bp-90h]@15
  int v69; // [sp+50h] [bp-88h]@15
  int v70; // [sp+54h] [bp-84h]@15
  int v71; // [sp+58h] [bp-80h]@15
  int v72; // [sp+5Ch] [bp-7Ch]@15
  int v73; // [sp+60h] [bp-78h]@9
  int v74; // [sp+64h] [bp-74h]@9
  int v75; // [sp+68h] [bp-70h]@9
  char v76; // [sp+6Ch] [bp-6Ch]@5
  char v77; // [sp+6Dh] [bp-6Bh]@5
  int v78; // [sp+70h] [bp-68h]@5
  int v79; // [sp+74h] [bp-64h]@5
  int v80; // [sp+78h] [bp-60h]@5
  unsigned __int64 v81; // [sp+7Ch] [bp-5Ch]@2
  int v82; // [sp+84h] [bp-54h]@2

  v4 = a4;
  v5 = a2;
  v59 = a4;
  v6 = a3;
  v7 = this;
  v8 = MegaTreeFeature::_calcTreeHeigth(this, a4);
  if ( MegaTreeFeature::_prepareTree(v7, v5, v6, v8) == 1 )
  {
    v9 = v6;
    v65 = v5;
    v58 = v6;
    v10 = *(_QWORD *)v6;
    v11 = (*(_QWORD *)v6 >> 32) + v8;
    v12 = *((_DWORD *)v58 + 2);
    LODWORD(v81) = v10;
    HIDWORD(v81) = v11 - 2;
    v82 = v12;
    v54 = v8;
    MegaTreeFeature::_placeDoubleTrunkLeaves(v7, v5, (const BlockPos *)&v81, 5);
    HIDWORD(v81) = v11 - 1;
    MegaTreeFeature::_placeDoubleTrunkLeaves(v7, v5, (const BlockPos *)&v81, 4);
    v81 = __PAIR__(v11, v10);
    v13 = v7;
    v14 = v5;
    MegaTreeFeature::_placeDoubleTrunkLeaves(v7, v5, (const BlockPos *)&v81, 3);
    v15 = *((_DWORD *)v9 + 1) + v8 - 2;
    v16 = j_Random::_genRandInt32(v4);
    v17 = *((_DWORD *)v9 + 1);
    v18 = v15 - (v16 & 3);
    if ( v18 > v17 + v8 / 2 )
    {
      __asm { VMOV.F32        S20, #1.5 }
      v56 = v8 / 2;
      __asm { VLDR            D9, =2.32830644e-10 }
      _R0 = &mce::Math::PI;
      __asm
      {
        VLDR            S0, [R0]
        VADD.F32        S16, S0, S0
      }
      do
        v60 = v18;
        _R0 = j_Random::_genRandInt32(v4);
        __asm
        {
          VMOV            S0, R0
          VCVT.F64.U32    D0, S0
          VMUL.F64        D0, D0, D9
          VCVT.F32.F64    S0, D0
          VMUL.F32        S0, S16, S0
          VMOV            R8, S0
        }
        mce::Math::cos(_R8, v26);
        mce::Math::sin(_R8, v27);
        v29 = v18 - 3;
        v30 = v9;
        _R6 = 0;
        v32 = v13;
        v63 = v29;
        do
          v33 = *(_DWORD *)v30;
          _R0 = mce::Math::cos(_R8, v28);
          __asm
          {
            VMOV            S0, R6
            VCVT.F32.S32    S22, S0
          }
          v35 = *((_DWORD *)v30 + 2);
            VMOV            S0, R0
            VMUL.F32        S24, S0, S22
          _R0 = mce::Math::sin(_R8, v36);
            VADD.F32        S2, S24, S20
            VMUL.F32        S0, S0, S22
            VCVTR.S32.F32   S2, S2
            VADD.F32        S0, S0, S20
            VMOV            R1, S2
          v39 = _R1 + v33;
          v78 = _R1 + v33;
          __asm { VCVTR.S32.F32   S0, S0 }
          v79 = v63 + _R6 / 2;
          __asm { VMOV            R0, S0 }
          v41 = _R0 + v35;
          v80 = _R0 + v35;
          LOBYTE(v33) = *(_BYTE *)(Block::mLog + 4);
          v42 = MegaTreeFeature::_getTrunkType(v32);
          v76 = v33;
          v77 = v42;
          Feature::_setBlockAndData(v32, v65, (const BlockPos *)&v78, (const FullBlock *)&v76);
          ++_R6;
        while ( _R6 != 5 );
        v43 = j_Random::_genRandInt32(v59);
        v44 = v32;
        v45 = v60 - 1 - (v43 & 1);
        if ( v45 != v60 + 1 )
          v46 = 2;
          if ( v43 & 1 )
            v46 = 3;
          do
            v73 = v39;
            v74 = v45;
            v75 = v41;
            MegaTreeFeature::_placeSingleTrunkLeaves(v44, v65, (const BlockPos *)&v73, v46--);
            ++v45;
          while ( v46 );
        v14 = v65;
        v4 = v59;
        v13 = v44;
        v9 = v58;
        v18 = v60 - 2 - (j_Random::_genRandInt32(v59) & 3);
        v17 = *((_DWORD *)v58 + 1);
      while ( v18 > v56 + v17 );
    }
    v47 = v9;
    if ( v54 )
      v48 = v54 - 1;
      v49 = 0;
      v50 = VineBlock::VINE_SOUTH;
      v62 = VineBlock::VINE_NORTH;
      v61 = VineBlock::VINE_WEST;
      v57 = v54 - 1;
      v55 = VineBlock::VINE_SOUTH;
      v64 = VineBlock::VINE_EAST;
      while ( 1 )
        v51 = *((_DWORD *)v47 + 2);
        LODWORD(v81) = *(_DWORD *)v47;
        HIDWORD(v81) = v49 + v17;
        v82 = v51;
        MegaJungleTreeFeature::_placeVines(v13, v14, (const BlockPos *)&v81, v4, v49, v64, v50);
        if ( v49 < v48 )
          v70 = v81 + 1;
          v71 = HIDWORD(v81);
          v72 = v82;
          MegaJungleTreeFeature::_placeVines(v13, v14, (const BlockPos *)&v70, v4, v49, v61, v50);
          HIDWORD(v52) = HIDWORD(v81);
          LODWORD(v52) = v81 + 1;
          v68 = v52;
          v69 = v82 + 1;
          MegaJungleTreeFeature::_placeVines(v13, v14, (const BlockPos *)&v68, v4, v49, v61, v62);
          v66 = v81;
          v67 = v82 + 1;
          v50 = v55;
          v48 = v57;
          MegaJungleTreeFeature::_placeVines(v13, v14, (const BlockPos *)&v66, v4, v49, v64, v62);
        if ( v48 == v49 )
          break;
        ++v49;
        v17 = *((_DWORD *)v47 + 1);
    result = 1;
  }
  else
    result = 0;
  return result;
}


unsigned int __fastcall MegaJungleTreeFeature::_placeVine(MegaJungleTreeFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4, int a5)
{
  Feature *v5; // r6@1
  const BlockPos *v6; // r4@1
  BlockSource *v7; // r5@1
  unsigned int result; // r0@1
  char v9; // [sp+4h] [bp-14h]@3
  char v10; // [sp+5h] [bp-13h]@3

  v5 = this;
  v6 = a3;
  v7 = a2;
  result = j_Random::_genRandInt32(a4) % 3;
  if ( result )
  {
    result = Feature::_isEmptyBlock(v5, v7, v6);
    if ( result == 1 )
    {
      v9 = *(_BYTE *)(Block::mVine + 4);
      v10 = a5;
      result = Feature::_setBlockAndData(v5, v7, v6, (const FullBlock *)&v9);
    }
  }
  return result;
}
