

int __fastcall InventoryContainerModel::isValid(InventoryContainerModel *this)
{
  InventoryContainerModel *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( (*(int (**)(void))(**((_DWORD **)this + 17) + 316))() == 1 )
    result = Entity::isRemoved(*((Entity **)v1 + 17)) ^ 1;
  else
    result = 0;
  return result;
}


int __fastcall InventoryContainerModel::_refreshSlot(InventoryContainerModel *this, int a2)
{
  InventoryContainerModel *v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  int (__fastcall *v5)(InventoryContainerModel *, int, int); // r6@1
  int v6; // r0@1
  int v7; // r2@1
  int v8; // r2@1

  v2 = this;
  v3 = a2;
  v4 = *(_DWORD *)this;
  v5 = *(int (__fastcall **)(InventoryContainerModel *, int, int))(v4 + 40);
  v6 = (*(int (__fastcall **)(InventoryContainerModel *))(v4 + 76))(v2);
  v7 = *((_DWORD *)v2 + 3);
  v8 = (*(int (**)(void))(*(_DWORD *)v6 + 16))();
  return v5(v2, v3, v8);
}


int __fastcall InventoryContainerModel::postInit(InventoryContainerModel *this)
{
  InventoryContainerModel *v1; // r4@1
  int v2; // r0@1
  int result; // r0@1
  int v4; // r5@1
  int v5; // r6@2
  int (__fastcall *v6)(InventoryContainerModel *, int, int); // r7@3
  int v7; // r0@3
  int v8; // r2@3
  int v9; // r0@3

  v1 = this;
  v2 = (*(int (**)(void))(*(_DWORD *)this + 76))();
  (*(void (**)(void))(*(_DWORD *)v2 + 8))();
  result = (*(int (__fastcall **)(InventoryContainerModel *))(*(_DWORD *)v1 + 20))(v1);
  v4 = result;
  if ( result )
  {
    v5 = 0;
    do
    {
      v6 = *(int (__fastcall **)(InventoryContainerModel *, int, int))(*(_DWORD *)v1 + 40);
      v7 = (*(int (__fastcall **)(InventoryContainerModel *))(*(_DWORD *)v1 + 76))(v1);
      v8 = *((_DWORD *)v1 + 3);
      v9 = (*(int (**)(void))(*(_DWORD *)v7 + 16))();
      result = v6(v1, v5++, v9);
    }
    while ( v4 != v5 );
  }
  return result;
}


int __fastcall InventoryContainerModel::_refreshContainer(InventoryContainerModel *this)
{
  InventoryContainerModel *v1; // r4@1
  int result; // r0@1
  int v3; // r5@1
  int v4; // r6@2
  int (__fastcall *v5)(InventoryContainerModel *, int, int); // r7@3
  int v6; // r0@3
  int v7; // r2@3
  int v8; // r0@3

  v1 = this;
  result = (*(int (**)(void))(*(_DWORD *)this + 20))();
  v3 = result;
  if ( result )
  {
    v4 = 0;
    do
    {
      v5 = *(int (__fastcall **)(InventoryContainerModel *, int, int))(*(_DWORD *)v1 + 40);
      v6 = (*(int (__fastcall **)(InventoryContainerModel *))(*(_DWORD *)v1 + 76))(v1);
      v7 = *((_DWORD *)v1 + 3);
      v8 = (*(int (**)(void))(*(_DWORD *)v6 + 16))();
      result = v5(v1, v4++, v8);
    }
    while ( v3 != v4 );
  }
  return result;
}


int __fastcall InventoryContainerModel::InventoryContainerModel(int a1, unsigned int a2, unsigned int a3, int a4, int a5)
{
  int v5; // r5@1
  int v6; // r4@1

  v5 = a4;
  v6 = a1;
  ContainerModel::ContainerModel(a1, a2, a3, a5);
  *(_DWORD *)v6 = &off_26ED5FC;
  *(_DWORD *)(v6 + 68) = v5;
  ContainerModel::_init((ContainerModel *)v6);
  return v6;
}


void __fastcall InventoryContainerModel::~InventoryContainerModel(InventoryContainerModel *this)
{
  ContainerModel *v1; // r0@1

  v1 = ContainerModel::~ContainerModel(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall InventoryContainerModel::~InventoryContainerModel(InventoryContainerModel *this)
{
  InventoryContainerModel::~InventoryContainerModel(this);
}


int __fastcall InventoryContainerModel::_getContainer(InventoryContainerModel *this)
{
  PlayerInventoryProxy *v1; // r0@1

  v1 = (PlayerInventoryProxy *)Player::getSupplies(*((Player **)this + 17));
  return PlayerInventoryProxy::_getInventoryContainer(v1);
}


int __fastcall InventoryContainerModel::containerContentChanged(int result, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r6@3
  int (__fastcall *v6)(int, int, int); // r7@3
  int v7; // r0@3
  int v8; // r2@3
  int v9; // r2@3

  v2 = result;
  v3 = a2;
  v4 = *(_DWORD *)(result + 12);
  if ( v4 <= a2 )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 20))() + v4;
    if ( result > v3 )
    {
      v5 = *(_DWORD *)(v2 + 12);
      v6 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v2 + 40);
      v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 76))(v2);
      v8 = *(_DWORD *)(v2 + 12);
      v9 = (*(int (**)(void))(*(_DWORD *)v7 + 16))();
      result = v6(v2, v3 - v5, v9);
    }
  }
  return result;
}


int __fastcall InventoryContainerModel::_onItemChanged(InventoryContainerModel *this, int a2, const ItemInstance *a3, const ItemInstance *a4)
{
  InventoryContainerModel *v4; // r6@1
  int v5; // r0@1
  int v6; // r2@1

  v4 = this;
  ContainerModel::_onItemChanged(this, a2, a3, a4);
  v5 = (*(int (__fastcall **)(InventoryContainerModel *))(*(_DWORD *)v4 + 76))(v4);
  v6 = *((_DWORD *)v4 + 3);
  return (*(int (**)(void))(*(_DWORD *)v5 + 32))();
}


int __fastcall InventoryContainerModel::releaseResources(InventoryContainerModel *this)
{
  int v1; // r0@1

  v1 = (*(int (**)(void))(*(_DWORD *)this + 76))();
  return (*(int (**)(void))(*(_DWORD *)v1 + 12))();
}
