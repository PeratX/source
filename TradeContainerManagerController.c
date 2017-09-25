

void __fastcall TradeContainerManagerController::_consumeIngredients(TradeContainerManagerController *this)
{
  TradeContainerManagerController *v1; // r5@1
  int v2; // r4@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  unsigned int v7; // r1@7
  signed int v8; // r0@7
  int v9; // r1@11
  MerchantRecipe *v10; // r0@13
  MerchantRecipe *v11; // r6@13
  int v12; // r7@15
  int v13; // r7@16
  char *v14; // r0@17
  const ItemInstance *v15; // r0@17
  const ItemInstance *v16; // r0@19
  const ItemInstance *v17; // r0@20
  const ItemInstance *v18; // r0@21
  char *v19; // r0@21
  int v20; // r5@34 OVERLAPPED
  int v21; // r6@34 OVERLAPPED
  void *v22; // r0@35
  void *v23; // r0@37
  int v24; // r0@39
  unsigned int *v25; // r1@46
  unsigned int v26; // r0@48
  unsigned int *v27; // r5@52
  unsigned int v28; // r0@54
  int v29; // [sp+0h] [bp-B8h]@13
  int v30; // [sp+8h] [bp-B0h]@26
  void *v31; // [sp+24h] [bp-94h]@24
  void *ptr; // [sp+34h] [bp-84h]@22
  int v33; // [sp+48h] [bp-70h]@13
  int v34; // [sp+50h] [bp-68h]@32
  void *v35; // [sp+6Ch] [bp-4Ch]@30
  void *v36; // [sp+7Ch] [bp-3Ch]@28
  int v37; // [sp+94h] [bp-24h]@13
  int v38; // [sp+98h] [bp-20h]@34

  v1 = this;
  v2 = *((_DWORD *)this + 19);
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
  v9 = *((_DWORD *)v1 + 18);
  if ( v8 )
    v9 = 0;
  (*(void (__fastcall **)(int *))(*(_DWORD *)v9 + 24))(&v37);
  ItemInstance::ItemInstance((ItemInstance *)&v33, v37);
  ItemInstance::ItemInstance((ItemInstance *)&v29, v37 + 72);
  v10 = (MerchantRecipe *)TradeContainerManagerController::_getActiveRecipe(v1);
  v11 = v10;
  if ( v10 )
    if ( MerchantRecipe::hasSecondaryBuyItem(v10) == 1 )
      v12 = v33;
      if ( v12 == *(_DWORD *)MerchantRecipe::getBuyAItem(v11)
        && (v13 = v29, v13 == *(_DWORD *)MerchantRecipe::getBuyBItem(v11)) )
        v18 = (const ItemInstance *)MerchantRecipe::getBuyAItem(v11);
        TradeContainerManagerController::_consumeMaterials(v1, (ItemInstance *)&v33, v18, 0);
        v19 = MerchantRecipe::getBuyBItem(v11);
        TradeContainerManagerController::_consumeMaterials(v1, (ItemInstance *)&v29, (const ItemInstance *)v19, 1);
        v14 = MerchantRecipe::getBuyBItem(v11);
        TradeContainerManagerController::_consumeMaterials(v1, (ItemInstance *)&v33, (const ItemInstance *)v14, 0);
        v15 = (const ItemInstance *)MerchantRecipe::getBuyAItem(v11);
        TradeContainerManagerController::_consumeMaterials(v1, (ItemInstance *)&v29, v15, 1);
    else if ( ItemInstance::isNull((ItemInstance *)&v33) )
      v16 = (const ItemInstance *)MerchantRecipe::getBuyAItem(v11);
      TradeContainerManagerController::_consumeMaterials(v1, (ItemInstance *)&v29, v16, 1);
    else
      v17 = (const ItemInstance *)MerchantRecipe::getBuyAItem(v11);
      TradeContainerManagerController::_consumeMaterials(v1, (ItemInstance *)&v33, v17, 0);
  if ( ptr )
    operator delete(ptr);
  if ( v31 )
    operator delete(v31);
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  if ( v36 )
    operator delete(v36);
  if ( v35 )
    operator delete(v35);
  if ( v34 )
    (*(void (**)(void))(*(_DWORD *)v34 + 4))();
  *(_QWORD *)&v20 = *(_QWORD *)&v37;
  if ( v37 != v38 )
    do
      v22 = *(void **)(v20 + 52);
      if ( v22 )
        operator delete(v22);
      v23 = *(void **)(v20 + 36);
      if ( v23 )
        operator delete(v23);
      v24 = *(_DWORD *)(v20 + 8);
      if ( v24 )
        (*(void (**)(void))(*(_DWORD *)v24 + 4))();
      *(_DWORD *)(v20 + 8) = 0;
      v20 += 72;
    while ( v21 != v20 );
    v20 = v37;
  if ( v20 )
    operator delete((void *)v20);
    v25 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 == 1 )
      v27 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
}


void __fastcall TradeContainerManagerController::handleTakeAll(TradeContainerManagerController *a1, ContainerItemStack *a2, int **a3, int a4)
{
  TradeContainerManagerController *v4; // r10@1
  ContainerItemStack *v5; // r9@1
  int **v6; // r6@1
  int v7; // r4@1
  int v8; // r0@1
  int v9; // r8@2
  int v10; // r7@2
  bool v11; // zf@3
  int v12; // r11@6
  bool v13; // zf@9
  _DWORD *v14; // r0@13
  _DWORD *v15; // r1@14
  size_t v16; // r2@14
  int v17; // [sp+0h] [bp-28h]@1

  v4 = a1;
  v17 = a4;
  v5 = a2;
  v6 = a3;
  v7 = 0x1Fu % dword_27F9E38;
  v8 = *(_DWORD *)(dword_27F9E34 + 4 * (0x1Fu % dword_27F9E38));
  if ( !v8 )
    goto LABEL_13;
  v9 = *(_DWORD *)v8;
  v10 = *(_DWORD *)(*(_DWORD *)v8 + 12);
  while ( 1 )
  {
    v11 = v10 == 31;
    if ( v10 == 31 )
      v11 = *(_DWORD *)(v9 + 4) == 31;
    if ( v11 )
      break;
    v12 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      v10 = *(_DWORD *)(v12 + 12);
      v8 = v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v12 + 12) % (unsigned int)dword_27F9E38 == v7 )
        continue;
    }
  }
  v13 = v8 == 0;
  if ( v8 )
    v8 = *(_DWORD *)v8;
    v13 = v8 == 0;
  if ( v13 )
LABEL_13:
    v14 = operator new(0x10u);
    *v14 = 0;
    v14[1] = 31;
    v14[2] = &unk_28898CC;
    v8 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F9E34,
           v7,
           0x1Fu,
           (int)v14);
  v15 = *(_DWORD **)(v8 + 8);
  v16 = *(*v6 - 3);
  if ( v16 == *(v15 - 3) && !memcmp(*v6, v15, v16) )
    j_j_j__ZN31TradeContainerManagerController16_createTradeItemER18ContainerItemStack(v4, v5);
  else
    j_j_j__ZN26ContainerManagerController13handleTakeAllER18ContainerItemStackRKSsi((int)v4, (int)v5, v6, v17);
}


void __fastcall TradeContainerManagerController::handleTakeAmount(TradeContainerManagerController *a1, ContainerItemStack *a2, int a3, int **a4, int a5)
{
  TradeContainerManagerController *v5; // r10@1
  ContainerItemStack *v6; // r9@1
  int **v7; // r4@1
  int v8; // r6@1
  int v9; // r0@1
  int v10; // r8@2
  int v11; // r7@2
  bool v12; // zf@3
  int v13; // r11@6
  bool v14; // zf@9
  _DWORD *v15; // r0@13
  _DWORD *v16; // r1@14
  size_t v17; // r2@14
  int v18; // [sp+0h] [bp-28h]@1

  v5 = a1;
  v18 = a3;
  v6 = a2;
  v7 = a4;
  v8 = 0x1Fu % dword_27F9E38;
  v9 = *(_DWORD *)(dword_27F9E34 + 4 * (0x1Fu % dword_27F9E38));
  if ( !v9 )
    goto LABEL_13;
  v10 = *(_DWORD *)v9;
  v11 = *(_DWORD *)(*(_DWORD *)v9 + 12);
  while ( 1 )
  {
    v12 = v11 == 31;
    if ( v11 == 31 )
      v12 = *(_DWORD *)(v10 + 4) == 31;
    if ( v12 )
      break;
    v13 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 )
    {
      v11 = *(_DWORD *)(v13 + 12);
      v9 = v10;
      v10 = *(_DWORD *)v10;
      if ( *(_DWORD *)(v13 + 12) % (unsigned int)dword_27F9E38 == v8 )
        continue;
    }
  }
  v14 = v9 == 0;
  if ( v9 )
    v9 = *(_DWORD *)v9;
    v14 = v9 == 0;
  if ( v14 )
LABEL_13:
    v15 = operator new(0x10u);
    *v15 = 0;
    v15[1] = 31;
    v15[2] = &unk_28898CC;
    v9 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F9E34,
           v8,
           0x1Fu,
           (int)v15);
  v16 = *(_DWORD **)(v9 + 8);
  v17 = *(*v7 - 3);
  if ( v17 == *(v16 - 3) && !memcmp(*v7, v16, v17) )
    j_j_j__ZN31TradeContainerManagerController16_createTradeItemER18ContainerItemStack(v5, v6);
  else
    j_j_j__ZN26ContainerManagerController16handleTakeAmountER18ContainerItemStack12ItemTakeTypeRKSsi(
      (int)v5,
      (int)v6,
      v18,
      v7,
      a5);
}


void __fastcall TradeContainerManagerController::_moveItemsBackToInventory(TradeContainerManagerController *this)
{
  TradeContainerManagerController::_moveItemsBackToInventory(this);
}


void __fastcall TradeContainerManagerController::handleTakeAmount(TradeContainerManagerController *a1, ContainerItemStack *a2, int a3, int **a4, int a5)
{
  TradeContainerManagerController::handleTakeAmount(a1, a2, a3, a4, a5);
}


void __fastcall TradeContainerManagerController::handlePlaceAll(TradeContainerManagerController *a1, ContainerItemStack *a2, int **a3, int a4)
{
  TradeContainerManagerController::handlePlaceAll(a1, a2, a3, a4);
}


void __fastcall TradeContainerManagerController::_createTradeItem(TradeContainerManagerController *this, ContainerItemStack *a2)
{
  TradeContainerManagerController::_createTradeItem(this, a2);
}


