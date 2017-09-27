

char *__fastcall EnchantingContainerManagerModel::getItems(EnchantingContainerManagerModel *this, int a2)
{
  EnchantingContainerManagerModel *v2; // r10@1
  int v3; // r8@1
  int v4; // r9@1
  int v5; // r0@1
  int v6; // r4@2
  int v7; // r5@2
  bool v8; // zf@3
  int v9; // r6@6
  bool v10; // zf@9
  _DWORD *v11; // r0@13
  unsigned __int64 *v12; // r8@14
  int v13; // r0@14
  int v14; // r6@14
  __int64 v15; // kr00_8@14
  __int64 i; // r0@15
  int v17; // r9@21
  int v18; // r0@21
  int v19; // r6@22
  int v20; // r5@22
  bool v21; // zf@23
  int v22; // r4@26
  bool v23; // zf@29
  _DWORD *v24; // r0@33
  int v25; // r0@34
  char *result; // r0@34
  int v27; // r5@34 OVERLAPPED
  int v28; // r6@34 OVERLAPPED
  __int64 v29; // r0@35

  v2 = this;
  v3 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v4 = 0x12u % dword_27FA6D8;
  v5 = *(_DWORD *)(dword_27FA6D4 + 4 * (0x12u % dword_27FA6D8));
  if ( !v5 )
    goto LABEL_13;
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  while ( 1 )
  {
    v8 = v7 == 18;
    if ( v7 == 18 )
      v8 = *(_DWORD *)(v6 + 4) == 18;
    if ( v8 )
      break;
    v9 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 )
    {
      v7 = *(_DWORD *)(v9 + 12);
      v5 = v6;
      v6 = *(_DWORD *)v6;
      if ( *(_DWORD *)(v9 + 12) % (unsigned int)dword_27FA6D8 == v4 )
        continue;
    }
  }
  v10 = v5 == 0;
  if ( v5 )
    v5 = *(_DWORD *)v5;
    v10 = v5 == 0;
  if ( v10 )
LABEL_13:
    v11 = operator new(0x10u);
    *v11 = 0;
    v11[1] = 18;
    v11[2] = &unk_28898CC;
    v5 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27FA6D4,
           v4,
           0x12u,
           (int)v11);
  v12 = (unsigned __int64 *)(v3 + 40);
  v13 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          v12,
          (int **)(v5 + 8));
  v15 = *(_QWORD *)(*(int (**)(void))(**(_DWORD **)v13 + 36))();
  v14 = v15;
  if ( (_DWORD)v15 != HIDWORD(v15) )
    for ( i = 0LL; ; i = *(_QWORD *)((char *)v2 + 4) )
      if ( (_DWORD)i == HIDWORD(i) )
        std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
          (unsigned __int64 *)v2,
          v14);
      else
        *((_DWORD *)v2 + 1) = (char *)ItemInstance::ItemInstance((ItemInstance *)i, v14) + 72;
      if ( HIDWORD(v15) - 72 == v14 )
        break;
      v14 += 72;
  v17 = 0x13u % dword_27FA6D8;
  v18 = *(_DWORD *)(dword_27FA6D4 + 4 * (0x13u % dword_27FA6D8));
  if ( !v18 )
    goto LABEL_33;
  v19 = *(_DWORD *)v18;
  v20 = *(_DWORD *)(*(_DWORD *)v18 + 12);
    v21 = v20 == 19;
    if ( v20 == 19 )
      v21 = *(_DWORD *)(v19 + 4) == 19;
    if ( v21 )
    v22 = *(_DWORD *)v19;
    if ( *(_DWORD *)v19 )
      v20 = *(_DWORD *)(v22 + 12);
      v18 = v19;
      v19 = *(_DWORD *)v19;
      if ( *(_DWORD *)(v22 + 12) % (unsigned int)dword_27FA6D8 == v17 )
  v23 = v18 == 0;
  if ( v18 )
    v18 = *(_DWORD *)v18;
    v23 = v18 == 0;
  if ( v23 )
LABEL_33:
    v24 = operator new(0x10u);
    *v24 = 0;
    v24[1] = 19;
    v24[2] = &unk_28898CC;
    v18 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27FA6D4,
            v17,
            0x13u,
            (int)v24);
  v25 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)(v18 + 8));
  result = (char *)(*(int (**)(void))(**(_DWORD **)v25 + 36))();
  for ( *(_QWORD *)&v27 = *(_QWORD *)result; v28 != v27; v27 += 72 )
    v29 = *(_QWORD *)((char *)v2 + 4);
    if ( (_DWORD)v29 == HIDWORD(v29) )
      result = std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
                 (unsigned __int64 *)v2,
                 v27);
    else
      result = (char *)ItemInstance::ItemInstance((ItemInstance *)v29, v27) + 72;
      *((_DWORD *)v2 + 1) = result;
  return result;
}


