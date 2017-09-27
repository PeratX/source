

signed int __fastcall ShulkerBoxContainerController::isItemAllowed(ShulkerBoxContainerController *this, const ItemInstance *a2)
{
  ItemInstance *v2; // r4@1
  signed int result; // r0@2
  signed int v4; // r0@3
  signed int v5; // r1@3

  v2 = a2;
  if ( ItemInstance::getId(a2) == *(_BYTE *)(Block::mShulkerBox + 4) )
  {
    result = 0;
  }
  else
    v4 = ItemInstance::getId(v2);
    v5 = 0;
    if ( v4 != *(_BYTE *)(Block::mUndyedShulkerBox + 4) )
      v5 = 1;
    result = v5;
  return result;
}


void __fastcall ShulkerBoxContainerController::~ShulkerBoxContainerController(ShulkerBoxContainerController *this)
{
  ContainerController *v1; // r0@1

  v1 = ContainerController::~ContainerController(this);
  j_j_j__ZdlPv_6((void *)v1);
}


_DWORD *__fastcall ShulkerBoxContainerController::ShulkerBoxContainerController(_DWORD *a1, int a2)
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
  *v2 = &off_26ECB84;
  return v2;
}


void __fastcall ShulkerBoxContainerController::~ShulkerBoxContainerController(ShulkerBoxContainerController *this)
{
  ShulkerBoxContainerController::~ShulkerBoxContainerController(this);
}
