

void __fastcall ServerPlayer::openCommandBlock(ServerPlayer *this, const BlockPos *a2)
{
  ServerPlayer::openCommandBlock(this, a2);
}


TextPacket *__fastcall ServerPlayer::displayWhisperMessage(int a1, int *a2, int *a3, int *a4)
{
  int v4; // r4@1
  char v6; // [sp+10h] [bp-48h]@1
  unsigned __int64 v7; // [sp+3Ch] [bp-1Ch]@1
  int v8; // [sp+44h] [bp-14h]@1

  v4 = a1;
  v7 = 0LL;
  v8 = 0;
  TextPacket::TextPacket((int)&v6, 7, a2, a3, &v7, 0, a4);
  (*(void (__fastcall **)(int, char *))(*(_DWORD *)v4 + 1524))(v4, &v6);
  return TextPacket::~TextPacket((TextPacket *)&v6);
}


int __fastcall ServerPlayer::onEffectUpdated(ServerPlayer *this, const MobEffectInstance *a2)
{
  MobEffectInstance *v2; // r5@1
  ServerPlayer *v3; // r4@1
  int v4; // r8@1
  int v5; // r7@1
  int v6; // r6@1
  char v7; // r0@1
  __int64 v9; // [sp+0h] [bp-50h]@1
  void **v10; // [sp+8h] [bp-48h]@1
  int v11; // [sp+Ch] [bp-44h]@1
  int v12; // [sp+10h] [bp-40h]@1
  char v13; // [sp+14h] [bp-3Ch]@1
  __int64 v14; // [sp+18h] [bp-38h]@1
  int v15; // [sp+20h] [bp-30h]@1
  char v16; // [sp+24h] [bp-2Ch]@1
  int v17; // [sp+28h] [bp-28h]@1
  int v18; // [sp+2Ch] [bp-24h]@1
  char v19; // [sp+30h] [bp-20h]@1

  v2 = a2;
  v3 = this;
  Mob::onEffectUpdated(this, a2);
  Entity::getRuntimeID((Entity *)&v9, (int)v3);
  v4 = MobEffectInstance::getId(v2);
  v5 = MobEffectInstance::getDuration(v2);
  v6 = MobEffectInstance::getAmplifier(v2);
  v7 = MobEffectInstance::isEffectVisible(v2);
  v11 = 2;
  v12 = 1;
  v13 = 0;
  v10 = &off_26E95E4;
  v14 = v9;
  v15 = v5;
  v16 = 2;
  v17 = v4;
  v18 = v6;
  v19 = v7;
  return (*(int (**)(void))(**((_DWORD **)v3 + 1231) + 8))();
}


int __fastcall ServerPlayer::push(ServerPlayer *this, const Vec3 *a2)
{
  Entity *v2; // r4@1
  Dimension *v3; // r5@1
  int v4; // r0@1
  __int64 v5; // r1@1
  void **v7; // [sp+0h] [bp-38h]@1
  signed int v8; // [sp+4h] [bp-34h]@1
  signed int v9; // [sp+8h] [bp-30h]@1
  char v10; // [sp+Ch] [bp-2Ch]@1
  int v11; // [sp+10h] [bp-28h]@1
  __int64 v12; // [sp+18h] [bp-20h]@1
  int v13; // [sp+20h] [bp-18h]@1

  v2 = this;
  Entity::push(this, a2);
  (*(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v2 + 76))(v2, (char *)v2 + 108);
  v3 = (Dimension *)Entity::getDimension(v2);
  v8 = 2;
  v9 = 1;
  v10 = 0;
  v7 = &off_26E9684;
  Entity::getRuntimeID((Entity *)&v11, (int)v2);
  v4 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 64))(v2);
  v5 = *(_QWORD *)v4;
  v13 = *(_DWORD *)(v4 + 8);
  v12 = v5;
  return Dimension::sendPacketForEntity(v3, v2, (const Packet *)&v7, 0);
}


void __fastcall ServerPlayer::openContainer(int a1, __int64 *a2)
{
  ServerPlayer::openContainer(a1, a2);
}


void __fastcall ServerPlayer::openBeacon(ServerPlayer *this, const BlockPos *a2)
{
  ServerPlayer::openBeacon(this, a2);
}


