

unsigned int __fastcall FurnaceContainerManagerController::getBurnProgress(FurnaceContainerManagerController *this, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r3@2
  unsigned int *v4; // r2@2
  unsigned int v5; // r6@5
  unsigned int v6; // r5@6
  unsigned int v7; // r3@7
  signed int v8; // r2@7
  FurnaceContainerManagerModel *v9; // r0@11
  unsigned int v10; // r5@13
  unsigned int *v11; // r1@14
  unsigned int v12; // r0@16
  unsigned int *v13; // r6@20
  unsigned int v14; // r0@22

  v2 = *((_DWORD *)this + 17);
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
  v9 = (FurnaceContainerManagerModel *)*((_DWORD *)this + 16);
  if ( v8 )
    v9 = 0;
  v10 = FurnaceContainerManagerModel::getBurnProgress(v9, a2);
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


ContainerManagerController *__fastcall FurnaceContainerManagerController::~FurnaceContainerManagerController(FurnaceContainerManagerController *this)
{
  ContainerManagerController *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26ECE00;
  v2 = *((_DWORD *)this + 17);
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
  return j_j_j__ZN26ContainerManagerControllerD2Ev(v1);
}


char *__fastcall FurnaceContainerManagerController::getOutputName(FurnaceContainerManagerController *this)
{
  int v1; // r4@1
  unsigned int v2; // r2@2
  unsigned int *v3; // r1@2
  unsigned int v4; // r3@5
  unsigned int v5; // r6@6
  unsigned int v6; // r2@7
  signed int v7; // r1@7
  FurnaceContainerManagerModel *v8; // r0@11
  char *v9; // r5@13
  unsigned int *v10; // r1@14
  unsigned int v11; // r0@16
  unsigned int *v12; // r6@20
  unsigned int v13; // r0@22

  v1 = *((_DWORD *)this + 17);
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
  v8 = (FurnaceContainerManagerModel *)*((_DWORD *)this + 16);
  if ( v7 )
    v8 = 0;
  v9 = FurnaceContainerManagerModel::getOutputName(v8);
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


signed int __fastcall FurnaceContainerManagerController::handlePlaceOne(int a1, ContainerItemStack *a2, int **a3, int a4)
{
  int v4; // r10@1
  ContainerItemStack *v5; // r9@1
  int **v6; // r6@1
  int v7; // r5@1
  int v8; // r0@1
  int v9; // r8@2
  int v10; // r7@2
  bool v11; // zf@3
  int v12; // r11@6
  bool v13; // zf@9
  _DWORD *v14; // r0@13
  _DWORD *v15; // r1@14
  size_t v16; // r2@14
  signed int result; // r0@16
  int v18; // r4@17
  int v19; // [sp+4h] [bp-BCh]@1
  char v20; // [sp+8h] [bp-B8h]@17
  int v21; // [sp+10h] [bp-B0h]@27
  void *v22; // [sp+2Ch] [bp-94h]@25
  void *v23; // [sp+3Ch] [bp-84h]@23
  char v24; // [sp+50h] [bp-70h]@17
  int v25; // [sp+58h] [bp-68h]@21
  void *v26; // [sp+74h] [bp-4Ch]@19
  void *ptr; // [sp+84h] [bp-3Ch]@17

  v4 = a1;
  v19 = a4;
  v5 = a2;
  v6 = a3;
  v7 = 0x16u % dword_27F9B38;
  v8 = *(_DWORD *)(dword_27F9B34 + 4 * (0x16u % dword_27F9B38));
  if ( !v8 )
    goto LABEL_13;
  v9 = *(_DWORD *)v8;
  v10 = *(_DWORD *)(*(_DWORD *)v8 + 12);
  while ( 1 )
  {
    v11 = v10 == 22;
    if ( v10 == 22 )
      v11 = *(_DWORD *)(v9 + 4) == 22;
    if ( v11 )
      break;
    v12 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      v10 = *(_DWORD *)(v12 + 12);
      v8 = v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v12 + 12) % (unsigned int)dword_27F9B38 == v7 )
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
    v14[1] = 22;
    v14[2] = &unk_28898CC;
    v8 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F9B34,
           v7,
           0x16u,
           (int)v14);
  v15 = *(_DWORD **)(v8 + 8);
  v16 = *(*v6 - 3);
  if ( v16 == *(v15 - 3) && !memcmp(*v6, v15, v16) )
    v18 = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                       (unsigned __int64 *)(v4 + 20),
                       v6);
    ItemInstance::ItemInstance((ItemInstance *)&v20, (int)v5);
    ContainerController::addToStack((ItemInstance *)&v24, v18, v19, (int)&v20, 1);
    ItemInstance::operator=((int)v5, (int)&v24);
    if ( ptr )
      operator delete(ptr);
    if ( v26 )
      operator delete(v26);
    if ( v25 )
      (*(void (**)(void))(*(_DWORD *)v25 + 4))();
    v25 = 0;
    if ( v23 )
      operator delete(v23);
    if ( v22 )
      operator delete(v22);
    if ( v21 )
      (*(void (**)(void))(*(_DWORD *)v21 + 4))();
    result = 0;
  else
    result = j_j_j__ZN26ContainerManagerController14handlePlaceOneER18ContainerItemStackRKSsi(v4, v5, v6, v19);
  return result;
}


