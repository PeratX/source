

void __fastcall TradeContainerManagerModel::~TradeContainerManagerModel(TradeContainerManagerModel *this)
{
  LevelContainerManagerModel *v1; // r0@1

  v1 = TradeContainerManagerModel::~TradeContainerManagerModel(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall TradeContainerManagerModel::getCurrentRecipe(TradeContainerManagerModel *this, int a2)
{
  TradeContainerManagerModel *v2; // r5@1
  int v3; // r4@1
  BlockSource *v4; // r0@1
  int v5; // r6@1
  int v6; // r5@1
  int v7; // r1@1
  Entity *v8; // r0@1
  int v9; // r0@2
  unsigned int v11; // [sp+8h] [bp-18h]@1
  unsigned int v12; // [sp+Ch] [bp-14h]@1

  v2 = this;
  v3 = a2;
  v4 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  v5 = BlockSource::getLevel(v4);
  LevelContainerManagerModel::getEntityUniqueID((LevelContainerManagerModel *)&v11, (int)v2);
  v6 = 0;
  v8 = (Entity *)Level::fetchEntity(v5, v7, v11, v12, 0);
  if ( v8 )
  {
    v9 = Entity::getTradeOffers(v8);
    if ( v9 )
      v6 = *(_DWORD *)(v9 + 4) + 232 * v3;
    else
      v6 = 0;
  }
  return v6;
}


void __fastcall TradeContainerManagerModel::~TradeContainerManagerModel(TradeContainerManagerModel *this)
{
  TradeContainerManagerModel::~TradeContainerManagerModel(this);
}


int __fastcall TradeContainerManagerModel::getRecipeListSize(TradeContainerManagerModel *this)
{
  TradeContainerManagerModel *v1; // r4@1
  BlockSource *v2; // r0@1
  int v3; // r5@1
  int v4; // r4@1
  int v5; // r1@1
  Entity *v6; // r0@1
  int v7; // r0@2
  unsigned int v9; // [sp+8h] [bp-18h]@1
  unsigned int v10; // [sp+Ch] [bp-14h]@1

  v1 = this;
  v2 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  v3 = BlockSource::getLevel(v2);
  LevelContainerManagerModel::getEntityUniqueID((LevelContainerManagerModel *)&v9, (int)v1);
  v4 = 0;
  v6 = (Entity *)Level::fetchEntity(v3, v5, v9, v10, 0);
  if ( v6 )
  {
    v7 = Entity::getTradeOffers(v6);
    if ( v7 )
      v4 = 1332920885 * ((signed int)((*(_QWORD *)(v7 + 4) >> 32) - *(_QWORD *)(v7 + 4)) >> 3);
    else
      v4 = 0;
  }
  return v4;
}


int __fastcall TradeContainerManagerModel::setCurrentRecipeIndex(int result, int a2)
{
  *(_DWORD *)(result + 92) = a2;
  return result;
}


int __fastcall TradeContainerManagerModel::getEntity(TradeContainerManagerModel *this)
{
  TradeContainerManagerModel *v1; // r4@1
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


unsigned int *__fastcall TradeContainerManagerModel::init(TradeContainerManagerModel *this)
{
  TradeContainerManagerModel *v1; // r8@1
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
  _DWORD *v16; // r0@29
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
  int v35; // r5@77
  unsigned int *v36; // r1@78
  unsigned int v37; // r0@80
  unsigned int *v38; // r4@84
  unsigned int v39; // r0@86
  unsigned int *result; // r0@91
  int v41; // r4@91
  unsigned int *v42; // r1@92
  unsigned int *v43; // r5@98
  int v44; // [sp+Ch] [bp-8Ch]@91
  int v45; // [sp+10h] [bp-88h]@91
  int v46; // [sp+14h] [bp-84h]@91
  int v47; // [sp+18h] [bp-80h]@91
  int v48; // [sp+1Ch] [bp-7Ch]@77
  int v49; // [sp+20h] [bp-78h]@77
  int v50; // [sp+24h] [bp-74h]@77
  int v51; // [sp+28h] [bp-70h]@77
  int v52; // [sp+2Ch] [bp-6Ch]@63
  int v53; // [sp+30h] [bp-68h]@63
  int v54; // [sp+34h] [bp-64h]@63
  int v55; // [sp+38h] [bp-60h]@63
  _DWORD *v56; // [sp+3Ch] [bp-5Ch]@31
  int v57; // [sp+40h] [bp-58h]@31
  int v58; // [sp+44h] [bp-54h]@15
  int v59; // [sp+48h] [bp-50h]@15
  int v60; // [sp+4Ch] [bp-4Ch]@15
  char v61; // [sp+50h] [bp-48h]@15
  int v62; // [sp+54h] [bp-44h]@15
  int v63; // [sp+58h] [bp-40h]@1
  int v64; // [sp+5Ch] [bp-3Ch]@1
  int v65; // [sp+60h] [bp-38h]@1
  char v66; // [sp+64h] [bp-34h]@1
  int v67; // [sp+68h] [bp-30h]@1
  _DWORD *v68; // [sp+6Ch] [bp-2Ch]@29
  __int64 v69; // [sp+74h] [bp-24h]@29
  char v70; // [sp+7Ch] [bp-1Ch]@63

  v1 = this;
  (*(void (**)(void))(*(_DWORD *)this + 20))();
  v65 = 24;
  v64 = 9;
  v2 = *((_DWORD *)v1 + 1);
  v63 = 9;
  ContainerFactory::createModel<InventoryContainerModel,ContainerEnumName,int,Player &,int>(
    (int)&v66,
    (unsigned int *)&v65,
    (unsigned int *)&v64,
    v2,
    &v63);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v66);
  v3 = v67;
  if ( v67 )
  {
    v4 = (unsigned int *)(v67 + 4);
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
  v60 = 26;
  v59 = 27;
  v8 = *((_DWORD *)v1 + 1);
  v58 = 18;
    (int)&v61,
    (unsigned int *)&v60,
    (unsigned int *)&v59,
    v8,
    &v58);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v61);
  v9 = v62;
  if ( v62 )
    v10 = (unsigned int *)(v62 + 4);
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
  v16 = operator new(4u);
  LODWORD(v17) = sub_16A9C36;
  *v16 = v1;
  HIDWORD(v17) = sub_16A9BCC;
  v68 = v16;
  v69 = v17;
  FilteredInventoryContainerModel::FilteredInventoryContainerModel((int)v15, 9u, 0x24u, v14, 9, (int)&v68);
  if ( (_DWORD)v69 )
    ((void (*)(void))v69)();
  v18 = operator new(0x14u);
  *((_DWORD *)v18 + 1) = 1;
  v19 = (unsigned int *)((char *)v18 + 4);
  *((_DWORD *)v18 + 2) = 1;
  v20 = (unsigned int *)((char *)v18 + 8);
  *(_DWORD *)v18 = &off_26ECFB8;
  v21 = *v15;
  *((_DWORD *)v18 + 4) = v15;
  (*(void (__fastcall **)(_DWORD *))(v21 + 12))(v15);
  v56 = v15;
  v57 = (int)v18;
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
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v56);
  v25 = v57;
  if ( v57 )
    v26 = (unsigned int *)(v57 + 4);
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
  v53 = 29;
  v52 = 1;
  std::__shared_ptr<ContainerModel,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ContainerModel>,ContainerEnumName,int>(
    (int)&v54,
    (int)&v70,
    (unsigned int *)&v53,
    (unsigned int *)&v52);
  (*(void (**)(void))(*(_DWORD *)v54 + 12))();
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v54);
  v30 = v55;
  if ( v55 )
    v31 = (unsigned int *)(v55 + 4);
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
  v49 = 30;
  v48 = 1;
    (int)&v50,
    (unsigned int *)&v49,
    (unsigned int *)&v48);
  (*(void (**)(void))(*(_DWORD *)v50 + 12))();
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v50);
  v35 = v51;
  if ( v51 )
    v36 = (unsigned int *)(v51 + 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 == 1 )
      v38 = (unsigned int *)(v35 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 8))(v35);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 12))(v35);
  v45 = 31;
  v44 = 1;
    (int)&v46,
    (unsigned int *)&v45,
    (unsigned int *)&v44);
  (*(void (**)(void))(*(_DWORD *)v46 + 12))();
  result = ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v46);
  v41 = v47;
  if ( v47 )
    v42 = (unsigned int *)(v47 + 4);
        result = (unsigned int *)__ldrex(v42);
      while ( __strex((unsigned int)result - 1, v42) );
      result = (unsigned int *)(*v42)--;
    if ( result == (unsigned int *)1 )
      v43 = (unsigned int *)(v41 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 8))(v41);
          result = (unsigned int *)__ldrex(v43);
        while ( __strex((unsigned int)result - 1, v43) );
        result = (unsigned int *)(*v43)--;
      if ( result == (unsigned int *)1 )
        result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v41 + 12))(v41);
  return result;
}


