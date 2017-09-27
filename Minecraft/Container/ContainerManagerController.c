

int *__fastcall ContainerManagerController::getEntityName(const void **a1, int a2, unsigned __int64 *a3)
{
  int v3; // r7@1
  const void **v4; // r5@1
  unsigned int v5; // r0@2
  unsigned int *v6; // r6@2
  unsigned int v7; // r3@5
  unsigned int v8; // r4@6
  bool v9; // zf@7
  int *result; // r0@12
  unsigned int v11; // r0@16
  unsigned int *v12; // r5@20
  unsigned int *v13; // r6@26
  unsigned int v14; // r0@28

  v3 = *(_DWORD *)(a2 + 16);
  v4 = a1;
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 + 4);
    v6 = (unsigned int *)(v3 + 4);
    while ( v5 )
    {
      __dmb();
      v7 = __ldrex(v6);
      if ( v7 == v5 )
      {
        v8 = __strex(v5 + 1, v6);
        v5 = v7;
        if ( !v8 )
        {
          __dmb();
          v9 = *v6 == 0;
          if ( *v6 )
          {
            a2 = *(_DWORD *)(a2 + 12);
            v9 = a2 == 0;
          }
          if ( !v9 )
            ContainerManagerModel::getEntityName(v4, a2, a3);
            if ( &pthread_create )
            {
              __dmb();
              do
                result = (int *)__ldrex(v6);
              while ( __strex((unsigned int)result - 1, v6) );
            }
            else
              result = (int *)(*v6)--;
            if ( result == (int *)1 )
              v12 = (unsigned int *)(v3 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
              if ( &pthread_create )
              {
                __dmb();
                do
                  result = (int *)__ldrex(v12);
                while ( __strex((unsigned int)result - 1, v12) );
              }
              else
                result = (int *)(*v12)--;
              if ( result == (int *)1 )
                result = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
            return result;
          if ( &pthread_create )
            __dmb();
            do
              v11 = __ldrex(v6);
            while ( __strex(v11 - 1, v6) );
          else
            v11 = (*v6)--;
          if ( v11 == 1 )
            v13 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
                v14 = __ldrex(v13);
              while ( __strex(v14 - 1, v13) );
              v14 = (*v13)--;
            if ( v14 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return sub_21E8AF4((int *)v4, (int *)&Util::EMPTY_STRING);
        }
      }
      else
        __clrex();
    }
  }
  return sub_21E8AF4((int *)v4, (int *)&Util::EMPTY_STRING);
}


int __fastcall ContainerManagerController::getItemInstance(int a1, int **a2, int a3)
{
  unsigned __int64 *v3; // r6@1
  int v4; // r4@1
  int **v5; // r5@1
  ContainerController **v6; // r0@1

  v3 = (unsigned __int64 *)(a1 + 20);
  v4 = a3;
  v5 = a2;
  std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
    (unsigned __int64 *)(a1 + 20),
    a2);
  v6 = (ContainerController **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                 v3,
                                 v5);
  return ContainerController::getItem(*v6, v4);
}


int __fastcall ContainerManagerController::getStackCount(int a1, int **a2, int a3)
{
  unsigned __int64 *v3; // r6@1
  int v4; // r4@1
  int **v5; // r5@1
  ContainerController **v6; // r0@1

  v3 = (unsigned __int64 *)(a1 + 20);
  v4 = a3;
  v5 = a2;
  std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
    (unsigned __int64 *)(a1 + 20),
    a2);
  v6 = (ContainerController **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                 v3,
                                 v5);
  return *(_BYTE *)(ContainerController::getItem(*v6, v4) + 14);
}


unsigned int *__fastcall ContainerManagerController::_buildContainerControllers(ContainerManagerController *this)
{
  ContainerManagerController *v1; // r4@1
  int v2; // r10@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  signed int v7; // r1@7
  ContainerManagerModel *v8; // r0@11
  unsigned int *result; // r0@13
  unsigned int v10; // r5@13
  unsigned __int64 *v11; // r11@14
  int v12; // r0@15
  unsigned int *v13; // r0@16
  unsigned int v14; // r1@18
  char *v15; // r0@21
  int v16; // r7@21
  int v17; // r9@21
  int v18; // r6@21
  unsigned int v19; // r1@25
  unsigned int *v20; // r1@29
  unsigned int *v21; // r4@35
  unsigned int *v22; // r1@44
  unsigned int *v23; // r4@50
  int v24; // r4@57
  unsigned int *v25; // r1@58
  unsigned int *v26; // r6@64
  unsigned int *v27; // r1@73
  unsigned int *v28; // r4@79
  int v29; // [sp+4h] [bp-34h]@15
  int v30; // [sp+8h] [bp-30h]@15
  ContainerController *v31; // [sp+Ch] [bp-2Ch]@21
  int v32; // [sp+10h] [bp-28h]@21

  v1 = this;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    v4 = (unsigned int *)(v2 + 4);
    while ( v3 )
    {
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
      {
        v6 = __strex(v3 + 1, v4);
        v3 = v5;
        if ( !v6 )
        {
          __dmb();
          v7 = 0;
          if ( !*v4 )
            v7 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v7 = 1;
  v2 = 0;
LABEL_11:
  v8 = (ContainerManagerModel *)*((_DWORD *)v1 + 3);
  if ( v7 )
    v8 = 0;
  result = (unsigned int *)ContainerManagerModel::getContainers(v8);
  v10 = result[2];
  if ( v10 )
    v11 = (unsigned __int64 *)((char *)v1 + 20);
    do
      v29 = *(_DWORD *)(v10 + 8);
      v12 = *(_DWORD *)(v10 + 12);
      v30 = v12;
      if ( v12 )
        v13 = (unsigned int *)(v12 + 4);
        if ( &pthread_create )
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 + 1, v13) );
        else
          ++*v13;
      ContainerFactory::createController((int)&v31, (ContainerModel **)&v29);
      v15 = ContainerController::getContainerName(v31);
      v16 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              v11,
              (int **)v15);
      result = (unsigned int *)v31;
      *(_DWORD *)v16 = v31;
      v17 = *(_DWORD *)(v16 + 4);
      v18 = v32;
      if ( v32 != v17 )
        if ( v32 )
          result = (unsigned int *)(v32 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v19 = __ldrex(result);
            while ( __strex(v19 + 1, result) );
            v17 = *(_DWORD *)(v16 + 4);
          }
          else
            ++*result;
        if ( v17 )
          v20 = (unsigned int *)(v17 + 4);
              result = (unsigned int *)__ldrex(v20);
            while ( __strex((unsigned int)result - 1, v20) );
            result = (unsigned int *)(*v20)--;
          if ( result == (unsigned int *)1 )
            v21 = (unsigned int *)(v17 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
            if ( &pthread_create )
            {
              __dmb();
              do
                result = (unsigned int *)__ldrex(v21);
              while ( __strex((unsigned int)result - 1, v21) );
            }
            else
              result = (unsigned int *)(*v21)--;
            if ( result == (unsigned int *)1 )
              result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
        *(_DWORD *)(v16 + 4) = v18;
        v18 = v32;
      if ( v18 )
        v22 = (unsigned int *)(v18 + 4);
            result = (unsigned int *)__ldrex(v22);
          while ( __strex((unsigned int)result - 1, v22) );
          result = (unsigned int *)(*v22)--;
        if ( result == (unsigned int *)1 )
          v23 = (unsigned int *)(v18 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
              result = (unsigned int *)__ldrex(v23);
            while ( __strex((unsigned int)result - 1, v23) );
            result = (unsigned int *)(*v23)--;
            result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
      v24 = v30;
      if ( v30 )
        v25 = (unsigned int *)(v30 + 4);
            result = (unsigned int *)__ldrex(v25);
          while ( __strex((unsigned int)result - 1, v25) );
          result = (unsigned int *)(*v25)--;
          v26 = (unsigned int *)(v24 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
              result = (unsigned int *)__ldrex(v26);
            while ( __strex((unsigned int)result - 1, v26) );
            result = (unsigned int *)(*v26)--;
            result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
      v10 = *(_DWORD *)v10;
    while ( v10 );
    v27 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        result = (unsigned int *)__ldrex(v27);
      while ( __strex((unsigned int)result - 1, v27) );
    else
      result = (unsigned int *)(*v27)--;
    if ( result == (unsigned int *)1 )
      v28 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        __dmb();
        do
          result = (unsigned int *)__ldrex(v28);
        while ( __strex((unsigned int)result - 1, v28) );
        result = (unsigned int *)(*v28)--;
      if ( result == (unsigned int *)1 )
        result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


int __fastcall ContainerManagerController::_coalesceSplitStack(ContainerManagerController *this, ItemGroup *a2, int a3)
{
  ContainerManagerController *v3; // r5@1
  int v4; // r4@1
  ItemGroup *v5; // r11@1
  int v6; // r10@7
  int v7; // r1@9
  int v8; // r0@9
  signed int v9; // r2@10
  int v10; // r7@11
  int v11; // r4@11
  int v12; // r1@14
  void *v13; // r0@14
  unsigned int *v14; // r2@15
  signed int v15; // r1@17
  int v16; // r7@30
  ContainerController **v17; // r0@30
  int v18; // r0@30
  int v19; // r9@30
  int v20; // r0@30
  bool v21; // zf@30
  int v22; // r8@36
  int v23; // r5@36
  int v24; // r1@36
  int v25; // r0@38
  int v26; // r4@38
  int v27; // r0@38
  bool v28; // zf@38
  ItemInstance *v29; // r4@43
  int v30; // r0@43
  int result; // r0@50
  ContainerItemStack *v32; // [sp+Ch] [bp-104h]@5
  char v33; // [sp+10h] [bp-100h]@19
  int v34; // [sp+18h] [bp-F8h]@24
  void *v35; // [sp+34h] [bp-DCh]@22
  void *v36; // [sp+44h] [bp-CCh]@20
  char v37; // [sp+58h] [bp-B8h]@1
  int v38; // [sp+60h] [bp-B0h]@5
  void *v39; // [sp+7Ch] [bp-94h]@3
  void *ptr; // [sp+8Ch] [bp-84h]@1
  char v41; // [sp+A0h] [bp-70h]@1
  int v42; // [sp+A8h] [bp-68h]@50
  void *v43; // [sp+C4h] [bp-4Ch]@48
  void *v44; // [sp+D4h] [bp-3Ch]@46

  v3 = this;
  v4 = a3;
  v5 = a2;
  ItemGroup::getItemType((ItemGroup *)&v41, a3);
  ItemGroup::getItemStack((ItemGroup *)&v37, v4);
  ContainerItemStack::ContainerItemStack(v3, (const ItemInstance *)&v37);
  if ( ptr )
    operator delete(ptr);
  if ( v39 )
    operator delete(v39);
  v32 = v3;
  if ( v38 )
    (*(void (**)(void))(*(_DWORD *)v38 + 4))();
  v38 = 0;
  v6 = *((_QWORD *)v5 + 6);
  if ( v6 != *((_QWORD *)v5 + 6) >> 32 )
  {
    do
    {
      v16 = *(_DWORD *)v6;
      std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
        (unsigned __int64 *)((char *)v5 + 20),
        (int **)(v6 + 4));
      v17 = (ContainerController **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                      (unsigned __int64 *)((char *)v5 + 20),
                                      (int **)(v6 + 4));
      v18 = ContainerController::getItem(*v17, v16);
      v19 = v18;
      v20 = *(_BYTE *)(v18 + 15);
      v21 = v20 == 0;
      if ( v20 )
        v21 = *(_DWORD *)v19 == 0;
      if ( v21 || ItemInstance::isNull((ItemInstance *)v19) || !*(_BYTE *)(v19 + 14) )
      {
        v6 += 12;
      }
      else if ( ItemInstance::isStackable((ItemInstance *)v19, (const ItemInstance *)&v41) )
        v22 = *(_DWORD *)(v6 + 8);
        v23 = *(_BYTE *)(v19 + 14);
        v24 = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                           (unsigned __int64 *)((char *)v5 + 20),
                           (int **)(v6 + 4));
        if ( v23 < v22 )
          v22 = v23;
        ContainerController::removeItem((ContainerController *)&v33, v24, v16, v22);
        v25 = ContainerItemStack::getItemInstance(v32);
        v26 = v25;
        v27 = *(_BYTE *)(v25 + 15);
        v28 = v27 == 0;
        if ( v27 )
          v28 = *(_DWORD *)v26 == 0;
        if ( v28 || ItemInstance::isNull((ItemInstance *)v26) || !*(_BYTE *)(v26 + 14) )
        {
          ItemInstance::operator=((int)v32, (int)&v33);
        }
        else
          v29 = (ItemInstance *)ContainerItemStack::getItemInstance(v32);
          v30 = ContainerItemStack::getItemInstance((ContainerItemStack *)&v33);
          ItemInstance::add(v29, *(_BYTE *)(v30 + 14));
        if ( v36 )
          operator delete(v36);
        if ( v35 )
          operator delete(v35);
        if ( v34 )
          (*(void (**)(void))(*(_DWORD *)v34 + 4))();
      else
        v7 = *((_DWORD *)v5 + 13);
        v8 = v6 + 12;
        if ( v6 + 12 != v7 )
          v9 = v7 - v8;
          v8 = *((_DWORD *)v5 + 13);
          if ( v9 >= 1 )
          {
            v10 = v6;
            v11 = -1431655765 * (v9 >> 2) + 1;
            do
            {
              *(_DWORD *)v10 = *(_DWORD *)(v10 + 12);
              xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                (int *)(v10 + 4),
                (int *)(v10 + 16));
              --v11;
              *(_DWORD *)(v10 + 8) = *(_DWORD *)(v10 + 20);
              v10 += 12;
            }
            while ( v11 > 1 );
            v8 = *((_DWORD *)v5 + 13);
          }
        *((_DWORD *)v5 + 13) = v8 - 12;
        v12 = *(_DWORD *)(v8 - 8);
        v13 = (void *)(v12 - 12);
        if ( (int *)(v12 - 12) != &dword_28898C0 )
          v14 = (unsigned int *)(v12 - 4);
          if ( &pthread_create )
            __dmb();
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
          else
            v15 = (*v14)--;
          if ( v15 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
    }
    while ( v6 != *((_DWORD *)v5 + 13) );
  }
  if ( v44 )
    operator delete(v44);
  if ( v43 )
    operator delete(v43);
  result = v42;
  if ( v42 )
    result = (*(int (**)(void))(*(_DWORD *)v42 + 4))();
  return result;
}


int __fastcall ContainerManagerController::returnHeldItem(ContainerManagerController *this, Player *a2)
{
  Player *v2; // r4@1
  int result; // r0@20
  int v4; // [sp+0h] [bp-F0h]@4
  int v5; // [sp+8h] [bp-E8h]@8
  void *v6; // [sp+24h] [bp-CCh]@6
  void *ptr; // [sp+34h] [bp-BCh]@4
  int v8; // [sp+48h] [bp-A8h]@4
  char v9; // [sp+50h] [bp-A0h]@1
  int v10; // [sp+58h] [bp-98h]@14
  void *v11; // [sp+74h] [bp-7Ch]@12
  void *v12; // [sp+84h] [bp-6Ch]@10
  char v13; // [sp+98h] [bp-58h]@1
  int v14; // [sp+A0h] [bp-50h]@20
  void *v15; // [sp+BCh] [bp-34h]@18
  void *v16; // [sp+CCh] [bp-24h]@16

  v2 = a2;
  ItemInstance::ItemInstance((ItemInstance *)&v13, (int)a2 + 5000);
  ItemInstance::ItemInstance((ItemInstance *)&v9, (int)&v13);
  if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)v2 + 316))(v2) != 1
    || !(*(int (__fastcall **)(Player *, char *))(*(_DWORD *)v2 + 660))(v2, &v9) )
  {
    (*(void (__fastcall **)(Player *, char *, _DWORD))(*(_DWORD *)v2 + 664))(v2, &v13, 0);
  }
  Player::setCursorSelectedItem(v2, (const ItemInstance *)&ItemInstance::EMPTY_ITEM);
  _aeabi_memclr8(&v4, 80);
  ItemInstance::ItemInstance((int)&v4);
  v8 = 0;
  Player::setCursorSelectedItemGroup(v2, (const ItemGroup *)&v4);
  if ( ptr )
    operator delete(ptr);
  if ( v6 )
    operator delete(v6);
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  v5 = 0;
  if ( v12 )
    operator delete(v12);
  if ( v11 )
    operator delete(v11);
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  if ( v16 )
    operator delete(v16);
  if ( v15 )
    operator delete(v15);
  result = v14;
  if ( v14 )
    result = (*(int (**)(void))(*(_DWORD *)v14 + 4))();
  return result;
}


