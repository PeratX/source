

void __fastcall EnderCrystal::addAdditionalSaveData(EnderCrystal *this, CompoundTag *a2)
{
  EnderCrystal *v2; // r6@1
  CompoundTag *v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5
  void *v6; // r0@6
  void *v7; // r0@7
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  unsigned int *v12; // r2@17
  signed int v13; // r1@19
  unsigned int *v14; // r2@21
  signed int v15; // r1@23
  int v16; // [sp+4h] [bp-3Ch]@7
  int v17; // [sp+Ch] [bp-34h]@6
  int v18; // [sp+14h] [bp-2Ch]@5
  int v19; // [sp+1Ch] [bp-24h]@4
  int v20; // [sp+20h] [bp-20h]@1
  int v21; // [sp+24h] [bp-1Ch]@2
  int v22; // [sp+28h] [bp-18h]@3

  v2 = this;
  v3 = a2;
  j_Entity::getBlockTarget((Entity *)&v20, (int)this);
  if ( v20 != BlockPos::ZERO || v21 != unk_2816278 || v22 != dword_281627C )
  {
    sub_21E94B4((void **)&v19, "BlockTargetX");
    j_CompoundTag::putInt((int)v3, (const void **)&v19, v20);
    v4 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v19 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v4);
    }
    sub_21E94B4((void **)&v18, "BlockTargetY");
    j_CompoundTag::putInt((int)v3, (const void **)&v18, v21);
    v5 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v18 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    sub_21E94B4((void **)&v17, "BlockTargetZ");
    j_CompoundTag::putInt((int)v3, (const void **)&v17, v22);
    v6 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v17 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
  }
  sub_21E94B4((void **)&v16, "TimeOffset");
  j_CompoundTag::putInt((int)v3, (const void **)&v16, *((_DWORD *)v2 + 856));
  v7 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


void __fastcall EnderCrystal::~EnderCrystal(EnderCrystal *this)
{
  EnderCrystal::~EnderCrystal(this);
}


void __fastcall EnderCrystal::~EnderCrystal(EnderCrystal *this)
{
  Entity *v1; // r0@1

  v1 = j_Entity::~Entity(this);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall EnderCrystal::onSynchedDataUpdate(EnderCrystal *this, int a2)
{
  EnderCrystal::onSynchedDataUpdate(this, a2);
}


void __fastcall EnderCrystal::addAdditionalSaveData(EnderCrystal *this, CompoundTag *a2)
{
  EnderCrystal::addAdditionalSaveData(this, a2);
}


int __fastcall EnderCrystal::isInvulnerableTo(EnderCrystal *this, const EntityDamageSource *a2)
{
  const EntityDamageSource *v2; // r4@1
  Entity *v3; // r5@1
  int result; // r0@2

  v2 = a2;
  v3 = this;
  if ( (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)a2 + 36))(a2) == 2869 )
    result = 1;
  else
    result = j_Entity::isInvulnerableTo(v3, v2);
  return result;
}


signed int __fastcall EnderCrystal::getEntityTypeId(EnderCrystal *this)
{
  return 71;
}


