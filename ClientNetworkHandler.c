

signed int __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const ResourcePacksInfoPacket *a3)
{
  ClientNetworkHandler *v3; // r4@1
  const ResourcePacksInfoPacket *v4; // r5@1
  signed int result; // r0@1
  MinecraftGame *v6; // r0@2
  int v7; // r0@2

  v3 = this;
  v4 = a3;
  result = ClientInstance::isPrimaryClient(*((ClientInstance **)this + 1));
  if ( result == 1 )
  {
    v6 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)v3 + 1));
    MinecraftGame::setResourcePacksInfoData(v6, (const ResourcePacksInfoPacket *)((char *)v4 + 16));
    v7 = ClientInstance::getMinecraftGame(*((ClientInstance **)v3 + 1));
    result = j_j_j__ZN13MinecraftGame23onGameEventNotificationEN2ui21GameEventNotificationE_0(v7, 8);
  }
  return result;
}


Entity *__fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const UpdateTradePacket *a3)
{
  ClientNetworkHandler *v3; // r5@1
  const UpdateTradePacket *v4; // r4@1
  Entity *result; // r0@1
  Entity *v6; // r6@2
  int v7; // r0@3
  int v8; // r0@4

  v3 = this;
  v4 = a3;
  result = (Entity *)Level::isUsableLevel(*((Level **)this + 6), a2);
  if ( result == (Entity *)1 )
  {
    result = (Entity *)Level::fetchEntity(*((_DWORD *)v3 + 6), 0, *((_QWORD *)v4 + 4), *((_QWORD *)v4 + 4) >> 32, 0);
    v6 = result;
    if ( result )
    {
      v7 = (*(int (**)(void))(*(_DWORD *)result + 488))();
      result = (Entity *)EntityClassTree::isTypeInstanceOf(v7, 783);
      if ( result == (Entity *)1 )
      {
        Entity::setOffersFromPacket(v6, v4);
        v8 = ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
        result = (Entity *)(*(int (**)(void))(*(_DWORD *)v8 + 1344))();
      }
    }
  }
  return result;
}


int __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const ResourcePackChunkDataPacket *a3)
{
  const ResourcePackChunkDataPacket *v3; // r4@1
  int v4; // r5@1
  int v5; // t1@1
  char v7; // [sp+8h] [bp-28h]@1

  v3 = a3;
  v4 = NetworkHandler::getResourcePackDownloadManager(
         *((_QWORD *)this + 1),
         *((_QWORD *)this + 1) >> 32,
         a2,
         (int **)a3 + 4);
  v5 = *((_DWORD *)v3 + 8);
  v3 = (const ResourcePackChunkDataPacket *)((char *)v3 + 32);
  UploadChunkInfo::UploadChunkInfo(
    (UploadChunkInfo *)&v7,
    *((_DWORD *)v3 - 3),
    *((_QWORD *)v3 - 1),
    *((_QWORD *)v3 - 1) + (unsigned int)(*((_DWORD *)v3 + 1) - v5) - 1LL);
  return ResourcePackFileDownloaderManager::chunkReceived(v4, (int)&v7, (unsigned __int64 *)v3);
}


void __fastcall ClientNetworkHandler::onStoreOfferReceive(int a1, int a2, const void **a3)
{
  int v3; // r7@1
  const void **v4; // r4@1
  int v5; // r6@1
  ThirdPartyInfo *v6; // r5@1
  ClientInstance *v7; // r8@2
  char *v8; // r0@2
  int v9; // r7@2
  char *v10; // r0@3

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (ThirdPartyInfo *)(NetworkHandler::getConnectionInfo(*(NetworkHandler **)(a1 + 8)) + 20);
  if ( ThirdPartyInfo::isValid(v6) == 1 )
  {
    v7 = *(ClientInstance **)(v3 + 4);
    v8 = ThirdPartyInfo::getCreatorId(v6);
    v9 = (int)v8;
    if ( v5 == 1 )
    {
      v10 = ThirdPartyInfo::getCreatorName(v6);
      ClientInstance::linkToAllOffers(v7, v9, (int)v10, 1, (int)&CatalogContentType::ThirdPartyOffer);
    }
    else
      ClientInstance::linkToOffer((int)v7, v4, 1, &CatalogContentType::ThirdPartyOffer, (const void **)v8, 7);
  }
}


int __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const UpdateAttributesPacket *a3)
{
  ClientNetworkHandler *v3; // r4@1
  UpdateAttributesPacket *v4; // r5@1
  __int64 v5; // r0@1
  int v6; // r6@3
  int v7; // r1@3
  Mob *v8; // r6@3
  char *v9; // r5@5
  unsigned __int64 *v10; // r10@5
  int v12; // r11@6
  AttributeInstance *v13; // r7@7
  const Attribute *v14; // r0@8
  __int64 v20; // r2@9
  char *v22; // r1@9
  _DWORD *v23; // r0@9
  _DWORD *v24; // r1@9
  size_t v25; // r2@9
  char *v26; // r1@11
  _DWORD *v27; // r0@11
  _DWORD *v28; // r1@11
  size_t v29; // r2@11
  char v31; // [sp+8h] [bp-70h]@9
  char v32; // [sp+40h] [bp-38h]@3

  v3 = this;
  v4 = a3;
  LODWORD(v5) = Level::isUsableLevel(*((Level **)this + 6), a2);
  if ( (_DWORD)v5 == 1 )
  {
    LODWORD(v5) = Level::isClientSide(*((Level **)v3 + 6));
    if ( (_DWORD)v5 == 1 )
    {
      v6 = *((_DWORD *)v3 + 6);
      UpdateAttributesPacket::getRuntimeId((UpdateAttributesPacket *)&v32, (int)v4);
      LODWORD(v5) = Level::getRuntimeEntity(v6, v7, *(__int64 *)&v32, 0);
      v8 = (Mob *)v5;
      if ( (_DWORD)v5 )
      {
        LODWORD(v5) = Entity::hasCategory(v5, 2);
        if ( (_DWORD)v5 == 1 )
        {
          v9 = UpdateAttributesPacket::getAttributeData(v4);
          v10 = (unsigned __int64 *)Mob::getAttributes(v8);
          v5 = *(_QWORD *)v9;
          if ( (_DWORD)v5 != HIDWORD(v5) )
          {
            _R8 = v5 + 8;
            v12 = -HIDWORD(v5);
            do
            {
              v13 = (AttributeInstance *)BaseAttributeMap::getMutableInstance(v10, (int **)(_R8 + 8));
              if ( !v13 )
              {
                v14 = (const Attribute *)Attribute::getByName((AttributeCollection *)(_R8 + 8));
                v13 = (AttributeInstance *)BaseAttributeMap::registerAttribute((BaseAttributeMap *)v10, v14);
              }
              AttributeInstance::serializationSetRange(
                v13,
                *(float *)(_R8 - 4),
                COERCE_FLOAT(*(_QWORD *)_R8 >> 32),
                COERCE_FLOAT(*(_QWORD *)_R8));
              __asm { VLDR            S16, [R8,#-8] }
              _R0 = AttributeInstance::getCurrentValue(v13);
              __asm { VMOV            S0, R0 }
              LODWORD(v20) = 9;
              __asm
                VSUB.F32        S0, S16, S0
                VMOV            R1, S0
              InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)&v31, _R1, v20);
              AttributeInstance::addBuff(v13, (const AttributeBuff *)&v31);
              InstantaneousAttributeBuff::~InstantaneousAttributeBuff((InstantaneousAttributeBuff *)&v31);
              AttributeInstance::removeBuffs(v13);
              v22 = Attribute::getName((Attribute *)&Player::EXPERIENCE);
              v23 = *(_DWORD **)(_R8 + 8);
              v24 = *(_DWORD **)v22;
              v25 = *(v23 - 3);
              if ( v25 == *(v24 - 3) && !memcmp(v23, v24, v25)
                || (v26 = Attribute::getName((Attribute *)&Player::LEVEL),
                    v27 = *(_DWORD **)(_R8 + 8),
                    v28 = *(_DWORD **)v26,
                    v29 = *(v27 - 3),
                    v29 == *(v28 - 3))
                && !memcmp(v27, v28, v29) )
                ClientInstance::onGameEventNotification(*((_DWORD *)v3 + 1));
              _R8 += 20;
              LODWORD(v5) = _R8 + v12;
            }
            while ( _R8 + v12 != 8 );
          }
        }
      }
    }
  }
  return v5;
}


void __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const ResourcePackStackPacket *a3)
{
  ClientNetworkHandler *v3; // r6@1
  const ResourcePackStackPacket *v4; // r7@1
  const NetworkIdentifier *v5; // r11@1
  MinecraftGame *v6; // r0@1
  int v7; // r4@1
  MinecraftGame *v8; // r0@4
  ResourcePackManager *v9; // r4@4
  MinecraftGame *v10; // r0@4
  ClientInstance *v11; // r0@4
  Minecraft *v12; // r0@4
  int v13; // r5@4
  bool v14; // r1@4
  ResourcePackStack *v15; // r10@6
  ResourcePackStack *v16; // r9@6
  MinecraftGame *v17; // r0@6
  const ResourcePackRepository *v18; // r4@6
  ResourcePackStack *v19; // r5@6
  MinecraftGame *v20; // r0@6
  const ResourcePackRepository *v21; // r4@6
  ResourcePackStack *v22; // r8@6
  PackReport *v23; // r0@12
  PackReport *v24; // r4@12
  void (__fastcall *v25)(ResourcePackStack *); // r1@17
  ResourcePackStack *v26; // r0@17
  void (__fastcall *v27)(ClientNetworkHandler *, const NetworkIdentifier *, int *, _DWORD); // r4@18
  void *v28; // r0@18
  unsigned int *v29; // r2@19
  signed int v30; // r1@21
  PackReport *v31; // r0@28
  PackReport *v32; // r4@28
  PackReport *v33; // r0@38
  PackReport *v34; // r4@38
  PackReport *v35; // r0@43
  PackReport *v36; // r4@43
  ResourcePackManager *v37; // [sp+0h] [bp-B0h]@6
  ResourcePackManager *v38; // [sp+4h] [bp-ACh]@6
  void **v39; // [sp+8h] [bp-A8h]@35
  int v40; // [sp+Ch] [bp-A4h]@35
  int v41; // [sp+10h] [bp-A0h]@35
  char v42; // [sp+14h] [bp-9Ch]@35
  int v43; // [sp+18h] [bp-98h]@35
  int v44; // [sp+1Ch] [bp-94h]@35
  int v45; // [sp+20h] [bp-90h]@35
  int *v46; // [sp+24h] [bp-8Ch]@35
  int *v47; // [sp+28h] [bp-88h]@35
  int v48; // [sp+2Ch] [bp-84h]@35
  char v49; // [sp+30h] [bp-80h]@35
  void *v50; // [sp+34h] [bp-7Ch]@28
  PackReport *v51; // [sp+38h] [bp-78h]@28
  ResourcePackStack *v52; // [sp+40h] [bp-70h]@24
  void *ptr; // [sp+44h] [bp-6Ch]@12
  PackReport *v54; // [sp+48h] [bp-68h]@12
  int *v55; // [sp+50h] [bp-60h]@10
  ClientNetworkHandler *v56; // [sp+54h] [bp-5Ch]@10
  const NetworkIdentifier *v57; // [sp+58h] [bp-58h]@10
  int v58; // [sp+5Ch] [bp-54h]@10
  ResourcePackStack *v59; // [sp+60h] [bp-50h]@8
  ResourcePackStack *v60; // [sp+64h] [bp-4Ch]@6
  int v61; // [sp+6Ch] [bp-44h]@18
  void *v62; // [sp+70h] [bp-40h]@1
  PackReport *v63; // [sp+74h] [bp-3Ch]@1
  int v64; // [sp+78h] [bp-38h]@1
  void *v65; // [sp+7Ch] [bp-34h]@1
  PackReport *v66; // [sp+80h] [bp-30h]@1
  int v67; // [sp+84h] [bp-2Ch]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  NetworkHandler::cleanupResourcePackManager(*((NetworkHandler **)this + 2), a2);
  v6 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)v3 + 1));
  v7 = MinecraftGame::getResourcePackRepository(v6);
  ResourcePackRepository::addCachedResourcePacks(v7, 0);
  v66 = 0;
  v67 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  ResourcePackRepository::getResourcePacksByPackId(v7, (unsigned __int64 *)v4 + 2, (int)&v65);
  ResourcePackRepository::getResourcePacksByPackId(v7, (unsigned __int64 *)((char *)v4 + 28), (int)&v62);
  if ( -286331153 * ((v66 - (PackReport *)v65) >> 3) == -1227133513
                                                      * ((signed int)((*((_QWORD *)v4 + 2) >> 32) - *((_QWORD *)v4 + 2)) >> 3)
    && (!*((_BYTE *)v4 + 40)
     || -286331153 * ((v63 - (PackReport *)v62) >> 3) == -1227133513
                                                       * ((signed int)((*(_QWORD *)((char *)v4 + 28) >> 32)
                                                                     - *(_QWORD *)((char *)v4 + 28)) >> 3)) )
  {
    v8 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)v3 + 1));
    v9 = (ResourcePackManager *)MinecraftGame::getResourcePackManager(v8);
    v10 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)v3 + 1));
    v11 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(v10);
    v12 = (Minecraft *)ClientInstance::getServerData(v11);
    v13 = Minecraft::getResourceLoader(v12);
    v14 = 0;
    if ( !*((_BYTE *)v4 + 40) )
      v14 = 1;
    ResourcePackManager::setCanUseGlobalPackStack(v9, v14);
    v15 = (ResourcePackStack *)operator new(0x14u);
    v37 = (ResourcePackManager *)v13;
    v38 = v9;
    *(_DWORD *)v15 = &off_26EAC8C;
    *((_DWORD *)v15 + 1) = 0;
    *((_DWORD *)v15 + 2) = 0;
    *((_DWORD *)v15 + 3) = 0;
    *((_DWORD *)v15 + 4) = 0;
    v16 = (ResourcePackStack *)operator new(0x14u);
    *(_DWORD *)v16 = &off_26EAC8C;
    *((_DWORD *)v16 + 1) = 0;
    *((_DWORD *)v16 + 2) = 0;
    *((_DWORD *)v16 + 3) = 0;
    *((_DWORD *)v16 + 4) = 0;
    v17 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)v3 + 1));
    v18 = (const ResourcePackRepository *)MinecraftGame::getResourcePackRepository(v17);
    v19 = (ResourcePackStack *)operator new(0x14u);
    ResourcePackStack::ResourcePackStack(v19, (unsigned __int64 *)&v65, v18);
    ResourcePackStack::getSplitStacks(v19, v15, v16);
    v20 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)v3 + 1));
    v21 = (const ResourcePackRepository *)MinecraftGame::getResourcePackRepository(v20);
    v22 = (ResourcePackStack *)operator new(0x14u);
    ResourcePackStack::ResourcePackStack(v22, (unsigned __int64 *)&v62, v21);
    v60 = v22;
    ResourcePackManager::setStack(v38, (int *)&v60, 0, 0);
    if ( v60 )
      (*(void (**)(void))(*(_DWORD *)v60 + 4))();
    v59 = v15;
    v60 = 0;
    ResourcePackManager::setStack(v38, (int *)&v59, 1, 0);
    if ( v59 )
      (*(void (**)(void))(*(_DWORD *)v59 + 4))();
    v59 = 0;
    ResourcePackManager::ensureSupportedSubpacks(v38);
    v58 = ResourcePackManager::canSupportPacks(v38);
    v55 = &v58;
    v56 = v3;
    v57 = v5;
    if ( v58 )
    {
      if ( *((_BYTE *)v4 + 40) )
      {
        ResourcePackManager::getIncompatiblePacks((ResourcePackManager *)&ptr, (int)v38);
        sub_1333E8C((int)&v55, &ptr);
        v24 = v54;
        v23 = (PackReport *)ptr;
        if ( ptr != (void *)v54 )
        {
          do
            v23 = (PackReport *)((char *)PackReport::~PackReport(v23) + 120);
          while ( v24 != v23 );
          v23 = (PackReport *)ptr;
        }
        if ( v23 )
          operator delete((void *)v23);
        (*(void (__fastcall **)(ResourcePackStack *))(*(_DWORD *)v19 + 4))(v19);
        v25 = *(void (__fastcall **)(ResourcePackStack *))(*(_DWORD *)v16 + 4);
        v26 = v16;
        goto LABEL_37;
      }
      ResourcePackManager::removeUnsupportedPacks(v38);
    }
    v52 = v16;
    ResourcePackManager::setStack(v37, (int *)&v52, 1, 0);
    if ( v52 )
      (*(void (**)(void))(*(_DWORD *)v52 + 4))();
    v52 = 0;
    ResourcePackManager::ensureSupportedSubpacks(v37);
    v58 = ResourcePackManager::canSupportPacks(v37);
        ResourcePackManager::getIncompatiblePacks((ResourcePackManager *)&v50, (int)v37);
        sub_1333E8C((int)&v55, &v50);
        v32 = v51;
        v31 = (PackReport *)v50;
        if ( v50 != (void *)v51 )
            v31 = (PackReport *)((char *)PackReport::~PackReport(v31) + 120);
          while ( v32 != v31 );
          v31 = (PackReport *)v50;
        if ( v31 )
          operator delete((void *)v31);
        goto LABEL_36;
      ResourcePackManager::removeUnsupportedPacks(v37);
    ResourcePackManager::forceStackCompose(v38);
    ResourcePackManager::forceStackCompose(v37);
    v40 = 2;
    v41 = 1;
    v42 = 0;
    v39 = &off_26D676C;
    v48 = 0;
    v44 = 0;
    v45 = 0;
    v46 = &v44;
    v47 = &v44;
    v49 = 4;
    (*(void (**)(void))(**((_DWORD **)v3 + 3) + 8))();
    std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
      (int)&v43,
      v45);
LABEL_36:
    v25 = *(void (__fastcall **)(ResourcePackStack *))(*(_DWORD *)v19 + 4);
    v26 = v19;
