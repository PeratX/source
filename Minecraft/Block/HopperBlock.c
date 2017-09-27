

int __fastcall HopperBlock::canBeSilkTouched(HopperBlock *this)
{
  return 0;
}


signed int __fastcall HopperBlock::addAABBs(int a1, int a2, int a3, AABB *a4, int a5)
{
  int v5; // r11@1
  int v6; // r6@1
  AABB *v7; // r9@1
  AABB *v8; // r0@1
  AABB *v9; // r0@1
  AABB *v10; // r0@1
  AABB *v11; // r0@1
  AABB *v12; // r0@1
  int v14; // [sp+0h] [bp-B8h]@1
  int v15; // [sp+Ch] [bp-ACh]@1
  int v16; // [sp+10h] [bp-A8h]@1
  int v17; // [sp+14h] [bp-A4h]@1
  char v18; // [sp+18h] [bp-A0h]@1
  int v19; // [sp+24h] [bp-94h]@1
  int v20; // [sp+28h] [bp-90h]@1
  int v21; // [sp+2Ch] [bp-8Ch]@1
  char v22; // [sp+30h] [bp-88h]@1
  int v23; // [sp+3Ch] [bp-7Ch]@1
  signed int v24; // [sp+40h] [bp-78h]@1
  int v25; // [sp+44h] [bp-74h]@1
  char v26; // [sp+48h] [bp-70h]@1
  int v27; // [sp+54h] [bp-64h]@1
  signed int v28; // [sp+58h] [bp-60h]@1
  int v29; // [sp+5Ch] [bp-5Ch]@1
  char v30; // [sp+60h] [bp-58h]@1
  int v31; // [sp+6Ch] [bp-4Ch]@1
  signed int v32; // [sp+70h] [bp-48h]@1
  signed int v33; // [sp+74h] [bp-44h]@1
  char v34; // [sp+78h] [bp-40h]@1

  v5 = a1;
  v6 = a3;
  v31 = 1065353216;
  v32 = 1059061760;
  v33 = 1065353216;
  v7 = a4;
  AABB::AABB((int)&v34, (int)&Vec3::ZERO, (int)&v31);
  Vec3::Vec3((int)&v30, v6);
  v8 = (AABB *)AABB::move((AABB *)&v34, (const Vec3 *)&v30);
  Block::addAABB(v5, v8, v7, a5);
  v27 = 1040187392;
  v28 = 1065353216;
  v29 = 1065353216;
  AABB::set((AABB *)&v34, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&v27);
  Vec3::Vec3((int)&v26, v6);
  v9 = (AABB *)AABB::move((AABB *)&v34, (const Vec3 *)&v26);
  Block::addAABB(v5, v9, v7, a5);
  v23 = 1065353216;
  v24 = 1065353216;
  v25 = 1040187392;
  AABB::set((AABB *)&v34, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&v23);
  Vec3::Vec3((int)&v22, v6);
  v10 = (AABB *)AABB::move((AABB *)&v34, (const Vec3 *)&v22);
  Block::addAABB(v5, v10, v7, a5);
  v19 = 1063256064;
  v20 = 0;
  v21 = 0;
  AABB::set((AABB *)&v34, (const Vec3 *)&v19, (const Vec3 *)&Vec3::ONE);
  Vec3::Vec3((int)&v18, v6);
  v11 = (AABB *)AABB::move((AABB *)&v34, (const Vec3 *)&v18);
  Block::addAABB(v5, v11, v7, a5);
  v15 = 0;
  v16 = 0;
  v17 = 1063256064;
  AABB::set((AABB *)&v34, (const Vec3 *)&v15, (const Vec3 *)&Vec3::ONE);
  Vec3::Vec3((int)&v14, v6);
  v12 = (AABB *)AABB::move((AABB *)&v34, (const Vec3 *)&v14);
  return Block::addAABB(v5, v12, v7, a5);
}


void __fastcall HopperBlock::onLoaded(HopperBlock *this, BlockSource *a2, const BlockPos *a3)
{
  HopperBlock::onLoaded(this, a2, a3);
}


int __fastcall HopperBlock::canProvideSupport(int a1, int a2, int a3, unsigned __int8 a4)
{
  int result; // r0@1

  result = a4;
  if ( a4 != 1 )
    result = 0;
  return result;
}


int __fastcall HopperBlock::onRemove(HopperBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  Block *v4; // r6@1
  const BlockPos *v5; // r4@1
  Level *v6; // r0@1
  int v7; // r0@2
  int v8; // r7@3
  void (__fastcall *v9)(int, BlockSource *, int *, signed int); // r9@3
  Dimension *v10; // r0@4
  CircuitSystem *v11; // r0@4
  int v13; // [sp+0h] [bp-28h]@3

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Level *)BlockSource::getLevel(a2);
  if ( !Level::isClientSide(v6) )
  {
    v7 = BlockSource::getBlockEntity(v3, v5);
    if ( v7 )
    {
      v8 = v7 + 104;
      v9 = *(void (__fastcall **)(int, BlockSource *, int *, signed int))(*(_DWORD *)(v7 + 104) + 40);
      Vec3::Vec3((int)&v13, (int)v5);
      v9(v8, v3, &v13, 1);
    }
    v10 = (Dimension *)BlockSource::getDimension(v3);
    v11 = (CircuitSystem *)Dimension::getCircuitSystem(v10);
    CircuitSystem::removeComponents(v11, v5);
  }
  return Block::onRemove(v4, v3, v5);
}


