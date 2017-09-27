

void __fastcall PlayerInventoryProxy::containerContentChanged(PlayerInventoryProxy *this, int a2)
{
  PlayerInventoryProxy *v2; // r5@1
  __int64 v3; // kr00_8@1
  int v4; // r5@2
  void *v5; // r0@3
  void *v6; // r0@5
  int v7; // r0@7
  __int64 v8; // r4@12
  void *v9; // r0@13
  void *v10; // r0@15
  int v11; // r0@17
  int v12; // [sp+0h] [bp-20h]@1
  int v13; // [sp+4h] [bp-1Ch]@1
  int v14; // [sp+8h] [bp-18h]@1

  v2 = this;
  Inventory::getComplexItems((Inventory *)&v12, *((_DWORD *)this + 23));
  v3 = *((_QWORD *)v2 + 12);
  *((_DWORD *)v2 + 24) = v12;
  v12 = 0;
  *((_DWORD *)v2 + 25) = v13;
  v13 = 0;
  *((_DWORD *)v2 + 26) = v14;
  v14 = 0;
  if ( (_DWORD)v3 != HIDWORD(v3) )
  {
    v4 = v3;
    do
    {
      v5 = *(void **)(v4 + 52);
      if ( v5 )
        operator delete(v5);
      v6 = *(void **)(v4 + 36);
      if ( v6 )
        operator delete(v6);
      v7 = *(_DWORD *)(v4 + 8);
      if ( v7 )
        (*(void (**)(void))(*(_DWORD *)v7 + 4))();
      *(_DWORD *)(v4 + 8) = 0;
      v4 += 72;
    }
    while ( HIDWORD(v3) != v4 );
  }
  if ( (_DWORD)v3 )
    operator delete((void *)v3);
  v8 = *(_QWORD *)&v12;
  if ( v12 != v13 )
      v9 = *(void **)(v8 + 52);
      if ( v9 )
        operator delete(v9);
      v10 = *(void **)(v8 + 36);
      if ( v10 )
        operator delete(v10);
      v11 = *(_DWORD *)(v8 + 8);
      if ( v11 )
        (*(void (**)(void))(*(_DWORD *)v11 + 4))();
      *(_DWORD *)(v8 + 8) = 0;
      LODWORD(v8) = v8 + 72;
    while ( HIDWORD(v8) != (_DWORD)v8 );
    LODWORD(v8) = v12;
  if ( (_DWORD)v8 )
    operator delete((void *)v8);
}


unsigned int __fastcall PlayerInventoryProxy::selectSlot(int a1, int a2, Inventory *a3)
{
  char v3; // r8@1
  int v4; // r6@1
  int v5; // r7@1
  int v6; // r9@2
  unsigned int v7; // r1@3
  unsigned int *v8; // r0@3
  unsigned int v9; // r2@6
  unsigned int v10; // r3@7
  signed int v11; // r1@8
  unsigned int result; // r0@11
  int v13; // r5@11
  HudContainerManagerModel *v14; // r0@13
  unsigned int *v15; // r1@16
  unsigned int *v16; // r4@22

  v3 = (char)a3;
  v4 = a1;
  v5 = a2;
  if ( a3 == (Inventory *)123 )
  {
    v6 = *(_DWORD *)(a1 + 112);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 4);
      v8 = (unsigned int *)(v6 + 4);
      while ( v7 )
      {
        __dmb();
        v9 = __ldrex(v8);
        if ( v9 == v7 )
        {
          v10 = __strex(v7 + 1, v8);
          v7 = v9;
          if ( !v10 )
          {
            __dmb();
            v11 = 0;
            if ( !*v8 )
              v11 = 1;
            goto LABEL_13;
          }
        }
        else
          __clrex();
      }
    }
    v11 = 1;
    v6 = 0;
LABEL_13:
    v14 = *(HudContainerManagerModel **)(v4 + 108);
    if ( v11 )
      v14 = 0;
    result = HudContainerManagerModel::getFixedInventorySize(v14);
    v13 = result;
      v15 = (unsigned int *)(v6 + 4);
      if ( &pthread_create )
        do
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
      else
        result = (*v15)--;
      if ( result == 1 )
        v16 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
          __dmb();
          do
            result = __ldrex(v16);
          while ( __strex(result - 1, v16) );
          result = (*v16)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  }
  else
    result = Inventory::getSelectionSize(a3);
  if ( v5 >= 0 && v13 > v5 )
    *(_DWORD *)(v4 + 8) = v5;
    *(_BYTE *)(v4 + 88) = v3;
  return result;
}


signed int __fastcall PlayerInventoryProxy::dropSlot(int a1, int a2, int a3, int a4, char a5, int a6)
{
  int v6; // r7@1
  int v7; // r8@1
  int v8; // r5@1
  int v9; // r0@2
  int v10; // r4@2
  int v11; // r0@2
  bool v12; // zf@2
  __int64 v13; // r0@5
  signed int result; // r0@7

  v6 = a1;
  v7 = a4;
  v8 = a3;
  if ( a5 )
    goto LABEL_11;
  v9 = (*(int (**)(void))(**(_DWORD **)(a1 + 92) + 16))();
  v10 = v9;
  v11 = *(_BYTE *)(v9 + 15);
  v12 = v11 == 0;
  if ( v11 )
    v12 = *(_DWORD *)v10 == 0;
  if ( v12 || ItemInstance::isNull((ItemInstance *)v10) || !*(_BYTE *)(v10 + 14) )
  {
LABEL_11:
    result = 0;
  }
  else
    LODWORD(v13) = *(_DWORD *)(v6 + 92);
    FillingContainer::dropSlot(v13, v8, v7, a6);
    result = 1;
  return result;
}


  if ( PlayerInventoryProxy::getFixedInventorySlotCount(v6) <= v5 )
{
  return v4;
}


