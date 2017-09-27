

int __fastcall LegacyClientNetworkHandler::~LegacyClientNetworkHandler(LegacyClientNetworkHandler *this)
{
  LegacyClientNetworkHandler *v1; // r4@1
  LevelListener *v2; // r1@1
  Level *v3; // r0@1
  void *v4; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_26D95DC;
  *((_DWORD *)this + 8) = &off_26D97CC;
  v2 = (LegacyClientNetworkHandler *)((char *)this + 32);
  v3 = (Level *)*((_DWORD *)this + 10);
  if ( v3 )
    Level::removeListener(v3, v2);
  std::unique_ptr<Certificate,std::default_delete<Certificate>>::~unique_ptr((int)v1 + 376);
  v4 = (void *)*((_DWORD *)v1 + 51);
  if ( v4 )
    operator delete(v4);
  return j_j_j__ZN20ClientNetworkHandlerD2Ev(v1);
}


int __fastcall LegacyClientNetworkHandler::LegacyClientNetworkHandler(int a1, int a2, __int64 a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int *a44, int a45)
{
  int v45; // r4@1
  int v46; // r2@1
  int v47; // r7@1
  int v48; // r12@1
  int v49; // r2@1
  int v50; // r3@1
  int v51; // r0@1
  int *v52; // r6@1
  __int64 v54; // [sp+20h] [bp-8h]@1

  v54 = a3;
  v45 = a1;
  ClientNetworkHandler::ClientNetworkHandler(a1, a40, a41, a42, a2, a45);
  *(_DWORD *)v45 = &off_26D95DC;
  v46 = v45 + 32;
  *(_DWORD *)v46 = &off_26D97CC;
  *(_DWORD *)(v46 + 4) = a43;
  *(_DWORD *)(v46 + 8) = 0;
  _aeabi_memcpy8(v45 + 48, &v54, 152);
  *(_DWORD *)(v45 + 200) = a41;
  *(_DWORD *)(v45 + 204) = 0;
  v47 = v45 + 204;
  v48 = v45 + 224;
  *(_DWORD *)(v47 + 12) = 0;
  *(_DWORD *)(v47 + 4) = 0;
  *(_DWORD *)(v47 + 8) = 0;
  v49 = unk_27CB354;
  v50 = *(_DWORD *)&word_27CB358;
  v51 = dword_27CB35C;
  *(_DWORD *)v48 = unk_27CB350;
  *(_DWORD *)(v48 + 4) = v49;
  *(_DWORD *)(v48 + 8) = v50;
  *(_DWORD *)(v47 + 32) = v51;
  _aeabi_memclr8(v45 + 240, 128);
  *(_DWORD *)(v45 + 368) = 3;
  v52 = (int *)operator new(0x48u);
  Certificate::Certificate(v52, a44);
  *(_DWORD *)(v45 + 376) = v52;
  return v45;
}


signed int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const BlockEventPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r5@1
  const BlockEventPacket *v4; // r4@1
  signed int result; // r0@1
  Entity *v6; // r0@3
  BlockSource *v7; // r0@3

  v3 = this;
  v4 = a3;
  result = Level::isUsableLevel(*((Level **)this + 10), a2);
  if ( result == 1 )
  {
    result = ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
    if ( result )
    {
      v6 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
      v7 = (BlockSource *)Entity::getRegion(v6);
      result = BlockSource::blockEvent(
                 v7,
                 *((_DWORD *)v4 + 4),
                 *((_DWORD *)v4 + 5),
                 *((_DWORD *)v4 + 6),
                 *((_DWORD *)v4 + 7),
                 *((_DWORD *)v4 + 8));
    }
  }
  return result;
}


int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const ContainerClosePacket *a3)
{
  LegacyClientNetworkHandler *v3; // r4@1
  int result; // r0@1
  int v5; // r0@2
  int v6; // r5@2
  unsigned int v7; // r1@3
  unsigned int *v8; // r0@3
  unsigned int v9; // r2@6
  unsigned int v10; // r3@7
  unsigned int v11; // r1@8
  signed int v12; // r3@8
  signed int v13; // r7@8
  int v14; // r6@12
  unsigned int *v15; // r7@19
  unsigned int v16; // r0@21
  unsigned int *v17; // r2@27
  unsigned int v18; // r1@29
  LocalPlayer *v19; // r0@36
  int v20; // [sp+4h] [bp-1Ch]@2
  int v21; // [sp+8h] [bp-18h]@2

  v3 = this;
  result = ClientInstance::getLocalPlayer(*((ClientInstance **)this + 1));
  if ( result )
  {
    v5 = ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
    result = Player::getContainerManager((Player *)&v20, v5);
    v6 = v21;
    if ( v21 )
    {
      v7 = *(_DWORD *)(v21 + 4);
      v8 = (unsigned int *)(v21 + 4);
      do
      {
        while ( 1 )
        {
          if ( !v7 )
          {
            v14 = 0;
            goto LABEL_26;
          }
          __dmb();
          v9 = __ldrex(v8);
          if ( v9 == v7 )
            break;
          __clrex();
          v7 = v9;
        }
        v10 = __strex(v7 + 1, v8);
        v7 = v9;
      }
      while ( v10 );
      __dmb();
      v11 = *v8;
      v12 = v20;
      v13 = *v8;
      if ( *v8 )
        v13 = 1;
      if ( v20 )
        v12 = 1;
      v14 = v13 & v12;
      if ( &pthread_create )
        __dmb();
        do
          v11 = __ldrex(v8);
        while ( __strex(v11 - 1, v8) );
      else
        *v8 = v11 - 1;
      if ( v11 == 1 )
        v15 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
        else
          v16 = (*v15)--;
        if ( v16 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
LABEL_26:
      result = v21;
      if ( !v21 )
        goto LABEL_39;
      v17 = (unsigned int *)(v21 + 8);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        result = (*(int (**)(void))(*(_DWORD *)result + 12))();
        if ( !v14 )
          return result;
LABEL_39:
        if ( v14 != 1 )
      v19 = (LocalPlayer *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
      return LocalPlayer::closeScreen(v19);
    }
  }
  return result;
}


Entity *__fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const SetEntityDataPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r5@1
  const SetEntityDataPacket *v4; // r4@1
  Entity *result; // r0@1
  Entity *v6; // r5@2
  char *v7; // r0@3
  __int64 v8; // r6@3
  int v9; // r4@3
  _QWORD *v10; // r0@3
  _QWORD *v11; // [sp+4h] [bp-24h]@3
  int (*v12)(void); // [sp+Ch] [bp-1Ch]@3
  signed int (__fastcall *v13)(__int64 **, int); // [sp+10h] [bp-18h]@3

  v3 = this;
  v4 = a3;
  result = (Entity *)Level::isUsableLevel(*((Level **)this + 10), a2);
  if ( result == (Entity *)1 )
  {
    result = (Entity *)Level::getRuntimeEntity(*((_DWORD *)v3 + 10), 0, *((_QWORD *)v4 + 2), 0);
    v6 = result;
    if ( result )
    {
      v7 = Entity::getEntityData(result);
      SynchedEntityData::assignValues((int)v7, (unsigned __int64 *)v4 + 3, (int)v6);
      v8 = *(_QWORD *)Entity::getUniqueID(v6);
      v9 = Entity::getDimension(v6);
      v10 = operator new(8u);
      *v10 = v8;
      v11 = v10;
      v12 = (int (*)(void))sub_E33082;
      v13 = sub_E33060;
      result = (Entity *)Dimension::forEachPlayer(v9, (int)&v11);
      if ( v12 )
        result = (Entity *)v12();
    }
  }
  return result;
}


SubClientConnectionRequest *__fastcall LegacyClientNetworkHandler::onSubClientConnect(LegacyClientNetworkHandler *this)
{
  LegacyClientNetworkHandler *v1; // r4@1
  __int64 v2; // r0@1
  unsigned int v3; // ST28_4@1
  unsigned int v4; // ST2C_4@1
  SkinRepositoryClientInterface *v5; // r0@1
  Skin *v6; // r5@1
  mce::TextureGroup *v7; // r0@1
  __int64 *v8; // ST24_4@1
  mce::TextureGroup *v9; // r0@1
  __int64 *v10; // r11@1
  UserAuthentication *v11; // r0@1
  char *v12; // r6@1
  UnverifiedCertificate *v13; // r7@1
  char *v14; // r9@1
  char *v15; // r10@1
  int v16; // r0@1
  int v17; // r3@1
  void *v18; // r0@1
  void *v19; // r0@2
  int **v20; // r5@3
  SubClientConnectionRequest *v21; // r0@4
  unsigned int *v23; // r2@6
  signed int v24; // r1@8
  unsigned int *v25; // r2@10
  signed int v26; // r1@12
  void **v27; // [sp+30h] [bp-50h]@3
  int v28; // [sp+34h] [bp-4Ch]@3
  int v29; // [sp+38h] [bp-48h]@3
  char v30; // [sp+3Ch] [bp-44h]@3
  SubClientConnectionRequest *v31; // [sp+40h] [bp-40h]@3
  int v32; // [sp+44h] [bp-3Ch]@1
  int v33; // [sp+48h] [bp-38h]@1
  int *v34[3]; // [sp+4Ch] [bp-34h]@1

  v1 = this;
  v2 = ClientInstance::getClientRandomId((ClientInstance *)*((_DWORD *)this + 1));
  v3 = HIDWORD(v2);
  v4 = v2;
  v5 = (SkinRepositoryClientInterface *)ClientInstance::getSkinRepositoryClientInterface(*((ClientInstance **)v1 + 1));
  v6 = SkinRepositoryClientInterface::getSelectedSkinOrDefault(v5, 0);
  v7 = (mce::TextureGroup *)ClientInstance::getTextures(*((ClientInstance **)v1 + 1));
  v8 = (__int64 *)Skin::syncTextureData(v6, v7);
  v9 = (mce::TextureGroup *)ClientInstance::getTextures(*((ClientInstance **)v1 + 1));
  v10 = (__int64 *)Skin::syncCapeTextureData(v6, v9);
  v11 = (UserAuthentication *)ClientInstance::getUserAuthentication(*((ClientInstance **)v1 + 1));
  v12 = UserAuthentication::getLocalKeys(v11);
  v13 = (UnverifiedCertificate *)*((_DWORD *)v1 + 94);
  ClientInstance::getPlatformId((ClientInstance *)&v33, *((_DWORD *)v1 + 1));
  v14 = Skin::getSerializable(v6);
  v15 = Skin::getGeometryName(v6);
  Skin::getSerializedGeometryData((Skin *)&v32, (SkinPack **)v6);
  v16 = ClientInstance::getCurrentInputMode(*((ClientInstance **)v1 + 1));
  SubClientConnectionRequest::create(
    (int)v34,
    (const PrivateKeyManager *)v12,
    v13,
    v17,
    __PAIR__(v3, v4),
    (const char **)&v33,
    (const char **)v14,
    v8,
    v10,
    (const char **)v15,
    (const unsigned __int8 **)&v32,
    v16);
  v18 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v32 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    }
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  }
  v19 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v33 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  v28 = 2;
  v29 = 1;
  v30 = 0;
  v27 = &off_26D9870;
  v20 = (int **)operator new(0xCu);
  SubClientConnectionRequest::SubClientConnectionRequest(v20, v34);
  v31 = (SubClientConnectionRequest *)v20;
  (*(void (**)(void))(**((_DWORD **)v1 + 50) + 8))();
  if ( v31 )
    v21 = SubClientConnectionRequest::~SubClientConnectionRequest(v31);
    operator delete((void *)v21);
  return SubClientConnectionRequest::~SubClientConnectionRequest((SubClientConnectionRequest *)v34);
}


void *__fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const SetEntityLinkPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r4@1
  const SetEntityLinkPacket *v4; // r5@1
  void *result; // r0@1
  int v6; // r1@1
  int v7; // r6@2
  int v8; // r1@2
  __int64 v9; // r0@2
  bool v10; // zf@2
  int v11; // r3@7
  int v12; // r6@7
  int v13; // r7@7
  int v14; // r0@7
  int v15; // r3@7
  int v16; // r6@7
  int v17; // r7@7

  v3 = this;
  v4 = a3;
  result = (void *)Level::isUsableLevel(*((Level **)this + 10), a2);
  if ( result == (void *)1 )
  {
    v7 = Level::fetchEntity(*((_DWORD *)v3 + 10), v6, *((_QWORD *)v4 + 3), *((_QWORD *)v4 + 3) >> 32, 0);
    LODWORD(v9) = Level::fetchEntity(*((_DWORD *)v3 + 10), v8, *((_QWORD *)v4 + 4), *((_QWORD *)v4 + 4) >> 32, 0);
    HIDWORD(v9) = (char *)v4 + 16;
    v10 = v7 == 0;
    if ( v7 )
      v10 = (_DWORD)v9 == 0;
    if ( v10 )
    {
      LODWORD(v9) = *((_QWORD *)v3 + 26);
      if ( (_DWORD)v9 == *((_QWORD *)v3 + 26) >> 32 )
      {
        LODWORD(v9) = (char *)v3 + 204;
        result = j_j_j__ZNSt6vectorI10EntityLinkSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_(v9);
      }
      else
        v11 = *((_DWORD *)v4 + 5);
        v12 = *((_DWORD *)v4 + 6);
        v13 = *((_DWORD *)v4 + 7);
        *(_DWORD *)v9 = *(_DWORD *)HIDWORD(v9);
        *(_DWORD *)(v9 + 4) = v11;
        *(_DWORD *)(v9 + 8) = v12;
        *(_DWORD *)(v9 + 12) = v13;
        v14 = v9 + 16;
        v15 = *((_DWORD *)v4 + 9);
        v16 = *((_DWORD *)v4 + 10);
        v17 = *((_DWORD *)v4 + 11);
        *(_DWORD *)v14 = *((_DWORD *)v4 + 8);
        *(_DWORD *)(v14 + 4) = v15;
        *(_DWORD *)(v14 + 8) = v16;
        *(_DWORD *)(v14 + 12) = v17;
        result = (void *)(*((_DWORD *)v3 + 52) + 32);
        *((_DWORD *)v3 + 52) = result;
    }
    else
      result = (void *)j_j_j__ZN26LegacyClientNetworkHandler17_handleEntityLinkERK10EntityLink((int)v3, SHIDWORD(v9));
  }
  return result;
}


signed int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const SetEntityMotionPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r5@1
  const SetEntityMotionPacket *v4; // r4@1
  signed int result; // r0@1

  v3 = this;
  v4 = a3;
  result = Level::isUsableLevel(*((Level **)this + 10), a2);
  if ( result == 1 )
  {
    result = Level::getRuntimeEntity(*((_DWORD *)v3 + 10), 0, *((_QWORD *)v4 + 2), 0);
    if ( result )
      result = (*(int (**)(void))(*(_DWORD *)result + 116))();
  }
  return result;
}


void __fastcall LegacyClientNetworkHandler::~LegacyClientNetworkHandler(LegacyClientNetworkHandler *this)
{
  LegacyClientNetworkHandler::~LegacyClientNetworkHandler(this);
}


int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const DisconnectPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r6@1
  const DisconnectPacket *v4; // r4@1
  const NetworkIdentifier *v5; // r8@1
  MinecraftGame *v6; // r7@1
  ClientInstance *v7; // r5@1
  unsigned int v8; // r0@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)this + 1));
  v7 = (ClientInstance *)*((_DWORD *)v3 + 1);
  v8 = (*(int (__fastcall **)(const DisconnectPacket *))(*(_DWORD *)v4 + 8))(v4);
  MinecraftGame::onClientLevelExit(v6, v7, v8);
  return (*(int (__fastcall **)(LegacyClientNetworkHandler *, const NetworkIdentifier *, char *, _DWORD))(*(_DWORD *)v3 + 24))(
           v3,
           v5,
           (char *)v4 + 16,
           *((_BYTE *)v4 + 13));
}


InstantaneousAttributeBuff *__fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const SetHealthPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r5@1
  const SetHealthPacket *v4; // r4@1
  InstantaneousAttributeBuff *result; // r0@1
  LocalPlayer *v6; // r0@3

  v3 = this;
  v4 = a3;
  result = (InstantaneousAttributeBuff *)Level::isUsableLevel(*((Level **)this + 10), a2);
  if ( result == (InstantaneousAttributeBuff *)1 )
  {
    result = (InstantaneousAttributeBuff *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
    if ( result )
    {
      v6 = (LocalPlayer *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
      result = j_j_j__ZN11LocalPlayer6hurtToEi(v6, *((_DWORD *)v4 + 4));
    }
  }
  return result;
}


void __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const PlayerListPacket *a3)
{
  LegacyClientNetworkHandler::handle(this, a2, a3);
}


int __fastcall LegacyClientNetworkHandler::LegacyClientNetworkHandler(int a1, int a2, __int64 a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int *a44, int a45)
{
  return LegacyClientNetworkHandler::LegacyClientNetworkHandler(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           a39,
           a40,
           a41,
           a42,
           a43,
           a44,
           a45);
}


signed int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const SetSpawnPositionPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r5@1
  const SetSpawnPositionPacket *v4; // r4@1
  signed int result; // r0@1
  Player *v6; // r0@5
  char *v7; // r0@7

  v3 = this;
  v4 = a3;
  result = Level::isUsableLevel(*((Level **)this + 10), a2);
  if ( result == 1 )
  {
    result = ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
    if ( result )
    {
      result = *((_DWORD *)v4 + 7);
      if ( result == 1 )
      {
        v7 = Level::getLevelData(*((Level **)v3 + 10));
        result = j_j_j__ZN9LevelData8setSpawnERK8BlockPos(
                   (LevelData *)v7,
                   (const SetSpawnPositionPacket *)((char *)v4 + 16));
      }
      else if ( !result )
        v6 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
        result = j_j_j__ZN6Player18setRespawnPositionERK8BlockPosb_0(
                   v6,
                   (const SetSpawnPositionPacket *)((char *)v4 + 16),
                   *((_BYTE *)v4 + 32));
    }
  }
  return result;
}


int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const UpdateBlockPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r5@1
  const UpdateBlockPacket *v4; // r4@1
  int result; // r0@1
  Entity *v6; // r0@2
  BlockSource *v7; // r0@2
  const BlockPos *v8; // r5@2
  char v9; // r7@3
  BlockState *v10; // r0@6
  _BOOL4 v11; // r0@6
  int v12; // r2@6
  int v13; // r3@6
  signed int v14; // r1@6
  int v15; // ST00_4@8
  char v16; // [sp+8h] [bp-38h]@8
  char v17; // [sp+9h] [bp-37h]@8
  char v18; // [sp+Ch] [bp-34h]@8
  char v19; // [sp+Dh] [bp-33h]@8
  char v20; // [sp+10h] [bp-30h]@8
  char v21; // [sp+11h] [bp-2Fh]@8
  int v22; // [sp+14h] [bp-2Ch]@6
  int v23; // [sp+18h] [bp-28h]@8
  int v24; // [sp+1Ch] [bp-24h]@8
  char v25; // [sp+20h] [bp-20h]@3
  char v26; // [sp+21h] [bp-1Fh]@3
  char v27; // [sp+24h] [bp-1Ch]@3
  char v28; // [sp+28h] [bp-18h]@3
  unsigned __int16 v29; // [sp+2Ah] [bp-16h]@3

  v3 = this;
  v4 = a3;
  result = Level::isUsableLevel(*((Level **)this + 10), a2);
  if ( result == 1 )
  {
    v6 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
    v7 = (BlockSource *)Entity::getRegion(v6);
    v8 = v7;
    result = BlockSource::hasBlock(v7, (const UpdateBlockPacket *)((char *)v4 + 16));
    if ( result == 1 )
    {
      v9 = *((_BYTE *)v4 + 29);
      v27 = *((_BYTE *)v4 + 28);
      HIBYTE(v29) = v9;
      Block::transformToValidBlockId(&v28, &v27, (int)v4 + 16);
      v25 = v28;
      LOBYTE(v29) = v28;
      v26 = v9;
      BlockSource::setBlockAndData(
        (int)v8,
        (const UpdateBlockPacket *)((char *)v4 + 16),
        (int)&v25,
        *((_BYTE *)v4 + 30),
        0);
      result = v29;
      if ( v29 != (unsigned __int16)FullBlock::AIR )
      {
        result = Block::mBlocks[(unsigned __int8)result];
        if ( result )
        {
          result = Block::hasProperty(result, (int)Block::mBlocks, 1024LL);
          if ( result == 1 )
          {
            v10 = (BlockState *)Block::getBlockState(Block::mWoodenDoor, 11);
            v11 = BlockState::getBool(v10, (const unsigned __int8 *)((unsigned int)&v29 | 1));
            v12 = *((_DWORD *)v4 + 5);
            v13 = *((_DWORD *)v4 + 6);
            v22 = *((_DWORD *)v4 + 4);
            v14 = 1;
            if ( v11 )
              v14 = -1;
            v23 = v12 + v14;
            v24 = v13;
            BlockSource::getBlockAndData((BlockSource *)&v20, v8, (int)&v22);
            v18 = v20;
            v16 = v20;
            v19 = v21;
            v17 = v21;
            v15 = *((_BYTE *)v4 + 30);
            result = BlockSource::fireBlockChanged((int)v8, (int)&v22, (int)&v18, (int)&v16);
          }
        }
      }
    }
  }
  return result;
}