int *__fastcall ContainerManagerController::getBlockName(ContainerManagerController *this, const BlockPos *a2, const BlockPos *a3)
{
  int v3; // r7@1
  ContainerManagerController *v4; // r5@1
  unsigned int v5; // r0@2
  unsigned int *v6; // r6@2
  unsigned int v7; // r3@5
  unsigned int v8; // r4@6
  bool v9; // zf@7
  int *result; // r0@12
  unsigned int v11; // r0@16
  unsigned int *v12; // r5@20
  unsigned int *v13; // r6@26
  unsigned int v14; // r0@28

  v3 = *((_DWORD *)a2 + 4);
  v4 = this;
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 + 4);
    v6 = (unsigned int *)(v3 + 4);
    while ( v5 )
    {
      __dmb();
      v7 = __ldrex(v6);
      if ( v7 == v5 )
      {
        v8 = __strex(v5 + 1, v6);
        v5 = v7;
        if ( !v8 )
        {
          __dmb();
          v9 = *v6 == 0;
          if ( *v6 )
          {
            a2 = (const BlockPos *)*((_DWORD *)a2 + 3);
            v9 = a2 == 0;
          }
          if ( !v9 )
            ContainerManagerModel::getBlockName(v4, a2, a3);
            if ( &pthread_create )
            {
              __dmb();
              do
                result = (int *)__ldrex(v6);
              while ( __strex((unsigned int)result - 1, v6) );
            }
            else
              result = (int *)(*v6)--;
            if ( result == (int *)1 )
              v12 = (unsigned int *)(v3 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
              if ( &pthread_create )
              {
                __dmb();
                do
                  result = (int *)__ldrex(v12);
                while ( __strex((unsigned int)result - 1, v12) );
              }
              else
                result = (int *)(*v12)--;
              if ( result == (int *)1 )
                result = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
            return result;
          if ( &pthread_create )
            __dmb();
            do
              v11 = __ldrex(v6);
            while ( __strex(v11 - 1, v6) );
          else
            v11 = (*v6)--;
          if ( v11 == 1 )
            v13 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
                v14 = __ldrex(v13);
              while ( __strex(v14 - 1, v13) );
              v14 = (*v13)--;
            if ( v14 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return sub_21E8AF4((int *)v4, (int *)&Util::EMPTY_STRING);
        }
      }
      else
        __clrex();
    }
  }
  return sub_21E8AF4((int *)v4, (int *)&Util::EMPTY_STRING);
}


int __fastcall ContainerManagerController::_spreadStackInContainers(ContainerManagerController *this, ContainerItemStack *a2, int a3, int a4)
{
  int v4; // r5@1
  ContainerItemStack *v5; // r7@1
  int v6; // r0@1
  int v7; // r6@1
  int v8; // r5@2
  int v9; // r10@2
  int v10; // r4@2
  int v11; // r0@7
  unsigned __int64 *v12; // r5@7
  int v13; // r9@8
  ContainerController **v14; // r0@8
  int v15; // r0@8
  int v16; // r11@8
  int v17; // r0@8
  bool v18; // zf@8
  int v19; // r7@13
  ItemInstance *v20; // r0@15
  int *v21; // r0@15
  ItemInstance *v22; // r0@21
  int *v23; // r0@21
  bool v24; // zf@30
  ItemInstance *v25; // r0@33
  int result; // r0@39
  ContainerItemStack *v27; // [sp+8h] [bp-110h]@1
  ItemInstance *v28; // [sp+Ch] [bp-10Ch]@1
  int v29; // [sp+14h] [bp-104h]@7
  char v30; // [sp+18h] [bp-100h]@21
  int v31; // [sp+20h] [bp-F8h]@25
  void *v32; // [sp+3Ch] [bp-DCh]@23
  void *v33; // [sp+4Ch] [bp-CCh]@21
  char v34; // [sp+60h] [bp-B8h]@15
  int v35; // [sp+68h] [bp-B0h]@19
  void *v36; // [sp+84h] [bp-94h]@17
  void *ptr; // [sp+94h] [bp-84h]@15
  char v38; // [sp+A8h] [bp-70h]@1
  int v39; // [sp+B0h] [bp-68h]@39
  unsigned __int8 v40; // [sp+B6h] [bp-62h]@1
  void *v41; // [sp+CCh] [bp-4Ch]@37
  void *v42; // [sp+DCh] [bp-3Ch]@35

  v28 = this;
  v4 = a4;
  v27 = (ContainerItemStack *)a3;
  v5 = a2;
  v6 = ContainerItemStack::getItemInstance((ContainerItemStack *)a3);
  ItemInstance::ItemInstance((ItemInstance *)&v38, v6);
  v7 = v40;
  if ( v4 == 1 )
  {
    v8 = *((_QWORD *)v5 + 6) >> 32;
    v9 = *((_QWORD *)v5 + 6);
    v10 = 1;
  }
  else
    v10 = v40 / (-1431655765 * ((v8 - v9) >> 2));
    if ( v10 <= 1 )
      v10 = 1;
  if ( v9 != v8 && v40 >= v10 )
    v11 = v8 - 12;
    v12 = (unsigned __int64 *)((char *)v5 + 20);
    v29 = v11;
    do
    {
      v13 = *(_DWORD *)v9;
      std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
        v12,
        (int **)(v9 + 4));
      v14 = (ContainerController **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                      v12,
                                      (int **)(v9 + 4));
      v15 = ContainerController::getItem(*v14, v13);
      v16 = v15;
      v17 = *(_BYTE *)(v15 + 15);
      v18 = v17 == 0;
      if ( v17 )
        v18 = *(_DWORD *)v16 == 0;
      if ( v18 || ItemInstance::isNull((ItemInstance *)v16) || !*(_BYTE *)(v16 + 14) )
      {
        ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v30, (const ItemInstance *)&v38);
        v22 = (ItemInstance *)ContainerItemStack::getItemInstance((ContainerItemStack *)&v30);
        ItemInstance::set(v22, (unsigned __int8)v10);
        v23 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                       v12,
                       (int **)(v9 + 4));
        ContainerController::setItem(*v23, v13, (int)&v30, 0, 1);
        *(_DWORD *)(v9 + 8) = v10;
        if ( v33 )
          operator delete(v33);
        if ( v32 )
          operator delete(v32);
        if ( v31 )
          (*(void (**)(void))(*(_DWORD *)v31 + 4))();
        v19 = v10;
      }
      else
        v19 = ItemInstance::getMaxStackSize((ItemInstance *)v16) - *(_BYTE *)(v16 + 14);
        if ( v19 >= v10 )
          v19 = v10;
        ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v34, (const ItemInstance *)&v38);
        v20 = (ItemInstance *)ContainerItemStack::getItemInstance((ContainerItemStack *)&v34);
        ItemInstance::set(v20, (unsigned __int8)v19);
        v21 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
        ContainerController::setItem(*v21, v13, (int)&v34, 0, 1);
        *(_DWORD *)(v9 + 8) = v19;
        if ( ptr )
          operator delete(ptr);
        if ( v36 )
          operator delete(v36);
        if ( v35 )
          (*(void (**)(void))(*(_DWORD *)v35 + 4))();
      v7 -= v19;
      if ( v29 == v9 )
        break;
      v9 += 12;
    }
    while ( v7 >= v10 );
  v24 = v10 == 1;
  if ( v10 == 1 )
    v24 = v7 == 0;
  if ( v24 )
    ContainerItemStack::ContainerItemStack((int)v28);
    v25 = (ItemInstance *)ContainerItemStack::getItemInstance(v27);
    ItemInstance::set(v25, (unsigned __int8)v7);
    ItemInstance::ItemInstance(v28, (int)v27);
  if ( v42 )
    operator delete(v42);
  if ( v41 )
    operator delete(v41);
  result = v39;
  if ( v39 )
    result = (*(int (**)(void))(*(_DWORD *)v39 + 4))();
  return result;
}


