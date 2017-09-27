

void __fastcall BrewingStandContainerManagerModel::~BrewingStandContainerManagerModel(BrewingStandContainerManagerModel *this)
{
  ContainerManagerModel *v1; // r0@1

  v1 = ContainerManagerModel::~ContainerManagerModel(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall BrewingStandContainerManagerModel::BrewingStandContainerManagerModel(double a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1

  v3 = a3;
  v4 = LODWORD(a1);
  ContainerManagerModel::ContainerManagerModel(a1, a2);
  *(_DWORD *)v4 = &off_26ED048;
  *(_DWORD *)(v4 + 68) = *(_DWORD *)v3;
  *(_DWORD *)(v4 + 72) = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v4 + 76) = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v4 + 80) = 0;
  *(_DWORD *)(v4 + 84) = 0;
  *(_DWORD *)(v4 + 88) = 0;
  ContainerManagerModel::setContainerType(v4, 4);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 44))(v4);
  return v4;
}


int __fastcall BrewingStandContainerManagerModel::getBrewProgress(BrewingStandContainerManagerModel *this, int a2)
{
  BrewingStandContainerManagerModel *v2; // r5@1
  BlockSource *v4; // r0@1
  int v5; // r0@1
  BrewingStandBlockEntity *v6; // r5@1
  float v13; // r1@4
  int result; // r0@4

  v2 = this;
  _R4 = a2;
  v4 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  v5 = BlockSource::getBlockEntity(v4, (BrewingStandContainerManagerModel *)((char *)v2 + 68));
  v6 = (BrewingStandBlockEntity *)v5;
  if ( v5 && BlockEntity::isType(v5, 8) == 1 && BrewingStandBlockEntity::getBrewTime(v6) )
  {
    _R0 = BrewingStandBlockEntity::getBrewTime(v6);
    __asm
    {
      VMOV            S0, R0
      VLDR            S2, =-0.0025
      VMOV.F32        S4, #1.0
      VCVT.F32.S32    S0, S0
      VMUL.F32        S0, S0, S2
      VMOV            S2, R4
      VCVT.F32.S32    S2, S2
      VADD.F32        S0, S0, S4
      VMOV            R0, S0
    }
    result = j_j_j__ZN3mce4Math5floorEf_1(_R0, v13);
  }
  else
    result = 0;
  return result;
}


void *__fastcall BrewingStandContainerManagerModel::getSlot(BrewingStandContainerManagerModel *this, int a2)
{
  int v2; // r11@2
  unsigned __int64 *v3; // r8@2
  int v4; // r0@2
  int v5; // r6@3
  int v6; // r5@3
  bool v7; // zf@4
  int v8; // r4@7
  unsigned int v9; // r10@12
  unsigned __int64 *v10; // r9@12
  int v11; // r0@12
  int v12; // r7@13
  int v13; // r5@13
  bool v14; // zf@14
  int v15; // r4@17
  unsigned int v16; // r10@20
  int v17; // r7@21
  int v18; // r5@21
  bool v19; // zf@22
  int v20; // r4@25
  bool v22; // zf@29
  _DWORD *v23; // r0@33
  int (*v24)(void); // r2@34
  bool v25; // zf@35
  _DWORD *v26; // r0@39
  int v27; // r3@39
  unsigned int v28; // r2@39
  int *v29; // r0@39
  int v30; // r1@39
  bool v31; // zf@40
  _DWORD *v32; // r0@44

  if ( (unsigned int)(a2 - 1) < 3 )
  {
    v2 = 7u % dword_27FA138;
    v3 = (unsigned __int64 *)((char *)this + 40);
    v4 = *(_DWORD *)(dword_27FA134 + 4 * (7u % dword_27FA138));
    if ( !v4 )
      goto LABEL_33;
    v5 = *(_DWORD *)v4;
    v6 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    while ( 1 )
    {
      v7 = v6 == 7;
      if ( v6 == 7 )
        v7 = *(_DWORD *)(v5 + 4) == 7;
      if ( v7 )
        break;
      v8 = *(_DWORD *)v5;
      if ( *(_DWORD *)v5 )
      {
        v6 = *(_DWORD *)(v8 + 12);
        v4 = v5;
        v5 = *(_DWORD *)v5;
        if ( *(_DWORD *)(v8 + 12) % (unsigned int)dword_27FA138 == v2 )
          continue;
      }
    }
    v22 = v4 == 0;
    if ( v4 )
      v4 = *(_DWORD *)v4;
      v22 = v4 == 0;
    if ( v22 )
LABEL_33:
      v23 = operator new(0x10u);
      *v23 = 0;
      v23[1] = 7;
      v23[2] = &unk_28898CC;
      v4 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27FA134,
             v2,
             7u,
             (int)v23);
    v24 = *(int (**)(void))(**(_DWORD **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                           v3,
                                           (int **)(v4 + 8))
                          + 32);
    return (void *)v24();
  }
  if ( a2 == 4 )
    v16 = 8u % dword_27FA138;
    v10 = (unsigned __int64 *)((char *)this + 40);
    v11 = *(_DWORD *)(dword_27FA134 + 4 * (8u % dword_27FA138));
    if ( v11 )
      v17 = *(_DWORD *)v11;
      v18 = *(_DWORD *)(*(_DWORD *)v11 + 12);
      while ( 1 )
        v19 = v18 == 8;
        if ( v18 == 8 )
          v19 = *(_DWORD *)(v17 + 4) == 8;
        if ( v19 )
          break;
        v20 = *(_DWORD *)v17;
        if ( *(_DWORD *)v17 )
        {
          v18 = *(_DWORD *)(v20 + 12);
          v11 = v17;
          v17 = *(_DWORD *)v17;
          if ( *(_DWORD *)(v20 + 12) % (unsigned int)dword_27FA138 == v16 )
            continue;
        }
        goto LABEL_44;
      v31 = v11 == 0;
      if ( v11 )
        v11 = *(_DWORD *)v11;
        v31 = v11 == 0;
      if ( !v31 )
        goto LABEL_46;