int __fastcall TradeContainerManagerController::getRecipeListSize(TradeContainerManagerController *this)
{
  int v1; // r4@1
  unsigned int v2; // r2@2
  unsigned int *v3; // r1@2
  unsigned int v4; // r3@5
  unsigned int v5; // r6@6
  unsigned int v6; // r2@7
  signed int v7; // r1@7
  TradeContainerManagerModel *v8; // r0@11
  int v9; // r5@13
  unsigned int *v10; // r1@14
  unsigned int v11; // r0@16
  unsigned int *v12; // r6@20
  unsigned int v13; // r0@22

  v1 = *((_DWORD *)this + 19);
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
  v8 = (TradeContainerManagerModel *)*((_DWORD *)this + 18);
  if ( v7 )
    v8 = 0;
  v9 = TradeContainerManagerModel::getRecipeListSize(v8);
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


char *__fastcall TradeContainerManagerController::getDisplayName(TradeContainerManagerController *this, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r3@2
  unsigned int *v4; // r2@2
  unsigned int v5; // r6@5
  unsigned int v6; // r5@6
  unsigned int v7; // r3@7
  signed int v8; // r2@7
  int v9; // r1@11
  char *result; // r0@13
  unsigned int *v11; // r1@14
  unsigned int *v12; // r5@20

  v2 = *(_DWORD *)(a2 + 76);
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
  v9 = *(_DWORD *)(a2 + 72);
  if ( v8 )
    v9 = 0;
  result = (char *)TradeContainerManagerModel::getDisplayName(this, v9);
    v11 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        result = (char *)__ldrex(v11);
      while ( __strex((unsigned int)(result - 1), v11) );
    else
      result = (char *)(*v11)--;
    if ( result == (char *)1 )
      v12 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        __dmb();
        do
          result = (char *)__ldrex(v12);
        while ( __strex((unsigned int)(result - 1), v12) );
        result = (char *)(*v12)--;
      if ( result == (char *)1 )
        result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


void __fastcall TradeContainerManagerController::_createTradeItem(TradeContainerManagerController *this, ContainerItemStack *a2)
{
  TradeContainerManagerController *v2; // r5@1
  ContainerItemStack *v3; // r7@1
  int v4; // r4@1
  unsigned int v5; // r1@2
  unsigned int *v6; // r0@2
  unsigned int v7; // r2@5
  unsigned int v8; // r3@6
  unsigned int v9; // r1@7
  signed int v10; // r0@7
  ContainerManagerModel *v11; // r6@11
  const ItemInstance *v12; // r0@22
  ItemInstance *v13; // r0@23
  ItemInstance *v14; // r7@23
  int v15; // r0@23
  MinecraftEventing *v16; // r0@25
  int v17; // r0@25
  Entity *v18; // r0@25
  TradeableComponent *v19; // r0@25
  int v20; // r6@25
  Player *v21; // r5@44 OVERLAPPED
  Player *v22; // r6@44 OVERLAPPED
  void *v23; // r0@45
  void *v24; // r0@47
  int v25; // r0@49
  unsigned int *v26; // r1@56
  unsigned int v27; // r0@58
  unsigned int *v28; // r5@62
  unsigned int v29; // r0@64
  const ItemInstance *v30; // [sp+0h] [bp-160h]@0
  __int16 v31; // [sp+5h] [bp-15Bh]@0
  char v32; // [sp+7h] [bp-159h]@0
  int v33; // [sp+8h] [bp-158h]@25
  char v34; // [sp+Ch] [bp-154h]@25
  __int16 v35; // [sp+Dh] [bp-153h]@25
  char v36; // [sp+Fh] [bp-151h]@25
  int v37; // [sp+10h] [bp-150h]@25
  int v38; // [sp+14h] [bp-14Ch]@25
  int v39; // [sp+18h] [bp-148h]@25
  int v40; // [sp+20h] [bp-140h]@35
  void *v41; // [sp+3Ch] [bp-124h]@33
  void *v42; // [sp+4Ch] [bp-114h]@31
  int v43; // [sp+60h] [bp-100h]@25
  int v44; // [sp+68h] [bp-F8h]@29
  void *v45; // [sp+84h] [bp-DCh]@27
  void *v46; // [sp+94h] [bp-CCh]@25
  char v47; // [sp+A8h] [bp-B8h]@15
  int v48; // [sp+B0h] [bp-B0h]@19
  void *v49; // [sp+CCh] [bp-94h]@17
  void *ptr; // [sp+DCh] [bp-84h]@15
  char v51; // [sp+F0h] [bp-70h]@13
  int v52; // [sp+F8h] [bp-68h]@42
  int v53; // [sp+FEh] [bp-62h]@23
  void *v54; // [sp+114h] [bp-4Ch]@40
  void *v55; // [sp+124h] [bp-3Ch]@38
  Player *v56; // [sp+13Ch] [bp-24h]@13
  Player *v57; // [sp+140h] [bp-20h]@44

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 19);
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
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v10 = 1;
  v4 = 0;
LABEL_11:
  v11 = (ContainerManagerModel *)*((_DWORD *)v2 + 18);
  if ( v10 )
    v11 = 0;
  (*(void (__fastcall **)(Player **, ContainerManagerModel *))(*(_DWORD *)v11 + 24))(&v56, v11);
  ItemInstance::ItemInstance((ItemInstance *)&v51, (int)v56 + 144);
  if ( !ItemInstance::isNull((ItemInstance *)&v51) )
    if ( ContainerItemStack::isEmpty(v3) == 1 )
      ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v47, (const ItemInstance *)&v51);
      ItemInstance::operator=((int)v3, (int)&v47);
      if ( ptr )
        operator delete(ptr);
      if ( v49 )
        operator delete(v49);
      if ( v48 )
        (*(void (**)(void))(*(_DWORD *)v48 + 4))();
      v48 = 0;
    else
      v12 = (const ItemInstance *)ContainerItemStack::getItemInstance(v3);
      if ( ItemInstance::isStackable((ItemInstance *)&v51, v12) != 1 )
        goto LABEL_38;
      v13 = (ItemInstance *)ContainerItemStack::getItemInstance(v3);
      v14 = v13;
      v15 = ItemInstance::getMaxStackSize(v13);
      if ( v15 - *((_BYTE *)v14 + 14) < (unsigned __int8)v53 )
      ItemInstance::add(v14, (unsigned __int8)v53);
    TradeContainerManagerController::_consumeIngredients(v2);
    v16 = (MinecraftEventing *)ContainerManagerModel::getPlayer(v11);
    MinecraftEventing::fireEventTradeCompleted(v16, v56, (Player *)((char *)v56 + 72), (const ItemInstance *)&v51, v30);
    v17 = ContainerManagerModel::getPlayer(v11);
    MinecraftEventing::fireEventItemAcquired(v17, (ItemInstance *)&v51, (unsigned __int8)v53, 10);
    v18 = (Entity *)TradeContainerManagerModel::getEntity(v11);
    v19 = (TradeableComponent *)Entity::getTradeableComponent(v18);
    TradeableComponent::notifyTrade(v19, *((_DWORD *)v2 + 20));
    v20 = ContainerManagerModel::getPlayer(v11);
    v33 = 99999;
    v34 = -23;
    v36 = v32;
    v35 = v31;
    v37 = 0;
    v38 = 0;
    ItemInstance::ItemInstance((ItemInstance *)&v39, (int)&v51);
    ItemInstance::ItemInstance((ItemInstance *)&v43, (int)&ItemInstance::EMPTY_ITEM);
    InventoryTransactionManager::addAction(v20 + 5152, (int)&v33);
    if ( v46 )
      operator delete(v46);
    if ( v45 )
      operator delete(v45);
    if ( v44 )
      (*(void (**)(void))(*(_DWORD *)v44 + 4))();
    v44 = 0;
    if ( v42 )
      operator delete(v42);
    if ( v41 )
      operator delete(v41);
    if ( v40 )
      (*(void (**)(void))(*(_DWORD *)v40 + 4))();
    v40 = 0;
LABEL_38:
  TradeContainerManagerController::_createResult(v2, 0);
  if ( v55 )
    operator delete(v55);
  if ( v54 )
    operator delete(v54);
  if ( v52 )
    (*(void (**)(void))(*(_DWORD *)v52 + 4))();
  *(_QWORD *)&v21 = *(_QWORD *)&v56;
  if ( v56 != v57 )
    do
      v23 = (void *)*((_DWORD *)v21 + 13);
      if ( v23 )
        operator delete(v23);
      v24 = (void *)*((_DWORD *)v21 + 9);
      if ( v24 )
        operator delete(v24);
      v25 = *((_DWORD *)v21 + 2);
      if ( v25 )
        (*(void (**)(void))(*(_DWORD *)v25 + 4))();
      *((_DWORD *)v21 + 2) = 0;
      v21 = (Player *)((char *)v21 + 72);
    while ( v22 != v21 );
    v21 = v56;
  if ( v21 )
    operator delete((void *)v21);
    v26 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 == 1 )
      v28 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
        __dmb();
        do
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
}


unsigned int __fastcall TradeContainerManagerController::TradeContainerManagerController(unsigned int a1, int a2)
{
  int v2; // r5@1
  unsigned int v3; // r4@1
  int v4; // r6@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  unsigned int v7; // r1@8
  unsigned int *v8; // r0@8
  unsigned int v9; // r2@11
  unsigned int v10; // r3@12
  unsigned int v11; // r1@13
  int v12; // r3@13
  int v13; // r0@20
  unsigned int *v14; // r2@21
  unsigned int v15; // r1@23
  int v16; // r0@28
  unsigned int *v17; // r0@29
  unsigned int v18; // r1@31
  unsigned int *v20; // r7@37
  unsigned int v21; // r0@39
  int v22; // [sp+4h] [bp-1Ch]@15
  int v23; // [sp+8h] [bp-18h]@1

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)(a2 + 4);
  v23 = v4;
  if ( !v4 )
    goto LABEL_19;
  v5 = (unsigned int *)(v4 + 8);
  if ( &pthread_create )
  {
    __dmb();
    do
      v6 = __ldrex(v5);
    while ( __strex(v6 + 1, v5) );
    v4 = *(_DWORD *)(v2 + 4);
    if ( !v4 )
      goto LABEL_19;
  }
  else
    ++*v5;
  v7 = *(_DWORD *)(v4 + 4);
  v8 = (unsigned int *)(v4 + 4);
  while ( v7 )
    v9 = __ldrex(v8);
    if ( v9 == v7 )
    {
      v10 = __strex(v7 + 1, v8);
      v7 = v9;
      if ( !v10 )
      {
        __dmb();
        v11 = *v8;
        v12 = *(_DWORD *)v2;
        if ( !*v8 )
          v12 = *v8;
        v22 = v12;
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v8);
          while ( __strex(v11 - 1, v8) );
        }
        else
          *v8 = v11 - 1;
        if ( v11 == 1 )
          v20 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
          }
          else
            v21 = (*v20)--;
          if ( v21 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
        goto LABEL_20;
      }
    }
    else
      __clrex();
