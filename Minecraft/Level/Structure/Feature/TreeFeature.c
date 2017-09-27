

signed int __fastcall TreeFeature::place(TreeFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r4@1
  TreeFeature *v5; // r7@1
  const BlockPos *v6; // r5@1
  BlockSource *v7; // r6@1
  unsigned int v8; // kr00_4@1

  v4 = a4;
  v5 = this;
  v6 = a3;
  v7 = a2;
  v8 = j_Random::_genRandInt32(a4);
  return TreeFeature::place(v5, v7, v6, v4, v8 % 3 + 5);
}


signed int __fastcall TreeFeature::_prepareSpawn(TreeFeature *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  const BlockPos *v4; // r11@1
  signed int v5; // r0@1
  int v6; // r7@1
  BlockSource *v7; // r4@1
  int v8; // r2@3
  int v9; // r2@4
  int v10; // r0@5
  signed int v11; // r1@5
  int v12; // r8@5
  signed int v13; // r9@7
  int v14; // r10@12
  int v15; // r1@13
  int v16; // r6@13
  int v17; // r7@17
  int *v18; // r5@18
  signed int v19; // r0@21
  int v20; // r0@26
  bool v21; // nf@26
  unsigned __int8 v22; // vf@26
  int v24; // r3@39
  int v25; // [sp+0h] [bp-68h]@5
  int v26; // [sp+4h] [bp-64h]@5
  BlockSource *v27; // [sp+14h] [bp-54h]@1
  char v28; // [sp+18h] [bp-50h]@39
  char v29; // [sp+19h] [bp-4Fh]@39
  int v30; // [sp+1Ch] [bp-4Ch]@39
  int v31; // [sp+20h] [bp-48h]@39
  int v32; // [sp+24h] [bp-44h]@39
  int v33; // [sp+28h] [bp-40h]@17
  int v34; // [sp+2Ch] [bp-3Ch]@17
  int v35; // [sp+30h] [bp-38h]@17
  unsigned __int8 v36; // [sp+34h] [bp-34h]@17
  int v37; // [sp+38h] [bp-30h]@3
  int v38; // [sp+3Ch] [bp-2Ch]@3
  int v39; // [sp+40h] [bp-28h]@3

  v4 = a3;
  v27 = this;
  v5 = *((_DWORD *)a3 + 1);
  v6 = a4;
  v7 = a2;
  if ( v5 < 1 )
    return 0;
  if ( v5 + a4 >= *((_WORD *)a2 + 12) )
  v8 = *((_DWORD *)a3 + 2);
  v37 = *(_DWORD *)v4;
  v38 = v5 - 1;
  v39 = v8;
  BlockSource::getBlock(a2, (const BlockPos *)&v37);
  if ( (*(int (**)(void))(*(_DWORD *)Block::mSapling + 228))() != 1 )
  v9 = *((_DWORD *)v4 + 1);
  if ( v6 == -2 )
  {
    v10 = *(_DWORD *)v4;
    goto LABEL_39;
  }
  v26 = v6 + 2 + v9;
  v10 = *(_DWORD *)v4;
  v25 = v6 - 1;
  LOBYTE(v11) = 1;
  v12 = *((_DWORD *)v4 + 1);
  while ( 1 )
    v13 = 0;
    if ( v12 != v9 )
      v13 = 1;
    if ( v12 >= v9 + v25 )
      v13 = 2;
    if ( v11 & 1 )
    {
      v14 = v10 - v13;
      if ( v10 - v13 <= v10 + v13 )
      {
        while ( 1 )
        {
          v15 = *((_DWORD *)v4 + 2);
          v16 = v15 - v13;
          if ( v15 - v13 <= v15 + v13 )
          {
            if ( v12 < 0 )
            {
              LOBYTE(v11) = 0;
              break;
            }
            while ( v12 < *((_WORD *)v7 + 12) )
              v33 = v14;
              v34 = v12;
              v35 = v16;
              Feature::_getBlockID((Feature *)&v36, v27, v7, (const BlockPos *)&v33);
              v17 = Block::mBlocks[v36];
              if ( v17 )
              {
                v18 = (int *)Block::getMaterial((Block *)Block::mBlocks[v36]);
                if ( Material::isType(v18, 0) )
                {
                  v11 = 1;
                }
                else
                  v19 = Material::isType(v18, 7);
                  if ( !v19 && v17 != Block::mGrass )
                  {
                    v11 = 0;
                    if ( v17 == Block::mDirt )
                      v11 = 1;
                  }
              }
              else
                v11 = 1;
              if ( v11 == 1 )
                v20 = *((_DWORD *)v4 + 2) + v13;
                v22 = __OFSUB__(v16, v20);
                v21 = v16++ - v20 < 0;
                if ( v21 ^ v22 )
                  continue;
              goto LABEL_29;
            v11 = 0;
LABEL_29:
            v10 = *(_DWORD *)v4;
          }
          else
            v11 = 1;
          if ( v11 == 1 )
            v22 = __OFSUB__(v14, v10 + v13);
            v21 = v14++ - (v10 + v13) < 0;
            if ( v21 ^ v22 )
              continue;
          break;
        }
      }
    }
    if ( ++v12 == v26 )
      break;
    v9 = *((_DWORD *)v4 + 1);
  if ( !(v11 & 1) )
LABEL_39:
  v24 = *((_DWORD *)v4 + 2);
  v30 = v10;
  v31 = v9 - 1;
  v32 = v24;
  v28 = *(_BYTE *)(Block::mDirt + 4);
  v29 = 0;
  Feature::_setBlockAndData(v27, v7, (const BlockPos *)&v30, (const FullBlock *)&v28);
  return 1;
}


