

signed int __fastcall ClientInstanceScreenModel::isPlayerHungry(ClientInstanceScreenModel *this)
{
  Player *v1; // r0@1
  signed int result; // r0@2

  v1 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  if ( v1 )
    result = Player::isHungry(v1);
  else
    result = 0;
  return result;
}


int __fastcall ClientInstanceScreenModel::getPreexistingChatMessages(ClientInstanceScreenModel *this, int a2)
{
  GuiData *v2; // r4@1
  int v3; // r0@1

  v2 = this;
  v3 = ClientInstance::getGuiData(*(ClientInstance **)(a2 + 16));
  return GuiData::getPreexistingMessages(v2, v3);
}


int __fastcall ClientInstanceScreenModel::getPlayerExp(ClientInstanceScreenModel *this)
{
  Player *v1; // r0@1
  int result; // r0@5

  v1 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  _R0 = Player::getLevelProgress(v1);
  __asm
  {
    VMOV            S2, R0
    VLDR            S0, =0.0
    VMOV.F32        S4, #1.0
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S2, S4
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S2 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S0, S4 }
  __asm { VMOV            R0, S0 }
  return result;
}


void __fastcall ClientInstanceScreenModel::~ClientInstanceScreenModel(ClientInstanceScreenModel *this)
{
  ClientInstanceScreenModel::~ClientInstanceScreenModel(this);
}


int __fastcall ClientInstanceScreenModel::navigateToChatScreen(ClientInstanceScreenModel *this, ClientInstance *a2)
{
  return j_j_j__ZN20ClientInputCallbacks23handleChatButtonReleaseER14ClientInstance(
           *((ClientInputCallbacks **)this + 4),
           a2);
}


int __fastcall ClientInstanceScreenModel::canUseSeed(ClientInstanceScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  Entity *v2; // r5@1
  char *v3; // r0@1
  __int64 v4; // r6@1
  int v5; // r4@1
  signed __int8 v6; // r8@1
  int v7; // r0@1
  __int64 v9; // [sp+0h] [bp-68h]@1
  int v10; // [sp+8h] [bp-60h]@1
  char v11; // [sp+Ch] [bp-5Ch]@1
  char v12; // [sp+10h] [bp-58h]@1
  __int64 v13; // [sp+14h] [bp-54h]@1
  int v14; // [sp+1Ch] [bp-4Ch]@1

  v1 = this;
  v2 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  v3 = MinecraftScreenModel::getHitResult(v1);
  HitResult::HitResult((int)&v11, (int)v3);
  v4 = v13;
  v5 = v14;
  v6 = v12;
  v7 = *(_DWORD *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 908))(v2);
  v9 = v4;
  v10 = v5;
  return Item::canUseSeed(v7, v2, (const BlockPos *)&v9, v6);
}


char *__fastcall ClientInstanceScreenModel::getThirdPartyServerName(ClientInstanceScreenModel *this)
{
  NetworkHandler *v1; // r0@1
  int v2; // r0@1

  v1 = (NetworkHandler *)ClientInstance::getClientNetworkSystem(*((ClientInstance **)this + 4));
  v2 = NetworkHandler::getConnectionInfo(v1);
  return ThirdPartyInfo::getCreatorName((ThirdPartyInfo *)(v2 + 20));
}


int __fastcall ClientInstanceScreenModel::isChatMute(ClientInstanceScreenModel *this)
{
  GuiData *v1; // r0@1

  v1 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)this + 4));
  return j_j_j__ZNK7GuiData10isMuteChatEv(v1);
}


int __fastcall ClientInstanceScreenModel::getCreativeItemCount(int a1, int a2)
{
  int v2; // r4@1
  Player *v3; // r0@1
  int result; // r0@2
  unsigned __int64 *v5; // r0@4
  char *v6; // r0@5

  v2 = a2;
  v3 = (Player *)ClientInstance::getLocalPlayer(*(ClientInstance **)(a1 + 16));
  if ( v3 )
  {
    if ( v2 )
    {
      v5 = (unsigned __int64 *)Player::getFilteredCreativeItemList((int)v3, v2);
      result = -858993459 * ((signed int)((*v5 >> 32) - *v5) >> 4);
    }
    else
      v6 = Player::getCreativeItemList(v3);
      result = 954437177 * ((signed int)((*(_QWORD *)v6 >> 32) - *(_QWORD *)v6) >> 3);
  }
  else
    result = 0;
  return result;
}


void __fastcall ClientInstanceScreenModel::sendStructureBlockUpdatePacket(ClientInstanceScreenModel *this, const BlockPos *a2, bool a3)
{
  ClientInstanceScreenModel *v3; // r5@1
  bool v4; // r4@1
  const BlockPos *v5; // r6@1
  Entity *v6; // r0@1
  BlockSource *v7; // r0@2
  BlockEntity *v8; // r0@2
  StructureBlockEntity *v9; // r7@2
  int v10; // r8@4
  char *v11; // r9@4
  char v12; // r7@4
  int v13; // r2@4
  int v14; // r3@4
  int v15; // r6@4
  int v16; // r0@4
  int v17; // r3@4
  void *v18; // r0@4
  void *v19; // r0@5
  unsigned int *v20; // r2@7
  signed int v21; // r1@9
  unsigned int *v22; // r2@11
  signed int v23; // r1@13
  void **v24; // [sp+0h] [bp-A8h]@4
  signed int v25; // [sp+4h] [bp-A4h]@4
  signed int v26; // [sp+8h] [bp-A0h]@4
  char v27; // [sp+Ch] [bp-9Ch]@4
  int v28; // [sp+10h] [bp-98h]@4
  int v29; // [sp+14h] [bp-94h]@4
  int v30; // [sp+18h] [bp-90h]@4
  int v31; // [sp+1Ch] [bp-8Ch]@4
  int v32; // [sp+20h] [bp-88h]@4
  int v33; // [sp+24h] [bp-84h]@4
  char v34; // [sp+80h] [bp-28h]@4
  bool v35; // [sp+81h] [bp-27h]@4

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  if ( v6 )
  {
    v7 = (BlockSource *)Entity::getRegion(v6);
    v8 = (BlockEntity *)BlockSource::getBlockEntity(v7, v5);
    v9 = v8;
    if ( v8 )
    {
      if ( *(_DWORD *)BlockEntity::getType(v8) == 32 )
      {
        v10 = StructureBlockEntity::getStructureType(v9);
        v11 = StructureBlockEntity::getStructureData(v9);
        v12 = StructureBlockEntity::getShowBoundingBox(v9);
        v13 = *(_DWORD *)v5;
        v14 = *((_DWORD *)v5 + 1);
        v15 = *((_DWORD *)v5 + 2);
        v25 = 2;
        v26 = 1;
        v27 = 0;
        v24 = &off_26E4FB8;
        v28 = v13;
        v29 = v14;
        v30 = v15;
        v31 = v10;
        StructureEditorData::StructureEditorData((int)&v32, (int)v11);
        v34 = v12;
        v35 = v4;
        v16 = ClientInstance::getPacketSender(*((ClientInstance **)v3 + 4));
        (*(void (__cdecl **)(int, void ***, _DWORD, int, void **, signed int, signed int, _DWORD))(*(_DWORD *)v16 + 8))(
          v16,
          &v24,
          *(_DWORD *)(*(_DWORD *)v16 + 8),
          v17,
          &off_26E4FB8,
          2,
          1,
          *(_DWORD *)&v27);
        v18 = (void *)(v33 - 12);
        if ( (int *)(v33 - 12) != &dword_28898C0 )
        {
          v20 = (unsigned int *)(v33 - 4);
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
            j_j_j_j__ZdlPv_9(v18);
        }
        v19 = (void *)(v32 - 12);
        if ( (int *)(v32 - 12) != &dword_28898C0 )
          v22 = (unsigned int *)(v32 - 4);
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
            v23 = (*v22)--;
          if ( v23 <= 0 )
            j_j_j_j__ZdlPv_9(v19);
      }
    }
  }
}


Entity *__fastcall ClientInstanceScreenModel::sendCommandBlockUpdatePacket(int a1, unsigned __int64 *a2)
{
  int v2; // r4@1
  unsigned __int64 *v3; // r5@1
  Entity *result; // r0@1
  int v5; // r0@2
  Entity *v6; // r5@2
  CommandBlockComponent *v7; // r0@5
  char *v8; // r6@5
  BaseCommandBlock *v9; // r5@5
  int v10; // r1@5
  int v11; // r0@5
  char v12; // [sp+8h] [bp-18h]@5

  v2 = a1;
  v3 = a2;
  result = (Entity *)ClientInstance::getLocalPlayer(*(ClientInstance **)(a1 + 16));
  if ( result )
  {
    v5 = Entity::getLevel(result);
    result = (Entity *)Level::fetchEntity(v5, 0, *v3, *v3 >> 32, 0);
    v6 = result;
    if ( result )
    {
      result = (Entity *)(*(int (**)(void))(*(_DWORD *)result + 488))();
      if ( result == (Entity *)524388 )
      {
        result = (Entity *)Entity::getCommandBlockComponent(v6);
        if ( result )
        {
          Entity::getRuntimeID((Entity *)&v12, (int)v6);
          v7 = (CommandBlockComponent *)Entity::getCommandBlockComponent(v6);
          v8 = CommandBlockComponent::getBaseCommandBlock(v7);
          v9 = (BaseCommandBlock *)operator new(0x38u);
          CommandBlockUpdatePacket::CommandBlockUpdatePacket(v9, v10, *(__int64 *)&v12, (BaseCommandBlock *)v8);
          v11 = ClientInstance::getPacketSender(*(ClientInstance **)(v2 + 16));
          (*(void (**)(void))(*(_DWORD *)v11 + 8))();
          result = (Entity *)(*(int (__fastcall **)(BaseCommandBlock *))(*(_DWORD *)v9 + 4))(v9);
        }
      }
    }
  }
  return result;
}


char *__fastcall ClientInstanceScreenModel::getTitleMessage(ClientInstanceScreenModel *this)
{
  GuiData *v1; // r0@1

  v1 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)this + 4));
  return GuiData::getTitleMessage(v1);
}


int __fastcall ClientInstanceScreenModel::shouldDisplayPlayerPosition(ClientInstanceScreenModel *this)
{
  Entity *v1; // r0@1
  Level *v2; // r0@2
  unsigned __int64 *v3; // r0@2
  int result; // r0@3

  v1 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  result = 0;
  if ( v1 )
  {
    v2 = (Level *)Entity::getLevel(v1);
    v3 = (unsigned __int64 *)Level::getGameRules(v2);
    if ( GameRules::getBool(v3, (int **)&GameRules::SHOW_COORDINATES) )
      result = 1;
  }
  return result;
}


int __fastcall ClientInstanceScreenModel::getPickRange(ClientInstanceScreenModel *this)
{
  ClientInstanceScreenModel *v1; // r4@1
  int v2; // r5@1
  int (__fastcall *v3)(int, int *, int); // r6@1
  ClientInputHandler *v4; // r0@1
  int v5; // r0@1
  int v6; // r0@1
  int v8; // [sp+4h] [bp-14h]@1

  v1 = this;
  v2 = *(_DWORD *)(ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4)) + 5172);
  v3 = *(int (__fastcall **)(int, int *, int))(*(_DWORD *)v2 + 44);
  v4 = (ClientInputHandler *)ClientInstance::getInput(*((ClientInstance **)v1 + 4));
  v8 = ClientInputHandler::getCurrentInputMode(v4);
  v5 = ClientInstance::getHoloInput(*((ClientInstance **)v1 + 4));
  v6 = (*(int (**)(void))(*(_DWORD *)v5 + 76))();
  return v3(v2, &v8, v6);
}