LABEL_44:
    v32 = operator new(0x10u);
    v27 = (int)v32;
    *v32 = 0;
    v32[1] = 8;
    v28 = 8;
    v32[2] = &unk_28898CC;
    v29 = &dword_27FA134;
    v30 = v16;
  else
    if ( a2 )
      return &ItemInstance::EMPTY_ITEM;
    v9 = 6u % dword_27FA138;
    v11 = *(_DWORD *)(dword_27FA134 + 4 * (6u % dword_27FA138));
      v12 = *(_DWORD *)v11;
      v13 = *(_DWORD *)(*(_DWORD *)v11 + 12);
        v14 = v13 == 6;
        if ( v13 == 6 )
          v14 = *(_DWORD *)(v12 + 4) == 6;
        if ( v14 )
        v15 = *(_DWORD *)v12;
        if ( *(_DWORD *)v12 )
          v13 = *(_DWORD *)(v15 + 12);
          v11 = v12;
          v12 = *(_DWORD *)v12;
          if ( *(_DWORD *)(v15 + 12) % (unsigned int)dword_27FA138 == v9 )
        goto LABEL_39;
      v25 = v11 == 0;
        v25 = v11 == 0;
      if ( !v25 )
LABEL_39:
    v26 = operator new(0x10u);
    v27 = (int)v26;
    *v26 = 0;
    v26[1] = 6;
    v28 = 6;
    v26[2] = &unk_28898CC;
    v30 = v9;
  v11 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
          (int)v29,
          v30,
          v28,
          v27);
LABEL_46:
  v24 = *(int (**)(void))(**(_DWORD **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                         v10,
                                         (int **)(v11 + 8))
                        + 32);
  return (void *)v24();
}


int __fastcall BrewingStandContainerManagerModel::_onOutputSlotChanged(BrewingStandContainerManagerModel *this, int a2, const ItemInstance *a3, const ItemInstance *a4)
{
  return (*(int (__cdecl **)(_DWORD, BrewingStandContainerManagerModel *))(**((_DWORD **)this + 1) + 1464))(
           *((_DWORD *)this + 1),
           this);
}


BrewingStandBlockEntity *__fastcall BrewingStandContainerManagerModel::broadcastChanges(BrewingStandContainerManagerModel *this)
{
  BrewingStandContainerManagerModel *v1; // r4@1
  BlockSource *v2; // r0@1
  BrewingStandBlockEntity *result; // r0@1
  BrewingStandBlockEntity *v4; // r5@1
  int v5; // r6@4
  void (__fastcall *v6)(int, BrewingStandContainerManagerModel *, _DWORD, int); // r7@4
  int v7; // r0@4
  int v8; // r6@6
  void (__fastcall *v9)(int, BrewingStandContainerManagerModel *, signed int, int); // r7@6
  int v10; // r0@6
  int v11; // r6@8
  void (__fastcall *v12)(int, BrewingStandContainerManagerModel *, signed int, int); // r7@8
  int v13; // r0@8

  v1 = this;
  v2 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  result = (BrewingStandBlockEntity *)BlockSource::getBlockEntity(
                                        v2,
                                        (BrewingStandContainerManagerModel *)((char *)v1 + 68));
  v4 = result;
  if ( result )
  {
    result = (BrewingStandBlockEntity *)BlockEntity::isType((int)result, 8);
    if ( result == (BrewingStandBlockEntity *)1 )
    {
      if ( BrewingStandBlockEntity::getBrewTime(v4) != *((_DWORD *)v1 + 20) )
      {
        v5 = *((_DWORD *)v1 + 1);
        v6 = *(void (__fastcall **)(int, BrewingStandContainerManagerModel *, _DWORD, int))(*(_DWORD *)v5 + 1460);
        v7 = BrewingStandBlockEntity::getBrewTime(v4);
        v6(v5, v1, 0, v7);
        *((_DWORD *)v1 + 20) = BrewingStandBlockEntity::getBrewTime(v4);
      }
      if ( BrewingStandBlockEntity::getFuelAmount(v4) != *((_DWORD *)v1 + 21) )
        v8 = *((_DWORD *)v1 + 1);
        v9 = *(void (__fastcall **)(int, BrewingStandContainerManagerModel *, signed int, int))(*(_DWORD *)v8 + 1460);
        v10 = BrewingStandBlockEntity::getFuelAmount(v4);
        v9(v8, v1, 1, v10);
        *((_DWORD *)v1 + 21) = BrewingStandBlockEntity::getFuelAmount(v4);
      result = (BrewingStandBlockEntity *)BrewingStandBlockEntity::getFuelTotal(v4);
      if ( result != *((BrewingStandBlockEntity **)v1 + 22) )
        v11 = *((_DWORD *)v1 + 1);
        v12 = *(void (__fastcall **)(int, BrewingStandContainerManagerModel *, signed int, int))(*(_DWORD *)v11 + 1460);
        v13 = BrewingStandBlockEntity::getFuelTotal(v4);
        v12(v11, v1, 2, v13);
        result = (BrewingStandBlockEntity *)BrewingStandBlockEntity::getFuelTotal(v4);
        *((_DWORD *)v1 + 22) = result;
    }
  }
  return result;
}


int __fastcall BrewingStandContainerManagerModel::firePotionBrewedEvent(BrewingStandContainerManagerModel *this, const ItemInstance *a2, int a3)
{
  const ItemInstance *v3; // r4@1
  Player *v4; // r5@1
  MinecraftEventing *v5; // r0@1
  unsigned int v6; // r3@1

  v3 = (const ItemInstance *)a3;
  v4 = a2;
  v5 = (MinecraftEventing *)ContainerManagerModel::getPlayer(this);
  return j_j_j__ZN17MinecraftEventing21fireEventPotionBrewedEP6PlayerRK12ItemInstancej(v5, v4, v3, v6);
}


signed int __fastcall BrewingStandContainerManagerModel::_getBrewingStandEntity(BrewingStandContainerManagerModel *this)
{
  BrewingStandContainerManagerModel *v1; // r4@1
  BlockSource *v2; // r0@1
  int v3; // r0@1
  int v4; // r4@1
  signed int result; // r0@2

  v1 = this;
  v2 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  v3 = BlockSource::getBlockEntity(v2, (BrewingStandContainerManagerModel *)((char *)v1 + 68));
  v4 = v3;
  if ( v3 )
  {
    result = BlockEntity::isType(v3, 8);
    if ( result )
      result = v4;
  }
  else
    result = 0;
  return result;
}


int __fastcall BrewingStandContainerManagerModel::_onInputSlotChanged(BrewingStandContainerManagerModel *this, int a2, const ItemInstance *a3, const ItemInstance *a4)
{
  return (*(int (__cdecl **)(_DWORD, BrewingStandContainerManagerModel *))(**((_DWORD **)this + 1) + 1464))(
           *((_DWORD *)this + 1),
           this);
}


