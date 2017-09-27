

_DWORD *__fastcall LeverBlock::getAABB(LeverBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  LeverBlock *v7; // r6@1
  AABB *v8; // r4@1
  const BlockPos *v9; // r5@1
  int v10; // r0@2
  _DWORD *result; // r0@2
  char v12; // [sp+4h] [bp-1Ch]@2

  v7 = this;
  v8 = a4;
  v9 = a3;
  if ( a6 == 1 )
  {
    v10 = BlockSource::getData(a2, a3);
    LeverBlock::_getShape(v7, v10, v8);
    Vec3::Vec3((int)&v12, (int)v9);
    result = (_DWORD *)AABB::move(v8, (const Vec3 *)&v12);
  }
  else
    result = &AABB::EMPTY;
  return result;
}


signed int __fastcall LeverBlock::shouldConnectToRedstone(LeverBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  return 1;
}


signed int __fastcall LeverBlock::neighborChanged(LeverBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r8@1
  LeverBlock *v6; // r9@1
  const BlockPos *v7; // r7@1
  unsigned int v8; // r5@1
  unsigned __int64 *v9; // r0@1
  char v10; // r3@1
  unsigned int v11; // r0@1
  signed int result; // r0@5
  int v13; // [sp+4h] [bp-2Ch]@5
  int v14; // [sp+8h] [bp-28h]@6
  int v15; // [sp+Ch] [bp-24h]@7

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = BlockSource::getData(a2, a3);
  v9 = (unsigned __int64 *)Block::getBlockState((int)v6, 15);
  v10 = 0;
  v11 = (0xFu >> (4 - (*v9 >> 32))) & (v8 >> (*v9 + 1 - (*v9 >> 32)));
  if ( v11 - 5 < 2 )
    v10 = 1;
  if ( v11 - 1 < 4 )
    v10 = 6 - v11;
  BlockPos::neighbor((BlockPos *)&v13, (int)v4, Facing::OPPOSITE_FACING[v10]);
  result = *(_DWORD *)v7;
  if ( *(_DWORD *)v7 == v13 )
  {
    result = v14;
    if ( *((_DWORD *)v7 + 1) == v14 )
    {
      result = v15;
      if ( *((_DWORD *)v7 + 2) == v15 )
      {
        result = LeverBlock::_checkCanSurvive(v6, v5, v4);
        if ( !result )
          result = BlockSource::removeBlock(v5, v4);
      }
    }
  }
  return result;
}


int __fastcall LeverBlock::mayPlace(LeverBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  return j_j_j__ZN11ButtonBlock11canAttachToER11BlockSourceRK8BlockPosa(
           a2,
           a3,
           (const BlockPos *)Facing::OPPOSITE_FACING[a4],
           Facing::OPPOSITE_FACING[a4]);
}


signed int __fastcall LeverBlock::getResourceCount(LeverBlock *this, Random *a2, int a3, int a4)
{
  return 1;
}


signed int __fastcall LeverBlock::getLeverFacing(LeverBlock *this, int a2)
{
  signed int result; // r0@2

  if ( (unsigned int)this <= 5 )
    result = dword_262E870[(signed int)this];
  else
    result = -1;
  return result;
}


