

int __fastcall ContainerManagerModel::debitPlayerXP(ContainerManagerModel *this, int a2)
{
  ContainerManagerModel *v2; // r5@1
  int result; // r0@1

  v2 = this;
  result = Abilities::getBool(*((_DWORD *)this + 1) + 4320, (int **)&Abilities::INSTABUILD);
  if ( !result )
    result = (*(int (**)(void))(**((_DWORD **)v2 + 1) + 1456))();
  return result;
}


int __fastcall ContainerManagerModel::registerInformControllerOfDestructionCallback(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 24;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 24);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 32);
  v10 = v13;
  *(_DWORD *)(v4 + 32) = v8;
  v14 = *(_DWORD *)(v4 + 36);
  *(_DWORD *)(v4 + 36) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


int __fastcall ContainerManagerModel::isClientSide(ContainerManagerModel *this)
{
  Level *v1; // r0@1

  v1 = (Level *)Entity::getLevel(*((Entity **)this + 1));
  return j_j_j__ZNK5Level12isClientSideEv_1(v1);
}


signed int __fastcall ContainerManagerModel::isValid(ContainerManagerModel *this, float a2)
{
  int i; // r4@1

  for ( i = *((_DWORD *)this + 12); i; i = *(_DWORD *)i )
  {
    if ( (*(int (**)(void))(**(_DWORD **)(i + 8) + 44))() != 1 )
      return 0;
  }
  return 1;
}


void __fastcall ContainerManagerModel::getEntityName(const void **a1, int a2, unsigned __int64 *a3)
{
  const void **v3; // r4@1
  unsigned __int64 *v4; // r5@1
  int v5; // r0@1
  int v6; // r0@1
  int v7; // r5@1
  int *v8; // r1@2
  unsigned int v9; // r0@3

  v3 = a1;
  v4 = a3;
  v5 = Entity::getLevel(*(Entity **)(a2 + 4));
  v6 = Level::fetchEntity(v5, 0, *v4, *v4 >> 32, 0);
  v7 = v6;
  if ( v6 )
  {
    v8 = (int *)(*(int (**)(void))(*(_DWORD *)v6 + 188))();
    if ( !*(_DWORD *)(*v8 - 12) )
    {
      v9 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 488))(v7);
      EntityTypeToLocString(v3, v9, 0);
      return;
    }
  }
  else
    v8 = (int *)&Util::EMPTY_STRING;
  sub_21E8AF4((int *)v3, v8);
}


  if ( ContainerManagerModel::isCreativeMode(**a1) )
{
    result = 2;
  }
  else
  {
    v5 = Recipes::getInstance(0);
    Recipes::getAllRecipesFor((Recipes *)&v10, v5, v2);
    v6 = v10;
    if ( (_BYTE *)v10 == v11 )
    {
      v9 = 1;
      v8 = 1;
    }
    else
      v7 = 0;
      do
      {
        if ( (*(int (**)(void))(*v6[v7] + 12))() )
        {
          if ( (*(int (**)(void))(*v10[v7] + 12))() == 1 && *((_BYTE *)v3 + 80) )
            v8 = 0;
        }
        else
          v8 = 0;
        v6 = v10;
        ++v7;
      }
      while ( v7 < (v11 - (_BYTE *)v10) >> 2 );
      v9 = 0;
    if ( v6 )
      operator delete(v6);
    if ( v9 )
      result = 3;
    if ( !((v9 | v8) & 1) )
      result = CraftingContainerManagerModel::_filterByInventory(v3, v2);
      if ( result == 3 )
        result = 2;
  return result;
}


char *__fastcall ContainerManagerModel::getContainers(ContainerManagerModel *this)
{
  return (char *)this + 40;
}


