

LevelChunk *__fastcall HeavyBlock::_tickBlocksAround2D(HeavyBlock *this, BlockSource *a2, const BlockPos *a3, const Block *a4)
{
  const BlockPos *v4; // r5@1
  BlockSource *v5; // r4@1
  int v6; // r0@1
  int v7; // r1@1
  int v8; // r2@1
  int v9; // r6@1
  LevelChunk **v10; // r7@2
  int v11; // r1@4
  int v12; // r2@4
  int v13; // r6@4
  LevelChunk **v14; // r7@5
  int v15; // r2@7
  int v16; // r6@7
  LevelChunk **v17; // r7@8
  int v18; // r2@10
  Block *v19; // r0@10
  Block *v20; // r5@10
  LevelChunk *result; // r0@10
  BlockTickingQueue *v22; // r0@11
  LevelChunk **v23; // r6@11
  __int64 v24; // [sp+8h] [bp-48h]@10
  int v25; // [sp+10h] [bp-40h]@10
  __int64 v26; // [sp+14h] [bp-3Ch]@7
  int v27; // [sp+1Ch] [bp-34h]@7
  int v28; // [sp+20h] [bp-30h]@4
  int v29; // [sp+24h] [bp-2Ch]@4
  int v30; // [sp+28h] [bp-28h]@4
  int v31; // [sp+2Ch] [bp-24h]@1
  int v32; // [sp+30h] [bp-20h]@1
  int v33; // [sp+34h] [bp-1Ch]@1
  char v34; // [sp+38h] [bp-18h]@3

  v4 = a3;
  v5 = a2;
  v6 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  v8 = *((_DWORD *)a3 + 2);
  v31 = v6 - 1;
  v32 = v7;
  v33 = v8;
  v9 = BlockSource::getBlock(v5, (const BlockPos *)&v31);
  if ( Block::canSlide((Block *)v9) == 1 )
  {
    v10 = (LevelChunk **)BlockSource::getTickQueue(v5, (const BlockPos *)&v31);
    if ( !BlockTickingQueue::isInstaticking((BlockTickingQueue *)v10) )
    {
      v34 = *(_BYTE *)(v9 + 4);
      BlockTickingQueue::add(v10, v5, (int)&v31, &v34, 2u, 0);
    }
  }
  v11 = *((_DWORD *)v4 + 1);
  v12 = *((_DWORD *)v4 + 2);
  v28 = *(_DWORD *)v4 + 1;
  v29 = v11;
  v30 = v12;
  v13 = BlockSource::getBlock(v5, (const BlockPos *)&v28);
  if ( Block::canSlide((Block *)v13) == 1 )
    v14 = (LevelChunk **)BlockSource::getTickQueue(v5, (const BlockPos *)&v28);
    if ( !BlockTickingQueue::isInstaticking((BlockTickingQueue *)v14) )
      v34 = *(_BYTE *)(v13 + 4);
      BlockTickingQueue::add(v14, v5, (int)&v28, &v34, 2u, 0);
  v15 = *((_DWORD *)v4 + 2);
  v26 = *(_QWORD *)v4;
  v27 = v15 - 1;
  v16 = BlockSource::getBlock(v5, (const BlockPos *)&v26);
  if ( Block::canSlide((Block *)v16) == 1 )
    v17 = (LevelChunk **)BlockSource::getTickQueue(v5, (const BlockPos *)&v26);
    if ( !BlockTickingQueue::isInstaticking((BlockTickingQueue *)v17) )
      v34 = *(_BYTE *)(v16 + 4);
      BlockTickingQueue::add(v17, v5, (int)&v26, &v34, 2u, 0);
  v18 = *((_DWORD *)v4 + 2);
  v24 = *(_QWORD *)v4;
  v25 = v18 + 1;
  v19 = (Block *)BlockSource::getBlock(v5, (const BlockPos *)&v24);
  v20 = v19;
  result = (LevelChunk *)Block::canSlide(v19);
  if ( result == (LevelChunk *)1 )
    v22 = (BlockTickingQueue *)BlockSource::getTickQueue(v5, (const BlockPos *)&v24);
    v23 = (LevelChunk **)v22;
    result = (LevelChunk *)BlockTickingQueue::isInstaticking(v22);
    if ( !result )
      v34 = *((_BYTE *)v20 + 4);
      result = BlockTickingQueue::add(v23, v5, (int)&v24, &v34, 2u, 0);
  return result;
}


