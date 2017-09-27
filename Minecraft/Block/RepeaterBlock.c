

int __fastcall RepeaterBlock::RepeaterBlock(int a1, const void **a2, int a3, char a4)
{
  int v4; // r5@1
  int v5; // r4@1
  int *v11; // r2@1
  float v13; // [sp+4h] [bp-24h]@1
  int v14; // [sp+8h] [bp-20h]@1
  int v15; // [sp+Ch] [bp-1Ch]@1
  signed int v16; // [sp+10h] [bp-18h]@1
  signed int v17; // [sp+14h] [bp-14h]@1

  v4 = a3;
  v5 = a1;
  DiodeBlock::DiodeBlock(a1, a2, a3, a4);
  *(_DWORD *)v5 = &off_2712A94;
  *(_DWORD *)(v5 + 24) = 0x2000000;
  *(_DWORD *)(v5 + 28) = 0;
  v15 = 1065353216;
  v16 = 1040187392;
  v17 = 1065353216;
  Block::setVisualShape((Block *)v5, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&v15);
  *(_DWORD *)(v5 + 20) = 8;
  v14 = 1061997773;
  _R0 = Material::getTranslucency(*(Material **)(v5 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v11 = (int *)&v13;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x28+var_24]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v11 = &v14;
  Block::mTranslucency[v4] = *v11;
  Block::setIsInteraction((Block *)v5, 1);
  return v5;
}


int __fastcall RepeaterBlock::animateTick(RepeaterBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  RepeaterBlock *v4; // r5@1
  Random *v5; // r7@1
  int result; // r0@1
  BlockSource *v8; // r10@1
  unsigned __int64 *v9; // r4@2
  unsigned int v10; // r0@2
  unsigned int v15; // r9@2
  unsigned __int64 v16; // kr00_8@2
  int v22; // r4@2
  unsigned __int64 *v23; // r0@4
  int v27; // r0@5
  unsigned int v28; // [sp+Ch] [bp-64h]@2
  float v29; // [sp+1Ch] [bp-54h]@5

  v4 = this;
  v5 = a4;
  result = *((_BYTE *)this + 641);
  _R6 = a3;
  v8 = a2;
  if ( result )
  {
    v28 = BlockSource::getData(a2, a3);
    v9 = (unsigned __int64 *)Block::getBlockState((int)v4, 12);
    v10 = BlockSource::getData(v8, _R6);
    __asm { VLDR            S0, [R6] }
    v15 = v10;
    v16 = *v9;
    LOBYTE(v9) = *v9 >> 32;
    __asm { VCVT.F32.S32    S16, S0 }
    _R0 = Random::_genRandInt32(v5);
    __asm { VMOV            S0, R0 }
    _R8 = *((_DWORD *)_R6 + 1);
    __asm { VCVT.F64.U32    D9, S0 }
    __asm
    {
      VMOV            S0, R0
      VLDR            D11, =2.32830644e-10
      VCVT.F64.U32    D10, S0
    }
    _R6 = *((_DWORD *)_R6 + 2);
      VLDR            S14, =0.2
      VMUL.F64        D1, D9, D11
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D11
      VMUL.F64        D2, D10, D11
      VMOV.F32        S6, #-0.5
      VCVT.F32.F64    S2, D1
      VCVT.F32.F64    S4, D2
      VCVT.F32.F64    S0, D0
      VMOV            S10, R8
      VMOV            S12, R6
      VADD.F32        S2, S2, S6
      VADD.F32        S4, S4, S6
      VADD.F32        S0, S0, S6
      VLDR            S6, =0.4
      VCVT.F32.S32    S10, S10
    v22 = Direction::DIRECTION_FACING[(v15 >> (1 - (_BYTE)v9 + v16)) & (0xFu >> (4 - (_BYTE)v9))];
      VMOV.F32        S8, #0.5
      VCVT.F32.S32    S12, S12
      VMUL.F32        S2, S2, S14
      VMUL.F32        S4, S4, S14
      VMUL.F32        S0, S0, S14
      VADD.F32        S6, S10, S6
      VADD.F32        S1, S16, S8
      VADD.F32        S8, S12, S8
      VADD.F32        S16, S6, S4
      VADD.F32        S18, S1, S2
      VADD.F32        S20, S8, S0
    if ( Random::_genRandInt32(v5) & 0x8000000 )
      v23 = (unsigned __int64 *)Block::getBlockState((int)v4, 34);
      _R0 = (char *)&RepeaterBlock::DELAY_RENDER_OFFSETS
          + 4 * ((0xFu >> (4 - (*v23 >> 32))) & (v28 >> (*v23 + 1 - (*v23 >> 32))));
      __asm { VLDR            S0, [R0] }
    else
      __asm { VMOV.F32        S0, #-0.3125 }
    _R0 = &Facing::STEP_X[v22];
    __asm { VLDR            S2, [R0] }
    _R0 = &Facing::STEP_Z[v22];
      VLDR            S4, [R0]
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VMUL.F32        S2, S2, S0
      VMUL.F32        S0, S4, S0
      VADD.F32        S18, S18, S2
      VADD.F32        S20, S20, S0
    v27 = BlockSource::getLevel(v8);
      VSTR            S18, [SP,#0x70+var_54]
      VSTR            S16, [SP,#0x70+var_50]
      VSTR            S20, [SP,#0x70+var_4C]
    result = Level::addParticle(v27, 10, (int)&v29);
  }
  return result;
}


signed int __fastcall RepeaterBlock::shouldConnectToRedstone(RepeaterBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  BlockSource *v4; // r6@1
  int v5; // r4@1
  const BlockPos *v6; // r5@1
  unsigned __int64 *v7; // r7@1
  unsigned int v8; // r0@1
  signed int result; // r0@2
  int v10; // r1@3

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = (unsigned __int64 *)Block::getBlockState((int)this, 12);
  v8 = (BlockSource::getData(v4, v6) >> (*v7 + 1 - (*v7 >> 32))) & (0xFu >> (4 - (*v7 >> 32)));
  if ( v8 == v5 )
  {
    result = 1;
  }
  else
    v10 = Direction::DIRECTION_OPPOSITE[v8];
    result = 0;
    if ( v10 == v5 )
      result = 1;
  return result;
}


signed int __fastcall RepeaterBlock::isInteractiveBlock(RepeaterBlock *this)
{
  return 1;
}


int __fastcall RepeaterBlock::getOffBlock(RepeaterBlock *this)
{
  return Block::mUnpoweredRepeater;
}


int __fastcall RepeaterBlock::getTurnOnDelay(RepeaterBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 34);
  return 2 * RepeaterBlock::DELAYS[(0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)))];
}


int __fastcall RepeaterBlock::onPlace(RepeaterBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  const BlockPos *v4; // r4@1
  RepeaterBlock *v5; // r8@1
  unsigned __int64 *v6; // r7@1
  unsigned int v7; // r6@1
  Dimension *v8; // r0@1
  int v9; // r0@1
  ProducerComponent *v10; // r0@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  v6 = (unsigned __int64 *)Block::getBlockState((int)this, 12);
  v7 = (BlockSource::getData(v3, v4) >> (1 - (*v6 >> 32) + *v6)) & (0xFu >> (4 - (*v6 >> 32)));
  v8 = (Dimension *)BlockSource::getDimension(v3);
  v9 = Dimension::getCircuitSystem(v8);
  v10 = (ProducerComponent *)CircuitSystem::create<RepeaterCapacitor>(v9, v4, (int)v3, Direction::DIRECTION_FACING[v7]);
  if ( v10 )
    ProducerComponent::allowAttachments(v10, 1);
  return j_j_j__ZNK13RepeaterBlock11updateDelayER11BlockSourceRK8BlockPosb(v5, v3, v4, 0);
}


int __fastcall RepeaterBlock::onLoaded(RepeaterBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  const BlockPos *v4; // r4@1
  RepeaterBlock *v5; // r8@1
  unsigned __int64 *v6; // r7@1
  unsigned int v7; // r6@1
  Dimension *v8; // r0@1
  int v9; // r0@1
  int result; // r0@1
  ProducerComponent *v11; // r7@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  v6 = (unsigned __int64 *)Block::getBlockState((int)this, 12);
  v7 = (BlockSource::getData(v3, v4) >> (1 - (*v6 >> 32) + *v6)) & (0xFu >> (4 - (*v6 >> 32)));
  v8 = (Dimension *)BlockSource::getDimension(v3);
  v9 = Dimension::getCircuitSystem(v8);
  result = CircuitSystem::create<RepeaterCapacitor>(v9, v4, (int)v3, Direction::DIRECTION_FACING[v7]);
  v11 = (ProducerComponent *)result;
  if ( result )
  {
    if ( *((_BYTE *)v5 + 641) )
      (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)result + 16))(result, 15);
    RepeaterBlock::updateDelay(v5, v3, v4, 0);
    result = j_j_j__ZN17ProducerComponent16allowAttachmentsEb_0(v11, 1);
  }
  return result;
}