char *__fastcall BrewingStandContainerManagerModel::getItems(BrewingStandContainerManagerModel *this, int a2)
{
  BrewingStandContainerManagerModel *v2; // r10@1
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
  int j; // r6@34
  __int64 v27; // kr08_8@34
  __int64 v28; // r0@35
  int v29; // r9@39
  int v30; // r0@39
  int v31; // r6@40
  int v32; // r5@40
  bool v33; // zf@41
  int v34; // r4@44
  bool v35; // zf@47
  _DWORD *v36; // r0@51
  int v37; // r0@52
  char *result; // r0@52
  int v39; // r5@52 OVERLAPPED
  int v40; // r6@52 OVERLAPPED
  __int64 v41; // r0@53

  v2 = this;
  v3 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v4 = 6u % dword_27FA138;
  v5 = *(_DWORD *)(dword_27FA134 + 4 * (6u % dword_27FA138));
  if ( !v5 )
    goto LABEL_13;
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  while ( 1 )
  {
    v8 = v7 == 6;
    if ( v7 == 6 )
      v8 = *(_DWORD *)(v6 + 4) == 6;
    if ( v8 )
      break;
    v9 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 )
    {
      v7 = *(_DWORD *)(v9 + 12);
      v5 = v6;
      v6 = *(_DWORD *)v6;
      if ( *(_DWORD *)(v9 + 12) % (unsigned int)dword_27FA138 == v4 )
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
    v11[1] = 6;
    v11[2] = &unk_28898CC;
    v5 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27FA134,
           v4,
           6u,
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
  v17 = 7u % dword_27FA138;
  v18 = *(_DWORD *)(dword_27FA134 + 4 * (7u % dword_27FA138));
  if ( !v18 )
    goto LABEL_33;
  v19 = *(_DWORD *)v18;
  v20 = *(_DWORD *)(*(_DWORD *)v18 + 12);
    v21 = v20 == 7;
    if ( v20 == 7 )
      v21 = *(_DWORD *)(v19 + 4) == 7;
    if ( v21 )
    v22 = *(_DWORD *)v19;
    if ( *(_DWORD *)v19 )
      v20 = *(_DWORD *)(v22 + 12);
      v18 = v19;
      v19 = *(_DWORD *)v19;
      if ( *(_DWORD *)(v22 + 12) % (unsigned int)dword_27FA138 == v17 )
  v23 = v18 == 0;
  if ( v18 )
    v18 = *(_DWORD *)v18;
    v23 = v18 == 0;
  if ( v23 )
LABEL_33:
    v24 = operator new(0x10u);
    *v24 = 0;
    v24[1] = 7;
    v24[2] = &unk_28898CC;
    v18 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27FA134,
            v17,
            7u,
            (int)v24);
  v25 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)(v18 + 8));
  v27 = *(_QWORD *)(*(int (**)(void))(**(_DWORD **)v25 + 36))();
  for ( j = v27; HIDWORD(v27) != j; j += 72 )
    v28 = *(_QWORD *)((char *)v2 + 4);
    if ( (_DWORD)v28 == HIDWORD(v28) )
      std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
        (unsigned __int64 *)v2,
        j);
    else
      *((_DWORD *)v2 + 1) = (char *)ItemInstance::ItemInstance((ItemInstance *)v28, j) + 72;
  v29 = 8u % dword_27FA138;
  v30 = *(_DWORD *)(dword_27FA134 + 4 * (8u % dword_27FA138));
  if ( !v30 )
    goto LABEL_51;
  v31 = *(_DWORD *)v30;
  v32 = *(_DWORD *)(*(_DWORD *)v30 + 12);
    v33 = v32 == 8;
    if ( v32 == 8 )
      v33 = *(_DWORD *)(v31 + 4) == 8;
    if ( v33 )
    v34 = *(_DWORD *)v31;
    if ( *(_DWORD *)v31 )
      v32 = *(_DWORD *)(v34 + 12);
      v30 = v31;
      v31 = *(_DWORD *)v31;
      if ( *(_DWORD *)(v34 + 12) % (unsigned int)dword_27FA138 == v29 )
  v35 = v30 == 0;
  if ( v30 )
    v30 = *(_DWORD *)v30;
    v35 = v30 == 0;
  if ( v35 )
LABEL_51:
    v36 = operator new(0x10u);
    *v36 = 0;
    v36[1] = 8;
    v36[2] = &unk_28898CC;
    v30 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v29,
            8u,
            (int)v36);
  v37 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)(v30 + 8));
  result = (char *)(*(int (**)(void))(**(_DWORD **)v37 + 36))();
  for ( *(_QWORD *)&v39 = *(_QWORD *)result; v40 != v39; v39 += 72 )
    v41 = *(_QWORD *)((char *)v2 + 4);
    if ( (_DWORD)v41 == HIDWORD(v41) )
      result = std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
                 (unsigned __int64 *)v2,
                 v39);
      result = (char *)ItemInstance::ItemInstance((ItemInstance *)v41, v39) + 72;
      *((_DWORD *)v2 + 1) = result;
  return result;
}


int __fastcall BrewingStandContainerManagerModel::fireItemAcquiredEvent(BrewingStandContainerManagerModel *this, const ItemInstance *a2, int a3)
{
  int v3; // r4@1
  ItemInstance *v4; // r5@1
  int v5; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = ContainerManagerModel::getPlayer(this);
  return j_j_j__ZN17MinecraftEventing21fireEventItemAcquiredEP6PlayerRK12ItemInstancejNS_17AcquisitionMethodE_0(
           v5,
           v4,
           v3,
           8);
}


int __fastcall BrewingStandContainerManagerModel::_onFuelSlotChanged(BrewingStandContainerManagerModel *this, int a2, const ItemInstance *a3, const ItemInstance *a4)
{
  return (*(int (__cdecl **)(_DWORD, BrewingStandContainerManagerModel *))(**((_DWORD **)this + 1) + 1464))(
           *((_DWORD *)this + 1),
           this);
}


BrewingStandBlockEntity *__fastcall BrewingStandContainerManagerModel::setData(BrewingStandContainerManagerModel *this, int a2, int a3)
{
  BrewingStandContainerManagerModel *v3; // r5@1
  int v4; // r4@1
  int v5; // r6@1
  BlockSource *v6; // r0@1
  BrewingStandBlockEntity *result; // r0@1
  BrewingStandBlockEntity *v8; // r5@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  result = (BrewingStandBlockEntity *)BlockSource::getBlockEntity(
                                        v6,
                                        (BrewingStandContainerManagerModel *)((char *)v3 + 68));
  v8 = result;
  if ( result )
  {
    result = (BrewingStandBlockEntity *)BlockEntity::isType((int)result, 8);
    if ( result == (BrewingStandBlockEntity *)1 )
    {
      if ( v5 == 2 )
      {
        BrewingStandBlockEntity::setFuelTotal(v8, v4);
      }
      else if ( v5 == 1 )
        BrewingStandBlockEntity::setFuelAmount(v8, v4);
      else if ( !v5 )
        BrewingStandBlockEntity::setBrewTime(v8, v4);
      result = (BrewingStandBlockEntity *)j_j_j__ZN11BlockEntity10setChangedEv_0(v8);
    }
  }
  return result;
}


