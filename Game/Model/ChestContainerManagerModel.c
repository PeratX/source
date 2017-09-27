

void __fastcall ChestContainerManagerModel::~ChestContainerManagerModel(ChestContainerManagerModel *this)
{
  ChestContainerManagerModel::~ChestContainerManagerModel(this);
}


int __fastcall ChestContainerManagerModel::ChestContainerManagerModel(double a1, int a2, int a3, int a4)
{
  int v4; // r4@1

  v4 = LODWORD(a1);
  LevelContainerManagerModel::LevelContainerManagerModel(a1, a2, a3, a4);
  *(_DWORD *)v4 = &off_26ED084;
  *(_DWORD *)(v4 + 92) = a4;
  ContainerManagerModel::setContainerType(v4, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 44))(v4);
  return v4;
}


void __fastcall ChestContainerManagerModel::~ChestContainerManagerModel(ChestContainerManagerModel *this)
{
  ChestContainerManagerModel *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@2

  v1 = this;
  *(_DWORD *)this = &off_26ED084;
  v2 = LevelContainerManagerModel::_getContainer(this);
  if ( v2 )
  {
    v3 = *((_DWORD *)v1 + 1);
    (*(void (**)(void))(*(_DWORD *)v2 + 56))();
  }
  LevelContainerManagerModel::~LevelContainerManagerModel(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall ChestContainerManagerModel::fireFullCobbleStoneEvent(ChestContainerManagerModel *this)
{
  int v1; // r0@1

  v1 = ContainerManagerModel::getPlayer(this);
  return j_j_j__ZN17MinecraftEventing25fireEventAwardAchievementEP6PlayerNS_14AchievementIdsE_0(v1, 7);
}


int __fastcall ChestContainerManagerModel::~ChestContainerManagerModel(ChestContainerManagerModel *this)
{
  ChestContainerManagerModel *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@2

  v1 = this;
  *(_DWORD *)this = &off_26ED084;
  v2 = LevelContainerManagerModel::_getContainer(this);
  if ( v2 )
  {
    v3 = *((_DWORD *)v1 + 1);
    (*(void (**)(void))(*(_DWORD *)v2 + 56))();
  }
  return j_j_j__ZN26LevelContainerManagerModelD2Ev(v1);
}


int __fastcall ChestContainerManagerModel::fireItemAcquiredEvent(ChestContainerManagerModel *this, const ItemInstance *a2, int a3)
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
           3);
}


signed int __fastcall ChestContainerManagerModel::isValid(ChestContainerManagerModel *this, float a2)
{
  ChestContainerManagerModel *v2; // r5@1
  int v3; // r0@2
  int v4; // r8@3
  int v5; // r11@3
  unsigned __int64 *v6; // r10@3
  int v7; // r0@3
  int v8; // r6@4
  int v9; // r4@4
  bool v10; // zf@5
  int v11; // r5@8
  signed int result; // r0@11
  bool v13; // zf@12
  _DWORD *v14; // r0@16
  int v15; // r0@17
  int v16; // r1@17

  v2 = this;
  if ( LevelContainerManagerModel::isValid(this, a2) == 1 && (v3 = LevelContainerManagerModel::_getContainer(v2)) != 0 )
  {
    v4 = (*(int (**)(void))(*(_DWORD *)v3 + 44))();
    v5 = 4u % dword_27FA218;
    v6 = (unsigned __int64 *)((char *)v2 + 40);
    v7 = *(_DWORD *)(dword_27FA214 + 4 * (4u % dword_27FA218));
    if ( !v7 )
      goto LABEL_16;
    v8 = *(_DWORD *)v7;
    v9 = *(_DWORD *)(*(_DWORD *)v7 + 12);
    while ( 1 )
    {
      v10 = v9 == 4;
      if ( v9 == 4 )
        v10 = *(_DWORD *)(v8 + 4) == 4;
      if ( v10 )
        break;
      v11 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 )
      {
        v9 = *(_DWORD *)(v11 + 12);
        v7 = v8;
        v8 = *(_DWORD *)v8;
        if ( *(_DWORD *)(v11 + 12) % (unsigned int)dword_27FA218 == v5 )
          continue;
      }
    }
    v13 = v7 == 0;
    if ( v7 )
      v7 = *(_DWORD *)v7;
      v13 = v7 == 0;
    if ( v13 )
LABEL_16:
      v14 = operator new(0x10u);
      *v14 = 0;
      v14[1] = 4;
      v14[2] = &unk_28898CC;
      v7 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27FA214,
             v5,
             4u,
             (int)v14);
    v15 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            v6,
            (int **)(v7 + 8));
    v16 = (*(int (**)(void))(**(_DWORD **)v15 + 20))();
    result = 0;
    if ( v4 == v16 )
      result = 1;
  }
  else
  return result;
}


int __fastcall ChestContainerManagerModel::ChestContainerManagerModel(double a1, int a2, int a3, __int64 a4)
{
  int v4; // r4@1

  v4 = LODWORD(a1);
  LevelContainerManagerModel::LevelContainerManagerModel(a1, a2, SHIDWORD(a4), a4);
  *(_DWORD *)v4 = &off_26ED084;
  ContainerManagerModel::setContainerType(v4, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 44))(v4);
  return v4;
}


