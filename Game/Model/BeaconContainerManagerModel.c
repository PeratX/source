

BlockEntity *__fastcall BeaconContainerManagerModel::confirmTransaction(BeaconContainerManagerModel *this)
{
  BeaconContainerManagerModel *v1; // r4@1
  BlockEntity *result; // r0@1
  BeaconBlockEntity *v3; // r5@3
  BlockEntity *v4; // r0@5
  BlockEntity *v5; // r6@5
  int v6; // r0@7
  int v7; // r1@7
  Level *v8; // r0@8

  v1 = this;
  result = (BlockEntity *)*((_BYTE *)this + 116);
  if ( result )
  {
    result = (BlockEntity *)BeaconContainerManagerModel::_confirmPayment(v1);
    if ( result == (BlockEntity *)1 )
    {
      result = (BlockEntity *)LevelContainerManagerModel::_getBlockEntity(v1);
      v3 = result;
      if ( result )
      {
        result = *(BlockEntity **)BlockEntity::getType(result);
        if ( result == (BlockEntity *)21 )
        {
          BeaconBlockEntity::setPrimaryEffect(v3, *((_DWORD *)v1 + 27));
          BeaconBlockEntity::setSecondaryEffect(v3, *((_DWORD *)v1 + 28));
          v4 = (BlockEntity *)LevelContainerManagerModel::_getBlockEntity(v1);
          v5 = v4;
          if ( v4 && *(_DWORD *)BlockEntity::getType(v4) == 21 )
          {
            v6 = *((_DWORD *)v5 + 61);
            *((_DWORD *)v1 + 25) = v6;
            v7 = *((_DWORD *)v5 + 62);
            *((_DWORD *)v1 + 26) = v7;
            *((_DWORD *)v1 + 27) = v6;
            *((_DWORD *)v1 + 28) = v7;
            *((_BYTE *)v1 + 116) = 0;
          }
          v8 = (Level *)Entity::getLevel(*((Entity **)v1 + 1));
          result = (BlockEntity *)Level::isClientSide(v8);
          if ( result == (BlockEntity *)1 )
            result = j_j_j__ZN27BeaconContainerManagerModel24_sendBeaconPaymentPacketER17BeaconBlockEntity(v1, v3);
        }
      }
    }
  }
  return result;
}


_BOOL4 __fastcall BeaconContainerManagerModel::hasSecondarySelection(BeaconContainerManagerModel *this)
{
  return *((_DWORD *)this + 28) != 0;
}


signed int __fastcall BeaconContainerManagerModel::_confirmPayment(BeaconContainerManagerModel *this)
{
  int v1; // r6@0
  int v2; // r4@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r7@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  signed int v7; // r5@7
  bool v8; // zf@7
  int v9; // r0@10
  int v10; // r5@10
  int v11; // r0@10
  bool v12; // zf@10
  unsigned int v13; // r0@27
  unsigned int *v14; // r6@31
  unsigned int v15; // r0@33
  int v17; // [sp+0h] [bp-60h]@15
  int v18; // [sp+8h] [bp-58h]@19
  void *v19; // [sp+24h] [bp-3Ch]@17
  void *ptr; // [sp+34h] [bp-2Ch]@15

  v2 = *((_DWORD *)this + 24);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    v4 = (unsigned int *)(v2 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v3 )
          return 0;
        __dmb();
        v5 = __ldrex(v4);
        if ( v5 == v3 )
          break;
        __clrex();
        v3 = v5;
      }
      v6 = __strex(v3 + 1, v4);
      v3 = v5;
    }
    while ( v6 );
    __dmb();
    v7 = 0;
    v8 = *v4 == 0;
    if ( *v4 )
      v1 = *((_DWORD *)this + 23);
      v8 = v1 == 0;
    if ( !v8 )
      v9 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v1 + 32))(v1, 0);
      v10 = v9;
      v11 = *(_BYTE *)(v9 + 15);
      v12 = v11 == 0;
      if ( v11 )
        v12 = *(_DWORD *)v10 == 0;
      if ( v12 || ItemInstance::isNull((ItemInstance *)v10) || !*(_BYTE *)(v10 + 14) )
        v7 = 0;
      else
        ItemInstance::ItemInstance((ItemInstance *)&v17, v10);
        ItemInstance::remove((ItemInstance *)&v17, 1);
        (*(void (__fastcall **)(int, _DWORD, int *))(*(_DWORD *)v1 + 40))(v1, 0, &v17);
        if ( ptr )
          operator delete(ptr);
        if ( v19 )
          operator delete(v19);
        if ( v18 )
          (*(void (**)(void))(*(_DWORD *)v18 + 4))();
        v7 = 1;
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v4);
      while ( __strex(v13 - 1, v4) );
    else
      v13 = (*v4)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  else
  return v7;
}