_DWORD *__fastcall ClientInstanceScreenModel::ClientInstanceScreenModel(int a1, int a2, ClientInstance *a3, int a4, int a5)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)MinecraftScreenModel::MinecraftScreenModel(a1, a2, a3, a4, a5);
  *result = &off_26E4FA8;
  return result;
}


_DWORD *__fastcall ClientInstanceScreenModel::removeBossEventListener(int a1, int a2)
{
  int v2; // r4@1
  _DWORD *result; // r0@1

  v2 = a2;
  result = (_DWORD *)ClientInstance::getLevel(*(ClientInstance **)(a1 + 16));
  if ( result )
    result = j_j_j__ZN5Level23removeBossEventListenerEP17BossEventListener((int)result, v2);
  return result;
}


void __fastcall ClientInstanceScreenModel::displaySystemMessage(int a1, int *a2)
{
  ClientInstanceScreenModel::displaySystemMessage(a1, a2);
}


int __fastcall ClientInstanceScreenModel::setMenuPointerPressed(ClientInstanceScreenModel *this, bool a2)
{
  bool v2; // r4@1
  GuiData *v3; // r0@1

  v2 = a2;
  v3 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)this + 4));
  return j_j_j__ZN7GuiData21setMenuPointerPressedEb(v3, v2);
}


int __fastcall ClientInstanceScreenModel::createBookScreenManager(ClientInstanceScreenModel *this, int a2, int a3)
{
  int v3; // r5@1
  ClientInstanceScreenModel *v4; // r8@1
  int v5; // r6@1
  int v6; // r7@1
  int v7; // r4@1
  void *v8; // r5@1
  int result; // r0@1

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = MinecraftScreenModel::getPlayer((MinecraftScreenModel *)a2);
  v7 = ClientInstance::getPacketSender(*(ClientInstance **)(v3 + 16));
  v8 = operator new(0x30u);
  result = BookScreenManager::BookScreenManager((int)v8, v6, v5, v7);
  *(_DWORD *)v4 = v8;
  return result;
}


void __fastcall ClientInstanceScreenModel::getBossName(ClientInstanceScreenModel *this, int a2, unsigned int a3)
{
  ClientInstanceScreenModel::getBossName(this, a2, a3);
}


Entity *__fastcall ClientInstanceScreenModel::sendBlockEntityUpdatePacket(ClientInstanceScreenModel *this, const BlockPos *a2)
{
  ClientInstanceScreenModel *v2; // r4@1
  const BlockPos *v3; // r6@1
  Entity *result; // r0@1
  Entity *v5; // r5@1
  BlockSource *v6; // r0@2
  Entity *v7; // r6@2
  void (__fastcall *v8)(Entity **, Entity *, int); // r7@3
  int v9; // r0@3
  int v10; // r0@3
  Entity *v11; // [sp+0h] [bp-18h]@3

  v2 = this;
  v3 = a2;
  result = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  v5 = result;
  if ( result )
  {
    v6 = (BlockSource *)Entity::getRegion(result);
    result = (Entity *)BlockSource::getBlockEntity(v6, v3);
    v7 = result;
    if ( result )
    {
      BlockEntity::setChanged(result);
      v8 = *(void (__fastcall **)(Entity **, Entity *, int))(*(_DWORD *)v7 + 52);
      v9 = Entity::getRegion(v5);
      v8(&v11, v7, v9);
      v10 = ClientInstance::getPacketSender(*((ClientInstance **)v2 + 4));
      (*(void (**)(void))(*(_DWORD *)v10 + 8))();
      result = v11;
      if ( v11 )
        result = (Entity *)(*(int (**)(void))(*(_DWORD *)v11 + 4))();
    }
  }
  return result;
}


int __fastcall ClientInstanceScreenModel::itemFrameFilled(ClientInstanceScreenModel *this, const BlockPos *a2)
{
  const BlockPos *v2; // r4@1
  Entity *v3; // r0@1
  Entity *v4; // r5@1
  BlockSource *v5; // r0@1
  BlockSource *v6; // r7@1
  int v7; // r0@1
  ItemFrameBlockEntity *v8; // r6@1
  char *v9; // r0@4
  int result; // r0@5

  v2 = a2;
  v3 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  v4 = v3;
  v5 = (BlockSource *)Entity::getRegion(v3);
  v6 = v5;
  v7 = BlockSource::getBlockEntity(v5, v2);
  v8 = (ItemFrameBlockEntity *)v7;
  result = 0;
  if ( v7 )
  {
    if ( BlockEntity::isType(v7, 17) == 1
      && BlockSource::checkBlockPermissions(v6, v4, v2, 6, (const ItemInstance *)&ItemInstance::EMPTY_ITEM, 1) == 1 )
    {
      v9 = ItemFrameBlockEntity::getFramedItem(v8);
      if ( ItemInstance::isNull((ItemInstance *)v9) != 1 )
        result = 1;
    }
  }
  return result;
}


void __fastcall ClientInstanceScreenModel::displaySystemMessage(int a1, int *a2)
{
  int *v2; // r4@1
  int v3; // r0@1

  v2 = a2;
  v3 = ClientInstance::getGuiData(*(ClientInstance **)(a1 + 16));
  j_j_j__ZN7GuiData20displaySystemMessageERKSs(v3, v2);
}


signed int __fastcall ClientInstanceScreenModel::canCollectFromCauldron(ClientInstanceScreenModel *this, const BlockPos *a2)
{
  const BlockPos *v2; // r5@1
  Entity *v3; // r4@1
  BlockSource *v4; // r6@1
  void *v5; // r0@1
  int v6; // r4@1
  unsigned int v7; // r5@2
  unsigned __int64 *v8; // r0@2
  signed int v9; // r6@2
  signed int v10; // r5@2
  bool v11; // zf@5
  int v12; // r4@10
  signed int v13; // r4@14
  signed int v14; // r0@15
  int v16; // [sp+0h] [bp-58h]@1
  int v17; // [sp+8h] [bp-50h]@25
  char v18; // [sp+Eh] [bp-4Ah]@9
  char v19; // [sp+Fh] [bp-49h]@5
  void *v20; // [sp+24h] [bp-34h]@23
  void *ptr; // [sp+34h] [bp-24h]@21

  v2 = a2;
  v3 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  v4 = (BlockSource *)Entity::getRegion(v3);
  v5 = Player::getSelectedItem(v3);
  ItemInstance::ItemInstance((ItemInstance *)&v16, (int)v5);
  v6 = BlockSource::getBlockEntity(v4, v2);
  if ( v6 )
  {
    v7 = BlockSource::getData(v4, v2);
    v8 = (unsigned __int64 *)Block::getBlockState(Block::mCauldron, 16);
    v9 = (v7 >> (*v8 + 1 - (*v8 >> 32))) & (0xFu >> (4 - (*v8 >> 32)));
    v10 = 0;
    if ( v9 && *(_DWORD *)(v6 + 216) > -1 )
      v10 = 1;
    v11 = v19 == 0;
    if ( v19 )
      v11 = v16 == 0;
    if ( !v11 && !ItemInstance::isNull((ItemInstance *)&v16) && v18 )
    {
      v12 = v16;
      if ( v16 != Item::mBucket || (unsigned __int16)ItemInstance::getAuxValue((ItemInstance *)&v16) )
      {
        if ( v9 >= 2 && v12 == Item::mGlass_bottle )
        {
          v13 = 1;
          goto LABEL_21;
        }
      }
      else
        v14 = 0;
        if ( !v9 )
          v14 = 1;
        if ( v9 >= 6 && !(v14 | v10) )
    }
  }
  v13 = 0;
LABEL_21:
  if ( ptr )
    operator delete(ptr);
  if ( v20 )
    operator delete(v20);
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  return v13;
}


BlockEntity *__fastcall ClientInstanceScreenModel::getBlockEntity(int a1, const BlockPos *a2, int a3)
{
  int v3; // r4@1
  const BlockPos *v4; // r5@1
  Entity *v5; // r0@1
  BlockSource *v6; // r0@2
  BlockEntity *v7; // r0@2
  BlockEntity *v8; // r5@2

  v3 = a3;
  v4 = a2;
  v5 = (Entity *)ClientInstance::getLocalPlayer(*(ClientInstance **)(a1 + 16));
  if ( v5
    && (v6 = (BlockSource *)Entity::getRegion(v5),
        v7 = (BlockEntity *)BlockSource::getBlockEntity(v6, v4),
        (v8 = v7) != 0) )
  {
    if ( *(_DWORD *)BlockEntity::getType(v7) != v3 )
      v8 = 0;
  }
  else
    v8 = 0;
  return v8;
}


void __fastcall ClientInstanceScreenModel::sendChatMessage(int a1, int *a2)
{
  int v2; // r9@1
  int *v3; // r8@1
  Player *v4; // r0@2
  int v5; // r6@2
  int v6; // r0@4
  Social::XboxLiveUserManager *v7; // r0@4
  signed int v8; // r7@4
  int v9; // r4@4
  unsigned int *v10; // r1@5
  unsigned int v11; // r0@7
  unsigned int *v12; // r5@11
  unsigned int v13; // r0@13
  int v14; // r0@19
  int *v15; // r0@19
  int v16; // r0@20
  void *v17; // r0@20
  int v18; // r0@21
  int v19; // r0@22
  int v20; // r0@22
  int v21; // r0@23
  MinecraftEventing *v22; // r0@23
  int v23; // r4@23
  unsigned int *v24; // r1@24
  unsigned int v25; // r0@26
  void *v26; // r0@29
  void *v27; // r0@30
  unsigned int *v28; // r2@31
  signed int v29; // r1@33
  void *v30; // r0@35
  int v31; // r0@37
  void *v32; // r0@37
  unsigned int *v33; // r2@38
  signed int v34; // r1@40
  unsigned int *v35; // r5@44
  unsigned int v36; // r0@46
  char *v37; // r0@51
  unsigned int *v38; // r2@54
  signed int v39; // r1@56
  unsigned int *v40; // r2@66
  signed int v41; // r1@68
  unsigned int *v42; // r2@70
  signed int v43; // r1@72
  unsigned int *v44; // r2@74
  signed int v45; // r1@76
  int v46; // [sp+14h] [bp-8Ch]@29
  int v47; // [sp+18h] [bp-88h]@29
  int v48; // [sp+20h] [bp-80h]@35
  int v49; // [sp+24h] [bp-7Ch]@35
  int v50; // [sp+28h] [bp-78h]@28
  char v51; // [sp+2Ch] [bp-74h]@21
  int v52; // [sp+58h] [bp-48h]@20
  Social::User *v53; // [sp+5Ch] [bp-44h]@19
  int v54; // [sp+60h] [bp-40h]@23
  char *v55; // [sp+64h] [bp-3Ch]@19
  int v56; // [sp+68h] [bp-38h]@19
  Social::User *v57; // [sp+6Ch] [bp-34h]@4
  int v58; // [sp+70h] [bp-30h]@4
  unsigned __int64 v59; // [sp+74h] [bp-2Ch]@21
  int v60; // [sp+7Ch] [bp-24h]@21

  v2 = a1;
  v3 = a2;
  if ( ClientInstance::getLocalPlayer(*(ClientInstance **)(a1 + 16)) )
  {
    v4 = (Player *)ClientInstance::getLocalPlayer(*(ClientInstance **)(v2 + 16));
    v5 = Player::isChatAllowed(v4);
  }
  else
    v5 = 1;
  v6 = MinecraftGame::getUserManager(*(MinecraftGame **)(v2 + 12));
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v57, v6);
  v7 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v57);
  v8 = Social::XboxLiveUserManager::checkPrivilegeSilently(v7, 252);
  v9 = v58;
  if ( v58 )
    v10 = (unsigned int *)(v58 + 4);
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
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  if ( (v5 & v8) != 1 )
    sub_21E8AF4(&v50, &dword_27DFAF0);
    if ( v8 )
      sub_21E94B4((void **)&v46, "permissions.chatmute");
      I18n::get(&v47, (int **)&v46);
      sub_21E72F0((const void **)&v50, (const void **)&v47);
      v26 = (void *)(v47 - 12);
      if ( (int *)(v47 - 12) != &dword_28898C0 )
        v42 = (unsigned int *)(v47 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
        }
        else
          v43 = (*v42)--;
        if ( v43 <= 0 )
          j_j_j_j__ZdlPv_9(v26);
      v27 = (void *)(v46 - 12);
      if ( (int *)(v46 - 12) != &dword_28898C0 )
        v28 = (unsigned int *)(v46 - 4);
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          goto LABEL_83;
        goto LABEL_82;
      sub_21E94B4((void **)&v48, "permissions.Communications");
      I18n::get(&v49, (int **)&v48);
      sub_21E72F0((const void **)&v50, (const void **)&v49);
      v30 = (void *)(v49 - 12);
      if ( (int *)(v49 - 12) != &dword_28898C0 )
        v44 = (unsigned int *)(v49 - 4);
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
          v45 = (*v44)--;
        if ( v45 <= 0 )
          j_j_j_j__ZdlPv_9(v30);
      v27 = (void *)(v48 - 12);
      if ( (int *)(v48 - 12) != &dword_28898C0 )
        v28 = (unsigned int *)(v48 - 4);
