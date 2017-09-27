

void __fastcall HorseContainerManagerController::getFriendlyName(HorseContainerManagerController *this, int a2)
{
  HorseContainerManagerController::getFriendlyName(this, a2);
}


unsigned int __fastcall HorseContainerManagerController::HorseContainerManagerController(unsigned int a1, int a2)
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
  char v19; // r5@34
  char v20; // r0@34
  unsigned int *v22; // r7@41
  unsigned int v23; // r0@43
  int v24; // [sp+4h] [bp-24h]@15
  int v25; // [sp+8h] [bp-20h]@1
  int v26; // [sp+Ch] [bp-1Ch]@34
  int v27; // [sp+10h] [bp-18h]@34

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)(a2 + 4);
  v25 = v4;
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
        v24 = v12;
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
          v22 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
          }
          else
            v23 = (*v22)--;
          if ( v23 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
        goto LABEL_20;
      }
    }
    else
      __clrex();
LABEL_19:
  v24 = 0;
LABEL_20:
  LevelContainerManagerController::LevelContainerManagerController(v3, (int)&v24);
  v13 = v25;
  if ( v25 )
    v14 = (unsigned int *)(v25 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      (*(void (**)(void))(*(_DWORD *)v13 + 12))();
  *(_DWORD *)v3 = &off_26ECE44;
  *(_DWORD *)(v3 + 72) = *(_DWORD *)v2;
  v16 = *(_DWORD *)(v2 + 4);
  *(_DWORD *)(v3 + 76) = v16;
  if ( v16 )
    v17 = (unsigned int *)(v16 + 8);
        v18 = __ldrex(v17);
      while ( __strex(v18 + 1, v17) );
      ++*v17;
  v19 = 0;
  *(_BYTE *)(v3 + 80) = 0;
  v26 = 0;
  v27 = 0;
  HorseContainerManagerController::getInventoryGridSize((HorseContainerManagerController *)v3, &v27, &v26);
  v20 = 0;
  if ( !v26 )
    v20 = 1;
  if ( !v27 )
    v19 = 1;
  *(_BYTE *)(v3 + 80) = v20 | v19;
  return v3;
}


signed int __fastcall HorseContainerManagerController::handlePlaceAll(int a1, ContainerItemStack *a2, const void **a3, int a4)
{
  int v4; // r9@1
  ContainerItemStack *v5; // r10@1
  const void **v6; // r5@1
  int v7; // r4@1
  int v8; // r0@1
  int v9; // r8@2
  int v10; // r7@2
  bool v11; // zf@3
  int v12; // r11@6
  bool v13; // zf@9
  _DWORD *v14; // r0@13
  const void *v15; // r1@14
  size_t v16; // r2@14
  int v17; // r0@15
  int v18; // r3@15
  int v19; // r1@15
  int v20; // r0@15
  int v22; // [sp+0h] [bp-28h]@1

  v4 = a1;
  v22 = a4;
  v5 = a2;
  v6 = a3;
  v7 = 0x17u % dword_27F9BF8;
  v8 = *(_DWORD *)(dword_27F9BF4 + 4 * (0x17u % dword_27F9BF8));
  if ( !v8 )
    goto LABEL_13;
  v9 = *(_DWORD *)v8;
  v10 = *(_DWORD *)(*(_DWORD *)v8 + 12);
  while ( 1 )
  {
    v11 = v10 == 23;
    if ( v10 == 23 )
      v11 = *(_DWORD *)(v9 + 4) == 23;
    if ( v11 )
      break;
    v12 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      v10 = *(_DWORD *)(v12 + 12);
      v8 = v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v12 + 12) % (unsigned int)dword_27F9BF8 == v7 )
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
    v14[1] = 23;
    v14[2] = &unk_28898CC;
    v8 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F9BF4,
           v7,
           0x17u,
           (int)v14);
  v15 = *(const void **)(v8 + 8);
  v16 = *((_DWORD *)*v6 - 3);
  if ( v16 == *((_DWORD *)v15 - 3) )
    v17 = memcmp(*v6, v15, v16);
    v18 = v22;
    v11 = v17 == 0;
    v19 = (int)v5;
    v20 = v4;
      return j_j_j__ZN26ContainerManagerController14handlePlaceOneER18ContainerItemStackRKSsi(v4, v5, (int **)v6, v22);
  else
  return j_j_j__ZN26ContainerManagerController14handlePlaceAllER18ContainerItemStackRKSsi(v20, v19, (int **)v6, v18);
}