LABEL_37:
    v25(v26);
    goto LABEL_38;
  }
  v27 = *(void (__fastcall **)(ClientNetworkHandler *, const NetworkIdentifier *, int *, _DWORD))(*(_DWORD *)v3 + 24);
  sub_21E94B4((void **)&v61, "disconnectionScreen.resourcePack");
  v27(v3, v5, &v61, 0);
  v28 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v61 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
    else
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
LABEL_38:
  v34 = v63;
  v33 = (PackReport *)v62;
  if ( v62 != (void *)v63 )
    do
      v33 = (PackReport *)((char *)PackReport::~PackReport(v33) + 120);
    while ( v34 != v33 );
    v33 = (PackReport *)v62;
  if ( v33 )
    operator delete((void *)v33);
  v36 = v66;
  v35 = (PackReport *)v65;
  if ( v65 != (void *)v66 )
      v35 = (PackReport *)((char *)PackReport::~PackReport(v35) + 120);
    while ( v36 != v35 );
    v35 = (PackReport *)v65;
  if ( v35 )
    operator delete((void *)v35);
}


int __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const SetLastHurtByPacket *a3)
{
  const SetLastHurtByPacket *v3; // r4@1
  int v4; // r0@1

  v3 = a3;
  v4 = ClientInstance::getLocalPlayer(*((ClientInstance **)this + 1));
  return j_j_j__ZN6Player13setLastHurtByE10EntityType(v4, *((_DWORD *)v3 + 4));
}


signed int __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const EntityEventPacket *a3)
{
  ClientNetworkHandler *v3; // r5@1
  const EntityEventPacket *v4; // r4@1
  signed int result; // r0@1
  int v6; // r2@3
  int v7; // r1@3

  v3 = this;
  v4 = a3;
  result = Level::isUsableLevel(*((Level **)this + 6), a2);
  if ( result == 1 )
  {
    result = Level::getRuntimeEntity(*((_DWORD *)v3 + 6), 0, *((_QWORD *)v4 + 2), 0);
    if ( result )
    {
      v6 = *((_DWORD *)v4 + 7);
      v7 = *((_BYTE *)v4 + 24);
      result = (*(int (**)(void))(*(_DWORD *)result + 428))();
    }
  }
  return result;
}


Entity *__fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const UpdateEquipPacket *a3)
{
  ClientNetworkHandler *v3; // r4@1
  const UpdateEquipPacket *v4; // r5@1
  Entity *result; // r0@1
  int v6; // r4@3
  int v7; // r7@3
  unsigned int v8; // r1@4
  unsigned int *v9; // r0@4
  unsigned int v10; // r2@7
  unsigned int v11; // r3@8
  signed int v12; // r1@9
  int v13; // r6@13
  unsigned int *v14; // r2@16
  unsigned int v15; // r1@18
  unsigned int *v16; // r1@26
  unsigned int *v17; // r5@32
  int v18; // [sp+4h] [bp-1Ch]@3
  int v19; // [sp+8h] [bp-18h]@3

  v3 = this;
  v4 = a3;
  result = (Entity *)Level::isUsableLevel(*((Level **)this + 6), a2);
  if ( result == (Entity *)1 )
  {
    result = (Entity *)Level::fetchEntity(*((_DWORD *)v3 + 6), 0, *((_QWORD *)v4 + 3), *((_QWORD *)v4 + 3) >> 32, 0);
    if ( result )
    {
      Entity::setEquipFromPacket(result, v4);
      v6 = ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
      (*(void (**)(void))(*(_DWORD *)v6 + 1340))();
      result = (Entity *)Player::getContainerManager((Player *)&v18, v6);
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
              goto LABEL_13;
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
LABEL_13:
        result = (Entity *)v19;
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
            result = (Entity *)(*(int (**)(void))(*(_DWORD *)result + 12))();
        if ( v13 )
          result = (Entity *)(*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v13 + 12))(v13, *((_BYTE *)v4 + 13));
        if ( v7 )
          v16 = (unsigned int *)(v7 + 4);
              result = (Entity *)__ldrex(v16);
            while ( __strex((unsigned int)result - 1, v16) );
            result = (Entity *)(*v16)--;
          if ( result == (Entity *)1 )
            v17 = (unsigned int *)(v7 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
            if ( &pthread_create )
              __dmb();
              do
                result = (Entity *)__ldrex(v17);
              while ( __strex((unsigned int)result - 1, v17) );
            else
              result = (Entity *)(*v17)--;
            if ( result == (Entity *)1 )
              result = (Entity *)(*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
      }
    }
  }
  return result;
}


void __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const ShowProfilePacket *a3)
{
  ClientNetworkHandler::handle(this, a2, a3);
}


PlayerChunkSource *__fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const ChunkRadiusUpdatedPacket *a3)
{
  unsigned int v3; // r4@1
  Player *v4; // r0@1

  v3 = *((_DWORD *)a3 + 4) + 1;
  v4 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 1));
  return j_j_j__ZN6Player14setChunkRadiusEj_0(v4, v3);
}


Entity *__fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const BossEventPacket *a3)
{
  ClientNetworkHandler *v3; // r4@1
  const BossEventPacket *v4; // r6@1
  Entity *result; // r0@1
  Entity *v6; // r5@2
  int v7; // r0@3
  int v8; // r6@3
  Entity *v9; // r7@3
  __int64 *v10; // r0@6
  int v11; // r1@6
  void (__fastcall *v12)(Entity *); // r8@7
  __int64 v13; // r2@7
  __int64 v14; // r8@7
  __int64 v15; // kr00_8@7
  int v16; // r0@7
  char *v17; // r0@7
  unsigned int *v18; // r2@8
  signed int v19; // r1@10
  __int64 *v20; // r0@12
  int v21; // r1@12
  void (__fastcall *v22)(Entity *); // r8@13
  __int64 v23; // r2@13
  __int64 v24; // r8@13
  __int64 v25; // kr08_8@13
  int v26; // r0@13
  void **v27; // [sp+8h] [bp-A0h]@13
  signed int v28; // [sp+Ch] [bp-9Ch]@13
  signed int v29; // [sp+10h] [bp-98h]@13
  char v30; // [sp+14h] [bp-94h]@13
  signed int v31; // [sp+18h] [bp-90h]@13
  signed int v32; // [sp+1Ch] [bp-8Ch]@13
  __int64 v33; // [sp+20h] [bp-88h]@13
  __int64 v34; // [sp+28h] [bp-80h]@13
  char *v35; // [sp+34h] [bp-74h]@13
  void **v36; // [sp+48h] [bp-60h]@7
  signed int v37; // [sp+4Ch] [bp-5Ch]@7
  signed int v38; // [sp+50h] [bp-58h]@7
  char v39; // [sp+54h] [bp-54h]@7
  signed int v40; // [sp+58h] [bp-50h]@7
  signed int v41; // [sp+5Ch] [bp-4Ch]@7
  __int64 v42; // [sp+60h] [bp-48h]@7
  __int64 v43; // [sp+68h] [bp-40h]@7
  char *v44; // [sp+74h] [bp-34h]@7

  v3 = this;
  v4 = a3;
  result = (Entity *)Level::isUsableLevel(*((Level **)this + 6), a2);
  if ( result == (Entity *)1 )
  {
    result = (Entity *)Level::fetchEntity(*((_DWORD *)v3 + 6), 0, *((_QWORD *)v4 + 3), *((_QWORD *)v4 + 3) >> 32, 0);
    v6 = result;
    if ( result )
    {
      v7 = ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
      v8 = *((_DWORD *)v4 + 10);
      v9 = (Entity *)v7;
      if ( !v7 )
        return (Entity *)Level::broadcastBossEvent(*((_DWORD *)v3 + 6));
      if ( v8 == 2 )
      {
        v20 = (__int64 *)Entity::getUniqueID(v6);
        if ( LocalPlayer::hasBossRegistered((int)v9, v21, *v20) != 1 )
          return (Entity *)Level::broadcastBossEvent(*((_DWORD *)v3 + 6));
        v22 = *(void (__fastcall **)(Entity *))(*(_DWORD *)v9 + 1428);
        v23 = *(_QWORD *)Entity::getUniqueID(v6);
        v22(v9);
        v24 = *(_QWORD *)Entity::getUniqueID(v6);
        v25 = *(_QWORD *)Entity::getUniqueID(v9);
        v28 = 2;
        v29 = 1;
        v30 = 0;
        v27 = &off_26E6444;
        v31 = 1;
        v32 = 2;
        v33 = v24;
        v34 = v25;
        v35 = (char *)&unk_28898CC;
        v26 = Level::getPacketSender(*((Level **)v3 + 6));
        (*(void (**)(void))(*(_DWORD *)v26 + 8))();
        v17 = v35 - 12;
        if ( (int *)(v35 - 12) == &dword_28898C0 )
        v18 = (unsigned int *)(v35 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          goto LABEL_21;
        }
      }
      else
        if ( v8 )
        v10 = (__int64 *)Entity::getUniqueID(v6);
        if ( LocalPlayer::hasBossRegistered((int)v9, v11, *v10) )
        v12 = *(void (__fastcall **)(Entity *))(*(_DWORD *)v9 + 1424);
        v13 = *(_QWORD *)Entity::getUniqueID(v6);
        v12(v9);
        v14 = *(_QWORD *)Entity::getUniqueID(v6);
        v15 = *(_QWORD *)Entity::getUniqueID(v9);
        v37 = 2;
        v38 = 1;
        v39 = 0;
        v36 = &off_26E6444;
        v40 = 1;
        v41 = 2;
        v42 = v14;
        v43 = v15;
        v44 = (char *)&unk_28898CC;
        v16 = Level::getPacketSender(*((Level **)v3 + 6));
        (*(void (**)(void))(*(_DWORD *)v16 + 8))();
        v17 = v44 - 12;
        if ( (int *)(v44 - 12) == &dword_28898C0 )
        v18 = (unsigned int *)(v44 - 4);
      v19 = (*v18)--;
LABEL_21:
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
      return (Entity *)Level::broadcastBossEvent(*((_DWORD *)v3 + 6));
    }
  }
  return result;
}


void __fastcall ClientNetworkHandler::onDisconnect(int a1, int a2, const void **a3, int a4)
{
  ClientNetworkHandler::onDisconnect(a1, a2, a3, a4);
}


void __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const ShowCreditsPacket *a3)
{
  ClientNetworkHandler::handle(this, a2, a3);
}


void __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const ModalFormRequestPacket *a3)
{
  ClientNetworkHandler::handle(this, a2, a3);
}


void __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const TextPacket *a3)
{
  ClientNetworkHandler::handle(this, a2, a3);
}


signed int __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const GuiDataPickItemPacket *a3)
{
  ClientNetworkHandler *v3; // r5@1
  const GuiDataPickItemPacket *v4; // r4@1
  signed int result; // r0@1
  int v6; // r6@3
  void *v7; // r0@3
  GuiData *v8; // r0@4
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  int v11; // [sp+0h] [bp-20h]@3

  v3 = this;
  v4 = a3;
  result = Level::isUsableLevel(*((Level **)this + 6), a2);
  if ( result == 1 )
  {
    result = ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
    if ( result )
    {
      v6 = ClientInstance::getGuiData(*((ClientInstance **)v3 + 1));
      I18n::get(&v11, (int **)v4 + 4);
      GuiData::showPopupNotice(v6, (int **)&v11, (int *)v4 + 5);
      v7 = (void *)(v11 - 12);
      if ( (int *)(v11 - 12) != &dword_28898C0 )
      {
        v9 = (unsigned int *)(v11 - 4);
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
          j_j_j_j__ZdlPv_9(v7);
      }
      v8 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)v3 + 1));
      result = GuiData::flashSlot(v8, *((_DWORD *)v4 + 6));
    }
  }
  return result;
}


_QWORD *__fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const ServerSettingsResponsePacket *a3)
{
  const ServerSettingsResponsePacket *v3; // r4@1
  int v4; // r0@1

  v3 = a3;
  v4 = ClientInstance::getGuiData(*((ClientInstance **)this + 1));
  return j_j_j__ZN7GuiData17setServerSettingsEjRKSs(v4, *((_DWORD *)v3 + 4), (int *)v3 + 5);
}


unsigned int __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const CraftingDataPacket *a3)
{
  const CraftingDataPacket *v3; // r5@1
  ClientNetworkHandler *v4; // r8@1
  FurnaceRecipes *v5; // r6@1
  FurnaceRecipes *v6; // r7@1
  int v7; // r0@3
  int v8; // r9@3
  unsigned int v9; // r1@4
  unsigned int *v10; // r0@4
  unsigned int v11; // r2@7
  unsigned int v12; // r3@8
  unsigned int v13; // r0@9
  int v14; // r0@11
  unsigned int *v15; // r2@12
  unsigned int v16; // r1@14
  __int64 i; // r4@20
  int v18; // r0@29
  unsigned int result; // r0@29
  unsigned int *v20; // r1@30
  unsigned int *v21; // r4@36
  char v22; // [sp+4h] [bp-24h]@3
  int v23; // [sp+8h] [bp-20h]@3

  v3 = a3;
  v4 = this;
  v5 = Recipes::getInstance(this);
  v6 = FurnaceRecipes::getInstance(v5);
  if ( *((_BYTE *)v3 + 28) )
  {
    Recipes::clearRecipes(v5);
    FurnaceRecipes::clearFurnaceRecipes(v6);
  }
  v7 = ClientInstance::getLocalPlayer(*((ClientInstance **)v4 + 1));
  Player::getContainerManager((Player *)&v22, v7);
  v8 = v23;
  if ( v23 )
    v9 = *(_DWORD *)(v23 + 4);
    v10 = (unsigned int *)(v23 + 4);
    while ( v9 )
    {
      __dmb();
      v11 = __ldrex(v10);
      if ( v11 == v9 )
      {
        v12 = __strex(v9 + 1, v10);
        v9 = v11;
        if ( !v12 )
        {
          __dmb();
          v13 = *v10;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
    v8 = 0;
LABEL_11:
    v14 = v23;
    if ( v23 )
      v15 = (unsigned int *)(v23 + 8);
      if ( &pthread_create )
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (**)(void))(*(_DWORD *)v14 + 12))();
  else
  for ( i = *((_QWORD *)v3 + 2); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 96 )
    switch ( *(_DWORD *)(i + 88) )
      case 0:
        CraftingDataEntry::addShapelessRecipe((CraftingDataEntry *)i, v5);
        break;
      case 1:
        CraftingDataEntry::addShapedRecipe((CraftingDataEntry *)i, v5);
      case 2:
        CraftingDataEntry::addFurnaceRecipe((CraftingDataEntry *)i, v6);
      case 3:
        CraftingDataEntry::addFurnaceAuxRecipe((CraftingDataEntry *)i, v6);
      case 4:
        CraftingDataEntry::addMultiRecipe((CraftingDataEntry *)i, v5);
      case 5:
        CraftingDataEntry::addShulkerBoxRecipe((CraftingDataEntry *)i, v5);
      default:
        continue;
  v18 = ClientInstance::getScreen(*((ClientInstance **)v4 + 1));
  result = (*(int (**)(void))(*(_DWORD *)v18 + 24))();
  if ( v8 )
    v20 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
      do
        result = __ldrex(v20);
      while ( __strex(result - 1, v20) );
    else
      result = (*v20)--;
    if ( result == 1 )
      v21 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          result = __ldrex(v21);
        while ( __strex(result - 1, v21) );
        result = (*v21)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return result;
}


void __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const SetPlayerGameTypePacket *a3)
{
  ClientNetworkHandler *v3; // r6@1
  const SetPlayerGameTypePacket *v4; // r4@1
  Level *v5; // r1@1
  int v6; // r5@1

  v3 = this;
  v4 = a3;
  v6 = ClientInstance::getLocalPlayer(*((ClientInstance **)this + 1));
  if ( v6 )
  {
    if ( Level::isUsableLevel(*((Level **)v3 + 6), v5) == 1 )
      j_j_j__ZN11LocalPlayer42setPlayerGameTypeWithoutServerNotificationE8GameType(v6, *((_DWORD *)v4 + 4));
  }
}


void __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const WSConnectPacket *a3)
{
  ClientNetworkHandler::handle(this, a2, a3);
}


void __fastcall ClientNetworkHandler::onStoreOfferReceive(int a1, int a2, const void **a3)
{
  ClientNetworkHandler::onStoreOfferReceive(a1, a2, a3);
}


void __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const ShowProfilePacket *a3)
{
  ClientInstance::showPlayerProfile(*((_DWORD *)this + 1), (int *)a3 + 4, *(__int64 *)&mce::UUID::EMPTY, qword_287E930);
}