int __fastcall HopperBlock::_installCircuit(HopperBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  const BlockPos *v4; // r4@1
  Dimension *v5; // r0@1
  int v6; // r0@1
  int result; // r0@1

  v3 = a2;
  v4 = a3;
  v5 = (Dimension *)BlockSource::getDimension(a2);
  v6 = Dimension::getCircuitSystem(v5);
  result = CircuitSystem::create<ConsumerComponent>(v6, v4, (int)v3, 0);
  if ( result )
    *(_WORD *)(result + 41) = 1;
  return result;
}


int __fastcall HopperBlock::getPlacementDataValue(HopperBlock *this, Entity *a2, const BlockPos *a3, int a4, const Vec3 *a5, int a6)
{
  int v6; // r4@1
  BlockState *v7; // r0@1
  char v8; // r5@1 OVERLAPPED
  char v9; // r6@1 OVERLAPPED
  int v10; // r0@1
  int v11; // r2@1

  v6 = a4;
  v7 = (BlockState *)Block::getBlockState((int)this, 15);
  *(_QWORD *)&v8 = *(_QWORD *)v7;
  BlockState::getMask(v7);
  v10 = Facing::OPPOSITE_FACING[v6];
  v11 = (char)v10;
  if ( v10 == 1 )
    v11 = 0;
  return (unsigned __int8)(v11 << (v8 + 1 - v9));
}


__int64 __fastcall HopperBlock::getAttachedOffset(HopperBlock *this, int a2)
{
  HopperBlock *v2; // r4@1
  unsigned __int8 v3; // r5@1
  unsigned __int64 *v4; // r0@1
  unsigned int v5; // r0@1
  int v6; // r0@2
  __int64 result; // r0@2

  v2 = this;
  v3 = a2;
  v4 = (unsigned __int64 *)Block::getBlockState(Block::mHopper, 15);
  v5 = (0xFu >> (4 - (*v4 >> 32))) & (v3 >> (*v4 + 1 - (*v4 >> 32)));
  if ( v5 > 5 )
  {
    result = 0LL;
    *(_DWORD *)v2 = 0;
  }
  else
    v6 = 3 * v5;
    *(_DWORD *)v2 = Facing::DIRECTION[v6];
    result = *(_QWORD *)&Facing::DIRECTION[v6 + 1];
  *(_QWORD *)((char *)v2 + 4) = result;
  return result;
}


void __fastcall HopperBlock::~HopperBlock(HopperBlock *this)
{
  HopperBlock::~HopperBlock(this);
}


int __fastcall HopperBlock::getComparatorSignal(HopperBlock *this, BlockSource *a2, const BlockPos *a3, signed __int8 a4, int a5)
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


void __fastcall HopperBlock::onLoaded(HopperBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r4@1
  const BlockPos *v4; // r5@1
  Dimension *v5; // r0@1
  int v6; // r0@1
  int v7; // r0@1
  Level *v8; // r0@3
  HopperBlockEntity *v9; // r0@4

  v3 = a2;
  v4 = a3;
  v5 = (Dimension *)BlockSource::getDimension(a2);
  v6 = Dimension::getCircuitSystem(v5);
  v7 = CircuitSystem::create<ConsumerComponent>(v6, v4, (int)v3, 0);
  if ( v7 )
    *(_WORD *)(v7 + 41) = 1;
  v8 = (Level *)BlockSource::getLevel(v3);
  if ( !Level::isClientSide(v8) )
  {
    v9 = (HopperBlockEntity *)BlockSource::getBlockEntity(v3, v4);
    if ( v9 )
      j_j_j__ZN17HopperBlockEntity34checkForSmeltEverythingAchievementER11BlockSource(v9, v3);
  }
}