void __fastcall EnchantingContainerManagerModel::~EnchantingContainerManagerModel(EnchantingContainerManagerModel *this)
{
  EnchantingContainerManagerModel::~EnchantingContainerManagerModel(this);
}


void *__fastcall EnchantingContainerManagerModel::getSlot(EnchantingContainerManagerModel *this, int a2)
{
  unsigned int v2; // r10@3
  unsigned __int64 *v3; // r9@3
  int v4; // r0@3
  int v5; // r5@4
  int v6; // r7@4
  bool v7; // zf@5
  int v8; // r4@8
  unsigned int v9; // r10@11
  int v10; // r5@12
  int v11; // r7@12
  bool v12; // zf@13
  int v13; // r4@16
  bool v15; // zf@20
  _DWORD *v16; // r0@24
  int v17; // r3@24
  unsigned int v18; // r2@24
  int *v19; // r0@24
  int v20; // r1@24
  bool v21; // zf@25
  _DWORD *v22; // r0@29
  int v23; // r0@31

  if ( a2 == 1 )
  {
    v9 = 0x13u % dword_27FA6D8;
    v3 = (unsigned __int64 *)((char *)this + 40);
    v4 = *(_DWORD *)(dword_27FA6D4 + 4 * (0x13u % dword_27FA6D8));
    if ( v4 )
    {
      v10 = *(_DWORD *)v4;
      v11 = *(_DWORD *)(*(_DWORD *)v4 + 12);
      while ( 1 )
      {
        v12 = v11 == 19;
        if ( v11 == 19 )
          v12 = *(_DWORD *)(v10 + 4) == 19;
        if ( v12 )
          break;
        v13 = *(_DWORD *)v10;
        if ( *(_DWORD *)v10 )
        {
          v11 = *(_DWORD *)(v13 + 12);
          v4 = v10;
          v10 = *(_DWORD *)v10;
          if ( *(_DWORD *)(v13 + 12) % (unsigned int)dword_27FA6D8 == v9 )
            continue;
        }
        goto LABEL_29;
      }
      v21 = v4 == 0;
      if ( v4 )
        v4 = *(_DWORD *)v4;
        v21 = v4 == 0;
      if ( !v21 )
        goto LABEL_31;
    }
LABEL_29:
    v22 = operator new(0x10u);
    v17 = (int)v22;
    *v22 = 0;
    v22[1] = 19;
    v18 = 19;
    v22[2] = &unk_28898CC;
    v19 = &dword_27FA6D4;
    v20 = v9;
    goto LABEL_30;
  }
  if ( a2 )
    return &ItemInstance::EMPTY_ITEM;
  v2 = 0x12u % dword_27FA6D8;
  v3 = (unsigned __int64 *)((char *)this + 40);
  v4 = *(_DWORD *)(dword_27FA6D4 + 4 * (0x12u % dword_27FA6D8));
  if ( !v4 )
    goto LABEL_24;
  v5 = *(_DWORD *)v4;
  v6 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  while ( 1 )
    v7 = v6 == 18;
    if ( v6 == 18 )
      v7 = *(_DWORD *)(v5 + 4) == 18;
    if ( v7 )
      break;
    v8 = *(_DWORD *)v5;
    if ( *(_DWORD *)v5 )
      v6 = *(_DWORD *)(v8 + 12);
      v4 = v5;
      v5 = *(_DWORD *)v5;
      if ( *(_DWORD *)(v8 + 12) % (unsigned int)dword_27FA6D8 == v2 )
        continue;
  v15 = v4 == 0;
  if ( v4 )
    v4 = *(_DWORD *)v4;
    v15 = v4 == 0;
  if ( v15 )
LABEL_24:
    v16 = operator new(0x10u);
    v17 = (int)v16;
    *v16 = 0;
    v16[1] = 18;
    v18 = 18;
    v16[2] = &unk_28898CC;
    v20 = v2;
LABEL_30:
    v4 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)v19,
           v20,
           v18,
           v17);
LABEL_31:
  v23 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          v3,
          (int **)(v4 + 8));
  return (void *)(*(int (**)(void))(**(_DWORD **)v23 + 32))();
}


