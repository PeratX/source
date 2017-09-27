

int __fastcall OffhandContainerModel::containerContentChanged(OffhandContainerModel *this, int a2)
{
  int v2; // r4@1
  OffhandContainerModel *v3; // r5@1
  int result; // r0@1
  int (__fastcall *v5)(OffhandContainerModel *, int, char *); // r6@3
  char *v6; // r2@3

  v2 = a2;
  v3 = this;
  result = ContainerModel::containerContentChanged(this, a2);
  if ( v2 >= 0 )
  {
    result = (*(int (__fastcall **)(OffhandContainerModel *))(*(_DWORD *)v3 + 20))(v3);
    if ( result > v2 )
    {
      v5 = *(int (__fastcall **)(OffhandContainerModel *, int, char *))(*(_DWORD *)v3 + 40);
      v6 = Mob::getOffhandSlot(*((Mob **)v3 + 17));
      result = v5(v3, v2, v6);
    }
  }
  return result;
}


int __fastcall OffhandContainerModel::OffhandContainerModel(int a1, unsigned int a2, unsigned int a3, int a4)
{
  int v4; // r4@1
  int result; // r0@1

  v4 = a4;
  result = ContainerModel::ContainerModel(a1, a2, a3, 0);
  *(_DWORD *)result = &off_26ED700;
  *(_DWORD *)(result + 68) = v4;
  return result;
}


void __fastcall OffhandContainerModel::~OffhandContainerModel(OffhandContainerModel *this)
{
  OffhandContainerModel::~OffhandContainerModel(this);
}


int __fastcall OffhandContainerModel::isValid(OffhandContainerModel *this)
{
  OffhandContainerModel *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( (*(int (**)(void))(**((_DWORD **)this + 17) + 316))() == 1 )
    result = Entity::isRemoved(*((Entity **)v1 + 17)) ^ 1;
  else
    result = 0;
  return result;
}


void __fastcall OffhandContainerModel::~OffhandContainerModel(OffhandContainerModel *this)
{
  ContainerModel *v1; // r0@1

  v1 = ContainerModel::~ContainerModel(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall OffhandContainerModel::postInit(OffhandContainerModel *this)
{
  OffhandContainerModel *v1; // r4@1
  int (__fastcall *v2)(OffhandContainerModel *, _DWORD, char *); // r5@1
  char *v3; // r2@1

  v1 = this;
  v2 = *(int (__fastcall **)(OffhandContainerModel *, _DWORD, char *))(*(_DWORD *)this + 40);
  v3 = Mob::getOffhandSlot(*((Mob **)this + 17));
  return v2(v1, 0, v3);
}


int __fastcall OffhandContainerModel::_onItemChanged(OffhandContainerModel *this, int a2, const ItemInstance *a3, const ItemInstance *a4)
{
  int v4; // r4@1
  int (__fastcall *v5)(int, int); // r5@1
  int v6; // r1@1

  v4 = *((_DWORD *)this + 17);
  v5 = *(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 1100);
  v6 = (*(int (**)(void))(*(_DWORD *)this + 32))();
  return v5(v4, v6);
}


int __fastcall OffhandContainerModel::_refreshContainer(OffhandContainerModel *this)
{
  OffhandContainerModel *v1; // r4@1
  int (__fastcall *v2)(OffhandContainerModel *, _DWORD, char *); // r5@1
  char *v3; // r2@1

  v1 = this;
  v2 = *(int (__fastcall **)(OffhandContainerModel *, _DWORD, char *))(*(_DWORD *)this + 40);
  v3 = Mob::getOffhandSlot(*((Mob **)this + 17));
  return v2(v1, 0, v3);
}


int __fastcall OffhandContainerModel::_refreshSlot(int result, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int (__fastcall *v4)(int, int, char *); // r6@3
  char *v5; // r2@3

  v2 = a2;
  v3 = result;
  if ( a2 >= 0 )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 20))();
    if ( result > v2 )
    {
      v4 = *(int (__fastcall **)(int, int, char *))(*(_DWORD *)v3 + 40);
      v5 = Mob::getOffhandSlot(*(Mob **)(v3 + 68));
      result = v4(v3, v2, v5);
    }
  }
  return result;
}
