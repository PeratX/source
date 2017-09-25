

int __fastcall ArmorContainerModel::postInit(ArmorContainerModel *this)
{
  ArmorContainerModel *v1; // r4@1
  int result; // r0@1
  int v3; // r5@1
  int v4; // r6@2
  int (__fastcall *v5)(ArmorContainerModel *, int, int); // r7@3
  int v6; // r0@3

  v1 = this;
  result = (*(int (**)(void))(*(_DWORD *)this + 20))();
  v3 = result;
  if ( result >= 1 )
  {
    v4 = 0;
    do
    {
      v5 = *(int (__fastcall **)(ArmorContainerModel *, int, int))(*(_DWORD *)v1 + 40);
      v6 = (*(int (**)(void))(**((_DWORD **)v1 + 17) + 1028))();
      result = v5(v1, v4++, v6);
    }
    while ( v3 != v4 );
  }
  return result;
}


void __fastcall ArmorContainerModel::~ArmorContainerModel(ArmorContainerModel *this)
{
  ContainerModel *v1; // r0@1

  v1 = ContainerModel::~ContainerModel(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall ArmorContainerModel::containerContentChanged(ArmorContainerModel *this, int a2)
{
  int v2; // r4@1
  ArmorContainerModel *v3; // r5@1
  int result; // r0@1
  int (__fastcall *v5)(ArmorContainerModel *, int, int); // r6@3
  int v6; // r2@3

  v2 = a2;
  v3 = this;
  result = ContainerModel::containerContentChanged(this, a2);
  if ( v2 >= 0 )
  {
    result = (*(int (__fastcall **)(ArmorContainerModel *))(*(_DWORD *)v3 + 20))(v3);
    if ( result > v2 )
    {
      v5 = *(int (__fastcall **)(ArmorContainerModel *, int, int))(*(_DWORD *)v3 + 40);
      v6 = (*(int (**)(void))(**((_DWORD **)v3 + 17) + 1028))();
      result = v5(v3, v2, v6);
    }
  }
  return result;
}


int __fastcall ArmorContainerModel::_refreshSlot(int result, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int (__fastcall *v4)(int, int, int); // r6@3
  int v5; // r2@3

  v2 = a2;
  v3 = result;
  if ( a2 >= 0 )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 20))();
    if ( result > v2 )
    {
      v4 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v3 + 40);
      v5 = (*(int (**)(void))(**(_DWORD **)(v3 + 68) + 1028))();
      result = v4(v3, v2, v5);
    }
  }
  return result;
}


int __fastcall ArmorContainerModel::ArmorContainerModel(int a1, unsigned int a2, unsigned int a3, int a4)
{
  int v4; // r4@1
  int result; // r0@1

  v4 = a4;
  result = ContainerModel::ContainerModel(a1, a2, a3, 0);
  *(_DWORD *)result = &off_26ED3E0;
  *(_DWORD *)(result + 68) = v4;
  return result;
}


int __fastcall ArmorContainerModel::_refreshContainer(ArmorContainerModel *this)
{
  ArmorContainerModel *v1; // r4@1
  int result; // r0@1
  int v3; // r5@1
  int v4; // r6@2
  int (__fastcall *v5)(ArmorContainerModel *, int, int); // r7@3
  int v6; // r0@3

  v1 = this;
  result = (*(int (**)(void))(*(_DWORD *)this + 20))();
  v3 = result;
  if ( result >= 1 )
  {
    v4 = 0;
    do
    {
      v5 = *(int (__fastcall **)(ArmorContainerModel *, int, int))(*(_DWORD *)v1 + 40);
      v6 = (*(int (**)(void))(**((_DWORD **)v1 + 17) + 1028))();
      result = v5(v1, v4++, v6);
    }
    while ( v3 != v4 );
  }
  return result;
}


void __fastcall ArmorContainerModel::~ArmorContainerModel(ArmorContainerModel *this)
{
  ArmorContainerModel::~ArmorContainerModel(this);
}


int __fastcall ArmorContainerModel::isValid(ArmorContainerModel *this)
{
  ArmorContainerModel *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( (*(int (**)(void))(**((_DWORD **)this + 17) + 316))() == 1 )
    result = Entity::isRemoved(*((Entity **)v1 + 17)) ^ 1;
  else
    result = 0;
  return result;
}