void __fastcall ChestContainerManagerModel::init(ChestContainerManagerModel *this)
{
  ChestContainerManagerModel *v1; // r4@1
  int v2; // r3@1
  int v3; // r5@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r0@4
  unsigned int *v6; // r6@8
  unsigned int v7; // r0@10
  int v8; // r3@15
  int v9; // r5@15
  unsigned int *v10; // r1@16
  unsigned int v11; // r0@18
  unsigned int *v12; // r6@22
  unsigned int v13; // r0@24
  int v14; // r3@29
  int v15; // r5@29
  unsigned int *v16; // r1@30
  unsigned int v17; // r0@32
  unsigned int *v18; // r6@36
  unsigned int v19; // r0@38
  int v20; // r0@43
  signed int v21; // r1@44
  Entity *v22; // r5@46
  int v23; // r5@47
  unsigned int *v24; // r1@48
  unsigned int v25; // r0@50
  char *v26; // r0@52
  unsigned int *v27; // r1@53
  unsigned int v28; // r0@55
  unsigned int *v29; // r6@59
  unsigned int v30; // r0@61
  int v31; // [sp+Ch] [bp-84h]@52
  char v32; // [sp+10h] [bp-80h]@52
  int v33; // [sp+14h] [bp-7Ch]@52
  __int64 v34; // [sp+18h] [bp-78h]@47
  int v35; // [sp+24h] [bp-6Ch]@47
  char v36; // [sp+28h] [bp-68h]@47
  int v37; // [sp+2Ch] [bp-64h]@47
  int v38; // [sp+30h] [bp-60h]@46
  int v39; // [sp+34h] [bp-5Ch]@46
  int v40; // [sp+3Ch] [bp-54h]@46
  int v41; // [sp+40h] [bp-50h]@44
  int v42; // [sp+44h] [bp-4Ch]@29
  int v43; // [sp+48h] [bp-48h]@29
  int v44; // [sp+4Ch] [bp-44h]@29
  char v45; // [sp+50h] [bp-40h]@29
  int v46; // [sp+54h] [bp-3Ch]@29
  int v47; // [sp+58h] [bp-38h]@15
  int v48; // [sp+5Ch] [bp-34h]@15
  int v49; // [sp+60h] [bp-30h]@15
  char v50; // [sp+64h] [bp-2Ch]@15
  int v51; // [sp+68h] [bp-28h]@15
  int v52; // [sp+6Ch] [bp-24h]@1
  int v53; // [sp+70h] [bp-20h]@1
  int v54; // [sp+74h] [bp-1Ch]@1
  char v55; // [sp+78h] [bp-18h]@1
  int v56; // [sp+7Ch] [bp-14h]@1

  v1 = this;
  v54 = 24;
  v53 = 9;
  v2 = *((_DWORD *)this + 1);
  v52 = 9;
  ContainerFactory::createModel<InventoryContainerModel,ContainerEnumName,int,Player &,int>(
    (int)&v55,
    (unsigned int *)&v54,
    (unsigned int *)&v53,
    v2,
    &v52);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v55);
  v3 = v56;
  if ( v56 )
  {
    v4 = (unsigned int *)(v56 + 4);
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
  v49 = 26;
  v48 = 27;
  v8 = *((_DWORD *)v1 + 1);
  v47 = 18;
    (int)&v50,
    (unsigned int *)&v49,
    (unsigned int *)&v48,
    v8,
    &v47);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v50);
  v9 = v51;
  if ( v51 )
    v10 = (unsigned int *)(v51 + 4);
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
  v43 = 36;
  v44 = 9;
  v14 = *((_DWORD *)v1 + 1);
  v42 = 9;
    (int)&v45,
    (unsigned int *)&v44,
    (unsigned int *)&v43,
    v14,
    &v42);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v45);
  v15 = v46;
  if ( v46 )
    v16 = (unsigned int *)(v46 + 4);
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
  v20 = LevelContainerManagerModel::_getContainer(v1);
  if ( v20 )
    v41 = (*(int (**)(void))(*(_DWORD *)v20 + 44))();
    v21 = 4;
    if ( *((_DWORD *)v1 + 23) == 25 )
      v21 = 28;
    v40 = v21;
    LevelContainerManagerModel::getEntityUniqueID((LevelContainerManagerModel *)&v38, (int)v1);
    v22 = (Entity *)*((_DWORD *)v1 + 1);
    if ( (v38 & v39) == -1 )
      v31 = 0;
      v26 = LevelContainerManagerModel::getBlockPos(v1);
      ContainerFactory::createModel<LevelContainerModel,ContainerEnumName &,int &,Player &,int,BlockEntityType &,BlockPos const&>(
        (int)&v32,
        (unsigned int *)&v40,
        (unsigned int *)&v41,
        v22,
        &v31,
        (int *)v1 + 23,
        (int)v26);
      ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v32);
      v23 = v33;
      if ( v33 )
        v27 = (unsigned int *)(v33 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
        }
        else
          v28 = (*v27)--;
        if ( v28 == 1 )
          v29 = (unsigned int *)(v23 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
          if ( &pthread_create )
          {
            __dmb();
            do
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
LABEL_70:
            if ( v30 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
            goto LABEL_72;
          }
LABEL_69:
          v30 = (*v29)--;
          goto LABEL_70;
      v35 = 0;
      LevelContainerManagerModel::getEntityUniqueID((LevelContainerManagerModel *)&v34, (int)v1);
      ContainerFactory::createModel<LevelContainerModel,ContainerEnumName &,int &,Player &,int,EntityUniqueID>(
        (int)&v36,
        &v35,
        &v34);
      ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v36);
      v23 = v37;
      if ( v37 )
        v24 = (unsigned int *)(v37 + 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 == 1 )
            goto LABEL_70;
          goto LABEL_69;
LABEL_72:
  LevelContainerManagerModel::init(v1);
}


void __fastcall ChestContainerManagerModel::init(ChestContainerManagerModel *this)
{
  ChestContainerManagerModel::init(this);
}
