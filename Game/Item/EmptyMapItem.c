

void __fastcall EmptyMapItem::getInteractText(EmptyMapItem *this, const Player *a2)
{
  int *v2; // r4@1
  void *v3; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@1

  v2 = (int *)this;
  sub_21E94B4((void **)&v6, "action.interact.createMap");
  I18n::get(v2, (int **)&v6);
  v3 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v6 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
}


void __fastcall EmptyMapItem::getInteractText(EmptyMapItem *this, const Player *a2)
{
  EmptyMapItem::getInteractText(this, a2);
}


void __fastcall EmptyMapItem::~EmptyMapItem(EmptyMapItem *this)
{
  EmptyMapItem::~EmptyMapItem(this);
}


Item *__fastcall EmptyMapItem::EmptyMapItem(Item *a1)
{
  Item *v1; // r4@1
  void *v2; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@1

  v1 = a1;
  sub_21E94B4((void **)&v6, "emptyMap");
  ComplexItem::ComplexItem((int)v1, (const void **)&v6, 139);
  v2 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v6 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  }
  *(_DWORD *)v1 = &off_270155C;
  Item::setStackedByData(v1, 1);
  return v1;
}


signed int __fastcall EmptyMapItem::requiresInteract(EmptyMapItem *this)
{
  return 1;
}


ItemInstance *__fastcall EmptyMapItem::use(EmptyMapItem *this, ItemInstance *a2, Player *a3)
{
  Player *v3; // r5@1
  ItemInstance *v4; // r9@1
  Level *v5; // r11@1
  ItemInstance *v6; // r1@1
  ItemInstance *v7; // r4@6
  int v8; // r2@6
  ItemInstance *v9; // r4@6
  MapItemSavedData *v10; // r2@6
  int v11; // r10@6
  MapItemSavedData *v12; // r7@6
  int v13; // r0@7
  float v14; // r4@7
  int v15; // r6@7
  int v16; // r8@7
  int v17; // r0@7
  int v18; // r1@7
  bool v19; // nf@7
  unsigned __int8 v20; // vf@7
  Level *v21; // r0@8
  int v22; // r0@8
  int *v23; // r0@9
  int v24; // r1@9
  PlayerInventoryProxy *v25; // r0@11
  PlayerInventoryProxy *v26; // r0@13
  int v27; // r5@20 OVERLAPPED
  int v28; // r6@20 OVERLAPPED
  int v29; // r7@21
  unsigned int *v30; // r1@22
  unsigned int v31; // r0@24
  unsigned int *v32; // r4@28
  unsigned int v33; // r0@30
  MapItemSavedData *v35; // [sp+10h] [bp-E0h]@6
  void **v36; // [sp+14h] [bp-DCh]@8
  void *v37; // [sp+24h] [bp-CCh]@39
  __int64 v38; // [sp+34h] [bp-BCh]@20
  void *v39; // [sp+40h] [bp-B0h]@18
  void *ptr; // [sp+64h] [bp-8Ch]@16
  __int64 v41; // [sp+70h] [bp-80h]@7
  unsigned __int64 v42; // [sp+78h] [bp-78h]@6
  char v43; // [sp+80h] [bp-70h]@1
  int v44; // [sp+88h] [bp-68h]@45
  void *v45; // [sp+A4h] [bp-4Ch]@43
  void *v46; // [sp+B4h] [bp-3Ch]@41

  v3 = a3;
  v4 = a2;
  v5 = (Level *)Entity::getLevel(a3);
  ItemInstance::ItemInstance((ItemInstance *)&v43, Item::mFilledMap, 1);
  if ( (unsigned __int16)ItemInstance::getAuxValue(v4) == 2 )
    EmptyMapItem::addPlayerMarker((EmptyMapItem *)&v43, v6);
  if ( Level::isClientSide(v5) )
  {
    if ( (unsigned int)*((_BYTE *)v4 + 14) >= 2 )
      ItemInstance::remove(v4, 1);
  }
  else
    v7 = (ItemInstance *)Player::getMapIndex(v3);
    Player::setMapIndex(v3, (int)v7 + 1);
    MapItem::setMapNameIndex((MapItem *)&v43, v7, v8);
    v42 = -1LL;
    v9 = Level::createMapSavedData((int)v5, &v42);
    MapItem::setItemInstanceInfo((MapItem *)&v43, v9, v10);
    v35 = v9;
    v11 = 0;
    v12 = v9;
    do
    {
      v13 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v3 + 52))(v3);
      v14 = *(float *)v13;
      v15 = *(_DWORD *)(v13 + 4);
      v16 = *(_DWORD *)(v13 + 8);
      v17 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v3 + 524))(v3);
      MapItemSavedData::setOrigin((int)v12, v14, v15, v16, v11, v17);
      MapItemSavedData::getParentMapId((MapItemSavedData *)&v41, (int)v12);
      v12 = Level::getMapSavedData((int)v5, v18, v41);
      v20 = __OFSUB__(v11, 4);
      v19 = v11++ - 4 < 0;
    }
    while ( v19 ^ v20 );
    ClientboundMapItemDataPacket::ClientboundMapItemDataPacket((int)&v36, v35, (int)v5);
    v21 = (Level *)Entity::getLevel(v3);
    v22 = Level::getPacketSender(v21);
    (*(void (**)(void))(*(_DWORD *)v22 + 8))();
    if ( ItemInstance::hasUserData(v4) == 1 )
      v23 = (int *)ItemInstance::getUserData(v4);
      v24 = CompoundTag::getInt(*v23, (const void **)&MapItem::TAG_MAP_SCALE);
      if ( v24 )
        MapItemSavedData::setScale(v35, v24);
    ItemInstance::remove(v4, 1);
    v25 = (PlayerInventoryProxy *)Player::getSupplies(v3);
    if ( (unsigned __int8)PlayerInventoryProxy::getSelectedContainerId(v25) == 123 || *((_BYTE *)v4 + 14) )
      InventoryTransactionManager::_createServerSideAction(
        (Player *)((char *)v3 + 5152),
        (const ItemInstance *)&ItemInstance::EMPTY_ITEM,
        (const ItemInstance *)&v43);
      v26 = (PlayerInventoryProxy *)Player::getSupplies(v3);
      if ( !PlayerInventoryProxy::add(v26, (ItemInstance *)&v43, 1) )
        (*(void (__fastcall **)(Player *, char *, _DWORD))(*(_DWORD *)v3 + 664))(v3, &v43, 0);
    else
      ItemInstance::operator=((int)v4, (int)&v43);
    v36 = &off_26E9C74;
    if ( ptr )
      operator delete(ptr);
    if ( v39 )
      operator delete(v39);
    *(_QWORD *)&v27 = v38;
    if ( (_DWORD)v38 != HIDWORD(v38) )
      do
      {
        v29 = *(_DWORD *)(v27 + 4);
        if ( v29 )
        {
          v30 = (unsigned int *)(v29 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v31 = __ldrex(v30);
            while ( __strex(v31 - 1, v30) );
          }
          else
            v31 = (*v30)--;
          if ( v31 == 1 )
            v32 = (unsigned int *)(v29 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 8))(v29);
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
              (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 12))(v29);
        }
        v27 += 8;
      }
      while ( v27 != v28 );
      v27 = v38;
    if ( v27 )
      operator delete((void *)v27);
    if ( v37 )
      operator delete(v37);
  if ( v46 )
    operator delete(v46);
  if ( v45 )
    operator delete(v45);
  if ( v44 )
    (*(void (**)(void))(*(_DWORD *)v44 + 4))();
  return v4;
}


