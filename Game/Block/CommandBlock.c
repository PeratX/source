

signed int __fastcall CommandBlock::getTickDelay(CommandBlock *this)
{
  return 1;
}


signed int __fastcall CommandBlock::isCommandBlockType(int a1, _BYTE *a2)
{
  int v2; // r1@1
  signed int result; // r0@3

  v2 = *a2;
  if ( v2 != *(_BYTE *)(Block::mCommandBlock + 4) && v2 != *(_BYTE *)(Block::mChainCommandBlock + 4) )
  {
    result = 0;
    if ( v2 == *(_BYTE *)(Block::mRepeatingCommandBlock + 4) )
      result = 1;
  }
  else
    result = 1;
  return result;
}


signed int __fastcall CommandBlock::hasComparatorSignal(CommandBlock *this)
{
  return 1;
}


ItemInstance *__fastcall CommandBlock::asItemInstance(CommandBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  int v4; // r1@1
  int **v5; // r1@3

  v4 = *((_BYTE *)a2 + 641);
  if ( v4 == 2 )
  {
    v5 = Block::mChainCommandBlock;
  }
  else if ( v4 == 1 )
    v5 = Block::mRepeatingCommandBlock;
  else
    v5 = Block::mCommandBlock;
  return ItemInstance::ItemInstance(this, **v5);
}


void __fastcall CommandBlock::~CommandBlock(CommandBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall CommandBlock::_getFacingDirection(CommandBlock *this, int a2)
{
  unsigned int v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 15);
  return (char)((0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32))));
}


signed int __fastcall CommandBlock::isInteractiveBlock(CommandBlock *this)
{
  return 1;
}


signed int __fastcall CommandBlock::getMappedFace(CommandBlock *this, int a2, int a3)
{
  int v3; // r8@1
  unsigned __int8 v4; // r5@1
  CommandBlock *v5; // r6@1
  __int64 v6; // kr00_8@1
  unsigned __int64 *v7; // r0@1
  char v8; // r1@1
  char v9; // r1@1
  unsigned int v10; // r3@1
  signed int result; // r0@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  v6 = *(_QWORD *)Block::getBlockState((int)this, 15);
  v7 = (unsigned __int64 *)Block::getBlockState((int)v5, 6);
  v8 = *v7;
  LOBYTE(v7) = *v7 >> 32;
  v9 = v8 + 1 - (_BYTE)v7;
  v10 = 0xFu >> (4 - (_BYTE)v7);
  result = 5;
  if ( ((unsigned int)v4 >> v9) & v10 )
    result = 1;
  switch ( (unsigned __int8)(v4 >> (1 - BYTE4(v6) + v6)) & (unsigned __int8)(0xFu >> (4 - BYTE4(v6))) )
  {
    case 0:
    case 6:
      if ( !v3 )
        goto LABEL_24;
      if ( v3 == 1 )
        goto LABEL_22;
      break;
    case 1:
    case 7:
    case 2:
      if ( v3 == 2 )
      if ( v3 == 3 )
    case 3:
    case 4:
      if ( v3 == 4 )
      if ( v3 == 5 )
        result = 3;
    case 5:
      {
LABEL_24:
        result = 2;
      }
      else if ( v3 == 4 )
LABEL_22:
    default:
      return result;
  }
  return result;
}


int __fastcall CommandBlock::canBeSilkTouched(CommandBlock *this)
{
  return 0;
}