signed int __fastcall BrewingStandContainerManagerModel::isStandValid(BrewingStandContainerManagerModel *this, float a2)
{
  BrewingStandContainerManagerModel *v3; // r4@1
  BlockSource *v4; // r0@2
  int v5; // r0@2
  int v10; // r1@4
  int v11; // r2@4
  Entity *v12; // r4@4
  signed int result; // r0@5
  char v15; // [sp+4h] [bp-54h]@4
  int v16; // [sp+10h] [bp-48h]@4
  signed int v17; // [sp+14h] [bp-44h]@4
  int v18; // [sp+18h] [bp-40h]@4
  int v19; // [sp+1Ch] [bp-3Ch]@4
  int v20; // [sp+20h] [bp-38h]@4
  int v21; // [sp+24h] [bp-34h]@4
  int v22; // [sp+28h] [bp-30h]@4
  int v23; // [sp+2Ch] [bp-2Ch]@4
  int v24; // [sp+30h] [bp-28h]@4
  char v25; // [sp+34h] [bp-24h]@4

  _R5 = a2;
  v3 = this;
  if ( ContainerManagerModel::isValid(this, a2) != 1 )
    goto LABEL_10;
  v4 = (BlockSource *)Entity::getRegion(*((Entity **)v3 + 1));
  v5 = BlockSource::getBlockEntity(v4, (BrewingStandContainerManagerModel *)((char *)v3 + 68));
  if ( !v5 )
  if ( BlockEntity::isType(v5, 8) != 1 )
  v16 = 1056964608;
  v17 = 1056964608;
  __asm { VMOV            S16, R5 }
  v18 = 1056964608;
  BlockPos::BlockPos((int)&v19, (int)&v16);
  v10 = *((_DWORD *)v3 + 18);
  v11 = *((_DWORD *)v3 + 19);
  v22 = *((_DWORD *)v3 + 17) + v19;
  v23 = v20 + v10;
  v24 = v21 + v11;
  Vec3::Vec3((int)&v25, (int)&v22);
  v12 = (Entity *)*((_DWORD *)v3 + 1);
  BlockPos::BlockPos((int)&v15, (int)&v25);
  _R0 = Entity::distanceSqrToBlockPosCenter(v12, (const BlockPos *)&v15);
  __asm
  {
    VMUL.F32        S0, S16, S16
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    result = 1;
  else
LABEL_10:
    result = 0;
  return result;
}


void __fastcall BrewingStandContainerManagerModel::init(BrewingStandContainerManagerModel *this)
{
  BrewingStandContainerManagerModel *v1; // r10@1
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
  Entity *v30; // r3@63
  int v31; // r6@63
  unsigned int *v32; // r1@64
  unsigned int v33; // r0@66
  unsigned int *v34; // r4@70
  unsigned int v35; // r0@72
  Entity *v36; // r3@77
  int v37; // r6@77
  unsigned int *v38; // r1@78
  unsigned int v39; // r0@80
  unsigned int *v40; // r4@84
  unsigned int v41; // r0@86
  Entity *v42; // r3@91
  int v43; // r6@91
  unsigned int *v44; // r1@92
  unsigned int v45; // r0@94
  unsigned int *v46; // r4@98
  unsigned int v47; // r0@100
  int v48; // r7@105
  int v49; // r0@105
  int v50; // r8@106
  int v51; // r6@106
  bool v52; // zf@107
  int v53; // r4@110
  bool v54; // zf@113
  _DWORD *v55; // r0@117
  int v56; // r5@118
  _DWORD *v57; // r0@118
  __int64 v58; // r1@118
  int v59; // r8@120
  int v60; // r0@120
  int v61; // r7@121
  int v62; // r6@121
  bool v63; // zf@122
  int v64; // r4@125
  bool v65; // zf@128
  _DWORD *v66; // r0@132
  int v67; // r5@133
  _DWORD *v68; // r0@133
  __int64 v69; // r1@133
  int v70; // r8@135
  int v71; // r0@135
  int v72; // r7@136
  int v73; // r6@136
  bool v74; // zf@137
  int v75; // r4@140
  bool v76; // zf@143
  _DWORD *v77; // r0@147
  int v78; // r5@148
  _DWORD *v79; // r0@148
  __int64 v80; // r1@148
  BlockSource *v81; // r0@150
  int v82; // r0@150
  BrewingStandBlockEntity *v83; // r5@150
  int v84; // r6@152
  void (__fastcall *v85)(int, BrewingStandContainerManagerModel *, _DWORD, int); // r4@152
  int v86; // r0@152
  int v87; // r6@152
  void (__fastcall *v88)(int, BrewingStandContainerManagerModel *, signed int, int); // r4@152
  int v89; // r0@152
  int v90; // r6@152
  void (__fastcall *v91)(int, BrewingStandContainerManagerModel *, signed int, int); // r4@152
  int v92; // r0@152
  int v93; // r5@152
  void (__fastcall *v94)(int, BrewingStandContainerManagerModel *, int *); // r4@152
  __int64 v95; // r4@152
  void *v96; // r0@153
  void *v97; // r0@155
  int v98; // r0@157
  int v99; // [sp+10h] [bp-E8h]@152
  int v100; // [sp+14h] [bp-E4h]@152
  _DWORD *v101; // [sp+1Ch] [bp-DCh]@148
  __int64 v102; // [sp+24h] [bp-D4h]@148
  _DWORD *v103; // [sp+2Ch] [bp-CCh]@133
  __int64 v104; // [sp+34h] [bp-C4h]@133
  _DWORD *v105; // [sp+3Ch] [bp-BCh]@118
  __int64 v106; // [sp+44h] [bp-B4h]@118
  __int64 v107; // [sp+4Ch] [bp-ACh]@91
  int v108; // [sp+54h] [bp-A4h]@91
  int v109; // [sp+58h] [bp-A0h]@91
  char v110; // [sp+5Ch] [bp-9Ch]@91
  int v111; // [sp+60h] [bp-98h]@91
  int v112; // [sp+64h] [bp-94h]@77
  int v113; // [sp+68h] [bp-90h]@77
  int v114; // [sp+6Ch] [bp-8Ch]@77
  int v115; // [sp+70h] [bp-88h]@77
  char v116; // [sp+74h] [bp-84h]@77
  int v117; // [sp+78h] [bp-80h]@77
  int v118; // [sp+7Ch] [bp-7Ch]@63
  int v119; // [sp+80h] [bp-78h]@63
  int v120; // [sp+84h] [bp-74h]@63
  int v121; // [sp+88h] [bp-70h]@63
  char v122; // [sp+8Ch] [bp-6Ch]@63
  int v123; // [sp+90h] [bp-68h]@63
  _DWORD *v124; // [sp+94h] [bp-64h]@31
  int v125; // [sp+98h] [bp-60h]@31
  int v126; // [sp+9Ch] [bp-5Ch]@15
  int v127; // [sp+A0h] [bp-58h]@15
  int v128; // [sp+A4h] [bp-54h]@15
  char v129; // [sp+A8h] [bp-50h]@15
  int v130; // [sp+ACh] [bp-4Ch]@15
  int v131; // [sp+B0h] [bp-48h]@1
  int v132; // [sp+B4h] [bp-44h]@1
  int v133; // [sp+B8h] [bp-40h]@1
  char v134; // [sp+BCh] [bp-3Ch]@1
  int v135; // [sp+C0h] [bp-38h]@1
  void *v136; // [sp+C4h] [bp-34h]@29
  __int64 v137; // [sp+CCh] [bp-2Ch]@29

  v1 = this;
  v133 = 24;
  v132 = 9;
  v2 = *((_DWORD *)this + 1);
  v131 = 9;
  ContainerFactory::createModel<InventoryContainerModel,ContainerEnumName,int,Player &,int>(
    (int)&v134,
    (unsigned int *)&v133,
    (unsigned int *)&v132,
    v2,
    &v131);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v134);
  v3 = v135;
  if ( v135 )
  {
    v4 = (unsigned int *)(v135 + 4);
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
  v128 = 26;
  v127 = 27;
  v8 = *((_DWORD *)v1 + 1);
  v126 = 18;
    (int)&v129,
    (unsigned int *)&v128,
    (unsigned int *)&v127,
    v8,
    &v126);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v129);
  v9 = v130;
  if ( v130 )
    v10 = (unsigned int *)(v130 + 4);
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
  LODWORD(v17) = sub_1699ABE;
  v136 = v16;
  HIDWORD(v17) = sub_1699AA4;
  v137 = v17;
  FilteredInventoryContainerModel::FilteredInventoryContainerModel((int)v15, 9u, 0x24u, v14, 9, (int)&v136);
  if ( (_DWORD)v137 )
    ((void (*)(void))v137)();
  v18 = operator new(0x14u);
  *((_DWORD *)v18 + 1) = 1;
  v19 = (unsigned int *)((char *)v18 + 4);
  *((_DWORD *)v18 + 2) = 1;
  v20 = (unsigned int *)((char *)v18 + 8);
  *(_DWORD *)v18 = &off_26ECFB8;
  v21 = *v15;
  *((_DWORD *)v18 + 4) = v15;
  (*(void (__fastcall **)(_DWORD *))(v21 + 12))(v15);
  v124 = v15;
  v125 = (int)v18;
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
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v124);
  v25 = v125;
  if ( v125 )
    v26 = (unsigned int *)(v125 + 4);
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
  v121 = 6;
  v120 = 1;
  v30 = (Entity *)*((_DWORD *)v1 + 1);
  v119 = 0;
  v118 = 8;
  ContainerFactory::createModel<LevelContainerModel,ContainerEnumName,int,Player &,BrewingStandBlockEntity::{unnamed type#1},BlockEntityType,BlockPos &>(
    (int)&v122,
    (unsigned int *)&v121,
    (unsigned int *)&v120,
    v30,
    &v119,
    &v118,
    (int)v1 + 68);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v122);
  v31 = v123;
  if ( v123 )
    v32 = (unsigned int *)(v123 + 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 == 1 )
      v34 = (unsigned int *)(v31 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 8))(v31);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 12))(v31);
  v115 = 7;
  v114 = 3;
  v36 = (Entity *)*((_DWORD *)v1 + 1);
  v113 = 1;
  v112 = 8;
    (int)&v116,
    (unsigned int *)&v115,
    (unsigned int *)&v114,
    v36,
    &v113,
    &v112,
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v116);
  v37 = v117;
  if ( v117 )
    v38 = (unsigned int *)(v117 + 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 == 1 )
      v40 = (unsigned int *)(v37 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 8))(v37);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 12))(v37);
  v108 = 1;
  v109 = 8;
  v42 = (Entity *)*((_DWORD *)v1 + 1);
  v107 = 17179869192LL;
    (int)&v110,
    (unsigned int *)&v109,
    (unsigned int *)&v108,
    v42,
    (int *)&v107 + 1,
    (int *)&v107,
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v110);
  v43 = v111;
  if ( v111 )
    v44 = (unsigned int *)(v111 + 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 == 1 )
      v46 = (unsigned int *)(v43 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v43 + 8))(v43);
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v43 + 12))(v43);
  v48 = 7u % dword_27FA138;
  v49 = *(_DWORD *)(dword_27FA134 + 4 * (7u % dword_27FA138));
  if ( !v49 )
    goto LABEL_117;
  v50 = *(_DWORD *)v49;
  v51 = *(_DWORD *)(*(_DWORD *)v49 + 12);
  while ( 1 )
    v52 = v51 == 7;
    if ( v51 == 7 )
      v52 = *(_DWORD *)(v50 + 4) == 7;
    if ( v52 )
      break;
    v53 = *(_DWORD *)v50;
    if ( *(_DWORD *)v50 )
      v51 = *(_DWORD *)(v53 + 12);
      v49 = v50;
      v50 = *(_DWORD *)v50;
      if ( *(_DWORD *)(v53 + 12) % (unsigned int)dword_27FA138 == v48 )
        continue;
  v54 = v49 == 0;
  if ( v49 )
    v49 = *(_DWORD *)v49;
    v54 = v49 == 0;
  if ( v54 )