signed int __fastcall TradeContainerManagerModel::isTradeValid(TradeContainerManagerModel *this, float a2)
{
  TradeContainerManagerModel *v2; // r4@1
  signed int v3; // r5@1
  BlockSource *v4; // r0@2
  int v5; // r6@2
  int v6; // r1@2
  int v7; // r0@2
  Entity *v8; // r5@2
  Entity *v9; // r5@6
  char *v10; // r4@7
  unsigned int v12; // [sp+8h] [bp-18h]@2
  unsigned int v13; // [sp+Ch] [bp-14h]@2

  v2 = this;
  v3 = 0;
  if ( ContainerManagerModel::isValid(this, a2) == 1 )
  {
    v4 = (BlockSource *)Entity::getRegion(*((Entity **)v2 + 1));
    v5 = BlockSource::getLevel(v4);
    LevelContainerManagerModel::getEntityUniqueID((LevelContainerManagerModel *)&v12, (int)v2);
    v7 = Level::fetchEntity(v5, v6, v12, v13, 0);
    v8 = (Entity *)v7;
    if ( !v7
      || (*(int (**)(void))(*(_DWORD *)v7 + 316))() != 1
      || Entity::hasCategory((int)v8, 2) == 1 && (*(int (__fastcall **)(Entity *))(*(_DWORD *)v8 + 944))(v8) )
    {
      goto LABEL_14;
    }
    v9 = (Entity *)Entity::getTradingPlayer(v8);
    if ( !v9 )
      return 1;
    v10 = Entity::getUniqueID(*((Entity **)v2 + 1));
    if ( *(_QWORD *)v10 != *(_QWORD *)Entity::getUniqueID(v9) )
LABEL_14:
      v3 = 0;
    else
      v3 = 1;
  }
  return v3;
}


