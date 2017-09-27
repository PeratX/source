

int (**__fastcall Blacklist::addEntry(int a1, int a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  int v2; // r5@1
  pthread_mutex_t *v3; // r7@1
  int v4; // r6@1
  int v5; // r0@2
  __int64 v6; // r0@3
  int v7; // r2@4
  int v8; // r3@4
  int v9; // r4@4
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@6

  v2 = a1;
  v3 = (pthread_mutex_t *)(a1 + 12);
  v4 = a2;
  if ( &pthread_create )
  {
    v5 = pthread_mutex_lock(v3);
    if ( v5 )
      sub_21E5E14(v5);
  }
  v6 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v6 == HIDWORD(v6) )
    std::vector<Blacklist::Entry,std::allocator<Blacklist::Entry>>::_M_emplace_back_aux<Blacklist::Entry const&>(
      (unsigned __int64 *)v2,
      v4);
  else
    v7 = *(_DWORD *)(v4 + 4);
    v8 = *(_DWORD *)(v4 + 8);
    v9 = *(_DWORD *)(v4 + 12);
    *(_DWORD *)v6 = *(_DWORD *)v4;
    *(_DWORD *)(v6 + 4) = v7;
    *(_DWORD *)(v6 + 8) = v8;
    *(_DWORD *)(v6 + 12) = v9;
    sub_21E8AF4((int *)(v6 + 16), (int *)(v4 + 16));
    *(_DWORD *)(v2 + 4) += 24;
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))pthread_mutex_unlock(v3);
  return result;
}


signed int __fastcall Blacklist::isBlocked(int a1, int a2, int *a3)
{
  __int64 *v3; // r5@1
  pthread_mutex_t *v4; // r8@1
  int *v5; // r6@1
  int v6; // r7@1
  int v7; // r0@2
  int v8; // r1@3
  int v9; // r2@3
  int v10; // r3@3
  __int64 v11; // kr00_8@3
  int v12; // r4@3
  signed int v13; // r5@4
  void *v14; // r0@7
  unsigned int *v16; // r2@11
  signed int v17; // r1@13
  int v18; // [sp+0h] [bp-38h]@3
  int v19; // [sp+4h] [bp-34h]@3
  int v20; // [sp+8h] [bp-30h]@3
  int v21; // [sp+Ch] [bp-2Ch]@3
  int v22; // [sp+10h] [bp-28h]@3

  v3 = (__int64 *)a1;
  v4 = (pthread_mutex_t *)(a1 + 12);
  v5 = a3;
  v6 = a2;
  if ( &pthread_create )
  {
    v7 = pthread_mutex_lock(v4);
    if ( v7 )
      sub_21E5E14(v7);
  }
  v8 = *(_DWORD *)(v6 + 4);
  v9 = *(_DWORD *)(v6 + 8);
  v10 = *(_DWORD *)(v6 + 12);
  v18 = *(_DWORD *)v6;
  v19 = v8;
  v20 = v9;
  v21 = v10;
  sub_21E8AF4(&v22, v5);
  v11 = *v3;
  v12 = std::__find_if<__gnu_cxx::__normal_iterator<Blacklist::Entry const*,std::vector<Blacklist::Entry,std::allocator<Blacklist::Entry>>>,__gnu_cxx::__ops::_Iter_pred<Blacklist::isUUIDBlocked(mce::UUID const&,__gnu_cxx::__normal_iterator<Blacklist::Entry const*,std::vector<Blacklist::Entry,std::allocator<Blacklist::Entry>>>&)const::{lambda(Blacklist::Entry const&)#1}>>(
          v11,
          SHIDWORD(v11),
          (int)&v18);
  if ( v12 == HIDWORD(v11) )
    v13 = 0;
    if ( std::__find_if<__gnu_cxx::__normal_iterator<Blacklist::Entry const*,std::vector<Blacklist::Entry,std::allocator<Blacklist::Entry>>>,__gnu_cxx::__ops::_Iter_pred<Blacklist::isXUIDBlocked(std::string const&,__gnu_cxx::__normal_iterator<Blacklist::Entry const*,std::vector<Blacklist::Entry,std::allocator<Blacklist::Entry>>>&)const::{lambda(Blacklist::Entry const&)#1}>>(
           v11,
           v12,
           (const void **)&v22) != v12 )
      v13 = 1;
  else
    v13 = 1;
  v14 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
    pthread_mutex_unlock(v4);
  return v13;
}