int __fastcall EnchantingContainerManagerModel::setSlot(int result, int a2, const ItemInstance *a3)
{
  unsigned int v3; // r11@3
  unsigned __int64 *v4; // r8@3
  int v5; // r0@3
  int v6; // r6@4
  int v7; // r5@4
  bool v8; // zf@5
  int v9; // r4@8
  unsigned int v10; // r11@11
  int v11; // r6@12
  int v12; // r5@12
  bool v13; // zf@13
  int v14; // r4@16
  bool v15; // zf@20
  _DWORD *v16; // r0@24
  int v17; // r3@24
  unsigned int v18; // r2@24
  int *v19; // r0@24
  int v20; // r1@24
  bool v21; // zf@25
  _DWORD *v22; // r0@29
  int v23; // r0@31

  if ( a2 == 1 )
  {
    v10 = 0x13u % dword_27FA6D8;
    v4 = (unsigned __int64 *)(result + 40);
    v5 = *(_DWORD *)(dword_27FA6D4 + 4 * (0x13u % dword_27FA6D8));
    if ( v5 )
    {
      v11 = *(_DWORD *)v5;
      v12 = *(_DWORD *)(*(_DWORD *)v5 + 12);
      while ( 1 )
      {
        v13 = v12 == 19;
        if ( v12 == 19 )
          v13 = *(_DWORD *)(v11 + 4) == 19;
        if ( v13 )
          break;
        v14 = *(_DWORD *)v11;
        if ( *(_DWORD *)v11 )
        {
          v12 = *(_DWORD *)(v14 + 12);
          v5 = v11;
          v11 = *(_DWORD *)v11;
          if ( *(_DWORD *)(v14 + 12) % (unsigned int)dword_27FA6D8 == v10 )
            continue;
        }
        goto LABEL_29;
      }
      v21 = v5 == 0;
      if ( v5 )
        v5 = *(_DWORD *)v5;
        v21 = v5 == 0;
      if ( !v21 )
        goto LABEL_31;
    }
LABEL_29:
    v22 = operator new(0x10u);
    v17 = (int)v22;
    *v22 = 0;
    v22[1] = 19;
    v18 = 19;
    v22[2] = &unk_28898CC;
    v19 = &dword_27FA6D4;
    v20 = v10;
    goto LABEL_30;
  }
  if ( !a2 )
    v3 = 0x12u % dword_27FA6D8;
    v5 = *(_DWORD *)(dword_27FA6D4 + 4 * (0x12u % dword_27FA6D8));
      v6 = *(_DWORD *)v5;
      v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
        v8 = v7 == 18;
        if ( v7 == 18 )
          v8 = *(_DWORD *)(v6 + 4) == 18;
        if ( v8 )
        v9 = *(_DWORD *)v6;
        if ( *(_DWORD *)v6 )
          v7 = *(_DWORD *)(v9 + 12);
          v5 = v6;
          v6 = *(_DWORD *)v6;
          if ( *(_DWORD *)(v9 + 12) % (unsigned int)dword_27FA6D8 == v3 )
        goto LABEL_24;
      v15 = v5 == 0;
        v15 = v5 == 0;
      if ( !v15 )
LABEL_24:
    v16 = operator new(0x10u);
    v17 = (int)v16;
    *v16 = 0;
    v16[1] = 18;
    v18 = 18;
    v16[2] = &unk_28898CC;
    v20 = v3;
LABEL_30:
    v5 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)v19,
           v20,
           v18,
           v17);
LABEL_31:
    v23 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            v4,
            (int **)(v5 + 8));
    result = (*(int (**)(void))(**(_DWORD **)v23 + 40))();
  return result;
}


void __fastcall EnchantingContainerManagerModel::clearOptions(EnchantingContainerManagerModel *this)
{
  EnchantingContainerManagerModel *v1; // r11@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  int v4; // r7@2
  void *v5; // r0@3
  void *v6; // r0@5
  void *v7; // r0@7
  __int64 v8; // kr00_8@10
  _DWORD *v9; // r6@11
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  int *v12; // r0@20

  v1 = this;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 84);
  if ( v3 != v2 )
  {
    v4 = v2;
    do
    {
      v5 = *(void **)(v4 + 32);
      if ( v5 )
        operator delete(v5);
      v6 = *(void **)(v4 + 20);
      if ( v6 )
        operator delete(v6);
      v7 = *(void **)(v4 + 8);
      if ( v7 )
        operator delete(v7);
      v4 += 44;
    }
    while ( v3 != v4 );
  }
  *((_DWORD *)v1 + 22) = v2;
  *((_DWORD *)v1 + 28) = *((_DWORD *)v1 + 27);
  v8 = *((_QWORD *)v1 + 12);
  if ( HIDWORD(v8) != (_DWORD)v8 )
    v9 = (_DWORD *)v8;
      v12 = (int *)(*v9 - 12);
      if ( v12 != &dword_28898C0 )
      {
        v10 = (unsigned int *)(*v9 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      }
      ++v9;
    while ( v9 != (_DWORD *)HIDWORD(v8) );
  *((_DWORD *)v1 + 25) = v8;
}