void __fastcall PlayerInventoryProxy::~PlayerInventoryProxy(PlayerInventoryProxy *this)
{
  PlayerInventoryProxy *v1; // r0@1

  v1 = PlayerInventoryProxy::~PlayerInventoryProxy(this);
  j_j_j__ZdlPv_6((void *)v1);
}


  if ( v7 >= v9 - PlayerInventoryProxy::getLinkedSlotsCount(v10) )
{
    result = 5;
  }
  else
  {
    v11 = Player::getSupplies(v4);
    v12 = *(_DWORD *)(v5 + 12);
    v13 = (PlayerInventoryProxy *)Player::getSupplies(v4);
    v14 = PlayerInventoryProxy::getLinkedSlotsCount(v13);
    v15 = (ItemInstance *)PlayerInventoryProxy::getItem(v11, v14 + v12, *(_BYTE *)(v5 + 4));
    v16 = ItemInstance::matches(v15, (const ItemInstance *)(v5 + 16)) == 0;
    result = 1;
    if ( v16 )
      v16 = v6 == 0;
    {
      ItemInstance::toString((ItemInstance *)&v29, (int)v15);
      ItemInstance::toString((ItemInstance *)&v28, v5 + 16);
      ItemInstance::toString((ItemInstance *)&v27, v5 + 88);
      v18 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
      {
        v21 = (unsigned int *)(v27 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
        }
        else
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      }
      v19 = (void *)(v28 - 12);
      if ( (int *)(v28 - 12) != &dword_28898C0 )
        v23 = (unsigned int *)(v28 - 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v20 = (void *)(v29 - 12);
      if ( (int *)(v29 - 12) != &dword_28898C0 )
        v25 = (unsigned int *)(v29 - 4);
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      result = 3;
    }
  return result;
}


int __fastcall PlayerInventoryProxy::containerSizeChanged(int result, int a2)
{
  int v2; // r4@1
  bool v3; // zf@1

  v2 = result;
  v3 = a2 == 0;
  if ( !a2 )
  {
    result = *(_BYTE *)(result + 88);
    v3 = result == 123;
  }
  if ( v3 )
    result = Inventory::getSelectionSize((Inventory *)result);
    if ( result >= 1 )
    {
      result = 0;
      *(_DWORD *)(v2 + 8) = 0;
      *(_BYTE *)(v2 + 88) = 0;
    }
  return result;
}


signed int __fastcall PlayerInventoryProxy::removeResource(PlayerInventoryProxy *this, int a2)
{
  int v2; // r4@1
  PlayerInventoryProxy *v3; // r5@1
  signed int result; // r0@2

  v2 = a2;
  v3 = this;
  if ( PlayerInventoryProxy::_hasFixedInventoryResource(this, a2) )
    result = 1;
  else
    result = FillingContainer::removeResource(*((FillingContainer **)v3 + 23), v2);
  return result;
}


int __fastcall PlayerInventoryProxy::selectFixedInventorySlot(int result, int a2)
{
  *(_BYTE *)(result + 88) = 123;
  *(_DWORD *)(result + 8) = a2;
  return result;
}


signed int __fastcall PlayerInventoryProxy::getAndRemoveResource(PlayerInventoryProxy *this, ItemInstance *a2, int a3, int a4)
{
  return j_j_j__ZN16FillingContainer20getAndRemoveResourceER12ItemInstancebb(
           *((FillingContainer **)this + 23),
           a2,
           a3,
           a4);
}


int __fastcall PlayerInventoryProxy::_getHudContainerManagerModel(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 108);
  v2 = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(result + 4) = v2;
  if ( v2 )
  {
    result = v2 + 8;
    if ( &pthread_create )
    {
      __dmb();
      do
        v3 = __ldrex((unsigned int *)result);
      while ( __strex(v3 + 1, (unsigned int *)result) );
    }
    else
      ++*(_DWORD *)result;
  }
  return result;
}


int __fastcall PlayerInventoryProxy::PlayerInventoryProxy(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int v4; // r0@1
  int result; // r0@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_26FD51C;
  *(_DWORD *)(a1 + 4) = &off_26FD538;
  *(_DWORD *)(a1 + 8) = 0;
  ItemInstance::ItemInstance(a1 + 16);
  *(_BYTE *)(v2 + 88) = 0;
  v4 = *v3;
  *v3 = 0;
  *(_DWORD *)(v2 + 92) = v4;
  *(_DWORD *)(v2 + 96) = 0;
  result = v2;
  *(_DWORD *)(v2 + 100) = 0;
  *(_DWORD *)(v2 + 104) = 0;
  *(_DWORD *)(v2 + 108) = 0;
  *(_DWORD *)(v2 + 112) = 0;
  return result;
}