void __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const ExplodePacket *a3)
{
  LegacyClientNetworkHandler *v3; // r4@1
  Entity *v5; // r0@3
  int v6; // r0@3
  char *v11; // r0@3
  void *v12; // r0@3
  void *v13; // r4@4
  int v14; // [sp+0h] [bp-A28h]@0
  char v15; // [sp+4h] [bp-A24h]@3
  void *v16; // [sp+14h] [bp-A14h]@5
  int v17; // [sp+18h] [bp-A10h]@5
  void *ptr; // [sp+1Ch] [bp-A0Ch]@3
  int v19; // [sp+20h] [bp-A08h]@5
  int v20; // [sp+2Ch] [bp-9FCh]@6

  v3 = this;
  _R5 = a3;
  if ( Level::isUsableLevel(*((Level **)this + 10), a2) == 1
    && ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1)) )
  {
    v5 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
    v6 = Entity::getRegion(v5);
    __asm
    {
      VLDR            S0, [R5,#0x1C]
      VSTR            S0, [SP,#0xA28+var_A28]
    }
    Explosion::Explosion(COERCE_FLOAT(&v15), v6, 0, (int)_R5 + 16, v14);
    v11 = Explosion::getToBlow((Explosion *)&v15);
    std::__detail::_Insert_base<BlockPos,BlockPos,std::allocator<BlockPos>,std::__detail::_Identity,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert_range<__gnu_cxx::__normal_iterator<BlockPos const*,std::vector<BlockPos,std::allocator<BlockPos>>>,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<BlockPos,true>>>>(
      (int)v11,
      *((_QWORD *)_R5 + 4),
      *((_QWORD *)_R5 + 4) >> 32);
    Explosion::finalizeExplosion((Explosion *)&v15);
    v12 = ptr;
    if ( ptr )
      do
      {
        v13 = *(void **)v12;
        operator delete(v12);
        v12 = v13;
      }
      while ( v13 );
    _aeabi_memclr4(v16, 4 * v17);
    ptr = 0;
    v19 = 0;
    if ( v16 )
      if ( &v20 != v16 )
        operator delete(v16);
  }
}


signed int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const RemoveEntityPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r4@1
  const RemoveEntityPacket *v4; // r5@1
  signed int result; // r0@1
  __int64 v6; // r2@2
  int v7; // [sp+4h] [bp-14h]@2

  v3 = this;
  v4 = a3;
  result = Level::isUsableLevel(*((Level **)this + 10), a2);
  if ( result == 1 )
  {
    v6 = *((_QWORD *)v4 + 2);
    (*(void (__fastcall **)(int *))(**((_DWORD **)v3 + 10) + 60))(&v7);
    result = v7;
    if ( v7 )
    {
      (*(void (**)(void))(**((_DWORD **)v3 + 10) + 104))();
      result = v7;
      if ( v7 )
        result = (*(int (**)(void))(*(_DWORD *)v7 + 32))();
    }
  }
  return result;
}


void __fastcall LegacyClientNetworkHandler::onConnect(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2)
{
  LegacyClientNetworkHandler *v2; // r8@1
  const NetworkIdentifier *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  __int64 v6; // kr00_8@3
  SkinRepositoryClientInterface *v7; // r0@3
  Skin *v8; // r11@3
  NetworkHandler *v9; // r0@3
  int v10; // r0@3
  int v11; // r5@3
  const void **v12; // r0@5
  char *v13; // r0@5
  char *v14; // r0@6
  void *v15; // r0@7
  mce::TextureGroup *v16; // r0@8
  char *v17; // r5@8
  mce::TextureGroup *v18; // r0@8
  int *v19; // r6@8
  char *v20; // r0@8
  const char **v21; // r7@8
  int v22; // r0@8
  __int64 *v23; // ST54_4@8
  __int64 *v24; // ST58_4@8
  UserAuthentication *v25; // r0@8
  char *v26; // ST4C_4@8
  UnverifiedCertificate *v27; // ST48_4@8
  char *v28; // ST44_4@8
  int v29; // ST40_4@8
  Options *v30; // r0@8
  int v31; // r4@8
  Options *v32; // r0@8
  int v33; // r6@8
  int v34; // r0@8
  int v35; // r5@8
  void *v36; // r0@8
  void *v37; // r0@9
  int **v38; // r5@10
  ConnectionRequest *v39; // r0@11
  void *v40; // r0@12
  void *v41; // r0@13
  void *v42; // r0@14
  unsigned int *v43; // r2@16
  signed int v44; // r1@18
  unsigned int *v45; // r2@20
  signed int v46; // r1@22
  unsigned int *v47; // r2@24
  signed int v48; // r1@26
  unsigned int *v49; // r2@28
  signed int v50; // r1@30
  unsigned int *v51; // r2@32
  signed int v52; // r1@34
  unsigned int *v53; // r2@36
  signed int v54; // r1@38
  unsigned int *v55; // r2@40
  signed int v56; // r1@42
  unsigned int *v57; // r2@44
  signed int v58; // r1@46
  unsigned int *v59; // r2@80
  signed int v60; // r1@82
  unsigned int *v61; // r2@84
  signed int v62; // r1@86
  void **v63; // [sp+5Ch] [bp-7Ch]@10
  int v64; // [sp+60h] [bp-78h]@10
  int v65; // [sp+64h] [bp-74h]@10
  char v66; // [sp+68h] [bp-70h]@10
  int v67; // [sp+6Ch] [bp-6Ch]@10
  ConnectionRequest *v68; // [sp+70h] [bp-68h]@10
  int v69; // [sp+74h] [bp-64h]@8
  int v70; // [sp+7Ch] [bp-5Ch]@8
  int *v71[4]; // [sp+80h] [bp-58h]@8
  int v72; // [sp+90h] [bp-48h]@8
  int v73; // [sp+94h] [bp-44h]@8
  int v74; // [sp+98h] [bp-40h]@7
  char *v75; // [sp+9Ch] [bp-3Ch]@5
  char *v76; // [sp+A0h] [bp-38h]@5
  int v77; // [sp+A4h] [bp-34h]@3
  int v78; // [sp+A8h] [bp-30h]@1
  int v79; // [sp+ACh] [bp-2Ch]@1

  v2 = this;
  v3 = a2;
  NetworkIdentifier::toString((NetworkIdentifier *)&v79, (int)a2);
  NetworkIdentifier::toString((NetworkIdentifier *)&v78, (int)v2 + 48);
  v4 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
  {
    v43 = (unsigned int *)(v78 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v79 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  *((_QWORD *)v2 + 28) = *(_QWORD *)v3;
  *((_WORD *)v2 + 116) = *((_WORD *)v3 + 4);
  _aeabi_memcpy8((char *)v2 + 240, (char *)v3 + 16, 132);
  v6 = ClientInstance::getClientRandomId((ClientInstance *)*((_DWORD *)v2 + 1));
  v7 = (SkinRepositoryClientInterface *)ClientInstance::getSkinRepositoryClientInterface(*((ClientInstance **)v2 + 1));
  v8 = SkinRepositoryClientInterface::getSelectedSkinOrDefault(v7, 1);
  v9 = (NetworkHandler *)ClientInstance::getClientNetworkSystem(*((ClientInstance **)v2 + 1));
  v10 = NetworkHandler::getConnector(v9);
  v11 = (*(int (**)(void))(*(_DWORD *)v10 + 32))();
  sub_119C854(&v77, (int *)(v11 + 8));
  if ( !*(_DWORD *)(v77 - 12) )
    EntityInteraction::setInteractText(&v77, (int *)(v11 + 4));
    if ( *(_WORD *)v11 == 2 )
      v75 = (char *)&unk_28898CC;
      sub_119CAF8((const void **)&v75, *(_DWORD *)(v77 - 12) + 1);
      sub_119C894((const void **)&v75, "[", 1u);
      sub_119C8A4((const void **)&v75, (const void **)&v77);
      v12 = sub_119C894((const void **)&v75, "]", 1u);
      v76 = (char *)*v12;
      *v12 = &unk_28898CC;
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        &v77,
        (int *)&v76);
      v13 = v76 - 12;
      if ( (int *)(v76 - 12) != &dword_28898C0 )
      {
        v59 = (unsigned int *)(v76 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
        }
        else
          v60 = (*v59)--;
        if ( v60 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v13);
      }
      v14 = v75 - 12;
      if ( (int *)(v75 - 12) != &dword_28898C0 )
        v61 = (unsigned int *)(v75 - 4);
            v62 = __ldrex(v61);
          while ( __strex(v62 - 1, v61) );
          v62 = (*v61)--;
        if ( v62 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v14);
  sub_119C894((const void **)&v77, ":", 1u);
  Util::toString<int,(void *)0,(void *)0>((void **)&v74, *(_DWORD *)(v11 + 12));
  sub_119C8A4((const void **)&v77, (const void **)&v74);
  v15 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v74 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = (mce::TextureGroup *)ClientInstance::getTextures(*((ClientInstance **)v2 + 1));
  v17 = Skin::syncTextureData(v8, v16);
  v18 = (mce::TextureGroup *)ClientInstance::getTextures(*((ClientInstance **)v2 + 1));
  v19 = Skin::syncCapeTextureData(v8, v18);
  Skin::getSerializedGeometryData((Skin *)&v73, (SkinPack **)v8);
  v20 = Skin::getGeometryName(v8);
  v21 = (const char **)v20;
  v22 = I18n::getCurrentLanguage((I18n *)v20);
  Localization::getFullLanguageCode((Localization *)&v72, v22);
  v23 = (__int64 *)v19;
  v24 = (__int64 *)v17;
  v25 = (UserAuthentication *)ClientInstance::getUserAuthentication(*((ClientInstance **)v2 + 1));
  v26 = UserAuthentication::getLocalKeys(v25);
  v27 = (UnverifiedCertificate *)*((_DWORD *)v2 + 94);
  v28 = Skin::getSerializable(v8);
  v29 = ClientInstance::getCurrentInputMode(*((ClientInstance **)v2 + 1));
  v30 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v2 + 1));
  v31 = Options::getUIProfile(v30);
  v32 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v2 + 1));
  v33 = Options::getGuiScale(v32);
  v34 = ClientInstance::getMinecraftGame(*((ClientInstance **)v2 + 1));
  v35 = (*(int (**)(void))(*(_DWORD *)v34 + 136))();
  sub_119C884((void **)&v70, (const char *)&unk_257BC67);
  ClientInstance::getPlatformId((ClientInstance *)&v69, *((_DWORD *)v2 + 1));
  ConnectionRequest::create(
    (int)v71,
    (const PrivateKeyManager *)v26,
    v27,
    (const char **)&v77,
    v6,
    (const char **)v28,
    v24,
    v23,
    v21,
    (const unsigned __int8 **)&v73,
    v29,
    v31,
    v33,
    (const char **)&v72,
    v35,
    (const char **)&v70,
    2,
    (const char **)&v69);
  v36 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v69 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v36);
  v37 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v70 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v37);
  v64 = 2;
  v65 = 1;
  v66 = 0;
  v63 = &off_26D9848;
  v67 = 137;
  v38 = (int **)operator new(0x10u);
  ConnectionRequest::ConnectionRequest(v38, v71);
  v68 = (ConnectionRequest *)v38;
  (*(void (**)(void))(**((_DWORD **)v2 + 50) + 8))();
  if ( v68 )
    v39 = ConnectionRequest::~ConnectionRequest(v68);
    operator delete((void *)v39);
  ConnectionRequest::~ConnectionRequest((ConnectionRequest *)v71);
  v40 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v72 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v40);
  v41 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v73 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v41);
  v42 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v77 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v42);
}


int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const MobArmorEquipmentPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r5@1
  const MobArmorEquipmentPacket *v4; // r4@1
  int result; // r0@1
  int v6; // r5@2

  v3 = this;
  v4 = a3;
  result = Level::isUsableLevel(*((Level **)this + 10), a2);
  if ( result == 1 )
  {
    result = Level::getRuntimeEntity(*((_DWORD *)v3 + 10), 0, *((_QWORD *)v4 + 2), 0);
    v6 = result;
    if ( result )
    {
      result = Entity::hasCategory(result, 2);
      if ( result == 1 )
      {
        (*(void (__fastcall **)(int, _DWORD, char *))(*(_DWORD *)v6 + 1024))(v6, 0, (char *)v4 + 24);
        (*(void (__fastcall **)(int, signed int, char *))(*(_DWORD *)v6 + 1024))(v6, 1, (char *)v4 + 96);
        (*(void (__fastcall **)(_DWORD, signed int, char *))(*(_DWORD *)v6 + 1024))(v6, 2, (char *)v4 + 168);
        result = (*(int (__fastcall **)(int, signed int, char *))(*(_DWORD *)v6 + 1024))(v6, 3, (char *)v4 + 240);
      }
    }
  }
  return result;
}


RakNet *__fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const AddPlayerPacket *a3)
{
  const AddPlayerPacket *v3; // r6@1
  LegacyClientNetworkHandler *v4; // r5@1
  int v5; // r1@2
  Entity *v6; // r0@3
  Entity *v7; // r4@3
  Entity *v8; // r0@6
  Entity *v9; // r4@6
  Entity *v10; // ST24_4@9
  int v11; // r9@9
  Level *v12; // r0@9
  char *v13; // r0@9
  int v14; // r10@9
  char v15; // r7@9
  Mob *v16; // r8@9
  Player *v17; // r11@9
  int v18; // r1@9
  int v19; // r1@9
  char *v20; // r0@9
  char *v21; // r0@9
  __int64 v22; // r6@9
  __int64 v23; // kr00_8@9
  __int64 v24; // kr08_8@9
  int v25; // r1@9
  unsigned int v26; // r6@9 OVERLAPPED
  unsigned int v27; // r7@9
  unsigned int v28; // r4@9
  int v29; // r0@9
  int v30; // r11@10
  int v31; // r5@10
  bool v32; // zf@11
  int v33; // r8@16
  int v34; // r4@18
  const AddPlayerPacket *v35; // r9@19
  Player *v36; // r0@23
  SkinInfoData *v37; // r5@23
  unsigned int v38; // r4@23
  void *v39; // r0@23
  char *v40; // r6@25
  const char *v41; // r8@25
  int v42; // r4@25
  int v43; // r7@25
  void *v44; // r6@25
  unsigned int v45; // r4@25
  void *v46; // r7@27
  char *v47; // r10@28
  int v48; // r4@29
  char *v49; // r0@33
  unsigned int v50; // r4@44
  void *v51; // r0@44
  char *v52; // r6@46
  const char *v53; // r8@47
  int v54; // r4@47
  int v55; // r7@47
  void *v56; // r6@47
  unsigned int v57; // r4@47
  void *v58; // r7@49
  char *v59; // r10@50
  int v60; // r4@51
  char *v61; // r0@55
  void (__fastcall *v62)(Player *, char *, void **, void **); // r7@64
  char *v63; // r4@64
  int v64; // r0@69
  int v65; // r0@70
  int v66; // r0@71
  int v67; // r0@71
  void (__cdecl *v68)(int, Player **); // r2@71
  int i; // r6@73
  int v70; // r8@73
  int v71; // r3@74
  int v72; // r5@74
  int v73; // r7@74
  int v74; // r3@74
  int v75; // r5@74
  int v76; // r7@74
  RakNet *result; // r0@75
  const AddPlayerPacket *v78; // [sp+18h] [bp-130h]@9
  __int64 *v79; // [sp+1Ch] [bp-12Ch]@6
  Player *v80; // [sp+1Ch] [bp-12Ch]@10
  __int64 v81; // [sp+20h] [bp-128h]@9
  const NetworkIdentifier *v82; // [sp+28h] [bp-120h]@1
  LegacyClientNetworkHandler *v83; // [sp+2Ch] [bp-11Ch]@9
  void **v84; // [sp+30h] [bp-118h]@74
  signed __int64 v85; // [sp+34h] [bp-114h]@74
  char v86; // [sp+3Ch] [bp-10Ch]@74
  int v87; // [sp+40h] [bp-108h]@74
  int v88; // [sp+44h] [bp-104h]@74
  int v89; // [sp+48h] [bp-100h]@74
  int v90; // [sp+4Ch] [bp-FCh]@74
  int v91; // [sp+50h] [bp-F8h]@74
  int v92; // [sp+54h] [bp-F4h]@74
  int v93; // [sp+58h] [bp-F0h]@74
  int v94; // [sp+5Ch] [bp-ECh]@74
  Player *v95; // [sp+64h] [bp-E4h]@71
  void *v96; // [sp+68h] [bp-E0h]@44
  char *v97; // [sp+6Ch] [bp-DCh]@44
  char *v98; // [sp+70h] [bp-D8h]@44
  void *ptr; // [sp+74h] [bp-D4h]@23
  char *v100; // [sp+78h] [bp-D0h]@23
  char *v101; // [sp+7Ch] [bp-CCh]@23
  __int64 v102; // [sp+80h] [bp-C8h]@9
  int v103; // [sp+88h] [bp-C0h]@9
  int v104; // [sp+8Ch] [bp-BCh]@9
  int v105; // [sp+90h] [bp-B8h]@9
  int v106; // [sp+94h] [bp-B4h]@9
  int v107; // [sp+98h] [bp-B0h]@9
  int v108; // [sp+118h] [bp-30h]@9
  RakNet *v109; // [sp+120h] [bp-28h]@1

  v82 = a2;
  v3 = a3;
  v4 = this;
  v109 = _stack_chk_guard;
  if ( Level::isUsableLevel(*((Level **)this + 10), this) == 1
    && ClientInstance::getLocalPlayer(*((ClientInstance **)v4 + 1)) )
  {
    v6 = (Entity *)Level::getPlayer(*((_DWORD *)v4 + 10), v5, *((_DWORD *)v3 + 12), *((_DWORD *)v3 + 13));
    v7 = v6;
    if ( v6 && !Entity::isRemoved(v6) )
      (*(void (__fastcall **)(Entity *))(*(_DWORD *)v7 + 44))(v7);
    v79 = (__int64 *)((char *)v3 + 32);
    v8 = (Entity *)Level::getPlayer(*((Level **)v4 + 10), (const AddPlayerPacket *)((char *)v3 + 32));
    v9 = v8;
    if ( v8 && !Entity::isRemoved(v8) )
      (*(void (__fastcall **)(Entity *))(*(_DWORD *)v9 + 44))(v9);
    v83 = v4;
    v10 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v4 + 1));
    v11 = *((_DWORD *)v4 + 50);
    v12 = (Level *)ClientInstance::getLevel(*((ClientInstance **)v4 + 1));
    v13 = Level::getLevelData(v12);
    v14 = LevelData::getGameType((LevelData *)v13);
    v106 = dword_27CB35C;
    v103 = unk_27CB350;
    v104 = unk_27CB354;
    v105 = *(_DWORD *)&word_27CB358;
    _aeabi_memclr8(&v107, 128);
    v108 = 3;
    v15 = *((_BYTE *)v3 + 12);
    v16 = (Mob *)operator new(0x14B0u);
    RemotePlayer::RemotePlayer((int)v16, v10, v11, v14, (int)&v103, v15, *v79, *((_QWORD *)v3 + 5));
    v17 = v16;
    Entity::setUniqueID((int)v16, v18, *((_QWORD *)v3 + 6));
    Entity::setRuntimeID((int)v16, v19, *((_QWORD *)v3 + 7), *((_QWORD *)v3 + 7) >> 32);
    v102 = *((_QWORD *)v3 + 11);
    Entity::moveTo((int)v16, (int)v3 + 64);
    Mob::setYHeadRot(v16, *((float *)v3 + 24));
    (*(void (__fastcall **)(Mob *, char *))(*(_DWORD *)v16 + 1228))(v16, (char *)v3 + 28);
    (*(void (__fastcall **)(Mob *, char *))(*(_DWORD *)v16 + 116))(v16, (char *)v3 + 76);
    v20 = Entity::getEntityData(v16);
    SynchedEntityData::assignValues((int)v20, (unsigned __int64 *)v3 + 22, (int)v16);
    v21 = Level::getPlayerList(*((Level **)v4 + 10));
    v78 = v3;
    v23 = *((_QWORD *)v3 + 5);
    LODWORD(v22) = *((_QWORD *)v3 + 5) >> 32;
    HIDWORD(v22) = v23;
    v81 = v22;
    v24 = *v79;
    v25 = (522133279 * (unsigned __int64)(unsigned int)v23 >> 32) + 522133279 * v22;
    *(_QWORD *)(&v26 - 1) = *(_QWORD *)v21;
    v27 = ((unsigned __int64)*v79 >> 32) ^ 522133279 * (unsigned __int64)*v79 ^ v23 ^ v25;
    v28 = v27 % (unsigned int)(*(_QWORD *)v21 >> 32);
    v29 = *(_DWORD *)(*(_QWORD *)v21 + 4 * v28);
    if ( v29 )
    {
      v80 = v16;
      v30 = *(_DWORD *)v29;
      v31 = *(_DWORD *)(*(_DWORD *)v29 + 96);
      while ( 1 )
      {
        v32 = v31 == v27;
        if ( v31 == v27 )
          v32 = *(_QWORD *)(v30 + 8) == v24;
        if ( v32 && *(_QWORD *)(v30 + 16) == __PAIR__(v81, HIDWORD(v81)) )
          break;
        v33 = *(_DWORD *)v30;
        if ( *(_DWORD *)v30 )
        {
          v31 = *(_DWORD *)(v33 + 96);
          v29 = v30;
          v30 = *(_DWORD *)v30;
          if ( *(_DWORD *)(v33 + 96) % v26 == v28 )
            continue;
        }
        goto LABEL_18;
      }
      if ( !v29 )
LABEL_18:
        v34 = 0;
        goto LABEL_19;
      v34 = *(_DWORD *)v29;
LABEL_19:
      v17 = v80;
      v35 = v78;
    }
    else
      v34 = 0;
    Level::getPlayerList(*((Level **)v83 + 10));
    if ( v34 )
      (*(void (__fastcall **)(Player *, int, int, int))(*(_DWORD *)v17 + 1416))(v17, v34 + 52, v34 + 56, v34 + 68);
      v36 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)v83 + 1));
      v37 = (SkinInfoData *)Player::getSkin(v36);
      v38 = (*(int (**)(void))(*(_DWORD *)v37 + 20))();
      v39 = 0;
      ptr = 0;
      v100 = 0;
      v101 = 0;
      if ( v38 )
        v39 = operator new(v38);
      ptr = v39;
      v40 = (char *)v39 + v38;
      v101 = (char *)v39 + v38;
      _aeabi_memclr(v39, v38);
      v100 = v40;
      v41 = (const char *)(*(int (__fastcall **)(SkinInfoData *))(*(_DWORD *)v37 + 16))(v37);
      v42 = (*(int (__fastcall **)(SkinInfoData *))(*(_DWORD *)v37 + 16))(v37);
      v43 = v42 + (*(int (__fastcall **)(SkinInfoData *))(*(_DWORD *)v37 + 20))(v37);
      v44 = ptr;
      v45 = v43 - (_DWORD)v41;
      if ( v43 - (signed int)v41 <= (unsigned int)(v101 - (_BYTE *)ptr) )
        v47 = v100;
        if ( v100 - (_BYTE *)ptr >= v45 )
          if ( (const char *)v43 != v41 )
            _aeabi_memmove(ptr, v41);
          v49 = (char *)ptr + v45;
        else
          v48 = (int)&v41[v100 - (_BYTE *)ptr];
          if ( v100 != ptr )
          {
            v47 = v100;
          }
          if ( v43 != v48 )
            _aeabi_memmove(v47, v48);
          v49 = &v47[v43 - v48];
        v100 = v49;
      else
        if ( (const char *)v43 == v41 )
          v46 = 0;
          v46 = operator new(v45);
          _aeabi_memcpy(v46, v41, v45);
          v44 = ptr;
        if ( v44 )
          operator delete(v44);
        ptr = v46;
        v100 = (char *)v46 + v45;
        v101 = (char *)v46 + v45;
      v50 = (*(int (__fastcall **)(SkinInfoData *))(*(_DWORD *)v37 + 36))(v37);
      v51 = 0;
      v96 = 0;
      v97 = 0;
      v98 = 0;
      if ( v50 )
        v51 = operator new(v50);
      v96 = v51;
      v52 = (char *)v51 + v50;
      v98 = (char *)v51 + v50;
      _aeabi_memclr(v51, v50);
      v97 = v52;
        v53 = (const char *)(*(int (__fastcall **)(SkinInfoData *))(*(_DWORD *)v37 + 32))(v37);
        v54 = (*(int (__fastcall **)(SkinInfoData *))(*(_DWORD *)v37 + 32))(v37);
        v55 = v54 + (*(int (__fastcall **)(SkinInfoData *))(*(_DWORD *)v37 + 36))(v37);
        v56 = v96;
        v57 = v55 - (_DWORD)v53;
        if ( v55 - (signed int)v53 <= (unsigned int)(v98 - (_BYTE *)v96) )
          v59 = v97;
          if ( v97 - (_BYTE *)v96 >= v57 )
            if ( (const char *)v55 != v53 )
              _aeabi_memmove(v96, v53);
            v61 = (char *)v96 + v57;
          else
            v60 = (int)&v53[v97 - (_BYTE *)v96];
            if ( v97 != v96 )
            {
              v59 = v97;
            }
            if ( v55 != v60 )
              _aeabi_memmove(v59, v60);
            v61 = &v59[v55 - v60];
          v97 = v61;
          if ( (const char *)v55 == v53 )
            v58 = 0;
            v58 = operator new(v57);
            _aeabi_memcpy(v58, v53, v57);
            v56 = v96;
          if ( v56 )
            operator delete(v56);
          v96 = v58;
          v97 = (char *)v58 + v57;
          v98 = (char *)v58 + v57;
      v62 = *(void (__fastcall **)(Player *, char *, void **, void **))(*(_DWORD *)v17 + 1416);
      v63 = SkinInfoData::getSkinId(v37);
      SkinInfoData::getGeometryName(v37);
      SkinInfoData::getGeometryData(v37);
      v62(v17, v63, &ptr, &v96);
      if ( v96 )
        operator delete(v96);
      if ( ptr )
        operator delete(ptr);
    if ( ItemInstance::getId((const AddPlayerPacket *)((char *)v35 + 104)) )
      v64 = Player::getSupplies(v17);
      PlayerInventoryProxy::setItem(v64, 9, (int)v35 + 104, 0);
      v65 = Player::getSupplies(v17);
      PlayerInventoryProxy::clearSlot(v65, 9, 0);
    v66 = Player::getSupplies(v17);
    PlayerInventoryProxy::moveToSelectedSlot(v66, 9);
    Abilities::operator=((int)v17 + 4320, (int *)v35 + 47);
    v67 = *((_DWORD *)v83 + 10);
    v68 = *(void (__cdecl **)(int, Player **))(*(_DWORD *)v67 + 56);
    v95 = v17;
    v68(v67, &v95);
    if ( v95 )
      (*(void (__cdecl **)(Player *, _DWORD))(*(_DWORD *)v95 + 32))(v95, *(_DWORD *)(*(_DWORD *)v95 + 32));
    v95 = 0;
    v70 = *((_QWORD *)v35 + 2) >> 32;
    for ( i = *((_QWORD *)v35 + 2); v70 != i; i += 32 )
      v85 = 4294967298LL;
      v86 = 0;
      v84 = &off_26D9898;
      v71 = *(_DWORD *)(i + 4);
      v72 = *(_DWORD *)(i + 8);
      v73 = *(_DWORD *)(i + 12);
      v87 = *(_DWORD *)i;
      v88 = v71;
      v89 = v72;
      v90 = v73;
      v74 = *(_DWORD *)(i + 20);
      v75 = *(_DWORD *)(i + 24);
      v76 = *(_DWORD *)(i + 28);
      v91 = *(_DWORD *)(i + 16);
      v92 = v74;
      v93 = v75;
      v94 = v76;
      (*(void (__cdecl **)(LegacyClientNetworkHandler *, const NetworkIdentifier *))(*(_DWORD *)v83 + 196))(v83, v82);
  }
  result = (RakNet *)(_stack_chk_guard - v109);
  if ( _stack_chk_guard != v109 )
    _stack_chk_fail(result);
  return result;
}


