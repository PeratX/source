

int __fastcall ContainerComponent::addItem(ContainerComponent *this, ItemEntity *a2)
{
  ItemEntity *v2; // r8@1
  ItemInstance *v3; // r6@1
  ContainerComponent *v4; // r10@1
  int v5; // r7@2
  BlockSource *v6; // r9@4
  int v7; // r5@4
  int v8; // r4@4

  v2 = a2;
  v3 = (ItemEntity *)((char *)a2 + 3416);
  v4 = this;
  if ( ItemInstance::isNull((ItemEntity *)((char *)a2 + 3416)) )
  {
    v5 = 0;
  }
  else if ( *((_BYTE *)v2 + 3430) )
    v6 = (BlockSource *)Entity::getRegion(v2);
    v7 = *((_BYTE *)v2 + 3430);
    v8 = (*(int (**)(void))(**((_DWORD **)v4 + 1) + 44))();
    if ( v8 )
    {
      while ( ContainerComponent::_tryMoveInItem(v4, v6, v3, v5, -1, v7) != 1 )
      {
        if ( v8 == ++v5 )
          return 0;
      }
      if ( !*((_BYTE *)v2 + 3430) )
        (*(void (__fastcall **)(ItemEntity *))(*(_DWORD *)v2 + 44))(v2);
      v5 = 1;
    }
  else
  return v5;
}


signed int __fastcall ContainerComponent::removeItemsOfType(ContainerComponent *this, const ItemInstance *a2, int a3)
{
  ContainerComponent *v3; // r10@1
  ItemInstance *v4; // r9@1
  int v5; // r8@1
  signed int result; // r0@1
  signed int v7; // r11@1
  int v8; // r5@2
  ItemInstance *v9; // r0@3
  ItemInstance *v10; // r7@3
  signed int v11; // r4@4
  ItemInstance *v12; // r6@4
  int v13; // r9@4
  signed int v14; // r8@5
  bool v15; // zf@5
  bool v16; // zf@8
  int v17; // r7@14
  ContainerComponent *v18; // [sp+0h] [bp-78h]@1
  int v19; // [sp+4h] [bp-74h]@5
  char v20; // [sp+8h] [bp-70h]@14
  int v21; // [sp+10h] [bp-68h]@20
  unsigned __int8 v22; // [sp+16h] [bp-62h]@14
  void *v23; // [sp+2Ch] [bp-4Ch]@18
  void *ptr; // [sp+3Ch] [bp-3Ch]@16

  v3 = this;
  v4 = a2;
  v5 = a3;
  v18 = this;
  result = (*(int (**)(void))(**((_DWORD **)this + 1) + 44))();
  v7 = result;
  if ( result )
  {
    v8 = 0;
    do
    {
      v9 = (ItemInstance *)(*(int (**)(void))(**((_DWORD **)v3 + 1) + 16))();
      v10 = v9;
      result = ItemInstance::isNull(v9);
      if ( !result )
      {
        v11 = ItemInstance::getId(v4);
        v12 = v4;
        v13 = ItemInstance::getAuxValue(v4);
        if ( ItemInstance::isStackedByData(v10) )
        {
          v19 = v5;
          v14 = ItemInstance::isDamageableItem(v10);
          result = ItemInstance::getId(v10);
          v15 = v14 == 0;
          if ( !v14 )
            v15 = result == v11;
          if ( v15 )
          {
            result = ItemInstance::getAuxValue(v10);
            v16 = result == v13;
          }
          else
            v16 = result == v11;
          v5 = v19;
          v3 = v18;
          v4 = v12;
          if ( !v16 )
            goto LABEL_23;
        }
        else
          if ( result != v11 )
        ItemInstance::ItemInstance((ItemInstance *)&v20, (int)v10);
        v17 = v22;
        if ( v22 >= v5 )
          v17 = v5;
        ItemInstance::remove((ItemInstance *)&v20, v17);
        (*(void (**)(void))(**((_DWORD **)v3 + 1) + 32))();
        if ( ptr )
          operator delete(ptr);
        if ( v23 )
          operator delete(v23);
        result = v21;
        v5 -= v17;
        if ( v21 )
          result = (*(int (**)(void))(*(_DWORD *)v21 + 4))();
        if ( v5 <= 0 )
          return result;
      }
LABEL_23:
      ++v8;
    }
    while ( v7 != v8 );
  }
  return result;
}


