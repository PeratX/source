

int __fastcall FlowerPotBlock::isSupportedBlock(FlowerPotBlock *this, const Block *a2, int a3)
{
  Block *v3; // r5@1
  int v4; // r4@1
  int result; // r0@8
  signed int v6; // r0@9
  signed int v7; // r1@9

  v3 = a2;
  v4 = a3;
  if ( Block::isType(a2, (const Block *)Block::mYellowFlower)
    || Block::isType(v3, (const Block *)Block::mRedFlower)
    || Block::isType(v3, (const Block *)Block::mCactus)
    || Block::isType(v3, (const Block *)Block::mBrownMushroom)
    || Block::isType(v3, (const Block *)Block::mRedMushroom)
    || Block::isType(v3, (const Block *)Block::mSapling)
    || Block::isType(v3, (const Block *)Block::mDeadBush) )
  {
    result = 1;
  }
  else
    v6 = Block::isType(v3, (const Block *)Block::mTallgrass);
    v7 = 0;
    if ( v4 == 2 )
      v7 = 1;
    result = v6 & v7;
  return result;
}


ItemInstance *__fastcall FlowerPotBlock::asItemInstance(FlowerPotBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  ItemInstance *v4; // r4@1
  BlockEntity *v5; // r0@1
  FlowerPotBlockEntity *v6; // r5@1
  int v7; // r6@4
  int v8; // r0@4
  ItemInstance *result; // r0@4

  v4 = this;
  v5 = (BlockEntity *)BlockSource::getBlockEntity(a3, (const BlockPos *)a4);
  v6 = v5;
  if ( v5 && *(_DWORD *)BlockEntity::getType(v5) == 7 && FlowerPotBlockEntity::getPlantItem(v6) )
  {
    v7 = FlowerPotBlockEntity::getPlantItem(v6);
    v8 = FlowerPotBlockEntity::getItemData(v6);
    result = ItemInstance::ItemInstance(v4, v7, 1, v8);
  }
  else
    result = ItemInstance::ItemInstance(v4, Item::mFlowerPot);
  return result;
}


int __fastcall FlowerPotBlock::isSolidRender(FlowerPotBlock *this)
{
  return 0;
}