int __fastcall PlayerInventoryProxy::init(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = a1;
  *(_DWORD *)(a1 + 108) = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  v6 = *(_DWORD *)(v2 + 112);
  if ( v6 )
    v7 = (unsigned int *)(v6 + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      (*(void (**)(void))(*(_DWORD *)v6 + 12))();
  *(_DWORD *)(v2 + 112) = v3;
  return (*(int (**)(void))(**(_DWORD **)(v2 + 92) + 8))();
}


signed int __fastcall PlayerInventoryProxy::_hasFixedInventoryResource(PlayerInventoryProxy *this, int a2)
{
  int v2; // r9@1
  int v3; // r8@1
  unsigned int v4; // r2@2
  unsigned int *v5; // r1@2
  unsigned int v6; // r3@5
  unsigned int v7; // r7@6
  signed int v8; // r2@7
  int v9; // r1@11
  void *v10; // r6@13
  int v11; // r7@13
  int v12; // r4@14
  unsigned int v13; // r5@14
  signed int v14; // r8@17
  void *v15; // r0@20
  void *v16; // r0@22
  int v17; // r0@24
  unsigned int *v18; // r1@31
  unsigned int v19; // r0@33
  unsigned int *v20; // r4@37
  unsigned int v21; // r0@39
  _BYTE *v23; // [sp+4h] [bp-2Ch]@13
  _BYTE *v24; // [sp+8h] [bp-28h]@13

  v2 = *((_DWORD *)this + 28);
  v3 = a2;
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 4);
    v5 = (unsigned int *)(v2 + 4);
    while ( v4 )
    {
      __dmb();
      v6 = __ldrex(v5);
      if ( v6 == v4 )
      {
        v7 = __strex(v4 + 1, v5);
        v4 = v6;
        if ( !v7 )
        {
          __dmb();
          v8 = 0;
          if ( !*v5 )
            v8 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v8 = 1;
  v2 = 0;
LABEL_11:
  v9 = *((_DWORD *)this + 27);
  if ( v8 )
    v9 = 0;
  (*(void (__fastcall **)(_BYTE **))(*(_DWORD *)v9 + 24))(&v23);
  v10 = v24;
  v11 = (int)v23;
  if ( v24 == v23 )
LABEL_17:
    v14 = 0;
  else
    v12 = 0;
    v13 = 0;
    while ( ItemInstance::getId((ItemInstance *)(v11 + v12)) != v3 )
      v10 = v24;
      v11 = (int)v23;
      ++v13;
      v12 += 72;
      if ( v13 >= 954437177 * ((v24 - v23) >> 3) )
        goto LABEL_17;
    v10 = v24;
    v11 = (int)v23;
    v14 = 1;
  if ( (void *)v11 != v10 )
    do
      v15 = *(void **)(v11 + 52);
      if ( v15 )
        operator delete(v15);
      v16 = *(void **)(v11 + 36);
      if ( v16 )
        operator delete(v16);
      v17 = *(_DWORD *)(v11 + 8);
      if ( v17 )
        (*(void (**)(void))(*(_DWORD *)v17 + 4))();
      *(_DWORD *)(v11 + 8) = 0;
      v11 += 72;
    while ( v10 != (void *)v11 );
    v10 = v23;
  if ( v10 )
    operator delete(v10);
    v18 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    else
      v19 = (*v18)--;
    if ( v19 == 1 )
      v20 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return v14;
}


int __fastcall PlayerInventoryProxy::removeResource(PlayerInventoryProxy *this, const ItemInstance *a2, int a3, int a4, int a5)
{
  return j_j_j__ZN16FillingContainer14removeResourceERK12ItemInstancebbi(
           *((FillingContainer **)this + 23),
           a2,
           a3,
           a4,
           a5);
}


int __fastcall PlayerInventoryProxy::getAllContainerIds(int result)
{
  __int64 v1; // r1@1

  HIDWORD(v1) = 2;
  LODWORD(v1) = &unk_262E2FC;
  *(_QWORD *)result = v1;
  return result;
}


void __fastcall PlayerInventoryProxy::containerContentChanged(PlayerInventoryProxy *this, int a2)
{
  PlayerInventoryProxy::containerContentChanged(this, a2);
}


int __fastcall PlayerInventoryProxy::removeItem(int result, int a2, int a3, char a4)
{
  if ( a4 != 123 )
    result = (*(int (**)(void))(**(_DWORD **)(result + 92) + 36))();
  return result;
}


signed int __fastcall PlayerInventoryProxy::_getCurrentSlotCount(PlayerInventoryProxy *this)
{
  int v1; // r4@2
  unsigned int v2; // r2@3
  unsigned int *v3; // r1@3
  unsigned int v4; // r3@6
  unsigned int v5; // r6@7
  unsigned int v6; // r2@8
  signed int v7; // r1@8
  signed int result; // r0@11
  HudContainerManagerModel *v9; // r0@13
  int v10; // r5@15
  unsigned int *v11; // r1@16
  unsigned int v12; // r0@18
  unsigned int *v13; // r6@22
  unsigned int v14; // r0@24

  if ( *((_BYTE *)this + 88) == 123 )
  {
    v1 = *((_DWORD *)this + 28);
    if ( v1 )
    {
      v2 = *(_DWORD *)(v1 + 4);
      v3 = (unsigned int *)(v1 + 4);
      while ( v2 )
      {
        __dmb();
        v4 = __ldrex(v3);
        if ( v4 == v2 )
        {
          v5 = __strex(v2 + 1, v3);
          v2 = v4;
          if ( !v5 )
          {
            __dmb();
            v6 = *v3;
            v7 = 0;
            if ( !v6 )
              v7 = 1;
            goto LABEL_13;
          }
        }
        else
          __clrex();
      }
    }
    v7 = 1;
    v1 = 0;
LABEL_13:
    v9 = (HudContainerManagerModel *)*((_DWORD *)this + 27);
    if ( v7 )
      v9 = 0;
    v10 = HudContainerManagerModel::getFixedInventorySize(v9);
      v11 = (unsigned int *)(v1 + 4);
      if ( &pthread_create )
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      else
        v12 = (*v11)--;
      if ( v12 == 1 )
        v13 = (unsigned int *)(v1 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
        if ( &pthread_create )
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
    result = v10;
  }
  else
    result = j_j_j__ZNK16FillingContainer19getLinkedSlotsCountEv_0(*((FillingContainer **)this + 23));
  return result;
}


int __fastcall PlayerInventoryProxy::tick(PlayerInventoryProxy *this)
{
  int v1; // r4@2
  unsigned int v2; // r2@3
  unsigned int *v3; // r1@3
  unsigned int v4; // r3@6
  unsigned int v5; // r6@7
  signed int v6; // r2@8
  int result; // r0@11
  int v8; // r1@13
  ContainerManagerModel *v9; // r0@13
  unsigned int *v10; // r1@16
  unsigned int *v11; // r5@22

  if ( *((_BYTE *)this + 88) == 123 )
  {
    v1 = *((_DWORD *)this + 28);
    if ( v1 )
    {
      v2 = *(_DWORD *)(v1 + 4);
      v3 = (unsigned int *)(v1 + 4);
      while ( v2 )
      {
        __dmb();
        v4 = __ldrex(v3);
        if ( v4 == v2 )
        {
          v5 = __strex(v2 + 1, v3);
          v2 = v4;
          if ( !v5 )
          {
            __dmb();
            v6 = 0;
            if ( !*v3 )
              v6 = 1;
            goto LABEL_13;
          }
        }
        else
          __clrex();
      }
    }
    v6 = 1;
    v1 = 0;
LABEL_13:
    v8 = *((_DWORD *)this + 2);
    v9 = (ContainerManagerModel *)*((_DWORD *)this + 27);
    if ( v6 )
      v9 = 0;
    result = ContainerManagerModel::tick(v9, v8);
      v10 = (unsigned int *)(v1 + 4);
      if ( &pthread_create )
        do
          result = __ldrex(v10);
        while ( __strex(result - 1, v10) );
      else
        result = (*v10)--;
      if ( result == 1 )
        v11 = (unsigned int *)(v1 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
        if ( &pthread_create )
          __dmb();
          do
            result = __ldrex(v11);
          while ( __strex(result - 1, v11) );
          result = (*v11)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
  }
  else
    result = j_j_j__ZN9Inventory4tickEi(*((Inventory **)this + 23), *((_DWORD *)this + 2));
  return result;
}


int __fastcall PlayerInventoryProxy::getFixedInventorySlotCount(PlayerInventoryProxy *this)
{
  int v1; // r4@1
  unsigned int v2; // r2@2
  unsigned int *v3; // r1@2
  unsigned int v4; // r3@5
  unsigned int v5; // r6@6
  unsigned int v6; // r2@7
  signed int v7; // r1@7
  HudContainerManagerModel *v8; // r0@11
  int v9; // r5@13
  unsigned int *v10; // r1@14
  unsigned int v11; // r0@16
  unsigned int *v12; // r6@20
  unsigned int v13; // r0@22

  v1 = *((_DWORD *)this + 28);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 4);
    v3 = (unsigned int *)(v1 + 4);
    while ( v2 )
    {
      __dmb();
      v4 = __ldrex(v3);
      if ( v4 == v2 )
      {
        v5 = __strex(v2 + 1, v3);
        v2 = v4;
        if ( !v5 )
        {
          __dmb();
          v6 = *v3;
          v7 = 0;
          if ( !v6 )
            v7 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v7 = 1;
  v1 = 0;
LABEL_11:
  v8 = (HudContainerManagerModel *)*((_DWORD *)this + 27);
  if ( v7 )
    v8 = 0;
  v9 = HudContainerManagerModel::getFixedInventorySize(v8);
    v10 = (unsigned int *)(v1 + 4);
    if ( &pthread_create )
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v1 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
      if ( &pthread_create )
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
  return v9;
}


int __fastcall PlayerInventoryProxy::_getHudContainer(int result, int a2)
{
  int v2; // r2@1
  unsigned int v3; // r3@2
  unsigned int *v4; // r12@2
  unsigned int v5; // lr@5
  unsigned int v6; // r2@6
  int v7; // r2@7
  int v8; // r3@8
  signed int v9; // r2@8
  int v10; // r1@14

  v2 = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(result + 4) = v2;
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    v4 = (unsigned int *)(v2 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v3 )
        {
          *(_DWORD *)(result + 4) = 0;
          v9 = 1;
          goto LABEL_14;
        }
        __dmb();
        v5 = __ldrex(v4);
        if ( v5 == v3 )
          break;
        __clrex();
        v3 = v5;
      }
      v6 = __strex(v3 + 1, v4);
      v3 = v5;
    }
    while ( v6 );
    __dmb();
    v7 = *(_DWORD *)(result + 4);
    if ( v7 )
      v8 = *(_DWORD *)(v7 + 4);
      v9 = 0;
      if ( !v8 )
        v9 = 1;
    else
      v9 = 1;
  }
  else
    v9 = 1;
LABEL_14:
  v10 = *(_DWORD *)(a2 + 108);
  if ( v9 )
    v10 = 0;
  *(_DWORD *)result = v10;
  return result;
}


void __fastcall PlayerInventoryProxy::~PlayerInventoryProxy(PlayerInventoryProxy *this)
{
  PlayerInventoryProxy::~PlayerInventoryProxy(this);
}


int __fastcall PlayerInventoryProxy::setSelectedItem(PlayerInventoryProxy *this, const ItemInstance *a2)
{
  PlayerInventoryProxy *v2; // r4@1
  const ItemInstance *v3; // r5@1
  int result; // r0@1
  signed int v5; // r6@2
  bool v6; // zf@5
  int v7; // r1@12

  v2 = this;
  v3 = a2;
  result = *((_BYTE *)this + 88);
  if ( result != 123 )
  {
    v5 = FillingContainer::getLinkedSlot(*((FillingContainer **)v2 + 23), *((_DWORD *)v2 + 2));
    if ( v5 >= FillingContainer::getLinkedSlotsCount(*((FillingContainer **)v2 + 23))
      && v5 < (*(int (**)(void))(**((_DWORD **)v2 + 23) + 44))() )
    {
      (*(void (**)(void))(**((_DWORD **)v2 + 23) + 32))();
    }
    v6 = *((_BYTE *)v3 + 15) == 0;
    if ( *((_BYTE *)v3 + 15) )
      v6 = *(_DWORD *)v3 == 0;
    if ( v6 || ItemInstance::isNull(v3) || (result = *((_BYTE *)v3 + 14)) == 0 )
      result = *((_BYTE *)v2 + 88);
      if ( !*((_BYTE *)v2 + 88) )
      {
        v7 = *((_DWORD *)v2 + 2);
        result = (*(int (**)(void))(**((_DWORD **)v2 + 23) + 128))();
      }
  }
  return result;
}


int __fastcall PlayerInventoryProxy::getItem(int a1, int a2, char a3)
{
  int v3; // r4@2
  unsigned int v4; // r3@3
  unsigned int *v5; // r2@3
  unsigned int v6; // r6@6
  unsigned int v7; // r5@7
  unsigned int v8; // r3@8
  signed int v9; // r2@8
  int result; // r0@11
  int v11; // r0@13
  int v12; // r5@15
  unsigned int *v13; // r1@16
  unsigned int v14; // r0@18
  unsigned int *v15; // r6@22
  unsigned int v16; // r0@24

  if ( a3 == 123 )
  {
    v3 = *(_DWORD *)(a1 + 112);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 4);
      v5 = (unsigned int *)(v3 + 4);
      while ( v4 )
      {
        __dmb();
        v6 = __ldrex(v5);
        if ( v6 == v4 )
        {
          v7 = __strex(v4 + 1, v5);
          v4 = v6;
          if ( !v7 )
          {
            __dmb();
            v8 = *v5;
            v9 = 0;
            if ( !v8 )
              v9 = 1;
            goto LABEL_13;
          }
        }
        else
          __clrex();
      }
    }
    v9 = 1;
    v3 = 0;
LABEL_13:
    v11 = *(_DWORD *)(a1 + 108);
    if ( v9 )
      v11 = 0;
    v12 = (*(int (**)(void))(*(_DWORD *)v11 + 32))();
      v13 = (unsigned int *)(v3 + 4);
      if ( &pthread_create )
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        v15 = (unsigned int *)(v3 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
        if ( &pthread_create )
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
    result = v12;
  }
  else
    result = (*(int (**)(void))(**(_DWORD **)(a1 + 92) + 16))();
  return result;
}


char *__fastcall PlayerInventoryProxy::getComplexItems(int a1, char a2)
{
  int v2; // r4@2
  unsigned int v3; // r2@3
  unsigned int *v4; // r1@3
  unsigned int v5; // r3@6
  unsigned int v6; // r6@7
  unsigned int v7; // r2@8
  signed int v8; // r1@8
  char *v9; // r5@11
  HudContainerManagerModel *v10; // r0@13
  unsigned int *v11; // r1@16
  unsigned int v12; // r0@18
  unsigned int *v13; // r6@22
  unsigned int v14; // r0@24

  if ( a2 == 123 )
  {
    v2 = *(_DWORD *)(a1 + 112);
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 4);
      v4 = (unsigned int *)(v2 + 4);
      while ( v3 )
      {
        __dmb();
        v5 = __ldrex(v4);
        if ( v5 == v3 )
        {
          v6 = __strex(v3 + 1, v4);
          v3 = v5;
          if ( !v6 )
          {
            __dmb();
            v7 = *v4;
            v8 = 0;
            if ( !v7 )
              v8 = 1;
            goto LABEL_13;
          }
        }
        else
          __clrex();
      }
    }
    v8 = 1;
    v2 = 0;
LABEL_13:
    v10 = *(HudContainerManagerModel **)(a1 + 108);
    if ( v8 )
      v10 = 0;
    v9 = HudContainerManagerModel::getComplexItems(v10);
      v11 = (unsigned int *)(v2 + 4);
      if ( &pthread_create )
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      else
        v12 = (*v11)--;
      if ( v12 == 1 )
        v13 = (unsigned int *)(v2 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
        if ( &pthread_create )
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
          return v9;
  }
  else
    v9 = (char *)(a1 + 96);
  return v9;
}


unsigned int __fastcall PlayerInventoryProxy::getSlotCopies(int a1, int a2, char a3)
{
  int v3; // r4@2
  unsigned int v4; // r3@3
  unsigned int *v5; // r2@3
  unsigned int v6; // r6@6
  unsigned int v7; // r5@7
  unsigned int v8; // r3@8
  signed int v9; // r2@8
  unsigned int result; // r0@11
  int v11; // r1@13
  unsigned int *v12; // r1@16
  unsigned int *v13; // r5@22

  if ( a3 == 123 )
  {
    v3 = *(_DWORD *)(a2 + 112);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 4);
      v5 = (unsigned int *)(v3 + 4);
      while ( v4 )
      {
        __dmb();
        v6 = __ldrex(v5);
        if ( v6 == v4 )
        {
          v7 = __strex(v4 + 1, v5);
          v4 = v6;
          if ( !v7 )
          {
            __dmb();
            v8 = *v5;
            v9 = 0;
            if ( !v8 )
              v9 = 1;
            goto LABEL_13;
          }
        }
        else
          __clrex();
      }
    }
    v9 = 1;
    v3 = 0;
LABEL_13:
    v11 = *(_DWORD *)(a2 + 108);
    if ( v9 )
      v11 = 0;
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 24))(a1);
      v12 = (unsigned int *)(v3 + 4);
      if ( &pthread_create )
        do
          result = __ldrex(v12);
        while ( __strex(result - 1, v12) );
      else
        result = (*v12)--;
      if ( result == 1 )
        v13 = (unsigned int *)(v3 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
        if ( &pthread_create )
          __dmb();
          do
            result = __ldrex(v13);
          while ( __strex(result - 1, v13) );
          result = (*v13)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  else
    result = (*(int (__fastcall **)(int))(**(_DWORD **)(a2 + 92) + 60))(a1);
  return result;
}


