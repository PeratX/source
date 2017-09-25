

const void **__fastcall FurnaceContainerManagerModel::_updateResultSlotInfo(FurnaceContainerManagerModel *this)
{
  FurnaceContainerManagerModel *v1; // r4@1
  int v2; // r5@1
  int v3; // r0@1
  int v4; // r6@1
  int v5; // r0@1
  bool v6; // zf@1
  void *v7; // r0@6
  const void **result; // r0@7
  bool v9; // zf@8
  FurnaceRecipes *v10; // r0@13
  void *v11; // r0@17
  signed int v12; // r5@18
  unsigned int *v13; // r2@25
  signed int v14; // r1@27
  unsigned int *v15; // r2@33
  signed int v16; // r1@35
  int v17; // [sp+4h] [bp-64h]@17
  char v18; // [sp+8h] [bp-60h]@13
  const void **v19; // [sp+10h] [bp-58h]@23
  void *v20; // [sp+2Ch] [bp-3Ch]@21
  void *ptr; // [sp+3Ch] [bp-2Ch]@19
  int v22; // [sp+50h] [bp-18h]@6

  v1 = this;
  v2 = (*(int (**)(void))(*(_DWORD *)this + 32))();
  v3 = (*(int (__fastcall **)(FurnaceContainerManagerModel *, signed int))(*(_DWORD *)v1 + 32))(v1, 2);
  v4 = v3;
  v5 = *(_BYTE *)(v3 + 15);
  v6 = v5 == 0;
  if ( v5 )
    v6 = *(_DWORD *)v4 == 0;
  if ( v6 || ItemInstance::isNull((ItemInstance *)v4) || !*(_BYTE *)(v4 + 14) )
  {
    v9 = *(_BYTE *)(v2 + 15) == 0;
    if ( *(_BYTE *)(v2 + 15) )
      v9 = *(_DWORD *)v2 == 0;
    if ( v9 || ItemInstance::isNull((ItemInstance *)v2) || !*(_BYTE *)(v2 + 14) )
    {
      result = sub_21E8190((void **)v1 + 27, (char *)&unk_257BC67, 0);
      *((_DWORD *)v1 + 28) = 0;
    }
    else
      v10 = FurnaceRecipes::getInstance((FurnaceRecipes *)*(_BYTE *)(v2 + 14));
      FurnaceRecipes::getResult((FurnaceRecipes *)&v18, v10, v2);
      if ( ItemInstance::isNull((ItemInstance *)&v18) )
      {
        sub_21E8190((void **)v1 + 27, (char *)&unk_257BC67, 0);
        *((_DWORD *)v1 + 28) = 0;
      }
      else
        ItemInstance::getName((ItemInstance *)&v17, (int)&v18);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)v1 + 27,
          &v17);
        v11 = (void *)(v17 - 12);
        if ( (int *)(v17 - 12) != &dword_28898C0 )
        {
          v15 = (unsigned int *)(v17 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
          }
          else
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v11);
        }
        v12 = ItemInstance::getId((ItemInstance *)&v18);
        *((_DWORD *)v1 + 28) = ItemInstance::getAuxValue((ItemInstance *)&v18) | (v12 << 16);
      if ( ptr )
        operator delete(ptr);
      if ( v20 )
        operator delete(v20);
      result = v19;
      if ( v19 )
        result = (const void **)(*((int (**)(void))*v19 + 1))();
  }
  else
    ItemInstance::getName((ItemInstance *)&v22, v4);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v1 + 27,
      &v22);
    v7 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v22 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    result = 0;
    *((_DWORD *)v1 + 28) = 0;
  return result;
}


signed int __fastcall FurnaceContainerManagerModel::isFurnaceValid(FurnaceContainerManagerModel *this, float a2)
{
  FurnaceContainerManagerModel *v3; // r4@1
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
  v5 = BlockSource::getBlockEntity(v4, (FurnaceContainerManagerModel *)((char *)v3 + 68));
  if ( !v5 )
  if ( BlockEntity::isType(v5, 1) != 1 )
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


int __fastcall FurnaceContainerManagerModel::FurnaceContainerManagerModel(double a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1

  v3 = a3;
  v4 = LODWORD(a1);
  ContainerManagerModel::ContainerManagerModel(a1, a2);
  *(_DWORD *)v4 = &off_26ED240;
  *(_DWORD *)(v4 + 68) = *(_DWORD *)v3;
  *(_DWORD *)(v4 + 72) = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v4 + 76) = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v4 + 104) = 0;
  *(_DWORD *)(v4 + 96) = 0;
  *(_DWORD *)(v4 + 100) = 0;
  *(_DWORD *)(v4 + 88) = 0;
  *(_DWORD *)(v4 + 92) = 0;
  *(_DWORD *)(v4 + 80) = 0;
  *(_DWORD *)(v4 + 84) = 0;
  *(_DWORD *)(v4 + 108) = &unk_28898CC;
  *(_DWORD *)(v4 + 112) = 0;
  ContainerManagerModel::setContainerType(v4, 2);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 44))(v4);
  return v4;
}