char *__fastcall EnchantingContainerManagerModel::getEnchantNames(EnchantingContainerManagerModel *this)
{
  return (char *)this + 96;
}


EnchantingContainerManagerModel *__fastcall EnchantingContainerManagerModel::~EnchantingContainerManagerModel(EnchantingContainerManagerModel *this)
{
  EnchantingContainerManagerModel *v1; // r10@1
  void *v2; // r0@1
  void *v3; // r5@3
  void *v4; // r7@3
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  int *v7; // r0@13
  int v8; // r5@18 OVERLAPPED
  int v9; // r6@18 OVERLAPPED
  void *v10; // r0@19
  void *v11; // r0@21
  void *v12; // r0@23

  v1 = this;
  *(_DWORD *)this = &off_26ED204;
  v2 = (void *)*((_DWORD *)this + 27);
  if ( v2 )
    operator delete(v2);
  v4 = (void *)(*((_QWORD *)v1 + 12) >> 32);
  v3 = (void *)*((_QWORD *)v1 + 12);
  if ( v3 != v4 )
  {
    do
    {
      v7 = (int *)(*(_DWORD *)v3 - 12);
      if ( v7 != &dword_28898C0 )
      {
        v5 = (unsigned int *)(*(_DWORD *)v3 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
      }
      v3 = (char *)v3 + 4;
    }
    while ( v3 != v4 );
    v3 = (void *)*((_DWORD *)v1 + 24);
  }
  if ( v3 )
    operator delete(v3);
  *(_QWORD *)&v8 = *(_QWORD *)((char *)v1 + 84);
  if ( v8 != v9 )
      v10 = *(void **)(v8 + 32);
      if ( v10 )
        operator delete(v10);
      v11 = *(void **)(v8 + 20);
      if ( v11 )
        operator delete(v11);
      v12 = *(void **)(v8 + 8);
      if ( v12 )
        operator delete(v12);
      v8 += 44;
    while ( v9 != v8 );
    v8 = *((_DWORD *)v1 + 21);
  if ( v8 )
    operator delete((void *)v8);
  ContainerManagerModel::~ContainerManagerModel(v1);
  return v1;
}


void __fastcall EnchantingContainerManagerModel::~EnchantingContainerManagerModel(EnchantingContainerManagerModel *this)
{
  EnchantingContainerManagerModel *v1; // r0@1

  v1 = EnchantingContainerManagerModel::~EnchantingContainerManagerModel(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall EnchantingContainerManagerModel::clearOptions(EnchantingContainerManagerModel *this)
{
  EnchantingContainerManagerModel::clearOptions(this);
}


void __fastcall EnchantingContainerManagerModel::recalculateOptions(EnchantingContainerManagerModel *this)
{
  EnchantingContainerManagerModel::recalculateOptions(this);
}


int __fastcall EnchantingContainerManagerModel::_getEnchantmentCost(EnchantingContainerManagerModel *this, const ItemInstance *a2, const ItemInstance *a3)
{
  const ItemInstance *v3; // r6@1
  EnchantUtils *v4; // r5@1
  const ItemInstance *v5; // r4@1
  BlockSource *v6; // r7@1
  int v7; // r6@1
  char v9; // [sp+4h] [bp-2Ch]@1
  void *v10; // [sp+10h] [bp-20h]@1
  int v11; // [sp+14h] [bp-1Ch]@1

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (BlockSource *)Entity::getRegion(*((Entity **)a2 + 1));
  Vec3::Vec3((int)&v9, (int)v3 + 68);
  EnchantUtils::getBookCasePositions((EnchantUtils *)&v10, v6, (const Vec3 *)&v9);
  v7 = -1431655765 * ((v11 - (signed int)v10) >> 2);
  if ( v10 )
    operator delete(v10);
  return EnchantUtils::getEnchantCosts(v4, v5, v7);
}


char *__fastcall EnchantingContainerManagerModel::getEnchantmentCosts(EnchantingContainerManagerModel *this)
{
  return (char *)this + 108;
}


int __fastcall EnchantingContainerManagerModel::setShouldBookBeOpen(int result, bool a2)
{
  *(_BYTE *)(result + 80) = a2;
  return result;
}


int __fastcall EnchantingContainerManagerModel::EnchantingContainerManagerModel(double a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1

  v3 = a3;
  v4 = LODWORD(a1);
  ContainerManagerModel::ContainerManagerModel(a1, a2);
  *(_DWORD *)v4 = &off_26ED204;
  *(_DWORD *)(v4 + 68) = *(_DWORD *)v3;
  *(_DWORD *)(v4 + 72) = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v4 + 76) = *(_DWORD *)(v3 + 8);
  *(_BYTE *)(v4 + 80) = 0;
  _aeabi_memclr4(v4 + 84, 36);
  ContainerManagerModel::setContainerType(v4, 3);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 44))(v4);
  return v4;
}