void *__fastcall TradeContainerManagerModel::getSlot(TradeContainerManagerModel *this, int a2)
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
    v9 = 0x1Fu % dword_27FACF8;
    v3 = (unsigned __int64 *)((char *)this + 40);
    v4 = *(_DWORD *)(dword_27FACF4 + 4 * (0x1Fu % dword_27FACF8));
    if ( v4 )
    {
      v10 = *(_DWORD *)v4;
      v11 = *(_DWORD *)(*(_DWORD *)v4 + 12);
      while ( 1 )
      {
        v12 = v11 == 31;
        if ( v11 == 31 )
          v12 = *(_DWORD *)(v10 + 4) == 31;
        if ( v12 )
          break;
        v13 = *(_DWORD *)v10;
        if ( *(_DWORD *)v10 )
        {
          v11 = *(_DWORD *)(v13 + 12);
          v4 = v10;
          v10 = *(_DWORD *)v10;
          if ( *(_DWORD *)(v13 + 12) % (unsigned int)dword_27FACF8 == v9 )
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
    v27[1] = 31;
    v23 = 31;
    v27[2] = &unk_28898CC;
    v24 = &dword_27FACF4;
    v25 = v9;
    goto LABEL_44;
  }
  if ( a2 == 1 )
    v14 = 0x13u % dword_27FACF8;
    v4 = *(_DWORD *)(dword_27FACF4 + 4 * (0x13u % dword_27FACF8));
      v15 = *(_DWORD *)v4;
      v16 = *(_DWORD *)(*(_DWORD *)v4 + 12);
        v17 = v16 == 19;
        if ( v16 == 19 )
          v17 = *(_DWORD *)(v15 + 4) == 19;
        if ( v17 )
        v18 = *(_DWORD *)v15;
        if ( *(_DWORD *)v15 )
          v16 = *(_DWORD *)(v18 + 12);
          v4 = v15;
          v15 = *(_DWORD *)v15;
          if ( *(_DWORD *)(v18 + 12) % (unsigned int)dword_27FACF8 == v14 )
        goto LABEL_43;
      v28 = v4 == 0;
        v28 = v4 == 0;
      if ( !v28 )
LABEL_43:
    v29 = operator new(0x10u);
    v22 = (int)v29;
    *v29 = 0;
    v29[1] = 19;
    v23 = 19;
    v29[2] = &unk_28898CC;
    v25 = v14;
  if ( a2 )
    return &ItemInstance::EMPTY_ITEM;
  v2 = 0x1Du % dword_27FACF8;
  v3 = (unsigned __int64 *)((char *)this + 40);
  v4 = *(_DWORD *)(dword_27FACF4 + 4 * (0x1Du % dword_27FACF8));
  if ( !v4 )
    goto LABEL_33;
  v5 = *(_DWORD *)v4;
  v6 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  while ( 1 )
    v7 = v6 == 29;
    if ( v6 == 29 )
      v7 = *(_DWORD *)(v5 + 4) == 29;
    if ( v7 )
      break;
    v8 = *(_DWORD *)v5;
    if ( *(_DWORD *)v5 )
      v6 = *(_DWORD *)(v8 + 12);
      v4 = v5;
      v5 = *(_DWORD *)v5;
      if ( *(_DWORD *)(v8 + 12) % (unsigned int)dword_27FACF8 == v2 )
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
    v21[1] = 29;
    v23 = 29;
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


void *__fastcall TradeContainerManagerModel::getDisplayName(TradeContainerManagerModel *this, int a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  BlockSource *v4; // r0@1
  int v5; // r6@1
  int v6; // r1@1
  Entity *v7; // r0@1
  TradeableComponent *v8; // r0@2
  int *v9; // r0@3
  void *result; // r0@3
  unsigned int v11; // [sp+8h] [bp-18h]@1
  unsigned int v12; // [sp+Ch] [bp-14h]@1

  v2 = a2;
  v3 = (int *)this;
  v4 = (BlockSource *)Entity::getRegion(*(Entity **)(a2 + 4));
  v5 = BlockSource::getLevel(v4);
  LevelContainerManagerModel::getEntityUniqueID((LevelContainerManagerModel *)&v11, v2);
  v7 = (Entity *)Level::fetchEntity(v5, v6, v11, v12, 0);
  if ( v7 && (v8 = (TradeableComponent *)Entity::getTradeableComponent(v7)) != 0 )
  {
    v9 = (int *)TradeableComponent::getDisplayName(v8);
    result = sub_21E8AF4(v3, v9);
  }
  else
    result = sub_21E94B4((void **)v3, (const char *)&unk_257BC67);
  return result;
}


int __fastcall TradeContainerManagerModel::setSlot(TradeContainerManagerModel *this, int a2, const ItemInstance *a3)
{
  TradeContainerManagerModel *v3; // r9@1
  const ItemInstance *v4; // r8@1
  int v5; // r4@1
  int v6; // r10@4
  int v7; // r0@4
  int v8; // r6@5
  int v9; // r4@5
  bool v10; // zf@6
  int v11; // r5@9
  int v12; // r10@12
  int v13; // r0@12
  int v14; // r6@13
  int v15; // r4@13
  bool v16; // zf@14
  int v17; // r5@17
  int v18; // r10@20
  int v19; // r0@20
  int v20; // r6@21
  int v21; // r4@21
  bool v22; // zf@22
  int v23; // r5@25
  bool v24; // zf@28
  _DWORD *v25; // r0@32
  unsigned __int64 *v26; // r9@33
  int v27; // r0@33
  int v28; // r0@33
  int v29; // r10@33
  int v30; // r0@33
  int v31; // r6@34
  int v32; // r4@34
  bool v33; // zf@35
  int v34; // r5@38
  bool v35; // zf@41
  _DWORD *v36; // r0@45
  unsigned __int64 *v37; // r9@46
  int v38; // r0@46
  int v39; // r0@46
  int v40; // r10@46
  int v41; // r0@46
  int v42; // r6@47
  int v43; // r4@47
  bool v44; // zf@48
  int v45; // r5@51
  bool v46; // zf@54
  _DWORD *v47; // r0@58
  unsigned __int64 *v48; // r9@59
  int v49; // r0@59
  int v50; // r0@59
  int v51; // r10@59
  int v52; // r0@59
  int v53; // r6@60
  int v54; // r4@60
  bool v55; // zf@61
  int v56; // r5@64
  bool v57; // zf@67
  _DWORD *v58; // r0@71
  _DWORD *v59; // r0@72
  bool v60; // zf@73
  _DWORD *v61; // r0@77
  _DWORD *v62; // r0@78
  bool v63; // zf@79
  _DWORD *v64; // r0@83
  _DWORD *v65; // r0@84
  int result; // r0@89
  int v67; // [sp+0h] [bp-68h]@1
  int v68; // [sp+8h] [bp-60h]@89
  void *v69; // [sp+24h] [bp-44h]@87
  void *ptr; // [sp+34h] [bp-34h]@85

  v3 = this;
  v4 = a3;
  v5 = a2;
  ItemInstance::ItemInstance((int)&v67);
  if ( v5 == 2 )
  {
    v12 = 0x1Fu % dword_27FACF8;
    v13 = *(_DWORD *)(dword_27FACF4 + 4 * (0x1Fu % dword_27FACF8));
    if ( !v13 )
      goto LABEL_45;
    v14 = *(_DWORD *)v13;
    v15 = *(_DWORD *)(*(_DWORD *)v13 + 12);
    while ( 1 )
    {
      v16 = v15 == 31;
      if ( v15 == 31 )
        v16 = *(_DWORD *)(v14 + 4) == 31;
      if ( v16 )
        break;
      v17 = *(_DWORD *)v14;
      if ( *(_DWORD *)v14 )
      {
        v15 = *(_DWORD *)(v17 + 12);
        v13 = v14;
        v14 = *(_DWORD *)v14;
        if ( *(_DWORD *)(v17 + 12) % (unsigned int)dword_27FACF8 == v12 )
          continue;
      }
    }
    v35 = v13 == 0;
    if ( v13 )
      v13 = *(_DWORD *)v13;
      v35 = v13 == 0;
    if ( v35 )
LABEL_45:
      v36 = operator new(0x10u);
      *v36 = 0;
      v36[1] = 31;
      v36[2] = &unk_28898CC;
      v13 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27FACF4,
              v12,
              0x1Fu,
              (int)v36);
    v37 = (unsigned __int64 *)((char *)v3 + 40);
    v38 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            v37,
            (int **)(v13 + 8));
    v39 = (*(int (**)(void))(**(_DWORD **)v38 + 32))();
    ItemInstance::operator=((int)&v67, v39);
    v40 = 0x1Fu % dword_27FACF8;
    v41 = *(_DWORD *)(dword_27FACF4 + 4 * (0x1Fu % dword_27FACF8));
    if ( !v41 )
      goto LABEL_77;
    v42 = *(_DWORD *)v41;
    v43 = *(_DWORD *)(*(_DWORD *)v41 + 12);
      v44 = v43 == 31;
      if ( v43 == 31 )
        v44 = *(_DWORD *)(v42 + 4) == 31;
      if ( v44 )
      v45 = *(_DWORD *)v42;
      if ( *(_DWORD *)v42 )
        v43 = *(_DWORD *)(v45 + 12);
        v41 = v42;
        v42 = *(_DWORD *)v42;
        if ( *(_DWORD *)(v45 + 12) % (unsigned int)dword_27FACF8 == v40 )
    v60 = v41 == 0;
    if ( v41 )
      v41 = *(_DWORD *)v41;
      v60 = v41 == 0;
    if ( v60 )
LABEL_77:
      v61 = operator new(0x10u);
      *v61 = 0;
      v61[1] = 31;
      v61[2] = &unk_28898CC;
      v41 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v40,
              (int)v61);
    v62 = (_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                      v37,
                      (int **)(v41 + 8));
    ContainerModel::networkUpdateItem(*v62, (const ItemInstance *)&v67, v4);
  }
  else if ( v5 == 1 )
    v18 = 0x1Eu % dword_27FACF8;
    v19 = *(_DWORD *)(dword_27FACF4 + 4 * (0x1Eu % dword_27FACF8));
    if ( !v19 )
      goto LABEL_58;
    v20 = *(_DWORD *)v19;
    v21 = *(_DWORD *)(*(_DWORD *)v19 + 12);
      v22 = v21 == 30;
      if ( v21 == 30 )
        v22 = *(_DWORD *)(v20 + 4) == 30;
      if ( v22 )
      v23 = *(_DWORD *)v20;
      if ( *(_DWORD *)v20 )
        v21 = *(_DWORD *)(v23 + 12);
        v19 = v20;
        v20 = *(_DWORD *)v20;
        if ( *(_DWORD *)(v23 + 12) % (unsigned int)dword_27FACF8 == v18 )
    v46 = v19 == 0;
    if ( v19 )
      v19 = *(_DWORD *)v19;
      v46 = v19 == 0;
    if ( v46 )