signed int __fastcall CommandBlock::getPlacementDataValue(CommandBlock *this, Entity *a2, const BlockPos *a3, signed __int8 a4, const Vec3 *a5, int a6)
{
  CommandBlock *v7; // r4@1
  int v15; // r1@1
  int v17; // r0@4
  signed int result; // r0@8
  float v20; // r1@11
  int v21; // r0@11
  BlockState *v22; // r0@14
  __int64 v23; // r4@14
  signed int v24; // r1@14
  int v25; // r0@14
  BlockState *v26; // r0@15
  __int64 v27; // r4@15
  BlockState *v28; // r0@16
  __int64 v29; // r4@16
  BlockState *v30; // r0@17
  __int64 v31; // r4@17
  int v32; // [sp+0h] [bp-18h]@11

  _R5 = a2;
  v7 = this;
  _R6 = a3;
  _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 52))(a2);
  __asm
  {
    VLDR            S2, [R0]
    VLDR            S0, [R0,#4]
    VCVTR.S32.F32   S2, S2
    VMOV            R2, S2
  }
  v15 = _R2 - *(_DWORD *)_R6;
  if ( _R2 - *(_DWORD *)_R6 < 0 )
    v15 = -v15;
  if ( v15 > 1 )
    goto LABEL_21;
    VLDR            S2, [R0,#8]
    VMOV            R1, S2
  v17 = _R1 - *((_DWORD *)_R6 + 2);
  if ( v17 < 0 )
    v17 = -v17;
  if ( v17 > 1 )
    VCVT.F64.F32    D0, S0
    VLDR            D1, =1.82
    VLDR            S4, [R6,#4]
    VADD.F64        D0, D0, D1
    VLDR            S2, [R5,#0x13C]
    VMOV.F64        D3, #2.0
    VCVT.F64.F32    D1, S2
    VSUB.F64        D0, D0, D1
    VCVT.F64.S32    D1, S4
    VSUB.F64        D2, D0, D1
    VCMPE.F64       D2, D3
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    return 1;
    VSUB.F64        D0, D1, D0
    VCMPE.F64       D0, #0.0
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_21:
    Entity::getRotation((Entity *)&v32, (int)_R5);
    __asm
    {
      VLDR            S0, =0.011111
      VMOV.F32        S4, #0.5
      VLDR            S2, [SP,#0x18+var_14]
      VMUL.F32        S0, S2, S0
      VADD.F32        S0, S0, S4
      VMOV            R0, S0
    }
    v21 = mce::Math::floor(_R0, v20) & 3;
    switch ( v21 )
      case 1:
        v26 = (BlockState *)Block::getBlockState((int)v7, 15);
        v27 = *(_QWORD *)v26;
        BlockState::getMask(v26);
        v24 = 5;
        v25 = v27 + 1 - HIDWORD(v27);
        break;
      case 2:
        v28 = (BlockState *)Block::getBlockState((int)v7, 15);
        v29 = *(_QWORD *)v28;
        BlockState::getMask(v28);
        v24 = 3;
        v25 = v29 + 1 - HIDWORD(v29);
      case 3:
        v22 = (BlockState *)Block::getBlockState((int)v7, 15);
        v23 = *(_QWORD *)v22;
        BlockState::getMask(v22);
        v24 = 4;
        v25 = v23 + 1 - HIDWORD(v23);
      default:
        v30 = (BlockState *)Block::getBlockState((int)v7, 15);
        v31 = *(_QWORD *)v30;
        BlockState::getMask(v30);
        v24 = 2;
        v25 = v31 + 1 - HIDWORD(v31);
    result = (unsigned __int8)(v24 << v25);
  else
    result = 0;
  return result;
}


LevelChunk *__fastcall CommandBlock::onRedstoneUpdate(CommandBlock *this, BlockSource *a2, const BlockPos *a3, int a4, bool a5)
{
  BlockSource *v5; // r5@1
  CommandBlock *v6; // r8@1
  int v7; // r6@1
  const BlockPos *v8; // r4@1
  Level *v9; // r0@1
  LevelChunk *result; // r0@1
  CommandBlockEntity *v11; // r7@2
  signed int v12; // r11@4
  int v13; // r10@6
  bool v14; // zf@6
  LevelChunk *v15; // r9@6
  signed int v16; // r0@10
  unsigned int v17; // r6@13
  unsigned __int64 *v18; // r0@13
  char v19; // r1@13
  unsigned int v20; // r1@13
  signed int v21; // r6@13
  LevelChunk **v22; // r0@15
  int v23; // [sp+8h] [bp-30h]@4
  char v24; // [sp+Ch] [bp-2Ch]@15
  char v25; // [sp+10h] [bp-28h]@13
  unsigned __int8 v26; // [sp+11h] [bp-27h]@13

  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = (Level *)BlockSource::getLevel(a2);
  result = (LevelChunk *)Level::isClientSide(v9);
  if ( !result )
  {
    result = (LevelChunk *)BlockSource::getBlockEntity(v5, v8);
    v11 = result;
    if ( result )
    {
      result = (LevelChunk *)BlockEntity::isType((int)result, 26);
      if ( result == (LevelChunk *)1 )
      {
        v12 = 0;
        v23 = *((_BYTE *)v6 + 641);
        if ( v7 < 1 )
          v12 = 1;
        v13 = CommandBlockEntity::getPowered(v11);
        result = (LevelChunk *)CommandBlockEntity::isAutomatic(v11);
        v14 = v13 == 0;
        v15 = result;
        if ( !v13 )
          v14 = v12 == 0;
        if ( v14 )
        {
          CommandBlockEntity::setPowered(v11, 1);
          v16 = 0;
          if ( v23 == 2 )
            v16 = 1;
          result = (LevelChunk *)(v16 | (unsigned int)v15);
          if ( !result )
          {
            BlockSource::getBlockAndData((BlockSource *)&v25, v5, (int)v8);
            v17 = v26;
            v18 = (unsigned __int64 *)Block::getBlockState((int)v6, 6);
            v19 = *v18;
            LOBYTE(v18) = *v18 >> 32;
            v20 = v17 >> (v19 + 1 - (_BYTE)v18);
            v21 = 1;
            if ( v20 & (0xFu >> (4 - (_BYTE)v18)) )
              v21 = CommandBlock::isConditionMet(v6, v5, v8);
            CommandBlockEntity::setConditionMet(v11, v21);
            v22 = (LevelChunk **)BlockSource::getTickQueue(v5, v8);
            v24 = *((_BYTE *)v6 + 4);
            result = BlockTickingQueue::add(v22, v5, (int)v8, &v24, 1u, 0);
            if ( v21 == 1 )
              result = (LevelChunk *)CommandBlock::triggerSequence(v6, v5, v8);
          }
        }
        else if ( v7 <= 0 )
          result = (LevelChunk *)(v13 ^ 1);
          if ( v13 == 1 )
            result = (LevelChunk *)j_j_j__ZN18CommandBlockEntity10setPoweredEb(v11, 0);
      }
    }
  }
  return result;
}


signed int __fastcall CommandBlock::_getEntity(CommandBlock *this, BlockSource *a2, const BlockPos *a3)
{
  int v3; // r0@1
  int v4; // r4@1
  signed int result; // r0@2

  v3 = BlockSource::getBlockEntity(a2, a3);
  v4 = v3;
  if ( v3 )
  {
    result = BlockEntity::isType(v3, 26);
    if ( result )
      result = v4;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall CommandBlock::use(CommandBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  Entity *v4; // r4@1
  const BlockPos *v5; // r5@1
  Level *v6; // r0@1
  BlockSource *v7; // r0@3
  int v8; // r0@3
  BlockEntity *v9; // r5@3
  void (__fastcall *v10)(Entity *, char *); // r6@6
  char *v11; // r0@6

  v4 = a2;
  v5 = a3;
  v6 = (Level *)Entity::getLevel(a2);
  if ( !Level::isClientSide(v6) && Player::canUseAbility((int)v4, &Abilities::OPERATOR) == 1 )
  {
    v7 = (BlockSource *)Entity::getRegion(v4);
    v8 = BlockSource::getBlockEntity(v7, v5);
    v9 = (BlockEntity *)v8;
    if ( v8 )
    {
      if ( BlockEntity::isType(v8, 26) == 1 && Player::canUseCommandBlocks(v4) == 1 )
      {
        v10 = *(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v4 + 1332);
        v11 = BlockEntity::getPosition(v9);
        v10(v4, v11);
      }
    }
  }
  return 1;
}


void __fastcall CommandBlock::~CommandBlock(CommandBlock *this)
{
  CommandBlock::~CommandBlock(this);
}


int __fastcall CommandBlock::updateBlock(int a1, BlockSource *a2, const BlockPos *a3, int a4, int a5)
{
  BlockSource *v5; // r5@1
  BlockPos *v6; // r4@1
  int v7; // r6@1
  int result; // r0@1
  int v9; // r10@3
  int v10; // r9@3
  int v11; // r6@3
  BlockState *v12; // r0@3
  int v13; // r7@3
  char v14; // [sp+4h] [bp-24h]@4
  char v15; // [sp+5h] [bp-23h]@4
  unsigned __int16 v16; // [sp+6h] [bp-22h]@3

  v5 = a2;
  v6 = a3;
  v7 = a4;
  result = BlockSource::getBlockEntity(a2, a3);
  if ( result )
  {
    result = BlockEntity::isType(result, 26);
    if ( result == 1 )
    {
      BlockSource::getBlockAndData((BlockSource *)&v16, v5, (int)v6);
      v9 = HIBYTE(v16);
      v10 = CommandBlock::mCBModeMap[v7];
      v11 = CommandBlock::mCBModeMap[v7];
      v12 = (BlockState *)Block::getBlockState(Block::mBlocks[v11], 6);
      v13 = *(_QWORD *)v12 + 1 - (*(_QWORD *)v12 >> 32);
      result = v9 & ~BlockState::getMask(v12) | (a5 << v13);
      if ( v16 != (unsigned __int16)(v11 | ((_WORD)result << 8)) )
      {
        v14 = v10;
        v15 = result;
        result = BlockSource::setBlockAndData((int)v5, v6, (int)&v14, 3, 0);
      }
    }
  }
  return result;
}


_BOOL4 __fastcall CommandBlock::getConditionalMode(CommandBlock *this, BlockSource *a2, const BlockPos *a3)
{
  CommandBlock *v3; // r4@1
  unsigned int v4; // r5@1
  unsigned __int64 *v5; // r0@1
  char v7; // [sp+4h] [bp-14h]@1
  unsigned __int8 v8; // [sp+5h] [bp-13h]@1

  v3 = this;
  BlockSource::getBlockAndData((BlockSource *)&v7, a2, (int)a3);
  v4 = v8;
  v5 = (unsigned __int64 *)Block::getBlockState((int)v3, 6);
  return ((0xFu >> (4 - (*v5 >> 32))) & (v4 >> (*v5 + 1 - (*v5 >> 32)))) != 0;
}


CommandBlockEntity *__fastcall CommandBlock::tick(CommandBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r4@1
  CommandBlock *v5; // r7@1
  const BlockPos *v6; // r6@1
  Level *v7; // r0@1
  CommandBlockEntity *result; // r0@1
  CommandBlockEntity *v9; // r5@2
  int v10; // r11@4
  int v11; // r9@4
  signed int v12; // r0@5
  int v13; // r10@7
  bool v14; // zf@7
  signed int v15; // r8@7
  signed int v16; // r0@14
  signed int v17; // r9@17
  LevelChunk **v18; // r0@22
  LevelChunk *v19; // [sp+8h] [bp-30h]@7
  signed int v20; // [sp+Ch] [bp-2Ch]@7
  char v21; // [sp+10h] [bp-28h]@22

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = (Level *)BlockSource::getLevel(a2);
  result = (CommandBlockEntity *)Level::isClientSide(v7);
  if ( !result )
  {
    result = (CommandBlockEntity *)BlockSource::getBlockEntity(v4, v6);
    v9 = result;
    if ( result )
    {
      result = (CommandBlockEntity *)BlockEntity::isType((int)result, 26);
      if ( result == (CommandBlockEntity *)1 )
      {
        v10 = *((_BYTE *)v5 + 641);
        v11 = *(_DWORD *)(*(_DWORD *)CommandBlockEntity::getCommand(v9) - 12);
        if ( CommandBlockEntity::getConditionalMode(v9, v4) == 1 )
          v12 = CommandBlock::isConditionMet(v5, v4, v6);
        else
          v12 = 1;
        v20 = v12;
        v13 = CommandBlockEntity::getConditionMet(v9);
        v19 = (LevelChunk *)BlockSource::getChunkAt(v4, v6);
        LevelChunk::lockBlockEntities(v19, 1, v4);
        v14 = v11 == 0;
        v15 = 0;
        if ( v11 )
          v14 = v10 == 2;
        if ( !v14 && v13 == 1 )
        {
          CommandBlockEntity::performCommand(v9, v4);
          v15 = 1;
        }
        if ( CommandBlockEntity::getPowered(v9) || CommandBlockEntity::isAutomatic(v9) == 1 )
          v16 = 0;
          if ( v10 != 2 )
            v16 = 1;
          if ( v11 )
          {
            v17 = v20;
            if ( !(v16 | v20 ^ 1) )
            {
              CommandBlockEntity::performCommand(v9, v4);
              v15 = 1;
            }
          }
          else
          if ( v10 == 1 )
            v18 = (LevelChunk **)BlockSource::getTickQueue(v4, v6);
            v21 = *((_BYTE *)v5 + 4);
            BlockTickingQueue::add(v18, v4, (int)v6, &v21, 1u, 0);
            if ( v17 == 1 )
              CommandBlock::triggerSequence(v5, v4, v6);
          LOBYTE(v17) = v20;
        if ( !v15 )
          CommandBlockEntity::setSuccessCount(v9, 0);
        CommandBlockEntity::setConditionMet(v9, v17);
        result = (CommandBlockEntity *)LevelChunk::lockBlockEntities(v19, 0, v4);
      }
    }
  }
  return result;
}


_BOOL4 __fastcall CommandBlock::getVariant(CommandBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 6);
  return ((0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)))) != 0;
}


int __fastcall CommandBlock::neighborChanged(CommandBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  Block *v4; // r6@1
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r5@1
  int result; // r0@1
  void (__fastcall *v8)(char *, Block *, BlockSource *, const BlockPos *); // r7@2
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
    v8 = *(void (__fastcall **)(char *, Block *, BlockSource *, const BlockPos *))(*(_DWORD *)v4 + 272);
    BlockSource::getData(v6, v5);
    v8(&v9, v4, v6, v5);
    Block::popResource(v4, v6, v5, (const ItemInstance *)&v9);
    if ( ptr )
      operator delete(ptr);
    if ( v11 )
      operator delete(v11);
    if ( v10 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v10 + 4))(v10);
    v10 = 0;
    result = BlockSource::removeBlock(v6, v5);
  }
  return result;
}


signed int __fastcall CommandBlock::isConditionMet(CommandBlock *this, BlockSource *a2, const BlockPos *a3)
{
  CommandBlock *v3; // r6@1
  const BlockPos *v4; // r5@1
  BlockSource *v5; // r4@1
  unsigned int v6; // r7@1
  unsigned __int64 *v7; // r0@1
  int v8; // r0@4
  CommandBlockEntity *v9; // r5@4
  signed int v10; // r4@5
  unsigned __int8 v12; // [sp+4h] [bp-2Ch]@1
  char v13; // [sp+8h] [bp-28h]@1
  char v14; // [sp+14h] [bp-1Ch]@1
  unsigned __int8 v15; // [sp+15h] [bp-1Bh]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  BlockSource::getBlockAndData((BlockSource *)&v14, a2, (int)a3);
  v6 = v15;
  v7 = (unsigned __int64 *)Block::getBlockState((int)v3, 15);
  BlockPos::neighbor(
    (BlockPos *)&v13,
    (int)v4,
    Facing::OPPOSITE_FACING[(char)((0xFu >> (4 - (*v7 >> 32))) & (v6 >> (*v7 + 1 - (*v7 >> 32))))]);
  BlockSource::getBlockAndData((BlockSource *)&v12, v5, (int)&v13);
  if ( v12 != *(_BYTE *)(Block::mCommandBlock + 4)
    && v12 != *(_BYTE *)(Block::mChainCommandBlock + 4)
    && v12 != *(_BYTE *)(Block::mRepeatingCommandBlock + 4) )
  {
    v10 = 0;
  }
  else
    v8 = BlockSource::getBlockEntity(v5, (const BlockPos *)&v13);
    v9 = (CommandBlockEntity *)v8;
    if ( v8 )
    {
      v10 = 0;
      if ( BlockEntity::isType(v8, 26) == 1 && CommandBlockEntity::getSuccessCount(v9) > 0 )
        v10 = 1;
    }
    else
  return v10;
}


int __fastcall CommandBlock::_installCircuit(CommandBlock *this, BlockSource *a2, const BlockPos *a3, bool a4)
{
  BlockSource *v4; // r4@1
  CommandBlock *v5; // r6@1
  const BlockPos *v6; // r5@1
  Level *v7; // r0@1
  int result; // r0@1
  unsigned int v9; // r7@2
  unsigned __int64 *v10; // r0@2
  int v11; // r6@2
  Dimension *v12; // r0@2
  int v13; // r0@2

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v7);
  if ( !result )
  {
    v9 = BlockSource::getData(v4, v6);
    v10 = (unsigned __int64 *)Block::getBlockState((int)v5, 15);
    v11 = (char)((0xFu >> (4 - (*v10 >> 32))) & (v9 >> (*v10 + 1 - (*v10 >> 32))));
    v12 = (Dimension *)BlockSource::getDimension(v4);
    v13 = Dimension::getCircuitSystem(v12);
    result = CircuitSystem::create<ConsumerComponent>(v13, v6, (int)v4, v11);
    if ( result )
      *(_BYTE *)(result + 44) = 1;
  }
  return result;
}