int __fastcall BeaconContainerManagerModel::setSlot(BeaconContainerManagerModel *this, int a2, const ItemInstance *a3)
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
  v3 = 5u % dword_27FA038;
  v4 = (unsigned __int64 *)((char *)this + 40);
  v5 = *(_DWORD *)(dword_27FA034 + 4 * (5u % dword_27FA038));
  if ( !v5 )
    goto LABEL_13;
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  while ( 1 )
  {
    v8 = v7 == 5;
    if ( v7 == 5 )
      v8 = *(_DWORD *)(v6 + 4) == 5;
    if ( v8 )
      break;
    v9 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 )
    {
      v7 = *(_DWORD *)(v9 + 12);
      v5 = v6;
      v6 = *(_DWORD *)v6;
      if ( *(_DWORD *)(v9 + 12) % (unsigned int)dword_27FA038 == v3 )
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
    v11[1] = 5;
    v11[2] = &unk_28898CC;
    v5 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27FA034,
           v3,
           5u,
           (int)v11);
  v12 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          v4,
          (int **)(v5 + 8));
  v13 = (*(int (**)(void))(**(_DWORD **)v12 + 32))();
  ItemInstance::ItemInstance((ItemInstance *)&v25, v13);
  v14 = 5u % dword_27FA038;
  v15 = *(_DWORD *)(dword_27FA034 + 4 * (5u % dword_27FA038));
  if ( !v15 )
    goto LABEL_26;
  v16 = *(_DWORD *)v15;
  v17 = *(_DWORD *)(*(_DWORD *)v15 + 12);
    v18 = v17 == 5;
    if ( v17 == 5 )
      v18 = *(_DWORD *)(v16 + 4) == 5;
    if ( v18 )
    v19 = *(_DWORD *)v16;
    if ( *(_DWORD *)v16 )
      v17 = *(_DWORD *)(v19 + 12);
      v15 = v16;
      v16 = *(_DWORD *)v16;
      if ( *(_DWORD *)(v19 + 12) % (unsigned int)dword_27FA038 == v14 )
  v20 = v15 == 0;
  if ( v15 )
    v15 = *(_DWORD *)v15;
    v20 = v15 == 0;
  if ( v20 )
LABEL_26:
    v21 = operator new(0x10u);
    *v21 = 0;
    v21[1] = 5;
    v21[2] = &unk_28898CC;
    v15 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27FA034,
            v14,
            5u,
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


