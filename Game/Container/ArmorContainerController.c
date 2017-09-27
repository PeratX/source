

void __fastcall ArmorContainerController::~ArmorContainerController(ArmorContainerController *this)
{
  ContainerController *v1; // r0@1

  v1 = ContainerController::~ContainerController(this);
  j_j_j__ZdlPv_6((void *)v1);
}


_DWORD *__fastcall ArmorContainerController::ArmorContainerController(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r0@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10
  int v10; // [sp+0h] [bp-18h]@1
  int v11; // [sp+4h] [bp-14h]@1

  v2 = a1;
  v10 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  v11 = v3;
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
  ContainerController::ContainerController((int)v2, (int)&v10, 0);
  v6 = v11;
  if ( v11 )
    v7 = (unsigned int *)(v11 + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v6 + 12))(v6);
  *v2 = &off_26EC814;
  return v2;
}


signed int __fastcall ArmorContainerController::_canAdd(ArmorContainerController *this, int a2, int a3)
{
  return 2;
}


signed int __fastcall ArmorContainerController::_canSet(int a1, int a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r8@1
  signed int v7; // r6@1
  signed int result; // r0@2
  bool v9; // zf@3
  const ItemInstance *v10; // r1@6
  signed int v11; // r4@8

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = ContainerController::_canSet(a1, a2, a3, a4);
  if ( v7 == 3 )
  {
    result = 3;
  }
  else
    v9 = *(_BYTE *)(v5 + 15) == 0;
    if ( *(_BYTE *)(v5 + 15) )
      v9 = *(_DWORD *)v5 == 0;
    if ( v9 || ItemInstance::isNull((ItemInstance *)v5) )
    {
      result = v7;
    }
    else
      v11 = v7;
      if ( *(_BYTE *)(v5 + 14) )
      {
        v11 = 3;
        if ( (v4 || *(_BYTE *)(v5 + 14) == 1) && ArmorItem::getSlotForItem((ArmorItem *)v5, v10) == v6 )
          v11 = v7;
      }
      result = v11;
  return result;
}


void __fastcall ArmorContainerController::~ArmorContainerController(ArmorContainerController *this)
{
  ArmorContainerController::~ArmorContainerController(this);
}


signed int __fastcall ArmorContainerController::isItemAllowed(ArmorContainerController *this, const ItemInstance *a2)
{
  ItemInstance *v2; // r4@1
  signed int result; // r0@2

  v2 = a2;
  if ( ItemInstance::isWearableItem(a2) )
    result = 1;
  else
    result = ItemInstance::isNull(v2);
  return result;
}