void __fastcall HorseContainerManagerController::setAcceptedItems(HorseContainerManagerController *this)
{
  HorseContainerManagerController *v1; // r9@1
  int v2; // r8@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  signed int v7; // r1@7
  HorseContainerManagerModel *v8; // r0@11
  int v9; // r6@13
  int v10; // r10@14
  int v11; // r0@14
  int v12; // r6@15
  int v13; // r4@15
  bool v14; // zf@16
  int v15; // r5@19
  bool v16; // zf@22
  _DWORD *v17; // r0@26
  int v18; // r4@27
  int v19; // r4@27
  int v20; // r5@27
  void *v21; // r0@28
  void *v22; // r0@30
  int v23; // r0@32
  int v24; // r4@38
  int v25; // r5@38
  void *v26; // r0@39
  void *v27; // r0@41
  int v28; // r0@43
  unsigned int *v29; // r1@50
  unsigned int v30; // r0@52
  unsigned int *v31; // r4@56
  unsigned int v32; // r0@58
  __int64 v33; // [sp+0h] [bp-38h]@14
  int v34; // [sp+Ch] [bp-2Ch]@14
  int v35; // [sp+10h] [bp-28h]@38

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
  v8 = (HorseContainerManagerModel *)*((_DWORD *)v1 + 18);
  if ( v7 )
    v8 = 0;
  v9 = HorseContainerManagerModel::getEntity(v8);
  if ( v9 )
    Entity::getSlotItems((Entity *)&v34, v9, 0);
    Entity::getSlotItems((Entity *)&v33, v9, 1);
    v10 = 0x17u % dword_27F9BF8;
    v11 = *(_DWORD *)(dword_27F9BF4 + 4 * (0x17u % dword_27F9BF8));
    if ( !v11 )
      goto LABEL_26;
    v12 = *(_DWORD *)v11;
    v13 = *(_DWORD *)(*(_DWORD *)v11 + 12);
    while ( 1 )
      v14 = v13 == 23;
      if ( v13 == 23 )
        v14 = *(_DWORD *)(v12 + 4) == 23;
      if ( v14 )
        break;
      v15 = *(_DWORD *)v12;
      if ( *(_DWORD *)v12 )
        v13 = *(_DWORD *)(v15 + 12);
        v11 = v12;
        v12 = *(_DWORD *)v12;
        if ( *(_DWORD *)(v15 + 12) % (unsigned int)dword_27F9BF8 == v10 )
          continue;
    v16 = v11 == 0;
    if ( v11 )
      v11 = *(_DWORD *)v11;
      v16 = v11 == 0;
    if ( v16 )
LABEL_26:
      v17 = operator new(0x10u);
      *v17 = 0;
      v17[1] = 23;
      v17[2] = &unk_28898CC;
      v11 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27F9BF4,
              v10,
              0x17u,
              (int)v17);
    v18 = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                       (unsigned __int64 *)((char *)v1 + 20),
                       (int **)(v11 + 8));
    HorseEquipContainerController::setSaddleItems(v18, (__int64 *)&v34);
    HorseEquipContainerController::setArmorItems(v18, &v33);
    v19 = HIDWORD(v33);
    v20 = v33;
    if ( (_DWORD)v33 != HIDWORD(v33) )
      do
        v21 = *(void **)(v20 + 52);
        if ( v21 )
          operator delete(v21);
        v22 = *(void **)(v20 + 36);
        if ( v22 )
          operator delete(v22);
        v23 = *(_DWORD *)(v20 + 8);
        if ( v23 )
          (*(void (**)(void))(*(_DWORD *)v23 + 4))();
        *(_DWORD *)(v20 + 8) = 0;
        v20 += 72;
      while ( v19 != v20 );
      v20 = v33;
    if ( v20 )
      operator delete((void *)v20);
    v24 = v35;
    v25 = v34;
    if ( v34 != v35 )
        v26 = *(void **)(v25 + 52);
        if ( v26 )
          operator delete(v26);
        v27 = *(void **)(v25 + 36);
        if ( v27 )
          operator delete(v27);
        v28 = *(_DWORD *)(v25 + 8);
        if ( v28 )
          (*(void (**)(void))(*(_DWORD *)v28 + 4))();
        *(_DWORD *)(v25 + 8) = 0;
        v25 += 72;
      while ( v24 != v25 );
      v25 = v34;
    if ( v25 )
      operator delete((void *)v25);
    v29 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
    else
      v30 = (*v29)--;
    if ( v30 == 1 )
      v31 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        __dmb();
        do
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
}


