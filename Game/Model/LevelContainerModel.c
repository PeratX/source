

int __fastcall LevelContainerModel::_refreshSlot(__int64 this)
{
  __int64 v1; // r4@1
  int result; // r0@1
  int v3; // r2@2
  int v4; // r0@2
  int v5; // r0@2
  Level *v6; // r0@2
  int v7; // [sp+0h] [bp-A0h]@2
  int v8; // [sp+8h] [bp-98h]@6
  void *v9; // [sp+24h] [bp-7Ch]@4
  void *ptr; // [sp+34h] [bp-6Ch]@2
  char v11; // [sp+48h] [bp-58h]@2
  int v12; // [sp+50h] [bp-50h]@12
  void *v13; // [sp+6Ch] [bp-34h]@10
  void *v14; // [sp+7Ch] [bp-24h]@8

  v1 = this;
  result = LevelContainerModel::getContainer((LevelContainerModel *)this);
  if ( result )
  {
    v3 = *(_DWORD *)(v1 + 12);
    v4 = (*(int (**)(void))(*(_DWORD *)result + 16))();
    ItemInstance::ItemInstance((ItemInstance *)&v11, v4);
    v5 = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v1 + 32))(v1, HIDWORD(v1));
    ItemInstance::ItemInstance((ItemInstance *)&v7, v5);
    ContainerModel::networkUpdateItem(v1, (const ItemInstance *)&v7, (const ItemInstance *)&v11);
    v6 = (Level *)Entity::getLevel(*(Entity **)(v1 + 68));
    ItemInstance::refreshedInContainer((ItemInstance *)&v11, v6);
    if ( ptr )
      operator delete(ptr);
    if ( v9 )
      operator delete(v9);
    if ( v8 )
      (*(void (**)(void))(*(_DWORD *)v8 + 4))();
    if ( v14 )
      operator delete(v14);
    if ( v13 )
      operator delete(v13);
    result = v12;
    if ( v12 )
      result = (*(int (**)(void))(*(_DWORD *)v12 + 4))();
  }
  return result;
}


int __fastcall LevelContainerModel::LevelContainerModel(int a1, unsigned int a2, unsigned int a3, Entity *a4, int a5, int a6, __int64 a7)
{
  Entity *v7; // r5@1
  int v8; // r4@1
  Level *v9; // r0@1

  v7 = a4;
  v8 = a1;
  ContainerModel::ContainerModel(a1, a2, a3, a5);
  *(_DWORD *)v8 = &off_26ED6AC;
  *(_DWORD *)(v8 + 68) = v7;
  *(_BYTE *)(v8 + 72) = 0;
  *(_DWORD *)(v8 + 84) = 0;
  *(_DWORD *)(v8 + 88) = 0;
  *(_DWORD *)(v8 + 76) = 0;
  *(_DWORD *)(v8 + 80) = 0;
  *(_QWORD *)(v8 + 96) = a7;
  v9 = (Level *)Entity::getLevel(v7);
  *(_BYTE *)(v8 + 72) = Level::isClientSide(v9);
  return v8;
}