void __fastcall EmptyMapItem::~EmptyMapItem(EmptyMapItem *this)
{
  void *v1; // r0@1

  v1 = (void *)ComplexItem::~ComplexItem(this);
  j_j_j__ZdlPv_6(v1);
}


int __fastcall EmptyMapItem::addPlayerMarker(EmptyMapItem *this, ItemInstance *a2)
{
  ItemInstance *v2; // r4@1
  void *v3; // r5@2
  int *v4; // r0@5
  void *v6; // [sp+4h] [bp-14h]@2

  v2 = this;
  if ( !ItemInstance::hasUserData(this) )
  {
    v3 = operator new(0x1Cu);
    CompoundTag::CompoundTag((int)v3);
    v6 = v3;
    ItemInstance::setUserData((int)v2, (int *)&v6);
    if ( v6 )
      (*(void (**)(void))(*(_DWORD *)v6 + 4))();
    v6 = 0;
  }
  v4 = (int *)ItemInstance::getUserData(v2);
  return CompoundTag::putBoolean(*v4, (const void **)&MapItem::TAG_MAP_PLAYER_DISPLAY, 1);
}


void **__fastcall EmptyMapItem::buildDescriptionId(EmptyMapItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  void **v3; // r4@1
  void **result; // r0@2

  v3 = (void **)this;
  if ( (unsigned __int16)ItemInstance::getAuxValue(a3) == 2 )
    result = sub_21E94B4(v3, "item.emptyLocatorMap.name");
  else
    result = sub_21E94B4(v3, "item.emptyMap.name");
  return result;
}
