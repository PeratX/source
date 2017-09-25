

void __fastcall HorseContainerManagerModel::~HorseContainerManagerModel(HorseContainerManagerModel *this)
{
  HorseContainerManagerModel::~HorseContainerManagerModel(this);
}


int __fastcall HorseContainerManagerModel::_onEquipSlotChanged(HorseContainerManagerModel *this, int a2, const ItemInstance *a3, const ItemInstance *a4)
{
  ContainerManagerModel *v4; // r6@1
  int v5; // r5@1
  Player *v6; // r4@1
  const ItemInstance *v7; // r7@1
  MinecraftEventing *v8; // r0@5
  int v9; // r3@5

  v4 = this;
  v5 = a2;
  v6 = a4;
  (*(void (__cdecl **)(_DWORD, HorseContainerManagerModel *))(**((_DWORD **)this + 1) + 1464))(
    *((_DWORD *)this + 1),
    this);
  v7 = (const ItemInstance *)-1;
  if ( v5 == 1 )
    v7 = (const ItemInstance *)10;
  if ( !v5 )
    v7 = (const ItemInstance *)9;
  v8 = (MinecraftEventing *)ContainerManagerModel::getPlayer(v4);
  return j_j_j__ZN17MinecraftEventing21fireEventItemEquippedEP6PlayerRK12ItemInstancei_0(v8, v6, v7, v9);
}


int __fastcall HorseContainerManagerModel::setSlot(HorseContainerManagerModel *this, int a2, const ItemInstance *a3)
{
  HorseContainerManagerModel *v3; // r6@1
  const ItemInstance *v4; // r5@1
  int v5; // r9@1
  BlockSource *v6; // r0@1
  int v7; // r4@1
  int v8; // r1@1
  int result; // r0@1
  int v10; // r4@1
  int v11; // r8@2
  int v12; // r7@3
  unsigned __int64 *v13; // r11@3
  int v14; // r0@3
  int v15; // r8@4
  int v16; // r5@4
  bool v17; // zf@5
  int v18; // r6@8
  int v19; // r4@12
  unsigned __int64 *v20; // r10@12
  int v21; // r0@12
  int v22; // r11@13
  int v23; // r6@13
  bool v24; // zf@14
  int v25; // r7@17
  bool v26; // zf@20
  _DWORD *v27; // r0@24
  int v28; // r0@25
  int v29; // r0@25
  int v30; // r8@25
  int v31; // r0@25
  int v32; // r7@26
  int v33; // r5@26
  bool v34; // zf@27
  int v35; // r6@30
  bool v36; // zf@33
  _DWORD *v37; // r0@37
  __int64 v38; // r0@38
  bool v39; // zf@43
  _DWORD *v40; // r0@47
  int v41; // r0@48
  int v42; // r0@48
  int v43; // r8@48
  int v44; // r0@48
  int v45; // r7@49
  int v46; // r6@49
  bool v47; // zf@50
  int v48; // r5@53
  bool v49; // zf@56
  _DWORD *v50; // r0@60
  __int64 v51; // r0@61
  ItemInstance *v52; // [sp+4h] [bp-C4h]@3
  ItemInstance *v53; // [sp+4h] [bp-C4h]@12
  char v54; // [sp+8h] [bp-C0h]@48
  int v55; // [sp+10h] [bp-B8h]@65
  void *v56; // [sp+2Ch] [bp-9Ch]@63
  void *v57; // [sp+3Ch] [bp-8Ch]@61
  char v58; // [sp+50h] [bp-78h]@25
  int v59; // [sp+58h] [bp-70h]@42
  void *v60; // [sp+74h] [bp-54h]@40
  void *ptr; // [sp+84h] [bp-44h]@38
  unsigned int v62; // [sp+98h] [bp-30h]@1
  unsigned int v63; // [sp+9Ch] [bp-2Ch]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  v7 = BlockSource::getLevel(v6);
  LevelContainerManagerModel::getEntityUniqueID((LevelContainerManagerModel *)&v62, (int)v3);
  result = Level::fetchEntity(v7, v8, v62, v63, 0);
  v10 = result;
  if ( result )
  {
    v11 = (*(int (**)(void))(*(_DWORD *)result + 372))();
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 368))(v10);
    if ( v11 <= v5 )
    {
      if ( result <= v5 )
        return result;
      v53 = v4;
      v19 = 4u % dword_27FA9F8;
      v20 = (unsigned __int64 *)((char *)v3 + 40);
      v21 = *(_DWORD *)(dword_27FA9F4 + 4 * (4u % dword_27FA9F8));
      if ( !v21 )
        goto LABEL_47;
      v22 = *(_DWORD *)v21;
      v23 = *(_DWORD *)(*(_DWORD *)v21 + 12);
      while ( 1 )
      {
        v24 = v23 == 4;
        if ( v23 == 4 )
          v24 = *(_DWORD *)(v22 + 4) == 4;
        if ( v24 )
          break;
        v25 = *(_DWORD *)v22;
        if ( *(_DWORD *)v22 )
        {
          v23 = *(_DWORD *)(v25 + 12);
          v21 = v22;
          v22 = *(_DWORD *)v22;
          if ( *(_DWORD *)(v25 + 12) % (unsigned int)dword_27FA9F8 == v19 )
            continue;
        }
      }
      v39 = v21 == 0;
      if ( v21 )
        v21 = *(_DWORD *)v21;
        v39 = v21 == 0;
      if ( v39 )
LABEL_47:
        v40 = operator new(0x10u);
        *v40 = 0;
        v40[1] = 4;
        v40[2] = &unk_28898CC;
        v21 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                (int)&dword_27FA9F4,
                v19,
                4u,
                (int)v40);
      v41 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              v20,
              (int **)(v21 + 8));
      v42 = (*(int (**)(void))(**(_DWORD **)v41 + 32))();
      ItemInstance::ItemInstance((ItemInstance *)&v54, v42);
      v43 = 4u % dword_27FA9F8;
      v44 = *(_DWORD *)(dword_27FA9F4 + 4 * (4u % dword_27FA9F8));
      if ( !v44 )
        goto LABEL_60;
      v45 = *(_DWORD *)v44;
      v46 = *(_DWORD *)(*(_DWORD *)v44 + 12);
        v47 = v46 == 4;
        if ( v46 == 4 )
          v47 = *(_DWORD *)(v45 + 4) == 4;
        if ( v47 )
        v48 = *(_DWORD *)v45;
        if ( *(_DWORD *)v45 )
          v46 = *(_DWORD *)(v48 + 12);
          v44 = v45;
          v45 = *(_DWORD *)v45;
          if ( *(_DWORD *)(v48 + 12) % (unsigned int)dword_27FA9F8 == v43 )
      v49 = v44 == 0;
      if ( v44 )
        v44 = *(_DWORD *)v44;
        v49 = v44 == 0;
      if ( v49 )
