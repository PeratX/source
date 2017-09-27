

signed int __fastcall ChestBlock::isInteractiveBlock(ChestBlock *this)
{
  return 1;
}


int __fastcall ChestBlock::shouldConnectToRedstone(ChestBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  int result; // r0@1

  result = *((_DWORD *)this + 161);
  if ( result != 1 )
    result = 0;
  return result;
}


int __fastcall ChestBlock::getPlacementDataValue(ChestBlock *this, Entity *a2, const BlockPos *a3, signed __int8 a4, const Vec3 *a5, int a6)
{
  ChestBlock *v6; // r4@1
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


signed int __fastcall ChestBlock::isContainerBlock(ChestBlock *this)
{
  return 1;
}


ChestBlockEntity *__fastcall ChestBlock::updateSignalStrength(ChestBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  BlockSource *v4; // r4@1
  ChestBlock *v5; // r5@1
  int v6; // r7@1
  const BlockPos *v7; // r6@1
  Level *v8; // r0@1
  ChestBlockEntity *result; // r0@1
  bool v10; // zf@1
  int v11; // r5@5
  Dimension *v12; // r0@9
  CircuitSystem *v13; // r0@9
  ChestBlockEntity *v14; // r6@9
  Dimension *v15; // r0@11
  CircuitSystem *v16; // r4@11
  char *v17; // r1@11

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (Level *)BlockSource::getLevel(a2);
  result = (ChestBlockEntity *)Level::isClientSide(v8);
  v10 = result == 0;
  if ( !result )
  {
    result = (ChestBlockEntity *)*((_DWORD *)v5 + 161);
    v10 = result == (ChestBlockEntity *)1;
  }
  if ( v10 )
    v11 = 0;
    if ( v6 > 0 )
      v11 = v6;
    if ( v6 > 15 )
      v11 = 15;
    v12 = (Dimension *)BlockSource::getDimension(v4);
    v13 = (CircuitSystem *)Dimension::getCircuitSystem(v12);
    CircuitSystem::setStrength(v13, v7, v11);
    result = (ChestBlockEntity *)BlockSource::getBlockEntity(v4, v7);
    v14 = result;
    if ( result )
    {
      result = (ChestBlockEntity *)ChestBlockEntity::isLargeChest(result);
      if ( result == (ChestBlockEntity *)1 )
      {
        v15 = (Dimension *)BlockSource::getDimension(v4);
        v16 = (CircuitSystem *)Dimension::getCircuitSystem(v15);
        v17 = ChestBlockEntity::getPairedChestPosition(v14);
        result = (ChestBlockEntity *)j_j_j__ZN13CircuitSystem11setStrengthERK8BlockPosi_0(
                                       v16,
                                       (const BlockPos *)v17,
                                       v11);
      }
    }
  return result;
}


signed int __fastcall ChestBlock::checkIsPathable(ChestBlock *this, Entity *a2, const BlockPos *a3, const BlockPos *a4)
{
  return 1;
}


unsigned int __fastcall ChestBlock::onLoaded(ChestBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  Level *v5; // r0@2
  Dimension *v6; // r0@3
  int v7; // r0@3
  int v8; // r0@3
  int v9; // r6@3
  unsigned int result; // r0@5
  char v11; // [sp+4h] [bp-1Ch]@6
  char v12; // [sp+5h] [bp-1Bh]@6
  char v13; // [sp+8h] [bp-18h]@5
  char v14; // [sp+9h] [bp-17h]@5

  v3 = a3;
  v4 = a2;
  if ( *((_DWORD *)this + 161) == 1 )
  {
    v5 = (Level *)BlockSource::getLevel(a2);
    if ( !Level::isClientSide(v5) )
    {
      v6 = (Dimension *)BlockSource::getDimension(v4);
      v7 = Dimension::getCircuitSystem(v6);
      v8 = CircuitSystem::create<ProducerComponent>(v7, v3, (int)v4, 0);
      v9 = v8;
      if ( v8 )
      {
        (*(void (**)(void))(*(_DWORD *)v8 + 16))();
        ProducerComponent::allowAttachments((ProducerComponent *)v9, 1);
        *(_BYTE *)(v9 + 41) = 1;
        (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v9 + 36))(v9, 1);
      }
    }
  }
  BlockSource::getBlockAndData((BlockSource *)&v13, v4, (int)v3);
  result = (unsigned __int8)(v14 - 2);
  if ( result >= 4 )
    v14 = 2;
    v11 = v13;
    v12 = 2;
    result = BlockSource::setBlockAndData((int)v4, v3, (int)&v11, 3, 0);
  return result;
}


