

_QWORD *__fastcall FenceGateBlock::_checkIsInWall(FenceGateBlock *this, BlockSource *a2, const BlockPos *a3)
{
  FenceGateBlock *v3; // r8@1
  const BlockPos *v4; // r5@1
  BlockSource *v5; // r9@1
  unsigned __int64 *v6; // r0@1
  int v7; // r10@2
  int v8; // r6@2
  int v9; // r4@5
  int v10; // r7@5
  BlockState *v11; // r0@5
  bool v12; // zf@5
  int v13; // r6@9
  _QWORD *result; // r0@8
  Entity **v15; // r5@11 OVERLAPPED
  Entity **v16; // r6@11 OVERLAPPED
  Entity *v17; // t1@12
  char v18; // [sp+Ch] [bp-54h]@11
  char v19; // [sp+Dh] [bp-53h]@11
  unsigned __int8 v20; // [sp+10h] [bp-50h]@3
  unsigned __int8 v21; // [sp+14h] [bp-4Ch]@3
  unsigned __int8 v22; // [sp+18h] [bp-48h]@2
  unsigned __int8 v23; // [sp+1Ch] [bp-44h]@2
  char v24; // [sp+20h] [bp-40h]@1
  unsigned __int8 v25; // [sp+21h] [bp-3Fh]@1
  char v26; // [sp+24h] [bp-3Ch]@11

  v3 = this;
  v4 = a3;
  v5 = a2;
  BlockSource::getBlockAndData((BlockSource *)&v24, a2, (int)a3);
  v6 = (unsigned __int64 *)Block::getBlockState((int)v3, 12);
  switch ( (0xFu >> (4 - (*v6 >> 32))) & (v25 >> (*v6 + 1 - (*v6 >> 32))) )
  {
    case 0u:
    case 2u:
      BlockSource::getBlockID((BlockSource *)&v23, (int)v5, *(_QWORD *)v4 + 1, *(_QWORD *)v4 >> 32, *((_DWORD *)v4 + 2));
      v7 = v23;
      BlockSource::getBlockID((BlockSource *)&v22, (int)v5, *(_QWORD *)v4 - 1, *(_QWORD *)v4 >> 32, *((_DWORD *)v4 + 2));
      v8 = v22;
      break;
    case 1u:
    case 3u:
      BlockSource::getBlockID((BlockSource *)&v21, (int)v5, *(_QWORD *)v4, *(_QWORD *)v4 >> 32, *((_DWORD *)v4 + 2) + 1);
      v7 = v21;
      BlockSource::getBlockID((BlockSource *)&v20, (int)v5, *(_QWORD *)v4, *(_QWORD *)v4 >> 32, *((_DWORD *)v4 + 2) - 1);
      v8 = v20;
    default:
      v8 = 0;
      v7 = 0;
  }
  v9 = v25;
  v10 = *(_BYTE *)(Block::mCobblestoneWall + 4);
  v11 = (BlockState *)Block::getBlockState((int)v3, 20);
  v12 = v7 == v10;
  if ( v7 != v10 )
    v12 = v8 == v10;
  if ( v12 )
    v13 = *(_QWORD *)v11 + 1 - (*(_QWORD *)v11 >> 32);
    result = (_QWORD *)(v9 & ~BlockState::getMask(v11) | (1 << v13));
  else
    result = (_QWORD *)(v9 & ~BlockState::getMask(v11));
  if ( (unsigned __int8)result != v25 )
    v25 = (unsigned __int8)result;
    v18 = v24;
    v19 = (char)result;
    BlockSource::setBlockAndData((int)v5, v4, (int)&v18, 3, 0);
    AABB::AABB((AABB *)&v26);
    (*(void (__fastcall **)(FenceGateBlock *, BlockSource *, const BlockPos *, char *))(*(_DWORD *)v3 + 32))(
      v3,
      v5,
      v4,
      &v26);
    result = BlockSource::fetchEntities(v5, 0, (const AABB *)&v26);
    for ( *(_QWORD *)&v15 = *result; v16 != v15; result = Entity::onOnewayCollision(v17, (const AABB *)&v26) )
    {
      v17 = *v15;
      ++v15;
    }
  return result;
}