int __fastcall FurnaceContainerManagerController::_xpRewardMultiplier(FurnaceContainerManagerController *this, const ItemInstance *a2)
{
  ItemInstance *v2; // r4@1
  signed int v3; // r0@1
  int result; // r0@15
  __int16 v8; // r0@21
  int v10; // r1@27

  v2 = a2;
  v3 = ItemInstance::getId(a2);
  __asm { VMOV.F32        S0, #1.0 }
  if ( v3 == *(_WORD *)(Item::mDiamond + 18) )
    goto LABEL_33;
  if ( v3 == *(_WORD *)(Item::mEmerald + 18) )
  if ( v3 == *(_WORD *)(Item::mGoldIngot + 18) )
  __asm { VLDR            S0, =0.7 }
  if ( v3 == *(_WORD *)(Item::mIronIngot + 18) )
  if ( v3 == *(_WORD *)(Item::mRedStone + 18) )
  __asm { VLDR            S0, =0.35 }
  if ( v3 == *(_BYTE *)(Block::mHardenedClay + 4)
    || v3 == *(_WORD *)(Item::mPotatoBaked + 18)
    || v3 == *(_WORD *)(Item::mBeef_cooked + 18)
    || v3 == *(_WORD *)(Item::mChicken_cooked + 18)
    || v3 == *(_WORD *)(Item::mMutton_cooked + 18)
    || v3 == *(_WORD *)(Item::mRabbitCooked + 18)
    || v3 == *(_WORD *)(Item::mFish_cooked_cod + 18)
    || v3 == *(_WORD *)(Item::mFish_cooked_salmon + 18) )
  {
  }
  if ( v3 == *(_WORD *)(Item::mBrick + 18) )
    __asm
    {
      VLDREQ          S0, =0.3
      VMOVEQ          R0, S0
    }
    return result;
  __asm { VLDR            S0, =0.2 }
  if ( v3 == *(_WORD *)(Item::mDye_powder + 18) || v3 == *(_WORD *)(Item::mNetherQuartz + 18) )
LABEL_33:
    __asm { VMOV            R0, S0 }
  if ( v3 == *(_BYTE *)(Block::mSponge + 4) )
      VLDREQ          S0, =0.15
  if ( v3 != *(_WORD *)(Item::mCoal + 18) )
    if ( v3 != *(_BYTE *)(Block::mStoneBrick + 4)
      && v3 != *(_WORD *)(Item::mNetherbrick + 18)
      && v3 != *(_BYTE *)(Block::mGlass + 4) )
      v10 = *(_WORD *)(Item::mIron_nugget + 18);
      _ZF = v3 == v10;
      if ( v3 != v10 )
        _ZF = v3 == 1;
      if ( !_ZF && v3 != *(_WORD *)(Item::mGold_nugget + 18) )
      {
        __asm
        {
          VLDRNE          S0, =0.0
          VMOVNE          R0, S0
        }
        return result;
      }
    __asm { VLDR            S0, =0.1 }
  v8 = ItemInstance::getAuxValue(v2);
  _R1 = dword_168E91C;
  if ( v8 == 1 )
    _R1 = &dword_168E91C[1];
  __asm
    VLDR            S0, [R1]
    VMOV            R0, S0
  return result;
}


void __fastcall FurnaceContainerManagerController::~FurnaceContainerManagerController(FurnaceContainerManagerController *this)
{
  ContainerManagerController *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26ECE00;
  v2 = *((_DWORD *)this + 17);
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
  ContainerManagerController::~ContainerManagerController(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall FurnaceContainerManagerController::_isFurnaceInputCollectionName(int a1, const void **a2)
{
  const void **v2; // r8@1
  int v3; // r10@1
  int v4; // r0@1
  int v5; // r5@2
  int v6; // r4@2
  bool v7; // zf@3
  int v8; // r7@6
  bool v9; // zf@9
  _DWORD *v10; // r0@13
  const void *v11; // r9@14
  _DWORD *v12; // r1@14
  size_t v13; // r11@14
  int v14; // r7@16
  int v15; // r0@16
  int v16; // r10@17
  int v17; // r5@17
  bool v18; // zf@18
  int v19; // r6@21
  signed int v20; // r4@24
  bool v21; // zf@25
  _DWORD *v22; // r0@29
  _DWORD *v23; // r1@30

  v2 = a2;
  v3 = 0x14u % dword_27F9B38;
  v4 = *(_DWORD *)(dword_27F9B34 + 4 * (0x14u % dword_27F9B38));
  if ( !v4 )
    goto LABEL_13;
  v5 = *(_DWORD *)v4;
  v6 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  while ( 1 )
  {
    v7 = v6 == 20;
    if ( v6 == 20 )
      v7 = *(_DWORD *)(v5 + 4) == 20;
    if ( v7 )
      break;
    v8 = *(_DWORD *)v5;
    if ( *(_DWORD *)v5 )
    {
      v6 = *(_DWORD *)(v8 + 12);
      v4 = v5;
      v5 = *(_DWORD *)v5;
      if ( *(_DWORD *)(v8 + 12) % (unsigned int)dword_27F9B38 == v3 )
        continue;
    }
  }
  v9 = v4 == 0;
  if ( v4 )
    v4 = *(_DWORD *)v4;
    v9 = v4 == 0;
  if ( v9 )
LABEL_13:
    v10 = operator new(0x10u);
    *v10 = 0;
    v10[1] = 20;
    v10[2] = &unk_28898CC;
    v4 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F9B34,
           v3,
           0x14u,
           (int)v10);
  v11 = *v2;
  v12 = *(_DWORD **)(v4 + 8);
  v13 = *((_DWORD *)*v2 - 3);
  if ( v13 == *(v12 - 3) && !memcmp(*v2, v12, *((_DWORD *)*v2 - 3)) )
    v20 = 1;
  else
    v14 = 0x15u % dword_27F9B38;
    v15 = *(_DWORD *)(dword_27F9B34 + 4 * (0x15u % dword_27F9B38));
    if ( !v15 )
      goto LABEL_29;
    v16 = *(_DWORD *)v15;
    v17 = *(_DWORD *)(*(_DWORD *)v15 + 12);
    while ( 1 )
      v18 = v17 == 21;
      if ( v17 == 21 )
        v18 = *(_DWORD *)(v16 + 4) == 21;
      if ( v18 )
        break;
      v19 = *(_DWORD *)v16;
      if ( *(_DWORD *)v16 )
      {
        v17 = *(_DWORD *)(v19 + 12);
        v15 = v16;
        v16 = *(_DWORD *)v16;
        if ( *(_DWORD *)(v19 + 12) % (unsigned int)dword_27F9B38 == v14 )
          continue;
      }
    v21 = v15 == 0;
    if ( v15 )
      v15 = *(_DWORD *)v15;
      v21 = v15 == 0;
    if ( v21 )
LABEL_29:
      v22 = operator new(0x10u);
      *v22 = 0;
      v22[1] = 21;
      v22[2] = &unk_28898CC;
      v15 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27F9B34,
              v14,
              0x15u,
              (int)v22);
      v11 = *v2;
      v13 = *((_DWORD *)*v2 - 3);
    v23 = *(_DWORD **)(v15 + 8);
    v20 = 0;
    if ( v13 == *(v23 - 3) && !memcmp(v11, v23, v13) )
      v20 = 1;
  return v20;
}


signed int __fastcall FurnaceContainerManagerController::_onItemAcquired(int a1, ContainerItemStack *a2, const void **a3)
{
  int v3; // r11@1
  ContainerItemStack *v4; // r9@1
  unsigned int v5; // r3@2
  unsigned int *v6; // r1@2
  unsigned int v7; // r6@5
  unsigned int v8; // r7@6
  unsigned int v9; // r2@7
  signed int v10; // r1@7
  ContainerManagerModel *v11; // r10@11
  signed int result; // r0@13
  int v13; // r7@14
  int v14; // r0@14
  int v15; // r8@15
  int v16; // r5@15
  int v18; // r4@19
  bool v19; // zf@22
  _DWORD *v20; // r0@26
  _DWORD *v21; // r1@27
  size_t v22; // r2@27
  const ItemInstance *v23; // r6@29
  float v26; // r1@30
  Random *v32; // r0@31
  unsigned int *v35; // r1@43
  unsigned int *v36; // r4@49
  const void **v37; // [sp+4h] [bp-84h]@7
  char v38; // [sp+8h] [bp-80h]@35
  int v39; // [sp+10h] [bp-78h]@39
  void *v40; // [sp+2Ch] [bp-5Ch]@37
  void *ptr; // [sp+3Ch] [bp-4Ch]@35

  v3 = *(_DWORD *)(a1 + 68);
  v4 = a2;
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 + 4);
    v6 = (unsigned int *)(v3 + 4);
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
          v37 = a3;
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
  v37 = a3;
  v10 = 1;
  v3 = 0;
LABEL_11:
  v11 = *(ContainerManagerModel **)(a1 + 64);
  if ( v10 )
    v11 = 0;
  result = ContainerItemStack::isEmpty(v4);
  if ( !result )
    v13 = 0x16u % dword_27F9B38;
    v14 = *(_DWORD *)(dword_27F9B34 + 4 * (0x16u % dword_27F9B38));
    if ( !v14 )
      goto LABEL_26;
    v15 = *(_DWORD *)v14;
    v16 = *(_DWORD *)(*(_DWORD *)v14 + 12);
    while ( 1 )
      _ZF = v16 == 22;
      if ( v16 == 22 )
        _ZF = *(_DWORD *)(v15 + 4) == 22;
      if ( _ZF )
        break;
      v18 = *(_DWORD *)v15;
      if ( *(_DWORD *)v15 )
        v16 = *(_DWORD *)(v18 + 12);
        v14 = v15;
        v15 = *(_DWORD *)v15;
        if ( *(_DWORD *)(v18 + 12) % (unsigned int)dword_27F9B38 == v13 )
          continue;
    v19 = v14 == 0;
    if ( v14 )
      v14 = *(_DWORD *)v14;
      v19 = v14 == 0;
    if ( v19 )
LABEL_26:
      v20 = operator new(0x10u);
      *v20 = 0;
      v20[1] = 22;
      v20[2] = &unk_28898CC;
      v14 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27F9B34,
              v13,
              0x16u,
              (int)v20);
    v21 = *(_DWORD **)(v14 + 8);
    v22 = *((_DWORD *)*v37 - 3);
    result = *(v21 - 3);
    if ( v22 == result )
      result = memcmp(*v37, v21, v22);
      if ( !result )
        result = ContainerItemStack::getItemInstance(v4);
        v23 = (const ItemInstance *)result;
        _R7 = *(_BYTE *)(result + 14);
        if ( *(_BYTE *)(result + 14) )
          _R0 = FurnaceContainerManagerController::_xpRewardMultiplier(
                  (FurnaceContainerManagerController *)result,
                  (const ItemInstance *)result);
          __asm
          {
            VMOV            S0, R0
            VCMPE.F32       S0, #0.0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            __asm
            {
              VMOV            S2, R7
              VCVT.F32.U32    S2, S2
              VMUL.F32        S16, S0, S2
              VMOV            R0, S16
            }
            _R5 = mce::Math::ceil(_R0, v26);
            v32 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
              VMOV            S0, R5
              VCVT.F32.S32    S18, S0
              VCMPE.F32       S16, S18
              VMRS            APSR_nzcv, FPSCR
            if ( !_ZF )
              _R0 = Random::_genRandInt32(v32);
              __asm
              {
                VMOV            S0, R0
                VLDR            D1, =2.32830644e-10
                VCVT.F64.U32    D0, S0
                VMUL.F64        D0, D0, D1
                VSUB.F32        S2, S18, S16
                VCVT.F32.F64    S0, D0
                VCMPE.F32       S0, S2
                VMRS            APSR_nzcv, FPSCR
              }
              if ( !(_NF ^ _VF) )
                __asm
                {
                  VMOVGE.F32      S0, #1.0
                  VADDGE.F32      S16, S16, S0
                }
              VCVTR.S32.F32   S0, S16
              VMOV            R1, S0
            ContainerManagerModel::grantExperience(v11, _R1);
          FurnaceContainerManagerModel::getLastFuelSource((FurnaceContainerManagerModel *)&v38, (int)v11);
          FurnaceContainerManagerModel::fireItemSmeltedEvent(v11, v23, (const ItemInstance *)&v38);
          if ( ptr )
            operator delete(ptr);
          if ( v40 )
            operator delete(v40);
          if ( v39 )
            (*(void (**)(void))(*(_DWORD *)v39 + 4))();
          v39 = 0;
          result = FurnaceContainerManagerModel::fireItemAcquiredEvent(v11, v23, _R7);
    v35 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
      do
        result = __ldrex(v35);
      while ( __strex(result - 1, v35) );
    else
      result = (*v35)--;
    if ( result == 1 )
      v36 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v36);
        while ( __strex(result - 1, v36) );
        result = (*v36)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  return result;
}


