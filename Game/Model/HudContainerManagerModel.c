

int __fastcall HudContainerManagerModel::getItems(HudContainerManagerModel *this, int a2)
{
  HudContainerManagerModel *v2; // r8@1
  int v3; // r0@1
  int v4; // r4@2
  int v5; // r5@2
  bool v6; // zf@3
  int v7; // r6@6
  bool v8; // zf@9
  __int64 v9; // kr00_8@12
  unsigned int *v10; // r1@13
  unsigned int v11; // r2@15
  unsigned __int64 *v12; // r0@18
  int result; // r0@18
  unsigned int *v14; // r1@19
  unsigned int *v15; // r5@25

  v2 = this;
  v3 = *(_DWORD *)(dword_27FAAF4 + 4 * (0x1Bu % dword_27FAAF8));
  if ( !v3 )
    goto LABEL_8;
  v4 = *(_DWORD *)v3;
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  while ( 1 )
  {
    v6 = v5 == 27;
    if ( v5 == 27 )
      v6 = *(_DWORD *)(v4 + 4) == 27;
    if ( v6 )
      break;
    v7 = *(_DWORD *)v4;
    if ( *(_DWORD *)v4 )
    {
      v5 = *(_DWORD *)(v7 + 12);
      v3 = v4;
      v4 = *(_DWORD *)v4;
      if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27FAAF8 == 0x1Bu % dword_27FAAF8 )
        continue;
    }
  }
  v8 = v3 == 0;
  if ( v3 )
    v3 = *(_DWORD *)v3;
    v8 = v3 == 0;
  if ( v8 )
LABEL_8:
    sub_21E5A84("_Map_base::at");
  v9 = *(_QWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                    (unsigned __int64 *)(a2 + 40),
                    (int **)(v3 + 8));
  if ( HIDWORD(v9) )
    v10 = (unsigned int *)(HIDWORD(v9) + 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
    else
      ++*v10;
  v12 = (unsigned __int64 *)(*(int (**)(void))(*(_DWORD *)v9 + 36))();
  result = std::vector<ItemInstance,std::allocator<ItemInstance>>::vector((int)v2, v12);
    v14 = (unsigned int *)(HIDWORD(v9) + 4);
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
      result = (*v14)--;
    if ( result == 1 )
      v15 = (unsigned int *)(HIDWORD(v9) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v9) + 8))(HIDWORD(v9));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
      }
      else
        result = (*v15)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v9) + 12))(HIDWORD(v9));
  return result;
}


char *__fastcall HudContainerManagerModel::getComplexItems(HudContainerManagerModel *this)
{
  HudContainerManagerModel *v1; // r5@1
  int v2; // r0@1
  int v3; // r4@2
  unsigned __int64 *v4; // r8@2
  int v5; // r7@2
  bool v6; // zf@3
  int v7; // r5@6
  bool v8; // zf@9
  __int64 v9; // kr00_8@12
  unsigned int *v10; // r1@13
  unsigned int v11; // r2@15
  char *v12; // r5@18
  unsigned int *v13; // r1@19
  unsigned int v14; // r0@21
  unsigned int *v15; // r6@25
  unsigned int v16; // r0@27

  v1 = this;
  v2 = *(_DWORD *)(dword_27FAAF4 + 4 * (0x1Bu % dword_27FAAF8));
  if ( !v2 )
    goto LABEL_8;
  v3 = *(_DWORD *)v2;
  v4 = (unsigned __int64 *)((char *)v1 + 40);
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  while ( 1 )
  {
    v6 = v5 == 27;
    if ( v5 == 27 )
      v6 = *(_DWORD *)(v3 + 4) == 27;
    if ( v6 )
      break;
    v7 = *(_DWORD *)v3;
    if ( *(_DWORD *)v3 )
    {
      v5 = *(_DWORD *)(v7 + 12);
      v2 = v3;
      v3 = *(_DWORD *)v3;
      if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27FAAF8 == 0x1Bu % dword_27FAAF8 )
        continue;
    }
  }
  v8 = v2 == 0;
  if ( v2 )
    v2 = *(_DWORD *)v2;
    v8 = v2 == 0;
  if ( v8 )