LABEL_60:
        v50 = operator new(0x10u);
        *v50 = 0;
        v50[1] = 4;
        v50[2] = &unk_28898CC;
        v44 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                v43,
                (int)v50);
      LODWORD(v51) = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                  v20,
                                  (int **)(v44 + 8));
      ContainerModel::networkUpdateItem(v51, (const ItemInstance *)&v54, v53);
      if ( v57 )
        operator delete(v57);
      if ( v56 )
        operator delete(v56);
      result = v55;
    }
    else
      v52 = v4;
      v12 = 0x17u % dword_27FA9F8;
      v13 = (unsigned __int64 *)((char *)v3 + 40);
      v14 = *(_DWORD *)(dword_27FA9F4 + 4 * (0x17u % dword_27FA9F8));
      if ( !v14 )
        goto LABEL_24;
      v15 = *(_DWORD *)v14;
      v16 = *(_DWORD *)(*(_DWORD *)v14 + 12);
        v17 = v16 == 23;
        if ( v16 == 23 )
          v17 = *(_DWORD *)(v15 + 4) == 23;
        if ( v17 )
        v18 = *(_DWORD *)v15;
        if ( *(_DWORD *)v15 )
          v16 = *(_DWORD *)(v18 + 12);
          v14 = v15;
          v15 = *(_DWORD *)v15;
          if ( *(_DWORD *)(v18 + 12) % (unsigned int)dword_27FA9F8 == v12 )
      v26 = v14 == 0;
      if ( v14 )
        v14 = *(_DWORD *)v14;
        v26 = v14 == 0;
      if ( v26 )