int __fastcall ContainerComponent::setItem(ContainerComponent *this, ItemInstance *a2, int a3)
{
  ContainerComponent *v3; // r6@1
  int v4; // r5@1
  int v5; // r0@2
  bool v6; // zf@2
  bool v7; // nf@2
  unsigned __int8 v8; // vf@2

  v3 = this;
  v4 = a3;
  if ( !ItemInstance::isNull(a2) )
  {
    v5 = (*(int (**)(void))(**((_DWORD **)v3 + 1) + 44))();
    v8 = 0;
    v6 = v4 == 0;
    v7 = v4 < 0;
    if ( v4 >= 0 )
    {
      v8 = __OFSUB__(v5, v4);
      v6 = v5 == v4;
      v7 = v5 - v4 < 0;
    }
    if ( !((unsigned __int8)(v7 ^ v8) | v6) )
      (*(void (**)(void))(**((_DWORD **)v3 + 1) + 32))();
  }
  return 0;
}


signed int __fastcall ContainerComponent::_tryMoveInItem(ContainerComponent *this, BlockSource *a2, ItemInstance *a3, int a4, int a5, int a6)
{
  ContainerComponent *v6; // r7@1
  int v7; // r10@1
  Container *v8; // r5@1
  ItemInstance *v9; // r6@1
  int v10; // r0@2
  bool v11; // zf@2
  int v12; // r9@8
  int v14; // r0@22
  BlockEntity *v15; // r0@23
  BlockEntity *v16; // r0@27
  BlockEntity *v17; // r0@30
  BlockEntity *v18; // r0@33
  BlockEntity *v19; // r0@36
  int v20; // r6@39
  int v21; // r9@51
  char v22; // r8@52
  unsigned __int8 v23; // r9@52
  int v24; // r0@52
  char v25; // [sp+8h] [bp-B0h]@16
  int v26; // [sp+10h] [bp-A8h]@20
  void *v27; // [sp+2Ch] [bp-8Ch]@18
  void *v28; // [sp+3Ch] [bp-7Ch]@16
  int v29; // [sp+50h] [bp-68h]@2
  int v30; // [sp+58h] [bp-60h]@13
  unsigned __int8 v31; // [sp+5Eh] [bp-5Ah]@6
  char v32; // [sp+5Fh] [bp-59h]@2
  void *v33; // [sp+74h] [bp-44h]@11
  void *ptr; // [sp+84h] [bp-34h]@9

  v6 = this;
  v7 = a4;
  v8 = (Container *)*((_DWORD *)this + 1);
  v9 = a3;
  if ( (*(int (__fastcall **)(_DWORD, BlockSource *, int, int))(*(_DWORD *)v8 + 80))(*((_DWORD *)this + 1), a2, a4, a5) != 1 )
    return 0;
  v10 = (*(int (__cdecl **)(_DWORD))(**((_DWORD **)v6 + 1) + 16))(*((_DWORD *)v6 + 1));
  ItemInstance::ItemInstance((ItemInstance *)&v29, v10);
  v11 = v32 == 0;
  if ( v32 )
    v11 = v29 == 0;
  if ( v11 || ItemInstance::isNull((ItemInstance *)&v29) || !v31 )
  {
    ItemInstance::ItemInstance((ItemInstance *)&v25, (int)v9);
    ItemInstance::set((ItemInstance *)&v25, a6);
    (*(void (__fastcall **)(Container *, int, char *))(*(_DWORD *)v8 + 32))(v8, v7, &v25);
    ItemInstance::remove(v9, a6);
    if ( v28 )
      operator delete(v28);
    if ( v27 )
      operator delete(v27);
    if ( v26 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v26 + 4))(v26);
  }
  else
    if ( ItemInstance::isStackable((ItemInstance *)&v29, v9) != 1
      || (v12 = v31, v12 == ItemInstance::getMaxStackSize((ItemInstance *)&v29)) )
    {
      if ( ptr )
        operator delete(ptr);
      if ( v33 )
        operator delete(v33);
      if ( v30 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v30 + 4))(v30);
      return 0;
    }
    v21 = v31;
    if ( v21 + a6 <= ItemInstance::getMaxStackSize((ItemInstance *)&v29) )
      ItemInstance::set((ItemInstance *)&v29, (unsigned __int8)(v31 + a6));
      ItemInstance::remove(v9, a6);
    else
      v22 = ItemInstance::getMaxStackSize((ItemInstance *)&v29);
      v23 = v31;
      v24 = ItemInstance::getMaxStackSize((ItemInstance *)&v29);
      ItemInstance::set((ItemInstance *)&v29, v24);
      ItemInstance::remove(v9, (unsigned __int8)(v22 - v23));
    (*(void (__cdecl **)(_DWORD))(**((_DWORD **)v6 + 1) + 32))(*((_DWORD *)v6 + 1));
  v14 = (unsigned __int8)Container::getContainerType(v8);
  switch ( v14 )
    case 0:
      v15 = v8;
      if ( v8 )
        v15 = (Container *)((char *)v8 - 112);
      BlockEntity::setChanged(v15);
      break;
    case 4:
      v17 = v8;
        v17 = (Container *)((char *)v8 - 104);
      BlockEntity::setChanged(v17);
    case 6:
      v18 = v8;
        v18 = (Container *)((char *)v8 - 112);
      BlockEntity::setChanged(v18);
    case 7:
      v19 = v8;
        v19 = (Container *)((char *)v8 - 112);
      BlockEntity::setChanged(v19);
    case 8:
      v20 = (int)v8;
        v20 = (int)v8 - 104;
      if ( !Hopper::isOnCooldown((Hopper *)(v20 + 216)) )
        Hopper::setCooldown((Hopper *)(v20 + 216), 4);
      BlockEntity::setChanged((BlockEntity *)v20);
    case 1:
    case 2:
    case 3:
    case 5:
    default:
      if ( v14 == 17 )
      {
        v16 = v8;
        if ( v8 )
          v16 = (Container *)((char *)v8 - 112);
        BlockEntity::setChanged(v16);
      }
  (*(void (__fastcall **)(Container *, int))(*(_DWORD *)v8 + 84))(v8, v7);
  if ( ptr )
    operator delete(ptr);
  if ( v33 )
    operator delete(v33);
  if ( v30 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v30 + 4))(v30);
  return 1;
}