LABEL_117:
    v55 = operator new(0x10u);
    *v55 = 0;
    v55[1] = 7;
    v55[2] = &unk_28898CC;
    v49 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27FA134,
            v48,
            7u,
            (int)v55);
  v56 = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (unsigned __int64 *)v1 + 5,
                     (int **)(v49 + 8));
  v57 = operator new(4u);
  LODWORD(v58) = sub_1699CA4;
  *v57 = v1;
  HIDWORD(v58) = sub_1699C7C;
  v105 = v57;
  v106 = v58;
  ContainerModel::registerPlayerNotificationCallback(v56, (int)&v105);
  if ( (_DWORD)v106 )
    ((void (*)(void))v106)();
  v59 = 6u % dword_27FA138;
  v60 = *(_DWORD *)(dword_27FA134 + 4 * (6u % dword_27FA138));
  if ( !v60 )
    goto LABEL_132;
  v61 = *(_DWORD *)v60;
  v62 = *(_DWORD *)(*(_DWORD *)v60 + 12);
    v63 = v62 == 6;
    if ( v62 == 6 )
      v63 = *(_DWORD *)(v61 + 4) == 6;
    if ( v63 )
    v64 = *(_DWORD *)v61;
    if ( *(_DWORD *)v61 )
      v62 = *(_DWORD *)(v64 + 12);
      v60 = v61;
      v61 = *(_DWORD *)v61;
      if ( *(_DWORD *)(v64 + 12) % (unsigned int)dword_27FA138 == v59 )
  v65 = v60 == 0;
  if ( v60 )
    v60 = *(_DWORD *)v60;
    v65 = v60 == 0;
  if ( v65 )