BlockEntity *__fastcall BeaconContainerManagerModel::init(BeaconContainerManagerModel *this)
{
  BeaconContainerManagerModel *v1; // r8@1
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
  BlockEntity *result; // r0@63
  Entity *v31; // r5@65
  char *v32; // r0@65
  unsigned int *v33; // r0@66
  unsigned int v34; // r1@68
  int v35; // r5@71
  unsigned int *v36; // r1@72
  unsigned int v37; // r0@74
  unsigned int *v38; // r4@78
  unsigned int v39; // r0@80
  int v40; // r4@85
  unsigned int *v41; // r0@86
  unsigned int v42; // r1@88
  int v43; // r0@91
  unsigned int *v44; // r2@92
  unsigned int v45; // r1@94
  BlockEntity *v46; // r5@99
  int v47; // r0@101
  int v48; // r1@101
  int v49; // r4@102
  unsigned int *v50; // r1@103
  unsigned int *v51; // r5@109
  int v52; // [sp+10h] [bp-78h]@65
  int v53; // [sp+14h] [bp-74h]@65
  int v54; // [sp+18h] [bp-70h]@65
  int v55; // [sp+1Ch] [bp-6Ch]@65
  int v56; // [sp+20h] [bp-68h]@65
  int v57; // [sp+24h] [bp-64h]@65
  int v58; // [sp+28h] [bp-60h]@65
  int v59; // [sp+2Ch] [bp-5Ch]@65
  _DWORD *v60; // [sp+30h] [bp-58h]@31
  int v61; // [sp+34h] [bp-54h]@31
  int v62; // [sp+38h] [bp-50h]@15
  int v63; // [sp+3Ch] [bp-4Ch]@15
  int v64; // [sp+40h] [bp-48h]@15
  char v65; // [sp+44h] [bp-44h]@15
  int v66; // [sp+48h] [bp-40h]@15
  int v67; // [sp+4Ch] [bp-3Ch]@1
  int v68; // [sp+50h] [bp-38h]@1
  int v69; // [sp+54h] [bp-34h]@1
  char v70; // [sp+58h] [bp-30h]@1
  int v71; // [sp+5Ch] [bp-2Ch]@1
  void *v72; // [sp+60h] [bp-28h]@29
  __int64 v73; // [sp+68h] [bp-20h]@29

  v1 = this;
  *((_BYTE *)this + 116) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  (*(void (**)(void))(*(_DWORD *)this + 20))();
  v69 = 24;
  v68 = 9;
  v2 = *((_DWORD *)v1 + 1);
  v67 = 9;
  ContainerFactory::createModel<InventoryContainerModel,ContainerEnumName,int,Player &,int>(
    (int)&v70,
    (unsigned int *)&v69,
    (unsigned int *)&v68,
    v2,
    &v67);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v70);
  v3 = v71;
  if ( v71 )
  {
    v4 = (unsigned int *)(v71 + 4);
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
  v64 = 26;
  v63 = 27;
  v8 = *((_DWORD *)v1 + 1);
  v62 = 18;
    (int)&v65,
    (unsigned int *)&v64,
    (unsigned int *)&v63,
    v8,
    &v62);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v65);
  v9 = v66;
  if ( v66 )
    v10 = (unsigned int *)(v66 + 4);
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
  LODWORD(v17) = sub_1697E80;
  v72 = v16;
  HIDWORD(v17) = sub_1697E7A;
  v73 = v17;
  FilteredInventoryContainerModel::FilteredInventoryContainerModel((int)v15, 9u, 0x24u, v14, 9, (int)&v72);
  if ( (_DWORD)v73 )
    ((void (*)(void))v73)();
  v18 = operator new(0x14u);
  *((_DWORD *)v18 + 1) = 1;
  v19 = (unsigned int *)((char *)v18 + 4);
  *((_DWORD *)v18 + 2) = 1;
  v20 = (unsigned int *)((char *)v18 + 8);
  *(_DWORD *)v18 = &off_26ECFB8;
  v21 = *v15;
  *((_DWORD *)v18 + 4) = v15;
  (*(void (__fastcall **)(_DWORD *))(v21 + 12))(v15);
  v60 = v15;
  v61 = (int)v18;
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
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v60);
  v25 = v61;
  if ( v61 )
    v26 = (unsigned int *)(v61 + 4);
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
  result = (BlockEntity *)LevelContainerManagerModel::_getBlockEntity(v1);
  if ( result )
    result = *(BlockEntity **)BlockEntity::getType(result);
    if ( result == (BlockEntity *)21 )
      v57 = 5;
      v56 = 1;
      v31 = (Entity *)*((_DWORD *)v1 + 1);
      v55 = 0;
      v54 = 21;
      v32 = LevelContainerManagerModel::getBlockPos(v1);
      ContainerFactory::createModel<LevelContainerModel,ContainerEnumName,int,Player &,int,BlockEntityType,BlockPos const&>(
        (int)&v58,
        (unsigned int *)&v57,
        (unsigned int *)&v56,
        v31,
        &v55,
        &v54,
        (int)v32);
      v52 = v58;
      v53 = v59;
      if ( v59 )
        v33 = (unsigned int *)(v59 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v34 = __ldrex(v33);
          while ( __strex(v34 + 1, v33) );
        }
        else
          ++*v33;
      ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v52);
      v35 = v53;
      if ( v53 )
        v36 = (unsigned int *)(v53 + 4);
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 == 1 )
          v38 = (unsigned int *)(v35 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 8))(v35);
          if ( &pthread_create )
          {
            __dmb();
            do
              v39 = __ldrex(v38);
            while ( __strex(v39 - 1, v38) );
          }
          else
            v39 = (*v38)--;
          if ( v39 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 12))(v35);
      *((_DWORD *)v1 + 23) = v58;
      v40 = v59;
        v41 = (unsigned int *)(v59 + 8);
            v42 = __ldrex(v41);
          while ( __strex(v42 + 1, v41) );
          ++*v41;
      v43 = *((_DWORD *)v1 + 24);
      if ( v43 )
        v44 = (unsigned int *)(v43 + 8);
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
          v45 = (*v44)--;
        if ( v45 == 1 )
          (*(void (**)(void))(*(_DWORD *)v43 + 12))();
      *((_DWORD *)v1 + 24) = v40;
      result = (BlockEntity *)LevelContainerManagerModel::_getBlockEntity(v1);
      v46 = result;
      if ( result )
        result = *(BlockEntity **)BlockEntity::getType(result);
        if ( result == (BlockEntity *)21 )
          v47 = *((_DWORD *)v46 + 61);
          *((_DWORD *)v1 + 25) = v47;
          v48 = *((_DWORD *)v46 + 62);
          *((_DWORD *)v1 + 26) = v48;
          *((_DWORD *)v1 + 27) = v47;
          result = 0;
          *((_DWORD *)v1 + 28) = v48;
          *((_BYTE *)v1 + 116) = 0;
      v49 = v59;
        v50 = (unsigned int *)(v59 + 4);
            result = (BlockEntity *)__ldrex(v50);
          while ( __strex((unsigned int)result - 1, v50) );
          result = (BlockEntity *)(*v50)--;
        if ( result == (BlockEntity *)1 )
          v51 = (unsigned int *)(v49 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v49 + 8))(v49);
              result = (BlockEntity *)__ldrex(v51);
            while ( __strex((unsigned int)result - 1, v51) );
            result = (BlockEntity *)(*v51)--;
          if ( result == (BlockEntity *)1 )
            result = (BlockEntity *)(*(int (__fastcall **)(int))(*(_DWORD *)v49 + 12))(v49);
  return result;
}