LABEL_24:
        v27 = operator new(0x10u);
        *v27 = 0;
        v27[1] = 23;
        v27[2] = &unk_28898CC;
        v14 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                v12,
                0x17u,
                (int)v27);
      v28 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              v13,
              (int **)(v14 + 8));
      v29 = (*(int (**)(void))(**(_DWORD **)v28 + 32))();
      ItemInstance::ItemInstance((ItemInstance *)&v58, v29);
      v30 = 0x17u % dword_27FA9F8;
      v31 = *(_DWORD *)(dword_27FA9F4 + 4 * (0x17u % dword_27FA9F8));
      if ( !v31 )
        goto LABEL_37;
      v32 = *(_DWORD *)v31;
      v33 = *(_DWORD *)(*(_DWORD *)v31 + 12);
        v34 = v33 == 23;
        if ( v33 == 23 )
          v34 = *(_DWORD *)(v32 + 4) == 23;
        if ( v34 )
        v35 = *(_DWORD *)v32;
        if ( *(_DWORD *)v32 )
          v33 = *(_DWORD *)(v35 + 12);
          v31 = v32;
          v32 = *(_DWORD *)v32;
          if ( *(_DWORD *)(v35 + 12) % (unsigned int)dword_27FA9F8 == v30 )
      v36 = v31 == 0;
      if ( v31 )
        v31 = *(_DWORD *)v31;
        v36 = v31 == 0;
      if ( v36 )
LABEL_37:
        v37 = operator new(0x10u);
        *v37 = 0;
        v37[1] = 23;
        v37[2] = &unk_28898CC;
        v31 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                v30,
                (int)v37);
      LODWORD(v38) = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                  v13,
                                  (int **)(v31 + 8));
      ContainerModel::networkUpdateItem(v38, (const ItemInstance *)&v58, v52);
      if ( ptr )
        operator delete(ptr);
      if ( v60 )
        operator delete(v60);
      result = v59;
    if ( result )
      result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  }
  return result;
}