void *__fastcall PlayerInventoryProxy::getSelectedItem(PlayerInventoryProxy *this)
{
  PlayerInventoryProxy *v1; // r5@1
  int v2; // r4@2
  unsigned int v3; // r1@3
  unsigned int *v4; // r0@3
  unsigned int v5; // r2@6
  unsigned int v6; // r3@7
  signed int v7; // r2@8
  void *result; // r0@11
  int v9; // r0@13
  int v10; // r1@13
  int v11; // r0@15
  void *v12; // r5@15
  unsigned int *v13; // r1@16
  unsigned int v14; // r0@18
  unsigned int *v15; // r6@22
  unsigned int v16; // r0@24

  v1 = this;
  if ( *((_BYTE *)this + 88) == 123 )
  {
    v2 = *((_DWORD *)this + 28);
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 4);
      v4 = (unsigned int *)(v2 + 4);
      while ( v3 )
      {
        __dmb();
        v5 = __ldrex(v4);
        if ( v5 == v3 )
        {
          v6 = __strex(v3 + 1, v4);
          v3 = v5;
          if ( !v6 )
          {
            __dmb();
            v7 = 0;
            if ( !*v4 )
              v7 = 1;
            goto LABEL_13;
          }
        }
        else
          __clrex();
      }
    }
    v7 = 1;
    v2 = 0;
