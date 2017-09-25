

void __fastcall BehaviorData::Data<BlockPos>::~Data(void *ptr)
{
  BehaviorData::Data<BlockPos>::~Data(ptr);
}


void __fastcall BehaviorData::Data<bool>::~Data(void *ptr)
{
  BehaviorData::Data<bool>::~Data(ptr);
}


void **__fastcall BehaviorData::Data<float>::copy(_DWORD *a1, int a2)
{
  _DWORD *v2; // r8@1
  int v3; // r6@1
  void *v4; // r0@1
  _BYTE *v5; // r5@1
  int v6; // r7@1
  char v7; // r4@1
  void **result; // r0@1

  v2 = a1;
  v3 = a2;
  v4 = j_operator new(0x10u);
  v5 = v4;
  v6 = *(_DWORD *)(v3 + 12);
  v7 = *(_BYTE *)(v3 + 8);
  *(_DWORD *)v4 = &off_2725720;
  sub_21E8AF4((int *)v4 + 1, (int *)(v3 + 4));
  v5[8] = v7;
  *v2 = v5;
  result = &off_2725748;
  *(_DWORD *)v5 = &off_2725748;
  *((_DWORD *)v5 + 3) = v6;
  return result;
}


void __fastcall BehaviorData::Data<std::string>::~Data(void *ptr)
{
  BehaviorData::Data<std::string>::~Data(ptr);
}


void __fastcall BehaviorData::Data<Vec3>::~Data(void *ptr)
{
  void *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = ptr;
  *(_DWORD *)ptr = &off_2725720;
  v2 = *((_DWORD *)ptr + 1);
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
  j_operator delete(v1);
}


int __fastcall BehaviorData::hasData(int a1, int **a2)
{
  int result; // r0@2

  if ( *(_DWORD *)(a1 + 12) )
    result = j_std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
               (unsigned __int64 *)a1,
               a2) != 0;
  else
    result = 0;
  return result;
}


int __fastcall BehaviorData::DataProxy::DataProxy(int a1, int *a2, char a3)
{
  int v3; // r5@1
  char v4; // r4@1
  int result; // r0@1

  v3 = a1;
  v4 = a3;
  *(_DWORD *)a1 = &off_2725720;
  sub_21E8AF4((int *)(a1 + 4), a2);
  result = v3;
  *(_BYTE *)(v3 + 8) = v4;
  return result;
}


int __fastcall BehaviorData::pushDataToStack<Vec3>(int a1, int *a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r8@1
  int v7; // r9@1
  int *v8; // r6@1
  void *v9; // r0@1
  int v10; // r5@1
  __int64 v11; // r0@1
  int result; // r0@2
  int v13; // [sp+0h] [bp-20h]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = j_operator new(0x18u);
  v10 = (int)v9;
  *(_DWORD *)v9 = &off_2725720;
  sub_21E8AF4((int *)v9 + 1, v8);
  *(_BYTE *)(v10 + 8) = 5;
  *(_DWORD *)v10 = &off_2725784;
  *(_DWORD *)(v10 + 12) = v7;
  *(_DWORD *)(v10 + 16) = v6;
  *(_DWORD *)(v10 + 20) = a5;
  v13 = v10;
  v11 = *(_QWORD *)(v5 + 32);
  if ( (_DWORD)v11 == HIDWORD(v11) )
  {
    j_std::vector<std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>,std::allocator<std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>::_M_emplace_back_aux<std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>(
      (_QWORD *)(v5 + 28),
      &v13);
    result = v13;
    if ( v13 )
      result = (*(int (**)(void))(*(_DWORD *)v13 + 4))();
  }
  else
    v13 = 0;
    *(_DWORD *)v11 = v10;
    result = v11 + 4;
    *(_DWORD *)(v5 + 32) = result;
  return result;
}


