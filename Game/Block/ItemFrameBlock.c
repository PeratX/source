

__int64 __fastcall ItemFrameBlock::getShape(ItemFrameBlock *this, int a2, AABB *a3, int a4)
{
  int v9; // r6@3
  __int64 v10; // r0@5
  __int64 v11; // r2@5
  __int64 result; // r0@5
  __int64 v13; // r2@8
  float v14; // [sp+0h] [bp-28h]@5
  float v15; // [sp+4h] [bp-24h]@0
  float v16; // [sp+4h] [bp-24h]@5
  float v17; // [sp+8h] [bp-20h]@0
  float v18; // [sp+8h] [bp-20h]@5

  __asm
  {
    VLDR            S2, =0.0
    VMOV.F32        S0, #0.125
  }
  LODWORD(_R4) = a3;
  if ( a4 )
    __asm { VMOVNE.F32      S0, S2 }
    VMOV.F32        S16, #0.875
    VMOV            R5, S0
    VMOV.F32        S0, #1.0
  v9 = a2;
  if ( !_ZF )
    __asm { VMOVNE.F32      S16, S0 }
  v10 = (unsigned int)a3;
    VSTR            S16, [SP,#0x28+var_24]
    VSTR            S16, [SP,#0x28+var_20]
  LODWORD(v11) = HIDWORD(_R4);
  HIDWORD(v11) = HIDWORD(_R4);
  result = AABB::set(v10, v11, 0.0625, v15, v17);
  switch ( v9 )
    case 3:
      __asm
      {
        VSTR            S16, [SP,#0x28+var_24]
        VSTR            S16, [SP,#0x28+var_28]
      }
      result = AABB::set(_R4, __PAIR__(1064304640, HIDWORD(_R4)), v14, v16, 1.0);
      break;
    case 2:
      result = AABB::set(_R4, HIDWORD(_R4), v14, v16, 0.0625);
    case 1:
        VSTR            S16, [SP,#0x28+var_20]
      LODWORD(v13) = HIDWORD(_R4);
      HIDWORD(v13) = HIDWORD(_R4);
      result = AABB::set(__PAIR__(1064304640, (unsigned int)_R4), v13, 1.0, v16, v18);
  return result;
}


int __fastcall ItemFrameBlock::getPlacementDataValue(ItemFrameBlock *this, Entity *a2, const BlockPos *a3, int a4, const Vec3 *a5, int a6)
{
  BlockState *v6; // r0@2
  __int64 v7; // r4@2
  signed int v8; // r1@2
  int v9; // r0@2
  BlockState *v10; // r0@3
  __int64 v11; // r4@3
  BlockState *v12; // r0@4
  __int64 v13; // r4@4
  BlockState *v15; // r0@6

  switch ( a4 )
  {
    case 2:
      v6 = (BlockState *)Block::getBlockState((int)this, 12);
      v7 = *(_QWORD *)v6;
      BlockState::getMask(v6);
      v8 = 3;
      v9 = v7 + 1 - HIDWORD(v7);
      return (unsigned __int8)(v8 << v9);
    case 3:
      v10 = (BlockState *)Block::getBlockState((int)this, 12);
      v11 = *(_QWORD *)v10;
      BlockState::getMask(v10);
      v8 = 2;
      v9 = v11 + 1 - HIDWORD(v11);
    case 4:
      v12 = (BlockState *)Block::getBlockState((int)this, 12);
      v13 = *(_QWORD *)v12;
      BlockState::getMask(v12);
      v8 = 1;
      v9 = v13 + 1 - HIDWORD(v13);
    case 5:
      v15 = (BlockState *)Block::getBlockState((int)this, 12);
      BlockState::getMask(v15);
      break;
    default:
      return 0;
  }
  return 0;
}


_DWORD *__fastcall ItemFrameBlock::getAABB(ItemFrameBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  BlockSource *v7; // r6@1
  AABB *v8; // r4@1
  const BlockPos *v9; // r5@1
  unsigned __int64 *v10; // r7@2
  unsigned int v11; // r7@2
  BlockEntity *v12; // r0@2
  ItemFrameBlockEntity *v13; // r6@2
  char *v14; // r0@4
  char *v15; // r6@4
  int v16; // r0@4
  __int64 v22; // r2@14
  __int64 v23; // r2@17
  _DWORD *result; // r0@18
  float v25; // [sp+0h] [bp-38h]@14
  float v26; // [sp+4h] [bp-34h]@0
  float v27; // [sp+4h] [bp-34h]@14
  float v28; // [sp+8h] [bp-30h]@0
  float v29; // [sp+8h] [bp-30h]@14
  char v30; // [sp+Ch] [bp-2Ch]@21

  v7 = a2;
  v8 = a4;
  v9 = a3;
  if ( a6 == 1 )
  {
    v10 = (unsigned __int64 *)Block::getBlockState((int)this, 12);
    v11 = (BlockSource::getData(v7, v9) >> (*v10 + 1 - (*v10 >> 32))) & (0xFu >> (4 - (*v10 >> 32)));
    v12 = (BlockEntity *)BlockSource::getBlockEntity(v7, v9);
    v13 = v12;
    if ( v12 && *(_DWORD *)BlockEntity::getType(v12) == 17 )
    {
      v14 = ItemFrameBlockEntity::getFramedItem(v13);
      v15 = v14;
      v16 = (unsigned __int8)v14[15];
      _ZF = v16 == 0;
      if ( v16 )
        _ZF = *(_DWORD *)v15 == 0;
      if ( !_ZF && !ItemInstance::isNull((ItemInstance *)v15) && v15[14] )
        *(_DWORD *)v15;
    }
    __asm
      VLDR            S2, =0.0
      VMOV.F32        S0, #0.125
    if ( !_ZF )
      __asm { VMOVNE.F32      S0, S2 }
      VMOV.F32        S16, #0.875
      VMOV            R6, S0
      VMOV.F32        S0, #1.0
      __asm { VMOVNE.F32      S16, S0 }
      VSTR            S16, [SP,#0x38+var_34]
      VSTR            S16, [SP,#0x38+var_30]
    LODWORD(v22) = _R6;
    HIDWORD(v22) = _R6;
    AABB::set((unsigned int)v8, v22, 0.0625, v26, v28);
    switch ( v11 )
      case 3u:
        __asm
        {
          VSTR            S16, [SP,#0x38+var_34]
          VSTR            S16, [SP,#0x38+var_38]
        }
        AABB::set(__PAIR__(_R6, (unsigned int)v8), __PAIR__(1064304640, _R6), v25, v27, 1.0);
        break;
      case 2u:
        AABB::set(__PAIR__(_R6, (unsigned int)v8), _R6, v25, v27, 0.0625);
      case 1u:
          VSTR            S16, [SP,#0x38+var_30]
        LODWORD(v23) = _R6;
        HIDWORD(v23) = _R6;
        AABB::set(__PAIR__(1064304640, (unsigned int)v8), v23, 1.0, v27, v29);
    Vec3::Vec3((int)&v30, (int)v9);
    result = (_DWORD *)AABB::move(v8, (const Vec3 *)&v30);
  }
  else
    result = &AABB::EMPTY;
  return result;
}


ItemInstance *__fastcall ItemFrameBlock::asItemInstance(ItemFrameBlock *this, BlockSource *a2, const BlockPos *a3, int a4, int a5)
{
  ItemInstance *v5; // r4@1
  int v6; // r0@1
  ItemFrameBlockEntity *v7; // r5@1
  char *v8; // r5@3
  ItemInstance *result; // r0@4

  v5 = this;
  v6 = BlockSource::getBlockEntity(a3, (const BlockPos *)a4);
  v7 = (ItemFrameBlockEntity *)v6;
  if ( v6
    && BlockEntity::isType(v6, 17) == 1
    && (v8 = ItemFrameBlockEntity::getFramedItem(v7), !ItemInstance::isNull((ItemInstance *)v8)) )
  {
    result = ItemInstance::ItemInstance(v5, (int)v8);
  }
  else
    result = ItemInstance::ItemInstance(v5, Item::mItemFrame, 1, a5);
  return result;
}


signed int __fastcall ItemFrameBlock::use(ItemFrameBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  Player *v4; // r4@1
  ItemFrameBlock *v5; // r8@1
  const BlockPos *v6; // r5@1
  BlockSource *v7; // r0@1
  BlockSource *v8; // r7@1
  int v9; // r0@1
  ItemFrameBlockEntity *v10; // r6@1
  char *v11; // r0@3
  void *v12; // r0@4
  bool v13; // zf@4
  Level *v14; // r0@9
  Player *v15; // r6@10
  Level *v16; // r0@19
  Player *v17; // r4@20
  char v19; // [sp+8h] [bp-78h]@20
  char v20; // [sp+14h] [bp-6Ch]@10
  int v21; // [sp+20h] [bp-60h]@4
  int v22; // [sp+28h] [bp-58h]@17
  char v23; // [sp+2Eh] [bp-52h]@8
  char v24; // [sp+2Fh] [bp-51h]@4
  void *v25; // [sp+44h] [bp-3Ch]@15
  void *ptr; // [sp+54h] [bp-2Ch]@13

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = (BlockSource *)Entity::getRegion(a2);
  v8 = v7;
  v9 = BlockSource::getBlockEntity(v7, v6);
  v10 = (ItemFrameBlockEntity *)v9;
  if ( v9 && BlockEntity::isType(v9, 17) == 1 )
  {
    v11 = ItemFrameBlockEntity::getFramedItem(v10);
    if ( ItemInstance::isNull((ItemInstance *)v11) == 1 )
    {
      v12 = Player::getSelectedItem(v4);
      ItemInstance::ItemInstance((ItemInstance *)&v21, (int)v12);
      v13 = v24 == 0;
      if ( v24 )
        v13 = v21 == 0;
      if ( !v13 && !ItemInstance::isNull((ItemInstance *)&v21) && v23 )
      {
        v14 = (Level *)BlockSource::getLevel(v8);
        if ( !Level::isClientSide(v14) )
        {
          ItemFrameBlockEntity::setItem(v10, v8, (const ItemInstance *)&v21);
          v15 = (Player *)BlockSource::getLevel(v8);
          Vec3::Vec3((int)&v20, (int)v6);
          Level::broadcastLevelEvent(v15, 1040, (unsigned int)&v20, 0);
          ItemFrameBlock::_checkAchievements(v5, v4, v6);
        }
        if ( !Abilities::getBool((int)v4 + 4320, (int **)&Abilities::INSTABUILD) )
          ItemInstance::remove((ItemInstance *)&v21, 1);
          Player::setSelectedItem(v4, (const ItemInstance *)&v21);
      }
      if ( ptr )
        operator delete(ptr);
      if ( v25 )
        operator delete(v25);
      if ( v22 )
        (*(void (**)(void))(*(_DWORD *)v22 + 4))();
    }
    else
      v16 = (Level *)BlockSource::getLevel(v8);
      if ( !Level::isClientSide(v16) )
        ItemFrameBlockEntity::rotateFramedItem(v10);
        v17 = (Player *)BlockSource::getLevel(v8);
        Vec3::Vec3((int)&v19, (int)v6);
        Level::broadcastLevelEvent(v17, 1044, (unsigned int)&v19, 0);
  }
  return 1;
}


int __fastcall ItemFrameBlock::ItemFrameBlock(int a1, const void **a2, int a3)
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
  v6 = Material::getMaterial(15);
  EntityBlock::EntityBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_270D454;
  Block::setSolid((Block *)v3, 0);
  Block::setIsInteraction((Block *)v3, 1);
  *(_DWORD *)(v3 + 24) = 0x2000000;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 17;
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


signed int __fastcall ItemFrameBlock::hasComparatorSignal(ItemFrameBlock *this)
{
  return 1;
}


int __fastcall ItemFrameBlock::_getFacingID(ItemFrameBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1
  unsigned int v4; // r0@1
  int result; // r0@2

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 12);
  v4 = (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
  if ( v4 <= 3 )
    result = 5 - v4;
  else
    result = 0;
  return result;
}


int __fastcall ItemFrameBlock::getIgnoresDestroyPermissions(ItemFrameBlock *this, Entity *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r0@1
  int v5; // r0@1
  ItemFrameBlockEntity *v6; // r4@1
  char *v7; // r0@3
  int result; // r0@4

  v3 = a3;
  v4 = (BlockSource *)Entity::getRegion(a2);
  v5 = BlockSource::getBlockEntity(v4, v3);
  v6 = (ItemFrameBlockEntity *)v5;
  result = 0;
  if ( v5 )
  {
    if ( BlockEntity::isType(v5, 17) == 1 )
    {
      v7 = ItemFrameBlockEntity::getFramedItem(v6);
      if ( ItemInstance::isNull((ItemInstance *)v7) != 1 )
        result = 1;
    }
  }
  return result;
}


int __fastcall ItemFrameBlock::mayPlace(ItemFrameBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  int result; // r0@2
  int v5; // r0@3
  __int64 v6; // r3@3
  int v7; // lr@3
  int v8; // r3@3
  int v9; // r2@3
  int v10; // r0@3
  Material *v11; // r0@3
  __int64 v12; // [sp+4h] [bp-14h]@3
  int v13; // [sp+Ch] [bp-Ch]@3

  if ( (unsigned __int8)a4 >= 2u )
  {
    v5 = Facing::OPPOSITE_FACING[a4];
    HIDWORD(v6) = *(_QWORD *)a3 >> 32;
    v7 = *(_QWORD *)a3;
    v8 = Facing::STEP_X[v5];
    v9 = *((_DWORD *)a3 + 2);
    v10 = Facing::STEP_Z[v5];
    LODWORD(v6) = v8 + v7;
    v12 = v6;
    v13 = v10 + v9;
    v11 = (Material *)BlockSource::getMaterial(a2, (const BlockPos *)&v12);
    result = Material::isSolid(v11);
  }
  else
    result = 0;
  return result;
}


signed int __fastcall ItemFrameBlock::attack(ItemFrameBlock *this, Player *a2, const BlockPos *a3)
{
  Block *v3; // r6@1
  Entity *v4; // r5@1
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r0@2
  BlockSource *v7; // r8@2
  int v8; // r0@2
  ItemFrameBlockEntity *v9; // r7@2
  char *v10; // r0@4
  signed int v11; // r4@5
  Player *v13; // r5@8
  char v14; // [sp+4h] [bp-24h]@8

  v3 = this;
  v4 = a2;
  v5 = a3;
  if ( Player::canUseAbility((int)a2, &Abilities::BUILD_AND_MINE) == 1 )
  {
    v6 = (BlockSource *)Entity::getRegion(v4);
    v7 = v6;
    v8 = BlockSource::getBlockEntity(v6, v5);
    v9 = (ItemFrameBlockEntity *)v8;
    if ( v8
      && BlockEntity::isType(v8, 17) == 1
      && (v10 = ItemFrameBlockEntity::getFramedItem(v9), !ItemInstance::isNull((ItemInstance *)v10)) )
    {
      ItemFrameBlockEntity::dropFramedItem(v9, v7, 1);
      v13 = (Player *)BlockSource::getLevel(v7);
      Vec3::Vec3((int)&v14, (int)v5);
      v11 = 0;
      Level::broadcastLevelEvent(v13, 1043, (unsigned int)&v14, 0);
    }
    else
      v11 = Block::attack(v3, v4, v5);
  }
  else
    v11 = 0;
  return v11;
}


signed int __fastcall ItemFrameBlock::playerWillDestroy(ItemFrameBlock *this, Player *a2, const BlockPos *a3, int a4)
{
  Block *v4; // r7@1
  Entity *v5; // r6@1
  int v6; // r9@1
  const BlockPos *v7; // r4@1
  BlockSource *v8; // r0@2
  BlockSource *v9; // r8@2
  int v10; // r0@2
  ItemFrameBlockEntity *v11; // r5@2
  char *v12; // r0@4
  signed int result; // r0@5
  int v14; // r0@7
  Player *v15; // r5@7
  char v16; // [sp+8h] [bp-28h]@7

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  if ( Player::canUseAbility((int)a2, &Abilities::BUILD_AND_MINE) == 1 )
  {
    v8 = (BlockSource *)Entity::getRegion(v5);
    v9 = v8;
    v10 = BlockSource::getBlockEntity(v8, v7);
    v11 = (ItemFrameBlockEntity *)v10;
    if ( v10
      && BlockEntity::isType(v10, 17) == 1
      && (v12 = ItemFrameBlockEntity::getFramedItem(v11), !ItemInstance::isNull((ItemInstance *)v12)) )
    {
      v14 = Player::isSurvival(v5);
      ItemFrameBlockEntity::dropFramedItem(v11, v9, v14);
      v15 = (Player *)BlockSource::getLevel(v9);
      Vec3::Vec3((int)&v16, (int)v7);
      Level::broadcastLevelEvent(v15, 1043, (unsigned int)&v16, 0);
      result = 1;
    }
    else
      result = Block::playerWillDestroy(v4, v5, v7, v6);
  }
  else
    result = 0;
  return result;
}


void __fastcall ItemFrameBlock::~ItemFrameBlock(ItemFrameBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall ItemFrameBlock::neighborChanged(ItemFrameBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  BlockSource *v4; // r8@1
  const BlockPos *v5; // r10@1
  const BlockPos *v6; // r11@1
  ItemFrameBlock *v7; // r9@1
  unsigned __int64 *v8; // r4@1
  unsigned int v9; // r5@1
  int v10; // r4@1
  unsigned __int64 v11; // kr00_8@1
  unsigned __int64 *v12; // r0@1
  _BYTE *v13; // r2@1
  unsigned int v14; // r0@1
  int v15; // r2@3
  int result; // r0@3
  int v17; // r1@3
  int v18; // r2@3
  int v19; // r6@3
  int v20; // r1@3
  int v21; // r2@4
  bool v22; // zf@4
  Material *v23; // r0@8
  void (__fastcall *v24)(ItemFrameBlock *, BlockSource *, const BlockPos *, unsigned int); // r4@9
  unsigned int v25; // r0@9
  int v26; // r7@9
  int v27; // r1@9
  int v28; // r2@9
  int v29; // [sp+Ch] [bp-64h]@9
  signed int v30; // [sp+10h] [bp-60h]@9
  int v31; // [sp+14h] [bp-5Ch]@9
  int v32; // [sp+18h] [bp-58h]@9
  int v33; // [sp+1Ch] [bp-54h]@9
  int v34; // [sp+20h] [bp-50h]@9
  int v35; // [sp+24h] [bp-4Ch]@9
  int v36; // [sp+28h] [bp-48h]@9
  int v37; // [sp+2Ch] [bp-44h]@9
  char v38; // [sp+30h] [bp-40h]@9
  char v39; // [sp+3Ch] [bp-34h]@9
  int v40; // [sp+40h] [bp-30h]@3
  int v41; // [sp+44h] [bp-2Ch]@3
  int v42; // [sp+48h] [bp-28h]@3

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = this;
  v8 = (unsigned __int64 *)Block::getBlockState((int)this, 12);
  v9 = BlockSource::getData(v4, v6);
  v11 = *v8;
  v10 = *v8 >> 32;
  v12 = (unsigned __int64 *)Block::getBlockState((int)v7, 12);
  v13 = Facing::OPPOSITE_FACING;
  v14 = (0xFu >> (4 - (*v12 >> 32))) & (((v9 >> (v11 + 1 - v10)) & (unsigned __int8)(0xFu >> (4 - v10))) >> (*v12 + 1 - (*v12 >> 32)));
  if ( v14 < 4 )
    v13 = &Facing::OPPOSITE_FACING[5 - v14];
  v15 = *v13;
  result = *(_QWORD *)v6 >> 32;
  v17 = Facing::STEP_X[v15];
  v18 = Facing::STEP_Z[v15];
  v19 = *((_DWORD *)v6 + 2);
  v40 = v17 + *(_QWORD *)v6;
  v41 = result;
  v20 = v18 + v19;
  v42 = v18 + v19;
  if ( v40 == *(_DWORD *)v5 )
  {
    v21 = *((_DWORD *)v5 + 1);
    v22 = result == v21;
    if ( result == v21 )
    {
      result = *((_DWORD *)v5 + 2);
      v22 = v20 == result;
    }
    if ( v22 )
      v23 = (Material *)BlockSource::getMaterial(v4, (const BlockPos *)&v40);
      result = Material::isSolid(v23);
      if ( !result )
      {
        v24 = *(void (__fastcall **)(ItemFrameBlock *, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v7 + 276);
        v25 = BlockSource::getData(v4, v6);
        v24(v7, v4, v6, v25);
        v39 = BlockID::AIR;
        BlockSource::setBlock((int)v4, v6, &v39, 3);
        v26 = BlockSource::getLevel(v4);
        v29 = 1056964608;
        v30 = 1056964608;
        v31 = 1056964608;
        BlockPos::BlockPos((int)&v32, (int)&v29);
        v27 = *((_DWORD *)v6 + 1);
        v28 = *((_DWORD *)v6 + 2);
        v35 = *(_DWORD *)v6 + v32;
        v36 = v33 + v27;
        v37 = v34 + v28;
        Vec3::Vec3((int)&v38, (int)&v35);
        result = Level::broadcastDimensionEvent(v26, v4, 2001, (int)&v38, *((_BYTE *)v7 + 4));
      }
  }
  return result;
}


unsigned int __fastcall ItemFrameBlock::getDirection(ItemFrameBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = (unsigned __int8)this;
  v3 = (unsigned __int64 *)Block::getBlockState(Block::mItemFrame, 12);
  return (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
}


void __fastcall ItemFrameBlock::spawnResources(ItemFrameBlock *this, BlockSource *a2, const BlockPos *a3, int a4, float a5, int a6)
{
  ItemFrameBlock::spawnResources(this, a2, a3, a4, a5, a6);
}


int __fastcall ItemFrameBlock::getComparatorSignal(ItemFrameBlock *this, BlockSource *a2, const BlockPos *a3, int a4, int a5)
{
  BlockSource *v5; // r9@1
  int v6; // r4@1
  const BlockPos *v7; // r8@1
  Block *v8; // r7@1
  __int64 v9; // r5@1
  unsigned __int64 *v10; // r0@1
  unsigned int v11; // r0@1
  int v12; // r1@1
  int v13; // r0@4
  ItemFrameBlockEntity *v14; // r5@4
  char *v15; // r0@6
  int result; // r0@7
  int v17; // r0@8
  signed int v18; // r1@8

  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = this;
  v9 = *(_QWORD *)Block::getBlockState((int)this, 12);
  v10 = (unsigned __int64 *)Block::getBlockState((int)v8, 12);
  v11 = (0xFu >> (4 - (*v10 >> 32))) & ((unsigned int)(((unsigned __int8)a5 >> (1 - BYTE4(v9) + v9)) & (unsigned __int8)(0xFu >> (4 - BYTE4(v9)))) >> (*v10 + 1 - (*v10 >> 32)));
  v12 = 0;
  if ( v11 < 4 )
    v12 = 5 - v11;
  if ( v12 == v6
    && (v13 = BlockSource::getBlockEntity(v5, v7), (v14 = (ItemFrameBlockEntity *)v13) != 0)
    && BlockEntity::isType(v13, 17) == 1
    && (v15 = ItemFrameBlockEntity::getFramedItem(v14), ItemInstance::isNull((ItemInstance *)v15) != 1) )
  {
    v17 = ItemFrameBlockEntity::getRotation(v14) + 1;
    v18 = 15;
    if ( v17 < 15 )
      v18 = v17;
    result = v18;
  }
  else
    result = j_j_j__ZNK5Block19getComparatorSignalER11BlockSourceRK8BlockPosai(v8, v5, v7, v6, a5);
  return result;
}


signed int __fastcall ItemFrameBlock::isMapFrame(ItemFrameBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockEntity *v3; // r0@1
  ItemFrameBlockEntity *v4; // r4@1
  char *v5; // r0@3
  char *v6; // r4@3
  int v7; // r0@3
  bool v8; // zf@3
  signed int result; // r0@9

  v3 = (BlockEntity *)BlockSource::getBlockEntity(this, a2);
  v4 = v3;
  if ( !v3 || *(_DWORD *)BlockEntity::getType(v3) != 17 )
    goto LABEL_13;
  v5 = ItemFrameBlockEntity::getFramedItem(v4);
  v6 = v5;
  v7 = (unsigned __int8)v5[15];
  v8 = v7 == 0;
  if ( v7 )
    v8 = *(_DWORD *)v6 == 0;
  if ( v8 || ItemInstance::isNull((ItemInstance *)v6) || !v6[14] || *(_DWORD *)v6 != Item::mFilledMap )
LABEL_13:
    result = 0;
  else
    result = 1;
  return result;
}


void __fastcall ItemFrameBlock::~ItemFrameBlock(ItemFrameBlock *this)
{
  ItemFrameBlock::~ItemFrameBlock(this);
}


AABB *__fastcall ItemFrameBlock::getVisualShape(ItemFrameBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, bool a5)
{
  BlockSource *v5; // r7@1
  const BlockPos *v6; // r6@1
  AABB *v7; // r4@1
  unsigned int v8; // r5@1
  BlockEntity *v9; // r0@1
  ItemFrameBlockEntity *v10; // r6@1
  char *v11; // r0@3
  char *v12; // r6@3
  int v13; // r0@3
  __int64 v19; // r2@13
  __int64 v20; // r2@16
  float v22; // [sp+0h] [bp-30h]@13
  float v23; // [sp+4h] [bp-2Ch]@0
  float v24; // [sp+4h] [bp-2Ch]@13
  float v25; // [sp+8h] [bp-28h]@0
  float v26; // [sp+8h] [bp-28h]@13

  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = BlockSource::getData(a2, a3);
  v9 = (BlockEntity *)BlockSource::getBlockEntity(v5, v6);
  v10 = v9;
  if ( v9 && *(_DWORD *)BlockEntity::getType(v9) == 17 )
  {
    v11 = ItemFrameBlockEntity::getFramedItem(v10);
    v12 = v11;
    v13 = (unsigned __int8)v11[15];
    _ZF = v13 == 0;
    if ( v13 )
      _ZF = *(_DWORD *)v12 == 0;
    if ( !_ZF && !ItemInstance::isNull((ItemInstance *)v12) && v12[14] )
      *(_DWORD *)v12;
  }
  __asm
    VLDR            S2, =0.0
    VMOV.F32        S0, #0.125
  if ( !_ZF )
    __asm { VMOVNE.F32      S0, S2 }
    VMOV.F32        S16, #0.875
    VMOV            R6, S0
    VMOV.F32        S0, #1.0
    __asm { VMOVNE.F32      S16, S0 }
    VSTR            S16, [SP,#0x30+var_2C]
    VSTR            S16, [SP,#0x30+var_28]
  LODWORD(v19) = _R6;
  HIDWORD(v19) = _R6;
  AABB::set((unsigned int)v7, v19, 0.0625, v23, v25);
  switch ( v8 )
    case 3u:
      __asm
      {
        VSTR            S16, [SP,#0x30+var_2C]
        VSTR            S16, [SP,#0x30+var_30]
      }
      AABB::set(__PAIR__(_R6, (unsigned int)v7), __PAIR__(1064304640, _R6), v22, v24, 1.0);
      break;
    case 2u:
      AABB::set(__PAIR__(_R6, (unsigned int)v7), _R6, v22, v24, 0.0625);
    case 1u:
        VSTR            S16, [SP,#0x30+var_28]
      LODWORD(v20) = _R6;
      HIDWORD(v20) = _R6;
      AABB::set(__PAIR__(1064304640, (unsigned int)v7), v20, 1.0, v24, v26);
  return v7;
}


int __fastcall ItemFrameBlock::canBeSilkTouched(ItemFrameBlock *this)
{
  return 0;
}


int __fastcall ItemFrameBlock::_addMapCollection(int a1, int a2, int a3, BlockSource *a4)
{
  int v4; // ST0C_4@1
  BlockSource *v5; // r5@1
  int v6; // r4@1
  int v7; // r6@1
  unsigned __int64 *v8; // r7@1
  unsigned int v9; // r9@1
  int v10; // r7@1
  unsigned __int64 v11; // kr00_8@1
  __int64 v12; // kr08_8@1
  _DWORD *v13; // r0@1
  int v14; // r11@1
  int v15; // r8@1
  unsigned int v16; // r1@1
  unsigned int v17; // r0@1
  int (__fastcall *v18)(void **, int **, int); // r3@5
  signed int v19; // r10@5
  int v20; // r1@6
  int v21; // r2@6
  int v22; // r1@7
  int v23; // r2@7
  int v24; // r1@8
  int v25; // r2@8
  int v26; // r1@9
  int v27; // r2@9
  int v28; // r1@10
  int v29; // r2@10
  _DWORD *v31; // [sp+10h] [bp-48h]@1
  void (*v32)(void); // [sp+18h] [bp-40h]@1
  _DWORD *(__fastcall *v33)(int, const BlockPos *); // [sp+1Ch] [bp-3Ch]@1
  int v34; // [sp+20h] [bp-38h]@1
  int v35; // [sp+24h] [bp-34h]@1
  int v36; // [sp+28h] [bp-30h]@6
  int v37; // [sp+2Ch] [bp-2Ch]@6
  int v38; // [sp+30h] [bp-28h]@6

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  v8 = (unsigned __int64 *)Block::getBlockState(a1, 12);
  v9 = BlockSource::getData(v5, (const BlockPos *)v6);
  v11 = *v8;
  v10 = *v8 >> 32;
  v12 = *(_QWORD *)Block::getBlockState(v7, 12);
  v34 = 0;
  v35 = 0;
  v13 = operator new(0x14u);
  *v13 = v7;
  v13[1] = v5;
  v13[2] = v4;
  v13[3] = &v35;
  v13[4] = &v34;
  v31 = v13;
  v32 = (void (*)(void))sub_18C428C;
  v33 = sub_18C41DC;
  v14 = 0;
  v15 = 0;
  v16 = (0xFu >> (4 - BYTE4(v12))) & (((v9 >> (1 - v10 + v11)) & (unsigned __int8)(0xFu >> (4 - v10))) >> (1 - BYTE4(v12) + v12));
  v17 = -2;
  if ( v16 < 4 )
    v17 = 3 - v16;
  if ( v17 <= 3 )
  {
    v15 = dword_2610A8C[v17];
    v14 = dword_2610A7C[v17];
  }
  v18 = sub_18C428C;
  v19 = 2;
  do
    v20 = *(_DWORD *)(v6 + 4);
    v21 = *(_DWORD *)(v6 + 8);
    v36 = *(_DWORD *)v6 + -2 * v15;
    v37 = v19 + v20;
    v38 = -2 * v14 + v21;
    if ( !v18
      || (v33((int)&v31, (const BlockPos *)&v36),
          v22 = *(_DWORD *)(v6 + 4),
          v23 = *(_DWORD *)(v6 + 8),
          v36 = *(_DWORD *)v6 - v15,
          v37 = v19 + v22,
          v38 = v23 - v14,
          !v32)
          v24 = *(_DWORD *)(v6 + 4),
          v25 = *(_DWORD *)(v6 + 8),
          v36 = *(_DWORD *)v6,
          v37 = v19 + v24,
          v38 = v25,
          v26 = *(_DWORD *)(v6 + 4),
          v27 = *(_DWORD *)(v6 + 8),
          v36 = *(_DWORD *)v6 + v15,
          v37 = v19 + v26,
          v38 = v27 + v14,
          v28 = *(_DWORD *)(v6 + 4),
          v29 = *(_DWORD *)(v6 + 8),
          v36 = *(_DWORD *)v6 + 2 * v15,
          v37 = v19 + v28,
          v38 = 2 * v14 + v29,
          !v32) )
    {
      sub_21E5F48();
    }
    v33((int)&v31, (const BlockPos *)&v36);
    v18 = (int (__fastcall *)(void **, int **, int))v32;
    --v19;
  while ( !((unsigned __int8)((v19 + 3 < 0) ^ __OFADD__(v19, 3)) | (v19 == -3)) );
  if ( v32 )
    v32();
  return v34;
}


void __fastcall ItemFrameBlock::spawnResources(ItemFrameBlock *this, BlockSource *a2, const BlockPos *a3, int a4, float a5, int a6)
{
  const BlockPos *v6; // r5@1
  BlockSource *v7; // r6@1
  Block *v8; // r7@1
  int v9; // r8@1
  int v10; // r0@1
  ItemFrameBlockEntity *v11; // r4@1

  v6 = a3;
  v7 = a2;
  v8 = this;
  v9 = a4;
  v10 = BlockSource::getBlockEntity(a2, a3);
  v11 = (ItemFrameBlockEntity *)v10;
  if ( v10 && BlockEntity::isType(v10, 17) == 1 )
    ItemFrameBlockEntity::dropFramedItem(v11, v7, 1);
  Block::spawnResources(v8, v7, v6, v9, 1.0, a6);
}


signed int __fastcall ItemFrameBlock::isInteractiveBlock(ItemFrameBlock *this)
{
  return 1;
}


signed int __fastcall ItemFrameBlock::_getItemFrame(ItemFrameBlock *this, BlockSource *a2, const BlockPos *a3)
{
  int v3; // r0@1
  int v4; // r4@1
  signed int result; // r0@2

  v3 = BlockSource::getBlockEntity(a2, a3);
  v4 = v3;
  if ( v3 )
  {
    result = BlockEntity::isType(v3, 17);
    if ( result )
      result = v4;
  }
  else
    result = 0;
  return result;
}


ItemFrameBlockEntity *__fastcall ItemFrameBlock::_checkAchievements(ItemFrameBlock *this, Player *a2, const BlockPos *a3)
{
  Entity *v3; // r10@1
  ItemFrameBlock *v4; // r6@1
  const BlockPos *v5; // r5@1
  BlockSource *v6; // r0@1
  ItemFrameBlockEntity *result; // r0@1
  ItemFrameBlockEntity *v8; // r7@1
  char *v9; // r0@3
  BlockSource *v10; // r0@4
  __int64 v11; // r4@5
  int v12; // r9@5
  signed int v13; // r8@5
  signed int v14; // r7@11
  int v15; // r6@11
  signed int v16; // r4@11
  char *v17; // r2@12
  MapItemSavedData *v18; // r0@12
  bool v19; // zf@13
  bool v20; // nf@13
  unsigned __int8 v21; // vf@13
  const MapItemSavedData *v22; // r1@17
  const MapItemSavedData *v23; // r1@20
  signed int v24; // r5@21
  const MapItemSavedData *v25; // r1@22
  signed int v26; // r0@23
  int v27; // r1@23
  void *v28; // r0@39
  void *v29; // r0@40
  void *v30; // r0@41
  unsigned int *v31; // r2@51
  signed int v32; // r1@53
  unsigned int *v33; // r2@55
  signed int v34; // r1@57
  unsigned int *v35; // r2@59
  signed int v36; // r1@61
  void **v37; // [sp+0h] [bp-C8h]@39
  int v38; // [sp+38h] [bp-90h]@41
  int v39; // [sp+3Ch] [bp-8Ch]@40
  int v40; // [sp+40h] [bp-88h]@39
  void *ptr; // [sp+4Ch] [bp-7Ch]@4
  void *v42; // [sp+50h] [bp-78h]@4
  int v43; // [sp+54h] [bp-74h]@4
  int v44; // [sp+58h] [bp-70h]@3
  ItemFrameBlockEntity *v45; // [sp+60h] [bp-68h]@48
  void *v46; // [sp+7Ch] [bp-4Ch]@46
  void *v47; // [sp+8Ch] [bp-3Ch]@44

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (BlockSource *)Entity::getRegion(a2);
  result = (ItemFrameBlockEntity *)BlockSource::getBlockEntity(v6, v5);
  v8 = result;
  if ( !result )
    return result;
  result = (ItemFrameBlockEntity *)BlockEntity::isType((int)result, 17);
  if ( result != (ItemFrameBlockEntity *)1 )
  v9 = ItemFrameBlockEntity::getFramedItem(v8);
  ItemInstance::ItemInstance((ItemInstance *)&v44, (int)v9);
  if ( v44 != Item::mFilledMap )
    goto LABEL_44;
  ptr = 0;
  v42 = 0;
  v43 = 0;
  std::vector<MapItemSavedData *,std::allocator<MapItemSavedData *>>::_M_default_append((int)&ptr, 0x19u);
  v10 = (BlockSource *)Entity::getRegion(v3);
  if ( ItemFrameBlock::_addMapCollection((int)v4, (int)&ptr, (int)v5, v10) < 9 )
    goto LABEL_42;
  v11 = *(_QWORD *)&ptr;
  v12 = 0;
  v13 = 0;
  if ( ptr != v42 )
  {
    do
    {
      if ( *(_DWORD *)v11 && !MapItemSavedData::isFullyExplored(*(MapItemSavedData **)v11) )
        *(_DWORD *)v11 = 0;
      LODWORD(v11) = v11 + 4;
    }
    while ( HIDWORD(v11) != (_DWORD)v11 );
    v12 = 0;
    v13 = 0;
  }
  while ( 2 )
    v14 = 0;
    v15 = v12;
    v16 = 0;
      v17 = (char *)ptr;
      v18 = *(MapItemSavedData **)((char *)ptr + v15);
      if ( !v18 )
      {
LABEL_30:
        v16 = 0;
        goto LABEL_36;
      }
      v21 = __OFSUB__(v16, 1);
      v19 = v16 == 1;
      v20 = v16 - 1 < 0;
      if ( v16 <= 1 )
        v21 = __OFSUB__(v14, 3);
        v19 = v14 == 3;
        v20 = v14 - 3 < 0;
      if ( (unsigned __int8)(v20 ^ v21) | v19 )
        v22 = *(const MapItemSavedData **)((char *)ptr + v15 + 4);
        if ( !v22 || MapItemSavedData::isAdjacent(v18, v22, 5) != 1 )
          goto LABEL_30;
        v17 = (char *)ptr;
      v23 = *(const MapItemSavedData **)&v17[v15 + 20];
      if ( v23 )
        v24 = MapItemSavedData::isAdjacent(*(MapItemSavedData **)&v17[v15], v23, 3);
        if ( v24 && (v25 = *(const MapItemSavedData **)((char *)ptr + v15 + 40)) != 0 )
        {
          v26 = MapItemSavedData::isAdjacent(*(MapItemSavedData **)((char *)ptr + v15 + 20), v25, 3);
          v27 = v24;
          if ( v26 )
            v27 = v24 + 1;
          if ( !v24 )
            v16 = 0;
          if ( !v26 )
          v24 = v27;
        }
        else
          v16 = 0;
      else
        v24 = 0;
      if ( v24 > 1 )
        ++v16;
      if ( v16 >= 3 )
        EventPacket::EventPacket((int)&v37, v3, 50, 1);
        (*(void (__fastcall **)(Entity *, void ***))(*(_DWORD *)v3 + 1448))(v3, &v37);
        v37 = &off_26E9D30;
        v28 = (void *)(v40 - 12);
        if ( (int *)(v40 - 12) != &dword_28898C0 )
          v31 = (unsigned int *)(v40 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v32 = __ldrex(v31);
            while ( __strex(v32 - 1, v31) );
          }
          else
            v32 = (*v31)--;
          if ( v32 <= 0 )
            j_j_j_j__ZdlPv_9(v28);
        v29 = (void *)(v39 - 12);
        if ( (int *)(v39 - 12) != &dword_28898C0 )
          v33 = (unsigned int *)(v39 - 4);
              v34 = __ldrex(v33);
            while ( __strex(v34 - 1, v33) );
            v34 = (*v33)--;
          if ( v34 <= 0 )
            j_j_j_j__ZdlPv_9(v29);
        v30 = (void *)(v38 - 12);
        if ( (int *)(v38 - 12) != &dword_28898C0 )
          v35 = (unsigned int *)(v38 - 4);
              v36 = __ldrex(v35);
            while ( __strex(v36 - 1, v35) );
            v36 = (*v35)--;
          if ( v36 <= 0 )
            j_j_j_j__ZdlPv_9(v30);
        goto LABEL_42;
LABEL_36:
      ++v14;
      v15 += 4;
    while ( v14 < 5 );
    ++v13;
    v12 += 20;
    if ( v13 < 3 )
      continue;
    break;
LABEL_42:
  if ( ptr )
    operator delete(ptr);
LABEL_44:
  if ( v47 )
    operator delete(v47);
  if ( v46 )
    operator delete(v46);
  result = v45;
  if ( v45 )
    result = (ItemFrameBlockEntity *)(*(int (__cdecl **)(ItemFrameBlockEntity *))(*(_DWORD *)v45 + 4))(v45);
  return result;
}