signed int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const AddItemEntityPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r4@1
  const AddItemEntityPacket *v4; // r5@1
  signed int result; // r0@1
  Entity *v6; // r0@3
  BlockSource *v7; // r6@3
  void *v8; // r0@3
  void *v9; // r0@4
  void *v10; // r0@5
  int v11; // r7@8
  char *v12; // r0@8
  int v13; // r1@8
  int v14; // r2@8
  int v15; // r3@8
  int v16; // r7@8
  int v17; // r0@8
  int v18; // r5@8
  Entity *v19; // r4@8
  unsigned int *v20; // r2@14
  signed int v21; // r1@16
  unsigned int *v22; // r2@18
  signed int v23; // r1@20
  unsigned int *v24; // r2@22
  signed int v25; // r1@24
  int v26; // [sp+Ch] [bp-2Ch]@8
  int v27; // [sp+10h] [bp-28h]@3
  int v28; // [sp+14h] [bp-24h]@4
  int v29; // [sp+18h] [bp-20h]@3
  int v30; // [sp+1Ch] [bp-1Ch]@3

  v3 = this;
  v4 = a3;
  result = Level::isUsableLevel(*((Level **)this + 10), a2);
  if ( result == 1 )
  {
    result = ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
    if ( result )
    {
      v6 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
      v7 = (BlockSource *)Entity::getRegion(v6);
      EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v27, 64);
      EntityFactory::createSpawnedEntity((Entity **)&v30, (const void **)&v27, 0, (int)v4 + 120, &Vec2::ZERO);
      v8 = (void *)(v29 - 12);
      if ( (int *)(v29 - 12) != &dword_28898C0 )
      {
        v20 = (unsigned int *)(v29 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v8);
      }
      v9 = (void *)(v28 - 12);
      if ( (int *)(v28 - 12) != &dword_28898C0 )
        v22 = (unsigned int *)(v28 - 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v9);
      v10 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
        v24 = (unsigned int *)(v27 - 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v10);
      result = v30;
      if ( v30 )
        if ( Entity::hasCategory(v30, 1024) == 1 )
          v11 = v30;
          ItemInstance::operator=(v30 + 3416, (int)v4 + 48);
          *(_DWORD *)(v11 + 3496) = 0;
          *(_DWORD *)(v11 + 108) = *((_DWORD *)v4 + 33);
          *(_DWORD *)(v11 + 112) = *((_DWORD *)v4 + 34);
          *(_DWORD *)(v11 + 116) = *((_DWORD *)v4 + 35);
          v12 = Entity::getEntityData((Entity *)v11);
          SynchedEntityData::assignValues((int)v12, (unsigned __int64 *)v4 + 2, v30);
          v13 = v30;
          v14 = *((_DWORD *)v4 + 8);
          v15 = *((_DWORD *)v4 + 9);
          v16 = *((_DWORD *)v4 + 10);
          v17 = *((_DWORD *)v3 + 10);
          v18 = *((_DWORD *)v4 + 11);
          v30 = 0;
          v26 = v13;
          v19 = MultiPlayerLevel::putEntity(v17, v7, v14, v15, v16, v18, (int)&v26);
          if ( v26 )
            (*(void (**)(void))(*(_DWORD *)v26 + 32))();
          v26 = 0;
          Entity::reload(v19);
        result = v30;
        if ( v30 )
          result = (*(int (**)(void))(*(_DWORD *)v30 + 32))();
    }
  }
  return result;
}


Entity *__fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const AnimatePacket *a3)
{
  LegacyClientNetworkHandler *v3; // r6@1
  const AnimatePacket *v4; // r4@1
  Entity *result; // r0@1
  Entity *v6; // r5@2
  signed int v7; // r0@4
  Entity *v8; // r6@10
  int v9; // r2@13
  Entity *v10; // r0@13
  int v11; // r1@13
  int v12; // r0@16
  Entity *v13; // r6@17

  v3 = this;
  v4 = a3;
  result = (Entity *)Level::isUsableLevel(*((Level **)this + 10), a2);
  if ( result != (Entity *)1 )
    return result;
  result = (Entity *)Level::getRuntimeEntity(*((_DWORD *)v3 + 10), 0, *((_QWORD *)v4 + 2), 0);
  v6 = result;
  if ( !result )
  if ( Entity::hasCategory((int)result, 1) != 1 )
    goto LABEL_15;
  v7 = *((_DWORD *)v4 + 6);
  if ( v7 <= 127 )
  {
    if ( v7 == 1 )
    {
      (*(void (__fastcall **)(Entity *))(*(_DWORD *)v6 + 928))(v6);
    }
    else if ( v7 == 3 )
      (*(void (__fastcall **)(Entity *, _DWORD, _DWORD))(*(_DWORD *)v6 + 1388))(v6, 0, 0);
  }
  if ( v7 != 128 )
    if ( v7 == 129 )
      result = (Entity *)Entity::getRide(v6);
      v8 = result;
      if ( result )
      {
        result = (Entity *)EntityClassTree::isInstanceOf((int)result, 90);
        if ( result == (Entity *)1 )
        {
          result = (Entity *)Entity::isRider(v8, v6);
          if ( result == (Entity *)1 )
          {
            v9 = *((_DWORD *)v4 + 7);
            v10 = v8;
            v11 = 0;
            return j_j_j__ZN4Boat13setRowingTimeE4Sidef(v10, v11, v9);
          }
        }
      }
      return result;
LABEL_15:
    result = (Entity *)*((_DWORD *)v4 + 6);
    if ( result == (Entity *)4 )
      v12 = ClientInstance::getLevelRenderer(*((ClientInstance **)v3 + 1));
      result = (Entity *)j_j_j__ZN14ParticleEngine21createTrackingEmitterER6Entity12ParticleType(
                           *(_DWORD *)(v12 + 1568),
                           v6,
                           2);
  result = (Entity *)Entity::getRide(v6);
  v13 = result;
  if ( result )
    result = (Entity *)EntityClassTree::isInstanceOf((int)result, 90);
    if ( result == (Entity *)1 )
      result = (Entity *)Entity::isRider(v13, v6);
      if ( result == (Entity *)1 )
        v9 = *((_DWORD *)v4 + 7);
        v10 = v13;
        v11 = 1;
        return j_j_j__ZN4Boat13setRowingTimeE4Sidef(v10, v11, v9);
  return result;
}


int __fastcall LegacyClientNetworkHandler::onUnableToConnect(LegacyClientNetworkHandler *this)
{
  LegacyClientNetworkHandler *v1; // r4@1
  signed int v2; // r1@1
  ClientInstance *v3; // r0@1
  int v4; // r5@2
  int v5; // r0@2
  int v6; // r5@2
  unsigned int *v7; // r1@3
  unsigned int v8; // r0@5
  int v9; // r5@7
  int v10; // r6@7
  int *v11; // r0@7
  int v12; // r5@7
  unsigned int *v13; // r1@8
  unsigned int v14; // r0@10
  unsigned int *v15; // r6@14
  unsigned int v16; // r0@16
  unsigned int *v17; // r6@20
  unsigned int v18; // r0@22
  int v19; // r5@27
  int v20; // r6@27
  int *v21; // r0@27
  int v22; // r5@27
  unsigned int *v23; // r1@28
  unsigned int v24; // r0@30
  unsigned int *v25; // r6@34
  unsigned int v26; // r0@36
  void *v27; // r0@41
  void *v28; // r0@42
  void *v29; // r0@43
  unsigned int *v30; // r2@44
  signed int v31; // r1@46
  void *v32; // r0@51
  void *v33; // r0@52
  Social::MultiplayerServiceManager *v34; // r0@54
  unsigned int *v36; // r2@55
  signed int v37; // r1@57
  unsigned int *v38; // r2@59
  signed int v39; // r1@61
  unsigned int *v40; // r2@63
  signed int v41; // r1@65
  unsigned int *v42; // r2@67
  signed int v43; // r1@69
  int v44; // [sp+8h] [bp-58h]@7
  int v45; // [sp+10h] [bp-50h]@7
  int v46; // [sp+18h] [bp-48h]@7
  char v47; // [sp+1Ch] [bp-44h]@7
  int v48; // [sp+20h] [bp-40h]@7
  int v49; // [sp+28h] [bp-38h]@27
  int v50; // [sp+30h] [bp-30h]@27
  int v51; // [sp+38h] [bp-28h]@27
  char v52; // [sp+3Ch] [bp-24h]@27
  int v53; // [sp+40h] [bp-20h]@27
  char v54; // [sp+44h] [bp-1Ch]@2
  int v55; // [sp+48h] [bp-18h]@2

  v1 = this;
  v2 = ClientInstance::isPrimaryClient(*((ClientInstance **)this + 1));
  v3 = (ClientInstance *)*((_DWORD *)v1 + 1);
  if ( v2 == 1 )
  {
    v4 = ClientInstance::getMainSceneStack(v3);
    v5 = ClientInstance::getSceneFactory(*((ClientInstance **)v1 + 1));
    SceneFactory::createStartMenuScreen((SceneFactory *)&v54, v5);
    SceneStack::pushScreen(v4, (int)&v54, 1);
    v6 = v55;
    if ( v55 )
    {
      v7 = (unsigned int *)(v55 + 4);
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
        v15 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
        }
        else
          v16 = (*v15)--;
        if ( v16 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
    v19 = ClientInstance::getMainSceneStack(*((ClientInstance **)v1 + 1));
    v20 = ClientInstance::getSceneFactory(*((ClientInstance **)v1 + 1));
    sub_119C884((void **)&v51, (const char *)&unk_257BC67);
    sub_119C884((void **)&v50, "disconnectionScreen.cantConnect");
    v21 = (int *)sub_119C884((void **)&v49, (const char *)&unk_257BC67);
    SceneFactory::createDisconnectScreen((unsigned __int64 *)&v52, v20, &v51, &v50, v21);
    SceneStack::pushScreen(v19, (int)&v52, 0);
    v22 = v53;
    if ( v53 )
      v23 = (unsigned int *)(v53 + 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 == 1 )
        v25 = (unsigned int *)(v22 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          v26 = (*v25)--;
        if ( v26 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
    v32 = (void *)(v49 - 12);
    if ( (int *)(v49 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v49 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v32);
    v33 = (void *)(v50 - 12);
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v50 - 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v33);
    v29 = (void *)(v51 - 12);
    if ( (int *)(v51 - 12) == &dword_28898C0 )
      goto LABEL_54;
    v30 = (unsigned int *)(v51 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      goto LABEL_76;
    goto LABEL_75;
  }
  v9 = ClientInstance::getClientSceneStack(v3);
  v10 = ClientInstance::getSceneFactory(*((ClientInstance **)v1 + 1));
  sub_119C884((void **)&v46, (const char *)&unk_257BC67);
  sub_119C884((void **)&v45, "disconnectionScreen.cantConnect");
  v11 = (int *)sub_119C884((void **)&v44, (const char *)&unk_257BC67);
  SceneFactory::createDisconnectScreen((unsigned __int64 *)&v47, v10, &v46, &v45, v11);
  SceneStack::pushScreen(v9, (int)&v47, 1);
  v12 = v48;
  if ( v48 )
    v13 = (unsigned int *)(v48 + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 == 1 )
      v17 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  v27 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v44 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  v28 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v45 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  v29 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v46 - 4);
LABEL_76:
      if ( v31 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v29);
LABEL_75:
    v31 = (*v30)--;
    goto LABEL_76;
LABEL_54:
  v34 = (Social::MultiplayerServiceManager *)ClientInstance::getMultiplayerServiceManager(*((ClientInstance **)v1 + 1));
  return Social::MultiplayerServiceManager::leaveGame(v34);
}


Abilities *__fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const AdventureSettingsPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r5@1
  const AdventureSettingsPacket *v4; // r4@1
  Abilities *result; // r0@1
  int v6; // r0@3
  int v7; // r1@3
  signed int v8; // r6@3
  AdventureSettings *v9; // r0@4
  AdventureSettings *v10; // r0@5
  int v11; // r5@5
  __int64 v12; // r0@5
  int v13; // [sp+0h] [bp-A0h]@5
  char v14; // [sp+48h] [bp-58h]@5

  v3 = this;
  v4 = a3;
  result = (Abilities *)Level::isUsableLevel(*((Level **)this + 10), a2);
  if ( result == (Abilities *)1 )
  {
    result = (Abilities *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
    if ( result )
    {
      v6 = ClientInstance::getLevel(*((ClientInstance **)v3 + 1));
      v8 = Level::getPlayer(v6, v7, *((_QWORD *)v4 + 4), *((_QWORD *)v4 + 4) >> 32);
      if ( v8 )
      {
        v9 = (AdventureSettings *)Level::getAdventureSettings(*((Level **)v3 + 10));
        AdventureSettingsPacket::fillIn(v4, v9, (Abilities *)(v8 + 4320));
      }
      Abilities::Abilities((int)&v14);
      v10 = (AdventureSettings *)Level::getAdventureSettings(*((Level **)v3 + 10));
      AdventureSettingsPacket::fillIn(v4, v10, (Abilities *)&v14);
      v11 = *((_DWORD *)v3 + 10);
      Abilities::Abilities((int)&v13, (int *)&v14);
      HIDWORD(v12) = (char *)v4 + 32;
      LODWORD(v12) = v11;
      Level::setPlayerAbilities(v12, &v13);
      Abilities::~Abilities((Abilities *)&v13);
      result = Abilities::~Abilities((Abilities *)&v14);
    }
  }
  return result;
}


Entity *__fastcall LegacyClientNetworkHandler::_handleEntityLink(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  Entity *v4; // r6@1
  int v5; // r1@1
  Entity *result; // r0@1
  Entity *v7; // r5@1
  bool v8; // zf@1
  char *v9; // r0@5

  v2 = a1;
  v3 = a2;
  v4 = (Entity *)Level::fetchEntity(*(_DWORD *)(a1 + 40), a2, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 8) >> 32, 0);
  result = (Entity *)Level::fetchEntity(*(_DWORD *)(v2 + 40), v5, *(_QWORD *)(v3 + 16), *(_QWORD *)(v3 + 16) >> 32, 0);
  v7 = result;
  v8 = v4 == 0;
  if ( v4 )
    v8 = result == 0;
  if ( !v8 )
  {
    result = (Entity *)*(_BYTE *)v3;
    if ( (unsigned int)result - 1 >= 2 )
    {
      if ( !*(_BYTE *)v3 )
      {
        result = (Entity *)Entity::isRider(v4, v7);
        if ( result == (Entity *)1 )
          result = (Entity *)(*(int (__fastcall **)(Entity *, signed int, _DWORD))(*(_DWORD *)v7 + 596))(
                               v7,
                               1,
                               *(_BYTE *)(v3 + 24));
      }
    }
    else
      v9 = Entity::getUniqueID(v7);
      result = (Entity *)Entity::isRider((int)v4, v9);
      if ( !result )
        result = (Entity *)(*(int (__fastcall **)(Entity *, Entity *))(*(_DWORD *)v7 + 144))(v7, v4);
  }
  return result;
}


void __fastcall LegacyClientNetworkHandler::~LegacyClientNetworkHandler(LegacyClientNetworkHandler *this)
{
  void *v1; // r0@1

  v1 = (void *)LegacyClientNetworkHandler::~LegacyClientNetworkHandler(this);
  j_j_j__ZdlPv_4(v1);
}


int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const PlayerHotbarPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r4@1
  const PlayerHotbarPacket *v4; // r5@1
  int result; // r0@1
  Player *v6; // r0@3
  int v7; // r0@3
  int v8; // r6@5
  Player *v9; // r0@6
  PlayerInventoryProxy *v10; // r0@6
  Player *v11; // r0@7
  PlayerInventoryProxy *v12; // r0@7
  int v13; // r0@8

  v3 = this;
  v4 = a3;
  result = ClientInstance::getLocalPlayer(*((ClientInstance **)this + 1));
  if ( result )
  {
    if ( *((_BYTE *)v4 + 20) )
    {
      v6 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
      v7 = Player::getSupplies(v6);
      PlayerInventoryProxy::selectSlot(v7, *((_DWORD *)v4 + 4), (Inventory *)*((_BYTE *)v4 + 21));
    }
    if ( (signed int)((*((_QWORD *)v4 + 3) >> 32) - *((_QWORD *)v4 + 3)) >= 1 )
      v8 = 0;
      do
      {
        v9 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
        v10 = (PlayerInventoryProxy *)Player::getSupplies(v9);
        if ( v8 >= PlayerInventoryProxy::getLinkedSlotsCount(v10) )
          break;
        v11 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
        v12 = (PlayerInventoryProxy *)Player::getSupplies(v11);
        PlayerInventoryProxy::linkSlot(v12, v8, *(_DWORD *)(*((_DWORD *)v4 + 6) + 4 * v8));
        ++v8;
      }
      while ( v8 < (signed int)((*((_QWORD *)v4 + 3) >> 32) - *((_QWORD *)v4 + 3)) >> 2 );
    v13 = ClientInstance::getScreen(*((ClientInstance **)v3 + 1));
    result = (*(int (**)(void))(*(_DWORD *)v13 + 24))();
  }
  return result;
}


signed int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const BlockEntityDataPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r5@1
  const BlockEntityDataPacket *v4; // r4@1
  signed int result; // r0@1
  Entity *v6; // r0@3
  BlockSource *v7; // r0@3

  v3 = this;
  v4 = a3;
  result = Level::isUsableLevel(*((Level **)this + 10), a2);
  if ( result == 1 )
  {
    result = ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
    if ( result )
    {
      v6 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
      v7 = (BlockSource *)Entity::getRegion(v6);
      result = BlockSource::getBlockEntity(v7, (const BlockEntityDataPacket *)((char *)v4 + 16));
      if ( result )
        result = (*(int (**)(void))(*(_DWORD *)result + 60))();
    }
  }
  return result;
}


