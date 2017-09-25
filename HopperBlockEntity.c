

void __fastcall HopperBlockEntity::load(HopperBlockEntity *this, const CompoundTag *a2)
{
  HopperBlockEntity::load(this, a2);
}


void __fastcall HopperBlockEntity::load(HopperBlockEntity *this, const CompoundTag *a2)
{
  HopperBlockEntity *v2; // r4@1
  const CompoundTag *v3; // r8@1
  ListTag *v4; // r6@1
  void *v5; // r0@1
  int v6; // r11@4
  int *v7; // r4@4
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  const CompoundTag *v10; // r8@13
  unsigned int v11; // r10@14
  void *v12; // r0@14
  void (__fastcall *v13)(HopperBlockEntity *, unsigned int, char *); // ST14_4@16
  void *v14; // r0@24
  unsigned int *v15; // r2@26
  signed int v16; // r1@28
  unsigned int *v17; // r2@30
  signed int v18; // r1@32
  int v19; // [sp+8h] [bp-98h]@2
  HopperBlockEntity *v20; // [sp+10h] [bp-90h]@1
  int v21; // [sp+1Ch] [bp-84h]@24
  char v22; // [sp+20h] [bp-80h]@16
  int v23; // [sp+28h] [bp-78h]@20
  void *v24; // [sp+44h] [bp-5Ch]@18
  void *ptr; // [sp+54h] [bp-4Ch]@16
  int v26; // [sp+6Ch] [bp-34h]@5
  int v27; // [sp+74h] [bp-2Ch]@1

  v2 = this;
  v3 = a2;
  v20 = this;
  BlockEntity::load(this, a2);
  (*(void (__fastcall **)(HopperBlockEntity *, _DWORD, void *))(*(_DWORD *)v2 + 120))(v2, 0, &ItemInstance::EMPTY_ITEM);
  (*(void (__fastcall **)(HopperBlockEntity *, signed int, void *))(*(_DWORD *)v2 + 120))(
    v2,
    1,
    &ItemInstance::EMPTY_ITEM);
  (*(void (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v2 + 120))(v2, 2, &ItemInstance::EMPTY_ITEM);
  (*(void (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v2 + 120))(v2, 3, &ItemInstance::EMPTY_ITEM);
  (*(void (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v2 + 120))(v2, 4, &ItemInstance::EMPTY_ITEM);
  sub_21E94B4((void **)&v27, "Items");
  v4 = (ListTag *)CompoundTag::getList((int)v3, (const void **)&v27);
  v5 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v27 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  v19 = (int)v3;
  if ( v4 && ListTag::size(v4) >= 1 )
    v6 = 0;
    v7 = &dword_28898C0;
    do
      v10 = (const CompoundTag *)ListTag::get(v4, v6);
      if ( (*(int (**)(void))(*(_DWORD *)v10 + 24))() == 10 )
      {
        sub_21E94B4((void **)&v26, "Slot");
        v11 = CompoundTag::getByte((int)v10, (const void **)&v26);
        v12 = (void *)(v26 - 12);
        if ( (int *)(v26 - 12) != v7 )
        {
          v8 = (unsigned int *)(v26 - 4);
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
            j_j_j_j__ZdlPv_9(v12);
        }
        if ( v11 <= 4 )
          v13 = *(void (__fastcall **)(HopperBlockEntity *, unsigned int, char *))(*(_DWORD *)v20 + 120);
          ItemInstance::fromTag((ItemInstance *)&v22, v10);
          v13(v20, v11, &v22);
          if ( ptr )
            operator delete(ptr);
          v7 = &dword_28898C0;
          if ( v24 )
            operator delete(v24);
          if ( v23 )
            (*(void (**)(void))(*(_DWORD *)v23 + 4))();
          v23 = 0;
      }
      ++v6;
    while ( v6 < ListTag::size(v4) );
  sub_21E94B4((void **)&v21, "TransferCooldown");
  *((_DWORD *)v20 + 54) = CompoundTag::getInt(v19, (const void **)&v21);
  v14 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v21 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
}


signed int __fastcall HopperBlockEntity::isSourceOfContainerType(int a1, BlockSource *a2, int a3)
{
  BlockSource *v3; // r5@1
  int v4; // r6@1
  int v5; // r4@1
  BlockEntity *v6; // r0@1
  signed int v7; // r5@1
  int v9; // [sp+0h] [bp-20h]@1

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Vec3::Vec3((int)&v9, a1 + 32);
  v6 = Hopper::_getSourceContainer((Hopper *)(v4 + 216), v3, (const Vec3 *)&v9);
  v7 = 0;
  if ( v6 && Container::getContainerType(v6) == v5 )
    v7 = 1;
  return v7;
}


char *__fastcall HopperBlockEntity::getItem(HopperBlockEntity *this, int a2)
{
  char *result; // r0@1

  result = (char *)this + 72 * a2 + 232;
  if ( (unsigned int)a2 > 4 )
    result = (char *)&ItemInstance::EMPTY_ITEM;
  return result;
}


signed int __fastcall HopperBlockEntity::getContainerSize(HopperBlockEntity *this)
{
  return 5;
}


BlockEntity *__fastcall HopperBlockEntity::~HopperBlockEntity(HopperBlockEntity *this)
{
  HopperBlockEntity *v1; // r4@1
  Container *v2; // r5@1
  void *v3; // r0@1
  void *v4; // r0@3
  int v5; // r0@5
  void *v6; // r0@7
  void *v7; // r0@9
  int v8; // r0@11
  void *v9; // r0@13
  void *v10; // r0@15
  int v11; // r0@17
  void *v12; // r0@19
  void *v13; // r0@21
  int v14; // r0@23
  void *v15; // r0@25
  void *v16; // r0@27
  int v17; // r0@29

  v1 = this;
  *(_DWORD *)this = &off_2709D50;
  *((_DWORD *)this + 26) = &off_2709DE4;
  v2 = (HopperBlockEntity *)((char *)this + 104);
  v3 = (void *)*((_DWORD *)this + 143);
  if ( v3 )
    operator delete(v3);
  v4 = (void *)*((_DWORD *)v1 + 139);
  if ( v4 )
    operator delete(v4);
  v5 = *((_DWORD *)v1 + 132);
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  *((_DWORD *)v1 + 132) = 0;
  v6 = (void *)*((_DWORD *)v1 + 125);
  if ( v6 )
    operator delete(v6);
  v7 = (void *)*((_DWORD *)v1 + 121);
  if ( v7 )
    operator delete(v7);
  v8 = *((_DWORD *)v1 + 114);
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  *((_DWORD *)v1 + 114) = 0;
  v9 = (void *)*((_DWORD *)v1 + 107);
  if ( v9 )
    operator delete(v9);
  v10 = (void *)*((_DWORD *)v1 + 103);
  if ( v10 )
    operator delete(v10);
  v11 = *((_DWORD *)v1 + 96);
  if ( v11 )
    (*(void (**)(void))(*(_DWORD *)v11 + 4))();
  *((_DWORD *)v1 + 96) = 0;
  v12 = (void *)*((_DWORD *)v1 + 89);
  if ( v12 )
    operator delete(v12);
  v13 = (void *)*((_DWORD *)v1 + 85);
  if ( v13 )
    operator delete(v13);
  v14 = *((_DWORD *)v1 + 78);
  if ( v14 )
    (*(void (**)(void))(*(_DWORD *)v14 + 4))();
  *((_DWORD *)v1 + 78) = 0;
  v15 = (void *)*((_DWORD *)v1 + 71);
  if ( v15 )
    operator delete(v15);
  v16 = (void *)*((_DWORD *)v1 + 67);
  if ( v16 )
    operator delete(v16);
  v17 = *((_DWORD *)v1 + 60);
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  *((_DWORD *)v1 + 60) = 0;
  Container::~Container(v2);
  return j_j_j__ZN11BlockEntityD2Ev_0(v1);
}


void __fastcall HopperBlockEntity::checkForSmeltEverythingAchievement(HopperBlockEntity *this, BlockSource *a2)
{
  HopperBlockEntity::checkForSmeltEverythingAchievement(this, a2);
}


signed int __fastcall HopperBlockEntity::isAttachedToContainerType(int a1, BlockSource *a2, int a3)
{
  int v3; // r6@1
  int v4; // r7@1
  BlockSource *v5; // r5@1
  int v6; // r8@1
  HopperBlock *v7; // r0@1
  int v8; // r1@1
  int v9; // r4@1
  BlockEntity *v10; // r0@1
  signed int v11; // r5@1
  int v13; // [sp+0h] [bp-28h]@1

  v3 = a1;
  v4 = a1 + 32;
  v5 = a2;
  v6 = a3;
  v7 = (HopperBlock *)BlockSource::getData(a2, (const BlockPos *)(a1 + 32));
  v9 = HopperBlock::getAttachedFace(v7, v8);
  Vec3::Vec3((int)&v13, v4);
  v10 = Hopper::_getAttachedContainer((Hopper *)(v3 + 216), v5, (const Vec3 *)&v13, v9);
  v11 = 0;
  if ( v10 && Container::getContainerType(v10) == v6 )
    v11 = 1;
  return v11;
}


void __fastcall HopperBlockEntity::onNeighborChanged(HopperBlockEntity *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r4@1
  HopperBlockEntity *v4; // r5@1
  Level *v5; // r0@1
  BlockEntity *v6; // r0@3

  v3 = a2;
  v4 = this;
  v5 = (Level *)BlockSource::getLevel(a2);
  if ( !Level::isClientSide(v5) && HopperBlockEntity::isAttachedToChestAndFurnace(v4, v3) == 1 )
  {
    v6 = HopperBlockEntity::getAttachedFurnace(v4, v3);
    if ( v6 )
      j_j_j__ZN18FurnaceBlockEntity34checkForSmeltEverythingAchievementER11BlockSource(v6, v3);
  }
}


signed int __fastcall HopperBlockEntity::getMaxStackSize(HopperBlockEntity *this)
{
  return 64;
}


int __fastcall HopperBlockEntity::_tick(HopperBlockEntity *this, BlockSource *a2, int a3)
{
  BlockSource *v3; // r5@1
  HopperBlockEntity *v4; // r4@1
  int v5; // r7@1
  Level *v6; // r0@1
  __int64 v7; // r0@1
  signed int v8; // r6@1
  bool v9; // cf@1
  __int64 v10; // r2@1
  unsigned __int8 v11; // vf@8
  HopperBlock *v12; // r0@10
  int v13; // r1@10
  HopperBlock *v14; // r0@11
  int v15; // r1@11
  unsigned int v16; // r8@11
  char v18; // [sp+8h] [bp-28h]@11

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Level *)BlockSource::getLevel(a2);
  v7 = *(_QWORD *)Level::getCurrentTick(v6);
  v8 = 0;
  v10 = *((_QWORD *)v4 + 74);
  v9 = (unsigned int)v10 >= (unsigned int)v7;
  LODWORD(v10) = 0;
  if ( v9 )
    LODWORD(v10) = 1;
  if ( HIDWORD(v10) >= HIDWORD(v7) )
    v8 = 1;
  if ( HIDWORD(v10) == HIDWORD(v7) )
    v8 = v10;
  if ( !v8 )
  {
    *((_QWORD *)v4 + 74) = v7;
    LODWORD(v7) = *((_DWORD *)v4 + 54);
    v11 = __OFSUB__((_DWORD)v7, 1);
    LODWORD(v7) = v7 - 1;
    *((_DWORD *)v4 + 54) = v7;
    if ( (unsigned __int8)(((signed int)v7 < 0) ^ v11) | ((_DWORD)v7 == 0) )
    {
      *((_DWORD *)v4 + 54) = 0;
      HopperBlockEntity::_ensureTickingOrder(v4, v3, v5);
      v12 = (HopperBlock *)BlockSource::getData(v3, (HopperBlockEntity *)((char *)v4 + 32));
      LODWORD(v7) = HopperBlock::isTurnedOn(v12, v13);
      if ( (_DWORD)v7 == 1 )
      {
        v14 = (HopperBlock *)BlockSource::getData(v3, (HopperBlockEntity *)((char *)v4 + 32));
        v16 = HopperBlock::getAttachedFace(v14, v15);
        Vec3::Vec3((int)&v18, (int)v4 + 32);
        LODWORD(v7) = Hopper::_tryMoveItems(
                        (HopperBlockEntity *)((char *)v4 + 216),
                        v3,
                        (HopperBlockEntity *)((char *)v4 + 104),
                        (const Vec3 *)&v18,
                        __PAIR__(1, v16));
        if ( (_DWORD)v7 == 1 )
          LODWORD(v7) = BlockEntity::setChanged(v4);
      }
    }
  }
  return v7;
}


void __fastcall HopperBlockEntity::getLevelPos(HopperBlockEntity *this, int a2)
{
  Vec3::Vec3((int)this, a2 + 32);
}


signed int __fastcall HopperBlockEntity::isAttachedToChestAndFurnace(HopperBlockEntity *this, BlockSource *a2)
{
  HopperBlockEntity *v2; // r6@1
  const BlockPos *v3; // r5@1
  BlockSource *v4; // r4@1
  Hopper *v5; // r9@1
  BlockEntity *v6; // r0@1
  HopperBlock *v7; // r0@3
  int v8; // r1@3
  int v9; // r7@3
  BlockEntity *v10; // r0@3
  HopperBlock *v11; // r0@5
  int v12; // r1@5
  int v13; // r7@5
  BlockEntity *v14; // r0@5
  BlockEntity *v15; // r0@7
  signed int v16; // r4@7
  signed int result; // r0@10
  int v18; // [sp+0h] [bp-28h]@1

  v2 = this;
  v3 = (HopperBlockEntity *)((char *)this + 32);
  v4 = a2;
  Vec3::Vec3((int)&v18, (int)this + 32);
  v5 = (HopperBlockEntity *)((char *)v2 + 216);
  v6 = Hopper::_getSourceContainer((HopperBlockEntity *)((char *)v2 + 216), v4, (const Vec3 *)&v18);
  if ( v6
    && (unsigned __int8)Container::getContainerType(v6) == 2
    && (v7 = (HopperBlock *)BlockSource::getData(v4, v3),
        v9 = HopperBlock::getAttachedFace(v7, v8),
        Vec3::Vec3((int)&v18, (int)v3),
        (v10 = Hopper::_getAttachedContainer((HopperBlockEntity *)((char *)v2 + 216), v4, (const Vec3 *)&v18, v9)) != 0)
    && !(unsigned __int8)Container::getContainerType(v10) )
  {
    result = 1;
  }
  else
    v11 = (HopperBlock *)BlockSource::getData(v4, v3);
    v13 = HopperBlock::getAttachedFace(v11, v12);
    Vec3::Vec3((int)&v18, (int)v3);
    v14 = Hopper::_getAttachedContainer(v5, v4, (const Vec3 *)&v18, v13);
    if ( v14 && (unsigned __int8)Container::getContainerType(v14) == 2 )
    {
      Vec3::Vec3((int)&v18, (int)v3);
      v15 = Hopper::_getSourceContainer(v5, v4, (const Vec3 *)&v18);
      v16 = 0;
      if ( v15 )
      {
        if ( !(unsigned __int8)Container::getContainerType(v15) )
          v16 = 1;
      }
      result = v16;
    }
    else
      result = 0;
  return result;
}


void __fastcall HopperBlockEntity::~HopperBlockEntity(HopperBlockEntity *this)
{
  BlockEntity *v1; // r0@1

  v1 = HopperBlockEntity::~HopperBlockEntity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall HopperBlockEntity::save(HopperBlockEntity *this, CompoundTag *a2)
{
  ItemInstance *v2; // r8@0
  CompoundTag *v3; // r4@1
  HopperBlockEntity *v4; // r6@1
  void *v5; // r4@2
  signed int v6; // r9@2
  signed int result; // r0@3
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  int v10; // r5@12
  bool v11; // zf@12
  int v12; // r5@17
  void *v13; // r0@17
  int v14; // r0@18
  void *v15; // r0@25
  void *v16; // r0@26
  unsigned int *v17; // r2@28
  signed int v18; // r1@30
  unsigned int *v19; // r2@32
  signed int v20; // r1@34
  int v21; // [sp+8h] [bp-50h]@2
  int v22; // [sp+10h] [bp-48h]@26
  void *v23; // [sp+14h] [bp-44h]@23
  int v24; // [sp+1Ch] [bp-3Ch]@23
  int v25; // [sp+20h] [bp-38h]@18
  int v26; // [sp+28h] [bp-30h]@4
  int v27; // [sp+2Ch] [bp-2Ch]@17
  int v28; // [sp+38h] [bp-20h]@4

  v3 = a2;
  v4 = this;
  if ( BlockEntity::save(this, a2) == 1 )
  {
    v21 = (int)v3;
    v5 = operator new(0x14u);
    ListTag::ListTag((int)v5);
    v6 = 0;
    do
    {
      v10 = (int)v4 + 72 * v6;
      v11 = *(_BYTE *)(v10 + 247) == 0;
      if ( *(_BYTE *)(v10 + 247) )
      {
        v2 = (ItemInstance *)(v10 + 232);
        v11 = *(_DWORD *)(v10 + 232) == 0;
      }
      if ( !v11 && !ItemInstance::isNull(v2) && *(_BYTE *)(v10 + 246) )
        ItemInstance::save((ItemInstance *)&v27, v2);
        v12 = v27;
        sub_21E94B4((void **)&v26, "Slot");
        CompoundTag::putByte(v12, (const void **)&v26, v6);
        v13 = (void *)(v26 - 12);
        if ( (int *)(v26 - 12) != &dword_28898C0 )
        {
          v8 = (unsigned int *)(v26 - 4);
          if ( v28 )
          {
            __dmb();
            do
              v9 = __ldrex(v8);
            while ( __strex(v9 - 1, v8) );
          }
          else
            v9 = (*v8)--;
          if ( v9 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        }
        v14 = v27;
        v27 = 0;
        v25 = v14;
        ListTag::add((int)v5, &v25);
        if ( v25 )
          (*(void (**)(void))(*(_DWORD *)v25 + 4))();
        v25 = 0;
        if ( v27 )
          (*(void (**)(void))(*(_DWORD *)v27 + 4))();
      ++v6;
    }
    while ( v6 < 5 );
    sub_21E94B4((void **)&v24, "Items");
    v23 = v5;
    CompoundTag::put(v21, (const void **)&v24, (int *)&v23);
    if ( v23 )
      (*(void (**)(void))(*(_DWORD *)v23 + 4))();
    v23 = 0;
    v15 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v24 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      else
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    sub_21E94B4((void **)&v22, "TransferCooldown");
    CompoundTag::putInt(v21, (const void **)&v22, *((_DWORD *)v4 + 54));
    v16 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v22 - 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall HopperBlockEntity::_countItems(HopperBlockEntity *this)
{
  HopperBlockEntity *v1; // r4@1
  int v2; // r6@1
  int v3; // r8@1
  int v4; // r5@2
  int v5; // r0@3
  bool v6; // zf@3
  signed int v7; // r0@6
  signed int v8; // r2@6
  int v10; // [sp+0h] [bp-60h]@3
  int v11; // [sp+8h] [bp-58h]@14
  unsigned __int8 v12; // [sp+Eh] [bp-52h]@6
  char v13; // [sp+Fh] [bp-51h]@3
  void *v14; // [sp+24h] [bp-3Ch]@12
  void *ptr; // [sp+34h] [bp-2Ch]@10

  v1 = this;
  v2 = (*(int (**)(void))(*(_DWORD *)this + 124))();
  v3 = 0;
  if ( v2 )
  {
    v4 = 0;
    do
    {
      v5 = (*(int (__fastcall **)(HopperBlockEntity *, int))(*(_DWORD *)v1 + 116))(v1, v4);
      ItemInstance::ItemInstance((ItemInstance *)&v10, v5);
      v6 = v13 == 0;
      if ( v13 )
        v6 = v10 == 0;
      if ( !v6 )
      {
        v7 = ItemInstance::isNull((ItemInstance *)&v10);
        v8 = 0;
        if ( !v12 )
          v8 = 1;
        if ( !(v7 | v8) )
          v3 += v12;
      }
      if ( ptr )
        operator delete(ptr);
      if ( v14 )
        operator delete(v14);
      if ( v11 )
        (*(void (**)(void))(*(_DWORD *)v11 + 4))();
      ++v4;
    }
    while ( v2 != v4 );
  }
  return v3;
}


BlockEntity *__fastcall HopperBlockEntity::getAttachedFurnace(HopperBlockEntity *this, BlockSource *a2)
{
  HopperBlockEntity *v2; // r6@1
  const BlockPos *v3; // r5@1
  BlockSource *v4; // r4@1
  Hopper *v5; // r6@1
  BlockEntity *v6; // r0@1
  BlockEntity *v7; // r7@1
  BlockEntity *result; // r0@3
  HopperBlock *v9; // r0@4
  int v10; // r1@4
  int v11; // r7@4
  BlockEntity *v12; // r0@4
  BlockEntity *v13; // r4@4
  int v14; // [sp+5Ch] [bp-Ch]@4
  int v15; // [sp+68h] [bp+0h]@1

  v2 = this;
  v3 = (HopperBlockEntity *)((char *)this + 32);
  v4 = a2;
  Vec3::Vec3((int)&v15, (int)this + 32);
  v5 = (HopperBlockEntity *)((char *)v2 + 216);
  v6 = Hopper::_getSourceContainer(v5, v4, (const Vec3 *)&v15);
  v7 = v6;
  if ( v6 && (unsigned __int8)Container::getContainerType(v6) == 2 )
  {
    result = (BlockEntity *)((char *)v7 - 104);
  }
  else
    v9 = (HopperBlock *)BlockSource::getData(v4, v3);
    v11 = HopperBlock::getAttachedFace(v9, v10);
    Vec3::Vec3((int)&v14, (int)v3);
    v12 = Hopper::_getAttachedContainer(v5, v4, (const Vec3 *)&v14, v11);
    v13 = v12;
    if ( v12 && (unsigned __int8)Container::getContainerType(v12) == 2 )
      result = (BlockEntity *)((char *)v13 - 104);
    else
      result = 0;
  return result;
}


void __fastcall HopperBlockEntity::~HopperBlockEntity(HopperBlockEntity *this)
{
  HopperBlockEntity::~HopperBlockEntity(this);
}


int __fastcall HopperBlockEntity::updateCooldownAfterMove(HopperBlockEntity *a1, __int64 *a2, int a3)
{
  int v3; // r4@1
  __int64 *v4; // r6@1
  HopperBlockEntity *v5; // r5@1
  int result; // r0@1
  __int64 v7; // r2@2
  signed int v8; // r6@2
  bool v9; // cf@2
  bool v10; // zf@2
  __int64 v11; // r0@2

  v3 = a3;
  v4 = a2;
  v5 = a1;
  result = HopperBlockEntity::_countItems(a1);
  if ( result == 1 )
  {
    v7 = *v4;
    v8 = 0;
    v11 = *((_QWORD *)v5 + 74);
    v9 = (unsigned int)v7 >= (unsigned int)v11;
    v10 = (_DWORD)v7 == (_DWORD)v11;
    LODWORD(v11) = 0;
    if ( !v10 && v9 )
      LODWORD(v11) = 1;
    if ( HIDWORD(v7) > HIDWORD(v11) )
      v8 = 1;
    if ( HIDWORD(v7) == HIDWORD(v11) )
      v8 = v11;
    if ( v8 )
      ++v3;
    result = j_j_j__ZN6Hopper11setCooldownEi((HopperBlockEntity *)((char *)v5 + 216), v3);
  }
  return result;
}


int __fastcall HopperBlockEntity::_ensureTickingOrder(int result, BlockSource *a2, int a3)
{
  int v3; // r5@1
  BlockSource *v4; // r4@1
  int v5; // r6@1
  char *v6; // r0@2
  __int64 v7; // r1@2
  int v8; // r0@2
  int v9; // r0@2
  HopperBlockEntity *v10; // r7@2
  char *v11; // r7@5
  int v12; // r0@5
  int v13; // r1@5
  int v14; // r2@5
  int v15; // r0@5
  int v16; // r0@5
  HopperBlockEntity *v17; // r6@5
  int v18; // r0@11
  ChestBlockEntity *v19; // r7@11
  char *v20; // r0@14
  __int64 v21; // r1@14
  int v22; // r0@14
  int v23; // r0@14
  HopperBlockEntity *v24; // r7@14
  Level *v25; // r0@17
  char *v26; // r7@17
  unsigned int v27; // r0@19
  HopperBlockEntity *v28; // r1@20
  int v29; // r5@21
  unsigned __int64 v30; // [sp+4h] [bp-5Ch]@14
  int v31; // [sp+Ch] [bp-54h]@14
  int v32; // [sp+10h] [bp-50h]@5
  int v33; // [sp+14h] [bp-4Ch]@5
  int v34; // [sp+18h] [bp-48h]@5
  int v35; // [sp+1Ch] [bp-44h]@5
  int v36; // [sp+20h] [bp-40h]@5
  int v37; // [sp+24h] [bp-3Ch]@5
  int v38; // [sp+28h] [bp-38h]@5
  int v39; // [sp+2Ch] [bp-34h]@5
  int v40; // [sp+30h] [bp-30h]@5
  unsigned __int64 v41; // [sp+34h] [bp-2Ch]@2
  int v42; // [sp+3Ch] [bp-24h]@2
  HopperBlockEntity *v43; // [sp+40h] [bp-20h]@2
  HopperBlockEntity *v44; // [sp+44h] [bp-1Ch]@2
  HopperBlockEntity *v45; // [sp+48h] [bp-18h]@2

  v3 = a3;
  v4 = a2;
  v5 = result;
  if ( a3 >= 1 )
  {
    v45 = 0;
    v43 = 0;
    v44 = 0;
    v6 = BlockEntity::getPosition((BlockEntity *)result);
    v7 = *(_QWORD *)v6;
    v8 = *((_DWORD *)v6 + 2);
    v41 = __PAIR__(HIDWORD(v7), (unsigned int)v7) - 0x100000000LL;
    v42 = v8;
    v9 = BlockSource::getBlockEntity(v4, (const BlockPos *)&v41);
    v10 = (HopperBlockEntity *)v9;
    if ( v9 && BlockEntity::isType(v9, 15) == 1 )
      v43 = v10;
    v11 = BlockEntity::getPosition((BlockEntity *)v5);
    v12 = BlockSource::getData(v4, (const BlockPos *)(v5 + 32));
    HopperBlock::getAttachedOffset((HopperBlock *)&v35, v12);
    v13 = *((_DWORD *)v11 + 1);
    v14 = *((_DWORD *)v11 + 2);
    v15 = *(_DWORD *)v11 + v35;
    v38 = v15;
    v39 = v13 + v36;
    v32 = v15;
    v40 = v14 + v37;
    v33 = v13 + v36 - 1;
    v34 = v14 + v37;
    v16 = BlockSource::getBlockEntity(v4, (const BlockPos *)&v32);
    v17 = (HopperBlockEntity *)v16;
    if ( v16 )
    {
      if ( BlockEntity::isType(v16, 15) == 1 )
        v44 = v17;
      else
        v17 = 0;
    }
    else
      v17 = 0;
    v18 = BlockSource::getBlockEntity(v4, (const BlockPos *)&v38);
    v19 = (ChestBlockEntity *)v18;
    if ( v18 )
      if ( BlockEntity::isType(v18, 2) == 1 && ChestBlockEntity::isLargeChest(v19) == 1 )
      {
        v20 = ChestBlockEntity::getPairedChestPosition(v19);
        v21 = *(_QWORD *)v20;
        v22 = *((_DWORD *)v20 + 2);
        v30 = __PAIR__(HIDWORD(v21), (unsigned int)v21) - 0x100000000LL;
        v31 = v22;
        v23 = BlockSource::getBlockEntity(v4, (const BlockPos *)&v30);
        v24 = (HopperBlockEntity *)v23;
        if ( v23 )
        {
          if ( BlockEntity::isType(v23, 15) == 1 )
            v45 = v24;
        }
      }
    v25 = (Level *)BlockSource::getLevel(v4);
    v26 = Level::getRandom(v25);
    if ( !(Random::_genRandInt32((Random *)v26) & 1) )
      v44 = v43;
      v43 = v17;
    v27 = Random::_genRandInt32((Random *)v26) % 3;
    if ( v27 != 2 )
      v28 = v45;
      v45 = *(&v43 + v27);
      *(&v43 + v27) = v28;
    v29 = v3 - 1;
    if ( v43 )
      HopperBlockEntity::_tick(v43, v4, v29);
    if ( v44 )
      HopperBlockEntity::_tick(v44, v4, v29);
    result = (int)v45;
    if ( v45 )
      result = HopperBlockEntity::_tick(v45, v4, v29);
  }
  return result;
}


void __fastcall HopperBlockEntity::onNeighborChanged(HopperBlockEntity *this, BlockSource *a2, const BlockPos *a3)
{
  HopperBlockEntity::onNeighborChanged(this, a2, a3);
}


int __fastcall HopperBlockEntity::HopperBlockEntity(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  double v4; // r0@1
  int v5; // r6@3
  unsigned int *v7; // r2@6
  int v8; // [sp+4h] [bp-24h]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v8, "Hopper");
  BlockEntity::BlockEntity(v3, 15, v2);
  HIDWORD(v4) = v8;
  LODWORD(v4) = v8 - 12;
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        HIDWORD(v4) = __ldrex(v7);
      while ( __strex(HIDWORD(v4) - 1, v7) );
    }
    else
      HIDWORD(v4) = (*v7)--;
    if ( SHIDWORD(v4) <= 0 )
      j_j_j_j__ZdlPv_9((void *)LODWORD(v4));
  }
  LODWORD(v4) = v3 + 104;
  Container::Container(v4);
  Hopper::Hopper(v3 + 216, 4, 0);
  *(_DWORD *)v3 = &off_2709D50;
  *(_DWORD *)(v3 + 104) = &off_2709DE4;
  ItemInstance::ItemInstance(v3 + 232);
  ItemInstance::ItemInstance(v3 + 304);
  ItemInstance::ItemInstance(v3 + 376);
  ItemInstance::ItemInstance(v3 + 448);
  ItemInstance::ItemInstance(v3 + 520);
  *(_DWORD *)(v3 + 592) = 0;
  *(_DWORD *)(v3 + 596) = 0;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 124))(v3) >= 1 )
    v5 = 0;
    do
      (*(void (__fastcall **)(int, int, void *))(*(_DWORD *)v3 + 120))(v3, v5++, &ItemInstance::EMPTY_ITEM);
    while ( v5 < (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 124))(v3) );
  return v3;
}


