

int __fastcall MagmaBlock::animateTick(MagmaBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r6@1
  Random *v5; // r10@1
  Dimension *v7; // r0@1
  Weather *v8; // r0@1
  int v9; // r2@1
  int v10; // r3@1
  int result; // r0@1
  int v12; // r4@2
  int v19; // r7@2
  int v32; // r7@2
  float v35; // [sp+10h] [bp-58h]@2
  int v36; // [sp+1Ch] [bp-4Ch]@1
  int v37; // [sp+20h] [bp-48h]@1
  int v38; // [sp+24h] [bp-44h]@1

  v4 = a2;
  v5 = a4;
  _R5 = a3;
  v7 = (Dimension *)BlockSource::getDimension(a2);
  v8 = (Weather *)Dimension::getWeather(v7);
  v9 = *((_DWORD *)_R5 + 1);
  v10 = *((_DWORD *)_R5 + 2);
  v36 = *(_DWORD *)_R5;
  v37 = v9 + 1;
  v38 = v10;
  result = Weather::isRainingAt(v8, v4, (const BlockPos *)&v36);
  if ( result == 1 )
  {
    v12 = BlockSource::getLevel(v4);
    _R6 = *(_DWORD *)_R5;
    _R0 = Random::_genRandInt32(v5);
    __asm
    {
      VLDR            S0, [R5,#8]
      VCVT.F32.S32    S18, S0
    }
    v19 = *((_DWORD *)_R5 + 1);
      VMOV            S0, R0
      VCVT.F64.U32    D10, S0
      VLDR            D8, =2.32830644e-10
      VMOV            S4, R6
    _R0 = v19 + 1;
      VCVT.F64.U32    D0, S0
      VMUL.F64        D1, D10, D8
      VMUL.F64        D0, D0, D8
      VCVT.F32.S32    S4, S4
      VCVT.F32.F64    S2, D1
      VCVT.F32.F64    S0, D0
      VADD.F32        S2, S2, S4
      VMOV            S4, R0
      VADD.F32        S0, S0, S18
      VSTR            S2, [SP,#0x68+var_58]
      VSTR            S4, [SP,#0x68+var_54]
      VSTR            S0, [SP,#0x68+var_50]
    Level::addParticle(v12, 4, (int)&v35);
    _R11 = *(_DWORD *)_R5;
    _R6 = Random::_genRandInt32(v5);
      VMOV            S18, R11
    _R8 = *((_DWORD *)_R5 + 1) + 1;
    __asm { VCVT.F32.S32    S20, S0 }
      VMOV            S2, R6
      VCVT.F64.U32    D1, S2
      VMUL.F64        D1, D1, D8
      VCVT.F32.S32    S4, S18
      VMOV            S4, R8
      VADD.F32        S0, S0, S20
    _R7 = *(_DWORD *)_R5;
      VMOV            S18, R7
      VLDR            S2, [R5,#8]
    v32 = *((_DWORD *)_R5 + 1);
      VCVT.F32.S32    S18, S2
    __asm { VMOV            S0, R0 }
    _R0 = v32 + 1;
    result = Level::addParticle(v12, 4, (int)&v35);
  }
  return result;
}


LevelChunk *__fastcall MagmaBlock::addToTickQueue(MagmaBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  MagmaBlock *v6; // r7@1
  Random *v7; // r8@1
  BlockTickingQueue *v8; // r0@1
  LevelChunk **v9; // r6@1
  LevelChunk *result; // r0@1
  unsigned int v11; // kr00_4@3
  char v12; // [sp+8h] [bp-20h]@3
  char v13; // [sp+Ch] [bp-1Ch]@2

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = (BlockTickingQueue *)BlockSource::getTickQueue(a2, a3);
  v9 = (LevelChunk **)v8;
  result = (LevelChunk *)BlockTickingQueue::isInstaticking(v8);
  if ( !result )
  {
    v13 = *((_BYTE *)v6 + 4);
    result = (LevelChunk *)BlockTickingQueue::hasTickNextTick((int)v9, (int)v4);
    if ( !result )
    {
      v12 = *((_BYTE *)v6 + 4);
      v11 = Random::_genRandInt32(v7);
      result = BlockTickingQueue::add(v9, v5, (int)v4, &v12, v11 % 0xA0 + 160, 0);
    }
  }
  return result;
}


LevelChunk *__fastcall MagmaBlock::neighborChanged(MagmaBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  MagmaBlock *v6; // r6@1
  LevelChunk *result; // r0@1
  Block *v8; // r7@4
  signed int v9; // r8@4
  Level *v10; // r0@7
  char *v11; // r8@7
  BlockTickingQueue *v12; // r0@7
  LevelChunk **v13; // r7@7
  unsigned int v14; // kr00_4@9
  char v15; // [sp+8h] [bp-20h]@9
  char v16; // [sp+Ch] [bp-1Ch]@8

  v4 = a3;
  v5 = a2;
  v6 = this;
  result = *(LevelChunk **)a3;
  if ( *(_DWORD *)a4 == *(_DWORD *)a3 )
  {
    result = (LevelChunk *)(*((_DWORD *)a3 + 1) + 1);
    if ( *((LevelChunk **)a4 + 1) == result )
    {
      result = (LevelChunk *)*((_DWORD *)a3 + 2);
      if ( *((LevelChunk **)a4 + 2) == result )
      {
        v8 = (Block *)BlockSource::getBlock(a2, a4);
        v9 = Block::isType(v8, (const Block *)Block::mIce);
        if ( Block::isType(v8, (const Block *)Block::mStillWater)
          || Block::isType(v8, (const Block *)Block::mFlowingWater)
          || (result = (LevelChunk *)(Block::isType(v8, (const Block *)Block::mTopSnow) | v9), result == (LevelChunk *)1) )
        {
          v10 = (Level *)BlockSource::getLevel(v5);
          v11 = Level::getRandom(v10);
          v12 = (BlockTickingQueue *)BlockSource::getTickQueue(v5, v4);
          v13 = (LevelChunk **)v12;
          result = (LevelChunk *)BlockTickingQueue::isInstaticking(v12);
          if ( !result )
          {
            v16 = *((_BYTE *)v6 + 4);
            result = (LevelChunk *)BlockTickingQueue::hasTickNextTick((int)v13, (int)v4);
            if ( !result )
            {
              v15 = *((_BYTE *)v6 + 4);
              v14 = Random::_genRandInt32((Random *)v11);
              result = BlockTickingQueue::add(v13, v5, (int)v4, &v15, v14 % 0xA0 + 160, 0);
            }
          }
        }
      }
    }
  }
  return result;
}


signed int __fastcall MagmaBlock::getTickDelay(MagmaBlock *this)
{
  return 160;
}


LevelChunk *__fastcall MagmaBlock::tick(MagmaBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  MagmaBlock *v6; // r8@1
  int v7; // r0@1
  int v8; // r1@1
  int v9; // r2@1
  Random *v10; // r9@1
  Block *v11; // r6@1
  signed int v12; // r7@1
  LevelChunk *result; // r0@3
  const BlockPos *v14; // r2@4
  Player *v15; // r6@8
  __int64 v16; // r2@8
  Level *v17; // r11@8
  BlockTickingQueue *v18; // r0@9
  LevelChunk **v19; // r7@9
  unsigned int v20; // kr00_4@11
  int v21; // [sp+10h] [bp-78h]@8
  int v22; // [sp+14h] [bp-74h]@8
  int v23; // [sp+18h] [bp-70h]@8
  int v24; // [sp+1Ch] [bp-6Ch]@8
  int v25; // [sp+20h] [bp-68h]@8
  int v26; // [sp+24h] [bp-64h]@8
  int v27; // [sp+28h] [bp-60h]@8
  int v28; // [sp+2Ch] [bp-5Ch]@8
  int v29; // [sp+30h] [bp-58h]@8
  char v30; // [sp+34h] [bp-54h]@8
  char v31; // [sp+40h] [bp-48h]@8
  __int16 v32; // [sp+4Ch] [bp-3Ch]@7
  int v33; // [sp+50h] [bp-38h]@1
  int v34; // [sp+54h] [bp-34h]@1
  int v35; // [sp+58h] [bp-30h]@1
  char v36; // [sp+5Ch] [bp-2Ch]@11
  char v37; // [sp+60h] [bp-28h]@10

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 2);
  v10 = a4;
  v33 = v7;
  v34 = v8 + 1;
  v35 = v9;
  v11 = (Block *)BlockSource::getBlock(v5, (const BlockPos *)&v33);
  v12 = Block::isType(v11, (const Block *)Block::mIce);
  if ( Block::isType(v11, (const Block *)Block::mStillWater)
    || Block::isType(v11, (const Block *)Block::mFlowingWater)
    || (result = (LevelChunk *)(Block::isType(v11, (const Block *)Block::mTopSnow) | v12), result == (LevelChunk *)1) )
  {
    if ( !(Random::_genRandInt32(v10) & 7) )
    {
      if ( v12 == 1 )
      {
        IceBlock::melt(v5, (BlockSource *)&v33, v14);
      }
      else
        v32 = FullBlock::AIR;
        BlockSource::setBlockAndData((int)v5, (BlockPos *)&v33, (int)&v32, 3, 0);
      v15 = (Player *)BlockSource::getLevel(v5);
      Vec3::Vec3((int)&v31, (int)&v33);
      LODWORD(v16) = &v31;
      HIDWORD(v16) = 200;
      Level::broadcastLevelEvent(v15, 2016, v16, 0);
      v17 = (Level *)BlockSource::getLevel(v5);
      v21 = 1056964608;
      v22 = 0;
      v23 = 1056964608;
      BlockPos::BlockPos((int)&v24, (int)&v21);
      v27 = v33 + v24;
      v28 = v25 + v34;
      v29 = v26 + v35;
      Vec3::Vec3((int)&v30, (int)&v27);
      Level::broadcastSoundEvent(v17, (int)v5, 63, (int)&v30, -1, 1, 0, 0);
    }
    v18 = (BlockTickingQueue *)BlockSource::getTickQueue(v5, v4);
    v19 = (LevelChunk **)v18;
    result = (LevelChunk *)BlockTickingQueue::isInstaticking(v18);
    if ( !result )
      v37 = *((_BYTE *)v6 + 4);
      result = (LevelChunk *)BlockTickingQueue::hasTickNextTick((int)v19, (int)v4);
      if ( !result )
        v36 = *((_BYTE *)v6 + 4);
        v20 = Random::_genRandInt32(v10);
        result = BlockTickingQueue::add(v19, v5, (int)v4, &v36, v20 % 0xA0 + 160, 0);
  }
  return result;
}


void __fastcall MagmaBlock::~MagmaBlock(MagmaBlock *this)
{
  MagmaBlock::~MagmaBlock(this);
}


int __fastcall MagmaBlock::getVariant(MagmaBlock *this, int a2)
{
  return 0;
}


int __fastcall MagmaBlock::getSpawnResourcesAuxValue(MagmaBlock *this, int a2)
{
  return a2;
}


int __fastcall MagmaBlock::MagmaBlock(int a1, const void **a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int result; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(3);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_270E458;
  Block::setTicking((Block *)v3, 1);
  result = v3;
  *(_BYTE *)(v3 + 36) = 1;
  return result;
}


void __fastcall MagmaBlock::~MagmaBlock(MagmaBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}
