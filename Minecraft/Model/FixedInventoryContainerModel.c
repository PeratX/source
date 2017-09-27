

int __fastcall FixedInventoryContainerModel::FixedInventoryContainerModel(int a1, unsigned int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int v7; // r7@1
  Level *v8; // r0@3
  void *v10; // [sp+Ch] [bp-24h]@1
  void (*v11)(void); // [sp+14h] [bp-1Ch]@1
  signed int (__fastcall *v12)(int, int); // [sp+18h] [bp-18h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v10 = operator new(1u);
  v11 = (void (*)(void))sub_16AD44E;
  v12 = sub_16AD428;
  FilteredInventoryContainerModel::FilteredInventoryContainerModel(v4, v7, 0, v6, v5, (int)&v10);
  if ( v11 )
    v11();
  *(_DWORD *)v4 = &off_26ED538;
  *(_DWORD *)(v4 + 104) = &off_26ED594;
  v8 = (Level *)Entity::getLevel(*(Entity **)(v4 + 68));
  *(_BYTE *)(v4 + 108) = Level::isClientSide(v8);
  return v4;
}


void __fastcall FixedInventoryContainerModel::~FixedInventoryContainerModel(FixedInventoryContainerModel *this)
{
  FixedInventoryContainerModel::~FixedInventoryContainerModel(this);
}


int __fastcall FixedInventoryContainerModel::_refreshContainer(FixedInventoryContainerModel *this)
{
  FixedInventoryContainerModel *v1; // r4@1
  int v2; // r0@1
  __int64 v3; // r0@1
  int result; // r0@1
  int v5; // r5@1
  unsigned int v6; // r6@2
  int v7; // r0@3
  const ItemInstance *v8; // r7@3
  const ItemInstance *v9; // r0@3

  v1 = this;
  v2 = (*(int (**)(void))(*(_DWORD *)this + 76))();
  HIDWORD(v3) = (*(int (**)(void))(*(_DWORD *)v2 + 44))();
  LODWORD(v3) = v1;
  ContainerModel::resize(v3);
  result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v1 + 20))(v1);
  v5 = result;
  if ( result >= 1 )
  {
    v6 = 0;
    do
    {
      v7 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v1 + 76))(v1);
      v8 = (const ItemInstance *)(*(int (**)(void))(*(_DWORD *)v7 + 16))();
      v9 = (const ItemInstance *)(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v1 + 32))(v1, v6);
      result = ContainerModel::networkUpdateItem(__PAIR__(v6++, (unsigned int)v1), v9, v8);
    }
    while ( v5 != v6 );
  }
  return result;
}


int __fastcall FixedInventoryContainerModel::releaseResources(FixedInventoryContainerModel *this)
{
  InventoryContainerModel *v1; // r4@1
  char *v2; // r5@1
  int v3; // r0@1

  v1 = this;
  v2 = (char *)this + 104;
  v3 = (*(int (**)(void))(*(_DWORD *)this + 76))();
  Container::removeSizeChangeListener(v3, (unsigned int)v2);
  return j_j_j__ZN23InventoryContainerModel16releaseResourcesEv(v1);
}


int __fastcall FixedInventoryContainerModel::_onItemChanged(FixedInventoryContainerModel *this, int a2, const ItemInstance *a3, const ItemInstance *a4)
{
  int v4; // r5@1
  FixedInventoryContainerModel *v5; // r6@1
  int result; // r0@1
  int v7; // r0@2
  int v8; // r1@2

  v4 = a2;
  v5 = this;
  ContainerModel::_onItemChanged(this, a2, a3, a4);
  result = *((_BYTE *)v5 + 108);
  if ( !*((_BYTE *)v5 + 108) )
  {
    v7 = (*(int (__fastcall **)(FixedInventoryContainerModel *))(*(_DWORD *)v5 + 76))(v5);
    v8 = *((_DWORD *)v5 + 3) + v4;
    result = (*(int (**)(void))(*(_DWORD *)v7 + 32))();
  }
  return result;
}


int __fastcall FixedInventoryContainerModel::tick(FixedInventoryContainerModel *this, int a2)
{
  FixedInventoryContainerModel *v2; // r5@1
  int v3; // r4@1
  int result; // r0@1
  int v5; // r6@2
  int v6; // r0@4
  int v7; // r0@5
  int v8; // r0@5
  bool v9; // zf@6
  __int64 v10; // r0@9
  Level *v11; // r1@12
  bool v12; // r0@12
  int v13; // [sp+8h] [bp-60h]@3
  int v14; // [sp+10h] [bp-58h]@19
  char v15; // [sp+16h] [bp-52h]@9
  char v16; // [sp+17h] [bp-51h]@6
  void *v17; // [sp+2Ch] [bp-3Ch]@17
  void *ptr; // [sp+3Ch] [bp-2Ch]@15

  v2 = this;
  v3 = a2;
  result = (*(int (**)(void))(*(_DWORD *)this + 20))();
  if ( result >= 1 )
  {
    v5 = 0;
    do
    {
      ItemInstance::ItemInstance((int)&v13);
      if ( *((_BYTE *)v2 + 108) )
      {
        v6 = (*(int (__fastcall **)(FixedInventoryContainerModel *, int))(*(_DWORD *)v2 + 32))(v2, v5);
        ItemInstance::operator=((int)&v13, v6);
      }
      else
        v7 = (*(int (__fastcall **)(FixedInventoryContainerModel *))(*(_DWORD *)v2 + 76))(v2);
        v8 = (*(int (**)(void))(*(_DWORD *)v7 + 16))();
        ItemInstance::operator=((int)&v13, v8);
      v9 = v16 == 0;
      if ( v16 )
        v9 = v13 == 0;
      if ( !v9 )
        v10 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v13);
        if ( !v15 )
          HIDWORD(v10) = 1;
        if ( !v10 )
        {
          v11 = (Level *)Entity::getLevel(*((Entity **)v2 + 17));
          v12 = 0;
          if ( v3 == v5 )
            v12 = 1;
          ItemInstance::inventoryTick((ItemInstance *)&v13, v11, *((Entity **)v2 + 17), v5, v12);
        }
      if ( ptr )
        operator delete(ptr);
      if ( v17 )
        operator delete(v17);
      if ( v14 )
        (*(void (**)(void))(*(_DWORD *)v14 + 4))();
      result = (*(int (__fastcall **)(FixedInventoryContainerModel *))(*(_DWORD *)v2 + 20))(v2);
      ++v5;
    }
    while ( v5 < result );
  }
  return result;
}