LABEL_58:
      v47 = operator new(0x10u);
      *v47 = 0;
      v47[1] = 30;
      v47[2] = &unk_28898CC;
      v19 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v18,
              0x1Eu,
              (int)v47);
    v48 = (unsigned __int64 *)((char *)v3 + 40);
    v49 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            v48,
            (int **)(v19 + 8));
    v50 = (*(int (**)(void))(**(_DWORD **)v49 + 32))();
    ItemInstance::operator=((int)&v67, v50);
    v51 = 0x1Eu % dword_27FACF8;
    v52 = *(_DWORD *)(dword_27FACF4 + 4 * (0x1Eu % dword_27FACF8));
    if ( !v52 )
      goto LABEL_83;
    v53 = *(_DWORD *)v52;
    v54 = *(_DWORD *)(*(_DWORD *)v52 + 12);
      v55 = v54 == 30;
      if ( v54 == 30 )
        v55 = *(_DWORD *)(v53 + 4) == 30;
      if ( v55 )
      v56 = *(_DWORD *)v53;
      if ( *(_DWORD *)v53 )
        v54 = *(_DWORD *)(v56 + 12);
        v52 = v53;
        v53 = *(_DWORD *)v53;
        if ( *(_DWORD *)(v56 + 12) % (unsigned int)dword_27FACF8 == v51 )
    v63 = v52 == 0;
    if ( v52 )
      v52 = *(_DWORD *)v52;
      v63 = v52 == 0;
    if ( v63 )