signed int __fastcall FenceGateBlock::isInteractiveBlock(FenceGateBlock *this)
{
  return 1;
}


char *__fastcall FenceGateBlock::_onOpenChanged(FenceGateBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  char *result; // r0@1
  Entity **v6; // r5@1 OVERLAPPED
  FenceGateBlock *v7; // r6@1 OVERLAPPED
  Entity *v8; // t1@2
  char v9; // [sp+Ch] [bp-34h]@1

  v7 = this;
  v3 = a3;
  v4 = a2;
  AABB::AABB((AABB *)&v9);
  (*(void (__fastcall **)(FenceGateBlock *, BlockSource *, const BlockPos *, char *))(*(_DWORD *)v7 + 32))(
    v7,
    v4,
    v3,
    &v9);
  result = BlockSource::fetchEntities(v4, 0, (const AABB *)&v9);
  for ( *(_QWORD *)&v6 = *(_QWORD *)result; (Entity **)v7 != v6; result = Entity::onOnewayCollision(
                                                                            v8,
                                                                            (const AABB *)&v9) )
  {
    v8 = *v6;
    ++v6;
  }
  return result;
}


int __fastcall FenceGateBlock::FenceGateBlock(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int *v12; // r2@1
  float v14; // [sp+0h] [bp-18h]@1
  int v15; // [sp+4h] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(2);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_270B228;
  Block::setSolid((Block *)v3, 0);
  Block::setIsInteraction((Block *)v3, 1);
  *(_DWORD *)(v3 + 24) = 16;
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
    VSTR            S0, [SP,#0x18+var_18]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v12 = &v15;
  Block::mTranslucency[v4] = *v12;
  return v3;
}


void __fastcall FenceGateBlock::~FenceGateBlock(FenceGateBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


_BOOL4 __fastcall FenceGateBlock::_isInWall(FenceGateBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  BlockState *v3; // r0@1
  unsigned __int8 v5; // [sp+7h] [bp-9h]@1

  v2 = a2;
  v3 = (BlockState *)Block::getBlockState((int)this, 20);
  v5 = v2;
  return BlockState::getBool(v3, &v5);
}


AABB *__fastcall FenceGateBlock::getAABB(FenceGateBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  FenceGateBlock *v7; // r6@1
  const BlockPos *v8; // r5@1
  BlockSource *v9; // r7@1
  AABB *v10; // r4@1
  unsigned int v11; // r5@1
  BlockState *v12; // r0@1
  _BOOL4 v13; // r0@1
  unsigned __int64 *v14; // r0@4
  unsigned int v19; // r0@4
  float *v21; // r1@7
  float *v22; // r2@7
  float v25; // [sp+4h] [bp-54h]@8
  float v26; // [sp+10h] [bp-48h]@8
  __int64 v27; // [sp+14h] [bp-44h]@8
  float v28; // [sp+1Ch] [bp-3Ch]@7
  float v29; // [sp+28h] [bp-30h]@7
  int v30; // [sp+2Ch] [bp-2Ch]@7
  float v31; // [sp+34h] [bp-24h]@1
  int v32; // [sp+38h] [bp-20h]@7
  unsigned __int8 v34; // [sp+43h] [bp-15h]@1

  v7 = this;
  v8 = a3;
  v9 = a2;
  v10 = a4;
  Vec3::Vec3((int)&v31, (int)a3);
  v11 = BlockSource::getData(v9, v8);
  v12 = (BlockState *)Block::getBlockState((int)v7, 26);
  v34 = v11;
  v13 = BlockState::getBool(v12, &v34);
  if ( a6 || !v13 == 1 )
  {
    v14 = (unsigned __int64 *)Block::getBlockState((int)v7, 12);
    __asm
    {
      VMOV.F32        S4, #1.0
      VMOV.F32        S6, #0.375
      VMOV.F32        S8, #0.625
      VMOV.F32        S0, #1.5
    }
    v19 = (0xFu >> (4 - (*v14 >> 32))) & (v11 >> (*v14 + 1 - (*v14 >> 32)));
    __asm { VLDR            S2, [SP,#0x58+var_24] }
    if ( a6 )
      __asm { VMOVNE.F32      S0, S4 }
    if ( (v19 | 2) == 2 )
      _R0 = v32;
      __asm
      {
        VADD.F32        S4, S2, S4
        VLDR            S10, [SP,#0x58+var_1C]
      }
      v21 = &v29;
      __asm { VSTR            S2, [SP,#0x58+var_30] }
      v22 = &v28;
      __asm { VMOV            S12, R0 }
      v30 = v32;
        VADD.F32        S6, S10, S6
        VADD.F32        S0, S12, S0
        VADD.F32        S8, S10, S8
        VSTR            S4, [SP,#0x58+var_3C]
        VSTR            S6, [SP,#0x58+var_28]
        VSTR            S0, [SP,#0x58+var_38]
        VSTR            S8, [SP,#0x58+var_34]
    else
      _R0 = *(_QWORD *)&v32;
        VADD.F32        S6, S2, S6
        VMOV            S12, R1
      v22 = &v25;
        VADD.F32        S2, S2, S8
        VMOV            S10, R0
        VADD.F32        S4, S12, S4
        VADD.F32        S0, S10, S0
        VSTR            S6, [SP,#0x58+var_48]
      v27 = *(_QWORD *)&v32;
      v21 = &v26;
        VSTR            S2, [SP,#0x58+var_54]
        VSTR            S0, [SP,#0x58+var_50]
        VSTR            S4, [SP,#0x58+var_4C]
    AABB::set(v10, (const Vec3 *)v21, (const Vec3 *)v22);
  }
  else
    v10 = (AABB *)&AABB::EMPTY;
  return v10;
}


signed int __fastcall FenceGateBlock::use(FenceGateBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  FenceGateBlock *v4; // r6@1
  Entity *v5; // r7@1
  const BlockPos *v7; // r9@2
  unsigned __int8 v8; // r4@2
  BlockState *v9; // r0@2
  BlockState *v10; // r0@3
  unsigned __int8 v11; // r4@3
  char v12; // r0@3
  float v18; // r1@4
  char v19; // r8@4
  unsigned __int64 *v20; // r0@4
  BlockState *v21; // r0@5
  unsigned __int8 v22; // r4@5
  int v23; // r5@5
  BlockState *v24; // r0@6
  unsigned __int8 v25; // r4@6
  signed int v26; // r5@6
  char v27; // r0@6
  Entity **v28; // r7@7
  __int64 v29; // kr00_8@7
  Entity *v30; // t1@8
  int v31; // r0@9
  float v33; // [sp+Ch] [bp-5Ch]@9
  char v34; // [sp+18h] [bp-50h]@6
  char v35; // [sp+19h] [bp-4Fh]@6
  char v36; // [sp+1Ch] [bp-4Ch]@4
  char v38; // [sp+24h] [bp-44h]@3
  char v39; // [sp+25h] [bp-43h]@3
  char v40; // [sp+28h] [bp-40h]@2
  unsigned __int8 v41; // [sp+29h] [bp-3Fh]@2
  unsigned __int8 v42; // [sp+2Ch] [bp-3Ch]@2

  v4 = this;
  v5 = a2;
  _R10 = a3;
  if ( Player::canUseAbility((int)a2, &Abilities::DOORS_AND_SWITCHES) == 1 )
  {
    v7 = (const BlockPos *)Entity::getRegion(v5);
    BlockSource::getBlockAndData((BlockSource *)&v40, v7, (int)_R10);
    v8 = v41;
    v9 = (BlockState *)Block::getBlockState((int)v4, 26);
    v42 = v8;
    if ( BlockState::getBool(v9, &v42) == 1 )
    {
      v10 = (BlockState *)Block::getBlockState((int)v4, 26);
      v11 = v41;
      v12 = BlockState::getMask(v10);
      v41 = v11 & ~v12;
      v38 = v40;
      v39 = v11 & ~v12;
      BlockSource::setBlockAndData((int)v7, _R10, (int)&v38, 3, (int)v5);
    }
    else
      Entity::getRotation((Entity *)&v36, (int)v5);
      __asm
      {
        VLDR            S0, =0.011111
        VMOV.F32        S4, #0.5
        VLDR            S2, [SP,#0x68+var_48]
        VMUL.F32        S0, S2, S0
        VADD.F32        S0, S0, S4
        VMOV            R0, S0
      }
      v19 = mce::Math::floor(_R0, v18);
      v20 = (unsigned __int64 *)Block::getBlockState((int)v4, 12);
      if ( ((0xFu >> (4 - (*v20 >> 32))) & (v41 >> (*v20 + 1 - (*v20 >> 32)))) == ((v19 + 2) & 3) )
        v21 = (BlockState *)Block::getBlockState((int)v4, 12);
        v22 = v41;
        v23 = (v19 & 3) << (*(_QWORD *)v21 + 1 - (unsigned int)(*(_QWORD *)v21 >> 32));
        v41 = v22 & ~(unsigned __int8)BlockState::getMask(v21) | v23;
      v24 = (BlockState *)Block::getBlockState((int)v4, 26);
      v25 = v41;
      v26 = 1 << (*(_QWORD *)v24 + 1 - (unsigned int)(*(_QWORD *)v24 >> 32));
      v27 = BlockState::getMask(v24);
      v41 = v25 & ~v27 | v26;
      v34 = v40;
      v35 = v25 & ~v27 | v26;
      BlockSource::setBlockAndData((int)v7, _R10, (int)&v34, 3, (int)v5);
    AABB::AABB((AABB *)&v42);
    (*(void (__fastcall **)(FenceGateBlock *, const BlockPos *, BlockPos *, unsigned __int8 *))(*(_DWORD *)v4 + 32))(
      v4,
      v7,
      _R10,
      &v42);
    v29 = *(_QWORD *)BlockSource::fetchEntities(v7, 0, (const AABB *)&v42);
    v28 = (Entity **)v29;
    if ( (_DWORD)v29 != HIDWORD(v29) )
      do
        v30 = *v28;
        ++v28;
        Entity::onOnewayCollision(v30, (const AABB *)&v42);
      while ( (Entity **)HIDWORD(v29) != v28 );
    v31 = BlockSource::getLevel(v7);
    __asm
      VLDR            S0, [R10]
      VMOV.F32        S6, #0.5
      VLDR            S2, [R10,#4]
      VLDR            S4, [R10,#8]
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VADD.F32        S0, S0, S6
      VADD.F32        S2, S2, S6
      VADD.F32        S4, S4, S6
      VSTR            S0, [SP,#0x68+var_5C]
      VSTR            S2, [SP,#0x68+var_58]
      VSTR            S4, [SP,#0x68+var_54]
    Level::broadcastDimensionEvent(v31, v7, 1003, (int)&v33, 0);
  }
  return 1;
}


signed int __fastcall FenceGateBlock::onLoaded(FenceGateBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r6@1
  FenceGateBlock *v4; // r4@1
  const BlockPos *v5; // r5@1
  Level *v6; // r0@1
  signed int result; // r0@1
  Dimension *v8; // r0@2
  int v9; // r0@2
  signed int v10; // r7@2
  BlockState *v11; // r0@3
  bool v12; // zf@3
  _DWORD *v13; // r1@3
  char v14; // [sp+4h] [bp-1Ch]@3

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v6);
  if ( !result )
  {
    v8 = (Dimension *)BlockSource::getDimension(v3);
    v9 = Dimension::getCircuitSystem(v8);
    result = CircuitSystem::create<ConsumerComponent>(v9, v5, (int)v3, 0);
    v10 = result;
    if ( result )
    {
      BlockSource::getBlockAndData((BlockSource *)&v14, v3, (int)v5);
      v11 = (BlockState *)Block::getBlockState((int)v4, 26);
      v12 = BlockState::getBool(v11, (const unsigned __int8 *)((unsigned int)&v14 | 1)) == 0;
      v13 = &Redstone::SIGNAL_MIN;
      if ( !v12 )
        v13 = &Redstone::SIGNAL_MAX;
      (*(void (__fastcall **)(signed int, _DWORD))(*(_DWORD *)v10 + 16))(v10, *v13);
      result = 1;
      *(_BYTE *)(v10 + 41) = 1;
    }
  }
  return result;
}


int __fastcall FenceGateBlock::onPlace(FenceGateBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  FenceGateBlock *v5; // r6@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  FenceGateBlock::_checkIsInWall(this, a2, a3);
  return (*(int (__fastcall **)(FenceGateBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v5 + 188))(v5, v4, v3);
}


int __fastcall FenceGateBlock::mayPlace(FenceGateBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  Block *v5; // r6@1
  int v6; // r0@1
  int v7; // r1@1
  int v8; // r2@1
  Material *v9; // r0@1
  int result; // r0@2
  int v11; // [sp+4h] [bp-1Ch]@1
  int v12; // [sp+8h] [bp-18h]@1
  int v13; // [sp+Ch] [bp-14h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  v8 = *((_DWORD *)a3 + 2);
  v11 = v6;
  v12 = v7 - 1;
  v13 = v8;
  v9 = (Material *)BlockSource::getMaterial(v4, (const BlockPos *)&v11);
  if ( Material::isSolid(v9) == 1 )
    result = Block::mayPlace(v5, v4, v3);
  else
    result = 0;
  return result;
}


char *__fastcall FenceGateBlock::onRedstoneUpdate(FenceGateBlock *this, BlockSource *a2, const BlockPos *a3, int a4, int a5)
{
  FenceGateBlock *v5; // r7@1
  char *result; // r0@1
  int v7; // r9@1
  BlockSource *v9; // r10@1
  BlockState *v10; // r0@2
  _BOOL4 v11; // r8@2
  BlockState *v12; // r0@2
  char v13; // r2@2 OVERLAPPED
  signed int v14; // r3@2
  signed int v15; // r4@2
  char v16; // r5@4
  signed int v17; // r6@4
  char v18; // r0@4
  Entity **v19; // r5@4
  Entity **i; // r6@4
  Entity *v21; // t1@5
  int v22; // r0@9
  float v27; // [sp+Ch] [bp-54h]@9
  char v28; // [sp+18h] [bp-48h]@4
  char v29; // [sp+19h] [bp-47h]@4
  char v30; // [sp+1Ch] [bp-44h]@2
  char v31; // [sp+1Dh] [bp-43h]@4
  char v32; // [sp+20h] [bp-40h]@4

  v5 = this;
  result = (char *)a5;
  v7 = a4;
  _R11 = a3;
  v9 = a2;
  if ( !a5 )
  {
    BlockSource::getBlockAndData((BlockSource *)&v30, a2, (int)a3);
    v10 = (BlockState *)Block::getBlockState((int)v5, 26);
    v11 = BlockState::getBool(v10, (const unsigned __int8 *)((unsigned int)&v30 | 1));
    v12 = (BlockState *)Block::getBlockState((int)v5, 26);
    *(_QWORD *)(&v13 - 4) = *(_QWORD *)v12;
    v14 = 0;
    v15 = 0;
    if ( v7 > 0 )
      v14 = 1;
    v16 = v31;
    v17 = v14 << (*(_QWORD *)v12 + 1 - v13);
    v18 = BlockState::getMask(v12);
    v31 = v16 & ~v18 | v17;
    v28 = v30;
    v29 = v16 & ~v18 | v17;
    BlockSource::setBlockAndData((int)v9, _R11, (int)&v28, 3, 0);
    AABB::AABB((AABB *)&v32);
    (*(void (__fastcall **)(FenceGateBlock *, BlockSource *, BlockPos *, char *))(*(_DWORD *)v5 + 32))(
      v5,
      v9,
      _R11,
      &v32);
    result = BlockSource::fetchEntities(v9, 0, (const AABB *)&v32);
    v19 = (Entity **)(*(_QWORD *)result >> 32);
    for ( i = (Entity **)*(_QWORD *)result; v19 != i; result = Entity::onOnewayCollision(v21, (const AABB *)&v32) )
    {
      v21 = *i;
      ++i;
    }
      v15 = 1;
    if ( v15 != v11 )
      v22 = BlockSource::getLevel(v9);
      __asm
      {
        VLDR            S0, [R11]
        VMOV.F32        S6, #0.5
        VLDR            S2, [R11,#4]
        VLDR            S4, [R11,#8]
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S4, S4
        VADD.F32        S0, S0, S6
        VADD.F32        S2, S2, S6
        VADD.F32        S4, S4, S6
        VSTR            S0, [SP,#0x60+var_54]
        VSTR            S2, [SP,#0x60+var_50]
        VSTR            S4, [SP,#0x60+var_4C]
      }
      result = (char *)Level::broadcastDimensionEvent(v22, v9, 1003, (int)&v27, 0);
  }
  return result;
}


void __fastcall FenceGateBlock::~FenceGateBlock(FenceGateBlock *this)
{
  FenceGateBlock::~FenceGateBlock(this);
}


_BOOL4 __fastcall FenceGateBlock::ignoreEntitiesOnPistonMove(FenceGateBlock *this, unsigned __int8 a2)
{
  unsigned __int8 v2; // r4@1
  BlockState *v3; // r0@1
  unsigned __int8 v5; // [sp+7h] [bp-9h]@1

  v2 = a2;
  v3 = (BlockState *)Block::getBlockState((int)this, 26);
  v5 = v2;
  return BlockState::getBool(v3, &v5);
}


int __fastcall FenceGateBlock::getPlacementDataValue(FenceGateBlock *this, Entity *a2, const BlockPos *a3, signed __int8 a4, const Vec3 *a5, int a6)
{
  FenceGateBlock *v6; // r4@1
  float v12; // r1@1
  char v13; // r5@1
  BlockState *v14; // r0@1
  int v15; // r4@1
  int v16; // r6@1
  int v18; // [sp+0h] [bp-18h]@1

  v6 = this;
  Entity::getRotation((Entity *)&v18, (int)a2);
  __asm
  {
    VLDR            S0, =0.011111
    VMOV.F32        S4, #0.5
    VLDR            S2, [SP,#0x18+var_14]
    VMUL.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  v13 = mce::Math::floor(_R0, v12);
  v14 = (BlockState *)Block::getBlockState((int)v6, 12);
  v16 = *(_QWORD *)v14 >> 32;
  v15 = *(_QWORD *)v14;
  BlockState::getMask(v14);
  return (unsigned __int8)((v13 & 3) << (v15 + 1 - v16));
}


_BOOL4 __fastcall FenceGateBlock::_isOpen(FenceGateBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  BlockState *v3; // r0@1
  unsigned __int8 v5; // [sp+7h] [bp-9h]@1

  v2 = a2;
  v3 = (BlockState *)Block::getBlockState((int)this, 26);
  v5 = v2;
  return BlockState::getBool(v3, &v5);
}
