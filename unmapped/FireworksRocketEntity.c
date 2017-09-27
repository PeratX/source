

int __fastcall FireworksRocketEntity::getShadowRadius(FireworksRocketEntity *this)
{
  return 0;
}


int __fastcall FireworksRocketEntity::FireworksRocketEntity(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  int v5; // r7@8
  _BYTE *v6; // r0@8
  signed __int16 v7; // r6@8
  int v8; // r1@8
  unsigned int v9; // r0@10
  int v10; // r6@16
  _BYTE *v11; // r0@16
  signed __int16 v12; // r5@16
  int v13; // r1@16
  unsigned int v14; // r0@18
  int v16; // [sp+0h] [bp-60h]@1
  int v17; // [sp+8h] [bp-58h]@5
  void *v18; // [sp+24h] [bp-3Ch]@3
  void *ptr; // [sp+34h] [bp-2Ch]@1

  v3 = a1;
  Entity::Entity(a1, a2, a3);
  *(_DWORD *)v3 = &off_26F2B9C;
  *(_BYTE *)(v3 + 3420) = 0;
  *(_DWORD *)(v3 + 248) = 80;
  ItemInstance::ItemInstance((int)&v16);
  v4 = (int *)(v3 + 176);
  SynchedEntityData::define<ItemInstance>((SynchedEntityData *)(v3 + 176), 16, (int)&v16);
  if ( ptr )
    operator delete(ptr);
  if ( v18 )
    operator delete(v18);
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  v17 = 0;
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 17) )
  {
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 17);
    v5 = *v4;
    v6 = operator new(0x18u);
    v6[4] = 8;
    v7 = 17;
    *((_WORD *)v6 + 3) = 17;
    v6[8] = 1;
    *(_DWORD *)v6 = &off_26F13AC;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 4) = 0;
    *((_DWORD *)v6 + 5) = 0;
    v8 = *(_DWORD *)(v5 + 68);
    *(_DWORD *)(v5 + 68) = v6;
    if ( v8 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
    v9 = *(_WORD *)(v3 + 188);
    if ( v9 >= 0x11 )
      LOWORD(v9) = 17;
    *(_WORD *)(v3 + 188) = v9;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x11 )
      v7 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v7;
  }
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 18) )
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 18);
    v10 = *v4;
    v11 = operator new(0x18u);
    v11[4] = 7;
    v12 = 18;
    *((_WORD *)v11 + 3) = 18;
    v11[8] = 1;
    *(_DWORD *)v11 = &off_26F0DC8;
    *((_DWORD *)v11 + 4) = 0;
    *((_DWORD *)v11 + 5) = 0;
    v13 = *(_DWORD *)(v10 + 72);
    *(_DWORD *)(v10 + 72) = v11;
    if ( v13 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 4))(v13);
    v14 = *(_WORD *)(v3 + 188);
    if ( v14 >= 0x12 )
      LOWORD(v14) = 18;
    *(_WORD *)(v3 + 188) = v14;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x12 )
      v12 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v12;
  Entity::setGlobal((Entity *)v3, 1);
  Entity::enableAutoSendPosRot((Entity *)v3, 1);
  return v3;
}