LABEL_83:
          if ( v29 <= 0 )
            j_j_j_j__ZdlPv_9(v27);
          goto LABEL_37;
LABEL_82:
        v29 = (*v28)--;
        goto LABEL_83;
LABEL_37:
    v31 = ClientInstance::getGuiData(*(ClientInstance **)(v2 + 16));
    GuiData::displaySystemMessage(v31, &v50);
    v32 = (void *)(v50 - 12);
    if ( (int *)(v50 - 12) == &dword_28898C0 )
      return;
    v33 = (unsigned int *)(v50 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      goto LABEL_63;
    goto LABEL_62;
  v14 = ClientInstance::getLocalPlayer(*(ClientInstance **)(v2 + 16));
  v15 = (int *)(*(int (**)(void))(*(_DWORD *)v14 + 188))();
  sub_21E8AF4(&v56, v15);
  v55 = (char *)&unk_28898CC;
  ClientInstance::getUser((ClientInstance *)&v53, *(_DWORD *)(v2 + 16));
  if ( v53 )
    v16 = Social::User::getLiveUser(v53);
    Social::XboxLiveUserManager::getCurrentXUID((Social::XboxLiveUserManager *)&v52, v16);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v55,
      &v52);
    v17 = (void *)(v52 - 12);
    if ( (int *)(v52 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v52 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
  v59 = 0LL;
  v60 = 0;
  TextPacket::TextPacket((int)&v51, 1, &v56, v3, &v59, 0, (int *)&v55);
  v18 = ClientInstance::getPacketSender(*(ClientInstance **)(v2 + 16));
  (*(void (**)(void))(*(_DWORD *)v18 + 8))();
  if ( !MinecraftGame::isHostingLocalDedicatedServer(*(MinecraftGame **)(v2 + 12)) )
    v19 = ClientInstance::getLocalPlayer(*(ClientInstance **)(v2 + 16));
    v20 = (*(int (**)(void))(*(_DWORD *)v19 + 1440))();
    MinecraftEventing::fireEventPlayerMessageChat(v20, (const char **)&v56, (const char **)v3);
  v21 = ClientInstance::getLocalPlayer(*(ClientInstance **)(v2 + 16));
  v22 = (MinecraftEventing *)(*(int (**)(void))(*(_DWORD *)v21 + 1440))();
  MinecraftEventing::fireChatUsedEvent(v22, *(_DWORD *)(*v3 - 12), 0);
  TextPacket::~TextPacket((TextPacket *)&v51);
  v23 = v54;
  if ( v54 )
    v24 = (unsigned int *)(v54 + 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 == 1 )
      v35 = (unsigned int *)(v23 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
  v37 = v55 - 12;
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v55 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  v32 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v56 - 4);
LABEL_62:
    v34 = (*v33)--;
LABEL_63:
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
}


void __fastcall ClientInstanceScreenModel::~ClientInstanceScreenModel(ClientInstanceScreenModel *this)
{
  MinecraftScreenModel *v1; // r0@1

  v1 = MinecraftScreenModel::~MinecraftScreenModel(this);
  j_j_j__ZdlPv_5((void *)v1);
}


signed int __fastcall ClientInstanceScreenModel::canPlaceWaterlily(ClientInstanceScreenModel *this)
{
  ClientInstanceScreenModel *v1; // r5@1
  Entity *v2; // r0@1
  BlockSource *v3; // r4@1
  char *v4; // r0@1
  char v5; // r6@1
  Entity *v6; // r0@1
  const BlockPos *v7; // r5@1
  int v8; // r0@1
  int *v9; // r0@4
  int *v10; // r0@5
  Block *v11; // r5@6
  int *v12; // r0@8
  signed int v13; // r0@8
  bool v14; // zf@8
  int *v15; // r0@11
  signed int result; // r0@12
  int v17; // [sp+0h] [bp-70h]@1
  int v18; // [sp+4h] [bp-6Ch]@1
  int v19; // [sp+8h] [bp-68h]@1
  char v20; // [sp+Ch] [bp-64h]@1
  char v21; // [sp+10h] [bp-60h]@1
  int v22; // [sp+14h] [bp-5Ch]@1
  int v23; // [sp+18h] [bp-58h]@1
  int v24; // [sp+1Ch] [bp-54h]@1
  int v25; // [sp+50h] [bp-20h]@3
  int v26; // [sp+54h] [bp-1Ch]@3
  int v27; // [sp+58h] [bp-18h]@3
  unsigned __int8 v28; // [sp+5Ch] [bp-14h]@1

  v1 = this;
  v2 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  v3 = (BlockSource *)Entity::getRegion(v2);
  v4 = MinecraftScreenModel::getHitResult(v1);
  HitResult::HitResult((int)&v20, (int)v4);
  v17 = v22;
  v18 = v23;
  v19 = v24;
  v5 = v21;
  v6 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v1 + 4));
  v7 = (const BlockPos *)Entity::getRegion(v6);
  BlockSource::getBlockID((BlockSource *)&v28, v7, (int)&v17);
  v8 = Block::mBlocks[v28];
  if ( v8 && !(*(int (__cdecl **)(int, const BlockPos *, int *))(*(_DWORD *)v8 + 332))(v8, v7, &v17) )
  {
    BlockPos::neighbor((BlockPos *)&v25, (int)&v17, v5);
    v17 = v25;
    v18 = v26;
    v19 = v27;
  }
  v9 = (int *)BlockSource::getMaterial(v3, (const BlockPos *)&v17);
  if ( !Material::isType(v9, 5) )
    v10 = (int *)BlockSource::getMaterial(v3, (const BlockPos *)&v17);
    if ( Material::isType(v10, 18) != 1 )
      goto LABEL_16;
  BlockSource::getBlockAndData((BlockSource *)&v25, v3, (int)&v17);
  v11 = (Block *)Block::mBlocks[(unsigned __int8)v25];
  if ( !v11 || BlockSource::isEmptyBlock(v3, v17, v18 + 1, v19) != 1 )
    goto LABEL_16;
  v12 = (int *)Block::getMaterial(v11);
  v13 = Material::isType(v12, 5);
  v14 = v13 == 1;
  if ( v13 == 1 )
    v14 = BYTE1(v25) == 0;
  if ( v14 || (v15 = (int *)Block::getMaterial(v11), Material::isType(v15, 18)) )
    result = 1;
  else
LABEL_16:
    result = 0;
  return result;
}


signed int __fastcall ClientInstanceScreenModel::canTipArrows(ClientInstanceScreenModel *this, const BlockPos *a2)
{
  const BlockPos *v2; // r5@1
  Entity *v3; // r4@1
  BlockSource *v4; // r6@1
  void *v5; // r0@1
  int v6; // r4@1
  unsigned int v7; // r5@2
  unsigned __int64 *v8; // r0@2
  unsigned int v9; // r6@2
  signed int v10; // r5@3
  bool v11; // zf@5
  signed int v12; // r0@11
  signed int v13; // r1@11
  signed int v14; // r4@17
  int v16; // [sp+0h] [bp-58h]@1
  int v17; // [sp+8h] [bp-50h]@23
  char v18; // [sp+Eh] [bp-4Ah]@9
  char v19; // [sp+Fh] [bp-49h]@5
  void *v20; // [sp+24h] [bp-34h]@21
  void *ptr; // [sp+34h] [bp-24h]@19

  v2 = a2;
  v3 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  v4 = (BlockSource *)Entity::getRegion(v3);
  v5 = Player::getSelectedItem(v3);
  ItemInstance::ItemInstance((ItemInstance *)&v16, (int)v5);
  v6 = BlockSource::getBlockEntity(v4, v2);
  if ( !v6 )
    goto LABEL_28;
  v7 = BlockSource::getData(v4, v2);
  v8 = (unsigned __int64 *)Block::getBlockState(Block::mCauldron, 16);
  v9 = (v7 >> (1 - (*v8 >> 32) + *v8)) & (0xFu >> (4 - (*v8 >> 32)));
  if ( v9 )
    v10 = *(_DWORD *)(v6 + 216) >> 31;
  else
    v10 = 1;
  v11 = v19 == 0;
  if ( v19 )
    v11 = v16 == 0;
  if ( v11 || ItemInstance::isNull((ItemInstance *)&v16) || !v18 || v16 != Item::mArrow )
  LOWORD(v12) = ItemInstance::getAuxValue((ItemInstance *)&v16);
  v13 = 0;
  if ( !v9 )
    v13 = 1;
  v12 = (unsigned __int16)v12;
  if ( (_WORD)v12 )
    v12 = 1;
  if ( v12 | v13 | v10 || *(_DWORD *)(v6 + 216) <= 4 )
LABEL_28:
    v14 = 0;
    v14 = 1;
  if ( ptr )
    operator delete(ptr);
  if ( v20 )
    operator delete(v20);
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  return v14;
}