signed int __fastcall FurnaceContainerManagerController::isFurnaceValid(FurnaceContainerManagerController *this, float a2)
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

  v2 = *((_DWORD *)this + 17);
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
            this = (FurnaceContainerManagerController *)*((_DWORD *)this + 16);
            v8 = this == 0;
          }
          if ( !v8 )
            v7 = FurnaceContainerManagerModel::isFurnaceValid(this, a2);
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


int __fastcall FurnaceContainerManagerController::getOutputId(FurnaceContainerManagerController *this)
{
  int v1; // r4@1
  unsigned int v2; // r2@2
  unsigned int *v3; // r1@2
  unsigned int v4; // r3@5
  unsigned int v5; // r6@6
  unsigned int v6; // r2@7
  signed int v7; // r1@7
  FurnaceContainerManagerModel *v8; // r0@11
  int v9; // r5@13
  unsigned int *v10; // r1@14
  unsigned int v11; // r0@16
  unsigned int *v12; // r6@20
  unsigned int v13; // r0@22

  v1 = *((_DWORD *)this + 17);
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
  v8 = (FurnaceContainerManagerModel *)*((_DWORD *)this + 16);
  if ( v7 )
    v8 = 0;
  v9 = FurnaceContainerManagerModel::getOutputId(v8);
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


int __fastcall FurnaceContainerManagerController::handlePlaceAll(int a1, int a2, int **a3, int a4)
{
  int v4; // r10@1
  int **v5; // r11@1
  int v6; // r9@1
  int v7; // r0@1
  int v8; // r4@2
  int v9; // r6@2
  bool v10; // zf@3
  int v11; // r7@6
  bool v12; // zf@9
  _DWORD *v13; // r0@13
  int *v14; // r11@14
  _DWORD *v15; // r1@14
  size_t v16; // r7@14
  int v17; // r4@16
  int v18; // r0@16
  int v19; // r9@17
  int v20; // r8@17
  bool v21; // zf@18
  int v22; // r10@21
  int v23; // r4@24
  int result; // r0@36
  bool v25; // zf@38
  _DWORD *v26; // r0@42
  _DWORD *v27; // r1@43
  int v28; // r0@45
  int v29; // r1@45
  ItemInstance *v30; // r0@47
  ContainerController **v31; // r0@48
  ItemInstance *v32; // r0@48
  ContainerItemStack *v33; // [sp+8h] [bp-C8h]@16
  int v34; // [sp+Ch] [bp-C4h]@1
  int v35; // [sp+10h] [bp-C0h]@1
  int **v36; // [sp+14h] [bp-BCh]@14
  char v37; // [sp+18h] [bp-B8h]@24
  int v38; // [sp+20h] [bp-B0h]@34
  void *v39; // [sp+3Ch] [bp-94h]@32
  void *v40; // [sp+4Ch] [bp-84h]@30
  char v41; // [sp+60h] [bp-70h]@24
  int v42; // [sp+68h] [bp-68h]@28
  void *v43; // [sp+84h] [bp-4Ch]@26
  void *ptr; // [sp+94h] [bp-3Ch]@24

  v35 = a4;
  v4 = a2;
  v34 = a1;
  v5 = a3;
  v6 = 0x16u % dword_27F9B38;
  v7 = *(_DWORD *)(dword_27F9B34 + 4 * (0x16u % dword_27F9B38));
  if ( !v7 )
    goto LABEL_13;
  v8 = *(_DWORD *)v7;
  v9 = *(_DWORD *)(*(_DWORD *)v7 + 12);
  while ( 1 )
  {
    v10 = v9 == 22;
    if ( v9 == 22 )
      v10 = *(_DWORD *)(v8 + 4) == 22;
    if ( v10 )
      break;
    v11 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 )
    {
      v9 = *(_DWORD *)(v11 + 12);
      v7 = v8;
      v8 = *(_DWORD *)v8;
      if ( *(_DWORD *)(v11 + 12) % (unsigned int)dword_27F9B38 == v6 )
        continue;
    }
  }
  v12 = v7 == 0;
  if ( v7 )
    v7 = *(_DWORD *)v7;
    v12 = v7 == 0;
  if ( v12 )
LABEL_13:
    v13 = operator new(0x10u);
    *v13 = 0;
    v13[1] = 22;
    v13[2] = &unk_28898CC;
    v7 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F9B34,
           v6,
           0x16u,
           (int)v13);
  v36 = v5;
  v14 = *v5;
  v15 = *(_DWORD **)(v7 + 8);
  v16 = *(v14 - 3);
  if ( v16 == *(v15 - 3) && !memcmp(v14, v15, *(v14 - 3)) )
    v23 = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                       (unsigned __int64 *)(v34 + 20),
                       v36);
    ItemInstance::ItemInstance((ItemInstance *)&v37, v4);
    ContainerController::addToStack((ItemInstance *)&v41, v23, v35, (int)&v37, 0);
    ItemInstance::operator=(v4, (int)&v41);
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
    result = 0;
    v38 = 0;
  else
    v33 = (ContainerItemStack *)v4;
    v17 = 0x14u % dword_27F9B38;
    v18 = *(_DWORD *)(dword_27F9B34 + 4 * (0x14u % dword_27F9B38));
    if ( !v18 )
      goto LABEL_42;
    v19 = *(_DWORD *)v18;
    v20 = *(_DWORD *)(*(_DWORD *)v18 + 12);
    while ( 1 )
      v21 = v20 == 20;
      if ( v20 == 20 )
        v21 = *(_DWORD *)(v19 + 4) == 20;
      if ( v21 )
        break;
      v22 = *(_DWORD *)v19;
      if ( *(_DWORD *)v19 )
      {
        v20 = *(_DWORD *)(v22 + 12);
        v18 = v19;
        v19 = *(_DWORD *)v19;
        if ( *(_DWORD *)(v22 + 12) % (unsigned int)dword_27F9B38 == v17 )
          continue;
      }
    v25 = v18 == 0;
    if ( v18 )
      v18 = *(_DWORD *)v18;
      v25 = v18 == 0;
    if ( v25 )