int __fastcall ContainerManagerController::isItemFiltered(int a1, int **a2)
{
  int v2; // r0@1

  v2 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
         (unsigned __int64 *)(a1 + 20),
         a2);
  return (*(int (**)(void))(**(_DWORD **)v2 + 16))();
}


int __fastcall ContainerManagerController::isValid(ContainerManagerController *this, float a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r6@2
  unsigned int v5; // r3@5
  unsigned int v6; // r5@6
  int v7; // r5@7
  bool v8; // zf@7
  unsigned int v9; // r0@13
  unsigned int *v11; // r6@18
  unsigned int v12; // r0@20

  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    v4 = (unsigned int *)(v2 + 4);
    while ( v3 )
    {
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
      {
        v6 = __strex(v3 + 1, v4);
        v3 = v5;
        if ( !v6 )
        {
          __dmb();
          v7 = 0;
          v8 = *v4 == 0;
          if ( *v4 )
          {
            this = (ContainerManagerController *)*((_DWORD *)this + 3);
            v8 = this == 0;
          }
          if ( !v8 )
            v7 = (*(int (**)(void))(*(_DWORD *)this + 48))();
          if ( &pthread_create )
            __dmb();
            do
              v9 = __ldrex(v4);
            while ( __strex(v9 - 1, v4) );
          else
            v9 = (*v4)--;
          if ( v9 == 1 )
            v11 = (unsigned int *)(v2 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
            if ( &pthread_create )
            {
              __dmb();
              do
                v12 = __ldrex(v11);
              while ( __strex(v12 - 1, v11) );
            }
            else
              v12 = (*v11)--;
            if ( v12 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
          return v7;
        }
      }
      else
        __clrex();
    }
  }
  return 0;
}


int __fastcall ContainerManagerController::handleTakeAll(int a1, int a2, int **a3, int a4)
{
  int v4; // r7@1
  int **v5; // r5@1
  int v6; // r6@1
  int v7; // r4@1
  int *v8; // r0@1

  v4 = a1;
  v5 = a3;
  v6 = a2;
  v7 = a4;
  v8 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                (unsigned __int64 *)(a1 + 20),
                a3);
  ContainerController::setItem(*v8, v7, v6, 0, 1);
  return (*(int (__fastcall **)(int, int, int **))(*(_DWORD *)v4 + 56))(v4, v6, v5);
}


signed int __fastcall ContainerManagerController::handlePlaceOne(int a1, ContainerItemStack *a2, int **a3, int a4)
{
  ContainerItemStack *v4; // r5@1
  int v5; // r4@1
  int v6; // r6@1
  int v7; // r0@1

  v4 = a2;
  v5 = a4;
  v6 = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                    (unsigned __int64 *)(a1 + 20),
                    a3);
  v7 = *(_BYTE *)(ContainerItemStack::getItemInstance(v4) + 14);
  if ( v7 != 1 )
    v7 = 0;
  return ContainerController::setItem(v6, v5, (int)v4, 1, v7);
}


int __fastcall ContainerManagerController::getContainerManagerModel(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 12);
  v2 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(result + 4) = v2;
  if ( v2 )
  {
    result = v2 + 8;
    if ( &pthread_create )
    {
      __dmb();
      do
        v3 = __ldrex((unsigned int *)result);
      while ( __strex(v3 + 1, (unsigned int *)result) );
    }
    else
      ++*(_DWORD *)result;
  }
  return result;
}


signed int __fastcall ContainerManagerController::isItemFiltered(int a1, unsigned __int64 *a2)
{
  int **v2; // r5@1
  int **v3; // r7@1
  unsigned __int64 *v4; // r6@2
  int v5; // r0@3
  signed int result; // r0@5

  v3 = (int **)(*a2 >> 32);
  v2 = (int **)*a2;
  if ( v2 == v3 )
  {
LABEL_5:
    result = 1;
  }
  else
    v4 = (unsigned __int64 *)(a1 + 20);
    while ( 1 )
    {
      v5 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
             v4,
             v2);
      if ( !(*(int (**)(void))(**(_DWORD **)v5 + 16))() )
        break;
      ++v2;
      if ( v3 == v2 )
        goto LABEL_5;
    }
    result = 0;
  return result;
}


void __fastcall ContainerManagerController::~ContainerManagerController(ContainerManagerController *this)
{
  ContainerManagerController *v1; // r0@1

  v1 = ContainerManagerController::~ContainerManagerController(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall ContainerManagerController::resetSplitStack(ContainerManagerController *this)
{
  ContainerManagerController *v1; // r11@1
  __int64 v2; // kr00_8@1
  int v3; // r6@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // r1@11
  void *v7; // r0@11

  v1 = this;
  v2 = *((_QWORD *)this + 6);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    do
    {
      v6 = *(_DWORD *)(v3 + 4);
      v7 = (void *)(v6 - 12);
      if ( (int *)(v6 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v6 - 4);
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
          j_j_j_j__ZdlPv_9(v7);
      }
      v3 += 12;
    }
    while ( v3 != HIDWORD(v2) );
  }
  *((_DWORD *)v1 + 13) = v2;
}


int __fastcall ContainerManagerController::getAndResetContainerDirty(ContainerManagerController *this)
{
  int v1; // r1@1

  v1 = *((_BYTE *)this + 60);
  *((_BYTE *)this + 60) = 0;
  return v1;
}


int __fastcall ContainerManagerController::closeContainers(int result)
{
  int v1; // r4@0
  int v2; // r1@1
  bool v3; // zf@1
  unsigned int v4; // r1@4
  unsigned int *v5; // r6@4
  unsigned int v6; // r2@7
  unsigned int v7; // r3@8
  ContainerManagerModel *v8; // r1@9
  bool v9; // zf@9
  unsigned int *v10; // r5@19

  v2 = *(_DWORD *)(result + 32);
  v3 = v2 == 0;
  if ( v2 )
  {
    v1 = *(_DWORD *)(result + 16);
    v3 = v1 == 0;
  }
  if ( !v3 )
    v4 = *(_DWORD *)(v1 + 4);
    v5 = (unsigned int *)(v1 + 4);
    while ( v4 )
    {
      __dmb();
      v6 = __ldrex(v5);
      if ( v6 == v4 )
      {
        v7 = __strex(v4 + 1, v5);
        v4 = v6;
        if ( !v7 )
        {
          __dmb();
          v8 = (ContainerManagerModel *)*v5;
          v9 = *v5 == 0;
          if ( *v5 )
          {
            v8 = *(ContainerManagerModel **)(result + 12);
            v9 = v8 == 0;
          }
          if ( !v9 )
            ContainerManagerController::_closeContainers((ContainerManagerController *)result, v8);
          if ( &pthread_create )
            __dmb();
            do
              result = __ldrex(v5);
            while ( __strex(result - 1, v5) );
          else
            result = (*v5)--;
          if ( result == 1 )
            v10 = (unsigned int *)(v1 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
            if ( &pthread_create )
            {
              __dmb();
              do
                result = __ldrex(v10);
              while ( __strex(result - 1, v10) );
            }
            else
              result = (*v10)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
          return result;
        }
      }
      else
        __clrex();
    }
  return result;
}


ContainerManagerController *__fastcall ContainerManagerController::~ContainerManagerController(ContainerManagerController *this)
{
  ContainerManagerController *v1; // r10@1
  int v2; // r5@1
  int v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // r1@11
  void *v7; // r0@11
  char *v8; // r0@16
  int v9; // r0@19
  unsigned int *v10; // r2@20
  unsigned int v11; // r1@22
  int v12; // r0@27
  unsigned int *v13; // r2@28
  unsigned int v14; // r1@30

  v1 = this;
  *(_DWORD *)this = &off_26ECD34;
  v3 = *((_QWORD *)this + 6) >> 32;
  v2 = *((_QWORD *)this + 6);
  if ( v2 != v3 )
  {
    do
    {
      v6 = *(_DWORD *)(v2 + 4);
      v7 = (void *)(v6 - 12);
      if ( (int *)(v6 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v6 - 4);
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
          j_j_j_j__ZdlPv_9(v7);
      }
      v2 += 12;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 12);
  }
  if ( v2 )
    operator delete((void *)v2);
  std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)v1 + 20);
  v8 = (char *)*((_DWORD *)v1 + 5);
  if ( v8 && (char *)v1 + 44 != v8 )
    operator delete(v8);
  v9 = *((_DWORD *)v1 + 4);
  if ( v9 )
    v10 = (unsigned int *)(v9 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 == 1 )
      (*(void (**)(void))(*(_DWORD *)v9 + 12))();
  v12 = *((_DWORD *)v1 + 2);
  if ( v12 )
    v13 = (unsigned int *)(v12 + 8);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      (*(void (**)(void))(*(_DWORD *)v12 + 12))();
  return v1;
}