void __fastcall ContainerComponent::~ContainerComponent(ContainerComponent *this)
{
  ContainerComponent::~ContainerComponent(this);
}


int __fastcall ContainerComponent::hasRoomForItem(ContainerComponent *this, ItemEntity *a2)
{
  int v2; // r0@1
  int result; // r0@2

  v2 = *((_DWORD *)this + 1);
  if ( v2 )
    result = (*(int (**)(void))(*(_DWORD *)v2 + 20))();
  else
    result = 0;
  return result;
}


signed int __fastcall ContainerComponent::containerContentChanged(ContainerComponent *this, int a2)
{
  ContainerComponent *v2; // r5@1
  signed int result; // r0@1

  v2 = this;
  result = Entity::hasType(*((_DWORD *)this + 2), 256);
  if ( result == 1 )
    result = (*(int (**)(void))(**((_DWORD **)v2 + 2) + 1032))();
  return result;
}


void __fastcall ContainerComponent::~ContainerComponent(ContainerComponent *this)
{
  ContainerComponent *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r0@2
  unsigned int *v5; // r12@5
  signed int v6; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26F0E64;
  v2 = *((_DWORD *)this + 4);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 1);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  operator delete((void *)v1);
}


void __fastcall ContainerComponent::readAdditionalSaveData(ContainerComponent *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  ContainerComponent *v3; // r7@1
  signed int v4; // r6@1
  void *v5; // r0@1
  void *v6; // r0@3
  signed int v7; // r6@5
  void *v8; // r0@5
  int *v9; // r0@7
  void *v10; // r0@7
  void *v11; // r0@8
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  unsigned int *v16; // r2@22
  signed int v17; // r1@24
  unsigned int *v18; // r2@30
  signed int v19; // r1@32
  unsigned int *v20; // r2@34
  signed int v21; // r1@36
  int v22; // [sp+4h] [bp-3Ch]@8
  int v23; // [sp+Ch] [bp-34h]@7
  int v24; // [sp+14h] [bp-2Ch]@5
  int v25; // [sp+1Ch] [bp-24h]@3
  int v26; // [sp+24h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v26, "ChestItems");
  v4 = CompoundTag::contains((int)v2, (const void **)&v26);
  v5 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( v4 == 1 )
    sub_21E94B4((void **)&v25, "ChestItems");
    CompoundTag::getList((int)v2, (const void **)&v25);
    v6 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v25 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    (*(void (**)(void))(**((_DWORD **)v3 + 1) + 136))();
  sub_21E94B4((void **)&v24, "LootTable");
  v7 = CompoundTag::contains((int)v2, (const void **)&v24);
  v8 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v24 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  if ( v7 == 1 )
    sub_21E94B4((void **)&v23, "LootTable");
    v9 = (int *)CompoundTag::getString((int)v2, (const void **)&v23);
    EntityInteraction::setInteractText((int *)v3 + 4, v9);
    v10 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v23 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    sub_21E94B4((void **)&v22, "LootTableSeed");
    *((_DWORD *)v3 + 5) = CompoundTag::getInt((int)v2, (const void **)&v22);
    v11 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v22 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
}


