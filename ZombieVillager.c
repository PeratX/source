

_BOOL4 __fastcall ZombieVillager::isConverting(ZombieVillager *this)
{
  unsigned __int64 *v1; // r4@1
  _BOOL4 v2; // r5@1
  void *v3; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v1 = (unsigned __int64 *)*((_DWORD *)this + 12);
  sub_21E94B4((void **)&v7, "minecraft:transformation");
  v2 = EntityDefinitionDescriptor::hasComponent(v1, (int **)&v7);
  v3 = (void *)(v7 - 12);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  return v2;
}


void __fastcall ZombieVillager::handleEntityEvent(MinecraftEventing *a1, signed int a2, Mob *a3)
{
  ZombieVillager::handleEntityEvent(a1, a2, a3);
}


HumanoidMonster *__fastcall ZombieVillager::ZombieVillager(HumanoidMonster *a1, EntityDefinitionGroup *a2, const EntityDefinitionIdentifier *a3)
{
  HumanoidMonster *v3; // r4@1

  v3 = a1;
  Zombie::Zombie(a1, a2, a3);
  *(_DWORD *)v3 = &off_26FBD50;
  *((_DWORD *)v3 + 1076) = 0;
  *((_BYTE *)v3 + 4308) = 0;
  *((_DWORD *)v3 + 43) |= 0x4004u;
  Zombie::setZombieType((int)v3, 1u);
  *((_DWORD *)v3 + 996) = 1067030938;
  return v3;
}


void __fastcall ZombieVillager::readAdditionalSaveData(ZombieVillager *this, const CompoundTag *a2)
{
  ZombieVillager::readAdditionalSaveData(this, a2);
}


signed int __fastcall ZombieVillager::getEntityTypeId(ZombieVillager *this)
{
  return 199468;
}


void __fastcall ZombieVillager::~ZombieVillager(ZombieVillager *this)
{
  ZombieVillager::~ZombieVillager(this);
}


void __fastcall ZombieVillager::addAdditionalSaveData(ZombieVillager *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  ZombieVillager *v3; // r5@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  HumanoidMonster::addAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v7, "SpawnedFromVillage");
  CompoundTag::putBoolean((int)v2, (const void **)&v7, *((_BYTE *)v3 + 4308));
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


void __fastcall ZombieVillager::handleEntityEvent(MinecraftEventing *a1, signed int a2, Mob *a3)
{
  MinecraftEventing *v3; // r4@1
  void (__fastcall *v4)(MinecraftEventing *, signed int, float *, signed int); // r5@2
  float v10; // [sp+4h] [bp-1Ch]@2

  v3 = a1;
  if ( a2 == 16 )
  {
    v4 = *(void (__fastcall **)(MinecraftEventing *, signed int, float *, signed int))(*(_DWORD *)a1 + 556);
    _R0 = (*(int (**)(void))(*(_DWORD *)a1 + 52))();
    __asm
    {
      VMOV.F32        S0, #0.5
      VLDR            S2, [R0]
      VLDR            S4, [R0,#4]
      VLDR            S6, [R0,#8]
      VADD.F32        S2, S2, S0
      VADD.F32        S4, S4, S0
      VADD.F32        S0, S6, S0
      VSTR            S2, [SP,#0x20+var_1C]
      VSTR            S4, [SP,#0x20+var_18]
      VSTR            S0, [SP,#0x20+var_14]
    }
    v4(v3, 58, &v10, -1);
  }
  else
    j_j_j__ZN3Mob17handleEntityEventE11EntityEventi(a1, a2, a3);
}


int __fastcall ZombieVillager::setSpawnedFromVillage(int result)
{
  *(_BYTE *)(result + 4308) = 1;
  return result;
}


void __fastcall ZombieVillager::~ZombieVillager(ZombieVillager *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall ZombieVillager::readAdditionalSaveData(ZombieVillager *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  ZombieVillager *v3; // r6@1
  _BOOL4 v4; // r5@1
  void *v5; // r0@1
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  HumanoidMonster::readAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v8, "SpawnedFromVillage");
  v4 = CompoundTag::getBoolean((int)v2, (const void **)&v8);
  v5 = (void *)(v8 - 12);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( v4 == 1 )
    *((_BYTE *)v3 + 4308) = 1;
}


void __fastcall ZombieVillager::addAdditionalSaveData(ZombieVillager *this, CompoundTag *a2)
{
  ZombieVillager::addAdditionalSaveData(this, a2);
}
