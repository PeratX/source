

signed int __fastcall ItemEntity::isPushable(ItemEntity *this)
{
  return 1;
}


int __fastcall ItemEntity::isInvulnerableTo(ItemEntity *this, const EntityDamageSource *a2)
{
  EntityDamageSource *v2; // r4@1
  ItemEntity *v3; // r5@1
  int v4; // r0@3
  bool v5; // zf@3
  int result; // r0@6

  v2 = a2;
  v3 = this;
  if ( EntityDamageSource::getCause(a2) != 10 && EntityDamageSource::getCause(v2) != 11 )
    goto LABEL_10;
  v4 = *((_DWORD *)v3 + 854);
  v5 = v4 == 0;
  if ( v4 )
    v5 = *(_BYTE *)(v4 + 40) == 0;
  if ( v5 )
    result = 1;
  else
LABEL_10:
    result = Entity::isInvulnerableTo(v3, v2);
  return result;
}


int __fastcall ItemEntity::ItemEntity(int a1, BlockSource *a2)
{
  BlockSource *v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@1
  Random *v5; // r0@2
  unsigned int *v13; // r2@3
  signed int v14; // r1@5
  int v15; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v15, "itementity");
  Entity::Entity(v3, v2, (int **)&v15);
  v4 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v15 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  *(_DWORD *)v3 = &off_26F2EBC;
  ItemInstance::ItemInstance(v3 + 3416);
  *(_DWORD *)(v3 + 3488) = 0;
  *(_DWORD *)(v3 + 3492) = 0;
  *(_DWORD *)(v3 + 3496) = 0;
  v5 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  _R0 = Random::_genRandInt32(v5);
  __asm
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
  _R0 = &mce::Math::PI;
    VMUL.F64        D0, D0, D1
    VLDR            S2, [R0]
    VCVT.F32.F64    S0, D0
    VADD.F32        S2, S2, S2
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R1]
  *(_DWORD *)(v3 + 3504) = 5;
  *(_DWORD *)(v3 + 3508) = 6000;
  *(_BYTE *)(v3 + 3512) = 0;
  *(_DWORD *)(v3 + 248) = 4;
  *(_DWORD *)(v3 + 172) |= 0x40400u;
  return v3;
}


int __fastcall ItemEntity::ItemEntity(int a1, BlockSource *a2, int a3, int a4, int a5, int a6, char a7)
{
  BlockSource *v7; // r7@1
  int v8; // r6@1
  int v9; // r5@1
  int v10; // r4@1
  void *v11; // r0@1
  Random *v12; // r0@2
  unsigned int *v20; // r2@3
  signed int v21; // r1@5
  int v22; // [sp+8h] [bp-20h]@1

  v7 = a2;
  v8 = a4;
  v9 = a3;
  v10 = a1;
  sub_21E94B4((void **)&v22, "itementity");
  Entity::Entity(v10, v7, (int **)&v22);
  v11 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v20 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  }
  *(_DWORD *)v10 = &off_26F2EBC;
  ItemInstance::ItemInstance((ItemInstance *)(v10 + 3416), v8);
  *(_DWORD *)(v10 + 3488) = 0;
  *(_DWORD *)(v10 + 3492) = 0;
  *(_DWORD *)(v10 + 3496) = a5;
  v12 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  _R0 = Random::_genRandInt32(v12);
  __asm
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
  _R0 = &mce::Math::PI;
    VMUL.F64        D0, D0, D1
    VLDR            S2, [R0]
    VCVT.F32.F64    S0, D0
    VADD.F32        S2, S2, S2
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R2]
  *(_DWORD *)(v10 + 3504) = 5;
  *(_DWORD *)(v10 + 3508) = 6000;
  *(_BYTE *)(v10 + 3512) = a7;
  *(_DWORD *)(v10 + 248) = 4;
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v10 + 48))(v10, v9);
  *(_DWORD *)(v10 + 172) |= 0x40400u;
  return v10;
}


