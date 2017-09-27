

signed int __fastcall Weather::canPlaceTopSnow(Weather *this, BlockSource *a2, const BlockPos *a3, int a4, int a5, int *a6)
{
  BlockSource *v6; // r4@1
  const BlockPos *v7; // r5@1
  int v8; // r6@1
  signed int v9; // r0@4
  int *v10; // r9@6
  int v11; // r7@6
  TopSnowBlock *v12; // r0@7
  unsigned __int8 v13; // r1@7
  unsigned int v14; // r11@7
  signed int v21; // r6@11
  int v22; // r0@11
  int v23; // r5@11
  TopSnowBlock *v24; // r0@13
  unsigned __int8 v25; // r1@13
  unsigned int v26; // r0@13
  signed int result; // r0@17
  signed int v28; // r1@17
  int v29; // r1@26
  int v30; // r2@26
  int v31; // r7@26
  int *v32; // r8@26
  int v33; // r1@26
  TopSnowBlock *v34; // r0@27
  unsigned __int8 v35; // r1@27
  signed int v38; // r7@30
  int v39; // r0@30
  int v40; // r5@30
  TopSnowBlock *v41; // r0@32
  unsigned __int8 v42; // r1@32
  unsigned int v43; // r0@32
  int v44; // r0@39
  int *v45; // r6@44
  Material *v46; // r0@47
  signed int v47; // [sp+4h] [bp-4Ch]@11
  int v48; // [sp+8h] [bp-48h]@12
  int v49; // [sp+Ch] [bp-44h]@26
  int v50; // [sp+10h] [bp-40h]@26
  char v51; // [sp+14h] [bp-3Ch]@25
  char v52; // [sp+18h] [bp-38h]@2
  unsigned __int8 v53; // [sp+19h] [bp-37h]@2
  unsigned __int8 v54; // [sp+1Ch] [bp-34h]@31
  int v55; // [sp+20h] [bp-30h]@11
  int v56; // [sp+24h] [bp-2Ch]@11
  int v57; // [sp+28h] [bp-28h]@11

  v6 = a2;
  v7 = a3;
  v8 = a4;
  if ( BlockSource::isSnowTemperature(a2, a3) != 1 )
    return 0;
  j_BlockSource::getBrightnessPair((BlockSource *)&v52, v6, v7);
  if ( v53 > 0xBu )
  if ( v8 == 1 )
  {
    v9 = *((_DWORD *)v7 + 1);
    if ( v9 < 0 || v9 >= *((_WORD *)v6 + 12) )
      return 0;
  }
  v10 = a6;
  v11 = j_BlockSource::getBlock(v6, v7);
  if ( j_Block::isType((Block *)v11, (const Block *)Block::mTopSnow) != 1 )
    if ( j_Block::isType((Block *)v11, (const Block *)Block::mAir)
      || (v51 = *(_BYTE *)(v11 + 4), j_TopSnowBlock::checkIsRecoverableBlock(&v51) == 1) )
    {
      v29 = *((_DWORD *)v7 + 1);
      v30 = *((_DWORD *)v7 + 2);
      v48 = *(_DWORD *)v7;
      v49 = v29 - 1;
      v50 = v30;
      v31 = j_BlockSource::getBlock(v6, (const BlockPos *)&v48);
      v32 = (int *)j_Block::getMaterial((Block *)v31);
      if ( j_Block::hasProperty(v31, v33, 8LL) == 1 )
      {
        v34 = (TopSnowBlock *)j_BlockSource::getData(v6, (const BlockPos *)&v48);
        if ( j_TopSnowBlock::dataIDToHeight(v34, v35) != 8 )
          return 0;
        if ( a5 == 1 )
        {
          _R0 = j_BlockSource::getBiome(v6, v7);
          __asm
          {
            VMOV.F32        S0, #8.0
            VLDR            S2, [R0,#0xD8]
            VMUL.F32        S0, S2, S0
            VCVTR.S32.F32   S0, S0
            VMOV            R8, S0
          }
          if ( _R8 >= 1 )
            v55 = *(_DWORD *)v7;
            v38 = 0;
            v56 = *((_DWORD *)v7 + 1);
            v39 = *((_DWORD *)v7 + 2);
            v40 = _R8 + 1;
            v57 = v39;
            do
            {
              j_BlockSource::getBlockID((BlockSource *)&v54, v6, (int)&v55);
              if ( v54 == *(_BYTE *)(Block::mTopSnow + 4) )
              {
                v41 = (TopSnowBlock *)j_BlockSource::getData(v6, (const BlockPos *)&v55);
                v43 = j_TopSnowBlock::dataIDToHeight(v41, v42);
              }
              else
                if ( v54 != *(_BYTE *)(Block::mSnow + 4) )
                  break;
                v43 = 8;
              --v40;
              v38 += v43;
              --v56;
            }
            while ( v40 > 0 );
            v10 = a6;
            if ( v38 >= _R8 )
              return 0;
        }
      }
      else
        if ( v8 == 1 )
          v44 = *(_BYTE *)(v31 + 4);
          if ( v44 == *(_BYTE *)(Block::mIce + 4)
            || v44 == *(_BYTE *)(Block::mPackedIce + 4)
            || v44 == *(_BYTE *)(Block::mGrassPathBlock + 4) )
            return 0;
        if ( j_Material::isType(v32, 0) || !j_Block::isSolid((Block *)v31) )
          v45 = (int *)j_Block::getMaterial((Block *)v31);
          if ( !j_Material::isType(v45, 7) && !j_Material::isType(v45, 18) && j_Material::isType(v45, 1) != 1 )
        v46 = (Material *)j_BlockSource::getMaterial(v6, *(_QWORD *)v7, (*(_QWORD *)v7 >> 32) - 1, *((_DWORD *)v7 + 2));
        if ( j_Material::getBlocksMotion(v46) != 1 )
      result = 1;
      if ( v10 )
        *v10 = 1;
      return result;
    }
  v12 = (TopSnowBlock *)j_BlockSource::getData(v6, v7);
  v14 = j_TopSnowBlock::dataIDToHeight(v12, v13);
  if ( a6 && v14 == 8 )
  if ( a5 != 1 )
    goto LABEL_57;
  _R0 = j_BlockSource::getBiome(v6, v7);
  __asm
    VMOV.F32        S0, #8.0
    VLDR            S2, [R0,#0xD8]
    VMUL.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
    VMOV            R1, S0
  if ( _R1 < 1 )
LABEL_57:
    if ( !a6 )
      return 1;
LABEL_53:
    *v10 = v14 + 1;
    return 1;
  v55 = *(_DWORD *)v7;
  v21 = 0;
  v56 = *((_DWORD *)v7 + 1);
  v22 = *((_DWORD *)v7 + 2);
  v23 = _R1 + 1;
  v57 = v22;
  v47 = _R1;
  do
    j_BlockSource::getBlockID((BlockSource *)&v48, v6, (int)&v55);
    if ( (unsigned __int8)v48 == *(_BYTE *)(Block::mTopSnow + 4) )
      v24 = (TopSnowBlock *)j_BlockSource::getData(v6, (const BlockPos *)&v55);
      v26 = j_TopSnowBlock::dataIDToHeight(v24, v25);
    else
      if ( (unsigned __int8)v48 != *(_BYTE *)(Block::mSnow + 4) )
        break;
      v26 = 8;
    --v23;
    v21 += v26;
    --v56;
  while ( v23 > 0 );
  result = 0;
  v28 = 0;
  if ( v21 < v47 )
    result = 1;
  if ( !a6 )
    v28 = 1;
  if ( v21 < v47 && !v28 )
    goto LABEL_53;
  return result;
}


int __fastcall Weather::Weather(int a1, Dimension *a2)
{
  int v2; // r4@1
  Dimension *v3; // r6@1
  Level *v4; // r0@1
  Level *v5; // r0@1
  char *v6; // r0@1
  LevelData *v7; // r6@1
  int result; // r0@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_2719914;
  j_PerlinSimplexNoise::PerlinSimplexNoise((PerlinSimplexNoise *)(a1 + 4), 0xB047u, 1);
  j___aeabi_memclr4(v2 + 24, 36);
  *(_DWORD *)(v2 + 60) = v3;
  v4 = (Level *)j_Dimension::getLevel(v3);
  j_Level::addListener(v4, (LevelListener *)v2);
  v5 = (Level *)j_Dimension::getLevel(*(Dimension **)(v2 + 60));
  v6 = j_Level::getLevelData(v5);
  v7 = (LevelData *)v6;
  _R0 = j_LevelData::getRainLevel((LevelData *)v6);
  __asm
  {
    VMOV            S0, R0
    VSTR            S0, [R4,#0x24]
  }
  _R0 = j_LevelData::getLightningLevel(v7);
  __asm { VMOV            S0, R0 }
  result = v2;
  __asm { VSTR            S0, [R4,#0x30] }
  return result;
}


int __fastcall Weather::getLightningLevel(Weather *this, float _R1)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R0,#0x28]
    VMOV            S4, R1
    VLDR            S2, [R0,#0x2C]
    VSUB.F32        S2, S2, S0
    VMUL.F32        S2, S2, S4
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


signed int __fastcall Weather::isSnowingAt(Weather *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  int v6; // r6@1
  signed int result; // r0@6
  int v12; // [sp+0h] [bp-20h]@4
  int v13; // [sp+4h] [bp-1Ch]@4

  v3 = a3;
  v4 = a2;
  _R7 = this;
  v6 = j_BlockSource::getBiome(a2, a3);
  if ( !*(_BYTE *)(v6 + 260) )
    goto LABEL_10;
  __asm
  {
    VLDR            S0, [R7,#0x20]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
  if ( j_BlockSource::canSeeSky(v4, v3) == 1
    && (j_BlockSource::getTopRainBlockPos((BlockSource *)&v12, v4, v3), v13 <= *((_DWORD *)v3 + 1))
    && *(_BYTE *)(v6 + 260) )
    result = BlockSource::isSnowTemperature(v4, v3);
  else
LABEL_10:
    result = 0;
  return result;
}


unsigned int __fastcall Weather::calcLightningCycleTime(Weather *this)
{
  Level *v1; // r0@1
  char *v2; // r0@1

  v1 = (Level *)j_Dimension::getLevel(*((Dimension **)this + 15));
  v2 = j_Level::getRandom(v1);
  return 20 * (j_Random::_genRandInt32((Random *)v2) % 0x258) + 6000;
}


signed int __fastcall Weather::tick(Weather *this)
{
  signed int result; // r0@1
  float *v10; // r2@3
  float *v12; // r2@12
  Level *v13; // r0@20
  Level *v14; // r0@21
  char *v15; // r5@21
  float v16; // [sp+0h] [bp-20h]@13
  float v17; // [sp+4h] [bp-1Ch]@12
  float v18; // [sp+8h] [bp-18h]@4
  float v19; // [sp+Ch] [bp-14h]@3

  _R4 = this;
  result = *((_DWORD *)this + 15);
  if ( *(_BYTE *)(result + 118) )
  {
    ++*((_DWORD *)_R4 + 6);
    _R1 = *((_DWORD *)_R4 + 8);
    *((_DWORD *)_R4 + 7) = _R1;
    _R2 = *((_DWORD *)_R4 + 11);
    *((_DWORD *)_R4 + 10) = _R2;
    __asm
    {
      VMOV            S0, R1
      VLDR            S2, [R4,#0x30]
    }
    _R1 = (int)_R4 + 48;
      VMOV            S4, R2
      VCMPE.F32       S2, S4
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm { VLDR            S6, =-0.01 }
      v10 = &v18;
      __asm
      {
        VADD.F32        S4, S4, S6
        VCMPE.F32       S2, S4
        VSTR            S4, [SP,#0x20+var_18]
      }
    else
      __asm { VLDR            S6, =0.01 }
      v10 = &v19;
        VSTR            S4, [SP,#0x20+var_14]
        VCMPE.F32       S4, S2
      VMOV.F32        S4, #1.0
      VLDR            S2, =0.0
      VMOV.F32        S8, S2
    if ( _NF ^ _VF )
      _R1 = (int)v10;
    __asm { VLDR            S6, [R1] }
    _R1 = (int)_R4 + 36;
      VCMPE.F32       S6, #0.0
      VCMPE.F32       S6, S4
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S8, S6 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S8, S4 }
      VSTR            S8, [R4,#0x2C]
      VLDR            S6, [R4,#0x24]
      VCMPE.F32       S6, S0
      __asm { VLDR            S8, =-0.01 }
      v12 = &v16;
        VADD.F32        S0, S0, S8
        VCMPE.F32       S6, S0
        VSTR            S0, [SP,#0x20+var_20]
      __asm { VLDR            S8, =0.01 }
      v12 = &v17;
        VSTR            S0, [SP,#0x20+var_1C]
        VCMPE.F32       S0, S6
      _R1 = (int)v12;
      VLDR            S0, [R1]
      VCMPE.F32       S0, #0.0
      VCMPE.F32       S0, S4
      __asm { VMOVGT.F32      S2, S0 }
      __asm { VMOVGT.F32      S2, S4 }
    __asm { VSTR            S2, [R4,#0x20] }
    v13 = (Level *)j_Dimension::getLevel((Dimension *)result);
    if ( !j_Level::isClientSide(v13) )
      Weather::serverTick(_R4);
      v14 = (Level *)j_Dimension::getLevel(*((Dimension **)_R4 + 15));
      v15 = j_Level::getLevelData(v14);
      j_LevelData::setRainLevel((LevelData *)v15, *((float *)_R4 + 8));
      j_LevelData::setLightningLevel((LevelData *)v15, *((float *)_R4 + 11));
    result = *((_DWORD *)_R4 + 14);
    if ( result >= 1 )
      *((_DWORD *)_R4 + 14) = --result;
  }
  return result;
}


signed int __fastcall Weather::isRaining(Weather *this)
{
  signed int result; // r0@1

  __asm { VLDR            S0, [R0,#0x20] }
  result = 0;
  __asm
  {
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    result = 1;
  return result;
}


int __fastcall Weather::calcSnowBlockDepth(Weather *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  int v4; // r6@1
  BlockSource *v5; // r4@1
  int v6; // r5@1
  TopSnowBlock *v7; // r0@3
  unsigned __int8 v8; // r1@3
  unsigned int v9; // r0@3
  unsigned __int8 v11; // [sp+0h] [bp-30h]@2
  int v12; // [sp+4h] [bp-2Ch]@1
  int v13; // [sp+8h] [bp-28h]@1
  int v14; // [sp+Ch] [bp-24h]@1

  v4 = a4 + 1;
  v12 = *(_DWORD *)a3;
  v5 = a2;
  v13 = *((_DWORD *)a3 + 1);
  v6 = 0;
  v14 = *((_DWORD *)a3 + 2);
  do
  {
    j_BlockSource::getBlockID((BlockSource *)&v11, v5, (int)&v12);
    if ( v11 == *(_BYTE *)(Block::mTopSnow + 4) )
    {
      v7 = (TopSnowBlock *)j_BlockSource::getData(v5, (const BlockPos *)&v12);
      v9 = j_TopSnowBlock::dataIDToHeight(v7, v8);
    }
    else
      if ( v11 != *(_BYTE *)(Block::mSnow + 4) )
        return v6;
      v9 = 8;
    --v4;
    v6 += v9;
    --v13;
  }
  while ( v4 > 0 );
  return v6;
}


void __fastcall Weather::~Weather(Weather *this)
{
  Weather *v1; // r4@1
  Level *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2719914;
  v2 = (Level *)j_Dimension::getLevel(*((Dimension **)this + 15));
  j_Level::removeListener(v2, v1);
  j_PerlinSimplexNoise::~PerlinSimplexNoise((Weather *)((char *)v1 + 4));
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall Weather::stop(Weather *this)
{
  Weather *v1; // r5@1
  BlockSource *v2; // r0@1
  Level *v3; // r0@1
  Level *v4; // r4@1
  unsigned __int64 *v5; // r0@1
  int result; // r0@1
  int v7; // r1@2
  bool v8; // zf@2
  char *v9; // r6@6
  Level *v10; // r0@6
  char *v11; // r0@6
  unsigned int v12; // r0@6
  Level *v13; // r0@6
  char *v14; // r0@6
  unsigned int v15; // r0@6

  v1 = this;
  v2 = (BlockSource *)Dimension::getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD(*((Dimension **)this + 15));
  v3 = (Level *)j_BlockSource::getLevel(v2);
  v4 = v3;
  v5 = (unsigned __int64 *)j_Level::getGameRules(v3);
  result = j_GameRules::getBool(v5, (int **)&GameRules::DO_WEATHER_CYCLE);
  if ( result == 1 )
  {
    v7 = *((_DWORD *)v1 + 8);
    result = 0x7FFFFFFF;
    v8 = (v7 & 0x7FFFFFFF) == 0;
    if ( !(v7 & 0x7FFFFFFF) )
      v8 = (*((_DWORD *)v1 + 11) & 0x7FFFFFFF) == 0;
    if ( !v8 )
    {
      *((_DWORD *)v1 + 7) = 0;
      *((_DWORD *)v1 + 8) = 0;
      *((_DWORD *)v1 + 9) = 0;
      *((_DWORD *)v1 + 10) = 0;
      *((_DWORD *)v1 + 11) = 0;
      *((_DWORD *)v1 + 12) = 0;
      *((_DWORD *)v1 + 14) = 0;
      result = j_Level::isClientSide(v4);
      if ( !result )
      {
        v9 = j_Level::getLevelData(v4);
        j_LevelData::setLightningLevel((LevelData *)v9, 0.0);
        v10 = (Level *)j_Dimension::getLevel(*((Dimension **)v1 + 15));
        v11 = j_Level::getRandom(v10);
        v12 = j_Random::_genRandInt32((Random *)v11);
        LevelData::setLightningTime((LevelData *)v9, 20 * (v12 % 0x258) + 6000);
        j_LevelData::setRainLevel((LevelData *)v9, 0.0);
        v13 = (Level *)j_Dimension::getLevel(*((Dimension **)v1 + 15));
        v14 = j_Level::getRandom(v13);
        v15 = j_Random::_genRandInt32((Random *)v14);
        LevelData::setRainTime((LevelData *)v9, v15 % 0x29040 + 12000);
        j_Level::broadcastLevelEvent(v4, 3003, (unsigned int)&Vec3::ZERO, 0);
        result = j_Level::broadcastLevelEvent(v4, 3004, (unsigned int)&Vec3::ZERO, 0);
      }
    }
  }
  return result;
}


int __fastcall Weather::levelEvent(int result, int a2, int a3, int _R3)
{
  if ( !(!_ZF & _CF) )
  {
    switch ( a2 )
    {
      case 3001:
        __asm
        {
          VMOV            S0, R3  ; jumptable 0197FEFE case 3001
          VLDR            S2, =0.000015259
          VCVT.F32.S32    S0, S0
          VMUL.F32        S0, S0, S2
          VSTR            S0, [R0,#0x24]
        }
        break;
      case 3003:
        *(_DWORD *)(result + 36) = 0;
      case 3004:
        *(_DWORD *)(result + 48) = 0;
      case 3002:
          VMOV            S0, R3  ; jumptable 0197FEFE case 3002
          VSTR            S0, [R0,#0x30]
    }
  }
  return result;
}


int __fastcall Weather::rebuildTopSnowToDepth(Weather *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  const BlockPos *v4; // r7@1
  int v5; // r6@1
  int v6; // r5@1
  BlockSource *v7; // r10@1
  __int64 v8; // r0@3
  signed int v9; // r7@3
  int v10; // r1@3
  int v11; // r1@3
  int v12; // r8@5
  int v13; // r9@5
  int v14; // r1@5
  int v15; // r7@12
  const BlockPos *v16; // r7@15
  char v17; // r0@17
  int result; // r0@17
  bool v19; // [sp+0h] [bp-58h]@1
  __int16 v20; // [sp+8h] [bp-50h]@21
  char v21; // [sp+Ch] [bp-4Ch]@17
  char v22; // [sp+Dh] [bp-4Bh]@17
  char v23; // [sp+10h] [bp-48h]@13
  char v24; // [sp+11h] [bp-47h]@13
  unsigned __int8 v25; // [sp+14h] [bp-44h]@9
  unsigned __int8 v26; // [sp+18h] [bp-40h]@5
  unsigned __int8 v27; // [sp+1Ch] [bp-3Ch]@3
  int v28; // [sp+20h] [bp-38h]@3
  __int64 v29; // [sp+24h] [bp-34h]@3
  unsigned __int8 v30; // [sp+2Ch] [bp-2Ch]@2
  unsigned __int8 v31; // [sp+30h] [bp-28h]@1

  v4 = a3;
  v5 = a4;
  v6 = *(_QWORD *)a3 >> 32;
  v7 = a2;
  j_BlockSource::getBlockID((BlockSource *)&v31, (int)a2, *(_QWORD *)a3, v6, *((_DWORD *)a3 + 2));
  if ( v31 != BlockID::AIR )
  {
    do
    {
      j_BlockSource::getBlockID((BlockSource *)&v30, (int)v7, *(_DWORD *)v4, ++v6, *((_DWORD *)v4 + 2));
      v31 = v30;
    }
    while ( v30 != BlockID::AIR );
  }
  HIDWORD(v8) = *((_DWORD *)v4 + 2);
  v28 = *(_DWORD *)v4;
  LODWORD(v8) = v6 - 1;
  v29 = v8;
  j_BlockSource::getBlockID((BlockSource *)&v27, v7, (int)&v28);
  v31 = v27;
  v9 = 0;
  if ( j_BlockID::hasProperty(&v31, v10, 8200, 0) == 1 )
    v9 = 0;
      v12 = v31;
      v13 = *(_BYTE *)(Block::mSnow + 4);
      LODWORD(v29) = v29 - 1;
      j_BlockSource::getBlockID((BlockSource *)&v26, v7, (int)&v28);
      v31 = v26;
      if ( v12 == v13 )
        ++v9;
    while ( j_BlockID::hasProperty(&v31, v14, 8200, 0) );
  if ( !j_BlockID::hasProperty(&v31, v11, 8200, 0) )
    v25 = v31;
    if ( !j_TopSnowBlock::checkIsRecoverableBlock(&v25) )
      LODWORD(v29) = v29 + 1;
  if ( v9 >= 1 )
    v15 = v9 + 1;
      v23 = *(_BYTE *)(Block::mSnow + 4);
      v24 = 0;
      j_BlockSource::setBlockAndData((int)v7, (BlockPos *)&v28, (int)&v23, 2, 0);
      --v15;
    while ( v15 > 1 );
  if ( v5 <= 0 )
    result = v29;
  else
      v16 = (const BlockPos *)v5;
      if ( v5 > 8 )
        v16 = (const BlockPos *)8;
      v17 = j_TopSnowBlock::buildData(v7, (BlockSource *)&v28, v16, 0, v19);
      v21 = *(_BYTE *)(Block::mTopSnow + 4);
      v22 = v17;
      j_BlockSource::setBlockAndData((int)v7, (BlockPos *)&v28, (int)&v21, 2, 0);
      v5 -= (signed int)v16;
      result = v29 + 1;
    while ( v5 > 0 );
  for ( ; result < v6; LODWORD(v29) = result )
    v20 = FullBlock::AIR;
    j_BlockSource::setBlockAndData((int)v7, (BlockPos *)&v28, (int)&v20, 2, 0);
    result = v29 + 1;
  return result;
}


signed int __fastcall Weather::tryToPlaceTopSnow(Weather *this, BlockSource *a2, const BlockPos *a3, int a4, int a5)
{
  Weather *v5; // r6@1
  int v6; // r11@1
  const BlockPos *v7; // r5@1
  BlockSource *v8; // r9@1
  Level *v9; // r0@1
  unsigned __int64 *v10; // r0@1
  signed int v11; // r4@1
  signed int v12; // r8@2
  signed int v13; // r10@3
  int v14; // r4@3
  char v15; // r0@17
  char v16; // r0@18
  bool v18; // [sp+0h] [bp-60h]@2
  char v19; // [sp+8h] [bp-58h]@17
  char v20; // [sp+9h] [bp-57h]@17
  char v21; // [sp+Ch] [bp-54h]@18
  char v22; // [sp+Dh] [bp-53h]@18
  int v23; // [sp+10h] [bp-50h]@3
  int v24; // [sp+14h] [bp-4Ch]@3
  int v25; // [sp+18h] [bp-48h]@3
  int v26; // [sp+1Ch] [bp-44h]@3
  int v27; // [sp+20h] [bp-40h]@3
  int v28; // [sp+24h] [bp-3Ch]@3
  int v29; // [sp+28h] [bp-38h]@3
  int v30; // [sp+2Ch] [bp-34h]@3
  int v31; // [sp+30h] [bp-30h]@3
  int v32; // [sp+34h] [bp-2Ch]@3
  int v33; // [sp+38h] [bp-28h]@2

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = (Level *)j_Dimension::getLevel(*((Dimension **)this + 15));
  v10 = (unsigned __int64 *)j_Level::getGameRules(v9);
  v11 = 0;
  if ( j_GameRules::getBool(v10, (int **)&GameRules::DO_WEATHER_CYCLE) == 1 )
  {
    v33 = 0;
    v12 = Weather::canPlaceTopSnow(v5, v8, v7, v6, 1, &v33);
    if ( a5 != 1 )
      goto LABEL_22;
    v26 = *(_DWORD *)v7;
    v27 = *((_DWORD *)v7 + 1);
    v28 = *((_DWORD *)v7 + 2);
    v13 = v33;
    j_BlockPos::neighbor((BlockPos *)&v23, (int)v7, 2);
    v29 = v23;
    v30 = v24;
    v31 = v25;
    v14 = v13 / 2;
    if ( Weather::canPlaceTopSnow(v5, v8, (const BlockPos *)&v29, v6, 1, &v32) == 1
      && v32 < v13
      && (BlockSource::checkIsTopRainBlockPos(v8, (const BlockPos *)&v29) || v32 < v14) )
    {
      v13 = v32;
      v26 = v29;
      v27 = v30;
      v28 = v31;
    }
    j_BlockPos::neighbor((BlockPos *)&v23, (int)v7, 3);
    if ( v26 != *(_DWORD *)v7 || v27 != *((_DWORD *)v7 + 1) || v28 != *((_DWORD *)v7 + 2) )
      v11 = 1;
      v16 = j_TopSnowBlock::buildData(v8, (BlockSource *)&v26, (const BlockPos *)1, 1, v18);
      v21 = *(_BYTE *)(Block::mTopSnow + 4);
      v22 = v16;
      j_BlockSource::setBlockAndData((int)v8, (BlockPos *)&v26, (int)&v21, 2, 0);
    else
LABEL_22:
      v11 = 0;
      if ( v12 == 1 )
      {
        v15 = j_TopSnowBlock::buildData(v8, v7, (const BlockPos *)1, 1, v18);
        v19 = *(_BYTE *)(Block::mTopSnow + 4);
        v20 = v15;
        j_BlockSource::setBlockAndData((int)v8, v7, (int)&v19, 2, 0);
        v11 = 1;
      }
  }
  return v11;
}


unsigned int __fastcall Weather::calcRainDuration(Weather *this)
{
  Level *v1; // r0@1
  char *v2; // r0@1

  v1 = (Level *)j_Dimension::getLevel(*((Dimension **)this + 15));
  v2 = j_Level::getRandom(v1);
  return j_Random::_genRandInt32((Random *)v2) % 0x2EE0 + 12000;
}


int __fastcall Weather::isRainingAt(Weather *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  int v6; // r6@1
  int result; // r0@6
  int v12; // [sp+0h] [bp-20h]@4
  int v13; // [sp+4h] [bp-1Ch]@4

  v3 = a3;
  v4 = a2;
  _R7 = this;
  v6 = j_BlockSource::getBiome(a2, a3);
  if ( !*(_BYTE *)(v6 + 260) )
    goto LABEL_10;
  __asm
  {
    VLDR            S0, [R7,#0x20]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
  if ( j_BlockSource::canSeeSky(v4, v3) == 1
    && (j_BlockSource::getTopRainBlockPos((BlockSource *)&v12, v4, v3), v13 <= *((_DWORD *)v3 + 1))
    && *(_BYTE *)(v6 + 260) )
    result = BlockSource::isSnowTemperature(v4, v3) ^ 1;
  else
LABEL_10:
    result = 0;
  return result;
}


Weather *__fastcall Weather::~Weather(Weather *this)
{
  Weather *v1; // r4@1
  Level *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2719914;
  v2 = (Level *)j_Dimension::getLevel(*((Dimension **)this + 15));
  j_Level::removeListener(v2, v1);
  j_PerlinSimplexNoise::~PerlinSimplexNoise((Weather *)((char *)v1 + 4));
  return v1;
}


void __fastcall Weather::~Weather(Weather *this)
{
  Weather::~Weather(this);
}


int __fastcall Weather::getRainLevel(Weather *this, float _R1)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R0,#0x1C]
    VMOV            S4, R1
    VLDR            S2, [R0,#0x20]
    VSUB.F32        S2, S2, S0
    VMUL.F32        S2, S2, S4
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall Weather::setRainLevel(int result, float a2)
{
  *(float *)(result + 36) = a2;
  return result;
}


int __fastcall Weather::setLightningLevel(int result, float a2)
{
  *(float *)(result + 48) = a2;
  return result;
}


int __fastcall Weather::setSkyFlashTime(int result, int a2)
{
  *(_DWORD *)(result + 56) = a2;
  return result;
}


signed int __fastcall Weather::isPrecipitatingAt(Weather *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r6@1
  int v6; // r5@1
  signed int result; // r0@5
  int v12; // [sp+0h] [bp-20h]@4
  int v13; // [sp+4h] [bp-1Ch]@4

  v3 = a3;
  v4 = a2;
  _R7 = this;
  v6 = j_BlockSource::getBiome(a2, a3);
  if ( !*(_BYTE *)(v6 + 260) )
    goto LABEL_10;
  __asm
  {
    VLDR            S0, [R7,#0x20]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
  if ( j_BlockSource::canSeeSky(v4, v3) == 1
    && (j_BlockSource::getTopRainBlockPos((BlockSource *)&v12, v4, v3), v13 <= *((_DWORD *)v3 + 1)) )
    result = *(_BYTE *)(v6 + 260);
    if ( *(_BYTE *)(v6 + 260) )
      result = 1;
  else
LABEL_10:
    result = 0;
  return result;
}


int __fastcall Weather::setFogLevel(int result, float a2)
{
  *(float *)(result + 52) = a2;
  return result;
}


unsigned int __fastcall Weather::calcRainCycleTime(Weather *this)
{
  Level *v1; // r0@1
  char *v2; // r0@1

  v1 = (Level *)j_Dimension::getLevel(*((Dimension **)this + 15));
  v2 = j_Level::getRandom(v1);
  return j_Random::_genRandInt32((Random *)v2) % 0x29040 + 12000;
}


signed int __fastcall Weather::isLightning(Weather *this)
{
  signed int result; // r0@1

  __asm { VLDR            S0, [R0,#0x2C] }
  result = 0;
  __asm
  {
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    result = 1;
  return result;
}


int __fastcall Weather::serverTick(Weather *this)
{
  Weather *v1; // r4@1
  Level *v2; // r5@1
  char *v3; // r6@1
  unsigned __int64 *v4; // r0@1
  int result; // r0@1
  char *v6; // r0@2
  int v7; // r0@2
  Level *v8; // r0@3
  char *v9; // r0@3
  unsigned int v10; // r0@3
  int v11; // r0@5
  Level *v12; // r0@7
  char *v13; // r0@7
  unsigned int v14; // r0@7
  Level *v15; // r0@9
  char *v16; // r0@9
  unsigned int v17; // r8@9
  char *v18; // r0@9
  char *v19; // r0@9
  int v25; // r8@9
  float v28; // r1@10
  __int64 v29; // r2@10
  float v31; // r1@11
  __int64 v32; // r2@11
  float v34; // r1@11
  __int64 v35; // r2@11

  v1 = this;
  v2 = (Level *)j_Dimension::getLevel(*((Dimension **)this + 15));
  v3 = j_Level::getLevelData(v2);
  v4 = (unsigned __int64 *)j_Level::getGameRules(v2);
  result = j_GameRules::getBool(v4, (int **)&GameRules::DO_WEATHER_CYCLE);
  if ( result == 1 )
  {
    v6 = j_Level::getLevelData(v2);
    v7 = LevelData::getLightningTime((LevelData *)v6);
    if ( v7 > 1 )
    {
      LevelData::setLightningTime((LevelData *)v3, v7 - 1);
    }
    else
      j_LevelData::setLightningLevel((LevelData *)v3, 0.0);
      v8 = (Level *)j_Dimension::getLevel(*((Dimension **)v1 + 15));
      v9 = j_Level::getRandom(v8);
      v10 = j_Random::_genRandInt32((Random *)v9);
      LevelData::setLightningTime((LevelData *)v3, 20 * (v10 % 0x258) + 6000);
      j_Level::broadcastLevelEvent(v2, 3004, (unsigned int)&Vec3::ZERO, 0);
      *((_DWORD *)v1 + 12) = 0;
    v11 = LevelData::getRainTime((LevelData *)v3);
    if ( v11 > 1 )
      result = j_j_j__ZN9LevelData11setRainTimeEi_0((LevelData *)v3, v11 - 1);
    else if ( LevelData::isRaining((LevelData *)v3) == 1 )
      j_LevelData::setRainLevel((LevelData *)v3, 0.0);
      v12 = (Level *)j_Dimension::getLevel(*((Dimension **)v1 + 15));
      v13 = j_Level::getRandom(v12);
      v14 = j_Random::_genRandInt32((Random *)v13);
      LevelData::setRainTime((LevelData *)v3, v14 % 0x29040 + 12000);
      result = j_Level::broadcastLevelEvent(v2, 3003, (unsigned int)&Vec3::ZERO, 0);
      *((_DWORD *)v1 + 9) = 0;
      v15 = (Level *)j_Dimension::getLevel(*((Dimension **)v1 + 15));
      v16 = j_Level::getRandom(v15);
      v17 = j_Random::_genRandInt32((Random *)v16);
      v18 = j_Level::getRandom(v2);
      j_Random::_genRandInt32((Random *)v18);
      v19 = j_Level::getRandom(v2);
      _R0 = j_Random::_genRandInt32((Random *)v19);
      __asm
      {
        VMOV            S0, R0
        VLDR            D1, =2.32830644e-10
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D1
      }
      v25 = v17 % 0x2EE0 + 12000;
      __asm { VCVT.F32.F64    S16, D0 }
      if ( _ZF )
        j_LevelData::setRainLevel((LevelData *)v3, 1.0);
        LevelData::setRainTime((LevelData *)v3, v25);
        __asm
        {
          VLDR            S0, =0.4
          VLDR            S2, =0.3
          VMUL.F32        S0, S16, S0
          VADD.F32        S18, S0, S2
          VMOV            R1, S18
        }
        j_LevelData::setLightningLevel((LevelData *)v3, _R1);
        LevelData::setLightningTime((LevelData *)v3, v25);
        HIDWORD(v32) = j_mce::Math::floor((mce::Math *)0x477FFF00, v31);
        LODWORD(v32) = &Vec3::ZERO;
        j_Level::broadcastLevelEvent(v2, 3001, v32, 0);
          VLDR            S0, =26214.0
          VLDR            S2, =19660.0
          VADD.F32        S0, S0, S2
          VMOV            R0, S0
        HIDWORD(v35) = j_mce::Math::floor(_R0, v34);
        LODWORD(v35) = &Vec3::ZERO;
        result = j_Level::broadcastLevelEvent(v2, 3002, v35, 0);
        *((_DWORD *)v1 + 9) = 1065353216;
        __asm { VSTR            S18, [R4,#0x30] }
      else
          VMOV.F32        S0, #0.5
        j_LevelData::setRainLevel((LevelData *)v3, _R1);
          VLDR            S0, =32768.0
        HIDWORD(v29) = j_mce::Math::floor(_R0, v28);
        LODWORD(v29) = &Vec3::ZERO;
        result = j_Level::broadcastLevelEvent(v2, 3001, v29, 0);
        __asm { VSTR            S18, [R4,#0x24] }
  }
  return result;
}