LABEL_83:
      v64 = operator new(0x10u);
      *v64 = 0;
      v64[1] = 30;
      v64[2] = &unk_28898CC;
      v52 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v51,
              (int)v64);
    v65 = (_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                      v48,
                      (int **)(v52 + 8));
    ContainerModel::networkUpdateItem(*v65, (const ItemInstance *)&v67, v4);
  else if ( !v5 )
    v6 = 0x1Du % dword_27FACF8;
    v7 = *(_DWORD *)(dword_27FACF4 + 4 * (0x1Du % dword_27FACF8));
    if ( !v7 )
      goto LABEL_32;
    v8 = *(_DWORD *)v7;
    v9 = *(_DWORD *)(*(_DWORD *)v7 + 12);
      v10 = v9 == 29;
      if ( v9 == 29 )
        v10 = *(_DWORD *)(v8 + 4) == 29;
      if ( v10 )
      v11 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 )
        v9 = *(_DWORD *)(v11 + 12);
        v7 = v8;
        v8 = *(_DWORD *)v8;
        if ( *(_DWORD *)(v11 + 12) % (unsigned int)dword_27FACF8 == v6 )
    v24 = v7 == 0;
    if ( v7 )
      v7 = *(_DWORD *)v7;
      v24 = v7 == 0;
    if ( v24 )