LABEL_13:
    v9 = *((_DWORD *)v1 + 27);
    v10 = *((_DWORD *)v1 + 2);
    if ( v7 )
      v9 = 0;
    v11 = (*(int (**)(void))(*(_DWORD *)v9 + 32))();
    v12 = (char *)v1 + 16;
    ItemInstance::operator=((int)v12, v11);
      v13 = (unsigned int *)(v2 + 4);
      if ( &pthread_create )
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        v15 = (unsigned int *)(v2 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
        if ( &pthread_create )
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
    result = v12;
  }
  else
    result = j_j_j__ZNK16FillingContainer9getLinkedEi_0(*((FillingContainer **)this + 23), *((_DWORD *)this + 2));
  return result;
}


int __fastcall PlayerInventoryProxy::clearSlot(int result, int a2, char a3)
{
  if ( !a3 )
    result = (*(int (**)(void))(**(_DWORD **)(result + 92) + 128))();
  return result;
}


int __fastcall PlayerInventoryProxy::getSelectedSlot(int result, int a2)
{
  int v2; // r2@1

  v2 = *(_DWORD *)(a2 + 8);
  *(_BYTE *)result = *(_BYTE *)(a2 + 88);
  *(_DWORD *)(result + 4) = v2;
  return result;
}


int __fastcall PlayerInventoryProxy::setItemWithoutSlotLinking(__int64 a1, const ItemInstance *a2, char a3)
{
  int v3; // r7@2
  unsigned int v4; // r6@3
  unsigned int *v5; // r3@3
  unsigned int v6; // r5@6
  unsigned int v7; // r4@7
  unsigned int v8; // r6@8
  signed int v9; // r3@8
  int result; // r0@11
  int v11; // r0@13
  unsigned int *v12; // r1@16
  unsigned int *v13; // r5@22

  if ( a3 == 123 )
  {
    v3 = *(_DWORD *)(a1 + 112);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 4);
      v5 = (unsigned int *)(v3 + 4);
      while ( v4 )
      {
        __dmb();
        v6 = __ldrex(v5);
        if ( v6 == v4 )
        {
          v7 = __strex(v4 + 1, v5);
          v4 = v6;
          if ( !v7 )
          {
            __dmb();
            v8 = *v5;
            v9 = 0;
            if ( !v8 )
              v9 = 1;
            goto LABEL_13;
          }
        }
        else
          __clrex();
      }
    }
    v9 = 1;
    v3 = 0;
