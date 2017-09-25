

unsigned int __fastcall ChestContainerManagerController::ChestContainerManagerController(unsigned int a1, int a2)
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
  *(_DWORD *)v3 = &off_26ECCEC;
  *(_DWORD *)(v3 + 72) = *(_DWORD *)v2;
  v16 = *(_DWORD *)(v2 + 4);
  *(_DWORD *)(v3 + 76) = v16;
  if ( v16 )
    v17 = (unsigned int *)(v16 + 8);
        v18 = __ldrex(v17);
      while ( __strex(v18 + 1, v17) );
      ++*v17;
  ChestContainerManagerController::_setupCallbacks((ChestContainerManagerController *)v3);
  return v3;
}


int __fastcall ChestContainerManagerController::_calculateFullCobblestoneAchievement(ChestContainerManagerController *this)
{
  ChestContainerManagerController *v1; // r10@1
  int v2; // r8@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  signed int v7; // r5@7
  int v8; // r11@11
  ChestContainerManagerModel *v9; // r9@11
  int v10; // r0@11
  int v11; // r7@14
  int v12; // r6@14
  bool v13; // zf@15
  int v14; // r5@18
  bool v15; // zf@21
  _DWORD *v16; // r0@25
  int *v17; // r0@26
  int v18; // r5@26
  unsigned int v19; // r1@27
  unsigned int *v20; // r0@27
  unsigned int v21; // r2@30
  unsigned int v22; // r3@31
  signed int v23; // r1@32
  int v24; // r0@36
  ContainerModel *v25; // r7@36
  unsigned int *v26; // r2@39
  unsigned int v27; // r1@41
  int result; // r0@47
  unsigned int *v29; // r1@50
  unsigned int *v30; // r4@56
  unsigned int *v31; // r1@64
  unsigned int *v32; // r4@70
  ContainerModel *v33; // [sp+4h] [bp-2Ch]@26
  int v34; // [sp+8h] [bp-28h]@26

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
  v8 = 4u % dword_27F9768;
  v9 = (ChestContainerManagerModel *)*((_DWORD *)v1 + 18);
  v10 = *(_DWORD *)(dword_27F9764 + 4 * (4u % dword_27F9768));
  if ( v7 )
    v9 = 0;
  if ( !v10 )
    goto LABEL_25;
  v11 = *(_DWORD *)v10;
  v12 = *(_DWORD *)(*(_DWORD *)v10 + 12);
  while ( 1 )
    v13 = v12 == 4;
    if ( v12 == 4 )
      v13 = *(_DWORD *)(v11 + 4) == 4;
    if ( v13 )
      break;
    v14 = *(_DWORD *)v11;
    if ( *(_DWORD *)v11 )
      v12 = *(_DWORD *)(v14 + 12);
      v10 = v11;
      v11 = *(_DWORD *)v11;
      if ( *(_DWORD *)(v14 + 12) % (unsigned int)dword_27F9768 == v8 )
        continue;
  v15 = v10 == 0;
  if ( v10 )
    v10 = *(_DWORD *)v10;
    v15 = v10 == 0;
  if ( v15 )
LABEL_25:
    v16 = operator new(0x10u);
    *v16 = 0;
    v16[1] = 4;
    v16[2] = &unk_28898CC;
    v10 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27F9764,
            v8,
            4u,
            (int)v16);
  v17 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                 (unsigned __int64 *)((char *)v1 + 20),
                 (int **)(v10 + 8));
  ContainerController::getContainerModel((ContainerController *)&v33, *v17);
  v18 = v34;
  if ( v34 )
    v19 = *(_DWORD *)(v34 + 4);
    v20 = (unsigned int *)(v34 + 4);
    do
      while ( 1 )
        if ( !v19 )
          v23 = 1;
          v18 = 0;
          goto LABEL_36;
        __dmb();
        v21 = __ldrex(v20);
        if ( v21 == v19 )
          break;
        v19 = v21;
      v22 = __strex(v19 + 1, v20);
      v19 = v21;
    while ( v22 );
    __dmb();
    v23 = 0;
    if ( !*v20 )
      v23 = 1;
