

int __fastcall Player::fireDimensionChangedEvent(int result, int a2)
{
  int v2; // r5@1
  int v3; // r6@2
  __int64 i; // r6@2
  int v5; // t1@3
  int v6; // [sp+4h] [bp-3Ch]@2
  signed int v7; // [sp+8h] [bp-38h]@2
  int v8; // [sp+Ch] [bp-34h]@2
  char v9; // [sp+10h] [bp-30h]@2

  v2 = result;
  if ( a2 != 2 )
  {
    v3 = Entity::getRegion((Entity *)result);
    v6 = 1101004800;
    v7 = 1101004800;
    v8 = 1101004800;
    AABB::grow((AABB *)&v9, (const Vec3 *)(v2 + 264), (int)&v6);
    result = BlockSource::fetchEntities(v3, 256, (int)&v9, v2);
    for ( i = *(_QWORD *)result; HIDWORD(i) != (_DWORD)i; result = (int)Mob::onPlayerDimensionChanged(v5) )
    {
      v5 = *(_DWORD *)i;
      LODWORD(i) = i + 4;
    }
  }
  return result;
}


signed int __fastcall Player::isSleepingLongEnough(Player *this)
{
  Player *v1; // r4@1
  int v2; // r1@1
  signed int result; // r0@1

  v1 = this;
  v2 = (*(int (**)(void))(*(_DWORD *)this + 784))();
  result = 0;
  if ( v2 == 1 && (signed int)*((_WORD *)v1 + 2454) > 99 )
    result = 1;
  return result;
}


int __fastcall Player::getDestroySpeed(Player *this, const Block *a2)
{
  Player *v2; // r4@1
  const Block *v3; // r5@1
  ItemInstance *v4; // r0@1
  MobEffectInstance *v10; // r0@2
  MobEffectInstance *v12; // r0@4
  int v17; // r0@5
  EnchantUtils *v18; // r4@14
  int result; // r0@18

  v2 = this;
  v3 = a2;
  v4 = (ItemInstance *)PlayerInventoryProxy::getSelectedItem(*((PlayerInventoryProxy **)this + 1188));
  _R0 = ItemInstance::getDestroySpeed(v4, v3);
  __asm { VMOV            S16, R0 }
  if ( Mob::hasEffect(v2, (const MobEffect *)MobEffect::DIG_SPEED) == 1 )
  {
    v10 = (MobEffectInstance *)Mob::getEffect(v2, (const MobEffect *)MobEffect::DIG_SPEED);
    _R0 = MobEffectInstance::getAmplifier(v10) + 1;
    __asm
    {
      VLDR            S2, =0.2
      VMOV.F32        S4, #1.0
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VMUL.F32        S0, S0, S2
      VADD.F32        S0, S0, S4
      VMUL.F32        S16, S0, S16
    }
  }
  if ( Mob::hasEffect(v2, (const MobEffect *)MobEffect::DIG_SLOWDOWN) == 1 )
    v12 = (MobEffectInstance *)Mob::getEffect(v2, (const MobEffect *)MobEffect::DIG_SLOWDOWN);
    _R0 = MobEffectInstance::getAmplifier(v12) + 1;
      VLDR            D1, =0.300000012
      VMOV            R0, R1, D1
      VCVT.F64.S32    D0, S0
      VMOV            R2, R3, D0
    _R0 = COERCE_UNSIGNED_INT64(pow(_R0, _R2));
      VCVT.F64.F32    D0, S16
      VMOV            D1, R0, R1
      VMUL.F64        D0, D1, D0
      VCVT.F32.F64    S16, D0
  v17 = *((_DWORD *)v2 + 128);
  if ( v17 )
      VLDR            S0, =0.2
      VMUL.F32        S0, S16, S0
    if ( !*(_BYTE *)(v17 + 216) )
      __asm { VMOVEQ.F32      S16, S0 }
  else if ( !*((_BYTE *)v2 + 216) )
      VMUL.F32        S18, S16, S0
    if ( Abilities::isFlying((Player *)((char *)v2 + 4320)) )
      __asm { VMOVNE.F32      S18, S16 }
    __asm { VMOV.F32        S16, S18 }
  if ( (*(int (__fastcall **)(Player *, signed int))(*(_DWORD *)v2 + 220))(v2, 5) == 1 )
    v18 = EnchantUtils::getRandomItemWith((EnchantUtils *)8, (int)v2, 3);
    if ( *((_BYTE *)v18 + 15) && *(_DWORD *)v18 && !ItemInstance::isNull(v18) )
      *((_BYTE *)v18 + 14);
    if ( !_ZF )
      __asm { VMOVNE.F32      S0, S16 }
    __asm { VMOV            R0, S0 }
  else
    __asm { VMOV            R0, S16 }
  return result;
}


char *__fastcall Player::getAllHand(Player *this, int a2)
{
  Player *v2; // r4@1
  int v3; // r6@1
  char *v4; // r5@1
  int (__fastcall *v5)(int); // r1@1
  int v6; // r0@1
  int v7; // r7@1
  int v8; // r0@1
  bool v9; // zf@1
  ItemInstance *v10; // r6@7
  char *result; // r0@7
  _BYTE *v12; // r8@10
  signed int v13; // r0@10
  unsigned int v14; // r1@10
  unsigned int v15; // r0@12
  unsigned int v16; // r7@12
  char *v17; // r9@18
  signed int v18; // r2@20
  int v19; // r5@20
  int v20; // r5@22

  v2 = this;
  v3 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v4 = (char *)operator new(8u);
  v5 = *(int (__fastcall **)(int))(*(_DWORD *)v3 + 908);
  *(_DWORD *)v2 = v4;
  *((_DWORD *)v2 + 1) = v4;
  *((_DWORD *)v2 + 2) = v4 + 8;
  v6 = v5(v3);
  v7 = v6;
  v8 = *(_BYTE *)(v6 + 15);
  v9 = v8 == 0;
  if ( v8 )
    v9 = *(_DWORD *)v7 == 0;
  if ( !v9 && !ItemInstance::isNull((ItemInstance *)v7) && *(_BYTE *)(v7 + 14) )
  {
    *(_DWORD *)v4 = v7;
    v4 = (char *)(*((_DWORD *)v2 + 1) + 4);
    *((_DWORD *)v2 + 1) = v4;
  }
  v10 = (ItemInstance *)(v3 + 3584);
  result = (char *)ItemInstance::isNull(v10);
  if ( !result )
    if ( v4 == *((char **)v2 + 2) )
    {
      v12 = *(_BYTE **)v2;
      v13 = (signed int)&v4[-*(_DWORD *)v2];
      v14 = v13 >> 2;
      if ( !(v13 >> 2) )
        v14 = 1;
      v15 = v14 + (v13 >> 2);
      v16 = v15;
      if ( 0 != v15 >> 30 )
        v16 = 0x3FFFFFFF;
      if ( v15 < v14 )
      if ( v16 )
      {
        if ( v16 >= 0x40000000 )
          sub_21E57F4();
        v17 = (char *)operator new(4 * v16);
      }
      else
        v17 = 0;
      v18 = v4 - v12;
      v19 = (int)&v17[v4 - v12];
      *(_DWORD *)&v17[v18] = v10;
      if ( 0 != v18 >> 2 )
        _aeabi_memmove4(v17, v12);
      v20 = v19 + 4;
      if ( v12 )
        operator delete(v12);
      result = &v17[4 * v16];
      *(_DWORD *)v2 = v17;
      *((_DWORD *)v2 + 1) = v20;
      *((_DWORD *)v2 + 2) = result;
    }
    else
      *(_DWORD *)v4 = v10;
      result = (char *)(*((_DWORD *)v2 + 1) + 4);
      *((_DWORD *)v2 + 1) = result;
  return result;
}


PlayerChunkSource *__fastcall Player::setChunkRadius(Player *this, unsigned int a2)
{
  PlayerChunkSource *result; // r0@1

  *((_DWORD *)this + 1310) = a2;
  result = (PlayerChunkSource *)*((_DWORD *)this + 1156);
  if ( result )
    result = (PlayerChunkSource *)j_j_j__ZN17PlayerChunkSource9setRadiusEi(result, 16 * a2);
  return result;
}


int __fastcall Player::isEntityRelevant(Player *this, const Entity *a2)
{
  return 0;
}


int __fastcall Player::setArmor(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r0@1
  __int16 v8; // [sp+5h] [bp-BBh]@0
  char v9; // [sp+7h] [bp-B9h]@0
  int v10; // [sp+8h] [bp-B8h]@1
  char v11; // [sp+Ch] [bp-B4h]@1
  __int16 v12; // [sp+Dh] [bp-B3h]@1
  char v13; // [sp+Fh] [bp-B1h]@1
  int v14; // [sp+10h] [bp-B0h]@1
  int v15; // [sp+14h] [bp-ACh]@1
  int v16; // [sp+18h] [bp-A8h]@1
  int v17; // [sp+20h] [bp-A0h]@11
  void *v18; // [sp+3Ch] [bp-84h]@9
  void *v19; // [sp+4Ch] [bp-74h]@7
  int v20; // [sp+60h] [bp-60h]@1
  int v21; // [sp+68h] [bp-58h]@5
  void *v22; // [sp+84h] [bp-3Ch]@3
  void *ptr; // [sp+94h] [bp-2Ch]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (*(int (**)(void))(*(_DWORD *)a1 + 1028))();
  v10 = 0;
  v11 = 120;
  v13 = v9;
  v12 = v8;
  v14 = 0;
  v15 = v5;
  ItemInstance::ItemInstance((ItemInstance *)&v16, v6);
  ItemInstance::ItemInstance((ItemInstance *)&v20, v4);
  InventoryTransactionManager::addAction(v3 + 5152, (int)&v10);
  if ( ptr )
    operator delete(ptr);
  if ( v22 )
    operator delete(v22);
  if ( v21 )
    (*(void (**)(void))(*(_DWORD *)v21 + 4))();
  v21 = 0;
  if ( v19 )
    operator delete(v19);
  if ( v18 )
    operator delete(v18);
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  v17 = 0;
  return Mob::setArmor(v3, v5, v4);
}


int __fastcall Player::dropEquipment(Player *this, const EntityDamageSource *a2, int a3)
{
  Player *v3; // r4@1

  v3 = this;
  Mob::dropEquipment(this, a2, a3);
  return (*(int (__fastcall **)(Player *, signed int))(*(_DWORD *)v3 + 1064))(v3, 1);
}


int __fastcall Player::getContainerManager(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 4744);
  v2 = *(_DWORD *)(a2 + 4748);
  *(_DWORD *)(result + 4) = v2;
  if ( v2 )
  {
    result = v2 + 8;
    if ( &pthread_create )
    {
      __dmb();
      do
        v3 = __ldrex((unsigned int *)result);
      while ( __strex(v3 + 1, (unsigned int *)result) );
    }
    else
      ++*(_DWORD *)result;
  }
  return result;
}


int __fastcall Player::getTicksUsingItem(Player *this)
{
  Player *v1; // r4@1
  ItemInstance *v2; // r5@1
  int result; // r0@2

  v1 = this;
  v2 = (Player *)((char *)this + 4832);
  if ( ItemInstance::isNull((Player *)((char *)this + 4832)) )
    result = 0;
  else
    result = ItemInstance::getMaxUseDuration(v2) - *((_DWORD *)v1 + 1226);
  return result;
}


int __fastcall Player::isHostingPlayer(Player *this)
{
  return 0;
}


int __fastcall Player::getAddPacket(Player *this, int a2)
{
  Player *v2; // r4@1
  int v3; // r6@1
  void *v4; // r5@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x108u);
  result = AddPlayerPacket::AddPlayerPacket((int)v4, v3);
  *(_DWORD *)v2 = v4;
  return result;
}


int __fastcall Player::setRespawnPosition(Player *this, const BlockPos *a2, bool a3)
{
  Player *v3; // r4@1
  Level *v4; // r0@1
  int result; // r0@1
  PlayerChunkSource *v6; // r5@1
  char v7; // [sp+4h] [bp-1Ch]@2

  v3 = this;
  *((_DWORD *)this + 1300) = *(_DWORD *)a2;
  *((_DWORD *)this + 1301) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 1302) = *((_DWORD *)a2 + 2);
  *((_BYTE *)this + 5212) = a3;
  v4 = (Level *)Entity::getLevel(this);
  Level::saveGameData(v4);
  result = 4628;
  v6 = (PlayerChunkSource *)*((_DWORD *)v3 + 1157);
  if ( v6 )
  {
    Vec3::Vec3((int)&v7, (int)v3 + 5200);
    result = PlayerChunkSource::centerAt(v6, (const Vec3 *)&v7, 16.0);
  }
  return result;
}


void __fastcall Player::getCapePos(Player *this, float a2, int _R2)
{
  _R4 = LODWORD(a2) + 4720;
  _R12 = LODWORD(a2) + 4732;
  __asm { VLDR            S0, [R4] }
  _R4 = LODWORD(a2) + 4716;
  _LR = LODWORD(a2) + 4724;
  _R3 = LODWORD(a2) + 4712;
  __asm { VLDR            S2, [R4] }
  _R1 = LODWORD(a2) + 4728;
  __asm
  {
    VLDR            S10, [R12]
    VMOV            S12, R2
    VLDR            S8, [R1]
    VLDR            S4, [R3]
    VSUB.F32        S10, S10, S0
    VLDR            S6, [LR]
    VSUB.F32        S8, S8, S2
    VSUB.F32        S6, S6, S4
    VMUL.F32        S10, S10, S12
    VMUL.F32        S8, S8, S12
    VMUL.F32        S6, S6, S12
    VADD.F32        S0, S10, S0
    VADD.F32        S2, S8, S2
    VADD.F32        S4, S6, S4
    VSTR            S4, [R0]
    VSTR            S2, [R0,#4]
    VSTR            S0, [R0,#8]
  }
}


int __fastcall Player::getSpawnPosition(int result, int a2)
{
  *(_DWORD *)result = *(_DWORD *)(a2 + 5200);
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 5204);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 5208);
  return result;
}


signed int __fastcall Player::isAdventure(Player *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 1308);
  result = 0;
  if ( v1 == 2 )
    result = 1;
  return result;
}


signed int __fastcall Player::isPushableByPiston(Player *this)
{
  return 1;
}


signed int __fastcall Player::consumeTotem(Player *this)
{
  Player *v1; // r4@1
  int v2; // r0@1
  signed int v3; // r4@3
  ItemInstance *v4; // r5@4
  int v6; // [sp+0h] [bp-58h]@1
  int v7; // [sp+8h] [bp-50h]@18
  void *v8; // [sp+24h] [bp-34h]@16
  void *ptr; // [sp+34h] [bp-24h]@14

  v1 = this;
  v2 = (*(int (**)(void))(*(_DWORD *)this + 1104))();
  ItemInstance::ItemInstance((ItemInstance *)&v6, v2);
  if ( Mob::consumeTotem(v1) == 1 )
  {
    InventoryTransactionManager::_createServerSideAction(
      (Player *)((char *)v1 + 5152),
      (const ItemInstance *)&v6,
      (const ItemInstance *)&ItemInstance::EMPTY_ITEM);
LABEL_3:
    v3 = 1;
    goto LABEL_14;
  }
  v4 = (ItemInstance *)PlayerInventoryProxy::getSelectedItem(*((PlayerInventoryProxy **)v1 + 1188));
  if ( *((_BYTE *)v4 + 15) )
    if ( *(_DWORD *)v4 )
    {
      if ( ItemInstance::isNull(v4) )
      {
        v3 = 0;
      }
      else if ( *((_BYTE *)v4 + 14) )
        if ( *(_DWORD *)v4 == Item::mTotem )
        {
          PlayerInventoryProxy::setSelectedItem(
            *((PlayerInventoryProxy **)v1 + 1188),
            (const ItemInstance *)&ItemInstance::EMPTY_ITEM);
          InventoryTransactionManager::_createServerSideAction(
            (Player *)((char *)v1 + 5152),
            (const ItemInstance *)&v6,
          goto LABEL_3;
        }
      else
    }
    else
      v3 = 0;
  else
    v3 = 0;
LABEL_14:
  if ( ptr )
    operator delete(ptr);
  if ( v8 )
    operator delete(v8);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  return v3;
}


int __fastcall Player::setAllPlayersSleeping(int result)
{
  *(_BYTE *)(result + 5214) = 1;
  return result;
}


int __fastcall Player::stopDestroying(int result)
{
  *(_BYTE *)(result + 5228) = 0;
  return result;
}


int __fastcall Player::onMovePlayerPacketNormal(Entity *a1, int a2, int a3, float a4)
{
  float v4; // r8@1
  int v5; // r9@1
  int v6; // r7@1
  Entity *v7; // r5@1
  BlockSource *v8; // r4@1
  int result; // r0@2
  char v10; // [sp+8h] [bp-28h]@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = (BlockSource *)Entity::getRegion(a1);
  BlockPos::BlockPos((int)&v10, v6);
  if ( BlockSource::hasBlock(v8, (const BlockPos *)&v10) == 1 )
  {
    result = Mob::lerpTo((int)v7, v6, v5, v4);
  }
  else
    (*(void (__fastcall **)(Entity *, int))(*(_DWORD *)v7 + 48))(v7, v6);
    (*(void (__fastcall **)(Entity *, int))(*(_DWORD *)v7 + 72))(v7, v5);
    result = Mob::setYHeadRot(v7, v4);
  return result;
}


int __fastcall Player::setPlayerGameType(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r7@1
  int *v4; // r8@1
  int v5; // r5@1
  bool v6; // zf@3
  SurvivalMode *v7; // r6@7
  int v8; // r0@7
  void *v9; // r6@6
  int v10; // r0@11
  int result; // r0@16
  int v12; // r5@19
  int v13; // r4@24
  int **v14; // r1@24
  int v15; // r0@24
  int v16; // [sp+0h] [bp-30h]@19
  int v17; // [sp+Ch] [bp-24h]@15
  int v18; // [sp+10h] [bp-20h]@15
  int v19; // [sp+14h] [bp-1Ch]@15

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 5232);
  v4 = (int *)(a1 + 5232);
  v5 = a2;
  if ( v3 != a2 || !*(_DWORD *)(a1 + 5172) )
  {
    v6 = a2 == 3;
    if ( a2 != 3 )
      v6 = a2 == 0;
    if ( v6 )
    {
      v7 = (SurvivalMode *)operator new(0x88u);
      SurvivalMode::SurvivalMode(v7, (Player *)v2);
      v8 = *(_DWORD *)(v2 + 5172);
      *(_DWORD *)(v2 + 5172) = v7;
      if ( v8 )
        (*(void (**)(void))(*(_DWORD *)v8 + 4))();
      *v4 = v5;
      if ( v5 == 3 )
        goto LABEL_14;
LABEL_17:
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 652))(v2) == 1 )
      {
        if ( (unsigned int)(v3 - 3) >= 2 )
        {
          v12 = v2 + 4320;
        }
        else
          *(_DWORD *)(v2 + 4660) = *(_DWORD *)(v2 + 5216);
          *(_DWORD *)(v2 + 4664) = *(_DWORD *)(v2 + 5220);
          *(_DWORD *)(v2 + 4668) = *(_DWORD *)(v2 + 5224);
          *(_BYTE *)(v2 + 4821) = 1;
          (*(void (__fastcall **)(int, int, _DWORD, signed int))(*(_DWORD *)v2 + 104))(v2, v2 + 5216, 0, 1);
          Entity::getInterpolatedPosition((Entity *)&v16, *(float *)&v2, 1065353216);
          Abilities::setAbility(v2 + 4320, (int **)&Abilities::FLYING, 0);
          Mob::setInvisible((Mob *)v2, 0);
        Abilities::setAbility(v12, (int **)&Abilities::MAYFLY, 1);
        Abilities::setAbility(v12, (int **)&Abilities::INSTABUILD, 1);
        Abilities::setAbility(v12, (int **)&Abilities::INVULNERABLE, 1);
        v14 = (int **)&Abilities::NOCLIP;
        v15 = v12;
      }
      else
        result = *v4;
        if ( (unsigned int)*v4 > 3 )
          return result;
        result = 0xDu >> (result & 0xF);
        if ( !(result & 1) )
        if ( (unsigned int)(v3 - 3) <= 1 )
        v13 = v2 + 4320;
        Abilities::setAbility(v13, (int **)&Abilities::FLYING, 0);
        Abilities::setAbility(v13, (int **)&Abilities::MAYFLY, 0);
        Abilities::setAbility(v13, (int **)&Abilities::INSTABUILD, 0);
        Abilities::setAbility(v13, (int **)&Abilities::INVULNERABLE, 0);
        v15 = v13;
      return Abilities::setAbility(v15, v14, 0);
    }
    v9 = operator new(0x70u);
    GameMode::GameMode((int)v9, v2);
    v10 = *(_DWORD *)(v2 + 5172);
    *(_DWORD *)(v2 + 5172) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  }
  *v4 = v5;
  if ( (unsigned int)(v5 - 3) > 1 )
    goto LABEL_17;
LABEL_14:
  if ( (unsigned int)(v3 - 3) >= 2 )
    Entity::getInterpolatedPosition((Entity *)&v17, *(float *)&v2, 1065353216);
    *(_DWORD *)(v2 + 5216) = v17;
    *(_DWORD *)(v2 + 5220) = v18;
    *(_DWORD *)(v2 + 5224) = v19;
  Abilities::setAbility(v2 + 4320, (int **)&Abilities::FLYING, 1);
  Abilities::setAbility(v2 + 4320, (int **)&Abilities::MAYFLY, 1);
  Abilities::setAbility(v2 + 4320, (int **)&Abilities::INSTABUILD, 1);
  Abilities::setAbility(v2 + 4320, (int **)&Abilities::INVULNERABLE, 1);
  Abilities::setAbility(v2 + 4320, (int **)&Abilities::NOCLIP, 1);
  return Mob::setInvisible((Mob *)v2, 1);
}


int __fastcall Player::feed(Player *this, int a2)
{
  Entity *v2; // r5@1
  int v3; // r4@1
  Level *v4; // r0@1
  int v5; // r0@1
  int v7; // [sp+0h] [bp-38h]@1
  void **v8; // [sp+8h] [bp-30h]@1
  int v9; // [sp+Ch] [bp-2Ch]@1
  int v10; // [sp+10h] [bp-28h]@1
  char v11; // [sp+14h] [bp-24h]@1
  __int64 v12; // [sp+18h] [bp-20h]@1
  char v13; // [sp+20h] [bp-18h]@1
  int v14; // [sp+24h] [bp-14h]@1

  v2 = this;
  v3 = a2;
  Entity::getRuntimeID((Entity *)&v7, (int)this);
  v9 = 2;
  v10 = 1;
  v11 = 0;
  v8 = &off_26DA5D0;
  v12 = *(_QWORD *)&v7;
  v13 = 57;
  v14 = v3;
  v4 = (Level *)Entity::getLevel(v2);
  v5 = Level::getPacketSender(v4);
  return (*(int (**)(void))(*(_DWORD *)v5 + 8))();
}


int __fastcall Player::deleteContainerManager(int result)
{
  int v1; // r4@1
  _DWORD *v2; // r5@2
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  *(_DWORD *)(result + 4744) = 0;
  v1 = *(_DWORD *)(result + 4748);
  if ( v1 )
  {
    v2 = (_DWORD *)(result + 4748);
    v3 = (unsigned int *)(v1 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v1 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
    result = 0;
    *v2 = 0;
  }
  return result;
}


int __fastcall Player::_getItemDestroySpeed(Player *this, const Block *a2)
{
  const Block *v2; // r4@1
  ItemInstance *v3; // r0@1

  v2 = a2;
  v3 = (ItemInstance *)PlayerInventoryProxy::getSelectedItem(*((PlayerInventoryProxy **)this + 1188));
  return j_j_j__ZNK12ItemInstance15getDestroySpeedERK5Block(v3, v2);
}


int __fastcall Player::setEquippedSlot(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  void (__fastcall *v6)(int, int, int *); // r7@1
  int result; // r0@5
  int v8; // [sp+0h] [bp-60h]@1
  int v9; // [sp+8h] [bp-58h]@5
  void *v10; // [sp+24h] [bp-3Ch]@3
  void *ptr; // [sp+34h] [bp-2Ch]@1

  v4 = a1;
  v5 = a2;
  v6 = *(void (__fastcall **)(int, int, int *))(*(_DWORD *)a1 + 468);
  ItemInstance::ItemInstance((ItemInstance *)&v8, a3, 1, a4);
  v6(v4, v5, &v8);
  if ( ptr )
    operator delete(ptr);
  if ( v10 )
    operator delete(v10);
  result = v9;
  if ( v9 )
    result = (*(int (**)(void))(*(_DWORD *)v9 + 4))();
  return result;
}


unsigned int __fastcall Player::resetPos(Player *this, int a2)
{
  Player *v2; // r4@1
  int v3; // r5@1
  unsigned int result; // r0@1
  int v5; // r0@2
  AttributeInstance *v6; // r0@4
  AttributeInstance *v7; // r0@4
  AttributeInstance *v8; // r0@4
  AttributeInstance *v9; // r0@4
  Level *v10; // r0@4
  unsigned __int64 *v11; // r0@4
  AttributeInstance *v12; // r0@5
  AttributeInstance *v13; // r0@5
  Level *v14; // r0@6
  int v15; // r0@7

  v2 = this;
  v3 = a2;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 30) = 0;
  MovementInterpolator::stop((Player *)((char *)this + 4040));
  result = (*(int (__fastcall **)(Player *))(*(_DWORD *)v2 + 784))(v2);
  if ( !result )
  {
    *((_DWORD *)v2 + 79) = 1070554237;
    (*(void (__fastcall **)(Player *))(*(_DWORD *)v2 + 680))(v2);
    v5 = Mob::hasEffect(v2, (const MobEffect *)MobEffect::INVISIBILITY);
    result = Mob::setInvisible(v2, v5);
  }
  *((_BYTE *)v2 + 353) = 0;
  if ( v3 == 1 )
    Mob::removeAllEffects(v2);
    v6 = (AttributeInstance *)(*(int (__fastcall **)(Player *, void *))(*(_DWORD *)v2 + 1000))(
                                v2,
                                &SharedAttributes::HEALTH);
    AttributeInstance::resetToMaxValue(v6);
    v7 = (AttributeInstance *)(*(int (__fastcall **)(Player *, void *))(*(_DWORD *)v2 + 1000))(v2, &Player::HUNGER);
    AttributeInstance::resetToDefaultValue(v7);
    v8 = (AttributeInstance *)(*(int (__fastcall **)(_DWORD, void *))(*(_DWORD *)v2 + 1000))(v2, &Player::EXHAUSTION);
    AttributeInstance::resetToDefaultValue(v8);
    v9 = (AttributeInstance *)(*(int (__fastcall **)(_DWORD, void *))(*(_DWORD *)v2 + 1000))(v2, &Player::SATURATION);
    AttributeInstance::resetToDefaultValue(v9);
    Entity::setStatusFlag((int)v2, 30, 0);
    v10 = (Level *)Entity::getLevel(v2);
    v11 = (unsigned __int64 *)Level::getGameRules(v10);
    if ( !GameRules::getBool(v11, (int **)&GameRules::KEEP_INVENTORY) )
    {
      v12 = (AttributeInstance *)(*(int (__fastcall **)(_DWORD, void *))(*(_DWORD *)v2 + 1000))(v2, &Player::LEVEL);
      AttributeInstance::resetToMinValue(v12);
      v13 = (AttributeInstance *)(*(int (__fastcall **)(_DWORD, void *))(*(_DWORD *)v2 + 1000))(v2, &Player::EXPERIENCE);
      AttributeInstance::resetToMinValue(v13);
      *((_DWORD *)v2 + 1297) = 0;
      *((_BYTE *)v2 + 5192) = 0;
      *((_DWORD *)v2 + 1299) = 7;
      *((_DWORD *)v2 + 1075) = 0;
    }
    *((_DWORD *)v2 + 107) = 0;
    *((_DWORD *)v2 + 862) = 0;
    *((_BYTE *)v2 + 5213) = 0;
    *((_DWORD *)v2 + 56) = 0;
    v14 = (Level *)Entity::getLevel(v2);
    if ( !Level::isClientSide(v14) )
      v15 = Entity::getLevel(v2);
      Level::broadcastEntityEvent(v15, (int)v2, 18, 0);
    result = j_j_j__ZN3Mob12setInvisibleEb(v2, 0);
  return result;
}


signed int __fastcall Player::resetPlayerLevel(Player *this)
{
  Player *v1; // r4@1
  AttributeInstance *v2; // r0@1
  AttributeInstance *v3; // r0@1
  signed int result; // r0@1

  v1 = this;
  v2 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)this + 1000))();
  AttributeInstance::resetToMinValue(v2);
  v3 = (AttributeInstance *)(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v1 + 1000))(v1, &Player::EXPERIENCE);
  AttributeInstance::resetToMinValue(v3);
  *((_DWORD *)v1 + 1297) = 0;
  *((_BYTE *)v1 + 5192) = 0;
  result = 5196;
  *((_DWORD *)v1 + 1299) = 7;
  return result;
}


int __fastcall Player::startCooldown(int result, const Item *a2)
{
  const Item *v2; // r5@1
  int v3; // r4@1
  int v4; // r6@3

  v2 = a2;
  v3 = result;
  if ( a2 )
  {
    result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a2 + 224))(a2);
    if ( result != -1 )
    {
      v4 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 228))(v2);
      result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 224))(v2);
      *(_DWORD *)(*(_DWORD *)(v3 + 5256) + 4 * result) = v4;
    }
  }
  return result;
}


char *__fastcall Player::getClientId(Player *this)
{
  return (char *)this + 4392;
}


int __fastcall Player::isPushable(Player *this)
{
  return 0;
}


unsigned int __fastcall Player::setPlayerIndex(Player *this, int a2)
{
  Player *v2; // r4@1
  int v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  v3 = a2;
  result = SynchedEntityData::_get((Player *)((char *)this + 176), 28);
  v5 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v5 == 2 && *(_DWORD *)(result + 12) != v3 )
  {
    *(_DWORD *)(result + 12) = v3;
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


int __fastcall Player::stopSleepInBed(Player *this, int a2, int a3)
{
  int v4; // r5@1
  int v5; // r6@1
  int result; // r0@1
  int *v7; // r7@2
  BedBlock *v8; // r0@3
  bool v9; // r3@3
  BedBlock *v10; // r0@3
  Level *v17; // r0@7
  int v18; // r0@7
  int v20; // r0@11
  signed __int16 v21; // r0@12
  Level *v22; // r0@14
  PlayerChunkSource *v23; // r5@14
  int v24; // r0@16
  char v25; // r1@16
  int v26; // r0@17
  unsigned int v27; // r0@17
  unsigned int v28; // r1@17
  BlockPos *v29; // [sp+0h] [bp-40h]@3
  unsigned __int8 v30; // [sp+Ch] [bp-34h]@2
  int v31; // [sp+10h] [bp-30h]@2
  int v32; // [sp+14h] [bp-2Ch]@2
  int v33; // [sp+18h] [bp-28h]@2
  char v34; // [sp+1Ch] [bp-24h]@15

  _R4 = this;
  v4 = a2;
  v5 = a3;
  result = (*(int (**)(void))(*(_DWORD *)this + 784))();
  if ( result == 1 )
  {
    (*(void (__fastcall **)(Player *))(*(_DWORD *)_R4 + 680))(_R4);
    *((_DWORD *)_R4 + 79) = 1070554237;
    v7 = (int *)((char *)_R4 + 4636);
    v31 = *((_DWORD *)_R4 + 1159);
    v32 = *((_DWORD *)_R4 + 1160);
    v33 = *((_DWORD *)_R4 + 1161);
    BlockSource::getBlockID((BlockSource *)&v30, *((const BlockPos **)_R4 + 1158), (int)_R4 + 4636);
    if ( v30 == *(_BYTE *)(Block::mBed + 4) )
    {
      v8 = (BedBlock *)Entity::getRegion(_R4);
      BedBlock::setOccupied(v8, (Player *)((char *)_R4 + 4636), 0, v9);
      v10 = (BedBlock *)Entity::getRegion(_R4);
      if ( BedBlock::findStandUpPosition(v10, (Player *)((char *)_R4 + 4636), 0, (int)&v31, v29) == 1 )
      {
        _R1 = v32;
        _R2 = v31;
        _R0 = v33;
      }
      else
        _R2 = *v7;
        _R0 = *((_DWORD *)_R4 + 1161);
        _R1 = *((_DWORD *)_R4 + 1160) + 1;
        v31 = *v7;
        v32 = _R1;
        v33 = _R0;
      __asm
        VMOV            S4, R2
        VLDR            S2, =0.1
        VMOV            S8, R1
        VCVT.F32.S32    S4, S4
        VLDR            S6, [R4,#0x13C]
        VMOV.F32        S0, #0.5
        VADD.F32        S2, S6, S2
        VMOV            S6, R0
        VCVT.F32.S32    S8, S8
        VCVT.F32.S32    S6, S6
        VADD.F32        S4, S4, S0
        VADD.F32        S2, S2, S8
        VADD.F32        S0, S6, S0
        VSTR            S4, [SP,#0x40+var_40]
        VSTR            S2, [SP,#0x40+var_3C]
        VSTR            S0, [SP,#0x40+var_38]
      (*(void (__fastcall **)(Player *, BlockPos **))(*(_DWORD *)_R4 + 48))(_R4, &v29);
    }
    *((_BYTE *)_R4 + 5213) = 0;
    v17 = (Level *)Entity::getLevel(_R4);
    v18 = Level::isClientSide(v17);
    _ZF = v18 == 0;
    if ( !v18 )
      _ZF = v5 == 1;
    if ( _ZF )
      v20 = Entity::getLevel(_R4);
      (*(void (**)(void))(*(_DWORD *)v20 + 80))();
    v21 = 100;
    if ( v4 )
      v21 = 0;
    *((_WORD *)_R4 + 2454) = v21;
    *((_DWORD *)_R4 + 1300) = v31;
    *((_DWORD *)_R4 + 1301) = v32;
    *((_DWORD *)_R4 + 1302) = v33;
    *((_BYTE *)_R4 + 5212) = 0;
    v22 = (Level *)Entity::getLevel(_R4);
    Level::saveGameData(v22);
    v23 = (PlayerChunkSource *)*((_DWORD *)_R4 + 1157);
    if ( v23 )
      Vec3::Vec3((int)&v34, (int)_R4 + 5200);
      PlayerChunkSource::centerAt(v23, (const Vec3 *)&v34, 16.0);
    v24 = SynchedEntityData::_get((Player *)((char *)_R4 + 176), 27);
    v25 = *(_BYTE *)(v24 + 9);
    *(_BYTE *)(v24 + 9) = v25 & 0xFD;
    if ( v25 & 2 )
      v26 = SynchedEntityData::_get((Player *)((char *)_R4 + 176), 27);
      *(_BYTE *)(v26 + 8) = 1;
      v27 = *(_WORD *)(v26 + 6);
      v28 = *((_WORD *)_R4 + 94);
      if ( v28 >= v27 )
        LOWORD(v28) = v27;
      *((_WORD *)_R4 + 94) = v28;
      if ( *((_WORD *)_R4 + 95) > v27 )
        LOWORD(v27) = *((_WORD *)_R4 + 95);
      *((_WORD *)_R4 + 95) = v27;
    result = 5214;
    *((_BYTE *)_R4 + 5214) = 0;
  }
  return result;
}


void __fastcall Player::_registerElytraLoopSound(Player *this)
{
  Player::_registerElytraLoopSound(this);
}


void __fastcall Player::aiStep(Player *this)
{
  Level *v2; // r0@1
  AttributeInstance *v3; // r5@1
  Level *v4; // r0@1
  int v5; // r0@2
  void (__fastcall *v12)(Player *, int); // r6@5
  int v13; // r0@5
  float v15; // r1@5
  int v16; // r0@5
  float v19; // r1@5
  Level *v22; // r0@16
  Entity *v23; // r0@19
  char v24; // r0@20
  int v25; // r0@21
  char *v26; // r0@22
  char *v27; // r5@22
  __int64 v28; // r0@22
  unsigned int v29; // r7@23
  int v30; // r6@24
  int v31; // [sp+8h] [bp-A8h]@20
  signed int v32; // [sp+Ch] [bp-A4h]@20
  signed int v33; // [sp+10h] [bp-A0h]@20
  int v34; // [sp+14h] [bp-9Ch]@20
  int v35; // [sp+18h] [bp-98h]@20
  int v36; // [sp+1Ch] [bp-94h]@20
  int v37; // [sp+20h] [bp-90h]@20
  int v38; // [sp+24h] [bp-8Ch]@20
  int v39; // [sp+28h] [bp-88h]@20
  char v40; // [sp+2Ch] [bp-84h]@20
  int v41; // [sp+30h] [bp-80h]@21
  int v42; // [sp+34h] [bp-7Ch]@21
  signed int v43; // [sp+38h] [bp-78h]@21
  char v44; // [sp+3Ch] [bp-74h]@21
  int v45; // [sp+58h] [bp-58h]@21
  int v46; // [sp+5Ch] [bp-54h]@21
  int v47; // [sp+60h] [bp-50h]@21
  int v48; // [sp+64h] [bp-4Ch]@21
  int v49; // [sp+68h] [bp-48h]@21
  int v50; // [sp+6Ch] [bp-44h]@21
  char v51; // [sp+70h] [bp-40h]@21
  int v52; // [sp+74h] [bp-3Ch]@18
  int v53; // [sp+78h] [bp-38h]@20
  int v54; // [sp+7Ch] [bp-34h]@20
  int v55; // [sp+80h] [bp-30h]@20
  int v56; // [sp+84h] [bp-2Ch]@20
  int v57; // [sp+88h] [bp-28h]@20
  char v58; // [sp+8Ch] [bp-24h]@22

  _R4 = this;
  PlayerInventoryProxy::tick(*((PlayerInventoryProxy **)this + 1188));
  v2 = (Level *)Entity::getLevel(_R4);
  ItemInstance::inventoryTick((Player *)((char *)_R4 + 3584), v2, _R4, 0, 1);
  *((_DWORD *)_R4 + 1076) = *((_DWORD *)_R4 + 1077);
  v3 = (AttributeInstance *)(*(int (__fastcall **)(Player *, void *))(*(_DWORD *)_R4 + 1000))(
                              _R4,
                              &SharedAttributes::MOVEMENT_SPEED);
  v4 = (Level *)Entity::getLevel(_R4);
  if ( !Level::isClientSide(v4) )
  {
    v5 = Abilities::getFloat((int)_R4 + 4320, (int **)&Abilities::WALKSPEED);
    AttributeInstance::setDefaultValue(v3, *(float *)&v5, 2);
  }
  *((_DWORD *)_R4 + 1002) = 1017370378;
  if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)_R4 + 792))(_R4) == 1 )
    _R0 = (int)_R4 + 4008;
    __asm
    {
      VLDR            S0, =0.006
      VLDR            S2, [R0]
      VADD.F32        S0, S2, S0
      VSTR            S0, [R0]
    }
  _R7 = (int)_R4 + 4308;
  v12 = *(void (__fastcall **)(Player *, int))(*(_DWORD *)_R4 + 824);
  v13 = AttributeInstance::getCurrentValue(v3);
  v12(_R4, v13);
  __asm
    VLDR            S0, [R4,#0x6C]
    VLDR            S2, [R4,#0x74]
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  v16 = mce::Math::sqrt(_R0, v15);
  __asm { VLDR            S0, =-0.2 }
  _R6 = v16;
    VLDR            S2, [R4,#0x70]
    VMUL.F32        S0, S2, S0
  _R5 = mce::Math::atan(_R0, v19);
  if ( *((_BYTE *)_R4 + 216) )
      VMOV            S16, R6
      VLDR            S0, =0.1
      VCMPE.F32       S16, S0
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S16, S0 }
    if ( Mob::getHealth(_R4) <= 0 )
      __asm { VLDRLE          S16, =0.0 }
  else
    __asm { VLDR            S16, =0.0 }
  if ( *((_BYTE *)_R4 + 216) || Mob::getHealth(_R4) <= 0 )
    __asm { VLDR            S0, =0.0 }
      VMOV.F32        S0, #15.0
      VMOV            S2, R5
      VMUL.F32        S0, S2, S0
  __asm { VLDR            S2, [R7] }
  _R0 = (int)_R4 + 3460;
    VLDR            S6, =0.4
    VSUB.F32        S4, S16, S2
    VMUL.F32        S4, S4, S6
    VADD.F32        S2, S4, S2
    VLDR            S4, =0.8
    VSTR            S2, [R7]
    VLDR            S2, [R0]
    VSUB.F32        S0, S0, S2
    VMUL.F32        S0, S0, S4
    VADD.F32        S0, S0, S2
    VSTR            S0, [R0]
  v22 = (Level *)Entity::getLevel(_R4);
  if ( !Level::isClientSide(v22) && Mob::getHealth(_R4) >= 1 )
    AABB::AABB((AABB *)&v52);
    if ( Entity::isRiding(_R4) != 1 || (v23 = (Entity *)Entity::getRide(_R4), Entity::isRemoved(v23)) )
      v31 = 1065353216;
      v32 = 1056964608;
      v33 = 1065353216;
      AABB::grow((AABB *)&v34, (Player *)((char *)_R4 + 264), (int)&v31);
      v52 = v34;
      v53 = v35;
      v54 = v36;
      v55 = v37;
      v56 = v38;
      v57 = v39;
      v24 = v40;
    else
      v25 = Entity::getRide(_R4);
      AABB::merge((AABB *)&v44, (Player *)((char *)_R4 + 264), v25 + 264);
      v41 = 1065353216;
      v42 = 0;
      v43 = 1065353216;
      AABB::grow((AABB *)&v45, (const Vec3 *)&v44, (int)&v41);
      v52 = v45;
      v53 = v46;
      v54 = v47;
      v55 = v48;
      v56 = v49;
      v57 = v50;
      v24 = v51;
    v58 = v24;
    v26 = BlockSource::fetchEntities(*((BlockSource **)_R4 + 1158), _R4, (const AABB *)&v52);
    v27 = v26;
    v28 = *(_QWORD *)v26;
    if ( HIDWORD(v28) != (_DWORD)v28 )
      v29 = 0;
      do
      {
        v30 = *(_DWORD *)(v28 + 4 * v29);
        if ( !Entity::isRemoved(*(Entity **)(v28 + 4 * v29))
          && (*(int (__fastcall **)(Player *, int))(*(_DWORD *)_R4 + 1488))(_R4, v30) == 1 )
        {
          (*(void (__fastcall **)(int, Player *))(*(_DWORD *)v30 + 268))(v30, _R4);
        }
        v28 = *(_QWORD *)v27;
        ++v29;
      }
      while ( v29 < (HIDWORD(v28) - (signed int)v28) >> 2 );
  Player::updateTrackedBosses(_R4);
}


int __fastcall Player::canUseCommandBlocks(Player *this)
{
  Player *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( Abilities::getBool((int)this + 4320, (int **)&Abilities::INSTABUILD) == 1 )
    result = (*(int (__fastcall **)(Player *))(*(_DWORD *)v1 + 604))(v1) != 0;
  else
    result = 0;
  return result;
}


int __fastcall Player::getCameraOffset(Player *this)
{
  int result; // r0@3

  Mob::isGliding(this);
  __asm
  {
    VLDR            S2, =-1.1
    VLDR            S0, =0.0
  }
  if ( !_ZF )
    __asm { VMOVNE.F32      S0, S2 }
  __asm { VMOV            R0, S0 }
  return result;
}


void __fastcall Player::_registerElytraLoopSound(Player *this)
{
  Player *v1; // r4@1
  int v2; // r0@1
  int v3; // r5@1
  int v4; // r3@1
  int v5; // r2@1
  int (__fastcall *v6)(int, int *, _DWORD **); // r6@1
  _DWORD *v7; // r0@1
  __int64 v8; // r1@1
  __int64 v9; // r0@1
  void *v10; // r0@3
  unsigned int *v11; // r2@5
  signed int v12; // r1@7
  _DWORD *v13; // [sp+4h] [bp-2Ch]@1
  __int64 v14; // [sp+Ch] [bp-24h]@1
  int v15; // [sp+18h] [bp-18h]@1

  v1 = this;
  v2 = Entity::getLevel(this);
  v4 = *((_DWORD *)v1 + 1313);
  v5 = *((_DWORD *)v1 + 1312);
  v3 = *(_DWORD *)(v2 + 60);
  (*(void (**)(void))(*(_DWORD *)v3 + 52))();
  v6 = *(int (__fastcall **)(int, int *, _DWORD **))(*(_DWORD *)v3 + 48);
  sub_21E94B4((void **)&v15, "elytra.loop");
  v7 = operator new(4u);
  LODWORD(v8) = sub_177776C;
  *v7 = v1;
  HIDWORD(v8) = sub_17776C8;
  v13 = v7;
  v14 = v8;
  LODWORD(v9) = v6(v3, &v15, &v13);
  *((_QWORD *)v1 + 656) = v9;
  if ( (_DWORD)v14 )
    ((void (*)(void))v14)();
  v10 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
}


int __fastcall Player::inventoryChanged(Player *this, Container *a2, int a3, const ItemInstance *a4, const ItemInstance *a5)
{
  Player *v5; // r4@1
  int v6; // r2@1
  int v7; // r3@1
  int result; // r0@11
  int v9; // [sp+0h] [bp-B0h]@1
  char v10; // [sp+4h] [bp-ACh]@1
  int v11; // [sp+8h] [bp-A8h]@1
  int v12; // [sp+Ch] [bp-A4h]@1
  int v13; // [sp+10h] [bp-A0h]@1
  int v14; // [sp+18h] [bp-98h]@11
  void *v15; // [sp+34h] [bp-7Ch]@9
  void *v16; // [sp+44h] [bp-6Ch]@7
  int v17; // [sp+58h] [bp-58h]@1
  int v18; // [sp+60h] [bp-50h]@5
  void *v19; // [sp+7Ch] [bp-34h]@3
  void *ptr; // [sp+8Ch] [bp-24h]@1

  v5 = this;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = a3;
  ItemInstance::ItemInstance((ItemInstance *)&v13, (int)a4);
  ItemInstance::ItemInstance((ItemInstance *)&v17, (int)a5);
  InventoryTransactionManager::addAction((int)v5 + 5152, (int)&v9);
  if ( ptr )
    operator delete(ptr);
  if ( v19 )
    operator delete(v19);
  if ( v18 )
    (*(void (__cdecl **)(int, _DWORD, int, int))(*(_DWORD *)v18 + 4))(v18, *(_DWORD *)(*(_DWORD *)v18 + 4), v6, v7);
  v18 = 0;
  if ( v16 )
    operator delete(v16);
  if ( v15 )
    operator delete(v15);
  result = v14;
  if ( v14 )
    result = (*(int (__cdecl **)(int, _DWORD, int, int))(*(_DWORD *)v14 + 4))(
               v14,
               *(_DWORD *)(*(_DWORD *)v14 + 4),
               v6,
               v7);
  return result;
}


BlockSource *__fastcall Player::recheckSpawnPosition(Player *this)
{
  BlockSource *result; // r0@1
  int v3; // r1@8
  Player *v4; // r2@9
  char *v5; // r0@9
  int v6; // r0@10
  int *v7; // r7@10
  BlockSourceListener *v8; // r6@11
  int v9; // r0@11
  int v20; // r0@17
  char *v21; // r5@19
  signed int v22; // r6@19
  Level *v23; // r0@25
  int v24; // r2@26
  int v25; // r2@27
  int v26; // r1@27
  const ChunkPos *v27; // r5@28
  int v28; // r6@31
  int v29; // r5@32
  int v30; // r9@32
  Level *v31; // r0@32
  char *v32; // r0@32
  int v34; // r5@38
  unsigned int *v35; // r1@39
  unsigned int v36; // r0@41
  int v37; // r4@44
  unsigned int *v38; // r1@45
  unsigned int *v39; // r6@51
  unsigned int v40; // r0@53
  unsigned int *v41; // r1@56
  char *v42; // r6@60
  char *v43; // r5@60
  Level *v44; // r0@66
  char *v45; // r0@66
  int v49; // r1@67
  void (*v50)(void); // r5@67
  int v51; // r2@67
  int v52; // r3@67
  int v53; // r3@67
  unsigned int *v54; // r5@74
  Level *v55; // r0@84
  char *v56; // r0@84
  unsigned int *v57; // r1@85
  void **v58; // [sp+8h] [bp-1A0h]@67
  signed int v59; // [sp+Ch] [bp-19Ch]@67
  signed int v60; // [sp+10h] [bp-198h]@67
  char v61; // [sp+14h] [bp-194h]@67
  int v62; // [sp+18h] [bp-190h]@67
  int v63; // [sp+1Ch] [bp-18Ch]@67
  int v64; // [sp+20h] [bp-188h]@67
  char *v65; // [sp+28h] [bp-180h]@60
  int v66; // [sp+2Ch] [bp-17Ch]@60
  char *v67; // [sp+30h] [bp-178h]@60
  char *v68; // [sp+34h] [bp-174h]@60
  char *v69; // [sp+38h] [bp-170h]@60
  int v70; // [sp+3Ch] [bp-16Ch]@60
  int v71; // [sp+40h] [bp-168h]@60
  int v72; // [sp+44h] [bp-164h]@60
  char *v73; // [sp+48h] [bp-160h]@60
  int v74; // [sp+4Ch] [bp-15Ch]@60
  char *v75; // [sp+54h] [bp-154h]@60
  char *v76; // [sp+58h] [bp-150h]@60
  char *v77; // [sp+5Ch] [bp-14Ch]@60
  char v78; // [sp+60h] [bp-148h]@60
  int v79; // [sp+6Ch] [bp-13Ch]@66
  int v80; // [sp+70h] [bp-138h]@66
  int v81; // [sp+74h] [bp-134h]@66
  char *v82; // [sp+78h] [bp-130h]@19
  int v83; // [sp+7Ch] [bp-12Ch]@19
  char *v84; // [sp+84h] [bp-124h]@19
  char *v85; // [sp+88h] [bp-120h]@19
  char *v86; // [sp+8Ch] [bp-11Ch]@19
  char v87; // [sp+90h] [bp-118h]@11
  int v88; // [sp+104h] [bp-A4h]@84
  int v89; // [sp+108h] [bp-A0h]@84
  int v90; // [sp+10Ch] [bp-9Ch]@84
  char v91; // [sp+110h] [bp-98h]@28
  int v92; // [sp+11Ch] [bp-8Ch]@28
  int v93; // [sp+120h] [bp-88h]@38
  int v94; // [sp+124h] [bp-84h]@26
  int v95; // [sp+128h] [bp-80h]@26
  int v96; // [sp+12Ch] [bp-7Ch]@26
  int v97; // [sp+130h] [bp-78h]@26
  int v98; // [sp+134h] [bp-74h]@26
  int v99; // [sp+138h] [bp-70h]@26
  int v100; // [sp+13Ch] [bp-6Ch]@1
  int v101; // [sp+140h] [bp-68h]@1
  int v102; // [sp+144h] [bp-64h]@1
  char v103; // [sp+148h] [bp-60h]@64
  float v104; // [sp+154h] [bp-54h]@64
  int v105; // [sp+158h] [bp-50h]@64
  char v107; // [sp+160h] [bp-48h]@24
  float v108; // [sp+16Ch] [bp-3Ch]@24
  int v109; // [sp+170h] [bp-38h]@24

  _R4 = this;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  result = (BlockSource *)(*(int (**)(void))(*(_DWORD *)this + 524))();
  if ( result != *((BlockSource **)_R4 + 1206) )
    return result;
  if ( *((_BYTE *)_R4 + 4821)
    || *((_BYTE *)_R4 + 4829)
    && (*(int (__fastcall **)(Player *))(*(_DWORD *)_R4 + 316))(_R4) == 1
    && *((_DWORD *)_R4 + 1073) != 4 )
  {
    v6 = (*(int (__fastcall **)(Player *))(*(_DWORD *)_R4 + 52))(_R4);
    v100 = *(_DWORD *)v6;
    v101 = *(_DWORD *)(v6 + 4);
    v102 = *(_DWORD *)(v6 + 8);
    v7 = (int *)((char *)_R4 + 4628);
    goto LABEL_11;
  }
  if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)_R4 + 316))(_R4) == 1 && *((_DWORD *)_R4 + 1073) != 4 )
    v25 = *((_DWORD *)_R4 + 67);
    v26 = *((_DWORD *)_R4 + 20);
    v100 = *((_DWORD *)_R4 + 18);
    v101 = v25;
    v102 = v26;
  else
    v3 = *((_DWORD *)_R4 + 1301);
    if ( v3 < 0 )
    {
      v23 = (Level *)Entity::getLevel(_R4);
      v5 = Level::getSharedSpawnPos(v23);
      v3 = *((_DWORD *)v5 + 1);
      v4 = (Player *)(v5 + 8);
    }
    else
      v4 = (Player *)((char *)_R4 + 5208);
      v5 = (char *)_R4 + 5200;
    v24 = *(_DWORD *)v4;
    v94 = *(_DWORD *)v5;
    v95 = v3;
    v96 = v24;
    Vec3::Vec3((int)&v97, (int)&v94);
    v100 = v97;
    v101 = v98;
    v102 = v99;
  v27 = (const ChunkPos *)*((_DWORD *)_R4 + 1157);
  ChunkPos::ChunkPos((int)&v91, (int)&v100);
  ChunkSource::getAvailableChunk((ChunkSource *)&v92, v27);
  v7 = (int *)((char *)_R4 + 4628);
  if ( !v92 )
    result = (BlockSource *)*v7;
    if ( *v7 )
      result = (BlockSource *)PlayerChunkSource::centerAt(result, (const Vec3 *)&v100, 16.0);
      v37 = v93;
      if ( !v93 )
        return result;
      v38 = (unsigned int *)(v93 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (BlockSource *)__ldrex(v38);
        while ( __strex((unsigned int)result - 1, v38) );
      }
      else
        result = (BlockSource *)(*v38)--;
      if ( result != (BlockSource *)1 )
      v54 = (unsigned int *)(v37 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 8))(v37);
      if ( !&pthread_create )
        goto LABEL_95;
      __dmb();
      do
        result = (BlockSource *)__ldrex(v54);
      while ( __strex((unsigned int)result - 1, v54) );
      v41 = (unsigned int *)(v93 + 4);
          result = (BlockSource *)__ldrex(v41);
        while ( __strex((unsigned int)result - 1, v41) );
        result = (BlockSource *)(*v41)--;
LABEL_96:
    if ( result == (BlockSource *)1 )
      result = (BlockSource *)(*(int (__fastcall **)(int))(*(_DWORD *)v37 + 12))(v37);
  if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)_R4 + 316))(_R4) )
    goto LABEL_100;
  if ( *((_BYTE *)_R4 + 5212) )
  v28 = *((_DWORD *)_R4 + 1301);
  if ( v28 < 0 )
  v29 = *((_DWORD *)_R4 + 1302);
  v30 = *((_DWORD *)_R4 + 1300);
  v31 = (Level *)Entity::getLevel(_R4);
  v32 = Level::getSharedSpawnPos(v31);
  _ZF = v30 == *(_DWORD *)v32;
  if ( v30 == *(_DWORD *)v32 )
    _ZF = v28 == *((_DWORD *)v32 + 1);
  if ( _ZF && v29 == *((_DWORD *)v32 + 2) || Player::checkBed(_R4, 1) )
LABEL_100:
    v34 = v93;
    if ( v93 )
      v35 = (unsigned int *)(v93 + 4);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 == 1 )
        v39 = (unsigned int *)(v34 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 8))(v34);
        if ( &pthread_create )
        {
          __dmb();
          do
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
        }
        else
          v40 = (*v39)--;
        if ( v40 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 12))(v34);
LABEL_11:
    v8 = (BlockSourceListener *)Entity::getLevel(_R4);
    v9 = Entity::getDimension(_R4);
    BlockSource::BlockSource((int)&v87, v8, v9, *v7, 1, 0);
    __asm { VLDR            S16, [SP,#0x1A8+var_68] }
    _R0 = *(_WORD *)(Entity::getDimension(_R4) + 120);
    __asm
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VCMPE.F32       S16, S0
      VMRS            APSR_nzcv, FPSCR
    if ( !(_NF ^ _VF) )
      __asm
        VLDR            S0, [SP,#0x1A8+var_6C]
        VLDR            S2, [SP,#0x1A8+var_64]
        VCVTR.S32.F32   S0, S0
        VCVTR.S32.F32   S2, S2
        VMOV            R1, S0
        VMOV            R2, S2
      _R0 = BlockSource::getAboveTopSolidBlock((BlockSource *)&v87, _R1, _R2, 1, 1);
        VMOV            S0, R0
        VCVT.F32.S32    S0, S0
        VSTR            S0, [SP,#0x1A8+var_68]
    if ( *((_BYTE *)_R4 + 4823) )
      __asm { VMOV.F32        S0, #5.0 }
      *((_BYTE *)_R4 + 4823) = 0;
        VLDR            S2, [SP,#0x1A8+var_6C]
        VADD.F32        S0, S2, S0
        VSTR            S0, [SP,#0x1A8+var_6C]
    if ( *((_DWORD *)_R4 + 1308) == 2 )
      goto LABEL_67;
    if ( Abilities::isFlying((Player *)((char *)_R4 + 4320)) )
    v20 = Entity::getDimension(_R4);
    if ( (*(int (**)(void))(*(_DWORD *)v20 + 132))() != 1 )
    if ( *((_BYTE *)_R4 + 4829) )
      v82 = &v87;
      v83 = *((_DWORD *)_R4 + 1158);
      v21 = (char *)operator new(8u);
      v84 = v21;
      v86 = v21 + 8;
      *(_QWORD *)v21 = *(_QWORD *)&v82;
      v85 = v21 + 8;
      v22 = Player::fixSpawnPosition((int)_R4, (int)&v100, (unsigned __int64 *)&v84);
      operator delete(v21);
      if ( !v22 )
        v44 = (Level *)Entity::getLevel(_R4);
        v45 = Level::getSharedSpawnPos(v44);
        Vec3::Vec3((int)&v79, (int)v45);
        v100 = v79;
        __asm { VMOV            S0, R0 }
        v101 = v80;
        __asm { VCVTR.S32.F32   S0, S0 }
        v102 = v81;
        __asm
          VMOV            S2, R0
          VCVTR.S32.F32   S2, S2
          VMOV            R1, S0
          VMOV            R2, S2
        _R0 = BlockSource::getAboveTopSolidBlock((BlockSource *)&v87, _R1, _R2, 1, 1);
          VMOV            S0, R0
          VCVT.F32.S32    S0, S0
          VSTR            S0, [SP,#0x1A8+var_68]
        *((_BYTE *)_R4 + 4822) = 1;
        goto LABEL_67;
        VLDR            S6, [SP,#0x1A8+var_64]
        VMOV.F32        S16, #0.5
        VLDR            S4, [SP,#0x1A8+var_6C]
        VABS.F32        S8, S6
        VLDR            S0, [R4,#0x110]
        VLDR            S2, [R4,#0x11C]
        VABS.F32        S4, S4
        VSUB.F32        S0, S2, S0
        VCVTR.S32.F32   S2, S8
        VCVTR.S32.F32   S6, S4
        VMUL.F32        S0, S0, S16
        VCVT.F32.S32    S10, S2
        VCVT.F32.S32    S6, S6
        VABS.F32        S2, S0
        VSUB.F32        S0, S8, S10
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      if ( !(_NF ^ _VF) )
          VLDR            S8, [R4,#0x108]
          VSUB.F32        S4, S4, S6
          VLDR            S10, [R4,#0x114]
          VSUB.F32        S8, S10, S8
          VMUL.F32        S8, S8, S16
          VABS.F32        S8, S8
          VCMPE.F32       S4, S8
          VMRS            APSR_nzcv, FPSCR
        if ( !(_NF ^ _VF) )
          __asm
          {
            VMOV.F32        S6, #1.0
            VSUB.F32        S8, S6, S8
            VCMPE.F32       S4, S8
            VMRS            APSR_nzcv, FPSCR
          }
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            __asm
            {
              VSUBLE.F32      S2, S6, S2
              VCMPELE.F32     S0, S2
              VMRSLE          APSR_nzcv, FPSCR
            }
LABEL_67:
              VLDR            S0, =1.62
              VLDR            S2, [SP,#0x1A8+var_68]
              VADD.F32        S0, S2, S0
            v49 = v102;
            *((_DWORD *)_R4 + 1165) = v100;
            __asm { VSTR            S0, [R7] }
            *((_DWORD *)_R4 + 1167) = v49;
            *((_BYTE *)_R4 + 4821) = 1;
            v50 = *(void (**)(void))(**((_DWORD **)_R4 + 1231) + 16);
            v59 = 2;
            v60 = 1;
            v61 = 0;
            v58 = &off_26E94CC;
            v51 = *((_DWORD *)_R4 + 1166);
            v52 = *((_DWORD *)_R4 + 1165);
            v64 = *((_DWORD *)_R4 + 1167);
            v62 = v52;
            v63 = v51;
            v53 = *((_BYTE *)_R4 + 4820);
            v50();
            return BlockSource::~BlockSource((BlockSource *)&v87);
      BlockPos::BlockPos((int)&v107, (int)&v100);
      Vec3::Vec3((int)&v108, (int)&v107);
      __asm { VLDR            S0, [SP,#0x1A8+var_3C] }
      v101 = v109;
      __asm { VLDR            S2, [SP,#0x1A8+var_34] }
      BlockPos::BlockPos((int)&v78, (int)&v100);
      v73 = &v87;
      v74 = *((_DWORD *)_R4 + 1158);
      v42 = (char *)operator new(8u);
      v75 = v42;
      v77 = v42 + 8;
      *(_QWORD *)v42 = *(_QWORD *)&v73;
      v76 = v42 + 8;
      Player::fixStartSpawnPosition((int)_R4, (int)&v78, (unsigned __int64 *)&v75);
      operator delete(v42);
      Vec3::Vec3((int)&v70, (int)&v78);
      v100 = v70;
      v101 = v71;
      v102 = v72;
      v65 = &v87;
      v66 = *((_DWORD *)_R4 + 1158);
      v43 = (char *)operator new(8u);
      v67 = v43;
      v69 = v43 + 8;
      *(_QWORD *)v43 = *(_QWORD *)&v65;
      v68 = v43 + 8;
      Player::fixSpawnPosition((int)_R4, (int)&v100, (unsigned __int64 *)&v67);
      operator delete(v43);
            goto LABEL_67;
      BlockPos::BlockPos((int)&v103, (int)&v100);
      Vec3::Vec3((int)&v104, (int)&v103);
        VLDR            S0, [SP,#0x1A8+var_54]
        VLDR            S2, [SP,#0x1A8+var_4C]
      v101 = v105;
      VADD.F32        S0, S0, S16
      VADD.F32        S2, S2, S16
      VSTR            S0, [SP,#0x1A8+var_6C]
      VSTR            S2, [SP,#0x1A8+var_64]
    goto LABEL_67;
  BlockPos::BlockPos((int)&v88, (int)&Vec3::ZERO);
  *((_DWORD *)_R4 + 1159) = v88;
  *((_DWORD *)_R4 + 1160) = v89;
  *((_DWORD *)_R4 + 1161) = v90;
  v55 = (Level *)Entity::getLevel(_R4);
  v56 = Level::getSharedSpawnPos(v55);
  *((_DWORD *)_R4 + 1300) = *(_DWORD *)v56;
  *((_DWORD *)_R4 + 1301) = *((_DWORD *)v56 + 1);
  *((_DWORD *)_R4 + 1302) = *((_DWORD *)v56 + 2);
  result = (BlockSource *)4822;
  *((_BYTE *)_R4 + 4822) = 1;
  v37 = v93;
  if ( v93 )
    v57 = (unsigned int *)(v93 + 4);
    if ( &pthread_create )
        result = (BlockSource *)__ldrex(v57);
      while ( __strex((unsigned int)result - 1, v57) );
      result = (BlockSource *)(*v57)--;
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v37 + 8))(v37);
          result = (BlockSource *)__ldrex(v54);
        while ( __strex((unsigned int)result - 1, v54) );
        goto LABEL_96;
LABEL_95:
      result = (BlockSource *)(*v54)--;
      goto LABEL_96;
  return result;
}


signed int __fastcall Player::isCreativeModeAllowed(Player *this)
{
  return 1;
}


int __fastcall Player::unRegisterTrackedBoss(int result, int a2, __int64 a3)
{
  int v3; // r1@1
  _QWORD *v4; // lr@1
  int v5; // r4@1
  int v6; // r5@2
  bool v7; // zf@3
  int v8; // r4@3
  bool v9; // zf@6
  int v10; // r4@11
  _QWORD *v11; // r8@23
  __int64 v12; // kr00_8@26
  int v13; // r6@26

  v3 = *(_DWORD *)(result + 4968);
  v4 = *(_QWORD **)(result + 4972);
  v5 = ((signed int)v4 - v3) >> 5;
  if ( v5 < 1 )
  {
LABEL_10:
    if ( 1 == ((signed int)v4 - v3) >> 3 )
    {
      v8 = v3;
    }
    else
      v10 = ((signed int)v4 - v3) >> 3;
      if ( v10 == 2 )
      {
        v8 = v3;
      }
      else
        if ( v10 != 3 )
        {
          v8 = *(_DWORD *)(result + 4972);
          goto LABEL_23;
        }
        if ( *(_QWORD *)v3 == a3 )
        v8 = v3 + 8;
      if ( *(_QWORD *)v8 == a3 )
        goto LABEL_23;
      v8 += 8;
    if ( *(_QWORD *)v8 != a3 )
      v8 = *(_DWORD *)(result + 4972);
  }
  else
    v6 = v5 + 1;
    while ( 1 )
      v7 = *(_QWORD *)v3 == a3;
      if ( *(_QWORD *)v3 != a3 )
        v7 = *(_QWORD *)(v3 + 8) == a3;
      if ( v7 )
        break;
      v8 = v3 + 16;
      v9 = *(_QWORD *)(v3 + 16) == a3;
      if ( *(_QWORD *)(v3 + 16) != a3 )
        v8 = v3 + 24;
        v9 = *(_QWORD *)(v3 + 24) == a3;
      if ( v9 )
      --v6;
      v3 += 32;
      if ( v6 <= 1 )
        goto LABEL_10;
LABEL_23:
  v11 = *(_QWORD **)(result + 4972);
  if ( (_QWORD *)v8 != v4 )
    v11 = (_QWORD *)v8;
    while ( v4 - 1 != (_QWORD *)v8 )
      v12 = *(_QWORD *)(v8 + 8);
      v13 = v8 + 8;
      if ( a3 != v12 )
        *v11 = v12;
        ++v11;
        v8 = v13;
  if ( v11 != v4 )
    result += 4972;
    *(_DWORD *)result = v11;
  return result;
}


signed int __fastcall Player::getPortalCooldown(Player *this)
{
  return 10;
}


int __fastcall Player::dropCursorSelectedItem(Player *this)
{
  Player *v1; // r4@1

  v1 = this;
  (*(void (**)(void))(*(_DWORD *)this + 664))();
  return j_j_j__ZN6Player21setCursorSelectedItemERK12ItemInstance_0(v1, (const ItemInstance *)&ItemInstance::EMPTY_ITEM);
}


signed int __fastcall Player::_addLevels(Player *this, int a2)
{
  AttributeInstance *v4; // r0@1
  int v11; // r7@1
  AttributeInstance *v12; // r0@1
  __int64 v13; // r2@1
  AttributeInstance *v14; // r6@1
  AttributeInstance *v16; // r0@3
  AttributeInstance *v17; // r0@4
  Level *v24; // r5@11
  int v25; // r6@11
  signed int result; // r0@12
  char v27; // [sp+14h] [bp-6Ch]@11
  char v28; // [sp+20h] [bp-60h]@2

  _R4 = this;
  _R5 = a2;
  v4 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)this + 1004))();
  _R0 = AttributeInstance::getCurrentValue(v4);
  __asm
  {
    VMOV            S0, R0
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  v11 = _R0 + _R5;
  v12 = (AttributeInstance *)(*(int (__fastcall **)(Player *, void *))(*(_DWORD *)_R4 + 1000))(_R4, &Player::LEVEL);
  v14 = v12;
  if ( v11 <= -1 )
    AttributeInstance::resetToMinValue(v12);
    v16 = (AttributeInstance *)(*(int (__fastcall **)(Player *, void *))(*(_DWORD *)_R4 + 1000))(
                                 _R4,
                                 &Player::EXPERIENCE);
    AttributeInstance::resetToMinValue(v16);
    *((_DWORD *)_R4 + 1297) = 0;
    *((_BYTE *)_R4 + 5192) = 0;
    *((_DWORD *)_R4 + 1299) = 7;
  else
    __asm { VMOV            S0, R5 }
    LODWORD(v13) = 9;
    __asm
    {
      VCVT.F32.S32    S0, S0
      VMOV            R1, S0
    }
    InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)&v28, _R1, v13);
    AttributeInstance::addBuff(v14, (const AttributeBuff *)&v28);
    InstantaneousAttributeBuff::~InstantaneousAttributeBuff((InstantaneousAttributeBuff *)&v28);
  v17 = (AttributeInstance *)(*(int (__fastcall **)(Player *, void *))(*(_DWORD *)_R4 + 1004))(_R4, &Player::LEVEL);
  _R0 = AttributeInstance::getCurrentValue(v17);
  if ( !(_NF ^ _VF) )
    __asm { VMOV            R0, S0 }
    _R1 = 1717986919;
    __asm { SMMUL.W         R1, R0, R1 }
    if ( _R0 == 5 * (((signed int)_R1 >> 1) + (_R1 >> 31)) )
      __asm { VLDR            S2, [R4,#0x1A0] }
      _R7 = (Player *)((char *)_R4 + 5188);
      __asm
      {
        VLDR            S6, =-100.0
        VCVT.F32.S32    S2, S2
        VLDR            S4, [R7]
        VCVT.F32.S32    S4, S4
        VADD.F32        S2, S2, S6
        VCMPE.F32       S4, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        if ( _R0 <= 30 )
        {
          __asm
          {
            VCVT.F32.S32    S0, S0
            VLDR            S2, =5.3687e7
            VMUL.F32        S0, S0, S2
            VCVTR.S32.F32   S0, S0
            VMOV            R9, S0
          }
        }
        else
          _R9 = 1610612736;
        v24 = (Level *)Entity::getLevel(_R4);
        v25 = Entity::getRegion(_R4);
        Entity::getAttachPos((AABB *)&v27, (int)_R4, 1, 0);
        Level::broadcastSoundEvent(v24, v25, 60, (int)&v27, _R9, 1, 0, 0);
        *(_DWORD *)_R7 = *((_DWORD *)_R4 + 104);
  result = 5192;
  *((_BYTE *)_R4 + 5192) = 1;
  return result;
}


PlayerChunkSource *__fastcall Player::moveView(Player *this)
{
  Player *v1; // r1@1
  PlayerChunkSource *result; // r0@1
  bool v3; // zf@1

  v1 = this;
  result = (PlayerChunkSource *)*((_DWORD *)this + 1156);
  v3 = result == 0;
  if ( result )
    v3 = *((_BYTE *)v1 + 4829) == 0;
  if ( !v3 )
    result = (PlayerChunkSource *)j_j_j__ZN17PlayerChunkSource6centerEf(result, 16.0);
  return result;
}


int __fastcall Player::travel(Player *this, float a2, float a3)
{
  char *v4; // r7@1
  float v5; // r5@1
  float v6; // r6@1
  int v11; // r8@2
  __int64 v13; // r1@5
  Level *v14; // r0@5
  Level *v15; // r0@6
  int v16; // r0@6
  int v17; // r7@7
  __int64 v18; // r1@9
  Level *v19; // r0@9
  Level *v20; // r0@10
  int v21; // r0@10
  float v23; // [sp+4h] [bp-B4h]@11
  char v24; // [sp+10h] [bp-A8h]@10
  void **v25; // [sp+18h] [bp-A0h]@10
  int v26; // [sp+1Ch] [bp-9Ch]@10
  int v27; // [sp+20h] [bp-98h]@10
  char v28; // [sp+24h] [bp-94h]@10
  int v29; // [sp+28h] [bp-90h]@10
  int v30; // [sp+2Ch] [bp-8Ch]@10
  int v31; // [sp+30h] [bp-88h]@10
  int v32; // [sp+34h] [bp-84h]@10
  int v33; // [sp+38h] [bp-80h]@10
  __int64 v34; // [sp+40h] [bp-78h]@10
  char v35; // [sp+48h] [bp-70h]@6
  void **v36; // [sp+50h] [bp-68h]@6
  int v37; // [sp+54h] [bp-64h]@6
  int v38; // [sp+58h] [bp-60h]@6
  char v39; // [sp+5Ch] [bp-5Ch]@6
  int v40; // [sp+60h] [bp-58h]@6
  int v41; // [sp+64h] [bp-54h]@6
  int v42; // [sp+68h] [bp-50h]@6
  int v43; // [sp+6Ch] [bp-4Ch]@6
  int v44; // [sp+70h] [bp-48h]@6
  __int64 v45; // [sp+78h] [bp-40h]@6

  _R4 = this;
  v4 = (char *)this + 4320;
  v5 = a3;
  v6 = a2;
  __asm
  {
    VLDR            S16, [R4,#0x48]
    VLDR            S18, [R4,#0x4C]
    VLDR            S20, [R4,#0x50]
  }
  if ( Abilities::isFlying((Player *)((char *)this + 4320)) == 1 )
    v11 = *((_DWORD *)_R4 + 1002);
    __asm { VLDR            S22, [R4,#0x70] }
    _R7 = Abilities::getFloat((int)v4, (int **)&Abilities::FLYSPEED);
    (*(void (__fastcall **)(Player *))(*(_DWORD *)_R4 + 792))(_R4);
    __asm
    {
      VMOV.F32        S2, #2.0
      VMOV.F32        S0, #1.0
    }
    if ( !_ZF )
      __asm { VMOVNE.F32      S0, S2 }
      VMOV            S2, R7
      VMUL.F32        S0, S0, S2
      VSTR            S0, [R0]
    Mob::travel(_R4, v6, v5);
      VLDR            S0, =0.6
      VMUL.F32        S0, S22, S0
      VSTR            S0, [R4,#0x70]
    *((_DWORD *)_R4 + 1002) = v11;
    *((_DWORD *)_R4 + 56) = 0;
    if ( Mob::isGliding(_R4) == 1 )
      Entity::setStatusFlag((int)_R4, 30, 0);
      v13 = *(_QWORD *)(*(_DWORD *)(*((_DWORD *)_R4 + 12) + 116) + 4);
      (*(void (__fastcall **)(Player *, _DWORD, _DWORD))(*(_DWORD *)_R4 + 680))(_R4, v13, HIDWORD(v13));
      v14 = (Level *)Entity::getLevel(_R4);
      if ( Level::isClientSide(v14) == 1 )
      {
        Entity::getRuntimeID((Entity *)&v35, (int)_R4);
        v37 = 2;
        v38 = 1;
        v39 = 0;
        v36 = &off_26DA670;
        v42 = 0;
        v43 = 0;
        v40 = 0;
        v41 = 0;
        v44 = 16;
        v45 = *(_QWORD *)&v35;
        v15 = (Level *)Entity::getLevel(_R4);
        v16 = Level::getPacketSender(v15);
        (*(void (**)(void))(*(_DWORD *)v16 + 8))();
      }
  else
    v17 = Mob::isGliding(_R4);
    if ( v17 == 1 )
      if ( *((_BYTE *)_R4 + 216) )
        Entity::setStatusFlag((int)_R4, 30, 0);
        v18 = *(_QWORD *)(*(_DWORD *)(*((_DWORD *)_R4 + 12) + 116) + 4);
        (*(void (__fastcall **)(Player *, _DWORD, _DWORD))(*(_DWORD *)_R4 + 680))(_R4, v18, HIDWORD(v18));
        v19 = (Level *)Entity::getLevel(_R4);
        if ( Level::isClientSide(v19) == 1 )
        {
          Entity::getRuntimeID((Entity *)&v24, (int)_R4);
          v26 = 2;
          v27 = 1;
          v28 = 0;
          v25 = &off_26DA670;
          v31 = 0;
          v32 = 0;
          v29 = 0;
          v30 = 0;
          v33 = 16;
          v34 = *(_QWORD *)&v24;
          v20 = (Level *)Entity::getLevel(_R4);
          v21 = Level::getPacketSender(v20);
          (*(void (**)(void))(*(_DWORD *)v21 + 8))();
        }
    VLDR            S0, [R4,#0x48]
    VLDR            S2, [R4,#0x4C]
    VLDR            S4, [R4,#0x50]
    VSUB.F32        S0, S0, S16
    VSUB.F32        S2, S2, S18
    VSUB.F32        S4, S4, S20
    VSTR            S0, [SP,#0xB8+var_B4]
    VSTR            S2, [SP,#0xB8+var_B0]
    VSTR            S4, [SP,#0xB8+var_AC]
  return (*(int (__fastcall **)(Player *, float *))(*(_DWORD *)_R4 + 1232))(_R4, &v23);
}


int __fastcall Player::setSpeed(int result, float a2)
{
  *(float *)(result + 4108) = a2;
  return result;
}


signed int __fastcall Player::isHurt(Player *this)
{
  Player *v1; // r5@1
  signed int v2; // r4@1
  int v3; // r6@2

  v1 = this;
  v2 = 0;
  if ( Mob::getHealth(this) >= 1 )
  {
    v3 = Mob::getHealth(v1);
    if ( v3 < Mob::getMaxHealth(v1) )
      v2 = 1;
  }
  return v2;
}


int __fastcall Player::drop(Player *this, const ItemInstance *a2, int a3)
{
  Entity *v3; // r5@1
  const ItemInstance *v4; // r4@1
  char *v5; // r7@1
  int v6; // r6@1
  Ability *v7; // r0@1
  Ability *v8; // r0@2
  int result; // r0@2
  bool v10; // zf@4
  Level *v11; // r0@19
  const ItemInstance *v12; // r2@19
  __int16 v13; // [sp+5h] [bp-BBh]@0
  char v14; // [sp+7h] [bp-B9h]@0
  int v15; // [sp+8h] [bp-B8h]@7
  char v16; // [sp+Ch] [bp-B4h]@7
  __int16 v17; // [sp+Dh] [bp-B3h]@7
  char v18; // [sp+Fh] [bp-B1h]@7
  int v19; // [sp+10h] [bp-B0h]@7
  int v20; // [sp+14h] [bp-ACh]@7
  int v21; // [sp+18h] [bp-A8h]@7
  int v22; // [sp+20h] [bp-A0h]@17
  void *v23; // [sp+3Ch] [bp-84h]@15
  void *v24; // [sp+4Ch] [bp-74h]@13
  int v25; // [sp+60h] [bp-60h]@7
  int v26; // [sp+68h] [bp-58h]@11
  void *v27; // [sp+84h] [bp-3Ch]@9
  void *ptr; // [sp+94h] [bp-2Ch]@7

  v3 = this;
  v4 = a2;
  v5 = (char *)this + 4320;
  v6 = a3;
  v7 = (Ability *)Abilities::getAbility((int)this + 4320, &Abilities::DOORS_AND_SWITCHES);
  if ( Ability::getBool(v7)
    || (v8 = (Ability *)Abilities::getAbility((int)v5, (int **)&Abilities::WORLDBUILDER),
        result = Ability::getBool(v8),
        result == 1) )
  {
    result = *((_BYTE *)v4 + 15);
    if ( *((_BYTE *)v4 + 15) )
    {
      result = *(_DWORD *)v4;
      v10 = *(_DWORD *)v4 == 0;
      if ( !*(_DWORD *)v4 )
      {
        result = *((_DWORD *)v4 + 1);
        v10 = result == 0;
      }
      if ( !v10 )
        (*(void (__fastcall **)(Entity *))(*(_DWORD *)v3 + 928))(v3);
        v15 = 2;
        v16 = -1;
        v18 = v14;
        v17 = v13;
        v19 = v6;
        v20 = 0;
        ItemInstance::ItemInstance((ItemInstance *)&v21, (int)&ItemInstance::EMPTY_ITEM);
        ItemInstance::ItemInstance((ItemInstance *)&v25, (int)v4);
        InventoryTransactionManager::addAction((int)v3 + 5152, (int)&v15);
        if ( ptr )
          operator delete(ptr);
        if ( v27 )
          operator delete(v27);
        if ( v26 )
          (*(void (**)(void))(*(_DWORD *)v26 + 4))();
        v26 = 0;
        if ( v24 )
          operator delete(v24);
        if ( v23 )
          operator delete(v23);
        if ( v22 )
          (*(void (**)(void))(*(_DWORD *)v22 + 4))();
        v22 = 0;
        v11 = (Level *)Entity::getLevel(v3);
        if ( !Level::isClientSide(v11) )
          Entity::drop(v3, v4, v6);
        result = MinecraftEventing::fireEventItemDropped(v3, v4, v12);
    }
  }
  return result;
}


int __fastcall Player::updateTeleportDestPos(Player *this)
{
  Player *v1; // r4@1
  int v2; // r1@1
  char *v3; // r2@2
  char *v4; // r0@2
  Level *v5; // r0@3
  int v6; // r2@4
  int result; // r0@4
  int v8; // [sp+0h] [bp-28h]@4
  int v9; // [sp+4h] [bp-24h]@4
  int v10; // [sp+8h] [bp-20h]@4
  int v11; // [sp+Ch] [bp-1Ch]@4
  int v12; // [sp+10h] [bp-18h]@4
  int v13; // [sp+14h] [bp-14h]@4

  v1 = this;
  v2 = *((_DWORD *)this + 1301);
  if ( v2 < 0 )
  {
    v5 = (Level *)Entity::getLevel(this);
    v4 = Level::getSharedSpawnPos(v5);
    v2 = *((_DWORD *)v4 + 1);
    v3 = v4 + 8;
  }
  else
    v3 = (char *)this + 5208;
    v4 = (char *)this + 5200;
  v6 = *(_DWORD *)v3;
  v8 = *(_DWORD *)v4;
  v9 = v2;
  v10 = v6;
  Vec3::Vec3((int)&v11, (int)&v8);
  *((_DWORD *)v1 + 1165) = v11;
  *((_DWORD *)v1 + 1166) = v12;
  result = v13;
  *((_DWORD *)v1 + 1167) = v13;
  return result;
}


int __fastcall Player::actuallyHurt(int result, int a2, const EntityDamageSource *a3, int a4)
{
  const EntityDamageSource *v4; // r5@1
  int v5; // r4@1
  int v6; // r6@1
  Mob *v7; // r7@1

  v4 = a3;
  v5 = a4;
  v6 = a2;
  v7 = (Mob *)result;
  if ( a3 )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 404))();
    if ( !result )
      result = (int)j_j_j__ZN3Mob12actuallyHurtEiPK18EntityDamageSourceb(v7, v6, v4, v5);
  }
  return result;
}


int __fastcall Player::destroyRegion(Player *this)
{
  Player *v1; // r4@1
  int v2; // r0@1
  Player *v3; // r6@2
  int v4; // r7@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r5@10
  unsigned int v8; // r0@12
  int result; // r0@19

  v1 = this;
  Entity::resetRegion(this);
  v2 = *((_DWORD *)v1 + 1156);
  if ( !v2 )
    goto LABEL_19;
  v3 = (Player *)((char *)v1 + 4624);
  *((_DWORD *)v1 + 1186) = 0;
  v4 = *((_DWORD *)v1 + 1187);
  if ( !v4 )
  {
    *(_DWORD *)v3 = 0;
LABEL_18:
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  }
  v5 = (unsigned int *)(v4 + 4);
  if ( &pthread_create )
    __dmb();
    do
      v6 = __ldrex(v5);
    while ( __strex(v6 - 1, v5) );
  else
    v6 = (*v5)--;
  if ( v6 == 1 )
    v7 = (unsigned int *)(v4 + 8);
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  *((_DWORD *)v1 + 1187) = 0;
  v2 = *(_DWORD *)v3;
  *(_DWORD *)v3 = 0;
  if ( v2 )
    goto LABEL_18;
LABEL_19:
  result = *((_DWORD *)v1 + 1158);
  *((_DWORD *)v1 + 1158) = 0;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


signed int __fastcall Player::fixStartSpawnPosition(int _R0, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v4; // r8@1
  int v5; // r5@1
  int v6; // r7@1
  int v7; // r5@1
  int v8; // r6@1
  int v9; // r7@1
  BlockSource **v17; // r5@1
  signed int v18; // r11@2
  signed int v19; // r9@4
  char v20; // r10@4
  signed int v21; // r1@5
  int v22; // r2@5
  int *v23; // r7@6
  int v24; // r0@9
  signed int result; // r0@22
  BlockSource **v27; // [sp+4h] [bp-8Ch]@1
  int v28; // [sp+8h] [bp-88h]@1
  int v29; // [sp+Ch] [bp-84h]@1
  int v30; // [sp+10h] [bp-80h]@1
  int v31; // [sp+14h] [bp-7Ch]@5
  int v32; // [sp+18h] [bp-78h]@5
  int v33; // [sp+1Ch] [bp-74h]@5
  int v34[11]; // [sp+20h] [bp-70h]@1
  int v35; // [sp+4Ch] [bp-44h]@1
  int v36; // [sp+50h] [bp-40h]@1
  int v37; // [sp+54h] [bp-3Ch]@1
  int v38; // [sp+58h] [bp-38h]@1
  int v39; // [sp+5Ch] [bp-34h]@1
  int v40; // [sp+60h] [bp-30h]@1
  int v41; // [sp+64h] [bp-2Ch]@1
  int v42; // [sp+68h] [bp-28h]@1

  _R4 = a2;
  v4 = a3;
  v5 = *(_DWORD *)(_R0 + 268);
  v6 = *(_DWORD *)(_R0 + 272);
  v36 = *(_DWORD *)(_R0 + 264);
  v37 = v5;
  v38 = v6;
  v7 = *(_DWORD *)(_R0 + 280);
  v8 = *(_DWORD *)(_R0 + 284);
  v9 = *(_DWORD *)(_R0 + 288);
  v39 = *(_DWORD *)(_R0 + 276);
  v40 = v7;
  v41 = v8;
  v42 = v9;
  __asm
  {
    VLDR            S2, [R0,#0x108]
    VLDR            S4, [R0,#0x10C]
    VLDR            S6, [R0,#0x110]
    VLDR            S0, =1.1921e-7
    VLDR            S8, [R4]
  }
  _R0 = *(_DWORD *)(a2 + 4) - 1;
    VLDR            S10, [R4,#8]
    VSUB.F32        S0, S0, S4
    VCVT.F32.S32    S4, S8
    VCVT.F32.S32    S8, S10
    VMOV            S10, R0
    VCVT.F32.S32    S10, S10
    VSUB.F32        S2, S4, S2
    VSUB.F32        S4, S8, S6
    VADD.F32        S0, S0, S10
    VMOV            R1, S2
    VMOV            R3, S4
    VMOV            R2, S0
  AABB::move((AABB *)&v36, _R1, _R2, _R3);
  v30 = *(_DWORD *)_R4;
  v29 = *(_DWORD *)(_R4 + 4);
  v28 = *(_DWORD *)(_R4 + 8);
  v34[0] = 8;
  v34[1] = 0;
  v34[2] = 0;
  v34[5] = 0;
  v34[6] = 0;
  v34[3] = -8;
  v34[4] = 0;
  v34[7] = 0;
  v34[8] = 8;
  v34[9] = 0;
  v34[10] = 0;
  v35 = -8;
  v17 = (BlockSource **)*v4;
  v27 = (BlockSource **)(*v4 >> 32);
  if ( v17 == v27 )
LABEL_22:
    *(_DWORD *)_R4 = v30;
    *(_DWORD *)(_R4 + 4) = v29;
    *(_DWORD *)(_R4 + 8) = v28;
    result = 0;
  else
    v18 = 0;
    while ( BlockSource::hasChunksAt(*v17, (const AABB *)&v36) == 1 )
    {
      v19 = 16;
      v20 = 0;
      while ( 1 )
      {
        v21 = *(_DWORD *)(_R4 + 4);
        v22 = *(_DWORD *)(_R4 + 8);
        v31 = *(_DWORD *)_R4;
        v32 = v21 - 1;
        v33 = v22;
        if ( v21 >= 1 )
        {
          while ( 1 )
          {
            v23 = (int *)BlockSource::getMaterial(*v17, (const BlockPos *)&v31);
            if ( Material::isType(v23, 6) || Material::isType(v23, 5) == 1 )
              break;
            if ( Material::isSolidBlocking((Material *)v23) )
            {
              v20 = 0;
              goto LABEL_15;
            }
            v24 = v32--;
            if ( v24 <= 0 )
          }
          *(_DWORD *)_R4 += v34[3 * v18];
          *(_DWORD *)(_R4 + 8) += v34[3 * v18 + 2];
          if ( BlockSource::getChunkAt(*v17, (const BlockPos *)_R4) )
            v20 = 1;
            *(_DWORD *)(_R4 + 4) = BlockSource::getAboveTopSolidBlock(*v17, *(_DWORD *)_R4, *(_DWORD *)(_R4 + 8), 1, 1);
          else
            ++v18;
            *(_DWORD *)_R4 = v30;
            v19 = 16;
            *(_DWORD *)(_R4 + 4) = v29;
            *(_DWORD *)(_R4 + 8) = v28;
        }
LABEL_15:
        if ( !(v20 & 1) )
          break;
        if ( v19 < 2 )
        --v19;
        if ( v18 >= 4 )
          goto LABEL_22;
      }
      if ( v18 > 3 )
        goto LABEL_22;
      if ( !(v20 & 1) )
        break;
      ++v17;
      if ( v17 == v27 )
    }
    result = 1;
    _ZF = v30 == *(_DWORD *)_R4;
    if ( v30 == *(_DWORD *)_R4 )
      _ZF = v29 == *(_DWORD *)(_R4 + 4);
    if ( _ZF )
      result = 0;
      if ( v28 != *(_DWORD *)(_R4 + 8) )
        result = 1;
  return result;
}


int __fastcall Player::setContainerManager(int result, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int *v4; // r6@2
  unsigned int v5; // r1@5
  unsigned int *v6; // r1@9
  unsigned int *v7; // r7@15

  *(_DWORD *)(result + 4744) = *(_DWORD *)a2;
  v2 = *(_DWORD *)(result + 4748);
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 != v2 )
  {
    v4 = (int *)(result + 4748);
    if ( v3 )
    {
      result = v3 + 4;
      if ( &pthread_create )
      {
        __dmb();
        do
          v5 = __ldrex((unsigned int *)result);
        while ( __strex(v5 + 1, (unsigned int *)result) );
        v2 = *v4;
      }
      else
        ++*(_DWORD *)result;
    }
    if ( v2 )
      v6 = (unsigned int *)(v2 + 4);
          result = __ldrex(v6);
        while ( __strex(result - 1, v6) );
        result = (*v6)--;
      if ( result == 1 )
        v7 = (unsigned int *)(v2 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v7);
          while ( __strex(result - 1, v7) );
        }
        else
          result = (*v7)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
    *v4 = v3;
  }
  return result;
}


char *__fastcall Player::registerTrackedBoss(int a1, int a2, __int64 a3)
{
  __int64 *v3; // lr@1
  char *result; // r0@2
  __int64 v5; // [sp+0h] [bp-10h]@1

  v5 = a3;
  v3 = *(__int64 **)(a1 + 4972);
  if ( v3 == *(__int64 **)(a1 + 4976) )
  {
    result = std::vector<EntityUniqueID,std::allocator<EntityUniqueID>>::_M_emplace_back_aux<EntityUniqueID&>(
               (unsigned __int64 *)(a1 + 4968),
               &v5);
  }
  else
    result = (char *)(a1 + 4972);
    *v3 = a3;
    *(_DWORD *)result = v3 + 1;
  return result;
}


int __fastcall Player::isLocalPlayer(Player *this)
{
  return 0;
}


int __fastcall Player::setOffhandSlot(Player *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r4@1
  Player *v3; // r5@1
  char *v4; // r0@1
  __int16 v6; // [sp+5h] [bp-B3h]@0
  char v7; // [sp+7h] [bp-B1h]@0
  int v8; // [sp+8h] [bp-B0h]@1
  char v9; // [sp+Ch] [bp-ACh]@1
  __int16 v10; // [sp+Dh] [bp-ABh]@1
  char v11; // [sp+Fh] [bp-A9h]@1
  int v12; // [sp+10h] [bp-A8h]@1
  int v13; // [sp+14h] [bp-A4h]@1
  int v14; // [sp+18h] [bp-A0h]@1
  int v15; // [sp+20h] [bp-98h]@11
  void *v16; // [sp+3Ch] [bp-7Ch]@9
  void *v17; // [sp+4Ch] [bp-6Ch]@7
  int v18; // [sp+60h] [bp-58h]@1
  int v19; // [sp+68h] [bp-50h]@5
  void *v20; // [sp+84h] [bp-34h]@3
  void *ptr; // [sp+94h] [bp-24h]@1

  v2 = a2;
  v3 = this;
  v4 = Mob::getOffhandSlot(this);
  v8 = 0;
  v9 = 119;
  v11 = v7;
  v10 = v6;
  v12 = 0;
  v13 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v14, (int)v4);
  ItemInstance::ItemInstance((ItemInstance *)&v18, (int)v2);
  InventoryTransactionManager::addAction((int)v3 + 5152, (int)&v8);
  if ( ptr )
    operator delete(ptr);
  if ( v20 )
    operator delete(v20);
  if ( v19 )
    (*(void (**)(void))(*(_DWORD *)v19 + 4))();
  v19 = 0;
  if ( v17 )
    operator delete(v17);
  if ( v16 )
    operator delete(v16);
  if ( v15 )
    (*(void (**)(void))(*(_DWORD *)v15 + 4))();
  v15 = 0;
  return Mob::setOffhandSlot(v3, v2);
}


int __fastcall Player::completeUsingItem(Player *this)
{
  unsigned __int64 v1; // r4@1
  void *v2; // r0@1
  ItemReleaseInventoryTransaction *v3; // r6@1
  int v4; // r6@1
  void (__fastcall *v5)(int, _QWORD **, _DWORD **); // r9@1
  _QWORD *v6; // r0@1
  _DWORD *v7; // r0@1
  __int64 v8; // r1@1
  Level *v9; // r0@5
  int v10; // r1@6
  void (__fastcall *v11)(_DWORD, int *); // r2@6
  int result; // r0@15
  int v13; // [sp+0h] [bp-90h]@6
  _DWORD *v14; // [sp+4h] [bp-8Ch]@1
  __int64 v15; // [sp+Ch] [bp-84h]@1
  _QWORD *v16; // [sp+14h] [bp-7Ch]@1
  void (*v17)(void); // [sp+1Ch] [bp-74h]@1
  int (__fastcall *v18)(int **, int, int, int, int); // [sp+20h] [bp-70h]@1
  ItemReleaseInventoryTransaction *v19; // [sp+24h] [bp-6Ch]@1
  char v20; // [sp+28h] [bp-68h]@1
  int v21; // [sp+30h] [bp-60h]@15
  void *v22; // [sp+4Ch] [bp-44h]@13
  void *ptr; // [sp+5Ch] [bp-34h]@11

  v1 = __PAIR__(&v19, (unsigned int)this);
  v2 = PlayerInventoryProxy::getSelectedItem(*((PlayerInventoryProxy **)this + 1188));
  ItemInstance::ItemInstance((ItemInstance *)&v20, (int)v2);
  v3 = (ItemReleaseInventoryTransaction *)operator new(0x90u);
  ItemReleaseInventoryTransaction::ItemReleaseInventoryTransaction(v3);
  v19 = v3;
  v4 = *(_DWORD *)(v1 + 4752);
  v5 = *(void (__fastcall **)(int, _QWORD **, _DWORD **))(**(_DWORD **)(v1 + 4752) + 16);
  v6 = operator new(8u);
  *v6 = v1;
  v16 = v6;
  v17 = (void (*)(void))sub_1777076;
  v18 = sub_1776F98;
  v7 = operator new(0xCu);
  LODWORD(v8) = sub_1777160;
  *v7 = v1;
  v7[1] = &v20;
  HIDWORD(v8) = sub_17770B0;
  v7[2] = &v19;
  v14 = v7;
  v15 = v8;
  v5(v4, &v16, &v14);
  if ( (_DWORD)v15 )
    ((void (*)(void))v15)();
  if ( v17 )
    v17();
  v9 = (Level *)Entity::getLevel((Entity *)v1);
  if ( Level::isClientSide(v9) )
  {
    v10 = (int)v19;
    v11 = *(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)v1 + 1520);
    v19 = 0;
    v13 = v10;
    v11(v1, &v13);
    if ( v13 )
      (*(void (**)(void))(*(_DWORD *)v13 + 4))();
    v13 = 0;
  }
  if ( v19 )
    (*(void (__cdecl **)(ItemReleaseInventoryTransaction *, _DWORD))(*(_DWORD *)v19 + 4))(
      v19,
      *(_DWORD *)(*(_DWORD *)v19 + 4));
  v19 = 0;
  if ( ptr )
    operator delete(ptr);
  if ( v22 )
    operator delete(v22);
  result = v21;
  if ( v21 )
    result = (*(int (__cdecl **)(int, _DWORD))(*(_DWORD *)v21 + 4))(v21, *(_DWORD *)(*(_DWORD *)v21 + 4));
  return result;
}


InstantaneousAttributeBuff *__fastcall Player::causeFoodExhaustion(Player *this, float a2)
{
  int v2; // r4@1
  Player *v3; // r5@1
  Level *v4; // r0@1
  InstantaneousAttributeBuff *result; // r0@1
  AttributeInstance *v6; // r5@3
  __int64 v7; // r2@3
  int v8; // [sp+0h] [bp-48h]@3

  v2 = LODWORD(a2);
  v3 = this;
  v4 = (Level *)Entity::getLevel(this);
  result = (InstantaneousAttributeBuff *)Level::isClientSide(v4);
  if ( !result )
  {
    result = (InstantaneousAttributeBuff *)(*(int (__fastcall **)(Player *))(*(_DWORD *)v3 + 652))(v3);
    if ( !result )
    {
      v6 = (AttributeInstance *)(*(int (__fastcall **)(Player *, void *))(*(_DWORD *)v3 + 1000))(
                                  v3,
                                  &Player::EXHAUSTION);
      LODWORD(v7) = 9;
      InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)&v8, v2, v7);
      AttributeInstance::addBuff(v6, (const AttributeBuff *)&v8);
      result = InstantaneousAttributeBuff::~InstantaneousAttributeBuff((InstantaneousAttributeBuff *)&v8);
    }
  }
  return result;
}


void __fastcall Player::handleEntityEvent(Player *a1, signed int a2, Mob *a3)
{
  if ( a2 != 65 )
  {
    if ( a2 == 34 )
      j_j_j__ZN6Player10_addLevelsEi(a1, (int)a3);
    else
      j_j_j__ZN3Mob17handleEntityEventE11EntityEventi(a1, a2, a3);
  }
}


int __fastcall Player::getFilteredCreativeItemList(int a1, int a2)
{
  return a1 + 12 * a2 + 4760;
}


int __fastcall Player::setUntrackedInteractionUIItem(Player *this, int a2, const ItemInstance *a3)
{
  Player *v3; // r6@1
  ItemInstance *v4; // r4@1
  int v5; // r0@1
  int result; // r0@7
  int v7; // [sp+0h] [bp-60h]@1
  int v8; // [sp+8h] [bp-58h]@7
  void *v9; // [sp+24h] [bp-3Ch]@5
  void *ptr; // [sp+34h] [bp-2Ch]@3

  v3 = this;
  v4 = a3;
  v5 = (*(int (**)(void))(**((_DWORD **)this + 1241) + 16))();
  ItemInstance::ItemInstance((ItemInstance *)&v7, v5);
  if ( !ItemInstance::operator==(v4, (ItemInstance *)&v7) )
    (*(void (**)(void))(**((_DWORD **)v3 + 1241) + 32))();
  if ( ptr )
    operator delete(ptr);
  if ( v9 )
    operator delete(v9);
  result = v8;
  if ( v8 )
    result = (*(int (**)(void))(*(_DWORD *)v8 + 4))();
  return result;
}


int __fastcall Player::setCursorSelectedItemGroup(Player *this, const ItemGroup *a2)
{
  Player *v2; // r5@1
  const ItemGroup *v3; // r4@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  ItemInstance::operator=((int)this + 5072, (int)a2);
  result = *((_DWORD *)v3 + 18);
  *((_DWORD *)v2 + 1286) = result;
  return result;
}


int __fastcall Player::setFieldOfViewModifier(int result, float a2)
{
  *(float *)(result + 4944) = a2;
  return result;
}


int __fastcall Player::getSleepRotation(Player *this)
{
  Player *v1; // r4@1
  int v2; // r0@1
  unsigned int v7; // r4@2
  unsigned __int64 *v8; // r0@2
  unsigned int v9; // r0@2
  int result; // r0@4

  v1 = this;
  v2 = (*(int (**)(void))(*(_DWORD *)this + 784))();
  __asm { VLDR            S16, =0.0 }
  if ( v2 == 1 )
  {
    v7 = BlockSource::getData(
           *((BlockSource **)v1 + 1158),
           *((_DWORD *)v1 + 1159),
           *((_DWORD *)v1 + 1160),
           *((_DWORD *)v1 + 1161));
    v8 = (unsigned __int64 *)Block::getBlockState(Block::mBed, 12);
    v9 = (0xFu >> (4 - (*v8 >> 32))) & (v7 >> (*v8 + 1 - (*v8 >> 32)));
    if ( v9 <= 3 )
    {
      _R0 = (char *)&unk_2610A1C + 4 * v9;
      __asm { VLDR            S16, [R0] }
    }
  }
  __asm { VMOV            R0, S16 }
  return result;
}


int __fastcall Player::getAttackDamage(Player *this)
{
  ItemInstance *v1; // r0@1

  v1 = (ItemInstance *)PlayerInventoryProxy::getSelectedItem(*((PlayerInventoryProxy **)this + 1188));
  return j_j_j__ZNK12ItemInstance15getAttackDamageEv(v1);
}


signed int __fastcall Player::getDirection(Player *this, float a2)
{
  int v9; // r0@1
  Direction *v10; // r5@1
  float v12; // r1@1
  int v13; // r0@1
  float v14; // r2@1

  _R4 = this;
  __asm { VLDR            S0, [R4,#0x7C] }
  _R0 = &mce::Math::DEGRAD;
  __asm
  {
    VLDR            S16, [R0]
    VMUL.F32        S0, S16, S0
    VMOV            R0, S0
  }
  v9 = mce::Math::sin(_R0, a2);
  v10 = (Direction *)v9;
    VMUL.F32        S0, S0, S16
  v13 = mce::Math::cos(_R0, v12);
  return Direction::getDirection(v10, COERCE_FLOAT(v13 ^ 0x80000000), v14);
}


__int64 __fastcall Player::reloadHardcoded(int a1)
{
  int v1; // r4@1
  __int64 result; // r0@1
  int v3; // [sp+0h] [bp-10h]@1

  v1 = a1;
  ChunkPos::ChunkPos((int)&v3, a1 + 72);
  result = *(_QWORD *)&v3;
  *(_QWORD *)(v1 + 144) = *(_QWORD *)&v3;
  return result;
}


int __fastcall Player::die(Player *this, const EntityDamageSource *a2)
{
  const EntityDamageSource *v2; // r5@1
  int v4; // r0@3
  Level *v5; // r0@3
  unsigned __int64 *v6; // r0@3
  PlayerInventoryProxy *v7; // r6@4
  Level *v8; // r0@4
  char v9; // r0@4
  AttributeInstance *v10; // r0@5
  float v11; // r1@5
  float v21; // r1@6
  int result; // r0@6

  v2 = a2;
  _R4 = this;
  Mob::die(this, a2);
  if ( Entity::isRiding(_R4) == 1 )
    (*(void (__fastcall **)(Player *, signed int, _DWORD))(*(_DWORD *)_R4 + 596))(_R4, 1, 0);
  v4 = Entity::getLevel(_R4);
  (*(void (**)(void))(*(_DWORD *)v4 + 68))();
  (*(void (__fastcall **)(Player *))(*(_DWORD *)_R4 + 680))(_R4);
  (*(void (__fastcall **)(Player *, char *))(*(_DWORD *)_R4 + 48))(_R4, (char *)_R4 + 72);
  *((_DWORD *)_R4 + 28) = 1036831949;
  v5 = (Level *)Entity::getLevel(_R4);
  v6 = (unsigned __int64 *)Level::getGameRules(v5);
  if ( !GameRules::getBool(v6, (int **)&GameRules::KEEP_INVENTORY) )
  {
    (*(void (__fastcall **)(Player *, char *, signed int))(*(_DWORD *)_R4 + 664))(_R4, (char *)_R4 + 5000, 1);
    Player::setCursorSelectedItem(_R4, (const ItemInstance *)&ItemInstance::EMPTY_ITEM);
    v7 = (PlayerInventoryProxy *)*((_DWORD *)_R4 + 1188);
    v8 = (Level *)Entity::getLevel(_R4);
    v9 = Level::isClientSide(v8);
    PlayerInventoryProxy::dropAll(v7, v9);
    PlayerInventoryProxy::clearInventory(*((PlayerInventoryProxy **)_R4 + 1188), -1);
    (*(void (__fastcall **)(Player *, signed int))(*(_DWORD *)_R4 + 1064))(_R4, 1);
  }
  v10 = (AttributeInstance *)(*(int (__fastcall **)(Player *, void *))(*(_DWORD *)_R4 + 1000))(
                               _R4,
                               &SharedAttributes::HEALTH);
  AttributeInstance::removeBuffs(v10);
  if ( (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)v2 + 8))(v2) == 1 )
    _R5 = (int)_R4 + 3440;
    __asm
    {
      VLDR            S0, [R4,#0x7C]
      VLDR            S2, [R5]
      VADD.F32        S0, S0, S2
    }
    _R0 = &mce::Math::DEGRAD;
      VLDR            S16, [R0]
      VMUL.F32        S0, S0, S16
      VMOV            R0, S0
    _R0 = mce::Math::cos(_R0, v11);
      VLDR            S18, =-0.1
      VMOV            S0, R0
      VMUL.F32        S0, S0, S18
      VSTR            S0, [R4,#0x6C]
      VLDR            S0, [R5]
      VLDR            S2, [R4,#0x7C]
      VADD.F32        S0, S2, S0
    result = mce::Math::sin(_R0, v21);
  else
    __asm { VLDR            S0, =0.0 }
    result = 0;
    *((_DWORD *)_R4 + 27) = 0;
  __asm { VSTR            S0, [R4,#0x74] }
  return result;
}


int __fastcall Player::startGliding(Player *this)
{
  Player *v1; // r4@1
  int v2; // r1@1

  v1 = this;
  Entity::setStatusFlag((int)this, 30, 1);
  v2 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v1 + 12) + 116) + 4);
  return (*(int (__fastcall **)(Player *))(*(_DWORD *)v1 + 680))(v1);
}


int __fastcall Player::getDestroyProgress(Player *this, const Block *a2)
{
  Block *v2; // r4@1
  Player *v3; // r5@1
  Material *v9; // r0@4
  int v10; // r6@5
  ItemInstance *v11; // r0@6
  int result; // r0@11

  v2 = a2;
  v3 = this;
  _R0 = Block::getDestroySpeed(a2);
  __asm
  {
    VMOV            S0, R0
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm { VLDR            S0, =0.0 }
  else
    v9 = (Material *)Block::getMaterial(v2);
    if ( Material::isAlwaysDestroyable(v9) )
    {
      v10 = 1;
    }
    else
      v11 = (ItemInstance *)PlayerInventoryProxy::getSelectedItem(*((PlayerInventoryProxy **)v3 + 1188));
      v10 = ItemInstance::canDestroySpecial(v11, v2);
    _R0 = Player::getDestroySpeed(v3, v2);
    __asm { VMOV            S16, R0 }
    _R0 = Block::getDestroySpeed(v2);
    __asm { VMOV            S0, R0 }
    if ( v10 )
      __asm { VLDRNE          S2, =0.033333 }
      __asm { VLDREQ          S2, =0.01 }
    __asm
      VDIV.F32        S0, S16, S0
      VMUL.F32        S0, S0, S2
  __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall Player::setDefaultHeadHeight(int result)
{
  *(_DWORD *)(result + 316) = 1070554237;
  return result;
}


signed int __fastcall Player::fixSpawnPosition(int a1, int a2, unsigned __int64 *a3)
{
  Entity *v3; // r11@1
  unsigned __int64 *v5; // r5@1
  float v6; // r6@1
  int v7; // r7@1
  int v8; // r4@1
  int v9; // r6@1
  int v10; // r7@1
  BlockSource **v17; // r4@1
  BlockSource **v18; // r9@1
  const AABB *v19; // r6@2
  char *v20; // r5@2
  BlockPos *v21; // r7@2
  int *v22; // r5@5
  int v23; // r0@7
  int v24; // r5@8
  signed int v26; // r4@13
  BlockSource *v27; // r5@13
  AABB *v28; // r11@14
  char *v29; // r5@14
  int v30; // r1@14
  int v31; // r12@14
  int v32; // r1@15
  AABB *v33; // r0@17
  const AABB *v35; // r4@18
  const AABB *v36; // r3@20
  int v37; // r2@20
  int v38; // r5@20
  int v39; // r6@20
  int v40; // r7@20
  int v41; // r5@20
  int v42; // r6@20
  int v43; // r7@20
  signed int v45; // r4@25
  signed int v47; // r7@34
  signed int v48; // r11@35
  signed int v49; // r4@35
  _DWORD *v50; // r6@35
  __int64 v51; // r0@36
  int v52; // r2@36
  int *v53; // r5@36
  int v54; // r0@45
  signed int result; // r0@47
  BlockSource **v56; // [sp+10h] [bp-E8h]@1
  int v57; // [sp+18h] [bp-E0h]@1
  signed int v58; // [sp+1Ch] [bp-DCh]@15
  int v59; // [sp+20h] [bp-D8h]@2
  int v60; // [sp+20h] [bp-D8h]@13
  int v61; // [sp+24h] [bp-D4h]@50
  int v62; // [sp+28h] [bp-D0h]@50
  int v63; // [sp+2Ch] [bp-CCh]@50
  int v64; // [sp+30h] [bp-C8h]@45
  int v65; // [sp+34h] [bp-C4h]@45
  int v66; // [sp+38h] [bp-C0h]@45
  int v67; // [sp+3Ch] [bp-BCh]@36
  int v68; // [sp+40h] [bp-B8h]@36
  int v69; // [sp+44h] [bp-B4h]@36
  float v70; // [sp+48h] [bp-B0h]@36
  float v73; // [sp+54h] [bp-A4h]@36
  int v74; // [sp+60h] [bp-98h]@36
  int v75; // [sp+64h] [bp-94h]@36
  int v76; // [sp+68h] [bp-90h]@36
  int v77; // [sp+6Ch] [bp-8Ch]@36
  int v78; // [sp+70h] [bp-88h]@36
  int v79; // [sp+74h] [bp-84h]@36
  int v80; // [sp+78h] [bp-80h]@35
  int v81; // [sp+7Ch] [bp-7Ch]@37
  int v82; // [sp+80h] [bp-78h]@37
  char v83; // [sp+84h] [bp-74h]@2
  char v84; // [sp+90h] [bp-68h]@2
  int v85; // [sp+94h] [bp-64h]@4
  int v86; // [sp+98h] [bp-60h]@4
  int v87; // [sp+9Ch] [bp-5Ch]@4
  int v88; // [sp+A0h] [bp-58h]@4
  int v89; // [sp+A4h] [bp-54h]@4
  int v90; // [sp+A8h] [bp-50h]@1
  float v91; // [sp+ACh] [bp-4Ch]@1
  int v92; // [sp+B0h] [bp-48h]@1
  int v93; // [sp+B4h] [bp-44h]@1
  int v94; // [sp+B8h] [bp-40h]@1
  int v95; // [sp+BCh] [bp-3Ch]@1
  int v96; // [sp+C0h] [bp-38h]@1

  v3 = (Entity *)a1;
  _R10 = a2;
  v5 = a3;
  v57 = a1;
  v6 = *(float *)(a1 + 268);
  v7 = *(_DWORD *)(a1 + 272);
  v90 = *(_DWORD *)(a1 + 264);
  v91 = v6;
  v92 = v7;
  v8 = *(_DWORD *)(a1 + 280);
  v9 = *(_DWORD *)(a1 + 284);
  v10 = *(_DWORD *)(a1 + 288);
  v93 = *(_DWORD *)(a1 + 276);
  v94 = v8;
  v95 = v9;
  v96 = v10;
  __asm
  {
    VLDR            S0, =-1.0
    VLDR            S4, [R10,#4]
    VLDR            S2, [R10]
    VADD.F32        S0, S4, S0
    VLDR            S4, [R11,#0x108]
    VLDR            S8, [R11,#0x10C]
    VLDR            S6, [R10,#8]
    VSUB.F32        S2, S2, S4
    VLDR            S10, [R11,#0x110]
    VSUB.F32        S4, S6, S10
    VSUB.F32        S0, S0, S8
    VMOV            R1, S2
    VMOV            R3, S4
    VMOV            R2, S0
  }
  AABB::move((AABB *)&v90, _R1, _R2, _R3);
  v17 = (BlockSource **)(*v5 >> 32);
  v18 = (BlockSource **)*v5;
  v56 = v17;
  if ( v18 == v17 )
    goto LABEL_44;
  v19 = (const AABB *)&v90;
  v59 = 0;
  v20 = &v84;
  v21 = (BlockPos *)&v83;
  do
    if ( BlockSource::hasChunksAt(*v18, v19) != 1 )
      goto LABEL_43;
    BlockPos::BlockPos((int)v20, _R10);
    v87 = *(_DWORD *)&v84;
    v88 = v85 + 2;
    v89 = v86;
    if ( v85 + 2 < 0 )
    {
LABEL_8:
      v24 = v59;
      goto LABEL_11;
    }
    while ( 1 )
      v22 = (int *)BlockSource::getMaterial(*v18, (const BlockPos *)&v87);
      if ( Material::isType(v22, 6) )
        break;
      if ( Material::isSolidBlocking((Material *)v22) != 1 )
      {
        v23 = v88--;
        if ( v23 > 0 )
          continue;
      }
      goto LABEL_8;
    v24 = 1;
LABEL_11:
      __asm { VLDR            S16, [SP,#0xF8+var_4C] }
      _R0 = *(_WORD *)(Entity::getDimension(v3) + 120);
      __asm
        VMOV            S0, R0
        VCVT.F32.S32    S0, S0
        VCMPE.F32       S16, S0
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v60 = v24;
      v26 = BlockSource::containsLiquid(*v18, (mce::Math **)v19, 6);
      v27 = *v18;
      BlockPos::BlockPos(v21, *(float *)_R10, v91, *(float *)(_R10 + 8));
      if ( BlockSource::isSolidBlockingBlock(v27, v21) == 1 )
        v24 = 0;
        AABB::move(v19, 0.0, 1.0, 0.0);
      else
        v28 = 0;
        v29 = BlockSource::fetchAABBs(*v18, v19, 0);
        v31 = *(_QWORD *)v29 >> 32;
        v30 = *(_QWORD *)v29;
        if ( v31 == v30 )
        {
          v58 = v26;
          v32 = *(_QWORD *)v29 >> 32;
        }
        else
          if ( (unsigned int)(-1227133513 * ((v31 - v30) >> 2)) >= 0x924924A )
            sub_21E57F4();
          v33 = (AABB *)operator new(v31 - v30);
          v31 = *(_QWORD *)v29 >> 32;
          v32 = *(_QWORD *)v29;
          v28 = v33;
        _ZF = v32 == v31;
        v35 = v28;
        while ( !_ZF )
          v36 = v35;
          v38 = *(_DWORD *)v32;
          v39 = *(_DWORD *)(v32 + 4);
          v40 = *(_DWORD *)(v32 + 8);
          v37 = v32 + 12;
          v32 += 28;
          v35 = (const AABB *)((char *)v35 + 28);
          *(_DWORD *)v36 = v38;
          *((_DWORD *)v36 + 1) = v39;
          *((_DWORD *)v36 + 2) = v40;
          v36 = (const AABB *)((char *)v36 + 12);
          _ZF = v31 == v32;
          v41 = *(_DWORD *)(v37 + 4);
          v42 = *(_DWORD *)(v37 + 8);
          v43 = *(_DWORD *)(v37 + 12);
          *(_DWORD *)v36 = *(_DWORD *)v37;
          *((_DWORD *)v36 + 1) = v41;
          *((_DWORD *)v36 + 2) = v42;
          *((_DWORD *)v36 + 3) = v43;
        v19 = (const AABB *)&v90;
        _R7 = v28;
        v24 = v60 | v58;
        if ( v28 == v35 )
LABEL_24:
          v21 = (BlockPos *)&v83;
          if ( !(v24 & 1) )
          {
            v45 = 1;
            *(float *)(_R10 + 4) = v91;
            goto LABEL_29;
          }
          while ( AABB::intersects((AABB *)&v90, _R7) != 1 )
            _R7 = (const AABB *)((char *)_R7 + 28);
            if ( v35 == _R7 )
              goto LABEL_24;
          __asm
            VLDR            S0, [SP,#0xF8+var_4C]
            VLDR            S2, [R7,#0x10]
            VSUB.F32        S0, S2, S0
            VMOV            R2, S0
          AABB::move((AABB *)&v90, 0.0, _R2, 0.0);
        __asm { VLDR            S0, [SP,#0xF8+var_4C] }
        v45 = 0;
        __asm
          VCMPE.F32       S16, S0
          VMRS            APSR_nzcv, FPSCR
        if ( _ZF )
          v45 = 8;
LABEL_29:
        if ( v28 )
          operator delete((void *)v28);
        if ( v45 )
          v3 = (Entity *)v57;
          if ( v45 != 8 )
            goto LABEL_47;
          break;
        v3 = (Entity *)v57;
    v47 = 4;
    v59 = v24;
    v57 = (int)v3;
    while ( 2 )
      BlockPos::BlockPos((int)&v80, _R10);
      v48 = 6;
      v49 = 2;
      v50 = &Facing::DIRECTION[8];
      while ( 2 )
        v51 = *((_QWORD *)v50 - 1);
        v52 = *v50 * v47;
        v77 = v51 * v47;
        v78 = HIDWORD(v51) * v47;
        v79 = v52;
        Vec3::Vec3((int)&v70, (int)&v77);
          VLDR            S0, [R10]
          VLDR            S6, [SP,#0xF8+var_B0]
          VLDR            S2, [R10,#4]
          VLDR            S8, [SP,#0xF8+var_AC]
          VADD.F32        S0, S6, S0
          VLDR            S4, [R10,#8]
          VLDR            S10, [SP,#0xF8+var_A8]
          VADD.F32        S2, S8, S2
          VADD.F32        S4, S10, S4
          VSTR            S0, [SP,#0xF8+var_A4]
          VSTR            S2, [SP,#0xF8+var_A0]
          VSTR            S4, [SP,#0xF8+var_9C]
        BlockPos::BlockPos((int)&v74, (int)&v73);
        BlockSource::getHeightmapPos((BlockSource *)&v67, *v18, (const BlockPos *)&v74);
        v74 = v67;
        v75 = v68;
        v76 = v69;
        v53 = (int *)BlockSource::getMaterial(*v18, (const BlockPos *)&v74);
        if ( Material::isType(v53, 5) == 1 )
          v48 = v49;
          v80 = v74;
          v81 = v75;
          v82 = v76;
          goto LABEL_39;
        if ( Material::isType(v53, 6) != 1 )
          Vec3::Vec3((int)&v64, (int)&v74);
          *(_DWORD *)_R10 = v64;
          *(_DWORD *)(_R10 + 4) = v65;
          v54 = v66;
LABEL_46:
          *(_DWORD *)(_R10 + 8) = v54;
          v45 = 1;
          goto LABEL_47;
LABEL_39:
        ++v49;
        v50 += 3;
        if ( v49 < 6 )
      if ( v48 != 6 )
        Vec3::Vec3((int)&v61, (int)&v80);
        *(_DWORD *)_R10 = v61;
        *(_DWORD *)(_R10 + 4) = v62;
        v54 = v63;
        goto LABEL_46;
      v47 += 4;
      if ( v47 < 17 )
        continue;
      break;
    v3 = (Entity *)v57;
    v19 = (const AABB *)&v90;
    v17 = v56;
    v20 = &v84;
    v21 = (BlockPos *)&v83;
LABEL_43:
    ++v18;
  while ( v18 != v17 );
LABEL_44:
  v45 = 2;
LABEL_47:
  result = 0;
  if ( v45 != 2 )
    result = 1;
  return result;
}


int __fastcall Player::getItemUseStartupProgress(Player *this)
{
  Player *v1; // r5@1
  ItemInstance *v2; // r4@1
  int result; // r0@6

  v1 = this;
  v2 = (Player *)((char *)this + 4832);
  if ( ItemInstance::isNull((Player *)((char *)this + 4832)) )
  {
    __asm { VLDR            S0, =0.0 }
  }
  else
    _R0 = *((_DWORD *)v1 + 1226) - 25;
    if ( _R0 < 1 )
    {
      __asm { VMOV.F32        S0, #1.0 }
    }
    else
      __asm
      {
        VMOV            S0, R0
        VCVT.F32.S32    S16, S0
      }
      _R0 = ItemInstance::getMaxUseDuration(v2) - 25;
        VMOV.F32        S2, #1.0
        VCVT.F32.S32    S0, S0
        VDIV.F32        S0, S16, S0
        VSUB.F32        S0, S2, S0
  __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall Player::getLevelProgress(Player *this)
{
  AttributeInstance *v1; // r0@1

  v1 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)this + 1004))();
  return j_j_j__ZNK17AttributeInstance15getCurrentValueEv_0(v1);
}


void __fastcall Player::~Player(Player *this)
{
  Player::~Player(this);
}


signed int __fastcall Player::canBeSeenOnMap(Player *this)
{
  Player *v1; // r4@1
  void *v2; // r0@1
  signed int v3; // r4@3
  int v5; // [sp+0h] [bp-50h]@1
  int v6; // [sp+8h] [bp-48h]@11
  void *v7; // [sp+24h] [bp-2Ch]@9
  void *ptr; // [sp+34h] [bp-1Ch]@7

  v1 = this;
  v2 = Mob::getItemSlot((int)this, 2);
  ItemInstance::ItemInstance((ItemInstance *)&v5, (int)v2);
  if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)v1 + 316))(v1) == 1 )
  {
    if ( ItemInstance::getId((ItemInstance *)&v5) == 86 )
    {
      v3 = 0;
    }
    else
      if ( ItemInstance::getId((ItemInstance *)&v5) != 397 )
        v3 = 1;
  }
  else
    v3 = 0;
  if ( ptr )
    operator delete(ptr);
  if ( v7 )
    operator delete(v7);
  if ( v6 )
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
  return v3;
}


int __fastcall Player::onSizeUpdated(Player *this)
{
  int v2; // r0@1
  int result; // r0@4

  _R4 = this;
  v2 = Mob::isGliding(this);
  __asm { VLDR            S0, [R4,#0x134] }
  if ( v2 == 1 )
  {
    __asm
    {
      VLDR            S2, =-0.61111
      VLDR            S4, =-0.55556
      VMUL.F32        S2, S0, S2
    }
  }
  else
      VLDR            S2, =0.066667
      VLDR            S4, =0.077778
  __asm { VMUL.F32        S0, S0, S4 }
  result = 0;
  *((_DWORD *)_R4 + 97) = 0;
  __asm { VSTR            S2, [R4,#0x188] }
  *((_DWORD *)_R4 + 99) = 0;
  *((_DWORD *)_R4 + 91) = 0;
  __asm { VSTR            S2, [R4,#0x170] }
  *((_DWORD *)_R4 + 93) = 0;
  *((_DWORD *)_R4 + 94) = 0;
  __asm { VSTR            S0, [R4,#0x17C] }
  *((_DWORD *)_R4 + 96) = 0;
  return result;
}


void __fastcall Player::aiStep(Player *this)
{
  Player::aiStep(this);
}


int __fastcall Player::getAgentID(int result, int a2)
{
  int v2; // r2@1
  int v3; // r1@1

  v2 = *(_DWORD *)(a2 + 4984);
  v3 = *(_DWORD *)(a2 + 4988);
  *(_DWORD *)result = v2;
  *(_DWORD *)(result + 4) = v3;
  return result;
}


int __fastcall Player::getCurrentStructureFeature(Player *this)
{
  return 0;
}


int __fastcall Player::rideTick(Player *this, Player *a2)
{
  Player *v2; // r4@1
  int result; // r0@1
  int (__fastcall *v4)(Player *, float *); // r6@2
  float v11; // [sp+4h] [bp-1Ch]@2

  v2 = this;
  MinecraftEventing::fireEventPlayerTransform(this, a2);
  Mob::rideTick(v2);
  *((_DWORD *)v2 + 1076) = *((_DWORD *)v2 + 1077);
  *((_DWORD *)v2 + 1077) = 0;
  result = *((_DWORD *)v2 + 128);
  if ( result )
  {
    v4 = *(int (__fastcall **)(Player *, float *))(*(_DWORD *)v2 + 1232);
    _R5 = (*(int (**)(void))(*(_DWORD *)result + 52))();
    _R0 = (*(int (**)(void))(**((_DWORD **)v2 + 128) + 56))();
    __asm
    {
      VLDR            S0, [R0]
      VLDR            S6, [R5]
      VLDR            S2, [R0,#4]
      VLDR            S4, [R0,#8]
      VSUB.F32        S0, S6, S0
      VLDR            S8, [R5,#4]
      VLDR            S10, [R5,#8]
      VSUB.F32        S2, S8, S2
      VSUB.F32        S4, S10, S4
      VSTR            S0, [SP,#0x20+var_1C]
      VSTR            S2, [SP,#0x20+var_18]
      VSTR            S4, [SP,#0x20+var_14]
    }
    result = v4(v2, &v11);
  }
  return result;
}


signed int __fastcall Player::normalTick(Player *this)
{
  _DWORD *v2; // r0@1
  _DWORD *i; // r1@1
  int v4; // r0@5
  unsigned int v5; // r6@6
  int v6; // r0@13
  signed int v7; // r2@13
  signed __int16 *v8; // r1@13
  signed __int16 v9; // r0@14
  Level *v10; // r0@16
  Block *v11; // r0@17
  int v12; // r0@18
  signed int v13; // r1@19
  void (__fastcall *v14)(Player *, signed int, signed int); // r3@19
  Player *v15; // r0@19
  signed __int16 v16; // r0@21
  Level *v17; // r0@25
  int v18; // r0@29
  Level *v28; // r0@40
  int v33; // r3@49
  signed int result; // r0@52
  float v35; // [sp+0h] [bp-48h]@29
  int v36; // [sp+Ch] [bp-3Ch]@12
  int v37; // [sp+10h] [bp-38h]@12
  int v38; // [sp+14h] [bp-34h]@12

  _R4 = this;
  v2 = (_DWORD *)*((_DWORD *)this + 1315);
  for ( i = (_DWORD *)*((_DWORD *)_R4 + 1314); v2 != i; ++i )
  {
    if ( *i >= 1 )
      --*i;
  }
  v4 = SynchedEntityData::_find((Player *)((char *)_R4 + 176), 27);
  if ( v4 )
    v5 = (*(_BYTE *)(v4 + 9) & 2u) >> 1;
  else
    v5 = 0;
  if ( ((*(int (__fastcall **)(Player *))(*(_DWORD *)_R4 + 784))(_R4) ^ v5) == 1 )
    if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)_R4 + 784))(_R4) == 1 )
    {
      (*(void (__fastcall **)(Player *, signed int, signed int))(*(_DWORD *)_R4 + 1388))(_R4, 1, 1);
    }
    else if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)_R4 + 1392))(_R4) == 1 )
      SynchedEntityData::getPos((SynchedEntityData *)&v36, (int)_R4 + 176, 0x1Du);
      *((_DWORD *)_R4 + 1159) = v36;
      *((_DWORD *)_R4 + 1160) = v37;
      *((_DWORD *)_R4 + 1161) = v38;
      (*(void (__fastcall **)(Player *, char *))(*(_DWORD *)_R4 + 1384))(_R4, (char *)_R4 + 4636);
  v6 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)_R4 + 784))(_R4);
  v7 = *((_WORD *)_R4 + 2454);
  v8 = (signed __int16 *)((char *)_R4 + 4908);
  if ( v6 == 1 )
    v9 = v7 + 1;
    if ( (signed __int16)(v7 + 1) > 100 )
      v9 = 100;
    *v8 = v9;
    v10 = (Level *)Entity::getLevel(_R4);
    if ( !Level::isClientSide(v10) )
      v11 = (Block *)BlockSource::getBlock(*((BlockSource **)_R4 + 1158), (Player *)((char *)_R4 + 4636));
      if ( !Block::isType(v11, (const Block *)Block::mBed) )
      {
        v13 = 1;
        v14 = *(void (__fastcall **)(Player *, signed int, signed int))(*(_DWORD *)_R4 + 1388);
        v15 = _R4;
        goto LABEL_28;
      }
      v12 = Entity::getDimension(_R4);
      if ( (*(int (**)(void))(*(_DWORD *)v12 + 196))() == 1 )
        v13 = 0;
LABEL_28:
        v14(v15, v13, 1);
        goto LABEL_29;
  else if ( v7 < 1 )
    if ( *((_BYTE *)_R4 + 5228) )
      v17 = (Level *)Entity::getLevel(_R4);
      if ( !*(_DWORD *)Level::getHitResult(v17) )
        (*(void (__fastcall **)(Player *))(*(_DWORD *)_R4 + 928))(_R4);
    v16 = v7 + 1;
    if ( (signed __int16)(v7 + 1) > 109 )
      v16 = 0;
    *v8 = v16;
LABEL_29:
  v18 = Abilities::getBool((int)_R4 + 4320, (int **)&Abilities::NOCLIP);
  Entity::setStatusFlag((int)_R4, 45, v18 ^ 1);
  (*(void (**)(void))(**((_DWORD **)_R4 + 1293) + 40))();
  _R0 = (*(int (__fastcall **)(Player *))(*(_DWORD *)_R4 + 52))(_R4);
  __asm
    VLDR            S16, [R0]
    VLDR            S18, [R0,#4]
    VLDR            S20, [R0,#8]
  Mob::normalTick(_R4);
    VLDR            S0, [R0]
    VLDR            S2, [R0,#4]
    VLDR            S4, [R0,#8]
    VSUB.F32        S0, S0, S16
    VSUB.F32        S2, S2, S18
    VSUB.F32        S4, S4, S20
    VSTR            S0, [SP,#0x48+var_48]
    VSTR            S2, [SP,#0x48+var_44]
    VSTR            S4, [SP,#0x48+var_40]
  Player::_applyExhaustion(_R4, (const Vec3 *)&v35);
  _R0 = *((_DWORD *)_R4 + 1181);
  *((_DWORD *)_R4 + 1178) = _R0;
  _R6 = *((_DWORD *)_R4 + 1182);
  *((_DWORD *)_R4 + 1179) = _R6;
  __asm { VMOV            S0, R0 }
  _R0 = *((_DWORD *)_R4 + 1183);
  *((_DWORD *)_R4 + 1180) = _R0;
    VMOV.F32        S8, #10.0
    VLDR            S12, [R4,#0x48]
    VMOV            S2, R0
    VLDR            S6, [R4,#0x4C]
    VSUB.F32        S4, S12, S0
    VLDR            S10, [R4,#0x50]
    VCMPE.F32       S4, S8
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    goto LABEL_55;
    VMOV.F32        S14, #-10.0
    VCMPE.F32       S4, S14
  if ( _NF ^ _VF )
LABEL_55:
    __asm
      VMOV.F32        S0, S12
      VSTR            S12, [R1]
      VSTR            S12, [R2]
    VMOV.F32        S1, #-10.0
    VSUB.F32        S12, S10, S2
    VMOV            S14, R6
    VCMPE.F32       S4, S1
    goto LABEL_56;
    VCMPE.F32       S12, S8
LABEL_56:
      VMOV.F32        S2, S10
      VSTR            S10, [R0]
      VSTR            S10, [R2]
    VSUB.F32        S10, S6, S14
    goto LABEL_57;
    VCMPE.F32       S10, S8
LABEL_57:
      VMOV.F32        S14, S6
      VSTR            S6, [R3]
      VSTR            S6, [R2]
    VMOV.F32        S6, #0.25
    VMUL.F32        S4, S4, S6
    VMUL.F32        S8, S10, S6
    VMUL.F32        S6, S12, S6
    VADD.F32        S0, S0, S4
    VADD.F32        S4, S14, S8
    VADD.F32        S2, S2, S6
    VSTR            S0, [R1]
    VSTR            S4, [R3]
    VSTR            S2, [R0]
  v28 = (Level *)Entity::getLevel(_R4);
  if ( !Level::isClientSide(v28)
    && (*(int (__fastcall **)(Player *))(*(_DWORD *)_R4 + 320))(_R4) == 1
    && Abilities::getBool((int)_R4 + 4320, (int **)&Abilities::INVULNERABLE) == 1
    && !(*(int (__fastcall **)(Player *))(*(_DWORD *)_R4 + 216))(_R4) )
    *((_DWORD *)_R4 + 107) = 0;
  Player::_updateInteraction(_R4);
  CompassItem::SpriteCalculator::update((Player *)((char *)_R4 + 4676), _R4, 0);
  ClockItem::SpriteCalculator::update((Player *)((char *)_R4 + 4688), _R4, 0);
    VLDR            S0, [R4,#0x70]
    VCMPE.F32       S0, #0.0
    if ( *((_WORD *)_R4 + 2470) != (unsigned __int16)FullBlock::AIR )
      __asm { VMOV.F32        S4, #1.0 }
      _R1 = (int)_R4 + 4932;
      __asm
        VLDR            S0, [R1]
        VCVT.F32.S32    S0, S0
        VLDR            S2, [R4,#0x4C]
        VSUB.F32        S16, S2, S0
        VCMPE.F32       S16, S4
        VMRS            APSR_nzcv, FPSCR
      if ( !(_NF ^ _VF) )
        (*(void (__fastcall **)(Player *))(*(_DWORD *)_R4 + 1440))(_R4);
        __asm { VMOV            R0, S16 }
        _R0 = truncf(_R0);
        __asm
        {
          VMOV            S0, R0
          VCVTR.S32.F32   S0, S0
          VMOV            R2, S0
        }
        MinecraftEventing::fireEventPlayerBounced(_R4, (Player *)((char *)_R4 + 4940), _R2, v33);
        *((_BYTE *)_R4 + 4940) = 0;
        *((_BYTE *)_R4 + 4941) = 0;
  if ( (*((_DWORD *)_R4 + 1313) & *((_DWORD *)_R4 + 1312)) == -1 )
    Player::_registerElytraLoopSound(_R4);
  result = 4994;
  *((_BYTE *)_R4 + 4994) = 0;
  return result;
}


int __fastcall Player::getExperienceReward(Player *this)
{
  AttributeInstance *v1; // r0@1
  int result; // r0@1

  v1 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)this + 1004))();
  _R0 = AttributeInstance::getCurrentValue(v1);
  __asm
  {
    VMOV            S0, R0
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  result = 7 * _R0;
  if ( result > 100 )
    result = 100;
  return result;
}


int __fastcall Player::startUsingItem(Player *this, const ItemInstance *a2, int a3)
{
  Player *v3; // r4@1
  char *v4; // r7@1
  const ItemInstance *v5; // r6@1
  int v6; // r5@1
  int result; // r0@1
  Level *v8; // r0@2

  v3 = this;
  v4 = (char *)this + 4832;
  v5 = a2;
  v6 = a3;
  result = ItemInstance::operator==(a2, (Player *)((char *)this + 4832));
  if ( !result )
  {
    ItemInstance::operator=((int)v4, (int)v5);
    *((_DWORD *)v3 + 1226) = v6;
    v8 = (Level *)Entity::getLevel(v3);
    result = Level::isClientSide(v8);
    if ( !result )
      result = j_j_j__ZN6Entity13setStatusFlagE11EntityFlagsb_0((int)v3, 4, 1);
  }
  return result;
}


int __fastcall Player::startDestroying(int result)
{
  *(_BYTE *)(result + 5228) = 1;
  return result;
}


signed int __fastcall Player::isHungry(Player *this)
{
  AttributeInstance *v1; // r0@1
  AttributeInstance *v2; // r4@1
  signed int result; // r0@1

  v1 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)this + 1004))();
  v2 = v1;
  _R0 = AttributeInstance::getCurrentValue(v1);
  __asm { VMOV            S16, R0 }
  _R0 = AttributeInstance::getDefaultValue(v2, 2);
  __asm { VMOV            S0, R0 }
  result = 0;
  __asm
  {
    VCMPE.F32       S16, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


int __fastcall Player::clearUntrackedInteractionUIContainer(Player *this, int a2)
{
  Player *v2; // r4@1
  int result; // r0@1
  int v4; // r7@2
  int v5; // r4@2
  int v6; // r0@3
  int v7; // [sp+0h] [bp-60h]@3
  int v8; // [sp+8h] [bp-58h]@7
  void *v9; // [sp+24h] [bp-3Ch]@5
  void *ptr; // [sp+34h] [bp-2Ch]@3

  v2 = this;
  result = (*(int (**)(void))(**((_DWORD **)this + 1241) + 44))();
  if ( result >= 1 )
  {
    v4 = (int)v2 + 4964;
    v5 = 0;
    do
    {
      v6 = (*(int (**)(void))(**(_DWORD **)v4 + 16))();
      ItemInstance::ItemInstance((ItemInstance *)&v7, v6);
      (*(void (**)(void))(**(_DWORD **)v4 + 32))();
      if ( ptr )
        operator delete(ptr);
      if ( v9 )
        operator delete(v9);
      if ( v8 )
        (*(void (**)(void))(*(_DWORD *)v8 + 4))();
      result = (*(int (**)(void))(**(_DWORD **)v4 + 44))();
      ++v5;
    }
    while ( v5 < result );
  }
  return result;
}


signed int __fastcall Player::getPortalWaitTime(Player *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = Abilities::getBool((int)this + 4320, (int **)&Abilities::INVULNERABLE);
  v2 = 80;
  if ( v1 )
    v2 = 0;
  return v2;
}


void __fastcall Player::updateTrackedBosses(Player *this)
{
  Player::updateTrackedBosses(this);
}


int __fastcall Player::setTeleportDestination(int result, const Vec3 *a2)
{
  *(_DWORD *)(result + 4660) = *(_DWORD *)a2;
  *(_DWORD *)(result + 4664) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 4668) = *((_DWORD *)a2 + 2);
  *(_BYTE *)(result + 4821) = 1;
  return result;
}


int __fastcall Player::setRespawnDimensionId(int result, int a2)
{
  *(_DWORD *)(result + 4824) = a2;
  return result;
}


void __fastcall Player::handleEntityEvent(Player *a1, signed int a2, Mob *a3)
{
  Player::handleEntityEvent(a1, a2, a3);
}


int __fastcall Player::isImmobile(Player *this)
{
  Player *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( Mob::isImmobile(this) )
    result = 1;
  else
    result = (*(int (__fastcall **)(Player *))(*(_DWORD *)v1 + 784))(v1);
  return result;
}


int __fastcall Player::getUserId(Player *this)
{
  return 0;
}


int __fastcall Player::spawnExperienceOrb(Player *this, const Vec3 *a2, int a3)
{
  int v3; // r5@1
  const Vec3 *v4; // r6@1
  Player *v5; // r4@1
  Level *v6; // r0@1
  int result; // r0@1
  int v8; // r1@2
  int v9; // r2@2
  void **v10; // [sp+0h] [bp-30h]@2
  int v11; // [sp+4h] [bp-2Ch]@2
  int v12; // [sp+8h] [bp-28h]@2
  char v13; // [sp+Ch] [bp-24h]@2
  int v14; // [sp+10h] [bp-20h]@2
  int v15; // [sp+14h] [bp-1Ch]@2
  int v16; // [sp+18h] [bp-18h]@2
  int v17; // [sp+1Ch] [bp-14h]@2
  int v18; // [sp+20h] [bp-10h]@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = (Level *)Entity::getLevel(this);
  result = Level::isClientSide(v6);
  if ( result == 1 )
  {
    v11 = 2;
    v12 = 1;
    v13 = 0;
    v10 = &off_26E98B4;
    v8 = *((_DWORD *)v4 + 1);
    v9 = *((_DWORD *)v4 + 2);
    v14 = *(_DWORD *)v4;
    v15 = v8;
    v16 = v9;
    v17 = v3;
    result = (*(int (__cdecl **)(_DWORD, void ***, _DWORD, int *, void **, signed int, signed int, _DWORD))(**((_DWORD **)v5 + 1231) + 8))(
               *((_DWORD *)v5 + 1231),
               &v10,
               *(_DWORD *)(**((_DWORD **)v5 + 1231) + 8),
               &v18,
               &off_26E98B4,
               2,
               1,
               *(_DWORD *)&v13);
  }
  return result;
}


Entity *__fastcall Player::getAgent(Player *this)
{
  Player *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  v2 = Entity::getLevel(this);
  return j_j_j__ZNK5Level19getAutonomousEntityE14EntityUniqueID(
           v2,
           4984,
           *((_DWORD *)v1 + 1246),
           *((_DWORD *)v1 + 1247));
}


char *__fastcall Player::setName(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  int v4; // r5@1
  _DWORD *v5; // r0@2
  size_t v6; // r2@2
  unsigned int v7; // r0@4
  unsigned int v8; // r1@4
  char *v9; // r0@9
  unsigned int *v11; // r2@11
  signed int v12; // r1@13
  void *s2; // [sp+4h] [bp-1Ch]@1

  v2 = a1;
  v3 = a2;
  EntityInteraction::setInteractText((int *)(a1 + 4316), a2);
  sub_21E8AF4((int *)&s2, v3);
  v4 = SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 4);
  if ( *(_BYTE *)(v4 + 4) == 4 )
  {
    v5 = *(_DWORD **)(v4 + 12);
    v6 = *(v5 - 3);
    if ( v6 != *((_DWORD *)s2 - 3) || memcmp(v5, s2, v6) )
    {
      EntityInteraction::setInteractText((int *)(v4 + 12), (int *)&s2);
      *(_BYTE *)(v4 + 8) = 1;
      v7 = *(_WORD *)(v4 + 6);
      v8 = *(_WORD *)(v2 + 188);
      if ( v8 >= v7 )
        LOWORD(v8) = *(_WORD *)(v4 + 6);
      *(_WORD *)(v2 + 188) = v8;
      if ( *(_WORD *)(v2 + 190) > v7 )
        LOWORD(v7) = *(_WORD *)(v2 + 190);
      *(_WORD *)(v2 + 190) = v7;
    }
  }
  v9 = (char *)s2 - 12;
  if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)((char *)s2 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  return sub_21E7EE0((const void **)(v2 + 3372), 0, *(_BYTE **)(*(_DWORD *)(v2 + 3372) - 12), 0);
}


int __fastcall Player::isChatAllowed(Player *this)
{
  Entity *v1; // r4@1
  int result; // r0@2
  Level *v3; // r0@3
  unsigned __int64 *v4; // r0@3

  v1 = this;
  if ( Abilities::getBool((int)this + 4320, (int **)&Abilities::MUTED) )
  {
    result = 0;
  }
  else
    v3 = (Level *)Entity::getLevel(v1);
    v4 = (unsigned __int64 *)Level::getGameRules(v3);
    if ( GameRules::getBool(v4, (int **)&GameRules::GLOBAL_MUTE) == 1 )
      result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 1492))(v1);
    else
      result = 1;
  return result;
}


int __fastcall Player::stopGliding(Player *this)
{
  Player *v1; // r4@1
  __int64 v2; // r1@1

  v1 = this;
  Entity::setStatusFlag((int)this, 30, 0);
  v2 = *(_QWORD *)(*(_DWORD *)(*((_DWORD *)v1 + 12) + 116) + 4);
  return (*(int (__fastcall **)(Player *, _DWORD, _DWORD))(*(_DWORD *)v1 + 680))(v1, v2, HIDWORD(v2));
}


char *__fastcall Player::addListener(int a1, int a2)
{
  int v2; // r8@1
  int v3; // r5@1
  int *v4; // r0@1
  int *v5; // r10@1
  char *result; // r0@2
  void **v7; // r9@3
  _BYTE *v8; // r6@3
  unsigned int v9; // r2@3
  unsigned int v10; // r1@5
  unsigned int v11; // r4@5
  char *v12; // r7@11
  char **v13; // r11@13
  int v14; // r5@13
  int v15; // r5@15

  v2 = a2;
  v3 = a1;
  v4 = *(int **)(a1 + 5180);
  v5 = (int *)(v3 + 5180);
  if ( v4 == *(int **)(v3 + 5184) )
  {
    v7 = (void **)(v3 + 5176);
    v8 = *(_BYTE **)(v3 + 5176);
    v9 = ((char *)v4 - v8) >> 2;
    if ( !v9 )
      v9 = 1;
    v10 = v9 + (((char *)v4 - v8) >> 2);
    v11 = v9 + (((char *)v4 - v8) >> 2);
    if ( 0 != v10 >> 30 )
      v11 = 0x3FFFFFFF;
    if ( v10 < v9 )
    if ( v11 )
    {
      if ( v11 >= 0x40000000 )
        sub_21E57F4();
      v12 = (char *)operator new(4 * v11);
      v8 = *v7;
      v4 = (int *)*v5;
    }
    else
      v12 = 0;
    v13 = (char **)(v3 + 5184);
    v14 = (int)&v12[(char *)v4 - v8];
    *(_DWORD *)&v12[(char *)v4 - v8] = v2;
    if ( 0 != ((char *)v4 - v8) >> 2 )
      _aeabi_memmove4(v12, v8);
    v15 = v14 + 4;
    if ( v8 )
      operator delete(v8);
    *v7 = v12;
    result = &v12[4 * v11];
    *v5 = v15;
    *v13 = result;
  }
  else
    *v4 = a2;
    result = (char *)(*v5 + 4);
    *v5 = (int)result;
  return result;
}


int __fastcall Player::getItemCooldownLeft(int a1, int a2)
{
  int result; // r0@2

  if ( a2 == -1 )
    result = 0;
  else
    result = *(_DWORD *)(*(_DWORD *)(a1 + 5256) + 4 * a2);
  return result;
}


int __fastcall Player::_touch(Player *this, Entity *a2)
{
  Player *v2; // r4@1
  Entity *v3; // r5@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  result = (*(int (**)(void))(*(_DWORD *)this + 1488))();
  if ( result == 1 )
    result = (*(int (__fastcall **)(Entity *, Player *))(*(_DWORD *)v3 + 268))(v3, v2);
  return result;
}


int __fastcall Player::crackBlock(Player *this, const BlockPos *a2, int a3)
{
  Player *v3; // r6@1
  const BlockPos *v4; // r5@1
  int v5; // r4@1
  int v6; // r0@1
  int v7; // r3@1
  int v8; // r5@1
  int v10; // [sp+0h] [bp-48h]@1
  void **v11; // [sp+8h] [bp-40h]@1
  int v12; // [sp+Ch] [bp-3Ch]@1
  int v13; // [sp+10h] [bp-38h]@1
  char v14; // [sp+14h] [bp-34h]@1
  int v15; // [sp+18h] [bp-30h]@1
  int v16; // [sp+1Ch] [bp-2Ch]@1
  int v17; // [sp+20h] [bp-28h]@1
  int v18; // [sp+24h] [bp-24h]@1
  int v19; // [sp+28h] [bp-20h]@1
  __int64 v20; // [sp+30h] [bp-18h]@1

  v3 = this;
  v4 = a2;
  v5 = a3;
  Entity::getRuntimeID((Entity *)&v10, (int)this);
  v12 = 2;
  v13 = 1;
  v14 = 0;
  v11 = &off_26DA670;
  v6 = *(_DWORD *)v4;
  v7 = *((_DWORD *)v4 + 1);
  v8 = *((_DWORD *)v4 + 2);
  v15 = v6;
  v16 = v7;
  v17 = v8;
  v18 = v5;
  v19 = 18;
  v20 = *(_QWORD *)&v10;
  return (*(int (**)(void))(**((_DWORD **)v3 + 1231) + 8))();
}


void __fastcall Player::readAdditionalSaveData(Player *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  Player *v3; // r4@1
  signed int v4; // r6@1
  void *v5; // r0@1
  const ListTag *v6; // r6@3
  void *v7; // r0@3
  signed int v8; // r6@5
  void *v9; // r0@5
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  void *v12; // r0@11
  int v13; // r6@13
  int v14; // r7@13
  char v15; // r0@13
  void *v16; // r0@13
  void *v17; // r0@14
  signed int v18; // r6@19
  void *v19; // r0@19
  unsigned int *v20; // r2@20
  signed int v21; // r1@22
  void *v22; // r0@28
  void *v23; // r0@29
  void *v24; // r0@30
  void *v25; // r0@31
  void *v26; // r0@33
  void *v27; // r0@34
  int v28; // r6@35
  int v29; // r7@35
  int v30; // r0@35
  void *v31; // r0@35
  _BYTE *v32; // r6@36
  void *v33; // r0@36
  void *v34; // r0@37
  SynchedEntityData *v35; // r6@39
  int v36; // r0@39
  char v37; // r1@39
  int v38; // r0@40
  int v39; // r0@42
  char v40; // r1@42
  unsigned int v41; // r0@44
  unsigned int v42; // r1@44
  int v43; // r0@49
  unsigned int v44; // r1@49
  __int64 v45; // r2@50
  unsigned int v46; // r1@55
  unsigned int v47; // r0@55
  signed int v48; // r6@62
  void *v49; // r0@62
  unsigned int *v50; // r2@63
  signed int v51; // r1@65
  void *v52; // r0@69
  void *v53; // r0@70
  int v54; // r6@72
  int v55; // r7@72
  int v56; // r0@72
  void *v57; // r0@72
  void *v58; // r0@73
  void *v59; // r0@74
  void *v60; // r0@75
  signed int v61; // r6@77
  void *v62; // r0@77
  unsigned int *v63; // r2@78
  signed int v64; // r1@80
  void *v65; // r0@83
  AttributeInstance *v66; // r6@85
  void *v73; // r0@85
  AttributeInstance *v74; // r6@86
  int v75; // r0@86
  void *v76; // r0@86
  AttributeInstance *v77; // r0@87
  AttributeInstance *v78; // r0@87
  AttributeInstance *v79; // r0@87
  int v84; // r3@87
  int v85; // r2@89
  signed int v86; // r6@93
  void *v87; // r0@93
  void *v88; // r0@95
  signed int v89; // r6@96
  void *v90; // r0@96
  void *v91; // r0@98
  signed int v92; // r6@99
  void *v93; // r0@99
  unsigned int v94; // r6@101
  void *v95; // r0@101
  signed int v96; // r6@104
  void *v97; // r0@104
  void *v98; // r0@106
  signed int v99; // r6@108
  void *v100; // r0@108
  void *v101; // r0@110
  signed int v102; // r6@111
  void *v103; // r0@111
  const CompoundTag *v104; // r0@113
  void *v105; // r0@113
  signed int v106; // r6@146
  void *v107; // r0@146
  void *v108; // r0@148
  int v109; // r1@149
  Level *v110; // r0@150
  char *v111; // r0@150
  signed int v112; // r6@151
  void *v113; // r0@151
  void *v114; // r0@153
  unsigned int *v115; // r2@155
  signed int v116; // r1@157
  unsigned int *v117; // r2@159
  signed int v118; // r1@161
  unsigned int *v119; // r2@163
  signed int v120; // r1@165
  unsigned int *v121; // r2@167
  signed int v122; // r1@169
  unsigned int *v123; // r2@171
  signed int v124; // r1@173
  unsigned int *v125; // r2@175
  signed int v126; // r1@177
  unsigned int *v127; // r2@179
  signed int v128; // r1@181
  unsigned int *v129; // r2@183
  signed int v130; // r1@185
  unsigned int *v131; // r2@187
  signed int v132; // r1@189
  unsigned int *v133; // r2@191
  signed int v134; // r1@193
  unsigned int *v135; // r2@195
  signed int v136; // r1@197
  unsigned int *v137; // r2@199
  signed int v138; // r1@201
  unsigned int *v139; // r2@207
  signed int v140; // r1@209
  unsigned int *v141; // r2@211
  signed int v142; // r1@213
  unsigned int *v143; // r2@219
  signed int v144; // r1@221
  unsigned int *v145; // r2@223
  signed int v146; // r1@225
  unsigned int *v147; // r2@227
  signed int v148; // r1@229
  unsigned int *v149; // r2@235
  signed int v150; // r1@237
  unsigned int *v151; // r2@239
  signed int v152; // r1@241
  unsigned int *v153; // r2@243
  signed int v154; // r1@245
  unsigned int *v155; // r2@247
  signed int v156; // r1@249
  unsigned int *v157; // r2@251
  signed int v158; // r1@253
  unsigned int *v159; // r2@255
  signed int v160; // r1@257
  unsigned int *v161; // r2@259
  signed int v162; // r1@261
  unsigned int *v163; // r2@267
  signed int v164; // r1@269
  unsigned int *v165; // r2@271
  signed int v166; // r1@273
  unsigned int *v167; // r2@279
  signed int v168; // r1@281
  unsigned int *v169; // r2@283
  signed int v170; // r1@285
  unsigned int *v171; // r2@291
  signed int v172; // r1@293
  unsigned int *v173; // r2@299
  signed int v174; // r1@301
  unsigned int *v175; // r2@307
  signed int v176; // r1@309
  unsigned int *v177; // r2@315
  signed int v178; // r1@317
  unsigned int *v179; // r2@323
  signed int v180; // r1@325
  unsigned int *v181; // r2@331
  signed int v182; // r1@333
  unsigned int *v183; // r2@339
  signed int v184; // r1@341
  unsigned int *v185; // r2@359
  signed int v186; // r1@361
  unsigned int *v187; // r2@363
  signed int v188; // r1@365
  unsigned int *v189; // r2@367
  signed int v190; // r1@369
  unsigned int *v191; // r2@467
  signed int v192; // r1@469
  int v193; // [sp+4h] [bp-2FCh]@153
  int v194; // [sp+Ch] [bp-2F4h]@151
  int v195; // [sp+14h] [bp-2ECh]@148
  int v196; // [sp+1Ch] [bp-2E4h]@146
  char v197; // [sp+20h] [bp-2E0h]@128
  int v198; // [sp+28h] [bp-2D8h]@132
  void *v199; // [sp+44h] [bp-2BCh]@130
  void *v200; // [sp+54h] [bp-2ACh]@128
  int v201; // [sp+68h] [bp-298h]@128
  __int16 v202; // [sp+75h] [bp-28Bh]@116
  char v203; // [sp+77h] [bp-289h]@116
  int v204; // [sp+78h] [bp-288h]@116
  char v205; // [sp+7Ch] [bp-284h]@116
  __int16 v206; // [sp+7Dh] [bp-283h]@116
  char v207; // [sp+7Fh] [bp-281h]@116
  int v208; // [sp+80h] [bp-280h]@116
  int v209; // [sp+84h] [bp-27Ch]@116
  int v210; // [sp+88h] [bp-278h]@116
  int v211; // [sp+90h] [bp-270h]@126
  void *v212; // [sp+ACh] [bp-254h]@124
  void *v213; // [sp+BCh] [bp-244h]@122
  int v214; // [sp+D0h] [bp-230h]@116
  int v215; // [sp+D8h] [bp-228h]@120
  void *v216; // [sp+F4h] [bp-20Ch]@118
  void *ptr; // [sp+104h] [bp-1FCh]@116
  char v218; // [sp+118h] [bp-1E8h]@114
  int v219; // [sp+120h] [bp-1E0h]@138
  void *v220; // [sp+13Ch] [bp-1C4h]@136
  void *v221; // [sp+14Ch] [bp-1B4h]@134
  int v222; // [sp+164h] [bp-19Ch]@113
  char v223; // [sp+168h] [bp-198h]@113
  int v224; // [sp+170h] [bp-190h]@144
  void *v225; // [sp+18Ch] [bp-174h]@142
  void *v226; // [sp+19Ch] [bp-164h]@140
  int v227; // [sp+1B8h] [bp-148h]@111
  int v228; // [sp+1C0h] [bp-140h]@110
  int v229; // [sp+1C8h] [bp-138h]@108
  int v230; // [sp+1D0h] [bp-130h]@106
  int v231; // [sp+1D8h] [bp-128h]@104
  int v232; // [sp+1E0h] [bp-120h]@101
  int v233; // [sp+1E8h] [bp-118h]@99
  int v234; // [sp+1F0h] [bp-110h]@98
  int v235; // [sp+1F8h] [bp-108h]@96
  int v236; // [sp+200h] [bp-100h]@95
  int v237; // [sp+208h] [bp-F8h]@93
  int v238; // [sp+210h] [bp-F0h]@86
  int v239; // [sp+218h] [bp-E8h]@85
  int v240; // [sp+220h] [bp-E0h]@77
  int v241; // [sp+228h] [bp-D8h]@76
  int v242; // [sp+230h] [bp-D0h]@75
  int v243; // [sp+238h] [bp-C8h]@72
  int v244; // [sp+240h] [bp-C0h]@72
  int v245; // [sp+248h] [bp-B8h]@72
  int v246; // [sp+250h] [bp-B0h]@62
  int v247; // [sp+258h] [bp-A8h]@61
  int v248; // [sp+260h] [bp-A0h]@60
  int v249; // [sp+268h] [bp-98h]@35
  int v250; // [sp+270h] [bp-90h]@35
  int v251; // [sp+278h] [bp-88h]@35
  int v252; // [sp+280h] [bp-80h]@34
  int v253; // [sp+288h] [bp-78h]@33
  int v254; // [sp+290h] [bp-70h]@19
  int v255; // [sp+298h] [bp-68h]@18
  int v256; // [sp+2A0h] [bp-60h]@17
  int v257; // [sp+2A8h] [bp-58h]@16
  int v258; // [sp+2B0h] [bp-50h]@15
  int v259; // [sp+2B8h] [bp-48h]@13
  int v260; // [sp+2C0h] [bp-40h]@13
  int v261; // [sp+2C8h] [bp-38h]@5
  int v262; // [sp+2D0h] [bp-30h]@4
  int v263; // [sp+2D8h] [bp-28h]@3
  int v264; // [sp+2E0h] [bp-20h]@1

  v2 = a2;
  v3 = this;
  Mob::readAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v264, "Inventory");
  v4 = CompoundTag::contains((int)v2, (const void **)&v264, 9);
  v5 = (void *)(v264 - 12);
  if ( (int *)(v264 - 12) != &dword_28898C0 )
  {
    v115 = (unsigned int *)(v264 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
    }
    else
      v116 = (*v115)--;
    if ( v116 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( v4 == 1 )
    sub_21E94B4((void **)&v263, "Inventory");
    v6 = (const ListTag *)CompoundTag::getList((int)v2, (const void **)&v263);
    v7 = (void *)(v263 - 12);
    if ( (int *)(v263 - 12) != &dword_28898C0 )
      v139 = (unsigned int *)(v263 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v140 = __ldrex(v139);
        while ( __strex(v140 - 1, v139) );
      }
      else
        v140 = (*v139)--;
      if ( v140 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    PlayerInventoryProxy::load(*((PlayerInventoryProxy **)v3 + 1188), v6);
    sub_21E94B4((void **)&v262, "SelectedInventorySlot");
    if ( CompoundTag::contains((int)v2, (const void **)&v262) == 1 )
      sub_21E94B4((void **)&v261, "SelectedContainerId");
      v8 = CompoundTag::contains((int)v2, (const void **)&v261);
      v9 = (void *)(v261 - 12);
      if ( (int *)(v261 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v261 - 4);
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
          j_j_j_j__ZdlPv_9(v9);
      v8 = 0;
    v12 = (void *)(v262 - 12);
    if ( (int *)(v262 - 12) != &dword_28898C0 )
      v141 = (unsigned int *)(v262 - 4);
          v142 = __ldrex(v141);
        while ( __strex(v142 - 1, v141) );
        v142 = (*v141)--;
      if ( v142 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    if ( v8 == 1 )
      v13 = *((_DWORD *)v3 + 1188);
      sub_21E94B4((void **)&v260, "SelectedInventorySlot");
      v14 = CompoundTag::getInt((int)v2, (const void **)&v260);
      sub_21E94B4((void **)&v259, "SelectedContainerId");
      v15 = CompoundTag::getInt((int)v2, (const void **)&v259);
      PlayerInventoryProxy::selectSlot(v13, v14, (Inventory *)v15);
      v16 = (void *)(v259 - 12);
      if ( (int *)(v259 - 12) != &dword_28898C0 )
        v185 = (unsigned int *)(v259 - 4);
            v186 = __ldrex(v185);
          while ( __strex(v186 - 1, v185) );
          v186 = (*v185)--;
        if ( v186 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
      v17 = (void *)(v260 - 12);
      if ( (int *)(v260 - 12) != &dword_28898C0 )
        v187 = (unsigned int *)(v260 - 4);
            v188 = __ldrex(v187);
          while ( __strex(v188 - 1, v187) );
          v188 = (*v187)--;
        if ( v188 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v258, "Sleeping");
  if ( CompoundTag::contains((int)v2, (const void **)&v258) == 1 )
    sub_21E94B4((void **)&v257, "SleepTimer");
    if ( CompoundTag::contains((int)v2, (const void **)&v257) == 1 )
      sub_21E94B4((void **)&v256, "BedPositionX");
      if ( CompoundTag::contains((int)v2, (const void **)&v256) == 1 )
        sub_21E94B4((void **)&v255, "BedPositionY");
        if ( CompoundTag::contains((int)v2, (const void **)&v255) == 1 )
          sub_21E94B4((void **)&v254, "BedPositionZ");
          v18 = CompoundTag::contains((int)v2, (const void **)&v254);
          v19 = (void *)(v254 - 12);
          if ( (int *)(v254 - 12) != &dword_28898C0 )
          {
            v20 = (unsigned int *)(v254 - 4);
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
              j_j_j_j__ZdlPv_9(v19);
          }
          v18 = 0;
        v22 = (void *)(v255 - 12);
        if ( (int *)(v255 - 12) != &dword_28898C0 )
          v191 = (unsigned int *)(v255 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v192 = __ldrex(v191);
            while ( __strex(v192 - 1, v191) );
          else
            v192 = (*v191)--;
          if ( v192 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
        v18 = 0;
      v23 = (void *)(v256 - 12);
      if ( (int *)(v256 - 12) != &dword_28898C0 )
        v189 = (unsigned int *)(v256 - 4);
            v190 = __ldrex(v189);
          while ( __strex(v190 - 1, v189) );
          v190 = (*v189)--;
        if ( v190 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
      v18 = 0;
    v24 = (void *)(v257 - 12);
    if ( (int *)(v257 - 12) != &dword_28898C0 )
      v143 = (unsigned int *)(v257 - 4);
          v144 = __ldrex(v143);
        while ( __strex(v144 - 1, v143) );
        v144 = (*v143)--;
      if ( v144 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
  else
    v18 = 0;
  v25 = (void *)(v258 - 12);
  if ( (int *)(v258 - 12) != &dword_28898C0 )
    v117 = (unsigned int *)(v258 - 4);
        v118 = __ldrex(v117);
      while ( __strex(v118 - 1, v117) );
      v118 = (*v117)--;
    if ( v118 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  if ( v18 == 1 )
    sub_21E94B4((void **)&v253, "Sleeping");
    *((_BYTE *)v3 + 5213) = CompoundTag::getBoolean((int)v2, (const void **)&v253);
    v26 = (void *)(v253 - 12);
    if ( (int *)(v253 - 12) != &dword_28898C0 )
      v145 = (unsigned int *)(v253 - 4);
          v146 = __ldrex(v145);
        while ( __strex(v146 - 1, v145) );
        v146 = (*v145)--;
      if ( v146 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    sub_21E94B4((void **)&v252, "SleepTimer");
    *((_WORD *)v3 + 2454) = CompoundTag::getShort((int)v2, (const void **)&v252);
    v27 = (void *)(v252 - 12);
    if ( (int *)(v252 - 12) != &dword_28898C0 )
      v147 = (unsigned int *)(v252 - 4);
          v148 = __ldrex(v147);
        while ( __strex(v148 - 1, v147) );
        v148 = (*v147)--;
      if ( v148 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    sub_21E94B4((void **)&v251, "BedPositionX");
    v28 = CompoundTag::getInt((int)v2, (const void **)&v251);
    sub_21E94B4((void **)&v250, "BedPositionY");
    v29 = CompoundTag::getInt((int)v2, (const void **)&v250);
    sub_21E94B4((void **)&v249, "BedPositionZ");
    v30 = CompoundTag::getInt((int)v2, (const void **)&v249);
    *((_DWORD *)v3 + 1159) = v28;
    *((_DWORD *)v3 + 1160) = v29;
    *((_DWORD *)v3 + 1161) = v30;
    v31 = (void *)(v249 - 12);
    if ( (int *)(v249 - 12) != &dword_28898C0 )
      v149 = (unsigned int *)(v249 - 4);
          v150 = __ldrex(v149);
        while ( __strex(v150 - 1, v149) );
        v150 = (*v149)--;
      if ( v150 <= 0 )
        j_j_j_j__ZdlPv_9(v31);
    v32 = (char *)v3 + 5213;
    v33 = (void *)(v250 - 12);
    if ( (int *)(v250 - 12) != &dword_28898C0 )
      v151 = (unsigned int *)(v250 - 4);
          v152 = __ldrex(v151);
        while ( __strex(v152 - 1, v151) );
        v152 = (*v151)--;
      if ( v152 <= 0 )
        j_j_j_j__ZdlPv_9(v33);
    v34 = (void *)(v251 - 12);
    if ( (int *)(v251 - 12) != &dword_28898C0 )
      v153 = (unsigned int *)(v251 - 4);
          v154 = __ldrex(v153);
        while ( __strex(v154 - 1, v153) );
        v154 = (*v153)--;
      if ( v154 <= 0 )
        j_j_j_j__ZdlPv_9(v34);
    if ( *v32 )
      *v32 = 0;
      v35 = (Player *)((char *)v3 + 176);
      v36 = SynchedEntityData::_get((Player *)((char *)v3 + 176), 27);
      v37 = *(_BYTE *)(v36 + 9);
      *(_BYTE *)(v36 + 9) = v37 | 2;
      if ( v37 & 2 )
        goto LABEL_49;
      v38 = SynchedEntityData::_get((Player *)((char *)v3 + 176), 27);
      *(_BYTE *)(v38 + 8) = 1;
      goto LABEL_44;
    *((_BYTE *)v3 + 5213) = 0;
    *((_DWORD *)v3 + 1159) = 0;
    *((_DWORD *)v3 + 1160) = 0;
    *((_DWORD *)v3 + 1161) = 0;
  v35 = (Player *)((char *)v3 + 176);
  (*(void (__fastcall **)(Player *, signed int, signed int))(*(_DWORD *)v3 + 1388))(v3, 1, 1);
  v39 = SynchedEntityData::_get((Player *)((char *)v3 + 176), 27);
  v40 = *(_BYTE *)(v39 + 9);
  *(_BYTE *)(v39 + 9) = v40 & 0xFD;
  if ( !(v40 & 2) )
    goto LABEL_49;
  v38 = SynchedEntityData::_get((Player *)((char *)v3 + 176), 27);
  *(_BYTE *)(v38 + 8) = 1;
LABEL_44:
  v41 = *(_WORD *)(v38 + 6);
  v42 = *((_WORD *)v3 + 94);
  if ( v42 >= v41 )
    LOWORD(v42) = v41;
  *((_WORD *)v3 + 94) = v42;
  if ( *((_WORD *)v3 + 95) > v41 )
    LOWORD(v41) = *((_WORD *)v3 + 95);
  *((_WORD *)v3 + 95) = v41;
LABEL_49:
  v43 = SynchedEntityData::_get(v35, 29);
  v44 = *(_DWORD *)(v43 + 4);
  if ( (unsigned __int8)v44 != 6 )
    goto LABEL_60;
  LODWORD(v45) = *((_DWORD *)v3 + 1159);
  if ( *(_DWORD *)(v43 + 12) == (_DWORD)v45 )
    HIDWORD(v45) = *((_DWORD *)v3 + 1160);
    if ( *(_DWORD *)(v43 + 16) == HIDWORD(v45) )
      HIDWORD(v45) = *(_DWORD *)(v43 + 16);
      if ( *(_DWORD *)(v43 + 20) == *((_DWORD *)v3 + 1161) )
        goto LABEL_60;
  *(_QWORD *)(v43 + 12) = v45;
  v46 = v44 >> 16;
  *(_DWORD *)(v43 + 20) = *((_DWORD *)v3 + 1161);
  *(_BYTE *)(v43 + 8) = 1;
  v47 = *((_WORD *)v3 + 94);
  if ( v47 >= v46 )
    LOWORD(v47) = v46;
  *((_WORD *)v3 + 94) = v47;
  if ( *((_WORD *)v3 + 95) > v46 )
    LOWORD(v46) = *((_WORD *)v3 + 95);
  *((_WORD *)v3 + 95) = v46;
LABEL_60:
  sub_21E94B4((void **)&v248, "SpawnX");
  if ( CompoundTag::contains((int)v2, (const void **)&v248) == 1 )
    sub_21E94B4((void **)&v247, "SpawnY");
    if ( CompoundTag::contains((int)v2, (const void **)&v247) == 1 )
      sub_21E94B4((void **)&v246, "SpawnZ");
      v48 = CompoundTag::contains((int)v2, (const void **)&v246);
      v49 = (void *)(v246 - 12);
      if ( (int *)(v246 - 12) != &dword_28898C0 )
        v50 = (unsigned int *)(v246 - 4);
            v51 = __ldrex(v50);
          while ( __strex(v51 - 1, v50) );
          v51 = (*v50)--;
        if ( v51 <= 0 )
          j_j_j_j__ZdlPv_9(v49);
      v48 = 0;
    v52 = (void *)(v247 - 12);
    if ( (int *)(v247 - 12) != &dword_28898C0 )
      v155 = (unsigned int *)(v247 - 4);
          v156 = __ldrex(v155);
        while ( __strex(v156 - 1, v155) );
        v156 = (*v155)--;
      if ( v156 <= 0 )
        j_j_j_j__ZdlPv_9(v52);
    v48 = 0;
  v53 = (void *)(v248 - 12);
  if ( (int *)(v248 - 12) != &dword_28898C0 )
    v119 = (unsigned int *)(v248 - 4);
        v120 = __ldrex(v119);
      while ( __strex(v120 - 1, v119) );
      v120 = (*v119)--;
    if ( v120 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  if ( v48 == 1 )
    sub_21E94B4((void **)&v245, "SpawnX");
    v54 = CompoundTag::getInt((int)v2, (const void **)&v245);
    sub_21E94B4((void **)&v244, "SpawnY");
    v55 = CompoundTag::getInt((int)v2, (const void **)&v244);
    sub_21E94B4((void **)&v243, "SpawnZ");
    v56 = CompoundTag::getInt((int)v2, (const void **)&v243);
    *((_DWORD *)v3 + 1300) = v54;
    *((_DWORD *)v3 + 1301) = v55;
    *((_DWORD *)v3 + 1302) = v56;
    v57 = (void *)(v243 - 12);
    if ( (int *)(v243 - 12) != &dword_28898C0 )
      v157 = (unsigned int *)(v243 - 4);
          v158 = __ldrex(v157);
        while ( __strex(v158 - 1, v157) );
        v158 = (*v157)--;
      if ( v158 <= 0 )
        j_j_j_j__ZdlPv_9(v57);
    v58 = (void *)(v244 - 12);
    if ( (int *)(v244 - 12) != &dword_28898C0 )
      v159 = (unsigned int *)(v244 - 4);
          v160 = __ldrex(v159);
        while ( __strex(v160 - 1, v159) );
        v160 = (*v159)--;
      if ( v160 <= 0 )
        j_j_j_j__ZdlPv_9(v58);
    v59 = (void *)(v245 - 12);
    if ( (int *)(v245 - 12) != &dword_28898C0 )
      v161 = (unsigned int *)(v245 - 4);
          v162 = __ldrex(v161);
        while ( __strex(v162 - 1, v161) );
        v162 = (*v161)--;
      if ( v162 <= 0 )
        j_j_j_j__ZdlPv_9(v59);
    sub_21E94B4((void **)&v242, "SpawnForced");
    *((_BYTE *)v3 + 5212) = CompoundTag::getBoolean((int)v2, (const void **)&v242);
    v60 = (void *)(v242 - 12);
    if ( (int *)(v242 - 12) != &dword_28898C0 )
      v163 = (unsigned int *)(v242 - 4);
          v164 = __ldrex(v163);
        while ( __strex(v164 - 1, v163) );
        v164 = (*v163)--;
      if ( v164 <= 0 )
        j_j_j_j__ZdlPv_9(v60);
  sub_21E94B4((void **)&v241, "PlayerLevel");
  if ( CompoundTag::contains((int)v2, (const void **)&v241) == 1 )
    sub_21E94B4((void **)&v240, "PlayerLevelProgress");
    v61 = CompoundTag::contains((int)v2, (const void **)&v240);
    v62 = (void *)(v240 - 12);
    if ( (int *)(v240 - 12) != &dword_28898C0 )
      v63 = (unsigned int *)(v240 - 4);
          v64 = __ldrex(v63);
        while ( __strex(v64 - 1, v63) );
        v64 = (*v63)--;
      if ( v64 <= 0 )
        j_j_j_j__ZdlPv_9(v62);
    v61 = 0;
  v65 = (void *)(v241 - 12);
  if ( (int *)(v241 - 12) != &dword_28898C0 )
    v121 = (unsigned int *)(v241 - 4);
        v122 = __ldrex(v121);
      while ( __strex(v122 - 1, v121) );
      v122 = (*v121)--;
    if ( v122 <= 0 )
      j_j_j_j__ZdlPv_9(v65);
  if ( v61 == 1 )
    v66 = (AttributeInstance *)(*(int (__fastcall **)(Player *, void *))(*(_DWORD *)v3 + 1000))(v3, &Player::LEVEL);
    sub_21E94B4((void **)&v239, "PlayerLevel");
    _R0 = CompoundTag::getInt((int)v2, (const void **)&v239);
    __asm
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VMOV            R1, S0
    AttributeInstance::setDefaultValue(v66, _R1, 2);
    v73 = (void *)(v239 - 12);
    if ( (int *)(v239 - 12) != &dword_28898C0 )
      v165 = (unsigned int *)(v239 - 4);
          v166 = __ldrex(v165);
        while ( __strex(v166 - 1, v165) );
        v166 = (*v165)--;
      if ( v166 <= 0 )
        j_j_j_j__ZdlPv_9(v73);
    v74 = (AttributeInstance *)(*(int (__fastcall **)(Player *, void *))(*(_DWORD *)v3 + 1000))(v3, &Player::EXPERIENCE);
    sub_21E94B4((void **)&v238, "PlayerLevelProgress");
    v75 = CompoundTag::getFloat((int)v2, (const void **)&v238);
    AttributeInstance::setDefaultValue(v74, *(float *)&v75, 2);
    v76 = (void *)(v238 - 12);
    if ( (int *)(v238 - 12) != &dword_28898C0 )
      v167 = (unsigned int *)(v238 - 4);
          v168 = __ldrex(v167);
        while ( __strex(v168 - 1, v167) );
        v168 = (*v167)--;
      if ( v168 <= 0 )
        j_j_j_j__ZdlPv_9(v76);
    v77 = (AttributeInstance *)(*(int (__fastcall **)(Player *, void *))(*(_DWORD *)v3 + 1000))(v3, &Player::LEVEL);
    AttributeInstance::setDefaultValue(v77, 0.0, 0);
    v78 = (AttributeInstance *)(*(int (__fastcall **)(_DWORD, void *))(*(_DWORD *)v3 + 1000))(v3, &Player::EXPERIENCE);
    AttributeInstance::setDefaultValue(v78, 0.0, 0);
    *((_BYTE *)v3 + 5192) = 1;
    v79 = (AttributeInstance *)(*(int (__fastcall **)(Player *, void *))(*(_DWORD *)v3 + 1004))(v3, &Player::LEVEL);
    _R0 = AttributeInstance::getCurrentValue(v79);
    __asm { VMOV            S0, R0 }
    _R0 = -2004318071;
      VCVTR.S32.F32   S0, S0
      VMOV            R2, S0
      SMMLA.W         R0, R0, R2, R2
    v84 = ((signed int)_R0 >> 3) + (_R0 >> 31);
    if ( v84 == 1 )
      v85 = 5 * _R2 - 38;
    else if ( v84 )
      v85 = 9 * _R2 - 158;
      v85 = 2 * _R2 + 7;
    *((_BYTE *)v3 + 5192) = 0;
    *((_DWORD *)v3 + 1299) = v85;
  Abilities::loadSaveData((Player *)((char *)v3 + 4320), v2);
  sub_21E94B4((void **)&v237, "RideID");
  v86 = CompoundTag::contains((int)v2, (const void **)&v237);
  v87 = (void *)(v237 - 12);
  if ( (int *)(v237 - 12) != &dword_28898C0 )
    v123 = (unsigned int *)(v237 - 4);
        v124 = __ldrex(v123);
      while ( __strex(v124 - 1, v123) );
      v124 = (*v123)--;
    if ( v124 <= 0 )
      j_j_j_j__ZdlPv_9(v87);
  if ( v86 == 1 )
    sub_21E94B4((void **)&v236, "RideID");
    *((_QWORD *)v3 + 574) = CompoundTag::getInt64((int)v2, (const void **)&v236);
    v88 = (void *)(v236 - 12);
    if ( (int *)(v236 - 12) != &dword_28898C0 )
      v169 = (unsigned int *)(v236 - 4);
          v170 = __ldrex(v169);
        while ( __strex(v170 - 1, v169) );
        v170 = (*v169)--;
      if ( v170 <= 0 )
        j_j_j_j__ZdlPv_9(v88);
  sub_21E94B4((void **)&v235, "EnchantmentSeed");
  v89 = CompoundTag::contains((int)v2, (const void **)&v235);
  v90 = (void *)(v235 - 12);
  if ( (int *)(v235 - 12) != &dword_28898C0 )
    v125 = (unsigned int *)(v235 - 4);
        v126 = __ldrex(v125);
      while ( __strex(v126 - 1, v125) );
      v126 = (*v125)--;
    if ( v126 <= 0 )
      j_j_j_j__ZdlPv_9(v90);
  if ( v89 == 1 )
    sub_21E94B4((void **)&v234, "EnchantmentSeed");
    *((_DWORD *)v3 + 1309) = CompoundTag::getInt((int)v2, (const void **)&v234);
    v91 = (void *)(v234 - 12);
    if ( (int *)(v234 - 12) != &dword_28898C0 )
      v171 = (unsigned int *)(v234 - 4);
          v172 = __ldrex(v171);
        while ( __strex(v172 - 1, v171) );
        v172 = (*v171)--;
      if ( v172 <= 0 )
        j_j_j_j__ZdlPv_9(v91);
  sub_21E94B4((void **)&v233, "DimensionId");
  v92 = CompoundTag::contains((int)v2, (const void **)&v233);
  v93 = (void *)(v233 - 12);
  if ( (int *)(v233 - 12) != &dword_28898C0 )
    v127 = (unsigned int *)(v233 - 4);
        v128 = __ldrex(v127);
      while ( __strex(v128 - 1, v127) );
      v128 = (*v127)--;
    if ( v128 <= 0 )
      j_j_j_j__ZdlPv_9(v93);
  if ( v92 == 1 )
    sub_21E94B4((void **)&v232, "DimensionId");
    v94 = CompoundTag::getInt((int)v2, (const void **)&v232);
    v95 = (void *)(v232 - 12);
    if ( (int *)(v232 - 12) != &dword_28898C0 )
      v173 = (unsigned int *)(v232 - 4);
          v174 = __ldrex(v173);
        while ( __strex(v174 - 1, v173) );
        v174 = (*v173)--;
      if ( v174 <= 0 )
        j_j_j_j__ZdlPv_9(v95);
    if ( v94 <= 2 )
      *((_DWORD *)v3 + 9) = v94;
  sub_21E94B4((void **)&v231, "EnderChestInventory");
  v96 = CompoundTag::contains((int)v2, (const void **)&v231, 9);
  v97 = (void *)(v231 - 12);
  if ( (int *)(v231 - 12) != &dword_28898C0 )
    v129 = (unsigned int *)(v231 - 4);
        v130 = __ldrex(v129);
      while ( __strex(v130 - 1, v129) );
      v130 = (*v129)--;
    if ( v130 <= 0 )
      j_j_j_j__ZdlPv_9(v97);
  if ( v96 == 1 )
    sub_21E94B4((void **)&v230, "EnderChestInventory");
    CompoundTag::getList((int)v2, (const void **)&v230);
    v98 = (void *)(v230 - 12);
    if ( (int *)(v230 - 12) != &dword_28898C0 )
      v175 = (unsigned int *)(v230 - 4);
          v176 = __ldrex(v175);
        while ( __strex(v176 - 1, v175) );
        v176 = (*v175)--;
      if ( v176 <= 0 )
        j_j_j_j__ZdlPv_9(v98);
    (*(void (**)(void))(**((_DWORD **)v3 + 1240) + 136))();
  sub_21E94B4((void **)&v229, "MapIndex");
  v99 = CompoundTag::contains((int)v2, (const void **)&v229);
  v100 = (void *)(v229 - 12);
  if ( (int *)(v229 - 12) != &dword_28898C0 )
    v131 = (unsigned int *)(v229 - 4);
        v132 = __ldrex(v131);
      while ( __strex(v132 - 1, v131) );
      v132 = (*v131)--;
    if ( v132 <= 0 )
      j_j_j_j__ZdlPv_9(v100);
  if ( v99 == 1 )
    sub_21E94B4((void **)&v228, "MapIndex");
    *((_DWORD *)v3 + 1311) = CompoundTag::getInt((int)v2, (const void **)&v228);
    v101 = (void *)(v228 - 12);
    if ( (int *)(v228 - 12) != &dword_28898C0 )
      v177 = (unsigned int *)(v228 - 4);
          v178 = __ldrex(v177);
        while ( __strex(v178 - 1, v177) );
        v178 = (*v177)--;
      if ( v178 <= 0 )
        j_j_j_j__ZdlPv_9(v101);
  sub_21E94B4((void **)&v227, "CursorSelectedItem");
  v102 = CompoundTag::contains((int)v2, (const void **)&v227, 10);
  v103 = (void *)(v227 - 12);
  if ( (int *)(v227 - 12) != &dword_28898C0 )
    v133 = (unsigned int *)(v227 - 4);
        v134 = __ldrex(v133);
      while ( __strex(v134 - 1, v133) );
      v134 = (*v133)--;
    if ( v134 <= 0 )
      j_j_j_j__ZdlPv_9(v103);
  if ( v102 == 1 )
    sub_21E94B4((void **)&v222, "CursorSelectedItem");
    v104 = (const CompoundTag *)CompoundTag::getCompound((int)v2, (const void **)&v222);
    ItemInstance::fromTag((ItemInstance *)&v223, v104);
    v105 = (void *)(v222 - 12);
    if ( (int *)(v222 - 12) != &dword_28898C0 )
      v179 = (unsigned int *)(v222 - 4);
          v180 = __ldrex(v179);
        while ( __strex(v180 - 1, v179) );
        v180 = (*v179)--;
      if ( v180 <= 0 )
        j_j_j_j__ZdlPv_9(v105);
    ItemInstance::ItemInstance((ItemInstance *)&v218, (int)&v223);
    if ( !(*(int (__fastcall **)(Player *, char *))(*(_DWORD *)v3 + 660))(v3, &v218) )
      (*(void (__fastcall **)(Player *, char *, _DWORD))(*(_DWORD *)v3 + 664))(v3, &v223, 0);
    v204 = 99999;
    v205 = -23;
    v207 = v203;
    v206 = v202;
    v208 = 0;
    v209 = 0;
    ItemInstance::ItemInstance((ItemInstance *)&v210, (int)&v223);
    ItemInstance::ItemInstance((ItemInstance *)&v214, (int)&ItemInstance::EMPTY_ITEM);
    InventoryTransactionManager::addAction((int)v3 + 5152, (int)&v204);
    if ( ptr )
      operator delete(ptr);
    if ( v216 )
      operator delete(v216);
    if ( v215 )
      (*(void (**)(void))(*(_DWORD *)v215 + 4))();
    v215 = 0;
    if ( v213 )
      operator delete(v213);
    if ( v212 )
      operator delete(v212);
    if ( v211 )
      (*(void (**)(void))(*(_DWORD *)v211 + 4))();
    v211 = 0;
    ItemInstance::operator=((int)v3 + 5000, (int)&ItemInstance::EMPTY_ITEM);
    ItemGroup::ItemGroup((ItemGroup *)&v197, (const ItemInstance *)&ItemInstance::EMPTY_ITEM);
    ItemInstance::operator=((int)v3 + 5072, (int)&v197);
    *((_DWORD *)v3 + 1286) = v201;
    if ( v200 )
      operator delete(v200);
    if ( v199 )
      operator delete(v199);
    if ( v198 )
      (*(void (**)(void))(*(_DWORD *)v198 + 4))();
    v198 = 0;
    if ( v221 )
      operator delete(v221);
    if ( v220 )
      operator delete(v220);
    if ( v219 )
      (*(void (**)(void))(*(_DWORD *)v219 + 4))();
    if ( v226 )
      operator delete(v226);
    if ( v225 )
      operator delete(v225);
    if ( v224 )
      (*(void (**)(void))(*(_DWORD *)v224 + 4))();
  sub_21E94B4((void **)&v196, "PlayerGameMode");
  v106 = CompoundTag::contains((int)v2, (const void **)&v196);
  v107 = (void *)(v196 - 12);
  if ( (int *)(v196 - 12) != &dword_28898C0 )
    v135 = (unsigned int *)(v196 - 4);
        v136 = __ldrex(v135);
      while ( __strex(v136 - 1, v135) );
      v136 = (*v135)--;
    if ( v136 <= 0 )
      j_j_j_j__ZdlPv_9(v107);
  if ( v106 == 1 )
    sub_21E94B4((void **)&v195, "PlayerGameMode");
    *((_DWORD *)v3 + 1308) = CompoundTag::getInt((int)v2, (const void **)&v195);
    v108 = (void *)(v195 - 12);
    if ( (int *)(v195 - 12) != &dword_28898C0 )
      v181 = (unsigned int *)(v195 - 4);
          v182 = __ldrex(v181);
        while ( __strex(v182 - 1, v181) );
        v182 = (*v181)--;
      if ( v182 <= 0 )
        j_j_j_j__ZdlPv_9(v108);
    v109 = *((_DWORD *)v3 + 1308);
    v110 = (Level *)Entity::getLevel(v3);
    v111 = Level::getLevelData(v110);
    v109 = LevelData::getGameType((LevelData *)v111);
    *((_DWORD *)v3 + 1308) = v109;
  (*(void (__fastcall **)(Player *, int))(*(_DWORD *)v3 + 1432))(v3, v109);
  sub_21E94B4((void **)&v194, "AgentID");
  v112 = CompoundTag::contains((int)v2, (const void **)&v194);
  v113 = (void *)(v194 - 12);
  if ( (int *)(v194 - 12) != &dword_28898C0 )
    v137 = (unsigned int *)(v194 - 4);
        v138 = __ldrex(v137);
      while ( __strex(v138 - 1, v137) );
      v138 = (*v137)--;
    if ( v138 <= 0 )
      j_j_j_j__ZdlPv_9(v113);
  if ( v112 == 1 )
    sub_21E94B4((void **)&v193, "AgentID");
    *((_QWORD *)v3 + 623) = CompoundTag::getInt64((int)v2, (const void **)&v193);
    v114 = (void *)(v193 - 12);
    if ( (int *)(v193 - 12) != &dword_28898C0 )
      v183 = (unsigned int *)(v193 - 4);
          v184 = __ldrex(v183);
        while ( __strex(v184 - 1, v183) );
        v184 = (*v183)--;
      if ( v184 <= 0 )
        j_j_j_j__ZdlPv_9(v114);
}


void __fastcall Player::getStandingPositionOnBlock(Player *this, const BlockPos *a2, int a3)
{
  Player *v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r7@1
  int v7; // r0@1
  int v8; // [sp+0h] [bp-38h]@1
  int v9; // [sp+4h] [bp-34h]@1
  int v10; // [sp+8h] [bp-30h]@1
  char v11; // [sp+Ch] [bp-2Ch]@1
  int v12; // [sp+10h] [bp-28h]@1
  int v13; // [sp+14h] [bp-24h]@1
  int v14; // [sp+18h] [bp-20h]@1
  int v15; // [sp+1Ch] [bp-1Ch]@1
  int v16; // [sp+20h] [bp-18h]@1

  v3 = this;
  v4 = *(_DWORD *)a3;
  v5 = *(_DWORD *)(a3 + 4);
  v6 = *(_DWORD *)(a3 + 8);
  v7 = *((_DWORD *)a2 + 79);
  v8 = 0;
  v9 = v7;
  v10 = 0;
  BlockPos::BlockPos((int)&v11, (int)&v8);
  v14 = *(_DWORD *)&v11 + v4;
  v15 = v5 + v12 + 2;
  v16 = v13 + v6;
  Vec3::Vec3((int)v3, (int)&v14);
}


int __fastcall Player::Player(int a1, Level *a2, int a3, int a4, int a5, char a6, int *a7, int a8, __int64 a9, __int64 a10, int *a11)
{
  int v11; // r9@1
  int v12; // r8@1
  Level *v13; // r7@1
  int v14; // r4@1
  int *v15; // r0@1
  int v16; // r3@1
  __int64 v17; // r2@1
  int v18; // r0@1
  unsigned int *v19; // r11@1
  char *v20; // r0@1
  int *v21; // r5@1
  int v22; // r6@2
  _BYTE *v23; // r0@2
  signed __int16 v24; // r7@2
  int v25; // r1@2
  unsigned int v26; // r0@4
  int v27; // r6@10
  _BYTE *v28; // r0@10
  signed __int16 v29; // r7@10
  int v30; // r1@10
  unsigned int v31; // r0@12
  int v32; // r9@18
  _BYTE *v33; // r0@18
  signed __int16 v34; // r7@18
  int v35; // r1@18
  unsigned int v36; // r0@20
  void *v37; // r0@25
  Level *v38; // r0@26
  __int64 v45; // r0@26
  int v46; // r6@26
  void *v47; // r5@26
  unsigned int v48; // r0@28
  __int64 v49; // r0@30
  int v50; // r5@30
  unsigned int *v51; // r1@31
  unsigned int v52; // r0@33
  unsigned int *v53; // r7@37
  unsigned int v54; // r0@39
  int v55; // r5@44
  unsigned int *v56; // r1@45
  unsigned int v57; // r0@47
  unsigned int *v58; // r7@51
  unsigned int v59; // r0@53
  int v60; // r0@58
  int v61; // r1@58
  unsigned int *v62; // r1@59
  unsigned int v63; // r2@61
  int v64; // r0@64
  unsigned int *v65; // r2@65
  unsigned int v66; // r1@67
  Level *v67; // r0@72
  int v68; // r0@72
  __int64 v69; // r0@72
  int v70; // r5@72
  int v71; // r0@72
  double v72; // r0@74
  int v73; // r5@74
  int v74; // r0@74
  unsigned int *v76; // r2@77
  signed int v77; // r1@79
  int *v78; // [sp+20h] [bp-68h]@1
  int *v79; // [sp+24h] [bp-64h]@1
  int v80; // [sp+28h] [bp-60h]@58
  int v81; // [sp+2Ch] [bp-5Ch]@58
  char v82; // [sp+33h] [bp-55h]@30
  char v83; // [sp+34h] [bp-54h]@30
  int v84; // [sp+38h] [bp-50h]@30
  int v85; // [sp+3Ch] [bp-4Ch]@26
  int v86; // [sp+40h] [bp-48h]@26
  float v87; // [sp+44h] [bp-44h]@26
  int v88; // [sp+54h] [bp-34h]@25
  int v89; // [sp+5Ch] [bp-2Ch]@26
  char v90; // [sp+60h] [bp-28h]@30

  v11 = a4;
  v12 = a3;
  v13 = a2;
  v14 = a1;
  Mob::Mob(a1, a2);
  *(_DWORD *)v14 = &off_26FCEC0;
  *(_DWORD *)(v14 + 4292) = 0;
  *(_BYTE *)(v14 + 4296) = 0;
  *(_BYTE *)(v14 + 4297) = 0;
  *(_DWORD *)(v14 + 4304) = 0;
  *(_DWORD *)(v14 + 4308) = 0;
  *(_BYTE *)(v14 + 4312) = 0;
  *(_DWORD *)(v14 + 4316) = &unk_28898CC;
  v15 = (int *)Level::getDefaultAbilities(v13);
  Abilities::Abilities(v14 + 4320, v15);
  _aeabi_memcpy8(v14 + 4392, a5, 152);
  *(_DWORD *)(v14 + 4544) = &unk_28898CC;
  *(_DWORD *)(v14 + 4556) = 0;
  *(_DWORD *)(v14 + 4552) = 0;
  *(_QWORD *)(v14 + 4560) = a9;
  *(_QWORD *)(v14 + 4568) = a10;
  v16 = *a11;
  *a11 = 0;
  *(_DWORD *)(v14 + 4576) = v16;
  *(_DWORD *)(v14 + 4580) = &unk_28898CC;
  *(_DWORD *)(v14 + 4584) = -9999;
  *(_DWORD *)(v14 + 4588) = 0;
  *(_DWORD *)(v14 + 4604) = -1;
  *(_DWORD *)(v14 + 4600) = -1;
  *(_DWORD *)(v14 + 4596) = -1;
  *(_DWORD *)(v14 + 4592) = -1;
  v17 = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(v14 + 4616) = dword_2822498;
  *(_QWORD *)(v14 + 4608) = v17;
  *(_BYTE *)(v14 + 4620) = 0;
  _aeabi_memclr4(v14 + 4624, 48);
  *(_BYTE *)(v14 + 4672) = 1;
  CompassItem::SpriteCalculator::SpriteCalculator((CompassItem::SpriteCalculator *)(v14 + 4676));
  ClockItem::SpriteCalculator::SpriteCalculator((ClockItem::SpriteCalculator *)(v14 + 4688));
  _aeabi_memclr4(v14 + 4700, 56);
  v18 = *a7;
  *a7 = 0;
  *(_DWORD *)(v14 + 4756) = v18;
  _aeabi_memclr4(v14 + 4760, 60);
  *(_BYTE *)(v14 + 4820) = a6;
  *(_BYTE *)(v14 + 4821) = 0;
  *(_BYTE *)(v14 + 4822) = 0;
  *(_BYTE *)(v14 + 4823) = 0;
  *(_DWORD *)(v14 + 4824) = 3;
  *(_WORD *)(v14 + 4828) = 0;
  v19 = (unsigned int *)(v14 + 4752);
  ItemInstance::ItemInstance(v14 + 4832);
  *(_DWORD *)(v14 + 4904) = 0;
  *(_WORD *)(v14 + 4908) = 0;
  *(_BYTE *)(v14 + 4910) = 1;
  *(_DWORD *)(v14 + 4916) = -1;
  *(_DWORD *)(v14 + 4912) = -1;
  *(_DWORD *)(v14 + 4920) = 0;
  *(_DWORD *)(v14 + 4924) = v12;
  *(_WORD *)(v14 + 4940) = 0;
  *(_DWORD *)(v14 + 4936) = 0;
  *(_DWORD *)(v14 + 4932) = 0;
  *(_DWORD *)(v14 + 4928) = 0;
  *(_DWORD *)(v14 + 4944) = 1065353216;
  *(_DWORD *)(v14 + 4976) = 0;
  *(_DWORD *)(v14 + 4972) = 0;
  *(_DWORD *)(v14 + 4968) = 0;
  *(_DWORD *)(v14 + 4964) = 0;
  *(_DWORD *)(v14 + 4960) = 0;
  *(_DWORD *)(v14 + 4956) = 0;
  *(_DWORD *)(v14 + 4952) = 0;
  *(_DWORD *)(v14 + 4948) = 0;
  *(_DWORD *)(v14 + 4988) = -1;
  *(_DWORD *)(v14 + 4984) = -1;
  *(_BYTE *)(v14 + 4994) = 0;
  *(_DWORD *)(v14 + 4996) = 1;
  v78 = (int *)(v14 + 4964);
  v79 = (int *)(v14 + 4960);
  ItemInstance::ItemInstance(v14 + 5000);
  ItemInstance::ItemInstance(v14 + 5072);
  *(_DWORD *)(v14 + 5144) = 0;
  *(_DWORD *)(v14 + 5152) = v14;
  *(_DWORD *)(v14 + 5200) = 0;
  *(_DWORD *)(v14 + 5184) = 0;
  *(_DWORD *)(v14 + 5180) = 0;
  *(_DWORD *)(v14 + 5176) = 0;
  *(_DWORD *)(v14 + 5172) = 0;
  *(_DWORD *)(v14 + 5168) = 0;
  *(_DWORD *)(v14 + 5164) = 0;
  *(_DWORD *)(v14 + 5160) = 0;
  *(_DWORD *)(v14 + 5156) = 0;
  *(_DWORD *)(v14 + 5204) = -1;
  *(_BYTE *)(v14 + 5214) = 0;
  *(_WORD *)(v14 + 5212) = 0;
  *(_DWORD *)(v14 + 5208) = 0;
  *(_BYTE *)(v14 + 5228) = 0;
  *(_DWORD *)(v14 + 5224) = 0;
  *(_DWORD *)(v14 + 5220) = 0;
  *(_DWORD *)(v14 + 5216) = 0;
  *(_DWORD *)(v14 + 5232) = v11;
  *(_DWORD *)(v14 + 5240) = 4;
  *(_DWORD *)(v14 + 5244) = 1;
  *(_DWORD *)(v14 + 5252) = -1;
  *(_DWORD *)(v14 + 5248) = -1;
  *(_DWORD *)(v14 + 5256) = 0;
  *(_DWORD *)(v14 + 5260) = 0;
  *(_DWORD *)(v14 + 5264) = 0;
  v20 = (char *)operator new(8u);
  *(_DWORD *)(v14 + 5256) = v20;
  *(_DWORD *)(v14 + 5264) = v20 + 8;
  *(_DWORD *)v20 = 0;
  *((_DWORD *)v20 + 1) = 0;
  *(_DWORD *)(v14 + 5260) = v20 + 8;
  SkinAdjustments::SkinAdjustments((SkinAdjustments *)(v14 + 5268));
  *(_DWORD *)(v14 + 172) |= 1u;
  *(_DWORD *)(v14 + 248) = 30;
  Player::registerAttributes((Player *)v14);
  v21 = (int *)(v14 + 176);
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v14 + 176), 27) )
  {
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v14 + 176), 27);
    v22 = *v21;
    v23 = operator new(0xCu);
    v24 = 27;
    v23[4] = 0;
    *((_WORD *)v23 + 3) = 27;
    v23[8] = 1;
    *(_DWORD *)v23 = &off_26F1394;
    v23[9] = 0;
    v25 = *(_DWORD *)(v22 + 108);
    *(_DWORD *)(v22 + 108) = v23;
    if ( v25 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 4))(v25);
    v26 = *(_WORD *)(v14 + 188);
    if ( v26 >= 0x1B )
      LOWORD(v26) = 27;
    *(_WORD *)(v14 + 188) = v26;
    if ( (unsigned int)*(_WORD *)(v14 + 190) > 0x1B )
      v24 = *(_WORD *)(v14 + 190);
    *(_WORD *)(v14 + 190) = v24;
  }
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v14 + 176), 28) )
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v14 + 176), 28);
    v27 = *v21;
    v28 = operator new(0x10u);
    v28[4] = 2;
    v29 = 28;
    *((_WORD *)v28 + 3) = 28;
    v28[8] = 1;
    *(_DWORD *)v28 = &off_26F08C4;
    *((_DWORD *)v28 + 3) = 0;
    v30 = *(_DWORD *)(v27 + 112);
    *(_DWORD *)(v27 + 112) = v28;
    if ( v30 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 4))(v30);
    v31 = *(_WORD *)(v14 + 188);
    if ( v31 >= 0x1C )
      LOWORD(v31) = 28;
    *(_WORD *)(v14 + 188) = v31;
    if ( (unsigned int)*(_WORD *)(v14 + 190) > 0x1C )
      v29 = *(_WORD *)(v14 + 190);
    *(_WORD *)(v14 + 190) = v29;
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v14 + 176), 29) )
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v14 + 176), 29);
    v32 = *v21;
    v33 = operator new(0x18u);
    v33[4] = 6;
    v34 = 29;
    *((_WORD *)v33 + 3) = 29;
    v33[8] = 1;
    *(_DWORD *)v33 = &off_26F9220;
    *((_DWORD *)v33 + 3) = 0;
    *((_DWORD *)v33 + 4) = 0;
    *((_DWORD *)v33 + 5) = 0;
    v35 = *(_DWORD *)(v32 + 116);
    *(_DWORD *)(v32 + 116) = v33;
    if ( v35 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 4))(v35);
    v36 = *(_WORD *)(v14 + 188);
    if ( v36 >= 0x1D )
      LOWORD(v36) = 29;
    *(_WORD *)(v14 + 188) = v36;
    if ( (unsigned int)*(_WORD *)(v14 + 190) > 0x1D )
      v34 = *(_WORD *)(v14 + 190);
    *(_WORD *)(v14 + 190) = v34;
  sub_21E94B4((void **)&v88, (const char *)&unk_257BC67);
  SynchedEntityData::define<std::string>((SynchedEntityData *)(v14 + 176), 40, &v88);
  v37 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v88 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
    }
    else
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  *(_DWORD *)(v14 + 316) = 1070554237;
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v14 + 1432))(v14, *(_DWORD *)(v14 + 5232));
  v38 = (Level *)Entity::getLevel((Entity *)v14);
  _R0 = Level::getSharedSpawnPos(v38);
  __asm
    VLDR            S0, [R0]
    VMOV.F32        S4, #0.5
    VLDR            S2, [R0,#8]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
  _R0 = *((_DWORD *)_R0 + 1) + 1;
    VMOV            S6, R0
    VADD.F32        S0, S0, S4
    VCVT.F32.S32    S6, S6
    VADD.F32        S2, S2, S4
    VSTR            S0, [SP,#0x88+var_44]
    VSTR            S6, [SP,#0x88+var_40]
    VSTR            S2, [SP,#0x88+var_3C]
  v85 = 0;
  v86 = 0;
  Entity::moveTo(v14, (int)&v87);
  LODWORD(v45) = operator new(0x8Cu);
  v46 = v45;
  Inventory::Inventory(v45);
  v47 = operator new(0x78u);
  v89 = v46;
  PlayerInventoryProxy::PlayerInventoryProxy((int)v47, &v89);
  if ( v89 )
    (*(void (**)(void))(*(_DWORD *)v89 + 4))();
  v48 = *v19;
  *v19 = (unsigned int)v47;
  if ( v48 )
    (*(void (**)(void))(*(_DWORD *)v48 + 8))();
  v82 = 123;
  std::__shared_ptr<HudContainerManagerModel,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<HudContainerManagerModel>,ContainerID,Player &>(
    (int)&v83,
    (int)&v90,
    &v82,
    v14);
  v49 = *(_QWORD *)&v83;
  *(_DWORD *)&v83 = 0;
  v84 = 0;
  *(_DWORD *)(v14 + 4952) = v49;
  v50 = *(_DWORD *)(v14 + 4956);
  *(_DWORD *)(v14 + 4956) = HIDWORD(v49);
  if ( v50 )
    v51 = (unsigned int *)(v50 + 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 == 1 )
      v53 = (unsigned int *)(v50 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 8))(v50);
      if ( &pthread_create )
      {
        __dmb();
        do
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
      }
      else
        v54 = (*v53)--;
      if ( v54 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 12))(v50);
  v55 = v84;
  if ( v84 )
    v56 = (unsigned int *)(v84 + 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 == 1 )
      v58 = (unsigned int *)(v55 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v55 + 8))(v55);
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
        v59 = (*v58)--;
      if ( v59 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v55 + 12))(v55);
  v60 = *v19;
  v80 = *(_DWORD *)(v14 + 4952);
  v61 = *(_DWORD *)(v14 + 4956);
  v81 = v61;
  if ( v61 )
    v62 = (unsigned int *)(v61 + 8);
        v63 = __ldrex(v62);
      while ( __strex(v63 + 1, v62) );
      ++*v62;
  PlayerInventoryProxy::init(v60, (int)&v80);
  v64 = v81;
  if ( v81 )
    v65 = (unsigned int *)(v81 + 8);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 == 1 )
      (*(void (**)(void))(*(_DWORD *)v64 + 12))();
  v67 = (Level *)Entity::getLevel((Entity *)v14);
  v68 = Level::getFixedInventory(v67);
  Container::addSizeChangeListener(v68, *v19);
  LODWORD(v69) = operator new(0x90u);
  v70 = v69;
  EnderChestContainer::EnderChestContainer(v69);
  v71 = *v79;
  *v79 = v70;
  if ( v71 )
    (*(void (**)(void))(*(_DWORD *)v71 + 4))();
  LODWORD(v72) = operator new(0x8Cu);
  v73 = LODWORD(v72);
  FillingContainer::FillingContainer(v72, 9u, 0);
  v74 = *v78;
  *v78 = v73;
  if ( v74 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v74 + 4))(v74);
  Player::_registerElytraLoopSound((Player *)v14);
  return v14;
}


int __fastcall Player::setBedOffset(int result, int a2)
{
  unsigned __int8 v2; // cf@0
  char v3; // zf@0
  _DWORD *v4; // r2@2
  signed int v5; // r1@5

  *(_DWORD *)(result + 4648) = 0;
  *(_DWORD *)(result + 4656) = 0;
  if ( !(!v3 & v2) )
  {
    v4 = (_DWORD *)(result + 4656);
    result += 4648;
    switch ( a2 )
    {
      case 0:
        result = -1075419546;
        *v4 = -1075419546;
        break;
      case 2:
        result = 1072064102;
        *v4 = 1072064102;
      case 3:
        v5 = -1075419546;
        goto LABEL_7;
      case 1:
        v5 = 1072064102;
LABEL_7:
        *(_DWORD *)result = v5;
    }
  }
  return result;
}


CompoundTag *__fastcall Player::addAdditionalSaveData(Player *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  Player *v3; // r5@1
  int v4; // r0@1
  void *v5; // r0@5
  int v6; // r0@6
  void *v7; // r0@10
  void *v8; // r0@11
  void *v9; // r0@12
  char v10; // r0@13
  void *v11; // r0@13
  void *v12; // r0@14
  void *v13; // r0@15
  void *v14; // r0@16
  void *v15; // r0@17
  void *v16; // r0@18
  void *v17; // r0@19
  void *v18; // r0@20
  void *v19; // r0@21
  void *v20; // r0@22
  char *v21; // r0@24
  void *v22; // r0@24
  void *v23; // r0@25
  AttributeInstance *v24; // r0@26
  void *v31; // r0@26
  AttributeInstance *v32; // r0@27
  int v33; // r0@27
  void *v34; // r0@27
  void *v35; // r0@28
  int v36; // r0@29
  void *v37; // r0@33
  int v38; // r0@34
  void *v39; // r0@38
  void *v40; // r0@39
  void *v41; // r0@41
  unsigned int *v43; // r2@43
  signed int v44; // r1@45
  unsigned int *v45; // r2@47
  signed int v46; // r1@49
  unsigned int *v47; // r2@51
  signed int v48; // r1@53
  unsigned int *v49; // r2@55
  signed int v50; // r1@57
  unsigned int *v51; // r2@59
  signed int v52; // r1@61
  unsigned int *v53; // r2@63
  signed int v54; // r1@65
  unsigned int *v55; // r2@67
  signed int v56; // r1@69
  unsigned int *v57; // r2@71
  signed int v58; // r1@73
  unsigned int *v59; // r2@75
  signed int v60; // r1@77
  unsigned int *v61; // r2@79
  signed int v62; // r1@81
  unsigned int *v63; // r2@83
  signed int v64; // r1@85
  unsigned int *v65; // r2@87
  signed int v66; // r1@89
  unsigned int *v67; // r2@91
  signed int v68; // r1@93
  unsigned int *v69; // r2@95
  signed int v70; // r1@97
  unsigned int *v71; // r2@99
  signed int v72; // r1@101
  unsigned int *v73; // r2@103
  signed int v74; // r1@105
  unsigned int *v75; // r2@107
  signed int v76; // r1@109
  unsigned int *v77; // r2@111
  signed int v78; // r1@113
  unsigned int *v79; // r2@115
  signed int v80; // r1@117
  unsigned int *v81; // r2@119
  signed int v82; // r1@121
  unsigned int *v83; // r2@123
  signed int v84; // r1@125
  unsigned int *v85; // r2@127
  signed int v86; // r1@129
  unsigned int *v87; // r2@187
  signed int v88; // r1@189
  int v89; // [sp+4h] [bp-F4h]@41
  int v90; // [sp+Ch] [bp-ECh]@39
  int v91; // [sp+10h] [bp-E8h]@34
  int v92; // [sp+14h] [bp-E4h]@34
  int v93; // [sp+1Ch] [bp-DCh]@34
  int v94; // [sp+20h] [bp-D8h]@29
  int v95; // [sp+24h] [bp-D4h]@29
  int v96; // [sp+2Ch] [bp-CCh]@29
  int v97; // [sp+34h] [bp-C4h]@28
  int v98; // [sp+3Ch] [bp-BCh]@27
  int v99; // [sp+44h] [bp-B4h]@26
  int v100; // [sp+4Ch] [bp-ACh]@25
  int v101; // [sp+54h] [bp-A4h]@24
  int v102; // [sp+5Ch] [bp-9Ch]@22
  int v103; // [sp+64h] [bp-94h]@21
  int v104; // [sp+6Ch] [bp-8Ch]@20
  int v105; // [sp+74h] [bp-84h]@19
  int v106; // [sp+7Ch] [bp-7Ch]@18
  int v107; // [sp+84h] [bp-74h]@17
  int v108; // [sp+8Ch] [bp-6Ch]@16
  int v109; // [sp+94h] [bp-64h]@15
  int v110; // [sp+9Ch] [bp-5Ch]@14
  int v111; // [sp+A4h] [bp-54h]@13
  int v112; // [sp+ACh] [bp-4Ch]@12
  int v113; // [sp+B4h] [bp-44h]@11
  char v114; // [sp+B8h] [bp-40h]@11
  int v115; // [sp+BCh] [bp-3Ch]@11
  int v116; // [sp+C0h] [bp-38h]@6
  int v117; // [sp+C4h] [bp-34h]@6
  int v118; // [sp+CCh] [bp-2Ch]@6
  int v119; // [sp+D0h] [bp-28h]@1
  int v120; // [sp+D4h] [bp-24h]@1
  int v121; // [sp+DCh] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  Mob::addAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v121, "Offhand");
  Mob::saveOffhand((Mob *)&v119, (int)v3);
  v4 = v119;
  v119 = 0;
  v120 = v4;
  CompoundTag::put((int)v2, (const void **)&v121, &v120);
  if ( v120 )
    (*(void (**)(void))(*(_DWORD *)v120 + 4))();
  v120 = 0;
  if ( v119 )
    (*(void (**)(void))(*(_DWORD *)v119 + 4))();
  v5 = (void *)(v121 - 12);
  if ( (int *)(v121 - 12) != &dword_28898C0 )
  {
    v43 = (unsigned int *)(v121 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
    }
    else
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v118, "Inventory");
  PlayerInventoryProxy::save((PlayerInventoryProxy *)&v116, *((_DWORD *)v3 + 1188));
  v6 = v116;
  v116 = 0;
  v117 = v6;
  CompoundTag::put((int)v2, (const void **)&v118, &v117);
  if ( v117 )
    (*(void (**)(void))(*(_DWORD *)v117 + 4))();
  v117 = 0;
  if ( v116 )
    (*(void (**)(void))(*(_DWORD *)v116 + 4))();
  v7 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v118 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v114, *((_DWORD *)v3 + 1188));
  sub_21E94B4((void **)&v113, "SelectedInventorySlot");
  CompoundTag::putInt((int)v2, (const void **)&v113, v115);
  v8 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v113 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v112, "SelectedContainerId");
  CompoundTag::putInt((int)v2, (const void **)&v112, v114);
  v9 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v112 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v111, "Sleeping");
  v10 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v3 + 784))(v3);
  CompoundTag::putBoolean((int)v2, (const void **)&v111, v10);
  v11 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v111 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v110, "SleepTimer");
  CompoundTag::putShort((int)v2, (const void **)&v110, *((_WORD *)v3 + 2454));
  v12 = (void *)(v110 - 12);
  if ( (int *)(v110 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v110 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v109, "BedPositionX");
  CompoundTag::putInt((int)v2, (const void **)&v109, *((_DWORD *)v3 + 1159));
  v13 = (void *)(v109 - 12);
  if ( (int *)(v109 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v109 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v108, "BedPositionY");
  CompoundTag::putInt((int)v2, (const void **)&v108, *((_DWORD *)v3 + 1160));
  v14 = (void *)(v108 - 12);
  if ( (int *)(v108 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v108 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v107, "BedPositionZ");
  CompoundTag::putInt((int)v2, (const void **)&v107, *((_DWORD *)v3 + 1161));
  v15 = (void *)(v107 - 12);
  if ( (int *)(v107 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v107 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v106, "SpawnX");
  CompoundTag::putInt((int)v2, (const void **)&v106, *((_DWORD *)v3 + 1300));
  v16 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v106 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v105, "SpawnY");
  CompoundTag::putInt((int)v2, (const void **)&v105, *((_DWORD *)v3 + 1301));
  v17 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v105 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v104, "SpawnZ");
  CompoundTag::putInt((int)v2, (const void **)&v104, *((_DWORD *)v3 + 1302));
  v18 = (void *)(v104 - 12);
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v104 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v103, "SpawnForced");
  CompoundTag::putBoolean((int)v2, (const void **)&v103, *((_BYTE *)v3 + 5212));
  v19 = (void *)(v103 - 12);
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v103 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v102, "EnchantmentSeed");
  CompoundTag::putInt((int)v2, (const void **)&v102, *((_DWORD *)v3 + 1309));
  v20 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v102 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  if ( Entity::isRiding(v3) == 1 )
    sub_21E94B4((void **)&v101, "RideID");
    v21 = Entity::getUniqueID(*((Entity **)v3 + 128));
    CompoundTag::putInt64((int)v2, (const void **)&v101, *(_QWORD *)v21, *(_QWORD *)v21 >> 32);
    v22 = (void *)(v101 - 12);
    if ( (int *)(v101 - 12) != &dword_28898C0 )
      v87 = (unsigned int *)(v101 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v88 = __ldrex(v87);
        while ( __strex(v88 - 1, v87) );
      }
      else
        v88 = (*v87)--;
      if ( v88 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v100, "PlayerGameMode");
  CompoundTag::putInt((int)v2, (const void **)&v100, *((_DWORD *)v3 + 1308));
  v23 = (void *)(v100 - 12);
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v100 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v99, "PlayerLevel");
  v24 = (AttributeInstance *)(*(int (__fastcall **)(Player *, void *))(*(_DWORD *)v3 + 1004))(v3, &Player::LEVEL);
  _R0 = AttributeInstance::getCurrentValue(v24);
  __asm
    VMOV            S0, R0
    VCVTR.S32.F32   S0, S0
    VMOV            R2, S0
  CompoundTag::putInt((int)v2, (const void **)&v99, _R2);
  v31 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v99 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  sub_21E94B4((void **)&v98, "PlayerLevelProgress");
  v32 = (AttributeInstance *)(*(int (__fastcall **)(Player *, void *))(*(_DWORD *)v3 + 1004))(v3, &Player::EXPERIENCE);
  v33 = AttributeInstance::getCurrentValue(v32);
  CompoundTag::putFloat((int)v2, (const void **)&v98, v33);
  v34 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v98 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  sub_21E94B4((void **)&v97, "DimensionId");
  CompoundTag::putInt((int)v2, (const void **)&v97, *((_DWORD *)v3 + 1206));
  v35 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v97 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  sub_21E94B4((void **)&v96, "EnderChestInventory");
  FillingContainer::save((FillingContainer *)&v94, *((_DWORD *)v3 + 1240));
  v36 = v94;
  v94 = 0;
  v95 = v36;
  CompoundTag::put((int)v2, (const void **)&v96, &v95);
  if ( v95 )
    (*(void (**)(void))(*(_DWORD *)v95 + 4))();
  v95 = 0;
  if ( v94 )
    (*(void (**)(void))(*(_DWORD *)v94 + 4))();
  v37 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v96 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  sub_21E94B4((void **)&v93, "CursorSelectedItem");
  ItemInstance::save((ItemInstance *)&v91, (Player *)((char *)v3 + 5000));
  v38 = v91;
  v91 = 0;
  v92 = v38;
  CompoundTag::put((int)v2, (const void **)&v93, &v92);
  if ( v92 )
    (*(void (**)(void))(*(_DWORD *)v92 + 4))();
  v92 = 0;
  if ( v91 )
    (*(void (**)(void))(*(_DWORD *)v91 + 4))();
  v39 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v93 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  sub_21E94B4((void **)&v90, "MapIndex");
  CompoundTag::putInt((int)v2, (const void **)&v90, *((_DWORD *)v3 + 1311));
  v40 = (void *)(v90 - 12);
  if ( (int *)(v90 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v90 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  if ( (*((_DWORD *)v3 + 1247) & *((_DWORD *)v3 + 1246)) != -1 )
    sub_21E94B4((void **)&v89, "AgentID");
    CompoundTag::putInt64((int)v2, (const void **)&v89, *((_QWORD *)v3 + 623), *((_QWORD *)v3 + 623) >> 32);
    v41 = (void *)(v89 - 12);
    if ( (int *)(v89 - 12) != &dword_28898C0 )
      v85 = (unsigned int *)(v89 - 4);
          v86 = __ldrex(v85);
        while ( __strex(v86 - 1, v85) );
        v86 = (*v85)--;
      if ( v86 <= 0 )
        j_j_j_j__ZdlPv_9(v41);
  return Abilities::addSaveData((Player *)((char *)v3 + 4320), v2);
}


int __fastcall Player::getXpNeededForNextLevel(Player *this)
{
  int result; // r0@2
  char *v2; // r4@3
  char *v3; // r5@3
  AttributeInstance *v4; // r0@3
  int v13; // r1@3

  if ( *((_BYTE *)this + 5192) )
  {
    v2 = (char *)this + 5196;
    v3 = (char *)this + 5192;
    v4 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)this + 1004))();
    _R0 = AttributeInstance::getCurrentValue(v4);
    __asm { VMOV            S0, R0 }
    _R1 = -2004318071;
    __asm
    {
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
      SMMLA.W         R1, R1, R0, R0
    }
    v13 = ((signed int)_R1 >> 3) + (_R1 >> 31);
    if ( v13 == 1 )
      result = 5 * _R0 - 38;
    else if ( v13 )
      result = 9 * _R0 - 158;
    else
      result = 2 * _R0 + 7;
    *v3 = 0;
    *(_DWORD *)v2 = result;
  }
  else
    result = *((_DWORD *)this + 1299);
  return result;
}


int __fastcall Player::getMapDecorationRotation(Player *this)
{
  Entity *v1; // r4@1
  int v2; // r0@2
  int result; // r0@2

  v1 = this;
  if ( Entity::isRiding(this) == 1 )
  {
    v2 = Entity::getRide(v1);
    result = (*(int (**)(void))(*(_DWORD *)v2 + 640))();
  }
  else
    result = j_j_j__ZNK3Mob11getYHeadRotEv(v1);
  return result;
}


int __fastcall Player::getPlayerLevel(Player *this)
{
  AttributeInstance *v1; // r0@1
  int result; // r0@1

  v1 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)this + 1004))();
  _R0 = AttributeInstance::getCurrentValue(v1);
  __asm
  {
    VMOV            S0, R0
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  return result;
}


unsigned int __fastcall Player::canStartSleepInBed(Player *this)
{
  int v1; // r0@1
  unsigned int result; // r0@2

  v1 = SynchedEntityData::_find((Player *)((char *)this + 176), 27);
  if ( v1 )
    result = (*(_BYTE *)(v1 + 9) & 2u) >> 1;
  else
    result = 0;
  return result;
}


int __fastcall Player::canUseAbility(int a1, int **a2)
{
  int v2; // r4@1
  Ability *v3; // r0@1
  int result; // r0@2
  Ability *v5; // r0@3

  v2 = a1 + 4320;
  v3 = (Ability *)Abilities::getAbility(a1 + 4320, a2);
  if ( Ability::getBool(v3) )
  {
    result = 1;
  }
  else
    v5 = (Ability *)Abilities::getAbility(v2, (int **)&Abilities::WORLDBUILDER);
    result = Ability::getBool(v5);
  return result;
}


int __fastcall Player::getSpeed(Player *this)
{
  AttributeInstance *v1; // r0@1

  v1 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)this + 1004))();
  return j_j_j__ZNK17AttributeInstance15getCurrentValueEv_0(v1);
}


char *__fastcall Player::getCreativeItemList(Player *this)
{
  return (char *)this + 4760;
}


unsigned int __fastcall Player::getNewEnchantmentSeed(Player *this)
{
  Player *v1; // r4@1
  unsigned int result; // r0@1

  v1 = this;
  result = Random::_genRandInt32((Player *)((char *)this + 552)) >> 1;
  *((_DWORD *)v1 + 1309) = result;
  return result;
}


int __fastcall Player::setEnchantmentSeed(int result, int a2)
{
  *(_DWORD *)(result + 5236) = a2;
  return result;
}


signed int __fastcall Player::teleportTo(Player *this, const Vec3 *_R1, int a3, int a4)
{
  int v5; // r5@1
  int v6; // r6@1
  Player *v12; // r1@1

  _R4 = this;
  v5 = a4;
  v6 = a3;
  __asm
  {
    VLDR            S16, [R1]
    VLDR            S18, [R1,#4]
    VLDR            S20, [R1,#8]
    VLDR            S22, [R4,#0x48]
    VLDR            S24, [R4,#0x4C]
    VLDR            S26, [R4,#0x50]
  }
  Mob::teleportTo(this, _R1, 0, 1);
    VSUB.F32        S0, S22, S16
    VSUB.F32        S2, S24, S18
    VSUB.F32        S4, S26, S20
  *((_BYTE *)_R4 + 4994) = 2;
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VSQRT.F32       S0, S0
    VMOV            R1, S0
  MinecraftEventing::fireEventPlayerTeleported((int)_R4, _R1, v6, v5);
  return j_j_j__ZN17MinecraftEventing24fireEventPlayerTransformER6Player(_R4, v12);
}


_BOOL4 __fastcall Player::hasOpenContainer(Player *this)
{
  return *((_DWORD *)this + 1186) != 0;
}


void __fastcall Player::lavaHurt(Player *this)
{
  Player::lavaHurt(this);
}


signed int __fastcall Player::isBouncing(Player *this)
{
  int v1; // r2@1
  signed int result; // r0@1

  v1 = *((_WORD *)this + 2470);
  result = 0;
  if ( v1 != (unsigned __int16)FullBlock::AIR )
    result = 1;
  return result;
}


int __fastcall Player::stopUsingItem(Player *this)
{
  Player *v1; // r4@1
  int v2; // r0@1
  bool v3; // zf@1
  int v4; // r0@5
  bool v5; // zf@5
  int v6; // r6@10
  int v7; // r0@12
  Level *v8; // r0@13
  int result; // r0@19
  int v10; // [sp+0h] [bp-68h]@1
  int v11; // [sp+8h] [bp-60h]@19
  unsigned __int8 v12; // [sp+Eh] [bp-5Ah]@5
  char v13; // [sp+Fh] [bp-59h]@1
  void *v14; // [sp+24h] [bp-44h]@17
  void *ptr; // [sp+34h] [bp-34h]@15
  __int64 v16; // [sp+48h] [bp-20h]@9
  __int64 v17; // [sp+50h] [bp-18h]@9

  v1 = this;
  v2 = (*(int (**)(void))(*(_DWORD *)this + 908))();
  ItemInstance::ItemInstance((ItemInstance *)&v10, v2);
  v3 = v13 == 0;
  if ( v13 )
    v3 = v10 == 0;
  if ( !v3 && !ItemInstance::isNull((ItemInstance *)&v10) )
  {
    v4 = v12;
    v5 = v12 == 0;
    if ( v12 )
    {
      v4 = *((_DWORD *)v1 + 1208);
      v5 = v4 == 0;
    }
    if ( !v5 && v10 == v4 )
      MapItem::getMapId((MapItem *)&v17, (Player *)((char *)v1 + 4832));
      MapItem::getMapId((MapItem *)&v16, (const ItemInstance *)&v10);
      if ( !(v17 ^ v16) )
      {
        v6 = ItemInstance::getAuxValue((Player *)((char *)v1 + 4832));
        if ( v6 != ItemInstance::getAuxValue((ItemInstance *)&v10)
          && !(*(int (**)(void))(**((_DWORD **)v1 + 1208) + 152))() )
        {
          v7 = ItemInstance::getAuxValue((Player *)((char *)v1 + 4832));
          ItemInstance::setAuxValue((ItemInstance *)&v10, v7);
          PlayerInventoryProxy::setSelectedItem(*((PlayerInventoryProxy **)v1 + 1188), (const ItemInstance *)&v10);
        }
      }
  }
  ItemInstance::setNull((Player *)((char *)v1 + 4832));
  *((_DWORD *)v1 + 1226) = 0;
  v8 = (Level *)Entity::getLevel(v1);
  if ( !Level::isClientSide(v8) )
    Entity::setStatusFlag((int)v1, 4, 0);
  if ( ptr )
    operator delete(ptr);
  if ( v14 )
    operator delete(v14);
  result = v11;
  if ( v11 )
    result = (*(int (**)(void))(*(_DWORD *)v11 + 4))();
  return result;
}


unsigned int __fastcall Player::isSurvival(Player *this)
{
  unsigned int v1; // r0@1
  unsigned int result; // r0@2

  v1 = *((_DWORD *)this + 1308);
  if ( v1 <= 3 )
    result = (0xDu >> (v1 & 0xF)) & 1;
  else
    result = 0;
  return result;
}


int __fastcall Player::onMobStatusChanged(int result, int a2, __int64 a3)
{
  HIDWORD(a3) ^= *(_DWORD *)(result + 4916);
  if ( a3 == *(_DWORD *)(result + 4912) )
    *(_BYTE *)(result + 4910) = 1;
  return result;
}


void __fastcall Player::getInteractText(Player *this, int a2)
{
  Player::getInteractText(this, a2);
}


int __fastcall Player::isInCreativeMode(Player *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 1308);
  if ( result != 1 )
    result = 0;
  return result;
}


signed int __fastcall Player::getAlwaysShowNameTag(Player *this)
{
  return 1;
}


int __fastcall Player::_fireWillChangeDimension(Player *this)
{
  Player *v1; // r4@1
  int *v2; // r5@1
  int result; // r0@1
  int *i; // r6@1
  int v5; // t1@2

  v1 = this;
  v2 = (int *)*((_DWORD *)this + 1295);
  result = 5176;
  for ( i = (int *)*((_DWORD *)v1 + 1294); v2 != i; result = (*(int (**)(void))(*(_DWORD *)v5 + 8))() )
  {
    v5 = *i;
    ++i;
  }
  return result;
}


signed int __fastcall Player::startSleepInBed(Player *this, const BlockPos *a2)
{
  BlockSource **v4; // r7@1
  Level *v5; // r0@2
  int v11; // r0@12
  int v12; // r0@13
  Level *v13; // r0@17
  BlockSource *v14; // r6@18
  unsigned __int64 *v17; // r0@18
  unsigned int v18; // r6@26
  unsigned __int64 *v19; // r0@26
  unsigned int v20; // r0@26
  const BlockPos *v24; // r6@28
  const BlockPos *v26; // r7@28
  Player *v27; // r1@30
  signed int v28; // r0@32
  Level *v31; // r0@37
  int v32; // r0@38
  int v33; // r0@39
  unsigned int v34; // r1@39
  Player *v35; // r2@40
  Player *v36; // r7@40
  int v37; // r3@40
  int v38; // r7@41
  unsigned int v39; // r1@45
  unsigned int v40; // r0@45
  int v41; // r0@50
  char v42; // r1@50
  int v43; // r0@51
  unsigned int v44; // r0@51
  unsigned int v45; // r1@51
  int v46; // [sp+0h] [bp-58h]@0
  int v47; // [sp+4h] [bp-54h]@0
  int v48; // [sp+8h] [bp-50h]@0
  float v49; // [sp+Ch] [bp-4Ch]@28
  float v50; // [sp+18h] [bp-40h]@36
  char v51; // [sp+24h] [bp-34h]@18

  _R4 = this;
  _R5 = a2;
  v4 = (BlockSource **)((char *)this + 4632);
  if ( *((_DWORD *)this + 1158) )
  {
    v5 = (Level *)Entity::getLevel(this);
    if ( !Level::isClientSide(v5) )
    {
      if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)_R4 + 784))(_R4)
        || (*(int (__fastcall **)(Player *))(*(_DWORD *)_R4 + 316))(_R4) != 1 )
      {
        return 4;
      }
      __asm
        VLDR            S0, [R5]
        VCVT.F32.S32    S0, S0
        VLDR            S2, [R4,#0x48]
        VSUB.F32        S2, S2, S0
        VMOV.F32        S0, #3.0
        VABS.F32        S2, S2
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        return 3;
        VLDR            S2, [R5,#4]
        VCVT.F32.S32    S2, S2
        VLDR            S4, [R4,#0x4C]
        VSUB.F32        S2, S4, S2
        VMOV.F32        S4, #4.0
        VCMPE.F32       S2, S4
        VLDR            S2, [R5,#8]
        VLDR            S4, [R4,#0x50]
      v11 = Entity::getDimension(_R4);
      if ( (*(int (**)(void))(*(_DWORD *)v11 + 132))() != 1 )
        return 1;
      v12 = Entity::getDimension(_R4);
      if ( (*(int (**)(void))(*(_DWORD *)v12 + 196))() )
        return 2;
      if ( !(*(int (__fastcall **)(Player *))(*(_DWORD *)_R4 + 652))(_R4) )
        v13 = (Level *)Entity::getLevel(_R4);
        if ( Level::getDifficulty(v13) )
        {
          __asm
          {
            VLDR            S0, [R5]
            VMOV.F32        S6, #-8.0
            VLDR            S2, [R5,#4]
            VMOV.F32        S8, #-5.0
            VLDR            S4, [R5,#8]
            VCVT.F32.S32    S0, S0
            VCVT.F32.S32    S2, S2
            VCVT.F32.S32    S4, S4
          }
          v14 = *v4;
            VADD.F32        S10, S0, S6
            VADD.F32        S8, S2, S8
            VADD.F32        S6, S4, S6
            VMOV            R1, S10
            VMOV            R2, S8
            VMOV            R3, S6
            VMOV.F32        S6, #8.0
            VMOV.F32        S8, #5.0
            VADD.F32        S0, S0, S6
            VADD.F32        S4, S4, S6
            VADD.F32        S2, S2, S8
            VSTR            S0, [SP,#0x58+var_58]
            VSTR            S2, [SP,#0x58+var_54]
            VSTR            S4, [SP,#0x58+var_50]
          AABB::AABB(COERCE_FLOAT(&v51), _R1, _R2, v46, v47, v48);
          v17 = (unsigned __int64 *)BlockSource::fetchEntities((int)v14, 2816, (int)&v51, 0);
          if ( (unsigned int)*v17 != *v17 >> 32 )
            return 5;
        }
    }
  }
  if ( Entity::isRiding(_R4) == 1 )
    (*(void (__fastcall **)(Player *, signed int, _DWORD))(*(_DWORD *)_R4 + 596))(_R4, 1, 0);
  if ( Entity::isRide(_R4) == 1 )
    Entity::removeAllRiders(_R4, 0, 0);
  (*(void (__fastcall **)(Player *, signed int, signed int))(*(_DWORD *)_R4 + 680))(_R4, 1045220557, 1045220557);
  *((_DWORD *)_R4 + 79) = 1045220557;
  if ( *v4 && BlockSource::hasBlock(*v4, _R5) == 1 )
    v18 = BlockSource::getData(*v4, _R5);
    v19 = (unsigned __int64 *)Block::getBlockState(Block::mBed, 12);
    v20 = (0xFu >> (4 - (*v19 >> 32))) & (v18 >> (*v19 + 1 - (*v19 >> 32)));
    if ( v20 > 3 )
        VMOV.F32        S2, #0.5
        VMOV.F32        S0, S2
    else
      _R1 = &aFff[4 * v20];
      __asm { VLDR            S0, [R1] }
      _R1 = (char *)&unk_26109FC + 4 * v20;
      __asm { VLDR            S2, [R1] }
    *((_DWORD *)_R4 + 1162) = 0;
    *((_DWORD *)_R4 + 1164) = 0;
    v27 = (Player *)((char *)_R4 + 4656);
    switch ( v20 )
      case 0u:
        *(_DWORD *)v27 = -1075419546;
        break;
      case 1u:
        v28 = 1072064102;
        goto LABEL_35;
      case 2u:
        *(_DWORD *)v27 = 1072064102;
      case 3u:
        v28 = -1075419546;
LABEL_35:
        *((_DWORD *)_R4 + 1162) = v28;
      default:
    __asm { VLDR            S4, [R5]; jumptable 0176BAEE default case }
    v24 = (const BlockPos *)((char *)_R5 + 4);
    _R0 = *((_DWORD *)_R5 + 1);
    __asm { VCVT.F32.S32    S4, S4 }
    v26 = (const BlockPos *)((char *)_R5 + 8);
    _R1 = *((_DWORD *)_R5 + 2);
    __asm
      VMOV.F32        S6, #0.90625
      VMOV            S8, R0
      VMOV            S10, R1
      VCVT.F32.S32    S8, S8
      VCVT.F32.S32    S10, S10
      VADD.F32        S2, S4, S2
      VADD.F32        S4, S8, S6
      VADD.F32        S0, S10, S0
      VSTR            S2, [SP,#0x58+var_40]
      VSTR            S4, [SP,#0x58+var_3C]
      VSTR            S0, [SP,#0x58+var_38]
    (*(void (__fastcall **)(Player *, float *))(*(_DWORD *)_R4 + 48))(_R4, &v50);
    (*(void (__fastcall **)(Player *, _DWORD))(*(_DWORD *)_R4 + 796))(_R4, 0);
    MovementInterpolator::stop((Player *)((char *)_R4 + 4040));
  else
    __asm { VLDR            S0, [R5] }
    __asm { VCVT.F32.S32    S0, S0 }
      VMOV.F32        S2, #0.5
      VLDR            S8, =0.0625
      VMOV            S4, R0
      VMOV            S6, R1
      VCVT.F32.S32    S4, S4
      VCVT.F32.S32    S6, S6
      VADD.F32        S0, S0, S2
      VADD.F32        S4, S4, S8
      VADD.F32        S2, S6, S2
      VSTR            S0, [SP,#0x58+var_4C]
      VSTR            S4, [SP,#0x58+var_48]
      VSTR            S2, [SP,#0x58+var_44]
    (*(void (__fastcall **)(Player *, float *))(*(_DWORD *)_R4 + 48))(_R4, &v49);
  *((_BYTE *)_R4 + 5213) = 1;
  *((_WORD *)_R4 + 2454) = 0;
  *((_DWORD *)_R4 + 1159) = *(_DWORD *)_R5;
  *((_DWORD *)_R4 + 1160) = *(_DWORD *)v24;
  *((_DWORD *)_R4 + 1161) = *(_DWORD *)v26;
  *((_DWORD *)_R4 + 27) = 0;
  *((_DWORD *)_R4 + 28) = 0;
  *((_DWORD *)_R4 + 29) = 0;
  v31 = (Level *)Entity::getLevel(_R4);
  if ( !Level::isClientSide(v31) )
    v32 = Entity::getLevel(_R4);
    (*(void (**)(void))(*(_DWORD *)v32 + 80))();
  v33 = SynchedEntityData::_get((Player *)((char *)_R4 + 176), 29);
  v34 = *(_DWORD *)(v33 + 4);
  if ( (unsigned __int8)v34 == 6 )
    v35 = (Player *)((char *)_R4 + 4644);
    v36 = (Player *)((char *)_R4 + 4640);
    v37 = *((_DWORD *)_R4 + 1159);
    if ( *(_DWORD *)(v33 + 12) != v37 )
      v38 = *(_DWORD *)v36;
LABEL_45:
      *(_DWORD *)(v33 + 12) = v37;
      *(_DWORD *)(v33 + 16) = v38;
      v39 = v34 >> 16;
      *(_DWORD *)(v33 + 20) = *(_DWORD *)v35;
      *(_BYTE *)(v33 + 8) = 1;
      v40 = *((_WORD *)_R4 + 94);
      if ( v40 >= v39 )
        LOWORD(v40) = v39;
      *((_WORD *)_R4 + 94) = v40;
      if ( *((_WORD *)_R4 + 95) > v39 )
        LOWORD(v39) = *((_WORD *)_R4 + 95);
      *((_WORD *)_R4 + 95) = v39;
      goto LABEL_50;
    v38 = *(_DWORD *)v36;
    if ( *(_DWORD *)(v33 + 16) != v38 )
      goto LABEL_45;
    v38 = *(_DWORD *)(v33 + 16);
    if ( *(_DWORD *)(v33 + 20) != *(_DWORD *)v35 )
LABEL_50:
  v41 = SynchedEntityData::_get((Player *)((char *)_R4 + 176), 27);
  v42 = *(_BYTE *)(v41 + 9);
  *(_BYTE *)(v41 + 9) = v42 | 2;
  if ( !(v42 & 2) )
    v43 = SynchedEntityData::_get((Player *)((char *)_R4 + 176), 27);
    *(_BYTE *)(v43 + 8) = 1;
    v44 = *(_WORD *)(v43 + 6);
    v45 = *((_WORD *)_R4 + 94);
    if ( v45 >= v44 )
      LOWORD(v45) = v44;
    *((_WORD *)_R4 + 94) = v45;
    if ( *((_WORD *)_R4 + 95) > v44 )
      LOWORD(v44) = *((_WORD *)_R4 + 95);
    *((_WORD *)_R4 + 95) = v44;
  return 0;
}


void __fastcall Player::readAdditionalSaveData(Player *this, const CompoundTag *a2)
{
  Player::readAdditionalSaveData(this, a2);
}


int __fastcall Player::canDestroy(Player *this, const Block *a2)
{
  const Block *v2; // r4@1
  Player *v3; // r5@1
  Material *v4; // r0@1
  int result; // r0@2
  ItemInstance *v6; // r0@3

  v2 = a2;
  v3 = this;
  v4 = (Material *)Block::getMaterial(a2);
  if ( Material::isAlwaysDestroyable(v4) )
  {
    result = 1;
  }
  else
    v6 = (ItemInstance *)PlayerInventoryProxy::getSelectedItem(*((PlayerInventoryProxy **)v3 + 1188));
    result = ItemInstance::canDestroySpecial(v6, v2);
  return result;
}


signed int __fastcall Player::canExistWhenDisallowMob(Player *this)
{
  return 1;
}


char *__fastcall Player::getAllEquipment(Player *this, int a2)
{
  Player *v2; // r9@1
  int v3; // r6@1
  char *v4; // r11@1
  int (__fastcall *v5)(int); // r1@1
  int v6; // r0@1
  int v7; // r4@1
  int v8; // r0@1
  bool v9; // zf@1
  int v10; // r7@7
  _BYTE *v11; // r8@10
  signed int v12; // r0@10
  unsigned int v13; // r1@10
  unsigned int v14; // r0@12
  unsigned int v15; // r5@12
  char *v16; // r4@18
  int v17; // r8@25
  int v18; // r5@25
  int v19; // r7@26
  char *result; // r0@26
  _BYTE *v21; // r6@29
  char *v22; // r4@29
  signed int v23; // r0@29
  unsigned int v24; // r1@29
  unsigned int v25; // r0@31
  unsigned int v26; // r10@31

  v2 = this;
  v3 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v4 = (char *)operator new(0x30u);
  v5 = *(int (__fastcall **)(int))(*(_DWORD *)v3 + 908);
  *(_DWORD *)v2 = v4;
  *((_DWORD *)v2 + 1) = v4;
  *((_DWORD *)v2 + 2) = v4 + 48;
  v6 = v5(v3);
  v7 = v6;
  v8 = *(_BYTE *)(v6 + 15);
  v9 = v8 == 0;
  if ( v8 )
    v9 = *(_DWORD *)v7 == 0;
  if ( !v9 && !ItemInstance::isNull((ItemInstance *)v7) && *(_BYTE *)(v7 + 14) )
  {
    *(_DWORD *)v4 = v7;
    v4 = (char *)(*((_DWORD *)v2 + 1) + 4);
    *((_DWORD *)v2 + 1) = v4;
  }
  v10 = v3 + 3584;
  if ( !ItemInstance::isNull((ItemInstance *)(v3 + 3584)) )
    if ( v4 == *((char **)v2 + 2) )
    {
      v11 = *(_BYTE **)v2;
      v12 = (signed int)&v4[-*(_DWORD *)v2];
      v13 = v12 >> 2;
      if ( !(v12 >> 2) )
        v13 = 1;
      v14 = v13 + (v12 >> 2);
      v15 = v14;
      if ( 0 != v14 >> 30 )
        v15 = 0x3FFFFFFF;
      if ( v14 < v13 )
      if ( v15 )
      {
        if ( v15 >= 0x40000000 )
          sub_21E57F4();
        v16 = (char *)operator new(4 * v15);
      }
      else
        v16 = 0;
      *(_DWORD *)&v16[v4 - v11] = v10;
      if ( 0 != (v4 - v11) >> 2 )
        _aeabi_memmove4(v16, v11);
      v4 = &v16[v4 - v11 + 4];
      if ( v11 )
        operator delete(v11);
      *(_DWORD *)v2 = v16;
      *((_DWORD *)v2 + 1) = v4;
      *((_DWORD *)v2 + 2) = &v16[4 * v15];
    }
    else
      *(_DWORD *)v4 = v10;
      v4 = (char *)(*((_DWORD *)v2 + 1) + 4);
  v17 = v3 + 3664;
  v18 = 0;
  do
    v19 = v17 + v18;
    result = (char *)ItemInstance::isNull((ItemInstance *)(v17 + v18));
    if ( !result )
      if ( v4 == *((char **)v2 + 2) )
        v21 = *(_BYTE **)v2;
        v22 = 0;
        v23 = (signed int)&v4[-*(_DWORD *)v2];
        v24 = v23 >> 2;
        if ( !(v23 >> 2) )
          v24 = 1;
        v25 = v24 + (v23 >> 2);
        v26 = v25;
        if ( 0 != v25 >> 30 )
          v26 = 0x3FFFFFFF;
        if ( v25 < v24 )
        if ( v26 )
        {
          if ( v26 >= 0x40000000 )
            sub_21E57F4();
          v22 = (char *)operator new(4 * v26);
        }
        *(_DWORD *)&v22[v4 - v21] = v19;
        if ( (v4 - v21) >> 2 )
          _aeabi_memmove4(v22, v21);
        v4 = &v22[v4 - v21 + 4];
        if ( v21 )
          operator delete(v21);
        result = &v22[4 * v26];
        *(_DWORD *)v2 = v22;
        *((_DWORD *)v2 + 1) = v4;
        *((_DWORD *)v2 + 2) = result;
        *(_DWORD *)v4 = v19;
        result = (char *)*((_DWORD *)v2 + 1);
        v4 = result + 4;
        *((_DWORD *)v2 + 1) = result + 4;
    v18 += 72;
  while ( v18 != 288 );
  return result;
}


signed int __fastcall Player::isHiddenFrom(Player *this, Mob *a2)
{
  Player *v2; // r6@1
  int v3; // r4@1
  int v4; // r5@1
  signed int v5; // r0@3
  int v6; // r7@7
  int v7; // r6@7
  signed int v8; // r7@16
  signed int v9; // r8@18
  unsigned __int16 v10; // r0@20
  signed int v11; // r1@20
  signed int v12; // r2@22
  int v13; // r3@24
  bool v14; // zf@28
  signed int v15; // r2@33
  signed int v16; // r1@33

  v2 = this;
  v3 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)a2 + 488))(a2);
  v4 = 0;
  if ( v3 > 1116961 )
  {
    if ( v3 != 1116976 )
    {
      v5 = 1116962;
LABEL_6:
      if ( v3 != v5 )
        return v4;
      goto LABEL_7;
    }
  }
  else if ( v3 != 2849 )
    v5 = 199456;
    goto LABEL_6;
LABEL_7:
  v6 = 0;
  v7 = (*(int (__fastcall **)(Player *, _DWORD))(*(_DWORD *)v2 + 1028))(v2, 0);
  if ( *(_BYTE *)(v7 + 15) )
    if ( *(_DWORD *)v7 )
      if ( ItemInstance::isNull((ItemInstance *)v7) )
      {
        v6 = 0;
      }
      else if ( *(_BYTE *)(v7 + 14) )
        v6 = *(_DWORD *)v7;
      else
    else
      v6 = 0;
  if ( v6 == Item::mSkull )
    v8 = 0;
    if ( v3 == 2849 )
      v8 = 1;
    v9 = 0;
    if ( v3 == 1116962 )
      v9 = 1;
    v10 = ItemInstance::getAuxValue((ItemInstance *)v7);
    v11 = 0;
    if ( !v10 )
      v11 = 1;
    v12 = 0;
    if ( v3 == 1116976 )
      v12 = 1;
    v13 = v10;
    if ( v10 != 1 )
      v13 = 0;
    if ( v10 == 4 )
      v4 = 1;
    v14 = (v8 & v4) == 0;
    if ( !(v8 & v4) )
      v14 = (v11 & v9) == 0;
    if ( !v14 )
      return 1;
    v4 = 1;
    if ( !(v12 & v13) )
      v15 = 0;
      v16 = 0;
      if ( v3 == 199456 )
        v16 = 1;
      if ( v10 == 2 )
        v15 = 1;
      v4 = v16 & v15;
  return v4;
}


signed int __fastcall Player::canAddRider(Player *this, Entity *a2)
{
  Entity *v2; // r4@1
  Player *v3; // r5@1
  signed int v4; // r0@2
  bool v5; // zf@2
  signed int result; // r0@5

  v2 = a2;
  v3 = this;
  if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 488))(a2) != 21278 )
    goto LABEL_9;
  v4 = Entity::getPlayerOwner(v2);
  v5 = v4 == (_DWORD)v3;
  if ( (Player *)v4 != v3 )
    v5 = v4 == 0;
  if ( v5 )
LABEL_9:
    result = Mob::canAddRider(v3, v2);
  else
    result = 0;
  return result;
}


char *__fastcall Player::getSkinAdjustments(Player *this)
{
  return (char *)this + 5268;
}


int __fastcall Player::_crit(Player *this, Entity *a2)
{
  Entity *v2; // r5@1
  Player *v3; // r4@1
  Level *v4; // r0@1
  int result; // r0@1
  int v6; // [sp+0h] [bp-38h]@2
  void **v7; // [sp+8h] [bp-30h]@2
  int v8; // [sp+Ch] [bp-2Ch]@2
  int v9; // [sp+10h] [bp-28h]@2
  char v10; // [sp+14h] [bp-24h]@2
  __int64 v11; // [sp+18h] [bp-20h]@2
  signed int v12; // [sp+20h] [bp-18h]@2
  int v13; // [sp+24h] [bp-14h]@2

  v2 = a2;
  v3 = this;
  v4 = (Level *)Entity::getLevel(this);
  result = Level::isClientSide(v4);
  if ( !result )
  {
    Entity::getRuntimeID((Entity *)&v6, (int)v2);
    v8 = 2;
    v9 = 1;
    v10 = 0;
    v7 = &off_26DA6E8;
    v11 = *(_QWORD *)&v6;
    v12 = 4;
    v13 = 0;
    result = (*(int (**)(void))(**((_DWORD **)v3 + 1231) + 8))();
  }
  return result;
}


InstantaneousAttributeBuff *__fastcall Player::eat(Player *this, int a2, float a3)
{
  Player *v3; // r4@1
  AttributeInstance *v6; // r6@1
  int v7; // r0@1
  AttributeInstance *v12; // r4@1
  __int64 v13; // r2@1
  int v15; // r0@1
  __int64 v16; // r2@1
  int v19; // [sp+0h] [bp-98h]@1
  char v20; // [sp+38h] [bp-60h]@1

  v3 = this;
  _R8 = a3;
  _R7 = a2;
  v6 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)this + 1000))();
  v7 = (*(int (__fastcall **)(Player *, void *))(*(_DWORD *)v3 + 1000))(v3, &Player::SATURATION);
  __asm { VMOV            S0, R7 }
  v12 = (AttributeInstance *)v7;
  LODWORD(v13) = 9;
  __asm
  {
    VCVT.F32.S32    S16, S0
    VMOV            R1, S16
  }
  InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)&v20, _R1, v13);
  AttributeInstance::addBuff(v6, (const AttributeBuff *)&v20);
  __asm { VMOV            S18, R8 }
  InstantaneousAttributeBuff::~InstantaneousAttributeBuff((InstantaneousAttributeBuff *)&v20);
  v15 = AttributeInstance::getCurrentValue(v6);
  AttributeInstance::setMaxValue(v12, *(float *)&v15);
  __asm { VADD.F32        S0, S16, S16 }
  LODWORD(v16) = 9;
    VMUL.F32        S0, S18, S0
    VMOV            R1, S0
  InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)&v19, _R1, v16);
  AttributeInstance::addBuff(v12, (const AttributeBuff *)&v19);
  return InstantaneousAttributeBuff::~InstantaneousAttributeBuff((InstantaneousAttributeBuff *)&v19);
}


void __fastcall Player::registerAttributes(Player *this)
{
  Player::registerAttributes(this);
}


int __fastcall Player::setLastHurtBy(int a1, int a2)
{
  int v2; // r4@1
  Level *v3; // r0@1
  int result; // r0@1
  int v5; // r0@2
  void **v6; // [sp+4h] [bp-24h]@2
  int v7; // [sp+8h] [bp-20h]@2
  int v8; // [sp+Ch] [bp-1Ch]@2
  char v9; // [sp+10h] [bp-18h]@2
  int v10; // [sp+14h] [bp-14h]@2

  v2 = a1;
  *(_DWORD *)(a1 + 4996) = a2;
  v3 = (Level *)Entity::getLevel((Entity *)a1);
  result = Level::isClientSide(v3);
  if ( !result )
  {
    v5 = *(_DWORD *)(v2 + 4996);
    v7 = 2;
    v8 = 1;
    v9 = 0;
    v6 = &off_26E9B0C;
    v10 = v5;
    result = (*(int (**)(void))(**(_DWORD **)(v2 + 4924) + 8))();
  }
  return result;
}


signed int __fastcall Player::interact(Player *this, Entity *a2, const Vec3 *a3)
{
  Entity *v3; // r5@1
  Player *v4; // r7@1
  const Vec3 *v5; // r6@1
  signed int v6; // r5@3
  void *v7; // r0@8
  unsigned int *v9; // r2@10
  signed int v10; // r1@12
  int v11; // [sp+4h] [bp-34h]@1
  void (*v12)(void); // [sp+10h] [bp-28h]@6

  v3 = a2;
  v4 = this;
  v5 = a3;
  EntityInteraction::EntityInteraction((int)&v11, 0);
  if ( (*(int (__fastcall **)(Entity *, Player *, int *, const Vec3 *))(*(_DWORD *)v3 + 668))(v3, v4, &v11, v5) == 1 )
  {
    EntityInteraction::interact((EntityInteraction *)&v11);
    if ( Entity::hasCategory((int)v3, 2) == 1 )
    {
      Entity::setPersistent(v3);
      v6 = 1;
    }
    else
  }
  else
    v6 = 0;
  if ( v12 )
    v12();
  v7 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  return v6;
}


signed int __fastcall Player::setSkin(int a1, int a2)
{
  int v2; // r5@1
  signed int result; // r0@1

  v2 = a1;
  (*(void (__cdecl **)(_DWORD, int))(**(_DWORD **)(a1 + 4756) + 8))(*(_DWORD *)(a1 + 4756), a2);
  result = 30;
  *(_DWORD *)(v2 + 248) = 30;
  return result;
}


  if ( !a4 && Player::isInCreativeMode(a2) != 1 )
{
  v8 = *(_DWORD *)(v6 + 12);
  if ( !v8 )
  {
    v9 = (ItemInstance *)*(_BYTE *)(v6 + 31);
    v10 = v9 == 0;
    if ( *(_BYTE *)(v6 + 31) )
    {
      v9 = (ItemInstance *)(v6 + 16);
      v10 = *(_DWORD *)(v6 + 16) == 0;
    }
    if ( v10 || ItemInstance::isNull(v9) || !*(_BYTE *)(v6 + 30) )
      v11 = (ItemInstance *)*(_BYTE *)(v6 + 103);
      v12 = v11 == 0;
      if ( *(_BYTE *)(v6 + 103) )
      {
        v11 = (ItemInstance *)(v6 + 88);
        v12 = *(_DWORD *)(v6 + 88) == 0;
      }
      if ( !v12 && !ItemInstance::isNull(v11) && *(_BYTE *)(v6 + 102) )
        goto LABEL_92;
    v8 = *(_DWORD *)(v6 + 12);
  }
  if ( v8 != 1 )
    return 0;
  v13 = *(_BYTE *)(v6 + 31) == 0;
  if ( *(_BYTE *)(v6 + 31) )
    v4 = (ItemInstance *)(v6 + 16);
    v13 = *(_DWORD *)(v6 + 16) == 0;
  if ( v13 || ItemInstance::isNull(v4) || !*(_BYTE *)(v6 + 30) )
  if ( *(_BYTE *)(v6 + 103) )
    if ( *(_DWORD *)(v6 + 88) )
      if ( ItemInstance::isNull((ItemInstance *)(v6 + 88)) )
        v14 = 0;
      else
        v14 = (const ItemInstance *)*(_BYTE *)(v6 + 102);
        if ( *(_BYTE *)(v6 + 102) )
          v14 = (const ItemInstance *)1;
    else
      v14 = 0;
  else
    v14 = 0;
  result = (unsigned int)v14 ^ 1;
  v16 = v14 == 0;
  if ( !v14 )
    v16 = v5 == 0;
  if ( v16 )
    if ( !Item::findCreativeItem(v4, v14) )
      v17 = Player::getSupplies(v7);
      v18 = 0;
      v19 = PlayerInventoryProxy::getContainerSize(v17, 0);
      if ( v19 )
        do
        {
          v20 = Player::getSupplies(v7);
          v21 = (ItemInstance *)PlayerInventoryProxy::getItem(v20, v18, 0);
          if ( ItemInstance::matchesItem(v21, v4) )
            goto LABEL_92;
        }
        while ( v19 != ++v18 );
      if ( Player::hasOpenContainer(v7) != 1 )
        return 6;
      Player::getContainerManager((Player *)&v43, (int)v7);
      v22 = v44;
      v23 = (unsigned int *)(v44 + 4);
      v24 = *(_DWORD *)(v44 + 4);
      do
        while ( 1 )
          if ( !v24 )
          {
            v27 = 1;
            v22 = 0;
            goto LABEL_48;
          }
          __dmb();
          v25 = __ldrex(v23);
          if ( v25 == v24 )
            break;
          __clrex();
          v24 = v25;
        v26 = __strex(v24 + 1, v23);
        v24 = v25;
      while ( v26 );
      __dmb();
      v27 = 0;
      if ( !*v23 )
        v27 = 1;
LABEL_48:
      v28 = v44;
      v29 = v43;
      if ( v27 )
        v29 = 0;
      if ( v44 )
        v30 = (unsigned int *)(v44 + 8);
        if ( &pthread_create )
          do
            v31 = __ldrex(v30);
          while ( __strex(v31 - 1, v30) );
        else
          v31 = (*v30)--;
        if ( v31 == 1 )
          (*(void (**)(void))(*(_DWORD *)v28 + 12))();
      (*(void (__fastcall **)(int *, int))(*(_DWORD *)v29 + 24))(&v41, v29);
      v32 = *(_QWORD *)&v41;
      if ( v41 == v42 )
        v33 = 4;
        while ( !ItemInstance::matchesItem((ItemInstance *)v32, v4) )
          LODWORD(v32) = v32 + 72;
          if ( HIDWORD(v32) == (_DWORD)v32 )
            v33 = 4;
            goto LABEL_64;
        v33 = 1;
LABEL_64:
        v32 = *(_QWORD *)&v41;
        if ( v41 != v42 )
            v34 = *(void **)(v32 + 52);
            if ( v34 )
              operator delete(v34);
            v35 = *(void **)(v32 + 36);
            if ( v35 )
              operator delete(v35);
            v36 = *(_DWORD *)(v32 + 8);
            if ( v36 )
              (*(void (**)(void))(*(_DWORD *)v36 + 4))();
            *(_DWORD *)(v32 + 8) = 0;
            LODWORD(v32) = v32 + 72;
          while ( HIDWORD(v32) != (_DWORD)v32 );
          LODWORD(v32) = v41;
      if ( (_DWORD)v32 )
        operator delete((void *)v32);
      if ( v22 )
        v37 = (unsigned int *)(v22 + 4);
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
          v38 = (*v37)--;
        if ( v38 == 1 )
          v39 = (unsigned int *)(v22 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
          if ( &pthread_create )
            __dmb();
            do
              v40 = __ldrex(v39);
            while ( __strex(v40 - 1, v39) );
          else
            v40 = (*v39)--;
          if ( v40 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
      if ( v33 == 4 )
LABEL_92:
    result = 1;
  return result;
}


int __fastcall Player::canOpenContainerScreen(Player *this)
{
  int result; // r0@2

  if ( *((_DWORD *)this + 1186) )
    result = 0;
  else
    result = Entity::isInsidePortal(this) ^ 1;
  return result;
}


int __fastcall Player::isInvulnerableTo(Player *this, const EntityDamageSource *a2)
{
  Entity *v2; // r5@1
  EntityDamageSource *v3; // r4@1
  int v4; // r6@2
  Level *v5; // r0@2
  unsigned __int64 *v6; // r0@2
  bool v7; // zf@3
  int result; // r0@3
  Level *v9; // r0@6
  unsigned __int64 *v10; // r0@6
  bool v11; // zf@7
  Level *v12; // r0@10
  unsigned __int64 *v13; // r0@10
  Level *v14; // r0@12
  unsigned __int64 *v15; // r0@12
  int v16; // r0@13

  v2 = this;
  v3 = a2;
  if ( Abilities::getBool((int)this + 4320, (int **)&Abilities::INVULNERABLE) )
    return 1;
  v4 = EntityDamageSource::getCause(v3);
  v5 = (Level *)Entity::getLevel(v2);
  v6 = (unsigned __int64 *)Level::getGameRules(v5);
  if ( GameRules::getBool(v6, (int **)&GameRules::DROWNING_DAMAGE) )
    goto LABEL_18;
  v7 = v4 == 4;
  result = 1;
  if ( v4 != 4 )
    v7 = v4 == 9;
  if ( !v7 )
  {
LABEL_18:
    v9 = (Level *)Entity::getLevel(v2);
    v10 = (unsigned __int64 *)Level::getGameRules(v9);
    if ( GameRules::getBool(v10, (int **)&GameRules::FIRE_DAMAGE) )
      goto LABEL_19;
    v11 = v4 == 8;
    result = 1;
    if ( v4 != 8 )
      v11 = (v4 | 1) == 7;
    if ( !v11 )
    {
LABEL_19:
      v12 = (Level *)Entity::getLevel(v2);
      v13 = (unsigned __int64 *)Level::getGameRules(v12);
      if ( !GameRules::getBool(v13, (int **)&GameRules::FALL_DAMAGE) && EntityDamageSource::getCause(v3) == 5 )
        return 1;
      v14 = (Level *)Entity::getLevel(v2);
      v15 = (unsigned __int64 *)Level::getGameRules(v14);
      if ( !GameRules::getBool(v15, (int **)&GameRules::PVP) )
      {
        v16 = (*(int (__fastcall **)(EntityDamageSource *))(*(_DWORD *)v3 + 36))(v3);
        if ( EntityClassTree::isTypeInstanceOf(v16, 319) )
          return 1;
      }
      result = Entity::isInvulnerableTo(v2, v3);
    }
  }
  return result;
}


signed int __fastcall Player::addLevels(Player *this, int a2)
{
  int v2; // r4@1
  Entity *v3; // r5@1
  Level *v4; // r0@1
  Level *v5; // r0@2
  int v6; // r0@2
  int v8; // [sp+0h] [bp-38h]@2
  void **v9; // [sp+8h] [bp-30h]@2
  int v10; // [sp+Ch] [bp-2Ch]@2
  int v11; // [sp+10h] [bp-28h]@2
  char v12; // [sp+14h] [bp-24h]@2
  __int64 v13; // [sp+18h] [bp-20h]@2
  char v14; // [sp+20h] [bp-18h]@2
  int v15; // [sp+24h] [bp-14h]@2

  v2 = a2;
  v3 = this;
  v4 = (Level *)Entity::getLevel(this);
  if ( Level::isClientSide(v4) == 1 )
  {
    Entity::getRuntimeID((Entity *)&v8, (int)v3);
    v10 = 2;
    v11 = 1;
    v12 = 0;
    v9 = &off_26DA5D0;
    v13 = *(_QWORD *)&v8;
    v14 = 34;
    v15 = v2;
    v5 = (Level *)Entity::getLevel(v3);
    v6 = Level::getPacketSender(v5);
    (*(void (**)(void))(*(_DWORD *)v6 + 8))();
  }
  return Player::_addLevels(v3, v2);
}


int __fastcall Player::prepareRegion(Player *this, ChunkSource *a2)
{
  Player *v2; // r4@1
  PlayerChunkSource *v3; // r0@1
  ChunkSource *v4; // r5@1
  int v5; // r7@3
  void *v6; // r8@3
  PlayerChunkSource **v7; // r6@5
  int v8; // r0@5
  BlockSourceListener *v9; // r8@7
  int v10; // r7@7
  PlayerChunkSource *v11; // r9@7
  BlockSource *v12; // r5@7
  BlockSource **v13; // r7@7
  int v14; // r0@7
  int v15; // r0@9
  int v16; // r0@9
  Dimension *v17; // r0@9
  ChunkSource *v18; // r6@9
  void *v19; // r5@9
  int v20; // r0@11
  Dimension *v21; // r0@14
  int result; // r0@14
  char v23; // [sp+8h] [bp-48h]@9
  char v24; // [sp+14h] [bp-3Ch]@3
  void (*v25)(void); // [sp+1Ch] [bp-34h]@3
  char v26; // [sp+24h] [bp-2Ch]@9
  void (*v27)(void); // [sp+2Ch] [bp-24h]@9

  v2 = this;
  v3 = (PlayerChunkSource *)*((_DWORD *)this + 1156);
  v4 = a2;
  if ( v3 )
  {
    PlayerChunkSource::setRadius(v3, 16 * *((_DWORD *)v2 + 1310));
  }
  else
    Entity::resetRegion(v2);
    v5 = *((_DWORD *)v2 + 1310);
    v6 = operator new(0xC8u);
    v25 = 0;
    PlayerChunkSource::PlayerChunkSource((int)v6, (int)v2, v4, 16 * v5, 1, (int)&v24);
    if ( v25 )
      v25();
    v7 = (PlayerChunkSource **)((char *)v2 + 4624);
    v8 = *((_DWORD *)v2 + 1156);
    *((_DWORD *)v2 + 1156) = v6;
    if ( v8 )
      (*(void (**)(void))(*(_DWORD *)v8 + 4))();
    v9 = (BlockSourceListener *)Entity::getLevel(v2);
    v10 = ChunkSource::getDimension(v4);
    v11 = *v7;
    v12 = (BlockSource *)operator new(0x70u);
    BlockSource::BlockSource((int)v12, v9, v10, (int)v11, 1, 0);
    v13 = (BlockSource **)((char *)v2 + 4632);
    v14 = *((_DWORD *)v2 + 1158);
    *((_DWORD *)v2 + 1158) = v12;
    if ( v14 )
    {
      (*(void (**)(void))(*(_DWORD *)v14 + 4))();
      v12 = *v13;
    }
    Entity::setRegion(v2, v12);
    PlayerChunkSource::center(*v7, 16.0);
    v15 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v2 + 52))(v2);
    ChunkPos::ChunkPos((int)&v23, v15);
    *((_QWORD *)v2 + 18) = *(_QWORD *)&v23;
    v16 = Entity::getLevel(v2);
    v17 = (Dimension *)Level::createDimension(v16, 0);
    v18 = (ChunkSource *)Dimension::getChunkSource(v17);
    v19 = operator new(0xC8u);
    v27 = 0;
    PlayerChunkSource::PlayerChunkSource((int)v19, (int)v2, v18, 80, 1, (int)&v26);
    if ( v27 )
      v27();
    v20 = *((_DWORD *)v2 + 1157);
    *((_DWORD *)v2 + 1157) = v19;
    if ( v20 )
      (*(void (**)(void))(*(_DWORD *)v20 + 4))();
    Entity::setRegion(v2, *v13);
  v21 = (Dimension *)Entity::getDimension(v2);
  result = Dimension::getId(v21);
  *((_DWORD *)v2 + 1206) = result;
  return result;
}


int __fastcall Player::clearCreativeItemList(Player *this)
{
  Player *v1; // r4@1
  int v2; // r5@1
  int v3; // r9@1
  int v4; // r6@2
  void *v5; // r0@3
  void *v6; // r0@5
  int v7; // r0@7
  int v8; // r5@10
  int v9; // r9@10
  int v10; // r6@11
  void *v11; // r0@12
  void *v12; // r0@14
  int v13; // r0@16
  int v14; // r5@19
  int v15; // r9@19
  int v16; // r6@20
  void *v17; // r0@21
  void *v18; // r0@23
  int v19; // r0@25
  int v20; // r5@28
  int v21; // r9@28
  int v22; // r6@29
  void *v23; // r0@30
  void *v24; // r0@32
  int v25; // r0@34
  int result; // r0@37
  int v27; // r5@37
  int v28; // r8@37
  Player *v29; // r4@37
  int v30; // r6@38
  void *v31; // r0@39
  void *v32; // r0@41

  v1 = this;
  v2 = *((_DWORD *)this + 1191);
  v3 = *((_DWORD *)this + 1190);
  if ( v2 != v3 )
  {
    v4 = *((_DWORD *)this + 1190);
    do
    {
      v5 = *(void **)(v4 + 52);
      if ( v5 )
        operator delete(v5);
      v6 = *(void **)(v4 + 36);
      if ( v6 )
        operator delete(v6);
      v7 = *(_DWORD *)(v4 + 8);
      if ( v7 )
        (*(void (**)(void))(*(_DWORD *)v7 + 4))();
      *(_DWORD *)(v4 + 8) = 0;
      v4 += 72;
    }
    while ( v2 != v4 );
  }
  *((_DWORD *)v1 + 1191) = v3;
  v8 = *((_DWORD *)v1 + 1194);
  v9 = *((_DWORD *)v1 + 1193);
  if ( v8 != v9 )
    v10 = *((_DWORD *)v1 + 1193);
      v11 = *(void **)(v10 + 52);
      if ( v11 )
        operator delete(v11);
      v12 = *(void **)(v10 + 36);
      if ( v12 )
        operator delete(v12);
      v13 = *(_DWORD *)(v10 + 8);
      if ( v13 )
        (*(void (**)(void))(*(_DWORD *)v13 + 4))();
      *(_DWORD *)(v10 + 8) = 0;
      v10 += 80;
    while ( v8 != v10 );
  *((_DWORD *)v1 + 1194) = v9;
  v14 = *((_DWORD *)v1 + 1197);
  v15 = *((_DWORD *)v1 + 1196);
  if ( v14 != v15 )
    v16 = *((_DWORD *)v1 + 1196);
      v17 = *(void **)(v16 + 52);
      if ( v17 )
        operator delete(v17);
      v18 = *(void **)(v16 + 36);
      if ( v18 )
        operator delete(v18);
      v19 = *(_DWORD *)(v16 + 8);
      if ( v19 )
        (*(void (**)(void))(*(_DWORD *)v19 + 4))();
      *(_DWORD *)(v16 + 8) = 0;
      v16 += 80;
    while ( v14 != v16 );
  *((_DWORD *)v1 + 1197) = v15;
  v20 = *((_DWORD *)v1 + 1200);
  v21 = *((_DWORD *)v1 + 1199);
  if ( v20 != v21 )
    v22 = *((_DWORD *)v1 + 1199);
      v23 = *(void **)(v22 + 52);
      if ( v23 )
        operator delete(v23);
      v24 = *(void **)(v22 + 36);
      if ( v24 )
        operator delete(v24);
      v25 = *(_DWORD *)(v22 + 8);
      if ( v25 )
        (*(void (**)(void))(*(_DWORD *)v25 + 4))();
      *(_DWORD *)(v22 + 8) = 0;
      v22 += 80;
    while ( v20 != v22 );
  *((_DWORD *)v1 + 1200) = v21;
  result = 4812;
  v27 = *((_DWORD *)v1 + 1203);
  v28 = *((_DWORD *)v1 + 1202);
  v29 = (Player *)((char *)v1 + 4812);
  if ( v27 != v28 )
    v30 = v28;
      v31 = *(void **)(v30 + 52);
      if ( v31 )
        operator delete(v31);
      v32 = *(void **)(v30 + 36);
      if ( v32 )
        operator delete(v32);
      result = *(_DWORD *)(v30 + 8);
      if ( result )
        result = (*(int (**)(void))(*(_DWORD *)result + 4))();
      *(_DWORD *)(v30 + 8) = 0;
      v30 += 80;
    while ( v27 != v30 );
  *(_DWORD *)v29 = v28;
  return result;
}


int *__fastcall Player::useItem(Player *this, ItemInstance *a2)
{
  ItemInstance *v2; // r4@1
  int *result; // r0@1

  v2 = a2;
  result = (int *)Abilities::getBool((int)this + 4320, (int **)&Abilities::INSTABUILD);
  if ( !result )
    result = j_j_j__ZN12ItemInstance6removeEi_0(v2, 1);
  return result;
}


int __fastcall Player::setCursorSelectedItem(Player *this, const ItemInstance *a2)
{
  Player *v2; // r6@1
  char *v3; // r5@1
  const ItemInstance *v4; // r4@1
  int result; // r0@1
  __int16 v6; // [sp+5h] [bp-BBh]@0
  char v7; // [sp+7h] [bp-B9h]@0
  int v8; // [sp+8h] [bp-B8h]@2
  char v9; // [sp+Ch] [bp-B4h]@2
  __int16 v10; // [sp+Dh] [bp-B3h]@2
  char v11; // [sp+Fh] [bp-B1h]@2
  int v12; // [sp+10h] [bp-B0h]@2
  int v13; // [sp+14h] [bp-ACh]@2
  int v14; // [sp+18h] [bp-A8h]@2
  int v15; // [sp+20h] [bp-A0h]@12
  void *v16; // [sp+3Ch] [bp-84h]@10
  void *v17; // [sp+4Ch] [bp-74h]@8
  int v18; // [sp+60h] [bp-60h]@2
  int v19; // [sp+68h] [bp-58h]@6
  void *v20; // [sp+84h] [bp-3Ch]@4
  void *ptr; // [sp+94h] [bp-2Ch]@2

  v2 = this;
  v3 = (char *)this + 5000;
  v4 = a2;
  result = ItemInstance::operator==(a2, (Player *)((char *)this + 5000));
  if ( !result )
  {
    v8 = 0;
    v9 = 124;
    v11 = v7;
    v10 = v6;
    v12 = 0;
    v13 = 0;
    ItemInstance::ItemInstance((ItemInstance *)&v14, (int)v3);
    ItemInstance::ItemInstance((ItemInstance *)&v18, (int)v4);
    InventoryTransactionManager::addAction((int)v2 + 5152, (int)&v8);
    if ( ptr )
      operator delete(ptr);
    if ( v20 )
      operator delete(v20);
    if ( v19 )
      (*(void (**)(void))(*(_DWORD *)v19 + 4))();
    v19 = 0;
    if ( v17 )
      operator delete(v17);
    if ( v16 )
      operator delete(v16);
    if ( v15 )
      (*(void (**)(void))(*(_DWORD *)v15 + 4))();
    v15 = 0;
    result = ItemInstance::operator=((int)v3, (int)v4);
  }
  return result;
}


void __fastcall Player::registerAttributes(Player *this)
{
  Player *v1; // r6@1
  AttributeInstance *v2; // r0@1
  AttributeInstance *v3; // r0@1
  AttributeInstance *v4; // r8@1
  AttributeInstance *v5; // r9@1
  AttributeInstance *v6; // r0@1
  AttributeInstance *v13; // r0@1
  AttributeInstance *v14; // r0@1
  int v15; // r6@1
  unsigned int *v16; // r1@2
  unsigned int v17; // r0@4
  unsigned int *v18; // r4@8
  unsigned int v19; // r0@10
  int v20; // r6@15
  unsigned int *v21; // r1@16
  unsigned int v22; // r0@18
  unsigned int *v23; // r4@22
  unsigned int v24; // r0@24
  int v27; // r6@29
  unsigned int *v28; // r1@30
  unsigned int v29; // r0@32
  unsigned int *v30; // r4@36
  unsigned int v31; // r0@38
  int v32; // r6@43
  unsigned int *v33; // r1@44
  unsigned int v34; // r0@46
  unsigned int *v35; // r4@50
  unsigned int v36; // r0@52
  int v37; // [sp+4h] [bp-44h]@29
  int v38; // [sp+8h] [bp-40h]@29
  int v39; // [sp+Ch] [bp-3Ch]@29
  int v40; // [sp+10h] [bp-38h]@29
  Player *v41; // [sp+14h] [bp-34h]@1
  int v42; // [sp+18h] [bp-30h]@1
  int v43; // [sp+1Ch] [bp-2Ch]@1
  int v44; // [sp+20h] [bp-28h]@1
  int v45; // [sp+24h] [bp-24h]@1
  char v46; // [sp+28h] [bp-20h]@1

  v1 = this;
  v2 = (AttributeInstance *)BaseAttributeMap::registerAttribute(
                              *((BaseAttributeMap **)this + 992),
                              (const Attribute *)&SharedAttributes::ATTACK_DAMAGE);
  AttributeInstance::setRange(v2, 2.0, 2.0, 2.0);
  v3 = (AttributeInstance *)BaseAttributeMap::registerAttribute(
                              *((BaseAttributeMap **)v1 + 992),
                              (const Attribute *)&SharedAttributes::HEALTH);
  AttributeInstance::setRange(v3, 0.0, 20.0, 20.0);
  v4 = (AttributeInstance *)BaseAttributeMap::registerAttribute(
                              (const Attribute *)&Player::HUNGER);
  v5 = (AttributeInstance *)BaseAttributeMap::registerAttribute(
                              (const Attribute *)&Player::EXHAUSTION);
  v6 = (AttributeInstance *)BaseAttributeMap::registerAttribute(
                              (const Attribute *)&Player::SATURATION);
  _R1 = &FoodConstants::MAX_FOOD;
  __asm
  {
    VLDR            S0, [R1]
    VCVT.F32.S32    S0, S0
    VMOV            R4, S0
  }
  AttributeInstance::setRange(v6, 0.0, 5.0, _R4);
  v13 = (AttributeInstance *)BaseAttributeMap::registerAttribute(
                               *((BaseAttributeMap **)v1 + 992),
                               (const Attribute *)&Player::LEVEL);
  AttributeInstance::setDefaultValue(v13, 24791.0, 1);
  v14 = (AttributeInstance *)BaseAttributeMap::registerAttribute(
                               (const Attribute *)&Player::EXPERIENCE);
  AttributeInstance::setDefaultValue(v14, 1.0, 1);
  AttributeInstance::setRange(v4, 0.0, _R4, _R4);
  v41 = v1;
  std::__shared_ptr<HungerAttributeDelegate,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<HungerAttributeDelegate>,AttributeInstance &,Player *>(
    (int)&v42,
    (int)&v46,
    v4,
    &v41);
  v44 = v42;
  v45 = v43;
  v42 = 0;
  v43 = 0;
  AttributeInstance::setDelegate((int)v4, (int)&v44);
  v15 = v45;
  if ( v45 )
    v16 = (unsigned int *)(v45 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 == 1 )
      v18 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
      if ( &pthread_create )
      {
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
      }
      else
        v19 = (*v18)--;
      if ( v19 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  v20 = v43;
  if ( v43 )
    v21 = (unsigned int *)(v43 + 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 == 1 )
      v23 = (unsigned int *)(v20 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
  __asm { VMOV.F32        S0, #1.0 }
  _R0 = &FoodConstants::MAX_EXHAUSTION;
    VLDR            S2, [R0]
    VADD.F32        S0, S2, S0
    VMOV            R1, S0
  AttributeInstance::setDefaultValue(v5, _R1, 1);
  std::__shared_ptr<ExhaustionAttributeDelegate,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ExhaustionAttributeDelegate>,AttributeInstance &>(
    (int)&v37,
    v5);
  v39 = v37;
  v40 = v38;
  v37 = 0;
  v38 = 0;
  AttributeInstance::setDelegate((int)v5, (int)&v39);
  v27 = v40;
  if ( v40 )
    v28 = (unsigned int *)(v40 + 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 == 1 )
      v30 = (unsigned int *)(v27 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 8))(v27);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 12))(v27);
  v32 = v38;
  if ( v38 )
    v33 = (unsigned int *)(v38 + 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 == 1 )
      v35 = (unsigned int *)(v32 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 8))(v32);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 12))(v32);
  AttributeInstance::registerListener(v5, v4);
}


int __fastcall Player::isCreative(Player *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = *((_DWORD *)this + 1308);
  v2 = 0;
  if ( v1 == 4 )
    v2 = 1;
  if ( v1 != 1 )
    v1 = 0;
  return v1 | v2;
}


InstantaneousAttributeBuff *__fastcall Player::addExperience(Player *this, int a2)
{
  Player *v2; // r4@1
  AttributeInstance *v4; // r0@1
  _BYTE *v10; // r6@1
  int *v11; // r10@1
  AttributeInstance *v12; // r0@2
  int v17; // r1@2
  int v20; // r0@11
  AttributeInstance *v21; // r0@12
  int v25; // r1@12
  AttributeInstance *v26; // r4@22
  __int64 v28; // r2@22
  int v30; // [sp+0h] [bp-78h]@22

  v2 = this;
  _R5 = a2;
  v4 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)this + 1004))();
  _R0 = AttributeInstance::getCurrentValue(v4);
  __asm { VMOV            S0, R5 }
  v10 = (char *)v2 + 5192;
  __asm
  {
    VCVT.F32.S32    S16, S0
    VMOV            S18, R0
  }
  v11 = (int *)((char *)v2 + 5196);
  if ( *((_BYTE *)v2 + 5192) )
    v12 = (AttributeInstance *)(*(int (__fastcall **)(Player *, void *))(*(_DWORD *)v2 + 1004))(v2, &Player::LEVEL);
    _R0 = AttributeInstance::getCurrentValue(v12);
    __asm { VMOV            S0, R0 }
    _R1 = -2004318071;
    __asm
    {
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
      SMMLA.W         R1, R1, R0, R0
    }
    v17 = ((signed int)_R1 >> 3) + (_R1 >> 31);
    if ( v17 == 1 )
      _R7 = 5 * _R0 - 38;
    else if ( v17 )
      _R7 = 9 * _R0 - 158;
    else
      _R7 = 2 * _R0 + 7;
    *v10 = 0;
    *v11 = _R7;
  else
    _R7 = *((_DWORD *)v2 + 1299);
    VMOV            S0, R7
    VCVT.F32.S32    S0, S0
  *((_DWORD *)v2 + 1075) += _R5;
    VDIV.F32        S0, S16, S0
    VMOV.F32        S16, #1.0
    VADD.F32        S20, S0, S18
    VCMPE.F32       S20, S16
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    __asm { VMOV.F32        S18, #-1.0 }
    _R8 = -2004318071;
    do
      (*(void (__fastcall **)(Player *, signed int))(*(_DWORD *)v2 + 1456))(v2, 1);
      __asm
      {
        VMOV            S0, R7
        VADD.F32        S2, S20, S18
        VCVT.F32.S32    S0, S0
      }
      v20 = *v10;
      __asm { VMUL.F32        S20, S0, S2 }
      if ( _ZF )
        _R7 = *v11;
      else
        v21 = (AttributeInstance *)(*(int (__fastcall **)(Player *, void *))(*(_DWORD *)v2 + 1004))(v2, &Player::LEVEL);
        _R0 = AttributeInstance::getCurrentValue(v21);
        __asm
        {
          VMOV            S0, R0
          VCVTR.S32.F32   S0, S0
          VMOV            R0, S0
          SMMLA.W         R1, R8, R0, R0
        }
        v25 = ((signed int)_R1 >> 3) + (_R1 >> 31);
        if ( v25 == 1 )
          _R7 = 5 * _R0 - 38;
        else if ( v25 )
          _R7 = 9 * _R0 - 158;
        else
          _R7 = 2 * _R0 + 7;
        *v10 = 0;
        *v11 = _R7;
        VDIV.F32        S20, S20, S0
        VCMPE.F32       S20, S16
        VMRS            APSR_nzcv, FPSCR
    while ( !(_NF ^ _VF) );
  v26 = (AttributeInstance *)(*(int (__fastcall **)(Player *, void *))(*(_DWORD *)v2 + 1000))(v2, &Player::EXPERIENCE);
  AttributeInstance::resetToMinValue(v26);
  __asm { VMOV            R1, S20 }
  LODWORD(v28) = 9;
  InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)&v30, _R1, v28);
  AttributeInstance::addBuff(v26, (const AttributeBuff *)&v30);
  return InstantaneousAttributeBuff::~InstantaneousAttributeBuff((InstantaneousAttributeBuff *)&v30);
}


signed int __fastcall Player::respawn(Player *this)
{
  Player *v1; // r4@1
  char *v2; // r7@1
  Level *v3; // r0@2
  Player *v4; // r5@4
  const Vec3 *v5; // r6@4
  signed int v6; // r0@4
  void (__fastcall *v7)(Player *, signed int); // r6@5
  int v8; // r0@5
  signed int v9; // r1@5
  Level *v10; // r0@10
  Level *v11; // r0@12
  int v12; // r3@13
  signed int result; // r0@14
  void **v14; // [sp+4h] [bp-64h]@13
  int v15; // [sp+8h] [bp-60h]@13
  int v16; // [sp+Ch] [bp-5Ch]@13
  char v17; // [sp+10h] [bp-58h]@13
  int v18; // [sp+14h] [bp-54h]@13
  char v19; // [sp+18h] [bp-50h]@11
  void **v20; // [sp+20h] [bp-48h]@11
  int v21; // [sp+24h] [bp-44h]@11
  int v22; // [sp+28h] [bp-40h]@11
  char v23; // [sp+2Ch] [bp-3Ch]@11
  int v24; // [sp+30h] [bp-38h]@11
  int v25; // [sp+34h] [bp-34h]@11
  int v26; // [sp+38h] [bp-30h]@11
  int v27; // [sp+3Ch] [bp-2Ch]@11
  int v28; // [sp+40h] [bp-28h]@11
  __int64 v29; // [sp+48h] [bp-20h]@11

  v1 = this;
  v2 = (char *)this + 4180;
  if ( !*((_BYTE *)this + 4180) )
  {
    v3 = (Level *)Entity::getLevel(this);
    if ( !Level::isClientSide(v3) && Mob::getHealth(v1) <= 0 )
    {
      v4 = (Player *)Entity::getRegion(v1);
      v5 = (const Vec3 *)(*(int (__fastcall **)(Player *))(*(_DWORD *)v1 + 52))(v1);
      v6 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v1 + 1152))(v1);
      ExperienceOrb::spawnOrbs(v4, v5, v6, 3, 0);
      *v2 = 1;
    }
  }
  (*(void (__fastcall **)(Player *))(*(_DWORD *)v1 + 36))(v1);
  v7 = *(void (__fastcall **)(Player *, signed int))(*(_DWORD *)v1 + 1248);
  v8 = Mob::getHealth(v1);
  v9 = 0;
  if ( v8 < 1 )
    v9 = 1;
  v7(v1, v9);
  if ( Mob::getHealth(v1) >= 1 )
    *((_DWORD *)v1 + 862) = 0;
    *((_BYTE *)v1 + 4163) = 0;
  (*(void (__fastcall **)(Player *, char *))(*(_DWORD *)v1 + 48))(v1, (char *)v1 + 4660);
  *((_DWORD *)v1 + 21) = *((_DWORD *)v1 + 1165);
  *((_DWORD *)v1 + 22) = *((_DWORD *)v1 + 1166);
  *((_DWORD *)v1 + 23) = *((_DWORD *)v1 + 1167);
  if ( *((_BYTE *)v1 + 4829) )
    v10 = (Level *)Entity::getLevel(v1);
    if ( Level::isClientSide(v10) == 1 )
      Entity::getRuntimeID((Entity *)&v19, (int)v1);
      v21 = 2;
      v22 = 1;
      v23 = 0;
      v20 = &off_26DA670;
      v24 = 0;
      v25 = 0;
      v26 = 0;
      v27 = -1;
      v28 = 7;
      v29 = *(_QWORD *)&v19;
      (*(void (**)(void))(**((_DWORD **)v1 + 1231) + 8))();
  v11 = (Level *)Entity::getLevel(v1);
  if ( !Level::isClientSide(v11) )
    v15 = 2;
    v16 = 1;
    v17 = 0;
    v14 = &off_26E96AC;
    v18 = Mob::getHealth(v1);
    v12 = *((_BYTE *)v1 + 4820);
    (*(void (**)(void))(**((_DWORD **)v1 + 1231) + 16))();
  *((_BYTE *)v1 + 4821) = 0;
  result = 4822;
  *((_BYTE *)v1 + 4822) = 0;
  *v2 = 0;
  return result;
}


Player *__fastcall Player::~Player(Player *this)
{
  Player *v1; // r4@1
  int v2; // r5@1
  int v3; // r6@1
  void **i; // r7@1
  int v5; // r0@3
  int v6; // r3@3
  int v7; // r2@3
  int v8; // r5@3
  unsigned int *v9; // r1@4
  unsigned int v10; // r0@6
  unsigned int *v11; // r6@10
  unsigned int v12; // r0@12
  Level *v13; // r0@17
  int v14; // r0@17
  void *v15; // r0@17
  int v16; // r0@21
  void *v17; // r0@23
  void *v18; // r0@25
  int v19; // r0@27
  void *v20; // r0@29
  void *v21; // r0@31
  int v22; // r0@33
  void *v23; // r0@35
  int v24; // r0@37
  int v25; // r0@39
  int v26; // r5@41
  unsigned int *v27; // r1@42
  unsigned int v28; // r0@44
  unsigned int *v29; // r6@48
  unsigned int v30; // r0@50
  void *v31; // r0@55
  void *v32; // r0@57
  int v33; // r0@59
  int v34; // r6@61
  int v35; // r5@61
  void *v36; // r0@62
  void *v37; // r0@64
  int v38; // r0@66
  int v39; // r6@70
  int v40; // r0@72
  int v41; // r5@76
  unsigned int *v42; // r1@77
  unsigned int v43; // r0@79
  unsigned int *v44; // r6@83
  unsigned int v45; // r0@85
  int v46; // r0@90
  int v47; // r0@92
  int v48; // r0@94
  int v49; // r1@96
  void *v50; // r0@96
  int v51; // r1@97
  void *v52; // r0@97
  int v53; // r1@98
  void *v54; // r0@98
  unsigned int *v56; // r2@100
  signed int v57; // r1@102
  unsigned int *v58; // r2@104
  signed int v59; // r1@106
  unsigned int *v60; // r2@108
  signed int v61; // r1@110

  v1 = this;
  *(_DWORD *)this = &off_26FCEC0;
  v2 = *((_DWORD *)this + 1295);
  v3 = *((_DWORD *)this + 1294);
  for ( i = (void **)((char *)this + 5176); v2 != v3; v3 += 4 )
    (*(void (**)(void))(**(_DWORD **)v3 + 16))();
  v5 = Entity::getLevel(v1);
  v6 = *((_DWORD *)v1 + 1313);
  v7 = *((_DWORD *)v1 + 1312);
  (*(void (**)(void))(**(_DWORD **)(v5 + 60) + 52))();
  (*(void (__fastcall **)(Player *))(*(_DWORD *)v1 + 1476))(v1);
  (*(void (__fastcall **)(Player *))(*(_DWORD *)v1 + 1200))(v1);
  *((_DWORD *)v1 + 1238) = 0;
  v8 = *((_DWORD *)v1 + 1239);
  *((_DWORD *)v1 + 1239) = 0;
  if ( v8 )
  {
    v9 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  v13 = (Level *)Entity::getLevel(v1);
  v14 = Level::getFixedInventory(v13);
  Container::removeSizeChangeListener(v14, *((_DWORD *)v1 + 1188));
  v15 = (void *)*((_DWORD *)v1 + 1314);
  if ( v15 )
    operator delete(v15);
  if ( *i )
    operator delete(*i);
  v16 = *((_DWORD *)v1 + 1293);
  if ( v16 )
    (*(void (**)(void))(*(_DWORD *)v16 + 4))();
  *((_DWORD *)v1 + 1293) = 0;
  InventoryTransactionManager::~InventoryTransactionManager((Player *)((char *)v1 + 5152));
  v17 = (void *)*((_DWORD *)v1 + 1281);
  if ( v17 )
    operator delete(v17);
  v18 = (void *)*((_DWORD *)v1 + 1277);
  if ( v18 )
    operator delete(v18);
  v19 = *((_DWORD *)v1 + 1270);
  if ( v19 )
    (*(void (**)(void))(*(_DWORD *)v19 + 4))();
  *((_DWORD *)v1 + 1270) = 0;
  v20 = (void *)*((_DWORD *)v1 + 1263);
  if ( v20 )
    operator delete(v20);
  v21 = (void *)*((_DWORD *)v1 + 1259);
  if ( v21 )
    operator delete(v21);
  v22 = *((_DWORD *)v1 + 1252);
  if ( v22 )
    (*(void (**)(void))(*(_DWORD *)v22 + 4))();
  *((_DWORD *)v1 + 1252) = 0;
  v23 = (void *)*((_DWORD *)v1 + 1242);
  if ( v23 )
    operator delete(v23);
  v24 = *((_DWORD *)v1 + 1241);
  if ( v24 )
    (*(void (**)(void))(*(_DWORD *)v24 + 4))();
  *((_DWORD *)v1 + 1241) = 0;
  v25 = *((_DWORD *)v1 + 1240);
  if ( v25 )
    (*(void (**)(void))(*(_DWORD *)v25 + 4))();
  *((_DWORD *)v1 + 1240) = 0;
  v26 = *((_DWORD *)v1 + 1239);
  if ( v26 )
    v27 = (unsigned int *)(v26 + 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 == 1 )
      v29 = (unsigned int *)(v26 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
  v31 = (void *)*((_DWORD *)v1 + 1221);
  if ( v31 )
    operator delete(v31);
  v32 = (void *)*((_DWORD *)v1 + 1217);
  if ( v32 )
    operator delete(v32);
  v33 = *((_DWORD *)v1 + 1210);
  if ( v33 )
    (*(void (**)(void))(*(_DWORD *)v33 + 4))();
  *((_DWORD *)v1 + 1210) = 0;
  std::array<std::vector<ItemGroup,std::allocator<ItemGroup>>,4u>::~array((int)v1 + 4772);
  v34 = *((_DWORD *)v1 + 1191);
  v35 = *((_DWORD *)v1 + 1190);
  if ( v35 != v34 )
    do
      v36 = *(void **)(v35 + 52);
      if ( v36 )
        operator delete(v36);
      v37 = *(void **)(v35 + 36);
      if ( v37 )
        operator delete(v37);
      v38 = *(_DWORD *)(v35 + 8);
      if ( v38 )
        (*(void (**)(void))(*(_DWORD *)v38 + 4))();
      *(_DWORD *)(v35 + 8) = 0;
      v35 += 72;
    while ( v34 != v35 );
    v35 = *((_DWORD *)v1 + 1190);
  v39 = (int)v1 + 4752;
  if ( v35 )
    operator delete((void *)v35);
  v40 = *((_DWORD *)v1 + 1189);
  if ( v40 )
    (*(void (**)(void))(*(_DWORD *)v40 + 4))();
  *((_DWORD *)v1 + 1189) = 0;
  if ( *(_DWORD *)v39 )
    (*(void (**)(void))(**(_DWORD **)v39 + 8))();
  *(_DWORD *)v39 = 0;
  v41 = *((_DWORD *)v1 + 1187);
  if ( v41 )
    v42 = (unsigned int *)(v41 + 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 == 1 )
      v44 = (unsigned int *)(v41 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 8))(v41);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 12))(v41);
  v46 = *((_DWORD *)v1 + 1158);
  if ( v46 )
    (*(void (**)(void))(*(_DWORD *)v46 + 4))();
  *((_DWORD *)v1 + 1158) = 0;
  v47 = *((_DWORD *)v1 + 1157);
  if ( v47 )
    (*(void (**)(void))(*(_DWORD *)v47 + 4))();
  *((_DWORD *)v1 + 1157) = 0;
  v48 = *((_DWORD *)v1 + 1156);
  if ( v48 )
    (*(void (**)(void))(*(_DWORD *)v48 + 4))();
  *((_DWORD *)v1 + 1156) = 0;
  v49 = *((_DWORD *)v1 + 1145);
  v50 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v49 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v50);
  std::unique_ptr<Certificate,std::default_delete<Certificate>>::~unique_ptr((int)v1 + 4576);
  v51 = *((_DWORD *)v1 + 1136);
  v52 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v51 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
  Abilities::~Abilities((Player *)((char *)v1 + 4320));
  v53 = *((_DWORD *)v1 + 1079);
  v54 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v53 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  Mob::~Mob(v1);
  return v1;
}


  if ( _NF ^ _VF && Player::isSurvival(v3) == 1 )
{
    v10 = (MobEffectInstance *)Mob::getEffect(v3, *(const MobEffect **)v2[1]);
    if ( Mob::hasEffect(v3, *(const MobEffect **)v2[1]) )
    {
      _R0 = MobEffectInstance::getAmplifier(v10);
      __asm
      {
        VMOV            S0, R0
        VCVT.F32.S32    S0, S0
      }
      v13 = (int *)(v2 + 3);
      _R0 = v2[3];
        VLDR            S2, [R0]
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      if ( !(_NF ^ _VF) )
        _R0 = MobEffectInstance::getDuration(v10);
        __asm
        {
          VMOV            S0, R0
          VCVT.F32.S32    S0, S0
        }
        _R0 = v2[4];
          VLDR            S2, [R0]
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        if ( !(_NF ^ _VF) )
          return 1;
    }
    else
    v16 = MobEffect::getId(*(MobEffect **)v2[1]);
    _R2 = *v13;
    v18 = v16;
    _R0 = v2[2];
    __asm
      VLDR            S2, [R2]
      VLDR            S0, [R0]
      VCVTR.S32.F32   S0, S0
      VCVTR.S32.F32   S2, S2
      VMOV            R2, S0
      VMOV            R3, S2
    MobEffectInstance::MobEffectInstance((int)&v24, v18, _R2, _R3);
    Mob::addEffect(v3, (const MobEffectInstance *)&v24);
    v22 = Entity::getLevel(v4);
    Level::broadcastEntityEvent(v22, (int)v3, 35, 0);
  }
  return 1;
}


int __fastcall Player::attack(Player *this, Entity *a2)
{
  Entity *v2; // r8@1
  Ability *v4; // r0@3
  Ability *v5; // r0@4
  int result; // r0@4
  Ability *v7; // r0@6
  Ability *v8; // r0@7
  AttributeInstance *v9; // r0@8
  ItemInstance *v14; // r0@8
  int v15; // r0@8
  MobEffectInstance *v18; // r0@11
  int v19; // r0@11
  int v20; // r0@12
  MobEffectInstance *v21; // r0@16
  int v22; // r0@16
  signed int v23; // r1@17
  Mob *v24; // r2@22
  int v25; // r5@23
  Mob *v26; // r2@23
  Entity *v27; // r5@23
  PlayerInventoryProxy **v29; // r9@28
  signed int v30; // r10@30
  void *v31; // r0@32
  int v32; // r0@32
  signed int v33; // r1@32
  AttributeInstance *v34; // r0@36
  void (__fastcall *v37)(Entity *, float *); // r11@38
  float v41; // r1@38
  Level *v43; // r0@41
  void (__fastcall *v45)(Player *, signed int, char *, signed int); // r5@54
  bool v46; // zf@54
  char v47; // [sp+8h] [bp-C0h]@54
  float v48; // [sp+14h] [bp-B4h]@38
  int v49; // [sp+18h] [bp-B0h]@38
  char v50; // [sp+20h] [bp-A8h]@32
  int v51; // [sp+48h] [bp-80h]@32
  int v52; // [sp+50h] [bp-78h]@68
  char v53; // [sp+56h] [bp-72h]@50
  char v54; // [sp+57h] [bp-71h]@46
  void *v55; // [sp+6Ch] [bp-5Ch]@66
  void *ptr; // [sp+7Ch] [bp-4Ch]@64

  v2 = a2;
  _R4 = this;
  if ( Entity::hasCategory((int)a2, 2) != 1
    || Entity::hasCategory((int)v2, 1)
    || (v4 = (Ability *)Abilities::getAbility((int)_R4 + 4320, &Abilities::ATTACK_MOBS), Ability::getBool(v4))
    || (v5 = (Ability *)Abilities::getAbility((int)_R4 + 4320, (int **)&Abilities::WORLDBUILDER),
        result = Ability::getBool(v5),
        result == 1) )
  {
    if ( Entity::hasCategory((int)v2, 1) != 1
      || (v7 = (Ability *)Abilities::getAbility((int)_R4 + 4320, &Abilities::ATTACK_PLAYERS), Ability::getBool(v7))
      || (v8 = (Ability *)Abilities::getAbility((int)_R4 + 4320, (int **)&Abilities::WORLDBUILDER),
          result = Ability::getBool(v8),
          result == 1) )
    {
      v9 = (AttributeInstance *)(*(int (__fastcall **)(Player *, void *))(*(_DWORD *)_R4 + 1000))(
                                  _R4,
                                  &SharedAttributes::ATTACK_DAMAGE);
      _R0 = AttributeInstance::getCurrentValue(v9);
      __asm { VMOV            S16, R0 }
      v14 = (ItemInstance *)PlayerInventoryProxy::getSelectedItem(*((PlayerInventoryProxy **)_R4 + 1188));
      v15 = ItemInstance::getAttackDamage(v14);
      __asm
      {
        VCVTR.S32.F32   S0, S16
        VMOV            R2, S0
      }
      _R6 = v15 + _R2;
      if ( v15 + _R2 == 1 )
        _R6 = 2;
      if ( Mob::hasEffect(_R4, (const MobEffect *)MobEffect::DAMAGE_BOOST) == 1 )
        v18 = (MobEffectInstance *)Mob::getEffect(_R4, (const MobEffect *)MobEffect::DAMAGE_BOOST);
        v19 = MobEffectInstance::getAmplifier(v18);
        if ( v19 >= 0 )
        {
          __asm { VMOV.F32        S2, #1.0 }
          v20 = v19 + 1;
          __asm { VLDR            S0, =1.3 }
          do
          {
            __asm { VMOV            S4, R6 }
            --v20;
            __asm
            {
              VCVT.F32.S32    S4, S4
              VMUL.F32        S4, S4, S0
              VADD.F32        S4, S4, S2
              VCVTR.S32.F32   S4, S4
              VMOV            R6, S4
            }
          }
          while ( !_ZF );
        }
      if ( Mob::hasEffect(_R4, (const MobEffect *)MobEffect::WEAKNESS) == 1 )
        v21 = (MobEffectInstance *)Mob::getEffect(_R4, (const MobEffect *)MobEffect::WEAKNESS);
        v22 = MobEffectInstance::getAmplifier(v21);
        if ( v22 >= 0 )
          v23 = -1;
          __asm
            VLDR            S0, =0.8
            VMOV.F32        S2, #-0.5
          while ( 1 )
              VMOV            S4, R6
            if ( _R6 <= -1 )
              break;
            if ( ++v23 >= v22 )
              goto LABEL_22;
          _R6 = 0;
LABEL_22:
      if ( Entity::hasCategory((int)v2, 2) == 1 )
        v25 = EnchantUtils::getMeleeDamageBonus(v2, _R4, v24);
        EnchantUtils::doPostDamageEffects(v2, _R4, v26);
        _R6 += v25;
        v27 = v2;
      else
        v27 = 0;
      _R7 = (*(int (__fastcall **)(Player *))(*(_DWORD *)_R4 + 848))(_R4);
      result = (*(int (__fastcall **)(Player *))(*(_DWORD *)_R4 + 792))(_R4);
      if ( result )
        ++_R7;
      if ( _R6 >= 1 )
        __asm { VLDR            S0, [R4,#0xE0] }
        v29 = (PlayerInventoryProxy **)((char *)_R4 + 4752);
        __asm
          VCMPE.F32       S0, #0.0
          VMRS            APSR_nzcv, FPSCR
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          v30 = 0;
        else if ( *((_BYTE *)_R4 + 216) )
        else if ( Entity::onLadder(_R4, 1) )
        else if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)_R4 + 208))(_R4) )
        else if ( Mob::hasEffect(_R4, (const MobEffect *)MobEffect::BLINDNESS) )
        else if ( *((_DWORD *)_R4 + 128) )
        else if ( Entity::hasCategory((int)v2, 2) == 1 )
          __asm { VMOV            S2, R6 }
          v30 = 1;
            VMOV.F32        S0, #1.5
            VCVT.F32.S32    S2, S2
            VMUL.F32        S0, S2, S0
            VCVTR.S32.F32   S0, S0
            VMOV            R6, S0
        else
        v31 = PlayerInventoryProxy::getSelectedItem(*v29);
        ItemInstance::ItemInstance((ItemInstance *)&v51, (int)v31);
        EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v50, _R4, 2);
        v32 = Entity::hurt(v2, (const EntityDamageSource *)&v50, _R6, 1, 0);
        v33 = (signed int)v27;
        if ( v27 )
          v33 = 1;
        if ( (v32 & v33) == 1 )
          (*(void (__fastcall **)(Player *, Entity *))(*(_DWORD *)_R4 + 964))(_R4, v27);
          Player::causeFoodExhaustion(_R4, 0.3);
          if ( _R7 >= 1 )
            v34 = (AttributeInstance *)(*(int (__fastcall **)(Entity *, void *))(*(_DWORD *)v27 + 1004))(
                                         v27,
                                         &SharedAttributes::KNOCKBACK_RESISTANCE);
            _R0 = AttributeInstance::getCurrentValue(v34);
              VMOV.F32        S2, #1.0
              VMOV            S0, R0
              VCMPE.F32       S0, S2
              VMRS            APSR_nzcv, FPSCR
            if ( _NF ^ _VF )
              __asm
              {
                VLDR            S16, =0.0055556
                VLDR            S0, [R4,#0x7C]
                VMUL.F32        S0, S0, S16
              }
              _R0 = &mce::Math::PI;
              v37 = *(void (__fastcall **)(Entity *, float *))(*(_DWORD *)v2 + 276);
                VLDR            S18, [R0]
                VMUL.F32        S0, S0, S18
                VMOV            R0, S0
              _R5 = mce::Math::sin(_R0, *(float *)v2);
                VMOV            S0, R7
                VCVT.F32.S32    S16, S0
              _R0 = mce::Math::cos(_R0, v41);
                VMOV.F32        S4, #-0.5
                VMOV.F32        S6, #0.5
                VMOV            S2, R0
                VMOV            S0, R5
                VMUL.F32        S4, S16, S4
                VMUL.F32        S6, S16, S6
                VMUL.F32        S0, S4, S0
                VMUL.F32        S2, S6, S2
                VSTR            S0, [SP,#0xC8+var_B4]
              v49 = 1036831949;
              __asm { VSTR            S2, [SP,#0xC8+var_AC] }
              v37(v2, &v48);
              VLDR            S0, =0.6
              VLDR            S2, [R4,#0x6C]
              VMUL.F32        S2, S2, S0
              VSTR            S2, [R4,#0x6C]
              VLDR            S2, [R4,#0x74]
              VMUL.F32        S0, S2, S0
              VSTR            S0, [R4,#0x74]
            (*(void (__fastcall **)(Player *, _DWORD))(*(_DWORD *)_R4 + 796))(_R4, 0);
          if ( Entity::hasCategory((int)v2, 1) == 1 )
            v43 = (Level *)Entity::getLevel(v2);
            if ( !Level::isClientSide(v43) )
              if ( *((_BYTE *)v2 + 425) )
                Entity::sendMotionToServer(v2, 1);
          if ( v30 == 1 )
            (*(void (__fastcall **)(Player *, Entity *))(*(_DWORD *)_R4 + 1436))(_R4, v2);
          _ZF = v54 == 0;
          if ( v54 )
            _ZF = v51 == 0;
          if ( !_ZF
            && !ItemInstance::isNull((ItemInstance *)&v51)
            && v53
            && Entity::hasCategory((int)v2, 2) == 1
            && !(*(int (__fastcall **)(Player *))(*(_DWORD *)_R4 + 652))(_R4) )
            ItemInstance::hurtEnemy((ItemInstance *)&v51, v2, _R4);
            PlayerInventoryProxy::setSelectedItem(*v29, (const ItemInstance *)&v51);
          v45 = *(void (__fastcall **)(Player *, signed int, char *, signed int))(*(_DWORD *)_R4 + 556);
          Entity::getAttachPos((AABB *)&v47, (int)v2, 1, 0);
          v45(_R4, 41, &v47, -1);
          v46 = v54 == 0;
            v46 = v51 == 0;
          if ( !v46
        if ( _R6 >= 18 )
          MinecraftEventing::fireEventAwardAchievement((int)_R4, 30);
        EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v50);
        if ( ptr )
          operator delete(ptr);
        if ( v55 )
          operator delete(v55);
        result = v52;
        if ( v52 )
          result = (*(int (__cdecl **)(int))(*(_DWORD *)v52 + 4))(v52);
    }
  }
  return result;
}


signed int __fastcall Player::getEntityTypeId(Player *this)
{
  return 319;
}


void __fastcall Player::getInteractText(Player *this, int a2)
{
  int *v2; // r4@1
  int **v3; // r0@1

  v2 = (int *)this;
  v3 = (int **)SynchedEntityData::getString((SynchedEntityData *)(a2 + 176), 40);
  I18n::get(v2, v3);
}


int __fastcall Player::setAgent(Player *this, Agent *a2)
{
  Player *v2; // r5@1
  char *v3; // r6@1
  Agent *v4; // r4@1
  int (__fastcall *v5)(Agent *); // r6@2
  __int64 v6; // r2@2
  int result; // r0@2

  v2 = this;
  v3 = (char *)this + 4984;
  v4 = a2;
  if ( a2 )
  {
    *(_QWORD *)v3 = *(_QWORD *)Entity::getUniqueID(a2);
    v5 = *(int (__fastcall **)(Agent *))(*(_DWORD *)v4 + 348);
    v6 = *(_QWORD *)Entity::getUniqueID(v2);
    result = v5(v4);
  }
  else
    result = -1;
    *(_DWORD *)v3 = -1;
    *((_DWORD *)v2 + 1247) = -1;
  return result;
}


signed int __fastcall Player::take(Player *this, Entity *a2, int a3)
{
  Entity *v3; // r5@1
  Player *v4; // r4@1
  Level *v5; // r0@1
  signed int v6; // r4@2
  int v7; // r6@6
  int v8; // r0@6
  bool v9; // zf@13
  int v11; // r0@64
  __int64 v12; // [sp+0h] [bp-2B0h]@64
  __int64 v13; // [sp+8h] [bp-2A8h]@64
  void **v14; // [sp+10h] [bp-2A0h]@64
  int v15; // [sp+14h] [bp-29Ch]@64
  int v16; // [sp+18h] [bp-298h]@64
  char v17; // [sp+1Ch] [bp-294h]@64
  __int64 v18; // [sp+20h] [bp-290h]@64
  __int64 v19; // [sp+28h] [bp-288h]@64
  __int16 v20; // [sp+35h] [bp-27Bh]@19
  char v21; // [sp+37h] [bp-279h]@19
  int v22; // [sp+38h] [bp-278h]@19
  char v23; // [sp+3Ch] [bp-274h]@19
  __int16 v24; // [sp+3Dh] [bp-273h]@19
  char v25; // [sp+3Fh] [bp-271h]@19
  int v26; // [sp+40h] [bp-270h]@19
  int v27; // [sp+44h] [bp-26Ch]@19
  int v28; // [sp+48h] [bp-268h]@19
  int v29; // [sp+50h] [bp-260h]@29
  void *v30; // [sp+6Ch] [bp-244h]@27
  void *v31; // [sp+7Ch] [bp-234h]@25
  int v32; // [sp+90h] [bp-220h]@19
  int v33; // [sp+98h] [bp-218h]@23
  void *v34; // [sp+B4h] [bp-1FCh]@21
  void *v35; // [sp+C4h] [bp-1ECh]@19
  __int16 v36; // [sp+DDh] [bp-1D3h]@41
  char v37; // [sp+DFh] [bp-1D1h]@41
  int v38; // [sp+E0h] [bp-1D0h]@41
  char v39; // [sp+E4h] [bp-1CCh]@41
  __int16 v40; // [sp+E5h] [bp-1CBh]@41
  char v41; // [sp+E7h] [bp-1C9h]@41
  int v42; // [sp+E8h] [bp-1C8h]@41
  int v43; // [sp+ECh] [bp-1C4h]@41
  int v44; // [sp+F0h] [bp-1C0h]@41
  int v45; // [sp+F8h] [bp-1B8h]@51
  void *v46; // [sp+114h] [bp-19Ch]@49
  void *v47; // [sp+124h] [bp-18Ch]@47
  int v48; // [sp+138h] [bp-178h]@41
  int v49; // [sp+140h] [bp-170h]@45
  void *v50; // [sp+15Ch] [bp-154h]@43
  void *v51; // [sp+16Ch] [bp-144h]@41
  char v52; // [sp+180h] [bp-130h]@41
  int v53; // [sp+188h] [bp-128h]@57
  void *v54; // [sp+1A4h] [bp-10Ch]@55
  void *v55; // [sp+1B4h] [bp-FCh]@53
  char v56; // [sp+1C8h] [bp-E8h]@18
  int v57; // [sp+1D0h] [bp-E0h]@69
  char v58; // [sp+1D6h] [bp-DAh]@41
  void *v59; // [sp+1ECh] [bp-C4h]@67
  void *v60; // [sp+1FCh] [bp-B4h]@65
  char v61; // [sp+210h] [bp-A0h]@6
  int v62; // [sp+218h] [bp-98h]@10
  void *v63; // [sp+234h] [bp-7Ch]@8
  void *ptr; // [sp+244h] [bp-6Ch]@6
  int v65; // [sp+258h] [bp-58h]@3
  int v66; // [sp+260h] [bp-50h]@37
  char v67; // [sp+266h] [bp-4Ah]@17
  char v68; // [sp+267h] [bp-49h]@13
  void *v69; // [sp+27Ch] [bp-34h]@35
  void *v70; // [sp+28Ch] [bp-24h]@33

  v3 = a2;
  v4 = this;
  v5 = (Level *)Entity::getLevel(this);
  if ( Level::isClientSide(v5) )
  {
    v6 = 0;
  }
  else
    ItemInstance::ItemInstance((int)&v65);
    if ( Entity::hasCategory((int)v3, 1024) == 1 )
    {
      ItemInstance::operator=((int)&v65, (int)v3 + 3416);
    }
    else if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 488))(v3) == 4194384 )
      v7 = Item::mArrow;
      v8 = Arrow::getAuxValue(v3);
      ItemInstance::ItemInstance((ItemInstance *)&v61, v7, 1, v8);
      ItemInstance::operator=((int)&v65, (int)&v61);
      if ( ptr )
        operator delete(ptr);
      if ( v63 )
        operator delete(v63);
      if ( v62 )
        (*(void (**)(void))(*(_DWORD *)v62 + 4))();
      v62 = 0;
    v9 = v68 == 0;
    if ( v68 )
      v9 = v65 == 0;
    if ( v9 || ItemInstance::isNull((ItemInstance *)&v65) || !v67 )
      v6 = 0;
    else
      ItemInstance::ItemInstance((ItemInstance *)&v56, (int)&v65);
      if ( PlayerInventoryProxy::add(*((PlayerInventoryProxy **)v4 + 1188), (ItemInstance *)&v65, 1) )
      {
        v22 = 2;
        v23 = -1;
        v25 = v21;
        v24 = v20;
        v26 = 0;
        v27 = 1;
        ItemInstance::ItemInstance((ItemInstance *)&v28, (int)&v56);
        ItemInstance::ItemInstance((ItemInstance *)&v32, (int)&ItemInstance::EMPTY_ITEM);
        InventoryTransactionManager::addAction((int)v4 + 5152, (int)&v22);
        if ( v35 )
          operator delete(v35);
        if ( v34 )
          operator delete(v34);
        if ( v33 )
          (*(void (**)(void))(*(_DWORD *)v33 + 4))();
        v33 = 0;
        if ( v31 )
          operator delete(v31);
        if ( v30 )
          operator delete(v30);
        if ( v29 )
          (*(void (**)(void))(*(_DWORD *)v29 + 4))();
        v29 = 0;
      }
      else
        if ( ItemInstance::operator!=((ItemInstance *)&v56, (ItemInstance *)&v65) == 1 )
        {
          ItemInstance::ItemInstance((ItemInstance *)&v52, (int)&v56);
          ItemInstance::set((ItemInstance *)&v52, (unsigned __int8)(v58 - v67));
          v38 = 2;
          v39 = -1;
          v41 = v37;
          v40 = v36;
          v42 = 0;
          v43 = 1;
          ItemInstance::ItemInstance((ItemInstance *)&v44, (int)&v52);
          ItemInstance::ItemInstance((ItemInstance *)&v48, (int)&ItemInstance::EMPTY_ITEM);
          InventoryTransactionManager::addAction((int)v4 + 5152, (int)&v38);
          if ( v51 )
            operator delete(v51);
          if ( v50 )
            operator delete(v50);
          if ( v49 )
            (*(void (**)(void))(*(_DWORD *)v49 + 4))();
          v49 = 0;
          if ( v47 )
            operator delete(v47);
          if ( v46 )
            operator delete(v46);
          if ( v45 )
            (*(void (**)(void))(*(_DWORD *)v45 + 4))();
          v45 = 0;
          if ( v55 )
            operator delete(v55);
          if ( v54 )
            operator delete(v54);
          if ( v53 )
            (*(void (**)(void))(*(_DWORD *)v53 + 4))();
        }
        if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)v4 + 652))(v4) )
          ItemInstance::operator=((int)&v65, (int)&ItemInstance::EMPTY_ITEM);
        else
          (*(void (__fastcall **)(Player *, int *, _DWORD))(*(_DWORD *)v4 + 664))(v4, &v65, 0);
      if ( ItemInstance::operator==((ItemInstance *)&v56, (ItemInstance *)&v65) )
        v6 = 0;
        Entity::getRuntimeID((Entity *)&v13, (int)v3);
        Entity::getRuntimeID((Entity *)&v12, (int)v4);
        v15 = 2;
        v16 = 1;
        v17 = 0;
        v14 = &off_26E9454;
        v18 = v13;
        v19 = v12;
        v11 = BlockSource::getDimension(*((BlockSource **)v4 + 1158));
        (*(void (**)(void))(*(_DWORD *)v11 + 212))();
        v6 = 1;
      if ( v60 )
        operator delete(v60);
      if ( v59 )
        operator delete(v59);
      if ( v57 )
        (*(void (**)(void))(*(_DWORD *)v57 + 4))();
    if ( v70 )
      operator delete(v70);
    if ( v69 )
      operator delete(v69);
    if ( v66 )
      (*(void (**)(void))(*(_DWORD *)v66 + 4))();
  return v6;
}


int __fastcall Player::getItemUseIntervalProgress(Player *this)
{
  Player *v1; // r4@1
  signed int v2; // r0@1
  signed int v7; // r0@2
  int result; // r0@4

  v1 = this;
  v2 = ItemInstance::isNull((Player *)((char *)this + 4832));
  __asm { VLDR            S0, =0.0 }
  if ( !v2 )
  {
    v7 = *((_DWORD *)v1 + 1226);
    if ( v7 - 25 <= -1 )
    {
      __asm { VMOV.F32        S0, #0.25 }
      _R0 = v7 % 4;
      __asm
      {
        VMOV            S2, R0
        VCVT.F32.S32    S2, S2
        VMUL.F32        S0, S2, S0
      }
    }
  }
  __asm { VMOV            R0, S0 }
  return result;
}


char *__fastcall Player::getFilteredCreativeItemList(Player *this)
{
  return (char *)this + 4772;
}


PlayerChunkSource *__fastcall Player::suspendRegion(Player *this)
{
  PlayerChunkSource *result; // r0@1

  result = (PlayerChunkSource *)*((_DWORD *)this + 1156);
  if ( result )
    result = (PlayerChunkSource *)j_j_j__ZN17PlayerChunkSource7suspendEv(result);
  else
    JUMPOUT(0, Player::_fireWillChangeDimension);
  return result;
}


signed int __fastcall Player::hasRespawnPosition(Player *this)
{
  signed int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 1301);
  result = 0;
  if ( v1 > -1 )
    result = 1;
  return result;
}


int __fastcall Player::onBounceStarted(int result, const BlockPos *a2, const FullBlock *a3)
{
  *(_DWORD *)(result + 4928) = *(_DWORD *)a2;
  *(_DWORD *)(result + 4932) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 4936) = *((_DWORD *)a2 + 2);
  *(_BYTE *)(result + 4940) = *(_BYTE *)a3;
  *(_BYTE *)(result + 4941) = *((_BYTE *)a3 + 1);
  return result;
}


void __fastcall Player::updateTrackedBosses(Player *this)
{
  Entity *v1; // r5@1
  unsigned __int64 *v2; // r8@1
  unsigned __int64 *v3; // r7@1
  char *v4; // r10@1
  char *v5; // r4@1
  int v6; // r11@2
  int v7; // r0@3
  signed int v8; // r0@6
  char *v9; // r6@6
  int v10; // r10@6
  unsigned int v11; // r1@6
  unsigned int v12; // r0@8
  unsigned int v13; // r9@8
  unsigned int v14; // r1@16
  int v15; // r3@17
  int v16; // r2@17
  unsigned int v17; // r0@18
  char *v18; // r6@27
  __int64 v19; // r2@28
  int v20; // r0@28

  v1 = this;
  v2 = (unsigned __int64 *)*((_DWORD *)this + 1243);
  v3 = (unsigned __int64 *)*((_DWORD *)this + 1242);
  v4 = 0;
  v5 = 0;
  if ( v3 != v2 )
  {
    v6 = 0;
    v4 = 0;
    v5 = 0;
    do
    {
      v7 = Entity::getLevel(v1);
      if ( !Level::fetchEntity(v7, 0, *v3, *v3 >> 32, 0) )
      {
        if ( v4 == (char *)v6 )
        {
          v8 = v4 - v5;
          v9 = 0;
          v10 = (v4 - v5) >> 3;
          v11 = v10;
          if ( !(v8 >> 3) )
            v11 = 1;
          v12 = v11 + (v8 >> 3);
          v13 = v12;
          if ( 0 != v12 >> 29 )
            v13 = 0x1FFFFFFF;
          if ( v12 < v11 )
          if ( v13 )
          {
            if ( v13 >= 0x20000000 )
              sub_21E57F4();
            v9 = (char *)operator new(8 * v13);
          }
          *(_QWORD *)&v9[8 * v10] = *v3;
          if ( v5 == (char *)v6 )
            v5 = (char *)v6;
            v17 = (unsigned int)v9;
          else
            v14 = 0;
            do
            {
              v15 = *(_DWORD *)&v5[v14 + 4];
              *(_DWORD *)&v9[v14] = *(_DWORD *)&v5[v14];
              v16 = (int)&v9[v14];
              v14 += 8;
              *(_DWORD *)(v16 + 4) = v15;
            }
            while ( v6 - (_DWORD)v5 != v14 );
            v17 = (unsigned int)&v9[((v6 - 8 - (_DWORD)v5) & 0xFFFFFFF8) + 8];
          v4 = (char *)(v17 + 8);
          if ( v5 )
            operator delete(v5);
          v6 = (int)&v9[8 * v13];
          v5 = v9;
        }
        else
          *(_QWORD *)v4 = *v3;
          v4 += 8;
      }
      ++v3;
    }
    while ( v3 != v2 );
  }
  if ( v5 != v4 )
    v18 = v5;
      v19 = *(_QWORD *)v18;
      (*(void (__fastcall **)(Entity *))(*(_DWORD *)v1 + 1428))(v1);
      v20 = Entity::getLevel(v1);
      Level::broadcastBossEvent(v20);
      v18 += 8;
    while ( v4 != v18 );
  if ( v5 )
    j_j_j__ZdlPv_6(v5);
}


char *__fastcall Player::getEquippedTotem(Player *this)
{
  Player *v1; // r4@1
  char *v2; // r0@1
  char *v3; // r5@1
  int v4; // r0@1
  bool v5; // zf@1
  ItemInstance *v6; // r5@7
  void **v7; // r0@10
  PlayerInventoryProxy **v8; // r4@14

  v1 = this;
  v2 = Mob::getOffhandSlot(this);
  v3 = v2;
  v4 = (unsigned __int8)v2[15];
  v5 = v4 == 0;
  if ( v4 )
    v5 = *(_DWORD *)v3 == 0;
  if ( !v5 && !ItemInstance::isNull((ItemInstance *)v3) && v3[14] && *(_DWORD *)v3 == Item::mTotem )
    return v3;
  v6 = (ItemInstance *)PlayerInventoryProxy::getSelectedItem(*((PlayerInventoryProxy **)v1 + 1188));
  if ( !*((_BYTE *)v6 + 15) )
  {
    v7 = &ItemInstance::EMPTY_ITEM;
    return (char *)*v7;
  }
  if ( !*(_DWORD *)v6 )
  if ( ItemInstance::isNull(v6) )
  if ( !*((_BYTE *)v6 + 14) )
  v8 = (PlayerInventoryProxy **)((char *)v1 + 4752);
  if ( *(_DWORD *)PlayerInventoryProxy::getSelectedItem(*v8) != Item::mTotem )
  return (char *)PlayerInventoryProxy::getSelectedItem(*v8);
}


int __fastcall Player::canBePulledIntoVehicle(Player *this)
{
  return 0;
}


int __fastcall Player::getPreviousTickSleepTimer(Player *this)
{
  int result; // r0@1

  result = *((_WORD *)this + 2454) - 1;
  if ( result <= 0 )
    result = 0;
  return result;
}


int __fastcall Player::jumpFromGround(Player *this)
{
  Player *v1; // r4@1
  Level *v2; // r0@1
  int result; // r0@2
  int v4; // [sp+0h] [bp-40h]@2
  void **v5; // [sp+8h] [bp-38h]@2
  int v6; // [sp+Ch] [bp-34h]@2
  int v7; // [sp+10h] [bp-30h]@2
  char v8; // [sp+14h] [bp-2Ch]@2
  int v9; // [sp+18h] [bp-28h]@2
  int v10; // [sp+1Ch] [bp-24h]@2
  int v11; // [sp+20h] [bp-20h]@2
  int v12; // [sp+24h] [bp-1Ch]@2
  int v13; // [sp+28h] [bp-18h]@2
  __int64 v14; // [sp+30h] [bp-10h]@2

  v1 = this;
  Mob::jumpFromGround(this);
  v2 = (Level *)Entity::getLevel(v1);
  if ( Level::isClientSide(v2) )
  {
    Entity::getRuntimeID((Entity *)&v4, (int)v1);
    v6 = 2;
    v7 = 1;
    v8 = 0;
    v5 = &off_26DA670;
    v11 = 0;
    v12 = 0;
    v9 = 0;
    v10 = 0;
    v13 = 8;
    v14 = *(_QWORD *)&v4;
    result = (*(int (**)(void))(**((_DWORD **)v1 + 1231) + 8))();
  }
  else
    result = j_j_j__ZN6Player17handleJumpEffectsEv(v1);
  return result;
}


int __fastcall Player::_updateInteraction(Player *this)
{
  Player *v1; // r4@1
  Level *v2; // r5@1
  int v3; // r1@1
  Entity *v4; // r10@2
  ItemInstance *v5; // r7@4
  signed int v6; // r5@5 OVERLAPPED
  signed int v7; // r6@5 OVERLAPPED
  char v8; // r2@7
  int v9; // r0@9
  char v10; // r1@9
  _BYTE *v11; // r9@11
  int v12; // r0@11
  int v13; // r7@11
  char *v14; // r0@14
  __int64 v15; // r1@14
  int v16; // r0@14
  int v17; // r6@15
  signed int v18; // r0@18
  int *v19; // r6@20
  int v20; // r7@20
  _DWORD *v21; // r0@21
  size_t v22; // r2@21
  unsigned int v23; // r0@23
  unsigned int v24; // r1@23
  int v25; // r6@28
  _DWORD *v26; // r0@29
  size_t v27; // r2@29
  unsigned int v28; // r0@31
  unsigned int v29; // r1@31
  char *v30; // r0@36
  char *v31; // r0@39
  char *v32; // r2@40
  signed int v33; // r1@42
  int v34; // r0@52
  int v35; // r5@55
  _DWORD *v36; // r0@56
  size_t v37; // r2@56
  unsigned int v38; // r0@58
  unsigned int v39; // r1@58
  int v40; // r5@68
  _DWORD *v41; // r0@69
  size_t v42; // r2@69
  unsigned int v43; // r0@71
  unsigned int v44; // r1@71
  int result; // r0@77
  unsigned int *v46; // r2@78
  signed int v47; // r1@80
  Level *v48; // [sp+4h] [bp-B4h]@4
  void **v49; // [sp+8h] [bp-B0h]@52
  int v50; // [sp+Ch] [bp-ACh]@52
  int v51; // [sp+10h] [bp-A8h]@52
  char v52; // [sp+14h] [bp-A4h]@52
  char v53; // [sp+15h] [bp-A3h]@52
  int v54; // [sp+18h] [bp-A0h]@52
  int v55; // [sp+1Ch] [bp-9Ch]@52
  __int64 v56; // [sp+20h] [bp-98h]@52
  int v57; // [sp+28h] [bp-90h]@52
  void *v58; // [sp+38h] [bp-80h]@68
  void *v59; // [sp+3Ch] [bp-7Ch]@55
  int v60; // [sp+40h] [bp-78h]@14
  int v61; // [sp+44h] [bp-74h]@14
  void **v62; // [sp+48h] [bp-70h]@14
  signed int v63; // [sp+4Ch] [bp-6Ch]@14
  signed int v64; // [sp+50h] [bp-68h]@14
  char v65; // [sp+54h] [bp-64h]@14
  char v66; // [sp+55h] [bp-63h]@14
  int v67; // [sp+58h] [bp-60h]@14
  int v68; // [sp+5Ch] [bp-5Ch]@14
  __int64 v69; // [sp+60h] [bp-58h]@14
  int v70; // [sp+68h] [bp-50h]@14
  void *s2; // [sp+74h] [bp-44h]@28
  int v72; // [sp+78h] [bp-40h]@19
  void (*v73)(void); // [sp+84h] [bp-34h]@37

  v1 = this;
  v2 = (Level *)Entity::getLevel(this);
  if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)v1 + 1408))(v1) == 1 )
    v4 = (Entity *)*((_DWORD *)Level::getHitResult(v2) + 8);
  else
    v4 = (Entity *)Level::fetchEntity((int)v2, v3, *((_DWORD *)v1 + 1150), *((_DWORD *)v1 + 1151), 0);
  v48 = v2;
  v5 = (ItemInstance *)PlayerInventoryProxy::getSelectedItem(*((PlayerInventoryProxy **)v1 + 1188));
  if ( v4 )
  {
    *(_QWORD *)&v6 = *(_QWORD *)Entity::getUniqueID(v4);
  }
    v6 = -1;
    v7 = -1;
  v8 = *((_BYTE *)v1 + 4910);
  if ( *((_QWORD *)v1 + 614) != __PAIR__(v7, v6) )
    v8 |= 1u;
  *((_BYTE *)v1 + 4910) = v8;
  v9 = ItemInstance::getIdAux(v5);
  v10 = *((_BYTE *)v1 + 4910);
  if ( v9 != *((_DWORD *)v1 + 1230) )
    v10 |= 1u;
  *((_BYTE *)v1 + 4910) = v10;
  *((_DWORD *)v1 + 1229) = v7;
  *((_DWORD *)v1 + 1228) = v6;
  *((_DWORD *)v1 + 1230) = ItemInstance::getIdAux(v5);
  v11 = (char *)v1 + 4910;
  v12 = Level::isClientSide(v48);
  v13 = v12;
  if ( !v4 )
    v17 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v1 + 908))(v1);
    if ( *(_BYTE *)(v17 + 15) )
    {
      if ( *(_DWORD *)v17 )
      {
        if ( ItemInstance::isNull((ItemInstance *)v17) )
        {
          v18 = 0;
        }
        else
          v18 = *(_BYTE *)(v17 + 14);
          if ( *(_BYTE *)(v17 + 14) )
            v18 = 1;
      }
      else
        v18 = 0;
    }
    else
      v18 = 0;
    if ( v13 )
      if ( v18 == 1 && (*(int (**)(void))(**(_DWORD **)v17 + 120))() == 1 && *v11 )
        v50 = 2;
        v51 = 1;
        v52 = 0;
        v49 = &off_26DFA88;
        v53 = 4;
        v54 = 0;
        v55 = 0;
        v57 = dword_2822498;
        v56 = *(_QWORD *)&Vec3::ZERO;
        v34 = Level::getPacketSender(v48);
        (*(void (**)(void))(*(_DWORD *)v34 + 8))();
      goto LABEL_77;
    if ( v18 != 1 || (*(int (**)(void))(**(_DWORD **)v17 + 120))() != 1 )
      sub_21E94B4(&v58, (const char *)&unk_257BC67);
      v40 = SynchedEntityData::_get((Player *)((char *)v1 + 176), 40);
      if ( *(_BYTE *)(v40 + 4) == 4 )
        v41 = *(_DWORD **)(v40 + 12);
        v42 = *(v41 - 3);
        if ( v42 != *((_DWORD *)v58 - 3) || memcmp(v41, v58, v42) )
          EntityInteraction::setInteractText((int *)(v40 + 12), (int *)&v58);
          *(_BYTE *)(v40 + 8) = 1;
          v43 = *(_WORD *)(v40 + 6);
          v44 = *((_WORD *)v1 + 94);
          if ( v44 >= v43 )
            LOWORD(v44) = *(_WORD *)(v40 + 6);
          *((_WORD *)v1 + 94) = v44;
          if ( *((_WORD *)v1 + 95) > v43 )
            LOWORD(v43) = *((_WORD *)v1 + 95);
          *((_WORD *)v1 + 95) = v43;
      v31 = (char *)v58 - 12;
      if ( (int *)((char *)v58 - 12) == &dword_28898C0 )
        goto LABEL_77;
      v32 = (char *)v58 - 4;
      if ( !&pthread_create )
        goto LABEL_86;
      __dmb();
      do
        v33 = __ldrex((unsigned int *)v32);
      while ( __strex(v33 - 1, (unsigned int *)v32) );
      (*(void (__fastcall **)(void **))(**(_DWORD **)v17 + 236))(&v59);
      v35 = SynchedEntityData::_get((Player *)((char *)v1 + 176), 40);
      if ( *(_BYTE *)(v35 + 4) == 4 )
        v36 = *(_DWORD **)(v35 + 12);
        v37 = *(v36 - 3);
        if ( v37 != *((_DWORD *)v59 - 3) || memcmp(v36, v59, v37) )
          EntityInteraction::setInteractText((int *)(v35 + 12), (int *)&v59);
          *(_BYTE *)(v35 + 8) = 1;
          v38 = *(_WORD *)(v35 + 6);
          v39 = *((_WORD *)v1 + 94);
          if ( v39 >= v38 )
            LOWORD(v39) = *(_WORD *)(v35 + 6);
          *((_WORD *)v1 + 94) = v39;
          if ( *((_WORD *)v1 + 95) > v38 )
            LOWORD(v38) = *((_WORD *)v1 + 95);
          *((_WORD *)v1 + 95) = v38;
      v31 = (char *)v59 - 12;
      if ( (int *)((char *)v59 - 12) == &dword_28898C0 )
      v32 = (char *)v59 - 4;
LABEL_87:
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
    goto LABEL_77;
  if ( v12 )
    if ( *v11 )
      Entity::getRuntimeID((Entity *)&v60, (int)v4);
      v14 = Level::getHitResult(v48);
      v63 = 2;
      v64 = 1;
      v65 = 0;
      v62 = &off_26DFA88;
      v66 = 4;
      v67 = v60;
      v68 = v61;
      v15 = *(_QWORD *)(v14 + 20);
      v70 = *((_DWORD *)v14 + 7);
      v69 = v15;
      v16 = Level::getPacketSender(v48);
      (*(void (**)(void))(*(_DWORD *)v16 + 8))();
  EntityInteraction::EntityInteraction((int)&v72, 1);
  if ( (*(int (__fastcall **)(Entity *, Player *, int *, char *))(*(_DWORD *)v4 + 668))(v4, v1, &v72, (char *)v1 + 4608) == 1 )
    v19 = (int *)EntityInteraction::getInteractText((EntityInteraction *)&v72);
    v20 = SynchedEntityData::_get((Player *)((char *)v1 + 176), 40);
    if ( *(_BYTE *)(v20 + 4) == 4 )
      v21 = *(_DWORD **)(v20 + 12);
      v22 = *(v21 - 3);
      if ( v22 != *(_DWORD *)(*v19 - 12) || memcmp(v21, (const void *)*v19, v22) )
        EntityInteraction::setInteractText((int *)(v20 + 12), v19);
        *(_BYTE *)(v20 + 8) = 1;
        v23 = *(_WORD *)(v20 + 6);
        v24 = *((_WORD *)v1 + 94);
        if ( v24 >= v23 )
          LOWORD(v24) = *(_WORD *)(v20 + 6);
        *((_WORD *)v1 + 94) = v24;
        if ( *((_WORD *)v1 + 95) > v23 )
          LOWORD(v23) = *((_WORD *)v1 + 95);
        *((_WORD *)v1 + 95) = v23;
    sub_21E94B4(&s2, (const char *)&unk_257BC67);
    v25 = SynchedEntityData::_get((Player *)((char *)v1 + 176), 40);
    if ( *(_BYTE *)(v25 + 4) == 4 )
      v26 = *(_DWORD **)(v25 + 12);
      v27 = *(v26 - 3);
      if ( v27 != *((_DWORD *)s2 - 3) || memcmp(v26, s2, v27) )
        EntityInteraction::setInteractText((int *)(v25 + 12), (int *)&s2);
        *(_BYTE *)(v25 + 8) = 1;
        v28 = *(_WORD *)(v25 + 6);
        v29 = *((_WORD *)v1 + 94);
        if ( v29 >= v28 )
          LOWORD(v29) = *(_WORD *)(v25 + 6);
        *((_WORD *)v1 + 94) = v29;
        if ( *((_WORD *)v1 + 95) > v28 )
          LOWORD(v28) = *((_WORD *)v1 + 95);
        *((_WORD *)v1 + 95) = v28;
    v30 = (char *)s2 - 12;
    if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
      v46 = (unsigned int *)((char *)s2 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j__ZdlPv_9(v30);
  if ( v73 )
    v73();
  v31 = (char *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v32 = (char *)(v72 - 4);
    if ( &pthread_create )
      goto LABEL_87;
LABEL_86:
    v33 = (*(_DWORD *)v32)--;
    goto LABEL_87;
LABEL_77:
  result = 0;
  *v11 = 0;
  return result;
}


int __fastcall Player::releaseUsingItem(Player *this)
{
  Player *v1; // r4@1
  ItemInstance *v2; // r5@1

  v1 = this;
  v2 = (Player *)((char *)this + 4832);
  if ( !ItemInstance::isNull((Player *)((char *)this + 4832)) )
    ItemInstance::releaseUsing(v2, v1, *((_DWORD *)v1 + 1226));
  return j_j_j__ZN6Player13stopUsingItemEv(v1);
}


signed int __fastcall Player::checkBed(Player *this, int a2)
{
  Player *v2; // r4@1
  BlockSourceListener *v3; // r5@2
  int v4; // r0@2
  BlockSource *v5; // r0@2
  Block *v6; // r0@2
  signed int v7; // r4@2
  Block *v8; // r0@3
  char v10; // [sp+8h] [bp-80h]@2

  v2 = this;
  if ( a2 == 1 )
  {
    v3 = (BlockSourceListener *)Entity::getLevel(this);
    v4 = Entity::getDimension(v2);
    v5 = (BlockSource *)BlockSource::BlockSource((int)&v10, v3, v4, *((_DWORD *)v2 + 1157), 1, 0);
    v6 = (Block *)BlockSource::getBlock(v5, (Player *)((char *)v2 + 4636));
    v7 = Block::isType(v6, (const Block *)Block::mBed);
    BlockSource::~BlockSource((BlockSource *)&v10);
  }
  else
    v8 = (Block *)BlockSource::getBlock(*((BlockSource **)this + 1158), (Player *)((char *)this + 4636));
    v7 = Block::isType(v8, (const Block *)Block::mBed);
  return v7;
}


int __fastcall Player::tickWorld(Entity *this, __int64 *a2)
{
  Entity *v2; // r4@1
  Level *v3; // r0@2
  int v4; // r1@3
  char *v5; // r8@4
  int v6; // r11@4
  int i; // r7@5
  __int64 v8; // kr00_8@5
  int v9; // r5@6
  void (__fastcall *v10)(int *, int, int, int); // r10@6
  BlockSource *v11; // r0@6
  int v12; // r0@6
  int v13; // r0@7
  char *v14; // r0@10
  char *v15; // r7@10
  int v16; // r0@10
  int v17; // r5@12
  void (__fastcall *v18)(int *, int, char *, int); // r9@12
  BlockSource *v19; // r0@12
  int v20; // r0@12
  int v21; // r0@13
  _DWORD *v22; // r9@16
  int v23; // r0@17
  __int64 v24; // r2@17
  void (__fastcall *v25)(LevelChunk **); // r5@17
  char *v26; // r0@18
  char v27; // r1@18
  char v28; // r0@19
  Level *v29; // r0@21
  Level *v30; // r0@22
  LevelChunk *v31; // r6@23
  BlockSource *v32; // r0@23
  LevelChunk *v33; // r6@25
  int v34; // r0@25
  int v35; // r10@26
  unsigned int *v36; // r1@27
  unsigned int v37; // r0@29
  unsigned int *v38; // r6@33
  unsigned int v39; // r0@35
  BlockSource *v40; // r0@41
  Level *v41; // r0@41
  unsigned __int64 *v42; // r6@49
  int v43; // r0@49
  int v44; // r0@49
  Entity *v45; // r5@49
  int result; // r0@55
  __int64 *v52; // [sp+4h] [bp-5Ch]@1
  int v53; // [sp+8h] [bp-58h]@16
  int v54; // [sp+10h] [bp-50h]@17
  int v55; // [sp+14h] [bp-4Ch]@17
  LevelChunk *v56; // [sp+18h] [bp-48h]@17
  int v57; // [sp+1Ch] [bp-44h]@26
  int v58; // [sp+20h] [bp-40h]@16
  int v59; // [sp+24h] [bp-3Ch]@17
  int v60; // [sp+2Ch] [bp-34h]@12
  int v61; // [sp+30h] [bp-30h]@6
  char *v62; // [sp+34h] [bp-2Ch]@3
  int v63; // [sp+38h] [bp-28h]@3

  v2 = this;
  v52 = a2;
  if ( *((_BYTE *)this + 4672) )
  {
    v3 = (Level *)Entity::getLevel(this);
    if ( !Level::isClientSide(v3) )
    {
      v4 = *((_DWORD *)v2 + 1188);
      PlayerInventoryProxy::getAllContainerIds((PlayerInventoryProxy *)&v62);
      if ( v63 )
      {
        v5 = v62;
        v6 = (int)&v62[v63];
        do
        {
          v8 = *(_QWORD *)PlayerInventoryProxy::getComplexItems(*((_DWORD *)v2 + 1188), *v5);
          for ( i = v8; HIDWORD(v8) != i; i += 72 )
          {
            v9 = *(_DWORD *)i;
            v10 = *(void (__fastcall **)(int *, int, int, int))(**(_DWORD **)i + 276);
            v11 = (BlockSource *)Entity::getRegion(v2);
            v12 = BlockSource::getLevel(v11);
            v10(&v61, v9, i, v12);
            if ( v61 )
            {
              v13 = Entity::getDimension(v2);
              (*(void (__cdecl **)(int, int))(*(_DWORD *)v13 + 212))(v13, v61);
              if ( v61 )
                (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v61 + 4))(v61, *(_DWORD *)(*(_DWORD *)v61 + 4));
            }
          }
          v14 = Mob::getOffhandSlot(v2);
          v15 = v14;
          v16 = *(_DWORD *)v14;
          if ( v16 )
            if ( (*(int (__cdecl **)(int, _DWORD))(*(_DWORD *)v16 + 140))(v16, *(_DWORD *)(*(_DWORD *)v16 + 140)) == 1 )
              v17 = *(_DWORD *)v15;
              v18 = *(void (__fastcall **)(int *, int, char *, int))(**(_DWORD **)v15 + 276);
              v19 = (BlockSource *)Entity::getRegion(v2);
              v20 = BlockSource::getLevel(v19);
              v18(&v60, v17, v15, v20);
              if ( v60 )
              {
                v21 = Entity::getDimension(v2);
                (*(void (__cdecl **)(int, int))(*(_DWORD *)v21 + 212))(v21, v60);
                if ( v60 )
                  (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v60 + 4))(v60, *(_DWORD *)(*(_DWORD *)v60 + 4));
              }
          ++v5;
        }
        while ( v5 != (char *)v6 );
      }
    }
    ChunkPos::ChunkPos((int)&v58, (int)v2 + 72);
    Entity::getLevel(v2);
    v53 = 0;
    v22 = Level::tickingChunksOffset;
    do
      v23 = BlockSource::getChunkSource(*((BlockSource **)v2 + 1158));
      v24 = *(_QWORD *)v22;
      v25 = *(void (__fastcall **)(LevelChunk **))(*(_DWORD *)v23 + 16);
      v54 = *(_QWORD *)v22 + v58;
      v55 = HIDWORD(v24) + v59;
      v25(&v56);
      if ( v56 )
        v26 = LevelChunk::getState(v56);
        v27 = *v26;
        __dmb();
        if ( (unsigned __int8)v27 >= 2u )
          v28 = *v26;
          __dmb();
          if ( (unsigned __int8)v28 < 8u )
            ++v53;
          else
            v53 += 2;
            if ( !LevelChunk::wasTickedThisTick((int)v56, (unsigned __int64 *)v52) )
              v29 = (Level *)Entity::getLevel(v2);
              if ( Level::isClientSide(v29) || (v30 = (Level *)Entity::getLevel(v2), Level::getTearingDown(v30) != 1) )
                v33 = v56;
                v34 = Entity::getRegion(v2);
                LevelChunk::tick(__PAIR__(v34, (unsigned int)v33), v52);
              else
                v31 = v56;
                v32 = (BlockSource *)Entity::getRegion(v2);
                LevelChunk::tickBlockEntities(v31, v32);
      v35 = v57;
      if ( v57 )
        v36 = (unsigned int *)(v57 + 4);
        if ( &pthread_create )
          do
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
        else
          v37 = (*v36)--;
        if ( v37 == 1 )
          v38 = (unsigned int *)(v35 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 8))(v35);
          if ( &pthread_create )
            __dmb();
            do
              v39 = __ldrex(v38);
            while ( __strex(v39 - 1, v38) );
            v39 = (*v38)--;
          if ( v39 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 12))(v35);
      v22 += 2;
    while ( (_UNKNOWN *)v22 != &unk_281CC18 );
    v40 = (BlockSource *)Entity::getRegion(v2);
    Entity::tick(v2, v40);
    v41 = (Level *)Entity::getLevel(v2);
    if ( !Level::isClientSide(v41)
      && !*((_BYTE *)v2 + 4821)
      && (!*((_BYTE *)v2 + 4829) || Mob::getHealth(v2) < 1 || *((_DWORD *)v2 + 1073) == 4) )
      Player::recheckSpawnPosition(v2);
    if ( *((_BYTE *)v2 + 4829) && (*((_DWORD *)v2 + 1149) & *((_DWORD *)v2 + 1148)) != -1 )
      v42 = (unsigned __int64 *)((char *)v2 + 4592);
      v43 = Entity::getLevel(v2);
      v44 = Level::fetchEntity(v43, 0, *v42, *v42 >> 32, 0);
      v45 = (Entity *)v44;
      if ( v44 && (*(int (**)(void))(*(_DWORD *)v44 + 564))() == 1 )
        _R0 = Entity::distanceTo(v45, v2);
        __asm
          VMOV.F32        S0, #10.0
          VMOV            S2, R0
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          (*(void (__fastcall **)(Entity *, Entity *))(*(_DWORD *)v2 + 144))(v2, v45);
      *(_DWORD *)v42 = -1;
      *((_DWORD *)v2 + 1149) = -1;
    result = v53;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall Player::remove(Player *this)
{
  Entity *v1; // r4@1

  v1 = this;
  Mob::setInvisible(this, 1);
  return j_j_j__ZN6Entity6removeEv(v1);
}


int __fastcall Player::removeListener(int result, int a2)
{
  int v2; // r2@1
  _DWORD *v3; // lr@1
  int v4; // r3@1
  int v5; // r4@2
  bool v6; // zf@3
  _DWORD *v7; // r3@3
  int v8; // r5@6
  bool v9; // zf@6
  int v10; // r3@11
  int v11; // r1@24
  _DWORD *v12; // r4@24
  bool v13; // zf@24

  v2 = *(_DWORD *)(result + 5176);
  v3 = *(_DWORD **)(result + 5180);
  v4 = ((signed int)v3 - v2) >> 4;
  if ( v4 < 1 )
  {
LABEL_10:
    if ( 1 == ((signed int)v3 - v2) >> 2 )
    {
      v7 = (_DWORD *)v2;
    }
    else
      v10 = ((signed int)v3 - v2) >> 2;
      if ( v10 == 2 )
      {
        v7 = (_DWORD *)v2;
      }
      else
        if ( v10 != 3 )
        {
          v7 = *(_DWORD **)(result + 5180);
          goto LABEL_23;
        }
        if ( *(_DWORD *)v2 == a2 )
        v7 = (_DWORD *)(v2 + 4);
      if ( *v7 == a2 )
        goto LABEL_23;
      ++v7;
    if ( *v7 != a2 )
      v7 = *(_DWORD **)(result + 5180);
  }
  else
    v5 = v4 + 1;
    while ( 1 )
      v6 = *(_DWORD *)v2 == a2;
      if ( *(_DWORD *)v2 != a2 )
        v6 = *(_DWORD *)(v2 + 4) == a2;
      if ( v6 )
        break;
      v7 = (_DWORD *)(v2 + 8);
      v8 = *(_DWORD *)(v2 + 8);
      v9 = v8 == a2;
      if ( v8 != a2 )
        v7 = (_DWORD *)(v2 + 12);
        v9 = *(_DWORD *)(v2 + 12) == a2;
      if ( v9 )
      --v5;
      v2 += 16;
      if ( v5 <= 1 )
        goto LABEL_10;
LABEL_23:
  if ( v7 != v3 )
    v11 = (int)(v7 + 1);
    v12 = (_DWORD *)(result + 5180);
    v13 = v7 + 1 == v3;
    if ( v7 + 1 != v3 )
      v13 = v3 == (_DWORD *)v11;
    if ( !v13 )
      _aeabi_memmove4(v7, v11);
      v3 = (_DWORD *)*v12;
    result = (int)(v3 - 1);
    *v12 = v3 - 1;
  return result;
}


int __fastcall Player::updateGliding(Player *this)
{
  Player *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@1
  int v4; // r4@2
  int result; // r0@37
  __int16 v6; // [sp+5h] [bp-1EBh]@0
  char v7; // [sp+7h] [bp-1E9h]@0
  int v8; // [sp+8h] [bp-1E8h]@14
  char v9; // [sp+Ch] [bp-1E4h]@14
  __int16 v10; // [sp+Dh] [bp-1E3h]@14
  char v11; // [sp+Fh] [bp-1E1h]@14
  int v12; // [sp+10h] [bp-1E0h]@14
  int v13; // [sp+14h] [bp-1DCh]@14
  int v14; // [sp+18h] [bp-1D8h]@14
  int v15; // [sp+20h] [bp-1D0h]@24
  void *v16; // [sp+3Ch] [bp-1B4h]@22
  void *v17; // [sp+4Ch] [bp-1A4h]@20
  int v18; // [sp+60h] [bp-190h]@14
  int v19; // [sp+68h] [bp-188h]@18
  void *v20; // [sp+84h] [bp-16Ch]@16
  void *v21; // [sp+94h] [bp-15Ch]@14
  __int16 v22; // [sp+ADh] [bp-143h]@2
  char v23; // [sp+AFh] [bp-141h]@2
  int v24; // [sp+B0h] [bp-140h]@2
  char v25; // [sp+B4h] [bp-13Ch]@2
  __int16 v26; // [sp+B5h] [bp-13Bh]@2
  char v27; // [sp+B7h] [bp-139h]@2
  int v28; // [sp+B8h] [bp-138h]@2
  int v29; // [sp+BCh] [bp-134h]@2
  int v30; // [sp+C0h] [bp-130h]@2
  int v31; // [sp+C8h] [bp-128h]@12
  void *v32; // [sp+E4h] [bp-10Ch]@10
  void *v33; // [sp+F4h] [bp-FCh]@8
  int v34; // [sp+108h] [bp-E8h]@2
  int v35; // [sp+110h] [bp-E0h]@6
  void *v36; // [sp+12Ch] [bp-C4h]@4
  void *ptr; // [sp+13Ch] [bp-B4h]@2
  char v38; // [sp+150h] [bp-A0h]@1
  int v39; // [sp+158h] [bp-98h]@31
  void *v40; // [sp+174h] [bp-7Ch]@29
  void *v41; // [sp+184h] [bp-6Ch]@27
  char v42; // [sp+198h] [bp-58h]@1
  int v43; // [sp+1A0h] [bp-50h]@37
  void *v44; // [sp+1BCh] [bp-34h]@35
  void *v45; // [sp+1CCh] [bp-24h]@33

  v1 = this;
  v2 = (*(int (**)(void))(*(_DWORD *)this + 1028))();
  ItemInstance::ItemInstance((ItemInstance *)&v42, v2);
  Mob::updateGliding(v1);
  v3 = (*(int (__fastcall **)(Player *, signed int))(*(_DWORD *)v1 + 1028))(v1, 1);
  ItemInstance::ItemInstance((ItemInstance *)&v38, v3);
  if ( ItemInstance::operator!=((ItemInstance *)&v42, (ItemInstance *)&v38) == 1 )
  {
    v24 = 3;
    v25 = -1;
    v27 = v23;
    v26 = v22;
    v28 = 0;
    v29 = 0;
    ItemInstance::ItemInstance((ItemInstance *)&v30, (int)&ItemInstance::EMPTY_ITEM);
    ItemInstance::ItemInstance((ItemInstance *)&v34, (int)&v42);
    v4 = (int)v1 + 5152;
    InventoryTransactionManager::addAction(v4, (int)&v24);
    if ( ptr )
      operator delete(ptr);
    if ( v36 )
      operator delete(v36);
    if ( v35 )
      (*(void (**)(void))(*(_DWORD *)v35 + 4))();
    v35 = 0;
    if ( v33 )
      operator delete(v33);
    if ( v32 )
      operator delete(v32);
    if ( v31 )
      (*(void (**)(void))(*(_DWORD *)v31 + 4))();
    v8 = 3;
    v9 = -1;
    v11 = v7;
    v10 = v6;
    v31 = 0;
    v12 = 0;
    v13 = 1;
    ItemInstance::ItemInstance((ItemInstance *)&v14, (int)&v38);
    ItemInstance::ItemInstance((ItemInstance *)&v18, (int)&ItemInstance::EMPTY_ITEM);
    InventoryTransactionManager::addAction(v4, (int)&v8);
    if ( v21 )
      operator delete(v21);
    if ( v20 )
      operator delete(v20);
    if ( v19 )
      (*(void (**)(void))(*(_DWORD *)v19 + 4))();
    v19 = 0;
    if ( v17 )
      operator delete(v17);
    if ( v16 )
      operator delete(v16);
    if ( v15 )
      (*(void (**)(void))(*(_DWORD *)v15 + 4))();
    v15 = 0;
  }
  if ( v41 )
    operator delete(v41);
  if ( v40 )
    operator delete(v40);
  if ( v39 )
    (*(void (**)(void))(*(_DWORD *)v39 + 4))();
  if ( v45 )
    operator delete(v45);
  if ( v44 )
    operator delete(v44);
  result = v43;
  if ( v43 )
    result = (*(int (**)(void))(*(_DWORD *)v43 + 4))();
  return result;
}


void __fastcall Player::lavaHurt(Player *this)
{
  Entity *v1; // r4@1
  Level *v2; // r0@2
  void *v3; // r0@3
  void *v4; // r0@4
  void *v5; // r0@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  unsigned int *v8; // r2@11
  signed int v9; // r1@13
  unsigned int *v10; // r2@15
  signed int v11; // r1@17
  void **v12; // [sp+0h] [bp-60h]@3
  int v13; // [sp+38h] [bp-28h]@5
  int v14; // [sp+3Ch] [bp-24h]@4
  int v15; // [sp+40h] [bp-20h]@3

  v1 = this;
  Entity::lavaHurt(this);
  if ( Mob::hasEffect(v1, (const MobEffect *)MobEffect::FIRE_RESISTANCE) == 1 )
  {
    v2 = (Level *)Entity::getLevel(v1);
    if ( !Level::isClientSide(v2) )
    {
      EventPacket::EventPacket((int)&v12, v1, 39, 1);
      (*(void (__fastcall **)(Entity *, void ***))(*(_DWORD *)v1 + 1448))(v1, &v12);
      v12 = &off_26E9D30;
      v3 = (void *)(v15 - 12);
      if ( (int *)(v15 - 12) != &dword_28898C0 )
      {
        v6 = (unsigned int *)(v15 - 4);
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
          j_j_j_j__ZdlPv_9(v3);
      }
      v4 = (void *)(v14 - 12);
      if ( (int *)(v14 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v14 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v4);
      v5 = (void *)(v13 - 12);
      if ( (int *)(v13 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v13 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v5);
    }
  }
}


void __fastcall Player::getCapePos(Player *this, float a2, int _R2)
{
  Player::getCapePos(this, a2, _R2);
}


int __fastcall Player::handleMovePlayerPacket(float a1, int a2, int a3, _DWORD *a4, int a5, int a6, int a7)
{
  _DWORD *v12; // r5@1
  int v15; // r1@4
  int v16; // r2@4
  void (__fastcall *v17)(_DWORD, int *, int, int); // r6@4
  int result; // r0@7
  int v20; // [sp+4h] [bp-2Ch]@4
  int v21; // [sp+Ch] [bp-24h]@4

  __asm { VLDR            S16, [SP,#0x30+arg_0] }
  _R4 = a1;
  v12 = a4;
  _R6 = a3;
  *(_BYTE *)(LODWORD(a1) + 4994) = a2;
  switch ( a2 )
  {
    case 0:
      __asm { VMOV            R3, S16 ; jumptable 0177420E case 0 }
      (*(void (__fastcall **)(_DWORD, int, _DWORD *, int))(*(_DWORD *)LODWORD(a1) + 1532))(LODWORD(a1), a3, v12, _R3);
      break;
    case 1:
      (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)LODWORD(a1) + 48))(LODWORD(a1), a3);
      (*(void (__fastcall **)(_DWORD, _DWORD *))(*(_DWORD *)LODWORD(_R4) + 72))(LODWORD(_R4), v12);
      (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(_R4) + 1248))(LODWORD(_R4), 0);
    case 2:
      (*(void (__fastcall **)(_DWORD, _DWORD *))(*(_DWORD *)LODWORD(a1) + 72))(LODWORD(a1), a4);
      __asm
      {
        VLDR            S0, [R4,#0x13C]
        VLDR            S2, [R6,#4]
        VSUB.F32        S0, S2, S0
      }
      v15 = *(_DWORD *)(_R6 + 8);
      v16 = *(_DWORD *)_R6;
      v17 = *(void (__fastcall **)(_DWORD, int *, int, int))(*(_DWORD *)LODWORD(_R4) + 104);
      v20 = v16;
      __asm { VSTR            S0, [SP,#0x30+var_28] }
      v21 = v15;
      v17(LODWORD(_R4), &v20, a6, a7);
    case 3:
      *(_DWORD *)(LODWORD(a1) + 120) = *a4;
    default:
  }
  if ( *(_DWORD *)(LODWORD(_R4) + 4068) )
    __asm { VMOV            R1, S16 }
    result = MovementInterpolator::setHeadYawLerpTarget((MovementInterpolator *)(LODWORD(_R4) + 4040), _R1);
  else
    result = LODWORD(_R4) + 3420;
    __asm { VSTR            S16, [R0] }
  return result;
}


int __fastcall Player::_ensureSafeSpawnPosition(int result, Vec3 *a2)
{
  int v7; // [sp+0h] [bp-30h]@5
  float v8; // [sp+Ch] [bp-24h]@5
  int v9; // [sp+10h] [bp-20h]@5

  _R4 = a2;
  __asm
  {
    VLDR            S0, [R0,#0x110]
    VLDR            S6, [R4,#8]
    VMOV.F32        S16, #0.5
    VLDR            S4, [R4]
    VABS.F32        S8, S6
    VLDR            S2, [R0,#0x11C]
    VABS.F32        S4, S4
    VSUB.F32        S0, S2, S0
    VCVTR.S32.F32   S2, S8
    VCVTR.S32.F32   S6, S4
    VMUL.F32        S0, S0, S16
    VCVT.F32.S32    S10, S2
    VCVT.F32.S32    S6, S6
    VABS.F32        S2, S0
    VSUB.F32        S0, S8, S10
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    goto LABEL_8;
    VLDR            S8, [R0,#0x108]
    VSUB.F32        S4, S4, S6
    VLDR            S10, [R0,#0x114]
    VSUB.F32        S8, S10, S8
    VMUL.F32        S8, S8, S16
    VABS.F32        S8, S8
    VCMPE.F32       S4, S8
    VMOV.F32        S6, #1.0
    VSUB.F32        S8, S6, S8
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
LABEL_8:
    BlockPos::BlockPos((int)&v7, (int)a2);
    Vec3::Vec3((int)&v8, (int)&v7);
    result = v9;
    __asm { VLDR            S0, [SP,#0x30+var_24] }
    *((_DWORD *)_R4 + 1) = v9;
    __asm
    {
      VLDR            S2, [SP,#0x30+var_1C]
      VADD.F32        S0, S0, S16
      VADD.F32        S2, S2, S16
      VSTR            S0, [R4]
      VSTR            S2, [R4,#8]
    }
  else
      VSUBLE.F32      S2, S6, S2
      VCMPELE.F32     S0, S2
      VMRSLE          APSR_nzcv, FPSCR
  return result;
}


int __fastcall Player::moveCape(int result)
{
  _R1 = *(_DWORD *)(result + 4724);
  *(_DWORD *)(result + 4712) = _R1;
  _R4 = *(_DWORD *)(result + 4728);
  *(_DWORD *)(result + 4716) = _R4;
  __asm { VMOV            S0, R1 }
  _R1 = *(_DWORD *)(result + 4732);
  *(_DWORD *)(result + 4720) = _R1;
  __asm
  {
    VMOV.F32        S8, #10.0
    VLDR            S12, [R0,#0x48]
    VMOV            S2, R1
    VLDR            S6, [R0,#0x4C]
    VSUB.F32        S4, S12, S0
    VLDR            S10, [R0,#0x50]
    VCMPE.F32       S4, S8
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    goto LABEL_15;
    VMOV.F32        S14, #-10.0
    VCMPE.F32       S4, S14
  if ( _NF ^ _VF )
LABEL_15:
    __asm
    {
      VMOV.F32        S0, S12
      VSTR            S12, [R2]
      VSTR            S12, [R5]
    }
    VMOV.F32        S1, #-10.0
    VSUB.F32        S12, S10, S2
    VMOV            S14, R4
    VCMPE.F32       S4, S1
    goto LABEL_16;
    VCMPE.F32       S12, S8
LABEL_16:
      VMOV.F32        S2, S10
      VSTR            S10, [R1]
      VSTR            S10, [R6]
    VSUB.F32        S10, S6, S14
    goto LABEL_17;
    VCMPE.F32       S10, S8
LABEL_17:
    __asm { VMOV.F32        S14, S6 }
    result += 4716;
      VSTR            S6, [R3]
      VSTR            S6, [R0]
    VMOV.F32        S6, #0.25
    VMUL.F32        S4, S4, S6
    VMUL.F32        S8, S10, S6
    VMUL.F32        S6, S12, S6
    VADD.F32        S0, S0, S4
    VADD.F32        S4, S14, S8
    VADD.F32        S2, S2, S6
    VSTR            S0, [R2]
    VSTR            S4, [R3]
    VSTR            S2, [R1]
  return result;
}


char *__fastcall Player::getItemInUse(Player *this)
{
  return (char *)this + 4832;
}


int __fastcall Player::awardKillScore(int result, Entity *a2, int a3)
{
  *(_DWORD *)(result + 4300) += a3;
  return result;
}


void __fastcall Player::~Player(Player *this)
{
  Player *v1; // r0@1

  v1 = Player::~Player(this);
  j_j_j__ZdlPv_6((void *)v1);
}


_DWORD *__fastcall Player::_tickCooldowns(Player *this)
{
  _DWORD *v1; // r1@1
  _DWORD *result; // r0@1

  v1 = (_DWORD *)*((_DWORD *)this + 1315);
  for ( result = (_DWORD *)*((_DWORD *)this + 1314); v1 != result; ++result )
  {
    if ( *result >= 1 )
      --*result;
  }
  return result;
}


int __fastcall Player::getRidingHeight(Player *this)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, =-0.4
    VLDR            S2, [R0,#0x13C]
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


signed int __fastcall Player::isViewer(Player *this)
{
  unsigned int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 1308) - 3;
  result = 0;
  if ( v1 < 2 )
    result = 1;
  return result;
}


int __fastcall Player::isInTrialMode(Player *this)
{
  return 0;
}


signed int __fastcall Player::isShootable(Player *this)
{
  return 1;
}


int __fastcall Player::sendEventPacket(Player *this, EventPacket *a2)
{
  Player *v2; // r5@1
  Level *v3; // r0@1
  int v4; // r0@1
  int v5; // r3@1

  v2 = this;
  v3 = (Level *)Entity::getLevel(this);
  v4 = Level::getPacketSender(v3);
  v5 = *((_BYTE *)v2 + 4820);
  return (*(int (**)(void))(*(_DWORD *)v4 + 16))();
}


signed int __fastcall Player::getSelectedItemSlot(Player *this)
{
  PlayerInventoryProxy *v1; // r4@1
  int v3; // [sp+0h] [bp-10h]@1
  int v4; // [sp+4h] [bp-Ch]@1

  v1 = (PlayerInventoryProxy *)*((_DWORD *)this + 1188);
  PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v3, (int)v1);
  return PlayerInventoryProxy::getLinkedSlot(v1, v4);
}


signed int __fastcall Player::isItemInCooldown(int a1)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = (*(int (**)(void))(*(_DWORD *)a1 + 1508))();
  v2 = 0;
  if ( v1 > 0 )
    v2 = 1;
  return v2;
}


int __fastcall Player::handleJumpEffects(Player *this)
{
  Player *v1; // r4@1
  Level *v2; // r0@1
  int result; // r0@1
  int v4; // r0@2
  void **v5; // r0@3
  int *v6; // r4@6
  int *i; // r5@6
  __int64 v8; // kr00_8@6
  int v9; // t1@7

  v1 = this;
  v2 = (Level *)Entity::getLevel(this);
  result = Level::isClientSide(v2);
  if ( !result )
  {
    v4 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v1 + 52))(v1);
    *((_DWORD *)v1 + 1024) = *(_DWORD *)v4;
    *((_DWORD *)v1 + 1025) = *(_DWORD *)(v4 + 4);
    *((_DWORD *)v1 + 1026) = *(_DWORD *)(v4 + 8);
    if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)v1 + 792))(v1) == 1 )
      v5 = &FoodConstants::EXHAUSTION_SPRINT_JUMP;
    else
      v5 = &FoodConstants::EXHAUSTION_JUMP;
    Player::causeFoodExhaustion(v1, *(float *)*v5);
    result = Entity::isRide(v1);
    if ( result == 1 )
    {
      v8 = *(_QWORD *)((char *)v1 + 476);
      v6 = (int *)(*(_QWORD *)((char *)v1 + 476) >> 32);
      for ( i = (int *)v8; v6 != i; result = (*(int (**)(void))(*(_DWORD *)v9 + 392))() )
      {
        v9 = *i;
        ++i;
      }
    }
  }
  return result;
}


int __fastcall Player::setMapIndex(int result, int a2)
{
  *(_DWORD *)(result + 5244) = a2;
  return result;
}


signed int __fastcall Player::eat(Player *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r4@1
  Player *v3; // r5@1
  signed int result; // r0@1
  int v6; // r7@6
  FoodItemComponent *v7; // r6@6
  AttributeInstance *v8; // r0@6
  int v13; // r7@10
  int v14; // r0@10

  v2 = a2;
  v3 = this;
  result = *((_BYTE *)a2 + 15);
  _ZF = result == 0;
  if ( *((_BYTE *)a2 + 15) )
  {
    result = *(_DWORD *)a2;
    _ZF = *(_DWORD *)a2 == 0;
  }
  if ( !_ZF )
    result = ItemInstance::isNull(a2);
    if ( !result )
    {
      result = *((_BYTE *)v2 + 14);
      if ( *((_BYTE *)v2 + 14) )
      {
        v6 = *(_DWORD *)v2;
        v7 = *(FoodItemComponent **)(*(_DWORD *)v2 + 100);
        v8 = (AttributeInstance *)(*(int (__fastcall **)(Player *, void *))(*(_DWORD *)v3 + 1004))(v3, &Player::HUNGER);
        _R0 = AttributeInstance::getCurrentValue(v8);
        __asm
        {
          VMOV            S0, R0
          VCMPE.F32       S0, #0.0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _ZF && *(_WORD *)(Item::mRotten_flesh + 18) == *(_WORD *)(v6 + 18) )
          MinecraftEventing::fireEventAwardAchievement((int)v3, 20);
        v13 = FoodItemComponent::getNutrition(v7);
        v14 = FoodItemComponent::getSaturationModifier(v7);
        Player::eat(v3, v13, *(float *)&v14);
        result = j_j_j__ZN17MinecraftEventing17fireEventItemUsedEP6PlayerRK12ItemInstanceNS_9UseMethodE_0(
                   (int)v3,
                   v2,
                   1);
      }
    }
  return result;
}


int __fastcall Player::_fireDimensionChanged(Player *this)
{
  Player *v1; // r4@1
  int *v2; // r5@1
  int result; // r0@1
  int *i; // r6@1
  int v5; // t1@2

  v1 = this;
  v2 = (int *)*((_DWORD *)this + 1295);
  result = 5176;
  for ( i = (int *)*((_DWORD *)v1 + 1294); v2 != i; result = (*(int (**)(void))(*(_DWORD *)v5 + 12))() )
  {
    v5 = *i;
    ++i;
  }
  return result;
}


int __fastcall Player::updateInventoryTransactions(Player *this)
{
  Player *v1; // r4@1
  InventoryTransaction **v2; // r6@2
  Level *v3; // r0@2
  Level *v4; // r0@6
  int v5; // r3@7
  int v6; // r2@7
  int v7; // r3@7
  InventoryTransaction *v8; // r0@9
  InventoryTransaction *v9; // r0@10
  int v11; // [sp+0h] [bp-28h]@7
  void **v12; // [sp+4h] [bp-24h]@7
  signed int v13; // [sp+8h] [bp-20h]@7
  signed int v14; // [sp+Ch] [bp-1Ch]@7
  char v15; // [sp+10h] [bp-18h]@7
  int v16; // [sp+14h] [bp-14h]@7

  v1 = this;
  if ( *((_DWORD *)this + 1289) )
  {
    v2 = (InventoryTransaction **)((char *)this + 5156);
    v3 = (Level *)Entity::getLevel(this);
    if ( Level::isClientSide(v3) == 1 && *((_DWORD *)v1 + 1308) == 1 )
    {
      InventoryTransaction::_logTransaction(*v2);
      InventoryTransactionManager::_logExpectedActions((Player *)((char *)v1 + 5152));
      InventoryTransactionManager::forceBalanceTransaction((Player *)((char *)v1 + 5152));
    }
    if ( *v2 )
      v4 = (Level *)Entity::getLevel(v1);
      if ( Level::isClientSide(v4) == 1 )
      {
        ComplexInventoryTransaction::fromType(&v11, 1);
        v13 = 2;
        v14 = 1;
        v15 = 0;
        v12 = &off_26DA738;
        v16 = v11;
        v11 = 0;
        (*(void (__cdecl **)(_DWORD, void ***, _DWORD, int, _DWORD))(**((_DWORD **)v1 + 1231) + 8))(
          *((_DWORD *)v1 + 1231),
          &v12,
          *(_DWORD *)(**((_DWORD **)v1 + 1231) + 8),
          v5,
          0);
        if ( v16 )
          (*(void (__cdecl **)(int, _DWORD, int, int, int))(*(_DWORD *)v16 + 4))(
            v16,
            *(_DWORD *)(*(_DWORD *)v16 + 4),
            v6,
            v7,
            v11);
      }
      v8 = *v2;
      *v2 = 0;
      if ( v8 )
        v9 = InventoryTransaction::~InventoryTransaction(v8);
        operator delete((void *)v9);
      std::vector<InventoryAction,std::allocator<InventoryAction>>::_M_erase_at_end(
        (int)v1 + 5160,
        *((_DWORD *)v1 + 1290));
  }
  return std::vector<InventoryAction,std::allocator<InventoryAction>>::_M_erase_at_end(
           (int)v1 + 5160,
           *((_DWORD *)v1 + 1290));
}


int __fastcall Player::getLuck(Player *this)
{
  AttributeInstance *v1; // r0@1

  v1 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)this + 1004))();
  return j_j_j__ZNK17AttributeInstance15getCurrentValueEv_0(v1);
}


int __fastcall Player::isUsingItem(Player *this)
{
  return ItemInstance::isNull((Player *)((char *)this + 4832)) ^ 1;
}


int __fastcall Player::useNewAi(Player *this)
{
  return 0;
}


int __fastcall Player::updateCreativeItemList(Player *a1, const ItemInstance *a2)
{
  Player *v2; // r10@1
  int result; // r0@1
  const ItemInstance *v4; // r5@1 OVERLAPPED
  const ItemInstance *v5; // r6@1 OVERLAPPED
  ItemInstance **v6; // r7@2
  Block *v7; // r0@6
  int v8; // r4@9
  int v9; // r8@10
  ItemInstance *v10; // r0@10
  ItemInstance *v11; // r0@11
  char v12; // [sp+8h] [bp-78h]@10
  int v13; // [sp+10h] [bp-70h]@17
  void *v14; // [sp+2Ch] [bp-54h]@15
  void *ptr; // [sp+3Ch] [bp-44h]@13
  int v16; // [sp+50h] [bp-30h]@11

  v5 = a2;
  v2 = a1;
  result = Player::clearCreativeItemList(a1);
  *(_QWORD *)&v4 = *(_QWORD *)v5;
  if ( v4 != v5 )
  {
    v6 = (ItemInstance **)((char *)v2 + 4764);
    do
    {
      if ( *v6 == *((ItemInstance **)v2 + 1192) )
      {
        std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
          (unsigned __int64 *)v2 + 595,
          (int)v4);
      }
      else
        ItemInstance::ItemInstance(*v6, (int)v4);
        *v6 = (ItemInstance *)((char *)*v6 + 72);
      v7 = (Block *)*((_DWORD *)v4 + 1);
      if ( v7 )
        result = Block::getCreativeCategory(v7);
        result = *(_DWORD *)(*(_DWORD *)v4 + 48);
      v8 = result - 1;
      if ( (unsigned int)(result - 1) <= 3 )
        ItemGroup::ItemGroup((ItemGroup *)&v12, v4);
        v9 = (int)v2 + 12 * v8;
        v10 = *(ItemInstance **)(v9 + 4776);
        if ( v10 == *(ItemInstance **)(v9 + 4780) )
        {
          std::vector<ItemGroup,std::allocator<ItemGroup>>::_M_emplace_back_aux<ItemGroup>(
            (unsigned __int64 *)(v9 + 4772),
            (int)&v12);
        }
        else
          v11 = ItemInstance::ItemInstance(v10, (int)&v12);
          *((_DWORD *)v11 + 18) = v16;
          *(_DWORD *)(v9 + 4776) += 80;
        if ( ptr )
          operator delete(ptr);
        if ( v14 )
          operator delete(v14);
        if ( v13 )
          (*(void (**)(void))(*(_DWORD *)v13 + 4))();
        result = 0;
        v13 = 0;
      v4 = (const ItemInstance *)((char *)v4 + 72);
    }
    while ( v5 != v4 );
  }
  return result;
}


unsigned int __fastcall Player::initializeComponents(int a1, int a2)
{
  int v2; // r4@1
  unsigned int result; // r0@1
  AttributeInstance *v4; // r0@2
  AttributeInstance *v5; // r0@2

  v2 = a1;
  Mob::initializeComponents(a1, a2);
  result = *(_BYTE *)(v2 + 3081);
  if ( !*(_BYTE *)(v2 + 3081) )
  {
    Mob::resetAttributes((Mob *)v2);
    *(_DWORD *)(v2 + 4308) = 0;
    *(_DWORD *)(v2 + 4304) = 0;
    *(_BYTE *)(v2 + 3988) = 0;
    *(_DWORD *)(v2 + 3992) = 0;
    *(_DWORD *)(v2 + 4300) = 0;
    *(_DWORD *)(v2 + 5188) = 0;
    *(_DWORD *)(v2 + 3656) = 2139095039;
    *(_DWORD *)(v2 + 3660) = 2139095039;
    *(_DWORD *)(v2 + 3952) = 2139095039;
    *(_DWORD *)(v2 + 3956) = 2139095039;
    *(_DWORD *)(v2 + 3960) = 2139095039;
    *(_DWORD *)(v2 + 3964) = 2139095039;
    v4 = (AttributeInstance *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)v2 + 1000))(v2, &Player::LEVEL);
    AttributeInstance::resetToMinValue(v4);
    v5 = (AttributeInstance *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)v2 + 1000))(v2, &Player::EXPERIENCE);
    AttributeInstance::resetToMinValue(v5);
    *(_BYTE *)(v2 + 5192) = 0;
    *(_DWORD *)(v2 + 5196) = 7;
    result = Random::_genRandInt32((Random *)(v2 + 552)) >> 1;
    *(_DWORD *)(v2 + 5236) = result;
  }
  return result;
}


int __fastcall Player::_hurt(Player *this, const EntityDamageSource *a2, int a3, int a4, bool a5)
{
  Player *v5; // r6@1
  int v6; // r4@1
  int v7; // r8@1
  EntityDamageSource *v9; // r5@1
  Level *v10; // r0@3
  Level *v11; // r0@8
  int v12; // r0@9
  int v13; // r0@13
  Level *v14; // r0@14
  Level *v15; // r0@15
  Level *v16; // r0@18
  Level *v17; // r0@21
  int v18; // r0@24
  int v19; // r4@24
  int v20; // r0@24
  int v22; // r0@31
  __int64 v29; // r1@38
  void **v31; // [sp+8h] [bp-78h]@9
  int v32; // [sp+Ch] [bp-74h]@9
  int v33; // [sp+10h] [bp-70h]@9
  char v34; // [sp+14h] [bp-6Ch]@9
  int v35; // [sp+18h] [bp-68h]@9
  void *v36; // [sp+2Ch] [bp-54h]@33
  void *ptr; // [sp+3Ch] [bp-44h]@32
  int v38; // [sp+54h] [bp-2Ch]@20
  int v39; // [sp+58h] [bp-28h]@11
  int v40; // [sp+5Ch] [bp-24h]@10

  v5 = this;
  v6 = 0;
  v7 = a4;
  _R7 = a3;
  v9 = a2;
  *((_DWORD *)this + 999) = 0;
  if ( Mob::getHealth(this) >= 1 )
  {
    if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)v5 + 784))(v5) == 1 )
    {
      v10 = (Level *)Entity::getLevel(v5);
      if ( !Level::isClientSide(v10) )
      {
        if ( EntityDamageSource::getCause(v9) == 4 )
          return 0;
        (*(void (__fastcall **)(Player *, signed int, signed int))(*(_DWORD *)v5 + 1388))(v5, 1, 1);
      }
    }
    if ( (*(int (__fastcall **)(EntityDamageSource *))(*(_DWORD *)v9 + 8))(v9) != 1 )
      goto LABEL_44;
    *((_DWORD *)v5 + 1249) = (*(int (__fastcall **)(EntityDamageSource *))(*(_DWORD *)v9 + 36))(v9);
    v11 = (Level *)Entity::getLevel(v5);
    if ( !Level::isClientSide(v11) )
      v12 = *((_DWORD *)v5 + 1249);
      v32 = 2;
      v33 = 1;
      v34 = 0;
      v31 = &off_26E9B0C;
      v35 = v12;
      (*(void (**)(void))(**((_DWORD **)v5 + 1231) + 8))();
    v40 = (*(int (__fastcall **)(EntityDamageSource *))(*(_DWORD *)v9 + 40))(v9);
    if ( EntityClassTree::hasCategory(&v40, 2) == 1 )
      v39 = (*(int (__fastcall **)(EntityDamageSource *))(*(_DWORD *)v9 + 40))(v9);
      if ( !EntityClassTree::hasCategory(&v39, 1) )
        if ( EntityDamageSource::getCause(v9) != 3
          || (v13 = (*(int (__fastcall **)(EntityDamageSource *))(*(_DWORD *)v9 + 56))(v9),
              !EntityClassTree::isTypeInstanceOf(v13, 4194384)) )
        {
          v14 = (Level *)Entity::getLevel(v5);
          if ( Level::getDifficulty(v14) )
          {
            v15 = (Level *)Entity::getLevel(v5);
            if ( Level::getDifficulty(v15) == 1 )
            {
              _R7 = _R7 / 2 + 1;
            }
            else
              v16 = (Level *)Entity::getLevel(v5);
              if ( Level::getDifficulty(v16) == 3 )
                _R7 = 3 * _R7 / 2;
          }
          else
            _R7 = 0;
        }
    v38 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v9 + 40))(v9);
    if ( EntityClassTree::hasCategory(&v38, 1) == 1
      && (v17 = (Level *)Entity::getLevel(v5), *(_BYTE *)(Level::getAdventureSettings(v17) + 1)) )
      v6 = 0;
    else
LABEL_44:
      if ( _R7 )
        v18 = (*(int (__fastcall **)(Player *, _DWORD))(*(_DWORD *)v5 + 1028))(v5, 0);
        v19 = v18;
        v20 = *(_BYTE *)(v18 + 15);
        _ZF = v20 == 0;
        if ( v20 )
          _ZF = *(_DWORD *)v19 == 0;
        if ( !_ZF
          && !ItemInstance::isNull((ItemInstance *)v19)
          && *(_BYTE *)(v19 + 14)
          && (EntityDamageSource::getCause(v9) == 17 || EntityDamageSource::getCause(v9) == 19) )
          v22 = (*(int (__fastcall **)(Player *, _DWORD))(*(_DWORD *)v5 + 1028))(v5, 0);
          ItemInstance::ItemInstance((ItemInstance *)&v31, v22);
          _R0 = Random::_genRandInt32((Player *)((char *)v5 + 552));
          __asm
            VMOV            S0, R0
            VLDR            D1, =2.32830644e-10
          _R0 = 4 * _R7;
            VCVT.F64.U32    D0, S0
            VMUL.F64        D0, D0, D1
            VCVT.F32.F64    S0, D0
            VMOV            S2, R7
            VADD.F32        S0, S0, S0
            VCVT.F32.S32    S16, S2
            VMOV            S2, R0
            VCVT.F32.S32    S2, S2
            VMUL.F32        S0, S16, S0
            VADD.F32        S0, S0, S2
            VCVTR.S32.F32   S0, S0
            VMOV            R1, S0
          ItemInstance::hurtAndBreak((ItemInstance *)&v31, _R1, v5);
          (*(void (__fastcall **)(Player *, _DWORD, void ***))(*(_DWORD *)v5 + 1024))(v5, 0, &v31);
            VMOV.F32        S0, #0.75
            VCVTR.S32.F32   S16, S0
          if ( !_ZF )
            operator delete(ptr);
          if ( v36 )
            operator delete(v36);
          __asm { VMOV            R7, S16 }
          if ( v33 )
            (*(void (**)(void))(*(_DWORD *)v33 + 4))();
        if ( EntityDamageSource::getCause(v9) == 21 )
          Entity::setStatusFlag((int)v5, 30, 0);
          v29 = *(_QWORD *)(*(_DWORD *)(*((_DWORD *)v5 + 12) + 116) + 4);
          (*(void (__fastcall **)(Player *, _DWORD, _DWORD))(*(_DWORD *)v5 + 680))(v5, v29, HIDWORD(v29));
        v6 = Mob::_hurt(v5, v9, _R7, v7, a5);
      else
        v6 = 0;
  }
  return v6;
}


InstantaneousAttributeBuff *__fastcall Player::_applyExhaustion(Player *this, const Vec3 *a2)
{
  Player *v3; // r4@1
  Level *v4; // r0@1
  InstantaneousAttributeBuff *result; // r0@1
  float v6; // r1@1
  int v14; // r0@5
  void **v18; // r0@8

  _R5 = a2;
  v3 = this;
  v4 = (Level *)Entity::getLevel(this);
  result = (InstantaneousAttributeBuff *)Level::isClientSide(v4);
  _ZF = result == 0;
  if ( !result )
  {
    result = (InstantaneousAttributeBuff *)*((_DWORD *)v3 + 128);
    _ZF = result == 0;
  }
  if ( _ZF )
    __asm
    {
      VLDR            S0, [R5]
      VLDR            S2, [R5,#8]
      VMUL.F32        S18, S0, S0
      VLDR            S16, [R5,#4]
      VMUL.F32        S20, S2, S2
      VADD.F32        S0, S20, S18
      VMOV            R0, S0
    }
    _R5 = mce::Math::sqrt(_R0, v6);
    (*(void (__fastcall **)(Player *, signed int))(*(_DWORD *)v3 + 220))(v3, 5);
      VMUL.F32        S0, S16, S16
      VLDR            S16, =100.0
      VADD.F32        S0, S0, S18
      VADD.F32        S0, S0, S20
      VSQRT.F32       S0, S0
      VMUL.F32        S0, S0, S16
    v14 = roundf(_R0);
    __asm { VMOV            S0, R5 }
    _R7 = v14;
    _R0 = roundf(_R0);
      VMOV            S0, R0
      VMOV            S2, R7
      VCVTR.S32.F32   S16, S0
      VCVTR.S32.F32   S0, S2
    if ( _ZF )
      __asm { VMOV            R0, S0 }
      if ( (signed int)result < 1 )
        return result;
      __asm { VCVT.F32.S32    S0, S0 }
      v18 = &FoodConstants::EXHAUSTION_SWIM;
    else
      __asm { VMOV            R5, S16 }
      result = (InstantaneousAttributeBuff *)(*(int (__fastcall **)(Player *))(*(_DWORD *)v3 + 208))(v3);
      if ( result == (InstantaneousAttributeBuff *)1 )
      {
        if ( _R5 < 1 )
          return result;
        __asm { VCVT.F32.S32    S0, S16 }
        v18 = &FoodConstants::EXHAUSTION_SWIM;
      }
      else
        result = (InstantaneousAttributeBuff *)*((_BYTE *)v3 + 216);
        if ( !*((_BYTE *)v3 + 216) )
        if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)v3 + 792))(v3) == 1 )
        {
          __asm { VCVT.F32.S32    S0, S16 }
          v18 = &FoodConstants::EXHAUSTION_SPRINT;
        }
        else
          v18 = &FoodConstants::EXHAUSTION_WALK;
    __asm { VLDR            S2, =0.01 }
    _R0 = *v18;
      VMUL.F32        S0, S0, S2
      VLDR            S2, [R0]
      VMOV            R1, S0
    result = j_j_j__ZN6Player19causeFoodExhaustionEf(v3, _R1);
  return result;
}


char *__fastcall Player::getTrackedBosses(Player *this)
{
  return (char *)this + 4968;
}