int __fastcall ContainerManagerController::handleTakeHalf(int a1, int a2, int **a3, int a4)
{
  int v4; // r6@1
  int **v5; // r8@1
  int v6; // r5@1
  int v7; // r7@1
  int *v8; // r0@1
  int v10; // [sp+0h] [bp-60h]@1
  int v11; // [sp+8h] [bp-58h]@5
  void *v12; // [sp+24h] [bp-3Ch]@3
  void *ptr; // [sp+34h] [bp-2Ch]@1

  v4 = a1;
  v5 = a3;
  v6 = a2;
  v7 = a4;
  v8 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                (unsigned __int64 *)(a1 + 20),
                a3);
  ContainerController::removeItem((ContainerController *)&v10, *v8, v7, 1);
  ItemInstance::operator=(v6, (int)&v10);
  if ( ptr )
    operator delete(ptr);
  if ( v12 )
    operator delete(v12);
  if ( v11 )
    (*(void (**)(void))(*(_DWORD *)v11 + 4))();
  v11 = 0;
  return (*(int (__fastcall **)(int, int, int **))(*(_DWORD *)v4 + 56))(v4, v6, v5);
}


int __fastcall ContainerManagerController::getContainerModel(int a1, int a2, int **a3)
{
  unsigned __int64 *v3; // r6@1
  int **v4; // r5@1
  int v5; // r4@1
  int *v6; // r0@2
  int result; // r0@2

  v3 = (unsigned __int64 *)(a2 + 20);
  v4 = a3;
  v5 = a1;
  if ( std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)(a2 + 20),
         a3) )
  {
    v6 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                  v3,
                  v4);
    result = ContainerController::getContainerModel((ContainerController *)v5, *v6);
  }
  else
    result = 0;
    *(_DWORD *)v5 = 0;
    *(_DWORD *)(v5 + 4) = 0;
  return result;
}


int __fastcall ContainerManagerController::handleCoalesceStack(int a1, int a2, int a3, unsigned __int64 *a4)
{
  int v4; // r5@1
  unsigned __int64 *v5; // r8@1
  int v6; // r4@1
  int **v7; // r7@1
  int **v8; // r11@1
  ContainerController **v9; // r0@2
  int **i; // r7@9
  int **v11; // r10@9
  ContainerController **v12; // r0@10
  int result; // r0@21
  int v14; // [sp+0h] [bp-100h]@10
  int v15; // [sp+8h] [bp-F8h]@14
  void *v16; // [sp+24h] [bp-DCh]@12
  void *v17; // [sp+34h] [bp-CCh]@10
  char v18; // [sp+48h] [bp-B8h]@2
  int v19; // [sp+50h] [bp-B0h]@6
  void *v20; // [sp+6Ch] [bp-94h]@4
  void *ptr; // [sp+7Ch] [bp-84h]@2
  char v22; // [sp+90h] [bp-70h]@1
  int v23; // [sp+98h] [bp-68h]@21
  void *v24; // [sp+B4h] [bp-4Ch]@19
  void *v25; // [sp+C4h] [bp-3Ch]@17

  v4 = a1;
  v5 = a4;
  v6 = a2;
  ItemInstance::ItemInstance((ItemInstance *)&v22, a2);
  v8 = (int **)(*v5 >> 32);
  v7 = (int **)*v5;
  if ( v7 != v8 )
  {
    do
    {
      ItemInstance::operator=((int)&v22, v6);
      v9 = (ContainerController **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                     (unsigned __int64 *)(v4 + 20),
                                     v7);
      ContainerController::takeAllItemsOfType(*v9, (ContainerItemStack *)&v22, 0);
      ContainerItemStack::operator-((ItemInstance *)&v18, (int)&v22, v6);
      (*(void (__fastcall **)(int, char *, int **))(*(_DWORD *)v4 + 56))(v4, &v18, v7);
      ItemInstance::operator=(v6, (int)&v22);
      if ( ptr )
        operator delete(ptr);
      if ( v20 )
        operator delete(v20);
      if ( v19 )
        (*(void (**)(void))(*(_DWORD *)v19 + 4))();
      ++v7;
    }
    while ( v8 != v7 );
    v11 = (int **)(*v5 >> 32);
    for ( i = (int **)*v5; v11 != i; ++i )
      v12 = (ContainerController **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                      (unsigned __int64 *)(v4 + 20),
                                      i);
      ContainerController::takeAllItemsOfType(*v12, (ContainerItemStack *)&v22, 1);
      ContainerItemStack::operator-((ItemInstance *)&v14, (int)&v22, v6);
      (*(void (__fastcall **)(int, int *, int **))(*(_DWORD *)v4 + 56))(v4, &v14, i);
      if ( v17 )
        operator delete(v17);
      if ( v16 )
        operator delete(v16);
      if ( v15 )
        (*(void (**)(void))(*(_DWORD *)v15 + 4))();
  }
  if ( v25 )
    operator delete(v25);
  if ( v24 )
    operator delete(v24);
  result = v23;
  if ( v23 )
    result = (*(int (**)(void))(*(_DWORD *)v23 + 4))();
  return result;
}


int __fastcall ContainerManagerController::handleTakeAmount(int a1, int a2, int a3, int **a4, int a5)
{
  int v5; // r6@1
  int **v6; // r8@1
  int v7; // r5@1
  int v8; // r7@1
  int *v9; // r0@1
  int v11; // [sp+0h] [bp-60h]@1
  int v12; // [sp+8h] [bp-58h]@5
  void *v13; // [sp+24h] [bp-3Ch]@3
  void *ptr; // [sp+34h] [bp-2Ch]@1

  v5 = a1;
  v6 = a4;
  v7 = a2;
  v8 = a3;
  v9 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                (unsigned __int64 *)(a1 + 20),
                a4);
  ContainerController::removeItem((ContainerController *)&v11, *v9, a5, v8);
  ItemInstance::operator=(v7, (int)&v11);
  if ( ptr )
    operator delete(ptr);
  if ( v13 )
    operator delete(v13);
  if ( v12 )
    (*(void (**)(void))(*(_DWORD *)v12 + 4))();
  v12 = 0;
  return (*(int (__fastcall **)(int, int, int **))(*(_DWORD *)v5 + 56))(v5, v7, v6);
}


char *__fastcall ContainerManagerController::getSplitItems(ContainerManagerController *this)
{
  return (char *)this + 48;
}


int __fastcall ContainerManagerController::ContainerManagerController(double a1)
{
  int v1; // r4@1
  unsigned int v2; // r2@4
  unsigned int v3; // r0@7
  int v4; // r6@9
  void *v5; // r7@9

  v1 = LODWORD(a1);
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)LODWORD(a1) = &off_26ECD34;
  *(_DWORD *)(LODWORD(a1) + 12) = *(_DWORD *)HIDWORD(a1);
  HIDWORD(a1) = *(_DWORD *)(HIDWORD(a1) + 4);
  *(_DWORD *)(LODWORD(a1) + 16) = HIDWORD(a1);
  if ( HIDWORD(a1) )
  {
    HIDWORD(a1) += 8;
    if ( &pthread_create )
    {
      __dmb();
      do
        v2 = __ldrex((unsigned int *)HIDWORD(a1));
      while ( __strex(v2 + 1, (unsigned int *)HIDWORD(a1)) );
    }
    else
      ++*(_DWORD *)HIDWORD(a1);
  }
  *(_DWORD *)(LODWORD(a1) + 28) = 0;
  *(_DWORD *)(LODWORD(a1) + 32) = 0;
  *(_DWORD *)(LODWORD(a1) + 36) = 1065353216;
  *(_DWORD *)(LODWORD(a1) + 40) = 0;
  LODWORD(a1) += 36;
  v3 = sub_21E6254(a1);
  *(_DWORD *)(v1 + 24) = v3;
  if ( v3 == 1 )
    *(_DWORD *)(v1 + 44) = 0;
    v5 = (void *)(v1 + 44);
  else
    if ( v3 >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * v3;
    v5 = operator new(4 * v3);
    _aeabi_memclr4(v5, v4);
  *(_DWORD *)(v1 + 20) = v5;
  *(_BYTE *)(v1 + 60) = 0;
  *(_DWORD *)(v1 + 52) = 0;
  *(_DWORD *)(v1 + 56) = 0;
  *(_DWORD *)(v1 + 48) = 0;
  ContainerManagerController::_buildContainerControllers((ContainerManagerController *)v1);
  return v1;
}


unsigned int *__fastcall ContainerManagerController::getContainerController(int a1, int a2, int **a3)
{
  unsigned __int64 *v3; // r6@1
  int **v4; // r5@1
  int v5; // r4@1
  int v6; // r0@2
  unsigned int *result; // r0@2
  unsigned int v8; // r1@5

  v3 = (unsigned __int64 *)(a2 + 20);
  v4 = a3;
  v5 = a1;
  if ( std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)(a2 + 20),
         a3) )
  {
    v6 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
           v3,
           v4);
    *(_DWORD *)v5 = *(_DWORD *)v6;
    result = *(unsigned int **)(v6 + 4);
    *(_DWORD *)(v5 + 4) = result;
    if ( result )
    {
      ++result;
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(result);
        while ( __strex(v8 + 1, result) );
      }
      else
        ++*result;
    }
  }
  else
    result = 0;
    *(_DWORD *)v5 = 0;
    *(_DWORD *)(v5 + 4) = 0;
  return result;
}


unsigned int *__fastcall ContainerManagerController::_addContainer(int a1, ContainerController **a2)
{
  ContainerController **v2; // r6@1
  int v3; // r4@1
  char *v4; // r0@1
  int v5; // r4@1
  unsigned int *result; // r0@1
  ContainerController *v7; // r5@1
  ContainerController *v8; // r6@1
  unsigned int v9; // r1@5
  unsigned int *v10; // r1@9
  unsigned int *v11; // r7@15

  v2 = a2;
  v3 = a1;
  v4 = ContainerController::getContainerName(*a2);
  v5 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         (unsigned __int64 *)(v3 + 20),
         (int **)v4);
  result = (unsigned int *)*v2;
  *(_DWORD *)v5 = *v2;
  v7 = *(ContainerController **)(v5 + 4);
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
        v7 = *(ContainerController **)(v5 + 4);
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
        (*(void (__fastcall **)(ContainerController *))(*(_DWORD *)v7 + 8))(v7);
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
          result = (unsigned int *)(*(int (__fastcall **)(ContainerController *))(*(_DWORD *)v7 + 12))(v7);
    *(_DWORD *)(v5 + 4) = v8;
  }
  return result;
}


