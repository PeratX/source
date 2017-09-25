

int __fastcall CraftingOutputContainerController::isItemAllowed(CraftingOutputContainerController *this, const ItemInstance *a2)
{
  return 0;
}


int __fastcall CraftingOutputContainerController::_canRemove(CraftingOutputContainerController *this, int a2, int a3)
{
  return 0;
}


void __fastcall CraftingOutputContainerController::~CraftingOutputContainerController(CraftingOutputContainerController *this)
{
  CraftingOutputContainerController::~CraftingOutputContainerController(this);
}


void __fastcall CraftingOutputContainerController::~CraftingOutputContainerController(CraftingOutputContainerController *this)
{
  ContainerController *v1; // r0@1

  v1 = CraftingContainerController::~CraftingContainerController(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall CraftingOutputContainerController::getBackgroundStyle(CraftingOutputContainerController *this, int a2)
{
  CraftingOutputContainerController *v2; // r4@1
  int v3; // r0@2
  int v4; // r5@2
  int v5; // r0@2
  bool v6; // zf@2
  signed int result; // r0@7
  int v8; // r0@9
  int v9; // r4@9
  int v10; // r0@9
  bool v11; // zf@9
  signed int v12; // r1@12

  v2 = this;
  if ( !*((_DWORD *)this + 4) )
    goto LABEL_19;
  v3 = ContainerController::getItem(this, a2);
  v4 = v3;
  v5 = *(_BYTE *)(v3 + 15);
  v6 = v5 == 0;
  if ( v5 )
    v6 = *(_DWORD *)v4 == 0;
  if ( v6 || ItemInstance::isNull((ItemInstance *)v4) || !*(_BYTE *)(v4 + 14) )
  {
    if ( !*((_BYTE *)v2 + 21) )
      goto LABEL_20;
    v8 = (*(int (__fastcall **)(CraftingOutputContainerController *, _DWORD))(*(_DWORD *)v2 + 64))(v2, 0);
    v9 = v8;
    v10 = *(_BYTE *)(v8 + 15);
    v11 = v10 == 0;
    if ( v10 )
      v11 = *(_DWORD *)v9 == 0;
    if ( v11 )
    {
LABEL_20:
      result = 3;
    }
    else
      v12 = ItemInstance::isNull((ItemInstance *)v9);
      if ( !v12 )
      {
        if ( *(_BYTE *)(v9 + 14) )
          result = 0;
      }
  }
  else
LABEL_19:
    result = 0;
  return result;
}


void *__fastcall CraftingOutputContainerController::getRecipeItem(CraftingOutputContainerController *this, int a2)
{
  int v2; // r0@1
  void *v3; // r1@2
  __int64 v4; // kr00_8@2
  void *result; // r0@4

  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    v4 = *(_QWORD *)(*(int (**)(void))(*(_DWORD *)v2 + 20))();
    v3 = (void *)v4;
    if ( HIDWORD(v4) == (_DWORD)v4 )
      v3 = &ItemInstance::EMPTY_ITEM;
    result = v3;
  }
  else
    result = &ItemInstance::EMPTY_ITEM;
  return result;
}


_DWORD *__fastcall CraftingOutputContainerController::CraftingOutputContainerController(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4@1
  int v3; // r0@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r5@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r0@10
  unsigned int *v9; // r6@14
  unsigned int v10; // r0@16
  int v12; // [sp+0h] [bp-18h]@1
  int v13; // [sp+4h] [bp-14h]@1

  v2 = a1;
  v12 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  v13 = v3;
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
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
  CraftingContainerController::CraftingContainerController((int)v2, (int)&v12, 0);
  v6 = v13;
  if ( v13 )
    v7 = (unsigned int *)(v13 + 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      v9 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  *v2 = &off_26EC998;
  return v2;
}