LABEL_8:
    sub_21E5A84("_Map_base::at");
  v9 = *(_QWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                    v4,
                    (int **)(v2 + 8));
  if ( HIDWORD(v9) )
    v10 = (unsigned int *)(HIDWORD(v9) + 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
    else
      ++*v10;
  v12 = ContainerModel::getComplexItems((ContainerModel *)v9);
    v13 = (unsigned int *)(HIDWORD(v9) + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      v15 = (unsigned int *)(HIDWORD(v9) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v9) + 8))(HIDWORD(v9));
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v9) + 12))(HIDWORD(v9));
  return v12;
}


void __fastcall HudContainerManagerModel::~HudContainerManagerModel(HudContainerManagerModel *this)
{
  HudContainerManagerModel::~HudContainerManagerModel(this);
}


int __fastcall HudContainerManagerModel::HudContainerManagerModel(double a1, int a2)
{
  int v2; // r4@1

  v2 = LODWORD(a1);
  ContainerManagerModel::ContainerManagerModel(a1, a2);
  *(_DWORD *)v2 = &off_26ED2F4;
  *(_DWORD *)(v2 + 68) = 0;
  *(_DWORD *)(v2 + 72) = 0;
  *(_DWORD *)(v2 + 76) = 0;
  ContainerManagerModel::setContainerType(v2, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 44))(v2);
  return v2;
}


int __fastcall HudContainerManagerModel::setFixedInventorySize(HudContainerManagerModel *this, int a2)
{
  HudContainerManagerModel *v2; // r5@1
  int v3; // r0@1
  int v4; // r4@2
  unsigned __int64 *v5; // r9@2
  int v6; // r5@2
  bool v7; // zf@3
  int v8; // r6@6
  bool v9; // zf@9
  __int64 v10; // r0@12
  int v11; // r4@12
  unsigned int v12; // r2@15
  unsigned int *v13; // r5@27

  v2 = this;
  v3 = *(_DWORD *)(dword_27FAAF4 + 4 * (0x1Bu % dword_27FAAF8));
  if ( !v3 )
    goto LABEL_8;
  v4 = *(_DWORD *)v3;
  v5 = (unsigned __int64 *)((char *)v2 + 40);
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  while ( 1 )
  {
    v7 = v6 == 27;
    if ( v6 == 27 )
      v7 = *(_DWORD *)(v4 + 4) == 27;
    if ( v7 )
      break;
    v8 = *(_DWORD *)v4;
    if ( *(_DWORD *)v4 )
    {
      v6 = *(_DWORD *)(v8 + 12);
      v3 = v4;
      v4 = *(_DWORD *)v4;
      if ( *(_DWORD *)(v8 + 12) % (unsigned int)dword_27FAAF8 == 0x1Bu % dword_27FAAF8 )
        continue;
    }
  }
  v9 = v3 == 0;
  if ( v3 )
    v3 = *(_DWORD *)v3;
    v9 = v3 == 0;
  if ( v9 )
LABEL_8:
    sub_21E5A84("_Map_base::at");
  HIDWORD(v10) = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                   v5,
                   (int **)(v3 + 8));
  v11 = *(_QWORD *)HIDWORD(v10) >> 32;
  LODWORD(v10) = *(_QWORD *)HIDWORD(v10);
  if ( v11 )
    HIDWORD(v10) = v11 + 4;
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex((unsigned int *)HIDWORD(v10));
      while ( __strex(v12 + 1, (unsigned int *)HIDWORD(v10)) );
    else
      ++*(_DWORD *)HIDWORD(v10);
  if ( (_DWORD)v10 )
    LODWORD(v10) = ContainerModel::resize(v10);
        LODWORD(v10) = __ldrex((unsigned int *)HIDWORD(v10));
      while ( __strex(v10 - 1, (unsigned int *)HIDWORD(v10)) );
      LODWORD(v10) = (*(_DWORD *)HIDWORD(v10))--;
    if ( (_DWORD)v10 == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          LODWORD(v10) = __ldrex(v13);
        while ( __strex(v10 - 1, v13) );
      }
      else
        LODWORD(v10) = (*v13)--;
      if ( (_DWORD)v10 == 1 )
        LODWORD(v10) = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  return v10;
}