LABEL_13:
    v11 = *(_DWORD *)(a1 + 108);
    if ( v9 )
      v11 = 0;
    result = (*(int (**)(void))(*(_DWORD *)v11 + 28))();
      v12 = (unsigned int *)(v3 + 4);
      if ( &pthread_create )
        do
          result = __ldrex(v12);
        while ( __strex(result - 1, v12) );
      else
        result = (*v12)--;
      if ( result == 1 )
        v13 = (unsigned int *)(v3 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
        if ( &pthread_create )
          __dmb();
          do
            result = __ldrex(v13);
          while ( __strex(result - 1, v13) );
          result = (*v13)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  else
    LODWORD(a1) = *(_DWORD *)(a1 + 92);
    result = j_j_j__ZN16FillingContainer25setItemWithoutSlotLinkingEiRK12ItemInstance(a1, a2);
  return result;
}


PlayerInventoryProxy *__fastcall PlayerInventoryProxy::~PlayerInventoryProxy(PlayerInventoryProxy *this)
{
  PlayerInventoryProxy *v1; // r4@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4
  int v5; // r5@9 OVERLAPPED
  int v6; // r6@9 OVERLAPPED
  void *v7; // r0@10
  void *v8; // r0@12
  int v9; // r0@14
  int v10; // r0@20
  void *v11; // r0@22
  void *v12; // r0@24
  int v13; // r0@26

  v1 = this;
  *(_DWORD *)this = &off_26FD51C;
  *((_DWORD *)this + 1) = &off_26FD538;
  v2 = *((_DWORD *)this + 28);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  *(_QWORD *)&v5 = *((_QWORD *)v1 + 12);
  if ( v5 != v6 )
    do
      v7 = *(void **)(v5 + 52);
      if ( v7 )
        operator delete(v7);
      v8 = *(void **)(v5 + 36);
      if ( v8 )
        operator delete(v8);
      v9 = *(_DWORD *)(v5 + 8);
      if ( v9 )
        (*(void (**)(void))(*(_DWORD *)v9 + 4))();
      *(_DWORD *)(v5 + 8) = 0;
      v5 += 72;
    while ( v6 != v5 );
    v5 = *((_DWORD *)v1 + 24);
  if ( v5 )
    operator delete((void *)v5);
  v10 = *((_DWORD *)v1 + 23);
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  *((_DWORD *)v1 + 23) = 0;
  v11 = (void *)*((_DWORD *)v1 + 17);
  if ( v11 )
    operator delete(v11);
  v12 = (void *)*((_DWORD *)v1 + 13);
  if ( v12 )
    operator delete(v12);
  v13 = *((_DWORD *)v1 + 6);
  if ( v13 )
    (*(void (**)(void))(*(_DWORD *)v13 + 4))();
  *((_DWORD *)v1 + 6) = 0;
  return v1;
}


