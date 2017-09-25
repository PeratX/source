

void __fastcall TradeIngredientContainerController::~TradeIngredientContainerController(TradeIngredientContainerController *this)
{
  TradeIngredientContainerController *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5

  v1 = this;
  *(_DWORD *)this = &off_26ECBB8;
  v2 = (void *)*((_DWORD *)this + 17);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 13);
  if ( v3 )
    operator delete(v3);
  v4 = *((_DWORD *)v1 + 6);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 6) = 0;
  ContainerController::~ContainerController(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall TradeIngredientContainerController::~TradeIngredientContainerController(TradeIngredientContainerController *this)
{
  TradeIngredientContainerController::~TradeIngredientContainerController(this);
}


signed int __fastcall TradeIngredientContainerController::isItemAllowed(TradeIngredientContainerController *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r5@1
  TradeIngredientContainerController *v3; // r4@1
  bool v4; // zf@1
  ItemInstance *v5; // r4@6
  int v6; // t1@6
  signed int result; // r0@7
  int v8; // r5@8
  int v9; // r1@10

  v2 = a2;
  v3 = this;
  v4 = *((_BYTE *)a2 + 15) == 0;
  if ( *((_BYTE *)a2 + 15) )
    v4 = *(_DWORD *)a2 == 0;
  if ( v4
    || ItemInstance::isNull(a2)
    || !*((_BYTE *)v2 + 14)
    || (v6 = *((_DWORD *)v3 + 4), v5 = (TradeIngredientContainerController *)((char *)v3 + 16), *(_DWORD *)v2 != v6) )
  {
    result = 0;
  }
  else
    v8 = ItemInstance::getAuxValue(v2);
    if ( v8 == ItemInstance::getAuxValue(v5) )
    {
      result = 1;
    }
    else
      v9 = (unsigned __int16)ItemInstance::getAuxValue(v5);
      result = 0;
      if ( v9 == 0x7FFF )
        result = 1;
  return result;
}


_DWORD *__fastcall TradeIngredientContainerController::TradeIngredientContainerController(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4@1
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
  *v2 = &off_26ECBB8;
  ItemInstance::ItemInstance((int)(v2 + 4));
  return v2;
}


ContainerController *__fastcall TradeIngredientContainerController::~TradeIngredientContainerController(TradeIngredientContainerController *this)
{
  TradeIngredientContainerController *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5

  v1 = this;
  *(_DWORD *)this = &off_26ECBB8;
  v2 = (void *)*((_DWORD *)this + 17);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 13);
  if ( v3 )
    operator delete(v3);
  v4 = *((_DWORD *)v1 + 6);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 6) = 0;
  return j_j_j__ZN19ContainerControllerD2Ev_0(v1);
}
