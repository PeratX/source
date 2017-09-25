

int __fastcall BlockSource::setBlockAndData(int a1, BlockPos *a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int v7; // [sp+8h] [bp-10h]@1
  char v8; // [sp+Ch] [bp-Ch]@1
  char v9; // [sp+Dh] [bp-Bh]@1

  v8 = *(_BYTE *)a3;
  v9 = *(_BYTE *)(a3 + 1);
  v7 = 0;
  v5 = BlockSource::setBlockAndData(a1, a2, (int)&v8, a4, a5, (int)&v7);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  return v5;
}


int __fastcall BlockSource::fireEntityChanged(BlockSource *this, Entity *a2)
{
  BlockSource *v2; // r5@1
  int v3; // r0@1
  __int64 v4; // r0@1
  unsigned int v5; // r6@5
  char v7; // [sp+4h] [bp-2Ch]@1
  char v8; // [sp+10h] [bp-20h]@1

  v2 = this;
  v3 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 52))(a2);
  BlockPos::BlockPos((int)&v7, v3);
  ChunkPos::ChunkPos((ChunkPos *)&v8, (const BlockPos *)&v7);
  LODWORD(v4) = BlockSource::getChunk(v2, (const ChunkPos *)&v8);
  if ( (_DWORD)v4 )
  {
    if ( !*((_BYTE *)v2 + 8) )
    {
      LOBYTE(v4) = *LevelChunk::getState((LevelChunk *)v4);
      __dmb();
      LODWORD(v4) = (unsigned __int8)v4;
      if ( (unsigned __int8)v4 == 8 )
      {
        v4 = *((_QWORD *)v2 + 5);
        if ( HIDWORD(v4) != (_DWORD)v4 )
        {
          v5 = 0;
          do
          {
            (*(void (**)(void))(**(_DWORD **)(v4 + 4 * v5) + 32))();
            v4 = *((_QWORD *)v2 + 5);
            ++v5;
          }
          while ( v5 < (HIDWORD(v4) - (signed int)v4) >> 2 );
        }
      }
    }
  }
  return v4;
}


int __fastcall BlockSource::getExtraData(BlockSource *this, const BlockPos *a2)
{
  const BlockPos *v2; // r4@1
  BlockSource *v3; // r5@1
  signed int v4; // r0@1
  LevelChunk *v5; // r5@3
  int result; // r0@4
  char v7; // [sp+4h] [bp-1Ch]@4
  char v8; // [sp+8h] [bp-18h]@3

  v2 = a2;
  v3 = this;
  v4 = *((_DWORD *)a2 + 1);
  if ( v4 >= 0
    && v4 < *((_WORD *)v3 + 12)
    && (ChunkPos::ChunkPos((ChunkPos *)&v8, a2),
        (v5 = (LevelChunk *)BlockSource::getChunk(v3, (const ChunkPos *)&v8)) != 0) )
  {
    ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v7, v2);
    result = LevelChunk::getBlockExtraData(v5, (const ChunkBlockPos *)&v7);
  }
  else
    result = 0;
  return result;
}


signed int __fastcall BlockSource::containsAnySolidBlocking(BlockSource *this, const AABB *a2)
{
  BlockSource *v2; // r4@1
  Material *v13; // r0@6
  int v15; // [sp+0h] [bp-58h]@1
  int v16; // [sp+4h] [bp-54h]@2
  int v17; // [sp+8h] [bp-50h]@6
  int v18; // [sp+Ch] [bp-4Ch]@6
  int v19; // [sp+10h] [bp-48h]@6
  float v20; // [sp+14h] [bp-44h]@1
  unsigned __int8 v26; // [sp+30h] [bp-28h]@6

  v2 = this;
  AABB::flooredCeiledCopy((AABB *)&v20, (int)a2);
  __asm
  {
    VLDR            S0, [SP,#0x58+var_44]
    VLDR            S2, [SP,#0x58+var_38]
    VCVTR.S32.F32   S2, S2
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S2
    VMOV            R7, S0
  }
  v15 = _R0;
  if ( _R7 != _R0 )
    while ( 2 )
    {
      __asm
      {
        VLDR            S0, [SP,#0x58+var_3C]
        VLDR            S2, [SP,#0x58+var_30]
        VCVTR.S32.F32   S2, S2
        VCVTR.S32.F32   S0, S0
        VMOV            R0, S2
        VMOV            R6, S0
      }
      v16 = _R0;
      while ( _R6 != _R0 )
        __asm
        {
          VLDR            S0, [SP,#0x58+var_40]
          VLDR            S2, [SP,#0x58+var_34]
          VCVTR.S32.F32   S2, S2
          VCVTR.S32.F32   S0, S0
          VMOV            R8, S2
          VMOV            R10, S0
        }
        if ( _R10 != _R8 )
          do
          {
            v17 = _R7;
            v18 = _R10;
            v19 = _R6;
            BlockSource::getBlockID((BlockSource *)&v26, v2, (int)&v17);
            v13 = (Material *)Block::getMaterial((Block *)Block::mBlocks[v26]);
            if ( Material::isSolidBlocking(v13) )
              return 1;
          }
          while ( _R8 != ++_R10 );
        ++_R6;
        _R0 = v16;
      if ( ++_R7 != v15 )
        continue;
      break;
    }
  return 0;
}


char *__fastcall BlockSource::fetchBorderBlockAABBs(BlockSource *this, const AABB *a2)
{
  return (char *)this + 100;
}


int __fastcall BlockSource::isPositionUnderLiquid(BlockPos *a1, int a2, int a3)
{
  BlockSource *v3; // r5@1
  int v4; // r4@1
  int v5; // r6@1
  int *v6; // r7@1
  signed int v7; // r0@2
  signed int v8; // r6@2
  LiquidBlock *v9; // r0@3
  int v10; // r1@3
  unsigned __int8 v19; // [sp+0h] [bp-18h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  BlockSource::getBlockID((BlockSource *)&v19, a1, a2);
  v6 = (int *)Block::getMaterial((Block *)Block::mBlocks[v19]);
  if ( Material::isLiquid((Material *)v6) == 1 )
  {
    v7 = Material::isType(v6, v5);
    v8 = 0;
    if ( v7 == 1 )
    {
      v9 = (LiquidBlock *)BlockSource::getData(v3, (const BlockPos *)v4);
      _R0 = LiquidBlock::getHeightFromData(v9, v10);
      __asm { VMOV            S2, R0 }
      _R0 = *(_DWORD *)(v4 + 4);
      __asm { VLDR            S0, =0.11111 }
      _R1 = _R0 + 1;
      __asm
      {
        VSUB.F32        S0, S0, S2
        VMOV            S2, R1
        VMOV            S4, R0
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S4, S4
        VADD.F32        S0, S0, S2
        VCMPE.F32       S4, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        v8 = 1;
    }
  }
  else
  return v8;
}


_BOOL4 __fastcall BlockSource::hasBorderBlock(BlockSource *a1, const BlockPos *a2)
{
  BlockSource *v2; // r5@1
  const BlockPos *v3; // r4@1
  LevelChunk *v4; // r5@1
  _BOOL4 result; // r0@2
  char v6; // [sp+4h] [bp-1Ch]@2
  char v7; // [sp+8h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  ChunkPos::ChunkPos((ChunkPos *)&v7, a2);
  v4 = (LevelChunk *)BlockSource::getChunk(v2, (const ChunkPos *)&v7);
  if ( v4 )
  {
    ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v6, v3);
    result = LevelChunk::getBorder(v4, (const ChunkBlockPos *)&v6);
  }
  else
    result = 0;
  return result;
}


signed int __fastcall BlockSource::shouldFireEvents(BlockSource *this, LevelChunk *a2)
{
  signed int v2; // r4@1

  v2 = 0;
  if ( !*((_BYTE *)this + 8) )
  {
    if ( *LevelChunk::getState(a2) == 8 )
      v2 = 1;
    __dmb();
  }
  return v2;
}


LevelChunk *__fastcall BlockSource::updateNeighborsAt(BlockSource *this, const BlockPos *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r6@1
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  int v6; // r0@1
  int v7; // r1@1
  int v8; // r2@1
  int v9; // r1@1
  int v10; // r2@1
  int v11; // r2@1
  int v12; // r2@1
  int v13; // r1@1
  int v14; // r2@1
  int v15; // r1@1
  int v16; // r2@1
  int v18; // [sp+0h] [bp-58h]@1
  int v19; // [sp+4h] [bp-54h]@1
  int v20; // [sp+8h] [bp-50h]@1
  int v21; // [sp+Ch] [bp-4Ch]@1
  int v22; // [sp+10h] [bp-48h]@1
  int v23; // [sp+14h] [bp-44h]@1
  __int64 v24; // [sp+18h] [bp-40h]@1
  int v25; // [sp+20h] [bp-38h]@1
  __int64 v26; // [sp+24h] [bp-34h]@1
  int v27; // [sp+2Ch] [bp-2Ch]@1
  int v28; // [sp+30h] [bp-28h]@1
  int v29; // [sp+34h] [bp-24h]@1
  int v30; // [sp+38h] [bp-20h]@1
  int v31; // [sp+3Ch] [bp-1Ch]@1
  int v32; // [sp+40h] [bp-18h]@1
  int v33; // [sp+44h] [bp-14h]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  v6 = *(_DWORD *)a2;
  v7 = *((_DWORD *)a2 + 1);
  v8 = *((_DWORD *)v3 + 2);
  v31 = v6 - 1;
  v32 = v7;
  v33 = v8;
  BlockSource::neighborChanged(v5, (const BlockPos *)&v31, v4);
  v9 = *((_DWORD *)v3 + 1);
  v10 = *((_DWORD *)v3 + 2);
  v28 = *(_DWORD *)v3 + 1;
  v29 = v9;
  v30 = v10;
  BlockSource::neighborChanged(v5, (const BlockPos *)&v28, v4);
  v11 = *((_DWORD *)v3 + 2);
  v26 = *(_QWORD *)v3;
  v27 = v11 + 1;
  BlockSource::neighborChanged(v5, (const BlockPos *)&v26, v4);
  v12 = *((_DWORD *)v3 + 2);
  v24 = *(_QWORD *)v3;
  v25 = v12 - 1;
  BlockSource::neighborChanged(v5, (const BlockPos *)&v24, v4);
  v13 = *((_DWORD *)v3 + 1);
  v14 = *((_DWORD *)v3 + 2);
  v21 = *(_DWORD *)v3;
  v22 = v13 + 1;
  v23 = v14;
  BlockSource::neighborChanged(v5, (const BlockPos *)&v21, v4);
  v15 = *((_DWORD *)v3 + 1);
  v16 = *((_DWORD *)v3 + 2);
  v18 = *(_DWORD *)v3;
  v19 = v15 - 1;
  v20 = v16;
  return BlockSource::neighborChanged(v5, (const BlockPos *)&v18, v4);
}


int __fastcall BlockSource::shouldSnow(BlockSource *this, const BlockPos *a2)
{
  const BlockPos *v2; // r4@1
  BlockSource *v3; // r5@1
  Biome *v4; // r0@1
  signed int v11; // r0@3
  const ChunkBlockPos *v12; // r6@5
  unsigned int v13; // r0@6
  int result; // r0@11
  unsigned __int8 v15; // [sp+4h] [bp-2Ch]@9
  char v16; // [sp+8h] [bp-28h]@6
  unsigned __int8 v17; // [sp+9h] [bp-27h]@6
  char v18; // [sp+Ch] [bp-24h]@6
  char v19; // [sp+10h] [bp-20h]@5

  v2 = a2;
  v3 = this;
  v4 = (Biome *)BlockSource::getBiome(this, a2);
  _R0 = Biome::getTemperature(v4, v3, v2);
  __asm { VMOV            S0, R0 }
  _R1 = &Biome::RAIN_TEMP_THRESHOLD;
  __asm
  {
    VLDR            S2, [R1]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  result = 0;
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v11 = *((_DWORD *)v2 + 1);
    if ( v11 >= 0 && v11 < *((_WORD *)v3 + 12) )
    {
      ChunkPos::ChunkPos((ChunkPos *)&v19, v2);
      v12 = (const ChunkBlockPos *)BlockSource::getChunk(v3, (const ChunkPos *)&v19);
      if ( v12 )
      {
        ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v18, v2);
        LevelChunk::getBrightness((LevelChunk *)&v16, v12, (int)&v18);
        v13 = v17;
      }
      else
        v16 = *((_BYTE *)v3 + 72);
        v13 = *((_BYTE *)v3 + 73);
        v17 = *((_BYTE *)v3 + 73);
      if ( v13 <= 9 )
        BlockSource::getBlockID((BlockSource *)&v15, v3, (int)v2);
        if ( v15 == *(_BYTE *)(Block::mAir + 4) && (*(int (**)(void))(*(_DWORD *)Block::mTopSnow + 224))() == 1 )
          result = 1;
    }
  return result;
}


int __fastcall BlockSource::getConstBiome(BlockSource *this, const BlockPos *a2)
{
  BlockSource *v2; // r4@1
  int v3; // r0@1
  __int64 v4; // r0@1
  LevelChunk *v5; // r5@1
  int result; // r0@4
  Biome *v7; // r0@5
  int v8; // r1@5
  int v9; // [sp+0h] [bp-28h]@4
  int v10; // [sp+4h] [bp-24h]@1
  __int64 v11; // [sp+8h] [bp-20h]@1
  char v12; // [sp+10h] [bp-18h]@1

  v2 = this;
  v3 = *(_DWORD *)a2;
  HIDWORD(v4) = *((_DWORD *)a2 + 2);
  v10 = v3;
  LODWORD(v4) = 0;
  v11 = v4;
  ChunkPos::ChunkPos((ChunkPos *)&v12, (const BlockPos *)&v10);
  v5 = (LevelChunk *)BlockSource::getChunk(v2, (const ChunkPos *)&v12);
  if ( v5 && (signed int)v11 >= 0 && (signed int)v11 < *((_WORD *)v2 + 12) )
  {
    ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v9, (const BlockPos *)&v10);
    result = LevelChunk::getBiome(v5, (const ChunkBlockPos *)&v9);
  }
  else
    v7 = (Biome *)(*(int (**)(void))(**((_DWORD **)v2 + 5) + 160))();
    result = Biome::getBiome(v7, v8);
  return result;
}


int __fastcall BlockSource::getBrightnessPair(BlockSource *this, const BlockPos *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r5@1
  const BlockPos *v4; // r6@1
  BlockSource *v5; // r4@1
  const ChunkBlockPos *v6; // r7@1
  int result; // r0@2
  char v8; // [sp+4h] [bp-4h]@2
  int v9; // [sp+8h] [bp+0h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  ChunkPos::ChunkPos((ChunkPos *)&v9, a3);
  v6 = (const ChunkBlockPos *)BlockSource::getChunk(v4, (const ChunkPos *)&v9);
  if ( v6 )
  {
    ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v8, v3);
    result = LevelChunk::getBrightness(v5, v6, (int)&v8);
  }
  else
    *(_BYTE *)v5 = *((_BYTE *)v4 + 72);
    result = *((_BYTE *)v4 + 73);
    *((_BYTE *)v5 + 1) = result;
  return result;
}


int __fastcall BlockSource::fireBlockEntityChanged(BlockSource *this, BlockEntity *a2)
{
  BlockSource *v2; // r5@1
  char *v3; // r0@1
  __int64 v4; // r0@1
  LevelChunk *v5; // r6@1
  unsigned int v6; // r6@5
  int v8; // [sp+0h] [bp-18h]@1

  v2 = this;
  v3 = BlockEntity::getPosition(a2);
  ChunkPos::ChunkPos((ChunkPos *)&v8, (const BlockPos *)v3);
  LODWORD(v4) = BlockSource::getChunk(v2, (const ChunkPos *)&v8);
  v5 = (LevelChunk *)v4;
  if ( (_DWORD)v4 )
  {
    LODWORD(v4) = *((_BYTE *)v2 + 8);
    if ( !*((_BYTE *)v2 + 8) )
    {
      LOBYTE(v4) = *LevelChunk::getState(v5);
      __dmb();
      LODWORD(v4) = (unsigned __int8)v4;
      if ( (unsigned __int8)v4 == 8 )
      {
        LevelChunk::onBlockEntityChanged(v5);
        v4 = *((_QWORD *)v2 + 5);
        if ( HIDWORD(v4) != (_DWORD)v4 )
        {
          v6 = 0;
          do
          {
            (*(void (**)(void))(**(_DWORD **)(v4 + 4 * v6) + 28))();
            v4 = *((_QWORD *)v2 + 5);
            ++v6;
          }
          while ( v6 < (HIDWORD(v4) - (signed int)v4) >> 2 );
        }
      }
    }
  }
  return v4;
}


int __fastcall BlockSource::getBlock(BlockSource *this, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-18h]@1
  int v6; // [sp+4h] [bp-14h]@1
  int v7; // [sp+8h] [bp-10h]@1
  unsigned __int8 v8; // [sp+Ch] [bp-Ch]@1

  v5 = a2;
  v6 = a3;
  v7 = a4;
  BlockSource::getBlockID((BlockSource *)&v8, this, (int)&v5);
  return Block::mBlocks[v8];
}


int __fastcall BlockSource::getBlockID(BlockSource *this, const BlockPos *a2, int a3)
{
  const BlockPos *v3; // r5@1
  BlockSource *v4; // r4@1
  signed int v5; // r0@1
  BlockSource *v6; // r6@1
  int v7; // r6@3
  unsigned int v8; // r0@4
  int v9; // r0@5
  int result; // r0@6
  void **v11; // r0@7
  unsigned __int16 v12; // [sp+4h] [bp-24h]@4
  __int16 v13; // [sp+6h] [bp-22h]@4
  char v14; // [sp+8h] [bp-20h]@3

  v3 = (const BlockPos *)a3;
  v4 = this;
  v5 = *(_DWORD *)(a3 + 4);
  v6 = a2;
  if ( v5 < 0 || v5 >= *((_WORD *)a2 + 12) )
  {
    v11 = &BlockID::AIR;
LABEL_8:
    result = *(_BYTE *)*v11;
    goto LABEL_9;
  }
  ChunkPos::ChunkPos((ChunkPos *)&v14, (const BlockPos *)a3);
  v7 = BlockSource::getChunk(v6, (const ChunkPos *)&v14);
  if ( !v7 )
    goto LABEL_8;
  ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v12, v3);
  v8 = v13 >> 4;
  if ( v8 >= *(_DWORD *)(v7 + 140) )
  v9 = *(_DWORD *)(v7 + 4 * v8 + 76);
  if ( !v9 )
  result = *(_BYTE *)(v9 + (unsigned __int16)((v13 & 0xF | (v12 >> 4) & 0xFF0) + (v12 << 8)));
LABEL_9:
  *(_BYTE *)v4 = result;
  return result;
}


int __fastcall BlockSource::hasBlock(BlockSource *this, int a2, int a3, int a4)
{
  BlockSource *v4; // r4@1
  LevelChunk *v5; // r0@1
  LevelChunk *v6; // r4@1
  int result; // r0@3
  int v8; // [sp+4h] [bp-24h]@1
  int v9; // [sp+8h] [bp-20h]@1
  int v10; // [sp+Ch] [bp-1Ch]@1
  char v11; // [sp+10h] [bp-18h]@1

  v4 = this;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  ChunkPos::ChunkPos((ChunkPos *)&v11, (const BlockPos *)&v8);
  v5 = (LevelChunk *)BlockSource::getChunk(v4, (const ChunkPos *)&v11);
  v6 = v5;
  if ( v5 && *(_QWORD *)LevelChunk::getPosition(v5) != *(_QWORD *)&ChunkPos::INVALID )
    result = LevelChunk::isReadOnly(v6) ^ 1;
  else
    result = 0;
  return result;
}


_BOOL4 __fastcall BlockSource::isSolidBlockingBlock(BlockSource *this, int a2, int a3, int a4)
{
  int v4; // r4@1
  Material *v5; // r0@1
  int v6; // r1@1
  _BOOL4 result; // r0@2
  int v8; // r1@3
  int v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+4h] [bp-14h]@1
  int v11; // [sp+8h] [bp-10h]@1
  unsigned __int8 v12; // [sp+Ch] [bp-Ch]@1

  v9 = a2;
  v10 = a3;
  v11 = a4;
  BlockSource::getBlockID((BlockSource *)&v12, this, (int)&v9);
  v4 = Block::mBlocks[v12];
  v5 = (Material *)Block::getMaterial((Block *)Block::mBlocks[v12]);
  if ( Material::isSolidBlocking(v5) == 1 )
  {
    if ( Block::hasProperty(v4, v6, 0x200000LL) )
      result = 1;
    else
      result = Block::hasProperty(v4, v8, 0x100000LL);
  }
  else
    result = 0;
  return result;
}


int __fastcall BlockSource::fireAreaChanged(BlockSource *this, const BlockPos *a2, const BlockPos *a3)
{
  BlockSource *v3; // r6@1
  __int64 v4; // r0@1
  unsigned int v5; // r7@2

  v3 = this;
  v4 = *((_QWORD *)this + 5);
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    v5 = 0;
    do
    {
      (*(void (**)(void))(**(_DWORD **)(v4 + 4 * v5) + 16))();
      v4 = *((_QWORD *)v3 + 5);
      ++v5;
    }
    while ( v5 < (HIDWORD(v4) - (signed int)v4) >> 2 );
  }
  return v4;
}


char *__fastcall BlockSource::addListener(BlockSource *this, BlockSourceListener *a2)
{
  BlockSource *v2; // r4@1
  BlockSourceListener *v3; // r6@1
  char *result; // r0@1
  _BYTE *v5; // r5@1
  __int64 v6; // kr00_8@1
  signed int v7; // r12@1
  int v8; // r2@1
  signed int v9; // r3@1
  int v10; // r7@2
  bool v11; // zf@3
  char *v12; // r3@3
  BlockSourceListener *v13; // r1@6
  bool v14; // zf@6
  signed int v15; // r3@11
  unsigned int v16; // r1@23
  char *v17; // r8@23
  unsigned int v18; // r2@25
  unsigned int v19; // r7@25
  char *v20; // r6@32
  int v21; // r6@34

  v2 = this;
  v3 = a2;
  v6 = *((_QWORD *)this + 5);
  result = (char *)(*((_QWORD *)this + 5) >> 32);
  v5 = (_BYTE *)v6;
  v7 = (signed int)&result[-v6];
  v8 = v6;
  v9 = (signed int)&result[-v6] >> 4;
  if ( v9 >= 1 )
  {
    v10 = v9 + 1;
    v8 = v6;
    do
    {
      v11 = *(_DWORD *)v8 == (_DWORD)v3;
      v12 = (char *)v8;
      if ( *(BlockSourceListener **)v8 != v3 )
      {
        v12 = (char *)(v8 + 4);
        v11 = *(_DWORD *)(v8 + 4) == (_DWORD)v3;
      }
      if ( v11 )
        break;
      v12 = (char *)(v8 + 8);
      v13 = *(BlockSourceListener **)(v8 + 8);
      v14 = v13 == v3;
      if ( v13 != v3 )
        v12 = (char *)(v8 + 12);
        v14 = *(_DWORD *)(v8 + 12) == (_DWORD)v3;
      if ( v14 )
      --v10;
      v8 += 16;
    }
    while ( v10 > 1 );
LABEL_20:
    if ( v12 != result )
      return result;
    goto LABEL_21;
  }
  if ( 1 == (signed int)&result[-v8] >> 2 )
    v12 = (char *)v8;
  else
    v15 = (signed int)&result[-v8] >> 2;
    if ( v15 == 2 )
    else
      if ( v15 != 3 )
        goto LABEL_21;
      if ( *(BlockSourceListener **)v8 == v3 )
        goto LABEL_20;
      v12 = (char *)(v8 + 4);
    if ( *(BlockSourceListener **)v12 == v3 )
      goto LABEL_20;
    v12 += 4;
  if ( *(BlockSourceListener **)v12 == v3 )
    goto LABEL_20;
LABEL_21:
  if ( result == *((char **)v2 + 12) )
    v16 = v7 >> 2;
    v17 = 0;
    if ( !(v7 >> 2) )
      v16 = 1;
    v18 = v16 + (v7 >> 2);
    v19 = v16 + (v7 >> 2);
    if ( 0 != v18 >> 30 )
      v19 = 0x3FFFFFFF;
    if ( v18 < v16 )
    if ( v19 )
      if ( v19 >= 0x40000000 )
        sub_21E57F4();
      v17 = (char *)operator new(4 * v19);
      result = (char *)(*((_QWORD *)v2 + 5) >> 32);
      v5 = (_BYTE *)*((_QWORD *)v2 + 5);
    *(_DWORD *)&v17[result - v5] = v3;
    v20 = &v17[result - v5];
    if ( 0 != (result - v5) >> 2 )
      _aeabi_memmove4(v17, v5);
    v21 = (int)(v20 + 4);
    if ( v5 )
      operator delete(v5);
    result = &v17[4 * v19];
    *((_DWORD *)v2 + 10) = v17;
    *((_DWORD *)v2 + 11) = v21;
    *((_DWORD *)v2 + 12) = result;
    *(_DWORD *)result = v3;
    result = (char *)(*((_DWORD *)v2 + 11) + 4);
    *((_DWORD *)v2 + 11) = result;
  return result;
}


int __fastcall BlockSource::_getSkyDarken(int result, int a2)
{
  if ( *(_BYTE *)(a2 + 9) )
    result = Dimension::getSkyDarken((Dimension *)result, *(_DWORD *)(a2 + 20));
  else
    *(_BYTE *)result = Brightness::MIN;
  return result;
}


signed int __fastcall BlockSource::_getBlockPermissions(BlockSource *this, const BlockPos *a2, int a3)
{
  const BlockPos *v3; // r6@1
  BlockSource *v4; // r5@1
  signed int v5; // r0@1
  int v6; // r9@1
  LevelChunk *v7; // r7@2
  Block *v8; // r6@7
  int *v9; // r0@7
  int *v10; // r0@8
  int v11; // r0@9
  int v13; // [sp+0h] [bp-38h]@2
  int v14; // [sp+4h] [bp-34h]@6
  int v15; // [sp+8h] [bp-30h]@6
  int v16; // [sp+Ch] [bp-2Ch]@2
  signed int v17; // [sp+10h] [bp-28h]@2
  int v18; // [sp+14h] [bp-24h]@2
  unsigned __int8 v19; // [sp+18h] [bp-20h]@3

  v3 = a2;
  v4 = this;
  v5 = *((_DWORD *)a2 + 1);
  v6 = a3;
  if ( v5 >= *((_WORD *)v4 + 12) )
  {
    v6 = 0;
  }
  else
    v16 = *(_DWORD *)a2;
    v17 = v5;
    v18 = *((_DWORD *)a2 + 2);
    ChunkPos::ChunkPos((ChunkPos *)&v13, (const BlockPos *)&v16);
    v7 = (LevelChunk *)BlockSource::getChunk(v4, (const ChunkPos *)&v13);
    if ( v7
      && (ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v19, (const BlockPos *)&v16),
          LevelChunk::getBorder(v7, (const ChunkBlockPos *)&v19)) )
    {
      v6 = 0;
    }
    else
      v13 = *(_DWORD *)v3;
      v14 = *((_DWORD *)v3 + 1);
      v15 = *((_DWORD *)v3 + 2);
      if ( v14 >= 0 )
      {
        while ( 1 )
        {
          BlockSource::getBlockID((BlockSource *)&v19, v4, (int)&v13);
          v8 = (Block *)Block::mBlocks[v19];
          v9 = (int *)Block::getMaterial((Block *)Block::mBlocks[v19]);
          if ( Material::isType(v9, 33) )
            return 1;
          v10 = (int *)Block::getMaterial(v8);
          if ( Material::isType(v10, 34) )
            break;
          v11 = v14--;
          if ( v11 <= 0 )
            return v6;
        }
        v6 = 0;
      }
  return v6;
}


int __fastcall BlockSource::getAllocatedHeightAt(BlockSource *this, const BlockPos *a2)
{
  BlockSource *v2; // r4@1
  int v3; // r0@1
  int result; // r0@2
  int v5; // [sp+0h] [bp-18h]@1

  v2 = this;
  ChunkPos::ChunkPos((ChunkPos *)&v5, a2);
  v3 = BlockSource::getChunk(v2, (const ChunkPos *)&v5);
  if ( v3 )
    result = 16 * *(_DWORD *)(v3 + 140);
  else
    LOWORD(result) = 0;
  return (signed __int16)result;
}


signed int __fastcall BlockSource::hasChunksAt(BlockSource *this, const AABB *a2)
{
  const AABB *v2; // r5@1
  BlockSource *v3; // r4@1
  int v4; // r6@1
  int v5; // r11@1
  int v6; // r7@1
  int v7; // r5@1
  int v8; // r8@1
  bool v9; // nf@2
  unsigned __int8 v10; // vf@2
  int v11; // r10@4
  int v13; // [sp+0h] [bp-50h]@1
  int v14; // [sp+4h] [bp-4Ch]@1
  int v15; // [sp+8h] [bp-48h]@1
  int v16; // [sp+10h] [bp-40h]@1
  char v17; // [sp+14h] [bp-3Ch]@1
  int v18; // [sp+1Ch] [bp-34h]@1
  int v19; // [sp+20h] [bp-30h]@6
  int v20; // [sp+24h] [bp-2Ch]@6

  v2 = a2;
  v3 = this;
  v4 = 0;
  BlockPos::BlockPos((BlockPos *)&v17, *(float *)a2, 0.0, *((float *)a2 + 2));
  BlockPos::BlockPos((BlockPos *)&v15, *((float *)v2 + 3), 0.0, *((float *)v2 + 5));
  ChunkSource::getChunkSide(*((ChunkSource **)v3 + 4));
  v5 = *(_DWORD *)&v17 >> 4;
  v14 = v16 >> 4;
  v6 = ((v16 >> 4) + 1 - (v18 >> 4)) * ((v15 >> 4) + 1 - (*(_DWORD *)&v17 >> 4));
  v7 = v15 >> 4;
  v8 = v18 >> 4;
  v13 = v18 >> 4;
LABEL_4:
  v11 = v5;
  while ( 1 )
  {
    if ( v6 == v4 )
      return 1;
    v19 = v11;
    v20 = v8;
    if ( !BlockSource::getChunk(v3, (const ChunkPos *)&v19) )
      return 0;
    ++v4;
    v10 = __OFSUB__(v11, v7);
    v9 = v11++ - v7 < 0;
    if ( !(v9 ^ v10) )
    {
      v10 = __OFSUB__(v8, v14);
      v9 = v8++ - v14 < 0;
      if ( !(v9 ^ v10) )
        v8 = v13;
      goto LABEL_4;
    }
  }
}


int __fastcall BlockSource::setBlockAndDataNoUpdate(int a1, int a2, int a3, int a4, int a5)
{
  char v5; // r2@1
  int v6; // r4@1
  int v8; // [sp+Ch] [bp-1Ch]@1
  int v9; // [sp+10h] [bp-18h]@1
  int v10; // [sp+14h] [bp-14h]@1
  int v11; // [sp+18h] [bp-10h]@1
  char v12; // [sp+1Ch] [bp-Ch]@1
  char v13; // [sp+1Dh] [bp-Bh]@1

  v8 = a2;
  v9 = a3;
  v10 = a4;
  v5 = *(_BYTE *)(a5 + 1);
  v12 = *(_BYTE *)a5;
  v13 = v5;
  v11 = 0;
  v6 = BlockSource::setBlockAndData(a1, (BlockPos *)&v8, (int)&v12, 4, 0, (int)&v11);
  if ( v11 )
    (*(void (**)(void))(*(_DWORD *)v11 + 4))();
  return v6;
}


int __fastcall BlockSource::getHeightmap(BlockSource *this, const BlockPos *a2)
{
  BlockSource *v2; // r5@1
  const BlockPos *v3; // r4@1
  LevelChunk *v4; // r5@1
  int result; // r0@2
  char v6; // [sp+4h] [bp-1Ch]@2
  char v7; // [sp+8h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ChunkPos::ChunkPos((ChunkPos *)&v7, a2);
  v4 = (LevelChunk *)BlockSource::getChunk(v2, (const ChunkPos *)&v7);
  if ( v4 )
  {
    ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v6, v3);
    result = LevelChunk::getHeightmap(v4, (const ChunkBlockPos *)&v6);
  }
  else
    result = 0;
  return result;
}


signed int __fastcall BlockSource::checkIsTopRainBlockPos(BlockSource *this, const BlockPos *a2)
{
  BlockSource *v2; // r5@1
  const BlockPos *v3; // r4@1
  const ChunkBlockPos *v4; // r5@1
  signed int result; // r0@3
  int v6; // [sp+0h] [bp-28h]@2
  int v7; // [sp+4h] [bp-24h]@2
  int v8; // [sp+8h] [bp-20h]@3
  int v9; // [sp+Ch] [bp-1Ch]@4
  char v10; // [sp+10h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ChunkPos::ChunkPos((ChunkPos *)&v10, a2);
  v4 = (const ChunkBlockPos *)BlockSource::getChunk(v2, (const ChunkPos *)&v10);
  if ( v4
    && (ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v6, v3),
        LevelChunk::getTopRainBlockPos((LevelChunk *)&v7, v4, &v6),
        *(_DWORD *)v3 == v7) )
  {
    result = 0;
    if ( *((_DWORD *)v3 + 1) == v8 && *((_DWORD *)v3 + 2) == v9 )
      result = 1;
  }
  else
  return result;
}


int __fastcall BlockSource::getChunkAt(BlockSource *this, int a2, int a3, int a4)
{
  BlockSource *v4; // r4@1
  int v6; // [sp+4h] [bp-24h]@1
  int v7; // [sp+8h] [bp-20h]@1
  int v8; // [sp+Ch] [bp-1Ch]@1
  char v9; // [sp+10h] [bp-18h]@1

  v4 = this;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  ChunkPos::ChunkPos((ChunkPos *)&v9, (const BlockPos *)&v6);
  return BlockSource::getChunk(v4, (const ChunkPos *)&v9);
}