void __fastcall ServerPlayer::openBrewingStand(ServerPlayer *this, const BlockPos *a2)
{
  ServerPlayer *v2; // r4@1
  const BlockPos *v3; // r5@1
  char v4; // r1@2
  int v5; // r1@4
  int v6; // r2@4
  int v7; // r5@4
  unsigned int *v8; // r1@5
  unsigned int v9; // r0@7
  unsigned int *v10; // r4@11
  unsigned int v11; // r0@13
  int v12; // r4@18
  unsigned int *v13; // r1@19
  unsigned int v14; // r0@21
  unsigned int *v15; // r5@25
  unsigned int v16; // r0@27
  int v17; // [sp+8h] [bp-50h]@4
  int v18; // [sp+Ch] [bp-4Ch]@4
  int v19; // [sp+10h] [bp-48h]@4
  int v20; // [sp+14h] [bp-44h]@4
  void **v21; // [sp+18h] [bp-40h]@4
  signed int v22; // [sp+1Ch] [bp-3Ch]@4
  signed int v23; // [sp+20h] [bp-38h]@4
  char v24; // [sp+24h] [bp-34h]@4
  char v25; // [sp+25h] [bp-33h]@4
  char v26; // [sp+26h] [bp-32h]@4
  int v27; // [sp+28h] [bp-30h]@4
  int v28; // [sp+2Ch] [bp-2Ch]@4
  int v29; // [sp+30h] [bp-28h]@4
  signed int v30; // [sp+38h] [bp-20h]@4
  signed int v31; // [sp+3Ch] [bp-1Ch]@4
  char v32; // [sp+44h] [bp-14h]@4

  v2 = this;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1348))() == 1 )
  {
    v4 = *((_BYTE *)v2 + 5328) + 1;
    if ( v4 > 99 )
      v4 = 1;
    *((_BYTE *)v2 + 5328) = v4;
    v22 = 2;
    v23 = 1;
    v24 = 0;
    v21 = &off_26E96FC;
    v25 = v4;
    v26 = 4;
    v5 = *((_DWORD *)v3 + 1);
    v6 = *((_DWORD *)v3 + 2);
    v27 = *(_DWORD *)v3;
    v28 = v5;
    v29 = v6;
    v30 = -1;
    v31 = -1;
    (*(void (__fastcall **)(ServerPlayer *, void ***))(*(_DWORD *)v2 + 1524))(v2, &v21);
    std::__shared_ptr<BrewingStandContainerManagerModel,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<BrewingStandContainerManagerModel>,ContainerID &,ServerPlayer &,BlockPos const&>(
      (int)&v17,
      (int)&v32,
      (_BYTE *)v2 + 5328,
      (int)v2,
      (int)v3);
    v7 = v18;
    v19 = v17;
    v20 = v18;
    v17 = 0;
    v18 = 0;
    ServerPlayer::_setContainerManager((int)v2, (int)&v19);
    if ( v7 )
    {
      v8 = (unsigned int *)(v7 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        v10 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
    }
    v12 = v18;
    if ( v18 )
      v13 = (unsigned int *)(v18 + 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        v15 = (unsigned int *)(v12 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  }
}


void __fastcall ServerPlayer::openTrading(int a1, __int64 *a2)
{
  int v2; // r5@1
  __int64 *v3; // r6@1
  char v4; // r0@2
  int v5; // r0@4
  int v6; // r0@4
  int v7; // r6@4
  unsigned int *v8; // r1@5
  unsigned int v9; // r0@7
  unsigned int *v10; // r5@11
  unsigned int v11; // r0@13
  int v12; // r5@18
  unsigned int *v13; // r1@19
  unsigned int v14; // r0@21
  unsigned int *v15; // r6@25
  unsigned int v16; // r0@27
  void *v17; // r0@32
  unsigned int *v18; // r2@34
  signed int v19; // r1@36
  int v20; // [sp+8h] [bp-80h]@4
  int v21; // [sp+Ch] [bp-7Ch]@4
  int v22; // [sp+10h] [bp-78h]@4
  int v23; // [sp+14h] [bp-74h]@4
  void **v24; // [sp+18h] [bp-70h]@4
  int v25; // [sp+28h] [bp-60h]@32
  int v26; // [sp+48h] [bp-40h]@32
  char v27; // [sp+6Ch] [bp-1Ch]@4

  v2 = a1;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)a1 + 1348))() == 1 )
  {
    v4 = *(_BYTE *)(v2 + 5328) + 1;
    if ( v4 > 99 )
      v4 = 1;
    *(_BYTE *)(v2 + 5328) = v4;
    v5 = Entity::getLevel((Entity *)v2);
    v6 = Level::fetchEntity(v5, 0, *v3, (unsigned __int64)*v3 >> 32, 0);
    Entity::createUpdateTradePacket((Entity *)&v24, v6, *(_BYTE *)(v2 + 5328));
    (*(void (__fastcall **)(int, void ***))(*(_DWORD *)v2 + 1524))(v2, &v24);
    std::__shared_ptr<TradeContainerManagerModel,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<TradeContainerManagerModel>,ContainerID &,ServerPlayer &,EntityUniqueID const&>(
      (int)&v20,
      (int)&v27,
      (_BYTE *)(v2 + 5328),
      v2,
      v3);
    v7 = v21;
    v22 = v20;
    v23 = v21;
    v20 = 0;
    v21 = 0;
    ServerPlayer::_setContainerManager(v2, (int)&v22);
    if ( v7 )
    {
      v8 = (unsigned int *)(v7 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        v10 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
    }
    v12 = v21;
    if ( v21 )
      v13 = (unsigned int *)(v21 + 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        v15 = (unsigned int *)(v12 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
    v24 = &off_26E992C;
    CompoundTag::~CompoundTag((CompoundTag *)&v26);
    v17 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v25 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
  }
}


int __fastcall ServerPlayer::knockback(ServerPlayer *this, Entity *a2, int a3, float a4, float a5, float a6)
{
  Entity *v10; // r4@1
  Dimension *v11; // r5@1
  int v12; // r0@1
  __int64 v13; // r1@1
  float v15; // [sp+0h] [bp-40h]@0
  float v16; // [sp+4h] [bp-3Ch]@0
  void **v17; // [sp+8h] [bp-38h]@1
  signed int v18; // [sp+Ch] [bp-34h]@1
  signed int v19; // [sp+10h] [bp-30h]@1
  char v20; // [sp+14h] [bp-2Ch]@1
  int v21; // [sp+18h] [bp-28h]@1
  __int64 v22; // [sp+20h] [bp-20h]@1
  int v23; // [sp+28h] [bp-18h]@1

  __asm { VLDR            S0, [SP,#0x40+arg_0] }
  v10 = this;
  __asm
  {
    VLDR            S2, [SP,#0x40+arg_4]
    VSTR            S0, [SP,#0x40+var_40]
    VSTR            S2, [SP,#0x40+var_3C]
  }
  Mob::knockback(this, a2, a3, a4, v15, v16);
  v11 = (Dimension *)Entity::getDimension(v10);
  v18 = 2;
  v19 = 1;
  v20 = 0;
  v17 = &off_26E9684;
  Entity::getRuntimeID((Entity *)&v21, (int)v10);
  v12 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v10 + 64))(v10);
  v13 = *(_QWORD *)v12;
  v23 = *(_DWORD *)(v12 + 8);
  v22 = v13;
  return Dimension::sendPacketForEntity(v11, v10, (const Packet *)&v17, 0);
}


int __fastcall ServerPlayer::setPlayerGameType(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void **v5; // [sp+4h] [bp-24h]@2
  int v6; // [sp+8h] [bp-20h]@2
  int v7; // [sp+Ch] [bp-1Ch]@2
  char v8; // [sp+10h] [bp-18h]@2
  int v9; // [sp+14h] [bp-14h]@2

  v2 = a1;
  v3 = a2;
  if ( *(_DWORD *)(a1 + 5232) != a2 )
  {
    v6 = 2;
    v7 = 1;
    v8 = 0;
    v5 = &off_26DA760;
    v9 = a2;
    (*(void (__fastcall **)(int, void ***))(*(_DWORD *)a1 + 1524))(a1, &v5);
  }
  return Player::setPlayerGameType(v2, v3);
}


int __fastcall ServerPlayer::sendMobEffectPackets(int result)
{
  Mob *v1; // r4@1
  int *v2; // r5@1
  int *i; // r7@1

  v1 = (Mob *)result;
  v2 = *(int **)(result + 3972);
  for ( i = *(int **)(result + 3976); i != v2; v2 += 4 )
  {
    result = MobEffectInstance::operator!=(v2, &MobEffectInstance::NO_EFFECT);
    if ( result == 1 )
      result = Mob::addEffect(v1, (const MobEffectInstance *)v2);
  }
  return result;
}


int __fastcall ServerPlayer::onEffectAdded(ServerPlayer *this, MobEffectInstance *a2)
{
  MobEffectInstance *v2; // r5@1
  ServerPlayer *v3; // r4@1
  int v4; // r8@1
  int v5; // r7@1
  int v6; // r6@1
  char v7; // r0@1
  __int64 v9; // [sp+0h] [bp-50h]@1
  void **v10; // [sp+8h] [bp-48h]@1
  int v11; // [sp+Ch] [bp-44h]@1
  int v12; // [sp+10h] [bp-40h]@1
  char v13; // [sp+14h] [bp-3Ch]@1
  __int64 v14; // [sp+18h] [bp-38h]@1
  int v15; // [sp+20h] [bp-30h]@1
  char v16; // [sp+24h] [bp-2Ch]@1
  int v17; // [sp+28h] [bp-28h]@1
  int v18; // [sp+2Ch] [bp-24h]@1
  char v19; // [sp+30h] [bp-20h]@1

  v2 = a2;
  v3 = this;
  Mob::onEffectAdded(this, a2);
  Entity::getRuntimeID((Entity *)&v9, (int)v3);
  v4 = MobEffectInstance::getId(v2);
  v5 = MobEffectInstance::getDuration(v2);
  v6 = MobEffectInstance::getAmplifier(v2);
  v7 = MobEffectInstance::isEffectVisible(v2);
  v11 = 2;
  v12 = 1;
  v13 = 0;
  v10 = &off_26E95E4;
  v14 = v9;
  v15 = v5;
  v16 = 1;
  v17 = v4;
  v18 = v6;
  v19 = v7;
  return (*(int (**)(void))(**((_DWORD **)v3 + 1231) + 8))();
}


void __fastcall ServerPlayer::openCommandBlockMinecart(int a1, __int64 *a2)
{
  int v2; // r4@1
  __int64 *v3; // r5@1
  char v4; // r2@2
  int v5; // [sp+0h] [bp-40h]@4
  int v6; // [sp+4h] [bp-3Ch]@4
  void **v7; // [sp+8h] [bp-38h]@4
  signed int v8; // [sp+Ch] [bp-34h]@4
  signed int v9; // [sp+10h] [bp-30h]@4
  char v10; // [sp+14h] [bp-2Ch]@4
  char v11; // [sp+15h] [bp-2Bh]@4
  char v12; // [sp+16h] [bp-2Ah]@4
  int v13; // [sp+18h] [bp-28h]@4
  int v14; // [sp+1Ch] [bp-24h]@4
  int v15; // [sp+20h] [bp-20h]@4
  __int64 v16; // [sp+28h] [bp-18h]@4

  v2 = a1;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)a1 + 1348))() == 1 )
  {
    v4 = *(_BYTE *)(v2 + 5328) + 1;
    if ( v4 > 99 )
      v4 = 1;
    *(_BYTE *)(v2 + 5328) = v4;
    v8 = 2;
    v9 = 1;
    v10 = 0;
    v7 = &off_26E96FC;
    v11 = v4;
    v12 = 16;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = *v3;
    (*(void (__fastcall **)(int, void ***))(*(_DWORD *)v2 + 1524))(v2, &v7);
    v5 = 0;
    v6 = 0;
    ServerPlayer::_setContainerManager(v2, (int)&v5);
  }
}


int __fastcall ServerPlayer::setTeacher(int result)
{
  *(_BYTE *)(result + 5336) = 1;
  return result;
}


int __fastcall ServerPlayer::normalTick(ServerPlayer *this)
{
  int result; // r0@1
  int v3; // r0@3
  int v4; // r3@3
  int v5; // r1@3
  int v6; // r2@3
  int v7; // r1@4
  BlockSource *v9; // r0@6
  Dimension *v10; // r0@6
  int v11; // r4@6
  int (__fastcall *v12)(int, char *); // r7@6
  int v13; // r0@6
  int v14; // r0@6
  int v15; // r4@9
  unsigned int v16; // r1@10
  unsigned int *v17; // r0@10
  unsigned int v18; // r2@13
  unsigned int v19; // r3@14
  signed int v20; // r1@15
  int v21; // r0@19
  int v22; // r6@19
  unsigned int *v23; // r2@22
  unsigned int v24; // r1@24
  _BYTE *v28; // r6@36
  unsigned int *v29; // r1@44
  unsigned int *v30; // r5@50
  int v31; // [sp+4h] [bp-2Ch]@9
  int v32; // [sp+8h] [bp-28h]@9
  char v33; // [sp+Ch] [bp-24h]@6

  _R5 = this;
  result = *((_DWORD *)this + 1073);
  if ( !result )
  {
    if ( *((_BYTE *)_R5 + 4994) == 2 )
    {
      v3 = *((_DWORD *)_R5 + 18);
      v4 = (int)_R5 + 84;
      *((_DWORD *)_R5 + 24) = v3;
      v5 = *((_DWORD *)_R5 + 19);
      *((_DWORD *)_R5 + 25) = v5;
      v6 = *((_DWORD *)_R5 + 20);
      *((_DWORD *)_R5 + 26) = v6;
      *(_DWORD *)v4 = v3;
      *(_DWORD *)(v4 + 4) = v5;
      *(_DWORD *)(v4 + 8) = v6;
      *((_DWORD *)_R5 + 56) = 0;
      *((_DWORD *)_R5 + 29) = 0;
      *((_DWORD *)_R5 + 27) = 0;
      *((_DWORD *)_R5 + 28) = 0;
      MovementInterpolator::stop((ServerPlayer *)((char *)_R5 + 4040));
    }
    Player::normalTick(_R5);
    v7 = *((_DWORD *)_R5 + 1338);
    _VF = __OFSUB__(v7--, 1);
    *((_DWORD *)_R5 + 1338) = v7;
    if ( (unsigned __int8)((v7 < 0) ^ _VF) | (v7 == 0) )
      v9 = (BlockSource *)Entity::getRegion(_R5);
      v10 = (Dimension *)BlockSource::getDimension(v9);
      v11 = Dimension::getWorldGenerator(v10);
      v12 = *(int (__fastcall **)(int, char *))(*(_DWORD *)v11 + 8);
      v13 = (*(int (__fastcall **)(ServerPlayer *))(*(_DWORD *)_R5 + 52))(_R5);
      BlockPos::BlockPos((int)&v33, v13);
      *((_BYTE *)_R5 + 5356) = v12(v11, &v33);
      *((_DWORD *)_R5 + 1338) = 80;
      v14 = Entity::getLevel(_R5);
      Level::broadcastEntityEvent(v14, (int)_R5, 66, *((_BYTE *)_R5 + 5356));
    if ( !ItemInstance::isNull((ServerPlayer *)((char *)_R5 + 4832)) )
      --*((_DWORD *)_R5 + 1226);
    Player::getContainerManager((Player *)&v31, (int)_R5);
    v15 = v32;
    if ( v32 )
      v16 = *(_DWORD *)(v32 + 4);
      v17 = (unsigned int *)(v32 + 4);
      do
      {
        while ( 1 )
        {
          if ( !v16 )
          {
            v20 = 1;
            v15 = 0;
            goto LABEL_19;
          }
          __dmb();
          v18 = __ldrex(v17);
          if ( v18 == v16 )
            break;
          __clrex();
          v16 = v18;
        }
        v19 = __strex(v16 + 1, v17);
        v16 = v18;
      }
      while ( v19 );
      __dmb();
      v20 = 0;
      if ( !*v17 )
        v20 = 1;
LABEL_19:
      v21 = v32;
      v22 = v31;
      if ( v20 )
        v22 = 0;
      if ( v32 )
        v23 = (unsigned int *)(v32 + 8);
        if ( &pthread_create )
          do
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
        else
          v24 = (*v23)--;
        if ( v24 == 1 )
          (*(void (**)(void))(*(_DWORD *)v21 + 12))();
      if ( v22 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 40))(v22);
    else
      v15 = 0;
    (*(void (__fastcall **)(char *))(*((_DWORD *)_R5 + 1324) + 56))((char *)_R5 + 5296);
    (*(void (__fastcall **)(ServerPlayer *))(*(_DWORD *)_R5 + 876))(_R5);
    if ( Mob::isGliding(_R5) == 1 )
      __asm
        VMOV.F32        S0, #-0.5
        VLDR            S2, [R5,#0x70]
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        *((_DWORD *)_R5 + 56) = 1065353216;
    if ( Abilities::isFlying((ServerPlayer *)((char *)_R5 + 4320)) == 1 )
      v28 = (char *)_R5 + 217;
      if ( !*((_BYTE *)_R5 + 217) )
        if ( *((_BYTE *)_R5 + 216) )
          __asm
            VLDR            S0, [R5,#0xE0]
            VCMPE.F32       S0, #0.0
            VMRS            APSR_nzcv, FPSCR
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            __asm
            {
              VLDR            S2, =-0.2
              VADD.F32        S0, S0, S2
              VLDR            S2, =0.0
              VCMPE.F32       S0, #0.0
              VMRS            APSR_nzcv, FPSCR
            }
            if ( _NF ^ _VF )
              __asm { VMOVLT.F32      S0, S2 }
            __asm { VSTR            S0, [R5,#0xE0] }
            (*(void (__fastcall **)(ServerPlayer *, _DWORD, signed int))(*(_DWORD *)_R5 + 544))(_R5, 0, 1);
    *v28 = *((_BYTE *)_R5 + 216);
    result = Player::updateInventoryTransactions(_R5);
    if ( v15 )
      v29 = (unsigned int *)(v15 + 4);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v29);
        while ( __strex(result - 1, v29) );
      else
        result = (*v29)--;
      if ( result == 1 )
        v30 = (unsigned int *)(v15 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
            result = __ldrex(v30);
          while ( __strex(result - 1, v30) );
          result = (*v30)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  }
  return result;
}


int __fastcall ServerPlayer::setPermissions(int a1, char a2)
{
  int v2; // r4@1
  Level *v3; // r0@1
  int v4; // r0@1
  int v5; // r6@1
  int (__fastcall *v6)(int, int, char *, int); // r7@1
  int v7; // r0@1
  char v9; // [sp+10h] [bp-48h]@1

  v2 = a1;
  Player::setPermissions(a1, a2);
  v3 = (Level *)Entity::getLevel((Entity *)v2);
  v4 = Level::getAdventureSettings(v3);
  AdventureSettingsPacket::AdventureSettingsPacket(
    (int)&v9,
    v4,
    v2 + 4320,
    0,
    *(_QWORD *)(v2 + 56),
    *(_QWORD *)(v2 + 56) >> 32,
    0);
  v5 = *(_DWORD *)(v2 + 4924);
  v6 = *(int (__fastcall **)(int, int, char *, int))(*(_DWORD *)v5 + 16);
  v7 = Player::getClientSubId((Player *)v2);
  return v6(v5, v2 + 4392, &v9, v7);
}


int __fastcall ServerPlayer::_nextContainerCounter(int result)
{
  char v1; // r2@1

  v1 = *(_BYTE *)(result + 5328) + 1;
  if ( v1 > 99 )
    v1 = 1;
  *(_BYTE *)(result + 5328) = v1;
  return result;
}


int __fastcall ServerPlayer::tickWorld(Entity *a1, __int64 *a2)
{
  Entity *v2; // r4@1
  int v3; // r5@1
  void **v5; // [sp+0h] [bp-28h]@7
  signed int v6; // [sp+4h] [bp-24h]@7
  signed int v7; // [sp+8h] [bp-20h]@7
  char v8; // [sp+Ch] [bp-1Ch]@7
  int v9; // [sp+10h] [bp-18h]@7

  v2 = a1;
  v3 = Player::tickWorld(a1, a2);
  ServerPlayer::_sendQueuedChunks(v2);
  ServerPlayer::_updateNearbyEntities(v2);
  if ( *((_BYTE *)v2 + 5329) )
  {
    Entity::getLevel(v2);
    if ( v3 >= 105 && *((_DWORD *)v2 + 1147) >= 105 && *((_BYTE *)v2 + 4821) )
    {
      if ( *((_DWORD *)v2 + 1322) )
        (*((void (__fastcall **)(_DWORD, _DWORD))v2 + 1323))((char *)v2 + 5280, v2);
      *((_BYTE *)v2 + 5329) = 0;
      *((_BYTE *)v2 + 4829) = 1;
      (*(void (__fastcall **)(Entity *))(*(_DWORD *)v2 + 1240))(v2);
      v6 = 2;
      v7 = 1;
      v8 = 0;
      v5 = &off_26E9314;
      v9 = 3;
      (*(void (__fastcall **)(Entity *, void ***))(*(_DWORD *)v2 + 1524))(v2, &v5);
    }
  }
  return v3;
}


int __fastcall ServerPlayer::onEffectRemoved(ServerPlayer *this, MobEffectInstance *a2)
{
  MobEffectInstance *v2; // r5@1
  ServerPlayer *v3; // r4@1
  int v4; // r0@1
  int v6; // [sp+0h] [bp-48h]@1
  int v7; // [sp+4h] [bp-44h]@1
  void **v8; // [sp+8h] [bp-40h]@1
  signed int v9; // [sp+Ch] [bp-3Ch]@1
  signed int v10; // [sp+10h] [bp-38h]@1
  char v11; // [sp+14h] [bp-34h]@1
  int v12; // [sp+18h] [bp-30h]@1
  int v13; // [sp+1Ch] [bp-2Ch]@1
  int v14; // [sp+20h] [bp-28h]@1
  char v15; // [sp+24h] [bp-24h]@1
  int v16; // [sp+28h] [bp-20h]@1
  int v17; // [sp+2Ch] [bp-1Ch]@1
  char v18; // [sp+30h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  Mob::onEffectRemoved(this, a2);
  Entity::getRuntimeID((Entity *)&v6, (int)v3);
  v4 = MobEffectInstance::getId(v2);
  v9 = 2;
  v10 = 1;
  v11 = 0;
  v8 = &off_26E95E4;
  v12 = v6;
  v13 = v7;
  v14 = 0;
  v15 = 3;
  v16 = v4;
  v17 = 0;
  v18 = 0;
  return (*(int (**)(void))(**((_DWORD **)v3 + 1231) + 8))();
}


void __fastcall ServerPlayer::openStructureEditor(ServerPlayer *this, const BlockPos *a2)
{
  ServerPlayer *v2; // r4@1
  const BlockPos *v3; // r5@1
  char v4; // r2@2
  int v5; // r1@4
  int v6; // r2@4
  int v7; // [sp+0h] [bp-40h]@4
  int v8; // [sp+4h] [bp-3Ch]@4
  void **v9; // [sp+8h] [bp-38h]@4
  signed int v10; // [sp+Ch] [bp-34h]@4
  signed int v11; // [sp+10h] [bp-30h]@4
  char v12; // [sp+14h] [bp-2Ch]@4
  char v13; // [sp+15h] [bp-2Bh]@4
  char v14; // [sp+16h] [bp-2Ah]@4
  int v15; // [sp+18h] [bp-28h]@4
  int v16; // [sp+1Ch] [bp-24h]@4
  int v17; // [sp+20h] [bp-20h]@4
  signed int v18; // [sp+28h] [bp-18h]@4
  signed int v19; // [sp+2Ch] [bp-14h]@4

  v2 = this;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1348))() == 1 )
  {
    v4 = *((_BYTE *)v2 + 5328) + 1;
    if ( v4 > 99 )
      v4 = 1;
    *((_BYTE *)v2 + 5328) = v4;
    v10 = 2;
    v11 = 1;
    v12 = 0;
    v9 = &off_26E96FC;
    v13 = v4;
    v14 = 14;
    v5 = *((_DWORD *)v3 + 1);
    v6 = *((_DWORD *)v3 + 2);
    v15 = *(_DWORD *)v3;
    v16 = v5;
    v17 = v6;
    v18 = -1;
    v19 = -1;
    (*(void (__fastcall **)(ServerPlayer *, void ***))(*(_DWORD *)v2 + 1524))(v2, &v9);
    v7 = 0;
    v8 = 0;
    ServerPlayer::_setContainerManager((int)v2, (int)&v7);
  }
}


Player *__fastcall ServerPlayer::~ServerPlayer(ServerPlayer *this)
{
  ServerPlayer *v1; // r4@1
  int v2; // r0@1
  void *v3; // r0@3
  ServerPlayer *v4; // r5@3
  void *v5; // r7@4
  char *v6; // r0@5
  void *v7; // r0@8
  ServerPlayer *v8; // r7@8
  void *v9; // r5@9
  int v10; // r5@10
  char *v11; // r0@10
  void *v12; // r0@13
  void (*v13)(void); // r3@17

  v1 = this;
  *(_DWORD *)this = &off_26EB458;
  v2 = *((_DWORD *)this + 1336);
  *((_DWORD *)v1 + 1336) = 0;
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  v3 = (void *)*((_DWORD *)v1 + 1352);
  v4 = (ServerPlayer *)((char *)v1 + 5400);
  if ( v3 )
  {
    do
    {
      v5 = *(void **)v3;
      operator delete(v3);
      v3 = v5;
    }
    while ( v5 );
  }
  _aeabi_memclr4(*(_DWORD *)v4, 4 * *((_DWORD *)v1 + 1351));
  *((_DWORD *)v1 + 1353) = 0;
  *((_DWORD *)v1 + 1352) = 0;
  v6 = *(char **)v4;
  if ( *(_DWORD *)v4 && (char *)v1 + 5424 != v6 )
    operator delete(v6);
  v7 = (void *)*((_DWORD *)v1 + 1345);
  v8 = (ServerPlayer *)((char *)v1 + 5372);
  if ( v7 )
      v9 = *(void **)v7;
      operator delete(v7);
      v7 = v9;
    while ( v9 );
  v10 = (int)v1 + 5344;
  _aeabi_memclr4(*(_DWORD *)v8, 4 * *((_DWORD *)v1 + 1344));
  *((_DWORD *)v1 + 1346) = 0;
  *((_DWORD *)v1 + 1345) = 0;
  v11 = *(char **)v8;
  if ( *(_DWORD *)v8 && (char *)v1 + 5396 != v11 )
    operator delete(v11);
  v12 = (void *)*((_DWORD *)v1 + 1340);
  if ( v12 )
    operator delete(v12);
  if ( *(_DWORD *)v10 )
    (*(void (**)(void))(**(_DWORD **)v10 + 4))();
  *(_DWORD *)v10 = 0;
  InventoryMenu::~InventoryMenu((ServerPlayer *)((char *)v1 + 5296));
  v13 = (void (*)(void))*((_DWORD *)v1 + 1322);
  if ( v13 )
    v13();
  return j_j_j__ZN6PlayerD2Ev_0(v1);
}


int __fastcall ServerPlayer::sendNetworkPacket(ServerPlayer *this, Packet *a2)
{
  return (*(int (__fastcall **)(_DWORD, char *, Packet *, _DWORD))(**((_DWORD **)this + 1231) + 16))(
           *((_DWORD *)this + 1231),
           (char *)this + 4392,
           a2,
           *((_BYTE *)this + 4820));
}


void __fastcall ServerPlayer::openHopper(ServerPlayer *this, const BlockPos *a2)
{
  ServerPlayer::openHopper(this, a2);
}


signed int __fastcall ServerPlayer::_sendQueuedChunk(int a1, unsigned int *a2)
{
  int v2; // r4@1
  unsigned int *v3; // r5@1
  unsigned int v4; // r6@1
  int v5; // r0@2
  Dimension *v6; // r0@2
  int v7; // r0@3
  char v8; // r0@4
  LevelChunk *v9; // r0@5
  int v10; // r1@5
  SubChunk **v11; // r6@6
  int v12; // r7@6
  void *v13; // r0@11
  void *v14; // r0@12
  char *v15; // r0@13
  int v16; // r4@14
  unsigned int *v17; // r1@15
  unsigned int v18; // r0@17
  int v19; // r4@19
  unsigned int *v20; // r1@20
  unsigned int v21; // r0@22
  unsigned int *v22; // r5@26
  unsigned int v23; // r0@28
  unsigned int *v25; // r5@36
  unsigned int v26; // r0@38
  unsigned int *v27; // r2@44
  signed int v28; // r1@46
  unsigned int *v29; // r2@48
  signed int v30; // r1@50
  unsigned int *v31; // r2@52
  signed int v32; // r1@54
  void **v33; // [sp+0h] [bp-60h]@5
  BinaryStream *v34; // [sp+4h] [bp-5Ch]@5
  void **v35; // [sp+8h] [bp-58h]@5
  int v36; // [sp+10h] [bp-50h]@12
  int v37; // [sp+18h] [bp-48h]@11
  void **v38; // [sp+20h] [bp-40h]@5
  int v39; // [sp+24h] [bp-3Ch]@5
  int v40; // [sp+28h] [bp-38h]@5
  char v41; // [sp+2Ch] [bp-34h]@5
  __int64 v42; // [sp+30h] [bp-30h]@5
  char *v43; // [sp+38h] [bp-28h]@5
  LevelChunk *v44; // [sp+40h] [bp-20h]@3
  int v45; // [sp+44h] [bp-1Ch]@14

  v2 = a1;
  v3 = a2;
  v4 = *a2;
  if ( v4 != (*(int (**)(void))(*(_DWORD *)a1 + 524))() )
    return 0;
  v5 = Entity::getLevel((Entity *)v2);
  v6 = (Dimension *)Level::getDimension(v5, *v3);
  if ( !v6 )
  v7 = Dimension::getChunkSource(v6);
  (*(void (__fastcall **)(LevelChunk **))(*(_DWORD *)v7 + 16))(&v44);
  if ( !v44 || (v8 = *LevelChunk::getState(v44), __dmb(), v8 != 8) )
  {
    v19 = v45;
    if ( v45 )
    {
      v20 = (unsigned int *)(v45 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      }
      else
        v21 = (*v20)--;
      if ( v21 == 1 )
        v22 = (unsigned int *)(v19 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
        if ( &pthread_create )
        {
          __dmb();
          do
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
        }
        else
          v23 = (*v22)--;
        if ( v23 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
    }
  }
  v39 = 2;
  v40 = 1;
  v41 = 0;
  v38 = &off_26E9814;
  v42 = *(_QWORD *)LevelChunk::getPosition(v44);
  v43 = (char *)&unk_28898CC;
  v33 = &off_26D53B0;
  v34 = (BinaryStream *)BinaryStream::BinaryStream((int)&v35, (int *)&v43, 0);
  BinaryStream::writeByte(v34, *((_BYTE *)v44 + 140));
  v9 = v44;
  v10 = *((_DWORD *)v44 + 35);
  if ( 4 * v10 )
    v11 = (SubChunk **)((char *)v44 + 76);
    v12 = 4 * v10;
    do
      SubChunk::serialize(*v11, (IDataOutput *)&v33);
      v12 -= 4;
      ++v11;
    while ( v12 );
    v9 = v44;
  LevelChunk::serialize2DMaps(v9, (IDataOutput *)&v33);
  if ( !LevelChunk::serializeBorderBlocks(v44, (IDataOutput *)&v33) )
    BinaryStream::writeByte(v34, 0);
  LevelChunk::serializeBlockExtraData(v44, (IDataOutput *)&v33);
  LevelChunk::serializeBlockEntities(v44, (IDataOutput *)&v33);
  (*(void (__fastcall **)(int, void ***))(*(_DWORD *)v2 + 1524))(v2, &v38);
  ++*(_DWORD *)(v2 + 4588);
  v35 = &off_26D53E4;
  v13 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v37 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v35 = &off_26E91A4;
  v14 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v36 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = v43 - 12;
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v43 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = v45;
  if ( v45 )
    v17 = (unsigned int *)(v45 + 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      v25 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  return 1;
}


int __fastcall ServerPlayer::prepareRegion(ServerPlayer *this, ChunkSource *a2)
{
  ServerPlayer *v2; // r4@1
  unsigned int v3; // r6@1
  int v4; // r7@2
  int v5; // r0@2
  int v11; // r0@4
  unsigned int v14; // r1@5
  signed int v15; // r2@5
  int result; // r0@13
  int v17; // r7@14
  ChunkSource *v18; // r6@14
  void *v19; // r8@14
  _DWORD *v20; // r0@14
  __int64 v21; // r1@14
  _DWORD *v22; // [sp+8h] [bp-28h]@14
  __int64 v23; // [sp+10h] [bp-20h]@14

  v2 = this;
  Player::prepareRegion(this, a2);
  v3 = *((_DWORD *)v2 + 1337);
  if ( v3 )
  {
    v4 = *((_DWORD *)v2 + 1335);
    v5 = Entity::getDimension(v2);
    _R0 = (*(int (**)(void))(*(_DWORD *)v5 + 144))();
    __asm
    {
      VLDR            S0, =3.4028e38
      VMOV            S2, R0
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      v11 = Entity::getDimension(v2);
      _R0 = (*(int (**)(void))(*(_DWORD *)v11 + 144))();
      __asm
      {
        VLDR            S0, =0.0625
        VMOV            S2, R0
        VMOV.F32        S4, #8.0
        VMUL.F32        S0, S2, S0
        VADD.F32        S0, S0, S4
        VCVTR.U32.F32   S0, S0
        VMOV            R0, S0
      }
    else
      _R0 = -1;
    v14 = *((_DWORD *)v2 + 1333);
    v15 = v3;
    if ( v3 <= 5 )
      v15 = 5;
    if ( _R0 < v14 )
      v14 = _R0;
    if ( v14 >= v3 )
      v14 = v15;
    if ( v4 != v14 )
      ServerPlayer::setClientChunkRadius(v2, *((_DWORD *)v2 + 1337));
  }
  result = *((_DWORD *)v2 + 1336);
  if ( !result )
    v17 = *((_DWORD *)v2 + 1335);
    v18 = (ChunkSource *)*((_DWORD *)v2 + 1156);
    v19 = operator new(0xC8u);
    v20 = operator new(4u);
    LODWORD(v21) = sub_15DC8A0;
    *v20 = v2;
    HIDWORD(v21) = sub_15DC634;
    v22 = v20;
    v23 = v21;
    PlayerChunkSource::PlayerChunkSource((int)v19, (int)v2, v18, 16 * v17, 0, (int)&v22);
    if ( (_DWORD)v23 )
      ((void (*)(void))v23)();
    result = *((_DWORD *)v2 + 1336);
    *((_DWORD *)v2 + 1336) = v19;
    if ( result )
      result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


void __fastcall ServerPlayer::openCommandBlockMinecart(int a1, __int64 *a2)
{
  ServerPlayer::openCommandBlockMinecart(a1, a2);
}


void __fastcall ServerPlayer::openDispenser(ServerPlayer *this, const BlockPos *a2, int a3)
{
  ServerPlayer *v3; // r4@1
  const BlockPos *v4; // r5@1
  int v5; // r6@1
  char v6; // r1@2
  char v7; // r0@4
  int v8; // r1@6
  int v9; // r2@6
  _BYTE *v10; // r2@6
  int v11; // r5@7
  unsigned int *v12; // r1@8
  unsigned int v13; // r0@10
  int v14; // r5@12
  unsigned int *v15; // r1@13
  unsigned int v16; // r0@15
  unsigned int *v17; // r4@19
  unsigned int v18; // r0@21
  unsigned int *v19; // r4@25
  unsigned int v20; // r0@27
  int v21; // r4@32
  unsigned int *v22; // r1@33
  unsigned int v23; // r0@35
  unsigned int *v24; // r5@39
  unsigned int v25; // r0@41
  unsigned int *v26; // r1@47
  unsigned int v27; // r0@49
  int v28; // [sp+8h] [bp-68h]@12
  int v29; // [sp+Ch] [bp-64h]@12
  int v30; // [sp+10h] [bp-60h]@12
  int v31; // [sp+14h] [bp-5Ch]@12
  int v32; // [sp+18h] [bp-58h]@7
  int v33; // [sp+1Ch] [bp-54h]@7
  int v34; // [sp+20h] [bp-50h]@7
  int v35; // [sp+24h] [bp-4Ch]@7
  void **v36; // [sp+28h] [bp-48h]@4
  signed int v37; // [sp+2Ch] [bp-44h]@4
  signed int v38; // [sp+30h] [bp-40h]@4
  char v39; // [sp+34h] [bp-3Ch]@4
  char v40; // [sp+35h] [bp-3Bh]@4
  char v41; // [sp+36h] [bp-3Ah]@6
  int v42; // [sp+38h] [bp-38h]@6
  int v43; // [sp+3Ch] [bp-34h]@6
  int v44; // [sp+40h] [bp-30h]@6
  signed int v45; // [sp+48h] [bp-28h]@6
  signed int v46; // [sp+4Ch] [bp-24h]@6
  char v47; // [sp+54h] [bp-1Ch]@7
  char v48; // [sp+58h] [bp-18h]@12

  v3 = this;
  v4 = a2;
  v5 = a3;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1348))() == 1 )
  {
    v6 = *((_BYTE *)v3 + 5328) + 1;
    if ( v6 > 99 )
      v6 = 1;
    *((_BYTE *)v3 + 5328) = v6;
    v37 = 2;
    v38 = 1;
    v39 = 0;
    v36 = &off_26E96FC;
    v7 = 7;
    v40 = v6;
    if ( v5 )
      v7 = 6;
    v41 = v7;
    v8 = *((_DWORD *)v4 + 1);
    v9 = *((_DWORD *)v4 + 2);
    v42 = *(_DWORD *)v4;
    v43 = v8;
    v44 = v9;
    v45 = -1;
    v46 = -1;
    (*(void (__fastcall **)(ServerPlayer *, void ***))(*(_DWORD *)v3 + 1524))(v3, &v36);
    v10 = (char *)v3 + 5328;
    if ( v5 == 1 )
    {
      std::__shared_ptr<DispenserContainerManagerModel,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<DispenserContainerManagerModel>,ContainerID &,ServerPlayer &,BlockPos const&>(
        (int)&v32,
        (int)&v47,
        v10,
        (int)v3,
        (int)v4);
      v11 = v33;
      v34 = v32;
      v35 = v33;
      v32 = 0;
      v33 = 0;
      ServerPlayer::_setContainerManager((int)v3, (int)&v34);
      if ( v11 )
      {
        v12 = (unsigned int *)(v11 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        }
        else
          v13 = (*v12)--;
        if ( v13 == 1 )
          v17 = (unsigned int *)(v11 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
          if ( &pthread_create )
          {
            __dmb();
            do
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
          }
          else
            v18 = (*v17)--;
          if ( v18 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
      }
      v21 = v33;
      if ( v33 )
        v22 = (unsigned int *)(v33 + 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 == 1 )
          v24 = (unsigned int *)(v21 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
            goto LABEL_58;
LABEL_57:
          v25 = (*v24)--;
LABEL_58:
          if ( v25 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
          return;
    }
    else
      std::__shared_ptr<DropperContainerManagerModel,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<DropperContainerManagerModel>,ContainerID &,ServerPlayer &,BlockPos const&>(
        (int)&v28,
        (int)&v48,
      v14 = v29;
      v30 = v28;
      v31 = v29;
      v28 = 0;
      v29 = 0;
      ServerPlayer::_setContainerManager((int)v3, (int)&v30);
      if ( v14 )
        v15 = (unsigned int *)(v14 + 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 == 1 )
          v19 = (unsigned int *)(v14 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
      v21 = v29;
      if ( v29 )
        v26 = (unsigned int *)(v29 + 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 == 1 )
          goto LABEL_57;
  }
}


void __fastcall ServerPlayer::changeDimension(Entity *a1, int a2, char a3)
{
  Entity *v3; // r4@1
  int v4; // r6@1
  char v5; // r8@1
  int v6; // r7@1
  void *v7; // r5@1
  __int64 v8; // r2@1
  int v9; // r0@1
  void *v10; // r4@1
  int v11; // r0@2
  void *v12; // [sp+4h] [bp-1Ch]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (*(int (**)(void))(*(_DWORD *)a1 + 524))();
  v7 = operator new(0x20u);
  *(_DWORD *)v7 = 0;
  *((_DWORD *)v7 + 1) = v6;
  *((_DWORD *)v7 + 2) = v4;
  v8 = *(_QWORD *)&Vec3::ZERO;
  *((_DWORD *)v7 + 5) = dword_2822498;
  *(_QWORD *)((char *)v7 + 12) = v8;
  *((_BYTE *)v7 + 24) = v5;
  *((_BYTE *)v7 + 25) = 0;
  *((_DWORD *)v7 + 7) = 0;
  Entity::_usePortal((int)v3, v6, v4, 300);
  v9 = Entity::getLevel(v3);
  v12 = v7;
  Level::requestPlayerChangeDimension(v9, (unsigned int)v3, (int *)&v12);
  v10 = v12;
  if ( v12 )
  {
    v11 = *((_DWORD *)v12 + 7);
    if ( v11 )
      (*(void (**)(void))(*(_DWORD *)v11 + 4))();
    operator delete(v10);
  }
}


int __fastcall ServerPlayer::checkMovementStats(ServerPlayer *this, const Vec3 *a2)
{
  MinecraftEventing *v3; // r5@1

  _R4 = a2;
  v3 = this;
  __asm
  {
    VLDR            S0, [R4]
    VLDR            S2, [R4,#4]
  }
  _R6 = (char *)this + 4740;
    VMUL.F32        S0, S0, S0
    VLDR            S4, [R4,#8]
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
  _R0 = &Player::DISTANCE_TO_TRANSFORM_EVENT;
    VADD.F32        S0, S2, S0
    VLDR            S2, [R6]
    VADD.F32        S0, S0, S4
    VSQRT.F32       S0, S0
    VADD.F32        S0, S0, S2
    VLDR            S2, [R0]
    VCMPE.F32       S0, S2
    VSTR            S0, [R6]
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    MinecraftEventing::fireEventPlayerTransform(v3, a2);
    *(_DWORD *)_R6 = 0;
  return j_j_j__ZN6Player18checkMovementStatsERK4Vec3_0(v3, _R4);
}


void __fastcall ServerPlayer::openHopper(int a1, __int64 *a2)
{
  int v2; // r4@1
  __int64 *v3; // r5@1
  char v4; // r1@2
  int v5; // r5@4
  unsigned int *v6; // r1@5
  unsigned int v7; // r0@7
  unsigned int *v8; // r4@11
  unsigned int v9; // r0@13
  int v10; // r4@18
  unsigned int *v11; // r1@19
  unsigned int v12; // r0@21
  unsigned int *v13; // r5@25
  unsigned int v14; // r0@27
  int v15; // [sp+8h] [bp-50h]@4
  int v16; // [sp+Ch] [bp-4Ch]@4
  int v17; // [sp+10h] [bp-48h]@4
  int v18; // [sp+14h] [bp-44h]@4
  void **v19; // [sp+18h] [bp-40h]@4
  signed int v20; // [sp+1Ch] [bp-3Ch]@4
  signed int v21; // [sp+20h] [bp-38h]@4
  char v22; // [sp+24h] [bp-34h]@4
  char v23; // [sp+25h] [bp-33h]@4
  char v24; // [sp+26h] [bp-32h]@4
  int v25; // [sp+28h] [bp-30h]@4
  int v26; // [sp+2Ch] [bp-2Ch]@4
  int v27; // [sp+30h] [bp-28h]@4
  __int64 v28; // [sp+38h] [bp-20h]@4
  char v29; // [sp+44h] [bp-14h]@4

  v2 = a1;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)a1 + 1348))() == 1 )
  {
    v4 = *(_BYTE *)(v2 + 5328) + 1;
    if ( v4 > 99 )
      v4 = 1;
    *(_BYTE *)(v2 + 5328) = v4;
    v20 = 2;
    v21 = 1;
    v22 = 0;
    v19 = &off_26E96FC;
    v23 = v4;
    v24 = 8;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = *v3;
    (*(void (__fastcall **)(int, void ***))(*(_DWORD *)v2 + 1524))(v2, &v19);
    std::__shared_ptr<HopperContainerManagerModel,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<HopperContainerManagerModel>,ContainerID &,ServerPlayer &,EntityUniqueID const&>(
      (int)&v15,
      (int)&v29,
      (_BYTE *)(v2 + 5328),
      v2,
      v3);
    v5 = v16;
    v17 = v15;
    v18 = v16;
    v15 = 0;
    v16 = 0;
    ServerPlayer::_setContainerManager(v2, (int)&v17);
    if ( v5 )
    {
      v6 = (unsigned int *)(v5 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        v8 = (unsigned int *)(v5 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
        }
        else
          v9 = (*v8)--;
        if ( v9 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
    }
    v10 = v16;
    if ( v16 )
      v11 = (unsigned int *)(v16 + 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        v13 = (unsigned int *)(v10 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  }
}


CompoundTag *__fastcall ServerPlayer::openHorseInventory(int a1, __int64 *a2)
{
  int v2; // r5@1
  __int64 *v3; // r6@1
  CompoundTag *result; // r0@1
  char v5; // r0@2
  int v6; // r0@4
  int v7; // r0@4
  int v8; // r6@4
  unsigned int *v9; // r1@5
  unsigned int v10; // r0@7
  unsigned int *v11; // r5@11
  unsigned int v12; // r0@13
  int v13; // r5@18
  unsigned int *v14; // r1@19
  unsigned int v15; // r0@21
  unsigned int *v16; // r6@25
  unsigned int v17; // r0@27
  int v18; // [sp+8h] [bp-68h]@4
  int v19; // [sp+Ch] [bp-64h]@4
  int v20; // [sp+10h] [bp-60h]@4
  int v21; // [sp+14h] [bp-5Ch]@4
  void **v22; // [sp+18h] [bp-58h]@4
  int v23; // [sp+38h] [bp-38h]@32
  char v24; // [sp+58h] [bp-18h]@4

  v2 = a1;
  v3 = a2;
  result = (CompoundTag *)(*(int (**)(void))(*(_DWORD *)a1 + 1348))();
  if ( result == (CompoundTag *)1 )
  {
    v5 = *(_BYTE *)(v2 + 5328) + 1;
    if ( v5 > 99 )
      v5 = 1;
    *(_BYTE *)(v2 + 5328) = v5;
    v6 = Entity::getLevel((Entity *)v2);
    v7 = Level::fetchEntity(v6, 0, *v3, (unsigned __int64)*v3 >> 32, 0);
    Entity::createUpdateEquipPacket((Entity *)&v22, v7, *(_BYTE *)(v2 + 5328));
    (*(void (__fastcall **)(int, void ***))(*(_DWORD *)v2 + 1524))(v2, &v22);
    std::__shared_ptr<HorseContainerManagerModel,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<HorseContainerManagerModel>,ContainerID &,ServerPlayer &,EntityUniqueID const&>(
      (int)&v18,
      (int)&v24,
      (_BYTE *)(v2 + 5328),
      v2,
      v3);
    v8 = v19;
    v20 = v18;
    v21 = v19;
    v18 = 0;
    v19 = 0;
    ServerPlayer::_setContainerManager(v2, (int)&v20);
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
    v13 = v19;
    if ( v19 )
      v14 = (unsigned int *)(v19 + 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 == 1 )
        v16 = (unsigned int *)(v13 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
    v22 = &off_26E9954;
    result = CompoundTag::~CompoundTag((CompoundTag *)&v23);
  }
  return result;
}


int __fastcall ServerPlayer::hurtArmor(ServerPlayer *this, int a2)
{
  int v2; // r4@1
  ServerPlayer *v3; // r5@1
  void **v5; // [sp+4h] [bp-24h]@1
  int v6; // [sp+8h] [bp-20h]@1
  int v7; // [sp+Ch] [bp-1Ch]@1
  char v8; // [sp+10h] [bp-18h]@1
  int v9; // [sp+14h] [bp-14h]@1

  v2 = a2;
  v3 = this;
  Mob::hurtArmor(this, a2);
  v6 = 2;
  v7 = 1;
  v8 = 0;
  v5 = &off_26E9634;
  v9 = v2;
  return (*(int (__fastcall **)(ServerPlayer *, void ***))(*(_DWORD *)v3 + 1524))(v3, &v5);
}


signed int __fastcall ServerPlayer::isHostingPlayer(ServerPlayer *this)
{
  Player *v1; // r4@1
  NetworkHandler *v2; // r5@1
  char *v3; // r6@1
  char v5; // [sp+7h] [bp-11h]@1

  v1 = this;
  v2 = (NetworkHandler *)*((_DWORD *)this + 1319);
  v3 = Player::getClientId(this);
  v5 = Player::getClientSubId(v1);
  return NetworkHandler::isHostingPlayer(v2, (const NetworkIdentifier *)v3, (const unsigned __int8 *)&v5);
}


void __fastcall ServerPlayer::_setContainerManager(int a1, int a2)
{
  ServerPlayer::_setContainerManager(a1, a2);
}


signed int __fastcall ServerPlayer::_removeNearbyEntities(ServerPlayer *this)
{
  ServerPlayer *v1; // r4@1
  int v2; // r5@1
  char *v3; // r7@1
  char *v4; // r8@1
  __int64 v5; // r0@2
  int v6; // r6@5
  signed int result; // r0@6
  void **v8; // [sp+8h] [bp-40h]@2
  signed int v9; // [sp+Ch] [bp-3Ch]@2
  signed int v10; // [sp+10h] [bp-38h]@2
  char v11; // [sp+14h] [bp-34h]@2
  __int64 v12; // [sp+18h] [bp-30h]@2

  v1 = this;
  v2 = *((_DWORD *)this + 1352);
  v3 = (char *)this + 5400;
  v4 = (char *)this + 5408;
  if ( v2 )
  {
    do
    {
      v5 = *(_QWORD *)(v2 + 8);
      v9 = 2;
      v10 = 1;
      v11 = 0;
      v8 = &off_26E94F4;
      v12 = v5;
      (*(void (__fastcall **)(ServerPlayer *, void ***))(*(_DWORD *)v1 + 1524))(v1, &v8);
      v2 = *(_DWORD *)v2;
    }
    while ( v2 );
    v2 = *(_DWORD *)v4;
  }
      v6 = *(_DWORD *)v2;
      operator delete((void *)v2);
      v2 = v6;
    while ( v6 );
  _aeabi_memclr4(*(_DWORD *)v3, 4 * *((_DWORD *)v1 + 1351));
  result = 5412;
  *((_DWORD *)v1 + 1353) = 0;
  *(_DWORD *)v4 = 0;
  return result;
}


void __fastcall ServerPlayer::openAnvil(ServerPlayer *this, const BlockPos *a2)
{
  ServerPlayer *v2; // r4@1
  const BlockPos *v3; // r5@1
  char v4; // r1@2
  int v5; // r1@4
  int v6; // r2@4
  int v7; // r5@4
  unsigned int *v8; // r1@5
  unsigned int v9; // r0@7
  unsigned int *v10; // r4@11
  unsigned int v11; // r0@13
  int v12; // r4@18
  unsigned int *v13; // r1@19
  unsigned int v14; // r0@21
  unsigned int *v15; // r5@25
  unsigned int v16; // r0@27
  int v17; // [sp+8h] [bp-50h]@4
  int v18; // [sp+Ch] [bp-4Ch]@4
  int v19; // [sp+10h] [bp-48h]@4
  int v20; // [sp+14h] [bp-44h]@4
  void **v21; // [sp+18h] [bp-40h]@4
  signed int v22; // [sp+1Ch] [bp-3Ch]@4
  signed int v23; // [sp+20h] [bp-38h]@4
  char v24; // [sp+24h] [bp-34h]@4
  char v25; // [sp+25h] [bp-33h]@4
  char v26; // [sp+26h] [bp-32h]@4
  int v27; // [sp+28h] [bp-30h]@4
  int v28; // [sp+2Ch] [bp-2Ch]@4
  int v29; // [sp+30h] [bp-28h]@4
  signed int v30; // [sp+38h] [bp-20h]@4
  signed int v31; // [sp+3Ch] [bp-1Ch]@4
  char v32; // [sp+44h] [bp-14h]@4

  v2 = this;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1348))() == 1 )
  {
    v4 = *((_BYTE *)v2 + 5328) + 1;
    if ( v4 > 99 )
      v4 = 1;
    *((_BYTE *)v2 + 5328) = v4;
    v22 = 2;
    v23 = 1;
    v24 = 0;
    v21 = &off_26E96FC;
    v25 = v4;
    v26 = 5;
    v5 = *((_DWORD *)v3 + 1);
    v6 = *((_DWORD *)v3 + 2);
    v27 = *(_DWORD *)v3;
    v28 = v5;
    v29 = v6;
    v30 = -1;
    v31 = -1;
    (*(void (__fastcall **)(ServerPlayer *, void ***))(*(_DWORD *)v2 + 1524))(v2, &v21);
    std::__shared_ptr<AnvilContainerManagerModel,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<AnvilContainerManagerModel>,ContainerID &,ServerPlayer &,BlockPos const&>(
      (int)&v17,
      (int)&v32,
      (_BYTE *)v2 + 5328,
      (int)v2,
      (int)v3);
    v7 = v18;
    v19 = v17;
    v20 = v18;
    v17 = 0;
    v18 = 0;
    ServerPlayer::_setContainerManager((int)v2, (int)&v19);
    if ( v7 )
    {
      v8 = (unsigned int *)(v7 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        v10 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
    }
    v12 = v18;
    if ( v18 )
      v13 = (unsigned int *)(v18 + 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        v15 = (unsigned int *)(v12 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  }
}


void __fastcall ServerPlayer::openTrading(int a1, __int64 *a2)
{
  ServerPlayer::openTrading(a1, a2);
}


unsigned int __fastcall ServerPlayer::findClientChunkRadius(ServerPlayer *this, unsigned int a2)
{
  unsigned int v2; // r4@1
  ServerPlayer *v3; // r5@1
  int v4; // r0@1
  int v10; // r0@3
  unsigned int result; // r0@4
  signed int v14; // r2@4

  v2 = a2;
  v3 = this;
  v4 = Entity::getDimension(this);
  _R0 = (*(int (**)(void))(*(_DWORD *)v4 + 144))();
  __asm
  {
    VLDR            S0, =3.4028e38
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    v10 = Entity::getDimension(v3);
    _R0 = (*(int (**)(void))(*(_DWORD *)v10 + 144))();
    __asm
    {
      VLDR            S0, =0.0625
      VMOV            S2, R0
      VMOV.F32        S4, #8.0
      VMUL.F32        S0, S2, S0
      VADD.F32        S0, S0, S4
      VCVTR.U32.F32   S0, S0
      VMOV            R1, S0
    }
  else
    _R1 = -1;
  result = *((_DWORD *)v3 + 1333);
  v14 = v2;
  if ( v2 <= 5 )
    v14 = 5;
  if ( _R1 < result )
    result = _R1;
  if ( result >= v2 )
    result = v14;
  return result;
}


void __fastcall ServerPlayer::onLinkedSlotsChanged(ServerPlayer *this)
{
  Player *v1; // r4@1
  int v2; // r0@1
  int v3; // r5@1
  PlayerInventoryProxy *v4; // r0@1
  char v5; // r6@1
  PlayerInventoryProxy *v6; // r0@1
  unsigned __int64 *v7; // r0@1
  char v8; // [sp+8h] [bp-40h]@1
  int v9; // [sp+Ch] [bp-3Ch]@1
  void **v10; // [sp+10h] [bp-38h]@1
  void *ptr; // [sp+28h] [bp-20h]@1

  v1 = this;
  v2 = Player::getSupplies(this);
  PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v8, v2);
  v3 = v9;
  v4 = (PlayerInventoryProxy *)Player::getSupplies(v1);
  v5 = PlayerInventoryProxy::getSelectedContainerId(v4);
  v6 = (PlayerInventoryProxy *)Player::getSupplies(v1);
  v7 = (unsigned __int64 *)PlayerInventoryProxy::getLinkedSlots(v6);
  PlayerHotbarPacket::PlayerHotbarPacket((int)&v10, v3, v5, v7, 1);
  (*(void (__fastcall **)(Player *, void ***))(*(_DWORD *)v1 + 1524))(v1, &v10);
  v10 = &off_26DA620;
  if ( ptr )
    operator delete(ptr);
}


void __fastcall ServerPlayer::openFurnace(ServerPlayer *this, const BlockPos *a2)
{
  ServerPlayer::openFurnace(this, a2);
}


PlayerChunkSource *__fastcall ServerPlayer::moveView(ServerPlayer *this)
{
  ServerPlayer *v1; // r4@1
  PlayerChunkSource *result; // r0@1
  bool v3; // zf@1

  v1 = this;
  Player::moveView(this);
  result = (PlayerChunkSource *)*((_DWORD *)v1 + 1336);
  v3 = result == 0;
  if ( result )
    v3 = *((_BYTE *)v1 + 4829) == 0;
  if ( !v3 )
    result = (PlayerChunkSource *)j_j_j__ZN17PlayerChunkSource6centerEf(result, 16.0);
  return result;
}


int __fastcall ServerPlayer::setClientChunkRadius(ServerPlayer *this, unsigned int a2)
{
  ServerPlayer *v2; // r4@1
  unsigned int v3; // r5@1
  int v4; // r0@1
  int v10; // r0@3
  unsigned int v13; // r1@4
  signed int v14; // r2@4
  int *v15; // r5@10
  PlayerChunkSource *v16; // r0@10
  int v17; // r2@12
  void **v19; // [sp+4h] [bp-24h]@12
  int v20; // [sp+8h] [bp-20h]@12
  int v21; // [sp+Ch] [bp-1Ch]@12
  char v22; // [sp+10h] [bp-18h]@12
  int v23; // [sp+14h] [bp-14h]@12

  v2 = this;
  v3 = a2;
  *((_DWORD *)this + 1337) = a2;
  v4 = Entity::getDimension(this);
  _R0 = (*(int (**)(void))(*(_DWORD *)v4 + 144))();
  __asm
  {
    VLDR            S0, =3.4028e38
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    v10 = Entity::getDimension(v2);
    _R0 = (*(int (**)(void))(*(_DWORD *)v10 + 144))();
    __asm
    {
      VLDR            S0, =0.0625
      VMOV            S2, R0
      VMOV.F32        S4, #8.0
      VMUL.F32        S0, S2, S0
      VADD.F32        S0, S0, S4
      VCVTR.U32.F32   S0, S0
      VMOV            R0, S0
    }
  else
    _R0 = -1;
  v13 = *((_DWORD *)v2 + 1333);
  v14 = v3;
  if ( v3 <= 5 )
    v14 = 5;
  if ( _R0 < v13 )
    v13 = _R0;
  if ( v13 >= v3 )
    v13 = v14;
  *((_DWORD *)v2 + 1335) = v13;
  Player::setChunkRadius(v2, v13 + 5);
  v15 = (int *)((char *)v2 + 5340);
  v16 = (PlayerChunkSource *)*((_DWORD *)v2 + 1336);
  if ( v16 )
    PlayerChunkSource::setRadius(v16, 16 * *v15);
  v17 = *v15;
  v20 = 2;
  v21 = 1;
  v22 = 0;
  v19 = &off_26E98DC;
  v23 = v17;
  return (*(int (__fastcall **)(ServerPlayer *, void ***))(*(_DWORD *)v2 + 1524))(v2, &v19);
}


float __fastcall ServerPlayer::handleFallDistanceOnServer(ServerPlayer *this, float a2, int a3)
{
  Entity *v3; // r4@1
  float result; // r0@2
  char v5; // [sp+8h] [bp-18h]@2

  v3 = this;
  if ( a3 )
  {
    EntityDamageSource::EntityDamageSource((int)&v5, 12);
    Entity::hurt(v3, (const EntityDamageSource *)&v5, 20, 1, 0);
    result = COERCE_FLOAT(EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v5));
  }
  else
    result = j_j_j__ZN3Mob15causeFallDamageEf(this, a2);
  return result;
}


int __fastcall ServerPlayer::setContainerData(int a1, int a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r5@1
  int v6; // r4@1
  char v7; // r0@1
  void **v9; // [sp+4h] [bp-2Ch]@1
  signed int v10; // [sp+8h] [bp-28h]@1
  signed int v11; // [sp+Ch] [bp-24h]@1
  char v12; // [sp+10h] [bp-20h]@1
  int v13; // [sp+14h] [bp-1Ch]@1
  int v14; // [sp+18h] [bp-18h]@1
  char v15; // [sp+1Ch] [bp-14h]@1

  v4 = a1;
  v5 = a3;
  v6 = a4;
  v7 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 8))(a2);
  v10 = 2;
  v11 = 1;
  v12 = 0;
  v9 = &off_26E9724;
  v13 = v5;
  v14 = v6;
  v15 = v7;
  return (*(int (__fastcall **)(int, void ***))(*(_DWORD *)v4 + 1524))(v4, &v9);
}


int __fastcall ServerPlayer::partialPush(ServerPlayer *this, const Vec3 *a2)
{
  Entity *v2; // r4@1
  Dimension *v3; // r5@1
  int v4; // r0@1
  __int64 v5; // r1@1
  void **v7; // [sp+0h] [bp-38h]@1
  int v8; // [sp+4h] [bp-34h]@1
  int v9; // [sp+8h] [bp-30h]@1
  char v10; // [sp+Ch] [bp-2Ch]@1
  int v11; // [sp+10h] [bp-28h]@1
  __int64 v12; // [sp+18h] [bp-20h]@1
  int v13; // [sp+20h] [bp-18h]@1

  v2 = this;
  Entity::push(this, a2);
  v3 = (Dimension *)Entity::getDimension(v2);
  v8 = 2;
  v9 = 1;
  v10 = 0;
  v7 = &off_26E9684;
  Entity::getRuntimeID((Entity *)&v11, (int)v2);
  v4 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 64))(v2);
  v5 = *(_QWORD *)v4;
  v13 = *(_DWORD *)(v4 + 8);
  v12 = v5;
  return Dimension::sendPacketForEntity(v3, v2, (const Packet *)&v7, 0);
}


void __fastcall ServerPlayer::refreshContainer(Mob *a1, int a2)
{
  ServerPlayer::refreshContainer(a1, a2);
}


void __fastcall ServerPlayer::openContainer(ServerPlayer *this, const BlockPos *a2)
{
  Entity *v2; // r4@1
  const BlockPos *v3; // r5@1
  char v4; // r1@2
  int v5; // r1@4
  int v6; // r2@4
  BlockSource *v7; // r0@4
  int v8; // r7@4
  _BYTE *v9; // r6@4
  int v10; // r5@5
  unsigned int *v11; // r1@6
  unsigned int v12; // r0@8
  int v13; // r5@11
  unsigned int *v14; // r1@12
  unsigned int v15; // r0@14
  int v16; // r5@17
  unsigned int *v17; // r1@18
  unsigned int v18; // r0@20
  unsigned int *v19; // r4@24
  unsigned int v20; // r0@26
  int v21; // r4@31
  unsigned int *v22; // r1@32
  unsigned int v23; // r0@34
  unsigned int *v24; // r5@38
  unsigned int v25; // r0@40
  unsigned int *v26; // r4@44
  unsigned int v27; // r0@46
  unsigned int *v28; // r1@52
  unsigned int v29; // r0@54
  unsigned int *v30; // r4@64
  unsigned int v31; // r0@66
  unsigned int *v32; // r1@72
  unsigned int v33; // r0@74
  int v34; // [sp+Ch] [bp-84h]@17
  int v35; // [sp+10h] [bp-80h]@17
  int v36; // [sp+14h] [bp-7Ch]@17
  int v37; // [sp+18h] [bp-78h]@17
  int v38; // [sp+1Ch] [bp-74h]@17
  int v39; // [sp+20h] [bp-70h]@11
  int v40; // [sp+24h] [bp-6Ch]@11
  int v41; // [sp+28h] [bp-68h]@11
  int v42; // [sp+2Ch] [bp-64h]@11
  int v43; // [sp+30h] [bp-60h]@11
  int v44; // [sp+34h] [bp-5Ch]@5
  int v45; // [sp+38h] [bp-58h]@5
  int v46; // [sp+3Ch] [bp-54h]@5
  int v47; // [sp+40h] [bp-50h]@5
  int v48; // [sp+44h] [bp-4Ch]@5
  void **v49; // [sp+48h] [bp-48h]@4
  signed int v50; // [sp+4Ch] [bp-44h]@4
  signed int v51; // [sp+50h] [bp-40h]@4
  char v52; // [sp+54h] [bp-3Ch]@4
  char v53; // [sp+55h] [bp-3Bh]@4
  char v54; // [sp+56h] [bp-3Ah]@4
  int v55; // [sp+58h] [bp-38h]@4
  int v56; // [sp+5Ch] [bp-34h]@4
  int v57; // [sp+60h] [bp-30h]@4
  signed int v58; // [sp+68h] [bp-28h]@4
  signed int v59; // [sp+6Ch] [bp-24h]@4
  char v60; // [sp+70h] [bp-20h]@5
  char v61; // [sp+74h] [bp-1Ch]@11
  char v62; // [sp+78h] [bp-18h]@17

  v2 = this;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1348))() == 1 )
  {
    v4 = *((_BYTE *)v2 + 5328) + 1;
    if ( v4 > 99 )
      v4 = 1;
    *((_BYTE *)v2 + 5328) = v4;
    v50 = 2;
    v51 = 1;
    v52 = 0;
    v49 = &off_26E96FC;
    v53 = v4;
    v54 = 0;
    v5 = *((_DWORD *)v3 + 1);
    v6 = *((_DWORD *)v3 + 2);
    v55 = *(_DWORD *)v3;
    v56 = v5;
    v57 = v6;
    v58 = -1;
    v59 = -1;
    (*(void (__fastcall **)(Entity *, void ***))(*(_DWORD *)v2 + 1524))(v2, &v49);
    v7 = (BlockSource *)Entity::getRegion(v2);
    v8 = BlockSource::getBlockEntity(v7, v3);
    v9 = (char *)v2 + 5328;
    if ( BlockEntity::isType(v8, 2) == 1 )
    {
      v44 = 2;
      std::__shared_ptr<ChestContainerManagerModel,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ChestContainerManagerModel>,ContainerID &,ServerPlayer &,BlockPos const&,BlockEntityType>(
        (int)&v45,
        (int)&v60,
        v9,
        (int)v2,
        (int)v3,
        &v44);
      v10 = v46;
      v47 = v45;
      v48 = v46;
      v45 = 0;
      v46 = 0;
      ServerPlayer::_setContainerManager((int)v2, (int)&v47);
      if ( v10 )
      {
        v11 = (unsigned int *)(v10 + 4);
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
          v19 = (unsigned int *)(v10 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
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
            (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
      }
      v21 = v46;
      if ( v46 )
        v22 = (unsigned int *)(v46 + 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 == 1 )
          v24 = (unsigned int *)(v21 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
            goto LABEL_83;
LABEL_82:
          v25 = (*v24)--;
LABEL_83:
          if ( v25 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
          return;
    }
    else if ( BlockEntity::isType(v8, 23) == 1 )
      v39 = 23;
        (int)&v40,
        (int)&v61,
        &v39);
      v13 = v41;
      v42 = v40;
      v43 = v41;
      v40 = 0;
      v41 = 0;
      ServerPlayer::_setContainerManager((int)v2, (int)&v42);
      if ( v13 )
        v14 = (unsigned int *)(v13 + 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 == 1 )
          v26 = (unsigned int *)(v13 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
            v27 = (*v26)--;
          if ( v27 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
      v21 = v41;
      if ( v41 )
        v28 = (unsigned int *)(v41 + 4);
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          v29 = (*v28)--;
        if ( v29 == 1 )
          goto LABEL_82;
    else if ( BlockEntity::isType(v8, 25) == 1 )
      v34 = 25;
        (int)&v35,
        (int)&v62,
        &v34);
      v16 = v36;
      v37 = v35;
      v38 = v36;
      v35 = 0;
      v36 = 0;
      ServerPlayer::_setContainerManager((int)v2, (int)&v37);
      if ( v16 )
        v17 = (unsigned int *)(v16 + 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 == 1 )
          v30 = (unsigned int *)(v16 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
              v31 = __ldrex(v30);
            while ( __strex(v31 - 1, v30) );
            v31 = (*v30)--;
          if ( v31 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
      v21 = v36;
      if ( v36 )
        v32 = (unsigned int *)(v36 + 4);
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
          v33 = (*v32)--;
        if ( v33 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v21 + 8))(v21);
  }
}


int __fastcall ServerPlayer::setPlayerInput(int result, float a2, float _R2, bool a4, bool a5)
{
  _R12 = a2;
  if ( *(_DWORD *)(result + 512) )
  {
    __asm
    {
      VMOV.F32        S2, #-1.0
      VMOV            S4, R12
      VMOV            S0, R2
      VCMPE.F32       S4, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
      __asm
      {
        VMOV.F32        S6, #1.0
        VCMPE.F32       S4, S6
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        __asm { VSTRLE          S4, [R2] }
      VCMPE.F32       S0, S2
        VMOV.F32        S2, #1.0
        VCMPE.F32       S0, S2
        __asm { VSTRLE          S0, [R2] }
    *(_BYTE *)(result + 4080) = a4;
    result = (*(int (**)(void))(*(_DWORD *)result + 788))();
  }
  return result;
}


int __fastcall ServerPlayer::deleteContainerManager(ServerPlayer *this)
{
  Player *v1; // r5@1
  int v2; // r7@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  signed int v7; // r1@7
  int v8; // r0@11
  int v9; // r6@11
  unsigned int *v10; // r2@14
  unsigned int v11; // r1@16
  char v12; // r0@23
  int result; // r0@24
  unsigned int *v14; // r1@25
  unsigned int *v15; // r5@31
  void **v16; // [sp+4h] [bp-2Ch]@23
  int v17; // [sp+8h] [bp-28h]@23
  int v18; // [sp+Ch] [bp-24h]@23
  char v19; // [sp+10h] [bp-20h]@23
  char v20; // [sp+11h] [bp-1Fh]@23
  int v21; // [sp+14h] [bp-1Ch]@1
  int v22; // [sp+18h] [bp-18h]@1

  v1 = this;
  Player::getContainerManager((Player *)&v21, (int)this);
  v2 = v22;
  if ( v22 )
  {
    v3 = *(_DWORD *)(v22 + 4);
    v4 = (unsigned int *)(v22 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v3 )
        {
          v7 = 1;
          v2 = 0;
          goto LABEL_11;
        }
        __dmb();
        v5 = __ldrex(v4);
        if ( v5 == v3 )
          break;
        __clrex();
        v3 = v5;
      }
      v6 = __strex(v3 + 1, v4);
      v3 = v5;
    }
    while ( v6 );
    __dmb();
    v7 = 0;
    if ( !*v4 )
      v7 = 1;
LABEL_11:
    v8 = v22;
    v9 = v21;
    if ( v7 )
      v9 = 0;
    if ( v22 )
      v10 = (unsigned int *)(v22 + 8);
      if ( &pthread_create )
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      else
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (**)(void))(*(_DWORD *)v8 + 12))();
    if ( v9 )
      v12 = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      v17 = 2;
      v18 = 1;
      v19 = 0;
      v16 = &off_26DA6C0;
      v20 = v12;
      (*(void (__fastcall **)(Player *, void ***))(*(_DWORD *)v1 + 1524))(v1, &v16);
  }
  else
    v2 = 0;
  result = Player::deleteContainerManager(v1);
  if ( v2 )
    v14 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
    else
      result = (*v14)--;
    if ( result == 1 )
      v15 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
        result = (*v15)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


void __fastcall ServerPlayer::sendInventory(ServerPlayer *this, bool a2)
{
  ServerPlayer *v2; // r4@1
  bool v3; // r5@1
  int v4; // r3@1
  int v5; // r0@1
  int v6; // r6@1
  PlayerInventoryProxy *v7; // r0@1
  char v8; // r7@1
  PlayerInventoryProxy *v9; // r0@1
  unsigned __int64 *v10; // r0@1
  int v11; // r5@1
  unsigned int v12; // r1@2
  unsigned int *v13; // r0@2
  unsigned int v14; // r2@5
  unsigned int v15; // r3@6
  signed int v16; // r1@7
  int v17; // r0@11
  int v18; // r6@11
  unsigned int *v19; // r2@14
  unsigned int v20; // r1@16
  int v21; // r0@22
  int v22; // r4@22
  int v23; // r6@22
  void *v24; // r0@23
  void *v25; // r0@25
  int v26; // r0@27
  unsigned int *v27; // r1@34
  unsigned int v28; // r0@36
  unsigned int *v29; // r4@40
  unsigned int v30; // r0@42
  __int64 v31; // r4@49
  void *v32; // r0@50
  void *v33; // r0@52
  int v34; // r0@54
  __int64 v35; // r4@60
  void *v36; // r0@61
  void *v37; // r0@63
  int v38; // r0@65
  __int64 v39; // r4@71
  void *v40; // r0@72
  void *v41; // r0@74
  int v42; // r0@76
  __int64 v43; // r4@82
  void *v44; // r0@83
  void *v45; // r0@85
  int v46; // r0@87
  __int64 v47; // r4@93
  void *v48; // r0@94
  void *v49; // r0@96
  int v50; // r0@98
  void **v51; // [sp+4h] [bp-F4h]@22
  __int64 v52; // [sp+14h] [bp-E4h]@22
  int v53; // [sp+20h] [bp-D8h]@1
  int v54; // [sp+24h] [bp-D4h]@1
  char v55; // [sp+28h] [bp-D0h]@1
  int v56; // [sp+2Ch] [bp-CCh]@1
  void **v57; // [sp+30h] [bp-C8h]@1
  void *ptr; // [sp+48h] [bp-B0h]@47
  void **v59; // [sp+54h] [bp-A4h]@1
  __int64 v60; // [sp+64h] [bp-94h]@49
  void **v61; // [sp+70h] [bp-88h]@1
  __int64 v62; // [sp+80h] [bp-78h]@60
  void **v63; // [sp+8Ch] [bp-6Ch]@1
  __int64 v64; // [sp+9Ch] [bp-5Ch]@71
  void **v65; // [sp+A8h] [bp-50h]@1
  __int64 v66; // [sp+B8h] [bp-40h]@82
  void **v67; // [sp+C4h] [bp-34h]@1
  __int64 v68; // [sp+D4h] [bp-24h]@93

  v2 = this;
  v3 = a2;
  InventoryContentPacket::fromPlayerInventoryId((int)&v67, 0, this);
  (*(void (__fastcall **)(ServerPlayer *, void ***))(*(_DWORD *)v2 + 1524))(v2, &v67);
  InventoryContentPacket::fromPlayerInventoryId((int)&v65, 120, v2);
  (*(void (__fastcall **)(ServerPlayer *, void ***))(*(_DWORD *)v2 + 1524))(v2, &v65);
  InventoryContentPacket::fromPlayerInventoryId((int)&v63, 124, v2);
  (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v2 + 1524))(v2, &v63);
  InventoryContentPacket::fromPlayerInventoryId((int)&v61, 119, v2);
  (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v2 + 1524))(v2, &v61);
  InventoryContentPacket::fromPlayerInventoryId((int)&v59, 123, v2);
  v4 = *((_BYTE *)v2 + 4820);
  (*(void (**)(void))(**((_DWORD **)v2 + 1231) + 16))();
  v5 = Player::getSupplies(v2);
  PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v55, v5);
  v6 = v56;
  v7 = (PlayerInventoryProxy *)Player::getSupplies(v2);
  v8 = PlayerInventoryProxy::getSelectedContainerId(v7);
  v9 = (PlayerInventoryProxy *)Player::getSupplies(v2);
  v10 = (unsigned __int64 *)PlayerInventoryProxy::getLinkedSlots(v9);
  PlayerHotbarPacket::PlayerHotbarPacket((int)&v57, v6, v8, v10, v3);
  (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v2 + 1524))(v2, &v57);
  Player::getContainerManager((Player *)&v53, (int)v2);
  v11 = v54;
  if ( v54 )
  {
    v12 = *(_DWORD *)(v54 + 4);
    v13 = (unsigned int *)(v54 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v12 )
        {
          v16 = 1;
          v11 = 0;
          goto LABEL_11;
        }
        __dmb();
        v14 = __ldrex(v13);
        if ( v14 == v12 )
          break;
        __clrex();
        v12 = v14;
      }
      v15 = __strex(v12 + 1, v13);
      v12 = v14;
    }
    while ( v15 );
    __dmb();
    v16 = 0;
    if ( !*v13 )
      v16 = 1;
LABEL_11:
    v17 = v54;
    v18 = v53;
    if ( v16 )
      v18 = 0;
    if ( v54 )
      v19 = (unsigned int *)(v54 + 8);
      if ( &pthread_create )
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      else
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (**)(void))(*(_DWORD *)v17 + 12))();
    if ( v18 )
      v21 = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
      InventoryContentPacket::fromPlayerInventoryId((int)&v51, v21, v2);
      (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v2 + 1524))(v2, &v51);
      v51 = &off_26E974C;
      v23 = HIDWORD(v52);
      v22 = v52;
      if ( (_DWORD)v52 != HIDWORD(v52) )
          v24 = *(void **)(v22 + 52);
          if ( v24 )
            operator delete(v24);
          v25 = *(void **)(v22 + 36);
          if ( v25 )
            operator delete(v25);
          v26 = *(_DWORD *)(v22 + 8);
          if ( v26 )
            (*(void (**)(void))(*(_DWORD *)v26 + 4))();
          *(_DWORD *)(v22 + 8) = 0;
          v22 += 72;
        while ( v23 != v22 );
        v22 = v52;
      if ( v22 )
        operator delete((void *)v22);
    if ( v11 )
      v27 = (unsigned int *)(v11 + 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 == 1 )
        v29 = (unsigned int *)(v11 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
        if ( &pthread_create )
          __dmb();
          do
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
        else
          v30 = (*v29)--;
        if ( v30 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  }
  v57 = &off_26DA620;
  if ( ptr )
    operator delete(ptr);
  v59 = &off_26E974C;
  v31 = v60;
  if ( (_DWORD)v60 != HIDWORD(v60) )
      v32 = *(void **)(v31 + 52);
      if ( v32 )
        operator delete(v32);
      v33 = *(void **)(v31 + 36);
      if ( v33 )
        operator delete(v33);
      v34 = *(_DWORD *)(v31 + 8);
      if ( v34 )
        (*(void (**)(void))(*(_DWORD *)v34 + 4))();
      *(_DWORD *)(v31 + 8) = 0;
      LODWORD(v31) = v31 + 72;
    while ( HIDWORD(v31) != (_DWORD)v31 );
    LODWORD(v31) = v60;
  if ( (_DWORD)v31 )
    operator delete((void *)v31);
  v61 = &off_26E974C;
  v35 = v62;
  if ( (_DWORD)v62 != HIDWORD(v62) )
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
      LODWORD(v35) = v35 + 72;
    while ( HIDWORD(v35) != (_DWORD)v35 );
    LODWORD(v35) = v62;
  if ( (_DWORD)v35 )
    operator delete((void *)v35);
  v63 = &off_26E974C;
  v39 = v64;
  if ( (_DWORD)v64 != HIDWORD(v64) )
      v40 = *(void **)(v39 + 52);
      if ( v40 )
        operator delete(v40);
      v41 = *(void **)(v39 + 36);
      if ( v41 )
        operator delete(v41);
      v42 = *(_DWORD *)(v39 + 8);
      if ( v42 )
        (*(void (**)(void))(*(_DWORD *)v42 + 4))();
      *(_DWORD *)(v39 + 8) = 0;
      LODWORD(v39) = v39 + 72;
    while ( HIDWORD(v39) != (_DWORD)v39 );
    LODWORD(v39) = v64;
  if ( (_DWORD)v39 )
    operator delete((void *)v39);
  v65 = &off_26E974C;
  v43 = v66;
  if ( (_DWORD)v66 != HIDWORD(v66) )
      v44 = *(void **)(v43 + 52);
      if ( v44 )
        operator delete(v44);
      v45 = *(void **)(v43 + 36);
      if ( v45 )
        operator delete(v45);
      v46 = *(_DWORD *)(v43 + 8);
      if ( v46 )
        (*(void (**)(void))(*(_DWORD *)v46 + 4))();
      *(_DWORD *)(v43 + 8) = 0;
      LODWORD(v43) = v43 + 72;
    while ( HIDWORD(v43) != (_DWORD)v43 );
    LODWORD(v43) = v66;
  if ( (_DWORD)v43 )
    operator delete((void *)v43);
  v67 = &off_26E974C;
  v47 = v68;
  if ( (_DWORD)v68 != HIDWORD(v68) )
      v48 = *(void **)(v47 + 52);
      if ( v48 )
        operator delete(v48);
      v49 = *(void **)(v47 + 36);
      if ( v49 )
        operator delete(v49);
      v50 = *(_DWORD *)(v47 + 8);
      if ( v50 )
        (*(void (**)(void))(*(_DWORD *)v50 + 4))();
      *(_DWORD *)(v47 + 8) = 0;
      LODWORD(v47) = v47 + 72;
    while ( HIDWORD(v47) != (_DWORD)v47 );
    LODWORD(v47) = v68;
  if ( (_DWORD)v47 )
    operator delete((void *)v47);
}


void __fastcall ServerPlayer::~ServerPlayer(ServerPlayer *this)
{
  ServerPlayer::~ServerPlayer(this);
}


char *__fastcall ServerPlayer::getInventoryMenu(ServerPlayer *this)
{
  return (char *)this + 5296;
}


signed int __fastcall ServerPlayer::onSuspension(ServerPlayer *this)
{
  ServerPlayer *v1; // r4@1
  int v2; // r7@1
  char *v3; // r6@1
  char *v4; // r8@1
  __int64 v5; // r0@3
  void *v6; // r0@4
  void *v7; // r5@5
  signed int result; // r0@6
  char *v9; // [sp+0h] [bp-48h]@2
  void **v10; // [sp+4h] [bp-44h]@2
  void **v11; // [sp+8h] [bp-40h]@3
  signed int v12; // [sp+Ch] [bp-3Ch]@3
  signed int v13; // [sp+10h] [bp-38h]@3
  char v14; // [sp+14h] [bp-34h]@3
  __int64 v15; // [sp+18h] [bp-30h]@3

  v1 = this;
  v2 = *((_DWORD *)this + 1352);
  v3 = (char *)this + 5400;
  v4 = (char *)this + 5408;
  if ( v2 )
  {
    v9 = (char *)this + 5400;
    v10 = (void **)((char *)this + 5408);
    do
    {
      v5 = *(_QWORD *)(v2 + 8);
      v12 = 2;
      v13 = 1;
      v14 = 0;
      v11 = &off_26E94F4;
      v15 = v5;
      (*(void (__fastcall **)(ServerPlayer *, void ***))(*(_DWORD *)v1 + 1524))(v1, &v11);
      v2 = *(_DWORD *)v2;
    }
    while ( v2 );
    v4 = (char *)v10;
    v3 = v9;
    v6 = *v10;
    if ( *v10 )
      do
      {
        v7 = *(void **)v6;
        operator delete(v6);
        v6 = v7;
      }
      while ( v7 );
  }
  _aeabi_memclr4(*(_DWORD *)v3, 4 * *((_DWORD *)v1 + 1351));
  result = 5412;
  *((_DWORD *)v1 + 1353) = 0;
  *(_DWORD *)v4 = 0;
  return result;
}


void __fastcall ServerPlayer::openHopper(int a1, __int64 *a2)
{
  ServerPlayer::openHopper(a1, a2);
}


void __fastcall ServerPlayer::openContainer(ServerPlayer *this, const BlockPos *a2)
{
  ServerPlayer::openContainer(this, a2);
}


int __fastcall ServerPlayer::sendComplexInventoryTransaction(int a1, int *a2)
{
  int v2; // r4@1
  int result; // r0@1
  void **v4; // [sp+4h] [bp-1Ch]@1
  int v5; // [sp+8h] [bp-18h]@1
  int v6; // [sp+Ch] [bp-14h]@1
  char v7; // [sp+10h] [bp-10h]@1
  int v8; // [sp+14h] [bp-Ch]@1

  v2 = *a2;
  *a2 = 0;
  v5 = 2;
  v6 = 1;
  v7 = 0;
  v4 = &off_26DA738;
  v8 = v2;
  (*(void (**)(void))(*(_DWORD *)a1 + 1524))();
  result = v8;
  if ( v8 )
    result = (*(int (**)(void))(*(_DWORD *)v8 + 4))();
  return result;
}


void __fastcall ServerPlayer::openCommandBlock(ServerPlayer *this, const BlockPos *a2)
{
  ServerPlayer *v2; // r4@1
  const BlockPos *v3; // r5@1
  char v4; // r2@2
  int v5; // r1@4
  int v6; // r2@4
  int v7; // [sp+0h] [bp-40h]@4
  int v8; // [sp+4h] [bp-3Ch]@4
  void **v9; // [sp+8h] [bp-38h]@4
  signed int v10; // [sp+Ch] [bp-34h]@4
  signed int v11; // [sp+10h] [bp-30h]@4
  char v12; // [sp+14h] [bp-2Ch]@4
  char v13; // [sp+15h] [bp-2Bh]@4
  char v14; // [sp+16h] [bp-2Ah]@4
  int v15; // [sp+18h] [bp-28h]@4
  int v16; // [sp+1Ch] [bp-24h]@4
  int v17; // [sp+20h] [bp-20h]@4
  signed int v18; // [sp+28h] [bp-18h]@4
  signed int v19; // [sp+2Ch] [bp-14h]@4

  v2 = this;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1348))() == 1 )
  {
    v4 = *((_BYTE *)v2 + 5328) + 1;
    if ( v4 > 99 )
      v4 = 1;
    *((_BYTE *)v2 + 5328) = v4;
    v10 = 2;
    v11 = 1;
    v12 = 0;
    v9 = &off_26E96FC;
    v13 = v4;
    v14 = 16;
    v5 = *((_DWORD *)v3 + 1);
    v6 = *((_DWORD *)v3 + 2);
    v15 = *(_DWORD *)v3;
    v16 = v5;
    v17 = v6;
    v18 = -1;
    v19 = -1;
    (*(void (__fastcall **)(ServerPlayer *, void ***))(*(_DWORD *)v2 + 1524))(v2, &v9);
    v7 = 0;
    v8 = 0;
    ServerPlayer::_setContainerManager((int)v2, (int)&v7);
  }
}


