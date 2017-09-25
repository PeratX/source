

signed int __fastcall ComparatorBlock::isInteractiveBlock(ComparatorBlock *this)
{
  return 1;
}


int __fastcall ComparatorBlock::ComparatorBlock(int a1, const void **a2, int a3, char a4)
{
  int v4; // r4@1
  char v5; // r6@1
  int v6; // r5@1
  const void **v7; // r7@1
  int v8; // r0@1
  int *v14; // r2@1
  float v16; // [sp+0h] [bp-28h]@1
  int v17; // [sp+4h] [bp-24h]@1
  int v18; // [sp+8h] [bp-20h]@1
  signed int v19; // [sp+Ch] [bp-1Ch]@1
  signed int v20; // [sp+10h] [bp-18h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = Material::getMaterial(15);
  EntityBlock::EntityBlock(v4, v7, v6, v8);
  *(_DWORD *)v4 = &loc_27068CC;
  *(_DWORD *)(v4 + 32) = 12;
  v18 = 1065353216;
  v19 = 1040187392;
  v20 = 1065353216;
  Block::setVisualShape((Block *)v4, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&v18);
  *(_DWORD *)(v4 + 20) = 8;
  *(_DWORD *)(v4 + 24) = 0x2000000;
  *(_DWORD *)(v4 + 28) = 0;
  Block::setSolid((Block *)v4, 0);
  Block::setIsInteraction((Block *)v4, 1);
  *(_BYTE *)(v4 + 641) = v5;
  v17 = 1061997773;
  _R0 = Material::getTranslucency(*(Material **)(v4 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v14 = (int *)&v16;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x28+var_28]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v14 = &v17;
  Block::mTranslucency[v6] = *v14;
  return v4;
}


int __fastcall ComparatorBlock::getPlacementDataValue(ComparatorBlock *this, Entity *_R1, const BlockPos *a3, signed __int8 a4, const Vec3 *a5, int a6)
{
  __asm
  {
    VLDR            S0, =0.011111
    VMOV.F32        S4, #0.5
    VLDR            S2, [R1,#0x7C]
    VMUL.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  return ((unsigned __int8)mce::Math::floor(_R0, *(float *)&_R1) + 2) & 3;
}


void __fastcall ComparatorBlock::~ComparatorBlock(ComparatorBlock *this)
{
  ComparatorBlock::~ComparatorBlock(this);
}


signed int __fastcall ComparatorBlock::shouldConnectToRedstone(ComparatorBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  return 1;
}


_BOOL4 __fastcall ComparatorBlock::isSubtractMode(ComparatorBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  const BlockPos *v4; // r4@1
  BlockState *v5; // r6@1
  unsigned __int8 v7; // [sp+7h] [bp-11h]@1

  v3 = a2;
  v4 = a3;
  v5 = (BlockState *)Block::getBlockState((int)this, 27);
  v7 = BlockSource::getData(v3, v4);
  return BlockState::getBool(v5, &v7);
}


int __fastcall ComparatorBlock::getDirectSignal(ComparatorBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  BlockSource *v4; // r7@1
  int v5; // r8@1
  const BlockPos *v6; // r6@1
  ComparatorBlock *v7; // r4@1
  unsigned __int64 *v8; // r5@1
  int *v9; // r0@2
  int result; // r0@4

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = this;
  v8 = (unsigned __int64 *)Block::getBlockState((int)this, 12);
  if ( Direction::DIRECTION_FACING[(BlockSource::getData(v4, v6) >> (*v8 + 1 - (*v8 >> 32))) & (0xFu >> (4 - (*v8 >> 32)))] == v5 )
  {
    v9 = (int *)&Redstone::SIGNAL_NONE;
    if ( *((_BYTE *)v7 + 641) )
      v9 = (int *)&Redstone::SIGNAL_MAX;
    result = *v9;
  }
  else
    result = 0;
  return result;
}


int __fastcall ComparatorBlock::onPlace(ComparatorBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  ComparatorBlock *v5; // r6@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  Block::onPlace(this, a2, a3);
  return j_j_j__ZNK15ComparatorBlock15_installCircuitER11BlockSourceRK8BlockPosb(v5, v4, v3, 0);
}


ComparatorCapacitor *__fastcall ComparatorBlock::_refreshOutputState(ComparatorBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  const BlockPos *v4; // r6@1
  BlockSource *v5; // r7@1
  ComparatorBlock *v6; // r9@1
  int v7; // r10@1
  unsigned int v8; // r8@1
  Dimension *v9; // r0@1
  int v10; // r11@1
  ComparatorCapacitor *v11; // r4@1
  ComparatorCapacitor *result; // r0@2
  int v13; // r5@3
  BlockState *v14; // r0@7
  unsigned int v15; // r3@7
  char *v16; // r2@7
  BlockState *v17; // r0@10
  __int64 v18; // r4@10
  char v19; // r0@10
  BlockEntity *v20; // r0@12
  BlockEntity *v21; // r4@12
  char v22; // [sp+Ch] [bp-2Ch]@10
  char v23; // [sp+10h] [bp-28h]@7

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = BlockSource::getData(a2, a3);
  v9 = (Dimension *)BlockSource::getDimension(v5);
  v10 = Dimension::getCircuitSystem(v9);
  v11 = (ComparatorCapacitor *)CircuitSceneGraph::getComponent((CircuitSceneGraph *)(v10 + 4), v4, 0x4D434352uLL);
  if ( v11
    || (result = (ComparatorCapacitor *)CircuitSceneGraph::getFromPendingAdd(
                                          (CircuitSceneGraph *)(v10 + 4),
                                          v4,
                                          0x4D434352uLL),
        (v11 = result) != 0) )
  {
    *(_BYTE *)v10 = 1;
    v13 = ComparatorCapacitor::getOldStrength(v11);
    if ( v13 == v7 && ComparatorCapacitor::isSubtractMode(v11) )
    {
LABEL_15:
      result = 0;
      *(_BYTE *)v10 = 0;
      return result;
    }
    if ( v7 || v13 < 1 )
      if ( v7 < 1 || v13 )
      {
LABEL_12:
        v20 = (BlockEntity *)BlockSource::getBlockEntity(v5, v4);
        v21 = v20;
        if ( v20 )
        {
          if ( *(_DWORD *)BlockEntity::getType(v20) == 12 )
            (*(void (__fastcall **)(BlockEntity *, int))(*(_DWORD *)v21 + 120))(v21, v7);
        }
        goto LABEL_15;
      }
      v17 = (BlockState *)Block::getBlockState((int)v6, 28);
      v18 = *(_QWORD *)v17;
      v19 = BlockState::getMask(v17);
      v22 = *(_BYTE *)(Block::mPoweredComparator + 4);
      v16 = &v22;
      LOBYTE(v15) = v8 & ~v19 | (1 << (v18 + 1 - BYTE4(v18)));
    else
      v14 = (BlockState *)Block::getBlockState((int)v6, 28);
      v15 = v8 & ~BlockState::getMask(v14);
      v23 = *(_BYTE *)(Block::mUnpoweredComparator + 4);
      v16 = &v23;
    BlockSource::setBlockAndData((int)v5, v4, v16, v15, 3, 0);
    goto LABEL_12;
  }
  return result;
}


void __fastcall ComparatorBlock::~ComparatorBlock(ComparatorBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall ComparatorBlock::triggerEvent(ComparatorBlock *this, BlockSource *a2, const BlockPos *a3, int a4, int a5)
{
  const BlockPos *v5; // r6@1
  BlockSource *v6; // r7@1
  int result; // r0@1

  v5 = a3;
  v6 = a2;
  EntityBlock::triggerEvent(this, a2, a3, a4, a5);
  result = BlockSource::getBlockEntity(v6, v5);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 72))();
  return result;
}


int __fastcall ComparatorBlock::getSignal(ComparatorBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  BlockSource *v4; // r7@1
  int v5; // r8@1
  const BlockPos *v6; // r6@1
  ComparatorBlock *v7; // r4@1
  unsigned __int64 *v8; // r5@1
  int *v9; // r0@2
  int result; // r0@4

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = this;
  v8 = (unsigned __int64 *)Block::getBlockState((int)this, 12);
  if ( Direction::DIRECTION_FACING[(BlockSource::getData(v4, v6) >> (*v8 + 1 - (*v8 >> 32))) & (0xFu >> (4 - (*v8 >> 32)))] == v5 )
  {
    v9 = (int *)&Redstone::SIGNAL_NONE;
    if ( *((_BYTE *)v7 + 641) )
      v9 = (int *)&Redstone::SIGNAL_MAX;
    result = *v9;
  }
  else
    result = 0;
  return result;
}


int __fastcall ComparatorBlock::mayPlace(ComparatorBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  Block *v5; // r6@1
  int v6; // r0@1
  int v7; // r1@1
  int v8; // r2@1
  int result; // r0@2
  int v10; // [sp+4h] [bp-1Ch]@1
  int v11; // [sp+8h] [bp-18h]@1
  int v12; // [sp+Ch] [bp-14h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  v8 = *((_DWORD *)a3 + 2);
  v10 = v6;
  v11 = v7 - 1;
  v12 = v8;
  if ( BlockSource::canProvideSupport(v4, (int)&v10) == 1 )
    result = Block::mayPlace(v5, v4, v3);
  else
    result = 0;
  return result;
}


signed int __fastcall ComparatorBlock::canSurvive(ComparatorBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  Block *v5; // r6@1
  int v6; // r0@1
  int v7; // r1@1
  int v8; // r2@1
  signed int result; // r0@2
  int v10; // [sp+4h] [bp-1Ch]@1
  int v11; // [sp+8h] [bp-18h]@1
  int v12; // [sp+Ch] [bp-14h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  v8 = *((_DWORD *)a3 + 2);
  v10 = v6;
  v11 = v7 - 1;
  v12 = v8;
  if ( BlockSource::canProvideSupport(v4, (int)&v10) == 1 )
    result = Block::canSurvive(v5, v4, v3);
  else
    result = 0;
  return result;
}


signed int __fastcall ComparatorBlock::isSignalSource(ComparatorBlock *this)
{
  return 1;
}


signed int __fastcall ComparatorBlock::use(ComparatorBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  ComparatorBlock *v4; // r11@1
  Entity *v5; // r8@1
  const BlockPos *v6; // r4@1
  BlockSource *v7; // r9@2
  BlockState *v8; // r0@2
  BlockState *v9; // r0@2
  BlockState *v10; // r0@2
  unsigned __int8 v11; // r5@2
  int v12; // r6@2
  Level *v13; // r0@2
  Dimension *v14; // r0@3
  int v15; // r6@3
  int v16; // r10@3
  int v17; // r5@5
  BlockState *v18; // r0@5
  char v19; // r1@5 OVERLAPPED
  char v20; // r2@5 OVERLAPPED
  signed int v21; // r3@5
  unsigned __int8 v22; // r5@7
  int v23; // r0@7
  int v24; // r5@8
  int v25; // r1@8
  int v26; // r2@8
  int v27; // r1@8
  _BOOL4 v29; // [sp+Ch] [bp-64h]@2
  _BOOL4 v30; // [sp+10h] [bp-60h]@2
  char v31; // [sp+14h] [bp-5Ch]@10
  unsigned __int8 v32; // [sp+15h] [bp-5Bh]@10
  int v33; // [sp+18h] [bp-58h]@8
  signed int v34; // [sp+1Ch] [bp-54h]@8
  int v35; // [sp+20h] [bp-50h]@8
  char v36; // [sp+24h] [bp-4Ch]@8
  int v37; // [sp+28h] [bp-48h]@8
  int v38; // [sp+2Ch] [bp-44h]@8
  int v39; // [sp+30h] [bp-40h]@8
  int v40; // [sp+34h] [bp-3Ch]@8
  int v41; // [sp+38h] [bp-38h]@8
  char v42; // [sp+3Ch] [bp-34h]@8
  unsigned __int8 v43; // [sp+4Bh] [bp-25h]@2

  v4 = this;
  v5 = a2;
  v6 = a3;
  if ( Player::canUseAbility((int)a2, &Abilities::DOORS_AND_SWITCHES) == 1 )
  {
    v7 = (BlockSource *)Entity::getRegion(v5);
    v43 = BlockSource::getData(v7, v6);
    v8 = (BlockState *)Block::getBlockState((int)v4, 27);
    v30 = BlockState::getBool(v8, &v43);
    v9 = (BlockState *)Block::getBlockState((int)v4, 28);
    v29 = BlockState::getBool(v9, &v43);
    v10 = (BlockState *)Block::getBlockState((int)v4, 27);
    v11 = v43;
    v12 = !v30 << (*(_QWORD *)v10 + 1 - (unsigned int)(*(_QWORD *)v10 >> 32));
    v43 = v11 & ~(unsigned __int8)BlockState::getMask(v10) | v12;
    v13 = (Level *)BlockSource::getLevel(v7);
    if ( !Level::isClientSide(v13) )
    {
      v14 = (Dimension *)BlockSource::getDimension(v7);
      v15 = Dimension::getCircuitSystem(v14);
      v16 = CircuitSceneGraph::getComponent((CircuitSceneGraph *)(v15 + 4), v6, 0x4D434352uLL);
      if ( v16 || (v16 = CircuitSceneGraph::getFromPendingAdd((CircuitSceneGraph *)(v15 + 4), v6, 0x4D434352uLL)) != 0 )
      {
        *(_BYTE *)v15 = 1;
        v17 = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
        v18 = (BlockState *)Block::getBlockState((int)v4, 28);
        *(_QWORD *)&v19 = *(_QWORD *)v18;
        v21 = 0;
        if ( v17 > 0 )
          v21 = 1;
        v22 = v43;
        v43 = v22 & ~(unsigned __int8)BlockState::getMask(v18) | ((v21 | v29) << (v19 + 1 - v20));
        ComparatorCapacitor::setMode(v16, !v30);
        v23 = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
        ComparatorBlock::_refreshOutputState(v4, v7, v6, v23);
        *(_BYTE *)v15 = 0;
      }
    }
    v24 = BlockSource::getLevel(v7);
    v33 = 1056964608;
    v34 = 1056964608;
    v35 = 1056964608;
    BlockPos::BlockPos((int)&v36, (int)&v33);
    v25 = *((_DWORD *)v6 + 1);
    v26 = *((_DWORD *)v6 + 2);
    v39 = *(_DWORD *)v6 + *(_DWORD *)&v36;
    v40 = v37 + v25;
    v41 = v38 + v26;
    Vec3::Vec3((int)&v42, (int)&v39);
    v27 = 550;
    if ( v30 )
      v27 = 500;
    Level::broadcastDimensionEvent(v24, v7, 3500, (int)&v42, v27);
    v31 = *((_BYTE *)v4 + 4);
    v32 = v43;
    BlockSource::setBlockAndData((int)v7, v6, (int)&v31, 3, (int)v5);
  }
  return 1;
}


int __fastcall ComparatorBlock::_installCircuit(ComparatorBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  BlockSource *v4; // r5@1
  ComparatorBlock *v5; // r8@1
  int v6; // r9@1
  const BlockPos *v7; // r4@1
  Level *v8; // r0@1
  int result; // r0@1
  unsigned __int64 *v10; // r7@2
  unsigned int v11; // r6@2
  Dimension *v12; // r0@2
  int v13; // r0@2
  ProducerComponent *v14; // r7@2
  BlockEntity *v15; // r0@4
  BlockEntity *v16; // r6@4
  int v17; // r0@6
  BlockState *v18; // r6@7
  int v19; // r0@7
  unsigned __int8 v20; // [sp+3h] [bp-1Dh]@7

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v8);
  if ( !result )
  {
    v10 = (unsigned __int64 *)Block::getBlockState((int)v5, 12);
    v11 = (BlockSource::getData(v4, v7) >> (1 - (*v10 >> 32) + *v10)) & (0xFu >> (4 - (*v10 >> 32)));
    v12 = (Dimension *)BlockSource::getDimension(v4);
    v13 = Dimension::getCircuitSystem(v12);
    result = CircuitSystem::create<ComparatorCapacitor>(v13, v7, (int)v4, Direction::DIRECTION_FACING[v11]);
    v14 = (ProducerComponent *)result;
    if ( result )
    {
      if ( v6 == 1 )
      {
        v15 = (BlockEntity *)BlockSource::getBlockEntity(v4, v7);
        v16 = v15;
        if ( v15 )
        {
          if ( *(_DWORD *)BlockEntity::getType(v15) == 12 )
          {
            v17 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v16 + 116))(v16);
            *((_DWORD *)v14 + 16) = v17;
            *((_DWORD *)v14 + 13) = v17;
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v14 + 16))(v14);
          }
        }
      }
      ProducerComponent::allowAttachments(v14, 1);
      v18 = (BlockState *)Block::getBlockState((int)v5, 27);
      v20 = BlockSource::getData(v4, v7);
      v19 = BlockState::getBool(v18, &v20);
      result = ComparatorCapacitor::setMode((int)v14, v19);
    }
  }
  return result;
}