int __fastcall PlayerInventoryProxy::getContainerSize(int a1, char a2)
{
  int v2; // r4@2
  unsigned int v3; // r2@3
  unsigned int *v4; // r1@3
  unsigned int v5; // r3@6
  unsigned int v6; // r6@7
  unsigned int v7; // r2@8
  signed int v8; // r1@8
  int result; // r0@11
  HudContainerManagerModel *v10; // r0@13
  int v11; // r5@15
  unsigned int *v12; // r1@16
  unsigned int v13; // r0@18
  unsigned int *v14; // r6@22
  unsigned int v15; // r0@24

  if ( a2 == 123 )
  {
    v2 = *(_DWORD *)(a1 + 112);
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 4);
      v4 = (unsigned int *)(v2 + 4);
      while ( v3 )
      {
        __dmb();
        v5 = __ldrex(v4);
        if ( v5 == v3 )
        {
          v6 = __strex(v3 + 1, v4);
          v3 = v5;
          if ( !v6 )
          {
            __dmb();
            v7 = *v4;
            v8 = 0;
            if ( !v7 )
              v8 = 1;
            goto LABEL_13;
          }
        }
        else
          __clrex();
      }
    }
    v8 = 1;
    v2 = 0;
LABEL_13:
    v10 = *(HudContainerManagerModel **)(a1 + 108);
    if ( v8 )
      v10 = 0;
    v11 = HudContainerManagerModel::getFixedInventorySize(v10);
      v12 = (unsigned int *)(v2 + 4);
      if ( &pthread_create )
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      else
        v13 = (*v12)--;
      if ( v13 == 1 )
        v14 = (unsigned int *)(v2 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
        if ( &pthread_create )
          __dmb();
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
    result = v11;
  }
  else
    result = (*(int (**)(void))(**(_DWORD **)(a1 + 92) + 44))();
  return result;
}


signed int __fastcall PlayerInventoryProxy::hasResource(PlayerInventoryProxy *this, int a2)
{
  int v2; // r4@1
  PlayerInventoryProxy *v3; // r5@1
  signed int result; // r0@2

  v2 = a2;
  v3 = this;
  if ( PlayerInventoryProxy::_hasFixedInventoryResource(this, a2) )
    result = 1;
  else
    result = FillingContainer::hasResource(*((FillingContainer **)v3 + 23), v2);
  return result;
}