MobArmorEquipmentPacket *__fastcall ServerPlayer::setArmor(int a1, int a2, int a3)
{
  Entity *v3; // r4@1
  Level *v4; // r0@1
  MobArmorEquipmentPacket *result; // r0@1
  Level *v6; // r0@2
  int v7; // r0@2
  int v8; // [sp+0h] [bp-148h]@2

  v3 = (Entity *)a1;
  Player::setArmor(a1, a2, a3);
  v4 = (Level *)Entity::getLevel(v3);
  result = (MobArmorEquipmentPacket *)Level::isClientSide(v4);
  if ( !result )
  {
    MobArmorEquipmentPacket::MobArmorEquipmentPacket((int)&v8, (int)v3);
    v6 = (Level *)Entity::getLevel(v3);
    v7 = Level::getPacketSender(v6);
    (*(void (**)(void))(*(_DWORD *)v7 + 8))();
    result = MobArmorEquipmentPacket::~MobArmorEquipmentPacket((MobArmorEquipmentPacket *)&v8);
  }
  return result;
}


int __fastcall ServerPlayer::aiStep(ServerPlayer *this)
{
  ServerPlayer *v1; // r4@1

  v1 = this;
  Mob::updateAttackAnim(this);
  Entity::_playMovementSound(v1, *((_BYTE *)v1 + 216));
  Player::aiStep(v1);
  return (*(int (__fastcall **)(ServerPlayer *))(*(_DWORD *)v1 + 1192))(v1);
}