void __fastcall RepeaterBlock::~RepeaterBlock(RepeaterBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall RepeaterBlock::canSurvive(RepeaterBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  RepeaterBlock *v5; // r6@1
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
    result = DiodeBlock::canSurvive(v5, v4, v3);
  else
    result = 0;
  return result;
}


int __fastcall RepeaterBlock::canBeSilkTouched(RepeaterBlock *this)
{
  return 0;
}


void __fastcall RepeaterBlock::~RepeaterBlock(RepeaterBlock *this)
{
  RepeaterBlock::~RepeaterBlock(this);
}


int __fastcall RepeaterBlock::getOnBlock(RepeaterBlock *this)
{
  return Block::mPoweredRepeater;
}


int __fastcall RepeaterBlock::neighborChanged(RepeaterBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  Block *v4; // r6@1
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r5@1
  int result; // r0@1
  char v8; // [sp+4h] [bp-64h]@8
  char v9; // [sp+8h] [bp-60h]@2
  int v10; // [sp+10h] [bp-58h]@6
  void *v11; // [sp+2Ch] [bp-3Ch]@4
  void *ptr; // [sp+3Ch] [bp-2Ch]@2

  v4 = this;
  v5 = a3;
  v6 = a2;
  result = (*(int (**)(void))(*(_DWORD *)this + 324))();
  if ( !result )
  {
    ItemInstance::ItemInstance((ItemInstance *)&v9, Item::mRepeater);
    Block::popResource(v4, v6, v5, (const ItemInstance *)&v9);
    if ( ptr )
      operator delete(ptr);
    if ( v11 )
      operator delete(v11);
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
    v10 = 0;
    v8 = BlockID::AIR;
    result = BlockSource::setBlock((int)v6, v5, &v8, 3);
  }
  return result;
}


signed int __fastcall RepeaterBlock::use(RepeaterBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  RepeaterBlock *v4; // r5@1
  Entity *v5; // r6@1
  const BlockPos *v6; // r4@1
  BlockSource *v7; // r0@2

  v4 = this;
  v5 = a2;
  v6 = a3;
  if ( Player::canUseAbility((int)a2, &Abilities::DOORS_AND_SWITCHES) == 1 )
  {
    v7 = (BlockSource *)Entity::getRegion(v5);
    RepeaterBlock::updateDelay(v4, v7, v6, 1);
  }
  return 1;
}


signed int __fastcall RepeaterBlock::isLocked(RepeaterBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  int v4; // r0@1
  signed int v5; // r1@1

  v4 = (*(int (**)(void))(*(_DWORD *)this + 540))();
  v5 = 0;
  if ( v4 > 0 )
    v5 = 1;
  return v5;
}


int __fastcall RepeaterBlock::updateDelay(RepeaterBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  RepeaterBlock *v4; // r7@1
  int v5; // r4@1
  const BlockPos *v6; // r8@1
  BlockSource *v7; // r5@1
  unsigned __int64 *v8; // r0@1
  int v9; // r6@1
  BlockState *v10; // r0@2
  unsigned __int8 v11; // r4@2
  signed int v12; // r2@2
  int v13; // r7@2
  Level *v14; // r0@3
  Dimension *v15; // r0@4
  int v16; // r0@4
  CircuitSceneGraph *v17; // r7@4
  RepeaterCapacitor *v18; // r0@4
  char v20; // [sp+8h] [bp-20h]@7
  unsigned __int8 v21; // [sp+9h] [bp-1Fh]@7
  char v22; // [sp+Ch] [bp-1Ch]@1
  unsigned __int8 v23; // [sp+Dh] [bp-1Bh]@1

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  BlockSource::getBlockAndData((BlockSource *)&v22, a2, (int)a3);
  v8 = (unsigned __int64 *)Block::getBlockState((int)v4, 34);
  v9 = (v23 >> (*v8 + 1 - (*v8 >> 32))) & (0xFu >> (4 - (*v8 >> 32)));
  if ( v5 == 1 )
  {
    v10 = (BlockState *)Block::getBlockState((int)v4, 34);
    v11 = v23;
    v12 = v9 + 1;
    v9 = (v9 + 1) % 4;
    v13 = v12 % 4 << (*(_QWORD *)v10 + 1 - (unsigned int)(*(_QWORD *)v10 >> 32));
    v23 = v11 & ~(unsigned __int8)BlockState::getMask(v10) | v13;
  }
  v14 = (Level *)BlockSource::getLevel(v7);
  if ( !Level::isClientSide(v14) )
    v15 = (Dimension *)BlockSource::getDimension(v7);
    v16 = Dimension::getCircuitSystem(v15);
    v17 = (CircuitSceneGraph *)(v16 + 4);
    v18 = (RepeaterCapacitor *)CircuitSceneGraph::getComponent((CircuitSceneGraph *)(v16 + 4), v6, 0x4D435252uLL);
    if ( v18 || (v18 = (RepeaterCapacitor *)CircuitSceneGraph::getFromPendingAdd(v17, v6, 0x4D435252uLL)) != 0 )
      RepeaterCapacitor::setDelay(v18, v9);
  v20 = v22;
  v21 = v23;
  return BlockSource::setBlockAndData((int)v7, v6, (int)&v20, 3, 0);
}