FilePickerSettings *__fastcall ClientInstanceScreenModel::initiateGLBFileSave(int a1, int *a2, int *a3, int a4)
{
  int v4; // r11@1
  int *v5; // r9@1
  int *v6; // r6@1
  void *v7; // r0@2
  FilePickerSettings *result; // r0@4
  void *v9; // r0@5
  void *v10; // r0@6
  void *v11; // r0@7
  int *v12; // r0@8
  __int64 *v13; // r5@8
  void (__fastcall *v14)(int *, int, signed int); // r3@8
  int *v15; // r6@10
  __int64 v16; // kr00_8@10
  void (*v17)(void); // r1@10
  int v18; // r1@10
  void *v19; // r7@10
  __int64 v20; // r1@10
  int v21; // r3@10
  void (*v22)(void); // r3@10
  void *v23; // r0@13
  void *v24; // r0@16
  int *v25; // r0@17
  __int64 *v26; // r6@17
  void (__fastcall *v27)(int *, int, signed int); // r3@17
  int *v28; // r0@19
  __int64 v29; // kr08_8@19
  __int64 *v30; // r6@19
  void (*v31)(void); // r1@19
  int v32; // r1@19
  void *v33; // r7@19
  __int64 v34; // r0@19
  int v35; // r2@19
  void (*v36)(void); // r3@19
  void *v37; // r0@22
  void *v38; // r0@25
  void *v39; // r0@27
  unsigned int *v40; // r2@31
  signed int v41; // r1@33
  unsigned int *v42; // r2@35
  signed int v43; // r1@37
  unsigned int *v44; // r2@39
  signed int v45; // r1@41
  unsigned int *v46; // r2@43
  signed int v47; // r1@45
  unsigned int *v48; // r2@47
  signed int v49; // r1@49
  unsigned int *v50; // r2@51
  signed int v51; // r1@53
  unsigned int *v52; // r2@55
  signed int v53; // r1@57
  int v54; // [sp+0h] [bp-100h]@17
  void (*v55)(void); // [sp+Ch] [bp-F4h]@17
  int v56; // [sp+10h] [bp-F0h]@18
  int v57; // [sp+14h] [bp-ECh]@8
  void (*v58)(void); // [sp+20h] [bp-E0h]@8
  int v59; // [sp+24h] [bp-DCh]@9
  int v60; // [sp+2Ch] [bp-D4h]@6
  int v61; // [sp+30h] [bp-D0h]@6
  int v62; // [sp+34h] [bp-CCh]@5
  char v63; // [sp+38h] [bp-C8h]@5
  int v64; // [sp+3Ch] [bp-C4h]@19
  int (__fastcall *v65)(int **, int *, int); // [sp+40h] [bp-C0h]@19
  int (__fastcall *v66)(int *); // [sp+44h] [bp-BCh]@19
  unsigned __int64 v67; // [sp+58h] [bp-A8h]@10
  int (__fastcall *v68)(int **, int *, int); // [sp+60h] [bp-A0h]@10
  int (__fastcall *v69)(int **, int, int *); // [sp+64h] [bp-9Ch]@10
  int v70; // [sp+8Ch] [bp-74h]@10
  __int64 v71; // [sp+90h] [bp-70h]@10
  void (*v72)(void); // [sp+98h] [bp-68h]@10
  int v73; // [sp+9Ch] [bp-64h]@10
  void *v74; // [sp+A0h] [bp-60h]@10
  int v75; // [sp+A4h] [bp-5Ch]@10
  void (*v76)(void); // [sp+A8h] [bp-58h]@10
  int (__fastcall *v77)(int **, int, int *); // [sp+ACh] [bp-54h]@10
  int v78; // [sp+B4h] [bp-4Ch]@19
  __int64 v79; // [sp+B8h] [bp-48h]@19
  void (*v80)(void); // [sp+C0h] [bp-40h]@19
  int v81; // [sp+C4h] [bp-3Ch]@19
  __int64 v82; // [sp+C8h] [bp-38h]@19
  void (*v83)(void); // [sp+D0h] [bp-30h]@19
  int (__fastcall *v84)(int *); // [sp+D4h] [bp-2Ch]@19

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v7 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v7 = &ServiceLocator<AppPlatform>::mDefaultService;
  result = (FilePickerSettings *)(*(int (**)(void))(**(_DWORD **)v7 + 160))();
  if ( result == (FilePickerSettings *)1 )
  {
    FilePickerSettings::FilePickerSettings((int)&v63);
    sub_21E91E0((void **)&v62, unk_27EF0D4, glTFExporter::GLB_EXTENSION);
    FilePickerSettings::addFileDescription((int)&v63, &v62, (int *)&Util::EMPTY_STRING, 1);
    v9 = (void *)(v62 - 12);
    if ( (int *)(v62 - 12) != &dword_28898C0 )
    {
      v40 = (unsigned int *)(v62 - 4);
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
        j_j_j_j__ZdlPv_9(v9);
    }
    sub_21E94B4((void **)&v60, "gui.pickWorld");
    I18n::get(&v61, (int **)&v60);
    FilePickerSettings::setPickerTitle((int)&v63, &v61);
    v10 = (void *)(v61 - 12);
    if ( (int *)(v61 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v61 - 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    v11 = (void *)(v60 - 12);
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v60 - 4);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    FilePickerSettings::setPickerType((int)&v63, 2);
    FilePickerSettings::setDefaultFileName((int)&v63, v6);
    v12 = sub_21E8AF4(&v57, v5);
    v13 = (__int64 *)(v12 + 1);
    v58 = 0;
    v14 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
    if ( v14 )
      v14(v12 + 1, v4, 2);
      v59 = *(_DWORD *)(v4 + 12);
      v58 = *(void (**)(void))(v4 + 8);
    v15 = sub_21E8AF4(&v70, &v57) + 1;
    v16 = *v13;
    *v13 = v71;
    v71 = v16;
    v17 = v58;
    v72 = v17;
    v18 = v59;
    v59 = v73;
    v73 = v18;
    v76 = 0;
    v19 = operator new(0x14u);
    sub_21E8AF4((int *)v19, &v70);
    v20 = *(_QWORD *)v15;
    *(_QWORD *)v15 = *(_QWORD *)((char *)v19 + 4);
    *(_QWORD *)((char *)v19 + 4) = v20;
    LODWORD(v20) = v72;
    v72 = 0;
    *((_DWORD *)v19 + 3) = v20;
    v74 = v19;
    HIDWORD(v20) = v73;
    v21 = v75;
    v73 = *((_DWORD *)v19 + 4);
    *((_DWORD *)v19 + 4) = HIDWORD(v20);
    *(_QWORD *)&v74 = v67;
    v67 = __PAIR__(v21, (unsigned int)v19);
    v22 = (void (*)(void))v68;
    v68 = sub_12CE30C;
    v76 = v22;
    v77 = v69;
    v69 = sub_12CE2A4;
    if ( v22 )
      v22();
      if ( v72 )
        v72();
    v23 = (void *)(v70 - 12);
    if ( (int *)(v70 - 12) != &dword_28898C0 )
      v46 = (unsigned int *)(v70 - 4);
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    if ( v58 )
      v58();
    v24 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v48 = (unsigned int *)(v57 - 4);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    v25 = sub_21E8AF4(&v54, v5);
    v26 = (__int64 *)(v25 + 1);
    v55 = 0;
    v27 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
    if ( v27 )
      v27(v25 + 1, v4, 2);
      v56 = *(_DWORD *)(v4 + 12);
      v55 = *(void (**)(void))(v4 + 8);
    v28 = sub_21E8AF4(&v78, &v54);
    v29 = *v26;
    *v26 = v79;
    v79 = v29;
    v30 = (__int64 *)(v28 + 1);
    v31 = v55;
    v80 = v31;
    v32 = v56;
    v56 = v81;
    v81 = v32;
    v83 = 0;
    v33 = operator new(0x14u);
    sub_21E8AF4((int *)v33, &v78);
    v34 = *v30;
    *v30 = *(_QWORD *)((char *)v33 + 4);
    *(_QWORD *)((char *)v33 + 4) = v34;
    LODWORD(v34) = v80;
    v80 = 0;
    *((_DWORD *)v33 + 3) = v34;
    HIDWORD(v34) = v81;
    v81 = *((_DWORD *)v33 + 4);
    *((_DWORD *)v33 + 4) = HIDWORD(v34);
    v35 = HIDWORD(v82);
    v82 = *(_QWORD *)&v63;
    *(_DWORD *)&v63 = v33;
    v64 = v35;
    v36 = (void (*)(void))v65;
    v65 = sub_12CE444;
    v83 = v36;
    v84 = v66;
    v66 = sub_12CE430;
    if ( v36 )
      v36();
      if ( v80 )
        v80();
    v37 = (void *)(v78 - 12);
    if ( (int *)(v78 - 12) != &dword_28898C0 )
      v50 = (unsigned int *)(v78 - 4);
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
        v51 = (*v50)--;
      if ( v51 <= 0 )
        j_j_j_j__ZdlPv_9(v37);
    if ( v55 )
      v55();
    v38 = (void *)(v54 - 12);
    if ( (int *)(v54 - 12) != &dword_28898C0 )
      v52 = (unsigned int *)(v54 - 4);
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
        v53 = (*v52)--;
      if ( v53 <= 0 )
        j_j_j_j__ZdlPv_9(v38);
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v39 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v39 = &ServiceLocator<AppPlatform>::mDefaultService;
    (*(void (**)(void))(**(_DWORD **)v39 + 144))();
    result = FilePickerSettings::~FilePickerSettings((FilePickerSettings *)&v63);
  }
  return result;
}


void __fastcall ClientInstanceScreenModel::navigateToLeaveLevelScreen(ClientInstanceScreenModel *this, int a2)
{
  ClientInstanceScreenModel::navigateToLeaveLevelScreen(this, a2);
}


void __fastcall ClientInstanceScreenModel::navigateToInventoryScreen(int a1, int a2)
{
  ClientInstanceScreenModel::navigateToInventoryScreen(a1, a2);
}


char *__fastcall ClientInstanceScreenModel::getAllPlayerEffects(ClientInstanceScreenModel *this)
{
  Mob *v1; // r0@1

  v1 = (Mob *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  return Mob::getAllEffects(v1);
}


Entity *__fastcall ClientInstanceScreenModel::sendCommandBlockUpdatePacket(ClientInstanceScreenModel *this, const BlockPos *a2)
{
  ClientInstanceScreenModel *v2; // r4@1
  const BlockPos *v3; // r6@1
  Entity *result; // r0@1
  Entity *v5; // r5@1
  BlockSource *v6; // r0@3
  const CommandBlockEntity *v7; // r6@3
  BlockSource *v8; // r7@5
  CommandBlockUpdatePacket *v9; // r5@5
  int v10; // r0@5

  v2 = this;
  v3 = a2;
  result = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  v5 = result;
  if ( result )
  {
    result = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v2 + 4));
    if ( result )
    {
      v6 = (BlockSource *)Entity::getRegion(result);
      result = (Entity *)BlockSource::getBlockEntity(v6, v3);
      v7 = result;
      if ( result )
      {
        result = *(Entity **)BlockEntity::getType(result);
        if ( result == (Entity *)26 )
        {
          v8 = (BlockSource *)Entity::getRegion(v5);
          v9 = (CommandBlockUpdatePacket *)operator new(0x38u);
          CommandBlockUpdatePacket::CommandBlockUpdatePacket(v9, v8, v7);
          v10 = ClientInstance::getPacketSender(*((ClientInstance **)v2 + 4));
          (*(void (**)(void))(*(_DWORD *)v10 + 8))();
          result = (Entity *)(*(int (__fastcall **)(CommandBlockUpdatePacket *))(*(_DWORD *)v9 + 4))(v9);
        }
      }
    }
  }
  return result;
}


char *__fastcall ClientInstanceScreenModel::getLastChatMessage(ClientInstanceScreenModel *this)
{
  GuiData *v1; // r0@1

  v1 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)this + 4));
  return GuiData::getLastChatMessage(v1);
}


void __fastcall ClientInstanceScreenModel::getInteractionText(ClientInstanceScreenModel *this, int a2)
{
  Player *v2; // r4@1
  int v3; // r1@1

  v2 = this;
  v3 = ClientInstance::getLocalPlayer(*(ClientInstance **)(a2 + 16));
  if ( v3 )
    Player::getInteractText(v2, v3);
  else
    sub_21E94B4((void **)v2, (const char *)&unk_257BC67);
}


_BOOL4 __fastcall ClientInstanceScreenModel::endPortalFrameBlockHasEye(ClientInstanceScreenModel *this, const BlockPos *a2)
{
  const BlockPos *v2; // r4@1
  Entity *v3; // r0@1
  BlockSource *v4; // r0@1
  EndPortalFrameBlock *v5; // r0@1
  int v6; // r1@1

  v2 = a2;
  v3 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  v4 = (BlockSource *)Entity::getRegion(v3);
  v5 = (EndPortalFrameBlock *)BlockSource::getData(v4, v2);
  return j_j_j__ZN19EndPortalFrameBlock6hasEyeEi(v5, v6);
}