ContainerComponent *__fastcall ContainerComponent::~ContainerComponent(ContainerComponent *this)
{
  ContainerComponent *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r0@2
  unsigned int *v6; // r12@5
  signed int v7; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26F0E64;
  v2 = *((_DWORD *)this + 4);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 1);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 1) = 0;
  return v1;
}


int __fastcall ContainerComponent::initFromDefinition(ContainerComponent *this)
{
  ContainerComponent *v1; // r4@1
  int v2; // r6@1
  int v3; // r5@1
  int v4; // r7@1
  int v5; // r0@1
  unsigned int v6; // r1@1
  unsigned int v7; // r1@3
  unsigned int v8; // r0@3
  int v9; // r6@8
  int v10; // r7@8
  int v11; // r0@8
  unsigned int v12; // r1@8
  unsigned int v13; // r1@10
  unsigned int v14; // r0@10
  int v15; // r6@15
  int v16; // r7@15
  int v17; // r0@15
  unsigned int v18; // r1@15
  unsigned int v19; // r1@17
  unsigned int v20; // r0@17

  v1 = this;
  v2 = *((_DWORD *)this + 2);
  v3 = *(_DWORD *)(*(_DWORD *)(v2 + 48) + 304);
  v4 = *(_BYTE *)(v3 + 20);
  v5 = SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 45);
  v6 = *(_DWORD *)(v5 + 4);
  if ( !(_BYTE)v6 && *(_BYTE *)(v5 + 9) != v4 )
  {
    *(_BYTE *)(v5 + 9) = v4;
    *(_BYTE *)(v5 + 8) = 1;
    v7 = v6 >> 16;
    v8 = *(_WORD *)(v2 + 188);
    if ( v8 >= v7 )
      LOWORD(v8) = v7;
    *(_WORD *)(v2 + 188) = v8;
    if ( *(_WORD *)(v2 + 190) > v7 )
      LOWORD(v7) = *(_WORD *)(v2 + 190);
    *(_WORD *)(v2 + 190) = v7;
  }
  v9 = *((_DWORD *)v1 + 2);
  v10 = *(_DWORD *)(v3 + 4);
  v11 = SynchedEntityData::_get((SynchedEntityData *)(v9 + 176), 46);
  v12 = *(_DWORD *)(v11 + 4);
  if ( (unsigned __int8)v12 == 2 && *(_DWORD *)(v11 + 12) != v10 )
    *(_DWORD *)(v11 + 12) = v10;
    *(_BYTE *)(v11 + 8) = 1;
    v13 = v12 >> 16;
    v14 = *(_WORD *)(v9 + 188);
    if ( v14 >= v13 )
      LOWORD(v14) = v13;
    *(_WORD *)(v9 + 188) = v14;
    if ( *(_WORD *)(v9 + 190) > v13 )
      LOWORD(v13) = *(_WORD *)(v9 + 190);
    *(_WORD *)(v9 + 190) = v13;
  v15 = *((_DWORD *)v1 + 2);
  v16 = *(_DWORD *)(v3 + 16);
  v17 = SynchedEntityData::_get((SynchedEntityData *)(v15 + 176), 47);
  v18 = *(_DWORD *)(v17 + 4);
  if ( (unsigned __int8)v18 == 2 && *(_DWORD *)(v17 + 12) != v16 )
    *(_DWORD *)(v17 + 12) = v16;
    *(_BYTE *)(v17 + 8) = 1;
    v19 = v18 >> 16;
    v20 = *(_WORD *)(v15 + 188);
    if ( v20 >= v19 )
      LOWORD(v20) = v19;
    *(_WORD *)(v15 + 188) = v20;
    if ( *(_WORD *)(v15 + 190) > v19 )
      LOWORD(v19) = *(_WORD *)(v15 + 190);
    *(_WORD *)(v15 + 190) = v19;
  *((_BYTE *)v1 + 13) = *(_BYTE *)(v3 + 13);
  *((_BYTE *)v1 + 14) = *(_BYTE *)(v3 + 14);
  return ContainerComponent::rebuildContainer(
           (int)v1,
           *(_BYTE *)(v3 + 20),
           *(_QWORD *)(v3 + 4),
           *(_QWORD *)(v3 + 4) >> 32,
           *(_BYTE *)(v3 + 12));
}