LABEL_19:
  v22 = 0;
LABEL_20:
  LevelContainerManagerController::LevelContainerManagerController(v3, (int)&v22);
  v13 = v23;
  if ( v23 )
    v14 = (unsigned int *)(v23 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      (*(void (**)(void))(*(_DWORD *)v13 + 12))();
  *(_DWORD *)v3 = &off_26ECF18;
  *(_DWORD *)(v3 + 72) = *(_DWORD *)v2;
  v16 = *(_DWORD *)(v2 + 4);
  *(_DWORD *)(v3 + 76) = v16;
  if ( v16 )
    v17 = (unsigned int *)(v16 + 8);
        v18 = __ldrex(v17);
      while ( __strex(v18 + 1, v17) );
      ++*v17;
  *(_DWORD *)(v3 + 80) = 0;
  TradeContainerManagerController::_setupCallbacks((TradeContainerManagerController *)v3);
  return v3;
}


void __fastcall TradeContainerManagerController::handleTakeAmount(TradeContainerManagerController *a1, ContainerItemStack *a2, int a3, int **a4, int a5)
{
  TradeContainerManagerController::handleTakeAmount(a1, a2, a3, a4, a5);
}


void __fastcall TradeContainerManagerController::_createResult(TradeContainerManagerController *this, int a2)
{
  TradeContainerManagerController::_createResult(this, a2);
}


int __fastcall TradeContainerManagerController::getRecipe(TradeContainerManagerController *this, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r3@2
  unsigned int *v4; // r2@2
  unsigned int v5; // r6@5
  unsigned int v6; // r5@6
  unsigned int v7; // r3@7
  signed int v8; // r2@7
  TradeContainerManagerModel *v9; // r0@11
  int v10; // r5@13
  unsigned int *v11; // r1@14
  unsigned int v12; // r0@16
  unsigned int *v13; // r6@20
  unsigned int v14; // r0@22

  v2 = *((_DWORD *)this + 19);
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
  v9 = (TradeContainerManagerModel *)*((_DWORD *)this + 18);
  if ( v8 )
    v9 = 0;
  v10 = TradeContainerManagerModel::getCurrentRecipe(v9, a2);
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
  return v10;
}


signed int __fastcall TradeContainerManagerController::isContainerValid(TradeContainerManagerController *this, float a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r6@2
  unsigned int v5; // r3@5
  unsigned int v6; // r5@6
  signed int v7; // r5@7
  bool v8; // zf@7
  unsigned int v9; // r0@13
  unsigned int *v11; // r6@18
  unsigned int v12; // r0@20

  v2 = *((_DWORD *)this + 19);
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
          v8 = *v4 == 0;
          if ( *v4 )
          {
            this = (TradeContainerManagerController *)*((_DWORD *)this + 18);
            v8 = this == 0;
          }
          if ( !v8 )
            v7 = TradeContainerManagerModel::isTradeValid(this, a2);
          if ( &pthread_create )
            __dmb();
            do
              v9 = __ldrex(v4);
            while ( __strex(v9 - 1, v4) );
          else
            v9 = (*v4)--;
          if ( v9 == 1 )
            v11 = (unsigned int *)(v2 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
            if ( &pthread_create )
            {
              __dmb();
              do
                v12 = __ldrex(v11);
              while ( __strex(v12 - 1, v11) );
            }
            else
              v12 = (*v11)--;
            if ( v12 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
          return v7;
        }
      }
      else
        __clrex();
    }
  }
  return 0;
}


void __fastcall TradeContainerManagerController::handleTakeHalf(TradeContainerManagerController *a1, ContainerItemStack *a2, int **a3, int a4)
{
  TradeContainerManagerController *v4; // r10@1
  ContainerItemStack *v5; // r9@1
  int **v6; // r6@1
  int v7; // r4@1
  int v8; // r0@1
  int v9; // r8@2
  int v10; // r7@2
  bool v11; // zf@3
  int v12; // r11@6
  bool v13; // zf@9
  _DWORD *v14; // r0@13
  _DWORD *v15; // r1@14
  size_t v16; // r2@14
  int v17; // [sp+0h] [bp-28h]@1

  v4 = a1;
  v17 = a4;
  v5 = a2;
  v6 = a3;
  v7 = 0x1Fu % dword_27F9E38;
  v8 = *(_DWORD *)(dword_27F9E34 + 4 * (0x1Fu % dword_27F9E38));
  if ( !v8 )
    goto LABEL_13;
  v9 = *(_DWORD *)v8;
  v10 = *(_DWORD *)(*(_DWORD *)v8 + 12);
  while ( 1 )
  {
    v11 = v10 == 31;
    if ( v10 == 31 )
      v11 = *(_DWORD *)(v9 + 4) == 31;
    if ( v11 )
      break;
    v12 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      v10 = *(_DWORD *)(v12 + 12);
      v8 = v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v12 + 12) % (unsigned int)dword_27F9E38 == v7 )
        continue;
    }
  }
  v13 = v8 == 0;
  if ( v8 )
    v8 = *(_DWORD *)v8;
    v13 = v8 == 0;
  if ( v13 )
LABEL_13:
    v14 = operator new(0x10u);
    *v14 = 0;
    v14[1] = 31;
    v14[2] = &unk_28898CC;
    v8 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F9E34,
           v7,
           0x1Fu,
           (int)v14);
  v15 = *(_DWORD **)(v8 + 8);
  v16 = *(*v6 - 3);
  if ( v16 == *(v15 - 3) && !memcmp(*v6, v15, v16) )
    j_j_j__ZN31TradeContainerManagerController16_createTradeItemER18ContainerItemStack(v4, v5);
  else
    j_j_j__ZN26ContainerManagerController14handleTakeHalfER18ContainerItemStackRKSsi((int)v4, (int)v5, v6, v17);
}


int __fastcall TradeContainerManagerController::handleAutoPlace(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, void *a15, int a16, int a17, int a18, void *a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, char a44)
{
  int v44; // r8@1
  int **v45; // r11@1
  int v46; // r4@1
  int v47; // r0@1
  int v48; // r10@2
  int v49; // r7@2
  bool v50; // zf@3
  int v51; // r6@6
  bool v52; // zf@9
  _DWORD *v53; // r0@13
  int **v54; // r4@14
  _DWORD *v55; // r1@14
  size_t v56; // r2@14
  int result; // r0@16
  TradeContainerManagerController *v58; // r6@17
  int v59; // r5@17
  unsigned int v60; // r1@18
  unsigned int *v61; // r0@18
  unsigned int v62; // r2@21
  unsigned int v63; // r3@22
  unsigned int v64; // r0@23
  int v65; // r0@26
  int v66; // r7@26
  bool v67; // zf@26
  int *v68; // r8@31
  int *v69; // r11@31
  char v70; // r7@32
  unsigned int *v71; // r2@33
  signed int v72; // r1@35
  ContainerController **v73; // r0@41
  signed int v74; // r0@41
  signed int v75; // r4@41
  void *v76; // r0@41
  signed int v77; // r0@42
  int v78; // r0@46
  int *v79; // r4@46
  int *v80; // r11@46
  int v81; // r8@46
  unsigned int *v82; // r2@48
  signed int v83; // r1@50
  int *v84; // r0@56
  void *v85; // r0@56
  int *v86; // r4@58
  int *i; // r11@58
  unsigned int *v88; // r2@60
  signed int v89; // r1@62
  int *v90; // r0@68
  void *v91; // r0@68
  int *v92; // r0@71
  unsigned int *v93; // r1@89
  unsigned int *v94; // r4@95
  int **v95; // [sp+Ch] [bp-ECh]@32
  ItemInstance *v96; // [sp+10h] [bp-E8h]@32
  unsigned __int64 *v97; // [sp+1Ch] [bp-DCh]@32
  int v98; // [sp+28h] [bp-D0h]@1
  int v99; // [sp+2Ch] [bp-CCh]@1
  int v100; // [sp+30h] [bp-C8h]@60
  int v101; // [sp+34h] [bp-C4h]@48
  char v102; // [sp+38h] [bp-C0h]@46
  int v103; // [sp+40h] [bp-B8h]@80
  void *v104; // [sp+5Ch] [bp-9Ch]@78
  void *ptr; // [sp+6Ch] [bp-8Ch]@76
  int v106; // [sp+84h] [bp-74h]@33
  char v107; // [sp+88h] [bp-70h]@31
  int v108; // [sp+90h] [bp-68h]@86
  void *v109; // [sp+ACh] [bp-4Ch]@84
  void *v110; // [sp+BCh] [bp-3Ch]@82

  v44 = a1;
  v99 = a4;
  v45 = (int **)a3;
  v98 = a2;
  v46 = 0x1Fu % dword_27F9E38;
  v47 = *(_DWORD *)(dword_27F9E34 + 4 * (0x1Fu % dword_27F9E38));
  if ( !v47 )
    goto LABEL_13;
  v48 = *(_DWORD *)v47;
  v49 = *(_DWORD *)(*(_DWORD *)v47 + 12);
  while ( 1 )
  {
    v50 = v49 == 31;
    if ( v49 == 31 )
      v50 = *(_DWORD *)(v48 + 4) == 31;
    if ( v50 )
      break;
    v51 = *(_DWORD *)v48;
    if ( *(_DWORD *)v48 )
    {
      v49 = *(_DWORD *)(v51 + 12);
      v47 = v48;
      v48 = *(_DWORD *)v48;
      if ( *(_DWORD *)(v51 + 12) % (unsigned int)dword_27F9E38 == v46 )
        continue;
    }
  }
  v52 = v47 == 0;
  if ( v47 )
    v47 = *(_DWORD *)v47;
    v52 = v47 == 0;
  if ( v52 )
LABEL_13:
    v53 = operator new(0x10u);
    *v53 = 0;
    v53[1] = 31;
    v53[2] = &unk_28898CC;
    v47 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27F9E34,
            v46,
            0x1Fu,
            (int)v53);
  v54 = v45;
  v55 = *(_DWORD **)(v47 + 8);
  v56 = *(*v45 - 3);
  if ( v56 == *(v55 - 3) && !memcmp(*v45, v55, v56) )
    v58 = (TradeContainerManagerController *)v44;
    v59 = *(_DWORD *)(v44 + 76);
    if ( v59 )
      v60 = *(_DWORD *)(v59 + 4);
      v61 = (unsigned int *)(v59 + 4);
      while ( v60 )
      {
        __dmb();
        v62 = __ldrex(v61);
        if ( v62 == v60 )
        {
          v63 = __strex(v60 + 1, v61);
          v60 = v62;
          if ( !v63 )
          {
            __dmb();
            v64 = *v61;
            goto LABEL_26;
          }
        }
        else
          __clrex();
      }
      v59 = 0;
    else