void *__fastcall HorseContainerManagerModel::getSlot(HorseContainerManagerModel *this, int a2)
{
  HorseContainerManagerModel *v2; // r6@1
  int v3; // r8@1
  BlockSource *v4; // r0@1
  int v5; // r4@1
  int v6; // r1@1
  int v7; // r0@1
  int v8; // r4@1
  int v9; // r11@2
  int v10; // r0@2
  int v11; // r11@3
  unsigned __int64 *v12; // r10@3
  int v13; // r0@3
  int v14; // r7@4
  int v15; // r4@4
  bool v16; // zf@5
  int v17; // r6@8
  void **v18; // r0@11
  int v19; // r7@13
  unsigned __int64 *v20; // r9@13
  int v21; // r0@13
  int v22; // r10@14
  int v23; // r6@14
  bool v24; // zf@15
  int v25; // r5@18
  bool v27; // zf@23
  _DWORD *v28; // r0@27
  int (*v29)(void); // r2@28
  bool v30; // zf@29
  _DWORD *v31; // r0@33
  unsigned int v32; // [sp+8h] [bp-30h]@1
  unsigned int v33; // [sp+Ch] [bp-2Ch]@1

  v2 = this;
  v3 = a2;
  v4 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  v5 = BlockSource::getLevel(v4);
  LevelContainerManagerModel::getEntityUniqueID((LevelContainerManagerModel *)&v32, (int)v2);
  v7 = Level::fetchEntity(v5, v6, v32, v33, 0);
  v8 = v7;
  if ( !v7 )
  {
    v18 = &ItemInstance::EMPTY_ITEM;
    return *v18;
  }
  v9 = (*(int (**)(void))(*(_DWORD *)v7 + 372))();
  v10 = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 368))(v8);
  if ( v9 <= v3 )
    if ( v10 > v3 )
    {
      v19 = 4u % dword_27FA9F8;
      v20 = (unsigned __int64 *)((char *)v2 + 40);
      v21 = *(_DWORD *)(dword_27FA9F4 + 4 * (4u % dword_27FA9F8));
      if ( !v21 )
        goto LABEL_33;
      v22 = *(_DWORD *)v21;
      v23 = *(_DWORD *)(*(_DWORD *)v21 + 12);
      while ( 1 )
      {
        v24 = v23 == 4;
        if ( v23 == 4 )
          v24 = *(_DWORD *)(v22 + 4) == 4;
        if ( v24 )
          break;
        v25 = *(_DWORD *)v22;
        if ( *(_DWORD *)v22 )
        {
          v23 = *(_DWORD *)(v25 + 12);
          v21 = v22;
          v22 = *(_DWORD *)v22;
          if ( *(_DWORD *)(v25 + 12) % (unsigned int)dword_27FA9F8 == v19 )
            continue;
        }
      }
      v30 = v21 == 0;
      if ( v21 )
        v21 = *(_DWORD *)v21;
        v30 = v21 == 0;
      if ( v30 )
LABEL_33:
        v31 = operator new(0x10u);
        *v31 = 0;
        v31[1] = 4;
        v31[2] = &unk_28898CC;
        v21 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                (int)&dword_27FA9F4,
                v19,
                4u,
                (int)v31);
      v29 = *(int (**)(void))(**(_DWORD **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                             v20,
                                             (int **)(v21 + 8))
                            + 32);
      return (void *)v29();
    }
  v11 = 0x17u % dword_27FA9F8;
  v12 = (unsigned __int64 *)((char *)v2 + 40);
  v13 = *(_DWORD *)(dword_27FA9F4 + 4 * (0x17u % dword_27FA9F8));
  if ( !v13 )
    goto LABEL_27;
  v14 = *(_DWORD *)v13;
  v15 = *(_DWORD *)(*(_DWORD *)v13 + 12);
  while ( 1 )
    v16 = v15 == 23;
    if ( v15 == 23 )
      v16 = *(_DWORD *)(v14 + 4) == 23;
    if ( v16 )
      break;
    v17 = *(_DWORD *)v14;
    if ( *(_DWORD *)v14 )
      v15 = *(_DWORD *)(v17 + 12);
      v13 = v14;
      v14 = *(_DWORD *)v14;
      if ( *(_DWORD *)(v17 + 12) % (unsigned int)dword_27FA9F8 == v11 )
        continue;
  v27 = v13 == 0;
  if ( v13 )
    v13 = *(_DWORD *)v13;
    v27 = v13 == 0;
  if ( v27 )
LABEL_27:
    v28 = operator new(0x10u);
    *v28 = 0;
    v28[1] = 23;
    v28[2] = &unk_28898CC;
    v13 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27FA9F4,
            v11,
            0x17u,
            (int)v28);
  v29 = *(int (**)(void))(**(_DWORD **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                         v12,
                                         (int **)(v13 + 8))
                        + 32);
  return (void *)v29();
}