int __fastcall HopperBlock::onRedstoneUpdate(HopperBlock *this, BlockSource *a2, const BlockPos *a3, int a4, bool a5)
{
  HopperBlock *v5; // r8@1
  int v6; // r6@1
  BlockPos *v7; // r4@1
  BlockSource *v8; // r5@1
  unsigned __int8 v9; // r7@1
  BlockState *v10; // r0@1
  signed int v11; // r7@1
  int result; // r0@3
  Dimension *v13; // r0@4
  _BYTE *v14; // r0@4
  _BYTE *v15; // r10@4
  BlockState *v16; // r0@4
  __int64 v17; // r1@4
  char v18; // r7@4
  char v19; // r0@4
  char v20; // [sp+8h] [bp-28h]@4
  char v21; // [sp+9h] [bp-27h]@4
  char v22; // [sp+Ch] [bp-24h]@1
  char v23; // [sp+Dh] [bp-23h]@1
  unsigned __int8 v24; // [sp+Fh] [bp-21h]@1

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  BlockSource::getBlockAndData((BlockSource *)&v22, a2, (int)a3);
  v9 = v23;
  v10 = (BlockState *)Block::getBlockState(Block::mHopper, 36);
  v24 = v9;
  v11 = 0;
  if ( !v6 )
    v11 = 1;
  result = ~(BlockState::getBool(v10, &v24) ^ v11);
  if ( result & 1 )
  {
    v13 = (Dimension *)BlockSource::getDimension(v8);
    v14 = (_BYTE *)Dimension::getCircuitSystem(v13);
    v15 = v14;
    *v14 = 1;
    v16 = (BlockState *)Block::getBlockState((int)v5, 36);
    v17 = *(_QWORD *)v16;
    v18 = v23;
    v19 = v18 & ~(unsigned __int8)BlockState::getMask(v16) | ((v6 != 0) << (v17 + 1 - BYTE4(v17)));
    v23 = v19;
    v20 = v22;
    v21 = v19;
    result = BlockSource::setBlockAndData((int)v8, v7, (int)&v20, 4, 0);
    *v15 = 0;
  }
  return result;
}


unsigned int __fastcall HopperBlock::getAttachedFace(HopperBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = (unsigned __int8)this;
  v3 = (unsigned __int64 *)Block::getBlockState(Block::mHopper, 15);
  return (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
}


void __fastcall HopperBlock::~HopperBlock(HopperBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall HopperBlock::addCollisionShapes(int a1)
{
  (*(void (__cdecl **)(int))(*(_DWORD *)a1 + 28))(a1);
  return 1;
}


int __fastcall HopperBlock::onPlace(HopperBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  Dimension *v5; // r0@1
  int v6; // r0@1
  int result; // r0@1

  v3 = a3;
  v4 = a2;
  Block::onPlace(this, a2, a3);
  v5 = (Dimension *)BlockSource::getDimension(v4);
  v6 = Dimension::getCircuitSystem(v5);
  result = CircuitSystem::create<ConsumerComponent>(v6, v3, (int)v4, 0);
  if ( result )
    *(_WORD *)(result + 41) = 1;
  return result;
}


signed int __fastcall HopperBlock::isContainerBlock(HopperBlock *this)
{
  return 1;
}


signed int __fastcall HopperBlock::hasComparatorSignal(HopperBlock *this)
{
  return 1;
}


signed int __fastcall HopperBlock::use(HopperBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  Entity *v4; // r4@1
  const BlockPos *v5; // r5@1
  BlockSource *v6; // r0@2
  Level *v7; // r0@2
  BlockSource *v8; // r0@3
  int v9; // r0@3
  BlockEntity *v10; // r5@3
  void (__fastcall *v11)(Entity *, char *); // r6@5
  char *v12; // r0@5

  v4 = a2;
  v5 = a3;
  if ( Player::canUseAbility((int)a2, &Abilities::OPEN_CONTAINERS) == 1 )
  {
    v6 = (BlockSource *)Entity::getRegion(v4);
    v7 = (Level *)BlockSource::getLevel(v6);
    if ( !Level::isClientSide(v7) )
    {
      v8 = (BlockSource *)Entity::getRegion(v4);
      v9 = BlockSource::getBlockEntity(v8, v5);
      v10 = (BlockEntity *)v9;
      if ( v9 )
      {
        if ( BlockEntity::isType(v9, 15) == 1 )
        {
          v11 = *(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v4 + 1308);
          v12 = BlockEntity::getPosition(v10);
          v11(v4, v12);
        }
      }
    }
  }
  return 1;
}


signed __int64 __fastcall HopperBlock::getRedstoneProperty(HopperBlock *this, BlockSource *a2, const BlockPos *a3)
{
  return 0x800000LL;
}


_BOOL4 __fastcall HopperBlock::isTurnedOn(HopperBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  BlockState *v3; // r0@1
  unsigned __int8 v5; // [sp+7h] [bp-9h]@1

  v2 = (unsigned __int8)this;
  v3 = (BlockState *)Block::getBlockState(Block::mHopper, 36);
  v5 = v2;
  return !BlockState::getBool(v3, &v5);
}


int __fastcall HopperBlock::HopperBlock(int a1, const void **a2, int a3)
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
  v6 = Material::getMaterial(4);
  EntityBlock::EntityBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_270CC54;
  Block::setVisualShape((Block *)v3, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&Vec3::ONE);
  Block::setSolid((Block *)v3, 0);
  Block::setIsInteraction((Block *)v3, 1);
  *(_DWORD *)(v3 + 20) = 8;
  *(_DWORD *)(v3 + 24) = 524292;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 15;
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


signed int __fastcall HopperBlock::isInteractiveBlock(HopperBlock *this)
{
  return 1;
}
