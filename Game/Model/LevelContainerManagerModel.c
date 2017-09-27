

int __fastcall LevelContainerManagerModel::getEntityUniqueID(int result, int a2)
{
  *(_QWORD *)result = *(_QWORD *)(a2 + 80);
  return result;
}


int __fastcall LevelContainerManagerModel::getSlot(LevelContainerManagerModel *this, int a2)
{
  int v2; // r11@1
  unsigned __int64 *v3; // r10@1
  int v4; // r0@1
  int v5; // r6@2
  int v6; // r4@2
  bool v7; // zf@3
  int v8; // r5@6
  bool v9; // zf@9
  _DWORD *v10; // r0@13
  int v11; // r0@14

  v2 = 4u % dword_27FABD8;
  v3 = (unsigned __int64 *)((char *)this + 40);
  v4 = *(_DWORD *)(dword_27FABD4 + 4 * (4u % dword_27FABD8));
  if ( !v4 )
    goto LABEL_13;
  v5 = *(_DWORD *)v4;
  v6 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  while ( 1 )
  {
    v7 = v6 == 4;
    if ( v6 == 4 )
      v7 = *(_DWORD *)(v5 + 4) == 4;
    if ( v7 )
      break;
    v8 = *(_DWORD *)v5;
    if ( *(_DWORD *)v5 )
    {
      v6 = *(_DWORD *)(v8 + 12);
      v4 = v5;
      v5 = *(_DWORD *)v5;
      if ( *(_DWORD *)(v8 + 12) % (unsigned int)dword_27FABD8 == v2 )
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
    v10[1] = 4;
    v10[2] = &unk_28898CC;
    v4 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27FABD4,
           v2,
           4u,
           (int)v10);
  v11 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          v3,
          (int **)(v4 + 8));
  return (*(int (**)(void))(**(_DWORD **)v11 + 32))();
}


int __fastcall LevelContainerManagerModel::setBlockPos(int result, const BlockPos *a2)
{
  *(_DWORD *)(result + 68) = *(_DWORD *)a2;
  *(_DWORD *)(result + 72) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 76) = *((_DWORD *)a2 + 2);
  return result;
}


