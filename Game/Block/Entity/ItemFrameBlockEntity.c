

signed int __fastcall ItemFrameBlockEntity::save(ItemFrameBlockEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  ItemFrameBlockEntity *v3; // r5@1
  int v4; // r0@3
  void *v5; // r0@7
  void *v6; // r0@8
  void *v7; // r0@9
  signed int result; // r0@10
  unsigned int *v9; // r2@12
  signed int v10; // r1@14
  unsigned int *v11; // r2@16
  signed int v12; // r1@18
  unsigned int *v13; // r2@20
  signed int v14; // r1@22
  int v15; // [sp+8h] [bp-30h]@9
  int v16; // [sp+10h] [bp-28h]@8
  int v17; // [sp+14h] [bp-24h]@3
  int v18; // [sp+18h] [bp-20h]@3
  int v19; // [sp+20h] [bp-18h]@3

  v2 = a2;
  v3 = this;
  if ( BlockEntity::save(this, a2) == 1 )
  {
    if ( !ItemInstance::isNull((ItemFrameBlockEntity *)((char *)v3 + 128)) )
    {
      sub_21E94B4((void **)&v19, "Item");
      ItemInstance::save((ItemInstance *)&v17, (ItemFrameBlockEntity *)((char *)v3 + 128));
      v4 = v17;
      v17 = 0;
      v18 = v4;
      CompoundTag::put((int)v2, (const void **)&v19, &v18);
      if ( v18 )
        (*(void (**)(void))(*(_DWORD *)v18 + 4))();
      v18 = 0;
      if ( v17 )
        (*(void (**)(void))(*(_DWORD *)v17 + 4))();
      v5 = (void *)(v19 - 12);
      if ( (int *)(v19 - 12) != &dword_28898C0 )
      {
        v9 = (unsigned int *)(v19 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v5);
      }
      sub_21E94B4((void **)&v16, "ItemRotation");
      CompoundTag::putByte((int)v2, (const void **)&v16, *((_BYTE *)v3 + 204));
      v6 = (void *)(v16 - 12);
      if ( (int *)(v16 - 12) != &dword_28898C0 )
        v11 = (unsigned int *)(v16 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v6);
      sub_21E94B4((void **)&v15, "ItemDropChance");
      CompoundTag::putFloat((int)v2, (const void **)&v15, *((_DWORD *)v3 + 50));
      v7 = (void *)(v15 - 12);
      if ( (int *)(v15 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v15 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
    }
    result = 1;
  }
  else
    result = 0;
  return result;
}


int *__fastcall ItemFrameBlockEntity::load(ItemFrameBlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  ItemFrameBlockEntity *v3; // r7@1
  const CompoundTag *v4; // r6@1
  void *v5; // r0@1
  int *result; // r0@4
  ItemInstance *v7; // r0@6
  void *v8; // r0@6
  signed int v9; // r6@7
  void *v10; // r0@7
  void *v16; // r0@9
  unsigned int *v17; // r2@16
  signed int v18; // r1@18
  unsigned int *v19; // r2@24
  signed int v20; // r1@26
  unsigned int *v21; // r2@28
  signed int v22; // r1@30
  unsigned int *v23; // r2@40
  signed int v24; // r1@42
  int v25; // [sp+4h] [bp-7Ch]@9
  int v26; // [sp+Ch] [bp-74h]@7
  int v27; // [sp+14h] [bp-6Ch]@6
  char v28; // [sp+18h] [bp-68h]@6
  int *v29; // [sp+20h] [bp-60h]@14
  void *v30; // [sp+3Ch] [bp-44h]@12
  void *ptr; // [sp+4Ch] [bp-34h]@10
  int v32; // [sp+64h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  BlockEntity::load(this, a2);
  sub_21E94B4((void **)&v32, "Item");
  v4 = (const CompoundTag *)CompoundTag::getCompound((int)v2, (const void **)&v32);
  v5 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v32 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( v4 && !CompoundTag::isEmpty(v4) )
    v7 = (ItemInstance *)ItemInstance::ItemInstance((int)&v28);
    ItemInstance::load(v7, v4);
    ItemInstance::operator=((int)v3 + 128, (int)&v28);
    sub_21E94B4((void **)&v27, "ItemRotation");
    *((_BYTE *)v3 + 204) = CompoundTag::getByte((int)v2, (const void **)&v27);
    v8 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v27 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      }
      else
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    sub_21E94B4((void **)&v26, "ItemDropChance");
    v9 = CompoundTag::contains((int)v2, (const void **)&v26);
    v10 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v26 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    if ( v9 == 1 )
      sub_21E94B4((void **)&v25, "ItemDropChance");
      _R0 = CompoundTag::getFloat((int)v2, (const void **)&v25);
      __asm
        VMOV            S0, R0
        VSTR            S0, [R7,#0xC8]
      v16 = (void *)(v25 - 12);
      if ( (int *)(v25 - 12) != &dword_28898C0 )
        v23 = (unsigned int *)(v25 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
        }
        else
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
    if ( ptr )
      operator delete(ptr);
    if ( v30 )
      operator delete(v30);
    result = v29;
    if ( v29 )
      result = (int *)(*(int (**)(void))(*v29 + 4))();
  else
    result = ItemInstance::setNull((ItemFrameBlockEntity *)((char *)v3 + 128));
  return result;
}


int __fastcall ItemFrameBlockEntity::onChanged(ItemFrameBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r4@1
  ItemFrameBlockEntity *v3; // r5@1
  Level *v4; // r0@1
  int result; // r0@1
  BlockPos *v6; // r5@2
  char v7; // [sp+8h] [bp-18h]@2
  char v8; // [sp+9h] [bp-17h]@2
  char v9; // [sp+Ch] [bp-14h]@2
  char v10; // [sp+Dh] [bp-13h]@2

  v2 = a2;
  v3 = this;
  v4 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v4);
  if ( !result )
  {
    v6 = (ItemFrameBlockEntity *)((char *)v3 + 32);
    BlockSource::getBlockAndData((BlockSource *)&v9, v2, (int)v6);
    v7 = v9;
    v8 = v10;
    result = BlockSource::setBlockAndData((int)v2, v6, (int)&v7, 19, 0);
  }
  return result;
}


BlockEntity *__fastcall ItemFrameBlockEntity::~ItemFrameBlockEntity(ItemFrameBlockEntity *this)
{
  ItemFrameBlockEntity *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5

  v1 = this;
  *(_DWORD *)this = &off_2709E60;
  v2 = (void *)*((_DWORD *)this + 45);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 41);
  if ( v3 )
    operator delete(v3);
  v4 = *((_DWORD *)v1 + 34);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 34) = 0;
  return j_j_j__ZN11BlockEntityD2Ev_0(v1);
}