unsigned int __fastcall EnderCrystal::reloadHardcoded(int a1)
{
  int v1; // r4@1
  unsigned int result; // r0@1
  Level *v3; // r0@3
  Level *v4; // r0@3
  char *v5; // r0@3
  unsigned int v6; // r1@3
  int v7; // r2@4
  unsigned int v8; // r1@5
  unsigned int v9; // r0@5

  v1 = a1;
  result = *(_BYTE *)(a1 + 3081);
  if ( !result )
  {
    *(_BYTE *)(v1 + 536) = 1;
    (*(void (__fastcall **)(int, signed int, signed int))(*(_DWORD *)v1 + 680))(v1, 1065353216, 0x40000000);
    result = *(_DWORD *)(v1 + 3424);
    if ( !result )
    {
      v3 = (Level *)j_Entity::getLevel((Entity *)v1);
      *(_QWORD *)(v1 + 3416) = *(_QWORD *)j_Level::getCurrentTick(v3);
      v4 = (Level *)j_Entity::getLevel((Entity *)v1);
      v5 = j_Level::getRandom(v4);
      *(_DWORD *)(v1 + 3424) = j_Random::_genRandInt32((Random *)v5) % 0x186A0;
      result = j_SynchedEntityData::_get((SynchedEntityData *)(v1 + 176), 80);
      v6 = *(_DWORD *)(result + 4);
      if ( (unsigned __int8)v6 == 2 )
      {
        v7 = *(_DWORD *)(v1 + 3424);
        if ( *(_DWORD *)(result + 12) != v7 )
        {
          *(_DWORD *)(result + 12) = v7;
          *(_BYTE *)(result + 8) = 1;
          v8 = v6 >> 16;
          v9 = *(_WORD *)(v1 + 188);
          if ( v9 >= v8 )
            LOWORD(v9) = v8;
          *(_WORD *)(v1 + 188) = v9;
          result = *(_WORD *)(v1 + 190);
          if ( result > v8 )
            LOWORD(v8) = *(_WORD *)(v1 + 190);
          *(_WORD *)(v1 + 190) = v8;
        }
      }
    }
  }
  return result;
}


signed int __fastcall EnderCrystal::isPickable(EnderCrystal *this)
{
  return 1;
}


signed int __fastcall EnderCrystal::getShadowRadius(EnderCrystal *this)
{
  return 1056964608;
}


int __fastcall EnderCrystal::EnderCrystal(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  int v5; // r7@2
  _BYTE *v6; // r0@2
  signed __int16 v7; // r6@2
  unsigned int v8; // r1@2
  int v9; // r1@2
  unsigned int v10; // r0@4
  int v11; // r6@10
  _BYTE *v12; // r0@10
  signed __int16 v13; // r5@10
  int v14; // r1@10
  unsigned int v15; // r0@12

  v3 = a1;
  j_Entity::Entity(a1, a2, a3);
  v4 = (int *)(v3 + 176);
  *(_DWORD *)v3 = &off_271E3D0;
  *(_DWORD *)(v3 + 3416) = 0;
  *(_DWORD *)(v3 + 3420) = 0;
  *(_DWORD *)(v3 + 3424) = 0;
  if ( !j_SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 48) )
  {
    j_SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 48);
    v5 = *v4;
    v6 = j_operator new(0x18u);
    v7 = 48;
    v6[4] = 6;
    *((_WORD *)v6 + 3) = 48;
    v6[8] = 1;
    *(_DWORD *)v6 = &off_26F9220;
    *((_DWORD *)v6 + 3) = BlockPos::ZERO;
    v8 = dword_281627C;
    *((_DWORD *)v6 + 4) = unk_2816278;
    *((_DWORD *)v6 + 5) = v8;
    v9 = *(_DWORD *)(v5 + 192);
    *(_DWORD *)(v5 + 192) = v6;
    if ( v9 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 4))(v9);
    v10 = *(_WORD *)(v3 + 188);
    if ( v10 >= 0x30 )
      LOWORD(v10) = 48;
    *(_WORD *)(v3 + 188) = v10;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x30 )
      v7 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v7;
  }
  if ( !j_SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 80) )
    j_SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 80);
    v11 = *v4;
    v12 = j_operator new(0x10u);
    v12[4] = 2;
    v13 = 80;
    *((_WORD *)v12 + 3) = 80;
    v12[8] = 1;
    *(_DWORD *)v12 = &off_26F08C4;
    *((_DWORD *)v12 + 3) = 0;
    v14 = *(_DWORD *)(v11 + 320);
    *(_DWORD *)(v11 + 320) = v12;
    if ( v14 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 4))(v14);
    v15 = *(_WORD *)(v3 + 188);
    if ( v15 >= 0x50 )
      LOWORD(v15) = 80;
    *(_WORD *)(v3 + 188) = v15;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x50 )
      v13 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v13;
  *(_DWORD *)(v3 + 248) = 72;
  return v3;
}