LevelSettings *__fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const StartGamePacket *a3)
{
  LegacyClientNetworkHandler *v3; // r10@1
  const StartGamePacket *v4; // r6@1
  ClientInstance *v5; // r0@1
  int v6; // r1@2
  Player *v7; // r0@2
  PlayerInventoryProxy *v8; // r0@2
  int v9; // r1@2
  LevelSettings *result; // r0@4
  GuiData *v11; // r0@5
  int v12; // r9@5
  Minecraft *v13; // r0@5
  Minecraft *v14; // r0@5
  void *v15; // r7@5
  void *v16; // r0@5
  char *v17; // r0@6
  int v18; // r4@6
  int v19; // r0@6
  int v20; // r4@6
  ClientInstance *v21; // ST2C_4@6
  Options *v22; // r0@6
  char *v23; // r11@6
  int v24; // r9@6
  int *v25; // r7@6
  int *v26; // r8@6
  Dimension *v27; // ST28_4@6
  Player *v28; // r7@6
  int v29; // r4@6
  int v30; // r1@6
  int v31; // r1@6
  void (__fastcall *v32)(Player *, int); // r4@6
  Dimension *v33; // ST28_4@6
  int v34; // r0@6
  SkinRepositoryClientInterface *v35; // r0@6
  Skin *v36; // r5@6
  mce::TextureGroup *v37; // r0@6
  char *v38; // ST2C_4@6
  mce::TextureGroup *v39; // r0@6
  int *v40; // r6@6
  void (__fastcall *v41)(Player *, char *, char *, int *); // r11@6
  char *v42; // r4@6
  void *v43; // r0@6
  int v44; // r0@7
  int v45; // r1@11
  __int64 v46; // kr00_8@11
  int v47; // r4@12
  void *v48; // r0@13
  void *v49; // r0@15
  int v50; // r0@17
  Recipes *v51; // r0@20
  FurnaceRecipes *v52; // r0@20
  char *v53; // r0@21
  unsigned int *v54; // r2@23
  signed int v55; // r1@25
  unsigned int *v56; // r2@27
  signed int v57; // r1@29
  int v58; // [sp+Ch] [bp-14Ch]@0
  int v59; // [sp+24h] [bp-134h]@0
  int v60; // [sp+30h] [bp-128h]@6
  int v61; // [sp+34h] [bp-124h]@5
  int v62; // [sp+34h] [bp-124h]@6
  int v63; // [sp+38h] [bp-120h]@6
  int v64; // [sp+3Ch] [bp-11Ch]@6
  Player *v65; // [sp+40h] [bp-118h]@6
  int v66; // [sp+44h] [bp-114h]@6
  int v67; // [sp+48h] [bp-110h]@6
  int v68; // [sp+4Ch] [bp-10Ch]@6
  void *v69[4]; // [sp+50h] [bp-108h]@6
  int v70; // [sp+60h] [bp-F8h]@5
  int v71[50]; // [sp+64h] [bp-F4h]@5
  int *v72; // [sp+12Ch] [bp-2Ch]@6

  v3 = this;
  v4 = a3;
  v5 = (ClientInstance *)*((_DWORD *)this + 1);
  if ( *((_DWORD *)v3 + 10) )
  {
    v6 = *((_DWORD *)a3 + 58);
    ClientInstance::setClientGameMode((int)v5);
    v7 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
    v8 = (PlayerInventoryProxy *)Player::getSupplies(v7);
    v9 = *((_DWORD *)v4 + 58);
    if ( v9 != 1 )
      LOBYTE(v9) = 0;
    result = (LevelSettings *)j_j_j__ZN20PlayerInventoryProxy25clearInventoryWithDefaultEb(v8, v9);
  }
  else
    v11 = (GuiData *)ClientInstance::getGuiData(v5);
    GuiData::clearMessages(v11);
    LevelSettings::LevelSettings((int)v71, (int)v4 + 16);
    v12 = *((_DWORD *)v3 + 9);
    ClientInstance::getEventing(*((ClientInstance **)v3 + 1));
    v13 = (Minecraft *)ClientInstance::getServerData(*((ClientInstance **)v3 + 1));
    Minecraft::getResourceLoader(v13);
    v14 = (Minecraft *)ClientInstance::getServerData(*((ClientInstance **)v3 + 1));
    Minecraft::getStructureManager(v14);
    v15 = operator new(0x17A8u);
    MultiPlayerLevel::MultiPlayerLevel((char)v15);
    *((_DWORD *)v3 + 10) = v15;
    v61 = (int)v15;
    sub_119C854(&v70, (int *)v4 + 64);
    Level::setLevelId((int)v15, &v70);
    v16 = (void *)(v70 - 12);
    if ( (int *)(v70 - 12) != &dword_28898C0 )
    {
      v54 = (unsigned int *)(v70 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v55 = __ldrex(v54);
        while ( __strex(v55 - 1, v54) );
      }
      else
        v55 = (*v54)--;
      if ( v55 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
    }
    Level::createPhotoStorage(*((Level **)v3 + 10));
    v17 = Level::getLevelData(*((Level **)v3 + 10));
    LevelData::setPremiumTemplatePackId((int)v17, (int *)v4 + 66);
    v18 = *((_DWORD *)v3 + 10);
    *((_DWORD *)v3 + 6) = v18;
    v19 = LevelSettings::getDimension((const StartGamePacket *)((char *)v4 + 16));
    v20 = Level::createDimension(v18, v19);
    ExtendedCertificate::getIdentity((ExtendedCertificate *)v69, *((const Certificate **)v3 + 94));
    v21 = (ClientInstance *)*((_DWORD *)v3 + 1);
    v22 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v3 + 1));
    v23 = Options::getDisplayedUsername(v22);
    v24 = ClientInstance::getClientSubId(*((ClientInstance **)v3 + 1));
    v25 = (int *)*((_DWORD *)v3 + 94);
    v26 = (int *)operator new(0x48u);
    Certificate::Certificate(v26, v25);
    v27 = (Dimension *)v20;
    v68 = (int)v26;
    v28 = (Player *)operator new(0x17B0u);
    v29 = *((_DWORD *)v4 + 58);
    v72 = v26;
    LocalPlayer::LocalPlayer(
      (int)v28,
      v21,
      v61,
      (int)v23,
      v29,
      (int)v3 + 48,
      v24,
      v58,
      (int)v69[0],
      (int)v69[1],
      (int)v69[2],
      (int)v69[3],
      (int)&v72,
      v59,
      (int)v27,
      (int)v21,
      (int)v4,
      v63,
      v64,
      (void *)v65,
      v66,
      v67,
      0,
      v69[0],
      v70,
      v71[0],
      v71[1],
      v71[2],
      v71[3],
      v71[4],
      v71[5],
      v71[6],
      v71[7],
      v71[8],
      v71[9],
      v71[10],
      v71[11],
      v71[12],
      v71[13],
      v71[14],
      v71[15],
      v71[16]);
    std::unique_ptr<Certificate,std::default_delete<Certificate>>::~unique_ptr((int)&v72);
    std::unique_ptr<Certificate,std::default_delete<Certificate>>::~unique_ptr((int)&v68);
    *((_QWORD *)v28 + 569) = ClientInstance::getClientRandomId((ClientInstance *)*((_DWORD *)v3 + 1));
    Player::setEnchantmentSeed(v28, *(_DWORD *)(v60 + 280));
    Entity::setUniqueID((int)v28, v30, *(_QWORD *)(v60 + 216));
    Entity::setRuntimeID((int)v28, v31, *(_QWORD *)(v60 + 224), *(_QWORD *)(v60 + 224) >> 32);
    Entity::moveTo((int)v28, v60 + 236);
    Player::setTeleportDestination(v28, (const Vec3 *)(v60 + 236));
    v32 = *(void (__fastcall **)(Player *, int))(*(_DWORD *)v28 + 1196);
    v34 = Dimension::getChunkSource(v33);
    v32(v28, v34);
    v35 = (SkinRepositoryClientInterface *)ClientInstance::getSkinRepositoryClientInterface(*((ClientInstance **)v3 + 1));
    v36 = SkinRepositoryClientInterface::getSelectedSkinOrDefault(v35, 1);
    v37 = (mce::TextureGroup *)ClientInstance::getTextures(*((ClientInstance **)v3 + 1));
    v38 = Skin::syncTextureData(v36, v37);
    v39 = (mce::TextureGroup *)ClientInstance::getTextures(*((ClientInstance **)v3 + 1));
    v40 = Skin::syncCapeTextureData(v36, v39);
    v41 = *(void (__fastcall **)(Player *, char *, char *, int *))(*(_DWORD *)v28 + 1416);
    v42 = Skin::getSerializable(v36);
    Skin::getGeometryName(v36);
    Skin::getSerializedGeometryData((Skin *)&v67, (SkinPack **)v36);
    v41(v28, v42, v38, v40);
    v43 = (void *)(v67 - 12);
    if ( (int *)(v67 - 12) != &dword_28898C0 )
      v56 = (unsigned int *)(v67 - 4);
          v57 = __ldrex(v56);
        while ( __strex(v57 - 1, v56) );
        v57 = (*v56)--;
      if ( v57 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v43);
    v44 = *((_DWORD *)v3 + 1);
    v65 = v28;
    v66 = v62;
    ClientInstance::onClientCreatedLevel(v44, &v66, (int *)&v65);
    if ( v65 )
      (*(void (__cdecl **)(Player *, _DWORD))(*(_DWORD *)v65 + 32))(v65, *(_DWORD *)(*(_DWORD *)v65 + 32));
    v65 = 0;
    if ( v66 )
      (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v66 + 4))(v66, *(_DWORD *)(*(_DWORD *)v66 + 4));
    v66 = 0;
    v45 = *(_DWORD *)(v60 + 232);
    ClientInstance::setClientGameMode(*((_DWORD *)v3 + 1));
    v46 = *(_QWORD *)&Item::mCreativeList;
    if ( dword_2806D24 != Item::mCreativeList )
      v47 = Item::mCreativeList;
      do
        v48 = *(void **)(v47 + 52);
        if ( v48 )
          operator delete(v48);
        v49 = *(void **)(v47 + 36);
        if ( v49 )
          operator delete(v49);
        v50 = *(_DWORD *)(v47 + 8);
        if ( v50 )
          (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v50 + 4))(v50, *(_DWORD *)(*(_DWORD *)v50 + 4));
        *(_DWORD *)(v47 + 8) = 0;
        v47 += 72;
      while ( HIDWORD(v46) != v47 );
    dword_2806D24 = v46;
    v51 = Recipes::getInstance(0);
    Recipes::clearRecipes(v51);
    v52 = FurnaceRecipes::getInstance(0);
    FurnaceRecipes::clearFurnaceRecipes(v52);
    if ( *(_BYTE *)(v60 + 268) )
      *(_QWORD *)&v63 = *(_QWORD *)(v60 + 272);
      v53 = Level::getLevelData(*((Level **)v3 + 10));
      LevelData::setCurrentTick((int)v53, &v63);
    result = LevelSettings::~LevelSettings((LevelSettings *)v71);
  return result;
}


void __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const FullChunkDataPacket *a3)
{
  LegacyClientNetworkHandler::handle(this, a2, a3);
}


signed int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const AddPaintingPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r6@1
  const AddPaintingPacket *v4; // r4@1
  signed int result; // r0@1
  Entity *v6; // r0@3
  int v7; // r0@3
  int v8; // r2@3
  BlockSource *v9; // r8@3
  int v10; // r3@3
  __int64 v11; // kr00_8@6
  __int64 v12; // kr08_8@6
  int v13; // r6@6
  void *v14; // r7@6
  void *v15; // [sp+Ch] [bp-2Ch]@6
  int v16; // [sp+10h] [bp-28h]@3

  v3 = this;
  v4 = a3;
  result = Level::isUsableLevel(*((Level **)this + 10), a2);
  if ( result == 1 )
  {
    result = ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
    if ( result )
    {
      v6 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
      v7 = Entity::getRegion(v6);
      v8 = *((_DWORD *)v4 + 4);
      v9 = (BlockSource *)v7;
      v10 = *((_DWORD *)v4 + 5);
      (*(void (__fastcall **)(int *))(**((_DWORD **)v3 + 10) + 60))(&v16);
      if ( v16 )
      {
        (*(void (**)(void))(**((_DWORD **)v3 + 10) + 104))();
        if ( v16 )
          (*(void (**)(void))(*(_DWORD *)v16 + 32))();
      }
      v11 = *((_QWORD *)v4 + 3);
      v12 = *((_QWORD *)v4 + 2);
      v13 = *((_DWORD *)v3 + 10);
      v14 = operator new(0xD70u);
      Painting::Painting((int)v14, v9, (int)v4 + 32, *((_DWORD *)v4 + 11), (const void **)v4 + 12);
      v15 = v14;
      MultiPlayerLevel::putEntity(v13, v9, v12, SHIDWORD(v12), v11, SHIDWORD(v11), (int)&v15);
      if ( v15 )
        (*(void (**)(void))(*(_DWORD *)v15 + 32))();
      result = 0;
    }
  }
  return result;
}


int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const ContainerOpenPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r6@1
  const ContainerOpenPacket *v4; // r8@1
  Entity *v5; // r5@1
  Level *v6; // r1@1
  int result; // r0@1
  int v8; // r0@3
  signed int v9; // r7@3
  Entity *v10; // r0@4
  BlockSource *v11; // r0@4
  BlockEntity *v12; // r6@4
  char *v13; // r0@7
  signed int v14; // r0@7
  int v15; // r0@11
  Entity *v16; // r4@11
  char *v17; // r1@14
  int (__fastcall *v18)(Entity *, char *); // r2@14
  Entity *v19; // r0@14
  int v20; // r6@15
  int v21; // r0@16
  int v22; // r0@17
  void (__fastcall *v23)(Entity *, int); // r2@18
  void (__fastcall *v24)(Entity *, char *); // r2@19
  int v25; // r7@23
  int v26; // r0@24
  Entity *v27; // r0@24
  void (__fastcall *v28)(Entity *, int); // r2@26
  int v29; // r0@29
  Entity *v30; // r0@29
  Entity *v31; // r0@34
  BlockSource *v32; // r0@34
  BlockEntity *v33; // r6@34
  void (__fastcall *v34)(Entity *, char *); // r7@36
  int v35; // r5@40
  unsigned int v36; // r1@41
  unsigned int *v37; // r0@41
  unsigned int v38; // r2@44
  unsigned int v39; // r3@45
  signed int v40; // r1@46
  int v41; // r0@50
  int v42; // r6@50
  unsigned int *v43; // r2@53
  unsigned int v44; // r1@55
  signed int v45; // r0@60
  unsigned int *v46; // r1@66
  unsigned int *v47; // r4@72
  int v48; // r0@80
  BlockSource *v49; // r0@84
  BlockEntity *v50; // r4@84
  int (__fastcall *v51)(Entity *, char *); // r6@86
  Entity *v52; // r0@87
  BlockSource *v53; // r0@87
  Entity *v54; // r0@95
  BlockSource *v55; // r0@95
  char *v56; // r0@98
  int v57; // [sp+4h] [bp-2Ch]@40
  int v58; // [sp+8h] [bp-28h]@40
  int v59; // [sp+Ch] [bp-24h]@7
  int v60; // [sp+10h] [bp-20h]@7
  int v61; // [sp+14h] [bp-1Ch]@7

  v3 = this;
  v4 = a3;
  v5 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 1));
  result = Level::isUsableLevel(*((Level **)v3 + 10), v6);
  if ( !v5 )
    return result;
  result ^= 1u;
  if ( result )
  v8 = *((_BYTE *)v4 + 14);
  v9 = 0;
  switch ( v8 )
  {
    case 6:
    case 7:
      v10 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
      v11 = (BlockSource *)Entity::getRegion(v10);
      result = BlockSource::getBlockEntity(v11, (const ContainerOpenPacket *)((char *)v4 + 16));
      v12 = (BlockEntity *)result;
      if ( !result )
        return result;
      if ( !BlockEntity::isType(result, 13) )
      {
        result = BlockEntity::isType((int)v12, 14);
        if ( result != 1 )
          return result;
      }
      v13 = BlockEntity::getPosition(v12);
      v59 = *(_DWORD *)v13;
      v60 = *((_DWORD *)v13 + 1);
      v61 = *((_DWORD *)v13 + 2);
      v14 = BlockEntity::isType((int)v12, 14);
      (*(void (__fastcall **)(Entity *, int *, int))(*(_DWORD *)v5 + 1316))(v5, &v59, v14 ^ 1);
      goto LABEL_39;
    case 16:
      if ( (*((_DWORD *)v4 + 8) & *((_DWORD *)v4 + 9)) == -1 )
        v49 = (BlockSource *)Entity::getRegion(v5);
        result = BlockSource::getBlockEntity(v49, (const ContainerOpenPacket *)((char *)v4 + 16));
        v50 = (BlockEntity *)result;
        if ( result )
        {
          result = BlockEntity::isType(result, 26);
          if ( result == 1 )
          {
            v51 = *(int (__fastcall **)(Entity *, char *))(*(_DWORD *)v5 + 1332);
            v17 = BlockEntity::getPosition(v50);
            v19 = v5;
            v18 = v51;
            return v18(v19, v17);
          }
        }
      else
        v15 = Entity::getLevel(v5);
        result = Level::fetchEntity(v15, 0, *((_QWORD *)v4 + 4), *((_QWORD *)v4 + 4) >> 32, 0);
        v16 = (Entity *)result;
          result = (*(int (**)(void))(*(_DWORD *)result + 488))();
          if ( result == 524388 )
            result = Entity::getContainerComponent(v16);
            if ( result )
            {
              v17 = (char *)v4 + 32;
              v18 = *(int (__fastcall **)(Entity *, char *))(*(_DWORD *)v5 + 1336);
              v19 = v5;
              return v18(v19, v17);
            }
      return result;
    case 15:
      v20 = (int)v4 + 32;
        goto LABEL_39;
      v21 = Entity::getLevel(v5);
      result = Level::fetchEntity(v21, 0, *((_QWORD *)v4 + 4), *((_QWORD *)v4 + 4) >> 32, 0);
      v22 = (*(int (**)(void))(*(_DWORD *)result + 488))();
      result = EntityClassTree::isTypeInstanceOf(v22, 783);
      if ( result != 1 )
      v23 = *(void (__fastcall **)(Entity *, int))(*(_DWORD *)v5 + 1344);
      goto LABEL_83;
    case 2:
      v24 = *(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v5 + 1292);
      goto LABEL_38;
    case 5:
      v24 = *(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v5 + 1300);
    case 14:
      v17 = (char *)v4 + 16;
      v18 = *(int (__fastcall **)(Entity *, char *))(*(_DWORD *)v5 + 1364);
      v19 = v5;
      return v18(v19, v17);
    case 0:
      v25 = (int)v4 + 32;
      if ( (*((_DWORD *)v4 + 8) & *((_DWORD *)v4 + 9)) != -1 )
        v26 = Entity::getLevel(v5);
        v27 = (Entity *)Level::fetchEntity(v26, 0, *((_QWORD *)v4 + 4), *((_QWORD *)v4 + 4) >> 32, 0);
        if ( v27 )
          if ( Entity::getContainerComponent(v27) )
            v28 = *(void (__fastcall **)(Entity *, int))(*(_DWORD *)v5 + 1288);
LABEL_32:
            v28(v5, v25);
            goto LABEL_39;
          goto LABEL_39;
LABEL_100:
        __debugbreak();
      v52 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
      v53 = (BlockSource *)Entity::getRegion(v52);
      result = BlockSource::getBlockEntity(v53, (const ContainerOpenPacket *)((char *)v4 + 16));
      v33 = (BlockEntity *)result;
      if ( !BlockEntity::isType(result, 2) && !BlockEntity::isType((int)v33, 23) )
        result = BlockEntity::isType((int)v33, 25);
      if ( !BlockEntity::isType((int)v33, 2)
        && !BlockEntity::isType((int)v33, 23)
        && BlockEntity::isType((int)v33, 25) != 1 )
      v34 = *(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v5 + 1284);
      goto LABEL_98;
    case 3:
      v24 = *(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v5 + 1296);
    case 8:
        v54 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
        v55 = (BlockSource *)Entity::getRegion(v54);
        result = BlockSource::getBlockEntity(v55, (const ContainerOpenPacket *)((char *)v4 + 16));
        v33 = (BlockEntity *)result;
        if ( !result )
        result = BlockEntity::isType(result, 15);
        v34 = *(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v5 + 1308);
LABEL_98:
        v56 = BlockEntity::getPosition(v33);
        v34(v5, v56);
      v29 = Entity::getLevel(v5);
      v30 = (Entity *)Level::fetchEntity(v29, 0, *((_QWORD *)v4 + 4), *((_QWORD *)v4 + 4) >> 32, 0);
      if ( !v30 )
        goto LABEL_100;
      if ( Entity::getContainerComponent(v30) )
        v28 = *(void (__fastcall **)(Entity *, int))(*(_DWORD *)v5 + 1312);
        goto LABEL_32;
LABEL_39:
      v9 = 1;
LABEL_40:
      result = Player::getContainerManager((Player *)&v57, (int)v5);
      v35 = v58;
      if ( v58 )
        v36 = *(_DWORD *)(v58 + 4);
        v37 = (unsigned int *)(v58 + 4);
        do
          while ( 1 )
            if ( !v36 )
              v40 = 1;
              v35 = 0;
              goto LABEL_50;
            __dmb();
            v38 = __ldrex(v37);
            if ( v38 == v36 )
              break;
            __clrex();
            v36 = v38;
          v39 = __strex(v36 + 1, v37);
          v36 = v38;
        while ( v39 );
        __dmb();
        v40 = 0;
        if ( !*v37 )
          v40 = 1;
LABEL_50:
        v41 = v58;
        v42 = v57;
        if ( v40 )
          v42 = 0;
        if ( v58 )
          v43 = (unsigned int *)(v58 + 8);
          if ( &pthread_create )
            do
              v44 = __ldrex(v43);
            while ( __strex(v44 - 1, v43) );
          else
            v44 = (*v43)--;
          if ( v44 == 1 )
            (*(void (**)(void))(*(_DWORD *)v41 + 12))();
        v45 = v42;
        if ( v42 )
          v45 = 1;
        result = v45 & v9;
        if ( result == 1 )
          result = (unsigned __int8)(*(int (__fastcall **)(int))(*(_DWORD *)v42 + 16))(v42);
          if ( (unsigned __int8)result == *((_BYTE *)v4 + 14) )
            result = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v42 + 12))(v42, *((_BYTE *)v4 + 13));
        if ( v35 )
          v46 = (unsigned int *)(v35 + 4);
              result = __ldrex(v46);
            while ( __strex(result - 1, v46) );
            result = (*v46)--;
            v47 = (unsigned int *)(v35 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 8))(v35);
            if ( &pthread_create )
              __dmb();
              do
                result = __ldrex(v47);
              while ( __strex(result - 1, v47) );
            else
              result = (*v47)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v35 + 12))(v35);
    case 13:
      if ( ((unsigned int)*((_QWORD *)v4 + 4) & (unsigned int)(*((_QWORD *)v4 + 4) >> 32)) != -1 )
      v31 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
      v32 = (BlockSource *)Entity::getRegion(v31);
      result = BlockSource::getBlockEntity(v32, (const ContainerOpenPacket *)((char *)v4 + 16));
      result = BlockEntity::isType(result, 21);
      v34 = *(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v5 + 1320);
    case 4:
      v24 = *(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v5 + 1304);