void __fastcall HorseContainerManagerController::~HorseContainerManagerController(HorseContainerManagerController *this)
{
  HorseContainerManagerController *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26ECE44;
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


int __fastcall HorseContainerManagerController::getEntity(HorseContainerManagerController *this)
{
  int v1; // r4@1
  unsigned int v2; // r1@2
  unsigned int *v3; // r6@2
  unsigned int v4; // r2@5
  unsigned int v5; // r3@6
  int v6; // r5@7
  bool v7; // zf@7
  unsigned int v8; // r0@13
  unsigned int *v10; // r6@18
  unsigned int v11; // r0@20

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
          v6 = 0;
          v7 = *v3 == 0;
          if ( *v3 )
          {
            this = (HorseContainerManagerController *)*((_DWORD *)this + 18);
            v7 = this == 0;
          }
          if ( !v7 )
            v6 = HorseContainerManagerModel::getEntity(this);
          if ( &pthread_create )
            __dmb();
            do
              v8 = __ldrex(v3);
            while ( __strex(v8 - 1, v3) );
          else
            v8 = (*v3)--;
          if ( v8 == 1 )
            v10 = (unsigned int *)(v1 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
            if ( &pthread_create )
            {
              __dmb();
              do
                v11 = __ldrex(v10);
              while ( __strex(v11 - 1, v10) );
            }
            else
              v11 = (*v10)--;
            if ( v11 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
          return v6;
        }
      }
      else
        __clrex();
    }
  }
  return 0;
}


ContainerManagerController *__fastcall HorseContainerManagerController::~HorseContainerManagerController(HorseContainerManagerController *this)
{
  HorseContainerManagerController *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26ECE44;
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


  if ( HorseContainerManagerController::canWearSaddle((HorseContainerManagerController *)v2) == 1 )
{
    HorseScreenController::_getEquipGridSize((HorseScreenController *)&v11, v1);
    v5 = 0;
    if ( v12 < 2 )
      v5 = 1;
  }
  else
  {
  if ( HIDWORD(v2) )
    v6 = (unsigned int *)(HIDWORD(v2) + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 == 1 )
      v8 = (unsigned int *)(HIDWORD(v2) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 8))(HIDWORD(v2));
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  return v5;
}


int __fastcall HorseContainerManagerController::init(HorseContainerManagerController *this)
{
  signed int v1; // r5@1
  HorseContainerManagerController *v2; // r4@1
  signed int v3; // r0@1
  int result; // r0@5
  int v5; // [sp+0h] [bp-18h]@1
  int v6; // [sp+4h] [bp-14h]@1

  v1 = 0;
  v2 = this;
  v5 = 0;
  v6 = 0;
  HorseContainerManagerController::getInventoryGridSize(this, &v6, &v5);
  v3 = 0;
  if ( !v5 )
    v3 = 1;
  if ( !v6 )
    v1 = 1;
  result = v3 | v1;
  *((_BYTE *)v2 + 80) = result;
  return result;
}