void __fastcall ContainerManagerModel::~ContainerManagerModel(ContainerManagerModel *this)
{
  ContainerManagerModel *v1; // r0@1

  v1 = ContainerManagerModel::~ContainerManagerModel(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall ContainerManagerModel::grantExperience(ContainerManagerModel *this, int a2)
{
  ContainerManagerModel::grantExperience(this, a2);
}


int __fastcall ContainerManagerModel::ContainerManagerModel(double a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r0@1
  int v4; // r7@3
  void *v5; // r6@3

  v2 = LODWORD(a1);
  *(_DWORD *)LODWORD(a1) = &off_26ED0C0;
  *(_DWORD *)(LODWORD(a1) + 4) = a2;
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 0;
  *(_BYTE *)(LODWORD(a1) + 20) = BYTE4(a1);
  *(_BYTE *)(LODWORD(a1) + 21) = -9;
  *(_DWORD *)(LODWORD(a1) + 32) = 0;
  *(_DWORD *)(LODWORD(a1) + 48) = 0;
  *(_DWORD *)(LODWORD(a1) + 52) = 0;
  *(_DWORD *)(LODWORD(a1) + 56) = 1065353216;
  *(_DWORD *)(LODWORD(a1) + 60) = 0;
  LODWORD(a1) += 56;
  v3 = sub_21E6254(a1);
  *(_DWORD *)(v2 + 44) = v3;
  if ( v3 == 1 )
  {
    *(_DWORD *)(v2 + 64) = 0;
    v5 = (void *)(v2 + 64);
  }
  else
    if ( v3 >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * v3;
    v5 = operator new(4 * v3);
    _aeabi_memclr4(v5, v4);
  *(_DWORD *)(v2 + 40) = v5;
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 44))(v2);
  return v2;
}


void __fastcall ContainerManagerModel::grantExperience(ContainerManagerModel *this, int a2)
{
  ContainerManagerModel *v2; // r5@1
  int v3; // r4@1
  Player *v4; // r6@1
  const Vec3 *v5; // r0@1

  v2 = this;
  v3 = a2;
  v4 = (Player *)Entity::getRegion(*((Entity **)this + 1));
  v5 = (const Vec3 *)(*(int (**)(void))(**((_DWORD **)v2 + 1) + 52))();
  ExperienceOrb::spawnOrbs(v4, v5, v3, 0, *((Player **)v2 + 1));
}


void __fastcall ContainerManagerModel::~ContainerManagerModel(ContainerManagerModel *this)
{
  ContainerManagerModel::~ContainerManagerModel(this);
}


int *__fastcall ContainerManagerModel::getBlockName(ContainerManagerModel *this, const BlockPos *a2, const BlockPos *a3)
{
  BlockEntity *v3; // r4@1
  const BlockPos *v4; // r5@1
  BlockSource *v5; // r0@1
  int v6; // r1@1
  int *result; // r0@2

  v3 = this;
  v4 = a3;
  v5 = (BlockSource *)Entity::getRegion(*((Entity **)a2 + 1));
  v6 = BlockSource::getBlockEntity(v5, v4);
  if ( v6 )
    result = BlockEntity::getDisplayName(v3, v6);
  else
    result = sub_21E8AF4((int *)v3, (int *)&Util::EMPTY_STRING);
  return result;
}


void __fastcall ContainerManagerModel::getEntityName(const void **a1, int a2, unsigned __int64 *a3)
{
  ContainerManagerModel::getEntityName(a1, a2, a3);
}


int __fastcall ContainerManagerModel::setContainerType(int result, char a2)
{
  *(_BYTE *)(result + 21) = a2;
  return result;
}


unsigned int *__fastcall ContainerManagerModel::_addContainer(int a1, ContainerModel **a2)
{
  ContainerModel **v2; // r6@1
  int v3; // r4@1
  char *v4; // r0@1
  int v5; // r4@1
  unsigned int *result; // r0@1
  ContainerModel *v7; // r5@1
  ContainerModel *v8; // r6@1
  unsigned int v9; // r1@5
  unsigned int *v10; // r1@9
  unsigned int *v11; // r7@15

  v2 = a2;
  v3 = a1;
  v4 = ContainerModel::getContainerStringName(*a2);
  v5 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         (unsigned __int64 *)(v3 + 40),
         (int **)v4);
  result = (unsigned int *)*v2;
  *(_DWORD *)v5 = *v2;
  v7 = *(ContainerModel **)(v5 + 4);
  v8 = v2[1];
  if ( v8 != v7 )
  {
    if ( v8 )
    {
      result = (unsigned int *)((char *)v8 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(result);
        while ( __strex(v9 + 1, result) );
        v7 = *(ContainerModel **)(v5 + 4);
      }
      else
        ++*result;
    }
    if ( v7 )
      v10 = (unsigned int *)((char *)v7 + 4);
          result = (unsigned int *)__ldrex(v10);
        while ( __strex((unsigned int)result - 1, v10) );
        result = (unsigned int *)(*v10)--;
      if ( result == (unsigned int *)1 )
        v11 = (unsigned int *)((char *)v7 + 8);
        (*(void (__fastcall **)(ContainerModel *))(*(_DWORD *)v7 + 8))(v7);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (unsigned int *)__ldrex(v11);
          while ( __strex((unsigned int)result - 1, v11) );
        }
        else
          result = (unsigned int *)(*v11)--;
        if ( result == (unsigned int *)1 )
          result = (unsigned int *)(*(int (__fastcall **)(ContainerModel *))(*(_DWORD *)v7 + 12))(v7);
    *(_DWORD *)(v5 + 4) = v8;
  }
  return result;
}