signed int __fastcall BlockSource::canSeeSky(BlockSource *this, const BlockPos *a2)
{
  const BlockPos *v2; // r4@1
  BlockSource *v3; // r5@1
  signed int v4; // r0@1
  LevelChunk *v5; // r5@3
  char v7; // [sp+4h] [bp-1Ch]@4
  char v8; // [sp+8h] [bp-18h]@3

  v2 = a2;
  v3 = this;
  v4 = *((_DWORD *)a2 + 1);
  if ( v4 >= *((_WORD *)v3 + 12) )
    return 1;
  if ( v4 >= 0 )
  {
    ChunkPos::ChunkPos((ChunkPos *)&v8, a2);
    v5 = (LevelChunk *)BlockSource::getChunk(v3, (const ChunkPos *)&v8);
    if ( v5 )
    {
      ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v7, v2);
      return LevelChunk::isSkyLit(v5, (const ChunkBlockPos *)&v7);
    }
  }
  return 0;
}


int __fastcall BlockSource::blockEvent(BlockSource *this, const BlockPos *a2, int a3, int a4)
{
  BlockSource *v4; // r6@1
  __int64 v5; // r10@1
  int v6; // r5@1
  int v7; // r0@2
  void (__cdecl *v8)(int); // r7@2
  __int64 v9; // r0@3
  unsigned int v10; // r7@4
  __int64 v12; // [sp+10h] [bp-40h]@2
  int v13; // [sp+18h] [bp-38h]@2
  unsigned __int8 v14; // [sp+1Ch] [bp-34h]@1
  __int64 v15; // [sp+20h] [bp-30h]@1
  int v16; // [sp+28h] [bp-28h]@1

  v4 = this;
  v5 = *(_QWORD *)a2;
  v6 = *((_DWORD *)a2 + 2);
  v15 = *(_QWORD *)a2;
  v16 = v6;
  BlockSource::getBlockID((BlockSource *)&v14, this, (int)&v15);
  if ( v14 )
  {
    v7 = Block::mBlocks[v14];
    v8 = *(void (__cdecl **)(int))(*(_DWORD *)v7 + 336);
    v12 = v5;
    v13 = v6;
    v8(v7);
  }
  v9 = *((_QWORD *)v4 + 5);
  if ( HIDWORD(v9) != (_DWORD)v9 )
    v10 = 0;
    do
    {
      (*(void (__cdecl **)(_DWORD, BlockSource *, _DWORD))(**(_DWORD **)(v9 + 4 * v10) + 40))(
        *(_DWORD *)(v9 + 4 * v10),
        v4,
        v5);
      v9 = *((_QWORD *)v4 + 5);
      ++v10;
    }
    while ( v10 < (HIDWORD(v9) - (signed int)v9) >> 2 );
  return v9;
}


signed int __fastcall BlockSource::isSnowTemperature(BlockSource *this, const BlockPos *a2)
{
  const BlockPos *v2; // r4@1
  BlockSource *v3; // r5@1
  Biome *v4; // r0@1
  signed int result; // r0@1

  v2 = a2;
  v3 = this;
  v4 = (Biome *)BlockSource::getBiome(this, a2);
  _R0 = Biome::getTemperature(v4, v3, v2);
  __asm { VMOV            S0, R0 }
  result = 0;
  _R1 = &Biome::RAIN_TEMP_THRESHOLD;
  __asm
  {
    VLDR            S2, [R1]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    result = 1;
  return result;
}


signed int __fastcall BlockSource::_isIceAt(BlockSource *this, const BlockPos *a2)
{
  const BlockPos *v2; // r4@1
  BlockSource *v3; // r5@1
  int *v4; // r0@1
  signed int result; // r0@2
  int *v6; // r0@3
  unsigned __int8 v7; // [sp+0h] [bp-18h]@1
  unsigned __int8 v8; // [sp+4h] [bp-14h]@3

  v2 = a2;
  v3 = this;
  BlockSource::getBlockID((BlockSource *)&v7, this, (int)a2);
  v4 = (int *)Block::getMaterial((Block *)Block::mBlocks[v7]);
  if ( Material::isType(v4, 18) )
  {
    result = 1;
  }
  else
    BlockSource::getBlockID((BlockSource *)&v8, v3, (int)v2);
    v6 = (int *)Block::getMaterial((Block *)Block::mBlocks[v8]);
    result = Material::isType(v6, 1);
  return result;
}


  if ( BlockSource::getChunk(v5, (const ChunkPos *)v6) )
{
  v7 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 52))(v3);
  ChunkPos::ChunkPos((int)&v13, v7);
  v8 = LevelChunk::getPosition(*v2);
  v9 = v2[2];
  v10 = (*(_QWORD *)v8 - v13) * (*(_QWORD *)v8 - v13) + ((*(_QWORD *)v8 >> 32) - v14) * ((*(_QWORD *)v8 >> 32) - v14);
  v11 = *(_DWORD *)v9;
  if ( v10 < *(_DWORD *)v9 )
    v11 = v10;
  result = 1;
  *(_DWORD *)v9 = v11;
  return result;
}


int __fastcall BlockSource::getAboveTopSolidBlock(BlockSource *this, const BlockPos *a2, int a3, int a4)
{
  BlockSource *v4; // r6@1
  int v5; // r5@1
  int v6; // r8@1
  const BlockPos *v7; // r4@1
  LevelChunk *v8; // r7@1
  int v9; // r0@2
  int result; // r0@2
  char v11; // [sp+4h] [bp-4h]@2
  int v12; // [sp+8h] [bp+0h]@1

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  ChunkPos::ChunkPos((ChunkPos *)&v12, a2);
  v8 = (LevelChunk *)BlockSource::getChunk(v4, (const ChunkPos *)&v12);
  if ( v8 )
  {
    ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v11, v7);
    v9 = (*(int (**)(void))(**((_DWORD **)v4 + 5) + 192))();
    LOWORD(result) = LevelChunk::getAboveTopSolidBlock(v8, (const ChunkBlockPos *)&v11, v9, v6, v5);
  }
  else
    LOWORD(result) = *(_WORD *)(*((_DWORD *)v4 + 5) + 120);
  return (signed __int16)result;
}


signed int __fastcall BlockSource::hasChunksAt(BlockSource *this, int a2, int a3, int a4, int a5)
{
  BlockSource *v5; // r4@1
  int v6; // r5@1
  int v7; // r6@1
  signed int v8; // r1@1
  signed int v9; // r2@1
  int v10; // r0@1
  int v11; // r6@1
  signed int v12; // r7@1
  int v13; // r10@1
  int v14; // r5@1
  int v15; // r8@1
  bool v16; // nf@2
  unsigned __int8 v17; // vf@2
  int v18; // r9@4
  int v20; // [sp+0h] [bp-38h]@1
  int v21; // [sp+4h] [bp-34h]@1
  int v22; // [sp+8h] [bp-30h]@6
  int v23; // [sp+Ch] [bp-2Ch]@6

  v5 = this;
  v6 = a4;
  v7 = a2;
  ChunkSource::getChunkSide(*((ChunkSource **)this + 4));
  v8 = v7 - a5;
  v9 = a5 + v7;
  v21 = (a5 + v6) >> 4;
  v10 = (v6 - a5) >> 4;
  v11 = (v21 + 1 - v10) * (((a5 + v7) >> 4) + 1 - ((v7 - a5) >> 4));
  v12 = v9 >> 4;
  v13 = v8 >> 4;
  v14 = 0;
  v15 = v10;
  v20 = v10;
LABEL_4:
  v18 = v13;
  while ( 1 )
  {
    if ( v11 == v14 )
      return 1;
    v22 = v18;
    v23 = v15;
    if ( !BlockSource::getChunk(v5, (const ChunkPos *)&v22) )
      return 0;
    ++v14;
    v17 = __OFSUB__(v18, v12);
    v16 = v18++ - v12 < 0;
    if ( !(v16 ^ v17) )
    {
      v17 = __OFSUB__(v15, v21);
      v16 = v15++ - v21 < 0;
      if ( !(v16 ^ v17) )
        v15 = v20;
      goto LABEL_4;
    }
  }
}


int __fastcall BlockSource::getBrightness(BlockSource *this, const BlockPos *a2)
{
  BlockSource *v2; // r4@1
  Dimension *v3; // r0@1
  int v4; // r4@1
  unsigned __int8 v6; // [sp+4h] [bp-Ch]@1

  v2 = this;
  BlockSource::getRawBrightness((BlockSource *)&v6, this, (int)a2, 1);
  v3 = (Dimension *)*((_DWORD *)v2 + 5);
  v4 = v6;
  return *(_DWORD *)&Dimension::getBrightnessRamp(v3)[2 * v4];
}