signed int __fastcall ClientNetworkHandler::_verifySharedIdentityToken(int a1, int *a2)
{
  int v2; // r4@1
  _DWORD *v3; // r5@2
  _DWORD *v4; // r7@2
  const void **v5; // r0@3
  const void **v6; // r0@3
  const void **v7; // r0@3
  char *v8; // r0@3
  char *v9; // r0@4
  void *v10; // r0@5
  void *v11; // r0@6
  const void **v12; // r5@8
  MinecraftGame *v13; // r0@8
  const void *v14; // r1@8
  size_t v15; // r2@8
  signed int v16; // r9@10
  void *v17; // r0@17
  void *v18; // r0@18
  char *v19; // r0@19
  void *v20; // r0@20
  unsigned int *v21; // r2@24
  signed int v22; // r1@26
  int *v23; // r0@32
  int v25; // r4@38
  void *v26; // r0@38
  int v27; // r0@39
  int *v28; // r4@39
  int v29; // r5@39
  signed int v30; // r5@43
  struct tm *v31; // r0@43
  unsigned int *v32; // r2@46
  signed int v33; // r1@48
  unsigned int *v34; // r2@50
  signed int v35; // r1@52
  unsigned int *v36; // r2@54
  signed int v37; // r1@56
  unsigned int *v38; // r2@58
  signed int v39; // r1@60
  unsigned int *v40; // r2@62
  signed int v41; // r1@64
  unsigned int *v42; // r2@66
  signed int v43; // r1@68
  unsigned int *v44; // r2@70
  signed int v45; // r1@72
  unsigned int *v46; // r2@74
  signed int v47; // r1@76
  unsigned int *v48; // r2@112
  signed int v49; // r1@114
  time_t timer; // [sp+4h] [bp-94h]@43
  int v51; // [sp+Ch] [bp-8Ch]@38
  struct tm tp; // [sp+10h] [bp-88h]@38
  void **v53; // [sp+3Ch] [bp-5Ch]@7
  int v54; // [sp+40h] [bp-58h]@17
  int v55; // [sp+44h] [bp-54h]@15
  int v56; // [sp+48h] [bp-50h]@6
  int v57; // [sp+50h] [bp-48h]@6
  int v58; // [sp+54h] [bp-44h]@3
  char *v59; // [sp+58h] [bp-40h]@3
  char *v60; // [sp+5Ch] [bp-3Ch]@3
  char *v61; // [sp+60h] [bp-38h]@3
  int v62; // [sp+64h] [bp-34h]@3
  int v63; // [sp+68h] [bp-30h]@2
  _DWORD *v64; // [sp+6Ch] [bp-2Ch]@2

  v2 = a1;
  if ( *(_DWORD *)(*a2 - 12) )
  {
    Util::split((int)&v63, a2, 124);
    v3 = v64;
    v4 = (_DWORD *)v63;
    if ( (_DWORD *)((char *)v64 - v63) == (_DWORD *)16 )
    {
      sub_21E8AF4(&v62, (int *)(v63 + 12));
      sub_21E8AF4(&v58, (int *)v63);
      sub_21E7408((const void **)&v58, "|", 1u);
      v5 = sub_21E72F0((const void **)&v58, (const void **)(v63 + 4));
      v59 = (char *)*v5;
      *v5 = &unk_28898CC;
      v6 = sub_21E7408((const void **)&v59, "|", 1u);
      v60 = (char *)*v6;
      *v6 = &unk_28898CC;
      v7 = sub_21E72F0((const void **)&v60, (const void **)(v63 + 8));
      v61 = (char *)*v7;
      *v7 = &unk_28898CC;
      v8 = v60 - 12;
      if ( (int *)(v60 - 12) != &dword_28898C0 )
      {
        v32 = (unsigned int *)(v60 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
        }
        else
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      }
      v9 = v59 - 12;
      if ( (int *)(v59 - 12) != &dword_28898C0 )
        v34 = (unsigned int *)(v59 - 4);
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
          v35 = (*v34)--;
        if ( v35 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      v10 = (void *)(v58 - 12);
      if ( (int *)(v58 - 12) != &dword_28898C0 )
        v36 = (unsigned int *)(v58 - 4);
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      sub_21E94B4(
        (void **)&v57,
        "MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDsFCr3nD8N3TJxJZ7Y4g1Z20Son+fUWTSd2f/XyIil2mGGGx/yjRj6l0ntbROsec8MZoaLsBG0"
        "nWm9/WhJcdXvJewbdd+mCyy7WXyYQgJcJPZP3kgBDySZMUnaowlUmR9gxRr+LevCafZKQwb19nwJB0EUt+nQsWBbTe2SuIdCqQIDAQAB");
      Util::fromHex(&v56, &v62);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v62, &v56);
      v11 = (void *)(v56 - 12);
      if ( (int *)(v56 - 12) != &dword_28898C0 )
        v38 = (unsigned int *)(v56 - 4);
            v39 = __ldrex(v38);
          while ( __strex(v39 - 1, v38) );
          v39 = (*v38)--;
        if ( v39 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      KeyManager::KeyManager((int)&v53, &v57, 0);
      if ( KeyManager::verify((int)&v53) )
        v12 = (const void **)v63;
        v13 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(v2 + 4));
        v14 = *(const void **)(MinecraftGame::getActiveDirectoryIdentity(v13) + 60);
        v15 = *((_DWORD *)*v12 - 3);
        if ( v15 == *((_DWORD *)v14 - 3) )
          if ( !memcmp(*v12, v14, v15) )
          {
            _aeabi_memclr8(&tp, 44);
            v25 = v63;
            sub_21E94B4((void **)&v51, "%Y-%m-%dT%H:%M:%S");
            getTimeFromString((int *)(v25 + 8), &v51);
            v26 = (void *)(v51 - 12);
            if ( (int *)(v51 - 12) != &dword_28898C0 )
            {
              v48 = (unsigned int *)(v51 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v49 = __ldrex(v48);
                while ( __strex(v49 - 1, v48) );
              }
              else
                v49 = (*v48)--;
              if ( v49 <= 0 )
                j_j_j_j__ZdlPv_9(v26);
            }
            v28 = (int *)(v63 + 8);
            v27 = *(_DWORD *)(v63 + 8);
            v29 = *(_DWORD *)(v27 - 12);
            if ( v29 )
              if ( *(_DWORD *)(v27 - 4) >= 0 )
                sub_21E8010((const void **)(v63 + 8));
                v27 = *v28;
              if ( (*(_BYTE *)(v27 + v29 - 1) | 0x20) == 122 )
                v30 = mktime(&tp);
                timer = time(0);
                v31 = gmtime(&timer);
                v16 = 0;
                if ( (signed int)mktime(v31) < v30 )
                  v16 = 1;
            else
              v16 = 0;
          }
          else
            v16 = 0;
          v16 = 0;
      else
        v16 = 0;
      v53 = &off_26D4D8C;
      if ( v55 )
        (*(void (**)(void))(*(_DWORD *)v55 + 4))();
      v55 = 0;
      v17 = (void *)(v54 - 12);
      if ( (int *)(v54 - 12) != &dword_28898C0 )
        v40 = (unsigned int *)(v54 - 4);
            v41 = __ldrex(v40);
          while ( __strex(v41 - 1, v40) );
          v41 = (*v40)--;
        if ( v41 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      v18 = (void *)(v57 - 12);
      if ( (int *)(v57 - 12) != &dword_28898C0 )
        v42 = (unsigned int *)(v57 - 4);
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
          v43 = (*v42)--;
        if ( v43 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      v19 = v61 - 12;
      if ( (int *)(v61 - 12) != &dword_28898C0 )
        v44 = (unsigned int *)(v61 - 4);
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
          v45 = (*v44)--;
        if ( v45 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v20 = (void *)(v62 - 12);
      if ( (int *)(v62 - 12) != &dword_28898C0 )
        v46 = (unsigned int *)(v62 - 4);
            v47 = __ldrex(v46);
          while ( __strex(v47 - 1, v46) );
          v47 = (*v46)--;
        if ( v47 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      v3 = v64;
      v4 = (_DWORD *)v63;
    }
    else
      v16 = 0;
    if ( v4 != v3 )
      do
        v23 = (int *)(*v4 - 12);
        if ( v23 != &dword_28898C0 )
          v21 = (unsigned int *)(*v4 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v23);
        ++v4;
      while ( v4 != v3 );
      v3 = (_DWORD *)v63;
    if ( v3 )
      operator delete(v3);
  }
  else
    v16 = 0;
  return v16;
}


void __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const AvailableCommandsPacket *a3, int a4, void *a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, void *a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, void *a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, char a44)
{
  ClientNetworkHandler::handle(
    this,
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
    a44);
}


void __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const TransferPacket *a3)
{
  const TransferPacket *v3; // r5@1
  ClientNetworkHandler *v4; // r10@1
  int v5; // r8@1
  MinecraftGame *v6; // r0@1
  ClientInstance *v7; // r0@1
  MinecraftGame *v8; // r0@2
  ClientInstance *v9; // r0@2
  Minecraft *v10; // r0@2
  NetworkHandler *v11; // r0@2
  int v12; // r0@2
  char v13; // r6@4
  MinecraftGame *v14; // r0@5
  int v15; // r0@5
  int v16; // r9@6
  _DWORD *v17; // r6@6
  int *v18; // r2@6
  unsigned int v19; // r1@6
  int v20; // r0@6
  bool v21; // zf@6
  int v22; // r3@6
  int v23; // r5@6
  int v24; // r5@7
  void *v25; // r1@11
  void *v26; // r1@11
  char *v27; // r0@13
  MinecraftGame *v28; // r0@14
  void *v29; // r0@15
  unsigned int *v30; // r2@17
  signed int v31; // r1@19
  unsigned int *v32; // r2@21
  signed int v33; // r1@23
  int *v34; // [sp+4h] [bp-BCh]@6
  unsigned int v35; // [sp+8h] [bp-B8h]@6
  int v36; // [sp+Ch] [bp-B4h]@6
  int v37; // [sp+10h] [bp-B0h]@6
  int v38; // [sp+14h] [bp-ACh]@6
  int v39; // [sp+18h] [bp-A8h]@6
  int v40; // [sp+1Ch] [bp-A4h]@6
  void *v41; // [sp+20h] [bp-A0h]@11
  void *v42; // [sp+24h] [bp-9Ch]@11
  char v43; // [sp+28h] [bp-98h]@11
  char v44; // [sp+2Ch] [bp-94h]@6
  char *v45; // [sp+30h] [bp-90h]@6
  int v46; // [sp+34h] [bp-8Ch]@6
  _DWORD *v47; // [sp+38h] [bp-88h]@11
  void (*v48)(void); // [sp+40h] [bp-80h]@6
  void (__fastcall *v49)(int *, ClientInstance *); // [sp+44h] [bp-7Ch]@11
  char v50; // [sp+48h] [bp-78h]@5
  int v51; // [sp+64h] [bp-5Ch]@5
  int v52; // [sp+68h] [bp-58h]@5
  char v53; // [sp+6Ch] [bp-54h]@5
  char v54; // [sp+70h] [bp-50h]@2
  int v55; // [sp+8Ch] [bp-34h]@5
  int v56; // [sp+90h] [bp-30h]@5
  char v57; // [sp+94h] [bp-2Ch]@5
  int v58; // [sp+98h] [bp-28h]@1

  v3 = a3;
  v4 = this;
  sub_21E8AF4(&v58, (int *)a3 + 4);
  v5 = *((_DWORD *)v3 + 5);
  v6 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)v4 + 1));
  v7 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(v6);
  if ( ClientInstance::getLevel(v7) )
  {
    v8 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)v4 + 1));
    v9 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(v8);
    v10 = (Minecraft *)ClientInstance::getServerData(v9);
    v11 = (NetworkHandler *)Minecraft::getNetworkHandler(v10);
    v12 = NetworkHandler::getConnectionInfo(v11);
    ThirdPartyInfo::ThirdPartyInfo((int)&v54, v12 + 20);
    if ( ThirdPartyInfo::isValid((ThirdPartyInfo *)&v54) == 1 && ThirdPartyInfo::isEligible((int)&v54, &v58) )
    {
      v13 = 0;
    }
    else
      v14 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)v4 + 1));
      v15 = MinecraftGame::getThirdPartyServerRepository(v14);
      ThirdPartyServerRepository::findThirdPartyInfoForUrl((int)&v50, v15, &v58);
      std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_move_assign(
        (int)&v54,
        (int)&v50);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v55, &v51);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v56, &v52);
      v57 = v53;
      ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)&v50);
      v13 = ThirdPartyInfo::isXblRequired((ThirdPartyInfo *)&v54);
    v16 = ClientInstance::getMinecraftGame(*((ClientInstance **)v4 + 1));
    ThirdPartyInfo::ThirdPartyInfo((int)&v34, (int)&v54);
    v44 = v13;
    sub_21E8AF4((int *)&v45, &v58);
    v46 = v5;
    v48 = 0;
    v17 = operator new(0x34u);
    v18 = v34;
    v19 = v35;
    v20 = v36;
    v21 = &v40 == v34;
    v22 = v37;
    *v17 = v34;
    v17[1] = v19;
    v17[2] = v20;
    v17[3] = v22;
    v23 = v39;
    v17[4] = v38;
    v17[5] = v23;
    if ( v21 )
      v24 = (int)(v17 + 6);
      *v17 = v17 + 6;
      v17[6] = *v18;
      v24 = (int)v18;
    if ( v20 )
      *(_DWORD *)(v24 + 4 * (*(_DWORD *)(v20 + 8) % v19)) = v17 + 2;
    v39 = 0;
    v35 = 1;
    v40 = 0;
    v34 = &v40;
    v36 = 0;
    v37 = 0;
    v25 = v41;
    v41 = &unk_28898CC;
    v17[7] = v25;
    v26 = v42;
    v42 = &unk_28898CC;
    v17[8] = v26;
    *((_BYTE *)v17 + 36) = v43;
    *((_BYTE *)v17 + 40) = v44;
    v17[11] = v45;
    v45 = (char *)&unk_28898CC;
    v17[12] = v5;
    v47 = v17;
    v48 = (void (*)(void))sub_133983C;
    v49 = sub_1338D7C;
    MinecraftGame::setTransferCallback(v16, (int)&v47);
    if ( v48 )
      v48();
    v27 = v45 - 12;
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v45 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
      }
      else
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)&v34);
    v28 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)v4 + 1));
    MinecraftGame::requestLeaveGame(v28, 1, 0);
    ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)&v54);
  }
  v29 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v58 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
}


void __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const SetTitlePacket *a3)
{
  const SetTitlePacket *v3; // r5@1
  GuiData *v4; // r4@1
  void *v5; // r0@8
  void *v6; // r0@9
  unsigned int *v7; // r2@11
  signed int v8; // r1@13
  unsigned int *v9; // r2@15
  signed int v10; // r1@17
  int v11; // [sp+0h] [bp-28h]@1
  int v12; // [sp+4h] [bp-24h]@1

  v3 = a3;
  v4 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)this + 1));
  sub_21E8AF4(&v12, (int *)&Util::EMPTY_STRING);
  sub_21E8AF4(&v11, (int *)&Util::EMPTY_STRING);
  switch ( *((_DWORD *)v3 + 4) )
  {
    case 0:
      GuiData::clearTitle(v4);
      break;
    case 4:
      GuiData::setActionBarMessage((int)v4, (int *)v3 + 5);
    case 2:
      GuiData::setTitle((int)v4);
    case 3:
      GuiData::setSubtitle((int)v4, (int *)v3 + 5);
    case 1:
      GuiData::resetTitle(v4);
    case 5:
      GuiData::setTitleAnimationTimes(v4, *((_DWORD *)v3 + 6), *((_DWORD *)v3 + 7), *((_DWORD *)v3 + 8));
    default:
  }
  v5 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v12 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
}


signed int __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const PlaySoundPacket *a3)
{
  ClientNetworkHandler *v3; // r5@1
  signed int result; // r0@1
  int v10; // [sp+0h] [bp-20h]@0
  float v11; // [sp+4h] [bp-1Ch]@2

  v3 = this;
  _R4 = a3;
  result = Level::isUsableLevel(*((Level **)this + 6), a2);
  if ( result == 1 )
  {
    __asm
    {
      VLDR            S0, [R4,#0x14]
      VMOV.F32        S6, #0.125
      VLDR            S2, [R4,#0x18]
      VLDR            S4, [R4,#0x1C]
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VMUL.F32        S0, S0, S6
      VMUL.F32        S2, S2, S6
      VMUL.F32        S4, S4, S6
      VSTR            S0, [SP,#0x20+var_1C]
      VSTR            S2, [SP,#0x20+var_18]
      VSTR            S4, [SP,#0x20+var_14]
      VLDR            S0, [R4,#0x24]
      VSTR            S0, [SP,#0x20+var_20]
    }
    result = Level::handleSoundEvent(*((float *)v3 + 6), (int)_R4 + 16, (int)&v11, *((_DWORD *)_R4 + 8), v10);
  }
  return result;
}


Entity *__fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const CommandOutputPacket *a3)
{
  ClientNetworkHandler *v3; // r5@1
  const CommandOutputPacket *v4; // r4@1
  const NetworkIdentifier *v5; // r6@1
  Entity *result; // r0@1
  char *v7; // r0@2
  const CommandOrigin *v8; // r6@2
  MinecraftCommands *v9; // r5@3
  char *v10; // r0@3
  Entity *v11; // [sp+4h] [bp-14h]@2

  v3 = this;
  v4 = a3;
  v5 = a2;
  result = (Entity *)Level::isUsableLevel(*((Level **)this + 6), a2);
  if ( result == (Entity *)1 )
  {
    v7 = CommandOutputPacket::getOriginData(v4);
    result = CommandOrigin::fromCommandOriginData((int)&v11, (int)v7, *((Level **)v3 + 6), (int)v5, *((_BYTE *)v4 + 12));
    v8 = v11;
    if ( v11 )
    {
      v9 = (MinecraftCommands *)*((_DWORD *)v3 + 5);
      v10 = CommandOutputPacket::getOutput(v4);
      MinecraftCommands::handleOutput(v9, v8, (const CommandOutput *)v10);
      result = v11;
      if ( v11 )
        result = (Entity *)(*(int (**)(void))(*(_DWORD *)v11 + 4))();
    }
  }
  return result;
}


int __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const PlayStatusPacket *a3)
{
  const PlayStatusPacket *v3; // r6@1
  ClientNetworkHandler *v4; // r4@1
  int result; // r0@1
  const NetworkIdentifier *v6; // r5@1
  MinecraftGame *v7; // r0@2
  void (__fastcall *v8)(ClientNetworkHandler *, const NetworkIdentifier *, int *, _DWORD); // r6@3
  void *v9; // r0@3
  unsigned int *v10; // r2@4
  signed int v11; // r1@6
  int v12; // r0@9
  ClientInstance *v13; // r7@9
  MinecraftGame *v14; // r6@9
  Player *v15; // r0@9
  int v16; // r0@9
  int v17; // r0@9
  void (__fastcall *v18)(ClientNetworkHandler *, const NetworkIdentifier *, int *, _DWORD); // r6@10
  void (__fastcall *v19)(ClientNetworkHandler *, const NetworkIdentifier *, int *, _DWORD); // r6@19
  void (__fastcall *v20)(ClientNetworkHandler *, const NetworkIdentifier *, int *, _DWORD); // r6@24
  void (__fastcall *v21)(ClientNetworkHandler *, const NetworkIdentifier *, int *, _DWORD); // r6@29
  MinecraftGame *v22; // r0@37
  int v23; // r0@37
  int v24; // [sp+4h] [bp-3Ch]@29
  int v25; // [sp+Ch] [bp-34h]@24
  int v26; // [sp+14h] [bp-2Ch]@19
  int v27; // [sp+1Ch] [bp-24h]@3
  int v28; // [sp+24h] [bp-1Ch]@10

  v3 = a3;
  v4 = this;
  result = *((_DWORD *)a3 + 4);
  v6 = a2;
  switch ( result )
  {
    case 0:
      *((_BYTE *)v4 + 29) = 1;
      v7 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)v4 + 1));
      return j_j_j__ZN13MinecraftGame30setHasConnectionToRemoteServerEb(v7, *((_BYTE *)v4 + 29));
    case 2:
      v8 = *(void (__fastcall **)(ClientNetworkHandler *, const NetworkIdentifier *, int *, _DWORD))(*(_DWORD *)v4 + 24);
      sub_21E94B4((void **)&v27, "disconnectionScreen.outdatedServer");
      v8(v4, v6, &v27, 0);
      v9 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) == &dword_28898C0 )
        goto LABEL_37;
      v10 = (unsigned int *)(v27 - 4);
      if ( !&pthread_create )
        goto LABEL_34;
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      goto LABEL_35;
    case 3:
      if ( ClientInstance::getLocalPlayer(*((ClientInstance **)v4 + 1)) )
      {
        v12 = ClientInstance::getMinecraftGame(*((ClientInstance **)v4 + 1));
        v13 = (ClientInstance *)*((_DWORD *)v4 + 1);
        v14 = (MinecraftGame *)v12;
        v15 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)v4 + 1));
        MinecraftGame::onPlayerLoaded(v14, v13, v15);
        v16 = ClientInstance::getLocalPlayer(*((ClientInstance **)v4 + 1));
        (*(void (**)(void))(*(_DWORD *)v16 + 1240))();
        v17 = ClientInstance::getLocalPlayer(*((ClientInstance **)v4 + 1));
        (*(void (**)(void))(*(_DWORD *)v17 + 1420))();
        return (*(int (__fastcall **)(ClientNetworkHandler *, const NetworkIdentifier *))(*(_DWORD *)v4 + 480))(v4, v6);
      }
      result = *((_DWORD *)v3 + 4);
