

int __fastcall FurnaceBlock::getComparatorSignal(FurnaceBlock *this, BlockSource *a2, const BlockPos *a3, signed __int8 a4, int a5)
{
  const BlockPos *v5; // r5@1
  BlockSource *v6; // r6@1
  Block *v7; // r7@1
  signed __int8 v8; // r4@1
  int v9; // r0@1
  int result; // r0@2

  v5 = a3;
  v6 = a2;
  v7 = this;
  v8 = a4;
  v9 = BlockSource::getBlockEntity(a2, a3);
  if ( v9 )
    result = j_j_j__ZN9Container30getRedstoneSignalFromContainerEv((Container *)(v9 + 104));
  else
    result = j_j_j__ZNK5Block19getComparatorSignalER11BlockSourceRK8BlockPosai(v7, v6, v5, v8, a5);
  return result;
}


void __fastcall FurnaceBlock::~FurnaceBlock(FurnaceBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall FurnaceBlock::animateTick(int result, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r4@1
  Random *v5; // r6@1
  unsigned __int64 *v7; // r5@2
  unsigned int v8; // r0@2
  unsigned int v13; // r8@2
  int v14; // r10@2
  int v15; // r11@2
  int v19; // r0@2
  int v20; // r4@2
  float *v21; // r5@3
  int *v22; // r0@3
  int v23; // r6@7
  float v24; // [sp+10h] [bp-98h]@4
  float v25; // [sp+1Ch] [bp-8Ch]@3
  float v26; // [sp+28h] [bp-80h]@6
  float v27; // [sp+34h] [bp-74h]@5

  v4 = a2;
  v5 = a4;
  _R7 = a3;
  if ( *(_BYTE *)(result + 641) )
  {
    v7 = (unsigned __int64 *)Block::getBlockState(result, 15);
    v8 = BlockSource::getData(v4, _R7);
    __asm { VLDR            S0, [R7] }
    v13 = v8;
    __asm
    {
      VLDR            S2, [R7,#4]
      VCVT.F32.S32    S16, S2
    }
    v14 = *v7 >> 32;
    v15 = *v7;
    __asm { VCVT.F32.S32    S18, S0 }
    _R5 = Random::_genRandInt32(v5);
    _R7 = *((_DWORD *)_R7 + 2);
    _R0 = Random::_genRandInt32(v5);
      VMOV            S0, R0
      VLDR            D1, =2.32830644e-10
      VMOV            S4, R5
      VLDR            S6, =0.6
      VCVT.F64.U32    D0, S0
      VCVT.F64.U32    D2, S4
      VMUL.F64        D0, D0, D1
      VMUL.F64        D1, D2, D1
      VCVT.F32.F64    S0, D0
      VMOV            S10, R7
      VLDR            S24, =-0.02
      VMOV.F32        S8, #0.5
      VLDR            S30, =1.02
      VMUL.F32        S0, S0, S6
      VLDR            S6, =-0.3
      VCVT.F32.F64    S2, D1
      VMOV.F32        S4, #0.375
      VCVT.F32.S32    S20, S10
      VADD.F32        S22, S0, S6
      VADD.F32        S26, S18, S24
      VADD.F32        S28, S18, S8
      VADD.F32        S18, S18, S30
      VMUL.F32        S2, S2, S4
      VADD.F32        S4, S20, S8
      VADD.F32        S16, S2, S16
      VADD.F32        S17, S4, S22
    v19 = BlockSource::getLevel(v4);
    __asm { VADD.F32        S4, S28, S22 }
    v20 = v19;
      VADD.F32        S0, S20, S30
      VADD.F32        S2, S20, S24
      VSTR            S26, [SP,#0xA8+var_74]
      VSTR            S16, [SP,#0xA8+var_70]
    result = (v13 >> (1 - v14 + v15)) & (0xFu >> (4 - v14));
      VSTR            S18, [SP,#0xA8+var_80]
      VSTR            S16, [SP,#0xA8+var_7C]
      VSTR            S4, [SP,#0xA8+var_8C]
      VSTR            S16, [SP,#0xA8+var_88]
      VSTR            S4, [SP,#0xA8+var_98]
      VSTR            S16, [SP,#0xA8+var_94]
      VSTR            S17, [SP,#0xA8+var_6C]
      VSTR            S17, [SP,#0xA8+var_78]
      VSTR            S2, [SP,#0xA8+var_84]
      VSTR            S0, [SP,#0xA8+var_90]
    switch ( result )
      case 2:
        v21 = &v25;
        v22 = (int *)&Vec3::ZERO;
        goto LABEL_7;
      case 3:
        v21 = &v24;
      case 4:
        v21 = &v27;
      case 5:
        v21 = &v26;
LABEL_7:
        v23 = *v22;
        Level::addParticle(v20, 4, (int)v21);
        result = Level::addParticle(v20, 7, (int)v21);
        break;
      default:
        return result;
  }
  return result;
}


signed int __fastcall FurnaceBlock::isContainerBlock(FurnaceBlock *this)
{
  return 1;
}


int __fastcall FurnaceBlock::getPlacementDataValue(FurnaceBlock *this, Entity *a2, const BlockPos *a3, signed __int8 a4, const Vec3 *a5, int a6)
{
  FurnaceBlock *v6; // r4@1
  float v12; // r1@1
  int v13; // r0@1
  BlockState *v14; // r0@4
  __int64 v15; // r4@4
  signed int v16; // r1@4
  int v17; // r0@4
  BlockState *v18; // r0@5
  __int64 v19; // r4@5
  BlockState *v20; // r0@6
  __int64 v21; // r4@6
  BlockState *v22; // r0@7
  __int64 v23; // r4@7
  int v25; // [sp+0h] [bp-18h]@1

  v6 = this;
  Entity::getRotation((Entity *)&v25, (int)a2);
  __asm
  {
    VLDR            S0, =0.011111
    VMOV.F32        S4, #0.5
    VLDR            S2, [SP,#0x18+var_14]
    VMUL.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  v13 = mce::Math::floor(_R0, v12) & 3;
  switch ( v13 )
    case 1:
      v18 = (BlockState *)Block::getBlockState((int)v6, 15);
      v19 = *(_QWORD *)v18;
      BlockState::getMask(v18);
      v16 = 5;
      v17 = v19 + 1 - HIDWORD(v19);
      break;
    case 2:
      v20 = (BlockState *)Block::getBlockState((int)v6, 15);
      v21 = *(_QWORD *)v20;
      BlockState::getMask(v20);
      v16 = 3;
      v17 = v21 + 1 - HIDWORD(v21);
    case 3:
      v14 = (BlockState *)Block::getBlockState((int)v6, 15);
      v15 = *(_QWORD *)v14;
      BlockState::getMask(v14);
      v16 = 4;
      v17 = v15 + 1 - HIDWORD(v15);
    default:
      v22 = (BlockState *)Block::getBlockState((int)v6, 15);
      v23 = *(_QWORD *)v22;
      BlockState::getMask(v22);
      v16 = 2;
      v17 = v23 + 1 - HIDWORD(v23);
  return (unsigned __int8)(v16 << v17);
}


int __fastcall FurnaceBlock::FurnaceBlock(int a1, const void **a2, char a3, char a4)
{
  int v4; // r4@1
  char v5; // r5@1
  char v6; // r6@1
  const void **v7; // r7@1
  int v8; // r0@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = Material::getMaterial(3);
  EntityBlock::EntityBlock(v4, v7, v6, v8);
  *(_DWORD *)v4 = &off_270BC2C;
  *(_BYTE *)(v4 + 641) = v5;
  *(_DWORD *)(v4 + 32) = 1;
  Block::setIsInteraction((Block *)v4, 1);
  return v4;
}


void __fastcall FurnaceBlock::~FurnaceBlock(FurnaceBlock *this)
{
  FurnaceBlock::~FurnaceBlock(this);
}


signed int __fastcall FurnaceBlock::getMappedFace(FurnaceBlock *this, int a2, int a3)
{
  unsigned __int8 v3; // r6@1
  int v4; // r5@1
  FurnaceBlock *v5; // r4@1
  signed int result; // r0@2
  unsigned __int64 *v7; // r0@3

  v3 = a3;
  v4 = a2;
  v5 = this;
  if ( (unsigned __int8)a2 >= 2u )
  {
    v7 = (unsigned __int64 *)Block::getBlockState((int)this, 15);
    if ( v4 == ((0xFu >> (4 - (*v7 >> 32))) & (v3 >> (*v7 + 1 - (*v7 >> 32)))) )
    {
      result = 5;
      if ( !*((_BYTE *)v5 + 641) )
        result = 3;
    }
    else
      result = 2;
  }
  else
    result = 1;
  return result;
}


signed int __fastcall FurnaceBlock::isCraftingBlock(FurnaceBlock *this)
{
  return 1;
}


int __fastcall FurnaceBlock::onRemove(FurnaceBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  Block *v4; // r6@1
  const BlockPos *v5; // r4@1
  Level *v6; // r0@1
  FurnaceBlockEntity *v7; // r0@2

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Level *)BlockSource::getLevel(a2);
  if ( !Level::isClientSide(v6) )
  {
    v7 = (FurnaceBlockEntity *)BlockSource::getBlockEntity(v3, v5);
    if ( v7 )
      FurnaceBlockEntity::onFurnaceBlockRemoved(v7, v3);
  }
  return j_j_j__ZNK5Block8onRemoveER11BlockSourceRK8BlockPos(v4, v3, v5);
}


signed int __fastcall FurnaceBlock::hasComparatorSignal(FurnaceBlock *this)
{
  return 1;
}


int __fastcall FurnaceBlock::onPlace(FurnaceBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  signed int v5; // r1@1
  unsigned __int8 v6; // r0@3
  char v8; // [sp+8h] [bp-18h]@3
  unsigned __int8 v9; // [sp+9h] [bp-17h]@3
  char v10; // [sp+Ch] [bp-14h]@1
  unsigned __int8 v11; // [sp+Dh] [bp-13h]@1

  v3 = a3;
  v4 = a2;
  BlockSource::getBlockAndData((BlockSource *)&v10, a2, (int)a3);
  v5 = -2;
  if ( v11 < 2u )
    v5 = 13;
  v6 = (v11 + v5) % 4 + 2;
  v11 = v6;
  v8 = v10;
  v9 = v6;
  return BlockSource::setBlockAndData((int)v4, v3, (int)&v8, 3, 0);
}


signed int __fastcall FurnaceBlock::isInteractiveBlock(FurnaceBlock *this)
{
  return 1;
}


int __fastcall FurnaceBlock::setLit(FurnaceBlock *this, int a2, BlockSource *a3, const BlockPos *a4)
{
  FurnaceBlock *v4; // r6@1
  BlockSource *v5; // r4@1
  BlockSource *v6; // r5@1
  int result; // r0@1
  _DWORD *v8; // r0@3
  char v9; // r0@5
  char v10; // [sp+8h] [bp-18h]@5
  char v11; // [sp+9h] [bp-17h]@5
  char v12; // [sp+Ch] [bp-14h]@1
  char v13; // [sp+Dh] [bp-13h]@5

  v4 = this;
  v5 = a3;
  v6 = (BlockSource *)a2;
  BlockSource::getBlockAndData((BlockSource *)&v12, (const BlockPos *)a2, (int)a3);
  result = BlockSource::getBlockEntity(v6, v5);
  if ( result )
  {
    result = BlockEntity::isType(result, 1);
    if ( result == 1 )
    {
      v8 = &Block::mFurnace;
      if ( v4 )
        v8 = &Block::mLitFurnace;
      v9 = *(_BYTE *)(*v8 + 4);
      v12 = v9;
      v10 = v9;
      v11 = v13;
      result = BlockSource::setBlockAndData((int)v6, v5, (int)&v10, 3, 0);
    }
  }
  return result;
}


signed int __fastcall FurnaceBlock::use(FurnaceBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  Entity *v4; // r4@1
  const BlockPos *v5; // r5@1
  Level *v6; // r0@2
  BlockSource *v7; // r0@3
  int v8; // r0@3
  BlockEntity *v9; // r5@3
  void (__fastcall *v10)(Entity *, char *); // r6@5
  char *v11; // r0@5

  v4 = a2;
  v5 = a3;
  if ( Player::canUseAbility((int)a2, &Abilities::OPEN_CONTAINERS) == 1 )
  {
    v6 = (Level *)Entity::getLevel(v4);
    if ( !Level::isClientSide(v6) )
    {
      v7 = (BlockSource *)Entity::getRegion(v4);
      v8 = BlockSource::getBlockEntity(v7, v5);
      v9 = (BlockEntity *)v8;
      if ( v8 )
      {
        if ( BlockEntity::isType(v8, 1) == 1 )
        {
          v10 = *(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v4 + 1292);
          v11 = BlockEntity::getPosition(v9);
          v10(v4, v11);
        }
      }
    }
  }
  return 1;
}