int *__fastcall ItemEntity::handleEntityEvent(int a1, signed int a2, unsigned __int8 a3)
{
  int *result; // r0@2

  if ( a2 == 69 )
    result = j_j_j__ZN12ItemInstance3setEi_1((ItemInstance *)(a1 + 3416), a3);
  else
    result = (int *)j_j_j__ZN6Entity17handleEntityEventE11EntityEventi((Entity *)a1, a2, a3);
  return result;
}


int __fastcall ItemEntity::ItemEntity(int a1, int a2, int *a3)
{
  Random *v4; // r0@1
  Random *v5; // r5@1
  int v16; // [sp+0h] [bp-70h]@1
  int v17; // [sp+8h] [bp-68h]@5
  void *v18; // [sp+24h] [bp-4Ch]@3
  void *ptr; // [sp+34h] [bp-3Ch]@1

  _R4 = a1;
  Entity::Entity(a1, a2, a3);
  *(_DWORD *)_R4 = &off_26F2EBC;
  ItemInstance::ItemInstance(_R4 + 3416);
  *(_DWORD *)(_R4 + 248) = 4;
  Entity::enableAutoSendPosRot((Entity *)_R4, 1);
  v4 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  v5 = v4;
  *(_DWORD *)(_R4 + 172) |= 0x40400u;
  *(_DWORD *)(_R4 + 3504) = 5;
  _R0 = Random::_genRandInt32(v4);
  __asm
  {
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VCVT.F64.U32    D0, S0
  }
  _R0 = &mce::Math::PI;
    VMUL.F64        D0, D0, D8
    VLDR            S2, [R0]
    VCVT.F32.F64    S0, D0
    VADD.F32        S2, S2, S2
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R0]
  ItemInstance::ItemInstance((int)&v16);
  ItemInstance::operator=(_R4 + 3416, (int)&v16);
  if ( ptr )
    operator delete(ptr);
  if ( v18 )
    operator delete(v18);
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  v17 = 0;
  *(_DWORD *)(_R4 + 3508) = 6000;
  *(_DWORD *)(_R4 + 3488) = 0;
  *(_DWORD *)(_R4 + 3492) = 0;
  *(_DWORD *)(_R4 + 3496) = 0;
  (*(void (__fastcall **)(int, signed int, signed int))(*(_DWORD *)_R4 + 680))(_R4, 1048576000, 1048576000);
    VMOV.F32        S0, #0.5
    VLDR            S2, [R4,#0x134]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R4,#0x13C]
  _R0 = Random::_genRandInt32(v5);
    VLDR            S2, =360.0
    VSTR            S0, [R4,#0x7C]
    VLDR            S18, =0.2
    VLDR            S20, =-0.1
    VMUL.F32        S0, S0, S18
    VADD.F32        S0, S0, S20
    VSTR            S0, [R4,#0x6C]
    VSTR            S0, [R4,#0x74]
  *(_DWORD *)(_R4 + 112) = 1045220557;
  *(_BYTE *)(_R4 + 3512) = 0;
  return _R4;
}


int __fastcall ItemEntity::getAddPacket(ItemEntity *this, Entity *a2)
{
  ItemEntity *v2; // r4@1
  Entity *v3; // r6@1
  void *v4; // r5@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x90u);
  result = AddItemEntityPacket::AddItemEntityPacket((int)v4, v3);
  *(_DWORD *)v2 = v4;
  return result;
}


Entity *__fastcall ItemEntity::~ItemEntity(ItemEntity *this)
{
  ItemEntity *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5

  v1 = this;
  *(_DWORD *)this = &off_26F2EBC;
  v2 = (void *)*((_DWORD *)this + 867);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 863);
  if ( v3 )
    operator delete(v3);
  v4 = *((_DWORD *)v1 + 856);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 856) = 0;
  return j_j_j__ZN6EntityD2Ev_0(v1);
}


int __fastcall ItemEntity::_hurt(ItemEntity *this, const EntityDamageSource *a2, int a3, bool a4, bool a5)
{
  ItemEntity *v5; // r4@1
  int v6; // r5@1
  int v7; // r0@1

  v5 = this;
  v6 = a3;
  (*(void (**)(void))(*(_DWORD *)this + 700))();
  v7 = *((_DWORD *)v5 + 876) - v6;
  *((_DWORD *)v5 + 876) = v7;
  if ( v7 <= 0 )
    (*(void (__fastcall **)(ItemEntity *))(*(_DWORD *)v5 + 44))(v5);
  return 0;
}


signed int __fastcall ItemEntity::_merge(ItemEntity *this, ItemEntity *a2)
{
  Entity *v2; // r5@1
  int v3; // r4@2
  int v4; // r0@5
  bool v5; // zf@5
  int v6; // r8@10
  unsigned int v7; // r1@11
  unsigned int v8; // r2@11
  int v10; // r0@14
  int v11; // r0@16
  int v12; // r0@18

  v2 = a2;
  do
  {
    v3 = (int)v2;
    v2 = this;
    if ( (ItemEntity *)v3 == this
      || (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 316))(v3) != 1
      || (*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 316))(v2) != 1 )
    {
      return 0;
    }
    v4 = *((_DWORD *)v2 + 873);
    v5 = v4 == 0xFFFF;
    if ( v4 != 0xFFFF )
      v5 = *(_DWORD *)(v3 + 3492) == 0xFFFF;
    if ( v5 )
    if ( ItemInstance::matchesItem((ItemInstance *)(v3 + 3416), (Entity *)((char *)v2 + 3416)) != 1 )
    if ( ItemInstance::isStackedByData((ItemInstance *)(v3 + 3416)) == 1 )
      v6 = ItemInstance::getAuxValue((ItemInstance *)(v3 + 3416));
      if ( v6 != ItemInstance::getAuxValue((Entity *)((char *)v2 + 3416)) )
        return 0;
    v7 = *((_BYTE *)v2 + 3430);
    this = (ItemEntity *)v3;
    v8 = *(_BYTE *)(v3 + 3430);
  }
  while ( v8 < v7 );
  if ( v7 + v8 > ItemInstance::getMaxStackSize((ItemInstance *)(v3 + 3416)) )
    return 0;
  ItemInstance::add((ItemInstance *)(v3 + 3416), *((_BYTE *)v2 + 3430));
  v10 = *((_DWORD *)v2 + 873);
  if ( *(_DWORD *)(v3 + 3492) > v10 )
    v10 = *(_DWORD *)(v3 + 3492);
  *(_DWORD *)(v3 + 3492) = v10;
  v11 = *((_DWORD *)v2 + 872);
  if ( *(_DWORD *)(v3 + 3488) < v11 )
    v11 = *(_DWORD *)(v3 + 3488);
  *(_DWORD *)(v3 + 3488) = v11;
  (*(void (__fastcall **)(Entity *))(*(_DWORD *)v2 + 44))(v2);
  v12 = Entity::getLevel(v2);
  Level::broadcastEntityEvent(v12, v3, 69, *(_BYTE *)(v3 + 3430));
  return 1;
}