signed int __fastcall HorseContainerManagerController::canWearSaddle(HorseContainerManagerController *this)
{
  int v1; // r4@1
  unsigned int v2; // r1@2
  unsigned int *v3; // r7@2
  unsigned int v4; // r2@5
  unsigned int v5; // r3@6
  signed int v6; // r8@7
  bool v7; // zf@7
  Entity *v8; // r0@10
  int v9; // r1@10
  int v10; // r5@11
  int v11; // r6@11
  void *v12; // r0@14
  void *v13; // r0@16
  int v14; // r0@18
  unsigned int v15; // r0@31
  unsigned int *v16; // r5@35
  unsigned int v17; // r0@37
  int v19; // [sp+0h] [bp-28h]@11
  int v20; // [sp+4h] [bp-24h]@11

  v1 = *((_DWORD *)this + 19);
  if ( !v1 )
    return 0;
  v2 = *(_DWORD *)(v1 + 4);
  v3 = (unsigned int *)(v1 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v2 )
        return 0;
      __dmb();
      v4 = __ldrex(v3);
      if ( v4 == v2 )
        break;
      __clrex();
      v2 = v4;
    }
    v5 = __strex(v2 + 1, v3);
    v2 = v4;
  }
  while ( v5 );
  __dmb();
  v6 = 0;
  v7 = *v3 == 0;
  if ( *v3 )
    this = (HorseContainerManagerController *)*((_DWORD *)this + 18);
    v7 = this == 0;
  if ( v7 )
    goto LABEL_29;
  v8 = (Entity *)HorseContainerManagerModel::getEntity(this);
  v9 = Entity::getEquippableComponent(v8);
  if ( !v9 )
    v6 = 0;
LABEL_29:
    if ( &pthread_create )
      do
        v15 = __ldrex(v3);
      while ( __strex(v15 - 1, v3) );
    else
      v15 = (*v3)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v1 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
    return v6;
  EquippableComponent::getSlot((EquippableComponent *)&v19, v9, 0);
  v10 = v20;
  v11 = v19;
  if ( v20 != v19 )
    v6 = 1;
  if ( v19 != v20 )
    do
      v12 = *(void **)(v11 + 52);
      if ( v12 )
        operator delete(v12);
      v13 = *(void **)(v11 + 36);
      if ( v13 )
        operator delete(v13);
      v14 = *(_DWORD *)(v11 + 8);
      if ( v14 )
        (*(void (**)(void))(*(_DWORD *)v14 + 4))();
      *(_DWORD *)(v11 + 8) = 0;
      v11 += 72;
    while ( v10 != v11 );
    v11 = v19;
  if ( v11 )
    operator delete((void *)v11);
  if ( v1 )
  return v6;
}


int __fastcall HorseContainerManagerController::getChestInventorySize(HorseContainerManagerController *this)
{
  int v1; // r4@1
  unsigned int v2; // r1@2
  unsigned int *v3; // r6@2
  unsigned int v4; // r2@5
  unsigned int v5; // r3@6
  int v6; // r5@7
  bool v7; // zf@7
  int v8; // r0@10
  unsigned int v10; // r0@16
  unsigned int *v11; // r6@20
  unsigned int v12; // r0@22

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
          v6 = 0;
          v7 = *v3 == 0;
          if ( *v3 )
          {
            this = (HorseContainerManagerController *)*((_DWORD *)this + 18);
            v7 = this == 0;
          }
          if ( !v7 )
            v8 = HorseContainerManagerModel::getEntity(this);
            if ( v8 )
              v6 = (*(int (**)(void))(*(_DWORD *)v8 + 376))();
            else
              v6 = 0;
          if ( &pthread_create )
            __dmb();
            do
              v10 = __ldrex(v3);
            while ( __strex(v10 - 1, v3) );
          else
            v10 = (*v3)--;
          if ( v10 == 1 )
            v11 = (unsigned int *)(v1 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
            if ( &pthread_create )
            {
              __dmb();
              do
                v12 = __ldrex(v11);
              while ( __strex(v12 - 1, v11) );
            }
              v12 = (*v11)--;
            if ( v12 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
          return v6;
        }
      }
      else
        __clrex();
    }
  }
  return 0;
}