void __fastcall LevelContainerManagerModel::init(LevelContainerManagerModel *this)
{
  LevelContainerManagerModel *v1; // r10@1
  int v2; // r11@1
  int v3; // r0@1
  int v4; // r6@2
  int v5; // r5@2
  bool v6; // zf@3
  int v7; // r4@6
  bool v8; // zf@9
  _DWORD *v9; // r0@13
  int v10; // r5@14
  _DWORD *v11; // r0@14
  __int64 v12; // r1@14
  int v13; // r5@16
  BlockSource *v14; // r0@16
  int v15; // r0@17
  int v16; // r5@18
  void (__fastcall *v17)(int, LevelContainerManagerModel *, int *); // r4@18
  __int64 v18; // r4@18
  void *v19; // r0@19
  void *v20; // r0@21
  int v21; // r0@23
  int v22; // r0@27
  __int64 v23; // kr08_8@29
  void (__fastcall *v24)(_DWORD, LevelContainerManagerModel *, int *); // r4@29
  void *v25; // r0@30
  void *v26; // r0@32
  int v27; // r0@34
  int v28; // [sp+4h] [bp-4Ch]@29
  int v29; // [sp+8h] [bp-48h]@29
  int v30; // [sp+10h] [bp-40h]@18
  int v31; // [sp+14h] [bp-3Ch]@18
  _DWORD *v32; // [sp+1Ch] [bp-34h]@14
  __int64 v33; // [sp+24h] [bp-2Ch]@14

  v1 = this;
  v2 = 4u % dword_27FABD8;
  v3 = *(_DWORD *)(dword_27FABD4 + 4 * (4u % dword_27FABD8));
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
      if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27FABD8 == v2 )
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
           (int)&dword_27FABD4,
           v2,
           4u,
           (int)v9);
  v10 = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (unsigned __int64 *)v1 + 5,
                     (int **)(v3 + 8));
  v11 = operator new(4u);
  LODWORD(v12) = sub_16A8504;
  *v11 = v1;
  HIDWORD(v12) = sub_16A84E0;
  v32 = v11;
  v33 = v12;
  ContainerModel::registerPlayerNotificationCallback(v10, (int)&v32);
  if ( (_DWORD)v33 )
    ((void (*)(void))v33)();
  v13 = *((_DWORD *)v1 + 20) & *((_DWORD *)v1 + 21);
  v14 = (BlockSource *)Entity::getRegion(*((Entity **)v1 + 1));
  if ( v13 != -1 )
    v15 = BlockSource::getLevel(v14);
    if ( !Level::fetchEntity(v15, 0, *((_QWORD *)v1 + 10), *((_QWORD *)v1 + 10) >> 32, 0) )
      return;
    v16 = *(_QWORD *)v1 >> 32;
    v17 = *(void (__fastcall **)(int, LevelContainerManagerModel *, int *))(*(_DWORD *)v16 + 1472);
    (*(void (__fastcall **)(int *, LevelContainerManagerModel *))(*(_QWORD *)v1 + 24))(&v30, v1);
    v17(v16, v1, &v30);
    v18 = *(_QWORD *)&v30;
    if ( v30 != v31 )
      do
      {
        v19 = *(void **)(v18 + 52);
        if ( v19 )
          operator delete(v19);
        v20 = *(void **)(v18 + 36);
        if ( v20 )
          operator delete(v20);
        v21 = *(_DWORD *)(v18 + 8);
        if ( v21 )
          (*(void (**)(void))(*(_DWORD *)v21 + 4))();
        *(_DWORD *)(v18 + 8) = 0;
        LODWORD(v18) = v18 + 72;
      }
      while ( HIDWORD(v18) != (_DWORD)v18 );
      LODWORD(v18) = v30;
    goto LABEL_38;
  v22 = BlockSource::getBlockEntity(v14, (LevelContainerManagerModel *)((char *)v1 + 68));
  if ( v22 && BlockEntity::isType(v22, *((_DWORD *)v1 + 22)) == 1 )
    v23 = *(_QWORD *)v1;
    v24 = *(void (__fastcall **)(_DWORD, LevelContainerManagerModel *, int *))(*(_DWORD *)(*(_QWORD *)v1 >> 32) + 1472);
    (*(void (__fastcall **)(int *, LevelContainerManagerModel *))(*(_QWORD *)v1 + 24))(&v28, v1);
    v24(HIDWORD(v23), v1, &v28);
    v18 = *(_QWORD *)&v28;
    if ( v28 != v29 )
        v25 = *(void **)(v18 + 52);
        if ( v25 )
          operator delete(v25);
        v26 = *(void **)(v18 + 36);
        if ( v26 )
          operator delete(v26);
        v27 = *(_DWORD *)(v18 + 8);
        if ( v27 )
          (*(void (**)(void))(*(_DWORD *)v27 + 4))();
      LODWORD(v18) = v28;
LABEL_38:
    if ( (_DWORD)v18 )
      operator delete((void *)v18);
}