LABEL_38:
      v24(v5, (char *)v4 + 16);
    case 1:
    case 9:
    case 10:
    case 11:
      goto LABEL_40;
    case 12:
      v48 = Entity::getLevel(v5);
      result = Level::fetchEntity(v48, 0, *((_QWORD *)v4 + 4), *((_QWORD *)v4 + 4) >> 32, 0);
      if ( Entity::getContainerComponent((Entity *)result) )
        v23 = *(void (__fastcall **)(Entity *, int))(*(_DWORD *)v5 + 1340);
LABEL_83:
        v23(v5, v20);
    default:
      if ( v8 != 255 )
        goto LABEL_40;
      (*(void (__fastcall **)(Entity *))(*(_DWORD *)v5 + 1360))(v5);
  }
}


signed int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const MobEquipmentPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r7@1
  const MobEquipmentPacket *v4; // r4@1
  signed int result; // r0@1
  int v6; // r6@2
  int v7; // r5@5
  int v8; // r1@8
  int v9; // r0@8
  Inventory *v10; // r2@8
  int v11; // r0@10
  ItemInstance *v12; // r4@15
  char v13; // [sp+4h] [bp-1Ch]@18
  int v14; // [sp+8h] [bp-18h]@18

  v3 = this;
  v4 = a3;
  result = Level::isUsableLevel(*((Level **)this + 10), a2);
  if ( result == 1 )
  {
    result = Level::getRuntimeEntity(*((_DWORD *)v3 + 10), 0, *((_QWORD *)v4 + 2), 0);
    v6 = result;
    if ( result )
    {
      result = Entity::hasCategory(result, 2);
      if ( result == 1 )
      {
        if ( Entity::hasCategory(v6, 1) != 1 )
          return (*(int (__fastcall **)(int, _DWORD, char *))(*(_DWORD *)v6 + 1092))(
                   v6,
                   *((_DWORD *)v4 + 24),
                   (char *)v4 + 24);
        v7 = Player::getSupplies((Player *)v6);
        if ( *(_DWORD *)(v6 + 4536) == *((_DWORD *)v3 + 48)
          && NetworkIdentifier::equalsTypeData(
               (NetworkIdentifier *)(v6 + 4392),
               (LegacyClientNetworkHandler *)((char *)v3 + 48)) == 1
          && Player::getClientSubId((Player *)v6) == *((_BYTE *)v4 + 12) )
        {
          v8 = *((_DWORD *)v4 + 25);
          v9 = v7;
          v10 = 0;
          return j_j_j__ZN20PlayerInventoryProxy10selectSlotEi11ContainerID_0(v9, v8, v10);
        }
        v11 = *((_BYTE *)v4 + 105);
        if ( v11 == 119 )
          result = (*(int (__fastcall **)(int, char *))(*(_DWORD *)v6 + 1100))(v6, (char *)v4 + 24);
        else
          if ( v11 == 123 )
          {
            PlayerInventoryProxy::setItem(v7, 0, (int)v4 + 24, 123);
            v9 = v7;
            v8 = 0;
            v10 = (Inventory *)123;
            return j_j_j__ZN20PlayerInventoryProxy10selectSlotEi11ContainerID_0(v9, v8, v10);
          }
          v12 = (const MobEquipmentPacket *)((char *)v4 + 24);
          if ( ItemInstance::getId(v12) )
            PlayerInventoryProxy::setItem(v7, 9, (int)v12, 0);
          else
            PlayerInventoryProxy::clearSlot(v7, 9, 0);
          PlayerInventoryProxy::moveToSelectedSlot(v7, 9);
          PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v13, v7);
          result = PlayerInventoryProxy::selectSlot(v7, v14, 0);
      }
    }
  }
  return result;
}


void __fastcall LegacyClientNetworkHandler::onConnect(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2)
{
  LegacyClientNetworkHandler::onConnect(this, a2);
}


void __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const AddEntityPacket *a3)
{
  LegacyClientNetworkHandler::handle(this, a2, a3);
}


