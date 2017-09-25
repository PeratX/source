

int __fastcall Monster::Monster(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = Mob::Mob(a1, a2, a3);
  *(_DWORD *)result = &off_26F83FC;
  *(_DWORD *)(result + 4300) = 0;
  *(_DWORD *)(result + 4296) = 0;
  *(_DWORD *)(result + 248) = 3;
  *(_DWORD *)(result + 172) |= 4u;
  return result;
}


int __fastcall Monster::shouldDespawn(Monster *this)
{
  Mob *v1; // r5@1
  BlockSource *v2; // r4@1
  int result; // r0@4
  int v4; // r0@7

  v1 = this;
  v2 = (BlockSource *)Entity::getRegion(this);
  if ( *((_BYTE *)v1 + 3280) || Mob::getNoActionTime(v1) <= 600 )
  {
    result = 0;
  }
  else if ( (*(int (__fastcall **)(Mob *))(*(_DWORD *)v1 + 1196))(v1) == 1 )
    if ( (*(int (__fastcall **)(Mob *))(*(_DWORD *)v1 + 332))(v1) == 1 )
    {
      v4 = BlockSource::getDimension(v2);
      result = (*(int (**)(void))(*(_DWORD *)v4 + 196))();
    }
    else
      result = 0;
  else
    result = 1;
  return result;
}


void __fastcall Monster::readAdditionalSaveData(Monster *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  Monster *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  Mob::readAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v7, "SpawnedByNight");
  *((_BYTE *)v3 + 4161) = CompoundTag::getBoolean((int)v2, (const void **)&v7);
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
}


signed int __fastcall Monster::_hurt(Monster *this, const EntityDamageSource *a2, int a3, int a4, bool a5)
{
  Monster *v5; // r4@1
  const EntityDamageSource *v6; // r5@1
  signed int v7; // r6@1
  int v8; // r7@2
  int v9; // r1@2
  Entity *v10; // r5@2
  Entity *v11; // r0@2
  bool v12; // zf@2
  signed int v13; // r2@7
  signed int v14; // r1@9
  bool v15; // zf@11
  unsigned int v17; // [sp+8h] [bp-20h]@2
  unsigned int v18; // [sp+Ch] [bp-1Ch]@2

  v5 = this;
  v6 = a2;
  v7 = 0;
  if ( Mob::_hurt(this, a2, a3, a4, a5) == 1 )
  {
    v8 = Entity::getLevel(v5);
    (*(void (__fastcall **)(unsigned int *, const EntityDamageSource *))(*(_DWORD *)v6 + 32))(&v17, v6);
    v10 = (Entity *)Level::fetchEntity(v8, v9, v17, v18, 0);
    v11 = (Entity *)*((_DWORD *)v5 + 128);
    v12 = v10 == 0;
    if ( v10 )
      v12 = v11 == 0;
    if ( !v12 )
    {
      if ( Entity::isRider(v11, v10) )
        return 1;
      v11 = (Entity *)*((_DWORD *)v5 + 128);
    }
    v13 = 0;
    if ( v11 != v10 )
      v13 = 1;
    v14 = 0;
    v7 = 1;
    if ( !v11 )
      v14 = 1;
    v15 = v10 == v5;
    if ( v10 != v5 )
      v15 = v10 == 0;
    if ( !v15 && (v13 | v14) == 1 )
      if ( ((*(int (__fastcall **)(Entity *))(*(_DWORD *)v10 + 488))(v10) != 319
         || !Abilities::getBool((int)v10 + 4320, (int **)&Abilities::INSTABUILD))
        && Entity::hasCategory((int)v10, 2) == 1 )
      {
        *((_QWORD *)v5 + 537) = *(_QWORD *)Entity::getUniqueID(v10);
      }
      return 1;
  }
  return v7;
}


void __fastcall Monster::~Monster(Monster *this)
{
  Monster::~Monster(this);
}


void __fastcall Monster::readAdditionalSaveData(Monster *this, const CompoundTag *a2)
{
  Monster::readAdditionalSaveData(this, a2);
}


signed int __fastcall Monster::isDarkEnoughToSpawn(Monster *this)
{
  Entity *v1; // r4@1
  int v2; // r0@1
  const BlockPos *v3; // r0@1
  unsigned int v4; // r6@1
  BlockSource *v5; // r0@1
  Dimension *v6; // r0@1
  int v7; // r5@1
  Weather *v8; // r0@1
  const BlockPos *v9; // r0@2
  signed int result; // r0@3
  Dimension v11[2]; // [sp+0h] [bp-30h]@2
  unsigned __int8 v12; // [sp+4h] [bp-2Ch]@2
  Dimension v13; // [sp+8h] [bp-28h]@2
  Dimension v14; // [sp+Ch] [bp-24h]@2
  unsigned __int8 v15; // [sp+10h] [bp-20h]@1
  char v16; // [sp+14h] [bp-1Ch]@1

  v1 = this;
  v2 = (*(int (**)(void))(*(_DWORD *)this + 52))();
  BlockPos::BlockPos((int)&v16, v2);
  v3 = (const BlockPos *)Entity::getRegion(v1);
  BlockSource::getRawBrightness((BlockSource *)&v15, v3, (int)&v16, 1);
  v4 = v15;
  v5 = (BlockSource *)Entity::getRegion(v1);
  v6 = (Dimension *)BlockSource::getDimension(v5);
  v7 = (int)v6;
  v8 = (Weather *)Dimension::getWeather(v6);
  if ( Weather::isLightning(v8) == 1 )
  {
    Dimension::getSkyDarken(&v14, v7);
    Dimension::getSkyDarken(&v13, v7);
    LOBYTE(v13) = 10;
    v9 = (const BlockPos *)Entity::getRegion(v1);
    BlockSource::getRawBrightness((BlockSource *)&v12, v9, (int)&v16, 1);
    v4 = v12;
    Dimension::getSkyDarken(v11, v7);
    LOBYTE(v11[0]) = v14;
  }
  result = 0;
  if ( v4 < 8 )
    result = 1;
  return result;
}


