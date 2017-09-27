

int __fastcall crossplat::threadpool::detach_from_java(crossplat::threadpool *this, void *a2)
{
  int v2; // r0@1

  v2 = crossplat::JVM;
  __dmb();
  return (*(int (**)(void))(*(_DWORD *)v2 + 20))();
}


crossplat::threadpool *__fastcall crossplat::threadpool::threadpool(crossplat::threadpool *this, unsigned int a2)
{
  unsigned int v2; // r6@1
  crossplat::threadpool *v3; // r4@1
  _DWORD *v4; // r7@1
  int v5; // r0@1
  unsigned int *v6; // r0@1
  unsigned int v7; // r1@2
  unsigned int v8; // r11@4
  __int64 v9; // r0@6
  void *v10; // r9@8
  char *v11; // r5@8 OVERLAPPED
  signed int v12; // r1@8
  unsigned int v13; // r2@8
  unsigned int v14; // r1@10
  unsigned int v15; // r8@10
  pthread_t *v16; // r6@17
  int v17; // r6@19 OVERLAPPED
  unsigned int v19; // [sp+4h] [bp-2Ch]@1
  pthread_t newthread; // [sp+8h] [bp-28h]@5

  v2 = a2;
  v3 = this;
  v19 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v4 = j_operator new(0x10u);
  j_boost::asio::detail::service_registry::service_registry<boost::asio::detail::task_io_service,unsigned int>(
    (int)v4,
    (crossplat::threadpool *)((char *)v3 + 12),
    0,
    v2);
  *((_DWORD *)v3 + 3) = v4;
  v5 = v4[3];
  *((_DWORD *)v3 + 4) = v5;
  *((_DWORD *)v3 + 5) = v5;
  v6 = (unsigned int *)(v5 + 56);
  __dmb();
  do
    v7 = __ldrex(v6);
  while ( __strex(v7 + 1, v6) );
  if ( v2 )
  {
    v8 = 0;
    do
    {
      if ( !j_pthread_create_0(&newthread, 0, (void *(*)(void *))crossplat::threadpool::thread_start, (void *)v3) )
      {
        v9 = *(_QWORD *)((char *)v3 + 4);
        if ( (_DWORD)v9 == HIDWORD(v9) )
        {
          v10 = *(void **)v3;
          v11 = 0;
          v12 = v9 - *(_DWORD *)v3;
          v13 = v12 >> 2;
          if ( !(v12 >> 2) )
            v13 = 1;
          v14 = v13 + (v12 >> 2);
          v15 = v14;
          if ( 0 != v14 >> 30 )
            v15 = 0x3FFFFFFF;
          if ( v14 < v13 )
          if ( v15 )
          {
            if ( v15 >= 0x40000000 )
              sub_21E57F4();
            v11 = (char *)j_operator new(4 * v15);
            LODWORD(v9) = *(_QWORD *)v3 >> 32;
            v10 = (void *)*(_QWORD *)v3;
          }
          v16 = (pthread_t *)&v11[v9 - (_DWORD)v10];
          *v16 = newthread;
          if ( ((signed int)v9 - (signed int)v10) >> 2 )
            j___aeabi_memmove4_1((int)v11, (int)v10);
          v17 = (int)(v16 + 1);
          if ( v10 )
            j_operator delete(v10);
          *(_QWORD *)v3 = *(_QWORD *)&v11;
          v2 = v19;
          *((_DWORD *)v3 + 2) = &v11[4 * v15];
        }
        else
          *(_DWORD *)v9 = newthread;
          *((_DWORD *)v3 + 1) += 4;
      }
      ++v8;
    }
    while ( v8 < v2 );
  }
  return v3;
}


crossplat::threadpool *__fastcall crossplat::threadpool::thread_start(crossplat::threadpool *this, void *a2)
{
  crossplat::threadpool *v2; // r4@1
  int v4; // [sp+10h] [bp-18h]@1
  void *v5; // [sp+14h] [bp-14h]@1

  v2 = this;
  j_crossplat::get_jvm_env(this);
  j___pthread_cleanup_push();
  v4 = 0;
  v5 = sub_21B09F0();
  j_boost::asio::detail::task_io_service::run(*((_DWORD *)v2 + 4), (int)&v4);
  if ( v4 )
    j_boost::asio::detail::do_throw_error((unsigned __int64 *)&v4);
  j___pthread_cleanup_pop();
  return v2;
}


crossplat::threadpool *__fastcall crossplat::threadpool::~threadpool(crossplat::threadpool *this)
{
  crossplat::threadpool *v1; // r4@1
  boost::asio::io_service *v2; // r5@1
  pthread_t *v3; // r7@1
  boost::asio::detail::task_io_service *v4; // r0@3
  unsigned int *v5; // r1@3
  unsigned int v6; // r2@4
  int v8; // [sp+0h] [bp-18h]@2

  v1 = this;
  v2 = (crossplat::threadpool *)((char *)this + 12);
  j_boost::asio::detail::task_io_service::stop(*((boost::asio::detail::task_io_service **)this + 4));
  v3 = (pthread_t *)*(_QWORD *)v1;
  if ( v3 != (pthread_t *)(*(_QWORD *)v1 >> 32) )
  {
    do
    {
      j_pthread_join(*v3, (void **)&v8);
      ++v3;
    }
    while ( v3 != *((pthread_t **)v1 + 1) );
  }
  v4 = (boost::asio::detail::task_io_service *)*((_DWORD *)v1 + 5);
  __dmb();
  v5 = (unsigned int *)((char *)v4 + 56);
  do
    v6 = __ldrex(v5);
  while ( __strex(v6 - 1, v5) );
  if ( v6 == 1 )
    j_boost::asio::detail::task_io_service::stop(v4);
  j_boost::asio::io_service::~io_service(v2);
  if ( *(_DWORD *)v1 )
    j_operator delete(*(void **)v1);
  return v1;
}


int __fastcall crossplat::get_jvm_env(crossplat *this)
{
  int v1; // r1@1
  int v2; // r0@2
  char *v3; // r4@3
  int v4; // r3@3
  int v6; // [sp+8h] [bp-20h]@3
  int v7; // [sp+Ch] [bp-1Ch]@2

  v1 = crossplat::JVM;
  __dmb();
  if ( !v1 )
  {
    j___android_log_print_0(6, (int)"CPPRESTSDK", "%s");
    j_abort_0();
  }
  v7 = 0;
  v2 = crossplat::JVM;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 16))(v2) )
    v3 = j_j___cxa_allocate_exception_0(8);
    sub_21E94B4((void **)&v6, "Could not attach to JVM");
    sub_21D36EC((int)v3, &v6);
    j_j___cxa_throw_0((int)v3, (int)&off_27738C0, (int)sub_21D2E30, v4);
  return v7;
}


void *__fastcall crossplat::threadpool::shared_instance(crossplat::threadpool *this)
{
  int v1; // r0@1
  char v2; // r0@2

  v1 = crossplat::JVM;
  __dmb();
  if ( !v1 )
  {
    j___android_log_print_0(6, (int)"CPPRESTSDK", "%s");
    j_abort_0();
  }
  v2 = byte_2880E14[0];
  if ( !(v2 & 1) && j_j___cxa_guard_acquire_1(byte_2880E14) )
    j_crossplat::threadpool::threadpool((crossplat::threadpool *)&unk_2880E18, 0x28u);
    j___cxa_atexit_1((int)crossplat::threadpool::~threadpool);
    j_j___cxa_guard_release_1(byte_2880E14);
  return &unk_2880E18;
}
