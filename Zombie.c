

void __fastcall Zombie::die(Zombie *this, const EntityDamageSource *a2)
{
  Zombie::die(this, a2);
}


void __fastcall Zombie::reloadHardcoded(int a1, int a2)
{
  int v2; // r4@1
  AttributeInstance *v9; // r5@2
  int v10; // r5@2
  unsigned int *v11; // r1@3
  unsigned int v12; // r0@5
  unsigned int *v13; // r6@9
  unsigned int v14; // r0@11
  AttributeInstance *v15; // r4@17
  int v16; // r4@17
  unsigned int *v17; // r1@18
  unsigned int v18; // r0@20
  unsigned int *v19; // r5@24
  unsigned int v20; // r0@26
  int v21; // [sp+Ch] [bp-44h]@17
  int v22; // [sp+10h] [bp-40h]@17
  char v23; // [sp+14h] [bp-3Ch]@17
  int v24; // [sp+18h] [bp-38h]@17
  int v25; // [sp+1Ch] [bp-34h]@2
  int v26; // [sp+20h] [bp-30h]@2
  char v27; // [sp+24h] [bp-2Ch]@2
  int v28; // [sp+28h] [bp-28h]@2
  float v29; // [sp+2Ch] [bp-24h]@16
  float v30; // [sp+30h] [bp-20h]@2
  char v31; // [sp+34h] [bp-1Ch]@2

  v2 = a1;
  if ( a2 == 2 )
  {
    _R0 = Random::_genRandInt32((Random *)(a1 + 552));
    __asm
    {
      VMOV            S0, R0
      VLDR            D8, =2.32830644e-10
      VLDR            S2, =0.05
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D8
      VCVT.F32.F64    S0, D0
      VMUL.F32        S0, S0, S2
      VSTR            S0, [SP,#0x50+var_20]
    }
    _R0 = Random::_genRandInt32((Random *)(v2 + 552));
      VMOV.F32        S2, #1.5
      VSTR            S0, [SP,#0x50+var_24]
    v9 = (AttributeInstance *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)v2 + 1000))(
                                v2,
                                &SharedAttributes::KNOCKBACK_RESISTANCE);
    v26 = 0;
    v25 = 2;
    std::__shared_ptr<AttributeModifier,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<AttributeModifier>,mce::UUID const&,char const(&)[17],float &,int,int>(
      (int)&v27,
      (int)&v31,
      (int)&Zombie::SPAWN_BONUS_UUID,
      "RandomSpawnBonus",
      (int)&v30,
      &v26,
      &v25);
    AttributeInstance::addModifier(v9, (const AttributeModifier **)&v27);
    v10 = v28;
    if ( v28 )
      v11 = (unsigned int *)(v28 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 == 1 )
        v13 = (unsigned int *)(v10 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        }
        else
          v14 = (*v13)--;
        if ( v14 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
      VMOV.F32        S0, #1.0
      VLDR            S2, [SP,#0x50+var_24]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v15 = (AttributeInstance *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)v2 + 1000))(
                                   v2,
                                   &SharedAttributes::FOLLOW_RANGE);
      v21 = 2;
      v22 = 2;
      std::__shared_ptr<AttributeModifier,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<AttributeModifier>,mce::UUID const&,char const(&)[17],float &,int,int>(
        (int)&v23,
        (int)&v31,
        (int)&Zombie::SPAWN_BONUS_UUID,
        "RandomSpawnBonus",
        (int)&v29,
        &v22,
        &v21);
      AttributeInstance::addModifier(v15, (const AttributeModifier **)&v23);
      v16 = v24;
      if ( v24 )
        v17 = (unsigned int *)(v24 + 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 == 1 )
          v19 = (unsigned int *)(v16 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          if ( &pthread_create )
          {
            __dmb();
            do
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
          }
          else
            v20 = (*v19)--;
          if ( v20 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  }
}


int __fastcall Zombie::getRidingHeight(Zombie *this)
{
  Entity *v1; // r4@1
  int result; // r0@3

  v1 = this;
  Entity::isBaby(this);
  _R0 = Entity::getRidingHeight(v1);
  __asm
  {
    VMOV.F32        S0, #-0.5
    VMOV            S2, R0
    VADD.F32        S0, S2, S0
  }
  if ( !_ZF )
    __asm { VMOVNE.F32      S0, S2 }
  __asm { VMOV            R0, S0 }
  return result;
}


HumanoidMonster *__fastcall Zombie::Zombie(HumanoidMonster *a1, EntityDefinitionGroup *a2, const EntityDefinitionIdentifier *a3)
{
  const EntityDefinitionIdentifier *v3; // r6@1
  HumanoidMonster *v4; // r4@1
  int v5; // r8@2
  _BYTE *v6; // r0@2
  signed __int16 v7; // r7@2
  int v8; // r1@2
  unsigned int v9; // r0@4
  char *v10; // r0@9
  int v11; // r0@11
  unsigned int v12; // r1@11
  unsigned int v13; // r1@13
  signed __int16 v14; // r2@13
  unsigned int v15; // r1@14
  unsigned int v16; // r0@17

  v3 = a3;
  v4 = a1;
  HumanoidMonster::HumanoidMonster(a1, a2, a3);
  *(_DWORD *)v4 = &off_26FB898;
  *((_DWORD *)v4 + 62) = 16;
  *((_DWORD *)v4 + 43) |= 0x8004u;
  if ( !SynchedEntityData::_find((HumanoidMonster *)((char *)v4 + 176), 37) )
  {
    SynchedEntityData::_resizeToContain((HumanoidMonster *)((char *)v4 + 176), 37);
    v5 = *((_DWORD *)v4 + 44);
    v6 = operator new(0xCu);
    v7 = 37;
    v6[4] = 1;
    *((_WORD *)v6 + 3) = 37;
    v6[8] = 1;
    *(_DWORD *)v6 = &off_26F0DE0;
    *((_WORD *)v6 + 5) = 0;
    v8 = *(_DWORD *)(v5 + 148);
    *(_DWORD *)(v5 + 148) = v6;
    if ( v8 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
    v9 = *((_WORD *)v4 + 94);
    if ( v9 >= 0x25 )
      LOWORD(v9) = 37;
    *((_WORD *)v4 + 94) = v9;
    if ( (unsigned int)*((_WORD *)v4 + 95) > 0x25 )
      v7 = *((_WORD *)v4 + 95);
    *((_WORD *)v4 + 95) = v7;
  }
  v10 = EntityTypeFromString((const void **)v3 + 1);
  if ( v10 == (char *)199471 )
    v11 = SynchedEntityData::_get((HumanoidMonster *)((char *)v4 + 176), 37);
    v15 = *(_DWORD *)(v11 + 4);
    if ( (unsigned __int8)v15 != 1 || *(_WORD *)(v11 + 10) == 2 )
      goto LABEL_22;
    v13 = v15 >> 16;
    v14 = 2;
  else
    if ( v10 != (char *)199456 )
    v12 = *(_DWORD *)(v11 + 4);
    if ( (unsigned __int8)v12 != 1 || !*(_WORD *)(v11 + 10) )
    v13 = v12 >> 16;
    v14 = 0;
  *(_WORD *)(v11 + 10) = v14;
  *(_BYTE *)(v11 + 8) = 1;
  v16 = *((_WORD *)v4 + 94);
  if ( v16 >= v13 )
    LOWORD(v16) = v13;
  *((_WORD *)v4 + 94) = v16;
  if ( *((_WORD *)v4 + 95) > v13 )
    LOWORD(v13) = *((_WORD *)v4 + 95);
  *((_WORD *)v4 + 95) = v13;
LABEL_22:
  *((_DWORD *)v4 + 996) = 1065353216;
  return v4;
}


void __fastcall Zombie::~Zombie(Zombie *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall Zombie::~Zombie(Zombie *this)
{
  Zombie::~Zombie(this);
}


signed int __fastcall Zombie::useNewAi(Zombie *this)
{
  return 1;
}


unsigned int __fastcall Zombie::getExperienceReward(Zombie *this)
{
  Entity *v1; // r4@1
  signed int v2; // r6@2
  int v3; // r5@4
  Level *v4; // r0@4
  char *v5; // r0@4
  unsigned int result; // r0@4

  v1 = this;
  if ( *((_DWORD *)this + 861) < 1 )
  {
    result = 0;
  }
  else
    v2 = 5;
    if ( Entity::isBaby(this) )
      v2 = 12;
    v3 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 1008))(v1);
    v4 = (Level *)Entity::getLevel(v1);
    v5 = Level::getRandom(v4);
    result = v2 + ((Random::_genRandInt32((Random *)v5) & 1) + 1) * v3;
  return result;
}


void __fastcall Zombie::reloadHardcoded(int a1, int a2)
{
  Zombie::reloadHardcoded(a1, a2);
}


unsigned int __fastcall Zombie::setZombieType(int a1, unsigned __int16 a2)
{
  int v2; // r4@1
  unsigned __int16 v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = a1;
  v3 = a2;
  result = SynchedEntityData::_get((SynchedEntityData *)(a1 + 176), 37);
  v5 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v5 == 1 && *(_WORD *)(result + 10) != v3 )
  {
    *(_WORD *)(result + 10) = v3;
    *(_BYTE *)(result + 8) = 1;
    v6 = v5 >> 16;
    v7 = *(_WORD *)(v2 + 188);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *(_WORD *)(v2 + 188) = v7;
    result = *(_WORD *)(v2 + 190);
    if ( result > v6 )
      LOWORD(v6) = *(_WORD *)(v2 + 190);
    *(_WORD *)(v2 + 190) = v6;
  }
  return result;
}


void __fastcall Zombie::die(Zombie *this, const EntityDamageSource *a2)
{
  const EntityDamageSource *v2; // r4@1
  Entity *v3; // r5@1
  int v4; // r6@1
  int v5; // r1@1
  int v6; // r0@1
  Entity *v7; // r6@1
  Level *v8; // r0@4
  unsigned __int64 *v9; // r0@4
  void (__fastcall *v10)(Entity *, char *, signed int); // r7@5
  char v11; // [sp+8h] [bp-68h]@5
  int v12; // [sp+10h] [bp-60h]@9
  void *v13; // [sp+2Ch] [bp-44h]@7
  void *ptr; // [sp+3Ch] [bp-34h]@5
  unsigned int v15; // [sp+50h] [bp-20h]@1
  unsigned int v16; // [sp+54h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  v4 = Entity::getLevel(this);
  (*(void (__fastcall **)(unsigned int *, const EntityDamageSource *))(*(_DWORD *)v2 + 32))(&v15, v2);
  v6 = Level::fetchEntity(v4, v5, v15, v16, 0);
  v7 = (Entity *)v6;
  if ( v6 )
  {
    if ( EntityClassTree::isInstanceOf(v6, 2849) == 1 && Entity::isPowered(v7) == 1 )
    {
      v8 = (Level *)Entity::getLevel(v3);
      v9 = (unsigned __int64 *)Level::getGameRules(v8);
      if ( GameRules::getBool(v9, (int **)&GameRules::DO_MOB_LOOT) == 1 )
      {
        v10 = *(void (__fastcall **)(Entity *, char *, signed int))(*(_DWORD *)v3 + 452);
        ItemInstance::ItemInstance((ItemInstance *)&v11, Item::mSkull, 1, 2);
        v10(v3, &v11, 1065353216);
        if ( ptr )
          operator delete(ptr);
        if ( v13 )
          operator delete(v13);
        if ( v12 )
          (*(void (**)(void))(*(_DWORD *)v12 + 4))();
        v12 = 0;
      }
    }
  }
  Mob::die(v3, v2);
}


signed int __fastcall Zombie::getEntityTypeId(Zombie *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = Entity::getVariant(this);
  v2 = 1;
  if ( !v1 )
    v2 = 199456;
  if ( v1 == 2 )
    v2 = 199471;
  return v2;
}


int __fastcall Zombie::getArmorValue(Zombie *this)
{
  int result; // r0@1

  result = Mob::getArmorValue(this) + 2;
  if ( result > 20 )
    result = 20;
  return result;
}