LABEL_32:
      v25 = operator new(0x10u);
      *v25 = 0;
      v25[1] = 29;
      v25[2] = &unk_28898CC;
      v7 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27FACF4,
             v6,
             0x1Du,
             (int)v25);
    v26 = (unsigned __int64 *)((char *)v3 + 40);
    v27 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            v26,
            (int **)(v7 + 8));
    v28 = (*(int (**)(void))(**(_DWORD **)v27 + 32))();
    ItemInstance::operator=((int)&v67, v28);
    v29 = 0x1Du % dword_27FACF8;
    v30 = *(_DWORD *)(dword_27FACF4 + 4 * (0x1Du % dword_27FACF8));
    if ( !v30 )
      goto LABEL_71;
    v31 = *(_DWORD *)v30;
    v32 = *(_DWORD *)(*(_DWORD *)v30 + 12);
      v33 = v32 == 29;
      if ( v32 == 29 )
        v33 = *(_DWORD *)(v31 + 4) == 29;
      if ( v33 )
      v34 = *(_DWORD *)v31;
      if ( *(_DWORD *)v31 )
        v32 = *(_DWORD *)(v34 + 12);
        v30 = v31;
        v31 = *(_DWORD *)v31;
        if ( *(_DWORD *)(v34 + 12) % (unsigned int)dword_27FACF8 == v29 )
    v57 = v30 == 0;
    if ( v30 )
      v30 = *(_DWORD *)v30;
      v57 = v30 == 0;
    if ( v57 )