unsigned int __fastcall ItemEntity::setSourceEntity(ItemEntity *this, const Entity *a2)
{
  ItemEntity *v2; // r4@1
  __int64 v3; // kr00_8@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  v3 = *(_QWORD *)Entity::getUniqueID(a2);
  result = SynchedEntityData::_get((ItemEntity *)((char *)v2 + 176), 5);
  v5 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v5 == 7 && *(_QWORD *)(result + 16) != v3 )
  {
    *(_QWORD *)(result + 16) = v3;
    *(_BYTE *)(result + 8) = 1;
    v6 = v5 >> 16;
    v7 = *((_WORD *)v2 + 94);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *((_WORD *)v2 + 94) = v7;
    result = *((_WORD *)v2 + 95);
    if ( result > v6 )
      LOWORD(v6) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v6;
  }
  return result;
}


signed int __fastcall ItemEntity::canSynchronizeNewEntity(ItemEntity *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 3097);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


int __fastcall ItemEntity::_validateItem(ItemEntity *this)
{
  ItemEntity *v1; // r4@1
  int v2; // r5@4
  int v3; // r6@4
  unsigned int v4; // r0@5
  int result; // r0@12

  v1 = this;
  if ( ItemInstance::isNull((ItemEntity *)((char *)this + 3416)) || !*((_BYTE *)v1 + 3431) )
    (*(void (__fastcall **)(ItemEntity *))(*(_DWORD *)v1 + 44))(v1);
  v2 = *((_DWORD *)v1 + 854);
  v3 = *((_DWORD *)v1 + 855);
  if ( v2 )
  {
    v4 = *(_WORD *)(v2 + 18);
    if ( v4 >> 9 || !Item::mItems[(signed __int16)v4] )
      (*(void (__fastcall **)(ItemEntity *))(*(_DWORD *)v1 + 44))(v1);
  }
  if ( v3 )
    if ( !Block::mBlocks[*(_BYTE *)(v3 + 4)] )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v1 + 44))(v1);