int __fastcall ContainerManagerController::registerContainerCallbacks(int result)
{
  ContainerController *v1; // r8@0
  int v2; // r10@1
  int v3; // r5@1
  int v4; // r4@3
  unsigned int v5; // r1@4
  unsigned int *v6; // r0@4
  unsigned int v7; // r2@7
  unsigned int v8; // r3@8
  signed int v9; // r1@9
  int v10; // r6@13
  unsigned int *v11; // r2@16
  unsigned int v12; // r1@18
  int v13; // r7@24
  unsigned int v14; // r1@25
  unsigned int *v15; // r0@25
  unsigned int v16; // r2@28
  unsigned int v17; // r3@29
  unsigned int *v18; // r8@32
  int v19; // r9@32
  unsigned int v20; // r1@36
  unsigned int v21; // r1@40
  unsigned int v22; // r0@46
  unsigned int v23; // r0@53
  _DWORD *v24; // r0@56
  unsigned int v25; // r1@58
  unsigned int v26; // r0@65
  unsigned int *v27; // r1@78
  unsigned int *v28; // r6@84
  int v29; // r4@92
  unsigned int *v30; // r7@93
  int v31; // r1@96
  unsigned int v32; // r2@97
  bool v33; // zf@98
  int v34; // r6@101
  unsigned int v35; // r1@102
  unsigned int *v36; // r0@102
  unsigned int v37; // r2@105
  unsigned int v38; // r3@106
  int v39; // r9@109
  unsigned int *v40; // r5@109
  unsigned int v41; // r1@113
  unsigned int v42; // r1@117
  unsigned int v43; // r0@123
  unsigned int v44; // r0@130
  _DWORD *v45; // r0@133
  unsigned int v46; // r1@135
  __int64 v47; // r1@138
  unsigned int v48; // r0@142
  unsigned int *v49; // r5@161
  _DWORD *v50; // [sp+4h] [bp-4Ch]@138
  void (*v51)(void); // [sp+Ch] [bp-44h]@133
  _DWORD *v52; // [sp+14h] [bp-3Ch]@61
  void (*v53)(void); // [sp+1Ch] [bp-34h]@56
  unsigned int *(__fastcall *v54)(unsigned int *); // [sp+20h] [bp-30h]@61
  int v55; // [sp+24h] [bp-2Ch]@2
  int v56; // [sp+28h] [bp-28h]@3

  v2 = result;
  v3 = *(_DWORD *)(result + 28);
  if ( v3 )
  {
    v1 = (ContainerController *)&v55;
    do
    {
      result = ContainerController::getContainerModel(v1, *(_DWORD *)(v3 + 8));
      v4 = v56;
      if ( v56 )
      {
        v5 = *(_DWORD *)(v56 + 4);
        v6 = (unsigned int *)(v56 + 4);
        do
        {
          while ( 1 )
          {
            if ( !v5 )
            {
              v9 = 1;
              v4 = 0;
              goto LABEL_13;
            }
            __dmb();
            v7 = __ldrex(v6);
            if ( v7 == v5 )
              break;
            __clrex();
            v5 = v7;
          }
          v8 = __strex(v5 + 1, v6);
          v5 = v7;
        }
        while ( v8 );
        __dmb();
        v9 = 0;
        if ( !*v6 )
          v9 = 1;
LABEL_13:
        result = v56;
        v10 = v55;
        if ( v9 )
          v10 = 0;
        if ( v56 )
          v11 = (unsigned int *)(v56 + 8);
          if ( &pthread_create )
            do
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
          else
            v12 = (*v11)--;
          if ( v12 == 1 )
            result = (*(int (**)(void))(*(_DWORD *)result + 12))();
        if ( v10 )
          v13 = *(_DWORD *)(v2 + 8);
          if ( !v13 )
            std::__throw_bad_weak_ptr();
          v14 = *(_DWORD *)(v13 + 4);
          v15 = (unsigned int *)(v13 + 4);
          do
            while ( 1 )
              if ( !v14 )
                std::__throw_bad_weak_ptr();
              __dmb();
              v16 = __ldrex(v15);
              if ( v16 == v14 )
                break;
              __clrex();
              v14 = v16;
            v17 = __strex(v14 + 1, v15);
            v14 = v16;
          while ( v17 );
          __dmb();
          v18 = (unsigned int *)(v13 + 8);
          v19 = *(_DWORD *)(v2 + 4);
              v20 = __ldrex(v18);
            while ( __strex(v20 + 1, v18) );
            ++*v18;
              v21 = __ldrex(v15);
            while ( __strex(v21 - 1, v15) );
            v21 = (*v15)--;
          if ( v21 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
            if ( &pthread_create )
              do
                v22 = __ldrex(v18);
              while ( __strex(v22 - 1, v18) );
            else
              v22 = (*v18)--;
            if ( v22 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
              v23 = __ldrex(v18);
            while ( __strex(v23 + 1, v18) );
          v53 = 0;
          v24 = operator new(8u);
          *v24 = v19;
          v24[1] = v13;
              v25 = __ldrex(v18);
            while ( __strex(v25 + 1, v18) );
          v52 = v24;
          v54 = sub_167F17C;
          v53 = (void (*)(void))sub_167F238;
          ContainerModel::registerOnContainerChangedCallback(v10, (int)&v52);
          if ( v53 )
            v53();
              v26 = __ldrex(v18);
            while ( __strex(v26 - 1, v18) );
            v26 = (*v18)--;
          if ( v26 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
              result = __ldrex(v18);
            while ( __strex(result - 1, v18) );
            result = (*v18)--;
          v1 = (ContainerController *)&v55;
          if ( result == 1 )
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
        if ( v4 )
          v27 = (unsigned int *)(v4 + 4);
              result = __ldrex(v27);
            while ( __strex(result - 1, v27) );
            result = (*v27)--;
            v28 = (unsigned int *)(v4 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
                result = __ldrex(v28);
              while ( __strex(result - 1, v28) );
              result = (*v28)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v3 = *(_DWORD *)v3;
    }
    while ( v3 );
  }
  v29 = *(_DWORD *)(v2 + 16);
  if ( v29 )
    result = *(_DWORD *)(v29 + 4);
    v30 = (unsigned int *)(v29 + 4);
    while ( result )
      __dmb();
      v31 = __ldrex(v30);
      if ( v31 == result )
        v32 = __strex(result + 1, v30);
        result = v31;
        if ( !v32 )
          v33 = *v30 == 0;
          if ( *v30 )
            v1 = *(ContainerController **)(v2 + 12);
            v33 = v1 == 0;
          if ( v33 )
            goto LABEL_170;
          v34 = *(_DWORD *)(v2 + 8);
          if ( !v34 )
          v35 = *(_DWORD *)(v34 + 4);
          v36 = (unsigned int *)(v34 + 4);
              if ( !v35 )
              v37 = __ldrex(v36);
              if ( v37 == v35 )
              v35 = v37;
            v38 = __strex(v35 + 1, v36);
            v35 = v37;
          while ( v38 );
          v39 = *(_DWORD *)(v2 + 4);
          v40 = (unsigned int *)(v34 + 8);
              v41 = __ldrex(v40);
            while ( __strex(v41 + 1, v40) );
            ++*v40;
              v42 = __ldrex(v36);
            while ( __strex(v42 - 1, v36) );
            v42 = (*v36)--;
          if ( v42 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 8))(v34);
                v43 = __ldrex(v40);
              while ( __strex(v43 - 1, v40) );
              v43 = (*v40)--;
            if ( v43 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 12))(v34);
              v44 = __ldrex(v40);
            while ( __strex(v44 + 1, v40) );
          v51 = 0;
          v45 = operator new(8u);
          *v45 = v39;
          v45[1] = v34;
              v46 = __ldrex(v40);
            while ( __strex(v46 + 1, v40) );
          LODWORD(v47) = sub_167F414;
          v50 = v45;
          HIDWORD(v47) = sub_167F2DC;
          *(_QWORD *)&v51 = v47;
          ContainerManagerModel::registerInformControllerOfDestructionCallback((int)v1, (int)&v50);
          if ( v51 )
            v51();
              v48 = __ldrex(v40);
            while ( __strex(v48 - 1, v40) );
            v48 = (*v40)--;
          if ( v48 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 12))(v34);
              result = __ldrex(v40);
            while ( __strex(result - 1, v40) );
            result = (*v40)--;
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v34 + 12))(v34);
          if ( v29 )
LABEL_170:
                result = __ldrex(v30);
              while ( __strex(result - 1, v30) );
              result = (*v30)--;
              v49 = (unsigned int *)(v29 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 8))(v29);
              if ( &pthread_create )
              {
                __dmb();
                do
                  result = __ldrex(v49);
                while ( __strex(result - 1, v49) );
              }
              else
                result = (*v49)--;
              if ( result == 1 )
                result = (*(int (__fastcall **)(int))(*(_DWORD *)v29 + 12))(v29);
          return result;
      else
        __clrex();
  return result;
}


signed int __fastcall ContainerManagerController::isItemFiltered(ContainerManagerController *this, const ItemInstance *a2)
{
  int i; // r5@1

  for ( i = *((_DWORD *)this + 7); i; i = *(_DWORD *)i )
  {
    if ( (*(int (**)(void))(**(_DWORD **)(i + 8) + 16))() != 1 )
      return 0;
  }
  return 1;
}


int __fastcall ContainerManagerController::getExpandoStatus(int a1, int **a2, int a3)
{
  int v3; // r4@1
  ContainerController **v4; // r0@1

  v3 = a3;
  v4 = (ContainerController **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                 (unsigned __int64 *)(a1 + 20),
                                 a2);
  return j_j_j__ZNK19ContainerController16getExpandoStatusEi(*v4, v3);
}


