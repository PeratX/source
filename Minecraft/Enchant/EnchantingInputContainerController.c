

_DWORD *__fastcall EnchantingInputContainerController::EnchantingInputContainerController(_DWORD *a1, int a2)
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
  ContainerController::ContainerController((int)v2, (int)&v10, 1);
  v6 = v11;
  if ( v11 )
    v7 = (unsigned int *)(v11 + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v6 + 12))(v6);
  *v2 = &off_26ECA18;
  return v2;
}


signed int __fastcall EnchantingInputContainerController::isEnchantingInputItem(EnchantingInputContainerController *this, const ItemInstance *a2)
{
  EnchantingInputContainerController *v2; // r5@1
  int v3; // r0@1
  bool v4; // zf@1
  signed int result; // r0@5
  signed int v6; // r4@6

  v2 = this;
  v3 = *((_BYTE *)this + 15);
  v4 = v3 == 0;
  if ( v3 )
    v4 = *(_DWORD *)v2 == 0;
  if ( v4 || ItemInstance::isNull(v2) )
  {
    result = 0;
  }
  else
    v6 = 0;
    if ( *((_BYTE *)v2 + 14) )
    {
      if ( ItemInstance::getEnchantValue(v2) > 0 )
        v6 = 1;
    }
    result = v6;
  return result;
}


  if ( EnchantingInputContainerController::isEnchantingInputItem(a2, a2) )
{
  else
    result = EnchantingMaterialContainerController::isEnchantMaterialItem(v2, v3);
  return result;
}


void __fastcall EnchantingInputContainerController::~EnchantingInputContainerController(EnchantingInputContainerController *this)
{
  ContainerController *v1; // r0@1

  v1 = ContainerController::~ContainerController(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall EnchantingInputContainerController::_canSet(int a1, int a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r5@1
  signed int v6; // r4@1
  bool v7; // zf@1
  signed int v8; // r0@4
  bool v9; // zf@4

  v4 = a4;
  v5 = a3;
  v6 = ContainerController::_canSet(a1, a2, a3, a4);
  v7 = *(_BYTE *)(v5 + 15) == 0;
  if ( *(_BYTE *)(v5 + 15) )
    v7 = *(_DWORD *)v5 == 0;
  if ( !v7 )
  {
    v8 = ItemInstance::isNull((ItemInstance *)v5);
    v9 = v8 == 0;
    if ( !v8 )
      v9 = v4 == 0;
    if ( v9 && *(_BYTE *)(v5 + 14) && *(_BYTE *)(v5 + 14) != 1 )
      v6 = 3;
  }
  return v6;
}


void __fastcall EnchantingInputContainerController::~EnchantingInputContainerController(EnchantingInputContainerController *this)
{
  EnchantingInputContainerController::~EnchantingInputContainerController(this);
}


signed int __fastcall EnchantingInputContainerController::isItemFiltered(EnchantingInputContainerController *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r4@1
  bool v3; // zf@1
  signed int result; // r0@7

  v2 = a2;
  v3 = *((_BYTE *)a2 + 15) == 0;
  if ( *((_BYTE *)a2 + 15) )
    v3 = *(_DWORD *)a2 == 0;
  if ( v3 || ItemInstance::isNull(a2) || !*((_BYTE *)v2 + 14) || ItemInstance::getEnchantValue(v2) < 1 )
    result = 1;
  else
    result = ItemInstance::isEnchanted(v2);
  return result;
}


signed int __fastcall EnchantingInputContainerController::isItemAllowed(EnchantingInputContainerController *this, const ItemInstance *a2)
{
  return 1;
}


signed int __fastcall EnchantingInputContainerController::_canAdd(EnchantingInputContainerController *this, int a2, int a3)
{
  return 2;
}