int __fastcall ClientInstanceScreenModel::getEntity(int a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r4@1
  Entity *v3; // r0@1
  int v4; // r0@2
  int result; // r0@2

  v2 = a2;
  v3 = (Entity *)ClientInstance::getLocalPlayer(*(ClientInstance **)(a1 + 16));
  if ( v3 )
  {
    v4 = Entity::getLevel(v3);
    result = Level::fetchEntity(v4, 0, *v2, *v2 >> 32, 0);
  }
  else
    result = 0;
  return result;
}


void __fastcall ClientInstanceScreenModel::getBossName(ClientInstanceScreenModel *this, int a2, unsigned int a3)
{
  int v3; // r6@1
  int *v4; // r4@1
  unsigned int v5; // r5@1
  Player *v6; // r0@1
  char *v7; // r7@1
  Entity *v8; // r0@2
  int v9; // r0@2
  int v10; // r0@2
  int v11; // r5@2
  int *v12; // r0@3
  char *v13; // r1@4
  int **v14; // r0@5
  unsigned int v15; // r0@8
  const void **v16; // r0@8
  const void **v17; // r0@8
  char *v18; // r0@8
  void *v19; // r0@9
  char *v20; // r0@11
  unsigned int *v21; // r2@13
  signed int v22; // r1@15
  unsigned int *v23; // r2@21
  signed int v24; // r1@23
  unsigned int *v25; // r2@25
  signed int v26; // r1@27
  int v27; // [sp+4h] [bp-24h]@8
  char *v28; // [sp+8h] [bp-20h]@8
  char *v29; // [sp+Ch] [bp-1Ch]@3

  v3 = a2;
  v4 = (int *)this;
  v5 = a3;
  v6 = (Player *)ClientInstance::getLocalPlayer(*(ClientInstance **)(a2 + 16));
  v7 = Player::getTrackedBosses(v6);
  if ( (signed int)((*(_QWORD *)v7 >> 32) - *(_QWORD *)v7) >> 3 <= v5 )
  {
    v14 = (int **)&Util::EMPTY_STRING;
LABEL_7:
    sub_21E8AF4(v4, *v14);
    return;
  }
  v8 = (Entity *)ClientInstance::getLocalPlayer(*(ClientInstance **)(v3 + 16));
  v9 = Entity::getLevel(v8);
  v10 = Level::fetchEntity(v9, 0, *(_DWORD *)(*(_DWORD *)v7 + 8 * v5), *(_DWORD *)(*(_DWORD *)v7 + 8 * v5 + 4), 0);
  v11 = v10;
  if ( !v10 )
    goto LABEL_7;
  v12 = (int *)(*(int (**)(void))(*(_DWORD *)v10 + 188))();
  sub_21E8AF4((int *)&v29, v12);
  if ( *((_DWORD *)v29 - 3) )
    *v4 = (int)v29;
    v13 = (char *)&unk_28898CC;
    v29 = (char *)&unk_28898CC;
  else
    v15 = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 488))(v11);
    EntityTypeToString((void **)&v27, v15, 0);
    v16 = sub_21E82D8((const void **)&v27, 0, (unsigned int)"entity.", (_BYTE *)7);
    v28 = (char *)*v16;
    *v16 = &unk_28898CC;
    v17 = sub_21E7408((const void **)&v28, ".name", 5u);
    *v4 = (int)*v17;
    *v17 = &unk_28898CC;
    v18 = v28 - 12;
    if ( (int *)(v28 - 12) != &dword_28898C0 )
    {
      v23 = (unsigned int *)(v28 - 4);
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
        j_j_j_j__ZdlPv_9(v18);
    }
    v19 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v27 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    v13 = v29;
  v20 = v13 - 12;
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
}


signed int __fastcall ClientInstanceScreenModel::executeCommand(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  int v4; // r0@1
  MinecraftEventing *v5; // r0@1
  Level *v6; // r0@2
  Player *v7; // r7@3
  PlayerCommandOrigin *v8; // r6@4
  Minecraft *v9; // r0@4
  int v10; // r0@4
  int v11; // r4@4
  const void **v13; // r0@8
  void *v14; // r0@8
  void *v15; // r0@9
  int v16; // r0@10
  char *v17; // r0@10
  unsigned int *v18; // r2@12
  signed int v19; // r1@14
  unsigned int *v20; // r2@16
  signed int v21; // r1@18
  unsigned int *v22; // r2@20
  signed int v23; // r1@22
  int v24; // [sp+Ch] [bp-2Ch]@8
  int v25; // [sp+10h] [bp-28h]@8
  char *v26; // [sp+14h] [bp-24h]@8
  int v27; // [sp+18h] [bp-20h]@4
  PlayerCommandOrigin *v28; // [sp+1Ch] [bp-1Ch]@4

  v2 = a1;
  v3 = a2;
  v4 = ClientInstance::getLocalPlayer(*(ClientInstance **)(a1 + 16));
  v5 = (MinecraftEventing *)(*(int (**)(void))(*(_DWORD *)v4 + 1440))();
  MinecraftEventing::fireChatUsedEvent(v5, *(_DWORD *)(*v3 - 12), 1);
  if ( ClientInstance::hasCommands(*(ClientInstance **)(v2 + 16)) != 1
    || (v6 = (Level *)ClientInstance::getLevel(*(ClientInstance **)(v2 + 16)), Level::hasCommandsEnabled(v6) != 1) )
  {
    sub_21E94B4((void **)&v24, "commands.generic.disabled");
    I18n::get(&v25, (int **)&v24);
    v13 = sub_21E82D8((const void **)&v25, 0, dword_27DFAF0, *(_BYTE **)(dword_27DFAF0 - 12));
    v26 = (char *)*v13;
    *v13 = &unk_28898CC;
    v14 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
    {
      v18 = (unsigned int *)(v25 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
      }
      else
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    }
    v15 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v24 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    v16 = ClientInstance::getGuiData(*(ClientInstance **)(v2 + 16));
    GuiData::displaySystemMessage(v16, (int *)&v26);
    v17 = v26 - 12;
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v26 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
  }
  else
    v7 = (Player *)ClientInstance::getLocalPlayer(*(ClientInstance **)(v2 + 16));
    if ( v7 )
      v8 = (PlayerCommandOrigin *)operator new(0x18u);
      PlayerCommandOrigin::PlayerCommandOrigin(v8, v7);
      v9 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v2 + 16));
      v10 = Minecraft::getCommands(v9);
      v28 = v8;
      v27 = MinecraftCommands::requestCommandExecution(v10, (int *)&v28, v3, 3, 0);
      v11 = MCRESULT::isSuccess((MCRESULT *)&v27);
      if ( v28 )
        (*(void (**)(void))(*(_DWORD *)v28 + 4))();
      v28 = 0;
      if ( v11 )
        return 1;
  return 0;
}


void __fastcall ClientInstanceScreenModel::navigateToInventoryScreen(int a1, int a2)
{
  j_j_j__ZN20ClientInputCallbacks26handleInventoryButtonPressER14ClientInstance12CraftingType(
    *(ClientInstance **)(a1 + 16),
    a2);
}


void __fastcall ClientInstanceScreenModel::sendChatMessage(int a1, int *a2)
{
  ClientInstanceScreenModel::sendChatMessage(a1, a2);
}


signed int __fastcall ClientInstanceScreenModel::isPlayerInPortal(ClientInstanceScreenModel *this)
{
  Entity *v1; // r0@1
  signed int result; // r0@2

  v1 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  if ( v1 )
    result = Entity::isInsidePortal(v1);
  else
    result = 0;
  return result;
}


signed int __fastcall ClientInstanceScreenModel::canEmptyIntoCauldron(ClientInstanceScreenModel *this, const BlockPos *a2)
{
  const BlockPos *v2; // r5@1
  Entity *v3; // r4@1
  BlockSource *v4; // r6@1
  void *v5; // r0@1
  int v6; // r4@1
  unsigned int v7; // r5@2
  unsigned __int64 *v8; // r0@2
  signed int v9; // r6@2
  signed int v10; // r5@2
  bool v11; // zf@5
  int v12; // r7@10
  int v13; // r0@15
  signed int v14; // r2@17
  signed int v15; // r4@28
  signed int v16; // r0@30
  int v17; // r0@32
  int v18; // r5@32
  bool v19; // zf@32
  int v21; // [sp+0h] [bp-A8h]@21
  int v22; // [sp+8h] [bp-A0h]@25
  void *v23; // [sp+24h] [bp-84h]@23
  void *ptr; // [sp+34h] [bp-74h]@21
  int v25; // [sp+48h] [bp-60h]@1
  int v26; // [sp+50h] [bp-58h]@40
  char v27; // [sp+56h] [bp-52h]@9
  char v28; // [sp+57h] [bp-51h]@5
  void *v29; // [sp+6Ch] [bp-3Ch]@38
  void *v30; // [sp+7Ch] [bp-2Ch]@36

  v2 = a2;
  v3 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  v4 = (BlockSource *)Entity::getRegion(v3);
  v5 = Player::getSelectedItem(v3);
  ItemInstance::ItemInstance((ItemInstance *)&v25, (int)v5);
  v6 = BlockSource::getBlockEntity(v4, v2);
  if ( !v6 )
    goto LABEL_35;
  v7 = BlockSource::getData(v4, v2);
  v8 = (unsigned __int64 *)Block::getBlockState(Block::mCauldron, 16);
  v9 = 0;
  v10 = (v7 >> (*v8 + 1 - (*v8 >> 32))) & (0xFu >> (4 - (*v8 >> 32)));
  if ( v10 && *(_DWORD *)(v6 + 216) > -1 )
    v9 = 1;
  v11 = v28 == 0;
  if ( v28 )
    v11 = v25 == 0;
  if ( v11 || ItemInstance::isNull((ItemInstance *)&v25) || !v27 )
  v12 = v25;
  if ( v25 == Item::mBucket && ItemInstance::getAuxValue((ItemInstance *)&v25) == *(_BYTE *)(Block::mFlowingWater + 4) )
    goto LABEL_28;
  if ( v12 != Item::mPotion && v12 != Item::mSplash_potion && v12 != Item::mLingering_potion )
  {
LABEL_35:
    v15 = 0;
    goto LABEL_36;
  }
  v13 = ItemInstance::getAuxValue((ItemInstance *)&v25);
  if ( v13 < 1 )
    if ( (_WORD)v13 )
      goto LABEL_35;
    ItemInstance::ItemInstance((ItemInstance *)&v21, Item::mGlass_bottle, 1);
    if ( ptr )
      operator delete(ptr);
    if ( v23 )
      operator delete(v23);
    if ( v22 )
      (*(void (**)(void))(*(_DWORD *)v22 + 4))();
    if ( ((unsigned __int8)v9 & (v10 != 0)) == 1 )
LABEL_28:
    v15 = 1;
  if ( v9 == 1 )
    v14 = 0;
    if ( *(_DWORD *)(v6 + 216) != v13 )
      v14 = 1;
  else
    v14 = 1;
  v16 = 0;
  if ( v10 >= 6 )
    v16 = 1;
  v17 = v16 | v14;
  v18 = v10 != 0;
  v19 = v17 == 0;
  v15 = 1;
  if ( v17 )
    v19 = v18 == 0;
  if ( !v19 )
LABEL_36:
  if ( v30 )
    operator delete(v30);
  if ( v29 )
    operator delete(v29);
  if ( v26 )
    (*(void (**)(void))(*(_DWORD *)v26 + 4))();
  return v15;
}