LABEL_71:
      v58 = operator new(0x10u);
      *v58 = 0;
      v58[1] = 29;
      v58[2] = &unk_28898CC;
      v30 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v29,
              0x1Du,
              (int)v58);
    v59 = (_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                      v26,
                      (int **)(v30 + 8));
    ContainerModel::networkUpdateItem(*v59, (const ItemInstance *)&v67, v4);
  if ( ptr )
    operator delete(ptr);
  if ( v69 )
    operator delete(v69);
  result = v68;
  if ( v68 )
    result = (*(int (**)(void))(*(_DWORD *)v68 + 4))();
  return result;
}


LevelContainerManagerModel *__fastcall TradeContainerManagerModel::~TradeContainerManagerModel(TradeContainerManagerModel *this)
{
  LevelContainerManagerModel *v1; // r4@1
  BlockSource *v2; // r0@1
  int v3; // r5@1
  int v4; // r1@1
  Entity *v5; // r0@1
  unsigned int v7; // [sp+8h] [bp-18h]@1
  unsigned int v8; // [sp+Ch] [bp-14h]@1

  v1 = this;
  *(_DWORD *)this = &off_26ED3A4;
  v2 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  v3 = BlockSource::getLevel(v2);
  LevelContainerManagerModel::getEntityUniqueID((LevelContainerManagerModel *)&v7, (int)v1);
  v5 = (Entity *)Level::fetchEntity(v3, v4, v7, v8, 0);
  if ( v5 )
    Entity::setTradingPlayer(v5, 0);
  LevelContainerManagerModel::~LevelContainerManagerModel(v1);
  return v1;
}


int __fastcall TradeContainerManagerModel::recipeChanged(TradeContainerManagerModel *this)
{
  TradeContainerManagerModel *v1; // r9@1
  int v2; // r10@1
  int v3; // r0@1
  int v4; // r5@2
  int v5; // r7@2
  bool v6; // zf@3
  int v7; // r4@6
  bool v8; // zf@9
  _DWORD *v9; // r0@13
  int result; // r0@14
  __int64 v11; // kr00_8@15
  unsigned int *v12; // r1@16
  unsigned int v13; // r2@18
  unsigned int *v14; // r1@22
  unsigned int *v15; // r5@28

  v1 = this;
  v2 = 9u % dword_27FACF8;
  v3 = *(_DWORD *)(dword_27FACF4 + 4 * (9u % dword_27FACF8));
  if ( !v3 )
    goto LABEL_13;
  v4 = *(_DWORD *)v3;
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  while ( 1 )
  {
    v6 = v5 == 9;
    if ( v5 == 9 )
      v6 = *(_DWORD *)(v4 + 4) == 9;
    if ( v6 )
      break;
    v7 = *(_DWORD *)v4;
    if ( *(_DWORD *)v4 )
    {
      v5 = *(_DWORD *)(v7 + 12);
      v3 = v4;
      v4 = *(_DWORD *)v4;
      if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27FACF8 == v2 )
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
    v9[1] = 9;
    v9[2] = &unk_28898CC;
    v3 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27FACF4,
           v2,
           9u,
           (int)v9);
  result = std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
             (unsigned __int64 *)v1 + 5,
             (int **)(v3 + 8));
  if ( result )
    v11 = *(_QWORD *)(result + 8);
    if ( HIDWORD(v11) )
      v12 = (unsigned int *)(HIDWORD(v11) + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 + 1, v12) );
      }
      else
        ++*v12;
    result = (**(int (***)(void))v11)();
      v14 = (unsigned int *)(HIDWORD(v11) + 4);
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
        result = (*v14)--;
      if ( result == 1 )
        v15 = (unsigned int *)(HIDWORD(v11) + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v11) + 8))(HIDWORD(v11));
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
          result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v11) + 12))(HIDWORD(v11));
  return result;
}