int __fastcall LeverBlock::getPlacementDataValue(LeverBlock *this, Entity *a2, const BlockPos *a3, int a4, const Vec3 *a5, int a6)
{
  Entity *v6; // r8@1
  int v7; // r7@1
  LeverBlock *v8; // r10@1
  BlockState *v9; // r0@1
  _BOOL4 v10; // r9@1
  signed int v11; // r7@2
  BlockState *v12; // r0@4
  __int64 v13; // r5@4
  BlockState *v14; // r0@4
  int v15; // r4@4
  unsigned int v16; // r6@4
  float v23; // r1@6
  char v24; // r5@6
  BlockState *v25; // r0@6
  int v26; // r4@6
  unsigned int v27; // r0@7
  signed int v28; // r1@7
  float v31; // r1@8
  char v32; // r5@8
  BlockState *v33; // r0@8
  __int64 v34; // r4@9
  signed int v35; // r1@9
  unsigned __int8 v37; // [sp+7h] [bp-21h]@1

  v6 = a2;
  v7 = a4;
  v8 = this;
  v9 = (BlockState *)Block::getBlockState((int)this, 26);
  v37 = a6;
  v10 = BlockState::getBool(v9, &v37);
  if ( (unsigned __int8)v7 > 5u )
    v11 = -1;
  else
    v11 = dword_262E870[v7];
  v12 = (BlockState *)Block::getBlockState((int)v8, 15);
  v13 = *(_QWORD *)v12;
  BlockState::getMask(v12);
  v14 = (BlockState *)Block::getBlockState((int)v8, 26);
  v15 = *(_QWORD *)v14 + 1 - (*(_QWORD *)v14 >> 32);
  v16 = (BlockState::getMask(v14) ^ 0xFF) & (v11 << (v13 + 1 - BYTE4(v13))) | (v10 << v15);
  if ( !v11 )
  {
    _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 644))(v6);
    __asm
    {
      VLDR            S0, =0.011111
      VMOV            S2, R0
      VMOV.F32        S4, #0.5
      VMUL.F32        S0, S2, S0
      VADD.F32        S0, S0, S4
      VMOV            R0, S0
    }
    v32 = mce::Math::floor(_R0, v31);
    v33 = (BlockState *)Block::getBlockState((int)v8, 15);
    if ( v32 & 1 )
      v16 &= BlockState::getMask(v33) ^ 0xFF;
      return (unsigned __int8)v16;
    v34 = *(_QWORD *)v33;
    v27 = v16 & ~BlockState::getMask(v33);
    v35 = 7 << (v34 + 1 - BYTE4(v34));
    goto LABEL_12;
  }
  if ( v11 == 5 )
    v24 = mce::Math::floor(_R0, v23);
    v25 = (BlockState *)Block::getBlockState((int)v8, 15);
    v26 = *(_QWORD *)v25 + 1 - (*(_QWORD *)v25 >> 32);
    if ( v24 & 1 )
      v27 = v16 & ~BlockState::getMask(v25);
      v28 = 6;
    else
      v28 = 5;
    v35 = v28 << v26;
LABEL_12:
    LOBYTE(v16) = v27 | v35;
  return (unsigned __int8)v16;
}


int __fastcall LeverBlock::mayPlace(LeverBlock *this, BlockSource *a2, const BlockPos *a3)
{
  LeverBlock *v3; // r6@1
  const BlockPos *v4; // r7@1
  BlockSource *v5; // r5@1
  int result; // r0@6

  v3 = this;
  v4 = a3;
  v5 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)this + 220))()
    || (*(int (__fastcall **)(LeverBlock *, BlockSource *, const BlockPos *, signed int))(*(_DWORD *)v3 + 220))(
         v3,
         v5,
         v4,
         1) == 1
    || (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, signed int))(*(_DWORD *)v3 + 220))(v3, v5, v4, 2)
    || (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, signed int))(*(_DWORD *)v3 + 220))(v3, v5, v4, 3)
    || (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, signed int))(*(_DWORD *)v3 + 220))(v3, v5, v4, 4) )
  {
    result = 1;
  }
  else
    result = (*(int (__fastcall **)(LeverBlock *, BlockSource *, const BlockPos *, signed int))(*(_DWORD *)v3 + 220))(
               v3,
               v5,
               v4,
               5);
  return result;
}