int __fastcall BehaviorData::Data<std::string>::Data(int a1, int *a2, char a3, int *a4)
{
  int v4; // r5@1
  int *v5; // r4@1
  char v6; // r6@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  *(_DWORD *)a1 = &off_2725720;
  sub_21E8AF4((int *)(a1 + 4), a2);
  *(_BYTE *)(v4 + 8) = v6;
  *(_DWORD *)v4 = &off_2725798;
  *(_DWORD *)(v4 + 12) = &unk_28898CC;
  EntityInteraction::setInteractText((int *)(v4 + 12), v5);
  return v4;
}


int __fastcall BehaviorData::pushData<bool>(int a1, int **a2, char a3)
{
  char v3; // r4@1
  int *v4; // r7@1
  int *v5; // r5@1
  void *v6; // r0@1
  _BYTE *v7; // r6@1
  int result; // r0@1

  v3 = a3;
  v4 = (int *)a2;
  v5 = (int *)j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                a1,
                a2);
  v6 = j_operator new(0xCu);
  v7 = v6;
  *(_DWORD *)v6 = &off_2725720;
  sub_21E8AF4((int *)v6 + 1, v4);
  v7[8] = 1;
  *(_DWORD *)v7 = &off_272575C;
  v7[9] = v3;
  result = *v5;
  *v5 = (int)v7;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


void __fastcall BehaviorData::Data<Vec3>::~Data(void *ptr)
{
  BehaviorData::Data<Vec3>::~Data(ptr);
}


signed int __fastcall BehaviorData::popFromStack(int a1, int **a2)
{
  int v2; // r4@1
  signed int v3; // r5@1
  int *v4; // r1@2
  int v5; // r0@2
  int v6; // r2@2
  int v7; // r0@2
  int v8; // r0@4
  _DWORD *v9; // r5@4
  int v10; // r0@4

  v2 = a1;
  v3 = 0;
  if ( (unsigned int)*(_QWORD *)(a1 + 28) != *(_QWORD *)(a1 + 28) >> 32 )
  {
    v4 = (int *)j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                  a1,
                  a2);
    v5 = *(_DWORD *)(v2 + 32);
    v6 = *(_DWORD *)(v5 - 4);
    *(_DWORD *)(v5 - 4) = 0;
    v7 = *v4;
    *v4 = v6;
    if ( v7 )
      (*(void (**)(void))(*(_DWORD *)v7 + 4))();
    v8 = *(_DWORD *)(v2 + 32);
    v9 = (_DWORD *)(v8 - 4);
    *(_DWORD *)(v2 + 32) = v8 - 4;
    v10 = *(_DWORD *)(v8 - 4);
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
    *v9 = 0;
    v3 = 1;
  }
  return v3;
}


void __fastcall BehaviorData::Data<bool>::~Data(void *ptr)
{
  void *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = ptr;
  *(_DWORD *)ptr = &off_2725720;
  v2 = *((_DWORD *)ptr + 1);
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
  j_operator delete(v1);
}


void __fastcall BehaviorData::Data<int>::~Data(void *ptr)
{
  BehaviorData::Data<int>::~Data(ptr);
}


void **__fastcall BehaviorData::Data<Vec3>::copy(_DWORD *a1, int a2)
{
  _DWORD *v2; // r8@1
  int v3; // r6@1
  void *v4; // r0@1
  void *v5; // r5@1
  __int64 v6; // kr00_8@1
  int v7; // r9@1
  char v8; // r4@1
  void **result; // r0@1

  v2 = a1;
  v3 = a2;
  v4 = j_operator new(0x18u);
  v5 = v4;
  v6 = *(_QWORD *)(v3 + 12);
  v7 = *(_DWORD *)(v3 + 20);
  v8 = *(_BYTE *)(v3 + 8);
  *(_DWORD *)v4 = &off_2725720;
  sub_21E8AF4((int *)v4 + 1, (int *)(v3 + 4));
  *((_BYTE *)v5 + 8) = v8;
  result = &off_2725784;
  *(_DWORD *)v5 = &off_2725784;
  *(_QWORD *)((char *)v5 + 12) = v6;
  *((_DWORD *)v5 + 5) = v7;
  *v2 = v5;
  return result;
}