LABEL_42:
      v26 = operator new(0x10u);
      *v26 = 0;
      v26[1] = 20;
      v26[2] = &unk_28898CC;
      v18 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27F9B34,
              v17,
              0x14u,
              (int)v26);
      v14 = *v36;
      v16 = *(*v36 - 3);
    v27 = *(_DWORD **)(v18 + 8);
    if ( v16 != *(v27 - 3) || memcmp(v14, v27, v16) )
      v28 = v34;
      v29 = (int)v33;
      return j_j_j__ZN26ContainerManagerController14handlePlaceAllER18ContainerItemStackRKSsi(v28, v29, v36, v35);
    v30 = (ItemInstance *)ContainerItemStack::getItemInstance(v33);
    if ( ItemInstance::getId(v30) != *(_WORD *)(Item::mBucket + 18) )
    v31 = (ContainerController **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                    (unsigned __int64 *)(v34 + 20),
                                    v36);
    v32 = (ItemInstance *)ContainerController::getItem(*v31, v35);
    if ( ItemInstance::isNull(v32) || (result = ContainerItemStack::getCount(v33), result == 1) )
      result = (*(int (__fastcall **)(int, ContainerItemStack *, int **, int))(*(_DWORD *)v34 + 28))(v34, v33, v36, v35);
  return result;
}