int __fastcall ComparatorBlock::neighborChanged(ComparatorBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  Block *v4; // r6@1
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r5@1
  int result; // r0@1
  int v8; // [sp+0h] [bp-60h]@2
  int v9; // [sp+8h] [bp-58h]@6
  void *v10; // [sp+24h] [bp-3Ch]@4
  void *ptr; // [sp+34h] [bp-2Ch]@2

  v4 = this;
  v5 = a3;
  v6 = a2;
  result = (*(int (**)(void))(*(_DWORD *)this + 324))();
  if ( !result )
  {
    ItemInstance::ItemInstance((ItemInstance *)&v8, Item::mComparator);
    Block::popResource(v4, v6, v5, (const ItemInstance *)&v8);
    if ( ptr )
      operator delete(ptr);
    if ( v10 )
      operator delete(v10);
    if ( v9 )
      (*(void (**)(void))(*(_DWORD *)v9 + 4))();
    v9 = 0;
    result = BlockSource::removeBlock(v6, v5);
  }
  return result;
}


ComparatorCapacitor *__fastcall ComparatorBlock::onRedstoneUpdate(ComparatorBlock *this, BlockSource *a2, const BlockPos *a3, int a4, bool a5)
{
  BlockSource *v5; // r6@1
  ComparatorBlock *v6; // r7@1
  int v7; // r4@1
  const BlockPos *v8; // r5@1
  Level *v9; // r0@1
  ComparatorCapacitor *result; // r0@1

  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = (Level *)BlockSource::getLevel(a2);
  result = (ComparatorCapacitor *)Level::isClientSide(v9);
  if ( !result )
    result = j_j_j__ZNK15ComparatorBlock19_refreshOutputStateER11BlockSourceRK8BlockPosi(v6, v5, v8, v7);
  return result;
}


int __fastcall ComparatorBlock::canBeSilkTouched(ComparatorBlock *this)
{
  return 0;
}
