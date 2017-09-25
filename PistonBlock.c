

int __fastcall PistonBlock::isSticky(PistonBlock *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 161);
  if ( result != 1 )
    result = 0;
  return result;
}


ItemInstance *__fastcall PistonBlock::asItemInstance(PistonBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  BlockSource *v4; // r5@1
  ItemInstance *v5; // r4@1
  BlockState *v6; // r0@1
  __int64 v7; // r6@1
  int **v8; // r1@2

  v4 = a2;
  v5 = this;
  v6 = (BlockState *)Block::getBlockState((int)a2, 15);
  v7 = *(_QWORD *)v6;
  BlockState::getMask(v6);
  if ( *((_DWORD *)v4 + 161) == 1 )
    v8 = Block::mStickyPiston;
  else
    v8 = Block::mPiston;
  return ItemInstance::ItemInstance(v5, **v8, 1, (unsigned __int8)(1 << (v7 + 1 - BYTE4(v7))));
}


unsigned int __fastcall PistonBlock::getMappedFace(PistonBlock *this, int a2, int a3)
{
  int v3; // r4@1
  unsigned __int8 v4; // r5@1
  unsigned __int64 *v5; // r0@1
  unsigned int result; // r0@1
  int v7; // r1@2
  int v8; // r1@8
  int v9; // r1@13
  int v10; // r1@18
  int v11; // r1@23
  int v12; // r1@28

  v3 = a2;
  v4 = a3;
  v5 = (unsigned __int64 *)Block::getBlockState(Block::mPiston, 15);
  result = (0xFu >> (4 - (*v5 >> 32))) & (v4 >> (*v5 + 1 - (*v5 >> 32)));
  switch ( v3 )
  {
    case 0:
      v7 = (unsigned __int8)result;
      LOBYTE(result) = 3;
      if ( v7 == 1 )
        LOBYTE(result) = 0;
      if ( !v7 )
        LOBYTE(result) = 1;
      result = (char)result;
      break;
    case 1:
      v8 = (unsigned __int8)result;
      if ( (unsigned __int8)result != 1 )
        LOBYTE(result) = 3;
      if ( !v8 )
    case 2:
      v9 = (unsigned __int8)result;
      if ( v9 == 3 )
      if ( v9 == 2 )
    case 3:
      v10 = (unsigned __int8)result;
      if ( v10 == 3 )
      if ( v10 == 2 )
    case 4:
      v11 = (unsigned __int8)result;
      if ( v11 == 4 )
      if ( v11 == 5 )
    case 5:
      v12 = (unsigned __int8)result;
      if ( v12 == 5 )
      if ( v12 == 4 )
    default:
      result = 3;
  }
  return result;
}


signed int __fastcall PistonBlock::getSecondPart(PistonBlock *this, int a2, const BlockPos *a3, BlockPos *a4)
{
  unsigned int v4; // r9@1
  BlockPos *v5; // r4@1
  const BlockPos *v6; // r5@1
  unsigned __int64 *v7; // r0@1
  int v8; // r0@1
  int v9; // r2@1
  __int64 v10; // kr00_8@1
  int v11; // r0@1
  int v12; // r1@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = (unsigned __int64 *)Block::getBlockState(Block::mPiston, 15);
  v8 = 3 * (char)((0xFu >> (4 - (*v7 >> 32))) & (v4 >> (*v7 + 1 - (*v7 >> 32))));
  v9 = PistonBlock::ARM_DIRECTION_OFFSETS[v8];
  v10 = *(_QWORD *)&PistonBlock::ARM_DIRECTION_OFFSETS[v8 + 1];
  v11 = HIDWORD(v10) + *((_DWORD *)v6 + 2);
  v12 = v10 + (*(_QWORD *)v6 >> 32);
  *(_DWORD *)v5 = v9 + *(_QWORD *)v6;
  *((_DWORD *)v5 + 1) = v12;
  *((_DWORD *)v5 + 2) = v11;
  return 1;
}


signed int __fastcall PistonBlock::pushesUpFallingBlocks(PistonBlock *this)
{
  return 1;
}


int __fastcall PistonBlock::getSecondPart(PistonBlock *this, BlockSource *a2, const BlockPos *a3, BlockPos *a4)
{
  const BlockPos *v4; // r5@1
  BlockSource *v5; // r7@1
  PistonBlock *v6; // r6@1
  BlockPos *v7; // r8@1
  PistonBlockEntity *v8; // r0@1
  int result; // r0@3
  int (__fastcall *v15)(PistonBlock *, unsigned int, const BlockPos *, BlockPos *); // r4@4
  unsigned int v16; // r0@4

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = (PistonBlockEntity *)BlockSource::getBlockEntity(a2, a3);
  if ( !v8 )
    goto LABEL_7;
  _R0 = PistonBlockEntity::getProgress(v8, 1.0);
  __asm
  {
    VMOV            S0, R0
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    result = 0;
  else
LABEL_7:
    v15 = *(int (__fastcall **)(PistonBlock *, unsigned int, const BlockPos *, BlockPos *))(*(_DWORD *)v6 + 256);
    v16 = BlockSource::getData(v5, v4);
    result = v15(v6, v16, v4, v7);
  return result;
}


int __fastcall PistonBlock::getSpawnResourcesAuxValue(PistonBlock *this, int a2)
{
  unsigned int v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 15);
  return (unsigned __int8)(0xFu >> (4 - (*v3 >> 32))) & (unsigned __int8)(v2 >> (*v3 + 1 - (*v3 >> 32)));
}


