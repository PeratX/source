

int __fastcall PigZombie::_alert(PigZombie *this, Mob *a2)
{
  PigZombie *v2; // r5@1
  Mob *v3; // r4@1

  v2 = this;
  v3 = a2;
  (*(void (**)(void))(*(_DWORD *)this + 340))();
  *((_DWORD *)v2 + 1076) = 400 * (Random::_genRandInt32((PigZombie *)((char *)v2 + 552)) % 0x190);
  *((_DWORD *)v2 + 1077) = Random::_genRandInt32((PigZombie *)((char *)v2 + 552)) % 0x28;
  return (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v2 + 948))(v2, v3);
}


Entity *__fastcall PigZombie::findAttackTarget(PigZombie *this)
{
  PigZombie *v1; // r5@1
  int v2; // r6@2
  Entity *v3; // r0@2
  Entity *v4; // r4@2

  v1 = this;
  if ( *((_DWORD *)this + 1078) )
    return 0;
  v2 = *((_DWORD *)this + 1076);
  v3 = (Entity *)Monster::findAttackTarget(this);
  v4 = v3;
  if ( v2 )
    return v4;
  if ( !v3 )
  _R0 = Entity::distanceTo(v3, (PigZombie *)((char *)v1 + 72));
  __asm
  {
    VMOV.F32        S0, #5.0
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) )
    v4 = 0;
  return v4;
}


void __fastcall PigZombie::addAdditionalSaveData(PigZombie *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  PigZombie *v3; // r5@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  HumanoidMonster::addAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v7, "Anger");
  CompoundTag::putShort((int)v2, (const void **)&v7, *((_WORD *)v3 + 2152));
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


unsigned int __fastcall PigZombie::getExperienceReward(PigZombie *this)
{
  Zombie *v1; // r4@1
  unsigned int result; // r0@2

  v1 = this;
  if ( *((_DWORD *)this + 861) >= 1 )
  {
    if ( Entity::isBaby(this) )
      result = 12;
    else
      result = j_j_j__ZNK6Zombie19getExperienceRewardEv(v1);
  }
  else
    result = 0;
  return result;
}


void __fastcall PigZombie::addAdditionalSaveData(PigZombie *this, CompoundTag *a2)
{
  PigZombie::addAdditionalSaveData(this, a2);
}


signed int __fastcall PigZombie::checkSpawnRules(PigZombie *this, bool a2)
{
  const AABB *v2; // r6@1
  BlockSource *v3; // r5@1
  signed int v4; // r4@1
  char *v5; // r0@2

  v2 = (PigZombie *)((char *)this + 264);
  v3 = (BlockSource *)Entity::getRegion(this);
  v4 = 0;
  if ( BlockSource::isUnobstructedByEntities(v3, v2, 0) == 1 )
  {
    v5 = BlockSource::fetchAABBs(v3, v2, 1);
    if ( (unsigned int)*(_QWORD *)v5 == *(_QWORD *)v5 >> 32 )
      v4 = 1;
  }
  return v4;
}


signed int __fastcall PigZombie::getAttackTime(PigZombie *this)
{
  return 40;
}


void __fastcall PigZombie::readAdditionalSaveData(PigZombie *this, const CompoundTag *a2)
{
  PigZombie::readAdditionalSaveData(this, a2);
}


void __fastcall PigZombie::~PigZombie(PigZombie *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


HumanoidMonster *__fastcall PigZombie::PigZombie(HumanoidMonster *a1, EntityDefinitionGroup *a2, const EntityDefinitionIdentifier *a3)
{
  HumanoidMonster *v3; // r4@1

  v3 = a1;
  Zombie::Zombie(a1, a2, a3);
  *(_DWORD *)v3 = &off_26F88B4;
  *((_DWORD *)v3 + 1076) = 0;
  *((_DWORD *)v3 + 1077) = 0;
  *((_DWORD *)v3 + 43) |= 0x4004u;
  *((_DWORD *)v3 + 1078) = 60;
  Zombie::setZombieType((int)v3, 3u);
  *((_DWORD *)v3 + 996) = 1067030938;
  return v3;
}


void __fastcall PigZombie::~PigZombie(PigZombie *this)
{
  PigZombie::~PigZombie(this);
}


signed int __fastcall PigZombie::_hurt(PigZombie *this, const EntityDamageSource *a2, __int64 a3, bool a4)
{
  const EntityDamageSource *v4; // r11@1
  int v5; // r4@2
  int v6; // r5@2
  int v7; // r1@2
  int v8; // r4@2
  BlockSource *v9; // r5@3
  char *v10; // r5@3
  _DWORD *v11; // r8@3
  int v12; // r7@5
  __int64 v14; // [sp+4h] [bp-64h]@1
  Entity *v15; // [sp+Ch] [bp-5Ch]@1
  int v16; // [sp+10h] [bp-58h]@3
  signed int v17; // [sp+14h] [bp-54h]@3
  int v18; // [sp+18h] [bp-50h]@3
  char v19; // [sp+1Ch] [bp-4Ch]@3
  unsigned int v20; // [sp+38h] [bp-30h]@2
  unsigned int v21; // [sp+3Ch] [bp-2Ch]@2

  v14 = a3;
  v4 = a2;
  v15 = this;
  if ( (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)a2 + 8))(a2) != 1 )
    return Monster::_hurt(v15, v4, v14, SHIDWORD(v14), a4);
  v5 = Entity::getLevel(v15);
  (*(void (__fastcall **)(unsigned int *, const EntityDamageSource *))(*(_DWORD *)v4 + 32))(&v20, v4);
  v6 = 0;
  v8 = Level::fetchEntity(v5, v7, v20, v21, 0);
  if ( v8 )
  {
    v9 = (BlockSource *)Entity::getRegion(v15);
    v16 = 1094713344;
    v17 = 1094713344;
    v18 = 1094713344;
    AABB::grow((AABB *)&v19, (Entity *)((char *)v15 + 264), (int)&v16);
    v10 = BlockSource::fetchEntities(v9, v15, (const AABB *)&v19);
    v11 = (_DWORD *)*(_QWORD *)v10;
    if ( v11 != (_DWORD *)(*(_QWORD *)v10 >> 32) )
    {
      do
      {
        if ( (*(int (**)(void))(*(_DWORD *)*v11 + 488))() == 68388 )
        {
          v12 = *v11;
          (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)*v11 + 340))(*v11, v8);
          *(_DWORD *)(v12 + 4304) = 400 * (Random::_genRandInt32((Random *)(v12 + 552)) % 0x190);
          *(_DWORD *)(v12 + 4308) = Random::_genRandInt32((Random *)(v12 + 552)) % 0x28;
          (*(void (__fastcall **)(int, int))(*(_DWORD *)v12 + 948))(v12, v8);
        }
        ++v11;
      }
      while ( v11 != *((_DWORD **)v10 + 1) );
    }
  }
  return v6;
}