void __fastcall LevelContainerModel::~LevelContainerModel(LevelContainerModel *this)
{
  ContainerModel *v1; // r0@1

  v1 = ContainerModel::~ContainerModel(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall LevelContainerModel::containerContentChanged(int result, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r0@4
  int v6; // r0@4
  __int64 v7; // r0@5
  int v8; // [sp+0h] [bp-A0h]@4
  int v9; // [sp+8h] [bp-98h]@11
  void *v10; // [sp+24h] [bp-7Ch]@9
  void *ptr; // [sp+34h] [bp-6Ch]@7
  char v12; // [sp+48h] [bp-58h]@4
  int v13; // [sp+50h] [bp-50h]@17
  void *v14; // [sp+6Ch] [bp-34h]@15
  void *v15; // [sp+7Ch] [bp-24h]@13

  v2 = result;
  v3 = a2;
  v4 = *(_DWORD *)(result + 12);
  if ( v4 <= a2 )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 20))() + v4;
    if ( result > v3 )
    {
      result = LevelContainerModel::getContainer((LevelContainerModel *)v2);
      if ( result )
      {
        v5 = (*(int (**)(void))(*(_DWORD *)result + 16))();
        ItemInstance::ItemInstance((ItemInstance *)&v12, v5);
        v6 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v2 + 32))(v2, v3 - *(_DWORD *)(v2 + 12));
        ItemInstance::ItemInstance((ItemInstance *)&v8, v6);
        if ( !ItemInstance::matches((ItemInstance *)&v12, (const ItemInstance *)&v8) )
        {
          HIDWORD(v7) = v3 - *(_DWORD *)(v2 + 12);
          LODWORD(v7) = v2;
          LevelContainerModel::_refreshSlot(v7);
          if ( !*(_BYTE *)(v2 + 72) )
            ContainerModel::_notifyPlayer(
              (ContainerModel *)v2,
              v3 - *(_DWORD *)(v2 + 12),
              (const ItemInstance *)&v8,
              (const ItemInstance *)&v12);
        }
        if ( ptr )
          operator delete(ptr);
        if ( v10 )
          operator delete(v10);
        if ( v9 )
          (*(void (**)(void))(*(_DWORD *)v9 + 4))();
        if ( v15 )
          operator delete(v15);
        if ( v14 )
          operator delete(v14);
        result = v13;
        if ( v13 )
          result = (*(int (**)(void))(*(_DWORD *)v13 + 4))();
      }
    }
  }
  return result;
}


int __fastcall LevelContainerModel::_getEntity(LevelContainerModel *this)
{
  LevelContainerModel *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  v2 = Entity::getLevel(*((Entity **)this + 17));
  return Level::fetchEntity(v2, 0, *((_QWORD *)v1 + 12), *((_QWORD *)v1 + 12) >> 32, 0);
}


void __fastcall LevelContainerModel::~LevelContainerModel(LevelContainerModel *this)
{
  LevelContainerModel::~LevelContainerModel(this);
}


signed int __fastcall LevelContainerModel::isValid(LevelContainerModel *this)
{
  ContainerModel *v1; // r4@1
  signed int result; // r0@2

  v1 = this;
  if ( LevelContainerModel::getContainer(this) )
    result = ContainerModel::isValid(v1);
  else
    result = 0;
  return result;
}


int __fastcall LevelContainerModel::_onItemChanged(LevelContainerModel *this, int a2, const ItemInstance *a3, const ItemInstance *a4)
{
  int v4; // r5@1
  LevelContainerModel *v5; // r6@1
  int result; // r0@1
  int v7; // r1@3

  v4 = a2;
  v5 = this;
  ContainerModel::_onItemChanged(this, a2, a3, a4);
  result = *((_BYTE *)v5 + 72);
  if ( !*((_BYTE *)v5 + 72) )
  {
    result = LevelContainerModel::getContainer(v5);
    if ( result )
    {
      v7 = *((_DWORD *)v5 + 3) + v4;
      result = (*(int (**)(void))(*(_DWORD *)result + 32))();
    }
  }
  return result;
}


int __fastcall LevelContainerModel::LevelContainerModel(int a1, unsigned int a2, unsigned int a3, Entity *a4, int a5, int a6, int a7)
{
  Entity *v7; // r5@1
  int v8; // r4@1
  __int64 v9; // r0@1
  Level *v10; // r0@1

  v7 = a4;
  v8 = a1;
  ContainerModel::ContainerModel(a1, a2, a3, a5);
  *(_DWORD *)v8 = &off_26ED6AC;
  *(_DWORD *)(v8 + 68) = v7;
  *(_BYTE *)(v8 + 72) = 0;
  *(_DWORD *)(v8 + 76) = *(_DWORD *)a7;
  *(_DWORD *)(v8 + 80) = *(_DWORD *)(a7 + 4);
  LODWORD(v9) = *(_DWORD *)(a7 + 8);
  HIDWORD(v9) = a6;
  *(_QWORD *)(v8 + 84) = v9;
  *(_DWORD *)(v8 + 96) = -1;
  *(_DWORD *)(v8 + 100) = -1;
  v10 = (Level *)Entity::getLevel(v7);
  *(_BYTE *)(v8 + 72) = Level::isClientSide(v10);
  return v8;
}