int __fastcall ItemFrameBlockEntity::ItemFrameBlockEntity(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v8, "item_frame");
  BlockEntity::BlockEntity(v3, 17, v2);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  *(_DWORD *)v3 = &off_2709E60;
  ClockItem::SpriteCalculator::SpriteCalculator((ClockItem::SpriteCalculator *)(v3 + 104));
  CompassItem::SpriteCalculator::SpriteCalculator((CompassItem::SpriteCalculator *)(v3 + 116));
  ItemInstance::ItemInstance(v3 + 128);
  *(_DWORD *)(v3 + 200) = 1065353216;
  *(_BYTE *)(v3 + 204) = 0;
  *(_DWORD *)(v3 + 84) = 7;
  return v3;
}


signed int __fastcall ItemFrameBlockEntity::dropFramedItem(ItemFrameBlockEntity *this, BlockSource *a2, int a3)
{
  BlockSource *v3; // r7@1
  ItemFrameBlockEntity *v4; // r4@1
  int v5; // r6@1
  Level *v6; // r5@1
  int v7; // r0@2
  int v8; // r1@2
  MapItemSavedData *v9; // r0@2
  int v10; // r1@5
  int v11; // r2@5
  int v12; // r0@5
  int v13; // r3@5
  signed int result; // r0@5
  void **v15; // [sp+0h] [bp-30h]@2
  int v16; // [sp+4h] [bp-2Ch]@5
  int v17; // [sp+8h] [bp-28h]@5
  char v18; // [sp+Ch] [bp-24h]@5
  int v19; // [sp+10h] [bp-20h]@5
  int v20; // [sp+14h] [bp-1Ch]@5
  int v21; // [sp+18h] [bp-18h]@5

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Level *)BlockSource::getLevel(a2);
  if ( *((_DWORD *)v4 + 32) == Item::mFilledMap )
  {
    MapItem::getMapId((MapItem *)&v15, (ItemFrameBlockEntity *)((char *)v4 + 128));
    v7 = BlockSource::getLevel(v3);
    v9 = Level::getMapSavedData(v7, v8, *(__int64 *)&v15);
    if ( v9 )
      MapItemSavedData::removeTrackedMapEntity(v9, (ItemFrameBlockEntity *)((char *)v4 + 32));
  }
  if ( Level::isClientSide(v6) == 1 )
    v16 = 2;
    v17 = 1;
    v18 = 0;
    v15 = &off_26E96D4;
    v10 = *((_DWORD *)v4 + 9);
    v11 = *((_DWORD *)v4 + 10);
    v19 = *((_DWORD *)v4 + 8);
    v20 = v10;
    v21 = v11;
    v12 = Level::getPacketSender(v6);
    result = (*(int (__cdecl **)(int, void ***, _DWORD, int, void **, int, int))(*(_DWORD *)v12 + 8))(
               v12,
               &v15,
               *(_DWORD *)(*(_DWORD *)v12 + 8),
               v13,
               v15,
               v16,
               v17);
  else
    result = ItemFrameBlockEntity::actuallyDropItem(v4, v3, v5);
  return result;
}