signed int __fastcall TreeFeature::_isFree(int a1, _BYTE *a2)
{
  int v2; // r1@1
  int v3; // r4@1
  int *v4; // r5@2
  signed int result; // r0@3
  signed int v6; // r1@4

  v2 = *a2;
  v3 = Block::mBlocks[v2];
  if ( v3 && (v4 = (int *)Block::getMaterial((Block *)Block::mBlocks[v2]), !Material::isType(v4, 0)) )
  {
    v6 = Material::isType(v4, 7);
    result = 1;
    if ( !v6 && v3 != Block::mGrass )
    {
      result = 0;
      if ( v3 == Block::mDirt )
        result = 1;
    }
  }
  else
  return result;
}


int __fastcall TreeFeature::_placeTrunk(TreeFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4, int a5)
{
  Random *v5; // r4@1
  BlockSource *v6; // r9@1
  TreeFeature *v7; // r10@1
  signed int v8; // r5@1
  int v9; // r0@4
  unsigned int v14; // r0@10
  const BlockPos *v15; // r5@16
  int v16; // r6@16
  int v17; // r1@17
  int v18; // r2@17
  Block *v19; // r11@17
  int v20; // r0@22
  const BlockPos *v21; // r11@22
  int v22; // r7@22
  int v23; // r4@22
  int v24; // r5@22
  int v25; // r6@22
  int v26; // r0@22
  int v27; // r0@22
  signed int v33; // [sp+8h] [bp-A0h]@13
  char v34; // [sp+14h] [bp-94h]@16
  char v35; // [sp+18h] [bp-90h]@16
  char v36; // [sp+1Ch] [bp-8Ch]@16
  char v37; // [sp+20h] [bp-88h]@16
  Random *v38; // [sp+30h] [bp-78h]@14
  int v39; // [sp+3Ch] [bp-6Ch]@13
  BlockPos *v40; // [sp+40h] [bp-68h]@1
  char v41; // [sp+44h] [bp-64h]@38
  char v42; // [sp+45h] [bp-63h]@38
  char v43; // [sp+48h] [bp-60h]@34
  char v44; // [sp+49h] [bp-5Fh]@34
  char v45; // [sp+4Ch] [bp-5Ch]@30
  char v46; // [sp+4Dh] [bp-5Bh]@30
  char v47; // [sp+50h] [bp-58h]@26
  char v48; // [sp+51h] [bp-57h]@26
  int v49; // [sp+54h] [bp-54h]@23
  int v50; // [sp+58h] [bp-50h]@23
  int v51; // [sp+5Ch] [bp-4Ch]@23
  char v52; // [sp+60h] [bp-48h]@22
  char v53; // [sp+61h] [bp-47h]@22
  __int64 v54; // [sp+64h] [bp-44h]@16
  int v55; // [sp+6Ch] [bp-3Ch]@17

  v5 = a4;
  v40 = a3;
  v6 = a2;
  v7 = this;
  v8 = 0;
  if ( !Feature::_getManuallyPlaced(this) && !(j_Random::_genRandInt32(v5) % 0x50) )
    v8 = 1;
  v9 = *((_DWORD *)v7 + 3);
  __asm
  {
    VMOV.F32        S16, #0.75
    VLDR            S18, =0.0
  }
  if ( v9 == 2 )
    __asm { VMOVEQ.F32      S16, S18 }
  if ( !v8 && v9 != 2 )
    if ( *((_BYTE *)v7 + 20) )
    {
      __asm { VLDR            S16, =0.33333 }
    }
    else
      v14 = j_Random::_genRandInt32(v5);
      __asm { VMOV.F32        S0, #1.0 }
      if ( v14 == 12 * (v14 / 0xC) )
        __asm { VMOVEQ.F32      S18, S0 }
      __asm { VMOV.F32        S16, S18 }
  v39 = a5;
  v33 = v8;
  if ( v8 == 1 )
    v38 = v5;
    TreeFeature::_placeFallenTrunk(v7, v6, v40, v5, a5);
    v39 = 1;
  else
    if ( a5 < 1 )
      return v33 ^ 1;
  v15 = (const BlockPos *)&v54;
  v16 = 0;
  v37 = VineBlock::VINE_NORTH;
  v36 = VineBlock::VINE_SOUTH;
  v35 = VineBlock::VINE_WEST;
  v34 = VineBlock::VINE_EAST;
  __asm { VLDR            D9, =2.32830644e-10 }
  do
    v17 = *((_DWORD *)v40 + 1);
    v18 = *((_DWORD *)v40 + 2);
    LODWORD(v54) = *(_DWORD *)v40;
    HIDWORD(v54) = v16 + v17;
    v55 = v18;
    v19 = (Block *)Feature::_getBlock(v7, v6, v15);
    if ( Block::isType(v19, (const Block *)Block::mAir)
      || Block::isType(v19, (const Block *)Block::mLeaves)
      || Block::isType(v19, (const Block *)Block::mLeaves2)
      || Block::isType(v19, (const Block *)Block::mDirt)
      || Block::isType(v19, (const Block *)Block::mGrass) == 1 )
      v20 = Block::getBlockState(Block::mLog, 24);
      v21 = v15;
      v22 = v16;
      v23 = *(_DWORD *)v20;
      v24 = *(_DWORD *)(v20 + 4);
      v25 = *((_DWORD *)v7 + 3);
      BlockState::getMask((BlockState *)v20);
      v52 = *(_BYTE *)(Block::mLog + 4);
      v26 = v23 + 1 - v24;
      v15 = v21;
      v27 = v25 << v26;
      v16 = v22;
      v53 = v27;
      Feature::_placeBlock(v7, v6, v21, (const FullBlock *)&v52);
      __asm
      {
        VCMPE.F32       S16, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !_ZF )
        v49 = v54 - 1;
        v50 = HIDWORD(v54);
        v51 = v55;
        _R0 = j_Random::_genRandInt32(v38);
        __asm
        {
          VMOV            S0, R0
          VCVT.F64.U32    D0, S0
          VMUL.F64        D0, D0, D9
          VCVT.F32.F64    S0, D0
          VCMPE.F32       S0, S16
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF && Feature::_isEmptyBlock(v7, v6, (const BlockPos *)&v49) == 1 )
          v47 = *(_BYTE *)(Block::mVine + 4);
          v48 = v34;
          Feature::_placeBlock(v7, v6, (const BlockPos *)&v49, (const FullBlock *)&v47);
        v49 = v54 + 1;
          v45 = *(_BYTE *)(Block::mVine + 4);
          v46 = v35;
          Feature::_placeBlock(v7, v6, (const BlockPos *)&v49, (const FullBlock *)&v45);
        *(_QWORD *)&v49 = v54;
        v51 = v55 - 1;
          v43 = *(_BYTE *)(Block::mVine + 4);
          v44 = v36;
          Feature::_placeBlock(v7, v6, (const BlockPos *)&v49, (const FullBlock *)&v43);
        v51 = v55 + 1;
          v41 = *(_BYTE *)(Block::mVine + 4);
          v42 = v37;
          Feature::_placeBlock(v7, v6, (const BlockPos *)&v49, (const FullBlock *)&v41);
    ++v16;
  while ( v39 != v16 );
  return v33 ^ 1;
}


signed int __fastcall TreeFeature::_isFree(TreeFeature *this, const Material *a2)
{
  int *v2; // r4@1
  signed int result; // r0@2

  v2 = (int *)a2;
  if ( Material::isType((int *)a2, 0) )
    result = 1;
  else
    result = Material::isType(v2, 7);
  return result;
}


unsigned int __fastcall TreeFeature::_addCocoaPlants(__int64 this, const BlockPos *a2, Random *a3, int a4)
{
  const BlockPos *v4; // r10@1
  Random *v5; // r4@1
  int v6; // r8@1
  int v7; // r7@3
  int v8; // r11@3
  unsigned int v9; // kr04_4@3
  __int64 v10; // kr10_8@3
  int v11; // r6@3
  int v12; // r8@5
  unsigned int result; // r0@6
  int v14; // r7@7
  int v15; // r6@7
  unsigned int v16; // kr08_4@7
  __int64 v17; // kr18_8@7
  int v18; // r5@7
  __int64 v19; // [sp+14h] [bp-3Ch]@1
  char v20; // [sp+1Ch] [bp-34h]@3
  char v21; // [sp+1Dh] [bp-33h]@3
  int v22; // [sp+20h] [bp-30h]@3
  int v23; // [sp+24h] [bp-2Ch]@3
  int v24; // [sp+28h] [bp-28h]@3

  v19 = this;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  do
  {
    if ( !(j_Random::_genRandInt32(v5) & 3) )
    {
      v7 = Direction::DIRECTION_OPPOSITE[v6];
      v8 = Direction::STEP_Z[v7];
      v9 = j_Random::_genRandInt32(v5);
      v10 = *(_QWORD *)v4;
      v11 = *((_DWORD *)v4 + 2);
      v22 = Direction::STEP_X[v7] + *(_QWORD *)v4;
      v23 = a4 - 5 + HIDWORD(v10);
      v24 = v11 + v8;
      v20 = *(_BYTE *)(Block::mCocoa + 4);
      v21 = v6 | 4 * (v9 % 3);
      Feature::_placeBlock((Feature *)v19, (BlockSource *)HIDWORD(v19), (const BlockPos *)&v22, (const FullBlock *)&v20);
    }
    ++v6;
  }
  while ( v6 != 4 );
  v12 = 0;
    result = j_Random::_genRandInt32(v5) % 3;
    if ( !result )
      v14 = Direction::DIRECTION_OPPOSITE[v12];
      v15 = Direction::STEP_Z[v14];
      v16 = j_Random::_genRandInt32(v5);
      v17 = *(_QWORD *)v4;
      v18 = *((_DWORD *)v4 + 2);
      v22 = Direction::STEP_X[v14] + *(_QWORD *)v4;
      v23 = a4 - 4 + HIDWORD(v17);
      v24 = v18 + v15;
      v21 = v12 | 4 * (v16 % 3);
      result = Feature::_placeBlock(
                 (Feature *)v19,
                 (BlockSource *)HIDWORD(v19),
                 (const BlockPos *)&v22,
                 (const FullBlock *)&v20);
    ++v12;
  while ( v12 != 4 );
  return result;
}


signed int __fastcall TreeFeature::_addVine(TreeFeature *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  Feature *v4; // r6@1
  char v5; // r9@1
  const BlockPos *v6; // r7@1
  BlockSource *v7; // r5@1
  int v8; // r1@1
  int v9; // r2@1
  signed int result; // r0@1
  signed int v11; // r4@2
  char v12; // [sp+4h] [bp-34h]@3
  char v13; // [sp+5h] [bp-33h]@3
  int v14; // [sp+8h] [bp-30h]@1
  int v15; // [sp+Ch] [bp-2Ch]@1
  int v16; // [sp+10h] [bp-28h]@1
  char v17; // [sp+14h] [bp-24h]@1
  char v18; // [sp+15h] [bp-23h]@1

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v17 = *(_BYTE *)(Block::mVine + 4);
  v18 = a4;
  Feature::_placeBlock(this, a2, a3, (const FullBlock *)&v17);
  v8 = *((_DWORD *)v6 + 1);
  v9 = *((_DWORD *)v6 + 2);
  v14 = *(_DWORD *)v6;
  v15 = v8 - 1;
  v16 = v9;
  result = Feature::_isEmptyBlock(v4, v7, (const BlockPos *)&v14);
  if ( result == 1 )
  {
    v11 = 4;
    do
    {
      v12 = *(_BYTE *)(Block::mVine + 4);
      v13 = v5;
      Feature::_placeBlock(v4, v7, (const BlockPos *)&v14, (const FullBlock *)&v12);
      --v15;
      result = Feature::_isEmptyBlock(v4, v7, (const BlockPos *)&v14);
      if ( v11 < 2 )
        break;
      --v11;
    }
    while ( result );
  }
  return result;
}


void __fastcall TreeFeature::~TreeFeature(TreeFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


unsigned int __fastcall TreeFeature::_addJungleFeatures(TreeFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r6@1
  const BlockPos *v5; // r7@1
  BlockSource *v6; // r4@1
  TreeFeature *v7; // r5@1
  Block *v8; // r0@1
  unsigned int result; // r0@1
  int v10; // r1@2
  int v11; // r2@2
  int v12; // r1@5
  int v13; // r2@5
  int v14; // r2@8
  int v15; // r2@11
  int v16; // [sp+0h] [bp-20h]@2
  int v17; // [sp+4h] [bp-1Ch]@2
  int v18; // [sp+8h] [bp-18h]@2

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = this;
  v8 = (Block *)Feature::_getBlock(this, a2, a3);
  result = Block::isType(v8, (const Block *)Block::mLeaves);
  if ( result == 1 )
  {
    v10 = *((_DWORD *)v5 + 1);
    v11 = *((_DWORD *)v5 + 2);
    v16 = *(_DWORD *)v5 - 1;
    v17 = v10;
    v18 = v11;
    if ( !(j_Random::_genRandInt32(v4) & 3) && Feature::_isEmptyBlock(v7, v6, (const BlockPos *)&v16) == 1 )
      TreeFeature::_addVine(v7, v6, (const BlockPos *)&v16, VineBlock::VINE_EAST);
    v12 = *((_DWORD *)v5 + 1);
    v13 = *((_DWORD *)v5 + 2);
    v16 = *(_DWORD *)v5 + 1;
    v17 = v12;
    v18 = v13;
      TreeFeature::_addVine(v7, v6, (const BlockPos *)&v16, VineBlock::VINE_WEST);
    v14 = *((_DWORD *)v5 + 2);
    *(_QWORD *)&v16 = *(_QWORD *)v5;
    v18 = v14 - 1;
      TreeFeature::_addVine(v7, v6, (const BlockPos *)&v16, VineBlock::VINE_SOUTH);
    v15 = *((_DWORD *)v5 + 2);
    v18 = v15 + 1;
    result = j_Random::_genRandInt32(v4);
    if ( !(result & 3) )
    {
      result = Feature::_isEmptyBlock(v7, v6, (const BlockPos *)&v16);
      if ( result == 1 )
        result = TreeFeature::_addVine(v7, v6, (const BlockPos *)&v16, VineBlock::VINE_NORTH);
    }
  }
  return result;
}


int __fastcall TreeFeature::_placeLeaf(TreeFeature *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  TreeFeature *v5; // r6@1
  Block *v6; // r0@1
  int *v7; // r7@1
  int result; // r0@3
  int v9; // r1@4
  char v10; // [sp+0h] [bp-18h]@4
  char v11; // [sp+1h] [bp-17h]@4

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = (Block *)Feature::_getBlock(this, a2, a3);
  v7 = (int *)Block::getMaterial(v6);
  if ( Material::isType(v7, 9) || Material::isType(v7, 0) || (result = Material::isType(v7, 7), result == 1) )
  {
    v9 = *((_DWORD *)v5 + 4);
    v10 = *(_BYTE *)(Block::mLeaves + 4);
    v11 = v9;
    result = Feature::_placeBlock(v5, v4, v3, (const FullBlock *)&v10);
  }
  return result;
}


int __fastcall TreeFeature::TreeFeature(Feature *a1, Entity *a2, int a3, int a4, char a5)
{
  int v5; // r4@1
  int v6; // r5@1
  int result; // r0@1

  v5 = a4;
  v6 = a3;
  result = Feature::Feature(a1, a2);
  *(_DWORD *)result = &off_2718C6C;
  *(_DWORD *)(result + 12) = v6;
  *(_DWORD *)(result + 16) = v5;
  *(_BYTE *)(result + 20) = a5;
  return result;
}


int __fastcall TreeFeature::_placeFallenTrunk(TreeFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4, int a5)
{
  Random *v5; // r4@1
  TreeFeature *v6; // r6@1
  const BlockPos *v7; // r7@1
  BlockSource *v8; // r5@1
  unsigned int v9; // r8@1
  _DWORD *v10; // r9@1
  _DWORD *v11; // r10@1
  unsigned int v12; // r0@1
  int v13; // r4@1
  int v14; // r1@1
  _DWORD *v15; // r11@1
  int v16; // r3@1
  int result; // r0@1
  int v18; // r8@2
  int v19; // r4@3
  signed int v20; // r7@3
  int v21; // r0@10
  BlockState *v22; // r0@10
  int v23; // r4@10
  int v24; // r7@10
  int v29; // r7@11
  _DWORD *v31; // r0@14
  int v32; // [sp+0h] [bp-90h]@10
  int v33; // [sp+4h] [bp-8Ch]@10
  int v34; // [sp+8h] [bp-88h]@10
  unsigned int v35; // [sp+Ch] [bp-84h]@2
  Random *v36; // [sp+10h] [bp-80h]@1
  char v37; // [sp+14h] [bp-7Ch]@16
  char v38; // [sp+15h] [bp-7Bh]@16
  unsigned int v39; // [sp+18h] [bp-78h]@14
  int v40; // [sp+1Ch] [bp-74h]@14
  int v41; // [sp+20h] [bp-70h]@14
  unsigned int v42; // [sp+24h] [bp-6Ch]@13
  int v43; // [sp+28h] [bp-68h]@13
  int v44; // [sp+2Ch] [bp-64h]@13
  char v45; // [sp+30h] [bp-60h]@12
  char v46; // [sp+31h] [bp-5Fh]@12
  unsigned int v47; // [sp+34h] [bp-5Ch]@5
  int v48; // [sp+38h] [bp-58h]@5
  int v49; // [sp+3Ch] [bp-54h]@5
  unsigned int v50; // [sp+40h] [bp-50h]@2
  int v51; // [sp+44h] [bp-4Ch]@2
  int v52; // [sp+48h] [bp-48h]@2
  unsigned int v53; // [sp+4Ch] [bp-44h]@1
  int v54; // [sp+50h] [bp-40h]@1
  unsigned int v55; // [sp+54h] [bp-3Ch]@1

  v5 = a4;
  v6 = this;
  v36 = a4;
  v7 = a3;
  v8 = a2;
  v9 = (j_Random::_genRandInt32(a4) & 3) + 2;
  v10 = &Facing::DIRECTION[3 * v9];
  v11 = v10 + 1;
  v12 = j_Random::_genRandInt32(v5) & 1 | 2;
  v13 = *((_DWORD *)v7 + 2);
  v14 = *((_DWORD *)v7 + 1) + v10[1] * v12;
  v15 = v10 + 2;
  v16 = v10[2];
  v53 = *(_DWORD *)v7 + v12 * *v10;
  v54 = v14;
  v55 = v13 + v16 * v12;
  result = BlockSource::getHeightmap(v8, (const BlockPos *)&v53);
  v54 = result;
  if ( result <= *((_DWORD *)v7 + 1) + 1 )
  {
    v35 = v9;
    v18 = a5 - 2;
    v50 = v53;
    v51 = result;
    v52 = v55;
    if ( a5 < 3 )
    {
LABEL_10:
      v21 = Block::getBlockState(Block::mLog, 24);
      v34 = *(_DWORD *)v21;
      v33 = *(_DWORD *)(v21 + 4);
      v32 = *((_DWORD *)v6 + 3);
      BlockState::getMask((BlockState *)v21);
      v22 = (BlockState *)Block::getBlockState(Block::mLog, 12);
      v24 = *(_QWORD *)v22 >> 32;
      v23 = *(_QWORD *)v22;
      result = BlockState::getMask(v22);
      v50 = v53;
      v51 = v54;
      v52 = v55;
      if ( a5 >= 3 )
      {
        __asm
        {
          VMOV.F32        S18, #0.5
          VLDR            D8, =2.32830644e-10
        }
        v29 = (result ^ 0xFF) & (v32 << (v34 + 1 - v33)) | (dword_262E9CC[v35] << (v23 + 1 - v24));
        do
          v45 = *(_BYTE *)(Block::mLog + 4);
          v46 = v29;
          Feature::_setBlockAndData(v6, v8, (const BlockPos *)&v50, (const FullBlock *)&v45);
          if ( !(j_Random::_genRandInt32(v36) % 0xA) )
          {
            v42 = v50;
            v43 = v51 + 1;
            v44 = v52;
            if ( Feature::_isEmptyBlock(v6, v8, (const BlockPos *)&v42) == 1 )
            {
              v39 = v50;
              v40 = v51 + 1;
              v41 = v52;
              _R0 = j_Random::_genRandInt32(v36);
              __asm
              {
                VMOV            S0, R0
                VCVT.F64.U32    D0, S0
              }
              v31 = &Block::mRedMushroom;
                VMUL.F64        D0, D0, D8
                VCVT.F32.F64    S0, D0
                VCMPE.F32       S0, S18
                VMRS            APSR_nzcv, FPSCR
              if ( _NF ^ _VF )
                v31 = &Block::mBrownMushroom;
              v37 = *(_BYTE *)(*v31 + 4);
              v38 = 0;
              Feature::_setBlockAndData(v6, v8, (const BlockPos *)&v39, (const FullBlock *)&v37);
            }
          }
          --v18;
          v50 += *v10;
          v51 += *v11;
          result = *v15 + v52;
          v52 += *v15;
        while ( v18 );
      }
    }
    else
      v19 = 0;
      v20 = 0;
      while ( 1 )
        result = Feature::_isEmptyBlock(v6, v8, (const BlockPos *)&v50);
        if ( result != 1 )
          break;
        v47 = v50;
        v48 = v51 - 1;
        v49 = v52;
        result = BlockSource::isSolidBlockingBlock(v8, (const BlockPos *)&v47);
        if ( result )
          v20 = 0;
        else
          if ( v20 > 1 )
            return result;
          ++v20;
        ++v19;
        v50 += *v10;
        v51 += *v11;
        v52 += *v15;
        if ( v19 >= v18 )
          goto LABEL_10;
  }
  return result;
}


signed int __fastcall TreeFeature::place(TreeFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4, int a5)
{
  int v5; // r7@1
  Random *v6; // r6@1
  const BlockPos *v7; // r4@1
  BlockSource *v8; // r8@1
  TreeFeature *v9; // r5@1
  int v10; // r0@2
  signed int v11; // r2@2
  int v12; // r0@3
  int v13; // r9@3
  int v14; // r0@5
  int v15; // r1@5
  signed int v16; // r0@5
  signed int v17; // kr00_4@5
  int v18; // r6@5
  signed int v19; // r0@6
  int v20; // r0@8
  int v21; // r10@8
  int v22; // r1@9
  int v23; // r4@13
  int v24; // r7@13
  int v25; // r1@15
  int v26; // r4@22
  int v27; // r7@22
  int v28; // r11@27
  int v29; // r7@27
  int v30; // r1@29
  int v31; // r1@37
  int v32; // r0@38
  int v33; // r7@38
  signed int v34; // kr04_4@40
  int v35; // r9@40
  int v36; // r11@41
  int v37; // r0@41
  int v38; // r4@41
  unsigned int v39; // r0@45
  int v40; // r2@48
  int v41; // r3@48
  int v43; // [sp+Ch] [bp-74h]@3
  int v44; // [sp+10h] [bp-70h]@6
  int v45; // [sp+14h] [bp-6Ch]@6
  int v46; // [sp+18h] [bp-68h]@6
  int v47; // [sp+18h] [bp-68h]@38
  int v48; // [sp+1Ch] [bp-64h]@5
  int v49; // [sp+24h] [bp-5Ch]@5
  int i; // [sp+24h] [bp-5Ch]@40
  Random *v51; // [sp+28h] [bp-58h]@3
  BlockPos *v52; // [sp+2Ch] [bp-54h]@1
  int v53; // [sp+30h] [bp-50h]@5
  int v54; // [sp+30h] [bp-50h]@40
  char v55; // [sp+34h] [bp-4Ch]@48
  char v56; // [sp+35h] [bp-4Bh]@48
  int v57; // [sp+38h] [bp-48h]@48
  int v58; // [sp+3Ch] [bp-44h]@48
  int v59; // [sp+40h] [bp-40h]@48
  int v60; // [sp+44h] [bp-3Ch]@42
  int v61; // [sp+48h] [bp-38h]@42
  int v62; // [sp+4Ch] [bp-34h]@42
  int v63; // [sp+50h] [bp-30h]@19
  int v64; // [sp+54h] [bp-2Ch]@19
  int v65; // [sp+58h] [bp-28h]@19

  v5 = a5;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v52 = a3;
  v9 = this;
  if ( TreeFeature::_prepareSpawn(this, a2, a3, a5) == 1 )
  {
    v10 = TreeFeature::_placeTrunk(v9, v8, v7, v6, a5);
    v11 = 1;
    if ( v10 == 1 )
    {
      v12 = *((_DWORD *)v7 + 1);
      v43 = a5 + 1 + v12;
      v51 = v6;
      v13 = a5 - 3 + v12;
      while ( 1 )
      {
        v14 = v12 + v5;
        v48 = v14;
        v15 = *(_DWORD *)v7;
        v17 = v13 - v14;
        v16 = v13 - v14 + ((unsigned int)(v13 - v14) >> 31);
        v53 = 1 - v17 / 2;
        v18 = *(_DWORD *)v7 - v53;
        v49 = v53 + *(_DWORD *)v7 + 1;
        if ( v18 != v49 )
        {
          v19 = v16 >> 1;
          v46 = 2 - 2 * v19;
          v44 = 1 - v19;
          v45 = 3 - 2 * v19;
          while ( 1 )
          {
            v20 = *((_DWORD *)v7 + 2);
            v21 = v20 - v53;
            if ( v20 - (1 - v17 / 2) != 2 - v17 / 2 + v20 )
            {
              v22 = v18 - v15;
              if ( v22 < 0 )
                v22 = -v22;
              if ( v22 == v53 )
              {
                if ( v13 == v48 )
                {
                  v23 = v46;
                  v24 = v44 - v20;
                  while ( 1 )
                  {
                    v25 = v21 - v20;
                    if ( v21 - v20 < 0 )
                      v25 = v24 + v20;
                    if ( v25 == v53 )
                    {
                      j_Random::_genRandInt32(v51);
                    }
                    else
                      v63 = v18;
                      v64 = v13;
                      v65 = v21;
                      TreeFeature::_placeLeaf(v9, v8, (const BlockPos *)&v63);
                    if ( !v23 )
                      break;
                    ++v21;
                    --v24;
                    --v23;
                    v20 = *((_DWORD *)v52 + 2);
                  }
                }
                else
                  v28 = v46;
                  v29 = v44 - v20;
                    v30 = v21 - v20;
                      v30 = v29 + v20;
                    if ( v30 != v53 || j_Random::_genRandInt32(v51) & 1 )
                    if ( !v28 )
                    --v29;
                    --v28;
              }
              else
                v26 = v45;
                v27 = v45;
                  do
                    v63 = v18;
                    v64 = v13;
                    v65 = v21;
                    TreeFeature::_placeLeaf(v9, v8, (const BlockPos *)&v63);
                    --v26;
                  while ( v26 );
                    --v27;
                  while ( v27 );
            }
            v7 = v52;
            if ( ++v18 == v49 )
              break;
            v15 = *(_DWORD *)v52;
          }
        }
        if ( ++v13 == v43 )
          break;
        v12 = *((_DWORD *)v7 + 1);
        v5 = a5;
      }
      v31 = a5;
      if ( *((_BYTE *)v9 + 20) )
        v32 = *((_DWORD *)v7 + 1);
        v47 = a5 + 1 + v32;
        v33 = a5 - 3 + v32;
        while ( 1 )
          v34 = v33 - v31 - v32;
          v54 = 2 - v34 / 2;
          v35 = *(_DWORD *)v7 - v54;
          for ( i = v54 + *(_DWORD *)v7 + 1; v35 != i; ++v35 )
            v36 = 5 - 2 * (v34 / 2);
            v37 = *((_DWORD *)v52 + 2);
            v38 = v37 - v54;
            if ( v37 - (2 - v34 / 2) != v37 + 3 - v34 / 2 )
              do
                v60 = v35;
                v61 = v33;
                v62 = v38;
                TreeFeature::_addJungleFeatures(v9, v8, (const BlockPos *)&v60, v51);
                --v36;
                ++v38;
              while ( v36 );
          if ( ++v33 == v47 )
            break;
          v7 = v52;
          v31 = a5;
          v32 = *((_DWORD *)v52 + 1);
        v39 = j_Random::_genRandInt32(v51);
        v7 = v52;
        if ( a5 >= 6 && !(v39 % 5) )
          TreeFeature::_addCocoaPlants(__PAIR__((unsigned int)v8, (unsigned int)v9), v52, v51, a5);
      v40 = *((_DWORD *)v7 + 1);
      v41 = *((_DWORD *)v7 + 2);
      v57 = *(_DWORD *)v7;
      v58 = v40 - 1;
      v59 = v41;
      v55 = *(_BYTE *)(Block::mDirt + 4);
      v56 = 0;
      Feature::_placeBlock(v9, v8, (const BlockPos *)&v57, (const FullBlock *)&v55);
      v11 = 1;
    }
  }
  else
    v11 = 0;
  return v11;
}


void __fastcall TreeFeature::~TreeFeature(TreeFeature *this)
{
  TreeFeature::~TreeFeature(this);
}