void __fastcall LevelContainerManagerModel::~LevelContainerManagerModel(LevelContainerManagerModel *this)
{
  ContainerManagerModel *v1; // r0@1

  v1 = ContainerManagerModel::~ContainerManagerModel(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall LevelContainerManagerModel::setSlot(LevelContainerManagerModel *this, int a2, const ItemInstance *a3)
{
  int v3; // r7@1
  unsigned __int64 *v4; // r11@1
  int v5; // r0@1
  int v6; // r8@2
  int v7; // r5@2
  bool v8; // zf@3
  int v9; // r6@6
  bool v10; // zf@9
  _DWORD *v11; // r0@13
  int v12; // r0@14
  int v13; // r0@14
  int v14; // r8@14
  int v15; // r0@14
  int v16; // r7@15
  int v17; // r5@15
  bool v18; // zf@16
  int v19; // r6@19
  bool v20; // zf@22
  _DWORD *v21; // r0@26
  __int64 v22; // r0@27
  int result; // r0@31
  ItemInstance *v24; // [sp+4h] [bp-74h]@1
  char v25; // [sp+8h] [bp-70h]@14
  int v26; // [sp+10h] [bp-68h]@31
  void *v27; // [sp+2Ch] [bp-4Ch]@29
  void *ptr; // [sp+3Ch] [bp-3Ch]@27

  v24 = a3;
  v3 = 4u % dword_27FABD8;
  v4 = (unsigned __int64 *)((char *)this + 40);
  v5 = *(_DWORD *)(dword_27FABD4 + 4 * (4u % dword_27FABD8));
  if ( !v5 )
    goto LABEL_13;
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  while ( 1 )
  {
    v8 = v7 == 4;
    if ( v7 == 4 )
      v8 = *(_DWORD *)(v6 + 4) == 4;
    if ( v8 )
      break;
    v9 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 )
    {
      v7 = *(_DWORD *)(v9 + 12);
      v5 = v6;
      v6 = *(_DWORD *)v6;
      if ( *(_DWORD *)(v9 + 12) % (unsigned int)dword_27FABD8 == v3 )
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
    v11[1] = 4;
    v11[2] = &unk_28898CC;
    v5 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27FABD4,
           v3,
           4u,
           (int)v11);
  v12 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          v4,
          (int **)(v5 + 8));
  v13 = (*(int (**)(void))(**(_DWORD **)v12 + 32))();
  ItemInstance::ItemInstance((ItemInstance *)&v25, v13);
  v14 = 4u % dword_27FABD8;
  v15 = *(_DWORD *)(dword_27FABD4 + 4 * (4u % dword_27FABD8));
  if ( !v15 )
    goto LABEL_26;
  v16 = *(_DWORD *)v15;
  v17 = *(_DWORD *)(*(_DWORD *)v15 + 12);
    v18 = v17 == 4;
    if ( v17 == 4 )
      v18 = *(_DWORD *)(v16 + 4) == 4;
    if ( v18 )
    v19 = *(_DWORD *)v16;
    if ( *(_DWORD *)v16 )
      v17 = *(_DWORD *)(v19 + 12);
      v15 = v16;
      v16 = *(_DWORD *)v16;
      if ( *(_DWORD *)(v19 + 12) % (unsigned int)dword_27FABD8 == v14 )
  v20 = v15 == 0;
  if ( v15 )
    v15 = *(_DWORD *)v15;
    v20 = v15 == 0;
  if ( v20 )
LABEL_26:
    v21 = operator new(0x10u);
    *v21 = 0;
    v21[1] = 4;
    v21[2] = &unk_28898CC;
    v15 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27FABD4,
            v14,
            4u,
            (int)v21);
  LODWORD(v22) = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                              v4,
                              (int **)(v15 + 8));
  ContainerModel::networkUpdateItem(v22, (const ItemInstance *)&v25, v24);
  if ( ptr )
    operator delete(ptr);
  if ( v27 )
    operator delete(v27);
  result = v26;
  if ( v26 )
    result = (*(int (**)(void))(*(_DWORD *)v26 + 4))();
  return result;
}


char *__fastcall LevelContainerManagerModel::getBlockPos(LevelContainerManagerModel *this)
{
  return (char *)this + 68;
}


void __fastcall LevelContainerManagerModel::broadcastChanges(LevelContainerManagerModel *this)
{
  LevelContainerManagerModel::broadcastChanges(this);
}