signed int __fastcall HorseContainerManagerController::canWearArmor(HorseContainerManagerController *this)
{
  int v1; // r8@1
  unsigned int v2; // r1@2
  unsigned int *v3; // r7@2
  unsigned int v4; // r2@5
  unsigned int v5; // r3@6
  signed int v6; // r5@7
  bool v7; // zf@7
  Entity *v8; // r0@10
  int v9; // r1@10
  int v10; // r4@11
  int v11; // r6@11
  void *v12; // r0@14
  void *v13; // r0@16
  int v14; // r0@18
  unsigned int v15; // r0@31
  unsigned int *v16; // r4@35
  unsigned int v17; // r0@37
  int v19; // [sp+0h] [bp-28h]@11
  int v20; // [sp+4h] [bp-24h]@11

  v1 = *((_DWORD *)this + 19);
  if ( !v1 )
    return 0;
  v2 = *(_DWORD *)(v1 + 4);
  v3 = (unsigned int *)(v1 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v2 )
        return 0;
      __dmb();
      v4 = __ldrex(v3);
      if ( v4 == v2 )
        break;
      __clrex();
      v2 = v4;
    }
    v5 = __strex(v2 + 1, v3);
    v2 = v4;
  }
  while ( v5 );
  __dmb();
  v6 = 0;
  v7 = *v3 == 0;
  if ( *v3 )
    this = (HorseContainerManagerController *)*((_DWORD *)this + 18);
    v7 = this == 0;
  if ( v7 )
    goto LABEL_29;
  v8 = (Entity *)HorseContainerManagerModel::getEntity(this);
  v9 = Entity::getEquippableComponent(v8);
  if ( !v9 )
    v6 = 0;
LABEL_29:
    if ( &pthread_create )
      do
        v15 = __ldrex(v3);
      while ( __strex(v15 - 1, v3) );
    else
      v15 = (*v3)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v1 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
    return v6;
  EquippableComponent::getSlot((EquippableComponent *)&v19, v9, 1);
  v10 = v20;
  v11 = v19;
  if ( v20 != v19 )
    v6 = 1;
  if ( v19 != v20 )
    do
      v12 = *(void **)(v11 + 52);
      if ( v12 )
        operator delete(v12);
      v13 = *(void **)(v11 + 36);
      if ( v13 )
        operator delete(v13);
      v14 = *(_DWORD *)(v11 + 8);
      if ( v14 )
        (*(void (**)(void))(*(_DWORD *)v14 + 4))();
      *(_DWORD *)(v11 + 8) = 0;
      v11 += 72;
    while ( v10 != v11 );
    v11 = v19;
  if ( v11 )
    operator delete((void *)v11);
  if ( v1 )
  return v6;
}


