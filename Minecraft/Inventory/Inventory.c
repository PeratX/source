

int __fastcall Inventory::dropAll(Inventory *this, int a2)
{
  int v2; // r4@1
  FillingContainer *v3; // r5@1
  int v4; // r6@1
  int v5; // r2@1

  v2 = a2;
  v3 = this;
  v4 = j_FillingContainer::getLinkedSlotsCount(this);
  v5 = (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v3 + 44))(v3);
  return j_j_j__ZN16FillingContainer7dropAllEiib(v3, v4, v5, v2);
}


int __fastcall Inventory::clearSlot(int result, int a2)
{
  int v2; // r4@1
  FillingContainer *v3; // r5@1
  int v4; // r1@3
  int v5; // r6@7

  v2 = a2;
  v3 = (FillingContainer *)result;
  if ( a2 >= 0 )
  {
    if ( j_FillingContainer::getLinkedSlotsCount((FillingContainer *)result) <= a2 )
    {
      if ( j_FillingContainer::getLinkedSlotsCount(v3) >= 1 )
      {
        v5 = 0;
        while ( j_FillingContainer::getLinkedSlot(v3, v5) != v2 )
        {
          if ( ++v5 >= j_FillingContainer::getLinkedSlotsCount(v3) )
            goto LABEL_13;
        }
        if ( v5 != -1 )
          j_FillingContainer::unlinkSlot(v3, v5);
      }
LABEL_13:
      result = j_j_j__ZN16FillingContainer8_releaseEi_0(v3, v2);
    }
    else
      result = *(_DWORD *)j_FillingContainer::getLinkedSlots(v3);
      v4 = *(_DWORD *)(result + 4 * v2);
      if ( v4 != -1 )
        j_FillingContainer::_release(v3, v4);
        result = j_j_j__ZN16FillingContainer10unlinkSlotEi_1(v3, v2);
  }
  return result;
}


signed int __fastcall Inventory::add(Inventory *this, ItemInstance *a2, int a3)
{
  FillingContainer *v3; // r6@1
  ItemInstance *v4; // r5@1
  int v5; // r0@1
  int v6; // r4@1
  bool v7; // zf@1
  unsigned int v8; // r7@5
  unsigned int v9; // r0@5
  bool v10; // cf@5
  bool v11; // zf@5
  signed int result; // r0@4

  v3 = this;
  v4 = a2;
  v5 = *((_DWORD *)this + 31);
  v6 = a3;
  v7 = v5 == 0;
  if ( v5 )
    v7 = *(_BYTE *)(v5 + 4620) == 0;
  if ( v7 )
  {
    v8 = j_FillingContainer::_getSlotWithRemainingSpace(v3, a2);
    v9 = j_FillingContainer::_getFreeSlot(v3);
    v10 = v8 >= 0x2D;
    v11 = v8 == 45;
    if ( v8 >= 0x2D )
    {
      v10 = v9 >= 0x2C;
      v11 = v9 == 44;
    }
    if ( !v11 && v10 )
      result = 0;
    else
      result = j_FillingContainer::add(v3, v4, v6);
  }
  else
    result = 1;
  return result;
}


signed int __fastcall Inventory::getSelectionSize(Inventory *this)
{
  return 9;
}


void __fastcall Inventory::~Inventory(Inventory *this)
{
  Container *v1; // r0@1

  v1 = j_FillingContainer::~FillingContainer(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall Inventory::doDrop(Inventory *this, ItemInstance *a2, bool a3)
{
  int result; // r0@1

  result = *((_DWORD *)this + 31);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 664))();
  return result;
}


int __fastcall Inventory::clearInventoryWithDefault(Inventory *this, bool a2)
{
  Inventory *v2; // r4@1

  v2 = this;
  (*(void (**)(void))(*(_DWORD *)this + 132))();
  return j_j_j__ZN9Inventory12setupDefaultEv_0(v2);
}