unsigned int *__fastcall EnchantingContainerManagerModel::init(EnchantingContainerManagerModel *this)
{
  EnchantingContainerManagerModel *v1; // r8@1
  int v2; // r3@1
  int v3; // r5@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r0@4
  unsigned int *v6; // r4@8
  unsigned int v7; // r0@10
  int v8; // r3@15
  int v9; // r5@15
  unsigned int *v10; // r1@16
  unsigned int v11; // r0@18
  unsigned int *v12; // r4@22
  unsigned int v13; // r0@24
  int v14; // r5@29
  _DWORD *v15; // r6@29
  void *v16; // r0@29
  __int64 v17; // r1@29
  void *v18; // r4@31
  unsigned int *v19; // r5@31
  unsigned int *v20; // r7@31
  int v21; // r0@31
  unsigned int v22; // r0@33
  unsigned int v23; // r0@38
  unsigned int v24; // r0@44
  int v25; // r5@49
  unsigned int *v26; // r1@50
  unsigned int v27; // r0@52
  unsigned int *v28; // r4@56
  unsigned int v29; // r0@58
  int v30; // r5@63
  unsigned int *v31; // r1@64
  unsigned int v32; // r0@66
  unsigned int *v33; // r4@70
  unsigned int v34; // r0@72
  unsigned int *result; // r0@77
  int v36; // r4@77
  unsigned int *v37; // r1@78
  unsigned int *v38; // r5@84
  int v39; // [sp+Ch] [bp-7Ch]@77
  int v40; // [sp+10h] [bp-78h]@77
  int v41; // [sp+14h] [bp-74h]@77
  int v42; // [sp+18h] [bp-70h]@77
  int v43; // [sp+1Ch] [bp-6Ch]@63
  int v44; // [sp+20h] [bp-68h]@63
  int v45; // [sp+24h] [bp-64h]@63
  int v46; // [sp+28h] [bp-60h]@63
  _DWORD *v47; // [sp+2Ch] [bp-5Ch]@31
  int v48; // [sp+30h] [bp-58h]@31
  int v49; // [sp+34h] [bp-54h]@15
  int v50; // [sp+38h] [bp-50h]@15
  int v51; // [sp+3Ch] [bp-4Ch]@15
  char v52; // [sp+40h] [bp-48h]@15
  int v53; // [sp+44h] [bp-44h]@15
  int v54; // [sp+48h] [bp-40h]@1
  int v55; // [sp+4Ch] [bp-3Ch]@1
  int v56; // [sp+50h] [bp-38h]@1
  char v57; // [sp+54h] [bp-34h]@1
  int v58; // [sp+58h] [bp-30h]@1
  void *v59; // [sp+5Ch] [bp-2Ch]@29
  __int64 v60; // [sp+64h] [bp-24h]@29
  char v61; // [sp+6Ch] [bp-1Ch]@63

  v1 = this;
  v56 = 24;
  v55 = 9;
  v2 = *((_DWORD *)this + 1);
  v54 = 9;
  ContainerFactory::createModel<InventoryContainerModel,ContainerEnumName,int,Player &,int>(
    (int)&v57,
    (unsigned int *)&v56,
    (unsigned int *)&v55,
    v2,
    &v54);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v57);
  v3 = v58;
  if ( v58 )
  {
    v4 = (unsigned int *)(v58 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  v51 = 26;
  v50 = 27;
  v8 = *((_DWORD *)v1 + 1);
  v49 = 18;
    (int)&v52,
    (unsigned int *)&v51,
    (unsigned int *)&v50,
    v8,
    &v49);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v52);
  v9 = v53;
  if ( v53 )
    v10 = (unsigned int *)(v53 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  v14 = *((_DWORD *)v1 + 1);
  v15 = operator new(0x68u);
  v16 = operator new(1u);
  LODWORD(v17) = sub_16A1CAE;
  v59 = v16;
  HIDWORD(v17) = sub_16A1C94;
  v60 = v17;
  FilteredInventoryContainerModel::FilteredInventoryContainerModel((int)v15, 9u, 0x24u, v14, 9, (int)&v59);
  if ( (_DWORD)v60 )
    ((void (*)(void))v60)();
  v18 = operator new(0x14u);
  *((_DWORD *)v18 + 1) = 1;
  v19 = (unsigned int *)((char *)v18 + 4);
  *((_DWORD *)v18 + 2) = 1;
  v20 = (unsigned int *)((char *)v18 + 8);
  *(_DWORD *)v18 = &off_26ECFB8;
  v21 = *v15;
  *((_DWORD *)v18 + 4) = v15;
  (*(void (__fastcall **)(_DWORD *))(v21 + 12))(v15);
  v47 = v15;
  v48 = (int)v18;
  if ( &pthread_create )
    __dmb();
    do
      v22 = __ldrex(v19);
    while ( __strex(v22 + 1, v19) );
  else
    ++*v19;
      v23 = __ldrex(v19);
    while ( __strex(v23 - 1, v19) );
    v23 = (*v19)--;
  if ( v23 == 1 )
    (*(void (__fastcall **)(void *))(*(_DWORD *)v18 + 8))(v18);
        v24 = __ldrex(v20);
      while ( __strex(v24 - 1, v20) );
      v24 = (*v20)--;
    if ( v24 == 1 )
      (*(void (__fastcall **)(void *))(*(_DWORD *)v18 + 12))(v18);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v47);
  v25 = v48;
  if ( v48 )
    v26 = (unsigned int *)(v48 + 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 == 1 )
      v28 = (unsigned int *)(v25 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
  v44 = 18;
  v43 = 1;
  std::__shared_ptr<ContainerModel,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ContainerModel>,ContainerEnumName,int>(
    (int)&v45,
    (int)&v61,
    (unsigned int *)&v44,
    (unsigned int *)&v43);
  (*(void (**)(void))(*(_DWORD *)v45 + 12))();
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v45);
  v30 = v46;
  if ( v46 )
    v31 = (unsigned int *)(v46 + 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 == 1 )
      v33 = (unsigned int *)(v30 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 8))(v30);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 12))(v30);
  v40 = 19;
  v39 = 1;
    (int)&v41,
    (unsigned int *)&v40,
    (unsigned int *)&v39);
  (*(void (**)(void))(*(_DWORD *)v41 + 12))();
  result = ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v41);
  v36 = v42;
  if ( v42 )
    v37 = (unsigned int *)(v42 + 4);
        result = (unsigned int *)__ldrex(v37);
      while ( __strex((unsigned int)result - 1, v37) );
      result = (unsigned int *)(*v37)--;
    if ( result == (unsigned int *)1 )
      v38 = (unsigned int *)(v36 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v36 + 8))(v36);
          result = (unsigned int *)__ldrex(v38);
        while ( __strex((unsigned int)result - 1, v38) );
        result = (unsigned int *)(*v38)--;
      if ( result == (unsigned int *)1 )
        result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v36 + 12))(v36);
  return result;
}