char *__fastcall FurnaceContainerManagerModel::getItems(FurnaceContainerManagerModel *this, int a2)
{
  FurnaceContainerManagerModel *v2; // r10@1
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
  v4 = 0x15u % dword_27FA7B8;
  v5 = *(_DWORD *)(dword_27FA7B4 + 4 * (0x15u % dword_27FA7B8));
  if ( !v5 )
    goto LABEL_13;
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  while ( 1 )
  {
    v8 = v7 == 21;
    if ( v7 == 21 )
      v8 = *(_DWORD *)(v6 + 4) == 21;
    if ( v8 )
      break;
    v9 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 )
    {
      v7 = *(_DWORD *)(v9 + 12);
      v5 = v6;
      v6 = *(_DWORD *)v6;
      if ( *(_DWORD *)(v9 + 12) % (unsigned int)dword_27FA7B8 == v4 )
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
    v11[1] = 21;
    v11[2] = &unk_28898CC;
    v5 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27FA7B4,
           v4,
           0x15u,
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
  v17 = 0x14u % dword_27FA7B8;
  v18 = *(_DWORD *)(dword_27FA7B4 + 4 * (0x14u % dword_27FA7B8));
  if ( !v18 )
    goto LABEL_33;
  v19 = *(_DWORD *)v18;
  v20 = *(_DWORD *)(*(_DWORD *)v18 + 12);
    v21 = v20 == 20;
    if ( v20 == 20 )
      v21 = *(_DWORD *)(v19 + 4) == 20;
    if ( v21 )
    v22 = *(_DWORD *)v19;
    if ( *(_DWORD *)v19 )
      v20 = *(_DWORD *)(v22 + 12);
      v18 = v19;
      v19 = *(_DWORD *)v19;
      if ( *(_DWORD *)(v22 + 12) % (unsigned int)dword_27FA7B8 == v17 )
  v23 = v18 == 0;
  if ( v18 )
    v18 = *(_DWORD *)v18;
    v23 = v18 == 0;
  if ( v23 )
LABEL_33:
    v24 = operator new(0x10u);
    *v24 = 0;
    v24[1] = 20;
    v24[2] = &unk_28898CC;
    v18 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27FA7B4,
            v17,
            0x14u,
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
  v29 = 0x16u % dword_27FA7B8;
  v30 = *(_DWORD *)(dword_27FA7B4 + 4 * (0x16u % dword_27FA7B8));
  if ( !v30 )
    goto LABEL_51;
  v31 = *(_DWORD *)v30;
  v32 = *(_DWORD *)(*(_DWORD *)v30 + 12);
    v33 = v32 == 22;
    if ( v32 == 22 )
      v33 = *(_DWORD *)(v31 + 4) == 22;
    if ( v33 )
    v34 = *(_DWORD *)v31;
    if ( *(_DWORD *)v31 )
      v32 = *(_DWORD *)(v34 + 12);
      v30 = v31;
      v31 = *(_DWORD *)v31;
      if ( *(_DWORD *)(v34 + 12) % (unsigned int)dword_27FA7B8 == v29 )
  v35 = v30 == 0;
  if ( v30 )
    v30 = *(_DWORD *)v30;
    v35 = v30 == 0;
  if ( v35 )
LABEL_51:
    v36 = operator new(0x10u);
    *v36 = 0;
    v36[1] = 22;
    v36[2] = &unk_28898CC;
    v30 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v29,
            0x16u,
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


const void **__fastcall FurnaceContainerManagerModel::_onFurnaceIngredientSlotChanged(FurnaceContainerManagerModel *this, int a2, const ItemInstance *a3, const ItemInstance *a4)
{
  FurnaceContainerManagerModel *v4; // r4@1

  v4 = this;
  (*(void (__cdecl **)(_DWORD, _DWORD))(**((_DWORD **)this + 1) + 1464))(*((_DWORD *)this + 1), this);
  return j_j_j__ZN28FurnaceContainerManagerModel21_updateResultSlotInfoEv(v4);
}


FurnaceBlockEntity *__fastcall FurnaceContainerManagerModel::setData(FurnaceContainerManagerModel *this, int a2, int a3)
{
  FurnaceContainerManagerModel *v3; // r4@1
  signed int v4; // r5@1
  int v5; // r6@1
  BlockSource *v6; // r0@1
  FurnaceBlockEntity *result; // r0@1
  FurnaceBlockEntity *v8; // r4@1
  char *v9; // r6@7
  char *v10; // r0@8
  int v11; // r0@8
  char *v12; // r0@15
  int v13; // [sp+0h] [bp-A8h]@16
  int v14; // [sp+8h] [bp-A0h]@20
  void *v15; // [sp+24h] [bp-84h]@18
  void *v16; // [sp+34h] [bp-74h]@16
  char v17; // [sp+48h] [bp-60h]@8
  int v18; // [sp+50h] [bp-58h]@12
  void *v19; // [sp+6Ch] [bp-3Ch]@10
  void *ptr; // [sp+7Ch] [bp-2Ch]@8

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  result = (FurnaceBlockEntity *)BlockSource::getBlockEntity(v6, (FurnaceContainerManagerModel *)((char *)v3 + 68));
  v8 = result;
  if ( result )
  {
    result = (FurnaceBlockEntity *)BlockEntity::isType((int)result, 1);
    if ( result == (FurnaceBlockEntity *)1 )
    {
      switch ( v5 )
      {
        case 0:
          FurnaceBlockEntity::setTickCount(v8, v4);
          goto LABEL_23;
        case 1:
          FurnaceBlockEntity::setLitTime(v8, v4);
        case 2:
          FurnaceBlockEntity::setLitDuration(v8, v4);
        case 3:
          v9 = FurnaceBlockEntity::getLastFuelSource(v8);
          if ( v4 < 1 )
          {
            ItemInstance::ItemInstance((int)&v13);
            ItemInstance::operator=((int)v9, (int)&v13);
            if ( v16 )
              operator delete(v16);
            if ( v15 )
              operator delete(v15);
            if ( v14 )
              (*(void (**)(void))(*(_DWORD *)v14 + 4))();
            v14 = 0;
          }
          else
            v10 = FurnaceBlockEntity::getLastFuelSource(v8);
            v11 = ItemInstance::getAuxValue((ItemInstance *)v10);
            ItemInstance::ItemInstance((ItemInstance *)&v17, v4, 1, v11);
            ItemInstance::operator=((int)v9, (int)&v17);
            if ( ptr )
              operator delete(ptr);
            if ( v19 )
              operator delete(v19);
            if ( v18 )
              (*(void (**)(void))(*(_DWORD *)v18 + 4))();
            v18 = 0;
        case 4:
          v12 = FurnaceBlockEntity::getLastFuelSource(v8);
          ItemInstance::setAuxValue((ItemInstance *)v12, (signed __int16)v4);
LABEL_23:
          result = (FurnaceBlockEntity *)BlockEntity::setChanged(v8);
          break;
        default:
          return result;
      }
    }
  }
  return result;
}


unsigned int __fastcall FurnaceContainerManagerModel::getBurnProgress(FurnaceContainerManagerModel *this, int a2)
{
  FurnaceContainerManagerModel *v2; // r5@1
  int v3; // r4@1
  BlockSource *v4; // r0@1
  int v5; // r0@1
  FurnaceBlockEntity *v6; // r5@1
  unsigned int result; // r0@3

  v2 = this;
  v3 = a2;
  v4 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  v5 = BlockSource::getBlockEntity(v4, (FurnaceContainerManagerModel *)((char *)v2 + 68));
  v6 = (FurnaceBlockEntity *)v5;
  if ( v5 && BlockEntity::isType(v5, 1) == 1 )
    result = j_j_j__ZN18FurnaceBlockEntity15getBurnProgressEi(v6, v3);
  else
    result = 0;
  return result;
}


int __fastcall FurnaceContainerManagerModel::fireItemAcquiredEvent(FurnaceContainerManagerModel *this, const ItemInstance *a2, int a3)
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
           7);
}


char *__fastcall FurnaceContainerManagerModel::getOutputName(FurnaceContainerManagerModel *this)
{
  return (char *)this + 108;
}


void __fastcall FurnaceContainerManagerModel::~FurnaceContainerManagerModel(FurnaceContainerManagerModel *this)
{
  FurnaceContainerManagerModel::~FurnaceContainerManagerModel(this);
}