LABEL_36:
    v24 = v34;
    v25 = v33;
    if ( v23 )
      v25 = 0;
    if ( v34 )
      v26 = (unsigned int *)(v34 + 8);
      if ( &pthread_create )
        do
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 == 1 )
        (*(void (**)(void))(*(_DWORD *)v24 + 12))();
  else
    v25 = 0;
    v18 = 0;
  result = ContainerModel::getItemCount(v25, *(_BYTE *)(Block::mCobblestone + 4));
  if ( result >= 1728 )
    result = ChestContainerManagerModel::fireFullCobbleStoneEvent(v9);
  if ( v18 )
    v29 = (unsigned int *)(v18 + 4);
    if ( &pthread_create )
      do
        result = __ldrex(v29);
      while ( __strex(result - 1, v29) );
    else
      result = (*v29)--;
    if ( result == 1 )
      v30 = (unsigned int *)(v18 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
          result = __ldrex(v30);
        while ( __strex(result - 1, v30) );
        result = (*v30)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
    v31 = (unsigned int *)(v2 + 4);
        result = __ldrex(v31);
      while ( __strex(result - 1, v31) );
      result = (*v31)--;
      v32 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
          result = __ldrex(v32);
        while ( __strex(result - 1, v32) );
        result = (*v32)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


ContainerManagerController *__fastcall ChestContainerManagerController::~ChestContainerManagerController(ChestContainerManagerController *this)
{
  ChestContainerManagerController *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26ECCEC;
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


void __fastcall ChestContainerManagerController::~ChestContainerManagerController(ChestContainerManagerController *this)
{
  ChestContainerManagerController::~ChestContainerManagerController(this);
}


void __fastcall ChestContainerManagerController::~ChestContainerManagerController(ChestContainerManagerController *this)
{
  ChestContainerManagerController *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26ECCEC;
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


signed int __fastcall ChestContainerManagerController::_onItemAcquired(int a1, ContainerItemStack *a2, const void **a3)
{
  int v3; // r10@1
  ContainerItemStack *v4; // r9@1
  unsigned int v5; // r3@2
  unsigned int *v6; // r1@2
  unsigned int v7; // r6@5
  unsigned int v8; // r7@6
  unsigned int v9; // r2@7
  signed int v10; // r1@7
  ChestContainerManagerModel *v11; // r11@11
  signed int result; // r0@13
  int v13; // r6@14
  int v14; // r0@14
  int v15; // r8@15
  int v16; // r4@15
  bool v17; // zf@16
  int v18; // r7@19
  bool v19; // zf@22
  _DWORD *v20; // r0@26
  _DWORD *v21; // r1@27
  size_t v22; // r2@27
  const ItemInstance *v23; // r4@29
  int v24; // r0@29
  unsigned int *v25; // r1@31
  unsigned int *v26; // r4@37
  const void **v27; // [sp+0h] [bp-28h]@7

  v3 = *(_DWORD *)(a1 + 76);
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
          v27 = a3;
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
  v27 = a3;
  v10 = 1;
  v3 = 0;
LABEL_11:
  v11 = *(ChestContainerManagerModel **)(a1 + 72);
  if ( v10 )
    v11 = 0;
  result = ContainerItemStack::isEmpty(v4);
  if ( !result )
    v13 = 4u % dword_27F9768;
    v14 = *(_DWORD *)(dword_27F9764 + 4 * (4u % dword_27F9768));
    if ( !v14 )
      goto LABEL_26;
    v15 = *(_DWORD *)v14;
    v16 = *(_DWORD *)(*(_DWORD *)v14 + 12);
    while ( 1 )
      v17 = v16 == 4;
      if ( v16 == 4 )
        v17 = *(_DWORD *)(v15 + 4) == 4;
      if ( v17 )
        break;
      v18 = *(_DWORD *)v15;
      if ( *(_DWORD *)v15 )
        v16 = *(_DWORD *)(v18 + 12);
        v14 = v15;
        v15 = *(_DWORD *)v15;
        if ( *(_DWORD *)(v18 + 12) % (unsigned int)dword_27F9768 == v13 )
          continue;
    v19 = v14 == 0;
    if ( v14 )
      v14 = *(_DWORD *)v14;
      v19 = v14 == 0;
    if ( v19 )
LABEL_26:
      v20 = operator new(0x10u);
      *v20 = 0;
      v20[1] = 4;
      v20[2] = &unk_28898CC;
      v14 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27F9764,
              v13,
              4u,
              (int)v20);
    v21 = *(_DWORD **)(v14 + 8);
    v22 = *((_DWORD *)*v27 - 3);
    result = *(v21 - 3);
    if ( v22 == result )
      result = memcmp(*v27, v21, v22);
      if ( !result )
        v23 = (const ItemInstance *)ContainerItemStack::getItemInstance(v4);
        v24 = ContainerItemStack::getItemInstance(v4);
        result = ChestContainerManagerModel::fireItemAcquiredEvent(v11, v23, *(_BYTE *)(v24 + 14));
    v25 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
      do
        result = __ldrex(v25);
      while ( __strex(result - 1, v25) );
    else
      result = (*v25)--;
    if ( result == 1 )
      v26 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v26);
        while ( __strex(result - 1, v26) );
        result = (*v26)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  return result;
}


int __fastcall ChestContainerManagerController::_setupCallbacks(ChestContainerManagerController *this)
{
  ChestContainerManagerController *v1; // r8@1
  int v2; // r11@1
  int v3; // r0@1
  int v4; // r6@2
  int v5; // r5@2
  bool v6; // zf@3
  int v7; // r4@6
  bool v8; // zf@9
  _DWORD *v9; // r0@13
  int *v10; // r0@14
  int v11; // r4@14
  unsigned int v12; // r2@15
  unsigned int *v13; // r1@15
  unsigned int v14; // r3@18
  unsigned int v15; // r7@19
  signed int v16; // r5@20
  int v17; // r6@24
  _DWORD *v18; // r0@24
  __int64 v19; // r1@24
  unsigned int *v20; // r1@29
  unsigned int v21; // r0@31
  unsigned int *v22; // r5@35
  unsigned int v23; // r0@37
  int result; // r0@42
  unsigned int *v25; // r2@43
  unsigned int v26; // r1@45
  _DWORD *v27; // [sp+4h] [bp-3Ch]@24
  __int64 v28; // [sp+Ch] [bp-34h]@24
  int v29; // [sp+14h] [bp-2Ch]@14
  int v30; // [sp+18h] [bp-28h]@14

  v1 = this;
  v2 = 4u % dword_27F9768;
  v3 = *(_DWORD *)(dword_27F9764 + 4 * (4u % dword_27F9768));
  if ( !v3 )
    goto LABEL_13;
  v4 = *(_DWORD *)v3;
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  while ( 1 )
  {
    v6 = v5 == 4;
    if ( v5 == 4 )
      v6 = *(_DWORD *)(v4 + 4) == 4;
    if ( v6 )
      break;
    v7 = *(_DWORD *)v4;
    if ( *(_DWORD *)v4 )
    {
      v5 = *(_DWORD *)(v7 + 12);
      v3 = v4;
      v4 = *(_DWORD *)v4;
      if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27F9768 == v2 )
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
    v9[1] = 4;
    v9[2] = &unk_28898CC;
    v3 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F9764,
           v2,
           4u,
           (int)v9);
  v10 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                 (unsigned __int64 *)((char *)v1 + 20),
                 (int **)(v3 + 8));
  ContainerController::getContainerModel((ContainerController *)&v29, *v10);
  v11 = v30;
  if ( v30 )
    v12 = *(_DWORD *)(v30 + 4);
    v13 = (unsigned int *)(v30 + 4);
    while ( v12 )
      __dmb();
      v14 = __ldrex(v13);
      if ( v14 == v12 )
      {
        v15 = __strex(v12 + 1, v13);
        v12 = v14;
        if ( !v15 )
        {
          __dmb();
          v16 = 0;
          if ( !*v13 )
            v16 = 1;
          goto LABEL_24;
        }
      }
      else
        __clrex();
  v16 = 1;
  v11 = 0;
LABEL_24:
  v17 = v29;
  v18 = operator new(4u);
  LODWORD(v19) = sub_167BEB4;
  *v18 = v1;
  HIDWORD(v19) = sub_167BEAC;
  v27 = v18;
  v28 = v19;
  if ( v16 )
    v17 = 0;
  ContainerModel::registerOnContainerChangedCallback(v17, (int)&v27);
  if ( (_DWORD)v28 )
    ((void (*)(void))v28)();
  if ( v11 )
    v20 = (unsigned int *)(v11 + 4);
    if ( &pthread_create )
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    else
      v21 = (*v20)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  result = v30;
    v25 = (unsigned int *)(v30 + 8);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}
