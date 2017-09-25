

void __fastcall DetectorRailBlock::tick(DetectorRailBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  DetectorRailBlock::tick(this, a2, a3, a4);
}


Block *__fastcall DetectorRailBlock::DetectorRailBlock(int a1, const void **a2, int a3)
{
  Block *v3; // r4@1

  v3 = (Block *)a1;
  BaseRailBlock::BaseRailBlock(a1, a2, a3, 1);
  *(_DWORD *)v3 = &loc_27074F8;
  Block::setTicking(v3, 0);
  return v3;
}


void __fastcall DetectorRailBlock::tick(DetectorRailBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  DetectorRailBlock *v6; // r6@1
  unsigned int v7; // r7@1
  Level *v8; // r0@1
  unsigned __int64 *v9; // r0@2

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = BlockSource::getData(a2, a3);
  v8 = (Level *)BlockSource::getLevel(v5);
  if ( !Level::isClientSide(v8) )
  {
    v9 = (unsigned __int64 *)Block::getBlockState(Block::mDetectorRail, 31);
    if ( (v7 >> (*v9 + 1 - (*v9 >> 32))) & (0xFu >> (4 - (*v9 >> 32))) )
      j_j_j__ZNK17DetectorRailBlock12checkPressedER11BlockSourceRK8BlockPosi(v6, v5, v4, v7);
  }
}


signed int __fastcall DetectorRailBlock::hasComparatorSignal(DetectorRailBlock *this)
{
  return 1;
}


void __fastcall DetectorRailBlock::~DetectorRailBlock(DetectorRailBlock *this)
{
  DetectorRailBlock::~DetectorRailBlock(this);
}