def_13344FE:
      if ( result == 6 )
        v21 = *(void (__fastcall **)(ClientNetworkHandler *, const NetworkIdentifier *, int *, _DWORD))(*(_DWORD *)v4 + 24);
        sub_21E94B4((void **)&v24, "disconnectionScreen.editionMismatchVanillaToEdu");
        v21(v4, v6, &v24, 0);
        v9 = (void *)(v24 - 12);
        if ( (int *)(v24 - 12) == &dword_28898C0 )
          goto LABEL_37;
        v10 = (unsigned int *)(v24 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          goto LABEL_35;
        }
      if ( result == 5 )
        v20 = *(void (__fastcall **)(ClientNetworkHandler *, const NetworkIdentifier *, int *, _DWORD))(*(_DWORD *)v4 + 24);
        sub_21E94B4((void **)&v25, "disconnectionScreen.editionMismatchEduToVanilla");
        v20(v4, v6, &v25, 0);
        v9 = (void *)(v25 - 12);
        if ( (int *)(v25 - 12) == &dword_28898C0 )
        v10 = (unsigned int *)(v25 - 4);
      if ( result != 4 )
        return result;
      v19 = *(void (__fastcall **)(ClientNetworkHandler *, const NetworkIdentifier *, int *, _DWORD))(*(_DWORD *)v4 + 24);
      sub_21E94B4((void **)&v26, "disconnectionScreen.invalidTenant");
      v19(v4, v6, &v26, 0);
      v9 = (void *)(v26 - 12);
      if ( (int *)(v26 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v26 - 4);
LABEL_34:
        v11 = (*v10)--;
LABEL_35:
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
LABEL_37:
      v22 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)v4 + 1));
      v23 = MinecraftGame::getEventing(v22);
      return MinecraftEventing::fireEventConnectionFailed(v23, 1);
    case 1:
      v18 = *(void (__fastcall **)(ClientNetworkHandler *, const NetworkIdentifier *, int *, _DWORD))(*(_DWORD *)v4 + 24);
      sub_21E94B4((void **)&v28, "disconnectionScreen.outdatedClient");
      v18(v4, v6, &v28, 0);
      v9 = (void *)(v28 - 12);
      if ( (int *)(v28 - 12) == &dword_28898C0 )
      v10 = (unsigned int *)(v28 - 4);
    default:
      goto def_13344FE;
  }
}


int __fastcall ClientNetworkHandler::ClientNetworkHandler(int result, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r12@1

  v6 = result + 8;
  *(_DWORD *)result = &off_26E61E0;
  *(_DWORD *)(result + 4) = a5;
  *(_DWORD *)v6 = a2;
  *(_DWORD *)(v6 + 4) = a3;
  *(_DWORD *)(v6 + 8) = a4;
  *(_DWORD *)(v6 + 12) = a6;
  *(_DWORD *)(result + 24) = 0;
  *(_WORD *)(result + 28) = 0;
  return result;
}


RakNet *__fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const ResourcePackDataInfoPacket *a3)
{
  ClientNetworkHandler *v3; // r4@1
  NetworkIdentifier *v4; // r8@1
  const ResourcePackDataInfoPacket *v5; // r10@1
  int **v6; // r7@1
  unsigned int v7; // r5@1
  void *v8; // r0@2
  int v9; // r2@3
  unsigned int v10; // r3@3
  void *v11; // r0@4
  char v12; // r2@5
  int v13; // r3@5
  int v14; // r3@5
  int v15; // r5@5
  int v16; // r6@5
  int v17; // r7@5
  void *v18; // r5@5
  __int64 v19; // kr00_8@5
  int v20; // r0@5
  int v21; // r2@5
  int v22; // r3@5
  int v23; // r6@5
  int v24; // r7@5
  ClientNetworkHandler *v25; // r11@5
  char *v26; // r0@7
  void *v27; // r0@8
  void *v28; // r0@9
  __int64 v29; // r2@10
  int v30; // r2@10
  int v31; // r3@10
  int v32; // r6@10
  int v33; // r7@10
  void *v34; // r7@10
  __int64 v35; // r2@10
  int v36; // r1@10
  int v37; // r0@10
  int v38; // r2@10
  int v39; // r3@10
  int v40; // r4@10
  int v41; // r6@10
  char *v42; // r0@12
  void *v43; // r0@13
  void *v44; // r0@14
  int v45; // r4@15
  void *v46; // r0@15
  void *v47; // r0@16
  char *v48; // r0@17
  RakNet *result; // r0@18
  unsigned int *v50; // r2@20
  signed int v51; // r1@22
  unsigned int *v52; // r2@24
  signed int v53; // r1@26
  unsigned int *v54; // r2@28
  signed int v55; // r1@30
  unsigned int *v56; // r2@32
  signed int v57; // r1@34
  unsigned int *v58; // r2@36
  signed int v59; // r1@38
  unsigned int *v60; // r2@40
  signed int v61; // r1@42
  unsigned int *v62; // r2@44
  signed int v63; // r1@46
  unsigned int *v64; // r2@48
  signed int v65; // r1@50
  unsigned int *v66; // r2@52
  signed int v67; // r1@54
  unsigned int *v68; // r2@56
  signed int v69; // r1@58
  unsigned int *v70; // r2@60
  signed int v71; // r1@62
  int v72; // [sp+4h] [bp-1ACh]@0
  int *v73; // [sp+24h] [bp-18Ch]@5
  int *v74; // [sp+28h] [bp-188h]@5
  int v75; // [sp+30h] [bp-180h]@5
  int v76; // [sp+34h] [bp-17Ch]@15
  void *v77; // [sp+38h] [bp-178h]@10
  void (*v78)(void); // [sp+40h] [bp-170h]@10
  void (__fastcall *v79)(int *, int, const void **); // [sp+44h] [bp-16Ch]@10
  void **v80; // [sp+48h] [bp-168h]@5
  int v81; // [sp+4Ch] [bp-164h]@5
  int v82; // [sp+50h] [bp-160h]@5
  char v83; // [sp+54h] [bp-15Ch]@5
  int v84; // [sp+58h] [bp-158h]@5
  int v85; // [sp+5Ch] [bp-154h]@5
  int v86; // [sp+60h] [bp-150h]@5
  int v87; // [sp+64h] [bp-14Ch]@5
  int v88; // [sp+68h] [bp-148h]@5
  int v89; // [sp+6Ch] [bp-144h]@5
  int v90; // [sp+70h] [bp-140h]@5
  int v91; // [sp+78h] [bp-138h]@5
  char *v92; // [sp+7Ch] [bp-134h]@5
  ClientNetworkHandler *v93; // [sp+80h] [bp-130h]@5
  void *v94; // [sp+8Ch] [bp-124h]@5
  void (*v95)(void); // [sp+94h] [bp-11Ch]@5
  void (__fastcall *v96)(int); // [sp+98h] [bp-118h]@5
  int v97; // [sp+9Ch] [bp-114h]@4
  int v98; // [sp+A0h] [bp-110h]@2
  int v99; // [sp+A4h] [bp-10Ch]@1
  char *v100; // [sp+A8h] [bp-108h]@1
  char v101; // [sp+B0h] [bp-100h]@10
  void **v102; // [sp+148h] [bp-68h]@10
  __int64 v103; // [sp+14Ch] [bp-64h]@10
  char v104; // [sp+154h] [bp-5Ch]@10
  int v105; // [sp+158h] [bp-58h]@10
  int v106; // [sp+15Ch] [bp-54h]@10
  int v107; // [sp+160h] [bp-50h]@10
  int v108; // [sp+164h] [bp-4Ch]@10
  int v109; // [sp+168h] [bp-48h]@10
  int v110; // [sp+16Ch] [bp-44h]@10
  int v111; // [sp+170h] [bp-40h]@10
  int v112; // [sp+178h] [bp-38h]@10
  char *v113; // [sp+17Ch] [bp-34h]@10
  ClientNetworkHandler *v114; // [sp+180h] [bp-30h]@10
  RakNet *v115; // [sp+188h] [bp-28h]@1

  v3 = this;
  v4 = a2;
  v5 = a3;
  v6 = (int **)((char *)a3 + 16);
  v115 = _stack_chk_guard;
  v100 = (char *)&unk_28898CC;
  sub_21E8AF4(&v99, (int *)a3 + 4);
  v7 = sub_21E76A0(&v99, "/", 0, 1u);
  if ( v7 != -1 )
  {
    sub_21E9040((void **)&v98, &v99, 0, v7);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v100,
      &v98);
    v8 = (void *)(v98 - 12);
    if ( (int *)(v98 - 12) != &dword_28898C0 )
    {
      v68 = (unsigned int *)(v98 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v69 = __ldrex(v68);
        while ( __strex(v69 - 1, v68) );
      }
      else
        v69 = (*v68)--;
      if ( v69 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
    v9 = v7 + 1;
    v10 = *(_DWORD *)(v99 - 12);
    if ( v10 < v7 + 1 )
      sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v9, v10);
    sub_21E9040((void **)&v97, &v99, v9, v10 - v7);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v99, &v97);
    v11 = (void *)(v97 - 12);
    if ( (int *)(v97 - 12) != &dword_28898C0 )
      v70 = (unsigned int *)(v97 - 4);
          v71 = __ldrex(v70);
        while ( __strex(v71 - 1, v70) );
        v71 = (*v70)--;
      if ( v71 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
  }
  v75 = NetworkHandler::getResourcePackDownloadManager(*((_QWORD *)v3 + 1), *((_QWORD *)v3 + 1) >> 32, v4, v6);
  v12 = *((_BYTE *)v5 + 12);
  v13 = *((_DWORD *)v5 + 2);
  v81 = *((_DWORD *)v5 + 1);
  v83 = v12;
  v82 = v13;
  v80 = &off_26E641C;
  v73 = (int *)v6;
  sub_21E8AF4(&v84, (int *)v6);
  v14 = *((_DWORD *)v5 + 6);
  v15 = *((_DWORD *)v5 + 7);
  v16 = *((_DWORD *)v5 + 8);
  v17 = *((_DWORD *)v5 + 9);
  v85 = *((_DWORD *)v5 + 5);
  v86 = v14;
  v87 = v15;
  v88 = v16;
  v89 = v17;
  v74 = (int *)((char *)v5 + 40);
  sub_21E8AF4(&v90, (int *)v5 + 10);
  v91 = v75;
  sub_21E8AF4((int *)&v92, &v99);
  v93 = v3;
  v95 = 0;
  v18 = operator new(0x40u);
  v19 = *(_QWORD *)((unsigned int)&v80 | 4);
  *((_BYTE *)v18 + 12) = *(_BYTE *)(((unsigned int)&v80 | 4) + 8);
  *(_DWORD *)v18 = &off_26E641C;
  *(_QWORD *)((char *)v18 + 4) = v19;
  sub_21E8AF4((int *)v18 + 4, &v84);
  v20 = (int)v18 + 20;
  v21 = v86;
  v22 = v87;
  v23 = v88;
  v24 = v89;
  *(_DWORD *)v20 = v85;
  *(_DWORD *)(v20 + 4) = v21;
  *(_DWORD *)(v20 + 8) = v22;
  *(_DWORD *)(v20 + 12) = v23;
  *(_DWORD *)(v20 + 16) = v24;
  sub_21E8AF4((int *)v18 + 10, &v90);
  *((_DWORD *)v18 + 12) = v91;
  *((_DWORD *)v18 + 13) = v92;
  v92 = (char *)&unk_28898CC;
  *((_DWORD *)v18 + 14) = v93;
  v94 = v18;
  v95 = (void (*)(void))sub_1338414;
  v96 = sub_133833C;
  ResourcePackFileDownloaderManager::addProgressCallback(v75, (int)&v94);
  v25 = v3;
  if ( v95 )
    v95();
  v26 = v92 - 12;
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v92 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
    else
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = (void *)(v90 - 12);
  if ( (int *)(v90 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v90 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = (void *)(v84 - 12);
  if ( (int *)(v84 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v84 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  _aeabi_memcpy8(&v101, v4, 152);
  v29 = *(_QWORD *)((char *)v5 + 4);
  v104 = *((_BYTE *)v5 + 12);
  v103 = v29;
  v102 = &off_26E641C;
  sub_21E8AF4(&v105, v73);
  v30 = *((_DWORD *)v5 + 6);
  v31 = *((_DWORD *)v5 + 7);
  v32 = *((_DWORD *)v5 + 8);
  v33 = *((_DWORD *)v5 + 9);
  v106 = *((_DWORD *)v5 + 5);
  v107 = v30;
  v108 = v31;
  v109 = v32;
  v110 = v33;
  sub_21E8AF4(&v111, v74);
  v112 = v75;
  sub_21E8AF4((int *)&v113, &v99);
  v114 = v3;
  v34 = operator new(0xD8u);
  _aeabi_memcpy8(v34, &v101, 152);
  v35 = v103;
  *((_BYTE *)v34 + 164) = v104;
  v36 = (int)v34 + 152;
  *(_DWORD *)v36 = &off_26E641C;
  *(_QWORD *)(v36 + 4) = v35;
  sub_21E8AF4((int *)v34 + 42, &v105);
  v37 = (int)v34 + 172;
  v38 = v107;
  v39 = v108;
  v40 = v109;
  v41 = v110;
  *(_DWORD *)v37 = v106;
  *(_DWORD *)(v37 + 4) = v38;
  *(_DWORD *)(v37 + 8) = v39;
  *(_DWORD *)(v37 + 12) = v40;
  *(_DWORD *)(v37 + 16) = v41;
  sub_21E8AF4((int *)v34 + 48, &v111);
  *((_DWORD *)v34 + 50) = v112;
  *((_DWORD *)v34 + 51) = v113;
  v113 = (char *)&unk_28898CC;
  *((_DWORD *)v34 + 52) = v114;
  v77 = v34;
  v78 = (void (*)(void))sub_1338938;
  v79 = sub_13386C8;
  ResourcePackFileDownloaderManager::addCompletionCallback(v75, (int)&v77);
  if ( v78 )
    v78();
  v42 = v113 - 12;
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v113 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  v43 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v111 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  v44 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v105 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  v45 = ClientInstance::getMinecraftGame(*((ClientInstance **)v25 + 1));
  sub_21E8AF4(&v76, &v99);
  MinecraftGame::addDownloadingPack(v45, &v76, *((_QWORD *)v5 + 4));
  v46 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v76 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  ResourcePackFileDownloaderManager::downloadFile(
    v75,
    &v99,
    &v100,
    *(_QWORD *)((char *)v5 + 20),
    *(_QWORD *)((char *)v5 + 20) >> 32,
    v72,
    *((_QWORD *)v5 + 4),
    (const void **)v74);
  v47 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v99 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  v48 = v100 - 12;
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v100 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  result = (RakNet *)(_stack_chk_guard - v115);
  if ( _stack_chk_guard != v115 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const AvailableCommandsPacket *a3, int a4, void *a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, void *a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, void *a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, char a44)
{
  ClientNetworkHandler *v44; // r5@1
  const AvailableCommandsPacket *v45; // r4@1
  MinecraftGame *v46; // r0@2
  CommandRegistry *v47; // r0@3
  int v48; // r2@3
  int v49; // r3@3

  v44 = this;
  v45 = a3;
  if ( ClientInstance::isPrimaryClient(*((ClientInstance **)this + 1)) == 1 )
  {
    v46 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)v44 + 1));
    MinecraftGame::setupCommandParser(v46);
  }
  v47 = (CommandRegistry *)MinecraftCommands::getRegistry(*((MinecraftCommands **)v44 + 5));
  j_j_j__ZN15CommandRegistry18loadRemoteCommandsERK23AvailableCommandsPacket(
    v47,
    v45,
    v48,
    v49,
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
    a44);
}


void __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const SetPlayerGameTypePacket *a3)
{
  ClientNetworkHandler::handle(this, a2, a3);
}


void __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const WSConnectPacket *a3)
{
  ClientNetworkHandler *v3; // r5@1
  const WSConnectPacket *v4; // r4@1
  void *v5; // r0@2
  int v6; // r1@4
  ClientInstance *v7; // r0@4
  int v8; // r0@5
  int v9; // r4@5
  void (__fastcall *v10)(int, int *, char **, _DWORD); // r6@6
  int *v11; // r0@6
  char *v12; // r4@6
  int v13; // r6@6
  int v14; // r5@8
  int v15; // r1@8
  void *v16; // r0@10
  unsigned int *v17; // r2@11
  signed int v18; // r1@13
  unsigned int *v19; // r2@15
  signed int v20; // r1@17
  int *v21; // r0@23
  void *v22; // r0@28
  unsigned int *v23; // r2@31
  signed int v24; // r1@33
  int v25; // [sp+4h] [bp-3Ch]@6
  char *v26; // [sp+8h] [bp-38h]@6
  char *v27; // [sp+Ch] [bp-34h]@6
  char *v28; // [sp+10h] [bp-30h]@6
  int v29; // [sp+14h] [bp-2Ch]@6
  int v30; // [sp+18h] [bp-28h]@8

  v3 = this;
  v4 = a3;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v5 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v5 = &ServiceLocator<AppPlatform>::mDefaultService;
  v6 = (*(int (**)(void))(**(_DWORD **)v5 + 436))();
  v7 = (ClientInstance *)*((_DWORD *)v3 + 1);
  if ( v6 == 2 )
  {
    v8 = ClientInstance::getLocalPlayer(v7);
    v9 = v8;
    if ( !v8 )
      return;
    v10 = *(void (__fastcall **)(int, int *, char **, _DWORD))(*(_DWORD *)v8 + 1376);
    v11 = sub_21E8AF4(&v29, (int *)&unk_27E2898);
    sub_21E7408((const void **)v11, "%commands.generic.invalidDevice", 0x1Fu);
    sub_21E94B4((void **)&v25, "wsserver");
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v26 = (char *)operator new(4u);
    v28 = v26 + 4;
    v27 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v25,
                    (int)&v26,
                    (int)v26);
    v10(v9, &v29, &v26, 0);
    v13 = (int)v27;
    v12 = v26;
    if ( v26 != v27 )
    {
      do
      {
        v21 = (int *)(*(_DWORD *)v12 - 12);
        if ( v21 != &dword_28898C0 )
        {
          v19 = (unsigned int *)(*(_DWORD *)v12 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
          }
          else
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v21);
        }
        v12 += 4;
      }
      while ( v12 != (char *)v13 );
      v12 = v26;
    }
    if ( v12 )
      operator delete(v12);
    v22 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v25 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
      else
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    v16 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) == &dword_28898C0 )
    v17 = (unsigned int *)(v29 - 4);
    if ( &pthread_create )
      __dmb();
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      goto LABEL_40;
LABEL_39:
    v18 = (*v17)--;