void *__fastcall FurnaceContainerManagerModel::getSlot(FurnaceContainerManagerModel *this, int a2)
{
  unsigned int v2; // r10@4
  unsigned __int64 *v3; // r9@4
  int v4; // r0@4
  int v5; // r5@5
  int v6; // r7@5
  bool v7; // zf@6
  int v8; // r4@9
  unsigned int v9; // r10@12
  int v10; // r5@13
  int v11; // r7@13
  bool v12; // zf@14
  int v13; // r4@17
  unsigned int v14; // r10@20
  int v15; // r5@21
  int v16; // r7@21
  bool v17; // zf@22
  int v18; // r4@25
  bool v20; // zf@29
  _DWORD *v21; // r0@33
  int v22; // r3@33
  unsigned int v23; // r2@33
  int *v24; // r0@33
  int v25; // r1@33
  bool v26; // zf@34
  _DWORD *v27; // r0@38
  bool v28; // zf@39
  _DWORD *v29; // r0@43
  int v30; // r0@45

  if ( a2 == 2 )
  {
    v9 = 0x16u % dword_27FA7B8;
    v3 = (unsigned __int64 *)((char *)this + 40);
    v4 = *(_DWORD *)(dword_27FA7B4 + 4 * (0x16u % dword_27FA7B8));
    if ( v4 )
    {
      v10 = *(_DWORD *)v4;
      v11 = *(_DWORD *)(*(_DWORD *)v4 + 12);
      while ( 1 )
      {
        v12 = v11 == 22;
        if ( v11 == 22 )
          v12 = *(_DWORD *)(v10 + 4) == 22;
        if ( v12 )
          break;
        v13 = *(_DWORD *)v10;
        if ( *(_DWORD *)v10 )
        {
          v11 = *(_DWORD *)(v13 + 12);
          v4 = v10;
          v10 = *(_DWORD *)v10;
          if ( *(_DWORD *)(v13 + 12) % (unsigned int)dword_27FA7B8 == v9 )
            continue;
        }
        goto LABEL_38;
      }
      v26 = v4 == 0;
      if ( v4 )
        v4 = *(_DWORD *)v4;
        v26 = v4 == 0;
      if ( !v26 )
        goto LABEL_45;
    }
LABEL_38:
    v27 = operator new(0x10u);
    v22 = (int)v27;
    *v27 = 0;
    v27[1] = 22;
    v23 = 22;
    v27[2] = &unk_28898CC;
    v24 = &dword_27FA7B4;
    v25 = v9;
    goto LABEL_44;
  }
  if ( a2 == 1 )
    v14 = 0x14u % dword_27FA7B8;
    v4 = *(_DWORD *)(dword_27FA7B4 + 4 * (0x14u % dword_27FA7B8));
      v15 = *(_DWORD *)v4;
      v16 = *(_DWORD *)(*(_DWORD *)v4 + 12);
        v17 = v16 == 20;
        if ( v16 == 20 )
          v17 = *(_DWORD *)(v15 + 4) == 20;
        if ( v17 )
        v18 = *(_DWORD *)v15;
        if ( *(_DWORD *)v15 )
          v16 = *(_DWORD *)(v18 + 12);
          v4 = v15;
          v15 = *(_DWORD *)v15;
          if ( *(_DWORD *)(v18 + 12) % (unsigned int)dword_27FA7B8 == v14 )
        goto LABEL_43;
      v28 = v4 == 0;
        v28 = v4 == 0;
      if ( !v28 )
LABEL_43:
    v29 = operator new(0x10u);
    v22 = (int)v29;
    *v29 = 0;
    v29[1] = 20;
    v23 = 20;
    v29[2] = &unk_28898CC;
    v25 = v14;
  if ( a2 )
    return &ItemInstance::EMPTY_ITEM;
  v2 = 0x15u % dword_27FA7B8;
  v3 = (unsigned __int64 *)((char *)this + 40);
  v4 = *(_DWORD *)(dword_27FA7B4 + 4 * (0x15u % dword_27FA7B8));
  if ( !v4 )
    goto LABEL_33;
  v5 = *(_DWORD *)v4;
  v6 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  while ( 1 )
    v7 = v6 == 21;
    if ( v6 == 21 )
      v7 = *(_DWORD *)(v5 + 4) == 21;
    if ( v7 )
      break;
    v8 = *(_DWORD *)v5;
    if ( *(_DWORD *)v5 )
      v6 = *(_DWORD *)(v8 + 12);
      v4 = v5;
      v5 = *(_DWORD *)v5;
      if ( *(_DWORD *)(v8 + 12) % (unsigned int)dword_27FA7B8 == v2 )
        continue;
  v20 = v4 == 0;
  if ( v4 )
    v4 = *(_DWORD *)v4;
    v20 = v4 == 0;
  if ( v20 )
LABEL_33:
    v21 = operator new(0x10u);
    v22 = (int)v21;
    *v21 = 0;
    v21[1] = 21;
    v23 = 21;
    v21[2] = &unk_28898CC;
    v25 = v2;
LABEL_44:
    v4 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)v24,
           v25,
           v23,
           v22);
LABEL_45:
  v30 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          v3,
          (int **)(v4 + 8));
  return (void *)(*(int (**)(void))(**(_DWORD **)v30 + 32))();
}


ItemInstance *__fastcall FurnaceContainerManagerModel::getLastFuelSource(FurnaceContainerManagerModel *this, int a2)
{
  int v2; // r5@1
  ItemInstance *v3; // r4@1
  BlockSource *v4; // r0@1
  int v5; // r0@1
  FurnaceBlockEntity *v6; // r5@1
  char *v7; // r0@3
  ItemInstance *result; // r0@3

  v2 = a2;
  v3 = this;
  v4 = (BlockSource *)Entity::getRegion(*(Entity **)(a2 + 4));
  v5 = BlockSource::getBlockEntity(v4, (const BlockPos *)(v2 + 68));
  v6 = (FurnaceBlockEntity *)v5;
  if ( v5 && BlockEntity::isType(v5, 1) == 1 )
  {
    v7 = FurnaceBlockEntity::getLastFuelSource(v6);
    result = ItemInstance::ItemInstance(v3, (int)v7);
  }
  else
    result = (ItemInstance *)ItemInstance::ItemInstance((int)v3);
  return result;
}


const void **__fastcall FurnaceContainerManagerModel::_onFurnaceResultSlotChanged(FurnaceContainerManagerModel *this, int a2, const ItemInstance *a3, const ItemInstance *a4)
{
  FurnaceContainerManagerModel *v4; // r4@1

  v4 = this;
  (*(void (__cdecl **)(_DWORD, _DWORD))(**((_DWORD **)this + 1) + 1464))(*((_DWORD *)this + 1), this);
  return j_j_j__ZN28FurnaceContainerManagerModel21_updateResultSlotInfoEv(v4);
}


int __fastcall FurnaceContainerManagerModel::getLitProgress(FurnaceContainerManagerModel *this, int a2)
{
  FurnaceContainerManagerModel *v2; // r5@1
  int v3; // r4@1
  BlockSource *v4; // r0@1
  int v5; // r0@1
  FurnaceBlockEntity *v6; // r5@1
  int result; // r0@3

  v2 = this;
  v3 = a2;
  v4 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  v5 = BlockSource::getBlockEntity(v4, (FurnaceContainerManagerModel *)((char *)v2 + 68));
  v6 = (FurnaceBlockEntity *)v5;
  if ( v5 && BlockEntity::isType(v5, 1) == 1 )
    result = j_j_j__ZN18FurnaceBlockEntity14getLitProgressEi(v6, v3);
  else
    result = 0;
  return result;
}