unsigned int __fastcall CommandBlock::triggerSequence(CommandBlock *this, BlockSource *a2, const BlockPos *a3)
{
  CommandBlock *v3; // r6@1
  const BlockPos *v4; // r9@1
  BlockSource *v5; // r5@1
  unsigned int result; // r0@1
  unsigned int v7; // r4@2
  unsigned __int64 *v8; // r0@2
  CommandBlockEntity *v9; // r11@2
  int v10; // r8@5
  int v11; // r0@7
  LevelChunk **v12; // r4@8
  unsigned int v13; // r4@8
  unsigned __int64 *v14; // r0@8
  bool v15; // zf@9
  int v16; // [sp+Ch] [bp-4Ch]@8
  int v17; // [sp+10h] [bp-48h]@8
  int v18; // [sp+14h] [bp-44h]@8
  char v19; // [sp+18h] [bp-40h]@8
  char v20; // [sp+1Ch] [bp-3Ch]@7
  char v21; // [sp+20h] [bp-38h]@6
  unsigned __int8 v22; // [sp+21h] [bp-37h]@6
  int v23; // [sp+24h] [bp-34h]@2
  int v24; // [sp+28h] [bp-30h]@8
  int v25; // [sp+2Ch] [bp-2Ch]@8
  char v26; // [sp+30h] [bp-28h]@1
  unsigned __int8 v27; // [sp+31h] [bp-27h]@2

  v3 = this;
  v4 = a3;
  v5 = a2;
  BlockSource::getBlockAndData((BlockSource *)&v26, a2, (int)a3);
  result = *((_BYTE *)v3 + 641);
  if ( result <= 1 )
  {
    v7 = v27;
    v8 = (unsigned __int64 *)Block::getBlockState((int)v3, 15);
    BlockPos::neighbor((BlockPos *)&v23, (int)v4, (char)((0xFu >> (4 - (*v8 >> 32))) & (v7 >> (*v8 + 1 - (*v8 >> 32)))));
    result = BlockSource::getBlockEntity(v5, (const BlockPos *)&v23);
    v9 = (CommandBlockEntity *)result;
    if ( result )
    {
      result = BlockEntity::isType(result, 26);
      if ( v9 )
      {
        result ^= 1u;
        if ( !result )
        {
          v10 = 1;
          do
          {
            BlockSource::getBlockAndData((BlockSource *)&v21, v5, (int)&v23);
            v26 = v21;
            v27 = v22;
            result = CommandBlockEntity::getMode(v9, v5);
            if ( result != 2 )
              break;
            v11 = BlockSource::getTickQueue(v5, (const BlockPos *)&v23);
            v20 = v26;
            result = BlockTickingQueue::hasTickNextTick(v11, (int)&v23);
            if ( result )
            v12 = (LevelChunk **)BlockSource::getTickQueue(v5, v4);
            BlockSource::getBlockID((BlockSource *)&v19, v5, (int)&v23);
            BlockTickingQueue::add(v12, v5, (int)&v23, &v19, 1u, v10);
            v13 = v27;
            v14 = (unsigned __int64 *)Block::getBlockState((int)v3, 15);
            BlockPos::neighbor(
              (BlockPos *)&v16,
              (int)&v23,
              (char)((0xFu >> (4 - (*v14 >> 32))) & (v13 >> (*v14 + 1 - (*v14 >> 32)))));
            v23 = v16;
            v24 = v17;
            v25 = v18;
            result = BlockSource::getBlockEntity(v5, (const BlockPos *)&v23);
            v9 = (CommandBlockEntity *)result;
            if ( !result )
            result = BlockEntity::isType(result, 26);
            v15 = v9 == 0;
            if ( v9 )
            {
              result ^= 1u;
              ++v10;
              v15 = result == 1;
            }
          }
          while ( !v15 );
        }
      }
    }
  }
  return result;
}