LABEL_12:
    result = *((_BYTE *)v1 + 3430);
    if ( *((_BYTE *)v1 + 3430) )
      return result;
    return (*(int (__fastcall **)(ItemEntity *))(*(_DWORD *)v1 + 44))(v1);
    goto LABEL_12;
  return (*(int (__fastcall **)(ItemEntity *))(*(_DWORD *)v1 + 44))(v1);
}


void __fastcall ItemEntity::addAdditionalSaveData(ItemEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r6@1
  ItemEntity *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@5
  __int64 v7; // r0@6
  void *v8; // r0@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  unsigned int *v13; // r2@16
  signed int v14; // r1@18
  unsigned int *v15; // r2@20
  signed int v16; // r1@22
  int v17; // [sp+4h] [bp-34h]@6
  int v18; // [sp+8h] [bp-30h]@3
  int v19; // [sp+10h] [bp-28h]@3
  int v20; // [sp+18h] [bp-20h]@2
  int v21; // [sp+20h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v21, "Health");
  CompoundTag::putShort((int)v2, (const void **)&v21, *((_BYTE *)v3 + 3504));
  v4 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v21 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v20, "Age");
  CompoundTag::putShort((int)v2, (const void **)&v20, *((_WORD *)v3 + 1744));
  v5 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v20 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v19, "Item");
  ItemInstance::save((ItemInstance *)&v18, (ItemEntity *)((char *)v3 + 3416));
  CompoundTag::putCompound((int)v2, (const void **)&v19, &v18);
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  v18 = 0;
  v6 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v19 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v17, "OwnerID");
  v7 = SynchedEntityData::getInt64((ItemEntity *)((char *)v3 + 176), 5);
  CompoundTag::putInt64((int)v2, (const void **)&v17, v7, SHIDWORD(v7));
  v8 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


void __fastcall ItemEntity::addAdditionalSaveData(ItemEntity *this, CompoundTag *a2)
{
  ItemEntity::addAdditionalSaveData(this, a2);
}


void __fastcall ItemEntity::~ItemEntity(ItemEntity *this)
{
  ItemEntity::~ItemEntity(this);
}


_QWORD *__fastcall ItemEntity::_mergeWithNeighbours(ItemEntity *this)
{
  ItemEntity *v1; // r4@1
  int v2; // r5@1
  _QWORD *result; // r0@1
  ItemEntity **v4; // r5@1 OVERLAPPED
  ItemEntity **v5; // r6@1 OVERLAPPED
  ItemEntity *v6; // t1@2
  signed int v7; // [sp+0h] [bp-38h]@1
  signed int v8; // [sp+4h] [bp-34h]@1
  int v9; // [sp+8h] [bp-30h]@1
  char v10; // [sp+Ch] [bp-2Ch]@1

  v1 = this;
  v2 = Entity::getRegion(this);
  v7 = 1056964608;
  v8 = 1056964608;
  v9 = 1056964608;
  AABB::grow((AABB *)&v10, (ItemEntity *)((char *)v1 + 264), (int)&v7);
  result = (_QWORD *)BlockSource::fetchEntities(v2, 64, (int)&v10, 0);
  for ( *(_QWORD *)&v4 = *result; v5 != v4; result = (_QWORD *)ItemEntity::_merge(v1, v6) )
  {
    v6 = *v4;
    ++v4;
  }
  return result;
}