int __fastcall ServerPlayer::_sendQueuedChunks(ServerPlayer *this)
{
  ServerPlayer *v1; // r11@1
  int v2; // r4@1
  int v3; // r7@1
  int v4; // r10@3
  _BYTE *v5; // r8@4
  int v6; // r12@4
  int v7; // r2@5
  int v8; // r3@5
  int v9; // r4@5
  int v10; // r5@5
  int v11; // r6@5
  _BYTE *v18; // r4@5
  int v19; // r0@5
  int v20; // r9@7
  int v23; // r0@12
  int v24; // r10@14
  int v25; // r5@14
  int v26; // r6@15
  signed int v27; // r0@16
  int v28; // r1@20
  int v29; // r1@21
  int v30; // r0@27
  int result; // r0@41
  int v32; // r6@43
  _BYTE *v33; // r7@44
  int *v34; // [sp+4h] [bp-6Ch]@1
  char *v35; // [sp+8h] [bp-68h]@1
  int v36; // [sp+Ch] [bp-64h]@1
  char v37; // [sp+10h] [bp-60h]@13
  int v38; // [sp+28h] [bp-48h]@5
  int v39; // [sp+2Ch] [bp-44h]@5
  int v40; // [sp+30h] [bp-40h]@5
  int v41; // [sp+34h] [bp-3Ch]@5
  int v42; // [sp+38h] [bp-38h]@5
  int v43; // [sp+3Ch] [bp-34h]@5

  v1 = this;
  v2 = *((_DWORD *)this + 1341);
  v3 = *((_DWORD *)this + 1340);
  v35 = (char *)this + 5364;
  v36 = v2;
  v34 = (int *)((char *)this + 5360);
  if ( v3 != v2 )
  {
    sub_15DC8D6(v3, v2, 2 * (31 - __clz(-1431655765 * ((v2 - v3) >> 3))), this);
    if ( v2 - v3 <= 384 )
    {
      sub_15DCE16(v3, v2, v1);
    }
    else
      v4 = v3 + 384;
      sub_15DCE16(v3, v3 + 384, v1);
      if ( v3 + 384 != v2 )
      {
        v5 = (_BYTE *)(v3 + 400);
        v6 = v3 + 384;
        do
        {
          v7 = *(_DWORD *)(v6 + 4);
          v8 = *(_DWORD *)(v6 + 8);
          v9 = *(_DWORD *)(v6 + 12);
          v10 = *(_DWORD *)(v6 + 16);
          v11 = *(_DWORD *)(v6 + 20);
          v38 = *(_DWORD *)v6;
          v39 = v7;
          v40 = v8;
          v41 = v9;
          v42 = v10;
          v43 = v11;
          _R0 = ChunkPos::distanceToSqr((ChunkPos *)&v40, v1);
          __asm { VMOV            S16, R0 }
          _R0 = ChunkPos::distanceToSqr((ChunkPos *)(v4 - 16), v1);
          __asm { VMOV            S0, R0 }
          v18 = v5;
          v19 = v4;
          __asm
          {
            VCMPE.F32       S16, S0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( _NF ^ _VF )
            do
            {
              *((_DWORD *)v5 - 4) = *((_DWORD *)v5 - 10);
              *((_QWORD *)v5 - 1) = *((_QWORD *)v5 - 4);
              v20 = (int)(v5 - 24);
              *v5 = *(v5 - 24);
              _R0 = ChunkPos::distanceToSqr((ChunkPos *)&v40, v1);
              __asm { VMOV            S16, R0 }
              _R0 = ChunkPos::distanceToSqr((ChunkPos *)(v5 - 56), v1);
              __asm { VMOV            S0, R0 }
              v5 -= 24;
              __asm
              {
                VCMPE.F32       S16, S0
                VMRS            APSR_nzcv, FPSCR
              }
            }
            while ( _NF ^ _VF );
            v19 = v20 - 16;
          *(_DWORD *)v19 = v38;
          v4 += 24;
          v5 = v18 + 24;
          *(_QWORD *)(v19 + 8) = *(_QWORD *)&v40;
          v6 = v4;
          *(_BYTE *)(v19 + 16) = v42;
        }
        while ( v4 != v36 );
      }
  }
  v23 = NetworkHandler::getPeerForUser(*((NetworkHandler **)v1 + 1319), (ServerPlayer *)((char *)v1 + 4392));
  if ( v23 )
    (*(void (__fastcall **)(char *))(*(_DWORD *)v23 + 16))(&v37);
  v24 = *(_DWORD *)v35;
  v25 = *v34;
  if ( *v34 != *(_DWORD *)v35 )
    v26 = 0;
    do
      v27 = ServerPlayer::_sendQueuedChunk((int)v1, (unsigned int *)v25);
      *(_BYTE *)(v25 + 16) = v27;
      if ( v27 )
        if ( ++v26 == *((_DWORD *)v1 + 1333) )
          break;
      v25 += 24;
    while ( v25 != v24 );
    v24 = *(_DWORD *)v35;
    v25 = *v34;
  v28 = -1431655765 * ((v24 - v25) >> 3) >> 2;
  if ( v28 < 1 )
LABEL_27:
    v30 = -1431655765 * ((v24 - v25) >> 3);
    if ( v30 != 1 )
      if ( v30 != 2 )
        if ( v30 != 3 )
          v25 = v24;
          goto LABEL_41;
        if ( *(_BYTE *)(v25 + 16) )
        v25 += 24;
      if ( *(_BYTE *)(v25 + 16) )
        goto LABEL_41;
    if ( !*(_BYTE *)(v25 + 16) )
      v25 = v24;
  else
    v29 = v28 + 1;
    while ( !*(_BYTE *)(v25 + 16) )
      if ( *(_BYTE *)(v25 + 40) )
        break;
      if ( *(_BYTE *)(v25 + 64) )
        v25 += 48;
      if ( *(_BYTE *)(v25 + 88) )
        v25 += 72;
      --v29;
      v25 += 96;
      if ( v29 <= 1 )
        goto LABEL_27;
LABEL_41:
  result = v24;
  if ( v25 != v24 )
    result = v25;
LABEL_43:
    v32 = v25 + 40;
    while ( 1 )
      v33 = (_BYTE *)v32;
      if ( v32 - v24 == 16 )
      v32 += 24;
      if ( !*v33 )
        v25 = (int)(v33 - 16);
        *(_DWORD *)result = *((_DWORD *)v33 - 4);
        *(_QWORD *)(result + 8) = *((_QWORD *)v33 - 1);
        *(_BYTE *)(result + 16) = 0;
        result += 24;
        goto LABEL_43;
  if ( result != v24 )
    *(_DWORD *)v35 = result;
  return result;
}


int __fastcall ServerPlayer::ServerPlayer(int a1, Level *a2, int a3, int a4, int a5, int a6, char a7, int a8, int *a9, int a10, __int64 a11, __int64 a12, int *a13, int a14)
{
  int v14; // r4@1
  int v15; // r8@1
  int v16; // r7@1
  int v17; // r0@1
  void (__fastcall *v18)(int, int, signed int); // r3@3
  PlayerInventoryProxy *v19; // r0@5
  Container *v20; // r0@5
  double v21; // r0@5
  double v22; // r0@5
  int v23; // r5@7
  void *v24; // r7@7
  unsigned int v25; // r0@8
  int v26; // r5@10
  void *v27; // r7@10
  int result; // r0@11
  int v29; // [sp+Ch] [bp-54h]@0
  int v30; // [sp+34h] [bp-2Ch]@1
  int v31; // [sp+38h] [bp-28h]@1

  v14 = a1;
  v15 = a4;
  v16 = *a9;
  *a9 = 0;
  v31 = v16;
  v17 = *a13;
  *a13 = 0;
  v30 = v17;
  Player::Player(v14, a2, a3, a5, a6, a7, &v31, v29, a11, a12, &v30);
  std::unique_ptr<Certificate,std::default_delete<Certificate>>::~unique_ptr((int)&v30);
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 4))();
  v31 = 0;
  *(_DWORD *)v14 = &off_26EB458;
  *(_DWORD *)(v14 + 5276) = v15;
  *(_DWORD *)(v14 + 5288) = 0;
  v18 = *(void (__fastcall **)(int, int, signed int))(a8 + 8);
  if ( v18 )
  {
    v18(v14 + 5280, a8, 2);
    *(_DWORD *)(v14 + 5292) = *(_DWORD *)(a8 + 12);
    *(_DWORD *)(v14 + 5288) = *(_DWORD *)(a8 + 8);
  }
  v19 = (PlayerInventoryProxy *)Player::getSupplies((Player *)v14);
  v20 = (Container *)PlayerInventoryProxy::_getInventoryContainer(v19);
  InventoryMenu::InventoryMenu((InventoryMenu *)(v14 + 5296), (Player *)v14, v20);
  *(_BYTE *)(v14 + 5328) = 1;
  *(_BYTE *)(v14 + 5329) = 1;
  *(_DWORD *)(v14 + 5332) = a14;
  *(_BYTE *)(v14 + 5336) = 0;
  *(_DWORD *)(v14 + 5340) = 4;
  *(_DWORD *)(v14 + 5360) = 0;
  *(_DWORD *)(v14 + 5364) = 0;
  *(_DWORD *)(v14 + 5368) = 0;
  *(_DWORD *)(v14 + 5380) = 0;
  *(_DWORD *)(v14 + 5384) = 0;
  *(_BYTE *)(v14 + 5356) = 0;
  *(_DWORD *)(v14 + 5352) = 0;
  *(_DWORD *)(v14 + 5348) = 0;
  *(_DWORD *)(v14 + 5344) = 0;
  *(_DWORD *)(v14 + 5388) = 1065353216;
  LODWORD(v21) = v14 + 5388;
  *(_DWORD *)(v14 + 5392) = 0;
  LODWORD(v22) = sub_21E6254(v21);
  *(_DWORD *)(v14 + 5376) = LODWORD(v22);
  if ( LODWORD(v22) == 1 )
    v24 = (void *)(v14 + 5396);
    *(_DWORD *)(v14 + 5396) = 0;
  else
    if ( LODWORD(v22) >= 0x40000000 )
      sub_21E57F4();
    v23 = 4 * LODWORD(v22);
    v24 = operator new(4 * LODWORD(v22));
    _aeabi_memclr4(v24, v23);
  *(_DWORD *)(v14 + 5372) = v24;
  *(_DWORD *)(v14 + 5408) = 0;
  *(_DWORD *)(v14 + 5412) = 0;
  *(_DWORD *)(v14 + 5416) = 1065353216;
  LODWORD(v22) = v14 + 5416;
  *(_DWORD *)(v14 + 5420) = 0;
  v25 = sub_21E6254(v22);
  *(_DWORD *)(v14 + 5404) = v25;
  if ( v25 == 1 )
    *(_DWORD *)(v14 + 5424) = 0;
    v27 = (void *)(v14 + 5424);
    if ( v25 >= 0x40000000 )
    v26 = 4 * v25;
    v27 = operator new(4 * v25);
    _aeabi_memclr4(v27, v26);
  *(_DWORD *)(v14 + 5400) = v27;
  *(_BYTE *)(v14 + 4620) = 0;
  result = v14;
  *(_DWORD *)(v14 + 328) = 0;
  return result;
}