int __fastcall FixedInventoryContainerModel::containerContentChanged(int result, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r6@1
  const ItemInstance *v5; // r6@5
  int v6; // r0@5
  const ItemInstance *v7; // r3@5

  v2 = result;
  v3 = a2;
  v4 = *(_DWORD *)(result + 12);
  if ( v4 <= a2 )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 20))() + v4;
    if ( result > v3 )
    {
      result = *(_BYTE *)(v2 + 108);
      if ( !*(_BYTE *)(v2 + 108) )
      {
        v5 = (const ItemInstance *)(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v2 + 32))(v2, v3);
        v6 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 76))(v2);
        v7 = (const ItemInstance *)(*(int (**)(void))(*(_DWORD *)v6 + 16))();
        result = j_j_j__ZN14ContainerModel17networkUpdateItemEiRK12ItemInstanceS2_(__PAIR__(v3, v2), v5, v7);
      }
    }
  }
  return result;
}


int __fastcall FixedInventoryContainerModel::_getContainer(FixedInventoryContainerModel *this)
{
  Level *v1; // r0@1
  char *v2; // r0@1

  v1 = (Level *)Entity::getLevel(*((Entity **)this + 17));
  v2 = Level::getLevelData(v1);
  return LevelData::getFixedInventory((LevelData *)v2);
}


void __fastcall FixedInventoryContainerModel::~FixedInventoryContainerModel(FixedInventoryContainerModel *this)
{
  ContainerModel *v1; // r0@1

  v1 = FilteredInventoryContainerModel::~FilteredInventoryContainerModel(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall FixedInventoryContainerModel::_refreshSlot(FixedInventoryContainerModel *this, int a2)
{
  FixedInventoryContainerModel *v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  const ItemInstance *v5; // r6@1
  const ItemInstance *v6; // r2@1

  v2 = this;
  v3 = a2;
  v4 = (*(int (**)(void))(*(_DWORD *)this + 76))();
  v5 = (const ItemInstance *)(*(int (**)(void))(*(_DWORD *)v4 + 16))();
  v6 = (const ItemInstance *)(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v2 + 32))(v2, v3);
  return j_j_j__ZN14ContainerModel17networkUpdateItemEiRK12ItemInstanceS2_(__PAIR__(v3, (unsigned int)v2), v6, v5);
}


int __fastcall FixedInventoryContainerModel::postInit(FixedInventoryContainerModel *this)
{
  FilteredInventoryContainerModel *v1; // r4@1
  char *v2; // r5@1
  int v3; // r0@1
  int v4; // r0@1
  __int64 v5; // r0@1
  int result; // r0@1
  int v7; // r5@1
  unsigned int v8; // r6@2
  int v9; // r0@3
  const ItemInstance *v10; // r7@3
  const ItemInstance *v11; // r0@3

  v1 = this;
  v2 = (char *)this + 104;
  v3 = (*(int (**)(void))(*(_DWORD *)this + 76))();
  Container::addSizeChangeListener(v3, (unsigned int)v2);
  FilteredInventoryContainerModel::postInit(v1);
  v4 = (*(int (__fastcall **)(FilteredInventoryContainerModel *))(*(_DWORD *)v1 + 76))(v1);
  HIDWORD(v5) = (*(int (**)(void))(*(_DWORD *)v4 + 44))();
  LODWORD(v5) = v1;
  ContainerModel::resize(v5);
  result = (*(int (__fastcall **)(FilteredInventoryContainerModel *))(*(_DWORD *)v1 + 20))(v1);
  v7 = result;
  if ( result >= 1 )
  {
    v8 = 0;
    do
    {
      v9 = (*(int (__fastcall **)(FilteredInventoryContainerModel *))(*(_DWORD *)v1 + 76))(v1);
      v10 = (const ItemInstance *)(*(int (**)(void))(*(_DWORD *)v9 + 16))();
      v11 = (const ItemInstance *)(*(int (__fastcall **)(FilteredInventoryContainerModel *, unsigned int))(*(_DWORD *)v1 + 32))(
                                    v1,
                                    v8);
      result = ContainerModel::networkUpdateItem(__PAIR__(v8++, (unsigned int)v1), v11, v10);
    }
    while ( v7 != v8 );
  }
  return result;
}