signed int __fastcall LevelContainerManagerModel::isValid(LevelContainerManagerModel *this, float a2)
{
  LevelContainerManagerModel *v3; // r4@1
  int v8; // r6@2
  BlockSource *v9; // r0@2
  int v10; // r0@3
  int v11; // r0@3
  Entity *v12; // r4@4
  int v13; // r0@4
  int v16; // r0@7
  int v17; // r1@9
  int v18; // r2@9
  Entity *v19; // r4@9
  char v21; // [sp+8h] [bp-60h]@9
  int v22; // [sp+14h] [bp-54h]@9
  signed int v23; // [sp+18h] [bp-50h]@9
  int v24; // [sp+1Ch] [bp-4Ch]@9
  int v25; // [sp+20h] [bp-48h]@9
  int v26; // [sp+24h] [bp-44h]@9
  int v27; // [sp+28h] [bp-40h]@9
  int v28; // [sp+2Ch] [bp-3Ch]@9
  int v29; // [sp+30h] [bp-38h]@9
  int v30; // [sp+34h] [bp-34h]@9
  char v31; // [sp+38h] [bp-30h]@9
  char v32; // [sp+44h] [bp-24h]@4

  _R5 = a2;
  v3 = this;
  if ( ContainerManagerModel::isValid(this, a2) != 1 )
    return 0;
  __asm { VMOV            S16, R5 }
  v8 = *((_DWORD *)v3 + 20) & *((_DWORD *)v3 + 21);
  v9 = (BlockSource *)Entity::getRegion(*((Entity **)v3 + 1));
  if ( v8 != -1 )
  {
    v10 = BlockSource::getLevel(v9);
    v11 = Level::fetchEntity(v10, 0, *((_QWORD *)v3 + 10), *((_QWORD *)v3 + 10) >> 32, 0);
    if ( v11 )
    {
      v12 = (Entity *)*((_DWORD *)v3 + 1);
      v13 = (*(int (**)(void))(*(_DWORD *)v11 + 52))();
      BlockPos::BlockPos((int)&v32, v13);
      _R0 = Entity::distanceSqrToBlockPosCenter(v12, (const BlockPos *)&v32);
      __asm
      {
        VMUL.F32        S0, S16, S16
        VMOV            S2, R0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        return 1;
    }
  }
  v16 = BlockSource::getBlockEntity(v9, (LevelContainerManagerModel *)((char *)v3 + 68));
  if ( !v16 )
  if ( BlockEntity::isType(v16, *((_DWORD *)v3 + 22)) != 1 )
  v22 = 1056964608;
  v23 = 1056964608;
  v24 = 1056964608;
  BlockPos::BlockPos((int)&v25, (int)&v22);
  v17 = *((_DWORD *)v3 + 18);
  v18 = *((_DWORD *)v3 + 19);
  v28 = *((_DWORD *)v3 + 17) + v25;
  v29 = v26 + v17;
  v30 = v27 + v18;
  Vec3::Vec3((int)&v31, (int)&v28);
  v19 = (Entity *)*((_DWORD *)v3 + 1);
  BlockPos::BlockPos((int)&v21, (int)&v31);
  _R0 = Entity::distanceSqrToBlockPosCenter(v19, (const BlockPos *)&v21);
  __asm
    VMUL.F32        S0, S16, S16
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
  return 1;
}


void __fastcall LevelContainerManagerModel::broadcastChanges(LevelContainerManagerModel *this)
{
  LevelContainerManagerModel *v1; // r8@1
  int v2; // r0@1
  int v3; // r1@1
  LevelContainerManagerModel *v4; // r11@1
  int v5; // r3@1
  int v6; // r9@3
  int v7; // r5@3
  int v8; // r6@3
  int v9; // r7@5
  int v10; // r4@9
  void (__fastcall *v11)(int, LevelContainerManagerModel *, int); // r5@9
  int v12; // r0@9
  __int64 v13; // r4@10
  void *v14; // r0@11
  void *v15; // r0@13
  int v16; // r0@15
  int v17; // [sp+8h] [bp-30h]@1
  int v18; // [sp+Ch] [bp-2Ch]@1

  v1 = this;
  (*(void (__fastcall **)(int *, LevelContainerManagerModel *))(*(_DWORD *)this + 24))(&v17, this);
  v2 = v17;
  v4 = (LevelContainerManagerModel *)((char *)v1 + 8);
  v3 = *((_DWORD *)v1 + 2);
  v5 = 954437177 * ((v18 - v17) >> 3);
  if ( v5 == 954437177 * ((*((_DWORD *)v1 + 3) - v3) >> 3) )
  {
    if ( v18 != v17 )
    {
      v6 = v5 - 1;
      v7 = 0;
      v8 = 0;
      while ( 1 )
      {
        v9 = v2 + v7;
        if ( !ItemInstance::matches((ItemInstance *)(v3 + v7), (const ItemInstance *)(v2 + v7)) )
        {
          (*(void (__cdecl **)(_DWORD, LevelContainerManagerModel *))(**((_DWORD **)v1 + 1) + 1464))(
            *((_DWORD *)v1 + 1),
            v1);
          ItemInstance::operator=(*(_DWORD *)v4 + v7, v9);
        }
        if ( v6 == v8 )
          break;
        ++v8;
        v2 = v17;
        v3 = *(_DWORD *)v4;
        v7 += 72;
      }
    }
  }
  else
    v10 = *((_DWORD *)v1 + 1);
    v11 = *(void (__fastcall **)(int, LevelContainerManagerModel *, int))(*(_DWORD *)v10 + 1472);
    v12 = std::vector<ItemInstance,std::allocator<ItemInstance>>::operator=((int)v1 + 8, (unsigned __int64 *)&v17);
    v11(v10, v1, v12);
  v13 = *(_QWORD *)&v17;
  if ( v17 != v18 )
    do
      v14 = *(void **)(v13 + 52);
      if ( v14 )
        operator delete(v14);
      v15 = *(void **)(v13 + 36);
      if ( v15 )
        operator delete(v15);
      v16 = *(_DWORD *)(v13 + 8);
      if ( v16 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v16 + 4))(v16, *(_DWORD *)(*(_DWORD *)v16 + 4));
      *(_DWORD *)(v13 + 8) = 0;
      LODWORD(v13) = v13 + 72;
    while ( HIDWORD(v13) != (_DWORD)v13 );
    LODWORD(v13) = v17;
  if ( (_DWORD)v13 )
    operator delete((void *)v13);
}