char *__fastcall HorseContainerManagerModel::getItems(HorseContainerManagerModel *this, int a2)
{
  HorseContainerManagerModel *v2; // r10@1
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
  v4 = 0x17u % dword_27FA9F8;
  v5 = *(_DWORD *)(dword_27FA9F4 + 4 * (0x17u % dword_27FA9F8));
  if ( !v5 )
    goto LABEL_13;
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  while ( 1 )
  {
    v8 = v7 == 23;
    if ( v7 == 23 )
      v8 = *(_DWORD *)(v6 + 4) == 23;
    if ( v8 )
      break;
    v9 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 )
    {
      v7 = *(_DWORD *)(v9 + 12);
      v5 = v6;
      v6 = *(_DWORD *)v6;
      if ( *(_DWORD *)(v9 + 12) % (unsigned int)dword_27FA9F8 == v4 )
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
    v11[1] = 23;
    v11[2] = &unk_28898CC;
    v5 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27FA9F4,
           v4,
           0x17u,
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
  v17 = 4u % dword_27FA9F8;
  v18 = *(_DWORD *)(dword_27FA9F4 + 4 * (4u % dword_27FA9F8));
  if ( !v18 )
    goto LABEL_33;
  v19 = *(_DWORD *)v18;
  v20 = *(_DWORD *)(*(_DWORD *)v18 + 12);
    v21 = v20 == 4;
    if ( v20 == 4 )
      v21 = *(_DWORD *)(v19 + 4) == 4;
    if ( v21 )
    v22 = *(_DWORD *)v19;
    if ( *(_DWORD *)v19 )
      v20 = *(_DWORD *)(v22 + 12);
      v18 = v19;
      v19 = *(_DWORD *)v19;
      if ( *(_DWORD *)(v22 + 12) % (unsigned int)dword_27FA9F8 == v17 )
  v23 = v18 == 0;
  if ( v18 )
    v18 = *(_DWORD *)v18;
    v23 = v18 == 0;
  if ( v23 )
LABEL_33:
    v24 = operator new(0x10u);
    *v24 = 0;
    v24[1] = 4;
    v24[2] = &unk_28898CC;
    v18 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27FA9F4,
            v17,
            4u,
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


void __fastcall HorseContainerManagerModel::~HorseContainerManagerModel(HorseContainerManagerModel *this)
{
  HorseContainerManagerModel *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26ED2B8;
  v2 = *((_DWORD *)this + 24);
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
  LevelContainerManagerModel::~LevelContainerManagerModel(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall HorseContainerManagerModel::~HorseContainerManagerModel(HorseContainerManagerModel *this)
{
  HorseContainerManagerModel *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26ED2B8;
  v2 = *((_DWORD *)this + 24);
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
  return j_j_j__ZN26LevelContainerManagerModelD2Ev(v1);
}


int __fastcall HorseContainerManagerModel::HorseContainerManagerModel(double a1, int a2, __int64 *a3)
{
  int v3; // r4@1

  v3 = LODWORD(a1);
  LevelContainerManagerModel::LevelContainerManagerModel(a1, a2, (unsigned __int64)*a3 >> 32, *a3);
  *(_DWORD *)v3 = &off_26ED2B8;
  *(_DWORD *)(v3 + 92) = 0;
  *(_DWORD *)(v3 + 96) = 0;
  HorseContainerManagerModel::init((HorseContainerManagerModel *)v3);
  return v3;
}


unsigned int __fastcall HorseContainerManagerModel::init(HorseContainerManagerModel *this)
{
  HorseContainerManagerModel *v1; // r9@1
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
  int v14; // r3@29
  int v15; // r5@29
  unsigned int *v16; // r1@30
  unsigned int v17; // r0@32
  unsigned int *v18; // r4@36
  unsigned int v19; // r0@38
  BlockSource *v20; // r0@43
  int v21; // r5@43
  int v22; // r1@43
  unsigned int result; // r0@43
  int v24; // r5@43
  Entity *v25; // r3@44
  unsigned int *v26; // r0@45
  unsigned int v27; // r1@47
  int v28; // r7@50
  unsigned int *v29; // r1@51
  unsigned int v30; // r0@53
  unsigned int *v31; // r4@57
  unsigned int v32; // r0@59
  int v33; // r7@64
  unsigned int *v34; // r0@65
  unsigned int v35; // r1@67
  int v36; // r0@70
  unsigned int *v37; // r2@71
  unsigned int v38; // r1@73
  unsigned int *v39; // r0@79
  unsigned int v40; // r1@81
  int v41; // r5@84
  unsigned int *v42; // r1@85
  unsigned int v43; // r0@87
  unsigned int *v44; // r4@91
  unsigned int v45; // r0@93
  int v46; // r8@98
  int v47; // r0@98
  int v48; // r5@99
  int v49; // r7@99
  bool v50; // zf@100
  int v51; // r4@103
  bool v52; // zf@106
  _DWORD *v53; // r0@110
  int v54; // r6@111
  _DWORD *v55; // r0@111
  __int64 v56; // r1@111
  int v57; // r10@113
  int v58; // r0@113
  int v59; // r6@114
  int v60; // r5@114
  bool v61; // zf@115
  int v62; // r4@118
  bool v63; // zf@121
  _DWORD *v64; // r0@125
  int v65; // r5@126
  _DWORD *v66; // r0@126
  __int64 v67; // r1@126
  int v68; // r4@128
  unsigned int *v69; // r1@129
  unsigned int *v70; // r5@135
  int v71; // r4@142
  unsigned int *v72; // r1@143
  unsigned int *v73; // r5@149
  _DWORD *v74; // [sp+8h] [bp-C0h]@126
  __int64 v75; // [sp+10h] [bp-B8h]@126
  _DWORD *v76; // [sp+18h] [bp-B0h]@111
  __int64 v77; // [sp+20h] [bp-A8h]@111
  int v78; // [sp+28h] [bp-A0h]@78
  int v79; // [sp+2Ch] [bp-9Ch]@78
  int v80; // [sp+30h] [bp-98h]@78
  int v81; // [sp+34h] [bp-94h]@78
  int v82; // [sp+38h] [bp-90h]@78
  int v83; // [sp+3Ch] [bp-8Ch]@78
  int v84; // [sp+40h] [bp-88h]@44
  int v85; // [sp+44h] [bp-84h]@44
  int v86; // [sp+48h] [bp-80h]@44
  int v87; // [sp+4Ch] [bp-7Ch]@44
  int v88; // [sp+50h] [bp-78h]@44
  int v89; // [sp+54h] [bp-74h]@44
  __int64 v90; // [sp+58h] [bp-70h]@44
  int v91; // [sp+60h] [bp-68h]@44
  int v92; // [sp+64h] [bp-64h]@29
  int v93; // [sp+68h] [bp-60h]@29
  int v94; // [sp+6Ch] [bp-5Ch]@29
  char v95; // [sp+70h] [bp-58h]@29
  int v96; // [sp+74h] [bp-54h]@29
  int v97; // [sp+78h] [bp-50h]@15
  int v98; // [sp+7Ch] [bp-4Ch]@15
  int v99; // [sp+80h] [bp-48h]@15
  char v100; // [sp+84h] [bp-44h]@15
  int v101; // [sp+88h] [bp-40h]@15
  int v102; // [sp+8Ch] [bp-3Ch]@1
  int v103; // [sp+90h] [bp-38h]@1
  int v104; // [sp+94h] [bp-34h]@1
  char v105; // [sp+98h] [bp-30h]@1
  int v106; // [sp+9Ch] [bp-2Ch]@1
  unsigned int v107; // [sp+A0h] [bp-28h]@43
  unsigned int v108; // [sp+A4h] [bp-24h]@43

  v1 = this;
  (*(void (**)(void))(*(_DWORD *)this + 20))();
  v104 = 24;
  v103 = 9;
  v2 = *((_DWORD *)v1 + 1);
  v102 = 9;
  ContainerFactory::createModel<InventoryContainerModel,ContainerEnumName,int,Player &,int>(
    (int)&v105,
    (unsigned int *)&v104,
    (unsigned int *)&v103,
    v2,
    &v102);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v105);
  v3 = v106;
  if ( v106 )
  {
    v4 = (unsigned int *)(v106 + 4);
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
  v99 = 26;
  v98 = 27;
  v8 = *((_DWORD *)v1 + 1);
  v97 = 18;
    (int)&v100,
    (unsigned int *)&v99,
    (unsigned int *)&v98,
    v8,
    &v97);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v100);
  v9 = v101;
  if ( v101 )
    v10 = (unsigned int *)(v101 + 4);
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
  v93 = 36;
  v94 = 9;
  v14 = *((_DWORD *)v1 + 1);
  v92 = 9;
    (int)&v95,
    (unsigned int *)&v94,
    (unsigned int *)&v93,
    v14,
    &v92);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v95);
  v15 = v96;
  if ( v96 )
    v16 = (unsigned int *)(v96 + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      v18 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  v20 = (BlockSource *)Entity::getRegion(*((Entity **)v1 + 1));
  v21 = BlockSource::getLevel(v20);
  LevelContainerManagerModel::getEntityUniqueID((LevelContainerManagerModel *)&v107, (int)v1);
  result = Level::fetchEntity(v21, v22, v107, v108, 0);
  v24 = result;
  if ( result )
    v91 = (*(int (**)(void))(*(_DWORD *)result + 372))();
    LevelContainerManagerModel::getEntityUniqueID((LevelContainerManagerModel *)&v90, (int)v1);
    v87 = 23;
    v25 = (Entity *)*((_DWORD *)v1 + 1);
    v86 = 0;
    ContainerFactory::createModel<LevelContainerModel,ContainerEnumName,int &,Player &,int,EntityUniqueID &>(
      (int)&v88,
      (unsigned int *)&v87,
      (unsigned int *)&v91,
      v25,
      &v86,
      &v90);
    v84 = v88;
    v85 = v89;
    if ( v89 )
      v26 = (unsigned int *)(v89 + 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 + 1, v26) );
        ++*v26;
    ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v84);
    v28 = v85;
    if ( v85 )
      v29 = (unsigned int *)(v85 + 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 == 1 )
        v31 = (unsigned int *)(v28 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 8))(v28);
        if ( &pthread_create )
        {
          __dmb();
          do
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
        }
        else
          v32 = (*v31)--;
        if ( v32 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 12))(v28);
    *((_DWORD *)v1 + 23) = v88;
    v33 = v89;
      v34 = (unsigned int *)(v89 + 8);
          v35 = __ldrex(v34);
        while ( __strex(v35 + 1, v34) );
        ++*v34;
    v36 = *((_DWORD *)v1 + 24);
    if ( v36 )
      v37 = (unsigned int *)(v36 + 8);
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        v38 = (*v37)--;
      if ( v38 == 1 )
        (*(void (**)(void))(*(_DWORD *)v36 + 12))();
    *((_DWORD *)v1 + 24) = v33;
    v81 = 4;
    v80 = (*(int (__fastcall **)(int))(*(_DWORD *)v24 + 376))(v24);
    ContainerFactory::createModel<LevelContainerModel,ContainerEnumName,int,Player &,int &,EntityUniqueID &>(
      (int)&v82,
      (unsigned int *)&v81,
      (unsigned int *)&v80,
      *((Entity **)v1 + 1),
      &v91,
    v78 = v82;
    v79 = v83;
    if ( v83 )
      v39 = (unsigned int *)(v83 + 4);
          v40 = __ldrex(v39);
        while ( __strex(v40 + 1, v39) );
        ++*v39;
    ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v78);
    v41 = v79;
    if ( v79 )
      v42 = (unsigned int *)(v79 + 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 == 1 )
        v44 = (unsigned int *)(v41 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 8))(v41);
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
          v45 = (*v44)--;
        if ( v45 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 12))(v41);
    v46 = 0x17u % dword_27FA9F8;
    v47 = *(_DWORD *)(dword_27FA9F4 + 4 * (0x17u % dword_27FA9F8));
    if ( !v47 )
      goto LABEL_110;
    v48 = *(_DWORD *)v47;
    v49 = *(_DWORD *)(*(_DWORD *)v47 + 12);
    while ( 1 )
      v50 = v49 == 23;
      if ( v49 == 23 )
        v50 = *(_DWORD *)(v48 + 4) == 23;
      if ( v50 )
        break;
      v51 = *(_DWORD *)v48;
      if ( *(_DWORD *)v48 )
        v49 = *(_DWORD *)(v51 + 12);
        v47 = v48;
        v48 = *(_DWORD *)v48;
        if ( *(_DWORD *)(v51 + 12) % (unsigned int)dword_27FA9F8 == v46 )
          continue;
    v52 = v47 == 0;
    if ( v47 )
      v47 = *(_DWORD *)v47;
      v52 = v47 == 0;
    if ( v52 )