int __fastcall LeverBlock::_getShape(LeverBlock *this, int a2, AABB *a3)
{
  unsigned int v3; // r5@1
  AABB *v4; // r4@1
  unsigned __int64 *v5; // r0@1
  int *v6; // r2@2
  int *v7; // r1@2
  int v9; // [sp+0h] [bp-A0h]@3
  signed int v10; // [sp+4h] [bp-9Ch]@3
  signed int v11; // [sp+8h] [bp-98h]@3
  int v12; // [sp+Ch] [bp-94h]@3
  signed int v13; // [sp+10h] [bp-90h]@3
  signed int v14; // [sp+14h] [bp-8Ch]@3
  int v15; // [sp+18h] [bp-88h]@2
  signed int v16; // [sp+1Ch] [bp-84h]@2
  signed int v17; // [sp+20h] [bp-80h]@2
  int v18; // [sp+24h] [bp-7Ch]@2
  int v19; // [sp+28h] [bp-78h]@2
  signed int v20; // [sp+2Ch] [bp-74h]@2
  int v21; // [sp+30h] [bp-70h]@7
  int v22; // [sp+34h] [bp-6Ch]@7
  int v23; // [sp+38h] [bp-68h]@7
  int v24; // [sp+3Ch] [bp-64h]@7
  int v25; // [sp+40h] [bp-60h]@7
  int v26; // [sp+44h] [bp-5Ch]@7
  int v27; // [sp+48h] [bp-58h]@6
  int v28; // [sp+4Ch] [bp-54h]@6
  int v29; // [sp+50h] [bp-50h]@6
  int v30; // [sp+54h] [bp-4Ch]@6
  int v31; // [sp+58h] [bp-48h]@6
  int v32; // [sp+5Ch] [bp-44h]@6
  int v33; // [sp+60h] [bp-40h]@5
  int v34; // [sp+64h] [bp-3Ch]@5
  int v35; // [sp+68h] [bp-38h]@5
  int v36; // [sp+6Ch] [bp-34h]@5
  int v37; // [sp+70h] [bp-30h]@5
  int v38; // [sp+74h] [bp-2Ch]@5
  int v39; // [sp+78h] [bp-28h]@4
  int v40; // [sp+7Ch] [bp-24h]@4
  int v41; // [sp+80h] [bp-20h]@4
  int v42; // [sp+84h] [bp-1Ch]@4
  int v43; // [sp+88h] [bp-18h]@4
  int v44; // [sp+8Ch] [bp-14h]@4

  v3 = a2;
  v4 = a3;
  v5 = (unsigned __int64 *)Block::getBlockState((int)this, 15);
  switch ( (0xFu >> (4 - (*v5 >> 32))) & (v3 >> (*v5 + 1 - (*v5 >> 32))) )
  {
    case 5u:
    case 6u:
      v18 = 1048576000;
      v6 = &v15;
      v19 = 0;
      v20 = 1048576000;
      v15 = 1061158912;
      v16 = 1058642330;
      v17 = 1061158912;
      v7 = &v18;
      break;
    case 1u:
      v7 = &v42;
      v42 = 0;
      v43 = 1048576000;
      v6 = &v39;
      v44 = 1050673152;
      v39 = 1052770304;
      v40 = 1061158912;
      v41 = 1060110336;
    case 2u:
      v7 = &v36;
      v6 = &v33;
      v36 = 1059061760;
      v37 = 1048576000;
      v38 = 1050673152;
      v33 = 1065353216;
      v34 = 1061158912;
      v35 = 1060110336;
    case 3u:
      v7 = &v30;
      v6 = &v27;
      v30 = 1050673152;
      v31 = 1048576000;
      v32 = 0;
      v27 = 1060110336;
      v28 = 1061158912;
      v29 = 1052770304;
    case 4u:
      v7 = &v24;
      v6 = &v21;
      v24 = 1050673152;
      v25 = 1048576000;
      v26 = 1059061760;
      v21 = 1060110336;
      v22 = 1061158912;
      v23 = 1065353216;
    default:
      v12 = 1048576000;
      v13 = 1053609165;
      v14 = 1048576000;
      v9 = 1061158912;
      v10 = 1065353216;
      v11 = 1061158912;
      v7 = &v12;
      v6 = &v9;
  }
  return AABB::set(v4, (const Vec3 *)v7, (const Vec3 *)v6);
}


AABB *__fastcall LeverBlock::getVisualShape(LeverBlock *this, int a2, AABB *a3, bool a4)
{
  AABB *v4; // r4@1

  v4 = a3;
  LeverBlock::_getShape(this, a2, a3);
  return v4;
}


AABB *__fastcall LeverBlock::getVisualShape(LeverBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, bool a5)
{
  LeverBlock *v5; // r5@1
  AABB *v6; // r4@1
  int v7; // r0@1

  v5 = this;
  v6 = a4;
  v7 = BlockSource::getData(a2, a3);
  LeverBlock::_getShape(v5, v7, v6);
  return v6;
}