signed int __fastcall HudContainerManagerModel::init(HudContainerManagerModel *this)
{
  HudContainerManagerModel *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r2@15
  int v8; // r5@15
  unsigned int *v9; // r1@16
  unsigned int v10; // r0@18
  unsigned int *v11; // r6@22
  unsigned int v12; // r0@24
  int v13; // r10@29
  int v14; // r0@29
  int v15; // r7@30
  int v16; // r5@30
  bool v17; // zf@31
  int v18; // r6@34
  bool v19; // zf@37
  _DWORD *v20; // r0@41
  int v21; // r5@42
  _DWORD *v22; // r0@42
  __int64 v23; // r1@42
  PlayerInventoryProxy *v24; // r0@44
  PlayerInventoryProxy *v25; // r5@44
  signed int result; // r0@44
  signed int v27; // r6@45
  __int64 v28; // r0@46
  _DWORD *v29; // [sp+0h] [bp-50h]@42
  __int64 v30; // [sp+8h] [bp-48h]@42
  int v31; // [sp+10h] [bp-40h]@15
  int v32; // [sp+14h] [bp-3Ch]@15
  char v33; // [sp+18h] [bp-38h]@15
  int v34; // [sp+1Ch] [bp-34h]@15
  int v35; // [sp+20h] [bp-30h]@1
  char v36; // [sp+24h] [bp-2Ch]@1
  int v37; // [sp+28h] [bp-28h]@1

  v1 = this;
  v35 = 24;
  ContainerFactory::createModel<HudContainerModel,ContainerEnumName,Player &>(
    (int)&v36,
    (unsigned int *)&v35,
    *((Player **)this + 1));
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v36);
  v2 = v37;
  if ( v37 )
  {
    v3 = (unsigned int *)(v37 + 4);
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
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  v32 = 27;
  v7 = *((_DWORD *)v1 + 1);
  v31 = 0;
  ContainerFactory::createModel<FixedInventoryContainerModel,ContainerEnumName,Player &,int>(
    (int)&v33,
    (unsigned int *)&v32,
    v7,
    &v31);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v33);
  v8 = v34;
  if ( v34 )
    v9 = (unsigned int *)(v34 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  v13 = 0x1Bu % dword_27FAAF8;
  v14 = *(_DWORD *)(dword_27FAAF4 + 4 * (0x1Bu % dword_27FAAF8));
  if ( !v14 )
    goto LABEL_41;
  v15 = *(_DWORD *)v14;
  v16 = *(_DWORD *)(*(_DWORD *)v14 + 12);
  while ( 1 )
    v17 = v16 == 27;
    if ( v16 == 27 )
      v17 = *(_DWORD *)(v15 + 4) == 27;
    if ( v17 )
      break;
    v18 = *(_DWORD *)v15;
    if ( *(_DWORD *)v15 )
      v16 = *(_DWORD *)(v18 + 12);
      v14 = v15;
      v15 = *(_DWORD *)v15;
      if ( *(_DWORD *)(v18 + 12) % (unsigned int)dword_27FAAF8 == v13 )
        continue;
  v19 = v14 == 0;
  if ( v14 )
    v14 = *(_DWORD *)v14;
    v19 = v14 == 0;
  if ( v19 )
LABEL_41:
    v20 = operator new(0x10u);
    *v20 = 0;
    v20[1] = 27;
    v20[2] = &unk_28898CC;
    v14 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27FAAF4,
            v13,
            0x1Bu,
            (int)v20);
  v21 = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (unsigned __int64 *)v1 + 5,
                     (int **)(v14 + 8));
  v22 = operator new(4u);
  LODWORD(v23) = sub_16A7B68;
  *v22 = v1;
  HIDWORD(v23) = sub_16A7B44;
  v29 = v22;
  v30 = v23;
  ContainerModel::registerPlayerNotificationCallback(v21, (int)&v29);
  if ( (_DWORD)v30 )
    ((void (*)(void))v30)();
  v24 = (PlayerInventoryProxy *)Player::getSupplies(*((Player **)v1 + 1));
  v25 = v24;
  result = PlayerInventoryProxy::getLinkedSlotsCount(v24);
  if ( result >= 1 )
    v27 = 0;
    do
      v28 = *((_QWORD *)v1 + 9);
      if ( (_DWORD)v28 == HIDWORD(v28) )
        std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
          (unsigned __int64 *)((char *)v1 + 68),
          (int)&ItemInstance::EMPTY_ITEM);
        ItemInstance::ItemInstance((ItemInstance *)v28, (int)&ItemInstance::EMPTY_ITEM);
        *((_DWORD *)v1 + 18) += 72;
      ++v27;
      result = PlayerInventoryProxy::getLinkedSlotsCount(v25);
    while ( v27 < result );
  return result;
}