int __fastcall ItemFrameBlockEntity::tick(ItemFrameBlockEntity *this, BlockSource *a2)
{
  ItemFrameBlockEntity *v2; // r5@1
  BlockSource *v3; // r8@1
  MapItem *v4; // r4@1
  Level *v5; // r0@4
  Level *v6; // r0@5
  Level *v7; // r9@5
  const BlockPos *v8; // r0@6
  int v9; // r0@7
  ItemFrameBlock *v10; // r0@10
  int v11; // r1@10
  float v18; // [sp+0h] [bp-48h]@0
  int v19; // [sp+Ch] [bp-3Ch]@6
  char v20; // [sp+10h] [bp-38h]@6
  float v21; // [sp+1Ch] [bp-2Ch]@1
  float v22; // [sp+24h] [bp-24h]@10

  v2 = this;
  v3 = a2;
  v4 = (MapItem *)*((_DWORD *)this + 32);
  Vec3::Vec3((int)&v21, (int)this + 32);
  if ( v4 == (MapItem *)Item::mClock )
  {
    ClockItem::SpriteCalculator::update((ItemFrameBlockEntity *)((char *)v2 + 104), v3, (const Vec3 *)&v21, 0);
  }
  else if ( v4 == (MapItem *)Item::mCompass )
    v10 = (ItemFrameBlock *)BlockSource::getData(v3, (ItemFrameBlockEntity *)((char *)v2 + 32));
    _R0 = ItemFrameBlock::getDirection(v10, v11);
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VSTR            S0, [SP,#0x48+var_48]
    }
    CompassItem::SpriteCalculator::updateFromPosition((ItemFrameBlockEntity *)((char *)v2 + 116), v3, v21, v22, v18, 0);
  else if ( v4 == (MapItem *)Item::mFilledMap )
    v5 = (Level *)BlockSource::getLevel(v3);
    if ( !Level::isClientSide(v5) )
      v6 = (Level *)BlockSource::getLevel(v3);
      v7 = Level::getMapSavedData(v6, (ItemFrameBlockEntity *)((char *)v2 + 128));
      if ( v7 )
      {
        BlockPos::BlockPos((int)&v20, (int)&v21);
        MapItem::blockTick(v4, (ItemFrameBlockEntity *)((char *)v2 + 128), v3, (const BlockPos *)&v20);
        v8 = (const BlockPos *)BlockSource::getLevel(v3);
        MapItemSavedData::getUpdatePacket((MapItemSavedData *)&v19, v7, v8, (int)v2 + 32);
        if ( v19 )
        {
          v9 = BlockSource::getDimension(v3);
          (*(void (**)(void))(*(_DWORD *)v9 + 212))();
          if ( v19 )
            (*(void (**)(void))(*(_DWORD *)v19 + 4))();
        }
      }
  return BlockEntity::tick(v2, v3);
}