LABEL_26:
    v65 = ContainerManagerController::getItemInstance(v44, v45, v99);
    v66 = v65;
    result = *(_BYTE *)(v65 + 15);
    v67 = result == 0;
    if ( result )
      result = *(_DWORD *)v66;
      v67 = *(_DWORD *)v66 == 0;
    if ( !v67 )
      result = ItemInstance::isNull((ItemInstance *)v66);
      if ( !result )
        result = *(_BYTE *)(v66 + 14);
        if ( *(_BYTE *)(v66 + 14) )
          ItemInstance::ItemInstance((ItemInstance *)&v107, v66);
          v68 = (int *)(*(_QWORD *)a5 >> 32);
          v69 = (int *)*(_QWORD *)a5;
          if ( v69 != v68 )
            v95 = v54;
            v96 = (ItemInstance *)v66;
            v97 = (unsigned __int64 *)((char *)v58 + 20);
            v70 = 0;
            do
            {
              sub_21E8AF4(&v106, v69);
              v73 = (ContainerController **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                              v97,
                                              (int **)&v106);
              v74 = ContainerController::canSet(*v73, (const ItemInstance *)&v107, 0);
              v75 = v74;
              v70 |= v74;
              v76 = (void *)(v106 - 12);
              if ( (int *)(v106 - 12) != &dword_28898C0 )
              {
                v71 = (unsigned int *)(v106 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v72 = __ldrex(v71);
                  while ( __strex(v72 - 1, v71) );
                }
                else
                  v72 = (*v71)--;
                if ( v72 <= 0 )
                  j_j_j_j__ZdlPv_9(v76);
              }
              v69 += 2;
              v77 = 0;
              if ( v69 == v68 )
                v77 = 1;
            }
            while ( !(v77 | v75) );
            if ( v70 & 1 )
              ContainerItemStack::ContainerItemStack((int)&v102);
              TradeContainerManagerController::_createTradeItem(v58, (ContainerItemStack *)&v102);
              v78 = ContainerItemStack::getCount((ContainerItemStack *)&v102);
              v79 = (int *)(*(_QWORD *)a5 >> 32);
              v80 = (int *)*(_QWORD *)a5;
              v81 = v78;
              if ( v80 != v79 )
                do
                  sub_21E8AF4(&v101, v80);
                  v84 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                 v97,
                                 (int **)&v101);
                  ContainerController::autoPlaceItems(*v84, (int)&v102, a6, 1);
                  v85 = (void *)(v101 - 12);
                  if ( (int *)(v101 - 12) != &dword_28898C0 )
                  {
                    v82 = (unsigned int *)(v101 - 4);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v83 = __ldrex(v82);
                      while ( __strex(v83 - 1, v82) );
                    }
                    else
                      v83 = (*v82)--;
                    if ( v83 <= 0 )
                      j_j_j_j__ZdlPv_9(v85);
                  }
                  v80 += 2;
                while ( v80 != v79 );
                v86 = (int *)(*(_QWORD *)a5 >> 32);
                for ( i = (int *)*(_QWORD *)a5; i != v86; i += 2 )
                  sub_21E8AF4(&v100, i);
                  v90 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                 (int **)&v100);
                  ContainerController::autoPlaceItems(*v90, (int)&v102, a6, 0);
                  v91 = (void *)(v100 - 12);
                  if ( (int *)(v100 - 12) != &dword_28898C0 )
                    v88 = (unsigned int *)(v100 - 4);
                        v89 = __ldrex(v88);
                      while ( __strex(v89 - 1, v88) );
                      v89 = (*v88)--;
                    if ( v89 <= 0 )
                      j_j_j_j__ZdlPv_9(v91);
              if ( !ContainerItemStack::isEmpty((ContainerItemStack *)&v102) )
                v92 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                               v97,
                               v95);
                ContainerController::autoPlaceItems(*v92, (int)&v102, a6, 0);
              if ( v98 - v81 >= 1
                && !ItemInstance::isNull(v96)
                && ItemInstance::sameItemAndAux(v96, (const ItemInstance *)&v107) == 1 )
                (*(void (__fastcall **)(TradeContainerManagerController *, int, int **, int))(*(_DWORD *)v58 + 32))(
                  v58,
                  v98 - v81,
                  v95,
                  v99);
              if ( ptr )
                operator delete(ptr);
              if ( v104 )
                operator delete(v104);
              if ( v103 )
                (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v103 + 4))(v103, *(_DWORD *)(*(_DWORD *)v103 + 4));
          if ( v110 )
            operator delete(v110);
          if ( v109 )
            operator delete(v109);
          result = v108;
          if ( v108 )
            result = (*(int (__cdecl **)(int, _DWORD))(*(_DWORD *)v108 + 4))(v108, *(_DWORD *)(*(_DWORD *)v108 + 4));
      v93 = (unsigned int *)(v59 + 4);
      if ( &pthread_create )
        do
          result = __ldrex(v93);
        while ( __strex(result - 1, v93) );
      else
        result = (*v93)--;
      if ( result == 1 )
        v94 = (unsigned int *)(v59 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v59 + 8))(v59);
        if ( &pthread_create )
          __dmb();
          do
            result = __ldrex(v94);
          while ( __strex(result - 1, v94) );
          result = (*v94)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v59 + 12))(v59);
  else
    result = j_j_j__ZN26ContainerManagerController15handleAutoPlaceEiRKSsiRKSt6vectorI13AutoPlaceItemSaIS3_EERS2_I15AutoPlaceResultSaIS8_EE(
               v44,
               v98,
               v45,
               v99,
               (unsigned __int64 *)a5,
               a6);
  return result;
}


int __fastcall TradeContainerManagerController::closeContainers(TradeContainerManagerController *this)
{
  ContainerManagerController *v1; // r4@1

  v1 = this;
  TradeContainerManagerController::_moveItemsBackToInventory(this);
  return j_j_j__ZN26ContainerManagerController15closeContainersEv(v1);
}


void __fastcall TradeContainerManagerController::handleTakeAll(TradeContainerManagerController *a1, ContainerItemStack *a2, int **a3, int a4)
{
  TradeContainerManagerController::handleTakeAll(a1, a2, a3, a4);
}


void __fastcall TradeContainerManagerController::handlePlaceAll(TradeContainerManagerController *a1, ContainerItemStack *a2, int **a3, int a4)
{
  TradeContainerManagerController *v4; // r10@1
  ContainerItemStack *v5; // r9@1
  int **v6; // r6@1
  int v7; // r4@1
  int v8; // r0@1
  int v9; // r8@2
  int v10; // r7@2
  bool v11; // zf@3
  int v12; // r11@6
  bool v13; // zf@9
  _DWORD *v14; // r0@13
  _DWORD *v15; // r1@14
  size_t v16; // r2@14
  int v17; // [sp+0h] [bp-28h]@1

  v4 = a1;
  v17 = a4;
  v5 = a2;
  v6 = a3;
  v7 = 0x1Fu % dword_27F9E38;
  v8 = *(_DWORD *)(dword_27F9E34 + 4 * (0x1Fu % dword_27F9E38));
  if ( !v8 )
    goto LABEL_13;
  v9 = *(_DWORD *)v8;
  v10 = *(_DWORD *)(*(_DWORD *)v8 + 12);
  while ( 1 )
  {
    v11 = v10 == 31;
    if ( v10 == 31 )
      v11 = *(_DWORD *)(v9 + 4) == 31;
    if ( v11 )
      break;
    v12 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      v10 = *(_DWORD *)(v12 + 12);
      v8 = v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v12 + 12) % (unsigned int)dword_27F9E38 == v7 )
        continue;
    }
  }
  v13 = v8 == 0;
  if ( v8 )
    v8 = *(_DWORD *)v8;
    v13 = v8 == 0;
  if ( v13 )
LABEL_13:
    v14 = operator new(0x10u);
    *v14 = 0;
    v14[1] = 31;
    v14[2] = &unk_28898CC;
    v8 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F9E34,
           v7,
           0x1Fu,
           (int)v14);
  v15 = *(_DWORD **)(v8 + 8);
  v16 = *(*v6 - 3);
  if ( v16 == *(v15 - 3) && !memcmp(*v6, v15, v16) )
    j_j_j__ZN31TradeContainerManagerController16_createTradeItemER18ContainerItemStack(v4, v5);
  else
    j_j_j__ZN26ContainerManagerController14handlePlaceAllER18ContainerItemStackRKSsi((int)v4, (int)v5, v6, v17);
}


void __fastcall TradeContainerManagerController::_consumeIngredients(TradeContainerManagerController *this)
{
  TradeContainerManagerController::_consumeIngredients(this);
}