int __fastcall HopperBlockEntity::tick(HopperBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r4@1
  HopperBlockEntity *v3; // r5@1
  Level *v4; // r0@1
  int result; // r0@1
  Dimension *v6; // r0@2

  v2 = a2;
  v3 = this;
  BlockEntity::tick(this, a2);
  v4 = (Level *)BlockSource::getLevel(v2);
  result = Level::isClientSide(v4);
  if ( !result )
  {
    v6 = (Dimension *)BlockSource::getDimension(v2);
    result = Dimension::isRedstoneTick(v6);
    if ( result == 1 )
      result = j_j_j__ZN17HopperBlockEntity5_tickER11BlockSourcei(v3, v2, 50);
  }
  return result;
}


int __fastcall HopperBlockEntity::setItem(int result, int a2, const ItemInstance *a3)
{
  int v3; // r4@1
  const ItemInstance *v4; // r8@1
  int v5; // r5@1

  v3 = a2;
  v4 = a3;
  v5 = result;
  if ( (unsigned int)a2 <= 4 )
  {
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)(result + 104) + 112))(result + 104);
    ItemInstance::operator=(v5 + 72 * v3 + 232, (int)v4);
    BlockEntity::setChanged((BlockEntity *)v5);
    result = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)(v5 + 104) + 84))(v5 + 104, v3);
  }
  return result;
}