int __fastcall ContainerManagerController::handleCoalesceToIndex(int a1, int **a2, int a3, unsigned __int64 *a4)
{
  unsigned __int64 *v4; // r6@1
  unsigned __int64 *v5; // r7@1
  int v6; // r10@1
  int **v7; // r4@1
  int v8; // r9@1
  __int64 v9; // kr00_8@1
  unsigned int *v10; // r0@2
  unsigned int v11; // r1@4
  int v12; // r5@7
  signed int v13; // r8@7
  int result; // r0@7
  bool v15; // zf@7
  bool v16; // zf@11
  int **v17; // r1@14
  const void **v18; // r12@14
  int v19; // r0@15
  int v20; // r7@15
  unsigned int *v21; // r0@16
  unsigned int v22; // r1@18
  signed int v23; // r8@21
  int v24; // r0@23
  int v25; // r4@23
  int v26; // r7@24
  signed int v27; // r9@24
  int v28; // r10@24
  bool v29; // zf@24
  bool v30; // zf@28
  int v31; // r6@32
  size_t v32; // r2@33
  int v33; // r0@34
  bool v34; // zf@34
  int v35; // r10@40
  int v36; // r10@48
  char v37; // r10@48
  unsigned int *v38; // r1@65
  unsigned int v39; // r0@67
  unsigned int v40; // r3@73
  char v41; // r0@78
  unsigned int *v42; // r1@100
  unsigned int *v43; // r5@106
  int v44; // [sp+Ch] [bp-20Ch]@23
  unsigned __int64 *v45; // [sp+10h] [bp-208h]@15
  unsigned __int8 v46; // [sp+14h] [bp-204h]@21
  int v47; // [sp+1Ch] [bp-1FCh]@21
  const void **v48; // [sp+20h] [bp-1F8h]@15
  const void **v49; // [sp+24h] [bp-1F4h]@15
  signed int v50; // [sp+28h] [bp-1F0h]@15
  const void **v51; // [sp+2Ch] [bp-1ECh]@15
  const void **v52; // [sp+2Ch] [bp-1ECh]@23
  const void **v53; // [sp+2Ch] [bp-1ECh]@71
  ContainerController *v54; // [sp+30h] [bp-1E8h]@15
  unsigned int *v55; // [sp+30h] [bp-1E8h]@71
  int v56; // [sp+34h] [bp-1E4h]@7
  int v57; // [sp+38h] [bp-1E0h]@7
  int v58; // [sp+3Ch] [bp-1DCh]@7
  char v59; // [sp+40h] [bp-1D8h]@81
  int v60; // [sp+48h] [bp-1D0h]@85
  void *v61; // [sp+64h] [bp-1B4h]@83
  void *v62; // [sp+74h] [bp-1A4h]@81
  char v63; // [sp+88h] [bp-190h]@81
  int v64; // [sp+90h] [bp-188h]@91
  void *v65; // [sp+ACh] [bp-16Ch]@89
  void *v66; // [sp+BCh] [bp-15Ch]@87
  char v67; // [sp+D0h] [bp-148h]@42
  int v68; // [sp+D8h] [bp-140h]@46
  void *v69; // [sp+F4h] [bp-124h]@44
  void *ptr; // [sp+104h] [bp-114h]@42
  char v71; // [sp+118h] [bp-100h]@42
  int v72; // [sp+120h] [bp-F8h]@54
  void *v73; // [sp+13Ch] [bp-DCh]@52
  void *v74; // [sp+14Ch] [bp-CCh]@50
  char v75; // [sp+160h] [bp-B8h]@42
  int v76; // [sp+168h] [bp-B0h]@60
  void *v77; // [sp+184h] [bp-94h]@58
  void *v78; // [sp+194h] [bp-84h]@56
  char v79; // [sp+1A8h] [bp-70h]@14
  int v80; // [sp+1B0h] [bp-68h]@97
  void *v81; // [sp+1CCh] [bp-4Ch]@95
  void *v82; // [sp+1DCh] [bp-3Ch]@93

  v4 = (unsigned __int64 *)(a1 + 20);
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v9 = *(_QWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                    (unsigned __int64 *)(a1 + 20),
                    a2);
  v8 = v9;
  if ( HIDWORD(v9) )
  {
    v10 = (unsigned int *)(HIDWORD(v9) + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
    }
    else
      ++*v10;
  }
  v12 = ContainerController::getItem((ContainerController *)v9, v6);
  v13 = ItemInstance::getId((ItemInstance *)v12);
  v56 = ItemInstance::getAuxValue((ItemInstance *)v12);
  v58 = *(_BYTE *)(v12 + 14);
  v57 = ItemInstance::getMaxStackSize((ItemInstance *)v12);
  result = *(_BYTE *)(v12 + 15);
  v15 = result == 0;
  if ( *(_BYTE *)(v12 + 15) )
    result = *(_DWORD *)v12;
    v15 = *(_DWORD *)v12 == 0;
  if ( !v15 )
    result = ItemInstance::isNull((ItemInstance *)v12);
    if ( !result )
      result = v58;
      v16 = v58 == v57;
      if ( v58 != v57 )
      {
        result = *(_BYTE *)(v12 + 14);
        v16 = result == 0;
      }
      if ( !v16 )
        ItemInstance::ItemInstance((ItemInstance *)&v79, v12);
        v18 = (const void **)(*v5 >> 32);
        v17 = (int **)*v5;
        if ( (const void **)v17 != v18 )
        {
          do
          {
            v51 = v18;
            v49 = (const void **)v17;
            v19 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                    v4,
                    v17);
            v20 = *(_DWORD *)(v19 + 4);
            v50 = v13;
            v45 = v4;
            v48 = (const void **)v7;
            v54 = *(ContainerController **)v19;
            if ( v20 )
            {
              v21 = (unsigned int *)(v20 + 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v22 = __ldrex(v21);
                while ( __strex(v22 + 1, v21) );
              }
              else
                ++*v21;
            }
            v23 = ContainerController::getContainerSize(v54);
            v18 = v51;
            v47 = v6;
            v46 = 0;
            while ( v23 >= 1 )
              v24 = v23 - 1;
              v25 = v20;
              v52 = v18;
              v44 = v8;
              while ( 1 )
                v23 = v24;
                v26 = ContainerController::getItem(v54, v24);
                v27 = ItemInstance::getId((ItemInstance *)v26);
                v28 = ItemInstance::getAuxValue((ItemInstance *)v26);
                v29 = *(_BYTE *)(v26 + 15) == 0;
                if ( *(_BYTE *)(v26 + 15) )
                  v29 = *(_DWORD *)v26 == 0;
                if ( !v29 && !ItemInstance::isNull((ItemInstance *)v26) )
                {
                  v30 = v56 == v28;
                  if ( v56 == v28 )
                    v30 = v50 == v27;
                  if ( v30 )
                  {
                    v31 = *(_BYTE *)(v26 + 14);
                    if ( *(_BYTE *)(v26 + 14) )
                    {
                      v32 = *((_DWORD *)*v49 - 3);
                      if ( v32 != *((_DWORD *)*v48 - 3) )
                        break;
                      v33 = memcmp(*v49, *v48, v32);
                      v34 = v47 == v23;
                      if ( v47 == v23 )
                        v34 = v33 == 0;
                      if ( !v34 )
                    }
                  }
                }
                v24 = v23 - 1;
                if ( v23 + 1 <= 1 )
                  v8 = v44;
                  v20 = v25;
                  v18 = v52;
                  goto LABEL_64;
              v35 = v31;
              if ( v31 + v58 > v57 )
                v35 = v57 - v58;
              ItemInstance::ItemInstance((ItemInstance *)&v75, v26);
              ItemInstance::remove((ItemInstance *)&v75, v35);
              ItemInstance::add((ItemInstance *)&v79, v35);
              ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v71, (const ItemInstance *)&v75);
              ContainerController::removeItem((ContainerController *)&v67, (int)v54, v23, v31);
              v8 = v44;
              if ( ptr )
                operator delete(ptr);
              if ( v69 )
                operator delete(v69);
              if ( v68 )
                (*(void (**)(void))(*(_DWORD *)v68 + 4))();
              v68 = 0;
              ContainerController::setItem((int)v54, v23, (int)&v71, 0, 0);
              v36 = v58 + v35;
              v58 = v36;
              v15 = v36 == v57;
              v37 = 0;
              if ( v15 )
                v37 = 1;
              if ( v74 )
                operator delete(v74);
              v20 = v25;
              if ( v73 )
                operator delete(v73);
              if ( v72 )
                (*(void (**)(void))(*(_DWORD *)v72 + 4))();
              if ( v78 )
                operator delete(v78);
              if ( v77 )
                operator delete(v77);
              v46 |= v37;
              if ( v76 )
                (*(void (**)(void))(*(_DWORD *)v76 + 4))();
              v18 = v52;
              if ( v58 == v57 )
                v58 = v57;
                break;
LABEL_64:
            v7 = (int **)v48;
            v6 = v47;
            v4 = v45;
            v13 = v50;
              v38 = (unsigned int *)(v20 + 4);
                  v39 = __ldrex(v38);
                while ( __strex(v39 - 1, v38) );
                v39 = (*v38)--;
              if ( v39 == 1 )
                v53 = v18;
                v55 = (unsigned int *)(v20 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
                if ( &pthread_create )
                  __dmb();
                  do
                    v40 = __ldrex(v55);
                  while ( __strex(v40 - 1, v55) );
                else
                  v40 = (*v55)--;
                v18 = v53;
                if ( v40 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
                  v18 = v53;
            v41 = 0;
            v17 = (int **)(v49 + 1);
            if ( v49 + 1 == v18 )
              v41 = 1;
          }
          while ( !(((unsigned __int8)v41 | v46) & 1) );
        }
        ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v63, (const ItemInstance *)&v79);
        ContainerController::removeItem((ContainerController *)&v59, v8, v6, *(_BYTE *)(v12 + 14));
        if ( v62 )
          operator delete(v62);
        if ( v61 )
          operator delete(v61);
        if ( v60 )
          (*(void (**)(void))(*(_DWORD *)v60 + 4))();
        v60 = 0;
        ContainerController::setItem(v8, v6, (int)&v63, 0, 0);
        if ( v66 )
          operator delete(v66);
        if ( v65 )
          operator delete(v65);
        if ( v64 )
          (*(void (**)(void))(*(_DWORD *)v64 + 4))();
        if ( v82 )
          operator delete(v82);
        if ( v81 )
          operator delete(v81);
        result = v80;
        if ( v80 )
          result = (*(int (**)(void))(*(_DWORD *)v80 + 4))();
    v42 = (unsigned int *)(HIDWORD(v9) + 4);
        result = __ldrex(v42);
      while ( __strex(result - 1, v42) );
      result = (*v42)--;
    if ( result == 1 )
      v43 = (unsigned int *)(HIDWORD(v9) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v9) + 8))(HIDWORD(v9));
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v43);
        while ( __strex(result - 1, v43) );
      else
        result = (*v43)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v9) + 12))(HIDWORD(v9));
  return result;
}


void __fastcall ContainerManagerController::~ContainerManagerController(ContainerManagerController *this)
{
  ContainerManagerController::~ContainerManagerController(this);
}