void __fastcall BehaviorData::Data<BlockPos>::~Data(void *ptr)
{
  void *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = ptr;
  *(_DWORD *)ptr = &off_2725720;
  v2 = *((_DWORD *)ptr + 1);
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
  j_operator delete(v1);
}


BehaviorData::DataProxy *__fastcall BehaviorData::DataProxy::~DataProxy(BehaviorData::DataProxy *this)
{
  BehaviorData::DataProxy *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2725720;
  v2 = *((_DWORD *)this + 1);
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
  return v1;
}


int __fastcall BehaviorData::pushData<float>(int a1, int **a2, int a3)
{
  int *v4; // r7@1
  int *v5; // r4@1
  void *v6; // r0@1
  _BYTE *v7; // r5@1
  int result; // r0@1

  _R6 = a3;
  v4 = (int *)a2;
  v5 = (int *)j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                a1,
                a2);
  v6 = j_operator new(0x10u);
  v7 = v6;
  *(_DWORD *)v6 = &off_2725720;
  sub_21E8AF4((int *)v6 + 1, v4);
  __asm { VMOV            S0, R6 }
  v7[8] = 2;
  *(_DWORD *)v7 = &off_2725748;
  __asm { VSTR            S0, [R5,#0xC] }
  result = *v5;
  *v5 = (int)v7;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


void __fastcall BehaviorData::Data<std::string>::~Data(void *ptr)
{
  _DWORD *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = ptr;
  *(_DWORD *)ptr = &off_2725798;
  v2 = *((_DWORD *)ptr + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  *v1 = &off_2725720;
  v4 = v1[1];
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  j_operator delete(v1);
}


int __fastcall BehaviorData::copyData(int a1, int **a2, int **a3, int a4)
{
  int v4; // r6@1
  int v5; // r5@1
  int result; // r0@1
  int **v7; // r4@1
  int **v8; // r7@1
  int v9; // r0@3
  int *v10; // r0@3
  int v11; // r2@3
  int v12; // r1@3
  int v13; // [sp+0h] [bp-18h]@3

  v4 = a4;
  v5 = a1;
  result = *(_DWORD *)(a4 + 12);
  v7 = a3;
  v8 = a2;
  if ( result )
  {
    result = j_std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
               (unsigned __int64 *)a4,
               a2);
    if ( result )
    {
      v9 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             v4,
             v8);
      (*(void (__fastcall **)(int *))(**(_DWORD **)v9 + 8))(&v13);
      v10 = (int *)j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     v5,
                     v7);
      v11 = v13;
      v13 = 0;
      v12 = *v10;
      *v10 = v11;
      if ( v12 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 4))(v12);
      result = v13;
      if ( v13 )
        result = (*(int (**)(void))(*(_DWORD *)v13 + 4))();
    }
  }
  return result;
}


int __fastcall BehaviorData::pushData<Vec3>(int a1, int **a2, int a3, int a4, int a5)
{
  int v5; // r8@1
  int v6; // r9@1
  int *v7; // r4@1
  int *v8; // r6@1
  void *v9; // r0@1
  _BYTE *v10; // r7@1
  int result; // r0@1

  v5 = a4;
  v6 = a3;
  v7 = (int *)a2;
  v8 = (int *)j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                a1,
                a2);
  v9 = j_operator new(0x18u);
  v10 = v9;
  *(_DWORD *)v9 = &off_2725720;
  sub_21E8AF4((int *)v9 + 1, v7);
  v10[8] = 5;
  *(_DWORD *)v10 = &off_2725784;
  *((_DWORD *)v10 + 3) = v6;
  *((_DWORD *)v10 + 4) = v5;
  *((_DWORD *)v10 + 5) = a5;
  result = *v8;
  *v8 = (int)v10;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


void __fastcall BehaviorData::Data<float>::~Data(void *ptr)
{
  BehaviorData::Data<float>::~Data(ptr);
}