signed int __fastcall HorseContainerManagerController::canWearCarpet(HorseContainerManagerController *this)
{
  int v1; // r4@1
  unsigned int v2; // r1@2
  unsigned int *v3; // r6@2
  unsigned int v4; // r2@5
  unsigned int v5; // r3@6
  signed int v6; // r5@7
  bool v7; // zf@7
  Entity *v8; // r0@10
  int v9; // r1@10
  int v10; // r5@11
  int v11; // r7@11
  int v12; // r1@12
  int v13; // r2@13
  signed int v14; // r8@16
  void *v15; // r0@22
  void *v16; // r0@24
  int v17; // r0@26
  unsigned int v18; // r0@38
  unsigned int *v19; // r6@42
  unsigned int v20; // r0@44
  int v22; // [sp+0h] [bp-28h]@11
  int v23; // [sp+4h] [bp-24h]@11

  v1 = *((_DWORD *)this + 19);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 4);
    v3 = (unsigned int *)(v1 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v2 )
          return 0;
        __dmb();
        v4 = __ldrex(v3);
        if ( v4 == v2 )
          break;
        __clrex();
        v2 = v4;
      }
      v5 = __strex(v2 + 1, v3);
      v2 = v4;
    }
    while ( v5 );
    __dmb();
    v6 = 0;
    v7 = *v3 == 0;
    if ( *v3 )
      this = (HorseContainerManagerController *)*((_DWORD *)this + 18);
      v7 = this == 0;
    if ( v7 )
      goto LABEL_52;
    v8 = (Entity *)HorseContainerManagerModel::getEntity(this);
    v9 = Entity::getEquippableComponent(v8);
    if ( !v9 )
      goto LABEL_53;
    EquippableComponent::getSlot((EquippableComponent *)&v22, v9, 1);
    v11 = v23;
    v10 = v22;
    if ( v22 == v23 )
      v14 = 1;
    else
      v12 = v22;
        v13 = *(_DWORD *)(v12 + 4);
        if ( v13 )
        {
          if ( *(_BYTE *)(v13 + 4) == *(_BYTE *)(Block::mWoolCarpet + 4) )
            break;
        }
        v12 += 72;
        if ( v23 == v12 )
          v14 = 1;
          goto LABEL_21;
      v14 = 0;
LABEL_21:
      if ( v22 != v23 )
        do
          v15 = *(void **)(v10 + 52);
          if ( v15 )
            operator delete(v15);
          v16 = *(void **)(v10 + 36);
          if ( v16 )
            operator delete(v16);
          v17 = *(_DWORD *)(v10 + 8);
          if ( v17 )
            (*(void (**)(void))(*(_DWORD *)v17 + 4))();
          *(_DWORD *)(v10 + 8) = 0;
          v10 += 72;
        while ( v11 != v10 );
        v10 = v22;
    if ( v10 )
      operator delete((void *)v10);
    if ( v14 != 1 )
      v6 = 1;
LABEL_53:
      v6 = 0;
    if ( v1 )
LABEL_52:
      if ( &pthread_create )
          v18 = __ldrex(v3);
        while ( __strex(v18 - 1, v3) );
      else
        v18 = (*v3)--;
      if ( v18 == 1 )
        v19 = (unsigned int *)(v1 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
        if ( &pthread_create )
          __dmb();
          do
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
        else
          v20 = (*v19)--;
        if ( v20 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
  }
  else
  return v6;
}


void __fastcall HorseContainerManagerController::~HorseContainerManagerController(HorseContainerManagerController *this)
{
  HorseContainerManagerController::~HorseContainerManagerController(this);
}


