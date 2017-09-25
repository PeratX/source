

ItemInstance *__fastcall AnvilBlock::asItemInstance(AnvilBlock *this, BlockSource *a2, const BlockPos *a3, int a4, unsigned __int8 a5)
{
  ItemInstance *v5; // r4@1
  unsigned __int64 *v6; // r0@1

  v5 = this;
  v6 = (unsigned __int64 *)Block::getBlockState(Block::mAnvil, 8);
  return ItemInstance::ItemInstance(
           v5,
           Block::mAnvil,
           1,
           (0xFu >> (4 - (*v6 >> 32))) & (unsigned __int8)(a5 >> (*v6 + 1 - (*v6 >> 32))));
}


signed int __fastcall AnvilBlock::use(AnvilBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  Entity *v4; // r5@1
  const BlockPos *v5; // r4@1
  Level *v6; // r0@2

  v4 = a2;
  v5 = a3;
  if ( Player::canUseAbility((int)a2, &Abilities::OPEN_CONTAINERS) == 1 )
  {
    v6 = (Level *)Entity::getLevel(v4);
    if ( !Level::isClientSide(v6) )
      (*(void (__fastcall **)(Entity *, const BlockPos *))(*(_DWORD *)v4 + 1300))(v4, v5);
  }
  return 1;
}


int __fastcall AnvilBlock::getPlacementDataValue(AnvilBlock *this, Entity *a2, const BlockPos *a3, signed __int8 a4, const Vec3 *a5, int a6)
{
  float v11; // r1@1
  char v12; // r4@1
  BlockState *v13; // r0@1
  __int64 v14; // r5@1
  int v15; // r5@1
  int v16; // r0@1
  BlockState *v17; // r0@4
  signed int v18; // r4@4
  unsigned int v19; // r0@4
  BlockState *v20; // r0@5
  char v21; // r1@5
  signed int v22; // r2@5
  int result; // r0@8
  BlockState *v24; // r0@9
  int v25; // [sp+0h] [bp-18h]@1

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
  v12 = mce::Math::floor(_R0, v11);
  v13 = (BlockState *)Block::getBlockState(Block::mAnvil, 8);
  v14 = *(_QWORD *)v13;
  BlockState::getMask(v13);
  v15 = (unsigned __int8)a6 << (v14 + 1 - BYTE4(v14));
  v16 = (v12 + 1) & 3;
  if ( v16 == 1 )
    v20 = (BlockState *)Block::getBlockState(Block::mAnvil, 12);
    v21 = *(_QWORD *)v20 + 1 - (unsigned int)(*(_QWORD *)v20 >> 32);
    v22 = 1;
LABEL_7:
    v18 = v22 << v21;
    v19 = (unsigned __int8)(v15 & ~(unsigned __int8)BlockState::getMask(v20));
    goto LABEL_8;
  if ( v16 == 2 )
    v22 = 2;
    goto LABEL_7;
  if ( v16 != 3 )
    v24 = (BlockState *)Block::getBlockState(Block::mAnvil, 12);
    LOBYTE(result) = v15 & ~(unsigned __int8)BlockState::getMask(v24);
    return (unsigned __int8)result;
  v17 = (BlockState *)Block::getBlockState(Block::mAnvil, 12);
  v18 = 3 << (*(_QWORD *)v17 + 1 - (unsigned int)(*(_QWORD *)v17 >> 32));
  v19 = (BlockState::getMask(v17) ^ 0xFF) & v15;
LABEL_8:
  LOBYTE(result) = v19 | v18;
  return (unsigned __int8)result;
}


int __fastcall AnvilBlock::canBeSilkTouched(AnvilBlock *this)
{
  return 0;
}


int __fastcall AnvilBlock::breaksFallingBlocks(AnvilBlock *this, int a2)
{
  return 0;
}


int __fastcall AnvilBlock::isSolidRender(AnvilBlock *this)
{
  return 0;
}


int __fastcall AnvilBlock::getSpawnResourcesAuxValue(AnvilBlock *this, int a2)
{
  unsigned int v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState(Block::mAnvil, 8);
  return (unsigned __int8)(0xFu >> (4 - (*v3 >> 32))) & (unsigned __int8)(v2 >> (*v3 + 1 - (*v3 >> 32)));
}