int __fastcall ContainerManagerController::_closeContainers(ContainerManagerController *this, ContainerManagerModel *a2)
{
  ContainerManagerController *v2; // r4@1
  ContainerManagerController *v3; // r5@1
  int v4; // r1@1
  int v5; // r9@3
  unsigned int v6; // r1@4
  unsigned int *v7; // r0@4
  unsigned int v8; // r2@7
  unsigned int v9; // r3@8
  signed int v10; // r1@9
  int v11; // r0@13
  unsigned __int64 *v12; // r4@15
  unsigned int *v13; // r1@16
  unsigned int v14; // r0@18
  unsigned int *v15; // r7@22
  unsigned int v16; // r0@24
  int v17; // r0@29
  unsigned int *v18; // r2@30
  unsigned int v19; // r1@32
  int i; // r7@37
  int v21; // r9@37
  ContainerManagerController *v23; // [sp+0h] [bp-130h]@1
  int v24; // [sp+Ch] [bp-124h]@2
  __int16 v25; // [sp+15h] [bp-11Bh]@0
  char v26; // [sp+17h] [bp-119h]@0
  int v27; // [sp+18h] [bp-118h]@41
  char v28; // [sp+1Ch] [bp-114h]@41
  int v29; // [sp+20h] [bp-110h]@41
  int v30; // [sp+24h] [bp-10Ch]@41
  int v31; // [sp+28h] [bp-108h]@41
  int v32; // [sp+30h] [bp-100h]@51
  void *v33; // [sp+4Ch] [bp-E4h]@49
  void *v34; // [sp+5Ch] [bp-D4h]@47
  int v35; // [sp+70h] [bp-C0h]@41
  int v36; // [sp+78h] [bp-B8h]@45
  void *v37; // [sp+94h] [bp-9Ch]@43
  void *ptr; // [sp+A4h] [bp-8Ch]@41
  char v39; // [sp+B8h] [bp-78h]@38
  int v40; // [sp+C0h] [bp-70h]@57
  void *v41; // [sp+DCh] [bp-54h]@55
  void *v42; // [sp+ECh] [bp-44h]@53
  int v43; // [sp+104h] [bp-2Ch]@3
  int v44; // [sp+108h] [bp-28h]@3

  v2 = this;
  v23 = this;
  v3 = (ContainerManagerController *)ContainerManagerModel::getPlayer(a2);
  ContainerManagerController::returnHeldItem(v3, v3);
  v4 = *((_DWORD *)v2 + 7);
  if ( v4 )
  {
    do
    {
      v24 = v4;
      if ( ContainerController::getDropItemsOnDelete(*(ContainerController **)(v4 + 8)) == 1 )
      {
        ContainerController::getContainerModel((ContainerController *)&v43, *(_DWORD *)(v24 + 8));
        v5 = v44;
        if ( v44 )
        {
          v6 = *(_DWORD *)(v44 + 4);
          v7 = (unsigned int *)(v44 + 4);
          while ( v6 )
          {
            __dmb();
            v8 = __ldrex(v7);
            if ( v8 == v6 )
            {
              v9 = __strex(v6 + 1, v7);
              v6 = v8;
              if ( !v9 )
              {
                __dmb();
                v10 = 0;
                if ( !*v7 )
                  v10 = 1;
                goto LABEL_13;
              }
            }
            else
              __clrex();
          }
        }
        v10 = 1;
        v5 = 0;
LABEL_13:
        v11 = v43;
        if ( v10 )
          v11 = 0;
        v12 = (unsigned __int64 *)(*(int (__cdecl **)(int))(*(_DWORD *)v11 + 36))(v11);
        if ( v5 )
          v13 = (unsigned int *)(v5 + 4);
          if ( &pthread_create )
            do
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
          else
            v14 = (*v13)--;
          if ( v14 == 1 )
            v15 = (unsigned int *)(v5 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
            if ( &pthread_create )
              __dmb();
              do
                v16 = __ldrex(v15);
              while ( __strex(v16 - 1, v15) );
              v16 = (*v15)--;
            if ( v16 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
        v17 = v44;
          v18 = (unsigned int *)(v44 + 8);
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
            v19 = (*v18)--;
          if ( v19 == 1 )
            (*(void (__cdecl **)(int))(*(_DWORD *)v17 + 12))(v17);
        v21 = *v12 >> 32;
        for ( i = *v12; v21 != i; i += 72 )
          ItemInstance::ItemInstance((ItemInstance *)&v39, i);
          if ( (*(int (__fastcall **)(ContainerManagerController *))(*(_DWORD *)v3 + 316))(v3) != 1
            || !(*(int (__fastcall **)(ContainerManagerController *, char *))(*(_DWORD *)v3 + 660))(v3, &v39) )
            (*(void (__fastcall **)(ContainerManagerController *, int, _DWORD))(*(_DWORD *)v3 + 664))(v3, i, 0);
          v27 = 99999;
          v28 = -100;
          *(_BYTE *)(((unsigned int)&v27 | 5) + 2) = v26;
          *(_WORD *)((unsigned int)&v27 | 5) = v25;
          v29 = 0;
          v30 = 0;
          ItemInstance::ItemInstance((ItemInstance *)&v31, i);
          ItemInstance::ItemInstance((ItemInstance *)&v35, (int)&ItemInstance::EMPTY_ITEM);
          InventoryTransactionManager::addAction((int)v3 + 5152, (int)&v27);
          if ( ptr )
            operator delete(ptr);
          if ( v37 )
            operator delete(v37);
          if ( v36 )
            (*(void (__cdecl **)(int))(*(_DWORD *)v36 + 4))(v36);
          v36 = 0;
          if ( v34 )
            operator delete(v34);
          if ( v33 )
            operator delete(v33);
          if ( v32 )
            (*(void (__cdecl **)(int))(*(_DWORD *)v32 + 4))(v32);
          v32 = 0;
          if ( v42 )
            operator delete(v42);
          if ( v41 )
            operator delete(v41);
          if ( v40 )
            (*(void (__cdecl **)(int))(*(_DWORD *)v40 + 4))(v40);
      }
      v4 = *(_DWORD *)v24;
    }
    while ( *(_DWORD *)v24 );
  }
  return std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)v23 + 20);
}


void __fastcall ContainerManagerController::resetSplitStack(ContainerManagerController *this)
{
  ContainerManagerController::resetSplitStack(this);
}


int __fastcall ContainerManagerController::handleSplit(ItemGroup *a1, int a2, int a3, int a4, int a5)
{
  ItemGroup *v5; // r11@1
  int v6; // r5@1
  const void **v7; // r10@1
  int v8; // r4@1
  int v9; // r7@1
  int v10; // r0@1
  int v11; // r0@1
  int v12; // r5@2
  _DWORD *v13; // r6@2
  const void *v14; // r1@4
  size_t v15; // r2@4
  int v16; // r8@5
  _DWORD *v17; // r1@7
  size_t v18; // r2@7
  _DWORD *v19; // r1@10
  size_t v20; // r2@10
  _DWORD *v21; // r1@13
  size_t v22; // r2@13
  int v23; // r0@18
  const void *v24; // r1@22
  size_t v25; // r2@22
  _DWORD *v26; // r1@27
  size_t v27; // r2@27
  const void *v28; // r1@32
  size_t v29; // r2@32
  ContainerController **v30; // r0@37
  int v31; // r0@37
  int v32; // r7@37
  signed int v33; // r9@37
  unsigned int v34; // r10@37
  bool v35; // zf@37
  int v36; // r0@37
  unsigned int v37; // r0@43
  signed int v38; // r8@43
  int v39; // r0@47
  ContainerController **v40; // r0@47
  int v41; // r6@47
  __int64 v42; // kr00_8@47
  int v43; // r0@47
  __int64 v44; // kr08_8@49
  char *v45; // r1@50
  char *v46; // r0@52
  int v47; // r0@61
  int result; // r0@71
  unsigned int *v49; // r2@74
  signed int v50; // r1@76
  unsigned __int64 *v51; // [sp+0h] [bp-120h]@2
  ItemGroup *v52; // [sp+4h] [bp-11Ch]@2
  int **v53; // [sp+8h] [bp-118h]@37
  int v54; // [sp+Ch] [bp-114h]@1
  char v55; // [sp+10h] [bp-110h]@54
  int v56; // [sp+18h] [bp-108h]@58
  void *v57; // [sp+34h] [bp-ECh]@56
  void *ptr; // [sp+44h] [bp-DCh]@54
  int v59; // [sp+5Ch] [bp-C4h]@49
  char *v60; // [sp+60h] [bp-C0h]@49
  int v61; // [sp+64h] [bp-BCh]@49
  char v62; // [sp+68h] [bp-B8h]@47
  int v63; // [sp+70h] [bp-B0h]@65
  void *v64; // [sp+8Ch] [bp-94h]@63
  void *v65; // [sp+9Ch] [bp-84h]@61
  char v66; // [sp+B0h] [bp-70h]@1
  int v67; // [sp+B8h] [bp-68h]@71
  void *v68; // [sp+D4h] [bp-4Ch]@69
  void *v69; // [sp+E4h] [bp-3Ch]@67

  v5 = a1;
  v6 = a2;
  v7 = (const void **)a3;
  v8 = a4;
  ContainerManagerController::_coalesceSplitStack((ContainerManagerController *)&v66, a1, a2);
  v9 = *((_DWORD *)v5 + 12);
  v10 = *((_DWORD *)v5 + 13);
  v54 = v10;
  v11 = -1431655765 * ((v10 - v9) >> 2) >> 2;
  if ( v11 < 1 )
  {
    v51 = (unsigned __int64 *)((char *)v5 + 48);
    v52 = (ItemGroup *)v6;
LABEL_18:
    v23 = -1431655765 * ((v54 - v9) >> 2);
    if ( v23 == 1 )
    {
      v16 = v9;
    }
    else
      if ( v23 == 2 )
      {
        v16 = v9;
      }
      else
        if ( v23 != 3 )
          goto LABEL_36;
        if ( *(_DWORD *)v9 == v8 )
        {
          v24 = *(const void **)(v9 + 4);
          v25 = *((_DWORD *)*v7 - 3);
          if ( v25 == *((_DWORD *)v24 - 3) )
          {
            v16 = v9;
            if ( !memcmp(*v7, v24, v25) )
              goto LABEL_37;
          }
        }
        v16 = v9 + 12;
      if ( *(_DWORD *)v16 == v8 )
        v26 = *(_DWORD **)(v16 + 4);
        v27 = *((_DWORD *)*v7 - 3);
        if ( v27 == *(v26 - 3) && !memcmp(*v7, v26, v27) )
          goto LABEL_37;
      v16 += 12;
    if ( *(_DWORD *)v16 == v8 )
      v28 = *(const void **)(v16 + 4);
      v29 = *((_DWORD *)*v7 - 3);
      if ( v29 == *((_DWORD *)v28 - 3) )
        if ( memcmp(*v7, v28, v29) )
          v16 = v54;
        goto LABEL_37;
LABEL_36:
    v16 = v54;
    goto LABEL_37;
  }
  v51 = (unsigned __int64 *)((char *)v5 + 48);
  v52 = (ItemGroup *)v6;
  v12 = v11 + 1;
  v13 = *v7;
  while ( 1 )
    if ( *(_DWORD *)v9 == v8 )
      v14 = *(const void **)(v9 + 4);
      v15 = *(v13 - 3);
      if ( v15 == *((_DWORD *)v14 - 3) )
        if ( !memcmp(v13, v14, v15) )
          break;
    v16 = v9 + 12;
    if ( *(_DWORD *)(v9 + 12) == v8 )
      v17 = *(_DWORD **)(v9 + 16);
      v18 = *(v13 - 3);
      if ( v18 == *(v17 - 3) && !memcmp(v13, v17, v18) )
        break;
    v16 = v9 + 24;
    if ( *(_DWORD *)(v9 + 24) == v8 )
      v19 = *(_DWORD **)(v9 + 28);
      v20 = *(v13 - 3);
      if ( v20 == *(v19 - 3) && !memcmp(v13, v19, v20) )
    v16 = v9 + 36;
    if ( *(_DWORD *)(v9 + 36) == v8 )
      v21 = *(_DWORD **)(v9 + 40);
      v22 = *(v13 - 3);
      if ( v22 == *(v21 - 3) && !memcmp(v13, v21, v22) )
    --v12;
    v9 += 48;
    if ( v12 <= 1 )
      goto LABEL_18;
LABEL_37:
  std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
    (unsigned __int64 *)((char *)v5 + 20),
    (int **)v7);
  v53 = (int **)v7;
  v30 = (ContainerController **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                  (unsigned __int64 *)((char *)v5 + 20),
                                  (int **)v7);
  v31 = ContainerController::getItem(*v30, v8);
  v32 = v31;
  v33 = 0;
  v34 = 0;
  v35 = *(_BYTE *)(v31 + 15) == 0;
  v36 = 0;
  if ( !v35 )
    if ( *(_DWORD *)v32 && !ItemInstance::isNull((ItemInstance *)v32) && (v34 = *(_BYTE *)(v32 + 14)) != 0 )
      v36 = ItemInstance::getMaxStackSize((ItemInstance *)v32);
      v34 = 0;
      v36 = 0;
  v37 = v36 - 1;
  v35 = v16 == v54;
  v38 = 0;
  if ( v35 )
    v38 = 1;
  if ( v37 >= v34 )
    v33 = 1;
  v39 = ContainerItemStack::getItemInstance((ContainerItemStack *)&v66);
  ItemInstance::ItemInstance((ItemInstance *)&v62, v39);
  ItemInstance::set((ItemInstance *)&v62, 1);
  v40 = (ContainerController **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                  v53);
  v41 = ContainerController::canSet(*v40, v8, (const ItemInstance *)&v62, 0);
  v42 = *((_QWORD *)v5 + 6);
  v43 = ContainerItemStack::getItemInstance((ContainerItemStack *)&v66);
  if ( (v38 & v33 & v41) == 1 && -1431655765 * ((HIDWORD(v42) - (signed int)v42) >> 2) != *(_BYTE *)(v43 + 14) )
    v59 = v8;
    sub_21E8AF4((int *)&v60, (int *)v53);
    v61 = 0;
    v44 = *(_QWORD *)((char *)v5 + 52);
    if ( (_DWORD)v44 == HIDWORD(v44) )
      std::vector<ContainerSplitControl,std::allocator<ContainerSplitControl>>::_M_emplace_back_aux<ContainerSplitControl>(
        v51,
        (int)&v59);
      v45 = v60;
      *(_DWORD *)v44 = v59;
      *(_DWORD *)(v44 + 4) = v60;
      v45 = (char *)&unk_28898CC;
      v60 = (char *)&unk_28898CC;
      *(_DWORD *)(v44 + 8) = 0;
      *((_DWORD *)v5 + 13) = v44 + 12;
    v46 = v45 - 12;
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v49 = (unsigned int *)(v45 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
        v50 = (*v49)--;
      if ( v50 <= 0 )
        j_j_j_j__ZdlPv_9(v46);
  if ( (unsigned int)(-1431655765 * ((signed int)((*((_QWORD *)v5 + 6) >> 32) - *((_QWORD *)v5 + 6)) >> 2)) >= 2 )
    ContainerManagerController::_spreadStackInContainers((ContainerManagerController *)&v55, v5, (int)&v66, a5);
    ItemInstance::operator=((int)&v66, (int)&v55);
    if ( ptr )
      operator delete(ptr);
    if ( v57 )
      operator delete(v57);
    if ( v56 )
      (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v56 + 4))(v56, *(_DWORD *)(*(_DWORD *)v56 + 4));
    v56 = 0;
  v47 = ContainerItemStack::getCount((ContainerItemStack *)&v66);
  ItemGroup::setCount(v52, v47);
  if ( v65 )
    operator delete(v65);
  if ( v64 )
    operator delete(v64);
  if ( v63 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v63 + 4))(v63);
  if ( v69 )
    operator delete(v69);
  if ( v68 )
    operator delete(v68);
  result = v67;
  if ( v67 )
    result = (*(int (__cdecl **)(int))(*(_DWORD *)v67 + 4))(v67);
  return result;
}


