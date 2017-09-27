

boost::detail::thread_data_base *__fastcall boost::detail::thread_data_base::~thread_data_base(boost::detail::thread_data_base *this)
{
  boost::detail::thread_data_base *v1; // r9@1
  int v2; // r4@1
  int v3; // r6@1
  pthread_mutex_t *v4; // r5@3
  pthread_mutex_t *v5; // r5@5
  void *v6; // r5@6
  void **v7; // r8@6
  void *v8; // r4@6
  void **v9; // r10@6
  int v10; // r7@7
  pthread_mutex_t *v11; // r7@8
  void *v12; // r4@11
  int v13; // r6@12
  unsigned int *v14; // r0@13
  unsigned int v15; // r1@14
  unsigned int *v16; // r0@16
  unsigned int v17; // r1@17
  void *v18; // r0@24
  int v19; // r5@33
  unsigned int *v20; // r0@34
  unsigned int v21; // r1@35
  unsigned int *v22; // r0@37
  unsigned int v23; // r1@38
  int v24; // r0@41
  unsigned int *v25; // r1@42
  unsigned int v26; // r2@43
  pthread_mutex_t *mutex; // [sp+4h] [bp-2Ch]@7
  char v29; // [sp+8h] [bp-28h]@7

  v1 = this;
  *(_DWORD *)this = &off_277244C;
  v2 = *((_DWORD *)this + 22);
  v3 = *((_DWORD *)this + 23);
  while ( v2 != v3 )
  {
    v4 = *(pthread_mutex_t **)(v2 + 4);
    while ( j_pthread_mutex_unlock_2(v4) == 4 )
      ;
    v5 = *(pthread_mutex_t **)v2;
    j_pthread_mutex_lock_2(*(pthread_mutex_t **)v2);
    j_pthread_cond_broadcast_1((pthread_cond_t *)&v5->__count);
    j_pthread_mutex_unlock_2(v5);
    v2 += 8;
  }
  v7 = (void **)((char *)v1 + 100);
  v6 = (void *)*((_DWORD *)v1 + 25);
  v9 = (void **)((char *)v1 + 104);
  v8 = (void *)*((_DWORD *)v1 + 26);
  if ( v6 != v8 )
    do
    {
      v10 = *(_DWORD *)v6;
      mutex = (pthread_mutex_t *)(*(_DWORD *)v6 + 32);
      v29 = 0;
      sub_21AEAEC(&mutex);
      sub_21B07C0(v10);
      if ( v29 )
      {
        v11 = mutex;
        while ( j_pthread_mutex_unlock_2(v11) == 4 )
          ;
      }
      v6 = (char *)v6 + 8;
    }
    while ( v6 != v8 );
    v6 = *v9;
    v12 = *v7;
    if ( *v7 != *v9 )
      do
        v13 = *((_DWORD *)v12 + 1);
        if ( v13 )
        {
          v14 = (unsigned int *)(v13 + 4);
          __dmb();
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          if ( v15 == 1 )
          {
            (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
            v16 = (unsigned int *)(v13 + 8);
            __dmb();
            do
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
            if ( v17 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
          }
        }
        v12 = (char *)v12 + 8;
      while ( v12 != v6 );
      v6 = *v7;
  if ( v6 )
    j_operator delete(v6);
  v18 = (void *)*((_DWORD *)v1 + 22);
  if ( v18 )
    j_operator delete(v18);
  sub_21AC7CC((int)v1 + 56, *((_DWORD *)v1 + 16));
  while ( j_pthread_mutex_destroy_1((pthread_mutex_t *)((char *)v1 + 40)) == 4 )
    ;
  while ( j_pthread_cond_destroy_1((pthread_cond_t *)((char *)v1 + 44)) == 4 )
  while ( j_pthread_mutex_destroy_1((pthread_mutex_t *)((char *)v1 + 36)) == 4 )
  while ( j_pthread_mutex_destroy_1((pthread_mutex_t *)((char *)v1 + 28)) == 4 )
  while ( j_pthread_cond_destroy_1((pthread_cond_t *)((char *)v1 + 32)) == 4 )
  while ( j_pthread_mutex_destroy_1((pthread_mutex_t *)v1 + 1) == 4 )
  v19 = *((_DWORD *)v1 + 4);
  if ( v19 )
    v20 = (unsigned int *)(v19 + 4);
    __dmb();
      v21 = __ldrex(v20);
    while ( __strex(v21 - 1, v20) );
    if ( v21 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
      v22 = (unsigned int *)(v19 + 8);
      __dmb();
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  v24 = *((_DWORD *)v1 + 2);
  if ( v24 )
    v25 = (unsigned int *)(v24 + 8);
      v26 = __ldrex(v25);
    while ( __strex(v26 - 1, v25) );
    if ( v26 == 1 )
      (*(void (**)(void))(*(_DWORD *)v24 + 12))();
  return v1;
}


void __fastcall boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector(int a1)
{
  boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector(a1);
}


int __fastcall boost::this_thread::yield(boost::this_thread *this)
{
  return j_sched_yield();
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::clone_impl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r2@3
  int v6; // r3@3
  int v7; // r12@3

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 28) = &off_26D61AC;
  *(_DWORD *)a1 = &off_2773868;
  sub_21E8AF4((int *)(a1 + 4), (int *)(a2 + 4));
  *(_DWORD *)v2 = &off_2773810;
  *(_DWORD *)(v2 + 8) = &off_26D61E8;
  v4 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v2 + 12) = v4;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v5 = *(_DWORD *)(v3 + 20);
  v6 = *(_DWORD *)(v3 + 24);
  v7 = v2 + 16;
  *(_DWORD *)v7 = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v7 + 4) = v5;
  *(_DWORD *)(v7 + 8) = v6;
  *(_DWORD *)v2 = &off_27651BC;
  *(_DWORD *)(v2 + 8) = &off_27651D8;
  *(_DWORD *)(v2 + 28) = &off_27651F4;
  return v2;
}


int __fastcall boost::asio::detail::reactive_socket_service_base::do_open(int a1, int *a2, int *a3, int a4, int a5, int a6, int a7)
{
  int *v7; // r6@1
  int v8; // r4@1
  int *v9; // r7@1
  char v10; // r0@2
  __int64 v11; // r0@5
  int v12; // r9@6
  int v13; // r5@6
  void *v14; // r0@6
  void *v15; // r0@7
  int v16; // r7@9
  void *v17; // r0@9
  pthread_mutex_t *v18; // r5@9
  int v19; // r0@9
  int v20; // r5@10
  void *v21; // r0@11
  char v22; // r0@13
  char v24; // [sp+7h] [bp-41h]@11
  int v25; // [sp+8h] [bp-40h]@11
  void *v26; // [sp+Ch] [bp-3Ch]@11
  struct epoll_event event; // [sp+10h] [bp-38h]@9

  v7 = a3;
  v8 = a1;
  v9 = a2;
  if ( *a3 == -1 )
  {
    *(_DWORD *)j___errno_0(-1) = 0;
    v12 = j_socket_0(a4, a5, a6);
    v13 = *(_DWORD *)j___errno_0(v12);
    v14 = sub_21B09F0();
    *(_DWORD *)a7 = v13;
    *(_DWORD *)(a7 + 4) = v14;
    if ( v12 < 0 )
    {
      if ( v12 == -1 )
      {
        v11 = *(_QWORD *)a7;
        *(_QWORD *)v8 = *(_QWORD *)a7;
        return v11;
      }
    }
    else
      v15 = sub_21B09F0();
      *(_DWORD *)a7 = 0;
      *(_DWORD *)(a7 + 4) = v15;
    v16 = *v9;
    v17 = j_boost::asio::detail::epoll_reactor::allocate_descriptor_state((boost::asio::detail::epoll_reactor *)v16);
    v18 = (pthread_mutex_t *)((char *)v17 + 20);
    v7[2] = (int)v17;
    j_pthread_mutex_lock_1((pthread_mutex_t *)((char *)v17 + 20));
    *(_DWORD *)(v7[2] + 24) = v16;
    *(_DWORD *)(v7[2] + 28) = v12;
    *(_BYTE *)(v7[2] + 60) = 0;
    j_pthread_mutex_unlock_1(v18);
    HIDWORD(event.data.u64) = 0;
    *(_QWORD *)(&event.events + 1) = qword_260F9EC;
    event.events = -2147483621;
    *(_DWORD *)(v7[2] + 32) = -2147483621;
    event.data.fd = v7[2];
    v19 = j_epoll_ctl(*(_DWORD *)(v16 + 36), 1, v12, &event);
    if ( v19 && (v20 = *(_DWORD *)j___errno_0(v19)) != 0 )
      v21 = sub_21B09F0();
      *(_DWORD *)a7 = v20;
      *(_DWORD *)(a7 + 4) = v21;
      *(_DWORD *)v8 = v20;
      *(_DWORD *)(v8 + 4) = v21;
      v25 = 0;
      v26 = sub_21B09F0();
      v24 = 0;
      LODWORD(v11) = j_boost::asio::detail::socket_ops::close(v12, &v24, 1, (int)&v25);
      *v7 = v12;
      if ( a5 == 2 )
        v22 = 32;
      else if ( a5 == 1 )
        v22 = 16;
      else
        v22 = 0;
      *((_BYTE *)v7 + 4) = v22;
      LODWORD(v11) = sub_21B09F0();
      *(_DWORD *)(a7 + 4) = v11;
      *(_DWORD *)v8 = 0;
      *(_DWORD *)(v8 + 4) = v11;
  }
  else
    v10 = `guard variable for'boost::asio::error::get_misc_category(void)::instance;
    __dmb();
    if ( !(v10 & 1)
      && j_j___cxa_guard_acquire_1(&`guard variable for'boost::asio::error::get_misc_category(void)::instance) )
      boost::asio::error::get_misc_category(void)::instance = &off_2763164;
      j_j___cxa_guard_release_1(&`guard variable for'boost::asio::error::get_misc_category(void)::instance);
    LODWORD(v11) = &boost::asio::error::get_misc_category(void)::instance;
    *(_DWORD *)a7 = 1;
    *(_DWORD *)(a7 + 4) = &boost::asio::error::get_misc_category(void)::instance;
    *(_DWORD *)v8 = *(_DWORD *)a7;
    *(_DWORD *)(v8 + 4) = &boost::asio::error::get_misc_category(void)::instance;
  return v11;
}


int __fastcall boost::asio::ssl::detail::engine::verify_callback_function(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@2
  int v5; // r0@2
  int v6; // r7@2
  int v7; // r6@2
  int v8; // r0@4
  int v10; // [sp+0h] [bp-18h]@4

  v2 = a2;
  v3 = a1;
  if ( a2 )
  {
    v4 = j_j_SSL_get_ex_data_X509_STORE_CTX_idx();
    v5 = j_j_X509_STORE_CTX_get_ex_data(v2, v4);
    v6 = v5;
    v7 = 0;
    if ( v5 && j_j_SSL_get_ex_data(v5, 0) )
    {
      v10 = v2;
      v8 = j_j_SSL_get_ex_data(v6, 0);
      v7 = (*(int (__fastcall **)(int, _DWORD, int *))(*(_DWORD *)v8 + 8))(v8, v3 != 0, &v10);
    }
  }
  else
  return v7;
}


signed int __fastcall boost::thread::do_try_join_until_noexcept(boost::thread *this, const timespec *a2, bool *a3)
{
  boost::thread *v3; // r10@1
  bool *v4; // r8@1
  int v5; // r7@1
  int v6; // r9@1
  const timespec *v7; // r4@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@3
  signed int v10; // r5@4
  signed int v11; // r6@8
  signed int v12; // r8@8
  int v13; // r8@9
  pthread_mutex_t *v14; // r4@17
  int v15; // r4@24
  unsigned int *v16; // r0@25
  unsigned int v17; // r1@26
  unsigned int *v18; // r0@28
  unsigned int v19; // r1@29
  unsigned int *v20; // r0@35
  unsigned int v21; // r1@36
  unsigned int *v22; // r0@38
  unsigned int v23; // r1@39
  bool *v25; // [sp+4h] [bp-34h]@8
  void *thread_return; // [sp+8h] [bp-30h]@21
  pthread_mutex_t *mutex; // [sp+Ch] [bp-2Ch]@5
  char v28; // [sp+10h] [bp-28h]@5

  v3 = this;
  v4 = a3;
  v5 = *(_DWORD *)this;
  v6 = *((_DWORD *)this + 1);
  v7 = a2;
  if ( v6 )
  {
    v8 = (unsigned int *)(v6 + 4);
    do
      v9 = __ldrex(v8);
    while ( __strex(v9 + 1, v8) );
  }
  v10 = 0;
  if ( v5 )
    mutex = (pthread_mutex_t *)(v5 + 24);
    v28 = 0;
    sub_21AEAEC(&mutex);
    while ( !*(_BYTE *)(v5 + 48) )
    {
      if ( !sub_21AA8F8((pthread_mutex_t *)(v5 + 28), &mutex, v7) )
      {
        v11 = 0;
        v25 = v4;
        *v4 = 0;
        v12 = 0;
        goto LABEL_16;
      }
    }
    v25 = v4;
    v13 = *(_BYTE *)(v5 + 49);
    if ( v13 == 1 )
      while ( !*(_BYTE *)(v5 + 50) )
        sub_21AA598((pthread_mutex_t *)(v5 + 28), &mutex);
    else
      *(_BYTE *)(v5 + 49) = 1;
    v11 = 0;
    if ( v13 != 1 )
      v11 = 1;
    v12 = 1;
LABEL_16:
    if ( v28 )
      v14 = mutex;
      while ( j_pthread_mutex_unlock_2(v14) == 4 )
        ;
    if ( v12 == 1 )
      if ( v11 == 1 )
        thread_return = 0;
        j_pthread_join_0(*(_DWORD *)(v5 + 20), &thread_return);
        sub_1FDD0BC((pthread_mutex_t *)(v5 + 24));
        *(_BYTE *)(v5 + 50) = 1;
        j_pthread_mutex_lock_2((pthread_mutex_t *)(v5 + 28));
        j_pthread_cond_broadcast_1((pthread_cond_t *)(v5 + 32));
        j_pthread_mutex_unlock_2((pthread_mutex_t *)(v5 + 28));
        while ( j_pthread_mutex_unlock_2((pthread_mutex_t *)(v5 + 24)) == 4 )
          ;
      if ( *(_DWORD *)v3 == v5 )
        *(_DWORD *)v3 = 0;
        v15 = *((_DWORD *)v3 + 1);
        *((_DWORD *)v3 + 1) = 0;
        if ( v15 )
        {
          v16 = (unsigned int *)(v15 + 4);
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          if ( v17 == 1 )
          {
            (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
            v18 = (unsigned int *)(v15 + 8);
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
            if ( v19 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
          }
        }
      v10 = 1;
      *v25 = 1;
    v20 = (unsigned int *)(v6 + 4);
    __dmb();
      v21 = __ldrex(v20);
    while ( __strex(v21 - 1, v20) );
    if ( v21 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      v22 = (unsigned int *)(v6 + 8);
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return v10;
}


boost::this_thread::disable_interruption *__fastcall boost::this_thread::disable_interruption::~disable_interruption(boost::this_thread::disable_interruption *this)
{
  boost::this_thread::disable_interruption *v1; // r4@1
  boost::detail *v2; // r0@1
  char v3; // r5@2

  v1 = this;
  v2 = (boost::detail *)j_boost::detail::get_current_thread_data(this);
  if ( v2 )
  {
    v3 = *(_BYTE *)v1;
    *((_BYTE *)j_boost::detail::get_current_thread_data(v2) + 112) = v3;
  }
  return v1;
}


_DWORD *__fastcall boost::exception_detail::error_info_injector<std::length_error>::~error_info_injector(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  return sub_21D30E8(v1);
}


boost::asio::detail::epoll_reactor::descriptor_state *__fastcall boost::asio::detail::epoll_reactor::cancel_ops(boost::asio::detail::epoll_reactor *this, int a2, boost::asio::detail::epoll_reactor::descriptor_state **a3)
{
  boost::asio::detail::epoll_reactor::descriptor_state **v3; // r6@1
  boost::asio::detail::epoll_reactor *v4; // r8@1
  boost::asio::detail::epoll_reactor::descriptor_state *result; // r0@1
  pthread_mutex_t *v6; // r9@2
  boost::asio::detail::epoll_reactor::descriptor_state *v7; // r0@2
  int v8; // r5@2
  int *v9; // r7@3
  void *v10; // r0@4
  boost::asio::detail::epoll_reactor::descriptor_state *v11; // r1@4
  int *v12; // r0@4
  int v13; // r2@5
  int v14; // r4@14
  void *v15; // r0@15
  boost::asio::detail::epoll_reactor::descriptor_state *v16; // r1@15
  int *v17; // r0@15
  int v18; // r2@16
  int v19; // r4@23
  void *v20; // r0@24
  boost::asio::detail::epoll_reactor::descriptor_state *v21; // r1@24
  int *v22; // r0@24
  int v23; // r2@25
  int v24; // r5@32
  int v25; // r7@33
  void (__fastcall *v26)(_DWORD, int, int *, _DWORD); // r4@35
  int v27; // [sp+4h] [bp-34h]@2
  int v28; // [sp+8h] [bp-30h]@2
  int v29; // [sp+Ch] [bp-2Ch]@35
  void *v30; // [sp+10h] [bp-28h]@35

  v3 = a3;
  v4 = this;
  result = *a3;
  if ( *a3 )
  {
    v6 = (pthread_mutex_t *)((char *)result + 20);
    j_pthread_mutex_lock_1((pthread_mutex_t *)((char *)result + 20));
    v27 = 0;
    v28 = 0;
    v7 = *v3;
    v8 = *((_DWORD *)*v3 + 9);
    if ( v8 )
    {
      v9 = 0;
      do
      {
        v10 = sub_21B09F0();
        *(_DWORD *)(v8 + 12) = 125;
        *(_DWORD *)(v8 + 16) = v10;
        v11 = *v3;
        v12 = (int *)*((_DWORD *)*v3 + 9);
        if ( v12 )
        {
          v13 = *v12;
          *((_DWORD *)v11 + 9) = *v12;
          if ( !v13 )
            *((_DWORD *)v11 + 10) = 0;
          *v12 = 0;
        }
        *(_DWORD *)v8 = 0;
        if ( v9 )
          *v9 = v8;
          v28 = v8;
        else
          v27 = v8;
        v7 = *v3;
        v9 = (int *)v8;
        v8 = *((_DWORD *)*v3 + 9);
      }
      while ( *((_DWORD *)*v3 + 9) );
    }
    else
    v14 = *((_DWORD *)v7 + 11);
    if ( v14 )
        v15 = sub_21B09F0();
        *(_DWORD *)(v14 + 12) = 125;
        *(_DWORD *)(v14 + 16) = v15;
        v16 = *v3;
        v17 = (int *)*((_DWORD *)*v3 + 11);
        if ( v17 )
          v18 = *v17;
          *((_DWORD *)v16 + 11) = *v17;
          if ( !v18 )
            *((_DWORD *)v16 + 12) = 0;
          *v17 = 0;
        *(_DWORD *)v14 = 0;
          *v9 = v14;
          v28 = v14;
          v27 = v14;
        v9 = (int *)v14;
        v14 = *((_DWORD *)*v3 + 11);
      while ( *((_DWORD *)*v3 + 11) );
    v19 = *((_DWORD *)v7 + 13);
    if ( v19 )
        v20 = sub_21B09F0();
        *(_DWORD *)(v19 + 12) = 125;
        *(_DWORD *)(v19 + 16) = v20;
        v21 = *v3;
        v22 = (int *)*((_DWORD *)*v3 + 13);
        if ( v22 )
          v23 = *v22;
          *((_DWORD *)v21 + 13) = *v22;
          if ( !v23 )
            *((_DWORD *)v21 + 14) = 0;
          *v22 = 0;
        *(_DWORD *)v19 = 0;
          *v9 = v19;
          v28 = v19;
          v27 = v19;
        v9 = (int *)v19;
        v19 = *((_DWORD *)*v3 + 13);
      while ( *((_DWORD *)*v3 + 13) );
    j_pthread_mutex_unlock_1(v6);
    result = (boost::asio::detail::epoll_reactor::descriptor_state *)j_boost::asio::detail::task_io_service::post_deferred_completions(
                                                                       *((_DWORD *)v4 + 5),
                                                                       &v27);
    v24 = v27;
    if ( v27 )
        v25 = *(_DWORD *)v24;
        if ( !*(_DWORD *)v24 )
          v28 = 0;
        *(_DWORD *)v24 = 0;
        v26 = *(void (__fastcall **)(_DWORD, int, int *, _DWORD))(v24 + 4);
        v29 = 0;
        v30 = sub_21B09F0();
        v26(0, v24, &v29, 0);
        v24 = v25;
      while ( v25 );
      result = 0;
  }
  return result;
}


__int32 __fastcall boost::thread::hardware_concurrency(boost::thread *this)
{
  __int32 result; // r0@1

  result = j_sysconf(97);
  if ( result <= 0 )
    result = 0;
  return result;
}


void boost::asio::asio_handler_deallocate(boost::asio *this, void *a2, unsigned int a3, ...)
{
  boost::asio *v3; // r4@1
  _BYTE *v4; // r5@1
  _DWORD *v5; // r0@1
  boost::asio **v6; // r0@3

  v3 = this;
  v4 = a2;
  v5 = j_pthread_getspecific_1(boost::asio::detail::call_stack<boost::asio::detail::task_io_service,boost::asio::detail::task_io_service_thread_info>::top_);
  if ( v5 && (unsigned int)v4 <= 0xFF && (v6 = (boost::asio **)v5[1]) != 0 && !*v6 )
  {
    *(_BYTE *)v3 = v4[(_DWORD)v3];
    *v6 = v3;
  }
  else
    j_j_j__ZdlPv_8((void *)v3);
}


void __fastcall boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  sub_21D315C(v1);
  j_j_j__ZdlPv_8((void *)v1);
}


void __fastcall boost::asio::ip::resolver_service<boost::asio::ip::tcp>::~resolver_service(int a1)
{
  void *v1; // r4@1

  v1 = (void *)a1;
  *(_DWORD *)a1 = &off_276CBB0;
  j_boost::asio::detail::resolver_service_base::~resolver_service_base((boost::asio::detail::resolver_service_base *)(a1 + 20));
  j_j_j__ZdlPv_8(v1);
}


void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  sub_21D315C(v1);
  j_j_j__ZdlPv_8((void *)v1);
}


void __fastcall __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::rethrow(int a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::rethrow(a1);
}


void *__fastcall boost::asio::detail::service_registry::create<boost::asio::ip::resolver_service<boost::asio::ip::tcp>>(boost::asio::io_service *a1)
{
  boost::asio::io_service *v1; // r5@1
  void *v2; // r0@1
  void *v3; // r4@1

  v1 = a1;
  v2 = j_operator new(0x2Cu);
  v3 = v2;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = 0;
  *((_DWORD *)v2 + 3) = v1;
  *((_DWORD *)v2 + 4) = 0;
  *(_DWORD *)v2 = &off_276CBB0;
  j_boost::asio::detail::resolver_service_base::resolver_service_base(
    (boost::asio::detail::resolver_service_base *)((char *)v2 + 20),
    v1);
  return v3;
}


void __fastcall boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>::create(int a1, int a2, int *a3, int *a4)
{
  int v4; // r6@1
  char *v5; // r5@2
  _BYTE *v6; // r0@3
  _DWORD *v7; // r0@4
  int v8; // r0@4
  unsigned int v9; // r2@6
  int v10; // r8@7
  __int64 v11; // r0@7
  int v12; // r2@8
  int v13; // r3@8
  int v14; // r7@8
  int v15; // r4@8
  char *v16; // r0@10
  char *v17; // r0@11
  unsigned int *v18; // r1@14
  signed int v19; // r2@15
  unsigned int *v20; // r1@18
  signed int v21; // r2@19
  void *v22; // r0@22
  void *v23; // r0@24
  unsigned int *v24; // r1@26
  signed int v25; // r2@27
  int *v26; // [sp+8h] [bp-88h]@1
  int v27; // [sp+Ch] [bp-84h]@1
  int v28; // [sp+10h] [bp-80h]@7
  int v29; // [sp+14h] [bp-7Ch]@7
  int v30; // [sp+18h] [bp-78h]@7
  int v31; // [sp+1Ch] [bp-74h]@7
  int v32; // [sp+20h] [bp-70h]@7
  int v33; // [sp+24h] [bp-6Ch]@7
  int v34; // [sp+28h] [bp-68h]@7
  char *v35; // [sp+2Ch] [bp-64h]@7
  char *v36; // [sp+30h] [bp-60h]@7
  __int16 v37; // [sp+38h] [bp-58h]@6
  __int16 v38; // [sp+3Ah] [bp-56h]@6
  int v39; // [sp+3Ch] [bp-54h]@6
  int v40; // [sp+40h] [bp-50h]@6
  int v41; // [sp+44h] [bp-4Ch]@6
  int v42; // [sp+48h] [bp-48h]@6
  int v43; // [sp+4Ch] [bp-44h]@6
  int v44; // [sp+50h] [bp-40h]@6
  int v45; // [sp+54h] [bp-3Ch]@2
  int v46; // [sp+58h] [bp-38h]@4
  int v47; // [sp+5Ch] [bp-34h]@4
  unsigned __int64 v48; // [sp+60h] [bp-30h]@23
  void *v49; // [sp+64h] [bp-2Ch]@23

  v4 = a2;
  v26 = a4;
  v27 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a2 )
  {
    sub_21E8AF4(&v45, a3);
    v5 = *(char **)(v4 + 20);
    if ( v5 )
    {
      v6 = (_BYTE *)j_strlen_1(*(const char **)(v4 + 20));
      sub_21E8190((void **)&v45, v5, v6);
    }
    v7 = j_operator new(0xCu);
    *v7 = 0;
    v7[1] = 0;
    v7[2] = 0;
    v46 = (int)v7;
    j_j__ZNSt14__shared_countILN9__gnu_cxx12_Lock_policyE2EEC2IPSt6vectorIN5boost4asio2ip20basic_resolver_entryINS7_3tcpEEESaISA_EEEET_(
      &v47,
      (int)v7);
    v8 = v46;
    v46 = 0;
    *(_DWORD *)v27 = v8;
    *(_DWORD *)(v27 + 4) = v47;
    do
      if ( (*(_DWORD *)(v4 + 4) | 8) == 10 )
      {
        v44 = 0;
        v42 = 0;
        v43 = 0;
        v40 = 0;
        v41 = 0;
        v37 = 2;
        v38 = 0;
        v39 = 0;
        v9 = *(_DWORD *)(v4 + 16);
        if ( v9 >= 0x81 )
        {
          v22 = sub_21B09F0();
          LODWORD(v48) = 22;
          v49 = v22;
          j_boost::asio::detail::do_throw_error(&v48);
        }
        j___aeabi_memcpy_1((int)&v37, *(_DWORD *)(v4 + 24), v9);
        v10 = *(_DWORD *)v27;
        v28 = *(_DWORD *)&v37;
        v29 = v39;
        v30 = v40;
        v31 = v41;
        v32 = v42;
        v33 = v43;
        v34 = v44;
        sub_21E8AF4((int *)&v35, &v45);
        sub_21E8AF4((int *)&v36, v26);
        v11 = *(_QWORD *)(v10 + 4);
        if ( (_DWORD)v11 == HIDWORD(v11) )
          j_std::vector<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>,std::allocator<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>>>::_M_emplace_back_aux<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>>(
            (unsigned __int64 *)v10,
            (int)&v28);
        else
          HIDWORD(v11) = v28;
          v12 = v29;
          v13 = v30;
          v14 = v31;
          v15 = v32;
          *(_DWORD *)(v11 + 20) = v33;
          *(_DWORD *)(v11 + 16) = v15;
          *(_DWORD *)v11 = HIDWORD(v11);
          *(_DWORD *)(v11 + 4) = v12;
          *(_DWORD *)(v11 + 8) = v13;
          *(_DWORD *)(v11 + 12) = v14;
          *(_DWORD *)(v11 + 24) = v34;
          *(_DWORD *)(v11 + 28) = v35;
          v35 = (char *)&unk_28898CC;
          *(_DWORD *)(v11 + 32) = v36;
          v36 = (char *)&unk_28898CC;
          *(_DWORD *)(v10 + 4) += 36;
        v16 = v36 - 12;
        if ( (int *)(v36 - 12) != &dword_28898C0 )
          v18 = (unsigned int *)(v36 - 4);
          __dmb();
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          if ( v19 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
        v17 = v35 - 12;
        if ( (int *)(v35 - 12) != &dword_28898C0 )
          v20 = (unsigned int *)(v35 - 4);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          if ( v21 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
      }
      v4 = *(_DWORD *)(v4 + 28);
    while ( v4 );
    v23 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v45 - 4);
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
  }
}


void *__fastcall boost::asio::detail::epoll_reactor::allocate_descriptor_state(boost::asio::detail::epoll_reactor *this)
{
  boost::asio::detail::epoll_reactor *v1; // r6@1
  pthread_mutex_t *v2; // r4@1
  void *v3; // r5@1
  int v4; // r0@5
  int v6; // [sp+4h] [bp-1Ch]@3
  void *v7; // [sp+8h] [bp-18h]@3

  v1 = this;
  v2 = (pthread_mutex_t *)((char *)this + 52);
  j_pthread_mutex_lock_1((pthread_mutex_t *)((char *)this + 52));
  v3 = (void *)*((_DWORD *)v1 + 15);
  if ( v3 )
  {
    *((_DWORD *)v1 + 15) = *((_DWORD *)v3 + 3);
  }
  else
    v3 = j_operator new(0x40u);
    *(_DWORD *)v3 = 0;
    *((_DWORD *)v3 + 1) = &boost::asio::detail::epoll_reactor::descriptor_state::do_complete;
    *((_DWORD *)v3 + 2) = 0;
    v6 = j_pthread_mutex_init_0((pthread_mutex_t *)((char *)v3 + 20), 0);
    v7 = sub_21B09F0();
    if ( v6 )
      j_boost::asio::detail::do_throw_error((unsigned __int64 *)&v6, "mutex");
    *((_DWORD *)v3 + 9) = 0;
    *((_DWORD *)v3 + 10) = 0;
    *((_DWORD *)v3 + 11) = 0;
    *((_DWORD *)v3 + 12) = 0;
    *((_DWORD *)v3 + 13) = 0;
    *((_DWORD *)v3 + 14) = 0;
  *(_QWORD *)((char *)v3 + 12) = *((_DWORD *)v1 + 14);
  v4 = *((_DWORD *)v1 + 14);
  if ( v4 )
    *(_DWORD *)(v4 + 16) = v3;
  *((_DWORD *)v1 + 14) = v3;
  j_pthread_mutex_unlock_1(v2);
  return v3;
}


int __fastcall boost::asio::detail::task_io_service::init_task(boost::asio::detail::task_io_service *this)
{
  boost::asio::detail::task_io_service *v1; // r5@1
  pthread_mutex_t *v2; // r4@1
  int result; // r0@3
  int v4; // r0@5
  int v5; // r0@5
  int *v6; // r1@5
  int v7; // r0@8
  int v8; // r0@10
  void **v9; // [sp+0h] [bp-28h]@5
  int v10; // [sp+4h] [bp-24h]@5
  struct epoll_event event; // [sp+8h] [bp-20h]@11

  v1 = this;
  v2 = (pthread_mutex_t *)((char *)this + 24);
  j_pthread_mutex_lock_1((pthread_mutex_t *)this + 1);
  if ( *((_BYTE *)v1 + 69) || *((_DWORD *)v1 + 9) )
  {
    result = j_pthread_mutex_unlock_1(v2);
  }
  else
    v4 = **((_DWORD **)v1 + 3);
    v9 = &`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::detail::epoll_reactor>;
    v10 = 0;
    *((_DWORD *)v1 + 9) = j_boost::asio::detail::service_registry::do_use_service(
                            v4,
                            (unsigned __int64 *)&v9,
                            (int (__fastcall *)(_DWORD))boost::asio::detail::service_registry::create<boost::asio::detail::epoll_reactor>);
    *((_DWORD *)v1 + 10) = 0;
    v5 = (int)v1 + 40;
    v6 = (int *)*((_DWORD *)v1 + 16);
    if ( v6 )
      *v6 = v5;
    else
      *((_DWORD *)v1 + 15) = v5;
    *((_DWORD *)v1 + 16) = v5;
    v7 = *((_DWORD *)v1 + 8) | 1;
    *((_DWORD *)v1 + 8) = v7;
    if ( v7 == 1 )
    {
      if ( !*((_BYTE *)v1 + 52) )
      {
        v8 = *((_DWORD *)v1 + 9);
        if ( v8 )
        {
          *((_BYTE *)v1 + 52) = 1;
          *(&event.events + 1) = qword_260F9EC;
          event.events = -2147483639;
          event.data.u64 = (unsigned int)(v8 + 28);
          j_epoll_ctl(*(_DWORD *)(v8 + 36), 3, *(_DWORD *)(v8 + 28), &event);
        }
      }
      result = j_pthread_mutex_unlock_1(v2);
    }
      j_pthread_mutex_unlock_1(v2);
      result = j_pthread_cond_signal_0((pthread_cond_t *)((char *)v1 + 28));
  return result;
}


int __fastcall boost::asio::detail::task_io_service::run(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1
  void *v4; // r0@1
  int v5; // r0@1
  int v6; // r4@2
  int i; // r6@11
  void (__fastcall *v8)(_DWORD, int, int *, _DWORD); // r5@14
  pthread_mutex_t *mutex; // [sp+4h] [bp-4Ch]@2
  char v11; // [sp+8h] [bp-48h]@2
  int pointer; // [sp+Ch] [bp-44h]@2
  void *v13; // [sp+10h] [bp-40h]@2
  void *v14; // [sp+14h] [bp-3Ch]@2
  void *ptr; // [sp+18h] [bp-38h]@2
  int v16; // [sp+1Ch] [bp-34h]@2
  int v17; // [sp+20h] [bp-30h]@2
  int v18; // [sp+24h] [bp-2Ch]@2

  v2 = a2;
  v3 = a1;
  v4 = sub_21B09F0();
  *(_DWORD *)v2 = 0;
  *(_DWORD *)(v2 + 4) = v4;
  v5 = *(_DWORD *)(v3 + 56);
  __dmb();
  if ( v5 )
  {
    v17 = 0;
    v18 = 0;
    ptr = 0;
    v16 = 0;
    pointer = v3;
    v13 = &ptr;
    v14 = j_pthread_getspecific_1(boost::asio::detail::call_stack<boost::asio::detail::task_io_service,boost::asio::detail::task_io_service_thread_info>::top_);
    j_pthread_setspecific_1(
      boost::asio::detail::call_stack<boost::asio::detail::task_io_service,boost::asio::detail::task_io_service_thread_info>::top_,
      &pointer);
    mutex = (pthread_mutex_t *)(v3 + 24);
    j_pthread_mutex_lock_1((pthread_mutex_t *)(v3 + 24));
    v6 = 0;
    v11 = 1;
    while ( j_boost::asio::detail::task_io_service::do_run_one(v3, (int)&mutex, (int)&ptr, v2) )
    {
      if ( v6 != -1 )
        ++v6;
      if ( !v11 )
      {
        j_pthread_mutex_lock_1(mutex);
        v11 = 1;
      }
    }
    if ( v11 )
      j_pthread_mutex_unlock_1(mutex);
      v14);
    for ( i = v16; v16; i = v16 )
      v16 = *(_DWORD *)i;
      if ( !v16 )
        v17 = 0;
      *(_DWORD *)i = 0;
      v8 = *(void (__fastcall **)(_DWORD, int, int *, _DWORD))(i + 4);
      pointer = 0;
      v13 = sub_21B09F0();
      v8(0, i, &pointer, 0);
    if ( ptr )
      j_operator delete(ptr);
  }
  else
    j_boost::asio::detail::task_io_service::stop((boost::asio::detail::task_io_service *)v3);
  return v6;
}


const char *__fastcall boost::asio::detail::socket_ops::inet_ntop(int a1, _BYTE *a2, char *a3, socklen_t a4, int a5, int a6)
{
  int v6; // r6@1
  char *v7; // r9@1
  _BYTE *v8; // r7@1
  const char *v9; // r10@1
  int v10; // r4@1
  void *v11; // r0@1
  signed int v12; // r0@4
  int v13; // r1@4
  signed int v14; // r1@5
  void *v15; // r0@9
  bool v16; // zf@10
  signed int v18; // [sp+0h] [bp-38h]@4
  int v19; // [sp+4h] [bp-34h]@4
  int v20; // [sp+8h] [bp-30h]@4
  int v21; // [sp+Ch] [bp-2Ch]@4
  char v22; // [sp+10h] [bp-28h]@4
  RakNet *v23; // [sp+14h] [bp-24h]@1

  v6 = a1;
  v7 = a3;
  v8 = a2;
  v23 = _stack_chk_guard;
  *(_DWORD *)j___errno_0((int)_stack_chk_guard) = 0;
  v9 = j_inet_ntop(a1, a2, a3, a4);
  v10 = *(_DWORD *)j___errno_0((int)v9);
  v11 = sub_21B09F0();
  *(_DWORD *)a6 = v10;
  *(_DWORD *)(a6 + 4) = v11;
  if ( v9 )
  {
    if ( v6 == 10 && a5 )
    {
      v20 = 0;
      v21 = 0;
      v18 = 37;
      v19 = 0;
      v22 = 0;
      v12 = 0;
      v13 = *v8;
      if ( v13 == 255 )
      {
        v14 = 0;
        if ( (v8[1] & 0xF) == 2 )
          v14 = 1;
      }
      else
        v16 = v13 == 254;
        if ( v16 )
        {
          v14 = 0;
          v12 = 0;
          if ( (v8[1] & 0xC0) == 128 )
            v12 = 1;
        }
      if ( !v12 && v14 != 1 || !j_if_indextoname_0() )
        j_sprintf_0((char *)((unsigned int)&v18 | 1), "%lu", a5);
      j_strcat_0(v7, (const char *)&v18);
    }
  }
  else if ( !v10 )
    v15 = sub_21B09F0();
    *(_DWORD *)a6 = 22;
    *(_DWORD *)(a6 + 4) = v15;
  if ( _stack_chk_guard != v23 )
    j___stack_chk_fail_1(_stack_chk_guard - v23);
  return v9;
}


signed int __fastcall boost::asio::detail::reactive_socket_recv_op_base<boost::asio::mutable_buffers_1>::do_perform(int a1)
{
  __int64 v2; // [sp+Ch] [bp-14h]@1
  int v3; // [sp+14h] [bp-Ch]@1

  v2 = *(_QWORD *)(a1 + 36);
  v3 = *(_DWORD *)(a1 + 40);
  return j_boost::asio::detail::socket_ops::non_blocking_recv(
           *(_DWORD *)(a1 + 28),
           (int)&v2,
           1,
           *(_DWORD *)(a1 + 44),
           (void *)((*(_BYTE *)(a1 + 32) & 0x10u) >> 4),
           a1 + 12,
           (int *)(a1 + 20));
}


_DWORD *__fastcall boost::detail::add_thread_exit_function(boost::detail *a1)
{
  boost::detail *v1; // r4@1
  _BYTE *v2; // r5@1
  _DWORD *result; // r0@1
  int v4; // r1@1

  v1 = a1;
  v2 = sub_21A9ED0(a1);
  result = j_operator new(8u);
  v4 = *((_DWORD *)v2 + 13);
  *result = v1;
  result[1] = v4;
  *((_DWORD *)v2 + 13) = result;
  return result;
}


int __fastcall boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::~timer_queue(int a1)
{
  int v1; // r4@1
  void *v2; // r0@1

  v1 = a1;
  *(_DWORD *)a1 = &off_276C718;
  *(_DWORD *)(a1 + 8) = &off_276C76C;
  v2 = *(void **)(a1 + 20);
  if ( v2 )
    j_operator delete(v2);
  return v1;
}


boost::asio::detail::epoll_reactor::descriptor_state *__fastcall boost::asio::detail::epoll_reactor::deregister_descriptor(boost::asio::detail::epoll_reactor *this, int a2, boost::asio::detail::epoll_reactor::descriptor_state **a3, int a4)
{
  boost::asio::detail::epoll_reactor::descriptor_state **v4; // r5@1
  boost::asio::detail::epoll_reactor *v5; // r9@1
  boost::asio::detail::epoll_reactor::descriptor_state *result; // r0@1
  int v7; // r4@1
  int v8; // r7@1
  pthread_mutex_t *v9; // r8@2
  boost::asio::detail::epoll_reactor::descriptor_state *v10; // r0@2
  int v11; // r6@6
  int *v12; // r4@7
  void *v13; // r0@8
  boost::asio::detail::epoll_reactor::descriptor_state *v14; // r1@8
  int *v15; // r0@8
  int v16; // r2@9
  int v17; // r6@18
  void *v18; // r0@19
  boost::asio::detail::epoll_reactor::descriptor_state *v19; // r1@19
  int *v20; // r0@19
  int v21; // r2@20
  int v22; // r7@27
  void *v23; // r0@28
  boost::asio::detail::epoll_reactor::descriptor_state *v24; // r1@28
  int *v25; // r0@28
  int v26; // r2@29
  boost::asio::detail::epoll_reactor::descriptor_state *v27; // r6@36
  int v28; // r0@38
  int v29; // r0@40
  int v30; // r5@42
  int v31; // r7@43
  void (__fastcall *v32)(_DWORD, int, int *, _DWORD); // r4@45
  int v33; // [sp+0h] [bp-48h]@6
  int v34; // [sp+4h] [bp-44h]@6
  struct epoll_event event; // [sp+8h] [bp-40h]@5
  int v36; // [sp+1Ch] [bp-2Ch]@45
  void *v37; // [sp+20h] [bp-28h]@45

  v4 = a3;
  v5 = this;
  result = *a3;
  v7 = a4;
  v8 = a2;
  if ( *a3 )
  {
    v9 = (pthread_mutex_t *)((char *)result + 20);
    j_pthread_mutex_lock_1((pthread_mutex_t *)((char *)result + 20));
    v10 = *v4;
    if ( *((_BYTE *)*v4 + 60) )
    {
      result = (boost::asio::detail::epoll_reactor::descriptor_state *)j_pthread_mutex_unlock_1(v9);
    }
    else
      if ( !v7 )
      {
        HIDWORD(event.data.u64) = 0;
        event.events = 0;
        *(_QWORD *)(&event.events + 1) = qword_260F9EC;
        j_epoll_ctl(*((_DWORD *)v5 + 9), 2, v8, &event);
        v10 = *v4;
      }
      v33 = 0;
      v34 = 0;
      v11 = *((_DWORD *)v10 + 9);
      if ( v11 )
        v12 = 0;
        do
        {
          v13 = sub_21B09F0();
          *(_DWORD *)(v11 + 12) = 125;
          *(_DWORD *)(v11 + 16) = v13;
          v14 = *v4;
          v15 = (int *)*((_DWORD *)*v4 + 9);
          if ( v15 )
          {
            v16 = *v15;
            *((_DWORD *)v14 + 9) = *v15;
            if ( !v16 )
              *((_DWORD *)v14 + 10) = 0;
            *v15 = 0;
          }
          *(_DWORD *)v11 = 0;
          if ( v12 )
            *v12 = v11;
            v34 = v11;
          else
            v33 = v11;
          v10 = *v4;
          v12 = (int *)v11;
          v11 = *((_DWORD *)*v4 + 9);
        }
        while ( *((_DWORD *)*v4 + 9) );
      else
      v17 = *((_DWORD *)v10 + 11);
      if ( v17 )
          v18 = sub_21B09F0();
          *(_DWORD *)(v17 + 12) = 125;
          *(_DWORD *)(v17 + 16) = v18;
          v19 = *v4;
          v20 = (int *)*((_DWORD *)*v4 + 11);
          if ( v20 )
            v21 = *v20;
            *((_DWORD *)v19 + 11) = *v20;
            if ( !v21 )
              *((_DWORD *)v19 + 12) = 0;
            *v20 = 0;
          *(_DWORD *)v17 = 0;
            *v12 = v17;
            v34 = v17;
            v33 = v17;
          v12 = (int *)v17;
          v17 = *((_DWORD *)*v4 + 11);
        while ( *((_DWORD *)*v4 + 11) );
      v22 = *((_DWORD *)v10 + 13);
      if ( v22 )
          v23 = sub_21B09F0();
          *(_DWORD *)(v22 + 12) = 125;
          *(_DWORD *)(v22 + 16) = v23;
          v24 = *v4;
          v25 = (int *)*((_DWORD *)*v4 + 13);
          if ( v25 )
            v26 = *v25;
            *((_DWORD *)v24 + 13) = *v25;
            if ( !v26 )
              *((_DWORD *)v24 + 14) = 0;
            *v25 = 0;
          *(_DWORD *)v22 = 0;
            *v12 = v22;
            v34 = v22;
            v33 = v22;
          v12 = (int *)v22;
          v22 = *((_DWORD *)*v4 + 13);
        while ( *((_DWORD *)*v4 + 13) );
      *((_DWORD *)v10 + 7) = -1;
      *((_BYTE *)*v4 + 60) = 1;
      j_pthread_mutex_unlock_1(v9);
      v27 = *v4;
      j_pthread_mutex_lock_1((pthread_mutex_t *)((char *)v5 + 52));
      if ( *((boost::asio::detail::epoll_reactor::descriptor_state **)v5 + 14) == v27 )
        *((_DWORD *)v5 + 14) = *((_DWORD *)v27 + 3);
      v28 = *((_DWORD *)v27 + 4);
      if ( v28 )
        *(_DWORD *)(v28 + 12) = *((_DWORD *)v27 + 3);
      v29 = *((_DWORD *)v27 + 3);
      if ( v29 )
        *(_DWORD *)(v29 + 16) = *((_DWORD *)v27 + 4);
      *((_DWORD *)v27 + 3) = *((_DWORD *)v5 + 15);
      *((_DWORD *)v27 + 4) = 0;
      *((_DWORD *)v5 + 15) = v27;
      j_pthread_mutex_unlock_1((pthread_mutex_t *)((char *)v5 + 52));
      *v4 = 0;
      result = (boost::asio::detail::epoll_reactor::descriptor_state *)j_boost::asio::detail::task_io_service::post_deferred_completions(
                                                                         *((_DWORD *)v5 + 5),
                                                                         &v33);
      v30 = v33;
      if ( v33 )
          v31 = *(_DWORD *)v30;
          if ( !*(_DWORD *)v30 )
            v34 = 0;
          *(_DWORD *)v30 = 0;
          v32 = *(void (__fastcall **)(_DWORD, int, int *, _DWORD))(v30 + 4);
          v36 = 0;
          v37 = sub_21B09F0();
          v32(0, v30, &v36, 0);
          v30 = v31;
        while ( v31 );
        result = 0;
  }
  return result;
}


int __fastcall boost::asio::detail::wait_handler<web::http::client::details::asio_connection_pool::start_epoch_interval(std::shared_ptr<web::http::client::details::asio_connection_pool> const&)::{lambda(boost::system::error_code const&)#1}>::do_complete(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  __int64 *v4; // r0@1
  int v5; // r1@1
  unsigned int *v6; // r1@2
  unsigned int v7; // r2@3
  int v8; // r0@5
  unsigned int *v9; // r1@6
  unsigned int v10; // r2@7
  unsigned int v11; // r2@12
  int result; // r0@14
  unsigned int *v13; // r1@15
  unsigned int v14; // r2@16
  int v15; // [sp+4h] [bp-24h]@11
  int v16; // [sp+8h] [bp-20h]@1
  int v17; // [sp+Ch] [bp-1Ch]@1
  __int64 v18; // [sp+10h] [bp-18h]@5

  v2 = a2;
  v3 = a1;
  v16 = *(_DWORD *)(a2 + 20);
  v4 = (__int64 *)(a2 + 12);
  v5 = *(_DWORD *)(a2 + 24);
  v17 = v5;
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 8);
    __dmb();
    do
      v7 = __ldrex(v6);
    while ( __strex(v7 + 1, v6) );
  }
  v18 = *v4;
  v8 = *(_DWORD *)(v2 + 24);
  if ( v8 )
    v9 = (unsigned int *)(v8 + 8);
      v10 = __ldrex(v9);
    while ( __strex(v10 - 1, v9) );
    if ( v10 == 1 )
      (*(void (**)(void))(*(_DWORD *)v8 + 12))();
  j_boost::asio::asio_handler_deallocate((boost::asio *)v2, (void *)0x1C, (unsigned int)&v16);
  if ( v3 )
    v15 = 0;
      v11 = __ldrex((unsigned int *)&v15);
    while ( __strex(1u, (unsigned int *)&v15) );
    j_boost::asio::asio_handler_invoke<boost::asio::detail::binder1<web::http::client::details::asio_connection_pool::start_epoch_interval(std::shared_ptr<web::http::client::details::asio_connection_pool> const&)::{lambda(boost::system::error_code const&)#1},boost::system::error_code>>((int)&v16);
  result = v17;
  if ( v17 )
    v13 = (unsigned int *)(v17 + 8);
      v14 = __ldrex(v13);
    while ( __strex(v14 - 1, v13) );
    if ( v14 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::expires_from_now(unsigned int a1, int a2, unsigned __int64 *a3, int a4)
{
  unsigned int v4; // r10@1
  int v5; // r9@1
  int v6; // r8@1
  unsigned __int64 *v7; // r7@1
  __int64 v8; // r2@1
  signed int v9; // r7@1
  signed int v10; // r4@6
  signed int v11; // r7@6
  bool v12; // zf@6
  bool v13; // zf@9
  signed int v14; // r7@14
  int v15; // r6@21
  bool v16; // zf@21
  signed int v17; // r7@26
  int v18; // r6@38
  void *v19; // r0@38
  void *v20; // r0@40
  __int64 v22; // [sp+0h] [bp-28h]@1

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  j_boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(
    (int)&v22,
    (int (__fastcall *)(__time_t *, char *))boost::date_time::c_time::gmtime);
  LODWORD(v8) = *v7 >> 32;
  HIDWORD(v8) = *v7;
  v9 = 0;
  if ( (unsigned int)(v22 + 2) < 3 )
    v9 = 1;
  if ( (unsigned __int64)(v22 - 9223372036854775806LL) >> 32 )
    v9 = 0;
  if ( !v9 )
  {
    v14 = 0;
    if ( (unsigned int)(HIDWORD(v8) + 2) < 3 )
      v14 = 1;
    if ( (__PAIR__((unsigned int)v8, HIDWORD(v8)) - 9223372036854775806LL) >> 32 )
      v14 = 0;
    if ( !v14 )
    {
LABEL_36:
      v11 = (v22 + __PAIR__((unsigned int)v8, HIDWORD(v8))) >> 32;
      v10 = v22 + HIDWORD(v8);
      goto LABEL_37;
    }
    v10 = -2;
    v11 = 0x7FFFFFFF;
    if ( v8 == -6442450945LL )
LABEL_26:
    v17 = 0;
    if ( (unsigned int)(v22 + 1) < 2 )
      v17 = 1;
    if ( (unsigned __int64)(v22 - 0x7FFFFFFFFFFFFFFFLL) >> 32 )
      v17 = 0;
    if ( v17 )
      v11 = HIDWORD(v22);
      v10 = v22;
    if ( !((unsigned int)v8 ^ 0x7FFFFFFF | ~HIDWORD(v8)) )
      v10 = -1;
    if ( v8 == 0x80000000LL )
      v11 = 2147483648;
      v10 = 0;
    goto LABEL_36;
  }
  v10 = -2;
  v11 = 0x7FFFFFFF;
  v12 = v8 == -6442450945LL;
  if ( v8 != -6442450945LL )
    v12 = __PAIR__(v22, HIDWORD(v22)) == -6442450945LL;
  if ( !v12 )
    v13 = v8 == 0x80000000LL;
      v13 = (HIDWORD(v22) ^ 0x7FFFFFFF | ~(_DWORD)v22) == 0;
    if ( v13 )
      v10 = -2;
    v15 = v8 ^ 0x7FFFFFFF | ~HIDWORD(v8);
    v16 = v15 == 0;
    if ( !v15 )
      v16 = __PAIR__(v22, HIDWORD(v22)) == 0x80000000LL;
    if ( v16 )
    goto LABEL_26;
LABEL_37:
  if ( *(_BYTE *)(v5 + 8) )
    v18 = j_boost::asio::detail::epoll_reactor::cancel_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
            *(_DWORD *)(v4 + 32),
            v4,
            v5 + 12,
            -1);
    *(_BYTE *)(v5 + 8) = 0;
    v19 = sub_21B09F0();
    *(_DWORD *)v6 = 0;
  else
    v18 = 0;
  *(_DWORD *)(v6 + 4) = v19;
  *(_DWORD *)v5 = v10;
  *(_DWORD *)(v5 + 4) = v11;
  v20 = sub_21B09F0();
  *(_DWORD *)v6 = 0;
  *(_DWORD *)(v6 + 4) = v20;
  return v18;
}


void __fastcall boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::~timer_queue(int a1)
{
  void *v1; // r4@1
  void *v2; // r0@1

  v1 = (void *)a1;
  *(_DWORD *)a1 = &off_276C76C;
  v2 = *(void **)(a1 + 12);
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_8(v1);
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::bad_cast>>::clone_impl(int a1, int a2)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::bad_cast>>::clone_impl(
           a1,
           a2);
}


signed int __fastcall boost::asio::ssl::detail::verify_callback<web::http::client::details::asio_context::write_request(void)::{lambda(bool,boost::asio::ssl::verify_context &)#1}>::call(int a1, int a2, int *a3)
{
  return boost::asio::ssl::detail::verify_callback<web::http::client::details::asio_context::write_request(void)::{lambda(bool,boost::asio::ssl::verify_context &)#1}>::call(
           a1,
           a2,
           a3);
}


void __fastcall boost::gregorian::bad_year::~bad_year(boost::gregorian::bad_year *this)
{
  boost::gregorian::bad_year::~bad_year(this);
}


boost::asio::io_service *__fastcall boost::asio::io_service::~io_service(boost::asio::io_service *this)
{
  boost::asio::io_service *v1; // r5@1
  int v2; // r4@1
  int v3; // r6@2
  int v4; // r0@4
  int v5; // r6@5

  v1 = this;
  v2 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    v3 = *(_DWORD *)(v2 + 12);
    if ( v3 )
    {
      do
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
        v3 = *(_DWORD *)(v3 + 16);
      }
      while ( v3 );
      v4 = *(_DWORD *)(v2 + 12);
      if ( v4 )
        do
        {
          v5 = *(_DWORD *)(v4 + 16);
          (*(void (**)(void))(*(_DWORD *)v4 + 4))();
          v4 = v5;
          *(_DWORD *)(v2 + 12) = v5;
        }
        while ( v5 );
    }
    j_pthread_mutex_destroy_0((pthread_mutex_t *)(v2 + 4));
    j_operator delete((void *)v2);
  }
  return v1;
}


void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::~clone_impl(int a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::~clone_impl(a1);
}


void __fastcall boost::asio::detail::task_io_service::~task_io_service(boost::asio::detail::task_io_service *this)
{
  boost::asio::detail::task_io_service::~task_io_service(this);
}


void __fastcall __noreturn boost::asio::detail::do_throw_error(unsigned __int64 *a1, const char *a2)
{
  int v2; // r0@1
  int v3; // [sp+0h] [bp-28h]@1

  v2 = sub_BC4920((int)&v3, *a1, *a1 >> 32, a2);
  boost::throw_exception<boost::system::system_error>(v2);
}


void __fastcall boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector(int a1)
{
  boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector(a1);
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(int a1, int a2)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(
           a1,
           a2);
}


_DWORD *__fastcall boost::asio::detail::service_registry::create<boost::asio::stream_socket_service<boost::asio::ip::tcp>>(int *a1)
{
  int *v1; // r5@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r4@1
  int v4; // r0@1
  int v5; // r0@1
  void **v7; // [sp+0h] [bp-18h]@1
  int v8; // [sp+4h] [bp-14h]@1

  v1 = a1;
  v2 = j_operator new(0x18u);
  v3 = v2;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = v1;
  v2[4] = 0;
  *v2 = &off_276C804;
  v4 = *v1;
  v7 = &`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::detail::epoll_reactor>;
  v8 = 0;
  v5 = j_boost::asio::detail::service_registry::do_use_service(
         v4,
         (unsigned __int64 *)&v7,
         (int (__fastcall *)(_DWORD))boost::asio::detail::service_registry::create<boost::asio::detail::epoll_reactor>);
  v3[5] = v5;
  j_boost::asio::detail::task_io_service::init_task(*(boost::asio::detail::task_io_service **)(v5 + 20));
  return v3;
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r3@3
  int v6; // r6@3
  int v7; // r0@3

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 28) = &off_26D61AC;
  *(_DWORD *)a1 = &off_2773868;
  sub_21E8AF4((int *)(a1 + 4), (int *)(a2 + 4));
  *(_DWORD *)v2 = &off_276C680;
  *(_DWORD *)(v2 + 8) = &off_26D61E8;
  v4 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v2 + 12) = v4;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v5 = *(_DWORD *)(v3 + 20);
  v6 = *(_DWORD *)(v3 + 24);
  v7 = v2 + 16;
  *(_DWORD *)v7 = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v7 + 4) = v5;
  *(_DWORD *)(v7 + 8) = v6;
  *(_DWORD *)v2 = &off_276C60C;
  *(_DWORD *)(v2 + 8) = &off_276C628;
  *(_DWORD *)(v2 + 28) = &off_276C644;
  j_boost::exception_detail::copy_boost_exception(v2 + 8, v3 + 8);
  return v2;
}


boost::this_thread::disable_interruption *__fastcall boost::this_thread::disable_interruption::disable_interruption(boost::this_thread::disable_interruption *this)
{
  boost::this_thread::disable_interruption *v1; // r4@1
  _BYTE *v2; // r0@1
  boost::detail *v3; // r0@2
  boost::this_thread::disable_interruption *result; // r0@4

  v1 = this;
  v2 = j_boost::detail::get_current_thread_data(this);
  if ( v2 )
  {
    v3 = (boost::detail *)v2[112];
    *(_BYTE *)v1 = (_BYTE)v3;
    if ( v3 )
      *((_BYTE *)j_boost::detail::get_current_thread_data(v3) + 112) = 0;
    result = v1;
  }
  else
    *(_BYTE *)v1 = 0;
  return result;
}


int __fastcall boost::asio::ssl::rfc2818_verification::operator()(const char **a1, int a2, int *a3)
{
  const char **v3; // r4@1
  int *v4; // r5@1
  int result; // r0@3
  int v6; // r11@4
  int v7; // r10@4
  signed int *v8; // r6@4
  int v9; // r5@5
  signed int v10; // r8@5
  unsigned int v11; // r7@7
  int v12; // r0@8
  const char *v13; // r3@8
  int v14; // r1@9
  boost::asio::ssl::rfc2818_verification *v15; // r0@10
  bool v16; // zf@10
  signed int v17; // r1@15
  int v18; // r0@18
  const void *v19; // r1@19
  bool v20; // zf@21
  int v21; // r0@26
  int v22; // r0@33
  signed int v23; // r1@33
  int v24; // r0@36
  const void *v25; // r1@37
  bool v26; // zf@39
  int v27; // r0@44
  signed int **v28; // r5@50
  signed int v29; // r6@50
  int v30; // r0@51
  int v31; // r7@51
  const char *v32; // r1@51
  const char *v33; // r3@51
  boost::asio::ssl::rfc2818_verification *v34; // r0@53
  bool v35; // zf@53
  int v36; // [sp+4h] [bp-64h]@5
  char v37; // [sp+8h] [bp-60h]@4
  int v38; // [sp+Ch] [bp-5Ch]@5
  __int64 v39; // [sp+10h] [bp-58h]@26
  __int64 v40; // [sp+18h] [bp-50h]@26
  int v41; // [sp+24h] [bp-44h]@4
  void *v42; // [sp+28h] [bp-40h]@4
  void **v43; // [sp+2Ch] [bp-3Ch]@62
  __int64 v44; // [sp+30h] [bp-38h]@26
  __int64 v45; // [sp+38h] [bp-30h]@26
  RakNet *v46; // [sp+40h] [bp-28h]@1

  v3 = a1;
  v4 = a3;
  v46 = _stack_chk_guard;
  if ( a2 != 1 )
  {
LABEL_58:
    result = 0;
    goto LABEL_59;
  }
  if ( j_j_X509_STORE_CTX_get_error_depth(*a3) > 0 )
    result = 1;
  v41 = 0;
  v42 = sub_21B09F0();
  j_boost::asio::ip::address::from_string((int)&v37, *v3, (int)&v41);
  v6 = v41;
  v7 = j_j_X509_STORE_CTX_get_current_cert(*v4);
  v8 = (signed int *)j_j_X509_get_ext_d2i(v7, (char *)0x55, 0, 0);
  if ( j_j_sk_num(v8) < 1 )
LABEL_50:
    j_j_GENERAL_NAMES_free((int)v8);
    v28 = (signed int **)j_j_X509_get_subject_name(v7);
    v29 = j_j_X509_NAME_get_index_by_NID(v28, 0xDu, -1);
    if ( v29 >= 0 )
    {
      do
      {
        v30 = j_j_X509_NAME_get_entry(v28, v29);
        v31 = j_j_X509_NAME_ENTRY_get_data(v30);
        v29 = j_j_X509_NAME_get_index_by_NID(v28, 0xDu, v29);
      }
      while ( v29 > -1 );
      if ( v31 )
        v34 = *(boost::asio::ssl::rfc2818_verification **)(v31 + 8);
        v35 = v34 == 0;
        if ( v34 )
        {
          v32 = *(const char **)v31;
          v35 = *(_DWORD *)v31 == 0;
        }
        if ( !v35 && j_boost::asio::ssl::rfc2818_verification::match_pattern(v34, v32, (unsigned int)*v3, v33) )
          result = 1;
          goto LABEL_59;
    }
    goto LABEL_58;
  v9 = *(_DWORD *)&v37;
  v10 = v6;
  v36 = v38;
  if ( v6 )
    v10 = 1;
  v11 = 0;
    while ( 1 )
      v12 = j_j_sk_value((int)v8, v11);
      if ( *(_DWORD *)v12 == 2 )
        v14 = *(_DWORD *)(v12 + 4);
        if ( *(_DWORD *)(v14 + 4) == 22 )
          v15 = *(boost::asio::ssl::rfc2818_verification **)(v14 + 8);
          v16 = v15 == 0;
          if ( v15 )
          {
            v14 = *(_DWORD *)v14;
            v16 = v14 == 0;
          }
          if ( !v16
            && j_boost::asio::ssl::rfc2818_verification::match_pattern(v15, (const char *)v14, (unsigned int)*v3, v13) == 1 )
            goto LABEL_61;
      else
        v17 = 0;
        if ( *(_DWORD *)v12 != 7 )
          v17 = 1;
        if ( !(v17 | v10) )
          v18 = *(_DWORD *)(v12 + 4);
          if ( *(_DWORD *)(v18 + 4) == 4 )
            v19 = *(const void **)(v18 + 8);
            if ( v19 )
            {
              if ( v9 )
              {
                v20 = v9 == 1;
                if ( v9 == 1 )
                  v20 = *(_DWORD *)v18 == 16;
                if ( v20 )
                {
                  if ( v9 != 1 )
                    goto LABEL_62;
                  v45 = v40;
                  v44 = v39;
                  v21 = j_memcmp_1(&v44, v19, 0x10u);
LABEL_30:
                  if ( !v21 )
                    goto LABEL_61;
                  goto LABEL_31;
                }
              }
              else if ( *(_DWORD *)v18 == 4 )
                LODWORD(v44) = v36;
                v21 = 0;
                if ( v36 != *(_DWORD *)v19 )
                  v21 = 1;
                goto LABEL_30;
            }
LABEL_31:
      if ( (signed int)++v11 >= j_j_sk_num(v8) )
        goto LABEL_50;
  while ( 1 )
    v22 = j_j_sk_value((int)v8, v11);
    v23 = 0;
    if ( *(_DWORD *)v22 != 7 )
      v23 = 1;
    if ( v23 | v10 )
      goto LABEL_49;
    v24 = *(_DWORD *)(v22 + 4);
    if ( *(_DWORD *)(v24 + 4) != 4 )
    v25 = *(const void **)(v24 + 8);
    if ( !v25 )
    if ( v9 )
      break;
    if ( *(_DWORD *)v24 == 4 )
      LODWORD(v44) = v36;
      v27 = 0;
      if ( v36 != *(_DWORD *)v25 )
        v27 = 1;
      goto LABEL_48;
LABEL_49:
    if ( (signed int)++v11 >= j_j_sk_num(v8) )
      goto LABEL_50;
  v26 = v9 == 1;
  if ( v9 == 1 )
    v26 = *(_DWORD *)v24 == 16;
  if ( !v26 )
    goto LABEL_49;
  if ( v9 != 1 )
LABEL_62:
    v43 = &off_27727A8;
    j_boost::throw_exception<std::bad_cast>();
  v45 = v40;
  v44 = v39;
  v27 = j_memcmp_1(&v44, v25, 0x10u);
LABEL_48:
  if ( v27 )
LABEL_61:
  j_j_GENERAL_NAMES_free((int)v8);
  result = 1;
LABEL_59:
  if ( _stack_chk_guard != v46 )
    j___stack_chk_fail_1(result);
  return result;
}


int (__fastcall *__fastcall boost::asio::detail::socket_ops::translate_addrinfo_error(boost::asio::detail::socket_ops *this, int a2))(_DWORD)
{
  boost::asio::detail::socket_ops *v2; // r4@1
  int v3; // r5@2
  int (__fastcall *result)(_DWORD); // r0@2
  char v5; // r0@4
  signed int v6; // r2@7
  unsigned int v7; // r1@7
  int (__fastcall **v8)(_DWORD); // r0@7
  char v9; // r0@9
  signed int v10; // r1@13
  char v11; // r0@14
  char v12; // r0@21
  char v13; // r0@25

  v2 = this;
  switch ( a2 )
  {
    case 1:
    case 7:
    case 8:
      v5 = `guard variable for'boost::asio::error::get_netdb_category(void)::instance;
      __dmb();
      if ( !(v5 & 1) )
      {
        if ( j_j___cxa_guard_acquire_1(&`guard variable for'boost::asio::error::get_netdb_category(void)::instance) )
        {
          boost::asio::error::get_netdb_category(void)::instance = &off_27630F0;
          j_j___cxa_guard_release_1(&`guard variable for'boost::asio::error::get_netdb_category(void)::instance);
        }
      }
      v6 = 1;
      v7 = 0x3FFFF7ECu;
      v8 = &GLOBAL_OFFSET_TABLE_;
      goto LABEL_29;
    case 0:
      *(_DWORD *)this = 0;
      result = (int (__fastcall *)(_DWORD))sub_21B09F0();
      *((_DWORD *)v2 + 1) = result;
      return result;
    case 2:
      v9 = `guard variable for'boost::asio::error::get_netdb_category(void)::instance;
      if ( !(v9 & 1)
        && j_j___cxa_guard_acquire_1(&`guard variable for'boost::asio::error::get_netdb_category(void)::instance) )
        boost::asio::error::get_netdb_category(void)::instance = &off_27630F0;
        j_j___cxa_guard_release_1(&`guard variable for'boost::asio::error::get_netdb_category(void)::instance);
      v6 = 2;
    case 3:
      v10 = 22;
      goto LABEL_20;
    case 4:
      v11 = `guard variable for'boost::asio::error::get_netdb_category(void)::instance;
      if ( !(v11 & 1)
      v6 = 3;
    case 5:
      v10 = 97;
    case 6:
      v10 = 12;
LABEL_20:
      *(_DWORD *)v2 = v10;
    case 9:
      v12 = `guard variable for'boost::asio::error::get_addrinfo_category(void)::instance;
      if ( !(v12 & 1)
        && j_j___cxa_guard_acquire_1(&`guard variable for'boost::asio::error::get_addrinfo_category(void)::instance) )
        boost::asio::error::get_addrinfo_category(void)::instance = &off_2763134;
        j_j___cxa_guard_release_1(&`guard variable for'boost::asio::error::get_addrinfo_category(void)::instance);
      v6 = 9;
      v7 = 0x3FFFF7EEu;
    case 10:
      v13 = `guard variable for'boost::asio::error::get_addrinfo_category(void)::instance;
      if ( !(v13 & 1)
      v6 = 10;
LABEL_29:
      result = v8[v7];
      *(_DWORD *)v2 = v6;
      break;
    default:
      v3 = *(_DWORD *)j___errno_0((int)this);
      *(_DWORD *)v2 = v3;
  }
  return result;
}


void __fastcall boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  sub_21D315C(v1);
  j_j_j__ZdlPv_8((void *)v1);
}


_DWORD *__fastcall boost::asio::detail::service_registry::create<boost::asio::socket_acceptor_service<boost::asio::ip::tcp>>(int *a1)
{
  int *v1; // r5@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r4@1
  int v4; // r0@1
  int v5; // r0@1
  void **v7; // [sp+0h] [bp-18h]@1
  int v8; // [sp+4h] [bp-14h]@1

  v1 = a1;
  v2 = j_operator new(0x18u);
  v3 = v2;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = v1;
  v2[4] = 0;
  *v2 = &off_276CE74;
  v4 = *v1;
  v7 = &`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::detail::epoll_reactor>;
  v8 = 0;
  v5 = j_boost::asio::detail::service_registry::do_use_service(
         v4,
         (unsigned __int64 *)&v7,
         (int (__fastcall *)(_DWORD))boost::asio::detail::service_registry::create<boost::asio::detail::epoll_reactor>);
  v3[5] = v5;
  j_boost::asio::detail::task_io_service::init_task(*(boost::asio::detail::task_io_service **)(v5 + 20));
  return v3;
}


_BYTE *__fastcall boost::this_thread::interruption_point(boost::this_thread *this)
{
  _BYTE *result; // r0@1
  _BYTE *v2; // r5@1
  bool v3; // zf@1
  char *v4; // r0@6
  int v5; // r3@6

  result = j_boost::detail::get_current_thread_data(this);
  v2 = result;
  v3 = result == 0;
  if ( result )
  {
    result = (_BYTE *)result[112];
    v3 = result == 0;
  }
  if ( !v3 )
    sub_1FDD0BC((pthread_mutex_t *)v2 + 1);
    if ( v2[113] )
    {
      v2[113] = 0;
      v4 = j_j___cxa_allocate_exception_1(1);
      j_j___cxa_throw_1((int)v4, (int)&`typeinfo for'boost::thread_interrupted, 0, v5);
    }
    do
      result = (_BYTE *)j_pthread_mutex_unlock_2((pthread_mutex_t *)v2 + 1);
    while ( result == (_BYTE *)4 );
  return result;
}


void __fastcall boost::asio::ssl::detail::verify_callback<web::websockets::client::details::wspp_callback_client::connect(void)::{lambda(std::weak_ptr<void>)#1}::operator() const(std::weak_ptr<void>)::{lambda(bool,boost::asio::ssl::verify_context &)#1}>::~verify_callback(void *ptr)
{
  boost::asio::ssl::detail::verify_callback<web::websockets::client::details::wspp_callback_client::connect(void)::{lambda(std::weak_ptr<void>)#1}::operator() const(std::weak_ptr<void>)::{lambda(bool,boost::asio::ssl::verify_context &)#1}>::~verify_callback(ptr);
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::clone_impl(int a1, int a2)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::clone_impl(
           a1,
           a2);
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(int a1, int a2)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(
           a1,
           a2);
}


void *__fastcall boost::asio::ssl::context::set_verify_callback<web::websockets::client::details::wspp_callback_client::connect(void)::{lambda(std::weak_ptr<void>)#1}::operator() const(std::weak_ptr<void>)::{lambda(bool,boost::asio::ssl::verify_context &)#1}>(int a1, int *a2, int a3, int a4)
{
  return boost::asio::ssl::context::set_verify_callback<web::websockets::client::details::wspp_callback_client::connect(void)::{lambda(std::weak_ptr<void>)#1}::operator() const(std::weak_ptr<void>)::{lambda(bool,boost::asio::ssl::verify_context &)#1}>(
           a1,
           a2,
           a3,
           a4);
}


void __fastcall boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::~timer_queue(int a1)
{
  boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::~timer_queue(a1);
}


int __fastcall boost::asio::asio_handler_invoke<boost::asio::detail::binder1<web::http::client::details::asio_context::timeout_timer::reset(void)::{lambda(boost::system::error_code const&)#1},boost::system::error_code>>(int a1)
{
  return j_j_j__ZN3web4http6client7details12asio_context13timeout_timer14handle_timeoutERKN5boost6system10error_codeERKSt8weak_ptrIS3_E(
           (int *)(a1 + 8),
           a1);
}


void __fastcall boost::asio::detail::resolver_service_base::fork_service(int a1, int a2)
{
  boost::asio::detail::resolver_service_base::fork_service(a1, a2);
}


int __fastcall boost::asio::ssl::detail::engine::engine(int a1, _DWORD *a2)
{
  int v2; // r4@1
  _DWORD *v3; // r0@1
  int v4; // r5@2
  char v5; // r0@2
  int v7; // [sp+0h] [bp-20h]@7
  int v8; // [sp+4h] [bp-1Ch]@5
  void *v9; // [sp+8h] [bp-18h]@5

  v2 = a1;
  v3 = j_j_SSL_new(a2);
  *(_DWORD *)v2 = v3;
  if ( !v3 )
  {
    v4 = j_j_ERR_get_error_0();
    v5 = `guard variable for'boost::asio::error::get_ssl_category(void)::instance;
    __dmb();
    if ( !(v5 & 1)
      && j_j___cxa_guard_acquire_1(&`guard variable for'boost::asio::error::get_ssl_category(void)::instance) )
    {
      boost::asio::error::get_ssl_category(void)::instance = &off_2763194;
      j_j___cxa_guard_release_1(&`guard variable for'boost::asio::error::get_ssl_category(void)::instance);
    }
    v8 = v4;
    v9 = &boost::asio::error::get_ssl_category(void)::instance;
    if ( v4 )
      j_boost::asio::detail::do_throw_error((unsigned __int64 *)&v8, "engine");
    v3 = *(_DWORD **)v2;
  }
  j_j_SSL_ctrl((int)v3, 33, 1, 0);
  j_j_SSL_ctrl(*(_DWORD *)v2, 33, 2, 0);
  j_j_SSL_ctrl(*(_DWORD *)v2, 33, 16, 0);
  v7 = 0;
  j_j_BIO_new_bio_pair(&v7, 0, (int *)(v2 + 4), 0);
  j_j_SSL_set_bio(*(_DWORD *)v2, v7, v7);
  return v2;
}


int __fastcall boost::asio::detail::task_io_service::post_deferred_completions(int a1, int *a2)
{
  int *v2; // r6@1
  int v3; // r4@1
  int result; // r0@1
  _DWORD *i; // r0@3
  int v6; // r1@8
  int *v7; // r2@9
  int v8; // r0@13
  int *v9; // r1@14
  int v10; // r0@18
  int v11; // r0@20
  int v12; // [sp+0h] [bp-20h]@21
  int v13; // [sp+4h] [bp-1Ch]@21
  int v14; // [sp+8h] [bp-18h]@21
  int v15; // [sp+Ch] [bp-14h]@21

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( *a2 )
  {
    if ( *(_BYTE *)(v3 + 20) )
    {
      for ( i = j_pthread_getspecific_1(boost::asio::detail::call_stack<boost::asio::detail::task_io_service,boost::asio::detail::task_io_service_thread_info>::top_);
            i;
            i = (_DWORD *)i[2] )
      {
        if ( *i == v3 )
        {
          result = i[1];
          if ( !result )
            break;
          v6 = *v2;
          if ( *v2 )
          {
            v7 = *(int **)(result + 8);
            if ( v7 )
              *v7 = v6;
            else
              *(_DWORD *)(result + 4) = v6;
            *(_DWORD *)(result + 8) = v2[1];
            result = 0;
            *v2 = 0;
            v2[1] = 0;
          }
          return result;
        }
      }
    }
    j_pthread_mutex_lock_1((pthread_mutex_t *)(v3 + 24));
    v8 = *v2;
    if ( *v2 )
      v9 = *(int **)(v3 + 64);
      if ( v9 )
        *v9 = v8;
      else
        *(_DWORD *)(v3 + 60) = v8;
      *(_DWORD *)(v3 + 64) = v2[1];
      *v2 = 0;
      v2[1] = 0;
    v10 = *(_DWORD *)(v3 + 32) | 1;
    *(_DWORD *)(v3 + 32) = v10;
    if ( v10 == 1 )
      if ( !*(_BYTE *)(v3 + 52) )
        v11 = *(_DWORD *)(v3 + 36);
        if ( v11 )
          *(_BYTE *)(v3 + 52) = 1;
          v15 = 0;
          v13 = qword_260F9EC;
          v12 = -2147483639;
          v14 = v11 + 28;
          j_epoll_ctl(*(_DWORD *)(v11 + 36), 3, *(_DWORD *)(v11 + 28), (struct epoll_event *)&v12);
      result = j_pthread_mutex_unlock_1((pthread_mutex_t *)(v3 + 24));
    else
      j_pthread_mutex_unlock_1((pthread_mutex_t *)(v3 + 24));
      result = j_pthread_cond_signal_0((pthread_cond_t *)(v3 + 28));
  }
  return result;
}


void *__fastcall boost::asio::detail::pipe_select_interrupter::open_descriptors(boost::asio::detail::pipe_select_interrupter *this)
{
  boost::asio::detail::pipe_select_interrupter *v1; // r4@1
  int v2; // r0@1
  int v3; // r4@2
  void *result; // r0@2
  int v5; // r0@4
  int v6; // r0@4
  int v7; // [sp+0h] [bp-18h]@2
  void *v8; // [sp+4h] [bp-14h]@2
  int pipedes; // [sp+8h] [bp-10h]@1
  int fd; // [sp+Ch] [bp-Ch]@4

  v1 = this;
  v2 = j_pipe(&pipedes);
  if ( v2 )
  {
    v3 = *(_DWORD *)j___errno_0(v2);
    result = sub_21B09F0();
    v7 = v3;
    v8 = result;
    if ( v3 )
      j_boost::asio::detail::do_throw_error((unsigned __int64 *)&v7, "pipe_select_interrupter");
  }
  else
    v5 = pipedes;
    *(_DWORD *)v1 = pipedes;
    j_fcntl_0(v5, 4, 2048);
    v6 = fd;
    *((_DWORD *)v1 + 1) = fd;
    j_fcntl_0(v6, 4, 2048);
    j_fcntl_0(*(_DWORD *)v1, 2, 1);
    result = (void *)j_fcntl_0(*((_DWORD *)v1 + 1), 2, 1);
  return result;
}


void __fastcall boost::asio::ip::resolver_service<boost::asio::ip::tcp>::fork_service(int a1, int a2)
{
  j_j_j__ZN5boost4asio6detail21resolver_service_base12fork_serviceENS0_10io_service10fork_eventE(a1 + 20, a2);
}


char *__fastcall boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::remove_timer(int a1, int a2)
{
  int v2; // r11@1
  __int64 v3; // kr00_8@1
  unsigned int v4; // r0@2
  int v5; // r2@3
  int v6; // r7@5
  int v7; // r6@5
  int v8; // ST08_4@5
  __int64 v9; // ST0C_8@5
  __int64 v10; // kr08_8@5
  int v11; // r3@5
  int v12; // r4@5
  int v13; // r12@6
  unsigned int v14; // r5@6
  unsigned int v15; // lr@6
  int v16; // r7@6
  bool v17; // cf@6
  int v18; // r5@6
  signed int v19; // r3@6
  signed int v20; // r6@8
  bool v21; // zf@8
  bool v22; // nf@8
  unsigned __int8 v23; // vf@8
  signed int v24; // r5@8
  unsigned int v25; // r5@13
  int v26; // r4@13
  signed int v27; // r3@13
  unsigned int v28; // r4@20
  int v29; // r5@20
  int v30; // r6@20
  int v31; // r7@20
  unsigned __int64 v32; // ST08_8@20
  __int64 v33; // kr18_8@20
  int v34; // r2@20
  int v35; // r2@20
  int v36; // r6@21
  int v37; // r7@21
  signed int v38; // r3@21
  bool v39; // zf@23
  signed int v40; // r7@23
  unsigned int v41; // r5@30
  int v42; // r3@31
  int v43; // r4@32
  int v44; // r7@34
  int v45; // r3@34
  signed int v46; // r6@34
  bool v47; // zf@36
  signed int v48; // r3@36
  int v49; // r8@42
  int v50; // r6@42
  int v51; // r3@42
  int v52; // r7@42
  signed int v53; // r5@42
  int v54; // r11@42
  int v55; // lr@42
  unsigned int v56; // r9@42
  signed int v57; // r2@42
  int v58; // ST10_4@49 OVERLAPPED
  int v59; // ST14_4@49
  unsigned __int64 v60; // ST08_8@49 OVERLAPPED
  unsigned int v61; // r2@49
  unsigned int v62; // r5@49
  int v63; // r0@49
  signed int v64; // r0@49
  int v65; // r0@53
  int v66; // r0@55
  char *result; // r0@57
  int v68; // [sp+4h] [bp-3Ch]@1
  RakNet *v69; // [sp+18h] [bp-28h]@1

  v2 = a1;
  v68 = a1;
  v69 = _stack_chk_guard;
  v3 = *(_QWORD *)(a1 + 12);
  if ( (_DWORD)v3 == HIDWORD(v3) )
    goto LABEL_51;
  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 >= (HIDWORD(v3) - (signed int)v3) >> 4 )
  v5 = ((HIDWORD(v3) - (signed int)v3) >> 4) - 1;
  if ( v4 == v5 )
  {
    *(_DWORD *)(v2 + 16) = HIDWORD(v3) - 16;
  }
  v6 = v3 + 16 * v4;
  v7 = *(_DWORD *)(v6 + 12);
  v8 = *(_DWORD *)(v3 + 16 * v4);
  v9 = *(_QWORD *)(v6 + 4);
  v10 = *(_QWORD *)(v3 + 16 * v5 + 4);
  *(_DWORD *)(v3 + 16 * v4) = *(_DWORD *)(v3 + 16 * v5);
  *(_QWORD *)(v6 + 4) = v10;
  v11 = *(_DWORD *)(v2 + 12);
  *(_DWORD *)(v11 + 16 * v5) = v8;
  *(_QWORD *)(v11 + 16 * v5 + 4) = v9;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + 12) + 16 * v4 + 8) + 8) = v4;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + 12) + 16 * v5 + 8) + 8) = v5;
  v12 = *(_DWORD *)(v2 + 16) - 16;
  *(_DWORD *)(v2 + 16) = v12;
  if ( v4 )
    v13 = *(_DWORD *)(v2 + 12);
    v14 = (8 * v4 - 8) & 0xFFFFFFF0;
    v15 = *(_DWORD *)(v13 + 16 * v4);
    v16 = *(_DWORD *)(v13 + 16 * v4 + 4);
    v17 = v15 >= *(_DWORD *)(v13 + v14);
    v18 = *(_DWORD *)(v14 + v13 + 4);
    v19 = 0;
    if ( v17 )
      v19 = 1;
    v20 = 0;
    v23 = __OFSUB__(v16, v18);
    v21 = v16 == v18;
    v22 = v16 - v18 < 0;
    v24 = 0;
    if ( !(v22 ^ v23) )
      v24 = 1;
    if ( v21 )
      v24 = v19;
    if ( !v24 )
    {
      v25 = (v4 - 1) >> 1;
      v26 = *(_DWORD *)(v13 + 16 * v25 + 4);
      v27 = 0;
      if ( v15 >= *(_DWORD *)(v13 + 16 * v25) )
        v27 = 1;
      if ( v16 >= v26 )
        v20 = 1;
      if ( v16 == v26 )
        v20 = v27;
      if ( !v20 )
      {
        do
        {
          v28 = v25;
          v29 = v13 + 16 * v4;
          v30 = *(_QWORD *)(v29 + 4) >> 32;
          v31 = *(_DWORD *)(v29 + 12);
          v32 = __PAIR__(*(_QWORD *)(v29 + 4), *(_DWORD *)(v13 + 16 * v4));
          v33 = *(_QWORD *)(v13 + 16 * v28 + 4);
          *(_DWORD *)(v13 + 16 * v4) = *(_DWORD *)(v13 + 16 * v28);
          *(_QWORD *)(v29 + 4) = v33;
          v34 = *(_DWORD *)(v2 + 12);
          *(_DWORD *)(v34 + 16 * v28) = v32;
          v35 = v34 + 16 * v28;
          *(_DWORD *)(v35 + 4) = HIDWORD(v32);
          *(_DWORD *)(v35 + 8) = v30;
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + 12) + 16 * v4 + 8) + 8) = v4;
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + 12) + 16 * v28 + 8) + 8) = v28;
          if ( !v28 )
            break;
          v13 = *(_DWORD *)(v2 + 12);
          v4 = v28;
          v25 = (v28 - 1) >> 1;
          v36 = *(_DWORD *)(v13 + 16 * v28 + 4);
          v37 = *(_DWORD *)(v13 + 16 * v25 + 4);
          v38 = 0;
          if ( *(_DWORD *)(v13 + 16 * v28) < *(_DWORD *)(v13 + 16 * v25) )
            v38 = 1;
          v23 = __OFSUB__(v36, v37);
          v39 = v36 == v37;
          v22 = v36 - v37 < 0;
          v40 = 0;
          if ( v22 ^ v23 )
            v40 = 1;
          if ( v39 )
            v40 = v38;
        }
        while ( v40 );
      }
      goto LABEL_51;
    }
  else
  v41 = 2 * v4 | 1;
  if ( v41 < (v12 - v13) >> 4 )
    v42 = (v12 - v13) >> 4;
    do
      v43 = v41 + 1;
      if ( v41 + 1 == v42 )
        v43 = v41;
      else
        v44 = *(_DWORD *)(v13 + 16 * v43 + 4);
        v45 = *(_DWORD *)(v13 + 16 * v41 + 4);
        v46 = 0;
        if ( *(_DWORD *)(v13 + 16 * v41) < *(_DWORD *)(v13 + 16 * v43) )
          v46 = 1;
        v23 = __OFSUB__(v45, v44);
        v47 = v45 == v44;
        v22 = v45 - v44 < 0;
        v48 = 0;
        if ( v22 ^ v23 )
          v48 = 1;
        if ( v47 )
          v48 = v46;
        if ( v48 )
          v43 = v41;
      v49 = 16 * v43;
      v50 = 16 * v4;
      v51 = v13 + 16 * v43;
      v52 = v13 + 16 * v4;
      v53 = 0;
      v54 = *(_DWORD *)(v51 + 4);
      v55 = *(_DWORD *)(v52 + 4);
      v56 = v4;
      v57 = 0;
      if ( *(_DWORD *)(v13 + 16 * v4) < *(_DWORD *)(v13 + 16 * v43) )
        v57 = 1;
      if ( v55 < v54 )
        v53 = 1;
      if ( v55 == v54 )
        v53 = v57;
      v2 = v68;
      if ( v53 )
        break;
      v58 = *(_QWORD *)(v52 + 4) >> 32;
      v59 = *(_DWORD *)(v52 + 12);
      v60 = __PAIR__(*(_QWORD *)(v52 + 4), *(_DWORD *)(v13 + v50));
      v61 = *(_QWORD *)(v51 + 4) >> 32;
      v62 = *(_QWORD *)(v51 + 4);
      *(_DWORD *)(v13 + v50) = *(_DWORD *)(v13 + v49);
      *(_QWORD *)(v52 + 4) = __PAIR__(v61, v62);
      v63 = *(_DWORD *)(v68 + 12);
      *(_DWORD *)(v63 + v49) = v60;
      *(_QWORD *)(v63 + 16 * v43 + 4) = *(_QWORD *)(&v58 - 1);
      v41 = 2 * v43 | 1;
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v68 + 12) + 16 * v56 + 8) + 8) = v56;
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v68 + 12) + 16 * v43 + 8) + 8) = v43;
      v13 = *(_QWORD *)(v68 + 12);
      v64 = (*(_QWORD *)(v68 + 12) >> 32) - v13;
      v42 = v64 >> 4;
      v17 = v41 >= v64 >> 4;
      v4 = v43;
    while ( !v17 );
LABEL_51:
  if ( *(_DWORD *)(v2 + 8) == a2 )
    *(_DWORD *)(v2 + 8) = *(_DWORD *)(a2 + 12);
  v65 = *(_DWORD *)(a2 + 16);
  if ( v65 )
    *(_DWORD *)(v65 + 12) = *(_DWORD *)(a2 + 12);
  v66 = *(_DWORD *)(a2 + 12);
  if ( v66 )
    *(_DWORD *)(v66 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  result = (char *)(_stack_chk_guard - v69);
  if ( _stack_chk_guard != v69 )
    j___stack_chk_fail_1((int)result);
  return result;
}


int __fastcall boost::asio::detail::socket_ops::close(int a1, _BYTE *a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  _BYTE *v6; // r8@1
  int v7; // r0@4
  int v8; // r7@4
  int v9; // r0@4
  int v10; // r7@6
  int v11; // r6@6
  void *v12; // r0@6
  _DWORD *v13; // r6@6
  void *v14; // r0@7
  void *v15; // r1@7
  bool v16; // zf@7
  void *v17; // r0@10
  void *v18; // r1@10
  bool v19; // zf@10
  int v20; // r0@14
  int v21; // r5@14
  void *v22; // r0@14
  void *v23; // r0@17
  int v25; // [sp+4h] [bp-24h]@14
  int optval; // [sp+8h] [bp-20h]@4
  int v27; // [sp+Ch] [bp-1Ch]@4

  v4 = a1;
  v5 = a4;
  v6 = a2;
  if ( a1 == -1 )
  {
    v13 = (_DWORD *)(a4 + 4);
LABEL_17:
    v23 = sub_21B09F0();
    v10 = 0;
    *(_DWORD *)v5 = 0;
    *v13 = v23;
    return v10;
  }
  if ( a3 == 1 )
    a1 = *a2;
    if ( a1 & 8 )
    {
      optval = 0;
      v27 = 0;
      sub_21B09F0();
      v7 = *v6 | 8;
      *v6 = v7;
      *(_DWORD *)j___errno_0(v7) = 0;
      v8 = j_setsockopt_0(v4, 1, 13, &optval, 8u);
      v9 = *(_DWORD *)j___errno_0(v8);
      a1 = (int)sub_21B09F0();
      if ( !v8 )
        a1 = (int)sub_21B09F0();
    }
  *(_DWORD *)j___errno_0(a1) = 0;
  v10 = j_close_0(v4);
  v11 = *(_DWORD *)j___errno_0(v10);
  v12 = sub_21B09F0();
  *(_DWORD *)v5 = v11;
  *(_DWORD *)(v5 + 4) = v12;
  v13 = (_DWORD *)(v5 + 4);
  if ( !v10 )
    goto LABEL_17;
  v14 = sub_21B09F0();
  v15 = *(void **)(v5 + 4);
  v16 = v15 == v14;
  if ( v15 == v14 )
    v16 = *(_DWORD *)v5 == 11;
  if ( v16 )
    goto LABEL_21;
  v17 = sub_21B09F0();
  v18 = *(void **)(v5 + 4);
  v19 = v18 == v17;
  if ( v18 == v17 )
    v19 = *(_DWORD *)v5 == 11;
  if ( v19 )
LABEL_21:
    v25 = 0;
    j_ioctl_0(v4, 0x5421u, &v25);
    v20 = *v6 & 0xFC;
    *v6 = v20;
    *(_DWORD *)j___errno_0(v20) = 0;
    v10 = j_close_0(v4);
    v21 = *(_DWORD *)j___errno_0(v10);
    v22 = sub_21B09F0();
    *(_DWORD *)v5 = v21;
    *(_DWORD *)(v5 + 4) = v22;
    if ( !v10 )
      goto LABEL_17;
  return v10;
}


int __fastcall boost::asio::detail::epoll_reactor::fork_service(int result, int a2)
{
  int v2; // r4@1
  boost::asio::detail::epoll_reactor *v3; // r0@2
  int v4; // r0@4
  int v5; // r0@6
  int v6; // r0@8
  int v7; // r2@10
  int i; // r7@12
  int v9; // r0@13
  int v10; // [sp+0h] [bp-40h]@14
  void *v11; // [sp+4h] [bp-3Ch]@14
  struct epoll_event event; // [sp+8h] [bp-38h]@10
  int buf; // [sp+18h] [bp-28h]@10
  int v14; // [sp+1Ch] [bp-24h]@12
  int v15; // [sp+20h] [bp-20h]@12
  int v16; // [sp+24h] [bp-1Ch]@12

  v2 = result;
  if ( a2 == 2 )
  {
    v3 = *(boost::asio::detail::epoll_reactor **)(result + 36);
    if ( v3 != (boost::asio::detail::epoll_reactor *)-1 )
      v3 = (boost::asio::detail::epoll_reactor *)j_close_0((int)v3);
    *(_DWORD *)(v2 + 36) = -1;
    *(_DWORD *)(v2 + 36) = j_boost::asio::detail::epoll_reactor::do_epoll_create(v3);
    v4 = *(_DWORD *)(v2 + 40);
    if ( v4 != -1 )
      j_close_0(v4);
    *(_DWORD *)(v2 + 40) = -1;
    v5 = *(_DWORD *)(v2 + 28);
    if ( v5 != -1 )
      j_close_0(v5);
    v6 = *(_DWORD *)(v2 + 32);
    if ( v6 != -1 )
      j_close_0(v6);
    *(_DWORD *)(v2 + 28) = -1;
    *(_DWORD *)(v2 + 32) = -1;
    j_boost::asio::detail::pipe_select_interrupter::open_descriptors((boost::asio::detail::pipe_select_interrupter *)(v2 + 28));
    HIDWORD(event.data.u64) = 0;
    *(_QWORD *)(&event.events + 1) = qword_260F9EC;
    event.events = -2147483639;
    event.data.fd = v2 + 28;
    j_epoll_ctl(*(_DWORD *)(v2 + 36), 1, *(_DWORD *)(v2 + 28), &event);
    LOBYTE(buf) = 0;
    j_write_0(*(_DWORD *)(v2 + 32), &buf, 1u);
    v7 = *(_DWORD *)(v2 + 40);
    if ( v7 != -1 )
    {
      event.events = 9;
      event.data.fd = v2 + 40;
      j_epoll_ctl(*(_DWORD *)(v2 + 36), 1, v7, &event);
    }
    v16 = 0;
    buf = -2147483639;
    v14 = qword_260F9EC;
    v15 = v2 + 28;
    j_epoll_ctl(*(_DWORD *)(v2 + 36), 3, *(_DWORD *)(v2 + 28), (struct epoll_event *)&buf);
    j_pthread_mutex_lock_1((pthread_mutex_t *)(v2 + 52));
    for ( i = *(_DWORD *)(v2 + 56); i; i = *(_DWORD *)(i + 12) )
      event.events = *(_DWORD *)(i + 32);
      event.data.fd = i;
      v9 = j_epoll_ctl(*(_DWORD *)(v2 + 36), 1, *(_DWORD *)(i + 28), &event);
      if ( v9 )
      {
        v10 = *(_DWORD *)j___errno_0(v9);
        v11 = sub_21B09F0();
        if ( v10 )
          j_boost::asio::detail::do_throw_error((unsigned __int64 *)&v10, "epoll re-registration");
      }
    result = j_pthread_mutex_unlock_1((pthread_mutex_t *)(v2 + 52));
  }
  return result;
}


void *__fastcall boost::asio::detail::service_registry::create<boost::asio::detail::strand_service>(int a1)
{
  int v1; // r5@1
  void *v2; // r4@1
  int v4; // [sp+0h] [bp-18h]@1
  void *v5; // [sp+4h] [bp-14h]@1

  v1 = a1;
  v2 = j_operator new(0x324u);
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = 0;
  *((_DWORD *)v2 + 3) = v1;
  *((_DWORD *)v2 + 4) = 0;
  *(_DWORD *)v2 = &off_276D268;
  *((_DWORD *)v2 + 5) = *(_DWORD *)(v1 + 4);
  v4 = j_pthread_mutex_init_0((pthread_mutex_t *)v2 + 1, 0);
  v5 = sub_21B09F0();
  if ( v4 )
    j_boost::asio::detail::do_throw_error((unsigned __int64 *)&v4, "mutex");
  j___aeabi_memclr4_1((int)v2 + 28, 776);
  return v2;
}


void __fastcall boost::asio::basic_streambuf<std::allocator<char>>::~basic_streambuf(int a1)
{
  int v1; // r4@1
  void *v2; // r0@1

  v1 = a1;
  *(_DWORD *)a1 = &off_276C278;
  v2 = *(void **)(a1 + 36);
  if ( v2 )
    j_operator delete(v2);
  *(_DWORD *)v1 = &off_26D40A8;
  sub_21C802C((unsigned int **)(v1 + 28));
  j_j_j__ZdlPv_8((void *)v1);
}


void __fastcall boost::asio::detail::posix_thread::func<boost::asio::detail::resolver_service_base::work_io_service_runner>::~func(void *ptr)
{
  boost::asio::detail::posix_thread::func<boost::asio::detail::resolver_service_base::work_io_service_runner>::~func(ptr);
}


void __fastcall boost::asio::ssl::detail::verify_callback<web::http::client::details::asio_context::write_request(void)::{lambda(bool,boost::asio::ssl::verify_context &)#1}>::~verify_callback(void *ptr)
{
  void *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r2@3

  v1 = ptr;
  *(_DWORD *)ptr = &off_276C860;
  v2 = *((_DWORD *)ptr + 2);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    __dmb();
    do
      v4 = __ldrex(v3);
    while ( __strex(v4 - 1, v3) );
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  j_j_j__ZdlPv_8(v1);
}


int __fastcall boost::asio::ssl::detail::verify_callback<web::http::client::details::asio_context::write_request(void)::{lambda(bool,boost::asio::ssl::verify_context &)#1}>::~verify_callback(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r2@3

  v1 = a1;
  *(_DWORD *)a1 = &off_276C860;
  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    __dmb();
    do
      v4 = __ldrex(v3);
    while ( __strex(v4 - 1, v3) );
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  return v1;
}


int __fastcall boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r2@3
  int v6; // r3@3
  int v7; // r12@3

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_2773798;
  sub_DA73B4((int *)(a1 + 4), (int *)(a2 + 4));
  *(_DWORD *)v2 = &off_26D60C4;
  *(_QWORD *)(v2 + 8) = *(_QWORD *)(v3 + 8);
  sub_DA73B4((int *)(v2 + 16), (int *)(v3 + 16));
  *(_DWORD *)(v2 + 20) = &off_26D61E8;
  v4 = *(_DWORD *)(v3 + 24);
  *(_DWORD *)(v2 + 24) = v4;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v5 = *(_DWORD *)(v3 + 32);
  v6 = *(_DWORD *)(v3 + 36);
  v7 = v2 + 28;
  *(_DWORD *)v7 = *(_DWORD *)(v3 + 28);
  *(_DWORD *)(v7 + 4) = v5;
  *(_DWORD *)(v7 + 8) = v6;
  *(_DWORD *)v2 = &off_26D61C4;
  *(_DWORD *)(v2 + 20) = &off_26D61D8;
  return v2;
}


_DWORD *__fastcall boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  return sub_21D315C(v1);
}


signed int __fastcall boost::asio::detail::socket_ops::non_blocking_send(void *a1, int a2, int a3, int a4, int a5, int *a6)
{
  int v6; // r5@1
  int v7; // r8@1
  int v8; // r11@1
  int v9; // r7@1
  int v10; // r4@2
  int v11; // r9@2
  void *v12; // r0@2
  void *v13; // r0@3
  void *v14; // r1@4
  bool v15; // zf@4
  void *v16; // r0@7
  void *v17; // r1@7
  bool v18; // zf@7
  void *v19; // r0@10
  void *v20; // r1@10
  bool v21; // zf@10
  int v22; // r5@13
  void *v23; // r0@14
  signed int result; // r0@15
  int v25; // [sp+0h] [bp-40h]@2
  int v26; // [sp+4h] [bp-3Ch]@2
  int v27; // [sp+8h] [bp-38h]@2
  int v28; // [sp+Ch] [bp-34h]@2
  int v29; // [sp+10h] [bp-30h]@2
  int v30; // [sp+14h] [bp-2Ch]@2
  int v31; // [sp+18h] [bp-28h]@2

  v6 = a4 | 0x4000;
  v7 = a3;
  v8 = a2;
  v9 = (int)a1;
  do
  {
    *(_DWORD *)j___errno_0((int)a1) = 0;
    v31 = 0;
    v29 = 0;
    v30 = 0;
    v25 = 0;
    v26 = 0;
    v27 = v8;
    v28 = v7;
    v10 = j_sendmsg(v9, (const struct msghdr *)&v25, v6);
    v11 = *(_DWORD *)j___errno_0(v10);
    v12 = sub_21B09F0();
    *(_DWORD *)a5 = v11;
    *(_DWORD *)(a5 + 4) = v12;
    if ( v10 >= 0 )
    {
      v13 = sub_21B09F0();
      *(_DWORD *)a5 = 0;
      *(_DWORD *)(a5 + 4) = v13;
    }
    a1 = sub_21B09F0();
    v14 = *(void **)(a5 + 4);
    v15 = v14 == a1;
    if ( v14 == a1 )
      a1 = *(void **)a5;
      v15 = *(_DWORD *)a5 == 4;
  }
  while ( v15 );
  v16 = sub_21B09F0();
  v17 = *(void **)(a5 + 4);
  v18 = v17 == v16;
  if ( v17 == v16 )
    v18 = *(_DWORD *)a5 == 11;
  if ( v18 )
    goto LABEL_19;
  v19 = sub_21B09F0();
  v20 = *(void **)(a5 + 4);
  v21 = v20 == v19;
  if ( v20 == v19 )
    v21 = *(_DWORD *)a5 == 11;
  if ( v21 )
LABEL_19:
    result = 0;
  else
    v22 = 0;
      v23 = sub_21B09F0();
      *(_DWORD *)(a5 + 4) = v23;
      v22 = v10;
    *a6 = v22;
    result = 1;
  return result;
}


void __fastcall boost::exception_detail::error_info_injector<std::invalid_argument>::~error_info_injector(int a1)
{
  boost::exception_detail::error_info_injector<std::invalid_argument>::~error_info_injector(a1);
}


char *__fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::clone(int a1)
{
  int v1; // r5@1
  char *v2; // r0@1
  char *v3; // r4@1

  v1 = a1;
  v2 = (char *)operator new(0x2Cu);
  v3 = v2;
  *((_DWORD *)v2 + 10) = &off_26D61AC;
  boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector((int)v2, v1);
  *(_DWORD *)v3 = &off_26D615C;
  *((_DWORD *)v3 + 5) = &off_26D6178;
  *((_DWORD *)v3 + 10) = &off_26D6194;
  boost::exception_detail::copy_boost_exception((int)(v3 + 20), v1 + 20);
  return &v3[*(_DWORD *)(*(_DWORD *)v3 - 12)];
}


signed int __fastcall boost::asio::detail::strand_service::do_dispatch(int a1, _DWORD **a2, _DWORD *a3)
{
  int v3; // r6@1
  _DWORD **v4; // r4@1
  _DWORD *v5; // r5@1
  int v6; // r7@1
  _DWORD *i; // r0@1
  int v8; // r7@5
  signed int v9; // r5@7
  int v10; // r0@9
  _DWORD *v11; // r1@10
  int v12; // r0@14
  _DWORD *v13; // r1@14

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 20);
  for ( i = j_pthread_getspecific_1(boost::asio::detail::call_stack<boost::asio::detail::task_io_service,boost::asio::detail::task_io_service_thread_info>::top_);
        ;
        i = (_DWORD *)i[2] )
  {
    if ( !i )
    {
      j_pthread_mutex_lock_1((pthread_mutex_t *)(*v4 + 3));
      goto LABEL_9;
    }
    if ( *i == v6 )
      break;
  }
  v8 = i[1];
  j_pthread_mutex_lock_1((pthread_mutex_t *)(*v4 + 3));
  if ( v8 && !*((_BYTE *)*v4 + 16) )
    v9 = 1;
    *((_BYTE *)*v4 + 16) = 1;
    j_pthread_mutex_unlock_1((pthread_mutex_t *)(*v4 + 3));
    return v9;
LABEL_9:
  v10 = (int)*v4;
  if ( *((_BYTE *)*v4 + 16) )
    *v5 = 0;
    v11 = *(_DWORD **)(v10 + 24);
    if ( v11 )
      *v11 = v5;
    else
      *(_DWORD *)(v10 + 20) = v5;
    *(_DWORD *)(v10 + 24) = v5;
    v9 = 0;
  else
    *(_BYTE *)(v10 + 16) = 1;
    v12 = (int)*v4;
    v13 = *(_DWORD **)(v12 + 32);
    if ( v13 )
      *v13 = v5;
      *(_DWORD *)(v12 + 28) = v5;
    *(_DWORD *)(v12 + 32) = v5;
    j_boost::asio::detail::task_io_service::post_immediate_completion(*(_DWORD *)(v3 + 20), *v4, 0);
  return v9;
}


void __fastcall boost::asio::detail::task_io_service::~task_io_service(boost::asio::detail::task_io_service *this)
{
  boost::asio::detail::task_io_service *v1; // r0@1

  v1 = j_boost::asio::detail::task_io_service::~task_io_service(this);
  j_j_j__ZdlPv_8((void *)v1);
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::clone_impl(int a1, int a2)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::clone_impl(
           a1,
           a2);
}


void __fastcall __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::rethrow(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1
  int v3; // r3@1

  v1 = a1;
  v2 = j_j___cxa_allocate_exception_0(32);
  j_boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::clone_impl(
    (int)v2,
    v1);
  j_j___cxa_throw_0(
    (int)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>,
    (int)boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::~clone_impl,
    v3);
}


int __fastcall boost::detail::get_tss_data(boost::detail *this, const void *a2)
{
  boost::detail *v2; // r4@1
  _DWORD *v3; // r0@1
  int v4; // r3@2
  int v5; // r0@2
  int v6; // r2@3
  int v7; // r1@4
  int result; // r0@15

  v2 = this;
  v3 = j_boost::detail::get_current_thread_data(this);
  if ( !v3 )
    goto LABEL_19;
  v4 = v3[16];
  v5 = (int)(v3 + 15);
  if ( v4 )
  {
    v6 = v5;
    do
    {
      v7 = v4;
      while ( *(_DWORD *)(v7 + 16) < (unsigned int)v2 )
      {
        v7 = *(_DWORD *)(v7 + 12);
        if ( !v7 )
        {
          v7 = v6;
          goto LABEL_11;
        }
      }
      v4 = *(_DWORD *)(v7 + 8);
      v6 = v7;
    }
    while ( v4 );
  }
  else
    v7 = v5;
LABEL_11:
  if ( v7 == v5 )
  if ( *(_DWORD *)(v7 + 16) > (unsigned int)v2 )
  if ( v7 != v5 )
    result = *(_DWORD *)(v7 + 28);
LABEL_19:
    result = 0;
  return result;
}


void __fastcall boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector(int a1)
{
  boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector(a1);
}


void __fastcall __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::rethrow(int a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::rethrow(a1);
}


void __fastcall __noreturn boost::throw_exception<std::length_error>(int a1)
{
  boost::throw_exception<std::length_error>(a1);
}


void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::bad_cast>>::~clone_impl(std::bad_cast *this)
{
  std::bad_cast *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *((_DWORD *)this + 1) = &off_26D61E8;
  v2 = *((_DWORD *)this + 2);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *((_DWORD *)v1 + 2) = 0;
  j_std::bad_cast::~bad_cast(v1);
  j_j_j__ZdlPv_8((void *)v1);
}


void __fastcall boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r1@4
  void *v4; // r0@4
  unsigned int *v5; // r12@6
  signed int v6; // r1@8

  v1 = a1;
  *(_DWORD *)(a1 + 20) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 24) = 0;
  *(_DWORD *)v1 = &off_26D60C4;
  v3 = *(_DWORD *)(v1 + 16);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v3 - 4);
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
      j_j_j_j_j__ZdlPv_9(v4);
  }
  sub_DA7AFC(v1);
  operator delete((void *)v1);
}


int __fastcall boost::asio::detail::epoll_reactor::schedule_timer<boost::asio::time_traits<boost::posix_time::ptime>>(int a1, int a2, __int64 *a3, int a4, _DWORD *a5)
{
  return boost::asio::detail::epoll_reactor::schedule_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
           a1,
           a2,
           a3,
           a4,
           a5);
}


int __fastcall boost::asio::detail::epoll_reactor::cancel_timer<boost::asio::time_traits<boost::posix_time::ptime>>(int a1, unsigned int a2, int a3, int a4)
{
  return boost::asio::detail::epoll_reactor::cancel_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
           a1,
           a2,
           a3,
           a4);
}


int __fastcall boost::system::system_error::system_error(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r8@1
  void *v6; // r0@1
  unsigned int *v8; // r1@3
  signed int v9; // r2@4
  int v10; // [sp+4h] [bp-24h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  sub_21E94B4((void **)&v10, (const char *)&unk_257BC67);
  sub_21D36EC(v3, &v10);
  v6 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
    __dmb();
    do
      v9 = __ldrex(v8);
    while ( __strex(v9 - 1, v8) );
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  *(_DWORD *)v3 = &off_26D60C4;
  *(_DWORD *)(v3 + 8) = v4;
  *(_DWORD *)(v3 + 12) = v5;
  *(_DWORD *)(v3 + 16) = &unk_28898CC;
  return v3;
}


unsigned int __fastcall boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(int a1, int (__fastcall *a2)(__time_t *, char *))
{
  int v2; // r7@1
  int (__fastcall *v3)(__time_t *, char *); // r5@1
  __suseconds_t v4; // r6@1
  int v5; // r0@1
  int v6; // r5@1
  int v7; // r0@1
  unsigned int v8; // r0@5
  int v9; // r0@8
  int v10; // r1@8
  int v11; // r2@8
  unsigned __int64 v12; // kr08_8@9
  unsigned int result; // r0@9
  unsigned int v14; // r6@9
  signed __int64 v15; // kr18_8@12
  int v16; // r0@16
  unsigned int v17; // kr28_4@16
  signed int v18; // r5@18
  signed int v19; // r4@21
  signed int v20; // r5@24
  int v21; // r1@29
  signed int v22; // r3@29
  bool v23; // zf@29
  int v24; // r1@32
  bool v25; // zf@32
  bool v26; // zf@41
  signed int v27; // r1@44
  unsigned int v28; // [sp+0h] [bp-50h]@0
  char v29; // [sp+4h] [bp-4Ch]@1
  __time_t v30; // [sp+30h] [bp-20h]@1
  struct timeval tv; // [sp+34h] [bp-1Ch]@1

  v2 = a1;
  v3 = a2;
  j_gettimeofday_0(&tv, 0);
  v30 = tv.tv_sec;
  v4 = tv.tv_usec;
  v5 = v3(&v30, &v29);
  v6 = v5;
  v7 = *(_DWORD *)(v5 + 20) + 1900;
  if ( (unsigned int)(v7 + 1) <= 0x578 )
    j_boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)10000,boost::gregorian::bad_year>::on_error();
  if ( (unsigned __int16)v7 >= 0x2711u )
  if ( (unsigned int)(*(_DWORD *)(v6 + 16) + 2) <= 1 )
    j_boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>::on_error();
  if ( (unsigned __int16)(*(_WORD *)(v6 + 16) + 1) >= 0xDu )
  v8 = *(_DWORD *)(v6 + 12);
  if ( v8 == 0 || v8 >= 0xFFFFFFFF )
    j_boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>::on_error();
  if ( (unsigned __int16)v8 >= 0x20u )
  j_boost::gregorian::date::date();
  v9 = *(_DWORD *)v6;
  v10 = *(_DWORD *)(v6 + 4);
  v11 = *(_DWORD *)(v6 + 8);
  if ( (v10 | v11 | *(_DWORD *)v6) <= -1 )
  {
    if ( v11 < 0 )
      v11 = -v11;
    v15 = 3600LL * v11;
    if ( v10 < 0 )
      v10 = -v10;
    if ( v9 < 0 )
      v9 = -v9;
    v17 = v4 + 1000000 * (60 * v10 + v15 + v9);
    v16 = (__PAIR__(
             (1000000 * (unsigned __int64)(unsigned int)(60 * v10 + v15 + v9) >> 32)
           + 1000000 * ((unsigned __int64)(60LL * v10 + v15 + v9) >> 32),
             v4)
         + (unsigned int)(1000000 * (60 * v10 + v15 + v9))) >> 32;
    v14 = -v17;
    result = -(v16 + (v17 > 0));
  }
  else
    v12 = 60LL * v10 + 3600LL * v11 + v9;
    result = (__PAIR__((1000000 * (unsigned __int64)(unsigned int)v12 >> 32) + 1000000 * (v12 >> 32), v4)
            + (unsigned int)(1000000 * v12)) >> 32;
    v14 = v4 + 1000000 * v12;
  *(_DWORD *)v2 = 1;
  *(_DWORD *)(v2 + 4) = 0;
  if ( v28 + 2 < 3 )
    goto LABEL_65;
  v18 = 0;
  if ( v14 != 0 && v14 < 0xFFFFFFFE )
    v18 = 1;
  v19 = (__PAIR__(result, v14) - 9223372036854775806LL) >> 32 ? 1 : v18;
  if ( v19 )
    v22 = (__PAIR__((500654080 * (unsigned __int64)v28 >> 32) + 20 * v28, 500654080 * v28) + __PAIR__(result, v14)) >> 32;
    v21 = 500654080 * v28 + v14;
LABEL_65:
    v20 = 0;
    if ( v14 + 2 < 3 )
      v20 = 1;
    if ( (__PAIR__(result, v14) - 9223372036854775806LL) >> 32 )
      v20 = 0;
    if ( !v20 )
    {
      if ( v28 + 2 >= 3 )
        goto LABEL_55;
      if ( v28 != -2 )
      {
LABEL_44:
        v27 = 0;
        if ( v14 + 1 < 2 )
          v27 = 1;
        if ( (__PAIR__(result, v14) - 0x7FFFFFFFFFFFFFFFLL) >> 32 )
          v27 = 0;
        if ( v27 )
        {
          v21 = v14;
          v22 = result;
          goto LABEL_56;
        }
        if ( v28 == -1 )
          v22 = 0x7FFFFFFF;
          v21 = -1;
        if ( !v28 )
          v22 = 2147483648;
          v21 = 0;
LABEL_55:
        v22 = (__PAIR__(result, v28) + v14) >> 32;
        v21 = v28 + v14;
        goto LABEL_56;
      }
LABEL_50:
      v22 = 0x7FFFFFFF;
      v21 = -2;
      goto LABEL_56;
    }
    v21 = -2;
    v22 = 0x7FFFFFFF;
    v23 = (v14 ^ 0xFFFFFFFE | result ^ 0x7FFFFFFF) == 0;
    if ( v14 ^ 0xFFFFFFFE | result ^ 0x7FFFFFFF )
      v23 = v28 == -2;
    if ( !v23 )
      v24 = result ^ 0x7FFFFFFF | ~v14;
      v25 = v24 == 0;
      if ( !v24 )
        v25 = v28 == 0;
      if ( !v25 )
        v26 = (result ^ 0x80000000 | v14) == 0;
        if ( !(result ^ 0x80000000 | v14) )
          v26 = v28 == -1;
        if ( !v26 )
          goto LABEL_44;
        goto LABEL_50;
LABEL_56:
  *(_DWORD *)v2 = v21;
  *(_DWORD *)(v2 + 4) = v22;
  return result;
}


void __fastcall boost::exception_detail::error_info_injector<std::bad_cast>::~error_info_injector(std::bad_cast *this)
{
  boost::exception_detail::error_info_injector<std::bad_cast>::~error_info_injector(this);
}


void __fastcall __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::rethrow(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1

  v1 = a1;
  v2 = j___cxa_allocate_exception(44);
  *((_DWORD *)v2 + 10) = &off_26D61AC;
  boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector((int)v2, v1);
  *(_DWORD *)v2 = &off_26D615C;
  *((_DWORD *)v2 + 5) = &off_26D6178;
  *((_DWORD *)v2 + 10) = &off_26D6194;
  j___cxa_throw(
    (int)v2,
    (int)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>,
    (int)boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::~clone_impl,
    (int)&off_26D6178);
}


_DWORD *__fastcall boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  return sub_21D315C(v1);
}


int __fastcall boost::asio::ssl::detail::verify_callback<web::websockets::client::details::wspp_callback_client::connect(void)::{lambda(std::weak_ptr<void>)#1}::operator() const(std::weak_ptr<void>)::{lambda(bool,boost::asio::ssl::verify_context &)#1}>::call(int a1, int a2, int *a3)
{
  return boost::asio::ssl::detail::verify_callback<web::websockets::client::details::wspp_callback_client::connect(void)::{lambda(std::weak_ptr<void>)#1}::operator() const(std::weak_ptr<void>)::{lambda(bool,boost::asio::ssl::verify_context &)#1}>::call(
           a1,
           a2,
           a3);
}


int __fastcall boost::thread_detail::enter_once_region(unsigned int *a1)
{
  unsigned int *v1; // r4@1
  unsigned int v2; // r0@1
  unsigned int v3; // r0@3
  signed int v4; // r5@4
  unsigned int v5; // r0@6

  v1 = a1;
  v2 = *a1;
  __dmb();
  if ( v2 == 2 )
  {
    LOBYTE(v1) = 0;
  }
  else
    j_pthread_mutex_lock_2((pthread_mutex_t *)&unk_28832A4);
    v3 = *v1;
    __dmb();
    if ( v3 == 2 )
    {
      v4 = 0;
    }
    else
      while ( 1 )
      {
        __dmb();
        while ( 1 )
        {
          v5 = __ldrex(v1);
          if ( v5 )
            break;
          if ( !__strex(1u, v1) )
          {
            v4 = 1;
            LOBYTE(v1) = 1;
            __dmb();
            goto LABEL_11;
          }
        }
        if ( v5 == 2 )
          break;
        j_pthread_cond_wait_1((pthread_cond_t *)&unk_28832A8, (pthread_mutex_t *)&unk_28832A4);
      }
      LOBYTE(v1) = 0;
      v4 = 1;
LABEL_11:
    j_pthread_mutex_unlock_2((pthread_mutex_t *)&unk_28832A4);
    if ( !v4 )
  return (unsigned __int8)v1 & 1;
}


void __fastcall __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::rethrow(int a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::rethrow(a1);
}


void __fastcall boost::gregorian::bad_month::~bad_month(boost::gregorian::bad_month *this)
{
  boost::gregorian::bad_month::~bad_month(this);
}


_DWORD *__fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  return sub_21D315C(v1);
}


void *__fastcall boost::asio::ssl::context::set_default_verify_paths(boost::asio::ssl::context *this)
{
  int *v1; // r4@1
  void *result; // r0@2
  int v3; // r4@3
  char v4; // r0@3
  int v5; // [sp+0h] [bp-18h]@1
  void *v6; // [sp+4h] [bp-14h]@1

  v1 = (int *)this;
  v5 = 0;
  v6 = sub_21B09F0();
  j_j_ERR_clear_error();
  if ( j_j_SSL_CTX_set_default_verify_paths(*v1) == 1 )
  {
    result = sub_21B09F0();
    v5 = 0;
    v6 = result;
  }
  else
    v3 = j_j_ERR_get_error_0();
    v4 = `guard variable for'boost::asio::error::get_ssl_category(void)::instance;
    __dmb();
    if ( !(v4 & 1)
      && j_j___cxa_guard_acquire_1(&`guard variable for'boost::asio::error::get_ssl_category(void)::instance) )
    {
      boost::asio::error::get_ssl_category(void)::instance = &off_2763194;
      j_j___cxa_guard_release_1(&`guard variable for'boost::asio::error::get_ssl_category(void)::instance);
    }
    result = &boost::asio::error::get_ssl_category(void)::instance;
    v5 = v3;
    v6 = &boost::asio::error::get_ssl_category(void)::instance;
    if ( v3 )
      j_boost::asio::detail::do_throw_error((unsigned __int64 *)&v5, "set_default_verify_paths");
  return result;
}


void __fastcall __noreturn boost::exception_detail::throw_exception_<std::runtime_error>(int a1, int a2, int a3, int a4)
{
  boost::exception_detail::throw_exception_<std::runtime_error>(a1, a2, a3, a4);
}


void __fastcall __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::rethrow(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1
  int v3; // r3@1

  v1 = a1;
  v2 = j_j___cxa_allocate_exception_0(32);
  j_boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(
    (int)v2,
    v1);
  j_j___cxa_throw_0(
    (int)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>,
    (int)boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl,
    v3);
}


void __fastcall boost::exception_detail::error_info_injector<std::length_error>::~error_info_injector(int a1)
{
  boost::exception_detail::error_info_injector<std::length_error>::~error_info_injector(a1);
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r5@3
  int v6; // r2@3
  int v7; // r3@3
  int v8; // r5@3
  int v9; // r1@3

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 28) = &off_26D61AC;
  *(_DWORD *)a1 = &off_2773868;
  sub_21E8AF4((int *)(a1 + 4), (int *)(a2 + 4));
  *(_DWORD *)v2 = &off_276C4C0;
  *(_DWORD *)(v2 + 8) = &off_26D61E8;
  v4 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v2 + 12) = v4;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v5 = v3 + 16;
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(v5 + 4);
  v8 = *(_DWORD *)(v5 + 8);
  v9 = v2 + 16;
  *(_DWORD *)v9 = v6;
  *(_DWORD *)(v9 + 4) = v7;
  *(_DWORD *)(v9 + 8) = v8;
  *(_DWORD *)v2 = &off_276C44C;
  *(_DWORD *)(v2 + 8) = &off_276C468;
  *(_DWORD *)(v2 + 28) = &off_276C484;
  return v2;
}


void __fastcall boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::~timer_queue(int a1)
{
  boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::~timer_queue(a1);
}


void __fastcall __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::rethrow(int a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::rethrow(a1);
}


int __fastcall boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::expires_from_now(unsigned int a1, int a2, unsigned __int64 *a3, int a4)
{
  return boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::expires_from_now(
           a1,
           a2,
           a3,
           a4);
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(int a1, int a2)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(
           a1,
           a2);
}


char *__fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1

  v1 = a1;
  v2 = (char *)j_operator new(0x20u);
  j_boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(
    (int)v2,
    v1);
  return &v2[*(_DWORD *)(*(_DWORD *)v2 - 12)];
}


__int32 __fastcall boost::thread::physical_concurrency(boost::thread *this)
{
  __int32 v1; // r8@0
  unsigned int v2; // r9@1
  void *v3; // r5@1
  void *v4; // r0@4
  unsigned int **v5; // r5@9
  void *v6; // r8@10
  size_t v7; // r6@10
  signed int v8; // r11@14
  __int32 v9; // r0@16
  _BYTE *v10; // r0@19
  int v11; // r2@19
  int v12; // r6@20
  bool v13; // zf@20
  signed int v14; // r0@25
  int v15; // r1@26
  _BYTE *v16; // r0@28
  int v17; // r2@28
  int v18; // r6@29
  bool v19; // zf@29
  signed int v20; // r0@34
  int v21; // r1@35
  _BYTE *v22; // r0@43
  char *v23; // r0@44
  void *v24; // r8@45
  void *v25; // r6@45
  unsigned int *v26; // r1@47
  signed int v27; // r2@48
  int *v28; // r0@51
  unsigned int *v29; // r1@58
  signed int v30; // r2@59
  unsigned int *v31; // r1@62
  signed int v32; // r2@63
  int v33; // r6@66
  int v34; // r2@68
  int v35; // r0@69
  char *v36; // r0@70
  int v37; // r0@70
  char *v38; // r0@74
  char *v39; // r0@75
  char *v40; // r0@76
  void **v41; // r5@77
  void *v42; // r6@77
  char *v43; // r0@78
  char *v44; // r0@79
  char *v45; // r0@80
  void **v46; // r5@81
  void *v47; // r6@81
  unsigned int *v49; // r1@85
  signed int v50; // r2@86
  unsigned int *v51; // r1@89
  signed int v52; // r2@90
  unsigned int *v53; // r1@93
  signed int v54; // r2@94
  unsigned int *v55; // r1@97
  signed int v56; // r2@98
  unsigned int *v57; // r1@101
  signed int v58; // r2@102
  unsigned int *v59; // r1@105
  signed int v60; // r2@106
  int v61; // r8@109
  int *v62; // r0@109
  _BYTE *v63; // r0@111
  char *v64; // r0@112
  void *v65; // r6@113
  void *v66; // r10@113
  unsigned int *v67; // r1@115
  signed int v68; // r2@116
  int *v69; // r0@119
  unsigned int *v70; // r1@124
  signed int v71; // r2@125
  unsigned int *v72; // r1@128
  signed int v73; // r2@129
  __int32 v74; // [sp+Ch] [bp-20Ch]@10
  unsigned int **v75; // [sp+20h] [bp-1F8h]@1
  char v76; // [sp+24h] [bp-1F4h]@10
  char v77; // [sp+28h] [bp-1F0h]@10
  _BYTE *v78; // [sp+2Ch] [bp-1ECh]@10
  void *s1; // [sp+30h] [bp-1E8h]@10
  void *v80; // [sp+34h] [bp-1E4h]@6
  unsigned int v81; // [sp+3Ch] [bp-1DCh]@6
  void *ptr; // [sp+40h] [bp-1D8h]@4
  _BYTE *v83; // [sp+44h] [bp-1D4h]@4
  char *v84; // [sp+48h] [bp-1D0h]@4
  char *v85; // [sp+4Ch] [bp-1CCh]@1
  int v86; // [sp+50h] [bp-1C8h]@1
  int v87; // [sp+54h] [bp-1C4h]@1
  char v88; // [sp+58h] [bp-1C0h]@42
  int v89; // [sp+5Ch] [bp-1BCh]@1
  int v90; // [sp+60h] [bp-1B8h]@1
  int *v91; // [sp+64h] [bp-1B4h]@1
  int *v92; // [sp+68h] [bp-1B0h]@1
  __int32 v93; // [sp+6Ch] [bp-1ACh]@1
  void *v94; // [sp+74h] [bp-1A4h]@1
  void *s2; // [sp+7Ch] [bp-19Ch]@1
  void **v96; // [sp+80h] [bp-198h]@1
  int v97; // [sp+84h] [bp-194h]@77
  int v98; // [sp+88h] [bp-190h]@77
  int v99; // [sp+F0h] [bp-128h]@77
  char v100; // [sp+178h] [bp-A0h]@10
  int v101; // [sp+17Ch] [bp-9Ch]@1
  char v102; // [sp+180h] [bp-98h]@10
  int v103; // [sp+184h] [bp-94h]@10
  int v104; // [sp+188h] [bp-90h]@19
  void **v105; // [sp+18Ch] [bp-8Ch]@109
  void **v106; // [sp+190h] [bp-88h]@109
  void **v107; // [sp+194h] [bp-84h]@109
  char v108; // [sp+198h] [bp-80h]@19
  _BYTE *v109; // [sp+19Ch] [bp-7Ch]@19
  unsigned int v110; // [sp+1A0h] [bp-78h]@19
  char v111; // [sp+1A4h] [bp-74h]@25
  int v112; // [sp+1A8h] [bp-70h]@25
  int *v113; // [sp+1ACh] [bp-6Ch]@25
  _BYTE *v114; // [sp+1B0h] [bp-68h]@25
  _BYTE *v115; // [sp+1B4h] [bp-64h]@25
  int v116; // [sp+1B8h] [bp-60h]@28
  void **v117; // [sp+1BCh] [bp-5Ch]@110
  void **v118; // [sp+1C0h] [bp-58h]@110
  void **v119; // [sp+1C4h] [bp-54h]@110
  char v120; // [sp+1C8h] [bp-50h]@28
  _BYTE *v121; // [sp+1CCh] [bp-4Ch]@28
  unsigned int v122; // [sp+1D0h] [bp-48h]@28
  char v123; // [sp+1D4h] [bp-44h]@34
  int v124; // [sp+1D8h] [bp-40h]@34
  int *v125; // [sp+1DCh] [bp-3Ch]@34
  _BYTE *v126; // [sp+1E0h] [bp-38h]@34
  _BYTE *v127; // [sp+1E4h] [bp-34h]@34
  char v128; // [sp+1E8h] [bp-30h]@42

  sub_21E37D8((int)&v96, "/proc/cpuinfo", 8);
  sub_21E94B4(&s2, "physical id");
  sub_21E94B4(&v94, "core id");
  v2 = 0xFFFF4420;
  v93 = 0;
  v3 = &unk_28898CC;
  v90 = 0;
  v89 = 0;
  v91 = &v89;
  v92 = &v89;
  v86 = 0;
  v87 = 0;
  v85 = (char *)&unk_28898CC;
  v75 = (unsigned int **)&v101;
  while ( 1 )
  {
    do
    {
      v33 = *(_DWORD *)((char *)*(v96 - 3) + (_DWORD)&v96 + 124);
      if ( !v33 )
        sub_21E5824();
      if ( *(_BYTE *)(v33 + 28) )
      {
        v34 = *(_BYTE *)(v33 + 39);
      }
      else
        sub_21B50F0(v33);
        (*(void (__cdecl **)(void *))(*(_DWORD *)v33 + 24))((void *)v33);
        v34 = v35;
      v36 = sub_21BBAF0((char *)&v96, (const void **)&v85, v34);
      v37 = (int)&v36[*(_DWORD *)(*(_DWORD *)v36 - 12)];
      if ( !v37 || *(_DWORD *)(v37 + 20) & 5 )
        v1 = v93;
        if ( !v93 )
        {
          v1 = j_sysconf(97);
          if ( v1 <= 0 )
            v1 = 0;
        }
LABEL_74:
        v38 = v85 - 12;
        if ( v85 - 12 != (char *)*(int (__fastcall **)(_DWORD))((char *)&GLOBAL_OFFSET_TABLE_ + v2) )
          v55 = (unsigned int *)(v85 - 4);
          __dmb();
          do
            v56 = __ldrex(v55);
          while ( __strex(v56 - 1, v55) );
          if ( v56 <= 0 )
            j_j_j_j__ZdlPv_9(v38);
        j_std::_Rb_tree<std::pair<unsigned int,unsigned int>,std::pair<unsigned int,unsigned int>,std::_Identity<std::pair<unsigned int,unsigned int>>,std::less<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>::_M_erase(
          (int)&v88,
          v90);
        v39 = (char *)v94 - 12;
        if ( (char *)v94 - 12 != (char *)*(int (__fastcall **)(_DWORD))((char *)&GLOBAL_OFFSET_TABLE_ + v2) )
          v57 = (unsigned int *)((char *)v94 - 4);
            v58 = __ldrex(v57);
          while ( __strex(v58 - 1, v57) );
          if ( v58 <= 0 )
            j_j_j_j__ZdlPv_9(v39);
        v40 = (char *)s2 - 12;
        if ( (char *)s2 - 12 != (char *)*(int (__fastcall **)(_DWORD))((char *)&GLOBAL_OFFSET_TABLE_ + v2) )
          v59 = (unsigned int *)((char *)s2 - 4);
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
          if ( v60 <= 0 )
            j_j_j_j__ZdlPv_9(v40);
        v41 = (void **)off_26D436C;
        v42 = off_26D4370;
        v96 = off_26D4368;
        *(_DWORD *)((char *)*(off_26D4368 - 3) + (_DWORD)&v96) = off_26D4374;
        sub_21E2590(&v98);
        v96 = v41;
        *(_DWORD *)((char *)*(v41 - 3) + (_DWORD)&v96) = v42;
        v97 = 0;
        sub_21B6560(&v99);
        return v1;
    }
    while ( !*((_DWORD *)v85 - 3) );
    ptr = 0;
    v83 = 0;
    v84 = 0;
    v4 = j_operator new(8u);
    ptr = v4;
    v83 = v4;
    v84 = (char *)v4 + 8;
    if ( v4 )
      *(_DWORD *)v4 = v3;
    *((_DWORD *)v4 + 1) = v3;
    v80 = 0;
    v81 = 1;
    v83 = (char *)v4 + 8;
    LOBYTE(v80) = 58;
    j_std::__introsort_loop<char *,int>((int)&v80, (_BYTE *)((unsigned int)&v80 | 1), 0);
    j_std::__final_insertion_sort<char *>(&v80, (_BYTE *)((unsigned int)&v80 | 1));
    sub_21AB5DC((int)&ptr, (const void **)&v85, (int)&v80, 1);
    if ( v81 >= 9 && v80 )
      j_operator delete[](v80);
    v5 = v75;
    if ( v83 - (_BYTE *)ptr != 8 )
      v9 = j_sysconf(97);
      v8 = 1;
      if ( v9 <= 0 )
        v9 = 0;
      v74 = v9;
      goto LABEL_45;
    sub_21E8AF4((int *)&s1, (int *)ptr);
    sub_21E8AF4((int *)&v78, (int *)ptr + 1);
    sub_21C9520((unsigned int **)&v77);
    v100 = 8;
    sub_21C7A30(v75, (unsigned int **)&v77);
    sub_1FFF4EC((const void **)&s1, (int)&v100);
    sub_21C802C(v75);
    sub_21C802C((unsigned int **)&v77);
    sub_21C9520((unsigned int **)&v76);
    v102 = 8;
    sub_21C7A30((unsigned int **)&v103, (unsigned int **)&v76);
    sub_1FFF4EC((const void **)&v78, (int)&v102);
    v74 = v1;
    v2 = 0xFFFF4420;
    sub_21C802C((unsigned int **)&v103);
    sub_21C802C((unsigned int **)&v76);
    v6 = s1;
    v7 = *((_DWORD *)s1 - 3);
    if ( v7 == *((_DWORD *)s2 - 3) && !j_memcmp_2(s1, s2, *((_DWORD *)s1 - 3)) )
      v110 = (unsigned int)&v108 | 3;
      v10 = v78;
      v104 = 0;
      v109 = v78;
      v11 = *((_DWORD *)v78 - 3);
      v5 = v75;
      v110 = (unsigned int)&v78[v11];
      if ( !v11 )
        goto LABEL_109;
      v12 = *v78;
      v13 = v12 == 43;
      if ( v12 != 43 )
        v13 = v12 == 45;
      if ( v13 )
        v10 = v78 + 1;
      v111 = 0;
      v112 = 1;
      v113 = &v104;
      v114 = v10;
      v115 = &v78[v11];
      v14 = sub_21ACFE0((int)&v111);
      if ( v12 == 45 )
        v15 = -v104;
        v104 = -v104;
        if ( !v14 )
          goto LABEL_109;
        if ( v14 != 1 )
LABEL_109:
          v105 = &off_2772498;
          v106 = &`typeinfo for'std::string;
          v107 = &`typeinfo for'unsigned int;
          v61 = ((int (__fastcall *)(void ***))sub_21AC9E8)(&v105);
          v62 = (int *)&v105;
          goto LABEL_111;
        v15 = v104;
      v8 = 2;
      v86 = v15;
      goto LABEL_43;
    if ( v7 != *((_DWORD *)v94 - 3) || j_memcmp_2(v6, v94, v7) )
      v8 = 0;
    v122 = (unsigned int)&v120 | 3;
    v16 = v78;
    v116 = 0;
    v121 = v78;
    v17 = *((_DWORD *)v78 - 3);
    v122 = (unsigned int)&v78[v17];
    if ( !v17 )
      break;
    v18 = *v78;
    v19 = v18 == 43;
    if ( v18 != 43 )
      v19 = v18 == 45;
    if ( v19 )
      v16 = v78 + 1;
    v123 = 0;
    v124 = 1;
    v125 = &v116;
    v126 = v16;
    v127 = &v78[v17];
    v20 = sub_21ACFE0((int)&v123);
    if ( v18 == 45 )
      v21 = -v116;
      v116 = -v116;
      if ( !v20 )
        break;
      goto LABEL_42;
    if ( v20 != 1 )
    v21 = v116;
LABEL_42:
    v87 = v21;
    j_std::_Rb_tree<std::pair<unsigned int,unsigned int>,std::pair<unsigned int,unsigned int>,std::_Identity<std::pair<unsigned int,unsigned int>>,std::less<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>::_M_insert_unique<std::pair<unsigned int,unsigned int> const&>(
      (int)&v128,
      (int)&v88,
      (int)&v86);
    v8 = 2;
LABEL_43:
    v22 = v78 - 12;
    if ( (int *)(v78 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v78 - 4);
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    v23 = (char *)s1 - 12;
    if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)((char *)s1 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      if ( v32 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
LABEL_45:
    v24 = ptr;
    v25 = v83;
    if ( ptr != v83 )
        v28 = (int *)(*(_DWORD *)v24 - 12);
        if ( v28 != &dword_28898C0 )
          v26 = (unsigned int *)(*(_DWORD *)v24 - 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          if ( v27 <= 0 )
            j_j_j_j__ZdlPv_9(v28);
        v24 = (char *)v24 + 4;
      while ( v24 != v25 );
      v24 = ptr;
    v75 = v5;
    if ( v24 )
      j_operator delete(v24);
    v1 = v74;
    v3 = &unk_28898CC;
    if ( (v8 | 2) != 2 )
      goto LABEL_74;
  }
  v117 = &off_2772498;
  v118 = &`typeinfo for'std::string;
  v119 = &`typeinfo for'unsigned int;
  v61 = ((int (__fastcall *)(void ***))sub_21AC9E8)(&v117);
  v62 = (int *)&v117;
LABEL_111:
  j_std::bad_cast::~bad_cast((std::bad_cast *)v62);
  v63 = v78 - 12;
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v78 - 4);
    __dmb();
      v73 = __ldrex(v72);
    while ( __strex(v73 - 1, v72) );
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v63);
  v64 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)((char *)s1 - 4);
      v71 = __ldrex(v70);
    while ( __strex(v71 - 1, v70) );
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v64);
  v65 = ptr;
  v66 = v83;
  if ( ptr != v83 )
      v69 = (int *)(*(_DWORD *)v65 - 12);
      if ( v69 != &dword_28898C0 )
        v67 = (unsigned int *)(*(_DWORD *)v65 - 4);
        __dmb();
        do
          v68 = __ldrex(v67);
        while ( __strex(v68 - 1, v67) );
        if ( v68 <= 0 )
          j_j_j_j__ZdlPv_9(v69);
      v65 = (char *)v65 + 4;
    while ( v65 != v66 );
    v65 = ptr;
  if ( v65 )
    j_operator delete(v65);
  v43 = v85 - 12;
  if ( v85 - 12 != (char *)*(int (__fastcall **)(_DWORD))((char *)&GLOBAL_OFFSET_TABLE_ + v2) )
    v51 = (unsigned int *)(v85 - 4);
      v52 = __ldrex(v51);
    while ( __strex(v52 - 1, v51) );
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  j_std::_Rb_tree<std::pair<unsigned int,unsigned int>,std::pair<unsigned int,unsigned int>,std::_Identity<std::pair<unsigned int,unsigned int>>,std::less<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>::_M_erase(
    (int)&v88,
    v90);
  v44 = (char *)v94 - 12;
  if ( (char *)v94 - 12 != (char *)*(int (__fastcall **)(_DWORD))((char *)&GLOBAL_OFFSET_TABLE_ + v2) )
    v53 = (unsigned int *)((char *)v94 - 4);
      v54 = __ldrex(v53);
    while ( __strex(v54 - 1, v53) );
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  v45 = (char *)s2 - 12;
  if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)((char *)s2 - 4);
      v50 = __ldrex(v49);
    while ( __strex(v50 - 1, v49) );
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  v46 = (void **)off_26D436C;
  v47 = off_26D4370;
  v96 = off_26D4368;
  *(_DWORD *)((char *)*(off_26D4368 - 3) + (_DWORD)&v96) = off_26D4374;
  sub_21E2590(&v98);
  v96 = v46;
  *(_DWORD *)((char *)*(v46 - 3) + (_DWORD)&v96) = v47;
  v97 = 0;
  sub_21B6560(&v99);
  j_j___cxa_begin_catch_1(v61);
  v1 = j_sysconf(97);
  if ( v1 <= 0 )
    v1 = 0;
  j_j___cxa_end_catch_2();
  return v1;
}


signed int __fastcall boost::asio::detail::socket_ops::non_blocking_recv(int a1, int a2, int a3, int a4, void *a5, int a6, int *a7)
{
  int v7; // r7@1
  void *v8; // r0@1
  int v9; // r8@1
  int v10; // r10@1
  int v11; // r11@1
  int v12; // r4@2
  int v13; // r6@2
  void *v14; // r0@2
  signed int v15; // r6@2
  void *v16; // r0@3
  int v17; // r6@9
  void *v18; // r0@9
  void *v19; // r0@10
  void *v20; // r1@11
  bool v21; // zf@11
  void *v22; // r0@14
  void *v23; // r1@14
  bool v24; // zf@14
  char v26; // r0@19
  void *v27; // r0@17
  void *v28; // r1@24
  bool v29; // zf@24
  int v30; // r7@27
  void *v31; // r0@28
  int v32; // [sp+0h] [bp-40h]@2
  int v33; // [sp+4h] [bp-3Ch]@2
  int v34; // [sp+8h] [bp-38h]@2
  int v35; // [sp+Ch] [bp-34h]@2
  int v36; // [sp+10h] [bp-30h]@2
  int v37; // [sp+14h] [bp-2Ch]@2
  int v38; // [sp+18h] [bp-28h]@2

  v7 = a1;
  v8 = a5;
  v9 = a4;
  v10 = a3;
  v11 = a2;
  if ( a5 == (void *)1 )
  {
    while ( 1 )
    {
      *(_DWORD *)j___errno_0((int)v8) = 0;
      v38 = 0;
      v36 = 0;
      v37 = 0;
      v32 = 0;
      v33 = 0;
      v34 = v11;
      v35 = v10;
      v12 = j_recvmsg(v7, (struct msghdr *)&v32, v9);
      v13 = *(_DWORD *)j___errno_0(v12);
      v14 = sub_21B09F0();
      *(_DWORD *)a6 = v13;
      *(_DWORD *)(a6 + 4) = v14;
      v15 = 0;
      if ( v12 > -1 )
      {
        v15 = 1;
        v16 = sub_21B09F0();
        *(_DWORD *)a6 = 0;
        *(_DWORD *)(a6 + 4) = v16;
        if ( !v12 )
          break;
      }
      if ( *(void **)(a6 + 4) == sub_21B09F0() )
        v8 = *(void **)a6;
        if ( *(_DWORD *)a6 == 4 )
          continue;
      goto LABEL_14;
    }
    v26 = `guard variable for'boost::asio::error::get_misc_category(void)::instance;
    __dmb();
    if ( !(v26 & 1)
      && j_j___cxa_guard_acquire_1(&`guard variable for'boost::asio::error::get_misc_category(void)::instance) )
      boost::asio::error::get_misc_category(void)::instance = &off_2763164;
      j_j___cxa_guard_release_1(&`guard variable for'boost::asio::error::get_misc_category(void)::instance);
    *(_DWORD *)a6 = 2;
    *(_DWORD *)(a6 + 4) = &boost::asio::error::get_misc_category(void)::instance;
  }
  else
    do
      v17 = *(_DWORD *)j___errno_0(v12);
      v18 = sub_21B09F0();
      *(_DWORD *)a6 = v17;
      *(_DWORD *)(a6 + 4) = v18;
        v19 = sub_21B09F0();
        *(_DWORD *)(a6 + 4) = v19;
      v8 = sub_21B09F0();
      v20 = *(void **)(a6 + 4);
      v21 = v20 == v8;
      if ( v20 == v8 )
        v21 = *(_DWORD *)a6 == 4;
    while ( v21 );
LABEL_14:
    v22 = sub_21B09F0();
    v23 = *(void **)(a6 + 4);
    v24 = v23 == v22;
    if ( v23 == v22 )
      v24 = *(_DWORD *)a6 == 11;
    if ( v24 )
      return 0;
    v27 = sub_21B09F0();
    v28 = *(void **)(a6 + 4);
    v29 = v28 == v27;
    if ( v28 == v27 )
      v29 = *(_DWORD *)a6 == 11;
    if ( v29 )
    v30 = 0;
    if ( v15 == 1 )
      v31 = sub_21B09F0();
      *(_DWORD *)a6 = 0;
      *(_DWORD *)(a6 + 4) = v31;
      v30 = v12;
    *a7 = v30;
  return 1;
}


void __fastcall boost::uuids::detail::sha1::get_digest(boost::uuids::detail::sha1 *this, unsigned int (*a2)[5])
{
  JUMPOUT(&boost::uuids::detail::sha1::get_digest);
}


int __fastcall boost::asio::ssl::detail::stream_core::stream_core(int a1, _DWORD *a2, int *a3)
{
  int *v3; // r5@1
  int v4; // r4@1
  int v5; // r0@1
  int v6; // r8@1
  int v7; // r0@1
  int v8; // r9@1
  char *v9; // r5@1
  char *v10; // r5@1
  void **v12; // [sp+4h] [bp-34h]@1
  int v13; // [sp+8h] [bp-30h]@1
  void **v14; // [sp+Ch] [bp-2Ch]@1
  int v15; // [sp+10h] [bp-28h]@1

  v3 = a3;
  v4 = a1;
  j_boost::asio::ssl::detail::engine::engine(a1, a2);
  v5 = *v3;
  v12 = &`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::deadline_timer_service<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>>>;
  v13 = 0;
  *(_DWORD *)(v4 + 8) = j_boost::asio::detail::service_registry::do_use_service(
                          v5,
                          (unsigned __int64 *)&v12,
                          (int (__fastcall *)(_DWORD))boost::asio::detail::service_registry::create<boost::asio::deadline_timer_service<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>>>);
  *(_DWORD *)(v4 + 28) = 0;
  *(_DWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 40) = 0;
  *(_DWORD *)(v4 + 44) = 0;
  *(_DWORD *)(v4 + 16) = -2;
  v6 = v4 + 16;
  *(_DWORD *)(v6 + 4) = 0x7FFFFFFF;
  *(_BYTE *)(v6 + 8) = 0;
  v7 = *v3;
  v14 = &`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::deadline_timer_service<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>>>;
  v15 = 0;
  *(_DWORD *)(v4 + 48) = j_boost::asio::detail::service_registry::do_use_service(
                           v7,
                           (unsigned __int64 *)&v14,
                           (int (__fastcall *)(_DWORD))boost::asio::detail::service_registry::create<boost::asio::deadline_timer_service<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>>>);
  *(_DWORD *)(v4 + 68) = 0;
  *(_DWORD *)(v4 + 72) = 0;
  *(_DWORD *)(v4 + 80) = 0;
  *(_DWORD *)(v4 + 84) = 0;
  *(_DWORD *)(v4 + 56) = -2;
  v8 = v4 + 56;
  *(_DWORD *)(v8 + 4) = 0x7FFFFFFF;
  *(_BYTE *)(v8 + 8) = 0;
  *(_DWORD *)(v8 + 32) = 0;
  *(_DWORD *)(v8 + 36) = 0;
  *(_DWORD *)(v8 + 40) = 0;
  v9 = (char *)j_operator new(0x4400u);
  *(_DWORD *)(v4 + 88) = v9;
  *(_DWORD *)(v4 + 96) = v9 + 17408;
  j___aeabi_memclr_1((int)v9, 17408);
  *(_DWORD *)(v4 + 92) = v9 + 17408;
  *(_DWORD *)(v4 + 100) = v9;
  *(_DWORD *)(v4 + 104) = 17408;
  *(_DWORD *)(v4 + 108) = 0;
  *(_DWORD *)(v4 + 112) = 0;
  *(_DWORD *)(v4 + 116) = 0;
  v10 = (char *)j_operator new(0x4400u);
  *(_DWORD *)(v4 + 108) = v10;
  *(_DWORD *)(v4 + 116) = v10 + 17408;
  j___aeabi_memclr_1((int)v10, 17408);
  *(_DWORD *)(v4 + 112) = v10 + 17408;
  *(_DWORD *)(v4 + 120) = v10;
  *(_DWORD *)(v4 + 124) = 17408;
  *(_DWORD *)(v4 + 128) = 0;
  *(_DWORD *)(v4 + 132) = 0;
  sub_21B09F0();
  if ( *(_BYTE *)(v4 + 24) )
  {
    j_boost::asio::detail::epoll_reactor::cancel_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
      *(_DWORD *)(*(_DWORD *)(v4 + 8) + 52),
      *(_DWORD *)(v4 + 8) + 20,
      v4 + 28,
      -1);
    *(_BYTE *)(v4 + 24) = 0;
  }
  *(_DWORD *)v6 = 0;
  *(_DWORD *)(v4 + 20) = 2147483648;
  if ( *(_BYTE *)(v4 + 64) )
      *(_DWORD *)(*(_DWORD *)(v4 + 48) + 52),
      *(_DWORD *)(v4 + 48) + 20,
      v4 + 68,
    *(_BYTE *)(v4 + 64) = 0;
  *(_DWORD *)v8 = 0;
  *(_DWORD *)(v4 + 60) = 2147483648;
  return v4;
}


void __fastcall boost::asio::detail::epoll_reactor::~epoll_reactor(boost::asio::detail::epoll_reactor *this)
{
  boost::asio::detail::epoll_reactor::~epoll_reactor(this);
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::clone_impl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r2@3
  int v6; // r3@3
  int v7; // r12@3

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 28) = &off_26D61AC;
  *(_DWORD *)a1 = &off_2773868;
  sub_21E8AF4((int *)(a1 + 4), (int *)(a2 + 4));
  *(_DWORD *)v2 = &off_2773810;
  *(_DWORD *)(v2 + 8) = &off_26D61E8;
  v4 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v2 + 12) = v4;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v5 = *(_DWORD *)(v3 + 20);
  v6 = *(_DWORD *)(v3 + 24);
  v7 = v2 + 16;
  *(_DWORD *)v7 = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v7 + 4) = v5;
  *(_DWORD *)(v7 + 8) = v6;
  *(_DWORD *)v2 = &off_27651BC;
  *(_DWORD *)(v2 + 8) = &off_27651D8;
  *(_DWORD *)(v2 + 28) = &off_27651F4;
  j_boost::exception_detail::copy_boost_exception(v2 + 8, v3 + 8);
  return v2;
}


int __fastcall boost::asio::detail::strand_service::shutdown_service(boost::asio::detail::strand_service *this)
{
  boost::asio::detail::strand_service *v1; // r7@1
  pthread_mutex_t *v2; // r8@1
  signed int v3; // r1@1
  int v4; // r6@1
  _DWORD *v5; // r2@1
  int v6; // r3@2
  int v7; // r4@3
  int v8; // r5@8
  int result; // r0@14
  int v10; // r7@15
  int (__fastcall *v11)(_DWORD, int, int *, _DWORD); // r4@15
  int v12; // [sp+0h] [bp-20h]@15
  void *v13; // [sp+4h] [bp-1Ch]@15

  v1 = this;
  v2 = (pthread_mutex_t *)((char *)this + 24);
  j_pthread_mutex_lock_1((pthread_mutex_t *)this + 1);
  v3 = 7;
  v4 = 0;
  v5 = 0;
  do
  {
    v6 = *((_DWORD *)v1 + v3);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 20);
      if ( v7 )
      {
        if ( v5 )
          *v5 = v7;
        else
          v4 = *(_DWORD *)(v6 + 20);
        v5 = *(_DWORD **)(v6 + 24);
        *(_DWORD *)(v6 + 20) = 0;
        *(_DWORD *)(v6 + 24) = 0;
      }
      v8 = *(_DWORD *)(v6 + 28);
      if ( v8 )
          *v5 = v8;
          v4 = *(_DWORD *)(v6 + 28);
        v5 = *(_DWORD **)(v6 + 32);
        *(_DWORD *)(v6 + 28) = 0;
        *(_DWORD *)(v6 + 32) = 0;
    }
    ++v3;
  }
  while ( v3 != 200 );
  result = j_pthread_mutex_unlock_1(v2);
  if ( v4 )
    do
      v10 = *(_DWORD *)v4;
      *(_DWORD *)v4 = 0;
      v11 = *(int (__fastcall **)(_DWORD, int, int *, _DWORD))(v4 + 4);
      v12 = 0;
      v13 = sub_21B09F0();
      result = v11(0, v4, &v12, 0);
      v4 = v10;
    while ( v10 );
  return result;
}


int __fastcall boost::asio::ssl::detail::engine::do_shutdown(boost::asio::ssl::detail::engine *this, void *a2, unsigned int a3)
{
  int *v3; // r4@1
  int result; // r0@1

  v3 = (int *)this;
  result = j_j_SSL_shutdown(*(_DWORD *)this);
  if ( !result )
    result = j_j_j_SSL_shutdown_0(*v3);
  return result;
}


void **__fastcall boost::asio::detail::scoped_ptr<boost::asio::io_service>::~scoped_ptr(void **a1)
{
  void **v1; // r4@1
  void *v2; // r5@1
  int v3; // r6@2
  int v4; // r7@3
  int v5; // r0@5
  int v6; // r7@6

  v1 = a1;
  v2 = *a1;
  if ( *a1 )
  {
    v3 = *(_DWORD *)v2;
    if ( *(_DWORD *)v2 )
    {
      v4 = *(_DWORD *)(v3 + 12);
      if ( v4 )
      {
        do
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          v4 = *(_DWORD *)(v4 + 16);
        }
        while ( v4 );
        v5 = *(_DWORD *)(v3 + 12);
        if ( v5 )
          do
          {
            v6 = *(_DWORD *)(v5 + 16);
            (*(void (**)(void))(*(_DWORD *)v5 + 4))();
            v5 = v6;
            *(_DWORD *)(v3 + 12) = v6;
          }
          while ( v6 );
      }
      j_pthread_mutex_destroy_0((pthread_mutex_t *)(v3 + 4));
      j_operator delete((void *)v3);
    }
    j_operator delete(v2);
  }
  return v1;
}


unsigned int __fastcall boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::wait_duration_usec(int a1, signed int a2)
{
  __int64 v2; // kr00_8@1
  signed int v3; // r8@1
  unsigned int v4; // r1@2 OVERLAPPED
  unsigned int v5; // r2@2 OVERLAPPED
  signed int v6; // r3@2
  unsigned int result; // r0@7
  signed int v8; // r3@7
  bool v9; // zf@7
  int v10; // r0@10
  bool v11; // zf@10
  signed int v12; // r3@16
  unsigned int v13; // r1@23
  signed int v14; // r7@23
  signed int v15; // r2@23
  bool v16; // zf@31
  signed int v17; // r0@34
  signed int v18; // r2@48
  signed int v19; // r1@50
  __int64 v20; // [sp+0h] [bp-20h]@2

  v2 = *(_QWORD *)(a1 + 20);
  v3 = a2;
  if ( (_DWORD)v2 == HIDWORD(v2) )
    return a2;
  j_boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(
    (int)&v20,
    (int (__fastcall *)(__time_t *, char *))boost::date_time::c_time::gmtime);
  *(_QWORD *)&v4 = *(_QWORD *)v2;
  v6 = 0;
  if ( (unsigned int)*(_QWORD *)v2 + 2 < 3 )
    v6 = 1;
  if ( (unsigned __int64)(*(_QWORD *)v2 - 9223372036854775806LL) >> 32 )
    v6 = 0;
  if ( v6 )
  {
    result = -2;
    v8 = 0x7FFFFFFF;
    v9 = (v5 ^ 0x7FFFFFFF | v4 ^ 0xFFFFFFFE) == 0;
    if ( v5 ^ 0x7FFFFFFF | v4 ^ 0xFFFFFFFE )
      v9 = __PAIR__(v20, HIDWORD(v20)) == -6442450945LL;
    if ( v9 )
      goto LABEL_48;
    v10 = v5 ^ 0x7FFFFFFF | ~v4;
    v11 = v10 == 0;
    if ( !v10 )
      v11 = (HIDWORD(v20) ^ 0x7FFFFFFF | ~(_DWORD)v20) == 0;
    if ( !v11 )
    {
      v16 = (v5 ^ 0x80000000 | v4) == 0;
      if ( !(v5 ^ 0x80000000 | v4) )
        v16 = __PAIR__(v20, HIDWORD(v20)) == 0x80000000LL;
      if ( v16 )
        goto LABEL_47;
      goto LABEL_34;
    }
    goto LABEL_48;
  }
  v12 = 0;
  if ( (unsigned int)(v20 + 2) < 3 )
    v12 = 1;
  if ( (unsigned __int64)(v20 - 9223372036854775806LL) >> 32 )
    v12 = 0;
  if ( v12 )
    if ( __PAIR__(v20, HIDWORD(v20)) != -6442450945LL )
LABEL_34:
      v17 = 0;
      if ( v4 + 1 < 2 )
        v17 = 1;
      if ( (__PAIR__(v5, v4) - 0x7FFFFFFFFFFFFFFFLL) >> 32 )
        v17 = 0;
      if ( !v17 )
      {
        v8 = 0x7FFFFFFF;
        if ( __PAIR__(v20, HIDWORD(v20)) == 0x80000000LL )
        {
          result = -1;
          goto LABEL_48;
        }
        if ( !(HIDWORD(v20) ^ 0x7FFFFFFF | ~(_DWORD)v20) )
          return 0;
        result = -2;
        v5 = (__PAIR__(v5, v4) - v20) >> 32;
        v4 -= v20;
        if ( __PAIR__(v5, v4) == 9223372036854775806LL )
      }
        return 0;
      v8 = 0x7FFFFFFF;
      if ( !(v5 ^ 0x7FFFFFFF | ~v4) )
        result = -1;
        goto LABEL_48;
LABEL_47:
      result = -2;
LABEL_48:
    v18 = 0;
    if ( result > v3 )
      v18 = 1;
    v19 = 0;
    if ( v8 > v3 >> 31 )
      v19 = 1;
    if ( v8 == v3 >> 31 )
      v19 = v18;
    if ( v19 )
      result = v3;
    return result;
  v14 = 0;
  v8 = (__PAIR__(v5, v4) - v20) >> 32;
  v13 = v4 - v20;
  v15 = 0;
  result = 0;
  if ( !v13 )
    v15 = 1;
  if ( v8 < 0 )
    v14 = 1;
  if ( !v8 )
    v14 = v15;
  if ( !v14 )
    result = v13;
  return result;
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::clone_impl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r3@3
  int v6; // r6@3
  int v7; // r0@3

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 28) = &off_26D61AC;
  *(_DWORD *)a1 = &off_2773868;
  sub_21E8AF4((int *)(a1 + 4), (int *)(a2 + 4));
  *(_DWORD *)v2 = &off_2773898;
  *(_DWORD *)(v2 + 8) = &off_26D61E8;
  v4 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v2 + 12) = v4;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v5 = *(_DWORD *)(v3 + 20);
  v6 = *(_DWORD *)(v3 + 24);
  v7 = v2 + 16;
  *(_DWORD *)v7 = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v7 + 4) = v5;
  *(_DWORD *)(v7 + 8) = v6;
  *(_DWORD *)v2 = &off_276C32C;
  *(_DWORD *)(v2 + 8) = &off_276C348;
  *(_DWORD *)(v2 + 28) = &off_276C364;
  j_boost::exception_detail::copy_boost_exception(v2 + 8, v3 + 8);
  return v2;
}


int *__fastcall boost::asio::detail::epoll_reactor::descriptor_state::do_complete(int *result, boost::asio::detail::epoll_reactor::descriptor_state *a2, int a3, unsigned int a4)
{
  int *v4; // r5@1

  v4 = result;
  if ( result )
  {
    result = j_boost::asio::detail::epoll_reactor::descriptor_state::perform_io(a2, a4);
    if ( result )
      result = (int *)((int (__fastcall *)(int *))result[1])(v4);
  }
  return result;
}


char *__fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::clone(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1

  v1 = a1;
  v2 = (char *)j_operator new(0x20u);
  j_boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::clone_impl(
    (int)v2,
    v1);
  return &v2[*(_DWORD *)(*(_DWORD *)v2 - 12)];
}


int __fastcall boost::asio::ssl::detail::openssl_init_base::do_init::openssl_locking_func(boost::asio::ssl::detail::openssl_init_base::do_init *this, int a2, int a3, const char *a4, int a5)
{
  int v5; // r4@1
  int result; // r0@2
  int v7; // r4@2
  unsigned int *v8; // r1@3
  unsigned int *v9; // r1@8
  unsigned int *v10; // r5@14
  _DWORD *v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  _DWORD *v13; // [sp+8h] [bp-18h]@7
  int v14; // [sp+Ch] [bp-14h]@7

  v5 = a2;
  if ( (unsigned __int8)this & 1 )
  {
    boost::asio::ssl::detail::openssl_init_base::instance((boost::asio::ssl::detail::openssl_init_base *)&v13);
    result = pthread_mutex_lock(*(pthread_mutex_t **)(*v13 + 8 * v5));
    v7 = v14;
    if ( v14 )
    {
      v9 = (unsigned int *)(v14 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v9);
        while ( __strex(result - 1, v9) );
      }
      else
        result = (*v9)--;
      if ( result == 1 )
        v10 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v10);
          while ( __strex(result - 1, v10) );
          goto LABEL_25;
        }
        goto LABEL_24;
    }
  }
  else
    boost::asio::ssl::detail::openssl_init_base::instance((boost::asio::ssl::detail::openssl_init_base *)&v11);
    result = pthread_mutex_unlock(*(pthread_mutex_t **)(*v11 + 8 * v5));
    v7 = v12;
    if ( v12 )
      v8 = (unsigned int *)(v12 + 4);
          result = __ldrex(v8);
        while ( __strex(result - 1, v8) );
        result = (*v8)--;
LABEL_24:
        result = (*v10)--;
LABEL_25:
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
        return result;
  return result;
}


void __fastcall boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector(int a1)
{
  boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector(a1);
}


signed int __fastcall boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::wait_duration_msec(int a1, signed int a2)
{
  return j_j_j__ZNK5boost4asio6detail11timer_queueINS1_28forwarding_posix_time_traitsEE18wait_duration_msecEl(
           a1 + 8,
           a2);
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::clone_impl(int a1, int a2)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::clone_impl(
           a1,
           a2);
}


int __fastcall boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::enqueue_timer(int a1, __int64 *a2, int a3, _DWORD *a4)
{
  int v4; // r8@1
  unsigned int v5; // r9@1
  int v6; // r11@1
  _DWORD *v7; // r10@1
  int *v8; // r7@3
  __int64 v9; // r0@3
  int v10; // r2@4
  int v11; // r3@4
  int v12; // r12@4
  int v13; // r1@4
  int v14; // r0@6
  signed int v15; // r2@6
  int v16; // r1@6
  int v17; // r12@7
  unsigned int v18; // r3@7
  int v19; // r9@7
  signed int v20; // r2@7
  signed int v21; // r7@7
  bool v22; // zf@9
  int v23; // r4@14
  int v24; // r2@14
  int v25; // r3@14
  __int64 v26; // kr00_8@14
  __int64 v27; // kr08_8@14
  int v28; // r0@14
  __int64 v29; // kr10_8@14
  int v30; // r6@15
  int v31; // r5@15
  signed int v32; // r1@15
  signed int v33; // r7@15
  int v34; // r0@22
  _DWORD *v35; // r0@25
  _DWORD *v36; // r1@26
  signed int v37; // r1@28
  int v38; // r0@28
  __int64 v40; // [sp+0h] [bp-48h]@3
  int v41; // [sp+8h] [bp-40h]@3
  int v42; // [sp+Ch] [bp-3Ch]@4
  int v43; // [sp+10h] [bp-38h]@14
  __int64 v44; // [sp+14h] [bp-34h]@14
  int v45; // [sp+1Ch] [bp-2Ch]@14
  RakNet *v46; // [sp+20h] [bp-28h]@1

  v4 = a1;
  v5 = 0xFFFF46E4;
  v6 = a3;
  v7 = a4;
  v46 = _stack_chk_guard;
  if ( !*(_DWORD *)(a3 + 16) && *(_DWORD *)(a1 + 8) != a3 )
  {
    v8 = (int *)(a1 + 12);
    *(_DWORD *)(a3 + 8) = (*(_DWORD *)(a1 + 16) - *(_DWORD *)(a1 + 12)) >> 4;
    v40 = *a2;
    v41 = a3;
    v9 = *(_QWORD *)(a1 + 16);
    if ( (_DWORD)v9 == HIDWORD(v9) )
    {
      j_std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::_M_emplace_back_aux<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry const&>(
        (unsigned __int64 *)(v4 + 12),
        (int)&v40);
      v13 = *(_DWORD *)(v4 + 16);
    }
    else
      v10 = HIDWORD(v40);
      v11 = v41;
      v12 = v42;
      *(_DWORD *)v9 = v40;
      *(_DWORD *)(v9 + 4) = v10;
      *(_DWORD *)(v9 + 8) = v11;
      *(_DWORD *)(v9 + 12) = v12;
      v13 = *(_DWORD *)(v4 + 16) + 16;
      *(_DWORD *)(v4 + 16) = v13;
    v14 = *v8;
    v15 = v13 - *v8;
    v16 = (v15 >> 4) - 1;
    if ( v15 >> 4 != 1 )
      v17 = *(_DWORD *)(v14 + 16 * v16 + 4);
      v18 = (unsigned int)((v15 >> 4) - 2) >> 1;
      v19 = *(_DWORD *)(v14 + 16 * v18 + 4);
      v20 = 0;
      v21 = 0;
      if ( *(_DWORD *)(v14 + 16 * v16) >= *(_DWORD *)(v14 + 16 * v18) )
        v20 = 1;
      v22 = v17 == v19;
      if ( v17 >= v19 )
        v21 = 1;
      v5 = 0xFFFF46E4;
      if ( v22 )
        v21 = v20;
      if ( !v21 )
      {
        do
        {
          v23 = v14 + 16 * v16;
          v24 = v18;
          v25 = *(_DWORD *)(v14 + 16 * v16);
          v26 = *(_QWORD *)(v23 + 4);
          v45 = *(_DWORD *)(v23 + 12);
          v43 = v25;
          v44 = v26;
          v27 = *(_QWORD *)(v14 + 16 * v24 + 4);
          *(_DWORD *)(v14 + 16 * v16) = *(_DWORD *)(v14 + 16 * v24);
          *(_QWORD *)(v23 + 4) = v27;
          v28 = *(_DWORD *)(v4 + 12);
          v29 = v44;
          *(_DWORD *)(v28 + 16 * v24) = v43;
          *(_QWORD *)(v28 + 16 * v24 + 4) = v29;
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 12) + 16 * v16 + 8) + 8) = v16;
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 12) + 16 * v24 + 8) + 8) = v24;
          if ( !v24 )
            break;
          v14 = *(_DWORD *)(v4 + 12);
          v18 = (unsigned int)(v24 - 1) >> 1;
          v30 = *(_DWORD *)(v14 + 16 * v24 + 4);
          v31 = *(_DWORD *)(v14 + 16 * v18 + 4);
          v32 = 0;
          v33 = 0;
          if ( *(_DWORD *)(v14 + 16 * v24) < *(_DWORD *)(v14 + 16 * v18) )
            v32 = 1;
          if ( v30 < v31 )
            v33 = 1;
          if ( v30 == v31 )
            v33 = v32;
          v16 = v24;
        }
        while ( v33 );
      }
    *(_QWORD *)(v6 + 12) = *(_DWORD *)(v4 + 8);
    v34 = *(_DWORD *)(v4 + 8);
    if ( v34 )
      *(_DWORD *)(v34 + 16) = v6;
    *(_DWORD *)(v4 + 8) = v6;
  }
  *v7 = 0;
  v35 = *(_DWORD **)(v6 + 4);
  if ( v35 )
    *v35 = v7;
    *(_DWORD *)(v6 + 4) = v7;
    v36 = *(_DWORD **)v6;
  else
    v36 = v7;
    *(_DWORD *)v6 = v7;
  v22 = v36 == v7;
  v37 = 0;
  v38 = 0;
  if ( v22 )
    v37 = 1;
  if ( !*(_DWORD *)(v6 + 8) )
    v38 = 1;
  if ( **(RakNet ***)((char *)&GLOBAL_OFFSET_TABLE_ + v5) != v46 )
    j___stack_chk_fail_1(v38);
  return v38 & v37;
}


signed int __fastcall boost::asio::ssl::detail::verify_callback<web::http::client::details::asio_context::write_request(void)::{lambda(bool,boost::asio::ssl::verify_context &)#1}>::call(int a1, int a2, int *a3)
{
  int v3; // r7@1
  unsigned int v4; // r5@2
  unsigned int *v5; // r6@2
  unsigned int v6; // r3@3
  signed int v7; // r5@6
  bool v8; // zf@6
  unsigned int v9; // r0@11
  unsigned int *v10; // r6@13
  unsigned int v11; // r0@14

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 4);
    v5 = (unsigned int *)(v3 + 4);
    do
    {
      v6 = v4;
      if ( !v4 )
        return 0;
      __dmb();
      v4 = __ldrex(v5);
    }
    while ( v4 != v6 || __strex(v6 + 1, v5) );
    __dmb();
    v7 = 0;
    v8 = *v5 == 0;
    if ( *v5 )
      a1 = *(_DWORD *)(a1 + 4);
      v8 = a1 == 0;
    if ( !v8 )
      v7 = j_web::http::client::details::asio_context::handle_cert_verification(a1, a2, a3);
      v9 = __ldrex(v5);
    while ( __strex(v9 - 1, v5) );
    if ( v9 == 1 )
      v10 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  else
  return v7;
}


void __fastcall __noreturn boost::throw_exception<boost::gregorian::bad_month>(int a1)
{
  boost::throw_exception<boost::gregorian::bad_month>(a1);
}


pthread_mutex_t *__fastcall boost::mutex::~mutex(pthread_mutex_t *mutex)
{
  pthread_mutex_t *v1; // r4@1

  v1 = mutex;
  while ( j_pthread_mutex_destroy_0(v1) == 4 )
    ;
  return v1;
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::clone_impl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r5@3
  int v6; // r2@3
  int v7; // r3@3
  int v8; // r5@3
  int v9; // r1@3

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 28) = &off_26D61AC;
  *(_DWORD *)a1 = &off_2773868;
  sub_21E8AF4((int *)(a1 + 4), (int *)(a2 + 4));
  *(_DWORD *)v2 = &off_2773898;
  *(_DWORD *)(v2 + 8) = &off_26D61E8;
  v4 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v2 + 12) = v4;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v5 = v3 + 16;
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(v5 + 4);
  v8 = *(_DWORD *)(v5 + 8);
  v9 = v2 + 16;
  *(_DWORD *)v9 = v6;
  *(_DWORD *)(v9 + 4) = v7;
  *(_DWORD *)(v9 + 8) = v8;
  *(_DWORD *)v2 = &off_276C32C;
  *(_DWORD *)(v2 + 8) = &off_276C348;
  *(_DWORD *)(v2 + 28) = &off_276C364;
  return v2;
}


int __fastcall boost::thread::native_handle(boost::thread *this)
{
  int v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@3
  pthread_mutex_t *v5; // r6@5
  int v6; // r5@5
  unsigned int *v7; // r0@10
  unsigned int v8; // r1@11
  unsigned int *v9; // r0@13
  unsigned int v10; // r1@14

  v1 = *((_DWORD *)this + 1);
  v2 = *(_DWORD *)this;
  if ( v1 )
  {
    v3 = (unsigned int *)(v1 + 4);
    do
      v4 = __ldrex(v3);
    while ( __strex(v4 + 1, v3) );
  }
  if ( v2 )
    v5 = (pthread_mutex_t *)(v2 + 24);
    sub_1FDD0BC((pthread_mutex_t *)(v2 + 24));
    v6 = *(_DWORD *)(v2 + 20);
    while ( j_pthread_mutex_unlock_2(v5) == 4 )
      ;
  else
    v6 = 0;
    v7 = (unsigned int *)(v1 + 4);
    __dmb();
      v8 = __ldrex(v7);
    while ( __strex(v8 - 1, v7) );
    if ( v8 == 1 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
      v9 = (unsigned int *)(v1 + 8);
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      if ( v10 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
    }
  return v6;
}


void __fastcall boost::gregorian::bad_day_of_month::~bad_day_of_month(boost::gregorian::bad_day_of_month *this)
{
  boost::gregorian::bad_day_of_month::~bad_day_of_month(this);
}


_DWORD *__fastcall boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  return sub_21D2E30(v1);
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(int a1, int a2)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(
           a1,
           a2);
}


void boost::asio::asio_handler_deallocate(boost::asio *this, void *a2, unsigned int a3, ...)
{
  boost::asio::asio_handler_deallocate(this, a2, a3);
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::clone_impl(int a1, int a2)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::clone_impl(
           a1,
           a2);
}


_DWORD *__fastcall boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  return sub_21D315C(v1);
}


int __fastcall boost::asio::basic_streambuf<std::allocator<char>>::~basic_streambuf(int a1)
{
  int v1; // r4@1
  void *v2; // r0@1

  v1 = a1;
  *(_DWORD *)a1 = &off_276C278;
  v2 = *(void **)(a1 + 36);
  if ( v2 )
    j_operator delete(v2);
  *(_DWORD *)v1 = &off_26D40A8;
  sub_21C802C((unsigned int **)(v1 + 28));
  return v1;
}


int __fastcall boost::asio::detail::task_io_service::shutdown_service(boost::asio::detail::task_io_service *this)
{
  boost::asio::detail::task_io_service *v1; // r4@1
  pthread_mutex_t *v2; // r5@1
  int i; // r6@1
  int v4; // r0@2
  void (__fastcall *v5)(_DWORD, int, int *, _DWORD); // r5@5
  int result; // r0@7
  int v7; // [sp+4h] [bp-24h]@5
  void *v8; // [sp+8h] [bp-20h]@5

  v1 = this;
  v2 = (pthread_mutex_t *)((char *)this + 24);
  j_pthread_mutex_lock_1((pthread_mutex_t *)this + 1);
  *((_BYTE *)v1 + 69) = 1;
  j_pthread_mutex_unlock_1(v2);
  for ( i = *((_DWORD *)v1 + 15); i; i = *((_DWORD *)v1 + 15) )
  {
    v4 = *(_DWORD *)i;
    *((_DWORD *)v1 + 15) = *(_DWORD *)i;
    if ( !v4 )
      *((_DWORD *)v1 + 16) = 0;
    *(_DWORD *)i = 0;
    if ( (boost::asio::detail::task_io_service *)i != (boost::asio::detail::task_io_service *)((char *)v1 + 40) )
    {
      v5 = *(void (__fastcall **)(_DWORD, int, int *, _DWORD))(i + 4);
      v7 = 0;
      v8 = sub_21B09F0();
      v5(0, i, &v7, 0);
    }
  }
  result = 0;
  *((_DWORD *)v1 + 9) = 0;
  return result;
}


void __fastcall __noreturn boost::asio::detail::do_throw_error(unsigned __int64 *a1)
{
  boost::asio::detail::do_throw_error(a1);
}


void **__fastcall boost::asio::error::detail::ssl_category::message(boost::asio::error::detail::ssl_category *this, int a2, int a3)
{
  void **v3; // r4@1
  int v4; // r0@1
  const char *v5; // r1@1

  v3 = (void **)this;
  v4 = j_j_ERR_reason_error_string(a3);
  v5 = "asio.ssl error";
  if ( v4 )
    v5 = (const char *)v4;
  return sub_21E94B4(v3, v5);
}


boost::asio::ssl::detail::openssl_init_base::do_init *__fastcall boost::asio::ssl::detail::openssl_init_base::do_init::~do_init(boost::asio::ssl::detail::openssl_init_base::do_init *this)
{
  boost::asio::ssl::detail::openssl_init_base::do_init *v1; // r9@1
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r4@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11

  v1 = this;
  j_CRYPTO_set_id_callback(0);
  j_CRYPTO_set_locking_callback(0);
  j_ERR_free_strings();
  j_ERR_remove_thread_state(0);
  j_EVP_cleanup();
  j_CRYPTO_cleanup_all_ex_data();
  j_CONF_modules_unload(1);
  pthread_key_delete(*((_DWORD *)v1 + 3));
  v3 = *(_QWORD *)v1 >> 32;
  v2 = *(_QWORD *)v1;
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v2 + 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 == 1 )
          v7 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v2 += 8;
    }
    while ( v2 != v3 );
    v2 = *(_DWORD *)v1;
  }
  if ( v2 )
    operator delete((void *)v2);
  return v1;
}


signed int __fastcall boost::asio::detail::reactive_socket_send_op_base<boost::asio::mutable_buffers_1>::do_perform(int a1)
{
  __int64 v2; // [sp+Ch] [bp-14h]@1
  int v3; // [sp+14h] [bp-Ch]@1

  v2 = *(_QWORD *)(a1 + 32);
  v3 = HIDWORD(v2);
  return j_boost::asio::detail::socket_ops::non_blocking_send(
           *(void **)(a1 + 28),
           (int)&v2,
           1,
           *(_DWORD *)(a1 + 40),
           a1 + 12,
           (int *)(a1 + 20));
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r5@3
  int v6; // r2@3
  int v7; // r3@3
  int v8; // r5@3
  int v9; // r1@3

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 28) = &off_26D61AC;
  *(_DWORD *)a1 = &off_2773868;
  sub_21E8AF4((int *)(a1 + 4), (int *)(a2 + 4));
  *(_DWORD *)v2 = &off_276C680;
  *(_DWORD *)(v2 + 8) = &off_26D61E8;
  v4 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v2 + 12) = v4;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v5 = v3 + 16;
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(v5 + 4);
  v8 = *(_DWORD *)(v5 + 8);
  v9 = v2 + 16;
  *(_DWORD *)v9 = v6;
  *(_DWORD *)(v9 + 4) = v7;
  *(_DWORD *)(v9 + 8) = v8;
  *(_DWORD *)v2 = &off_276C60C;
  *(_DWORD *)(v2 + 8) = &off_276C628;
  *(_DWORD *)(v2 + 28) = &off_276C644;
  return v2;
}


void __fastcall __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::rethrow(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1
  int v3; // r3@1

  v1 = a1;
  v2 = j_j___cxa_allocate_exception(32);
  j_boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(
    (int)v2,
    v1);
  j_j___cxa_throw(
    (int)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>,
    (int)boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl,
    v3);
}


void __fastcall __noreturn boost::throw_exception<boost::gregorian::bad_day_of_month>(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1
  int v3; // r3@1
  void **v4; // [sp+4h] [bp-2Ch]@1
  int v5; // [sp+8h] [bp-28h]@1
  void **v6; // [sp+Ch] [bp-24h]@1
  int v7; // [sp+10h] [bp-20h]@1
  int v8; // [sp+14h] [bp-1Ch]@1
  int v9; // [sp+18h] [bp-18h]@1
  int v10; // [sp+1Ch] [bp-14h]@1

  v1 = a1;
  v2 = j_j___cxa_allocate_exception_0(32);
  sub_21E8AF4(&v5, (int *)(v1 + 4));
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = -1;
  v4 = &off_276C65C;
  v6 = &off_276C670;
  j_boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(
    (int)v2,
    (int)&v4);
  j_j___cxa_throw_0(
    (int)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>,
    (int)boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl,
    v3);
}


void *__fastcall boost::detail::make_ready_at_thread_exit(boost::detail *a1)
{
  boost::detail *v1; // r4@1
  void *result; // r0@1
  int v3; // r1@2
  int v4; // r4@2
  unsigned int *v5; // r2@3
  unsigned int v6; // r3@4
  int v7; // r2@5
  unsigned int *v8; // r1@8
  unsigned int v9; // r2@9
  unsigned int v10; // r1@14
  unsigned int v11; // r1@17
  int v12; // [sp+0h] [bp-18h]@2
  int v13; // [sp+4h] [bp-14h]@2

  v1 = a1;
  result = j_boost::detail::get_current_thread_data(a1);
  if ( result )
  {
    v3 = *(_DWORD *)v1;
    v12 = *(_DWORD *)v1;
    v4 = *((_DWORD *)v1 + 1);
    v13 = v4;
    if ( v4 )
    {
      v5 = (unsigned int *)(v4 + 4);
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    v7 = *((_DWORD *)result + 26);
    if ( v7 == *((_DWORD *)result + 27) )
      result = (void *)sub_21AF94C((void **)result + 25, (int)&v12);
    else
      if ( v7 )
      {
        *(_DWORD *)v7 = v3;
        *(_DWORD *)(v7 + 4) = v4;
        if ( v4 )
        {
          v8 = (unsigned int *)(v4 + 4);
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 + 1, v8) );
        }
      }
      *((_DWORD *)result + 26) += 8;
      result = (void *)(v4 + 4);
      __dmb();
        v10 = __ldrex((unsigned int *)result);
      while ( __strex(v10 - 1, (unsigned int *)result) );
      if ( v10 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
        result = (void *)(v4 + 8);
        __dmb();
        do
          v11 = __ldrex((unsigned int *)result);
        while ( __strex(v11 - 1, (unsigned int *)result) );
        if ( v11 == 1 )
          result = (void *)(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
  return result;
}


int __fastcall boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<web::http::client::details::asio_connection_pool::start_epoch_interval(std::shared_ptr<web::http::client::details::asio_connection_pool> const&)::{lambda(boost::system::error_code const&)#1}>(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // r4@1
  int v4; // r6@1
  int v5; // r7@1
  _DWORD *v6; // r0@1
  _DWORD *v7; // r5@1
  int v8; // r0@1
  unsigned int *v9; // r0@2
  unsigned int v10; // r1@3

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = j_boost::asio::asio_handler_allocate((boost::asio *)0x1C, a3);
  v7 = v6;
  *v6 = 0;
  v6[1] = &boost::asio::detail::wait_handler<web::http::client::details::asio_connection_pool::start_epoch_interval(std::shared_ptr<web::http::client::details::asio_connection_pool> const&)::{lambda(boost::system::error_code const&)#1}>::do_complete;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = sub_21B09F0();
  v7[5] = *(_DWORD *)v3;
  v8 = *(_DWORD *)(v3 + 4);
  v7[6] = v8;
  if ( v8 )
  {
    v9 = (unsigned int *)(v8 + 8);
    __dmb();
    do
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
  }
  *(_BYTE *)(v4 + 8) = 1;
  return j_boost::asio::detail::epoll_reactor::schedule_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
           *(_DWORD *)(v5 + 32),
           v5,
           (__int64 *)v4,
           v4 + 12,
           v7);
}


unsigned int __fastcall boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::wait_duration_usec(int a1, signed int a2)
{
  __int64 v2; // kr00_8@1
  signed int v3; // r8@1
  unsigned int v4; // r1@2 OVERLAPPED
  unsigned int v5; // r2@2 OVERLAPPED
  signed int v6; // r3@2
  unsigned int result; // r0@7
  signed int v8; // r3@7
  bool v9; // zf@7
  int v10; // r0@10
  bool v11; // zf@10
  signed int v12; // r3@16
  unsigned int v13; // r1@23
  signed int v14; // r7@23
  signed int v15; // r2@23
  bool v16; // zf@31
  signed int v17; // r0@34
  signed int v18; // r2@48
  signed int v19; // r1@50
  __int64 v20; // [sp+0h] [bp-20h]@2

  v2 = *(_QWORD *)(a1 + 12);
  v3 = a2;
  if ( (_DWORD)v2 == HIDWORD(v2) )
    return a2;
  j_boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(
    (int)&v20,
    (int (__fastcall *)(__time_t *, char *))boost::date_time::c_time::gmtime);
  *(_QWORD *)&v4 = *(_QWORD *)v2;
  v6 = 0;
  if ( (unsigned int)*(_QWORD *)v2 + 2 < 3 )
    v6 = 1;
  if ( (unsigned __int64)(*(_QWORD *)v2 - 9223372036854775806LL) >> 32 )
    v6 = 0;
  if ( v6 )
  {
    result = -2;
    v8 = 0x7FFFFFFF;
    v9 = (v5 ^ 0x7FFFFFFF | v4 ^ 0xFFFFFFFE) == 0;
    if ( v5 ^ 0x7FFFFFFF | v4 ^ 0xFFFFFFFE )
      v9 = __PAIR__(v20, HIDWORD(v20)) == -6442450945LL;
    if ( v9 )
      goto LABEL_48;
    v10 = v5 ^ 0x7FFFFFFF | ~v4;
    v11 = v10 == 0;
    if ( !v10 )
      v11 = (HIDWORD(v20) ^ 0x7FFFFFFF | ~(_DWORD)v20) == 0;
    if ( !v11 )
    {
      v16 = (v5 ^ 0x80000000 | v4) == 0;
      if ( !(v5 ^ 0x80000000 | v4) )
        v16 = __PAIR__(v20, HIDWORD(v20)) == 0x80000000LL;
      if ( v16 )
        goto LABEL_47;
      goto LABEL_34;
    }
    goto LABEL_48;
  }
  v12 = 0;
  if ( (unsigned int)(v20 + 2) < 3 )
    v12 = 1;
  if ( (unsigned __int64)(v20 - 9223372036854775806LL) >> 32 )
    v12 = 0;
  if ( v12 )
    if ( __PAIR__(v20, HIDWORD(v20)) != -6442450945LL )
LABEL_34:
      v17 = 0;
      if ( v4 + 1 < 2 )
        v17 = 1;
      if ( (__PAIR__(v5, v4) - 0x7FFFFFFFFFFFFFFFLL) >> 32 )
        v17 = 0;
      if ( !v17 )
      {
        v8 = 0x7FFFFFFF;
        if ( __PAIR__(v20, HIDWORD(v20)) == 0x80000000LL )
        {
          result = -1;
          goto LABEL_48;
        }
        if ( !(HIDWORD(v20) ^ 0x7FFFFFFF | ~(_DWORD)v20) )
          return 0;
        result = -2;
        v5 = (__PAIR__(v5, v4) - v20) >> 32;
        v4 -= v20;
        if ( __PAIR__(v5, v4) == 9223372036854775806LL )
      }
        return 0;
      v8 = 0x7FFFFFFF;
      if ( !(v5 ^ 0x7FFFFFFF | ~v4) )
        result = -1;
        goto LABEL_48;
LABEL_47:
      result = -2;
LABEL_48:
    v18 = 0;
    if ( result > v3 )
      v18 = 1;
    v19 = 0;
    if ( v8 > v3 >> 31 )
      v19 = 1;
    if ( v8 == v3 >> 31 )
      v19 = v18;
    if ( v19 )
      result = v3;
    return result;
  v14 = 0;
  v8 = (__PAIR__(v5, v4) - v20) >> 32;
  v13 = v4 - v20;
  v15 = 0;
  result = 0;
  if ( !v13 )
    v15 = 1;
  if ( v8 < 0 )
    v14 = 1;
  if ( !v8 )
    v14 = v15;
  if ( !v14 )
    result = v13;
  return result;
}


int __fastcall boost::asio::ssl::detail::engine::map_error_code(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  char v4; // r0@1
  char v5; // r0@7
  int (__fastcall **v6)(_DWORD); // r0@10
  int v7; // r0@11
  char v8; // r0@14

  v2 = a1;
  v3 = a2;
  v4 = `guard variable for'boost::asio::error::get_misc_category(void)::instance;
  __dmb();
  if ( !(v4 & 1)
    && j_j___cxa_guard_acquire_1(&`guard variable for'boost::asio::error::get_misc_category(void)::instance) )
  {
    boost::asio::error::get_misc_category(void)::instance = &off_2763164;
    j_j___cxa_guard_release_1(&`guard variable for'boost::asio::error::get_misc_category(void)::instance);
  }
  if ( *(_UNKNOWN **)(v3 + 4) == &boost::asio::error::get_misc_category(void)::instance && *(_DWORD *)v3 == 2 )
    if ( j_j_BIO_ctrl(*(_DWORD *)(v2 + 4), 13, 0, 0) )
    {
      v5 = `guard variable for'boost::asio::error::get_ssl_category(void)::instance;
      __dmb();
      if ( !(v5 & 1)
        && j_j___cxa_guard_acquire_1(&`guard variable for'boost::asio::error::get_ssl_category(void)::instance) )
      {
        boost::asio::error::get_ssl_category(void)::instance = &off_2763194;
        j_j___cxa_guard_release_1(&`guard variable for'boost::asio::error::get_ssl_category(void)::instance);
      }
      v6 = &GLOBAL_OFFSET_TABLE_;
LABEL_11:
      v7 = *(int *)((char *)v6 + 0xFFFFDFC8);
      *(_DWORD *)v3 = 335544539;
      *(_DWORD *)(v3 + 4) = v7;
      return v3;
    }
    if ( **(_DWORD **)v2 != 2 && !(j_j_SSL_get_shutdown(*(_DWORD *)v2) & 2) )
      v8 = `guard variable for'boost::asio::error::get_ssl_category(void)::instance;
      if ( !(v8 & 1)
      goto LABEL_11;
  return v3;
}


void __fastcall boost::throw_exception<boost::exception_detail::error_info_injector<std::runtime_error>>(int a1)
{
  boost::throw_exception<boost::exception_detail::error_info_injector<std::runtime_error>>(a1);
}


int __fastcall boost::asio::detail::wait_handler<web::http::client::details::asio_context::timeout_timer::reset(void)::{lambda(boost::system::error_code const&)#1}>::do_complete(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  __int64 *v4; // r0@1
  int v5; // r1@1
  unsigned int *v6; // r1@2
  unsigned int v7; // r2@3
  int v8; // r0@5
  unsigned int *v9; // r1@6
  unsigned int v10; // r2@7
  unsigned int v11; // r2@12
  int result; // r0@14
  unsigned int *v13; // r1@15
  unsigned int v14; // r2@16
  int v15; // [sp+4h] [bp-24h]@11
  int v16; // [sp+8h] [bp-20h]@1
  int v17; // [sp+Ch] [bp-1Ch]@1
  __int64 v18; // [sp+10h] [bp-18h]@5

  v2 = a2;
  v3 = a1;
  v16 = *(_DWORD *)(a2 + 20);
  v4 = (__int64 *)(a2 + 12);
  v5 = *(_DWORD *)(a2 + 24);
  v17 = v5;
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 8);
    __dmb();
    do
      v7 = __ldrex(v6);
    while ( __strex(v7 + 1, v6) );
  }
  v18 = *v4;
  v8 = *(_DWORD *)(v2 + 24);
  if ( v8 )
    v9 = (unsigned int *)(v8 + 8);
      v10 = __ldrex(v9);
    while ( __strex(v10 - 1, v9) );
    if ( v10 == 1 )
      (*(void (**)(void))(*(_DWORD *)v8 + 12))();
  j_boost::asio::asio_handler_deallocate((boost::asio *)v2, (void *)0x1C, (unsigned int)&v16);
  if ( v3 )
    v15 = 0;
      v11 = __ldrex((unsigned int *)&v15);
    while ( __strex(1u, (unsigned int *)&v15) );
    j_boost::asio::asio_handler_invoke<boost::asio::detail::binder1<web::http::client::details::asio_context::timeout_timer::reset(void)::{lambda(boost::system::error_code const&)#1},boost::system::error_code>>((int)&v16);
  result = v17;
  if ( v17 )
    v13 = (unsigned int *)(v17 + 8);
      v14 = __ldrex(v13);
    while ( __strex(v14 - 1, v13) );
    if ( v14 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


_DWORD *__fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  return sub_21D315C(v1);
}


void __fastcall __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::rethrow(int a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::rethrow(a1);
}


signed int __fastcall boost::thread::join_noexcept(boost::thread *this)
{
  boost::thread *v1; // r9@1
  int v2; // r5@1
  int v3; // r8@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@3
  signed int v6; // r7@4
  int v7; // r10@8
  pthread_mutex_t *v8; // r4@13
  int v9; // r6@19
  unsigned int *v10; // r0@20
  unsigned int v11; // r1@21
  unsigned int *v12; // r0@23
  unsigned int v13; // r1@24
  unsigned int *v14; // r0@29
  unsigned int v15; // r1@30
  unsigned int *v16; // r0@32
  unsigned int v17; // r1@33
  void *thread_return; // [sp+4h] [bp-2Ch]@16
  pthread_mutex_t *mutex; // [sp+8h] [bp-28h]@5
  char v21; // [sp+Ch] [bp-24h]@5

  v1 = this;
  v2 = *(_DWORD *)this;
  v3 = *((_DWORD *)this + 1);
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
    do
      v5 = __ldrex(v4);
    while ( __strex(v5 + 1, v4) );
  }
  v6 = 0;
  if ( v2 )
    mutex = (pthread_mutex_t *)(v2 + 24);
    v21 = 0;
    sub_21AEAEC(&mutex);
    while ( !*(_BYTE *)(v2 + 48) )
      sub_21AA598((pthread_mutex_t *)(v2 + 28), &mutex);
    v7 = *(_BYTE *)(v2 + 49);
    if ( *(_BYTE *)(v2 + 49) )
    {
      while ( !*(_BYTE *)(v2 + 50) )
        sub_21AA598((pthread_mutex_t *)(v2 + 28), &mutex);
    }
    else
      *(_BYTE *)(v2 + 49) = 1;
    if ( v21 )
      v8 = mutex;
      while ( j_pthread_mutex_unlock_2(v8) == 4 )
        ;
    if ( !v7 )
      thread_return = 0;
      j_pthread_join_0(*(_DWORD *)(v2 + 20), &thread_return);
      sub_1FDD0BC((pthread_mutex_t *)(v2 + 24));
      *(_BYTE *)(v2 + 50) = 1;
      j_pthread_mutex_lock_2((pthread_mutex_t *)(v2 + 28));
      j_pthread_cond_broadcast_1((pthread_cond_t *)(v2 + 32));
      j_pthread_mutex_unlock_2((pthread_mutex_t *)(v2 + 28));
      while ( j_pthread_mutex_unlock_2((pthread_mutex_t *)(v2 + 24)) == 4 )
    if ( *(_DWORD *)v1 == v2 )
      *(_DWORD *)v1 = 0;
      v9 = *((_DWORD *)v1 + 1);
      *((_DWORD *)v1 + 1) = 0;
      if ( v9 )
      {
        v10 = (unsigned int *)(v9 + 4);
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        if ( v11 == 1 )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
          v12 = (unsigned int *)(v9 + 8);
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          if ( v13 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
        }
      }
    v6 = 1;
    v14 = (unsigned int *)(v3 + 4);
    __dmb();
      v15 = __ldrex(v14);
    while ( __strex(v15 - 1, v14) );
    if ( v15 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      v16 = (unsigned int *)(v3 + 8);
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  return v6;
}


void __fastcall __noreturn boost::throw_exception<boost::system::system_error>(int a1)
{
  boost::throw_exception<boost::system::system_error>(a1);
}


boost::asio::ssl::detail::openssl_init_base::do_init *__fastcall boost::asio::ssl::detail::openssl_init_base::do_init::do_init(boost::asio::ssl::detail::openssl_init_base::do_init *this)
{
  boost::asio::ssl::detail::openssl_init_base::do_init *v1; // r11@1
  unsigned int v2; // r0@2
  __int64 v3; // kr00_8@2
  unsigned int v4; // r2@2
  int v5; // r9@3
  int v6; // r4@6
  int v7; // r5@7
  unsigned int *v8; // r1@8
  unsigned int v9; // r0@10
  unsigned int *v10; // r6@14
  unsigned int v11; // r0@16
  int v12; // r4@24
  unsigned int v13; // r6@25
  pthread_mutex_t *v14; // r7@26
  int v15; // r0@27
  int v16; // r7@27
  unsigned int *v17; // r1@28
  unsigned int v18; // r0@30
  unsigned int *v19; // r4@34
  unsigned int v20; // r0@36
  unsigned __int64 v22; // [sp+4h] [bp-3Ch]@1
  unsigned __int64 v23; // [sp+Ch] [bp-34h]@26
  pthread_mutex_t *v24; // [sp+14h] [bp-2Ch]@27
  int v25; // [sp+18h] [bp-28h]@27

  v1 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  LODWORD(v22) = pthread_key_create((pthread_key_t *)this + 3, 0);
  HIDWORD(v22) = sub_DA7AEC();
  if ( (_DWORD)v22 )
    boost::asio::detail::do_throw_error(&v22, "tss");
  j_SSL_library_init();
  j_SSL_load_error_strings();
  j_OPENSSL_add_all_algorithms_noconf();
  v2 = j_CRYPTO_num_locks();
  v3 = *(_QWORD *)v1;
  v4 = (HIDWORD(v3) - (signed int)v3) >> 3;
  if ( v2 <= v4 )
  {
    if ( v2 >= v4 )
    {
      v5 = HIDWORD(v3);
    }
    else
      v5 = v3 + 8 * v2;
      if ( HIDWORD(v3) != v5 )
      {
        v6 = v3 + 8 * v2;
        do
        {
          v7 = *(_DWORD *)(v6 + 4);
          if ( v7 )
          {
            v8 = (unsigned int *)(v7 + 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v9 = __ldrex(v8);
              while ( __strex(v9 - 1, v8) );
            }
            else
              v9 = (*v8)--;
            if ( v9 == 1 )
              v10 = (unsigned int *)(v7 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v11 = __ldrex(v10);
                while ( __strex(v11 - 1, v10) );
              }
              else
                v11 = (*v10)--;
              if ( v11 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
          }
          v6 += 8;
        }
        while ( v6 != HIDWORD(v3) );
      }
      *((_DWORD *)v1 + 1) = v5;
  }
  else
    std::vector<std::shared_ptr<boost::asio::detail::posix_mutex>,std::allocator<std::shared_ptr<boost::asio::detail::posix_mutex>>>::_M_default_append(
      (int)v1,
      v2 - v4);
    v5 = *((_DWORD *)v1 + 1);
  v12 = *(_DWORD *)v1;
  if ( v5 != *(_DWORD *)v1 )
    v13 = 0;
    do
      v14 = (pthread_mutex_t *)operator new(4u);
      LODWORD(v23) = pthread_mutex_init(v14, 0);
      HIDWORD(v23) = sub_DA7AEC();
      if ( (_DWORD)v23 )
        boost::asio::detail::do_throw_error(&v23, "mutex");
      v24 = v14;
      std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<boost::asio::detail::posix_mutex *>(
        &v25,
        (int)v14);
      v24 = *(pthread_mutex_t **)(v12 + 8 * v13);
      v15 = v12 + 8 * v13;
      *(_DWORD *)(v12 + 8 * v13) = v14;
      v16 = *(_DWORD *)(v15 + 4);
      *(_DWORD *)(v15 + 4) = v25;
      v25 = v16;
      if ( v16 )
        v17 = (unsigned int *)(v16 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
        else
          v18 = (*v17)--;
        if ( v18 == 1 )
          v19 = (unsigned int *)(v16 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          if ( &pthread_create )
            __dmb();
            do
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
          else
            v20 = (*v19)--;
          if ( v20 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
      v12 = *(_QWORD *)v1;
      ++v13;
    while ( v13 < (signed int)((*(_QWORD *)v1 >> 32) - v12) >> 3 );
  j_CRYPTO_set_locking_callback((int)boost::asio::ssl::detail::openssl_init_base::do_init::openssl_locking_func);
  j_CRYPTO_set_id_callback((int)boost::asio::ssl::detail::openssl_init_base::do_init::openssl_id_func);
  return v1;
}


int __fastcall boost::this_thread::no_interruption_point::hiden::sleep_until(boost::this_thread::no_interruption_point::hiden *this, const timespec *a2)
{
  boost::this_thread::no_interruption_point::hiden *v2; // r11@1
  signed int v3; // r8@1
  __int32 v4; // r3@1
  int result; // r0@1
  int v6; // r4@1
  signed __int64 v7; // kr00_8@1
  unsigned int v8; // r1@1
  int v9; // lr@1
  bool v10; // cf@1
  bool v11; // zf@1
  signed int v12; // r1@1
  signed int v13; // r7@8
  signed __int64 v14; // r0@10
  int v15; // r6@10
  __time_t v16; // r0@10
  signed __int64 v17; // kr18_8@10
  int v18; // r5@10
  signed int v19; // r1@10
  signed int v20; // r2@10
  int v21; // [sp+4h] [bp-3Ch]@10
  int v22; // [sp+8h] [bp-38h]@10
  struct timespec requested_time; // [sp+Ch] [bp-34h]@10
  struct timespec tp; // [sp+14h] [bp-2Ch]@1

  v2 = this;
  v3 = 0;
  j_clock_gettime(0, &tp);
  v4 = tp.tv_nsec;
  result = *(_DWORD *)v2;
  v6 = *((_DWORD *)v2 + 1);
  v7 = 1000000000LL * (signed int)tp.tv_sec + (signed int)tp.tv_nsec;
  v9 = (unsigned __int64)(1000000000LL * *(_DWORD *)v2 + *((_DWORD *)v2 + 1)) >> 32;
  v8 = 1000000000 * *(_DWORD *)v2 + *((_DWORD *)v2 + 1);
  v10 = v8 >= (unsigned int)v7;
  v11 = v8 == (_DWORD)v7;
  v12 = 0;
  if ( v11 || !v10 )
    v12 = 1;
  if ( v9 <= SHIDWORD(v7) )
    v3 = 1;
  if ( v9 == HIDWORD(v7) )
    v3 = v12;
  if ( !v3 )
  {
    v13 = 1;
    while ( 1 )
    {
      HIDWORD(v14) = (unsigned __int64)(1000000000LL * result + v6 - v4 - 1000000000000000000LL) >> 32;
      LODWORD(v14) = 1000000000 * result + v6 - v4 + 1486618624;
      v15 = v14;
      v16 = j_j___aeabi_ldivmod_2(v14, 1000000000LL);
      requested_time.tv_sec = v16;
      requested_time.tv_nsec = v15 + -1000000000 * v16;
      j_nanosleep_0(&requested_time, 0);
      j_clock_gettime(0, (struct timespec *)&v21);
      result = *(_DWORD *)v2;
      v6 = *((_DWORD *)v2 + 1);
      v17 = 1000000000LL * *(_DWORD *)v2 + *((_DWORD *)v2 + 1);
      v18 = (unsigned __int64)(1000000000LL * v21 + v22) >> 32;
      v19 = 0;
      v20 = 0;
      if ( 1000000000 * v21 + v22 >= (unsigned int)v17 )
        v19 = 1;
      if ( v18 >= SHIDWORD(v17) )
        v20 = 1;
      if ( v18 == HIDWORD(v17) )
        v20 = v19;
      if ( v20 || v13 > 4 )
        break;
      ++v13;
      v4 = tp.tv_nsec;
    }
  }
  return result;
}


int __fastcall boost::asio::detail::epoll_reactor::shutdown_service(boost::asio::detail::epoll_reactor *this)
{
  boost::asio::detail::epoll_reactor *v1; // r4@1
  pthread_mutex_t *v2; // r5@1
  int result; // r0@1
  int i; // r1@1
  int v5; // r3@2
  int v6; // r3@7
  int v7; // r3@12
  int v8; // r3@19
  int v9; // r3@21
  int j; // r4@24
  int v11; // r5@26
  int v12; // r7@28
  int (__fastcall *v13)(_DWORD, int, int *, _DWORD); // r4@28
  int k; // r5@29
  int (__fastcall *v15)(_DWORD, int, int *, _DWORD); // r7@32
  int v16; // [sp+0h] [bp-28h]@1
  _DWORD *v17; // [sp+4h] [bp-24h]@1
  int v18; // [sp+8h] [bp-20h]@28
  void *v19; // [sp+Ch] [bp-1Ch]@28

  v1 = this;
  v2 = (pthread_mutex_t *)((char *)this + 24);
  j_pthread_mutex_lock_1((pthread_mutex_t *)this + 1);
  *((_BYTE *)v1 + 48) = 1;
  j_pthread_mutex_unlock_1(v2);
  result = 0;
  v16 = 0;
  v17 = 0;
  for ( i = *((_DWORD *)v1 + 14); i; i = *((_DWORD *)v1 + 14) )
  {
    v5 = *(_DWORD *)(i + 36);
    if ( v5 )
    {
      if ( v17 )
        *v17 = v5;
      else
        v16 = *(_DWORD *)(i + 36);
      v17 = *(_DWORD **)(i + 40);
      *(_DWORD *)(i + 36) = 0;
      *(_DWORD *)(i + 40) = 0;
    }
    v6 = *(_DWORD *)(i + 44);
    if ( v6 )
        *v17 = v6;
        v16 = *(_DWORD *)(i + 44);
      v17 = *(_DWORD **)(i + 48);
      *(_DWORD *)(i + 44) = 0;
      *(_DWORD *)(i + 48) = 0;
    v7 = *(_DWORD *)(i + 52);
    if ( v7 )
        *v17 = v7;
        v16 = *(_DWORD *)(i + 52);
      v17 = *(_DWORD **)(i + 56);
      *(_DWORD *)(i + 52) = 0;
      *(_DWORD *)(i + 56) = 0;
    *(_BYTE *)(i + 60) = 1;
    if ( *((_DWORD *)v1 + 14) == i )
      *((_DWORD *)v1 + 14) = *(_DWORD *)(i + 12);
    v8 = *(_DWORD *)(i + 16);
    if ( v8 )
      *(_DWORD *)(v8 + 12) = *(_DWORD *)(i + 12);
    v9 = *(_DWORD *)(i + 12);
    if ( v9 )
      *(_DWORD *)(v9 + 16) = *(_DWORD *)(i + 16);
    *(_DWORD *)(i + 12) = *((_DWORD *)v1 + 15);
    *(_DWORD *)(i + 16) = 0;
    *((_DWORD *)v1 + 15) = i;
  }
  for ( j = *((_DWORD *)v1 + 11); j; j = *(_DWORD *)(j + 4) )
    result = (*(int (__fastcall **)(int, int *))(*(_DWORD *)j + 24))(j, &v16);
  v11 = v16;
  if ( v16 )
    v16 = 0;
    v17 = 0;
    do
      v12 = *(_DWORD *)v11;
      *(_DWORD *)v11 = 0;
      v13 = *(int (__fastcall **)(_DWORD, int, int *, _DWORD))(v11 + 4);
      v18 = 0;
      v19 = sub_21B09F0();
      result = v13(0, v11, &v18, 0);
      v11 = v12;
    while ( v12 );
    for ( k = v16; v16; k = v16 )
      v16 = *(_DWORD *)k;
      if ( !v16 )
        v17 = 0;
      *(_DWORD *)k = 0;
      v15 = *(int (__fastcall **)(_DWORD, int, int *, _DWORD))(k + 4);
      result = v15(0, k, &v18, 0);
  return result;
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r3@3
  int v6; // r6@3
  int v7; // r0@3

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 28) = &off_26D61AC;
  *(_DWORD *)a1 = &off_2773868;
  sub_21E8AF4((int *)(a1 + 4), (int *)(a2 + 4));
  *(_DWORD *)v2 = &off_276C4C0;
  *(_DWORD *)(v2 + 8) = &off_26D61E8;
  v4 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v2 + 12) = v4;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v5 = *(_DWORD *)(v3 + 20);
  v6 = *(_DWORD *)(v3 + 24);
  v7 = v2 + 16;
  *(_DWORD *)v7 = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v7 + 4) = v5;
  *(_DWORD *)(v7 + 8) = v6;
  *(_DWORD *)v2 = &off_276C44C;
  *(_DWORD *)(v2 + 8) = &off_276C468;
  *(_DWORD *)(v2 + 28) = &off_276C484;
  j_boost::exception_detail::copy_boost_exception(v2 + 8, v3 + 8);
  return v2;
}


int __fastcall boost::this_thread::hiden::sleep_for(boost::this_thread::hiden *this, const timespec *a2)
{
  const struct timespec *v2; // r4@1
  void *v3; // r0@1
  void *v4; // r5@1
  __time_t v5; // r7@3
  int result; // r0@4
  pthread_mutex_t *v7; // r4@5
  pthread_mutex_t *mutex; // [sp+4h] [bp-3Ch]@2
  unsigned __int8 v9; // [sp+8h] [bp-38h]@2
  struct timespec tp; // [sp+Ch] [bp-34h]@3
  int v11; // [sp+14h] [bp-2Ch]@3
  __time_t v12; // [sp+18h] [bp-28h]@3

  v2 = (const struct timespec *)this;
  v3 = j_boost::detail::get_current_thread_data(this);
  v4 = v3;
  if ( v3 )
  {
    mutex = (pthread_mutex_t *)((char *)v3 + 36);
    v9 = 0;
    sub_21AEAEC(&mutex);
    do
    {
      j_clock_gettime(0, &tp);
      v5 = 1000000000 * (tp.tv_sec + v2->tv_sec) + tp.tv_nsec + v2->tv_nsec;
      v11 = j_j___aeabi_ldivmod_2(
              __PAIR__(
                (1000000000 * (unsigned __int64)(unsigned int)(tp.tv_sec + v2->tv_sec) >> 32)
              + 1000000000 * ((unsigned __int64)((signed int)tp.tv_sec + (signed __int64)v2->tv_sec) >> 32),
                1000000000 * (tp.tv_sec + v2->tv_sec))
            + __PAIR__(1000000000, tp.tv_nsec + v2->tv_nsec),
              1000000000LL);
      v12 = v5 + -1000000000 * v11;
    }
    while ( sub_21AA8F8((pthread_mutex_t *)((char *)v4 + 40), &mutex, (const struct timespec *)&v11) );
    result = v9;
    if ( v9 )
      v7 = mutex;
      do
        result = j_pthread_mutex_unlock_2(v7);
      while ( result == 4 );
  }
  else
    result = v2->tv_sec;
    if ( (((unsigned __int64)(1000000000LL * v2->tv_sec + v2->tv_nsec) >> 32) & 0x80000000) == 0LL )
      result = j_j_nanosleep_1(v2, 0);
  return result;
}


_DWORD *__fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::~clone_impl(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  return sub_21D3000(v1);
}


void __fastcall boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector(int a1)
{
  boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector(a1);
}


boost::gregorian::bad_year *__fastcall boost::gregorian::bad_year::bad_year(boost::gregorian::bad_year *this)
{
  boost::gregorian::bad_year *v1; // r5@1
  void *v2; // r0@1
  unsigned int *v4; // r1@3
  signed int v5; // r2@4
  int v6; // [sp+4h] [bp-1Ch]@1

  v1 = this;
  sub_21E94B4((void **)&v6, "Year is out of valid range: 1400..10000");
  sub_21D36BC((int)v1, &v6);
  v2 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v6 - 4);
    __dmb();
    do
      v5 = __ldrex(v4);
    while ( __strex(v5 - 1, v4) );
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  }
  *(_DWORD *)v1 = &off_276C4C0;
  return v1;
}


int __fastcall boost::this_thread::interruption_enabled(boost::this_thread *this)
{
  _BYTE *v1; // r0@1
  int result; // r0@2

  v1 = j_boost::detail::get_current_thread_data(this);
  if ( v1 )
    result = v1[112] != 0;
  else
    result = 0;
  return result;
}


void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl(int a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl(a1);
}


void __fastcall boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  sub_21D315C(v1);
  j_j_j__ZdlPv_8((void *)v1);
}


boost::asio::detail::strand_service::strand_impl *__fastcall boost::asio::detail::strand_service::strand_impl::~strand_impl(boost::asio::detail::strand_service::strand_impl *this)
{
  boost::asio::detail::strand_service::strand_impl *v1; // r4@1
  int i; // r6@1
  int v3; // r0@2
  void (__fastcall *v4)(_DWORD, int, int *, _DWORD); // r5@4
  int j; // r6@5
  int v6; // r0@6
  void (__fastcall *v7)(_DWORD, int, int *, _DWORD); // r5@8
  int v9; // [sp+0h] [bp-20h]@4
  void *v10; // [sp+4h] [bp-1Ch]@4

  v1 = this;
  for ( i = *((_DWORD *)this + 7); i; i = *((_DWORD *)v1 + 7) )
  {
    v3 = *(_DWORD *)i;
    *((_DWORD *)v1 + 7) = *(_DWORD *)i;
    if ( !v3 )
      *((_DWORD *)v1 + 8) = 0;
    *(_DWORD *)i = 0;
    v4 = *(void (__fastcall **)(_DWORD, int, int *, _DWORD))(i + 4);
    v9 = 0;
    v10 = sub_21B09F0();
    v4(0, i, &v9, 0);
  }
  for ( j = *((_DWORD *)v1 + 5); j; j = *((_DWORD *)v1 + 5) )
    v6 = *(_DWORD *)j;
    *((_DWORD *)v1 + 5) = *(_DWORD *)j;
    if ( !v6 )
      *((_DWORD *)v1 + 6) = 0;
    *(_DWORD *)j = 0;
    v7 = *(void (__fastcall **)(_DWORD, int, int *, _DWORD))(j + 4);
    v7(0, j, &v9, 0);
  j_pthread_mutex_destroy_0((pthread_mutex_t *)((char *)v1 + 12));
  return v1;
}


int __fastcall boost::thread_detail::rollback_once_region(_DWORD *a1)
{
  _DWORD *v1; // r4@1

  v1 = a1;
  j_pthread_mutex_lock_2((pthread_mutex_t *)&unk_28832A4);
  __dmb();
  *v1 = 0;
  j_pthread_mutex_unlock_2((pthread_mutex_t *)&unk_28832A4);
  return j_pthread_cond_broadcast_1((pthread_cond_t *)&unk_28832A8);
}


int __fastcall boost::asio::ip::address::from_string(int a1, const char *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int v5; // r7@1
  const char *v6; // r6@1
  int v7; // r0@4
  int v8; // r8@5
  int v9; // r6@5
  void *v10; // r0@5
  int result; // r0@6
  int v12; // r12@9
  void *v13; // r0@11
  int v14; // [sp+8h] [bp-40h]@2
  int v15; // [sp+Ch] [bp-3Ch]@2
  int v16; // [sp+10h] [bp-38h]@2
  int v17; // [sp+14h] [bp-34h]@2
  int buf; // [sp+18h] [bp-30h]@1
  int v19; // [sp+1Ch] [bp-2Ch]@1
  int v20; // [sp+20h] [bp-28h]@1
  int v21; // [sp+24h] [bp-24h]@1
  int v22; // [sp+28h] [bp-20h]@1

  v3 = a3;
  v4 = a1;
  v5 = 0;
  v22 = 0;
  v6 = a2;
  v20 = 0;
  v21 = 0;
  buf = 0;
  v19 = 0;
  if ( j_boost::asio::detail::socket_ops::inet_pton(10, a2, (int)&buf, &v22, a3) <= 0 )
  {
    v16 = 0;
    v17 = 0;
    v14 = 0;
    v15 = 0;
  }
  else
    v14 = buf;
    v15 = v19;
    v16 = v20;
    v17 = v21;
    v5 = v22;
  v7 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 )
    buf = 0;
    *(_DWORD *)j___errno_0(v7) = 0;
    v8 = j_inet_pton(2, v6, &buf);
    v9 = *(_DWORD *)j___errno_0(v8);
    v10 = sub_21B09F0();
    *(_DWORD *)v3 = v9;
    *(_DWORD *)(v3 + 4) = v10;
    if ( v8 <= 0 )
    {
      if ( !v9 )
      {
        v13 = sub_21B09F0();
        *(_DWORD *)v3 = 22;
        *(_DWORD *)(v3 + 4) = v13;
      }
      result = 0;
      *(_DWORD *)v4 = 0;
      *(_DWORD *)(v4 + 4) = 0;
      *(_DWORD *)(v4 + 8) = 0;
      *(_DWORD *)(v4 + 12) = 0;
      *(_DWORD *)(v4 + 16) = 0;
      *(_DWORD *)(v4 + 20) = 0;
      *(_DWORD *)(v4 + 24) = 0;
    }
    else
      result = buf;
        *(_DWORD *)v4 = 0;
        *(_DWORD *)(v4 + 4) = result;
    *(_DWORD *)v4 = 0;
    *(_DWORD *)(v4 + 4) = 0;
    v12 = v4 + 8;
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 12) = 0;
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 20) = 0;
    *(_DWORD *)v4 = 1;
    result = v14;
    *(_DWORD *)v12 = v14;
    *(_DWORD *)(v12 + 4) = v15;
    *(_DWORD *)(v12 + 8) = v16;
    *(_DWORD *)(v12 + 12) = v17;
    *(_DWORD *)(v12 + 16) = v5;
  return result;
}


void __fastcall __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::rethrow(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1
  int v3; // r3@1

  v1 = a1;
  v2 = j_j___cxa_allocate_exception(32);
  j_boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::clone_impl(
    (int)v2,
    v1);
  j_j___cxa_throw(
    (int)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>,
    (int)boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::~clone_impl,
    v3);
}


boost::asio::detail::epoll_reactor::perform_io_cleanup_on_block_exit *__fastcall boost::asio::detail::epoll_reactor::perform_io_cleanup_on_block_exit::~perform_io_cleanup_on_block_exit(boost::asio::detail::epoll_reactor::perform_io_cleanup_on_block_exit *this)
{
  boost::asio::detail::epoll_reactor::perform_io_cleanup_on_block_exit *v1; // r4@1
  int v2; // r0@4
  unsigned int *v3; // r0@4
  unsigned int v4; // r1@5
  int i; // r6@7
  int v6; // r0@8
  void (__fastcall *v7)(_DWORD, int, int *, _DWORD); // r5@10
  int v9; // [sp+0h] [bp-28h]@10
  void *v10; // [sp+4h] [bp-24h]@10

  v1 = this;
  if ( *((_DWORD *)this + 3) )
  {
    if ( *((_DWORD *)this + 1) )
      j_boost::asio::detail::task_io_service::post_deferred_completions(
        *(_DWORD *)(*(_DWORD *)this + 20),
        (int *)this + 1);
  }
  else
    v2 = *(_DWORD *)(*(_DWORD *)this + 20);
    __dmb();
    v3 = (unsigned int *)(v2 + 56);
    do
      v4 = __ldrex(v3);
    while ( __strex(v4 + 1, v3) );
  for ( i = *((_DWORD *)v1 + 1); i; i = *((_DWORD *)v1 + 1) )
    v6 = *(_DWORD *)i;
    *((_DWORD *)v1 + 1) = *(_DWORD *)i;
    if ( !v6 )
      *((_DWORD *)v1 + 2) = 0;
    *(_DWORD *)i = 0;
    v7 = *(void (__fastcall **)(_DWORD, int, int *, _DWORD))(i + 4);
    v9 = 0;
    v10 = sub_21B09F0();
    v7(0, i, &v9, 0);
  return v1;
}


signed int __fastcall boost::asio::detail::socket_ops::non_blocking_connect(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r0@1
  int v6; // r5@3
  int v7; // r7@3
  void *v8; // r0@3
  void *v9; // r0@4
  int v10; // r5@4
  void *v11; // r0@4
  signed int v12; // r1@6
  int optval; // [sp+4h] [bp-24h]@2
  struct pollfd fds; // [sp+8h] [bp-20h]@1
  socklen_t v16; // [sp+10h] [bp-18h]@3

  v2 = a1;
  fds.fd = a1;
  v3 = a2;
  *(_DWORD *)&fds.events = 4;
  v4 = 0;
  v5 = j_poll(&fds, 1u, 0);
  if ( v5 )
  {
    optval = 0;
    if ( v2 == -1 )
    {
      v11 = sub_21B09F0();
      v12 = 9;
    }
    else
      *(_DWORD *)j___errno_0(v5) = 0;
      v16 = 4;
      v6 = j_getsockopt_0(v2, 1, 4, &optval, &v16);
      v7 = *(_DWORD *)j___errno_0(v6);
      v8 = sub_21B09F0();
      *(_DWORD *)v3 = v7;
      *(_DWORD *)(v3 + 4) = v8;
      if ( v6 )
        return 1;
      v9 = sub_21B09F0();
      *(_DWORD *)v3 = 0;
      *(_DWORD *)(v3 + 4) = v9;
      v10 = optval;
      if ( v10 )
      {
        *(_DWORD *)v3 = v10;
LABEL_9:
        *(_DWORD *)(v3 + 4) = v11;
      }
      v12 = 0;
    *(_DWORD *)v3 = v12;
    goto LABEL_9;
  }
  return v4;
}


boost::asio::detail::resolver_service_base *__fastcall boost::asio::detail::resolver_service_base::~resolver_service_base(boost::asio::detail::resolver_service_base *this)
{
  boost::asio::detail::resolver_service_base *v1; // r4@1
  int v2; // r5@1
  boost::asio::detail::task_io_service **v3; // r5@5
  boost::asio::detail::task_io_service *v4; // r0@6
  unsigned int *v5; // r1@6
  unsigned int v6; // r2@7

  v1 = this;
  j_boost::asio::detail::resolver_service_base::shutdown_service(this);
  v2 = *((_DWORD *)v1 + 5);
  if ( v2 )
  {
    if ( !*(_BYTE *)(v2 + 4) )
      j_pthread_detach(*(_DWORD *)v2);
    j_operator delete((void *)v2);
  }
  v3 = (boost::asio::detail::task_io_service **)*((_DWORD *)v1 + 4);
  if ( v3 )
    v4 = *v3;
    __dmb();
    v5 = (unsigned int *)((char *)v4 + 56);
    do
      v6 = __ldrex(v5);
    while ( __strex(v6 - 1, v5) );
    if ( v6 == 1 )
      j_boost::asio::detail::task_io_service::stop(v4);
    j_operator delete(v3);
  j_boost::asio::detail::scoped_ptr<boost::asio::io_service>::~scoped_ptr((void **)v1 + 2);
  j_pthread_mutex_destroy_0((pthread_mutex_t *)((char *)v1 + 4));
  return v1;
}


  return boost::asio::ssl::context::set_verify_callback<web::websockets::client::details::wspp_callback_client::connect(void)::{lambda(std::weak_ptr<void>)#1}::operator() const(std::weak_ptr<void>)::{lambda(bool,boost::asio::ssl::verify_context &)
{
           a2,
           a3,
           a4);
}


void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::bad_cast>>::rethrow(int a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::bad_cast>>::rethrow(a1);
}


int __fastcall boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::deadline_timer_service(int a1, int *a2)
{
  return boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::deadline_timer_service(
           a1,
           a2);
}


int __fastcall boost::asio::ssl::rfc2818_verification::match_pattern(boost::asio::ssl::rfc2818_verification *this, const char *a2, unsigned int a3, const char *a4)
{
  _BYTE *v4; // r5@1
  boost::asio::ssl::rfc2818_verification *v5; // r4@1
  int v6; // r2@1
  int result; // r0@1
  bool v8; // zf@3
  const char *v9; // r7@6
  int v10; // r8@6
  int v11; // r0@7
  bool v12; // zf@10
  bool v13; // zf@17
  signed int v14; // r1@21
  signed int v15; // r0@23

  v4 = (_BYTE *)a3;
  v5 = this;
  v6 = *(_BYTE *)a3;
  result = 0;
  if ( !((unsigned int)a2 | v6) )
    result = 1;
  v8 = a2 == 0;
  if ( a2 )
    v8 = v6 == 0;
  if ( !v8 )
  {
    v9 = &a2[(_DWORD)v5];
    v10 = tolower_tab_ + 2;
    do
    {
      v11 = *(_BYTE *)v5;
      if ( v11 == 42 )
      {
        v5 = (boost::asio::ssl::rfc2818_verification *)((char *)v5 + 1);
        while ( 1 )
        {
          v12 = (unsigned __int8)v6 == 0;
          if ( (_BYTE)v6 )
            v12 = (unsigned __int8)v6 == 46;
          if ( v12 )
            break;
          if ( j_boost::asio::ssl::rfc2818_verification::match_pattern(
                 v5,
                 (const char *)(v9 - (const char *)v5),
                 (unsigned int)v4,
                 a4) )
          {
            return 1;
          }
          LOBYTE(v6) = (v4++)[1];
        }
      }
      else
        if ( *(_WORD *)(v10 + 2 * v11) != *(_WORD *)(v10 + 2 * (unsigned __int8)v6) )
          return 0;
        ++v4;
      v6 = *v4;
      v13 = (const char *)v5 == v9;
      if ( (const char *)v5 != v9 )
        v13 = v6 == 0;
    }
    while ( !v13 );
    v14 = 0;
    if ( (const char *)v5 == v9 )
      v14 = 1;
    v15 = 0;
    if ( !*v4 )
      v15 = 1;
    result = v15 & v14;
  }
  return result;
}


int __fastcall boost::exception_detail::copy_boost_exception(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1
  int v4; // r1@1
  int v5; // r4@2
  int result; // r0@9
  int v7; // [sp+4h] [bp-14h]@2

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 )
  {
    (*(void (__fastcall **)(int *))(*(_DWORD *)v4 + 20))(&v7);
    v5 = v7;
    if ( v7 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
      if ( v7 && (*(int (**)(void))(*(_DWORD *)v7 + 16))() == 1 )
        v7 = 0;
    }
    else
      v5 = 0;
  }
  else
    v5 = 0;
  *(_DWORD *)(v3 + 12) = *(_DWORD *)(v2 + 12);
  *(_DWORD *)(v3 + 16) = *(_DWORD *)(v2 + 16);
  *(_DWORD *)(v3 + 8) = *(_DWORD *)(v2 + 8);
  result = *(_DWORD *)(v3 + 4);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 16))();
    if ( result == 1 )
      result = 0;
      *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 4) = v5;
  if ( v5 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 16))(v5);
  return result;
}


char *__fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1

  v1 = a1;
  v2 = (char *)j_operator new(0x20u);
  j_boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(
    (int)v2,
    v1);
  return &v2[*(_DWORD *)(*(_DWORD *)v2 - 12)];
}


void __fastcall boost::exception_detail::error_info_injector<std::invalid_argument>::~error_info_injector(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  sub_21D3000(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall boost::thread::joinable(boost::thread *this)
{
  int v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@3
  int v5; // r4@4
  unsigned int v6; // r1@5
  unsigned int *v7; // r0@7
  unsigned int v8; // r1@8
  int result; // r0@11

  v1 = *(_DWORD *)this;
  v2 = *((_DWORD *)this + 1);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    do
      v4 = __ldrex(v3);
    while ( __strex(v4 + 1, v3) );
    __dmb();
    v5 = v1 != 0;
      v6 = __ldrex(v3);
    while ( __strex(v6 - 1, v3) );
    if ( v6 == 1 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      v7 = (unsigned int *)(v2 + 8);
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
    }
    result = v5;
  }
  else
    result = v1 != 0;
  return result;
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r2@3
  int v6; // r3@3
  int v7; // r12@3

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 28) = &off_26D61AC;
  *(_DWORD *)a1 = &off_2773798;
  sub_21E8AF4((int *)(a1 + 4), (int *)(a2 + 4));
  *(_DWORD *)(v2 + 8) = &off_26D61E8;
  v4 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v2 + 12) = v4;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v5 = *(_DWORD *)(v3 + 20);
  v6 = *(_DWORD *)(v3 + 24);
  v7 = v2 + 16;
  *(_DWORD *)v7 = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v7 + 4) = v5;
  *(_DWORD *)(v7 + 8) = v6;
  *(_DWORD *)v2 = &off_27650FC;
  *(_DWORD *)(v2 + 8) = &off_2765118;
  *(_DWORD *)(v2 + 28) = &off_2765134;
  j_boost::exception_detail::copy_boost_exception(v2 + 8, v3 + 8);
  return v2;
}


int __fastcall boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<web::http::client::details::asio_connection_pool::start_epoch_interval(std::shared_ptr<web::http::client::details::asio_connection_pool> const&)::{lambda(boost::system::error_code const&)#1}>(int a1, int a2, unsigned int a3)
{
  return boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<web::http::client::details::asio_connection_pool::start_epoch_interval(std::shared_ptr<web::http::client::details::asio_connection_pool> const&)::{lambda(boost::system::error_code const&)#1}>(
           a1,
           a2,
           a3);
}


boost::asio::detail::epoll_reactor *__fastcall boost::asio::detail::epoll_reactor::epoll_reactor(boost::asio::detail::epoll_reactor *this, boost::asio::io_service *a2)
{
  boost::asio::detail::epoll_reactor *v2; // r7@1
  boost::asio::detail::epoll_reactor *v3; // r0@2
  int v4; // r5@2
  int v5; // r2@3
  int v7; // [sp+0h] [bp-48h]@3
  int v8; // [sp+4h] [bp-44h]@3
  boost::asio::detail::epoll_reactor *v9; // [sp+8h] [bp-40h]@3
  int v10; // [sp+Ch] [bp-3Ch]@3
  unsigned __int64 v11; // [sp+14h] [bp-34h]@1
  void *v12; // [sp+18h] [bp-30h]@1
  unsigned __int64 v13; // [sp+1Ch] [bp-2Ch]@2
  void *v14[2]; // [sp+20h] [bp-28h]@2
  char buf; // [sp+27h] [bp-21h]@3

  v2 = this;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = 0;
  *(_DWORD *)this = &off_276C7A4;
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 1);
  LODWORD(v11) = j_pthread_mutex_init_0((pthread_mutex_t *)this + 1, 0);
  v12 = sub_21B09F0();
  if ( (_DWORD)v11 )
    j_boost::asio::detail::do_throw_error(&v11, "mutex");
  v3 = (boost::asio::detail::epoll_reactor *)j_boost::asio::detail::pipe_select_interrupter::open_descriptors((boost::asio::detail::epoll_reactor *)((char *)v2 + 28));
  *((_DWORD *)v2 + 9) = j_boost::asio::detail::epoll_reactor::do_epoll_create(v3);
  *((_DWORD *)v2 + 10) = -1;
  v4 = (int)v2 + 40;
  *(_DWORD *)(v4 + 4) = 0;
  *(_BYTE *)(v4 + 8) = 0;
  LODWORD(v13) = j_pthread_mutex_init_0((pthread_mutex_t *)((char *)v2 + 52), 0);
  v14[0] = sub_21B09F0();
  if ( (_DWORD)v13 )
    j_boost::asio::detail::do_throw_error(&v13, "mutex");
  *((_DWORD *)v2 + 14) = 0;
  *((_DWORD *)v2 + 15) = 0;
  v10 = 0;
  v8 = qword_260F9EC;
  v7 = -2147483639;
  v9 = (boost::asio::detail::epoll_reactor *)((char *)v2 + 28);
  j_epoll_ctl(*((_DWORD *)v2 + 9), 1, *((_DWORD *)v2 + 7), (struct epoll_event *)&v7);
  buf = 0;
  j_write_0(*((_DWORD *)v2 + 8), &buf, 1u);
  v5 = *(_DWORD *)v4;
  if ( *(_DWORD *)v4 != -1 )
  {
    v7 = 9;
    v9 = (boost::asio::detail::epoll_reactor *)((char *)v2 + 40);
    j_epoll_ctl(*((_DWORD *)v2 + 9), 1, v5, (struct epoll_event *)&v7);
  }
  return v2;
}


void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::bad_cast>>::~clone_impl(std::bad_cast *this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::bad_cast>>::~clone_impl(this);
}


signed int __fastcall boost::asio::detail::reactive_socket_connect_op_base::do_perform(int a1)
{
  return j_j_j__ZN5boost4asio6detail10socket_ops20non_blocking_connectEiRNS_6system10error_codeE(
           *(_DWORD *)(a1 + 28),
           a1 + 12);
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::clone_impl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r2@3
  int v6; // r3@3
  int v7; // r12@3

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 28) = &off_26D61AC;
  *(_DWORD *)a1 = &off_2773868;
  sub_21E8AF4((int *)(a1 + 4), (int *)(a2 + 4));
  *(_DWORD *)v2 = &off_2773810;
  *(_DWORD *)(v2 + 8) = &off_26D61E8;
  v4 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v2 + 12) = v4;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v5 = *(_DWORD *)(v3 + 20);
  v6 = *(_DWORD *)(v3 + 24);
  v7 = v2 + 16;
  *(_DWORD *)v7 = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v7 + 4) = v5;
  *(_DWORD *)(v7 + 8) = v6;
  *(_DWORD *)v2 = &off_27651BC;
  *(_DWORD *)(v2 + 8) = &off_27651D8;
  *(_DWORD *)(v2 + 28) = &off_27651F4;
  j_boost::exception_detail::copy_boost_exception(v2 + 8, v3 + 8);
  return v2;
}


signed int __fastcall boost::asio::basic_streambuf<std::allocator<char>>::underflow(int a1)
{
  _BYTE *v1; // r1@1
  unsigned int v2; // r2@1
  signed int result; // r0@2

  v1 = *(_BYTE **)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 20);
  if ( (unsigned int)v1 < v2 )
  {
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 8) = v1;
    *(_DWORD *)(a1 + 12) = v2;
    result = *v1;
  }
  else
    result = -1;
  return result;
}


boost::asio::detail::resolver_service_base *__fastcall boost::asio::detail::resolver_service_base::resolver_service_base(boost::asio::detail::resolver_service_base *this, boost::asio::io_service *a2)
{
  boost::asio::detail::resolver_service_base *v2; // r5@1
  boost::asio::io_service *v3; // r6@2
  _DWORD *v4; // r7@2
  int v5; // r0@2
  _DWORD *v6; // r0@2
  int v7; // r1@2
  unsigned int *v8; // r1@2
  unsigned int v9; // r2@3
  int v11; // [sp+0h] [bp-20h]@1
  void *v12; // [sp+4h] [bp-1Ch]@1

  v2 = this;
  *(_DWORD *)this = *((_DWORD *)a2 + 1);
  v11 = j_pthread_mutex_init_0((pthread_mutex_t *)((char *)this + 4), 0);
  v12 = sub_21B09F0();
  if ( v11 )
    j_boost::asio::detail::do_throw_error((unsigned __int64 *)&v11, "mutex");
  v3 = (boost::asio::io_service *)j_operator new(8u);
  v4 = j_operator new(0x10u);
  j_boost::asio::detail::service_registry::service_registry<boost::asio::detail::task_io_service,unsigned int>(
    (int)v4,
    v3,
    0,
    0xFFFFFFFF);
  v5 = v4[3];
  *(_DWORD *)v3 = v4;
  *((_DWORD *)v3 + 1) = v5;
  *((_DWORD *)v2 + 2) = v3;
  *((_DWORD *)v2 + 3) = v5;
  v6 = j_operator new(4u);
  v7 = *((_DWORD *)v3 + 1);
  *v6 = v7;
  __dmb();
  v8 = (unsigned int *)(v7 + 56);
  do
    v9 = __ldrex(v8);
  while ( __strex(v9 + 1, v8) );
  *((_QWORD *)v2 + 2) = (unsigned int)v6;
  return v2;
}


int __fastcall boost::asio::detail::task_io_service::post_immediate_completion(int a1, _DWORD *a2, int a3)
{
  int v3; // r4@1
  _DWORD *v4; // r6@1
  _DWORD *i; // r0@3
  int result; // r0@7
  _DWORD *v7; // r1@8
  unsigned int *v8; // r0@11
  unsigned int v9; // r1@12
  _DWORD *v10; // r0@13
  int v11; // r0@16
  int v12; // r0@18
  int v13; // [sp+0h] [bp-20h]@19
  int v14; // [sp+4h] [bp-1Ch]@19
  int v15; // [sp+8h] [bp-18h]@19
  int v16; // [sp+Ch] [bp-14h]@19

  v3 = a1;
  v4 = a2;
  if ( *(_BYTE *)(a1 + 20) || a3 == 1 )
  {
    for ( i = j_pthread_getspecific_1(boost::asio::detail::call_stack<boost::asio::detail::task_io_service,boost::asio::detail::task_io_service_thread_info>::top_);
          i;
          i = (_DWORD *)i[2] )
    {
      if ( *i == v3 )
      {
        result = i[1];
        if ( !result )
          break;
        ++*(_DWORD *)(result + 12);
        *v4 = 0;
        v7 = *(_DWORD **)(result + 8);
        if ( v7 )
        {
          *v7 = v4;
          *(_DWORD *)(result + 8) = v4;
        }
        else
          *(_DWORD *)(result + 4) = v4;
        return result;
      }
    }
  }
  v8 = (unsigned int *)(v3 + 56);
  __dmb();
  do
    v9 = __ldrex(v8);
  while ( __strex(v9 + 1, v8) );
  j_pthread_mutex_lock_1((pthread_mutex_t *)(v3 + 24));
  *v4 = 0;
  v10 = *(_DWORD **)(v3 + 64);
  if ( v10 )
    *v10 = v4;
  else
    *(_DWORD *)(v3 + 60) = v4;
  *(_DWORD *)(v3 + 64) = v4;
  v11 = *(_DWORD *)(v3 + 32) | 1;
  *(_DWORD *)(v3 + 32) = v11;
  if ( v11 == 1 )
    if ( !*(_BYTE *)(v3 + 52) )
      v12 = *(_DWORD *)(v3 + 36);
      if ( v12 )
        *(_BYTE *)(v3 + 52) = 1;
        v16 = 0;
        v14 = qword_260F9EC;
        v13 = -2147483639;
        v15 = v12 + 28;
        j_epoll_ctl(*(_DWORD *)(v12 + 36), 3, *(_DWORD *)(v12 + 28), (struct epoll_event *)&v13);
    result = j_pthread_mutex_unlock_1((pthread_mutex_t *)(v3 + 24));
    j_pthread_mutex_unlock_1((pthread_mutex_t *)(v3 + 24));
    result = j_pthread_cond_signal_0((pthread_cond_t *)(v3 + 28));
  return result;
}


void __fastcall __noreturn boost::throw_exception<std::invalid_argument>(int a1)
{
  boost::throw_exception<std::invalid_argument>(a1);
}


boost::asio::detail::epoll_reactor::descriptor_state *__fastcall boost::asio::detail::epoll_reactor::descriptor_state::~descriptor_state(boost::asio::detail::epoll_reactor::descriptor_state *this)
{
  boost::asio::detail::epoll_reactor::descriptor_state *v1; // r4@1
  int i; // r6@1
  int v3; // r0@2
  void (__fastcall *v4)(_DWORD, int, int *, _DWORD); // r5@4
  int j; // r6@5
  int v6; // r0@6
  void (__fastcall *v7)(_DWORD, int, int *, _DWORD); // r5@8
  int k; // r6@9
  int v9; // r0@10
  void (__fastcall *v10)(_DWORD, int, int *, _DWORD); // r5@12
  int v12; // [sp+0h] [bp-20h]@4
  void *v13; // [sp+4h] [bp-1Ch]@4

  v1 = this;
  for ( i = *((_DWORD *)this + 13); i; i = *((_DWORD *)v1 + 13) )
  {
    v3 = *(_DWORD *)i;
    *((_DWORD *)v1 + 13) = *(_DWORD *)i;
    if ( !v3 )
      *((_DWORD *)v1 + 14) = 0;
    *(_DWORD *)i = 0;
    v4 = *(void (__fastcall **)(_DWORD, int, int *, _DWORD))(i + 4);
    v12 = 0;
    v13 = sub_21B09F0();
    v4(0, i, &v12, 0);
  }
  for ( j = *((_DWORD *)v1 + 11); j; j = *((_DWORD *)v1 + 11) )
    v6 = *(_DWORD *)j;
    *((_DWORD *)v1 + 11) = *(_DWORD *)j;
    if ( !v6 )
      *((_DWORD *)v1 + 12) = 0;
    *(_DWORD *)j = 0;
    v7 = *(void (__fastcall **)(_DWORD, int, int *, _DWORD))(j + 4);
    v7(0, j, &v12, 0);
  for ( k = *((_DWORD *)v1 + 9); k; k = *((_DWORD *)v1 + 9) )
    v9 = *(_DWORD *)k;
    *((_DWORD *)v1 + 9) = *(_DWORD *)k;
    if ( !v9 )
      *((_DWORD *)v1 + 10) = 0;
    *(_DWORD *)k = 0;
    v10 = *(void (__fastcall **)(_DWORD, int, int *, _DWORD))(k + 4);
    v10(0, k, &v12, 0);
  j_pthread_mutex_destroy_0((pthread_mutex_t *)((char *)v1 + 20));
  return v1;
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::clone_impl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r3@3
  int v6; // r6@3
  int v7; // r0@3

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 28) = &off_26D61AC;
  *(_DWORD *)a1 = &off_2773868;
  sub_21E8AF4((int *)(a1 + 4), (int *)(a2 + 4));
  *(_DWORD *)v2 = &off_2773898;
  *(_DWORD *)(v2 + 8) = &off_26D61E8;
  v4 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v2 + 12) = v4;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v5 = *(_DWORD *)(v3 + 20);
  v6 = *(_DWORD *)(v3 + 24);
  v7 = v2 + 16;
  *(_DWORD *)v7 = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v7 + 4) = v5;
  *(_DWORD *)(v7 + 8) = v6;
  *(_DWORD *)v2 = &off_276C32C;
  *(_DWORD *)(v2 + 8) = &off_276C348;
  *(_DWORD *)(v2 + 28) = &off_276C364;
  j_boost::exception_detail::copy_boost_exception(v2 + 8, v3 + 8);
  return v2;
}


RakNet *__fastcall boost::uuids::detail::seed_rng::sha1_random_digest_(boost::uuids::detail::seed_rng *this)
{
  unsigned int v1; // r4@1
  FILE *v2; // r3@1
  unsigned int v3; // r6@3
  clock_t v4; // r6@3
  __int32 v5; // r0@3
  unsigned int v6; // r7@3
  __int32 v7; // r0@3
  unsigned int v8; // r6@3
  int v9; // r0@3
  int v10; // r2@3
  int v11; // r2@3
  int v12; // r2@3
  int v13; // r2@3
  RakNet *result; // r0@3
  int v15; // [sp+0h] [bp-90h]@3
  __int32 ptr; // [sp+4h] [bp-8Ch]@2
  unsigned __int8 v17[4]; // [sp+8h] [bp-88h]@2
  unsigned __int8 v18[4]; // [sp+Ch] [bp-84h]@2
  unsigned __int8 v19[4]; // [sp+10h] [bp-80h]@2
  unsigned __int8 v20[4]; // [sp+14h] [bp-7Ch]@2
  int v21; // [sp+18h] [bp-78h]@1
  int v22; // [sp+1Ch] [bp-74h]@1
  int v23; // [sp+20h] [bp-70h]@1
  int v24; // [sp+24h] [bp-6Ch]@1
  int v25; // [sp+28h] [bp-68h]@1
  int v26; // [sp+6Ch] [bp-24h]@1
  int v27; // [sp+70h] [bp-20h]@1
  int v28; // [sp+74h] [bp-1Ch]@1
  RakNet *v29; // [sp+78h] [bp-18h]@1

  v1 = (unsigned int)this;
  v29 = _stack_chk_guard;
  v21 = 1732584193;
  v22 = -271733879;
  v23 = -1732584194;
  v24 = 271733878;
  v25 = -1009589776;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v2 = (FILE *)*((_DWORD *)this + 6);
  if ( v2 )
  {
    j_fread(&ptr, 1u, 0x14u, v2);
    j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, ptr);
    j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, BYTE1(ptr));
    j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, BYTE2(ptr));
    j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, BYTE3(ptr));
    j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v17[0]);
    j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v17[1]);
    j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v17[2]);
    j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v17[3]);
    j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v18[0]);
    j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v18[1]);
    j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v18[2]);
    j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v18[3]);
    j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v19[0]);
    j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v19[1]);
    j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v19[2]);
    j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v19[3]);
    j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v20[0]);
    j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v20[1]);
    j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v20[2]);
    j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v20[3]);
  }
  v3 = j_getpid();
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v3);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, BYTE1(v3));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v3 >> 16);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, BYTE3(v3));
  j_gettimeofday((struct timeval *)&ptr, 0);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, ptr);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, BYTE1(ptr));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, BYTE2(ptr));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, BYTE3(ptr));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v17[0]);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v17[1]);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v17[2]);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v17[3]);
  j_boost::uuids::detail::sha1::process_byte(
    (boost::uuids::detail::sha1 *)&v21,
    boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[0]);
    boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[1]);
    boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[2]);
    boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[3]);
    boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[4]);
    boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[5]);
    boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[6]);
    boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[7]);
    boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[8]);
    boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[9]);
    boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[10]);
    boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[11]);
    boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[12]);
    boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[13]);
    boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[14]);
    boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[15]);
    boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[16]);
    boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[17]);
    boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[18]);
    boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[19]);
    (unsigned int)boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state);
    (unsigned __int16)boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state >> 8);
    (unsigned int)boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state >> 16);
    (unsigned int)boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state >> 24);
  v4 = j_clock();
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v4);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, BYTE1(v4));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v4 >> 16);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, BYTE3(v4));
  v5 = j_lrand48();
  v6 = v5;
  ptr = v5;
  v7 = j_lrand48();
  LOBYTE(v4) = v7;
  *(_DWORD *)v17 = v7;
  *(_DWORD *)v18 = j_lrand48();
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v6);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, BYTE1(v6));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v6 >> 16);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, BYTE3(v6));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v18[0]);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v18[1]);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v18[2]);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v18[3]);
  v8 = (unsigned int)j_operator new(4u);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v8);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, BYTE1(v8));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v8 >> 16);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, BYTE3(v8));
  j_operator delete((void *)v8);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v1);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, BYTE1(v1));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, v1 >> 16);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, BYTE3(v1));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, 0xF0u);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, 0x3Cu);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, 0xB9u);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, boost::uuids::detail::sha1::get_digest);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, *(_BYTE *)v1);
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, *(_BYTE *)(v1 + 1));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, *(_BYTE *)(v1 + 2));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, *(_BYTE *)(v1 + 3));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, *(_BYTE *)(v1 + 4));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, *(_BYTE *)(v1 + 5));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, *(_BYTE *)(v1 + 6));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, *(_BYTE *)(v1 + 7));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, *(_BYTE *)(v1 + 8));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, *(_BYTE *)(v1 + 9));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, *(_BYTE *)(v1 + 10));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, *(_BYTE *)(v1 + 11));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, *(_BYTE *)(v1 + 12));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, *(_BYTE *)(v1 + 13));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, *(_BYTE *)(v1 + 14));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, *(_BYTE *)(v1 + 15));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, *(_BYTE *)(v1 + 16));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, *(_BYTE *)(v1 + 17));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, *(_BYTE *)(v1 + 18));
  j_boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v21, *(_BYTE *)(v1 + 19));
  j_boost::uuids::detail::sha1::get_digest((boost::uuids::detail::sha1 *)&v21, (unsigned int (*)[5])&ptr);
  v9 = v15;
  *(_DWORD *)boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state ^= ptr;
  *(_DWORD *)v1 ^= ptr;
  v10 = *(_DWORD *)v17;
  *(_DWORD *)(v9 + 4) ^= *(_DWORD *)v17;
  *(_DWORD *)(v1 + 4) ^= v10;
  v11 = *(_DWORD *)v18;
  *(_DWORD *)(v9 + 8) ^= *(_DWORD *)v18;
  *(_DWORD *)(v1 + 8) ^= v11;
  v12 = *(_DWORD *)v19;
  *(_DWORD *)(v9 + 12) ^= *(_DWORD *)v19;
  *(_DWORD *)(v1 + 12) ^= v12;
  v13 = *(_DWORD *)v20;
  *(_DWORD *)(v9 + 16) ^= *(_DWORD *)v20;
  *(_DWORD *)(v1 + 16) ^= v13;
  result = (RakNet *)(_stack_chk_guard - v29);
  if ( _stack_chk_guard != v29 )
    j___stack_chk_fail_0((int)result);
  return result;
}


char *__fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1

  v1 = a1;
  v2 = (char *)j_operator new(0x20u);
  j_boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(
    (int)v2,
    v1);
  return &v2[*(_DWORD *)(*(_DWORD *)v2 - 12)];
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(int a1, int a2)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(
           a1,
           a2);
}


int __fastcall boost::asio::detail::posix_thread::func<boost::asio::detail::resolver_service_base::work_io_service_runner>::run(int a1)
{
  int v1; // r4@1
  int result; // r0@1
  int v3; // [sp+0h] [bp-10h]@1
  void *v4; // [sp+4h] [bp-Ch]@1

  v1 = *(_DWORD *)(a1 + 4);
  v3 = 0;
  v4 = sub_21B09F0();
  j_boost::asio::detail::task_io_service::run(*(_DWORD *)(v1 + 4), (int)&v3);
  result = v3;
  if ( v3 )
    j_boost::asio::detail::do_throw_error((unsigned __int64 *)&v3);
  return result;
}


int __fastcall boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r1@4
  void *v4; // r0@4
  unsigned int *v6; // r12@6
  signed int v7; // r1@8

  v1 = a1;
  *(_DWORD *)(a1 + 20) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 24) = 0;
  *(_DWORD *)v1 = &off_26D60C4;
  v3 = *(_DWORD *)(v1 + 16);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v3 - 4);
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
      j_j_j_j_j__ZdlPv_9(v4);
  }
  sub_DA7AFC(v1);
  return v1;
}


int __fastcall boost::asio::ssl::detail::engine::do_accept(boost::asio::ssl::detail::engine *this, void *a2, unsigned int a3)
{
  int *v3; // r4@1
  int v4; // r4@1

  v3 = (int *)this;
  j_pthread_mutex_lock_1((pthread_mutex_t *)&boost::asio::ssl::detail::engine::accept_mutex(void)::mutex);
  v4 = j_j_SSL_accept(*v3);
  j_pthread_mutex_unlock_1((pthread_mutex_t *)&boost::asio::ssl::detail::engine::accept_mutex(void)::mutex);
  return v4;
}


unsigned int __fastcall boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::wait_duration_usec(int a1, signed int a2)
{
  return boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::wait_duration_usec(
           a1,
           a2);
}


int __fastcall boost::asio::ssl::context::verify_callback_function(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@2
  int v5; // r0@2
  int v6; // r0@3
  int v7; // r7@3
  int v8; // r6@3
  int v9; // r0@5
  int v11; // [sp+0h] [bp-18h]@5

  v2 = a2;
  v3 = a1;
  if ( a2 )
  {
    v4 = j_j_SSL_get_ex_data_X509_STORE_CTX_idx();
    v5 = j_j_X509_STORE_CTX_get_ex_data(v2, v4);
    if ( v5 )
    {
      v6 = j_j_SSL_get_SSL_CTX(v5);
      v7 = v6;
      v8 = 0;
      if ( v6 && j_j_SSL_CTX_get_ex_data(v6, 0) )
      {
        v11 = v2;
        v9 = j_j_SSL_CTX_get_ex_data(v7, 0);
        v8 = (*(int (__fastcall **)(int, _DWORD, int *))(*(_DWORD *)v9 + 8))(v9, v3 != 0, &v11);
      }
    }
    else
  }
  else
    v8 = 0;
  return v8;
}


int __fastcall boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::~deadline_timer_service(int a1)
{
  int v1; // r4@1
  int v2; // r6@1
  int v3; // r0@1
  int v4; // r1@3
  void *v5; // r0@8

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 32);
  j_pthread_mutex_lock_1((pthread_mutex_t *)(v2 + 24));
  v3 = *(_DWORD *)(v2 + 44);
  if ( v3 )
  {
    if ( v3 == v1 )
    {
      *(_DWORD *)(v2 + 44) = *(_DWORD *)(v1 + 4);
LABEL_7:
      *(_DWORD *)(v1 + 4) = 0;
    }
    else
      while ( 1 )
      {
        v4 = v3;
        v3 = *(_DWORD *)(v3 + 4);
        if ( !v3 )
          break;
        if ( v3 == v1 )
        {
          *(_DWORD *)(v4 + 4) = *(_DWORD *)(v1 + 4);
          goto LABEL_7;
        }
      }
  }
  j_pthread_mutex_unlock_1((pthread_mutex_t *)(v2 + 24));
  *(_DWORD *)v1 = &off_276C718;
  *(_DWORD *)(v1 + 8) = &off_276C76C;
  v5 = *(void **)(v1 + 20);
  if ( v5 )
    j_operator delete(v5);
  return v1;
}


signed int __fastcall boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::wait_duration_msec(int a1, signed int a2)
{
  return boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::wait_duration_msec(
           a1,
           a2);
}


void __fastcall boost::asio::ip::resolver_service<boost::asio::ip::tcp>::fork_service(int a1, int a2)
{
  boost::asio::ip::resolver_service<boost::asio::ip::tcp>::fork_service(a1, a2);
}


int __fastcall boost::thread::detach(int result)
{
  int v1; // r5@1
  int v2; // r4@1
  unsigned int v3; // r1@7
  unsigned int v4; // r1@10

  v1 = *(_DWORD *)result;
  *(_DWORD *)result = 0;
  v2 = *(_DWORD *)(result + 4);
  *(_DWORD *)(result + 4) = 0;
  if ( v1 )
  {
    sub_1FDD0BC((pthread_mutex_t *)(v1 + 24));
    if ( !*(_BYTE *)(v1 + 49) )
    {
      j_pthread_detach_0(*(_DWORD *)(v1 + 20));
      *(_WORD *)(v1 + 49) = 257;
    }
    do
      result = j_pthread_mutex_unlock_2((pthread_mutex_t *)(v1 + 24));
    while ( result == 4 );
  }
  if ( v2 )
    result = v2 + 4;
    __dmb();
      v3 = __ldrex((unsigned int *)result);
    while ( __strex(v3 - 1, (unsigned int *)result) );
    if ( v3 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      result = v2 + 8;
      __dmb();
      do
        v4 = __ldrex((unsigned int *)result);
      while ( __strex(v4 - 1, (unsigned int *)result) );
      if ( v4 == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r3@3
  int v6; // r6@3
  int v7; // r0@3

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 28) = &off_26D61AC;
  *(_DWORD *)a1 = &off_2773868;
  sub_21E8AF4((int *)(a1 + 4), (int *)(a2 + 4));
  *(_DWORD *)v2 = &off_276C5A0;
  *(_DWORD *)(v2 + 8) = &off_26D61E8;
  v4 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v2 + 12) = v4;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v5 = *(_DWORD *)(v3 + 20);
  v6 = *(_DWORD *)(v3 + 24);
  v7 = v2 + 16;
  *(_DWORD *)v7 = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v7 + 4) = v5;
  *(_DWORD *)(v7 + 8) = v6;
  *(_DWORD *)v2 = &off_276C52C;
  *(_DWORD *)(v2 + 8) = &off_276C548;
  *(_DWORD *)(v2 + 28) = &off_276C564;
  j_boost::exception_detail::copy_boost_exception(v2 + 8, v3 + 8);
  return v2;
}


char *__fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::clone(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1

  v1 = a1;
  v2 = (char *)j_operator new(0x20u);
  j_boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::clone_impl(
    (int)v2,
    v1);
  return &v2[*(_DWORD *)(*(_DWORD *)v2 - 12)];
}


void __fastcall boost::asio::detail::epoll_reactor::~epoll_reactor(boost::asio::detail::epoll_reactor *this)
{
  boost::asio::detail::epoll_reactor *v1; // r0@1

  v1 = j_boost::asio::detail::epoll_reactor::~epoll_reactor(this);
  j_j_j__ZdlPv_8((void *)v1);
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r2@3
  int v6; // r3@3
  int v7; // r12@3

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 28) = &off_26D61AC;
  *(_DWORD *)a1 = &off_2773798;
  sub_21E8AF4((int *)(a1 + 4), (int *)(a2 + 4));
  *(_DWORD *)(v2 + 8) = &off_26D61E8;
  v4 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v2 + 12) = v4;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v5 = *(_DWORD *)(v3 + 20);
  v6 = *(_DWORD *)(v3 + 24);
  v7 = v2 + 16;
  *(_DWORD *)v7 = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v7 + 4) = v5;
  *(_DWORD *)(v7 + 8) = v6;
  *(_DWORD *)v2 = &off_27650FC;
  *(_DWORD *)(v2 + 8) = &off_2765118;
  *(_DWORD *)(v2 + 28) = &off_2765134;
  j_boost::exception_detail::copy_boost_exception(v2 + 8, v3 + 8);
  return v2;
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(int a1, int a2)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(
           a1,
           a2);
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r5@3
  int v6; // r2@3
  int v7; // r3@3
  int v8; // r5@3
  int v9; // r1@3

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 28) = &off_26D61AC;
  *(_DWORD *)a1 = &off_2773868;
  sub_21E8AF4((int *)(a1 + 4), (int *)(a2 + 4));
  *(_DWORD *)v2 = &off_276C5A0;
  *(_DWORD *)(v2 + 8) = &off_26D61E8;
  v4 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v2 + 12) = v4;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v5 = v3 + 16;
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(v5 + 4);
  v8 = *(_DWORD *)(v5 + 8);
  v9 = v2 + 16;
  *(_DWORD *)v9 = v6;
  *(_DWORD *)(v9 + 4) = v7;
  *(_DWORD *)(v9 + 8) = v8;
  *(_DWORD *)v2 = &off_276C52C;
  *(_DWORD *)(v2 + 8) = &off_276C548;
  *(_DWORD *)(v2 + 28) = &off_276C564;
  return v2;
}


void __fastcall boost::detail::thread_data_base::~thread_data_base(boost::detail::thread_data_base *this)
{
  boost::detail::thread_data_base::~thread_data_base(this);
}


void __fastcall __noreturn boost::asio::detail::do_throw_error(unsigned __int64 *a1)
{
  int v1; // r0@1
  int v2; // [sp+0h] [bp-28h]@1

  v1 = j_boost::system::system_error::system_error((int)&v2, *a1, *a1 >> 32);
  j_boost::throw_exception<boost::system::system_error>(v1);
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(int a1, int a2)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(
           a1,
           a2);
}


int __fastcall boost::asio::detail::wait_handler<web::http::client::details::asio_context::timeout_timer::start(void)::{lambda(boost::system::error_code const&)#1}>::do_complete(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  __int64 *v4; // r0@1
  int v5; // r1@1
  unsigned int *v6; // r1@2
  unsigned int v7; // r2@3
  int v8; // r0@5
  unsigned int *v9; // r1@6
  unsigned int v10; // r2@7
  unsigned int v11; // r2@12
  int result; // r0@14
  unsigned int *v13; // r1@15
  unsigned int v14; // r2@16
  int v15; // [sp+4h] [bp-24h]@11
  int v16; // [sp+8h] [bp-20h]@1
  int v17; // [sp+Ch] [bp-1Ch]@1
  __int64 v18; // [sp+10h] [bp-18h]@5

  v2 = a2;
  v3 = a1;
  v16 = *(_DWORD *)(a2 + 20);
  v4 = (__int64 *)(a2 + 12);
  v5 = *(_DWORD *)(a2 + 24);
  v17 = v5;
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 8);
    __dmb();
    do
      v7 = __ldrex(v6);
    while ( __strex(v7 + 1, v6) );
  }
  v18 = *v4;
  v8 = *(_DWORD *)(v2 + 24);
  if ( v8 )
    v9 = (unsigned int *)(v8 + 8);
      v10 = __ldrex(v9);
    while ( __strex(v10 - 1, v9) );
    if ( v10 == 1 )
      (*(void (**)(void))(*(_DWORD *)v8 + 12))();
  j_boost::asio::asio_handler_deallocate((boost::asio *)v2, (void *)0x1C, (unsigned int)&v16);
  if ( v3 )
    v15 = 0;
      v11 = __ldrex((unsigned int *)&v15);
    while ( __strex(1u, (unsigned int *)&v15) );
    j_boost::asio::asio_handler_invoke<boost::asio::detail::binder1<web::http::client::details::asio_context::timeout_timer::start(void)::{lambda(boost::system::error_code const&)#1},boost::system::error_code>>((int)&v16);
  result = v17;
  if ( v17 )
    v13 = (unsigned int *)(v17 + 8);
      v14 = __ldrex(v13);
    while ( __strex(v14 - 1, v13) );
    if ( v14 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(int a1, int a2)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(
           a1,
           a2);
}


boost::gregorian::bad_day_of_month *__fastcall boost::gregorian::bad_day_of_month::bad_day_of_month(boost::gregorian::bad_day_of_month *this)
{
  boost::gregorian::bad_day_of_month *v1; // r5@1
  void *v2; // r0@1
  unsigned int *v4; // r1@3
  signed int v5; // r2@4
  int v6; // [sp+4h] [bp-1Ch]@1

  v1 = this;
  sub_21E94B4((void **)&v6, "Day of month value is out of range 1..31");
  sub_21D36BC((int)v1, &v6);
  v2 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v6 - 4);
    __dmb();
    do
      v5 = __ldrex(v4);
    while ( __strex(v5 - 1, v4) );
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  }
  *(_DWORD *)v1 = &off_276C680;
  return v1;
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::bad_cast>>::clone_impl(int a1, int a2)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::bad_cast>>::clone_impl(
           a1,
           a2);
}


void __fastcall __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::rethrow(int a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::rethrow(a1);
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r2@3
  int v6; // r3@3
  int v7; // r12@3

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 28) = &off_26D61AC;
  *(_DWORD *)a1 = &off_2773798;
  sub_21E8AF4((int *)(a1 + 4), (int *)(a2 + 4));
  *(_DWORD *)(v2 + 8) = &off_26D61E8;
  v4 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v2 + 12) = v4;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v5 = *(_DWORD *)(v3 + 20);
  v6 = *(_DWORD *)(v3 + 24);
  v7 = v2 + 16;
  *(_DWORD *)v7 = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v7 + 4) = v5;
  *(_DWORD *)(v7 + 8) = v6;
  *(_DWORD *)v2 = &off_27650FC;
  *(_DWORD *)(v2 + 8) = &off_2765118;
  *(_DWORD *)(v2 + 28) = &off_2765134;
  return v2;
}


void *__fastcall boost::asio::ssl::context::set_verify_callback<web::websockets::client::details::wspp_callback_client::connect(void)::{lambda(std::weak_ptr<void>)#1}::operator() const(std::weak_ptr<void>)::{lambda(bool,boost::asio::ssl::verify_context &)#1}>(int a1, int *a2, int a3, int a4)
{
  int v4; // r10@1
  int *v5; // r6@1
  int v6; // r8@1
  int v7; // r4@1
  _DWORD *v8; // r7@1
  int v9; // r0@2
  int v10; // r4@4
  int v11; // r0@4
  void *result; // r0@4

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = j_operator new(8u);
  *v8 = &off_276CDD8;
  v8[1] = v7;
  if ( j_j_SSL_CTX_get_ex_data(*v5, 0) )
  {
    v9 = j_j_SSL_CTX_get_ex_data(*v5, 0);
    if ( v9 )
      (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  }
  j_j_SSL_CTX_set_ex_data(*v5, 0, (int)v8);
  v10 = *v5;
  v11 = j_j_SSL_CTX_get_verify_mode(*v5);
  j_j_SSL_CTX_set_verify(v10, v11, (int)boost::asio::ssl::context::verify_callback_function);
  result = sub_21B09F0();
  *(_DWORD *)v6 = 0;
  *(_DWORD *)(v6 + 4) = result;
  *(_DWORD *)v4 = 0;
  *(_DWORD *)(v4 + 4) = result;
  return result;
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r3@3
  int v6; // r6@3
  int v7; // r0@3

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 28) = &off_26D61AC;
  *(_DWORD *)a1 = &off_2773868;
  sub_21E8AF4((int *)(a1 + 4), (int *)(a2 + 4));
  *(_DWORD *)v2 = &off_276C5A0;
  *(_DWORD *)(v2 + 8) = &off_26D61E8;
  v4 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v2 + 12) = v4;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v5 = *(_DWORD *)(v3 + 20);
  v6 = *(_DWORD *)(v3 + 24);
  v7 = v2 + 16;
  *(_DWORD *)v7 = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v7 + 4) = v5;
  *(_DWORD *)(v7 + 8) = v6;
  *(_DWORD *)v2 = &off_276C52C;
  *(_DWORD *)(v2 + 8) = &off_276C548;
  *(_DWORD *)(v2 + 28) = &off_276C564;
  j_boost::exception_detail::copy_boost_exception(v2 + 8, v3 + 8);
  return v2;
}


void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  sub_21D2E30(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall boost::throw_exception<std::runtime_error>(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1
  int v3; // r3@1
  void **v4; // [sp+4h] [bp-2Ch]@1
  int v5; // [sp+8h] [bp-28h]@1
  void **v6; // [sp+Ch] [bp-24h]@1
  int v7; // [sp+10h] [bp-20h]@1
  int v8; // [sp+14h] [bp-1Ch]@1
  int v9; // [sp+18h] [bp-18h]@1
  int v10; // [sp+1Ch] [bp-14h]@1

  v1 = a1;
  v2 = j_j___cxa_allocate_exception_0(32);
  sub_21E8AF4(&v5, (int *)(v1 + 4));
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = -1;
  v4 = &off_276514C;
  v6 = &off_2765160;
  j_boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(
    (int)v2,
    (int)&v4);
  j_j___cxa_throw_0(
    (int)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>,
    (int)boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl,
    v3);
}


int __fastcall boost::asio::detail::epoll_reactor::run(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int v11; // r7@4
  int v12; // r0@9
  int *v13; // r1@10
  int v14; // r7@11
  _DWORD *v15; // r6@12
  pthread_mutex_t *v16; // r6@17
  int i; // r5@17
  int v19; // [sp+0h] [bp-818h]@9
  int v20; // [sp+8h] [bp-810h]@10

  v3 = a1;
  v4 = a3;
  _R6 = a2;
  if ( *(_DWORD *)(a1 + 40) == -1 )
  {
    j_pthread_mutex_lock_1((pthread_mutex_t *)(a1 + 24));
    if ( _R6 == 1 )
    {
      v11 = *(_DWORD *)(v3 + 44);
      _R6 = 300000;
      while ( v11 )
      {
        _R6 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v11 + 12))(v11, _R6);
        v11 = *(_DWORD *)(v11 + 4);
      }
    }
    else
      _R6 = 0;
    j_pthread_mutex_unlock_1((pthread_mutex_t *)(v3 + 24));
  }
  else
    __asm { SBFX.W          R6, R6, #0, #1 }
  v12 = j_epoll_wait(*(_DWORD *)(v3 + 36), (struct epoll_event *)&v19, 128, _R6);
  if ( v12 >= 1 )
    v13 = &v20;
    do
      v14 = *v13;
      if ( *v13 != v3 + 28 )
        *(_DWORD *)(v14 + 8) = *(v13 - 2);
        *(_DWORD *)v14 = 0;
        v15 = *(_DWORD **)(v4 + 4);
        if ( v15 )
          *v15 = v14;
        else
          *(_DWORD *)v4 = v14;
        *(_DWORD *)(v4 + 4) = v14;
      v13 += 4;
      --v12;
    while ( v12 );
  v16 = (pthread_mutex_t *)(v3 + 24);
  j_pthread_mutex_lock_1((pthread_mutex_t *)(v3 + 24));
  for ( i = *(_DWORD *)(v3 + 44); i; i = *(_DWORD *)(i + 4) )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)i + 20))(i, v4);
  return j_pthread_mutex_unlock_1(v16);
}


void __fastcall __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::rethrow(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1
  int v3; // r3@1

  v1 = a1;
  v2 = j_j___cxa_allocate_exception_0(32);
  j_boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(
    (int)v2,
    v1);
  j_j___cxa_throw_0(
    (int)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>,
    (int)boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl,
    v3);
}


char *__fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::bad_cast>>::clone(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1

  v1 = a1;
  v2 = (char *)j_operator new(0x1Cu);
  j_boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::bad_cast>>::clone_impl(
    (int)v2,
    v1);
  return &v2[*(_DWORD *)(*(_DWORD *)v2 - 12)];
}


boost::asio::detail::task_io_service *__fastcall boost::asio::detail::task_io_service::task_io_service(boost::asio::detail::task_io_service *this, boost::asio::io_service *a2, unsigned int a3)
{
  boost::asio::detail::task_io_service *v3; // r4@1
  int v5; // [sp+0h] [bp-20h]@3
  void *v6; // [sp+4h] [bp-1Ch]@3
  int v7; // [sp+8h] [bp-18h]@4
  void *v8; // [sp+Ch] [bp-14h]@4

  v3 = this;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = 0;
  *(_DWORD *)this = &off_276CBE0;
  if ( a3 != 1 )
    LOBYTE(a3) = 0;
  *((_BYTE *)this + 20) = a3;
  v5 = j_pthread_mutex_init_0((pthread_mutex_t *)this + 1, 0);
  v6 = sub_21B09F0();
  if ( v5 )
    j_boost::asio::detail::do_throw_error((unsigned __int64 *)&v5, "mutex");
  *((_DWORD *)v3 + 8) = 0;
  v7 = j_pthread_cond_init_0((pthread_cond_t *)((char *)v3 + 28), 0);
  v8 = sub_21B09F0();
  if ( v7 )
    j_boost::asio::detail::do_throw_error((unsigned __int64 *)&v7, "event");
  *((_DWORD *)v3 + 11) = 0;
  *((_DWORD *)v3 + 12) = 0;
  *((_DWORD *)v3 + 9) = 0;
  *((_DWORD *)v3 + 10) = 0;
  *((_BYTE *)v3 + 52) = 1;
  *((_WORD *)v3 + 34) = 0;
  *((_DWORD *)v3 + 14) = 0;
  *((_DWORD *)v3 + 15) = 0;
  *((_DWORD *)v3 + 16) = 0;
  return v3;
}


void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::~clone_impl(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  sub_21D3000(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


char *__fastcall boost::asio::ip::detail::endpoint::to_string(int *a1, int a2, int a3)
{
  int *v3; // r9@1
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r0@2
  const char *v7; // r7@2
  int v8; // r4@2
  void *v9; // r0@2
  void **v10; // r0@3
  const char *v11; // r1@3
  int v12; // r0@4
  int v13; // r2@4
  int v14; // r3@4
  int v15; // r7@4
  void *v16; // r0@8
  int (__fastcall **v17)(_DWORD); // r0@9
  int v18; // r4@14
  unsigned int **v19; // r0@14
  char *v20; // r0@16
  char *v21; // r0@16
  char *v22; // r0@17
  unsigned int v23; // r1@17
  void *v24; // r0@17
  char *v25; // r0@19
  char *result; // r0@20
  unsigned int *v27; // r1@22
  signed int v28; // r2@23
  unsigned int *v29; // r1@26
  signed int v30; // r2@27
  char v31; // [sp+Ch] [bp-104h]@14
  int v32; // [sp+10h] [bp-100h]@2
  int v33; // [sp+14h] [bp-FCh]@2
  int v34; // [sp+18h] [bp-F8h]@2
  int v35; // [sp+1Ch] [bp-F4h]@2
  int v36; // [sp+20h] [bp-F0h]@2
  int v37; // [sp+24h] [bp-ECh]@2
  int v38; // [sp+28h] [bp-E8h]@2
  int (__fastcall *v39)(_DWORD); // [sp+30h] [bp-E0h]@3
  char v40; // [sp+35h] [bp-DBh]@16
  char v41; // [sp+36h] [bp-DAh]@16
  char v42; // [sp+37h] [bp-D9h]@17
  char buf[4]; // [sp+3Ch] [bp-D4h]@2
  void **v44; // [sp+40h] [bp-D0h]@17
  int v45; // [sp+5Ch] [bp-B4h]@18
  int v46; // [sp+64h] [bp-ACh]@17
  void **v47; // [sp+68h] [bp-A8h]@17
  RakNet *v48; // [sp+F0h] [bp-20h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v48 = _stack_chk_guard;
  if ( *(_WORD *)a2 == 2 )
  {
    v6 = *(_DWORD *)(a2 + 4);
    v38 = 0;
    v36 = 0;
    v37 = 0;
    v34 = 0;
    v35 = 0;
    v32 = 0;
    v33 = v6;
    *(_DWORD *)j___errno_0(v6) = 0;
    v7 = j_inet_ntop(2, (const void *)((unsigned int)&v32 | 4), buf, 0x10u);
    v8 = *(_DWORD *)j___errno_0((int)v7);
    v9 = sub_21B09F0();
    *(_DWORD *)v5 = v8;
    *(_DWORD *)(v5 + 4) = v9;
    if ( v7 )
    {
      v10 = (void **)&v39;
      v11 = v7;
LABEL_6:
      sub_21E94B4(v10, v11);
      goto LABEL_12;
    }
    if ( !v8 )
      v16 = sub_21B09F0();
      *(_DWORD *)v5 = 22;
      *(_DWORD *)(v5 + 4) = v16;
    v17 = &GLOBAL_OFFSET_TABLE_;
  }
  else
    v12 = *(_DWORD *)(a2 + 24);
    v13 = *(_DWORD *)(a2 + 12);
    v14 = *(_DWORD *)(a2 + 16);
    v15 = *(_DWORD *)(a2 + 20);
    v34 = *(_DWORD *)(a2 + 8);
    v35 = v13;
    v36 = v14;
    v37 = v15;
    v38 = v12;
    v32 = 1;
    v33 = 0;
    v11 = j_boost::asio::detail::socket_ops::inet_ntop(10, &v34, buf, 0x3Fu, v12, v5);
    if ( v11 )
      goto LABEL_6;
  v39 = (int (__fastcall *)(_DWORD))(*(char **)((char *)v17 + 0xFFFF4420) + 12);
LABEL_12:
  if ( *(_DWORD *)v5 )
    *v3 = (int)&unk_28898CC;
    sub_21D0A10((int)buf, 16);
    v18 = *(_DWORD *)(*(_DWORD *)buf - 12);
    v19 = (unsigned int **)sub_21C94B8();
    sub_21B5BAC((unsigned int **)&v31, (int)&buf[v18], v19);
    sub_21C802C((unsigned int **)&v31);
    if ( *(_WORD *)v4 == 2 )
      sub_21CBF38(buf, (int)v39, *((_DWORD *)v39 - 3));
    else
      v40 = 91;
      v20 = sub_21CBF38(buf, (int)&v40, 1);
      v21 = sub_21CBF38(v20, (int)v39, *((_DWORD *)v39 - 3));
      v41 = 93;
      sub_21CBF38(v21, (int)&v41, 1);
    v42 = 58;
    v22 = sub_21CBF38(buf, (int)&v42, 1);
    v23 = __rev(*(_WORD *)(v4 + 2));
    sub_21CC440(v22);
    sub_21CFED8(v3, (int)&v44);
    *(_DWORD *)buf = &off_26D3F44;
    v47 = &off_26D3F58;
    v44 = &off_27734E8;
    v24 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v46 - 4);
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    v44 = &off_26D40A8;
    sub_21C802C((unsigned int **)&v45);
    sub_21B6560(&v47);
  v25 = (char *)v39 - 12;
  if ( (int *)((char *)v39 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)((char *)v39 - 4);
    __dmb();
    do
      v28 = __ldrex(v27);
    while ( __strex(v28 - 1, v27) );
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  result = (char *)(_stack_chk_guard - v48);
  if ( _stack_chk_guard != v48 )
    j___stack_chk_fail_1((int)result);
  return result;
}


void __fastcall boost::throw_exception<boost::exception_detail::error_info_injector<std::runtime_error>>(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1
  int v3; // r0@1
  int v4; // r2@3
  int v5; // r3@3
  int v6; // r3@3
  void **v7; // [sp+0h] [bp-30h]@1
  void **v8; // [sp+8h] [bp-28h]@1
  int v9; // [sp+Ch] [bp-24h]@1
  int v10; // [sp+10h] [bp-20h]@3
  int v11; // [sp+14h] [bp-1Ch]@3
  int v12; // [sp+18h] [bp-18h]@3

  v1 = a1;
  v2 = j_j___cxa_allocate_exception(32);
  v7 = &off_2773798;
  sub_21E8AF4((int *)((unsigned int)&v7 | 4), (int *)(v1 + 4));
  v8 = &off_26D61E8;
  v3 = *(_DWORD *)(v1 + 12);
  v9 = v3;
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 12))();
  v4 = *(_DWORD *)(v1 + 20);
  v5 = *(_DWORD *)(v1 + 24);
  v10 = *(_DWORD *)(v1 + 16);
  v11 = v4;
  v12 = v5;
  v7 = &off_276514C;
  v8 = &off_2765160;
  j_boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(
    (int)v2,
    (int)&v7);
  j_j___cxa_throw(
    (int)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>,
    (int)boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl,
    v6);
}


int __fastcall boost::asio::basic_streambuf<std::allocator<char>>::reserve(int a1, unsigned int a2)
{
  int v2; // r4@1
  unsigned int v3; // r7@1
  int result; // r0@1
  int v5; // r6@1
  __int64 v6; // r1@1
  int v7; // r8@1
  unsigned int v8; // r5@1
  int v9; // r1@2
  unsigned int v10; // r0@5
  __int64 v11; // kr00_8@7
  unsigned int v12; // r1@7
  unsigned int v13; // r2@7
  void *v14; // r0@11
  unsigned int *v15; // r1@12
  signed int v16; // r2@13
  __int64 v17; // r1@19
  int v18; // [sp+4h] [bp-2Ch]@11
  char v19; // [sp+8h] [bp-28h]@11

  v2 = a1;
  v3 = a2;
  v5 = a1 + 36;
  result = *(_DWORD *)(a1 + 36);
  v6 = *(_QWORD *)(v5 - 16);
  v7 = HIDWORD(v6) - result;
  v8 = v6 - result;
  if ( HIDWORD(v6) - result - ((signed int)v6 - result) < v3 )
  {
    v9 = *(_DWORD *)(v5 - 28);
    if ( v9 != result )
    {
      v8 += result - v9;
      j___aeabi_memmove_1(result, v9);
    }
    if ( v7 - v8 < v3 )
      v10 = *(_DWORD *)(v2 + 32);
      if ( v10 < v3 || v8 > v10 - v3 )
      {
        sub_21E94B4((void **)&v18, "boost::asio::streambuf too long");
        sub_21D368C((int)&v19, &v18);
        v14 = (void *)(v18 - 12);
        if ( (int *)(v18 - 12) != &dword_28898C0 )
        {
          v15 = (unsigned int *)(v18 - 4);
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
        }
        j_boost::throw_exception<std::length_error>((int)&v19);
      }
      v7 = v8 + v3;
      v11 = *(_QWORD *)(v2 + 36);
      v12 = v8 + v3;
      v13 = HIDWORD(v11) - v11;
      if ( !(v8 + v3) )
        v12 = 1;
      if ( v12 <= v13 )
        if ( v12 < v13 )
          *(_DWORD *)(v2 + 40) = v11 + v12;
      else
        j_std::vector<char,std::allocator<char>>::_M_default_append(v5, v12 - v13);
    result = *(_DWORD *)(v2 + 36);
    LODWORD(v17) = result + v8;
    HIDWORD(v17) = result + v7;
    *(_DWORD *)(v2 + 4) = result;
    *(_DWORD *)(v2 + 8) = result;
    *(_DWORD *)(v2 + 12) = result + v8;
    *(_DWORD *)(v2 + 16) = result + v8;
    *(_QWORD *)(v2 + 20) = v17;
  }
  return result;
}


int __fastcall boost::asio::detail::resolver_service_base::start_work_thread(boost::asio::detail::resolver_service_base *this)
{
  boost::asio::detail::resolver_service_base *v1; // r6@1
  pthread_mutex_t *v2; // r4@1
  pthread_t *v3; // r8@2
  int v4; // r5@2
  _DWORD *v5; // r7@2
  int v6; // r5@2
  int v7; // r5@3
  int v9; // [sp+0h] [bp-20h]@10
  void *v10; // [sp+4h] [bp-1Ch]@10

  v1 = this;
  v2 = (pthread_mutex_t *)((char *)this + 4);
  j_pthread_mutex_lock_1((pthread_mutex_t *)((char *)this + 4));
  if ( !*((_DWORD *)v1 + 5) )
  {
    v3 = (pthread_t *)j_operator new(8u);
    v4 = *((_DWORD *)v1 + 2);
    *((_BYTE *)v3 + 4) = 0;
    v5 = j_operator new(8u);
    *v5 = &off_276C3C8;
    v5[1] = v4;
    v6 = j_pthread_create_0(v3, 0, (void *(*)(void *))boost_asio_detail_posix_thread_function, v5);
    if ( v6 )
    {
      (*(void (__fastcall **)(_DWORD *))(*v5 + 4))(v5);
      v9 = v6;
      v10 = sub_21B09F0();
      j_boost::asio::detail::do_throw_error((unsigned __int64 *)&v9, "thread");
    }
    v7 = *((_DWORD *)v1 + 5);
    if ( v7 )
      if ( !*(_BYTE *)(v7 + 4) )
        j_pthread_detach(*(_DWORD *)v7);
      j_operator delete((void *)v7);
    *((_DWORD *)v1 + 5) = v3;
  }
  return j_pthread_mutex_unlock_1(v2);
}


void __fastcall __noreturn boost::throw_exception<boost::gregorian::bad_year>(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1
  int v3; // r3@1
  void **v4; // [sp+4h] [bp-2Ch]@1
  int v5; // [sp+8h] [bp-28h]@1
  void **v6; // [sp+Ch] [bp-24h]@1
  int v7; // [sp+10h] [bp-20h]@1
  int v8; // [sp+14h] [bp-1Ch]@1
  int v9; // [sp+18h] [bp-18h]@1
  int v10; // [sp+1Ch] [bp-14h]@1

  v1 = a1;
  v2 = j_j___cxa_allocate_exception_0(32);
  sub_21E8AF4(&v5, (int *)(v1 + 4));
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = -1;
  v4 = &off_276C49C;
  v6 = &off_276C4B0;
  j_boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(
    (int)v2,
    (int)&v4);
  j_j___cxa_throw_0(
    (int)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>,
    (int)boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl,
    v3);
}


signed int __fastcall boost::asio::detail::reactive_socket_send_op_base<boost::asio::const_buffers_1>::do_perform(int a1)
{
  __int64 v2; // [sp+Ch] [bp-14h]@1
  int v3; // [sp+14h] [bp-Ch]@1

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_DWORD *)(a1 + 36);
  return j_boost::asio::detail::socket_ops::non_blocking_send(
           *(void **)(a1 + 28),
           (int)&v2,
           1,
           *(_DWORD *)(a1 + 40),
           a1 + 12,
           (int *)(a1 + 20));
}


void __fastcall boost::this_thread::restore_interruption::restore_interruption(boost::this_thread::restore_interruption *this, boost::this_thread::disable_interruption *a2)
{
  if ( *(_BYTE *)a2 )
    *((_BYTE *)j_boost::detail::get_current_thread_data((boost::detail *)*(_BYTE *)a2) + 112) = 1;
}


_DWORD *__fastcall boost::exception_detail::error_info_injector<std::invalid_argument>::~error_info_injector(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  return sub_21D3000(v1);
}


int __fastcall boost::asio::ssl::detail::engine::perform(int a1, char *a2, signed int a3, int a4, int a5, int a6, int *a7)
{
  int v7; // r4@1
  char v8; // r5@1
  int v9; // r10@1
  char *v10; // r6@1
  _DWORD *v11; // r7@1
  unsigned int v12; // r8@1
  int v13; // r7@3
  int v14; // r5@3
  int v15; // r6@3
  unsigned int v16; // r0@3
  void *v17; // r0@4
  char v18; // r0@6
  __int64 v19; // r0@11
  char v20; // r0@25

  v7 = a1;
  v8 = a3;
  v9 = a4;
  v10 = a2;
  v11 = (_DWORD *)(a1 + (a3 >> 1));
  v12 = j_j_BIO_ctrl_pending(*(_DWORD *)(a1 + 4));
  j_j_ERR_clear_error();
  if ( v8 & 1 )
    v10 = *(char **)&v10[*v11];
  v13 = ((int (__fastcall *)(_DWORD *, int, int))v10)(v11, v9, a5);
  v14 = j_j_SSL_get_error(*(_DWORD *)v7, v13);
  v15 = j_j_ERR_get_error_0();
  v16 = j_j_BIO_ctrl_pending(*(_DWORD *)(v7 + 4));
  if ( v14 == 5 )
  {
    v17 = sub_21B09F0();
LABEL_10:
    *(_DWORD *)a6 = v15;
LABEL_11:
    *(_DWORD *)(a6 + 4) = v17;
    LODWORD(v19) = 0;
    return v19;
  }
  if ( v14 == 1 )
    v18 = `guard variable for'boost::asio::error::get_ssl_category(void)::instance;
    __dmb();
    if ( !(v18 & 1)
      && j_j___cxa_guard_acquire_1(&`guard variable for'boost::asio::error::get_ssl_category(void)::instance) )
    {
      boost::asio::error::get_ssl_category(void)::instance = &off_2763194;
      j_j___cxa_guard_release_1(&`guard variable for'boost::asio::error::get_ssl_category(void)::instance);
    }
    v17 = &boost::asio::error::get_ssl_category(void)::instance;
    goto LABEL_10;
  if ( a7 && v13 >= 1 )
    *a7 = v13;
  if ( v14 == 3 )
    LODWORD(v19) = sub_21B09F0();
    *(_DWORD *)a6 = 0;
    *(_DWORD *)(a6 + 4) = v19;
    LODWORD(v19) = -1;
  if ( v16 <= v12 )
    if ( v14 == 2 )
      LODWORD(v19) = sub_21B09F0();
      *(_DWORD *)a6 = 0;
      *(_DWORD *)(a6 + 4) = v19;
      LODWORD(v19) = -2;
      return v19;
    if ( !(j_j_SSL_get_shutdown(*(_DWORD *)v7) & 2) )
      HIDWORD(v19) = sub_21B09F0();
      LODWORD(v19) = 0;
      *(_QWORD *)a6 = v19;
    v20 = `guard variable for'boost::asio::error::get_misc_category(void)::instance;
    if ( !(v20 & 1)
      && j_j___cxa_guard_acquire_1(&`guard variable for'boost::asio::error::get_misc_category(void)::instance) )
      boost::asio::error::get_misc_category(void)::instance = &off_2763164;
      j_j___cxa_guard_release_1(&`guard variable for'boost::asio::error::get_misc_category(void)::instance);
    *(_DWORD *)a6 = 2;
    v17 = &boost::asio::error::get_misc_category(void)::instance;
    goto LABEL_11;
  LODWORD(v19) = sub_21B09F0();
  *(_DWORD *)a6 = 0;
  *(_DWORD *)(a6 + 4) = v19;
  LODWORD(v19) = -1;
  if ( v13 > 0 )
    LODWORD(v19) = 1;
  return v19;
}


  return boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<web::http::client::details::asio_connection_pool::start_epoch_interval(std::shared_ptr<web::http::client::details::asio_connection_pool> const&)::{lambda(boost::system::error_code const&)
{
           a2,
           a3);
}


int __fastcall boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::enqueue_timer(int a1, __int64 *a2, int a3, _DWORD *a4)
{
  return boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::enqueue_timer(
           a1,
           a2,
           a3,
           a4);
}


int __fastcall boost::thread::thread(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  return result;
}


void __fastcall __noreturn boost::throw_exception<boost::gregorian::bad_month>(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1
  int v3; // r3@1
  void **v4; // [sp+4h] [bp-2Ch]@1
  int v5; // [sp+8h] [bp-28h]@1
  void **v6; // [sp+Ch] [bp-24h]@1
  int v7; // [sp+10h] [bp-20h]@1
  int v8; // [sp+14h] [bp-1Ch]@1
  int v9; // [sp+18h] [bp-18h]@1
  int v10; // [sp+1Ch] [bp-14h]@1

  v1 = a1;
  v2 = j_j___cxa_allocate_exception_0(32);
  sub_21E8AF4(&v5, (int *)(v1 + 4));
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = -1;
  v4 = &off_276C57C;
  v6 = &off_276C590;
  j_boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(
    (int)v2,
    (int)&v4);
  j_j___cxa_throw_0(
    (int)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>,
    (int)boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl,
    v3);
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r3@3
  int v6; // r6@3
  int v7; // r0@3

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 28) = &off_26D61AC;
  *(_DWORD *)a1 = &off_2773868;
  sub_21E8AF4((int *)(a1 + 4), (int *)(a2 + 4));
  *(_DWORD *)v2 = &off_276C680;
  *(_DWORD *)(v2 + 8) = &off_26D61E8;
  v4 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v2 + 12) = v4;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v5 = *(_DWORD *)(v3 + 20);
  v6 = *(_DWORD *)(v3 + 24);
  v7 = v2 + 16;
  *(_DWORD *)v7 = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v7 + 4) = v5;
  *(_DWORD *)(v7 + 8) = v6;
  *(_DWORD *)v2 = &off_276C60C;
  *(_DWORD *)(v2 + 8) = &off_276C628;
  *(_DWORD *)(v2 + 28) = &off_276C644;
  j_boost::exception_detail::copy_boost_exception(v2 + 8, v3 + 8);
  return v2;
}


int __fastcall boost::asio::detail::resolver_service_base::shutdown_service(boost::asio::detail::resolver_service_base *this)
{
  boost::asio::detail::resolver_service_base *v1; // r4@1
  boost::asio::detail::task_io_service **v2; // r5@1
  boost::asio::detail::task_io_service *v3; // r0@2
  unsigned int *v4; // r1@2
  unsigned int v5; // r2@3
  int result; // r0@7
  int v7; // r5@8
  void *v8; // r5@15
  int v9; // r6@16
  int v10; // r7@17
  int v11; // r0@19
  int v12; // r7@20

  v1 = this;
  v2 = (boost::asio::detail::task_io_service **)*((_DWORD *)this + 4);
  if ( v2 )
  {
    v3 = *v2;
    __dmb();
    v4 = (unsigned int *)((char *)v3 + 56);
    do
      v5 = __ldrex(v4);
    while ( __strex(v5 - 1, v4) );
    if ( v5 == 1 )
      j_boost::asio::detail::task_io_service::stop(v3);
    j_operator delete(v2);
  }
  *((_DWORD *)v1 + 4) = 0;
  result = *((_DWORD *)v1 + 2);
  if ( result )
    j_boost::asio::detail::task_io_service::stop(*(boost::asio::detail::task_io_service **)(result + 4));
    v7 = *((_DWORD *)v1 + 5);
    if ( v7 )
    {
      if ( *(_BYTE *)(v7 + 4)
        || (j_pthread_join(*(_DWORD *)v7, 0), *(_BYTE *)(v7 + 4) = 1, (v7 = *((_DWORD *)v1 + 5)) != 0) )
      {
        if ( !*(_BYTE *)(v7 + 4) )
          j_pthread_detach(*(_DWORD *)v7);
        j_operator delete((void *)v7);
      }
      *((_DWORD *)v1 + 5) = 0;
    }
    v8 = (void *)*((_DWORD *)v1 + 2);
    if ( v8 )
      v9 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 )
        v10 = *(_DWORD *)(v9 + 12);
        if ( v10 )
        {
          do
          {
            (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
            v10 = *(_DWORD *)(v10 + 16);
          }
          while ( v10 );
          v11 = *(_DWORD *)(v9 + 12);
          if ( v11 )
            do
            {
              v12 = *(_DWORD *)(v11 + 16);
              (*(void (**)(void))(*(_DWORD *)v11 + 4))();
              v11 = v12;
              *(_DWORD *)(v9 + 12) = v12;
            }
            while ( v12 );
        }
        j_pthread_mutex_destroy_0((pthread_mutex_t *)(v9 + 4));
        j_operator delete((void *)v9);
      j_operator delete(v8);
    result = 0;
    *((_DWORD *)v1 + 2) = 0;
  return result;
}


void **__fastcall boost::asio::error::detail::netdb_category::message(boost::asio::error::detail::netdb_category *this, int a2, int a3)
{
  void **result; // r0@2

  switch ( a3 )
  {
    case 1:
      result = sub_21E94B4((void **)this, "Host not found (authoritative)");
      break;
    case 2:
      result = sub_21E94B4((void **)this, "Host not found (non-authoritative), try again later");
    case 3:
      result = sub_21E94B4((void **)this, "A non-recoverable error occurred during database lookup");
    case 4:
      result = sub_21E94B4((void **)this, "The query is valid, but it does not have associated data");
    default:
      result = sub_21E94B4((void **)this, "asio.netdb error");
  }
  return result;
}


void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  sub_21D315C(v1);
  j_j_j__ZdlPv_8((void *)v1);
}


void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::~clone_impl(int a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::~clone_impl(a1);
}


int __fastcall boost::this_thread::interruption_requested(boost::this_thread *this)
{
  void *v1; // r0@1
  _BYTE *v2; // r5@1
  pthread_mutex_t *v3; // r4@2
  int v4; // r5@2
  int result; // r0@4

  v1 = j_boost::detail::get_current_thread_data(this);
  v2 = v1;
  if ( v1 )
  {
    v3 = (pthread_mutex_t *)((char *)v1 + 24);
    sub_1FDD0BC((pthread_mutex_t *)v1 + 1);
    v4 = v2[113] != 0;
    while ( j_pthread_mutex_unlock_2(v3) == 4 )
      ;
    result = v4;
  }
  else
    result = 0;
  return result;
}


void __fastcall boost::asio::detail::strand_service::~strand_service(boost::asio::detail::strand_service *this)
{
  boost::asio::detail::strand_service *v1; // r4@1
  signed int v2; // r5@1
  boost::asio::detail::strand_service::strand_impl *v3; // r0@2
  boost::asio::detail::strand_service::strand_impl *v4; // r0@3

  v1 = this;
  v2 = 796;
  *(_DWORD *)this = &off_276D268;
  do
  {
    v3 = *(boost::asio::detail::strand_service::strand_impl **)((char *)v1 + v2);
    if ( v3 )
    {
      v4 = j_boost::asio::detail::strand_service::strand_impl::~strand_impl(v3);
      j_operator delete((void *)v4);
    }
    v2 -= 4;
  }
  while ( v2 != 24 );
  j_pthread_mutex_destroy_0((pthread_mutex_t *)v1 + 1);
  j_j_j__ZdlPv_8((void *)v1);
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(int a1, int a2)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(
           a1,
           a2);
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::bad_cast>>::clone_impl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r3@3
  int v6; // r6@3
  int v7; // r0@3

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 24) = &off_26D61AC;
  *(_DWORD *)a1 = &off_27727A8;
  *(_DWORD *)(a1 + 4) = &off_26D61E8;
  v4 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(v2 + 8) = v4;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v5 = *(_DWORD *)(v3 + 16);
  v6 = *(_DWORD *)(v3 + 20);
  v7 = v2 + 12;
  *(_DWORD *)v7 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v7 + 4) = v5;
  *(_DWORD *)(v7 + 8) = v6;
  *(_DWORD *)v2 = &off_276C8CC;
  *(_DWORD *)(v2 + 4) = &off_276C8E8;
  *(_DWORD *)(v2 + 24) = &off_276C904;
  j_boost::exception_detail::copy_boost_exception(v2 + 4, v3 + 4);
  return v2;
}


void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  sub_21D315C(v1);
  j_j_j__ZdlPv_8((void *)v1);
}


int __fastcall boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::get_ready_timers(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  __int64 v4; // r0@1 OVERLAPPED
  __int64 v5; // r6@3
  int v6; // r2@4 OVERLAPPED
  signed int v7; // r1@4
  bool v8; // zf@6
  bool v9; // nf@6
  unsigned __int8 v10; // vf@6
  signed int v11; // r2@6
  int v12; // r1@11
  int v13; // r0@11
  _DWORD *v14; // r2@12
  int v16; // [sp+0h] [bp-20h]@2

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 12);
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    j_boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(
      (int)&v16,
      (int (__fastcall *)(__time_t *, char *))boost::date_time::c_time::gmtime);
    v4 = *(_QWORD *)(v2 + 12);
    if ( (_DWORD)v4 != HIDWORD(v4) )
    {
      v5 = *(_QWORD *)&v16;
      do
      {
        *(__int64 *)((char *)&v4 + 4) = *(_QWORD *)v4;
        HIDWORD(v4) = 0;
        if ( (unsigned int)v5 < (unsigned int)*(_QWORD *)v4 )
          v7 = 1;
        v10 = __OFSUB__(HIDWORD(v5), v6);
        v8 = HIDWORD(v5) == v6;
        v9 = HIDWORD(v5) - v6 < 0;
        v11 = 0;
        if ( v9 ^ v10 )
          v11 = 1;
        if ( v8 )
          v11 = v7;
        if ( v11 )
          break;
        v12 = *(_DWORD *)(v4 + 8);
        v13 = *(_DWORD *)v12;
        if ( *(_DWORD *)v12 )
        {
          v14 = *(_DWORD **)(v3 + 4);
          if ( v14 )
            *v14 = v13;
          else
            *(_DWORD *)v3 = v13;
          *(_DWORD *)(v3 + 4) = *(_DWORD *)(v12 + 4);
          *(_DWORD *)v12 = 0;
          *(_DWORD *)(v12 + 4) = 0;
        }
        j_boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::remove_timer(v2, v12);
        v4 = *(_QWORD *)(v2 + 12);
      }
      while ( (_DWORD)v4 != HIDWORD(v4) );
    }
  }
  return v4;
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(int a1, int a2)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(
           a1,
           a2);
}


void __fastcall boost::detail::thread_data_base::~thread_data_base(boost::detail::thread_data_base *this)
{
  boost::detail::thread_data_base *v1; // r0@1

  v1 = j_boost::detail::thread_data_base::~thread_data_base(this);
  j_j_j__ZdlPv_9((void *)v1);
}


int __fastcall boost::asio::detail::epoll_reactor::start_op(int a1, int a2, int a3, int *a4, int a5, int a6, int a7)
{
  int *v7; // r4@1
  int v8; // r11@1
  int v9; // r10@1
  int v10; // r0@1
  int v11; // r9@1
  pthread_mutex_t *v12; // r8@2
  int v13; // r0@2
  void *v14; // r0@4
  int v16; // r1@14
  int v17; // r1@14
  _DWORD *v18; // r0@14
  _DWORD *v19; // r2@14
  int v20; // r0@17
  unsigned int *v21; // r0@17
  unsigned int v22; // r1@18
  int v23; // r0@23
  int v24; // r0@24
  int v25; // r4@25
  void *v26; // r0@25
  int v27; // [sp+0h] [bp-48h]@13
  __int64 v28; // [sp+4h] [bp-44h]@13
  int v29; // [sp+Ch] [bp-3Ch]@13
  struct epoll_event event; // [sp+10h] [bp-38h]@24

  v7 = a4;
  v8 = a1;
  v9 = a3;
  v10 = *a4;
  v11 = a2;
  if ( !*a4 )
  {
    v14 = sub_21B09F0();
    *(_DWORD *)(a5 + 12) = 9;
    *(_DWORD *)(a5 + 16) = v14;
    return j_j_j__ZN5boost4asio6detail15task_io_service25post_immediate_completionEPNS1_25task_io_service_operationEb_0(
             *(_DWORD *)(v8 + 20),
             (_DWORD *)a5,
             a6);
  }
  v12 = (pthread_mutex_t *)(v10 + 20);
  j_pthread_mutex_lock_1((pthread_mutex_t *)(v10 + 20));
  v13 = *v7;
  if ( !*(_BYTE *)(*v7 + 60) )
    if ( *(_DWORD *)(v13 + 8 * v11 + 36) )
      goto LABEL_14;
    if ( a7 == 1 )
    {
      if ( v11 || !*(_DWORD *)(v13 + 52) )
      {
        if ( (*(int (__fastcall **)(int))(a5 + 24))(a5) == 1 )
        {
          j_pthread_mutex_unlock_1(v12);
          return j_boost::asio::detail::task_io_service::post_immediate_completion(
                   *(_DWORD *)(v8 + 20),
                   (_DWORD *)a5,
                   a6);
        }
        if ( v11 == 1 )
          v23 = *v7;
          if ( !(*(_BYTE *)(*v7 + 32) & 4) )
          {
            HIDWORD(event.data.u64) = 0;
            event.events = 0;
            *(_QWORD *)(&event.events + 1) = qword_260F9EC;
            event.events = *(_DWORD *)(v23 + 32) | 4;
            event.data.fd = v23;
            v24 = j_epoll_ctl(*(_DWORD *)(v8 + 36), 3, v9, &event);
            if ( v24 )
            {
              v25 = *(_DWORD *)j___errno_0(v24);
              v26 = sub_21B09F0();
              *(_DWORD *)(a5 + 12) = v25;
              *(_DWORD *)(a5 + 16) = v26;
              j_boost::asio::detail::task_io_service::post_immediate_completion(*(_DWORD *)(v8 + 20), (_DWORD *)a5, a6);
              return j_pthread_mutex_unlock_1(v12);
            }
            *(_DWORD *)(*v7 + 32) |= event.events;
          }
LABEL_14:
        v16 = *v7;
        *(_DWORD *)a5 = 0;
        v17 = v16 + 8 * v11;
        v18 = (_DWORD *)(v17 + 40);
        v19 = *(_DWORD **)(v17 + 40);
        if ( v19 )
          *v19 = a5;
          *v18 = a5;
        else
          *(_DWORD *)(v17 + 36) = a5;
        v20 = *(_DWORD *)(v8 + 20);
        __dmb();
        v21 = (unsigned int *)(v20 + 56);
        do
          v22 = __ldrex(v21);
        while ( __strex(v22 + 1, v21) );
        return j_pthread_mutex_unlock_1(v12);
      }
    }
    else if ( v11 == 1 )
      *(_DWORD *)(v13 + 32) |= 4u;
      v13 = *v7;
    v29 = 0;
    v27 = 0;
    v28 = qword_260F9EC;
    v27 = *(_DWORD *)(v13 + 32);
    HIDWORD(v28) = v13;
    j_epoll_ctl(*(_DWORD *)(v8 + 36), 3, v9, (struct epoll_event *)&v27);
    goto LABEL_14;
  j_boost::asio::detail::task_io_service::post_immediate_completion(*(_DWORD *)(v8 + 20), (_DWORD *)a5, a6);
  return j_pthread_mutex_unlock_1(v12);
}


void __fastcall __noreturn boost::throw_exception<boost::system::system_error>(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1
  int v3; // r3@1
  void **v4; // [sp+0h] [bp-40h]@1
  int v5; // [sp+4h] [bp-3Ch]@1
  __int64 v6; // [sp+8h] [bp-38h]@1
  int v7; // [sp+10h] [bp-30h]@1
  void **v8; // [sp+14h] [bp-2Ch]@1
  int v9; // [sp+18h] [bp-28h]@1
  int v10; // [sp+1Ch] [bp-24h]@1
  int v11; // [sp+20h] [bp-20h]@1
  int v12; // [sp+24h] [bp-1Ch]@1

  v1 = a1;
  v2 = j___cxa_allocate_exception(44);
  sub_DA73B4(&v5, (int *)(v1 + 4));
  v4 = &off_26D60C4;
  v6 = *(_QWORD *)(v1 + 8);
  sub_DA73B4(&v7, (int *)(v1 + 16));
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = -1;
  v4 = &off_26D61C4;
  v8 = &off_26D61D8;
  *((_DWORD *)v2 + 10) = &off_26D61AC;
  boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector((int)v2, (int)&v4);
  *(_DWORD *)v2 = &off_26D615C;
  *((_DWORD *)v2 + 5) = &off_26D6178;
  *((_DWORD *)v2 + 10) = &off_26D6194;
  boost::exception_detail::copy_boost_exception((int)(v2 + 20), (int)&v8);
  j___cxa_throw(
    (int)v2,
    (int)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>,
    (int)boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::~clone_impl,
    v3);
}


int __fastcall boost::thread::interrupt(int result)
{
  int v1; // r4@1
  unsigned int v2; // r5@1
  unsigned int v3; // r1@3
  pthread_mutex_t *v4; // r7@6
  unsigned int v5; // r1@10
  unsigned int v6; // r1@13

  v1 = *(_DWORD *)(result + 4);
  v2 = *(_DWORD *)result;
  if ( v1 )
  {
    result = v1 + 4;
    do
      v3 = __ldrex((unsigned int *)result);
    while ( __strex(v3 + 1, (unsigned int *)result) );
  }
  if ( v2 )
    sub_1FDD0BC((pthread_mutex_t *)(v2 + 24));
    *(_BYTE *)(v2 + 113) = 1;
    if ( *(_DWORD *)(v2 + 84) )
    {
      v4 = *(pthread_mutex_t **)(v2 + 80);
      j_pthread_mutex_lock_2(*(pthread_mutex_t **)(v2 + 80));
      j_pthread_cond_broadcast_1(*(pthread_cond_t **)(v2 + 84));
      j_pthread_mutex_unlock_2(v4);
    }
      result = j_pthread_mutex_unlock_2((pthread_mutex_t *)(v2 + 24));
    while ( result == 4 );
    __dmb();
      v5 = __ldrex((unsigned int *)result);
    while ( __strex(v5 - 1, (unsigned int *)result) );
    if ( v5 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
      result = v1 + 8;
      __dmb();
      do
        v6 = __ldrex((unsigned int *)result);
      while ( __strex(v6 - 1, (unsigned int *)result) );
      if ( v6 == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
  return result;
}


signed int __fastcall boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::wait_duration_msec(int a1, signed int a2)
{
  __int64 v2; // kr00_8@1
  signed int v3; // r8@1
  signed __int64 v4; // r0@2
  unsigned int v5; // r2@2
  signed int v6; // r6@2
  bool v7; // zf@7
  unsigned int v8; // r5@7
  int v9; // r6@10
  bool v10; // zf@10
  bool v11; // zf@13
  signed int v12; // r6@18
  signed int v13; // r1@24
  bool v14; // cf@32
  signed int v15; // r0@32
  signed __int64 v16; // r6@32
  signed int v17; // r1@34
  signed __int64 v18; // r2@39
  signed int v19; // r2@50
  signed int v20; // r0@52
  __int64 v22; // [sp+0h] [bp-20h]@2

  v2 = *(_QWORD *)(a1 + 12);
  v3 = a2;
  if ( (_DWORD)v2 == HIDWORD(v2) )
    return a2;
  j_boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(
    (int)&v22,
    (int (__fastcall *)(__time_t *, char *))boost::date_time::c_time::gmtime);
  v5 = *(_QWORD *)v2 >> 32;
  LODWORD(v4) = *(_QWORD *)v2;
  v6 = 0;
  if ( (unsigned int)(*(_DWORD *)v2 + 2) < 3 )
    v6 = 1;
  if ( (unsigned __int64)(*(_QWORD *)v2 - 9223372036854775806LL) >> 32 )
    v6 = 0;
  if ( v6 )
  {
    v7 = ((unsigned int)v4 ^ 0xFFFFFFFE | v5 ^ 0x7FFFFFFF) == 0;
    v8 = -1511828489;
    HIDWORD(v4) = 2147483;
    if ( (unsigned int)v4 ^ 0xFFFFFFFE | v5 ^ 0x7FFFFFFF )
      v7 = v22 == 9223372036854775806LL;
    if ( v7 )
      goto LABEL_50;
    v9 = v5 ^ 0x7FFFFFFF | ~(_DWORD)v4;
    v10 = v9 == 0;
    if ( !v9 )
      v10 = (HIDWORD(v22) ^ 0x7FFFFFFF | ~(_DWORD)v22) == 0;
    if ( !v10 )
    {
      v11 = (v5 ^ 0x80000000 | (unsigned int)v4) == 0;
      if ( !(v5 ^ 0x80000000 | (unsigned int)v4) )
        v11 = (HIDWORD(v22) ^ 0x80000000 | (unsigned int)v22) == 0;
      if ( !v11 )
        goto LABEL_24;
    }
    goto LABEL_49;
  }
  v12 = 0;
  if ( (unsigned int)(v22 + 2) < 3 )
    v12 = 1;
  if ( (unsigned __int64)(v22 - 9223372036854775806LL) >> 32 )
    v12 = 0;
  if ( v12 )
    if ( v22 != 9223372036854775806LL )
LABEL_24:
      HIDWORD(v4) = 0;
      if ( (unsigned int)(v4 + 1) < 2 )
        v13 = 1;
      if ( (__PAIR__(v5, (unsigned int)v4) - 0x7FFFFFFFFFFFFFFFLL) >> 32 )
        v13 = 0;
      if ( v13 )
        goto LABEL_61;
      if ( HIDWORD(v22) ^ 0x80000000 | (unsigned int)v22 )
      {
        if ( !(HIDWORD(v22) ^ 0x7FFFFFFF | ~(_DWORD)v22) )
          return 0;
        v5 = (__PAIR__(v5, (unsigned int)v4) - v22) >> 32;
        LODWORD(v4) = v4 - v22;
        if ( __PAIR__(v5, (unsigned int)v4) != 9223372036854775806LL )
        {
LABEL_61:
          if ( !((unsigned int)v4 | v5 ^ 0x80000000) )
            return 0;
        }
      }
LABEL_49:
LABEL_50:
    v19 = 0;
    if ( v8 > v3 )
      v19 = 1;
    LODWORD(v4) = 0;
    if ( SHIDWORD(v4) > v3 >> 31 )
      v20 = 1;
    if ( HIDWORD(v4) == v3 >> 31 )
      v20 = v19;
    if ( v20 )
      v8 = v3;
    return v8;
  v14 = (unsigned int)v4 >= (unsigned int)v22;
  LODWORD(v16) = v4 - v22;
  v15 = 0;
  HIDWORD(v16) = v5 - (HIDWORD(v22) + !v14);
  if ( !(_DWORD)v16 )
    v15 = 1;
  v17 = 0;
  v8 = 0;
  if ( SHIDWORD(v16) < 0 )
    v17 = 1;
  if ( v5 == HIDWORD(v22) + !v14 )
    v17 = v15;
  if ( !v17 )
    v4 = j_j___aeabi_ldivmod_1(v16, 1000LL);
    v18 = v16 + 999;
    LODWORD(v18) = 0;
    if ( (unsigned int)(v16 + 999) < 0x7CF )
      LODWORD(v18) = 1;
    if ( HIDWORD(v18) )
      LODWORD(v18) = 0;
    if ( (_DWORD)v18 )
      return 1;
    v8 = v4;
    goto LABEL_50;
  return v8;
}


const char **__fastcall boost::asio::ssl::context::context(int a1, int a2)
{
  int v2; // r5@1
  const char **v3; // r4@1
  int v4; // r0@2
  int v5; // r5@4
  char v6; // r0@4
  int v8; // r0@11
  int v9; // r0@12
  int v10; // r0@13
  void *v11; // r0@14
  void *v12; // r0@15
  void *v13; // r0@16
  void *v14; // r0@17
  void *v15; // r0@18
  void *v16; // r0@19
  void *v17; // r0@20
  void *v18; // r0@21
  void *v19; // r0@22
  void *v20; // r0@23
  void *v21; // r0@24
  void *v22; // r0@25
  void *v23; // r0@26
  void *v24; // r0@27
  void *v25; // r0@28
  int v26; // [sp+0h] [bp-18h]@7
  void *v27; // [sp+4h] [bp-14h]@7

  v2 = a2;
  v3 = (const char **)a1;
  *(_DWORD *)a1 = 0;
  j_boost::asio::ssl::detail::openssl_init_base::instance((boost::asio::ssl::detail::openssl_init_base *)(a1 + 4));
  j_j_ERR_clear_error();
  switch ( v2 )
  {
    case 0:
      v8 = j_j_SSLv2_method();
      v4 = j_j_SSL_CTX_new(v8);
      break;
    case 1:
      v9 = j_j_SSLv2_client_method();
      v4 = j_j_SSL_CTX_new(v9);
    case 2:
      v10 = j_j_SSLv2_server_method();
      v4 = j_j_SSL_CTX_new(v10);
    case 3:
      v11 = j_j_SSLv3_method();
      v4 = j_j_SSL_CTX_new((int)v11);
    case 4:
      v12 = j_j_SSLv3_client_method();
      v4 = j_j_SSL_CTX_new((int)v12);
    case 5:
      v13 = j_j_SSLv3_server_method();
      v4 = j_j_SSL_CTX_new((int)v13);
    case 6:
      v14 = j_j_TLSv1_method();
      v4 = j_j_SSL_CTX_new((int)v14);
    case 7:
      v15 = j_j_TLSv1_client_method();
      v4 = j_j_SSL_CTX_new((int)v15);
    case 8:
      v16 = j_j_TLSv1_server_method();
      v4 = j_j_SSL_CTX_new((int)v16);
    case 9:
      v17 = j_j_SSLv23_method();
      v4 = j_j_SSL_CTX_new((int)v17);
    case 10:
      v18 = j_j_SSLv23_client_method();
      v4 = j_j_SSL_CTX_new((int)v18);
    case 11:
      v19 = j_j_SSLv23_server_method();
      v4 = j_j_SSL_CTX_new((int)v19);
    case 12:
      v20 = j_j_TLSv1_1_method();
      v4 = j_j_SSL_CTX_new((int)v20);
    case 13:
      v21 = j_j_TLSv1_1_client_method();
      v4 = j_j_SSL_CTX_new((int)v21);
    case 14:
      v22 = j_j_TLSv1_1_server_method();
      v4 = j_j_SSL_CTX_new((int)v22);
    case 15:
      v23 = j_j_TLSv1_2_method();
      v4 = j_j_SSL_CTX_new((int)v23);
    case 16:
      v24 = j_j_TLSv1_2_client_method();
      v4 = j_j_SSL_CTX_new((int)v24);
    case 17:
      v25 = j_j_TLSv1_2_server_method();
      v4 = j_j_SSL_CTX_new((int)v25);
    default:
      v4 = j_j_SSL_CTX_new(0);
  }
  *v3 = (const char *)v4;
  if ( !v4 )
    v5 = j_j_ERR_get_error_0();
    v6 = `guard variable for'boost::asio::error::get_ssl_category(void)::instance;
    __dmb();
    if ( !(v6 & 1)
      && j_j___cxa_guard_acquire_1(&`guard variable for'boost::asio::error::get_ssl_category(void)::instance) )
    {
      boost::asio::error::get_ssl_category(void)::instance = &off_2763194;
      j_j___cxa_guard_release_1(&`guard variable for'boost::asio::error::get_ssl_category(void)::instance);
    }
    v26 = v5;
    v27 = &boost::asio::error::get_ssl_category(void)::instance;
    if ( v5 )
      j_boost::asio::detail::do_throw_error((unsigned __int64 *)&v26, "context");
  sub_21B09F0();
  j_j_SSL_CTX_ctrl(*v3, 32, 0x20000, 0);
  return v3;
}


void __fastcall boost::exception_detail::error_info_injector<std::length_error>::~error_info_injector(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  sub_21D30E8(v1);
  j_j_j__ZdlPv_8((void *)v1);
}


void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl(int a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl(a1);
}


int __fastcall boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::get_ready_timers(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  __int64 v4; // r0@1 OVERLAPPED
  __int64 v5; // kr00_8@3
  int v6; // r2@4 OVERLAPPED
  signed int v7; // r1@4
  bool v8; // zf@6
  bool v9; // nf@6
  unsigned __int8 v10; // vf@6
  signed int v11; // r2@6
  int v12; // r1@11
  int v13; // r0@11
  _DWORD *v14; // r2@12
  int v16; // [sp+0h] [bp-28h]@2

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 20);
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    j_boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(
      (int)&v16,
      (int (__fastcall *)(__time_t *, char *))boost::date_time::c_time::gmtime);
    v4 = *(_QWORD *)(v2 + 20);
    if ( (_DWORD)v4 != HIDWORD(v4) )
    {
      v5 = *(_QWORD *)&v16;
      do
      {
        *(__int64 *)((char *)&v4 + 4) = *(_QWORD *)v4;
        HIDWORD(v4) = 0;
        if ( (unsigned int)v5 < (unsigned int)*(_QWORD *)v4 )
          v7 = 1;
        v10 = __OFSUB__(HIDWORD(v5), v6);
        v8 = HIDWORD(v5) == v6;
        v9 = HIDWORD(v5) - v6 < 0;
        v11 = 0;
        if ( v9 ^ v10 )
          v11 = 1;
        if ( v8 )
          v11 = v7;
        if ( v11 )
          break;
        v12 = *(_DWORD *)(v4 + 8);
        v13 = *(_DWORD *)v12;
        if ( *(_DWORD *)v12 )
        {
          v14 = *(_DWORD **)(v3 + 4);
          if ( v14 )
            *v14 = v13;
          else
            *(_DWORD *)v3 = v13;
          *(_DWORD *)(v3 + 4) = *(_DWORD *)(v12 + 4);
          *(_DWORD *)v12 = 0;
          *(_DWORD *)(v12 + 4) = 0;
        }
        j_boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::remove_timer(v2 + 8, v12);
        v4 = *(_QWORD *)(v2 + 20);
      }
      while ( (_DWORD)v4 != HIDWORD(v4) );
    }
  }
  return v4;
}


boost::asio::detail::epoll_reactor *__fastcall boost::asio::detail::epoll_reactor::~epoll_reactor(boost::asio::detail::epoll_reactor *this)
{
  boost::asio::detail::epoll_reactor *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@3
  int v4; // r0@5
  int v5; // r5@6
  boost::asio::detail::epoll_reactor::descriptor_state *v6; // r0@6
  int v7; // r0@7
  int v8; // r5@8
  boost::asio::detail::epoll_reactor::descriptor_state *v9; // r0@8
  int v10; // r0@9
  int v11; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_276C7A4;
  v2 = *((_DWORD *)this + 9);
  if ( v2 != -1 )
    j_close_0(v2);
  v3 = *((_DWORD *)v1 + 10);
  if ( v3 != -1 )
    j_close_0(v3);
  v4 = *((_DWORD *)v1 + 14);
  if ( v4 )
  {
    do
    {
      v5 = *(_DWORD *)(v4 + 12);
      v6 = j_boost::asio::detail::epoll_reactor::descriptor_state::~descriptor_state((boost::asio::detail::epoll_reactor::descriptor_state *)v4);
      j_operator delete((void *)v6);
      v4 = v5;
    }
    while ( v5 );
  }
  v7 = *((_DWORD *)v1 + 15);
  if ( v7 )
      v8 = *(_DWORD *)(v7 + 12);
      v9 = j_boost::asio::detail::epoll_reactor::descriptor_state::~descriptor_state((boost::asio::detail::epoll_reactor::descriptor_state *)v7);
      j_operator delete((void *)v9);
      v7 = v8;
    while ( v8 );
  j_pthread_mutex_destroy_0((pthread_mutex_t *)((char *)v1 + 52));
  v10 = *((_DWORD *)v1 + 7);
  if ( v10 != -1 )
    j_close_0(v10);
  v11 = *((_DWORD *)v1 + 8);
  if ( v11 != -1 )
    j_close_0(v11);
  j_pthread_mutex_destroy_0((pthread_mutex_t *)v1 + 1);
  return v1;
}


_DWORD *__fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  return sub_21D315C(v1);
}


int __fastcall boost::thread::interruption_requested(boost::thread *this)
{
  int v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@3
  pthread_mutex_t *v5; // r6@5
  int v6; // r5@5
  unsigned int *v7; // r0@10
  unsigned int v8; // r1@11
  unsigned int *v9; // r0@13
  unsigned int v10; // r1@14

  v1 = *((_DWORD *)this + 1);
  v2 = *(_DWORD *)this;
  if ( v1 )
  {
    v3 = (unsigned int *)(v1 + 4);
    do
      v4 = __ldrex(v3);
    while ( __strex(v4 + 1, v3) );
  }
  if ( v2 )
    v5 = (pthread_mutex_t *)(v2 + 24);
    sub_1FDD0BC((pthread_mutex_t *)(v2 + 24));
    v6 = *(_BYTE *)(v2 + 113) != 0;
    while ( j_pthread_mutex_unlock_2(v5) == 4 )
      ;
  else
    v6 = 0;
    v7 = (unsigned int *)(v1 + 4);
    __dmb();
      v8 = __ldrex(v7);
    while ( __strex(v8 - 1, v7) );
    if ( v8 == 1 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
      v9 = (unsigned int *)(v1 + 8);
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      if ( v10 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
    }
  return v6;
}


signed int __fastcall boost::asio::detail::epoll_reactor::do_epoll_create(boost::asio::detail::epoll_reactor *this)
{
  _DWORD *v1; // r0@1
  int v2; // r0@1
  int v3; // r0@2
  signed int v4; // r4@3
  int v6; // [sp+0h] [bp-10h]@5
  void *v7; // [sp+4h] [bp-Ch]@5

  v1 = (_DWORD *)j___errno_0((int)this);
  *v1 = 22;
  v2 = *(_DWORD *)j___errno_0((int)v1);
  if ( v2 != 22 && (v3 = *(_DWORD *)j___errno_0(v2), v3 != 38) || (v3 = j_epoll_create(20000), v4 = v3, v3 == -1) )
  {
    v6 = *(_DWORD *)j___errno_0(v3);
    v7 = sub_21B09F0();
    if ( v6 )
      j_boost::asio::detail::do_throw_error((unsigned __int64 *)&v6, "epoll");
    v4 = -1;
  }
  else
    j_fcntl_0(v3, 2, 1);
  return v4;
}


unsigned int *__fastcall boost::asio::ssl::detail::openssl_init_base::instance(boost::asio::ssl::detail::openssl_init_base *this)
{
  boost::asio::ssl::detail::openssl_init_base *v1; // r4@1
  char v2; // r0@1
  boost::asio::ssl::detail::openssl_init_base::do_init *v3; // r5@3
  unsigned int *result; // r0@4
  unsigned int v5; // r1@7

  v1 = this;
  v2 = `guard variable for'boost::asio::ssl::detail::openssl_init_base::instance(void)::init;
  __dmb();
  if ( !(v2 & 1)
    && j___cxa_guard_acquire(&`guard variable for'boost::asio::ssl::detail::openssl_init_base::instance(void)::init) )
  {
    v3 = (boost::asio::ssl::detail::openssl_init_base::do_init *)operator new(0x10u);
    boost::asio::ssl::detail::openssl_init_base::do_init::do_init(v3);
    boost::asio::ssl::detail::openssl_init_base::instance(void)::init = v3;
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<boost::asio::ssl::detail::openssl_init_base::do_init *>(
      &unk_27C5088,
      (int)v3);
    _cxa_atexit(std::__shared_ptr<boost::asio::ssl::detail::openssl_init_base::do_init,(__gnu_cxx::_Lock_policy)2>::~__shared_ptr);
    j___cxa_guard_release(&`guard variable for'boost::asio::ssl::detail::openssl_init_base::instance(void)::init);
  }
  result = (unsigned int *)unk_27C5088;
  *(_DWORD *)v1 = boost::asio::ssl::detail::openssl_init_base::instance(void)::init;
  *((_DWORD *)v1 + 1) = result;
  if ( result )
    ++result;
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(result);
      while ( __strex(v5 + 1, result) );
    }
    else
      ++*result;
  return result;
}


signed int __fastcall boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::empty(int a1)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *(_DWORD *)(a1 + 16);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


void __fastcall __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::rethrow(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1
  int v3; // r3@1

  v1 = a1;
  v2 = j_j___cxa_allocate_exception_0(32);
  j_boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(
    (int)v2,
    v1);
  j_j___cxa_throw_0(
    (int)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>,
    (int)boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl,
    v3);
}


boost::detail *__fastcall boost::detail::set_tss_data(boost::detail *a1, int a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r8@1
  int v6; // r5@1
  boost::detail *v7; // r6@1
  _DWORD *v8; // r0@1
  int v9; // r2@2
  int v10; // r0@2
  int v11; // r1@3
  int v12; // r4@4
  int v13; // r0@16
  bool v14; // zf@16
  boost::detail *result; // r0@20
  bool v16; // zf@20
  int v17; // r1@23
  unsigned int *v18; // r2@24
  unsigned int v19; // r3@25
  int v20; // r5@26
  unsigned int v21; // r1@28
  unsigned int v22; // r1@31
  bool v23; // zf@35
  int v24; // r5@38
  unsigned int *v25; // r0@39
  unsigned int v26; // r1@40
  unsigned int v27; // r1@43
  unsigned int v28; // r1@46
  boost::detail *v29; // [sp+4h] [bp-24h]@38
  int v30; // [sp+8h] [bp-20h]@38
  boost::detail *v31; // [sp+Ch] [bp-1Ch]@49

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = j_boost::detail::get_current_thread_data(a1);
  if ( !v8 )
    goto LABEL_53;
  v9 = v8[16];
  v10 = (int)(v8 + 15);
  if ( v9 )
  {
    v11 = v10;
    do
    {
      v12 = v9;
      while ( *(_DWORD *)(v12 + 16) < (unsigned int)v7 )
      {
        v12 = *(_DWORD *)(v12 + 12);
        if ( !v12 )
        {
          v12 = v11;
          goto LABEL_11;
        }
      }
      v9 = *(_DWORD *)(v12 + 8);
      v11 = v12;
    }
    while ( v9 );
  }
  else
    v12 = v10;
LABEL_11:
  if ( v12 == v10 )
  if ( *(_DWORD *)(v12 + 16) > (unsigned int)v7 )
  if ( v12 != v10 )
    if ( v4 == 1 )
      v13 = *(_DWORD *)(v12 + 20);
      v14 = v13 == 0;
      if ( v13 )
        v14 = *(_DWORD *)(v12 + 28) == 0;
      if ( !v14 )
        (*(void (**)(void))(*(_DWORD *)v13 + 8))();
    result = *(boost::detail **)v6;
    v16 = v5 == 0;
    if ( !v5 )
      v16 = result == 0;
    if ( v16 )
      v31 = v7;
      result = (boost::detail *)j_boost::detail::get_current_thread_data(result);
      if ( result )
        result = (boost::detail *)sub_21AC680((int)result + 56, (int *)&v31);
    else
      v17 = *(_DWORD *)(v6 + 4);
      if ( v17 )
        v18 = (unsigned int *)(v17 + 4);
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 + 1, v18) );
      *(_DWORD *)(v12 + 20) = result;
      v20 = *(_DWORD *)(v12 + 24);
      *(_DWORD *)(v12 + 24) = v17;
      if ( v20 )
        result = (boost::detail *)(v20 + 4);
        __dmb();
          v21 = __ldrex((unsigned int *)result);
        while ( __strex(v21 - 1, (unsigned int *)result) );
        if ( v21 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
          result = (boost::detail *)(v20 + 8);
          __dmb();
          do
            v22 = __ldrex((unsigned int *)result);
          while ( __strex(v22 - 1, (unsigned int *)result) );
          if ( v22 == 1 )
            result = (boost::detail *)(*(int (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
      *(_DWORD *)(v12 + 28) = v5;
LABEL_53:
    v23 = v5 == 0;
      v23 = result == 0;
    if ( !v23 )
      v29 = *(boost::detail **)v6;
      v24 = *(_DWORD *)(v6 + 4);
      v30 = v24;
      if ( v24 )
        v25 = (unsigned int *)(v24 + 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 + 1, v25) );
      result = (boost::detail *)sub_21ABBEC(v7, (int)&v29, v5);
        result = (boost::detail *)(v24 + 4);
          v27 = __ldrex((unsigned int *)result);
        while ( __strex(v27 - 1, (unsigned int *)result) );
        if ( v27 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
          result = (boost::detail *)(v24 + 8);
            v28 = __ldrex((unsigned int *)result);
          while ( __strex(v28 - 1, (unsigned int *)result) );
          if ( v28 == 1 )
            result = (boost::detail *)(*(int (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
  return result;
}


void __fastcall boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::~timer_queue(int a1)
{
  void *v1; // r4@1
  void *v2; // r0@1

  v1 = (void *)a1;
  *(_DWORD *)a1 = &off_276C718;
  *(_DWORD *)(a1 + 8) = &off_276C76C;
  v2 = *(void **)(a1 + 20);
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_8(v1);
}


_DWORD *__fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  return sub_21D2E30(v1);
}


void __fastcall boost::asio::detail::resolver_service_base::fork_service(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@2
  pthread_t *v4; // r0@3
  int v5; // r7@3
  pthread_t *v6; // r5@3
  _DWORD *v7; // r6@3
  int v8; // r7@3
  int v9; // r6@4
  int v10; // r4@9
  int v11; // [sp+0h] [bp-20h]@13
  void *v12; // [sp+4h] [bp-1Ch]@13

  v2 = a1;
  if ( *(_DWORD *)(a1 + 20) )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4);
    if ( a2 )
    {
      j_pthread_mutex_lock_1((pthread_mutex_t *)(v3 + 24));
      *(_BYTE *)(v3 + 68) = 0;
      j_pthread_mutex_unlock_1((pthread_mutex_t *)(v3 + 24));
      v4 = (pthread_t *)j_operator new(8u);
      v5 = *(_DWORD *)(v2 + 8);
      v6 = v4;
      *((_BYTE *)v4 + 4) = 0;
      v7 = j_operator new(8u);
      *v7 = &off_276C3C8;
      v7[1] = v5;
      v8 = j_pthread_create_0(v6, 0, (void *(*)(void *))boost_asio_detail_posix_thread_function, v7);
      if ( v8 )
      {
        (*(void (__fastcall **)(_DWORD *))(*v7 + 4))(v7);
        v11 = v8;
        v12 = sub_21B09F0();
        j_boost::asio::detail::do_throw_error((unsigned __int64 *)&v11, "thread");
      }
      v9 = *(_DWORD *)(v2 + 20);
      if ( v9 )
        if ( !*(_BYTE *)(v9 + 4) )
          j_pthread_detach(*(_DWORD *)v9);
        j_operator delete((void *)v9);
      *(_DWORD *)(v2 + 20) = v6;
    }
    else
      j_boost::asio::detail::task_io_service::stop(*(boost::asio::detail::task_io_service **)(*(_DWORD *)(a1 + 8) + 4));
      v10 = *(_DWORD *)(v2 + 20);
      if ( !*(_BYTE *)(v10 + 4) )
        j_pthread_join(*(_DWORD *)v10, 0);
        *(_BYTE *)(v10 + 4) = 1;
  }
}


signed int __fastcall boost::thread::start_thread_noexcept(_DWORD *a1, const pthread_attr_t *a2)
{
  _DWORD *v2; // r4@1
  const pthread_attr_t *v3; // r5@1
  int v4; // r0@1
  int v5; // r1@1
  unsigned int *v6; // r2@2
  unsigned int v7; // r3@3
  int v8; // r6@4
  unsigned int *v9; // r0@5
  unsigned int v10; // r1@6
  unsigned int *v11; // r0@8
  unsigned int v12; // r1@9
  int v13; // r1@13
  signed int result; // r0@13
  int v15; // r4@13
  unsigned int *v16; // r0@14
  unsigned int v17; // r1@15
  unsigned int *v18; // r0@17
  unsigned int v19; // r1@18
  _DWORD *v20; // r1@22
  int v21; // r4@22
  unsigned int *v22; // r0@23
  unsigned int v23; // r1@24
  unsigned int *v24; // r0@26
  unsigned int v25; // r1@27
  void *v26; // r0@32
  int v27; // r5@32
  unsigned int *v28; // r0@36
  unsigned int v29; // r1@37
  unsigned int *v30; // r0@39
  unsigned int v31; // r1@40
  int detachstate; // [sp+4h] [bp-14h]@21

  v2 = a1;
  v3 = a2;
  v4 = *a1;
  v5 = v2[1];
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 4);
    do
      v7 = __ldrex(v6);
    while ( __strex(v7 + 1, v6) );
  }
  *(_DWORD *)(v4 + 12) = v4;
  v8 = *(_DWORD *)(v4 + 16);
  *(_DWORD *)(v4 + 16) = v5;
  if ( v8 )
    v9 = (unsigned int *)(v8 + 4);
    __dmb();
      v10 = __ldrex(v9);
    while ( __strex(v10 - 1, v9) );
    if ( v10 == 1 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      v11 = (unsigned int *)(v8 + 8);
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
    }
  if ( j_pthread_create_1((pthread_t *)(*v2 + 20), v3, (void *(*)(void *))sub_21AA02C, (void *)*v2) )
    v13 = *v2;
    result = 0;
    *(_DWORD *)(v13 + 12) = 0;
    v15 = *(_DWORD *)(v13 + 16);
    *(_DWORD *)(v13 + 16) = 0;
    if ( !v15 )
      return result;
    v16 = (unsigned int *)(v15 + 4);
      v17 = __ldrex(v16);
    while ( __strex(v17 - 1, v16) );
    if ( v17 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
      v18 = (unsigned int *)(v15 + 8);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      if ( v19 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
    return 0;
  if ( j_pthread_attr_getdetachstate(v3, &detachstate) )
    v20 = (_DWORD *)*v2;
    v20[3] = 0;
    v21 = v20[4];
    v20[4] = 0;
    if ( !v21 )
    v22 = (unsigned int *)(v21 + 4);
      v23 = __ldrex(v22);
    while ( __strex(v23 - 1, v22) );
    if ( v23 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
      v24 = (unsigned int *)(v21 + 8);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      if ( v25 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
  if ( detachstate == 1 )
    v26 = (void *)*v2;
    *v2 = 0;
    v27 = v2[1];
    v2[1] = 0;
    if ( v26 && !*((_BYTE *)v26 + 49) )
      *(_WORD *)((char *)v26 + 49) = 257;
    if ( v27 )
      v28 = (unsigned int *)(v27 + 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      if ( v29 == 1 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 8))(v27);
        v30 = (unsigned int *)(v27 + 8);
        __dmb();
        do
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        if ( v31 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 12))(v27);
      }
  return 1;
}


int __fastcall boost::uuids::detail::sha1::process_byte(boost::uuids::detail::sha1 *this, unsigned __int8 a2)
{
  boost::uuids::detail::sha1 *v2; // r4@1
  int v3; // r0@1
  unsigned int v4; // r0@3
  int result; // r0@4
  int v6; // r0@5
  int v7; // [sp+8h] [bp-20h]@7
  char v8; // [sp+Ch] [bp-1Ch]@7

  v2 = this;
  v3 = *((_DWORD *)this + 21);
  *((_DWORD *)v2 + 21) = v3 + 1;
  *((_BYTE *)v2 + v3 + 20) = a2;
  if ( *((_DWORD *)v2 + 21) == 64 )
  {
    *((_DWORD *)v2 + 21) = 0;
    j_boost::uuids::detail::sha1::process_block(v2);
  }
  v4 = *((_DWORD *)v2 + 22);
  if ( v4 > 0xFFFFFFF7 )
    *((_DWORD *)v2 + 22) = 0;
    v6 = *((_DWORD *)v2 + 23);
    if ( v6 == -1 )
    {
      sub_21E94B4((void **)&v7, "sha1 too many bytes");
      sub_21D36EC((int)&v8, &v7);
      j_boost::exception_detail::throw_exception_<std::runtime_error>(
        (int)&v8,
        (int)"void boost::uuids::detail::sha1::process_byte(unsigned char)",
        (int)"C:\\Users\\v-stebar\\xsapi_fork2\\External\\sdk.mobile\\External\\Boost\\Android\\boost.1.59.0\\build\\nati"
             "ve\\..\\..\\..\\..\\include\\boost/uuid/sha1.hpp",
        104);
    }
    result = v6 + 1;
    *((_DWORD *)v2 + 23) = result;
  else
    result = v4 + 8;
    *((_DWORD *)v2 + 22) = result;
  return result;
}


void __fastcall boost::exception_detail::error_info_injector<std::bad_cast>::~error_info_injector(std::bad_cast *this)
{
  std::bad_cast *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *((_DWORD *)this + 1) = &off_26D61E8;
  v2 = *((_DWORD *)this + 2);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *((_DWORD *)v1 + 2) = 0;
  j_std::bad_cast::~bad_cast(v1);
  j_j_j__ZdlPv_8((void *)v1);
}


void *__fastcall boost::notify_all_at_thread_exit(boost::detail *a1, int a2)
{
  int v2; // r5@1
  void *result; // r0@1
  int v4; // r2@2
  int (*v5)(void); // r3@2

  v2 = a2;
  result = j_boost::detail::get_current_thread_data(a1);
  if ( result )
  {
    v4 = *(_DWORD *)v2;
    v5 = *(int (**)(void))(*(_DWORD *)result + 12);
    *(_DWORD *)v2 = 0;
    *(_BYTE *)(v2 + 4) = 0;
    result = (void *)v5();
  }
  return result;
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::clone_impl(int a1, int a2)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::clone_impl(
           a1,
           a2);
}


int __fastcall boost::asio::detail::reactive_socket_service_base::start_op(int *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int *v7; // r6@1
  int v8; // r4@1
  int v9; // r5@1
  int v10; // r7@1
  int v11; // r0@2
  int v12; // r9@3
  int v13; // r9@4
  int v14; // r11@4
  void *v15; // r0@4
  void *v16; // r0@5
  void *v18; // r0@7
  int v19; // [sp+10h] [bp-28h]@4

  v7 = a1;
  v8 = a4;
  v9 = a3;
  v10 = a2;
  if ( !a7 )
  {
    v11 = *(_BYTE *)(a2 + 4);
    if ( v11 & 3 )
      return j_boost::asio::detail::epoll_reactor::start_op(*v7, v9, *(_DWORD *)v10, (int *)(v10 + 8), v8, a5, a6);
    v12 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 == -1 )
    {
      v18 = sub_21B09F0();
      *(_DWORD *)(v8 + 12) = 9;
      *(_DWORD *)(v8 + 16) = v18;
    }
    else
      *(_DWORD *)j___errno_0(v11) = 0;
      v19 = 1;
      v13 = j_ioctl_0(v12, 0x5421u, &v19);
      v14 = *(_DWORD *)j___errno_0(v13);
      v15 = sub_21B09F0();
      *(_DWORD *)(v8 + 12) = v14;
      *(_DWORD *)(v8 + 16) = v15;
      if ( v13 >= 0 )
      {
        v16 = sub_21B09F0();
        *(_DWORD *)(v8 + 12) = 0;
        *(_DWORD *)(v8 + 16) = v16;
        *(_BYTE *)(v10 + 4) |= 2u;
        return j_boost::asio::detail::epoll_reactor::start_op(*v7, v9, *(_DWORD *)v10, (int *)(v10 + 8), v8, a5, a6);
      }
  }
  return j_boost::asio::detail::task_io_service::post_immediate_completion(*(_DWORD *)(*v7 + 20), (_DWORD *)v8, a5);
}


int __fastcall boost::asio::detail::task_io_service::post_deferred_completion(int a1, _DWORD *a2)
{
  int v2; // r4@1
  _DWORD *v3; // r6@1
  void *i; // r0@2
  int result; // r0@6
  _DWORD *v6; // r1@7
  _DWORD *v7; // r0@10
  int v8; // r0@13
  int v9; // r0@15
  int v10; // [sp+0h] [bp-20h]@16
  int v11; // [sp+4h] [bp-1Ch]@16
  int v12; // [sp+8h] [bp-18h]@16
  int v13; // [sp+Ch] [bp-14h]@16

  v2 = a1;
  v3 = a2;
  if ( *(_BYTE *)(a1 + 20) )
  {
    for ( i = j_pthread_getspecific_1(boost::asio::detail::call_stack<boost::asio::detail::task_io_service,boost::asio::detail::task_io_service_thread_info>::top_);
          i;
          i = (void *)*((_DWORD *)i + 2) )
    {
      if ( *(_DWORD *)i == v2 )
      {
        result = *((_DWORD *)i + 1);
        if ( !result )
          break;
        *v3 = 0;
        v6 = *(_DWORD **)(result + 8);
        if ( v6 )
        {
          *v6 = v3;
          *(_DWORD *)(result + 8) = v3;
        }
        else
          *(_DWORD *)(result + 4) = v3;
        return result;
      }
    }
  }
  j_pthread_mutex_lock_1((pthread_mutex_t *)(v2 + 24));
  *v3 = 0;
  v7 = *(_DWORD **)(v2 + 64);
  if ( v7 )
    *v7 = v3;
  else
    *(_DWORD *)(v2 + 60) = v3;
  *(_DWORD *)(v2 + 64) = v3;
  v8 = *(_DWORD *)(v2 + 32) | 1;
  *(_DWORD *)(v2 + 32) = v8;
  if ( v8 == 1 )
    if ( !*(_BYTE *)(v2 + 52) )
      v9 = *(_DWORD *)(v2 + 36);
      if ( v9 )
        *(_BYTE *)(v2 + 52) = 1;
        v13 = 0;
        v11 = qword_260F9EC;
        v10 = -2147483639;
        v12 = v9 + 28;
        j_epoll_ctl(*(_DWORD *)(v9 + 36), 3, *(_DWORD *)(v9 + 28), (struct epoll_event *)&v10);
    result = j_pthread_mutex_unlock_1((pthread_mutex_t *)(v2 + 24));
    j_pthread_mutex_unlock_1((pthread_mutex_t *)(v2 + 24));
    result = j_pthread_cond_signal_0((pthread_cond_t *)(v2 + 28));
  return result;
}


void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::bad_cast>>::rethrow(int a1)
{
  int v1; // r5@1
  char *v2; // r0@1
  int v3; // r4@1
  int v4; // r0@1
  __int64 v5; // kr00_8@3

  v1 = a1;
  v2 = j_j___cxa_allocate_exception_0(28);
  v3 = (int)v2;
  *((_DWORD *)v2 + 6) = &off_26D61AC;
  *(_DWORD *)v2 = &off_27727A8;
  *((_DWORD *)v2 + 1) = &off_26D61E8;
  v4 = *(_DWORD *)(v1 + 8);
  *(_DWORD *)(v3 + 8) = v4;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v5 = *(_QWORD *)(v1 + 12);
  *(_DWORD *)(v3 + 20) = *(_DWORD *)(v1 + 20);
  *(_QWORD *)(v3 + 12) = v5;
  *(_DWORD *)v3 = &off_276C8CC;
  *(_DWORD *)(v3 + 4) = &off_276C8E8;
  *(_DWORD *)(v3 + 24) = &off_276C904;
  j_j___cxa_throw_0(
    v3,
    (int)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::bad_cast>>,
    (int)boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::bad_cast>>::~clone_impl,
    (int)&off_276C8E8);
}


boost::gregorian::bad_month *__fastcall boost::gregorian::bad_month::bad_month(boost::gregorian::bad_month *this)
{
  boost::gregorian::bad_month *v1; // r5@1
  void *v2; // r0@1
  unsigned int *v4; // r1@3
  signed int v5; // r2@4
  int v6; // [sp+4h] [bp-1Ch]@1

  v1 = this;
  sub_21E94B4((void **)&v6, "Month number is out of range 1..12");
  sub_21D36BC((int)v1, &v6);
  v2 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v6 - 4);
    __dmb();
    do
      v5 = __ldrex(v4);
    while ( __strex(v5 - 1, v4) );
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  }
  *(_DWORD *)v1 = &off_276C5A0;
  return v1;
}


void __fastcall boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  sub_21D2E30(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall __noreturn boost::throw_exception<std::invalid_argument>(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1
  int v3; // r3@1
  void **v4; // [sp+4h] [bp-2Ch]@1
  int v5; // [sp+8h] [bp-28h]@1
  void **v6; // [sp+Ch] [bp-24h]@1
  int v7; // [sp+10h] [bp-20h]@1
  int v8; // [sp+14h] [bp-1Ch]@1
  int v9; // [sp+18h] [bp-18h]@1
  int v10; // [sp+1Ch] [bp-14h]@1

  v1 = a1;
  v2 = j_j___cxa_allocate_exception(32);
  sub_21E8AF4(&v5, (int *)(v1 + 4));
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = -1;
  v4 = &off_276520C;
  v6 = &off_2765220;
  j_boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::clone_impl(
    (int)v2,
    (int)&v4);
  j_j___cxa_throw(
    (int)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>,
    (int)boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::~clone_impl,
    v3);
}


int __fastcall boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::get_all_timers(int result, int a2)
{
  return boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::get_all_timers(
           result,
           a2);
}


int __fastcall boost::this_thread::no_interruption_point::hiden::sleep_for(int result, const timespec *a2)
{
  if ( (((unsigned __int64)(1000000000LL * *(_DWORD *)result + *(_DWORD *)(result + 4)) >> 32) & 0x80000000) == 0LL )
    result = j_j_nanosleep_1((const struct timespec *)result, 0);
  return result;
}


void __fastcall boost::asio::basic_streambuf<std::allocator<char>>::~basic_streambuf(int a1)
{
  boost::asio::basic_streambuf<std::allocator<char>>::~basic_streambuf(a1);
}


void __fastcall boost::asio::stream_socket_service<boost::asio::ip::tcp>::~stream_socket_service(void *ptr)
{
  boost::asio::stream_socket_service<boost::asio::ip::tcp>::~stream_socket_service(ptr);
}


int __fastcall boost::asio::detail::strand_service::do_complete(int result, int a2)
{
  int v2; // r10@1
  int v3; // r4@1
  int v4; // r1@3
  int v5; // r0@4
  int v6; // r0@7
  _DWORD *v7; // r1@8
  int v8; // r7@12
  int v9; // r0@12
  int pointer; // [sp+4h] [bp-2Ch]@2
  int *v11; // [sp+8h] [bp-28h]@2
  void *v12; // [sp+Ch] [bp-24h]@2

  v2 = result;
  v3 = a2;
  if ( result )
  {
    pointer = a2;
    v12 = j_pthread_getspecific_1(boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_);
    v11 = &pointer;
    j_pthread_setspecific_1(
      boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_,
      &pointer);
    while ( 1 )
    {
      v4 = *(_DWORD *)(v3 + 28);
      if ( !v4 )
        break;
      v5 = *(_DWORD *)v4;
      *(_DWORD *)(v3 + 28) = *(_DWORD *)v4;
      if ( !v5 )
        *(_DWORD *)(v3 + 32) = 0;
      *(_DWORD *)v4 = 0;
      (*(void (__fastcall **)(int))(v4 + 4))(v2);
    }
    j_pthread_mutex_lock_1((pthread_mutex_t *)(v3 + 12));
    v6 = *(_DWORD *)(v3 + 20);
    if ( v6 )
      v7 = *(_DWORD **)(v3 + 32);
      if ( v7 )
        *v7 = v6;
      else
        *(_DWORD *)(v3 + 28) = v6;
      *(_DWORD *)(v3 + 32) = *(_DWORD *)(v3 + 24);
      *(_DWORD *)(v3 + 20) = 0;
      *(_DWORD *)(v3 + 24) = 0;
    v8 = *(_DWORD *)(v3 + 28);
    v9 = *(_DWORD *)(v3 + 28);
    if ( v8 )
      LOBYTE(v9) = 1;
    *(_BYTE *)(v3 + 16) = v9;
    j_pthread_mutex_unlock_1((pthread_mutex_t *)(v3 + 12));
      j_boost::asio::detail::task_io_service::post_immediate_completion(v2, (_DWORD *)v3, 1);
    result = j_pthread_setspecific_1(
               boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_,
               v12);
  }
  return result;
}


void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::~clone_impl(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  sub_21D30E8(v1);
  j_j_j__ZdlPv_8((void *)v1);
}


void __fastcall boost::asio::ssl::detail::verify_callback<web::http::client::details::asio_context::write_request(void)::{lambda(bool,boost::asio::ssl::verify_context &)#1}>::~verify_callback(void *ptr)
{
  boost::asio::ssl::detail::verify_callback<web::http::client::details::asio_context::write_request(void)::{lambda(bool,boost::asio::ssl::verify_context &)#1}>::~verify_callback(ptr);
}


std::bad_cast *__fastcall boost::exception_detail::error_info_injector<std::bad_cast>::~error_info_injector(std::bad_cast *this)
{
  std::bad_cast *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *((_DWORD *)this + 1) = &off_26D61E8;
  v2 = *((_DWORD *)this + 2);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *((_DWORD *)v1 + 2) = 0;
  return j_j_j__ZNSt8bad_castD2Ev_0_1(v1);
}


int __fastcall boost::asio::detail::epoll_reactor::cancel_timer<boost::asio::time_traits<boost::posix_time::ptime>>(int a1, unsigned int a2, int a3, int a4)
{
  int v4; // r10@1
  pthread_mutex_t *v5; // r5@1
  int v6; // r4@1
  int v7; // r7@1
  unsigned int v8; // r6@1
  int v9; // r11@3
  int *v10; // r9@5
  int v11; // r5@5
  int v12; // r8@6
  void *v13; // r0@7
  int *v14; // r0@7
  int v15; // r1@8
  int v16; // r6@20
  int v17; // r7@21
  void (__fastcall *v18)(_DWORD, int, int *, _DWORD); // r4@23
  unsigned __int64 v20; // [sp+4h] [bp-3Ch]@5
  int v21; // [sp+Ch] [bp-34h]@1
  int v22; // [sp+10h] [bp-30h]@1
  int v23; // [sp+14h] [bp-2Ch]@23
  void *v24; // [sp+18h] [bp-28h]@23

  v4 = a1;
  v5 = (pthread_mutex_t *)(a1 + 24);
  v6 = a4;
  v7 = a3;
  v8 = a2;
  j_pthread_mutex_lock_1((pthread_mutex_t *)(a1 + 24));
  v21 = 0;
  v22 = 0;
  if ( !*(_DWORD *)(v7 + 16) && *(_DWORD *)(v8 + 16) != v7 )
  {
    v9 = 0;
    goto LABEL_20;
  }
  v9 = 0;
  if ( v6 )
    v20 = __PAIR__((unsigned int)v5, v8);
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      v12 = *(_DWORD *)v7;
      if ( !*(_DWORD *)v7 )
        break;
      v13 = sub_21B09F0();
      *(_DWORD *)(v12 + 12) = 125;
      *(_DWORD *)(v12 + 16) = v13;
      v14 = *(int **)v7;
      if ( *(_DWORD *)v7 )
      {
        v15 = *v14;
        *(_DWORD *)v7 = *v14;
        if ( !v15 )
          *(_DWORD *)(v7 + 4) = 0;
        *v14 = 0;
      }
      *(_DWORD *)v12 = 0;
      if ( v10 )
        *v10 = v12;
        v22 = v12;
      else
        v21 = v12;
      ++v11;
      v10 = (int *)v12;
      if ( v6 == v11 )
        v5 = (pthread_mutex_t *)HIDWORD(v20);
        v8 = v20;
        v9 = v6;
        goto LABEL_16;
    }
    v9 = v11;
    v5 = (pthread_mutex_t *)HIDWORD(v20);
    v8 = v20;
  else
LABEL_16:
    if ( *(_DWORD *)v7 )
      goto LABEL_20;
  j_boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::remove_timer(v8 + 8, v7);
LABEL_20:
  j_pthread_mutex_unlock_1(v5);
  j_boost::asio::detail::task_io_service::post_deferred_completions(*(_DWORD *)(v4 + 20), &v21);
  v16 = v21;
  if ( v21 )
    do
      v17 = *(_DWORD *)v16;
      if ( !*(_DWORD *)v16 )
        v22 = 0;
      *(_DWORD *)v16 = 0;
      v18 = *(void (__fastcall **)(_DWORD, int, int *, _DWORD))(v16 + 4);
      v23 = 0;
      v24 = sub_21B09F0();
      v18(0, v16, &v23, 0);
      v16 = v17;
    while ( v17 );
    v21 = 0;
  return v9;
}


int __fastcall boost::asio::basic_streambuf<std::allocator<char>>::overflow(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  __int64 v4; // r0@2
  int v5; // r1@3
  int v6; // r0@3
  unsigned int v7; // r1@4
  int v8; // r0@5
  int result; // r0@6

  v2 = a2;
  v3 = a1;
  if ( a2 == -1 )
  {
    result = 0;
  }
  else
    v4 = *(_QWORD *)(a1 + 20);
    if ( (_DWORD)v4 == HIDWORD(v4) )
    {
      HIDWORD(v4) = *(_DWORD *)(v3 + 32);
      LODWORD(v4) = v4 - *(_DWORD *)(v3 + 8);
      if ( HIDWORD(v4) <= (unsigned int)v4 || (v7 = v5 - v6, v7 > 0x7F) )
      {
        v8 = v3;
        v7 = 128;
      }
      else
      j_boost::asio::basic_streambuf<std::allocator<char>>::reserve(v8, v7);
    }
    *(_BYTE *)(*(_DWORD *)(v3 + 20))++ = v2;
    result = v2;
  return result;
}


int __fastcall boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::get_all_timers(int result, int a2)
{
  int i; // r2@1
  int v3; // r3@2
  _DWORD *v4; // lr@3

  for ( i = *(_DWORD *)(result + 16); i; i = *(_DWORD *)(result + 16) )
  {
    *(_DWORD *)(result + 16) = *(_DWORD *)(i + 12);
    v3 = *(_DWORD *)i;
    if ( *(_DWORD *)i )
    {
      v4 = *(_DWORD **)(a2 + 4);
      if ( v4 )
        *v4 = v3;
      else
        *(_DWORD *)a2 = v3;
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(i + 4);
      *(_DWORD *)i = 0;
      *(_DWORD *)(i + 4) = 0;
    }
    *(_DWORD *)(i + 12) = 0;
    *(_DWORD *)(i + 16) = 0;
  }
  *(_DWORD *)(result + 24) = *(_DWORD *)(result + 20);
  return result;
}


void **__fastcall boost::asio::error::detail::addrinfo_category::message(boost::asio::error::detail::addrinfo_category *this, int a2, int a3)
{
  void **result; // r0@3

  if ( a3 == 10 )
  {
    result = sub_21E94B4((void **)this, "Socket type not supported");
  }
  else if ( a3 == 9 )
    result = sub_21E94B4((void **)this, "Service not found");
  else
    result = sub_21E94B4((void **)this, "asio.addrinfo error");
  return result;
}


void __fastcall boost::gregorian::bad_day_of_month::~bad_day_of_month(boost::gregorian::bad_day_of_month *this)
{
  _DWORD *v1; // r0@1

  v1 = sub_21D315C((int)this);
  j_j_j__ZdlPv_8(v1);
}


boost::asio::detail::strand_service *__fastcall boost::asio::detail::strand_service::~strand_service(boost::asio::detail::strand_service *this)
{
  boost::asio::detail::strand_service *v1; // r4@1
  signed int v2; // r5@1
  boost::asio::detail::strand_service::strand_impl *v3; // r0@2
  boost::asio::detail::strand_service::strand_impl *v4; // r0@3

  v1 = this;
  v2 = 796;
  *(_DWORD *)this = &off_276D268;
  do
  {
    v3 = *(boost::asio::detail::strand_service::strand_impl **)((char *)v1 + v2);
    if ( v3 )
    {
      v4 = j_boost::asio::detail::strand_service::strand_impl::~strand_impl(v3);
      j_operator delete((void *)v4);
    }
    v2 -= 4;
  }
  while ( v2 != 24 );
  j_pthread_mutex_destroy_0((pthread_mutex_t *)v1 + 1);
  return v1;
}


void __fastcall __noreturn boost::throw_exception<boost::gregorian::bad_day_of_month>(int a1)
{
  boost::throw_exception<boost::gregorian::bad_day_of_month>(a1);
}


void __fastcall __noreturn boost::throw_exception<boost::gregorian::bad_year>(int a1)
{
  boost::throw_exception<boost::gregorian::bad_year>(a1);
}


void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::~clone_impl(int a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::~clone_impl(a1);
}


void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl(int a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl(a1);
}


void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::~clone_impl(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r1@4
  void *v4; // r0@4
  unsigned int *v5; // r12@6
  signed int v6; // r1@8

  v1 = a1;
  *(_DWORD *)(a1 + 20) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 24) = 0;
  *(_DWORD *)v1 = &off_26D60C4;
  v3 = *(_DWORD *)(v1 + 16);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v3 - 4);
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
      j_j_j_j_j__ZdlPv_9(v4);
  }
  sub_DA7AFC(v1);
  operator delete((void *)v1);
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r3@3
  int v6; // r6@3
  int v7; // r0@3

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 28) = &off_26D61AC;
  *(_DWORD *)a1 = &off_2773868;
  sub_21E8AF4((int *)(a1 + 4), (int *)(a2 + 4));
  *(_DWORD *)v2 = &off_276C4C0;
  *(_DWORD *)(v2 + 8) = &off_26D61E8;
  v4 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v2 + 12) = v4;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v5 = *(_DWORD *)(v3 + 20);
  v6 = *(_DWORD *)(v3 + 24);
  v7 = v2 + 16;
  *(_DWORD *)v7 = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v7 + 4) = v5;
  *(_DWORD *)(v7 + 8) = v6;
  *(_DWORD *)v2 = &off_276C44C;
  *(_DWORD *)(v2 + 8) = &off_276C468;
  *(_DWORD *)(v2 + 28) = &off_276C484;
  j_boost::exception_detail::copy_boost_exception(v2 + 8, v3 + 8);
  return v2;
}


std::bad_cast *__fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::bad_cast>>::~clone_impl(std::bad_cast *this)
{
  std::bad_cast *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *((_DWORD *)this + 1) = &off_26D61E8;
  v2 = *((_DWORD *)this + 2);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *((_DWORD *)v1 + 2) = 0;
  return j_j_j__ZNSt8bad_castD2Ev_0_1(v1);
}


int __fastcall boost::asio::ip::resolver_service<boost::asio::ip::tcp>::~resolver_service(int a1)
{
  int v1; // r4@1

  v1 = a1;
  *(_DWORD *)a1 = &off_276CBB0;
  j_boost::asio::detail::resolver_service_base::~resolver_service_base((boost::asio::detail::resolver_service_base *)(a1 + 20));
  return v1;
}


void __fastcall boost::asio::ip::resolver_service<boost::asio::ip::tcp>::~resolver_service(int a1)
{
  boost::asio::ip::resolver_service<boost::asio::ip::tcp>::~resolver_service(a1);
}


void __fastcall boost::gregorian::bad_month::~bad_month(boost::gregorian::bad_month *this)
{
  _DWORD *v1; // r0@1

  v1 = sub_21D315C((int)this);
  j_j_j__ZdlPv_8(v1);
}


signed int __fastcall boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::empty(int a1)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *(_DWORD *)(a1 + 8);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


int __fastcall boost::asio::detail::socket_ops::inet_pton(int a1, const char *a2, int a3, int *a4, int a5)
{
  int v5; // r4@1
  int v6; // r7@1
  const char *v7; // r5@1
  char *v8; // r0@2
  char *v9; // r9@2
  int v10; // r6@3
  void *v11; // r0@4
  int v12; // r5@4
  signed int v13; // r10@5
  int v14; // r6@7
  void *v15; // r0@7
  int v16; // r1@11
  signed int v17; // r0@11
  signed int v18; // r1@12
  void *v19; // r0@16
  bool v20; // zf@17
  int v21; // r0@23
  int *v23; // [sp+4h] [bp-6Ch]@1
  char v24[64]; // [sp+8h] [bp-68h]@6
  RakNet *v25; // [sp+48h] [bp-28h]@1

  v5 = a1;
  v6 = a3;
  v23 = a4;
  v7 = a2;
  v25 = _stack_chk_guard;
  *(_DWORD *)j___errno_0((int)_stack_chk_guard) = 0;
  if ( a1 == 10 && (v8 = j_strchr_0(a2, 37), (v9 = v8) != 0) )
  {
    v10 = v8 - v7;
    if ( v8 - v7 >= 64 )
    {
      v11 = sub_21B09F0();
      v12 = 0;
      *(_DWORD *)a5 = 22;
      *(_DWORD *)(a5 + 4) = v11;
      goto LABEL_25;
    }
    j___aeabi_memcpy_1((int)v24, (int)v7, v8 - v7);
    v24[v10] = 0;
    v13 = 1;
    v7 = v24;
  }
  else
    v13 = 0;
    v9 = 0;
  v12 = j_inet_pton(v5, v7, (void *)v6);
  v14 = *(_DWORD *)j___errno_0(v12);
  v15 = sub_21B09F0();
  *(_DWORD *)a5 = v14;
  *(_DWORD *)(a5 + 4) = v15;
  if ( v12 <= 0 )
    if ( !v14 )
      v19 = sub_21B09F0();
      *(_DWORD *)(a5 + 4) = v19;
  else if ( v5 == 10 )
    if ( v23 )
      *v23 = 0;
      if ( v13 == 1 )
      {
        v16 = *(_BYTE *)v6;
        v17 = 0;
        if ( v16 == 255 )
        {
          v18 = 0;
          if ( (*(_BYTE *)(v6 + 1) & 0xF) == 2 )
            v18 = 1;
        }
        else
          v20 = v16 == 254;
          if ( v20 )
          {
            v18 = 0;
            v17 = 0;
            if ( (*(_BYTE *)(v6 + 1) & 0xC0) == 128 )
              v17 = 1;
          }
        if ( !v17 && v18 != 1 || (v21 = j_if_nametoindex_0(), (*v23 = v21) == 0) )
          *v23 = j_atoi_0(v9 + 1);
      }
LABEL_25:
  if ( _stack_chk_guard != v25 )
    j___stack_chk_fail_1(_stack_chk_guard - v25);
  return v12;
}


int __fastcall boost::asio::detail::task_io_service::stop(boost::asio::detail::task_io_service *this)
{
  boost::asio::detail::task_io_service *v1; // r5@1
  pthread_mutex_t *v2; // r4@1
  int v3; // r0@2
  int v5; // [sp+0h] [bp-20h]@3
  int v6; // [sp+4h] [bp-1Ch]@3
  int v7; // [sp+8h] [bp-18h]@3
  int v8; // [sp+Ch] [bp-14h]@3

  v1 = this;
  v2 = (pthread_mutex_t *)((char *)this + 24);
  j_pthread_mutex_lock_1((pthread_mutex_t *)this + 1);
  *((_BYTE *)v1 + 68) = 1;
  *((_DWORD *)v1 + 8) |= 1u;
  j_pthread_cond_broadcast_0((pthread_cond_t *)((char *)v1 + 28));
  if ( !*((_BYTE *)v1 + 52) )
  {
    v3 = *((_DWORD *)v1 + 9);
    if ( v3 )
    {
      *((_BYTE *)v1 + 52) = 1;
      v8 = 0;
      v6 = qword_260F9EC;
      v5 = -2147483639;
      v7 = v3 + 28;
      j_epoll_ctl(*(_DWORD *)(v3 + 36), 3, *(_DWORD *)(v3 + 28), (struct epoll_event *)&v5);
    }
  }
  return j_pthread_mutex_unlock_1(v2);
}


void __fastcall boost::asio::detail::strand_service::~strand_service(boost::asio::detail::strand_service *this)
{
  boost::asio::detail::strand_service::~strand_service(this);
}


boost::asio::ssl::context *__fastcall boost::asio::ssl::context::~context(boost::asio::ssl::context *this)
{
  boost::asio::ssl::context *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@2
  int v4; // r0@5
  int v5; // r5@9
  unsigned int *v6; // r0@10
  unsigned int v7; // r1@11
  unsigned int *v8; // r6@13
  unsigned int v9; // r0@14

  v1 = this;
  v2 = *(_DWORD *)this;
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 112);
    if ( v3 )
    {
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 4))(*(_DWORD *)(v2 + 112));
      *(_DWORD *)(*(_DWORD *)v1 + 112) = 0;
      v2 = *(_DWORD *)v1;
    }
    if ( j_j_SSL_CTX_get_ex_data(v2, 0) )
      v4 = j_j_SSL_CTX_get_ex_data(*(_DWORD *)v1, 0);
      if ( v4 )
        (*(void (**)(void))(*(_DWORD *)v4 + 4))();
      j_j_SSL_CTX_set_ex_data(*(_DWORD *)v1, 0, 0);
    j_j_SSL_CTX_free(*(_DWORD *)v1);
  }
  v5 = *((_DWORD *)v1 + 2);
  if ( v5 )
    v6 = (unsigned int *)(v5 + 4);
    __dmb();
    do
      v7 = __ldrex(v6);
    while ( __strex(v7 - 1, v6) );
    if ( v7 == 1 )
      v8 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      if ( v9 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return v1;
}


void __fastcall boost::gregorian::bad_year::~bad_year(boost::gregorian::bad_year *this)
{
  _DWORD *v1; // r0@1

  v1 = sub_21D315C((int)this);
  j_j_j__ZdlPv_8(v1);
}


void __fastcall __noreturn boost::throw_exception<std::length_error>(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1
  int v3; // r3@1
  void **v4; // [sp+4h] [bp-2Ch]@1
  int v5; // [sp+8h] [bp-28h]@1
  void **v6; // [sp+Ch] [bp-24h]@1
  int v7; // [sp+10h] [bp-20h]@1
  int v8; // [sp+14h] [bp-1Ch]@1
  int v9; // [sp+18h] [bp-18h]@1
  int v10; // [sp+1Ch] [bp-14h]@1

  v1 = a1;
  v2 = j_j___cxa_allocate_exception_0(32);
  sub_21E8AF4(&v5, (int *)(v1 + 4));
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = -1;
  v4 = &off_276C37C;
  v6 = &off_276C390;
  j_boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::clone_impl(
    (int)v2,
    (int)&v4);
  j_j___cxa_throw_0(
    (int)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>,
    (int)boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::~clone_impl,
    v3);
}


boost::asio::detail::epoll_reactor *__fastcall boost::asio::detail::service_registry::create<boost::asio::detail::epoll_reactor>(boost::asio::io_service *a1)
{
  boost::asio::io_service *v1; // r5@1
  boost::asio::detail::epoll_reactor *v2; // r4@1

  v1 = a1;
  v2 = (boost::asio::detail::epoll_reactor *)j_operator new(0x40u);
  j_boost::asio::detail::epoll_reactor::epoll_reactor(v2, v1);
  return v2;
}


int __fastcall boost::thread_detail::commit_once_region(_DWORD *a1)
{
  _DWORD *v1; // r4@1

  v1 = a1;
  j_pthread_mutex_lock_2((pthread_mutex_t *)&unk_28832A4);
  __dmb();
  *v1 = 2;
  j_pthread_mutex_unlock_2((pthread_mutex_t *)&unk_28832A4);
  return j_pthread_cond_broadcast_1((pthread_cond_t *)&unk_28832A8);
}


void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl(int a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl(a1);
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::~clone_impl(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r1@4
  void *v4; // r0@4
  unsigned int *v6; // r12@6
  signed int v7; // r1@8

  v1 = a1;
  *(_DWORD *)(a1 + 20) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 24) = 0;
  *(_DWORD *)v1 = &off_26D60C4;
  v3 = *(_DWORD *)(v1 + 16);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v3 - 4);
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
      j_j_j_j_j__ZdlPv_9(v4);
  }
  sub_DA7AFC(v1);
  return v1;
}


int __fastcall boost::asio::detail::reactive_socket_service_base::start_connect_op(int *a1, int a2, int a3, int a4, const struct sockaddr *a5, socklen_t a6)
{
  int v6; // r7@1
  int *v7; // r9@1
  int v8; // r0@1
  int v9; // r8@1
  int v10; // r5@1
  int v11; // r4@2
  int v12; // r4@3
  int v13; // r6@3
  void *v14; // r0@3
  void *v15; // r0@4
  int v16; // r4@5
  int v17; // r4@6
  int v18; // r6@6
  void *v19; // r0@6
  void **v20; // r6@6
  void *v21; // r0@6
  void *v22; // r1@7
  bool v23; // zf@7
  void *v24; // r0@11
  void *v25; // r0@12
  void *v26; // r0@17
  int v28; // [sp+10h] [bp-28h]@3

  v6 = a2;
  v7 = a1;
  v8 = *(_BYTE *)(a2 + 4);
  v9 = a4;
  v10 = a3;
  if ( !(v8 & 3) )
  {
    v11 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 == -1 )
    {
      v21 = sub_21B09F0();
      *(_DWORD *)(v10 + 12) = 9;
      goto LABEL_20;
    }
    *(_DWORD *)j___errno_0(v8) = 0;
    v28 = 1;
    v12 = j_ioctl_0(v11, 0x5421u, &v28);
    v13 = *(_DWORD *)j___errno_0(v12);
    v14 = sub_21B09F0();
    *(_DWORD *)(v10 + 12) = v13;
    *(_DWORD *)(v10 + 16) = v14;
    if ( v12 < 0 )
      return j_boost::asio::detail::task_io_service::post_immediate_completion(*(_DWORD *)(*v7 + 20), (_DWORD *)v10, v9);
    v15 = sub_21B09F0();
    *(_DWORD *)(v10 + 12) = 0;
    *(_DWORD *)(v10 + 16) = v15;
    v8 = *(_BYTE *)(v6 + 4) | 2;
    *(_BYTE *)(v6 + 4) = v8;
  }
  v16 = *(_DWORD *)v6;
  if ( *(_DWORD *)v6 == -1 )
    v25 = sub_21B09F0();
    *(_DWORD *)(v10 + 12) = 9;
    *(_DWORD *)(v10 + 16) = v25;
    v20 = (void **)(v10 + 16);
    goto LABEL_13;
  *(_DWORD *)j___errno_0(v8) = 0;
  v17 = j_connect_0(v16, a5, a6);
  v18 = *(_DWORD *)j___errno_0(v17);
  v19 = sub_21B09F0();
  *(_DWORD *)(v10 + 12) = v18;
  *(_DWORD *)(v10 + 16) = v19;
  v20 = (void **)(v10 + 16);
  v21 = sub_21B09F0();
  if ( !v17 )
LABEL_20:
    *(_DWORD *)(v10 + 16) = v21;
    return j_boost::asio::detail::task_io_service::post_immediate_completion(*(_DWORD *)(*v7 + 20), (_DWORD *)v10, v9);
  v22 = *(void **)(v10 + 16);
  v23 = v22 == v21;
  if ( v22 == v21 )
    v23 = *(_DWORD *)(v10 + 12) == 11;
  if ( v23 )
    v24 = sub_21B09F0();
    *(_DWORD *)(v10 + 12) = 105;
    *(_DWORD *)(v10 + 16) = v24;
LABEL_13:
  if ( *v20 == sub_21B09F0() && *(_DWORD *)(v10 + 12) == 115 || *v20 == sub_21B09F0() && *(_DWORD *)(v10 + 12) == 11 )
    v26 = sub_21B09F0();
    *v20 = v26;
    return j_boost::asio::detail::epoll_reactor::start_op(*v7, 1, *(_DWORD *)v6, (int *)(v6 + 8), v10, v9, 0);
  return j_boost::asio::detail::task_io_service::post_immediate_completion(*(_DWORD *)(*v7 + 20), (_DWORD *)v10, v9);
}


boost::this_thread::restore_interruption *__fastcall boost::this_thread::restore_interruption::~restore_interruption(boost::this_thread::restore_interruption *this)
{
  boost::this_thread::restore_interruption *v1; // r4@1
  boost::detail *v2; // r0@1

  v1 = this;
  v2 = (boost::detail *)j_boost::detail::get_current_thread_data(this);
  if ( v2 )
    *((_BYTE *)j_boost::detail::get_current_thread_data(v2) + 112) = 0;
  return v1;
}


void **__fastcall boost::asio::error::detail::misc_category::message(boost::asio::error::detail::misc_category *this, int a2, int a3)
{
  void **result; // r0@2

  switch ( a3 )
  {
    case 1:
      result = sub_21E94B4((void **)this, "Already open");
      break;
    case 2:
      result = sub_21E94B4((void **)this, "End of file");
    case 3:
      result = sub_21E94B4((void **)this, "Element not found");
    case 4:
      result = sub_21E94B4((void **)this, "The descriptor does not fit into the select call's fd_set");
    default:
      result = sub_21E94B4((void **)this, "asio.misc error");
  }
  return result;
}


void *__fastcall boost::detail::get_current_thread_data(boost::detail *this)
{
  if ( j_boost::thread_detail::enter_once_region((unsigned int *)algn_288326C) == 1 )
  {
    j_pthread_key_create_1((pthread_key_t *)&dword_2883270, (void (*)(void *))sub_21B0668);
    j_boost::thread_detail::commit_once_region((_DWORD *)algn_288326C);
  }
  return j_j_pthread_getspecific_3(dword_2883270);
}


int __fastcall boost::asio::detail::strand_service::construct(boost::asio::detail::strand_service *this, boost::asio::detail::strand_service::strand_impl **a2)
{
  boost::asio::detail::strand_service *v2; // r6@1
  pthread_mutex_t *v3; // r8@1
  unsigned int v4; // r5@1
  int v5; // r1@1
  unsigned int v6; // r4@1
  boost::asio::detail::strand_service::strand_impl **v7; // r4@1
  void *v8; // r6@1
  void *v9; // t1@1
  boost::asio::detail::strand_service::strand_impl *v10; // r0@4
  int v12; // [sp+0h] [bp-20h]@2
  void *v13; // [sp+4h] [bp-1Ch]@2

  v2 = this;
  v3 = (pthread_mutex_t *)((char *)this + 24);
  v4 = (unsigned int)a2;
  j_pthread_mutex_lock_1((pthread_mutex_t *)this + 1);
  v5 = *((_DWORD *)v2 + 200);
  *((_DWORD *)v2 + 200) = v5 + 1;
  v6 = (unsigned int)v2
     + 4 * (((v4 + (v4 >> 3)) ^ (((v4 + (v4 >> 3)) << 6) + ((v4 + (v4 >> 3)) >> 2) + v5 - 1640531527)) % 0xC1);
  v9 = *(void **)(v6 + 28);
  v7 = (boost::asio::detail::strand_service::strand_impl **)(v6 + 28);
  v8 = v9;
  if ( !v9 )
  {
    v8 = j_operator new(0x24u);
    *(_DWORD *)v8 = 0;
    *((_DWORD *)v8 + 1) = boost::asio::detail::strand_service::do_complete;
    *((_DWORD *)v8 + 2) = 0;
    v12 = j_pthread_mutex_init_0((pthread_mutex_t *)((char *)v8 + 12), 0);
    v13 = sub_21B09F0();
    if ( v12 )
      j_boost::asio::detail::do_throw_error((unsigned __int64 *)&v12, "mutex");
    *((_BYTE *)v8 + 16) = 0;
    *((_DWORD *)v8 + 5) = 0;
    *((_DWORD *)v8 + 6) = 0;
    *((_DWORD *)v8 + 7) = 0;
    *((_DWORD *)v8 + 8) = 0;
    if ( *v7 )
    {
      v10 = j_boost::asio::detail::strand_service::strand_impl::~strand_impl(*v7);
      j_operator delete((void *)v10);
    }
    *v7 = (boost::asio::detail::strand_service::strand_impl *)v8;
  }
  *(_DWORD *)v4 = v8;
  return j_pthread_mutex_unlock_1(v3);
}


void __fastcall boost::asio::socket_acceptor_service<boost::asio::ip::tcp>::~socket_acceptor_service(void *ptr)
{
  boost::asio::socket_acceptor_service<boost::asio::ip::tcp>::~socket_acceptor_service(ptr);
}


int __fastcall boost::asio::asio_handler_invoke<boost::asio::detail::binder1<web::http::client::details::asio_context::timeout_timer::start(void)::{lambda(boost::system::error_code const&)#1},boost::system::error_code>>(int a1)
{
  return j_j_j__ZN3web4http6client7details12asio_context13timeout_timer14handle_timeoutERKN5boost6system10error_codeERKSt8weak_ptrIS3_E(
           (int *)(a1 + 8),
           a1);
}


void __fastcall __noreturn boost::throw_exception<std::runtime_error>(int a1)
{
  boost::throw_exception<std::runtime_error>(a1);
}


int *__fastcall boost::asio::ssl::detail::openssl_init_base::do_init::openssl_id_func(boost::asio::ssl::detail::openssl_init_base::do_init *this)
{
  int *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r4@16
  unsigned int *v8; // r1@17
  unsigned int v9; // r0@19
  unsigned int *v10; // r5@23
  unsigned int v11; // r0@25
  int v13; // [sp+4h] [bp-24h]@16
  int v14; // [sp+8h] [bp-20h]@16
  int v15; // [sp+Ch] [bp-1Ch]@1
  int v16; // [sp+10h] [bp-18h]@1
  int *pointer; // [sp+14h] [bp-14h]@15

  boost::asio::ssl::detail::openssl_init_base::instance((boost::asio::ssl::detail::openssl_init_base *)&v15);
  v1 = (int *)pthread_getspecific(*(_DWORD *)(v15 + 12));
  v2 = v16;
  if ( v16 )
  {
    v3 = (unsigned int *)(v16 + 4);
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
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  pointer = v1;
  if ( !v1 )
    boost::asio::ssl::detail::openssl_init_base::instance((boost::asio::ssl::detail::openssl_init_base *)&v13);
    pointer = (int *)&pointer;
    pthread_setspecific(*(_DWORD *)(v13 + 12), &pointer);
    v7 = v14;
    if ( v14 )
      v8 = (unsigned int *)(v14 + 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 == 1 )
        v10 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  return pointer;
}


int __fastcall boost::asio::detail::epoll_reactor::schedule_timer<boost::asio::time_traits<boost::posix_time::ptime>>(int a1, int a2, __int64 *a3, int a4, _DWORD *a5)
{
  int v5; // r5@1
  pthread_mutex_t *v6; // r8@1
  int v7; // r6@1
  __int64 *v8; // r7@1
  int v9; // r4@1
  int v10; // r0@3
  int v11; // r1@3
  unsigned int *v12; // r1@3
  unsigned int v13; // r2@4
  int v15; // [sp+0h] [bp-28h]@6
  int v16; // [sp+4h] [bp-24h]@6
  int v17; // [sp+8h] [bp-20h]@6
  int v18; // [sp+Ch] [bp-1Ch]@6

  v5 = a1;
  v6 = (pthread_mutex_t *)(a1 + 24);
  v7 = a4;
  v8 = a3;
  v9 = a2;
  j_pthread_mutex_lock_1((pthread_mutex_t *)(a1 + 24));
  if ( *(_BYTE *)(v5 + 48) )
  {
    j_boost::asio::detail::task_io_service::post_immediate_completion(*(_DWORD *)(v5 + 20), a5, 0);
  }
  else
    v10 = j_boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::enqueue_timer(
            v9 + 8,
            v8,
            v7,
            a5);
    v11 = *(_DWORD *)(v5 + 20);
    __dmb();
    v12 = (unsigned int *)(v11 + 56);
    do
      v13 = __ldrex(v12);
    while ( __strex(v13 + 1, v12) );
    if ( v10 == 1 )
    {
      v18 = 0;
      v16 = qword_260F9EC;
      v15 = -2147483639;
      v17 = v5 + 28;
      j_epoll_ctl(*(_DWORD *)(v5 + 36), 3, *(_DWORD *)(v5 + 28), (struct epoll_event *)&v15);
    }
  return j_pthread_mutex_unlock_1(v6);
}


void __fastcall boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>::create(int a1, int a2, int *a3, int *a4)
{
  boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>::create(a1, a2, a3, a4);
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(int a1, int a2)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(
           a1,
           a2);
}


int __fastcall boost::asio::asio_handler_invoke<boost::asio::detail::binder1<web::http::client::details::asio_connection_pool::start_epoch_interval(std::shared_ptr<web::http::client::details::asio_connection_pool> const&)::{lambda(boost::system::error_code const&)#1},boost::system::error_code>>(int a1)
{
  return j_j_j__ZZN3web4http6client7details20asio_connection_pool20start_epoch_intervalERKSt10shared_ptrIS3_EENKUlRKN5boost6system10error_codeEE_clESC_(
           a1,
           (_DWORD *)(a1 + 8));
}


int __fastcall boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::~timer_queue(int a1)
{
  int v1; // r4@1
  void *v2; // r0@1

  v1 = a1;
  *(_DWORD *)a1 = &off_276C76C;
  v2 = *(void **)(a1 + 12);
  if ( v2 )
    j_operator delete(v2);
  return v1;
}


void __fastcall __noreturn boost::exception_detail::throw_exception_<std::runtime_error>(int a1, int a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r4@1
  int v6; // r5@1
  int v7; // r0@1
  int v8; // r4@1
  void **v9; // [sp+4h] [bp-2Ch]@1
  int v10; // [sp+8h] [bp-28h]@1
  void **v11; // [sp+Ch] [bp-24h]@1
  int v12; // [sp+10h] [bp-20h]@1
  int v13; // [sp+14h] [bp-1Ch]@1
  int v14; // [sp+18h] [bp-18h]@1
  int v15; // [sp+1Ch] [bp-14h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  sub_21E8AF4(&v10, (int *)(a1 + 4));
  v12 = 0;
  v9 = &off_276514C;
  v11 = &off_2765160;
  v13 = v4;
  v14 = v6;
  v15 = v5;
  j_boost::throw_exception<boost::exception_detail::error_info_injector<std::runtime_error>>((int)&v9);
  v8 = v7;
  j_std::exception::~exception();
  j__Unwind_Resume_0(v8);
}


int __fastcall boost::asio::detail::service_registry::do_use_service(int a1, unsigned __int64 *a2, int (__fastcall *a3)(_DWORD))
{
  int v3; // r10@1
  pthread_mutex_t *v4; // r9@1
  int (__fastcall *v5)(_DWORD); // r8@1
  unsigned __int64 *v6; // r7@1
  int v7; // r5@1
  unsigned __int64 v8; // kr00_8@2
  int v9; // r0@4
  int v10; // r0@6
  const char *v11; // r1@7
  const char *v12; // r0@7
  int v13; // r0@12
  int v14; // r0@17
  const char *v15; // r1@18
  const char *v16; // r0@18
  int v17; // r8@24
  unsigned __int64 v18; // kr08_8@25
  int v19; // r7@26
  int v20; // r0@27
  int v21; // r0@29
  const char *v22; // r1@30
  const char *v23; // r0@30
  int v24; // r0@35
  int v25; // r0@41
  const char *v26; // r1@42
  const char *v27; // r0@42
  int v28; // r0@50

  v3 = a1;
  v4 = (pthread_mutex_t *)(a1 + 4);
  v5 = a3;
  v6 = a2;
  j_pthread_mutex_lock_1((pthread_mutex_t *)(a1 + 4));
  v7 = *(_DWORD *)(v3 + 12);
  if ( !v7 )
  {
LABEL_24:
    j_pthread_mutex_unlock_1(v4);
    v7 = v5(*(_DWORD *)(v3 + 8));
    *(_QWORD *)(v7 + 4) = *v6;
    j_pthread_mutex_lock_1(v4);
    v17 = *(_DWORD *)(v3 + 12);
    if ( v17 )
    {
      v18 = *v6;
      if ( *v6 >> 32 )
      {
        v19 = *(_DWORD *)(v3 + 12);
        if ( (_DWORD)v18 )
        {
          while ( 1 )
          {
            v20 = *(_DWORD *)(v19 + 8);
            if ( v20 )
            {
              if ( v20 == HIDWORD(v18) )
                break;
            }
            v21 = *(_DWORD *)(v19 + 4);
            if ( v21 )
              v22 = *(const char **)(v18 + 4);
              v23 = *(const char **)(v21 + 4);
              if ( v23 == v22 || *v23 != 42 && !j_strcmp_1(v23, v22) )
            v19 = *(_DWORD *)(v19 + 16);
            if ( !v19 )
              goto LABEL_52;
          }
        }
        else
            v24 = *(_DWORD *)(v19 + 8);
            if ( v24 )
              if ( v24 == HIDWORD(v18) )
LABEL_47:
        if ( v7 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
        v7 = v19;
        goto LABEL_53;
      }
      if ( (_DWORD)v18 )
        while ( 1 )
          v25 = *(_DWORD *)(v19 + 4);
          if ( v25 )
            v26 = *(const char **)(v18 + 4);
            v27 = *(const char **)(v25 + 4);
            if ( v27 == v26 || *v27 != 42 && !j_strcmp_1(v27, v26) )
              goto LABEL_47;
          v19 = *(_DWORD *)(v19 + 16);
          if ( !v19 )
            goto LABEL_52;
      v28 = *(_DWORD *)(v3 + 12);
      do
        v28 = *(_DWORD *)(v28 + 16);
      while ( v28 );
    }
LABEL_52:
    *(_DWORD *)(v7 + 16) = v17;
    *(_DWORD *)(v3 + 12) = v7;
    goto LABEL_53;
  }
  v8 = *v6;
  if ( *v6 >> 32 )
    if ( (_DWORD)v8 )
      while ( 1 )
        v9 = *(_DWORD *)(v7 + 8);
        if ( v9 )
          if ( v9 == HIDWORD(v8) )
            break;
        v10 = *(_DWORD *)(v7 + 4);
        if ( v10 )
          v11 = *(const char **)(v8 + 4);
          v12 = *(const char **)(v10 + 4);
          if ( v12 == v11 || *v12 != 42 && !j_strcmp_1(v12, v11) )
        v7 = *(_DWORD *)(v7 + 16);
        if ( !v7 )
          goto LABEL_24;
    else
        v13 = *(_DWORD *)(v7 + 8);
        if ( v13 )
          if ( v13 == HIDWORD(v8) )
  if ( !(_DWORD)v8 )
    do
      v7 = *(_DWORD *)(v7 + 16);
    while ( v7 );
    goto LABEL_24;
  while ( 1 )
    v14 = *(_DWORD *)(v7 + 4);
    if ( v14 )
      v15 = *(const char **)(v8 + 4);
      v16 = *(const char **)(v14 + 4);
      if ( v16 == v15 || *v16 != 42 && !j_strcmp_1(v16, v15) )
        break;
    v7 = *(_DWORD *)(v7 + 16);
    if ( !v7 )
      goto LABEL_24;
LABEL_53:
  j_pthread_mutex_unlock_1(v4);
  return v7;
}


int __fastcall boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::get_all_timers(int result, int a2)
{
  int i; // r2@1
  int v3; // r3@2
  _DWORD *v4; // lr@3

  for ( i = *(_DWORD *)(result + 8); i; i = *(_DWORD *)(result + 8) )
  {
    *(_DWORD *)(result + 8) = *(_DWORD *)(i + 12);
    v3 = *(_DWORD *)i;
    if ( *(_DWORD *)i )
    {
      v4 = *(_DWORD **)(a2 + 4);
      if ( v4 )
        *v4 = v3;
      else
        *(_DWORD *)a2 = v3;
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(i + 4);
      *(_DWORD *)i = 0;
      *(_DWORD *)(i + 4) = 0;
    }
    *(_DWORD *)(i + 12) = 0;
    *(_DWORD *)(i + 16) = 0;
  }
  *(_DWORD *)(result + 16) = *(_DWORD *)(result + 12);
  return result;
}


int __fastcall boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::deadline_timer_service(int a1, int *a2)
{
  int v2; // r4@1
  int v3; // r0@1
  int v4; // r0@1
  int v5; // r6@1
  void **v7; // [sp+4h] [bp-24h]@1
  int v8; // [sp+8h] [bp-20h]@1

  v2 = a1;
  *(_DWORD *)a1 = &off_276C718;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = &off_276C76C;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  v3 = *a2;
  v7 = &`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::detail::epoll_reactor>;
  v8 = 0;
  v4 = j_boost::asio::detail::service_registry::do_use_service(
         v3,
         (unsigned __int64 *)&v7,
         (int (__fastcall *)(_DWORD))boost::asio::detail::service_registry::create<boost::asio::detail::epoll_reactor>);
  *(_DWORD *)(v2 + 32) = v4;
  j_boost::asio::detail::task_io_service::init_task(*(boost::asio::detail::task_io_service **)(v4 + 20));
  v5 = *(_DWORD *)(v2 + 32);
  j_pthread_mutex_lock_1((pthread_mutex_t *)(v5 + 24));
  *(_DWORD *)(v2 + 4) = *(_DWORD *)(v5 + 44);
  *(_DWORD *)(v5 + 44) = v2;
  j_pthread_mutex_unlock_1((pthread_mutex_t *)(v5 + 24));
  return v2;
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::bad_cast>>::clone_impl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r3@3
  int v6; // r6@3
  int v7; // r0@3

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 24) = &off_26D61AC;
  *(_DWORD *)a1 = &off_27727A8;
  *(_DWORD *)(a1 + 4) = &off_26D61E8;
  v4 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(v2 + 8) = v4;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v5 = *(_DWORD *)(v3 + 16);
  v6 = *(_DWORD *)(v3 + 20);
  v7 = v2 + 12;
  *(_DWORD *)v7 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v7 + 4) = v5;
  *(_DWORD *)(v7 + 8) = v6;
  *(_DWORD *)v2 = &off_276C8CC;
  *(_DWORD *)(v2 + 4) = &off_276C8E8;
  *(_DWORD *)(v2 + 24) = &off_276C904;
  j_boost::exception_detail::copy_boost_exception(v2 + 4, v3 + 4);
  return v2;
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(int a1, int a2)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(
           a1,
           a2);
}


char *__fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1

  v1 = a1;
  v2 = (char *)j_operator new(0x20u);
  j_boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(
    (int)v2,
    v1);
  return &v2[*(_DWORD *)(*(_DWORD *)v2 - 12)];
}


void __fastcall __noreturn boost::asio::detail::do_throw_error(unsigned __int64 *a1, const char *a2)
{
  boost::asio::detail::do_throw_error(a1, a2);
}


int __fastcall boost::this_thread::hiden::sleep_until(boost::this_thread::hiden *this, const timespec *a2)
{
  boost::this_thread::hiden *v2; // r4@1
  void *v3; // r0@1
  const timespec *v4; // r1@1
  void *v5; // r6@1
  pthread_mutex_t *v6; // r6@2
  int result; // r0@4
  pthread_mutex_t *v8; // r4@5
  pthread_mutex_t *mutex; // [sp+0h] [bp-18h]@2
  unsigned __int8 v10; // [sp+4h] [bp-14h]@2

  v2 = this;
  v3 = j_boost::detail::get_current_thread_data(this);
  v5 = v3;
  if ( v3 )
  {
    mutex = (pthread_mutex_t *)((char *)v3 + 36);
    v10 = 0;
    sub_21AEAEC(&mutex);
    v6 = (pthread_mutex_t *)((char *)v5 + 40);
    while ( sub_21AA8F8(v6, &mutex, (const struct timespec *)v2) )
      ;
    result = v10;
    if ( v10 )
    {
      v8 = mutex;
      do
        result = j_pthread_mutex_unlock_2(v8);
      while ( result == 4 );
    }
  }
  else
    result = j_j_j__ZN5boost11this_thread21no_interruption_point5hiden11sleep_untilERK8timespec(v2, v4);
  return result;
}


int __fastcall boost::thread::get_thread_info(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@3

  *(_DWORD *)result = *(_DWORD *)a2;
  v2 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 4) = v2;
  if ( v2 )
  {
    result = v2 + 4;
    do
      v3 = __ldrex((unsigned int *)result);
    while ( __strex(v3 + 1, (unsigned int *)result) );
  }
  return result;
}


signed int __fastcall boost::thread::start_thread_noexcept(boost::thread *this)
{
  void **v1; // r4@1
  int v2; // r0@1
  void *v3; // r1@1
  unsigned int *v4; // r2@2
  unsigned int v5; // r3@3
  int v6; // r5@4
  unsigned int *v7; // r0@5
  unsigned int v8; // r1@6
  unsigned int *v9; // r0@8
  unsigned int v10; // r1@9
  _DWORD *v11; // r0@13
  int v12; // r4@13
  unsigned int *v13; // r0@14
  unsigned int v14; // r1@15
  unsigned int *v15; // r0@17
  unsigned int v16; // r1@18
  signed int result; // r0@21

  v1 = (void **)this;
  v2 = *(_DWORD *)this;
  v3 = v1[1];
  if ( v3 )
  {
    v4 = (unsigned int *)((char *)v3 + 4);
    do
      v5 = __ldrex(v4);
    while ( __strex(v5 + 1, v4) );
  }
  *(_DWORD *)(v2 + 12) = v2;
  v6 = *(_DWORD *)(v2 + 16);
  *(_DWORD *)(v2 + 16) = v3;
  if ( v6 )
    v7 = (unsigned int *)(v6 + 4);
    __dmb();
      v8 = __ldrex(v7);
    while ( __strex(v8 - 1, v7) );
    if ( v8 == 1 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      v9 = (unsigned int *)(v6 + 8);
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      if ( v10 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
  if ( j_pthread_create_1((pthread_t *)*v1 + 5, 0, (void *(*)(void *))sub_21AA02C, *v1) )
    v11 = *v1;
    v11[3] = 0;
    v12 = v11[4];
    v11[4] = 0;
    if ( v12 )
      v13 = (unsigned int *)(v12 + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      if ( v14 == 1 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
        v15 = (unsigned int *)(v12 + 8);
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        if ( v16 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
      }
    result = 0;
  else
    result = 1;
  return result;
}


int __fastcall boost::asio::ssl::detail::openssl_init<true>::~openssl_init(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
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
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  return v1;
}


int __fastcall boost::asio::ssl::detail::verify_callback<web::websockets::client::details::wspp_callback_client::connect(void)::{lambda(std::weak_ptr<void>)#1}::operator() const(std::weak_ptr<void>)::{lambda(bool,boost::asio::ssl::verify_context &)#1}>::call(int a1, int a2, int *a3)
{
  return j_j_j__ZZZN3web10websockets6client7details20wspp_callback_client7connectEvENKUlSt8weak_ptrIvEE_clES5_ENKUlbRN5boost4asio3ssl14verify_contextEE_clEbSB_(
           (int *)(a1 + 4),
           a2,
           a3);
}


int *__fastcall boost::asio::detail::epoll_reactor::descriptor_state::perform_io(boost::asio::detail::epoll_reactor::descriptor_state *this, unsigned int a2)
{
  unsigned int *v2; // r7@0
  boost::asio::detail::epoll_reactor::descriptor_state *v3; // r5@1
  pthread_mutex_t *v4; // r8@1
  unsigned int v5; // r6@1
  bool v6; // zf@1
  int *v7; // r0@5
  int v8; // r1@6
  bool v9; // zf@13
  int *v10; // r0@17
  int v11; // r1@18
  bool v12; // zf@25
  int *v13; // r0@29
  int v14; // r1@30
  int *v15; // r5@37
  int v17; // [sp+0h] [bp-28h]@1
  int *v18; // [sp+4h] [bp-24h]@1
  unsigned int *v19; // [sp+8h] [bp-20h]@1
  int *v20; // [sp+Ch] [bp-1Ch]@1

  v3 = this;
  v4 = (pthread_mutex_t *)((char *)this + 20);
  v5 = a2;
  j_pthread_mutex_lock_1((pthread_mutex_t *)((char *)this + 20));
  v6 = (v5 & 0x1A) == 0;
  v17 = *((_DWORD *)v3 + 6);
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( v5 & 0x1A )
  {
    v2 = (unsigned int *)*((_DWORD *)v3 + 13);
    v6 = v2 == 0;
  }
  if ( !v6 )
    do
    {
      if ( ((int (__fastcall *)(unsigned int *))v2[6])(v2) != 1 )
        break;
      v7 = (int *)*((_DWORD *)v3 + 13);
      if ( v7 )
      {
        v8 = *v7;
        *((_DWORD *)v3 + 13) = *v7;
        if ( !v8 )
          *((_DWORD *)v3 + 14) = 0;
        *v7 = 0;
      }
      *v2 = 0;
      if ( v19 )
        *v19 = (unsigned int)v2;
        v19 = v2;
      else
        v18 = (int *)v2;
      v2 = (unsigned int *)*((_DWORD *)v3 + 13);
    }
    while ( v2 );
  v9 = (v5 & 0x1C) == 0;
  if ( v5 & 0x1C )
    v2 = (unsigned int *)*((_DWORD *)v3 + 11);
    v9 = v2 == 0;
  if ( !v9 )
      v10 = (int *)*((_DWORD *)v3 + 11);
      if ( v10 )
        v11 = *v10;
        *((_DWORD *)v3 + 11) = *v10;
        if ( !v11 )
          *((_DWORD *)v3 + 12) = 0;
        *v10 = 0;
      v2 = (unsigned int *)*((_DWORD *)v3 + 11);
  v12 = (v5 & 0x19) == 0;
  if ( v5 & 0x19 )
    v5 = *((_DWORD *)v3 + 9);
    v12 = v5 == 0;
  if ( !v12 )
      if ( (*(int (__fastcall **)(unsigned int))(v5 + 24))(v5) != 1 )
      v13 = (int *)*((_DWORD *)v3 + 9);
      if ( v13 )
        v14 = *v13;
        *((_DWORD *)v3 + 9) = *v13;
        if ( !v14 )
          *((_DWORD *)v3 + 10) = 0;
        *v13 = 0;
      *(_DWORD *)v5 = 0;
        *v19 = v5;
        v19 = (unsigned int *)v5;
        v18 = (int *)v5;
      v5 = *((_DWORD *)v3 + 9);
    while ( v5 );
  v15 = v18;
  v20 = v18;
  if ( v18 )
    v18 = (int *)*v18;
    if ( !v18 )
      v19 = 0;
    *v15 = 0;
    v15 = v20;
  j_pthread_mutex_unlock_1(v4);
  j_boost::asio::detail::epoll_reactor::perform_io_cleanup_on_block_exit::~perform_io_cleanup_on_block_exit((boost::asio::detail::epoll_reactor::perform_io_cleanup_on_block_exit *)&v17);
  return v15;
}


boost::asio::detail::task_io_service *__fastcall boost::asio::detail::task_io_service::~task_io_service(boost::asio::detail::task_io_service *this)
{
  boost::asio::detail::task_io_service *v1; // r4@1
  int i; // r6@1
  int v3; // r0@2
  void (__fastcall *v4)(_DWORD, int, int *, _DWORD); // r5@4
  int v6; // [sp+0h] [bp-20h]@4
  void *v7; // [sp+4h] [bp-1Ch]@4

  v1 = this;
  *(_DWORD *)this = &off_276CBE0;
  for ( i = *((_DWORD *)this + 15); i; i = *((_DWORD *)v1 + 15) )
  {
    v3 = *(_DWORD *)i;
    *((_DWORD *)v1 + 15) = *(_DWORD *)i;
    if ( !v3 )
      *((_DWORD *)v1 + 16) = 0;
    *(_DWORD *)i = 0;
    v4 = *(void (__fastcall **)(_DWORD, int, int *, _DWORD))(i + 4);
    v6 = 0;
    v7 = sub_21B09F0();
    v4(0, i, &v6, 0);
  }
  j_pthread_cond_destroy_0((pthread_cond_t *)((char *)v1 + 28));
  j_pthread_mutex_destroy_0((pthread_mutex_t *)v1 + 1);
  return v1;
}


void __fastcall __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::rethrow(int a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::rethrow(a1);
}


signed int __fastcall boost::asio::detail::task_io_service::do_run_one(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r6@1
  signed int v6; // r11@1
  unsigned int *v7; // r8@2
  int v8; // r10@3
  int v9; // r0@4
  int v10; // r9@6
  int v11; // r0@7
  unsigned int v12; // r0@13
  int v13; // r7@16
  int v14; // r1@20
  signed int v15; // r0@22
  unsigned int v16; // r1@24
  int v17; // r0@28
  _DWORD *v18; // r1@29
  int *v19; // r0@33
  int v20; // r11@38
  int v21; // r7@40
  int v22; // r0@42
  int v23; // r0@44
  signed int v24; // r0@51
  int v25; // r0@52
  unsigned int v26; // r1@53
  unsigned int v27; // r0@57
  int v28; // r0@60
  _DWORD *v29; // r1@63
  int v31; // [sp+0h] [bp-48h]@2
  int v32; // [sp+4h] [bp-44h]@2
  int v33; // [sp+8h] [bp-40h]@1
  int v34; // [sp+Ch] [bp-3Ch]@2
  struct epoll_event event; // [sp+10h] [bp-38h]@45

  v4 = a1;
  v5 = a2;
  v6 = 0;
  v33 = a3;
  if ( *(_BYTE *)(a1 + 68) )
    return v6;
  v7 = (unsigned int *)(a1 + 56);
  v32 = a3 + 4;
  v31 = a4;
  v34 = a1 + 40;
  while ( 1 )
  {
    v8 = *(_DWORD *)(v4 + 60);
    if ( v8 )
      break;
    v12 = *(_DWORD *)(v4 + 32) & 0xFFFFFFFE;
    *(_DWORD *)(v4 + 32) = v12;
    do
    {
      *(_DWORD *)(v4 + 32) = v12 + 2;
      j_pthread_cond_wait_0((pthread_cond_t *)(v4 + 28), *(pthread_mutex_t **)v5);
      v12 = *(_DWORD *)(v4 + 32) - 2;
      *(_DWORD *)(v4 + 32) = v12;
    }
    while ( !(v12 & 1) );
LABEL_36:
    if ( *(_BYTE *)(v4 + 68) )
      return 0;
  }
  v9 = *(_DWORD *)v8;
  *(_DWORD *)(v4 + 60) = *(_DWORD *)v8;
  if ( !v9 )
    *(_DWORD *)(v4 + 64) = 0;
  *(_DWORD *)v8 = 0;
  v10 = *(_DWORD *)(v4 + 60);
  if ( v8 == v34 )
    v11 = *(_DWORD *)(v4 + 60);
    if ( v10 )
      LOBYTE(v11) = 1;
    *(_BYTE *)(v4 + 52) = v11;
    if ( v10 && !*(_BYTE *)(v4 + 20) )
      v13 = *(_DWORD *)(v4 + 32) | 1;
      *(_DWORD *)(v4 + 32) = v13;
      if ( *(_BYTE *)(v5 + 4) )
      {
        j_pthread_mutex_unlock_1(*(pthread_mutex_t **)v5);
        *(_BYTE *)(v5 + 4) = 0;
      }
      if ( v13 != 1 )
        j_pthread_cond_signal_0((pthread_cond_t *)(v4 + 28));
    else if ( *(_BYTE *)(v5 + 4) )
      j_pthread_mutex_unlock_1(*(pthread_mutex_t **)v5);
      *(_BYTE *)(v5 + 4) = 0;
    v14 = 0;
    if ( !v10 )
      v14 = 1;
    j_boost::asio::detail::epoll_reactor::run(*(_DWORD *)(v4 + 36), v14, v32);
    v15 = *(_DWORD *)(v33 + 12);
    if ( v15 >= 1 )
      __dmb();
      do
        v16 = __ldrex(v7);
      while ( __strex(v16 + v15, v7) );
    *(_DWORD *)(v33 + 12) = 0;
    if ( !*(_BYTE *)(v5 + 4) )
      j_pthread_mutex_lock_1(*(pthread_mutex_t **)v5);
      *(_BYTE *)(v5 + 4) = 1;
    *(_BYTE *)(v4 + 52) = 1;
    v17 = *(_DWORD *)(v33 + 4);
    if ( v17 )
      v18 = *(_DWORD **)(v4 + 64);
      if ( v18 )
        *v18 = v17;
      else
        *(_DWORD *)(v4 + 60) = v17;
      *(_DWORD *)(v4 + 64) = *(_DWORD *)(v33 + 8);
      *(_DWORD *)(v33 + 4) = 0;
      *(_DWORD *)(v33 + 8) = 0;
    *(_DWORD *)(v4 + 40) = 0;
    v19 = *(int **)(v4 + 64);
    if ( v19 )
      *v19 = v34;
      *(_DWORD *)(v4 + 64) = v34;
    else
      *(_DWORD *)(v4 + 60) = v34;
    goto LABEL_36;
  v20 = *(_DWORD *)(v8 + 8);
  if ( !v10 || *(_BYTE *)(v4 + 20) )
    v21 = v33;
      goto LABEL_51;
LABEL_47:
    j_pthread_mutex_unlock_1(*(pthread_mutex_t **)v5);
    *(_BYTE *)(v5 + 4) = 0;
    goto LABEL_51;
  v22 = *(_DWORD *)(v4 + 32) | 1;
  *(_DWORD *)(v4 + 32) = v22;
  if ( v22 == 1 )
    if ( !*(_BYTE *)(v4 + 52) )
      v23 = *(_DWORD *)(v4 + 36);
      if ( v23 )
        *(_BYTE *)(v4 + 52) = 1;
        *(&event.events + 1) = qword_260F9EC;
        event.events = -2147483639;
        event.data.u64 = (unsigned int)(v23 + 28);
        j_epoll_ctl(*(_DWORD *)(v23 + 36), 3, *(_DWORD *)(v23 + 28), &event);
    if ( *(_BYTE *)(v5 + 4) )
      goto LABEL_47;
  else
    j_pthread_cond_signal_0((pthread_cond_t *)(v4 + 28));
LABEL_51:
  (*(void (__fastcall **)(int, int, int, int))(v8 + 4))(v4, v8, v31, v20);
  v24 = *(_DWORD *)(v21 + 12);
  if ( v24 < 2 )
    if ( v24 <= 0 )
        v27 = __ldrex(v7);
      while ( __strex(v27 - 1, v7) );
      if ( v27 == 1 )
        j_boost::asio::detail::task_io_service::stop((boost::asio::detail::task_io_service *)v4);
    v25 = v24 - 1;
    __dmb();
      v26 = __ldrex(v7);
    while ( __strex(v26 + v25, v7) );
  *(_DWORD *)(v21 + 12) = 0;
  v28 = *(_DWORD *)(v21 + 4);
  if ( v28 )
    if ( *(_BYTE *)(v5 + 4)
      || (j_pthread_mutex_lock_1(*(pthread_mutex_t **)v5),
          v6 = 1,
          *(_BYTE *)(v5 + 4) = 1,
          (v28 = *(_DWORD *)(v21 + 4)) != 0) )
      v29 = *(_DWORD **)(v4 + 64);
      if ( v29 )
        *v29 = v28;
        *(_DWORD *)(v4 + 60) = v28;
      *(_DWORD *)(v4 + 64) = *(_DWORD *)(v21 + 8);
      *(_DWORD *)(v21 + 4) = 0;
      *(_DWORD *)(v21 + 8) = 0;
      goto LABEL_67;
LABEL_67:
    v6 = 1;
  return v6;
}


_DWORD *__fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::~clone_impl(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = &off_26D61E8;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 16))() == 1 )
    *(_DWORD *)(v1 + 12) = 0;
  return sub_21D30E8(v1);
}


int __fastcall boost::uuids::detail::sha1::process_block(int result)
{
  int v1; // r1@1
  int v2; // r1@3
  char *v3; // r2@4
  int v4; // r5@4
  int v5; // off@4
  int v6; // r4@5
  unsigned int v7; // r5@5
  int v8; // r1@5
  int v9; // r9@5
  int v10; // r10@5
  int v11; // r7@5
  int v12; // r2@5
  int v13; // r6@5
  int v14; // lr@6
  int v15; // r8@6
  int v16; // r3@6
  signed int v17; // r12@7
  int v18; // r1@7
  int v19; // r4@13
  int v20; // off@13
  int v21; // r6@13
  int v22; // off@13
  int v23; // [sp+0h] [bp-Ch]@5
  int v24; // [sp+4h] [bp-8h]@5
  int v25; // [sp+Ch] [bp+0h]@2

  v1 = 0;
  do
  {
    *(int *)((char *)&v25 + v1 * 4) = _byteswap_ulong(*(_DWORD *)(result + v1 * 4 + 20));
    ++v1;
  }
  while ( v1 != 16 );
  v2 = 0;
    v3 = (char *)&v25 + v2 * 4;
    v4 = *(int *)((char *)&v25 + v2 * 4);
    ++v2;
    v5 = __ROR4__(*((_DWORD *)v3 + 2) ^ *((_DWORD *)v3 + 8) ^ *((_DWORD *)v3 + 13) ^ v4, 31);
    *((_DWORD *)v3 + 16) = v5;
  while ( v2 != 64 );
  v6 = *(_DWORD *)result;
  v7 = 0;
  v8 = *(_QWORD *)(result + 4) >> 32;
  v9 = *(_QWORD *)(result + 4);
  v10 = *(_DWORD *)(result + 16);
  v11 = *(_DWORD *)(result + 12);
  v12 = *(_QWORD *)(result + 4);
  v24 = *(_QWORD *)(result + 4) >> 32;
  v13 = *(_DWORD *)(result + 16);
  v23 = *(_DWORD *)(result + 12);
    v14 = v6;
    v15 = v8;
    v16 = v11;
    if ( v7 > 0x13 )
    {
      if ( v7 > 0x27 )
      {
        if ( v7 > 0x3B )
        {
          v17 = -899497514;
          v18 = v8 ^ v12 ^ v11;
        }
        else
          v17 = -1894007588;
          v18 = v11 & v8 | (v11 | v8) & v12;
      }
      else
        v17 = 1859775393;
        v18 = v8 ^ v12 ^ v11;
    }
    else
      v17 = 1518500249;
      v18 = v8 & v12 | v11 & ~v12;
    v20 = __ROR4__(v6, 27);
    v19 = v13 + v20;
    v21 = *(&v25 + v7++);
    v6 = v18 + v19 + v17 + v21;
    v22 = __ROR4__(v12, 2);
    v8 = v22;
    v13 = v11;
    v11 = v15;
    v12 = v14;
  while ( v7 != 80 );
  *(_DWORD *)result += v6;
  *(_DWORD *)(result + 4) = v9 + v14;
  *(_DWORD *)(result + 8) = v8 + v24;
  *(_DWORD *)(result + 12) = v23 + v15;
  *(_DWORD *)(result + 16) = v16 + v10;
  return result;
}


int __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::clone_impl(int a1, int a2)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::clone_impl(
           a1,
           a2);
}