ChestBlockEntity *__fastcall ChestBlock::onMove(ChestBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  BlockSource *v4; // r6@1
  const BlockPos *v5; // r5@1
  const BlockPos *v6; // r4@1
  ChestBlockEntity *result; // r0@1

  v4 = a2;
  v5 = a3;
  v6 = a4;
  result = (ChestBlockEntity *)BlockSource::getBlockEntity(a2, a3);
  if ( result )
    result = (ChestBlockEntity *)j_j_j__ZN16ChestBlockEntity6onMoveER11BlockSourceRK8BlockPosS4_(result, v4, v5, v6);
  return result;
}


void __fastcall ChestBlock::~ChestBlock(ChestBlock *this)
{
  ChestBlock::~ChestBlock(this);
}


signed int __fastcall ChestBlock::hasComparatorSignal(ChestBlock *this)
{
  return 1;
}


signed int __fastcall ChestBlock::getMappedFace(ChestBlock *this, int a2, int a3)
{
  int v3; // r4@1
  unsigned __int8 v4; // r5@1
  signed int result; // r0@2
  unsigned __int64 *v6; // r0@3
  unsigned int v7; // r1@3

  v3 = a2;
  v4 = a3;
  if ( (unsigned __int8)a2 >= 2u )
  {
    v6 = (unsigned __int64 *)Block::getBlockState((int)this, 15);
    v7 = (v4 >> (*v6 + 1 - (*v6 >> 32))) & (0xFu >> (4 - (*v6 >> 32)));
    result = 5;
    if ( v3 == v7 )
      result = 3;
  }
  else
    result = 1;
  return result;
}


