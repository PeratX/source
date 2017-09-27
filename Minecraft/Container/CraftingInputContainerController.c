

void *__fastcall CraftingInputContainerController::getRecipeItem(CraftingInputContainerController *this, int a2)
{
  int v2; // r4@1
  signed int v3; // r2@2
  void *result; // r0@4

  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    v3 = 2;
    if ( *((_BYTE *)this + 20) )
      v3 = 3;
    result = (void *)(*(int (__fastcall **)(int, int, int))(*(_DWORD *)v2 + 16))(v2, a2 % v3, a2 / v3);
  }
  else
    result = &ItemInstance::EMPTY_ITEM;
  return result;
}


void __fastcall CraftingInputContainerController::~CraftingInputContainerController(CraftingInputContainerController *this)
{
  CraftingInputContainerController::~CraftingInputContainerController(this);
}


void __fastcall CraftingInputContainerController::~CraftingInputContainerController(CraftingInputContainerController *this)
{
  ContainerController *v1; // r0@1

  v1 = CraftingContainerController::~CraftingContainerController(this);
  j_j_j__ZdlPv_6((void *)v1);
}


_DWORD *__fastcall CraftingInputContainerController::CraftingInputContainerController(_DWORD *a1, int a2)
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
  CraftingContainerController::CraftingContainerController((int)v2, (int)&v12, 1);
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
  *v2 = &off_26EC94C;
  return v2;
}


int __fastcall CraftingInputContainerController::getBackgroundStyle(CraftingInputContainerController *this, int a2)
{
  CraftingInputContainerController *v2; // r5@1
  int v3; // r4@1
  int v4; // r0@2
  int v5; // r6@2
  int v6; // r0@2
  bool v7; // zf@2
  int result; // r0@7
  int v9; // r0@9
  int v10; // r6@9
  int v11; // r0@9
  bool v12; // zf@9
  ItemInstance *v13; // r0@14
  ItemInstance *v14; // r0@17
  int v15; // r1@17

  v2 = this;
  v3 = a2;
  if ( !*((_DWORD *)this + 4) )
    goto LABEL_21;
  v4 = ContainerController::getItem(this, a2);
  v5 = v4;
  v6 = *(_BYTE *)(v4 + 15);
  v7 = v6 == 0;
  if ( v6 )
    v7 = *(_DWORD *)v5 == 0;
  if ( v7 || ItemInstance::isNull((ItemInstance *)v5) || !*(_BYTE *)(v5 + 14) )
  {
    if ( !*((_BYTE *)v2 + 21) )
      goto LABEL_22;
    *((_BYTE *)v2 + 20);
    v9 = (*(int (**)(void))(**((_DWORD **)v2 + 4) + 16))();
    v10 = v9;
    v11 = *(_BYTE *)(v9 + 15);
    v12 = v11 == 0;
    if ( v11 )
      v12 = *(_DWORD *)v10 == 0;
    if ( v12 || ItemInstance::isNull((ItemInstance *)v10) || !*(_BYTE *)(v10 + 14) )
    {
LABEL_22:
      v14 = (ItemInstance *)(*(int (__fastcall **)(CraftingInputContainerController *, int))(*(_DWORD *)v2 + 48))(
                              v2,
                              v3);
      v15 = ItemInstance::operator==(v14, (ItemInstance *)&ItemInstance::EMPTY_ITEM);
      result = 3;
      if ( v15 )
        result = 0;
    }
    else
      v13 = (ItemInstance *)(*(int (__fastcall **)(CraftingInputContainerController *, int))(*(_DWORD *)v2 + 64))(
      result = ItemInstance::operator==(v13, (ItemInstance *)&ItemInstance::EMPTY_ITEM);
      if ( result )
        result = 3;
  }
  else
LABEL_21:
    result = 0;
  return result;
}