int __fastcall TradeContainerManagerModel::TradeContainerManagerModel(double a1, int a2, __int64 *a3)
{
  int v3; // r4@1

  v3 = LODWORD(a1);
  LevelContainerManagerModel::LevelContainerManagerModel(a1, a2, (unsigned __int64)*a3 >> 32, *a3);
  *(_DWORD *)v3 = &off_26ED3A4;
  *(_DWORD *)(v3 + 92) = 0;
  TradeContainerManagerModel::init((TradeContainerManagerModel *)v3);
  return v3;
}


char *__fastcall TradeContainerManagerModel::getItems(TradeContainerManagerModel *this, int a2)
{
  TradeContainerManagerModel *v2; // r10@1
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
  v4 = 0x1Du % dword_27FACF8;
  v5 = *(_DWORD *)(dword_27FACF4 + 4 * (0x1Du % dword_27FACF8));
  if ( !v5 )
    goto LABEL_13;
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  while ( 1 )
  {
    v8 = v7 == 29;
    if ( v7 == 29 )
      v8 = *(_DWORD *)(v6 + 4) == 29;
    if ( v8 )
      break;
    v9 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 )
    {
      v7 = *(_DWORD *)(v9 + 12);
      v5 = v6;
      v6 = *(_DWORD *)v6;
      if ( *(_DWORD *)(v9 + 12) % (unsigned int)dword_27FACF8 == v4 )
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
    v11[1] = 29;
    v11[2] = &unk_28898CC;
    v5 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27FACF4,
           v4,
           0x1Du,
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
  v17 = 0x1Eu % dword_27FACF8;
  v18 = *(_DWORD *)(dword_27FACF4 + 4 * (0x1Eu % dword_27FACF8));
  if ( !v18 )
    goto LABEL_33;
  v19 = *(_DWORD *)v18;
  v20 = *(_DWORD *)(*(_DWORD *)v18 + 12);
    v21 = v20 == 30;
    if ( v20 == 30 )
      v21 = *(_DWORD *)(v19 + 4) == 30;
    if ( v21 )
    v22 = *(_DWORD *)v19;
    if ( *(_DWORD *)v19 )
      v20 = *(_DWORD *)(v22 + 12);
      v18 = v19;
      v19 = *(_DWORD *)v19;
      if ( *(_DWORD *)(v22 + 12) % (unsigned int)dword_27FACF8 == v17 )
  v23 = v18 == 0;
  if ( v18 )
    v18 = *(_DWORD *)v18;
    v23 = v18 == 0;
  if ( v23 )
LABEL_33:
    v24 = operator new(0x10u);
    *v24 = 0;
    v24[1] = 30;
    v24[2] = &unk_28898CC;
    v18 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27FACF4,
            v17,
            0x1Eu,
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
  v29 = 0x1Fu % dword_27FACF8;
  v30 = *(_DWORD *)(dword_27FACF4 + 4 * (0x1Fu % dword_27FACF8));
  if ( !v30 )
    goto LABEL_51;
  v31 = *(_DWORD *)v30;
  v32 = *(_DWORD *)(*(_DWORD *)v30 + 12);
    v33 = v32 == 31;
    if ( v32 == 31 )
      v33 = *(_DWORD *)(v31 + 4) == 31;
    if ( v33 )
    v34 = *(_DWORD *)v31;
    if ( *(_DWORD *)v31 )
      v32 = *(_DWORD *)(v34 + 12);
      v30 = v31;
      v31 = *(_DWORD *)v31;
      if ( *(_DWORD *)(v34 + 12) % (unsigned int)dword_27FACF8 == v29 )
  v35 = v30 == 0;
  if ( v30 )
    v30 = *(_DWORD *)v30;
    v35 = v30 == 0;
  if ( v35 )
LABEL_51:
    v36 = operator new(0x10u);
    *v36 = 0;
    v36[1] = 31;
    v36[2] = &unk_28898CC;
    v30 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v29,
            0x1Fu,
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