void __fastcall FlowerPotBlock::~FlowerPotBlock(FlowerPotBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall FlowerPotBlock::canSurvive(FlowerPotBlock *this, BlockSource *a2, const BlockPos *a3)
{
  __int64 v3; // kr00_8@1
  int v4; // r2@1
  __int64 v6; // [sp+4h] [bp-14h]@1
  int v7; // [sp+Ch] [bp-Ch]@1

  v3 = *(_QWORD *)a3;
  v4 = *((_DWORD *)a3 + 2);
  v6 = v3 - 0x100000000LL;
  v7 = v4;
  return BlockSource::canProvideSupport(a2, (int)&v6);
}


int __fastcall FlowerPotBlock::mayPlace(FlowerPotBlock *this, BlockSource *a2, const BlockPos *a3, signed __int8 a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  FlowerPotBlock *v6; // r6@1
  int result; // r0@2

  v4 = a3;
  v5 = a2;
  v6 = this;
  if ( Block::mayPlace(this, a2, a3) == 1 )
    result = (*(int (__fastcall **)(FlowerPotBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v6 + 324))(
               v6,
               v5,
               v4);
  else
    result = 0;
  return result;
}


int __fastcall FlowerPotBlock::FlowerPotBlock(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int *v12; // r2@1
  float v14; // [sp+4h] [bp-34h]@1
  int v15; // [sp+8h] [bp-30h]@1
  int v16; // [sp+Ch] [bp-2Ch]@1
  signed int v17; // [sp+10h] [bp-28h]@1
  signed int v18; // [sp+14h] [bp-24h]@1
  int v19; // [sp+18h] [bp-20h]@1
  int v20; // [sp+1Ch] [bp-1Ch]@1
  signed int v21; // [sp+20h] [bp-18h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(15);
  EntityBlock::EntityBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_270B82C;
  v19 = 1050673152;
  v20 = 0;
  v21 = 1050673152;
  v16 = 1060110336;
  v17 = 1052770304;
  v18 = 1060110336;
  Block::setVisualShape((Block *)v3, (const Vec3 *)&v19, (const Vec3 *)&v16);
  Block::setSolid((Block *)v3, 0);
  Block::mTranslucency[v4] = 1056964608;
  *(_DWORD *)(v3 + 20) = 5;
  *(_DWORD *)(v3 + 24) = 0x2000000;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 7;
  v15 = 1061997773;
  _R0 = Material::getTranslucency(*(Material **)(v3 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
  }
  v12 = (int *)&v14;
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x38+var_34]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v12 = &v15;
  Block::mTranslucency[v4] = *v12;
  return v3;
}


int __fastcall FlowerPotBlock::isCubeShaped(FlowerPotBlock *this)
{
  return 0;
}


int __fastcall FlowerPotBlock::canBeSilkTouched(FlowerPotBlock *this)
{
  return 0;
}


signed int __fastcall FlowerPotBlock::playerWillDestroy(FlowerPotBlock *this, Player *a2, const BlockPos *a3, int a4)
{
  Block *v4; // r7@1
  Entity *v5; // r6@1
  int v6; // r8@1
  const BlockPos *v7; // r5@1
  BlockSource *v8; // r0@2
  BlockEntity *v9; // r0@2
  FlowerPotBlockEntity *v10; // r4@2
  __int64 v11; // r2@3

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  if ( Abilities::getBool((int)a2 + 4320, (int **)&Abilities::INSTABUILD) == 1 )
  {
    v8 = (BlockSource *)Entity::getRegion(v5);
    v9 = (BlockEntity *)BlockSource::getBlockEntity(v8, v7);
    v10 = v9;
    if ( v9 )
    {
      if ( *(_DWORD *)BlockEntity::getType(v9) == 7 )
      {
        LODWORD(v11) = 0;
        FlowerPotBlockEntity::setPlantItem(v10, 0, v11);
      }
    }
  }
  return j_j_j__ZNK5Block17playerWillDestroyER6PlayerRK8BlockPosi(v4, v5, v7, v6);
}


signed int __fastcall FlowerPotBlock::use(FlowerPotBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  Entity *v4; // r6@1
  ItemUseCallback *v5; // r5@1
  const BlockPos *v6; // r4@1
  void *v7; // r0@1
  signed int v8; // r4@4
  const Block *v9; // r7@8
  BlockSource *v10; // r0@9
  int v11; // r8@9
  BlockEntity *v12; // r0@9
  FlowerPotBlockEntity *v13; // r9@9
  int v15; // r10@24
  BlockState *v16; // r0@24
  unsigned int v17; // r0@24
  unsigned __int64 *v18; // r0@25
  char v19; // r2@25
  char v20; // r2@25
  int v21; // r2@25
  Level *v22; // r0@28
  __int64 v23; // r2@28
  char v24; // [sp+8h] [bp-70h]@31
  char v25; // [sp+9h] [bp-6Fh]@31
  char v26; // [sp+Ch] [bp-6Ch]@28
  char v27; // [sp+Dh] [bp-6Bh]@28
  int v28; // [sp+10h] [bp-68h]@1
  const Block *v29; // [sp+14h] [bp-64h]@8
  int v30; // [sp+18h] [bp-60h]@21
  char v31; // [sp+1Eh] [bp-5Ah]@7
  char v32; // [sp+1Fh] [bp-59h]@1
  void *v33; // [sp+34h] [bp-44h]@19
  void *ptr; // [sp+44h] [bp-34h]@17

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = Player::getSelectedItem(a2);
  ItemInstance::ItemInstance((ItemInstance *)&v28, (int)v7);
  if ( !v32 )
  {
    v8 = 0;
    goto LABEL_17;
  }
  if ( !v28 )
  if ( ItemInstance::isNull((ItemInstance *)&v28) )
  if ( !v31 )
  v9 = v29;
  if ( !v29 )
  v10 = (BlockSource *)Entity::getRegion(v4);
  v11 = (int)v10;
  v12 = (BlockEntity *)BlockSource::getBlockEntity(v10, v6);
  v13 = v12;
  if ( !v12 )
  if ( *(_DWORD *)BlockEntity::getType(v12) != 7 )
  if ( FlowerPotBlockEntity::getPlantItem(v13) )
  v15 = ItemInstance::getAuxValue((ItemInstance *)&v28);
  v16 = (BlockState *)Block::getBlockState((int)v9, 24);
  v17 = BlockState::isInitialized(v16);
  if ( v17 == 1 )
    v18 = (unsigned __int64 *)Block::getBlockState((int)v9, 24);
    v19 = *v18;
    LOBYTE(v18) = *v18 >> 32;
    v20 = v19 + 1 - (_BYTE)v18;
    v17 = 0xFu >> (4 - (_BYTE)v18);
    v21 = ((unsigned int)(unsigned __int8)v15 >> v20) & v17;
  else
    v21 = 0;
  if ( FlowerPotBlock::isSupportedBlock((FlowerPotBlock *)v17, v9, v21) == 1 )
    v26 = *(_BYTE *)(Block::mFlowerPot + 4);
    v27 = 1;
    v22 = (Level *)Entity::getLevel(v4);
    if ( !Level::isClientSide(v22) )
    {
      if ( v5 && (*(int (__fastcall **)(ItemUseCallback *, const BlockPos *))(*(_DWORD *)v5 + 16))(v5, v6) )
      {
LABEL_36:
        v8 = 1;
        goto LABEL_17;
      }
      LODWORD(v23) = v15;
      FlowerPotBlockEntity::setPlantItem(v13, v9, v23);
      BlockEntity::setChanged(v13);
      v24 = *(_BYTE *)(Block::mFlowerPot + 4);
      v25 = 1;
      BlockSource::setBlockAndData(v11, v6, (int)&v24, 3, (int)v4);
    }
    if ( !Abilities::getBool((int)v4 + 4320, (int **)&Abilities::INSTABUILD) )
      ItemInstance::remove((ItemInstance *)&v28, 1);
      Player::setSelectedItem(v4, (const ItemInstance *)&v28);
    if ( v5 )
      (*(void (__fastcall **)(ItemUseCallback *, const BlockPos *))(*(_DWORD *)v5 + 20))(v5, v6);
    goto LABEL_36;
  v8 = 0;
LABEL_17:
  if ( ptr )
    operator delete(ptr);
  if ( v33 )
    operator delete(v33);
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  return v8;
}


BlockEntity *__fastcall FlowerPotBlock::getFlowerPotEntity(FlowerPotBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockEntity *v3; // r0@1
  BlockEntity *v4; // r4@1
  BlockEntity *result; // r0@2

  v3 = (BlockEntity *)BlockSource::getBlockEntity(a2, a3);
  v4 = v3;
  if ( v3 )
  {
    if ( *(_DWORD *)BlockEntity::getType(v3) != 7 )
      v4 = 0;
    result = v4;
  }
  else
    result = 0;
  return result;
}


void __fastcall FlowerPotBlock::~FlowerPotBlock(FlowerPotBlock *this)
{
  FlowerPotBlock::~FlowerPotBlock(this);
}


int __fastcall FlowerPotBlock::onRemove(FlowerPotBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  Block *v5; // r6@1
  BlockEntity *v6; // r0@1
  FlowerPotBlockEntity *v7; // r7@1
  int v8; // r0@3
  int v9; // r8@4
  int v10; // r0@4
  int v12; // [sp+0h] [bp-60h]@4
  int v13; // [sp+8h] [bp-58h]@8
  void *v14; // [sp+24h] [bp-3Ch]@6
  void *ptr; // [sp+34h] [bp-2Ch]@4

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = (BlockEntity *)BlockSource::getBlockEntity(a2, a3);
  v7 = v6;
  if ( v6 )
  {
    if ( *(_DWORD *)BlockEntity::getType(v6) == 7 )
    {
      v8 = FlowerPotBlockEntity::getPlantItem(v7);
      if ( v8 )
      {
        v9 = *(_BYTE *)(v8 + 4);
        v10 = FlowerPotBlockEntity::getItemData(v7);
        ItemInstance::ItemInstance((ItemInstance *)&v12, v9, 1, v10);
        Block::popResource(v5, v4, v3, (const ItemInstance *)&v12);
        if ( ptr )
          operator delete(ptr);
        if ( v14 )
          operator delete(v14);
        if ( v13 )
          (*(void (**)(void))(*(_DWORD *)v13 + 4))();
        v13 = 0;
      }
    }
  }
  return Block::onRemove(v5, v4, v3);
}


signed int __fastcall FlowerPotBlock::isInteractiveBlock(FlowerPotBlock *this)
{
  return 1;
}


int __fastcall FlowerPotBlock::neighborChanged(FlowerPotBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  FlowerPotBlock *v4; // r6@1
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r5@1
  int result; // r0@1
  BlockEntity *v8; // r0@2
  FlowerPotBlockEntity *v9; // r7@2
  void (__fastcall *v10)(FlowerPotBlock *, BlockSource *, const BlockPos *, int); // r8@4
  int v11; // r0@4

  v4 = this;
  v5 = a3;
  v6 = a2;
  result = (*(int (**)(void))(*(_DWORD *)this + 324))();
  if ( !result )
  {
    v8 = (BlockEntity *)BlockSource::getBlockEntity(v6, v5);
    v9 = v8;
    if ( v8 )
    {
      if ( *(_DWORD *)BlockEntity::getType(v8) == 7 )
      {
        v10 = *(void (__fastcall **)(FlowerPotBlock *, BlockSource *, const BlockPos *, int))(*(_DWORD *)v4 + 276);
        v11 = FlowerPotBlockEntity::getItemData(v9);
        v10(v4, v6, v5, v11);
      }
    }
    result = j_j_j__ZN11BlockSource11removeBlockERK8BlockPos_0(v6, v5);
  }
  return result;
}
