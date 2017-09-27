

AABB *__fastcall CocoaBlock::getVisualShape(CocoaBlock *this, int a2, AABB *a3, bool a4)
{
  unsigned int v4; // r5@1
  AABB *v5; // r4@1
  __int64 v6; // r6@1
  unsigned __int64 *v7; // r0@1
  unsigned int v8; // r0@1
  float v16; // [sp+0h] [bp-20h]@0
  float v17; // [sp+8h] [bp-18h]@0

  v4 = a2;
  v5 = a3;
  v6 = *(_QWORD *)Block::getBlockState((int)this, 12);
  v7 = (unsigned __int64 *)Block::getBlockState(Block::mCocoa, 1);
  v8 = (0xFu >> (4 - (*v7 >> 32))) & (v4 >> (*v7 + 1 - (*v7 >> 32)));
  HIDWORD(_R0) = 2 * v8 + 4;
  __asm
  {
    VMOV            S0, R1
    VCVT.F32.S32    S0, S0
  }
  LODWORD(_R0) = 2 * _R0 + 5;
  switch ( (v4 >> (1 - BYTE4(v6) + v6)) & (0xFu >> (4 - BYTE4(v6))) )
    case 0u:
      __asm
      {
        VMOV.F32        S4, #15.0; jumptable 018848F2 case 0
        VLDR            S8, =0.03125
        VMOV            S6, R0
        VMUL.F32        S8, S0, S8
        VMOV.F32        S2, #12.0
        VCVT.F32.S32    S6, S6
      }
      v17 = 0.9375;
        VMOV.F32        S10, #0.5
        VSUB.F32        S0, S4, S0
        VLDR            S4, =0.0625
        VSUB.F32        S2, S2, S6
        VSUB.F32        S6, S10, S8
        VMUL.F32        S0, S0, S4
        VMUL.F32        S2, S2, S4
        VMOV            R1, S6
        VMOV            R3, S0
        VADD.F32        S0, S8, S10
        VMOV            R2, S2
        VSTR            S0, [SP,#0x20+var_20]
      goto LABEL_6;
    case 1u:
        VMOV            S4, R0  ; jumptable 018848F2 case 1
        VLDR            S6, =0.03125
        VCVT.F32.S32    S4, S4
        VMOV.F32        S12, #1.0
      _R0 = __PAIR__(1031798784, (unsigned int)v5);
        VMUL.F32        S6, S0, S6
        VMOV.F32        S8, #0.5
        VSUB.F32        S2, S2, S4
        VADD.F32        S0, S0, S12
        VSUB.F32        S10, S8, S6
        VMOV            R3, S10
        VADD.F32        S2, S6, S8
        VSTR            S2, [SP,#0x20+var_18]
      goto LABEL_7;
    case 2u:
        VMOV            S4, R0  ; jumptable 018848F2 case 2
      LODWORD(_R0) = v5;
      __asm { VMUL.F32        S6, S0, S6 }
      HIDWORD(_R2) = 1031798784;
        VMOV            R1, S10
        VSTR            S2, [SP,#0x20+var_20]
        VSTR            S0, [SP,#0x20+var_18]
    case 3u:
        VMOV            S6, R0  ; jumptable 018848F2 case 3
        VMOV.F32        S4, #15.0
      v16 = 0.9375;
        VMOV            R3, S6
        VMOV            R1, S0
LABEL_6:
LABEL_7:
      AABB::set(_R0, _R2, v16, 0.75, v17);
      break;
    default:
      return v5;
  return v5;
}


unsigned int __fastcall CocoaBlock::spawnResources(CocoaBlock *this, BlockSource *a2, const BlockPos *a3, int a4, float a5, int a6)
{
  BlockSource *v6; // r5@1
  Block *v7; // r11@1
  unsigned __int8 v8; // r7@1
  const BlockPos *v9; // r9@1
  signed int v10; // r4@1
  unsigned __int64 *v11; // r0@1
  signed int v12; // r8@1
  char *v13; // r0@10
  unsigned int result; // r0@10
  Level *v15; // [sp+4h] [bp-BCh]@1
  char v16; // [sp+8h] [bp-B8h]@11
  int v17; // [sp+10h] [bp-B0h]@15
  void *v18; // [sp+2Ch] [bp-94h]@13
  void *v19; // [sp+3Ch] [bp-84h]@11
  char v20; // [sp+50h] [bp-70h]@3
  int v21; // [sp+58h] [bp-68h]@7
  void *v22; // [sp+74h] [bp-4Ch]@5
  void *ptr; // [sp+84h] [bp-3Ch]@3

  v6 = a2;
  v7 = this;
  v8 = a4;
  v9 = a3;
  v15 = (Level *)BlockSource::getLevel(a2);
  v10 = 1;
  v11 = (unsigned __int64 *)Block::getBlockState(Block::mCocoa, 1);
  v12 = 0;
  if ( (signed int)((0xFu >> (4 - (*v11 >> 32))) & (v8 >> (*v11 + 1 - (*v11 >> 32)))) > 1 )
    v10 = 2;
  do
  {
    ItemInstance::ItemInstance((ItemInstance *)&v20, Item::mDye_powder, 1, 3);
    Block::popResource(v7, v6, v9, (const ItemInstance *)&v20);
    if ( ptr )
      operator delete(ptr);
    if ( v22 )
      operator delete(v22);
    if ( v21 )
      (*(void (**)(void))(*(_DWORD *)v21 + 4))();
    ++v12;
    v21 = 0;
  }
  while ( v12 < v10 );
  v13 = Level::getRandom(v15);
  result = Random::_genRandInt32((Random *)v13);
  if ( result & 1 )
    ItemInstance::ItemInstance((ItemInstance *)&v16, Item::mDye_powder, 1, 3);
    Block::popResource(v7, v6, v9, (const ItemInstance *)&v16);
    if ( v19 )
      operator delete(v19);
    if ( v18 )
      operator delete(v18);
    if ( v17 )
      (*(void (**)(void))(*(_DWORD *)v17 + 4))();
    result = 0;
  return result;
}


int __fastcall CocoaBlock::getPlacementDataValue(CocoaBlock *this, Entity *a2, const BlockPos *a3, int a4, const Vec3 *a5, int a6)
{
  if ( (unsigned __int8)a4 < 2u )
    a4 = 2;
  return Direction::DIRECTION_OPPOSITE[Direction::FACING_DIRECTION[a4]];
}


int __fastcall CocoaBlock::onPlace(CocoaBlock *this, BlockSource *a2, const BlockPos *a3)
{
  CocoaBlock *v3; // r6@1
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  int result; // r0@1
  void (__fastcall *v7)(CocoaBlock *, BlockSource *, const BlockPos *, unsigned int); // r8@2
  unsigned int v8; // r0@2
  __int16 v9; // [sp+Ch] [bp-1Ch]@2

  v3 = this;
  v4 = a3;
  v5 = a2;
  result = (*(int (**)(void))(*(_DWORD *)this + 324))();
  if ( !result )
  {
    v7 = *(void (__fastcall **)(CocoaBlock *, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v3 + 276);
    v8 = BlockSource::getData(v5, v4);
    v7(v3, v5, v4, v8);
    v9 = 0;
    result = BlockSource::setBlockAndData((int)v5, v4, (int)&v9, 3, 0);
  }
  return result;
}


int __fastcall CocoaBlock::CocoaBlock(int a1, const void **a2, int a3)
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
  v6 = Material::getMaterial(8);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &loc_27062CC;
  Block::setSolid((Block *)v3, 0);
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 476))(v3, 1);
  *(_DWORD *)(v3 + 20) = 4;
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
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 28) = 0;
  return v3;
}


void __fastcall CocoaBlock::~CocoaBlock(CocoaBlock *this)
{
  CocoaBlock::~CocoaBlock(this);
}


unsigned int __fastcall CocoaBlock::tick(CocoaBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  CocoaBlock *v4; // r6@1
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r5@1
  Level *v7; // r0@2
  char *v8; // r0@2
  unsigned int result; // r0@2
  unsigned int v10; // r8@3
  unsigned __int64 *v11; // r0@3
  char v12; // r1@3
  char v13; // r1@3
  unsigned int v14; // r1@3
  char v15; // r7@3
  BlockState *v16; // r0@4
  __int64 v17; // r9@4
  char v18; // r0@4
  void (__fastcall *v19)(CocoaBlock *, BlockSource *, const BlockPos *, unsigned int); // r8@6
  unsigned int v20; // r0@6
  char v21; // [sp+8h] [bp-28h]@4
  __int16 v22; // [sp+Ch] [bp-24h]@6

  v4 = this;
  v5 = a3;
  v6 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)this + 324))() )
  {
    v7 = (Level *)BlockSource::getLevel(v6);
    v8 = Level::getRandom(v7);
    result = Random::_genRandInt32((Random *)v8) % 5;
    if ( !result )
    {
      v10 = BlockSource::getData(v6, v5);
      v11 = (unsigned __int64 *)Block::getBlockState(Block::mCocoa, 1);
      v12 = *v11;
      LOBYTE(v11) = *v11 >> 32;
      v13 = v12 + 1 - (_BYTE)v11;
      result = 0xFu >> (4 - (_BYTE)v11);
      v14 = v10 >> v13;
      v15 = v14 & result;
      if ( (signed int)(v14 & result) <= 1 )
      {
        v16 = (BlockState *)Block::getBlockState((int)v4, 1);
        v17 = *(_QWORD *)v16;
        v18 = BlockState::getMask(v16);
        v21 = *((_BYTE *)v4 + 4);
        result = BlockSource::setBlockAndData(
                   (int)v6,
                   v5,
                   &v21,
                   v10 & ~v18 | ((v15 + 1) << (v17 + 1 - BYTE4(v17))),
                   3,
                   0);
      }
    }
  }
  else
    v19 = *(void (__fastcall **)(CocoaBlock *, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v4 + 276);
    v20 = BlockSource::getData(v6, v5);
    v19(v4, v6, v5, v20);
    v22 = 0;
    result = BlockSource::setBlockAndData((int)v6, v5, (int)&v22, 3, 0);
  return result;
}