int __fastcall EnderCrystal::_hurt(EnderCrystal *this, const EntityDamageSource *a2, int a3, bool a4, bool a5)
{
  bool v5; // r4@1
  signed int v6; // r5@1
  const EntityDamageSource *v7; // r6@1
  Entity *v8; // r7@1
  Level *v9; // r0@1
  int v10; // r0@1
  BlockSource *v11; // r0@3
  BlockSource *v12; // r0@4
  int v13; // r0@4

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = this;
  v9 = (Level *)j_Entity::getLevel(this);
  v10 = j_Level::isClientSide(v9);
  if ( v6 >= 1 && (v10 ^ 1) == 1 )
  {
    v11 = (BlockSource *)j_Entity::getRegion(v8);
    if ( j_BlockSource::getDimensionId(v11) == 2 )
    {
      v12 = (BlockSource *)j_Entity::getRegion(v8);
      v13 = j_BlockSource::getDimension(v12);
      j_EndDragonFight::onCrystalDestroyed(*(EndDragonFight **)(v13 + 320), v8, v7);
    }
  }
  return j_Entity::_hurt(v8, v7, v6, v5, a5);
}


void __fastcall EnderCrystal::onSynchedDataUpdate(EnderCrystal *this, int a2)
{
  int v2; // r5@1
  EnderCrystal *v3; // r4@1
  Level *v4; // r0@2

  v2 = a2;
  v3 = this;
  j_Entity::onSynchedDataUpdate(this, a2);
  if ( v2 == 80 )
  {
    v4 = (Level *)j_Entity::getLevel(v3);
    *((_QWORD *)v3 + 427) = *(_QWORD *)j_Level::getCurrentTick(v4);
    *((_DWORD *)v3 + 856) = j_SynchedEntityData::getInt((EnderCrystal *)((char *)v3 + 176), 80);
  }
}


unsigned int __fastcall EnderCrystal::setBeamTarget(EnderCrystal *this, const BlockPos *a2)
{
  EnderCrystal *v2; // r4@1
  const BlockPos *v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  __int64 v6; // r2@3
  unsigned int v7; // r1@7
  unsigned int v8; // r0@7

  v2 = this;
  v3 = a2;
  result = j_SynchedEntityData::_get((EnderCrystal *)((char *)this + 176), 48);
  v5 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v5 == 6 )
  {
    if ( *(_DWORD *)(result + 12) == *(_DWORD *)v3 )
    {
      HIDWORD(v6) = *((_DWORD *)v3 + 1);
      if ( *(_DWORD *)(result + 16) == HIDWORD(v6) )
      {
        HIDWORD(v6) = *(_DWORD *)(result + 16);
        if ( *(_DWORD *)(result + 20) == *((_DWORD *)v3 + 2) )
          return result;
      }
    }
    else
    LODWORD(v6) = *(_DWORD *)v3;
    *(_QWORD *)(result + 12) = v6;
    v7 = v5 >> 16;
    *(_DWORD *)(result + 20) = *((_DWORD *)v3 + 2);
    *(_BYTE *)(result + 8) = 1;
    v8 = *((_WORD *)v2 + 94);
    if ( v8 >= v7 )
      LOWORD(v8) = v7;
    *((_WORD *)v2 + 94) = v8;
    result = *((_WORD *)v2 + 95);
    if ( result > v7 )
      LOWORD(v7) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v7;
  }
  return result;
}


