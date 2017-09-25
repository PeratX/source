

_DWORD *__fastcall EnchantingMaterialContainerController::EnchantingMaterialContainerController(_DWORD *a1, int a2)
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
  *v2 = &off_26ECA4C;
  return v2;
}


void __fastcall EnchantingMaterialContainerController::~EnchantingMaterialContainerController(EnchantingMaterialContainerController *this)
{
  ContainerController *v1; // r0@1

  v1 = ContainerController::~ContainerController(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall EnchantingMaterialContainerController::isItemAllowed(EnchantingMaterialContainerController *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r4@1
  bool v3; // zf@1
  signed int v4; // r5@6
  signed int result; // r0@9

  v2 = a2;
  v3 = *((_BYTE *)a2 + 15) == 0;
  if ( *((_BYTE *)a2 + 15) )
    v3 = *(_DWORD *)a2 == 0;
  if ( v3 || ItemInstance::isNull(a2) || !*((_BYTE *)v2 + 14) )
  {
    result = 0;
  }
  else
    v4 = 0;
    if ( ItemInstance::getId(v2) == *(_WORD *)(Item::mDye_powder + 18)
      && (unsigned __int16)ItemInstance::getAuxValue(v2) == 4 )
    {
      v4 = 1;
    }
    result = v4;
  return result;
}


void __fastcall EnchantingMaterialContainerController::~EnchantingMaterialContainerController(EnchantingMaterialContainerController *this)
{
  EnchantingMaterialContainerController::~EnchantingMaterialContainerController(this);
}


signed int __fastcall EnchantingMaterialContainerController::isEnchantMaterialItem(EnchantingMaterialContainerController *this, const ItemInstance *a2)
{
  EnchantingMaterialContainerController *v2; // r4@1
  int v3; // r0@1
  bool v4; // zf@1
  signed int v5; // r5@6
  signed int result; // r0@9

  v2 = this;
  v3 = *((_BYTE *)this + 15);
  v4 = v3 == 0;
  if ( v3 )
    v4 = *(_DWORD *)v2 == 0;
  if ( v4 || ItemInstance::isNull(v2) || !*((_BYTE *)v2 + 14) )
  {
    result = 0;
  }
  else
    v5 = 0;
    if ( ItemInstance::getId(v2) == *(_WORD *)(Item::mDye_powder + 18)
      && (unsigned __int16)ItemInstance::getAuxValue(v2) == 4 )
    {
      v5 = 1;
    }
    result = v5;
  return result;
}