unsigned int __fastcall AnvilBlock::getVariant(AnvilBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1
  unsigned int result; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState(Block::mAnvil, 8);
  result = (0xFu >> (4 - (*v3 >> 32))) & (unsigned __int8)(v2 >> (*v3 + 1 - (*v3 >> 32)));
  if ( result > 2 )
    result = 3;
  return result;
}


void __fastcall AnvilBlock::~AnvilBlock(AnvilBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall AnvilBlock::isCraftingBlock(AnvilBlock *this)
{
  return 1;
}


signed int __fastcall AnvilBlock::falling(AnvilBlock *this)
{
  return 1;
}


int __fastcall AnvilBlock::AnvilBlock(int a1, const void **a2, int a3)
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
  HeavyBlock::HeavyBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &loc_270448C;
  Block::setSolid((Block *)v3, 0);
  Block::setPushesOutItems((Block *)v3, 1);
  Block::setIsInteraction((Block *)v3, 1);
  *(_DWORD *)(v3 + 20) = 5;
  *(_DWORD *)(v3 + 24) = 4096;
  *(_DWORD *)(v3 + 28) = 0;
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


unsigned int __fastcall AnvilBlock::getDataForSide(AnvilBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = (unsigned __int8)this;
  v3 = (unsigned __int64 *)Block::getBlockState(Block::mAnvil, 12);
  return (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
}


void __fastcall AnvilBlock::~AnvilBlock(AnvilBlock *this)
{
  AnvilBlock::~AnvilBlock(this);
}


int __fastcall AnvilBlock::isCubeShaped(AnvilBlock *this)
{
  return 0;
}


int __fastcall AnvilBlock::onLand(AnvilBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  const BlockPos *v4; // r4@1
  int v5; // r6@1
  char v7; // [sp+8h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  v5 = BlockSource::getLevel(a2);
  Vec3::Vec3((int)&v7, (int)v4);
  return Level::broadcastDimensionEvent(v5, v3, 1022, (int)&v7, 0);
}


int __fastcall AnvilBlock::getAABB(AnvilBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, bool a6, int a7)
{
  const BlockPos *v8; // r8@1
  unsigned int v9; // r6@1
  __int64 v10; // kr00_8@1
  int v16; // [sp+0h] [bp-28h]@4
  char v17; // [sp+Ch] [bp-1Ch]@1
  unsigned __int8 v18; // [sp+Dh] [bp-1Bh]@1

  _R4 = a4;
  v8 = a3;
  BlockSource::getBlockAndData((BlockSource *)&v17, a2, (int)a3);
  v9 = v18;
  v10 = *(_QWORD *)Block::getBlockState(Block::mAnvil, 12);
  AABB::set(_R4, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&Vec3::ONE);
  __asm { VMOV.F32        S0, #0.125 }
  if ( ((v9 >> (1 - BYTE4(v10) + v10)) & (0xFu >> (4 - BYTE4(v10))) | 2) == 2 )
  {
    __asm
    {
      VLDR            S2, [R4]
      VADD.F32        S0, S2, S0
      VMOV.F32        S2, #-0.125
      VSTR            S0, [R4]
      VLDR            S0, [R4,#0xC]
      VADD.F32        S0, S0, S2
      VSTR            S0, [R4,#0xC]
    }
  }
  else
      VLDR            S2, [R4,#8]
      VSTR            S0, [R4,#8]
      VLDR            S0, [R4,#0x14]
      VSTR            S0, [R4,#0x14]
  Vec3::Vec3((int)&v16, (int)v8);
  return AABB::move(_R4, (const Vec3 *)&v16);
}


int __fastcall AnvilBlock::getDustColor(int result, unsigned __int8 a2)
{
  __int64 v2; // kr00_8@1

  v2 = qword_283E6B8;
  *(_QWORD *)result = *(_QWORD *)&Color::NIL;
  *(_QWORD *)(result + 8) = v2;
  return result;
}


void **__fastcall AnvilBlock::buildDescriptionId(AnvilBlock *this, unsigned __int8 a2, int a3)
{
  void **result; // r0@3

  if ( a3 == 2 )
  {
    result = sub_21E94B4((void **)this, "tile.anvil.veryDamaged.name");
  }
  else if ( a3 == 1 )
    result = sub_21E94B4((void **)this, "tile.anvil.slightlyDamaged.name");
  else
    result = sub_21E94B4((void **)this, "tile.anvil.intact.name");
  return result;
}