int __fastcall Inventory::setContainerSize(__int64 this)
{
  int v1; // r4@1
  int v2; // r2@1
  int v3; // t1@1
  int v4; // r5@1
  unsigned int v5; // r3@1
  int v6; // r8@4
  int v7; // r6@5
  void *v8; // r0@6
  void *v9; // r0@8

  v1 = this;
  v3 = *(_DWORD *)(this + 112);
  LODWORD(this) = this + 112;
  v2 = v3;
  v4 = *(_DWORD *)(this + 4);
  v5 = 954437177 * ((v4 - v3) >> 3);
  if ( v5 >= HIDWORD(this) )
  {
    if ( v5 > HIDWORD(this) )
    {
      LODWORD(this) = 9 * HIDWORD(this);
      v6 = v2 + 72 * HIDWORD(this);
      if ( v4 != v6 )
      {
        v7 = v2 + 72 * HIDWORD(this);
        do
        {
          v8 = *(void **)(v7 + 52);
          if ( v8 )
            j_operator delete(v8);
          v9 = *(void **)(v7 + 36);
          if ( v9 )
            j_operator delete(v9);
          LODWORD(this) = *(_DWORD *)(v7 + 8);
          if ( (_DWORD)this )
            LODWORD(this) = (*(int (**)(void))(*(_DWORD *)this + 4))();
          *(_DWORD *)(v7 + 8) = 0;
          v7 += 72;
        }
        while ( v4 != v7 );
      }
      *(_DWORD *)(v1 + 116) = v6;
    }
  }
  else
    HIDWORD(this) -= v5;
    LODWORD(this) = j_j_j__ZNSt6vectorI12ItemInstanceSaIS0_EE17_M_default_appendEj_1(this);
  return this;
}


int __fastcall Inventory::getEmptySlotsCount(Inventory *this)
{
  FillingContainer *v1; // r4@1
  int v2; // r5@1
  int v3; // r2@1

  v1 = this;
  v2 = j_FillingContainer::getLinkedSlotsCount(this);
  v3 = (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v1 + 44))(v1) - 9;
  return j_j_j__ZNK16FillingContainer19_getEmptySlotsCountEii(v1, v2, v3);
}


void __fastcall Inventory::~Inventory(Inventory *this)
{
  Inventory::~Inventory(this);
}


int __fastcall Inventory::setupDefault(Inventory *this)
{
  Inventory *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@1
  int v4; // r6@2
  unsigned int v5; // r7@2
  bool v6; // zf@4
  Level *v7; // r0@10
  int result; // r0@10
  void *v9; // r5@11
  void (__fastcall *v10)(Inventory *, int, char *); // r5@13
  int v11; // r0@13
  void *v12; // [sp+4h] [bp-64h]@11
  char v13; // [sp+8h] [bp-60h]@11
  int v14; // [sp+10h] [bp-58h]@17
  void *v15; // [sp+2Ch] [bp-3Ch]@15
  void *ptr; // [sp+3Ch] [bp-2Ch]@13

  v1 = this;
  (*(void (**)(void))(*(_DWORD *)this + 132))();
  v2 = *((_QWORD *)v1 + 14) >> 32;
  v3 = *((_QWORD *)v1 + 14);
  if ( v2 != v3 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      if ( v5 <= 8 )
      {
        v6 = *(_BYTE *)(v3 + v4 + 15) == 0;
        if ( *(_BYTE *)(v3 + v4 + 15) )
          v6 = *(_DWORD *)(v3 + v4) == 0;
        if ( !v6 )
        {
          j_ItemInstance::isNull((ItemInstance *)(v3 + v4));
          v3 = *((_DWORD *)v1 + 28);
        }
        j_ItemInstance::operator=(v3 + v4, (int)&ItemInstance::EMPTY_ITEM);
        v2 = *((_QWORD *)v1 + 14) >> 32;
        v3 = *((_QWORD *)v1 + 14);
      }
      v4 += 72;
      ++v5;
    }
    while ( v5 < 954437177 * ((v2 - v3) >> 3) );
  }
  v7 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 31));
  result = j_Level::hasStartWithMapEnabled(v7);
  if ( result )
    j_ItemInstance::ItemInstance((ItemInstance *)&v13, Item::mEmptyMap, 1, 2);
    v9 = j_operator new(0x1Cu);
    j_CompoundTag::CompoundTag((int)v9);
    j_CompoundTag::putInt((int)v9, (const void **)&MapItem::TAG_MAP_SCALE, 3);
    v12 = v9;
    j_ItemInstance::setUserData((int)&v13, (int *)&v12);
    if ( v12 )
      (*(void (**)(void))(*(_DWORD *)v12 + 4))();
    v12 = 0;
    v10 = *(void (__fastcall **)(Inventory *, int, char *))(*(_DWORD *)v1 + 32);
    v11 = (*(int (__fastcall **)(Inventory *))(*(_DWORD *)v1 + 44))(v1);
    v10(v1, v11 - 36, &v13);
    if ( ptr )
      j_operator delete(ptr);
    if ( v15 )
      j_operator delete(v15);
    result = v14;
    if ( v14 )
      result = (*(int (**)(void))(*(_DWORD *)v14 + 4))();
  return result;
}