int __fastcall ContainerComponent::addAdditionalSaveData(ContainerComponent *this, CompoundTag *a2)
{
  ContainerComponent *v2; // r5@1
  CompoundTag *v3; // r4@1
  int v4; // r0@1
  void *v5; // r0@3
  void *v6; // r0@5
  void *v7; // r0@6
  int result; // r0@7
  unsigned int *v9; // r2@10
  signed int v10; // r1@12
  unsigned int *v11; // r2@14
  signed int v12; // r1@16
  unsigned int *v13; // r2@18
  signed int v14; // r1@20
  int v15; // [sp+8h] [bp-30h]@6
  int v16; // [sp+10h] [bp-28h]@5
  int v17; // [sp+14h] [bp-24h]@1
  int v18; // [sp+1Ch] [bp-1Ch]@1
  int v19; // [sp+20h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  FillingContainer::save((FillingContainer *)&v19, *((_DWORD *)this + 1));
  sub_21E94B4((void **)&v18, "ChestItems");
  v4 = v19;
  v19 = 0;
  v17 = v4;
  CompoundTag::put((int)v3, (const void **)&v18, &v17);
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  v17 = 0;
  v5 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( sub_21E7D6C((const void **)v2 + 4, (const char *)&unk_257BC67) )
    sub_21E94B4((void **)&v16, "LootTable");
    CompoundTag::putString((int)v3, (const void **)&v16, (int *)v2 + 4);
    v6 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v16 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    sub_21E94B4((void **)&v15, "LootTableSeed");
    CompoundTag::putInt64(
      (int)v3,
      (const void **)&v15,
      *((_DWORD *)v2 + 5),
      (unsigned __int64)*((_DWORD *)v2 + 5) >> 32);
    v7 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v15 - 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
  result = v19;
  if ( v19 )
    result = (*(int (**)(void))(*(_DWORD *)v19 + 4))();
  return result;
}