LABEL_132:
    v66 = operator new(0x10u);
    *v66 = 0;
    v66[1] = 6;
    v66[2] = &unk_28898CC;
    v60 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v59,
            6u,
            (int)v66);
  v67 = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)(v60 + 8));
  v68 = operator new(4u);
  LODWORD(v69) = sub_1699CFE;
  *v68 = v1;
  HIDWORD(v69) = sub_1699CDA;
  v103 = v68;
  v104 = v69;
  ContainerModel::registerPlayerNotificationCallback(v67, (int)&v103);
  if ( (_DWORD)v104 )
    ((void (*)(void))v104)();
  v70 = 8u % dword_27FA138;
  v71 = *(_DWORD *)(dword_27FA134 + 4 * (8u % dword_27FA138));
  if ( !v71 )
    goto LABEL_147;
  v72 = *(_DWORD *)v71;
  v73 = *(_DWORD *)(*(_DWORD *)v71 + 12);
    v74 = v73 == 8;
    if ( v73 == 8 )
      v74 = *(_DWORD *)(v72 + 4) == 8;
    if ( v74 )
    v75 = *(_DWORD *)v72;
    if ( *(_DWORD *)v72 )
      v73 = *(_DWORD *)(v75 + 12);
      v71 = v72;
      v72 = *(_DWORD *)v72;
      if ( *(_DWORD *)(v75 + 12) % (unsigned int)dword_27FA138 == v70 )
  v76 = v71 == 0;
  if ( v71 )
    v71 = *(_DWORD *)v71;
    v76 = v71 == 0;
  if ( v76 )
LABEL_147:
    v77 = operator new(0x10u);
    *v77 = 0;
    v77[1] = 8;
    v77[2] = &unk_28898CC;
    v71 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v70,
            8u,
            (int)v77);
  v78 = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)(v71 + 8));
  v79 = operator new(4u);
  LODWORD(v80) = sub_1699D5C;
  *v79 = v1;
  HIDWORD(v80) = sub_1699D34;
  v101 = v79;
  v102 = v80;
  ContainerModel::registerPlayerNotificationCallback(v78, (int)&v101);
  if ( (_DWORD)v102 )
    ((void (*)(void))v102)();
  v81 = (BlockSource *)Entity::getRegion(*((Entity **)v1 + 1));
  v82 = BlockSource::getBlockEntity(v81, (BrewingStandContainerManagerModel *)((char *)v1 + 68));
  v83 = (BrewingStandBlockEntity *)v82;
  if ( v82 && BlockEntity::isType(v82, 8) == 1 )
    v84 = *((_DWORD *)v1 + 1);
    v85 = *(void (__fastcall **)(int, BrewingStandContainerManagerModel *, _DWORD, int))(*(_DWORD *)v84 + 1460);
    v86 = BrewingStandBlockEntity::getBrewTime(v83);
    v85(v84, v1, 0, v86);
    v87 = *((_DWORD *)v1 + 1);
    v88 = *(void (__fastcall **)(int, BrewingStandContainerManagerModel *, signed int, int))(*(_DWORD *)v87 + 1460);
    v89 = BrewingStandBlockEntity::getFuelAmount(v83);
    v88(v87, v1, 1, v89);
    v90 = *((_DWORD *)v1 + 1);
    v91 = *(void (__fastcall **)(int, BrewingStandContainerManagerModel *, signed int, int))(*(_DWORD *)v90 + 1460);
    v92 = BrewingStandBlockEntity::getFuelTotal(v83);
    v91(v90, v1, 2, v92);
    v93 = *(_QWORD *)v1 >> 32;
    v94 = *(void (__fastcall **)(int, BrewingStandContainerManagerModel *, int *))(*(_DWORD *)v93 + 1472);
    (*(void (__fastcall **)(int *, BrewingStandContainerManagerModel *))(*(_QWORD *)v1 + 24))(&v99, v1);
    v94(v93, v1, &v99);
    v95 = *(_QWORD *)&v99;
    if ( v99 != v100 )
        v96 = *(void **)(v95 + 52);
        if ( v96 )
          operator delete(v96);
        v97 = *(void **)(v95 + 36);
        if ( v97 )
          operator delete(v97);
        v98 = *(_DWORD *)(v95 + 8);
        if ( v98 )
          (*(void (**)(void))(*(_DWORD *)v98 + 4))();
        *(_DWORD *)(v95 + 8) = 0;
        LODWORD(v95) = v95 + 72;
      while ( HIDWORD(v95) != (_DWORD)v95 );
      LODWORD(v95) = v99;
    if ( (_DWORD)v95 )
      operator delete((void *)v95);
}


void __fastcall BrewingStandContainerManagerModel::~BrewingStandContainerManagerModel(BrewingStandContainerManagerModel *this)
{
  BrewingStandContainerManagerModel::~BrewingStandContainerManagerModel(this);
}