signed int __fastcall ContainerManagerController::handlePlaceAll(int a1, int a2, int **a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  int *v6; // r0@1

  v4 = a2;
  v5 = a4;
  v6 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                (unsigned __int64 *)(a1 + 20),
                a3);
  return ContainerController::setItem(*v6, v5, v4, 0, 1);
}


int __fastcall ContainerManagerController::handleTakeAmount(int a1, int a2, int a3, int **a4, int a5)
{
  int v5; // r6@1
  int **v6; // r8@1
  int v7; // r5@1
  int v8; // r7@1
  int *v9; // r0@1
  int v11; // [sp+0h] [bp-60h]@1
  int v12; // [sp+8h] [bp-58h]@5
  void *v13; // [sp+24h] [bp-3Ch]@3
  void *ptr; // [sp+34h] [bp-2Ch]@1

  v5 = a1;
  v6 = a4;
  v7 = a2;
  v8 = a3;
  v9 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                (unsigned __int64 *)(a1 + 20),
                a4);
  ContainerController::removeItem((ContainerController *)&v11, *v9, a5, v8);
  ItemInstance::operator=(v7, (int)&v11);
  if ( ptr )
    operator delete(ptr);
  if ( v13 )
    operator delete(v13);
  if ( v12 )
    (*(void (**)(void))(*(_DWORD *)v12 + 4))();
  v12 = 0;
  return (*(int (__fastcall **)(int, int, int **))(*(_DWORD *)v5 + 56))(v5, v7, v6);
}


signed int __fastcall ContainerManagerController::handleAutoPlace(int a1, signed int a2, int **a3, int a4, unsigned __int64 *a5, int a6)
{
  int v6; // r7@1
  unsigned __int64 *v7; // r6@1
  int **v8; // r9@1
  signed int v9; // r10@1
  int v10; // r5@1
  ContainerController **v11; // r0@1
  int v12; // r0@1
  int v13; // r4@1
  signed int result; // r0@1
  bool v15; // zf@1
  ContainerController **v16; // r0@6
  int **v17; // r0@8
  int **v18; // r4@8
  int v19; // r8@9
  int v20; // r5@9
  ContainerController **v21; // r0@10
  ContainerController **v22; // r0@11
  signed int v23; // r0@11
  int *v24; // r0@23
  int v25; // r4@23
  int v26; // r5@23
  int *v27; // r0@24
  int v28; // r4@27
  int v29; // r5@27
  int *v30; // r0@28
  int *v31; // r0@32
  int *v32; // r0@34
  int *v33; // r0@36
  int v34; // [sp+Ch] [bp-BCh]@7
  char v35; // [sp+10h] [bp-B8h]@23
  int v36; // [sp+18h] [bp-B0h]@41
  void *v37; // [sp+34h] [bp-94h]@39
  void *ptr; // [sp+44h] [bp-84h]@37
  char v39; // [sp+58h] [bp-70h]@6
  int v40; // [sp+60h] [bp-68h]@47
  unsigned __int8 v41; // [sp+66h] [bp-62h]@11
  void *v42; // [sp+7Ch] [bp-4Ch]@45
  void *v43; // [sp+8Ch] [bp-3Ch]@43

  v6 = a1;
  v7 = (unsigned __int64 *)(a1 + 20);
  v8 = a3;
  v9 = a2;
  v10 = a4;
  v11 = (ContainerController **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                  (unsigned __int64 *)(a1 + 20),
                                  a3);
  v12 = ContainerController::getItem(*v11, v10);
  v13 = v12;
  result = *(_BYTE *)(v12 + 15);
  v15 = result == 0;
  if ( result )
  {
    result = *(_DWORD *)v13;
    v15 = *(_DWORD *)v13 == 0;
  }
  if ( !v15 )
    result = ItemInstance::isNull((ItemInstance *)v13);
    if ( !result )
    {
      result = *(_BYTE *)(v13 + 14);
      if ( *(_BYTE *)(v13 + 14) )
      {
        ItemInstance::ItemInstance((ItemInstance *)&v39, v13);
        v16 = (ContainerController **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                        v7,
                                        v8);
        if ( ContainerController::canSet(*v16, (const ItemInstance *)&v39, 0) == 1 )
        {
          v34 = v10;
        }
        else
          v17 = (int **)(*a5 >> 32);
          v18 = (int **)*a5;
          if ( v18 == v17 )
            goto LABEL_43;
          v19 = (int)(v17 - 2);
          v20 = 0;
          while ( 1 )
          {
            v21 = (ContainerController **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                            v7,
                                            v18);
            if ( ContainerController::canSet(*v21, (const ItemInstance *)&v39, 0) == 1 )
              break;
            v22 = (ContainerController **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
            v20 += ContainerController::getSetCount(*v22, (const ItemInstance *)&v39);
            v23 = 0;
            if ( v20 < v41 )
            {
              v15 = v19 == (_DWORD)v18;
              v18 += 2;
              if ( !v15 )
                continue;
            }
            goto LABEL_16;
          }
        v20 = v41;
        v23 = 1;
LABEL_16:
        if ( v20 >= 1 )
          if ( v41 < v9 )
            v9 = v41;
          if ( v9 < v20 )
            v20 = v9;
          goto LABEL_23;
        if ( v23 == 1 )
LABEL_23:
          v24 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                         v7,
                         v8);
          ContainerController::removeItem((ContainerController *)&v35, *v24, v34, v20);
          (*(void (__fastcall **)(int, char *, int **))(*(_DWORD *)v6 + 56))(v6, &v35, v8);
          v25 = *a5 >> 32;
          v26 = *a5;
          if ( v26 == v25 )
LABEL_31:
            if ( !ContainerItemStack::isEmpty((ContainerItemStack *)&v35) )
              v31 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                             v7,
                             v8);
              ContainerController::autoPlaceItems(*v31, (int)&v35, a6, 0);
          else
            do
              v27 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                             (int **)v26);
              if ( ContainerController::autoPlaceItems(*v27, (int)&v35, a6, 1) == 1 && *(_BYTE *)(v26 + 4) )
              {
                if ( !ContainerItemStack::isEmpty((ContainerItemStack *)&v35) )
                {
                  v32 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                 v7,
                                 v8);
                  ContainerController::setItem(*v32, v34, (int)&v35, 0, 1);
                }
                goto LABEL_37;
              }
              v26 += 8;
            while ( v25 != v26 );
            v28 = *a5 >> 32;
            v29 = *a5;
            if ( v29 == v28 )
              goto LABEL_31;
            while ( 1 )
              v30 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                             (int **)v29);
              if ( ContainerController::autoPlaceItems(*v30, (int)&v35, a6, 0) == 1 )
                if ( *(_BYTE *)(v29 + 4) )
                  break;
              v29 += 8;
              if ( v28 == v29 )
                goto LABEL_31;
              v33 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
              ContainerController::setItem(*v33, v34, (int)&v35, 0, 1);
LABEL_37:
          if ( ptr )
            operator delete(ptr);
          if ( v37 )
            operator delete(v37);
          if ( v36 )
            (*(void (**)(void))(*(_DWORD *)v36 + 4))();
LABEL_43:
        if ( v43 )
          operator delete(v43);
        if ( v42 )
          operator delete(v42);
        result = v40;
        if ( v40 )
          result = (*(int (**)(void))(*(_DWORD *)v40 + 4))();
        return result;
      }
    }
  return result;
}