FurnaceBlockEntity *__fastcall FurnaceContainerManagerModel::broadcastChanges(FurnaceContainerManagerModel *this)
{
  FurnaceContainerManagerModel *v1; // r4@1
  BlockSource *v2; // r0@1
  FurnaceBlockEntity *result; // r0@1
  FurnaceBlockEntity *v4; // r5@1
  int v5; // r6@4
  void (__fastcall *v6)(int, FurnaceContainerManagerModel *, _DWORD, int); // r7@4
  int v7; // r0@4
  int v8; // r6@6
  void (__fastcall *v9)(int, FurnaceContainerManagerModel *, signed int, int); // r7@6
  int v10; // r0@6
  int v11; // r6@8
  void (__fastcall *v12)(int, FurnaceContainerManagerModel *, signed int, int); // r7@8
  int v13; // r0@8
  char *v14; // r6@10
  int v15; // r7@11
  void (__fastcall *v16)(int, FurnaceContainerManagerModel *, signed int, signed int); // r8@11
  signed int v17; // r0@11
  int v18; // r7@13
  void (__fastcall *v19)(int, FurnaceContainerManagerModel *, signed int, int); // r8@13
  int v20; // r0@13
  int v21; // r0@14
  int v22; // r5@14
  bool v23; // zf@14

  v1 = this;
  v2 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  result = (FurnaceBlockEntity *)BlockSource::getBlockEntity(v2, (FurnaceContainerManagerModel *)((char *)v1 + 68));
  v4 = result;
  if ( result )
  {
    result = (FurnaceBlockEntity *)BlockEntity::isType((int)result, 1);
    if ( result == (FurnaceBlockEntity *)1 )
    {
      if ( FurnaceBlockEntity::getTickCount(v4) != *((_DWORD *)v1 + 20) )
      {
        v5 = *((_DWORD *)v1 + 1);
        v6 = *(void (__fastcall **)(int, FurnaceContainerManagerModel *, _DWORD, int))(*(_DWORD *)v5 + 1460);
        v7 = FurnaceBlockEntity::getTickCount(v4);
        v6(v5, v1, 0, v7);
        *((_DWORD *)v1 + 20) = FurnaceBlockEntity::getTickCount(v4);
      }
      if ( FurnaceBlockEntity::getLitTime(v4) != *((_DWORD *)v1 + 21) )
        v8 = *((_DWORD *)v1 + 1);
        v9 = *(void (__fastcall **)(int, FurnaceContainerManagerModel *, signed int, int))(*(_DWORD *)v8 + 1460);
        v10 = FurnaceBlockEntity::getLitTime(v4);
        v9(v8, v1, 1, v10);
        *((_DWORD *)v1 + 21) = FurnaceBlockEntity::getLitTime(v4);
      if ( FurnaceBlockEntity::getLitDuration(v4) != *((_DWORD *)v1 + 22) )
        v11 = *((_DWORD *)v1 + 1);
        v12 = *(void (__fastcall **)(int, FurnaceContainerManagerModel *, signed int, int))(*(_DWORD *)v11 + 1460);
        v13 = FurnaceBlockEntity::getLitDuration(v4);
        v12(v11, v1, 2, v13);
        *((_DWORD *)v1 + 22) = FurnaceBlockEntity::getLitDuration(v4);
      if ( *(_DWORD *)FurnaceBlockEntity::getLastFuelSource(v4) )
        v14 = FurnaceBlockEntity::getLastFuelSource(v4);
        if ( ItemInstance::getId((ItemInstance *)v14) != *((_DWORD *)v1 + 23) )
        {
          v15 = *((_DWORD *)v1 + 1);
          v16 = *(void (__fastcall **)(int, FurnaceContainerManagerModel *, signed int, signed int))(*(_DWORD *)v15 + 1460);
          v17 = ItemInstance::getId((ItemInstance *)v14);
          v16(v15, v1, 3, v17);
          *((_DWORD *)v1 + 22) = ItemInstance::getId((ItemInstance *)v14);
        }
        if ( ItemInstance::getAuxValue((ItemInstance *)v14) != *((_DWORD *)v1 + 24) )
          v18 = *((_DWORD *)v1 + 1);
          v19 = *(void (__fastcall **)(int, FurnaceContainerManagerModel *, signed int, int))(*(_DWORD *)v18 + 1460);
          v20 = ItemInstance::getAuxValue((ItemInstance *)v14);
          v19(v18, v1, 4, v20);
          *((_DWORD *)v1 + 22) = ItemInstance::getAuxValue((ItemInstance *)v14);
      v21 = (*(int (__fastcall **)(FurnaceBlockEntity *, _DWORD))(*(_DWORD *)v4 + 116))(v4, 0);
      v22 = v21;
      result = (FurnaceBlockEntity *)*(_BYTE *)(v21 + 15);
      v23 = result == 0;
      if ( result )
        result = *(FurnaceBlockEntity **)v22;
        v23 = *(_DWORD *)v22 == 0;
      if ( !v23 )
        result = (FurnaceBlockEntity *)ItemInstance::isNull((ItemInstance *)v22);
        if ( !result )
          result = (FurnaceBlockEntity *)*(_BYTE *)(v22 + 14);
          if ( *(_BYTE *)(v22 + 14) )
          {
            if ( ItemInstance::getId((ItemInstance *)v22) != *((_DWORD *)v1 + 25) )
              *((_DWORD *)v1 + 25) = ItemInstance::getId((ItemInstance *)v22);
            result = (FurnaceBlockEntity *)ItemInstance::getAuxValue((ItemInstance *)v22);
            if ( result != *((FurnaceBlockEntity **)v1 + 26) )
            {
              result = (FurnaceBlockEntity *)ItemInstance::getAuxValue((ItemInstance *)v22);
              *((_DWORD *)v1 + 26) = result;
            }
          }
    }
  }
  return result;
}


const void **__fastcall FurnaceContainerManagerModel::_onFurnaceFuelSlotChanged(FurnaceContainerManagerModel *this, int a2, const ItemInstance *a3, const ItemInstance *a4)
{
  FurnaceContainerManagerModel *v4; // r4@1

  v4 = this;
  (*(void (__cdecl **)(_DWORD, _DWORD))(**((_DWORD **)this + 1) + 1464))(*((_DWORD *)this + 1), this);
  return j_j_j__ZN28FurnaceContainerManagerModel21_updateResultSlotInfoEv(v4);
}


signed int __fastcall FurnaceContainerManagerModel::_getFurnaceEntity(FurnaceContainerManagerModel *this)
{
  FurnaceContainerManagerModel *v1; // r4@1
  BlockSource *v2; // r0@1
  int v3; // r0@1
  int v4; // r4@1
  signed int result; // r0@2

  v1 = this;
  v2 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  v3 = BlockSource::getBlockEntity(v2, (FurnaceContainerManagerModel *)((char *)v1 + 68));
  v4 = v3;
  if ( v3 )
  {
    result = BlockEntity::isType(v3, 1);
    if ( result )
      result = v4;
  }
  else
    result = 0;
  return result;
}


