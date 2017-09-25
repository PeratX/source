

ContainerModel *__fastcall HudContainerModel::~HudContainerModel(HudContainerModel *this)
{
  ContainerModel *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26ED5A8;
  v2 = Player::getSupplies(*((Player **)this + 17));
  PlayerInventoryProxy::removeListener(v2);
  return j_j_j__ZN14ContainerModelD2Ev(v1);
}


int __fastcall HudContainerModel::_updateComplexItems(HudContainerModel *this)
{
  HudContainerModel *v1; // r4@1
  unsigned __int64 *v2; // r8@1
  int v3; // r9@1
  int v4; // r6@1
  int v5; // r5@2
  void *v6; // r0@3
  void *v7; // r0@5
  int v8; // r0@7
  int result; // r0@10
  int v10; // r6@10
  int v11; // r7@11
  int v12; // r0@12
  bool v13; // zf@12
  __int64 v14; // r0@15
  __int64 v15; // r0@21
  int v16; // [sp+0h] [bp-68h]@12
  int v17; // [sp+8h] [bp-60h]@28
  char v18; // [sp+Eh] [bp-5Ah]@15
  char v19; // [sp+Fh] [bp-59h]@12
  void *v20; // [sp+24h] [bp-44h]@26
  void *ptr; // [sp+34h] [bp-34h]@24

  v1 = this;
  v2 = (unsigned __int64 *)((char *)this + 28);
  v3 = *((_DWORD *)this + 7);
  v4 = *((_DWORD *)this + 8);
  if ( v4 != v3 )
  {
    v5 = *((_DWORD *)this + 7);
    do
    {
      v6 = *(void **)(v5 + 52);
      if ( v6 )
        operator delete(v6);
      v7 = *(void **)(v5 + 36);
      if ( v7 )
        operator delete(v7);
      v8 = *(_DWORD *)(v5 + 8);
      if ( v8 )
        (*(void (**)(void))(*(_DWORD *)v8 + 4))();
      *(_DWORD *)(v5 + 8) = 0;
      v5 += 72;
    }
    while ( v4 != v5 );
  }
  *((_DWORD *)v1 + 8) = v3;
  result = (*(int (__fastcall **)(HudContainerModel *))(*(_DWORD *)v1 + 20))(v1);
  v10 = result;
  if ( result >= 1 )
    v11 = 0;
      v12 = (*(int (__fastcall **)(HudContainerModel *, int))(*(_DWORD *)v1 + 32))(v1, v11);
      ItemInstance::ItemInstance((ItemInstance *)&v16, v12);
      v13 = v19 == 0;
      if ( v19 )
        v13 = v16 == 0;
      if ( !v13 )
      {
        v14 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v16);
        if ( !v18 )
          HIDWORD(v14) = 1;
        if ( !v14
          && !ItemInstance::isNull((ItemInstance *)&v16)
          && v16
          && (*(int (**)(void))(*(_DWORD *)v16 + 140))() == 1 )
        {
          v15 = *((_QWORD *)v1 + 4);
          if ( (_DWORD)v15 == HIDWORD(v15) )
          {
            std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
              v2,
              (int)&v16);
          }
          else
            ItemInstance::ItemInstance((ItemInstance *)v15, (int)&v16);
            *((_DWORD *)v1 + 8) += 72;
        }
      }
      if ( ptr )
        operator delete(ptr);
      if ( v20 )
        operator delete(v20);
      result = v17;
      if ( v17 )
        result = (*(int (**)(void))(*(_DWORD *)v17 + 4))();
      ++v11;
    while ( v11 < v10 );
  return result;
}


int __fastcall HudContainerModel::HudContainerModel(int a1, unsigned int a2, Player *a3)
{
  Player *v3; // r5@1
  int v4; // r4@1
  int v5; // r0@1

  v3 = a3;
  v4 = a1;
  ContainerModel::ContainerModel(a1, a2, 0x36u, 0);
  *(_DWORD *)v4 = &off_26ED5A8;
  *(_DWORD *)(v4 + 68) = v3;
  v5 = Player::getSupplies(v3);
  PlayerInventoryProxy::addListener(v5);
  HudContainerModel::_refreshContainer((HudContainerModel *)v4);
  return v4;
}


void __fastcall HudContainerModel::_refreshSlot(HudContainerModel *this, int a2, int a3)
{
  HudContainerModel *v3; // r5@1
  int v4; // r6@1
  int v5; // r4@1
  int v6; // r0@1
  void *v7; // r2@2
  void *ptr; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = Player::getSupplies(*((Player **)this + 17));
  PlayerInventoryProxy::getSlots((PlayerInventoryProxy *)&ptr, v6);
  if ( v4 == -1 )
    v7 = &ItemInstance::EMPTY_ITEM;
  else
    v7 = (void *)*((_DWORD *)ptr + v4);
  (*(void (__fastcall **)(HudContainerModel *, int, void *))(*(_DWORD *)v3 + 40))(v3, v5, v7);
  if ( ptr )
    operator delete(ptr);
}


void __fastcall HudContainerModel::_refreshContainer(HudContainerModel *this)
{
  HudContainerModel::_refreshContainer(this);
}


void __fastcall HudContainerModel::_refreshContainer(HudContainerModel *this)
{
  HudContainerModel *v1; // r4@1
  PlayerInventoryProxy *v2; // r0@1
  int v3; // r6@1
  __int64 v4; // kr00_8@1
  int v5; // r5@2
  int v6; // r7@3
  int v7; // r0@3
  void *v8; // r2@3
  void *ptr; // [sp+4h] [bp-2Ch]@3

  v1 = this;
  v2 = (PlayerInventoryProxy *)Player::getSupplies(*((Player **)this + 17));
  v4 = *(_QWORD *)PlayerInventoryProxy::getLinkedSlots(v2);
  v3 = HIDWORD(v4);
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    v5 = 0;
    do
    {
      v6 = *(_DWORD *)(v4 + 4 * v5);
      v7 = Player::getSupplies(*((Player **)v1 + 17));
      PlayerInventoryProxy::getSlots((PlayerInventoryProxy *)&ptr, v7);
      v8 = &ItemInstance::EMPTY_ITEM;
      if ( v6 != -1 )
        v8 = (void *)*((_DWORD *)ptr + v6);
      (*(void (__fastcall **)(HudContainerModel *, int, void *))(*(_DWORD *)v1 + 40))(v1, v5++, v8);
      if ( ptr )
        operator delete(ptr);
      v3 -= 4;
    }
    while ( (_DWORD)v4 != v3 );
  }
}


void __fastcall HudContainerModel::~HudContainerModel(HudContainerModel *this)
{
  HudContainerModel::~HudContainerModel(this);
}


void __fastcall HudContainerModel::_init(HudContainerModel *this)
{
  HudContainerModel *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  v2 = Player::getSupplies(*((Player **)this + 17));
  PlayerInventoryProxy::addListener(v2);
  j_j_j__ZN17HudContainerModel17_refreshContainerEv(v1);
}


void __fastcall HudContainerModel::~HudContainerModel(HudContainerModel *this)
{
  ContainerModel *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26ED5A8;
  v2 = Player::getSupplies(*((Player **)this + 17));
  PlayerInventoryProxy::removeListener(v2);
  ContainerModel::~ContainerModel(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall HudContainerModel::isValid(HudContainerModel *this)
{
  HudContainerModel *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( (*(int (**)(void))(**((_DWORD **)this + 17) + 316))() == 1 )
    result = Entity::isRemoved(*((Entity **)v1 + 17)) ^ 1;
  else
    result = 0;
  return result;
}