void __fastcall EnchantingContainerManagerModel::recalculateOptions(EnchantingContainerManagerModel *this)
{
  EnchantingContainerManagerModel *v1; // r4@1
  int v2; // r0@1
  int v3; // r9@1
  int v4; // r0@1
  bool v5; // zf@1
  void *v6; // r6@8
  unsigned int v7; // r7@8
  _DWORD *v8; // r0@8
  signed int v9; // r1@8
  signed int v10; // r2@8
  int v11; // r7@9
  int v12; // r5@9
  BlockSource *v13; // r6@10
  int v14; // r6@10
  void *v15; // r0@12
  int v16; // r5@15
  int v17; // r6@15
  int v18; // r7@16
  void *v19; // r0@17
  void *v20; // r0@19
  void *v21; // r0@21
  _DWORD *v22; // r11@24
  _DWORD *v23; // r8@24
  int *v24; // r1@25
  _DWORD *v25; // r5@25
  int (**v26)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@25
  unsigned int *v27; // r2@27
  signed int v28; // r7@29
  int *v29; // r6@33
  int (**v30)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r7@33
  int *v31; // r0@34
  signed int v32; // r10@36
  unsigned int *v33; // r2@37
  signed int v34; // r1@39
  int v35; // r11@45
  __int64 v36; // r0@45
  __int64 v37; // r0@54
  int v38; // r1@55
  void *v39; // r0@57
  void *v40; // [sp+14h] [bp-74h]@54
  char v41; // [sp+18h] [bp-70h]@45
  void *v42; // [sp+1Ch] [bp-6Ch]@52
  void *v43; // [sp+28h] [bp-60h]@50
  void *v44; // [sp+34h] [bp-54h]@48
  void *ptr; // [sp+40h] [bp-48h]@12
  int v46; // [sp+44h] [bp-44h]@12
  int v47; // [sp+48h] [bp-40h]@12
  char v48; // [sp+4Ch] [bp-3Ch]@10
  void *v49; // [sp+58h] [bp-30h]@10
  int v50; // [sp+5Ch] [bp-2Ch]@10

  v1 = this;
  v2 = (*(int (**)(void))(*(_DWORD *)this + 32))();
  v3 = v2;
  v4 = *(_BYTE *)(v2 + 15);
  v5 = v4 == 0;
  if ( v4 )
    v5 = *(_DWORD *)v3 == 0;
  if ( v5
    || ItemInstance::isNull((ItemInstance *)v3)
    || !*(_BYTE *)(v3 + 14)
    || ItemInstance::isEnchanted((ItemInstance *)v3)
    || ItemInstance::getEnchantValue((ItemInstance *)v3) < 1 )
  {
    j_j_j__ZN31EnchantingContainerManagerModel12clearOptionsEv(v1);
  }
  else
    v6 = ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
    v7 = Player::getEnchantmentSeed(*((Player **)v1 + 1));
    Random::_checkThreadId((Random *)v6);
    *(_DWORD *)v6 = v7;
    *((_DWORD *)v6 + 625) = 625;
    *((_BYTE *)v6 + 2504) = 0;
    *((_DWORD *)v6 + 627) = 0;
    v8 = (char *)v6 + 8;
    v9 = 1;
    v10 = -397;
    *((_DWORD *)v6 + 1) = v7;
    do
    {
      v11 = v7 ^ (v7 >> 30);
      v12 = v10++ + 1812433253 * v11;
      v7 = v9++ + 1812433253 * v11;
      *v8 = v12 + 398;
      ++v8;
    }
    while ( v10 );
    *((_DWORD *)v6 + 625) = 624;
    *((_DWORD *)v6 + 628) = 398;
    v13 = (BlockSource *)Entity::getRegion(*((Entity **)v1 + 1));
    Vec3::Vec3((int)&v48, (int)v1 + 68);
    EnchantUtils::getBookCasePositions((EnchantUtils *)&v49, v13, (const Vec3 *)&v48);
    v14 = -1431655765 * ((v50 - (signed int)v49) >> 2);
    if ( v49 )
      operator delete(v49);
    EnchantUtils::getEnchantCosts((EnchantUtils *)&ptr, (const ItemInstance *)v3, v14);
    v15 = (void *)*((_DWORD *)v1 + 27);
    *((_DWORD *)v1 + 27) = ptr;
    ptr = 0;
    *((_DWORD *)v1 + 28) = v46;
    v46 = 0;
    *((_DWORD *)v1 + 29) = v47;
    v47 = 0;
    if ( v15 )
      operator delete(v15);
      if ( ptr )
        operator delete(ptr);
    v16 = *((_DWORD *)v1 + 21);
    v17 = *((_DWORD *)v1 + 22);
    if ( v17 != v16 )
      v18 = *((_DWORD *)v1 + 21);
      do
      {
        v19 = *(void **)(v18 + 32);
        if ( v19 )
          operator delete(v19);
        v20 = *(void **)(v18 + 20);
        if ( v20 )
          operator delete(v20);
        v21 = *(void **)(v18 + 8);
        if ( v21 )
          operator delete(v21);
        v18 += 44;
      }
      while ( v17 != v18 );
    *((_DWORD *)v1 + 22) = v16;
    v22 = (_DWORD *)*((_DWORD *)v1 + 24);
    v23 = (_DWORD *)*((_DWORD *)v1 + 25);
    if ( v23 != v22 )
      v24 = (int *)&v49;
      v25 = (_DWORD *)*((_DWORD *)v1 + 24);
      v26 = &pthread_create;
        v31 = (int *)(*v25 - 12);
        if ( v31 != &dword_28898C0 )
        {
          v27 = (unsigned int *)(*v25 - 4);
          if ( v26 )
          {
            __dmb();
            do
              v28 = __ldrex(v27);
            while ( __strex(v28 - 1, v27) );
          }
          else
            v28 = (*v27)--;
          if ( v28 <= 0 )
            v29 = v24;
            v30 = v26;
            j_j_j_j__ZdlPv_9(v31);
            v26 = v30;
            v24 = v29;
        }
        ++v25;
      while ( v25 != v23 );
    *((_DWORD *)v1 + 25) = v22;
    v32 = 0;
      v35 = *(_DWORD *)(*((_DWORD *)v1 + 27) + 4 * v32);
      v49 = (void *)v35;
      EnchantUtils::selectEnchantments((EnchantUtils *)&v41, *(const Item **)v3, v35, 0, 0);
      v36 = *((_QWORD *)v1 + 11);
      if ( (_DWORD)v36 == HIDWORD(v36) )
        std::vector<std::pair<int,ItemEnchants>,std::allocator<std::pair<int,ItemEnchants>>>::_M_emplace_back_aux<int const&,ItemEnchants>(
          (unsigned __int64 *)((char *)v1 + 84),
          &v49,
          (int)&v41);
      else
        *(_DWORD *)v36 = v35;
        ItemEnchants::ItemEnchants(v36 + 4, (int)&v41);
        *((_DWORD *)v1 + 22) += 44;
      if ( v44 )
        operator delete(v44);
      if ( v43 )
        operator delete(v43);
      if ( v42 )
        operator delete(v42);
      EnchantUtils::getRandomName((EnchantUtils *)&v40);
      v37 = *(_QWORD *)((char *)v1 + 100);
      if ( (_DWORD)v37 == HIDWORD(v37) )
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
          (unsigned __int64 *)v1 + 12,
          &v40);
        v38 = (int)v40;
        *(_DWORD *)v37 = v40;
        HIDWORD(v37) = &unk_28898CC;
        v40 = &unk_28898CC;
        *((_DWORD *)v1 + 25) = v37 + 4;
      v39 = (void *)(v38 - 12);
      if ( (int *)(v38 - 12) != &dword_28898C0 )
        v33 = (unsigned int *)(v38 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
        else
          v34 = (*v33)--;
        if ( v34 <= 0 )
          j_j_j_j__ZdlPv_9(v39);
      ++v32;
    while ( v32 < 3 );
}