LABEL_40:
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
    return;
  }
  v14 = ClientInstance::getAutomationClient(v7);
  sub_21E8AF4(&v30, (int *)v4 + 4);
  v15 = v30;
  if ( *(_DWORD *)(v30 - 12) )
    Automation::AutomationClient::connect(v14, &v30);
    v15 = v30;
  v16 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v15 - 4);
    goto LABEL_39;
}


void __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const SetTitlePacket *a3)
{
  ClientNetworkHandler::handle(this, a2, a3);
}


WebToken *__fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const ServerToClientHandshakePacket *a3)
{
  ClientNetworkHandler *v3; // r8@1
  const ServerToClientHandshakePacket *v4; // r5@1
  const NetworkIdentifier *v5; // r4@1
  WebToken *result; // r0@1
  WebToken *v7; // r7@1
  void *v8; // r0@2
  const KeyManager *v9; // r5@3
  void *v10; // r0@5
  void *v11; // r0@6
  void *v12; // r0@7
  void *v13; // r0@8
  void *v14; // r0@9
  int v15; // r7@10
  int v16; // r4@10
  char *v17; // r6@10
  char *v18; // r1@11
  unsigned int *v19; // r2@12
  signed int v20; // r5@14
  char *v21; // r5@18
  int *v22; // r0@19
  void *v23; // r0@24
  int v24; // r0@26
  void *v25; // r0@27
  void *v26; // r0@28
  void *v27; // r0@29
  void *v28; // r0@30
  void *v29; // r0@31
  unsigned int *v30; // r2@32
  signed int v31; // r1@34
  void (__fastcall *v32)(ClientNetworkHandler *, const NetworkIdentifier *, int *, _DWORD); // r4@36
  void *v33; // r0@36
  void *v34; // r0@37
  void *v35; // r0@38
  unsigned int *v36; // r2@42
  signed int v37; // r1@44
  unsigned int *v38; // r2@46
  signed int v39; // r1@48
  unsigned int *v40; // r2@50
  signed int v41; // r1@52
  unsigned int *v42; // r2@54
  signed int v43; // r1@56
  unsigned int *v44; // r2@58
  signed int v45; // r1@60
  unsigned int *v46; // r2@62
  signed int v47; // r1@64
  unsigned int *v48; // r2@66
  signed int v49; // r1@68
  unsigned int *v50; // r2@98
  signed int v51; // r1@100
  unsigned int *v52; // r2@102
  signed int v53; // r1@104
  unsigned int *v54; // r2@106
  signed int v55; // r1@108
  unsigned int *v56; // r2@118
  signed int v57; // r1@120
  unsigned int *v58; // r2@122
  signed int v59; // r1@124
  unsigned int *v60; // r2@146
  signed int v61; // r1@148
  unsigned int *v62; // r2@150
  signed int v63; // r1@152
  const NetworkIdentifier *v64; // [sp+4h] [bp-10Ch]@10
  void **v65; // [sp+8h] [bp-108h]@29
  int v66; // [sp+Ch] [bp-104h]@29
  int v67; // [sp+10h] [bp-100h]@29
  char v68; // [sp+14h] [bp-FCh]@29
  int v69; // [sp+1Ch] [bp-F4h]@27
  char v70; // [sp+20h] [bp-F0h]@27
  char v71; // [sp+30h] [bp-E0h]@27
  int v72; // [sp+44h] [bp-CCh]@27
  int v73; // [sp+4Ch] [bp-C4h]@36
  int v74; // [sp+50h] [bp-C0h]@10
  char *v75; // [sp+54h] [bp-BCh]@10
  char *v76; // [sp+58h] [bp-B8h]@10
  char *v77; // [sp+5Ch] [bp-B4h]@10
  int v78; // [sp+60h] [bp-B0h]@9
  int v79; // [sp+64h] [bp-ACh]@9
  int v80; // [sp+6Ch] [bp-A4h]@7
  char v81; // [sp+70h] [bp-A0h]@7
  char v82; // [sp+80h] [bp-90h]@7
  int v83; // [sp+90h] [bp-80h]@7
  int v84; // [sp+94h] [bp-7Ch]@7
  int v85; // [sp+98h] [bp-78h]@3
  void **v86; // [sp+9Ch] [bp-74h]@3
  int v87; // [sp+A0h] [bp-70h]@5
  int v88; // [sp+A4h] [bp-6Ch]@3
  int v89; // [sp+A8h] [bp-68h]@3
  int v90; // [sp+ACh] [bp-64h]@2
  char v91; // [sp+B0h] [bp-60h]@2
  int v92; // [sp+D0h] [bp-40h]@7
  char v93; // [sp+E8h] [bp-28h]@11

  v3 = this;
  v4 = a3;
  v5 = a2;
  result = (WebToken *)NetworkHandler::getEncryptedPeerForUser(*((NetworkHandler **)this + 2), a2);
  v7 = result;
  if ( result )
  {
    sub_21E8AF4(&v90, (int *)v4 + 4);
    WebToken::WebToken((int)&v91, &v90);
    v8 = (void *)(v90 - 12);
    if ( (int *)(v90 - 12) != &dword_28898C0 )
    {
      v36 = (unsigned int *)(v90 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
      }
      else
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
    v9 = (const KeyManager *)*((_DWORD *)v3 + 4);
    WebToken::getSignerPublicKey((WebToken *)&v85, (int)&v91);
    KeyManager::KeyManager((int)&v86, &v85, 5u);
    PrivateKeyManager::computeSecret((PrivateKeyManager *)&v89, v9, (int)&v86);
    v86 = &off_26D4D8C;
    if ( v88 )
      (*(void (**)(void))(*(_DWORD *)v88 + 4))();
    v88 = 0;
    v10 = (void *)(v87 - 12);
    if ( (int *)(v87 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v87 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    v11 = (void *)(v85 - 12);
    if ( (int *)(v85 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v85 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    Json::Value::Value((Json::Value *)&v81, (const char *)&unk_257BC67);
    Json::Value::get((Json::Value *)&v82, (const char *)&v92, (const Json::Value *)"salt", (const Json::Value *)&v81);
    sub_21E94B4((void **)&v80, (const char *)&unk_257BC67);
    Json::Value::asString(&v83, (int)&v82, &v80);
    Util::base64_decode((const void **)&v84, &v83);
    v12 = (void *)(v83 - 12);
    if ( (int *)(v83 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v83 - 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = (void *)(v80 - 12);
    if ( (int *)(v80 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v80 - 4);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    Json::Value::~Value((Json::Value *)&v82);
    Json::Value::~Value((Json::Value *)&v81);
    sub_21E8AF4(&v78, &v84);
    sub_21E72F0((const void **)&v78, (const void **)&v89);
    Crypto::Hash::hash((Crypto *)&v79, 2, &v78);
    v14 = (void *)(v78 - 12);
    if ( (int *)(v78 - 12) != &dword_28898C0 )
      v46 = (unsigned int *)(v78 - 4);
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    EncryptedNetworkPeer::enableEncryption((int)v7, &v79);
    WebToken::getSignerPublicKey((WebToken *)&v74, (int)&v91);
    v75 = 0;
    v76 = 0;
    v77 = 0;
    v75 = (char *)operator new(4u);
    v77 = v75 + 4;
    v64 = v5;
    v76 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v74,
                    (int)&v75,
                    (int)v75);
    v15 = WebToken::verify((int)&v91, (__int64 *)&v75);
    v16 = (int)v76;
    v17 = v75;
    if ( v75 != v76 )
      v18 = &v93;
      do
        v22 = (int *)(*(_DWORD *)v17 - 12);
        if ( v22 != &dword_28898C0 )
        {
          v19 = (unsigned int *)(*(_DWORD *)v17 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
          }
          else
            v20 = (*v19)--;
          if ( v20 <= 0 )
            v21 = v18;
            j_j_j_j__ZdlPv_9(v22);
            v18 = v21;
        }
        v17 += 4;
      while ( v17 != (char *)v16 );
      v17 = v75;
    if ( v17 )
      operator delete(v17);
    v23 = (void *)(v74 - 12);
    if ( (int *)(v74 - 12) != &dword_28898C0 )
      v48 = (unsigned int *)(v74 - 4);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    if ( v15 )
      v24 = ClientInstance::getMinecraftGame(*((ClientInstance **)v3 + 1));
      if ( (*(int (**)(void))(*(_DWORD *)v24 + 136))() == 1 )
        Json::Value::Value((Json::Value *)&v70, (const char *)&unk_257BC67);
        Json::Value::get(
          (Json::Value *)&v71,
          (const char *)&v92,
          (const Json::Value *)"signedToken",
          (const Json::Value *)&v70);
        sub_21E94B4((void **)&v69, (const char *)&unk_257BC67);
        Json::Value::asString(&v72, (int)&v71, &v69);
        v25 = (void *)(v69 - 12);
        if ( (int *)(v69 - 12) != &dword_28898C0 )
          v60 = (unsigned int *)(v69 - 4);
              v61 = __ldrex(v60);
            while ( __strex(v61 - 1, v60) );
            v61 = (*v60)--;
          if ( v61 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
        Json::Value::~Value((Json::Value *)&v71);
        Json::Value::~Value((Json::Value *)&v70);
        v26 = (void *)(v72 - 12);
        if ( (int *)(v72 - 12) != &dword_28898C0 )
          v62 = (unsigned int *)(v72 - 4);
              v63 = __ldrex(v62);
            while ( __strex(v63 - 1, v62) );
            v63 = (*v62)--;
          if ( v63 <= 0 )
            j_j_j_j__ZdlPv_9(v26);
      v66 = 2;
      v67 = 1;
      v68 = 0;
      v65 = &off_26E63F4;
      (*(void (**)(void))(**((_DWORD **)v3 + 3) + 8))();
      v27 = (void *)(v79 - 12);
      if ( (int *)(v79 - 12) != &dword_28898C0 )
        v56 = (unsigned int *)(v79 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v57 = __ldrex(v56);
          while ( __strex(v57 - 1, v56) );
        else
          v57 = (*v56)--;
        if ( v57 <= 0 )
          j_j_j_j__ZdlPv_9(v27);
      v28 = (void *)(v84 - 12);
      if ( (int *)(v84 - 12) != &dword_28898C0 )
        v58 = (unsigned int *)(v84 - 4);
            v59 = __ldrex(v58);
          while ( __strex(v59 - 1, v58) );
          v59 = (*v58)--;
        if ( v59 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
      v29 = (void *)(v89 - 12);
      if ( (int *)(v89 - 12) == &dword_28898C0 )
        goto LABEL_40;
      v30 = (unsigned int *)(v89 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        goto LABEL_115;
    else
      v32 = *(void (__fastcall **)(ClientNetworkHandler *, const NetworkIdentifier *, int *, _DWORD))(*(_DWORD *)v3 + 24);
      sub_21E94B4((void **)&v73, "disconnectionScreen.notAuthenticated");
      v32(v3, v64, &v73, 0);
      v33 = (void *)(v73 - 12);
      if ( (int *)(v73 - 12) != &dword_28898C0 )
        v50 = (unsigned int *)(v73 - 4);
            v51 = __ldrex(v50);
          while ( __strex(v51 - 1, v50) );
          v51 = (*v50)--;
        if ( v51 <= 0 )
          j_j_j_j__ZdlPv_9(v33);
      v34 = (void *)(v79 - 12);
        v52 = (unsigned int *)(v79 - 4);
            v53 = __ldrex(v52);
          while ( __strex(v53 - 1, v52) );
          v53 = (*v52)--;
        if ( v53 <= 0 )
          j_j_j_j__ZdlPv_9(v34);
      v35 = (void *)(v84 - 12);
        v54 = (unsigned int *)(v84 - 4);
            v55 = __ldrex(v54);
          while ( __strex(v55 - 1, v54) );
          v55 = (*v54)--;
        if ( v55 <= 0 )
          j_j_j_j__ZdlPv_9(v35);
    v31 = (*v30)--;
LABEL_115:
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
LABEL_40:
    result = WebToken::~WebToken((WebToken *)&v91);
  }
  return result;
}


signed int __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const LevelSoundEventPacket *a3)
{
  ClientNetworkHandler *v3; // r5@1
  const LevelSoundEventPacket *v4; // r4@1
  signed int result; // r0@1
  __int64 v6; // kr00_8@2
  int v7; // r0@2
  int v8; // r5@2

  v3 = this;
  v4 = a3;
  result = Level::isUsableLevel(*((Level **)this + 6), a2);
  if ( result == 1 )
  {
    v6 = *(_QWORD *)((char *)v4 + 28);
    v7 = *((_DWORD *)v3 + 6);
    v8 = *((_WORD *)v4 + 18);
    result = Level::handleSoundEvent(v7, *((_BYTE *)v4 + 13), (int)v4 + 16);
  }
  return result;
}


RakNet *__fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const PhotoTransferPacket *a3)
{
  const PhotoTransferPacket *v3; // r4@1
  MinecraftGame *v4; // r0@1
  Entity *v5; // r0@1
  Level *v6; // r0@1
  int v7; // r0@1

  v3 = a3;
  v4 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)this + 1));
  v5 = (Entity *)MinecraftGame::getPrimaryLocalPlayer(v4);
  v6 = (Level *)Entity::getLevel(v5);
  v7 = Level::getPhotoStorage(v6);
  return j_j_j__ZN12PhotoStorage14storeBookPhotoERKSsS1_S1_(v7, (int *)v3 + 6, (int *)v3 + 4, (unsigned int *)v3 + 5);
}


Arrow *__fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const TakeItemEntityPacket *a3)
{
  ClientNetworkHandler *v3; // r4@1
  const TakeItemEntityPacket *v4; // r7@1
  Arrow *result; // r0@1
  Arrow *v6; // r5@2
  int v7; // r10@4
  int v8; // r6@6
  int v9; // r0@6
  int v10; // r1@14
  int v11; // r2@14
  int v12; // r6@15
  int v13; // r0@15
  Entity *v14; // r11@15
  int v15; // r7@17
  int v16; // r1@17
  Entity *v17; // r8@17
  char *v18; // r7@18
  char *v19; // r0@18
  bool v20; // zf@18
  int v21; // r0@18
  int v22; // r0@24
  unsigned int v23; // r6@24
  int v24; // r8@24
  void *v25; // r9@24
  int v26; // r4@27
  char v27; // [sp+10h] [bp-118h]@27
  void *v28; // [sp+1Ch] [bp-10Ch]@24
  unsigned int v29; // [sp+20h] [bp-108h]@17
  unsigned int v30; // [sp+24h] [bp-104h]@17
  char v31; // [sp+28h] [bp-100h]@6
  int v32; // [sp+30h] [bp-F8h]@10
  void *v33; // [sp+4Ch] [bp-DCh]@8
  void *ptr; // [sp+5Ch] [bp-CCh]@6
  char v35; // [sp+70h] [bp-B8h]@3
  int v36; // [sp+78h] [bp-B0h]@32
  void *v37; // [sp+94h] [bp-94h]@30
  void *v38; // [sp+A4h] [bp-84h]@28
  int v39; // [sp+B8h] [bp-70h]@3
  Arrow *v40; // [sp+C0h] [bp-68h]@38
  unsigned __int8 v41; // [sp+C6h] [bp-62h]@15
  void *v42; // [sp+DCh] [bp-4Ch]@36
  void *v43; // [sp+ECh] [bp-3Ch]@34

  v3 = this;
  v4 = a3;
  result = (Arrow *)Level::isUsableLevel(*((Level **)this + 6), a2);
  if ( result == (Arrow *)1 )
  {
    result = (Arrow *)Level::getRuntimeEntity(*((_DWORD *)v3 + 6), 0, *((_QWORD *)v4 + 2), 0);
    v6 = result;
    if ( result )
    {
      ItemInstance::ItemInstance((int)&v39);
      ItemInstance::ItemInstance((int)&v35);
      if ( Entity::hasCategory((int)v6, 1024) == 1 )
      {
        ItemInstance::operator=((int)&v39, (int)v6 + 3416);
        ItemInstance::operator=((int)&v35, (int)&v39);
        v7 = (int)v6;
      }
      else if ( (*(int (__fastcall **)(Arrow *))(*(_DWORD *)v6 + 488))(v6) == 4194384 )
        v8 = Item::mArrow;
        v9 = Arrow::getAuxValue(v6);
        ItemInstance::ItemInstance((ItemInstance *)&v31, v8, 1, v9);
        ItemInstance::operator=((int)&v39, (int)&v31);
        if ( ptr )
          operator delete(ptr);
        if ( v33 )
          operator delete(v33);
        if ( v32 )
          (*(void (**)(void))(*(_DWORD *)v32 + 4))();
        v7 = 0;
        v32 = 0;
      else
      if ( !ItemInstance::isNull((ItemInstance *)&v39) )
        v12 = v41;
        v13 = Level::getRuntimePlayer(*((_DWORD *)v3 + 6), v10, *((_QWORD *)v4 + 3));
        v14 = (Entity *)v13;
        if ( v13 )
        {
          MinecraftEventing::fireEventItemAcquired(v13, (ItemInstance *)&v39, v12 - v41, 1);
          if ( v7 )
          {
            v15 = *((_DWORD *)v3 + 6);
            (*(void (__fastcall **)(unsigned int *, int))(*(_DWORD *)v7 + 500))(&v29, v7);
            v17 = (Entity *)Level::getPlayer(v15, v16, v29, v30);
            if ( v17 )
            {
              v18 = Entity::getUniqueID(v14);
              v19 = Entity::getUniqueID(v17);
              v21 = *(_QWORD *)v19 ^ *(_QWORD *)v18 | (*(_QWORD *)v18 >> 32) ^ (*(_QWORD *)v19 >> 32);
              v20 = v21 == 0;
              if ( v21 )
                v20 = v39 == 0;
              if ( !v20 && ItemInstance::getId((ItemInstance *)&v39) == *(_WORD *)(Item::mDiamond + 18) )
                MinecraftEventing::fireEventAwardAchievement((int)v17, 10);
            }
            if ( ClientInstance::getLevelRenderer(*((ClientInstance **)v3 + 1)) )
              v22 = ClientInstance::getLevelRenderer(*((ClientInstance **)v3 + 1));
              v23 = *((_DWORD *)v3 + 6);
              v24 = *(_DWORD *)(v22 + 1568);
              v25 = operator new(0xDE8u);
              TakeAnimationParticle::TakeAnimationParticle(
                __PAIR__(v23, (unsigned int)v25),
                v7,
                v14,
                -4676537851343536128LL,
                0);
              v28 = v25;
              ParticleEngine::addCustomParticle(v24, (int *)&v28);
              if ( v28 )
                (*(void (**)(void))(*(_DWORD *)v28 + 4))();
              v28 = 0;
          }
        }
        v26 = *((_DWORD *)v3 + 6);
        Entity::getAttachPos((AABB *)&v27, (int)v6, 3, 0);
        Level::playSound(v26, 75, (int)&v27);
      if ( v38 )
        operator delete(v38);
      if ( v37 )
        operator delete(v37);
      if ( v36 )
        (*(void (__cdecl **)(int, _DWORD, int))(*(_DWORD *)v36 + 4))(v36, *(_DWORD *)(*(_DWORD *)v36 + 4), v11);
      if ( v43 )
        operator delete(v43);
      if ( v42 )
        operator delete(v42);
      result = v40;
      if ( v40 )
        result = (Arrow *)(*(int (__cdecl **)(Arrow *, _DWORD, int))(*(_DWORD *)v40 + 4))(
                            v40,
                            *(_DWORD *)(*(_DWORD *)v40 + 4),
                            v11);
    }
  }
  return result;
}


signed int __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const LevelEventPacket *a3)
{
  ClientNetworkHandler *v3; // r6@1
  const LevelEventPacket *v4; // r4@1
  signed int result; // r0@1
  int v6; // r5@2
  Player *v7; // r0@7
  int v8; // ST00_4@8
  Entity *v9; // r0@10
  BlockSource *v10; // r7@10
  int v11; // r10@12
  signed int v12; // r7@12
  Minecraft *v13; // r0@14
  signed int v14; // r0@14
  bool v15; // zf@14
  int v16; // r8@18
  int v17; // r0@18
  int v18; // r8@18
  unsigned int *v19; // r1@19
  unsigned int v20; // r0@21
  unsigned int *v21; // r7@25
  unsigned int v22; // r0@27
  Minecraft *v23; // r0@32
  int v24; // r3@33
  char v25; // [sp+Ch] [bp-34h]@18
  int v26; // [sp+10h] [bp-30h]@18
  char v27; // [sp+14h] [bp-2Ch]@10

  v3 = this;
  v4 = a3;
  result = Level::isUsableLevel(*((Level **)this + 6), a2);
  if ( result == 1 )
  {
    v6 = *((_DWORD *)v4 + 4);
    if ( v6 & 0x4000 )
    {
      v8 = *((_DWORD *)v4 + 8);
      result = Level::addParticle(*((_DWORD *)v3 + 6), *((_DWORD *)v4 + 4) & 0xFFF, (int)v4 + 20);
    }
    else
      switch ( (unsigned __int16)v6 )
      {
        case 0xBBDu:
          v11 = *((_DWORD *)v4 + 8);
          v12 = 0;
          if ( !v11 )
            v12 = 1;
          v13 = (Minecraft *)ClientInstance::getServerData(*((ClientInstance **)v3 + 1));
          v14 = Minecraft::getSimPaused(v13);
          v15 = v14 == 0;
          if ( !v14 )
            v15 = v12 == 0;
          if ( v15 )
          {
            v16 = ClientInstance::getClientSceneStack(*((ClientInstance **)v3 + 1));
            v17 = ClientInstance::getSceneFactory(*((ClientInstance **)v3 + 1));
            SceneFactory::createGlobalPauseScreen((SceneFactory *)&v25, v17);
            SceneStack::pushScreen(v16, (int)&v25, 0);
            v18 = v26;
            if ( v26 )
            {
              v19 = (unsigned int *)(v26 + 4);
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
            }
          }
          v23 = (Minecraft *)ClientInstance::getServerData(*((ClientInstance **)v3 + 1));
          Minecraft::setSimTimePause(v23, v11 != 0);
          break;
        case 0xFA0u:
          if ( ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1)) )
            v9 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
            v10 = (BlockSource *)Entity::getRegion(v9);
            BlockPos::BlockPos((int)&v27, (int)v4 + 20);
            if ( BlockSource::hasBlock(v10, (const BlockPos *)&v27) == 1 )
              BlockSource::setExtraData(v10, (const BlockPos *)&v27, *((_WORD *)v4 + 16));
        case 0x2648u:
            v7 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
            Player::setAllPlayersSleeping(v7);
      }
      v24 = *((_DWORD *)v4 + 8);
      result = Level::handleLevelEvent(*((_DWORD *)v3 + 6));
  }
  return result;
}


void __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const TransferPacket *a3)
{
  ClientNetworkHandler::handle(this, a2, a3);
}


void __fastcall ClientNetworkHandler::onSuccessfulLogin(ClientNetworkHandler *this, const NetworkIdentifier *a2)
{
  ClientNetworkHandler *v2; // r8@1
  int v3; // r6@1
  ThirdPartyInfo *v4; // r5@1
  MinecraftGame *v5; // r0@2
  ClientInstance *v6; // r0@2
  int v7; // r7@2
  MinecraftGame *v8; // r0@2
  ClientInstance *v9; // r0@2
  MinecraftGame *v15; // r0@2
  int v16; // r4@2
  char *v17; // r0@2
  int v18; // r3@2
  MinecraftGame *v19; // r0@2
  ClientInstance *v20; // r0@2
  MinecraftGame *v21; // r0@6
  int v22; // r6@6
  char *v23; // r0@6
  Entitlement *v24; // r0@6
  Entitlement *v25; // r5@6
  int i; // r4@7
  int v27; // r7@7
  unsigned int *v28; // r2@9
  signed int v29; // r1@11
  int v30; // r0@17
  char *v31; // r1@18
  char *v32; // r0@20
  void *v33; // r4@22
  void *v34; // r6@22
  unsigned int *v35; // r2@24
  signed int v36; // r1@26
  int *v37; // r0@32
  char **v38; // r4@37
  char **v39; // r6@37
  unsigned int *v40; // r2@39
  signed int v41; // r1@41
  int *v42; // r0@47
  __int64 v43; // [sp+0h] [bp-78h]@0
  void **v44; // [sp+Ch] [bp-6Ch]@22
  int v45; // [sp+10h] [bp-68h]@22
  int v46; // [sp+14h] [bp-64h]@22
  char v47; // [sp+18h] [bp-60h]@22
  __int64 v48; // [sp+1Ch] [bp-5Ch]@22
  int v49; // [sp+24h] [bp-54h]@22
  char *v50; // [sp+28h] [bp-50h]@17
  char **v51; // [sp+2Ch] [bp-4Ch]@7
  char **v52; // [sp+30h] [bp-48h]@7
  char **v53; // [sp+34h] [bp-44h]@7
  __int64 v54; // [sp+38h] [bp-40h]@6
  int v55; // [sp+40h] [bp-38h]@6

  v2 = this;
  v3 = NetworkHandler::getConnectionInfo(*((NetworkHandler **)this + 2));
  v4 = (ThirdPartyInfo *)(v3 + 20);
  if ( ThirdPartyInfo::isValid((ThirdPartyInfo *)(v3 + 20)) == 1 )
  {
    v5 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)v2 + 1));
    v6 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(v5);
    v7 = ClientInstance::getServerPingTime(v6);
    v8 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)v2 + 1));
    v9 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(v8);
    _R0 = ClientInstance::getServerConnectionTime(v9);
    __asm { VMOV            D8, R0, R1 }
    v15 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)v2 + 1));
    v16 = MinecraftGame::getEventing(v15);
    v17 = ThirdPartyInfo::getCreatorName(v4);
    __asm { VSTR            D8, [SP,#0x78+var_78] }
    MinecraftEventing::fireServerConnectionEvent(*(double *)&v16, v7, v18, v43, (const char **)v17);
    v19 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)v2 + 1));
    v20 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(v19);
    ClientInstance::setServerPingTime(v20, -1.0);
  }
  if ( ClientInstance::isPrimaryClient(*((ClientInstance **)v2 + 1)) == 1
    && ThirdPartyInfo::isValid(v4) == 1
    && ThirdPartyInfo::isEligible((int)v4, (int *)(v3 + 8)) == 1 )
    v54 = 0LL;
    v55 = 0;
    v21 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)v2 + 1));
    v22 = MinecraftGame::getEntitlementManager(v21);
    v23 = ThirdPartyInfo::getCreatorId(v4);
    EntitlementManager::getEntitlementsByCreator(v22, (const void **)v23, (int)&v54);
    v25 = (Entitlement *)HIDWORD(v54);
    v24 = (Entitlement *)v54;
    if ( HIDWORD(v54) != (_DWORD)v54 )
    {
      v51 = 0;
      v52 = 0;
      v53 = 0;
      std::vector<std::string,std::allocator<std::string>>::reserve(
        (int)&v51,
        -1431655765 * ((HIDWORD(v54) - (signed int)v54) >> 4));
      v27 = HIDWORD(v54);
      for ( i = v54; i != v27; i += 48 )
      {
        sub_21E8AF4((int *)&v50, (int *)(i + 36));
        v30 = (int)v52;
        if ( v52 == v53 )
        {
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
            (unsigned __int64 *)&v51,
            &v50);
          v31 = v50;
        }
        else
          *v52 = v50;
          v31 = (char *)&unk_28898CC;
          v50 = (char *)&unk_28898CC;
          v52 = (char **)(v30 + 4);
        v32 = v31 - 12;
        if ( (int *)(v31 - 12) != &dword_28898C0 )
          v28 = (unsigned int *)(v31 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
          }
          else
            v29 = (*v28)--;
          if ( v29 <= 0 )
            j_j_j_j__ZdlPv_9(v32);
      }
      v45 = 2;
      v46 = 1;
      v47 = 0;
      v44 = &off_26D8100;
      v48 = 0LL;
      v49 = 0;
      std::vector<std::string,std::allocator<std::string>>::operator=((int)&v48, (unsigned __int64 *)&v51);
      (*(void (**)(void))(**((_DWORD **)v2 + 3) + 8))();
      v34 = (void *)HIDWORD(v48);
      v33 = (void *)v48;
      if ( (_DWORD)v48 != HIDWORD(v48) )
        do
          v37 = (int *)(*(_DWORD *)v33 - 12);
          if ( v37 != &dword_28898C0 )
            v35 = (unsigned int *)(*(_DWORD *)v33 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v36 = __ldrex(v35);
              while ( __strex(v36 - 1, v35) );
            }
            else
              v36 = (*v35)--;
            if ( v36 <= 0 )
              j_j_j_j__ZdlPv_9(v37);
          v33 = (char *)v33 + 4;
        while ( v33 != v34 );
        v33 = (void *)v48;
      if ( v33 )
        operator delete(v33);
      v39 = v52;
      v38 = v51;
      if ( v51 != v52 )
          v42 = (int *)(*v38 - 12);
          if ( v42 != &dword_28898C0 )
            v40 = (unsigned int *)(*v38 - 4);
                v41 = __ldrex(v40);
              while ( __strex(v41 - 1, v40) );
              v41 = (*v40)--;
            if ( v41 <= 0 )
              j_j_j_j__ZdlPv_9(v42);
          ++v38;
        while ( v38 != v39 );
        v38 = v51;
      if ( v38 )
        operator delete(v38);
      v25 = (Entitlement *)HIDWORD(v54);
      v24 = (Entitlement *)v54;
    }
    if ( v24 != v25 )
      do
        v24 = (Entitlement *)((char *)Entitlement::~Entitlement(v24) + 48);
      while ( v25 != v24 );
      v25 = (Entitlement *)v54;
    if ( v25 )
      operator delete((void *)v25);
}