void __fastcall FireworksRocketEntity::~FireworksRocketEntity(FireworksRocketEntity *this)
{
  Entity *v1; // r0@1

  v1 = Entity::~Entity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall FireworksRocketEntity::lerpMotion(FireworksRocketEntity *this, const Vec3 *a2)
{
  FireworksRocketEntity *v2; // r4@1
  int v4; // r3@1
  int v9; // r5@5
  __int64 v10; // r0@5
  __int64 v11; // r2@5
  int v12; // r0@5
  __int64 v13; // r0@5
  __int64 v14; // r2@5
  int v15; // r0@5

  v2 = this;
  LODWORD(_R0) = *(_DWORD *)a2;
  *(_QWORD *)((char *)v2 + 108) = *(_QWORD *)a2;
  HIDWORD(_R0) = *((_DWORD *)a2 + 2);
  *((_DWORD *)v2 + 29) = HIDWORD(_R0);
  v4 = *((_DWORD *)v2 + 32);
  _ZF = (v4 & 0x7FFFFFFF) == 0;
  if ( !(v4 & 0x7FFFFFFF) )
    _ZF = (*((_DWORD *)v2 + 33) & 0x7FFFFFFF) == 0;
  if ( _ZF )
  {
    __asm
    {
      VMOV            S0, R0
      VMOV            S2, R1
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VADD.F32        S0, S2, S0
      VMOV            R0, S0
    }
    v9 = mce::Math::sqrt((mce::Math *)_R0, *((float *)&_R0 + 1));
    LODWORD(v10) = *((_DWORD *)v2 + 27);
    HIDWORD(v10) = *((_DWORD *)v2 + 29);
    v12 = mce::Math::atan2(v10, v11);
    v13 = __PAIR__(v9, mce::operator*(v12, 1113927392));
    *((_DWORD *)v2 + 31) = v13;
    *((_DWORD *)v2 + 33) = v13;
    LODWORD(v13) = *((_DWORD *)v2 + 28);
    v15 = mce::Math::atan2(v13, v14);
    LODWORD(_R0) = mce::operator*(v15, 1113927392);
    *((_DWORD *)v2 + 30) = _R0;
    HIDWORD(_R0) = *((_DWORD *)v2 + 31);
    *((_QWORD *)v2 + 16) = _R0;
  }
  return _R0;
}


int __fastcall FireworksRocketEntity::handleEntityEvent(Entity *this, signed int a2, int a3)
{
  signed int v3; // r6@1
  int v4; // r9@1
  Entity *v5; // r4@1
  _BOOL4 v6; // r5@2
  int v7; // r8@9
  int *v8; // r0@9
  int v9; // r2@9
  char v11; // [sp+10h] [bp-B0h]@9
  int v12; // [sp+18h] [bp-A8h]@13
  void *v13; // [sp+34h] [bp-8Ch]@11
  void *v14; // [sp+44h] [bp-7Ch]@9
  char v15; // [sp+58h] [bp-68h]@2
  int v16; // [sp+60h] [bp-60h]@6
  void *v17; // [sp+7Ch] [bp-44h]@4
  void *ptr; // [sp+8Ch] [bp-34h]@2

  v3 = a2;
  v4 = a3;
  v5 = this;
  if ( a2 == 25 )
  {
    SynchedEntityData::getItemInstance((SynchedEntityData *)&v15, (int)this + 176, 0x10u);
    v6 = ItemInstance::hasUserData((ItemInstance *)&v15);
    if ( ptr )
      operator delete(ptr);
    if ( v17 )
      operator delete(v17);
    if ( v16 )
      (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    v16 = 0;
    if ( v6 == 1 )
    {
      v7 = Entity::getLevel(v5);
      SynchedEntityData::getItemInstance((SynchedEntityData *)&v11, (int)v5 + 176, 0x10u);
      v8 = (int *)ItemInstance::getUserData((ItemInstance *)&v11);
      CompoundTag::getCompound(*v8, (const void **)&FireworksItem::TAG_FIREWORKS);
      Level::addParticle(v7, 45, (int)v5 + 72);
      if ( v14 )
        operator delete(v14);
      if ( v13 )
        operator delete(v13);
      if ( v12 )
        (*(void (__cdecl **)(int, _DWORD, int))(*(_DWORD *)v12 + 4))(v12, *(_DWORD *)(*(_DWORD *)v12 + 4), v9);
      v12 = 0;
    }
  }
  Entity::handleEntityEvent(v5, v3, v4);
  return (*(int (__fastcall **)(Entity *))(*(_DWORD *)v5 + 44))(v5);
}


void __fastcall FireworksRocketEntity::addAdditionalSaveData(FireworksRocketEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r6@1
  FireworksRocketEntity *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  int v10; // [sp+4h] [bp-2Ch]@2
  int v11; // [sp+Ch] [bp-24h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v11, "Life");
  CompoundTag::putInt((int)v2, (const void **)&v11, *((_DWORD *)v3 + 853));
  v4 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v11 - 4);
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
  sub_21E94B4((void **)&v10, "LifeTime");
  CompoundTag::putInt((int)v2, (const void **)&v10, *((_DWORD *)v3 + 854));
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
}


int __fastcall FireworksRocketEntity::initTagData(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int *v5; // r0@2
  int v6; // r0@2
  int v7; // r6@2
  int result; // r0@8
  int v9; // [sp+0h] [bp-68h]@1
  int v10; // [sp+8h] [bp-60h]@8
  void *v11; // [sp+24h] [bp-44h]@6
  void *ptr; // [sp+34h] [bp-34h]@4
  int v13; // [sp+5Ch] [bp-Ch]@1
  int v14; // [sp+60h] [bp-8h]@1
  int v15; // [sp+64h] [bp-4h]@1

  v4 = a1;
  v13 = a2;
  v14 = a3;
  v15 = a4;
  SynchedEntityData::getItemInstance((SynchedEntityData *)&v9, a1 + 176, 0x10u);
  if ( ItemInstance::hasUserData((ItemInstance *)&v9) == 1 )
  {
    v5 = (int *)ItemInstance::getUserData((ItemInstance *)&v9);
    v6 = CompoundTag::getCompound(*v5, (const void **)&FireworksItem::TAG_FIREWORKS);
    v7 = 10 * CompoundTag::getByte(v6, (const void **)&FireworksItem::TAG_E_FLIGHT) + 10;
  }
  else
    v7 = 10;
  *(_DWORD *)(v4 + 3416) = Random::_genRandInt32((Random *)&v13) % 6 + v7;
  *(_DWORD *)(v4 + 3416) += Random::_genRandInt32((Random *)&v13) % 7;
  if ( ptr )
    operator delete(ptr);
  if ( v11 )
    operator delete(v11);
  result = v10;
  if ( v10 )
    result = (*(int (**)(void))(*(_DWORD *)v10 + 4))();
  return result;
}


void __fastcall FireworksRocketEntity::readAdditionalSaveData(FireworksRocketEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  FireworksRocketEntity *v3; // r6@1
  void *v4; // r0@1
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  int v10; // [sp+4h] [bp-2Ch]@2
  int v11; // [sp+Ch] [bp-24h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v11, "Life");
  *((_DWORD *)v3 + 853) = CompoundTag::getInt((int)v2, (const void **)&v11);
  v4 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v11 - 4);
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
  sub_21E94B4((void **)&v10, "LifeTime");
  *((_DWORD *)v3 + 854) = CompoundTag::getInt((int)v2, (const void **)&v10);
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
}