int __fastcall PistonBlock::spawnResources(PistonBlock *this, BlockSource *a2, const BlockPos *a3, int a4, float a5, int a6)
{
  BlockSource *v6; // r5@1
  const BlockPos *v7; // r8@1
  PistonBlock *v8; // r6@1
  BlockState *v9; // r0@1
  int v10; // r4@1
  int v11; // r7@1
  signed int v12; // r0@1
  int result; // r0@8
  int v14; // [sp+0h] [bp-A8h]@9
  int v15; // [sp+8h] [bp-A0h]@13
  void *v16; // [sp+24h] [bp-84h]@11
  void *v17; // [sp+34h] [bp-74h]@9
  char v18; // [sp+48h] [bp-60h]@2
  int v19; // [sp+50h] [bp-58h]@6
  void *v20; // [sp+6Ch] [bp-3Ch]@4
  void *ptr; // [sp+7Ch] [bp-2Ch]@2

  v6 = a2;
  v7 = a3;
  v8 = this;
  v9 = (BlockState *)Block::getBlockState((int)this, 15);
  v10 = *(_QWORD *)v9 >> 32;
  v11 = *(_QWORD *)v9;
  BlockState::getMask(v9);
  v12 = 1 << (v11 + 1 - v10);
  if ( *((_DWORD *)v8 + 161) == 1 )
  {
    ItemInstance::ItemInstance((ItemInstance *)&v18, Block::mStickyPiston, 1, (unsigned __int8)v12);
    Block::popResource(v8, v6, v7, (const ItemInstance *)&v18);
    if ( ptr )
      operator delete(ptr);
    if ( v20 )
      operator delete(v20);
    if ( v19 )
      (*(void (**)(void))(*(_DWORD *)v19 + 4))();
    result = 0;
    v19 = 0;
  }
  else
    ItemInstance::ItemInstance((ItemInstance *)&v14, Block::mPiston, 1, (unsigned __int8)v12);
    Block::popResource(v8, v6, v7, (const ItemInstance *)&v14);
    if ( v17 )
      operator delete(v17);
    if ( v16 )
      operator delete(v16);
    if ( v15 )
      (*(void (**)(void))(*(_DWORD *)v15 + 4))();
  return result;
}


int __fastcall PistonBlock::breaksFallingBlocks(PistonBlock *this, int a2)
{
  return 0;
}


void __fastcall PistonBlock::~PistonBlock(PistonBlock *this)
{
  PistonBlock::~PistonBlock(this);
}


PistonBlockEntity *__fastcall PistonBlock::onLoaded(PistonBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  const BlockPos *v4; // r4@1
  Level *v5; // r0@1
  PistonBlockEntity *result; // r0@1
  Dimension *v7; // r0@2
  int v8; // r6@2
  unsigned int v9; // r7@2
  unsigned __int64 *v10; // r0@2
  int v11; // r7@2
  PistonConsumer *v12; // r6@2
  int (__fastcall *v13)(PistonConsumer *, _DWORD, void **); // r4@3
  bool v14; // zf@3
  _DWORD *v15; // r1@3
  char v16; // [sp+4h] [bp-1Ch]@2
  unsigned __int8 v17; // [sp+5h] [bp-1Bh]@2

  v3 = a2;
  v4 = a3;
  v5 = (Level *)BlockSource::getLevel(a2);
  result = (PistonBlockEntity *)Level::isClientSide(v5);
  if ( !result )
  {
    v7 = (Dimension *)BlockSource::getDimension(v3);
    v8 = Dimension::getCircuitSystem(v7);
    BlockSource::getBlockAndData((BlockSource *)&v16, v3, (int)v4);
    v9 = v17;
    v10 = (unsigned __int64 *)Block::getBlockState(Block::mPiston, 15);
    v11 = (char)((0xFu >> (4 - (*v10 >> 32))) & (v9 >> (*v10 + 1 - (*v10 >> 32))));
    v12 = (PistonConsumer *)CircuitSystem::create<PistonConsumer>(v8, v4, (int)v3, v11);
    PistonConsumer::setBlockPowerFace(v12, v11);
    result = (PistonBlockEntity *)BlockSource::getBlockEntity(v3, v4);
    if ( result )
    {
      v13 = *(int (__fastcall **)(PistonConsumer *, _DWORD, void **))(*(_DWORD *)v12 + 16);
      v14 = PistonBlockEntity::isExpanded(result) == 0;
      v15 = &Redstone::SIGNAL_MIN;
      if ( !v14 )
        v15 = &Redstone::SIGNAL_MAX;
      result = (PistonBlockEntity *)v13(v12, *v15, &Redstone::SIGNAL_MAX);
    }
  }
  return result;
}