void __fastcall BeaconContainerManagerModel::~BeaconContainerManagerModel(BeaconContainerManagerModel *this)
{
  BeaconContainerManagerModel *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26ECFF0;
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


void __fastcall BeaconContainerManagerModel::getEffectHoverName(BeaconContainerManagerModel *this, int a2, int a3, int a4)
{
  int v4; // r6@1
  int *v5; // r8@1
  int v6; // r5@1
  int v7; // r7@1
  BlockEntity *v8; // r0@1
  int v9; // r1@3
  __int64 v10; // kr00_8@3
  MobEffect *v11; // r7@4
  MobEffect *v12; // r0@8
  char *v13; // r0@8
  void *v14; // r0@8
  MobEffect *v15; // r0@9
  bool v16; // zf@9
  const void **v17; // r0@13
  char *v18; // r0@13
  void *v19; // r0@14
  void *v20; // r0@15
  unsigned int *v21; // r2@16
  signed int v22; // r1@18
  unsigned int *v23; // r2@22
  signed int v24; // r1@24
  unsigned int *v25; // r2@26
  signed int v26; // r1@28
  unsigned int *v27; // r2@30
  signed int v28; // r1@32
  int v29; // [sp+4h] [bp-2Ch]@13
  int v30; // [sp+8h] [bp-28h]@13
  char *v31; // [sp+Ch] [bp-24h]@13
  int v32; // [sp+10h] [bp-20h]@8

  v4 = a2;
  v5 = (int *)this;
  v6 = a4;
  v7 = a3;
  v8 = (BlockEntity *)LevelContainerManagerModel::_getBlockEntity((LevelContainerManagerModel *)a2);
  if ( !v8 || *(_DWORD *)BlockEntity::getType(v8) != 21 )
    goto LABEL_51;
  v10 = *(_QWORD *)BeaconBlockEntity::getEffects((BeaconBlockEntity *)0x15);
  v9 = v10;
  if ( v7 == (HIDWORD(v10) - (signed int)v10) >> 2 )
  {
    v11 = *(MobEffect **)(v4 + 108);
    goto LABEL_7;
  }
  if ( (HIDWORD(v10) - (signed int)v10) >> 2 <= v7 )
LABEL_51:
    *v5 = (int)&unk_28898CC;
    return;
  v11 = (MobEffect *)MobEffect::getId(*(MobEffect **)(v10 + 4 * v7));
LABEL_7:
  *v5 = (int)&unk_28898CC;
  if ( v11 )
    v12 = (MobEffect *)MobEffect::getById(v11, v9);
    v13 = MobEffect::getDescriptionId(v12);
    I18n::get(&v32, (int **)v13);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v5, &v32);
    v14 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
    {
      v23 = (unsigned int *)(v32 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
      }
      else
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    }
    v15 = *(MobEffect **)(v4 + 108);
    v16 = v15 == v11;
    if ( v15 == v11 )
      v16 = v6 == 1;
    if ( v16 )
      sub_21E94B4((void **)&v29, "potion.potency.1");
      I18n::get(&v30, (int **)&v29);
      v17 = sub_21E82D8((const void **)&v30, 0, (unsigned int)" ", (_BYTE *)1);
      v31 = (char *)*v17;
      *v17 = &unk_28898CC;
      sub_21E72F0((const void **)v5, (const void **)&v31);
      v18 = v31 - 12;
      if ( (int *)(v31 - 12) != &dword_28898C0 )
        v25 = (unsigned int *)(v31 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
        }
        else
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      v19 = (void *)(v30 - 12);
      if ( (int *)(v30 - 12) != &dword_28898C0 )
        v27 = (unsigned int *)(v30 - 4);
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v20 = (void *)(v29 - 12);
      if ( (int *)(v29 - 12) != &dword_28898C0 )
        v21 = (unsigned int *)(v29 - 4);
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
}