int __fastcall ContainerComponent::rebuildContainer(int a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  int v5; // r10@1
  int v6; // r7@1
  unsigned int v7; // r8@1
  unsigned int v8; // r11@1
  int v9; // r9@2
  int v10; // r0@3
  double v11; // r0@4
  int v12; // r5@4
  int v13; // r0@4
  int v14; // r6@9
  double v15; // r0@9
  int v16; // r5@9
  int v17; // r0@9
  int v18; // r7@11
  bool v19; // nf@11
  unsigned __int8 v20; // vf@11
  int v21; // r4@14
  int v22; // r0@15
  int v23; // r5@15
  int v24; // r0@15
  bool v25; // zf@15
  bool v26; // nf@21
  unsigned __int8 v27; // vf@21
  int result; // r0@26

  v5 = a1;
  v6 = a2;
  v7 = a4;
  v8 = a3;
  if ( Entity::hasCategory(*(_DWORD *)(a1 + 8), 1) == 1 )
    v9 = *(_DWORD *)(v5 + 8);
  v10 = *(_DWORD *)(v5 + 4);
  if ( !v10 )
  {
    LODWORD(v11) = operator new(0x8Cu);
    v12 = LODWORD(v11);
    FillingContainer::FillingContainer(v11, v8, v7);
    v13 = *(_DWORD *)(v5 + 4);
    *(_DWORD *)(v5 + 4) = v12;
    if ( v13 )
    {
      (*(void (__cdecl **)(int))(*(_DWORD *)v13 + 4))(v13);
      v12 = *(_DWORD *)(v5 + 4);
    }
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v12 + 8))(v12, v5);
    v10 = *(_DWORD *)(v5 + 4);
  }
  if ( (*(int (__cdecl **)(int))(*(_DWORD *)v10 + 44))(v10) != v8
    || Container::getContainerType(*(Container **)(v5 + 4)) != v6 )
    v14 = *(_DWORD *)(v5 + 4);
    *(_DWORD *)(v5 + 4) = 0;
    LODWORD(v15) = operator new(0x8Cu);
    v16 = LODWORD(v15);
    FillingContainer::FillingContainer(v15, v8, v7);
    v17 = *(_DWORD *)(v5 + 4);
    *(_DWORD *)(v5 + 4) = v16;
    if ( v17 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v17 + 4))(v17);
    v18 = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 44))(v14);
    v20 = __OFSUB__(v18, 1);
    v19 = v18 - 1 < 0;
    if ( v18 >= 1 )
      v20 = __OFSUB__(v8, 1);
      v19 = ((v8 - 1) & 0x80000000) != 0;
    if ( !(v19 ^ v20) )
      v21 = 0;
      do
      {
        v22 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v14 + 16))(v14, v21);
        v23 = v22;
        v24 = *(_BYTE *)(v22 + 15);
        v25 = v24 == 0;
        if ( v24 )
          v25 = *(_DWORD *)v23 == 0;
        if ( !v25 && !ItemInstance::isNull((ItemInstance *)v23) && *(_BYTE *)(v23 + 14) )
        {
          (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(v5 + 4) + 32))(*(_DWORD *)(v5 + 4));
          (*(void (__fastcall **)(int, int, void *))(*(_DWORD *)v14 + 32))(v14, v21, &ItemInstance::EMPTY_ITEM);
        }
        v27 = __OFSUB__(++v21, v18);
        v26 = v21 - v18 < 0;
        if ( v21 < v18 )
          v27 = __OFSUB__(v21, v8);
          v26 = ((v21 - v8) & 0x80000000) != 0;
      }
      while ( v26 ^ v27 );
    (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(v5 + 4) + 8))(*(_DWORD *)(v5 + 4));
    if ( v14 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 4))(v14);
  result = a5;
  *(_BYTE *)(v5 + 12) = a5;
  return result;
}


int __fastcall ContainerComponent::addItem(ContainerComponent *this, BlockSource *a2, ItemInstance *a3, int a4, int a5)
{
  ContainerComponent *v5; // r7@1
  BlockSource *v6; // r6@1
  int v7; // r8@1
  ItemInstance *v8; // r9@1
  int v9; // r5@1
  int v10; // r4@1

  v5 = this;
  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = (*(int (**)(void))(**((_DWORD **)this + 1) + 44))();
  v10 = 0;
  if ( v9 )
  {
    while ( ContainerComponent::_tryMoveInItem(v5, v6, v8, v10, v7, a5) != 1 )
    {
      if ( v9 == ++v10 )
        return 0;
    }
    v10 = 1;
  }
  return v10;
}


int __fastcall ContainerComponent::dropContents(ContainerComponent *this, BlockSource *a2, const Vec3 *a3, bool a4)
{
  ContainerComponent *v4; // r7@1
  Level *v5; // r0@1

  v4 = this;
  v5 = (Level *)BlockSource::getLevel(a2);
  ContainerComponent::_unpackLootTable(v4, v5);
  return (*(int (**)(void))(**((_DWORD **)v4 + 1) + 40))();
}


