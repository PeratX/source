

signed int __fastcall Rabbit::readyToEat(Rabbit *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 1073);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


signed int __fastcall Rabbit::getEntityTypeId(Rabbit *this)
{
  return 4882;
}


int __fastcall Rabbit::Rabbit(int a1, int a2, int *a3)
{
  int v3; // r4@1

  v3 = a1;
  Animal::Animal(a1, a2, a3);
  *(_DWORD *)v3 = &off_26EF03C;
  *(_DWORD *)(v3 + 4296) = 0;
  *(_DWORD *)(v3 + 248) = 53;
  *(_DWORD *)(v3 + 4292) = 0;
  Mob::setSpeedModifier((Mob *)v3, 0.0);
  return v3;
}


void __fastcall Rabbit::addAdditionalSaveData(Rabbit *this, CompoundTag *a2)
{
  Rabbit::addAdditionalSaveData(this, a2);
}


int __fastcall Rabbit::getJumpCompletion(Rabbit *this, float a2)
{
  Rabbit *v3; // r4@1
  int result; // r0@2

  _R5 = a2;
  v3 = this;
  _R0 = Entity::getJumpDuration(this);
  if ( _R0 )
  {
    _R1 = (int)v3 + 3492;
    __asm
    {
      VMOV            S0, R5
      VMOV            S4, R0
      VLDR            S2, [R1]
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VADD.F32        S0, S2, S0
      VDIV.F32        S0, S0, S4
      VMOV            R0, S0
    }
  }
  else
      VLDR            S0, =0.0
  return result;
}


signed int __fastcall Rabbit::getRandomRabbitType(Rabbit *this)
{
  Rabbit *v1; // r5@1
  BlockSource *v2; // r4@1
  int v3; // r0@1
  Biome *v4; // r4@1
  unsigned int v5; // r5@1
  signed int result; // r0@2
  char v7; // [sp+4h] [bp-1Ch]@1

  v1 = this;
  v2 = (BlockSource *)Entity::getRegion(this);
  v3 = (*(int (__fastcall **)(Rabbit *))(*(_DWORD *)v1 + 52))(v1);
  BlockPos::BlockPos((int)&v7, v3);
  v4 = (Biome *)BlockSource::getBiome(v2, (const BlockPos *)&v7);
  v5 = Random::_genRandInt32((Rabbit *)((char *)v1 + 552)) % 0x64;
  if ( Biome::isSnowCovered(v4) == 1 )
  {
    result = 3;
    if ( v5 < 0x50 )
      result = 1;
  }
  else if ( Biome::getBiomeType(v4) == 1 )
    result = 4;
  else
    result = 2;
    if ( v5 < 0x5A )
      result = 5;
    if ( v5 < 0x32 )
      result = 0;
  return result;
}


void __fastcall Rabbit::addAdditionalSaveData(Rabbit *this, CompoundTag *a2)
{
  CompoundTag *v2; // r6@1
  Rabbit *v3; // r5@1
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
  Mob::addAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v11, "MoreCarrotTicks");
  CompoundTag::putInt((int)v2, (const void **)&v11, *((_DWORD *)v3 + 1073));
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
  sub_21E94B4((void **)&v10, "CarrotsEaten");
  CompoundTag::putInt((int)v2, (const void **)&v10, *((_DWORD *)v3 + 1074));
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
}


void __fastcall Rabbit::~Rabbit(Rabbit *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall Rabbit::onSynchedDataUpdate(Rabbit *this, int a2)
{
  int v2; // r4@1
  Mob *v3; // r5@1
  float v4; // r1@2

  v2 = a2;
  v3 = this;
  if ( a2 == 10 && Entity::getJumpDuration(this) >= 1 )
    Mob::_doSprintParticleEffect(v3, v4);
  j_j_j__ZN6Entity19onSynchedDataUpdateEi_0(v3, v2);
}


void __fastcall Rabbit::~Rabbit(Rabbit *this)
{
  Rabbit::~Rabbit(this);
}


void __fastcall Rabbit::readAdditionalSaveData(Rabbit *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  Rabbit *v3; // r6@1
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
  Mob::readAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v11, "MoreCarrotTicks");
  *((_DWORD *)v3 + 1073) = CompoundTag::getInt((int)v2, (const void **)&v11);
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
  sub_21E94B4((void **)&v10, "CarrotsEaten");
  *((_DWORD *)v3 + 1074) = CompoundTag::getInt((int)v2, (const void **)&v10);
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
}


Rabbit *__fastcall Rabbit::newServerAiStep(Rabbit *this)
{
  Rabbit *v1; // r4@1
  int *v2; // r5@1
  Rabbit *result; // r0@3

  v1 = this;
  Mob::newServerAiStep(this);
  v2 = (int *)((char *)v1 + 4292);
  if ( *((_DWORD *)v1 + 1074) < 6 )
  {
    result = (Rabbit *)*v2;
    if ( *v2 < 1 )
      return result;
  }
  else
    *v2 = 2000;
  result = (Rabbit *)(*v2 - Random::_genRandInt32((Rabbit *)((char *)v1 + 552)) % 3);
  *v2 = (int)result;
  if ( (signed int)result <= 0 )
    result = (Rabbit *)((char *)v1 + 4296);
    *((_DWORD *)v1 + 1074) = 0;
    *v2 = 0;
  return result;
}


void __fastcall Rabbit::onSynchedDataUpdate(Rabbit *this, int a2)
{
  Rabbit::onSynchedDataUpdate(this, a2);
}


void __fastcall Rabbit::readAdditionalSaveData(Rabbit *this, const CompoundTag *a2)
{
  Rabbit::readAdditionalSaveData(this, a2);
}


signed int __fastcall Rabbit::wantsMoreFood(Rabbit *this)
{
  signed int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 1074);
  result = 0;
  if ( v1 < 6 )
    result = 1;
  return result;
}


int __fastcall Rabbit::eatCarrot(int result)
{
  ++*(_DWORD *)(result + 4296);
  *(_DWORD *)(result + 4292) = 40;
  return result;
}


int __fastcall Rabbit::doHurtTarget(Rabbit *this, Entity *a2)
{
  return 0;
}