int __fastcall FurnaceContainerManagerModel::setSlot(int result, int a2, const ItemInstance *a3)
{
  int v3; // r10@1
  int v4; // r7@4
  int v5; // r0@4
  int v6; // r11@5
  int v7; // r6@5
  bool v8; // zf@6
  int v9; // r4@9
  int v10; // r8@12
  unsigned __int64 *v11; // r9@12
  int v12; // r0@12
  int v13; // r7@13
  int v14; // r4@13
  bool v15; // zf@14
  int v16; // r6@17
  int v17; // r8@20
  int v18; // r0@20
  int v19; // r7@21
  int v20; // r4@21
  bool v21; // zf@22
  int v22; // r6@25
  bool v23; // zf@29
  _DWORD *v24; // r0@33
  int v25; // r0@34
  int v26; // r7@34
  int v27; // r5@34
  int v28; // r0@34
  int v29; // r8@35
  int v30; // r4@35
  bool v31; // zf@36
  int v32; // r11@39
  bool v33; // zf@42
  _DWORD *v34; // r0@46
  int v35; // r0@47
  int v36; // r8@47
  unsigned int v37; // r5@47
  int v38; // r0@47
  int v39; // r11@48
  int v40; // r4@48
  bool v41; // zf@49
  int v42; // r7@52
  bool v43; // zf@55
  _DWORD *v44; // r0@59
  int v45; // r0@60
  unsigned int v46; // r5@60
  int v47; // r11@61
  int v48; // r4@61
  bool v49; // zf@62
  int v50; // r7@65
  bool v51; // zf@68
  _DWORD *v52; // r0@72
  unsigned int v53; // r0@73
  const ItemInstance *v54; // r2@73
  bool v55; // zf@74
  _DWORD *v56; // r0@78
  int v57; // r3@78
  unsigned int v58; // r2@78
  int *v59; // r0@78
  int v60; // r1@78
  bool v61; // zf@79
  _DWORD *v62; // r0@83
  ItemInstance *v63; // [sp+0h] [bp-28h]@4

  v3 = result;
  if ( a2 == 2 )
  {
    v63 = a3;
    v10 = 0x16u % dword_27FA7B8;
    v11 = (unsigned __int64 *)(result + 40);
    v12 = *(_DWORD *)(dword_27FA7B4 + 4 * (0x16u % dword_27FA7B8));
    if ( !v12 )
      goto LABEL_46;
    v13 = *(_DWORD *)v12;
    v14 = *(_DWORD *)(*(_DWORD *)v12 + 12);
    while ( 1 )
    {
      v15 = v14 == 22;
      if ( v14 == 22 )
        v15 = *(_DWORD *)(v13 + 4) == 22;
      if ( v15 )
        break;
      v16 = *(_DWORD *)v13;
      if ( *(_DWORD *)v13 )
      {
        v14 = *(_DWORD *)(v16 + 12);
        v12 = v13;
        v13 = *(_DWORD *)v13;
        if ( *(_DWORD *)(v16 + 12) % (unsigned int)dword_27FA7B8 == v10 )
          continue;
      }
    }
    v33 = v12 == 0;
    if ( v12 )
      v12 = *(_DWORD *)v12;
      v33 = v12 == 0;
    if ( v33 )
LABEL_46:
      v34 = operator new(0x10u);
      *v34 = 0;
      v34[1] = 22;
      v34[2] = &unk_28898CC;
      v12 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27FA7B4,
              v10,
              0x16u,
              (int)v34);
    v35 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (unsigned __int64 *)(v3 + 40),
            (int **)(v12 + 8));
    v36 = (*(int (**)(void))(**(_DWORD **)v35 + 32))();
    v37 = 0x16u % dword_27FA7B8;
    v38 = *(_DWORD *)(dword_27FA7B4 + 4 * (0x16u % dword_27FA7B8));
    if ( v38 )
      v39 = *(_DWORD *)v38;
      v40 = *(_DWORD *)(*(_DWORD *)v38 + 12);
      while ( 1 )
        v41 = v40 == 22;
        if ( v40 == 22 )
          v41 = *(_DWORD *)(v39 + 4) == 22;
        if ( v41 )
          break;
        v42 = *(_DWORD *)v39;
        if ( *(_DWORD *)v39 )
        {
          v40 = *(_DWORD *)(v42 + 12);
          v38 = v39;
          v39 = *(_DWORD *)v39;
          if ( *(_DWORD *)(v42 + 12) % (unsigned int)dword_27FA7B8 == v37 )
            continue;
        }
        goto LABEL_78;
      v55 = v38 == 0;
      if ( v38 )
        v38 = *(_DWORD *)v38;
        v55 = v38 == 0;
      if ( !v55 )
        goto LABEL_85;
LABEL_78:
    v56 = operator new(0x10u);
    v57 = (int)v56;
    *v56 = 0;
    v56[1] = 22;
    v58 = 22;
    v56[2] = &unk_28898CC;
    v59 = &dword_27FA7B4;
    v60 = v37;
    goto LABEL_84;
  }
  if ( a2 == 1 )
    v17 = 0x14u % dword_27FA7B8;
    v18 = *(_DWORD *)(dword_27FA7B4 + 4 * (0x14u % dword_27FA7B8));
    if ( !v18 )
      goto LABEL_59;
    v19 = *(_DWORD *)v18;
    v20 = *(_DWORD *)(*(_DWORD *)v18 + 12);
      v21 = v20 == 20;
      if ( v20 == 20 )
        v21 = *(_DWORD *)(v19 + 4) == 20;
      if ( v21 )
      v22 = *(_DWORD *)v19;
      if ( *(_DWORD *)v19 )
        v20 = *(_DWORD *)(v22 + 12);
        v18 = v19;
        v19 = *(_DWORD *)v19;
        if ( *(_DWORD *)(v22 + 12) % (unsigned int)dword_27FA7B8 == v17 )
    v43 = v18 == 0;
    if ( v18 )
      v18 = *(_DWORD *)v18;
      v43 = v18 == 0;
    if ( v43 )