LABEL_110:
      v53 = operator new(0x10u);
      *v53 = 0;
      v53[1] = 23;
      v53[2] = &unk_28898CC;
      v47 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27FA9F4,
              v46,
              0x17u,
              (int)v53);
    v54 = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                       (unsigned __int64 *)v1 + 5,
                       (int **)(v47 + 8));
    v55 = operator new(4u);
    LODWORD(v56) = sub_16A6406;
    *v55 = v1;
    HIDWORD(v56) = sub_16A63C0;
    v76 = v55;
    v77 = v56;
    ContainerModel::registerPlayerNotificationCallback(v54, (int)&v76);
    if ( (_DWORD)v77 )
      ((void (*)(void))v77)();
    LevelContainerManagerModel::init(v1);
    v57 = 4u % dword_27FA9F8;
    v58 = *(_DWORD *)(dword_27FA9F4 + 4 * (4u % dword_27FA9F8));
    if ( !v58 )
      goto LABEL_125;
    v59 = *(_DWORD *)v58;
    v60 = *(_DWORD *)(*(_DWORD *)v58 + 12);
      v61 = v60 == 4;
      if ( v60 == 4 )
        v61 = *(_DWORD *)(v59 + 4) == 4;
      if ( v61 )
      v62 = *(_DWORD *)v59;
      if ( *(_DWORD *)v59 )
        v60 = *(_DWORD *)(v62 + 12);
        v58 = v59;
        v59 = *(_DWORD *)v59;
        if ( *(_DWORD *)(v62 + 12) % (unsigned int)dword_27FA9F8 == v57 )
    v63 = v58 == 0;
    if ( v58 )
      v58 = *(_DWORD *)v58;
      v63 = v58 == 0;
    if ( v63 )