int __fastcall ServerPlayer::disconnect(ServerPlayer *this)
{
  Player *v1; // r4@1
  int result; // r0@1

  v1 = this;
  Entity::removeAllRiders(this, 0, 0);
  Player::deleteContainerManager(v1);
  result = (*(int (__fastcall **)(Player *))(*(_DWORD *)v1 + 784))(v1);
  if ( result == 1 )
    result = (*(int (__fastcall **)(Player *, signed int, _DWORD))(*(_DWORD *)v1 + 1388))(v1, 1, 0);
  return result;
}


void __fastcall ServerPlayer::openHopper(ServerPlayer *this, const BlockPos *a2)
{
  ServerPlayer *v2; // r4@1
  const BlockPos *v3; // r5@1
  char v4; // r1@2
  int v5; // r1@4
  int v6; // r2@4
  int v7; // r5@4
  unsigned int *v8; // r1@5
  unsigned int v9; // r0@7
  unsigned int *v10; // r4@11
  unsigned int v11; // r0@13
  int v12; // r4@18
  unsigned int *v13; // r1@19
  unsigned int v14; // r0@21
  unsigned int *v15; // r5@25
  unsigned int v16; // r0@27
  int v17; // [sp+8h] [bp-50h]@4
  int v18; // [sp+Ch] [bp-4Ch]@4
  int v19; // [sp+10h] [bp-48h]@4
  int v20; // [sp+14h] [bp-44h]@4
  void **v21; // [sp+18h] [bp-40h]@4
  signed int v22; // [sp+1Ch] [bp-3Ch]@4
  signed int v23; // [sp+20h] [bp-38h]@4
  char v24; // [sp+24h] [bp-34h]@4
  char v25; // [sp+25h] [bp-33h]@4
  char v26; // [sp+26h] [bp-32h]@4
  int v27; // [sp+28h] [bp-30h]@4
  int v28; // [sp+2Ch] [bp-2Ch]@4
  int v29; // [sp+30h] [bp-28h]@4
  signed int v30; // [sp+38h] [bp-20h]@4
  signed int v31; // [sp+3Ch] [bp-1Ch]@4
  char v32; // [sp+44h] [bp-14h]@4

  v2 = this;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1348))() == 1 )
  {
    v4 = *((_BYTE *)v2 + 5328) + 1;
    if ( v4 > 99 )
      v4 = 1;
    *((_BYTE *)v2 + 5328) = v4;
    v22 = 2;
    v23 = 1;
    v24 = 0;
    v21 = &off_26E96FC;
    v25 = v4;
    v26 = 8;
    v5 = *((_DWORD *)v3 + 1);
    v6 = *((_DWORD *)v3 + 2);
    v27 = *(_DWORD *)v3;
    v28 = v5;
    v29 = v6;
    v30 = -1;
    v31 = -1;
    (*(void (__fastcall **)(ServerPlayer *, void ***))(*(_DWORD *)v2 + 1524))(v2, &v21);
    std::__shared_ptr<HopperContainerManagerModel,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<HopperContainerManagerModel>,ContainerID &,ServerPlayer &,BlockPos const&>(
      (int)&v17,
      (int)&v32,
      (_BYTE *)v2 + 5328,
      (int)v2,
      (int)v3);
    v7 = v18;
    v19 = v17;
    v20 = v18;
    v17 = 0;
    v18 = 0;
    ServerPlayer::_setContainerManager((int)v2, (int)&v19);
    if ( v7 )
    {
      v8 = (unsigned int *)(v7 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        v10 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
    }
    v12 = v18;
    if ( v18 )
      v13 = (unsigned int *)(v18 + 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        v15 = (unsigned int *)(v12 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  }
}


void __fastcall ServerPlayer::onLinkedSlotsChanged(ServerPlayer *this)
{
  ServerPlayer::onLinkedSlotsChanged(this);
}


int __fastcall ServerPlayer::stopSleepInBed(ServerPlayer *this, int a2, int a3)
{
  Player *v3; // r6@1
  int v4; // r5@1
  int v5; // r4@1
  void **v7; // [sp+0h] [bp-38h]@2
  int v8; // [sp+4h] [bp-34h]@2
  int v9; // [sp+8h] [bp-30h]@2
  char v10; // [sp+Ch] [bp-2Ch]@2
  int v11; // [sp+10h] [bp-28h]@2
  signed int v12; // [sp+18h] [bp-20h]@2
  int v13; // [sp+1Ch] [bp-1Ch]@2

  v3 = this;
  v4 = a2;
  v5 = a3;
  if ( (*(int (**)(void))(*(_DWORD *)this + 784))() == 1 )
  {
    v8 = 2;
    v9 = 1;
    v10 = 0;
    v7 = &off_26DA6E8;
    Entity::getRuntimeID((Entity *)&v11, (int)v3);
    v12 = 3;
    v13 = 0;
    (*(void (__fastcall **)(Player *, void ***))(*(_DWORD *)v3 + 1524))(v3, &v7);
  }
  return Player::stopSleepInBed(v3, v4, v5);
}


TextPacket *__fastcall ServerPlayer::displayLocalizableMessage(int a1, int *a2, unsigned __int64 *a3)
{
  int v3; // r4@1
  char v5; // [sp+4h] [bp-3Ch]@1

  v3 = a1;
  TextPacket::createTranslated((int)&v5, a2, a3);
  (*(void (__fastcall **)(int, char *))(*(_DWORD *)v3 + 1524))(v3, &v5);
  return TextPacket::~TextPacket((TextPacket *)&v5);
}


int __fastcall ServerPlayer::destroyRegion(ServerPlayer *this)
{
  Player *v1; // r4@1
  int v2; // r7@1
  char *v3; // r6@1
  char *v4; // r8@1
  __int64 v5; // r0@3
  void *v6; // r0@4
  void *v7; // r5@5
  int v8; // r0@6
  char *v10; // [sp+0h] [bp-48h]@2
  void **v11; // [sp+4h] [bp-44h]@2
  void **v12; // [sp+8h] [bp-40h]@3
  signed int v13; // [sp+Ch] [bp-3Ch]@3
  signed int v14; // [sp+10h] [bp-38h]@3
  char v15; // [sp+14h] [bp-34h]@3
  __int64 v16; // [sp+18h] [bp-30h]@3

  v1 = this;
  v2 = *((_DWORD *)this + 1352);
  v3 = (char *)this + 5400;
  v4 = (char *)this + 5408;
  if ( v2 )
  {
    v10 = (char *)this + 5400;
    v11 = (void **)((char *)this + 5408);
    do
    {
      v5 = *(_QWORD *)(v2 + 8);
      v13 = 2;
      v14 = 1;
      v15 = 0;
      v12 = &off_26E94F4;
      v16 = v5;
      (*(void (__fastcall **)(Player *, void ***))(*(_DWORD *)v1 + 1524))(v1, &v12);
      v2 = *(_DWORD *)v2;
    }
    while ( v2 );
    v4 = (char *)v11;
    v3 = v10;
    v6 = *v11;
    if ( *v11 )
      do
      {
        v7 = *(void **)v6;
        operator delete(v6);
        v6 = v7;
      }
      while ( v7 );
  }
  _aeabi_memclr4(*(_DWORD *)v3, 4 * *((_DWORD *)v1 + 1351));
  *((_DWORD *)v1 + 1353) = 0;
  *(_DWORD *)v4 = 0;
  v8 = *((_DWORD *)v1 + 1336);
  *((_DWORD *)v1 + 1336) = 0;
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  return Player::destroyRegion(v1);
}


int __fastcall ServerPlayer::isPositionRelevant(Entity *a1, int a2, const BlockPos *a3)
{
  Entity *v3; // r5@1
  const BlockPos *v4; // r4@1
  int result; // r0@2
  BlockSource *v6; // r0@3

  v3 = a1;
  v4 = a3;
  if ( (*(int (**)(void))(*(_DWORD *)a1 + 524))() == a2 )
  {
    v6 = (BlockSource *)Entity::getRegion(v3);
    result = BlockSource::getChunkAt(v6, v4) != 0;
  }
  else
    result = 0;
  return result;
}


__int64 __fastcall ServerPlayer::getControllingPlayer(ServerPlayer *this, Entity *a2)
{
  ServerPlayer *v2; // r4@1
  __int64 result; // r0@1

  v2 = this;
  result = *(_QWORD *)Entity::getUniqueID(a2);
  *(_QWORD *)v2 = result;
  return result;
}


int __fastcall ServerPlayer::_scanForNewEntities(ServerPlayer *this)
{
  Entity *v1; // r4@1
  unsigned __int64 *v2; // r11@1
  _DWORD *v3; // r7@1
  int v4; // r0@2
  __int64 v5; // r2@2
  void (__fastcall *v6)(LevelChunk **); // r5@2
  char v7; // r0@3
  Entity **v8; // r9@4 OVERLAPPED
  Entity **v9; // r10@4 OVERLAPPED
  Entity *v10; // r6@5
  unsigned __int64 *v11; // r0@5
  int v12; // r4@6
  unsigned int *v13; // r1@7
  unsigned int v14; // r0@9
  unsigned int *v15; // r6@13
  unsigned int v16; // r0@15
  int v17; // r5@21
  __int64 v18; // kr00_8@21
  _DWORD *v19; // r0@21
  __int64 v20; // r1@21
  int result; // r0@21
  ServerPlayer *v22; // [sp+4h] [bp-5Ch]@1
  BlockSource **v23; // [sp+Ch] [bp-54h]@1
  _DWORD *v24; // [sp+10h] [bp-50h]@21
  __int64 v25; // [sp+18h] [bp-48h]@21
  int v26; // [sp+20h] [bp-40h]@2
  int v27; // [sp+24h] [bp-3Ch]@2
  LevelChunk *v28; // [sp+28h] [bp-38h]@2
  int v29; // [sp+2Ch] [bp-34h]@6
  int v30; // [sp+30h] [bp-30h]@1
  int v31; // [sp+34h] [bp-2Ch]@2

  v1 = this;
  v22 = this;
  ChunkPos::ChunkPos((int)&v30, (int)this + 72);
  Entity::getLevel(v1);
  v2 = (unsigned __int64 *)((char *)v1 + 5372);
  v23 = (BlockSource **)((char *)v1 + 4632);
  v3 = Level::tickingChunksOffset;
  do
  {
    v4 = BlockSource::getChunkSource(*v23);
    v5 = *(_QWORD *)v3;
    v6 = *(void (__fastcall **)(LevelChunk **))(*(_DWORD *)v4 + 16);
    v26 = *(_QWORD *)v3 + v30;
    v27 = HIDWORD(v5) + v31;
    v6(&v28);
    if ( v28 )
    {
      v7 = *LevelChunk::getState(v28);
      __dmb();
      if ( v7 == 8 )
      {
        for ( *(_QWORD *)&v8 = *(_QWORD *)LevelChunk::getEntities(v28);
              v9 != v8;
              *(_DWORD *)std::__detail::_Map_base<EntityUniqueID,std::pair<EntityUniqueID const,Entity *>,std::allocator<std::pair<EntityUniqueID const,Entity *>>,std::__detail::_Select1st,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                           v2,
                           v11) = v10 )
        {
          v10 = *v8;
          v11 = (unsigned __int64 *)Entity::getUniqueID(*v8);
          ++v8;
        }
      }
    }
    v12 = v29;
    if ( v29 )
      v13 = (unsigned int *)(v29 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        v15 = (unsigned int *)(v12 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
        if ( &pthread_create )
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
        else
          v16 = (*v15)--;
        if ( v16 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
    v3 += 2;
  }
  while ( (_UNKNOWN *)v3 != &unk_281CC18 );
  v17 = Entity::getDimension(v22);
  v18 = *(_QWORD *)&v30;
  v19 = operator new(0x10u);
  LODWORD(v20) = sub_15DD338;
  *v19 = v22;
  v19[1] = 0;
  HIDWORD(v20) = sub_15DD2C0;
  *((_QWORD *)v19 + 1) = v18;
  v24 = v19;
  v25 = v20;
  result = Dimension::forEachPlayer(v17, (int)&v24);
  if ( (_DWORD)v25 )
    result = ((int (*)(void))v25)();
  return result;
}


void __fastcall ServerPlayer::openBrewingStand(ServerPlayer *this, const BlockPos *a2)
{
  ServerPlayer::openBrewingStand(this, a2);
}


void __fastcall ServerPlayer::openContainer(int a1, __int64 *a2)
{
  int v2; // r4@1
  __int64 *v3; // r5@1
  char v4; // r1@2
  int v5; // r5@4
  unsigned int *v6; // r1@5
  unsigned int v7; // r0@7
  unsigned int *v8; // r4@11
  unsigned int v9; // r0@13
  int v10; // r4@18
  unsigned int *v11; // r1@19
  unsigned int v12; // r0@21
  unsigned int *v13; // r5@25
  unsigned int v14; // r0@27
  int v15; // [sp+8h] [bp-50h]@4
  int v16; // [sp+Ch] [bp-4Ch]@4
  int v17; // [sp+10h] [bp-48h]@4
  int v18; // [sp+14h] [bp-44h]@4
  void **v19; // [sp+18h] [bp-40h]@4
  signed int v20; // [sp+1Ch] [bp-3Ch]@4
  signed int v21; // [sp+20h] [bp-38h]@4
  char v22; // [sp+24h] [bp-34h]@4
  char v23; // [sp+25h] [bp-33h]@4
  char v24; // [sp+26h] [bp-32h]@4
  int v25; // [sp+28h] [bp-30h]@4
  int v26; // [sp+2Ch] [bp-2Ch]@4
  int v27; // [sp+30h] [bp-28h]@4
  __int64 v28; // [sp+38h] [bp-20h]@4
  char v29; // [sp+44h] [bp-14h]@4

  v2 = a1;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)a1 + 1348))() == 1 )
  {
    v4 = *(_BYTE *)(v2 + 5328) + 1;
    if ( v4 > 99 )
      v4 = 1;
    *(_BYTE *)(v2 + 5328) = v4;
    v20 = 2;
    v21 = 1;
    v22 = 0;
    v19 = &off_26E96FC;
    v23 = v4;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = *v3;
    (*(void (__fastcall **)(int, void ***))(*(_DWORD *)v2 + 1524))(v2, &v19);
    std::__shared_ptr<ChestContainerManagerModel,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ChestContainerManagerModel>,ContainerID &,ServerPlayer &,EntityUniqueID const&>(
      (int)&v15,
      (int)&v29,
      (_BYTE *)(v2 + 5328),
      v2,
      v3);
    v5 = v16;
    v17 = v15;
    v18 = v16;
    v15 = 0;
    v16 = 0;
    ServerPlayer::_setContainerManager(v2, (int)&v17);
    if ( v5 )
    {
      v6 = (unsigned int *)(v5 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        v8 = (unsigned int *)(v5 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
        }
        else
          v9 = (*v8)--;
        if ( v9 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
    }
    v10 = v16;
    if ( v16 )
      v11 = (unsigned int *)(v16 + 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        v13 = (unsigned int *)(v10 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  }
}


void __fastcall ServerPlayer::~ServerPlayer(ServerPlayer *this)
{
  Player *v1; // r0@1

  v1 = ServerPlayer::~ServerPlayer(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall ServerPlayer::sendInventory(ServerPlayer *this, bool a2)
{
  ServerPlayer::sendInventory(this, a2);
}


int __fastcall ServerPlayer::checkFallDamage(ServerPlayer *this, float a2, int a3)
{
  int v4; // r5@1
  int result; // r0@3
  BlockSource *v10; // r5@7
  int v11; // r0@7
  char v12; // [sp+8h] [bp-20h]@7

  _R4 = this;
  v4 = a3;
  if ( !(*(int (**)(void))(*(_DWORD *)this + 208))() )
    (*(void (__fastcall **)(ServerPlayer *))(*(_DWORD *)_R4 + 736))(_R4);
  result = (*(int (__fastcall **)(ServerPlayer *))(*(_DWORD *)_R4 + 208))(_R4);
  if ( result == 1 )
  {
    result = 0;
    *((_DWORD *)_R4 + 56) = 0;
  }
  if ( v4 == 1 )
    __asm
    {
      VLDR            S0, [R4,#0xE0]
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v10 = (BlockSource *)Entity::getRegion(_R4);
      Entity::_getBlockOnPos((Entity *)&v12, *(float *)&_R4);
      v11 = BlockSource::getBlock(v10, (const BlockPos *)&v12);
      __asm
      {
        VLDR            S0, [R4,#0xE0]
        VSTR            S0, [SP,#0x28+var_28]
      }
      (*(void (**)(void))(*(_DWORD *)v11 + 172))();
  return result;
}


void __fastcall ServerPlayer::openBeacon(ServerPlayer *this, const BlockPos *a2)
{
  ServerPlayer *v2; // r5@1
  const BlockPos *v3; // r6@1
  int v4; // r0@1
  int v5; // r9@1
  unsigned int v6; // r2@2
  unsigned int *v7; // r1@2
  unsigned int v8; // r3@5
  unsigned int v9; // r7@6
  signed int v10; // r10@7
  __int64 v11; // kr00_8@11
  unsigned int *v12; // r2@12
  unsigned int v13; // r1@14
  bool v14; // zf@19
  char v15; // r1@23
  int v16; // r1@25
  int v17; // r2@25
  int v18; // r6@25
  unsigned int *v19; // r1@26
  unsigned int v20; // r0@28
  unsigned int *v21; // r4@32
  unsigned int v22; // r0@34
  int v23; // r5@39
  unsigned int *v24; // r1@40
  unsigned int v25; // r0@42
  unsigned int *v26; // r4@46
  unsigned int v27; // r0@48
  unsigned int *v28; // r1@54
  unsigned int v29; // r0@56
  unsigned int *v30; // r4@60
  unsigned int v31; // r0@62
  int v32; // [sp+8h] [bp-68h]@25
  int v33; // [sp+Ch] [bp-64h]@25
  int v34; // [sp+10h] [bp-60h]@25
  int v35; // [sp+14h] [bp-5Ch]@25
  void **v36; // [sp+18h] [bp-58h]@25
  signed int v37; // [sp+1Ch] [bp-54h]@25
  signed int v38; // [sp+20h] [bp-50h]@25
  char v39; // [sp+24h] [bp-4Ch]@25
  char v40; // [sp+25h] [bp-4Bh]@25
  char v41; // [sp+26h] [bp-4Ah]@25
  int v42; // [sp+28h] [bp-48h]@25
  int v43; // [sp+2Ch] [bp-44h]@25
  int v44; // [sp+30h] [bp-40h]@25
  signed int v45; // [sp+38h] [bp-38h]@25
  signed int v46; // [sp+3Ch] [bp-34h]@25
  char v47; // [sp+44h] [bp-2Ch]@1
  int v48; // [sp+48h] [bp-28h]@1
  char v49; // [sp+4Ch] [bp-24h]@25

  v2 = this;
  v3 = a2;
  Player::getContainerManager((Player *)&v47, (int)this);
  v4 = v48;
  v5 = 0;
  if ( !v48 )
    goto LABEL_69;
  v6 = *(_DWORD *)(v48 + 4);
  v7 = (unsigned int *)(v48 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v6 )
      {
        v10 = 1;
        v5 = 0;
        goto LABEL_11;
      }
      __dmb();
      v8 = __ldrex(v7);
      if ( v8 == v6 )
        break;
      __clrex();
      v6 = v8;
    }
    v9 = __strex(v6 + 1, v7);
    v6 = v8;
  }
  while ( v9 );
  __dmb();
  v10 = 0;
  v5 = v4;
  if ( !*v7 )
    v10 = 1;
LABEL_11:
  v11 = *(_QWORD *)&v47;
  if ( v48 )
    v12 = (unsigned int *)(v48 + 8);
    if ( &pthread_create )
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    else
      v13 = (*v12)--;
    if ( v13 == 1 )
      (*(void (**)(void))(*(_DWORD *)HIDWORD(v11) + 12))();
  v14 = (_DWORD)v11 == 0;
  if ( (_DWORD)v11 )
    v14 = v10 == 1;
  if ( v14 )
LABEL_69:
    v15 = *((_BYTE *)v2 + 5328) + 1;
    if ( v15 > 99 )
      v15 = 1;
    *((_BYTE *)v2 + 5328) = v15;
    v37 = 2;
    v38 = 1;
    v39 = 0;
    v36 = &off_26E96FC;
    v40 = v15;
    v41 = 13;
    v16 = *((_DWORD *)v3 + 1);
    v17 = *((_DWORD *)v3 + 2);
    v42 = *(_DWORD *)v3;
    v43 = v16;
    v44 = v17;
    v45 = -1;
    v46 = -1;
    (*(void (__fastcall **)(ServerPlayer *, void ***))(*(_DWORD *)v2 + 1524))(v2, &v36);
    std::__shared_ptr<BeaconContainerManagerModel,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<BeaconContainerManagerModel>,ContainerID &,ServerPlayer &,BlockPos const&>(
      (int)&v32,
      (int)&v49,
      (_BYTE *)v2 + 5328,
      (int)v2,
      (int)v3);
    v18 = v33;
    v34 = v32;
    v35 = v33;
    v32 = 0;
    v33 = 0;
    ServerPlayer::_setContainerManager((int)v2, (int)&v34);
    if ( v18 )
      v19 = (unsigned int *)(v18 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      else
        v20 = (*v19)--;
      if ( v20 == 1 )
        v21 = (unsigned int *)(v18 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
        if ( &pthread_create )
        {
          __dmb();
          do
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
        }
        else
          v22 = (*v21)--;
        if ( v22 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
    v23 = v33;
    if ( v33 )
      v24 = (unsigned int *)(v33 + 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 == 1 )
        v26 = (unsigned int *)(v23 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
  if ( v5 )
    v28 = (unsigned int *)(v5 + 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 == 1 )
      v30 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
}


int __fastcall ServerPlayer::sendInventoryTransaction(ServerPlayer *this, const InventoryTransaction *a2)
{
  ServerPlayer *v2; // r4@1
  void (__fastcall *v3)(ServerPlayer *, int *); // r6@1
  int result; // r0@1
  int v5; // [sp+4h] [bp-14h]@1

  v2 = this;
  v3 = *(void (__fastcall **)(ServerPlayer *, int *))(*(_DWORD *)this + 1520);
  ComplexInventoryTransaction::fromType(&v5, 0, (int)a2);
  v3(v2, &v5);
  result = v5;
  if ( v5 )
    result = (*(int (**)(void))(*(_DWORD *)v5 + 4))();
  return result;
}


void __fastcall ServerPlayer::openEnchanter(ServerPlayer *this, const BlockPos *a2)
{
  ServerPlayer::openEnchanter(this, a2);
}


int __fastcall ServerPlayer::addItemCreative(ServerPlayer *this, const ItemInstance *a2, const int *a3)
{
  const int *v3; // r4@1
  const ItemInstance *v4; // r7@1
  ServerPlayer *v5; // r8@1
  PlayerInventoryProxy *v6; // r10@1
  int v7; // r9@1
  signed int v8; // r6@1
  int result; // r0@1
  ItemInstance *v10; // r0@4
  ItemInstance *v11; // r4@4
  int v12; // r0@4
  void *v14; // r0@9
  int v15; // r6@16
  int v16; // r4@16
  int v23; // r7@18
  ItemInstance *v24; // r0@18
  ItemInstance *v27; // r0@19
  ItemInstance *v30; // r0@20
  ItemInstance *v33; // r0@21
  ItemInstance *v36; // r0@22
  ItemInstance *v39; // r0@23
  ItemInstance *v42; // r0@24
  ItemInstance *v45; // r0@25
  int v46; // r5@28
  int v47; // r7@29
  int v48; // r4@29
  int v49; // r1@44
  int v50; // r4@45
  void *v51; // r0@51
  void *v52; // r0@52
  int v53; // r4@53
  void (__fastcall *v54)(int, char *, void ***, int); // r5@53
  int v55; // r0@53
  void *v56; // r0@53
  void *v57; // r0@54
  unsigned int *v58; // r2@62
  signed int v59; // r1@64
  unsigned int *v60; // r2@66
  signed int v61; // r1@68
  unsigned int *v62; // r2@70
  signed int v63; // r1@72
  unsigned int *v64; // r2@74
  signed int v65; // r1@76
  int v68; // r7@94
  ItemInstance *v69; // r0@94
  int v70; // [sp+4h] [bp-12Ch]@51
  int v71; // [sp+8h] [bp-128h]@51
  void **v72; // [sp+Ch] [bp-124h]@51
  int v73; // [sp+10h] [bp-120h]@51
  int v74; // [sp+14h] [bp-11Ch]@51
  char v75; // [sp+18h] [bp-118h]@51
  int v76; // [sp+1Ch] [bp-114h]@51
  int v77; // [sp+20h] [bp-110h]@51
  int v78; // [sp+24h] [bp-10Ch]@51
  char v79; // [sp+28h] [bp-108h]@9
  int v80; // [sp+30h] [bp-100h]@13
  void *v81; // [sp+4Ch] [bp-E4h]@11
  void *ptr; // [sp+5Ch] [bp-D4h]@9
  char v83; // [sp+70h] [bp-C0h]@4
  int v84; // [sp+78h] [bp-B8h]@41
  void *v85; // [sp+94h] [bp-9Ch]@39
  void *v86; // [sp+A4h] [bp-8Ch]@37
  int v87[2]; // [sp+B8h] [bp-78h]@2
  int v88; // [sp+C0h] [bp-70h]@59
  void *v89; // [sp+DCh] [bp-54h]@57
  void *v90; // [sp+ECh] [bp-44h]@55
  unsigned __int8 v91; // [sp+104h] [bp-2Ch]@1
  int v92; // [sp+108h] [bp-28h]@4

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = (PlayerInventoryProxy *)Player::getSupplies(this);
  v7 = PlayerInventoryProxy::getLinkedSlotForExactItem(v6, v4);
  PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v91, (int)v6);
  v8 = PlayerInventoryProxy::getLinkedSlotsCount(v6);
  result = v91;
  if ( !v91 )
  {
    ItemInstance::ItemInstance((ItemInstance *)v87, (int)v4);
    if ( v7 < 0 || v7 >= *v3 )
    {
      _R4 = v92;
      _R9 = 954437177;
      __asm { SMMUL.W         R0, R4, R9 }
      v23 = v92 - 9 * (((signed int)_R0 >> 1) + (_R0 >> 31));
      v24 = (ItemInstance *)PlayerInventoryProxy::getItem((int)v6, v23, 0);
      if ( ItemInstance::isNull(v24) == 1 )
        goto LABEL_99;
      _R0 = _R4 + 1;
      __asm { SMMUL.W         R1, R0, R9 }
      v23 = _R4 + 1 - 9 * (((signed int)_R1 >> 1) + (_R1 >> 31));
      v27 = (ItemInstance *)PlayerInventoryProxy::getItem((int)v6, v23, 0);
      if ( ItemInstance::isNull(v27) )
      _R0 = _R4 + 2;
      v23 = _R4 + 2 - 9 * (((signed int)_R1 >> 1) + (_R1 >> 31));
      v30 = (ItemInstance *)PlayerInventoryProxy::getItem((int)v6, v23, 0);
      if ( ItemInstance::isNull(v30) )
      _R0 = _R4 + 3;
      v23 = _R4 + 3 - 9 * (((signed int)_R1 >> 1) + (_R1 >> 31));
      v33 = (ItemInstance *)PlayerInventoryProxy::getItem((int)v6, v23, 0);
      if ( ItemInstance::isNull(v33) )
      _R0 = _R4 + 4;
      v23 = _R4 + 4 - 9 * (((signed int)_R1 >> 1) + (_R1 >> 31));
      v36 = (ItemInstance *)PlayerInventoryProxy::getItem((int)v6, v23, 0);
      if ( ItemInstance::isNull(v36) )
      _R0 = _R4 + 5;
      v23 = _R4 + 5 - 9 * (((signed int)_R1 >> 1) + (_R1 >> 31));
      v39 = (ItemInstance *)PlayerInventoryProxy::getItem((int)v6, v23, 0);
      if ( ItemInstance::isNull(v39) )
      _R0 = _R4 + 6;
      v23 = _R4 + 6 - 9 * (((signed int)_R1 >> 1) + (_R1 >> 31));
      v42 = (ItemInstance *)PlayerInventoryProxy::getItem((int)v6, v23, 0);
      if ( ItemInstance::isNull(v42) )
      _R0 = _R4 + 7;
      v23 = _R4 + 7 - 9 * (((signed int)_R1 >> 1) + (_R1 >> 31));
      v45 = (ItemInstance *)PlayerInventoryProxy::getItem((int)v6, v23, 0);
      if ( ItemInstance::isNull(v45) )
      {
LABEL_99:
        v92 = v23;
      }
      else
        _R0 = _R4 + 8;
        __asm { SMMUL.W         R1, R0, R9 }
        v68 = _R4 + 8 - 9 * (((signed int)_R1 >> 1) + (_R1 >> 31));
        v69 = (ItemInstance *)PlayerInventoryProxy::getItem((int)v6, v68, 0);
        if ( ItemInstance::isNull(v69) )
          v92 = v68;
      if ( v8 <= 0 )
        v46 = v8;
        do
        {
          v47 = v46;
          v48 = 0;
          while ( v48 == v92 || PlayerInventoryProxy::getLinkedSlot(v6, v48) != v46 )
          {
            if ( ++v48 >= v8 )
              goto LABEL_44;
          }
          ++v46;
        }
        while ( v47 < v8 + 8 );
LABEL_44:
      PlayerInventoryProxy::setItem((int)v6, v46, (int)v87, 0);
      PlayerInventoryProxy::linkSlot(v6, v92, v46);
      PlayerInventoryProxy::setItem((int)v6, v92, (int)v87, 0);
      v49 = v92;
      if ( v8 > 0 )
        v50 = 0;
          if ( v50 != v49 && PlayerInventoryProxy::getLinkedSlot(v6, v50) == v46 )
            PlayerInventoryProxy::linkSlot(v6, v50, -1);
          v49 = v92;
          ++v50;
        while ( v50 < v8 );
      PlayerInventoryProxy::selectSlot((int)v6, v49, 0);
    }
    else
      ItemInstance::ItemInstance((int)&v83);
      v10 = (ItemInstance *)PlayerInventoryProxy::getLinked(v6, v92);
      v11 = v10;
      v12 = *((_BYTE *)v10 + 15);
      _ZF = v12 == 0;
      if ( v12 )
        _ZF = *(_DWORD *)v11 == 0;
      if ( !_ZF && !ItemInstance::isNull(v11) && *((_BYTE *)v11 + 14) )
        v14 = PlayerInventoryProxy::getLinked(v6, v92);
        ItemInstance::ItemInstance((ItemInstance *)&v79, (int)v14);
        ItemInstance::operator=((int)&v83, (int)&v79);
        if ( ptr )
          operator delete(ptr);
        if ( v81 )
          operator delete(v81);
        if ( v80 )
          (*(void (**)(void))(*(_DWORD *)v80 + 4))();
        v80 = 0;
      v15 = PlayerInventoryProxy::getLinkedSlot(v6, v7);
      v16 = PlayerInventoryProxy::getLinkedSlot(v6, v92);
      if ( ItemInstance::isNull((ItemInstance *)&v83) == 1 )
        PlayerInventoryProxy::unlinkSlot(v6, v7);
        PlayerInventoryProxy::setItem((int)v6, v16, (int)&v83, 0);
        PlayerInventoryProxy::linkSlot(v6, v7, v16);
        PlayerInventoryProxy::setItem((int)v6, v7, (int)&v83, 0);
      PlayerInventoryProxy::setItem((int)v6, v15, (int)v87, 0);
      PlayerInventoryProxy::linkSlot(v6, v92, v15);
      PlayerInventoryProxy::selectSlot((int)v6, v92, 0);
      if ( v86 )
        operator delete(v86);
      if ( v85 )
        operator delete(v85);
      if ( v84 )
        (*(void (**)(void))(*(_DWORD *)v84 + 4))();
    ItemInstance::getDescriptionId((ItemInstance *)&v71, (int)v87);
    ItemInstance::getEffectName((ItemInstance *)&v70, v87);
    v73 = 2;
    v74 = 1;
    v75 = 0;
    v72 = &off_26E95BC;
    sub_21E8AF4(&v76, &v71);
    sub_21E8AF4(&v77, &v70);
    v78 = v92;
    v51 = (void *)(v70 - 12);
    if ( (int *)(v70 - 12) != &dword_28898C0 )
      v58 = (unsigned int *)(v70 - 4);
      if ( &pthread_create )
        __dmb();
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
        v59 = (*v58)--;
      if ( v59 <= 0 )
        j_j_j_j__ZdlPv_9(v51);
    v52 = (void *)(v71 - 12);
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v60 = (unsigned int *)(v71 - 4);
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
        v61 = (*v60)--;
      if ( v61 <= 0 )
        j_j_j_j__ZdlPv_9(v52);
    v53 = *((_DWORD *)v5 + 1231);
    v54 = *(void (__fastcall **)(int, char *, void ***, int))(*(_DWORD *)v53 + 16);
    v55 = Player::getClientSubId(v5);
    v54(v53, (char *)v5 + 4392, &v72, v55);
    v56 = (void *)(v77 - 12);
    if ( (int *)(v77 - 12) != &dword_28898C0 )
      v62 = (unsigned int *)(v77 - 4);
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
        v63 = (*v62)--;
      if ( v63 <= 0 )
        j_j_j_j__ZdlPv_9(v56);
    v57 = (void *)(v76 - 12);
    if ( (int *)(v76 - 12) != &dword_28898C0 )
      v64 = (unsigned int *)(v76 - 4);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 <= 0 )
        j_j_j_j__ZdlPv_9(v57);
    if ( v90 )
      operator delete(v90);
    if ( v89 )
      operator delete(v89);
    result = v88;
    if ( v88 )
      result = (*(int (**)(void))(*(_DWORD *)v88 + 4))();
  }
  return result;
}


void __fastcall ServerPlayer::changeDimension(Entity *a1, int a2, char a3)
{
  ServerPlayer::changeDimension(a1, a2, a3);
}


void __fastcall ServerPlayer::openDispenser(ServerPlayer *this, const BlockPos *a2, int a3)
{
  ServerPlayer::openDispenser(this, a2, a3);
}


signed int __fastcall ServerPlayer::_getViewDistanceDeterminismBufferRadius(ServerPlayer *this)
{
  return 5;
}


void __fastcall ServerPlayer::_setContainerManager(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r0@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r4@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r0@10
  unsigned int *v9; // r6@14
  unsigned int v10; // r0@16
  int v11; // r4@21
  unsigned int v12; // r1@22
  unsigned int *v13; // r0@22
  unsigned int v14; // r2@25
  unsigned int v15; // r3@26
  signed int v16; // r1@27
  int v17; // r0@31
  int v18; // r6@31
  unsigned int *v19; // r2@34
  unsigned int v20; // r1@36
  int v21; // r0@42
  void (__fastcall *v22)(int, int, void ***, int); // r7@42
  int v23; // r0@42
  int v24; // r5@42 OVERLAPPED
  int v25; // r6@42 OVERLAPPED
  void *v26; // r0@43
  void *v27; // r0@45
  int v28; // r0@47
  unsigned int *v29; // r1@54
  unsigned int v30; // r0@56
  unsigned int *v31; // r5@60
  unsigned int v32; // r0@62
  void **v33; // [sp+4h] [bp-44h]@42
  __int64 v34; // [sp+14h] [bp-34h]@42
  int v35; // [sp+20h] [bp-28h]@21
  int v36; // [sp+24h] [bp-24h]@21
  int v37; // [sp+28h] [bp-20h]@1
  int v38; // [sp+2Ch] [bp-1Ch]@1

  v2 = a1;
  v37 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  v38 = v3;
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  Player::setContainerManager(v2, (int)&v37);
  v6 = v38;
  if ( v38 )
    v7 = (unsigned int *)(v38 + 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      v9 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  Player::getContainerManager((Player *)&v35, v2);
  v11 = v36;
  if ( v36 )
    v12 = *(_DWORD *)(v36 + 4);
    v13 = (unsigned int *)(v36 + 4);
    do
      while ( 1 )
        if ( !v12 )
        {
          v16 = 1;
          v11 = 0;
          goto LABEL_31;
        }
        v14 = __ldrex(v13);
        if ( v14 == v12 )
          break;
        __clrex();
        v12 = v14;
      v15 = __strex(v12 + 1, v13);
      v12 = v14;
    while ( v15 );
    __dmb();
    v16 = 0;
    if ( !*v13 )
      v16 = 1;
LABEL_31:
    v17 = v36;
    v18 = v35;
    if ( v16 )
      v18 = 0;
    if ( v36 )
      v19 = (unsigned int *)(v36 + 8);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (**)(void))(*(_DWORD *)v17 + 12))();
    if ( v18 )
      (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v18 + 12))(v18, *(_BYTE *)(v2 + 5328));
      v21 = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
      InventoryContentPacket::fromPlayerInventoryId((int)&v33, v21, (Mob *)v2);
      v25 = *(_DWORD *)(v2 + 4924);
      v22 = *(void (__fastcall **)(int, int, void ***, int))(*(_DWORD *)v25 + 16);
      v23 = Player::getClientSubId((Player *)v2);
      v22(v25, v2 + 4392, &v33, v23);
      v33 = &off_26E974C;
      *(_QWORD *)&v24 = v34;
      if ( (_DWORD)v34 != HIDWORD(v34) )
          v26 = *(void **)(v24 + 52);
          if ( v26 )
            operator delete(v26);
          v27 = *(void **)(v24 + 36);
          if ( v27 )
            operator delete(v27);
          v28 = *(_DWORD *)(v24 + 8);
          if ( v28 )
            (*(void (**)(void))(*(_DWORD *)v28 + 4))();
          *(_DWORD *)(v24 + 8) = 0;
          v24 += 72;
        while ( v25 != v24 );
        v24 = v34;
      if ( v24 )
        operator delete((void *)v24);
    if ( v11 )
      v29 = (unsigned int *)(v11 + 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 == 1 )
        v31 = (unsigned int *)(v11 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
        if ( &pthread_create )
          __dmb();
          do
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
        else
          v32 = (*v31)--;
        if ( v32 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
}


char *__fastcall ServerPlayer::changeDimensionWithCredits(Entity *a1)
{
  Entity *v1; // r4@1
  Level *v2; // r0@1
  char *result; // r0@1
  Level *v4; // r0@2
  __int64 v5; // [sp+0h] [bp-30h]@2
  void **v6; // [sp+8h] [bp-28h]@2
  int v7; // [sp+Ch] [bp-24h]@2
  int v8; // [sp+10h] [bp-20h]@2
  char v9; // [sp+14h] [bp-1Ch]@2
  __int64 v10; // [sp+18h] [bp-18h]@2
  int v11; // [sp+20h] [bp-10h]@2

  v1 = a1;
  v2 = (Level *)Entity::getLevel(a1);
  result = (char *)Level::isPlayerSuspended(v2, v1);
  if ( !result )
  {
    Entity::getRuntimeID((Entity *)&v5, (int)v1);
    v7 = 2;
    v8 = 1;
    v9 = 0;
    v6 = &off_26E646C;
    v10 = v5;
    v11 = 0;
    (*(void (__fastcall **)(Entity *, void ***))(*(_DWORD *)v1 + 1524))(v1, &v6);
    v4 = (Level *)Entity::getLevel(v1);
    result = Level::suspendPlayer(v4, v1);
  }
  return result;
}


void __fastcall ServerPlayer::refreshContainer(Mob *a1, int a2)
{
  Mob *v2; // r4@1
  int v3; // r0@1
  __int64 v4; // r4@1
  void *v5; // r0@2
  void *v6; // r0@4
  int v7; // r0@6
  void **v8; // [sp+0h] [bp-30h]@1
  __int64 v9; // [sp+10h] [bp-20h]@1

  v2 = a1;
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 8))(a2);
  InventoryContentPacket::fromPlayerInventoryId((int)&v8, v3, v2);
  (*(void (__fastcall **)(Mob *, void ***))(*(_DWORD *)v2 + 1524))(v2, &v8);
  v8 = &off_26E974C;
  v4 = v9;
  if ( (_DWORD)v9 != HIDWORD(v9) )
  {
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
        (*(void (__cdecl **)(int))(*(_DWORD *)v7 + 4))(v7);
      *(_DWORD *)(v4 + 8) = 0;
      LODWORD(v4) = v4 + 72;
    }
    while ( HIDWORD(v4) != (_DWORD)v4 );
    LODWORD(v4) = v9;
  }
  if ( (_DWORD)v4 )
    operator delete((void *)v4);
}


void __fastcall ServerPlayer::openAnvil(ServerPlayer *this, const BlockPos *a2)
{
  ServerPlayer::openAnvil(this, a2);
}


int __fastcall ServerPlayer::_updateNearbyEntities(ServerPlayer *this)
{
  ServerPlayer *v1; // r6@1
  void *v2; // r0@1
  ServerPlayer *v3; // r5@1
  void *v4; // r4@2
  int v5; // r2@3
  char *v6; // r0@5
  __int64 v7; // kr00_8@5
  unsigned int v8; // r11@5
  int v9; // r7@5
  int v10; // r0@5
  int v11; // r6@6
  int v12; // r5@6
  bool v13; // zf@7
  int v14; // r4@10
  bool v15; // zf@13
  char *v16; // r0@17
  __int64 v17; // kr08_8@17
  unsigned int v18; // r10@17
  int v19; // r4@17
  int v20; // r0@17
  int v21; // r8@18
  int v22; // r5@18
  bool v23; // zf@19
  int v24; // r11@22
  bool v25; // zf@25
  _QWORD *v26; // r0@29
  int v27; // r0@34
  int v28; // r4@34
  int v29; // r0@34
  bool v30; // zf@34
  int v31; // r0@39
  signed int v32; // r4@45
  Level *v33; // r0@45
  int v34; // r0@45
  __int64 v35; // r4@54
  __int64 v36; // r0@54
  Entity *v37; // r5@58
  Entity *v38; // r6@58
  unsigned int v39; // r7@60
  unsigned int v40; // r11@60
  int v41; // r0@60
  int v42; // r1@60
  int v43; // r5@60
  unsigned int v44; // r4@60
  int v45; // r0@60
  int v46; // r7@61
  int v47; // r9@61
  int v48; // r10@64
  bool v49; // zf@67
  unsigned int v50; // r10@74
  int v51; // r8@74
  int v52; // r9@74
  Entity *v53; // r5@74
  Entity *v54; // r0@74
  Entity *v55; // r4@75
  int v56; // r1@78
  int v57; // r7@81
  int v58; // r1@82
  Entity *v59; // r4@87
  Entity *v60; // r4@89
  void *v61; // r0@89
  void *v62; // r5@90
  int result; // r0@91
  void **v64; // [sp+1Ch] [bp-324h]@3
  int v65; // [sp+3Ch] [bp-304h]@4
  Entity *v66; // [sp+3Ch] [bp-304h]@59
  unsigned int *v67; // [sp+48h] [bp-2F8h]@59
  ServerPlayer *v68; // [sp+4Ch] [bp-2F4h]@1
  Entity *v69; // [sp+50h] [bp-2F0h]@3
  char *v70; // [sp+54h] [bp-2ECh]@17
  unsigned int *v71; // [sp+58h] [bp-2E8h]@4
  Entity *v72; // [sp+58h] [bp-2E8h]@59
  int *v73; // [sp+5Ch] [bp-2E4h]@5
  unsigned int *v74; // [sp+5Ch] [bp-2E4h]@58
  Entity *v75; // [sp+60h] [bp-2E0h]@4
  Entity *v76; // [sp+60h] [bp-2E0h]@60
  Entity *v77; // [sp+64h] [bp-2DCh]@5
  Entity *v78; // [sp+64h] [bp-2DCh]@60
  void **v79; // [sp+68h] [bp-2D8h]@87
  int v80; // [sp+6Ch] [bp-2D4h]@87
  int v81; // [sp+70h] [bp-2D0h]@87
  char v82; // [sp+74h] [bp-2CCh]@87
  Entity *v83; // [sp+78h] [bp-2C8h]@87
  unsigned int v84; // [sp+7Ch] [bp-2C4h]@87
  int v85; // [sp+82h] [bp-2BEh]@54
  __int16 v86; // [sp+86h] [bp-2BAh]@54
  char v87; // [sp+88h] [bp-2B8h]@54
  int v88; // [sp+89h] [bp-2B7h]@54
  __int16 v89; // [sp+8Dh] [bp-2B3h]@54
  char v90; // [sp+8Fh] [bp-2B1h]@54
  void **v91; // [sp+90h] [bp-2B0h]@54
  int v92; // [sp+94h] [bp-2ACh]@54
  int v93; // [sp+98h] [bp-2A8h]@54
  char v94; // [sp+9Ch] [bp-2A4h]@54
  char v95; // [sp+A0h] [bp-2A0h]@54
  int v96; // [sp+A1h] [bp-29Fh]@54
  __int16 v97; // [sp+A5h] [bp-29Bh]@54
  char v98; // [sp+A7h] [bp-299h]@54
  __int64 v99; // [sp+A8h] [bp-298h]@54
  __int64 v100; // [sp+B0h] [bp-290h]@54
  char v101; // [sp+B8h] [bp-288h]@54
  int v102; // [sp+B9h] [bp-287h]@54
  __int16 v103; // [sp+BDh] [bp-283h]@54
  char v104; // [sp+BFh] [bp-281h]@54
  char v105; // [sp+C0h] [bp-280h]@46
  void **v106; // [sp+C8h] [bp-278h]@46
  int v107; // [sp+CCh] [bp-274h]@46
  int v108; // [sp+D0h] [bp-270h]@46
  char v109; // [sp+D4h] [bp-26Ch]@46
  __int64 v110; // [sp+D8h] [bp-268h]@46
  char v111; // [sp+E0h] [bp-260h]@46
  int v112; // [sp+E4h] [bp-25Ch]@46
  char v113; // [sp+E8h] [bp-258h]@45
  void **v114; // [sp+F0h] [bp-250h]@45
  int v115; // [sp+F4h] [bp-24Ch]@45
  int v116; // [sp+F8h] [bp-248h]@45
  char v117; // [sp+FCh] [bp-244h]@45
  __int64 v118; // [sp+100h] [bp-240h]@45
  int v119; // [sp+108h] [bp-238h]@45
  int v120; // [sp+110h] [bp-230h]@51
  void *v121; // [sp+12Ch] [bp-214h]@49
  void *v122; // [sp+13Ch] [bp-204h]@47
  int v123; // [sp+150h] [bp-1F0h]@45
  signed int v124; // [sp+154h] [bp-1ECh]@45
  __int16 v125; // [sp+158h] [bp-1E8h]@45
  char v126; // [sp+15Ah] [bp-1E6h]@45
  char v127; // [sp+15Bh] [bp-1E5h]@45
  char v128; // [sp+15Ch] [bp-1E4h]@45
  int v129; // [sp+160h] [bp-1E0h]@39
  int v130; // [sp+164h] [bp-1DCh]@39
  void **v131; // [sp+168h] [bp-1D8h]@39
  int v132; // [sp+16Ch] [bp-1D4h]@39
  int v133; // [sp+170h] [bp-1D0h]@39
  char v134; // [sp+174h] [bp-1CCh]@39
  int v135; // [sp+178h] [bp-1C8h]@39
  int v136; // [sp+17Ch] [bp-1C4h]@39
  int v137; // [sp+180h] [bp-1C0h]@39
  int v138; // [sp+188h] [bp-1B8h]@43
  void *v139; // [sp+1A4h] [bp-19Ch]@41
  void *ptr; // [sp+1B4h] [bp-18Ch]@39
  int v141; // [sp+1C8h] [bp-178h]@39
  int v142; // [sp+1CCh] [bp-174h]@39
  int v143; // [sp+1D0h] [bp-170h]@39
  char v144; // [sp+1D4h] [bp-16Ch]@39
  char v145; // [sp+1D8h] [bp-168h]@33
  int v146; // [sp+318h] [bp-28h]@31

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 1345);
  v3 = (ServerPlayer *)((char *)v1 + 5380);
  v68 = (ServerPlayer *)((char *)v1 + 5372);
  if ( v2 )
  {
    do
    {
      v4 = *(void **)v2;
      operator delete(v2);
      v2 = v4;
    }
    while ( v4 );
  }
  _aeabi_memclr4(*(_DWORD *)v68, 4 * *((_DWORD *)v1 + 1344));
  *((_DWORD *)v1 + 1346) = 0;
  *(_DWORD *)v3 = 0;
  v69 = v1;
  ServerPlayer::_scanForNewEntities(v1);
  v5 = *(_DWORD *)v3;
  v64 = (void **)((char *)v1 + 5380);
  if ( *(_DWORD *)v3 )
    v71 = (unsigned int *)((char *)v1 + 5404);
    v75 = (ServerPlayer *)((char *)v1 + 5400);
    v65 = (int)v1 + 3584;
      v73 = (int *)v5;
      v77 = *(Entity **)(v5 + 16);
      v6 = Entity::getUniqueID(v77);
      v7 = *(_QWORD *)v6;
      v8 = (*(_QWORD *)v6
          + (((*(_QWORD *)v6 >> 32) - 1640531527) << 6)
          + ((unsigned int)((*(_QWORD *)v6 >> 32) - 1640531527) >> 2)
          - 1640531527) ^ ((*(_QWORD *)v6 >> 32) - 1640531527);
      v9 = v8 % *v71;
      v10 = *(_DWORD *)(*(_DWORD *)v75 + 4 * v9);
      if ( !v10 )
        goto LABEL_17;
      v11 = *(_DWORD *)v10;
      v12 = *(_DWORD *)(*(_DWORD *)v10 + 16);
      while ( 1 )
      {
        v13 = v12 == v8;
        if ( v12 == v8 )
          v13 = *(_QWORD *)(v11 + 8) == v7;
        if ( v13 )
          break;
        v14 = *(_DWORD *)v11;
        if ( *(_DWORD *)v11 )
        {
          v12 = *(_DWORD *)(v14 + 16);
          v10 = v11;
          v11 = *(_DWORD *)v11;
          if ( *(_DWORD *)(v14 + 16) % *v71 == v9 )
            continue;
        }
      }
      v15 = v10 == 0;
      if ( v10 )
        v15 = *(_DWORD *)v10 == 0;
      if ( v15 )
LABEL_17:
        v16 = Entity::getUniqueID(v77);
        v70 = v16;
        v17 = *(_QWORD *)v16;
        v18 = (*(_QWORD *)v16
             + (((*(_QWORD *)v16 >> 32) - 1640531527) << 6)
             + ((unsigned int)((*(_QWORD *)v16 >> 32) - 1640531527) >> 2)
             - 1640531527) ^ ((*(_QWORD *)v16 >> 32) - 1640531527);
        v19 = v18 % *v71;
        v20 = *(_DWORD *)(*(_DWORD *)v75 + 4 * v19);
        if ( !v20 )
          goto LABEL_29;
        v21 = *(_DWORD *)v20;
        v22 = *(_DWORD *)(*(_DWORD *)v20 + 16);
        while ( 1 )
          v23 = v22 == v18;
          if ( v22 == v18 )
            v23 = *(_QWORD *)(v21 + 8) == v17;
          if ( v23 )
            break;
          v24 = *(_DWORD *)v21;
          if ( *(_DWORD *)v21 )
          {
            v22 = *(_DWORD *)(v24 + 16);
            v20 = v21;
            v21 = *(_DWORD *)v21;
            if ( *(_DWORD *)(v24 + 16) % *v71 == v19 )
              continue;
          }
        v25 = v20 == 0;
        if ( v20 )
          v25 = *(_DWORD *)v20 == 0;
        if ( v25 )
LABEL_29:
          v26 = operator new(0x18u);
          *(_DWORD *)v26 = 0;
          v26[1] = *(_QWORD *)v70;
          std::_Hashtable<EntityUniqueID,EntityUniqueID,std::allocator<EntityUniqueID>,std::__detail::_Identity,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert_unique_node(
            (int)v75,
            v19,
            v18,
            (int)v26);
        if ( (*(int (**)(void))(*(_DWORD *)v77 + 592))() == 1 )
          (*(void (__fastcall **)(int *, Entity *))(*(_DWORD *)v77 + 120))(&v146, v77);
          (*(void (__fastcall **)(Entity *, int))(*(_DWORD *)v69 + 1524))(v69, v146);
          if ( Entity::hasCategory((int)v77, 2) == 1 )
            if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)v77 + 1060))(v77) )
            {
              MobArmorEquipmentPacket::MobArmorEquipmentPacket((int)&v145, (int)v77);
              (*(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v69 + 1524))(v69, &v145);
              MobArmorEquipmentPacket::~MobArmorEquipmentPacket((MobArmorEquipmentPacket *)&v145);
            }
            v27 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v77 + 908))(v77);
            v28 = v27;
            v29 = *(_BYTE *)(v27 + 15);
            v30 = v29 == 0;
            if ( v29 )
              v30 = *(_DWORD *)v28 == 0;
            if ( !v30 && !ItemInstance::isNull((ItemInstance *)v28) && *(_BYTE *)(v28 + 14) )
              Entity::getRuntimeID((Entity *)&v129, (int)v77);
              v31 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v77 + 908))(v77);
              v132 = 2;
              v133 = 1;
              v134 = 0;
              v131 = &off_26DA648;
              v135 = v129;
              v136 = v130;
              ItemInstance::ItemInstance((ItemInstance *)&v137, v31);
              v144 = 0;
              v141 = 0;
              v142 = 0;
              v143 = 0;
              (*(void (__fastcall **)(Entity *, void ***))(*(_DWORD *)v69 + 1524))(v69, &v131);
              if ( ptr )
                operator delete(ptr);
              if ( v139 )
                operator delete(v139);
              if ( v138 )
                (*(void (**)(void))(*(_DWORD *)v138 + 4))();
            Entity::getRuntimeID((Entity *)&v113, (int)v69);
            v32 = Player::getSelectedItemSlot(v69);
            v115 = 2;
            v116 = 1;
            v117 = 0;
            v114 = &off_26DA648;
            v118 = *(_QWORD *)&v113;
            ItemInstance::ItemInstance((ItemInstance *)&v119, v65);
            v123 = 0;
            v124 = v32;
            v125 = 30464;
            v126 = 0;
            v127 = v32;
            v128 = 119;
            v33 = (Level *)Entity::getLevel(v69);
            v34 = Level::getPacketSender(v33);
            (*(void (**)(void))(*(_DWORD *)v34 + 8))();
            if ( !(*(int (__fastcall **)(Entity *))(*(_DWORD *)v77 + 316))(v77) )
              Entity::getRuntimeID((Entity *)&v105, (int)v77);
              v107 = 2;
              v108 = 1;
              v109 = 0;
              v106 = &off_26DA5D0;
              v110 = *(_QWORD *)&v105;
              v111 = 3;
              v112 = 0;
              (*(void (__fastcall **)(Entity *, void ***))(*(_DWORD *)v69 + 1524))(v69, &v106);
            if ( v122 )
              operator delete(v122);
            if ( v121 )
              operator delete(v121);
            if ( v120 )
              (*(void (**)(void))(*(_DWORD *)v120 + 4))();
          if ( Entity::isRiding(v77) == 1 )
            v35 = *(_QWORD *)Entity::getUniqueID(*((Entity **)v77 + 128));
            v36 = *(_QWORD *)Entity::getUniqueID(v77);
            v92 = 2;
            v93 = 1;
            v94 = 0;
            v91 = &off_26D9898;
            v95 = 1;
            v98 = v90;
            v97 = v89;
            v96 = v88;
            v99 = v35;
            v100 = v36;
            v101 = 0;
            v104 = v87;
            v103 = v86;
            v102 = v85;
            (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v69 + 1524))(v69, &v91);
          if ( v146 )
            (*(void (**)(void))(*(_DWORD *)v146 + 4))();
      v5 = *v73;
    while ( *v73 );
  v37 = v69;
  v74 = (unsigned int *)((char *)v69 + 5376);
  v38 = (Entity *)*((_DWORD *)v69 + 1352);
  if ( v38 )
    v72 = (Entity *)((char *)v69 + 5400);
    v67 = (unsigned int *)((char *)v69 + 5404);
    v66 = (Entity *)((char *)v69 + 5408);
      v40 = *((_QWORD *)v38 + 1) >> 32;
      v39 = *((_QWORD *)v38 + 1);
      v78 = (Entity *)*((_QWORD *)v38 + 1);
      v41 = Entity::getLevel(v37);
      v42 = v39 + ((v40 - 1640531527) << 6) + ((v40 - 1640531527) >> 2);
      v43 = v42 - 1640531527;
      v76 = (Entity *)Level::fetchEntity(v41, v42, v39, v40, 0);
      v44 = (v40 - 1640531527) ^ v43;
      v45 = *(_DWORD *)(*(_DWORD *)v68 + 4 * (v44 % *v74));
      if ( !v45 )
        goto LABEL_71;
      v46 = *(_DWORD *)v45;
      v47 = *(_DWORD *)(*(_DWORD *)v45 + 24);
      while ( v47 != v44 || *(_QWORD *)(v46 + 8) != __PAIR__(v40, (unsigned int)v78) )
        v48 = *(_DWORD *)v46;
        if ( *(_DWORD *)v46 )
          v47 = *(_DWORD *)(v48 + 24);
          v45 = v46;
          v46 = *(_DWORD *)v46;
          if ( *(_DWORD *)(v48 + 24) % *v74 == v44 % *v74 )
      v49 = v45 == 0;
      if ( v45 )
        v49 = *(_DWORD *)v45 == 0;
      if ( v49 )