LABEL_59:
      v44 = operator new(0x10u);
      *v44 = 0;
      v44[1] = 20;
      v44[2] = &unk_28898CC;
      v18 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v17,
              0x14u,
              (int)v44);
    v45 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)(v18 + 8));
    v36 = (*(int (**)(void))(**(_DWORD **)v45 + 32))();
    v46 = 0x14u % dword_27FA7B8;
    v38 = *(_DWORD *)(dword_27FA7B4 + 4 * (0x14u % dword_27FA7B8));
      v47 = *(_DWORD *)v38;
      v48 = *(_DWORD *)(*(_DWORD *)v38 + 12);
        v49 = v48 == 20;
        if ( v48 == 20 )
          v49 = *(_DWORD *)(v47 + 4) == 20;
        if ( v49 )
        v50 = *(_DWORD *)v47;
        if ( *(_DWORD *)v47 )
          v48 = *(_DWORD *)(v50 + 12);
          v38 = v47;
          v47 = *(_DWORD *)v47;
          if ( *(_DWORD *)(v50 + 12) % (unsigned int)dword_27FA7B8 == v46 )
        goto LABEL_83;
      v61 = v38 == 0;
        v61 = v38 == 0;
      if ( !v61 )
LABEL_83:
    v62 = operator new(0x10u);
    v57 = (int)v62;
    *v62 = 0;
    v62[1] = 20;
    v58 = 20;
    v62[2] = &unk_28898CC;
    v60 = v46;
LABEL_84:
    v38 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)v59,
            v60,
            v58,
            v57);
LABEL_85:
    v53 = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                       v11,
                       (int **)(v38 + 8));
    v54 = (const ItemInstance *)v36;
LABEL_86:
    ContainerModel::networkUpdateItem(v53, v54, v63);
    return (int)j_j_j__ZN28FurnaceContainerManagerModel21_updateResultSlotInfoEv((FurnaceContainerManagerModel *)v3);
  if ( !a2 )
    v4 = 0x15u % dword_27FA7B8;
    v5 = *(_DWORD *)(dword_27FA7B4 + 4 * (0x15u % dword_27FA7B8));
    if ( !v5 )
      goto LABEL_33;
    v6 = *(_DWORD *)v5;
    v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
      v8 = v7 == 21;
      if ( v7 == 21 )
        v8 = *(_DWORD *)(v6 + 4) == 21;
      if ( v8 )
      v9 = *(_DWORD *)v6;
      if ( *(_DWORD *)v6 )
        v7 = *(_DWORD *)(v9 + 12);
        v5 = v6;
        v6 = *(_DWORD *)v6;
        if ( *(_DWORD *)(v9 + 12) % (unsigned int)dword_27FA7B8 == v4 )
    v23 = v5 == 0;
    if ( v5 )
      v5 = *(_DWORD *)v5;
      v23 = v5 == 0;
    if ( v23 )
LABEL_33:
      v24 = operator new(0x10u);
      *v24 = 0;
      v24[1] = 21;
      v24[2] = &unk_28898CC;
      v5 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27FA7B4,
             v4,
             0x15u,
             (int)v24);
    v25 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)(v5 + 8));
    v26 = (*(int (**)(void))(**(_DWORD **)v25 + 32))();
    v27 = 0x15u % dword_27FA7B8;
    v28 = *(_DWORD *)(dword_27FA7B4 + 4 * (0x15u % dword_27FA7B8));
    if ( !v28 )
      goto LABEL_72;
    v29 = *(_DWORD *)v28;
    v30 = *(_DWORD *)(*(_DWORD *)v28 + 12);
      v31 = v30 == 21;
      if ( v30 == 21 )
        v31 = *(_DWORD *)(v29 + 4) == 21;
      if ( v31 )
      v32 = *(_DWORD *)v29;
      if ( *(_DWORD *)v29 )
        v30 = *(_DWORD *)(v32 + 12);
        v28 = v29;
        v29 = *(_DWORD *)v29;
        if ( *(_DWORD *)(v32 + 12) % (unsigned int)dword_27FA7B8 == v27 )
    v51 = v28 == 0;
    if ( v28 )
      v28 = *(_DWORD *)v28;
      v51 = v28 == 0;
    if ( v51 )
LABEL_72:
      v52 = operator new(0x10u);
      *v52 = 0;
      v52[1] = 21;
      v52[2] = &unk_28898CC;
      v28 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v27,
              0x15u,
              (int)v52);
                       (unsigned __int64 *)(v3 + 40),
                       (int **)(v28 + 8));
    v54 = (const ItemInstance *)v26;
    goto LABEL_86;
  return result;
}


int __fastcall FurnaceContainerManagerModel::fireItemSmeltedEvent(FurnaceContainerManagerModel *this, const ItemInstance *a2, const ItemInstance *a3)
{
  const ItemInstance *v3; // r4@1
  Player *v4; // r5@1
  MinecraftEventing *v5; // r0@1
  const ItemInstance *v6; // r3@1

  v3 = a3;
  v4 = a2;
  v5 = (MinecraftEventing *)ContainerManagerModel::getPlayer(this);
  return j_j_j__ZN17MinecraftEventing20fireEventItemSmeltedEP6PlayerRK12ItemInstanceS4_(v5, v4, v3, v6);
}


ContainerManagerModel *__fastcall FurnaceContainerManagerModel::~FurnaceContainerManagerModel(FurnaceContainerManagerModel *this)
{
  ContainerManagerModel *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26ED240;
  v2 = *((_DWORD *)this + 27);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  ContainerManagerModel::~ContainerManagerModel(v1);
  return v1;
}


void __fastcall FurnaceContainerManagerModel::~FurnaceContainerManagerModel(FurnaceContainerManagerModel *this)
{
  ContainerManagerModel *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26ED240;
  v2 = *((_DWORD *)this + 27);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  ContainerManagerModel::~ContainerManagerModel(v1);
  operator delete((void *)v1);
}


