

void __fastcall RemotePlayer::~RemotePlayer(RemotePlayer *this)
{
  RemotePlayer::~RemotePlayer(this);
}


int __fastcall RemotePlayer::tickWorld(Entity *this)
{
  BlockSource *v1; // r1@1

  v1 = (BlockSource *)*((_DWORD *)this + 1158);
  if ( v1 )
    *((_BYTE *)this + 5289) = Entity::tick(this, v1);
  return 0;
}


int __fastcall RemotePlayer::onMovePlayerPacketNormal(Entity *this, int a2, int a3, float a4)
{
  Entity *v4; // r5@1
  float v5; // r8@1
  int v6; // r9@1
  int v7; // r7@1
  BlockSource *v8; // r4@2
  int result; // r0@3
  char v10; // [sp+8h] [bp-28h]@2

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( *((_BYTE *)this + 5289)
    && (v8 = (BlockSource *)Entity::getRegion(this),
        BlockPos::BlockPos((int)&v10, v7),
        BlockSource::hasBlock(v8, (const BlockPos *)&v10) == 1) )
  {
    result = Mob::lerpTo((int)v4, v7, v6, v5);
  }
  else
    (*(void (__fastcall **)(Entity *, int))(*(_DWORD *)v4 + 48))(v4, v7);
    (*(void (__fastcall **)(Entity *, int))(*(_DWORD *)v4 + 72))(v4, v6);
    result = Mob::setYHeadRot(v4, v5);
  return result;
}


void __fastcall RemotePlayer::aiStep(RemotePlayer *this)
{
  RemotePlayer::aiStep(this);
}


