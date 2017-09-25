

int __fastcall DispenserBlock::onLoaded(DispenserBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r4@1
  const BlockPos *v4; // r5@1
  Level *v5; // r0@1
  int result; // r0@1
  Dimension *v7; // r0@2
  int v8; // r0@2

  v3 = a2;
  v4 = a3;
  v5 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v5);
  if ( !result )
  {
    v7 = (Dimension *)BlockSource::getDimension(v3);
    v8 = Dimension::getCircuitSystem(v7);
    result = CircuitSystem::create<ConsumerComponent>(v8, v4, (int)v3, 0);
    if ( result )
    {
      *(_BYTE *)(result + 44) = 1;
      *(_BYTE *)(result + 46) = 1;
    }
  }
  return result;
}


int __fastcall DispenserBlock::ejectItem(DispenserBlock *this, BlockSource *a2, const Vec3 *a3, int a4, const ItemInstance *a5)
{
  BlockSource *v5; // r5@1
  const Vec3 *v7; // r6@1
  ItemInstance *v13; // r0@1
  Level *v16; // r0@3
  Spawner *v17; // r0@3
  Level *v19; // r0@3
  char *v20; // r0@3
  Random *v21; // r5@3
  int result; // r0@7
  float v27; // [sp+Ch] [bp-94h]@3
  char v28; // [sp+18h] [bp-88h]@1
  int v29; // [sp+20h] [bp-80h]@7
  void *v30; // [sp+3Ch] [bp-64h]@5
  void *ptr; // [sp+4Ch] [bp-54h]@3

  v5 = this;
  _R4 = a2;
  v7 = a3;
  _R0 = &Vec3::ZERO;
  __asm
  {
    VLDR            S20, [R0]
    VLDR            S24, [R0,#4]
    VLDR            S22, [R0,#8]
  }
  v13 = ItemInstance::ItemInstance((ItemInstance *)&v28, a4);
    VMOV.F32        S0, #-0.125
    VMOV.F32        S26, #-0.15625
  _R1 = &Facing::STEP_Z[(_DWORD)v7];
  if ( (unsigned __int8)v7 < 2u )
    __asm { VMOVCC.F32      S26, S0 }
  __asm { VLDR            S0, [R1] }
  _R1 = &Facing::STEP_X[(_DWORD)v7];
    VLDR            S2, [R1]
    VCVT.F32.S32    S16, S0
    VCVT.F32.S32    S18, S2
  ItemInstance::set(v13, 1);
  v16 = (Level *)BlockSource::getLevel(v5);
  v17 = (Spawner *)Level::getSpawner(v16);
    VADD.F32        S0, S26, S24
    VLDR            S2, [R4]
    VLDR            S4, [R4,#4]
    VLDR            S6, [R4,#8]
    VADD.F32        S2, S2, S20
    VADD.F32        S0, S4, S0
    VADD.F32        S4, S6, S22
    VSTR            S2, [SP,#0xA0+var_94]
    VSTR            S0, [SP,#0xA0+var_90]
    VSTR            S4, [SP,#0xA0+var_8C]
  _R4 = Spawner::spawnItem(v17, v5, (const ItemInstance *)&v28, 0, (const Vec3 *)&v27, 0);
  v19 = (Level *)BlockSource::getLevel(v5);
  v20 = Level::getRandom(v19);
  v21 = (Random *)v20;
  _R0 = Random::_genRandInt32((Random *)v20);
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VLDR            S2, =0.1
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.2
    VADD.F32        S0, S0, S2
    VMUL.F32        S2, S0, S18
    VMUL.F32        S0, S0, S16
    VSTR            S2, [R4,#0x6C]
  *(_DWORD *)(_R4 + 112) = 1045220557;
  __asm { VSTR            S0, [R4,#0x74] }
  _R0 = Random::nextGaussian(v21);
    VLDR            S16, =0.045
    VLDR            S2, [R4,#0x6C]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R4,#0x6C]
    VLDR            S2, [R4,#0x70]
    VSTR            S0, [R4,#0x70]
    VLDR            S2, [R4,#0x74]
    VSTR            S0, [R4,#0x74]
  if ( ptr )
    operator delete(ptr);
  if ( v30 )
    operator delete(v30);
  result = v29;
  if ( v29 )
    result = (*(int (**)(void))(*(_DWORD *)v29 + 4))();
  return result;
}


int __fastcall DispenserBlock::ejectItem(DispenserBlock *this, BlockSource *a2, const Vec3 *a3, Vec3 *a4, const ItemInstance *a5, Container *a6, int a7)
{
  const Vec3 *v7; // r4@1
  BlockSource *v8; // r5@1
  Player *v9; // r0@1
  const ItemInstance *v11; // [sp+0h] [bp-18h]@0

  v7 = a3;
  v8 = a2;
  DispenserBlock::ejectItem(a2, a3, a4, (int)a5, v11);
  (*(void (**)(void))(*(_DWORD *)a6 + 36))();
  v9 = (Player *)BlockSource::getLevel(v8);
  return Level::broadcastLevelEvent(v9, 1000, __PAIR__(1000, (unsigned int)v7), 0);
}


void __fastcall DispenserBlock::~DispenserBlock(DispenserBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall DispenserBlock::use(DispenserBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  DispenserBlock *v4; // r6@1
  Entity *v5; // r5@1
  const BlockPos *v6; // r4@1
  Level *v7; // r0@2
  BlockSource *v8; // r0@3
  BlockEntity *v9; // r0@3
  BlockEntity *v10; // r7@3
  int v11; // r8@4
  signed int v12; // r2@5
  BlockSource *v14; // r0@9

  v4 = this;
  v5 = a2;
  v6 = a3;
  if ( Player::canUseAbility((int)a2, &Abilities::OPEN_CONTAINERS) != 1 )
    return 1;
  v7 = (Level *)Entity::getLevel(v5);
  if ( Level::isClientSide(v7) )
  v8 = (BlockSource *)Entity::getRegion(v5);
  v9 = (BlockEntity *)BlockSource::getBlockEntity(v8, v6);
  v10 = v9;
  if ( !v9 )
  v11 = *((_DWORD *)v4 + 8);
  if ( v11 == *(_DWORD *)BlockEntity::getType(v9) )
  {
    (*(void (__fastcall **)(BlockEntity *, Entity *))(*(_DWORD *)v10 + 116))(v10, v5);
    v12 = 0;
    if ( *((_DWORD *)v4 + 8) == 13 )
      v12 = 1;
    (*(void (__fastcall **)(Entity *, const BlockPos *, signed int))(*(_DWORD *)v5 + 1316))(v5, v6, v12);
  }
  BlockEntity::getType(v10);
  v14 = (BlockSource *)Entity::getRegion(v5);
  BlockSource::removeBlock(v14, v6);
  return 1;
}


int __fastcall DispenserBlock::onPlace(DispenserBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  DispenserBlock *v5; // r6@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  Block::onPlace(this, a2, a3);
  return (*(int (__fastcall **)(DispenserBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v5 + 188))(v5, v4, v3);
}


signed int __fastcall DispenserBlock::hasComparatorSignal(DispenserBlock *this)
{
  return 1;
}


int __fastcall DispenserBlock::recalcLockDir(DispenserBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  DispenserBlock *v4; // r6@1
  const BlockPos *v5; // r4@1
  Level *v6; // r0@1
  int result; // r0@1
  int v8; // r2@2
  _BOOL4 v9; // r9@2
  int v10; // r2@2
  _BOOL4 v11; // r10@2
  int v12; // r1@2
  int v13; // r2@2
  _BOOL4 v14; // r8@2
  int v15; // r1@2
  int v16; // r2@2
  _BOOL4 v17; // r0@2
  int v18; // r11@2
  signed int v19; // r1@2
  int v20; // r12@6
  signed int v21; // r6@6
  signed int v22; // r3@10
  signed int v23; // r2@14
  signed int v24; // r7@18
  BlockState *v25; // r0@22
  int v26; // r1@22 OVERLAPPED
  int v27; // r2@22 OVERLAPPED
  unsigned __int8 v28; // r9@24
  int v29; // r1@24
  unsigned __int8 v30; // r0@26
  char v31; // [sp+4h] [bp-5Ch]@26
  unsigned __int8 v32; // [sp+5h] [bp-5Bh]@26
  int v33; // [sp+8h] [bp-58h]@2
  int v34; // [sp+Ch] [bp-54h]@2
  int v35; // [sp+10h] [bp-50h]@2
  int v36; // [sp+14h] [bp-4Ch]@2
  int v37; // [sp+18h] [bp-48h]@2
  int v38; // [sp+1Ch] [bp-44h]@2
  __int64 v39; // [sp+20h] [bp-40h]@2
  int v40; // [sp+28h] [bp-38h]@2
  __int64 v41; // [sp+2Ch] [bp-34h]@2
  int v42; // [sp+34h] [bp-2Ch]@2
  char v43; // [sp+38h] [bp-28h]@2
  unsigned __int8 v44; // [sp+39h] [bp-27h]@10

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v6);
  if ( !result )
  {
    BlockSource::getBlockAndData((BlockSource *)&v43, v3, (int)v5);
    v8 = *((_DWORD *)v5 + 2);
    v41 = *(_QWORD *)v5;
    v42 = v8 - 1;
    v9 = BlockSource::isSolidBlockingBlock(v3, (const BlockPos *)&v41);
    v10 = *((_DWORD *)v5 + 2);
    v39 = *(_QWORD *)v5;
    v40 = v10 + 1;
    v11 = BlockSource::isSolidBlockingBlock(v3, (const BlockPos *)&v39);
    v12 = *((_DWORD *)v5 + 1);
    v13 = *((_DWORD *)v5 + 2);
    v36 = *(_DWORD *)v5 + 1;
    v37 = v12;
    v38 = v13;
    v14 = BlockSource::isSolidBlockingBlock(v3, (const BlockPos *)&v36);
    v15 = *((_DWORD *)v5 + 1);
    v16 = *((_DWORD *)v5 + 2);
    v33 = *(_DWORD *)v5 - 1;
    v34 = v15;
    v35 = v16;
    v17 = BlockSource::isSolidBlockingBlock(v3, (const BlockPos *)&v33);
    v18 = !v17;
    v19 = 5;
    if ( v17 != 1 )
      v19 = 2;
    if ( v14 )
    v20 = (int)v4;
    v21 = v19;
    if ( v14 == 1 )
      v21 = 4;
    if ( v17 )
      v21 = v19;
    v22 = v44;
    if ( v9 == 1 )
      v22 = 3;
    if ( v11 )
      v22 = v44;
    v23 = v22;
    if ( v14 != 1 )
      v23 = v21;
    if ( !v17 )
      v23 = v22;
    v24 = v23;
    if ( !v9 )
      v24 = v21;
    if ( !v11 )
      v24 = v23;
    v25 = (BlockState *)Block::getBlockState(v20, 15);
    *(_QWORD *)&v26 = *(_QWORD *)v25;
    if ( !v18 )
      v21 = v24;
    v28 = v44;
    v29 = v26 + 1 - v27;
    if ( !v14 )
    v30 = v28 & ~(unsigned __int8)BlockState::getMask(v25) | (v21 << v29);
    v44 = v30;
    v31 = v43;
    v32 = v30;
    result = BlockSource::setBlockAndData((int)v3, v5, (int)&v31, 2, 0);
  }
  return result;
}


signed int __fastcall DispenserBlock::getSpawnResourcesAuxValue(DispenserBlock *this, unsigned __int8 a2)
{
  return 3;
}


void __fastcall DispenserBlock::~DispenserBlock(DispenserBlock *this)
{
  DispenserBlock::~DispenserBlock(this);
}


signed int __fastcall DispenserBlock::isContainerBlock(DispenserBlock *this)
{
  return 1;
}


int __fastcall DispenserBlock::getMappedFace(DispenserBlock *this, int a2, int a3)
{
  int v3; // r4@1
  unsigned __int8 v4; // r5@1
  unsigned __int64 *v5; // r0@1
  unsigned int v6; // r1@1
  int result; // r0@1
  signed int v8; // r1@2

  v3 = a2;
  v4 = a3;
  v5 = (unsigned __int64 *)Block::getBlockState((int)this, 15);
  v6 = (v4 >> (*v5 + 1 - (*v5 >> 32))) & (0xFu >> (4 - (*v5 >> 32)));
  result = v6 | 1;
  if ( v3 == v6 )
  {
    v8 = 3;
    if ( result == 1 )
      v8 = 5;
    result = v8;
  }
  else
    if ( result != 1 )
      result = 2;
    if ( (unsigned __int8)v3 < 2u )
      result = 1;
  return result;
}


int __fastcall DispenserBlock::DispenserBlock(int a1, const void **a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(3);
  EntityBlock::EntityBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &loc_27078FC;
  *(_DWORD *)(v3 + 32) = 13;
  Block::setIsInteraction((Block *)v3, 1);
  return v3;
}


int __fastcall DispenserBlock::getDispensePosition(DispenserBlock *this, BlockSource *a2, const Vec3 *a3, int a4)
{
  BlockSource *v5; // r7@1
  BlockSource *v6; // r6@1
  unsigned int v7; // r4@1
  unsigned __int64 *v8; // r0@1
  int result; // r0@1
  char v17; // [sp+4h] [bp-24h]@1

  _R5 = a4;
  v5 = a2;
  v6 = a3;
  BlockPos::BlockPos((int)&v17, a4);
  v7 = BlockSource::getData(v6, (const BlockPos *)&v17);
  v8 = (unsigned __int64 *)Block::getBlockState((int)v5, 15);
  __asm
  {
    VMOV.F32        S2, #1.0
    VLDR            S0, =0.0
  }
  _R0 = (0xFu >> (4 - (*v8 >> 32))) & (v7 >> (*v8 + 1 - (*v8 >> 32)));
  _R1 = 715827883;
    VMOV.F32        S4, S0
    SMMUL.W         R1, R0, R1
    VMOV.F32        S8, #0.5
    VMOV.F32        S6, S0
    VLDR            S1, =-0.7
  result = *((_BYTE *)&Facing::DIRECTIONS + _R0 - 6 * (_R1 + (_R1 >> 31)));
  if ( result == 5 )
    __asm { VMOVEQ.F32      S4, S2 }
  if ( result == 1 )
    __asm { VMOVEQ.F32      S6, S2 }
  if ( result == 3 )
    __asm { VMOVEQ.F32      S0, S2 }
    VLDR            S2, =0.7
    VLDR            S10, [R5]
    VMUL.F32        S4, S4, S2
    VLDR            S12, [R5,#4]
    VLDR            S14, [R5,#8]
    VMUL.F32        S6, S6, S2
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.3
    VADD.F32        S10, S10, S8
  if ( _ZF )
    __asm { VMOVEQ.F32      S4, S1 }
    VADD.F32        S2, S12, S2
    VADD.F32        S8, S14, S8
    __asm { VMOVEQ.F32      S6, S1 }
  if ( result == 2 )
    __asm { VMOVEQ.F32      S0, S1 }
    VADD.F32        S4, S10, S4
    VADD.F32        S2, S2, S6
    VADD.F32        S0, S8, S0
    VSTR            S4, [R8]
    VSTR            S2, [R8,#4]
    VSTR            S0, [R8,#8]
  return result;
}


int __fastcall DispenserBlock::dispenseFrom(DispenserBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r7@1
  BlockSource *v4; // r6@1
  DispenserBlock *v5; // r10@1
  int result; // r0@1
  int v7; // r4@1
  Level *v8; // r0@2
  int v9; // r0@2
  int v10; // r9@2
  int v11; // r0@3
  int v12; // r5@3
  unsigned int v14; // r11@8
  unsigned __int64 *v15; // r0@8
  int v22; // r0@8
  unsigned int v23; // r7@20
  unsigned __int64 *v24; // r0@20
  int v27; // r7@20
  int v29; // r0@20
  int v30; // r10@20
  const Vec3 *v31; // r11@20
  int v32; // r0@22
  Player *v33; // r4@23
  __int64 v34; // r2@23
  Player *v35; // r0@26
  __int64 v36; // r2@26
  int v37; // r5@27
  int v38; // r7@27
  Player *v39; // r0@27
  __int64 v40; // r2@27
  const ItemInstance *v41; // [sp+0h] [bp-60h]@22
  float v42; // [sp+Ch] [bp-54h]@8
  float v45; // [sp+18h] [bp-48h]@22
  char v46; // [sp+24h] [bp-3Ch]@23
  char v47; // [sp+30h] [bp-30h]@8

  v3 = a3;
  v4 = a2;
  v5 = this;
  result = BlockSource::getBlockEntity(a2, a3);
  v7 = result;
  if ( result )
  {
    v8 = (Level *)BlockSource::getLevel(v4);
    RandomizableBlockEntityContainerBase::unPackLootTable(
      (RandomizableBlockEntityContainerBase *)v7,
      v8,
      (Container *)(v7 + 112));
    v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 140))(v7);
    v10 = v9;
    if ( v9 <= -1 )
    {
      v33 = (Player *)BlockSource::getLevel(v4);
      Vec3::Vec3((int)&v46, (int)v3);
      LODWORD(v34) = &v46;
      HIDWORD(v34) = 1200;
      result = Level::broadcastLevelEvent(v33, 1001, v34, 0);
    }
    else
      v11 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v7 + 128))(v7, v9);
      v12 = v11;
      result = *(_BYTE *)(v11 + 15);
      _ZF = result == 0;
      if ( result )
      {
        result = *(_DWORD *)v12;
        _ZF = *(_DWORD *)v12 == 0;
      }
      if ( !_ZF )
        result = ItemInstance::isNull((ItemInstance *)v12);
        if ( !result )
        {
          result = *(_BYTE *)(v12 + 14);
          if ( *(_BYTE *)(v12 + 14) )
          {
            Vec3::Vec3((int)&v42, (int)v3);
            BlockPos::BlockPos((int)&v47, (int)&v42);
            v14 = BlockSource::getData(v4, (const BlockPos *)&v47);
            v15 = (unsigned __int64 *)Block::getBlockState((int)v5, 15);
            __asm { VMOV.F32        S2, #1.0 }
            _R0 = (0xFu >> (4 - (*v15 >> 32))) & (v14 >> (*v15 + 1 - (*v15 >> 32)));
            _R1 = 715827883;
            __asm
            {
              VLDR            S0, =0.0
              SMMUL.W         R1, R0, R1
              VMOV.F32        S4, S0
              VMOV.F32        S8, #0.5
              VLDR            S1, =-0.7
              VMOV.F32        S6, S0
            }
            v22 = *((_BYTE *)&Facing::DIRECTIONS + _R0 - 6 * (_R1 + (_R1 >> 31)));
            if ( v22 == 5 )
              __asm { VMOVEQ.F32      S4, S2 }
            if ( v22 == 1 )
              __asm { VMOVEQ.F32      S6, S2 }
            if ( v22 == 3 )
              __asm { VMOVEQ.F32      S0, S2 }
              VLDR            S2, =0.7
              VLDR            S10, [SP,#0x60+var_54]
              VMUL.F32        S4, S4, S2
              VLDR            S12, [SP,#0x60+var_50]
              VLDR            S14, [SP,#0x60+var_4C]
              VMUL.F32        S6, S6, S2
              VMUL.F32        S0, S0, S2
              VLDR            S2, =0.3
              VADD.F32        S10, S10, S8
            if ( _ZF )
              __asm { VMOVEQ.F32      S4, S1 }
              VADD.F32        S2, S12, S2
              VADD.F32        S8, S14, S8
              __asm { VMOVEQ.F32      S6, S1 }
            if ( v22 == 2 )
              __asm { VMOVEQ.F32      S0, S1 }
              VADD.F32        S4, S10, S4
              VADD.F32        S2, S2, S6
              VADD.F32        S0, S8, S0
              VSTR            S4, [SP,#0x60+var_48]
              VSTR            S2, [SP,#0x60+var_44]
              VSTR            S0, [SP,#0x60+var_40]
            v23 = BlockSource::getData(v4, v3);
            v24 = (unsigned __int64 *)Block::getBlockState((int)v5, 15);
            _R0 = (0xFu >> (4 - (*v24 >> 32))) & (v23 >> (*v24 + 1 - (*v24 >> 32)));
            v27 = *(_DWORD *)(v12 + 4);
            __asm { SMMUL.W         R1, R0, R1 }
            v29 = _R0 - 6 * (_R1 + (_R1 >> 31));
            v30 = *((_BYTE *)&Facing::DIRECTIONS + v29);
            v31 = (const Vec3 *)*((_BYTE *)&Facing::DIRECTIONS + v29);
            if ( v27 )
              result = (*(int (__fastcall **)(_DWORD, BlockSource *, int))(*(_DWORD *)v27 + 148))(
                         *(_DWORD *)(v12 + 4),
                         v4,
                         v7 + 112);
              if ( !result )
                return result;
              v41 = (const ItemInstance *)&v45;
              v32 = (*(int (__fastcall **)(int, BlockSource *, int, int))(*(_DWORD *)v27 + 152))(v27, v4, v7 + 112, v10);
            else
              v32 = (*(int (**)(void))(**(_DWORD **)v12 + 168))();
            if ( !v32 )
              DispenserBlock::ejectItem(v4, (BlockSource *)&v45, v31, v12, v41);
              (*(void (__fastcall **)(int, int, signed int))(*(_DWORD *)(v7 + 112) + 36))(v7 + 112, v10, 1);
              v35 = (Player *)BlockSource::getLevel(v4);
              LODWORD(v36) = &v45;
              HIDWORD(v36) = 1000;
              Level::broadcastLevelEvent(v35, 1000, v36, 0);
            v37 = Facing::STEP_X[v30];
            v38 = Facing::STEP_Z[v30];
            v39 = (Player *)BlockSource::getLevel(v4);
            LODWORD(v40) = &v45;
            HIDWORD(v40) = 3 * v38 + v37 + 4;
            Level::broadcastLevelEvent(v39, 2000, v40, 0);
            BlockEntity::setChanged((BlockEntity *)v7);
            result = (*(int (__fastcall **)(int, int))(*(_DWORD *)(v7 + 112) + 84))(v7 + 112, v10);
          }
        }
  }
  return result;
}


int __fastcall DispenserBlock::getFacing(DispenserBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 15);
  _R0 = (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
  _R1 = 715827883;
  __asm { SMMUL.W         R1, R0, R1 }
  return *((_BYTE *)&Facing::DIRECTIONS + _R0 - 6 * (_R1 + (_R1 >> 31)));
}


int __fastcall DispenserBlock::onRemove(DispenserBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  Block *v4; // r4@1
  const BlockPos *v5; // r6@1
  Level *v6; // r0@1
  int v7; // r0@2
  int v8; // r7@3
  Level *v9; // r0@3
  char *v10; // r6@3
  int v14; // r10@4
  int v15; // r0@5
  __int64 v17; // r0@8
  unsigned int v21; // r4@13
  Level *v22; // r0@15
  Spawner *v23; // r4@15
  Dimension *v27; // r0@29
  CircuitSystem *v28; // r0@29
  Block *v30; // [sp+8h] [bp-118h]@2
  const BlockPos *v31; // [sp+Ch] [bp-114h]@2
  float v32; // [sp+10h] [bp-110h]@15
  float v35; // [sp+1Ch] [bp-104h]@15
  char v36; // [sp+28h] [bp-F8h]@15
  int v37; // [sp+30h] [bp-F0h]@19
  void *v38; // [sp+4Ch] [bp-D4h]@17
  void *ptr; // [sp+5Ch] [bp-C4h]@15
  int v40; // [sp+70h] [bp-B0h]@5
  int v41; // [sp+78h] [bp-A8h]@26
  unsigned __int8 v42; // [sp+7Eh] [bp-A2h]@8
  char v43; // [sp+7Fh] [bp-A1h]@5
  void *v44; // [sp+94h] [bp-8Ch]@24
  void *v45; // [sp+A4h] [bp-7Ch]@22

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Level *)BlockSource::getLevel(a2);
  if ( !Level::isClientSide(v6) )
  {
    v30 = v4;
    v31 = v5;
    v7 = BlockSource::getBlockEntity(v3, v5);
    if ( v7 )
    {
      v8 = v7 + 112;
      v9 = (Level *)BlockSource::getLevel(v3);
      v10 = Level::getRandom(v9);
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 44))(v8) >= 1 )
      {
        __asm
        {
          VLDR            D8, =2.32830644e-10
          VLDR            S18, =0.8
          VLDR            S20, =0.1
        }
        v14 = 0;
          VLDR            S22, =0.05
          VLDR            S24, =0.2
        do
          v15 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v8 + 16))(v8, v14);
          ItemInstance::ItemInstance((ItemInstance *)&v40, v15);
          _ZF = v43 == 0;
          if ( v43 )
            _ZF = v40 == 0;
          if ( !_ZF )
          {
            v17 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v40);
            if ( !v42 )
              HIDWORD(v17) = 1;
            if ( !v17 )
            {
              _R0 = Random::_genRandInt32((Random *)v10);
              __asm
              {
                VMOV            S0, R0
                VCVT.F64.U32    D13, S0
              }
              _R4 = Random::_genRandInt32((Random *)v10);
                VMOV            S2, R4
                VCVT.F64.U32    D0, S0
                VCVT.F64.U32    D1, S2
              if ( v42 )
                __asm
                {
                  VMUL.F64        D0, D0, D8
                  VMUL.F64        D1, D1, D8
                  VMUL.F64        D2, D13, D8
                  VCVT.F32.F64    S4, D2
                  VCVT.F32.F64    S0, D0
                  VCVT.F32.F64    S2, D1
                  VMUL.F32        S4, S4, S18
                  VMUL.F32        S0, S0, S18
                  VMUL.F32        S2, S2, S18
                  VADD.F32        S26, S4, S20
                  VADD.F32        S28, S0, S20
                  VADD.F32        S30, S2, S20
                }
                do
                  v21 = Random::_genRandInt32((Random *)v10) % 0x15 + 10;
                  if ( v21 > v42 )
                    v21 = v42;
                  ItemInstance::ItemInstance((ItemInstance *)&v36, (int)&v40);
                  ItemInstance::set((ItemInstance *)&v36, v21);
                  ItemInstance::set((ItemInstance *)&v40, (unsigned __int8)(v42 - v21));
                  v22 = (Level *)BlockSource::getLevel(v3);
                  v23 = (Spawner *)Level::getSpawner(v22);
                  Vec3::Vec3((int)&v32, (int)v31);
                  __asm
                  {
                    VLDR            S0, [SP,#0x120+var_110]
                    VLDR            S2, [SP,#0x120+var_10C]
                    VLDR            S4, [SP,#0x120+var_108]
                    VADD.F32        S0, S26, S0
                    VADD.F32        S2, S30, S2
                    VADD.F32        S4, S28, S4
                    VSTR            S0, [SP,#0x120+var_104]
                    VSTR            S2, [SP,#0x120+var_100]
                    VSTR            S4, [SP,#0x120+var_FC]
                  }
                  Spawner::spawnItem(v23, v3, (const ItemInstance *)&v36, 0, (const Vec3 *)&v35, 10);
                  _R0 = Random::nextGaussian((Random *)v10);
                    VMOV            S0, R0
                    VMUL.F32        S0, S0, S22
                    VSTR            S0, [R8,#0x6C]
                    VADD.F32        S0, S0, S24
                    VSTR            S0, [R8,#0x70]
                    VSTR            S0, [R8,#0x74]
                  if ( ptr )
                    operator delete(ptr);
                  if ( v38 )
                    operator delete(v38);
                  if ( v37 )
                    (*(void (**)(void))(*(_DWORD *)v37 + 4))();
                while ( v42 );
            }
          }
          if ( v45 )
            operator delete(v45);
          if ( v44 )
            operator delete(v44);
          if ( v41 )
            (*(void (**)(void))(*(_DWORD *)v41 + 4))();
          ++v14;
        while ( v14 < (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 44))(v8) );
      }
    }
    v27 = (Dimension *)BlockSource::getDimension(v3);
    v28 = (CircuitSystem *)Dimension::getCircuitSystem(v27);
    v5 = v31;
    CircuitSystem::removeComponents(v28, v31);
    v4 = v30;
  }
  return Block::onRemove(v4, v3, v5);
}


int __fastcall DispenserBlock::tick(DispenserBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r5@1
  DispenserBlock *v5; // r6@1
  const BlockPos *v6; // r4@1
  Level *v7; // r0@1
  int result; // r0@1

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v7);
  if ( !result )
    result = (*(int (__fastcall **)(DispenserBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v5 + 508))(
               v5,
               v4,
               v6);
  return result;
}


unsigned int __fastcall DispenserBlock::getVariant(DispenserBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1
  unsigned int result; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 15);
  result = (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32))) | 1;
  if ( result != 1 )
    result = 0;
  return result;
}


int __fastcall DispenserBlock::onRedstoneUpdate(DispenserBlock *this, BlockSource *a2, const BlockPos *a3, int a4, bool a5)
{
  BlockSource *v5; // r9@1
  DispenserBlock *v6; // r6@1
  int v7; // r7@1
  const BlockPos *v8; // r8@1
  Level *v9; // r0@1
  int result; // r0@1
  unsigned __int8 v11; // r4@2
  BlockState *v12; // r0@2
  signed int v13; // r4@2
  bool v14; // zf@4
  BlockState *v15; // r0@9
  int v16; // r4@9
  unsigned int v17; // r0@9
  LevelChunk **v18; // r7@11
  unsigned int v19; // r0@11
  BlockState *v20; // r0@11
  int v21; // r4@11
  signed int v22; // r5@11
  unsigned int v23; // r0@11
  int v24; // r1@11
  int v25; // r2@11
  int v26; // r3@11
  char v27; // [sp+Ch] [bp-2Ch]@9
  char v28; // [sp+Dh] [bp-2Bh]@9
  char v29; // [sp+10h] [bp-28h]@11
  char v30; // [sp+11h] [bp-27h]@11
  char v31; // [sp+14h] [bp-24h]@11
  unsigned __int8 v32; // [sp+17h] [bp-21h]@2
  char v33; // [sp+18h] [bp-20h]@2
  unsigned __int8 v34; // [sp+19h] [bp-1Fh]@2

  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v9);
  if ( !result )
  {
    BlockSource::getBlockAndData((BlockSource *)&v33, v5, (int)v8);
    v11 = v34;
    v12 = (BlockState *)Block::getBlockState((int)v6, 38);
    v32 = v11;
    v13 = 0;
    if ( v7 <= 0 )
      v13 = 1;
    result = BlockState::getBool(v12, &v32);
    v14 = result == 0;
    if ( !result )
      v14 = v13 == 0;
    if ( v14 )
    {
      v18 = (LevelChunk **)BlockSource::getTickQueue(v5, v8);
      v31 = *((_BYTE *)v6 + 4);
      v19 = (*(int (__fastcall **)(DispenserBlock *))(*(_DWORD *)v6 + 504))(v6);
      BlockTickingQueue::add(v18, v5, (int)v8, &v31, v19, 0);
      v20 = (BlockState *)Block::getBlockState((int)v6, 38);
      v21 = v34;
      v22 = 1 << (*(_QWORD *)v20 + 1 - (unsigned int)(*(_QWORD *)v20 >> 32));
      v23 = v21 & ~BlockState::getMask(v20) | v22;
      v34 = v23;
      v24 = *(_DWORD *)v8;
      v25 = *((_DWORD *)v8 + 1);
      v26 = *((_DWORD *)v8 + 2);
      v29 = v33;
      v30 = v23;
      result = BlockSource::setBlockAndDataNoUpdate((int)v5, v24, v25, v26, (int)&v29);
    }
    else if ( v7 <= 0 )
      result ^= 1u;
      if ( !result )
      {
        v15 = (BlockState *)Block::getBlockState((int)v6, 38);
        v16 = v34;
        v17 = v16 & ~BlockState::getMask(v15);
        v34 = v17;
        v27 = v33;
        v28 = v17;
        result = BlockSource::setBlockAndData((int)v5, v8, (int)&v27, 4, 0);
      }
  }
  return result;
}


int __fastcall DispenserBlock::getComparatorSignal(DispenserBlock *this, BlockSource *a2, const BlockPos *a3, signed __int8 a4, int a5)
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


signed int __fastcall DispenserBlock::getTickDelay(DispenserBlock *this)
{
  return 4;
}


signed int __fastcall DispenserBlock::isInteractiveBlock(DispenserBlock *this)
{
  return 1;
}