int __fastcall BeaconContainerManagerModel::getItems(BeaconContainerManagerModel *this, int a2)
{
  BeaconContainerManagerModel *v2; // r8@1
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
  v3 = 5u % dword_27FA038;
  v4 = (unsigned __int64 *)(a2 + 40);
  v5 = *(_DWORD *)(dword_27FA034 + 4 * (5u % dword_27FA038));
  if ( !v5 )
    goto LABEL_13;
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  while ( 1 )
  {
    v8 = v7 == 5;
    if ( v7 == 5 )
      v8 = *(_DWORD *)(v6 + 4) == 5;
    if ( v8 )
      break;
    v9 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 )
    {
      v7 = *(_DWORD *)(v9 + 12);
      v5 = v6;
      v6 = *(_DWORD *)v6;
      if ( *(_DWORD *)(v9 + 12) % (unsigned int)dword_27FA038 == v3 )
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
    v11[1] = 5;
    v11[2] = &unk_28898CC;
    v5 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27FA034,
           v3,
           5u,
           (int)v11);
  v12 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          v4,
          (int **)(v5 + 8));
  v13 = (unsigned __int64 *)(*(int (**)(void))(**(_DWORD **)v12 + 36))();
  return std::vector<ItemInstance,std::allocator<ItemInstance>>::vector((int)v2, v13);
}


signed int __fastcall BeaconContainerManagerModel::isTierAvailable(BeaconContainerManagerModel *this, int a2)
{
  int v2; // r4@1
  BlockEntity *v3; // r0@1
  BlockEntity *v4; // r5@1
  int v5; // r1@2
  signed int result; // r0@2

  v2 = a2;
  v3 = (BlockEntity *)LevelContainerManagerModel::_getBlockEntity(this);
  v4 = v3;
  if ( v3 )
  {
    v5 = *(_DWORD *)BlockEntity::getType(v3);
    result = 0;
    if ( v5 == 21 && *((_DWORD *)v4 + 58) >= v2 )
      result = 1;
  }
  else
  return result;
}