void __fastcall TradeContainerManagerController::_moveItemsBackToInventory(TradeContainerManagerController *this)
{
  TradeContainerManagerController *v1; // r9@1
  int v2; // r8@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  signed int v7; // r4@7
  int v8; // r11@11
  int v9; // r10@11
  int v10; // r0@11
  int v11; // r5@14
  int v12; // r4@14
  bool v13; // zf@15
  int v14; // r6@18
  bool v15; // zf@21
  _DWORD *v16; // r0@25
  int v17; // r0@26
  __int64 v18; // kr00_8@27
  unsigned int *v19; // r0@28
  unsigned int v20; // r2@30
  unsigned int *v21; // r0@34
  unsigned int v22; // r2@36
  unsigned int *v23; // r0@40
  unsigned int v24; // r1@42
  int v25; // r9@45
  int v26; // r0@45
  int v27; // r6@46
  int v28; // r4@46
  bool v29; // zf@47
  int v30; // r5@50
  bool v31; // zf@53
  _DWORD *v32; // r0@57
  int v33; // r9@58
  int v34; // r0@58
  int v35; // r6@59
  int v36; // r4@59
  bool v37; // zf@60
  int v38; // r5@63
  bool v39; // zf@66
  _DWORD *v40; // r0@70
  int v41; // r6@71
  unsigned int *v42; // r1@72
  unsigned int v43; // r0@74
  unsigned int *v44; // r4@78
  unsigned int v45; // r0@80
  int v46; // r6@85
  unsigned int *v47; // r1@86
  unsigned int v48; // r0@88
  unsigned int *v49; // r4@92
  unsigned int v50; // r0@94
  unsigned int *v51; // r1@100
  unsigned int v52; // r0@102
  unsigned int *v53; // r4@106
  unsigned int v54; // r0@108
  unsigned int *v55; // r1@114
  unsigned int v56; // r0@116
  unsigned int *v57; // r4@120
  unsigned int v58; // r0@122
  int v59; // [sp+0h] [bp-38h]@33
  int v60; // [sp+4h] [bp-34h]@33
  __int64 v61; // [sp+8h] [bp-30h]@39
  TradeContainerManagerController *v62; // [sp+10h] [bp-28h]@45

  v1 = this;
  v2 = *((_DWORD *)this + 19);
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
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v7 = 1;
  v2 = 0;
LABEL_11:
  v8 = 9u % dword_27F9E38;
  v9 = *((_DWORD *)v1 + 18);
  v10 = *(_DWORD *)(dword_27F9E34 + 4 * (9u % dword_27F9E38));
  if ( v7 )
    v9 = 0;
  if ( !v10 )
    goto LABEL_25;
  v11 = *(_DWORD *)v10;
  v12 = *(_DWORD *)(*(_DWORD *)v10 + 12);
  while ( 1 )
    v13 = v12 == 9;
    if ( v12 == 9 )
      v13 = *(_DWORD *)(v11 + 4) == 9;
    if ( v13 )
      break;
    v14 = *(_DWORD *)v11;
    if ( *(_DWORD *)v11 )
      v12 = *(_DWORD *)(v14 + 12);
      v10 = v11;
      v11 = *(_DWORD *)v11;
      if ( *(_DWORD *)(v14 + 12) % (unsigned int)dword_27F9E38 == v8 )
        continue;
  v15 = v10 == 0;
  if ( v10 )
    v10 = *(_DWORD *)v10;
    v15 = v10 == 0;
  if ( v15 )
LABEL_25:
    v16 = operator new(0x10u);
    *v16 = 0;
    v16[1] = 9;
    v16[2] = &unk_28898CC;
    v10 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27F9E34,
            v8,
            9u,
            (int)v16);
  v17 = std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
          (unsigned __int64 *)((char *)v1 + 20),
          (int **)(v10 + 8));
  if ( v17 )
    v18 = *(_QWORD *)(v17 + 8);
    if ( HIDWORD(v18) )
      v19 = (unsigned int *)(HIDWORD(v18) + 4);
      if ( &pthread_create )
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 + 1, v19) );
        ++*v19;
    v59 = v9;
    v60 = v2;
    if ( v2 )
      v21 = (unsigned int *)(v2 + 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 + 1, v21) );
        ++*v21;
    v61 = v18;
      v23 = (unsigned int *)(HIDWORD(v18) + 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 + 1, v23) );
        ++*v23;
    v62 = v1;
    v25 = 0x1Du % dword_27F9E38;
    v26 = *(_DWORD *)(dword_27F9E34 + 4 * (0x1Du % dword_27F9E38));
    if ( !v26 )
      goto LABEL_57;
    v27 = *(_DWORD *)v26;
    v28 = *(_DWORD *)(*(_DWORD *)v26 + 12);
    while ( 1 )
      v29 = v28 == 29;
      if ( v28 == 29 )
        v29 = *(_DWORD *)(v27 + 4) == 29;
      if ( v29 )
        break;
      v30 = *(_DWORD *)v27;
      if ( *(_DWORD *)v27 )
        v28 = *(_DWORD *)(v30 + 12);
        v26 = v27;
        v27 = *(_DWORD *)v27;
        if ( *(_DWORD *)(v30 + 12) % (unsigned int)dword_27F9E38 == v25 )
          continue;
    v31 = v26 == 0;
    if ( v26 )
      v26 = *(_DWORD *)v26;
      v31 = v26 == 0;
    if ( v31 )
LABEL_57:
      v32 = operator new(0x10u);
      *v32 = 0;
      v32[1] = 29;
      v32[2] = &unk_28898CC;
      v26 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27F9E34,
              v25,
              0x1Du,
              (int)v32);
    sub_1692898((int)&v59, (int **)(v26 + 8));
    v33 = 0x1Eu % dword_27F9E38;
    v34 = *(_DWORD *)(dword_27F9E34 + 4 * (0x1Eu % dword_27F9E38));
    if ( !v34 )
      goto LABEL_70;
    v35 = *(_DWORD *)v34;
    v36 = *(_DWORD *)(*(_DWORD *)v34 + 12);
      v37 = v36 == 30;
      if ( v36 == 30 )
        v37 = *(_DWORD *)(v35 + 4) == 30;
      if ( v37 )
      v38 = *(_DWORD *)v35;
      if ( *(_DWORD *)v35 )
        v36 = *(_DWORD *)(v38 + 12);
        v34 = v35;
        v35 = *(_DWORD *)v35;
        if ( *(_DWORD *)(v38 + 12) % (unsigned int)dword_27F9E38 == v33 )
    v39 = v34 == 0;
    if ( v34 )
      v34 = *(_DWORD *)v34;
      v39 = v34 == 0;
    if ( v39 )
LABEL_70:
      v40 = operator new(0x10u);
      *v40 = 0;
      v40[1] = 30;
      v40[2] = &unk_28898CC;
      v34 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v33,
              0x1Eu,
              (int)v40);
    sub_1692898((int)&v59, (int **)(v34 + 8));
    v41 = HIDWORD(v61);
    if ( HIDWORD(v61) )
      v42 = (unsigned int *)(HIDWORD(v61) + 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 == 1 )
        v44 = (unsigned int *)(v41 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 8))(v41);
        if ( &pthread_create )
          do
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
        else
          v45 = (*v44)--;
        if ( v45 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 12))(v41);
    v46 = v60;
    if ( v60 )
      v47 = (unsigned int *)(v60 + 4);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 == 1 )
        v49 = (unsigned int *)(v46 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v46 + 8))(v46);
            v50 = __ldrex(v49);
          while ( __strex(v50 - 1, v49) );
          v50 = (*v49)--;
        if ( v50 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v46 + 12))(v46);
      v51 = (unsigned int *)(HIDWORD(v18) + 4);
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
        v52 = (*v51)--;
      if ( v52 == 1 )
        v53 = (unsigned int *)(HIDWORD(v18) + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v18) + 8))(HIDWORD(v18));
            v54 = __ldrex(v53);
          while ( __strex(v54 - 1, v53) );
          v54 = (*v53)--;
        if ( v54 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v18) + 12))(HIDWORD(v18));
    v55 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
    else
      v56 = (*v55)--;
    if ( v56 == 1 )
      v57 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
}


int __fastcall TradeContainerManagerController::handleAutoPlace(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, void *a15, int a16, int a17, int a18, void *a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, char a44)
{
  return TradeContainerManagerController::handleAutoPlace(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           a39,
           a40,
           a41,
           a42,
           a43,
           a44);
}


unsigned int __fastcall TradeContainerManagerController::_consumeMaterials(TradeContainerManagerController *this, ItemInstance *a2, const ItemInstance *a3, int a4)
{
  TradeContainerManagerController *v4; // r10@1
  int v5; // r8@1
  int v6; // r9@1
  const ItemInstance *v7; // r7@1
  ItemInstance *v8; // r11@1
  unsigned int v9; // r1@2
  unsigned int *v10; // r0@2
  unsigned int v11; // r2@5
  unsigned int v12; // r3@6
  unsigned int v13; // r1@7
  signed int v14; // r0@7
  ContainerManagerModel *v15; // r4@11
  int v16; // r8@14
  int v17; // r0@14
  int v18; // r4@15
  int v19; // r7@15
  bool v20; // zf@16
  int v21; // r5@19
  int v22; // r5@22
  unsigned int result; // r0@34
  bool v24; // zf@35
  _DWORD *v25; // r0@39
  int *v26; // r0@40
  unsigned int *v27; // r1@47
  unsigned int *v28; // r4@53
  __int16 v29; // [sp+5h] [bp-113h]@0
  char v30; // [sp+7h] [bp-111h]@0
  int v31; // [sp+8h] [bp-110h]@22
  char v32; // [sp+Ch] [bp-10Ch]@22
  __int16 v33; // [sp+Dh] [bp-10Bh]@22
  char v34; // [sp+Fh] [bp-109h]@22
  int v35; // [sp+10h] [bp-108h]@22
  int v36; // [sp+14h] [bp-104h]@22
  int v37; // [sp+18h] [bp-100h]@22
  int v38; // [sp+20h] [bp-F8h]@32
  void *v39; // [sp+3Ch] [bp-DCh]@30
  void *v40; // [sp+4Ch] [bp-CCh]@28
  int v41; // [sp+60h] [bp-B8h]@22
  int v42; // [sp+68h] [bp-B0h]@26
  void *v43; // [sp+84h] [bp-94h]@24
  void *ptr; // [sp+94h] [bp-84h]@22
  char v45; // [sp+A8h] [bp-70h]@40
  unsigned int v46; // [sp+B0h] [bp-68h]@44
  void *v47; // [sp+CCh] [bp-4Ch]@42
  void *v48; // [sp+DCh] [bp-3Ch]@40

  v4 = this;
  v5 = a4;
  v6 = *((_DWORD *)this + 19);
  v7 = a3;
  v8 = a2;
  if ( v6 )
  {
    v9 = *(_DWORD *)(v6 + 4);
    v10 = (unsigned int *)(v6 + 4);
    while ( v9 )
    {
      __dmb();
      v11 = __ldrex(v10);
      if ( v11 == v9 )
      {
        v12 = __strex(v9 + 1, v10);
        v9 = v11;
        if ( !v12 )
        {
          __dmb();
          v13 = *v10;
          v14 = 0;
          if ( !v13 )
            v14 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v14 = 1;
  v6 = 0;
LABEL_11:
  v15 = (ContainerManagerModel *)*((_DWORD *)v4 + 18);
  if ( v14 )
    v15 = 0;
  if ( *((_BYTE *)v8 + 14) >= (unsigned int)*((_BYTE *)v7 + 14) )
    v22 = ContainerManagerModel::getPlayer(v15);
    v31 = 99999;
    v32 = -22;
    v34 = v30;
    v33 = v29;
    v35 = 0;
    v36 = 0;
    ItemInstance::ItemInstance((ItemInstance *)&v37, (int)&ItemInstance::EMPTY_ITEM);
    ItemInstance::ItemInstance((ItemInstance *)&v41, (int)v7);
    InventoryTransactionManager::addAction(v22 + 5152, (int)&v31);
    if ( ptr )
      operator delete(ptr);
    if ( v43 )
      operator delete(v43);
    if ( v42 )
      (*(void (**)(void))(*(_DWORD *)v42 + 4))();
    v42 = 0;
    if ( v40 )
      operator delete(v40);
    if ( v39 )
      operator delete(v39);
    if ( v38 )
      (*(void (**)(void))(*(_DWORD *)v38 + 4))();
    v38 = 0;
    ItemInstance::remove(v8, *((_BYTE *)v7 + 14));
    result = (*(int (__fastcall **)(ContainerManagerModel *, int, ItemInstance *))(*(_DWORD *)v15 + 28))(v15, v5, v8);
  else
    v16 = 0x1Du % dword_27F9E38;
    v17 = *(_DWORD *)(dword_27F9E34 + 4 * (0x1Du % dword_27F9E38));
    if ( !v17 )
      goto LABEL_39;
    v18 = *(_DWORD *)v17;
    v19 = *(_DWORD *)(*(_DWORD *)v17 + 12);
    while ( 1 )
      v20 = v19 == 29;
      if ( v19 == 29 )
        v20 = *(_DWORD *)(v18 + 4) == 29;
      if ( v20 )
        break;
      v21 = *(_DWORD *)v18;
      if ( *(_DWORD *)v18 )
        v19 = *(_DWORD *)(v21 + 12);
        v17 = v18;
        v18 = *(_DWORD *)v18;
        if ( *(_DWORD *)(v21 + 12) % (unsigned int)dword_27F9E38 == v16 )
          continue;
    v24 = v17 == 0;
    if ( v17 )
      v17 = *(_DWORD *)v17;
      v24 = v17 == 0;
    if ( v24 )
LABEL_39:
      v25 = operator new(0x10u);
      *v25 = 0;
      v25[1] = 29;
      v25[2] = &unk_28898CC;
      v17 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27F9E34,
              v16,
              0x1Du,
              (int)v25);
    v26 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                   (unsigned __int64 *)((char *)v4 + 20),
                   (int **)(v17 + 8));
    ContainerController::removeItem((ContainerController *)&v45, *v26, 0, 0);
    if ( v48 )
      operator delete(v48);
    if ( v47 )
      operator delete(v47);
    result = v46;
    if ( v46 )
      result = (*(int (**)(void))(*(_DWORD *)v46 + 4))();
    v27 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
      do
        result = __ldrex(v27);
      while ( __strex(result - 1, v27) );
    else
      result = (*v27)--;
    if ( result == 1 )
      v28 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v28);
        while ( __strex(result - 1, v28) );
        result = (*v28)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return result;
}


int __fastcall TradeContainerManagerController::_clearSlot(int a1, int **a2)
{
  int *v2; // r0@1
  int result; // r0@5
  int v4; // [sp+0h] [bp-50h]@1
  int v5; // [sp+8h] [bp-48h]@5
  void *v6; // [sp+24h] [bp-2Ch]@3
  void *ptr; // [sp+34h] [bp-1Ch]@1

  v2 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                (unsigned __int64 *)(a1 + 20),
                a2);
  ContainerController::removeItem((ContainerController *)&v4, *v2, 0, 0);
  if ( ptr )
    operator delete(ptr);
  if ( v6 )
    operator delete(v6);
  result = v5;
  if ( v5 )
    result = (*(int (**)(void))(*(_DWORD *)v5 + 4))();
  return result;
}