void __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const ResourcePackStackPacket *a3)
{
  ClientNetworkHandler::handle(this, a2, a3);
}


int __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const ClientboundMapItemDataPacket *a3)
{
  ClientNetworkHandler *v3; // r9@1
  ClientboundMapItemDataPacket *v4; // r8@1
  Minecraft *v5; // r0@1
  Level *v6; // r0@1
  __int64 v7; // r0@1
  char v8; // r6@3
  int v9; // r1@3
  __int64 *v10; // r7@3
  __int64 v11; // kr00_8@3
  int v12; // r5@4
  MapItemSavedData *v13; // r4@5
  int v14; // r0@7
  int v15; // r4@10
  int v16; // r1@10
  MapItemSavedData *v17; // r6@10
  signed int v18; // r4@11
  int v19; // r1@11
  int v20; // r4@11
  int v21; // r0@16
  int v23; // [sp+0h] [bp-38h]@11
  unsigned int v24; // [sp+8h] [bp-30h]@11
  unsigned int v25; // [sp+Ch] [bp-2Ch]@11
  char v26; // [sp+10h] [bp-28h]@10

  v3 = this;
  v4 = a3;
  v5 = (Minecraft *)ClientInstance::getServerData(*((ClientInstance **)this + 1));
  v6 = (Level *)Minecraft::getLevel(v5);
  LODWORD(v7) = Level::isClientSide(v6);
  if ( (_DWORD)v7 == 1 )
  {
    if ( ClientboundMapItemDataPacket::isOfType((int)v4, 8) == 1 )
    {
      v8 = ClientboundMapItemDataPacket::getScale(v4);
      v11 = *(_QWORD *)ClientboundMapItemDataPacket::getMapIds(v4);
      v10 = (__int64 *)v11;
      if ( (_DWORD)v11 != HIDWORD(v11) )
      {
        v12 = 0;
        do
        {
          v13 = Level::getMapSavedData(*((_DWORD *)v3 + 6), v9, *v10);
          if ( !v13 )
            v13 = Level::createMapSavedData(*((_DWORD *)v3 + 6), (unsigned __int64 *)v10);
          MapItemSavedData::setScale(v13, v8);
          v14 = ClientboundMapItemDataPacket::getDimensionId(v4);
          MapItemSavedData::setDimensionId((int)v13, v14);
          if ( v12 )
            MapItemSavedData::setParentMapId(v12, v9, *v10);
          ++v10;
          ++v8;
          v12 = (int)v13;
        }
        while ( (__int64 *)HIDWORD(v11) != v10 );
      }
    }
    v15 = *((_DWORD *)v3 + 6);
    ClientboundMapItemDataPacket::getMapId((ClientboundMapItemDataPacket *)&v26, (int)v4);
    v17 = Level::getMapSavedData(v15, v16, *(__int64 *)&v26);
    if ( !v17 )
      v18 = *((_DWORD *)v3 + 6);
      ClientboundMapItemDataPacket::getMapId((ClientboundMapItemDataPacket *)&v24, (int)v4);
      Level::requestMapInfo(v18, v19, v24, v25);
      v20 = *((_DWORD *)v3 + 6);
      ClientboundMapItemDataPacket::getMapId((ClientboundMapItemDataPacket *)&v23, (int)v4);
      v17 = Level::createMapSavedData(v20, (unsigned __int64 *)&v23);
    if ( ClientboundMapItemDataPacket::isOfType((int)v4, 2) || ClientboundMapItemDataPacket::isOfType((int)v4, 4) == 1 )
      ClientboundMapItemDataPacket::applyToMap(v4, v17);
    LODWORD(v7) = ClientboundMapItemDataPacket::isTextureUpdate(v4);
    if ( (_DWORD)v7 == 1 )
      v21 = ClientInstance::getEntityRenderDispatcher(*((ClientInstance **)v3 + 1));
      LODWORD(v7) = EntityRenderDispatcher::getRenderer(v21, 59);
      if ( (_DWORD)v7 )
        LODWORD(v7) = MapRenderer::update(v7);
  }
  return v7;
}