int __fastcall FireworksRocketEntity::dealExplosionDamage(FireworksRocketEntity *this)
{
  FireworksRocketEntity *v1; // r11@1
  SynchedEntityData *v2; // r5@1
  int *v3; // r0@2
  int v4; // r0@2
  ListTag *v5; // r6@2
  __int64 v11; // r0@4
  unsigned int v12; // r10@4
  BlockSource *v13; // r0@5
  int v14; // r0@5
  Entity *v15; // r5@5
  int v17; // r5@7
  _QWORD *v18; // r0@7
  _QWORD *v19; // r5@7
  int v20; // r1@7 OVERLAPPED
  int v21; // r2@7 OVERLAPPED
  char *v22; // r7@7
  signed int v23; // r0@7
  signed int v24; // r2@10
  signed int v25; // r4@11
  int v26; // r4@11
  int v27; // r8@11
  __int64 v28; // r0@12
  float v32; // r1@17
  Entity *v34; // r5@17
  int result; // r0@25
  unsigned int v37; // [sp+4h] [bp-10Ch]@4
  char v38; // [sp+8h] [bp-108h]@17
  int v39; // [sp+30h] [bp-E0h]@7
  signed int v40; // [sp+34h] [bp-DCh]@7
  int v41; // [sp+38h] [bp-D8h]@7
  char v42; // [sp+3Ch] [bp-D4h]@7
  char v43; // [sp+58h] [bp-B8h]@6
  char v44; // [sp+80h] [bp-90h]@1
  int v45; // [sp+88h] [bp-88h]@25
  void *v46; // [sp+A4h] [bp-6Ch]@23
  void *ptr; // [sp+B4h] [bp-5Ch]@21

  v1 = this;
  v2 = (FireworksRocketEntity *)((char *)this + 176);
  SynchedEntityData::getItemInstance((SynchedEntityData *)&v44, (int)this + 176, 0x10u);
  if ( ItemInstance::hasUserData((ItemInstance *)&v44) == 1 )
  {
    v3 = (int *)ItemInstance::getUserData((ItemInstance *)&v44);
    v4 = CompoundTag::getCompound(*v3, (const void **)&FireworksItem::TAG_FIREWORKS);
    v5 = (ListTag *)CompoundTag::getList(v4, (const void **)&FireworksItem::TAG_EXPLOSIONS);
    if ( ListTag::size(v5) >= 1 )
    {
      _R1 = 2 * ListTag::size(v5) + 5;
      __asm
      {
        VMOV            S0, R1
        VCVT.F32.S32    S16, S0
      }
      if ( !(_NF ^ _VF) )
        v11 = SynchedEntityData::getInt64(v2, 18);
        v12 = HIDWORD(v11);
        v37 = v11;
        if ( ((unsigned int)v11 & HIDWORD(v11)) != -1 )
        {
          v13 = (BlockSource *)Entity::getRegion(v1);
          v14 = BlockSource::getLevel(v13);
          v15 = (Entity *)Level::fetchEntity(v14, 0, v37, v12, 0);
          if ( v15 )
          {
            EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v43, v1, 23);
            __asm
            {
              VCVTR.S32.F32   S0, S16
              VMOV            R2, S0
            }
            Entity::hurt(v15, (const EntityDamageSource *)&v43, _R2, 1, 0);
            EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v43);
          }
        }
        v17 = Entity::getRegion(v1);
        v39 = 1084227584;
        v40 = 1084227584;
        v41 = 1084227584;
        AABB::grow((AABB *)&v42, (FireworksRocketEntity *)((char *)v1 + 264), (int)&v39);
        v18 = (_QWORD *)BlockSource::fetchEntities(v17, 256, (int)&v42, (int)v1);
        v19 = v18;
        *(_QWORD *)&v20 = *v18;
        v22 = 0;
        v23 = v21 - v20;
        if ( (v21 - v20) >> 2 )
          if ( (unsigned int)(v23 >> 2) >= 0x40000000 )
            sub_21E57F4();
          v22 = (char *)operator new(v23);
          *(_QWORD *)&v20 = *v19;
        v24 = v21 - v20;
        if ( 0 != v24 >> 2 )
          v25 = v24 >> 2;
          _aeabi_memmove4(v22, v20);
          __asm
            VMOV.F32        S18, #25.0
            VLDR            S22, =0.2
            VMOV.F32        S20, #5.0
          v26 = 4 * v25;
          v27 = 0;
          do
            v28 = *(_QWORD *)Entity::getUniqueID(*(Entity **)&v22[v27]);
            HIDWORD(v28) ^= v12;
            if ( v28 != v37 )
              _R0 = Entity::distanceToSqr(v1, *(const Entity **)&v22[v27]);
              __asm
              {
                VMOV            S0, R0
                VCMPE.F32       S0, S18
                VMRS            APSR_nzcv, FPSCR
              }
              if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                if ( (*(int (__fastcall **)(FireworksRocketEntity *, _DWORD))(*(_DWORD *)v1 + 252))(
                       v1,
                       *(_DWORD *)&v22[v27]) == 1
                  || (*(int (__fastcall **)(FireworksRocketEntity *, _DWORD))(*(_DWORD *)v1 + 252))(
                       *(_DWORD *)&v22[v27]) )
                {
                  _R0 = Entity::distanceTo(v1, (const Vec3 *)(*(_DWORD *)&v22[v27] + 72));
                  __asm
                  {
                    VMOV            S0, R0
                    VSUB.F32        S0, S20, S0
                    VMUL.F32        S0, S0, S22
                    VMOV            R0, S0
                  }
                  _R6 = mce::Math::sqrt(_R0, v32);
                  v34 = *(Entity **)&v22[v27];
                  EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v38, v1, 23);
                    VMOV            S0, R6
                    VMUL.F32        S0, S0, S16
                    VCVTR.S32.F32   S0, S0
                    VMOV            R2, S0
                  Entity::hurt(v34, (const EntityDamageSource *)&v38, _R2, 1, 0);
                  EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v38);
                }
            v27 += 4;
          while ( v26 != v27 );
        if ( v22 )
          operator delete(v22);
    }
  }
  if ( ptr )
    operator delete(ptr);
  if ( v46 )
    operator delete(v46);
  result = v45;
  if ( v45 )
    result = (*(int (**)(void))(*(_DWORD *)v45 + 4))();
  return result;
}