void __fastcall TradeContainerManagerController::~TradeContainerManagerController(TradeContainerManagerController *this)
{
  TradeContainerManagerController::~TradeContainerManagerController(this);
}


void __fastcall TradeContainerManagerController::setRecipeIndex(TradeContainerManagerController *this, int a2)
{
  TradeContainerManagerController *v2; // r8@1
  int v3; // r4@1
  int v4; // r9@1
  unsigned int v5; // r1@2
  unsigned int *v6; // r0@2
  unsigned int v7; // r2@5
  unsigned int v8; // r3@6
  unsigned int v9; // r1@7
  signed int v10; // r0@7
  TradeContainerManagerModel *v11; // r6@11
  Entity *v12; // r0@13
  int v13; // r0@14
  int v14; // r11@14
  int v15; // r6@17
  int v16; // r0@17
  int v17; // r10@18
  int v18; // r5@18
  bool v19; // zf@19
  int v20; // r4@22
  unsigned int *v21; // r1@27
  unsigned int v22; // r0@29
  unsigned int *v23; // r4@33
  unsigned int v24; // r0@35
  bool v25; // zf@41
  _DWORD *v26; // r0@45
  TradeIngredientContainerController **v27; // r5@46
  int v28; // r10@46
  int v29; // r0@46
  int v30; // r6@47
  int v31; // r5@47
  bool v32; // zf@48
  int v33; // r4@51
  bool v34; // zf@54
  _DWORD *v35; // r0@58
  TradeIngredientContainerController *v36; // r6@59
  const ItemInstance *v37; // r0@59
  char *v38; // r0@59
  TradeIngredientContainerController *v39; // [sp+0h] [bp-30h]@46
  int v40; // [sp+8h] [bp-28h]@17

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 19);
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
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v10 = 1;
  v4 = 0;
LABEL_11:
  v11 = (TradeContainerManagerModel *)*((_DWORD *)v2 + 18);
  if ( v10 )
    v11 = 0;
  v12 = (Entity *)TradeContainerManagerModel::getEntity(v11);
  if ( v12
    && (v13 = Entity::getTradeOffers(v12), v14 = v13, v3 >= 0)
    && v13
    && 1332920885 * ((signed int)((*(_QWORD *)(v13 + 4) >> 32) - *(_QWORD *)(v13 + 4)) >> 3) > v3 )
    *((_DWORD *)v2 + 20) = v3;
    TradeContainerManagerModel::setCurrentRecipeIndex(v11, v3);
    v40 = v3;
    v15 = 0x1Du % dword_27F9E38;
    v16 = *(_DWORD *)(dword_27F9E34 + 4 * (0x1Du % dword_27F9E38));
    if ( !v16 )
      goto LABEL_45;
    v17 = *(_DWORD *)v16;
    v18 = *(_DWORD *)(*(_DWORD *)v16 + 12);
    while ( 1 )
      v19 = v18 == 29;
      if ( v18 == 29 )
        v19 = *(_DWORD *)(v17 + 4) == 29;
      if ( v19 )
        break;
      v20 = *(_DWORD *)v17;
      if ( *(_DWORD *)v17 )
        v18 = *(_DWORD *)(v20 + 12);
        v16 = v17;
        v17 = *(_DWORD *)v17;
        if ( *(_DWORD *)(v20 + 12) % (unsigned int)dword_27F9E38 == v15 )
          continue;
    v25 = v16 == 0;
    if ( v16 )
      v16 = *(_DWORD *)v16;
      v25 = v16 == 0;
    if ( v25 )
LABEL_45:
      v26 = operator new(0x10u);
      *v26 = 0;
      v26[1] = 29;
      v26[2] = &unk_28898CC;
      v16 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27F9E34,
              v15,
              0x1Du,
              (int)v26);
    v27 = (TradeIngredientContainerController **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                                   (unsigned __int64 *)((char *)v2 + 20),
                                                   (int **)(v16 + 8));
    v28 = 0x1Eu % dword_27F9E38;
    v39 = *v27;
    v29 = *(_DWORD *)(dword_27F9E34 + 4 * (0x1Eu % dword_27F9E38));
    if ( !v29 )
      goto LABEL_58;
    v30 = *(_DWORD *)v29;
    v31 = *(_DWORD *)(*(_DWORD *)v29 + 12);
      v32 = v31 == 30;
      if ( v31 == 30 )
        v32 = *(_DWORD *)(v30 + 4) == 30;
      if ( v32 )
      v33 = *(_DWORD *)v30;
      if ( *(_DWORD *)v30 )
        v31 = *(_DWORD *)(v33 + 12);
        v29 = v30;
        v30 = *(_DWORD *)v30;
        if ( *(_DWORD *)(v33 + 12) % (unsigned int)dword_27F9E38 == v28 )
    v34 = v29 == 0;
    if ( v29 )
      v29 = *(_DWORD *)v29;
      v34 = v29 == 0;
    if ( v34 )
LABEL_58:
      v35 = operator new(0x10u);
      *v35 = 0;
      v35[1] = 30;
      v35[2] = &unk_28898CC;
      v29 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v28,
              0x1Eu,
              (int)v35);
    v36 = *(TradeIngredientContainerController **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                                    (unsigned __int64 *)((char *)v2 + 20),
                                                    (int **)(v29 + 8));
    v37 = (const ItemInstance *)MerchantRecipe::getBuyAItem((MerchantRecipe *)(*(_DWORD *)(v14 + 4) + 232 * v40));
    TradeIngredientContainerController::setTradeItem(v39, v37);
    v38 = MerchantRecipe::getBuyBItem((MerchantRecipe *)(*(_DWORD *)(v14 + 4) + 232 * v40));
    TradeIngredientContainerController::setTradeItem(v36, (const ItemInstance *)v38);
    TradeContainerManagerController::recipeChanged(v2);
    TradeContainerManagerController::_createResult(v2, 0);
  else
    *((_DWORD *)v2 + 20) = 0;
    v21 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    else
      v22 = (*v21)--;
    if ( v22 == 1 )
      v23 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
}


ContainerManagerController *__fastcall TradeContainerManagerController::~TradeContainerManagerController(TradeContainerManagerController *this)
{
  TradeContainerManagerController *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26ECF18;
  v2 = *((_DWORD *)this + 19);
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
  return j_j_j__ZN31LevelContainerManagerControllerD2Ev(v1);
}


void __fastcall TradeContainerManagerController::_createResult(TradeContainerManagerController *this, int a2)
{
  TradeContainerManagerController *v2; // r10@1
  int v3; // r8@1
  int v4; // r9@1
  unsigned int v5; // r1@2
  unsigned int *v6; // r0@2
  unsigned int v7; // r2@5
  unsigned int v8; // r3@6
  unsigned int v9; // r1@7
  signed int v10; // r0@7
  TradeContainerManagerModel *v11; // r6@11
  bool v12; // zf@13
  Entity *v13; // r5@19
  signed int v14; // r0@19
  int v15; // r0@21
  int v16; // r4@21
  int v17; // r3@22
  MerchantRecipe *v18; // r0@22
  MerchantRecipe *v19; // r7@22
  bool v20; // zf@24
  MerchantRecipe *v21; // r0@29
  MerchantRecipe *v22; // r4@29
  char *v23; // r0@31
  char *v24; // r0@32
  TradeableComponent *v25; // r0@33
  __int64 v26; // r4@51
  void *v27; // r0@52
  void *v28; // r0@54
  int v29; // r0@56
  unsigned int *v30; // r1@63
  unsigned int v31; // r0@65
  unsigned int *v32; // r4@69
  unsigned int v33; // r0@71
  int v34; // [sp+0h] [bp-108h]@13
  int v35; // [sp+8h] [bp-100h]@37
  void *v36; // [sp+24h] [bp-E4h]@35
  void *ptr; // [sp+34h] [bp-D4h]@33
  int v38; // [sp+48h] [bp-C0h]@13
  int v39; // [sp+50h] [bp-B8h]@43
  char v40; // [sp+56h] [bp-B2h]@28
  char v41; // [sp+57h] [bp-B1h]@24
  void *v42; // [sp+6Ch] [bp-9Ch]@41
  void *v43; // [sp+7Ch] [bp-8Ch]@39
  int v44; // [sp+90h] [bp-78h]@13
  int v45; // [sp+98h] [bp-70h]@49
  char v46; // [sp+9Eh] [bp-6Ah]@17
  char v47; // [sp+9Fh] [bp-69h]@13
  void *v48; // [sp+B4h] [bp-54h]@47
  void *v49; // [sp+C4h] [bp-44h]@45
  int v50; // [sp+DCh] [bp-2Ch]@13
  int v51; // [sp+E0h] [bp-28h]@51

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 19);
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
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v10 = 1;
  v4 = 0;