signed int __fastcall ChestBlock::getSecondPart(ChestBlock *this, BlockSource *a2, const BlockPos *a3, BlockPos *a4)
{
  BlockPos *v4; // r4@1
  ChestBlockEntity *v5; // r0@1
  ChestBlockEntity *v6; // r5@1
  char *v7; // r0@3
  signed int result; // r0@3

  v4 = a4;
  v5 = (ChestBlockEntity *)BlockSource::getBlockEntity(a2, a3);
  v6 = v5;
  if ( v5 && ChestBlockEntity::isLargeChest(v5) == 1 )
  {
    v7 = ChestBlockEntity::getPairedChestPosition(v6);
    *(_DWORD *)v4 = *(_DWORD *)v7;
    *((_DWORD *)v4 + 1) = *((_DWORD *)v7 + 1);
    *((_DWORD *)v4 + 2) = *((_DWORD *)v7 + 2);
    result = 1;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall ChestBlock::detachesOnPistonMove(ChestBlock *this, BlockSource *a2, const BlockPos *a3)
{
  return 1;
}


signed int __fastcall ChestBlock::use(ChestBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  ChestBlock *v4; // r5@1
  Entity *v5; // r7@1
  const BlockPos *v6; // r4@1
  BlockSource *v7; // r0@2
  ChestBlockEntity *v8; // r6@2
  BlockSource *v9; // r8@3
  Level *v10; // r0@3
  int v11; // r7@6
  char *v12; // r0@7
  ChestBlockEntity *v13; // r0@7

  v4 = this;
  v5 = a2;
  v6 = a3;
  if ( Player::canUseAbility((int)a2, &Abilities::OPEN_CONTAINERS) != 1 )
    return 1;
  v7 = (BlockSource *)Entity::getRegion(v5);
  v8 = (ChestBlockEntity *)BlockSource::getBlockEntity(v7, v6);
  if ( v8 )
  {
    v9 = (BlockSource *)Entity::getRegion(v5);
    v10 = (Level *)Entity::getLevel(v5);
    if ( !Level::isClientSide(v10) && ChestBlockEntity::canOpen(v8, v9) == 1 )
    {
      ChestBlockEntity::openBy(v8, v5);
      if ( *((_DWORD *)v4 + 161) == 1 )
      {
        v11 = ChestBlockEntity::getOpenCount(v8);
        if ( ChestBlockEntity::isLargeChest(v8) == 1 )
        {
          v12 = ChestBlockEntity::getPairedChestPosition(v8);
          v13 = (ChestBlockEntity *)BlockSource::getBlockEntity(v9, (const BlockPos *)v12);
          if ( v13 )
            v11 += ChestBlockEntity::getOpenCount(v13);
        }
        ChestBlock::updateSignalStrength(v4, v9, v6, v11);
      }
    }
  }
  return 0;
}


int __fastcall ChestBlock::onPlace(ChestBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  ChestBlock *v5; // r6@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  Block::onPlace(this, a2, a3);
  return (*(int (__fastcall **)(ChestBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v5 + 188))(v5, v4, v3);
}


int __fastcall ChestBlock::onRemove(ChestBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  Block *v5; // r6@1
  BlockEntity *v6; // r0@1
  ChestBlockEntity *v7; // r7@1
  Level *v8; // r0@3
  void (__fastcall *v9)(ChestBlockEntity *, BlockSource *, int *, signed int); // r9@4
  int v11; // [sp+0h] [bp-28h]@4

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = (BlockEntity *)BlockSource::getBlockEntity(a2, a3);
  v7 = v6;
  if ( v6 )
  {
    if ( *(_DWORD *)BlockEntity::getType(v6) == 2 )
    {
      ChestBlockEntity::unpair(v7);
      v8 = (Level *)BlockSource::getLevel(v4);
      if ( !Level::isClientSide(v8) )
      {
        v9 = *(void (__fastcall **)(ChestBlockEntity *, BlockSource *, int *, signed int))(*(_DWORD *)v7 + 120);
        Vec3::Vec3((int)&v11, (int)v3);
        v9(v7, v4, &v11, 1);
      }
    }
  }
  return Block::onRemove(v5, v4, v3);
}


void __fastcall ChestBlock::~ChestBlock(ChestBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall ChestBlock::canBeSilkTouched(ChestBlock *this)
{
  return 0;
}


int __fastcall ChestBlock::ChestBlock(int a1, const void **a2, char a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r5@1
  char v7; // r6@1
  const void **v8; // r7@1
  int v9; // r0@1
  int v11; // [sp+4h] [bp-2Ch]@1
  signed int v12; // [sp+8h] [bp-28h]@1
  signed int v13; // [sp+Ch] [bp-24h]@1
  int v14; // [sp+10h] [bp-20h]@1
  int v15; // [sp+14h] [bp-1Ch]@1
  signed int v16; // [sp+18h] [bp-18h]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = Material::getMaterial(a5);
  EntityBlock::EntityBlock(v5, v8, v7, v9);
  *(_DWORD *)v5 = &loc_27058CC;
  *(_DWORD *)(v5 + 644) = v6;
  v14 = 1020054733;
  v15 = 0;
  v16 = 1020054733;
  v11 = 1064933786;
  v12 = 1064514356;
  v13 = 1064933786;
  Block::setVisualShape((Block *)v5, (const Vec3 *)&v14, (const Vec3 *)&v11);
  Block::setSolid((Block *)v5, 0);
  Block::setPushesOutItems((Block *)v5, 1);
  Block::setIsInteraction((Block *)v5, 1);
  *(_DWORD *)(v5 + 24) = 0x10000;
  *(_DWORD *)(v5 + 28) = 0;
  *(_DWORD *)(v5 + 32) = 2;
  return v5;
}


int __fastcall ChestBlock::getComparatorSignal(ChestBlock *this, BlockSource *a2, const BlockPos *a3, signed __int8 a4, int a5)
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
    result = j_j_j__ZN9Container30getRedstoneSignalFromContainerEv((Container *)(v9 + 112));
  else
    result = j_j_j__ZNK5Block19getComparatorSignalER11BlockSourceRK8BlockPosai(v7, v6, v5, v8, a5);
  return result;
}


int __fastcall ChestBlock::init(int result)
{
  Block::mTranslucency[*(_BYTE *)(result + 4)] = 1056964608;
  return result;
}