signed int __fastcall EnchantingContainerManagerModel::isTableValid(EnchantingContainerManagerModel *this, float a2)
{
  EnchantingContainerManagerModel *v3; // r5@1
  signed int v4; // r4@1
  int v9; // r5@2
  int v10; // t1@2
  __int64 v11; // kr00_8@2
  const BlockPos *v13; // r0@2
  signed int v14; // r0@2
  unsigned __int8 v16; // [sp+4h] [bp-4Ch]@2
  int v17; // [sp+8h] [bp-48h]@2
  signed int v18; // [sp+Ch] [bp-44h]@2
  int v19; // [sp+10h] [bp-40h]@2
  char v20; // [sp+14h] [bp-3Ch]@2
  int v21; // [sp+18h] [bp-38h]@2
  int v22; // [sp+1Ch] [bp-34h]@2
  int v23; // [sp+20h] [bp-30h]@2
  int v24; // [sp+24h] [bp-2Ch]@2
  int v25; // [sp+28h] [bp-28h]@2
  char v26; // [sp+2Ch] [bp-24h]@2

  _R6 = a2;
  v3 = this;
  v4 = 0;
  if ( ContainerManagerModel::isValid(this, a2) == 1 )
  {
    v17 = 1056964608;
    v18 = 1056964608;
    __asm { VMOV            S16, R6 }
    v19 = 1056964608;
    BlockPos::BlockPos((int)&v20, (int)&v17);
    v10 = *((_DWORD *)v3 + 17);
    v9 = (int)v3 + 68;
    v11 = *(_QWORD *)(v9 + 4);
    v23 = v10 + *(_DWORD *)&v20;
    v24 = v21 + v11;
    v25 = v22 + HIDWORD(v11);
    Vec3::Vec3((int)&v26, (int)&v23);
    _R6 = Entity::distanceToSqr(*(Entity **)(v9 - 64), (const Vec3 *)&v26);
    v13 = (const BlockPos *)Entity::getRegion(*(Entity **)(v9 - 64));
    BlockSource::getBlockID((BlockSource *)&v16, v13, v9);
    __asm
    {
      VMUL.F32        S0, S16, S16
      VMOV            S2, R6
      VCMPE.F32       S2, S0
    }
    v14 = 0;
    if ( v16 == *(_BYTE *)(Block::mEnchantingTable + 4) )
      v14 = 1;
    __asm { VMRS            APSR_nzcv, FPSCR }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      v4 = 1;
    v4 &= v14;
  }
  return v4;
}


char *__fastcall EnchantingContainerManagerModel::getEnchants(EnchantingContainerManagerModel *this)
{
  return (char *)this + 84;
}