int __fastcall LevelContainerModel::postInit(LevelContainerModel *this)
{
  LevelContainerModel *v1; // r4@1
  int v2; // r0@1
  int result; // r0@3
  int v4; // r5@3
  unsigned int v5; // r6@4

  v1 = this;
  v2 = LevelContainerModel::getContainer(this);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 8))();
  result = (*(int (__fastcall **)(LevelContainerModel *))(*(_DWORD *)v1 + 20))(v1);
  v4 = result;
  if ( result >= 1 )
  {
    v5 = 0;
    do
      result = LevelContainerModel::_refreshSlot(__PAIR__(v5++, (unsigned int)v1));
    while ( v4 != v5 );
  }
  return result;
}


int __fastcall LevelContainerModel::_refreshContainer(LevelContainerModel *this)
{
  LevelContainerModel *v1; // r4@1
  int result; // r0@1
  int v3; // r5@1
  unsigned int v4; // r6@2

  v1 = this;
  result = (*(int (**)(void))(*(_DWORD *)this + 20))();
  v3 = result;
  if ( result > 0 )
  {
    v4 = 0;
    do
      result = LevelContainerModel::_refreshSlot(__PAIR__(v4++, (unsigned int)v1));
    while ( v3 != v4 );
  }
  return result;
}


int __fastcall LevelContainerModel::getContainer(LevelContainerModel *this)
{
  LevelContainerModel *v1; // r5@1
  int v2; // r1@1
  char *v3; // r4@1
  int v4; // r2@1
  Entity *v5; // r0@1
  int v6; // r0@2
  __int64 v7; // r2@2
  int v8; // r4@2
  int v9; // r1@2
  Entity *v10; // r0@2
  Entity *v11; // r5@2
  BlockSource *v12; // r0@6
  int v13; // r0@6
  int v14; // r6@6

  v1 = this;
  v3 = (char *)this + 96;
  v2 = *((_DWORD *)this + 24);
  v4 = *((_DWORD *)this + 25);
  v5 = (Entity *)*((_DWORD *)this + 17);
  if ( (v2 & v4) == -1 )
  {
    if ( Entity::isRegionValid(v5) == 1 )
    {
      v12 = (BlockSource *)Entity::getRegion(*((Entity **)v1 + 17));
      v13 = BlockSource::getBlockEntity(v12, (LevelContainerModel *)((char *)v1 + 76));
      v14 = v13;
      if ( v13 )
      {
        if ( BlockEntity::isType(v13, *((_DWORD *)v1 + 22)) == 1 )
        {
          v8 = 0;
          switch ( *((_DWORD *)v1 + 22) )
          {
            case 1:
            case 8:
            case 0xF:
            case 0x10:
            case 0x15:
              v8 = v14 + 104;
              break;
            case 2:
            case 0xD:
            case 0xE:
            case 0x19:
              v8 = v14 + 112;
            case 0x17:
              v8 = *(_DWORD *)(*((_DWORD *)v1 + 17) + 4960);
            default:
              return v8;
          }
        }
        else
      }
      else
        v8 = 0;
    }
    else
      v8 = 0;
  }
  else
    v6 = Entity::getLevel(v5);
    v7 = *(_QWORD *)v3;
    v8 = 0;
    v10 = (Entity *)Level::fetchEntity(v6, v9, v7, HIDWORD(v7), 0);
    v11 = v10;
    if ( v10 )
      if ( Entity::getContainerComponent(v10) )
        v8 = *(_DWORD *)(Entity::getContainerComponent(v11) + 4);
  return v8;
}


int __fastcall LevelContainerModel::releaseResources(LevelContainerModel *this)
{
  int result; // r0@1

  result = LevelContainerModel::getContainer(this);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall LevelContainerModel::_getBlockEntity(LevelContainerModel *this)
{
  LevelContainerModel *v1; // r4@1
  BlockSource *v2; // r0@2
  int v3; // r0@2
  int v4; // r5@2

  v1 = this;
  if ( Entity::isRegionValid(*((Entity **)this + 17)) == 1
    && (v2 = (BlockSource *)Entity::getRegion(*((Entity **)v1 + 17)),
        v3 = BlockSource::getBlockEntity(v2, (LevelContainerModel *)((char *)v1 + 76)),
        (v4 = v3) != 0) )
  {
    if ( !BlockEntity::isType(v3, *((_DWORD *)v1 + 22)) )
      v4 = 0;
  }
  else
    v4 = 0;
  return v4;
}