unsigned int __fastcall HudContainerManagerModel::refreshHotbar(HudContainerManagerModel *this)
{
  HudContainerManagerModel *v1; // r5@1
  int v2; // r0@1
  int v3; // r4@2
  unsigned __int64 *v4; // r8@2
  int v5; // r7@2
  bool v6; // zf@3
  int v7; // r5@6
  bool v8; // zf@9
  unsigned int result; // r0@12
  __int64 v10; // kr00_8@12
  unsigned int *v11; // r1@13
  unsigned int v12; // r2@15
  unsigned int *v13; // r1@21
  unsigned int *v14; // r5@27

  v1 = this;
  v2 = *(_DWORD *)(dword_27FAAF4 + 4 * (0x18u % dword_27FAAF8));
  if ( !v2 )
    goto LABEL_8;
  v3 = *(_DWORD *)v2;
  v4 = (unsigned __int64 *)((char *)v1 + 40);
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  while ( 1 )
  {
    v6 = v5 == 24;
    if ( v5 == 24 )
      v6 = *(_DWORD *)(v3 + 4) == 24;
    if ( v6 )
      break;
    v7 = *(_DWORD *)v3;
    if ( *(_DWORD *)v3 )
    {
      v5 = *(_DWORD *)(v7 + 12);
      v2 = v3;
      v3 = *(_DWORD *)v3;
      if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27FAAF8 == 0x18u % dword_27FAAF8 )
        continue;
    }
  }
  v8 = v2 == 0;
  if ( v2 )
    v2 = *(_DWORD *)v2;
    v8 = v2 == 0;
  if ( v8 )
LABEL_8:
    sub_21E5A84("_Map_base::at");
  v10 = *(_QWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                     v4,
                     (int **)(v2 + 8));
  result = v10;
  if ( HIDWORD(v10) )
    v11 = (unsigned int *)(HIDWORD(v10) + 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
    else
      ++*v11;
  if ( (_DWORD)v10 )
    result = (**(int (***)(void))v10)();
    v13 = (unsigned int *)(HIDWORD(v10) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v10) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v10) + 8))(HIDWORD(v10));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v10) + 12))(HIDWORD(v10));
  return result;
}


ContainerManagerModel *__fastcall HudContainerManagerModel::~HudContainerManagerModel(HudContainerManagerModel *this)
{
  HudContainerManagerModel *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_26ED2F4;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 68);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void **)(v2 + 52);
      if ( v4 )
        operator delete(v4);
      v5 = *(void **)(v2 + 36);
      if ( v5 )
        operator delete(v5);
      v6 = *(_DWORD *)(v2 + 8);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v2 + 8) = 0;
      v2 += 72;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 17);
  }
  if ( v2 )
    operator delete((void *)v2);
  return j_j_j__ZN21ContainerManagerModelD2Ev(v1);
}


int __fastcall HudContainerManagerModel::getFixedInventorySize(HudContainerManagerModel *this)
{
  HudContainerManagerModel *v1; // r5@1
  int v2; // r0@1
  int v3; // r4@2
  unsigned __int64 *v4; // r8@2
  int v5; // r7@2
  bool v6; // zf@3
  int v7; // r5@6
  bool v8; // zf@9
  __int64 v9; // kr00_8@12
  unsigned int *v10; // r1@13
  unsigned int v11; // r2@15
  int v12; // r5@19
  unsigned int *v13; // r1@22
  unsigned int v14; // r0@24
  unsigned int *v15; // r6@28
  unsigned int v16; // r0@30

  v1 = this;
  v2 = *(_DWORD *)(dword_27FAAF4 + 4 * (0x1Bu % dword_27FAAF8));
  if ( !v2 )
    goto LABEL_8;
  v3 = *(_DWORD *)v2;
  v4 = (unsigned __int64 *)((char *)v1 + 40);
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  while ( 1 )
  {
    v6 = v5 == 27;
    if ( v5 == 27 )
      v6 = *(_DWORD *)(v3 + 4) == 27;
    if ( v6 )
      break;
    v7 = *(_DWORD *)v3;
    if ( *(_DWORD *)v3 )
    {
      v5 = *(_DWORD *)(v7 + 12);
      v2 = v3;
      v3 = *(_DWORD *)v3;
      if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27FAAF8 == 0x1Bu % dword_27FAAF8 )
        continue;
    }
  }
  v8 = v2 == 0;
  if ( v2 )
    v2 = *(_DWORD *)v2;
    v8 = v2 == 0;
  if ( v8 )
