

signed int __fastcall MineshaftCorridor::postProcessMobsAt(MineshaftCorridor *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  MineshaftCorridor *v4; // r6@1
  Random *v5; // r4@1
  signed int result; // r0@1
  signed int v7; // r7@2
  signed int v8; // r10@2
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  unsigned int *v11; // r2@7
  signed int v12; // r1@9
  unsigned int v13; // r0@19
  void (__fastcall *v14)(MineshaftCorridor *, BlockSource *, const BoundingBox *, Random *); // r11@20
  void *v15; // r0@20
  unsigned int v16; // r0@21
  MineshaftCorridor *v17; // r8@22
  void (__fastcall *v18)(MineshaftCorridor *, BlockSource *, const BoundingBox *, Random *); // r6@22
  void *v19; // r0@22
  BlockSource *v20; // [sp+2Ch] [bp-4Ch]@1
  const BoundingBox *v21; // [sp+30h] [bp-48h]@1
  int v22; // [sp+38h] [bp-40h]@7
  int v23; // [sp+40h] [bp-38h]@3

  v4 = this;
  v5 = a3;
  result = *((_DWORD *)this + 12);
  v21 = a4;
  v20 = a2;
  if ( result >= 1 )
  {
    v7 = 1374389535;
    v8 = 0;
    do
    {
      v13 = j_Random::_genRandInt32(v5);
      if ( v13 == 100 * ((unsigned int)(v13 * (unsigned __int64)(unsigned int)v7 >> 32) >> 5) )
      {
        v14 = *(void (__fastcall **)(MineshaftCorridor *, BlockSource *, const BoundingBox *, Random *))(*(_DWORD *)v4 + 48);
        sub_21E94B4((void **)&v23, "loot_tables/chests/abandoned_mineshaft.json");
        v14(v4, v20, v21, v5);
        v15 = (void *)(v23 - 12);
        if ( (int *)(v23 - 12) != &dword_28898C0 )
        {
          v9 = (unsigned int *)(v23 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v10 = __ldrex(v9);
            while ( __strex(v10 - 1, v9) );
          }
          else
            v10 = (*v9)--;
          if ( v10 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
        }
      }
      v16 = j_Random::_genRandInt32(v5);
      if ( v16 == 100 * ((unsigned int)(v16 * (unsigned __int64)(unsigned int)v7 >> 32) >> 5) )
        v17 = v4;
        v18 = *(void (__fastcall **)(MineshaftCorridor *, BlockSource *, const BoundingBox *, Random *))(*(_DWORD *)v4 + 48);
        sub_21E94B4((void **)&v22, "loot_tables/chests/abandoned_mineshaft.json");
        v18(v17, v20, v21, v5);
        v19 = (void *)(v22 - 12);
        if ( (int *)(v22 - 12) != &dword_28898C0 )
          v11 = (unsigned int *)(v22 - 4);
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
            v12 = (*v11)--;
          if ( v12 <= 0 )
            j_j_j_j__ZdlPv_9(v19);
        v7 = 1374389535;
        v4 = v17;
      ++v8;
      result = *((_DWORD *)v4 + 12);
    }
    while ( v8 < result );
  }
  return result;
}


unsigned int __fastcall MineshaftCorridor::_placeCobWeb(MineshaftCorridor *this, BlockSource *a2, const BoundingBox *a3, Random *a4, float a5, int a6, int a7, int a8)
{
  BlockSource *v8; // r6@1
  Random *v9; // r8@1
  const BoundingBox *v10; // r9@1
  MineshaftCorridor *v11; // r7@1
  unsigned int result; // r0@1
  BlockSource *v17; // [sp+0h] [bp-40h]@1
  char v18; // [sp+1Ch] [bp-24h]@2

  v8 = a2;
  v9 = a4;
  v10 = a3;
  v11 = this;
  result = j_StructurePiece::isAboveGround(this, a6, a7, a8, a2);
  if ( !result )
  {
    __asm { VLDR            S0, [SP,#0x40+arg_0] }
    v18 = *(_BYTE *)(Block::mWeb + 4);
    __asm { VSTR            S0, [SP,#0x40+var_40] }
    result = j_StructurePiece::maybeGenerateBlock(
               *(float *)&v11,
               (int)v8,
               (int)v10,
               (int)v9,
               (int)v17,
               a6,
               a7,
               a8 - 1,
               (int)&v18,
               0);
  }
  return result;
}


int __fastcall MineshaftCorridor::_placeSupport(MineshaftCorridor *this, BlockSource *a2, const BoundingBox *a3, int a4, int a5, int a6, int a7, int a8, Random *a9)
{
  const BoundingBox *v9; // r8@1
  int v10; // r7@1
  BlockSource *v11; // r9@1
  MineshaftCorridor *v12; // r6@1
  int result; // r0@1
  void (__fastcall *v14)(MineshaftCorridor *, BlockSource *, const BoundingBox *, int); // r5@2
  void (__fastcall *v15)(MineshaftCorridor *, BlockSource *, const BoundingBox *, int); // r5@2
  char v16; // r0@2
  void (__fastcall *v17)(MineshaftCorridor *, BlockSource *, const BoundingBox *, int); // r12@2
  int v18; // r0@3
  int v19; // r0@3
  int (__fastcall *v20)(MineshaftCorridor *, BlockSource *, const BoundingBox *, int); // r7@5
  char v21; // [sp+24h] [bp-54h]@3
  char v22; // [sp+28h] [bp-50h]@3
  __int16 v23; // [sp+2Ch] [bp-4Ch]@3
  char v24; // [sp+30h] [bp-48h]@3
  char v25; // [sp+31h] [bp-47h]@3
  __int16 v26; // [sp+34h] [bp-44h]@5
  char v27; // [sp+38h] [bp-40h]@5
  char v28; // [sp+39h] [bp-3Fh]@5
  __int16 v29; // [sp+3Ch] [bp-3Ch]@5
  char v30; // [sp+40h] [bp-38h]@5
  char v31; // [sp+41h] [bp-37h]@5
  __int16 v32; // [sp+44h] [bp-34h]@2
  char v33; // [sp+48h] [bp-30h]@2
  char v34; // [sp+49h] [bp-2Fh]@2
  __int16 v35; // [sp+4Ch] [bp-2Ch]@2
  char v36; // [sp+50h] [bp-28h]@2
  char v37; // [sp+51h] [bp-27h]@2

  v9 = a3;
  v10 = a4;
  v11 = a2;
  v12 = this;
  result = j_MineshaftPiece::_isSupportingBox(this, a4, a8, a2, a7, a6);
  if ( result == 1 )
  {
    v14 = *(void (__fastcall **)(MineshaftCorridor *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v12 + 40);
    v36 = *((_BYTE *)v12 + 38);
    v37 = *((_BYTE *)v12 + 39);
    v35 = FullBlock::AIR;
    v14(v12, v11, v9, v10);
    v15 = *(void (__fastcall **)(MineshaftCorridor *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v12 + 40);
    v33 = *((_BYTE *)v12 + 38);
    v34 = *((_BYTE *)v12 + 39);
    v32 = FullBlock::AIR;
    v15(v12, v11, v9, a8);
    v16 = j_Random::_genRandInt32(a9);
    v17 = *(void (__fastcall **)(MineshaftCorridor *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v12 + 40);
    if ( v16 & 3 )
    {
      v24 = *((_BYTE *)v12 + 36);
      v25 = *((_BYTE *)v12 + 37);
      v23 = FullBlock::AIR;
      v17(v12, v11, v9, v10);
      v22 = *(_BYTE *)(Block::mTorch + 4);
      v18 = j_StructurePiece::getTorchData(v12, 2);
      j_StructurePiece::maybeGenerateBlock(
        *(float *)&v12,
        (int)v11,
        (int)v9,
        (int)a9,
        1028443341,
        v10 + 1,
        a7,
        a6 - 1,
        (int)&v22,
        v18);
      v21 = *(_BYTE *)(Block::mTorch + 4);
      v19 = j_StructurePiece::getTorchData(v12, 0);
      result = j_StructurePiece::maybeGenerateBlock(
                 *(float *)&v12,
                 (int)v11,
                 (int)v9,
                 (int)a9,
                 1028443341,
                 v10 + 1,
                 a7,
                 a6 + 1,
                 (int)&v21,
                 v19);
    }
    else
      v30 = *((_BYTE *)v12 + 36);
      v31 = *((_BYTE *)v12 + 37);
      v29 = FullBlock::AIR;
      v20 = *(int (__fastcall **)(MineshaftCorridor *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v12 + 40);
      v27 = *((_BYTE *)v12 + 36);
      v28 = *((_BYTE *)v12 + 37);
      v26 = FullBlock::AIR;
      result = v20(v12, v11, v9, a8);
  }
  return result;
}


signed int __fastcall MineshaftCorridor::postProcess(MineshaftCorridor *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  const BoundingBox *v4; // r6@1
  Random *v5; // r8@1
  BlockSource *v6; // r10@1
  MineshaftCorridor *v7; // r7@1
  signed int v8; // r4@1
  void (__fastcall *v9)(MineshaftCorridor *, BlockSource *, const BoundingBox *, _DWORD); // r12@2
  int v10; // r11@2
  Random *v11; // r11@4
  int v12; // r5@5
  int v13; // r1@5
  int v14; // r8@24
  unsigned int v15; // r4@24
  int v16; // r9@24
  int v17; // r4@24
  MobSpawnerBlockEntity *v18; // r0@31
  int v19; // r0@31
  const BoundingBox *v20; // r4@34
  void (__fastcall *v21)(MineshaftCorridor *, BlockSource *, char *, _DWORD); // r5@37
  const BoundingBox *v22; // r4@39
  void (__fastcall *v23)(MineshaftCorridor *, BlockSource *, char *, signed int); // r5@42
  const BoundingBox *v24; // r4@44
  void (__fastcall *v25)(MineshaftCorridor *, BlockSource *, char *, signed int); // r5@47
  const BoundingBox *v29; // r4@51
  int v31; // r0@57
  BlockSource *v33; // [sp+0h] [bp-B8h]@55
  int v34; // [sp+34h] [bp-84h]@2
  signed int v35; // [sp+3Ch] [bp-7Ch]@2
  int v36; // [sp+40h] [bp-78h]@10
  int v37; // [sp+44h] [bp-74h]@6
  char v38; // [sp+4Ch] [bp-6Ch]@57
  char v39; // [sp+50h] [bp-68h]@37
  char v40; // [sp+51h] [bp-67h]@37
  char v41; // [sp+54h] [bp-64h]@35
  char v42; // [sp+58h] [bp-60h]@31
  char v43; // [sp+59h] [bp-5Fh]@31
  char v44; // [sp+5Ch] [bp-5Ch]@3
  char v45; // [sp+60h] [bp-58h]@3
  char v46; // [sp+64h] [bp-54h]@2
  char v47; // [sp+68h] [bp-50h]@2
  char v48; // [sp+6Ch] [bp-4Ch]@2
  char v49; // [sp+6Dh] [bp-4Bh]@2
  char v50; // [sp+70h] [bp-48h]@2
  char v51; // [sp+71h] [bp-47h]@2
  unsigned __int8 v52; // [sp+74h] [bp-44h]@7

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = this;
  v8 = 0;
  if ( !j_StructurePiece::edgesLiquid(this, a2, a4) )
  {
    v35 = *((_DWORD *)v7 + 12);
    v9 = *(void (__fastcall **)(MineshaftCorridor *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v7 + 40);
    v34 = 5 * v35;
    v10 = 5 * v35 - 1;
    v50 = BlockID::AIR;
    v48 = BlockID::AIR;
    v51 = 0;
    v49 = 0;
    v9(v7, v6, v4, 0);
    v47 = BlockID::AIR;
    v46 = BlockID::AIR;
    j_StructurePiece::generateMaybeBox(
      *(float *)&v7,
      (int)v6,
      (int)v4,
      (int)v5,
      1061997773,
      0,
      2,
      v10,
      (int)&v47,
      (int)&v46,
      0);
    if ( *((_BYTE *)v7 + 45) )
    {
      v45 = *(_BYTE *)(Block::mWeb + 4);
      v44 = BlockID::AIR;
      j_StructurePiece::generateMaybeBox(
        *(float *)&v7,
        (int)v6,
        (int)v4,
        (int)v5,
        1058642330,
        0,
        2,
        1,
        v10,
        (int)&v45,
        (int)&v44,
        1);
    }
    v11 = v5;
    if ( *((_DWORD *)v7 + 12) >= 1 )
      v12 = 1;
      v13 = 0;
      do
      {
        v37 = v13;
        j_MineshaftCorridor::_placeSupport(v7, v6, v4, 0, 0, v12 + 1, 2, 2, v11);
        if ( !j_StructurePiece::isAboveGround(v7, 0, 2, v12 + 1, v6) )
        {
          v52 = *(_BYTE *)(Block::mWeb + 4);
          j_StructurePiece::maybeGenerateBlock(
            *(float *)&v7,
            (int)v6,
            (int)v4,
            (int)v11,
            1036831949,
            0,
            2,
            v12,
            (int)&v52,
            0);
        }
        if ( !j_StructurePiece::isAboveGround(v7, 2, 2, v12, v6) )
            v12 - 1,
        v36 = v12 - 1;
        if ( !j_StructurePiece::isAboveGround(v7, 0, 2, v12 + 2, v6) )
            v12 + 1,
        if ( !j_StructurePiece::isAboveGround(v7, 2, 2, v12 + 2, v6) )
        if ( !j_StructurePiece::isAboveGround(v7, 0, 2, v36, v6) )
            1028443341,
            v12 - 2,
        if ( !j_StructurePiece::isAboveGround(v7, 2, 2, v36, v6) )
        if ( !j_StructurePiece::isAboveGround(v7, 0, 2, v12 + 3, v6) )
            v12 + 2,
        if ( !j_StructurePiece::isAboveGround(v7, 2, 2, v12 + 3, v6) )
        if ( *((_BYTE *)v7 + 45) )
          if ( !*((_BYTE *)v7 + 46) )
          {
            v14 = j_StructurePiece::getWorldY(v7, 0);
            v15 = v12 + j_Random::_genRandInt32(v11) % 3;
            v16 = (*(int (__fastcall **)(MineshaftCorridor *, signed int, unsigned int))(*(_DWORD *)v7 + 28))(
                    v7,
                    1,
                    v15);
            v17 = (*(int (__fastcall **)(MineshaftCorridor *, signed int, unsigned int))(*(_DWORD *)v7 + 32))(
            if ( *(_DWORD *)v4 <= v16
              && *((_DWORD *)v4 + 3) >= v16
              && *((_DWORD *)v4 + 2) <= v17
              && *((_DWORD *)v4 + 5) >= v17
              && *((_DWORD *)v4 + 1) <= v14
              && *((_DWORD *)v4 + 4) >= v14
              && !j_BlockSource::canSeeSky(v6, v16, v14, v17) )
            {
              *((_BYTE *)v7 + 46) = 1;
              v42 = *(_BYTE *)(Block::mMobSpawner + 4);
              v43 = 0;
              j_BlockSource::setBlockAndData((int)v6, v16, v14, v17, (int)&v42, 4);
              v18 = (MobSpawnerBlockEntity *)j_BlockSource::getBlockEntity(v6, v16, v14, v17);
              v19 = j_MobSpawnerBlockEntity::getSpawner(v18);
              j_BaseMobSpawner::setEntityId(v19, 265000);
            }
          }
        v12 += 5;
        v13 = v37 + 1;
      }
      while ( v37 + 1 < *((_DWORD *)v7 + 12) );
    if ( v35 < 1 )
      return 1;
    v20 = 0;
    do
      j_StructurePiece::getBlock((StructurePiece *)&v41, v7, (int)v6, 0, -1, v20, (int)v4);
      if ( !v41 && !j_StructurePiece::isAboveGround(v7, 0, -1, (int)v20, v6) )
        v21 = *(void (__fastcall **)(MineshaftCorridor *, BlockSource *, char *, _DWORD))(*(_DWORD *)v7 + 36);
        v39 = *((_BYTE *)v7 + 36);
        v40 = *((_BYTE *)v7 + 37);
        v21(v7, v6, &v39, 0);
      v20 = (const BoundingBox *)((char *)v20 + 1);
    while ( (signed int)v20 < v34 );
    v22 = 0;
      j_StructurePiece::getBlock((StructurePiece *)&v41, v7, (int)v6, 1, -1, v22, (int)v4);
      if ( !v41 && !j_StructurePiece::isAboveGround(v7, 1, -1, (int)v22, v6) )
        v23 = *(void (__fastcall **)(MineshaftCorridor *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 36);
        v23(v7, v6, &v39, 1);
      v22 = (const BoundingBox *)((char *)v22 + 1);
    while ( (signed int)v22 < v34 );
    v24 = 0;
      j_StructurePiece::getBlock((StructurePiece *)&v41, v7, (int)v6, 2, -1, v24, (int)v4);
      if ( !v41 && !j_StructurePiece::isAboveGround(v7, 2, -1, (int)v24, v6) )
        v25 = *(void (__fastcall **)(MineshaftCorridor *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 36);
        v25(v7, v6, &v39, 2);
      v24 = (const BoundingBox *)((char *)v24 + 1);
    while ( (signed int)v24 < v34 );
    v8 = 1;
    if ( *((_BYTE *)v7 + 44) && v35 >= 1 )
      __asm
        VLDR            S16, =0.7
        VLDR            S18, =0.9
      v29 = 0;
        j_StructurePiece::getBlock((StructurePiece *)&v52, v7, (int)v6, 1, -1, v29, (int)v4);
        _ZF = v52 == 0;
        if ( v52 )
          _ZF = Block::mSolid[v52] == 0;
        if ( !_ZF )
          j_StructurePiece::isAboveGround(v7, 1, -1, (int)v29, v6);
          __asm { VMOV.F32        S20, S16 }
          if ( !_ZF )
            __asm { VMOVNE.F32      S20, S18 }
          v38 = *(_BYTE *)(Block::mRail + 4);
          v31 = j_StructurePiece::getOrientationData(v7, (const Block *)Block::mRail, BaseRailBlock::DIR_FLAT_Z);
          __asm { VSTR            S20, [SP,#0xB8+var_B8] }
            (int)v33,
            1,
            (int)v29,
            (int)&v38,
            v31);
        v29 = (const BoundingBox *)((char *)v29 + 1);
      while ( (signed int)v29 < v34 );
  }
  return v8;
}


int __fastcall MineshaftCorridor::MineshaftCorridor(int a1, int a2, int a3, Random *a4, int a5, int a6)
{
  int v6; // r4@1
  char v7; // r6@1
  Random *v8; // r5@1
  char v10; // r0@1
  int v11; // r0@7
  int v12; // r1@7

  v6 = a1;
  v7 = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  v8 = a4;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 32) = a3;
  *(_BYTE *)(a1 + 36) = *(_BYTE *)a2;
  *(_BYTE *)(a1 + 37) = *(_BYTE *)(a2 + 1);
  *(_BYTE *)(a1 + 38) = *(_BYTE *)(a2 + 2);
  *(_BYTE *)(a1 + 39) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)a1 = &off_272382C;
  *(_BYTE *)(a1 + 44) = 0;
  *(_BYTE *)(a1 + 45) = 0;
  *(_BYTE *)(a1 + 46) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 28) = a6;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)a5;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a5 + 12);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a5 + 16);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a5 + 20);
  _ZF = j_Random::_genRandInt32(a4) % 3 == 0;
  v10 = 0;
  if ( _ZF )
    v10 = 1;
  *(_BYTE *)(v6 + 44) = v10;
  if ( !_ZF && !(j_Random::_genRandInt32(v8) % 0x17) )
    v7 = 1;
  *(_BYTE *)(v6 + 45) = v7;
  if ( (*(_DWORD *)(v6 + 28) | 2) == 2 )
  {
    v11 = *(_DWORD *)(a5 + 8);
    v12 = *(_DWORD *)(a5 + 20);
  }
  else
    v11 = *(_DWORD *)a5;
    v12 = *(_DWORD *)(a5 + 12);
  _R0 = v12 + 1 - v11;
  _R1 = 1717986919;
  __asm { SMMUL.W         R0, R0, R1 }
  *(_DWORD *)(v6 + 48) = ((signed int)_R0 >> 1) + (_R0 >> 31);
  return v6;
}


int __fastcall MineshaftCorridor::findCorridorSize(int a1, int a2, Random *this, int a4, int a5, int a6, int a7)
{
  int v7; // r8@1
  __int64 *v8; // r5@1
  int v9; // r9@1
  signed int v10; // r7@1
  int v11; // r0@3
  int v12; // r0@8
  int v13; // r10@13
  int v14; // r9@13
  int v15; // r0@14
  int v16; // r0@19
  int result; // r0@24
  int v18; // [sp+0h] [bp-40h]@1
  int v19; // [sp+4h] [bp-3Ch]@1
  int v20; // [sp+8h] [bp-38h]@1
  int v21; // [sp+Ch] [bp-34h]@1
  int v22; // [sp+10h] [bp-30h]@1
  int v23; // [sp+14h] [bp-2Ch]@1

  v7 = a1;
  v8 = (__int64 *)a2;
  v9 = a4;
  v18 = a4;
  v19 = a5;
  v20 = a6;
  v21 = a4;
  v22 = a5 + 2;
  v23 = a6;
  v10 = j_Random::_genRandInt32(this) % 3 + 2;
  if ( a7 )
  {
    if ( a7 == 2 )
    {
      do
      {
        v21 = v9 + 2;
        v20 = -5 * v10 + a6 + 1;
        v11 = j_StructurePiece::findCollisionPiece(v8, (int)&v18);
        if ( v11 )
          --v10;
      }
      while ( v10 >= 1 && v11 );
      goto LABEL_23;
    }
    v13 = v9 - 1;
    v14 = v9 + 1;
    while ( 1 )
      v15 = 5 * v10;
      if ( a7 == 3 )
        break;
      if ( a7 == 1 )
        v18 = v14 - v15;
LABEL_18:
        v23 = a6 + 2;
      v16 = j_StructurePiece::findCollisionPiece(v8, (int)&v18);
      if ( v16 )
        --v10;
      if ( v10 < 1 || !v16 )
        goto LABEL_23;
    v21 = v15 + v13;
    goto LABEL_18;
  }
  do
    v21 = v9 + 2;
    v23 = 5 * v10 + a6 - 1;
    v12 = j_StructurePiece::findCollisionPiece(v8, (int)&v18);
    if ( v12 )
      --v10;
  while ( v10 >= 1 && v12 );
LABEL_23:
  if ( v10 < 1 )
    *(_DWORD *)v7 = 0;
    *(_DWORD *)(v7 + 4) = 0;
    *(_DWORD *)(v7 + 8) = 0;
    result = -2147483647;
    *(_DWORD *)v7 = 0x7FFFFFFF;
    *(_DWORD *)(v7 + 4) = 0x7FFFFFFF;
    *(_DWORD *)(v7 + 8) = 0x7FFFFFFF;
    *(_DWORD *)(v7 + 12) = -2147483647;
    *(_DWORD *)(v7 + 16) = -2147483647;
  else
    *(_DWORD *)(v7 + 12) = 0;
    *(_DWORD *)(v7 + 16) = 0;
    *(_DWORD *)(v7 + 20) = 0;
    *(_DWORD *)v7 = v18;
    *(_DWORD *)(v7 + 4) = v19;
    *(_DWORD *)(v7 + 8) = v20;
    *(_DWORD *)(v7 + 12) = v21;
    *(_DWORD *)(v7 + 16) = v22;
    result = v23;
  *(_DWORD *)(v7 + 20) = result;
  return result;
}


signed int __fastcall MineshaftCorridor::addChildren(int a1, int a2, int a3, Random *a4)
{
  Random *v4; // r11@1
  int v5; // r7@1
  int v6; // r9@1
  int v7; // r10@1
  int v8; // r8@1
  signed int result; // r0@1
  unsigned int v10; // r4@1
  __int64 v11; // r4@3
  unsigned int v12; // r0@3
  unsigned int v13; // r6@3
  int v14; // r1@3
  int v15; // r4@8
  int v16; // r5@8
  unsigned int v17; // r0@8
  __int64 v18; // r1@8
  int v19; // r0@8
  __int64 v20; // r1@10
  int v21; // r5@13
  int v22; // r4@14
  unsigned int v23; // r0@14
  signed int v24; // r3@14
  unsigned int v25; // r2@14
  int v26; // r1@14
  int v27; // r5@15
  int v28; // r6@15
  unsigned int v29; // r0@15
  int v30; // r2@16
  int v31; // r6@19
  int v32; // r5@20 OVERLAPPED
  int v33; // r6@20
  unsigned int v34; // r0@20
  signed int v35; // r2@21 OVERLAPPED
  int v36; // r1@21 OVERLAPPED
  int v37; // r4@22
  int v38; // r4@25
  int v39; // r5@33
  int v40; // r6@34
  unsigned int v41; // r0@35
  int v42; // r5@41
  int v43; // r6@42
  unsigned int v44; // r0@43
  int v45; // [sp+0h] [bp-38h]@6
  int v46; // [sp+0h] [bp-38h]@24
  int v47; // [sp+4h] [bp-34h]@24
  __int64 v48; // [sp+8h] [bp-30h]@3
  __int64 v49; // [sp+8h] [bp-30h]@24
  int v50; // [sp+10h] [bp-28h]@3

  v4 = a4;
  v5 = a1;
  v6 = a3;
  v7 = a2;
  v8 = *(_DWORD *)(a1 + 32);
  result = j_Random::_genRandInt32(a4);
  v10 = result & 3;
  switch ( *(_DWORD *)(v5 + 28) )
  {
    case 0:
      if ( v10 <= 1 )
      {
        v11 = *(_QWORD *)(v5 + 4);
        v12 = j_Random::_genRandInt32(v4);
        v50 = v8;
        v13 = 2863311531u * (unsigned __int64)v12 >> 32;
        HIDWORD(v48) = *(_QWORD *)(v5 + 24) >> 32;
        v14 = *(_QWORD *)(v5 + 24) + 1;
        goto LABEL_6;
      }
      v21 = *(_DWORD *)(v5 + 8);
      if ( v10 == 2 )
        v22 = *(_DWORD *)(v5 + 4);
        v23 = j_Random::_genRandInt32(v4);
        v24 = 1;
        v25 = 2863311531u * (unsigned __int64)v23 >> 32;
        v26 = *(_DWORD *)(v5 + 24) - 3;
        goto LABEL_19;
      v38 = *(_DWORD *)(v5 + 16);
      v23 = j_Random::_genRandInt32(v4);
      v24 = 3;
      v31 = v38 + 1;
      v25 = 2863311531u * (unsigned __int64)v23 >> 32;
      v26 = *(_DWORD *)(v5 + 24) - 3;
      goto LABEL_26;
    case 2:
        v14 = *(_DWORD *)(v5 + 12) - 1;
        HIDWORD(v48) = *(_DWORD *)(v5 + 28);
LABEL_6:
        LODWORD(v48) = v14;
        v45 = v11;
        goto LABEL_11;
        v26 = *(_DWORD *)(v5 + 12);
LABEL_19:
        v31 = v22 - 1;
      else
        v37 = *(_DWORD *)(v5 + 16);
        v24 = 3;
        v31 = v37 + 1;
LABEL_26:
      v46 = v31;
      v47 = v23 - 3 * (v25 >> 1) + v21 - 1;
      LODWORD(v49) = v26;
      goto LABEL_27;
    case 3:
        v15 = *(_DWORD *)(v5 + 8);
        v16 = *(_DWORD *)(v5 + 16);
        v17 = j_Random::_genRandInt32(v4);
        HIDWORD(v18) = *(_DWORD *)(v5 + 28);
        LODWORD(v18) = *(_DWORD *)(v5 + 12);
        v48 = v18;
        v45 = v16 + 1;
        v19 = v17 % 3 + v15;
        goto LABEL_12;
      v27 = *(_DWORD *)(v5 + 8);
      v28 = *(_DWORD *)(v5 + 16);
      v29 = j_Random::_genRandInt32(v4) % 3 + v27 - 1;
        v24 = 2;
        v30 = *(_DWORD *)(v5 + 12) - 1;
        v24 = 0;
        v30 = *(_DWORD *)(v5 + 24) + 1;
      v46 = v28 - 3;
      v47 = v29;
      LODWORD(v49) = v30;
LABEL_27:
      HIDWORD(v49) = v24;
      goto LABEL_30;
    case 1:
      if ( v10 > 1 )
        *(_QWORD *)&v32 = *(_QWORD *)(v5 + 4);
        v34 = j_Random::_genRandInt32(v4) % 3 + v33 - 1;
        if ( v10 == 2 )
        {
          v35 = 2;
          v36 = *(_DWORD *)(v5 + 12) - 1;
        }
        else
          v35 = 0;
          v36 = *(_DWORD *)(v5 + 24) + 1;
        v46 = v32;
        v47 = v34;
        v49 = *(_QWORD *)&v36;
LABEL_30:
        result = j_MineshaftPiece::generateAndAddPiece(v5, v7, v6, (int)v4, v46, v47, v49, SHIDWORD(v49), v8);
        HIDWORD(v20) = *(_DWORD *)(v5 + 28);
        LODWORD(v20) = *(_DWORD *)(v5 + 12);
        v48 = v20;
        v45 = v11 - 1;
LABEL_11:
        v19 = v12 - 3 * (v13 >> 1) + HIDWORD(v11);
LABEL_12:
        result = j_MineshaftPiece::generateAndAddPiece(v5, v7, v6, (int)v4, v45, v19 - 1, v48, SHIDWORD(v48), v50);
def_1ABAFA0:
      if ( v8 <= 7 )
        if ( (*(_DWORD *)(v5 + 28) | 2) == 2 )
          result = *(_DWORD *)(v5 + 12);
          v39 = result + 6;
          if ( result + 6 <= *(_DWORD *)(v5 + 24) )
          {
            v40 = v8 + 1;
            do
            {
              v41 = j_Random::_genRandInt32(v4);
              if ( v41 % 5 == 1 )
              {
                j_MineshaftPiece::generateAndAddPiece(
                  v5,
                  v7,
                  v6,
                  (int)v4,
                  *(_DWORD *)(v5 + 16) + 1,
                  *(_DWORD *)(v5 + 8),
                  v39 - 3,
                  3,
                  v40);
              }
              else if ( v41 == 5 * (v41 / 5) )
                  *(_QWORD *)(v5 + 4) - 1,
                  *(_QWORD *)(v5 + 4) >> 32,
                  1,
              v39 += 5;
              result = *(_DWORD *)(v5 + 24);
            }
            while ( v39 <= result );
          }
          result = *(_DWORD *)(v5 + 4);
          v42 = result + 6;
          if ( result + 6 <= *(_DWORD *)(v5 + 16) )
            v43 = v8 + 1;
              v44 = j_Random::_genRandInt32(v4);
              if ( v44 % 5 == 1 )
                  v42 - 3,
                  *(_DWORD *)(v5 + 24) + 1,
                  0,
                  v43);
              else if ( v44 == 5 * (v44 / 5) )
                  *(_QWORD *)(v5 + 8),
                  (*(_QWORD *)(v5 + 8) >> 32) - 1,
                  2,
              v42 += 5;
              result = *(_DWORD *)(v5 + 16);
            while ( v42 <= result );
      return result;
    default:
      goto def_1ABAFA0;
  }
}


int __fastcall MineshaftCorridor::MineshaftCorridor(int result, int a2)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_BYTE *)(result + 36) = *(_BYTE *)a2;
  *(_BYTE *)(result + 37) = *(_BYTE *)(a2 + 1);
  *(_BYTE *)(result + 38) = *(_BYTE *)(a2 + 2);
  *(_BYTE *)(result + 39) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(result + 40) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)result = &off_272382C;
  *(_BYTE *)(result + 44) = 0;
  *(_BYTE *)(result + 45) = 0;
  *(_BYTE *)(result + 46) = 0;
  *(_DWORD *)(result + 48) = 0;
  return result;
}


signed int __fastcall MineshaftCorridor::getType(MineshaftCorridor *this)
{
  return 1297302351;
}