void __fastcall HeavyBlock::~HeavyBlock(HeavyBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall HeavyBlock::startFalling(HeavyBlock *this, BlockSource *a2, const BlockPos *a3, const Block *a4, bool a5)
{
  HeavyBlock::startFalling(this, a2, a3, a4, a5);
}


LevelChunk *__fastcall HeavyBlock::neighborChanged(HeavyBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  HeavyBlock *v6; // r8@1
  signed int v7; // r6@2
  BlockTickingQueue *v8; // r0@7
  LevelChunk **v9; // r7@7
  LevelChunk *result; // r0@7
  char v11; // [sp+Ch] [bp-1Ch]@8

  v4 = a3;
  v5 = a2;
  v6 = this;
  if ( *((_DWORD *)a4 + 1) >= *((_DWORD *)a3 + 1) )
  {
    v7 = -1;
  }
  else
    if ( *(_DWORD *)a3 == *(_DWORD *)a4 && *((_DWORD *)a4 + 2) == *((_DWORD *)a3 + 2) )
      v7 = 1;
  v8 = (BlockTickingQueue *)BlockSource::getTickQueue(a2, a3);
  v9 = (LevelChunk **)v8;
  result = (LevelChunk *)BlockTickingQueue::isInstaticking(v8);
  if ( !result )
    v11 = *((_BYTE *)v6 + 4);
    if ( v7 < 0 )
      v7 = 2;
    result = BlockTickingQueue::add(v9, v5, (int)v4, &v11, v7, 0);
  return result;
}


LevelChunk *__fastcall HeavyBlock::_scheduleCheck(HeavyBlock *this, BlockSource *a2, const BlockPos *a3, const Block *a4, int a5)
{
  BlockSource *v5; // r5@1
  const BlockPos *v6; // r4@1
  const Block *v7; // r7@1
  BlockTickingQueue *v8; // r0@1
  LevelChunk **v9; // r6@1
  LevelChunk *result; // r0@1
  __int64 v11; // r0@2
  char v12; // [sp+8h] [bp-18h]@2

  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = (BlockTickingQueue *)BlockSource::getTickQueue(a2, a3);
  v9 = (LevelChunk **)v8;
  result = (LevelChunk *)BlockTickingQueue::isInstaticking(v8);
  if ( !result )
  {
    v11 = (unsigned int)a5;
    v12 = *((_BYTE *)v7 + 4);
    if ( a5 < 0 )
      LODWORD(v11) = 2;
    result = BlockTickingQueue::add(v9, v5, (int)v6, &v12, v11, SHIDWORD(v11));
  }
  return result;
}


int __fastcall HeavyBlock::onPlace(HeavyBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r4@1
  BlockSource *v4; // r5@1
  HeavyBlock *v5; // r7@1
  LevelChunk **v6; // r6@1
  const BlockPos *v7; // r2@1
  char v9; // [sp+8h] [bp-18h]@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = (LevelChunk **)BlockSource::getTickQueue(a2, a3);
  if ( !BlockTickingQueue::isInstaticking((BlockTickingQueue *)v6) )
  {
    v9 = *((_BYTE *)v5 + 4);
    BlockTickingQueue::add(v6, v4, (int)v3, &v9, 2u, 0);
  }
  return Entity::checkEntityOnewayCollision(v4, v3, v7);
}


LevelChunk *__fastcall HeavyBlock::triggerFallCheck(HeavyBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  HeavyBlock *v5; // r7@1
  BlockTickingQueue *v6; // r0@1
  LevelChunk **v7; // r6@1
  LevelChunk *result; // r0@1
  char v9; // [sp+8h] [bp-18h]@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = (BlockTickingQueue *)BlockSource::getTickQueue(a2, a3);
  v7 = (LevelChunk **)v6;
  result = (LevelChunk *)BlockTickingQueue::isInstaticking(v6);
  if ( !result )
  {
    v9 = *((_BYTE *)v5 + 4);
    result = BlockTickingQueue::add(v7, v4, (int)v3, &v9, 2u, 0);
  }
  return result;
}


int __fastcall HeavyBlock::tick(HeavyBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r5@1
  HeavyBlock *v5; // r6@1
  const BlockPos *v6; // r4@1
  Level *v7; // r0@1
  int result; // r0@1

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v7);
  if ( !result )
    result = j_j_j__ZNK10HeavyBlock10checkSlideER11BlockSourceRK8BlockPos(v5, v4, v6);
  return result;
}