LABEL_8:
    sub_21E5A84("_Map_base::at");
  v9 = *(_QWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                    v4,
                    (int **)(v2 + 8));
  if ( HIDWORD(v9) )
    v10 = (unsigned int *)(HIDWORD(v9) + 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
    else
      ++*v10;
  if ( (_DWORD)v9 )
    v12 = (*(int (**)(void))(*(_DWORD *)v9 + 20))();
  else
    v12 = 0;
    v13 = (unsigned int *)(HIDWORD(v9) + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      v15 = (unsigned int *)(HIDWORD(v9) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v9) + 8))(HIDWORD(v9));
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v9) + 12))(HIDWORD(v9));
  return v12;
}


unsigned int __fastcall HudContainerManagerModel::setSlot(HudContainerManagerModel *this, int a2, const ItemInstance *a3)
{
  HudContainerManagerModel *v3; // r6@1
  int v4; // r0@1
  int v5; // r4@2
  unsigned __int64 *v6; // r10@2
  int v7; // r6@2
  bool v8; // zf@3
  int v9; // r7@6
  bool v10; // zf@9
  __int64 v11; // kr00_8@12
  unsigned int *v12; // r1@13
  unsigned int v13; // r2@15
  unsigned int result; // r0@18
  unsigned int *v15; // r1@19
  unsigned int *v16; // r5@25

  v3 = this;
  v4 = *(_DWORD *)(dword_27FAAF4 + 4 * (0x1Bu % dword_27FAAF8));
  if ( !v4 )
    goto LABEL_8;
  v5 = *(_DWORD *)v4;
  v6 = (unsigned __int64 *)((char *)v3 + 40);
  v7 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  while ( 1 )
  {
    v8 = v7 == 27;
    if ( v7 == 27 )
      v8 = *(_DWORD *)(v5 + 4) == 27;
    if ( v8 )
      break;
    v9 = *(_DWORD *)v5;
    if ( *(_DWORD *)v5 )
    {
      v7 = *(_DWORD *)(v9 + 12);
      v4 = v5;
      v5 = *(_DWORD *)v5;
      if ( *(_DWORD *)(v9 + 12) % (unsigned int)dword_27FAAF8 == 0x1Bu % dword_27FAAF8 )
        continue;
    }
  }
  v10 = v4 == 0;
  if ( v4 )
    v4 = *(_DWORD *)v4;
    v10 = v4 == 0;
  if ( v10 )
LABEL_8:
    sub_21E5A84("_Map_base::at");
  v11 = *(_QWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                     v6,
                     (int **)(v4 + 8));
  if ( HIDWORD(v11) )
    v12 = (unsigned int *)(HIDWORD(v11) + 4);
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
    else
      ++*v12;
  result = (*(int (**)(void))(*(_DWORD *)v11 + 40))();
    v15 = (unsigned int *)(HIDWORD(v11) + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
    if ( result == 1 )
      v16 = (unsigned int *)(HIDWORD(v11) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v11) + 8))(HIDWORD(v11));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
      }
      else
        result = (*v16)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v11) + 12))(HIDWORD(v11));
  return result;
}


int __fastcall HudContainerManagerModel::_onFixedInventorySlotChanged(HudContainerManagerModel *this, int a2, const ItemInstance *a3, const ItemInstance *a4)
{
  return (*(int (__cdecl **)(_DWORD, HudContainerManagerModel *))(**((_DWORD **)this + 1) + 1464))(
           *((_DWORD *)this + 1),
           this);
}