signed int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const MovePlayerPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r6@1
  signed int result; // r0@1
  int v6; // r1@1
  int v7; // r1@2
  int v8; // r5@2
  int v9; // r6@3
  BlockSource *v10; // r0@4
  int v16; // [sp+0h] [bp-20h]@3

  v3 = this;
  _R4 = a3;
  result = Level::isUsableLevel(*((Level **)this + 10), a2);
  if ( result == 1 )
  {
    result = Level::getRuntimePlayer(*((_DWORD *)v3 + 10), v6, *((_QWORD *)_R4 + 2));
    v8 = result;
    if ( result )
    {
      v9 = Level::getRuntimeEntity(*((_DWORD *)v3 + 10), v7, *((_QWORD *)_R4 + 7), 0);
      if ( v9 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 124))(v8);
        *(_DWORD *)(v8 + 360) = 0;
        *(_DWORD *)(v8 + 3420) = *((_DWORD *)_R4 + 11);
        v10 = (BlockSource *)Entity::getRegion((Entity *)v8);
        Entity::tick((Entity *)v8, v10);
        Entity::setPreviousPosRot(v8, v8 + 72, (_QWORD *)(v8 + 120));
        (*(void (__fastcall **)(int, int, _DWORD))(*(_DWORD *)v9 + 136))(v9, v8, 0);
        result = (*(int (__fastcall **)(int, char *))(*(_DWORD *)v8 + 72))(v8, (char *)_R4 + 36);
      }
      else
        *(_BYTE *)(v8 + 216) = *((_BYTE *)_R4 + 49);
        _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 56))(v8);
        __asm
        {
          VLDR            S0, [R0]
          VLDR            S6, [R4,#0x18]
          VLDR            S2, [R0,#4]
          VLDR            S8, [R4,#0x1C]
          VSUB.F32        S0, S6, S0
          VLDR            S4, [R0,#8]
          VLDR            S10, [R4,#0x20]
          VSUB.F32        S2, S8, S2
          VSUB.F32        S4, S10, S4
          VSTR            S0, [R5,#0x6C]
          VSTR            S2, [R5,#0x70]
          VSTR            S4, [R5,#0x74]
          VLDR            S0, [R4,#0x2C]
          VSTR            S0, [SP,#0x20+var_20]
        }
        result = Player::handleMovePlayerPacket(
                   *(float *)&v8,
                   *((_BYTE *)_R4 + 48),
                   (int)_R4 + 24,
                   (_DWORD *)_R4 + 9,
                   v16,
                   *((_QWORD *)_R4 + 8),
                   *((_QWORD *)_R4 + 8) >> 32);
    }
  }
  return result;
}


signed int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const SetTimePacket *a3)
{
  LegacyClientNetworkHandler *v3; // r4@1
  const SetTimePacket *v4; // r5@1
  signed int result; // r0@1
  int v6; // r1@1

  v3 = this;
  v4 = a3;
  result = Level::isUsableLevel(*((Level **)this + 10), a2);
  v6 = *((_DWORD *)v4 + 4);
  if ( result == 1 )
    result = j_j_j__ZN5Level7setTimeEi_0(*((Level **)v3 + 10), v6);
  else
    *((_DWORD *)v3 + 54) = v6;
  return result;
}


int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const SetDifficultyPacket *a3)
{
  int result; // r0@1
  int v4; // r1@2

  result = *((_DWORD *)this + 10);
  if ( result )
  {
    v4 = *((_DWORD *)a3 + 4);
    result = (*(int (**)(void))(*(_DWORD *)result + 84))();
  }
  return result;
}


void __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const PlayerListPacket *a3)
{
  const PlayerListPacket *v3; // r4@1
  int v4; // r10@4
  unsigned __int64 *v5; // r0@5
  int v6; // r0@5
  int v7; // r8@5
  int v8; // r3@5
  int v9; // r4@5
  int v10; // r5@5
  int v11; // r6@5
  int v12; // r7@5
  __int64 v13; // r0@5
  __int64 v14; // r0@5
  int v15; // r0@5
  double v16; // r0@12
  int v17; // r4@14
  unsigned int *v18; // r1@15
  unsigned int v19; // r0@17
  int v20; // r0@19
  int v21; // r5@19
  char *v22; // r0@22
  int v23; // r7@22
  __int64 v24; // kr10_8@22
  int v25; // r5@22
  int v26; // r3@22
  unsigned int v27; // r7@22
  int v28; // r1@22
  int v29; // r5@22
  unsigned int v30; // r4@22
  int v31; // r1@22
  int v32; // r6@22
  void ***v33; // r0@22
  void **v34; // r8@23
  void **v35; // r9@23
  void *v36; // r5@23
  __int64 v37; // r0@25
  __int64 v38; // r0@26
  _DWORD *v39; // r10@27
  char *v40; // r4@31
  void *v41; // r10@31
  char *v42; // r5@32
  int v43; // r1@33
  int v44; // r9@36
  int v45; // r1@37
  int v46; // r1@38
  unsigned int *v47; // r5@46
  unsigned int v48; // r0@48
  int *v49; // r4@53
  int *v50; // r6@53
  unsigned int *v51; // r2@55
  signed int v52; // r1@57
  int *v53; // r0@63
  void **v54; // [sp+8h] [bp-70h]@23
  int v55; // [sp+Ch] [bp-6Ch]@22
  char *v56; // [sp+10h] [bp-68h]@22
  int v57; // [sp+14h] [bp-64h]@19
  LegacyClientNetworkHandler *v58; // [sp+18h] [bp-60h]@1
  int v59; // [sp+1Ch] [bp-5Ch]@22
  int v60; // [sp+20h] [bp-58h]@22
  int i; // [sp+24h] [bp-54h]@4
  int v62; // [sp+28h] [bp-50h]@22
  char v63; // [sp+2Ch] [bp-4Ch]@12
  void (__cdecl *v64)(char *, char *); // [sp+34h] [bp-44h]@12
  Social::User *v65; // [sp+3Ch] [bp-3Ch]@11
  int v66; // [sp+40h] [bp-38h]@14
  int *v67; // [sp+44h] [bp-34h]@4
  int *v68; // [sp+48h] [bp-30h]@4
  int *v69; // [sp+4Ch] [bp-2Ch]@4

  v58 = this;
  v3 = a3;
  if ( Level::isUsableLevel(*((Level **)this + 10), a2) != 1 )
    return;
  if ( *((_BYTE *)v3 + 28) == 1 )
  {
    v20 = *((_QWORD *)v3 + 2) >> 32;
    v21 = *((_QWORD *)v3 + 2);
    v57 = *((_QWORD *)v3 + 2) >> 32;
    while ( 1 )
    {
      if ( v21 == v20 )
        return;
      v59 = v21;
      v22 = Level::getPlayerList(*((Level **)v58 + 10));
      v23 = *(_DWORD *)(v21 + 8);
      v56 = v22;
      v62 = v23;
      v24 = *(_QWORD *)(v21 + 12);
      v25 = *(_DWORD *)(v21 + 20);
      v60 = v25;
      v26 = 522133279 * v23;
      v27 = *((_DWORD *)v22 + 1);
      v28 = (522133279 * (unsigned __int64)HIDWORD(v24) >> 32) + 522133279 * v25;
      v29 = *(_DWORD *)v22;
      v55 = *(_DWORD *)v22;
      v30 = v24 ^ v26 ^ HIDWORD(v24) ^ v28;
      v31 = v30 % v27;
      v32 = v30 % v27;
      v33 = *(void ****)(*(_DWORD *)v22 + 4 * (v30 % v27));
      if ( v33 )
      {
        v34 = *(void ***)(v29 + 4 * v31);
        v35 = *v33;
        v54 = *(void ***)(v29 + 4 * v31);
        v36 = (*v33)[24];
        while ( 1 )
        {
          if ( v36 == (void *)v30 )
          {
            v37 = *((_QWORD *)v35 + 1);
            HIDWORD(v37) ^= v24;
            if ( v37 == v62 )
            {
              v38 = *((_QWORD *)v35 + 2);
              HIDWORD(v38) ^= v60;
              if ( v38 == HIDWORD(v24) )
                break;
            }
          }
          v39 = *v35;
          if ( *v35 )
            v36 = (void *)v39[24];
            v34 = v35;
            v35 = (void **)*v35;
            if ( v39[24] % v27 == v32 )
              continue;
          goto LABEL_20;
        }
        if ( v34 )
          break;
      }
LABEL_20:
      v20 = v57;
      v21 = v59 + 72;
    }
    v40 = (char *)v54;
    v41 = *v34;
    if ( v54 != v34 )
      v42 = v56;
      if ( *(_DWORD *)v41 )
        v43 = *(_DWORD *)(*(_DWORD *)v41 + 96) % v27;
        if ( v43 != v32 )
          *(_DWORD *)(v55 + 4 * v43) = v34;
      goto LABEL_43;
    v44 = *(_DWORD *)v41;
    if ( *(_DWORD *)v41 )
      v45 = *(_DWORD *)(v44 + 96) % v27;
      if ( v45 == v32 )
LABEL_43:
        *v34 = *(void **)v41;
        PlayerListEntry::~PlayerListEntry((PlayerListEntry *)((char *)v41 + 24));
        operator delete(v41);
        --*((_DWORD *)v42 + 3);
        goto LABEL_20;
      *(_DWORD *)(v55 + 4 * v45) = v54;
      v46 = *(_DWORD *)v56;
      v40 = *(char **)(*(_DWORD *)v56 + 4 * v32);
    else
      v46 = v55;
    if ( v42 + 8 == v40 )
      *(_DWORD *)v40 = v44;
    *(_DWORD *)(v46 + 4 * v32) = 0;
    goto LABEL_43;
  }
  if ( !*((_BYTE *)v3 + 28) )
    v67 = 0;
    v68 = 0;
    v69 = 0;
    std::vector<std::string,std::allocator<std::string>>::reserve(
      (int)&v67,
      954437177 * ((signed int)((*((_QWORD *)v3 + 2) >> 32) - *((_QWORD *)v3 + 2)) >> 3));
    v4 = *((_QWORD *)v3 + 2);
    for ( i = *((_QWORD *)v3 + 2) >> 32; i != v4; v4 += 72 )
      v5 = (unsigned __int64 *)Level::getPlayerList(*((Level **)v58 + 10));
      v6 = std::__detail::_Map_base<mce::UUID,std::pair<mce::UUID const,PlayerListEntry>,std::allocator<std::pair<mce::UUID const,PlayerListEntry>>,std::__detail::_Select1st,std::equal_to<mce::UUID>,std::hash<mce::UUID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             v5,
             v4 + 8);
      v7 = v6;
      v8 = *(_DWORD *)(v4 + 4);
      v9 = *(_DWORD *)(v4 + 8);
      v10 = *(_DWORD *)(v4 + 12);
      v11 = *(_DWORD *)(v4 + 16);
      v12 = *(_DWORD *)(v4 + 20);
      *(_DWORD *)v6 = *(_DWORD *)v4;
      *(_DWORD *)(v6 + 4) = v8;
      *(_DWORD *)(v6 + 8) = v9;
      *(_DWORD *)(v6 + 12) = v10;
      *(_DWORD *)(v6 + 16) = v11;
      *(_DWORD *)(v6 + 20) = v12;
      EntityInteraction::setInteractText((int *)(v6 + 24), (int *)(v4 + 24));
      EntityInteraction::setInteractText((int *)(v7 + 28), (int *)(v4 + 28));
      HIDWORD(v13) = v4 + 32;
      LODWORD(v13) = v7 + 32;
      std::vector<unsigned char,std::allocator<unsigned char>>::operator=(v13);
      LODWORD(v14) = v7 + 44;
      HIDWORD(v14) = v4 + 44;
      std::vector<unsigned char,std::allocator<unsigned char>>::operator=(v14);
      EntityInteraction::setInteractText((int *)(v7 + 56), (int *)(v4 + 56));
      EntityInteraction::setInteractText((int *)(v7 + 60), (int *)(v4 + 60));
      EntityInteraction::setInteractText((int *)(v7 + 64), (int *)(v4 + 64));
      v15 = Level::getPlayer(*((Level **)v58 + 10), (const mce::UUID *)(v4 + 8));
      if ( v15 )
        (*(void (__cdecl **)(int, int))(*(_DWORD *)v15 + 1416))(v15, v4 + 28);
      if ( v68 == v69 )
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
          (unsigned __int64 *)&v67,
          (int *)(v4 + 64));
      else
        sub_119C854(v68, (int *)(v4 + 64));
        ++v68;
    ClientInstance::getUser((ClientInstance *)&v65, *((_DWORD *)v58 + 1));
    if ( v65 )
      v16 = COERCE_DOUBLE(__PAIR__(&v67, Social::User::getLiveUser(v65)));
      v64 = 0;
      Social::XboxLiveUserManager::getProfiles(v16, (int)&v63);
      if ( v64 )
        v64(&v63, &v63);
    v17 = v66;
    if ( v66 )
      v18 = (unsigned int *)(v66 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 == 1 )
        v47 = (unsigned int *)(v17 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
        if ( &pthread_create )
          __dmb();
          do
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
        else
          v48 = (*v47)--;
        if ( v48 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
    v50 = v68;
    v49 = v67;
    if ( v67 != v68 )
      do
        v53 = (int *)(*v49 - 12);
        if ( v53 != &dword_28898C0 )
          v51 = (unsigned int *)(*v49 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v52 = __ldrex(v51);
            while ( __strex(v52 - 1, v51) );
          else
            v52 = (*v51)--;
          if ( v52 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v53);
        ++v49;
      while ( v49 != v50 );
      v49 = v67;
    if ( v49 )
      operator delete(v49);
}


char *__fastcall LegacyClientNetworkHandler::onPlayerReady(LegacyClientNetworkHandler *this, Player *a2)
{
  LegacyClientNetworkHandler *v2; // r4@1
  char *result; // r0@1
  int v4; // r1@2

  v2 = this;
  result = (char *)(*(int (__fastcall **)(Player *))(*(_DWORD *)a2 + 1408))(a2);
  if ( result == (char *)1 )
  {
    v4 = *((_DWORD *)v2 + 54);
    if ( v4 )
      Level::setTime(*((Level **)v2 + 10), v4);
    result = j_j_j__ZN5Level11addListenerER13LevelListener_0(
               *((Level **)v2 + 10),
               (LegacyClientNetworkHandler *)((char *)v2 + 32));
  }
  return result;
}


int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const InventoryContentPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r4@1
  const InventoryContentPacket *v4; // r11@1
  __int64 v5; // r0@1
  Mob *v6; // r10@2
  int v7; // r5@2
  unsigned int v8; // r1@3
  unsigned int *v9; // r0@3
  unsigned int v10; // r2@6
  unsigned int v11; // r3@7
  signed int v12; // r1@8
  int v13; // r0@12
  int v14; // r4@12
  unsigned int *v15; // r2@15
  unsigned int v16; // r1@17
  char *v17; // r0@25
  int v18; // r4@25
  int v19; // r0@39
  int v20; // r6@39
  int v21; // r0@39
  int v22; // r1@39 OVERLAPPED
  int v23; // r2@39 OVERLAPPED
  int v24; // r3@39
  int v25; // r5@42
  int v26; // r4@42
  int v27; // r1@43
  int v28; // r7@43
  int v29; // r6@43
  __int16 v30; // r0@43
  char v31; // r6@58
  __int64 v32; // r0@59
  int v33; // r10@60
  int v34; // r7@60
  int v35; // r9@60
  __int64 v36; // r0@61
  unsigned int v37; // r4@62
  int v38; // r8@62
  int v39; // r1@63
  int v40; // r7@63
  __int16 v41; // r0@63
  bool v42; // cf@76
  bool v43; // zf@76
  __int64 v44; // kr00_8@81
  int v45; // r4@82
  void *v46; // r0@83
  void *v47; // r0@85
  int v48; // r0@87
  const ItemInstance *v49; // r1@90
  __int64 i; // r4@90
  int v51; // r0@93
  int v52; // r4@93
  int v53; // r0@93
  __int64 v54; // r2@93
  int v55; // r1@93
  int v56; // r9@96
  int v57; // r5@96
  int v58; // r1@97
  int v59; // r10@97
  __int16 v60; // r0@97
  int v61; // r4@111
  int v62; // r0@125
  unsigned int *v63; // r4@133
  int v64; // r0@138
  int v65; // r5@138
  int v67; // [sp+4h] [bp-434h]@42
  int v68; // [sp+4h] [bp-434h]@62
  int v69; // [sp+8h] [bp-430h]@60
  int v70; // [sp+8h] [bp-430h]@96
  int v71; // [sp+Ch] [bp-42Ch]@96
  LegacyClientNetworkHandler *v72; // [sp+14h] [bp-424h]@8
  int v73; // [sp+18h] [bp-420h]@23
  __int16 v74; // [sp+1Dh] [bp-41Bh]@0
  char v75; // [sp+1Fh] [bp-419h]@0
  int v76; // [sp+20h] [bp-418h]@138
  char v77; // [sp+24h] [bp-414h]@138
  int v78; // [sp+28h] [bp-410h]@138
  int v79; // [sp+2Ch] [bp-40Ch]@138
  int v80; // [sp+30h] [bp-408h]@138
  int v81; // [sp+38h] [bp-400h]@148
  void *v82; // [sp+54h] [bp-3E4h]@146
  void *v83; // [sp+64h] [bp-3D4h]@144
  int v84; // [sp+78h] [bp-3C0h]@138
  int v85; // [sp+80h] [bp-3B8h]@142
  void *v86; // [sp+9Ch] [bp-39Ch]@140
  void *v87; // [sp+ACh] [bp-38Ch]@138
  __int16 v88; // [sp+C5h] [bp-373h]@25
  char v89; // [sp+C7h] [bp-371h]@25
  int v90; // [sp+C8h] [bp-370h]@25
  char v91; // [sp+CCh] [bp-36Ch]@25
  __int16 v92; // [sp+CDh] [bp-36Bh]@25
  char v93; // [sp+CFh] [bp-369h]@25
  int v94; // [sp+D0h] [bp-368h]@25
  int v95; // [sp+D4h] [bp-364h]@25
  int v96; // [sp+D8h] [bp-360h]@25
  int v97; // [sp+E0h] [bp-358h]@35
  void *v98; // [sp+FCh] [bp-33Ch]@33
  void *v99; // [sp+10Ch] [bp-32Ch]@31
  int v100; // [sp+120h] [bp-318h]@25
  int v101; // [sp+128h] [bp-310h]@29
  void *v102; // [sp+144h] [bp-2F4h]@27
  void *ptr; // [sp+154h] [bp-2E4h]@25
  __int16 v104; // [sp+16Dh] [bp-2CBh]@112
  char v105; // [sp+16Fh] [bp-2C9h]@112
  int v106; // [sp+170h] [bp-2C8h]@112
  char v107; // [sp+174h] [bp-2C4h]@112
  __int16 v108; // [sp+175h] [bp-2C3h]@112
  char v109; // [sp+177h] [bp-2C1h]@112
  int v110; // [sp+178h] [bp-2C0h]@112
  int v111; // [sp+17Ch] [bp-2BCh]@112
  int v112; // [sp+180h] [bp-2B8h]@112
  int v113; // [sp+188h] [bp-2B0h]@122
  void *v114; // [sp+1A4h] [bp-294h]@120
  void *v115; // [sp+1B4h] [bp-284h]@118
  int v116; // [sp+1C8h] [bp-270h]@112
  int v117; // [sp+1D0h] [bp-268h]@116
  void *v118; // [sp+1ECh] [bp-24Ch]@114
  void *v119; // [sp+1FCh] [bp-23Ch]@112
  __int16 v120; // [sp+215h] [bp-223h]@43
  char v121; // [sp+217h] [bp-221h]@43
  int v122; // [sp+218h] [bp-220h]@43
  char v123; // [sp+21Ch] [bp-21Ch]@43
  int v124; // [sp+220h] [bp-218h]@43
  int v125; // [sp+224h] [bp-214h]@43
  int v126; // [sp+228h] [bp-210h]@43
  int v127; // [sp+230h] [bp-208h]@53
  void *v128; // [sp+24Ch] [bp-1ECh]@51
  void *v129; // [sp+25Ch] [bp-1DCh]@49
  int v130; // [sp+270h] [bp-1C8h]@43
  int v131; // [sp+278h] [bp-1C0h]@47
  void *v132; // [sp+294h] [bp-1A4h]@45
  void *v133; // [sp+2A4h] [bp-194h]@43
  __int16 v134; // [sp+2BDh] [bp-17Bh]@97
  char v135; // [sp+2BFh] [bp-179h]@97
  int v136; // [sp+2C0h] [bp-178h]@97
  char v137; // [sp+2C4h] [bp-174h]@97
  int v138; // [sp+2C8h] [bp-170h]@97
  int v139; // [sp+2CCh] [bp-16Ch]@97
  int v140; // [sp+2D0h] [bp-168h]@97
  int v141; // [sp+2D8h] [bp-160h]@107
  void *v142; // [sp+2F4h] [bp-144h]@105
  void *v143; // [sp+304h] [bp-134h]@103
  int v144; // [sp+318h] [bp-120h]@97
  int v145; // [sp+320h] [bp-118h]@101
  void *v146; // [sp+33Ch] [bp-FCh]@99
  void *v147; // [sp+34Ch] [bp-ECh]@97
  __int16 v148; // [sp+365h] [bp-D3h]@63
  char v149; // [sp+367h] [bp-D1h]@63
  int v150; // [sp+368h] [bp-D0h]@63
  char v151; // [sp+36Ch] [bp-CCh]@63
  int v152; // [sp+370h] [bp-C8h]@63
  int v153; // [sp+374h] [bp-C4h]@63
  int v154; // [sp+378h] [bp-C0h]@63
  int v155; // [sp+380h] [bp-B8h]@73
  void *v156; // [sp+39Ch] [bp-9Ch]@71
  void *v157; // [sp+3ACh] [bp-8Ch]@69
  int v158; // [sp+3C0h] [bp-78h]@63
  int v159; // [sp+3C8h] [bp-70h]@67
  void *v160; // [sp+3E4h] [bp-54h]@65
  void *v161; // [sp+3F4h] [bp-44h]@63
  int v162; // [sp+40Ch] [bp-2Ch]@2
  int v163; // [sp+410h] [bp-28h]@2

  v3 = this;
  v4 = a3;
  LODWORD(v5) = ClientInstance::getLocalPlayer(*((ClientInstance **)this + 1));
  if ( (_DWORD)v5 )
  {
    v6 = (Mob *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
    Player::getContainerManager((Player *)&v162, (int)v6);
    v7 = v163;
    if ( v163 )
    {
      v8 = *(_DWORD *)(v163 + 4);
      v9 = (unsigned int *)(v163 + 4);
      do
      {
        while ( 1 )
        {
          if ( !v8 )
          {
            v72 = v3;
            v12 = 1;
            v7 = 0;
            goto LABEL_12;
          }
          __dmb();
          v10 = __ldrex(v9);
          if ( v10 == v8 )
            break;
          __clrex();
          v8 = v10;
        }
        v11 = __strex(v8 + 1, v9);
        v8 = v10;
      }
      while ( v11 );
      v72 = v3;
      __dmb();
      v12 = 0;
      if ( !*v9 )
        v12 = 1;
LABEL_12:
      v13 = v163;
      v14 = v162;
      if ( v12 )
        v14 = 0;
      if ( v163 )
        v15 = (unsigned int *)(v163 + 8);
        if ( &pthread_create )
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
        else
          v16 = (*v15)--;
        if ( v16 == 1 )
          (*(void (**)(void))(*(_DWORD *)v13 + 12))();
    }
    else
      v14 = 0;
      v7 = 0;
    v73 = v7;
    switch ( *((_BYTE *)v4 + 13) )
      case 0x77:
        v5 = *((_QWORD *)v4 + 2);
        if ( (_DWORD)v5 != HIDWORD(v5) )
          v17 = Mob::getOffhandSlot(v6);
          v18 = *((_DWORD *)v4 + 4);
          v90 = 0;
          v91 = 119;
          v93 = v89;
          v92 = v88;
          v94 = 0;
          v95 = 0;
          ItemInstance::ItemInstance((ItemInstance *)&v96, (int)v17);
          ItemInstance::ItemInstance((ItemInstance *)&v100, v18);
          InventoryTransactionManager::addExpectedAction((int)v6 + 5152, (int)&v90);
          if ( ptr )
            operator delete(ptr);
          if ( v102 )
            operator delete(v102);
          if ( v101 )
            (*(void (**)(void))(*(_DWORD *)v101 + 4))();
          v101 = 0;
          if ( v99 )
            operator delete(v99);
          if ( v98 )
            operator delete(v98);
          if ( v97 )
            (*(void (**)(void))(*(_DWORD *)v97 + 4))();
          v97 = 0;
          (*(void (__fastcall **)(Mob *, _DWORD))(*(_DWORD *)v6 + 1100))(v6, *((_DWORD *)v4 + 4));
          break;
        goto LABEL_126;
      case 0x7A:
        goto LABEL_57;
      case 0x78:
        v36 = *((_QWORD *)v4 + 2);
        if ( HIDWORD(v36) != (_DWORD)v36 )
          v37 = 1;
          v38 = 0;
          v68 = 954437177 * ((HIDWORD(v36) - (signed int)v36) >> 3);
            v39 = (*(int (__fastcall **)(Mob *, unsigned int))(*(_DWORD *)v6 + 1028))(v6, v37 - 1);
            v40 = *((_DWORD *)v4 + 4);
            v150 = 0;
            v151 = 120;
            v41 = v148;
            *(_BYTE *)(((unsigned int)&v150 | 5) + 2) = v149;
            *(_WORD *)((unsigned int)&v150 | 5) = v41;
            v152 = 0;
            v153 = v37 - 1;
            ItemInstance::ItemInstance((ItemInstance *)&v154, v39);
            ItemInstance::ItemInstance((ItemInstance *)&v158, v40 + v38);
            InventoryTransactionManager::addExpectedAction((int)v6 + 5152, (int)&v150);
            if ( v161 )
              operator delete(v161);
            if ( v160 )
              operator delete(v160);
            if ( v159 )
              (*(void (**)(void))(*(_DWORD *)v159 + 4))();
            v159 = 0;
            if ( v157 )
              operator delete(v157);
            if ( v156 )
              operator delete(v156);
            if ( v155 )
              (*(void (**)(void))(*(_DWORD *)v155 + 4))();
            v155 = 0;
            (*(void (__fastcall **)(Mob *, unsigned int, int))(*(_DWORD *)v6 + 1024))(
              v6,
              v37 - 1,
              *((_DWORD *)v4 + 4) + v38);
            if ( v68 == v37 )
              break;
            v38 += 72;
            v42 = v37 >= 3;
            v43 = v37++ == 3;
          while ( v43 || !v42 );
        break;
      case 0x79:
        if ( v14 )
          (*(void (__fastcall **)(Mob *))(*(_DWORD *)v6 + 1476))(v6);
        v44 = *(_QWORD *)&Item::mCreativeList;
        if ( dword_2806D24 != Item::mCreativeList )
          v45 = Item::mCreativeList;
            v46 = *(void **)(v45 + 52);
            if ( v46 )
              operator delete(v46);
            v47 = *(void **)(v45 + 36);
            if ( v47 )
              operator delete(v47);
            v48 = *(_DWORD *)(v45 + 8);
            if ( v48 )
              (*(void (**)(void))(*(_DWORD *)v48 + 4))();
            *(_DWORD *)(v45 + 8) = 0;
            v45 += 72;
          while ( HIDWORD(v44) != v45 );
        dword_2806D24 = v44;
        Player::clearCreativeItemList(v6);
        for ( i = *((_QWORD *)v4 + 2); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 72 )
          Item::addCreativeItem((Item *)i, v49);
        Player::updateCreativeItemList(v6, (const ItemInstance *)&Item::mCreativeList);
      case 0x7B:
        v51 = Player::getSupplies(v6);
        v52 = v51;
        v53 = PlayerInventoryProxy::getContainerSize(v51, 123);
        v54 = *((_QWORD *)v4 + 2);
        v55 = 954437177 * ((HIDWORD(v54) - (signed int)v54) >> 3);
        if ( v53 != v55 )
          PlayerInventoryProxy::setContainerSize(v52, v55, 0x7Bu);
          v54 = *((_QWORD *)v4 + 2);
        if ( HIDWORD(v54) != (_DWORD)v54 )
          v56 = 0;
          v57 = 0;
          v70 = 954437177 * ((HIDWORD(v54) - (signed int)v54) >> 3);
          v71 = (int)v6 + 5152;
            v58 = PlayerInventoryProxy::getItem(v52, v56, 123);
            v59 = *((_DWORD *)v4 + 4);
            v136 = 0;
            v137 = 123;
            v60 = v134;
            *(_BYTE *)(((unsigned int)&v136 | 5) + 2) = v135;
            *(_WORD *)((unsigned int)&v136 | 5) = v60;
            v138 = 0;
            v139 = v56;
            ItemInstance::ItemInstance((ItemInstance *)&v140, v58);
            ItemInstance::ItemInstance((ItemInstance *)&v144, v59 + v57);
            InventoryTransactionManager::addExpectedAction(v71, (int)&v136);
            if ( v147 )
              operator delete(v147);
            if ( v146 )
              operator delete(v146);
            if ( v145 )
              (*(void (**)(void))(*(_DWORD *)v145 + 4))();
            v145 = 0;
            if ( v143 )
              operator delete(v143);
            if ( v142 )
              operator delete(v142);
            if ( v141 )
              (*(void (**)(void))(*(_DWORD *)v141 + 4))();
            v141 = 0;
            PlayerInventoryProxy::setItem(v52, v56, *((_DWORD *)v4 + 4) + v57, 123);
            v57 += 72;
            ++v56;
          while ( v70 != v56 );
      case 0x7C:
        LODWORD(v5) = *((_QWORD *)v4 + 2) >> 32;
        v61 = *((_QWORD *)v4 + 2);
        if ( v61 == (_DWORD)v5 )
          goto LABEL_126;
        v106 = 0;
        v107 = 124;
        v109 = v105;
        v108 = v104;
        v110 = 0;
        v111 = 0;
        ItemInstance::ItemInstance((ItemInstance *)&v112, (int)v6 + 5000);
        ItemInstance::ItemInstance((ItemInstance *)&v116, v61);
        InventoryTransactionManager::addExpectedAction((int)v6 + 5152, (int)&v106);
        if ( v119 )
          operator delete(v119);
        if ( v118 )
          operator delete(v118);
        if ( v117 )
          (*(void (**)(void))(*(_DWORD *)v117 + 4))();
        v117 = 0;
        if ( v115 )
          operator delete(v115);
        if ( v114 )
          operator delete(v114);
        if ( v113 )
          (*(void (**)(void))(*(_DWORD *)v113 + 4))();
        v113 = 0;
        Player::setCursorSelectedItem(v6, *((const ItemInstance **)v4 + 4));
      default:
        if ( *((_BYTE *)v4 + 13) )
LABEL_57:
          if ( v14 )
            v31 = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
            if ( (unsigned __int8)v31 == *((_BYTE *)v4 + 13) )
            {
              v32 = *((_QWORD *)v4 + 2);
              if ( HIDWORD(v32) != (_DWORD)v32 )
              {
                v33 = (int)v6 + 5152;
                v34 = 0;
                v35 = 0;
                v69 = 954437177 * ((HIDWORD(v32) - (signed int)v32) >> 3);
                while ( 1 )
                {
                  v64 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v14 + 32))(v14, v35);
                  v65 = *((_DWORD *)v4 + 4);
                  v76 = 0;
                  v77 = v31;
                  *(_BYTE *)(((unsigned int)&v76 | 5) + 2) = v75;
                  *(_WORD *)((unsigned int)&v76 | 5) = v74;
                  v78 = 0;
                  v79 = v35;
                  ItemInstance::ItemInstance((ItemInstance *)&v80, v64);
                  ItemInstance::ItemInstance((ItemInstance *)&v84, v65 + v34);
                  InventoryTransactionManager::addExpectedAction(v33, (int)&v76);
                  if ( v87 )
                    operator delete(v87);
                  if ( v86 )
                    operator delete(v86);
                  if ( v85 )
                    (*(void (**)(void))(*(_DWORD *)v85 + 4))();
                  v85 = 0;
                  if ( v83 )
                    operator delete(v83);
                  if ( v82 )
                    operator delete(v82);
                  if ( v81 )
                    (*(void (**)(void))(*(_DWORD *)v81 + 4))();
                  v81 = 0;
                  (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v14 + 28))(v14, v35++, *((_DWORD *)v4 + 4) + v34);
                  if ( v69 == v35 )
                    break;
                  v34 += 72;
                  v31 = *((_BYTE *)v4 + 13);
                }
              }
            }
          v19 = Player::getSupplies(v6);
          v20 = v19;
          v21 = PlayerInventoryProxy::getContainerSize(v19, 0);
          *(_QWORD *)&v22 = *((_QWORD *)v4 + 2);
          v24 = 954437177 * ((v23 - v22) >> 3);
          if ( v21 - 9 != v24 )
            PlayerInventoryProxy::setContainerSize(v20, v24 + 9, 0);
            *(_QWORD *)&v22 = *((_QWORD *)v4 + 2);
          if ( v23 != v22 )
            v25 = 0;
            v26 = 0;
            v67 = 954437177 * ((v23 - v22) >> 3);
            do
              v27 = PlayerInventoryProxy::getItem(v20, v26 + 9, 0);
              v28 = v20;
              v29 = *((_DWORD *)v4 + 4);
              v30 = v120;
              v122 = 0;
              v123 = 0;
              *(_BYTE *)(((unsigned int)&v122 | 5) + 2) = v121;
              *(_WORD *)((unsigned int)&v122 | 5) = v30;
              v124 = 0;
              v125 = v26;
              ItemInstance::ItemInstance((ItemInstance *)&v126, v27);
              ItemInstance::ItemInstance((ItemInstance *)&v130, v29 + v25);
              InventoryTransactionManager::addExpectedAction((int)v6 + 5152, (int)&v122);
              if ( v133 )
                operator delete(v133);
              v20 = v28;
              if ( v132 )
                operator delete(v132);
              if ( v131 )
                (*(void (**)(void))(*(_DWORD *)v131 + 4))();
              v131 = 0;
              if ( v129 )
                operator delete(v129);
              if ( v128 )
                operator delete(v128);
              if ( v127 )
                (*(void (**)(void))(*(_DWORD *)v127 + 4))();
              v127 = 0;
              PlayerInventoryProxy::setItem(v28, v26 + 9, *((_DWORD *)v4 + 4) + v25, 0);
              v25 += 72;
              ++v26;
            while ( v67 != v26 );
    v62 = ClientInstance::getScreen(*((ClientInstance **)v72 + 1));
    LODWORD(v5) = (*(int (**)(void))(*(_DWORD *)v62 + 24))();
LABEL_126:
    if ( v73 )
      HIDWORD(v5) = v73 + 4;
      if ( &pthread_create )
        __dmb();
        do
          LODWORD(v5) = __ldrex((unsigned int *)HIDWORD(v5));
        while ( __strex(v5 - 1, (unsigned int *)HIDWORD(v5)) );
      else
        LODWORD(v5) = (*(_DWORD *)HIDWORD(v5))--;
      if ( (_DWORD)v5 == 1 )
        v63 = (unsigned int *)(v73 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v73 + 8))(v73);
            LODWORD(v5) = __ldrex(v63);
          while ( __strex(v5 - 1, v63) );
          LODWORD(v5) = (*v63)--;
        if ( (_DWORD)v5 == 1 )
          LODWORD(v5) = (*(int (__fastcall **)(int))(*(_DWORD *)v73 + 12))(v73);
  }
  return v5;
}


int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const ContainerSetDataPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r4@1
  const ContainerSetDataPacket *v4; // r7@1
  int result; // r0@1
  int v6; // r0@2
  int v7; // r4@2
  unsigned int v8; // r1@3
  unsigned int *v9; // r0@3
  unsigned int v10; // r2@6
  unsigned int v11; // r3@7
  signed int v12; // r1@8
  int v13; // r6@12
  unsigned int *v14; // r2@15
  unsigned int v15; // r1@17
  unsigned int *v16; // r1@26
  unsigned int *v17; // r5@32
  int v18; // [sp+4h] [bp-1Ch]@2
  int v19; // [sp+8h] [bp-18h]@2

  v3 = this;
  v4 = a3;
  result = ClientInstance::getLocalPlayer(*((ClientInstance **)this + 1));
  if ( result )
  {
    v6 = ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
    result = Player::getContainerManager((Player *)&v18, v6);
    v7 = v19;
    if ( v19 )
    {
      v8 = *(_DWORD *)(v19 + 4);
      v9 = (unsigned int *)(v19 + 4);
      do
      {
        while ( 1 )
        {
          if ( !v8 )
          {
            v12 = 1;
            v7 = 0;
            goto LABEL_12;
          }
          __dmb();
          v10 = __ldrex(v9);
          if ( v10 == v8 )
            break;
          __clrex();
          v8 = v10;
        }
        v11 = __strex(v8 + 1, v9);
        v8 = v10;
      }
      while ( v11 );
      __dmb();
      v12 = 0;
      if ( !*v9 )
        v12 = 1;
LABEL_12:
      result = v19;
      v13 = v18;
      if ( v12 )
        v13 = 0;
      if ( v19 )
        v14 = (unsigned int *)(v19 + 8);
        if ( &pthread_create )
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
        else
          v15 = (*v14)--;
        if ( v15 == 1 )
          result = (*(int (**)(void))(*(_DWORD *)result + 12))();
      if ( v13 )
        result = (unsigned __int8)(*(int (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
        if ( (unsigned __int8)result == *((_BYTE *)v4 + 24) )
          result = (*(int (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v13 + 36))(
                     v13,
                     *((_QWORD *)v4 + 2),
                     *((_QWORD *)v4 + 2) >> 32);
      if ( v7 )
        v16 = (unsigned int *)(v7 + 4);
            result = __ldrex(v16);
          while ( __strex(result - 1, v16) );
          result = (*v16)--;
        if ( result == 1 )
          v17 = (unsigned int *)(v7 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          if ( &pthread_create )
            __dmb();
            do
              result = __ldrex(v17);
            while ( __strex(result - 1, v17) );
          else
            result = (*v17)--;
          if ( result == 1 )
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
    }
  }
  return result;
}


Mob *__fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const MobEffectPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r5@1
  const MobEffectPacket *v4; // r4@1
  Mob *result; // r0@1
  Mob *v6; // r5@2
  char v7; // [sp+8h] [bp-20h]@5

  v3 = this;
  v4 = a3;
  result = (Mob *)Level::isUsableLevel(*((Level **)this + 10), a2);
  if ( result == (Mob *)1 )
  {
    result = (Mob *)Level::getRuntimeEntity(*((_DWORD *)v3 + 10), 0, *((_QWORD *)v4 + 2), 0);
    v6 = result;
    if ( result )
    {
      result = (Mob *)Entity::hasCategory((int)result, 2);
      if ( result == (Mob *)1 )
      {
        result = (Mob *)*((_BYTE *)v4 + 28);
        if ( (unsigned int)result - 1 >= 2 )
        {
          if ( result == (Mob *)3 )
            result = (Mob *)j_j_j__ZN3Mob12removeEffectEi_0(v6, *((_DWORD *)v4 + 8));
        }
        else
          MobEffectInstance::MobEffectInstance(
            (int)&v7,
            *((_QWORD *)v4 + 4),
            *((_DWORD *)v4 + 6),
            *((_QWORD *)v4 + 4) >> 32,
            0,
            *((_BYTE *)v4 + 40));
          result = (Mob *)Mob::addEffect(v6, (const MobEffectInstance *)&v7);
      }
    }
  }
  return result;
}


int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const InventorySlotPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r10@1
  const InventorySlotPacket *v4; // r6@1
  int result; // r0@1
  Player *v6; // r7@2
  int v7; // r8@2
  unsigned int v8; // r1@3
  unsigned int *v9; // r0@3
  unsigned int v10; // r2@6
  unsigned int v11; // r3@7
  signed int v12; // r1@8
  int v13; // r0@12
  int v14; // r4@12
  unsigned int *v15; // r2@15
  unsigned int v16; // r1@17
  unsigned int v17; // r4@26
  int v18; // r0@27
  char v19; // r5@57
  int v20; // r9@58
  int v21; // r0@58
  PlayerInventoryProxy *v22; // r11@71
  int v23; // r5@71
  signed int v24; // r0@71
  int v25; // r4@71
  signed int v26; // r0@72
  int v27; // r0@72
  int v28; // r4@84
  signed int v29; // r0@84
  int v30; // r0@85
  int v31; // r4@85
  int v32; // r1@85
  int v33; // r5@86
  int v34; // r0@86
  int v35; // r0@99
  unsigned int *v36; // r1@101
  unsigned int *v37; // r4@107
  __int16 v38; // [sp+5h] [bp-373h]@0
  char v39; // [sp+7h] [bp-371h]@0
  int v40; // [sp+8h] [bp-370h]@58
  char v41; // [sp+Ch] [bp-36Ch]@58
  __int16 v42; // [sp+Dh] [bp-36Bh]@58
  char v43; // [sp+Fh] [bp-369h]@58
  int v44; // [sp+10h] [bp-368h]@58
  int v45; // [sp+14h] [bp-364h]@58
  int v46; // [sp+18h] [bp-360h]@58
  int v47; // [sp+20h] [bp-358h]@68
  void *v48; // [sp+3Ch] [bp-33Ch]@66
  void *v49; // [sp+4Ch] [bp-32Ch]@64
  int v50; // [sp+60h] [bp-318h]@58
  int v51; // [sp+68h] [bp-310h]@62
  void *v52; // [sp+84h] [bp-2F4h]@60
  void *v53; // [sp+94h] [bp-2E4h]@58
  __int16 v54; // [sp+ADh] [bp-2CBh]@43
  char v55; // [sp+AFh] [bp-2C9h]@43
  int v56; // [sp+B0h] [bp-2C8h]@43
  char v57; // [sp+B4h] [bp-2C4h]@43
  __int16 v58; // [sp+B5h] [bp-2C3h]@43
  char v59; // [sp+B7h] [bp-2C1h]@43
  int v60; // [sp+B8h] [bp-2C0h]@43
  int v61; // [sp+BCh] [bp-2BCh]@43
  int v62; // [sp+C0h] [bp-2B8h]@43
  int v63; // [sp+C8h] [bp-2B0h]@53
  void *v64; // [sp+E4h] [bp-294h]@51
  void *v65; // [sp+F4h] [bp-284h]@49
  int v66; // [sp+108h] [bp-270h]@43
  int v67; // [sp+110h] [bp-268h]@47
  void *v68; // [sp+12Ch] [bp-24Ch]@45
  void *v69; // [sp+13Ch] [bp-23Ch]@43
  __int16 v70; // [sp+155h] [bp-223h]@72
  char v71; // [sp+157h] [bp-221h]@72
  int v72; // [sp+158h] [bp-220h]@72
  char v73; // [sp+15Ch] [bp-21Ch]@72
  __int16 v74; // [sp+15Dh] [bp-21Bh]@72
  char v75; // [sp+15Fh] [bp-219h]@72
  int v76; // [sp+160h] [bp-218h]@72
  int v77; // [sp+164h] [bp-214h]@72
  int v78; // [sp+168h] [bp-210h]@72
  int v79; // [sp+170h] [bp-208h]@82
  void *v80; // [sp+18Ch] [bp-1ECh]@80
  void *v81; // [sp+19Ch] [bp-1DCh]@78
  int v82; // [sp+1B0h] [bp-1C8h]@72
  int v83; // [sp+1B8h] [bp-1C0h]@76
  void *v84; // [sp+1D4h] [bp-1A4h]@74
  void *v85; // [sp+1E4h] [bp-194h]@72
  __int16 v86; // [sp+1FDh] [bp-17Bh]@86
  char v87; // [sp+1FFh] [bp-179h]@86
  int v88; // [sp+200h] [bp-178h]@86
  char v89; // [sp+204h] [bp-174h]@86
  __int16 v90; // [sp+205h] [bp-173h]@86
  char v91; // [sp+207h] [bp-171h]@86
  int v92; // [sp+208h] [bp-170h]@86
  int v93; // [sp+20Ch] [bp-16Ch]@86
  int v94; // [sp+210h] [bp-168h]@86
  int v95; // [sp+218h] [bp-160h]@96
  void *v96; // [sp+234h] [bp-144h]@94
  void *v97; // [sp+244h] [bp-134h]@92
  int v98; // [sp+258h] [bp-120h]@86
  int v99; // [sp+260h] [bp-118h]@90
  void *v100; // [sp+27Ch] [bp-FCh]@88
  void *v101; // [sp+28Ch] [bp-ECh]@86
  __int16 v102; // [sp+2A5h] [bp-D3h]@27
  char v103; // [sp+2A7h] [bp-D1h]@27
  int v104; // [sp+2A8h] [bp-D0h]@27
  char v105; // [sp+2ACh] [bp-CCh]@27
  __int16 v106; // [sp+2ADh] [bp-CBh]@27
  char v107; // [sp+2AFh] [bp-C9h]@27
  int v108; // [sp+2B0h] [bp-C8h]@27
  unsigned int v109; // [sp+2B4h] [bp-C4h]@27
  int v110; // [sp+2B8h] [bp-C0h]@27
  int v111; // [sp+2C0h] [bp-B8h]@37
  void *v112; // [sp+2DCh] [bp-9Ch]@35
  void *v113; // [sp+2ECh] [bp-8Ch]@33
  int v114; // [sp+300h] [bp-78h]@27
  int v115; // [sp+308h] [bp-70h]@31
  void *v116; // [sp+324h] [bp-54h]@29
  void *ptr; // [sp+334h] [bp-44h]@27
  int v118; // [sp+34Ch] [bp-2Ch]@2
  int v119; // [sp+350h] [bp-28h]@2

  v3 = this;
  v4 = a3;
  result = ClientInstance::getLocalPlayer(*((ClientInstance **)this + 1));
  if ( !result )
    return result;
  v6 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
  Player::getContainerManager((Player *)&v118, (int)v6);
  v7 = v119;
  if ( v119 )
  {
    v8 = *(_DWORD *)(v119 + 4);
    v9 = (unsigned int *)(v119 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v8 )
        {
          v12 = 1;
          v7 = 0;
          goto LABEL_12;
        }
        __dmb();
        v10 = __ldrex(v9);
        if ( v10 == v8 )
          break;
        __clrex();
        v8 = v10;
      }
      v11 = __strex(v8 + 1, v9);
      v8 = v10;
    }
    while ( v11 );
    __dmb();
    v12 = 0;
    if ( !*v9 )
      v12 = 1;
LABEL_12:
    v13 = v119;
    v14 = v118;
    if ( v12 )
      v14 = 0;
    if ( v119 )
      v15 = (unsigned int *)(v119 + 8);
      if ( &pthread_create )
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      else
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (**)(void))(*(_DWORD *)v13 + 12))();
  }
  else
    v14 = 0;
    v7 = 0;
  result = *((_BYTE *)v4 + 13);
  if ( result > 122 )
    if ( result == 123 )
      v30 = Player::getSupplies(v6);
      v31 = v30;
      result = PlayerInventoryProxy::getContainerSize(v30, 123);
      v32 = *((_DWORD *)v4 + 4);
      if ( result > v32 )
        PlayerInventoryProxy::setItem(v31, v32, (int)v4 + 24, 123);
        v33 = *((_DWORD *)v4 + 4);
        v34 = PlayerInventoryProxy::getItem(v31, *((_DWORD *)v4 + 4), 123);
        v88 = 0;
        v89 = 123;
        v91 = v87;
        v90 = v86;
        v92 = 0;
        v93 = v33;
        ItemInstance::ItemInstance((ItemInstance *)&v94, v34);
        ItemInstance::ItemInstance((ItemInstance *)&v98, (int)v4 + 24);
        InventoryTransactionManager::addExpectedAction((int)v6 + 5152, (int)&v88);
        if ( v101 )
          operator delete(v101);
        if ( v100 )
          operator delete(v100);
        if ( v99 )
          (*(void (**)(void))(*(_DWORD *)v99 + 4))();
        v99 = 0;
        if ( v97 )
          operator delete(v97);
        if ( v96 )
          operator delete(v96);
        if ( v95 )
          (*(void (**)(void))(*(_DWORD *)v95 + 4))();
        v95 = 0;
        goto LABEL_99;
      goto LABEL_100;
    if ( result == 124 )
      result = *((_DWORD *)v4 + 4);
      if ( !result )
        v56 = 0;
        v57 = 124;
        v59 = v55;
        v58 = v54;
        v60 = 0;
        v61 = 0;
        ItemInstance::ItemInstance((ItemInstance *)&v62, (int)v6 + 5000);
        ItemInstance::ItemInstance((ItemInstance *)&v66, (int)v4 + 24);
        InventoryTransactionManager::addExpectedAction((int)v6 + 5152, (int)&v56);
        if ( v69 )
          operator delete(v69);
        if ( v68 )
          operator delete(v68);
        if ( v67 )
          (*(void (**)(void))(*(_DWORD *)v67 + 4))();
        v67 = 0;
        if ( v65 )
          operator delete(v65);
        if ( v64 )
          operator delete(v64);
        if ( v63 )
          (*(void (**)(void))(*(_DWORD *)v63 + 4))();
        v63 = 0;
        Player::setCursorSelectedItem(v6, (const InventorySlotPacket *)((char *)v4 + 24));
    goto LABEL_56;
  if ( !*((_BYTE *)v4 + 13) )
    v22 = (PlayerInventoryProxy *)Player::getSupplies(v6);
    v23 = PlayerInventoryProxy::getContainerSize((int)v22, 0);
    v24 = PlayerInventoryProxy::getLinkedSlotsCount(v22);
    v25 = *((_DWORD *)v4 + 4);
    result = v23 - v24;
    if ( result > v25 )
      v26 = PlayerInventoryProxy::getLinkedSlotsCount(v22);
      v27 = PlayerInventoryProxy::getItem((int)v22, v26 + v25, 0);
      v72 = 0;
      v73 = 0;
      v75 = v71;
      v74 = v70;
      v76 = 0;
      v77 = v25;
      ItemInstance::ItemInstance((ItemInstance *)&v78, v27);
      ItemInstance::ItemInstance((ItemInstance *)&v82, (int)v4 + 24);
      InventoryTransactionManager::addExpectedAction((int)v6 + 5152, (int)&v72);
      if ( v85 )
        operator delete(v85);
      if ( v84 )
        operator delete(v84);
      if ( v83 )
        (*(void (**)(void))(*(_DWORD *)v83 + 4))();
      v83 = 0;
      if ( v81 )
        operator delete(v81);
      if ( v80 )
        operator delete(v80);
      if ( v79 )
        (*(void (**)(void))(*(_DWORD *)v79 + 4))();
      v79 = 0;
      v28 = *((_DWORD *)v4 + 4);
      v29 = PlayerInventoryProxy::getLinkedSlotsCount(v22);
      PlayerInventoryProxy::setItem((int)v22, v29 + v28, (int)v4 + 24, 0);
      goto LABEL_99;
    goto LABEL_100;
  if ( result != 120 )