signed int __fastcall HeavyBlock::isFree(HeavyBlock *this, BlockSource *a2, const BlockPos *a3)
{
  Block *v3; // r4@1
  signed int v4; // r1@2
  signed int result; // r0@2
  int *v6; // r4@4
  unsigned __int8 v7; // [sp+4h] [bp-Ch]@1

  BlockSource::getBlockID((BlockSource *)&v7, a2, (int)a3);
  v3 = (Block *)Block::mBlocks[v7];
  if ( !v3 )
    return 1;
  v4 = Block::isType((Block *)Block::mBlocks[v7], (const Block *)Block::mAir);
  result = 1;
  if ( !v4 && v3 != (Block *)Block::mFire )
  {
    v6 = (int *)Block::getMaterial(v3);
    if ( Material::isType(v6, 0) || Material::isType(v6, 5) )
      return 1;
    result = Material::isType(v6, 6);
  }
  return result;
}


int __fastcall HeavyBlock::HeavyBlock(int a1, const void **a2, char a3, int a4)
{
  int result; // r0@1

  result = Block::Block(a1, a2, a3, a4);
  *(_DWORD *)result = &off_270CA40;
  *(_BYTE *)(result + 48) = 1;
  *(_BYTE *)(result + 80) = 1;
  return result;
}


void __fastcall HeavyBlock::~HeavyBlock(HeavyBlock *this)
{
  HeavyBlock::~HeavyBlock(this);
}


int __fastcall HeavyBlock::_findBottomSlidingBlock(HeavyBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  HeavyBlock *v4; // r4@1
  int result; // r0@1
  BlockSource *v6; // r5@1
  int v7; // r1@1
  int v8; // r2@1
  Block *v9; // r0@2
  int v10; // r0@2
  unsigned __int8 v11; // vf@3
  int v12; // [sp+4h] [bp-1Ch]@1
  int v13; // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@1

  v4 = this;
  result = *(_DWORD *)a4;
  v12 = *(_DWORD *)a4;
  v6 = a3;
  v7 = *(_DWORD *)(a4 + 4);
  v13 = v7;
  v8 = *(_DWORD *)(a4 + 8);
  v14 = *(_DWORD *)(a4 + 8);
  if ( v7 >= 1 )
  {
    do
    {
      v9 = (Block *)BlockSource::getBlock(v6, (const BlockPos *)&v12);
      v10 = Block::canSlide(v9);
      v7 = v13;
      if ( v10 != 1 )
        break;
      v11 = __OFSUB__(v13, 1);
      v7 = v13 - 1;
      v13 = v7;
    }
    while ( !((unsigned __int8)((v7 < 0) ^ v11) | (v7 == 0)) );
    result = v12;
    v8 = v14;
  }
  *(_DWORD *)v4 = result;
  *((_DWORD *)v4 + 1) = v7 + 1;
  *((_DWORD *)v4 + 2) = v8;
  return result;
}