unsigned int __fastcall CocoaBlock::getAge(CocoaBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = (unsigned __int8)this;
  v3 = (unsigned __int64 *)Block::getBlockState(Block::mCocoa, 1);
  return (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
}


int __fastcall CocoaBlock::neighborChanged(CocoaBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  CocoaBlock *v4; // r6@1
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r5@1
  int result; // r0@1
  void (__fastcall *v8)(CocoaBlock *, BlockSource *, const BlockPos *, unsigned int); // r8@2
  unsigned int v9; // r0@2
  __int16 v10; // [sp+Ch] [bp-1Ch]@2

  v4 = this;
  v5 = a3;
  v6 = a2;
  result = (*(int (**)(void))(*(_DWORD *)this + 324))();
  if ( !result )
  {
    v8 = *(void (__fastcall **)(CocoaBlock *, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v4 + 276);
    v9 = BlockSource::getData(v6, v5);
    v8(v4, v6, v5, v9);
    v10 = 0;
    result = BlockSource::setBlockAndData((int)v6, v5, (int)&v10, 3, 0);
  }
  return result;
}


int __fastcall CocoaBlock::canBeSilkTouched(CocoaBlock *this)
{
  return 0;
}


void __fastcall CocoaBlock::~CocoaBlock(CocoaBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall CocoaBlock::onFertilized(CocoaBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4, ItemUseCallback *a5)
{
  BlockPos *v5; // r4@1
  BlockSource *v6; // r5@1
  CocoaBlock *v7; // r9@1
  unsigned int v8; // r7@1
  unsigned __int64 *v9; // r0@1
  signed int v10; // r6@1
  Level *v11; // r0@2
  BlockState *v12; // r0@3
  __int64 v13; // r10@3
  unsigned int v14; // r0@3
  char v15; // r1@3
  int v16; // r0@3
  int v17; // r2@3
  char v18; // r6@3
  char v20; // [sp+8h] [bp-30h]@6
  char v21; // [sp+Ch] [bp-2Ch]@3
  char v22; // [sp+Dh] [bp-2Bh]@3
  char v23; // [sp+10h] [bp-28h]@3

  v5 = a3;
  v6 = a2;
  v7 = this;
  v8 = BlockSource::getData(a2, a3);
  v9 = (unsigned __int64 *)Block::getBlockState(Block::mCocoa, 1);
  v10 = (v8 >> (*v9 + 1 - (*v9 >> 32))) & (0xFu >> (4 - (*v9 >> 32)));
  if ( v10 > 1 )
    return 0;
  v11 = (Level *)BlockSource::getLevel(v6);
  if ( !Level::isClientSide(v11) )
  {
    BlockSource::getBlockAndData((BlockSource *)&v23, v6, (int)v5);
    v12 = (BlockState *)Block::getBlockState((int)v7, 1);
    v13 = *(_QWORD *)v12;
    v14 = BlockState::getMask(v12);
    v15 = *((_BYTE *)v7 + 4);
    v16 = v8 & ~v14;
    v21 = *((_BYTE *)v7 + 4);
    v17 = (v10 + 1) << (v13 + 1 - BYTE4(v13));
    v18 = v16 | v17;
    v22 = v16 | v17;
    if ( a5 )
    {
      if ( (*(int (__fastcall **)(ItemUseCallback *, BlockPos *, char *, char *))(*(_DWORD *)a5 + 16))(
             a5,
             v5,
             &v23,
             &v21) )
      {
        return 0;
      }
      v20 = *((_BYTE *)v7 + 4);
      BlockSource::setBlockAndData((int)v6, v5, &v20, v18, 3, 0);
      (*(void (__fastcall **)(ItemUseCallback *, BlockPos *, char *, char *))(*(_DWORD *)a5 + 20))(a5, v5, &v23, &v21);
    }
    else
      v20 = v15;
  }
  return 1;
}


signed int __fastcall CocoaBlock::canSurvive(CocoaBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r7@1
  const BlockPos *v4; // r5@1
  unsigned __int64 *v5; // r6@1
  unsigned int v6; // r0@1
  int v7; // r4@1
  unsigned int v8; // r0@1
  int v9; // r2@1
  int v10; // r0@1
  int v11; // r1@1
  signed int v12; // r4@1
  RotatedPillarBlock *v14; // [sp+4h] [bp-24h]@1
  int v15; // [sp+8h] [bp-20h]@1
  int v16; // [sp+Ch] [bp-1Ch]@1
  int v17; // [sp+10h] [bp-18h]@1

  v3 = a2;
  v4 = a3;
  v5 = (unsigned __int64 *)Block::getBlockState((int)this, 12);
  v6 = BlockSource::getData(v3, v4);
  v7 = *(_QWORD *)v4;
  v8 = (v6 >> (*v5 + 1 - (*v5 >> 32))) & (0xFu >> (4 - (*v5 >> 32)));
  v16 = *(_QWORD *)v4 >> 32;
  v9 = Direction::STEP_X[v8];
  v10 = Direction::STEP_Z[v8];
  v11 = *((_DWORD *)v4 + 2);
  v15 = v9 + v7;
  v17 = v10 + v11;
  BlockSource::getBlockAndData((BlockSource *)&v14, v3, (int)&v15);
  v12 = 0;
  if ( (unsigned __int8)v14 == *(_BYTE *)(Block::mLog + 4)
    && RotatedPillarBlock::getType((RotatedPillarBlock *)BYTE1(v14), (unsigned __int8)v14) == 3 )
  {
    v12 = 1;
  }
  return v12;
}
