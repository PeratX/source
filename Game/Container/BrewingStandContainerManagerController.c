

int __fastcall BrewingStandContainerManagerController::getBrewProgress(BrewingStandContainerManagerController *this, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r3@2
  unsigned int *v4; // r2@2
  unsigned int v5; // r6@5
  unsigned int v6; // r5@6
  unsigned int v7; // r3@7
  signed int v8; // r2@7
  BrewingStandContainerManagerModel *v9; // r0@11
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
  v9 = (BrewingStandContainerManagerModel *)*((_DWORD *)this + 16);
  if ( v8 )
    v9 = 0;
  v10 = BrewingStandContainerManagerModel::getBrewProgress(v9, a2);
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


void __fastcall BrewingStandContainerManagerController::~BrewingStandContainerManagerController(BrewingStandContainerManagerController *this)
{
  BrewingStandContainerManagerController::~BrewingStandContainerManagerController(this);
}


int __fastcall BrewingStandContainerManagerController::isStandValid(BrewingStandContainerManagerController *this, float a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r6@2
  unsigned int v5; // r3@5
  unsigned int v6; // r5@6
  int v7; // r5@7
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
            this = (BrewingStandContainerManagerController *)*((_DWORD *)this + 16);
            v8 = this == 0;
          }
          if ( !v8 )
            v7 = (*(int (**)(void))(*(_DWORD *)this + 48))();
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


signed int __fastcall BrewingStandContainerManagerController::removeCraftedFlag(BrewingStandContainerManagerController *this, ItemInstance *a2)
{
  signed int result; // r0@1
  bool v3; // zf@1

  result = *((_BYTE *)a2 + 15);
  v3 = result == 0;
  if ( *((_BYTE *)a2 + 15) )
  {
    result = *(_DWORD *)a2;
    v3 = *(_DWORD *)a2 == 0;
  }
  if ( !v3 )
    result = j_j_j__ZNK12ItemInstance6isNullEv_1(a2);
  return result;
}


unsigned int __fastcall BrewingStandContainerManagerController::BrewingStandContainerManagerController(unsigned int a1, int a2)
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
  *(_DWORD *)v3 = &off_26ECCA8;
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


ContainerManagerController *__fastcall BrewingStandContainerManagerController::~BrewingStandContainerManagerController(BrewingStandContainerManagerController *this)
{
  ContainerManagerController *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26ECCA8;
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


unsigned int __fastcall BrewingStandContainerManagerController::_calculateValidPotionBrewed(BrewingStandContainerManagerController *this, const ContainerItemStack *a2)
{
  int v2; // r4@1
  ContainerItemStack *v3; // r5@1
  unsigned int v4; // r2@2
  unsigned int *v5; // r1@2
  unsigned int v6; // r3@5
  unsigned int v7; // r7@6
  unsigned int v8; // r2@7
  signed int v9; // r1@7
  BrewingStandContainerManagerModel *v10; // r6@11
  ItemInstance *v11; // r0@13
  unsigned int result; // r0@13
  ItemInstance *v13; // r0@14
  const ItemInstance *v14; // r7@15
  int v15; // r0@15
  unsigned int *v16; // r1@17
  unsigned int *v17; // r5@23

  v2 = *((_DWORD *)this + 17);
  v3 = a2;
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 4);
    v5 = (unsigned int *)(v2 + 4);
    while ( v4 )
    {
      __dmb();
      v6 = __ldrex(v5);
      if ( v6 == v4 )
      {
        v7 = __strex(v4 + 1, v5);
        v4 = v6;
        if ( !v7 )
        {
          __dmb();
          v8 = *v5;
          v9 = 0;
          if ( !v8 )
            v9 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v9 = 1;
  v2 = 0;
LABEL_11:
  v10 = (BrewingStandContainerManagerModel *)*((_DWORD *)this + 16);
  if ( v9 )
    v10 = 0;
  v11 = (ItemInstance *)ContainerItemStack::getItemInstance(v3);
  result = ItemInstance::isPotionItem(v11);
  if ( result == 1 )
    v13 = (ItemInstance *)ContainerItemStack::getItemInstance(v3);
    result = ItemInstance::wasJustBrewed(v13);
    if ( result == 1 )
      v14 = (const ItemInstance *)ContainerItemStack::getItemInstance(v3);
      v15 = ContainerItemStack::getItemInstance(v3);
      result = BrewingStandContainerManagerModel::firePotionBrewedEvent(v10, v14, *(_BYTE *)(v15 + 14));
    v16 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        result = __ldrex(v16);
      while ( __strex(result - 1, v16) );
    else
      result = (*v16)--;
      v17 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v17);
        while ( __strex(result - 1, v17) );
        result = (*v17)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


int __fastcall BrewingStandContainerManagerController::handleTakeAmount(int a1, int a2, int a3, int **a4, int a5)
{
  ContainerItemStack *v5; // r4@1
  int result; // r0@1
  bool v7; // zf@1

  v5 = (ContainerItemStack *)a2;
  ContainerManagerController::handleTakeAmount(a1, a2, a3, a4, a5);
  result = ContainerItemStack::getItemInstance(v5);
  v7 = *(_BYTE *)(result + 15) == 0;
  if ( *(_BYTE *)(result + 15) )
    v7 = *(_DWORD *)result == 0;
  if ( !v7 )
    result = j_j_j__ZNK12ItemInstance6isNullEv_1((ItemInstance *)result);
  return result;
}


int __fastcall BrewingStandContainerManagerController::handleTakeAll(int a1, int a2, int **a3, int a4)
{
  ContainerItemStack *v4; // r4@1
  int result; // r0@1
  bool v6; // zf@1

  v4 = (ContainerItemStack *)a2;
  ContainerManagerController::handleTakeAll(a1, a2, a3, a4);
  result = ContainerItemStack::getItemInstance(v4);
  v6 = *(_BYTE *)(result + 15) == 0;
  if ( *(_BYTE *)(result + 15) )
    v6 = *(_DWORD *)result == 0;
  if ( !v6 )
    result = j_j_j__ZNK12ItemInstance6isNullEv_1((ItemInstance *)result);
  return result;
}


int __fastcall BrewingStandContainerManagerController::getBubbleProgress(BrewingStandContainerManagerController *this, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r3@2
  unsigned int *v4; // r2@2
  unsigned int v5; // r6@5
  unsigned int v6; // r5@6
  unsigned int v7; // r3@7
  signed int v8; // r2@7
  BrewingStandContainerManagerModel *v9; // r0@11
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
  v9 = (BrewingStandContainerManagerModel *)*((_DWORD *)this + 16);
  if ( v8 )
    v9 = 0;
  v10 = BrewingStandContainerManagerModel::getBubbleProgress(v9, a2);
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


unsigned int __fastcall BrewingStandContainerManagerController::_onItemAcquired(int a1, ContainerItemStack *a2, const void **a3)
{
  int v3; // r7@1
  int v4; // r6@1
  const void **v5; // r9@1
  unsigned int v6; // r1@2
  unsigned int *v7; // r0@2
  unsigned int v8; // r2@5
  unsigned int v9; // r3@6
  signed int v10; // r4@7
  int v11; // r8@11
  BrewingStandContainerManagerModel *v12; // r1@11
  int v13; // r0@11
  int v14; // r5@14
  int v15; // r4@14
  bool v16; // zf@15
  int v17; // r7@18
  bool v18; // zf@21
  _DWORD *v19; // r0@25
  const void *v20; // r10@26
  _DWORD *v21; // r1@26
  size_t v22; // r11@26
  int v23; // r7@28
  int v24; // r0@28
  int v25; // r6@29
  int v26; // r4@29
  bool v27; // zf@30
  int v28; // r5@33
  signed int v29; // r4@36
  bool v30; // zf@37
  _DWORD *v31; // r0@41
  _DWORD *v32; // r1@42
  int v33; // r8@44
  int v34; // r0@44
  int v35; // r7@45
  int v36; // r6@45
  bool v37; // zf@46
  int v38; // r5@49
  bool v39; // zf@53
  _DWORD *v40; // r0@57
  const void *v41; // r1@58
  unsigned int result; // r0@61
  const ItemInstance *v43; // r4@62
  int v44; // r0@62
  unsigned int *v45; // r1@64
  unsigned int *v46; // r4@70
  BrewingStandContainerManagerController *v47; // [sp+4h] [bp-34h]@11
  BrewingStandContainerManagerModel *v48; // [sp+8h] [bp-30h]@13
  int v49; // [sp+Ch] [bp-2Ch]@7
  ContainerItemStack *v50; // [sp+10h] [bp-28h]@1

  v50 = a2;
  v3 = a1;
  v4 = *(_DWORD *)(a1 + 68);
  v5 = a3;
  if ( v4 )
  {
    v6 = *(_DWORD *)(v4 + 4);
    v7 = (unsigned int *)(v4 + 4);
    while ( v6 )
    {
      __dmb();
      v8 = __ldrex(v7);
      if ( v8 == v6 )
      {
        v9 = __strex(v6 + 1, v7);
        v6 = v8;
        if ( !v9 )
        {
          v49 = v4;
          v10 = 0;
          __dmb();
          if ( !*v7 )
            v10 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v10 = 1;
  v49 = 0;
LABEL_11:
  v11 = 7u % dword_27F96A8;
  v12 = *(BrewingStandContainerManagerModel **)(v3 + 64);
  v47 = (BrewingStandContainerManagerController *)v3;
  v13 = *(_DWORD *)(dword_27F96A4 + 4 * (7u % dword_27F96A8));
  if ( v10 )
    v12 = 0;
  v48 = v12;
  if ( !v13 )
    goto LABEL_25;
  v14 = *(_DWORD *)v13;
  v15 = *(_DWORD *)(*(_DWORD *)v13 + 12);
  while ( 1 )
    v16 = v15 == 7;
    if ( v15 == 7 )
      v16 = *(_DWORD *)(v14 + 4) == 7;
    if ( v16 )
      break;
    v17 = *(_DWORD *)v14;
    if ( *(_DWORD *)v14 )
      v15 = *(_DWORD *)(v17 + 12);
      v13 = v14;
      v14 = *(_DWORD *)v14;
      if ( *(_DWORD *)(v17 + 12) % (unsigned int)dword_27F96A8 == v11 )
        continue;
  v18 = v13 == 0;
  if ( v13 )
    v13 = *(_DWORD *)v13;
    v18 = v13 == 0;
  if ( v18 )
LABEL_25:
    v19 = operator new(0x10u);
    *v19 = 0;
    v19[1] = 7;
    v19[2] = &unk_28898CC;
    v13 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27F96A4,
            v11,
            7u,
            (int)v19);
  v20 = *v5;
  v21 = *(_DWORD **)(v13 + 8);
  v22 = *((_DWORD *)*v5 - 3);
  if ( v22 == *(v21 - 3) && !memcmp(*v5, v21, *((_DWORD *)*v5 - 3)) )
    v29 = 0;
  else
    v23 = 6u % dword_27F96A8;
    v24 = *(_DWORD *)(dword_27F96A4 + 4 * (6u % dword_27F96A8));
    if ( !v24 )
      goto LABEL_41;
    v25 = *(_DWORD *)v24;
    v26 = *(_DWORD *)(*(_DWORD *)v24 + 12);
    while ( 1 )
      v27 = v26 == 6;
      if ( v26 == 6 )
        v27 = *(_DWORD *)(v25 + 4) == 6;
      if ( v27 )
        break;
      v28 = *(_DWORD *)v25;
      if ( *(_DWORD *)v25 )
        v26 = *(_DWORD *)(v28 + 12);
        v24 = v25;
        v25 = *(_DWORD *)v25;
        if ( *(_DWORD *)(v28 + 12) % (unsigned int)dword_27F96A8 == v23 )
          continue;
    v30 = v24 == 0;
    if ( v24 )
      v24 = *(_DWORD *)v24;
      v30 = v24 == 0;
    if ( v30 )
LABEL_41:
      v31 = operator new(0x10u);
      *v31 = 0;
      v31[1] = 6;
      v31[2] = &unk_28898CC;
      v24 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27F96A4,
              v23,
              6u,
              (int)v31);
      v20 = *v5;
      v22 = *((_DWORD *)*v5 - 3);
    v32 = *(_DWORD **)(v24 + 8);
    if ( v22 == *(v32 - 3) && !memcmp(v20, v32, v22) )
      v29 = 0;
    else
      v33 = 8u % dword_27F96A8;
      v34 = *(_DWORD *)(dword_27F96A4 + 4 * (8u % dword_27F96A8));
      if ( !v34 )
        goto LABEL_57;
      v35 = *(_DWORD *)v34;
      v36 = *(_DWORD *)(*(_DWORD *)v34 + 12);
      while ( 1 )
        v37 = v36 == 8;
        if ( v36 == 8 )
          v37 = *(_DWORD *)(v35 + 4) == 8;
        if ( v37 )
          break;
        v38 = *(_DWORD *)v35;
        if ( *(_DWORD *)v35 )
          v36 = *(_DWORD *)(v38 + 12);
          v34 = v35;
          v35 = *(_DWORD *)v35;
          if ( *(_DWORD *)(v38 + 12) % (unsigned int)dword_27F96A8 == v33 )
            continue;
      v39 = v34 == 0;
      if ( v34 )
        v34 = *(_DWORD *)v34;
        v39 = v34 == 0;
      if ( v39 )
LABEL_57:
        v40 = operator new(0x10u);
        *v40 = 0;
        v40[1] = 8;
        v40[2] = &unk_28898CC;
        v34 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                (int)&dword_27F96A4,
                v33,
                8u,
                (int)v40);
        v20 = *v5;
        v22 = *((_DWORD *)*v5 - 3);
      v41 = *(const void **)(v34 + 8);
      if ( v22 == *((_DWORD *)v41 - 3) )
        v29 = memcmp(v20, v41, v22) != 0;
        v29 = 1;
  result = ContainerItemStack::isEmpty(v50) | v29;
  if ( !result )
    v43 = (const ItemInstance *)ContainerItemStack::getItemInstance(v50);
    v44 = ContainerItemStack::getItemInstance(v50);
    BrewingStandContainerManagerModel::fireItemAcquiredEvent(v48, v43, *(_BYTE *)(v44 + 14));
    result = BrewingStandContainerManagerController::_calculateValidPotionBrewed(v47, v50);
  if ( v49 )
    v45 = (unsigned int *)(v49 + 4);
    if ( &pthread_create )
      do
        result = __ldrex(v45);
      while ( __strex(result - 1, v45) );
      result = (*v45)--;
    if ( result == 1 )
      v46 = (unsigned int *)(v49 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v49 + 8))(v49);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v46);
        while ( __strex(result - 1, v46) );
        result = (*v46)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v49 + 12))(v49);
  return result;
}


int __fastcall BrewingStandContainerManagerController::handleTakeAmount(int a1, int a2, int a3, int **a4, int a5)
{
  ContainerItemStack *v5; // r4@1
  int result; // r0@1
  bool v7; // zf@1

  v5 = (ContainerItemStack *)a2;
  ContainerManagerController::handleTakeAmount(a1, a2, a3, a4, a5);
  result = ContainerItemStack::getItemInstance(v5);
  v7 = *(_BYTE *)(result + 15) == 0;
  if ( *(_BYTE *)(result + 15) )
    v7 = *(_DWORD *)result == 0;
  if ( !v7 )
    result = j_j_j__ZNK12ItemInstance6isNullEv_1((ItemInstance *)result);
  return result;
}


void __fastcall BrewingStandContainerManagerController::~BrewingStandContainerManagerController(BrewingStandContainerManagerController *this)
{
  ContainerManagerController *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26ECCA8;
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


int __fastcall BrewingStandContainerManagerController::handleTakeHalf(int a1, int a2, int **a3, int a4)
{
  ContainerItemStack *v4; // r4@1
  int result; // r0@1
  bool v6; // zf@1

  v4 = (ContainerItemStack *)a2;
  ContainerManagerController::handleTakeHalf(a1, a2, a3, a4);
  result = ContainerItemStack::getItemInstance(v4);
  v6 = *(_BYTE *)(result + 15) == 0;
  if ( *(_BYTE *)(result + 15) )
    v6 = *(_DWORD *)result == 0;
  if ( !v6 )
    result = j_j_j__ZNK12ItemInstance6isNullEv_1((ItemInstance *)result);
  return result;
}


int __fastcall BrewingStandContainerManagerController::getFuelProgress(BrewingStandContainerManagerController *this, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r3@2
  unsigned int *v4; // r2@2
  unsigned int v5; // r6@5
  unsigned int v6; // r5@6
  unsigned int v7; // r3@7
  signed int v8; // r2@7
  BrewingStandContainerManagerModel *v9; // r0@11
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
  v9 = (BrewingStandContainerManagerModel *)*((_DWORD *)this + 16);
  if ( v8 )
    v9 = 0;
  v10 = BrewingStandContainerManagerModel::getFuelProgress(v9, a2);
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