char *__fastcall ClientInstanceScreenModel::detectStructureBlockCorners(ClientInstanceScreenModel *this, const BlockPos *a2)
{
  ClientInstanceScreenModel *v2; // r6@1
  const BlockPos *v3; // r5@1
  Entity *v4; // r4@1
  char *result; // r0@1
  BlockSource *v6; // r0@2
  StructureBlockEntity *v7; // r5@2
  BlockSource *v8; // r1@5

  v2 = this;
  v3 = a2;
  v4 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  result = (char *)ClientInstance::getLocalPlayer(*((ClientInstance **)v2 + 4));
  if ( result )
  {
    v6 = (BlockSource *)Entity::getRegion((Entity *)result);
    result = (char *)BlockSource::getBlockEntity(v6, v3);
    v7 = (StructureBlockEntity *)result;
    if ( result )
    {
      result = BlockEntity::getType((BlockEntity *)result);
      if ( v4 )
      {
        result = *(char **)result;
        if ( result == (char *)32 )
        {
          v8 = (BlockSource *)Entity::getRegion(v4);
          result = (char *)j_j_j__ZN20StructureBlockEntity10detectSizeER11BlockSource(v7, v8);
        }
      }
    }
  }
  return result;
}


void __fastcall ClientInstanceScreenModel::sendStructureBlockUpdatePacket(ClientInstanceScreenModel *this, const BlockPos *a2, bool a3)
{
  ClientInstanceScreenModel::sendStructureBlockUpdatePacket(this, a2, a3);
}


int __fastcall ClientInstanceScreenModel::canPlaceHeldBlock(ClientInstanceScreenModel *this)
{
  MinecraftScreenModel *v1; // r5@1
  Player *v2; // r4@1
  char *v3; // r0@1
  void *v4; // r0@2
  int v5; // r4@5
  const BlockPos *v6; // r6@11
  unsigned int v7; // r7@11
  bool v8; // zf@11
  signed int v9; // r0@14
  signed int v10; // r2@14
  int v11; // r0@20
  BlockPos *v12; // r5@26
  char v14; // [sp+10h] [bp-C0h]@26
  int v15; // [sp+14h] [bp-BCh]@25
  int v16; // [sp+18h] [bp-B8h]@25
  int v17; // [sp+1Ch] [bp-B4h]@25
  unsigned __int8 v18; // [sp+20h] [bp-B0h]@20
  int v19; // [sp+24h] [bp-ACh]@11
  int v20; // [sp+28h] [bp-A8h]@11
  int v21; // [sp+2Ch] [bp-A4h]@11
  int v22; // [sp+30h] [bp-A0h]@2
  int v23; // [sp+34h] [bp-9Ch]@10
  int v24; // [sp+38h] [bp-98h]@31
  char v25; // [sp+3Eh] [bp-92h]@9
  char v26; // [sp+3Fh] [bp-91h]@2
  void *v27; // [sp+54h] [bp-7Ch]@29
  void *ptr; // [sp+64h] [bp-6Ch]@27
  char v29; // [sp+78h] [bp-58h]@1
  char v30; // [sp+7Ch] [bp-54h]@11
  int v31; // [sp+80h] [bp-50h]@11
  int v32; // [sp+84h] [bp-4Ch]@11
  int v33; // [sp+88h] [bp-48h]@11
  unsigned __int16 v34; // [sp+9Ch] [bp-34h]@18
  int v35; // [sp+A0h] [bp-30h]@19
  int v36; // [sp+A4h] [bp-2Ch]@19
  int v37; // [sp+A8h] [bp-28h]@19

  v1 = this;
  v2 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  v3 = MinecraftScreenModel::getHitResult(v1);
  HitResult::HitResult((int)&v29, (int)v3);
  if ( v2 )
  {
    v4 = Player::getSelectedItem(v2);
    ItemInstance::ItemInstance((ItemInstance *)&v22, (int)v4);
    if ( v26 )
    {
      if ( v22 )
      {
        if ( ItemInstance::isNull((ItemInstance *)&v22) )
        {
          v5 = 0;
        }
        else if ( v25 )
          if ( v23 )
          {
            v6 = (const BlockPos *)Entity::getRegion(v2);
            v19 = v31;
            v20 = v32;
            v21 = v33;
            LOBYTE(v7) = v30;
            v8 = v26 == 0;
            if ( v26 )
              v8 = v22 == 0;
            if ( !v8 )
            {
              v9 = ItemInstance::isNull((ItemInstance *)&v22);
              v10 = 0;
              if ( !v25 )
                v10 = 1;
              if ( !(v9 | v10) && ItemInstance::isLiquidClipItem((ItemInstance *)&v22) == 1 && (_BYTE)v34 )
              {
                v7 = (unsigned int)v34 >> 8;
                v19 = v35;
                v20 = v36;
                v21 = v37;
              }
            }
            BlockSource::getBlockID((BlockSource *)&v18, v6, (int)&v19);
            v11 = Block::mBlocks[v18];
            if ( v11 )
              if ( (*(int (**)(void))(*(_DWORD *)v11 + 332))() )
                LOBYTE(v7) = 1;
              else
                BlockPos::neighbor((BlockPos *)&v15, (int)&v19, (char)v7);
                v19 = v15;
                v20 = v16;
                v21 = v17;
            v12 = (BlockPos *)Entity::getRegion(v2);
            v14 = ItemInstance::getId((ItemInstance *)&v22);
            v5 = BlockSource::mayPlace(v12, (int)&v14, (int)&v19, (char)v7, (int)v2, 0, 0);
          }
          else
            v5 = 0;
        else
      }
      else
        v5 = 0;
    }
    else
      v5 = 0;
    if ( ptr )
      operator delete(ptr);
    if ( v27 )
      operator delete(v27);
    if ( v24 )
      (*(void (**)(void))(*(_DWORD *)v24 + 4))();
  }
  else
    v5 = 0;
  return v5;
}


char *__fastcall ClientInstanceScreenModel::addBossEventListener(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1

  v2 = a2;
  v3 = ClientInstance::getLevel(*(ClientInstance **)(a1 + 16));
  return j_j_j__ZN5Level20addBossEventListenerEP17BossEventListener(v3, v2);
}


char *__fastcall ClientInstanceScreenModel::getGuiMessageList(ClientInstanceScreenModel *this)
{
  GuiData *v1; // r0@1

  v1 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)this + 4));
  return GuiData::getMessageList(v1);
}


int __fastcall ClientInstanceScreenModel::getChalkboardType(ClientInstanceScreenModel *this, const BlockPos *a2)
{
  ClientInstanceScreenModel *v2; // r5@1
  const BlockPos *v3; // r4@1
  Entity *v4; // r0@2
  BlockSource *v5; // r0@3
  BlockEntity *v6; // r0@3
  ChalkboardBlockEntity *v7; // r4@3
  int result; // r0@5

  v2 = this;
  v3 = a2;
  if ( ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4))
    && (v4 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v2 + 4))) != 0
    && (v5 = (BlockSource *)Entity::getRegion(v4),
        v6 = (BlockEntity *)BlockSource::getBlockEntity(v5, v3),
        (v7 = v6) != 0)
    && *(_DWORD *)BlockEntity::getType(v6) == 20 )
  {
    result = ChalkboardBlockEntity::getChalkboardSize(v7);
  }
  else
    result = 3;
  return result;
}


int __fastcall ClientInstanceScreenModel::deleteContainerManager(ClientInstanceScreenModel *this)
{
  int result; // r0@1

  result = ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 1476))();
  return result;
}


int __fastcall ClientInstanceScreenModel::getPlayerPosition(ClientInstanceScreenModel *this, int a2)
{
  ClientInstanceScreenModel *v2; // r4@1
  int v3; // r0@1
  int v4; // r5@1
  int v5; // r0@2
  __int64 v6; // r1@2
  int v7; // r0@2
  int result; // r0@2

  v2 = this;
  v3 = ClientInstance::getLocalPlayer(*(ClientInstance **)(a2 + 16));
  v4 = v3;
  if ( v3 )
  {
    v5 = (*(int (**)(void))(*(_DWORD *)v3 + 52))();
    v6 = *(_QWORD *)v5;
    v7 = *(_DWORD *)(v5 + 8);
    *(_QWORD *)v2 = v6;
    *((_DWORD *)v2 + 2) = v7;
    result = *(_DWORD *)(v4 + 268);
    *((_DWORD *)v2 + 1) = result;
  }
  else
    result = 0;
    *(_DWORD *)v2 = 0;
    *((_DWORD *)v2 + 1) = 0;
    *((_DWORD *)v2 + 2) = 0;
  return result;
}


int __fastcall ClientInstanceScreenModel::canInteractWhileKeyboardIsOpen(ClientInstanceScreenModel *this)
{
  return MinecraftScreenModel::isKeyboardActive(this) ^ 1;
}


const void **__fastcall ClientInstanceScreenModel::clearTitleMessages(ClientInstanceScreenModel *this)
{
  GuiData *v1; // r0@1

  v1 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)this + 4));
  return j_j_j__ZN7GuiData18clearTitleMessagesEv(v1);
}


int __fastcall ClientInstanceScreenModel::getPlayerLevel(ClientInstanceScreenModel *this)
{
  Player *v1; // r0@1

  v1 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  return j_j_j__ZNK6Player14getPlayerLevelEv(v1);
}


void *__fastcall ClientInstanceScreenModel::getSelectedItem(ClientInstanceScreenModel *this)
{
  Player *v1; // r0@1

  v1 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  return Player::getSelectedItem(v1);
}


int __fastcall ClientInstanceScreenModel::connectedToThirdPartyServer(ClientInstanceScreenModel *this)
{
  NetworkHandler *v1; // r0@1
  int v2; // r0@1

  v1 = (NetworkHandler *)ClientInstance::getClientNetworkSystem(*((ClientInstance **)this + 4));
  v2 = NetworkHandler::getConnectionInfo(v1);
  return j_j_j__ZNK14ThirdPartyInfo7isValidEv((ThirdPartyInfo *)(v2 + 20));
}