void __fastcall RemotePlayer::~RemotePlayer(RemotePlayer *this)
{
  RemotePlayer *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_26DA860;
  *((_DWORD *)this + 1319) = &off_26DAE6C;
  v2 = *((_DWORD *)this + 1321);
  if ( v2 )
    LocalPlayer::removeRegionListener(v2, (int)v1 + 5276);
  v3 = *((_DWORD *)v1 + 1320);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *((_DWORD *)v1 + 1320) = 0;
  Player::~Player(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall RemotePlayer::isTeacher(RemotePlayer *this)
{
  return 0;
}


signed int __fastcall RemotePlayer::normalTick(RemotePlayer *this)
{
  RemotePlayer *v1; // r4@1
  signed int result; // r0@1
  _BYTE *v3; // r5@4
  PlayerInventoryProxy *v4; // r0@6
  ItemInstance *v5; // r0@6
  ItemInstance *v6; // r5@6
  int v7; // r0@6
  bool v8; // zf@6
  int v9; // r0@11

  v1 = this;
  result = *((_DWORD *)this + 1073);
  if ( !result )
  {
    Player::normalTick(v1);
    if ( Mob::getHealth(v1) >= 1 )
      *((_DWORD *)v1 + 862) = 0;
    v3 = (char *)v1 + 5288;
    if ( !*((_BYTE *)v1 + 5288) )
    {
      if ( Entity::getStatusFlag((int)v1, 4) == 1 )
      {
        *v3 = 1;
        v4 = (PlayerInventoryProxy *)Player::getSupplies(v1);
        v5 = (ItemInstance *)PlayerInventoryProxy::getSelectedItem(v4);
        v6 = v5;
        v7 = *((_BYTE *)v5 + 15);
        v8 = v7 == 0;
        if ( v7 )
          v8 = *(_DWORD *)v6 == 0;
        if ( !v8 && !ItemInstance::isNull(v6) && *((_BYTE *)v6 + 14) )
        {
          v9 = ItemInstance::getMaxUseDuration(v6);
          Player::startUsingItem(v1, v6, v9);
        }
        goto LABEL_15;
      }
      if ( !*v3 )
LABEL_15:
        result = ItemInstance::isNull((RemotePlayer *)((char *)v1 + 4832));
        if ( !result )
          result = 4904;
          --*((_DWORD *)v1 + 1226);
        return result;
    }
    if ( !Entity::getStatusFlag((int)v1, 4) )
      Player::stopUsingItem(v1);
      *v3 = 0;
    goto LABEL_15;
  }
  return result;
}


int __fastcall RemotePlayer::destroyRegion(RemotePlayer *this)
{
  RemotePlayer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  v2 = *((_DWORD *)this + 1158);
  *((_DWORD *)v1 + 1158) = 0;
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  return j_j_j__ZN6Entity11resetRegionEv_0(v1);
}


int __fastcall RemotePlayer::RemotePlayer(int a1, Entity *a2, int a3, int a4, int a5, char a6, __int64 a7, __int64 a8)
{
  Entity *v8; // r5@1
  int v9; // r10@1
  int v10; // r8@1
  int v11; // r9@1
  Level *v12; // r6@1
  ClientSkinInfoData *v13; // r7@1
  BlockSourceListener *v14; // r8@3
  int v15; // r9@3
  int v16; // r7@3
  BlockSource *v17; // r6@3
  int v18; // r0@3
  int v19; // r6@5
  PlayerInventoryProxy *v20; // r0@5
  int v21; // r5@5
  int v22; // r0@5
  int v23; // r7@6
  int v24; // r4@7
  int v25; // r0@7
  int v26; // r0@8
  int v28; // [sp+Ch] [bp-4Ch]@0
  int v29; // [sp+2Ch] [bp-2Ch]@1
  ClientSkinInfoData *v30; // [sp+30h] [bp-28h]@1

  v8 = a2;
  v9 = a1;
  v10 = a4;
  v11 = a3;
  v12 = (Level *)Entity::getLevel(a2);
  v13 = (ClientSkinInfoData *)operator new(0x24u);
  ClientSkinInfoData::ClientSkinInfoData(v13);
  v30 = v13;
  v29 = 0;
  Player::Player(v9, v12, v11, v10, a5, a6, (int *)&v30, v28, a7, a8, &v29);
  std::unique_ptr<Certificate,std::default_delete<Certificate>>::~unique_ptr((int)&v29);
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  v30 = 0;
  *(_DWORD *)v9 = &off_26DA860;
  *(_DWORD *)(v9 + 5276) = &off_26DAE6C;
  *(_DWORD *)(v9 + 5280) = 0;
  *(_DWORD *)(v9 + 5284) = v8;
  *(_WORD *)(v9 + 5288) = 0;
  v14 = (BlockSourceListener *)Entity::getLevel(v8);
  v15 = Entity::getDimension(v8);
  v16 = *((_DWORD *)v8 + 1156);
  v17 = (BlockSource *)operator new(0x70u);
  BlockSource::BlockSource((int)v17, v14, v15, v16, 1, 0);
  v18 = *(_DWORD *)(v9 + 4632);
  *(_DWORD *)(v9 + 4632) = v17;
  if ( v18 )
  {
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
    v17 = *(BlockSource **)(v9 + 4632);
  }
  Entity::setRegion((Entity *)v9, v17);
  *(_BYTE *)(v9 + 4620) = 1;
  v19 = Player::getSupplies(v8);
  v20 = (PlayerInventoryProxy *)Player::getSupplies(v8);
  v21 = PlayerInventoryProxy::getFixedInventorySlotCount(v20);
  v22 = Player::getSupplies((Player *)v9);
  PlayerInventoryProxy::setContainerSize(v22, v21, 0x7Bu);
  if ( v21 > 0 )
    v23 = 0;
    do
    {
      v24 = Player::getSupplies((Player *)v9);
      v25 = PlayerInventoryProxy::getItem(v19, v23, 123);
      PlayerInventoryProxy::setItem(v24, v23++, v25, 123);
    }
    while ( v23 < v21 );
  LocalPlayer::addRegionListener(*(_DWORD *)(v9 + 5284), v9 + 5276);
  v26 = Player::getSupplies((Player *)v9);
  PlayerInventoryProxy::setContainerSize(v26, 1, 0x7Bu);
  return v9;
}


void __fastcall RemotePlayer::aiStep(RemotePlayer *this)
{
  RemotePlayer *v1; // r4@1

  v1 = this;
  Mob::updateAttackAnim(this);
  Entity::_playMovementSound(v1, *((_BYTE *)v1 + 216));
  j_j_j__ZN6Player6aiStepEv(v1);
}


int __fastcall RemotePlayer::onRegionDestroyed(RemotePlayer *this)
{
  RemotePlayer *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@3

  v1 = this;
  *((_DWORD *)this + 1321) = 0;
  v2 = *((_DWORD *)this + 1320);
  *((_DWORD *)v1 + 1320) = 0;
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  v3 = *((_DWORD *)v1 + 1158);
  *((_DWORD *)v1 + 1158) = 0;
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  return (*(int (__fastcall **)(RemotePlayer *))(*(_DWORD *)v1 + 44))(v1);
}


Player *__fastcall RemotePlayer::~RemotePlayer(RemotePlayer *this)
{
  RemotePlayer *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_26DA860;
  *((_DWORD *)this + 1319) = &off_26DAE6C;
  v2 = *((_DWORD *)this + 1321);
  if ( v2 )
    LocalPlayer::removeRegionListener(v2, (int)v1 + 5276);
  v3 = *((_DWORD *)v1 + 1320);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *((_DWORD *)v1 + 1320) = 0;
  return j_j_j__ZN6PlayerD2Ev(v1);
}