int __fastcall HopperBlockEntity::_initItems(HopperBlockEntity *this)
{
  HopperBlockEntity *v1; // r4@1
  int result; // r0@1
  int v3; // r5@2

  v1 = this;
  result = (*(int (**)(void))(*(_DWORD *)this + 124))();
  if ( result >= 1 )
  {
    v3 = 0;
    do
    {
      (*(void (__fastcall **)(HopperBlockEntity *, int, void *))(*(_DWORD *)v1 + 120))(
        v1,
        v3,
        &ItemInstance::EMPTY_ITEM);
      result = (*(int (__fastcall **)(HopperBlockEntity *))(*(_DWORD *)v1 + 124))(v1);
      ++v3;
    }
    while ( v3 < result );
  }
  return result;
}


void __fastcall HopperBlockEntity::checkForSmeltEverythingAchievement(HopperBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r4@1
  HopperBlockEntity *v3; // r5@1
  BlockEntity *v4; // r0@2

  v2 = a2;
  v3 = this;
  if ( HopperBlockEntity::isAttachedToChestAndFurnace(this, a2) == 1 )
  {
    v4 = HopperBlockEntity::getAttachedFurnace(v3, v2);
    if ( v4 )
      j_j_j__ZN18FurnaceBlockEntity34checkForSmeltEverythingAchievementER11BlockSource(v4, v2);
  }
}