LABEL_11:
  v11 = (TradeContainerManagerModel *)*((_DWORD *)v2 + 18);
  if ( v10 )
    v11 = 0;
  (*(void (__fastcall **)(int *, TradeContainerManagerModel *))(*(_DWORD *)v11 + 24))(&v50, v11);
  ItemInstance::ItemInstance((ItemInstance *)&v44, v50);
  ItemInstance::ItemInstance((ItemInstance *)&v38, v50 + 72);
  ItemInstance::ItemInstance((int)&v34);
  v12 = v47 == 0;
  if ( v47 )
    v12 = v44 == 0;
  if ( v12 || ItemInstance::isNull((ItemInstance *)&v44) || !v46 )
    ItemInstance::operator=((int)&v44, (int)&v38);
    ItemInstance::setNull((ItemInstance *)&v38);
  v13 = (Entity *)TradeContainerManagerModel::getEntity(v11);
  v14 = ItemInstance::isNull((ItemInstance *)&v44);
  if ( v13 )
    if ( (v14 ^ 1) == 1 )
      v15 = Entity::getTradeOffers(v13);
      v16 = v15;
      if ( v15 )
        v17 = *((_DWORD *)v2 + 20);
        v18 = (MerchantRecipe *)(*(int (**)(void))(*(_DWORD *)v15 + 8))();
        v19 = v18;
        if ( v18 && !MerchantRecipe::isDeprecated(v18) )
          v24 = MerchantRecipe::getSellItem(v19);
          ItemInstance::operator=((int)&v34, (int)v24);
        else
          v20 = v41 == 0;
          if ( v41 )
            v20 = v38 == 0;
          if ( !v20 && !ItemInstance::isNull((ItemInstance *)&v38) )
          {
            if ( v40 )
            {
              v21 = (MerchantRecipe *)(*(int (__fastcall **)(int, int *, int *, _DWORD))(*(_DWORD *)v16 + 8))(
                                        v16,
                                        &v38,
                                        &v44,
                                        *((_DWORD *)v2 + 20));
              v22 = v21;
              if ( v21 )
              {
                if ( !MerchantRecipe::isDeprecated(v21) )
                {
                  v23 = MerchantRecipe::getSellItem(v22);
                  ItemInstance::operator=((int)&v34, (int)v23);
                }
              }
            }
          }
  v25 = (TradeableComponent *)Entity::getTradeableComponent(v13);
  TradeableComponent::notifyTradeUpdated(v25, (ItemInstance *)&v34, v3);
  (*(void (__fastcall **)(TradeContainerManagerModel *, signed int, int *))(*(_DWORD *)v11 + 28))(v11, 2, &v34);
  if ( ptr )
    operator delete(ptr);
  if ( v36 )
    operator delete(v36);
  if ( v35 )
    (*(void (**)(void))(*(_DWORD *)v35 + 4))();
  if ( v43 )
    operator delete(v43);
  if ( v42 )
    operator delete(v42);
  if ( v39 )
    (*(void (**)(void))(*(_DWORD *)v39 + 4))();
  if ( v49 )
    operator delete(v49);
  if ( v48 )
    operator delete(v48);
  if ( v45 )
    (*(void (**)(void))(*(_DWORD *)v45 + 4))();
  v26 = *(_QWORD *)&v50;
  if ( v50 != v51 )
    do
      v27 = *(void **)(v26 + 52);
      if ( v27 )
        operator delete(v27);
      v28 = *(void **)(v26 + 36);
      if ( v28 )
        operator delete(v28);
      v29 = *(_DWORD *)(v26 + 8);
      if ( v29 )
        (*(void (**)(void))(*(_DWORD *)v29 + 4))();
      *(_DWORD *)(v26 + 8) = 0;
      LODWORD(v26) = v26 + 72;
    while ( HIDWORD(v26) != (_DWORD)v26 );
    LODWORD(v26) = v50;
  if ( (_DWORD)v26 )
    operator delete((void *)v26);
    v30 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
    else
      v31 = (*v30)--;
    if ( v31 == 1 )
      v32 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
        __dmb();
        do
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
}


void __fastcall TradeContainerManagerController::recipeChanged(TradeContainerManagerController *this)
{
  TradeContainerManagerController::recipeChanged(this);
}


void __fastcall TradeContainerManagerController::handlePlaceOne(TradeContainerManagerController *a1, ContainerItemStack *a2, int **a3, int a4)
{
  TradeContainerManagerController *v4; // r10@1
  ContainerItemStack *v5; // r9@1
  int **v6; // r6@1
  int v7; // r4@1
  int v8; // r0@1
  int v9; // r8@2
  int v10; // r7@2
  bool v11; // zf@3
  int v12; // r11@6
  bool v13; // zf@9
  _DWORD *v14; // r0@13
  _DWORD *v15; // r1@14
  size_t v16; // r2@14
  int v17; // [sp+0h] [bp-28h]@1

  v4 = a1;
  v17 = a4;
  v5 = a2;
  v6 = a3;
  v7 = 0x1Fu % dword_27F9E38;
  v8 = *(_DWORD *)(dword_27F9E34 + 4 * (0x1Fu % dword_27F9E38));
  if ( !v8 )
    goto LABEL_13;
  v9 = *(_DWORD *)v8;
  v10 = *(_DWORD *)(*(_DWORD *)v8 + 12);
  while ( 1 )
  {
    v11 = v10 == 31;
    if ( v10 == 31 )
      v11 = *(_DWORD *)(v9 + 4) == 31;
    if ( v11 )
      break;
    v12 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      v10 = *(_DWORD *)(v12 + 12);
      v8 = v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v12 + 12) % (unsigned int)dword_27F9E38 == v7 )
        continue;
    }
  }
  v13 = v8 == 0;
  if ( v8 )
    v8 = *(_DWORD *)v8;
    v13 = v8 == 0;
  if ( v13 )
LABEL_13:
    v14 = operator new(0x10u);
    *v14 = 0;
    v14[1] = 31;
    v14[2] = &unk_28898CC;
    v8 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F9E34,
           v7,
           0x1Fu,
           (int)v14);
  v15 = *(_DWORD **)(v8 + 8);
  v16 = *(*v6 - 3);
  if ( v16 == *(v15 - 3) && !memcmp(*v6, v15, v16) )
    j_j_j__ZN31TradeContainerManagerController16_createTradeItemER18ContainerItemStack(v4, v5);
  else
    j_j_j__ZN26ContainerManagerController14handlePlaceOneER18ContainerItemStackRKSsi((int)v4, v5, v6, v17);
}


char *__fastcall TradeContainerManagerController::_setupCallbacks(TradeContainerManagerController *this)
{
  TradeContainerManagerController *v1; // r8@1
  int v2; // r11@1
  int v3; // r0@1
  int v4; // r4@2
  int v5; // r5@2
  bool v6; // zf@3
  int v7; // r6@6
  bool v8; // zf@9
  _DWORD *v9; // r0@13
  int *v10; // r0@14
  int v11; // r10@14
  unsigned int v12; // r1@15
  unsigned int *v13; // r0@15
  unsigned int v14; // r2@18
  unsigned int v15; // r3@19
  signed int v16; // r1@20
  int v17; // r0@24
  int v18; // r7@24
  unsigned int *v19; // r2@27
  unsigned int v20; // r1@29
  _DWORD *v21; // r0@35
  __int64 v22; // r1@35
  int v23; // r11@37
  int v24; // r0@37
  int v25; // r7@38
  int v26; // r6@38
  bool v27; // zf@39
  int v28; // r4@42
  bool v29; // zf@45
  _DWORD *v30; // r0@49
  int *v31; // r0@50
  int v32; // r6@50
  unsigned int v33; // r1@51
  unsigned int *v34; // r0@51
  unsigned int v35; // r2@54
  unsigned int v36; // r3@55
  signed int v37; // r1@56
  int v38; // r0@60
  int v39; // r7@60
  unsigned int *v40; // r2@63
  unsigned int v41; // r1@65
  _DWORD *v42; // r0@71
  __int64 v43; // r1@71
  char *result; // r0@71
  unsigned int *v45; // r1@74
  unsigned int *v46; // r4@80
  unsigned int *v47; // r1@88
  unsigned int *v48; // r4@94
  _DWORD *v49; // [sp+4h] [bp-54h]@71
  __int64 v50; // [sp+Ch] [bp-4Ch]@71
  int v51; // [sp+14h] [bp-44h]@50
  int v52; // [sp+18h] [bp-40h]@50
  _DWORD *v53; // [sp+1Ch] [bp-3Ch]@35
  __int64 v54; // [sp+24h] [bp-34h]@35
  int v55; // [sp+2Ch] [bp-2Ch]@14
  int v56; // [sp+30h] [bp-28h]@14

  v1 = this;
  v2 = 0x1Du % dword_27F9E38;
  v3 = *(_DWORD *)(dword_27F9E34 + 4 * (0x1Du % dword_27F9E38));
  if ( !v3 )
    goto LABEL_13;
  v4 = *(_DWORD *)v3;
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  while ( 1 )
  {
    v6 = v5 == 29;
    if ( v5 == 29 )
      v6 = *(_DWORD *)(v4 + 4) == 29;
    if ( v6 )
      break;
    v7 = *(_DWORD *)v4;
    if ( *(_DWORD *)v4 )
    {
      v5 = *(_DWORD *)(v7 + 12);
      v3 = v4;
      v4 = *(_DWORD *)v4;
      if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27F9E38 == v2 )
        continue;
    }
  }
  v8 = v3 == 0;
  if ( v3 )
    v3 = *(_DWORD *)v3;
    v8 = v3 == 0;
  if ( v8 )