const void **__fastcall FurnaceContainerManagerModel::init(FurnaceContainerManagerModel *this)
{
  FurnaceContainerManagerModel *v1; // r10@1
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
  FurnaceBlockEntity *v83; // r5@150
  int v84; // r6@152
  void (__fastcall *v85)(int, FurnaceContainerManagerModel *, _DWORD, int); // r4@152
  int v86; // r0@152
  int v87; // r6@152
  void (__fastcall *v88)(int, FurnaceContainerManagerModel *, signed int, int); // r4@152
  int v89; // r0@152
  int v90; // r6@152
  void (__fastcall *v91)(int, FurnaceContainerManagerModel *, signed int, int); // r4@152
  int v92; // r0@152
  char *v93; // r0@153
  int v94; // r6@153
  ItemInstance *v95; // r5@153
  void (__fastcall *v96)(int, FurnaceContainerManagerModel *, signed int, signed int); // r4@153
  signed int v97; // r0@153
  int v98; // r6@153
  void (__fastcall *v99)(int, FurnaceContainerManagerModel *, signed int, int); // r4@153
  int v100; // r0@153
  int v101; // r5@155
  void (__fastcall *v102)(int, FurnaceContainerManagerModel *, int *); // r4@155
  int v103; // r4@155
  int v104; // r5@155
  void *v105; // r0@156
  void *v106; // r0@158
  int v107; // r0@160
  Level *v108; // r0@166
  const void **result; // r0@166
  int v110; // [sp+10h] [bp-E8h]@155
  int v111; // [sp+14h] [bp-E4h]@155
  _DWORD *v112; // [sp+1Ch] [bp-DCh]@148
  __int64 v113; // [sp+24h] [bp-D4h]@148
  _DWORD *v114; // [sp+2Ch] [bp-CCh]@133
  __int64 v115; // [sp+34h] [bp-C4h]@133
  _DWORD *v116; // [sp+3Ch] [bp-BCh]@118
  __int64 v117; // [sp+44h] [bp-B4h]@118
  __int64 v118; // [sp+4Ch] [bp-ACh]@91
  int v119; // [sp+54h] [bp-A4h]@91
  int v120; // [sp+58h] [bp-A0h]@91
  char v121; // [sp+5Ch] [bp-9Ch]@91
  int v122; // [sp+60h] [bp-98h]@91
  int v123; // [sp+64h] [bp-94h]@77
  int v124; // [sp+68h] [bp-90h]@77
  int v125; // [sp+6Ch] [bp-8Ch]@77
  int v126; // [sp+70h] [bp-88h]@77
  char v127; // [sp+74h] [bp-84h]@77
  int v128; // [sp+78h] [bp-80h]@77
  __int64 v129; // [sp+7Ch] [bp-7Ch]@63
  int v130; // [sp+84h] [bp-74h]@63
  int v131; // [sp+88h] [bp-70h]@63
  char v132; // [sp+8Ch] [bp-6Ch]@63
  int v133; // [sp+90h] [bp-68h]@63
  _DWORD *v134; // [sp+94h] [bp-64h]@31
  int v135; // [sp+98h] [bp-60h]@31
  int v136; // [sp+9Ch] [bp-5Ch]@15
  int v137; // [sp+A0h] [bp-58h]@15
  int v138; // [sp+A4h] [bp-54h]@15
  char v139; // [sp+A8h] [bp-50h]@15
  int v140; // [sp+ACh] [bp-4Ch]@15
  int v141; // [sp+B0h] [bp-48h]@1
  int v142; // [sp+B4h] [bp-44h]@1
  int v143; // [sp+B8h] [bp-40h]@1
  char v144; // [sp+BCh] [bp-3Ch]@1
  int v145; // [sp+C0h] [bp-38h]@1
  void *v146; // [sp+C4h] [bp-34h]@29
  __int64 v147; // [sp+CCh] [bp-2Ch]@29

  v1 = this;
  v143 = 24;
  v142 = 9;
  v2 = *((_DWORD *)this + 1);
  v141 = 9;
  ContainerFactory::createModel<InventoryContainerModel,ContainerEnumName,int,Player &,int>(
    (int)&v144,
    (unsigned int *)&v143,
    (unsigned int *)&v142,
    v2,
    &v141);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v144);
  v3 = v145;
  if ( v145 )
  {
    v4 = (unsigned int *)(v145 + 4);
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
  v138 = 26;
  v137 = 27;
  v8 = *((_DWORD *)v1 + 1);
  v136 = 18;
    (int)&v139,
    (unsigned int *)&v138,
    (unsigned int *)&v137,
    v8,
    &v136);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v139);
  v9 = v140;
  if ( v140 )
    v10 = (unsigned int *)(v140 + 4);
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
  LODWORD(v17) = sub_16A3E34;
  v146 = v16;
  HIDWORD(v17) = sub_16A3E14;
  v147 = v17;
  FilteredInventoryContainerModel::FilteredInventoryContainerModel((int)v15, 9u, 0x24u, v14, 9, (int)&v146);
  if ( (_DWORD)v147 )
    ((void (*)(void))v147)();
  v18 = operator new(0x14u);
  *((_DWORD *)v18 + 1) = 1;
  v19 = (unsigned int *)((char *)v18 + 4);
  *((_DWORD *)v18 + 2) = 1;
  v20 = (unsigned int *)((char *)v18 + 8);
  *(_DWORD *)v18 = &off_26ECFB8;
  v21 = *v15;
  *((_DWORD *)v18 + 4) = v15;
  (*(void (__fastcall **)(_DWORD *))(v21 + 12))(v15);
  v134 = v15;
  v135 = (int)v18;
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
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v134);
  v25 = v135;
  if ( v135 )
    v26 = (unsigned int *)(v135 + 4);
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
  v131 = 21;
  v130 = 1;
  v30 = (Entity *)*((_DWORD *)v1 + 1);
  v129 = 1LL;
  ContainerFactory::createModel<LevelContainerModel,ContainerEnumName,int,Player &,int,BlockEntityType,BlockPos &>(
    (int)&v132,
    (unsigned int *)&v131,
    (unsigned int *)&v130,
    v30,
    (int *)&v129 + 1,
    (int *)&v129,
    (int)v1 + 68);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v132);
  v31 = v133;
  if ( v133 )
    v32 = (unsigned int *)(v133 + 4);
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
  v126 = 20;
  v125 = 1;
  v36 = (Entity *)*((_DWORD *)v1 + 1);
  v123 = 1;
  v124 = 1;
    (int)&v127,
    (unsigned int *)&v126,
    (unsigned int *)&v125,
    v36,
    &v124,
    &v123,
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v127);
  v37 = v128;
  if ( v128 )
    v38 = (unsigned int *)(v128 + 4);
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
  v120 = 22;
  v119 = 1;
  v42 = (Entity *)*((_DWORD *)v1 + 1);
  v118 = 8589934593LL;
    (int)&v121,
    (unsigned int *)&v120,
    (unsigned int *)&v119,
    v42,
    (int *)&v118 + 1,
    (int *)&v118,
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v121);
  v43 = v122;
  if ( v122 )
    v44 = (unsigned int *)(v122 + 4);
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
  v48 = 0x15u % dword_27FA7B8;
  v49 = *(_DWORD *)(dword_27FA7B4 + 4 * (0x15u % dword_27FA7B8));
  if ( !v49 )
    goto LABEL_117;
  v50 = *(_DWORD *)v49;
  v51 = *(_DWORD *)(*(_DWORD *)v49 + 12);
  while ( 1 )
    v52 = v51 == 21;
    if ( v51 == 21 )
      v52 = *(_DWORD *)(v50 + 4) == 21;
    if ( v52 )
      break;
    v53 = *(_DWORD *)v50;
    if ( *(_DWORD *)v50 )
      v51 = *(_DWORD *)(v53 + 12);
      v49 = v50;
      v50 = *(_DWORD *)v50;
      if ( *(_DWORD *)(v53 + 12) % (unsigned int)dword_27FA7B8 == v48 )
        continue;
  v54 = v49 == 0;
  if ( v49 )
    v49 = *(_DWORD *)v49;
    v54 = v49 == 0;
  if ( v54 )