void **__fastcall BehaviorData::Data<bool>::copy(_DWORD *a1, int a2)
{
  _DWORD *v2; // r8@1
  int v3; // r6@1
  void *v4; // r0@1
  _BYTE *v5; // r5@1
  char v6; // r4@1
  char v7; // r7@1
  void **result; // r0@1

  v2 = a1;
  v3 = a2;
  v4 = j_operator new(0xCu);
  v5 = v4;
  v6 = *(_BYTE *)(v3 + 8);
  v7 = *(_BYTE *)(v3 + 9);
  *(_DWORD *)v4 = &off_2725720;
  sub_21E8AF4((int *)v4 + 1, (int *)(v3 + 4));
  v5[8] = v6;
  *v2 = v5;
  result = &off_272575C;
  *(_DWORD *)v5 = &off_272575C;
  v5[9] = v7;
  return result;
}


int __fastcall BehaviorData::pushData<int>(int a1, int **a2, int a3)
{
  int v3; // r4@1
  int *v4; // r7@1
  int *v5; // r5@1
  void *v6; // r0@1
  _BYTE *v7; // r6@1
  int result; // r0@1

  v3 = a3;
  v4 = (int *)a2;
  v5 = (int *)j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                a1,
                a2);
  v6 = j_operator new(0x10u);
  v7 = v6;
  *(_DWORD *)v6 = &off_2725720;
  sub_21E8AF4((int *)v6 + 1, v4);
  v7[8] = 3;
  *(_DWORD *)v7 = &off_2725734;
  *((_DWORD *)v7 + 3) = v3;
  result = *v5;
  *v5 = (int)v7;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


signed int __fastcall BehaviorData::hasDataOfType(int a1, int **a2, int a3)
{
  int v3; // r4@1
  signed int result; // r0@2
  int v5; // r1@3

  v3 = a3;
  if ( *(_DWORD *)(a1 + 12) )
  {
    v5 = j_std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
           (unsigned __int64 *)a1,
           a2);
    result = 0;
    if ( v5 )
    {
      if ( *(_BYTE *)(*(_DWORD *)(v5 + 8) + 8) == v3 )
        result = 1;
    }
  }
  else
  return result;
}


int __fastcall BehaviorData::pushData<std::string>(int a1, int **a2, int *a3)
{
  int *v3; // r4@1
  int *v4; // r5@1
  int *v5; // r6@1
  int v6; // r1@1
  int result; // r0@1
  char v8; // [sp+3h] [bp-15h]@1
  int v9; // [sp+4h] [bp-14h]@1

  v3 = a3;
  v4 = (int *)a2;
  v5 = (int *)j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                a1,
                a2);
  v8 = 4;
  j_std::make_unique<BehaviorData::Data<std::string>,std::string const&,BehaviorData::DataType,std::string &>(
    &v9,
    v4,
    &v8,
    v3);
  v6 = v9;
  v9 = 0;
  result = *v5;
  *v5 = v6;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