LABEL_56:
    if ( v14 )
      v19 = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( (unsigned __int8)v19 == *((_BYTE *)v4 + 13) )
        v20 = *((_DWORD *)v4 + 4);
        v21 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v14 + 32))(v14, *((_DWORD *)v4 + 4));
        v40 = 0;
        v41 = v19;
        v43 = v39;
        v42 = v38;
        v44 = 0;
        v45 = v20;
        ItemInstance::ItemInstance((ItemInstance *)&v46, v21);
        ItemInstance::ItemInstance((ItemInstance *)&v50, (int)v4 + 24);
        InventoryTransactionManager::addExpectedAction((int)v6 + 5152, (int)&v40);
        if ( v53 )
          operator delete(v53);
        if ( v52 )
          operator delete(v52);
        if ( v51 )
          (*(void (**)(void))(*(_DWORD *)v51 + 4))();
        v51 = 0;
        if ( v49 )
          operator delete(v49);
        if ( v48 )
          operator delete(v48);
        if ( v47 )
          (*(void (**)(void))(*(_DWORD *)v47 + 4))();
        v47 = 0;
        (*(void (__fastcall **)(int, _DWORD, char *))(*(_DWORD *)v14 + 28))(v14, *((_DWORD *)v4 + 4), (char *)v4 + 24);
    goto LABEL_99;
  v17 = *((_DWORD *)v4 + 4);
  if ( v17 <= 3 )
    v18 = (*(int (__fastcall **)(Player *, _DWORD))(*(_DWORD *)v6 + 1028))(v6, *((_DWORD *)v4 + 4));
    v104 = 0;
    v105 = 120;
    v107 = v103;
    v106 = v102;
    v108 = 0;
    v109 = v17;
    ItemInstance::ItemInstance((ItemInstance *)&v110, v18);
    ItemInstance::ItemInstance((ItemInstance *)&v114, (int)v4 + 24);
    InventoryTransactionManager::addExpectedAction((int)v6 + 5152, (int)&v104);
    if ( ptr )
      operator delete(ptr);
    if ( v116 )
      operator delete(v116);
    if ( v115 )
      (*(void (**)(void))(*(_DWORD *)v115 + 4))();
    v115 = 0;
    if ( v113 )
      operator delete(v113);
    if ( v112 )
      operator delete(v112);
    if ( v111 )
      (*(void (**)(void))(*(_DWORD *)v111 + 4))();
    v111 = 0;
    (*(void (__fastcall **)(Player *, _DWORD, char *))(*(_DWORD *)v6 + 1024))(v6, *((_DWORD *)v4 + 4), (char *)v4 + 24);
LABEL_99:
    v35 = ClientInstance::getScreen(*((ClientInstance **)v3 + 1));
    result = (*(int (**)(void))(*(_DWORD *)v35 + 24))();
LABEL_100:
  if ( v7 )
    v36 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = __ldrex(v36);
      while ( __strex(result - 1, v36) );
    else
      result = (*v36)--;
    if ( result == 1 )
      v37 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          result = __ldrex(v37);
        while ( __strex(result - 1, v37) );
        result = (*v37)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  return result;
}


void __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const FullChunkDataPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r10@1
  const FullChunkDataPacket *v4; // r6@1
  Entity *v5; // r0@3
  BlockSource *v6; // r0@3
  BlockSource *v7; // r9@3
  Dimension *v8; // r0@3
  NetworkChunkSource *v9; // r8@3
  int v10; // r7@3
  unsigned int v11; // r6@3
  unsigned int v12; // r4@3
  int v13; // r0@5
  int v14; // r5@6
  int v15; // r6@6
  int v16; // r1@7
  int v17; // r0@10
  const Vec3 *v18; // r0@10
  void *v19; // r0@10
  unsigned int *v20; // r2@12
  signed int v21; // r1@14
  void **v22; // [sp+0h] [bp-48h]@3
  ReadOnlyBinaryStream *v23; // [sp+4h] [bp-44h]@3
  void **v24; // [sp+8h] [bp-40h]@3
  int v25; // [sp+10h] [bp-38h]@10
  __int64 v26; // [sp+18h] [bp-30h]@3

  v3 = this;
  v4 = a3;
  if ( *((_DWORD *)this + 10) && ClientInstance::getLocalPlayer(*((ClientInstance **)this + 1)) )
  {
    v26 = *((_QWORD *)v4 + 2);
    v5 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
    v6 = (BlockSource *)Entity::getRegion(v5);
    v7 = v6;
    v8 = (Dimension *)BlockSource::getDimension(v6);
    v9 = (NetworkChunkSource *)Dimension::getChunkSource(v8);
    v10 = NetworkChunkSource::getIncomingChunk(v9, (const ChunkPos *)&v26);
    v22 = &off_26D53F8;
    v23 = (ReadOnlyBinaryStream *)ReadOnlyBinaryStream::ReadOnlyBinaryStream(&v24, (int *)v4 + 6, 1);
    v11 = ReadOnlyBinaryStream::getByte(v23);
    v12 = 0;
    if ( v11 )
    {
      do
        LevelChunk::deserializeSubChunk((LevelChunk *)v10, (unsigned __int8)v12++, (IDataInput *)&v22);
      while ( v12 < v11 );
    }
    v13 = BlockSource::getDimension(v7);
    if ( v12 < 4 * *(_DWORD *)(v10 + 140) >> 2 )
      v14 = *(_BYTE *)(v13 + 108);
      v15 = (unsigned __int8)Brightness::MAX;
      {
        v16 = 0;
        if ( v14 == v15 )
          v16 = 1;
        SubChunk::reset(*(SubChunk **)(v10 + 4 * v12++ + 76), v16, 0);
      }
      while ( v12 < 4 * *(_DWORD *)(v10 + 140) >> 2 );
    LevelChunk::deserialize2DMaps((LevelChunk *)v10, (IDataInput *)&v22);
    LevelChunk::deserializeBorderBlocks((LevelChunk *)v10, (IDataInput *)&v22);
    LevelChunk::deserializeBlockExtraData((LevelChunk *)v10, (IDataInput *)&v22);
    LevelChunk::deserializeBlockEntities((LevelChunk *)v10, (IDataInput *)&v22);
    LevelChunk::recomputeHeightMap(__PAIR__(1, v10));
    *(_BYTE *)(v10 + 40) = 0;
    *(_BYTE *)(v10 + 59) = 0;
    v17 = ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
    v18 = (const Vec3 *)(*(int (__cdecl **)(int, _DWORD))(*(_DWORD *)v17 + 52))(v17, *(_DWORD *)(*(_DWORD *)v17 + 52));
    NetworkChunkSource::chunkFinalize(v9, (LevelChunk *)v10, v7, v18);
    v24 = &off_26E91A4;
    v19 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v25 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v19);
  }
}