void __fastcall ItemEntity::~ItemEntity(ItemEntity *this)
{
  ItemEntity *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5

  v1 = this;
  *(_DWORD *)this = &off_26F2EBC;
  v2 = (void *)*((_DWORD *)this + 867);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 863);
  if ( v3 )
    operator delete(v3);
  v4 = *((_DWORD *)v1 + 856);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 856) = 0;
  Entity::~Entity(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


__int64 __fastcall ItemEntity::getSourceUniqueID(ItemEntity *this, int a2)
{
  ItemEntity *v2; // r4@1
  __int64 result; // r0@1

  v2 = this;
  result = SynchedEntityData::getInt64((SynchedEntityData *)(a2 + 176), 5);
  *(_QWORD *)v2 = result;
  return result;
}


signed int __fastcall ItemEntity::getEntityTypeId(ItemEntity *this)
{
  return 64;
}


unsigned int __fastcall ItemEntity::reloadHardcoded(int a1)
{
  int v1; // r4@1
  unsigned int result; // r0@1
  int v3; // r5@5
  int v4; // r6@5
  unsigned int v5; // r0@6

  v1 = a1;
  result = *(_BYTE *)(a1 + 3081);
  if ( !result )
  {
    if ( ItemInstance::isNull((ItemInstance *)(v1 + 3416)) || !*(_BYTE *)(v1 + 3431) )
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 44))(v1);
    v3 = *(_DWORD *)(v1 + 3416);
    v4 = *(_DWORD *)(v1 + 3420);
    if ( v3 )
    {
      v5 = *(_WORD *)(v3 + 18);
      if ( v5 >> 9 || !Item::mItems[(signed __int16)v5] )
        (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 44))(v1);
    }
    if ( v4 )
      if ( !Block::mBlocks[*(_BYTE *)(v4 + 4)] )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v1 + 44))(v1);
    else if ( !v3 )
      goto LABEL_14;
    if ( *(_BYTE *)(v1 + 3430) )
LABEL_15:
      (*(void (__fastcall **)(int, signed int, signed int))(*(_DWORD *)v1 + 680))(v1, 1048576000, 1048576000);
      return j_j_j__ZN6Entity13setStatusFlagE11EntityFlagsb_0(v1, 45, 1);
LABEL_14:
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v1 + 44))(v1);
    goto LABEL_15;
  }
  return result;
}


char *__fastcall ItemEntity::getHandleWaterAABB(ItemEntity *this, int a2)
{
  int v2; // r1@1
  int v3; // r2@1
  int v4; // r3@1
  int v5; // r12@1
  char *result; // r0@1
  int v7; // r3@1
  int v8; // r12@1
  int v9; // lr@1

  v2 = a2 + 264;
  v3 = *(_DWORD *)v2;
  v4 = *(_DWORD *)(v2 + 4);
  v5 = *(_DWORD *)(v2 + 8);
  v2 += 12;
  *(_DWORD *)this = v3;
  *((_DWORD *)this + 1) = v4;
  *((_DWORD *)this + 2) = v5;
  result = (char *)this + 12;
  v7 = *(_DWORD *)(v2 + 4);
  v8 = *(_DWORD *)(v2 + 8);
  v9 = *(_DWORD *)(v2 + 12);
  *(_DWORD *)result = *(_DWORD *)v2;
  *((_DWORD *)result + 1) = v7;
  *((_DWORD *)result + 2) = v8;
  *((_DWORD *)result + 3) = v9;
  return result;
}