_BOOL4 __fastcall CommandBlock::_getConditionalMode(CommandBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 6);
  return ((0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)))) != 0;
}


int __fastcall CommandBlock::CommandBlock(int a1, const void **a2, int a3, unsigned int a4)
{
  int v4; // r4@1
  unsigned int v5; // r5@1
  int v6; // r6@1
  const void **v7; // r7@1
  int v8; // r0@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = Material::getMaterial(4);
  EntityBlock::EntityBlock(v4, v7, v6, v8);
  *(_DWORD *)v4 = &loc_27066CC;
  *(_BYTE *)(v4 + 641) = v5;
  Block::setIsInteraction((Block *)v4, 1);
  *(_DWORD *)(v4 + 32) = 26;
  if ( v5 <= 2 )
    CommandBlock::mCBModeMap[v5] = v6;
  return v4;
}


int __fastcall CommandBlock::getComparatorSignal(CommandBlock *this, BlockSource *a2, const BlockPos *a3, signed __int8 a4, int a5)
{
  const BlockPos *v5; // r5@1
  BlockSource *v6; // r6@1
  Block *v7; // r7@1
  signed __int8 v8; // r8@1
  int v9; // r0@1
  CommandBlockEntity *v10; // r4@1
  int result; // r0@3

  v5 = a3;
  v6 = a2;
  v7 = this;
  v8 = a4;
  v9 = BlockSource::getBlockEntity(a2, a3);
  v10 = (CommandBlockEntity *)v9;
  if ( v9 && BlockEntity::isType(v9, 26) == 1 )
    result = j_j_j__ZNK18CommandBlockEntity15getSuccessCountEv(v10);
  else
    result = j_j_j__ZNK5Block19getComparatorSignalER11BlockSourceRK8BlockPosai(v7, v6, v5, v8, a5);
  return result;
}


int __fastcall CommandBlock::onPlace(CommandBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  CommandBlock *v5; // r6@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  Block::onPlace(this, a2, a3);
  return j_j_j__ZNK12CommandBlock15_installCircuitER11BlockSourceRK8BlockPosb(v5, v4, v3, 0);
}