int __fastcall LevelContainerManagerModel::LevelContainerManagerModel(double a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int result; // r0@1

  v4 = a3;
  result = ContainerManagerModel::ContainerManagerModel(a1, a2);
  *(_DWORD *)result = &off_26ED368;
  *(_DWORD *)(result + 68) = *(_DWORD *)v4;
  *(_DWORD *)(result + 72) = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(result + 76) = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(result + 80) = -1;
  *(_DWORD *)(result + 84) = -1;
  *(_DWORD *)(result + 88) = a4;
  return result;
}


const void **__fastcall LevelContainerManagerModel::getEntityName(LevelContainerManagerModel *this)
{
  LevelContainerManagerModel *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@1
  const void **result; // r0@2

  v1 = this;
  v2 = Entity::getLevel(*((Entity **)this + 1));
  v3 = Level::fetchEntity(v2, 0, *((_QWORD *)v1 + 10), *((_QWORD *)v1 + 10) >> 32, 0);
  if ( v3 )
    result = (const void **)(*(int (**)(void))(*(_DWORD *)v3 + 188))();
  else
    result = &Util::EMPTY_STRING;
  return result;
}


int __fastcall LevelContainerManagerModel::setEntityUniqueID(int result, int a2, __int64 a3)
{
  *(_QWORD *)(result + 80) = a3;
  return result;
}


int __fastcall LevelContainerManagerModel::LevelContainerManagerModel(double a1, int a2, int a3, __int64 a4)
{
  int result; // r0@1
  int v5; // r12@1

  result = ContainerManagerModel::ContainerManagerModel(a1, a2);
  v5 = result + 76;
  *(_DWORD *)result = &off_26ED368;
  *(_DWORD *)(result + 68) = 0;
  *(_DWORD *)(result + 72) = 0;
  *(_DWORD *)v5 = 0;
  *(_QWORD *)(v5 + 4) = a4;
  return result;
}


void __fastcall LevelContainerManagerModel::init(LevelContainerManagerModel *this)
{
  LevelContainerManagerModel::init(this);
}


int __fastcall LevelContainerManagerModel::getItems(LevelContainerManagerModel *this, int a2)
{
  LevelContainerManagerModel *v2; // r8@1
  int v3; // r11@1
  unsigned __int64 *v4; // r10@1
  int v5; // r0@1
  int v6; // r6@2
  int v7; // r4@2
  bool v8; // zf@3
  int v9; // r5@6
  bool v10; // zf@9
  _DWORD *v11; // r0@13
  int v12; // r0@14
  unsigned __int64 *v13; // r0@14

  v2 = this;
  v3 = 4u % dword_27FABD8;
  v4 = (unsigned __int64 *)(a2 + 40);
  v5 = *(_DWORD *)(dword_27FABD4 + 4 * (4u % dword_27FABD8));
  if ( !v5 )
    goto LABEL_13;
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  while ( 1 )
  {
    v8 = v7 == 4;
    if ( v7 == 4 )
      v8 = *(_DWORD *)(v6 + 4) == 4;
    if ( v8 )
      break;
    v9 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 )
    {
      v7 = *(_DWORD *)(v9 + 12);
      v5 = v6;
      v6 = *(_DWORD *)v6;
      if ( *(_DWORD *)(v9 + 12) % (unsigned int)dword_27FABD8 == v3 )
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
    v11[1] = 4;
    v11[2] = &unk_28898CC;
    v5 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27FABD4,
           v3,
           4u,
           (int)v11);
  v12 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          v4,
          (int **)(v5 + 8));
  v13 = (unsigned __int64 *)(*(int (**)(void))(**(_DWORD **)v12 + 36))();
  return std::vector<ItemInstance,std::allocator<ItemInstance>>::vector((int)v2, v13);
}