void __fastcall ClientInstanceScreenModel::navigateToLeaveLevelScreen(ClientInstanceScreenModel *this, int a2)
{
  ClientInstanceScreenModel *v2; // r5@1
  int v3; // r6@1
  signed int v4; // r1@1
  ClientInstance *v5; // r0@1
  Level *v6; // r0@2
  Level *v7; // r0@3
  int v8; // r0@3
  int *v9; // r0@3
  void *v10; // r0@3
  char *v11; // r0@4
  char *v12; // r0@5
  unsigned int *v13; // r2@8
  signed int v14; // r1@10
  unsigned int *v15; // r2@12
  signed int v16; // r1@14
  unsigned int *v17; // r2@16
  signed int v18; // r1@18
  int v19; // [sp+4h] [bp-3Ch]@3
  char v20; // [sp+8h] [bp-38h]@3
  int v21; // [sp+Ch] [bp-34h]@3
  int v22; // [sp+10h] [bp-30h]@3
  int v23; // [sp+14h] [bp-2Ch]@3
  int v24; // [sp+18h] [bp-28h]@3
  char v25; // [sp+1Ch] [bp-24h]@3
  char v26; // [sp+1Dh] [bp-23h]@3
  char *v27; // [sp+20h] [bp-20h]@3
  __int16 v28; // [sp+24h] [bp-1Ch]@3
  char v29; // [sp+26h] [bp-1Ah]@3
  char *v30; // [sp+28h] [bp-18h]@3

  v2 = this;
  v3 = a2;
  v4 = ClientInstance::isPrimaryClient(*((ClientInstance **)this + 4));
  v5 = (ClientInstance *)*((_DWORD *)v2 + 4);
  if ( v4 == 1 )
  {
    v6 = (Level *)ClientInstance::getLocalServerLevel(v5);
    if ( Level::hasLevelStorage(v6) == 1 )
    {
      v26 = 0;
      v27 = (char *)&unk_28898CC;
      v28 = 256;
      v29 = 1;
      v30 = (char *)&unk_28898CC;
      v20 = 1;
      v21 = 16;
      v22 = 9;
      v23 = 400;
      v24 = 225;
      v25 = 1;
      v7 = (Level *)ClientInstance::getLocalServerLevel(*((ClientInstance **)v2 + 4));
      v8 = Level::getLevelStorage(v7);
      v9 = (int *)(*(int (**)(void))(*(_DWORD *)v8 + 28))();
      sub_21E8AF4(&v19, v9);
      sub_21E7408((const void **)&v19, "/world_icon", 0xBu);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)&v27,
        &v19);
      v10 = (void *)(v19 - 12);
      if ( (int *)(v19 - 12) != &dword_28898C0 )
      {
        v13 = (unsigned int *)(v19 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        }
        else
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      }
      v28 = 1;
      ClientInstance::requestScreenshot(*((_DWORD *)v2 + 4), (int)&v20);
      v11 = v30 - 12;
      if ( (int *)(v30 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v30 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      v12 = v27 - 12;
      if ( (int *)(v27 - 12) != &dword_28898C0 )
        v17 = (unsigned int *)(v27 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
    }
    MinecraftGame::requestLeaveGame(*((MinecraftGame **)v2 + 3), v3, 0);
  }
  else
    j_j_j__ZN14ClientInstance16requestLeaveGameEbb_0(v5, 0, 1);
}


int __fastcall ClientInstanceScreenModel::createHudContainerManagerController(ClientInstanceScreenModel *this, int a2)
{
  ClientInstanceScreenModel *v2; // r4@1
  int v3; // r0@1
  int result; // r0@1
  unsigned int *v5; // r2@2
  unsigned int v6; // r1@4
  char v7; // [sp+4h] [bp-1Ch]@1
  int v8; // [sp+8h] [bp-18h]@1
  char v9; // [sp+Ch] [bp-14h]@1

  v2 = this;
  v3 = ClientInstance::getLocalPlayer(*(ClientInstance **)(a2 + 16));
  Player::getHudContainerManagerModel((Player *)&v7, v3);
  std::__shared_ptr<HudContainerManagerController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<HudContainerManagerController>,std::weak_ptr<HudContainerManagerModel>>(
    (int)v2,
    (int)&v9,
    (int)&v7);
  result = v8;
  if ( v8 )
  {
    v5 = (unsigned int *)(v8 + 8);
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
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  }
  return result;
}


int __fastcall ClientInstanceScreenModel::distanceSqrFromPlayerToBlockCenter(ClientInstanceScreenModel *this, const Vec3 *a2)
{
  const Vec3 *v2; // r4@1
  Entity *v3; // r5@1
  char v5; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  BlockPos::BlockPos((int)&v5, (int)v2);
  return Entity::distanceSqrToBlockPosCenter(v3, (const BlockPos *)&v5);
}


signed int __fastcall ClientInstanceScreenModel::calculatePlacePos(ClientInstanceScreenModel *this, signed __int8 *a2, BlockPos *a3)
{
  BlockPos *v3; // r4@1
  signed __int8 *v4; // r5@1
  Entity *v5; // r0@1
  const BlockPos *v6; // r6@1
  signed int result; // r0@1
  int v8; // [sp+0h] [bp-20h]@5
  int v9; // [sp+4h] [bp-1Ch]@5
  int v10; // [sp+8h] [bp-18h]@5
  unsigned __int8 v11; // [sp+Ch] [bp-14h]@1

  v3 = a3;
  v4 = a2;
  v5 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  v6 = (const BlockPos *)Entity::getRegion(v5);
  BlockSource::getBlockID((BlockSource *)&v11, v6, (int)v3);
  result = Block::mBlocks[v11];
  if ( result )
  {
    if ( (*(int (**)(void))(*(_DWORD *)result + 332))() )
    {
      result = 1;
      *v4 = 1;
    }
    else
      BlockPos::neighbor((BlockPos *)&v8, (int)v3, *v4);
      *(_DWORD *)v3 = v8;
      *((_DWORD *)v3 + 1) = v9;
      result = v10;
      *((_DWORD *)v3 + 2) = v10;
  }
  return result;
}


int __fastcall ClientInstanceScreenModel::getBlockIDAt(ClientInstanceScreenModel *this, const BlockPos *a2, int a3)
{
  ClientInstanceScreenModel *v3; // r5@1
  int v4; // r4@1
  Entity *v5; // r0@1
  const BlockPos *v6; // r0@1
  int result; // r0@1
  unsigned __int8 v8; // [sp+4h] [bp-14h]@1

  v3 = this;
  v4 = a3;
  v5 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)a2 + 4));
  v6 = (const BlockPos *)Entity::getRegion(v5);
  BlockSource::getBlockAndData((BlockSource *)&v8, v6, v4);
  result = v8;
  *(_BYTE *)v3 = v8;
  return result;
}


BlockEntity *__fastcall ClientInstanceScreenModel::getBlockEntity(int a1, const BlockPos *a2, int a3)
{
  int v3; // r4@1
  const BlockPos *v4; // r5@1
  Entity *v5; // r0@1
  BlockSource *v6; // r0@2
  BlockEntity *v7; // r0@2
  BlockEntity *v8; // r5@2

  v3 = a3;
  v4 = a2;
  v5 = (Entity *)ClientInstance::getLocalPlayer(*(ClientInstance **)(a1 + 16));
  if ( v5
    && (v6 = (BlockSource *)Entity::getRegion(v5),
        v7 = (BlockEntity *)BlockSource::getBlockEntity(v6, v4),
        (v8 = v7) != 0) )
  {
    if ( *(_DWORD *)BlockEntity::getType(v7) != v3 )
      v8 = 0;
  }
  else
    v8 = 0;
  return v8;
}


int __fastcall ClientInstanceScreenModel::canUseReed(ClientInstanceScreenModel *this)
{
  ClientInstanceScreenModel *v1; // r5@1
  Entity *v2; // r0@1
  int v3; // r4@1
  char *v4; // r0@1
  char v5; // r6@1
  Entity *v6; // r0@1
  const BlockPos *v7; // r5@1
  int v8; // r0@1
  int v10; // [sp+0h] [bp-70h]@1
  int v11; // [sp+4h] [bp-6Ch]@1
  int v12; // [sp+8h] [bp-68h]@1
  char v13; // [sp+Ch] [bp-64h]@1
  char v14; // [sp+10h] [bp-60h]@1
  int v15; // [sp+14h] [bp-5Ch]@1
  int v16; // [sp+18h] [bp-58h]@1
  int v17; // [sp+1Ch] [bp-54h]@1
  int v18; // [sp+50h] [bp-20h]@3
  int v19; // [sp+54h] [bp-1Ch]@3
  int v20; // [sp+58h] [bp-18h]@3
  unsigned __int8 v21; // [sp+5Ch] [bp-14h]@1

  v1 = this;
  v2 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  v3 = Entity::getRegion(v2);
  v4 = MinecraftScreenModel::getHitResult(v1);
  HitResult::HitResult((int)&v13, (int)v4);
  v10 = v15;
  v11 = v16;
  v12 = v17;
  v5 = v14;
  v6 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v1 + 4));
  v7 = (const BlockPos *)Entity::getRegion(v6);
  BlockSource::getBlockID((BlockSource *)&v21, v7, (int)&v10);
  v8 = Block::mBlocks[v21];
  if ( v8 && !(*(int (__cdecl **)(int, const BlockPos *, int *))(*(_DWORD *)v8 + 332))(v8, v7, &v10) )
  {
    BlockPos::neighbor((BlockPos *)&v18, (int)&v10, v5);
    v10 = v18;
    v11 = v19;
    v12 = v20;
  }
  return (*(int (__cdecl **)(_DWORD, int, int *))(*(_DWORD *)Block::mReeds + 224))(Block::mReeds, v3, &v10);
}


int __fastcall ClientInstanceScreenModel::navigateToServerStoreScreen(ClientInstanceScreenModel *this)
{
  Minecraft *v1; // r0@1
  int v2; // r0@1

  v1 = (Minecraft *)ClientInstance::getServerData(*((ClientInstance **)this + 4));
  v2 = Minecraft::getNetEventCallback(v1);
  return (*(int (**)(void))(*(_DWORD *)v2 + 20))();
}


void __fastcall ClientInstanceScreenModel::getInteractionText(ClientInstanceScreenModel *this, int a2)
{
  ClientInstanceScreenModel::getInteractionText(this, a2);
}


int __fastcall ClientInstanceScreenModel::isUsingItem(ClientInstanceScreenModel *this)
{
  Player *v1; // r0@1

  v1 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  return j_j_j__ZNK6Player11isUsingItemEv_0(v1);
}


int __fastcall ClientInstanceScreenModel::getPlayerCommandOrigin(ClientInstanceScreenModel *this, int a2)
{
  ClientInstanceScreenModel *v2; // r4@1
  Player *v3; // r6@1
  PlayerCommandOrigin *v4; // r5@1
  int result; // r0@1

  v2 = this;
  v3 = (Player *)ClientInstance::getLocalPlayer(*(ClientInstance **)(a2 + 16));
  v4 = (PlayerCommandOrigin *)operator new(0x18u);
  result = PlayerCommandOrigin::PlayerCommandOrigin(v4, v3);
  *(_DWORD *)v2 = v4;
  return result;
}