signed int __fastcall Inventory::getLinkedSlotForExactItem(Inventory *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r5@1
  FillingContainer *v3; // r6@1
  signed int v4; // r7@1
  int v5; // r4@2
  ItemInstance *v6; // r0@3

  v2 = a2;
  v3 = this;
  v4 = j_FillingContainer::getLinkedSlotsCount(this);
  if ( v4 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = (ItemInstance *)j_FillingContainer::getLinked(v3, v5);
      if ( j_ItemInstance::matchesItem(v6, v2) == 1 )
        break;
      if ( v4 == ++v5 )
        return -1;
    }
  }
  else
    v5 = -1;
  return v5;
}


signed int __fastcall Inventory::load(Inventory *this, const ListTag *a2)
{
  Inventory *v2; // r4@1
  int v3; // r5@1
  signed int result; // r0@2
  signed int v5; // r7@2
  int v6; // r6@3
  bool v7; // zf@3
  int v8; // r10@8
  signed int v9; // r0@8
  int v10; // r6@8

  v2 = this;
  j_FillingContainer::load(this, a2);
  v3 = 0;
  do
  {
    result = j_FillingContainer::getLinkedSlot(v2, v3);
    v5 = result;
    if ( result >= 45 )
    {
      v6 = *((_DWORD *)v2 + 28) + 72 * result;
      result = *(_BYTE *)(v6 + 15);
      v7 = result == 0;
      if ( *(_BYTE *)(v6 + 15) )
      {
        result = *(_DWORD *)v6;
        v7 = *(_DWORD *)v6 == 0;
      }
      if ( !v7 )
        result = j_ItemInstance::isNull((ItemInstance *)(*((_DWORD *)v2 + 28) + 72 * v5));
        if ( !result )
        {
          result = *(_BYTE *)(v6 + 14);
          if ( *(_BYTE *)(v6 + 14) )
          {
            v8 = *((_DWORD *)v2 + 28);
            v9 = j_FillingContainer::_getFreeSlot(v2);
            v10 = v9;
            result = v9 - 9;
            if ( (unsigned int)result <= 0x23 )
            {
              (*(void (__fastcall **)(Inventory *, int, int))(*(_DWORD *)v2 + 32))(v2, v10, v8 + 72 * v5);
              (*(void (__fastcall **)(Inventory *, signed int, void *))(*(_DWORD *)v2 + 32))(
                v2,
                v5,
                &ItemInstance::EMPTY_ITEM);
              result = j_FillingContainer::linkSlot(v2, v3, v10);
            }
          }
        }
    }
    ++v3;
  }
  while ( v3 != 9 );
  return result;
}


char *__fastcall Inventory::getComplexItems(Inventory *this, int a2)
{
  Inventory *v2; // r4@1
  char *result; // r0@1
  ItemInstance *v4; // r5@1 OVERLAPPED
  ItemInstance *v5; // r6@1 OVERLAPPED
  __int64 v6; // r0@5

  v2 = this;
  result = 0;
  *(_DWORD *)v2 = 0;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = 0;
  for ( *(_QWORD *)&v4 = *(_QWORD *)(a2 + 112); v5 != v4; v4 = (ItemInstance *)((char *)v4 + 72) )
  {
    result = (char *)j_ItemInstance::isNull(v4);
    if ( !result )
    {
      result = *(char **)v4;
      if ( *(_DWORD *)v4 )
      {
        result = (char *)(*(int (**)(void))(*(_DWORD *)result + 140))();
        if ( result == (char *)1 )
        {
          v6 = *(_QWORD *)((char *)v2 + 4);
          if ( (_DWORD)v6 == HIDWORD(v6) )
          {
            result = j_std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
                       (unsigned __int64 *)v2,
                       (int)v4);
          }
          else
            result = (char *)j_ItemInstance::ItemInstance((ItemInstance *)v6, (int)v4) + 72;
            *((_DWORD *)v2 + 1) = result;
        }
      }
    }
  }
  return result;
}