unsigned int __fastcall EnderCrystal::readAdditionalSaveData(EnderCrystal *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  EnderCrystal *v3; // r6@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  unsigned int result; // r0@5
  unsigned int v9; // r1@5
  int v10; // r2@6
  unsigned int v11; // r1@7
  unsigned int v12; // r0@7
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  unsigned int *v19; // r2@25
  signed int v20; // r1@27
  int v21; // [sp+4h] [bp-3Ch]@4
  int v22; // [sp+Ch] [bp-34h]@3
  int v23; // [sp+14h] [bp-2Ch]@2
  int v24; // [sp+1Ch] [bp-24h]@1
  int v25; // [sp+20h] [bp-20h]@1
  int v26; // [sp+24h] [bp-1Ch]@1
  int v27; // [sp+28h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  sub_21E94B4((void **)&v24, "BlockTargetX");
  v25 = j_CompoundTag::getInt((int)v2, (const void **)&v24);
  v4 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v24 - 4);
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
  sub_21E94B4((void **)&v23, "BlockTargetY");
  v26 = j_CompoundTag::getInt((int)v2, (const void **)&v23);
  v5 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v23 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v22, "BlockTargetZ");
  v27 = j_CompoundTag::getInt((int)v2, (const void **)&v22);
  v6 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v22 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  j_Entity::setBlockTarget(v3, (const BlockPos *)&v25);
  sub_21E94B4((void **)&v21, "TimeOffset");
  *((_DWORD *)v3 + 856) = j_CompoundTag::getInt((int)v2, (const void **)&v21);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v21 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  result = j_SynchedEntityData::_get((EnderCrystal *)((char *)v3 + 176), 80);
  v9 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v9 == 2 )
    v10 = *((_DWORD *)v3 + 856);
    if ( *(_DWORD *)(result + 12) != v10 )
      *(_DWORD *)(result + 12) = v10;
      *(_BYTE *)(result + 8) = 1;
      v11 = v9 >> 16;
      v12 = *((_WORD *)v3 + 94);
      if ( v12 >= v11 )
        LOWORD(v12) = v11;
      *((_WORD *)v3 + 94) = v12;
      result = *((_WORD *)v3 + 95);
      if ( result > v11 )
        LOWORD(v11) = *((_WORD *)v3 + 95);
      *((_WORD *)v3 + 95) = v11;
  return result;
}


Entity *__fastcall EnderCrystal::normalTick(EnderCrystal *this)
{
  char *v2; // r5@1
  __int64 v3; // r0@1
  Level *v4; // r0@1
  const BlockPos *v10; // r5@2
  int v11; // r0@4
  char v13; // [sp+4h] [bp-34h]@5
  unsigned __int8 v14; // [sp+8h] [bp-30h]@4
  unsigned __int8 v15; // [sp+Ch] [bp-2Ch]@3
  char v16; // [sp+10h] [bp-28h]@2
  char v17; // [sp+1Ch] [bp-1Ch]@2

  _R4 = this;
  v2 = (char *)this + 72;
  *((_DWORD *)this + 21) = *((_DWORD *)this + 18);
  *((_DWORD *)this + 22) = *((_DWORD *)this + 19);
  *((_DWORD *)this + 23) = *((_DWORD *)this + 20);
  LODWORD(v3) = *((_DWORD *)this + 854);
  HIDWORD(v3) = *((_DWORD *)_R4 + 855);
  *((_QWORD *)_R4 + 427) = v3 + 1;
  v4 = (Level *)j_Entity::getLevel(_R4);
  if ( !j_Level::isClientSide(v4) )
  {
    j_BlockPos::BlockPos((int)&v17, (int)v2);
    __asm
    {
      VMOV.F32        S0, #-1.0
      VLDR            S2, [R4,#0x4C]
      VADD.F32        S0, S2, S0
      VMOV            R2, S0
    }
    j_BlockPos::BlockPos((BlockPos *)&v16, *((float *)_R4 + 18), _R2, *((float *)_R4 + 20));
    v10 = (const BlockPos *)j_Entity::getRegion(_R4);
    if ( j_BlockSource::getDimensionId(v10) == 2 )
      j_BlockSource::getBlockID((BlockSource *)&v15, v10, (int)&v16);
      if ( v15 != *(_BYTE *)(Block::mAir + 4) )
      {
        j_BlockSource::getBlockID((BlockSource *)&v14, v10, (int)&v17);
        v11 = *(_BYTE *)(Block::mFire + 4);
        if ( v14 != v11 )
        {
          v13 = v11;
          j_BlockSource::setBlock((int)v10, (BlockPos *)&v17, &v13, 3);
        }
      }
  }
  return j_Entity::normalTick(_R4);
}