void __fastcall Monster::addAdditionalSaveData(Monster *this, CompoundTag *a2)
{
  Monster::addAdditionalSaveData(this, a2);
}


int __fastcall Monster::findAttackTarget(Monster *this)
{
  Entity *v1; // r5@1
  Dimension *v2; // r0@1
  int v3; // r0@1
  int v4; // r4@1

  v1 = this;
  v2 = (Dimension *)Entity::getDimension(this);
  v3 = Dimension::fetchNearestAttackablePlayer(v2, v1, 16.0);
  v4 = v3;
  if ( v3 && (*(int (__fastcall **)(Entity *, int))(*(_DWORD *)v1 + 252))(v1, v3) == 1 )
  {
    if ( Abilities::getBool(v4 + 4320, (int **)&Abilities::INVULNERABLE) == 1 )
      v4 = 0;
  }
  else
    v4 = 0;
  return v4;
}


void __fastcall Monster::addAdditionalSaveData(Monster *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  Monster *v3; // r5@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  Mob::addAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v7, "SpawnedByNight");
  CompoundTag::putBoolean((int)v2, (const void **)&v7, *((_BYTE *)v3 + 4161));
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
}


int __fastcall Monster::_getWalkTargetValue(Monster *this, const BlockPos *a2)
{
  const BlockPos *v2; // r4@1
  Monster *v3; // r6@1
  BlockSource *v4; // r5@1
  int v5; // r1@2
  int v6; // r2@2
  int result; // r0@5
  unsigned __int8 v13; // [sp+0h] [bp-20h]@2
  int v14; // [sp+4h] [bp-1Ch]@2
  int v15; // [sp+8h] [bp-18h]@2
  int v16; // [sp+Ch] [bp-14h]@2

  v2 = a2;
  v3 = this;
  v4 = (BlockSource *)Entity::getRegion(this);
  if ( Entity::getStatusFlag((int)v3, 47)
    || (v5 = *((_DWORD *)v2 + 1),
        v6 = *((_DWORD *)v2 + 2),
        v14 = *(_DWORD *)v2,
        v15 = v5 - 1,
        v16 = v6,
        BlockSource::getBlockID((BlockSource *)&v13, v4, (int)&v14),
        v13 != *(_BYTE *)(Block::mMagmaBlock + 4)) )
  {
    _R0 = BlockSource::getBrightness(v4, v2);
    __asm
    {
      VMOV.F32        S0, #0.5
      VMOV            S2, R0
      VSUB.F32        S0, S0, S2
    }
  }
  else
    __asm { VMOV.F32        S0, #-0.5 }
  __asm { VMOV            R0, S0 }
  return result;
}


void __fastcall Monster::~Monster(Monster *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


unsigned int __fastcall Monster::getExperienceReward(Monster *this)
{
  Entity *v1; // r4@1
  int v2; // r5@2
  Level *v3; // r0@2
  char *v4; // r0@2
  unsigned int result; // r0@2

  v1 = this;
  if ( *((_DWORD *)this + 861) < 1 )
  {
    result = 0;
  }
  else
    v2 = (*(int (__fastcall **)(Monster *))(*(_DWORD *)this + 1008))(this);
    v3 = (Level *)Entity::getLevel(v1);
    v4 = Level::getRandom(v3);
    result = ((Random::_genRandInt32((Random *)v4) & 1) + 1) * v2 + 5;
  return result;
}


int __fastcall Monster::normalTick(Monster *this)
{
  Entity *v1; // r4@1
  Level *v2; // r0@1
  int result; // r0@1
  Level *v4; // r0@2

  v1 = this;
  Mob::normalTick(this);
  v2 = (Level *)Entity::getLevel(v1);
  result = Level::isClientSide(v2);
  if ( !result )
  {
    v4 = (Level *)Entity::getLevel(v1);
    result = Level::getDifficulty(v4);
    if ( !result )
    {
      result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 180))(v1);
      if ( !result )
        result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 44))(v1);
    }
  }
  return result;
}


int __fastcall Monster::aiStep(Monster *this)
{
  Mob *v1; // r4@1

  v1 = this;
  Mob::updateAttackAnim(this);
  _R0 = (*(int (__fastcall **)(Mob *, signed int))(*(_DWORD *)v1 + 260))(v1, 1065353216);
  __asm
  {
    VMOV.F32        S0, #0.5
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    *((_DWORD *)v1 + 999) += 2;
  return j_j_j__ZN3Mob6aiStepEv_0(v1);
}


int __fastcall Monster::canExistInPeaceful(Monster *this)
{
  return 0;
}


signed int __fastcall Monster::checkSpawnRules(Monster *this, bool a2)
{
  Mob *v2; // r5@1
  bool v3; // r4@1
  signed int result; // r0@2

  v2 = this;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1196))() == 1 )
    result = Mob::checkSpawnRules(v2, v3);
  else
    result = 0;
  return result;
}