void __fastcall FurnaceContainerManagerController::~FurnaceContainerManagerController(FurnaceContainerManagerController *this)
{
  FurnaceContainerManagerController::~FurnaceContainerManagerController(this);
}


int __fastcall FurnaceContainerManagerController::getLitProgress(FurnaceContainerManagerController *this, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r3@2
  unsigned int *v4; // r2@2
  unsigned int v5; // r6@5
  unsigned int v6; // r5@6
  unsigned int v7; // r3@7
  signed int v8; // r2@7
  FurnaceContainerManagerModel *v9; // r0@11
  int v10; // r5@13
  unsigned int *v11; // r1@14
  unsigned int v12; // r0@16
  unsigned int *v13; // r6@20
  unsigned int v14; // r0@22

  v2 = *((_DWORD *)this + 17);
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
  v9 = (FurnaceContainerManagerModel *)*((_DWORD *)this + 16);
  if ( v8 )
    v9 = 0;
  v10 = FurnaceContainerManagerModel::getLitProgress(v9, a2);
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


unsigned int __fastcall FurnaceContainerManagerController::FurnaceContainerManagerController(unsigned int a1, int a2)
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
  signed int v12; // r0@13
  int v13; // r1@17
  unsigned int *v14; // r1@20
  unsigned int v15; // r0@22
  unsigned int *v16; // r7@26
  unsigned int v17; // r0@28
  int v18; // r0@33
  unsigned int *v19; // r2@34
  unsigned int v20; // r1@36
  int v21; // r0@41
  unsigned int *v22; // r0@42
  unsigned int v23; // r1@44
  int v25; // [sp+4h] [bp-1Ch]@19
  int v26; // [sp+8h] [bp-18h]@1

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)(a2 + 4);
  v26 = v4;
  if ( !v4 )
    goto LABEL_16;
  v5 = (unsigned int *)(v4 + 8);
  if ( &pthread_create )
  {
    __dmb();
    do
      v6 = __ldrex(v5);
    while ( __strex(v6 + 1, v5) );
    v4 = *(_DWORD *)(v2 + 4);
    if ( !v4 )
      goto LABEL_16;
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
        v12 = 0;
        if ( !v11 )
          v12 = 1;
        goto LABEL_17;
      }
    }
    else
      __clrex();
LABEL_16:
  v12 = 1;
  v4 = 0;
LABEL_17:
  v13 = *(_DWORD *)v2;
  if ( v12 )
    v13 = 0;
  v25 = v13;
  if ( v4 )
    v14 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      else
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  ContainerManagerController::ContainerManagerController(COERCE_DOUBLE(__PAIR__(&v25, v3)));
  v18 = v26;
  if ( v26 )
    v19 = (unsigned int *)(v26 + 8);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 == 1 )
      (*(void (**)(void))(*(_DWORD *)v18 + 12))();
  *(_DWORD *)v3 = &off_26ECE00;
  *(_DWORD *)(v3 + 64) = *(_DWORD *)v2;
  v21 = *(_DWORD *)(v2 + 4);
  *(_DWORD *)(v3 + 68) = v21;
  if ( v21 )
    v22 = (unsigned int *)(v21 + 8);
        v23 = __ldrex(v22);
      while ( __strex(v23 + 1, v22) );
      ++*v22;
  return v3;
}