int __fastcall PigZombie::normalTick(PigZombie *this)
{
  Monster *v1; // r4@1
  signed int v2; // r0@1
  signed int v3; // r0@3
  int v4; // r0@4
  void (__fastcall *v5)(Monster *, signed int, char *, signed int); // r6@5
  char v7; // [sp+8h] [bp-20h]@5

  v1 = this;
  v2 = *((_DWORD *)this + 1078);
  if ( v2 >= 1 )
    *((_DWORD *)v1 + 1078) = v2 - 1;
  v3 = *((_DWORD *)v1 + 1077);
  if ( v3 >= 1 )
  {
    v4 = v3 - 1;
    *((_DWORD *)v1 + 1077) = v4;
    if ( !v4 )
    {
      v5 = *(void (__fastcall **)(Monster *, signed int, char *, signed int))(*(_DWORD *)v1 + 556);
      Entity::getAttachPos((AABB *)&v7, (int)v1, 3, 0);
      v5(v1, 19, &v7, -1);
    }
  }
  return Monster::normalTick(v1);
}


signed int __fastcall PigZombie::getEntityTypeId(PigZombie *this)
{
  return 68388;
}


void __fastcall PigZombie::readAdditionalSaveData(PigZombie *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  PigZombie *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  HumanoidMonster::readAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v7, "Anger");
  *((_DWORD *)v3 + 1076) = CompoundTag::getShort((int)v2, (const void **)&v7);
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