void __fastcall PistonBlock::~PistonBlock(PistonBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall PistonBlock::shouldConnectToRedstone(PistonBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  int v4; // r4@1
  unsigned int v5; // r5@1
  unsigned __int64 *v6; // r0@1
  unsigned int v7; // r2@1
  signed int result; // r0@1

  v4 = a4;
  v5 = BlockSource::getData(a2, a3);
  v6 = (unsigned __int64 *)Block::getBlockState(Block::mPiston, 15);
  v7 = (0xFu >> (4 - (*v6 >> 32))) & (unsigned __int8)(v5 >> (*v6 + 1 - (*v6 >> 32)));
  result = 0;
  if ( v7 != Direction::DIRECTION_FACING[v4] )
    result = 1;
  return result;
}


int __fastcall PistonBlock::canBeSilkTouched(PistonBlock *this)
{
  return 0;
}


int __fastcall PistonBlock::onPlace(PistonBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  PistonBlock *v5; // r6@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  Block::onPlace(this, a2, a3);
  return (*(int (__fastcall **)(PistonBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v5 + 188))(v5, v4, v3);
}


PistonBlockEntity *__fastcall PistonBlock::neighborChanged(PistonBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r10@1
  PistonBlock *v6; // r8@1
  const BlockPos *v7; // r6@1
  unsigned int v8; // r11@1
  __int64 v9; // r2@1
  PistonBlockEntity *result; // r0@1
  PistonBlockEntity *v11; // r6@5
  char v16; // [sp+Ch] [bp-2Ch]@8
  unsigned __int8 v17; // [sp+10h] [bp-28h]@4

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = BlockSource::getData(a2, a3);
  v9 = *(_QWORD *)Block::getBlockState(Block::mPiston, 15);
  result = (PistonBlockEntity *)PistonBlock::ARM_DIRECTION_OFFSETS;
  if ( PistonBlock::ARM_DIRECTION_OFFSETS[3 * (char)((v8 >> (1 - BYTE4(v9) + v9)) & (0xFu >> (4 - BYTE4(v9))))]
     + *(_DWORD *)v4 == *(_DWORD *)v7
    && PistonBlock::ARM_DIRECTION_OFFSETS[3 * (char)((v8 >> (1 - BYTE4(v9) + v9)) & (0xFu >> (4 - BYTE4(v9)))) + 1]
     + *((_DWORD *)v4 + 1) == *((_DWORD *)v7 + 1) )
  {
    result = (PistonBlockEntity *)(PistonBlock::ARM_DIRECTION_OFFSETS[3
                                                                    * (char)((v8 >> (1 - BYTE4(v9) + v9)) & (0xFu >> (4 - BYTE4(v9))))
                                                                    + 2]
                                 + *((_DWORD *)v4 + 2));
    if ( result == *((PistonBlockEntity **)v7 + 2) )
    {
      BlockSource::getBlockID((BlockSource *)&v17, v5, (int)v7);
      result = (PistonBlockEntity *)*(_BYTE *)(Block::mPistonArm + 4);
      if ( (PistonBlockEntity *)v17 != result )
      {
        result = (PistonBlockEntity *)BlockSource::getBlockEntity(v5, v4);
        v11 = result;
        if ( result )
        {
          result = (PistonBlockEntity *)PistonBlockEntity::isRetracting(result);
          if ( !result )
          {
            result = (PistonBlockEntity *)PistonBlockEntity::getProgress(v11, 0.0);
            __asm
            {
              VLDR            S0, =0.0001
              VMOV            S2, R0
              VCMPE.F32       S2, S0
              VMRS            APSR_nzcv, FPSCR
            }
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              (*(void (__fastcall **)(PistonBlock *, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v6 + 276))(
                v6,
                v5,
                v4,
                v8);
              v16 = BlockID::AIR;
              result = (PistonBlockEntity *)BlockSource::setBlock((int)v5, v4, &v16, 3);
          }
        }
      }
    }
  }
  return result;
}


int __fastcall PistonBlock::getVariant(PistonBlock *this, int a2)
{
  return 0;
}


int __fastcall PistonBlock::PistonBlock(int a1, const void **a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r6@1
  int v6; // r5@1
  const void **v7; // r7@1
  int v8; // r0@1
  int *v14; // r2@1
  float v16; // [sp+4h] [bp-1Ch]@1
  int v17; // [sp+8h] [bp-18h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = Material::getMaterial(32);
  EntityBlock::EntityBlock(v4, v7, v6, v8);
  *(_DWORD *)v4 = &off_2710A68;
  *(_DWORD *)(v4 + 644) = v5;
  Block::setSolid((Block *)v4, 0);
  Block::setPushesOutItems((Block *)v4, 1);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 484))(v4);
  *(_DWORD *)(v4 + 32) = 18;
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
    VSTR            S0, [SP,#0x20+var_1C]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v14 = &v17;
  Block::mTranslucency[v6] = *v14;
  return v4;
}