int __fastcall LevelContainerManagerModel::_getContainer(LevelContainerManagerModel *this)
{
  LevelContainerManagerModel *v1; // r4@1
  int v2; // r1@1
  char *v3; // r5@1
  int v4; // r2@1
  Entity *v5; // r0@1
  int v6; // r0@2
  int v7; // r4@2
  int v8; // r1@2
  Entity *v9; // r0@2
  Entity *v10; // r5@2
  BlockSource *v11; // r0@5
  int v12; // r0@5
  int v13; // r5@5
  int v14; // r0@7
  bool v15; // zf@12

  v1 = this;
  v3 = (char *)this + 80;
  v2 = *((_DWORD *)this + 20);
  v4 = *((_DWORD *)this + 21);
  v5 = (Entity *)*((_DWORD *)this + 1);
  if ( (v2 & v4) == -1 )
  {
    v11 = (BlockSource *)Entity::getRegion(v5);
    v12 = BlockSource::getBlockEntity(v11, (LevelContainerManagerModel *)((char *)v1 + 68));
    v13 = v12;
    if ( v12 )
    {
      if ( BlockEntity::isType(v12, *((_DWORD *)v1 + 22)) == 1 )
      {
        v14 = *((_DWORD *)v1 + 22);
        v7 = 0;
        switch ( v14 )
        {
          case 1:
          case 8:
          case 15:
          case 16:
            v7 = v13 + 104;
            break;
          case 2:
          case 13:
          case 14:
            goto LABEL_16;
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 9:
          case 10:
          case 11:
          case 12:
            return v7;
          default:
            v15 = v14 == 23;
            if ( v14 != 23 )
              v15 = v14 == 25;
            if ( v15 )
LABEL_16:
              v7 = v13 + 112;
        }
      }
      else
    }
    else
      v7 = 0;
  }
  else
    v6 = Entity::getLevel(v5);
    v7 = 0;
    v9 = (Entity *)Level::fetchEntity(v6, v8, *(_QWORD *)v3, *(_QWORD *)v3 >> 32, 0);
    v10 = v9;
    if ( v9 )
      if ( Entity::getContainerComponent(v9) )
        v7 = *(_DWORD *)(Entity::getContainerComponent(v10) + 4);
  return v7;
}


int __fastcall LevelContainerManagerModel::_getBlockEntity(LevelContainerManagerModel *this)
{
  LevelContainerManagerModel *v1; // r5@1
  BlockSource *v2; // r0@1
  int v3; // r0@1
  int v4; // r4@1

  v1 = this;
  v2 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  v3 = BlockSource::getBlockEntity(v2, (LevelContainerManagerModel *)((char *)v1 + 68));
  v4 = v3;
  if ( v3 )
  {
    if ( !BlockEntity::isType(v3, *((_DWORD *)v1 + 22)) )
      v4 = 0;
  }
  else
    v4 = 0;
  return v4;
}


int __fastcall LevelContainerManagerModel::_onBlockSlotChanged(LevelContainerManagerModel *this, int a2, const ItemInstance *a3, const ItemInstance *a4)
{
  return (*(int (__cdecl **)(_DWORD, LevelContainerManagerModel *))(**((_DWORD **)this + 1) + 1464))(
           *((_DWORD *)this + 1),
           this);
}


void __fastcall LevelContainerManagerModel::~LevelContainerManagerModel(LevelContainerManagerModel *this)
{
  LevelContainerManagerModel::~LevelContainerManagerModel(this);
}


int __fastcall LevelContainerManagerModel::_getEntity(LevelContainerManagerModel *this)
{
  LevelContainerManagerModel *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  v2 = Entity::getLevel(*((Entity **)this + 1));
  return Level::fetchEntity(v2, 0, *((_QWORD *)v1 + 10), *((_QWORD *)v1 + 10) >> 32, 0);
}