int __fastcall Inventory::tick(Inventory *this, int a2)
{
  Inventory *v2; // r4@1
  signed int v3; // r11@1
  __int64 v4; // r0@1
  unsigned int v5; // r5@2
  signed int v6; // r8@2
  int v7; // r7@3
  signed int v8; // r9@3
  bool v9; // zf@5
  int v10; // r10@10
  BlockSource *v11; // r0@10
  Level *v12; // r1@10
  bool v13; // r3@10
  int v14; // r0@14
  PlayerInventoryProxy *v15; // r0@14
  char v16; // r0@14
  int v17; // r1@14
  void **v19; // [sp+10h] [bp-D0h]@14
  int v20; // [sp+14h] [bp-CCh]@14
  int v21; // [sp+18h] [bp-C8h]@14
  char v22; // [sp+1Ch] [bp-C4h]@14
  char v23; // [sp+1Dh] [bp-C3h]@14
  unsigned int v24; // [sp+20h] [bp-C0h]@14
  int v25; // [sp+28h] [bp-B8h]@14
  int v26; // [sp+30h] [bp-B0h]@18
  void *v27; // [sp+4Ch] [bp-94h]@16
  void *ptr; // [sp+5Ch] [bp-84h]@14
  char v29; // [sp+70h] [bp-70h]@10
  int v30; // [sp+78h] [bp-68h]@24
  void *v31; // [sp+94h] [bp-4Ch]@22
  void *v32; // [sp+A4h] [bp-3Ch]@20

  v2 = this;
  v3 = j_FillingContainer::getLinkedSlot(this, a2);
  v4 = *((_QWORD *)v2 + 14);
  if ( (unsigned int)(954437177 * ((HIDWORD(v4) - (signed int)v4) >> 3)) >= 0xA )
  {
    v5 = 9;
    v6 = 648;
    do
    {
      v7 = v4 + v6;
      v8 = 9;
      if ( v5 > 0x2C )
        v8 = 45;
      v9 = *(_BYTE *)(v7 + 15) == 0;
      if ( *(_BYTE *)(v7 + 15) )
        v9 = *(_DWORD *)(v4 + v6) == 0;
      if ( !v9 && !j_ItemInstance::isNull((ItemInstance *)v7) && *(_BYTE *)(v7 + 14) )
      {
        j_ItemInstance::ItemInstance((ItemInstance *)&v29, *((_DWORD *)v2 + 28) + v6);
        v10 = *((_DWORD *)v2 + 28);
        v11 = (BlockSource *)j_Entity::getRegion(*((Entity **)v2 + 31));
        v12 = (Level *)j_BlockSource::getLevel(v11);
        v13 = 0;
        if ( v3 == v5 )
          v13 = 1;
        j_ItemInstance::inventoryTick((ItemInstance *)(v10 + v6), v12, *((Entity **)v2 + 31), v5 - v8, v13);
        if ( !(*(int (**)(void))(**((_DWORD **)v2 + 31) + 1408))()
          && j_ItemInstance::operator!=((ItemInstance *)(*((_DWORD *)v2 + 28) + v6), (ItemInstance *)&v29) == 1 )
        {
          v14 = j_Player::getSupplies(*((Player **)v2 + 31));
          (*(void (**)(void))(*(_DWORD *)v14 + 12))();
          v15 = (PlayerInventoryProxy *)j_Player::getSupplies(*((Player **)v2 + 31));
          v16 = j_PlayerInventoryProxy::getSelectedContainerId(v15);
          v17 = *((_DWORD *)v2 + 28);
          v20 = 2;
          v21 = 1;
          v22 = 0;
          v19 = &off_26E9774;
          v23 = v16;
          v24 = v5 - v8;
          j_ItemInstance::ItemInstance((ItemInstance *)&v25, v17 + v6);
          (*(void (**)(void))(**((_DWORD **)v2 + 31) + 1524))();
          if ( ptr )
            j_operator delete(ptr);
          if ( v27 )
            j_operator delete(v27);
          if ( v26 )
            (*(void (**)(void))(*(_DWORD *)v26 + 4))();
        }
        if ( v32 )
          j_operator delete(v32);
        if ( v31 )
          j_operator delete(v31);
        if ( v30 )
          (*(void (**)(void))(*(_DWORD *)v30 + 4))();
      }
      v4 = *((_QWORD *)v2 + 14);
      v6 += 72;
      ++v5;
    }
    while ( v5 < 954437177 * ((HIDWORD(v4) - (signed int)v4) >> 3) );
  }
  return v4;
}


