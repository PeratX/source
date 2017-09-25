

int __fastcall EnderMan::canBeAffectedByArrow(EnderMan *this, const MobEffectInstance *a2)
{
  return 0;
}


void __fastcall EnderMan::addAdditionalSaveData(EnderMan *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  EnderMan *v3; // r5@1
  SynchedEntityData *v4; // r5@1
  unsigned __int8 v5; // r6@1
  void *v6; // r0@1
  unsigned __int8 v7; // r0@2
  void *v8; // r0@2
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  int v13; // [sp+4h] [bp-2Ch]@2
  int v14; // [sp+Ch] [bp-24h]@1

  v2 = a2;
  v3 = this;
  Monster::addAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v14, "carried");
  v4 = (EnderMan *)((char *)v3 + 176);
  v5 = SynchedEntityData::getShort(v4, 23);
  SynchedEntityData::getShort(v4, 24);
  CompoundTag::putShort((int)v2, (const void **)&v14, v5);
  v6 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v14 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  sub_21E94B4((void **)&v13, "carriedData");
  SynchedEntityData::getShort(v4, 23);
  v7 = SynchedEntityData::getShort(v4, 24);
  CompoundTag::putShort((int)v2, (const void **)&v13, v7);
  v8 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v13 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


int __fastcall EnderMan::aiStep(EnderMan *this)
{
  *((_BYTE *)this + 4080) = 0;
  return j_j_j__ZN7Monster6aiStepEv(this);
}


int __fastcall EnderMan::EnderMan(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  int v5; // r7@2
  _BYTE *v6; // r0@2
  signed __int16 v7; // r6@2
  int v8; // r1@2
  unsigned int v9; // r0@4
  int v10; // r6@10
  _BYTE *v11; // r0@10
  signed __int16 v12; // r5@10
  int v13; // r1@10
  unsigned int v14; // r0@12

  v3 = a1;
  Monster::Monster(a1, a2, a3);
  v4 = (int *)(v3 + 176);
  *(_DWORD *)v3 = &off_26F626C;
  *(_DWORD *)(v3 + 248) = 26;
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 23) )
  {
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 23);
    v5 = *v4;
    v6 = operator new(0xCu);
    v7 = 23;
    v6[4] = 1;
    *((_WORD *)v6 + 3) = 23;
    v6[8] = 1;
    *(_DWORD *)v6 = &off_26F0DE0;
    *((_WORD *)v6 + 5) = 0;
    v8 = *(_DWORD *)(v5 + 92);
    *(_DWORD *)(v5 + 92) = v6;
    if ( v8 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
    v9 = *(_WORD *)(v3 + 188);
    if ( v9 >= 0x17 )
      LOWORD(v9) = 23;
    *(_WORD *)(v3 + 188) = v9;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x17 )
      v7 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v7;
  }
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 24) )
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 24);
    v10 = *v4;
    v11 = operator new(0xCu);
    v12 = 24;
    v11[4] = 1;
    *((_WORD *)v11 + 3) = 24;
    v11[8] = 1;
    *(_DWORD *)v11 = &off_26F0DE0;
    *((_WORD *)v11 + 5) = 0;
    v13 = *(_DWORD *)(v10 + 96);
    *(_DWORD *)(v10 + 96) = v11;
    if ( v13 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 4))(v13);
    v14 = *(_WORD *)(v3 + 188);
    if ( v14 >= 0x18 )
      LOWORD(v14) = 24;
    *(_WORD *)(v3 + 188) = v14;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x18 )
      v12 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v12;
  *(_BYTE *)(v3 + 4304) = 0;
  if ( !EnderMan::mMayTakeIsSetup )
    EnderMan::mMayTakeIsSetup = 1;
    EnderMan::mMayTake[*(_BYTE *)(Block::mGrass + 4)] = 1;
    EnderMan::mMayTake[*(_BYTE *)(Block::mDirt + 4)] = 1;
    EnderMan::mMayTake[*(_BYTE *)(Block::mSand + 4)] = 1;
    EnderMan::mMayTake[*(_BYTE *)(Block::mGravel + 4)] = 1;
    EnderMan::mMayTake[*(_BYTE *)(Block::mYellowFlower + 4)] = 1;
    EnderMan::mMayTake[*(_BYTE *)(Block::mRedFlower + 4)] = 1;
    EnderMan::mMayTake[*(_BYTE *)(Block::mBrownMushroom + 4)] = 1;
    EnderMan::mMayTake[*(_BYTE *)(Block::mRedMushroom + 4)] = 1;
    EnderMan::mMayTake[*(_BYTE *)(Block::mTNT + 4)] = 1;
    EnderMan::mMayTake[*(_BYTE *)(Block::mCactus + 4)] = 1;
    EnderMan::mMayTake[*(_BYTE *)(Block::mClay + 4)] = 1;
    EnderMan::mMayTake[*(_BYTE *)(Block::mPumpkin + 4)] = 1;
    EnderMan::mMayTake[*(_BYTE *)(Block::mMelon + 4)] = 1;
    EnderMan::mMayTake[*(_BYTE *)(Block::mMycelium + 4)] = 1;
  *(_DWORD *)(v3 + 3984) = 1066192077;
  *(_DWORD *)(v3 + 328) = 1065877504;
  return v3;
}