int __fastcall PlayerInventoryProxy::setContainerSize(int a1, int a2, unsigned __int8 a3)
{
  int v3; // r6@1
  int v4; // r5@1
  Inventory *v5; // r0@1
  bool v6; // zf@2
  int v7; // r4@8
  unsigned int v8; // r1@9
  unsigned int *v9; // r0@9
  unsigned int v10; // r2@12
  unsigned int v11; // r3@13
  signed int v12; // r1@14
  int result; // r0@17
  HudContainerManagerModel *v14; // r0@19
  unsigned int *v15; // r1@22
  unsigned int *v16; // r5@28

  v3 = a1;
  v4 = a2;
  v5 = (Inventory *)a3;
  if ( a3 == 123 )
  {
    v6 = a2 == 0;
    if ( !a2 )
    {
      v5 = (Inventory *)*(_BYTE *)(v3 + 88);
      v6 = v5 == (Inventory *)123;
    }
    if ( v6 && Inventory::getSelectionSize(v5) >= 1 )
      *(_DWORD *)(v3 + 8) = 0;
      *(_BYTE *)(v3 + 88) = 0;
    v7 = *(_DWORD *)(v3 + 112);
    if ( v7 )
      v8 = *(_DWORD *)(v7 + 4);
      v9 = (unsigned int *)(v7 + 4);
      while ( v8 )
      {
        __dmb();
        v10 = __ldrex(v9);
        if ( v10 == v8 )
        {
          v11 = __strex(v8 + 1, v9);
          v8 = v10;
          if ( !v11 )
          {
            __dmb();
            v12 = 0;
            if ( !*v9 )
              v12 = 1;
            goto LABEL_19;
          }
        }
        else
          __clrex();
      }
    v12 = 1;
    v7 = 0;
LABEL_19:
    v14 = *(HudContainerManagerModel **)(v3 + 108);
    if ( v12 )
      v14 = 0;
    result = HudContainerManagerModel::setFixedInventorySize(v14, v4);
      v15 = (unsigned int *)(v7 + 4);
      if ( &pthread_create )
        do
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
      else
        result = (*v15)--;
      if ( result == 1 )
        v16 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
        if ( &pthread_create )
          __dmb();
          do
            result = __ldrex(v16);
          while ( __strex(result - 1, v16) );
          result = (*v16)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  else
    result = (*(int (**)(void))(**(_DWORD **)(v3 + 92) + 148))();
  return result;
}


int __fastcall PlayerInventoryProxy::createTransactionContext(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r5@1
  int (__fastcall *v6)(int, char *, int *); // r8@1
  void (__fastcall *v7)(char *); // r3@1
  void (__fastcall *v8)(int *, int, signed int); // r3@3
  int result; // r0@5
  int v10; // [sp+0h] [bp-38h]@4
  int (*v11)(void); // [sp+8h] [bp-30h]@3
  int v12; // [sp+Ch] [bp-2Ch]@4
  char v13; // [sp+10h] [bp-28h]@2
  int (*v14)(void); // [sp+18h] [bp-20h]@1
  int v15; // [sp+1Ch] [bp-1Ch]@2

  v3 = *(_DWORD *)(a1 + 92);
  v4 = a2;
  v5 = a3;
  v6 = *(int (__fastcall **)(int, char *, int *))(*(_DWORD *)v3 + 108);
  v14 = 0;
  v7 = *(void (__fastcall **)(char *))(a2 + 8);
  if ( v7 )
  {
    v7(&v13);
    v15 = *(_DWORD *)(v4 + 12);
    v14 = *(int (**)(void))(v4 + 8);
  }
  v11 = 0;
  v8 = *(void (__fastcall **)(int *, int, signed int))(v5 + 8);
  if ( v8 )
    v8(&v10, v5, 2);
    v12 = *(_DWORD *)(v5 + 12);
    v11 = *(int (**)(void))(v5 + 8);
  result = v6(v3, &v13, &v10);
  if ( v11 )
    result = v11();
  if ( v14 )
    result = v14();
  return result;
}


unsigned int __fastcall PlayerInventoryProxy::setItem(int a1, int a2, int a3, char a4)
{
  int v4; // r7@2
  unsigned int v5; // r6@3
  unsigned int *v6; // r3@3
  unsigned int v7; // r5@6
  unsigned int v8; // r4@7
  unsigned int v9; // r6@8
  signed int v10; // r3@8
  unsigned int result; // r0@11
  int v12; // r0@13
  unsigned int *v13; // r1@16
  unsigned int *v14; // r5@22

  if ( a4 == 123 )
  {
    v4 = *(_DWORD *)(a1 + 112);
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 4);
      v6 = (unsigned int *)(v4 + 4);
      while ( v5 )
      {
        __dmb();
        v7 = __ldrex(v6);
        if ( v7 == v5 )
        {
          v8 = __strex(v5 + 1, v6);
          v5 = v7;
          if ( !v8 )
          {
            __dmb();
            v9 = *v6;
            v10 = 0;
            if ( !v9 )
              v10 = 1;
            goto LABEL_13;
          }
        }
        else
          __clrex();
      }
    }
    v10 = 1;
    v4 = 0;
LABEL_13:
    v12 = *(_DWORD *)(a1 + 108);
    if ( v10 )
      v12 = 0;
    result = (*(int (**)(void))(*(_DWORD *)v12 + 28))();
      v13 = (unsigned int *)(v4 + 4);
      if ( &pthread_create )
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      else
        result = (*v13)--;
      if ( result == 1 )
        v14 = (unsigned int *)(v4 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
        if ( &pthread_create )
          __dmb();
          do
            result = __ldrex(v14);
          while ( __strex(result - 1, v14) );
          result = (*v14)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
  else
    result = (*(int (**)(void))(**(_DWORD **)(a1 + 92) + 32))();
  return result;
}