int __fastcall FireworksRocketEntity::onSynchedDataUpdate(FireworksRocketEntity *this, int a2)
{
  FireworksRocketEntity *v2; // r6@1
  Level *v3; // r0@1
  char *v4; // r0@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1
  int *v8; // r4@1
  signed int v9; // r0@1
  int *v10; // r5@1
  int v11; // t1@2
  int v13; // [sp-9C8h] [bp-9E8h]@1

  v2 = this;
  v3 = (Level *)Entity::getLevel(this);
  v4 = Level::getRandom(v3);
  v5 = *(_DWORD *)v4;
  v6 = *((_DWORD *)v4 + 1);
  v7 = *((_DWORD *)v4 + 2);
  v8 = (int *)(v4 + 12);
  v9 = 2504;
  v10 = &v13;
  do
  {
    v11 = *v8;
    ++v8;
    v9 -= 4;
    *v10 = v11;
    ++v10;
  }
  while ( v9 );
  return FireworksRocketEntity::initTagData((int)v2, v5, v6, v7);
}


void __fastcall FireworksRocketEntity::~FireworksRocketEntity(FireworksRocketEntity *this)
{
  FireworksRocketEntity::~FireworksRocketEntity(this);
}


int __fastcall FireworksRocketEntity::checkAchievement(FireworksRocketEntity *this)
{
  FireworksRocketEntity *v1; // r4@1
  int *v2; // r0@3
  int v3; // r0@3
  ListTag *v4; // r5@3
  signed int v5; // r6@3
  int v6; // r4@5
  int v7; // r7@5
  _BOOL4 v8; // r8@5
  _BOOL4 v9; // r0@5
  int v17; // r5@10
  _DWORD *v18; // r0@10
  int result; // r0@16
  int v20; // [sp+0h] [bp-B0h]@0
  int v21; // [sp+4h] [bp-ACh]@0
  int v22; // [sp+8h] [bp-A8h]@0
  Entity *v23; // [sp+10h] [bp-A0h]@1
  _DWORD *v24; // [sp+14h] [bp-9Ch]@10
  void (*v25)(void); // [sp+1Ch] [bp-94h]@10
  signed int (__fastcall *v26)(int *, Entity *); // [sp+20h] [bp-90h]@10
  char v27; // [sp+24h] [bp-8Ch]@10
  char v28; // [sp+40h] [bp-70h]@1
  int v29; // [sp+48h] [bp-68h]@16
  void *v30; // [sp+64h] [bp-4Ch]@14
  void *ptr; // [sp+74h] [bp-3Ch]@12

  v1 = this;
  v23 = this;
  SynchedEntityData::getItemInstance((SynchedEntityData *)&v28, (int)this + 176, 0x10u);
  if ( *((_BYTE *)v1 + 3420) && ItemInstance::hasUserData((ItemInstance *)&v28) == 1 )
  {
    v2 = (int *)ItemInstance::getUserData((ItemInstance *)&v28);
    v3 = CompoundTag::getCompound(*v2, (const void **)&FireworksItem::TAG_FIREWORKS);
    v4 = (ListTag *)CompoundTag::getList(v3, (const void **)&FireworksItem::TAG_EXPLOSIONS);
    v5 = 0;
    while ( v5 < ListTag::size(v4) )
    {
      v6 = ListTag::getCompound(v4, v5);
      v7 = CompoundTag::getByte(v6, (const void **)&FireworkChargeItem::TAG_E_TYPE);
      v8 = CompoundTag::getBoolean(v6, (const void **)&FireworkChargeItem::TAG_E_TRAIL);
      v9 = CompoundTag::getBoolean(v6, (const void **)&FireworkChargeItem::TAG_E_FLICKER);
      ++v5;
      if ( v7 == 2 )
      {
        _ZF = v8 == 1;
        if ( v8 == 1 )
          _ZF = v9 == 1;
        if ( _ZF )
        {
          _R0 = v23;
          __asm
          {
            VLDR            S0, =-50.5
            VLDR            S8, =-51.75
            VLDR            S2, [R0,#0x48]
            VLDR            S6, [R0,#0x50]
            VADD.F32        S10, S2, S0
            VLDR            S4, [R0,#0x4C]
            VADD.F32        S8, S6, S8
            VADD.F32        S0, S4, S0
            VMOV            R1, S10
            VMOV            R3, S8
            VLDR            S8, =50.5
            VMOV            R2, S0
            VLDR            S0, =51.75
            VADD.F32        S4, S4, S8
            VADD.F32        S0, S6, S0
            VADD.F32        S2, S2, S8
            VSTR            S2, [SP,#0xB0+var_B0]
            VSTR            S4, [SP,#0xB0+var_AC]
            VSTR            S0, [SP,#0xB0+var_A8]
          }
          AABB::AABB(COERCE_FLOAT(&v27), _R1, _R2, v20, v21, v22);
          v17 = Entity::getLevel(v23);
          v18 = operator new(8u);
          *v18 = v23;
          v18[1] = &v27;
          v24 = v18;
          v25 = (void (*)(void))sub_173FCA8;
          v26 = sub_173FA68;
          Level::forEachPlayer(v17, (int)&v24);
          if ( v25 )
            v25();
          break;
        }
      }
    }
  }
  if ( ptr )
    operator delete(ptr);
  if ( v30 )
    operator delete(v30);
  result = v29;
  if ( v29 )
    result = (*(int (**)(void))(*(_DWORD *)v29 + 4))();
  return result;
}


void __fastcall FireworksRocketEntity::addAdditionalSaveData(FireworksRocketEntity *this, CompoundTag *a2)
{
  FireworksRocketEntity::addAdditionalSaveData(this, a2);
}


int __fastcall FireworksRocketEntity::init(int a1, Level *a2, int a3, ItemInstance *a4, int a5, int a6, __int64 a7)
{
  int v7; // r4@1
  SynchedEntityData *v8; // r9@1
  Level *v9; // r8@1
  ItemInstance *v10; // r7@1
  int v11; // r5@1
  unsigned int v12; // r0@3
  unsigned int v13; // r1@3
  int v14; // r0@8
  unsigned int v15; // r0@8
  unsigned int v16; // r1@8
  unsigned int v18; // r1@12
  _DWORD *v25; // r7@14
  unsigned int v26; // r1@20
  unsigned int v27; // r0@20
  int v28; // r0@25
  unsigned int v29; // r0@25
  unsigned int v30; // r1@25
  int v31; // r0@29
  unsigned int v32; // r1@29
  unsigned int v33; // r1@31
  unsigned int v34; // r0@31
  int v35; // r0@36
  unsigned int v36; // r0@36
  unsigned int v37; // r1@36
  char *v38; // r5@40
  float v43; // r1@40
  int v44; // r5@40
  __int64 v45; // r0@40
  __int64 v46; // r2@40
  int v47; // r0@40
  __int64 v48; // r0@40
  __int64 v49; // r2@40
  int v50; // r0@40
  int v51; // r0@40
  char *v52; // r0@40
  int v53; // r1@40
  int v54; // r2@40
  int v55; // r3@40
  int *v56; // r7@40
  signed int v57; // r0@40
  int *v58; // r6@40
  int v59; // t1@41
  int v61; // [sp-9C8h] [bp-9F8h]@40
  float v62; // [sp+0h] [bp-30h]@40

  v7 = a1;
  v8 = (SynchedEntityData *)(a1 + 176);
  v9 = a2;
  v10 = a4;
  v11 = SynchedEntityData::_get((SynchedEntityData *)(a1 + 176), 16);
  if ( *(_BYTE *)(v11 + 4) == 5 && ItemInstance::operator!=((ItemInstance *)(v11 + 16), v10) == 1 )
  {
    ItemInstance::operator=(v11 + 16, (int)v10);
    *(_BYTE *)(v11 + 8) = 1;
    v12 = *(_WORD *)(v11 + 6);
    v13 = *(_WORD *)(v7 + 188);
    if ( v13 >= v12 )
      LOWORD(v13) = *(_WORD *)(v11 + 6);
    *(_WORD *)(v7 + 188) = v13;
    if ( *(_WORD *)(v7 + 190) > v12 )
      LOWORD(v12) = *(_WORD *)(v7 + 190);
    *(_WORD *)(v7 + 190) = v12;
  }
  v14 = SynchedEntityData::_get(v8, 16);
  *(_BYTE *)(v14 + 8) = 1;
  v15 = *(_WORD *)(v14 + 6);
  v16 = *(_WORD *)(v7 + 188);
  if ( v16 >= v15 )
    LOWORD(v16) = v15;
  *(_WORD *)(v7 + 188) = v16;
  if ( *(_WORD *)(v7 + 190) > v15 )
    LOWORD(v15) = *(_WORD *)(v7 + 190);
  *(_WORD *)(v7 + 190) = v15;
  _R0 = SynchedEntityData::_get(v8, 17);
  v18 = *(_DWORD *)(_R0 + 4);
  if ( (unsigned __int8)v18 == 8 )
    _R2 = a5;
    __asm
    {
      VLDR            S2, [R0,#0xC]
      VLDR            S0, [R2]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      __asm { VLDR            S2, [R2,#4] }
      v25 = (_DWORD *)(_R0 + 16);
      __asm
      {
        VLDR            S4, [R0,#0x10]
        VMOV            R3, S2
        VCMPE.F32       S4, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _ZF )
        __asm
        {
          VLDR            S2, [R2,#8]
          VLDR            S4, [R0,#0x14]
          VCMPE.F32       S4, S2
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _ZF )
          goto LABEL_25;
    else
      _R3 = *(_DWORD *)(a5 + 4);
    __asm { VSTR            S0, [R0,#0xC] }
    v26 = v18 >> 16;
    *v25 = _R3;
    *(_DWORD *)(_R0 + 20) = *(_DWORD *)(a5 + 8);
    *(_BYTE *)(_R0 + 8) = 1;
    v27 = *(_WORD *)(v7 + 188);
    if ( v27 >= v26 )
      LOWORD(v27) = v26;
    *(_WORD *)(v7 + 188) = v27;
    if ( *(_WORD *)(v7 + 190) > v26 )
      LOWORD(v26) = *(_WORD *)(v7 + 190);
    *(_WORD *)(v7 + 190) = v26;
LABEL_25:
  v28 = SynchedEntityData::_get(v8, 17);
  *(_BYTE *)(v28 + 8) = 1;
  v29 = *(_WORD *)(v28 + 6);
  v30 = *(_WORD *)(v7 + 188);
  if ( v30 >= v29 )
    LOWORD(v30) = v29;
  *(_WORD *)(v7 + 188) = v30;
  if ( *(_WORD *)(v7 + 190) > v29 )
    LOWORD(v29) = *(_WORD *)(v7 + 190);
  *(_WORD *)(v7 + 190) = v29;
  v31 = SynchedEntityData::_get(v8, 18);
  v32 = *(_DWORD *)(v31 + 4);
  if ( (unsigned __int8)v32 == 7 && *(_QWORD *)(v31 + 16) != a7 )
    *(_QWORD *)(v31 + 16) = a7;
    *(_BYTE *)(v31 + 8) = 1;
    v33 = v32 >> 16;
    v34 = *(_WORD *)(v7 + 188);
    if ( v34 >= v33 )
      LOWORD(v34) = v33;
    *(_WORD *)(v7 + 188) = v34;
    if ( *(_WORD *)(v7 + 190) > v33 )
      LOWORD(v33) = *(_WORD *)(v7 + 190);
    *(_WORD *)(v7 + 190) = v33;
  v35 = SynchedEntityData::_get(v8, 18);
  *(_BYTE *)(v35 + 8) = 1;
  v36 = *(_WORD *)(v35 + 6);
  v37 = *(_WORD *)(v7 + 188);
  if ( v37 >= v36 )
    LOWORD(v37) = v36;
  *(_WORD *)(v7 + 188) = v37;
  if ( *(_WORD *)(v7 + 190) > v36 )
    LOWORD(v36) = *(_WORD *)(v7 + 190);
  *(_WORD *)(v7 + 190) = v36;
  *(_DWORD *)(v7 + 3412) = 0;
  (*(void (__fastcall **)(int, signed int, signed int))(*(_DWORD *)v7 + 680))(v7, 1048576000, 1048576000);
  v38 = Level::getRandom(v9);
  _R6 = Random::nextGaussian((Random *)v38);
  _R7 = Random::nextGaussian((Random *)v38);
  _R5 = Random::nextGaussian((Random *)v38);
  SynchedEntityData::getVec3((SynchedEntityData *)&v62, (int)v8, 0x11u);
  __asm
    VLDR            S0, =0.03
    VMOV            S4, R6
    VLDR            S6, [SP,#0x30+var_30]
    VMOV            S12, R5
    VLDR            S2, =0.001
    VLDR            S10, [SP,#0x30+var_28]
    VMUL.F32        S6, S6, S0
    VMUL.F32        S4, S4, S2
    VLDR            S8, [SP,#0x30+var_2C]
    VMUL.F32        S10, S10, S0
    VMUL.F32        S12, S12, S2
    VMUL.F32        S0, S8, S0
    VADD.F32        S4, S6, S4
    VADD.F32        S6, S10, S12
    VMUL.F32        S10, S4, S4
    VSTR            S4, [R4,#0x6C]
    VMUL.F32        S12, S6, S6
    VADD.F32        S10, S12, S10
    VMOV            S12, R7
    VMUL.F32        S2, S12, S2
    VMOV            R0, S10
    VADD.F32        S0, S0, S2
    VSTR            S0, [R4,#0x70]
    VSTR            S6, [R4,#0x74]
  v44 = mce::Math::sqrt(_R0, v43);
  LODWORD(v45) = *(_DWORD *)(v7 + 108);
  HIDWORD(v45) = *(_DWORD *)(v7 + 116);
  v47 = mce::Math::atan2(v45, v46);
  v48 = __PAIR__(v44, mce::operator*(v47, 1113927392));
  *(_DWORD *)(v7 + 124) = v48;
  *(_DWORD *)(v7 + 132) = v48;
  LODWORD(v48) = *(_DWORD *)(v7 + 112);
  v50 = mce::Math::atan2(v48, v49);
  v51 = mce::operator*(v50, 1113927392);
  *(_DWORD *)(v7 + 120) = v51;
  *(_DWORD *)(v7 + 128) = v51;
  v52 = Level::getRandom(v9);
  v53 = *(_DWORD *)v52;
  v54 = *((_DWORD *)v52 + 1);
  v55 = *((_DWORD *)v52 + 2);
  v56 = (int *)(v52 + 12);
  v57 = 2504;
  v58 = &v61;
  do
    v59 = *v56;
    ++v56;
    v57 -= 4;
    *v58 = v59;
    ++v58;
  while ( v57 );
  return FireworksRocketEntity::initTagData(v7, v53, v54, v55);
}


int __fastcall FireworksRocketEntity::normalTick(FireworksRocketEntity *this)
{
  char *v2; // r6@1
  __int64 v3; // kr00_8@1
  BlockSource *v4; // r0@2
  int v5; // r0@2
  int v6; // r0@2
  float v8; // r3@4
  Level *v13; // r0@7
  float v14; // r1@9
  int v17; // r5@13
  __int64 v18; // r0@13
  __int64 v19; // r2@13
  int v20; // r0@13
  __int64 v21; // r0@13
  __int64 v22; // r2@13
  int v23; // r0@13
  int v24; // r0@13
  Level *v25; // r5@16
  int v26; // r0@16
  Level *v27; // r0@17
  char *v28; // r0@17
  int v32; // r0@18
  __int64 v33; // r1@19
  int v34; // r0@20
  Level *v35; // r0@20
  int result; // r0@20
  int v37; // r0@22
  unsigned int v38; // r0@22
  unsigned int v39; // r1@22
  int v40; // r0@26
  int v41; // [sp+18h] [bp-A38h]@18
  int v42; // [sp+20h] [bp-A30h]@18
  float v43; // [sp+30h] [bp-A20h]@5
  char v46; // [sp+A04h] [bp-4Ch]@7
  char v47; // [sp+A08h] [bp-48h]@7

  _R4 = this;
  v2 = (char *)this + 72;
  *((_DWORD *)this + 24) = *((_DWORD *)this + 18);
  *((_DWORD *)this + 25) = *((_DWORD *)this + 19);
  *((_DWORD *)this + 26) = *((_DWORD *)this + 20);
  Entity::normalTick(this);
  v3 = SynchedEntityData::getInt64((FireworksRocketEntity *)((char *)_R4 + 176), 18);
  if ( ((unsigned int)v3 & HIDWORD(v3)) == -1 )
  {
    __asm
    {
      VLDR            S0, =1.05
      VLDR            S2, [R4,#0x6C]
    }
    _R5 = &v47;
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R4,#0x6C]
      VLDR            S2, [R4,#0x70]
      VSTR            S2, [R4,#0x70]
      VLDR            S2, [R4,#0x74]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R4,#0x74]
    SynchedEntityData::getVec3((SynchedEntityData *)&v46, (int)_R4 + 176, 0x11u);
      VLDR            S0, =0.03
      VLDR            S2, [R5,#-4]
      VLDR            S8, [R4,#0x6C]
      VLDR            S4, [R5]
      VLDR            S6, [R5,#4]
      VMUL.F32        S4, S4, S0
      VMUL.F32        S0, S6, S0
      VADD.F32        S2, S8, S2
      VADD.F32        S2, S2, S4
      VADD.F32        S0, S2, S0
    v13 = (Level *)Entity::getLevel(_R4);
    if ( !Level::isClientSide(v13) )
      (*(void (__fastcall **)(FireworksRocketEntity *, char *))(*(_DWORD *)_R4 + 76))(_R4, (char *)_R4 + 108);
  }
  else
    v4 = (BlockSource *)Entity::getRegion(_R4);
    v5 = BlockSource::getLevel(v4);
    v6 = Level::fetchEntity(v5, 0, v3, HIDWORD(v3), 0);
    _R7 = *(float *)&v6;
    if ( v6 && Entity::hasType(v6, 256) == 1 )
      if ( Mob::isGliding((Mob *)LODWORD(_R7)) )
      {
        Entity::getViewVector((Entity *)&v43, _R7, 1.0, v8);
        __asm
        {
          VMOV.F32        S0, #1.5
          VLDR            S4, [SP,#0xA50+var_A1C]
          VLDR            S6, [SP,#0xA50+var_A18]
          VMOV.F32        S3, #0.5
          VLDR            S2, [SP,#0xA50+var_A20]
          VLDR            S14, [R7,#0x70]
          VLDR            S1, [R7,#0x74]
          VLDR            S12, [R7,#0x6C]
          VLDR            S5, =0.1
          VMUL.F32        S8, S4, S0
          VMUL.F32        S10, S6, S0
          VMUL.F32        S0, S2, S0
          VMUL.F32        S2, S2, S5
          VMUL.F32        S4, S4, S5
          VMUL.F32        S6, S6, S5
          VSUB.F32        S8, S8, S14
          VSUB.F32        S10, S10, S1
          VSUB.F32        S0, S0, S12
          VADD.F32        S2, S12, S2
          VMUL.F32        S8, S8, S3
          VMUL.F32        S10, S10, S3
          VMUL.F32        S0, S0, S3
          VADD.F32        S4, S8, S4
          VADD.F32        S6, S10, S6
          VADD.F32        S0, S2, S0
          VADD.F32        S2, S4, S14
          VADD.F32        S4, S6, S1
          VSTR            S0, [R7,#0x6C]
          VSTR            S2, [R7,#0x70]
          VSTR            S4, [R7,#0x74]
        }
      }
      (*(void (__fastcall **)(FireworksRocketEntity *, int))(*(_DWORD *)_R4 + 48))(_R4, LODWORD(_R7) + 72);
      *((_DWORD *)_R4 + 27) = *(_DWORD *)(LODWORD(_R7) + 108);
      *((_DWORD *)_R4 + 28) = *(_DWORD *)(LODWORD(_R7) + 112);
      *((_DWORD *)_R4 + 29) = *(_DWORD *)(LODWORD(_R7) + 116);
  v14 = *((float *)_R4 + 32);
  _ZF = (LODWORD(v14) & 0x7FFFFFFF) == 0;
  if ( !(LODWORD(v14) & 0x7FFFFFFF) )
    v14 = *((float *)_R4 + 33);
    _ZF = (LODWORD(v14) & 0x7FFFFFFF) == 0;
  if ( _ZF )
      VLDR            S0, [R4,#0x6C]
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VMOV            R0, S0
    v17 = mce::Math::sqrt(_R0, v14);
    LODWORD(v18) = *((_DWORD *)_R4 + 27);
    HIDWORD(v18) = *((_DWORD *)_R4 + 29);
    v20 = mce::Math::atan2(v18, v19);
    v21 = __PAIR__(v17, mce::operator*(v20, 1113927392));
    *((_DWORD *)_R4 + 31) = v21;
    *((_DWORD *)_R4 + 33) = v21;
    LODWORD(v21) = *((_DWORD *)_R4 + 28);
    v23 = mce::Math::atan2(v21, v22);
    v24 = mce::operator*(v23, 1113927392);
    *((_DWORD *)_R4 + 30) = v24;
    *((_DWORD *)_R4 + 32) = v24;
  if ( !*((_DWORD *)_R4 + 853) && !(*(int (__fastcall **)(FireworksRocketEntity *))(*(_DWORD *)_R4 + 288))(_R4) )
    v25 = (Level *)Entity::getLevel(_R4);
    v26 = Entity::getRegion(_R4);
    Level::broadcastSoundEvent(v25, v26, 54, (int)v2, -1, 1, 0, 0);
  ++*((_DWORD *)_R4 + 853);
  v27 = (Level *)Entity::getLevel(_R4);
  v28 = Level::getRandom(v27);
  _aeabi_memcpy4(&v43, v28, 2516);
  _R0 = Random::nextGaussian((Random *)&v43);
  __asm
    VMOV            S20, R0
    VMOV.F32        S16, #0.5
    VLDR            S18, =0.05
  __asm { VMOV            S22, R0 }
    VLDR            S0, [R4,#0x6C]
    VMOV            S8, R0
    VLDR            S2, [R4,#0x70]
    VMUL.F32        S6, S20, S18
    VLDR            S4, [R4,#0x74]
    VMUL.F32        S0, S0, S16
    VMUL.F32        S10, S22, S18
    VMUL.F32        S2, S2, S16
    VMUL.F32        S4, S4, S16
    VMUL.F32        S8, S8, S18
    VSUB.F32        S0, S6, S0
    VSUB.F32        S2, S10, S2
    VSUB.F32        S4, S8, S4
    VSTR            S0, [SP,#0xA50+var_A2C]
    VSTR            S2, [SP,#0xA50+var_A28]
    VSTR            S4, [SP,#0xA50+var_A24]
    v33 = *((_QWORD *)_R4 + 12);
    v42 = *((_DWORD *)_R4 + 26);
    *(_QWORD *)&v41 = v33;
      VMOV.F32        S0, #-1.5
      VLDR            S2, [R4,#0x4C]
    v32 = *((_DWORD *)_R4 + 20);
    v41 = *((_DWORD *)_R4 + 18);
      VSTR            S0, [SP,#0xA50+var_A34]
    v42 = v32;
  v34 = Entity::getLevel(_R4);
  Level::addParticle(v34, 46, (int)&v41);
  v35 = (Level *)Entity::getLevel(_R4);
  result = Level::isClientSide(v35);
  if ( !result )
    result = *((_DWORD *)_R4 + 853);
    if ( result > *((_DWORD *)_R4 + 854) )
      v37 = SynchedEntityData::_get((FireworksRocketEntity *)((char *)_R4 + 176), 16);
      *(_BYTE *)(v37 + 8) = 1;
      v38 = *(_WORD *)(v37 + 6);
      v39 = *((_WORD *)_R4 + 94);
      if ( v39 >= v38 )
        LOWORD(v39) = v38;
      *((_WORD *)_R4 + 94) = v39;
      if ( *((_WORD *)_R4 + 95) > v38 )
        LOWORD(v38) = *((_WORD *)_R4 + 95);
      *((_WORD *)_R4 + 95) = v38;
      v40 = Entity::getLevel(_R4);
      Level::broadcastEntityEvent(v40, (int)_R4, 25, 0);
      FireworksRocketEntity::checkAchievement(_R4);
      FireworksRocketEntity::dealExplosionDamage(_R4);
      result = (*(int (__fastcall **)(FireworksRocketEntity *))(*(_DWORD *)_R4 + 44))(_R4);
  return result;
}


void __fastcall FireworksRocketEntity::readAdditionalSaveData(FireworksRocketEntity *this, const CompoundTag *a2)
{
  FireworksRocketEntity::readAdditionalSaveData(this, a2);
}


signed int __fastcall FireworksRocketEntity::isAttachedToEntity(FireworksRocketEntity *this)
{
  __int64 v1; // r0@1
  signed int result; // r0@1

  v1 = SynchedEntityData::getInt64((FireworksRocketEntity *)((char *)this + 176), 18);
  HIDWORD(v1) &= v1;
  result = 0;
  if ( HIDWORD(v1) != -1 )
    result = 1;
  return result;
}


signed int __fastcall FireworksRocketEntity::getEntityTypeId(FireworksRocketEntity *this)
{
  return 72;
}


int __fastcall FireworksRocketEntity::setDispensed(int result, bool a2)
{
  *(_BYTE *)(result + 3420) = a2;
  return result;
}