int __fastcall EnderMan::getCarryingBlock(EnderMan *this, int a2)
{
  SynchedEntityData *v2; // r5@1
  EnderMan *v3; // r4@1
  char v4; // r6@1
  int result; // r0@1

  v2 = (SynchedEntityData *)(a2 + 176);
  v3 = this;
  v4 = SynchedEntityData::getShort((SynchedEntityData *)(a2 + 176), 23);
  result = SynchedEntityData::getShort(v2, 24);
  *(_BYTE *)v3 = v4;
  *((_BYTE *)v3 + 1) = result;
  return result;
}


void __fastcall EnderMan::~EnderMan(EnderMan *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall EnderMan::getAmbientSound(EnderMan *this)
{
  Mob *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( Entity::isAngry(this) )
    result = 50;
  else
    result = Mob::getAmbientSound(v1);
  return result;
}


signed int __fastcall EnderMan::_hurt(EnderMan *this, const EntityDamageSource *a2, int a3, int a4, bool a5)
{
  const EntityDamageSource *v5; // r7@1
  EnderMan *v6; // r4@1
  int v7; // r8@1
  int v8; // r6@1
  Level *v9; // r0@3
  TeleportComponent *v10; // r0@12
  signed int result; // r0@13
  signed int v12; // r5@14
  Level *v13; // r0@15
  TeleportComponent *v14; // r0@17
  int v15; // [sp+4h] [bp-1Ch]@2

  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = a3;
  if ( (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)a2 + 8))(a2) == 1 )
  {
    v15 = (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)v5 + 60))(v5);
    if ( EntityClassTree::hasCategory(&v15, 1) == 1 )
    {
      v9 = (Level *)Entity::getLevel(v6);
      if ( Level::isClientSide(v9) || !(*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)v5 + 24))(v5) )
      {
        *((_BYTE *)v6 + 4304) = 1;
        Entity::setPersistent(v6);
      }
    }
  }
  if ( EntityDamageSource::getCause(v5) == 3
    && (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)v5 + 56))(v5) != 4194390
    && (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)v5 + 56))(v5) != 4194405 )
    v12 = 0;
    *((_BYTE *)v6 + 4304) = 0;
    do
      v13 = (Level *)Entity::getLevel(v6);
      if ( Level::isClientSide(v13) )
        break;
      if ( Entity::getTeleportComponent(v6) )
        v14 = (TeleportComponent *)Entity::getTeleportComponent(v6);
        if ( TeleportComponent::randomTeleport(v14) )
          break;
      ++v12;
    while ( v12 < 64 );
    result = 0;
  else
    if ( Random::_genRandInt32((EnderMan *)((char *)v6 + 552)) % 0xA && Mob::getHealth(v6) > v8 )
        v10 = (TeleportComponent *)Entity::getTeleportComponent(v6);
        TeleportComponent::randomTeleport(v10);
    result = Monster::_hurt(v6, v5, v8, v7, a5);
  return result;
}