int __fastcall BrewingStandContainerManagerModel::getFuelProgress(BrewingStandContainerManagerModel *this, int a2)
{
  BrewingStandContainerManagerModel *v2; // r5@1
  BlockSource *v4; // r0@1
  int v5; // r0@1
  BrewingStandBlockEntity *v6; // r5@1
  float v14; // r1@4
  int result; // r0@4

  v2 = this;
  _R4 = a2;
  v4 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  v5 = BlockSource::getBlockEntity(v4, (BrewingStandContainerManagerModel *)((char *)v2 + 68));
  v6 = (BrewingStandBlockEntity *)v5;
  if ( v5 && BlockEntity::isType(v5, 8) == 1 && BrewingStandBlockEntity::getFuelAmount(v6) )
  {
    __asm
    {
      VMOV            S0, R4
      VCVT.F32.S32    S16, S0
    }
    _R0 = BrewingStandBlockEntity::getFuelAmount(v6);
      VMOV            S0, R0
      VCVT.F32.S32    S18, S0
    _R0 = BrewingStandBlockEntity::getFuelTotal(v6);
      VMUL.F32        S2, S18, S16
      VCVT.F32.S32    S0, S0
      VDIV.F32        S0, S2, S0
      VMOV            R0, S0
    result = j_j_j__ZN3mce4Math4ceilEf_0(_R0, v14);
  }
  else
    result = 0;
  return result;
}


int __fastcall BrewingStandContainerManagerModel::getBubbleProgress(BrewingStandContainerManagerModel *this, int a2)
{
  BrewingStandContainerManagerModel *v2; // r4@1
  BlockSource *v3; // r0@1
  int v4; // r0@1
  BrewingStandBlockEntity *v5; // r4@1
  int v6; // r0@4
  int result; // r0@4

  v2 = this;
  v3 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  v4 = BlockSource::getBlockEntity(v3, (BrewingStandContainerManagerModel *)((char *)v2 + 68));
  v5 = (BrewingStandBlockEntity *)v4;
  if ( v4 && BlockEntity::isType(v4, 8) == 1 && BrewingStandBlockEntity::getBrewTime(v5) )
  {
    v6 = BrewingStandBlockEntity::getBrewTime(v5);
    _R2 = -1840700269;
    _R1 = v6 / 2;
    __asm { SMMUL.W         R1, R1, R2 }
    result = dword_260F410[v6 / 2 - 7 * (((unsigned int)(_R1 + v6 / 2) >> 2) + ((unsigned int)(_R1 + v6 / 2) >> 31))];
  }
  else
    result = 0;
  return result;
}


int __fastcall BrewingStandContainerManagerModel::setSlot(int result, int a2, const ItemInstance *a3)
{
  int v3; // r10@1
  int v4; // r5@1
  int v5; // r4@2
  int v6; // r0@2
  unsigned __int64 *v7; // r7@2
  int v8; // r11@3
  int v9; // r5@3
  bool v10; // zf@4
  int v11; // r8@7
  int v12; // r8@12
  unsigned __int64 *v13; // r9@12
  int v14; // r0@12
  int v15; // r6@13
  int v16; // r7@13
  bool v17; // zf@14
  int v18; // r5@17
  int v19; // r8@20
  int v20; // r0@20
  int v21; // r4@21
  int v22; // r7@21
  bool v23; // zf@22
  int v24; // r5@25
  bool v25; // zf@29
  _DWORD *v26; // r0@33
  int v27; // r0@34
  const ItemInstance *v28; // r8@34
  int v29; // r4@34
  int v30; // r0@34
  int v31; // r11@35
  int v32; // r5@35
  bool v33; // zf@36
  int v34; // r7@39
  bool v35; // zf@42
  _DWORD *v36; // r0@46
  __int64 v37; // r0@47
  bool v38; // zf@48
  _DWORD *v39; // r0@52
  int v40; // r0@53
  unsigned int v41; // r4@53
  int v42; // r0@53
  int v43; // r10@54
  int v44; // r5@54
  bool v45; // zf@55
  int v46; // r6@58
  bool v47; // zf@61
  _DWORD *v48; // r0@65
  int v49; // r0@66
  unsigned int v50; // r11@66
  int v51; // r4@67
  int v52; // r5@67
  bool v53; // zf@68
  int v54; // r6@71
  bool v55; // zf@74
  _DWORD *v56; // r0@78
  int v57; // r3@78
  unsigned int v58; // r2@78
  int *v59; // r0@78
  int v60; // r1@78
  bool v61; // zf@79
  _DWORD *v62; // r0@83
  unsigned __int64 *v63; // [sp+4h] [bp-2Ch]@34
  ItemInstance *v64; // [sp+8h] [bp-28h]@2

  v3 = a2 - 1;
  v4 = result;
  if ( (unsigned int)(a2 - 1) < 3 )
  {
    v64 = a3;
    v5 = 7u % dword_27FA138;
    v6 = *(_DWORD *)(dword_27FA134 + 4 * (7u % dword_27FA138));
    v7 = (unsigned __int64 *)(v4 + 40);
    if ( !v6 )
      goto LABEL_33;
    v8 = *(_DWORD *)v6;
    v9 = *(_DWORD *)(*(_DWORD *)v6 + 12);
    while ( 1 )
    {
      v10 = v9 == 7;
      if ( v9 == 7 )
        v10 = *(_DWORD *)(v8 + 4) == 7;
      if ( v10 )
        break;
      v11 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 )
      {
        v9 = *(_DWORD *)(v11 + 12);
        v6 = v8;
        v8 = *(_DWORD *)v8;
        if ( *(_DWORD *)(v11 + 12) % (unsigned int)dword_27FA138 == v5 )
          continue;
      }
    }
    v25 = v6 == 0;
    if ( v6 )
      v6 = *(_DWORD *)v6;
      v25 = v6 == 0;
    if ( v25 )
LABEL_33:
      v26 = operator new(0x10u);
      *v26 = 0;
      v26[1] = 7;
      v26[2] = &unk_28898CC;
      v6 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27FA134,
             v5,
             7u,
             (int)v26);
    v63 = v7;
    v27 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            v7,
            (int **)(v6 + 8));
    v28 = (const ItemInstance *)(*(int (**)(void))(**(_DWORD **)v27 + 32))();
    v29 = 7u % dword_27FA138;
    v30 = *(_DWORD *)(dword_27FA134 + 4 * (7u % dword_27FA138));
    if ( !v30 )
      goto LABEL_46;
    v31 = *(_DWORD *)v30;
    v32 = *(_DWORD *)(*(_DWORD *)v30 + 12);
      v33 = v32 == 7;
      if ( v32 == 7 )
        v33 = *(_DWORD *)(v31 + 4) == 7;
      if ( v33 )
      v34 = *(_DWORD *)v31;
      if ( *(_DWORD *)v31 )
        v32 = *(_DWORD *)(v34 + 12);
        v30 = v31;
        v31 = *(_DWORD *)v31;
        if ( *(_DWORD *)(v34 + 12) % (unsigned int)dword_27FA138 == v29 )
    v35 = v30 == 0;
    if ( v30 )
      v30 = *(_DWORD *)v30;
      v35 = v30 == 0;
    if ( v35 )