void __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const ModalFormRequestPacket *a3)
{
  ClientNetworkHandler *v3; // r5@1
  const ModalFormRequestPacket *v4; // r4@1
  int v5; // r6@1
  int v6; // r0@1
  int v7; // r4@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r5@8
  unsigned int v11; // r0@10
  int v12; // [sp+0h] [bp-18h]@1
  int v13; // [sp+4h] [bp-14h]@1

  v3 = this;
  v4 = a3;
  v5 = ClientInstance::getClientSceneStack(*((ClientInstance **)this + 1));
  v6 = ClientInstance::getSceneFactory(*((ClientInstance **)v3 + 1));
  SceneFactory::createServerForm((unsigned __int64 *)&v12, v6, *((_DWORD *)v4 + 4), (int *)v4 + 5);
  SceneStack::pushScreen(v5, (int)&v12, 0);
  v7 = v13;
  if ( v13 )
  {
    v8 = (unsigned int *)(v13 + 4);
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
}


void __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const ShowCreditsPacket *a3)
{
  ClientNetworkHandler *v3; // r4@1
  const ShowCreditsPacket *v4; // r5@1
  int v5; // r6@2
  int v6; // r0@2
  bool v7; // zf@2
  int v8; // r0@6
  int v9; // r5@6
  _DWORD *v10; // r0@7
  __int64 v11; // r1@7
  int v12; // r5@9
  int v13; // r6@9
  _DWORD *v14; // r0@9
  int v15; // r4@9
  unsigned int *v16; // r1@10
  unsigned int v17; // r0@12
  unsigned int *v18; // r5@16
  unsigned int v19; // r0@18
  _DWORD *v20; // [sp+8h] [bp-38h]@9
  void (*v21)(void); // [sp+10h] [bp-30h]@9
  int (__fastcall *v22)(int **); // [sp+14h] [bp-2Ch]@9
  char v23; // [sp+18h] [bp-28h]@9
  int v24; // [sp+1Ch] [bp-24h]@9
  _DWORD *v25; // [sp+20h] [bp-20h]@7
  __int64 v26; // [sp+28h] [bp-18h]@7

  v3 = this;
  v4 = a3;
  if ( Level::isUsableLevel(*((Level **)this + 6), a2) == 1 )
  {
    v5 = ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
    v6 = Level::getRuntimeEntity(*((_DWORD *)v3 + 6), 0, *((_QWORD *)v4 + 2), 0);
    v7 = v5 == v6;
    if ( v5 == v6 )
      v7 = *((_DWORD *)v4 + 6) == 0;
    if ( v7 )
    {
      v8 = ClientInstance::isVRClient(*((ClientInstance **)v3 + 1));
      v9 = *((_DWORD *)v3 + 1);
      if ( v8 == 1 )
      {
        v10 = operator new(4u);
        LODWORD(v11) = sub_1338C50;
        *v10 = v3;
        HIDWORD(v11) = sub_1338C04;
        v25 = v10;
        v26 = v11;
        ClientInstance::setupTransitionForCredits(v9, (signed int)&v25, (unsigned int *)sub_1338C04);
        if ( (_DWORD)v26 )
          ((void (*)(void))v26)();
      }
      else
        v12 = ClientInstance::getClientSceneStack(*((ClientInstance **)v3 + 1));
        v13 = ClientInstance::getSceneFactory(*((ClientInstance **)v3 + 1));
        v14 = operator new(4u);
        *v14 = v3;
        v20 = v14;
        v21 = (void (*)(void))sub_1338D44;
        v22 = sub_1338CF8;
        SceneFactory::createCreditsScreen((unsigned __int64 *)&v23, v13, (int)&v20);
        SceneStack::pushScreen(v12, (int)&v23, 0);
        v15 = v24;
        if ( v24 )
        {
          v16 = (unsigned int *)(v24 + 4);
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
        }
        if ( v21 )
          v21();
    }
  }
}


char *__fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const EventPacket *a3)
{
  ClientNetworkHandler *v3; // r5@1
  EventPacket *v4; // r6@1
  char *result; // r0@1
  _BOOL4 v6; // r0@2
  int v7; // r4@2
  int v8; // r1@3
  Entity *v9; // r4@5
  Entity *v10; // r0@6
  char *v11; // r7@6
  int v12; // r3@6
  Player *v13; // r1@6
  char *v14; // r0@8
  int v15; // r1@11
  Player *v16; // r6@11
  __int64 v17; // [sp+0h] [bp-28h]@0
  unsigned int v18; // [sp+0h] [bp-28h]@12
  unsigned int v19; // [sp+8h] [bp-20h]@3
  unsigned int v20; // [sp+Ch] [bp-1Ch]@3

  v3 = this;
  v4 = a3;
  result = (char *)Level::isUsableLevel(*((Level **)this + 6), a2);
  if ( result == (char *)1 )
  {
    v6 = EventPacket::usePlayerID(v4);
    v7 = *((_DWORD *)v3 + 6);
    if ( v6 == 1 )
    {
      EventPacket::getPlayerUniqueId((EventPacket *)&v19, (int)v4);
      result = (char *)Level::getPlayer(v7, v8, v19, v20);
    }
    else
      result = (char *)Level::getPrimaryLocalPlayer(*((Level **)v3 + 6));
    v9 = (Entity *)result;
    if ( result )
      v10 = (Entity *)Level::getPrimaryLocalPlayer(*((Level **)v3 + 6));
      Entity::getUniqueID(v10);
      Entity::getUniqueID(v9);
      v11 = EventPacket::getEventData(v4);
      result = EventPacket::getEventDetails(v4);
      v13 = *(Player **)v11;
      switch ( *(_DWORD *)v11 )
      {
        case 0:
          result = (char *)MinecraftEventing::fireEventAwardAchievement((int)v9, *((_DWORD *)v11 + 2));
          break;
        case 1:
          v14 = EventPacket::getEventData(v4);
          result = (char *)MinecraftEventing::fireEventEntityInteracted(
                             (int)v9,
                             *((_DWORD *)v14 + 2),
                             *(_QWORD *)(v11 + 12),
                             *(_QWORD *)(v11 + 12) >> 32,
                             (unsigned __int8)v11[20]);
        case 2:
          result = (char *)MinecraftEventing::fireEventPortalBuilt((int)v9, *((_DWORD *)v11 + 2));
        case 3:
          result = (char *)MinecraftEventing::fireEventPortalUsed((int)v9, *((_QWORD *)v11 + 1) >> 32);
        case 4:
          result = (char *)Level::fetchEntity(
                             *((_DWORD *)v3 + 6),
                             (int)v13,
                             *((_QWORD *)v11 + 1),
                             *((_QWORD *)v11 + 1) >> 32,
                             0);
          v16 = (Player *)result;
          if ( result )
          {
            result = (char *)Level::fetchEntity(
                               *((_DWORD *)v3 + 6),
                               v15,
                               *((_QWORD *)v11 + 2),
                               *((_QWORD *)v11 + 2) >> 32,
                               0);
            if ( result )
              result = (char *)MinecraftEventing::fireEventMobKilled(v9, v16, (Entity *)result, *((Mob **)v11 + 6), v18);
          }
        case 5:
          result = (char *)MinecraftEventing::fireEventCauldronUsed(
                             v9,
                             (Player *)*((_WORD *)v11 + 4),
                             *((_DWORD *)v11 + 3),
                             *((_WORD *)v11 + 8),
                             v17);
        case 6:
          result = (char *)MinecraftEventing::fireEventPlayerDied(
                             (Player *)*((_QWORD *)v11 + 1),
                             v12);
        case 7:
          LODWORD(v17) = *((_DWORD *)v11 + 6);
          result = (char *)MinecraftEventing::fireEventBossKilled(
                             *((Player **)v11 + 2),
                             *((_QWORD *)v11 + 2),
                             *((_QWORD *)v11 + 2) >> 32,
                             v17,
                             v19);
        case 8:
          result = (char *)MinecraftEventing::fireEventAgentCommand(
                             (int *)result + 2,
                             (const char **)result + 1,
                             (const char **)result);
        case 9:
          result = (char *)MinecraftEventing::fireEventAgentCreated(v9, v13);
        case 0xA:
          result = (char *)MinecraftEventing::fireEventPatternRemoved(
                             *((_DWORD *)v11 + 4),
                             *(_QWORD *)(v11 + 20),
                             *(_QWORD *)(v11 + 20) >> 32,
        default:
          return result;
      }
  }
  return result;
}


int __fastcall ClientNetworkHandler::allowIncomingPacketId(ClientNetworkHandler *this, const NetworkIdentifier *a2, int a3)
{
  int v3; // r0@1
  signed int v4; // r1@1

  v3 = *((_BYTE *)this + 29);
  v4 = 0;
  if ( a3 < 6 )
    v4 = 1;
  return (v3 != 0) | v4;
}


int __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const ShowStoreOfferPacket *a3)
{
  int v3; // r1@1

  v3 = *((_BYTE *)a3 + 24);
  return (*(int (**)(void))(*(_DWORD *)this + 20))();
}


Player *__fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const RespawnPacket *a3)
{
  ClientNetworkHandler *v3; // r5@1
  const RespawnPacket *v4; // r4@1
  Player *result; // r0@1

  v3 = this;
  v4 = a3;
  result = (Player *)Level::isUsableLevel(*((Level **)this + 6), a2);
  if ( result == (Player *)1 )
  {
    result = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 1));
    if ( result )
      result = (Player *)j_j_j__ZN6Player22setTeleportDestinationERK4Vec3(
                           result,
                           (const RespawnPacket *)((char *)v4 + 16));
  }
  return result;
}


Player *__fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const CameraPacket *a3)
{
  ClientNetworkHandler *v3; // r5@1
  const CameraPacket *v4; // r4@1
  Player *result; // r0@1
  __int64 v6; // r2@3
  int v7; // r4@4
  int v8; // t1@4
  int v9; // r1@4
  TripodCamera *v10; // r6@5
  int v11; // r1@5
  bool v12; // zf@5

  v3 = this;
  v4 = a3;
  result = (Player *)Level::isUsableLevel(*((Level **)this + 6), a2);
  if ( result == (Player *)1 )
  {
    result = (Player *)Level::isClientSide(*((Level **)v3 + 6));
    if ( result == (Player *)1 )
    {
      v6 = *((_QWORD *)v4 + 2);
      result = (Player *)(v6 & HIDWORD(v6));
      if ( ((unsigned int)v6 & HIDWORD(v6)) != -1 )
      {
        v8 = *((_DWORD *)v4 + 6);
        v7 = (int)v4 + 24;
        v9 = *(_DWORD *)(v7 + 4);
        result = (Player *)(v8 & v9);
        if ( (v8 & v9) != -1 )
        {
          v10 = (TripodCamera *)Level::fetchEntity(*((_DWORD *)v3 + 6), v9, v6, HIDWORD(v6), 0);
          result = (Player *)Level::fetchEntity(*((_DWORD *)v3 + 6), v11, *(_QWORD *)v7, *(_QWORD *)v7 >> 32, 0);
          v12 = v10 == 0;
          if ( v10 )
            v12 = result == 0;
          if ( !v12 )
            result = (Player *)j_j_j__ZN12TripodCamera18startTakingPictureER6Player(v10, result);
        }
      }
    }
  }
  return result;
}


void __fastcall ClientNetworkHandler::onSuccessfulLogin(ClientNetworkHandler *this, const NetworkIdentifier *a2)
{
  ClientNetworkHandler::onSuccessfulLogin(this, a2);
}


void __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const TextPacket *a3)
{
  ClientNetworkHandler *v3; // r5@1
  const TextPacket *v4; // r4@1
  const NetworkIdentifier *v5; // r7@1
  int v6; // r0@1
  int v7; // r6@1
  int v8; // r7@4
  int v9; // r0@5
  int v10; // r0@5
  int v11; // r2@5
  int v12; // r0@6
  bool v13; // zf@6
  int v14; // r0@12
  int v15; // r4@13
  void *v16; // r0@13
  unsigned int *v17; // r2@14
  signed int v18; // r1@16
  int v19; // r0@18
  int v20; // r0@19
  int v21; // r0@20
  MinecraftGame *v22; // r0@21
  int v23; // r0@21
  Social::XboxLiveUserManager *v24; // r0@21
  signed int v25; // r8@21
  int v26; // r9@21
  unsigned int *v27; // r1@22
  unsigned int v28; // r0@24
  int v29; // r0@26
  int v30; // r0@27
  int v31; // r5@28
  unsigned int *v32; // r7@35
  unsigned int v33; // r0@37
  signed int v34; // r0@42
  _DWORD *v35; // r0@45
  size_t v36; // r2@45
  _DWORD *v37; // r1@46
  int v38; // r0@48
  void *v39; // r0@49
  unsigned int *v40; // r2@51
  signed int v41; // r1@53
  int v42; // [sp+0h] [bp-38h]@28
  int v43; // [sp+8h] [bp-30h]@13
  Social::User *v44; // [sp+Ch] [bp-2Ch]@21
  int v45; // [sp+10h] [bp-28h]@21
  int v46; // [sp+14h] [bp-24h]@9

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = ClientInstance::getLocalPlayer(*((ClientInstance **)this + 1));
  v7 = v6;
  if ( !v6
    || *(_DWORD *)(v6 + 4536) != *((_DWORD *)v5 + 36)
    || NetworkIdentifier::equalsTypeData((NetworkIdentifier *)(v6 + 4392), v5) != 1
    || (v8 = *((_BYTE *)v4 + 12), v8 != Player::getClientSubId((Player *)v7))
    || (v9 = ClientInstance::getMinecraftGame(*((ClientInstance **)v3 + 1)),
        v10 = (*(int (**)(void))(**(_DWORD **)(v9 + 412) + 48))(),
        v11 = *((_BYTE *)v4 + 13),
        ((*(int (**)(void))(*(_DWORD *)v10 + 8))() | 2) != 3) )
  {
    v12 = *((_BYTE *)v4 + 13);
    v13 = v12 == 2;
    if ( v12 != 2 )
      v13 = *((_BYTE *)v4 + 36) == 0;
    if ( v13 )
      sub_21E8AF4(&v46, (int *)v4 + 5);
    else
      I18n::get(&v46, (int *)v4 + 5, (unsigned __int64 *)v4 + 3);
    switch ( *((_BYTE *)v4 + 13) )
    {
      case 0:
        v14 = ClientInstance::getGuiData(*((ClientInstance **)v3 + 1));
        GuiData::displayClientMessage(v14, &v46);
        break;
      case 4:
        v15 = ClientInstance::getGuiData(*((ClientInstance **)v3 + 1));
        sub_21E94B4((void **)&v43, (const char *)&unk_257BC67);
        GuiData::showJukeboxPopupNotice(v15, (int **)&v46, &v43);
        v16 = (void *)(v43 - 12);
        if ( (int *)(v43 - 12) != &dword_28898C0 )
        {
          v17 = (unsigned int *)(v43 - 4);
          if ( !&pthread_create )
            goto LABEL_59;
          __dmb();
          do
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          goto LABEL_60;
        }
      case 2:
        v19 = ClientInstance::getGuiData(*((ClientInstance **)v3 + 1));
        GuiData::displayLocalizableMessage(v19, (int *)v4 + 5, (unsigned __int64 *)v4 + 3, 0);
      case 3:
        v20 = ClientInstance::getGuiData(*((ClientInstance **)v3 + 1));
        GuiData::showPopupNotice(v20, (int **)v4 + 4, &v46);
      case 7:
        v21 = ClientInstance::getGuiData(*((ClientInstance **)v3 + 1));
        GuiData::displayWhisperMessage(v21, (int *)v4 + 4, &v46, (const void **)v4 + 10);
      case 1:
        v22 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)v3 + 1));
        v23 = MinecraftGame::getUserManager(v22);
        Social::UserManager::getPrimaryUser((Social::UserManager *)&v44, v23);
        v24 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v44);
        v25 = Social::XboxLiveUserManager::checkPrivilegeSilently(v24, 252);
        v26 = v45;
        if ( v45 )
          v27 = (unsigned int *)(v45 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v28 = __ldrex(v27);
            while ( __strex(v28 - 1, v27) );
          }
          else
            v28 = (*v27)--;
          if ( v28 == 1 )
            v32 = (unsigned int *)(v26 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
            if ( &pthread_create )
            {
              __dmb();
              do
                v33 = __ldrex(v32);
              while ( __strex(v33 - 1, v32) );
            }
            else
              v33 = (*v32)--;
            if ( v33 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
        v34 = 0;
        if ( !v7 )
          v34 = 1;
        if ( v34 | v25
          || (v35 = (_DWORD *)*((_DWORD *)v4 + 4), (v36 = *(v35 - 3)) == 0)
          || (v37 = *(_DWORD **)(v7 + 4316), v36 == *(v37 - 3)) && !memcmp(v35, v37, v36) )
          v38 = ClientInstance::getGuiData(*((ClientInstance **)v3 + 1));
          GuiData::displayChatMessage(v38, (int *)v4 + 4, &v46, (const void **)v4 + 10);
      case 5:
        v29 = ClientInstance::getGuiData(*((ClientInstance **)v3 + 1));
        GuiData::showTipMessage(v29, &v46);
      case 6:
        v30 = ClientInstance::getGuiData(*((ClientInstance **)v3 + 1));
        GuiData::displaySystemMessage(v30, &v46);
      case 8:
        v31 = ClientInstance::getGuiData(*((ClientInstance **)v3 + 1));
        sub_21E8AF4(&v42, &v46);
        GuiData::displayAnnouncementMessage(v31, (int)v4 + 16, &v42, (const void **)v4 + 10);
        v16 = (void *)(v42 - 12);
        if ( (int *)(v42 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v42 - 4);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
LABEL_59:
            v18 = (*v17)--;
LABEL_60:
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
      default:
    }
    v39 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v46 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
      }
      else
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j__ZdlPv_9(v39);
  }
}


int __fastcall ClientNetworkHandler::ClientNetworkHandler(int result, int a2, int a3, int a4, int a5, int a6, int a7)
{
  __int64 v7; // r4@1
  int v8; // r12@1

  HIDWORD(v7) = a5;
  LODWORD(v7) = &off_26E61E0;
  v8 = result + 8;
  *(_QWORD *)result = v7;
  *(_DWORD *)v8 = a2;
  *(_DWORD *)(v8 + 4) = a3;
  *(_DWORD *)(v8 + 8) = a4;
  *(_DWORD *)(v8 + 12) = a7;
  *(_DWORD *)(v8 + 16) = a6;
  *(_WORD *)(result + 28) = 256;
  return result;
}


signed int __fastcall ClientNetworkHandler::handle(ClientNetworkHandler *this, const NetworkIdentifier *a2, const StopSoundPacket *a3)
{
  ClientNetworkHandler *v3; // r5@1
  const StopSoundPacket *v4; // r4@1
  signed int result; // r0@1
  Level *v6; // r0@2

  v3 = this;
  v4 = a3;
  result = Level::isUsableLevel(*((Level **)this + 6), a2);
  if ( result == 1 )
  {
    v6 = (Level *)*((_DWORD *)v3 + 6);
    if ( *((_BYTE *)v4 + 20) )
      result = j_j_j__ZN5Level19handleStopAllSoundsEv(v6);
    else
      result = j_j_j__ZN5Level20handleStopSoundEventERKSs((int)v6);
  }
  return result;
}