void __fastcall HorseContainerManagerController::getFriendlyName(HorseContainerManagerController *this, int a2)
{
  int v2; // r4@1
  void **v3; // r5@1
  unsigned int v4; // r2@2
  unsigned int *v5; // r0@2
  unsigned int v6; // r3@5
  unsigned int v7; // r6@6
  HorseContainerManagerModel *v8; // r0@7
  bool v9; // zf@7
  int v10; // r0@10
  int v11; // r6@10
  int v12; // r0@11
  unsigned int v13; // r0@18
  const void **v14; // r0@18
  const void **v15; // r0@18
  char *v16; // r0@18
  void *v17; // r0@19
  unsigned int *v18; // r2@20
  signed int v19; // r1@22
  unsigned int *v20; // r1@28
  unsigned int v21; // r0@30
  unsigned int *v22; // r5@34
  unsigned int v23; // r0@36
  unsigned int *v24; // r2@42
  signed int v25; // r1@44
  int v26; // [sp+8h] [bp-30h]@18
  char *v27; // [sp+Ch] [bp-2Ch]@18

  v2 = *(_DWORD *)(a2 + 76);
  v3 = (void **)this;
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
          v8 = (HorseContainerManagerModel *)*v5;
          v9 = v8 == 0;
          if ( v8 )
          {
            v8 = *(HorseContainerManagerModel **)(a2 + 72);
            v9 = v8 == 0;
          }
          if ( v9 )
            goto def_168FD14;
          v10 = HorseContainerManagerModel::getEntity(v8);
          v11 = v10;
          if ( !v10 )
          v12 = (*(int (**)(void))(*(_DWORD *)v10 + 488))();
          if ( EntityClassTree::isTypeInstanceOf(v12, 2118400) == 1 )
            switch ( (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 1200))(v11) )
            {
              case 0:
                sub_21E94B4(v3, "entity.horse.name");
                goto LABEL_28;
              case 4:
                sub_21E94B4(v3, "entity.skeletonhorse.name");
              case 2:
                sub_21E94B4(v3, "entity.mule.name");
              case 3:
                sub_21E94B4(v3, "entity.undeadhorse.name");
              case 1:
                sub_21E94B4(v3, "entity.donkey.name");
              default:
                goto def_168FD14;
            }
          v13 = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 488))(v11);
          EntityTypeToString((void **)&v26, v13, 0);
          v14 = sub_21E82D8((const void **)&v26, 0, (unsigned int)"entity.", (_BYTE *)7);
          v27 = (char *)*v14;
          *v14 = &unk_28898CC;
          v15 = sub_21E7408((const void **)&v27, ".name", 5u);
          *v3 = (void *)*v15;
          *v15 = &unk_28898CC;
          v16 = v27 - 12;
          if ( (int *)(v27 - 12) != &dword_28898C0 )
            v24 = (unsigned int *)(v27 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v25 = __ldrex(v24);
              while ( __strex(v25 - 1, v24) );
            else
              v25 = (*v24)--;
            if ( v25 <= 0 )
              j_j_j_j__ZdlPv_9(v16);
          v17 = (void *)(v26 - 12);
          if ( (int *)(v26 - 12) != &dword_28898C0 )
            v18 = (unsigned int *)(v26 - 4);
                v19 = __ldrex(v18);
              while ( __strex(v19 - 1, v18) );
              v19 = (*v18)--;
            if ( v19 <= 0 )
              j_j_j_j__ZdlPv_9(v17);
          goto LABEL_16;
        }
      }
      else
        __clrex();
    }
  }
  v2 = 0;
def_168FD14:
  sub_21E94B4(v3, (const char *)&unk_257BC67);
LABEL_16:
LABEL_28:
    v20 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    else
      v21 = (*v20)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
}


int __fastcall HorseContainerManagerController::getInventoryGridSize(int result, int *a2, int *a3)
{
  int *v3; // r5@1
  int *v4; // r6@1
  int v5; // r4@1
  unsigned int v6; // r1@2
  unsigned int *v7; // r7@2
  unsigned int v8; // r2@5
  unsigned int v9; // r3@6
  int v11; // r0@10
  unsigned int *v18; // r5@19

  v3 = a2;
  v4 = a3;
  *a2 = 0;
  *a3 = 0;
  v5 = *(_DWORD *)(result + 76);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 4);
    v7 = (unsigned int *)(v5 + 4);
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
          __dmb();
          _ZF = *v7 == 0;
          if ( *v7 )
          {
            result = *(_DWORD *)(result + 72);
            _ZF = result == 0;
          }
          if ( !_ZF )
            v11 = HorseContainerManagerModel::getEntity((HorseContainerManagerModel *)result);
            if ( v11 )
            {
              _R0 = (*(int (**)(void))(*(_DWORD *)v11 + 376))();
              if ( _R0 >= 1 )
              {
                _R1 = 1431655766;
                __asm { SMMUL.W         R0, R0, R1 }
                *v4 = 3;
                *v3 = _R0 + (_R0 >> 31);
              }
            }
          if ( &pthread_create )
            __dmb();
            do
              result = __ldrex(v7);
            while ( __strex(result - 1, v7) );
          else
            result = (*v7)--;
          if ( result == 1 )
            v18 = (unsigned int *)(v5 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
            if ( &pthread_create )
              __dmb();
              do
                result = __ldrex(v18);
              while ( __strex(result - 1, v18) );
            else
              result = (*v18)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
          return result;
        }
      }
      else
        __clrex();
    }
  }
  return result;
}