LABEL_46:
      v36 = operator new(0x10u);
      *v36 = 0;
      v36[1] = 7;
      v36[2] = &unk_28898CC;
      v30 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27FA134,
              v29,
              7u,
              (int)v36);
    LODWORD(v37) = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                v63,
                                (int **)(v30 + 8));
    HIDWORD(v37) = v3;
    goto LABEL_86;
  }
  if ( a2 == 4 )
    v19 = 8u % dword_27FA138;
    v13 = (unsigned __int64 *)(result + 40);
    v20 = *(_DWORD *)(dword_27FA134 + 4 * (8u % dword_27FA138));
    if ( !v20 )
      goto LABEL_65;
    v21 = *(_DWORD *)v20;
    v22 = *(_DWORD *)(*(_DWORD *)v20 + 12);
      v23 = v22 == 8;
      if ( v22 == 8 )
        v23 = *(_DWORD *)(v21 + 4) == 8;
      if ( v23 )
      v24 = *(_DWORD *)v21;
      if ( *(_DWORD *)v21 )
        v22 = *(_DWORD *)(v24 + 12);
        v20 = v21;
        v21 = *(_DWORD *)v21;
        if ( *(_DWORD *)(v24 + 12) % (unsigned int)dword_27FA138 == v19 )
    v47 = v20 == 0;
    if ( v20 )
      v20 = *(_DWORD *)v20;
      v47 = v20 == 0;
    if ( v47 )
LABEL_65:
      v48 = operator new(0x10u);
      *v48 = 0;
      v48[1] = 8;
      v48[2] = &unk_28898CC;
      v20 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v19,
              8u,
              (int)v48);
    v49 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            v13,
            (int **)(v20 + 8));
    v28 = (const ItemInstance *)(*(int (**)(void))(**(_DWORD **)v49 + 32))();
    v50 = 8u % dword_27FA138;
    v42 = *(_DWORD *)(dword_27FA134 + 4 * (8u % dword_27FA138));
    if ( v42 )
      v51 = *(_DWORD *)v42;
      v52 = *(_DWORD *)(*(_DWORD *)v42 + 12);
      while ( 1 )
        v53 = v52 == 8;
        if ( v52 == 8 )
          v53 = *(_DWORD *)(v51 + 4) == 8;
        if ( v53 )
          break;
        v54 = *(_DWORD *)v51;
        if ( *(_DWORD *)v51 )
        {
          v52 = *(_DWORD *)(v54 + 12);
          v42 = v51;
          v51 = *(_DWORD *)v51;
          if ( *(_DWORD *)(v54 + 12) % (unsigned int)dword_27FA138 == v50 )
            continue;
        }
        goto LABEL_83;
      v61 = v42 == 0;
      if ( v42 )
        v42 = *(_DWORD *)v42;
        v61 = v42 == 0;
      if ( !v61 )
        goto LABEL_85;
LABEL_83:
    v62 = operator new(0x10u);
    v57 = (int)v62;
    *v62 = 0;
    v62[1] = 8;
    v58 = 8;
    v62[2] = &unk_28898CC;
    v59 = &dword_27FA134;
    v60 = v50;
    goto LABEL_84;
  if ( !a2 )
    v12 = 6u % dword_27FA138;
    v14 = *(_DWORD *)(dword_27FA134 + 4 * (6u % dword_27FA138));
    if ( !v14 )
      goto LABEL_52;
    v15 = *(_DWORD *)v14;
    v16 = *(_DWORD *)(*(_DWORD *)v14 + 12);
      v17 = v16 == 6;
      if ( v16 == 6 )
        v17 = *(_DWORD *)(v15 + 4) == 6;
      if ( v17 )
      v18 = *(_DWORD *)v15;
      if ( *(_DWORD *)v15 )
        v16 = *(_DWORD *)(v18 + 12);
        v14 = v15;
        v15 = *(_DWORD *)v15;
        if ( *(_DWORD *)(v18 + 12) % (unsigned int)dword_27FA138 == v12 )
    v38 = v14 == 0;
    if ( v14 )
      v14 = *(_DWORD *)v14;
      v38 = v14 == 0;
    if ( v38 )
LABEL_52:
      v39 = operator new(0x10u);
      *v39 = 0;
      v39[1] = 6;
      v39[2] = &unk_28898CC;
      v14 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v12,
              6u,
              (int)v39);
    v40 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)(v14 + 8));
    v28 = (const ItemInstance *)(*(int (**)(void))(**(_DWORD **)v40 + 32))();
    v41 = 6u % dword_27FA138;
    v42 = *(_DWORD *)(dword_27FA134 + 4 * (6u % dword_27FA138));
      v43 = *(_DWORD *)v42;
      v44 = *(_DWORD *)(*(_DWORD *)v42 + 12);
        v45 = v44 == 6;
        if ( v44 == 6 )
          v45 = *(_DWORD *)(v43 + 4) == 6;
        if ( v45 )
        v46 = *(_DWORD *)v43;
        if ( *(_DWORD *)v43 )
          v44 = *(_DWORD *)(v46 + 12);
          v42 = v43;
          v43 = *(_DWORD *)v43;
          if ( *(_DWORD *)(v46 + 12) % (unsigned int)dword_27FA138 == v41 )
        goto LABEL_78;
      v55 = v42 == 0;
        v55 = v42 == 0;
      if ( !v55 )
LABEL_78:
    v56 = operator new(0x10u);
    v57 = (int)v56;
    *v56 = 0;
    v56[1] = 6;
    v58 = 6;
    v56[2] = &unk_28898CC;
    v60 = v41;
LABEL_84:
    v42 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)v59,
            v60,
            v58,
            v57);
LABEL_85:
    v37 = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                       v13,
                       (int **)(v42 + 8));
LABEL_86:
    result = j_j_j__ZN14ContainerModel17networkUpdateItemEiRK12ItemInstanceS2_(v37, v28, v64);
  return result;
}


void __fastcall BrewingStandContainerManagerModel::init(BrewingStandContainerManagerModel *this)
{
  BrewingStandContainerManagerModel::init(this);
}