int __fastcall BehaviorData::reset(BehaviorData *this)
{
  BehaviorData *v1; // r9@1
  int v2; // r7@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  int v5; // r6@11
  int v6; // r0@11
  int v7; // r1@13
  void *v8; // r0@13
  int result; // r0@15

  v1 = this;
  v2 = *((_DWORD *)this + 2);
  while ( v2 )
  {
    v5 = v2;
    v6 = *(_DWORD *)(v2 + 8);
    v2 = *(_DWORD *)v2;
    if ( v6 )
      (*(void (**)(void))(*(_DWORD *)v6 + 4))();
    *(_DWORD *)(v5 + 8) = 0;
    v7 = *(_DWORD *)(v5 + 4);
    v8 = (void *)(v7 - 12);
    if ( (int *)(v7 - 12) != &dword_28898C0 )
    {
      v3 = (unsigned int *)(v7 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v4 = __ldrex(v3);
        while ( __strex(v4 - 1, v3) );
      }
      else
        v4 = (*v3)--;
      if ( v4 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
    j_operator delete((void *)v5);
  }
  j___aeabi_memclr4_0(*(_QWORD *)v1, 4 * (*(_QWORD *)v1 >> 32));
  result = 0;
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = 0;
  return result;
}


void **__fastcall BehaviorData::Data<BlockPos>::copy(_DWORD *a1, int a2)
{
  _DWORD *v2; // r8@1
  int v3; // r6@1
  void *v4; // r0@1
  void *v5; // r5@1
  __int64 v6; // kr00_8@1
  int v7; // r9@1
  char v8; // r4@1
  void **result; // r0@1

  v2 = a1;
  v3 = a2;
  v4 = j_operator new(0x18u);
  v5 = v4;
  v6 = *(_QWORD *)(v3 + 12);
  v7 = *(_DWORD *)(v3 + 20);
  v8 = *(_BYTE *)(v3 + 8);
  *(_DWORD *)v4 = &off_2725720;
  sub_21E8AF4((int *)v4 + 1, (int *)(v3 + 4));
  *((_BYTE *)v5 + 8) = v8;
  result = &off_2725770;
  *(_DWORD *)v5 = &off_2725770;
  *(_QWORD *)((char *)v5 + 12) = v6;
  *((_DWORD *)v5 + 5) = v7;
  *v2 = v5;
  return result;
}


void __fastcall BehaviorData::DataProxy::~DataProxy(BehaviorData::DataProxy *this)
{
  BehaviorData::DataProxy::~DataProxy(this);
}


int __fastcall BehaviorData::Data<std::string>::copy(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int result; // r0@1
  int v4; // [sp+4h] [bp-14h]@1

  v2 = a1;
  j_std::make_unique<BehaviorData::Data<std::string>,std::string &,BehaviorData::DataType &,std::string &>(
    &v4,
    (int *)(a2 + 4),
    (_BYTE *)(a2 + 8),
    (int *)(a2 + 12));
  result = v4;
  *v2 = v4;
  return result;
}


void **__fastcall BehaviorData::Data<int>::copy(_DWORD *a1, int a2)
{
  _DWORD *v2; // r8@1
  int v3; // r6@1
  void *v4; // r0@1
  _BYTE *v5; // r5@1
  int v6; // r7@1
  char v7; // r4@1
  void **result; // r0@1

  v2 = a1;
  v3 = a2;
  v4 = j_operator new(0x10u);
  v5 = v4;
  v6 = *(_DWORD *)(v3 + 12);
  v7 = *(_BYTE *)(v3 + 8);
  *(_DWORD *)v4 = &off_2725720;
  sub_21E8AF4((int *)v4 + 1, (int *)(v3 + 4));
  v5[8] = v7;
  *v2 = v5;
  result = &off_2725734;
  *(_DWORD *)v5 = &off_2725734;
  *((_DWORD *)v5 + 3) = v6;
  return result;
}


int __fastcall BehaviorData::pushDataToStack<std::string>(int a1, int *a2, int *a3)
{
  int v3; // r4@1
  int result; // r0@1
  __int64 v5; // r2@1
  char v6; // [sp+7h] [bp-11h]@1
  int v7; // [sp+8h] [bp-10h]@1
  int v8; // [sp+Ch] [bp-Ch]@1

  v3 = a1;
  v6 = 4;
  j_std::make_unique<BehaviorData::Data<std::string>,std::string const&,BehaviorData::DataType,std::string &>(
    &v7,
    a2,
    &v6,
    a3);
  result = v7;
  v7 = 0;
  v8 = result;
  v5 = *(_QWORD *)(v3 + 32);
  if ( (_DWORD)v5 == HIDWORD(v5) )
  {
    j_std::vector<std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>,std::allocator<std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>::_M_emplace_back_aux<std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>(
      (_QWORD *)(v3 + 28),
      &v8);
    result = v8;
    if ( v8 )
      result = (*(int (**)(void))(*(_DWORD *)v8 + 4))();
  }
  else
    v8 = 0;
    *(_DWORD *)v5 = result;
    *(_DWORD *)(v3 + 32) = v5 + 4;
  return result;
}


int __fastcall BehaviorData::pushToStack(int result, int *a2)
{
  __int64 v2; // r2@1
  int v3; // r12@3

  v2 = *(_QWORD *)(result + 32);
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    result = j_j_j__ZNSt6vectorISt10unique_ptrIN12BehaviorData9DataProxyESt14default_deleteIS2_EESaIS5_EE19_M_emplace_back_auxIJS5_EEEvDpOT__0(
               (_QWORD *)(result + 28),
               a2);
  }
  else
    v3 = *a2;
    *a2 = 0;
    *(_DWORD *)v2 = v3;
    *(_DWORD *)(result + 32) += 4;
  return result;
}


void __fastcall BehaviorData::Data<float>::~Data(void *ptr)
{
  void *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = ptr;
  *(_DWORD *)ptr = &off_2725720;
  v2 = *((_DWORD *)ptr + 1);
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
  j_operator delete(v1);
}


int __fastcall BehaviorData::pushDataToStack<float>(int a1, int *a2, int a3)
{
  int v3; // r4@1
  int *v5; // r7@1
  void *v6; // r0@1
  int v7; // r5@1
  __int64 v12; // r0@1
  int result; // r0@2
  int v14; // [sp+0h] [bp-18h]@1

  v3 = a1;
  _R6 = a3;
  v5 = a2;
  v6 = j_operator new(0x10u);
  v7 = (int)v6;
  *(_DWORD *)v6 = &off_2725720;
  sub_21E8AF4((int *)v6 + 1, v5);
  __asm { VMOV            S0, R6 }
  v14 = v7;
  *(_BYTE *)(v7 + 8) = 2;
  *(_DWORD *)v7 = &off_2725748;
  __asm { VSTR            S0, [R5,#0xC] }
  v12 = *(_QWORD *)(v3 + 32);
  if ( (_DWORD)v12 == HIDWORD(v12) )
  {
    j_std::vector<std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>,std::allocator<std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>::_M_emplace_back_aux<std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>(
      (_QWORD *)(v3 + 28),
      &v14);
    result = v14;
    if ( v14 )
      result = (*(int (**)(void))(*(_DWORD *)v14 + 4))();
  }
  else
    v14 = 0;
    *(_DWORD *)v12 = v7;
    result = v12 + 4;
    *(_DWORD *)(v3 + 32) = result;
  return result;
}


int __fastcall BehaviorData::pushDataToStack<bool>(int a1, int *a2, char a3)
{
  int v3; // r4@1
  char v4; // r6@1
  int *v5; // r7@1
  void *v6; // r0@1
  int v7; // r5@1
  __int64 v8; // r0@1
  int result; // r0@2
  int v10; // [sp+0h] [bp-18h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = j_operator new(0xCu);
  v7 = (int)v6;
  *(_DWORD *)v6 = &off_2725720;
  sub_21E8AF4((int *)v6 + 1, v5);
  *(_BYTE *)(v7 + 8) = 1;
  v10 = v7;
  *(_DWORD *)v7 = &off_272575C;
  *(_BYTE *)(v7 + 9) = v4;
  v8 = *(_QWORD *)(v3 + 32);
  if ( (_DWORD)v8 == HIDWORD(v8) )
  {
    j_std::vector<std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>,std::allocator<std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>::_M_emplace_back_aux<std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>(
      (_QWORD *)(v3 + 28),
      &v10);
    result = v10;
    if ( v10 )
      result = (*(int (**)(void))(*(_DWORD *)v10 + 4))();
  }
  else
    v10 = 0;
    *(_DWORD *)v8 = v7;
    result = v8 + 4;
    *(_DWORD *)(v3 + 32) = result;
  return result;
}


int __fastcall BehaviorData::pushData<BlockPos>(int a1, int **a2, int a3)
{
  int v3; // r6@1
  int *v4; // r7@1
  int *v5; // r4@1
  void *v6; // r0@1
  int v7; // r5@1
  __int64 v8; // r8@1
  int v9; // r6@1
  int result; // r0@1

  v3 = a3;
  v4 = (int *)a2;
  v5 = (int *)j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                a1,
                a2);
  v6 = j_operator new(0x18u);
  v7 = (int)v6;
  v8 = *(_QWORD *)v3;
  v9 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)v6 = &off_2725720;
  sub_21E8AF4((int *)v6 + 1, v4);
  *(_BYTE *)(v7 + 8) = 0;
  *(_DWORD *)v7 = &off_2725770;
  *(_QWORD *)(v7 + 12) = v8;
  *(_DWORD *)(v7 + 20) = v9;
  result = *v5;
  *v5 = v7;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


void __fastcall BehaviorData::DataProxy::~DataProxy(BehaviorData::DataProxy *this)
{
  BehaviorData::DataProxy *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2725720;
  v2 = *((_DWORD *)this + 1);
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
  j_operator delete((void *)v1);
}


void __fastcall BehaviorData::Data<int>::~Data(void *ptr)
{
  void *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = ptr;
  *(_DWORD *)ptr = &off_2725720;
  v2 = *((_DWORD *)ptr + 1);
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
  j_operator delete(v1);
}


int __fastcall BehaviorData::Data<std::string>::~Data(int a1)
{
  int v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = a1;
  *(_DWORD *)a1 = &off_2725798;
  v2 = *(_DWORD *)(a1 + 12);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  *(_DWORD *)v1 = &off_2725720;
  v4 = *(_DWORD *)(v1 + 4);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v1;
}


int __fastcall BehaviorData::pushDataToStack<int>(int a1, int *a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int *v5; // r7@1
  void *v6; // r0@1
  int v7; // r5@1
  __int64 v8; // r0@1
  int result; // r0@2
  int v10; // [sp+0h] [bp-18h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = j_operator new(0x10u);
  v7 = (int)v6;
  *(_DWORD *)v6 = &off_2725720;
  sub_21E8AF4((int *)v6 + 1, v5);
  *(_BYTE *)(v7 + 8) = 3;
  v10 = v7;
  *(_DWORD *)v7 = &off_2725734;
  *(_DWORD *)(v7 + 12) = v4;
  v8 = *(_QWORD *)(v3 + 32);
  if ( (_DWORD)v8 == HIDWORD(v8) )
  {
    j_std::vector<std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>,std::allocator<std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>::_M_emplace_back_aux<std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>(
      (_QWORD *)(v3 + 28),
      &v10);
    result = v10;
    if ( v10 )
      result = (*(int (**)(void))(*(_DWORD *)v10 + 4))();
  }
  else
    v10 = 0;
    *(_DWORD *)v8 = v7;
    result = v8 + 4;
    *(_DWORD *)(v3 + 32) = result;
  return result;
}


int __fastcall BehaviorData::pushDataToStack<BlockPos>(int a1, int *a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int *v5; // r7@1
  void *v6; // r0@1
  int v7; // r5@1
  __int64 v8; // r8@1
  int v9; // r6@1
  int result; // r0@1
  int *v11; // r1@1 OVERLAPPED
  int *v12; // r2@1
  int v13; // [sp+0h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = j_operator new(0x18u);
  v7 = (int)v6;
  v8 = *(_QWORD *)v4;
  v9 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)v6 = &off_2725720;
  sub_21E8AF4((int *)v6 + 1, v5);
  result = 0;
  *(_BYTE *)(v7 + 8) = 0;
  *(_DWORD *)v7 = &off_2725770;
  *(_QWORD *)(v7 + 12) = v8;
  *(_DWORD *)(v7 + 20) = v9;
  v13 = v7;
  *(_QWORD *)&v11 = *(_QWORD *)(v3 + 32);
  if ( v11 == v12 )
  {
    j_std::vector<std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>,std::allocator<std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>::_M_emplace_back_aux<std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>(
      (_QWORD *)(v3 + 28),
      &v13);
    result = v13;
    if ( v13 )
      result = (*(int (**)(void))(*(_DWORD *)v13 + 4))();
  }
  else
    v13 = 0;
    *v11 = v7;
    *(_DWORD *)(v3 + 32) = v11 + 1;
  return result;
}