LABEL_117:
    v55 = operator new(0x10u);
    *v55 = 0;
    v55[1] = 21;
    v55[2] = &unk_28898CC;
    v49 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27FA7B4,
            v48,
            0x15u,
            (int)v55);
  v56 = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (unsigned __int64 *)v1 + 5,
                     (int **)(v49 + 8));
  v57 = operator new(4u);
  LODWORD(v58) = sub_16A4020;
  *v57 = v1;
  HIDWORD(v58) = sub_16A3FF4;
  v116 = v57;
  v117 = v58;
  ContainerModel::registerPlayerNotificationCallback(v56, (int)&v116);
  if ( (_DWORD)v117 )
    ((void (*)(void))v117)();
  v59 = 0x14u % dword_27FA7B8;
  v60 = *(_DWORD *)(dword_27FA7B4 + 4 * (0x14u % dword_27FA7B8));
  if ( !v60 )
    goto LABEL_132;
  v61 = *(_DWORD *)v60;
  v62 = *(_DWORD *)(*(_DWORD *)v60 + 12);
    v63 = v62 == 20;
    if ( v62 == 20 )
      v63 = *(_DWORD *)(v61 + 4) == 20;
    if ( v63 )
    v64 = *(_DWORD *)v61;
    if ( *(_DWORD *)v61 )
      v62 = *(_DWORD *)(v64 + 12);
      v60 = v61;
      v61 = *(_DWORD *)v61;
      if ( *(_DWORD *)(v64 + 12) % (unsigned int)dword_27FA7B8 == v59 )
  v65 = v60 == 0;
  if ( v60 )
    v60 = *(_DWORD *)v60;
    v65 = v60 == 0;
  if ( v65 )
LABEL_132:
    v66 = operator new(0x10u);
    *v66 = 0;
    v66[1] = 20;
    v66[2] = &unk_28898CC;
    v60 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v59,
            0x14u,
            (int)v66);
  v67 = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)(v60 + 8));
  v68 = operator new(4u);
  LODWORD(v69) = sub_16A4082;
  *v68 = v1;
  HIDWORD(v69) = sub_16A4056;
  v114 = v68;
  v115 = v69;
  ContainerModel::registerPlayerNotificationCallback(v67, (int)&v114);
  if ( (_DWORD)v115 )
    ((void (*)(void))v115)();
  v70 = 0x16u % dword_27FA7B8;
  v71 = *(_DWORD *)(dword_27FA7B4 + 4 * (0x16u % dword_27FA7B8));
  if ( !v71 )
    goto LABEL_147;
  v72 = *(_DWORD *)v71;
  v73 = *(_DWORD *)(*(_DWORD *)v71 + 12);
    v74 = v73 == 22;
    if ( v73 == 22 )
      v74 = *(_DWORD *)(v72 + 4) == 22;
    if ( v74 )
    v75 = *(_DWORD *)v72;
    if ( *(_DWORD *)v72 )
      v73 = *(_DWORD *)(v75 + 12);
      v71 = v72;
      v72 = *(_DWORD *)v72;
      if ( *(_DWORD *)(v75 + 12) % (unsigned int)dword_27FA7B8 == v70 )
  v76 = v71 == 0;
  if ( v71 )
    v71 = *(_DWORD *)v71;
    v76 = v71 == 0;
  if ( v76 )
LABEL_147:
    v77 = operator new(0x10u);
    *v77 = 0;
    v77[1] = 22;
    v77[2] = &unk_28898CC;
    v71 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v70,
            0x16u,
            (int)v77);
  v78 = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)(v71 + 8));
  v79 = operator new(4u);
  LODWORD(v80) = sub_16A40E4;
  *v79 = v1;
  HIDWORD(v80) = sub_16A40B8;
  v112 = v79;
  v113 = v80;
  ContainerModel::registerPlayerNotificationCallback(v78, (int)&v112);
  if ( (_DWORD)v113 )
    ((void (*)(void))v113)();
  v81 = (BlockSource *)Entity::getRegion(*((Entity **)v1 + 1));
  v82 = BlockSource::getBlockEntity(v81, (FurnaceContainerManagerModel *)((char *)v1 + 68));
  v83 = (FurnaceBlockEntity *)v82;
  if ( v82 && BlockEntity::isType(v82, 1) == 1 )
    v84 = *((_DWORD *)v1 + 1);
    v85 = *(void (__fastcall **)(int, FurnaceContainerManagerModel *, _DWORD, int))(*(_DWORD *)v84 + 1460);
    v86 = FurnaceBlockEntity::getTickCount(v83);
    v85(v84, v1, 0, v86);
    v87 = *((_DWORD *)v1 + 1);
    v88 = *(void (__fastcall **)(int, FurnaceContainerManagerModel *, signed int, int))(*(_DWORD *)v87 + 1460);
    v89 = FurnaceBlockEntity::getLitTime(v83);
    v88(v87, v1, 1, v89);
    v90 = *((_DWORD *)v1 + 1);
    v91 = *(void (__fastcall **)(int, FurnaceContainerManagerModel *, signed int, int))(*(_DWORD *)v90 + 1460);
    v92 = FurnaceBlockEntity::getLitDuration(v83);
    v91(v90, v1, 2, v92);
    if ( *(_DWORD *)FurnaceBlockEntity::getLastFuelSource(v83) )
      v93 = FurnaceBlockEntity::getLastFuelSource(v83);
      v94 = *((_DWORD *)v1 + 1);
      v95 = (ItemInstance *)v93;
      v96 = *(void (__fastcall **)(int, FurnaceContainerManagerModel *, signed int, signed int))(*(_DWORD *)v94 + 1460);
      v97 = ItemInstance::getId((ItemInstance *)v93);
      v96(v94, v1, 3, v97);
      v98 = *((_DWORD *)v1 + 1);
      v99 = *(void (__fastcall **)(int, FurnaceContainerManagerModel *, signed int, int))(*(_DWORD *)v98 + 1460);
      v100 = ItemInstance::getAuxValue(v95);
      v99(v98, v1, 4, v100);
      (*(void (**)(void))(**((_DWORD **)v1 + 1) + 1460))();
    v101 = *(_QWORD *)v1 >> 32;
    v102 = *(void (__fastcall **)(int, FurnaceContainerManagerModel *, int *))(*(_DWORD *)v101 + 1472);
    (*(void (__fastcall **)(int *, FurnaceContainerManagerModel *))(*(_QWORD *)v1 + 24))(&v110, v1);
    v102(v101, v1, &v110);
    v103 = v111;
    v104 = v110;
    if ( v110 != v111 )
        v105 = *(void **)(v104 + 52);
        if ( v105 )
          operator delete(v105);
        v106 = *(void **)(v104 + 36);
        if ( v106 )
          operator delete(v106);
        v107 = *(_DWORD *)(v104 + 8);
        if ( v107 )
          (*(void (**)(void))(*(_DWORD *)v107 + 4))();
        *(_DWORD *)(v104 + 8) = 0;
        v104 += 72;
      while ( v103 != v104 );
      v104 = v110;
    if ( v104 )
      operator delete((void *)v104);
  v108 = (Level *)Entity::getLevel(*((Entity **)v1 + 1));
  result = (const void **)Level::isClientSide(v108);
  if ( !result )
    result = FurnaceContainerManagerModel::_updateResultSlotInfo(v1);
  return result;
}