void __fastcall HeavyBlock::startFalling(HeavyBlock *this, BlockSource *a2, const BlockPos *a3, const Block *a4, bool a5)
{
  HeavyBlock *v5; // r9@1
  const BlockPos *v6; // r6@1
  BlockSource *v7; // r4@1
  const Block *v8; // r8@1
  void *v13; // r0@1
  void *v14; // r0@2
  void *v15; // r0@3
  Entity *v16; // r7@4
  int v17; // r1@5
  int v18; // r2@5
  const Block *v19; // r3@5
  int v20; // r1@5
  int v21; // r2@5
  const Block *v22; // r3@5
  int v23; // r0@5
  int v24; // r2@5
  void (*v25)(void); // r3@5
  unsigned int *v26; // r2@10
  signed int v27; // r1@12
  unsigned int *v28; // r2@14
  signed int v29; // r1@16
  unsigned int *v30; // r2@18
  signed int v31; // r1@20
  int v32; // [sp+4h] [bp-6Ch]@5
  int v33; // [sp+8h] [bp-68h]@5
  int v34; // [sp+Ch] [bp-64h]@5
  int v35; // [sp+10h] [bp-60h]@5
  int v36; // [sp+14h] [bp-5Ch]@5
  int v37; // [sp+18h] [bp-58h]@5
  int v38; // [sp+1Ch] [bp-54h]@5
  __int16 v39; // [sp+20h] [bp-50h]@5
  char v40; // [sp+24h] [bp-4Ch]@5
  char v41; // [sp+25h] [bp-4Bh]@5
  int v42; // [sp+28h] [bp-48h]@1
  int v43; // [sp+2Ch] [bp-44h]@2
  int v44; // [sp+30h] [bp-40h]@1
  Entity *v45; // [sp+34h] [bp-3Ch]@1
  float v46; // [sp+38h] [bp-38h]@1
  float v49; // [sp+44h] [bp-2Ch]@1

  v5 = this;
  v6 = a3;
  v7 = a2;
  v8 = a4;
  Vec3::Vec3((int)&v46, (int)a3);
  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S2, [SP,#0x70+var_38]
    VLDR            S4, [SP,#0x70+var_34]
    VLDR            S6, [SP,#0x70+var_30]
    VADD.F32        S2, S2, S0
    VADD.F32        S4, S4, S0
    VADD.F32        S0, S6, S0
    VSTR            S2, [SP,#0x70+var_2C]
    VSTR            S4, [SP,#0x70+var_28]
    VSTR            S0, [SP,#0x70+var_24]
  }
  EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v42, 66);
  EntityFactory::createSpawnedEntity(&v45, (const void **)&v42, 0, (int)&v49, &Vec2::ZERO);
  v13 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v44 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
    }
    else
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v43 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v42 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = v45;
  if ( v45 )
    v40 = *((_BYTE *)v8 + 4);
    v41 = BlockSource::getData(v7, v6);
    FallingBlock::setBlock(v16, (int)&v40, a5);
    v39 = FullBlock::AIR;
    BlockSource::setBlockAndData((int)v7, v6, (int)&v39, 3, 0);
    v17 = *((_DWORD *)v6 + 1);
    v18 = *((_DWORD *)v6 + 2);
    v36 = *(_DWORD *)v6;
    v37 = v17 + 1;
    v38 = v18;
    HeavyBlock::_tickBlocksAround2D(v5, v7, (const BlockPos *)&v36, v19);
    v20 = *((_DWORD *)v6 + 1);
    v21 = *((_DWORD *)v6 + 2);
    v33 = *(_DWORD *)v6;
    v34 = v20 - 1;
    v35 = v21;
    HeavyBlock::_tickBlocksAround2D(v5, v7, (const BlockPos *)&v33, v22);
    v23 = BlockSource::getLevel(v7);
    v24 = (int)v45;
    v25 = *(void (**)(void))(*(_DWORD *)v23 + 44);
    v45 = 0;
    v32 = v24;
    v25();
    if ( v32 )
      (*(void (**)(void))(*(_DWORD *)v32 + 32))();
    v32 = 0;
    if ( v45 )
      (*(void (**)(void))(*(_DWORD *)v45 + 32))();
}


LevelChunk *__fastcall HeavyBlock::_scheduleCheckIfSliding(HeavyBlock *this, BlockSource *a2, const BlockPos *a3, const Block *a4)
{
  BlockSource *v4; // r5@1
  const BlockPos *v5; // r4@1
  Block *v6; // r0@1
  Block *v7; // r6@1
  LevelChunk *result; // r0@1
  BlockTickingQueue *v9; // r0@2
  LevelChunk **v10; // r7@2
  char v11; // [sp+8h] [bp-18h]@3

  v4 = a2;
  v5 = a3;
  v6 = (Block *)BlockSource::getBlock(a2, a3);
  v7 = v6;
  result = (LevelChunk *)Block::canSlide(v6);
  if ( result == (LevelChunk *)1 )
  {
    v9 = (BlockTickingQueue *)BlockSource::getTickQueue(v4, v5);
    v10 = (LevelChunk **)v9;
    result = (LevelChunk *)BlockTickingQueue::isInstaticking(v9);
    if ( !result )
    {
      v11 = *((_BYTE *)v7 + 4);
      result = BlockTickingQueue::add(v10, v4, (int)v5, &v11, 2u, 0);
    }
  }
  return result;
}


int __fastcall HeavyBlock::animateTick(HeavyBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r6@1
  HeavyBlock *v5; // r4@1
  BlockSource *v7; // r5@1
  int result; // r0@1
  int v9; // r1@2
  int v10; // r2@2
  unsigned int v11; // r8@3
  int v19; // r0@3
  int v20; // r5@3
  char v21; // [sp+10h] [bp-60h]@3
  float v22; // [sp+20h] [bp-50h]@3
  int v23; // [sp+2Ch] [bp-44h]@2
  int v24; // [sp+30h] [bp-40h]@2
  int v25; // [sp+34h] [bp-3Ch]@2

  v4 = a4;
  v5 = this;
  _R7 = a3;
  v7 = a2;
  result = Random::_genRandInt32(a4);
  if ( !(result & 3) )
  {
    v9 = *((_DWORD *)_R7 + 1);
    v10 = *((_DWORD *)_R7 + 2);
    v23 = *(_DWORD *)_R7;
    v24 = v9 - 1;
    v25 = v10;
    result = (*(int (__fastcall **)(HeavyBlock *, BlockSource *, int *))(*(_DWORD *)v5 + 516))(v5, v7, &v23);
    if ( result == 1 )
    {
      v11 = BlockSource::getData(v7, _R7);
      _R9 = *(_DWORD *)_R7;
      _R0 = Random::_genRandInt32(v4);
      __asm
      {
        VLDR            S0, [R7,#4]
        VLDR            S2, [R7,#8]
        VCVT.F32.S32    S16, S2
        VCVT.F32.S32    S18, S0
        VMOV            S0, R0
        VCVT.F64.U32    D10, S0
      }
        VMOV            S2, R0
        VLDR            D0, =2.32830644e-10
        VLDR            S6, =0.3
        VCVT.F64.U32    D1, S2
        VMUL.F64        D2, D10, D0
        VMUL.F64        D0, D1, D0
        VMOV            S2, R9
        VCVT.F32.F64    S0, D0
        VCVT.F32.S32    S2, S2
        VCVT.F32.F64    S4, D2
        VADD.F32        S20, S4, S2
        VADD.F32        S18, S18, S6
        VADD.F32        S16, S0, S16
      v19 = BlockSource::getLevel(v7);
      __asm { VSTR            S20, [SP,#0x70+var_50] }
      v20 = v19;
        VSTR            S18, [SP,#0x70+var_4C]
        VSTR            S16, [SP,#0x70+var_48]
      (*(void (__fastcall **)(char *, HeavyBlock *, unsigned int))(*(_DWORD *)v5 + 504))(&v21, v5, v11);
      Color::toARGB((Color *)&v21);
      result = Level::addParticle(v20, 25, (int)&v22);
    }
  }
  return result;
}


int __fastcall HeavyBlock::checkSlide(HeavyBlock *this, BlockSource *a2, const BlockPos *a3)
{
  HeavyBlock *v3; // r5@1
  int result; // r0@1
  BlockSource *v5; // r4@1
  int v6; // r1@1
  int v7; // r2@1
  Block *v8; // r0@2
  int v9; // r0@2
  unsigned __int8 v10; // vf@3
  int (__fastcall *v11)(HeavyBlock *, BlockSource *, int *); // r3@7
  Level *v12; // r0@8
  char *v13; // r0@8
  int (__fastcall *v14)(HeavyBlock *, BlockSource *, int *, int); // r7@8
  int v15; // r3@8
  int v16; // [sp+4h] [bp-3Ch]@7
  int v17; // [sp+8h] [bp-38h]@7
  int v18; // [sp+Ch] [bp-34h]@7
  int v19; // [sp+10h] [bp-30h]@6
  int v20; // [sp+14h] [bp-2Ch]@6
  int v21; // [sp+18h] [bp-28h]@6
  int v22; // [sp+1Ch] [bp-24h]@1
  int v23; // [sp+20h] [bp-20h]@1
  int v24; // [sp+24h] [bp-1Ch]@1

  v3 = this;
  result = *(_DWORD *)a3;
  v22 = *(_DWORD *)a3;
  v5 = a2;
  v6 = *((_DWORD *)a3 + 1);
  v23 = v6;
  v7 = *((_DWORD *)a3 + 2);
  v24 = v7;
  if ( v6 >= 1 )
  {
    do
    {
      v8 = (Block *)BlockSource::getBlock(v5, (const BlockPos *)&v22);
      v9 = Block::canSlide(v8);
      v6 = v23;
      if ( v9 != 1 )
        break;
      v10 = __OFSUB__(v23, 1);
      v6 = v23 - 1;
      v23 = v6;
    }
    while ( !((unsigned __int8)((v6 < 0) ^ v10) | (v6 == 0)) );
    result = v22;
    v7 = v24;
  }
  v19 = result;
  v20 = v6 + 1;
  v21 = v7;
  if ( v6 >= 0 )
    v11 = *(int (__fastcall **)(HeavyBlock *, BlockSource *, int *))(*(_DWORD *)v3 + 516);
    v16 = result;
    v17 = v6;
    v18 = v7;
    result = v11(v3, v5, &v16);
    if ( result == 1 )
      v12 = (Level *)BlockSource::getLevel(v5);
      v13 = Level::getLevelData(v12);
      LevelData::getGameType((LevelData *)v13);
      v14 = *(int (__fastcall **)(HeavyBlock *, BlockSource *, int *, int))(*(_DWORD *)v3 + 520);
      v15 = BlockSource::getBlock(v5, (const BlockPos *)&v19);
      result = v14(v3, v5, &v19, v15);
  return result;
}


int __fastcall HeavyBlock::falling(HeavyBlock *this)
{
  return 0;
}


signed int __fastcall HeavyBlock::getTickDelay(HeavyBlock *this)
{
  return 2;
}