int __fastcall EnderMan::hurtEffects(EnderMan *this, const EntityDamageSource *a2, int a3, int a4, int a5)
{
  int v5; // r5@1
  int v6; // r4@1
  const EntityDamageSource *v7; // r6@1
  Entity *v8; // r7@1
  TeleportComponent *v9; // r0@4

  v5 = a3;
  v6 = a4;
  v7 = a2;
  v8 = this;
  if ( a3 >= 1 && Mob::getHealth(this) > a3 && Entity::getTeleportComponent(v8) )
  {
    v9 = (TeleportComponent *)Entity::getTeleportComponent(v8);
    TeleportComponent::randomTeleport(v9);
  }
  return Mob::hurtEffects(v8, v7, v5, v6, a5);
}


signed int __fastcall EnderMan::_teleport(EnderMan *this)
{
  Entity *v1; // r4@1
  signed int result; // r0@2
  TeleportComponent *v3; // r0@3

  v1 = this;
  if ( Entity::getTeleportComponent(this) )
  {
    v3 = (TeleportComponent *)Entity::getTeleportComponent(v1);
    result = TeleportComponent::randomTeleport(v3);
  }
  else
    result = 0;
  return result;
}


TradeableComponent *__fastcall EnderMan::newServerAiStep(EnderMan *this)
{
  Entity *v1; // r4@1
  char *v2; // r6@1
  int v3; // r0@2
  char v5; // [sp+8h] [bp-18h]@6

  v1 = this;
  v2 = (char *)this + 4304;
  if ( *((_BYTE *)this + 4304) )
  {
    v3 = Entity::getTarget(this);
    if ( v3 )
    {
      if ( !(*(int (**)(void))(*(_DWORD *)v3 + 316))() )
      {
        (*(void (__fastcall **)(Entity *, _DWORD))(*(_DWORD *)v1 + 340))(v1, 0);
        *v2 = 0;
      }
    }
  }
  if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 212))(v1) == 1 )
    EntityDamageSource::EntityDamageSource((int)&v5, 9);
    Entity::hurt(v1, (const EntityDamageSource *)&v5, 1, 1, 0);
    EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v5);
  if ( !Entity::getTarget(v1) )
    *v2 = 0;
  return Mob::newServerAiStep(v1);
}


unsigned int __fastcall EnderMan::setCarryingBlock(int a1, _BYTE *a2)
{
  int v2; // r4@1
  SynchedEntityData *v3; // r6@1
  _BYTE *v4; // r5@1
  int v5; // r7@1
  int v6; // r0@1
  unsigned int v7; // r1@1
  unsigned int v8; // r1@3
  unsigned int v9; // r0@3
  int v10; // r5@8
  unsigned int result; // r0@8
  unsigned int v12; // r1@8
  unsigned int v13; // r1@10
  unsigned int v14; // r0@10

  v2 = a1;
  v3 = (SynchedEntityData *)(a1 + 176);
  v4 = a2;
  v5 = *a2;
  v6 = SynchedEntityData::_get((SynchedEntityData *)(a1 + 176), 23);
  v7 = *(_DWORD *)(v6 + 4);
  if ( (unsigned __int8)v7 == 1 && *(_WORD *)(v6 + 10) != v5 )
  {
    *(_WORD *)(v6 + 10) = v5;
    *(_BYTE *)(v6 + 8) = 1;
    v8 = v7 >> 16;
    v9 = *(_WORD *)(v2 + 188);
    if ( v9 >= v8 )
      LOWORD(v9) = v8;
    *(_WORD *)(v2 + 188) = v9;
    if ( *(_WORD *)(v2 + 190) > v8 )
      LOWORD(v8) = *(_WORD *)(v2 + 190);
    *(_WORD *)(v2 + 190) = v8;
  }
  v10 = v4[1];
  result = SynchedEntityData::_get(v3, 24);
  v12 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v12 == 1 && *(_WORD *)(result + 10) != v10 )
    *(_WORD *)(result + 10) = v10;
    *(_BYTE *)(result + 8) = 1;
    v13 = v12 >> 16;
    v14 = *(_WORD *)(v2 + 188);
    if ( v14 >= v13 )
      LOWORD(v14) = v13;
    *(_WORD *)(v2 + 188) = v14;
    result = *(_WORD *)(v2 + 190);
    if ( result > v13 )
      LOWORD(v13) = *(_WORD *)(v2 + 190);
    *(_WORD *)(v2 + 190) = v13;
  return result;
}