int __fastcall ContainerManagerModel::setContainerId(int result, char a2)
{
  *(_BYTE *)(result + 20) = a2;
  return result;
}


ContainerManagerModel *__fastcall ContainerManagerModel::~ContainerManagerModel(ContainerManagerModel *this)
{
  ContainerManagerModel *v1; // r4@1
  char *v2; // r5@1
  int i; // r6@3
  char *v4; // r0@6
  void (__fastcall *v5)(char *, char *, signed int); // r3@9
  int v6; // r5@11 OVERLAPPED
  int v7; // r6@11 OVERLAPPED
  void *v8; // r0@12
  void *v9; // r0@14
  int v10; // r0@16

  v1 = this;
  v2 = (char *)this + 24;
  *(_DWORD *)this = &off_26ED0C0;
  if ( *((_DWORD *)this + 8) )
    (*((void (__fastcall **)(_DWORD, _DWORD))this + 9))(v2, this);
  for ( i = *((_DWORD *)v1 + 12); i; i = *(_DWORD *)i )
    (*(void (**)(void))(**(_DWORD **)(i + 8) + 16))();
  std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)v1 + 40);
  v4 = (char *)*((_DWORD *)v1 + 10);
  if ( v4 && (char *)v1 + 64 != v4 )
    operator delete(v4);
  v5 = (void (__fastcall *)(char *, char *, signed int))*((_DWORD *)v1 + 8);
  if ( v5 )
    v5(v2, v2, 3);
  *(_QWORD *)&v6 = *((_QWORD *)v1 + 1);
  if ( v6 != v7 )
  {
    do
    {
      v8 = *(void **)(v6 + 52);
      if ( v8 )
        operator delete(v8);
      v9 = *(void **)(v6 + 36);
      if ( v9 )
        operator delete(v9);
      v10 = *(_DWORD *)(v6 + 8);
      if ( v10 )
        (*(void (**)(void))(*(_DWORD *)v10 + 4))();
      *(_DWORD *)(v6 + 8) = 0;
      v6 += 72;
    }
    while ( v7 != v6 );
    v6 = *((_DWORD *)v1 + 2);
  }
  if ( v6 )
    operator delete((void *)v6);
  return v1;
}


int __fastcall ContainerManagerModel::tick(int result, int a2)
{
  int i; // r5@1

  for ( i = *(_DWORD *)(result + 48); i; i = *(_DWORD *)i )
  {
    result = *(_DWORD *)(i + 8);
    if ( result )
      result = (*(int (**)(void))(*(_DWORD *)result + 28))();
  }
  return result;
}