char *__fastcall ItemFrameBlockEntity::getFramedItem(ItemFrameBlockEntity *this)
{
  return (char *)this + 128;
}


void __fastcall ItemFrameBlockEntity::~ItemFrameBlockEntity(ItemFrameBlockEntity *this)
{
  ItemFrameBlockEntity *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5

  v1 = this;
  *(_DWORD *)this = &off_2709E60;
  v2 = (void *)*((_DWORD *)this + 45);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 41);
  if ( v3 )
    operator delete(v3);
  v4 = *((_DWORD *)v1 + 34);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 34) = 0;
  BlockEntity::~BlockEntity(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


MapItemSavedData *__fastcall ItemFrameBlockEntity::_checkMapRemoval(ItemFrameBlockEntity *this, BlockSource *a2, ItemInstance *a3)
{
  ItemFrameBlockEntity *v3; // r4@1
  BlockSource *v4; // r5@1
  MapItemSavedData *result; // r0@1
  int v6; // r0@2
  int v7; // r1@2
  __int64 v8; // [sp+0h] [bp-18h]@2

  v3 = this;
  v4 = a2;
  result = (MapItemSavedData *)Item::mFilledMap;
  if ( *(_DWORD *)a3 == Item::mFilledMap )
  {
    MapItem::getMapId((MapItem *)&v8, a3);
    v6 = BlockSource::getLevel(v4);
    result = Level::getMapSavedData(v6, v7, v8);
    if ( result )
      result = (MapItemSavedData *)MapItemSavedData::removeTrackedMapEntity(
                                     result,
                                     (ItemFrameBlockEntity *)((char *)v3 + 32));
  }
  return result;
}


int __fastcall ItemFrameBlockEntity::getShadowRadius(ItemFrameBlockEntity *this, BlockSource *a2)
{
  return 0;
}


signed int __fastcall ItemFrameBlockEntity::actuallyDropItem(ItemFrameBlockEntity *this, BlockSource *a2, int a3)
{
  ItemInstance *v3; // r8@0
  BlockSource *v4; // r6@1
  int v6; // r5@1
  Level *v7; // r7@1
  signed int result; // r0@1
  int v10; // r0@6
  bool v11; // zf@6
  unsigned __int64 *v12; // r0@10
  char *v13; // r0@11
  Level *v18; // r0@13
  Spawner *v19; // r5@13
  char v20; // [sp+8h] [bp-78h]@14
  int v21; // [sp+10h] [bp-70h]@18
  void *v22; // [sp+2Ch] [bp-54h]@16
  void *ptr; // [sp+3Ch] [bp-44h]@14
  float v24; // [sp+50h] [bp-30h]@13
  float v27; // [sp+5Ch] [bp-24h]@13

  v4 = a2;
  _R4 = this;
  v6 = a3;
  v7 = (Level *)BlockSource::getLevel(a2);
  result = *((_BYTE *)_R4 + 143);
  _ZF = result == 0;
  if ( *((_BYTE *)_R4 + 143) )
  {
    v3 = (ItemFrameBlockEntity *)((char *)_R4 + 128);
    result = *((_DWORD *)_R4 + 32);
    _ZF = result == 0;
  }
  if ( !_ZF )
    result = ItemInstance::isNull(v3);
    if ( !result )
    {
      result = *((_BYTE *)_R4 + 142);
      if ( *((_BYTE *)_R4 + 142) )
      {
        v10 = Level::isClientSide(v7);
        v11 = v10 == 0;
        if ( !v10 )
          v11 = v6 == 1;
        if ( v11 )
        {
          v12 = (unsigned __int64 *)Level::getGameRules(v7);
          if ( GameRules::getBool(v12, (int **)&GameRules::DO_TILE_DROPS) == 1 )
          {
            v13 = Level::getRandom(v7);
            _R0 = Random::_genRandInt32((Random *)v13);
            __asm
            {
              VMOV            S0, R0
              VLDR            D1, =2.32830644e-10
              VCVT.F64.U32    D0, S0
              VMUL.F64        D0, D0, D1
              VCVT.F32.F64    S0, D0
              VLDR            S2, [R4,#0xC8]
              VCMPE.F32       S0, S2
              VMRS            APSR_nzcv, FPSCR
            }
            if ( _NF ^ _VF )
              v18 = (Level *)BlockSource::getLevel(v4);
              v19 = (Spawner *)Level::getSpawner(v18);
              Vec3::Vec3((int)&v24, (int)_R4 + 32);
              __asm
              {
                VMOV.F32        S0, #0.5
                VLDR            S2, [SP,#0x80+var_30]
                VLDR            S4, [SP,#0x80+var_2C]
                VLDR            S6, [SP,#0x80+var_28]
                VADD.F32        S2, S2, S0
                VADD.F32        S4, S4, S0
                VADD.F32        S0, S6, S0
                VSTR            S2, [SP,#0x80+var_24]
                VSTR            S4, [SP,#0x80+var_20]
                VSTR            S0, [SP,#0x80+var_1C]
              }
              Spawner::spawnItem(v19, v4, v3, 0, (const Vec3 *)&v27, 10);
          }
        }
        *((_BYTE *)_R4 + 204) = 0;
        ItemInstance::ItemInstance((int)&v20);
        ItemInstance::operator=((int)v3, (int)&v20);
        if ( ptr )
          operator delete(ptr);
        if ( v22 )
          operator delete(v22);
        if ( v21 )
          (*(void (**)(void))(*(_DWORD *)v21 + 4))();
        v21 = 0;
        result = BlockEntity::setChanged(_R4);
      }
    }
  return result;
}


int __fastcall ItemFrameBlockEntity::rotateFramedItem(ItemFrameBlockEntity *this)
{
  *((_BYTE *)this + 204) = (*((_BYTE *)this + 204) + 1) & 7;
  return j_j_j__ZN11BlockEntity10setChangedEv_0(this);
}


CompoundTag *__fastcall ItemFrameBlockEntity::getUpdatePacket(ItemFrameBlockEntity *this, BlockSource *a2)
{
  ItemFrameBlockEntity *v2; // r4@1
  BlockSource *v3; // r6@1
  _DWORD *v4; // r5@1
  int v5; // r3@1
  int v6; // r1@1
  int v7; // r2@1
  int v9; // [sp+0h] [bp-48h]@1
  char v10; // [sp+1Ch] [bp-2Ch]@1

  v2 = this;
  v3 = a2;
  CompoundTag::CompoundTag((int)&v9);
  (*(void (__fastcall **)(BlockSource *, int *))(*(_DWORD *)v3 + 12))(v3, &v9);
  v4 = operator new(0x38u);
  CompoundTag::CompoundTag((int)&v10, (int)&v9);
  v4[1] = 2;
  v4[2] = 1;
  v5 = (int)(v4 + 4);
  *((_BYTE *)v4 + 12) = 0;
  *v4 = &off_26E97EC;
  v6 = *((_DWORD *)v3 + 9);
  v7 = *((_DWORD *)v3 + 10);
  *(_DWORD *)v5 = *((_DWORD *)v3 + 8);
  *(_DWORD *)(v5 + 4) = v6;
  *(_DWORD *)(v5 + 8) = v7;
  CompoundTag::CompoundTag((int)(v4 + 7), (int)&v10);
  CompoundTag::~CompoundTag((CompoundTag *)&v10);
  *(_DWORD *)v2 = v4;
  return CompoundTag::~CompoundTag((CompoundTag *)&v9);
}


void __fastcall ItemFrameBlockEntity::~ItemFrameBlockEntity(ItemFrameBlockEntity *this)
{
  ItemFrameBlockEntity::~ItemFrameBlockEntity(this);
}


int __fastcall ItemFrameBlockEntity::ItemFrameBlockEntity(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r4@1
  void *v6; // r0@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+4h] [bp-1Ch]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E94B4((void **)&v10, "item_frame");
  BlockEntity::BlockEntity(v5, v4, v3);
  v6 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  *(_DWORD *)v5 = &off_2709E60;
  ClockItem::SpriteCalculator::SpriteCalculator((ClockItem::SpriteCalculator *)(v5 + 104));
  CompassItem::SpriteCalculator::SpriteCalculator((CompassItem::SpriteCalculator *)(v5 + 116));
  ItemInstance::ItemInstance(v5 + 128);
  *(_DWORD *)(v5 + 200) = 1065353216;
  *(_BYTE *)(v5 + 204) = 0;
  *(_DWORD *)(v5 + 84) = 7;
  return v5;
}


int __fastcall ItemFrameBlockEntity::setItem(ItemFrameBlockEntity *this, BlockSource *a2, const ItemInstance *a3)
{
  ItemFrameBlockEntity *v3; // r4@1
  BlockSource *v4; // r9@1
  const ItemInstance *v5; // r5@1
  const ItemInstance *v6; // r8@1
  int v7; // r0@2
  int v8; // r1@2
  MapItemSavedData *v9; // r0@2
  int v10; // r7@4
  int v11; // r0@7
  int v12; // r1@7
  MapItemSavedData *v13; // r1@7
  int v14; // r7@8
  unsigned int *v15; // r1@9
  unsigned int v16; // r0@11
  ItemFrameBlock *v17; // r0@14
  int v18; // r1@14
  unsigned int *v25; // r6@18
  unsigned int v26; // r0@20
  float v27; // [sp+0h] [bp-40h]@0
  char v28; // [sp+8h] [bp-38h]@8
  int v29; // [sp+Ch] [bp-34h]@8
  __int64 v30; // [sp+10h] [bp-30h]@7
  __int64 v31; // [sp+18h] [bp-28h]@2
  float v32; // [sp+20h] [bp-20h]@14

  v3 = this;
  v4 = a2;
  v5 = (ItemFrameBlockEntity *)((char *)this + 128);
  v6 = a3;
  if ( *((_DWORD *)this + 32) == Item::mFilledMap )
  {
    MapItem::getMapId((MapItem *)&v31, v5);
    v7 = BlockSource::getLevel(v4);
    v9 = Level::getMapSavedData(v7, v8, v31);
    if ( v9 )
      MapItemSavedData::removeTrackedMapEntity(v9, (ItemFrameBlockEntity *)((char *)v3 + 32));
  }
  v10 = *(_DWORD *)v6;
  Vec3::Vec3((int)&v31, (int)v3 + 32);
  if ( v10 == Item::mClock )
    ClockItem::SpriteCalculator::update((ItemFrameBlockEntity *)((char *)v3 + 104), v4, (const Vec3 *)&v31, 1);
  else if ( v10 == Item::mCompass )
    v17 = (ItemFrameBlock *)BlockSource::getData(v4, (ItemFrameBlockEntity *)((char *)v3 + 32));
    _R0 = ItemFrameBlock::getDirection(v17, v18);
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VSTR            S0, [SP,#0x40+var_40]
    }
    CompassItem::SpriteCalculator::updateFromPosition(
      (ItemFrameBlockEntity *)((char *)v3 + 116),
      v4,
      *(float *)&v31,
      v32,
      v27,
      1);
  else if ( v10 == Item::mFilledMap )
    MapItem::getMapId((MapItem *)&v30, v6);
    v11 = BlockSource::getLevel(v4);
    v13 = Level::getMapSavedData(v11, v12, v30);
    if ( v13 )
      MapItemSavedData::addTrackedMapEntity((int)&v28, (int)v13, (int)v3 + 32, v4, 1u);
      v14 = v29;
      if ( v29 )
      {
        v15 = (unsigned int *)(v29 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
        }
        else
          v16 = (*v15)--;
        if ( v16 == 1 )
          v25 = (unsigned int *)(v14 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          if ( &pthread_create )
          {
            __dmb();
            do
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
          }
          else
            v26 = (*v25)--;
          if ( v26 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
      }
  *((_BYTE *)v3 + 204) = 0;
  ItemInstance::operator=((int)v5, (int)v6);
  ItemInstance::set(v5, 1);
  return BlockEntity::setChanged(v3);
}