signed int __fastcall HorseContainerManagerController::isChestTabOpen(HorseContainerManagerController *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 80);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


int __fastcall HorseContainerManagerController::getEntityId(int result, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r6@2
  unsigned int v5; // r3@5
  unsigned int v6; // r5@6
  bool v7; // zf@7
  unsigned int *v8; // r5@19

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
          v7 = *v4 == 0;
          if ( *v4 )
          {
            a2 = *(_DWORD *)(a2 + 72);
            v7 = a2 == 0;
          }
          if ( v7 )
            *(_DWORD *)result = -1;
            *(_DWORD *)(result + 4) = -1;
          else
            LevelContainerManagerModel::getEntityUniqueID((LevelContainerManagerModel *)result, a2);
          if ( &pthread_create )
            __dmb();
            do
              result = __ldrex(v4);
            while ( __strex(result - 1, v4) );
            result = (*v4)--;
          if ( result == 1 )
            v8 = (unsigned int *)(v2 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
            if ( &pthread_create )
            {
              __dmb();
              do
                result = __ldrex(v8);
              while ( __strex(result - 1, v8) );
            }
            else
              result = (*v8)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
          return result;
        }
      }
      else
        __clrex();
    }
  }
  *(_DWORD *)result = -1;
  *(_DWORD *)(result + 4) = -1;
  return result;
}


int __fastcall HorseContainerManagerController::getEquipGridSize(int result, int *a2, int *a3)
{
  int *v3; // r6@1
  int *v4; // r5@1
  int v5; // r4@1
  unsigned int v6; // r1@2
  unsigned int *v7; // r7@2
  unsigned int v8; // r2@5
  unsigned int v9; // r3@6
  bool v10; // zf@7
  int v11; // r0@10
  int v12; // r0@11
  unsigned int *v13; // r5@19

  v3 = a2;
  v4 = a3;
  *a2 = 0;
  *a3 = 0;
  v5 = *(_DWORD *)(result + 76);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 4);
    v7 = (unsigned int *)(v5 + 4);
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
          __dmb();
          v10 = *v7 == 0;
          if ( *v7 )
          {
            result = *(_DWORD *)(result + 72);
            v10 = result == 0;
          }
          if ( !v10 )
            v11 = HorseContainerManagerModel::getEntity((HorseContainerManagerModel *)result);
            if ( v11 )
            {
              v12 = (*(int (**)(void))(*(_DWORD *)v11 + 372))();
              if ( v12 >= 1 )
              {
                *v3 = 1;
                *v4 = v12;
              }
            }
          if ( &pthread_create )
            __dmb();
            do
              result = __ldrex(v7);
            while ( __strex(result - 1, v7) );
          else
            result = (*v7)--;
          if ( result == 1 )
            v13 = (unsigned int *)(v5 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
            if ( &pthread_create )
              __dmb();
              do
                result = __ldrex(v13);
              while ( __strex(result - 1, v13) );
            else
              result = (*v13)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
          return result;
        }
      }
      else
        __clrex();
    }
  }
  return result;
}


void __fastcall HorseContainerManagerController::setAcceptedItems(HorseContainerManagerController *this)
{
  HorseContainerManagerController::setAcceptedItems(this);
}