void __fastcall EnderMan::readAdditionalSaveData(EnderMan *this, const CompoundTag *a2)
{
  EnderMan::readAdditionalSaveData(this, a2);
}


signed int __fastcall EnderMan::getEntityTypeId(EnderMan *this)
{
  return 2854;
}


void __fastcall EnderMan::~EnderMan(EnderMan *this)
{
  EnderMan::~EnderMan(this);
}


int __fastcall EnderMan::resolveDeathLoot(EnderMan *this, int a2, int a3, const EntityDamageSource *a4)
{
  Mob *v4; // r7@1
  SynchedEntityData *v5; // r4@1
  int v6; // r6@1
  const EntityDamageSource *v7; // r8@1
  int v8; // r9@1
  char v9; // r5@1
  int v10; // r0@2
  char v12; // [sp+4h] [bp-6Ch]@2
  char v13; // [sp+5h] [bp-6Bh]@2
  char v14; // [sp+8h] [bp-68h]@2
  int v15; // [sp+10h] [bp-60h]@6
  void *v16; // [sp+2Ch] [bp-44h]@4
  void *ptr; // [sp+3Ch] [bp-34h]@2

  v4 = this;
  v5 = (EnderMan *)((char *)this + 176);
  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = SynchedEntityData::getShort((EnderMan *)((char *)this + 176), 23);
  SynchedEntityData::getShort(v5, 24);
  if ( v9 )
  {
    v12 = SynchedEntityData::getShort(v5, 23);
    v13 = SynchedEntityData::getShort(v5, 24);
    v10 = FullBlock::getBlock((FullBlock *)&v12);
    ItemInstance::ItemInstance((ItemInstance *)&v14, v10, 1);
    (*(void (__fastcall **)(Mob *, char *, _DWORD))(*(_DWORD *)v4 + 452))(v4, &v14, 0);
    if ( ptr )
      operator delete(ptr);
    if ( v16 )
      operator delete(v16);
    if ( v15 )
      (*(void (**)(void))(*(_DWORD *)v15 + 4))();
  }
  return Mob::resolveDeathLoot(v4, v6, v8, v7);
}


void __fastcall EnderMan::addAdditionalSaveData(EnderMan *this, CompoundTag *a2)
{
  EnderMan::addAdditionalSaveData(this, a2);
}