int (**__fastcall Blacklist::removeEntry(int a1, int a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  int v2; // r9@1
  pthread_mutex_t *v3; // r8@1
  int v4; // r7@1
  int v5; // r0@2
  int v6; // r5@3 OVERLAPPED
  int v7; // r6@3 OVERLAPPED
  int v8; // r0@3
  int v9; // r4@3
  signed int v10; // r1@6
  int v11; // r5@7
  int v12; // r4@8
  int v13; // r2@8
  int v14; // r3@8
  int v15; // r7@8
  int v16; // r1@10
  void *v17; // r0@10
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@11
  unsigned int *v19; // r2@14
  signed int v20; // r1@16

  v2 = a1;
  v3 = (pthread_mutex_t *)(a1 + 12);
  v4 = a2;
  if ( &pthread_create )
  {
    v5 = pthread_mutex_lock(v3);
    if ( v5 )
      sub_21E5E14(v5);
  }
  *(_QWORD *)&v6 = *(_QWORD *)v2;
  v8 = std::__find_if<__gnu_cxx::__normal_iterator<Blacklist::Entry const*,std::vector<Blacklist::Entry,std::allocator<Blacklist::Entry>>>,__gnu_cxx::__ops::_Iter_pred<Blacklist::isUUIDBlocked(mce::UUID const&,__gnu_cxx::__normal_iterator<Blacklist::Entry const*,std::vector<Blacklist::Entry,std::allocator<Blacklist::Entry>>>&)const::{lambda(Blacklist::Entry const&)#1}>>(
         *(_QWORD *)v2,
         *(_QWORD *)v2 >> 32,
         v4);
  v9 = v8;
  if ( v8 != v7
    || (v8 = std::__find_if<__gnu_cxx::__normal_iterator<Blacklist::Entry const*,std::vector<Blacklist::Entry,std::allocator<Blacklist::Entry>>>,__gnu_cxx::__ops::_Iter_pred<Blacklist::isXUIDBlocked(std::string const&,__gnu_cxx::__normal_iterator<Blacklist::Entry const*,std::vector<Blacklist::Entry,std::allocator<Blacklist::Entry>>>&)const::{lambda(Blacklist::Entry const&)#1}>>(
               v6,
               v8,
               (const void **)(v4 + 16)),
        v8 != v9) )
    if ( v8 + 24 != v7 )
    {
      v10 = v7 - (v8 + 24);
      if ( v10 >= 1 )
      {
        v11 = -1431655765 * (v10 >> 3) + 1;
        do
        {
          v12 = v8 + 40;
          v13 = *(_DWORD *)(v8 + 28);
          v14 = *(_DWORD *)(v8 + 32);
          v15 = *(_DWORD *)(v8 + 36);
          *(_DWORD *)v8 = *(_DWORD *)(v8 + 24);
          *(_DWORD *)(v8 + 4) = v13;
          *(_DWORD *)(v8 + 8) = v14;
          *(_DWORD *)(v8 + 12) = v15;
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)(v8 + 16),
            (int *)(v8 + 40));
          --v11;
          v8 = v12 - 16;
        }
        while ( v11 > 1 );
        v7 = *(_DWORD *)(v2 + 4);
      }
    }
    *(_DWORD *)(v2 + 4) = v7 - 24;
    v16 = *(_DWORD *)(v7 - 8);
    v17 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v16 - 4);
      if ( &pthread_create )
        __dmb();
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      else
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))pthread_mutex_unlock(v3);
  return result;
}