signed int __fastcall LeverBlock::_getFacingFromData(LeverBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1
  unsigned int v4; // r0@1
  signed int result; // r0@2
  unsigned int v6; // r1@3

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 15);
  v4 = (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
  if ( v4 - 1 >= 4 )
  {
    v6 = v4 - 5;
    result = 0;
    if ( v6 < 2 )
      result = 1;
  }
  else
    result = (char)(6 - v4);
  return result;
}


signed int __fastcall LeverBlock::use(LeverBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  LeverBlock *v4; // r6@1
  Entity *v5; // r7@1
  BlockSource *v7; // r0@2
  const BlockPos *v8; // r10@2
  Level *v9; // r0@2
  BlockState *v10; // r0@3
  BlockState *v11; // r6@3
  _BOOL4 v12; // r0@3
  char v13; // r9@3
  int v14; // r4@3
  char v15; // r0@3
  Level *v16; // r0@3
  Dimension *v17; // r0@4
  CircuitSystem *v18; // r6@4
  int *v20; // r1@4
  int v21; // r0@7
  int v25; // r2@7
  float v27; // [sp+Ch] [bp-34h]@9
  char v28; // [sp+18h] [bp-28h]@3
  char v29; // [sp+19h] [bp-27h]@3
  char v30; // [sp+1Ch] [bp-24h]@3
  char v31; // [sp+1Dh] [bp-23h]@3

  v4 = this;
  v5 = a2;
  _R5 = a3;
  if ( Player::canUseAbility((int)a2, &Abilities::DOORS_AND_SWITCHES) == 1 )
  {
    v7 = (BlockSource *)Entity::getRegion(v5);
    v8 = v7;
    v9 = (Level *)BlockSource::getLevel(v7);
    if ( !Level::isClientSide(v9) )
    {
      BlockSource::getBlockAndData((BlockSource *)&v30, v8, (int)_R5);
      v10 = (BlockState *)Block::getBlockState((int)v4, 26);
      v11 = v10;
      v12 = BlockState::getBool(v10, (const unsigned __int8 *)((unsigned int)&v30 | 1));
      v13 = v31;
      v14 = !v12 << (*(_QWORD *)v11 + 1 - (unsigned int)(*(_QWORD *)v11 >> 32));
      v15 = BlockState::getMask(v11);
      v31 = v13 & ~v15 | v14;
      v28 = v30;
      v29 = v13 & ~v15 | v14;
      BlockSource::setBlockAndData((int)v8, _R5, (int)&v28, 3, (int)v5);
      v16 = (Level *)BlockSource::getLevel(v8);
      if ( !Level::isClientSide(v16) )
      {
        v17 = (Dimension *)BlockSource::getDimension(v8);
        v18 = (CircuitSystem *)Dimension::getCircuitSystem(v17);
        _ZF = (BlockSource::getData(v8, _R5) & 8) == 0;
        v20 = (int *)&Redstone::SIGNAL_NONE;
        if ( !_ZF )
          v20 = (int *)&Redstone::SIGNAL_MAX;
        CircuitSystem::setStrength(v18, _R5, *v20);
      }
      v21 = BlockSource::getLevel(v8);
      __asm
        VLDR            S0, [R5]
        VMOV.F32        S6, #0.5
        VLDR            S2, [R5,#4]
      v25 = 500;
        VLDR            S4, [R5,#8]
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S4, S4
        VADD.F32        S0, S0, S6
        VADD.F32        S2, S2, S6
        VADD.F32        S4, S4, S6
        VSTR            S0, [SP,#0x40+var_34]
        VSTR            S2, [SP,#0x40+var_30]
        VSTR            S4, [SP,#0x40+var_2C]
      if ( !_ZF )
        v25 = 600;
      Level::broadcastDimensionEvent(v21, v8, 3500, (int)&v27, v25);
    }
  }
  return 1;
}


void __fastcall LeverBlock::~LeverBlock(LeverBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall LeverBlock::_checkCanSurvive(LeverBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  LeverBlock *v5; // r6@1
  unsigned int v6; // r7@1
  unsigned __int64 *v7; // r0@1
  signed int v8; // r8@1
  unsigned int v9; // r0@1
  char v10; // r1@1
  void (__fastcall *v11)(LeverBlock *, BlockSource *, const BlockPos *, unsigned int); // r7@7
  unsigned int v12; // r0@7

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = BlockSource::getData(a2, a3);
  v7 = (unsigned __int64 *)Block::getBlockState((int)v5, 15);
  v8 = 0;
  v9 = (0xFu >> (4 - (*v7 >> 32))) & (v6 >> (*v7 + 1 - (*v7 >> 32)));
  v10 = 0;
  if ( v9 - 5 < 2 )
    v10 = 1;
  if ( v9 - 1 < 4 )
    v10 = 6 - v9;
  if ( (*(int (__fastcall **)(LeverBlock *, BlockSource *, const BlockPos *, _DWORD))(*(_DWORD *)v5 + 220))(
         v5,
         v4,
         v3,
         v10) )
  {
    v8 = 1;
  }
  else
    v11 = *(void (__fastcall **)(LeverBlock *, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v5 + 276);
    v12 = BlockSource::getData(v4, v3);
    v11(v5, v4, v3, v12);
    BlockSource::removeBlock(v4, v3);
  return v8;
}


int __fastcall LeverBlock::_getShape(LeverBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4)
{
  LeverBlock *v4; // r5@1
  AABB *v5; // r4@1
  int v6; // r1@1

  v4 = this;
  v5 = a4;
  v6 = BlockSource::getData(a2, a3);
  return j_j_j__ZNK10LeverBlock9_getShapeEhR4AABB(v4, v6, v5);
}


unsigned int __fastcall LeverBlock::_getDirectionFromData(LeverBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 15);
  return (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
}


signed int __fastcall LeverBlock::isInteractiveBlock(LeverBlock *this)
{
  return 1;
}


int __fastcall LeverBlock::onRemove(LeverBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  Block *v4; // r6@1
  const BlockPos *v5; // r4@1
  Level *v6; // r0@1
  Dimension *v7; // r0@2
  CircuitSystem *v8; // r0@2

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Level *)BlockSource::getLevel(a2);
  if ( !Level::isClientSide(v6) )
  {
    v7 = (Dimension *)BlockSource::getDimension(v3);
    v8 = (CircuitSystem *)Dimension::getCircuitSystem(v7);
    CircuitSystem::removeComponents(v8, v5);
  }
  return j_j_j__ZNK5Block8onRemoveER11BlockSourceRK8BlockPos(v4, v3, v5);
}


int __fastcall LeverBlock::_getOppositeDirectionFromData(LeverBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 15);
  return Facing::OPPOSITE_FACING[(0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)))];
}


int __fastcall LeverBlock::getSignal(LeverBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  char v4; // r0@1
  void *v5; // r1@1

  v4 = BlockSource::getData(a2, a3);
  v5 = &Redstone::SIGNAL_NONE;
  if ( v4 & 8 )
    v5 = &Redstone::SIGNAL_MAX;
  return *(_DWORD *)v5;
}


signed int __fastcall LeverBlock::isAttachedTo(LeverBlock *this, BlockSource *a2, const BlockPos *a3, BlockPos *a4)
{
  const BlockPos *v4; // r5@1
  LeverBlock *v5; // r6@1
  BlockPos *v6; // r4@1
  unsigned int v7; // r7@1
  unsigned __int64 *v8; // r0@1
  char v9; // r3@1
  unsigned int v10; // r0@1
  __int64 v11; // kr00_8@1
  int v12; // r5@1
  __int64 v13; // kr08_8@5

  v4 = a3;
  v5 = this;
  v6 = a4;
  v7 = BlockSource::getData(a2, a3);
  v8 = (unsigned __int64 *)Block::getBlockState((int)v5, 15);
  v9 = 0;
  v10 = (0xFu >> (4 - (*v8 >> 32))) & (v7 >> (*v8 + 1 - (*v8 >> 32)));
  v11 = *(_QWORD *)v4;
  v12 = *((_DWORD *)v4 + 2);
  if ( v10 - 5 < 2 )
    v9 = 1;
  if ( v10 - 1 < 4 )
    v9 = 6 - v10;
  v13 = *(_QWORD *)&Facing::DIRECTION[3 * v9 + 1];
  *(_DWORD *)v6 = v11 - Facing::DIRECTION[3 * v9];
  *((_DWORD *)v6 + 1) = HIDWORD(v11) - v13;
  *((_DWORD *)v6 + 2) = v12 - HIDWORD(v13);
  return 1;
}


int __fastcall LeverBlock::onLoaded(LeverBlock *this, BlockSource *a2, const BlockPos *a3)
{
  LeverBlock *v3; // r6@1
  const BlockPos *v4; // r9@1
  BlockSource *v5; // r5@1
  unsigned int v6; // r7@1
  __int64 v7; // kr00_8@1
  Level *v8; // r0@1
  int result; // r0@1
  char v10; // r6@2
  unsigned int v11; // r4@2
  Dimension *v12; // r0@4
  int v13; // r0@4
  unsigned int v14; // r6@6
  void (__fastcall *v15)(unsigned int, _DWORD, void **); // r4@7
  bool v16; // zf@7
  _DWORD *v17; // r1@7
  unsigned __int8 v18; // [sp+0h] [bp-20h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  BlockSource::getBlockAndData((BlockSource *)&v18, a2, (int)a3);
  v6 = *(&v18 + 1);
  v7 = *(_QWORD *)Block::getBlockState((int)v3, 15);
  v8 = (Level *)BlockSource::getLevel(v5);
  result = Level::isClientSide(v8);
  if ( !result )
  {
    v10 = 0;
    v11 = (v6 >> (1 - BYTE4(v7) + v7)) & (0xFu >> (4 - BYTE4(v7)));
    if ( v11 - 5 < 2 )
      v10 = 1;
    v12 = (Dimension *)BlockSource::getDimension(v5);
    v13 = Dimension::getCircuitSystem(v12);
    if ( v11 - 1 < 4 )
      v10 = 6 - v11;
    result = CircuitSystem::create<ProducerComponent>(v13, v4, (int)v5, Facing::OPPOSITE_FACING[v10]);
    v14 = result;
    if ( result )
    {
      v15 = *(void (__fastcall **)(unsigned int, _DWORD, void **))(*(_DWORD *)result + 16);
      v16 = (BlockSource::getData(v5, v4) & 8) == 0;
      v17 = &Redstone::SIGNAL_NONE;
      if ( !v16 )
        v17 = &Redstone::SIGNAL_MAX;
      v15(v14, *v17, &Redstone::SIGNAL_MAX);
      result = ProducerComponent::allowAttachments((ProducerComponent *)v14, 1);
      *(_BYTE *)(v14 + 41) = 1;
    }
  }
  return result;
}


int __fastcall LeverBlock::updateShape(LeverBlock *this, BlockSource *a2, const BlockPos *a3)
{
  LeverBlock *v3; // r6@1
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  int v6; // r0@1
  int v8; // [sp+0h] [bp-30h]@1
  int v9; // [sp+Ch] [bp-24h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  AABB::AABB((AABB *)&v8);
  v6 = BlockSource::getData(v5, v4);
  LeverBlock::_getShape(v3, v6, (AABB *)&v8);
  return (*(int (__fastcall **)(LeverBlock *, int *, int *))(*(_DWORD *)v3 + 452))(v3, &v8, &v9);
}


int __fastcall LeverBlock::LeverBlock(int a1, const void **a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(15);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_270DA54;
  Block::setSolid((Block *)v3, 0);
  Block::setIsInteraction((Block *)v3, 1);
  *(_DWORD *)(v3 + 20) = 8;
  *(_DWORD *)(v3 + 24) = 0x2000000;
  *(_DWORD *)(v3 + 28) = 0;
  return v3;
}


void __fastcall LeverBlock::~LeverBlock(LeverBlock *this)
{
  LeverBlock::~LeverBlock(this);
}