signed int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const PlayerSkinPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r5@1
  const PlayerSkinPacket *v4; // r4@1
  signed int result; // r0@1
  char *v6; // r0@2
  unsigned int v7; // r11@2
  unsigned int v8; // r5@2
  unsigned int v9; // r8@2
  unsigned int v10; // r7@2
  int v11; // r1@2
  __int64 v12; // r6@2
  unsigned int v13; // r4@2
  unsigned int v14; // r5@2
  int v15; // r0@2
  int v16; // r9@3
  int v17; // r6@3
  bool v18; // zf@4
  int v19; // r10@9
  LegacyClientNetworkHandler *v20; // r6@11
  const PlayerSkinPacket *v21; // r5@11
  int v22; // r4@16
  __int64 v23; // r0@17
  __int64 v24; // r0@17
  mce::UUID *v25; // [sp+8h] [bp-38h]@2
  LegacyClientNetworkHandler *v26; // [sp+Ch] [bp-34h]@2
  const PlayerSkinPacket *v27; // [sp+10h] [bp-30h]@2
  unsigned int v28; // [sp+14h] [bp-2Ch]@2
  unsigned int v29; // [sp+18h] [bp-28h]@2

  v3 = this;
  v4 = a3;
  result = Level::isUsableLevel(*((Level **)this + 10), a2);
  if ( result == 1 )
  {
    v26 = v3;
    v6 = Level::getPlayerList(*((Level **)v3 + 10));
    v27 = v4;
    v7 = *((_DWORD *)v4 + 4);
    v25 = (const PlayerSkinPacket *)((char *)v4 + 16);
    v8 = *(_QWORD *)((char *)v4 + 20) >> 32;
    v9 = *(_QWORD *)((char *)v4 + 20);
    v10 = *((_DWORD *)v4 + 7);
    v29 = *(_QWORD *)((char *)v4 + 20) >> 32;
    v28 = v10;
    v11 = (522133279 * (unsigned __int64)v8 >> 32) + 522133279 * v10;
    v12 = *(_QWORD *)v6;
    v13 = v9 ^ 522133279 * v7 ^ v8 ^ v11;
    v14 = v13 % (unsigned int)(*(_QWORD *)v6 >> 32);
    v15 = *(_DWORD *)(*(_QWORD *)v6 + 4 * v14);
    if ( !v15 )
      goto LABEL_11;
    v16 = *(_DWORD *)v15;
    v17 = *(_DWORD *)(*(_DWORD *)v15 + 96);
    while ( 1 )
    {
      v18 = v17 == v13;
      if ( v17 == v13 )
        v18 = *(_QWORD *)(v16 + 8) == __PAIR__(v9, v7);
      if ( v18 && *(_QWORD *)(v16 + 16) == __PAIR__(v28, v29) )
        break;
      v19 = *(_DWORD *)v16;
      if ( *(_DWORD *)v16 )
      {
        LODWORD(v12) = *(_DWORD *)(v19 + 96);
        v15 = v16;
        v16 = *(_DWORD *)v16;
        if ( *(_DWORD *)(v19 + 96) % HIDWORD(v12) == v14 )
          continue;
      }
    }
    if ( v15 )
      v20 = v26;
      v22 = *(_DWORD *)v15;
      Level::getPlayerList(*((Level **)v26 + 10));
      v21 = v27;
      if ( v22 )
        EntityInteraction::setInteractText((int *)(v22 + 52), (int *)v27 + 8);
        LODWORD(v23) = v22 + 56;
        HIDWORD(v23) = (char *)v27 + 36;
        std::vector<unsigned char,std::allocator<unsigned char>>::operator=(v23);
        EntityInteraction::setInteractText((int *)(v22 + 80), (int *)v27 + 15);
        EntityInteraction::setInteractText((int *)(v22 + 84), (int *)v27 + 16);
        LODWORD(v24) = v22 + 68;
        HIDWORD(v24) = (char *)v27 + 48;
        std::vector<unsigned char,std::allocator<unsigned char>>::operator=(v24);
    else
LABEL_11:
    result = Level::getPlayer(*((Level **)v20 + 10), v25);
    if ( result )
      result = (*(int (__cdecl **)(signed int, char *))(*(_DWORD *)result + 1416))(result, (char *)v21 + 32);
  }
  return result;
}


int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const InventoryTransactionPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r4@1
  const InventoryTransactionPacket *v4; // r5@1
  int result; // r0@1
  int v6; // r0@4

  v3 = this;
  v4 = a3;
  result = ClientInstance::getLocalPlayer(*((ClientInstance **)this + 1));
  if ( result )
  {
    ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
    if ( (*(int (**)(void))(**((_DWORD **)v4 + 4) + 16))() != 1 )
      (*(void (**)(void))(**((_DWORD **)v4 + 4) + 20))();
    v6 = ClientInstance::getScreen(*((ClientInstance **)v3 + 1));
    result = (*(int (**)(void))(*(_DWORD *)v6 + 24))();
  }
  return result;
}


int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const SetCommandsEnabledPacket *a3)
{
  int result; // r0@1
  int v4; // r1@2

  result = *((_DWORD *)this + 10);
  if ( result )
  {
    v4 = *((_BYTE *)a3 + 13);
    result = (*(int (**)(void))(*(_DWORD *)result + 88))();
  }
  return result;
}


signed int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const SetDefaultGameTypePacket *a3)
{
  LegacyClientNetworkHandler *v3; // r5@1
  const SetDefaultGameTypePacket *v4; // r4@1
  signed int result; // r0@1
  char *v6; // r0@3

  v3 = this;
  v4 = a3;
  result = Level::isUsableLevel(*((Level **)this + 10), a2);
  if ( result == 1 )
  {
    result = ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
    if ( result )
    {
      v6 = Level::getLevelData(*((Level **)v3 + 10));
      result = j_j_j__ZN9LevelData11setGameTypeE8GameType((int)v6, *((_DWORD *)v4 + 4));
    }
  }
  return result;
}


signed int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const HurtArmorPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r5@1
  const HurtArmorPacket *v4; // r4@1
  signed int result; // r0@1
  int v6; // r0@3
  int v7; // r1@3

  v3 = this;
  v4 = a3;
  result = Level::isUsableLevel(*((Level **)this + 10), a2);
  if ( result == 1 )
  {
    result = ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
    if ( result )
    {
      v6 = ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
      v7 = *((_DWORD *)v4 + 4);
      result = (*(int (**)(void))(*(_DWORD *)v6 + 1020))();
    }
  }
  return result;
}


char *__fastcall LegacyClientNetworkHandler::getEntityLinksFor(LegacyClientNetworkHandler *this, const Entity *a2, Entity *a3)
{
  LegacyClientNetworkHandler *v3; // r11@1
  const Entity *v4; // r8@1
  char *result; // r0@1
  __int64 v6; // r2@1
  unsigned int v7; // r5@2
  unsigned int v8; // r10@2
  unsigned int v9; // r9@2
  __int64 v10; // r0@3
  bool v11; // zf@3
  __int64 v12; // kr08_8@7
  int v13; // r1@8
  int v14; // r3@8
  int v15; // r4@8
  __int64 v16; // r6@8
  int v17; // r2@8
  int v18; // r4@8
  __int64 v19; // r6@8
  int v20; // r1@10
  int v21; // r0@10
  signed int v22; // r3@11
  int v23; // lr@12
  int v24; // r2@13
  int v25; // r4@13
  int v26; // r5@13
  int v27; // r6@13
  int v28; // r7@13
  unsigned int v29; // [sp+0h] [bp-28h]@2

  v3 = this;
  v4 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  result = Entity::getUniqueID(a3);
  v6 = *(_QWORD *)((char *)v4 + 204);
  if ( HIDWORD(v6) != (_DWORD)v6 )
  {
    v7 = *(_QWORD *)result >> 32;
    v8 = *(_QWORD *)result;
    v9 = 0;
    v29 = *(_QWORD *)result >> 32;
    do
    {
      HIDWORD(v10) = v6 + 32 * v9;
      v11 = *(_QWORD *)(HIDWORD(v10) + 8) == __PAIR__(v7, v8);
      if ( *(_QWORD *)(HIDWORD(v10) + 8) != __PAIR__(v7, v8) )
        v11 = *(_QWORD *)(HIDWORD(v10) + 16) == __PAIR__(v7, v8);
      if ( v11 )
      {
        v12 = *(_QWORD *)((char *)v3 + 4);
        if ( (_DWORD)v12 == HIDWORD(v12) )
        {
          LODWORD(v10) = v3;
          std::vector<EntityLink,std::allocator<EntityLink>>::_M_emplace_back_aux<EntityLink&>(v10);
        }
        else
          v14 = *(_DWORD *)HIDWORD(v10);
          v15 = *(_DWORD *)(HIDWORD(v10) + 4);
          v16 = *(_QWORD *)(HIDWORD(v10) + 8);
          v13 = HIDWORD(v10) + 16;
          *(_DWORD *)v12 = v14;
          *(_DWORD *)(v12 + 4) = v15;
          *(_QWORD *)(v12 + 8) = v16;
          v17 = v12 + 16;
          v18 = *(_DWORD *)(v13 + 4);
          v19 = *(_QWORD *)(v13 + 8);
          *(_DWORD *)v17 = *(_DWORD *)v13;
          *(_DWORD *)(v17 + 4) = v18;
          *(_QWORD *)(v17 + 8) = v19;
          *((_DWORD *)v3 + 1) = v12 + 32;
        v20 = *(_QWORD *)((char *)v4 + 204) >> 32;
        LODWORD(v6) = *(_QWORD *)((char *)v4 + 204);
        v21 = v6 + 32 * v9;
        if ( v21 + 32 == v20 )
          v20 = v21 + 32;
          v22 = v20 - (v21 + 32);
          if ( v22 >= 1 )
          {
            v23 = (v22 >> 5) + 1;
            do
            {
              --v23;
              v24 = *(_DWORD *)(v21 + 36);
              v25 = *(_DWORD *)(v21 + 40);
              v26 = *(_DWORD *)(v21 + 44);
              v27 = *(_DWORD *)(v21 + 48);
              v28 = *(_DWORD *)(v21 + 52);
              *(_DWORD *)v21 = *(_DWORD *)(v21 + 32);
              *(_DWORD *)(v21 + 4) = v24;
              *(_DWORD *)(v21 + 8) = v25;
              *(_DWORD *)(v21 + 12) = v26;
              *(_DWORD *)(v21 + 16) = v27;
              *(_DWORD *)(v21 + 20) = v28;
              *(_BYTE *)(v21 + 24) = *(_BYTE *)(v21 + 56);
              v21 += 32;
            }
            while ( v23 > 1 );
            v20 = *(_QWORD *)((char *)v4 + 204) >> 32;
            LODWORD(v6) = *(_QWORD *)((char *)v4 + 204);
            v7 = v29;
          }
        HIDWORD(v6) = v20 - 32;
        *((_DWORD *)v4 + 52) = v20 - 32;
        result = (char *)(v20 - 32 - v6);
      }
      else
        result = (char *)(HIDWORD(v6) - v6);
        ++v9;
    }
    while ( v9 < (signed int)result >> 5 );
  }
  return result;
}


void __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const ExplodePacket *a3)
{
  LegacyClientNetworkHandler::handle(this, a2, a3);
}


Entity *__fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const MoveEntityPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r5@1
  Entity *result; // r0@1
  Entity *v6; // r5@2
  int v12; // r10@4
  BlockSource *v13; // r7@4
  void (__fastcall *v14)(Entity *, char *); // r4@7
  int *v15; // r4@8
  int *v16; // r7@8
  int v17; // t1@9
  signed __int8 v18; // r1@10
  int v19; // r0@11
  signed __int8 v20; // r1@13
  int v21; // r0@13
  void (__fastcall *v22)(Entity *, char *, char *, signed int); // r4@14
  char v23; // [sp+4h] [bp-84h]@14
  char v24; // [sp+Ch] [bp-7Ch]@13
  char v25; // [sp+14h] [bp-74h]@7
  char v26; // [sp+1Ch] [bp-6Ch]@7
  char v27; // [sp+24h] [bp-64h]@4

  v3 = this;
  _R11 = a3;
  result = (Entity *)Level::isUsableLevel(*((Level **)this + 10), a2);
  if ( result == (Entity *)1 )
  {
    result = (Entity *)Level::getRuntimeEntity(*((_DWORD *)v3 + 10), 0, *((_QWORD *)_R11 + 2), 0);
    v6 = result;
    if ( result )
    {
      result = (Entity *)Entity::isControlledByLocalInstance(result);
      if ( !result )
      {
        _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 52))(v6);
        __asm
        {
          VLDR            S16, [R0]
          VLDR            S18, [R0,#4]
          VLDR            S22, [R0,#8]
          VLDR            S20, [R11,#0x18]
          VLDR            S24, [R11,#0x1C]
          VLDR            S26, [R11,#0x20]
        }
        v12 = *((_BYTE *)_R11 + 37);
        v13 = (BlockSource *)Entity::getRegion(v6);
        BlockPos::BlockPos((int)&v27, (int)_R11 + 24);
        if ( BlockSource::hasBlock(v13, (const BlockPos *)&v27) != 1 )
          goto LABEL_18;
        if ( !v12 )
          goto LABEL_19;
          VSUB.F32        S2, S24, S18
          VSUB.F32        S4, S20, S16
          VSUB.F32        S0, S26, S22
          VMUL.F32        S2, S2, S2
          VMUL.F32        S4, S4, S4
          VMUL.F32        S0, S0, S0
          VADD.F32        S2, S2, S4
          VADD.F32        S0, S2, S0
          VMOV.F32        S2, #0.25
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
LABEL_19:
          if ( Entity::hasCategory((int)v6, 2) == 1 )
          {
            MoveEntityPacketData::getRot((MoveEntityPacketData *)&v24, (int)_R11 + 16);
            v21 = MoveEntityPacketData::getYHeadRot((const MoveEntityPacket *)((char *)_R11 + 16), v20);
            Mob::lerpTo((int)v6, (int)_R11 + 24, (int)&v24, *(float *)&v21);
          }
          else
            v22 = *(void (__fastcall **)(Entity *, char *, char *, signed int))(*(_DWORD *)v6 + 112);
            MoveEntityPacketData::getRot((MoveEntityPacketData *)&v23, (int)_R11 + 16);
            v22(v6, (char *)_R11 + 24, &v23, 3);
        else
LABEL_18:
          *((_BYTE *)v6 + 539) = 0;
          MoveEntityPacketData::getRot((MoveEntityPacketData *)&v26, (int)_R11 + 16);
          Entity::setPreviousPosRot((int)v6, (int)_R11 + 24, &v26);
          (*(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v6 + 48))(v6, (char *)_R11 + 24);
          v14 = *(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v6 + 72);
          MoveEntityPacketData::getRot((MoveEntityPacketData *)&v25, (int)_R11 + 16);
          v14(v6, &v25);
          if ( Entity::isRide(v6) == 1 )
            v15 = (int *)(*(_QWORD *)((char *)v6 + 476) >> 32);
            v16 = (int *)*(_QWORD *)((char *)v6 + 476);
            while ( v15 != v16 )
            {
              v17 = *v16;
              ++v16;
              (*(void (__fastcall **)(Entity *, int, _DWORD))(*(_DWORD *)v6 + 136))(v6, v17, 0);
            }
            v19 = MoveEntityPacketData::getYHeadRot((const MoveEntityPacket *)((char *)_R11 + 16), v18);
            Mob::setYHeadRot(v6, *(float *)&v19);
        result = (Entity *)*((_BYTE *)_R11 + 36);
        *((_BYTE *)v6 + 216) = (_BYTE)result;
      }
    }
  }
  return result;
}


signed int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const GameRulesChangedPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r5@1
  const GameRulesChangedPacket *v4; // r4@1
  signed int result; // r0@1
  char *v6; // r0@2

  v3 = this;
  v4 = a3;
  result = Level::isUsableLevel(*((Level **)this + 10), a2);
  if ( result == 1 )
  {
    v6 = Level::getGameRules(*((Level **)v3 + 10));
    result = j_j_j__ZN9GameRules16deserializeRulesERK26GameRulesChangedPacketData((int)v6, (_QWORD *)v4 + 2);
  }
  return result;
}


signed int __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const ChangeDimensionPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r5@1
  signed int result; // r0@1
  int v5; // r0@3

  v3 = this;
  result = Level::isUsableLevel(*((Level **)this + 10), a2);
  if ( result == 1 )
  {
    result = ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
    if ( result )
    {
      v5 = ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
      result = (*(int (**)(void))(*(_DWORD *)v5 + 536))();
    }
  }
  return result;
}


void __fastcall LegacyClientNetworkHandler::handle(LegacyClientNetworkHandler *this, const NetworkIdentifier *a2, const AddEntityPacket *a3)
{
  LegacyClientNetworkHandler *v3; // r9@1
  const AddEntityPacket *v4; // r5@1
  int v5; // r2@3
  int v6; // r3@3
  int v7; // r1@6
  Mob *v8; // r7@7
  void *v9; // r0@7
  void *v10; // r0@8
  void *v11; // r0@9
  int v12; // r0@13
  int i; // r4@13
  int v14; // r11@13
  int (__fastcall *v15)(Mob *, int); // r6@14
  int v16; // r0@14
  AttributeInstance *v17; // r0@14
  BaseAttributeMap *v18; // r6@16
  const Attribute *v19; // r0@16
  int (__fastcall *v20)(Mob *, int); // r6@16
  int v21; // r0@16
  Entity *v22; // r0@19
  BlockSource *v23; // r4@19
  __int64 v24; // kr08_8@19
  int v25; // r0@19
  __int64 v26; // r2@19
  Entity *v27; // r4@19
  char *v28; // r0@21
  int j; // r6@21
  int v30; // r11@21
  int v31; // r3@22
  int v32; // r4@22
  int v33; // r7@22
  int v34; // r3@22
  int v35; // r4@22
  int v36; // r7@22
  unsigned int *v37; // r2@24
  signed int v38; // r1@26
  unsigned int *v39; // r2@28
  signed int v40; // r1@30
  unsigned int *v41; // r2@32
  signed int v42; // r1@34
  const NetworkIdentifier *v43; // [sp+Ch] [bp-74h]@1
  void **v44; // [sp+10h] [bp-70h]@22
  int v45; // [sp+14h] [bp-6Ch]@22
  int v46; // [sp+18h] [bp-68h]@22
  char v47; // [sp+1Ch] [bp-64h]@22
  int v48; // [sp+20h] [bp-60h]@22
  int v49; // [sp+24h] [bp-5Ch]@22
  int v50; // [sp+28h] [bp-58h]@22
  int v51; // [sp+2Ch] [bp-54h]@22
  int v52; // [sp+30h] [bp-50h]@22
  int v53; // [sp+34h] [bp-4Ch]@22
  int v54; // [sp+38h] [bp-48h]@22
  int v55; // [sp+3Ch] [bp-44h]@22
  Mob *v56; // [sp+40h] [bp-40h]@19
  int v57; // [sp+44h] [bp-3Ch]@7
  int v58; // [sp+48h] [bp-38h]@8
  int v59; // [sp+4Ch] [bp-34h]@7
  Mob *v60; // [sp+50h] [bp-30h]@7
  int v61; // [sp+54h] [bp-2Ch]@3

  v3 = this;
  v4 = a3;
  v43 = a2;
  if ( Level::isUsableLevel(*((Level **)this + 10), a2) == 1
    && ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1)) )
  {
    v5 = *((_DWORD *)v4 + 12);
    v6 = *((_DWORD *)v4 + 13);
    (*(void (__fastcall **)(int *))(**((_DWORD **)v3 + 10) + 60))(&v61);
    if ( v61 )
    {
      (*(void (**)(void))(**((_DWORD **)v3 + 10) + 104))();
      if ( v61 )
        (*(void (**)(void))(*(_DWORD *)v61 + 32))();
    }
    v7 = *((_DWORD *)v4 + 17);
    if ( v7 != 1 )
      EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v57, v7);
      EntityFactory::createSpawnedEntity(&v60, (const void **)&v57, 0, (int)v4 + 72, (_QWORD *)v4 + 5);
      v8 = v60;
      v60 = 0;
      v9 = (void *)(v59 - 12);
      if ( (int *)(v59 - 12) != &dword_28898C0 )
      {
        v37 = (unsigned int *)(v59 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
        }
        else
          v38 = (*v37)--;
        if ( v38 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v9);
      }
      v10 = (void *)(v58 - 12);
      if ( (int *)(v58 - 12) != &dword_28898C0 )
        v39 = (unsigned int *)(v58 - 4);
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
          v40 = (*v39)--;
        if ( v40 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v10);
      v11 = (void *)(v57 - 12);
      if ( (int *)(v57 - 12) != &dword_28898C0 )
        v41 = (unsigned int *)(v57 - 4);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v11);
      if ( v8 )
        if ( EntityClassTree::isMob(*((_DWORD *)v4 + 17)) || EntityClassTree::isMobLegacy(*((_DWORD *)v4 + 17)) == 1 )
          v12 = *((_DWORD *)v4 + 11);
          *((_DWORD *)v8 + 855) = v12;
          *((_DWORD *)v8 + 856) = v12;
          v14 = *(_QWORD *)((char *)v4 + 108) >> 32;
          for ( i = *(_QWORD *)((char *)v4 + 108); v14 != i; i += 16 )
          {
            v15 = *(int (__fastcall **)(Mob *, int))(*(_DWORD *)v8 + 1000);
            v16 = Attribute::getByName((AttributeCollection *)i);
            v17 = (AttributeInstance *)v15(v8, v16);
            if ( !v17 )
            {
              if ( AttributeCollection::hasAttribute((AttributeCollection *)i) != 1 )
                continue;
              v18 = (BaseAttributeMap *)Mob::getAttributes(v8);
              v19 = (const Attribute *)Attribute::getByName((AttributeCollection *)i);
              BaseAttributeMap::registerAttribute(v18, v19);
              v20 = *(int (__fastcall **)(Mob *, int))(*(_DWORD *)v8 + 1000);
              v21 = Attribute::getByName((AttributeCollection *)i);
              v17 = (AttributeInstance *)v20(v8, v21);
              if ( !v17 )
            }
            AttributeInstance::setRange(v17, *(float *)(i + 4), *(float *)(i + 8), *(float *)(i + 12));
          }
        v22 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
        v23 = (BlockSource *)Entity::getRegion(v22);
        (*(void (__fastcall **)(Mob *, char *))(*(_DWORD *)v8 + 116))(v8, (char *)v4 + 84);
        v24 = *((_QWORD *)v4 + 7);
        v25 = *((_DWORD *)v3 + 10);
        v26 = *((_QWORD *)v4 + 6);
        v56 = v8;
        v27 = MultiPlayerLevel::putEntity(v25, v23, v26, SHIDWORD(v26), v24, SHIDWORD(v24), (int)&v56);
        if ( v56 )
          (*(void (**)(void))(*(_DWORD *)v56 + 32))();
        v56 = 0;
        v28 = Entity::getEntityData(v27);
        SynchedEntityData::assignValues((int)v28, (unsigned __int64 *)((char *)v4 + 28), (int)v27);
        Entity::reload(v27);
        v30 = *((_QWORD *)v4 + 2) >> 32;
        for ( j = *((_QWORD *)v4 + 2); v30 != j; j += 32 )
          v45 = 2;
          v46 = 1;
          v47 = 0;
          v44 = &off_26D9898;
          v31 = *(_DWORD *)(j + 4);
          v32 = *(_DWORD *)(j + 8);
          v33 = *(_DWORD *)(j + 12);
          v48 = *(_DWORD *)j;
          v49 = v31;
          v50 = v32;
          v51 = v33;
          v34 = *(_DWORD *)(j + 20);
          v35 = *(_DWORD *)(j + 24);
          v36 = *(_DWORD *)(j + 28);
          v52 = *(_DWORD *)(j + 16);
          v53 = v34;
          v54 = v35;
          v55 = v36;
          (*(void (__fastcall **)(LegacyClientNetworkHandler *, const NetworkIdentifier *, void ***))(*(_DWORD *)v3 + 196))(
            v3,
            v43,
            &v44);
  }
}