signed int __fastcall HudContainerManagerModel::broadcastChanges(HudContainerManagerModel *this)
{
  HudContainerManagerModel *v1; // r8@1
  PlayerInventoryProxy *v2; // r0@1
  PlayerInventoryProxy *v3; // r9@1
  signed int result; // r0@1
  signed int v5; // r6@1
  int v6; // r5@2
  int v7; // r7@2
  const ItemInstance *v8; // r0@3
  int v9; // r4@3

  v1 = this;
  v2 = (PlayerInventoryProxy *)Player::getSupplies(*((Player **)this + 1));
  v3 = v2;
  result = PlayerInventoryProxy::getLinkedSlotsCount(v2);
  v5 = result;
  if ( result >= 1 )
  {
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      v8 = (const ItemInstance *)PlayerInventoryProxy::getLinked(v3, v7);
      v9 = (int)v8;
      result = ItemInstance::matches((ItemInstance *)(*((_DWORD *)v1 + 17) + v6), v8);
      if ( !result )
        break;
      ++v7;
      v6 += 72;
      if ( v7 >= v5 )
        return result;
    }
    PlayerInventoryProxy::setContainerChanged(v3, v7 + v5);
    result = j_j_j__ZN12ItemInstanceaSERKS__3(*((_DWORD *)v1 + 17) + 72 * v7, v9);
  }
  return result;
}


int __fastcall HudContainerManagerModel::getSlot(HudContainerManagerModel *this, int a2)
{
  HudContainerManagerModel *v2; // r5@1
  int v3; // r0@1
  int v4; // r4@2
  unsigned __int64 *v5; // r9@2
  int v6; // r5@2
  bool v7; // zf@3
  int v8; // r6@6
  bool v9; // zf@9
  __int64 v10; // kr00_8@12
  unsigned int *v11; // r1@13
  unsigned int v12; // r2@15
  int v13; // r5@18
  unsigned int *v14; // r1@19
  unsigned int v15; // r0@21
  unsigned int *v16; // r6@25
  unsigned int v17; // r0@27

  v2 = this;
  v3 = *(_DWORD *)(dword_27FAAF4 + 4 * (0x1Bu % dword_27FAAF8));
  if ( !v3 )
    goto LABEL_8;
  v4 = *(_DWORD *)v3;
  v5 = (unsigned __int64 *)((char *)v2 + 40);
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  while ( 1 )
  {
    v7 = v6 == 27;
    if ( v6 == 27 )
      v7 = *(_DWORD *)(v4 + 4) == 27;
    if ( v7 )
      break;
    v8 = *(_DWORD *)v4;
    if ( *(_DWORD *)v4 )
    {
      v6 = *(_DWORD *)(v8 + 12);
      v3 = v4;
      v4 = *(_DWORD *)v4;
      if ( *(_DWORD *)(v8 + 12) % (unsigned int)dword_27FAAF8 == 0x1Bu % dword_27FAAF8 )
        continue;
    }
  }
  v9 = v3 == 0;
  if ( v3 )
    v3 = *(_DWORD *)v3;
    v9 = v3 == 0;
  if ( v9 )
LABEL_8:
    sub_21E5A84("_Map_base::at");
  v10 = *(_QWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                     v5,
                     (int **)(v3 + 8));
  if ( HIDWORD(v10) )
    v11 = (unsigned int *)(HIDWORD(v10) + 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
    else
      ++*v11;
  v13 = (*(int (**)(void))(*(_DWORD *)v10 + 32))();
    v14 = (unsigned int *)(HIDWORD(v10) + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(HIDWORD(v10) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v10) + 8))(HIDWORD(v10));
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
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v10) + 12))(HIDWORD(v10));
  return v13;
}


void __fastcall HudContainerManagerModel::~HudContainerManagerModel(HudContainerManagerModel *this)
{
  HudContainerManagerModel *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_26ED2F4;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 68);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void **)(v2 + 52);
      if ( v4 )
        operator delete(v4);
      v5 = *(void **)(v2 + 36);
      if ( v5 )
        operator delete(v5);
      v6 = *(_DWORD *)(v2 + 8);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v2 + 8) = 0;
      v2 += 72;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 17);
  }
  if ( v2 )
    operator delete((void *)v2);
  ContainerManagerModel::~ContainerManagerModel(v1);
  j_j_j__ZdlPv_6((void *)v1);
}