void __fastcall ClientNetworkHandler::onDisconnect(int a1, int a2, const void **a3, int a4)
{
  int v4; // r5@1
  int v5; // r9@1
  const void **v6; // r8@1
  MinecraftGame *v7; // r0@1
  MinecraftGame *v8; // r0@1
  ClientInstance *v9; // r0@1
  Minecraft *v10; // r0@1
  ThirdPartyInfo *v11; // r4@3
  MinecraftGame *v12; // r0@4
  ClientInstance *v13; // r0@4
  MinecraftGame *v20; // r0@5
  ClientInstance *v21; // r0@5
  int v23; // r0@5
  MinecraftGame *v24; // r0@6
  int v25; // r7@6
  int v26; // r3@6
  double v27; // r0@7
  MinecraftGame *v28; // r0@10
  int v29; // r6@10
  MinecraftGame *v30; // r0@11
  ClientInstance *v31; // r0@11
  MinecraftGame *v33; // r0@13
  int v34; // r4@13
  int i; // r6@13
  int v36; // r7@14
  MinecraftGame *v37; // r0@14
  MinecraftGame *v38; // r0@18
  ResourcePackManager *v39; // r0@18
  GuiData *v40; // r0@18
  void *v41; // r6@18
  ClientInstance *v42; // r0@18
  MinecraftGame *v43; // r0@19
  int v44; // r4@19
  MinecraftGame *v45; // r0@19
  int v46; // r5@19
  int v47; // r4@19
  unsigned int *v48; // r1@20
  unsigned int v49; // r0@22
  MinecraftGame *v50; // r0@24
  int v51; // r4@24
  MinecraftGame *v52; // r0@24
  int v53; // r7@24
  int v54; // r4@24
  unsigned int *v55; // r1@25
  unsigned int v56; // r0@27
  unsigned int *v57; // r5@31
  unsigned int v58; // r0@33
  unsigned int *v59; // r6@37
  unsigned int v60; // r0@39
  void *v61; // r0@46
  unsigned int *v62; // r2@47
  signed int v63; // r1@49
  void *v64; // r0@56
  ClientInstance *v65; // r0@57
  MinecraftGame *v66; // r0@58
  int v67; // r7@58
  MinecraftGame *v68; // r0@58
  int v69; // r4@58
  MinecraftGame *v70; // r0@60
  Social::MultiplayerServiceManager *v71; // r0@60
  MinecraftGame *v72; // r0@63
  int v73; // r7@63
  MinecraftGame *v74; // r0@63
  int v75; // r4@63
  int *v76; // r0@66
  int v77; // r4@66
  unsigned int *v78; // r1@67
  unsigned int v79; // r0@69
  unsigned int *v80; // r5@73
  unsigned int v81; // r0@75
  MinecraftGame *v82; // r0@77
  int v83; // r7@77
  MinecraftGame *v84; // r0@77
  int v85; // r5@77
  int *v86; // r0@80
  int v87; // r4@80
  unsigned int *v88; // r1@81
  unsigned int v89; // r0@83
  void *v90; // r0@88
  void *v91; // r0@89
  unsigned int *v92; // r5@97
  unsigned int v93; // r0@99
  unsigned int *v94; // r2@101
  signed int v95; // r1@103
  int v96; // r4@106
  unsigned int *v97; // r1@107
  unsigned int v98; // r0@109
  void *v99; // r0@114
  void *v100; // r0@115
  unsigned int *v101; // r2@121
  signed int v102; // r1@123
  unsigned int *v103; // r2@125
  signed int v104; // r1@127
  unsigned int *v105; // r5@131
  unsigned int v106; // r0@133
  void *v107; // r0@150
  void *v108; // r0@151
  unsigned int *v109; // r2@161
  signed int v110; // r1@163
  unsigned int *v111; // r2@165
  signed int v112; // r1@167
  unsigned int *v113; // r2@177
  signed int v114; // r1@179
  unsigned int *v115; // r2@181
  signed int v116; // r1@183
  __int64 v117; // [sp+0h] [bp-C0h]@0
  char *v118; // [sp+8h] [bp-B8h]@6
  int v119; // [sp+10h] [bp-B0h]@80
  int v120; // [sp+18h] [bp-A8h]@64
  int v121; // [sp+20h] [bp-A0h]@63
  char v122; // [sp+24h] [bp-9Ch]@80
  int v123; // [sp+28h] [bp-98h]@80
  int v124; // [sp+30h] [bp-90h]@78
  int v125; // [sp+34h] [bp-8Ch]@77
  int v126; // [sp+38h] [bp-88h]@77
  char v127; // [sp+3Ch] [bp-84h]@106
  int v128; // [sp+40h] [bp-80h]@106
  int v129; // [sp+48h] [bp-78h]@66
  int v130; // [sp+50h] [bp-70h]@59
  int v131; // [sp+58h] [bp-68h]@58
  char v132; // [sp+5Ch] [bp-64h]@66
  int v133; // [sp+60h] [bp-60h]@66
  void *v134; // [sp+64h] [bp-5Ch]@24
  int v135; // [sp+6Ch] [bp-54h]@24
  char v136; // [sp+70h] [bp-50h]@24
  int v137; // [sp+74h] [bp-4Ch]@24
  void *v138; // [sp+78h] [bp-48h]@19
  int v139; // [sp+80h] [bp-40h]@19
  char v140; // [sp+84h] [bp-3Ch]@19
  int v141; // [sp+88h] [bp-38h]@19

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(a1 + 4));
  MinecraftGame::setHasConnectionToRemoteServer(v7, 0);
  v8 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(v4 + 4));
  v9 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(v8);
  v10 = (Minecraft *)ClientInstance::getServerData(v9);
  if ( Minecraft::isOnlineClient(v10) || !*(_DWORD *)(v4 + 24) )
  {
    v11 = (ThirdPartyInfo *)(NetworkHandler::getConnectionInfo(*(NetworkHandler **)(v4 + 8)) + 20);
    if ( ThirdPartyInfo::isValid(v11) == 1 )
    {
      v12 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(v4 + 4));
      v13 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(v12);
      _R10 = ClientInstance::getServerPingTime(v13);
      __asm { VMOV            S0, R10 }
      _R0 = &ClientInstance::INVALID_PING_TIME;
      __asm
      {
        VLDR            S16, [R0]
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !_ZF )
        v20 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(v4 + 4));
        v21 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(v20);
        _R7 = ClientInstance::getServerConnectionTime(v21);
        v23 = sub_21E7D6C(v6, "disconnectionScreen.serverFull");
        __asm { VMOV            D9, R7, R6 }
        if ( v23 )
        {
          sub_21E7D6C(v6, "disconnectionScreen.timeout");
          v24 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(v4 + 4));
          v25 = MinecraftGame::getEventing(v24);
          v118 = ThirdPartyInfo::getCreatorName(v11);
          __asm { VSTR            D9, [SP,#0xC0+var_C0] }
          if ( _ZF )
            HIDWORD(v27) = 4;
          else
            HIDWORD(v27) = 1;
          LODWORD(v27) = v25;
        }
        else
          v28 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(v4 + 4));
          v29 = MinecraftGame::getEventing(v28);
          v27 = COERCE_DOUBLE(__PAIR__(3, v29));
        MinecraftEventing::fireServerConnectionEvent(v27, _R10, v26, v117, (const char **)v118);
        v30 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(v4 + 4));
        v31 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(v30);
        __asm { VMOV            R1, S16 }
        ClientInstance::setServerPingTime(v31, _R1);
    }
    if ( *(_DWORD *)(v4 + 24) )
      v33 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(v4 + 4));
      MinecraftGame::requestLeaveGame(v33, 1, 0);
      v34 = *(_DWORD *)Level::getUsers(*(Level **)(v4 + 24));
      for ( i = *((_DWORD *)Level::getUsers(*(Level **)(v4 + 24)) + 1); i != v34; v34 += 4 )
        v36 = *(_DWORD *)v34;
        v37 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(v4 + 4));
        if ( v36 != MinecraftGame::getPrimaryLocalPlayer(v37) )
          (*(void (**)(void))(**(_DWORD **)v34 + 44))();
    ClientInstance::onGameEventNotification(*(_DWORD *)(v4 + 4));
    if ( !*(_BYTE *)(v4 + 28) )
      v38 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(v4 + 4));
      v39 = (ResourcePackManager *)MinecraftGame::getResourcePackManager(v38);
      ResourcePackManager::setCanUseGlobalPackStack(v39, 1);
      *(_BYTE *)(v4 + 28) = 1;
      v40 = (GuiData *)ClientInstance::getGuiData(*(ClientInstance **)(v4 + 4));
      GuiData::clearMessages(v40);
      v41 = operator new(0x1Cu);
      LeaveLevelProgressHandler::LeaveLevelProgressHandler((int)v41);
      v42 = *(ClientInstance **)(v4 + 4);
      if ( v5 == 1 )
        v43 = (MinecraftGame *)ClientInstance::getMinecraftGame(v42);
        v44 = MinecraftGame::getMainSceneStack(v43);
        v45 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(v4 + 4));
        v46 = MinecraftGame::getPrimarySceneFactory(v45);
        sub_21E94B4((void **)&v139, "world_loading_progress_screen");
        v138 = v41;
        SceneFactory::createLeaveLevelScreen(&v140, v46, &v139, (int *)&v138, 1);
        SceneStack::pushScreen(v44, (int)&v140, 0);
        v47 = v141;
        if ( v141 )
          v48 = (unsigned int *)(v141 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v49 = __ldrex(v48);
            while ( __strex(v49 - 1, v48) );
          }
            v49 = (*v48)--;
          if ( v49 == 1 )
            v57 = (unsigned int *)(v47 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 8))(v47);
            if ( &pthread_create )
            {
              __dmb();
              do
                v58 = __ldrex(v57);
              while ( __strex(v58 - 1, v57) );
            }
            else
              v58 = (*v57)--;
            if ( v58 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 12))(v47);
        if ( v138 )
          (*(void (**)(void))(*(_DWORD *)v138 + 4))();
        v138 = 0;
        v61 = (void *)(v139 - 12);
        if ( (int *)(v139 - 12) != &dword_28898C0 )
          v62 = (unsigned int *)(v139 - 4);
              v63 = __ldrex(v62);
            while ( __strex(v63 - 1, v62) );
            goto LABEL_158;
LABEL_157:
          v63 = (*v62)--;
LABEL_158:
          if ( v63 <= 0 )
            j_j_j_j__ZdlPv_9(v61);
          return;
      else
        v50 = (MinecraftGame *)ClientInstance::getMinecraftGame(v42);
        v51 = MinecraftGame::getMainSceneStack(v50);
        v52 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(v4 + 4));
        v53 = MinecraftGame::getPrimarySceneFactory(v52);
        sub_21E94B4((void **)&v135, "disconnect_progress_screen");
        v134 = v41;
        SceneFactory::createLeaveLevelScreen(&v136, v53, &v135, (int *)&v134, 1);
        SceneStack::pushScreen(v51, (int)&v136, 0);
        v54 = v137;
        if ( v137 )
          v55 = (unsigned int *)(v137 + 4);
              v56 = __ldrex(v55);
            while ( __strex(v56 - 1, v55) );
            v56 = (*v55)--;
          if ( v56 == 1 )
            v59 = (unsigned int *)(v54 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v54 + 8))(v54);
                v60 = __ldrex(v59);
              while ( __strex(v60 - 1, v59) );
              v60 = (*v59)--;
            if ( v60 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v54 + 12))(v54);
        if ( v134 )
          (*(void (**)(void))(*(_DWORD *)v134 + 4))();
        v134 = 0;
        v64 = (void *)(v135 - 12);
        if ( (int *)(v135 - 12) != &dword_28898C0 )
          v94 = (unsigned int *)(v135 - 4);
              v95 = __ldrex(v94);
            while ( __strex(v95 - 1, v94) );
            v95 = (*v94)--;
          if ( v95 <= 0 )
            j_j_j_j__ZdlPv_9(v64);
        v65 = *(ClientInstance **)(v4 + 4);
        if ( *(_DWORD *)(v4 + 24) )
          v66 = (MinecraftGame *)ClientInstance::getMinecraftGame(v65);
          v67 = MinecraftGame::getMainSceneStack(v66);
          v68 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(v4 + 4));
          v69 = MinecraftGame::getPrimarySceneFactory(v68);
          sub_21E94B4((void **)&v131, (const char *)&unk_257BC67);
          if ( *((_DWORD *)*v6 - 3) )
            sub_21E8AF4(&v130, (int *)v6);
            sub_21E94B4((void **)&v130, "disconnectionScreen.noReason");
          v76 = (int *)sub_21E94B4((void **)&v129, (const char *)&unk_257BC67);
          SceneFactory::createDisconnectScreen((unsigned __int64 *)&v132, v69, &v131, &v130, v76);
          SceneStack::pushScreen(v67, (int)&v132, 0);
          v77 = v133;
          if ( v133 )
            v78 = (unsigned int *)(v133 + 4);
                v79 = __ldrex(v78);
              while ( __strex(v79 - 1, v78) );
              v79 = (*v78)--;
            if ( v79 == 1 )
              v80 = (unsigned int *)(v77 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v77 + 8))(v77);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v81 = __ldrex(v80);
                while ( __strex(v81 - 1, v80) );
              }
              else
                v81 = (*v80)--;
              if ( v81 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v77 + 12))(v77);
          v90 = (void *)(v129 - 12);
          if ( (int *)(v129 - 12) != &dword_28898C0 )
            v101 = (unsigned int *)(v129 - 4);
                v102 = __ldrex(v101);
              while ( __strex(v102 - 1, v101) );
              v102 = (*v101)--;
            if ( v102 <= 0 )
              j_j_j_j__ZdlPv_9(v90);
          v91 = (void *)(v130 - 12);
          if ( (int *)(v130 - 12) != &dword_28898C0 )
            v103 = (unsigned int *)(v130 - 4);
                v104 = __ldrex(v103);
              while ( __strex(v104 - 1, v103) );
              v104 = (*v103)--;
            if ( v104 <= 0 )
              j_j_j_j__ZdlPv_9(v91);
          v61 = (void *)(v131 - 12);
          if ( (int *)(v131 - 12) != &dword_28898C0 )
            v62 = (unsigned int *)(v131 - 4);
                v63 = __ldrex(v62);
              while ( __strex(v63 - 1, v62) );
              goto LABEL_158;
            goto LABEL_157;
          v70 = (MinecraftGame *)ClientInstance::getMinecraftGame(v65);
          v71 = (Social::MultiplayerServiceManager *)MinecraftGame::getMultiplayerServiceManager(v70);
          if ( Social::MultiplayerServiceManager::isInRealm(v71) != 1
            || sub_21E7D6C(v6, "disconnectionScreen.outdatedClient")
            && sub_21E7D6C(v6, "disconnectionScreen.outdatedServer") )
            v72 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(v4 + 4));
            v73 = MinecraftGame::getMainSceneStack(v72);
            v74 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(v4 + 4));
            v75 = MinecraftGame::getPrimarySceneFactory(v74);
            sub_21E94B4((void **)&v121, (const char *)&unk_257BC67);
            if ( *((_DWORD *)*v6 - 3) )
              sub_21E8AF4(&v120, (int *)v6);
              sub_21E94B4((void **)&v120, "disconnectionScreen.disconnected");
            v86 = (int *)sub_21E94B4((void **)&v119, (const char *)&unk_257BC67);
            SceneFactory::createDisconnectScreen((unsigned __int64 *)&v122, v75, &v121, &v120, v86);
            SceneStack::pushScreen(v73, (int)&v122, 0);
            v87 = v123;
            if ( v123 )
              v88 = (unsigned int *)(v123 + 4);
                  v89 = __ldrex(v88);
                while ( __strex(v89 - 1, v88) );
                v89 = (*v88)--;
              if ( v89 == 1 )
                v92 = (unsigned int *)(v87 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v87 + 8))(v87);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v93 = __ldrex(v92);
                  while ( __strex(v93 - 1, v92) );
                }
                else
                  v93 = (*v92)--;
                if ( v93 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v87 + 12))(v87);
            v99 = (void *)(v119 - 12);
            if ( (int *)(v119 - 12) != &dword_28898C0 )
              v109 = (unsigned int *)(v119 - 4);
                  v110 = __ldrex(v109);
                while ( __strex(v110 - 1, v109) );
                v110 = (*v109)--;
              if ( v110 <= 0 )
                j_j_j_j__ZdlPv_9(v99);
            v100 = (void *)(v120 - 12);
            if ( (int *)(v120 - 12) != &dword_28898C0 )
              v111 = (unsigned int *)(v120 - 4);
                  v112 = __ldrex(v111);
                while ( __strex(v112 - 1, v111) );
                v112 = (*v111)--;
              if ( v112 <= 0 )
                j_j_j_j__ZdlPv_9(v100);
            v61 = (void *)(v121 - 12);
            if ( (int *)(v121 - 12) != &dword_28898C0 )
              v62 = (unsigned int *)(v121 - 4);
                  v63 = __ldrex(v62);
                while ( __strex(v63 - 1, v62) );
                goto LABEL_158;
              goto LABEL_157;
            v82 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(v4 + 4));
            v83 = MinecraftGame::getMainSceneStack(v82);
            v84 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(v4 + 4));
            v85 = MinecraftGame::getPrimarySceneFactory(v84);
            sub_21E8AF4(&v126, (int *)v6);
            sub_21E7408((const void **)&v126, "Realms.title", 0xCu);
            sub_21E8AF4(&v125, (int *)v6);
            sub_21E7408((const void **)&v125, "Realms", 6u);
            if ( sub_21E76A0((int *)v6, "Server", 0, 6u) == -1 )
              sub_21E94B4((void **)&v124, "disconnect.realms_disconnect_screen");
              sub_21E8AF4(&v124, (int *)&Util::EMPTY_STRING);
            SceneFactory::createDisconnectScreen((unsigned __int64 *)&v127, v85, &v126, &v125, &v124);
            SceneStack::pushScreen(v83, (int)&v127, 0);
            v96 = v128;
            if ( v128 )
              v97 = (unsigned int *)(v128 + 4);
                  v98 = __ldrex(v97);
                while ( __strex(v98 - 1, v97) );
                v98 = (*v97)--;
              if ( v98 == 1 )
                v105 = (unsigned int *)(v96 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v96 + 8))(v96);
                    v106 = __ldrex(v105);
                  while ( __strex(v106 - 1, v105) );
                  v106 = (*v105)--;
                if ( v106 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v96 + 12))(v96);
            v107 = (void *)(v124 - 12);
            if ( (int *)(v124 - 12) != &dword_28898C0 )
              v113 = (unsigned int *)(v124 - 4);
                  v114 = __ldrex(v113);
                while ( __strex(v114 - 1, v113) );
                v114 = (*v113)--;
              if ( v114 <= 0 )
                j_j_j_j__ZdlPv_9(v107);
            v108 = (void *)(v125 - 12);
            if ( (int *)(v125 - 12) != &dword_28898C0 )
              v115 = (unsigned int *)(v125 - 4);
                  v116 = __ldrex(v115);
                while ( __strex(v116 - 1, v115) );
                v116 = (*v115)--;
              if ( v116 <= 0 )
                j_j_j_j__ZdlPv_9(v108);
            v61 = (void *)(v126 - 12);
            if ( (int *)(v126 - 12) != &dword_28898C0 )
              v62 = (unsigned int *)(v126 - 4);
  }
}