LABEL_125:
      v64 = operator new(0x10u);
      *v64 = 0;
      v64[1] = 4;
      v64[2] = &unk_28898CC;
      v58 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v57,
              4u,
              (int)v64);
    v65 = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                       (int **)(v58 + 8));
    v66 = operator new(4u);
    LODWORD(v67) = sub_16A6496;
    *v66 = v1;
    HIDWORD(v67) = sub_16A643C;
    v74 = v66;
    v75 = v67;
    result = ContainerModel::registerPlayerNotificationCallback(v65, (int)&v74);
    if ( (_DWORD)v75 )
      result = ((int (*)(void))v75)();
    v68 = v83;
      v69 = (unsigned int *)(v83 + 4);
          result = __ldrex(v69);
        while ( __strex(result - 1, v69) );
        result = (*v69)--;
      if ( result == 1 )
        v70 = (unsigned int *)(v68 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v68 + 8))(v68);
            result = __ldrex(v70);
          while ( __strex(result - 1, v70) );
          result = (*v70)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v68 + 12))(v68);
    v71 = v89;
      v72 = (unsigned int *)(v89 + 4);
          result = __ldrex(v72);
        while ( __strex(result - 1, v72) );
        result = (*v72)--;
        v73 = (unsigned int *)(v71 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v71 + 8))(v71);
            result = __ldrex(v73);
          while ( __strex(result - 1, v73) );
          result = (*v73)--;
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v71 + 12))(v71);
  return result;
}


