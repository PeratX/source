

int __fastcall TripWireBlock::TripWireBlock(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int *v12; // r2@1
  float v14; // [sp+4h] [bp-24h]@1
  int v15; // [sp+8h] [bp-20h]@1
  int v16; // [sp+Ch] [bp-1Ch]@1
  signed int v17; // [sp+10h] [bp-18h]@1
  signed int v18; // [sp+14h] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(15);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_2716704;
  v16 = 1065353216;
  v17 = 1042284544;
  v18 = 1065353216;
  Block::setVisualShape((Block *)v3, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&v16);
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 476))(v3, 1);
  Block::setSolid((Block *)v3, 0);
  *(_DWORD *)(v3 + 20) = 5;
  *(_DWORD *)(v3 + 24) = 0x2000000;
  *(_DWORD *)(v3 + 28) = 0;
  v15 = 1061997773;
  _R0 = Material::getTranslucency(*(Material **)(v3 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v12 = (int *)&v14;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x28+var_24]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v12 = &v15;
  Block::mTranslucency[v4] = *v12;
  return v3;
}


void __fastcall TripWireBlock::tick(TripWireBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  TripWireBlock::tick(this, a2, a3, a4);
}


void __fastcall TripWireBlock::checkPressed(TripWireBlock *this, BlockSource *a2, const BlockPos *a3)
{
  TripWireBlock *v3; // r11@1
  BlockSource *v5; // r9@1
  BlockState *v6; // r0@1
  _BOOL4 v7; // r8@1
  void *v8; // r10@1
  int v9; // r0@1
  char *v15; // r0@1
  char *v16; // r5@1
  int v17; // r1@1 OVERLAPPED
  int v18; // r2@1 OVERLAPPED
  signed int v19; // r0@1
  void *v20; // r0@3
  signed int v21; // r5@5
  BlockState *v22; // r0@8
  char v23; // r6@8
  char v24; // r5@8
  int v25; // r7@8
  char v26; // r0@8
  char v27; // r1@8
  BlockState *v29; // r0@13
  char v30; // r7@13
  TripWireBlock *v31; // r0@15
  LevelChunk **v32; // r0@17
  int v33; // [sp+0h] [bp-90h]@0
  int v34; // [sp+4h] [bp-8Ch]@0
  int v35; // [sp+8h] [bp-88h]@0
  char v36; // [sp+Ch] [bp-84h]@17
  char v37; // [sp+10h] [bp-80h]@15
  char v38; // [sp+11h] [bp-7Fh]@15
  char v39; // [sp+14h] [bp-7Ch]@1
  int v40; // [sp+30h] [bp-60h]@1
  int v41; // [sp+34h] [bp-5Ch]@1
  int v42; // [sp+38h] [bp-58h]@1
  int v43; // [sp+3Ch] [bp-54h]@1
  int v44; // [sp+40h] [bp-50h]@1
  int v45; // [sp+44h] [bp-4Ch]@1
  char v46; // [sp+48h] [bp-48h]@1
  unsigned __int8 v47; // [sp+4Ch] [bp-44h]@1
  char v48; // [sp+68h] [bp-28h]@1
  int v49; // [sp+69h] [bp-27h]@1

  v3 = this;
  _R4 = a3;
  v5 = a2;
  BlockSource::getBlockAndData((BlockSource *)&v48, a2, (int)a3);
  v47 = v49;
  v6 = (BlockState *)Block::getBlockState((int)v3, 30);
  v7 = BlockState::getBool(v6, &v47);
  AABB::AABB((AABB *)&v47);
  AABB::AABB((AABB *)&v40);
  v8 = 0;
  v9 = (*(int (__fastcall **)(TripWireBlock *, _DWORD, unsigned __int8 *, _DWORD))(*(_DWORD *)v3 + 420))(
         v3,
         (unsigned __int8)v49,
         &v47,
         0);
  v40 = *(_DWORD *)v9;
  v41 = *(_DWORD *)(v9 + 4);
  __asm { VMOV            S6, R1 }
  v42 = *(_DWORD *)(v9 + 8);
  __asm { VMOV            S8, R2 }
  v43 = *(_DWORD *)(v9 + 12);
  __asm { VMOV            S10, R3 }
  v44 = *(_DWORD *)(v9 + 16);
  v45 = *(_DWORD *)(v9 + 20);
  v46 = *(_BYTE *)(v9 + 24);
  __asm
  {
    VLDR            S0, [R4]
    VLDR            S2, [R4,#4]
    VLDR            S4, [R4,#8]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VADD.F32        S6, S0, S6
    VADD.F32        S8, S2, S8
    VADD.F32        S10, S4, S10
    VMOV            R1, S6
    VMOV            R2, S8
    VMOV            R3, S10
    VMOV            S8, R5
    VMOV            S6, R6
    VMOV            S10, R7
    VADD.F32        S4, S6, S4
    VADD.F32        S0, S10, S0
    VADD.F32        S2, S8, S2
    VSTR            S0, [SP,#0x90+var_90]
    VSTR            S2, [SP,#0x90+var_8C]
    VSTR            S4, [SP,#0x90+var_88]
  }
  AABB::AABB(COERCE_FLOAT(&v39), _R1, _R2, v33, v34, v35);
  v15 = BlockSource::fetchEntities(v5, 0, (const AABB *)&v39);
  v16 = v15;
  *(_QWORD *)&v17 = *(_QWORD *)v15;
  v19 = v18 - v17;
  if ( 0 != (v18 - v17) >> 2 )
    if ( (unsigned int)(v19 >> 2) >= 0x40000000 )
      sub_21E57F4();
    v20 = operator new(v19);
    *(_QWORD *)&v17 = *(_QWORD *)v16;
    v8 = v20;
  if ( v18 == v17 )
    v21 = 0;
  else
    _aeabi_memmove4(v8, v17);
    if ( v7 )
    {
      v21 = 1;
    }
    else
      v22 = (BlockState *)Block::getBlockState((int)v3, 30);
      v23 = v49;
      v25 = *(_QWORD *)v22 >> 32;
      v24 = *(_QWORD *)v22;
      v26 = BlockState::getMask(v22);
      v27 = v24 + 1;
      LOBYTE(v49) = v23 & ~v26 | (1 << (v27 - v25));
  _ZF = v21 == 0;
  if ( !v21 )
    _ZF = v7 == 1;
  if ( _ZF )
    v29 = (BlockState *)Block::getBlockState((int)v3, 30);
    v30 = v49;
    LOBYTE(v49) = v30 & ~(unsigned __int8)BlockState::getMask(v29);
  if ( (v7 ^ v21) == 1 )
    v37 = v48;
    v38 = v49;
    v31 = (TripWireBlock *)BlockSource::setBlockAndData((int)v5, _R4, (int)&v37, 3, 0);
    TripWireBlock::updateSource(v31, v5, _R4, (unsigned __int8)v49);
  if ( v21 == 1 )
    v32 = (LevelChunk **)BlockSource::getTickQueue(v5, _R4);
    v36 = *((_BYTE *)v3 + 4);
    BlockTickingQueue::add(v32, v5, (int)_R4, &v36, 0xAu, 0);
  if ( v8 )
    operator delete(v8);
}


signed int __fastcall TripWireBlock::onPlace(TripWireBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  BlockPos *v4; // r4@1
  BlockState *v5; // r0@1
  __int64 v6; // r6@1
  TripWireBlock *v7; // r0@1
  char v9; // [sp+4h] [bp-1Ch]@1
  char v10; // [sp+5h] [bp-1Bh]@1
  char v11; // [sp+8h] [bp-18h]@1
  char v12; // [sp+9h] [bp-17h]@1

  v3 = a2;
  v4 = a3;
  v5 = (BlockState *)Block::getBlockState((int)this, 35);
  v6 = *(_QWORD *)v5;
  BlockState::getMask(v5);
  BlockSource::getBlockAndData((BlockSource *)&v11, v3, (int)v4);
  LODWORD(v6) = 1 << (v6 + 1 - BYTE4(v6));
  v12 = v6;
  v9 = v11;
  v10 = v6;
  v7 = (TripWireBlock *)BlockSource::setBlockAndData((int)v3, v4, (int)&v9, 3, 0);
  return TripWireBlock::updateSource(v7, v3, v4, (unsigned __int8)v6);
}


void __fastcall TripWireBlock::~TripWireBlock(TripWireBlock *this)
{
  TripWireBlock::~TripWireBlock(this);
}


signed int __fastcall TripWireBlock::updateSource(TripWireBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  const BlockPos *v4; // r6@1
  BlockSource *v5; // r3@1
  int v6; // r7@1
  signed int v7; // r11@1
  __int64 v8; // r0@2
  int v9; // r2@2
  BlockSource *v10; // r10@2
  Block *v11; // r5@2
  signed int v12; // r0@3
  unsigned __int64 *v13; // r5@6
  TripWireHookBlock *v14; // r5@7
  int v15; // r0@7
  int v16; // r7@9
  signed int v17; // r4@9
  __int64 v18; // r0@10
  int v19; // r2@10
  BlockSource *v20; // r8@10
  Block *v21; // r5@10
  signed int result; // r0@11
  unsigned __int64 *v23; // r5@14
  TripWireHookBlock *v24; // r5@15
  int v25; // r0@15
  int v26; // [sp+14h] [bp-3Ch]@1
  __int64 v27; // [sp+20h] [bp-30h]@2
  int v28; // [sp+28h] [bp-28h]@2

  v4 = a3;
  v26 = a4;
  v5 = a2;
  v6 = 1;
  v7 = 1;
  while ( 1 )
  {
    HIDWORD(v8) = *((_DWORD *)v4 + 1);
    v9 = *((_DWORD *)v4 + 2);
    v10 = v5;
    LODWORD(v8) = *(_DWORD *)v4;
    v27 = v8;
    v28 = v7 + v9;
    v11 = (Block *)BlockSource::getBlock(v5, (const BlockPos *)&v27);
    if ( Block::isType(v11, (const Block *)Block::mTripwireHook) == 1 )
      break;
    v12 = Block::isType(v11, (const Block *)Block::mTripwire);
    v5 = v10;
    if ( v12 == 1 )
    {
      ++v6;
      ++v7;
      if ( v6 < 42 )
        continue;
    }
    goto LABEL_9;
  }
  v13 = (unsigned __int64 *)Block::getBlockState(Block::mTripwireHook, 12);
  if ( ((BlockSource::getData(v10, (const BlockPos *)&v27) >> (*v13 + 1 - (*v13 >> 32))) & (0xFu >> (4 - (*v13 >> 32)))) == (unsigned __int8)Direction::DIRECTION_OPPOSITE[0] )
    v14 = (TripWireHookBlock *)Block::mTripwireHook;
    v15 = BlockSource::getData(v10, (const BlockPos *)&v27);
    TripWireHookBlock::calculateState(v14, v10, (const BlockPos *)&v27, 0, v15, 1, v6, v26);
  v5 = v10;
LABEL_9:
  v16 = 1;
  v17 = -1;
    HIDWORD(v18) = *((_DWORD *)v4 + 1);
    v19 = *((_DWORD *)v4 + 2);
    v20 = v5;
    LODWORD(v18) = *(_DWORD *)v4 + v17;
    v27 = v18;
    v28 = v19;
    v21 = (Block *)BlockSource::getBlock(v5, (const BlockPos *)&v27);
    if ( Block::isType(v21, (const Block *)Block::mTripwireHook) )
    result = Block::isType(v21, (const Block *)Block::mTripwire);
    v5 = v20;
    if ( result == 1 )
      result = -1;
      ++v16;
      --v17;
      if ( v16 < 42 )
    return result;
  v23 = (unsigned __int64 *)Block::getBlockState(Block::mTripwireHook, 12);
  result = (BlockSource::getData(v20, (const BlockPos *)&v27) >> (*v23 + 1 - (*v23 >> 32))) & (0xFu >> (4 - (*v23 >> 32)));
  if ( result == (unsigned __int8)Direction::DIRECTION_OPPOSITE[1] )
    v24 = (TripWireHookBlock *)Block::mTripwireHook;
    v25 = BlockSource::getData(v20, (const BlockPos *)&v27);
    result = TripWireHookBlock::calculateState(v24, v20, (const BlockPos *)&v27, 0, v25, 1, v16, v26);
  return result;
}


int __fastcall TripWireBlock::getVisualShape(TripWireBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5)
{
  TripWireBlock *v5; // r5@1
  AABB *v6; // r4@1
  int (__fastcall *v7)(TripWireBlock *, unsigned int, AABB *, int); // r6@1
  unsigned int v8; // r0@1

  v5 = this;
  v6 = a4;
  v7 = *(int (__fastcall **)(TripWireBlock *, unsigned int, AABB *, int))(*(_DWORD *)this + 420);
  v8 = BlockSource::getData(a2, a3);
  return v7(v5, v8, v6, a5);
}


_BOOL4 __fastcall TripWireBlock::isPowered(TripWireBlock *this, unsigned __int8 a2)
{
  BlockState *v2; // r0@1
  unsigned __int8 v4; // [sp+7h] [bp-9h]@1

  v4 = a2;
  v2 = (BlockState *)Block::getBlockState((int)this, 30);
  return BlockState::getBool(v2, &v4);
}


signed int __fastcall TripWireBlock::playerWillDestroy(TripWireBlock *this, Player *a2, const BlockPos *a3, int a4)
{
  Player *v4; // r6@1
  Block *v5; // r7@1
  int v6; // r9@1
  const BlockPos *v7; // r5@1
  BlockSource *v8; // r8@1
  ItemInstance *v9; // r0@1
  ItemInstance *v10; // r4@1
  int v11; // r0@1
  bool v12; // zf@1
  BlockState *v13; // r0@7
  signed int v14; // r4@7
  TripWireBlock *v15; // r0@7
  BlockState *v17; // r0@9

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (BlockSource *)Entity::getRegion(a2);
  v9 = (ItemInstance *)Player::getSelectedItem(v4);
  v10 = v9;
  v11 = *((_BYTE *)v9 + 15);
  v12 = v11 == 0;
  if ( v11 )
    v12 = *(_DWORD *)v10 == 0;
  if ( v12
    || ItemInstance::isNull(v10)
    || !*((_BYTE *)v10 + 14)
    || *(_DWORD *)Player::getSelectedItem(v4) != Item::mShears )
  {
    v13 = (BlockState *)Block::getBlockState((int)v5, 30);
    v14 = 1 << (*(_QWORD *)v13 + 1 - (unsigned int)(*(_QWORD *)v13 >> 32));
    v15 = (TripWireBlock *)(v6 & ~BlockState::getMask(v13) | v14);
  }
  else
    v17 = (BlockState *)Block::getBlockState((int)v5, 30);
    v15 = (TripWireBlock *)(v6 & ~BlockState::getMask(v17));
  TripWireBlock::updateSource(v15, v8, v7, (unsigned __int8)v15);
  return j_j_j__ZNK5Block17playerWillDestroyER6PlayerRK8BlockPosi(v5, v4, v7, v6);
}


void __fastcall TripWireBlock::entityInside(TripWireBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4)
{
  BlockSource *v4; // r5@1
  TripWireBlock *v5; // r6@1
  const BlockPos *v6; // r4@1
  Level *v7; // r0@1
  BlockState *v8; // r0@2
  unsigned __int8 v9; // [sp+7h] [bp-11h]@2

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = (Level *)BlockSource::getLevel(a2);
  if ( !Level::isClientSide(v7) )
  {
    v9 = BlockSource::getData(v4, v6);
    v8 = (BlockState *)Block::getBlockState((int)v5, 30);
    if ( !BlockState::getBool(v8, &v9) )
      TripWireBlock::checkPressed(v5, v4, v6);
  }
}


_BOOL4 __fastcall TripWireBlock::isSuspended(TripWireBlock *this, unsigned __int8 a2)
{
  BlockState *v2; // r0@1
  unsigned __int8 v4; // [sp+7h] [bp-9h]@1

  v4 = a2;
  v2 = (BlockState *)Block::getBlockState((int)this, 35);
  return BlockState::getBool(v2, &v4);
}


AABB *__fastcall TripWireBlock::getVisualShape(TripWireBlock *this, unsigned __int8 a2, AABB *a3, bool a4)
{
  unsigned __int8 v4; // r6@1
  AABB *v5; // r4@1
  TripWireBlock *v6; // r7@1
  BlockState *v7; // r0@1
  _BOOL4 v8; // r5@1
  BlockState *v9; // r0@1
  int *v10; // r2@3
  const Vec3 *v11; // r1@3
  int v13; // [sp+0h] [bp-48h]@3
  signed int v14; // [sp+4h] [bp-44h]@3
  signed int v15; // [sp+8h] [bp-40h]@3
  int v16; // [sp+Ch] [bp-3Ch]@3
  signed int v17; // [sp+10h] [bp-38h]@3
  int v18; // [sp+14h] [bp-34h]@3
  int v19; // [sp+18h] [bp-30h]@5
  signed int v20; // [sp+1Ch] [bp-2Ch]@5
  signed int v21; // [sp+20h] [bp-28h]@5
  int v22; // [sp+24h] [bp-24h]@4
  signed int v23; // [sp+28h] [bp-20h]@4
  signed int v24; // [sp+2Ch] [bp-1Ch]@4
  unsigned __int8 v25; // [sp+33h] [bp-15h]@1

  v4 = a2;
  v5 = a3;
  v6 = this;
  v25 = a2;
  v7 = (BlockState *)Block::getBlockState((int)this, 2);
  v8 = BlockState::getBool(v7, &v25);
  v25 = v4;
  v9 = (BlockState *)Block::getBlockState((int)v6, 35);
  if ( BlockState::getBool(v9, &v25) )
  {
    if ( v8 )
    {
      v16 = 0;
      v10 = &v13;
      v17 = 1031798784;
      v18 = 0;
      v13 = 1065353216;
      v14 = 1042284544;
      v15 = 1065353216;
      v11 = (const Vec3 *)&v16;
    }
    else
      v19 = 1065353216;
      v20 = 1056964608;
      v21 = 1065353216;
      v10 = &v19;
      v11 = (const Vec3 *)&Vec3::ZERO;
  }
  else
    v22 = 1065353216;
    v23 = 1035993088;
    v24 = 1065353216;
    v10 = &v22;
    v11 = (const Vec3 *)&Vec3::ZERO;
  AABB::set(v5, v11, (const Vec3 *)v10);
  return v5;
}


void __fastcall TripWireBlock::tick(TripWireBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r5@1
  TripWireBlock *v5; // r6@1
  const BlockPos *v6; // r4@1
  Level *v7; // r0@1
  BlockState *v8; // r0@2
  unsigned __int8 v9; // [sp+7h] [bp-11h]@2

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = (Level *)BlockSource::getLevel(a2);
  if ( !Level::isClientSide(v7) )
  {
    v9 = BlockSource::getData(v4, v6);
    v8 = (BlockState *)Block::getBlockState((int)v5, 30);
    if ( BlockState::getBool(v8, &v9) == 1 )
      TripWireBlock::checkPressed(v5, v4, v6);
  }
}


signed int __fastcall TripWireBlock::shouldConnectTo(TripWireBlock *this, BlockSource *a2, const BlockPos *a3, int a4, int a5)
{
  BlockSource *v5; // r5@1
  int v6; // r4@1
  __int64 v7; // kr00_8@1
  int v8; // r1@1
  int v9; // r2@1
  Block *v10; // r6@1
  unsigned int v11; // r5@2
  unsigned __int64 *v12; // r0@2
  unsigned int v13; // r2@2
  signed int result; // r0@2
  int v15; // [sp+4h] [bp-1Ch]@1
  int v16; // [sp+8h] [bp-18h]@1
  int v17; // [sp+Ch] [bp-14h]@1

  v5 = this;
  v6 = a4;
  v7 = *(_QWORD *)a2;
  v8 = *((_DWORD *)a2 + 2);
  v9 = Direction::STEP_Z[a4];
  v15 = Direction::STEP_X[a4] + v7;
  v16 = HIDWORD(v7);
  v17 = v9 + v8;
  v10 = (Block *)BlockSource::getBlock(this, (const BlockPos *)&v15);
  if ( Block::isType(v10, (const Block *)Block::mTripwireHook) == 1 )
  {
    v11 = BlockSource::getData(v5, (const BlockPos *)&v15);
    v12 = (unsigned __int64 *)Block::getBlockState(Block::mTripwireHook, 12);
    v13 = (v11 >> (*v12 + 1 - (*v12 >> 32))) & (0xFu >> (4 - (*v12 >> 32)));
    result = 0;
    if ( v13 == Direction::DIRECTION_OPPOSITE[v6] )
      result = 1;
  }
  else
    result = Block::isType(v10, (const Block *)Block::mTripwire);
  return result;
}


_BOOL4 __fastcall TripWireBlock::isAttached(TripWireBlock *this, unsigned __int8 a2)
{
  BlockState *v2; // r0@1
  unsigned __int8 v4; // [sp+7h] [bp-9h]@1

  v4 = a2;
  v2 = (BlockState *)Block::getBlockState((int)this, 2);
  return BlockState::getBool(v2, &v4);
}


void __fastcall TripWireBlock::checkPressed(TripWireBlock *this, BlockSource *a2, const BlockPos *a3)
{
  TripWireBlock::checkPressed(this, a2, a3);
}


_BOOL4 __fastcall TripWireBlock::isDisarmed(TripWireBlock *this, unsigned __int8 a2)
{
  BlockState *v2; // r0@1
  unsigned __int8 v4; // [sp+7h] [bp-9h]@1

  v4 = a2;
  v2 = (BlockState *)Block::getBlockState((int)this, 9);
  return BlockState::getBool(v2, &v4);
}


void __fastcall TripWireBlock::entityInside(TripWireBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4)
{
  TripWireBlock::entityInside(this, a2, a3, a4);
}


void __fastcall TripWireBlock::~TripWireBlock(TripWireBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


_DWORD *__fastcall TripWireBlock::getAABB(TripWireBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  const BlockPos *v7; // r5@1
  AABB *v8; // r4@1
  _DWORD *result; // r0@2
  char v10; // [sp+4h] [bp-1Ch]@2

  v7 = a3;
  v8 = a4;
  if ( a6 == 1 )
  {
    (*(void (__cdecl **)(TripWireBlock *))(*(_DWORD *)this + 416))(this);
    Vec3::Vec3((int)&v10, (int)v7);
    result = (_DWORD *)AABB::move(v8, (const Vec3 *)&v10);
  }
  else
    result = &AABB::EMPTY;
  return result;
}


signed int __fastcall TripWireBlock::getTickDelay(TripWireBlock *this)
{
  return 10;
}