LABEL_71:
        if ( !v76 || !Entity::isAutonomous(v76) )
          v50 = *v67;
          v51 = *((_DWORD *)v38 + 4) % *v67;
          v52 = *(_DWORD *)v72;
          v53 = *(Entity **)(*(_DWORD *)v72 + 4 * v51);
          v54 = *(Entity **)(*(_DWORD *)v72 + 4 * v51);
          do
            v55 = v54;
            v54 = *(Entity **)v54;
          while ( v54 != v38 );
          if ( v53 != v55 )
            if ( *(_DWORD *)v38 )
              v56 = *(_DWORD *)(*(_DWORD *)v38 + 16) % v50;
              if ( v56 != v51 )
                *(_DWORD *)(v52 + 4 * v56) = v55;
            goto LABEL_87;
          v57 = *(_DWORD *)v38;
          if ( *(_DWORD *)v38 )
            v58 = *(_DWORD *)(v57 + 16) % v50;
            if ( v58 == v51 )
LABEL_87:
              *(_DWORD *)v55 = *(_DWORD *)v38;
              v59 = *(Entity **)v38;
              operator delete((void *)v38);
              v37 = v69;
              --*((_DWORD *)v69 + 1353);
              v80 = 2;
              v81 = 1;
              v82 = 0;
              v79 = &off_26E94F4;
              v83 = v78;
              v84 = v40;
              (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v69 + 1524))(v69, &v79);
              v38 = v59;
            *(_DWORD *)(v52 + 4 * v58) = v53;
            v52 = *(_DWORD *)v72;
            v53 = *(Entity **)(*(_DWORD *)v72 + 4 * v51);
          if ( v66 == v53 )
            *(_DWORD *)v66 = v57;
          *(_DWORD *)(v52 + 4 * v51) = 0;
          goto LABEL_87;
      v38 = *(Entity **)v38;
      v37 = v69;
    while ( v38 );
  v60 = (Entity *)((char *)v37 + 5384);
  v61 = *v64;
  if ( *v64 )
      v62 = *(void **)v61;
      operator delete(v61);
      v61 = v62;
    while ( v62 );
  _aeabi_memclr4(*(_DWORD *)v68, 4 * *v74);
  result = 0;
  *(_DWORD *)v60 = 0;
  *v64 = 0;
  return result;
}