int __fastcall HorseContainerManagerModel::getEntity(HorseContainerManagerModel *this)
{
  HorseContainerManagerModel *v1; // r4@1
  BlockSource *v2; // r0@1
  int v3; // r5@1
  int v4; // r1@1
  unsigned int v6; // [sp+8h] [bp-18h]@1
  unsigned int v7; // [sp+Ch] [bp-14h]@1

  v1 = this;
  v2 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  v3 = BlockSource::getLevel(v2);
  LevelContainerManagerModel::getEntityUniqueID((LevelContainerManagerModel *)&v6, (int)v1);
  return Level::fetchEntity(v3, v4, v6, v7, 0);
}


int __fastcall HorseContainerManagerModel::_onChestSlotChanged(HorseContainerManagerModel *this, int a2, const ItemInstance *a3, const ItemInstance *a4)
{
  HorseContainerManagerModel *v4; // r5@1
  const ItemInstance *v5; // r8@1
  int v6; // r9@1
  BlockSource *v7; // r0@1
  int v8; // r4@1
  int v9; // r1@1
  int result; // r0@1
  int v11; // r4@2
  int (__fastcall *v12)(int, HorseContainerManagerModel *, int, const ItemInstance *); // r7@2
  int v13; // r0@2
  unsigned int v14; // [sp+8h] [bp-28h]@1
  unsigned int v15; // [sp+Ch] [bp-24h]@1

  v4 = this;
  v5 = a3;
  v6 = a2;
  v7 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  v8 = BlockSource::getLevel(v7);
  LevelContainerManagerModel::getEntityUniqueID((LevelContainerManagerModel *)&v14, (int)v4);
  result = Level::fetchEntity(v8, v9, v14, v15, 0);
  if ( result )
  {
    v11 = *((_DWORD *)v4 + 1);
    v12 = *(int (__fastcall **)(int, HorseContainerManagerModel *, int, const ItemInstance *))(*(_DWORD *)v11 + 1464);
    v13 = (*(int (**)(void))(*(_DWORD *)result + 372))();
    result = v12(v11, v4, v13 + v6, v5);
  }
  return result;
}