int __fastcall ClientInstanceScreenModel::canBindPlayerMobs(ClientInstanceScreenModel *this, const BlockPos *a2)
{
  const Entity *v2; // r4@1
  LeadItem *v3; // r0@1
  const BlockPos *v4; // r2@1

  v2 = a2;
  v3 = (LeadItem *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  return j_j_j__ZN8LeadItem17canBindPlayerMobsERK6EntityRK8BlockPos(v3, v2, v4);
}


_BOOL4 __fastcall ClientInstanceScreenModel::isPlayerRiding(ClientInstanceScreenModel *this)
{
  Entity *v1; // r0@1

  v1 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  return j_j_j__ZNK6Entity8isRidingEv_1(v1);
}


int __fastcall ClientInstanceScreenModel::getPlayerArmorValue(ClientInstanceScreenModel *this)
{
  int v1; // r0@1

  v1 = ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  return (*(int (**)(void))(*(_DWORD *)v1 + 1012))();
}


signed int __fastcall ClientInstanceScreenModel::getBossCount(ClientInstanceScreenModel *this)
{
  Player *v1; // r0@1
  char *v2; // r0@1

  v1 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  v2 = Player::getTrackedBosses(v1);
  return (signed int)((*(_QWORD *)v2 >> 32) - *(_QWORD *)v2) >> 3;
}


char *__fastcall ClientInstanceScreenModel::initiateRemix3DExport(int a1, int a2, const BlockPos *a3, int a4)
{
  int v4; // r8@1
  int v5; // r7@1
  int v6; // r10@1
  const BlockPos *v7; // r4@1
  Entity *v8; // r6@1
  Entity *v9; // r0@1
  BlockSource *v10; // r0@2
  BlockEntity *v11; // r0@2
  StructureBlockEntity *v12; // r4@2
  AppPlatform **v13; // r0@6
  char *result; // r0@8
  int v15; // r0@11
  int v16; // r1@11
  int *v17; // r0@13
  int *v18; // r0@13
  MinecraftglTFExporter *v19; // r7@13
  BlockSource *v20; // r0@13
  int v21; // r9@13
  int v22; // r0@13
  unsigned int *v23; // r0@14
  unsigned int v24; // r1@16
  void (__fastcall *v25)(int *, int, signed int); // r3@19
  void *v26; // r7@21
  int v27; // r0@21
  __int64 v28; // kr00_8@21
  void (*v29)(void); // r0@21
  int v30; // r1@21
  int v31; // r4@25
  unsigned int *v32; // r1@26
  unsigned int v33; // r0@28
  unsigned int *v34; // r5@32
  unsigned int v35; // r0@34
  void *v36; // r0@39
  void *v37; // r0@40
  void *v38; // r0@41
  void *v39; // r0@42
  void *v40; // r0@43
  unsigned int *v41; // r2@44
  signed int v42; // r1@46
  unsigned int *v43; // r2@48
  signed int v44; // r1@50
  unsigned int *v45; // r2@52
  signed int v46; // r1@54
  unsigned int *v47; // r2@56
  signed int v48; // r1@58
  unsigned int *v49; // r2@60
  signed int v50; // r1@62
  int v51; // [sp+8h] [bp-498h]@13
  int v52; // [sp+Ch] [bp-494h]@13
  MinecraftglTFExporter *v53; // [sp+10h] [bp-490h]@13
  int v54; // [sp+14h] [bp-48Ch]@13
  int v55; // [sp+18h] [bp-488h]@20
  void (*v56)(void); // [sp+20h] [bp-480h]@19
  int v57; // [sp+24h] [bp-47Ch]@20
  void *v58; // [sp+28h] [bp-478h]@21
  void (*v59)(void); // [sp+30h] [bp-470h]@21
  int (__fastcall *v60)(int *); // [sp+34h] [bp-46Ch]@21
  int v61; // [sp+38h] [bp-468h]@13
  int v62; // [sp+3Ch] [bp-464h]@13
  int v63; // [sp+40h] [bp-460h]@11
  int v64; // [sp+44h] [bp-45Ch]@11
  char v65; // [sp+48h] [bp-458h]@11
  void (*v66)(void); // [sp+50h] [bp-450h]@11
  int v67; // [sp+5Ch] [bp-444h]@11
  int v68; // [sp+60h] [bp-440h]@11
  int v69; // [sp+64h] [bp-43Ch]@11
  const char *v70; // [sp+68h] [bp-438h]@11
  int v71; // [sp+6Ch] [bp-434h]@11
  char v72; // [sp+70h] [bp-430h]@13
  char v73; // [sp+74h] [bp-42Ch]@11
  int v74; // [sp+78h] [bp-428h]@11
  RakNet *v75; // [sp+47Ch] [bp-24h]@1

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  v75 = _stack_chk_guard;
  v8 = (Entity *)ClientInstance::getLocalPlayer(*(ClientInstance **)(a2 + 16));
  v9 = (Entity *)ClientInstance::getLocalPlayer(*(ClientInstance **)(v5 + 16));
  if ( v9
    && (v10 = (BlockSource *)Entity::getRegion(v9),
        v11 = (BlockEntity *)BlockSource::getBlockEntity(v10, v7),
        (v12 = v11) != 0)
    && *(_DWORD *)BlockEntity::getType(v11) == 32
    && v8 )
  {
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v13 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v13 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
    v15 = *AppPlatform::getTempPath(*v13);
    v16 = *(_DWORD *)(v15 - 12);
    v68 = v15;
    v69 = v16;
    v70 = "TempGLTF";
    v71 = -1;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v73, (int)&v68, 2);
    sub_21E94B4((void **)&v67, (const char *)&v74);
    v63 = v67;
    v64 = *(_DWORD *)(v67 - 12);
    Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v65, (__int64 *)&v63);
    if ( v66 )
      v66();
    v17 = (int *)StructureBlockEntity::getStructureData(v12);
    sub_21E8AF4(&v62, v17);
    v18 = (int *)MinecraftGame::getFilePathManager(*(MinecraftGame **)(v5 + 12));
    FilePathManager::getHomePath((FilePathManager *)&v61, v18);
    j__ZNSt12__shared_ptrI21MinecraftglTFExporterLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJRKSsS7_R13MinecraftGameEEESt19_Sp_make_shared_tagRKT_DpOT0_(
      v4,
      (int)&v72,
      &v67,
      &v62,
      *(_DWORD *)(v5 + 12));
    v19 = *(MinecraftglTFExporter **)v4;
    v20 = (BlockSource *)Entity::getRegion(v8);
    MinecraftglTFExporter::initiateExport(v19, v12, v20);
    v21 = *(_DWORD *)v4;
    sub_21E8AF4(&v51, &v61);
    sub_21E8AF4(&v52, &v62);
    v53 = *(MinecraftglTFExporter **)v4;
    v22 = *(_DWORD *)(v4 + 4);
    v54 = v22;
    if ( v22 )
    {
      v23 = (unsigned int *)(v22 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 + 1, v23) );
      }
      else
        ++*v23;
    }
    v56 = 0;
    v25 = *(void (__fastcall **)(int *, int, signed int))(v6 + 8);
    if ( v25 )
      v25(&v55, v6, 2);
      v57 = *(_DWORD *)(v6 + 12);
      v56 = *(void (**)(void))(v6 + 8);
    v59 = 0;
    v26 = operator new(0x20u);
    sub_21E8AF4((int *)v26, &v51);
    sub_21E8AF4((int *)v26 + 1, &v52);
    *((_DWORD *)v26 + 2) = v53;
    v27 = v54;
    v54 = 0;
    *((_DWORD *)v26 + 3) = v27;
    v53 = 0;
    v28 = *(_QWORD *)&v55;
    *(_QWORD *)&v55 = *((_QWORD *)v26 + 2);
    *((_QWORD *)v26 + 2) = v28;
    v29 = v56;
    *((_DWORD *)v26 + 6) = v29;
    v30 = v57;
    v57 = *((_DWORD *)v26 + 7);
    *((_DWORD *)v26 + 7) = v30;
    v58 = v26;
    v59 = (void (*)(void))sub_12CDFA4;
    v60 = sub_12CDF90;
    MinecraftglTFExporter::initiateSerialize(v21, (int)&v58);
    if ( v59 )
      v59();
    if ( v56 )
      v56();
    v31 = v54;
    if ( v54 )
      v32 = (unsigned int *)(v54 + 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 == 1 )
        v34 = (unsigned int *)(v31 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 8))(v31);
        if ( &pthread_create )
        {
          __dmb();
          do
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
        }
        else
          v35 = (*v34)--;
        if ( v35 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 12))(v31);
    v36 = (void *)(v52 - 12);
    if ( (int *)(v52 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v52 - 4);
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j__ZdlPv_9(v36);
    v37 = (void *)(v51 - 12);
    if ( (int *)(v51 - 12) != &dword_28898C0 )
      v45 = (unsigned int *)(v51 - 4);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j__ZdlPv_9(v37);
    v38 = (void *)(v61 - 12);
    if ( (int *)(v61 - 12) != &dword_28898C0 )
      v47 = (unsigned int *)(v61 - 4);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 <= 0 )
        j_j_j_j__ZdlPv_9(v38);
    v39 = (void *)(v62 - 12);
    if ( (int *)(v62 - 12) != &dword_28898C0 )
      v49 = (unsigned int *)(v62 - 4);
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
        v50 = (*v49)--;
      if ( v50 <= 0 )
        j_j_j_j__ZdlPv_9(v39);
    v40 = (void *)(v67 - 12);
    if ( (int *)(v67 - 12) != &dword_28898C0 )
      v41 = (unsigned int *)(v67 - 4);
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j__ZdlPv_9(v40);
  }
  else
    *(_DWORD *)v4 = 0;
    *(_DWORD *)(v4 + 4) = 0;
  result = (char *)(_stack_chk_guard - v75);
  if ( _stack_chk_guard != v75 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall ClientInstanceScreenModel::getBossHealthPercentage(ClientInstanceScreenModel *this, int a2)
{
  ClientInstanceScreenModel *v2; // r5@1
  unsigned int v3; // r4@1
  Player *v4; // r0@1
  char *v5; // r6@1
  Entity *v10; // r0@2
  int v11; // r0@2
  Entity *v12; // r0@2
  Entity *v13; // r4@2
  BossComponent *v14; // r0@4
  int result; // r0@8

  v2 = this;
  v3 = a2;
  v4 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  v5 = Player::getTrackedBosses(v4);
  __asm { VLDR            S16, =0.0 }
  if ( (signed int)((*(_QWORD *)v5 >> 32) - *(_QWORD *)v5) >> 3 > v3 )
  {
    v10 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v2 + 4));
    v11 = Entity::getLevel(v10);
    v12 = (Entity *)Level::fetchEntity(
                      v11,
                      0,
                      *(_DWORD *)(*(_DWORD *)v5 + 8 * v3),
                      *(_DWORD *)(*(_DWORD *)v5 + 8 * v3 + 4),
                      0);
    v13 = v12;
    if ( v12 )
    {
      if ( Entity::getBossComponent(v12) )
      {
        v14 = (BossComponent *)Entity::getBossComponent(v13);
        _R0 = BossComponent::getHealthPercent(v14);
        __asm
        {
          VMOV.F32        S0, #1.0
          VMOV            S2, R0
          VSUB.F32        S16, S0, S2
        }
      }
      else
        _R0 = Mob::getHealth(v13);
          VMOV            S0, R0
          VCVT.F32.S32    S16, S0
        _R0 = Mob::getMaxHealth(v13);
          VMOV.F32        S2, #1.0
          VCVT.F32.S32    S0, S0
          VMOV.F32        S4, S2
          VDIV.F32        S0, S16, S0
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          __asm { VMOVLT.F32      S4, S0 }
        __asm { VSUB.F32        S16, S2, S4 }
    }
  }
  __asm { VMOV            R0, S16 }
  return result;
}


signed __int64 __fastcall ClientInstanceScreenModel::createCommandBlockManager(_DWORD *a1, MinecraftScreenModel *a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v6; // r4@1
  int v7; // r6@1
  int v8; // r7@1
  int v9; // r5@1
  __int64 v10; // r0@2
  int v11; // r7@2
  int v12; // r3@2
  signed __int64 result; // r0@2
  __int64 v14; // r0@3
  int v15; // r3@3
  int v16; // [sp+Ch] [bp-34h]@2
  int v17; // [sp+10h] [bp-30h]@2
  int v18; // [sp+14h] [bp-2Ch]@2
  int v19; // [sp+18h] [bp-28h]@3
  int v20; // [sp+1Ch] [bp-24h]@3
  int v21; // [sp+20h] [bp-20h]@3

  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = MinecraftScreenModel::getPlayer(a2);
  if ( v8 == 1 )
  {
    LODWORD(v10) = operator new(0x30u);
    v11 = v10;
    v16 = *(_DWORD *)v7;
    v17 = *(_DWORD *)(v7 + 4);
    v18 = *(_DWORD *)(v7 + 8);
    result = __PAIR__(v9, MinecartCommandBlockManager::MinecartCommandBlockManager(v10, (int)&v16, v12, a5, a6));
  }
  else
    LODWORD(v14) = operator new(0x30u);
    v11 = v14;
    v19 = *(_DWORD *)v7;
    v20 = *(_DWORD *)(v7 + 4);
    v21 = *(_DWORD *)(v7 + 8);
    result = __PAIR__(v9, CommandBlockManager::CommandBlockManager(v14, (int)&v19, v15, a5, a6));
  *v6 = v11;
  return result;
}


int __fastcall ClientInstanceScreenModel::toggleChatMute(ClientInstanceScreenModel *this)
{
  GuiData *v1; // r0@1

  v1 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)this + 4));
  return j_j_j__ZN7GuiData14toggleMuteChatEv(v1);
}