signed int __fastcall ContainerComponent::openContainer(ContainerComponent *this, Player *a2)
{
  Entity *v2; // r4@1
  ContainerComponent *v3; // r5@1
  signed int result; // r0@2
  Level *v5; // r0@3
  int v6; // r0@3
  int v7; // r1@3
  int v8; // r2@3
  Entity *v9; // r0@4
  void (__fastcall *v10)(Entity *, char *); // r5@4
  bool v11; // zf@5
  char *v12; // r0@12

  v2 = a2;
  v3 = this;
  if ( ContainerComponent::canOpenContainer(this, a2) == 1 )
  {
    v5 = (Level *)Entity::getLevel(v2);
    ContainerComponent::_unpackLootTable(v3, v5);
    v6 = Container::getContainerType(*((Container **)v3 + 1));
    LOBYTE(v7) = v6;
    v8 = v6 - 8;
    result = 1;
    switch ( v8 )
    {
      case 0:
      case 3:
        v9 = (Entity *)*((_DWORD *)v3 + 2);
        v10 = *(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v2 + 1312);
        goto LABEL_12;
      case 2:
        goto LABEL_9;
      case 4:
        v10 = *(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v2 + 1340);
      case 8:
        v10 = *(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v2 + 1336);
      case 1:
      case 5:
      case 6:
      case 7:
        return result;
      default:
        v7 = (unsigned __int8)v7;
        v11 = (unsigned __int8)v7 == 255;
        if ( (unsigned __int8)v7 != 255 )
          v11 = v7 == 0;
        if ( v11 )
        {
LABEL_9:
          v9 = (Entity *)*((_DWORD *)v3 + 2);
          v10 = *(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v2 + 1288);
LABEL_12:
          v12 = Entity::getUniqueID(v9);
          v10(v2, v12);
          result = 1;
        }
        break;
    }
  }
  else
    result = 0;
  return result;
}


void __fastcall ContainerComponent::readAdditionalSaveData(ContainerComponent *this, const CompoundTag *a2)
{
  ContainerComponent::readAdditionalSaveData(this, a2);
}


int __fastcall ContainerComponent::countItemsOfType(ContainerComponent *this, const ItemInstance *a2)
{
  ContainerComponent *v2; // r11@1
  ItemInstance *v3; // r9@1
  int v4; // r7@1
  int v5; // r8@1
  int v6; // r6@2
  int v7; // r4@3
  signed int v8; // r5@4
  int v9; // r10@4
  ItemInstance *v10; // r7@5
  int v11; // r9@5
  signed int v12; // r8@5
  signed int v13; // r0@5
  bool v14; // zf@5
  bool v15; // zf@8
  int v17; // [sp+0h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  v4 = (*(int (**)(void))(**((_DWORD **)this + 1) + 44))();
  v5 = 0;
  v17 = v4;
  if ( v4 )
  {
    v6 = 0;
    do
    {
      v7 = (*(int (**)(void))(**((_DWORD **)v2 + 1) + 16))();
      if ( !ItemInstance::isNull((ItemInstance *)v7) )
      {
        v8 = ItemInstance::getId(v3);
        v9 = ItemInstance::getAuxValue(v3);
        if ( ItemInstance::isStackedByData((ItemInstance *)v7) )
        {
          v10 = v3;
          v11 = v5;
          v12 = ItemInstance::isDamageableItem((ItemInstance *)v7);
          v13 = ItemInstance::getId((ItemInstance *)v7);
          v14 = v12 == 0;
          if ( !v12 )
            v14 = v13 == v8;
          if ( v14 )
            v15 = ItemInstance::getAuxValue((ItemInstance *)v7) == v9;
          else
            v15 = v13 == v8;
          v5 = v11;
          v3 = v10;
          v4 = v17;
          if ( !v15 )
            goto LABEL_15;
        }
        else if ( ItemInstance::getId((ItemInstance *)v7) != v8 )
          goto LABEL_15;
        v5 += *(_BYTE *)(v7 + 14);
      }
LABEL_15:
      ++v6;
    }
    while ( v4 != v6 );
  }
  return v5;
}


int *__fastcall ContainerComponent::setLootTable(int a1, int *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int *result; // r0@1

  v3 = a1;
  v4 = a3;
  result = EntityInteraction::setInteractText((int *)(a1 + 16), a2);
  *(_DWORD *)(v3 + 20) = v4;
  return result;
}