BlockEntity *__fastcall BeaconContainerManagerModel::_getBeaconBlockEntity(BeaconContainerManagerModel *this)
{
  BlockEntity *v1; // r0@1
  BlockEntity *v2; // r4@1
  BlockEntity *result; // r0@2

  v1 = (BlockEntity *)LevelContainerManagerModel::_getBlockEntity(this);
  v2 = v1;
  if ( v1 )
  {
    if ( *(_DWORD *)BlockEntity::getType(v1) != 21 )
      v2 = 0;
    result = v2;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall BeaconContainerManagerModel::isAnyEffectValid(BeaconContainerManagerModel *this)
{
  BeaconContainerManagerModel *v1; // r4@1
  BlockEntity *v2; // r0@1
  BeaconBlockEntity *v3; // r5@1
  signed int result; // r0@8

  v1 = this;
  v2 = (BlockEntity *)LevelContainerManagerModel::_getBlockEntity(this);
  v3 = v2;
  if ( v2 && *(_DWORD *)BlockEntity::getType(v2) == 21 )
  {
    if ( !BeaconBlockEntity::isEffectAvailable(v3, *((_DWORD *)v1 + 27)) )
      *((_DWORD *)v1 + 27) = 0;
    if ( !BeaconBlockEntity::isSecondaryAvailable(v3) )
      *((_DWORD *)v1 + 28) = 0;
    if ( *((_DWORD *)v1 + 27) )
      result = 1;
    else
      result = *((_DWORD *)v1 + 28) != 0;
  }
  else
    result = 0;
  return result;
}


BlockEntity *__fastcall BeaconContainerManagerModel::selectEffect(BeaconContainerManagerModel *this, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  BeaconContainerManagerModel *v5; // r4@1
  BlockEntity *result; // r0@1
  BeaconBlockEntity *v7; // r7@1
  __int64 v8; // kr00_8@6

  v3 = a3;
  v4 = a2;
  v5 = this;
  result = (BlockEntity *)LevelContainerManagerModel::_getBlockEntity(this);
  v7 = result;
  if ( result )
  {
    result = *(BlockEntity **)BlockEntity::getType(result);
    if ( result == (BlockEntity *)21 )
    {
      result = (BlockEntity *)BeaconBlockEntity::getMaxSelections(v7);
      if ( result )
      {
        result = (BlockEntity *)LevelContainerManagerModel::_getBlockEntity(v5);
        if ( result )
        {
          result = *(BlockEntity **)BlockEntity::getType(result);
          if ( result == (BlockEntity *)21 )
          {
            v8 = *(_QWORD *)BeaconBlockEntity::getEffects((BeaconBlockEntity *)0x15);
            if ( v4 == (HIDWORD(v8) - (signed int)v8) >> 2 )
            {
              result = (BlockEntity *)*((_DWORD *)v5 + 27);
            }
            else
              result = (BlockEntity *)((HIDWORD(v8) - (signed int)v8) >> 2);
              if ( (signed int)result <= v4 )
                return result;
              result = (BlockEntity *)MobEffect::getId(*(MobEffect **)(v8 + 4 * v4));
            if ( result )
              if ( v3 )
              {
                *((_DWORD *)v5 + 28) = result;
                result = (BlockEntity *)*((_DWORD *)v5 + 27);
              }
              else
                *((_DWORD *)v5 + 27) = result;
              *((_BYTE *)v5 + 116) = 0;
              if ( *((BlockEntity **)v5 + 25) != result
                || (result = (BlockEntity *)*((_DWORD *)v5 + 26), result != *((BlockEntity **)v5 + 28)) )
                result = (BlockEntity *)1;
                *((_BYTE *)v5 + 116) = 1;
          }
        }
      }
    }
  }
  return result;
}


int __fastcall BeaconContainerManagerModel::~BeaconContainerManagerModel(BeaconContainerManagerModel *this)
{
  BeaconContainerManagerModel *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26ECFF0;
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


BlockEntity *__fastcall BeaconContainerManagerModel::_resetSelectionState(BeaconContainerManagerModel *this)
{
  BeaconContainerManagerModel *v1; // r4@1
  BlockEntity *result; // r0@1
  BlockEntity *v3; // r5@1
  int v4; // r0@3
  int v5; // r1@3

  v1 = this;
  result = (BlockEntity *)LevelContainerManagerModel::_getBlockEntity(this);
  v3 = result;
  if ( result )
  {
    result = *(BlockEntity **)BlockEntity::getType(result);
    if ( result == (BlockEntity *)21 )
    {
      v4 = *((_DWORD *)v3 + 61);
      *((_DWORD *)v1 + 25) = v4;
      v5 = *((_DWORD *)v3 + 62);
      *((_DWORD *)v1 + 26) = v5;
      *((_DWORD *)v1 + 27) = v4;
      result = 0;
      *((_DWORD *)v1 + 28) = v5;
      *((_BYTE *)v1 + 116) = 0;
    }
  }
  return result;
}


int __fastcall BeaconContainerManagerModel::BeaconContainerManagerModel(double a1, int a2, int a3)
{
  int v3; // r4@1

  v3 = LODWORD(a1);
  LevelContainerManagerModel::LevelContainerManagerModel(a1, a2, a3, 21);
  *(_DWORD *)v3 = &off_26ECFF0;
  *(_DWORD *)(v3 + 92) = 0;
  *(_DWORD *)(v3 + 96) = 0;
  BeaconContainerManagerModel::init((BeaconContainerManagerModel *)v3);
  return v3;
}


void __fastcall BeaconContainerManagerModel::~BeaconContainerManagerModel(BeaconContainerManagerModel *this)
{
  BeaconContainerManagerModel::~BeaconContainerManagerModel(this);
}


signed int __fastcall BeaconContainerManagerModel::isSelected(BeaconContainerManagerModel *this, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  BeaconContainerManagerModel *v5; // r4@1
  BlockEntity *v6; // r0@1
  __int64 v7; // kr00_8@3
  int v8; // r6@4
  BlockEntity *v9; // r0@8
  BeaconBlockEntity *v10; // r7@8
  signed int v11; // r1@11
  signed int result; // r0@11
  int v13; // r1@12
  signed int v14; // r1@14

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = (BlockEntity *)LevelContainerManagerModel::_getBlockEntity(this);
  if ( !v6 || *(_DWORD *)BlockEntity::getType(v6) != 21 )
    return 0;
  v7 = *(_QWORD *)BeaconBlockEntity::getEffects((BeaconBlockEntity *)0x15);
  if ( v4 == (HIDWORD(v7) - (signed int)v7) >> 2 )
  {
    v8 = *((_DWORD *)v5 + 27);
  }
  else
    if ( (HIDWORD(v7) - (signed int)v7) >> 2 <= v4 )
      return 0;
    v8 = MobEffect::getId(*(MobEffect **)(v7 + 4 * v4));
  if ( !v8 )
  v9 = (BlockEntity *)LevelContainerManagerModel::_getBlockEntity(v5);
  v10 = v9;
  if ( !v9 || *(_DWORD *)BlockEntity::getType(v9) != 21 )
  if ( v3 )
    v11 = BeaconBlockEntity::isSecondaryAvailable(v10);
    result = 0;
    if ( v11 != 1 )
      return result;
    v13 = *((_DWORD *)v5 + 28);
    v14 = BeaconBlockEntity::isEffectAvailable(v10, v8);
    if ( v14 != 1 )
    v13 = *((_DWORD *)v5 + 27);
  if ( v13 == v8 )
    result = 1;
  return result;
}


signed int __fastcall BeaconContainerManagerModel::isSecondaryEffect(BeaconContainerManagerModel *this, int a2)
{
  int v2; // r5@1
  BeaconContainerManagerModel *v3; // r4@1
  BlockEntity *v4; // r0@1
  __int64 v5; // kr00_8@3
  int v6; // r1@4
  signed int result; // r0@7

  v2 = a2;
  v3 = this;
  v4 = (BlockEntity *)LevelContainerManagerModel::_getBlockEntity(this);
  if ( !v4 || *(_DWORD *)BlockEntity::getType(v4) != 21 )
    return 0;
  v5 = *(_QWORD *)BeaconBlockEntity::getEffects((BeaconBlockEntity *)0x15);
  if ( v2 == (HIDWORD(v5) - (signed int)v5) >> 2 )
  {
    v6 = *((_DWORD *)v3 + 27);
    goto LABEL_7;
  }
  if ( (HIDWORD(v5) - (signed int)v5) >> 2 <= v2 )
  v6 = MobEffect::getId(*(MobEffect **)(v5 + 4 * v2));
LABEL_7:
  result = 0;
  if ( v6 )
    if ( *((_DWORD *)v3 + 27) == v6 )
      result = 1;
  return result;
}


signed int __fastcall BeaconContainerManagerModel::isActive(BeaconContainerManagerModel *this)
{
  BlockEntity *v1; // r0@1
  BeaconBlockEntity *v2; // r4@1
  signed int result; // r0@3

  v1 = (BlockEntity *)LevelContainerManagerModel::_getBlockEntity(this);
  v2 = v1;
  if ( v1 && *(_DWORD *)BlockEntity::getType(v1) == 21 )
    result = BeaconBlockEntity::isActive(v2);
  else
    result = 0;
  return result;
}


_BOOL4 __fastcall BeaconContainerManagerModel::hasPrimarySelection(BeaconContainerManagerModel *this)
{
  return *((_DWORD *)this + 27) != 0;
}


signed int __fastcall BeaconContainerManagerModel::isTierSelected(BeaconContainerManagerModel *this, int a2)
{
  int v2; // r4@1
  BlockEntity *v3; // r0@1
  BlockEntity *v4; // r5@1
  signed int result; // r0@4

  v2 = a2;
  v3 = (BlockEntity *)LevelContainerManagerModel::_getBlockEntity(this);
  v4 = v3;
  if ( v3 && *(_DWORD *)BlockEntity::getType(v3) == 21 )
  {
    if ( *((_DWORD *)v4 + 63) == v2 )
    {
      result = 1;
    }
    else
      result = 0;
      if ( *((_DWORD *)v4 + 64) == v2 )
        result = 1;
  }
  else
    result = 0;
  return result;
}


CompoundTag *__fastcall BeaconContainerManagerModel::_sendBeaconPaymentPacket(BeaconContainerManagerModel *this, BeaconBlockEntity *a2)
{
  BeaconBlockEntity *v2; // r4@1
  BeaconContainerManagerModel *v3; // r5@1
  char *v4; // r6@1
  int v5; // r1@1
  int v6; // r2@1
  Level *v7; // r0@1
  int v8; // r0@1
  int v10; // [sp+0h] [bp-68h]@1
  void **v11; // [sp+1Ch] [bp-4Ch]@1
  signed int v12; // [sp+20h] [bp-48h]@1
  signed int v13; // [sp+24h] [bp-44h]@1
  char v14; // [sp+28h] [bp-40h]@1
  int v15; // [sp+2Ch] [bp-3Ch]@1
  int v16; // [sp+30h] [bp-38h]@1
  int v17; // [sp+34h] [bp-34h]@1
  int v18; // [sp+38h] [bp-30h]@1

  v2 = a2;
  v3 = this;
  v4 = BlockEntity::getPosition(a2);
  BeaconBlockEntity::getBeaconData((BeaconBlockEntity *)&v10, v2);
  v12 = 2;
  v13 = 1;
  v14 = 0;
  v11 = &off_26E97EC;
  v5 = *((_DWORD *)v4 + 1);
  v6 = *((_DWORD *)v4 + 2);
  v15 = *(_DWORD *)v4;
  v16 = v5;
  v17 = v6;
  CompoundTag::CompoundTag((int)&v18, (int)&v10);
  CompoundTag::~CompoundTag((CompoundTag *)&v10);
  v7 = (Level *)Entity::getLevel(*((Entity **)v3 + 1));
  v8 = Level::getPacketSender(v7);
  (*(void (**)(void))(*(_DWORD *)v8 + 8))();
  return CompoundTag::~CompoundTag((CompoundTag *)&v18);
}


void __fastcall BeaconContainerManagerModel::getEffectHoverName(BeaconContainerManagerModel *this, int a2, int a3, int a4)
{
  BeaconContainerManagerModel::getEffectHoverName(this, a2, a3, a4);
}


int __fastcall BeaconContainerManagerModel::getEffectId(BeaconContainerManagerModel *this, int a2)
{
  int v2; // r4@1
  BeaconContainerManagerModel *v3; // r5@1
  BlockEntity *v4; // r0@1
  __int64 v5; // kr00_8@3
  int result; // r0@4

  v2 = a2;
  v3 = this;
  v4 = (BlockEntity *)LevelContainerManagerModel::_getBlockEntity(this);
  if ( !v4 || *(_DWORD *)BlockEntity::getType(v4) != 21 )
    goto LABEL_10;
  v5 = *(_QWORD *)BeaconBlockEntity::getEffects((BeaconBlockEntity *)0x15);
  if ( v2 == (HIDWORD(v5) - (signed int)v5) >> 2 )
    return *((_DWORD *)v3 + 27);
  if ( (HIDWORD(v5) - (signed int)v5) >> 2 > v2 )
    result = j_j_j__ZNK9MobEffect5getIdEv_0(*(MobEffect **)(v5 + 4 * v2));
  else
LABEL_10:
    result = 0;
  return result;
}


signed int __fastcall BeaconContainerManagerModel::isPaymentAvailable(BeaconContainerManagerModel *this)
{
  int v1; // r4@1
  unsigned int v2; // r1@2
  unsigned int *v3; // r6@2
  unsigned int v4; // r2@5
  unsigned int v5; // r3@6
  signed int v6; // r5@7
  bool v7; // zf@7
  BeaconBlockEntity *v8; // r0@10
  const ItemInstance *v9; // r1@10
  unsigned int v10; // r0@13
  unsigned int *v12; // r6@18
  unsigned int v13; // r0@20

  v1 = *((_DWORD *)this + 24);
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
            this = (BeaconContainerManagerModel *)*((_DWORD *)this + 23);
            v7 = this == 0;
          }
          if ( !v7 )
            v8 = (BeaconBlockEntity *)(*(int (**)(void))(*(_DWORD *)this + 32))();
            v6 = BeaconBlockEntity::isPaymentItem(v8, v9);
          if ( &pthread_create )
            __dmb();
            do
              v10 = __ldrex(v3);
            while ( __strex(v10 - 1, v3) );
          else
            v10 = (*v3)--;
          if ( v10 == 1 )
            v12 = (unsigned int *)(v1 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
            if ( &pthread_create )
            {
              __dmb();
              do
                v13 = __ldrex(v12);
              while ( __strex(v13 - 1, v12) );
            }
            else
              v13 = (*v12)--;
            if ( v13 == 1 )
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


int __fastcall BeaconContainerManagerModel::getSlot(BeaconContainerManagerModel *this, int a2)
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

  v2 = 5u % dword_27FA038;
  v3 = (unsigned __int64 *)((char *)this + 40);
  v4 = *(_DWORD *)(dword_27FA034 + 4 * (5u % dword_27FA038));
  if ( !v4 )
    goto LABEL_13;
  v5 = *(_DWORD *)v4;
  v6 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  while ( 1 )
  {
    v7 = v6 == 5;
    if ( v6 == 5 )
      v7 = *(_DWORD *)(v5 + 4) == 5;
    if ( v7 )
      break;
    v8 = *(_DWORD *)v5;
    if ( *(_DWORD *)v5 )
    {
      v6 = *(_DWORD *)(v8 + 12);
      v4 = v5;
      v5 = *(_DWORD *)v5;
      if ( *(_DWORD *)(v8 + 12) % (unsigned int)dword_27FA038 == v2 )
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
    v10[1] = 5;
    v10[2] = &unk_28898CC;
    v4 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27FA034,
           v2,
           5u,
           (int)v10);
  v11 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          v3,
          (int **)(v4 + 8));
  return (*(int (**)(void))(**(_DWORD **)v11 + 32))();
}