signed int __fastcall ServerPlayer::isEntityRelevant(ServerPlayer *this, const Entity *a2)
{
  Entity *v2; // r4@1
  ServerPlayer *v3; // r7@1
  char *v4; // r5@1
  signed int result; // r0@2
  __int64 v6; // r8@3
  unsigned int v7; // r10@3
  unsigned int v8; // r11@3
  int v9; // r6@3
  int v10; // r0@3
  int v11; // r5@4
  int v12; // r7@4
  bool v13; // zf@5
  int v14; // r4@8

  v2 = a2;
  v3 = this;
  v4 = Entity::getUniqueID(this);
  if ( *(_QWORD *)v4 == *(_QWORD *)Entity::getUniqueID(v2) )
  {
    result = 1;
  }
  else
    v6 = *(_QWORD *)Entity::getUniqueID(v2);
    v7 = *((_DWORD *)v3 + 1351);
    v8 = (v6 + ((HIDWORD(v6) - 1640531527) << 6) + ((unsigned int)(HIDWORD(v6) - 1640531527) >> 2) - 1640531527) ^ (HIDWORD(v6) - 1640531527);
    v9 = v8 % *((_DWORD *)v3 + 1351);
    v10 = *(_DWORD *)(*((_DWORD *)v3 + 1350) + 4 * v9);
    if ( !v10 )
      goto LABEL_13;
    v11 = *(_DWORD *)v10;
    v12 = *(_DWORD *)(*(_DWORD *)v10 + 16);
    while ( 1 )
    {
      v13 = v12 == v8;
      if ( v12 == v8 )
        v13 = *(_QWORD *)(v11 + 8) == v6;
      if ( v13 )
        break;
      v14 = *(_DWORD *)v11;
      if ( *(_DWORD *)v11 )
      {
        v12 = *(_DWORD *)(v14 + 16);
        v10 = v11;
        v11 = *(_DWORD *)v11;
        if ( *(_DWORD *)(v14 + 16) % v7 == v9 )
          continue;
      }
    }
    if ( v10 )
      result = *(_DWORD *)v10 != 0;
    else
LABEL_13:
      result = 0;
  return result;
}