const void **__fastcall ContainerComponent::_unpackLootTable(ContainerComponent *this, Level *a2)
{
  Level *v2; // r11@1
  ContainerComponent *v3; // r9@1
  const void **result; // r0@1
  unsigned int v5; // r0@3
  signed int v6; // r2@3
  int v7; // r1@3
  int v8; // r0@4
  int *v9; // r4@4
  int v10; // r5@4
  unsigned int v11; // r5@5
  signed int v12; // r1@6
  int *v13; // r0@6
  signed int v14; // r2@6
  int v15; // r3@7
  int v16; // r7@7
  unsigned int v17; // r5@9
  signed int v18; // r1@9
  int *v19; // r0@9
  signed int v20; // r2@9
  int v21; // r3@10
  int v22; // r7@10
  unsigned int v23; // [sp+0h] [bp-9F8h]@3
  unsigned int v24; // [sp+4h] [bp-9F4h]@3
  int v25; // [sp+8h] [bp-9F0h]@6
  int v26; // [sp+9C4h] [bp-34h]@3
  char v27; // [sp+9C8h] [bp-30h]@3
  int v28; // [sp+9CCh] [bp-2Ch]@3
  int v29; // [sp+9D0h] [bp-28h]@5

  v2 = a2;
  v3 = this;
  result = (const void **)Level::isClientSide(a2);
  if ( !result )
  {
    result = (const void **)sub_21E7D6C((const void **)v3 + 4, (const char *)&unk_257BC67);
    if ( result )
    {
      v5 = sub_21E67AC((int)&Random::mRandomDevice);
      v23 = v5;
      v6 = 1;
      v26 = 625;
      v7 = 0;
      v27 = 0;
      v28 = 0;
      v24 = v5;
      do
      {
        v8 = v5 ^ (v5 >> 30);
        v9 = (int *)(&v23 + v7);
        v10 = v7++ + 1812433253 * v8;
        v5 = v6++ + 1812433253 * v8;
        v9[2] = v10 + 1;
      }
      while ( v7 != 397 );
      v26 = 624;
      v29 = 398;
      v11 = *((_DWORD *)v3 + 5);
      if ( v11 )
        Random::_checkThreadId((Random *)&v23);
        v23 = v11;
        v26 = 625;
        v27 = 0;
        v12 = 1;
        v28 = 0;
        v13 = &v25;
        v14 = -397;
        v24 = v11;
        do
        {
          v15 = v11 ^ (v11 >> 30);
          v16 = v14++ + 1812433253 * v15;
          v11 = v12++ + 1812433253 * v15;
          *v13 = v16 + 398;
          ++v13;
        }
        while ( v14 );
      else
        v17 = Level::createRandomSeed((Level *)0x18E);
        v23 = v17;
        v18 = 1;
        v19 = &v25;
        v20 = -397;
        v24 = v17;
          v21 = v17 ^ (v17 >> 30);
          v22 = v20++ + 1812433253 * v21;
          v17 = v18++ + 1812433253 * v21;
          *v19 = v22 + 398;
          ++v19;
        while ( v20 );
      Util::LootTableUtils::fillContainer(v2, *((Container **)v3 + 1), (Random *)&v23, (unsigned int *)v3 + 4);
      result = sub_21E8190((void **)v3 + 4, (char *)&unk_257BC67, 0);
    }
  }
  return result;
}


int __fastcall ContainerComponent::canOpenContainer(ContainerComponent *this, Player *a2)
{
  ContainerComponent *v2; // r5@1
  Entity *v3; // r4@1
  Level *v4; // r0@2
  Entity *v5; // r0@4
  char *v6; // r6@5
  int result; // r0@8

  v2 = this;
  v3 = a2;
  result = Player::canUseAbility((int)a2, &Abilities::OPEN_CONTAINERS) == 1
        && (v4 = (Level *)Entity::getLevel(*((Entity **)v2 + 2)), !Level::isClientSide(v4))
        && (!*((_BYTE *)v2 + 14)
         || (v5 = (Entity *)Entity::getPlayerOwner(*((Entity **)v2 + 2))) != 0
         && (v6 = Entity::getUniqueID(v5), *(_QWORD *)v6 == *(_QWORD *)Entity::getUniqueID(v3)))
        && ((unsigned __int8)Container::getContainerType(*((Container **)v2 + 1)) != 16
         || Player::canUseCommandBlocks(v3) == 1);
  return result;
}


int __fastcall ContainerComponent::ContainerComponent(int a1, int a2)
{
  int v2; // r4@1

  v2 = a1;
  *(_DWORD *)a1 = &off_26F0E64;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = a2;
  *(_WORD *)(a1 + 12) = 0;
  *(_BYTE *)(a1 + 14) = 0;
  sub_21E94B4((void **)(a1 + 16), (const char *)&unk_257BC67);
  *(_DWORD *)(v2 + 20) = 0;
  return v2;
}