int __fastcall BlockSource::getSeenPercent(BlockSource *this, const Vec3 *a2, const AABB *a3)
{
  BlockSource *v4; // r6@1
  const Vec3 *v5; // r10@1
  float v6; // r1@1
  float v14; // r1@3
  int v16; // r0@6
  int result; // r0@15
  int v20; // [sp+10h] [bp-B8h]@9
  float v21; // [sp+54h] [bp-74h]@9

  _R4 = a3;
  v4 = this;
  v5 = a2;
  if ( AABB::contains(a3, a2) )
  {
    __asm { VMOV.F32        S0, #1.0 }
  }
  else
    __asm
    {
      VLDR            S0, [R4]
      VMOV.F32        S16, #1.0
      VLDR            S4, [R4,#0xC]
      VLDR            S2, [R4,#8]
      VSUB.F32        S0, S4, S0
      VLDR            S6, [R4,#0x14]
      VLDR            S20, [R4,#4]
      VSUB.F32        S2, S6, S2
      VLDR            S24, [R4,#0x10]
      VADD.F32        S0, S0, S0
      VADD.F32        S2, S2, S2
      VADD.F32        S0, S0, S16
      VADD.F32        S22, S2, S16
      VMOV            R0, S0
      VDIV.F32        S18, S16, S0
      VMOV            R7, S22
    }
    _R0 = mce::Math::floor(_R0, v6);
      VMOV            S0, R0
      VCVT.F32.S32    S26, S0
    _R0 = mce::Math::floor(_R7, v14);
      VCMPE.F32       S18, #0.0
      VCVT.F32.S32    S2, S0
      VLDR            S0, =0.0
      VMRS            APSR_nzcv, FPSCR
    if ( !(_NF ^ _VF) )
      __asm
      {
        VSUB.F32        S4, S24, S20
        VADD.F32        S4, S4, S4
        VADD.F32        S4, S4, S16
        VDIV.F32        S20, S16, S4
        VCMPE.F32       S20, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !(_NF ^ _VF) )
        __asm
        {
          VDIV.F32        S22, S16, S22
          VCMPE.F32       S22, #0.0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !(_NF ^ _VF) )
          __asm
          {
            VMUL.F32        S0, S26, S18
            VLDR            S28, =0.0
            VMUL.F32        S2, S22, S2
            VLDR            S30, =0.1
            VMOV.F32        S4, #0.5
            VMOV.F32        S17, S28
          }
          v16 = 200;
          _R5 = 0;
          _R11 = 0;
            VSUB.F32        S0, S16, S0
            VSUB.F32        S2, S16, S2
            VMUL.F32        S24, S0, S4
            VMUL.F32        S26, S2, S4
          do
            __asm { VMOV.F32        S19, S28 }
            do
            {
              __asm { VMOV.F32        S21, S28 }
              do
              {
                __asm
                {
                  VLDR            S0, [R4]
                  VLDR            S6, [R4,#0xC]
                  VLDR            S2, [R4,#4]
                  VLDR            S8, [R4,#0x10]
                  VSUB.F32        S6, S6, S0
                  VLDR            S4, [R4,#8]
                  VADD.F32        S0, S0, S24
                  VLDR            S10, [R4,#0x14]
                  VSUB.F32        S8, S8, S2
                  VADD.F32        S2, S2, S30
                  VSUB.F32        S10, S10, S4
                  VADD.F32        S4, S4, S26
                  VMUL.F32        S6, S6, S17
                  VMUL.F32        S8, S8, S19
                  VMUL.F32        S10, S10, S21
                  VADD.F32        S0, S0, S6
                  VADD.F32        S2, S2, S8
                  VADD.F32        S4, S4, S10
                  VSTR            S0, [SP,#0xC8+var_74]
                  VSTR            S2, [SP,#0xC8+var_70]
                  VSTR            S4, [SP,#0xC8+var_6C]
                }
                BlockSource::clip((BlockSource *)&v20, v4, (const Vec3 *)&v21, (int)v5, 0, 0, v16, 0);
                __asm { VADD.F32        S21, S21, S22 }
                ++_R11;
                v16 = 200;
                if ( (v20 & 0xFFFFFFFE) == 2 )
                  ++_R5;
                  VCMPE.F32       S21, S16
                  VMRS            APSR_nzcv, FPSCR
              }
              while ( (unsigned __int8)(_NF ^ _VF) | _ZF );
              __asm
                VADD.F32        S19, S19, S20
                VCMPE.F32       S19, S16
                VMRS            APSR_nzcv, FPSCR
            }
            while ( (unsigned __int8)(_NF ^ _VF) | _ZF );
            __asm
              VADD.F32        S17, S17, S18
              VCMPE.F32       S17, S16
              VMRS            APSR_nzcv, FPSCR
          while ( (unsigned __int8)(_NF ^ _VF) | _ZF );
            VMOV            S0, R11
            VMOV            S2, R5
            VCVT.F32.S32    S0, S0
            VCVT.F32.S32    S2, S2
            VDIV.F32        S0, S2, S0
  __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall BlockSource::allowsRunes(BlockSource *this, const BlockPos *a2)
{
  unsigned __int8 v3; // [sp+4h] [bp-Ch]@1

  BlockSource::getBlockID((BlockSource *)&v3, this, (int)a2);
  return j_j_j__ZNK5Block14getAllowsRunesEv((Block *)Block::mBlocks[v3]);
}


signed int __fastcall BlockSource::containsLiquid(const BlockPos *a1, mce::Math **a2, int a3)
{
  const BlockPos *v4; // r6@1
  int v5; // r4@1
  int v6; // r0@1
  int v11; // r7@1
  float v13; // r1@1
  int v14; // r0@1
  int v15; // r9@1
  float v16; // r1@1
  int v17; // r0@1
  int v18; // r10@1
  float v20; // r1@1
  float v21; // r1@1
  int v22; // r0@1
  float v24; // r1@1
  int v25; // r8@1
  signed int result; // r0@1
  signed int v27; // r1@2
  int v28; // r1@6
  int v30; // r10@8
  int *v31; // r0@9
  int v34; // [sp+4h] [bp-7Ch]@6
  int v35; // [sp+8h] [bp-78h]@1
  int v36; // [sp+Ch] [bp-74h]@1
  int v37; // [sp+10h] [bp-70h]@8
  int v38; // [sp+14h] [bp-6Ch]@1
  int v39; // [sp+18h] [bp-68h]@1
  mce::Math **v40; // [sp+1Ch] [bp-64h]@1
  int v41; // [sp+20h] [bp-60h]@9
  int v42; // [sp+24h] [bp-5Ch]@9
  int v43; // [sp+28h] [bp-58h]@9
  unsigned __int8 v44; // [sp+2Ch] [bp-54h]@9
  int v45; // [sp+30h] [bp-50h]@10
  int v46; // [sp+34h] [bp-4Ch]@10

  _R5 = a2;
  v4 = a1;
  v5 = a3;
  v40 = a2;
  v6 = mce::Math::floor(*a2, *(float *)&a2);
  __asm
  {
    VMOV.F32        S16, #1.0
    VLDR            S0, [R5,#0xC]
  }
  v11 = v6;
    VADD.F32        S0, S0, S16
    VMOV            R0, S0
  v14 = mce::Math::floor(_R0, v13);
  v15 = v14;
  v35 = v14;
  v17 = mce::Math::floor(_R5[1], v16);
  __asm { VLDR            S0, [R5,#0x10] }
  v18 = v17;
  v36 = v17;
  v38 = mce::Math::floor(_R0, v20);
  v22 = mce::Math::floor(_R5[2], v21);
  __asm { VLDR            S0, [R5,#0x14] }
  v39 = v22;
  v25 = mce::Math::floor(_R0, v24);
  result = 0;
  if ( v11 < v15 )
    __asm { VMOV.F32        S18, #-0.125 }
    v27 = 0;
    if ( v39 >= v25 )
      v27 = 1;
    if ( v18 >= v38 )
      result = 1;
    v28 = v27 | result;
    v34 = v28;
    do
    {
      _R5 = v18;
      if ( !v28 )
      {
        do
        {
          __asm
          {
            VMOV            S0, R5
            VCVT.F32.S32    S0, S0
          }
          v37 = _R5 + 1;
            VMOV            S2, R0
            VCVT.F32.S32    S20, S2
          v30 = v39;
          __asm { VADD.F32        S22, S0, S16 }
          do
            v41 = v11;
            v42 = _R5;
            v43 = v30;
            BlockSource::getBlockID((BlockSource *)&v44, v4, (int)&v41);
            v31 = (int *)Block::getMaterial((Block *)Block::mBlocks[v44]);
            if ( Material::isType(v31, v5) == 1 )
            {
              *(_DWORD *)&v44 = v11;
              v45 = _R5;
              v46 = v30;
              _R0 = BlockSource::getData(v4, (const BlockPos *)&v44);
              __asm { VMOV.F32        S0, S20 }
              if ( !(!_ZF & _CF) )
              {
                __asm
                {
                  VMOVLS          S0, R0
                  VCVTLS.F32.U32  S0, S0
                  VMULLS.F32      S0, S0, S18
                  VADDLS.F32      S0, S22, S0
                }
              }
              _R0 = v40;
              __asm
                VLDR            S2, [R0,#4]
                VCMPE.F32       S0, S2
                VMRS            APSR_nzcv, FPSCR
              if ( !(_NF ^ _VF) )
                return 1;
            }
            ++v30;
          while ( v30 < v25 );
          ++_R5;
          v18 = v36;
        }
        while ( v37 < v38 );
      }
      ++v11;
      result = 0;
      v28 = v34;
    }
    while ( v11 < v35 );
  return result;
}


int __fastcall BlockSource::isNearUnloadedChunks(BlockSource *this, const ChunkPos *a2)
{
  BlockSource *v2; // r4@1
  __int64 *v3; // r6@1
  char v10; // [sp+4h] [bp-7Ch]@1
  int v11; // [sp+8h] [bp-78h]@1
  char v12; // [sp+20h] [bp-60h]@1
  int v13; // [sp+24h] [bp-5Ch]@1
  int v14; // [sp+28h] [bp-58h]@1
  int v15; // [sp+2Ch] [bp-54h]@1
  int v16; // [sp+30h] [bp-50h]@1
  int v17; // [sp+34h] [bp-4Ch]@1
  char v18; // [sp+38h] [bp-48h]@1
  char v19; // [sp+44h] [bp-3Ch]@1
  int v20; // [sp+48h] [bp-38h]@1
  int v21; // [sp+4Ch] [bp-34h]@1
  int v22; // [sp+50h] [bp-30h]@1
  int v23; // [sp+54h] [bp-2Ch]@1
  int v24; // [sp+58h] [bp-28h]@1
  char v25; // [sp+5Ch] [bp-24h]@1

  v2 = this;
  v3 = (__int64 *)a2;
  BlockPos::BlockPos((int)&v19, (__int64 *)a2, 0);
  v22 = *(_DWORD *)&v19 - 16;
  v23 = v20 - 16;
  v24 = v21 - 16;
  Vec3::Vec3((int)&v25, (int)&v22);
  BlockPos::BlockPos((int)&v12, v3, 0);
  v15 = *(_DWORD *)&v12 + 32;
  v16 = v13 + 32;
  v17 = v14 + 32;
  Vec3::Vec3((int)&v18, (int)&v15);
  AABB::AABB((int)&v10, (int)&v25, (int)&v18);
  _R0 = *((_WORD *)v2 + 12);
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
    VSTR            S0, [SP,#0x80+var_6C]
  }
  v11 = 0;
  return BlockSource::hasChunksAt(v2, (const AABB *)&v10) ^ 1;
}


int __fastcall BlockSource::getHeightmap(BlockSource *this, int a2, int a3)
{
  BlockSource *v3; // r5@1
  int v4; // r4@1
  LevelChunk *v5; // r5@1
  int v7; // [sp+0h] [bp-28h]@1
  int v8; // [sp+4h] [bp-24h]@1
  int v9; // [sp+8h] [bp-20h]@1
  char v10; // [sp+Ch] [bp-1Ch]@2
  char v11; // [sp+10h] [bp-18h]@1

  v3 = this;
  v7 = a2;
  v4 = 0;
  v8 = 0;
  v9 = a3;
  ChunkPos::ChunkPos((ChunkPos *)&v11, (const BlockPos *)&v7);
  v5 = (LevelChunk *)BlockSource::getChunk(v3, (const ChunkPos *)&v11);
  if ( v5 )
  {
    ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v10, (const BlockPos *)&v7);
    v4 = LevelChunk::getHeightmap(v5, (const ChunkBlockPos *)&v10);
  }
  return v4;
}


int __fastcall BlockSource::checkBlockDestroyPermissions(BlockSource *this, Entity *a2, const BlockPos *a3, const ItemInstance *a4, int a5)
{
  BlockSource *v5; // r4@1
  Entity *v6; // r7@1
  const ItemInstance *v7; // r6@1
  const Block *v9; // r8@1
  int v10; // r9@2
  int result; // r0@13
  int v13; // r6@15
  int v14; // r1@17
  float v18; // [sp+4h] [bp-2Ch]@22
  unsigned __int8 v19; // [sp+10h] [bp-20h]@1

  v5 = this;
  v6 = a2;
  v7 = a4;
  _R5 = a3;
  BlockSource::getBlockID((BlockSource *)&v19, this, (int)a3);
  v9 = (const Block *)Block::mBlocks[v19];
  if ( *(_BYTE *)(Level::getAdventureSettings(*((Level **)v5 + 3)) + 2) )
    v10 = 0;
  else
    v10 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 656))(v6) ^ 1;
  _ZF = *((_BYTE *)v7 + 15) == 0;
  if ( *((_BYTE *)v7 + 15) )
    _ZF = *(_DWORD *)v7 == 0;
  if ( !_ZF
    && !ItemInstance::isNull(v7)
    && *((_BYTE *)v7 + 14)
    && (*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 656))(v6) == 1 )
  {
    v10 = ItemInstance::canDestroy(v7, v9);
  }
  if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 648))(v6)
    || v10 & (*(int (__fastcall **)(const Block *, Entity *, const BlockPos *))(*(_DWORD *)v9 + 248))(v9, v6, _R5) )
    return 1;
  if ( Entity::hasType((int)v6, 319) == 1 )
    v13 = Player::canUseAbility((int)v6, &Abilities::BUILD_AND_MINE) ^ 1;
    v13 = 0;
  if ( BlockSource::_getBlockPermissions(v5, _R5, v10) != 1 )
    if ( a5 != 1 )
      return 0;
LABEL_22:
    __asm
    {
      VLDR            S0, [R5]
      VMOV.F32        S6, #0.5
      VLDR            S2, [R5,#4]
      VLDR            S4, [R5,#8]
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VADD.F32        S0, S0, S6
      VADD.F32        S2, S2, S6
      VADD.F32        S4, S4, S6
      VSTR            S0, [SP,#0x30+var_2C]
      VSTR            S2, [SP,#0x30+var_28]
      VSTR            S4, [SP,#0x30+var_24]
    }
    Level::denyEffect(*((Level **)v5 + 3), (const Vec3 *)&v18);
    return 0;
  result = (Block::hasProperty((int)v9, v14, 0x10000000LL) | v13) ^ 1;
  if ( a5 == 1 && !result )
    goto LABEL_22;
  return result;
}


void __fastcall BlockSource::~BlockSource(BlockSource *this)
{
  BlockSource::~BlockSource(this);
}


signed int __fastcall BlockSource::hasChunksAt(BlockSource *this, const BlockPos *a2, const BlockPos *a3)
{
  BlockSource *v3; // r4@1
  const BlockPos *v4; // r5@1
  const BlockPos *v5; // r6@1
  signed int v6; // r0@1
  signed int v7; // r1@1
  int v8; // r5@1
  signed int v9; // r3@1
  int v10; // r10@1
  int v11; // r6@1
  signed int v12; // r7@1
  signed int v13; // r8@1
  bool v14; // nf@2
  unsigned __int8 v15; // vf@2
  int v16; // r9@4
  signed int v18; // [sp+0h] [bp-38h]@1
  signed int v19; // [sp+4h] [bp-34h]@1
  int v20; // [sp+8h] [bp-30h]@6
  signed int v21; // [sp+Ch] [bp-2Ch]@6

  v3 = this;
  v4 = a3;
  v5 = a2;
  ChunkSource::getChunkSide(*((ChunkSource **)this + 4));
  v6 = *(_DWORD *)v4;
  v7 = *((_DWORD *)v4 + 2);
  v8 = 0;
  v9 = *((_DWORD *)v5 + 2);
  v10 = *(_DWORD *)v5 >> 4;
  v19 = v7 >> 4;
  v11 = ((v6 >> 4) + 1 - v10) * ((v7 >> 4) + 1 - (v9 >> 4));
  v12 = v6 >> 4;
  v13 = v9 >> 4;
  v18 = v9 >> 4;
LABEL_4:
  v16 = v10;
  while ( 1 )
  {
    if ( v11 == v8 )
      return 1;
    v20 = v16;
    v21 = v13;
    if ( !BlockSource::getChunk(v3, (const ChunkPos *)&v20) )
      return 0;
    ++v8;
    v15 = __OFSUB__(v16, v12);
    v14 = v16++ - v12 < 0;
    if ( !(v14 ^ v15) )
    {
      v15 = __OFSUB__(v13, v19);
      v14 = v13++ - v19 < 0;
      if ( !(v14 ^ v15) )
        v13 = v18;
      goto LABEL_4;
    }
  }
}


signed int __fastcall BlockSource::_isWaterAt(BlockSource *this, const BlockPos *a2)
{
  int *v2; // r0@1
  unsigned __int8 v4; // [sp+4h] [bp-Ch]@1

  BlockSource::getBlockID((BlockSource *)&v4, this, (int)a2);
  v2 = (int *)Block::getMaterial((Block *)Block::mBlocks[v4]);
  return j_j_j__ZNK8Material6isTypeE12MaterialType_1(v2, 5);
}


signed int __fastcall BlockSource::findNextTopSolidBlockUnder(BlockSource *this, BlockPos *a2)
{
  BlockSource *v2; // r5@1
  BlockPos *v3; // r4@1
  int v4; // r0@1
  signed int v5; // r1@2
  signed int v6; // r0@2
  signed int v7; // r0@5
  Material *v8; // r0@8
  int v9; // r0@9
  signed int result; // r0@10
  char v11; // [sp+4h] [bp-24h]@5
  char v12; // [sp+8h] [bp-20h]@1
  unsigned __int8 v13; // [sp+10h] [bp-18h]@8

  v2 = this;
  v3 = a2;
  ChunkPos::ChunkPos((ChunkPos *)&v12, a2);
  v4 = BlockSource::getChunk(v2, (const ChunkPos *)&v12);
  if ( v4 )
  {
    v5 = *((_DWORD *)v3 + 1);
    v6 = *(_DWORD *)(v4 + 140) << 20;
    if ( v6 >> 16 < v5 )
      v5 = v6 >> 16;
    *((_DWORD *)v3 + 1) = v5;
    while ( 1 )
    {
      BlockSource::getBlockID((BlockSource *)&v11, v2, (int)v3);
      v7 = *((_DWORD *)v3 + 1);
      *((_DWORD *)v3 + 1) = v7 - 1;
      if ( !v11 )
        break;
      if ( v7 < 1 )
        goto LABEL_10;
    }
      BlockSource::getBlockID((BlockSource *)&v13, v2, (int)v3);
      v8 = (Material *)Block::getMaterial((Block *)Block::mBlocks[v13]);
      if ( Material::isSolidBlocking(v8) )
      v9 = *((_DWORD *)v3 + 1);
      *((_DWORD *)v3 + 1) = v9 - 1;
      if ( v9 <= 0 )
    result = 1;
  }
  else
LABEL_10:
    result = 0;
  return result;
}


signed int __fastcall BlockSource::canSeeSky(BlockSource *this, int a2, int a3, int a4)
{
  BlockSource *v4; // r4@1
  LevelChunk *v5; // r4@3
  int v7; // [sp+0h] [bp-28h]@1
  int v8; // [sp+4h] [bp-24h]@1
  int v9; // [sp+8h] [bp-20h]@1
  char v10; // [sp+Ch] [bp-1Ch]@4
  char v11; // [sp+10h] [bp-18h]@3

  v4 = this;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  if ( *((_WORD *)this + 12) <= a3 )
    return 1;
  if ( a3 >= 0 )
  {
    ChunkPos::ChunkPos((ChunkPos *)&v11, (const BlockPos *)&v7);
    v5 = (LevelChunk *)BlockSource::getChunk(v4, (const ChunkPos *)&v11);
    if ( v5 )
    {
      ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v10, (const BlockPos *)&v7);
      return LevelChunk::isSkyLit(v5, (const ChunkBlockPos *)&v10);
    }
  }
  return 0;
}


signed int __fastcall BlockSource::containsAnyLiquid(BlockSource *this, const AABB *a2)
{
  BlockSource *v2; // r4@1
  Material *v13; // r0@6
  int v15; // [sp+0h] [bp-58h]@1
  int v16; // [sp+4h] [bp-54h]@2
  int v17; // [sp+8h] [bp-50h]@6
  int v18; // [sp+Ch] [bp-4Ch]@6
  int v19; // [sp+10h] [bp-48h]@6
  float v20; // [sp+14h] [bp-44h]@1
  unsigned __int8 v26; // [sp+30h] [bp-28h]@6

  v2 = this;
  AABB::flooredCeiledCopy((AABB *)&v20, (int)a2);
  __asm
  {
    VLDR            S0, [SP,#0x58+var_44]
    VLDR            S2, [SP,#0x58+var_38]
    VCVTR.S32.F32   S2, S2
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S2
    VMOV            R7, S0
  }
  v15 = _R0;
  if ( _R7 != _R0 )
    while ( 2 )
    {
      __asm
      {
        VLDR            S0, [SP,#0x58+var_3C]
        VLDR            S2, [SP,#0x58+var_30]
        VCVTR.S32.F32   S2, S2
        VCVTR.S32.F32   S0, S0
        VMOV            R0, S2
        VMOV            R6, S0
      }
      v16 = _R0;
      while ( _R6 != _R0 )
        __asm
        {
          VLDR            S0, [SP,#0x58+var_40]
          VLDR            S2, [SP,#0x58+var_34]
          VCVTR.S32.F32   S2, S2
          VCVTR.S32.F32   S0, S0
          VMOV            R8, S2
          VMOV            R10, S0
        }
        if ( _R10 != _R8 )
          do
          {
            v17 = _R7;
            v18 = _R10;
            v19 = _R6;
            BlockSource::getBlockID((BlockSource *)&v26, v2, (int)&v17);
            v13 = (Material *)Block::getMaterial((Block *)Block::mBlocks[v26]);
            if ( Material::isLiquid(v13) )
              return 1;
          }
          while ( _R8 != ++_R10 );
        ++_R6;
        _R0 = v16;
      if ( ++_R7 != v15 )
        continue;
      break;
    }
  return 0;
}


signed int __fastcall BlockSource::hasChunksAt(BlockSource *this, const BlockPos *a2, int a3)
{
  BlockSource *v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r7@1
  signed int v7; // r2@1
  signed int v8; // r1@1
  signed int v9; // r7@1
  int v10; // r10@1
  int v11; // r5@1
  int v12; // r6@1
  signed int v13; // r3@1
  signed int v14; // r7@1
  signed int v15; // r8@1
  bool v16; // nf@2
  unsigned __int8 v17; // vf@2
  int v18; // r9@4
  signed int v20; // [sp+0h] [bp-38h]@1
  signed int v21; // [sp+4h] [bp-34h]@1
  int v22; // [sp+8h] [bp-30h]@6
  signed int v23; // [sp+Ch] [bp-2Ch]@6

  v3 = this;
  v4 = a3;
  v5 = *(_DWORD *)a2;
  v6 = *((_DWORD *)a2 + 2);
  ChunkSource::getChunkSide(*((ChunkSource **)this + 4));
  v7 = v6 - v4;
  v8 = v5 + v4;
  v9 = v6 + v4;
  v10 = (v5 - v4) >> 4;
  v11 = 0;
  v12 = ((v9 >> 4) + 1 - (v7 >> 4)) * ((v8 >> 4) + 1 - v10);
  v13 = v9 >> 4;
  v14 = v8 >> 4;
  v21 = v13;
  v15 = v7 >> 4;
  v20 = v7 >> 4;
LABEL_4:
  v18 = v10;
  while ( 1 )
  {
    if ( v12 == v11 )
      return 1;
    v22 = v18;
    v23 = v15;
    if ( !BlockSource::getChunk(v3, (const ChunkPos *)&v22) )
      return 0;
    ++v11;
    v17 = __OFSUB__(v18, v14);
    v16 = v18++ - v14 < 0;
    if ( !(v16 ^ v17) )
    {
      v17 = __OFSUB__(v15, v21);
      v16 = v15++ - v21 < 0;
      if ( !(v16 ^ v17) )
        v15 = v20;
      goto LABEL_4;
    }
  }
}


int __fastcall BlockSource::setBlock(int a1, int a2, int a3, int a4, char *a5, int a6)
{
  int v6; // r4@1
  int v8; // [sp+Ch] [bp-1Ch]@1
  int v9; // [sp+10h] [bp-18h]@1
  int v10; // [sp+14h] [bp-14h]@1
  int v11; // [sp+18h] [bp-10h]@1
  char v12; // [sp+1Ch] [bp-Ch]@1
  char v13; // [sp+1Dh] [bp-Bh]@1

  v8 = a2;
  v9 = a3;
  v10 = a4;
  v12 = *a5;
  v13 = 0;
  v11 = 0;
  v6 = BlockSource::setBlockAndData(a1, (BlockPos *)&v8, (int)&v12, a6, 0, (int)&v11);
  if ( v11 )
    (*(void (**)(void))(*(_DWORD *)v11 + 4))();
  return v6;
}


int __fastcall BlockSource::removeBlock(BlockSource *this, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v6; // [sp+Ch] [bp-1Ch]@1
  int v7; // [sp+10h] [bp-18h]@1
  int v8; // [sp+14h] [bp-14h]@1
  int v9; // [sp+18h] [bp-10h]@1
  char v10; // [sp+1Ch] [bp-Ch]@1
  char v11; // [sp+1Dh] [bp-Bh]@1

  v6 = a2;
  v7 = a3;
  v8 = a4;
  v10 = 0;
  v11 = 0;
  v9 = 0;
  v4 = BlockSource::setBlockAndData((int)this, (BlockPos *)&v6, (int)&v10, 3, 0, (int)&v9);
  if ( v9 )
    (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  return v4;
}


int __fastcall BlockSource::getChunkAt(BlockSource *this, const BlockPos *a2)
{
  BlockSource *v2; // r4@1
  int v4; // [sp+0h] [bp-18h]@1

  v2 = this;
  ChunkPos::ChunkPos((ChunkPos *)&v4, a2);
  return BlockSource::getChunk(v2, (const ChunkPos *)&v4);
}


int __fastcall BlockSource::getMaterial(BlockSource *this, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-18h]@1
  int v6; // [sp+4h] [bp-14h]@1
  int v7; // [sp+8h] [bp-10h]@1
  unsigned __int8 v8; // [sp+Ch] [bp-Ch]@1

  v5 = a2;
  v6 = a3;
  v7 = a4;
  BlockSource::getBlockID((BlockSource *)&v8, this, (int)&v5);
  return Block::getMaterial((Block *)Block::mBlocks[v8]);
}


LevelChunk *__fastcall BlockSource::setGrassColor(BlockSource *this, int a2, const BlockPos *a3, int a4)
{
  const BlockPos *v4; // r4@1
  int v5; // r7@1
  BlockSource *v6; // r5@1
  int v7; // r8@1
  LevelChunk *result; // r0@1
  LevelChunk *v9; // r6@1
  char v10; // [sp+8h] [bp-38h]@5
  char v11; // [sp+9h] [bp-37h]@5
  char v12; // [sp+Ch] [bp-34h]@5
  char v13; // [sp+Dh] [bp-33h]@5
  char v14; // [sp+10h] [bp-30h]@5
  char v15; // [sp+11h] [bp-2Fh]@5
  char v16; // [sp+14h] [bp-2Ch]@3
  char v17; // [sp+18h] [bp-28h]@1

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = a4;
  ChunkPos::ChunkPos((ChunkPos *)&v17, a3);
  result = (LevelChunk *)BlockSource::getChunk(v6, (const ChunkPos *)&v17);
  v9 = result;
  if ( result )
  {
    result = (LevelChunk *)LevelChunk::isReadOnly(result);
    if ( !result )
    {
      ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v16, v4);
      LevelChunk::setGrassColor(v9, v5, (const ChunkBlockPos *)&v16);
      result = (LevelChunk *)*((_BYTE *)v6 + 8);
      if ( !*((_BYTE *)v6 + 8) )
      {
        LOBYTE(result) = *LevelChunk::getState(v9);
        __dmb();
        result = (LevelChunk *)(unsigned __int8)result;
        if ( (unsigned __int8)result == 8 )
        {
          BlockSource::getBlockAndData((BlockSource *)&v14, v6, (int)v4);
          v12 = v14;
          v10 = v14;
          v13 = v15;
          v11 = 0;
          result = (LevelChunk *)BlockSource::_blockChanged(v6, v4, (int)&v12, (int)&v10, v7, 0);
        }
      }
    }
  }
  return result;
}


BlockSourceListener **__fastcall BlockSource::removeListener(BlockSource *this, BlockSourceListener *a2)
{
  BlockSource *v2; // r6@1
  BlockSourceListener **v3; // r2@1
  int v4; // r3@1
  int v5; // r0@1
  int v6; // r4@2
  bool v7; // zf@3
  BlockSourceListener **result; // r0@3
  BlockSourceListener *v9; // r5@6
  bool v10; // zf@6
  int v11; // r0@11
  BlockSourceListener **v12; // r1@24
  bool v13; // zf@24

  v2 = this;
  v3 = (BlockSourceListener **)(*((_QWORD *)this + 5) >> 32);
  v4 = *((_QWORD *)this + 5);
  v5 = ((signed int)v3 - v4) >> 4;
  if ( v5 < 1 )
  {
LABEL_10:
    if ( 1 == ((signed int)v3 - v4) >> 2 )
    {
      result = (BlockSourceListener **)v4;
    }
    else
      v11 = ((signed int)v3 - v4) >> 2;
      if ( v11 == 2 )
      {
        result = (BlockSourceListener **)v4;
      }
      else
        if ( v11 != 3 )
        {
          result = v3;
          goto LABEL_23;
        }
        if ( *(BlockSourceListener **)v4 == a2 )
        result = (BlockSourceListener **)(v4 + 4);
      if ( *result == a2 )
        goto LABEL_23;
      ++result;
    if ( *result != a2 )
      result = v3;
  }
  else
    v6 = v5 + 1;
    while ( 1 )
      v7 = *(_DWORD *)v4 == (_DWORD)a2;
      if ( *(BlockSourceListener **)v4 != a2 )
        v7 = *(_DWORD *)(v4 + 4) == (_DWORD)a2;
      if ( v7 )
        break;
      result = (BlockSourceListener **)(v4 + 8);
      v9 = *(BlockSourceListener **)(v4 + 8);
      v10 = v9 == a2;
      if ( v9 != a2 )
        result = (BlockSourceListener **)(v4 + 12);
        v10 = *(_DWORD *)(v4 + 12) == (_DWORD)a2;
      if ( v10 )
      --v6;
      v4 += 16;
      if ( v6 <= 1 )
        goto LABEL_10;
LABEL_23:
  if ( result != v3 )
    v12 = result + 1;
    v13 = result + 1 == v3;
    if ( result + 1 != v3 )
      v13 = v3 == v12;
    if ( !v13 )
      _aeabi_memmove4(result, v12);
      v3 = (BlockSourceListener **)*((_DWORD *)v2 + 11);
    result = v3 - 1;
    *((_DWORD *)v2 + 11) = v3 - 1;
  return result;
}


int __fastcall BlockSource::blockEvent(BlockSource *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r11@1
  BlockSource *v7; // r7@1
  int v8; // r6@1
  int v9; // r10@1
  int v10; // r0@2
  void (__cdecl *v11)(int); // r4@2
  __int64 v12; // r0@3
  unsigned int v13; // r4@4
  int v15; // [sp+10h] [bp-40h]@2
  int v16; // [sp+14h] [bp-3Ch]@2
  int v17; // [sp+18h] [bp-38h]@2
  unsigned __int8 v18; // [sp+1Ch] [bp-34h]@1
  int v19; // [sp+20h] [bp-30h]@1
  int v20; // [sp+24h] [bp-2Ch]@1
  int v21; // [sp+28h] [bp-28h]@1

  v6 = a3;
  v7 = this;
  v8 = a2;
  v9 = a4;
  v19 = a2;
  v20 = a3;
  v21 = a4;
  BlockSource::getBlockID((BlockSource *)&v18, this, (int)&v19);
  if ( v18 )
  {
    v10 = Block::mBlocks[v18];
    v11 = *(void (__cdecl **)(int))(*(_DWORD *)v10 + 336);
    v15 = v8;
    v16 = v6;
    v17 = v9;
    v11(v10);
  }
  v12 = *((_QWORD *)v7 + 5);
  if ( HIDWORD(v12) != (_DWORD)v12 )
    v13 = 0;
    do
    {
      (*(void (__cdecl **)(_DWORD, BlockSource *, int))(**(_DWORD **)(v12 + 4 * v13) + 40))(
        *(_DWORD *)(v12 + 4 * v13),
        v7,
        v8);
      v12 = *((_QWORD *)v7 + 5);
      ++v13;
    }
    while ( v13 < (HIDWORD(v12) - (signed int)v12) >> 2 );
  return v12;
}


int __fastcall BlockSource::setBlockAndData(int a1, int a2, int a3, int a4, char *a5, char a6, int a7)
{
  char v7; // r4@1
  int v8; // r4@1
  int v10; // [sp+Ch] [bp-1Ch]@1
  int v11; // [sp+10h] [bp-18h]@1
  int v12; // [sp+14h] [bp-14h]@1
  int v13; // [sp+18h] [bp-10h]@1
  char v14; // [sp+1Ch] [bp-Ch]@1
  char v15; // [sp+1Dh] [bp-Bh]@1

  v7 = *a5;
  v10 = a2;
  v11 = a3;
  v12 = a4;
  v14 = v7;
  v15 = a6;
  v13 = 0;
  v8 = BlockSource::setBlockAndData(a1, (BlockPos *)&v10, (int)&v14, a7, 0, (int)&v13);
  if ( v13 )
    (*(void (**)(void))(*(_DWORD *)v13 + 4))();
  return v8;
}


signed int __fastcall BlockSource::containsMagmaBlock(BlockSource *this, const AABB *a2)
{
  BlockSource *v2; // r4@1
  signed int result; // r0@3
  int v14; // [sp+0h] [bp-58h]@2
  int v15; // [sp+4h] [bp-54h]@4
  float v16; // [sp+8h] [bp-50h]@1
  int v22; // [sp+24h] [bp-34h]@8
  int v23; // [sp+28h] [bp-30h]@8
  int v24; // [sp+2Ch] [bp-2Ch]@8
  unsigned __int8 v25; // [sp+30h] [bp-28h]@8

  v2 = this;
  AABB::flooredCeiledCopy((AABB *)&v16, (int)a2);
  if ( BlockSource::hasChunksAt(v2, (const AABB *)&v16) != 1 )
    goto LABEL_16;
  __asm
  {
    VLDR            S0, [SP,#0x58+var_50]
    VLDR            S2, [SP,#0x58+var_44]
    VCVTR.S32.F32   S2, S2
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S2
    VMOV            R7, S0
  }
  v14 = _R0;
  if ( _R7 != _R0 )
    while ( 2 )
    {
      __asm
      {
        VLDR            S0, [SP,#0x58+var_48]
        VLDR            S2, [SP,#0x58+var_3C]
        VCVTR.S32.F32   S2, S2
        VCVTR.S32.F32   S0, S0
        VMOV            R0, S2
        VMOV            R8, S0
      }
      v15 = _R0;
      while ( _R8 != _R0 )
        __asm
        {
          VLDR            S0, [SP,#0x58+var_4C]
          VLDR            S2, [SP,#0x58+var_40]
          VCVTR.S32.F32   S2, S2
          VCVTR.S32.F32   S0, S0
          VMOV            R11, S2
          VMOV            R9, S0
        }
        if ( _R9 != _R11 )
          do
          {
            v22 = _R7;
            v23 = _R9;
            v24 = _R8;
            BlockSource::getBlockID((BlockSource *)&v25, v2, (int)&v22);
            if ( Block::isType((Block *)Block::mBlocks[v25], (const Block *)Block::mMagmaBlock) )
              return 1;
          }
          while ( _R11 != ++_R9 );
        ++_R8;
        _R0 = v15;
      ++_R7;
      result = 0;
      if ( _R7 != v14 )
        continue;
      break;
    }
  else
LABEL_16:
    result = 0;
  return result;
}


int __fastcall BlockSource::getTickQueue(BlockSource *this, const BlockPos *a2)
{
  BlockSource *v2; // r4@1
  int result; // r0@1
  LevelChunk *v4; // r0@2
  int v5; // [sp+0h] [bp-18h]@2

  v2 = this;
  result = *((_DWORD *)this + 17);
  if ( !result )
  {
    ChunkPos::ChunkPos((ChunkPos *)&v5, a2);
    v4 = (LevelChunk *)BlockSource::getChunk(v2, (const ChunkPos *)&v5);
    if ( v4 )
      result = LevelChunk::getTickQueue(v4);
    else
      result = 0;
  }
  return result;
}


signed int __fastcall BlockSource::getTopSnowBlockPos(BlockSource *this, const BlockPos *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r6@1
  const BlockPos *v4; // r5@1
  BlockSource *v5; // r4@1
  const ChunkBlockPos *v12; // r7@3
  int v13; // r4@4
  int v14; // r2@5
  signed int result; // r0@5
  char v16; // [sp+4h] [bp-2Ch]@4
  char v17; // [sp+8h] [bp-28h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  _R8 = (Biome *)BlockSource::getBiome(a2, a3);
  ChunkPos::ChunkPos((ChunkPos *)&v17, v3);
  if ( !BlockSource::getChunk(v4, (const ChunkPos *)&v17) )
    goto LABEL_14;
  __asm
  {
    VMOV.F32        S0, #8.0
    VLDR            S2, [R8,#0xD8]
    VMUL.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  if ( _R0 >= 1 )
    ChunkPos::ChunkPos((ChunkPos *)&v17, v3);
    v12 = (const ChunkBlockPos *)BlockSource::getChunk(v4, (const ChunkPos *)&v17);
    if ( v12 )
    {
      ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v16, v3);
      LevelChunk::getTopRainBlockPos(v5, v12, &v16);
      v13 = (int)v5 + 4;
    }
    else
      *(_DWORD *)v5 = -1;
      *((_DWORD *)v5 + 1) = -1;
      *(_DWORD *)(v13 + 4) = -1;
    result = Biome::getFreezingHeight(_R8, v4, v3);
    if ( result < *(_DWORD *)v13 )
      result = *(_DWORD *)v13;
    if ( result >= *(_WORD *)(*((_DWORD *)v4 + 5) + 120) - 1 )
      result = *(_WORD *)(*((_DWORD *)v4 + 5) + 120) - 1;
    *(_DWORD *)v13 = result;
  else
LABEL_14:
    v14 = *((_DWORD *)v3 + 2);
    result = *(_WORD *)(*((_DWORD *)v4 + 5) + 120) - 1;
    *(_DWORD *)v5 = *(_DWORD *)v3;
    *((_DWORD *)v5 + 1) = result;
    *((_DWORD *)v5 + 2) = v14;
  return result;
}


signed int __fastcall BlockSource::isEmptyBlock(BlockSource *this, const BlockPos *a2)
{
  signed int result; // r0@1
  char v3; // [sp+4h] [bp-Ch]@1

  BlockSource::getBlockID((BlockSource *)&v3, this, (int)a2);
  result = 0;
  if ( !v3 )
    result = 1;
  return result;
}


unsigned __int8 *__fastcall BlockSource::getDaytimeBrightness(BlockSource *this, const BlockPos *a2, int a3)
{
  const BlockPos *v3; // r5@1
  unsigned __int8 *v4; // r4@1
  signed int v5; // r0@1
  BlockSource *v6; // r6@1
  int v7; // r6@3
  unsigned __int8 *result; // r0@4
  _DWORD **v9; // r0@5
  char v10; // r5@6
  char v11; // r1@7
  unsigned int v12; // r0@7
  char *v13; // r3@11
  char v14; // [sp+0h] [bp-28h]@4
  char v15; // [sp+4h] [bp-24h]@4
  char v16; // [sp+8h] [bp-20h]@3
  Dimension v17; // [sp+10h] [bp-18h]@7
  char v18; // [sp+13h] [bp-15h]@6

  v3 = (const BlockPos *)a3;
  v4 = (unsigned __int8 *)this;
  v5 = *(_DWORD *)(a3 + 4);
  v6 = a2;
  if ( v5 <= -1 )
  {
    v9 = &Brightness::MIN;
  }
  else
    if ( v5 >= *((_WORD *)a2 + 12) )
    {
      v10 = Brightness::MAX;
      v18 = Brightness::MAX;
      if ( *((_BYTE *)a2 + 9) )
      {
        Dimension::getSkyDarken(&v17, *((_DWORD *)a2 + 5));
        v11 = v17;
        v12 = (unsigned __int8)Brightness::MAX;
      }
      else
        v11 = Brightness::MIN;
        LOBYTE(v17) = Brightness::MIN;
      v18 = v10 - v11;
      v13 = &v18;
      if ( (unsigned __int8)(v10 - v11) > v12 )
        v13 = (char *)&Brightness::MIN;
      result = (unsigned __int8 *)(unsigned __int8)*v13;
      goto LABEL_14;
    }
    ChunkPos::ChunkPos((ChunkPos *)&v16, (const BlockPos *)a3);
    v7 = BlockSource::getChunk(v6, (const ChunkPos *)&v16);
    if ( v7 )
      ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v15, v3);
      v14 = 0;
      return LevelChunk::getRawBrightness(v4, v7, (int)&v15, &v14);
    v9 = &Brightness::MAX;
  result = (unsigned __int8 *)*(_BYTE *)*v9;
LABEL_14:
  *v4 = (unsigned __int8)result;
  return result;
}


int __fastcall BlockSource::setBlockAndData(int a1, BlockPos *a2, int a3, int a4, int a5, int a6)
{
  BlockPos *v6; // r5@1
  int v7; // r6@1
  signed int v8; // r0@1
  int v9; // r8@1
  int v10; // r4@1
  LevelChunk *v11; // r0@3
  int v12; // r7@3
  int result; // r0@5
  signed int v14; // r10@6
  int v15; // r0@10
  int v16; // r1@10
  int v17; // r9@14
  unsigned int v18; // r1@14
  int v19; // r1@15
  unsigned int v20; // r2@16
  _BYTE *v21; // r1@16
  unsigned int v22; // r3@16
  unsigned int v23; // r0@16
  signed int v24; // r9@23
  int v25; // r1@23
  unsigned __int8 v26; // r2@27
  signed int v27; // r3@27
  signed int v28; // r2@33
  unsigned __int16 v29; // [sp+Ch] [bp-4Ch]@31
  char v30; // [sp+10h] [bp-48h]@31
  char v31; // [sp+11h] [bp-47h]@31
  unsigned __int16 v32; // [sp+14h] [bp-44h]@14
  __int16 v33; // [sp+16h] [bp-42h]@14
  int v34; // [sp+18h] [bp-40h]@10
  char v35; // [sp+1Ch] [bp-3Ch]@10
  char v36; // [sp+1Dh] [bp-3Bh]@10
  char v37; // [sp+20h] [bp-38h]@10
  unsigned __int16 v38; // [sp+26h] [bp-32h]@12
  char v39; // [sp+28h] [bp-30h]@3

  v6 = a2;
  v7 = a1;
  v8 = *((_DWORD *)a2 + 1);
  v9 = a4;
  v10 = a3;
  if ( v8 >= 0
    && v8 < *(_WORD *)(v7 + 24)
    && (ChunkPos::ChunkPos((ChunkPos *)&v39, a2),
        v11 = (LevelChunk *)BlockSource::getChunk((BlockSource *)v7, (const ChunkPos *)&v39),
        (v12 = (int)v11) != 0)
    && !LevelChunk::isReadOnly(v11) )
  {
    v14 = 0;
    if ( !*(_BYTE *)(v7 + 8) )
    {
      v14 = 0;
      if ( *LevelChunk::getState((LevelChunk *)v12) == 8 )
        v14 = 1;
      __dmb();
    }
    ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v37, v6);
    v35 = *(_BYTE *)v10;
    v36 = *(_BYTE *)(v10 + 1);
    v15 = *(_DWORD *)a6;
    *(_DWORD *)a6 = 0;
    v34 = v15;
    v16 = v14;
    if ( v14 )
      v16 = v7;
    LevelChunk::setBlockAndData((int)&v38, v12, (int)&v37, (unsigned int)&v35, v16, &v34);
    if ( v34 )
      (*(void (**)(void))(*(_DWORD *)v34 + 4))();
    v34 = 0;
    v17 = *(_BYTE *)v10;
    ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v32, v6);
    v18 = v33 >> 4;
    if ( v18 >= *(_DWORD *)(v12 + 140) )
      v21 = &FullBlock::AIR;
      LOBYTE(v23) = BYTE1(FullBlock::AIR);
    else
      v19 = *(_DWORD *)(v12 + 4 * v18 + 76);
      if ( v19 )
      {
        v20 = (v33 & 0xF | ((unsigned int)v32 >> 4) & 0xFF0) + (v32 << 8);
        v23 = v19 + ((unsigned int)(unsigned __int16)v20 >> 1);
        v21 = (_BYTE *)(v19 + v20);
        v22 = *(_BYTE *)(v23 + 4096);
        LOBYTE(v23) = v22 & 0xF;
        if ( (v33 & 0xF | ((unsigned int)v32 >> 4) & 0xF0) & 1 )
          v23 = v22 >> 4;
      }
      else
        v21 = &BlockID::AIR;
        LOBYTE(v23) = 0;
    *(_BYTE *)v10 = *v21;
    *(_BYTE *)(v10 + 1) = v23;
    if ( v17 != *(_BYTE *)(Block::mPumpkin + 4) && v17 != *(_BYTE *)(Block::mLitPumpkin + 4) )
      v25 = *(_WORD *)v10;
      v24 = 0;
      if ( v25 == BlockID::AIR )
        v24 = 1;
    v26 = v38;
    v27 = 0;
    if ( v38 == v25 )
      v27 = 1;
    if ( v9 & 0x10 || !(v27 | v14 ^ 1) )
      v30 = v25;
      v31 = v23;
      v29 = v38;
      BlockSource::_blockChanged((BlockSource *)v7, v6, (int)&v30, (int)&v29, v9, a5);
      LOBYTE(v25) = *(_BYTE *)v10;
      v26 = v38;
    if ( v26 == (unsigned __int8)v25 )
      v28 = 0;
      if ( HIBYTE(v38) != *(_BYTE *)(v10 + 1) )
        v28 = 1;
      result = v24 | v28;
      result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall BlockSource::getTopBlock(BlockSource *this, BlockPos *a2, int *a3, int a4, int a5)
{
  BlockSource *v5; // r8@1
  int *v6; // r7@1
  int *v7; // r6@1
  BlockPos *v8; // r4@1
  int v9; // r0@1
  int v10; // r1@2
  char v12; // [sp+0h] [bp-30h]@2
  int *v13; // [sp+4h] [bp-2Ch]@2
  int v14; // [sp+8h] [bp-28h]@2
  int v15; // [sp+Ch] [bp-24h]@2

  v5 = this;
  v6 = (int *)a4;
  v7 = a3;
  v8 = a2;
  v9 = 63;
  do
  {
    *v6 = v9;
    v13 = v7;
    v14 = v9 + 1;
    v15 = a5;
    BlockSource::getBlockID((BlockSource *)&v12, v8, (int)&v13);
    v10 = *v6;
    v9 = *v6 + 1;
  }
  while ( v12 );
  v13 = v7;
  v14 = v10;
  v15 = a5;
  return BlockSource::getBlockID(v5, v8, (int)&v13);
}


int __fastcall BlockSource::shouldFreeze(BlockSource *this, const BlockPos *a2, int a3)
{
  int v3; // r6@1
  const BlockPos *v4; // r5@1
  BlockSource *v5; // r4@1
  Biome *v6; // r0@1
  signed int v13; // r0@3
  const ChunkBlockPos *v14; // r7@5
  unsigned int v15; // r0@6
  int v16; // r1@13
  int v17; // r2@13
  int *v18; // r0@13
  int v19; // r1@14
  int v20; // r2@14
  int *v21; // r0@14
  int v22; // r2@15
  int *v23; // r0@15
  int v24; // r2@16
  int *v25; // r0@16
  int result; // r0@17
  __int64 v27; // [sp+0h] [bp-58h]@16
  int v28; // [sp+8h] [bp-50h]@16
  __int64 v29; // [sp+Ch] [bp-4Ch]@15
  int v30; // [sp+14h] [bp-44h]@15
  int v31; // [sp+18h] [bp-40h]@14
  int v32; // [sp+1Ch] [bp-3Ch]@14
  int v33; // [sp+20h] [bp-38h]@14
  int v34; // [sp+24h] [bp-34h]@13
  int v35; // [sp+28h] [bp-30h]@13
  int v36; // [sp+2Ch] [bp-2Ch]@13
  char v37; // [sp+30h] [bp-28h]@6
  unsigned __int8 v38; // [sp+31h] [bp-27h]@6
  unsigned __int8 v39; // [sp+34h] [bp-24h]@6
  unsigned __int8 v40; // [sp+38h] [bp-20h]@5

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = (Biome *)BlockSource::getBiome(this, a2);
  _R0 = Biome::getTemperature(v6, v5, v4);
  __asm { VMOV            S0, R0 }
  _R1 = &Biome::RAIN_TEMP_THRESHOLD;
  __asm
  {
    VLDR            S2, [R1]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  result = 0;
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v13 = *((_DWORD *)v4 + 1);
    if ( v13 >= 0 && v13 < *((_WORD *)v5 + 12) )
    {
      ChunkPos::ChunkPos((ChunkPos *)&v40, v4);
      v14 = (const ChunkBlockPos *)BlockSource::getChunk(v5, (const ChunkPos *)&v40);
      if ( v14 )
      {
        ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v39, v4);
        LevelChunk::getBrightness((LevelChunk *)&v37, v14, (int)&v39);
        v15 = v38;
      }
      else
        v37 = *((_BYTE *)v5 + 72);
        v15 = *((_BYTE *)v5 + 73);
        v38 = *((_BYTE *)v5 + 73);
      if ( v15 <= 9 )
        BlockSource::getBlockID((BlockSource *)&v39, v5, (int)v4);
        if ( (v39 == *(_BYTE *)(Block::mStillWater + 4) || v39 == *(_BYTE *)(Block::mFlowingWater + 4))
          && !BlockSource::getData(v5, v4) )
        {
          if ( v3 != 1
            || (v16 = *((_DWORD *)v4 + 1),
                v17 = *((_DWORD *)v4 + 2),
                v34 = *(_DWORD *)v4 - 1,
                v35 = v16,
                v36 = v17,
                BlockSource::getBlockID((BlockSource *)&v40, v5, (int)&v34),
                v18 = (int *)Block::getMaterial((Block *)Block::mBlocks[v40]),
                Material::isType(v18, 5) != 1)
            || (v19 = *((_DWORD *)v4 + 1),
                v20 = *((_DWORD *)v4 + 2),
                v31 = *(_DWORD *)v4 + 1,
                v32 = v19,
                v33 = v20,
                BlockSource::getBlockID((BlockSource *)&v40, v5, (int)&v31),
                v21 = (int *)Block::getMaterial((Block *)Block::mBlocks[v40]),
                Material::isType(v21, 5) != 1)
            || (v22 = *((_DWORD *)v4 + 2),
                v29 = *(_QWORD *)v4,
                v30 = v22 - 1,
                BlockSource::getBlockID((BlockSource *)&v40, v5, (int)&v29),
                v23 = (int *)Block::getMaterial((Block *)Block::mBlocks[v40]),
                Material::isType(v23, 5) != 1)
            || (v24 = *((_DWORD *)v4 + 2),
                v27 = *(_QWORD *)v4,
                v28 = v24 + 1,
                BlockSource::getBlockID((BlockSource *)&v40, v5, (int)&v27),
                v25 = (int *)Block::getMaterial((Block *)Block::mBlocks[v40]),
                Material::isType(v25, 5) != 1) )
          {
            result = 1;
          }
        }
    }
  return result;
}


_BOOL4 __fastcall BlockSource::isOwnerThread(BlockSource *this)
{
  BlockSource *v1; // r4@1
  pthread_t v2; // r0@1

  v1 = this;
  v2 = pthread_self();
  return pthread_equal(v2, *((_DWORD *)v1 + 1)) != 0;
}


int __fastcall BlockSource::isConsideredSolidBlock(BlockSource *this, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-18h]@1
  int v6; // [sp+4h] [bp-14h]@1
  int v7; // [sp+8h] [bp-10h]@1
  unsigned __int8 v8; // [sp+Ch] [bp-Ch]@1

  v5 = a2;
  v6 = a3;
  v7 = a4;
  BlockSource::getBlockID((BlockSource *)&v8, this, (int)&v5);
  return Block::isSolid((Block *)Block::mBlocks[v8]);
}


int __fastcall BlockSource::generateUnloadedChunkAABB(BlockSource *this, const ChunkPos *a2, __int64 *a3)
{
  __int64 *v3; // r7@1
  BlockSource *v4; // r4@1
  const ChunkPos *v5; // r5@1
  int result; // r0@1
  int v11; // [sp+0h] [bp-60h]@1
  int v12; // [sp+4h] [bp-5Ch]@1
  int v13; // [sp+8h] [bp-58h]@1
  int v14; // [sp+Ch] [bp-54h]@1
  int v15; // [sp+10h] [bp-50h]@1
  int v16; // [sp+14h] [bp-4Ch]@1
  char v17; // [sp+18h] [bp-48h]@1
  char v18; // [sp+24h] [bp-3Ch]@1
  int v19; // [sp+28h] [bp-38h]@1
  int v20; // [sp+2Ch] [bp-34h]@1
  int v21; // [sp+30h] [bp-30h]@1
  int v22; // [sp+34h] [bp-2Ch]@1
  int v23; // [sp+38h] [bp-28h]@1
  char v24; // [sp+3Ch] [bp-24h]@1

  v3 = a3;
  v4 = this;
  v5 = a2;
  BlockPos::BlockPos((int)&v18, a3, 0);
  v21 = *(_DWORD *)&v18 - 16;
  v22 = v19 - 16;
  v23 = v20 - 16;
  Vec3::Vec3((int)&v24, (int)&v21);
  BlockPos::BlockPos((int)&v11, v3, 0);
  v14 = v11 + 32;
  v15 = v12 + 32;
  v16 = v13 + 32;
  Vec3::Vec3((int)&v17, (int)&v14);
  AABB::AABB((int)v4, (int)&v24, (int)&v17);
  result = *((_WORD *)v5 + 12);
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
    VSTR            S0, [R4,#0x10]
  }
  *((_DWORD *)v4 + 1) = 0;
  return result;
}


int __fastcall BlockSource::fireBlockEvent(BlockSource *this, int a2, int a3, int a4, int a5, int a6)
{
  BlockSource *v6; // r7@1
  int v7; // r6@1
  __int64 v8; // r0@1
  unsigned int v9; // r4@2

  v6 = this;
  v7 = a2;
  v8 = *((_QWORD *)this + 5);
  if ( HIDWORD(v8) != (_DWORD)v8 )
  {
    v9 = 0;
    do
    {
      (*(void (__cdecl **)(_DWORD, BlockSource *, int))(**(_DWORD **)(v8 + 4 * v9) + 40))(
        *(_DWORD *)(v8 + 4 * v9),
        v6,
        v7);
      v8 = *((_QWORD *)v6 + 5);
      ++v9;
    }
    while ( v9 < (HIDWORD(v8) - (signed int)v8) >> 2 );
  }
  return v8;
}


int __fastcall BlockSource::shouldThaw(BlockSource *this, const BlockPos *a2, int a3)
{
  int v3; // r6@1
  const BlockPos *v4; // r5@1
  BlockSource *v5; // r4@1
  Biome *v6; // r0@1
  signed int v13; // r0@2
  int v14; // r1@6
  int v15; // r2@6
  int v16; // r1@7
  int v17; // r2@7
  int v18; // r2@8
  int v19; // r2@9
  int result; // r0@10
  __int64 v21; // [sp+4h] [bp-44h]@9
  int v22; // [sp+Ch] [bp-3Ch]@9
  __int64 v23; // [sp+10h] [bp-38h]@8
  int v24; // [sp+18h] [bp-30h]@8
  int v25; // [sp+1Ch] [bp-2Ch]@7
  int v26; // [sp+20h] [bp-28h]@7
  int v27; // [sp+24h] [bp-24h]@7
  int v28; // [sp+28h] [bp-20h]@6
  int v29; // [sp+2Ch] [bp-1Ch]@6
  int v30; // [sp+30h] [bp-18h]@6
  unsigned __int8 v31; // [sp+34h] [bp-14h]@4

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = (Biome *)BlockSource::getBiome(this, a2);
  _R0 = Biome::getTemperature(v6, v5, v4);
  __asm { VMOV            S0, R0 }
  _R1 = &Biome::RAIN_TEMP_THRESHOLD;
  __asm
  {
    VLDR            S2, [R1]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  result = 0;
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v13 = *((_DWORD *)v4 + 1);
    if ( v13 >= 0 && v13 < *((_WORD *)v5 + 12) )
    {
      BlockSource::getBlockID((BlockSource *)&v31, v5, (int)v4);
      if ( v31 == *(_BYTE *)(Block::mIce + 4) )
      {
        if ( v3 != 1
          || (v14 = *((_DWORD *)v4 + 1),
              v15 = *((_DWORD *)v4 + 2),
              v28 = *(_DWORD *)v4 - 1,
              v29 = v14,
              v30 = v15,
              BlockSource::_isIceAt(v5, (const BlockPos *)&v28) != 1)
          || (v16 = *((_DWORD *)v4 + 1),
              v17 = *((_DWORD *)v4 + 2),
              v25 = *(_DWORD *)v4 + 1,
              v26 = v16,
              v27 = v17,
              BlockSource::_isIceAt(v5, (const BlockPos *)&v25) != 1)
          || (v18 = *((_DWORD *)v4 + 2),
              v23 = *(_QWORD *)v4,
              v24 = v18 - 1,
              BlockSource::_isIceAt(v5, (const BlockPos *)&v23) != 1)
          || (v19 = *((_DWORD *)v4 + 2),
              v21 = *(_QWORD *)v4,
              v22 = v19 + 1,
              BlockSource::_isIceAt(v5, (const BlockPos *)&v21) != 1) )
        {
          result = 1;
        }
      }
    }
  return result;
}


int __fastcall BlockSource::getChunk(BlockSource *this, const ChunkPos *a2)
{
  BlockSource *v2; // r5@1
  int v3; // r4@1
  const ChunkPos *v4; // r1@3
  LevelChunk *v5; // r0@6
  char *v6; // r0@7
  int v7; // r5@9
  unsigned int *v8; // r1@10
  unsigned int v9; // r0@12
  unsigned int *v10; // r6@16
  unsigned int v11; // r0@18
  LevelChunk *v13; // [sp+0h] [bp-18h]@4
  int v14; // [sp+4h] [bp-14h]@9

  v2 = this;
  v3 = *((_DWORD *)this + 16);
  if ( !v3 || *(_QWORD *)a2 ^ *((_QWORD *)this + 7) )
  {
    v4 = (const ChunkPos *)*((_DWORD *)this + 4);
    if ( *((_BYTE *)this + 8) )
      ChunkSource::getGeneratedChunk((ChunkSource *)&v13, v4);
    else
      ChunkSource::getAvailableChunk((ChunkSource *)&v13, v4);
    v5 = v13;
    *((_DWORD *)v2 + 16) = v13;
    if ( v5 )
    {
      v6 = LevelChunk::getPosition(v5);
      v3 = *((_DWORD *)v2 + 16);
    }
      v3 = 0;
      v6 = (char *)&ChunkPos::INVALID;
    *((_QWORD *)v2 + 7) = *(_QWORD *)v6;
    v7 = v14;
    if ( v14 )
      v8 = (unsigned int *)(v14 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        v10 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  return v3;
}


int __fastcall BlockSource::setBlockNoUpdate(int a1, int a2, int a3, int a4, char *a5)
{
  int v5; // r4@1
  int v7; // [sp+Ch] [bp-1Ch]@1
  int v8; // [sp+10h] [bp-18h]@1
  int v9; // [sp+14h] [bp-14h]@1
  int v10; // [sp+18h] [bp-10h]@1
  char v11; // [sp+1Ch] [bp-Ch]@1
  char v12; // [sp+1Dh] [bp-Bh]@1

  v7 = a2;
  v8 = a3;
  v9 = a4;
  v11 = *a5;
  v12 = 0;
  v10 = 0;
  v5 = BlockSource::setBlockAndData(a1, (BlockPos *)&v7, (int)&v11, 4, 0, (int)&v10);
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  return v5;
}


int __fastcall BlockSource::BlockSource(int a1, BlockSourceListener *a2, int a3, int a4, int a5, char a6)
{
  int v6; // r4@1
  int v7; // r7@1
  int v8; // r5@1
  BlockSourceListener *v9; // r6@1
  __int64 v10; // r0@2
  unsigned int v11; // r6@3

  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  *(_DWORD *)a1 = &off_271823C;
  *(_DWORD *)(a1 + 4) = pthread_self();
  *(_BYTE *)(v6 + 8) = a6;
  *(_BYTE *)(v6 + 9) = a5;
  *(_DWORD *)(v6 + 12) = v9;
  *(_DWORD *)(v6 + 16) = v7;
  *(_DWORD *)(v6 + 20) = v8;
  *(_WORD *)(v6 + 24) = *(_WORD *)(v8 + 120);
  *(_DWORD *)(v6 + 44) = 0;
  *(_DWORD *)(v6 + 48) = 0;
  *(_DWORD *)(v6 + 36) = 0;
  *(_DWORD *)(v6 + 40) = 0;
  *(_DWORD *)(v6 + 28) = 0;
  *(_DWORD *)(v6 + 32) = 0;
  *(_QWORD *)(v6 + 56) = *(_QWORD *)&ChunkPos::INVALID;
  *(_DWORD *)(v6 + 64) = 0;
  *(_DWORD *)(v6 + 68) = 0;
  *(_BYTE *)(v6 + 72) = *(_BYTE *)(v8 + 108);
  *(_BYTE *)(v6 + 73) = *(_BYTE *)(v8 + 109);
  _aeabi_memclr4(v6 + 76, 36);
  if ( a5 == 1 )
  {
    BlockSource::addListener((BlockSource *)v6, v9);
    v10 = *(_QWORD *)(v6 + 40);
    if ( HIDWORD(v10) != (_DWORD)v10 )
    {
      v11 = 0;
      do
      {
        (*(void (**)(void))(**(_DWORD **)(v10 + 4 * v11) + 8))();
        v10 = *(_QWORD *)(v6 + 40);
        ++v11;
      }
      while ( v11 < (HIDWORD(v10) - (signed int)v10) >> 2 );
    }
  }
  return v6;
}


int __fastcall BlockSource::addUnloadedChunksAABBs(BlockSource *this, const AABB *a2)
{
  BlockSource *v2; // r11@1
  const AABB *v3; // r5@1
  int v4; // r6@1
  signed int v5; // r7@1
  __int64 *v6; // r5@1
  int v7; // r2@1
  int v8; // r10@1
  signed int v9; // r3@1
  int v10; // r7@1
  int v11; // r4@1
  int v12; // r9@1
  int v13; // r0@2
  int result; // r0@5
  int v15; // r8@6
  int v16; // r0@8
  int v22; // lr@8
  __int64 *v23; // r1@9
  int v24; // r0@9
  int v25; // r2@9
  int v26; // r3@9
  int v27; // r5@9
  int v28; // lr@9
  int v29; // r3@9
  int v30; // r5@9
  int v31; // r6@9
  int v32; // r1@10
  int v33; // r0@10
  int v34; // r2@10
  unsigned int v35; // r3@10
  unsigned int v36; // r2@12
  unsigned int v37; // r10@12
  int v38; // r4@17
  char *v39; // r7@18
  int v40; // r12@20
  int v41; // r3@20
  int v42; // r5@20
  int v43; // r6@20
  int v44; // r4@20
  int v45; // r5@20
  int v46; // r6@20
  char *v47; // r6@20
  char *v48; // r2@21
  int v49; // r3@21
  int v50; // r4@21
  int v51; // r5@21
  int v52; // r7@21
  int v53; // r4@21
  int v54; // r5@21
  int v55; // r7@21
  int v56; // [sp+14h] [bp-CCh]@1
  int v57; // [sp+18h] [bp-C8h]@1
  int v58; // [sp+1Ch] [bp-C4h]@1
  int v59; // [sp+20h] [bp-C0h]@1
  int v60; // [sp+24h] [bp-BCh]@1
  char *v61; // [sp+28h] [bp-B8h]@20
  int v62; // [sp+2Ch] [bp-B4h]@5
  char v63; // [sp+30h] [bp-B0h]@8
  int v64; // [sp+34h] [bp-ACh]@8
  char v65; // [sp+50h] [bp-90h]@1
  int v66; // [sp+54h] [bp-8Ch]@7
  int v67; // [sp+5Ch] [bp-84h]@1
  int v68; // [sp+64h] [bp-7Ch]@1
  int v69; // [sp+68h] [bp-78h]@1
  int v70; // [sp+70h] [bp-70h]@1
  char v71; // [sp+74h] [bp-6Ch]@8
  int v72; // [sp+78h] [bp-68h]@8
  int v73; // [sp+7Ch] [bp-64h]@8
  int v74; // [sp+80h] [bp-60h]@8
  int v75; // [sp+84h] [bp-5Ch]@8
  int v76; // [sp+88h] [bp-58h]@8
  char v77; // [sp+8Ch] [bp-54h]@8
  char v78; // [sp+98h] [bp-48h]@8
  int v79; // [sp+9Ch] [bp-44h]@8
  int v80; // [sp+A0h] [bp-40h]@8
  int v81; // [sp+A4h] [bp-3Ch]@8
  int v82; // [sp+A8h] [bp-38h]@8
  int v83; // [sp+ACh] [bp-34h]@8
  char v84; // [sp+B0h] [bp-30h]@8

  v2 = this;
  v3 = a2;
  BlockPos::BlockPos((int)&v69, (int)a2);
  v4 = v69;
  v5 = v70;
  BlockPos::BlockPos((int)&v67, (int)v3 + 12);
  v5 -= 16;
  v6 = (__int64 *)&v65;
  v7 = (v4 - 16) >> 4;
  v8 = (1 - (v5 >> 4) + ((v68 + 32) >> 4)) * (1 - v7 + ((v67 + 32) >> 4));
  v9 = v5 >> 4;
  v10 = (v67 + 32) >> 4;
  v11 = v9;
  v12 = 0;
  v58 = v9;
  v60 = v8;
  v57 = (v4 - 16) >> 4;
  v56 = (v68 + 32) >> 4;
  v59 = (v67 + 32) >> 4;
LABEL_5:
  result = v7;
  v62 = v11;
  while ( 1 )
  {
    v15 = result;
    if ( v8 == v12 )
      return result;
    *(_DWORD *)&v65 = result;
    v66 = v11;
    if ( !BlockSource::getChunk(v2, (const ChunkPos *)v6) )
    {
      BlockPos::BlockPos((int)&v78, v6, 0);
      v81 = *(_DWORD *)&v78 - 16;
      v82 = v79 - 16;
      v83 = v80 - 16;
      Vec3::Vec3((int)&v84, (int)&v81);
      BlockPos::BlockPos((int)&v71, v6, 0);
      v74 = *(_DWORD *)&v71 + 32;
      v75 = v72 + 32;
      v76 = v73 + 32;
      Vec3::Vec3((int)&v77, (int)&v74);
      v16 = AABB::AABB((int)&v63, (int)&v84, (int)&v77);
      _R1 = *((_WORD *)v2 + 12);
      __asm
      {
        VMOV            S0, R1
        VCVT.F32.S32    S0, S0
        VSTR            S0, [SP,#0xE0+var_A0]
      }
      v64 = 0;
      v22 = *((_QWORD *)v2 + 13);
      if ( v22 == *((_QWORD *)v2 + 13) >> 32 )
        v32 = v16;
        v33 = *((_DWORD *)v2 + 25);
        v34 = (v22 - v33) >> 2;
        v35 = -1227133513 * v34;
        if ( v22 == v33 )
          v35 = 1;
        v36 = v35 + -1227133513 * v34;
        v37 = v36;
        if ( v36 > 0x9249249 )
          v37 = 153391689;
        if ( v36 < v35 )
        if ( v37 )
        {
          v38 = v32;
          if ( v37 >= 0x924924A )
            sub_21E57F4();
          v39 = (char *)operator new(28 * v37);
          v22 = *(_QWORD *)((char *)v2 + 100) >> 32;
          v33 = *(_QWORD *)((char *)v2 + 100);
        }
        else
          v39 = 0;
        v61 = v39;
        v40 = (int)&v39[v22 - v33];
        v42 = *(_DWORD *)(v38 + 4);
        v43 = *(_DWORD *)(v38 + 8);
        v41 = v38 + 12;
        *(_DWORD *)v40 = *(_DWORD *)v38;
        *(_DWORD *)(v40 + 4) = v42;
        *(_DWORD *)(v40 + 8) = v43;
        v40 += 12;
        v44 = *(_DWORD *)(v38 + 16);
        v45 = *(_DWORD *)(v41 + 8);
        v46 = *(_DWORD *)(v41 + 12);
        *(_DWORD *)v40 = *(_DWORD *)v41;
        *(_DWORD *)(v40 + 4) = v44;
        *(_DWORD *)(v40 + 8) = v45;
        *(_DWORD *)(v40 + 12) = v46;
        v47 = v39;
        if ( v22 != v33 )
          do
          {
            v48 = v47;
            v50 = *(_DWORD *)v33;
            v51 = *(_DWORD *)(v33 + 4);
            v52 = *(_DWORD *)(v33 + 8);
            v49 = v33 + 12;
            v33 += 28;
            v47 += 28;
            *(_DWORD *)v48 = v50;
            *((_DWORD *)v48 + 1) = v51;
            *((_DWORD *)v48 + 2) = v52;
            v48 += 12;
            v53 = *(_DWORD *)(v49 + 4);
            v54 = *(_DWORD *)(v49 + 8);
            v55 = *(_DWORD *)(v49 + 12);
            *(_DWORD *)v48 = *(_DWORD *)v49;
            *((_DWORD *)v48 + 1) = v53;
            *((_DWORD *)v48 + 2) = v54;
            *((_DWORD *)v48 + 3) = v55;
          }
          while ( v22 != v33 );
          v33 = *((_DWORD *)v2 + 25);
        if ( v33 )
          operator delete((void *)v33);
        *((_DWORD *)v2 + 25) = v61;
        *((_DWORD *)v2 + 26) = v47 + 28;
        v6 = (__int64 *)&v65;
        *((_DWORD *)v2 + 27) = &v61[28 * v37];
        v8 = v60;
        v10 = v59;
      else
        v23 = v6;
        v25 = *(_DWORD *)v16;
        v26 = *(_DWORD *)(v16 + 4);
        v27 = *(_DWORD *)(v16 + 8);
        v24 = v16 + 12;
        *(_DWORD *)v22 = v25;
        *(_DWORD *)(v22 + 4) = v26;
        *(_DWORD *)(v22 + 8) = v27;
        v28 = v22 + 12;
        v29 = *(_DWORD *)(v24 + 4);
        v30 = *(_DWORD *)(v24 + 8);
        v31 = *(_DWORD *)(v24 + 12);
        *(_DWORD *)v28 = *(_DWORD *)v24;
        *(_DWORD *)(v28 + 4) = v29;
        *(_DWORD *)(v28 + 8) = v30;
        *(_DWORD *)(v28 + 12) = v31;
        v6 = v23;
        *((_DWORD *)v2 + 26) += 28;
      v11 = v62;
    }
    ++v12;
    result = v15 + 1;
    if ( v15 >= v10 )
      v13 = v58;
      if ( v11 < v56 )
        v13 = v11 + 1;
      v7 = v57;
      v11 = v13;
      goto LABEL_5;
  }
}


char *__fastcall BlockSource::addVoidFloor(BlockSource *this, const AABB *a2)
{
  BlockSource *v2; // r10@1
  int v3; // r7@1
  __int64 v4; // kr00_8@1
  int v5; // r1@1
  __int64 v6; // kr08_8@1
  int v7; // r12@1
  char *result; // r0@2
  int v9; // r0@3
  int v10; // r2@3
  unsigned int v11; // r5@3
  unsigned int v12; // r2@5
  unsigned int v13; // r9@5
  int v14; // r5@10
  char *v15; // r8@11
  int v16; // r2@13
  char *v17; // r7@13
  char *v18; // r2@14
  int v19; // r3@14
  int v20; // r4@14
  int v21; // r5@14
  int v22; // r6@14
  int v23; // r4@14
  int v24; // r5@14
  int v25; // r6@14
  int v26; // r7@16

  v2 = this;
  v3 = *(_DWORD *)a2;
  v4 = *((_QWORD *)a2 + 1);
  v6 = *(_QWORD *)((char *)a2 + 20);
  v5 = *(_QWORD *)((char *)a2 + 20) >> 32;
  v7 = *((_QWORD *)this + 13);
  if ( v7 == *((_QWORD *)this + 13) >> 32 )
  {
    v9 = *((_DWORD *)this + 25);
    v10 = (v7 - v9) >> 2;
    v11 = -1227133513 * v10;
    if ( v7 == v9 )
      v11 = 1;
    v12 = v11 + -1227133513 * v10;
    v13 = v12;
    if ( v12 > 0x9249249 )
      v13 = 153391689;
    if ( v12 < v11 )
    if ( v13 )
    {
      v14 = v5;
      if ( v13 >= 0x924924A )
        sub_21E57F4();
      v15 = (char *)operator new(28 * v13);
      v7 = *(_QWORD *)((char *)v2 + 100) >> 32;
      v9 = *(_QWORD *)((char *)v2 + 100);
      v5 = v14;
    }
    else
      v15 = 0;
    *(_DWORD *)&v15[v7 - v9] = v3;
    v16 = (int)&v15[v7 - v9];
    *(_DWORD *)(v16 + 4) = -8388609;
    *(_QWORD *)(v16 + 8) = v4;
    *(_DWORD *)(v16 + 16) = -1038090240;
    v17 = v15;
    *(_DWORD *)(v16 + 20) = v6;
    *(_DWORD *)(v16 + 24) = v5;
    if ( v7 != v9 )
      do
      {
        v18 = v17;
        v20 = *(_DWORD *)v9;
        v21 = *(_DWORD *)(v9 + 4);
        v22 = *(_DWORD *)(v9 + 8);
        v19 = v9 + 12;
        v9 += 28;
        v17 += 28;
        *(_DWORD *)v18 = v20;
        *((_DWORD *)v18 + 1) = v21;
        *((_DWORD *)v18 + 2) = v22;
        v18 += 12;
        v23 = *(_DWORD *)(v19 + 4);
        v24 = *(_DWORD *)(v19 + 8);
        v25 = *(_DWORD *)(v19 + 12);
        *(_DWORD *)v18 = *(_DWORD *)v19;
        *((_DWORD *)v18 + 1) = v23;
        *((_DWORD *)v18 + 2) = v24;
        *((_DWORD *)v18 + 3) = v25;
      }
      while ( v7 != v9 );
      v9 = *((_DWORD *)v2 + 25);
    v26 = (int)(v17 + 28);
    if ( v9 )
      operator delete((void *)v9);
    *((_DWORD *)v2 + 25) = v15;
    *((_DWORD *)v2 + 26) = v26;
    result = &v15[28 * v13];
    *((_DWORD *)v2 + 27) = result;
  }
  else
    *(_DWORD *)v7 = v3;
    *(_DWORD *)(v7 + 4) = -8388609;
    *(_QWORD *)(v7 + 8) = v4;
    *(_DWORD *)(v7 + 16) = -1038090240;
    *(_DWORD *)(v7 + 20) = v6;
    *(_DWORD *)(v7 + 24) = v5;
    result = (char *)(*((_DWORD *)this + 26) + 28);
    *((_DWORD *)v2 + 26) = result;
  return result;
}


signed int __fastcall BlockSource::hasChunksAt(BlockSource *a1, int a2)
{
  int v2; // r5@1
  BlockSource *v3; // r10@1
  int v4; // r7@2
  int v5; // r9@2
  int v6; // r6@2
  int v7; // r4@2
  int v8; // r4@3
  __int64 v9; // kr00_8@3
  int v10; // r5@3
  __int64 v11; // r8@3
  int v12; // r6@3
  int v13; // r0@4
  bool v14; // nf@4
  unsigned __int8 v15; // vf@4
  int v16; // r0@8
  int v18; // [sp+0h] [bp-38h]@3
  int v19; // [sp+4h] [bp-34h]@3
  int v20; // [sp+8h] [bp-30h]@7
  int v21; // [sp+Ch] [bp-2Ch]@7

  v2 = a2;
  v3 = a1;
  if ( *(_DWORD *)(a2 + 16) == *(_DWORD *)(a2 + 4) )
  {
    v4 = *(_DWORD *)a2;
    v5 = *(_DWORD *)(a2 + 40);
    v6 = 0;
    v7 = *(_DWORD *)(a2 + 8);
    while ( v5 != v6 )
    {
      v20 = v4;
      v21 = v7;
      if ( !BlockSource::getChunk(v3, (const ChunkPos *)&v20) )
        return 0;
      v16 = *(_DWORD *)(v2 + 12);
      ++v6;
      v15 = __OFSUB__(v4, v16);
      v14 = v4++ - v16 < 0;
      if ( !(v14 ^ v15) )
      {
        v13 = *(_DWORD *)(v2 + 20);
        v4 = *(_DWORD *)v2;
        v15 = __OFSUB__(v7, v13);
        v14 = v7++ - v13 < 0;
        if ( !(v14 ^ v15) )
          v7 = *(_DWORD *)(v2 + 8);
      }
    }
  }
  else
    v8 = *(_DWORD *)a2;
    v9 = *(_QWORD *)(a2 + 8);
    v18 = *(_DWORD *)(a2 + 20);
    v10 = 0;
    HIDWORD(v11) = *(_QWORD *)(a2 + 8);
    v19 = *(_QWORD *)(a2 + 8);
    v12 = (v18 + 1 - v9) * (HIDWORD(v9) + 1 - *(_DWORD *)a2);
LABEL_12:
    LODWORD(v11) = v8;
    while ( v12 != v10 )
      *(_QWORD *)&v20 = v11;
      ++v10;
      v15 = __OFSUB__((_DWORD)v11, HIDWORD(v9));
      v14 = (signed int)v11 - HIDWORD(v9) < 0;
      LODWORD(v11) = v11 + 1;
        v15 = __OFSUB__(HIDWORD(v11), v18);
        v14 = HIDWORD(v11)++ - v18 < 0;
          HIDWORD(v11) = v19;
        goto LABEL_12;
  return 1;
}


int __fastcall BlockSource::getBlock(BlockSource *this, const BlockPos *a2)
{
  unsigned __int8 v3; // [sp+4h] [bp-Ch]@1

  BlockSource::getBlockID((BlockSource *)&v3, this, (int)a2);
  return Block::mBlocks[v3];
}


signed int __fastcall BlockSource::setExtraData(BlockSource *this, const BlockPos *a2, int a3)
{
  BlockSource *v4; // r5@1
  signed int v5; // r0@1
  int v6; // r4@1
  LevelChunk *v7; // r7@3
  signed int v8; // r0@4
  char v10; // r0@8
  __int64 v14; // r2@9
  signed int result; // r0@10
  float v16; // [sp+8h] [bp-30h]@9
  char v17; // [sp+14h] [bp-24h]@4
  char v18; // [sp+18h] [bp-20h]@3

  _R6 = a2;
  v4 = this;
  v5 = *((_DWORD *)a2 + 1);
  v6 = a3;
  if ( v5 >= 0
    && v5 < *((_WORD *)v4 + 12)
    && (ChunkPos::ChunkPos((ChunkPos *)&v18, a2),
        (v7 = (LevelChunk *)BlockSource::getChunk(v4, (const ChunkPos *)&v18)) != 0) )
  {
    ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v17, _R6);
    v8 = LevelChunk::setBlockExtraData(v7, (const ChunkBlockPos *)&v17, v6);
    _ZF = v8 == 1;
    if ( v8 == 1 )
      _ZF = *((_BYTE *)v4 + 8) == 0;
    if ( _ZF )
    {
      v10 = *LevelChunk::getState(v7);
      __dmb();
      if ( v10 == 8 )
      {
        __asm
        {
          VLDR            S0, [R6]
          VMOV.F32        S6, #0.5
          VLDR            S2, [R6,#4]
          VLDR            S4, [R6,#8]
          VCVT.F32.S32    S0, S0
          VCVT.F32.S32    S2, S2
        }
        LODWORD(v14) = &v16;
        __asm { VCVT.F32.S32    S4, S4 }
        HIDWORD(v14) = v6;
          VADD.F32        S0, S0, S6
          VADD.F32        S2, S2, S6
          VADD.F32        S4, S4, S6
          VSTR            S0, [SP,#0x38+var_30]
          VSTR            S2, [SP,#0x38+var_2C]
          VSTR            S4, [SP,#0x38+var_28]
        Level::broadcastLevelEvent(*((Player **)v4 + 3), 4000, v14, 0);
      }
    }
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall BlockSource::canProvideSupport(BlockPos *a1, int a2)
{
  unsigned __int8 v3; // [sp+4h] [bp-1Ch]@1

  BlockSource::getBlockID((BlockSource *)&v3, a1, a2);
  return (*(int (__cdecl **)(_DWORD))(*(_DWORD *)Block::mBlocks[v3] + 44))(Block::mBlocks[v3]);
}


char *__fastcall BlockSource::getTopRainBlockPos(BlockSource *this, const BlockPos *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r5@1
  BlockSource *v4; // r6@1
  BlockSource *v5; // r4@1
  const ChunkBlockPos *v6; // r6@1
  char *result; // r0@2
  int v8; // [sp+4h] [bp-4h]@2
  int v9; // [sp+8h] [bp+0h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  ChunkPos::ChunkPos((ChunkPos *)&v9, a3);
  v6 = (const ChunkBlockPos *)BlockSource::getChunk(v4, (const ChunkPos *)&v9);
  if ( v6 )
  {
    ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v8, v3);
    result = LevelChunk::getTopRainBlockPos(v5, v6, &v8);
  }
  else
    result = (char *)-1;
    *(_DWORD *)v5 = -1;
    *((_DWORD *)v5 + 1) = -1;
    *((_DWORD *)v5 + 2) = -1;
  return result;
}


int __fastcall BlockSource::fireBlockChanged(int a1, int a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r11@1
  __int64 v6; // r0@1
  int v7; // r10@1
  int v8; // r5@1
  unsigned int v9; // r6@2
  int v10; // r0@3
  void (__cdecl *v11)(int, int, int, char *, char *); // r4@3
  char v13; // [sp+Ch] [bp-2Ch]@3
  char v14; // [sp+Dh] [bp-2Bh]@3
  char v15; // [sp+10h] [bp-28h]@3
  char v16; // [sp+11h] [bp-27h]@3

  v4 = a1;
  v5 = a2;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = a4;
  v8 = a3;
  if ( HIDWORD(v6) != (_DWORD)v6 )
  {
    v9 = 0;
    do
    {
      v10 = *(_DWORD *)(v6 + 4 * v9);
      v11 = *(void (__cdecl **)(int, int, int, char *, char *))(*(_DWORD *)v10 + 20);
      v15 = *(_BYTE *)v8;
      v16 = *(_BYTE *)(v8 + 1);
      v13 = *(_BYTE *)v7;
      v14 = *(_BYTE *)(v7 + 1);
      v11(v10, v4, v5, &v15, &v13);
      v6 = *(_QWORD *)(v4 + 40);
      ++v9;
    }
    while ( v9 < (HIDWORD(v6) - (signed int)v6) >> 2 );
  }
  return v6;
}


LevelChunk *__fastcall BlockSource::updateNeighborsAtExceptFromFacing(BlockSource *this, const BlockPos *a2, const BlockPos *a3, int a4)
{
  int v4; // r7@1
  const BlockPos *v5; // r8@1
  const BlockPos *v6; // r6@1
  BlockSource *v7; // r9@1
  char *v8; // r4@2
  char *v9; // r5@2
  int v10; // r1@3
  int v11; // r2@3
  int v12; // r1@4
  int v13; // r2@4
  int v14; // r0@5
  int v15; // r1@5
  int v16; // r0@6
  int v17; // r1@6
  int v18; // r1@7
  int v19; // r0@7
  LevelChunk *result; // r0@7
  int v21; // r1@8
  int v22; // r0@8
  int v23; // [sp+4h] [bp-64h]@8
  int v24; // [sp+8h] [bp-60h]@8
  int v25; // [sp+Ch] [bp-5Ch]@8
  int v26; // [sp+10h] [bp-58h]@7
  int v27; // [sp+14h] [bp-54h]@7
  int v28; // [sp+18h] [bp-50h]@7
  int v29; // [sp+1Ch] [bp-4Ch]@6
  int v30; // [sp+20h] [bp-48h]@6
  int v31; // [sp+24h] [bp-44h]@6
  int v32; // [sp+28h] [bp-40h]@5
  int v33; // [sp+2Ch] [bp-3Ch]@5
  int v34; // [sp+30h] [bp-38h]@5
  int v35; // [sp+34h] [bp-34h]@4
  int v36; // [sp+38h] [bp-30h]@4
  int v37; // [sp+3Ch] [bp-2Ch]@4
  int v38; // [sp+40h] [bp-28h]@3
  int v39; // [sp+44h] [bp-24h]@3
  int v40; // [sp+48h] [bp-20h]@3

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = this;
  if ( a4 == 4 )
  {
    v8 = (char *)a2 + 8;
    v9 = (char *)a2 + 4;
    goto LABEL_4;
  }
  v8 = (char *)a2 + 8;
  v10 = *((_DWORD *)a2 + 2);
  v9 = (char *)v6 + 4;
  v11 = *((_DWORD *)v6 + 1);
  v38 = *(_DWORD *)v6 - 1;
  v39 = v11;
  v40 = v10;
  BlockSource::neighborChanged(this, (const BlockPos *)&v38, v5);
  if ( v4 != 5 )
LABEL_4:
    v12 = *((_DWORD *)v6 + 1);
    v13 = *((_DWORD *)v6 + 2);
    v35 = *(_DWORD *)v6 + 1;
    v36 = v12;
    v37 = v13;
    BlockSource::neighborChanged(v7, (const BlockPos *)&v35, v5);
    if ( !v4 )
      goto LABEL_6;
  v14 = *(_DWORD *)v8;
  v15 = *(_DWORD *)v9 - 1;
  v32 = *(_DWORD *)v6;
  v33 = v15;
  v34 = v14;
  BlockSource::neighborChanged(v7, (const BlockPos *)&v32, v5);
  if ( v4 == 1 )
    goto LABEL_7;
LABEL_6:
  v16 = *(_DWORD *)v8;
  v17 = *(_DWORD *)v9 + 1;
  v29 = *(_DWORD *)v6;
  v30 = v17;
  v31 = v16;
  BlockSource::neighborChanged(v7, (const BlockPos *)&v29, v5);
  if ( v4 != 2 )
LABEL_7:
    v18 = *(_DWORD *)v9;
    v19 = *(_DWORD *)v8;
    v26 = *(_DWORD *)v6;
    v27 = v18;
    v28 = v19 - 1;
    result = BlockSource::neighborChanged(v7, (const BlockPos *)&v26, v5);
    if ( v4 == 3 )
      return result;
  v21 = *(_DWORD *)v9;
  v22 = *(_DWORD *)v8;
  v23 = *(_DWORD *)v6;
  v24 = v21;
  v25 = v22 + 1;
  return BlockSource::neighborChanged(v7, (const BlockPos *)&v23, v5);
}


int __fastcall BlockSource::getBlockEntity(BlockSource *this, int a2, int a3, int a4)
{
  BlockSource *v4; // r4@1
  LevelChunk *v5; // r4@1
  int result; // r0@2
  int v7; // [sp+0h] [bp-28h]@1
  int v8; // [sp+4h] [bp-24h]@1
  int v9; // [sp+8h] [bp-20h]@1
  char v10; // [sp+Ch] [bp-1Ch]@2
  char v11; // [sp+10h] [bp-18h]@1

  v4 = this;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  ChunkPos::ChunkPos((ChunkPos *)&v11, (const BlockPos *)&v7);
  v5 = (LevelChunk *)BlockSource::getChunk(v4, (const ChunkPos *)&v11);
  if ( v5 )
  {
    ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v10, (const BlockPos *)&v7);
    result = LevelChunk::getBlockEntity(v5, (const ChunkBlockPos *)&v10);
  }
  else
    result = 0;
  return result;
}


int __fastcall BlockSource::getMaterial(BlockSource *this, const BlockPos *a2)
{
  unsigned __int8 v3; // [sp+4h] [bp-Ch]@1

  BlockSource::getBlockID((BlockSource *)&v3, this, (int)a2);
  return Block::getMaterial((Block *)Block::mBlocks[v3]);
}


int __fastcall BlockSource::getChunk(BlockSource *this, int r1_0, __int64 a2)
{
  __int64 v4; // [sp+0h] [bp-10h]@1

  v4 = *(__int64 *)((char *)&a2 - 4);
  return BlockSource::getChunk(this, (const ChunkPos *)&v4);
}


int __fastcall BlockSource::fetchNearestEntityOfType(int a1, int a2, int a3, int a4, int a5)
{
  const Vec3 *v5; // r9@1
  int v6; // r6@1
  int v7; // r7@1
  int v8; // r5@1
  __int64 *v9; // r0@1
  __int64 *v10; // r6@1
  int v11; // r5@1
  __int64 v12; // r0@1
  unsigned int v16; // r4@2
  int v17; // r7@3
  signed int v19; // r0@3
  signed int v20; // r1@3
  int v22; // r0@7
  int v24; // [sp+4h] [bp-6Ch]@1
  int v25; // [sp+8h] [bp-68h]@1
  int v26; // [sp+Ch] [bp-64h]@1
  char v27; // [sp+10h] [bp-60h]@1
  char v28; // [sp+2Ch] [bp-44h]@1

  v5 = (const Vec3 *)a3;
  v6 = a2;
  v7 = a1;
  v8 = a4;
  AABB::AABB((int)&v28, a3, a3);
  v24 = v8;
  v25 = v8;
  v26 = v8;
  AABB::grow((AABB *)&v27, (const Vec3 *)&v28, (int)&v24);
  v9 = (__int64 *)BlockSource::fetchEntities(v7, a5, (int)&v27, v6);
  v10 = v9;
  v11 = 0;
  v12 = *v9;
  if ( HIDWORD(v12) != (_DWORD)v12 )
  {
    __asm { VMOV.F32        S16, #-1.0 }
    v16 = 0;
    do
    {
      v17 = *(_DWORD *)(v12 + 4 * v16);
      _R0 = Entity::distanceToSqr(*(Entity **)(v12 + 4 * v16), v5);
      __asm { VMOV            S0, R0 }
      v19 = 0;
      v20 = 0;
      ++v16;
      __asm
      {
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S16, #0.0
      }
      if ( _NF ^ _VF )
        v19 = 1;
      __asm { VMRS            APSR_nzcv, FPSCR }
        v20 = 1;
      v22 = v19 | v20;
      _ZF = v22 == 0;
      if ( v22 )
        __asm { VMOVNE.F32      S16, S0 }
      v12 = *v10;
      if ( !_ZF )
        v11 = v17;
    }
    while ( v16 < (HIDWORD(v12) - (signed int)v12) >> 2 );
  }
  return v11;
}


signed int __fastcall BlockSource::isEmptyBlock(BlockSource *this, int a2, int a3, int a4)
{
  signed int result; // r0@1
  int v5; // [sp+0h] [bp-18h]@1
  int v6; // [sp+4h] [bp-14h]@1
  int v7; // [sp+8h] [bp-10h]@1
  char v8; // [sp+Ch] [bp-Ch]@1

  v5 = a2;
  v6 = a3;
  v7 = a4;
  BlockSource::getBlockID((BlockSource *)&v8, this, (int)&v5);
  result = 0;
  if ( !v8 )
    result = 1;
  return result;
}


int __fastcall BlockSource::getBlockEntity(BlockSource *this, const BlockPos *a2)
{
  BlockSource *v2; // r5@1
  const BlockPos *v3; // r4@1
  LevelChunk *v4; // r5@1
  int result; // r0@2
  char v6; // [sp+4h] [bp-1Ch]@2
  char v7; // [sp+8h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ChunkPos::ChunkPos((ChunkPos *)&v7, a2);
  v4 = (LevelChunk *)BlockSource::getChunk(v2, (const ChunkPos *)&v7);
  if ( v4 )
  {
    ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v6, v3);
    result = LevelChunk::getBlockEntity(v4, (const ChunkBlockPos *)&v6);
  }
  else
    result = 0;
  return result;
}


signed int __fastcall BlockSource::isUnobstructedByEntities(BlockSource *this, const AABB *a2, Entity *a3)
{
  char *v3; // r0@1
  char *v4; // r4@1
  __int64 v5; // r0@1
  int v6; // r6@2
  int v7; // r5@3
  signed int result; // r0@6

  v3 = BlockSource::fetchEntities(this, a3, a2);
  v4 = v3;
  v5 = *(_QWORD *)v3;
  if ( HIDWORD(v5) == (_DWORD)v5 )
  {
LABEL_6:
    result = 1;
  }
  else
    v6 = 0;
    while ( 1 )
    {
      v7 = *(_DWORD *)(v5 + 4 * v6);
      if ( !Entity::isRemoved(*(Entity **)(v5 + 4 * v6)) )
      {
        if ( *(_BYTE *)(v7 + 536) )
          break;
      }
      v5 = *(_QWORD *)v4;
      if ( ++v6 >= (unsigned int)((HIDWORD(v5) - (signed int)v5) >> 2) )
        goto LABEL_6;
    }
    result = 0;
  return result;
}


LevelChunk *__fastcall BlockSource::neighborChanged(BlockSource *this, const BlockPos *a2, const BlockPos *a3)
{
  BlockSource *v3; // r6@1
  const BlockPos *v4; // r9@1
  const BlockPos *v5; // r5@1
  LevelChunk *result; // r0@1
  Block *v7; // r7@2
  BlockTickingQueue *v8; // r0@3
  unsigned __int8 v9; // [sp+4h] [bp-2Ch]@2
  char v10; // [sp+8h] [bp-28h]@4

  v3 = this;
  v4 = a3;
  v5 = a2;
  result = (LevelChunk *)Level::isClientSide(*((Level **)this + 3));
  if ( !result )
  {
    BlockSource::getBlockID((BlockSource *)&v9, v3, (int)v5);
    v7 = (Block *)Block::mBlocks[v9];
    result = (LevelChunk *)Block::isType((Block *)Block::mBlocks[v9], (const Block *)Block::mAir);
    if ( !result )
    {
      v8 = (BlockTickingQueue *)*((_DWORD *)v3 + 17);
      if ( !v8 )
      {
        ChunkPos::ChunkPos((ChunkPos *)&v10, v5);
        result = (LevelChunk *)BlockSource::getChunk(v3, (const ChunkPos *)&v10);
        if ( !result )
          return result;
        v8 = (BlockTickingQueue *)LevelChunk::getTickQueue(result);
      }
      if ( BlockTickingQueue::isInstaticking(v8) != 1
        || (result = (LevelChunk *)Block::canInstatick(v7), result == (LevelChunk *)1) )
        result = (LevelChunk *)(*(int (__fastcall **)(Block *, BlockSource *, const BlockPos *, const BlockPos *))(*(_DWORD *)v7 + 252))(
                                 v7,
                                 v3,
                                 v5,
                                 v4);
    }
  }
  return result;
}


unsigned int __fastcall BlockSource::getData(BlockSource *this, const BlockPos *a2)
{
  const BlockPos *v2; // r4@1
  BlockSource *v3; // r5@1
  signed int v4; // r0@1
  int v5; // r5@3
  unsigned int v6; // r0@4
  unsigned int result; // r0@5
  unsigned int v8; // r2@6
  unsigned __int16 v9; // [sp+4h] [bp-1Ch]@4
  __int16 v10; // [sp+6h] [bp-1Ah]@4
  char v11; // [sp+8h] [bp-18h]@3

  v2 = a2;
  v3 = this;
  v4 = *((_DWORD *)a2 + 1);
  if ( v4 < 0 )
  {
    LOBYTE(result) = 0;
  }
  else if ( v4 >= *((_WORD *)v3 + 12) )
  else
    ChunkPos::ChunkPos((ChunkPos *)&v11, a2);
    v5 = BlockSource::getChunk(v3, (const ChunkPos *)&v11);
    if ( v5 )
    {
      ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v9, v2);
      v6 = v10 >> 4;
      if ( v6 >= *(_DWORD *)(v5 + 140) )
      {
        LOBYTE(result) = 0;
      }
      else
        result = *(_DWORD *)(v5 + 4 * v6 + 76);
        if ( result )
        {
          v8 = *(_BYTE *)(result + ((unsigned __int16)((v10 & 0xF | (v9 >> 4) & 0xFF0) + (v9 << 8)) >> 1) + 4096);
          LOBYTE(result) = v8 & 0xF;
          if ( (v10 & 0xF | ((unsigned int)v9 >> 4) & 0xF0) & 1 )
            result = v8 >> 4;
        }
        else
          LOBYTE(result) = 0;
    }
    else
      LOBYTE(result) = 0;
  return (unsigned __int8)result;
}


BlockSource *__fastcall BlockSource::fetchBorderBlockCollisions(BlockSource *this, BlockSource *a2, const AABB *a3, Entity *a4)
{
  Entity *v4; // r4@1
  BlockSource *v5; // r11@1
  const AABB *v6; // r5@1
  BlockSource *v7; // r6@1
  mce::Math *v12; // r2@3
  int v13; // r5@3
  int v14; // r3@3
  mce::Math *v15; // r7@3
  int v16; // r3@3
  float v17; // r4@3
  int v18; // r7@3
  float v20; // r0@3
  float v24; // r1@3
  int v25; // r0@3
  int v26; // r8@3
  float v28; // r1@3
  float v29; // r1@3
  ChunkPos *v31; // r10@4
  int v33; // r0@5
  int v34; // r4@5
  float v36; // r1@5
  int v37; // r9@7
  LevelChunk *v38; // r4@7
  _BOOL4 v39; // r0@8
  Entity *v40; // r10@8
  int v41; // lr@8
  mce::Math **v42; // r3@8
  int v43; // r6@8
  int v44; // r5@8
  char *v45; // r2@8
  int v46; // r4@9
  _DWORD *v47; // r11@9
  void (__fastcall *v48)(_DWORD); // r12@10
  mce::Math **v49; // r7@10
  char *v50; // r8@10
  float v51; // r10@10
  int v52; // r6@15
  LevelChunk *v53; // r4@15
  int v55; // [sp+18h] [bp-B8h]@3
  int v56; // [sp+20h] [bp-B0h]@4
  BlockSource *v57; // [sp+24h] [bp-ACh]@1
  int v58; // [sp+28h] [bp-A8h]@4
  BlockSource *v59; // [sp+2Ch] [bp-A4h]@3
  int v60; // [sp+30h] [bp-A0h]@4
  int v61; // [sp+34h] [bp-9Ch]@5
  int v62; // [sp+38h] [bp-98h]@5
  Entity *v63; // [sp+3Ch] [bp-94h]@3
  char v64; // [sp+40h] [bp-90h]@8
  int v65; // [sp+44h] [bp-8Ch]@10
  int v66; // [sp+48h] [bp-88h]@10
  __int64 v67; // [sp+4Ch] [bp-84h]@7
  int v68; // [sp+54h] [bp-7Ch]@7
  mce::Math *v69; // [sp+58h] [bp-78h]@3
  int v70; // [sp+5Ch] [bp-74h]@3
  mce::Math *v71; // [sp+60h] [bp-70h]@3
  float v72; // [sp+64h] [bp-6Ch]@3
  int v73; // [sp+68h] [bp-68h]@3
  float v74; // [sp+6Ch] [bp-64h]@3
  int v75; // [sp+70h] [bp-60h]@3
  char v76; // [sp+78h] [bp-58h]@3
  char v78; // [sp+84h] [bp-4Ch]@8
  char v79; // [sp+88h] [bp-48h]@4

  v4 = a4;
  v5 = this;
  v6 = a3;
  v7 = a2;
  v57 = this;
  if ( !a4 || !(*(int (__fastcall **)(Entity *))(*(_DWORD *)a4 + 648))(a4) )
  {
    v59 = v7;
    v63 = v4;
    AABB::getCenter((AABB *)&v76, (int)v6);
    __asm
    {
      VMOV.F32        S0, #-1.0
      VLDR            S18, [SP,#0xD0+var_54]
    }
    v12 = *(mce::Math **)v6;
    v14 = *((_DWORD *)v6 + 1);
    v15 = (mce::Math *)*((_DWORD *)v6 + 2);
    v13 = (int)v6 + 12;
    v69 = v12;
    v70 = v14;
    v71 = v15;
    v16 = *(_DWORD *)(v13 + 4);
    v17 = *(float *)(v13 + 8);
    v18 = *(_DWORD *)(v13 + 12);
    __asm { VADD.F32        S0, S18, S0 }
    v72 = *(float *)v13;
    v73 = v16;
    v74 = v17;
    v75 = v18;
    __asm { VMOV            R0, S0 }
    v20 = floorf(_R0);
    __asm { VMOV.F32        S16, #1.0 }
    _R5 = v20;
      VADD.F32        S0, S18, S16
      VMOV            R0, S0
    _R4 = ceilf(_R0);
    v25 = mce::Math::floor(v69, v24);
    __asm { VLDR            S0, [SP,#0xD0+var_6C] }
    v26 = v25;
      VMOV            S2, R5
      VADD.F32        S0, S0, S16
      VMOV            S0, R4
      VCVTR.S32.F32   S18, S0
      VCVTR.S32.F32   S20, S2
    v55 = mce::Math::floor(_R0, v28) + 1;
    if ( v26 != v55 )
      __asm { VMOV            R0, S18 }
      v31 = (ChunkPos *)&v79;
      v60 = _R0;
      __asm { VMOV            R0, S20 }
      v56 = _R0;
      v58 = (int)v5 + 100;
      do
      {
        v62 = v26;
        v33 = mce::Math::floor(v71, v29);
        __asm { VLDR            S0, [SP,#0xD0+var_64] }
        v34 = v33;
        __asm
        {
          VADD.F32        S0, S0, S16
          VMOV            R0, S0
        }
        v61 = mce::Math::floor(_R0, v36) + 1;
        if ( v34 != v61 )
          if ( v56 >= v60 )
          {
            do
            {
              v67 = (unsigned int)v26;
              v52 = v34;
              v68 = v34;
              ChunkPos::ChunkPos(v31, (const BlockPos *)&v67);
              v53 = (LevelChunk *)BlockSource::getChunk(v5, v31);
              if ( v53 )
              {
                ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v78, (const BlockPos *)&v67);
                LevelChunk::getBorder(v53, (const ChunkBlockPos *)&v78);
              }
              v34 = v52 + 1;
            }
            while ( v61 != v52 + 1 );
          }
          else
              v37 = v34;
              v38 = (LevelChunk *)BlockSource::getChunk(v5, v31);
              if ( v38 )
                v39 = LevelChunk::getBorder(v38, (const ChunkBlockPos *)&v78);
                v40 = v63;
                v41 = v60;
                v29 = *(float *)&v59;
                v42 = &v69;
                v43 = v37;
                v44 = v58;
                v45 = &v64;
                if ( v39 == 1 )
                {
                  v46 = v56;
                  v47 = Block::mBorder;
                  do
                  {
                    v48 = *(void (__fastcall **)(_DWORD))(*v47 + 36);
                    v49 = v42;
                    *(_DWORD *)&v64 = v26;
                    v65 = v46;
                    v50 = v45;
                    v66 = v37;
                    v51 = v29;
                    v48(v47);
                    v45 = v50;
                    v29 = v51;
                    v40 = v63;
                    v26 = v62;
                    ++v46;
                    v42 = v49;
                  }
                  while ( v60 != v46 );
                }
              else
              v63 = v40;
              v60 = v41;
              v58 = v44;
              *(float *)&v59 = v29;
              v5 = v57;
              v31 = (ChunkPos *)&v79;
              v34 = v43 + 1;
            while ( v43 + 1 != v61 );
        ++v26;
      }
      while ( v26 != v55 );
  }
  return (BlockSource *)((char *)v5 + 100);
}


_BOOL4 __fastcall BlockSource::isSolidBlockingBlock(BlockSource *this, const BlockPos *a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r1@1
  int v4; // r4@1
  Material *v5; // r0@1
  int v6; // r1@1
  _BOOL4 result; // r0@2
  int v8; // r1@3
  __int64 v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+8h] [bp-10h]@1
  unsigned __int8 v11; // [sp+Ch] [bp-Ch]@1

  v2 = *(_QWORD *)a2;
  v3 = *((_DWORD *)a2 + 2);
  v9 = v2;
  v10 = v3;
  BlockSource::getBlockID((BlockSource *)&v11, this, (int)&v9);
  v4 = Block::mBlocks[v11];
  v5 = (Material *)Block::getMaterial((Block *)Block::mBlocks[v11]);
  if ( Material::isSolidBlocking(v5) == 1 )
  {
    if ( Block::hasProperty(v4, v6, 0x200000LL) )
      result = 1;
    else
      result = Block::hasProperty(v4, v8, 0x100000LL);
  }
  else
    result = 0;
  return result;
}


int __fastcall BlockSource::mayPlace(BlockPos *a1, int a2, int a3, int a4, int a5, int a6, Entity *a7)
{
  BlockPos *v7; // r8@1
  _BYTE *v8; // r9@1
  int v9; // r6@1
  int v10; // r5@1
  int v11; // r11@1
  int v12; // r10@1
  int v13; // r0@2
  AABB *v14; // r7@4
  signed int v15; // r0@6
  char *v16; // r0@9
  char *v17; // r7@9
  __int64 v18; // r0@9
  int v19; // r4@10
  int v20; // r6@11
  int v21; // r4@14
  int v22; // r1@14
  int v23; // r0@15
  int v24; // r6@15
  int v26; // [sp+10h] [bp-48h]@8
  char v27; // [sp+14h] [bp-44h]@17
  unsigned __int8 v28; // [sp+18h] [bp-40h]@1

  v7 = a1;
  v8 = (_BYTE *)a2;
  v9 = a4;
  v10 = a3;
  BlockSource::getBlockID((BlockSource *)&v28, a1, a3);
  v11 = Block::mBlocks[v28];
  v12 = Block::mBlocks[*v8];
  AABB::AABB((AABB *)&v28);
  if ( a5 )
    v13 = (unsigned __int8)(*(int (__fastcall **)(int))(*(_DWORD *)v12 + 296))(v12);
  if ( a6 )
    v14 = (AABB *)&AABB::EMPTY;
  else
    v14 = (AABB *)(*(int (__fastcall **)(int, BlockPos *, int, unsigned __int8 *))(*(_DWORD *)v12 + 32))(
                    v12,
                    v7,
                    v10,
                    &v28);
  v15 = *(_DWORD *)(v10 + 4);
  if ( v15 >= 0 && v15 < *((_WORD *)v7 + 12) )
  {
    v26 = v9;
    if ( AABB::isEmpty(v14)
      || (v16 = BlockSource::fetchEntities(v7, a7, v14), v17 = v16, v18 = *(_QWORD *)v16, HIDWORD(v18) == (_DWORD)v18) )
    {
LABEL_14:
      v21 = (*(int (__fastcall **)(int, BlockPos *, int))(*(_DWORD *)v11 + 332))(v11, v7, v10);
      if ( Block::hasProperty(v11, v22, 8200LL) )
      {
        v23 = 1;
        v24 = v26;
      }
      else
        if ( *(_BYTE *)(v12 + 4) == *(_BYTE *)(Block::mTopSnow + 4) )
        {
          v27 = *(_BYTE *)(v11 + 4);
          v23 = TopSnowBlock::checkIsRecoverableBlock(&v27);
        }
        else
          v23 = 0;
      if ( (v23 | v21) == 1
        && *v8 > (unsigned int)BlockID::AIR
        && (*(int (__fastcall **)(int, BlockPos *, int, int))(*(_DWORD *)v12 + 220))(v12, v7, v10, v24) )
        return 1;
    }
    else
      v19 = 0;
      while ( 1 )
        v20 = *(_DWORD *)(v18 + 4 * v19);
        if ( !Entity::isRemoved(*(Entity **)(v18 + 4 * v19)) )
          if ( *(_BYTE *)(v20 + 536) )
            break;
        v18 = *(_QWORD *)v17;
        if ( ++v19 >= (unsigned int)((HIDWORD(v18) - (signed int)v18) >> 2) )
          goto LABEL_14;
  }
  return 0;
}


int __fastcall BlockSource::setBlockAndData(int a1, int a2, int a3, int a4, int a5, int a6)
{
  char v6; // r2@1
  int v7; // r4@1
  int v9; // [sp+Ch] [bp-1Ch]@1
  int v10; // [sp+10h] [bp-18h]@1
  int v11; // [sp+14h] [bp-14h]@1
  int v12; // [sp+18h] [bp-10h]@1
  char v13; // [sp+1Ch] [bp-Ch]@1
  char v14; // [sp+1Dh] [bp-Bh]@1

  v9 = a2;
  v10 = a3;
  v11 = a4;
  v6 = *(_BYTE *)(a5 + 1);
  v13 = *(_BYTE *)a5;
  v14 = v6;
  v12 = 0;
  v7 = BlockSource::setBlockAndData(a1, (BlockPos *)&v9, (int)&v13, a6, 0, (int)&v12);
  if ( v12 )
    (*(void (**)(void))(*(_DWORD *)v12 + 4))();
  return v7;
}


int __fastcall BlockSource::clearCachedLastChunk(int result)
{
  *(_DWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 56) = *(_QWORD *)&ChunkPos::INVALID;
  return result;
}


unsigned int __fastcall BlockSource::getData(BlockSource *this, int a2, int a3, int a4)
{
  int v5; // [sp+4h] [bp-14h]@1
  int v6; // [sp+8h] [bp-10h]@1
  int v7; // [sp+Ch] [bp-Ch]@1

  v5 = a2;
  v6 = a3;
  v7 = a4;
  return BlockSource::getData(this, (const BlockPos *)&v5);
}


int __fastcall BlockSource::getLightColor(int a1, int a2, int a3, _BYTE *a4)
{
  BlockSource *v4; // r7@1
  int v5; // r5@1
  const BlockPos *v6; // r9@1
  _BYTE *v7; // r4@1
  unsigned int v8; // r6@1
  signed int v9; // r0@1
  const ChunkBlockPos *v10; // r7@3
  int result; // r0@7
  char v12; // [sp+0h] [bp-30h]@4
  unsigned __int8 v13; // [sp+1h] [bp-2Fh]@4
  char v14; // [sp+4h] [bp-2Ch]@4
  char v15; // [sp+8h] [bp-28h]@3

  v4 = (BlockSource *)a2;
  v5 = a1;
  v6 = (const BlockPos *)a3;
  *(_BYTE *)a1 = *(_BYTE *)(a2 + 72);
  v7 = a4;
  v8 = *(_BYTE *)(a2 + 73);
  *(_BYTE *)(a1 + 1) = v8;
  v9 = *(_DWORD *)(a3 + 4);
  if ( v9 >= 0 && v9 < *(_WORD *)(a2 + 24) )
  {
    ChunkPos::ChunkPos((ChunkPos *)&v15, (const BlockPos *)a3);
    v10 = (const ChunkBlockPos *)BlockSource::getChunk(v4, (const ChunkPos *)&v15);
    if ( v10 )
    {
      ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v14, v6);
      LevelChunk::getBrightness((LevelChunk *)&v12, v10, (int)&v14);
      v8 = v13;
      *(_BYTE *)v5 = v12;
      *(_BYTE *)(v5 + 1) = v8;
    }
  }
  if ( v8 >= *v7 )
    v7 = (_BYTE *)(v5 + 1);
  result = *v7;
  *(_BYTE *)(v5 + 1) = result;
  return result;
}


int __fastcall BlockSource::fireBrightnessChanged(BlockSource *this, const BlockPos *a2)
{
  BlockSource *v2; // r5@1
  __int64 v3; // r0@1
  unsigned int v4; // r6@2

  v2 = this;
  v3 = *((_QWORD *)this + 5);
  if ( HIDWORD(v3) != (_DWORD)v3 )
  {
    v4 = 0;
    do
    {
      (*(void (**)(void))(**(_DWORD **)(v3 + 4 * v4) + 24))();
      v3 = *((_QWORD *)v2 + 5);
      ++v4;
    }
    while ( v4 < (HIDWORD(v3) - (signed int)v3) >> 2 );
  }
  return v3;
}


unsigned int __fastcall BlockSource::clip(BlockSource *this, const Vec3 *a2, const Vec3 *a3, int a4, int a5, int a6, int a7, int a8)
{
  const Vec3 *v8; // r4@1
  BlockSource *v9; // r8@1
  int v10; // r9@1
  const Vec3 *v11; // r5@1
  float v12; // r1@1
  unsigned int result; // r0@3
  mce::Math *v14; // r1@4
  mce::Math *v15; // r2@4
  mce::Math *v16; // r1@4
  mce::Math *v17; // r2@4
  float v18; // r1@4
  float v19; // r1@4
  float v20; // r1@4
  float v21; // r1@4
  int v22; // r5@4
  float v23; // r1@4
  int v24; // r11@4
  Block *v25; // r5@4
  Material *v26; // r0@5
  int v27; // r7@6
  void (__fastcall *v28)(int *, Block *, BlockPos *, int *); // r4@6
  char v29; // r0@6
  int (__fastcall *v30)(Block *, BlockPos *, int *, int *); // r4@10
  AABB *v31; // r0@10
  void (__fastcall *v32)(BlockSource *, Block *, BlockPos *, int *); // r4@12
  float v33; // r1@14
  int v38; // r8@15
  signed int v42; // r0@42
  signed int v43; // r0@47
  signed int v44; // r0@50
  Block *v45; // r6@53
  signed int v46; // r9@54
  LevelChunk *v47; // r8@55
  _BOOL4 v48; // r0@56
  char v50; // r0@63
  char v51; // r0@66
  AABB *v52; // r0@70
  const AABB *v53; // r4@72
  Material *v54; // r0@74
  __int64 v55; // ST00_8@76
  const AABB *v56; // ST0C_4@80
  BlockPos *v57; // r9@80
  Block *v58; // r4@80
  Vec3 *v59; // [sp+30h] [bp-370h]@6
  int v60; // [sp+34h] [bp-36Ch]@4
  char v61; // [sp+38h] [bp-368h]@8
  int v62; // [sp+40h] [bp-360h]@4
  int v63; // [sp+48h] [bp-358h]@14
  Block *v64; // [sp+4Ch] [bp-354h]@6
  int v65; // [sp+50h] [bp-350h]@4
  unsigned __int8 v66; // [sp+54h] [bp-34Ch]@6
  int v67; // [sp+58h] [bp-348h]@4
  int v68; // [sp+5Ch] [bp-344h]@15
  int v69; // [sp+60h] [bp-340h]@4
  int v70; // [sp+60h] [bp-340h]@54
  BlockPos *v71; // [sp+64h] [bp-33Ch]@2
  char v72; // [sp+68h] [bp-338h]@92
  char v73; // [sp+6Ch] [bp-334h]@93
  int v74; // [sp+70h] [bp-330h]@93
  int v75; // [sp+74h] [bp-32Ch]@93
  int v76; // [sp+78h] [bp-328h]@93
  int v77; // [sp+7Ch] [bp-324h]@93
  int v78; // [sp+80h] [bp-320h]@93
  int v79; // [sp+84h] [bp-31Ch]@93
  char v80; // [sp+ACh] [bp-2F4h]@82
  char v81; // [sp+B0h] [bp-2F0h]@83
  int v82; // [sp+B4h] [bp-2ECh]@83
  int v83; // [sp+B8h] [bp-2E8h]@83
  int v84; // [sp+BCh] [bp-2E4h]@83
  int v85; // [sp+C0h] [bp-2E0h]@83
  int v86; // [sp+C4h] [bp-2DCh]@83
  int v87; // [sp+C8h] [bp-2D8h]@83
  int v88; // [sp+F0h] [bp-2B0h]@76
  char v89; // [sp+F4h] [bp-2ACh]@87
  int v90; // [sp+F8h] [bp-2A8h]@87
  int v91; // [sp+FCh] [bp-2A4h]@87
  int v92; // [sp+100h] [bp-2A0h]@87
  int v93; // [sp+104h] [bp-29Ch]@87
  int v94; // [sp+108h] [bp-298h]@87
  int v95; // [sp+10Ch] [bp-294h]@87
  int v96; // [sp+110h] [bp-290h]@87
  __int16 v97; // [sp+114h] [bp-28Ch]@87
  int v98; // [sp+118h] [bp-288h]@87
  int v99; // [sp+11Ch] [bp-284h]@87
  int v100; // [sp+120h] [bp-280h]@87
  int v101; // [sp+124h] [bp-27Ch]@87
  int v102; // [sp+128h] [bp-278h]@87
  int v103; // [sp+12Ch] [bp-274h]@87
  char v104; // [sp+130h] [bp-270h]@87
  int v105; // [sp+138h] [bp-268h]@54
  int v106; // [sp+13Ch] [bp-264h]@54
  int v107; // [sp+140h] [bp-260h]@54
  int v108; // [sp+144h] [bp-25Ch]@55
  int v109; // [sp+148h] [bp-258h]@55
  int v110; // [sp+14Ch] [bp-254h]@55
  unsigned __int8 v111; // [sp+150h] [bp-250h]@4
  unsigned __int8 v112; // [sp+151h] [bp-24Fh]@11
  int v113; // [sp+154h] [bp-24Ch]@53
  int v114; // [sp+158h] [bp-248h]@53
  unsigned __int8 v115; // [sp+16Ch] [bp-234h]@53
  unsigned __int8 v116; // [sp+16Dh] [bp-233h]@72
  int v117; // [sp+170h] [bp-230h]@90
  char v118; // [sp+174h] [bp-22Ch]@90
  int v119; // [sp+178h] [bp-228h]@90
  int v120; // [sp+17Ch] [bp-224h]@90
  int v121; // [sp+180h] [bp-220h]@90
  int v122; // [sp+184h] [bp-21Ch]@90
  int v123; // [sp+188h] [bp-218h]@90
  int v124; // [sp+18Ch] [bp-214h]@90
  int v125; // [sp+190h] [bp-210h]@90
  __int16 v126; // [sp+194h] [bp-20Ch]@90
  int v127; // [sp+198h] [bp-208h]@90
  int v128; // [sp+19Ch] [bp-204h]@90
  int v129; // [sp+1A0h] [bp-200h]@90
  int v130; // [sp+1A4h] [bp-1FCh]@90
  int v131; // [sp+1A8h] [bp-1F8h]@90
  int v132; // [sp+1ACh] [bp-1F4h]@90
  char v133; // [sp+1B0h] [bp-1F0h]@90
  int v134; // [sp+1B8h] [bp-1E8h]@91
  char v135; // [sp+1BCh] [bp-1E4h]@91
  int v136; // [sp+1C0h] [bp-1E0h]@91
  int v137; // [sp+1C4h] [bp-1DCh]@91
  int v138; // [sp+1C8h] [bp-1D8h]@91
  int v139; // [sp+1CCh] [bp-1D4h]@91
  int v140; // [sp+1D0h] [bp-1D0h]@91
  int v141; // [sp+1D4h] [bp-1CCh]@91
  int v142; // [sp+1D8h] [bp-1C8h]@91
  __int16 v143; // [sp+1DCh] [bp-1C4h]@91
  int v144; // [sp+1E0h] [bp-1C0h]@91
  int v145; // [sp+1E4h] [bp-1BCh]@91
  int v146; // [sp+1E8h] [bp-1B8h]@91
  int v147; // [sp+1ECh] [bp-1B4h]@91
  int v148; // [sp+1F0h] [bp-1B0h]@91
  int v149; // [sp+1F4h] [bp-1ACh]@91
  char v150; // [sp+1F8h] [bp-1A8h]@91
  int v151; // [sp+200h] [bp-1A0h]@4
  int v152; // [sp+204h] [bp-19Ch]@4
  int v153; // [sp+208h] [bp-198h]@4
  int v154; // [sp+20Ch] [bp-194h]@90
  int v155; // [sp+210h] [bp-190h]@90
  int v156; // [sp+214h] [bp-18Ch]@90
  int v157; // [sp+218h] [bp-188h]@90
  int v158; // [sp+21Ch] [bp-184h]@90
  int v159; // [sp+220h] [bp-180h]@90
  __int16 v160; // [sp+224h] [bp-17Ch]@90
  int v161; // [sp+228h] [bp-178h]@90
  int v162; // [sp+22Ch] [bp-174h]@90
  int v163; // [sp+230h] [bp-170h]@90
  int v164; // [sp+234h] [bp-16Ch]@90
  int v165; // [sp+238h] [bp-168h]@90
  int v166; // [sp+23Ch] [bp-164h]@90
  char v167; // [sp+240h] [bp-160h]@90
  char v168; // [sp+248h] [bp-158h]@12
  int v169; // [sp+28Ch] [bp-114h]@12
  int v170; // [sp+290h] [bp-110h]@12
  int v171; // [sp+294h] [bp-10Ch]@12
  int v172; // [sp+298h] [bp-108h]@10
  int v173; // [sp+29Ch] [bp-104h]@10
  int v174; // [sp+2A0h] [bp-100h]@10
  int v175; // [sp+2A4h] [bp-FCh]@6
  int v176; // [sp+2A8h] [bp-F8h]@6
  int v177; // [sp+2ACh] [bp-F4h]@6
  int v178; // [sp+2B0h] [bp-F0h]@6
  char v179; // [sp+2B4h] [bp-ECh]@6
  int v180; // [sp+2B8h] [bp-E8h]@6
  int v181; // [sp+2BCh] [bp-E4h]@6
  int v182; // [sp+2C0h] [bp-E0h]@6
  int v183; // [sp+2C4h] [bp-DCh]@6
  int v184; // [sp+2C8h] [bp-D8h]@6
  int v185; // [sp+2CCh] [bp-D4h]@6
  int v186; // [sp+2D0h] [bp-D0h]@6
  __int16 v187; // [sp+2D4h] [bp-CCh]@6
  int v188; // [sp+2D8h] [bp-C8h]@6
  int v189; // [sp+2DCh] [bp-C4h]@6
  int v190; // [sp+2E0h] [bp-C0h]@6
  int v191; // [sp+2E4h] [bp-BCh]@6
  int v192; // [sp+2E8h] [bp-B8h]@6
  int v193; // [sp+2ECh] [bp-B4h]@6
  char v194; // [sp+2F0h] [bp-B0h]@6
  int v195; // [sp+2F8h] [bp-A8h]@4
  char v196; // [sp+2FCh] [bp-A4h]@6
  int v197; // [sp+300h] [bp-A0h]@6
  int v198; // [sp+304h] [bp-9Ch]@6
  int v199; // [sp+308h] [bp-98h]@6
  int v200; // [sp+30Ch] [bp-94h]@6
  int v201; // [sp+310h] [bp-90h]@6
  int v202; // [sp+314h] [bp-8Ch]@6
  int v203; // [sp+318h] [bp-88h]@6
  __int16 v204; // [sp+31Ch] [bp-84h]@6
  int v205; // [sp+320h] [bp-80h]@6
  int v206; // [sp+324h] [bp-7Ch]@6
  int v207; // [sp+328h] [bp-78h]@6
  int v208; // [sp+32Ch] [bp-74h]@6
  int v209; // [sp+330h] [bp-70h]@6
  int v210; // [sp+334h] [bp-6Ch]@6
  char v211; // [sp+338h] [bp-68h]@6
  mce::Math *v212; // [sp+340h] [bp-60h]@4
  mce::Math *v213; // [sp+344h] [bp-5Ch]@4
  mce::Math *v214; // [sp+348h] [bp-58h]@4
  mce::Math *v215; // [sp+350h] [bp-50h]@4
  mce::Math *v216; // [sp+354h] [bp-4Ch]@4
  mce::Math *v217; // [sp+358h] [bp-48h]@4
  char v218; // [sp+35Ch] [bp-44h]@56

  v8 = a3;
  v9 = this;
  v10 = a4;
  v11 = a2;
  if ( Vec3::isNan(a3, *(float *)&a2) == 1 )
    return HitResult::HitResult((int)v9, v10);
  v71 = v11;
  if ( Vec3::isNan((Vec3 *)v10, v12) == 1 )
  v14 = (mce::Math *)*((_DWORD *)v8 + 1);
  v15 = (mce::Math *)*((_DWORD *)v8 + 2);
  v215 = *(mce::Math **)v8;
  v216 = v14;
  v217 = v15;
  v16 = *(mce::Math **)(v10 + 4);
  v17 = *(mce::Math **)(v10 + 8);
  v212 = *(mce::Math **)v10;
  v213 = v16;
  v214 = v17;
  v67 = mce::Math::floor(v212, *(float *)&v16);
  v62 = mce::Math::floor(v213, v18);
  v65 = mce::Math::floor(v214, v19);
  v69 = mce::Math::floor(v215, v20);
  v22 = mce::Math::floor(v216, v21);
  v60 = mce::Math::floor(v217, v23);
  HitResult::HitResult((HitResult *)&v195);
  v151 = v69;
  v152 = v22;
  v24 = v22;
  v153 = v60;
  BlockSource::getBlockAndData((BlockSource *)&v111, v71, (int)&v151);
  v25 = (Block *)Block::mBlocks[v111];
  AABB::AABB((AABB *)&v151);
  if ( v25 )
  {
    v26 = (Material *)Block::getMaterial(v25);
    if ( Material::isLiquid(v26) != 1 )
    {
      v66 = a5;
      v59 = v8;
      if ( a6 != 1
        || (v30 = *(int (__fastcall **)(Block *, BlockPos *, int *, int *))(*(_DWORD *)v25 + 32),
            v172 = v69,
            v173 = v24,
            v174 = v60,
            v31 = (AABB *)v30(v25, v71, &v172, &v151),
            !AABB::isEmpty(v31)) )
      {
        if ( (*(int (__fastcall **)(Block *, BlockPos *, _DWORD, int))(*(_DWORD *)v25 + 216))(v25, v71, v112, a5) == 1 )
        {
          v32 = *(void (__fastcall **)(BlockSource *, Block *, BlockPos *, int *))(*(_DWORD *)v25 + 288);
          v169 = v69;
          v170 = v24;
          v171 = v60;
          v32(v9, v25, v71, &v169);
          HitResult::HitResult((int)&v168, (int)&v195);
          *((_BYTE *)v9 + 36) = 0;
          result = *(_DWORD *)v9 & 0xFFFFFFFE;
          if ( result != 2 )
            return result;
        }
      }
      v64 = v9;
      v61 = 0;
      v27 = 0;
      goto LABEL_14;
    }
    v64 = v9;
    v59 = v8;
    v27 = Block::getMaterial(v25);
    v28 = *(void (__fastcall **)(int *, Block *, BlockPos *, int *))(*(_DWORD *)v25 + 288);
    v175 = v69;
    v176 = v24;
    v177 = v60;
    v66 = 0;
    v28(&v178, v25, v71, &v175);
    v196 = v179;
    v195 = v178;
    v197 = v180;
    v198 = v181;
    v199 = v182;
    v200 = v183;
    v201 = v184;
    v202 = v185;
    v204 = v187;
    v203 = v186;
    v205 = v188;
    v206 = v189;
    v207 = v190;
    v208 = v191;
    v209 = v192;
    v210 = v193;
    v211 = v194;
    v29 = 1;
  }
  else
    v66 = a5;
    v27 = 0;
    v29 = 0;
  v61 = v29;
LABEL_14:
  v63 = v27;
  HitResult::HitResult((int)&v151, v10);
  if ( !a7 )
    goto LABEL_92;
  __asm { VMOV.F32        S16, #1.0 }
  _R5 = v24;
  v38 = v62;
  _R10 = v69;
  _R11 = v60;
  __asm
    VLDR            S18, =0.0
    VLDR            S20, =999.0
  v68 = a7;
  while ( Vec3::isNan((Vec3 *)&v215, v33) != 1 )
    if ( _R11 == v65 )
      _ZF = _R5 == v38;
      if ( _R5 == v38 )
        _ZF = _R10 == v67;
      if ( _ZF )
        HitResult::HitResult((int)&v117, (int)&v212);
        LOBYTE(v152) = v118;
        v151 = v117;
        v153 = v119;
        v154 = v120;
        v155 = v121;
        v156 = v122;
        v157 = v123;
        v158 = v124;
        v160 = v126;
        v159 = v125;
        v161 = v127;
        v162 = v128;
        v163 = v129;
        v164 = v130;
        v165 = v131;
        v166 = v132;
        v167 = v133;
        goto LABEL_92;
    __asm
      VMOV            S0, R10
      VMOV.F32        S6, S18
      VCVT.F32.S32    S1, S0
      VMOV            S0, R5
      VCVT.F32.S32    S5, S0
      VMOV            S0, R11
      VCVT.F32.S32    S7, S0
      VLDR            S0, [SP,#0x3A0+var_50]
      VADD.F32        S10, S1, S16
      VLDR            S2, [SP,#0x3A0+var_4C]
      VLDR            S4, [SP,#0x3A0+var_48]
      VLDR            S9, [SP,#0x3A0+var_60]
      VADD.F32        S12, S5, S16
      VLDR            S3, [SP,#0x3A0+var_5C]
      VLDR            S14, [SP,#0x3A0+var_58]
      VADD.F32        S8, S7, S16
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S6, S8 }
    __asm { VMOV.F32        S8, S18 }
      __asm { VMOVGT.F32      S8, S12 }
    __asm { VMOV.F32        S12, S18 }
    if ( v67 > _R10 )
      __asm { VMOVGT.F32      S12, S10 }
    if ( v65 < _R11 )
      __asm { VMOVLT.F32      S6, S7 }
    if ( v38 < _R5 )
      __asm { VMOVLT.F32      S8, S5 }
    if ( v67 < _R10 )
      __asm { VMOVLT.F32      S12, S1 }
      VSUB.F32        S10, S9, S0
      VMOV.F32        S1, S20
    if ( _R10 != v67 )
      __asm
        VSUB.F32        S1, S12, S0
        VDIV.F32        S1, S1, S10
      VSUB.F32        S3, S3, S2
      VMOV.F32        S5, S20
    if ( _R5 != v38 )
        VSUB.F32        S5, S8, S2
        VDIV.F32        S5, S5, S3
      VSUB.F32        S14, S14, S4
      VMOV.F32        S7, S20
    if ( !_ZF )
        VSUB.F32        S7, S6, S4
        VDIV.F32        S7, S7, S14
      VCMPE.F32       S1, S5
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
        VCMPELT.F32     S1, S7
        VMRSLT          APSR_nzcv, FPSCR
        VMUL.F32        S0, S1, S3
        VMUL.F32        S6, S1, S14
        VSTR            S12, [SP,#0x3A0+var_50]
      v42 = -1;
        VADD.F32        S0, S2, S0
        VADD.F32        S2, S4, S6
        VSTR            S0, [SP,#0x3A0+var_4C]
        VSTR            S2, [SP,#0x3A0+var_48]
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v42 = 1;
      _R10 += v42;
    else
        VCMPE.F32       S5, S7
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        __asm
          VMUL.F32        S2, S5, S10
          VMUL.F32        S6, S5, S14
        v43 = -1;
          VADD.F32        S0, S0, S2
          VADD.F32        S2, S4, S6
          VSTR            S0, [SP,#0x3A0+var_50]
          VSTR            S8, [SP,#0x3A0+var_4C]
          VSTR            S2, [SP,#0x3A0+var_48]
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          v43 = 1;
        _R5 += v43;
      else
          VMUL.F32        S4, S7, S10
          VMUL.F32        S8, S7, S3
        v44 = -1;
          VADD.F32        S0, S0, S4
          VADD.F32        S2, S2, S8
          VSTR            S2, [SP,#0x3A0+var_4C]
          VSTR            S6, [SP,#0x3A0+var_48]
          v44 = 1;
        _R11 += v44;
    *(_DWORD *)&v111 = _R10;
    v113 = _R5;
    v114 = _R11;
    BlockSource::getBlockAndData((BlockSource *)&v115, v71, (int)&v111);
    v45 = (Block *)Block::mBlocks[v115];
    AABB::AABB((AABB *)&v111);
    if ( a8 == 1 )
      v70 = _R10;
      v46 = 0;
      v105 = _R10;
      v106 = _R5;
      v107 = _R11;
      goto LABEL_62;
    v108 = _R10;
    v109 = 0;
    v110 = _R11;
    ChunkPos::ChunkPos((ChunkPos *)&v105, (const BlockPos *)&v108);
    v47 = (LevelChunk *)BlockSource::getChunk(v71, (const ChunkPos *)&v105);
    if ( !v47 )
      v38 = v62;
LABEL_60:
      goto LABEL_61;
    ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v218, (const BlockPos *)&v108);
    v48 = LevelChunk::getBorder(v47, (const ChunkBlockPos *)&v218);
    v105 = _R10;
    v106 = _R5;
    v107 = _R11;
    if ( v48 != 1 )
      goto LABEL_60;
    v70 = _R10;
    v45 = (Block *)Block::mBorder;
    v38 = v62;
    (*(void (__fastcall **)(_DWORD *, BlockPos *, int *, unsigned __int8 *))(*Block::mBorder + 32))(
      Block::mBorder,
      v71,
      &v105,
      &v111);
    v113 = 0;
    _R0 = *((_WORD *)v71 + 12);
    v46 = 1;
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VSTR            S0, [SP,#0x3A0+var_240]
LABEL_61:
    v27 = v63;
LABEL_62:
    if ( v45 )
      v50 = 0;
      if ( !v27 )
        v50 = 1;
      if ( !(((unsigned __int8)v50 | v66) & 1) )
        _ZF = Block::getMaterial(v45) == v27;
        v51 = 0;
        if ( !_ZF )
          v51 = 1;
        v66 = v51;
      if ( a6 ^ 1 | v46
        || (v52 = (AABB *)(*(int (__fastcall **)(Block *, BlockPos *, int *, unsigned __int8 *))(*(_DWORD *)v45 + 32))(
                            v45,
                            v71,
                            &v105,
                            &v111),
            !AABB::isEmpty(v52)) )
        v53 = (const AABB *)v116;
        if ( (*(int (__fastcall **)(Block *, BlockPos *, _DWORD, int))(*(_DWORD *)v45 + 216))(v45, v71, v116, v66 & 1) == 1 )
          if ( v66 & 1 && (v54 = (Material *)Block::getMaterial(v45), Material::isLiquid(v54) == 1) )
          {
            if ( v46 == 1 )
            {
              LODWORD(v55) = &v215;
              HIDWORD(v55) = &v212;
              Block::clip((Block *)&v88, v45, v71, (const Vec3 *)&v105, v55, 0, 0, (const Vec3 *)&v111);
            }
            else
              (*(void (__fastcall **)(int *, Block *, BlockPos *, int *))(*(_DWORD *)v45 + 288))(&v88, v45, v71, &v105);
            v196 = v89;
            v195 = v88;
            v197 = v90;
            v198 = v91;
            v199 = v92;
            v200 = v93;
            v201 = v94;
            v202 = v95;
            _R10 = v70;
            v27 = v63;
            LODWORD(v33) = (unsigned __int16)v97;
            v204 = v97;
            v203 = v96;
            v205 = v98;
            v206 = v99;
            v207 = v100;
            v208 = v101;
            v209 = v102;
            v210 = v103;
            v211 = v104;
            v66 = 0;
            v61 = 1;
          }
          else
              v56 = v53;
              v57 = v71;
              v58 = v64;
              Block::clip(
                v64,
                v45,
                v71,
                (const Vec3 *)&v105,
                __PAIR__(&v212, (unsigned int)v59),
                0,
                v56,
                (const Vec3 *)&v111);
              (*(void (__fastcall **)(Block *, Block *, BlockPos *, int *))(*(_DWORD *)v45 + 288))(v64, v45, v71, &v105);
            v71 = v57;
            HitResult::HitResult((int)&v80, (int)&v195);
            *((_BYTE *)v58 + 36) = v61 & 1;
            if ( v61 & 1 )
              *((_BYTE *)v58 + 37) = v81;
              *((_DWORD *)v58 + 10) = v82;
              *((_DWORD *)v58 + 11) = v83;
              *((_DWORD *)v58 + 12) = v84;
              *((_DWORD *)v58 + 13) = v85;
              *((_DWORD *)v58 + 14) = v86;
              *((_DWORD *)v58 + 15) = v87;
            result = *(_DWORD *)v58 & 0xFFFFFFFE;
            if ( result != 2 )
              return result;
        else
          _R10 = v70;
          v27 = v63;
        _R10 = v70;
      _R10 = v70;
    if ( !--v68 )
      goto LABEL_92;
  HitResult::HitResult((int)&v134, (int)&v212);
  LOBYTE(v152) = v135;
  v151 = v134;
  v153 = v136;
  v154 = v137;
  v155 = v138;
  v156 = v139;
  v157 = v140;
  v158 = v141;
  v160 = v143;
  v159 = v142;
  v161 = v144;
  v162 = v145;
  v163 = v146;
  v164 = v147;
  v165 = v148;
  v166 = v149;
  v167 = v150;
LABEL_92:
  HitResult::HitResult((int)&v72, (int)&v195);
  LOBYTE(v160) = v61 & 1;
  if ( v61 & 1 )
    HIBYTE(v160) = v73;
    v161 = v74;
    v162 = v75;
    v163 = v76;
    v164 = v77;
    v165 = v78;
    v166 = v79;
  return HitResult::HitResult((int)v64, (int)&v151);
}


int __fastcall BlockSource::isInWall(BlockSource *this, const Vec3 *a2)
{
  BlockSource *v2; // r4@1
  int v3; // r5@1
  Material *v4; // r0@1
  int v5; // r1@1
  int v6; // r1@2
  int v7; // r6@3
  char v9; // [sp+4h] [bp-2Ch]@1
  int v10; // [sp+8h] [bp-28h]@1
  int v11; // [sp+Ch] [bp-24h]@1
  int v12; // [sp+10h] [bp-20h]@1
  int v13; // [sp+14h] [bp-1Ch]@1
  int v14; // [sp+18h] [bp-18h]@1
  unsigned __int8 v15; // [sp+1Ch] [bp-14h]@1

  v2 = this;
  BlockPos::BlockPos((int)&v9, (int)a2);
  v12 = *(_DWORD *)&v9;
  v13 = v10;
  v14 = v11;
  BlockSource::getBlockID((BlockSource *)&v15, v2, (int)&v12);
  v3 = Block::mBlocks[v15];
  v4 = (Material *)Block::getMaterial((Block *)Block::mBlocks[v15]);
  if ( Material::isSolidBlocking(v4) )
  {
    if ( Block::hasProperty(v3, v5, 0x200000LL) == 1 || (v7 = 0, Block::hasProperty(v3, v6, 0x100000LL) == 1) )
    {
      v12 = *(_DWORD *)&v9;
      v13 = v10;
      v14 = v11;
      BlockSource::getBlockID((BlockSource *)&v15, v2, (int)&v12);
      v7 = Block::isSolid((Block *)Block::mBlocks[v15]);
    }
  }
  else
    v7 = 0;
  return v7;
}


char *__fastcall BlockSource::fetchEntities(BlockSource *this, Entity *a2, const AABB *a3)
{
  BlockSource *v3; // r6@1
  Entity *v4; // r4@1
  char *v5; // r9@1
  float v7; // r1@1
  int v8; // r7@2
  int v9; // r0@5
  __int64 v10; // r0@7
  void *v11; // r8@9
  __int64 v12; // r4@9
  signed int v13; // r1@9
  unsigned int v14; // r2@9
  unsigned int v15; // r1@11
  unsigned int v16; // r11@11
  _DWORD *v17; // r5@18
  int v23; // r0@25
  int v24; // r7@25 OVERLAPPED
  float v26; // r1@25
  int v27; // r0@25
  int v28; // r4@25
  float v30; // r1@25
  int v31; // r0@25
  float v33; // r1@25
  int v34; // r0@25
  int v35; // r5@26
  int v36; // r8@27 OVERLAPPED
  int v37; // r0@28
  int v38; // r4@32
  _DWORD *v39; // r0@32
  int v41; // [sp+0h] [bp-60h]@25
  _DWORD *v42; // [sp+4h] [bp-5Ch]@32
  void (*v43)(void); // [sp+Ch] [bp-54h]@32
  signed int (__fastcall *v44)(int *, int); // [sp+10h] [bp-50h]@32
  Entity *v45; // [sp+14h] [bp-4Ch]@1
  __int64 v46; // [sp+18h] [bp-48h]@28

  v3 = this;
  v4 = a2;
  v45 = a2;
  v5 = (char *)this + 76;
  _R10 = a3;
  *((_DWORD *)this + 20) = *((_DWORD *)this + 19);
  if ( Level::isClientSide(*((Level **)this + 3)) == 1 )
  {
    v8 = *((_DWORD *)Dimension::getEntityIdMap(*((Dimension **)v3 + 5)) + 2);
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)(v8 + 16);
        if ( (Entity *)v9 != v4 && AABB::intersects((AABB *)(v9 + 264), _R10) == 1 )
        {
          v10 = *((_QWORD *)v3 + 10);
          if ( (_DWORD)v10 == HIDWORD(v10) )
          {
            v11 = *(void **)v5;
            LODWORD(v12) = 0;
            v13 = v10 - *(_DWORD *)v5;
            v14 = v13 >> 2;
            if ( !(v13 >> 2) )
              v14 = 1;
            v15 = v14 + (v13 >> 2);
            v16 = v15;
            if ( 0 != v15 >> 30 )
              v16 = 0x3FFFFFFF;
            if ( v15 < v14 )
            if ( v16 )
            {
              if ( v16 >= 0x40000000 )
                sub_21E57F4();
              LODWORD(v12) = operator new(4 * v16);
              LODWORD(v10) = *(_QWORD *)((char *)v3 + 76) >> 32;
              v11 = (void *)*(_QWORD *)((char *)v3 + 76);
            }
            v17 = (_DWORD *)(v12 + v10 - (_DWORD)v11);
            *v17 = *(_DWORD *)(v8 + 16);
            if ( ((signed int)v10 - (signed int)v11) >> 2 )
              _aeabi_memmove4(v12, v11);
            HIDWORD(v12) += 4;
            if ( v11 )
              operator delete(v11);
            *(_QWORD *)((char *)v3 + 76) = v12;
            *((_DWORD *)v3 + 21) = v12 + 4 * v16;
          }
          else
            *(_DWORD *)v10 = *(_DWORD *)(v8 + 16);
            *((_DWORD *)v3 + 20) += 4;
        }
        v8 = *(_DWORD *)v8;
        if ( !v8 )
          break;
        v4 = v45;
      }
    }
  }
  else
    __asm
      VMOV.F32        S16, #-2.0
      VLDR            S0, [R10]
      VLDR            S18, =0.0625
      VADD.F32        S0, S0, S16
      VMUL.F32        S0, S0, S18
      VMOV            R0, S0
    v23 = mce::Math::floor(_R0, v7);
      VMOV.F32        S20, #2.0
      VLDR            S0, [R10,#0xC]
    v24 = v23;
      VADD.F32        S0, S0, S20
    v27 = mce::Math::floor(_R0, v26);
    __asm { VLDR            S0, [R10,#8] }
    v28 = v27;
    v31 = mce::Math::floor(_R0, v30);
    __asm { VLDR            S0, [R10,#0x14] }
    v41 = v31;
    v34 = mce::Math::floor(_R0, v33);
    if ( v24 != v28 + 1 )
      v35 = v34 + 1;
      if ( v41 != v34 + 1 )
        do
          v36 = v41;
          do
            v46 = *(_QWORD *)&v24;
            v37 = BlockSource::getChunk(v3, (const ChunkPos *)&v46);
            if ( v37 )
              LevelChunk::getEntities(v37, (int)v45, _R10, (int)v5);
            ++v36;
          while ( v35 != v36 );
          ++v24;
        while ( v24 != v28 + 1 );
  v38 = *((_DWORD *)v3 + 5);
  v39 = operator new(0xCu);
  *v39 = v3;
  v39[1] = &v45;
  v39[2] = _R10;
  v42 = v39;
  v43 = (void (*)(void))sub_18E9FDC;
  v44 = sub_18E9F1E;
  Dimension::forEachPlayer(v38, (int)&v42);
  if ( v43 )
    v43();
  return v5;
}


signed int __fastcall BlockSource::containsMaterial(const BlockPos *a1, mce::Math **a2, int a3)
{
  const BlockPos *v4; // r5@1
  int v5; // r4@1
  int v6; // r0@1
  int v11; // r6@1
  float v13; // r1@1
  int v14; // r8@1
  float v15; // r1@1
  int v16; // r0@1
  int v17; // r9@1
  float v19; // r1@1
  int v20; // r10@1
  float v21; // r1@1
  int v22; // r0@1
  int v23; // r11@1
  float v25; // r1@1
  int v26; // r7@1
  int v27; // r2@3
  int v28; // r11@3
  int v29; // r9@5
  int *v30; // r0@6
  signed int result; // r0@9
  int v32; // [sp+8h] [bp-48h]@5
  int v33; // [sp+Ch] [bp-44h]@3
  int v34; // [sp+10h] [bp-40h]@6
  int v35; // [sp+14h] [bp-3Ch]@6
  int v36; // [sp+18h] [bp-38h]@6
  unsigned __int8 v37; // [sp+1Ch] [bp-34h]@6

  _R7 = a2;
  v4 = a1;
  v5 = a3;
  v6 = mce::Math::floor(*a2, *(float *)&a2);
  __asm
  {
    VMOV.F32        S16, #1.0
    VLDR            S0, [R7,#0xC]
  }
  v11 = v6;
    VADD.F32        S0, S0, S16
    VMOV            R0, S0
  v14 = mce::Math::floor(_R0, v13);
  v16 = mce::Math::floor(_R7[1], v15);
  __asm { VLDR            S0, [R7,#0x10] }
  v17 = v16;
  v20 = mce::Math::floor(_R0, v19);
  v22 = mce::Math::floor(_R7[2], v21);
  __asm { VLDR            S0, [R7,#0x14] }
  v23 = v22;
  v26 = mce::Math::floor(_R0, v25);
  if ( v11 >= v14 )
    result = 0;
  else if ( v17 >= v20 )
  else
    do
    {
      v33 = v23;
      _VF = __OFSUB__(v23, v26);
      _NF = v23 - v26 < 0;
      v27 = v23;
      v28 = v17;
      if ( _NF ^ _VF )
      {
        while ( 2 )
        {
          v32 = v17;
          v29 = v27;
          do
          {
            v34 = v11;
            v35 = v28;
            v36 = v29;
            BlockSource::getBlockID((BlockSource *)&v37, v4, (int)&v34);
            v30 = (int *)Block::getMaterial((Block *)Block::mBlocks[v37]);
            if ( Material::isType(v30, v5) )
              return 1;
            ++v29;
          }
          while ( v29 < v26 );
          ++v28;
          v27 = v33;
          v17 = v32;
          if ( v28 < v20 )
            continue;
          break;
        }
      }
      ++v11;
      result = 0;
      v23 = v27;
    }
    while ( v11 < v14 );
  return result;
}


void __fastcall BlockSource::~BlockSource(BlockSource *this)
{
  BlockSource *v1; // r0@1

  v1 = BlockSource::~BlockSource(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void **__fastcall BlockSource::fetchBlockEntities(BlockSource *this, const AABB *a2)
{
  BlockSource *v2; // r8@1
  const AABB *v3; // r6@1
  int v4; // r0@1
  int v5; // r2@1 OVERLAPPED
  int v6; // r0@2
  int v7; // r1@5 OVERLAPPED
  LevelChunk *v8; // r0@6
  int v9; // r11@7
  char *v10; // r10@8
  int v11; // r9@9
  char *v12; // r7@11
  _BYTE *v13; // r6@11
  signed int v14; // r0@11
  unsigned int v15; // r1@11
  unsigned int v16; // r0@13
  unsigned int v17; // r4@13
  char *v18; // r0@19
  int v20; // [sp+4h] [bp-6Ch]@1
  int v21; // [sp+8h] [bp-68h]@1
  int v22; // [sp+Ch] [bp-64h]@1
  int v23; // [sp+10h] [bp-60h]@1
  int v24; // [sp+14h] [bp-5Ch]@1
  int v25; // [sp+18h] [bp-58h]@1
  __int64 v26; // [sp+1Ch] [bp-54h]@6
  void **v27; // [sp+24h] [bp-4Ch]@1
  int v28; // [sp+28h] [bp-48h]@6
  int v29; // [sp+2Ch] [bp-44h]@6
  int v30; // [sp+34h] [bp-3Ch]@1
  int v31; // [sp+3Ch] [bp-34h]@1
  char v32; // [sp+40h] [bp-30h]@1
  int v33; // [sp+48h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  v27 = (void **)((char *)this + 88);
  *((_DWORD *)this + 23) = *((_DWORD *)this + 22);
  BlockPos::BlockPos((int)&v32, (int)a2);
  BlockPos::BlockPos((int)&v30, (int)v3 + 12);
  v23 = v30 >> 4;
  v4 = *(_DWORD *)&v32 >> 4;
  v5 = 0;
  v22 = v31 >> 4;
  v21 = v33 >> 4;
  v24 = (1 - (v33 >> 4) + (v31 >> 4)) * (1 - (*(_DWORD *)&v32 >> 4) + (v30 >> 4));
  v20 = *(_DWORD *)&v32 >> 4;
  v25 = v33 >> 4;
  while ( 1 )
  {
    v7 = v4;
    if ( v24 == v5 )
      break;
    v28 = v4;
    v26 = *(_QWORD *)(&v5 - 1);
    v29 = v25;
    v8 = (LevelChunk *)BlockSource::getChunk(v2, (const ChunkPos *)&v28);
    if ( v8 )
    {
      v9 = *((_DWORD *)LevelChunk::getBlockEntities(v8) + 2);
      if ( v9 )
      {
        v10 = (char *)*((_DWORD *)v2 + 23);
        do
        {
          v11 = *(_DWORD *)(v9 + 8);
          if ( v10 == *((char **)v2 + 24) )
          {
            v12 = 0;
            v13 = *v27;
            v14 = v10 - (_BYTE *)*v27;
            v15 = v14 >> 2;
            if ( !(v14 >> 2) )
              v15 = 1;
            v16 = v15 + (v14 >> 2);
            v17 = v16;
            if ( 0 != v16 >> 30 )
              v17 = 0x3FFFFFFF;
            if ( v16 < v15 )
            if ( v17 )
            {
              if ( v17 >= 0x40000000 )
                sub_21E57F4();
              v18 = (char *)operator new(4 * v17);
              v10 = (char *)(*((_QWORD *)v2 + 11) >> 32);
              v13 = (_BYTE *)*((_QWORD *)v2 + 11);
              v12 = v18;
            }
            *(_DWORD *)&v12[v10 - v13] = v11;
            if ( (v10 - v13) >> 2 )
              _aeabi_memmove4(v12, v13);
            v10 = &v12[v10 - v13 + 4];
            if ( v13 )
              operator delete(v13);
            *((_DWORD *)v2 + 22) = v12;
            *((_DWORD *)v2 + 23) = v10;
            *((_DWORD *)v2 + 24) = &v12[4 * v17];
          }
          else
            *(_DWORD *)v10 = v11;
            v10 = (char *)(*((_DWORD *)v2 + 23) + 4);
          v9 = *(_DWORD *)v9;
        }
        while ( v9 );
      }
    }
    v5 = HIDWORD(v26) + 1;
    v4 = v26 + 1;
    if ( (signed int)v26 >= v23 )
      v6 = v21;
      if ( v25 < v22 )
        v6 = v25 + 1;
      v25 = v6;
      v4 = v20;
  }
  return v27;
}


unsigned int __fastcall BlockSource::getBlockAndData(BlockSource *this, int a2, int a3, int a4, int a5)
{
  int v6; // [sp+4h] [bp-14h]@1
  int v7; // [sp+8h] [bp-10h]@1
  int v8; // [sp+Ch] [bp-Ch]@1

  v6 = a3;
  v7 = a4;
  v8 = a5;
  return BlockSource::getBlockAndData(this, (const BlockPos *)a2, (int)&v6);
}


int __fastcall BlockSource::setTickingQueue(int result, BlockTickingQueue *a2)
{
  *(_DWORD *)(result + 68) = a2;
  return result;
}


int __fastcall BlockSource::onChunkDiscarded(BlockSource *this, LevelChunk *a2)
{
  BlockSource *v2; // r5@1
  char *v3; // r0@1
  int result; // r0@1

  v2 = this;
  v3 = LevelChunk::getPosition(a2);
  result = *(_QWORD *)v3 ^ *((_DWORD *)v2 + 14) | (*(_QWORD *)v3 >> 32) ^ *((_DWORD *)v2 + 15);
  if ( !result )
  {
    *((_DWORD *)v2 + 16) = 0;
    result = ChunkPos::INVALID;
    *((_QWORD *)v2 + 7) = *(_QWORD *)&ChunkPos::INVALID;
  }
  return result;
}


int __fastcall BlockSource::_blockChanged(BlockSource *this, BlockPos *a2, int a3, int a4, int a5, int a6)
{
  int v6; // r6@1
  int v7; // r9@1
  BlockPos *v8; // r8@1
  BlockSource *v9; // r5@1
  __int64 v10; // r0@3
  bool v11; // zf@9
  char v12; // r1@14
  unsigned int v13; // r10@14
  char v14; // r4@14
  char v15; // r6@14
  char v16; // r9@14
  int v17; // r0@15
  void (__cdecl *v18)(int, BlockSource *, BlockPos *); // r7@15
  char v20; // [sp+Ch] [bp-34h]@14
  unsigned __int16 v21; // [sp+12h] [bp-2Eh]@3
  char v22; // [sp+14h] [bp-2Ch]@15
  char v23; // [sp+15h] [bp-2Bh]@15
  char v24; // [sp+18h] [bp-28h]@15
  char v25; // [sp+19h] [bp-27h]@15

  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = this;
  if ( a5 & 1 )
    BlockSource::updateNeighborsAt(this, a2);
  BlockSource::getBlockAndData((BlockSource *)&v21, v9, (int)v8);
  v10 = 0LL;
  if ( v21 == *(_WORD *)v6 )
    HIDWORD(v10) = 1;
  if ( !(a5 & 0x10) )
    LODWORD(v10) = 1;
  if ( a5 & 2 )
  {
    LODWORD(v10) = v10 & HIDWORD(v10);
    if ( !(_DWORD)v10 )
    {
      LODWORD(v10) = Level::isClientSide(*((Level **)v9 + 3));
      v11 = (a5 & 4) == 0;
      if ( a5 & 4 )
      {
        LODWORD(v10) = v10 ^ 1;
        v11 = (_DWORD)v10 == 1;
      }
      if ( v11 )
        v10 = *((_QWORD *)v9 + 5);
        if ( HIDWORD(v10) != (_DWORD)v10 )
        {
          v12 = *(_BYTE *)v6;
          v13 = 0;
          v14 = *(_BYTE *)v7;
          v15 = *(_BYTE *)(v6 + 1);
          v16 = *(_BYTE *)(v7 + 1);
          v20 = v12;
          do
          {
            v17 = *(_DWORD *)(v10 + 4 * v13);
            v18 = *(void (__cdecl **)(int, BlockSource *, BlockPos *))(*(_DWORD *)v17 + 20);
            v22 = v20;
            v24 = v14;
            v25 = v16;
            v23 = v15;
            v18(v17, v9, v8);
            v10 = *((_QWORD *)v9 + 5);
            ++v13;
          }
          while ( v13 < (HIDWORD(v10) - (signed int)v10) >> 2 );
        }
    }
  }
  return v10;
}


int __fastcall BlockSource::isConsideredSolidBlock(BlockSource *this, const BlockPos *a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r1@1
  __int64 v5; // [sp+0h] [bp-18h]@1
  int v6; // [sp+8h] [bp-10h]@1
  unsigned __int8 v7; // [sp+Ch] [bp-Ch]@1

  v2 = *(_QWORD *)a2;
  v3 = *((_DWORD *)a2 + 2);
  v5 = v2;
  v6 = v3;
  BlockSource::getBlockID((BlockSource *)&v7, this, (int)&v5);
  return Block::isSolid((Block *)Block::mBlocks[v7]);
}


signed int __fastcall BlockSource::_hasChunksAt(BlockSource *a1, int a2)
{
  int v2; // r4@1
  BlockSource *v3; // r9@1
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r10@1
  int v7; // r7@1
  int v8; // r0@2
  bool v9; // nf@2
  unsigned __int8 v10; // vf@2
  int v11; // r0@6
  int v13; // [sp+0h] [bp-28h]@5
  int v14; // [sp+4h] [bp-24h]@5

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)a2;
  v5 = 0;
  v6 = *(_DWORD *)(a2 + 40);
  v7 = *(_DWORD *)(a2 + 8);
  while ( 1 )
  {
    if ( v6 == v5 )
      return 1;
    v13 = v4;
    v14 = v7;
    if ( !BlockSource::getChunk(v3, (const ChunkPos *)&v13) )
      break;
    v11 = *(_DWORD *)(v2 + 12);
    ++v5;
    v10 = __OFSUB__(v4, v11);
    v9 = v4++ - v11 < 0;
    if ( !(v9 ^ v10) )
    {
      v8 = *(_DWORD *)(v2 + 20);
      v4 = *(_DWORD *)v2;
      v10 = __OFSUB__(v7, v8);
      v9 = v7++ - v8 < 0;
      if ( !(v9 ^ v10) )
        v7 = *(_DWORD *)(v2 + 8);
    }
  }
  return 0;
}


int __fastcall BlockSource::getBiome(BlockSource *this, const BlockPos *a2)
{
  BlockSource *v2; // r4@1
  int v3; // r0@1
  __int64 v4; // r0@1
  LevelChunk *v5; // r5@1
  int result; // r0@4
  Biome *v7; // r0@5
  int v8; // r1@5
  int v9; // [sp+0h] [bp-28h]@4
  int v10; // [sp+4h] [bp-24h]@1
  __int64 v11; // [sp+8h] [bp-20h]@1
  char v12; // [sp+10h] [bp-18h]@1

  v2 = this;
  v3 = *(_DWORD *)a2;
  HIDWORD(v4) = *((_DWORD *)a2 + 2);
  v10 = v3;
  LODWORD(v4) = 0;
  v11 = v4;
  ChunkPos::ChunkPos((ChunkPos *)&v12, (const BlockPos *)&v10);
  v5 = (LevelChunk *)BlockSource::getChunk(v2, (const ChunkPos *)&v12);
  if ( v5 && (signed int)v11 >= 0 && (signed int)v11 < *((_WORD *)v2 + 12) )
  {
    ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v9, (const BlockPos *)&v10);
    result = LevelChunk::getBiome(v5, (const ChunkBlockPos *)&v9);
  }
  else
    v7 = (Biome *)(*(int (**)(void))(**((_DWORD **)v2 + 5) + 160))();
    result = Biome::getBiome(v7, v8);
  return result;
}


char *__fastcall BlockSource::fetchAABBs(BlockSource *this, const AABB *a2, int a3)
{
  BlockSource *v3; // r9@1
  char *v4; // r8@1
  char *v5; // r1@1
  mce::Math *v6; // r3@1
  float v7; // r6@1
  mce::Math *v8; // r7@1
  mce::Math *v9; // r4@1
  float v10; // r6@1
  int v11; // r7@1
  int v16; // r0@6
  int v17; // r6@6
  float v19; // r1@6
  int v21; // r0@8
  int v22; // r10@8
  float v24; // r1@8
  signed int v25; // r0@9
  LevelChunk *v26; // r7@9
  const BlockPos *v27; // r4@11
  _DWORD *v28; // r5@11
  int v29; // r9@13
  float v30; // r1@13
  const BlockPos *v31; // r8@14
  int v32; // r0@14
  void (__cdecl *v33)(int); // r4@14
  int v35; // [sp+8h] [bp-98h]@6
  int i; // [sp+10h] [bp-90h]@8
  _DWORD *v37; // [sp+14h] [bp-8Ch]@7
  char *v38; // [sp+18h] [bp-88h]@3
  int j; // [sp+1Ch] [bp-84h]@13
  int v40; // [sp+20h] [bp-80h]@14
  int v41; // [sp+24h] [bp-7Ch]@14
  int v42; // [sp+28h] [bp-78h]@14
  int v43; // [sp+2Ch] [bp-74h]@14
  int v44; // [sp+30h] [bp-70h]@14
  int v45; // [sp+34h] [bp-6Ch]@14
  mce::Math *v46; // [sp+38h] [bp-68h]@1
  float v47; // [sp+3Ch] [bp-64h]@1
  mce::Math *v48; // [sp+40h] [bp-60h]@1
  float v49; // [sp+44h] [bp-5Ch]@1
  mce::Math *v50; // [sp+48h] [bp-58h]@1
  float v51; // [sp+4Ch] [bp-54h]@1
  int v52; // [sp+50h] [bp-50h]@1
  int v53; // [sp+54h] [bp-4Ch]@9
  int v54; // [sp+58h] [bp-48h]@9
  int v55; // [sp+5Ch] [bp-44h]@9
  char v56; // [sp+60h] [bp-40h]@9

  v3 = this;
  v4 = (char *)this + 100;
  *((_DWORD *)this + 26) = *((_DWORD *)this + 25);
  v6 = *(mce::Math **)a2;
  v7 = *((float *)a2 + 1);
  v8 = (mce::Math *)*((_DWORD *)a2 + 2);
  v5 = (char *)a2 + 12;
  v46 = v6;
  v47 = v7;
  v48 = v8;
  v9 = (mce::Math *)*((_DWORD *)v5 + 1);
  v10 = *((float *)v5 + 2);
  v11 = *((_DWORD *)v5 + 3);
  v49 = *(float *)v5;
  v50 = v9;
  v51 = v10;
  v52 = v11;
  if ( a3 == 1 )
    BlockSource::addUnloadedChunksAABBs(this, (const AABB *)&v46);
  __asm { VLDR            S0, [SP,#0xA0+var_58] }
  v38 = v4;
  __asm
  {
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    BlockSource::addVoidFloor(v3, (const AABB *)&v46);
  v16 = mce::Math::floor(v46, *(float *)&v5);
    VMOV.F32        S16, #1.0
    VLDR            S0, [SP,#0xA0+var_5C]
  v17 = v16;
    VADD.F32        S0, S0, S16
    VMOV            R0, S0
  v35 = mce::Math::floor(_R0, v19) + 1;
  if ( v17 != v35 )
    __asm { VMOV.F32        S18, #-1.0 }
    v37 = Block::mBlocks;
    do
    {
      v21 = mce::Math::floor(v48, *((float *)&_R0 + 1));
      __asm { VLDR            S0, [SP,#0xA0+var_54] }
      v22 = v21;
      __asm
      {
        VADD.F32        S0, S0, S16
        VMOV            R0, S0
      }
      for ( i = mce::Math::floor(_R0, v24) + 1; v22 != i; v37 = v28 )
        v25 = *((_WORD *)v3 + 12);
        v53 = v17;
        v54 = v25 / 2;
        v55 = v22;
        ChunkPos::ChunkPos((ChunkPos *)&v56, (const BlockPos *)&v53);
        LODWORD(_R0) = BlockSource::getChunk(v3, (const ChunkPos *)&v56);
        v26 = (LevelChunk *)_R0;
        if ( (_DWORD)_R0
          && (_R0 = *(_QWORD *)LevelChunk::getPosition((LevelChunk *)_R0),
              HIDWORD(_R0) ^= *(&ChunkPos::INVALID + 1),
              _R0 != ChunkPos::INVALID) )
        {
          v28 = v37;
          v27 = v3;
          if ( !LevelChunk::isReadOnly(v26) )
          {
            __asm
            {
              VLDR            S0, [SP,#0xA0+var_64]
              VADD.F32        S0, S0, S18
              VMOV            R0, S0
            }
            v29 = mce::Math::floor((mce::Math *)_R0, *((float *)&_R0 + 1));
            for ( j = mce::Math::floor(v50, v30) + 1; j != v29; v27 = v31 )
              v43 = v17;
              v44 = v29;
              v45 = v22;
              BlockSource::getBlockID((BlockSource *)&v53, v27, (int)&v43);
              v31 = v27;
              v32 = v37[(unsigned __int8)v53];
              v33 = *(void (__cdecl **)(int))(*(_DWORD *)v32 + 28);
              v40 = v17;
              v41 = v29;
              v42 = v22;
              v33(v32);
              ++v29;
          }
        }
        else
        ++v22;
        v3 = v27;
      ++v17;
    }
    while ( v17 != v35 );
  return v38;
}


int __fastcall BlockSource::tryGetBiome(BlockSource *this, const BlockPos *a2)
{
  BlockSource *v2; // r5@1
  int v3; // r0@1
  int v4; // r1@1
  int v5; // r4@1
  LevelChunk *v6; // r6@1
  int v8; // [sp+0h] [bp-28h]@4
  int v9; // [sp+4h] [bp-24h]@1
  int v10; // [sp+8h] [bp-20h]@1
  int v11; // [sp+Ch] [bp-1Ch]@1
  char v12; // [sp+10h] [bp-18h]@1

  v2 = this;
  v3 = *(_DWORD *)a2;
  v4 = *((_DWORD *)a2 + 2);
  v5 = 0;
  v9 = v3;
  v10 = 0;
  v11 = v4;
  ChunkPos::ChunkPos((ChunkPos *)&v12, (const BlockPos *)&v9);
  v6 = (LevelChunk *)BlockSource::getChunk(v2, (const ChunkPos *)&v12);
  if ( v6 )
  {
    if ( v10 < 0 )
    {
      v5 = 0;
    }
    else if ( v10 >= *((_WORD *)v2 + 12) )
    else
      ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v8, (const BlockPos *)&v9);
      v5 = LevelChunk::getBiome(v6, (const ChunkBlockPos *)&v8);
  }
  return v5;
}


unsigned __int8 *__fastcall BlockSource::getRawBrightness(BlockSource *this, const BlockPos *a2, int a3, int a4)
{
  BlockSource *v4; // r8@1
  int v5; // r7@1
  int v6; // r6@1
  const BlockPos *v7; // r5@1
  char v8; // r4@1
  _DWORD **v9; // r0@2
  int v10; // r1@7
  int v11; // r2@7
  int v12; // r1@7
  int v13; // r2@7
  char *v14; // r7@7
  char v15; // r0@9
  char *v16; // r7@9
  int v17; // r1@9
  int v18; // r2@9
  char v19; // r0@11
  char *v20; // r7@11
  int v21; // r2@11
  __int64 v22; // r0@13
  int v23; // r2@13
  char *v24; // r6@13
  unsigned __int8 *result; // r0@15
  signed int v26; // r0@16
  int v27; // r7@18
  char v28; // r1@23
  unsigned int v29; // r0@23
  char *v30; // r3@28
  Dimension v31[2]; // [sp+0h] [bp-80h]@20
  char v32; // [sp+4h] [bp-7Ch]@19
  char v33; // [sp+8h] [bp-78h]@18
  Dimension v34; // [sp+14h] [bp-6Ch]@23
  char v35; // [sp+17h] [bp-69h]@22
  __int64 v36; // [sp+18h] [bp-68h]@13
  int v37; // [sp+20h] [bp-60h]@13
  unsigned __int8 v38; // [sp+24h] [bp-5Ch]@13
  __int64 v39; // [sp+28h] [bp-58h]@11
  int v40; // [sp+30h] [bp-50h]@11
  unsigned __int8 v41; // [sp+34h] [bp-4Ch]@11
  int v42; // [sp+38h] [bp-48h]@9
  int v43; // [sp+3Ch] [bp-44h]@9
  int v44; // [sp+40h] [bp-40h]@9
  unsigned __int8 v45; // [sp+44h] [bp-3Ch]@9
  int v46; // [sp+48h] [bp-38h]@7
  int v47; // [sp+4Ch] [bp-34h]@7
  int v48; // [sp+50h] [bp-30h]@7
  unsigned __int8 v49; // [sp+54h] [bp-2Ch]@7
  int v50; // [sp+58h] [bp-28h]@7
  int v51; // [sp+5Ch] [bp-24h]@7
  int v52; // [sp+60h] [bp-20h]@7
  unsigned __int8 v53; // [sp+64h] [bp-1Ch]@1

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  BlockSource::getBlockID((BlockSource *)&v53, a2, a3);
  v8 = Brightness::MAX;
  if ( Block::mLightBlock[v53] == (unsigned __int8)Brightness::MAX )
  {
    v9 = &Brightness::MIN;
LABEL_25:
    result = (unsigned __int8 *)*(_BYTE *)*v9;
LABEL_26:
    *(_BYTE *)v4 = (_BYTE)result;
    return result;
  }
  if ( v5 == 1
    && (v53 == *(_BYTE *)(Block::mStoneSlab + 4)
     || v53 == *(_BYTE *)(Block::mFarmland + 4)
     || v53 == *(_BYTE *)(Block::mWoodenSlab + 4)) )
    v10 = *(_DWORD *)(v6 + 4);
    v11 = *(_DWORD *)(v6 + 8);
    v50 = *(_DWORD *)v6;
    v51 = v10 + 1;
    v52 = v11;
    BlockSource::getRawBrightness(v4, v7, (int)&v50, 0);
    v12 = *(_DWORD *)(v6 + 4);
    v13 = *(_DWORD *)(v6 + 8);
    v14 = (char *)&v49;
    v46 = *(_DWORD *)v6 - 1;
    v47 = v12;
    v48 = v13;
    BlockSource::getRawBrightness((BlockSource *)&v49, v7, (int)&v46, 0);
    if ( *(_BYTE *)v4 >= (unsigned int)v49 )
      v14 = (char *)v4;
    v15 = *v14;
    v16 = (char *)&v45;
    *(_BYTE *)v4 = v15;
    v17 = *(_DWORD *)(v6 + 4);
    v18 = *(_DWORD *)(v6 + 8);
    v42 = *(_DWORD *)v6 + 1;
    v43 = v17;
    v44 = v18;
    BlockSource::getRawBrightness((BlockSource *)&v45, v7, (int)&v42, 0);
    if ( *(_BYTE *)v4 >= (unsigned int)v45 )
      v16 = (char *)v4;
    v19 = *v16;
    v20 = (char *)&v41;
    *(_BYTE *)v4 = v19;
    v21 = *(_DWORD *)(v6 + 8);
    v39 = *(_QWORD *)v6;
    v40 = v21 + 1;
    BlockSource::getRawBrightness((BlockSource *)&v41, v7, (int)&v39, 0);
    if ( *(_BYTE *)v4 >= (unsigned int)v41 )
      v20 = (char *)v4;
    *(_BYTE *)v4 = *v20;
    v22 = *(_QWORD *)v6;
    v23 = *(_DWORD *)(v6 + 8);
    v24 = (char *)&v38;
    v36 = v22;
    v37 = v23 - 1;
    BlockSource::getRawBrightness((BlockSource *)&v38, v7, (int)&v36, 0);
    if ( *(_BYTE *)v4 >= (unsigned int)v38 )
      v24 = (char *)v4;
    result = (unsigned __int8 *)(unsigned __int8)*v24;
    goto LABEL_26;
  v26 = *(_DWORD *)(v6 + 4);
  if ( v26 <= -1 )
    goto LABEL_25;
  if ( v26 >= *((_WORD *)v7 + 12) )
    v35 = Brightness::MAX;
    if ( *((_BYTE *)v7 + 9) )
    {
      Dimension::getSkyDarken(&v34, *((_DWORD *)v7 + 5));
      v28 = v34;
      v29 = (unsigned __int8)Brightness::MAX;
    }
    else
      v28 = Brightness::MIN;
      LOBYTE(v34) = Brightness::MIN;
    v35 = v8 - v28;
    v30 = &v35;
    if ( (unsigned __int8)(v8 - v28) > v29 )
      v30 = (char *)&Brightness::MIN;
    result = (unsigned __int8 *)(unsigned __int8)*v30;
  ChunkPos::ChunkPos((ChunkPos *)&v33, (const BlockPos *)v6);
  v27 = BlockSource::getChunk(v7, (const ChunkPos *)&v33);
  if ( !v27 )
    v9 = &Brightness::MAX;
  ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v32, (const BlockPos *)v6);
  if ( *((_BYTE *)v7 + 9) )
    Dimension::getSkyDarken(v31, *((_DWORD *)v7 + 5));
  else
    LOBYTE(v31[0]) = Brightness::MIN;
  return LevelChunk::getRawBrightness((unsigned __int8 *)v4, v27, (int)&v32, (_BYTE *)v31);
}


unsigned __int8 *__fastcall BlockSource::getRawBrightness(BlockSource *this, int a2, __int64 a3, int a4, int a5)
{
  __int64 v6; // [sp+4h] [bp-14h]@1
  int v7; // [sp+Ch] [bp-Ch]@1

  v6 = a3;
  v7 = a4;
  return BlockSource::getRawBrightness(this, (const BlockPos *)a2, (int)&v6, a5);
}


char *__fastcall BlockSource::setCachedTemperatureNoise(BlockSource *this, const BlockPos *a2, signed __int8 a3)
{
  BlockSource *v3; // r6@1
  signed __int8 v4; // r4@1
  const BlockPos *v5; // r5@1
  char *result; // r0@1
  LevelChunk *v7; // r6@1
  int v8; // [sp+4h] [bp-4h]@3
  int v9; // [sp+8h] [bp+0h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  ChunkPos::ChunkPos((ChunkPos *)&v9, a2);
  result = (char *)BlockSource::getChunk(v3, (const ChunkPos *)&v9);
  v7 = (LevelChunk *)result;
  if ( result )
  {
    result = (char *)LevelChunk::isReadOnly((LevelChunk *)result);
    if ( !result )
    {
      ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v8, v5);
      result = LevelChunk::setCachedTemperatureNoise(v7, (const ChunkBlockPos *)&v8, v4);
    }
  }
  return result;
}


unsigned int __fastcall BlockSource::getBlockAndData(BlockSource *this, const BlockPos *a2, int a3)
{
  const BlockPos *v3; // r5@1
  BlockSource *v4; // r4@1
  signed int v5; // r0@1
  BlockSource *v6; // r6@1
  int v7; // r6@3
  unsigned int v8; // r0@4
  int v9; // r0@5
  unsigned int v10; // r1@6
  char v11; // r3@6
  unsigned int result; // r0@6
  unsigned int v13; // r2@6
  unsigned __int16 v14; // [sp+4h] [bp-24h]@4
  __int16 v15; // [sp+6h] [bp-22h]@4
  char v16; // [sp+8h] [bp-20h]@3

  v3 = (const BlockPos *)a3;
  v4 = this;
  v5 = *(_DWORD *)(a3 + 4);
  v6 = a2;
  if ( v5 < 0
    || v5 >= *((_WORD *)a2 + 12)
    || (ChunkPos::ChunkPos((ChunkPos *)&v16, (const BlockPos *)a3),
        (v7 = BlockSource::getChunk(v6, (const ChunkPos *)&v16)) == 0) )
  {
    result = 0;
    *(_WORD *)v4 = 0;
    return result;
  }
  ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v14, v3);
  v8 = v15 >> 4;
  if ( v8 >= *(_DWORD *)(v7 + 140) )
    *(_BYTE *)v4 = FullBlock::AIR;
    result = BYTE1(FullBlock::AIR);
LABEL_12:
    *((_BYTE *)v4 + 1) = result;
  v9 = *(_DWORD *)(v7 + 4 * v8 + 76);
  if ( !v9 )
    *(_BYTE *)v4 = BlockID::AIR;
    goto LABEL_12;
  v10 = (v15 & 0xF | ((unsigned int)v14 >> 4) & 0xFF0) + (v14 << 8);
  v11 = *(_BYTE *)(v9 + (unsigned __int16)v10);
  result = *(_BYTE *)(v9 + ((unsigned int)(unsigned __int16)v10 >> 1) + 4096);
  *(_BYTE *)v4 = v11;
  LOBYTE(v13) = result & 0xF;
  if ( v10 & 1 )
    v13 = result >> 4;
  *((_BYTE *)v4 + 1) = v13;
  return result;
}


signed int __fastcall BlockSource::containsAny(BlockSource *this, const BlockPos *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r8@1
  const BlockPos *v4; // r4@1
  int v5; // r2@1
  BlockSource *v6; // r6@1
  int v7; // r1@1
  int v8; // r3@1
  int v9; // r0@2
  signed int result; // r0@12
  unsigned __int8 v11; // [sp+4h] [bp-2Ch]@6
  int v12; // [sp+8h] [bp-28h]@1
  int v13; // [sp+Ch] [bp-24h]@1
  int v14; // [sp+10h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  v5 = *(_DWORD *)a2;
  v6 = this;
  v12 = v5;
  v13 = *((_DWORD *)a2 + 1);
  v7 = *((_DWORD *)a2 + 2);
  v14 = v7;
  v8 = *(_DWORD *)v4;
  if ( v5 >= *(_DWORD *)v4 )
  {
LABEL_12:
    result = 0;
  }
  else
    v9 = *((_DWORD *)v4 + 2);
    while ( 1 )
    {
      v14 = v7;
      if ( v7 < v9 )
        break;
LABEL_11:
      v12 = ++v5;
      if ( v5 >= v8 )
        goto LABEL_12;
      v7 = *((_DWORD *)v3 + 2);
    }
      v13 = *((_DWORD *)v3 + 1);
      if ( v13 < *((_DWORD *)v4 + 1) )
LABEL_9:
      v14 = ++v7;
      if ( v7 >= v9 )
      {
        v5 = v12;
        v8 = *(_DWORD *)v4;
        goto LABEL_11;
      }
      BlockSource::getBlockID((BlockSource *)&v11, v6, (int)&v12);
      if ( v11 != BlockID::AIR )
      if ( ++v13 >= *((_DWORD *)v4 + 1) )
        v7 = v14;
        v9 = *((_DWORD *)v4 + 2);
        goto LABEL_9;
    result = 1;
  return result;
}


int __fastcall BlockSource::fireBlockEntityRemoved(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  __int64 v4; // r0@1
  unsigned int v5; // r7@2
  int v6; // r2@3
  void (__fastcall *v7)(int *); // r6@4
  int v8; // r1@4
  int v9; // r0@4
  int v11; // [sp+0h] [bp-28h]@4
  int v12; // [sp+4h] [bp-24h]@4

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 40);
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    v5 = 0;
    do
    {
      v6 = *v3;
      if ( !*v3 )
        break;
      v7 = *(void (__fastcall **)(int *))(**(_DWORD **)(v4 + 4 * v5) + 36);
      *v3 = 0;
      v11 = v6;
      v7(&v12);
      v8 = v12;
      v12 = 0;
      v9 = *v3;
      *v3 = v8;
      if ( v9 )
      {
        (*(void (**)(void))(*(_DWORD *)v9 + 4))();
        if ( v12 )
          (*(void (**)(void))(*(_DWORD *)v12 + 4))();
      }
      if ( v11 )
        (*(void (**)(void))(*(_DWORD *)v11 + 4))();
      v11 = 0;
      ++v5;
      v4 = *(_QWORD *)(v2 + 40);
    }
    while ( v5 < (HIDWORD(v4) - (signed int)v4) >> 2 );
  }
  return v4;
}


int __fastcall BlockSource::setBlockAndData(int a1, BlockPos *a2, char *a3, char a4, int a5, int a6)
{
  int v6; // r4@1
  int v8; // [sp+8h] [bp-10h]@1
  char v9; // [sp+Ch] [bp-Ch]@1
  char v10; // [sp+Dh] [bp-Bh]@1

  v9 = *a3;
  v10 = a4;
  v8 = 0;
  v6 = BlockSource::setBlockAndData(a1, a2, (int)&v9, a5, a6, (int)&v8);
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  return v6;
}


signed int __fastcall BlockSource::checkBlockPermissions(BlockSource *this, Entity *a2, const BlockPos *a3, int a4, const ItemInstance *a5, int a6)
{
  Entity *v6; // r5@1
  BlockSource *v7; // r9@1
  signed int v8; // r7@1
  const BlockPos *v9; // r6@1
  signed int v10; // r4@2
  int v11; // r8@4
  int v13; // r0@17
  bool v14; // zf@22
  float v19; // [sp+0h] [bp-40h]@26
  int v20; // [sp+Ch] [bp-34h]@14
  int v21; // [sp+10h] [bp-30h]@14
  int v22; // [sp+14h] [bp-2Ch]@14
  int v23; // [sp+18h] [bp-28h]@12
  int v24; // [sp+1Ch] [bp-24h]@13
  int v25; // [sp+20h] [bp-20h]@13

  v6 = a2;
  v7 = this;
  v8 = a4;
  v9 = a3;
  if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 648))(a2) )
  {
    v10 = 1;
  }
  else
    if ( *(_BYTE *)(Level::getAdventureSettings(*((Level **)v7 + 3)) + 2) )
      v11 = 0;
    else
      v11 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 656))(v6) ^ 1;
    _ZF = *((_BYTE *)a5 + 15) == 0;
    if ( *((_BYTE *)a5 + 15) )
      _ZF = *(_DWORD *)a5 == 0;
    if ( !_ZF
      && !ItemInstance::isNull(a5)
      && *((_BYTE *)a5 + 14)
      && (*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 656))(v6) == 1 )
    {
      BlockSource::getBlockID((BlockSource *)&v23, v7, (int)v9);
      v11 = ItemInstance::canPlaceOn(a5, (const Block *)Block::mBlocks[(unsigned __int8)v23]);
    }
    v23 = *(_DWORD *)v9;
    v24 = *((_DWORD *)v9 + 1);
    v25 = *((_DWORD *)v9 + 2);
    if ( v8 <= 5 )
      BlockPos::neighbor((BlockPos *)&v20, (int)&v23, v8);
      v23 = v20;
      v24 = v21;
      v25 = v22;
    if ( (Entity::hasType((int)v6, 319) == 1
       || Entity::hasType((int)v6, 312) == 1
       && (v13 = Entity::getOwner(v6), (v6 = (Entity *)v13) != 0)
       && Entity::hasType(v13, 319) == 1)
      && Player::canUseAbility((int)v6, &Abilities::BUILD_AND_MINE) != 1 )
      v10 = 0;
      v10 = BlockSource::_getBlockPermissions(v7, (const BlockPos *)&v23, v11);
    v14 = v10 == 0;
    if ( !v10 )
      v14 = a6 == 1;
    if ( v14 )
      __asm
      {
        VLDR            S0, [SP,#0x40+var_28]
        VMOV.F32        S6, #0.5
        VLDR            S2, [SP,#0x40+var_24]
        VLDR            S4, [SP,#0x40+var_20]
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S4, S4
        VADD.F32        S0, S0, S6
        VADD.F32        S2, S2, S6
        VADD.F32        S4, S4, S6
        VSTR            S0, [SP,#0x40+var_40]
        VSTR            S2, [SP,#0x40+var_3C]
        VSTR            S4, [SP,#0x40+var_38]
      }
      Level::denyEffect(*((Level **)v7 + 3), (const Vec3 *)&v19);
  return v10;
}


Entity *__fastcall BlockSource::fetchNearestEntityNotOfType(int a1, int a2, int a3, int a4, int a5)
{
  const Vec3 *v5; // r8@1
  int v6; // r5@1
  int v7; // r6@1
  int v8; // r4@1
  __int64 *v9; // r0@1
  __int64 *v10; // r6@1
  Entity *v11; // r5@1
  __int64 v12; // r0@1
  unsigned int v17; // r7@2
  Entity *v18; // r4@3
  __int64 v20; // r0@4
  int v22; // [sp+4h] [bp-28h]@1
  int v23; // [sp+8h] [bp-24h]@1
  int v24; // [sp+Ch] [bp-20h]@1
  char v25; // [sp+10h] [bp-1Ch]@1
  int v26; // [sp+2Ch] [bp+0h]@1

  v5 = (const Vec3 *)a3;
  v6 = a2;
  v7 = a1;
  v8 = a4;
  AABB::AABB((int)&v26, a3, a3);
  v22 = v8;
  v23 = v8;
  v24 = v8;
  AABB::grow((AABB *)&v25, (const Vec3 *)&v26, (int)&v22);
  v9 = (__int64 *)BlockSource::fetchEntities(v7, 256, (int)&v25, v6);
  v10 = v9;
  v11 = 0;
  v12 = *v9;
  if ( HIDWORD(v12) != (_DWORD)v12 )
  {
    __asm { VMOV.F32        S16, #-1.0 }
    v17 = 0;
    do
    {
      v18 = *(Entity **)(v12 + 4 * v17);
      if ( !EntityClassTree::isInstanceOf(*(_DWORD *)(v12 + 4 * v17), a5) )
      {
        _R0 = Entity::distanceToSqr(v18, v5);
        __asm { VMOV            S0, R0 }
        v20 = 0LL;
        __asm
        {
          VCMPE.F32       S0, S16
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          LODWORD(v20) = 1;
        if ( !v11 )
          HIDWORD(v20) = 1;
        if ( v20 )
          __asm { VMOVNE.F32      S16, S0 }
          v11 = v18;
      }
      v12 = *v10;
      ++v17;
    }
    while ( v17 < (HIDWORD(v12) - (signed int)v12) >> 2 );
  }
  return v11;
}


int __fastcall BlockSource::getAboveTopSolidBlock(BlockSource *this, int a2, int a3, int a4, int a5)
{
  BlockSource *v5; // r5@1
  int v6; // r0@1
  int v7; // r4@1
  LevelChunk *v8; // r6@1
  int v9; // r0@2
  int result; // r0@2
  int v11; // [sp+8h] [bp-30h]@1
  int v12; // [sp+Ch] [bp-2Ch]@1
  int v13; // [sp+10h] [bp-28h]@1
  char v14; // [sp+14h] [bp-24h]@2
  char v15; // [sp+18h] [bp-20h]@1

  v5 = this;
  v6 = *((_WORD *)this + 12);
  v7 = a4;
  v11 = a2;
  v12 = v6 - 1;
  v13 = a3;
  ChunkPos::ChunkPos((ChunkPos *)&v15, (const BlockPos *)&v11);
  v8 = (LevelChunk *)BlockSource::getChunk(v5, (const ChunkPos *)&v15);
  if ( v8 )
  {
    ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v14, (const BlockPos *)&v11);
    v9 = (*(int (**)(void))(**((_DWORD **)v5 + 5) + 192))();
    LOWORD(result) = LevelChunk::getAboveTopSolidBlock(v8, (const ChunkBlockPos *)&v14, v9, v7, a5);
  }
  else
    LOWORD(result) = *(_WORD *)(*((_DWORD *)v5 + 5) + 120);
  return (signed __int16)result;
}


int __fastcall BlockSource::hasBlock(BlockSource *this, const BlockPos *a2)
{
  BlockSource *v2; // r4@1
  LevelChunk *v3; // r0@1
  LevelChunk *v4; // r4@1
  int result; // r0@3
  int v6; // [sp+0h] [bp-18h]@1

  v2 = this;
  ChunkPos::ChunkPos((ChunkPos *)&v6, a2);
  v3 = (LevelChunk *)BlockSource::getChunk(v2, (const ChunkPos *)&v6);
  v4 = v3;
  if ( v3 && *(_QWORD *)LevelChunk::getPosition(v3) != *(_QWORD *)&ChunkPos::INVALID )
    result = LevelChunk::isReadOnly(v4) ^ 1;
  else
    result = 0;
  return result;
}


int __fastcall BlockSource::setBlock(int a1, BlockPos *a2, char *a3, int a4)
{
  int v4; // r4@1
  int v6; // [sp+8h] [bp-10h]@1
  char v7; // [sp+Ch] [bp-Ch]@1
  char v8; // [sp+Dh] [bp-Bh]@1

  v7 = *a3;
  v8 = 0;
  v6 = 0;
  v4 = BlockSource::setBlockAndData(a1, a2, (int)&v7, a4, 0, (int)&v6);
  if ( v6 )
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
  return v4;
}


int __fastcall BlockSource::getCachedTemperatureNoise(BlockSource *this, const BlockPos *a2)
{
  BlockSource *v2; // r5@1
  const BlockPos *v3; // r4@1
  LevelChunk *v4; // r5@1
  int result; // r0@2
  char v6; // [sp+4h] [bp-1Ch]@2
  char v7; // [sp+8h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ChunkPos::ChunkPos((ChunkPos *)&v7, a2);
  v4 = (LevelChunk *)BlockSource::getChunk(v2, (const ChunkPos *)&v7);
  if ( v4 )
  {
    ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v6, v3);
    result = LevelChunk::getCachedTemperatureNoise(v4, (const ChunkBlockPos *)&v6);
  }
  else
    result = 0;
  return result;
}


signed int __fastcall BlockSource::containsFireBlock(BlockSource *this, const AABB *a2)
{
  BlockSource *v2; // r4@1
  signed int result; // r0@3
  Material *v14; // r0@8
  int v15; // [sp+0h] [bp-58h]@2
  int v16; // [sp+4h] [bp-54h]@4
  float v17; // [sp+8h] [bp-50h]@1
  int v23; // [sp+24h] [bp-34h]@8
  int v24; // [sp+28h] [bp-30h]@8
  int v25; // [sp+2Ch] [bp-2Ch]@8
  unsigned __int8 v26; // [sp+30h] [bp-28h]@8

  v2 = this;
  AABB::flooredCeiledCopy((AABB *)&v17, (int)a2);
  if ( BlockSource::hasChunksAt(v2, (const AABB *)&v17) != 1 )
    goto LABEL_16;
  __asm
  {
    VLDR            S0, [SP,#0x58+var_50]
    VLDR            S2, [SP,#0x58+var_44]
    VCVTR.S32.F32   S2, S2
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S2
    VMOV            R7, S0
  }
  v15 = _R0;
  if ( _R7 != _R0 )
    while ( 2 )
    {
      __asm
      {
        VLDR            S0, [SP,#0x58+var_48]
        VLDR            S2, [SP,#0x58+var_3C]
        VCVTR.S32.F32   S2, S2
        VCVTR.S32.F32   S0, S0
        VMOV            R0, S2
        VMOV            R6, S0
      }
      v16 = _R0;
      while ( _R6 != _R0 )
        __asm
        {
          VLDR            S0, [SP,#0x58+var_4C]
          VLDR            S2, [SP,#0x58+var_40]
          VCVTR.S32.F32   S2, S2
          VCVTR.S32.F32   S0, S0
          VMOV            R8, S2
          VMOV            R10, S0
        }
        if ( _R10 != _R8 )
          do
          {
            v23 = _R7;
            v24 = _R10;
            v25 = _R6;
            BlockSource::getBlockID((BlockSource *)&v26, v2, (int)&v23);
            v14 = (Material *)Block::getMaterial((Block *)Block::mBlocks[v26]);
            if ( Material::isSuperHot(v14) )
              return 1;
          }
          while ( _R8 != ++_R10 );
        ++_R6;
        _R0 = v16;
      ++_R7;
      result = 0;
      if ( _R7 != v15 )
        continue;
      break;
    }
  else
LABEL_16:
    result = 0;
  return result;
}


signed int __fastcall BlockSource::canSeeSkyFromBelowWater(int a1, int a2)
{
  int v2; // r5@1
  signed int v4; // r1@1
  signed int v5; // r0@1
  int v11; // r0@2
  LevelChunk *v12; // r6@4
  Block *v13; // r6@8
  int v14; // r7@9
  Material *v16; // r0@10
  LevelChunk *v17; // r5@15
  float v19; // [sp+4h] [bp-3Ch]@2
  char v20; // [sp+10h] [bp-30h]@2
  int v21; // [sp+14h] [bp-2Ch]@2
  char v22; // [sp+1Ch] [bp-24h]@5
  unsigned __int8 v23; // [sp+20h] [bp-20h]@4

  v2 = a1;
  _R4 = a2;
  v4 = *(_WORD *)(*(_DWORD *)(a1 + 20) + 20);
  v5 = *(_DWORD *)(_R4 + 4);
  if ( v5 >= v4 )
  {
    if ( v5 >= *(_WORD *)(v2 + 24) )
      return 1;
    if ( v5 >= 0 )
    {
      ChunkPos::ChunkPos((ChunkPos *)&v20, (const BlockPos *)_R4);
      v17 = (LevelChunk *)BlockSource::getChunk((BlockSource *)v2, (const ChunkPos *)&v20);
      if ( v17 )
      {
        ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v23, (const BlockPos *)_R4);
        return LevelChunk::isSkyLit(v17, (const ChunkBlockPos *)&v23);
      }
    }
    return 0;
  }
  __asm { VLDR            S0, [R4] }
  _R0 = (signed __int16)v4;
  __asm
    VLDR            S2, [R4,#8]
    VMOV            S4, R0
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S2, S2
    VSTR            S0, [SP,#0x40+var_3C]
    VSTR            S4, [SP,#0x40+var_38]
    VSTR            S2, [SP,#0x40+var_34]
  BlockPos::BlockPos((int)&v20, (int)&v19);
  v11 = v21;
  if ( v21 >= *(_WORD *)(v2 + 24) )
  if ( v21 <= -1 )
    goto LABEL_7;
  ChunkPos::ChunkPos((ChunkPos *)&v23, (const BlockPos *)&v20);
  v12 = (LevelChunk *)BlockSource::getChunk((BlockSource *)v2, (const ChunkPos *)&v23);
  if ( !v12 )
  ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v22, (const BlockPos *)&v20);
  if ( LevelChunk::isSkyLit(v12, (const ChunkBlockPos *)&v22) )
LABEL_7:
  v21 = v11 - 1;
  BlockSource::getBlockID((BlockSource *)&v23, (const BlockPos *)v2, (int)&v20);
  if ( v21 > *(_DWORD *)(_R4 + 4) )
    v13 = (Block *)Block::mBlocks[v23];
    while ( 1 )
      BlockSource::getRawBrightness((BlockSource *)&v23, (const BlockPos *)v2, _R4, 1);
      v14 = v23;
      _R0 = &Dimension::getBrightnessRamp(*(Dimension **)(v2 + 20))[2 * v14];
      __asm
        VLDR            S0, [R0]
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v16 = (Material *)Block::getMaterial(v13);
        if ( Material::isLiquid(v16) != 1 )
          break;
      if ( --v21 <= *(_DWORD *)(_R4 + 4) )
        return 1;
  return 1;
}


int __fastcall BlockSource::removeBlock(BlockSource *this, const BlockPos *a2)
{
  int v2; // r4@1
  int v4; // [sp+8h] [bp-10h]@1
  char v5; // [sp+Ch] [bp-Ch]@1
  char v6; // [sp+Dh] [bp-Bh]@1

  v5 = 0;
  v6 = 0;
  v4 = 0;
  v2 = BlockSource::setBlockAndData((int)this, a2, (int)&v5, 3, 0, (int)&v4);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  return v2;
}


signed int __fastcall BlockSource::areChunksFullyLoaded(BlockSource *this, const BlockPos *a2, int a3)
{
  BlockSource *v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r7@1
  signed int v7; // r2@1
  signed int v8; // r1@1
  signed int v9; // r7@1
  __int64 v10; // r8@1
  int v11; // r10@1
  int v12; // r6@1
  signed int v13; // r3@1
  signed int v14; // r7@1
  int v15; // r5@1
  int v16; // r0@2
  LevelChunk *v17; // r0@7
  bool v18; // nf@9
  unsigned __int8 v19; // vf@9
  int v21; // [sp+0h] [bp-38h]@1
  signed int v22; // [sp+4h] [bp-34h]@1
  __int64 v23; // [sp+8h] [bp-30h]@7

  v3 = this;
  v4 = a3;
  v5 = *(_DWORD *)a2;
  v6 = *((_DWORD *)a2 + 2);
  ChunkSource::getChunkSide(*((ChunkSource **)this + 4));
  v7 = v6 - v4;
  v8 = v5 + v4;
  v9 = v6 + v4;
  HIDWORD(v10) = v7 >> 4;
  v11 = (v5 - v4) >> 4;
  v12 = ((v9 >> 4) + 1 - (v7 >> 4)) * (((v5 + v4) >> 4) + 1 - v11);
  v13 = v9 >> 4;
  v14 = v8 >> 4;
  v15 = 0;
  v22 = v13;
  v21 = v7 >> 4;
LABEL_5:
  LODWORD(v10) = v11;
  while ( v12 != v15 )
  {
    v23 = v10;
    v17 = (LevelChunk *)BlockSource::getChunk(v3, (const ChunkPos *)&v23);
    if ( !v17 || LevelChunk::isOnLoadedDone(v17) != 1 )
      return 0;
    ++v15;
    v19 = __OFSUB__((_DWORD)v10, v14);
    v18 = (signed int)v10 - v14 < 0;
    LODWORD(v10) = v10 + 1;
    if ( !(v18 ^ v19) )
    {
      v16 = v21;
      if ( SHIDWORD(v10) < v22 )
        v16 = HIDWORD(v10) + 1;
      HIDWORD(v10) = v16;
      goto LABEL_5;
    }
  }
  return 1;
}


Entity *__fastcall BlockSource::fetchNearestEntityOfType(int a1, int a2, int a3, int a4)
{
  const Entity *v4; // r8@1
  Entity **v5; // r7@1
  __int64 v6; // kr00_8@1
  Entity *v7; // r5@1
  Entity *v12; // r6@3
  Entity *v13; // t1@3

  v4 = (const Entity *)a2;
  v6 = *(_QWORD *)BlockSource::fetchEntities(a1, a4, a3, a2);
  v5 = (Entity **)v6;
  v7 = 0;
  if ( (_DWORD)v6 != HIDWORD(v6) )
  {
    __asm { VLDR            S16, =3.4028e38 }
    do
    {
      v13 = *v5;
      ++v5;
      v12 = v13;
      _R0 = Entity::distanceToSqr(v13, v4);
      __asm
      {
        VMOV            S0, R0
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        v7 = v12;
      else
        __asm { VMOVGT.F32      S0, S16 }
      __asm { VMOV.F32        S16, S0 }
    }
    while ( !_ZF );
  }
  return v7;
}


LevelChunk *__fastcall BlockSource::updateNeighborsAt(BlockSource *this, const BlockPos *a2)
{
  const BlockPos *v2; // r4@1
  BlockSource *v3; // r5@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r1@1
  int v8; // r2@1
  int v9; // r2@1
  int v10; // r2@1
  int v11; // r1@1
  int v12; // r2@1
  int v13; // r1@1
  int v14; // r2@1
  int v16; // [sp+0h] [bp-58h]@1
  int v17; // [sp+4h] [bp-54h]@1
  int v18; // [sp+8h] [bp-50h]@1
  int v19; // [sp+Ch] [bp-4Ch]@1
  int v20; // [sp+10h] [bp-48h]@1
  int v21; // [sp+14h] [bp-44h]@1
  __int64 v22; // [sp+18h] [bp-40h]@1
  int v23; // [sp+20h] [bp-38h]@1
  __int64 v24; // [sp+24h] [bp-34h]@1
  int v25; // [sp+2Ch] [bp-2Ch]@1
  int v26; // [sp+30h] [bp-28h]@1
  int v27; // [sp+34h] [bp-24h]@1
  int v28; // [sp+38h] [bp-20h]@1
  int v29; // [sp+3Ch] [bp-1Ch]@1
  int v30; // [sp+40h] [bp-18h]@1
  int v31; // [sp+44h] [bp-14h]@1

  v2 = a2;
  v3 = this;
  v4 = *(_DWORD *)a2;
  v5 = *((_DWORD *)a2 + 1);
  v6 = *((_DWORD *)v2 + 2);
  v29 = v4 - 1;
  v30 = v5;
  v31 = v6;
  BlockSource::neighborChanged(v3, (const BlockPos *)&v29, v2);
  v7 = *((_DWORD *)v2 + 1);
  v8 = *((_DWORD *)v2 + 2);
  v26 = *(_DWORD *)v2 + 1;
  v27 = v7;
  v28 = v8;
  BlockSource::neighborChanged(v3, (const BlockPos *)&v26, v2);
  v9 = *((_DWORD *)v2 + 2);
  v24 = *(_QWORD *)v2;
  v25 = v9 + 1;
  BlockSource::neighborChanged(v3, (const BlockPos *)&v24, v2);
  v10 = *((_DWORD *)v2 + 2);
  v22 = *(_QWORD *)v2;
  v23 = v10 - 1;
  BlockSource::neighborChanged(v3, (const BlockPos *)&v22, v2);
  v11 = *((_DWORD *)v2 + 1);
  v12 = *((_DWORD *)v2 + 2);
  v19 = *(_DWORD *)v2;
  v20 = v11 + 1;
  v21 = v12;
  BlockSource::neighborChanged(v3, (const BlockPos *)&v19, v2);
  v13 = *((_DWORD *)v2 + 1);
  v14 = *((_DWORD *)v2 + 2);
  v16 = *(_DWORD *)v2;
  v17 = v13 - 1;
  v18 = v14;
  return BlockSource::neighborChanged(v3, (const BlockPos *)&v16, v2);
}


signed int __fastcall BlockSource::findNextSpawnBlockUnder(BlockSource *this, BlockPos *a2)
{
  BlockSource *v2; // r5@1
  BlockPos *v3; // r4@1
  LevelChunk *v4; // r0@1
  LevelChunk *v5; // r6@1
  int *v6; // r7@4
  Material *v7; // r0@8
  int v8; // r0@9
  signed int result; // r0@10
  SlabBlock *v10; // r0@12
  int v11; // r1@12
  unsigned __int8 v12; // [sp+4h] [bp-2Ch]@4
  char v13; // [sp+8h] [bp-28h]@1
  unsigned __int8 v14; // [sp+10h] [bp-20h]@8
  unsigned __int8 v15; // [sp+14h] [bp-1Ch]@11

  v2 = this;
  v3 = a2;
  ChunkPos::ChunkPos((ChunkPos *)&v13, a2);
  v4 = (LevelChunk *)BlockSource::getChunk(v2, (const ChunkPos *)&v13);
  v5 = v4;
  if ( !v4 || *(_QWORD *)LevelChunk::getPosition(v4) == *(_QWORD *)&ChunkPos::INVALID || LevelChunk::isReadOnly(v5) )
  {
LABEL_10:
    result = 0;
  }
  else
    while ( 1 )
    {
      BlockSource::getBlockID((BlockSource *)&v12, v2, (int)v3);
      --*((_DWORD *)v3 + 1);
      v6 = (int *)Block::getMaterial((Block *)Block::mBlocks[v12]);
      if ( Material::isType(v6, 0) || Material::isType(v6, 5) == 1 )
        break;
      if ( *((_DWORD *)v3 + 1) < 0 )
        goto LABEL_10;
    }
      BlockSource::getBlockID((BlockSource *)&v14, v2, (int)v3);
      v7 = (Material *)Block::getMaterial((Block *)Block::mBlocks[v14]);
      if ( Material::getBlocksMotion(v7) == 1 )
      v8 = *((_DWORD *)v3 + 1);
      *((_DWORD *)v3 + 1) = v8 - 1;
      if ( v8 <= 0 )
    BlockSource::getBlockID((BlockSource *)&v15, v2, (int)v3);
    if ( Block::hasProperty(Block::mBlocks[v15], v15, 2LL) != 1
      || (v10 = (SlabBlock *)BlockSource::getData(v2, v3), SlabBlock::isBottomSlab(v10, v11) != 1) )
      result = 1;
    else
      result = BlockSource::findNextSpawnBlockUnder(v2, v3);
  return result;
}


unsigned int __fastcall BlockSource::getGrassColor(BlockSource *this, const BlockPos *a2)
{
  BlockSource *v2; // r5@1
  const BlockPos *v3; // r4@1
  LevelChunk *v4; // r5@1
  unsigned int result; // r0@2
  char v6; // [sp+4h] [bp-1Ch]@2
  char v7; // [sp+8h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ChunkPos::ChunkPos((ChunkPos *)&v7, a2);
  v4 = (LevelChunk *)BlockSource::getChunk(v2, (const ChunkPos *)&v7);
  if ( v4 )
  {
    ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v6, v3);
    result = LevelChunk::getGrassColor(v4, (const ChunkBlockPos *)&v6);
  }
  else
    result = 0;
  return result;
}


int __fastcall BlockSource::getBlockID(BlockSource *this, int a2, int a3, int a4, int a5)
{
  int v6; // [sp+4h] [bp-14h]@1
  int v7; // [sp+8h] [bp-10h]@1
  int v8; // [sp+Ch] [bp-Ch]@1

  v6 = a3;
  v7 = a4;
  v8 = a5;
  return BlockSource::getBlockID(this, (const BlockPos *)a2, (int)&v6);
}


int __fastcall BlockSource::getHeightmapPos(BlockSource *this, const BlockPos *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r5@1
  BlockSource *v4; // r6@1
  BlockSource *v5; // r4@1
  int v6; // r8@1
  LevelChunk *v7; // r6@1
  int result; // r0@2
  int v9; // r1@4
  int v10; // [sp+4h] [bp-4h]@2
  int v11; // [sp+8h] [bp+0h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = *(_DWORD *)a3;
  ChunkPos::ChunkPos((ChunkPos *)&v11, a3);
  v7 = (LevelChunk *)BlockSource::getChunk(v4, (const ChunkPos *)&v11);
  if ( v7 )
  {
    ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v10, v3);
    result = LevelChunk::getHeightmap(v7, (const ChunkBlockPos *)&v10);
  }
  else
    result = 0;
  v9 = *((_DWORD *)v3 + 2);
  *(_DWORD *)v5 = v6;
  *((_DWORD *)v5 + 1) = result;
  *((_DWORD *)v5 + 2) = v9;
  return result;
}


int __fastcall BlockSource::fetchEntities(int a1, int a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r4@1
  int v6; // r11@1
  const AABB *v7; // r10@1
  signed int v8; // r9@1
  signed int v9; // r4@1
  __int64 v10; // kr00_8@1
  int v11; // r5@2
  const AABB *v12; // r9@2
  int v13; // r4@2
  int v14; // r0@3
  __int64 v15; // r0@6
  char *v16; // r9@8
  void *v17; // r8@8
  signed int v18; // r1@8
  unsigned int v19; // r2@8
  unsigned int v20; // r1@10
  unsigned int v21; // r10@10
  char *v22; // r7@17
  int v23; // r0@21
  int v24; // r7@24
  signed int v25; // r0@24
  unsigned int v26; // r5@24
  int v27; // r0@25
  LevelChunk *v28; // r0@29
  int *v29; // r8@30
  __int64 v30; // kr10_8@30
  __int64 v31; // r0@34
  int v32; // r11@34
  char *v33; // r4@36
  void *v34; // r5@36
  signed int v35; // r1@36
  unsigned int v36; // r2@36
  unsigned int v37; // r1@38
  unsigned int v38; // r9@38
  int *v39; // r7@45
  int v40; // r7@47
  bool v41; // nf@51
  unsigned __int8 v42; // vf@51
  int v43; // r4@54
  _DWORD *v44; // r0@54
  int v46; // [sp+8h] [bp-80h]@24
  unsigned __int64 v47; // [sp+10h] [bp-78h]@24
  const AABB *i; // [sp+14h] [bp-74h]@2
  int v49; // [sp+18h] [bp-70h]@1
  signed int v50; // [sp+1Ch] [bp-6Ch]@24
  int v51; // [sp+20h] [bp-68h]@24
  signed int v52; // [sp+24h] [bp-64h]@24
  unsigned __int64 v53; // [sp+28h] [bp-60h]@36
  _DWORD *v54; // [sp+30h] [bp-58h]@54
  void (*v55)(void); // [sp+38h] [bp-50h]@54
  signed int (__fastcall *v56)(int *, int); // [sp+3Ch] [bp-4Ch]@54
  int v57; // [sp+40h] [bp-48h]@29
  int v58; // [sp+44h] [bp-44h]@29
  int v59; // [sp+48h] [bp-40h]@1
  __int64 v60; // [sp+50h] [bp-38h]@1
  char v61; // [sp+54h] [bp-34h]@1
  int v62; // [sp+5Ch] [bp-2Ch]@1
  int v63; // [sp+60h] [bp-28h]@1

  v4 = a1;
  v63 = a4;
  v5 = a3;
  v6 = a2;
  v49 = a1 + 76;
  *(_DWORD *)(v49 + 4) = *(_DWORD *)(a1 + 76);
  BlockPos::BlockPos((int)&v61, a3);
  v7 = (const AABB *)v5;
  BlockPos::BlockPos((int)&v59, v5 + 12);
  v8 = v62;
  v9 = v59;
  v10 = v60;
  if ( Level::isClientSide(*(Level **)(v49 - 64)) )
  {
    v11 = *((_DWORD *)Dimension::getEntityIdMap(*(Dimension **)(v4 + 20)) + 2);
    v12 = v7;
    v13 = v6;
    for ( i = v7; v11; v11 = *(_DWORD *)v11 )
    {
      v14 = *(_DWORD *)(v11 + 16);
      if ( v14 != v63
        && EntityClassTree::isInstanceOf(v14, v6) == 1
        && AABB::intersectsInner((AABB *)(*(_DWORD *)(v11 + 16) + 264), v12) == 1 )
      {
        v15 = *(_QWORD *)(v4 + 80);
        if ( (_DWORD)v15 == HIDWORD(v15) )
        {
          v16 = 0;
          v17 = *(void **)v49;
          v18 = v15 - *(_DWORD *)v49;
          v19 = v18 >> 2;
          if ( !(v18 >> 2) )
            v19 = 1;
          v20 = v19 + (v18 >> 2);
          v21 = v20;
          if ( 0 != v20 >> 30 )
            v21 = 0x3FFFFFFF;
          if ( v20 < v19 )
          if ( v21 )
          {
            if ( v21 >= 0x40000000 )
              goto LABEL_57;
            v16 = (char *)operator new(4 * v21);
            LODWORD(v15) = *(_QWORD *)(v4 + 76) >> 32;
            v17 = (void *)*(_QWORD *)(v4 + 76);
          }
          v22 = &v16[v15 - (_DWORD)v17];
          *(_DWORD *)v22 = *(_DWORD *)(v11 + 16);
          if ( ((signed int)v15 - (signed int)v17) >> 2 )
            _aeabi_memmove4(v16, v17);
          if ( v17 )
            operator delete(v17);
          *(_DWORD *)(v4 + 76) = v16;
          *(_DWORD *)(v4 + 80) = v22 + 4;
          v23 = (int)&v16[4 * v21];
          v12 = i;
          *(_DWORD *)(v4 + 84) = v23;
        }
        else
          *(_DWORD *)v15 = *(_DWORD *)(v11 + 16);
          *(_DWORD *)(v4 + 80) += 4;
      }
    }
  }
  else
    v24 = SHIDWORD(v10) >> 4;
    v51 = (1 - (v8 >> 4) + ((signed int)v10 >> 4)) * (1 - (SHIDWORD(v10) >> 4) + (v9 >> 4));
    v50 = v9 >> 4;
    v25 = v8 >> 4;
    v26 = 0;
    v46 = v25;
    v52 = v25;
    v47 = __PAIR__((unsigned int)v7, v6);
    while ( v51 != v26 )
      v57 = v24;
      v58 = v52;
      v28 = (LevelChunk *)BlockSource::getChunk((BlockSource *)v4, (const ChunkPos *)&v57);
      if ( v28 )
        v30 = *(_QWORD *)LevelChunk::getEntities(v28);
        v29 = (int *)v30;
        if ( (_DWORD)v30 != HIDWORD(v30) )
          do
            if ( *v29 != v63
              && EntityClassTree::isInstanceOf(*v29, v13) == 1
              && AABB::intersectsInner((AABB *)(*v29 + 264), v12) == 1 )
            {
              v31 = *(_QWORD *)(v4 + 80);
              v32 = *v29;
              if ( (_DWORD)v31 == HIDWORD(v31) )
              {
                v53 = __PAIR__(v26, v24);
                v33 = 0;
                v34 = *(void **)v49;
                v35 = v31 - *(_DWORD *)v49;
                v36 = v35 >> 2;
                if ( !(v35 >> 2) )
                  v36 = 1;
                v37 = v36 + (v35 >> 2);
                v38 = v37;
                if ( 0 != v37 >> 30 )
                  v38 = 0x3FFFFFFF;
                if ( v37 < v36 )
                if ( v38 )
                {
                  if ( v38 >= 0x40000000 )
LABEL_57:
                    sub_21E57F4();
                  v33 = (char *)operator new(4 * v38);
                  LODWORD(v31) = *(_QWORD *)(v4 + 76) >> 32;
                  v34 = (void *)*(_QWORD *)(v4 + 76);
                }
                v39 = (int *)&v33[v31 - (_DWORD)v34];
                *v39 = v32;
                if ( ((signed int)v31 - (signed int)v34) >> 2 )
                  _aeabi_memmove4(v33, v34);
                v40 = (int)(v39 + 1);
                if ( v34 )
                  operator delete(v34);
                *(_DWORD *)(v4 + 76) = v33;
                *(_DWORD *)(v4 + 80) = v40;
                *(_DWORD *)(v4 + 84) = &v33[4 * v38];
                v12 = (const AABB *)HIDWORD(v47);
                v13 = v47;
                v26 = HIDWORD(v53);
                v24 = v53;
              }
              else
                *(_DWORD *)v31 = v32;
                *(_DWORD *)(v4 + 80) += 4;
            }
            ++v29;
          while ( (int *)HIDWORD(v30) != v29 );
      ++v26;
      v42 = __OFSUB__(v24, v50);
      v41 = v24++ - v50 < 0;
      if ( !(v41 ^ v42) )
        v27 = v46;
        if ( v52 < (signed int)v10 >> 4 )
          v27 = v52 + 1;
        v24 = SHIDWORD(v10) >> 4;
        v52 = v27;
  if ( EntityClassTree::isTypeInstanceOf(319, v13) == 1 )
    v43 = *(_DWORD *)(v4 + 20);
    v44 = operator new(0xCu);
    *v44 = v4;
    v44[1] = &v63;
    v44[2] = v12;
    v54 = v44;
    v55 = (void (*)(void))sub_18EA0D8;
    v56 = sub_18EA01A;
    Dimension::forEachPlayer(v43, (int)&v54);
    if ( v55 )
      v55();
  return v49;
}


  if ( BlockSource::isSolidBlockingBlock(a1, a2) == 1 )
{
    v6 = BlockSource::getBlock(v5, v4);
    if ( v3 || *(_BYTE *)(v6 + 4) != *(_BYTE *)(Block::mPiston + 4) )
      result = 1;
  }
  return result;
}


LevelChunk *__fastcall BlockSource::setBorderBlock(BlockSource *this, const BlockPos *a2, bool a3)
{
  BlockSource *v3; // r6@1
  bool v4; // r4@1
  const BlockPos *v5; // r5@1
  LevelChunk *result; // r0@1
  LevelChunk *v7; // r6@1
  int v8; // [sp+4h] [bp-4h]@2
  int v9; // [sp+8h] [bp+0h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  ChunkPos::ChunkPos((ChunkPos *)&v9, a2);
  result = (LevelChunk *)BlockSource::getChunk(v3, (const ChunkPos *)&v9);
  v7 = result;
  if ( result )
  {
    ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v8, v5);
    result = (LevelChunk *)LevelChunk::setBorder(v7, (const ChunkBlockPos *)&v8, v4);
  }
  return result;
}


int __fastcall BlockSource::removeBlockEntity(BlockSource *this, const BlockPos *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r6@1
  BlockSource *v5; // r5@1
  const BlockPos *v6; // r1@1
  int result; // r0@2
  int v8; // [sp+0h] [bp-20h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  ChunkPos::ChunkPos((ChunkPos *)&v8, a3);
  v6 = (const BlockPos *)BlockSource::getChunk(v4, (const ChunkPos *)&v8);
  if ( v6 )
  {
    result = LevelChunk::removeBlockEntity(v5, v6, v3);
  }
  else
    result = 0;
    *(_DWORD *)v5 = 0;
  return result;
}


char *__fastcall BlockSource::fetchCollisionShapes(BlockSource *this, BlockSource *a2, const AABB *a3, float *a4, int a5, Entity *a6)
{
  BlockSource *v6; // r6@1
  BlockSource *v8; // r4@1
  int v9; // r1@1
  float *v10; // r7@1
  int v16; // r0@8
  int v17; // r4@8
  float v19; // r1@8
  float v20; // r1@8
  BlockSource *v21; // r6@9
  char *v22; // r7@9
  int v24; // r0@10
  int v25; // r11@10
  float v27; // r1@10
  int v28; // r0@10
  int v30; // r0@12
  int v31; // r8@12
  float v33; // r1@12
  int i; // r9@12
  BlockSource *v35; // r10@13
  char *v36; // r5@13
  int v37; // r6@13
  int (__fastcall *v38)(int, BlockSource *, int *, const AABB *); // r7@13
  BlockSource *v40; // r8@22
  int v42; // r0@23
  int v43; // r6@23
  float v45; // r1@23
  int v46; // r0@24
  void (__cdecl *v47)(int, BlockSource *); // r5@24
  int v49; // [sp+Ch] [bp-7Ch]@8
  int v50; // [sp+10h] [bp-78h]@10
  int v51; // [sp+10h] [bp-78h]@22
  float *v52; // [sp+14h] [bp-74h]@8
  int j; // [sp+18h] [bp-70h]@23
  signed int v54; // [sp+1Ch] [bp-6Ch]@9
  BlockPos *v55; // [sp+24h] [bp-64h]@6
  char *v56; // [sp+28h] [bp-60h]@1
  BlockSource *v57; // [sp+2Ch] [bp-5Ch]@6
  const AABB *v58; // [sp+30h] [bp-58h]@1
  int v59; // [sp+34h] [bp-54h]@13
  int v60; // [sp+38h] [bp-50h]@13
  int v61; // [sp+3Ch] [bp-4Ch]@13
  char v62; // [sp+40h] [bp-48h]@9
  int v63; // [sp+44h] [bp-44h]@13
  int v64; // [sp+48h] [bp-40h]@13
  unsigned __int8 v65; // [sp+4Ch] [bp-3Ch]@9

  v6 = this;
  _R5 = a3;
  v58 = a3;
  v8 = a2;
  v9 = a5;
  v10 = a4;
  v56 = (char *)this + 100;
  *((_DWORD *)this + 26) = *((_DWORD *)this + 25);
  if ( a5 == 1 )
    BlockSource::addUnloadedChunksAABBs(this, a3);
  __asm
  {
    VLDR            S0, [R5,#0x10]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    BlockSource::addVoidFloor(v6, _R5);
  __asm { VMOV.F32        S16, #-1.0 }
  v55 = v6;
  v57 = v8;
  if ( v10 )
    *(_DWORD *)v10 = 0;
  __asm { VLDR            S0, [R5] }
  v52 = v10;
    VADD.F32        S0, S0, S16
    VMOV            R0, S0
  v16 = mce::Math::floor(_R0, *(float *)&v9);
    VMOV.F32        S18, #1.0
    VLDR            S0, [R5,#0xC]
  v17 = v16;
    VADD.F32        S0, S0, S18
  v49 = mce::Math::floor(_R0, v19) + 1;
  if ( v17 != v49 )
    v21 = (BlockSource *)&v65;
    v54 = 0x7FFFFFFF;
    v22 = &v62;
    do
    {
      __asm
      {
        VLDR            S0, [R5,#8]
        VADD.F32        S0, S0, S16
        VMOV            R0, S0
      }
      v24 = mce::Math::floor(_R0, v20);
      __asm { VLDR            S0, [R5,#0x14] }
      v25 = v24;
        VADD.F32        S0, S0, S18
      v28 = mce::Math::floor(_R0, v27);
      LODWORD(v20) = v28 + 1;
      v50 = v28 + 1;
      if ( v25 != v28 + 1 )
        if ( v52 )
        {
          do
          {
            __asm
            {
              VLDR            S0, [R5,#4]
              VADD.F32        S0, S0, S16
              VMOV            R0, S0
            }
            v30 = mce::Math::floor(_R0, v20);
            __asm { VLDR            S0, [R5,#0x10] }
            v31 = v30;
              VADD.F32        S0, S0, S18
            for ( i = mce::Math::floor(_R0, v33) + 1; i != v31; ++v31 )
              *(_DWORD *)&v62 = v17;
              v63 = v31;
              v64 = v25;
              v35 = v21;
              v36 = v22;
              BlockSource::getBlockID(v21, v55, (int)v22);
              v37 = Block::mBlocks[v65];
              v38 = *(int (__fastcall **)(int, BlockSource *, int *, const AABB *))(*(_DWORD *)v37 + 36);
              v59 = v17;
              v60 = v31;
              v61 = v25;
              if ( v38(v37, v57, &v59, v58) != 1
                || (_R0 = (*(int (__fastcall **)(int))(*(_DWORD *)v37 + 140))(v37), v20 = *(float *)&v54, v31 >= v54) )
              {
                v21 = v35;
                v22 = v36;
              }
              else
                __asm { VMOV            S0, R0 }
                __asm
                {
                  VCMPE.F32       S0, #0.0
                  VMRS            APSR_nzcv, FPSCR
                }
                if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                  __asm { VSTRGT          S0, [R0] }
                  v54 = v31;
            _R5 = v58;
            ++v25;
          }
          while ( v25 != v50 );
        }
        else
          v40 = v21;
          v51 = v28 + 1;
            v42 = mce::Math::floor(_R0, v20);
            v43 = v42;
            for ( j = mce::Math::floor(_R0, v45) + 1; j != v43; ++v43 )
              v63 = v43;
              BlockSource::getBlockID(v40, v55, (int)v22);
              v46 = Block::mBlocks[v65];
              v47 = *(void (__cdecl **)(int, BlockSource *))(*(_DWORD *)v46 + 36);
              v60 = v43;
              v47(v46, v57);
          while ( v25 != v51 );
          v21 = v40;
      ++v17;
    }
    while ( v17 != v49 );
  BlockSource::fetchBorderBlockCollisions(v55, v57, _R5, a6);
  return v56;
}


int __fastcall BlockSource::fetchEntities2(int a1, int a2, const AABB *a3, int a4)
{
  int v4; // r6@1
  int v6; // r7@1
  float v7; // r1@1
  int v9; // r4@1
  int v11; // r0@1
  int v12; // r5@1
  float v14; // r1@1
  int v15; // r0@1
  int v16; // r8@1
  float v18; // r1@1
  int v19; // r0@1
  float v21; // r1@1
  int v22; // r10@1
  int v26; // r8@5
  int v27; // r0@6
  int v28; // r4@11
  _DWORD *v29; // r0@11
  int v31; // [sp+8h] [bp-68h]@1
  int v32; // [sp+Ch] [bp-64h]@1
  int v33; // [sp+10h] [bp-60h]@1
  _DWORD *v34; // [sp+14h] [bp-5Ch]@11
  void (*v35)(void); // [sp+1Ch] [bp-54h]@11
  signed int (__fastcall *v36)(int *, int); // [sp+20h] [bp-50h]@11
  int v37; // [sp+24h] [bp-4Ch]@11
  int v38; // [sp+28h] [bp-48h]@6
  int v39; // [sp+2Ch] [bp-44h]@6

  v4 = a1;
  __asm { VMOV.F32        S16, #-2.0 }
  v6 = a2;
  LODWORD(v7) = a1 + 76;
  _R9 = a3;
  __asm { VLDR            S18, =0.0625 }
  v9 = a4;
  *(_DWORD *)(LODWORD(v7) + 4) = *(_DWORD *)(a1 + 76);
  __asm { VLDR            S0, [R9] }
  v33 = a1 + 76;
  __asm
  {
    VADD.F32        S0, S0, S16
    VMUL.F32        S0, S0, S18
    VMOV            R0, S0
  }
  v11 = mce::Math::floor(_R0, v7);
    VMOV.F32        S20, #2.0
    VLDR            S0, [R9,#0xC]
  v12 = v11;
    VADD.F32        S0, S0, S20
  v15 = mce::Math::floor(_R0, v14);
  __asm { VLDR            S0, [R9,#8] }
  v16 = v15;
  v31 = v15;
  v19 = mce::Math::floor(_R0, v18);
  __asm { VLDR            S0, [R9,#0x14] }
  v32 = v19;
  v22 = mce::Math::floor(_R0, v21);
  _VF = __OFSUB__(v12, v16);
  _ZF = v12 == v16;
  _NF = v12 - v16 < 0;
  if ( v12 <= v16 )
    _VF = __OFSUB__(v32, v22);
    _ZF = v32 == v22;
    _NF = v32 - v22 < 0;
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    do
    {
      v26 = v32;
      do
      {
        v38 = v12;
        v39 = v26;
        v27 = BlockSource::getChunk((BlockSource *)v4, (const ChunkPos *)&v38);
        if ( v27 )
          LevelChunk::getEntities(v27, v6, _R9, v33, v9);
        _VF = __OFSUB__(v26, v22);
        _NF = v26++ - v22 < 0;
      }
      while ( _NF ^ _VF );
      _VF = __OFSUB__(v12, v31);
      _NF = v12++ - v31 < 0;
    }
    while ( _NF ^ _VF );
  if ( EntityClassTree::isTypeInstanceOf(319, v6) )
    v37 = Dimension::getId(*(Dimension **)(v4 + 20));
    v28 = *(_DWORD *)(v4 + 20);
    v29 = operator new(0xCu);
    *v29 = v4;
    v29[1] = &v37;
    v29[2] = _R9;
    v34 = v29;
    v35 = (void (*)(void))sub_18EA1C6;
    v36 = sub_18EA116;
    Dimension::forEachPlayer(v28, (int)&v34);
    if ( v35 )
      v35();
  return v33;
}


int *__fastcall BlockSource::getHardcodedEntitySpawn(int a1, const BlockPos *a2, int a3)
{
  const BlockPos *v3; // r4@1
  int v4; // r6@1
  int v5; // r5@2
  LevelChunk *v6; // r0@3
  int v7; // r0@4
  int *v8; // r4@4
  char v9; // r1@5
  int v11; // [sp+0h] [bp-20h]@3

  v3 = a2;
  v4 = a1;
  if ( EntityClassTree::isTypeInstanceOf(a3, 2816) == 1
    && (v5 = Dimension::getWorldGenerator(*(Dimension **)(v4 + 20))) != 0
    && (ChunkPos::ChunkPos((ChunkPos *)&v11, v3),
        (v6 = (LevelChunk *)BlockSource::getChunk((BlockSource *)v4, (const ChunkPos *)&v11)) != 0) )
  {
    v7 = LevelChunk::findHardcodedSpawnAt(v6, v3);
    v8 = (int *)HardcodedSpawnAreaRegistry::getMobSpawnsForType(*(_DWORD *)(v5 + 4), v7);
  }
  else
    v9 = byte_2816344;
    __dmb();
    if ( v9 & 1 )
    {
      v8 = &dword_2816348;
    }
    else if ( j___cxa_guard_acquire((unsigned int *)&byte_2816344) )
      dword_2816348 = 0;
      unk_281634C = 0;
      unk_2816350 = 0;
      _cxa_atexit(std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::~vector);
      j___cxa_guard_release((unsigned int *)&byte_2816344);
    else
  return v8;
}


BlockSource *__fastcall BlockSource::~BlockSource(BlockSource *this)
{
  BlockSource *v1; // r4@1
  __int64 v2; // r0@1
  unsigned int v3; // r5@2
  void *v4; // r0@4
  void *v5; // r0@6
  void *v6; // r0@8
  void *v7; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_271823C;
  v2 = *((_QWORD *)this + 5);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = 0;
    do
    {
      (*(void (**)(void))(**(_DWORD **)(v2 + 4 * v3) + 12))();
      v2 = *((_QWORD *)v1 + 5);
      ++v3;
    }
    while ( v3 < (HIDWORD(v2) - (signed int)v2) >> 2 );
  }
  v4 = (void *)*((_DWORD *)v1 + 25);
  if ( v4 )
    operator delete(v4);
  v5 = (void *)*((_DWORD *)v1 + 22);
  if ( v5 )
    operator delete(v5);
  v6 = (void *)*((_DWORD *)v1 + 19);
  if ( v6 )
    operator delete(v6);
  v7 = (void *)*((_DWORD *)v1 + 10);
  if ( v7 )
    operator delete(v7);
  return v1;
}


int __fastcall BlockSource::isHumidAt(BlockSource *this, const BlockPos *a2)
{
  int v2; // r0@1

  v2 = BlockSource::getBiome(this, a2);
  return (*(int (**)(void))(*(_DWORD *)v2 + 100))();
}


LevelChunk *__fastcall BlockSource::getWritableChunk(BlockSource *this, const ChunkPos *a2)
{
  LevelChunk *v2; // r0@1
  LevelChunk *v3; // r4@1
  LevelChunk *result; // r0@4

  v2 = (LevelChunk *)BlockSource::getChunk(this, a2);
  v3 = v2;
  if ( v2 )
  {
    if ( LevelChunk::isReadOnly(v2) )
      v3 = 0;
    result = v3;
  }
  else
    result = 0;
  return result;
}