void __fastcall ServerPlayer::openFurnace(ServerPlayer *this, const BlockPos *a2)
{
  ServerPlayer *v2; // r4@1
  const BlockPos *v3; // r5@1
  char v4; // r1@2
  int v5; // r1@4
  int v6; // r2@4
  int v7; // r5@4
  unsigned int *v8; // r1@5
  unsigned int v9; // r0@7
  unsigned int *v10; // r4@11
  unsigned int v11; // r0@13
  int v12; // r4@18
  unsigned int *v13; // r1@19
  unsigned int v14; // r0@21
  unsigned int *v15; // r5@25
  unsigned int v16; // r0@27
  int v17; // [sp+8h] [bp-50h]@4
  int v18; // [sp+Ch] [bp-4Ch]@4
  int v19; // [sp+10h] [bp-48h]@4
  int v20; // [sp+14h] [bp-44h]@4
  void **v21; // [sp+18h] [bp-40h]@4
  signed int v22; // [sp+1Ch] [bp-3Ch]@4
  signed int v23; // [sp+20h] [bp-38h]@4
  char v24; // [sp+24h] [bp-34h]@4
  char v25; // [sp+25h] [bp-33h]@4
  char v26; // [sp+26h] [bp-32h]@4
  int v27; // [sp+28h] [bp-30h]@4
  int v28; // [sp+2Ch] [bp-2Ch]@4
  int v29; // [sp+30h] [bp-28h]@4
  signed int v30; // [sp+38h] [bp-20h]@4
  signed int v31; // [sp+3Ch] [bp-1Ch]@4
  char v32; // [sp+44h] [bp-14h]@4

  v2 = this;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1348))() == 1 )
  {
    v4 = *((_BYTE *)v2 + 5328) + 1;
    if ( v4 > 99 )
      v4 = 1;
    *((_BYTE *)v2 + 5328) = v4;
    v22 = 2;
    v23 = 1;
    v24 = 0;
    v21 = &off_26E96FC;
    v25 = v4;
    v26 = 2;
    v5 = *((_DWORD *)v3 + 1);
    v6 = *((_DWORD *)v3 + 2);
    v27 = *(_DWORD *)v3;
    v28 = v5;
    v29 = v6;
    v30 = -1;
    v31 = -1;
    (*(void (__fastcall **)(ServerPlayer *, void ***))(*(_DWORD *)v2 + 1524))(v2, &v21);
    std::__shared_ptr<FurnaceContainerManagerModel,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<FurnaceContainerManagerModel>,ContainerID &,ServerPlayer &,BlockPos const&>(
      (int)&v17,
      (int)&v32,
      (_BYTE *)v2 + 5328,
      (int)v2,
      (int)v3);
    v7 = v18;
    v19 = v17;
    v20 = v18;
    v17 = 0;
    v18 = 0;
    ServerPlayer::_setContainerManager((int)v2, (int)&v19);
    if ( v7 )
    {
      v8 = (unsigned int *)(v7 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        v10 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
    }
    v12 = v18;
    if ( v18 )
      v13 = (unsigned int *)(v18 + 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        v15 = (unsigned int *)(v12 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  }
}


int __fastcall ServerPlayer::slotChanged(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r4@1
  int v7; // r5@1
  int result; // r0@1
  char v9; // r0@3
  int v10; // r2@3
  int v11; // r3@3
  void **v12; // [sp+0h] [bp-70h]@3
  signed int v13; // [sp+4h] [bp-6Ch]@3
  signed int v14; // [sp+8h] [bp-68h]@3
  char v15; // [sp+Ch] [bp-64h]@3
  char v16; // [sp+Dh] [bp-63h]@3
  int v17; // [sp+10h] [bp-60h]@3
  int v18; // [sp+18h] [bp-58h]@3
  int v19; // [sp+20h] [bp-50h]@7
  void *v20; // [sp+3Ch] [bp-34h]@5
  void *ptr; // [sp+4Ch] [bp-24h]@3

  v6 = a1;
  v7 = a3;
  result = a1 + 5300;
  if ( result != a2 )
  {
    result = a6;
    if ( !a6 )
    {
      v9 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 8))(a2);
      v13 = 2;
      v14 = 1;
      v15 = 0;
      v12 = &off_26E9774;
      v16 = v9;
      v17 = v7;
      ItemInstance::ItemInstance((ItemInstance *)&v18, a5);
      (*(void (__fastcall **)(int, void ***))(*(_DWORD *)v6 + 1524))(v6, &v12);
      if ( ptr )
        operator delete(ptr);
      if ( v20 )
        operator delete(v20);
      result = v19;
      if ( v19 )
        result = (*(int (__cdecl **)(int, _DWORD, int, int, void **))(*(_DWORD *)v19 + 4))(
                   v19,
                   *(_DWORD *)(*(_DWORD *)v19 + 4),
                   v10,
                   v11,
                   v12);
    }
  }
  return result;
}


int __fastcall ServerPlayer::openInventory(ServerPlayer *this)
{
  ServerPlayer *v1; // r4@1
  int result; // r0@1
  char v3; // r2@2
  void **v4; // [sp+0h] [bp-30h]@4
  signed int v5; // [sp+4h] [bp-2Ch]@4
  signed int v6; // [sp+8h] [bp-28h]@4
  char v7; // [sp+Ch] [bp-24h]@4
  char v8; // [sp+Dh] [bp-23h]@4
  char v9; // [sp+Eh] [bp-22h]@4
  int v10; // [sp+10h] [bp-20h]@4
  int v11; // [sp+14h] [bp-1Ch]@4
  int v12; // [sp+18h] [bp-18h]@4
  signed int v13; // [sp+20h] [bp-10h]@4
  signed int v14; // [sp+24h] [bp-Ch]@4

  v1 = this;
  result = (*(int (**)(void))(*(_DWORD *)this + 1348))();
  if ( result == 1 )
  {
    v3 = *((_BYTE *)v1 + 5328) + 1;
    if ( v3 > 99 )
      v3 = 1;
    *((_BYTE *)v1 + 5328) = v3;
    v5 = 2;
    v6 = 1;
    v7 = 0;
    v4 = &off_26E96FC;
    v8 = v3;
    v9 = -1;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = -1;
    v14 = -1;
    result = (*(int (__fastcall **)(ServerPlayer *, void ***))(*(_DWORD *)v1 + 1524))(v1, &v4);
  }
  return result;
}


void __fastcall ServerPlayer::openEnchanter(ServerPlayer *this, const BlockPos *a2)
{
  ServerPlayer *v2; // r4@1
  const BlockPos *v3; // r5@1
  char v4; // r1@2
  int v5; // r1@4
  int v6; // r2@4
  int v7; // r5@4
  unsigned int *v8; // r1@5
  unsigned int v9; // r0@7
  unsigned int *v10; // r4@11
  unsigned int v11; // r0@13
  int v12; // r4@18
  unsigned int *v13; // r1@19
  unsigned int v14; // r0@21
  unsigned int *v15; // r5@25
  unsigned int v16; // r0@27
  int v17; // [sp+8h] [bp-50h]@4
  int v18; // [sp+Ch] [bp-4Ch]@4
  int v19; // [sp+10h] [bp-48h]@4
  int v20; // [sp+14h] [bp-44h]@4
  void **v21; // [sp+18h] [bp-40h]@4
  signed int v22; // [sp+1Ch] [bp-3Ch]@4
  signed int v23; // [sp+20h] [bp-38h]@4
  char v24; // [sp+24h] [bp-34h]@4
  char v25; // [sp+25h] [bp-33h]@4
  char v26; // [sp+26h] [bp-32h]@4
  int v27; // [sp+28h] [bp-30h]@4
  int v28; // [sp+2Ch] [bp-2Ch]@4
  int v29; // [sp+30h] [bp-28h]@4
  signed int v30; // [sp+38h] [bp-20h]@4
  signed int v31; // [sp+3Ch] [bp-1Ch]@4
  char v32; // [sp+44h] [bp-14h]@4

  v2 = this;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1348))() == 1 )
  {
    v4 = *((_BYTE *)v2 + 5328) + 1;
    if ( v4 > 99 )
      v4 = 1;
    *((_BYTE *)v2 + 5328) = v4;
    v22 = 2;
    v23 = 1;
    v24 = 0;
    v21 = &off_26E96FC;
    v25 = v4;
    v26 = 3;
    v5 = *((_DWORD *)v3 + 1);
    v6 = *((_DWORD *)v3 + 2);
    v27 = *(_DWORD *)v3;
    v28 = v5;
    v29 = v6;
    v30 = -1;
    v31 = -1;
    (*(void (__fastcall **)(ServerPlayer *, void ***))(*(_DWORD *)v2 + 1524))(v2, &v21);
    std::__shared_ptr<EnchantingContainerManagerModel,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<EnchantingContainerManagerModel>,ContainerID &,ServerPlayer &,BlockPos const&>(
      (int)&v17,
      (int)&v32,
      (_BYTE *)v2 + 5328,
      (int)v2,
      (int)v3);
    v7 = v18;
    v19 = v17;
    v20 = v18;
    v17 = 0;
    v18 = 0;
    ServerPlayer::_setContainerManager((int)v2, (int)&v19);
    if ( v7 )
    {
      v8 = (unsigned int *)(v7 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        v10 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
    }
    v12 = v18;
    if ( v18 )
      v13 = (unsigned int *)(v18 + 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        v15 = (unsigned int *)(v12 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  }
}


void __fastcall ServerPlayer::openStructureEditor(ServerPlayer *this, const BlockPos *a2)
{
  ServerPlayer::openStructureEditor(this, a2);
}