LABEL_13:
    v9 = operator new(0x10u);
    *v9 = 0;
    v9[1] = 29;
    v9[2] = &unk_28898CC;
    v3 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F9E34,
           v2,
           0x1Du,
           (int)v9);
  v10 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                 (unsigned __int64 *)((char *)v1 + 20),
                 (int **)(v3 + 8));
  ContainerController::getContainerModel((ContainerController *)&v55, *v10);
  v11 = v56;
  if ( v56 )
    v12 = *(_DWORD *)(v56 + 4);
    v13 = (unsigned int *)(v56 + 4);
    do
      while ( 1 )
      {
        if ( !v12 )
        {
          v16 = 1;
          v11 = 0;
          goto LABEL_24;
        }
        __dmb();
        v14 = __ldrex(v13);
        if ( v14 == v12 )
          break;
        __clrex();
        v12 = v14;
      }
      v15 = __strex(v12 + 1, v13);
      v12 = v14;
    while ( v15 );
    __dmb();
    v16 = 0;
    if ( !*v13 )
      v16 = 1;
LABEL_24:
    v17 = v56;
    v18 = v55;
    if ( v16 )
      v18 = 0;
    if ( v56 )
      v19 = (unsigned int *)(v56 + 8);
      if ( &pthread_create )
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      else
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (**)(void))(*(_DWORD *)v17 + 12))();
  else
    v18 = 0;
    v11 = 0;
  v21 = operator new(4u);
  LODWORD(v22) = sub_16944A0;
  *v21 = v1;
  HIDWORD(v22) = sub_1694228;
  v53 = v21;
  v54 = v22;
  ContainerModel::registerOnContainerChangedCallback(v18, (int)&v53);
  if ( (_DWORD)v54 )
    ((void (*)(void))v54)();
  v23 = 0x1Eu % dword_27F9E38;
  v24 = *(_DWORD *)(dword_27F9E34 + 4 * (0x1Eu % dword_27F9E38));
  if ( !v24 )
    goto LABEL_49;
  v25 = *(_DWORD *)v24;
  v26 = *(_DWORD *)(*(_DWORD *)v24 + 12);
    v27 = v26 == 30;
    if ( v26 == 30 )
      v27 = *(_DWORD *)(v25 + 4) == 30;
    if ( v27 )
    v28 = *(_DWORD *)v25;
    if ( *(_DWORD *)v25 )
      v26 = *(_DWORD *)(v28 + 12);
      v24 = v25;
      v25 = *(_DWORD *)v25;
      if ( *(_DWORD *)(v28 + 12) % (unsigned int)dword_27F9E38 == v23 )
  v29 = v24 == 0;
  if ( v24 )
    v24 = *(_DWORD *)v24;
    v29 = v24 == 0;
  if ( v29 )
LABEL_49:
    v30 = operator new(0x10u);
    *v30 = 0;
    v30[1] = 30;
    v30[2] = &unk_28898CC;
    v24 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27F9E34,
            v23,
            0x1Eu,
            (int)v30);
  v31 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                 (int **)(v24 + 8));
  ContainerController::getContainerModel((ContainerController *)&v51, *v31);
  v32 = v52;
  if ( v52 )
    v33 = *(_DWORD *)(v52 + 4);
    v34 = (unsigned int *)(v52 + 4);
        if ( !v33 )
          v37 = 1;
          v32 = 0;
          goto LABEL_60;
        v35 = __ldrex(v34);
        if ( v35 == v33 )
        v33 = v35;
      v36 = __strex(v33 + 1, v34);
      v33 = v35;
    while ( v36 );
    v37 = 0;
    if ( !*v34 )
      v37 = 1;
LABEL_60:
    v38 = v52;
    v39 = v51;
    if ( v37 )
      v39 = 0;
    if ( v52 )
      v40 = (unsigned int *)(v52 + 8);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 == 1 )
        (*(void (**)(void))(*(_DWORD *)v38 + 12))();
    v39 = 0;
    v32 = 0;
  v42 = operator new(4u);
  LODWORD(v43) = sub_1694750;
  *v42 = v1;
  HIDWORD(v43) = sub_16944D8;
  v49 = v42;
  v50 = v43;
  result = ContainerModel::registerOnContainerChangedCallback(v39, (int)&v49);
  if ( (_DWORD)v50 )
    result = (char *)((int (*)(void))v50)();
  if ( v32 )
    v45 = (unsigned int *)(v32 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = (char *)__ldrex(v45);
      while ( __strex((unsigned int)(result - 1), v45) );
    else
      result = (char *)(*v45)--;
    if ( result == (char *)1 )
      v46 = (unsigned int *)(v32 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 8))(v32);
          result = (char *)__ldrex(v46);
        while ( __strex((unsigned int)(result - 1), v46) );
        result = (char *)(*v46)--;
      if ( result == (char *)1 )
        result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v32 + 12))(v32);
  if ( v11 )
    v47 = (unsigned int *)(v11 + 4);
        result = (char *)__ldrex(v47);
      while ( __strex((unsigned int)(result - 1), v47) );
      result = (char *)(*v47)--;
      v48 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
          result = (char *)__ldrex(v48);
        while ( __strex((unsigned int)(result - 1), v48) );
        result = (char *)(*v48)--;
        result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  return result;
}


void __fastcall TradeContainerManagerController::handlePlaceOne(TradeContainerManagerController *a1, ContainerItemStack *a2, int **a3, int a4)
{
  TradeContainerManagerController::handlePlaceOne(a1, a2, a3, a4);
}


void __fastcall TradeContainerManagerController::recipeChanged(TradeContainerManagerController *this)
{
  TradeContainerManagerController *v1; // r5@1
  int v2; // r4@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  signed int v7; // r1@7
  TradeContainerManagerModel *v8; // r0@11
  unsigned int *v9; // r1@14
  unsigned int v10; // r0@16
  unsigned int *v11; // r5@20
  unsigned int v12; // r0@22

  v1 = this;
  v2 = *((_DWORD *)this + 19);
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
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v7 = 1;
  v2 = 0;
LABEL_11:
  v8 = (TradeContainerManagerModel *)*((_DWORD *)v1 + 18);
  if ( v7 )
    v8 = 0;
  TradeContainerManagerModel::recipeChanged(v8);
  TradeContainerManagerController::_moveItemsBackToInventory(v1);
    v9 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    else
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
}


int __fastcall TradeContainerManagerController::_getActiveRecipe(TradeContainerManagerController *this)
{
  TradeContainerManagerController *v1; // r5@1
  int v2; // r4@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  signed int v7; // r1@7
  TradeContainerManagerModel *v8; // r0@11
  Entity *v9; // r0@13
  int v10; // r0@14
  int v11; // r1@15
  __int64 v12; // kr00_8@16
  int v13; // r5@17
  unsigned int *v14; // r1@23
  unsigned int v15; // r0@25
  unsigned int *v16; // r6@29
  unsigned int v17; // r0@31

  v1 = this;
  v2 = *((_DWORD *)this + 19);
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
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v7 = 1;
  v2 = 0;
LABEL_11:
  v8 = (TradeContainerManagerModel *)*((_DWORD *)v1 + 18);
  if ( v7 )
    v8 = 0;
  v9 = (Entity *)TradeContainerManagerModel::getEntity(v8);
  if ( v9 )
    v10 = Entity::getTradeOffers(v9);
    if ( v10 )
      v11 = *((_DWORD *)v1 + 20);
      if ( v11 < 0 )
        v13 = 0;
        v12 = *(_QWORD *)(v10 + 4);
        if ( v11 >= 1332920885 * ((HIDWORD(v12) - (signed int)v12) >> 3) )
          v13 = 0;
        else
          v13 = v12 + 232 * v11;
    else
      v13 = 0;
  else
    v13 = 0;
    v14 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return v13;
}


void __fastcall TradeContainerManagerController::~TradeContainerManagerController(TradeContainerManagerController *this)
{
  TradeContainerManagerController *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26ECF18;
  v2 = *((_DWORD *)this + 19);
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
  LevelContainerManagerController::~LevelContainerManagerController(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall TradeContainerManagerController::handleTakeAmount(TradeContainerManagerController *a1, ContainerItemStack *a2, int a3, int **a4, int a5)
{
  TradeContainerManagerController *v5; // r10@1
  ContainerItemStack *v6; // r9@1
  int **v7; // r4@1
  int v8; // r6@1
  int v9; // r0@1
  int v10; // r8@2
  int v11; // r7@2
  bool v12; // zf@3
  int v13; // r11@6
  bool v14; // zf@9
  _DWORD *v15; // r0@13
  _DWORD *v16; // r1@14
  size_t v17; // r2@14
  int v18; // [sp+0h] [bp-28h]@1

  v5 = a1;
  v18 = a3;
  v6 = a2;
  v7 = a4;
  v8 = 0x1Fu % dword_27F9E38;
  v9 = *(_DWORD *)(dword_27F9E34 + 4 * (0x1Fu % dword_27F9E38));
  if ( !v9 )
    goto LABEL_13;
  v10 = *(_DWORD *)v9;
  v11 = *(_DWORD *)(*(_DWORD *)v9 + 12);
  while ( 1 )
  {
    v12 = v11 == 31;
    if ( v11 == 31 )
      v12 = *(_DWORD *)(v10 + 4) == 31;
    if ( v12 )
      break;
    v13 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 )
    {
      v11 = *(_DWORD *)(v13 + 12);
      v9 = v10;
      v10 = *(_DWORD *)v10;
      if ( *(_DWORD *)(v13 + 12) % (unsigned int)dword_27F9E38 == v8 )
        continue;
    }
  }
  v14 = v9 == 0;
  if ( v9 )
    v9 = *(_DWORD *)v9;
    v14 = v9 == 0;
  if ( v14 )
LABEL_13:
    v15 = operator new(0x10u);
    *v15 = 0;
    v15[1] = 31;
    v15[2] = &unk_28898CC;
    v9 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F9E34,
           v8,
           0x1Fu,
           (int)v15);
  v16 = *(_DWORD **)(v9 + 8);
  v17 = *(*v7 - 3);
  if ( v17 == *(v16 - 3) && !memcmp(*v7, v16, v17) )
    j_j_j__ZN31TradeContainerManagerController16_createTradeItemER18ContainerItemStack(v5, v6);
  else
    j_j_j__ZN26ContainerManagerController16handleTakeAmountER18ContainerItemStackiRKSsi((int)v5, (int)v6, v18, v7, a5);
}


void __fastcall TradeContainerManagerController::handleTakeHalf(TradeContainerManagerController *a1, ContainerItemStack *a2, int **a3, int a4)
{
  TradeContainerManagerController::handleTakeHalf(a1, a2, a3, a4);
}


void __fastcall TradeContainerManagerController::setRecipeIndex(TradeContainerManagerController *this, int a2)
{
  TradeContainerManagerController::setRecipeIndex(this, a2);
}