int __fastcall EnderMan::normalTick(EnderMan *this)
{
  Random *v2; // r5@1
  unsigned int v8; // r0@2
  int v14; // r0@2
  unsigned int v16; // r0@2
  int v22; // r0@2
  float v26; // [sp+24h] [bp-6Ch]@2

  _R4 = this;
  v2 = (EnderMan *)((char *)this + 552);
  if ( !(Random::_genRandInt32((EnderMan *)((char *)this + 552)) % 5) )
  {
    __asm
    {
      VLDR            S0, [R4,#0x48]
      VSTR            S0, [SP,#0x90+var_7C]
    }
    _R6 = Random::_genRandInt32(v2);
      VLDR            S20, [R4,#0x4C]
      VLDR            S31, [R4,#0x130]
    v8 = Random::_genRandInt32(v2);
    __asm { VLDR            S0, [R4,#0x50] }
    _R7 = v8;
      VLDR            S30, [R4,#0x134]
      VSTR            S0, [SP,#0x90+var_80]
      VMOV            S0, R6
      VCVT.F64.U32    D9, S0
    _R0 = Random::_genRandInt32(v2);
      VMOV            S0, R0
      VLDR            D8, =2.32830644e-10
      VLDR            S21, [R4,#0x130]
      VCVT.F64.U32    D11, S0
      VMOV            S0, R7
      VMUL.F64        D14, D9, D8
      VCVT.F64.U32    D12, S0
      VMUL.F64        D11, D11, D8
      VCVT.F64.U32    D13, S0
      VMOV            S4, R6
      VCVT.F64.U32    D0, S0
      VCVT.F64.U32    D2, S4
      VMUL.F64        D0, D0, D8
      VMUL.F64        D3, D12, D8
      VMUL.F64        D4, D13, D8
      VMOV.F32        S18, #-0.5
      VLDR            S14, [SP,#0x90+var_7C]
      VCVT.F32.F64    S2, D14
      VCVT.F32.F64    S10, D11
      VMUL.F64        D2, D2, D8
      VADD.F32        S2, S2, S18
      VMOV.F32        S12, #-0.25
      VCVT.F32.F64    S6, D3
      VADD.F32        S10, S10, S18
      VCVT.F32.F64    S8, D4
      VCVT.F32.F64    S0, D0
      VMUL.F32        S2, S2, S31
      VADD.F32        S12, S20, S12
      VMUL.F32        S6, S6, S30
      VADD.F32        S8, S8, S18
      VCVT.F32.F64    S4, D2
      VADD.F32        S0, S0, S18
      VMUL.F32        S10, S10, S21
      VADD.F32        S20, S2, S14
      VLDR            S2, [SP,#0x90+var_80]
      VADD.F32        S22, S12, S6
      VADD.F32        S28, S8, S8
      VNEG.F32        S30, S4
      VADD.F32        S19, S0, S0
      VADD.F32        S26, S10, S2
    v14 = Entity::getLevel(_R4);
      VSTR            S20, [SP,#0x90+var_6C]
      VSTR            S22, [SP,#0x90+var_68]
      VSTR            S28, [SP,#0x90+var_78]
      VSTR            S30, [SP,#0x90+var_74]
      VSTR            S26, [SP,#0x90+var_64]
      VSTR            S19, [SP,#0x90+var_70]
    Level::addParticle(v14, 20, (int)&v26);
    __asm { VLDR            S27, [R4,#0x48] }
      VLDR            S31, [R4,#0x4C]
      VLDR            S26, [R4,#0x130]
    v16 = Random::_genRandInt32(v2);
    _R7 = v16;
      VLDR            S19, [R4,#0x130]
      VMUL.F64        D12, D12, D8
      VCVT.F64.U32    D14, S0
      VCVT.F64.U32    D10, S0
      VMOV            S2, R6
      VCVT.F64.U32    D1, S2
      VMUL.F64        D3, D14, D8
      VMUL.F64        D4, D10, D8
      VCVT.F32.F64    S4, D12
      VMUL.F64        D1, D1, D8
      VADD.F32        S4, S4, S18
      VMUL.F32        S4, S4, S26
      VCVT.F32.F64    S2, D1
      VADD.F32        S12, S31, S12
      VMUL.F32        S10, S10, S19
      VADD.F32        S16, S4, S27
      VLDR            S4, [SP,#0x90+var_7C]
      VADD.F32        S22, S8, S8
      VNEG.F32        S24, S2
      VADD.F32        S26, S0, S0
      VADD.F32        S18, S12, S6
      VADD.F32        S20, S10, S4
    v22 = Entity::getLevel(_R4);
      VSTR            S16, [SP,#0x90+var_6C]
      VSTR            S18, [SP,#0x90+var_68]
      VSTR            S22, [SP,#0x90+var_78]
      VSTR            S24, [SP,#0x90+var_74]
      VSTR            S20, [SP,#0x90+var_64]
      VSTR            S26, [SP,#0x90+var_70]
    Level::addParticle(v22, 20, (int)&v26);
  }
  return Monster::normalTick(_R4);
}


signed int __fastcall EnderMan::checkSpawnRules(EnderMan *this, bool a2)
{
  bool v2; // r4@1
  EnderMan *v3; // r5@1
  BlockSource *v4; // r0@1
  Dimension *v5; // r0@1
  signed int result; // r0@2

  v2 = a2;
  v3 = this;
  v4 = (BlockSource *)Entity::getRegion(this);
  v5 = (Dimension *)BlockSource::getDimension(v4);
  if ( Dimension::getId(v5) == 2 )
    result = 1;
  else
    result = Monster::checkSpawnRules(v3, v2);
  return result;
}


void __fastcall EnderMan::readAdditionalSaveData(EnderMan *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  EnderMan *v3; // r4@1
  unsigned __int8 v4; // r6@1
  unsigned __int8 v5; // r5@1
  int v6; // r0@1
  unsigned int v7; // r1@1
  unsigned int v8; // r1@3
  unsigned int v9; // r0@3
  int v10; // r0@8
  unsigned int v11; // r1@8
  unsigned int v12; // r1@10
  unsigned int v13; // r0@10
  void *v14; // r0@15
  void *v15; // r0@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20
  unsigned int *v18; // r2@22
  signed int v19; // r1@24
  int v20; // [sp+8h] [bp-30h]@1
  int v21; // [sp+10h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  Monster::readAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v21, "carried");
  v4 = CompoundTag::getShort((int)v2, (const void **)&v21);
  sub_21E94B4((void **)&v20, "carriedData");
  v5 = CompoundTag::getShort((int)v2, (const void **)&v20);
  v6 = SynchedEntityData::_get((EnderMan *)((char *)v3 + 176), 23);
  v7 = *(_DWORD *)(v6 + 4);
  if ( (unsigned __int8)v7 == 1 && *(_WORD *)(v6 + 10) != v4 )
  {
    *(_WORD *)(v6 + 10) = v4;
    *(_BYTE *)(v6 + 8) = 1;
    v8 = v7 >> 16;
    v9 = *((_WORD *)v3 + 94);
    if ( v9 >= v8 )
      LOWORD(v9) = v8;
    *((_WORD *)v3 + 94) = v9;
    if ( *((_WORD *)v3 + 95) > v8 )
      LOWORD(v8) = *((_WORD *)v3 + 95);
    *((_WORD *)v3 + 95) = v8;
  }
  v10 = SynchedEntityData::_get((EnderMan *)((char *)v3 + 176), 24);
  v11 = *(_DWORD *)(v10 + 4);
  if ( (unsigned __int8)v11 == 1 && *(_WORD *)(v10 + 10) != v5 )
    *(_WORD *)(v10 + 10) = v5;
    *(_BYTE *)(v10 + 8) = 1;
    v12 = v11 >> 16;
    v13 = *((_WORD *)v3 + 94);
    if ( v13 >= v12 )
      LOWORD(v13) = v12;
    *((_WORD *)v3 + 94) = v13;
    if ( *((_WORD *)v3 + 95) > v12 )
      LOWORD(v12) = *((_WORD *)v3 + 95);
    *((_WORD *)v3 + 95) = v12;
  v14 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v20 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v21 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
}