int __fastcall DetectorRailBlock::getComparatorSignal(DetectorRailBlock *this, BlockSource *a2, const BlockPos *a3, signed __int8 a4, int a5)
{
  BlockSource *v7; // r6@1
  int v16; // r0@1
  __int64 v17; // r4@1
  Entity *v18; // t1@2
  signed int v19; // r2@4
  int v20; // r1@6
  int v22; // [sp+0h] [bp-38h]@0
  int v23; // [sp+4h] [bp-34h]@0
  int v24; // [sp+8h] [bp-30h]@0
  char v25; // [sp+Ch] [bp-2Ch]@1

  _R5 = *(_QWORD *)a3 >> 32;
  _R0 = *(_QWORD *)a3;
  v7 = a2;
  _R1 = *((_DWORD *)a3 + 2);
  __asm
  {
    VMOV            S6, R5
    VLDR            S4, =0.2
  }
  ++_R5;
  __asm { VMOV            S0, R0 }
  _R4 = _R1 + 1;
  __asm { VMOV            S2, R1 }
  ++_R0;
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S6, S6
    VADD.F32        S0, S0, S4
    VADD.F32        S2, S2, S4
    VMOV            R2, S6
    VLDR            S6, =-0.2
    VMOV            S4, R0
    VMOV            R1, S0
    VMOV            R3, S2
    VMOV            S0, R4
    VMOV            S2, R5
    VCVT.F32.S32    S4, S4
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S2, S6
    VADD.F32        S4, S4, S6
    VSTR            S4, [SP,#0x38+var_38]
    VSTR            S2, [SP,#0x38+var_34]
    VSTR            S0, [SP,#0x38+var_30]
  AABB::AABB(COERCE_FLOAT(&v25), _R1, _R2, v22, v23, v24);
  v16 = BlockSource::fetchEntities((int)v7, 0x80000, (int)&v25, 0);
  v17 = *(_QWORD *)v16;
  if ( (_DWORD)v17 == HIDWORD(v17) )
LABEL_4:
    v19 = 1;
  else
    while ( 1 )
    {
      v18 = *(Entity **)v17;
      LODWORD(v17) = v17 + 4;
      v16 = Entity::getContainerComponent(v18);
      if ( v16 )
        break;
      if ( HIDWORD(v17) == (_DWORD)v17 )
        goto LABEL_4;
    }
    v16 = Container::getRedstoneSignalFromContainer(*(Container **)(v16 + 4));
    v19 = 0;
  v20 = 0;
  if ( !v19 )
    v20 = v16;
  return v20;
}


unsigned int __fastcall DetectorRailBlock::entityInside(DetectorRailBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4)
{
  BlockSource *v4; // r5@1
  DetectorRailBlock *v5; // r8@1
  Entity *v6; // r7@1
  const BlockPos *v7; // r4@1
  Level *v8; // r0@1
  unsigned int result; // r0@1
  unsigned int v10; // r6@2
  unsigned __int64 *v11; // r0@2
  char v12; // r1@2
  char v13; // r1@2

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v8);
  if ( !result )
  {
    v10 = BlockSource::getData(v4, v7);
    v11 = (unsigned __int64 *)Block::getBlockState(Block::mDetectorRail, 31);
    v12 = *v11;
    LOBYTE(v11) = *v11 >> 32;
    v13 = v12 + 1 - (_BYTE)v11;
    result = 0xFu >> (4 - (_BYTE)v11);
    if ( !((v10 >> v13) & result) )
    {
      result = Entity::hasCategory((int)v6, 0x10000);
      if ( result == 1 )
        result = (unsigned int)DetectorRailBlock::handlePressed(v5, v4, v7, v10, 1);
    }
  }
  return result;
}


void __fastcall DetectorRailBlock::checkPressed(DetectorRailBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  const BlockPos *v4; // r5@1
  DetectorRailBlock *v5; // r9@1
  BlockSource *v7; // r6@1
  int v13; // r8@1
  _QWORD *v19; // r0@1
  _QWORD *v20; // r7@1
  void *v21; // r4@1
  int v22; // r1@1 OVERLAPPED
  int v23; // r2@1 OVERLAPPED
  signed int v24; // r0@1
  void *v25; // r0@3
  int v26; // r7@4
  int v27; // [sp+0h] [bp-48h]@0
  int v28; // [sp+4h] [bp-44h]@0
  int v29; // [sp+8h] [bp-40h]@0
  char v30; // [sp+Ch] [bp-3Ch]@1

  v4 = a3;
  v5 = this;
  _KR00_8 = *(_QWORD *)a3;
  v7 = a2;
  _R1 = *((_DWORD *)a3 + 2);
  __asm
  {
    VMOV            S6, R7
    VLDR            S4, =0.2
  }
  v13 = a4;
  __asm { VMOV            S0, R0 }
  _R4 = _R1 + 1;
  __asm { VMOV            S2, R1 }
  _R7 = (*(_QWORD *)a3 >> 32) + 1;
  __asm { VCVT.F32.S32    S0, S0 }
  _R0 = *(_QWORD *)a3 + 1;
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S6, S6
    VADD.F32        S0, S0, S4
    VADD.F32        S2, S2, S4
    VMOV            R2, S6
    VLDR            S6, =-0.2
    VMOV            S4, R0
    VMOV            R1, S0
    VMOV            R3, S2
    VMOV            S0, R4
    VMOV            S2, R7
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S4, S4
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S2, S6
    VADD.F32        S4, S4, S6
    VSTR            S4, [SP,#0x48+var_48]
    VSTR            S2, [SP,#0x48+var_44]
    VSTR            S0, [SP,#0x48+var_40]
  AABB::AABB(COERCE_FLOAT(&v30), _R1, _R2, v27, v28, v29);
  v19 = (_QWORD *)BlockSource::fetchEntities((int)v7, 0x80000, (int)&v30, 0);
  v20 = v19;
  v21 = 0;
  *(_QWORD *)&v22 = *v19;
  v24 = v23 - v22;
  if ( 0 != (v23 - v22) >> 2 )
    if ( (unsigned int)(v24 >> 2) >= 0x40000000 )
      sub_21E57F4();
    v25 = operator new(v24);
    *(_QWORD *)&v22 = *v20;
    v21 = v25;
  v26 = (v23 - v22) >> 2;
  if ( 0 != v26 )
    _aeabi_memmove4(v21, v22);
  DetectorRailBlock::handlePressed(v5, v7, v4, v13, v26 != 0);
  if ( v21 )
    operator delete(v21);
}


void __fastcall DetectorRailBlock::checkPressed(DetectorRailBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  DetectorRailBlock::checkPressed(this, a2, a3, a4);
}


LevelChunk *__fastcall DetectorRailBlock::handlePressed(DetectorRailBlock *this, BlockSource *a2, const BlockPos *a3, int a4, int a5)
{
  DetectorRailBlock *v5; // r10@1
  BlockSource *v6; // r11@1
  int v7; // r7@1
  BlockPos *v8; // r8@1
  BlockState *v9; // r0@1
  BlockState *v10; // r4@1
  __int64 v11; // r0@1
  int v12; // r5@1
  bool v13; // zf@1
  unsigned int v14; // r6@1
  unsigned int v15; // r0@5
  LevelChunk *result; // r0@6
  bool v17; // zf@8
  char v18; // r0@12
  LevelChunk **v19; // r0@14
  Level *v20; // r0@16
  int *v21; // r4@17
  Dimension *v22; // r0@19
  CircuitSystem *v23; // r0@19
  char v24; // [sp+8h] [bp-30h]@14
  char v25; // [sp+Ch] [bp-2Ch]@12
  char v26; // [sp+10h] [bp-28h]@5

  v5 = this;
  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = (BlockState *)Block::getBlockState(Block::mDetectorRail, 31);
  v10 = v9;
  v11 = *(_QWORD *)v9;
  v12 = 1 - HIDWORD(v11) + v11;
  v14 = ((unsigned int)(unsigned __int8)v7 >> v12) & (0xFu >> (4 - BYTE4(v11)));
  v13 = v14 == 0;
  if ( !v14 )
    v13 = a5 == 1;
  if ( v13 )
  {
    v15 = BlockState::getMask(v10);
    v26 = *((_BYTE *)v5 + 4);
    v7 = (v15 ^ 0xFF) & v7 | (1 << v12);
    BlockSource::setBlockAndData((int)v6, v8, &v26, v7, 3, 0);
  }
  result = 0;
    result = (LevelChunk *)1;
  v17 = a5 == 0;
  if ( !a5 )
    v17 = result == 0;
  if ( v17 )
    v18 = BlockState::getMask(v10);
    v25 = *((_BYTE *)v5 + 4);
    result = (LevelChunk *)BlockSource::setBlockAndData((int)v6, v8, &v25, v7 & ~v18, 3, 0);
  if ( a5 == 1 )
    v19 = (LevelChunk **)BlockSource::getTickQueue(v6, v8);
    v24 = *((_BYTE *)v5 + 4);
    result = BlockTickingQueue::add(v19, v6, (int)v8, &v24, 0x14u, 0);
  if ( (v14 != 0) != a5 )
    v20 = (Level *)BlockSource::getLevel(v6);
    result = (LevelChunk *)Level::isClientSide(v20);
    if ( !result )
    {
      v21 = (int *)&Redstone::SIGNAL_NONE;
      if ( a5 )
        v21 = (int *)&Redstone::SIGNAL_MAX;
      v22 = (Dimension *)BlockSource::getDimension(v6);
      v23 = (CircuitSystem *)Dimension::getCircuitSystem(v22);
      result = (LevelChunk *)CircuitSystem::setStrength(v23, v8, *v21);
    }
  return result;
}


int __fastcall DetectorRailBlock::onLoaded(DetectorRailBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r6@1
  const BlockPos *v4; // r5@1
  Level *v5; // r0@1
  int result; // r0@1
  Dimension *v7; // r0@2
  int v8; // r0@2
  ProducerComponent *v9; // r4@2
  unsigned int v10; // r5@3
  unsigned __int64 *v11; // r0@3

  v3 = a2;
  v4 = a3;
  v5 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v5);
  if ( !result )
  {
    v7 = (Dimension *)BlockSource::getDimension(v3);
    v8 = Dimension::getCircuitSystem(v7);
    result = CircuitSystem::create<ProducerComponent>(v8, v4, (int)v3, 0);
    v9 = (ProducerComponent *)result;
    if ( result )
    {
      v10 = BlockSource::getData(v3, v4);
      v11 = (unsigned __int64 *)Block::getBlockState(Block::mDetectorRail, 31);
      if ( (v10 >> (*v11 + 1 - (*v11 >> 32))) & (0xFu >> (4 - (*v11 >> 32))) )
        (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v9 + 16))(v9, 15);
      result = j_j_j__ZN17ProducerComponent16allowAttachmentsEb_0(v9, 1);
    }
  }
  return result;
}


signed int __fastcall DetectorRailBlock::shouldConnectToRedstone(DetectorRailBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  return 1;
}


signed int __fastcall DetectorRailBlock::getTickDelay(DetectorRailBlock *this)
{
  return 20;
}


int __fastcall DetectorRailBlock::getSearchBB(float a1, int a2, int a3)
{
  int v15; // [sp+0h] [bp-20h]@0
  int v16; // [sp+4h] [bp-1Ch]@0
  int v17; // [sp+8h] [bp-18h]@0

  _KR00_8 = *(_QWORD *)a3;
  _R4 = (*(_QWORD *)a3 >> 32) + 1;
  _R1 = *(_DWORD *)(a3 + 8);
  __asm
  {
    VMOV            S6, LR
    VLDR            S4, =0.2
    VMOV            S0, R12
  }
  _R5 = _R1 + 1;
    VMOV            S2, R1
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S6, S6
    VADD.F32        S0, S0, S4
    VADD.F32        S2, S2, S4
    VMOV            R2, S6
    VLDR            S6, =-0.2
    VMOV            R1, S0
    VMOV            R3, S2
    VMOV            S0, R5
  _R5 = _KR00_8 + 1;
    VMOV            S2, R4
    VMOV            S4, R5
    VCVT.F32.S32    S4, S4
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S2, S6
    VADD.F32        S4, S4, S6
    VSTR            S4, [SP,#0x20+var_20]
    VSTR            S2, [SP,#0x20+var_1C]
    VSTR            S0, [SP,#0x20+var_18]
  return AABB::AABB(a1, _R1, _R2, v15, v16, v17);
}


void __fastcall DetectorRailBlock::~DetectorRailBlock(DetectorRailBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


unsigned int __fastcall DetectorRailBlock::getVariant(DetectorRailBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState(Block::mDetectorRail, 31);
  return (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
}