ItemEntity *__fastcall ItemEntity::normalTick(ItemEntity *this)
{
  signed int v2; // r0@1
  signed int v3; // r0@4
  BlockSource *v4; // r9@6
  int *v5; // r0@6
  Level *v6; // r0@7
  char *v7; // r0@7
  Random *v8; // r7@7
  Level *v15; // r0@7
  char *v16; // r0@7
  Random *v17; // r7@7
  int v20; // r0@7
  Level *v21; // r0@8
  int v25; // r7@10
  ItemEntity **v26; // r5@10
  __int64 v27; // kr00_8@10
  ItemEntity *v28; // t1@11
  float v29; // r1@12
  int v30; // r2@12
  int v32; // r1@15
  float v33; // r1@18
  int v34; // r6@21
  float v35; // r1@21
  int v36; // r7@21
  float v37; // r1@21
  int v38; // r0@21
  int v40; // r1@26
  ItemEntity *result; // r0@26
  int v42; // r1@27
  char v43; // [sp+8h] [bp-70h]@6
  int v44; // [sp+14h] [bp-64h]@10
  signed int v45; // [sp+18h] [bp-60h]@10
  int v46; // [sp+1Ch] [bp-5Ch]@10
  char v47; // [sp+20h] [bp-58h]@10
  float v48; // [sp+24h] [bp-54h]@12
  int v49; // [sp+28h] [bp-50h]@12

  _R4 = this;
  Entity::normalTick(this);
  v2 = *((_DWORD *)_R4 + 873);
  if ( v2 >= 1 && v2 != 0xFFFF )
    *((_DWORD *)_R4 + 873) = v2 - 1;
  v3 = *((_DWORD *)_R4 + 874);
  if ( v3 >= 1 )
    *((_DWORD *)_R4 + 874) = v3 - 1;
  v4 = (BlockSource *)Entity::getRegion(_R4);
  BlockPos::BlockPos((int)&v43, (int)_R4 + 72);
  v5 = (int *)BlockSource::getMaterial(v4, (const BlockPos *)&v43);
  if ( Material::isType(v5, 6) == 1 )
  {
    *((_DWORD *)_R4 + 28) = 1045220557;
    v6 = (Level *)Entity::getLevel(_R4);
    v7 = Level::getRandom(v6);
    v8 = (Random *)v7;
    _R0 = Random::_genRandInt32((Random *)v7);
    __asm
    {
      VMOV            S0, R0
      VCVT.F64.U32    D8, S0
    }
    _R0 = Random::_genRandInt32(v8);
      VLDR            D9, =2.32830644e-10
      VCVT.F64.U32    D0, S0
      VMUL.F64        D1, D8, D9
      VMUL.F64        D0, D0, D9
      VCVT.F32.F64    S2, D1
      VCVT.F32.F64    S0, D0
      VSUB.F32        S0, S2, S0
      VLDR            S16, =0.2
      VMUL.F32        S0, S0, S16
      VSTR            S0, [R4,#0x6C]
    v15 = (Level *)Entity::getLevel(_R4);
    v16 = Level::getRandom(v15);
    v17 = (Random *)v16;
    _R0 = Random::_genRandInt32((Random *)v16);
      VCVT.F64.U32    D10, S0
    _R0 = Random::_genRandInt32(v17);
      VMUL.F64        D1, D10, D9
      VSTR            S0, [R4,#0x74]
    v20 = (*(int (__fastcall **)(ItemEntity *))(*(_DWORD *)_R4 + 52))(_R4);
    Entity::playSound((int)_R4, 27, v20);
  }
  v21 = (Level *)Entity::getLevel(_R4);
  if ( !Level::isClientSide(v21) )
    _R0 = *((_DWORD *)_R4 + 872);
    _R1 = 1374389535;
    __asm { SMMUL.W         R1, R0, R1 }
    if ( _R0 == 25 * (((signed int)_R1 >> 3) + (_R1 >> 31)) )
      v25 = Entity::getRegion(_R4);
      v44 = 1056964608;
      v45 = 1056964608;
      v46 = 1056964608;
      AABB::grow((AABB *)&v47, (ItemEntity *)((char *)_R4 + 264), (int)&v44);
      v27 = *(_QWORD *)BlockSource::fetchEntities(v25, 64, (int)&v47, 0);
      v26 = (ItemEntity **)v27;
      if ( (_DWORD)v27 != HIDWORD(v27) )
      {
        do
        {
          v28 = *v26;
          ++v26;
          ItemEntity::_merge(_R4, v28);
        }
        while ( (ItemEntity **)HIDWORD(v27) != v26 );
      }
  v29 = *((float *)_R4 + 19);
  v30 = *((_DWORD *)_R4 + 20);
  *(_DWORD *)&v47 = *((_DWORD *)_R4 + 18);
  v48 = v29;
  v49 = v30;
  __asm
    VLDR            S0, [R4,#0x13C]
    VLDR            S2, [SP,#0x78+var_54]
    VSUB.F32        S0, S2, S0
    VSTR            S0, [SP,#0x78+var_54]
  (*(void (__fastcall **)(ItemEntity *, char *))(*(_DWORD *)_R4 + 732))(_R4, &v47);
  if ( *((_BYTE *)_R4 + 216) )
    __asm { VLDR            S2, [R4,#0x6C] }
    _R5 = (int)_R4 + 112;
      VLDR            S0, [R4,#0x70]
      VMUL.F32        S2, S2, S2
      VLDR            S4, [R4,#0x74]
      VMUL.F32        S6, S0, S0
      VMUL.F32        S4, S4, S4
      VADD.F32        S2, S6, S2
      VADD.F32        S2, S2, S4
      VLDR            S4, =0.01
      VCMPE.F32       S2, S4
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      v32 = *((_DWORD *)_R4 + 872);
      if ( v32 & 3 )
        goto LABEL_26;
  else
    __asm { VLDR            S0, [R4,#0x70] }
    VLDR            S2, =-0.04
    VADD.F32        S0, S0, S2
    VSTR            S0, [R5]
  (*(void (__fastcall **)(ItemEntity *, char *))(*(_DWORD *)_R4 + 76))(_R4, (char *)_R4 + 108);
  if ( *((_BYTE *)_R4 + 219) )
      VLDR            S0, [R5]
      VCMPE.F32       S0, #0.0
      goto LABEL_33;
LABEL_33:
    v34 = mce::Math::floor(*((mce::Math **)_R4 + 18), v33);
    v36 = mce::Math::floor(*((mce::Math **)_R4 + 67), v35);
    v38 = mce::Math::floor(*((mce::Math **)_R4 + 20), v37);
    BlockSource::getBlockID((BlockSource *)&v44, (int)v4, v34, v36 - 1, v38);
    if ( (_BYTE)v44 )
      _R0 = Block::getFriction((Block *)Block::mBlocks[(unsigned __int8)v44]);
      __asm
        VLDR            S0, =0.98
        VMOV            S2, R0
        VMUL.F32        S0, S2, S0
    else
      __asm { VLDR            S0, =0.588 }
    __asm { VLDR            S0, =0.98 }
    VLDR            S2, [R4,#0x6C]
    VLDR            S4, =0.98
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R4,#0x6C]
    VLDR            S2, [R5]
    VMUL.F32        S2, S2, S4
    VSTR            S2, [R5]
    VLDR            S2, [R4,#0x74]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R4,#0x74]
  v32 = *((_DWORD *)_R4 + 872);
LABEL_26:
  v40 = v32 + 1;
  *((_DWORD *)_R4 + 872) = v40;
  result = (ItemEntity *)((char *)_R4 + 3488);
  if ( v40 >= *((_DWORD *)_R4 + 877) )
    v42 = *((_DWORD *)_R4 + 854);
    if ( v42 && !*(_BYTE *)(v42 + 41) )
      *(_DWORD *)result = 0;
      result = (ItemEntity *)(*(int (__fastcall **)(ItemEntity *))(*(_DWORD *)_R4 + 44))(_R4);
  return result;
}


int __fastcall ItemEntity::readAdditionalSaveData(ItemEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r7@1
  ItemEntity *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  const CompoundTag *v6; // r6@3
  void *v7; // r0@3
  int v8; // r5@6 OVERLAPPED
  int v9; // r6@6 OVERLAPPED
  __int64 v10; // kr00_8@6
  int v11; // r0@6
  unsigned int v12; // r1@6
  unsigned int v13; // r1@8
  unsigned int v14; // r0@8
  void *v15; // r0@13
  int v16; // r5@17
  int v17; // r6@17
  unsigned int v18; // r0@18
  int result; // r0@25
  unsigned int *v20; // r2@28
  signed int v21; // r1@30
  unsigned int *v22; // r2@32
  signed int v23; // r1@34
  unsigned int *v24; // r2@36
  signed int v25; // r1@38
  unsigned int *v26; // r2@40
  signed int v27; // r1@42
  int v28; // [sp+4h] [bp-34h]@6
  int v29; // [sp+Ch] [bp-2Ch]@3
  int v30; // [sp+14h] [bp-24h]@2
  int v31; // [sp+1Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v31, "Health");
  *((_DWORD *)v3 + 876) = (unsigned __int8)CompoundTag::getShort((int)v2, (const void **)&v31);
  v4 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
  {
    v20 = (unsigned int *)(v31 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v30, "Age");
  *((_DWORD *)v3 + 872) = CompoundTag::getShort((int)v2, (const void **)&v30);
  v5 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v30 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v29, "Item");
  v6 = (const CompoundTag *)CompoundTag::getCompound((int)v2, (const void **)&v29);
  v7 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v29 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  if ( v6 )
    ItemInstance::load((ItemEntity *)((char *)v3 + 3416), v6);
  sub_21E94B4((void **)&v28, "OwnerID");
  v10 = CompoundTag::getInt64((int)v2, (const void **)&v28);
  v9 = HIDWORD(v10);
  v8 = v10;
  v11 = SynchedEntityData::_get((ItemEntity *)((char *)v3 + 176), 5);
  v12 = *(_DWORD *)(v11 + 4);
  if ( (unsigned __int8)v12 == 7 && *(_QWORD *)(v11 + 16) != v10 )
    *(_QWORD *)(v11 + 16) = *(_QWORD *)&v8;
    *(_BYTE *)(v11 + 8) = 1;
    v13 = v12 >> 16;
    v14 = *((_WORD *)v3 + 94);
    if ( v14 >= v13 )
      LOWORD(v14) = v13;
    *((_WORD *)v3 + 94) = v14;
    if ( *((_WORD *)v3 + 95) > v13 )
      LOWORD(v13) = *((_WORD *)v3 + 95);
    *((_WORD *)v3 + 95) = v13;
  v15 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v28 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  if ( ItemInstance::isNull((ItemEntity *)((char *)v3 + 3416)) || !*((_BYTE *)v3 + 3431) )
    (*(void (__fastcall **)(ItemEntity *))(*(_DWORD *)v3 + 44))(v3);
  v16 = *((_DWORD *)v3 + 854);
  v17 = *((_DWORD *)v3 + 855);
  if ( v16 )
    v18 = *(_WORD *)(v16 + 18);
    if ( v18 >> 9 || !Item::mItems[(signed __int16)v18] )
      (*(void (__fastcall **)(ItemEntity *))(*(_DWORD *)v3 + 44))(v3);
  if ( v17 )
    if ( !Block::mBlocks[*(_BYTE *)(v17 + 4)] )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 44))(v3);
LABEL_25:
    result = *((_BYTE *)v3 + 3430);
    if ( *((_BYTE *)v3 + 3430) )
      return result;
    return (*(int (__fastcall **)(ItemEntity *))(*(_DWORD *)v3 + 44))(v3);
    goto LABEL_25;
  return (*(int (__fastcall **)(ItemEntity *))(*(_DWORD *)v3 + 44))(v3);
}


int __fastcall ItemEntity::playerTouch(ItemEntity *this, Player *a2)
{
  Player *v2; // r5@1
  ItemEntity *v3; // r4@1
  Level *v4; // r0@1
  int result; // r0@1
  bool v6; // zf@2
  int v7; // r6@6
  PlayerInventoryProxy *v8; // r0@7

  v2 = a2;
  v3 = this;
  v4 = (Level *)Entity::getLevel(this);
  result = Level::isClientSide(v4);
  if ( !result )
  {
    result = *((_DWORD *)v3 + 873);
    v6 = result == 0;
    if ( !result )
    {
      result = *((_DWORD *)v3 + 874);
      v6 = result == 0;
    }
    if ( v6 )
      v7 = *((_BYTE *)v3 + 3430);
      result = (*(int (__fastcall **)(Player *))(*(_DWORD *)v2 + 316))(v2);
      if ( result == 1 )
      {
        v8 = (PlayerInventoryProxy *)Player::getSupplies(v2);
        result = PlayerInventoryProxy::canAdd(v8, (ItemEntity *)((char *)v3 + 3416));
        if ( result == 1 )
        {
          result = Player::take(v2, v3, v7);
          if ( result == 1 )
            result = (*(int (__fastcall **)(ItemEntity *))(*(_DWORD *)v3 + 44))(v3);
        }
      }
  }
  return result;
}
