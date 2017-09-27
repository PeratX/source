

Block *__fastcall ShulkerBoxBlock::ShulkerBoxBlock(int a1, const void **a2, char a3)
{
  Block *v3; // r4@1
  int v4; // r12@1

  v3 = (Block *)a1;
  ChestBlock::ChestBlock(a1, a2, a3, 2, 3);
  v4 = (int)v3 + 24;
  *(_DWORD *)v3 = &off_27136E8;
  *(_DWORD *)v4 = 0x2000000;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 25;
  Block::setVisualShape(v3, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&Vec3::ONE);
  return v3;
}


void __fastcall ShulkerBoxBlock::onExploded(ShulkerBoxBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  ShulkerBoxBlock *v6; // r9@1
  int v7; // r0@1
  int v8; // r6@1
  int *v9; // r0@1
  void *v10; // r7@1
  Level *v11; // r0@1
  void *v12; // r0@3
  unsigned int *v13; // r2@5
  signed int v14; // r1@7
  void *v15; // [sp+10h] [bp-30h]@1
  char v16; // [sp+14h] [bp-2Ch]@1
  int v17; // [sp+15h] [bp-2Bh]@1

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = BlockSource::getBlockEntity(a2, a3);
  v8 = v7;
  v9 = (int *)(*(int (**)(void))(*(_DWORD *)v7 + 100))();
  sub_21E8AF4((int *)((char *)&v17 + 3), v9);
  v10 = operator new(0x1Cu);
  CompoundTag::CompoundTag((int)v10);
  (*(void (__fastcall **)(int, void *))(*(_DWORD *)v8 + 144))(v8, v10);
  BlockSource::getBlockAndData((BlockSource *)&v16, v5, (int)v4);
  v11 = (Level *)BlockSource::getLevel(v5);
  v15 = v10;
  ShulkerBoxBlock::spawnBoxInstance((int)v6, (int)v5, v11, (int)v4, (int)&v17 + 3, (int)&v15, (unsigned __int8)v17);
  if ( v15 )
    (*(void (**)(void))(*(_DWORD *)v15 + 4))();
  v15 = 0;
  v12 = (void *)(*(int *)((char *)&v17 + 3) - 12);
  if ( (int *)(*(int *)((char *)&v17 + 3) - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(*(int *)((char *)&v17 + 3) - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  }
}


int __fastcall ShulkerBoxBlock::getPlacementDataValue(ShulkerBoxBlock *this, Entity *a2, const BlockPos *a3, signed __int8 a4, const Vec3 *a5, int a6)
{
  return a6;
}


signed int __fastcall ShulkerBoxBlock::dispense(ShulkerBoxBlock *this, BlockSource *a2, Container *a3, int a4, const Vec3 *a5, int a6)
{
  Container *v6; // r5@1
  int v7; // r4@1
  BlockSource *v8; // r6@1
  int v9; // r0@1
  Block *v10; // r0@1
  int v11; // r9@2
  int v12; // r0@3
  int v13; // r0@6
  int v14; // r0@8
  int v15; // r2@9
  signed int v16; // r4@13
  char v17; // r0@15
  int v18; // r0@15
  ShulkerBoxBlockEntity *v19; // r4@15
  void (__fastcall *v20)(ShulkerBoxBlockEntity *, _DWORD); // r6@18
  char *v21; // r0@18
  Container *v23; // [sp+Ch] [bp-F4h]@6
  int v24; // [sp+10h] [bp-F0h]@6
  char v25; // [sp+14h] [bp-ECh]@15
  char v26; // [sp+20h] [bp-E0h]@15
  char v27; // [sp+24h] [bp-DCh]@15
  char v28; // [sp+30h] [bp-D0h]@10
  int v29; // [sp+3Ch] [bp-C4h]@7
  int v30; // [sp+40h] [bp-C0h]@7
  int v31; // [sp+44h] [bp-BCh]@7
  int v32; // [sp+48h] [bp-B8h]@7
  int v33; // [sp+4Ch] [bp-B4h]@7
  int v34; // [sp+50h] [bp-B0h]@7
  char v35; // [sp+54h] [bp-ACh]@5
  int v36; // [sp+60h] [bp-A0h]@2
  int v37; // [sp+64h] [bp-9Ch]@2
  int v38; // [sp+68h] [bp-98h]@2
  int v39; // [sp+6Ch] [bp-94h]@2
  int v40; // [sp+70h] [bp-90h]@2
  int v41; // [sp+74h] [bp-8Ch]@2
  char v42; // [sp+78h] [bp-88h]@2
  char v43; // [sp+84h] [bp-7Ch]@1
  char v44; // [sp+90h] [bp-70h]@1
  int v45; // [sp+98h] [bp-68h]@25
  void *v46; // [sp+B4h] [bp-4Ch]@23
  void *ptr; // [sp+C4h] [bp-3Ch]@21

  v6 = a3;
  v7 = a4;
  v8 = a2;
  v9 = (*(int (__fastcall **)(Container *, int))(*(_DWORD *)a3 + 16))(a3, a4);
  ItemInstance::ItemInstance((ItemInstance *)&v44, v9);
  BlockPos::BlockPos((int)&v43, (int)a5);
  v10 = (Block *)BlockSource::getBlock(v8, (const BlockPos *)&v43);
  if ( Block::isType(v10, (const Block *)Block::mAir) != 1 )
  {
    v16 = 0;
    goto LABEL_21;
  }
  BlockPos::BlockPos((int)&v42, (int)a5);
  v11 = a6;
  BlockPos::relative((BlockPos *)&v39, (int)&v42, a6, 1);
  v36 = v39;
  v37 = v40;
  v38 = v41;
  if ( BlockSource::isSolidBlockingBlock(v8, (const BlockPos *)&v36) == 1 )
    v12 = BlockSource::getBlock(v8, (const BlockPos *)&v36);
    if ( (_BYTE)a6 || *(_BYTE *)(v12 + 4) != *(_BYTE *)(Block::mPiston + 4) )
    {
      BlockPos::relative((BlockPos *)&v35, (int)&v42, Facing::OPPOSITE_FACING[a6], 1);
      if ( BlockSource::isSolidBlockingBlock(v8, (const BlockPos *)&v35) != 1 )
      {
        v23 = v6;
        v24 = v7;
        goto LABEL_15;
      }
    }
  v23 = v6;
  v24 = v7;
  v13 = 0;
  while ( 1 )
    v11 = v13;
    BlockPos::relative((BlockPos *)&v32, (int)&v42, v13, 1);
    v39 = v32;
    v40 = v33;
    v41 = v34;
    v29 = v32;
    v30 = v33;
    v31 = v34;
    if ( BlockSource::isSolidBlockingBlock(v8, (const BlockPos *)&v29) != 1 )
      goto LABEL_11;
    v14 = BlockSource::getBlock(v8, (const BlockPos *)&v29);
    if ( !v11 )
      v15 = *(_BYTE *)(v14 + 4);
      v13 = 1;
      if ( v15 == *(_BYTE *)(Block::mPiston + 4) )
        continue;
    BlockPos::relative((BlockPos *)&v28, (int)&v42, Facing::OPPOSITE_FACING[v11], 1);
    if ( BlockSource::isSolidBlockingBlock(v8, (const BlockPos *)&v28) != 1 )
      goto LABEL_15;
LABEL_11:
    v13 = v11 + 1;
    if ( v11 + 1 >= 6 )
      break;
LABEL_15:
  BlockPos::BlockPos((int)&v27, (int)a5);
  v26 = *(_BYTE *)(Block::mShulkerBox + 4);
  v17 = ItemInstance::getAuxValue((ItemInstance *)&v44);
  BlockSource::setBlockAndData((int)v8, (BlockPos *)&v27, &v26, v17, 3, 0);
  BlockPos::BlockPos((int)&v25, (int)a5);
  v18 = BlockSource::getBlockEntity(v8, (const BlockPos *)&v25);
  v19 = (ShulkerBoxBlockEntity *)v18;
  if ( v18 && BlockEntity::isType(v18, 25) == 1 )
    if ( ItemInstance::hasUserData((ItemInstance *)&v44) == 1 )
      v20 = *(void (__fastcall **)(ShulkerBoxBlockEntity *, _DWORD))(*(_DWORD *)v19 + 140);
      v21 = ItemInstance::getUserData((ItemInstance *)&v44);
      v20(v19, *(_DWORD *)v21);
    ShulkerBoxBlockEntity::setFacingDir(v19, Facing::OPPOSITE_FACING[v11]);
  (*(void (__fastcall **)(Container *, int, signed int))(*(_DWORD *)v23 + 36))(v23, v24, 1);
  v16 = 1;
LABEL_21:
  if ( ptr )
    operator delete(ptr);
  if ( v46 )
    operator delete(v46);
  if ( v45 )
    (*(void (**)(void))(*(_DWORD *)v45 + 4))();
  return v16;
}


int __fastcall ShulkerBoxBlock::spawnBoxInstance(int a1, int a2, Level *this, int a4, int a5, int a6, int a7)
{
  Block *v7; // r6@1
  const BlockPos *v8; // r8@1
  BlockSource *v9; // r5@1
  int (__fastcall *v10)(Block *, char *, int, _DWORD); // r4@1
  char *v11; // r0@1
  int v12; // r4@1
  int v13; // r0@1
  int v14; // r4@1
  int result; // r0@7
  int v16; // r4@8
  int v17; // r2@8
  int v18; // [sp+4h] [bp-64h]@8
  char v19; // [sp+8h] [bp-60h]@1
  int v20; // [sp+10h] [bp-58h]@5
  void *v21; // [sp+2Ch] [bp-3Ch]@3
  void *ptr; // [sp+3Ch] [bp-2Ch]@1

  v7 = (Block *)a1;
  v8 = (const BlockPos *)a4;
  v9 = (BlockSource *)a2;
  v10 = *(int (__fastcall **)(Block *, char *, int, _DWORD))(*(_DWORD *)a1 + 264);
  v11 = Level::getRandom(this);
  v12 = v10(v7, v11, a7, 0);
  v13 = (*(int (__fastcall **)(Block *, _DWORD))(*(_DWORD *)v7 + 500))(v7, (unsigned __int8)a7);
  ItemInstance::ItemInstance((ItemInstance *)&v19, v12, 1, v13);
  v14 = Block::popResource(v7, v9, v8, (const ItemInstance *)&v19);
  if ( ptr )
    operator delete(ptr);
  if ( v21 )
    operator delete(v21);
  if ( v20 )
    (*(void (**)(void))(*(_DWORD *)v20 + 4))();
  result = 0;
  v20 = 0;
  if ( v14 )
  {
    v16 = v14 + 3416;
    v17 = *(_DWORD *)a6;
    *(_DWORD *)a6 = 0;
    v18 = v17;
    ItemInstance::setUserData(v16, &v18);
    if ( v18 )
      (*(void (**)(void))(*(_DWORD *)v18 + 4))();
    v18 = 0;
    result = *(_DWORD *)(*(_DWORD *)a5 - 12);
    if ( result )
      result = ItemInstance::setCustomName(v16, (int *)a5);
  }
  return result;
}


void __fastcall ShulkerBoxBlock::spawnResources(ShulkerBoxBlock *this, BlockSource *a2, const BlockPos *a3, int a4, float a5, int a6)
{
  ShulkerBoxBlock::spawnResources(this, a2, a3, a4, a5, a6);
}


AABB *__fastcall ShulkerBoxBlock::getAABB(ShulkerBoxBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, bool a6, int a7)
{
  const BlockPos *v7; // r5@1
  BlockSource *v8; // r6@1
  Block *v9; // r7@1
  AABB *v10; // r4@1
  BlockEntity *v11; // r0@1
  char *v12; // r0@2
  AABB *result; // r0@2

  v7 = a3;
  v8 = a2;
  v9 = this;
  v10 = a4;
  v11 = (BlockEntity *)BlockSource::getBlockEntity(a2, a3);
  if ( v11 )
  {
    v12 = BlockEntity::getAABB(v11);
    *(_DWORD *)v10 = *(_DWORD *)v12;
    *((_DWORD *)v10 + 1) = *((_DWORD *)v12 + 1);
    *((_DWORD *)v10 + 2) = *((_DWORD *)v12 + 2);
    *((_DWORD *)v10 + 3) = *((_DWORD *)v12 + 3);
    *((_DWORD *)v10 + 4) = *((_DWORD *)v12 + 4);
    *((_DWORD *)v10 + 5) = *((_DWORD *)v12 + 5);
    *((_BYTE *)v10 + 24) = v12[24];
    result = v10;
  }
  else
    result = (AABB *)Block::getAABB(v9, v8, v7, v10, a5, a6, a7);
  return result;
}


int __fastcall ShulkerBoxBlock::canBeSilkTouched(ShulkerBoxBlock *this)
{
  return 0;
}


void __fastcall ShulkerBoxBlock::onExploded(ShulkerBoxBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4)
{
  ShulkerBoxBlock::onExploded(this, a2, a3, a4);
}


int __fastcall ShulkerBoxBlock::getColor(ShulkerBoxBlock *this, int a2)
{
  return DyePowderItem::COLOR_RGB[15 - a2];
}


void __fastcall ShulkerBoxBlock::~ShulkerBoxBlock(ShulkerBoxBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall ShulkerBoxBlock::spawnResources(ShulkerBoxBlock *this, BlockSource *a2, const BlockPos *a3, int a4, float a5, int a6)
{
  BlockSource *v6; // r5@1
  ShulkerBoxBlock *v7; // r8@1
  signed int v8; // r6@1
  const BlockPos *v9; // r9@1
  Level *v10; // r7@1
  ShulkerBoxBlockEntity *v11; // r4@2
  void *v12; // r10@3
  int *v13; // r0@3
  void *v14; // r0@7
  unsigned int *v15; // r2@9
  signed int v16; // r1@11
  void *v17; // [sp+Ch] [bp-34h]@3
  int v18; // [sp+10h] [bp-30h]@3

  v6 = a2;
  v7 = this;
  v8 = a4;
  v9 = a3;
  v10 = (Level *)BlockSource::getLevel(a2);
  if ( !Level::isClientSide(v10) )
  {
    v11 = (ShulkerBoxBlockEntity *)BlockSource::getBlockEntity(v6, v9);
    if ( v11 )
    {
      v12 = operator new(0x1Cu);
      CompoundTag::CompoundTag((int)v12);
      (*(void (__fastcall **)(ShulkerBoxBlockEntity *, void *))(*(_DWORD *)v11 + 144))(v11, v12);
      v13 = (int *)(*(int (__fastcall **)(ShulkerBoxBlockEntity *))(*(_DWORD *)v11 + 100))(v11);
      sub_21E8AF4(&v18, v13);
      v17 = v12;
      if ( ShulkerBoxBlockEntity::getUndyed(v11) )
        v8 = 16;
      ShulkerBoxBlock::spawnBoxInstance((int)v7, (int)v6, v10, (int)v9, (int)&v18, (int)&v17, v8);
      if ( v17 )
        (*(void (**)(void))(*(_DWORD *)v17 + 4))();
      v17 = 0;
      v14 = (void *)(v18 - 12);
      if ( (int *)(v18 - 12) != &dword_28898C0 )
      {
        v15 = (unsigned int *)(v18 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
        }
        else
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      }
    }
  }
}


signed int __fastcall ShulkerBoxBlock::playerWillDestroy(ShulkerBoxBlock *this, Player *a2, const BlockPos *a3, int a4)
{
  Player *v4; // r11@1
  Block *v5; // r5@1
  signed int v6; // r10@1
  const BlockPos *v7; // r9@1
  BlockSource *v8; // r8@1
  Level *v9; // r4@1
  signed int v10; // r4@2
  Block *v11; // r6@3
  int v12; // r7@3
  void *v13; // r5@3
  int *v14; // r0@3
  ShulkerBoxBlockEntity *v15; // r0@3
  int v16; // r7@3
  int v17; // r5@3
  signed int v18; // r11@4
  void *v19; // r0@4
  ListTag *v20; // r11@6
  void *v21; // r0@6
  void *v22; // r0@17
  unsigned int *v24; // r2@21
  signed int v25; // r1@23
  unsigned int *v26; // r2@25
  signed int v27; // r1@27
  unsigned int *v28; // r2@37
  signed int v29; // r1@39
  int v30; // [sp+10h] [bp-48h]@3
  Level *v31; // [sp+14h] [bp-44h]@3
  int v32; // [sp+18h] [bp-40h]@12
  int v33; // [sp+20h] [bp-38h]@6
  int v34; // [sp+28h] [bp-30h]@4
  int v35; // [sp+2Ch] [bp-2Ch]@3

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (BlockSource *)Entity::getRegion(a2);
  v9 = (Level *)BlockSource::getLevel(v8);
  if ( Level::isClientSide(v9) == 1 )
    return Block::playerWillDestroy(v5, v4, v7, v6);
  v11 = v5;
  v12 = BlockSource::getBlockEntity(v8, v7);
  v13 = operator new(0x1Cu);
  CompoundTag::CompoundTag((int)v13);
  v31 = v9;
  (*(void (__fastcall **)(int, void *))(*(_DWORD *)v12 + 144))(v12, v13);
  v14 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v12 + 100))(v12);
  sub_21E8AF4(&v35, v14);
  v15 = (ShulkerBoxBlockEntity *)v12;
  v16 = (int)v13;
  v30 = ShulkerBoxBlockEntity::getUndyed(v15);
  v17 = (int)v11;
  v10 = Block::playerWillDestroy(v11, v4, v7, v6);
  if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)v4 + 652))(v4) != 1 )
    goto LABEL_47;
  sub_21E94B4((void **)&v34, "Items");
  v18 = CompoundTag::contains(v16, (const void **)&v34);
  v19 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
  {
    v26 = (unsigned int *)(v34 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v17 = (int)v11;
    }
    else
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  }
  if ( v18 != 1 )
  sub_21E94B4((void **)&v33, "Items");
  v20 = (ListTag *)CompoundTag::getList(v16, (const void **)&v33);
  v21 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v33 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  if ( !v20 )
LABEL_47:
    if ( v10 != 1 )
      goto LABEL_17;
LABEL_12:
    v32 = v16;
    if ( v30 )
      v6 = 16;
    ShulkerBoxBlock::spawnBoxInstance(v17, (int)v8, v31, (int)v7, (int)&v35, (int)&v32, v6);
    if ( v32 )
      (*(void (**)(void))(*(_DWORD *)v32 + 4))();
    v16 = 0;
    v32 = 0;
    goto LABEL_17;
  if ( ListTag::size(v20) && v10 == 1 )
    goto LABEL_12;
LABEL_17:
  v22 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v35 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  if ( v16 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 4))(v16);
  return v10;
}


void __fastcall ShulkerBoxBlock::~ShulkerBoxBlock(ShulkerBoxBlock *this)
{
  ShulkerBoxBlock::~ShulkerBoxBlock(this);
}


int __fastcall ShulkerBoxBlock::getSpawnResourcesAuxValue(ShulkerBoxBlock *this, int a2)
{
  return a2;
}