int __fastcall Inventory::getLinkedSlotForItemIdAndAux(Inventory *this, int a2, int a3)
{
  int v3; // r8@1
  int v4; // r9@1
  FillingContainer *v5; // r7@1
  signed int v6; // r5@1
  int v7; // r4@2
  ItemInstance *v8; // r0@3
  ItemInstance *v9; // r6@3
  int v10; // r0@3
  bool v11; // zf@3
  ItemInstance *v12; // r0@8
  ItemInstance *v13; // r0@9

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = j_FillingContainer::getLinkedSlotsCount(this);
  if ( v6 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = (ItemInstance *)j_FillingContainer::getLinked(v5, v7);
      v9 = v8;
      v10 = *((_BYTE *)v8 + 15);
      v11 = v10 == 0;
      if ( v10 )
        v11 = *(_DWORD *)v9 == 0;
      if ( !v11 && !j_ItemInstance::isNull(v9) )
      {
        if ( *((_BYTE *)v9 + 14) )
        {
          v12 = (ItemInstance *)j_FillingContainer::getLinked(v5, v7);
          if ( j_ItemInstance::getId(v12) == v4 )
          {
            v13 = (ItemInstance *)j_FillingContainer::getLinked(v5, v7);
            if ( j_ItemInstance::getAuxValue(v13) == v3 )
              break;
          }
        }
      }
      if ( v6 == ++v7 )
        goto LABEL_11;
    }
  }
  else
LABEL_11:
    v7 = -1;
  return v7;
}


signed int __fastcall Inventory::canAdd(Inventory *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r4@1
  FillingContainer *v3; // r5@1
  signed int result; // r0@2
  unsigned int v5; // r6@3
  unsigned int v6; // r0@3
  bool v7; // cf@3
  bool v8; // zf@3

  v2 = a2;
  v3 = this;
  if ( j_FillingContainer::_isCreative(this) )
  {
    result = 1;
  }
  else
    v5 = j_FillingContainer::_getSlotWithRemainingSpace(v3, v2);
    v6 = j_FillingContainer::_getFreeSlot(v3);
    v7 = v5 >= 0x2D;
    v8 = v5 == 45;
    if ( v5 >= 0x2D )
    {
      v7 = v6 >= 0x2C;
      v8 = v6 == 44;
    }
    if ( !v8 && v7 )
      result = 0;
    else
      result = j_FillingContainer::canAdd(v3, v2);
  return result;
}


int __fastcall Inventory::getLinkedSlotForItem(Inventory *this, int a2)
{
  int v2; // r5@1
  FillingContainer *v3; // r6@1
  int v4; // r4@2

  v2 = a2;
  v3 = this;
  if ( j_FillingContainer::getLinkedSlotsCount(this) < 1 )
  {
LABEL_5:
    v4 = -1;
  }
  else
    v4 = 0;
    while ( j_FillingContainer::getLinkedSlot(v3, v4) != v2 )
    {
      if ( ++v4 >= j_FillingContainer::getLinkedSlotsCount(v3) )
        goto LABEL_5;
    }
  return v4;
}


Inventory *__fastcall Inventory::Inventory(double a1)
{
  Inventory *v1; // r4@1

  v1 = (Inventory *)LODWORD(a1);
  j_FillingContainer::FillingContainer(a1, 9u, 9u);
  *(_DWORD *)v1 = &off_271F92C;
  j_Inventory::setupDefault(v1);
  return v1;
}
