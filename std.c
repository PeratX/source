

void __fastcall std::__future_base::_Result<std::string>::~_Result(int a1)
{
  std::__future_base::_Result<std::string>::~_Result(a1);
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIDefRepositoryTests::UIDefRepository_FindDefWithInvalidNamespace_ExpectException(void)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


  std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)
{
    (int)&v19,
    &v14);
  v17 = v15;
  v18 = v16;
  v15 = 0;
  v16 = 0;
  sub_DA7434(v2, (int)&v17);
  v3 = v18;
  if ( v18 )
  {
    v4 = (unsigned int *)(v18 + 4);
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
  v8 = v16;
  if ( v16 )
    v9 = (unsigned int *)(v16 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return v2;
}


void __fastcall std::__future_base::_State_baseV2::~_State_baseV2(std::__future_base::_State_baseV2 *this)
{
  std::__future_base::_State_baseV2::~_State_baseV2(this);
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<LevelArchiver::Result *,std::__shared_ptr<LevelArchiver::Result *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<LevelArchiver::Result *>>,std::__shared_ptr<LevelArchiver::Result *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    (int)v2);
  v4 = v10;
  v10 = *(_DWORD *)(v1 + 4);
  v3 = v10;
  *(_DWORD *)(v1 + 4) = v4;
  if ( v3 )
  {
    v5 = (unsigned int *)(v3 + 4);
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
      v7 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  return v1;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<Concurrency::streams::details::basic_istream_helper<unsigned char> *,std::__shared_ptr<Concurrency::streams::details::basic_istream_helper<unsigned char> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Concurrency::streams::details::basic_istream_helper<unsigned char> *>>,std::__shared_ptr<Concurrency::streams::details::basic_istream_helper<unsigned char> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Concurrency::streams::details::basic_istream_helper<unsigned char> *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<Concurrency::streams::details::basic_istream_helper<unsigned char> *,std::__shared_ptr<Concurrency::streams::details::basic_istream_helper<unsigned char> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Concurrency::streams::details::basic_istream_helper<unsigned char> *>>,std::__shared_ptr<Concurrency::streams::details::basic_istream_helper<unsigned char> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Concurrency::streams::details::basic_istream_helper<unsigned char> *>>>(
           a1,
           a2);
}


int __fastcall std::__detail::_NFA<std::regex_traits<char>>::_M_insert_word_bound(int a1, char a2)
{
  int v2; // r10@1
  unsigned __int64 *v3; // r11@1
  __int64 v4; // kr00_8@1
  signed int v5; // r4@2
  int v6; // r5@2
  int v7; // r6@2
  int v8; // r7@2
  __int64 v9; // r1@2
  int v10; // r3@2
  int v11; // r7@2
  int v12; // r5@4
  signed int v14; // [sp+0h] [bp-70h]@1
  signed int v15; // [sp+4h] [bp-6Ch]@1
  int v16; // [sp+8h] [bp-68h]@1
  int v17; // [sp+Ch] [bp-64h]@1
  int v18; // [sp+10h] [bp-60h]@1
  __int64 v19; // [sp+14h] [bp-5Ch]@2
  void (__fastcall *v20)(__int64 *, __int64 *, signed int); // [sp+1Ch] [bp-54h]@1
  int v21; // [sp+20h] [bp-50h]@2
  int v22; // [sp+28h] [bp-48h]@1
  int v23; // [sp+2Ch] [bp-44h]@1
  int v24; // [sp+30h] [bp-40h]@1
  int v25; // [sp+34h] [bp-3Ch]@1
  char v26; // [sp+38h] [bp-38h]@1
  void (*v27)(void); // [sp+44h] [bp-2Ch]@1

  v2 = a1;
  v22 = 5;
  v23 = -1;
  v26 = a2;
  v3 = (unsigned __int64 *)(a1 + 32);
  v14 = 5;
  v15 = -1;
  v16 = v24;
  v17 = v25;
  v18 = *(_DWORD *)&v26;
  v27 = 0;
  v20 = 0;
  v4 = *(_QWORD *)(a1 + 36);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    std::vector<std::__detail::_State<std::regex_traits<char>>,std::allocator<std::__detail::_State<std::regex_traits<char>>>>::_M_emplace_back_aux<std::__detail::_State<std::regex_traits<char>>>(
      v3,
      (int)&v14);
    v11 = *(_DWORD *)(v2 + 36);
  }
  else
    v5 = v15;
    v6 = v16;
    v7 = v17;
    v8 = v18;
    *(_DWORD *)v4 = v14;
    *(_DWORD *)(v4 + 4) = v5;
    *(_DWORD *)(v4 + 8) = v6;
    *(_DWORD *)(v4 + 12) = v7;
    *(_DWORD *)(v4 + 16) = v8;
    *(_DWORD *)(v4 + 28) = 0;
    v9 = v19;
    v10 = *(_QWORD *)(v4 + 20);
    v19 = *(_QWORD *)(v4 + 20);
    *(_QWORD *)(v4 + 20) = v9;
    HIDWORD(v9) = v20;
    v20 = *(void (__fastcall **)(__int64 *, __int64 *, signed int))(v4 + 28);
    *(_DWORD *)(v4 + 28) = HIDWORD(v9);
    HIDWORD(v9) = v21;
    v21 = *(_DWORD *)(v4 + 32);
    *(_DWORD *)(v4 + 32) = HIDWORD(v9);
    v11 = *(_DWORD *)(a1 + 36) + 36;
    *(_DWORD *)(a1 + 36) = v11;
  v12 = *(_DWORD *)v3;
  if ( v20 )
    v20(&v19, &v19, 3);
  if ( v27 )
    v27();
  return 954437177 * ((v11 - v12) >> 2) - 1;
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // r6@1
  int v4; // r4@1
  _DWORD *v5; // r5@1
  _DWORD *v6; // r0@1
  int v7; // r5@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r6@8
  unsigned int v11; // r0@10

  v3 = a3;
  v4 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v5 = operator new(0x10u);
  *(_DWORD *)v4 = v5;
  v5[1] = 0;
  v5[2] = 0;
  *v5 = &off_26D526C;
  v5[3] = *v3;
  v6 = operator new(0x14u);
  v6[1] = 1;
  v6[2] = 1;
  *v6 = &off_26D5280;
  v6[4] = v5;
  v7 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = v6;
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
  return v4;
}


int __fastcall std::_Function_base::_Base_manager<web::http::http_response::extract_json(bool)const::{lambda(unsigned long long)#1}>::_M_manager(_DWORD *a1, void **a2, int a3)
{
  void **v3; // r5@1
  _DWORD *v4; // r4@1
  _DWORD *v5; // r0@4
  int v6; // r4@5
  int v7; // r5@6
  unsigned int *v8; // r1@7
  unsigned int v9; // r0@9
  _DWORD *v10; // r1@11
  int v11; // r2@11
  unsigned int *v12; // r2@12
  unsigned int v13; // r3@14
  unsigned int *v15; // r6@21
  unsigned int v16; // r0@23

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *a1 )
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
          v15 = (unsigned int *)(v7 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          if ( &pthread_create )
          {
            __dmb();
            do
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
          }
          else
            v16 = (*v15)--;
          if ( v16 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
      }
      operator delete((void *)v6);
    }
  }
  else
    if ( a3 == 2 )
      v5 = operator new(0xCu);
      v10 = *v3;
      *v5 = *(_DWORD *)*v3;
      v11 = v10[1];
      v5[1] = v11;
      if ( v11 )
        v12 = (unsigned int *)(v11 + 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 + 1, v12) );
          ++*v12;
      *((_BYTE *)v5 + 8) = *((_BYTE *)v10 + 8);
      goto LABEL_18;
    if ( a3 == 1 )
      v5 = *a2;
LABEL_18:
      *v4 = v5;
      return 0;
  return 0;
}


ResourceLocationPair *__fastcall std::swap<ResourceLocationPair>(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r4@1
  int *v4; // r10@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1
  int v8; // r1@1
  int v9; // r12@1
  int v10; // r1@1
  int v11; // r2@1
  int v12; // r3@1
  int v13; // r12@1
  int v14; // r1@1
  int v15; // r2@1
  int v16; // r3@1
  __int16 v17; // r1@1
  int v19; // [sp+8h] [bp-68h]@1
  int v20; // [sp+Ch] [bp-64h]@1
  int v21; // [sp+10h] [bp-60h]@1
  int v22; // [sp+14h] [bp-5Ch]@1
  int v23; // [sp+18h] [bp-58h]@1
  int v24; // [sp+1Ch] [bp-54h]@1
  int v25; // [sp+20h] [bp-50h]@1
  __int16 v26; // [sp+24h] [bp-4Ch]@1
  int v27; // [sp+28h] [bp-48h]@1
  int v28; // [sp+2Ch] [bp-44h]@1
  int v29; // [sp+30h] [bp-40h]@1
  __int16 v30; // [sp+34h] [bp-3Ch]@1
  char v31; // [sp+36h] [bp-3Ah]@1
  char v32; // [sp+38h] [bp-38h]@1
  int v33; // [sp+40h] [bp-30h]@1

  v2 = a1;
  v3 = a2;
  v19 = *(_DWORD *)a1;
  v4 = (int *)(a1 + 32);
  *(_DWORD *)a1 = &unk_28898CC;
  v20 = *(_DWORD *)(a1 + 4);
  v5 = *(_DWORD *)(a1 + 12);
  v6 = *(_DWORD *)(a1 + 16);
  v7 = *(_DWORD *)(a1 + 20);
  v21 = *(_DWORD *)(a1 + 8);
  v22 = v5;
  v23 = v6;
  v24 = v7;
  v8 = *(_DWORD *)(a1 + 24);
  v26 = *(_WORD *)(a1 + 28);
  v25 = v8;
  sub_21E8AF4(&v27, (int *)(a1 + 32));
  sub_21E8AF4(&v28, (int *)(v2 + 36));
  sub_21E8AF4(&v29, (int *)(v2 + 40));
  v31 = *(_BYTE *)(v2 + 46);
  v30 = *(_WORD *)(v2 + 44);
  v32 = *(_BYTE *)(v2 + 48);
  v33 = *(_DWORD *)(v2 + 56);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v2,
    (int *)v3);
  *(_DWORD *)(v2 + 4) = *(_DWORD *)(v3 + 4);
  v9 = v2 + 8;
  v10 = *(_DWORD *)(v3 + 12);
  v11 = *(_DWORD *)(v3 + 16);
  v12 = *(_DWORD *)(v3 + 20);
  *(_DWORD *)v9 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v9 + 4) = v10;
  *(_DWORD *)(v9 + 8) = v11;
  *(_DWORD *)(v9 + 12) = v12;
  *(_WORD *)(v2 + 28) = *(_WORD *)(v3 + 28);
  *(_DWORD *)(v2 + 24) = *(_DWORD *)(v3 + 24);
  EntityInteraction::setInteractText(v4, (int *)(v3 + 32));
  EntityInteraction::setInteractText((int *)(v2 + 36), (int *)(v3 + 36));
  EntityInteraction::setInteractText((int *)(v2 + 40), (int *)(v3 + 40));
  *(_BYTE *)(v2 + 46) = *(_BYTE *)(v3 + 46);
  *(_WORD *)(v2 + 44) = *(_WORD *)(v3 + 44);
  *(_BYTE *)(v2 + 48) = *(_BYTE *)(v3 + 48);
  *(_DWORD *)(v2 + 56) = *(_DWORD *)(v3 + 56);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id((int *)v3, &v19);
  *(_DWORD *)(v3 + 4) = v20;
  v13 = v3 + 8;
  v14 = v22;
  v15 = v23;
  v16 = v24;
  *(_DWORD *)v13 = v21;
  *(_DWORD *)(v13 + 4) = v14;
  *(_DWORD *)(v13 + 8) = v15;
  *(_DWORD *)(v13 + 12) = v16;
  *(_WORD *)(v3 + 28) = v26;
  *(_DWORD *)(v3 + 24) = v25;
  EntityInteraction::setInteractText((int *)(v3 + 32), &v27);
  EntityInteraction::setInteractText((int *)(v3 + 36), &v28);
  EntityInteraction::setInteractText((int *)(v3 + 40), &v29);
  v17 = v30;
  *(_BYTE *)(v3 + 46) = v31;
  *(_WORD *)(v3 + 44) = v17;
  *(_BYTE *)(v3 + 48) = v32;
  *(_DWORD *)(v3 + 56) = v33;
  return ResourceLocationPair::~ResourceLocationPair((ResourceLocationPair *)&v19);
}


int __fastcall std::_Function_base::_Base_manager<ViewBindTestScreenController::ViewBindTestScreenController(NameRegistry &)::{lambda(void)#2}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<ResourcePackStackPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#2}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  void *v1; // r4@1

  v1 = *(void **)(a1 + 16);
  (**(void (__fastcall ***)(_DWORD))v1)(*(_DWORD *)(a1 + 16));
  j_j_j__ZdlPv_3(v1);
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // r6@1
  int v4; // r4@1
  _DWORD *v5; // r5@1
  _DWORD *v6; // r0@1
  int v7; // r5@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r6@8
  unsigned int v11; // r0@10

  v3 = a3;
  v4 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v5 = operator new(0x10u);
  *(_DWORD *)v4 = v5;
  v5[1] = 0;
  v5[2] = 0;
  *v5 = &off_26D52FC;
  v5[3] = *v3;
  v6 = operator new(0x14u);
  v6[1] = 1;
  v6[2] = 1;
  *v6 = &off_26D5310;
  v6[4] = v5;
  v7 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = v6;
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
  return v4;
}


_DWORD *__fastcall std::__exception_ptr::exception_ptr::exception_ptr(_DWORD *result)
{
  *result = 0;
  return result;
}


int __fastcall std::_Function_base::_Base_manager<serialize<ShulkerBoxRecipe>::write(ShulkerBoxRecipe const&,BinaryStream &)::{lambda(BinaryStream &,ItemInstance const&)#2}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<web::websockets::client::details::wspp_callback_client::send_msg(web::websockets::client::websocket_outgoing_message &)::{lambda(pplx::task<std::error_code>)#1}>::_M_manager(int *a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  _DWORD *v4; // r4@1
  void **v5; // r0@2
  void **v6; // r1@4
  void *v7; // r2@4
  unsigned int *v8; // r2@5
  unsigned int v9; // r3@6
  void *v10; // r2@8
  unsigned int *v11; // r2@9
  unsigned int v12; // r3@10
  void *v13; // r3@12
  unsigned int *v14; // r3@13
  unsigned int v15; // r5@14
  void *v16; // r2@16
  unsigned int *v17; // r2@17
  unsigned int v18; // r3@18
  void *v19; // r2@20
  unsigned int *v20; // r2@21
  unsigned int v21; // r3@22
  int v23; // r0@26
  void *v24; // r0@27

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'web::websockets::client::details::wspp_callback_client::send_msg(web::websockets::client::websocket_outgoing_message &)::{lambda(pplx::task<std::error_code>)#1};
      goto LABEL_25;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(0x40u);
      v6 = *v3;
      *v5 = **v3;
      v7 = v6[1];
      v5[1] = v7;
      if ( v7 )
      {
        v8 = (unsigned int *)((char *)v7 + 4);
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 + 1, v8) );
      }
      v5[2] = v6[2];
      v10 = v6[3];
      v5[3] = v10;
      if ( v10 )
        v11 = (unsigned int *)((char *)v10 + 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 + 1, v11) );
      v5[4] = &off_26DDAC4;
      v5[5] = v6[5];
      v13 = v6[6];
      v5[6] = v13;
      if ( v13 )
        v14 = (unsigned int *)((char *)v13 + 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 + 1, v14) );
      *(_QWORD *)(v5 + 7) = *(_QWORD *)(v6 + 7);
      v5[9] = &off_26DDAC4;
      v5[10] = v6[10];
      v16 = v6[11];
      v5[11] = v16;
      if ( v16 )
        v17 = (unsigned int *)((char *)v16 + 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 + 1, v17) );
      *((_BYTE *)v5 + 48) = *((_BYTE *)v6 + 48);
      v5[13] = v6[13];
      v19 = v6[14];
      v5[14] = v19;
      if ( v19 )
        v20 = (unsigned int *)((char *)v19 + 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 + 1, v20) );
      v5[15] = v6[15];
LABEL_25:
      *v4 = v5;
      return 0;
    case 3:
      v23 = *a1;
      if ( *v4 )
        v24 = (void *)j_web::websockets::client::details::wspp_callback_client::send_msg(web::websockets::client::websocket_outgoing_message &)::{lambda(pplx::task<std::error_code>)#1}::~task(v23);
        j_operator delete(v24);
      break;
    default:
  }
  return 0;
}


int std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_get_deleter()
{
  return 0;
}


const void **__fastcall std::__detail::_Scanner<char>::_M_eat_escape_posix(int a1)
{
  int v1; // r4@1
  __int64 v2; // kr00_8@1
  int v3; // r0@3
  int v4; // r8@3
  const char *v5; // r6@3
  int v6; // r5@3
  int v7; // r7@3
  int v8; // r0@4
  char *v9; // r0@6
  bool v10; // zf@6
  signed int v11; // r0@9
  int v12; // r0@10
  bool v13; // zf@12
  const void **result; // r0@16

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 148);
  if ( (_DWORD)v2 == HIDWORD(v2) )
    sub_119E4A8(2);
  v3 = *(_DWORD *)(a1 + 156);
  v4 = *(_BYTE *)v2;
  v5 = *(const char **)(v1 + 140);
  v6 = v3 + v4;
  v7 = *(_BYTE *)(v3 + v4 + 285);
  if ( !*(_BYTE *)(v3 + v4 + 285) )
  {
    v7 = 0;
    v8 = (*(int (**)(void))(*(_DWORD *)v3 + 32))();
    if ( v8 )
    {
      *(_BYTE *)(v6 + 285) = v8;
      v7 = v8;
    }
  }
  v9 = strchr(v5, v7);
  v10 = v9 == 0;
  if ( v9 )
    v10 = *v9 == 0;
  if ( !v10 )
    v11 = 1;
LABEL_16:
    *(_DWORD *)(v1 + 132) = v11;
    sub_119CB38((const void **)(v1 + 160), 0, *(_BYTE **)(*(_DWORD *)(v1 + 160) - 12), (_BYTE *)1, v4);
    result = (const void **)(*(_DWORD *)(v1 + 148) + 1);
    *(_DWORD *)(v1 + 148) = result;
    return result;
  v12 = *(_DWORD *)(v1 + 128);
  if ( !(v12 & 0x80) )
    if ( !(v12 & 0x120) )
      goto LABEL_21;
    v13 = v4 == 48;
    if ( v4 != 48 )
      v13 = (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v1 + 156) + 24) + v4) & 4) == 0;
    if ( v13 )
LABEL_21:
      sub_119E4A8(2);
    v11 = 4;
    goto LABEL_16;
  return j_j_j__ZNSt8__detail8_ScannerIcE17_M_eat_escape_awkEv(v1);
}


int (***__fastcall std::__future_base::_State_baseV2::_M_do_set(int a1, int a2, _BYTE *a3))(void)
{
  int v3; // r5@1
  _BYTE *v4; // r4@1
  int v5; // r0@3
  int (***result)(void); // r0@4
  int (***v7)(void); // [sp+4h] [bp-14h]@2

  v3 = a1;
  v4 = a3;
  if ( !*(_DWORD *)(a2 + 8) )
    sub_DA7654();
  (*(void (__fastcall **)(int (****)(void)))(a2 + 12))(&v7);
  if ( &pthread_create )
  {
    v5 = pthread_mutex_lock((pthread_mutex_t *)(v3 + 8));
    if ( v5 )
      sub_DA7664(v5);
    result = *(int (****)(void))(v3 + 4);
    *(_DWORD *)(v3 + 4) = v7;
    v7 = result;
    if ( &pthread_create )
    {
      pthread_mutex_unlock((pthread_mutex_t *)(v3 + 8));
      result = v7;
    }
  }
  else
  *v4 = 1;
  if ( result )
    result = (int (***)(void))(**result)();
  return result;
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>(int a1, int a2, _QWORD *a3)
{
  _QWORD *v3; // r6@1
  int v4; // r4@1
  void *v5; // r5@1
  _DWORD *v6; // r0@1
  int v7; // r5@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r6@8
  unsigned int v11; // r0@10

  v3 = a3;
  v4 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v5 = operator new(0x14u);
  *(_DWORD *)v4 = v5;
  *((_DWORD *)v5 + 1) = 0;
  *((_DWORD *)v5 + 2) = 0;
  *(_DWORD *)v5 = &off_26D5590;
  *(_QWORD *)((char *)v5 + 12) = *v3;
  v6 = operator new(0x14u);
  v6[1] = 1;
  v6[2] = 1;
  *v6 = &off_26D55A4;
  v6[4] = v5;
  v7 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = v6;
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
  return v4;
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // r6@1
  int v4; // r4@1
  _DWORD *v5; // r5@1
  _DWORD *v6; // r0@1
  int v7; // r5@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r6@8
  unsigned int v11; // r0@10

  v3 = a3;
  v4 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v5 = operator new(0x10u);
  *(_DWORD *)v4 = v5;
  v5[1] = 0;
  v5[2] = 0;
  *v5 = &off_26D52CC;
  v5[3] = *v3;
  v6 = operator new(0x14u);
  v6[1] = 1;
  v6[2] = 1;
  *v6 = &off_26D52E0;
  v6[4] = v5;
  v7 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = v6;
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
  return v4;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::multiplayer::manager::multiplayer_manager *>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1
  __int64 v5; // r1@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = j_operator new(0x10u);
  HIDWORD(v5) = 1;
  LODWORD(v5) = &off_2765CFC;
  *(_QWORD *)v4 = v5;
  v4[2] = 1;
  v4[3] = v3;
  *v2 = v4;
  return v2;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<void>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<void>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


void __fastcall std::swap<PortfolioScreenController::PhotoRecord>(int a1, int *a2)
{
  std::swap<PortfolioScreenController::PhotoRecord>(a1, a2);
}


void __fastcall std::__future_base::_Async_state_commonV2::~_Async_state_commonV2(std::__future_base::_Async_state_commonV2 *this)
{
  std::__future_base::_Async_state_commonV2::~_Async_state_commonV2(this);
}


void __fastcall std::_Destroy<xbox::services::user_statistics::service_configuration_statistic>(int a1)
{
  int v1; // r11@1
  int v2; // r5@1
  int v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  unsigned int *v8; // r2@11
  signed int v9; // r1@13
  int v10; // r1@27
  void *v11; // r0@27
  int v12; // r1@28
  void *v13; // r0@28
  int *v14; // r0@29
  int *v15; // r0@34
  unsigned int *v16; // r2@36
  signed int v17; // r1@38

  v1 = a1;
  v3 = *(_QWORD *)(a1 + 4) >> 32;
  v2 = *(_QWORD *)(a1 + 4);
  if ( v2 != v3 )
  {
    do
    {
      v10 = *(_DWORD *)(v2 + 8);
      v11 = (void *)(v10 - 12);
      if ( (int *)(v10 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v10 - 4);
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
          j_j_j_j__ZdlPv_9(v11);
      }
      v12 = *(_DWORD *)(v2 + 4);
      v13 = (void *)(v12 - 12);
      if ( (int *)(v12 - 12) != &dword_28898C0 )
        v6 = (unsigned int *)(v12 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
      v14 = (int *)(*(_DWORD *)v2 - 12);
      if ( v14 != &dword_28898C0 )
        v8 = (unsigned int *)(*(_DWORD *)v2 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      v2 += 12;
    }
    while ( v2 != v3 );
    v2 = *(_DWORD *)(v1 + 4);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  v15 = (int *)(*(_DWORD *)v1 - 12);
  if ( v15 != &dword_28898C0 )
    v16 = (unsigned int *)(*(_DWORD *)v1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::tournaments::tournament_request_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::tournaments::tournament_request_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>(int a1, int a2, _DWORD *a3)
{
  return std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>(
           a1,
           a2,
           a3);
}


int __fastcall std::_Function_base::_Base_manager<AddEntityPacket::write(BinaryStream &)const::{lambda(BinaryStream &,EntityLink const&)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(ptr);
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::xbox_live_context *,std::__shared_ptr<xbox::services::xbox_live_context *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<xbox::services::xbox_live_context *>>,std::__shared_ptr<xbox::services::xbox_live_context *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<xbox::services::xbox_live_context *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::xbox_live_context *,std::__shared_ptr<xbox::services::xbox_live_context *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<xbox::services::xbox_live_context *>>,std::__shared_ptr<xbox::services::xbox_live_context *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<xbox::services::xbox_live_context *>>>(
           a1,
           a2);
}


void __fastcall __noreturn std::make_exception_ptr<std::runtime_error>(int a1, int a2)
{
  int v2; // r6@1
  char *v3; // r5@1
  int v4; // r3@1

  v2 = a2;
  v3 = j___cxa_allocate_exception(8);
  *(_DWORD *)v3 = &off_2773798;
  sub_119C854((int *)v3 + 1, (int *)(v2 + 4));
  j___cxa_throw((int)v3, (int)&off_27738C0, (int)sub_21D2E30, v4);
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>::~_Impl(void *ptr)
{
  void *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = ptr;
  *(_DWORD *)ptr = &off_26D51AC;
  v2 = *((_DWORD *)ptr + 2);
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
  j_j_j__ZdlPv_3(v1);
}


int *__fastcall std::fill(int *result, int a2, int *a3, int a4, _BYTE *a5)
{
  int *v6; // lr@2
  int *v12; // r5@3
  int v13; // r5@9
  signed int v14; // r6@10
  signed int v15; // r6@13
  int v16; // r5@17
  signed int v17; // r6@18
  signed int v18; // r6@21
  int *i; // r4@24
  int v20; // r1@28
  signed int v21; // r5@30
  int *v22; // r4@33
  int v23; // r5@36
  signed int v24; // r6@37
  signed int v25; // r5@40
  int *j; // r4@42
  int v27; // r1@46
  signed int v28; // r5@48
  int *v29; // r4@51
  int v30; // r5@54
  signed int v31; // r6@55
  signed int v32; // r5@58

  if ( result == a3 )
  {
    if ( *a5 )
    {
      v22 = result;
      while ( v22 != result )
      {
        v23 = *v22;
        do
        {
          v24 = 1 << a2++;
          v23 |= v24;
        }
        while ( a2 != 32 );
        *v22 = v23;
LABEL_34:
        ++v22;
        a2 = 0;
      }
      while ( a4 != a2 )
        v25 = 1 << a2++;
        *result |= v25;
        if ( a2 == 32 )
          goto LABEL_34;
    }
    else
      v29 = result;
      while ( v29 != result )
        v30 = *v29;
          v31 = 1 << a2++;
          v30 &= ~v31;
        *v29 = v30;
LABEL_52:
        ++v29;
        v32 = 1 << a2++;
        *result &= ~v32;
          goto LABEL_52;
  }
  else
    _R12 = *a5;
    v6 = result + 1;
    __asm { SBFX.W          R4, R12, #0, #1 }
    if ( !_ZF )
      v12 = result + 1;
      do
        *v12 = _R4;
        ++v12;
      while ( a3 != v12 );
    if ( _R12 )
      while ( result != v6 )
        v13 = *result;
          v14 = 1 << a2++;
          v13 |= v14;
        *result = v13;
LABEL_7:
        ++result;
      while ( a2 )
        v15 = 1 << a2++;
        *v6 |= v15;
          goto LABEL_7;
        v16 = *result;
          v17 = 1 << a2++;
          v16 &= ~v17;
        *result = v16;
LABEL_15:
        v18 = 1 << a2++;
        *v6 &= ~v18;
          goto LABEL_15;
    result = (int *)1;
      for ( i = a3; i != a3; ++i )
        *i = -1;
LABEL_25:
        ;
      v20 = 0;
      while ( a4 != v20 )
        v21 = 1 << v20++;
        *a3 |= v21;
        if ( v20 == 32 )
          goto LABEL_25;
      for ( j = a3; j != a3; ++j )
        *j = 0;
LABEL_43:
      v27 = 0;
      while ( a4 != v27 )
        v28 = 1 << v27++;
        *a3 &= ~v28;
        if ( v27 == 32 )
          goto LABEL_43;
  return result;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIDefRepositoryTests::UIDefRepository_LoadDefsListWithMissingQuotation_ExpectException(void)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<ResourceLoadManager::ResourceLoadTask *,std::__shared_ptr<ResourceLoadManager::ResourceLoadTask *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<ResourceLoadManager::ResourceLoadTask *>>,std::__shared_ptr<ResourceLoadManager::ResourceLoadTask *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<ResourceLoadManager::ResourceLoadTask *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_26EAC34;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


int __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>::_M_run(int a1)
{
  int v1; // r4@1
  unsigned __int8 *v2; // r5@1
  unsigned int v3; // r1@2
  _BYTE *v4; // r0@4
  int v5; // r0@5
  int v6; // r0@8
  int result; // r0@9

  v1 = *(_DWORD *)(a1 + 12);
  v2 = (unsigned __int8 *)(v1 + 40);
  do
  {
    do
      v3 = __ldrex(v2);
    while ( __strex(1u, v2) );
    __dmb();
  }
  while ( v3 );
  v4 = *(_BYTE **)(v1 + 24);
  if ( v4 == (_BYTE *)(*(_DWORD *)(v1 + 32) - 1) )
    if ( (unsigned int)((*(_QWORD *)v1 >> 32) - ((signed int)(*(_DWORD *)(v1 + 36) - *(_QWORD *)v1) >> 2)) <= 1 )
      std::deque<char,std::allocator<char>>::_M_reallocate_map(v1, 1u, 0);
    *(_DWORD *)(*(_DWORD *)(v1 + 36) + 4) = operator new(0x200u);
    **(_BYTE **)(v1 + 24) = 21;
    v6 = *(_DWORD *)(v1 + 36);
    *(_DWORD *)(v1 + 36) = v6 + 4;
    v5 = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v1 + 28) = v5;
    *(_DWORD *)(v1 + 32) = v5 + 512;
  else
    *v4 = 21;
    v5 = *(_DWORD *)(v1 + 24) + 1;
  *(_DWORD *)(v1 + 24) = v5;
  result = 0;
  __dmb();
  *v2 = 0;
  return result;
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<ResourceLoadManager::ResourceLoadTask *,std::__shared_ptr<ResourceLoadManager::ResourceLoadTask *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<ResourceLoadManager::ResourceLoadTask *>>,std::__shared_ptr<ResourceLoadManager::ResourceLoadTask *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    *(_DWORD *)v7);
  v13 = v20;
  v20 = *(_DWORD *)(v7 + 4);
  v12 = v20;
  *(_DWORD *)(v7 + 4) = v13;
  if ( v12 )
  {
    v14 = (unsigned int *)(v12 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  }
  return v7;
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *,std::__shared_ptr<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *>>,std::__shared_ptr<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    (int)v5);
  v8 = v14;
  v14 = *(_DWORD *)(v4 + 4);
  v7 = v14;
  *(_DWORD *)(v4 + 4) = v8;
  if ( v7 )
  {
    v9 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  return v4;
}


const void **__fastcall __noreturn std::__detail::_Scanner<char>::_M_scan_normal(int a1)
{
  int v1; // r4@1
  _BYTE *v2; // r1@1
  int v3; // r0@1
  signed int v4; // r5@1
  _BYTE *v5; // r1@5
  int v6; // r0@5
  const void **result; // r0@11
  char *v8; // r1@15 OVERLAPPED
  signed int v9; // r2@15
  _DWORD *v10; // r0@15
  int v11; // r1@18
  _BYTE *v12; // r0@20
  int v13; // r1@22
  int v14; // r0@29
  const char *v15; // r8@29
  int v16; // r6@29
  int v17; // r7@29
  int v18; // r0@30
  char *v19; // r0@32
  bool v20; // zf@32
  char *v21; // r7@38
  const void **v22; // r6@38
  unsigned __int8 v23; // r1@41
  int v24; // t1@44
  const void **v25; // r4@55
  int v26; // t1@55
  _BYTE *v27; // r2@55
  unsigned __int8 v28; // r0@55
  int v29; // t1@56

  v1 = a1;
  v2 = *(_BYTE **)(a1 + 148);
  v3 = (int)(v2 + 1);
  *(_DWORD *)(v1 + 148) = v2 + 1;
  v4 = *v2;
  if ( v4 == 92 )
  {
    if ( v3 == *(_DWORD *)(v1 + 152) )
      sub_119E4A8(2);
    if ( !(*(_WORD *)(v1 + 128) & 0x120)
      || (v5 = *(_BYTE **)(v1 + 148), v6 = *v5, (unsigned int)(v6 - 40) >= 2) && v6 != 123 )
    {
      *(_QWORD *)&v8 = *(_QWORD *)(v1 + 164);
      v10 = (_DWORD *)(v1 + (v9 >> 1));
      if ( v9 & 1 )
        v8 = *(char **)&v8[*v10];
      return (const void **)((int (__fastcall *)(_DWORD *))v8)(v10);
    }
    v3 = (int)(v5 + 1);
    *(_DWORD *)(v1 + 148) = v5 + 1;
    v4 = *v5;
  }
  if ( v4 > 90 )
    if ( v4 == 91 )
      *(_DWORD *)(v1 + 124) = 2;
      *(_BYTE *)(v1 + 144) = 1;
      if ( v3 != *(_DWORD *)(v1 + 152) && *(_BYTE *)v3 == 94 )
      {
        result = (const void **)(v3 + 1);
        *(_DWORD *)(v1 + 132) = 10;
        *(_DWORD *)(v1 + 148) = result;
        return result;
      }
      result = (const void **)9;
      goto LABEL_53;
    if ( v4 == 123 )
      *(_DWORD *)(v1 + 124) = 1;
      result = (const void **)12;
    goto LABEL_29;
  if ( v4 != 40 )
    if ( v4 == 41 )
      result = (const void **)8;
LABEL_53:
      *(_DWORD *)(v1 + 132) = result;
      return result;
LABEL_29:
    v14 = *(_DWORD *)(v1 + 156);
    v15 = *(const char **)(v1 + 140);
    v16 = v14 + v4;
    v17 = *(_BYTE *)(v14 + v4 + 285);
    if ( !*(_BYTE *)(v14 + v4 + 285) )
      v17 = 0;
      v18 = (*(int (**)(void))(*(_DWORD *)v14 + 32))();
      if ( v18 )
        *(_BYTE *)(v16 + 285) = v18;
        v17 = v18;
    v19 = strchr(v15, v17);
    v20 = v19 == 0;
    if ( v19 )
      v20 = (v4 | 0x20) == 125;
    if ( !v20 && *v19 || v4 == 10 && *(_DWORD *)(v1 + 128) & 0x300 )
      result = *(const void ***)(v1 + 156);
      v21 = (char *)result + v4;
      v22 = (const void **)*((_BYTE *)result + v4 + 285);
      if ( !*((_BYTE *)result + v4 + 285) )
        v22 = 0;
        result = (const void **)(*((int (**)(void))*result + 8))();
        if ( result )
        {
          v21[285] = (char)result;
          v22 = result;
        }
      v23 = *(_BYTE *)v1;
      if ( *(_BYTE *)v1 )
        result = (const void **)v1;
        while ( (const void **)v23 != v22 )
          v24 = *((_BYTE *)result + 8);
          result += 2;
          v23 = v24;
          if ( !v24 )
            return result;
        result = (const void **)result[1];
        goto LABEL_53;
    else
      *(_DWORD *)(v1 + 132) = 1;
      result = sub_119CB38((const void **)(v1 + 160), 0, *(_BYTE **)(*(_DWORD *)(v1 + 160) - 12), (_BYTE *)1, v4);
    return result;
  v11 = *(_DWORD *)(v1 + 128);
  if ( !(v11 & 0x10) || *(_BYTE *)v3 != 63 )
    if ( v11 & 2 )
      result = (const void **)6;
      result = (const void **)5;
    goto LABEL_53;
  v12 = (_BYTE *)(v3 + 1);
  *(_DWORD *)(v1 + 148) = v12;
  if ( v12 == *(_BYTE **)(v1 + 152) )
    sub_119E4A8(5);
  v13 = *v12;
  if ( v13 == 33 )
    *(_DWORD *)(v1 + 148) = v12 + 1;
    *(_DWORD *)(v1 + 132) = 7;
    v26 = *(_DWORD *)(v1 + 160);
    v25 = (const void **)(v1 + 160);
    v27 = *(_BYTE **)(v26 - 12);
    v28 = 110;
  else
    if ( v13 != 61 )
      if ( v13 != 58 )
        sub_119E4D8(5);
      *(_DWORD *)(v1 + 148) = v12 + 1;
    v29 = *(_DWORD *)(v1 + 160);
    v27 = *(_BYTE **)(v29 - 12);
    v28 = 112;
  return sub_119CB38(v25, 0, v27, (_BYTE *)1, v28);
}


        std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v27)
{
        !v9) )
  {
    (*(void (__fastcall **)(char *))(**(_DWORD **)v4 + 132))(&v26);
    pplx::get_ambient_scheduler((pplx *)&v29);
    v11 = v30;
    v16 = v29;
    v17 = v30;
    v18 = v29;
    v19 = 0;
    v20 = 0;
    v25 = 0;
    v23 = 0;
    v24 = 0;
    v21 = 0;
    v22 = 0;
    pplx::task_from_exception<unsigned int,std::__exception_ptr::exception_ptr>(
      v5,
      (const std::__exception_ptr::exception_ptr *)&v26,
      (int)&v16);
    if ( v11 )
    {
      v12 = (unsigned int *)(v11 + 4);
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
        v14 = (unsigned int *)(v11 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
        if ( &pthread_create )
        {
          __dmb();
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
        }
        else
          v15 = (*v14)--;
        if ( v15 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
    }
    result = std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v26);
  }
  else
    *(_DWORD *)v5 = *v3;
    result = v3[1];
    v3[1] = 0;
    *(_DWORD *)(v5 + 4) = result;
    *v3 = 0;
  return result;
}


void __fastcall __noreturn std::make_exception_ptr<std::future_error>(int a1, int a2)
{
  std::make_exception_ptr<std::future_error>(a1, a2);
}


int __fastcall std::__detail::_NFA<std::regex_traits<char>>::_M_insert_alt(int a1, int a2, int a3, char a4)
{
  int v4; // r10@1
  int v5; // r0@1
  __int64 v6; // kr00_8@1
  int v7; // r4@2
  int v8; // r5@2
  int v9; // r6@2
  int v10; // r7@2
  __int64 v11; // r1@2
  int v12; // r3@2
  int v13; // r7@2
  int v14; // r4@4
  int v16; // [sp+0h] [bp-70h]@1
  int v17; // [sp+4h] [bp-6Ch]@1
  int v18; // [sp+8h] [bp-68h]@1
  int v19; // [sp+Ch] [bp-64h]@1
  int v20; // [sp+10h] [bp-60h]@1
  __int64 v21; // [sp+14h] [bp-5Ch]@2
  void (__fastcall *v22)(__int64 *, __int64 *, signed int); // [sp+1Ch] [bp-54h]@1
  int v23; // [sp+20h] [bp-50h]@2
  int v24; // [sp+28h] [bp-48h]@1
  int v25; // [sp+2Ch] [bp-44h]@1
  int v26; // [sp+30h] [bp-40h]@1
  int v27; // [sp+34h] [bp-3Ch]@1
  char v28; // [sp+38h] [bp-38h]@1
  void (*v29)(void); // [sp+44h] [bp-2Ch]@1

  v4 = a1;
  v24 = 1;
  v5 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  v25 = a2;
  v26 = v5;
  v27 = a3;
  v28 = a4;
  v16 = v24;
  v17 = a2;
  v18 = v5;
  v19 = a3;
  v20 = *(_DWORD *)&v28;
  v29 = 0;
  v22 = 0;
  v6 = *(_QWORD *)(v4 + 36);
  if ( (_DWORD)v6 == HIDWORD(v6) )
  {
    std::vector<std::__detail::_State<std::regex_traits<char>>,std::allocator<std::__detail::_State<std::regex_traits<char>>>>::_M_emplace_back_aux<std::__detail::_State<std::regex_traits<char>>>(
      (unsigned __int64 *)(v4 + 32),
      (int)&v16);
    v13 = *(_DWORD *)(v4 + 36);
  }
  else
    v7 = v17;
    v8 = v18;
    v9 = v19;
    v10 = v20;
    *(_DWORD *)v6 = v16;
    *(_DWORD *)(v6 + 4) = v7;
    *(_DWORD *)(v6 + 8) = v8;
    *(_DWORD *)(v6 + 12) = v9;
    *(_DWORD *)(v6 + 16) = v10;
    *(_DWORD *)(v6 + 28) = 0;
    v11 = v21;
    v12 = *(_QWORD *)(v6 + 20);
    v21 = *(_QWORD *)(v6 + 20);
    *(_QWORD *)(v6 + 20) = v11;
    HIDWORD(v11) = v22;
    v22 = *(void (__fastcall **)(__int64 *, __int64 *, signed int))(v6 + 28);
    *(_DWORD *)(v6 + 28) = HIDWORD(v11);
    HIDWORD(v11) = v23;
    v23 = *(_DWORD *)(v6 + 32);
    *(_DWORD *)(v6 + 32) = HIDWORD(v11);
    v13 = *(_DWORD *)(v4 + 36) + 36;
    *(_DWORD *)(v4 + 36) = v13;
  v14 = *(_DWORD *)(v4 + 32);
  if ( v22 )
    v22(&v21, &v21, 3);
  if ( v29 )
    v29();
  return 954437177 * ((v13 - v14) >> 2) - 1;
}


int __fastcall std::__future_base::_State_baseV2::wait(int a1)
{
  int v1; // r4@1
  pthread_mutex_t *v2; // r5@1
  int v3; // r0@2
  int v4; // r5@3
  pthread_mutex_t *mutex; // [sp+4h] [bp-1Ch]@1
  char v7; // [sp+8h] [bp-18h]@1

  v1 = a1;
  v2 = (pthread_mutex_t *)(a1 + 8);
  (*(void (**)(void))(*(_DWORD *)a1 + 8))();
  mutex = v2;
  v7 = 0;
  if ( &pthread_create )
  {
    v3 = pthread_mutex_lock(v2);
    if ( v3 )
      sub_119CCFC(v3);
  }
  v7 = 1;
  v4 = *(_DWORD *)(v1 + 4);
  if ( v4 )
    goto LABEL_14;
  do
    sub_119EDFC((pthread_cond_t *)(v1 + 12), &mutex);
    v4 = *(_DWORD *)(v1 + 4);
  while ( !v4 );
  if ( v7 )
LABEL_14:
    if ( mutex )
    {
      if ( &pthread_create )
        pthread_mutex_unlock(mutex);
      v7 = 0;
    }
  return v4;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::presence::presence_writer *>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1
  __int64 v5; // r1@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = j_operator new(0x10u);
  HIDWORD(v5) = 1;
  LODWORD(v5) = &off_2764F7C;
  *(_QWORD *)v4 = v5;
  v4[2] = 1;
  v4[3] = v3;
  *v2 = v4;
  return v2;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::title_storage::title_storage_blob_metadata_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::title_storage::title_storage_blob_metadata_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>::~_Impl(void *ptr)
{
  std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>::~_Impl(ptr);
}


std::bad_typeid *__fastcall std::bad_typeid::~bad_typeid(std::bad_typeid *this)
{
  std::bad_typeid *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2774058;
  j_std::exception::~exception();
  return v1;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::RakWebSocketTests::RakWebSocket_Interface_onMessage_handler(void)::{lambda(RakWebSocketDataFrame const&)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(ptr);
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<CommandContext *,std::__shared_ptr<CommandContext *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CommandContext *>>,std::__shared_ptr<CommandContext *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CommandContext *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<CommandContext *,std::__shared_ptr<CommandContext *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CommandContext *>>,std::__shared_ptr<CommandContext *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CommandContext *>>>(
           a1,
           a2);
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::title_storage::title_storage_blob_metadata>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::title_storage::title_storage_blob_metadata>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<ExplodePacket::write(BinaryStream &)const::{lambda(BinaryStream &,BlockPos const&)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5
  _DWORD *v8; // r1@8

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(0xCu);
    v8 = *v3;
    *v5 = *(_DWORD *)*v3;
    v5[1] = v8[1];
    v5[2] = v8[2];
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIDefRepositoryTests::UIDefRepository_LoadDefsListWithExtraComma_ExpectException(void)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


void __fastcall std::default_delete<InventoryTransaction>::operator()(int a1, int a2)
{
  int v2; // r8@1
  int v3; // r4@2
  int v4; // r5@2
  int v5; // r0@3
  int v6; // r5@9
  int v7; // r9@10
  __int64 v8; // r0@10
  int v9; // r4@11
  int v10; // r7@11
  void *v11; // r0@12
  void *v12; // r0@14
  void *v13; // r0@18
  void *v14; // r0@20
  int v15; // r0@22
  void *v16; // r0@29

  v2 = a2;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 28) >> 32;
    v4 = *(_QWORD *)(a2 + 28);
    if ( v4 != v3 )
    {
      do
      {
        v5 = *(_DWORD *)(v4 + 8);
        if ( v5 )
          (*(void (**)(void))(*(_DWORD *)v5 + 4))();
        *(_DWORD *)(v4 + 8) = 0;
        v4 += 20;
      }
      while ( v3 != v4 );
      v4 = *(_DWORD *)(v2 + 28);
    }
    if ( v4 )
      operator delete((void *)v4);
    v6 = *(_DWORD *)(v2 + 8);
    if ( v6 )
        v7 = *(_DWORD *)v6;
        v8 = *(_QWORD *)(v6 + 16);
        if ( (_DWORD)v8 != HIDWORD(v8) )
        {
          v9 = v8 + 96;
          v10 = -HIDWORD(v8);
          do
          {
            v11 = *(void **)(v9 + 44);
            if ( v11 )
              operator delete(v11);
            v12 = *(void **)(v9 + 28);
            if ( v12 )
              operator delete(v12);
            if ( *(_DWORD *)v9 )
              (*(void (**)(void))(**(_DWORD **)v9 + 4))();
            *(_DWORD *)v9 = 0;
            v13 = *(void **)(v9 - 28);
            if ( v13 )
              operator delete(v13);
            v14 = *(void **)(v9 - 44);
            if ( v14 )
              operator delete(v14);
            v15 = *(_DWORD *)(v9 - 72);
            if ( v15 )
              (*(void (**)(void))(*(_DWORD *)v15 + 4))();
            *(_DWORD *)(v9 - 72) = 0;
            v9 += 160;
          }
          while ( v9 + v10 != 96 );
          LODWORD(v8) = *(_DWORD *)(v6 + 16);
        }
        if ( (_DWORD)v8 )
          operator delete((void *)v8);
        operator delete((void *)v6);
        v6 = v7;
      while ( v7 );
    _aeabi_memclr4(*(_QWORD *)v2, 4 * (*(_QWORD *)v2 >> 32));
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 12) = 0;
    v16 = *(void **)v2;
    if ( *(_DWORD *)v2 )
      if ( (void *)(v2 + 24) != v16 )
        operator delete(v16);
    j_j_j__ZdlPv_6((void *)v2);
  }
}


int __fastcall std::_Function_base::_Base_manager<serialize<InventoryTransaction>::read(ReadOnlyBinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


int __fastcall std::__future_base::_State_baseV2::_M_break_promise(int a1, int *a2)
{
  int *v2; // r5@1
  int result; // r0@1
  void ***v4; // r0@2
  int v5; // r7@2
  int v6; // [sp+0h] [bp-30h]@2
  int v7; // [sp+10h] [bp-20h]@3

  v2 = a2;
  result = *a2;
  if ( *a2 )
  {
    v4 = sub_DA8380();
    v5 = *v2;
    std::future_error::future_error((int)&v6, 4u, (unsigned int)v4);
    std::make_exception_ptr<std::future_error>((int)&v7, (int)&v6);
  }
  return result;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<InheritanceTree<GeometryGroup::ModelParent> *,std::__shared_ptr<InheritanceTree<GeometryGroup::ModelParent> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<InheritanceTree<GeometryGroup::ModelParent> *>>,std::__shared_ptr<InheritanceTree<GeometryGroup::ModelParent> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<InheritanceTree<GeometryGroup::ModelParent> *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<InheritanceTree<GeometryGroup::ModelParent> *,std::__shared_ptr<InheritanceTree<GeometryGroup::ModelParent> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<InheritanceTree<GeometryGroup::ModelParent> *>>,std::__shared_ptr<InheritanceTree<GeometryGroup::ModelParent> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<InheritanceTree<GeometryGroup::ModelParent> *>>>(
           a1,
           a2);
}


void __fastcall std::swap<TextureAtlasTile>(int *a1, int a2)
{
  int *v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@3
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  int v7; // [sp+4h] [bp-64h]@1
  void *ptr; // [sp+1Ch] [bp-4Ch]@1

  v2 = a1;
  v3 = a2;
  TextureAtlasTile::TextureAtlasTile(&v7, a1);
  TextureAtlasTile::operator=((int)v2, v3);
  TextureAtlasTile::operator=(v3, (int)&v7);
  if ( ptr )
    operator delete(ptr);
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
}


void __fastcall std::__detail::_StateSeq<std::regex_traits<char>>::_M_clone(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, void *a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, void *a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43)
{
  int v43; // r11@1
  __int64 v44; // r0@1
  char *v45; // r10@2
  int v46; // r0@2
  unsigned int v47; // r5@3
  __int64 v48; // kr00_8@6
  __int64 v49; // kr08_8@6
  __int64 v50; // kr10_8@6
  __int64 v51; // kr18_8@6
  void *v52; // r4@6
  int v53; // r1@6
  __int64 *v54; // r0@6
  unsigned int v55; // r5@8
  void *v56; // t1@9
  int v57; // r1@12
  int v58; // r0@12
  char *v59; // r0@13
  int *v60; // r9@18
  int v61; // r2@19
  int v62; // r4@21
  int v63; // r0@22
  int v64; // r0@23
  int v65; // r1@23
  int v66; // r8@24
  int v67; // r4@24
  int v68; // r3@24
  int v69; // r5@24
  int v70; // r6@24
  int v71; // r7@24
  void (__fastcall *v72)(int *, int, signed int); // r3@24
  void (*v73)(void); // r3@25
  int v74; // r4@25
  int v75; // r5@25
  int v76; // r6@25
  int v77; // r7@25
  int v78; // r3@27
  int v79; // r5@27
  int v80; // r6@27
  int v81; // r7@27
  __int64 v82; // r0@28 OVERLAPPED
  char *v83; // r9@29
  int v84; // r4@29
  int v85; // r5@29
  int v86; // r6@29
  int v87; // r7@29
  __int64 v88; // kr20_8@29
  void (*v89)(void); // r2@29
  int v90; // r2@29
  int v91; // r10@29
  int v92; // r4@31
  signed int v93; // r0@33
  bool v94; // zf@33
  int v95; // r1@39
  int v96; // r0@43
  int v97; // r0@44
  bool v98; // zf@44
  int v99; // r1@48
  int v100; // r0@52
  char *v101; // r0@57
  int v102; // r1@58
  int v103; // r3@59
  int v104; // r2@59
  int v105; // r7@59
  int v106; // r1@59
  _DWORD *v107; // r1@59
  int v108; // r5@59
  int v109; // t1@59
  int v110; // r1@61
  bool v111; // zf@61
  int v112; // r1@65
  _DWORD *v113; // r7@65
  int v114; // t1@65
  int v115; // r2@68
  int v116; // r1@68
  void *v117; // r0@68
  unsigned int v118; // r4@69
  unsigned int v119; // r5@70
  void *v120; // t1@71
  int v121; // [sp+4h] [bp-E4h]@1
  _DWORD *v122; // [sp+8h] [bp-E0h]@12
  int v123; // [sp+Ch] [bp-DCh]@1
  char *v124; // [sp+18h] [bp-D0h]@5
  int v125; // [sp+1Ch] [bp-CCh]@24
  int v126; // [sp+20h] [bp-C8h]@25
  int v127; // [sp+24h] [bp-C4h]@25
  int v128; // [sp+28h] [bp-C0h]@25
  int v129; // [sp+2Ch] [bp-BCh]@25
  int v130; // [sp+30h] [bp-B8h]@25
  int v131; // [sp+34h] [bp-B4h]@26
  int v132; // [sp+38h] [bp-B0h]@29
  void (*v133)(void); // [sp+3Ch] [bp-ACh]@25
  int v134; // [sp+40h] [bp-A8h]@26
  int v135; // [sp+48h] [bp-A0h]@18
  int v136; // [sp+4Ch] [bp-9Ch]@45
  int v137; // [sp+54h] [bp-94h]@37
  int v138; // [sp+5Ch] [bp-8Ch]@25
  void (*v139)(void); // [sp+64h] [bp-84h]@24
  int v140; // [sp+68h] [bp-80h]@25
  void *v141; // [sp+70h] [bp-78h]@5
  int v142; // [sp+74h] [bp-74h]@6
  __int64 v143; // [sp+78h] [bp-70h]@6
  __int64 v144; // [sp+80h] [bp-68h]@6
  __int64 v145; // [sp+88h] [bp-60h]@6
  __int64 v146; // [sp+90h] [bp-58h]@6
  void *ptr; // [sp+98h] [bp-50h]@5
  int v148; // [sp+9Ch] [bp-4Ch]@6
  __int64 v149; // [sp+A0h] [bp-48h]@6
  __int64 v150; // [sp+A8h] [bp-40h]@6
  __int64 v151; // [sp+B0h] [bp-38h]@6
  __int64 v152; // [sp+B8h] [bp-30h]@6

  v43 = a2;
  v121 = a1;
  v123 = a2;
  v44 = *(_QWORD *)(*(_DWORD *)a2 + 32);
  if ( HIDWORD(v44) == (_DWORD)v44 )
  {
    v45 = 0;
    v46 = 0;
  }
  else
    v47 = 954437177 * ((HIDWORD(v44) - (signed int)v44) >> 2);
    if ( v47 >= 0x40000000 )
      sub_119C874();
    v45 = (char *)operator new(-477218588 * ((HIDWORD(v44) - (signed int)v44) >> 2));
    _aeabi_memset4(v45, 4 * v47, 255);
    v46 = (int)&v45[4 * v47];
  v124 = (char *)v46;
  _aeabi_memclr8(&v141, 40);
  std::_Deque_base<long,std::allocator<long>>::_M_initialize_map((int)&v141, 0);
  _aeabi_memclr8(&ptr, 40);
  std::_Deque_base<long,std::allocator<long>>::_M_initialize_map((int)&ptr, 0);
  if ( v141 )
    v48 = v149;
    v49 = v150;
    v150 = v144;
    v149 = v143;
    v143 = v48;
    v144 = v49;
    v50 = v151;
    v51 = v152;
    v152 = v146;
    v151 = v145;
    v145 = v50;
    v146 = v51;
    v52 = ptr;
    ptr = v141;
    v141 = v52;
    v53 = v142;
    v142 = v148;
    v54 = &v152;
    v148 = v53;
    if ( v52 )
    {
      if ( HIDWORD(v49) < HIDWORD(v51) + 4 )
      {
        v55 = HIDWORD(v49) - 4;
        do
        {
          v56 = *(void **)(v55 + 4);
          v55 += 4;
          operator delete(v56);
        }
        while ( v55 < HIDWORD(v51) );
      }
      operator delete(v52);
      v54 = &v152;
    }
  v57 = *(_DWORD *)v54;
  v122 = v54;
  v58 = v151;
  if ( (_DWORD)v151 == v57 - 4 )
    if ( (unsigned int)(v148 - ((HIDWORD(v152) - (signed int)ptr) >> 2)) <= 1 )
      std::deque<long,std::allocator<long>>::_M_reallocate_map((int)&ptr, 1u, 0);
    *(_DWORD *)(HIDWORD(v152) + 4) = operator new(0x200u);
    *(_DWORD *)v151 = *(_DWORD *)(v43 + 4);
    HIDWORD(v152) += 4;
    v59 = (char *)*(_DWORD *)HIDWORD(v152);
    HIDWORD(v151) = v59;
    *v122 = v59 + 512;
    v59 = (char *)(v58 + 4);
  LODWORD(v151) = v59;
  if ( v59 != (char *)v149 )
    v60 = &v135;
    do
      v61 = (int)v59;
      if ( v59 == (char *)HIDWORD(v151) )
        v61 = *(_DWORD *)(HIDWORD(v152) - 4) + 512;
      v62 = *(_DWORD *)(v61 - 4);
        operator delete(v59);
        HIDWORD(v152) -= 4;
        v64 = *(_DWORD *)HIDWORD(v152);
        HIDWORD(v151) = v64;
        v65 = v64 + 512;
        v63 = v64 + 508;
        *v122 = v65;
      else
        v63 = (int)(v59 - 4);
      LODWORD(v151) = v63;
      v66 = *(_DWORD *)v43;
      v125 = v62;
      v67 = *(_DWORD *)(*(_DWORD *)v43 + 32) + 36 * v62;
      v68 = *(_DWORD *)(v67 + 4);
      v69 = *(_DWORD *)(v67 + 8);
      v70 = *(_DWORD *)(v67 + 12);
      v71 = *(_DWORD *)(v67 + 16);
      *v60 = *(_DWORD *)v67;
      v60[1] = v68;
      v60[2] = v69;
      v60[3] = v70;
      v60[4] = v71;
      v139 = 0;
      v72 = *(void (__fastcall **)(int *, int, signed int))(v67 + 28);
      if ( v72 )
        v72(&v138, v67 + 20, 2);
        v140 = *(_DWORD *)(v67 + 32);
        v73 = *(void (**)(void))(v67 + 28);
        v139 = v73;
        v66 = *(_DWORD *)v43;
        v74 = v60[1];
        v75 = v60[2];
        v76 = v60[3];
        v77 = v60[4];
        v126 = *v60;
        v127 = v74;
        v128 = v75;
        v129 = v76;
        v130 = v77;
        v133 = 0;
        if ( v73 )
          ((void (__fastcall *)(int *, int *, signed int))v73)(&v131, &v138, 2);
          v134 = v140;
          v133 = v139;
        v78 = v60[1];
        v79 = v60[2];
        v80 = v60[3];
        v81 = v60[4];
        v127 = v78;
        v128 = v79;
        v129 = v80;
        v130 = v81;
      v82 = *(_QWORD *)(v66 + 36);
      if ( (_DWORD)v82 == HIDWORD(v82) )
        std::vector<std::__detail::_State<std::regex_traits<char>>,std::allocator<std::__detail::_State<std::regex_traits<char>>>>::_M_emplace_back_aux<std::__detail::_State<std::regex_traits<char>>>(
          (unsigned __int64 *)(v66 + 32),
          (int)&v126);
        v83 = v45;
        v91 = *(_DWORD *)(v66 + 36);
        v84 = v127;
        v85 = v128;
        v86 = v129;
        v87 = v130;
        *(_DWORD *)v82 = v126;
        *(_DWORD *)(v82 + 4) = v84;
        *(_DWORD *)(v82 + 8) = v85;
        *(_DWORD *)(v82 + 12) = v86;
        *(_DWORD *)(v82 + 16) = v87;
        *(_DWORD *)(v82 + 28) = 0;
        *(__int64 *)((char *)&v82 + 4) = *(_QWORD *)&v131;
        v88 = *(_QWORD *)(v82 + 20);
        v131 = *(_QWORD *)(v82 + 20);
        v132 = HIDWORD(v88);
        *(_QWORD *)(v82 + 20) = *(__int64 *)((char *)&v82 + 4);
        v89 = v133;
        v133 = *(void (**)(void))(v82 + 28);
        *(_DWORD *)(v82 + 28) = v89;
        v90 = v134;
        v134 = *(_DWORD *)(v82 + 32);
        *(_DWORD *)(v82 + 32) = v90;
        v91 = *(_DWORD *)(v66 + 36) + 36;
        *(_DWORD *)(v66 + 36) = v91;
      v92 = *(_DWORD *)(v66 + 32);
      if ( v133 )
        v133();
      v93 = v91 - v92;
      v45 = v83;
      v43 = v123;
      v60 = &v135;
      *(_DWORD *)&v45[4 * v125] = 954437177 * (v93 >> 2) - 1;
      v94 = v135 == 6;
      if ( v135 != 6 )
        v94 = v135 == 1;
      if ( v94 && v137 != -1 && *(_DWORD *)&v45[4 * v137] == -1 )
        v95 = v151;
        if ( (_DWORD)v151 == *v122 - 4 )
          if ( (unsigned int)(v148 - ((HIDWORD(v152) - (signed int)ptr) >> 2)) <= 1 )
            std::deque<long,std::allocator<long>>::_M_reallocate_map((int)&ptr, 1u, 0);
          *(_DWORD *)(HIDWORD(v152) + 4) = operator new(0x200u);
          *(_DWORD *)v151 = v137;
          HIDWORD(v152) += 4;
          v96 = *(_DWORD *)HIDWORD(v152);
          HIDWORD(v151) = v96;
          *v122 = v96 + 512;
          LODWORD(v151) = v96;
        else
          LODWORD(v151) = v95 + 4;
      v97 = *(_DWORD *)(v123 + 8);
      v98 = v125 == v97;
      if ( v125 != v97 )
        v97 = v136;
        v98 = v136 == -1;
      if ( !v98 && *(_DWORD *)&v45[4 * v97] == -1 )
        v99 = v151;
          *(_DWORD *)v151 = v136;
          v100 = *(_DWORD *)HIDWORD(v152);
          HIDWORD(v151) = v100;
          *v122 = v100 + 512;
          LODWORD(v151) = v100;
          *(_DWORD *)v151 = v97;
          LODWORD(v151) = v99 + 4;
      if ( v139 )
        v139();
      v59 = (char *)v151;
    while ( (_DWORD)v151 != (_DWORD)v149 );
  if ( v45 != v124 )
    v101 = v45;
      v102 = *(_DWORD *)v101;
      if ( *(_DWORD *)v101 != -1 )
        v103 = 9 * v102;
        v104 = *(_DWORD *)(*(_DWORD *)v43 + 32);
        v105 = v104 + 36 * v102;
        v106 = v104 + 36 * v102;
        v109 = *(_DWORD *)(v106 + 4);
        v107 = (_DWORD *)(v106 + 4);
        v108 = v109;
        if ( v109 != -1 )
          *v107 = *(_DWORD *)&v45[4 * v108];
        v110 = *(_DWORD *)(v104 + 4 * v103);
        v111 = v110 == 6;
        if ( v110 != 6 )
          v111 = v110 == 1;
        if ( v111 )
          v114 = *(_DWORD *)(v105 + 12);
          v113 = (_DWORD *)(v105 + 12);
          v112 = v114;
          if ( v114 != -1 )
            *v113 = *(_DWORD *)&v45[4 * v112];
      v101 += 4;
    while ( v124 != v101 );
  v115 = *(_DWORD *)&v45[4 * *(_DWORD *)(v43 + 8)];
  v116 = *(_DWORD *)&v45[4 * *(_DWORD *)(v43 + 4)];
  *(_DWORD *)v121 = *(_DWORD *)v43;
  *(_DWORD *)(v121 + 4) = v116;
  *(_DWORD *)(v121 + 8) = v115;
  v117 = ptr;
  if ( !ptr )
    goto LABEL_79;
  v118 = HIDWORD(v152);
  if ( HIDWORD(v150) < HIDWORD(v152) + 4 )
    v119 = HIDWORD(v150) - 4;
      v120 = *(void **)(v119 + 4);
      v119 += 4;
      operator delete(v120);
    while ( v119 < v118 );
    v117 = ptr;
  operator delete(v117);
  if ( v45 )
LABEL_79:
    operator delete(v45);
}


void __fastcall __noreturn std::rethrow_exception(std::__exception_ptr::exception_ptr *a1)
{
  int v1; // r5@1
  char *v2; // r0@1
  unsigned int *v3; // r5@1
  char *v4; // r4@1
  unsigned int v5; // r3@2
  int v6; // r0@3

  v1 = j_std::__exception_ptr::exception_ptr::_M_get(a1);
  v2 = j_j___cxa_allocate_dependent_exception();
  *(_DWORD *)v2 = v1;
  v3 = (unsigned int *)(v1 - 128);
  v4 = v2;
  __dmb();
  do
    v5 = __ldrex(v3);
  while ( __strex(v5 + 1, v3) );
  *((_DWORD *)v2 + 2) = j_std::get_unexpected();
  v6 = j_std::get_terminate();
  v4[32] = 71;
  v4[33] = 78;
  v4[34] = 85;
  v4[39] = 1;
  *((_DWORD *)v4 + 10) = sub_21B3A9C;
  v4[35] = 67;
  v4[36] = 67;
  v4[37] = 43;
  v4[38] = 43;
  *((_DWORD *)v4 + 3) = v6;
  j__Unwind_RaiseException();
}


int __fastcall std::__future_base::_Result<LevelArchiver::Result>::~_Result(int a1)
{
  int v1; // r4@1
  int v2; // r1@2
  void *v3; // r0@2
  unsigned int *v5; // r12@4
  signed int v6; // r1@6

  v1 = a1;
  *(_DWORD *)a1 = &off_2718978;
  if ( *(_BYTE *)(a1 + 16) )
  {
    v2 = *(_DWORD *)(a1 + 12);
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
  }
  sub_21E6218(v1);
  return v1;
}


int __fastcall std::_Function_base::_Base_manager<Concurrency::streams::details::streambuf_state_manager<char>::sync(void)::{lambda(bool)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<web::http::client::http_client_config::http_client_config(void)::{lambda(void *)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<web::http::client::details::asio_context::handle_read_content(boost::system::error_code const&)::{lambda(pplx::task<unsigned int>)#1}>::_M_manager(void ***a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void ***v4; // r4@1
  void **v5; // r0@2
  void **v6; // r1@4
  void *v7; // r1@4
  unsigned int *v8; // r1@5
  unsigned int v9; // r2@6
  void **v11; // r4@9
  void *v12; // r5@10
  unsigned int *v13; // r0@11
  unsigned int v14; // r1@12
  unsigned int *v15; // r6@14
  unsigned int v16; // r0@15

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'web::http::client::details::asio_context::handle_read_content(boost::system::error_code const&)::{lambda(pplx::task<unsigned int>)#1};
      goto LABEL_8;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(8u);
      v6 = *v3;
      *v5 = **v3;
      v7 = v6[1];
      v5[1] = v7;
      if ( v7 )
      {
        v8 = (unsigned int *)((char *)v7 + 4);
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 + 1, v8) );
      }
LABEL_8:
      *v4 = v5;
      return 0;
    case 3:
      v11 = *a1;
      if ( *a1 )
        v12 = v11[1];
        if ( v12 )
        {
          v13 = (unsigned int *)((char *)v12 + 4);
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          if ( v14 == 1 )
          {
            v15 = (unsigned int *)((char *)v12 + 8);
            (*(void (__fastcall **)(void *))(*(_DWORD *)v12 + 8))(v12);
            __dmb();
            do
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            if ( v16 == 1 )
              (*(void (__fastcall **)(void *))(*(_DWORD *)v12 + 12))(v12);
          }
        }
        j_operator delete(v11);
      break;
    default:
  }
  return 0;
}


void __fastcall std::default_delete<Certificate>::operator()(int a1, int a2)
{
  std::default_delete<Certificate>::operator()(a1, a2);
}


signed int __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_atom(int a1)
{
  int v1; // r10@1
  int v2; // r5@1
  int v3; // r0@3
  signed int result; // r0@5
  int v5; // r0@7
  signed int v6; // r0@11
  int v7; // r0@15
  int v8; // r0@24
  int *v9; // r6@31
  int v10; // r0@32
  int v11; // r0@37
  int v12; // r0@45
  int v13; // r1@45
  int v14; // r9@67
  int v15; // r8@67
  int v16; // r0@69
  int v17; // r0@77
  int v18; // r2@86
  int v19; // r8@86
  unsigned int v20; // r5@87
  unsigned int v21; // r1@87
  int v22; // r7@88
  int v23; // r4@88
  signed int v24; // r0@90
  int v25; // r6@93
  int v26; // r0@93
  int v27; // r0@97
  __int64 v28; // r8@100
  int v29; // r0@102
  __int64 v30; // r0@110
  int v31; // r5@111 OVERLAPPED
  int v32; // r6@111 OVERLAPPED
  int v33; // r0@111
  int v34; // r0@112
  int v35; // r0@112
  int v36; // r1@112
  int v37; // r0@113
  int v38; // r5@113
  int v39; // r0@113
  int v40; // r0@117
  __int64 v41; // r0@120
  int v42; // r6@121
  int v43; // r1@121
  int v44; // r0@122
  int v45; // r0@122
  int v46; // r0@126
  int v47; // r0@131

  v1 = a1;
  v2 = a1 + 12;
  if ( *(_DWORD *)(a1 + 144) )
  {
    if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(a1) == 1 )
    {
      v3 = *(_DWORD *)v1 & 8;
      if ( *(_DWORD *)v1 & 1 )
      {
        if ( v3 )
        {
          std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_char_matcher<true,true>(v1);
          result = 1;
        }
        else
          std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_char_matcher<true,false>(v1);
      }
      else if ( v3 )
        std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_char_matcher<false,true>(v1);
        result = 1;
      else
        std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_char_matcher<false,false>(v1);
      return result;
    }
    v6 = *(_DWORD *)(v1 + 144);
    if ( v6 <= 5 )
      if ( v6 == 4 )
        v9 = (int *)(v1 + 228);
        EntityInteraction::setInteractText((int *)(v1 + 228), (int *)(v1 + 172));
        if ( (unsigned int)*(_QWORD *)(v1 + 160) == *(_QWORD *)(v1 + 160) >> 32 )
          *(_DWORD *)(v1 + 144) = 28;
          v10 = *(_DWORD *)(v1 + 136);
          if ( v10 == 2 )
          {
            std::__detail::_Scanner<char>::_M_scan_in_bracket(v2);
          }
          else
            if ( v10 == 1 )
              std::__detail::_Scanner<char>::_M_scan_in_brace(v2);
            if ( !v10 )
              std::__detail::_Scanner<char>::_M_scan_normal(v2);
        v18 = *(_DWORD *)(v1 + 228);
        v19 = v1 + 184;
        if ( *(_DWORD *)(v18 - 12) )
          v20 = 0;
          v21 = 0;
          do
            v22 = *(_DWORD *)(v1 + 4);
            v23 = 10 * v21;
            if ( *(_DWORD *)(v18 - 4) >= 0 )
            {
              sub_119CB68((const void **)(v1 + 228));
              v18 = *v9;
            }
            v24 = std::regex_traits<char>::value(v22, *(_BYTE *)(v18 + v20), 10);
            v18 = *v9;
            v21 = v24 + v23;
            ++v20;
          while ( v20 < *(_DWORD *)(*v9 - 12) );
        v25 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_backref(v1 + 184, v21);
        v26 = *(_DWORD *)(v1 + 256);
        if ( v26 != *(_DWORD *)(v1 + 264) - 12 )
          *(_DWORD *)v26 = v19;
          *(_DWORD *)(v26 + 4) = v25;
          *(_DWORD *)(v26 + 8) = v25;
LABEL_126:
          v46 = *(_DWORD *)(v1 + 256) + 12;
LABEL_132:
          *(_DWORD *)(v1 + 256) = v46;
          return 1;
        if ( (unsigned int)((*(_QWORD *)(v1 + 232) >> 32)
                          - ((signed int)(*(_DWORD *)(v1 + 268) - *(_QWORD *)(v1 + 232)) >> 2)) <= 1 )
          std::deque<std::__detail::_StateSeq<std::regex_traits<char>>,std::allocator<std::__detail::_StateSeq<std::regex_traits<char>>>>::_M_reallocate_map(
            v1 + 232,
            1u,
            0);
        *(_DWORD *)(*(_DWORD *)(v1 + 268) + 4) = operator new(0x1F8u);
        v27 = *(_DWORD *)(v1 + 256);
        *(_DWORD *)v27 = v19;
        *(_DWORD *)(v27 + 4) = v25;
        *(_DWORD *)(v27 + 8) = v25;
LABEL_131:
        v47 = *(_DWORD *)(v1 + 268);
        *(_DWORD *)(v1 + 268) = v47 + 4;
        v46 = *(_DWORD *)(v47 + 4);
        *(_DWORD *)(v1 + 260) = v46;
        *(_DWORD *)(v1 + 264) = v46 + 504;
        goto LABEL_132;
      if ( v6 == 5 )
          v7 = *(_DWORD *)(v1 + 136);
          if ( v7 == 2 )
            if ( v7 == 1 )
            if ( !v7 )
        v14 = v1 + 184;
        v15 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_subexpr_begin(v1 + 184);
        std::__detail::_Compiler<std::regex_traits<char>>::_M_disjunction(v1);
        if ( *(_DWORD *)(v1 + 144) != 8 )
          sub_119E4A8(5);
          v16 = *(_DWORD *)(v1 + 136);
          if ( v16 == 2 )
            if ( v16 == 1 )
            if ( !v16 )
        v30 = *(_QWORD *)(v1 + 256);
        if ( (_DWORD)v30 == HIDWORD(v30) )
          *(_QWORD *)&v31 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v1 + 268) - 4) + 496);
          operator delete((void *)v30);
          v34 = *(_DWORD *)(v1 + 268);
          *(_DWORD *)(v1 + 268) = v34 - 4;
          v35 = *(_DWORD *)(v34 - 4);
          *(_DWORD *)(v1 + 260) = v35;
          v36 = v35 + 504;
          v33 = v35 + 492;
          *(_DWORD *)(v1 + 264) = v36;
          *(_QWORD *)&v31 = *(_QWORD *)(v30 - 8);
          v33 = v30 - 12;
        *(_DWORD *)(v1 + 256) = v33;
        *(_DWORD *)(*(_DWORD *)(v1 + 216) + 36 * v15 + 4) = v31;
        v37 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_subexpr_end(v1 + 184);
        v38 = v37;
        *(_DWORD *)(*(_DWORD *)(v1 + 216) + 36 * v32 + 4) = v37;
        v39 = *(_DWORD *)(v1 + 256);
        if ( v39 != *(_DWORD *)(v1 + 264) - 12 )
          *(_DWORD *)v39 = v14;
          *(_DWORD *)(v39 + 4) = v15;
LABEL_125:
          *(_DWORD *)(v39 + 8) = v38;
          goto LABEL_126;
        v40 = *(_DWORD *)(v1 + 256);
        *(_DWORD *)v40 = v14;
        *(_DWORD *)(v40 + 4) = v15;
LABEL_130:
        *(_DWORD *)(v40 + 8) = v38;
        goto LABEL_131;
LABEL_41:
      if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_bracket_expression(v1) != 1 )
        return 0;
      return 1;
    if ( v6 == 6 )
      EntityInteraction::setInteractText((int *)(v1 + 228), (int *)(v1 + 172));
      if ( (unsigned int)*(_QWORD *)(v1 + 160) == *(_QWORD *)(v1 + 160) >> 32 )
        *(_DWORD *)(v1 + 144) = 28;
        v11 = *(_DWORD *)(v1 + 136);
        if ( v11 == 2 )
          std::__detail::_Scanner<char>::_M_scan_in_bracket(v2);
          if ( v11 == 1 )
            std::__detail::_Scanner<char>::_M_scan_in_brace(v2);
          if ( !v11 )
            std::__detail::_Scanner<char>::_M_scan_normal(v2);
      LODWORD(v28) = v1 + 184;
      HIDWORD(v28) = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_dummy(v1 + 184);
      std::__detail::_Compiler<std::regex_traits<char>>::_M_disjunction(v1);
      if ( *(_DWORD *)(v1 + 144) != 8 )
        sub_119E4A8(5);
        v29 = *(_DWORD *)(v1 + 136);
        if ( v29 == 2 )
          if ( v29 == 1 )
          if ( !v29 )
      v41 = *(_QWORD *)(v1 + 256);
      if ( (_DWORD)v41 == HIDWORD(v41) )
        v38 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v1 + 268) - 4) + 496) >> 32;
        v42 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v1 + 268) - 4) + 496);
        operator delete((void *)v41);
        v44 = *(_DWORD *)(v1 + 268);
        *(_DWORD *)(v1 + 268) = v44 - 4;
        v45 = *(_DWORD *)(v44 - 4);
        *(_DWORD *)(v1 + 260) = v45;
        v43 = v45 + 504;
        v39 = v45 + 492;
        *(_DWORD *)(v1 + 264) = v43;
        v38 = *(_QWORD *)(v41 - 8) >> 32;
        v42 = *(_QWORD *)(v41 - 8);
        v39 = v41 - 12;
        v43 = *(_DWORD *)(v1 + 264);
      *(_DWORD *)(v1 + 256) = v39;
      *(_DWORD *)(*(_DWORD *)(v1 + 216) + 36 * HIDWORD(v28) + 4) = v42;
      if ( v39 != v43 - 12 )
        *(_QWORD *)v39 = v28;
        goto LABEL_125;
      if ( (unsigned int)((*(_QWORD *)(v1 + 232) >> 32)
                        - ((signed int)(*(_DWORD *)(v1 + 268) - *(_QWORD *)(v1 + 232)) >> 2)) <= 1 )
        std::deque<std::__detail::_StateSeq<std::regex_traits<char>>,std::allocator<std::__detail::_StateSeq<std::regex_traits<char>>>>::_M_reallocate_map(
          v1 + 232,
          1u,
          0);
      *(_DWORD *)(*(_DWORD *)(v1 + 268) + 4) = operator new(0x1F8u);
      v40 = *(_DWORD *)(v1 + 256);
      *(_QWORD *)v40 = v28;
      goto LABEL_130;
    if ( v6 != 14 )
      goto LABEL_41;
    EntityInteraction::setInteractText((int *)(v1 + 228), (int *)(v1 + 172));
    if ( (unsigned int)*(_QWORD *)(v1 + 160) == *(_QWORD *)(v1 + 160) >> 32 )
      *(_DWORD *)(v1 + 144) = 28;
    else
      v8 = *(_DWORD *)(v1 + 136);
      if ( v8 == 2 )
        std::__detail::_Scanner<char>::_M_scan_in_bracket(v2);
        if ( v8 == 1 )
          std::__detail::_Scanner<char>::_M_scan_in_brace(v2);
        if ( !v8 )
          std::__detail::_Scanner<char>::_M_scan_normal(v2);
    v17 = *(_DWORD *)v1 & 8;
    if ( *(_DWORD *)v1 & 1 )
      if ( v17 )
        std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_character_class_matcher<true,true>(v1);
        std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_character_class_matcher<true,false>(v1);
    else if ( v17 )
      std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_character_class_matcher<false,true>(v1);
      result = 1;
      std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_character_class_matcher<false,false>(v1);
  }
  else
    EntityInteraction::setInteractText((int *)(a1 + 228), (int *)(a1 + 172));
      v5 = *(_DWORD *)(v1 + 136);
      if ( v5 == 2 )
        if ( v5 == 1 )
        if ( !v5 )
    v12 = *(_DWORD *)v1 & 8;
    v13 = *(_DWORD *)v1 & 1;
    if ( *(_DWORD *)v1 & 0x10 )
      if ( v13 )
        if ( v12 )
          std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_ecma<true,true>(v1);
          std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_ecma<true,false>(v1);
      else if ( v12 )
        std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_ecma<false,true>(v1);
        std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_ecma<false,false>(v1);
      if ( !v13 )
        if ( !v12 )
          std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_posix<false,false>(v1);
        std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_posix<false,true>(v1);
        return 1;
      if ( v12 )
        std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_posix<true,true>(v1);
        std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_posix<true,false>(v1);
  return result;
}


void __fastcall __noreturn std::__detail::_Scanner<char>::_M_eat_class(int a1, int a2)
{
  std::__detail::_Scanner<char>::_M_eat_class(a1, a2);
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<std::shared_ptr<xbox::services::http_call_response>>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr const&<pplx::details::_ExceptionHolder>)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<std::shared_ptr<xbox::services::http_call_response>>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr const&<pplx::details::_ExceptionHolder>)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


int __fastcall std::__detail::_NFA<std::regex_traits<char>>::_M_insert_accept(int a1)
{
  int v1; // r4@1
  unsigned __int64 *v2; // r8@1
  __int64 v3; // kr00_8@1
  int v4; // r2@2
  int v5; // r5@2
  int v6; // r6@2
  int v7; // r7@2
  __int64 v8; // kr08_8@2
  void (*v9)(void); // r2@2
  int v10; // r2@2
  int v11; // r6@2
  int v12; // r4@4
  int v14; // [sp+0h] [bp-40h]@1
  int v15; // [sp+4h] [bp-3Ch]@1
  int v16; // [sp+8h] [bp-38h]@2
  int v17; // [sp+Ch] [bp-34h]@2
  int v18; // [sp+10h] [bp-30h]@2
  __int64 v19; // [sp+14h] [bp-2Ch]@2
  void (*v20)(void); // [sp+1Ch] [bp-24h]@1
  int v21; // [sp+20h] [bp-20h]@2

  v1 = a1;
  v14 = 11;
  v15 = -1;
  v20 = 0;
  v2 = (unsigned __int64 *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 36);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    std::vector<std::__detail::_State<std::regex_traits<char>>,std::allocator<std::__detail::_State<std::regex_traits<char>>>>::_M_emplace_back_aux<std::__detail::_State<std::regex_traits<char>>>(
      v2,
      (int)&v14);
    v11 = *(_DWORD *)(v1 + 36);
  }
  else
    v4 = v15;
    v5 = v16;
    v6 = v17;
    v7 = v18;
    *(_DWORD *)v3 = v14;
    *(_DWORD *)(v3 + 4) = v4;
    *(_DWORD *)(v3 + 8) = v5;
    *(_DWORD *)(v3 + 12) = v6;
    *(_DWORD *)(v3 + 16) = v7;
    *(_DWORD *)(v3 + 28) = 0;
    v8 = v19;
    v19 = *(_QWORD *)(v3 + 20);
    *(_QWORD *)(v3 + 20) = v8;
    v9 = v20;
    v20 = *(void (**)(void))(v3 + 28);
    *(_DWORD *)(v3 + 28) = v9;
    v10 = v21;
    v21 = *(_DWORD *)(v3 + 32);
    *(_DWORD *)(v3 + 32) = v10;
    v11 = *(_DWORD *)(a1 + 36) + 36;
    *(_DWORD *)(a1 + 36) = v11;
  v12 = *(_DWORD *)v2;
  if ( v20 )
    v20();
  return 954437177 * ((v11 - v12) >> 2) - 1;
}


void __fastcall std::default_delete<InventoryTransaction>::operator()(int a1, int a2)
{
  std::default_delete<InventoryTransaction>::operator()(a1, a2);
}


int __fastcall std::_Function_base::_Base_manager<MinecraftBindingFactoryMap::NullBindingFactory::getStringBinding(std::string const&)const::{lambda(void)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIDefRepositoryTests::UIDefRepository_ForEachControlWithMultipleControls_CallbackCalled(void)::{lambda(Json::Value const&,std::string const&)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // r6@1
  int v4; // r4@1
  _DWORD *v5; // r5@1
  _DWORD *v6; // r0@1
  int v7; // r5@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r6@8
  unsigned int v11; // r0@10

  v3 = a3;
  v4 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v5 = operator new(0x10u);
  *(_DWORD *)v4 = v5;
  v5[1] = 0;
  v5[2] = 0;
  *v5 = &off_26D532C;
  v5[3] = *v3;
  v6 = operator new(0x14u);
  v6[1] = 1;
  v6[2] = 1;
  *v6 = &off_26D5340;
  v6[4] = v5;
  v7 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = v6;
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
  return v4;
}


  if ( std::regex_traits<char>::isctype(*(_DWORD *)(v3 + 88), v2, *(_WORD *)(v3 + 80)) )
{
    v14 = 1;
  }
  else
  {
    v26 = (const void **)(*(_QWORD *)(v3 + 44) >> 32);
    v27 = *(_QWORD *)(v3 + 44);
    std::regex_traits<char>::transform_primary<char *>((int)&v43, *(_DWORD *)(v3 + 88), (int)&v45, (int)&v46);
    v28 = std::__find_if<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
            v27,
            v26,
            (const void **)&v43);
    v29 = *(const void ***)(v3 + 48);
    v30 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
    {
      v41 = (unsigned int *)(v43 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
      }
      else
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v30);
    }
    if ( v28 == v29 )
      v31 = (_WORD *)(*(_QWORD *)(v3 + 68) >> 32);
      v32 = (_WORD *)*(_QWORD *)(v3 + 68);
      if ( v32 != v31 )
        v33 = (int)(v31 - 1);
        {
          v28 = (const void **)((unsigned int)v28 & 0xFFFF0000 | *v32);
          v34 = std::regex_traits<char>::isctype(*(_DWORD *)(v3 + 88), v45, (unsigned int)v28) ^ 1;
          v35 = v33 == (_DWORD)v32;
          v14 |= v34;
          if ( (_WORD *)v33 != v32 )
          {
            ++v32;
            v35 = v34 == 1;
          }
        }
        while ( !v35 );
    else
      v14 = 1;
  v36 = (char *)s2 - 12;
  if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)((char *)s2 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v36);
LABEL_49:
  v37 = *(_BYTE *)(v3 + 92);
  if ( *(_BYTE *)(v3 + 92) )
    v37 = 1;
  return ((unsigned __int8)v37 ^ (unsigned __int8)v14) & 1;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIDefRepositoryTests::UIDefRepository_ForEachControlWithSubControls_CallbackCalled(void)::{lambda(Json::Value const&,std::string const&)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


void __fastcall std::__exception_ptr::exception_ptr::_M_release(std::__exception_ptr::exception_ptr *this)
{
  int v1; // r3@1
  unsigned int *v2; // r2@2
  unsigned int v3; // r1@3
  unsigned int v4; // r1@3
  void (__fastcall *v5)(int); // r3@5
  unsigned int *v6; // r4@5

  v1 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    v2 = (unsigned int *)(v1 - 128);
    __dmb();
    do
    {
      v3 = __ldrex(v2);
      v4 = v3 - 1;
    }
    while ( __strex(v4, v2) );
    if ( !v4 )
      v5 = *(void (__fastcall **)(int))(v1 - 116);
      v6 = (unsigned int *)this;
      if ( v5 )
        v5(*(_DWORD *)this);
      j_j___cxa_free_exception_1(*v6);
      *v6 = 0;
  }
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>::~_Impl(void *ptr)
{
  void *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = ptr;
  *(_DWORD *)ptr = &off_26D51AC;
  v2 = *((_DWORD *)ptr + 2);
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
  j_j_j__ZdlPv_3(v1);
}


_BOOL4 std::uncaught_exception(void)
{
  return std::uncaught_exception();
}


std::bad_exception *__fastcall std::bad_exception::~bad_exception(std::bad_exception *this)
{
  std::bad_exception *v1; // r4@1

  v1 = this;
  j_std::bad_exception::~bad_exception(this);
  j_operator delete((void *)v1);
  return v1;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<boost::asio::ssl::detail::openssl_init_base::do_init *>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<boost::asio::ssl::detail::openssl_init_base::do_init *>(
           a1,
           a2);
}


void __fastcall std::default_delete<DevConsoleLogger>::operator()(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r1@2
  void *v4; // r0@2
  char *v5; // r5@3
  void **v6; // r6@3
  __int64 v7; // kr00_8@3
  int v8; // r1@3
  void *v9; // r0@3
  __int64 v10; // kr08_8@4
  unsigned __int64 v11; // r2@4
  unsigned int *v12; // r2@6
  signed int v13; // r1@8
  unsigned int *v14; // r2@10
  signed int v15; // r1@12

  v2 = a2;
  if ( a2 )
  {
    v3 = *(_DWORD *)(a2 + 4484);
    v4 = (void *)(v3 - 12);
    if ( (int *)(v3 - 12) != &dword_28898C0 )
    {
      v12 = (unsigned int *)(v3 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9(v4);
    }
    v5 = (char *)(v2 + 4296);
    v6 = off_26D3F60;
    v7 = *(_QWORD *)off_26D3F80;
    *(_DWORD *)v5 = off_26D3F60;
    *(_DWORD *)((char *)*(v6 - 3) + (_DWORD)v5) = v7;
    *(_DWORD *)(v2 + 4304) = HIDWORD(v7);
    *(_DWORD *)(v2 + 4308) = &off_27734E8;
    v8 = *(_DWORD *)(v2 + 4344);
    v9 = (void *)(v8 - 12);
    if ( (int *)(v8 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v8 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j_j__ZdlPv_9(v9);
    *(_DWORD *)(v2 + 4308) = &off_26D40A8;
    sub_DA76D4((unsigned int **)(v2 + 4336));
    v10 = *(_QWORD *)&off_26D3F68;
    *(_DWORD *)v5 = off_26D3F68;
    *(_DWORD *)&v5[*(_DWORD *)(v10 - 12)] = HIDWORD(v10);
    *(_DWORD *)(v2 + 4300) = 0;
    sub_DA76E4((_DWORD *)(v2 + 4348));
    *(_DWORD *)(v2 + 4) = &off_26D679C;
    *(_DWORD *)(v2 + 4160) = &off_26D67C4;
    *(_DWORD *)(v2 + 12) = &off_26D67B0;
    Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)(v2 + 16), (int)&off_26D67C4, v11);
    *(_DWORD *)(v2 + 4) = &off_26D67DC;
    *(_DWORD *)(v2 + 4160) = &off_26D67F0;
    *(_DWORD *)(v2 + 8) = 0;
    sub_DA76E4((_DWORD *)(v2 + 4160));
    operator delete((void *)v2);
  }
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>::~_Impl(void *ptr)
{
  void *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = ptr;
  *(_DWORD *)ptr = &off_26D51AC;
  v2 = *((_DWORD *)ptr + 2);
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
  j_j_j__ZdlPv_3(v1);
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<CommandContext *,std::__shared_ptr<CommandContext *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CommandContext *>>,std::__shared_ptr<CommandContext *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CommandContext *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_26EB2C0;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


int std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_get_deleter()
{
  return 0;
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>(int a1, int a2, _DWORD *a3)
{
  return std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>(
           a1,
           a2,
           a3);
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIScreenControllerEventTests::UI_HandleEventInputModeChanged(void)::{lambda(InputModeChangeScreenEventData &)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


std::__exception_ptr::exception_ptr *__fastcall std::__exception_ptr::exception_ptr::exception_ptr(std::__exception_ptr::exception_ptr *this, const std::__exception_ptr::exception_ptr *a2)
{
  std::__exception_ptr::exception_ptr *v2; // r4@1

  v2 = this;
  *(_DWORD *)this = *(_DWORD *)a2;
  j_std::__exception_ptr::exception_ptr::_M_addref(this);
  return v2;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  void *v1; // r4@1

  v1 = *(void **)(a1 + 16);
  (**(void (__fastcall ***)(_DWORD))v1)(*(_DWORD *)(a1 + 16));
  j_j_j__ZdlPv_3(v1);
}


void __fastcall std::__future_base::_Result<LevelArchiver::Result>::~_Result(int a1)
{
  std::__future_base::_Result<LevelArchiver::Result>::~_Result(a1);
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  void *v1; // r4@1

  v1 = *(void **)(a1 + 16);
  (**(void (__fastcall ***)(_DWORD))v1)(*(_DWORD *)(a1 + 16));
  j_j_j__ZdlPv_3(v1);
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::game_server_platform::game_server_metadata_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::game_server_platform::game_server_metadata_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // r6@1
  int v4; // r4@1
  _DWORD *v5; // r5@1
  _DWORD *v6; // r0@1
  int v7; // r5@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r6@8
  unsigned int v11; // r0@10

  v3 = a3;
  v4 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v5 = operator new(0x10u);
  *(_DWORD *)v4 = v5;
  v5[1] = 0;
  v5[2] = 0;
  *v5 = &off_26D520C;
  v5[3] = *v3;
  v6 = operator new(0x14u);
  v6[1] = 1;
  v6[2] = 1;
  *v6 = &off_26D5220;
  v6[4] = v5;
  v7 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = v6;
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
  return v4;
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>::~_Impl(void *ptr)
{
  std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>::~_Impl(ptr);
}


  std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)
{
    (int)&v19,
    &v14);
  v17 = v15;
  v18 = v16;
  v15 = 0;
  v16 = 0;
  sub_DA7434(v2, (int)&v17);
  v3 = v18;
  if ( v18 )
  {
    v4 = (unsigned int *)(v18 + 4);
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
  v8 = v16;
  if ( v16 )
    v9 = (unsigned int *)(v16 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return v2;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<MapDecoration *,std::__shared_ptr<MapDecoration *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<MapDecoration *>>,std::__shared_ptr<MapDecoration *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<MapDecoration *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<MapDecoration *,std::__shared_ptr<MapDecoration *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<MapDecoration *>>,std::__shared_ptr<MapDecoration *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<MapDecoration *>>>(
           a1,
           a2);
}


const char *__fastcall std::bad_typeid::what(std::bad_typeid *this)
{
  return "std::bad_typeid";
}


signed int __fastcall std::regex_traits<char>::value(int a1, int a2, int a3)
{
  int v3; // r4@1
  void *v4; // r0@1
  char *v5; // r0@4
  unsigned int v6; // r1@4
  signed int v7; // r5@7
  int v8; // r6@7
  void *v9; // r0@9
  unsigned int *v11; // r2@11
  signed int v12; // r1@13
  unsigned int *v13; // r2@15
  signed int v14; // r1@17
  signed int v15; // [sp+0h] [bp-D8h]@0
  int v16; // [sp+8h] [bp-D0h]@1
  void **v17; // [sp+Ch] [bp-CCh]@1
  int v18; // [sp+10h] [bp-C8h]@10
  void **v19; // [sp+14h] [bp-C4h]@7
  int v20; // [sp+30h] [bp-A8h]@10
  int v21; // [sp+38h] [bp-A0h]@9
  int v22; // [sp+3Ch] [bp-9Ch]@10

  v3 = a3;
  sub_119E50C(&v16, 1u, a2);
  sub_119CA28((int)&v17, (unsigned int *)&v16, 8);
  v4 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  if ( v3 == 16 )
    v5 = (char *)*(v17 - 3) + (_DWORD)&v17;
    v6 = *((_DWORD *)v5 + 3) & 0xFFFFFFB5 | 8;
  else
    if ( v3 != 8 )
      goto LABEL_7;
    v6 = *((_DWORD *)v5 + 3) & 0xFFFFFFB5 | 0x40;
  *((_DWORD *)v5 + 3) = v6;
LABEL_7:
  sub_119E51C((char *)&v17);
  v7 = v15;
  v8 = *(_DWORD *)((char *)*(v17 - 3) + (_DWORD)&v17 + 20);
  v17 = off_26D3EF0;
  *(_DWORD *)((char *)*(off_26D3EF0 - 3) + (_DWORD)&v17) = off_26D3EFC;
  v19 = &off_27734E8;
  if ( v8 & 5 )
    v7 = -1;
  v9 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v21 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v19 = &off_26D40A8;
  sub_119C954((unsigned int **)&v20);
  v17 = (void **)off_26D3EF4;
  *(void ***)((char *)&v17 + *((_DWORD *)off_26D3EF4 - 3)) = (void **)off_26D3EF8;
  v18 = 0;
  sub_119C964(&v22);
  return v7;
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<std::string *,std::__shared_ptr<std::string,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::string>>,std::__shared_ptr<std::string,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    (int)v2);
  v4 = v10;
  v10 = *(_DWORD *)(v1 + 4);
  v3 = v10;
  *(_DWORD *)(v1 + 4) = v4;
  if ( v3 )
  {
    v5 = (unsigned int *)(v3 + 4);
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
      v7 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  return v1;
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<SkinPackModel *,std::__shared_ptr<SkinPackModel *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<SkinPackModel *>>,std::__shared_ptr<SkinPackModel *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    *(_DWORD *)v4);
  v9 = v15;
  v15 = *(_DWORD *)(v4 + 4);
  v8 = v15;
  *(_DWORD *)(v4 + 4) = v9;
  if ( v8 )
  {
    v10 = (unsigned int *)(v8 + 4);
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
      v12 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  return v4;
}


int __fastcall std::_Function_base::_Base_manager<serialize<ShapelessRecipe>::read(ReadOnlyBinaryStream &)::{lambda(ReadOnlyBinaryStream &)#2}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


void __noreturn std::__throw_bad_weak_ptr(void)
{
  char *v0; // r0@1

  v0 = j___cxa_allocate_exception(4);
  *(_DWORD *)v0 = &off_2773F78;
  j___cxa_throw((int)v0, (int)&off_2773F88, (int)sub_21E6AE8, (int)&off_2773F78);
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::real_time_activity::real_time_activity_service *>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1
  __int64 v5; // r1@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = j_operator new(0x10u);
  HIDWORD(v5) = 1;
  LODWORD(v5) = &off_27652B8;
  *(_QWORD *)v4 = v5;
  v4[2] = 1;
  v4[3] = v3;
  *v2 = v4;
  return v2;
}


int __fastcall std::_Function_base::_Base_manager<serialize<ShapelessRecipe>::write(ShapelessRecipe const&,BinaryStream &)::{lambda(BinaryStream &,ItemInstance const&)#2}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


void __fastcall std::default_delete<EndDragonFight>::operator()(int a1, int a2)
{
  std::default_delete<EndDragonFight>::operator()(a1, a2);
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>(int a1, int a2, _DWORD *a3)
{
  return std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>(
           a1,
           a2,
           a3);
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>(int a1, int a2, _DWORD *a3)
{
  return std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>(
           a1,
           a2,
           a3);
}


int __fastcall std::__exception_ptr::exception_ptr::exception_ptr(int result)
{
  *(_DWORD *)result = 0;
  return result;
}


int __fastcall std::_Function_base::_Base_manager<Concurrency::streams::details::streambuf_state_manager<char>::putn(char const*,unsigned int)::{lambda(unsigned int)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<CallbackTokenContext<std::function<void ()(Social::UserPlatformConnectionResult)>> *,std::__shared_ptr<CallbackTokenContext<std::function<void ()(Social::UserPlatformConnectionResult)>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CallbackTokenContext<std::function<void ()(Social::UserPlatformConnectionResult)>> *>>,std::__shared_ptr<CallbackTokenContext<std::function<void ()(Social::UserPlatformConnectionResult)>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CallbackTokenContext<std::function<void ()(Social::UserPlatformConnectionResult)>> *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<CallbackTokenContext<std::function<void ()(Social::UserPlatformConnectionResult)>> *,std::__shared_ptr<CallbackTokenContext<std::function<void ()(Social::UserPlatformConnectionResult)>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CallbackTokenContext<std::function<void ()(Social::UserPlatformConnectionResult)>> *>>,std::__shared_ptr<CallbackTokenContext<std::function<void ()(Social::UserPlatformConnectionResult)>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CallbackTokenContext<std::function<void ()(Social::UserPlatformConnectionResult)>> *>>>(
           a1,
           a2);
}


int __fastcall std::_Function_base::_Base_manager<Concurrency::streams::details::streambuf_state_manager<char>::putn_nocopy(char const*,unsigned int)::{lambda(unsigned int)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


int __fastcall std::promise<void>::set_value(unsigned __int64 *a1)
{
  unsigned __int64 *v1; // r5@1
  unsigned __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  _DWORD *v5; // r0@7
  int result; // r0@8
  unsigned int *v7; // r1@11
  unsigned int *v8; // r5@17
  _DWORD *v9; // [sp+4h] [bp-3Ch]@7
  int (*v10)(void); // [sp+Ch] [bp-34h]@7
  const char *v11; // [sp+10h] [bp-30h]@7
  char *v12; // [sp+14h] [bp-2Ch]@7
  int *v13; // [sp+18h] [bp-28h]@7
  int v14; // [sp+1Ch] [bp-24h]@7
  int (***(__fastcall *v15)(int, int, _BYTE *))(void); // [sp+20h] [bp-20h]@7
  int v16; // [sp+24h] [bp-1Ch]@7
  char v17; // [sp+2Bh] [bp-15h]@7

  v1 = a1;
  v2 = *a1;
  if ( *a1 >> 32 )
  {
    v3 = (unsigned int *)(HIDWORD(v2) + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
    }
    else
      ++*v3;
  }
  v5 = operator new(4u);
  *v5 = v1;
  v9 = v5;
  v10 = (int (*)(void))std::_Function_base::_Base_manager<std::__future_base::_State_baseV2::_Setter<void,void>>::_M_manager;
  v11 = "h\th\nh";
  v17 = 0;
  v16 = 0;
  v14 = v2;
  v15 = std::__future_base::_State_baseV2::_M_do_set;
  v13 = (int *)&v9;
  v12 = &v17;
  std::call_once<void (std::__future_base::_State_baseV2::*)(std::function<std::unique_ptr<std::__future_base::_Result_base,std::__future_base::_Result_base::_Deleter> ()(void)> &,bool &),std::__future_base::_State_baseV2*,std::reference_wrapper<std::function<std::unique_ptr<std::__future_base::_Result_base,std::__future_base::_Result_base::_Deleter> ()(void)>>,std::reference_wrapper<bool>>(
    (pthread_once_t *)(v2 + 20),
    (__int64 *)&v15,
    &v14,
    (int *)&v13,
    (int *)&v12);
  if ( !v17 )
    sub_DA8A94(2);
  result = sub_DA83A0((pthread_cond_t *)(v2 + 12));
  if ( v10 )
    result = v10();
  if ( HIDWORD(v2) )
    v7 = (unsigned int *)(HIDWORD(v2) + 4);
        result = __ldrex(v7);
      while ( __strex(result - 1, v7) );
      result = (*v7)--;
    if ( result == 1 )
      v8 = (unsigned int *)(HIDWORD(v2) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 8))(HIDWORD(v2));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v8);
        while ( __strex(result - 1, v8) );
      }
      else
        result = (*v8)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  return result;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIScreenControllerBindTests::UI_BindBoolInCollection(void)::{lambda(int)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


int __fastcall std::promise<Legacy::WorldConversionReport>::promise(int a1)
{
  int v1; // r5@1
  void *v2; // r0@1
  int v3; // r0@1

  v1 = a1;
  j__ZNSt12__shared_ptrINSt13__future_base13_State_baseV2ELN9__gnu_cxx12_Lock_policyE2EEC2ISaIS1_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_(a1);
  v2 = operator new(0x30u);
  v3 = sub_21E61FC((int)v2);
  *(_DWORD *)v3 = &off_26E867C;
  *(_BYTE *)(v3 + 40) = 0;
  *(_DWORD *)(v1 + 8) = v3;
  return v1;
}


void __fastcall std::swap<InputHandler::InputHandlerState>(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r8@1
  void *v4; // r2@1
  unsigned int v5; // r1@1
  int v6; // r0@1
  __int64 v7; // kr00_8@1
  int *v8; // r6@2
  void *v9; // r0@6
  void *v10; // r4@7
  void *v11; // r4@11
  int v12; // r6@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  int *v15; // r0@21
  __int64 v16; // [sp+0h] [bp-58h]@1
  void *v17; // [sp+8h] [bp-50h]@1
  void *v18; // [sp+Ch] [bp-4Ch]@1
  int v19; // [sp+10h] [bp-48h]@1
  void *v20; // [sp+14h] [bp-44h]@1
  int v21; // [sp+18h] [bp-40h]@1
  void *ptr; // [sp+1Ch] [bp-3Ch]@1
  int v23; // [sp+20h] [bp-38h]@1
  int v24; // [sp+24h] [bp-34h]@1
  int v25; // [sp+28h] [bp-30h]@1
  int v26; // [sp+2Ch] [bp-2Ch]@3
  __int16 v27; // [sp+30h] [bp-28h]@6

  v2 = a1;
  v3 = a2;
  v16 = *(_QWORD *)a1;
  v17 = *(void **)(a1 + 8);
  *(_DWORD *)(a1 + 8) = 0;
  v18 = *(void **)(a1 + 12);
  *(_DWORD *)(a1 + 12) = 0;
  v19 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 16) = 0;
  v4 = *(void **)(a1 + 20);
  v20 = v4;
  v5 = *(_DWORD *)(a1 + 24);
  v21 = *(_DWORD *)(a1 + 24);
  v6 = *(_DWORD *)(a1 + 28);
  ptr = (void *)v6;
  v23 = *(_DWORD *)(v2 + 32);
  v7 = *(_QWORD *)(v2 + 36);
  v24 = *(_QWORD *)(v2 + 36);
  v25 = HIDWORD(v7);
  if ( (void *)(v2 + 44) == v4 )
  {
    v8 = &v26;
    v20 = &v26;
    v26 = *(_DWORD *)v4;
  }
  else
    v8 = (int *)v4;
  if ( v6 )
    v8[*(_WORD *)(v6 + 4) % v5] = (int)&ptr;
  *(_DWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 44) = 0;
  *(_DWORD *)(v2 + 20) = v2 + 44;
  *(_DWORD *)(v2 + 24) = 1;
  *(_DWORD *)(v2 + 28) = 0;
  *(_DWORD *)(v2 + 32) = 0;
  v27 = *(_WORD *)(v2 + 48);
  InputHandler::InputHandlerState::operator=(v2, v3);
  InputHandler::InputHandlerState::operator=(v3, (int)&v16);
  v9 = ptr;
  if ( ptr )
    do
    {
      v10 = *(void **)v9;
      operator delete(v9);
      v9 = v10;
    }
    while ( v10 );
  _aeabi_memclr4(v20, 4 * v21);
  ptr = 0;
  v23 = 0;
  if ( v20 && &v26 != v20 )
    operator delete(v20);
  v12 = (int)v18;
  v11 = v17;
  if ( v17 != v18 )
      v15 = (int *)(*(_DWORD *)v11 - 12);
      if ( v15 != &dword_28898C0 )
      {
        v13 = (unsigned int *)(*(_DWORD *)v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        }
        else
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      }
      v11 = (char *)v11 + 4;
    while ( v11 != (void *)v12 );
    v11 = v17;
  if ( v11 )
    operator delete(v11);
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<CallbackTokenContext<std::function<void ()(Legacy::RetrieveStatus)>> *,std::__shared_ptr<CallbackTokenContext<std::function<void ()(Legacy::RetrieveStatus)>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CallbackTokenContext<std::function<void ()(Legacy::RetrieveStatus)>> *>>,std::__shared_ptr<CallbackTokenContext<std::function<void ()(Legacy::RetrieveStatus)>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CallbackTokenContext<std::function<void ()(Legacy::RetrieveStatus)>> *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_26E519C;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIDefRepositoryTests::UIDefRepository_ForEachControlWithSingleControl_CallbackCalled(void)::{lambda(Json::Value const&,std::string const&)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<Concurrency::streams::details::basic_ostream_helper<unsigned char> *,std::__shared_ptr<Concurrency::streams::details::basic_ostream_helper<unsigned char> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Concurrency::streams::details::basic_ostream_helper<unsigned char> *>>,std::__shared_ptr<Concurrency::streams::details::basic_ostream_helper<unsigned char> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    *(_DWORD *)v3);
  v14 = v20;
  v20 = *(_DWORD *)(v3 + 4);
  v13 = v20;
  *(_DWORD *)(v3 + 4) = v14;
  if ( v13 )
  {
    v15 = (unsigned int *)(v13 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      }
      else
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  }
  return v3;
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::system::xbox_live_user *,std::__shared_ptr<xbox::services::system::xbox_live_user *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<xbox::services::system::xbox_live_user *>>,std::__shared_ptr<xbox::services::system::xbox_live_user *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    *(_DWORD *)v1);
  v3 = v16;
  v4 = *(_DWORD *)(v1 + 4);
  v16 = *(_DWORD *)(v1 + 4);
  *(_DWORD *)(v1 + 4) = v3;
  v5 = *(_DWORD *)v1;
  if ( *(_DWORD *)v1 )
  {
    *(_DWORD *)v5 = v5;
    if ( v3 )
    {
      v6 = (unsigned int *)(v3 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 + 1, v6) );
      }
      else
        ++*v6;
    }
    v8 = *(_DWORD *)(v5 + 4);
    if ( v8 )
      v9 = (unsigned int *)(v8 + 8);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 == 1 )
        (*(void (**)(void))(*(_DWORD *)v8 + 12))();
    *(_DWORD *)(v5 + 4) = v3;
    v4 = v16;
  }
  if ( v4 )
    v11 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return v1;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::game_server_platform::allocation_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::game_server_platform::allocation_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


const char *__fastcall std::bad_cast::what(std::bad_cast *this)
{
  return "std::bad_cast";
}


void __fastcall std::__future_base::_Result<Legacy::WorldConversionReport>::~_Result(int a1)
{
  void *v1; // r4@1

  v1 = (void *)a1;
  *(_DWORD *)a1 = &off_26E867C;
  if ( *(_BYTE *)(a1 + 40) )
    Legacy::WorldConversionReport::~WorldConversionReport((Legacy::WorldConversionReport *)(a1 + 8));
  sub_21E6218((int)v1);
  j_j_j__ZdlPv_5(v1);
}


int __fastcall std::_Function_base::_Base_manager<TextPacket::write(BinaryStream &)const::{lambda(BinaryStream &,std::string const&)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


void __fastcall __noreturn std::make_exception_ptr<web::http::http_exception>(int a1, int a2)
{
  std::make_exception_ptr<web::http::http_exception>(a1, a2);
}


int __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>::_M_run(int a1)
{
  int v1; // r4@1
  unsigned __int8 *v2; // r5@1
  unsigned int v3; // r1@2
  _BYTE *v4; // r0@4
  int v5; // r0@5
  int v6; // r0@8
  int result; // r0@9

  v1 = *(_DWORD *)(a1 + 12);
  v2 = (unsigned __int8 *)(v1 + 40);
  do
  {
    do
      v3 = __ldrex(v2);
    while ( __strex(1u, v2) );
    __dmb();
  }
  while ( v3 );
  v4 = *(_BYTE **)(v1 + 24);
  if ( v4 == (_BYTE *)(*(_DWORD *)(v1 + 32) - 1) )
    if ( (unsigned int)((*(_QWORD *)v1 >> 32) - ((signed int)(*(_DWORD *)(v1 + 36) - *(_QWORD *)v1) >> 2)) <= 1 )
      std::deque<char,std::allocator<char>>::_M_reallocate_map(v1, 1u, 0);
    *(_DWORD *)(*(_DWORD *)(v1 + 36) + 4) = operator new(0x200u);
    **(_BYTE **)(v1 + 24) = 97;
    v6 = *(_DWORD *)(v1 + 36);
    *(_DWORD *)(v1 + 36) = v6 + 4;
    v5 = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v1 + 28) = v5;
    *(_DWORD *)(v1 + 32) = v5 + 512;
  else
    *v4 = 97;
    v5 = *(_DWORD *)(v1 + 24) + 1;
  *(_DWORD *)(v1 + 24) = v5;
  result = 0;
  __dmb();
  *v2 = 0;
  return result;
}


void __fastcall std::default_delete<BaseAttributeMap>::operator()(int a1, int a2)
{
  std::default_delete<BaseAttributeMap>::operator()(a1, a2);
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<SkinPackModel *,std::__shared_ptr<SkinPackModel *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<SkinPackModel *>>,std::__shared_ptr<SkinPackModel *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    *(_DWORD *)v5);
  v11 = v17;
  v17 = *(_DWORD *)(v5 + 4);
  v10 = v17;
  *(_DWORD *)(v5 + 4) = v11;
  if ( v10 )
  {
    v12 = (unsigned int *)(v10 + 4);
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
      v14 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  }
  return v5;
}


int __fastcall std::_Function_base::_Base_manager<Concurrency::streams::details::streambuf_state_manager<char>::close(std::_Ios_Openmode)::{lambda(void)#2}>::_M_manager(_DWORD *a1, void **a2, int a3)
{
  void **v3; // r5@1
  _DWORD *v4; // r4@1
  _DWORD *v5; // r0@4
  int v6; // r4@5
  int v7; // r5@6
  unsigned int *v8; // r1@7
  unsigned int v9; // r0@9
  _DWORD *v10; // r1@11
  int v11; // r1@11
  unsigned int *v12; // r1@12
  unsigned int v13; // r2@14
  unsigned int *v15; // r6@20
  unsigned int v16; // r0@22

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *a1 )
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
          v15 = (unsigned int *)(v7 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          if ( &pthread_create )
          {
            __dmb();
            do
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
          }
          else
            v16 = (*v15)--;
          if ( v16 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
      }
      operator delete((void *)v6);
    }
  }
  else
    if ( a3 == 2 )
      v5 = operator new(8u);
      v10 = *v3;
      *v5 = *(_DWORD *)*v3;
      v11 = v10[1];
      v5[1] = v11;
      if ( v11 )
        v12 = (unsigned int *)(v11 + 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 + 1, v12) );
          ++*v12;
      goto LABEL_17;
    if ( a3 == 1 )
      v5 = *a2;
LABEL_17:
      *v4 = v5;
      return 0;
  return 0;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<std::unordered_map<ResourceLocation,mce::ImageBuffer const*,std::hash<mce>,std::equal_to<mce>,std::allocator<std::pair<mce const,std::hash>>> *,std::__shared_ptr<std::unordered_map<ResourceLocation,mce::ImageBuffer const*,std::hash<mce>,std::equal_to<mce>,std::allocator<std::pair<mce const,std::hash>>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::unordered_map<ResourceLocation,mce::ImageBuffer const*,std::hash<mce>,std::equal_to<mce>,std::allocator<std::pair<mce const,std::hash>>> *>>,std::__shared_ptr<std::unordered_map<ResourceLocation,mce::ImageBuffer const*,std::hash<mce>,std::equal_to<mce>,std::allocator<std::pair<mce const,std::hash>>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::unordered_map<ResourceLocation,mce::ImageBuffer const*,std::hash<mce>,std::equal_to<mce>,std::allocator<std::pair<mce const,std::hash>>> *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<std::unordered_map<ResourceLocation,mce::ImageBuffer const*,std::hash<mce>,std::equal_to<mce>,std::allocator<std::pair<mce const,std::hash>>> *,std::__shared_ptr<std::unordered_map<ResourceLocation,mce::ImageBuffer const*,std::hash<mce>,std::equal_to<mce>,std::allocator<std::pair<mce const,std::hash>>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::unordered_map<ResourceLocation,mce::ImageBuffer const*,std::hash<mce>,std::equal_to<mce>,std::allocator<std::pair<mce const,std::hash>>> *>>,std::__shared_ptr<std::unordered_map<ResourceLocation,mce::ImageBuffer const*,std::hash<mce>,std::equal_to<mce>,std::allocator<std::pair<mce const,std::hash>>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::unordered_map<ResourceLocation,mce::ImageBuffer const*,std::hash<mce>,std::equal_to<mce>,std::allocator<std::pair<mce const,std::hash>>> *>>>(
           a1,
           a2);
}


int __fastcall std::_Function_base::_Base_manager<web::http::client::details::asio_context::start_request(void)::{lambda(std::shared_ptr<web::http::client::details::asio_context>)#1}>::_M_manager(int *a1, int *a2, int a3)
{
  int *v3; // r6@1
  int *v4; // r4@1
  void *v5; // r0@4
  int v6; // r6@4
  _DWORD *v7; // r5@4
  int v8; // r4@5
  int v9; // r1@6
  void *v10; // r0@6
  unsigned int *v12; // r1@9
  signed int v13; // r2@10

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      *a1 = (int)&`typeinfo for'web::http::client::details::asio_context::start_request(void)::{lambda(std::shared_ptr<web::http::client::details::asio_context>)#1};
      break;
    case 1:
      *a1 = *a2;
    case 2:
      v5 = j_operator new(0xCu);
      v6 = *v3;
      v7 = v5;
      *(_DWORD *)v5 = *(_DWORD *)v6;
      sub_21E8AF4((int *)v5 + 1, (int *)(v6 + 4));
      v7[2] = *(_DWORD *)(v6 + 8);
      *v4 = (int)v7;
    case 3:
      v8 = *a1;
      if ( *a1 )
      {
        v9 = *(_DWORD *)(v8 + 4);
        v10 = (void *)(v9 - 12);
        if ( (int *)(v9 - 12) != &dword_28898C0 )
        {
          v12 = (unsigned int *)(v9 - 4);
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          if ( v13 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        }
        j_operator delete((void *)v8);
      }
    default:
      return 0;
  }
  return 0;
}


  if ( std::regex_traits<char>::isctype(*(_DWORD *)(v2 + 84), a2, *(_WORD *)(v2 + 80)) )
{
    v13 = 1;
  }
  else
  {
    v16 = (const void **)(*(_QWORD *)(v2 + 44) >> 32);
    v17 = *(_QWORD *)(v2 + 44);
    std::regex_traits<char>::transform_primary<char *>((int)&v29, *(_DWORD *)(v2 + 84), (int)&v30, (int)&v31);
    v18 = std::__find_if<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
            v17,
            v16,
            (const void **)&v29);
    v19 = *(const void ***)(v2 + 48);
    v20 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
    {
      v27 = (unsigned int *)(v29 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
      }
      else
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v20);
    }
    if ( v18 == v19 )
      v21 = (_WORD *)(*(_QWORD *)(v2 + 68) >> 32);
      v22 = (_WORD *)*(_QWORD *)(v2 + 68);
      if ( v22 != v21 )
        v23 = (int)(v21 - 1);
        {
          v18 = (const void **)((unsigned int)v18 & 0xFFFF0000 | *v22);
          v24 = std::regex_traits<char>::isctype(*(_DWORD *)(v2 + 84), v30, (unsigned int)v18) ^ 1;
          v13 |= v24;
          if ( (_WORD *)v23 == v22 )
            break;
          ++v22;
        }
        while ( v24 != 1 );
    else
      v13 = 1;
LABEL_37:
  v25 = *(_BYTE *)(v2 + 88);
  if ( *(_BYTE *)(v2 + 88) )
    v25 = 1;
  return ((unsigned __int8)v25 ^ (unsigned __int8)v13) & 1;
}


int __fastcall std::_Function_base::_Base_manager<CraftingEventPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


int std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_get_deleter()
{
  return 0;
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>::~_Impl(void *ptr)
{
  void *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = ptr;
  *(_DWORD *)ptr = &off_26D51AC;
  v2 = *((_DWORD *)ptr + 2);
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
  j_j_j__ZdlPv_3(v1);
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  void *v1; // r4@1

  v1 = *(void **)(a1 + 16);
  (**(void (__fastcall ***)(_DWORD))v1)(*(_DWORD *)(a1 + 16));
  j_j_j__ZdlPv_3(v1);
}


int __fastcall std::_Function_base::_Base_manager<web::http::http_request::extract_string(bool)::{lambda(unsigned long long)#1}>::_M_manager(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD **v3; // r5@1
  _DWORD *v4; // r4@1
  _DWORD *v5; // r0@4
  _DWORD *v6; // r1@4
  int v7; // r2@4
  unsigned int *v8; // r2@5
  unsigned int v9; // r3@7
  int v10; // r4@9
  int v11; // r5@10
  unsigned int *v12; // r1@11
  unsigned int v13; // r0@13
  unsigned int *v14; // r7@19
  unsigned int v15; // r0@21

  v3 = (_DWORD **)a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      *a1 = &`typeinfo for'web::http::http_request::extract_string(bool)::{lambda(unsigned long long)#1};
      break;
    case 1:
      *a1 = *a2;
    case 2:
      v5 = j_operator new(0xCu);
      v6 = *v3;
      *v5 = **v3;
      v7 = v6[1];
      v5[1] = v7;
      if ( v7 )
      {
        v8 = (unsigned int *)(v7 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 + 1, v8) );
        }
        else
          ++*v8;
      }
      *((_BYTE *)v5 + 8) = *((_BYTE *)v6 + 8);
      *v4 = v5;
    case 3:
      v10 = *a1;
      if ( *a1 )
        v11 = *(_DWORD *)(v10 + 4);
        if ( v11 )
          v12 = (unsigned int *)(v11 + 4);
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
            v14 = (unsigned int *)(v11 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
            if ( &pthread_create )
            {
              __dmb();
              do
                v15 = __ldrex(v14);
              while ( __strex(v15 - 1, v14) );
            }
            else
              v15 = (*v14)--;
            if ( v15 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
        j_operator delete((void *)v10);
    default:
      return 0;
  }
  return 0;
}


int __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>::_M_run(int a1)
{
  int v1; // r5@1
  unsigned __int8 *v2; // r4@1
  unsigned int v3; // r1@2
  int v4; // r0@4
  int v5; // r0@6
  int v6; // r0@7
  int result; // r0@9

  v1 = *(_DWORD *)(a1 + 12);
  v2 = (unsigned __int8 *)(v1 + 40);
  do
  {
    do
      v3 = __ldrex(v2);
    while ( __strex(1u, v2) );
    __dmb();
  }
  while ( v3 );
  v4 = *(_DWORD *)(v1 + 8);
  if ( *(_DWORD *)(v1 + 24) != v4 )
    if ( v4 == *(_DWORD *)(v1 + 16) - 1 )
    {
      operator delete(*(void **)(v1 + 12));
      v6 = *(_DWORD *)(v1 + 20);
      *(_DWORD *)(v1 + 20) = v6 + 4;
      v5 = *(_DWORD *)(v6 + 4);
      *(_DWORD *)(v1 + 12) = v5;
      *(_DWORD *)(v1 + 16) = v5 + 512;
    }
    else
      v5 = v4 + 1;
    *(_DWORD *)(v1 + 8) = v5;
  result = 0;
  __dmb();
  *v2 = 0;
  return result;
}


int __fastcall std::_Function_base::_Base_manager<TextPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<ViewBindTestScreenController::ViewBindTestScreenController(NameRegistry &)::{lambda(void)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<Concurrency::streams::details::basic_ostream_helper<unsigned char> *,std::__shared_ptr<Concurrency::streams::details::basic_ostream_helper<unsigned char> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Concurrency::streams::details::basic_ostream_helper<unsigned char> *>>,std::__shared_ptr<Concurrency::streams::details::basic_ostream_helper<unsigned char> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Concurrency::streams::details::basic_ostream_helper<unsigned char> *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_26EC074;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


int __fastcall std::__detail::_NFA<std::regex_traits<char>>::_M_insert_lookahead(int a1, int a2, char a3)
{
  int v3; // r10@1
  unsigned __int64 *v4; // r11@1
  __int64 v5; // kr00_8@1
  signed int v6; // r4@2
  int v7; // r5@2
  int v8; // r6@2
  int v9; // r7@2
  __int64 v10; // r1@2
  int v11; // r3@2
  int v12; // r7@2
  int v13; // r4@4
  signed int v15; // [sp+0h] [bp-70h]@1
  signed int v16; // [sp+4h] [bp-6Ch]@1
  int v17; // [sp+8h] [bp-68h]@1
  int v18; // [sp+Ch] [bp-64h]@1
  int v19; // [sp+10h] [bp-60h]@1
  __int64 v20; // [sp+14h] [bp-5Ch]@2
  void (__fastcall *v21)(__int64 *, __int64 *, signed int); // [sp+1Ch] [bp-54h]@1
  int v22; // [sp+20h] [bp-50h]@2
  int v23; // [sp+28h] [bp-48h]@1
  int v24; // [sp+2Ch] [bp-44h]@1
  int v25; // [sp+30h] [bp-40h]@1
  int v26; // [sp+34h] [bp-3Ch]@1
  char v27; // [sp+38h] [bp-38h]@1
  void (*v28)(void); // [sp+44h] [bp-2Ch]@1

  v3 = a1;
  v23 = 6;
  v24 = -1;
  v26 = a2;
  v27 = a3;
  v4 = (unsigned __int64 *)(a1 + 32);
  v15 = 6;
  v16 = -1;
  v17 = v25;
  v18 = a2;
  v19 = *(_DWORD *)&v27;
  v28 = 0;
  v21 = 0;
  v5 = *(_QWORD *)(a1 + 36);
  if ( (_DWORD)v5 == HIDWORD(v5) )
  {
    std::vector<std::__detail::_State<std::regex_traits<char>>,std::allocator<std::__detail::_State<std::regex_traits<char>>>>::_M_emplace_back_aux<std::__detail::_State<std::regex_traits<char>>>(
      v4,
      (int)&v15);
    v12 = *(_DWORD *)(v3 + 36);
  }
  else
    v6 = v16;
    v7 = v17;
    v8 = v18;
    v9 = v19;
    *(_DWORD *)v5 = v15;
    *(_DWORD *)(v5 + 4) = v6;
    *(_DWORD *)(v5 + 8) = v7;
    *(_DWORD *)(v5 + 12) = v8;
    *(_DWORD *)(v5 + 16) = v9;
    *(_DWORD *)(v5 + 28) = 0;
    v10 = v20;
    v11 = *(_QWORD *)(v5 + 20);
    v20 = *(_QWORD *)(v5 + 20);
    *(_QWORD *)(v5 + 20) = v10;
    HIDWORD(v10) = v21;
    v21 = *(void (__fastcall **)(__int64 *, __int64 *, signed int))(v5 + 28);
    *(_DWORD *)(v5 + 28) = HIDWORD(v10);
    HIDWORD(v10) = v22;
    v22 = *(_DWORD *)(v5 + 32);
    *(_DWORD *)(v5 + 32) = HIDWORD(v10);
    v12 = *(_DWORD *)(a1 + 36) + 36;
    *(_DWORD *)(a1 + 36) = v12;
  v13 = *(_DWORD *)v4;
  if ( v21 )
    v21(&v20, &v20, 3);
  if ( v28 )
    v28();
  return 954437177 * ((v12 - v13) >> 2) - 1;
}


int __fastcall __noreturn std::__detail::_Scanner<char>::_M_eat_class(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r10@1
  const void **v4; // r6@1
  __int64 v5; // r0@1
  _DWORD *v6; // r1@3
  __int64 v7; // r2@3
  char v8; // r4@3
  int v9; // r7@3
  _DWORD *v10; // r0@6
  int result; // r0@13

  v2 = a1;
  v3 = a2;
  v4 = (const void **)(a1 + 160);
  sub_119CA68((const void **)(a1 + 160), 0, *(_BYTE **)(*(_DWORD *)(a1 + 160) - 12), 0);
  v5 = *(_QWORD *)(v4 - 3);
  if ( (_DWORD)v5 == HIDWORD(v5) )
    goto LABEL_14;
  while ( *(_BYTE *)v5 != v3 )
  {
    *(_DWORD *)(v2 + 148) = v5 + 1;
    HIDWORD(v5) = *(_DWORD *)(v2 + 160);
    v7 = *(_QWORD *)(HIDWORD(v5) - 12);
    v8 = *(_BYTE *)v5;
    v9 = v7 + 1;
    if ( (unsigned int)(v7 + 1) > HIDWORD(v7) || *(v6 - 1) >= 1 )
    {
      sub_119CAF8(v4, v7 + 1);
      v6 = *v4;
      LODWORD(v7) = *((_DWORD *)*v4 - 3);
    }
    *((_BYTE *)v6 + v7) = v8;
    v10 = *v4;
    if ( (int *)((char *)*v4 - 12) != &dword_28898C0 )
      *(v10 - 1) = 0;
      *(v10 - 3) = v9;
      *((_BYTE *)v10 + v9) = byte_26C67B8[0];
    v5 = *(_QWORD *)(v2 + 148);
    if ( (_DWORD)v5 == HIDWORD(v5) )
      goto LABEL_14;
  }
  if ( (_DWORD)v5 == HIDWORD(v5)
    || (*(_DWORD *)(v2 + 148) = v5 + 1, *(_BYTE *)v5 != v3)
    || (_DWORD)v5 + 1 == HIDWORD(v5)
    || (*(_DWORD *)(v2 + 148) = v5 + 2, result = *(_BYTE *)(v5 + 1), result != 93) )
LABEL_14:
    sub_119E4D8(v3 == 58);
  return result;
}


int __fastcall std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher(int a1, int a2)
{
  int v2; // r11@1
  __int64 v3; // kr00_8@1
  void (__fastcall *v4)(__int64 *, __int64 *, signed int); // ST04_4@1
  int v5; // r5@1
  __int64 v6; // kr08_8@1
  int v7; // r3@2
  int v8; // r4@2
  int v9; // r5@2
  int v10; // r7@2
  __int64 v11; // r1@2
  int v12; // r3@2
  int v13; // r7@2
  int v14; // r4@4
  int v16; // [sp+8h] [bp-70h]@1
  int v17; // [sp+Ch] [bp-6Ch]@1
  int v18; // [sp+10h] [bp-68h]@1
  int v19; // [sp+14h] [bp-64h]@1
  int v20; // [sp+18h] [bp-60h]@1
  __int64 v21; // [sp+1Ch] [bp-5Ch]@1
  void (__fastcall *v22)(__int64 *, __int64 *, signed int); // [sp+24h] [bp-54h]@1
  int v23; // [sp+28h] [bp-50h]@1
  int v24; // [sp+30h] [bp-48h]@1
  int v25; // [sp+34h] [bp-44h]@1
  int v26; // [sp+38h] [bp-40h]@1
  int v27; // [sp+3Ch] [bp-3Ch]@1
  int v28; // [sp+40h] [bp-38h]@1
  __int64 v29; // [sp+44h] [bp-34h]@1
  void (*v30)(void); // [sp+4Ch] [bp-2Ch]@1
  int v31; // [sp+50h] [bp-28h]@1

  v2 = a1;
  v24 = 10;
  v25 = -1;
  v3 = *(_QWORD *)a2;
  v4 = *(void (__fastcall **)(__int64 *, __int64 *, signed int))(a2 + 8);
  *(_DWORD *)(a2 + 8) = 0;
  v5 = *(_DWORD *)(a2 + 12);
  v29 = v3;
  v31 = v5;
  v6 = *(_QWORD *)(a1 + 36);
  v16 = v24;
  v17 = v25;
  v18 = v26;
  v19 = v27;
  v20 = v28;
  v21 = v3;
  v30 = 0;
  v22 = v4;
  v23 = v5;
  if ( (_DWORD)v6 == HIDWORD(v6) )
  {
    std::vector<std::__detail::_State<std::regex_traits<char>>,std::allocator<std::__detail::_State<std::regex_traits<char>>>>::_M_emplace_back_aux<std::__detail::_State<std::regex_traits<char>>>(
      (unsigned __int64 *)(a1 + 32),
      (int)&v16);
    v13 = *(_DWORD *)(v2 + 36);
  }
  else
    v7 = v17;
    v8 = v18;
    v9 = v19;
    v10 = v20;
    *(_DWORD *)v6 = v16;
    *(_DWORD *)(v6 + 4) = v7;
    *(_DWORD *)(v6 + 8) = v8;
    *(_DWORD *)(v6 + 12) = v9;
    *(_DWORD *)(v6 + 16) = v10;
    *(_DWORD *)(v6 + 28) = 0;
    v11 = v21;
    v12 = *(_QWORD *)(v6 + 20);
    v21 = *(_QWORD *)(v6 + 20);
    *(_QWORD *)(v6 + 20) = v11;
    HIDWORD(v11) = v22;
    v22 = *(void (__fastcall **)(__int64 *, __int64 *, signed int))(v6 + 28);
    *(_DWORD *)(v6 + 28) = HIDWORD(v11);
    HIDWORD(v11) = v23;
    v23 = *(_DWORD *)(v6 + 32);
    *(_DWORD *)(v6 + 32) = HIDWORD(v11);
    v13 = *(_DWORD *)(a1 + 36) + 36;
    *(_DWORD *)(a1 + 36) = v13;
  v14 = *(_DWORD *)(v2 + 32);
  if ( v22 )
    v22(&v21, &v21, 3);
  if ( v30 )
    v30();
  return 954437177 * ((v13 - v14) >> 2) - 1;
}


int __fastcall std::_Function_base::_Base_manager<Concurrency::streams::details::streambuf_state_manager<char>::sync(void)::{lambda(bool)#2}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


signed int __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_quantifier(int a1)
{
  int v1; // r4@1
  int v2; // r1@1
  int v3; // r8@1
  signed int result; // r0@1
  const void **v5; // r10@2
  int *v6; // r11@2
  int v7; // r0@3
  int v8; // r0@8
  int v9; // r0@13
  int v10; // r0@18
  int v11; // r0@32
  int v12; // r0@45
  char v13; // r5@49
  int v14; // r0@58
  char v15; // r8@62
  int v16; // r0@71
  char v17; // r6@75
  __int64 v18; // r0@82
  int v19; // r0@83
  int v20; // t1@83
  __int64 v21; // r2@83
  __int64 v22; // r2@84
  int v23; // r0@84
  int v24; // r0@84
  int v25; // r1@84
  int v26; // r0@85
  _DWORD *v27; // r1@85
  unsigned int v28; // r7@86
  int v29; // r9@86
  int v30; // r5@87
  signed int v31; // r0@89
  int v32; // r0@92
  __int64 v33; // r0@93
  int v34; // r0@94
  int v35; // r0@104
  signed int v36; // r6@108
  __int64 v37; // r0@113
  int v38; // r0@114
  int v39; // r8@114
  int v40; // t1@114
  int v41; // r7@114
  int v42; // r9@114
  int v43; // r0@115
  int v44; // r0@115
  int v45; // r1@115
  int v46; // r6@116
  int v47; // r0@116
  int v48; // r5@116
  int v49; // r0@116
  int v50; // r0@120
  __int64 v51; // r0@124
  int v52; // r0@125
  int v53; // r9@125
  int v54; // t1@125
  int v55; // r5@125
  int v56; // r10@125
  int v57; // r0@126
  int v58; // r0@126
  int v59; // r1@126
  int v60; // r6@127
  int v61; // r7@127
  int v62; // r0@127
  int v63; // r5@127
  int v64; // r0@127
  int v65; // r0@131
  __int64 v66; // r0@135
  int v67; // r0@136
  int v68; // r8@136
  int v69; // t1@136
  int v70; // r5@136
  int v71; // r7@136
  int v72; // r0@137
  int v73; // r0@137
  int v74; // r1@137
  int v75; // r0@138
  int v76; // r6@138
  int v77; // r0@138
  int v78; // r0@142
  _DWORD *v79; // r1@145
  unsigned int v80; // r7@146
  int v81; // r0@146
  int v82; // r5@147
  int v83; // r6@147
  int v84; // r4@147
  signed int v85; // r0@149
  int v86; // r2@155
  int v87; // r3@155
  int v88; // r0@156
  int v89; // r0@167
  int v90; // r10@167
  signed int v91; // r0@171
  int v92; // r8@177
  int v93; // ST04_4@181
  int v94; // r5@181
  char v95; // ST08_1@181
  int v96; // r9@184
  int v97; // r11@184
  int v98; // r2@184
  int v99; // r3@184
  int v100; // r2@185
  __int64 v101; // kr30_8@185
  int v102; // r3@185
  unsigned int v103; // lr@185
  unsigned int v104; // r6@185
  void *v105; // r7@185
  void *v106; // r0@185
  unsigned int v107; // r4@187
  void *v108; // t1@188
  int *v109; // r9@191
  int v110; // r7@191
  int v111; // r10@191
  int v112; // r6@191
  int v113; // r11@192
  int v114; // r2@192
  int v115; // r0@197
  int v116; // r1@197
  int v117; // t1@199
  int v118; // r6@200
  void *v119; // r0@201
  int v120; // r5@204
  int v121; // r7@204
  int v122; // r1@207
  int v123; // r3@207
  void *v124; // r6@208
  int v125; // r7@209
  unsigned int v126; // r4@209
  unsigned int v127; // r5@210
  void *v128; // t1@211
  int v129; // r0@214
  int v130; // r0@216
  int v131; // r0@219
  int v132; // r0@220
  int v133; // [sp+0h] [bp-B0h]@0
  int v134; // [sp+4h] [bp-ACh]@85
  int v135; // [sp+8h] [bp-A8h]@85
  signed int v136; // [sp+8h] [bp-A8h]@172
  int v137; // [sp+Ch] [bp-A4h]@98
  int v138; // [sp+10h] [bp-A0h]@85
  int v139; // [sp+10h] [bp-A0h]@181
  int v140; // [sp+14h] [bp-9Ch]@179
  int v141; // [sp+18h] [bp-98h]@179
  int v142; // [sp+1Ch] [bp-94h]@179
  int v143; // [sp+20h] [bp-90h]@179
  void *v144; // [sp+24h] [bp-8Ch]@179
  int v145; // [sp+28h] [bp-88h]@179
  int v146; // [sp+2Ch] [bp-84h]@179
  __int64 v147; // [sp+30h] [bp-80h]@179
  unsigned __int64 v148; // [sp+38h] [bp-78h]@179
  unsigned __int64 v149; // [sp+40h] [bp-70h]@179
  void *ptr; // [sp+48h] [bp-68h]@179
  void *v151; // [sp+4Ch] [bp-64h]@179
  int v152; // [sp+50h] [bp-60h]@179
  int v153; // [sp+54h] [bp-5Ch]@179
  __int64 v154; // [sp+58h] [bp-58h]@179
  unsigned __int64 v155; // [sp+60h] [bp-50h]@179
  unsigned __int64 v156; // [sp+68h] [bp-48h]@179
  int v157; // [sp+70h] [bp-40h]@179
  char v158; // [sp+74h] [bp-3Ch]@179
  int v159; // [sp+78h] [bp-38h]@179
  int v160; // [sp+7Ch] [bp-34h]@179
  int v161; // [sp+80h] [bp-30h]@83
  __int64 v162; // [sp+84h] [bp-2Ch]@83
  int v163; // [sp+8Ch] [bp-24h]@179
  int v164; // [sp+90h] [bp-20h]@179
  int v165; // [sp+94h] [bp-1Ch]@179
  int v166; // [sp+98h] [bp-18h]@179

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 144);
  v3 = (*(_DWORD *)a1 >> 4) & 1;
  result = 0;
  switch ( v2 )
  {
    case 12:
      v5 = (const void **)(v1 + 228);
      v6 = (int *)(v1 + 172);
      EntityInteraction::setInteractText((int *)(v1 + 228), (int *)(v1 + 172));
      if ( (unsigned int)*(_QWORD *)(v1 + 160) == *(_QWORD *)(v1 + 160) >> 32 )
      {
        *(_DWORD *)(v1 + 144) = 28;
      }
      else
        v7 = *(_DWORD *)(v1 + 136);
        if ( v7 == 2 )
        {
          std::__detail::_Scanner<char>::_M_scan_in_bracket(v1 + 12);
        }
        else
          if ( v7 == 1 )
            std::__detail::_Scanner<char>::_M_scan_in_brace(v1 + 12);
          if ( !v7 )
            std::__detail::_Scanner<char>::_M_scan_normal(v1 + 12);
      if ( *(_DWORD *)(v1 + 256) == *(_DWORD *)(v1 + 240) )
        sub_119E4A8(10);
      if ( *(_DWORD *)(v1 + 144) != 27 )
        sub_119E4A8(7);
        v11 = *(_DWORD *)(v1 + 136);
        if ( v11 == 2 )
          if ( v11 == 1 )
          if ( !v11 )
      v18 = *(_QWORD *)(v1 + 256);
      if ( (_DWORD)v18 == HIDWORD(v18) )
        HIDWORD(v18) = *(_DWORD *)(*(_DWORD *)(v1 + 268) - 4);
        v22 = *(_QWORD *)(HIDWORD(v18) + 492);
        HIDWORD(v162) = *(_DWORD *)(HIDWORD(v18) + 500);
        *(_QWORD *)&v161 = v22;
        operator delete((void *)v18);
        v23 = *(_DWORD *)(v1 + 268);
        *(_DWORD *)(v1 + 268) = v23 - 4;
        v24 = *(_DWORD *)(v23 - 4);
        *(_DWORD *)(v1 + 260) = v24;
        v25 = v24 + 504;
        v19 = v24 + 492;
        *(_DWORD *)(v1 + 264) = v25;
        v20 = *(_DWORD *)(v18 - 12);
        v19 = v18 - 12;
        v21 = *(_QWORD *)(v19 + 4);
        v161 = v20;
        v162 = v21;
      *(_DWORD *)(v1 + 256) = v19;
      v135 = v1 + 12;
      v134 = v1 + 184;
      v26 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_dummy(v1 + 184);
      v27 = *(_DWORD **)(v1 + 228);
      v138 = v26;
      if ( *(v27 - 3) )
        v28 = 0;
        v29 = 0;
        do
          v30 = *(_DWORD *)(v1 + 4);
          if ( *(v27 - 1) >= 0 )
          {
            sub_119CB68((const void **)(v1 + 228));
            v27 = *v5;
          }
          v31 = std::regex_traits<char>::value(v30, *((_BYTE *)v27 + v28), 10);
          v27 = *v5;
          v29 = v31 + 10 * v29;
          ++v28;
        while ( v28 < *((_DWORD *)*v5 - 3) );
      v32 = *(_DWORD *)(v1 + 144);
      if ( v32 == 26 )
        EntityInteraction::setInteractText((int *)(v1 + 228), (int *)(v1 + 172));
        v33 = *(_QWORD *)(v1 + 160);
        if ( (_DWORD)v33 == HIDWORD(v33) )
          *(_DWORD *)(v1 + 144) = 28;
          goto LABEL_160;
        v34 = *(_DWORD *)(v1 + 136);
        if ( v34 == 2 )
          std::__detail::_Scanner<char>::_M_scan_in_bracket(v135);
          if ( v34 == 1 )
            std::__detail::_Scanner<char>::_M_scan_in_brace(v135);
          if ( !v34 )
            std::__detail::_Scanner<char>::_M_scan_normal(v135);
        v32 = *(_DWORD *)(v1 + 144);
        if ( v32 != 27 )
          v36 = 1;
          v137 = HIDWORD(v33);
          goto LABEL_154;
        if ( (unsigned int)*(_QWORD *)(v1 + 160) == *(_QWORD *)(v1 + 160) >> 32 )
          v35 = *(_DWORD *)(v1 + 136);
          if ( v35 == 2 )
            std::__detail::_Scanner<char>::_M_scan_in_bracket(v135);
          else
            if ( v35 == 1 )
              std::__detail::_Scanner<char>::_M_scan_in_brace(v135);
            if ( !v35 )
              std::__detail::_Scanner<char>::_M_scan_normal(v135);
        v79 = *v5;
        if ( *((_DWORD *)*v5 - 3) )
          v80 = 0;
          v81 = 0;
          do
            v82 = *(_DWORD *)(v1 + 4);
            v83 = v1;
            v84 = 10 * v81;
            if ( *(v79 - 1) >= 0 )
            {
              sub_119CB68(v5);
              v79 = *v5;
            }
            v85 = std::regex_traits<char>::value(v82, *((_BYTE *)v79 + v80), 10);
            v79 = *v5;
            v81 = v85 + v84;
            ++v80;
            v1 = v83;
          while ( v80 < *((_DWORD *)*v5 - 3) );
        v137 = v81 - v29;
        v137 = 0;
      v36 = 0;
LABEL_154:
      if ( v32 != 13 )
LABEL_160:
        sub_119E4A8(6);
      EntityInteraction::setInteractText((int *)v5, v6);
        v88 = *(_DWORD *)(v1 + 136);
        if ( v88 == 2 )
          if ( v88 == 1 )
          if ( !v88 )
      if ( !v3 || *(_DWORD *)(v1 + 144) != 18 )
        v91 = 0;
LABEL_172:
        v136 = v91;
        v90 = v138;
        goto LABEL_177;
        v91 = 1;
        goto LABEL_172;
      v89 = *(_DWORD *)(v1 + 136);
      v90 = v138;
      if ( v89 == 2 )
        std::__detail::_Scanner<char>::_M_scan_in_bracket(v135);
        if ( v89 == 1 )
          std::__detail::_Scanner<char>::_M_scan_in_brace(v135);
        if ( !v89 )
          std::__detail::_Scanner<char>::_M_scan_normal(v135);
      v136 = 1;
LABEL_177:
      v92 = v90;
      if ( v29 >= 1 )
        v92 = v90;
          std::__detail::_StateSeq<std::regex_traits<char>>::_M_clone(
            (int)&v158,
            (int)&v161,
            v86,
            v87,
            v133,
            v134,
            v136,
            v137,
            v138,
            v140,
            v141,
            v142,
            v143,
            (int)v144,
            v145,
            v146,
            v147,
            SHIDWORD(v147),
            v148,
            SHIDWORD(v148),
            v149,
            SHIDWORD(v149),
            (int)ptr,
            v151,
            v152,
            v153,
            v154,
            SHIDWORD(v154),
            v155,
            SHIDWORD(v155),
            v156,
            SHIDWORD(v156),
            v157,
            *(void **)&v158,
            v159,
            v160,
            v161,
            v162,
            SHIDWORD(v162),
            v163,
            v164,
            v165,
            v166);
          v86 = v159;
          --v29;
          *(_DWORD *)(*(_DWORD *)(v1 + 216) + 36 * v92 + 4) = v159;
          v92 = v160;
        while ( v29 );
      if ( v36 )
        std::__detail::_StateSeq<std::regex_traits<char>>::_M_clone(
          (int)&ptr,
          (int)&v161,
          v86,
          v87,
          v133,
          v134,
          v136,
          v137,
          v138,
          v140,
          v141,
          v142,
          v143,
          (int)v144,
          v145,
          v146,
          v147,
          SHIDWORD(v147),
          v148,
          SHIDWORD(v148),
          v149,
          SHIDWORD(v149),
          (int)ptr,
          v151,
          v152,
          v153,
          v154,
          SHIDWORD(v154),
          v155,
          SHIDWORD(v155),
          v156,
          SHIDWORD(v156),
          v157,
          *(void **)&v158,
          v159,
          v160,
          v161,
          v162,
          SHIDWORD(v162),
          v163,
          v164,
          v165,
          v166);
        v94 = v93;
        v139 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_alt(v93, -1, (int)v151, v95);
        *(_DWORD *)(*((_DWORD *)ptr + 8) + 36 * v152 + 4) = v139;
        *(_DWORD *)(*(_DWORD *)(v1 + 216) + 36 * v92 + 4) = v139;
        if ( v137 <= -1 )
          sub_119E4A8(7);
        v96 = v1;
        v97 = v134;
        v139 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_dummy(v134);
        _aeabi_memclr8(&v143, 40);
        std::_Deque_base<long,std::allocator<long>>::_M_initialize_map((int)&v143, 0);
        _aeabi_memclr8(&ptr, 40);
        std::_Deque_base<long,std::allocator<long>>::_M_initialize_map((int)&ptr, 0);
        if ( v143 )
          v100 = v152;
          v102 = v153;
          v101 = v154;
          v154 = v147;
          v152 = v145;
          v153 = v146;
          v145 = v100;
          v146 = v102;
          v147 = v101;
          v98 = HIDWORD(v155);
          v103 = v155;
          v104 = HIDWORD(v156);
          v99 = v156;
          v156 = v149;
          v155 = v148;
          v148 = __PAIR__(v98, v103);
          v149 = __PAIR__(v104, v99);
          v105 = ptr;
          ptr = (void *)v143;
          v143 = (int)v105;
          v106 = v151;
          v151 = v144;
          v144 = v106;
          if ( v105 )
            if ( HIDWORD(v101) < v104 + 4 )
              v107 = HIDWORD(v101) - 4;
              do
              {
                v108 = *(void **)(v107 + 4);
                v107 += 4;
                operator delete(v108);
              }
              while ( v107 < v104 );
            operator delete(v105);
        if ( v137 <= 0 )
          v98 = v155;
          v1 = v96;
          v117 = *(_DWORD *)(v96 + 216);
          v109 = (int *)(v96 + 216);
          v115 = v117;
          v110 = v90;
          v111 = 0;
          v112 = v134;
            std::__detail::_StateSeq<std::regex_traits<char>>::_M_clone(
              (int)&v140,
              (int)&v161,
              v98,
              v99,
              v133,
              v134,
              v136,
              v137,
              v139,
              v140,
              v141,
              v142,
              v143,
              (int)v144,
              v145,
              v146,
              v147,
              SHIDWORD(v147),
              v148,
              SHIDWORD(v148),
              v149,
              SHIDWORD(v149),
              (int)ptr,
              v151,
              v152,
              v153,
              v154,
              SHIDWORD(v154),
              v155,
              SHIDWORD(v155),
              v156,
              SHIDWORD(v156),
              v157,
              *(void **)&v158,
              v159,
              v160,
              v161,
              v162,
              SHIDWORD(v162),
              v163,
              v164,
              v165,
              v166);
            v113 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_alt(v112, v141, v139, v136);
            v114 = v155;
            if ( (_DWORD)v155 == (_DWORD)v156 - 4 )
              if ( (char *)v151 - ((HIDWORD(v156) - (signed int)ptr) >> 2) <= (char *)1 )
                std::deque<long,std::allocator<long>>::_M_reallocate_map((int)&ptr, 1u, 0);
              *(_DWORD *)(HIDWORD(v156) + 4) = operator new(0x200u);
              *(_DWORD *)v155 = v113;
              HIDWORD(v156) += 4;
              v98 = *(_DWORD *)HIDWORD(v156);
              HIDWORD(v155) = v98;
              LODWORD(v156) = v98 + 512;
            else
              v98 = v114 + 4;
            LODWORD(v155) = v98;
            v115 = *v109;
            ++v111;
            v116 = v142;
            *(_DWORD *)(*v109 + 36 * v92 + 4) = v113;
            v92 = v116;
            v99 = v137;
          while ( v111 < v137 );
          v97 = v112;
          v92 = v116;
          v90 = v110;
        *(_DWORD *)(v115 + 36 * v92 + 4) = v139;
        v118 = v152;
        if ( v98 != v152 )
          v119 = (void *)HIDWORD(v155);
            if ( (void *)v98 == v119 )
              v98 = *(_DWORD *)(HIDWORD(v156) - 4) + 512;
            v120 = *v109;
            v121 = *(_DWORD *)(v98 - 4);
            if ( (void *)v155 == v119 )
              operator delete(v119);
              HIDWORD(v156) -= 4;
              v119 = (void *)*(_DWORD *)HIDWORD(v156);
              HIDWORD(v155) = v119;
              v98 = (int)v119 + 508;
              LODWORD(v156) = (char *)v119 + 512;
              v98 = v155 - 4;
            v122 = v120 + 36 * v121;
            v123 = *(_DWORD *)(v122 + 4);
            *(_DWORD *)(v122 + 4) = *(_DWORD *)(v122 + 12);
            *(_DWORD *)(v122 + 12) = v123;
          while ( v98 != v118 );
        v124 = ptr;
        if ( ptr )
          v125 = v1;
          v126 = HIDWORD(v156);
          if ( HIDWORD(v154) < HIDWORD(v156) + 4 )
            v127 = HIDWORD(v154) - 4;
            do
              v128 = *(void **)(v127 + 4);
              v127 += 4;
              operator delete(v128);
            while ( v127 < v126 );
          operator delete(v124);
          v1 = v125;
        v94 = v97;
      v129 = *(_DWORD *)(v1 + 256);
      if ( v129 == *(_DWORD *)(v1 + 264) - 12 )
        if ( (unsigned int)((*(_QWORD *)(v1 + 232) >> 32)
                          - ((signed int)(*(_DWORD *)(v1 + 268) - *(_QWORD *)(v1 + 232)) >> 2)) <= 1 )
          std::deque<std::__detail::_StateSeq<std::regex_traits<char>>,std::allocator<std::__detail::_StateSeq<std::regex_traits<char>>>>::_M_reallocate_map(
            v1 + 232,
            1u,
            0);
        *(_DWORD *)(*(_DWORD *)(v1 + 268) + 4) = operator new(0x1F8u);
        v131 = *(_DWORD *)(v1 + 256);
        *(_DWORD *)v131 = v94;
        *(_DWORD *)(v131 + 4) = v90;
        *(_DWORD *)(v131 + 8) = v139;
LABEL_220:
        v132 = *(_DWORD *)(v1 + 268);
        *(_DWORD *)(v1 + 268) = v132 + 4;
        v130 = *(_DWORD *)(v132 + 4);
        *(_DWORD *)(v1 + 260) = v130;
        *(_DWORD *)(v1 + 264) = v130 + 504;
        *(_DWORD *)v129 = v94;
        *(_DWORD *)(v129 + 4) = v90;
        *(_DWORD *)(v129 + 8) = v139;
LABEL_216:
        v130 = *(_DWORD *)(v1 + 256) + 12;
      *(_DWORD *)(v1 + 256) = v130;
      return 1;
    case 20:
        v8 = *(_DWORD *)(v1 + 136);
        if ( v8 == 2 )
          if ( v8 == 1 )
          if ( !v8 )
      if ( v3 )
        if ( *(_DWORD *)(v1 + 144) == 18 )
          EntityInteraction::setInteractText((int *)(v1 + 228), (int *)(v1 + 172));
          if ( (unsigned int)*(_QWORD *)(v1 + 160) == *(_QWORD *)(v1 + 160) >> 32 )
            *(_DWORD *)(v1 + 144) = 28;
            v12 = *(_DWORD *)(v1 + 136);
            if ( v12 == 2 )
              std::__detail::_Scanner<char>::_M_scan_in_bracket(v1 + 12);
              if ( v12 == 1 )
                std::__detail::_Scanner<char>::_M_scan_in_brace(v1 + 12);
              if ( !v12 )
                std::__detail::_Scanner<char>::_M_scan_normal(v1 + 12);
          v13 = 1;
          v13 = 0;
        v13 = 0;
      v37 = *(_QWORD *)(v1 + 256);
      if ( (_DWORD)v37 == HIDWORD(v37) )
        HIDWORD(v37) = *(_DWORD *)(*(_DWORD *)(v1 + 268) - 4);
        v41 = *(_QWORD *)(HIDWORD(v37) + 492) >> 32;
        v39 = *(_QWORD *)(HIDWORD(v37) + 492);
        v42 = *(_DWORD *)(HIDWORD(v37) + 500);
        operator delete((void *)v37);
        v43 = *(_DWORD *)(v1 + 268);
        *(_DWORD *)(v1 + 268) = v43 - 4;
        v44 = *(_DWORD *)(v43 - 4);
        *(_DWORD *)(v1 + 260) = v44;
        v45 = v44 + 504;
        v38 = v44 + 492;
        *(_DWORD *)(v1 + 264) = v45;
        v40 = *(_DWORD *)(v37 - 12);
        v38 = v37 - 12;
        v39 = v40;
        v42 = *(_QWORD *)(v38 + 4) >> 32;
        v41 = *(_QWORD *)(v38 + 4);
      v46 = v1 + 184;
      *(_DWORD *)(v1 + 256) = v38;
      v47 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_alt(v1 + 184, -1, v41, v13);
      v48 = v47;
      *(_DWORD *)(*(_DWORD *)(v39 + 32) + 36 * v42 + 4) = v47;
      v49 = *(_DWORD *)(v1 + 256);
      if ( v49 != *(_DWORD *)(v1 + 264) - 12 )
        *(_DWORD *)v49 = v46;
        *(_DWORD *)(v49 + 4) = v48;
        *(_DWORD *)(v49 + 8) = v48;
        goto LABEL_216;
      if ( (unsigned int)((*(_QWORD *)(v1 + 232) >> 32)
                        - ((signed int)(*(_DWORD *)(v1 + 268) - *(_QWORD *)(v1 + 232)) >> 2)) <= 1 )
        std::deque<std::__detail::_StateSeq<std::regex_traits<char>>,std::allocator<std::__detail::_StateSeq<std::regex_traits<char>>>>::_M_reallocate_map(
          v1 + 232,
          1u,
          0);
      *(_DWORD *)(*(_DWORD *)(v1 + 268) + 4) = operator new(0x1F8u);
      v50 = *(_DWORD *)(v1 + 256);
      *(_DWORD *)v50 = v46;
      *(_DWORD *)(v50 + 4) = v48;
      *(_DWORD *)(v50 + 8) = v48;
      goto LABEL_220;
    case 18:
        v9 = *(_DWORD *)(v1 + 136);
        if ( v9 == 2 )
          if ( v9 == 1 )
          if ( !v9 )
            v14 = *(_DWORD *)(v1 + 136);
            if ( v14 == 2 )
              if ( v14 == 1 )
              if ( !v14 )
          v15 = 1;
          v15 = 0;
        v15 = 0;
      v51 = *(_QWORD *)(v1 + 256);
      if ( (_DWORD)v51 == HIDWORD(v51) )
        HIDWORD(v51) = *(_DWORD *)(*(_DWORD *)(v1 + 268) - 4);
        v55 = *(_QWORD *)(HIDWORD(v51) + 492) >> 32;
        v53 = *(_QWORD *)(HIDWORD(v51) + 492);
        v56 = *(_DWORD *)(HIDWORD(v51) + 500);
        operator delete((void *)v51);
        v57 = *(_DWORD *)(v1 + 268);
        *(_DWORD *)(v1 + 268) = v57 - 4;
        v58 = *(_DWORD *)(v57 - 4);
        *(_DWORD *)(v1 + 260) = v58;
        v59 = v58 + 504;
        v52 = v58 + 492;
        *(_DWORD *)(v1 + 264) = v59;
        v54 = *(_DWORD *)(v51 - 12);
        v52 = v51 - 12;
        v53 = v54;
        v56 = *(_QWORD *)(v52 + 4) >> 32;
        v55 = *(_QWORD *)(v52 + 4);
      v60 = v1 + 184;
      *(_DWORD *)(v1 + 256) = v52;
      v61 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_dummy(v1 + 184);
      v62 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_alt(v1 + 184, -1, v55, v15);
      v63 = v62;
      *(_DWORD *)(*(_DWORD *)(v53 + 32) + 36 * v56 + 4) = v61;
      *(_DWORD *)(*(_DWORD *)(v1 + 216) + 36 * v62 + 4) = v61;
      v64 = *(_DWORD *)(v1 + 256);
      if ( v64 != *(_DWORD *)(v1 + 264) - 12 )
        *(_DWORD *)v64 = v60;
        *(_DWORD *)(v64 + 4) = v63;
        *(_DWORD *)(v64 + 8) = v61;
      v65 = *(_DWORD *)(v1 + 256);
      *(_DWORD *)v65 = v60;
      *(_DWORD *)(v65 + 4) = v63;
      *(_DWORD *)(v65 + 8) = v61;
    case 21:
        v10 = *(_DWORD *)(v1 + 136);
        if ( v10 == 2 )
          if ( v10 == 1 )
          if ( !v10 )
            v16 = *(_DWORD *)(v1 + 136);
            if ( v16 == 2 )
              if ( v16 == 1 )
              if ( !v16 )
          v17 = 1;
          v17 = 0;
        v17 = 0;
      v66 = *(_QWORD *)(v1 + 256);
      if ( (_DWORD)v66 == HIDWORD(v66) )
        HIDWORD(v66) = *(_DWORD *)(*(_DWORD *)(v1 + 268) - 4);
        v70 = *(_QWORD *)(HIDWORD(v66) + 492) >> 32;
        v68 = *(_QWORD *)(HIDWORD(v66) + 492);
        v71 = *(_DWORD *)(HIDWORD(v66) + 500);
        operator delete((void *)v66);
        v72 = *(_DWORD *)(v1 + 268);
        *(_DWORD *)(v1 + 268) = v72 - 4;
        v73 = *(_DWORD *)(v72 - 4);
        *(_DWORD *)(v1 + 260) = v73;
        v74 = v73 + 504;
        v67 = v73 + 492;
        *(_DWORD *)(v1 + 264) = v74;
        v69 = *(_DWORD *)(v66 - 12);
        v67 = v66 - 12;
        v68 = v69;
        v71 = *(_QWORD *)(v67 + 4) >> 32;
        v70 = *(_QWORD *)(v67 + 4);
      *(_DWORD *)(v1 + 256) = v67;
      v75 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_alt(v1 + 184, -1, v70, v17);
      v76 = v75;
      *(_DWORD *)(*(_DWORD *)(v68 + 32) + 36 * v71 + 4) = v75;
      v77 = *(_DWORD *)(v1 + 256);
      if ( v77 != *(_DWORD *)(v1 + 264) - 12 )
        *(_DWORD *)v77 = v68;
        *(_DWORD *)(v77 + 4) = v70;
        *(_DWORD *)(v77 + 8) = v76;
      v78 = *(_DWORD *)(v1 + 256);
      *(_DWORD *)v78 = v68;
      *(_DWORD *)(v78 + 4) = v70;
      *(_DWORD *)(v78 + 8) = v76;
    default:
      return result;
  }
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::tournaments::team_info>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::tournaments::team_info>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<web::websockets::client::websocket_incoming_message>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  _DWORD *v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<web::websockets::client::websocket_incoming_message>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


void __fastcall std::_Destroy<MobSpawnerData>(int a1)
{
  std::_Destroy<MobSpawnerData>(a1);
}


std::bad_alloc *__fastcall std::bad_alloc::~bad_alloc(std::bad_alloc *this)
{
  std::bad_alloc *v1; // r4@1

  v1 = this;
  j_std::bad_alloc::~bad_alloc(this);
  j_operator delete((void *)v1);
  return v1;
}


void __fastcall std::default_delete<TextToIconMapper>::operator()(int a1, int a2)
{
  int v2; // r10@1
  int v3; // r1@2
  void *v4; // r0@2
  void *v5; // r0@3
  int v6; // r7@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  void *v9; // r6@16
  int v10; // r1@16
  void *v11; // r0@16
  void *v12; // r0@18
  unsigned int *v13; // r2@23
  signed int v14; // r1@25

  v2 = a2;
  if ( a2 )
  {
    v3 = *(_DWORD *)(a2 + 56);
    v4 = (void *)(v3 - 12);
    if ( (int *)(v3 - 12) != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v3 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j_j__ZdlPv_9(v4);
    }
    std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear(v2 + 28);
    v5 = *(void **)(v2 + 28);
    if ( v5 && (void *)(v2 + 52) != v5 )
      operator delete(v5);
    v6 = *(_DWORD *)(v2 + 8);
    while ( v6 )
      v9 = (void *)v6;
      v10 = *(_DWORD *)(v6 + 8);
      v6 = *(_DWORD *)v6;
      v11 = (void *)(v10 - 12);
      if ( (int *)(v10 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v10 - 4);
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
          j_j_j_j_j__ZdlPv_9(v11);
      operator delete(v9);
    _aeabi_memclr4(*(_QWORD *)v2, 4 * (*(_QWORD *)v2 >> 32));
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 12) = 0;
    v12 = *(void **)v2;
    if ( *(_DWORD *)v2 )
      if ( (void *)(v2 + 24) != v12 )
        operator delete(v12);
    operator delete((void *)v2);
  }
}


void __fastcall std::default_delete<SyncedPhotoView>::operator()(int a1, int a2)
{
  int v2; // r10@1
  int v3; // r1@2
  void *v4; // r0@2
  unsigned __int64 *v5; // r7@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  unsigned __int64 *v8; // r6@13
  int v9; // r1@13
  void *v10; // r0@13
  void *v11; // r0@15
  unsigned int *v12; // r2@20
  signed int v13; // r1@22

  v2 = a2;
  if ( a2 )
  {
    v3 = *(_DWORD *)(a2 + 32);
    v4 = (void *)(v3 - 12);
    if ( (int *)(v3 - 12) != &dword_28898C0 )
    {
      v12 = (unsigned int *)(v3 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v4);
    }
    v5 = *(unsigned __int64 **)(v2 + 8);
    while ( v5 )
      v8 = v5;
      v9 = *v5 >> 32;
      v5 = (unsigned __int64 *)*v5;
      v10 = (void *)(v9 - 12);
      if ( (int *)(v9 - 12) != &dword_28898C0 )
        v6 = (unsigned int *)(v9 - 4);
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
          j_j_j_j__ZdlPv_9(v10);
      operator delete(v8);
    _aeabi_memclr4(*(_QWORD *)v2, 4 * (*(_QWORD *)v2 >> 32));
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 12) = 0;
    v11 = *(void **)v2;
    if ( *(_DWORD *)v2 )
      if ( (void *)(v2 + 24) != v11 )
        operator delete(v11);
    operator delete((void *)v2);
  }
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *,std::__shared_ptr<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *>>,std::__shared_ptr<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *,std::__shared_ptr<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *>>,std::__shared_ptr<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *>>>(
           a1,
           a2);
}


int __fastcall std::__detail::_Scanner<char>::_Scanner(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r6@1
  int v6; // r5@1
  int v7; // r4@1
  unsigned int v8; // r0@1
  int v9; // r0@2
  const void **(__fastcall *v10)(int); // r0@3
  int v11; // r0@6

  v5 = a2;
  v6 = a3;
  v7 = a1;
  std::__detail::_ScannerBase::_ScannerBase(a1, a4);
  *(_DWORD *)(v7 + 148) = v5;
  *(_DWORD *)(v7 + 152) = v6;
  v8 = sub_119E4B8((int *)&unk_28881F8);
  if ( v8 >= *(_DWORD *)(*(_DWORD *)a5 + 8) || (v9 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a5 + 4) + 4 * v8)) == 0 )
    sub_119C994();
  *(_DWORD *)(v7 + 156) = v9;
  v10 = std::__detail::_Scanner<char>::_M_eat_escape_posix;
  *(_DWORD *)(v7 + 160) = &unk_28898CC;
  if ( *(_DWORD *)(v7 + 128) & 0x10 )
    v10 = std::__detail::_Scanner<char>::_M_eat_escape_ecma;
  *(_DWORD *)(v7 + 164) = v10;
  *(_DWORD *)(v7 + 168) = 0;
  if ( (unsigned int)*(_QWORD *)(v7 + 148) == *(_QWORD *)(v7 + 148) >> 32 )
  {
    *(_DWORD *)(v7 + 132) = 28;
  }
  else
    v11 = *(_DWORD *)(v7 + 124);
    if ( v11 == 2 )
    {
      std::__detail::_Scanner<char>::_M_scan_in_bracket(v7);
    }
    else
      if ( v11 == 1 )
        std::__detail::_Scanner<char>::_M_scan_in_brace(v7);
      if ( !v11 )
        std::__detail::_Scanner<char>::_M_scan_normal(v7);
  return v7;
}


void __fastcall std::default_delete<UnverifiedCertificate>::operator()(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@2
  int v4; // r1@2

  v2 = a2;
  if ( a2 )
  {
    v3 = a2 + 56;
    v4 = *(_DWORD *)(a2 + 56);
    if ( v4 )
      std::default_delete<UnverifiedCertificate>::operator()(v3, v4);
    *(_DWORD *)(v2 + 56) = 0;
    WebToken::~WebToken((WebToken *)v2);
    j_j_j__ZdlPv_3((void *)v2);
  }
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<websocketpp::message_buffer::alloc::con_msg_manager<websocketpp::message_buffer::alloc::message<websocketpp::message_buffer::alloc::message>> *>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<websocketpp::message_buffer::alloc::con_msg_manager<websocketpp::message_buffer::alloc::message<websocketpp::message_buffer::alloc::message>> *>(
           a1,
           a2);
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<Concurrency::streams::details::basic_ostream_helper<unsigned char> *,std::__shared_ptr<Concurrency::streams::details::basic_ostream_helper<unsigned char> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Concurrency::streams::details::basic_ostream_helper<unsigned char> *>>,std::__shared_ptr<Concurrency::streams::details::basic_ostream_helper<unsigned char> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Concurrency::streams::details::basic_ostream_helper<unsigned char> *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<Concurrency::streams::details::basic_ostream_helper<unsigned char> *,std::__shared_ptr<Concurrency::streams::details::basic_ostream_helper<unsigned char> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Concurrency::streams::details::basic_ostream_helper<unsigned char> *>>,std::__shared_ptr<Concurrency::streams::details::basic_ostream_helper<unsigned char> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Concurrency::streams::details::basic_ostream_helper<unsigned char> *>>>(
           a1,
           a2);
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // r6@1
  int v4; // r4@1
  _DWORD *v5; // r5@1
  _DWORD *v6; // r0@1
  int v7; // r5@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r6@8
  unsigned int v11; // r0@10

  v3 = a3;
  v4 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v5 = operator new(0x10u);
  *(_DWORD *)v4 = v5;
  v5[1] = 0;
  v5[2] = 0;
  *v5 = &off_26D535C;
  v5[3] = *v3;
  v6 = operator new(0x14u);
  v6[1] = 1;
  v6[2] = 1;
  *v6 = &off_26D5370;
  v6[4] = v5;
  v7 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = v6;
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
  return v4;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<InheritanceTree<GeometryGroup::ModelParent> *,std::__shared_ptr<InheritanceTree<GeometryGroup::ModelParent> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<InheritanceTree<GeometryGroup::ModelParent> *>>,std::__shared_ptr<InheritanceTree<GeometryGroup::ModelParent> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<InheritanceTree<GeometryGroup::ModelParent> *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_26D95B0;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::matchmaking::create_match_ticket_response>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::matchmaking::create_match_ticket_response>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::user_statistics::user_statistics_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::user_statistics::user_statistics_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<FileDataResponse *,std::__shared_ptr<FileDataResponse *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<FileDataResponse *>>,std::__shared_ptr<FileDataResponse *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<FileDataResponse *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_26DDBAC;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<std::shared_ptr<xbox::services::http_call_response>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr const&<pplx::details::_ExceptionHolder>)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<std::shared_ptr<xbox::services::http_call_response>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr const&<pplx::details::_ExceptionHolder>)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


void __fastcall std::_Destroy<MobSpawnerData>(int a1)
{
  int v1; // r4@1
  void (*v2)(void); // r3@1
  void (*v3)(void); // r3@3
  void (*v4)(void); // r3@5
  int v5; // r1@7
  void *v6; // r0@7
  int v7; // r1@8
  void *v8; // r0@8
  int v9; // r1@9
  void *v10; // r0@9
  unsigned int *v11; // r12@11
  signed int v12; // r1@13
  unsigned int *v13; // r12@15
  signed int v14; // r1@17
  unsigned int *v15; // r2@19
  signed int v16; // r1@21

  v1 = a1;
  v2 = *(void (**)(void))(a1 + 112);
  if ( v2 )
    v2();
  v3 = *(void (**)(void))(v1 + 96);
  if ( v3 )
    v3();
  v4 = *(void (**)(void))(v1 + 80);
  if ( v4 )
    v4();
  v5 = *(_DWORD *)(v1 + 12);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v5 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = *(_DWORD *)(v1 + 8);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v7 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = *(_DWORD *)(v1 + 4);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v9 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::user_context_auth_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::user_context_auth_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<serialize<ShapedRecipe>::write(ShapedRecipe const&,BinaryStream &)::{lambda(BinaryStream &,ItemInstance const&)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIJsonLoadTests::UI_JsonLoad_ScreenWithMissingVariable(void)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


std::bad_alloc *__fastcall std::bad_alloc::~bad_alloc(std::bad_alloc *this)
{
  std::bad_alloc *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2772780;
  j_std::exception::~exception();
  return v1;
}


int __fastcall std::_Function_base::_Base_manager<PlayerHotbarPacket::write(BinaryStream &)const::{lambda(BinaryStream &,unsigned int const&)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(ptr);
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIScreenControllerEventTests::UI_HandleEventPointerHeld(void)::{lambda(PointerHeldScreenEventData &)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


std::__exception_ptr::exception_ptr *__fastcall std::current_exception(std::__exception_ptr::exception_ptr *a1)
{
  std::__exception_ptr::exception_ptr *v1; // r4@1
  int v2; // r1@1
  std::__exception_ptr::exception_ptr *result; // r0@3
  unsigned int v4; // r3@10
  void *v5; // r1@12

  v1 = a1;
  v2 = *j_j___cxa_get_globals();
  if ( v2
    && *(_BYTE *)(v2 + 32) == 71
    && *(_BYTE *)(v2 + 33) == 78
    && *(_BYTE *)(v2 + 34) == 85
    && *(_BYTE *)(v2 + 35) == 67
    && *(_BYTE *)(v2 + 36) == 67
    && *(_BYTE *)(v2 + 37) == 43
    && *(_BYTE *)(v2 + 38) == 43
    && (v4 = *(_BYTE *)(v2 + 39), v4 <= 1) )
  {
    if ( v4 == 1 )
      v5 = *(void **)v2;
    else
      v5 = (void *)(v2 + 120);
    j_std::__exception_ptr::exception_ptr::exception_ptr(v1, v5);
    result = v1;
  }
  else
    j_std::__exception_ptr::exception_ptr::exception_ptr(v1);
  return result;
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>::~_Impl(void *ptr)
{
  std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>::~_Impl(ptr);
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>::~_Impl(void *ptr)
{
  void *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = ptr;
  *(_DWORD *)ptr = &off_26D51AC;
  v2 = *((_DWORD *)ptr + 2);
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
  j_j_j__ZdlPv_3(v1);
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // r6@1
  int v4; // r4@1
  _DWORD *v5; // r5@1
  _DWORD *v6; // r0@1
  int v7; // r5@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r6@8
  unsigned int v11; // r0@10

  v3 = a3;
  v4 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v5 = operator new(0x10u);
  *(_DWORD *)v4 = v5;
  v5[1] = 0;
  v5[2] = 0;
  *v5 = &off_26D523C;
  v5[3] = *v3;
  v6 = operator new(0x14u);
  v6[1] = 1;
  v6[2] = 1;
  *v6 = &off_26D5250;
  v6[4] = v5;
  v7 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = v6;
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
  return v4;
}


int __fastcall std::_Function_base::_Base_manager<Concurrency::streams::details::streambuf_state_manager<char>::getn(char *,unsigned int)::{lambda(unsigned int)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<web::json::value>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


int *__fastcall std::promise<void>::~promise(int *a1)
{
  int *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@2
  void (***v4)(void); // r1@4
  void (***v5)(void); // r0@7
  int v6; // r5@9
  unsigned int *v7; // r1@10
  unsigned int v8; // r0@12
  unsigned int *v9; // r6@16
  unsigned int v10; // r0@18
  void (***v12)(void); // [sp+4h] [bp-14h]@4

  v1 = a1;
  v2 = *a1;
  if ( v2 )
  {
    v3 = v1[1];
    if ( !v3 || *(_DWORD *)(v3 + 4) != 1 )
    {
      v4 = (void (***)(void))v1[2];
      v1[2] = 0;
      v12 = v4;
      std::__future_base::_State_baseV2::_M_break_promise(v2, (int *)&v12);
      if ( v12 )
        (**v12)();
      v12 = 0;
    }
  }
  v5 = (void (***)(void))v1[2];
  if ( v5 )
    (**v5)();
  v1[2] = 0;
  v6 = v1[1];
  if ( v6 )
    v7 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    else
      v8 = (*v7)--;
    if ( v8 == 1 )
      v9 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return v1;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::real_time_activity::real_time_activity_service *>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::real_time_activity::real_time_activity_service *>(
           a1,
           a2);
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<LevelArchiver::Result *,std::__shared_ptr<LevelArchiver::Result *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<LevelArchiver::Result *>>,std::__shared_ptr<LevelArchiver::Result *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<LevelArchiver::Result *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<LevelArchiver::Result *,std::__shared_ptr<LevelArchiver::Result *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<LevelArchiver::Result *>>,std::__shared_ptr<LevelArchiver::Result *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<LevelArchiver::Result *>>>(
           a1,
           a2);
}


int std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_get_deleter()
{
  return 0;
}


void __fastcall __noreturn std::__detail::_Scanner<char>::_M_scan_normal(int a1)
{
  std::__detail::_Scanner<char>::_M_scan_normal(a1);
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIDefRepositoryTests::UIDefRepository_ForEachControlWithNoControls_CallbackNotCalled(void)::{lambda(Json::Value const&,std::string const&)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


signed int __fastcall std::regex_traits<char>::isctype(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // r6@1
  int v4; // r4@1
  int v5; // r0@1
  int v6; // r5@1
  char v7; // r1@1
  signed int result; // r0@1
  int v9; // r0@4
  int v10; // r0@11
  int v11; // r1@16

  v3 = a3;
  v4 = a2;
  v5 = sub_119E498(a1);
  v6 = v5;
  v7 = *(_BYTE *)(*(_DWORD *)(v5 + 24) + v4) & v3;
  result = 1;
  if ( !v7 )
  {
    if ( (unsigned __int8)v3 >> 8
      && (!*(_BYTE *)(v6 + 28) ? (sub_119C924(v6),
                                  v9 = (*(int (__fastcall **)(_DWORD, signed int))(*(_DWORD *)v6 + 24))(v6, 95)) : (v9 = *(_BYTE *)(v6 + 124)),
          v9 == v4) )
    {
      result = 1;
    }
    else if ( (v3 >> 8) & 2 )
      if ( *(_BYTE *)(v6 + 28) )
      {
        v10 = *(_BYTE *)(v6 + 61);
      }
      else
        sub_119C924(v6);
        v10 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v6 + 24))(v6, 32);
      if ( v10 == v4 )
        result = 1;
        if ( *(_BYTE *)(v6 + 28) )
        {
          v11 = *(_BYTE *)(v6 + 38);
        }
        else
          sub_119C924(v6);
          v11 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v6 + 24))(v6, 9);
        result = 0;
        if ( v11 == v4 )
          result = 1;
    else
      result = 0;
  }
  return result;
}


int __fastcall std::_Function_base::_Base_manager<InventoryContentPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(ptr);
}


void __fastcall std::default_delete<TextToIconMapper>::operator()(int a1, int a2)
{
  std::default_delete<TextToIconMapper>::operator()(a1, a2);
}


int __fastcall std::_Function_base::_Base_manager<Concurrency::streams::details::streambuf_state_manager<char>::nextc(void)::{lambda(int)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::system::xbox_live_services_settings *>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1
  __int64 v5; // r1@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = j_operator new(0x10u);
  HIDWORD(v5) = 1;
  LODWORD(v5) = &off_2767DD0;
  *(_QWORD *)v4 = v5;
  v4[2] = 1;
  v4[3] = v3;
  *v2 = v4;
  return v2;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(ptr);
}


void __fastcall std::__future_base::_Result<void>::~_Result(int a1)
{
  void *v1; // r0@1

  v1 = (void *)sub_DA8AD4(a1);
  j_j_j__ZdlPv_3(v1);
}


    if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(v2) == 1 )
{
      v10 = (_BYTE **)(v2 + 228);
      v9 = *(_BYTE **)(v2 + 228);
      if ( *((_DWORD *)v9 - 1) >= 0 )
      {
        sub_119CB68((const void **)(v2 + 228));
        v9 = *v10;
      }
      v11 = *v9;
      if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(v2) == 1 )
        v12 = *v10;
        if ( *((_DWORD *)*v10 - 1) >= 0 )
        {
          sub_119CB68((const void **)(v2 + 228));
          v12 = *v10;
        }
        if ( *v12 == 45 )
          if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(v2) == 1 )
          {
            v13 = *v10;
            if ( *((_DWORD *)*v10 - 1) >= 0 )
            {
              sub_119CB68((const void **)(v2 + 228));
              v13 = *v10;
            }
            v14 = v11 | (*v13 << 8);
            v26 = v14;
            *(_QWORD *)&v15 = *(_QWORD *)(v5 + 60);
            if ( v15 == v16 )
              std::vector<std::pair<char,char>,std::allocator<std::pair<char,char>>>::_M_emplace_back_aux<std::pair<char,char>>(
                (unsigned __int64 *)(v5 + 56),
                &v26);
            else
              *v15 = v14;
              *(_DWORD *)(v5 + 60) += 2;
            return;
          }
          if ( *(_DWORD *)(v2 + 144) != 11 )
            sub_119E4A8(8);
        v19 = *v10;
          v19 = *v10;
        v20 = *v19;
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_add_char(v5);
      j_j_j__ZNSt8__detail15_BracketMatcherISt12regex_traitsIcELb1ELb0EE11_M_add_charEc(v5);
      return;
    }
    if ( *(_DWORD *)(v2 + 144) != 14 )
      sub_119E4D8(4);
    EntityInteraction::setInteractText((int *)(v2 + 228), (int *)(v2 + 172));
    if ( (unsigned int)*(_QWORD *)(v2 + 160) == *(_QWORD *)(v2 + 160) >> 32 )
    {
      *(_DWORD *)(v2 + 144) = 28;
    else
      v17 = *(_DWORD *)(v2 + 136);
      if ( v17 == 2 )
        std::__detail::_Scanner<char>::_M_scan_in_bracket(v3);
      else
        if ( v17 == 1 )
          std::__detail::_Scanner<char>::_M_scan_in_brace(v3);
        if ( !v17 )
          std::__detail::_Scanner<char>::_M_scan_normal(v3);
    v21 = *(_BYTE **)(v2 + 228);
    v22 = *(_DWORD *)(v2 + 8);
    if ( *((_DWORD *)v21 - 1) >= 0 )
      sub_119CB68((const void **)(v2 + 228));
      v21 = *(_BYTE **)(v2 + 228);
    v23 = *(_BYTE *)(*(_DWORD *)(v22 + 24) + *v21);
    v18 = std::regex_traits<char>::lookup_classname<char const*>(
            *(_DWORD *)(v5 + 88),
            v21,
            &v21[*((_DWORD *)v21 - 3)],
            1);
    v27 = v18;
    v24 = v23 & 1;
    if ( !(v18 & 0x3FF) )
      sub_119E4A8(1);
    if ( v24 )
      v25 = *(_QWORD *)(v5 + 72);
      if ( (_DWORD)v25 == HIDWORD(v25) )
        std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::_M_emplace_back_aux<std::regex_traits<char>::_RegexMask const&>(
          (unsigned __int64 *)(v5 + 68),
          &v27);
        *(_WORD *)v25 = v18;
        *(_DWORD *)(v5 + 72) += 2;
LABEL_48:
    *(_WORD *)(v5 + 80) = (unsigned __int8)(*(_BYTE *)(v5 + 80) | v18) | (unsigned __int16)((*(_BYTE *)(v5 + 81) | (v18 >> 8)) << 8);
    return;
  }
  EntityInteraction::setInteractText((int *)(v2 + 228), (int *)(v2 + 172));
  if ( (unsigned int)*(_QWORD *)(v2 + 160) == *(_QWORD *)(v2 + 160) >> 32 )
  {
    *(_DWORD *)(v2 + 144) = 28;
  else
    v8 = *(_DWORD *)(v2 + 136);
    if ( v8 == 2 )
      std::__detail::_Scanner<char>::_M_scan_in_bracket(v3);
      if ( v8 == 1 )
        std::__detail::_Scanner<char>::_M_scan_in_brace(v3);
      if ( !v8 )
        std::__detail::_Scanner<char>::_M_scan_normal(v3);
  j_j_j__ZNSt8__detail15_BracketMatcherISt12regex_traitsIcELb1ELb0EE24_M_add_equivalence_classERKSs(
    v5,
    (_BYTE **)(v2 + 228));
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(a1);
}


int __fastcall std::_Function_base::_Base_manager<AddEntityPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#2}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


_DWORD *__fastcall std::to_string<int>(int *a1, _DWORD *a2)
{
  _DWORD *v2; // ST08_4@1
  int *v3; // ST0C_4@1
  void **v4; // ST00_4@1
  void **v5; // r5@1
  void **v6; // r2@1
  char *v7; // r0@1
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  void **v11; // [sp+10h] [bp-E8h]@1
  int v12; // [sp+14h] [bp-E4h]@1
  void **v13; // [sp+18h] [bp-E0h]@1
  void **v14; // [sp+1Ch] [bp-DCh]@1
  int v15; // [sp+20h] [bp-D8h]@1
  int v16; // [sp+24h] [bp-D4h]@1
  int v17; // [sp+28h] [bp-D0h]@1
  int v18; // [sp+2Ch] [bp-CCh]@1
  int v19; // [sp+30h] [bp-C8h]@1
  int v20; // [sp+34h] [bp-C4h]@1
  int v21; // [sp+38h] [bp-C0h]@1
  int v22; // [sp+3Ch] [bp-BCh]@1
  char *v23; // [sp+40h] [bp-B8h]@1
  void **v24; // [sp+44h] [bp-B4h]@1
  int v25; // [sp+B4h] [bp-44h]@1
  __int16 v26; // [sp+B8h] [bp-40h]@1
  int v27; // [sp+BCh] [bp-3Ch]@1
  int v28; // [sp+C0h] [bp-38h]@1
  int v29; // [sp+C4h] [bp-34h]@1
  int v30; // [sp+C8h] [bp-30h]@1

  v2 = a2;
  v3 = a1;
  sub_21B6308((int)&v24);
  v24 = &off_26D3AF0;
  v4 = off_26D3F60;
  v5 = (void **)off_26D3F64;
  v25 = 0;
  v26 = 0;
  v29 = 0;
  v30 = 0;
  v27 = 0;
  v28 = 0;
  v11 = (void **)off_26D3F68;
  *(void ***)((char *)&v11 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v12 = 0;
  sub_21B5AD4((int)*(v11 - 3) + (_DWORD)&v11, 0);
  v13 = (void **)off_26D3F70;
  *(void ***)((char *)&v13 + *((_DWORD *)off_26D3F70 - 3)) = (void **)off_26D3F74;
  sub_21B5AD4((int)*(v13 - 3) + (_DWORD)&v13, 0);
  v11 = v5;
  *(_DWORD *)((char *)*(v5 - 3) + (_DWORD)&v11) = off_26D3F78;
  v11 = &off_26D3F94;
  v24 = &off_26D3FBC;
  v13 = &off_26D3FA8;
  v20 = 0;
  v18 = 0;
  v19 = 0;
  v16 = 0;
  v17 = 0;
  v14 = &off_26D40A8;
  v15 = 0;
  sub_21C9520((unsigned int **)&v21);
  v14 = &off_27734E8;
  v22 = 24;
  v23 = (char *)&unk_28898CC;
  sub_21B5AD4((int)*(v11 - 3) + (_DWORD)&v11, (unsigned int)&v14);
  sub_21CC43C(&v13, *v2);
  sub_21CFED8(v3, (int)&v14);
  v11 = v4;
  v6 = off_26D3F84;
  *(_DWORD *)((char *)*(v4 - 3) + (_DWORD)&v11) = off_26D3F80[0];
  v13 = v6;
  v7 = v23 - 12;
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  sub_21C802C((unsigned int **)&v21);
  return sub_21B6560(&v24);
}


int __fastcall std::_Function_base::_Base_manager<AddPlayerPacket::write(BinaryStream &)const::{lambda(BinaryStream &,EntityLink const&)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<serialize<ShulkerBoxRecipe>::read(ReadOnlyBinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<web::http::http_response::extract_utf8string(bool)const::{lambda(unsigned long long)#1}>::_M_manager(_DWORD *a1, void **a2, int a3)
{
  void **v3; // r5@1
  _DWORD *v4; // r4@1
  _DWORD *v5; // r0@4
  int v6; // r4@5
  int v7; // r5@6
  unsigned int *v8; // r1@7
  unsigned int v9; // r0@9
  _DWORD *v10; // r1@11
  int v11; // r2@11
  unsigned int *v12; // r2@12
  unsigned int v13; // r3@14
  unsigned int *v15; // r6@21
  unsigned int v16; // r0@23

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *a1 )
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
          v15 = (unsigned int *)(v7 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          if ( &pthread_create )
          {
            __dmb();
            do
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
          }
          else
            v16 = (*v15)--;
          if ( v16 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
      }
      operator delete((void *)v6);
    }
  }
  else
    if ( a3 == 2 )
      v5 = operator new(0xCu);
      v10 = *v3;
      *v5 = *(_DWORD *)*v3;
      v11 = v10[1];
      v5[1] = v11;
      if ( v11 )
        v12 = (unsigned int *)(v11 + 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 + 1, v12) );
          ++*v12;
      *((_BYTE *)v5 + 8) = *((_BYTE *)v10 + 8);
      goto LABEL_18;
    if ( a3 == 1 )
      v5 = *a2;
LABEL_18:
      *v4 = v5;
      return 0;
  return 0;
}


void __fastcall std::default_delete<BehaviorComponent>::operator()(int a1, int a2)
{
  int v2; // r9@1
  char *v3; // r4@2
  char *v4; // r5@2
  int v5; // r7@9
  unsigned int *v6; // r2@11
  signed int v7; // r1@13
  int v8; // r6@19
  int v9; // r0@19
  int v10; // r1@21
  void *v11; // r0@21
  void *v12; // r0@23
  int v13; // r0@26

  v2 = a2;
  if ( a2 )
  {
    v3 = (char *)(*(_QWORD *)(a2 + 44) >> 32);
    v4 = (char *)*(_QWORD *)(a2 + 44);
    if ( v4 != v3 )
    {
      do
      {
        if ( *(_DWORD *)v4 )
          (*(void (**)(void))(**(_DWORD **)v4 + 4))();
        *(_DWORD *)v4 = 0;
        v4 += 4;
      }
      while ( v3 != v4 );
      v4 = *(char **)(v2 + 44);
    }
    if ( v4 )
      operator delete(v4);
    v5 = *(_DWORD *)(v2 + 24);
    while ( v5 )
      v8 = v5;
      v9 = *(_DWORD *)(v5 + 8);
      v5 = *(_DWORD *)v5;
      if ( v9 )
        (*(void (**)(void))(*(_DWORD *)v9 + 4))();
      *(_DWORD *)(v8 + 8) = 0;
      v10 = *(_DWORD *)(v8 + 4);
      v11 = (void *)(v10 - 12);
      if ( (int *)(v10 - 12) != &dword_28898C0 )
        v6 = (unsigned int *)(v10 - 4);
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
          j_j_j_j__ZdlPv_9(v11);
      operator delete((void *)v8);
    _aeabi_memclr4(*(_QWORD *)(v2 + 16), 4 * (*(_QWORD *)(v2 + 16) >> 32));
    *(_DWORD *)(v2 + 24) = 0;
    *(_DWORD *)(v2 + 28) = 0;
    v12 = *(void **)(v2 + 16);
    if ( v12 && (void *)(v2 + 40) != v12 )
      operator delete(v12);
    v13 = *(_DWORD *)(v2 + 12);
    if ( v13 )
      (*(void (**)(void))(*(_DWORD *)v13 + 4))();
    *(_DWORD *)(v2 + 12) = 0;
    BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((BehaviorTreeDefinitionPtr *)(v2 + 4));
    operator delete((void *)v2);
  }
}


int __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_Compiler(int a1, int a2, int a3, unsigned int **a4, int a5)
{
  int v5; // r4@1
  int v6; // r0@1
  int v7; // r6@1
  int v8; // r5@1
  unsigned int **v9; // r0@3
  int v10; // r7@3
  __int64 v11; // kr00_8@3
  unsigned int **v12; // r0@3
  int v13; // r1@3
  int v14; // r1@3
  __int64 v15; // kr08_8@4
  __int64 v16; // kr10_8@4
  __int64 v17; // kr18_8@4
  __int64 v18; // kr20_8@4
  __int64 v19; // kr28_8@4
  __int64 v20; // kr30_8@4
  void *v21; // r7@4
  int v22; // r0@4
  unsigned int v23; // r8@6
  void *v24; // t1@7
  int v25; // r5@9
  int v26; // r7@9
  int v27; // r0@11
  __int64 v28; // r0@19
  int v29; // r5@20
  int v30; // r6@20
  int v31; // r0@20
  int v32; // r0@21
  int v33; // r0@21
  int v34; // r1@21
  int v35; // r0@22
  int v36; // r7@22
  int v37; // r0@22
  int v38; // r1@22
  int v39; // r0@22
  signed int v40; // r3@25
  int v41; // r2@26
  int v42; // r3@27
  bool v43; // zf@29
  signed int v44; // r3@33
  int v45; // r2@34
  int v46; // r3@35
  int v48; // [sp+Ch] [bp-5Ch]@3
  int v49; // [sp+10h] [bp-58h]@3
  int v50; // [sp+14h] [bp-54h]@4
  __int64 v51; // [sp+18h] [bp-50h]@4
  __int64 v52; // [sp+20h] [bp-48h]@4
  __int64 v53; // [sp+28h] [bp-40h]@4
  __int64 v54; // [sp+30h] [bp-38h]@4
  char v55; // [sp+38h] [bp-30h]@3
  char v56; // [sp+3Ch] [bp-2Ch]@3

  v5 = a1;
  v6 = a5;
  v7 = a2;
  v8 = a3;
  if ( !(a5 & 0x3F0) )
    v6 = a5 | 0x10;
  *(_DWORD *)v5 = v6;
  *(_DWORD *)(v5 + 4) = a4;
  v9 = sub_119E478((unsigned int **)&v56, a4);
  v10 = sub_119E498((int)v9);
  sub_119C954((unsigned int **)&v56);
  *(_DWORD *)(v5 + 8) = v10;
  v11 = *(_QWORD *)v5;
  v12 = sub_119E478((unsigned int **)&v55, (unsigned int **)(*(_QWORD *)v5 >> 32));
  v48 = v5 + 12;
  std::__detail::_Scanner<char>::_Scanner(v5 + 12, v7, v8, v11, (int)v12);
  sub_119C954((unsigned int **)&v55);
  v13 = *(_DWORD *)v5;
  *(_DWORD *)(v5 + 184) = 0;
  *(_DWORD *)(v5 + 188) = 0;
  *(_DWORD *)(v5 + 192) = 0;
  *(_DWORD *)(v5 + 196) = v13;
  *(_BYTE *)(v5 + 212) = 0;
  *(_DWORD *)(v5 + 204) = 0;
  *(_DWORD *)(v5 + 208) = 0;
  *(_DWORD *)(v5 + 200) = 0;
  *(_DWORD *)(v5 + 216) = 0;
  *(_DWORD *)(v5 + 220) = 0;
  *(_DWORD *)(v5 + 224) = 0;
  *(_DWORD *)(v5 + 228) = &unk_28898CC;
  _aeabi_memclr8(&v49, 40);
  std::_Deque_base<std::__detail::_StateSeq<std::regex_traits<char>>,std::allocator<std::__detail::_StateSeq<std::regex_traits<char>>>>::_M_initialize_map(
    (int)&v49,
    0);
  _aeabi_memclr4(v5 + 232, 40);
    v5 + 232,
  v14 = v49;
  if ( v49 )
  {
    v15 = *(_QWORD *)(v5 + 240);
    v16 = *(_QWORD *)(v5 + 248);
    v17 = v51;
    *(_QWORD *)(v5 + 248) = v52;
    *(_QWORD *)(v5 + 240) = v17;
    v51 = v15;
    v52 = v16;
    v18 = *(_QWORD *)(v5 + 256);
    v19 = *(_QWORD *)(v5 + 264);
    v20 = v53;
    *(_QWORD *)(v5 + 264) = v54;
    *(_QWORD *)(v5 + 256) = v20;
    v53 = v18;
    v54 = v19;
    v21 = *(void **)(v5 + 232);
    *(_DWORD *)(v5 + 232) = v14;
    v49 = (int)v21;
    v22 = *(_DWORD *)(v5 + 236);
    *(_DWORD *)(v5 + 236) = v50;
    v50 = v22;
    if ( v21 )
    {
      if ( HIDWORD(v16) < HIDWORD(v19) + 4 )
      {
        v23 = HIDWORD(v16) - 4;
        do
        {
          v24 = *(void **)(v23 + 4);
          v23 += 4;
          operator delete(v24);
        }
        while ( v23 < HIDWORD(v19) );
      }
      operator delete(v21);
    }
  }
  v25 = *(_DWORD *)(v5 + 200);
  v26 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_subexpr_begin(v5 + 184);
  *(_DWORD *)(*(_DWORD *)(v5 + 216) + 36 * v25 + 4) = v26;
  std::__detail::_Compiler<std::regex_traits<char>>::_M_disjunction(v5);
  if ( *(_DWORD *)(v5 + 144) != 28 )
    sub_119E4A8(5);
  EntityInteraction::setInteractText((int *)(v5 + 228), (int *)(v5 + 172));
  if ( (unsigned int)*(_QWORD *)(v5 + 160) == *(_QWORD *)(v5 + 160) >> 32 )
    *(_DWORD *)(v5 + 144) = 28;
  else
    v27 = *(_DWORD *)(v5 + 136);
    if ( v27 == 2 )
      std::__detail::_Scanner<char>::_M_scan_in_bracket(v48);
    else
      if ( v27 == 1 )
        std::__detail::_Scanner<char>::_M_scan_in_brace(v48);
      if ( !v27 )
        std::__detail::_Scanner<char>::_M_scan_normal(v48);
  v28 = *(_QWORD *)(v5 + 256);
  if ( (_DWORD)v28 == HIDWORD(v28) )
    v29 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 268) - 4) + 496) >> 32;
    v30 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 268) - 4) + 496);
    operator delete((void *)v28);
    v32 = *(_DWORD *)(v5 + 268);
    *(_DWORD *)(v5 + 268) = v32 - 4;
    v33 = *(_DWORD *)(v32 - 4);
    *(_DWORD *)(v5 + 260) = v33;
    v34 = v33 + 504;
    v31 = v33 + 492;
    *(_DWORD *)(v5 + 264) = v34;
    v29 = *(_QWORD *)(v28 - 8) >> 32;
    v30 = *(_QWORD *)(v28 - 8);
    v31 = v28 - 12;
  *(_DWORD *)(v5 + 256) = v31;
  *(_DWORD *)(*(_DWORD *)(v5 + 216) + 36 * v26 + 4) = v30;
  v35 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_subexpr_end(v5 + 184);
  v36 = v35;
  *(_DWORD *)(*(_DWORD *)(v5 + 216) + 36 * v29 + 4) = v35;
  v37 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_accept(v5 + 184);
  v38 = *(_DWORD *)(v5 + 216);
  *(_DWORD *)(v38 + 36 * v36 + 4) = v37;
  v39 = *(_DWORD *)(v5 + 220);
  while ( v38 != v39 )
    v40 = *(_DWORD *)(v38 + 4);
    if ( v40 >= 0 )
      v41 = *(_DWORD *)(v5 + 216);
      do
        v42 = 9 * v40;
        if ( *(_DWORD *)(v41 + 4 * v42) != 9 )
          break;
        v40 = *(_DWORD *)(v41 + 4 * v42 + 4);
        *(_DWORD *)(v38 + 4) = v40;
      while ( v40 > -1 );
    v43 = *(_DWORD *)v38 == 6;
    if ( *(_DWORD *)v38 != 6 )
      v43 = *(_DWORD *)v38 == 1;
    if ( v43 )
      v44 = *(_DWORD *)(v38 + 12);
      if ( v44 >= 0 )
        v45 = *(_DWORD *)(v5 + 216);
          v46 = 9 * v44;
          if ( *(_DWORD *)(v45 + 4 * v46) != 9 )
            break;
          v44 = *(_DWORD *)(v45 + 4 * v46 + 4);
          *(_DWORD *)(v38 + 12) = v44;
        while ( v44 > -1 );
    v38 += 36;
  return v5;
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>::~_Impl(void *ptr)
{
  void *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = ptr;
  *(_DWORD *)ptr = &off_26D51AC;
  v2 = *((_DWORD *)ptr + 2);
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
  j_j_j__ZdlPv_3(v1);
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<SkinPackModel *,std::__shared_ptr<SkinPackModel *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<SkinPackModel *>>,std::__shared_ptr<SkinPackModel *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<SkinPackModel *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<SkinPackModel *,std::__shared_ptr<SkinPackModel *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<SkinPackModel *>>,std::__shared_ptr<SkinPackModel *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<SkinPackModel *>>>(
           a1,
           a2);
}


int __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>::_M_run(int a1)
{
  int v1; // r4@1
  int v2; // r6@1
  int **v3; // r0@2
  int result; // r0@4

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)ThreadLocal<int *>::getLocal((int)&ServiceLocator<int>::mService) = v2;
  if ( *(_DWORD *)ThreadLocal<int *>::getLocal((int)&ServiceLocator<int>::mService) )
    v3 = (int **)ThreadLocal<int *>::getLocal((int)&ServiceLocator<int>::mService);
  else
    v3 = (int **)&ServiceLocator<int>::mDefaultService;
  result = **v3;
  **(_DWORD **)(v1 + 12) = result;
  return result;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::system::sign_in_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::system::sign_in_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>::~_Impl(void *ptr)
{
  void *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = ptr;
  *(_DWORD *)ptr = &off_26D51AC;
  v2 = *((_DWORD *)ptr + 2);
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
  j_j_j__ZdlPv_3(v1);
}


int __fastcall std::_Function_base::_Base_manager<web::websockets::client::details::wspp_callback_client::connect(void)::{lambda(std::weak_ptr<void>,boost::asio::ssl::stream<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>> &)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  return std::_Function_base::_Base_manager<web::websockets::client::details::wspp_callback_client::connect(void)::{lambda(std::weak_ptr<void>,boost::asio::ssl::stream<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>> &)#1}>::_M_manager(
           a1,
           a2,
           a3);
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // r6@1
  int v4; // r4@1
  _DWORD *v5; // r5@1
  _DWORD *v6; // r0@1
  int v7; // r5@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r6@8
  unsigned int v11; // r0@10

  v3 = a3;
  v4 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v5 = operator new(0x10u);
  *(_DWORD *)v4 = v5;
  v5[1] = 0;
  v5[2] = 0;
  *v5 = &off_26D5198;
  v5[3] = *v3;
  v6 = operator new(0x14u);
  v6[1] = 1;
  v6[2] = 1;
  *v6 = &off_26D51C0;
  v6[4] = v5;
  v7 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = v6;
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
  return v4;
}


int __fastcall std::_Function_base::_Base_manager<web::websockets::client::details::wspp_callback_client::connect(void)::{lambda(std::weak_ptr<void>)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  return std::_Function_base::_Base_manager<web::websockets::client::details::wspp_callback_client::connect(void)::{lambda(std::weak_ptr<void>)#1}>::_M_manager(
           a1,
           a2,
           a3);
}


void __fastcall __noreturn std::make_exception_ptr<std::runtime_error>(int a1, int a2)
{
  std::make_exception_ptr<std::runtime_error>(a1, a2);
}


int __fastcall std::swap<RenderControlMetadata>(int a1, _QWORD *a2)
{
  int v2; // r5@1
  _QWORD *v3; // r4@1
  __int64 v4; // kr00_8@1
  int v5; // r8@1
  int v6; // r12@1
  int v7; // r9@1
  int v8; // lr@1
  __int64 v9; // r1@1
  int v10; // r7@1
  unsigned int *v11; // r1@2
  unsigned int v12; // r0@4
  unsigned int *v13; // r6@8
  int v14; // r8@8
  unsigned int v15; // r0@10
  int v16; // r6@14
  int v17; // r5@15
  unsigned int *v18; // r1@16
  unsigned int v19; // r0@18
  int v20; // r11@22
  unsigned int *v21; // r7@22
  int v22; // r9@22
  int v23; // r8@22
  unsigned int v24; // r0@24
  void (__fastcall *v25)(int); // r1@28
  int v26; // r0@28
  int v27; // r5@28
  int result; // r0@29
  int v29; // [sp+8h] [bp-38h]@8
  int v30; // [sp+Ch] [bp-34h]@1
  __int16 v31; // [sp+10h] [bp-30h]@1
  int v32; // [sp+14h] [bp-2Ch]@1
  int v33; // [sp+18h] [bp-28h]@1

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)a1;
  v30 = *(_QWORD *)a1 >> 32;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v5 = *(_QWORD *)(a1 + 8) >> 32;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(a1 + 16) >> 32;
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *a2;
  v33 = *(_DWORD *)(a1 + 32);
  v32 = *(_DWORD *)(a1 + 28);
  v31 = *(_WORD *)(a1 + 24);
  *(_DWORD *)v3 = 0;
  *((_DWORD *)v3 + 1) = 0;
  *(_DWORD *)a1 = v9;
  v10 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = HIDWORD(v9);
  if ( v10 )
  {
    v11 = (unsigned int *)(v10 + 4);
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
      v29 = v5;
      v13 = (unsigned int *)(v10 + 8);
      v14 = v6;
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
      {
        v6 = v14;
        __dmb();
        do
          v15 = __ldrex(v13);
        while ( __strex(v15 - 1, v13) );
        v5 = v29;
      }
      else
        v15 = *v13;
        --*v13;
      if ( v15 == 1 )
        v16 = v6;
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
        v6 = v16;
  }
  *(_DWORD *)(v2 + 8) = *((_DWORD *)v3 + 2);
  *(_DWORD *)(v2 + 12) = *((_DWORD *)v3 + 3);
  *(_DWORD *)(v2 + 16) = *((_DWORD *)v3 + 4);
  *(_DWORD *)(v2 + 20) = *((_DWORD *)v3 + 5);
  *(_WORD *)(v2 + 24) = *((_WORD *)v3 + 12);
  *(_QWORD *)(v2 + 28) = *(_QWORD *)((char *)v3 + 28);
  *(_DWORD *)v3 = v4;
  v17 = *((_DWORD *)v3 + 1);
  *((_DWORD *)v3 + 1) = v30;
  if ( v17 )
    v18 = (unsigned int *)(v17 + 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 == 1 )
      v20 = v7;
      v21 = (unsigned int *)(v17 + 8);
      v22 = v5;
      v23 = v6;
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
        v6 = v23;
          v24 = __ldrex(v21);
        while ( __strex(v24 - 1, v21) );
        v5 = v22;
        v24 = *v21;
        --*v21;
      v7 = v20;
      if ( v24 == 1 )
        v25 = *(void (__fastcall **)(int))(*(_DWORD *)v17 + 12);
        v26 = v17;
        v27 = v6;
        v25(v26);
        v6 = v27;
  *((_DWORD *)v3 + 2) = v6;
  *((_DWORD *)v3 + 3) = v5;
  *((_DWORD *)v3 + 4) = v8;
  *((_DWORD *)v3 + 5) = v7;
  *((_WORD *)v3 + 12) = v31;
  *((_DWORD *)v3 + 7) = v32;
  result = v33;
  *((_DWORD *)v3 + 8) = v33;
  return result;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::xbox_live_context_settings *>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1
  __int64 v5; // r1@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = j_operator new(0x10u);
  HIDWORD(v5) = 1;
  LODWORD(v5) = &off_276B614;
  *(_QWORD *)v4 = v5;
  v4[2] = 1;
  v4[3] = v3;
  *v2 = v4;
  return v2;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(ptr);
}


int std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_get_deleter()
{
  return 0;
}


int __fastcall std::__detail::_NFA<std::regex_traits<char>>::_M_insert_dummy(int a1)
{
  int v1; // r4@1
  unsigned __int64 *v2; // r8@1
  __int64 v3; // kr00_8@1
  int v4; // r2@2
  int v5; // r5@2
  int v6; // r6@2
  int v7; // r7@2
  __int64 v8; // kr08_8@2
  void (*v9)(void); // r2@2
  int v10; // r2@2
  int v11; // r6@2
  int v12; // r4@4
  int v14; // [sp+0h] [bp-40h]@1
  int v15; // [sp+4h] [bp-3Ch]@1
  int v16; // [sp+8h] [bp-38h]@2
  int v17; // [sp+Ch] [bp-34h]@2
  int v18; // [sp+10h] [bp-30h]@2
  __int64 v19; // [sp+14h] [bp-2Ch]@2
  void (*v20)(void); // [sp+1Ch] [bp-24h]@1
  int v21; // [sp+20h] [bp-20h]@2

  v1 = a1;
  v14 = 9;
  v15 = -1;
  v20 = 0;
  v2 = (unsigned __int64 *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 36);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    std::vector<std::__detail::_State<std::regex_traits<char>>,std::allocator<std::__detail::_State<std::regex_traits<char>>>>::_M_emplace_back_aux<std::__detail::_State<std::regex_traits<char>>>(
      v2,
      (int)&v14);
    v11 = *(_DWORD *)(v1 + 36);
  }
  else
    v4 = v15;
    v5 = v16;
    v6 = v17;
    v7 = v18;
    *(_DWORD *)v3 = v14;
    *(_DWORD *)(v3 + 4) = v4;
    *(_DWORD *)(v3 + 8) = v5;
    *(_DWORD *)(v3 + 12) = v6;
    *(_DWORD *)(v3 + 16) = v7;
    *(_DWORD *)(v3 + 28) = 0;
    v8 = v19;
    v19 = *(_QWORD *)(v3 + 20);
    *(_QWORD *)(v3 + 20) = v8;
    v9 = v20;
    v20 = *(void (**)(void))(v3 + 28);
    *(_DWORD *)(v3 + 28) = v9;
    v10 = v21;
    v21 = *(_DWORD *)(v3 + 32);
    *(_DWORD *)(v3 + 32) = v10;
    v11 = *(_DWORD *)(a1 + 36) + 36;
    *(_DWORD *)(a1 + 36) = v11;
  v12 = *(_DWORD *)v2;
  if ( v20 )
    v20();
  return 954437177 * ((v11 - v12) >> 2) - 1;
}


int __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_alternative(int a1)
{
  int v1; // r4@1
  __int64 v2; // r0@4
  int v3; // r0@5
  int v4; // r5@5
  int v5; // t1@5
  __int64 v6; // r8@5
  int v7; // r0@6
  int v8; // r0@6
  int v9; // r1@6
  __int64 v10; // r0@7
  int v11; // r6@8 OVERLAPPED
  int v12; // r7@8
  int v13; // r0@8
  int v14; // r1@8
  int v15; // r0@9
  int v16; // r0@9
  int v17; // r0@14
  int v18; // r5@15 OVERLAPPED
  int result; // r0@17
  int v20; // r0@21

  v1 = a1;
  if ( !std::__detail::_Compiler<std::regex_traits<char>>::_M_assertion(a1) )
  {
    if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_atom(v1) != 1 )
    {
      v18 = v1 + 184;
      v11 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_dummy(v1 + 184);
      v13 = *(_DWORD *)(v1 + 256);
      if ( v13 != *(_DWORD *)(v1 + 264) - 12 )
      {
        *(_QWORD *)v13 = *(_QWORD *)(&v11 - 1);
        goto LABEL_17;
      }
      if ( (unsigned int)((*(_QWORD *)(v1 + 232) >> 32)
                        - ((signed int)(*(_DWORD *)(v1 + 268) - *(_QWORD *)(v1 + 232)) >> 2)) <= 1 )
        std::deque<std::__detail::_StateSeq<std::regex_traits<char>>,std::allocator<std::__detail::_StateSeq<std::regex_traits<char>>>>::_M_reallocate_map(
          v1 + 232,
          1u,
          0);
      *(_DWORD *)(*(_DWORD *)(v1 + 268) + 4) = operator new(0x1F8u);
      v17 = *(_DWORD *)(v1 + 256);
      *(_QWORD *)v17 = *(_QWORD *)(&v11 - 1);
LABEL_21:
      *(_DWORD *)(v17 + 8) = v11;
      v20 = *(_DWORD *)(v1 + 268);
      *(_DWORD *)(v1 + 268) = v20 + 4;
      result = *(_DWORD *)(v20 + 4);
      *(_DWORD *)(v1 + 260) = result;
      *(_DWORD *)(v1 + 264) = result + 504;
      goto LABEL_22;
    }
    while ( std::__detail::_Compiler<std::regex_traits<char>>::_M_quantifier(v1) )
      ;
  }
  v2 = *(_QWORD *)(v1 + 256);
  if ( (_DWORD)v2 == HIDWORD(v2) )
    HIDWORD(v2) = *(_DWORD *)(*(_DWORD *)(v1 + 268) - 4);
    v4 = *(_DWORD *)(HIDWORD(v2) + 492);
    v6 = *(_QWORD *)(HIDWORD(v2) + 496);
    operator delete((void *)v2);
    v7 = *(_DWORD *)(v1 + 268);
    *(_DWORD *)(v1 + 268) = v7 - 4;
    v8 = *(_DWORD *)(v7 - 4);
    *(_DWORD *)(v1 + 260) = v8;
    v9 = v8 + 504;
    v3 = v8 + 492;
    *(_DWORD *)(v1 + 264) = v9;
  else
    v5 = *(_DWORD *)(v2 - 12);
    v3 = v2 - 12;
    v4 = v5;
    v6 = *(_QWORD *)(v3 + 4);
  *(_DWORD *)(v1 + 256) = v3;
  std::__detail::_Compiler<std::regex_traits<char>>::_M_alternative(v1);
  v10 = *(_QWORD *)(v1 + 256);
  if ( (_DWORD)v10 == HIDWORD(v10) )
    v11 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v1 + 268) - 4) + 496) >> 32;
    v12 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v1 + 268) - 4) + 496);
    operator delete((void *)v10);
    v15 = *(_DWORD *)(v1 + 268);
    *(_DWORD *)(v1 + 268) = v15 - 4;
    v16 = *(_DWORD *)(v15 - 4);
    *(_DWORD *)(v1 + 260) = v16;
    v14 = v16 + 504;
    v13 = v16 + 492;
    *(_DWORD *)(v1 + 264) = v14;
    v11 = *(_QWORD *)(v10 - 8) >> 32;
    v12 = *(_QWORD *)(v10 - 8);
    v13 = v10 - 12;
    v14 = *(_DWORD *)(v1 + 264);
  *(_DWORD *)(v1 + 256) = v13;
  *(_DWORD *)(*(_DWORD *)(v4 + 32) + 36 * HIDWORD(v6) + 4) = v12;
  if ( v13 == v14 - 12 )
    if ( (unsigned int)((*(_QWORD *)(v1 + 232) >> 32)
                      - ((signed int)(*(_DWORD *)(v1 + 268) - *(_QWORD *)(v1 + 232)) >> 2)) <= 1 )
      std::deque<std::__detail::_StateSeq<std::regex_traits<char>>,std::allocator<std::__detail::_StateSeq<std::regex_traits<char>>>>::_M_reallocate_map(
        v1 + 232,
        1u,
        0);
    *(_DWORD *)(*(_DWORD *)(v1 + 268) + 4) = operator new(0x1F8u);
    v17 = *(_DWORD *)(v1 + 256);
    *(_DWORD *)v17 = v4;
    *(_DWORD *)(v17 + 4) = v6;
    goto LABEL_21;
  *(_DWORD *)v13 = v4;
  *(_DWORD *)(v13 + 4) = v6;
LABEL_17:
  *(_DWORD *)(v13 + 8) = v11;
  result = *(_DWORD *)(v1 + 256) + 12;
LABEL_22:
  *(_DWORD *)(v1 + 256) = result;
  return result;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(ptr);
}


int __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>::_M_run(int a1)
{
  int v1; // r4@1
  int v2; // r6@1
  int **v3; // r0@2
  int result; // r0@4

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)ThreadLocal<int *>::getLocal((int)&ServiceLocator<int>::mService) = v2;
  if ( *(_DWORD *)ThreadLocal<int *>::getLocal((int)&ServiceLocator<int>::mService) )
    v3 = (int **)ThreadLocal<int *>::getLocal((int)&ServiceLocator<int>::mService);
  else
    v3 = (int **)&ServiceLocator<int>::mDefaultService;
  result = **v3;
  **(_DWORD **)(v1 + 12) = result;
  return result;
}


void __fastcall std::default_delete<ExternalServerFile>::operator()(int a1, int a2)
{
  std::default_delete<ExternalServerFile>::operator()(a1, a2);
}


ButtonChordTracker::TrackerMappingAndState *__fastcall std::swap<ButtonChordTracker::TrackerMappingAndState>(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r8@1
  int *v4; // r2@1
  int v5; // r6@1
  unsigned int v6; // r1@1
  bool v7; // zf@1
  int v8; // r0@1
  __int64 v9; // kr00_8@1
  int *v10; // r7@2
  int *v12; // [sp+4h] [bp-4Ch]@1
  int v13; // [sp+8h] [bp-48h]@1
  int v14; // [sp+Ch] [bp-44h]@1
  int v15; // [sp+10h] [bp-40h]@1
  int v16; // [sp+14h] [bp-3Ch]@1
  int v17; // [sp+18h] [bp-38h]@1
  int v18; // [sp+1Ch] [bp-34h]@3
  int v19; // [sp+20h] [bp-30h]@6
  int v20; // [sp+24h] [bp-2Ch]@6
  int v21; // [sp+28h] [bp-28h]@6
  int v22; // [sp+2Ch] [bp-24h]@6
  int v23; // [sp+30h] [bp-20h]@6
  int v24; // [sp+34h] [bp-1Ch]@6

  v2 = a1;
  v3 = a2;
  v4 = *(int **)a1;
  v5 = a1 + 24;
  v12 = v4;
  v6 = *(_DWORD *)(a1 + 4);
  v7 = a1 + 24 == (_DWORD)v4;
  v13 = *(_DWORD *)(a1 + 4);
  v8 = *(_DWORD *)(a1 + 8);
  v14 = v8;
  v15 = *(_DWORD *)(v2 + 12);
  v9 = *(_QWORD *)(v2 + 16);
  v16 = *(_QWORD *)(v2 + 16);
  v17 = HIDWORD(v9);
  if ( v7 )
  {
    v10 = &v18;
    v12 = &v18;
    v18 = *v4;
  }
  else
    v10 = v4;
  if ( v8 )
    v10[*(_WORD *)(v8 + 4) % v6] = (int)&v14;
  *(_DWORD *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  *(_DWORD *)v2 = v5;
  *(_DWORD *)(v2 + 4) = 1;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  v19 = *(_DWORD *)(v2 + 28);
  *(_DWORD *)(v2 + 28) = 0;
  v20 = *(_DWORD *)(v2 + 32);
  *(_DWORD *)(v2 + 32) = 0;
  v21 = *(_DWORD *)(v2 + 36);
  *(_DWORD *)(v2 + 36) = 0;
  v22 = *(_DWORD *)(v2 + 40);
  *(_DWORD *)(v2 + 40) = 0;
  v23 = *(_DWORD *)(v2 + 44);
  *(_DWORD *)(v2 + 44) = 0;
  v24 = *(_DWORD *)(v2 + 48);
  *(_DWORD *)(v2 + 48) = 0;
  ButtonChordTracker::TrackerMappingAndState::operator=(v2, v3);
  ButtonChordTracker::TrackerMappingAndState::operator=(v3, (int)&v12);
  return ButtonChordTracker::TrackerMappingAndState::~TrackerMappingAndState((ButtonChordTracker::TrackerMappingAndState *)&v12);
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_MakeVoidToUnitFunc(std::function<void ()(void)> const&)::{lambda(void)#1}>::_M_manager(void ***a1, int *a2, int a3)
{
  int *v3; // r6@1
  void ***v4; // r5@1
  void **v5; // r0@2
  void **v6; // r0@3
  int v7; // r6@3
  void **v8; // r4@3
  void (__fastcall *v9)(void **, int, signed int); // r3@3
  int result; // r0@5
  void **v11; // r4@6
  void (__fastcall *v12)(void **, void **, signed int); // r3@7

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_MakeVoidToUnitFunc(std::function<void ()(void)> const&)::{lambda(void)#1};
      goto LABEL_12;
    case 2:
      v6 = (void **)j_operator new(0x10u);
      v7 = *v3;
      v8 = v6;
      v6[2] = 0;
      v9 = *(void (__fastcall **)(void **, int, signed int))(v7 + 8);
      if ( v9 )
      {
        v9(v6, v7, 2);
        v8[3] = *(void **)(v7 + 12);
        v8[2] = *(void **)(v7 + 8);
      }
      result = 0;
      *v4 = v8;
      return result;
    case 3:
      v11 = *a1;
      if ( *a1 )
        v12 = (void (__fastcall *)(void **, void **, signed int))v11[2];
        if ( v12 )
          v12(*a1, *a1, 3);
        j_operator delete(v11);
      goto def_1D1A25E;
    case 1:
      v5 = (void **)*a2;
LABEL_12:
      *v4 = v5;
      break;
    default:
def_1D1A25E:
  }
  return result;
}


        std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v27)
{
        !v9) )
  {
    (*(void (__fastcall **)(char *))(**(_DWORD **)v4 + 132))(&v26);
    pplx::get_ambient_scheduler((pplx *)&v29);
    v11 = v30;
    v16 = v29;
    v17 = v30;
    v18 = v29;
    v19 = 0;
    v20 = 0;
    v25 = 0;
    v23 = 0;
    v24 = 0;
    v21 = 0;
    v22 = 0;
    pplx::task_from_exception<bool,std::__exception_ptr::exception_ptr>(
      v5,
      (const std::__exception_ptr::exception_ptr *)&v26,
      (int)&v16);
    if ( v11 )
    {
      v12 = (unsigned int *)(v11 + 4);
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
        v14 = (unsigned int *)(v11 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
        if ( &pthread_create )
        {
          __dmb();
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
        }
        else
          v15 = (*v14)--;
        if ( v15 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
    }
    result = std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v26);
  }
  else
    *(_DWORD *)v5 = *v3;
    result = v3[1];
    v3[1] = 0;
    *(_DWORD *)(v5 + 4) = result;
    *v3 = 0;
  return result;
}


int std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_get_deleter()
{
  return 0;
}


void __fastcall std::swap<PortfolioScreenController::PhotoRecord>(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int *v4; // r7@1
  void *v5; // r0@1
  void *v6; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  int v11; // [sp+4h] [bp-24h]@1
  int v12; // [sp+8h] [bp-20h]@1
  int v13; // [sp+Ch] [bp-1Ch]@1

  v2 = a1;
  v3 = a2;
  v11 = *(_DWORD *)a1;
  *(_DWORD *)a1 = &unk_28898CC;
  v4 = (int *)(a1 + 4);
  v12 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  v13 = *(_DWORD *)(a1 + 8);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id((int *)a1, a2);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v4, v3 + 1);
  *(_DWORD *)(v2 + 8) = v3[2];
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v11);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3 + 1, &v12);
  v3[2] = v13;
  v5 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
}


  std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)
{
    (int)&v19,
    &v14);
  v17 = v15;
  v18 = v16;
  v15 = 0;
  v16 = 0;
  sub_DA7434(v2, (int)&v17);
  v3 = v18;
  if ( v18 )
  {
    v4 = (unsigned int *)(v18 + 4);
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
  v8 = v16;
  if ( v16 )
    v9 = (unsigned int *)(v16 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return v2;
}


int __fastcall std::promise<void>::promise(int a1)
{
  int v1; // r5@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r6@1

  v1 = a1;
  j__ZNSt12__shared_ptrINSt13__future_base13_State_baseV2ELN9__gnu_cxx12_Lock_policyE2EEC2ISaIS1_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_(a1);
  v2 = operator new(8u);
  v3 = v2;
  *v2 = 0;
  v2[1] = 0;
  sub_DA8AB4((int)v2);
  *v3 = &off_26D792C;
  *(_DWORD *)(v1 + 8) = v3;
  return v1;
}


_BOOL4 std::uncaught_exception(void)
{
  return j_j___cxa_get_globals()[1] != 0;
}


  return std::__shared_count<(__gnu_cxx::_Lock_policy)
{
           a2);
}


  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<std::string *,std::__shared_ptr<std::string,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::string>>,std::__shared_ptr<std::string,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
           a2);
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::system::xbox_live_user *,std::__shared_ptr<xbox::services::system::xbox_live_user *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<xbox::services::system::xbox_live_user *>>,std::__shared_ptr<xbox::services::system::xbox_live_user *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<xbox::services::system::xbox_live_user *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_26DED68;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftBindingFactoryMap::NullBindingFactory::getPointBinding(std::string const&)const::{lambda(void)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::matchmaking::match_ticket_details_response>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::matchmaking::match_ticket_details_response>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  void *v1; // r4@1

  v1 = *(void **)(a1 + 16);
  (**(void (__fastcall ***)(_DWORD))v1)(*(_DWORD *)(a1 + 16));
  j_j_j__ZdlPv_3(v1);
}


int __fastcall std::_Function_base::_Base_manager<CraftingEventPacket::write(BinaryStream &)const::{lambda(BinaryStream &,ItemInstance const&)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<web::http::details::_http_response *,std::__shared_ptr<web::http::details::_http_response *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<web::http::details::_http_response *>>,std::__shared_ptr<web::http::details::_http_response *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    *(_DWORD *)v1);
  v5 = v11;
  v11 = *(_DWORD *)(v1 + 4);
  v4 = v11;
  *(_DWORD *)(v1 + 4) = v5;
  if ( v4 )
  {
    v6 = (unsigned int *)(v4 + 4);
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
      v8 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
  return v1;
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<BaseRailBlock::Rail *,std::__shared_ptr<BaseRailBlock::Rail *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<BaseRailBlock::Rail *>>,std::__shared_ptr<BaseRailBlock::Rail *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    *(_DWORD *)v4);
  v9 = v15;
  v15 = *(_DWORD *)(v4 + 4);
  v8 = v15;
  *(_DWORD *)(v4 + 4) = v9;
  if ( v8 )
  {
    v10 = (unsigned int *)(v8 + 4);
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
      v12 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  return v4;
}


int std::get_unexpected(void)
{
  return std::get_unexpected();
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::system::token_and_signature_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::system::token_and_signature_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::system::xbox_live_user *,std::__shared_ptr<xbox::services::system::xbox_live_user *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<xbox::services::system::xbox_live_user *>>,std::__shared_ptr<xbox::services::system::xbox_live_user *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<xbox::services::system::xbox_live_user *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::system::xbox_live_user *,std::__shared_ptr<xbox::services::system::xbox_live_user *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<xbox::services::system::xbox_live_user *>>,std::__shared_ptr<xbox::services::system::xbox_live_user *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<xbox::services::system::xbox_live_user *>>>(
           a1,
           a2);
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *,std::__shared_ptr<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *>>,std::__shared_ptr<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    (int)v5);
  v8 = v14;
  v14 = *(_DWORD *)(v4 + 4);
  v7 = v14;
  *(_DWORD *)(v4 + 4) = v8;
  if ( v7 )
  {
    v9 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  return v4;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::achievements::achievement>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::achievements::achievement>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<web::http::client::details::asio_context::handle_write_large_body(boost::system::error_code const&)::{lambda(pplx::task<unsigned int>)#1}>::_M_manager(void ***a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void ***v4; // r4@1
  void **v5; // r0@2
  void **v6; // r1@4
  void *v7; // r1@4
  unsigned int *v8; // r1@5
  unsigned int v9; // r2@6
  void **v11; // r4@9
  void *v12; // r5@10
  unsigned int *v13; // r0@11
  unsigned int v14; // r1@12
  unsigned int *v15; // r6@14
  unsigned int v16; // r0@15

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'web::http::client::details::asio_context::handle_write_large_body(boost::system::error_code const&)::{lambda(pplx::task<unsigned int>)#1};
      goto LABEL_8;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(8u);
      v6 = *v3;
      *v5 = **v3;
      v7 = v6[1];
      v5[1] = v7;
      if ( v7 )
      {
        v8 = (unsigned int *)((char *)v7 + 4);
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 + 1, v8) );
      }
LABEL_8:
      *v4 = v5;
      return 0;
    case 3:
      v11 = *a1;
      if ( *a1 )
        v12 = v11[1];
        if ( v12 )
        {
          v13 = (unsigned int *)((char *)v12 + 4);
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          if ( v14 == 1 )
          {
            v15 = (unsigned int *)((char *)v12 + 8);
            (*(void (__fastcall **)(void *))(*(_DWORD *)v12 + 8))(v12);
            __dmb();
            do
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            if ( v16 == 1 )
              (*(void (__fastcall **)(void *))(*(_DWORD *)v12 + 12))(v12);
          }
        }
        j_operator delete(v11);
      break;
    default:
  }
  return 0;
}


void __fastcall std::default_delete<BehaviorComponent>::operator()(int a1, int a2)
{
  std::default_delete<BehaviorComponent>::operator()(a1, a2);
}


int __fastcall std::promise<Legacy::WorldConversionReport>::set_value(unsigned __int64 *a1, int a2)
{
  unsigned __int64 *v2; // r5@1
  int v3; // r6@1
  int v4; // r7@1 OVERLAPPED
  int v5; // r8@1 OVERLAPPED
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  _DWORD *v8; // r0@7
  __int64 v9; // r2@7
  int result; // r0@8
  unsigned int *v11; // r1@11
  unsigned int *v12; // r4@17
  _DWORD *v13; // [sp+8h] [bp-40h]@7
  __int64 v14; // [sp+10h] [bp-38h]@7
  char *v15; // [sp+18h] [bp-30h]@7
  int *v16; // [sp+1Ch] [bp-2Ch]@7
  int v17; // [sp+20h] [bp-28h]@7
  int (***(__fastcall *v18)(int, int, _BYTE *))(void); // [sp+24h] [bp-24h]@7
  int v19; // [sp+28h] [bp-20h]@7
  char v20; // [sp+2Fh] [bp-19h]@7

  v2 = a1;
  v3 = a2;
  *(_QWORD *)&v4 = *a1;
  if ( *a1 >> 32 )
  {
    v6 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
    }
    else
      ++*v6;
  }
  v8 = operator new(8u);
  v8[1] = v3;
  HIDWORD(v9) = std::_Function_handler<std::unique_ptr<std::__future_base::_Result_base,std::__future_base::_Result_base::_Deleter> ()(void),std::__future_base::_State_baseV2::_Setter<Legacy::WorldConversionReport,Legacy::WorldConversionReport&&>>::_M_invoke;
  LODWORD(v9) = std::_Function_base::_Base_manager<std::__future_base::_State_baseV2::_Setter<Legacy::WorldConversionReport,Legacy::WorldConversionReport&&>>::_M_manager;
  *v8 = v2;
  v13 = v8;
  v14 = v9;
  v20 = 0;
  v19 = 0;
  v17 = v4;
  v18 = std::__future_base::_State_baseV2::_M_do_set;
  v16 = (int *)&v13;
  v15 = &v20;
  std::call_once<void (std::__future_base::_State_baseV2::*)(std::function<std::unique_ptr<std::__future_base::_Result_base,std::__future_base::_Result_base::_Deleter> ()(void)> &,bool &),std::__future_base::_State_baseV2*,std::reference_wrapper<std::function<std::unique_ptr<std::__future_base::_Result_base,std::__future_base::_Result_base::_Deleter> ()(void)>>,std::reference_wrapper<bool>>(
    (pthread_once_t *)(v4 + 20),
    (__int64 *)&v18,
    &v17,
    (int *)&v16,
    (int *)&v15);
  if ( !v20 )
    sub_21E5EAC(2);
  result = sub_21E03D8((pthread_cond_t *)(v4 + 12));
  if ( (_DWORD)v14 )
    result = ((int (*)(void))v14)();
  if ( v5 )
    v11 = (unsigned int *)(v5 + 4);
        result = __ldrex(v11);
      while ( __strex(result - 1, v11) );
      result = (*v11)--;
    if ( result == 1 )
      v12 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v12);
        while ( __strex(result - 1, v12) );
      }
      else
        result = (*v12)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return result;
}


void __fastcall std::__convert_to_v<double>(const char *a1, double *a2, _DWORD *a3)
{
  std::__convert_to_v<double>(a1, a2, a3);
}


std::bad_array_new_length *__fastcall std::bad_array_new_length::~bad_array_new_length(std::bad_array_new_length *this)
{
  std::bad_array_new_length *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2774030;
  j_std::bad_alloc::~bad_alloc(this);
  return v1;
}


int __fastcall std::_Function_base::_Base_manager<PlayerHotbarPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::tournaments::tournament>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::tournaments::tournament>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<RequestTelemetry *,std::__shared_ptr<RequestTelemetry *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<RequestTelemetry *>>,std::__shared_ptr<RequestTelemetry *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<RequestTelemetry *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<RequestTelemetry *,std::__shared_ptr<RequestTelemetry *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<RequestTelemetry *>>,std::__shared_ptr<RequestTelemetry *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<RequestTelemetry *>>>(
           a1,
           a2);
}


int __fastcall std::swap<xbox::services::system::wildcard_nsal_endpoint>(int a1, int a2)
{
  int v2; // r5@1
  __int64 v3; // ST08_8@1
  int v4; // ST10_4@1
  int *v5; // r1@1
  int v6; // r3@1
  int *v7; // r7@1
  int v8; // r0@1
  int v9; // r4@1
  __int64 v10; // kr00_8@1
  int *v11; // r6@1
  void *v12; // r0@1
  unsigned int *v14; // r2@3
  signed int v15; // r1@5
  int v16; // [sp+14h] [bp-44h]@1
  int v17; // [sp+18h] [bp-40h]@1
  int v18; // [sp+1Ch] [bp-3Ch]@1
  int v19; // [sp+20h] [bp-38h]@1
  char v20; // [sp+24h] [bp-34h]@1
  int v21; // [sp+28h] [bp-30h]@1
  int v22; // [sp+2Ch] [bp-2Ch]@1
  int v23; // [sp+30h] [bp-28h]@1
  int v24; // [sp+34h] [bp-24h]@1
  int v25; // [sp+38h] [bp-20h]@1

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 12);
  v5 = (int *)(a1 + 16);
  v16 = *(_DWORD *)(a1 + 16);
  *v5 = (int)&unk_28898CC;
  v17 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 20) = &unk_28898CC;
  v18 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 24) = &unk_28898CC;
  v19 = *(_DWORD *)(a1 + 28);
  v20 = *(_BYTE *)(a1 + 32);
  v21 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 36) = &unk_28898CC;
  v22 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 40) = 0;
  v23 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = 0;
  v24 = *(_DWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 48) = 0;
  v7 = (int *)(a1 + 52);
  v6 = *(_DWORD *)(a1 + 52);
  v8 = a1 + 4;
  v25 = v6;
  *v7 = (int)&unk_28898CC;
  v9 = v2 + 4;
  v10 = *(_QWORD *)(v2 + 8);
  *(_DWORD *)v8 = *(_DWORD *)(v2 + 4);
  *(_QWORD *)(v8 + 4) = v10;
  v11 = (int *)(v2 + 16);
  j_xbox::services::system::trie_node<xbox::services::system::nsal_endpoint_info>::operator=(v5, (int *)(v2 + 16));
  v2 += 52;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v7, (int *)v2);
  *(_QWORD *)v9 = v3;
  *(_DWORD *)(v9 + 8) = v4;
  j_xbox::services::system::trie_node<xbox::services::system::nsal_endpoint_info>::operator=(v11, &v16);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id((int *)v2, &v25);
  v12 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v25 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  }
  return j_xbox::services::system::trie_node<xbox::services::system::nsal_endpoint_info>::~trie_node((int)&v16);
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<std::string *,std::__shared_ptr<std::string,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::string>>,std::__shared_ptr<std::string,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::string>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_26E84A4;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<std::__detail::_NFA<std::regex_traits<char>> *,std::__shared_ptr<std::__detail::_NFA<std::regex_traits<char>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::__detail::_NFA<std::regex_traits<char>> *>>,std::__shared_ptr<std::__detail::_NFA<std::regex_traits<char>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::__detail::_NFA<std::regex_traits<char>> *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<std::__detail::_NFA<std::regex_traits<char>> *,std::__shared_ptr<std::__detail::_NFA<std::regex_traits<char>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::__detail::_NFA<std::regex_traits<char>> *>>,std::__shared_ptr<std::__detail::_NFA<std::regex_traits<char>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::__detail::_NFA<std::regex_traits<char>> *>>>(
           a1,
           a2);
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::game_server_platform::game_server_ticket_status>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::game_server_platform::game_server_ticket_status>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::system::java_rps_ticket>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::system::java_rps_ticket>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_GetServiceWithNoServiceSet_ThrowsException(void)::{lambda(void)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>(int a1, int a2, _QWORD *a3)
{
  _QWORD *v3; // r6@1
  int v4; // r4@1
  void *v5; // r5@1
  _DWORD *v6; // r0@1
  int v7; // r5@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r6@8
  unsigned int v11; // r0@10

  v3 = a3;
  v4 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v5 = operator new(0x14u);
  *(_DWORD *)v4 = v5;
  *((_DWORD *)v5 + 1) = 0;
  *((_DWORD *)v5 + 2) = 0;
  *(_DWORD *)v5 = &off_26D5560;
  *(_QWORD *)((char *)v5 + 12) = *v3;
  v6 = operator new(0x14u);
  v6[1] = 1;
  v6[2] = 1;
  *v6 = &off_26D5574;
  v6[4] = v5;
  v7 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = v6;
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
  return v4;
}


int std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_get_deleter()
{
  return 0;
}


std::bad_exception *__fastcall std::bad_exception::~bad_exception(std::bad_exception *this)
{
  std::bad_exception *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2772828;
  j_std::exception::~exception();
  return v1;
}


  return std::__shared_count<(__gnu_cxx::_Lock_policy)
{
           a2);
}


int __fastcall std::uniform_int_distribution<int>::operator()<std::mersenne_twister_engine<unsigned int,32u,624u,397u,31u,2567483615u,11u,4294967295u,7u,2636928640u,15u,4022730752u,18u,1812433253u>>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r8@1
  int v4; // r5@1
  int v5; // r0@1
  unsigned int v6; // r12@2
  unsigned int v7; // r7@2
  unsigned int v8; // r10@2
  int v9; // r4@4
  int v10; // r0@4
  int v11; // r7@5
  unsigned int v12; // r2@5
  int v13; // r1@5
  int v14; // r7@8
  int v15; // r0@8
  int v16; // r1@9
  int v17; // r4@9
  int v18; // r2@9
  unsigned int v19; // r3@9
  int v20; // r3@9
  unsigned int v21; // r1@12
  unsigned int v22; // r0@15
  unsigned int v23; // r0@15
  unsigned int v24; // r0@15
  int v25; // r0@16
  unsigned int v26; // r0@17
  int v27; // r6@18
  int v28; // r2@18
  int v29; // r3@19
  unsigned int v30; // r7@19
  int v31; // r6@22
  int v32; // r2@22
  int v33; // r7@23
  int v34; // r4@23
  int v35; // r3@23
  unsigned int v36; // r0@23
  int v37; // r0@23
  unsigned int v38; // r1@26
  int v39; // r0@29
  unsigned int v40; // r0@29

  v3 = a3;
  v4 = a2;
  v5 = (*a3 >> 32) - *a3;
  if ( v5 == -1 )
  {
    v26 = *(_DWORD *)(a2 + 2496);
    if ( v26 >= 0x270 )
    {
      v27 = *(_DWORD *)a2;
      v28 = 0;
      do
      {
        v29 = *(_DWORD *)(a2 + v28 + 4);
        v30 = *(_DWORD *)(a2 + v28 + 1588) ^ ((v27 & 0x80000000 | v29 & 0x7FFFFFFE) >> 1);
        v27 = *(_DWORD *)(a2 + v28 + 4);
        if ( v29 & 1 )
          v30 ^= 0x9908B0DF;
        *(_DWORD *)(a2 + v28) = v30;
        v28 += 4;
      }
      while ( v28 != 908 );
      v31 = *(_DWORD *)(a2 + 908);
      v32 = 0;
        v33 = a2 + 4 * v32;
        v34 = *(_DWORD *)(a2 + 4 * v32++);
        v35 = *(_DWORD *)(v33 + 912);
        v36 = v35 & 0x7FFFFFFE | v31 & 0x80000000;
        v31 = *(_DWORD *)(v33 + 912);
        v37 = v34 ^ (v36 >> 1);
        if ( v35 & 1 )
          v37 ^= 0x9908B0DF;
        *(_DWORD *)(v33 + 908) = v37;
      while ( v32 != 396 );
      v26 = 0;
      v38 = *(_DWORD *)(a2 + 1584) ^ ((*(_DWORD *)a2 & 0x7FFFFFFE | *(_DWORD *)(a2 + 2492) & 0x80000000) >> 1);
      if ( *(_DWORD *)v4 & 1 )
        v38 ^= 0x9908B0DF;
      *(_DWORD *)(v4 + 2492) = v38;
      *(_DWORD *)(v4 + 2496) = 0;
    }
    *(_DWORD *)(v4 + 2496) = v26 + 1;
    v39 = *(_DWORD *)(v4 + 4 * v26) ^ (*(_DWORD *)(v4 + 4 * v26) >> 11);
    v40 = v39 ^ (v39 << 7) & 0x9D2C5680 ^ ((v39 ^ (v39 << 7) & 0x9D2C5680) << 15) & 0xEFC60000;
    v25 = v40 ^ (v40 >> 18);
  }
  else
    v6 = 0xFFFFFFFF / (v5 + 1);
    v7 = *(_DWORD *)(a2 + 2496);
    v8 = v6 * (v5 + 1);
    do
      if ( v7 >= 0x270 )
        v9 = *(_DWORD *)v4;
        v10 = 0;
        do
        {
          v11 = *(_DWORD *)(v4 + v10 + 4);
          v12 = v11 & 0x7FFFFFFE | v9 & 0x80000000;
          v9 = *(_DWORD *)(v4 + v10 + 4);
          v13 = *(_DWORD *)(v4 + v10 + 1588) ^ (v12 >> 1);
          if ( v11 & 1 )
            v13 ^= 0x9908B0DF;
          *(_DWORD *)(v4 + v10) = v13;
          v10 += 4;
        }
        while ( v10 != 908 );
        v14 = *(_DWORD *)(v4 + 908);
        v15 = 0;
          v16 = v4 + 4 * v15;
          v17 = *(_DWORD *)(v4 + 4 * v15++);
          v18 = *(_DWORD *)(v16 + 912);
          v19 = v18 & 0x7FFFFFFE | v14 & 0x80000000;
          v14 = *(_DWORD *)(v16 + 912);
          v20 = v17 ^ (v19 >> 1);
          if ( v18 & 1 )
            v20 ^= 0x9908B0DF;
          *(_DWORD *)(v16 + 908) = v20;
        while ( v15 != 396 );
        v7 = 0;
        v21 = *(_DWORD *)(v4 + 1584) ^ ((*(_DWORD *)(v4 + 2492) & 0x80000000 | *(_DWORD *)v4 & 0x7FFFFFFE) >> 1);
        if ( *(_DWORD *)v4 & 1 )
          v21 ^= 0x9908B0DF;
        *(_DWORD *)(v4 + 2492) = v21;
        *(_DWORD *)(v4 + 2496) = 0;
      *(_DWORD *)(v4 + 2496) = v7 + 1;
      v22 = *(_DWORD *)(v4 + 4 * v7++);
      v23 = v22 ^ (v22 >> 11) ^ ((v22 ^ (v22 >> 11)) << 7) & 0x9D2C5680;
      v24 = v23 ^ (v23 << 15) & 0xEFC60000 ^ ((v23 ^ (v23 << 15) & 0xEFC60000) >> 18);
    while ( v24 >= v8 );
    v25 = v24 / v6;
  return v25 + *(_DWORD *)v3;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIScreenControllerBindTests::UI_BindBool(void)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


void __fastcall std::__exception_ptr::exception_ptr::_M_release(std::__exception_ptr::exception_ptr *this)
{
  std::__exception_ptr::exception_ptr::_M_release(this);
}


int __fastcall std::__exception_ptr::exception_ptr::_M_addref(int result)
{
  unsigned int *v1; // r3@2
  unsigned int v2; // r2@3

  if ( *(_DWORD *)result )
  {
    v1 = (unsigned int *)(*(_DWORD *)result - 128);
    __dmb();
    do
      v2 = __ldrex(v1);
    while ( __strex(v2 + 1, v1) );
  }
  return result;
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<RequestTelemetry *,std::__shared_ptr<RequestTelemetry *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<RequestTelemetry *>>,std::__shared_ptr<RequestTelemetry *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    *(_DWORD *)v4);
  v9 = v15;
  v15 = *(_DWORD *)(v4 + 4);
  v8 = v15;
  *(_DWORD *)(v4 + 4) = v9;
  if ( v8 )
  {
    v10 = (unsigned int *)(v8 + 4);
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
      v12 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  return v4;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_Terminate_UnsetsServices(void)::{lambda(void)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


int __fastcall std::future_error::future_error(int a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // r6@1
  int v4; // r5@1
  void *v5; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+8h] [bp-20h]@1

  v3 = __PAIR__(a3, a2);
  v4 = a1;
  sub_DA7364((void **)&v9, "std::future_error");
  sub_DA83B0(v4, &v9);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
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
      j_j_j_j_j__ZdlPv_9(v5);
  }
  *(_DWORD *)v4 = &off_2773ED8;
  *(_QWORD *)(v4 + 8) = v3;
  return v4;
}


int __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>::_M_run(int a1)
{
  int v1; // r5@1
  unsigned __int8 *v2; // r4@1
  unsigned int v3; // r1@2
  int v4; // r0@4
  int v5; // r0@6
  int v6; // r0@7
  int result; // r0@9

  v1 = *(_DWORD *)(a1 + 12);
  v2 = (unsigned __int8 *)(v1 + 40);
  do
  {
    do
      v3 = __ldrex(v2);
    while ( __strex(1u, v2) );
    __dmb();
  }
  while ( v3 );
  v4 = *(_DWORD *)(v1 + 8);
  if ( *(_DWORD *)(v1 + 24) != v4 )
    if ( v4 == *(_DWORD *)(v1 + 16) - 1 )
    {
      operator delete(*(void **)(v1 + 12));
      v6 = *(_DWORD *)(v1 + 20);
      *(_DWORD *)(v1 + 20) = v6 + 4;
      v5 = *(_DWORD *)(v6 + 4);
      *(_DWORD *)(v1 + 12) = v5;
      *(_DWORD *)(v1 + 16) = v5 + 512;
    }
    else
      v5 = v4 + 1;
    *(_DWORD *)(v1 + 8) = v5;
  result = 0;
  __dmb();
  *v2 = 0;
  return result;
}


int __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>::_M_run(int a1)
{
  int v1; // r4@1
  unsigned __int8 *v2; // r5@1
  unsigned int v3; // r1@2
  _BYTE *v4; // r0@4
  int v5; // r0@5
  int v6; // r0@8
  int result; // r0@9

  v1 = *(_DWORD *)(a1 + 12);
  v2 = (unsigned __int8 *)(v1 + 40);
  do
  {
    do
      v3 = __ldrex(v2);
    while ( __strex(1u, v2) );
    __dmb();
  }
  while ( v3 );
  v4 = *(_BYTE **)(v1 + 24);
  if ( v4 == (_BYTE *)(*(_DWORD *)(v1 + 32) - 1) )
    if ( (unsigned int)((*(_QWORD *)v1 >> 32) - ((signed int)(*(_DWORD *)(v1 + 36) - *(_QWORD *)v1) >> 2)) <= 1 )
      std::deque<char,std::allocator<char>>::_M_reallocate_map(v1, 1u, 0);
    *(_DWORD *)(*(_DWORD *)(v1 + 36) + 4) = operator new(0x200u);
    **(_BYTE **)(v1 + 24) = 98;
    v6 = *(_DWORD *)(v1 + 36);
    *(_DWORD *)(v1 + 36) = v6 + 4;
    v5 = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v1 + 28) = v5;
    *(_DWORD *)(v1 + 32) = v5 + 512;
  else
    *v4 = 98;
    v5 = *(_DWORD *)(v1 + 24) + 1;
  *(_DWORD *)(v1 + 24) = v5;
  result = 0;
  __dmb();
  *v2 = 0;
  return result;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(ptr);
}


int *__fastcall std::promise<LevelArchiver::Result>::~promise(int *a1)
{
  int *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@2
  void (***v4)(void); // r1@4
  void (***v5)(void); // r0@7
  int v6; // r5@9
  unsigned int *v7; // r1@10
  unsigned int v8; // r0@12
  unsigned int *v9; // r6@16
  unsigned int v10; // r0@18
  void (***v12)(void); // [sp+4h] [bp-14h]@4

  v1 = a1;
  v2 = *a1;
  if ( v2 )
  {
    v3 = v1[1];
    if ( !v3 || *(_DWORD *)(v3 + 4) != 1 )
    {
      v4 = (void (***)(void))v1[2];
      v1[2] = 0;
      v12 = v4;
      std::__future_base::_State_baseV2::_M_break_promise(v2, (int *)&v12);
      if ( v12 )
        (**v12)();
      v12 = 0;
    }
  }
  v5 = (void (***)(void))v1[2];
  if ( v5 )
    (**v5)();
  v1[2] = 0;
  v6 = v1[1];
  if ( v6 )
    v7 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    else
      v8 = (*v7)--;
    if ( v8 == 1 )
      v9 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return v1;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIScreenControllerEventTests::UI_HandleEventTextEditChange(void)::{lambda(TextEditScreenEventData &,int)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


int __fastcall std::__detail::_NFA<std::regex_traits<char>>::_M_insert_subexpr_begin(int a1)
{
  int v1; // r4@0
  int v2; // r12@0
  int v3; // r11@1
  int v4; // r8@1
  __int64 v5; // r0@1
  int *v6; // lr@2
  signed int *v7; // r0@2
  int v8; // r9@2
  __int64 *v9; // r1@2
  void *v10; // r5@3
  signed int v11; // r1@3
  unsigned int v12; // r2@3
  unsigned int v13; // r1@5
  unsigned int v14; // r7@5
  char *v15; // r6@11
  char *v16; // r10@13
  __int64 v17; // kr18_8@18
  signed int v18; // r2@19
  int v19; // r4@19
  int v20; // r5@19
  int v21; // r6@19
  __int64 v22; // kr20_8@19
  int v23; // r7@19
  void (*v24)(void); // r2@19
  int v25; // r2@19
  int v26; // r7@19
  int v27; // r4@21
  signed int v29; // [sp+0h] [bp-70h]@17
  signed int v30; // [sp+4h] [bp-6Ch]@18
  int v31; // [sp+8h] [bp-68h]@18
  int v32; // [sp+Ch] [bp-64h]@18
  int v33; // [sp+10h] [bp-60h]@18
  int v34; // [sp+14h] [bp-5Ch]@2
  signed int *v35; // [sp+18h] [bp-58h]@2
  void (*v36)(void); // [sp+1Ch] [bp-54h]@18
  int v37; // [sp+20h] [bp-50h]@19
  int v38; // [sp+28h] [bp-48h]@18
  signed int v39; // [sp+2Ch] [bp-44h]@18
  int v40; // [sp+30h] [bp-40h]@18
  int v41; // [sp+34h] [bp-3Ch]@18
  int v42; // [sp+38h] [bp-38h]@18
  __int64 v43; // [sp+3Ch] [bp-34h]@2
  void (*v44)(void); // [sp+44h] [bp-2Ch]@18

  v3 = a1;
  v4 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 20) = v4 + 1;
  v5 = *(_QWORD *)(a1 + 4);
  if ( (_DWORD)v5 == HIDWORD(v5) )
  {
    v10 = *(void **)v3;
    v11 = v5 - *(_DWORD *)v3;
    v12 = v11 >> 2;
    if ( !(v11 >> 2) )
      v12 = 1;
    v13 = v12 + (v11 >> 2);
    v14 = v13;
    if ( 0 != v13 >> 30 )
      v14 = 0x3FFFFFFF;
    if ( v13 < v12 )
    if ( v14 )
    {
      if ( v14 >= 0x40000000 )
        sub_119C874();
      v15 = (char *)operator new(4 * v14);
      LODWORD(v5) = *(_QWORD *)v3 >> 32;
      v10 = (void *)*(_QWORD *)v3;
    }
    else
      v15 = 0;
    v16 = &v15[v5 - (_DWORD)v10];
    *(_DWORD *)&v15[v5 - (_DWORD)v10] = v4;
    if ( 0 != ((signed int)v5 - (signed int)v10) >> 2 )
      _aeabi_memmove4(v15, v10);
    v8 = (int)(v16 + 4);
    if ( v10 )
      operator delete(v10);
    *(_DWORD *)v3 = v15;
    *(_DWORD *)(v3 + 4) = v8;
    v9 = &v43;
    *(_DWORD *)(v3 + 8) = &v15[4 * v14];
    v7 = &v29;
    v6 = &v34;
  }
  else
    *(_DWORD *)v5 = v4;
    *(_DWORD *)(v3 + 4) = v5 + 4;
    v7 = v35;
    v2 = v34;
    v8 = HIDWORD(v43);
    v1 = v43;
  v38 = 7;
  v39 = -1;
  v40 = v4;
  v29 = 7;
  v30 = -1;
  v31 = v4;
  v32 = v41;
  v33 = v42;
  *(_DWORD *)v9 = v2;
  *((_DWORD *)v9 + 1) = v7;
  *v6 = v1;
  v6[1] = v8;
  v44 = 0;
  v36 = 0;
  v17 = *(_QWORD *)(v3 + 36);
  if ( (_DWORD)v17 == HIDWORD(v17) )
    std::vector<std::__detail::_State<std::regex_traits<char>>,std::allocator<std::__detail::_State<std::regex_traits<char>>>>::_M_emplace_back_aux<std::__detail::_State<std::regex_traits<char>>>(
      (unsigned __int64 *)(v3 + 32),
      (int)&v29);
    v26 = *(_DWORD *)(v3 + 36);
    v18 = v30;
    v19 = v31;
    v20 = v32;
    v21 = v33;
    *(_DWORD *)v17 = v29;
    *(_DWORD *)(v17 + 4) = v18;
    *(_DWORD *)(v17 + 8) = v19;
    *(_DWORD *)(v17 + 12) = v20;
    *(_DWORD *)(v17 + 16) = v21;
    *(_DWORD *)(v17 + 28) = 0;
    v22 = *(_QWORD *)v6;
    v23 = *(_QWORD *)(v17 + 20) >> 32;
    *v6 = *(_QWORD *)(v17 + 20);
    v6[1] = v23;
    *(_QWORD *)(v17 + 20) = v22;
    v24 = v36;
    v36 = *(void (**)(void))(v17 + 28);
    *(_DWORD *)(v17 + 28) = v24;
    v25 = v37;
    v37 = *(_DWORD *)(v17 + 32);
    *(_DWORD *)(v17 + 32) = v25;
    v26 = *(_DWORD *)(v3 + 36) + 36;
    *(_DWORD *)(v3 + 36) = v26;
  v27 = *(_DWORD *)(v3 + 32);
  if ( v36 )
    v36();
  if ( v44 )
    v44();
  return 954437177 * ((v26 - v27) >> 2) - 1;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIDefRepositoryTests::UIDefRepository_LoadDefsListWithMissingComma_ExpectException(void)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(ptr);
}


const void **__fastcall std::__detail::_Scanner<char>::_M_eat_escape_ecma(int a1)
{
  int v1; // r4@1
  __int64 v2; // r0@1
  signed int v3; // r5@3
  int v4; // r0@3
  int v5; // r7@3
  int v6; // r6@3
  int v7; // r0@4
  int v8; // r0@6
  int i; // r1@6
  int v10; // t1@7
  int v11; // r1@12
  const void **v12; // r4@12
  int v13; // t1@12
  unsigned __int8 v14; // r0@12
  bool v15; // zf@15
  __int64 v16; // r0@26
  int v17; // t1@28
  _BYTE *v18; // r2@29
  bool v19; // zf@30
  signed int v20; // r0@34
  int v21; // t1@36
  bool v22; // zf@37
  int *v23; // r6@41
  signed int v24; // r10@41
  signed int v25; // r7@41
  __int64 v26; // kr00_8@43
  int v27; // r0@46
  __int64 v28; // r2@46
  char v29; // r8@46
  int v30; // r5@46
  int v31; // r0@49
  int v32; // t1@53
  const void **result; // r0@35
  int *v34; // r6@58
  __int64 j; // r0@58
  int v36; // r1@60
  __int64 v37; // r2@60
  char v38; // r7@60
  int v39; // r5@60
  int v40; // r0@63

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 148);
  if ( (_DWORD)v2 == HIDWORD(v2) )
    sub_119E4A8(2);
  *(_DWORD *)(v1 + 148) = v2 + 1;
  v3 = *(_BYTE *)v2;
  v4 = *(_DWORD *)(v1 + 156);
  v5 = v4 + v3;
  v6 = *(_BYTE *)(v4 + v3 + 285);
  if ( !*(_BYTE *)(v4 + v3 + 285) )
  {
    v6 = 0;
    v7 = (*(int (**)(void))(*(_DWORD *)v4 + 32))();
    if ( v7 )
    {
      *(_BYTE *)(v5 + 285) = v7;
      v6 = v7;
    }
  }
  v8 = *(_DWORD *)(v1 + 136);
  for ( i = *(_BYTE *)v8; ; i = v10 )
    if ( !i )
      if ( v3 <= 97 )
      {
        if ( v3 > 82 )
        {
          v19 = v3 == 83;
          if ( v3 != 83 )
            v19 = v3 == 87;
          if ( v19 )
            goto LABEL_34;
        }
        else
          if ( v3 == 66 )
          {
            *(_DWORD *)(v1 + 132) = 25;
            v32 = *(_DWORD *)(v1 + 160);
            v12 = (const void **)(v1 + 160);
            v18 = *(_BYTE **)(v32 - 12);
            v14 = 110;
            return sub_119CB38(v12, 0, v18, (_BYTE *)1, v14);
          }
          if ( v3 == 68 )
      }
      else
        if ( v3 > 99 )
          v15 = v3 == 100;
          if ( v3 != 100 )
            v15 = v3 == 115;
          if ( !v15 && v3 != 119 )
            goto LABEL_37;
LABEL_34:
          v20 = 14;
LABEL_35:
          *(_DWORD *)(v1 + 132) = v20;
          return sub_119CB38((const void **)(v1 + 160), 0, *(_BYTE **)(*(_DWORD *)(v1 + 160) - 12), (_BYTE *)1, v3);
        if ( v3 == 98 )
          goto LABEL_36;
        if ( v3 == 99 )
          v16 = *(_QWORD *)(v1 + 148);
          if ( (_DWORD)v16 == HIDWORD(v16) )
            sub_119E4A8(2);
          *(_DWORD *)(v1 + 132) = 1;
          *(_DWORD *)(v1 + 148) = v16 + 1;
          v17 = *(_DWORD *)(v1 + 160);
          v12 = (const void **)(v1 + 160);
          v11 = v17;
          v14 = *(_BYTE *)v16;
LABEL_29:
          v18 = *(_BYTE **)(v11 - 12);
          return sub_119CB38(v12, 0, v18, (_BYTE *)1, v14);
LABEL_37:
      v22 = v3 == 120;
      if ( v3 != 120 )
        v22 = v3 == 117;
      if ( v22 )
        v23 = (int *)(v1 + 160);
        sub_119CA68((const void **)(v1 + 160), 0, *(_BYTE **)(*(_DWORD *)(v1 + 160) - 12), 0);
        v24 = 4;
        v25 = 0;
        if ( v3 == 120 )
          v24 = 2;
        do
          v26 = *(_QWORD *)(v1 + 148);
          if ( (_DWORD)v26 == HIDWORD(v26)
            || !(*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v1 + 156) + 24) + *(_BYTE *)v26) & 0x44) )
          *(_DWORD *)(v1 + 148) = v26 + 1;
          v27 = *(_DWORD *)(v1 + 160);
          v28 = *(_QWORD *)(v27 - 12);
          v29 = *(_BYTE *)v26;
          v30 = v28 + 1;
          if ( (unsigned int)(v28 + 1) > HIDWORD(v28) || *(_DWORD *)(v27 - 4) >= 1 )
            sub_119CAF8((const void **)(v1 + 160), v28 + 1);
            v27 = *v23;
            LODWORD(v28) = *(_DWORD *)(*v23 - 12);
          *(_BYTE *)(v27 + v28) = v29;
          v31 = *v23;
          if ( (int *)(*v23 - 12) != &dword_28898C0 )
            *(_DWORD *)(v31 - 4) = 0;
            *(_DWORD *)(v31 - 12) = v30;
            *(_BYTE *)(v31 + v30) = byte_26C67B8[0];
          ++v25;
        while ( v25 < v24 );
        result = (const void **)3;
        if ( !(*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v1 + 156) + 24) + v3) & 4) )
          v20 = 1;
          goto LABEL_35;
        v34 = (int *)(v1 + 160);
        sub_119CB38((const void **)(v1 + 160), 0, *(_BYTE **)(*(_DWORD *)(v1 + 160) - 12), (_BYTE *)1, v3);
        for ( j = *(_QWORD *)(v1 + 148); (_DWORD)j != HIDWORD(j); j = *(_QWORD *)(v1 + 148) )
          if ( !(*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v1 + 156) + 24) + *(_BYTE *)j) & 4) )
            break;
          *(_DWORD *)(v1 + 148) = j + 1;
          HIDWORD(j) = *(_DWORD *)(v1 + 160);
          v37 = *(_QWORD *)(HIDWORD(j) - 12);
          v38 = *(_BYTE *)j;
          v39 = v37 + 1;
          if ( (unsigned int)(v37 + 1) > HIDWORD(v37) || *(_DWORD *)(v36 - 4) >= 1 )
            sub_119CAF8((const void **)(v1 + 160), v37 + 1);
            v36 = *v34;
            LODWORD(v37) = *(_DWORD *)(*v34 - 12);
          *(_BYTE *)(v36 + v37) = v38;
          v40 = *v34;
          if ( (int *)(*v34 - 12) != &dword_28898C0 )
            *(_DWORD *)(v40 - 4) = 0;
            *(_DWORD *)(v40 - 12) = v39;
            *(_BYTE *)(v40 + v39) = byte_26C67B8[0];
        result = (const void **)4;
      *(_DWORD *)(v1 + 132) = result;
      return result;
    if ( (unsigned __int8)i == v6 )
      break;
    v10 = *(_BYTE *)(v8 + 2);
    v8 += 2;
  if ( v3 != 98 || *(_DWORD *)(v1 + 124) == 2 )
    *(_DWORD *)(v1 + 132) = 1;
    v13 = *(_DWORD *)(v1 + 160);
    v12 = (const void **)(v1 + 160);
    v11 = v13;
    v14 = *(_BYTE *)(v8 + 1);
    goto LABEL_29;
LABEL_36:
  *(_DWORD *)(v1 + 132) = 25;
  v21 = *(_DWORD *)(v1 + 160);
  v12 = (const void **)(v1 + 160);
  v18 = *(_BYTE **)(v21 - 12);
  v14 = 112;
  return sub_119CB38(v12, 0, v18, (_BYTE *)1, v14);
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  void *v1; // r4@1

  v1 = *(void **)(a1 + 16);
  (**(void (__fastcall ***)(_DWORD))v1)(*(_DWORD *)(a1 + 16));
  j_j_j__ZdlPv_3(v1);
}


int __fastcall std::_Function_base::_Base_manager<ResourcePackStackPacket::write(BinaryStream &)const::{lambda(BinaryStream &,PackInstanceId const&)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<std::vector<unsigned int,std::allocator<unsigned int>> *,std::__shared_ptr<std::vector<unsigned int,std::allocator<unsigned int>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::vector<unsigned int,std::allocator<unsigned int>> *>>,std::__shared_ptr<std::vector<unsigned int,std::allocator<unsigned int>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::vector<unsigned int,std::allocator<unsigned int>> *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<std::vector<unsigned int,std::allocator<unsigned int>> *,std::__shared_ptr<std::vector<unsigned int,std::allocator<unsigned int>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::vector<unsigned int,std::allocator<unsigned int>> *>>,std::__shared_ptr<std::vector<unsigned int,std::allocator<unsigned int>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::vector<unsigned int,std::allocator<unsigned int>> *>>>(
           a1,
           a2);
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(a1);
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::leaderboard::leaderboard_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::leaderboard::leaderboard_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


void __fastcall std::__future_base::_Result<Legacy::WorldConversionReport>::~_Result(int a1)
{
  std::__future_base::_Result<Legacy::WorldConversionReport>::~_Result(a1);
}


  std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)
{
    (int)&v19,
    &v14);
  v17 = v15;
  v18 = v16;
  v15 = 0;
  v16 = 0;
  sub_DA7434(v2, (int)&v17);
  v3 = v18;
  if ( v18 )
  {
    v4 = (unsigned int *)(v18 + 4);
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
  v8 = v16;
  if ( v16 )
    v9 = (unsigned int *)(v16 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return v2;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<PendingDownloadParams *,std::__shared_ptr<PendingDownloadParams *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<PendingDownloadParams *>>,std::__shared_ptr<PendingDownloadParams *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<PendingDownloadParams *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_26DD03C;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


int __fastcall std::_Function_base::_Base_manager<ResourcePackStackPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<std::function<void ()(web::http::message_direction::direction,unsigned long long)> *,std::__shared_ptr<std::function<void ()(web::http::message_direction::direction,unsigned long long)> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::function<void ()(web::http::message_direction::direction,unsigned long long)> *>>,std::__shared_ptr<std::function<void ()(web::http::message_direction::direction,unsigned long long)> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::function<void ()(web::http::message_direction::direction,unsigned long long)> *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_26DE0E0;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<std::shared_ptr<xbox::services::multiplayer::multiplayer_session>>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr const&<pplx::details::_ExceptionHolder>)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<std::shared_ptr<xbox::services::multiplayer::multiplayer_session>>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr const&<pplx::details::_ExceptionHolder>)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<std::vector<unsigned int,std::allocator<unsigned int>> *,std::__shared_ptr<std::vector<unsigned int,std::allocator<unsigned int>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::vector<unsigned int,std::allocator<unsigned int>> *>>,std::__shared_ptr<std::vector<unsigned int,std::allocator<unsigned int>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    v13);
  v15 = v21;
  v21 = *(_DWORD *)(v6 + 4);
  v14 = v21;
  *(_DWORD *)(v6 + 4) = v15;
  if ( v14 )
  {
    v16 = (unsigned int *)(v14 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 == 1 )
      v18 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( &pthread_create )
      {
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
      }
      else
        v19 = (*v18)--;
      if ( v19 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  }
  return v6;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIScreenControllerBindTests::UI_BindIntInCollection(void)::{lambda(int)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // r6@1
  int v4; // r4@1
  _DWORD *v5; // r5@1
  _DWORD *v6; // r0@1
  int v7; // r5@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r6@8
  unsigned int v11; // r0@10

  v3 = a3;
  v4 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v5 = operator new(0x10u);
  *(_DWORD *)v4 = v5;
  v5[1] = 0;
  v5[2] = 0;
  *v5 = &off_26D51DC;
  v5[3] = *v3;
  v6 = operator new(0x14u);
  v6[1] = 1;
  v6[2] = 1;
  *v6 = &off_26D51F0;
  v6[4] = v5;
  v7 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = v6;
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
  return v4;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::title_storage::title_storage_blob_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::title_storage::title_storage_blob_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


int __fastcall std::__detail::_NFA<std::regex_traits<char>>::_M_insert_backref(int a1, unsigned int a2)
{
  int v2; // r10@1
  __int64 i; // r6@3
  __int64 v4; // kr00_8@7
  signed int v5; // r4@8
  unsigned int v6; // r5@8
  int v7; // r6@8
  int v8; // r7@8
  __int64 v9; // r1@8
  int v10; // r3@8
  int v11; // r7@8
  int v12; // r4@10
  signed int v14; // [sp+0h] [bp-70h]@7
  signed int v15; // [sp+4h] [bp-6Ch]@7
  unsigned int v16; // [sp+8h] [bp-68h]@7
  int v17; // [sp+Ch] [bp-64h]@7
  int v18; // [sp+10h] [bp-60h]@7
  __int64 v19; // [sp+14h] [bp-5Ch]@8
  void (__fastcall *v20)(__int64 *, __int64 *, signed int); // [sp+1Ch] [bp-54h]@7
  int v21; // [sp+20h] [bp-50h]@8
  int v22; // [sp+28h] [bp-48h]@7
  signed int v23; // [sp+2Ch] [bp-44h]@7
  unsigned int v24; // [sp+30h] [bp-40h]@7
  int v25; // [sp+34h] [bp-3Ch]@7
  int v26; // [sp+38h] [bp-38h]@7
  void (*v27)(void); // [sp+44h] [bp-2Ch]@7

  v2 = a1;
  if ( *(_DWORD *)(a1 + 20) <= a2 )
    sub_119E4A8(3);
  for ( i = *(_QWORD *)a1; HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 4 )
  {
    if ( *(_DWORD *)i == a2 )
      sub_119E4A8(3);
  }
  *(_BYTE *)(a1 + 28) = 1;
  v22 = 2;
  v23 = -1;
  v24 = a2;
  v14 = 2;
  v15 = -1;
  v16 = a2;
  v17 = v25;
  v18 = v26;
  v27 = 0;
  v20 = 0;
  v4 = *(_QWORD *)(a1 + 36);
  if ( (_DWORD)v4 == HIDWORD(v4) )
    std::vector<std::__detail::_State<std::regex_traits<char>>,std::allocator<std::__detail::_State<std::regex_traits<char>>>>::_M_emplace_back_aux<std::__detail::_State<std::regex_traits<char>>>(
      (unsigned __int64 *)(a1 + 32),
      (int)&v14);
    v11 = *(_DWORD *)(v2 + 36);
  else
    v5 = v15;
    v6 = v16;
    v7 = v17;
    v8 = v18;
    *(_DWORD *)v4 = v14;
    *(_DWORD *)(v4 + 4) = v5;
    *(_DWORD *)(v4 + 8) = v6;
    *(_DWORD *)(v4 + 12) = v7;
    *(_DWORD *)(v4 + 16) = v8;
    *(_DWORD *)(v4 + 28) = 0;
    v9 = v19;
    v10 = *(_QWORD *)(v4 + 20);
    v19 = *(_QWORD *)(v4 + 20);
    *(_QWORD *)(v4 + 20) = v9;
    HIDWORD(v9) = v20;
    v20 = *(void (__fastcall **)(__int64 *, __int64 *, signed int))(v4 + 28);
    *(_DWORD *)(v4 + 28) = HIDWORD(v9);
    HIDWORD(v9) = v21;
    v21 = *(_DWORD *)(v4 + 32);
    *(_DWORD *)(v4 + 32) = HIDWORD(v9);
    v11 = *(_DWORD *)(a1 + 36) + 36;
    *(_DWORD *)(a1 + 36) = v11;
  v12 = *(_DWORD *)(v2 + 32);
  if ( v20 )
    v20(&v19, &v19, 3);
  if ( v27 )
    v27();
  return 954437177 * ((v11 - v12) >> 2) - 1;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(a1);
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIDefRepositoryTests::UIDefRepository_ForEachControlWithManySubControls_CallbackCalled(void)::{lambda(Json::Value const&,std::string const&)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


void __fastcall std::__future_base::_Result<LevelArchiver::Result>::~_Result(int a1)
{
  void *v1; // r4@1
  int v2; // r1@2
  void *v3; // r0@2
  unsigned int *v4; // r12@4
  signed int v5; // r1@6

  v1 = (void *)a1;
  *(_DWORD *)a1 = &off_2718978;
  if ( *(_BYTE *)(a1 + 16) )
  {
    v2 = *(_DWORD *)(a1 + 12);
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
  }
  sub_21E6218((int)v1);
  operator delete(v1);
}


  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(v2) != 1 )
{
    if ( *(_DWORD *)(v2 + 144) != 14 )
      sub_119E4D8(4);
    EntityInteraction::setInteractText((int *)(v2 + 228), (int *)(v2 + 172));
    if ( (unsigned int)*(_QWORD *)(v2 + 160) == *(_QWORD *)(v2 + 160) >> 32 )
    {
      *(_DWORD *)(v2 + 144) = 28;
    }
    else
      v14 = *(_DWORD *)(v2 + 136);
      if ( v14 == 2 )
      {
        std::__detail::_Scanner<char>::_M_scan_in_bracket(v3);
      }
      else
        if ( v14 == 1 )
          std::__detail::_Scanner<char>::_M_scan_in_brace(v3);
        if ( !v14 )
          std::__detail::_Scanner<char>::_M_scan_normal(v3);
    v27 = *(_BYTE **)(v2 + 228);
    v28 = *(_DWORD *)(v2 + 8);
    if ( *((_DWORD *)v27 - 1) >= 0 )
      sub_119CB68((const void **)(v2 + 228));
      v27 = *(_BYTE **)(v2 + 228);
    v29 = *(_BYTE *)(*(_DWORD *)(v28 + 24) + *v27);
    v19 = std::regex_traits<char>::lookup_classname<char const*>(
            *(_DWORD *)(v5 + 88),
            v27,
            &v27[*((_DWORD *)v27 - 3)],
            0);
    v44 = v19;
    v30 = v29 & 1;
    if ( !(v19 & 0x3FF) )
      sub_119E4A8(1);
    if ( v30 )
      v31 = *(_QWORD *)(v5 + 72);
      if ( (_DWORD)v31 == HIDWORD(v31) )
        std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::_M_emplace_back_aux<std::regex_traits<char>::_RegexMask const&>(
          (unsigned __int64 *)(v5 + 68),
          &v44);
        *(_WORD *)v31 = v19;
        *(_DWORD *)(v5 + 72) += 2;
      return;
LABEL_48:
    *(_WORD *)(v5 + 80) = (unsigned __int8)(*(_BYTE *)(v5 + 80) | v19) | (unsigned __int16)((*(_BYTE *)(v5 + 81) | (v19 >> 8)) << 8);
    return;
  }
  v10 = (char **)(v2 + 228);
  v9 = *(char **)(v2 + 228);
  if ( *((_DWORD *)v9 - 1) >= 0 )
  {
    sub_119CB68((const void **)(v2 + 228));
    v9 = *v10;
  v11 = (_BYTE *)(unsigned __int8)*v9;
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(v2) )
    v12 = *v10;
    if ( *((_DWORD *)*v10 - 1) >= 0 )
      v12 = *v10;
    if ( *v12 == 45 )
      if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(v2) == 1 )
        v13 = *v10;
        if ( *((_DWORD *)*v10 - 1) >= 0 )
        {
          sub_119CB68((const void **)(v2 + 228));
          v13 = *v10;
        }
        j_j_j__ZNSt8__detail15_BracketMatcherISt12regex_traitsIcELb0ELb1EE13_M_make_rangeEcc(
          v5,
          (int)v11,
          (unsigned __int8)*v13);
        return;
      if ( *(_DWORD *)(v2 + 144) != 11 )
        sub_119E4A8(8);
    v20 = *v10;
      v20 = *v10;
    v17 = (_DWORD *)(v5 + 40);
    v21 = *v20;
    v18 = (void **)(v5 + 32);
    v15 = (int *)(v5 + 36);
    v22 = *(_BYTE **)(v5 + 36);
    if ( v22 == *(_BYTE **)(v5 + 40) )
      v23 = *v18;
      v24 = v22 - (_BYTE *)*v18;
      if ( v24 == -1 )
        sub_119C9C4("vector::_M_emplace_back_aux");
      v25 = v22 - (_BYTE *)*v18;
      v42 = (char)v11;
      if ( v22 == v23 )
        v25 = 1;
      v26 = v25 + v24;
      if ( v25 + v24 < v25 )
        v26 = -1;
      if ( v26 )
        v11 = operator new(v26);
        v23 = *v18;
        v22 = (_BYTE *)*v15;
        v11 = 0;
      v11[v22 - v23] = v21;
      v32 = (int)&v11[v22 - v23];
      if ( v22 != v23 )
        _aeabi_memmove(v11, v23);
      v16 = (_BYTE *)(v32 + 1);
      if ( v23 )
        operator delete(v23);
      *v18 = v11;
      *v15 = (int)v16;
      *v17 = &v11[v26];
      LOBYTE(v11) = v42;
      *v22 = v21;
      v16 = (_BYTE *)(*v15 + 1);
  else
    v16 = *(_BYTE **)(v5 + 36);
  if ( v16 == (_BYTE *)*v17 )
    v33 = *v18;
    v34 = v16 - (_BYTE *)*v18;
    if ( v34 == -1 )
      sub_119C9C4("vector::_M_emplace_back_aux");
    v35 = v16 - (_BYTE *)*v18;
    v43 = (char)v11;
    if ( v16 == v33 )
      v35 = 1;
    v36 = v35 + v34;
    if ( v35 + v34 < v35 )
      v36 = -1;
    if ( v36 )
      v37 = (char *)operator new(v36);
      v33 = *v18;
      v38 = v37;
      v16 = (_BYTE *)*v15;
      v38 = 0;
    v39 = v16 == v33;
    v40 = &v38[v16 - v33];
    *v40 = v43;
    if ( !v39 )
      _aeabi_memmove(v38, v33);
    v41 = (int)(v40 + 1);
    if ( v33 )
      operator delete(v33);
    *(_DWORD *)(v5 + 32) = v38;
    *v15 = v41;
    *v17 = &v38[v36];
    *v16 = (_BYTE)v11;
    ++*v15;
}


void __fastcall std::_Destroy<xbox::services::multiplayer::multiplayer_activity_details>(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  int v5; // r1@4
  void *v6; // r0@4
  int v7; // r1@5
  void *v8; // r0@5
  int v9; // r1@6
  void *v10; // r0@6
  int *v11; // r0@7
  unsigned int *v12; // r2@9
  signed int v13; // r1@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  unsigned int *v16; // r2@17
  signed int v17; // r1@19
  unsigned int *v18; // r2@21
  signed int v19; // r1@23
  unsigned int *v20; // r2@25
  signed int v21; // r1@27

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 44);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 96))();
  *(_DWORD *)(v1 + 44) = 0;
  v3 = *(_DWORD *)(v1 + 32);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v3 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = *(_DWORD *)(v1 + 12);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v5 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = *(_DWORD *)(v1 + 8);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v7 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = *(_DWORD *)(v1 + 4);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v9 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (int *)(*(_DWORD *)v1 - 12);
  if ( v11 != &dword_28898C0 )
    v20 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(a1);
}


void __fastcall __noreturn std::make_exception_ptr<web::http::oauth1::experimental::oauth1_exception>(int a1, int a2)
{
  std::make_exception_ptr<web::http::oauth1::experimental::oauth1_exception>(a1, a2);
}


int __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>::_M_run(int a1)
{
  int v1; // r4@1
  unsigned __int8 *v2; // r5@1
  unsigned int v3; // r1@2
  _BYTE *v4; // r0@4
  int v5; // r0@5
  int v6; // r0@8
  int result; // r0@9

  v1 = *(_DWORD *)(a1 + 12);
  v2 = (unsigned __int8 *)(v1 + 40);
  do
  {
    do
      v3 = __ldrex(v2);
    while ( __strex(1u, v2) );
    __dmb();
  }
  while ( v3 );
  v4 = *(_BYTE **)(v1 + 24);
  if ( v4 == (_BYTE *)(*(_DWORD *)(v1 + 32) - 1) )
    if ( (unsigned int)((*(_QWORD *)v1 >> 32) - ((signed int)(*(_DWORD *)(v1 + 36) - *(_QWORD *)v1) >> 2)) <= 1 )
      std::deque<char,std::allocator<char>>::_M_reallocate_map(v1, 1u, 0);
    *(_DWORD *)(*(_DWORD *)(v1 + 36) + 4) = operator new(0x200u);
    **(_BYTE **)(v1 + 24) = 99;
    v6 = *(_DWORD *)(v1 + 36);
    *(_DWORD *)(v1 + 36) = v6 + 4;
    v5 = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v1 + 28) = v5;
    *(_DWORD *)(v1 + 32) = v5 + 512;
  else
    *v4 = 99;
    v5 = *(_DWORD *)(v1 + 24) + 1;
  *(_DWORD *)(v1 + 24) = v5;
  result = 0;
  __dmb();
  *v2 = 0;
  return result;
}


  std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)
{
    (int)&v19,
    &v14);
  v17 = v15;
  v18 = v16;
  v15 = 0;
  v16 = 0;
  sub_DA7434(v2, (int)&v17);
  v3 = v18;
  if ( v18 )
  {
    v4 = (unsigned int *)(v18 + 4);
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
  v8 = v16;
  if ( v16 )
    v9 = (unsigned int *)(v16 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return v2;
}


void __fastcall std::swap<InviteScreenController::friendEntry>(int a1, int *a2)
{
  std::swap<InviteScreenController::friendEntry>(a1, a2);
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>::~_Impl(void *ptr)
{
  void *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = ptr;
  *(_DWORD *)ptr = &off_26D51AC;
  v2 = *((_DWORD *)ptr + 2);
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
  j_j_j__ZdlPv_3(v1);
}


void __fastcall __noreturn std::make_exception_ptr<web::websockets::client::websocket_exception>(int a1, int a2)
{
  std::make_exception_ptr<web::websockets::client::websocket_exception>(a1, a2);
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<LevelArchiver::Result *,std::__shared_ptr<LevelArchiver::Result *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<LevelArchiver::Result *>>,std::__shared_ptr<LevelArchiver::Result *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<LevelArchiver::Result *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_271898C;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


int __fastcall std::__detail::_NFA<std::regex_traits<char>>::_M_insert_line_end(int a1)
{
  int v1; // r4@1
  unsigned __int64 *v2; // r8@1
  __int64 v3; // kr00_8@1
  int v4; // r2@2
  int v5; // r5@2
  int v6; // r6@2
  int v7; // r7@2
  __int64 v8; // kr08_8@2
  void (*v9)(void); // r2@2
  int v10; // r2@2
  int v11; // r6@2
  int v12; // r4@4
  int v14; // [sp+0h] [bp-40h]@1
  int v15; // [sp+4h] [bp-3Ch]@1
  int v16; // [sp+8h] [bp-38h]@2
  int v17; // [sp+Ch] [bp-34h]@2
  int v18; // [sp+10h] [bp-30h]@2
  __int64 v19; // [sp+14h] [bp-2Ch]@2
  void (*v20)(void); // [sp+1Ch] [bp-24h]@1
  int v21; // [sp+20h] [bp-20h]@2

  v1 = a1;
  v14 = 4;
  v15 = -1;
  v20 = 0;
  v2 = (unsigned __int64 *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 36);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    std::vector<std::__detail::_State<std::regex_traits<char>>,std::allocator<std::__detail::_State<std::regex_traits<char>>>>::_M_emplace_back_aux<std::__detail::_State<std::regex_traits<char>>>(
      v2,
      (int)&v14);
    v11 = *(_DWORD *)(v1 + 36);
  }
  else
    v4 = v15;
    v5 = v16;
    v6 = v17;
    v7 = v18;
    *(_DWORD *)v3 = v14;
    *(_DWORD *)(v3 + 4) = v4;
    *(_DWORD *)(v3 + 8) = v5;
    *(_DWORD *)(v3 + 12) = v6;
    *(_DWORD *)(v3 + 16) = v7;
    *(_DWORD *)(v3 + 28) = 0;
    v8 = v19;
    v19 = *(_QWORD *)(v3 + 20);
    *(_QWORD *)(v3 + 20) = v8;
    v9 = v20;
    v20 = *(void (**)(void))(v3 + 28);
    *(_DWORD *)(v3 + 28) = v9;
    v10 = v21;
    v21 = *(_DWORD *)(v3 + 32);
    *(_DWORD *)(v3 + 32) = v10;
    v11 = *(_DWORD *)(a1 + 36) + 36;
    *(_DWORD *)(a1 + 36) = v11;
  v12 = *(_DWORD *)v2;
  if ( v20 )
    v20();
  return 954437177 * ((v11 - v12) >> 2) - 1;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<std::function<void ()(web::http::message_direction::direction,unsigned long long)> *,std::__shared_ptr<std::function<void ()(web::http::message_direction::direction,unsigned long long)> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::function<void ()(web::http::message_direction::direction,unsigned long long)> *>>,std::__shared_ptr<std::function<void ()(web::http::message_direction::direction,unsigned long long)> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::function<void ()(web::http::message_direction::direction,unsigned long long)> *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<std::function<void ()(web::http::message_direction::direction,unsigned long long)> *,std::__shared_ptr<std::function<void ()(web::http::message_direction::direction,unsigned long long)> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::function<void ()(web::http::message_direction::direction,unsigned long long)> *>>,std::__shared_ptr<std::function<void ()(web::http::message_direction::direction,unsigned long long)> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::function<void ()(web::http::message_direction::direction,unsigned long long)> *>>>(
           a1,
           a2);
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::system::auth_flow_result>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::system::auth_flow_result>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<web::http::http_response::extract_vector(void)const::{lambda(unsigned long long)#1}>::_M_manager(void ***a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void ***v4; // r4@1
  void **v5; // r0@2
  void **v6; // r1@4
  void *v7; // r1@4
  unsigned int *v8; // r1@5
  unsigned int v9; // r2@7
  void **v10; // r4@9
  void *v11; // r5@10
  unsigned int *v12; // r1@11
  unsigned int v13; // r0@13
  unsigned int *v15; // r6@19
  unsigned int v16; // r0@21

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'web::http::http_response::extract_vector(void)const::{lambda(unsigned long long)#1};
      goto LABEL_16;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(8u);
      v6 = *v3;
      *v5 = **v3;
      v7 = v6[1];
      v5[1] = v7;
      if ( v7 )
      {
        v8 = (unsigned int *)((char *)v7 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 + 1, v8) );
        }
        else
          ++*v8;
      }
LABEL_16:
      *v4 = v5;
      return 0;
    case 3:
      v10 = *a1;
      if ( *a1 )
        v11 = v10[1];
        if ( v11 )
          v12 = (unsigned int *)((char *)v11 + 4);
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
            v15 = (unsigned int *)((char *)v11 + 8);
            (*(void (__fastcall **)(void *))(*(_DWORD *)v11 + 8))(v11);
            if ( &pthread_create )
            {
              __dmb();
              do
                v16 = __ldrex(v15);
              while ( __strex(v16 - 1, v15) );
            }
            else
              v16 = (*v15)--;
            if ( v16 == 1 )
              (*(void (__fastcall **)(void *))(*(_DWORD *)v11 + 12))(v11);
        j_operator delete(v10);
      break;
    default:
  }
  return 0;
}


const char *__fastcall std::bad_array_length::what(std::bad_array_length *this)
{
  return "std::bad_array_length";
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<PendingDownloadParams *,std::__shared_ptr<PendingDownloadParams *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<PendingDownloadParams *>>,std::__shared_ptr<PendingDownloadParams *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<PendingDownloadParams *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<PendingDownloadParams *,std::__shared_ptr<PendingDownloadParams *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<PendingDownloadParams *>>,std::__shared_ptr<PendingDownloadParams *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<PendingDownloadParams *>>>(
           a1,
           a2);
}


pthread_mutex_t *__fastcall std::shared_timed_mutex::lock(pthread_mutex_t *mutex)
{
  pthread_mutex_t *v1; // r4@1
  int v2; // r0@2
  signed int v3; // r0@4
  pthread_mutex_t *result; // r0@8
  bool v5; // zf@8
  pthread_mutex_t *mutexa; // [sp+4h] [bp-1Ch]@1
  unsigned __int8 v7; // [sp+8h] [bp-18h]@1

  v1 = mutex;
  mutexa = mutex;
  v7 = 0;
  if ( &pthread_create )
  {
    v2 = j_pthread_mutex_lock_0(mutex);
    if ( v2 )
      sub_21E5E14(v2);
  }
  v7 = 1;
  while ( 1 )
    v3 = v1->__kind;
    if ( v3 > -1 )
      break;
    sub_21E03B8((pthread_cond_t *)&v1->__count, &mutexa);
  v1->__kind = v3 | 0x80000000;
  if ( v3 & 0x7FFFFFFF )
    do
      sub_21E03B8((pthread_cond_t *)&v1->__owner, &mutexa);
    while ( v1->__kind & 0x7FFFFFFF );
  result = (pthread_mutex_t *)v7;
  v5 = v7 == 0;
  if ( v7 )
    result = mutexa;
    v5 = mutexa == 0;
  if ( !v5 )
    if ( &pthread_create )
      j_pthread_mutex_unlock_0(result);
    result = 0;
    v7 = 0;
  return result;
}


int __fastcall std::__future_base::_Result<Legacy::WorldConversionReport>::_M_destroy(int result)
{
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 8))();
  return result;
}


int __fastcall std::_Function_base::_Base_manager<Core::Result::merge(Core::Result&&,Core::Result&)::{lambda(std::string *)#1}>::_M_manager(int *a1, int *a2, int a3)
{
  int *v3; // r6@1
  int *v4; // r4@1
  int result; // r0@4
  int v6; // r4@5
  void (*v7)(void); // r3@6
  void (__fastcall *v8)(int, int, signed int); // r3@8
  _DWORD *v9; // r0@12
  int v10; // r6@12
  _DWORD *v11; // r5@12
  void (__fastcall *v12)(_DWORD *, int, signed int); // r3@12
  char v13; // r0@13
  char v14; // r0@15
  void (__fastcall *v15)(_DWORD *, int, signed int); // r3@15
  char v16; // r0@17

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *a1 )
    {
      v7 = *(void (**)(void))(v6 + 28);
      if ( v7 )
        v7();
      v8 = *(void (__fastcall **)(int, int, signed int))(v6 + 8);
      if ( v8 )
        v8(v6, v6, 3);
      j_operator delete((void *)v6);
    }
    return 0;
  }
  if ( a3 != 2 )
    if ( a3 == 1 )
      *a1 = *a2;
      return 0;
  v9 = j_operator new(0x28u);
  v10 = *v3;
  v11 = v9;
  v9[2] = 0;
  v12 = *(void (__fastcall **)(_DWORD *, int, signed int))(v10 + 8);
  if ( v12 )
    v12(v9, v10, 2);
    v11[3] = *(_DWORD *)(v10 + 12);
    v11[2] = *(_DWORD *)(v10 + 8);
    v13 = *((_BYTE *)v11 + 16) & 0xFE;
  else
    v13 = 0;
  v14 = v13 | *(_BYTE *)(v10 + 16) & 1;
  *((_BYTE *)v11 + 16) = v14;
  *((_BYTE *)v11 + 16) = v14 & 0xFD | *(_BYTE *)(v10 + 16) & 2;
  v11[7] = 0;
  v15 = *(void (__fastcall **)(_DWORD *, int, signed int))(v10 + 28);
  if ( v15 )
    v15(v11 + 5, v10 + 20, 2);
    v11[8] = *(_DWORD *)(v10 + 32);
    v11[7] = *(_DWORD *)(v10 + 28);
  v16 = *((_BYTE *)v11 + 36) & 0xFE | *(_BYTE *)(v10 + 36) & 1;
  *((_BYTE *)v11 + 36) = v16;
  *((_BYTE *)v11 + 36) = v16 & 0xFD | *(_BYTE *)(v10 + 36) & 2;
  result = 0;
  *v4 = (int)v11;
  return result;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::xbox_live_app_config *>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1
  __int64 v5; // r1@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = j_operator new(0x10u);
  HIDWORD(v5) = 1;
  LODWORD(v5) = &off_2767D80;
  *(_QWORD *)v4 = v5;
  v4[2] = 1;
  v4[3] = v3;
  *v2 = v4;
  return v2;
}


void __noreturn std::unexpected(void)
{
  std::unexpected();
}


void __fastcall std::__future_base::_State_baseV2::~_State_baseV2(std::__future_base::_State_baseV2 *this)
{
  std::__future_base::_State_baseV2 *v1; // r4@1
  void (***v2)(void); // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26D78F8;
  sub_DA7F4C((pthread_cond_t *)((char *)this + 12));
  v2 = (void (***)(void))*((_DWORD *)v1 + 1);
  if ( v2 )
    (**v2)();
  j_j_j__ZdlPv_3((void *)v1);
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<FileDataResponse *,std::__shared_ptr<FileDataResponse *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<FileDataResponse *>>,std::__shared_ptr<FileDataResponse *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    (int)v2);
  v4 = v10;
  v10 = *(_DWORD *)(v1 + 4);
  v3 = v10;
  *(_DWORD *)(v1 + 4) = v4;
  if ( v3 )
  {
    v5 = (unsigned int *)(v3 + 4);
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
      v7 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  return v1;
}


  return std::_Function_base::_Base_manager<web::websockets::client::details::wspp_callback_client::connect(void)::{lambda(std::weak_ptr<void>,boost::asio::ssl::stream<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>> &)
{
           a2,
           a3);
}


int __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_disjunction(int a1)
{
  int v1; // r4@1
  int result; // r0@1
  int v3; // r7@2
  int v4; // r0@4
  __int64 v5; // r0@11
  int v6; // r0@12
  int v7; // r9@12
  int v8; // t1@12
  int v9; // r10@12
  int v10; // r0@13
  int v11; // r0@13
  int v12; // r1@13
  __int64 v13; // r0@14
  int v14; // r6@14
  int v15; // r0@15
  int v16; // r11@15
  int v17; // t1@15
  int v18; // r7@15
  int v19; // r8@15
  int v20; // r0@16
  int v21; // r0@16
  int v22; // r1@16
  int v23; // r0@17
  int v24; // r5@17
  int v25; // r1@17
  int v26; // r6@17
  int v27; // r0@17
  int v28; // r0@18
  int v29; // r0@21
  int v30; // r0@21
  int v31; // [sp+4h] [bp-34h]@2
  int v32; // [sp+10h] [bp-28h]@12

  v1 = a1;
  std::__detail::_Compiler<std::regex_traits<char>>::_M_alternative(a1);
  result = *(_DWORD *)(v1 + 144);
  if ( result == 19 )
  {
    v31 = v1 + 12;
    v3 = v1 + 184;
    do
    {
      EntityInteraction::setInteractText((int *)(v1 + 228), (int *)(v1 + 172));
      if ( (unsigned int)*(_QWORD *)(v1 + 160) == *(_QWORD *)(v1 + 160) >> 32 )
      {
        *(_DWORD *)(v1 + 144) = 28;
      }
      else
        v4 = *(_DWORD *)(v1 + 136);
        if ( v4 == 2 )
        {
          std::__detail::_Scanner<char>::_M_scan_in_bracket(v31);
        }
        else
          if ( v4 == 1 )
            std::__detail::_Scanner<char>::_M_scan_in_brace(v31);
          if ( !v4 )
            std::__detail::_Scanner<char>::_M_scan_normal(v31);
      v5 = *(_QWORD *)(v1 + 256);
      if ( (_DWORD)v5 == HIDWORD(v5) )
        HIDWORD(v5) = *(_DWORD *)(*(_DWORD *)(v1 + 268) - 4);
        v7 = *(_QWORD *)(HIDWORD(v5) + 492);
        v9 = *(_DWORD *)(HIDWORD(v5) + 500);
        v32 = *(_QWORD *)(HIDWORD(v5) + 492) >> 32;
        operator delete((void *)v5);
        v10 = *(_DWORD *)(v1 + 268);
        *(_DWORD *)(v1 + 268) = v10 - 4;
        v11 = *(_DWORD *)(v10 - 4);
        *(_DWORD *)(v1 + 260) = v11;
        v12 = v11 + 504;
        v6 = v11 + 492;
        *(_DWORD *)(v1 + 264) = v12;
        v8 = *(_DWORD *)(v5 - 12);
        v6 = v5 - 12;
        v7 = v8;
        v32 = *(_DWORD *)(v6 + 4);
        v9 = *(_DWORD *)(v6 + 8);
      *(_DWORD *)(v1 + 256) = v6;
      std::__detail::_Compiler<std::regex_traits<char>>::_M_alternative(v1);
      v13 = *(_QWORD *)(v1 + 256);
      v14 = v3;
      if ( (_DWORD)v13 == HIDWORD(v13) )
        HIDWORD(v13) = *(_DWORD *)(*(_DWORD *)(v1 + 268) - 4);
        v19 = *(_QWORD *)(HIDWORD(v13) + 492) >> 32;
        v16 = *(_QWORD *)(HIDWORD(v13) + 492);
        v18 = *(_DWORD *)(HIDWORD(v13) + 500);
        operator delete((void *)v13);
        v20 = *(_DWORD *)(v1 + 268);
        *(_DWORD *)(v1 + 268) = v20 - 4;
        v21 = *(_DWORD *)(v20 - 4);
        *(_DWORD *)(v1 + 260) = v21;
        v22 = v21 + 504;
        v15 = v21 + 492;
        *(_DWORD *)(v1 + 264) = v22;
        v17 = *(_DWORD *)(v13 - 12);
        v15 = v13 - 12;
        v16 = v17;
        v18 = *(_QWORD *)(v15 + 4) >> 32;
        v19 = *(_QWORD *)(v15 + 4);
      *(_DWORD *)(v1 + 256) = v15;
      v23 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_dummy(v14);
      v24 = v23;
      v25 = 9 * v18;
      v3 = v14;
      *(_DWORD *)(*(_DWORD *)(v7 + 32) + 36 * v9 + 4) = v23;
      *(_DWORD *)(*(_DWORD *)(v16 + 32) + 4 * v25 + 4) = v23;
      v26 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_alt(v14, v32, v19, 0);
      v27 = *(_DWORD *)(v1 + 256);
      if ( v27 == *(_DWORD *)(v1 + 264) - 12 )
        if ( (unsigned int)((*(_QWORD *)(v1 + 232) >> 32)
                          - ((signed int)(*(_DWORD *)(v1 + 268) - *(_QWORD *)(v1 + 232)) >> 2)) <= 1 )
          std::deque<std::__detail::_StateSeq<std::regex_traits<char>>,std::allocator<std::__detail::_StateSeq<std::regex_traits<char>>>>::_M_reallocate_map(
            v1 + 232,
            1u,
            0);
        *(_DWORD *)(*(_DWORD *)(v1 + 268) + 4) = operator new(0x1F8u);
        v29 = *(_DWORD *)(v1 + 256);
        *(_DWORD *)v29 = v3;
        *(_DWORD *)(v29 + 4) = v26;
        *(_DWORD *)(v29 + 8) = v24;
        v30 = *(_DWORD *)(v1 + 268);
        *(_DWORD *)(v1 + 268) = v30 + 4;
        v28 = *(_DWORD *)(v30 + 4);
        *(_DWORD *)(v1 + 260) = v28;
        *(_DWORD *)(v1 + 264) = v28 + 504;
        *(_DWORD *)v27 = v3;
        *(_DWORD *)(v27 + 4) = v26;
        *(_DWORD *)(v27 + 8) = v24;
        v28 = *(_DWORD *)(v1 + 256) + 12;
      *(_DWORD *)(v1 + 256) = v28;
      result = *(_DWORD *)(v1 + 144);
    }
    while ( result == 19 );
  }
  return result;
}


int __fastcall std::_Function_base::_Base_manager<ViewBindTestScreenController::ViewBindTestScreenController(NameRegistry &)::{lambda(void)#3}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<serialize<ShapelessRecipe>::write(ShapelessRecipe const&,BinaryStream &)::{lambda(BinaryStream &,ItemInstance const&)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(ptr);
}


signed int __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_assertion(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  signed int v3; // r1@1
  signed int result; // r0@1
  int v5; // r0@5
  int v6; // r0@12
  _BYTE **v7; // r6@16
  int v8; // r0@17
  int v9; // r0@22
  int v10; // r5@32
  int v11; // r0@32
  _BYTE *v12; // r0@35
  char v13; // r1@37
  _BYTE *v14; // r0@42
  int v15; // r8@44
  int v16; // r0@46
  __int64 v17; // r0@57
  int v18; // r0@58
  int v19; // r7@58
  int v20; // t1@58
  int v21; // r6@58
  int v22; // r9@58
  int v23; // r0@59
  int v24; // r0@59
  int v25; // r1@59
  int v26; // r0@60
  char v27; // r2@60
  int v28; // r6@63
  int v29; // r0@63
  int v30; // r0@64
  int v31; // r0@67
  int v32; // r0@67

  v1 = a1;
  v2 = a1 + 12;
  v3 = *(_DWORD *)(a1 + 144);
  result = 0;
  if ( v3 > 23 )
  {
    if ( v3 == 24 )
    {
      EntityInteraction::setInteractText((int *)(v1 + 228), (int *)(v1 + 172));
      if ( (unsigned int)*(_QWORD *)(v1 + 160) == *(_QWORD *)(v1 + 160) >> 32 )
      {
        *(_DWORD *)(v1 + 144) = 28;
      }
      else
        v9 = *(_DWORD *)(v1 + 136);
        if ( v9 == 2 )
        {
          std::__detail::_Scanner<char>::_M_scan_in_bracket(v2);
        }
        else
          if ( v9 == 1 )
            std::__detail::_Scanner<char>::_M_scan_in_brace(v2);
          if ( !v9 )
            std::__detail::_Scanner<char>::_M_scan_normal(v2);
      v10 = v1 + 184;
      v11 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_line_end(v1 + 184);
    }
    else
      if ( v3 != 25 )
        return result;
        v6 = *(_DWORD *)(v1 + 136);
        if ( v6 == 2 )
          if ( v6 == 1 )
          if ( !v6 )
      v12 = *(_BYTE **)(v1 + 228);
      if ( *((_DWORD *)v12 - 1) >= 0 )
        sub_119CB68((const void **)(v1 + 228));
        v12 = *(_BYTE **)(v1 + 228);
      v13 = 0;
      if ( *v12 == 110 )
        v13 = 1;
      v11 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_word_bound(v1 + 184, v13);
  }
  else if ( v3 == 7 )
    v7 = (_BYTE **)(v1 + 228);
    EntityInteraction::setInteractText((int *)(v1 + 228), (int *)(v1 + 172));
    if ( (unsigned int)*(_QWORD *)(v1 + 160) == *(_QWORD *)(v1 + 160) >> 32 )
      *(_DWORD *)(v1 + 144) = 28;
      v8 = *(_DWORD *)(v1 + 136);
      if ( v8 == 2 )
        std::__detail::_Scanner<char>::_M_scan_in_bracket(v2);
        if ( v8 == 1 )
          std::__detail::_Scanner<char>::_M_scan_in_brace(v2);
        if ( !v8 )
          std::__detail::_Scanner<char>::_M_scan_normal(v2);
    v14 = *v7;
    if ( *((_DWORD *)*v7 - 1) >= 0 )
      sub_119CB68((const void **)(v1 + 228));
      v14 = *v7;
    v15 = *v14;
    std::__detail::_Compiler<std::regex_traits<char>>::_M_disjunction(v1);
    if ( *(_DWORD *)(v1 + 144) != 8 )
      sub_119E4A8(5);
      v16 = *(_DWORD *)(v1 + 136);
      if ( v16 == 2 )
        if ( v16 == 1 )
        if ( !v16 )
    v17 = *(_QWORD *)(v1 + 256);
    if ( (_DWORD)v17 == HIDWORD(v17) )
      HIDWORD(v17) = *(_DWORD *)(*(_DWORD *)(v1 + 268) - 4);
      v22 = *(_QWORD *)(HIDWORD(v17) + 492) >> 32;
      v19 = *(_QWORD *)(HIDWORD(v17) + 492);
      v21 = *(_DWORD *)(HIDWORD(v17) + 500);
      operator delete((void *)v17);
      v23 = *(_DWORD *)(v1 + 268);
      *(_DWORD *)(v1 + 268) = v23 - 4;
      v24 = *(_DWORD *)(v23 - 4);
      *(_DWORD *)(v1 + 260) = v24;
      v25 = v24 + 504;
      v18 = v24 + 492;
      *(_DWORD *)(v1 + 264) = v25;
      v20 = *(_DWORD *)(v17 - 12);
      v18 = v17 - 12;
      v19 = v20;
      v21 = *(_QWORD *)(v18 + 4) >> 32;
      v22 = *(_QWORD *)(v18 + 4);
    v10 = v1 + 184;
    *(_DWORD *)(v1 + 256) = v18;
    v26 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_accept(v1 + 184);
    v27 = 0;
    *(_DWORD *)(*(_DWORD *)(v19 + 32) + 36 * v21 + 4) = v26;
    if ( v15 == 110 )
      v27 = 1;
    v11 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_lookahead(v1 + 184, v22, v27);
  else
    if ( v3 != 23 )
      return result;
      v5 = *(_DWORD *)(v1 + 136);
      if ( v5 == 2 )
        if ( v5 == 1 )
        if ( !v5 )
    v11 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_line_begin(v1 + 184);
  v28 = v11;
  v29 = *(_DWORD *)(v1 + 256);
  if ( v29 == *(_DWORD *)(v1 + 264) - 12 )
    if ( (unsigned int)(*(_DWORD *)(v1 + 236) - ((*(_DWORD *)(v1 + 268) - *(_DWORD *)(v1 + 232)) >> 2)) <= 1 )
      std::deque<std::__detail::_StateSeq<std::regex_traits<char>>,std::allocator<std::__detail::_StateSeq<std::regex_traits<char>>>>::_M_reallocate_map(
        v1 + 232,
        1u,
        0);
    *(_DWORD *)(*(_DWORD *)(v1 + 268) + 4) = operator new(0x1F8u);
    v31 = *(_DWORD *)(v1 + 256);
    *(_DWORD *)v31 = v10;
    *(_DWORD *)(v31 + 4) = v28;
    *(_DWORD *)(v31 + 8) = v28;
    v32 = *(_DWORD *)(v1 + 268);
    *(_DWORD *)(v1 + 268) = v32 + 4;
    v30 = *(_DWORD *)(v32 + 4);
    *(_DWORD *)(v1 + 260) = v30;
    *(_DWORD *)(v1 + 264) = v30 + 504;
    *(_DWORD *)v29 = v10;
    *(_DWORD *)(v29 + 4) = v28;
    *(_DWORD *)(v29 + 8) = v28;
    v30 = *(_DWORD *)(v1 + 256) + 12;
  *(_DWORD *)(v1 + 256) = v30;
  return 1;
}


int __fastcall std::_Function_base::_Base_manager<serialize<ShapedRecipe>::read(ReadOnlyBinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<Potion *,std::__shared_ptr<Potion *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Potion *>>,std::__shared_ptr<Potion *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Potion *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_2700CE4;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


int __fastcall std::_Function_base::_Base_manager<Concurrency::streams::details::streambuf_state_manager<char>::close(std::_Ios_Openmode)::{lambda(void)#1}>::_M_manager(_DWORD *a1, void **a2, int a3)
{
  void **v3; // r5@1
  _DWORD *v4; // r4@1
  _DWORD *v5; // r0@4
  int v6; // r4@5
  int v7; // r5@6
  unsigned int *v8; // r1@7
  unsigned int v9; // r0@9
  _DWORD *v10; // r1@11
  int v11; // r1@11
  unsigned int *v12; // r1@12
  unsigned int v13; // r2@14
  unsigned int *v15; // r6@20
  unsigned int v16; // r0@22

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *a1 )
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
          v15 = (unsigned int *)(v7 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          if ( &pthread_create )
          {
            __dmb();
            do
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
          }
          else
            v16 = (*v15)--;
          if ( v16 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
      }
      operator delete((void *)v6);
    }
  }
  else
    if ( a3 == 2 )
      v5 = operator new(8u);
      v10 = *v3;
      *v5 = *(_DWORD *)*v3;
      v11 = v10[1];
      v5[1] = v11;
      if ( v11 )
        v12 = (unsigned int *)(v11 + 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 + 1, v12) );
          ++*v12;
      goto LABEL_17;
    if ( a3 == 1 )
      v5 = *a2;
LABEL_17:
      *v4 = v5;
      return 0;
  return 0;
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>::~_Impl(void *ptr)
{
  void *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = ptr;
  *(_DWORD *)ptr = &off_26D51AC;
  v2 = *((_DWORD *)ptr + 2);
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
  j_j_j__ZdlPv_3(v1);
}


MinecoinModel *__fastcall std::swap<MinecoinModel>(int a1, int a2)
{
  int v2; // r6@1
  int *v3; // r5@1
  int v4; // r4@1
  void **v6; // [sp+4h] [bp+0h]@1
  int v7; // [sp+8h] [bp+4h]@1
  int v8; // [sp+Ch] [bp+8h]@1
  int v9; // [sp+10h] [bp+Ch]@1
  int v10; // [sp+14h] [bp+10h]@1
  int v11; // [sp+18h] [bp+14h]@1

  v2 = a1;
  v3 = (int *)(a1 + 8);
  v4 = a2;
  v6 = &off_26D8068;
  v7 = *(_DWORD *)(a1 + 4);
  sub_DA73B4(&v8, (int *)(a1 + 8));
  v9 = *(_DWORD *)(v2 + 12);
  sub_DA73B4(&v10, (int *)(v2 + 16));
  v11 = *(_DWORD *)(v2 + 20);
  *(_DWORD *)(v2 + 4) = *(_DWORD *)(v4 + 4);
  EntityInteraction::setInteractText(v3, (int *)(v4 + 8));
  *(_DWORD *)(v2 + 12) = *(_DWORD *)(v4 + 12);
  EntityInteraction::setInteractText((int *)(v2 + 16), (int *)(v4 + 16));
  *(_DWORD *)(v2 + 20) = *(_DWORD *)(v4 + 20);
  *(_DWORD *)(v4 + 4) = v7;
  EntityInteraction::setInteractText((int *)(v4 + 8), &v8);
  *(_DWORD *)(v4 + 12) = v9;
  EntityInteraction::setInteractText((int *)(v4 + 16), &v10);
  *(_DWORD *)(v4 + 20) = v11;
  return MinecoinModel::~MinecoinModel((MinecoinModel *)&v6);
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::RakWebSocketTests::RakWebSocket_Interface_onClose_handler(void)::{lambda(CloseStatusCode,std::string const&)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftBindingFactoryMap::NullBindingFactory::getBooleanBinding(std::string const&)const::{lambda(void)#2}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


int __fastcall std::move_backward<SkinHandle>(int result, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // r4@1
  int v11; // r5@1
  int v12; // r9@1
  int v13; // r1@2
  int v14; // r3@2
  int v15; // r8@3
  int v16; // r11@4
  int v17; // r2@4
  int v18; // r1@7
  int *v19; // r5@14
  int *v20; // r6@14
  int v21; // r10@14
  int v22; // r1@15
  int v23; // r2@15
  int v24; // r3@15
  int v25; // r4@15
  int v26; // r7@15
  int v28; // r6@18
  unsigned int v29; // r2@19
  int v36; // r3@22
  unsigned int v38; // r0@25
  int v41; // r1@27
  _DWORD *v42; // r2@29
  _DWORD *v43; // r7@29
  int v44; // [sp+8h] [bp-38h]@2
  int v45; // [sp+10h] [bp-30h]@7
  int v46; // [sp+14h] [bp-2Ch]@7
  int v47; // [sp+18h] [bp-28h]@1

  v10 = a7;
  v11 = a6;
  v47 = a9;
  v12 = -1431655765 * ((a6 - a7) >> 3) + -1431655765 * ((a4 - a2) >> 3) + 21 * ((a9 - a5) >> 2) - 21;
  if ( v12 <= 0 )
  {
    v13 = *(_QWORD *)a10 >> 32;
    v14 = *(_QWORD *)a10;
    v42 = (_DWORD *)(a10 + 12);
    v43 = (_DWORD *)(a10 + 8);
    goto LABEL_31;
  }
  v44 = result;
  v13 = *(_QWORD *)a10 >> 32;
  v14 = *(_QWORD *)a10;
  do
    v15 = -1431655765 * ((v11 - v10) >> 3);
    if ( v11 == v10 )
    {
      v16 = 21;
      v17 = *(_DWORD *)(v47 - 4) + 504;
    }
    else
      v16 = -1431655765 * ((v11 - v10) >> 3);
      v17 = v11;
    if ( v14 == v13 )
      v45 = v11;
      v46 = v10;
      v18 = 21;
      v14 = *(_DWORD *)(*(_DWORD *)(a10 + 12) - 4) + 504;
      v18 = -1431655765 * ((v14 - v13) >> 3);
    if ( v18 < v16 )
      v16 = v18;
    if ( v16 >= v12 )
      v16 = v12;
    if ( 24 * v16 >= 1 )
      v19 = (int *)(v17 - 4);
      v20 = (int *)(v14 - 4);
      v21 = -1431655765 * (24 * v16 >> 3) + 1;
      do
      {
        v22 = (int)(v20 - 5);
        v23 = *(v19 - 4);
        v24 = *(v19 - 3);
        v25 = *(v19 - 2);
        v26 = *(v19 - 1);
        *(_DWORD *)v22 = *(v19 - 5);
        *(_DWORD *)(v22 + 4) = v23;
        *(_DWORD *)(v22 + 8) = v24;
        *(_DWORD *)(v22 + 12) = v25;
        *(_DWORD *)(v22 + 16) = v26;
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v20, v19);
        --v21;
        v19 -= 6;
        v20 -= 6;
      }
      while ( v21 > 1 );
    _R1 = v15 - v16;
    if ( v15 - v16 < 0 )
      v29 = ~(~_R1 / 0x15u);
      if ( _R1 <= 20 )
        v28 = a10;
        v11 = v45 + -24 * v16;
        v10 = v46;
        goto LABEL_22;
      _R2 = 818089009;
      __asm { SMMUL.W         R2, R1, R2 }
      v29 = ((signed int)_R2 >> 2) + (_R2 >> 31);
    v28 = a10;
    v10 = *(_DWORD *)(v47 + 4 * v29);
    v47 += 4 * v29;
    v11 = v10 + 24 * (_R1 + -21 * v29);
LABEL_22:
    v13 = *(_QWORD *)v28 >> 32;
    v36 = *(_QWORD *)v28;
    _R2 = -1431655765 * ((v36 - v13) >> 3) - v16;
    if ( _R2 < 0 )
      v38 = ~(~_R2 / 0x15u);
      if ( _R2 <= 20 )
        v14 = v36 + -24 * v16;
        goto LABEL_28;
      _R0 = 818089009;
      __asm { SMMUL.W         R0, R2, R0 }
      v38 = ((signed int)_R0 >> 2) + (_R0 >> 31);
    v41 = *(_DWORD *)(v28 + 12);
    *(_DWORD *)(v28 + 12) = v41 + 4 * v38;
    v13 = *(_DWORD *)(v41 + 4 * v38);
    *(_DWORD *)(v28 + 4) = v13;
    *(_DWORD *)(v28 + 8) = v13 + 504;
    v14 = v13 + 24 * (_R2 + -21 * v38);
LABEL_28:
    v12 -= v16;
    *(_DWORD *)v28 = v14;
  while ( v12 > 0 );
  v42 = (_DWORD *)(a10 + 12);
  result = v44;
  v43 = (_DWORD *)(a10 + 8);
LABEL_31:
  *(_DWORD *)result = v14;
  *(_DWORD *)(result + 4) = v13;
  *(_DWORD *)(result + 8) = *v43;
  *(_DWORD *)(result + 12) = *v42;
  return result;
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<InheritanceTree<GeometryGroup::ModelParent> *,std::__shared_ptr<InheritanceTree<GeometryGroup::ModelParent> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<InheritanceTree<GeometryGroup::ModelParent> *>>,std::__shared_ptr<InheritanceTree<GeometryGroup::ModelParent> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    *(_DWORD *)v1);
  v8 = v14;
  v14 = *(_DWORD *)(v1 + 4);
  v7 = v14;
  *(_DWORD *)(v1 + 4) = v8;
  if ( v7 )
  {
    v9 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  return v1;
}


int (**__fastcall std::shared_timed_mutex::unlock_shared(pthread_mutex_t *mutex))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  pthread_mutex_t *v1; // r4@1
  int v2; // r0@2
  int v3; // r0@3
  unsigned int v4; // r1@3
  int v5; // r0@3
  int v6; // r1@3
  pthread_cond_t *v7; // r0@5
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@9

  v1 = mutex;
  if ( &pthread_create )
  {
    v2 = j_pthread_mutex_lock(mutex);
    if ( v2 )
      sub_21E5E14(v2);
  }
  v3 = v1->__kind;
  v4 = v3 & 0x80000000;
  v5 = (v3 & 0x7FFFFFFF) - 1;
  v6 = v4 | v5;
  v1->__kind = v6;
  if ( v6 <= -1 )
    if ( v5 )
      goto LABEL_9;
    v7 = (pthread_cond_t *)&v1->__owner;
  else
    if ( v5 != 2147483646 )
    v7 = (pthread_cond_t *)&v1->__count;
  sub_21E03C8(v7);
LABEL_9:
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))j_pthread_mutex_unlock(v1);
  return result;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::title_storage::title_storage_quota>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::title_storage::title_storage_quota>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(v2) != 1 )
{
    if ( *(_DWORD *)(v2 + 144) != 14 )
      sub_119E4D8(4);
    EntityInteraction::setInteractText((int *)(v2 + 228), (int *)(v2 + 172));
    if ( (unsigned int)*(_QWORD *)(v2 + 160) == *(_QWORD *)(v2 + 160) >> 32 )
    {
      *(_DWORD *)(v2 + 144) = 28;
    }
    else
      v17 = *(_DWORD *)(v2 + 136);
      if ( v17 == 2 )
      {
        std::__detail::_Scanner<char>::_M_scan_in_bracket(v3);
      }
      else
        if ( v17 == 1 )
          std::__detail::_Scanner<char>::_M_scan_in_brace(v3);
        if ( !v17 )
          std::__detail::_Scanner<char>::_M_scan_normal(v3);
    v30 = *(_BYTE **)(v2 + 228);
    v31 = *(_DWORD *)(v2 + 8);
    if ( *((_DWORD *)v30 - 1) >= 0 )
      sub_119CB68((const void **)(v2 + 228));
      v30 = *(_BYTE **)(v2 + 228);
    v32 = *(_BYTE *)(*(_DWORD *)(v31 + 24) + *v30);
    v22 = std::regex_traits<char>::lookup_classname<char const*>(
            *(_DWORD *)(v5 + 84),
            v30,
            &v30[*((_DWORD *)v30 - 3)],
            0);
    v48 = v22;
    v33 = v32 & 1;
    if ( !(v22 & 0x3FF) )
      sub_119E4A8(1);
    if ( v33 )
      v34 = *(_QWORD *)(v5 + 72);
      if ( (_DWORD)v34 == HIDWORD(v34) )
        std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::_M_emplace_back_aux<std::regex_traits<char>::_RegexMask const&>(
          (unsigned __int64 *)(v5 + 68),
          &v48);
        *(_WORD *)v34 = v22;
        *(_DWORD *)(v5 + 72) += 2;
      return;
LABEL_49:
    *(_WORD *)(v5 + 80) = (unsigned __int8)(*(_BYTE *)(v5 + 80) | v22) | (unsigned __int16)((*(_BYTE *)(v5 + 81) | (v22 >> 8)) << 8);
    return;
  }
  v10 = (char **)(v2 + 228);
  v9 = *(char **)(v2 + 228);
  if ( *((_DWORD *)v9 - 1) >= 0 )
  {
    sub_119CB68((const void **)(v2 + 228));
    v9 = *v10;
  v11 = (_BYTE *)(unsigned __int8)*v9;
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(v2) )
    v12 = *v10;
    if ( *((_DWORD *)*v10 - 1) >= 0 )
      v12 = *v10;
    if ( *v12 == 45 )
      if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(v2) == 1 )
        v13 = *v10;
        if ( *((_DWORD *)*v10 - 1) >= 0 )
        {
          sub_119CB68((const void **)(v2 + 228));
          v13 = *v10;
        }
        v14 = (unsigned int)v11 | ((unsigned __int8)*v13 << 8);
        v47 = v14;
        *(_QWORD *)&v15 = *(_QWORD *)(v5 + 60);
        if ( v15 == v16 )
          std::vector<std::pair<char,char>,std::allocator<std::pair<char,char>>>::_M_emplace_back_aux<std::pair<char,char>>(
            (unsigned __int64 *)(v5 + 56),
            &v47);
        else
          *v15 = v14;
          *(_DWORD *)(v5 + 60) += 2;
        return;
      if ( *(_DWORD *)(v2 + 144) != 11 )
        sub_119E4A8(8);
    v23 = *v10;
      v23 = *v10;
    v20 = (_DWORD *)(v5 + 40);
    v24 = *v23;
    v21 = (void **)(v5 + 32);
    v18 = (int *)(v5 + 36);
    v25 = *(_BYTE **)(v5 + 36);
    if ( v25 == *(_BYTE **)(v5 + 40) )
      v26 = *v21;
      v27 = v25 - (_BYTE *)*v21;
      if ( v27 == -1 )
        sub_119C9C4("vector::_M_emplace_back_aux");
      v28 = v25 - (_BYTE *)*v21;
      v45 = (char)v11;
      if ( v25 == v26 )
        v28 = 1;
      v29 = v28 + v27;
      if ( v28 + v27 < v28 )
        v29 = -1;
      if ( v29 )
        v11 = operator new(v29);
        v26 = *v21;
        v25 = (_BYTE *)*v18;
        v11 = 0;
      v11[v25 - v26] = v24;
      v35 = (int)&v11[v25 - v26];
      if ( v25 != v26 )
        _aeabi_memmove(v11, v26);
      v19 = (_BYTE *)(v35 + 1);
      if ( v26 )
        operator delete(v26);
      *v21 = v11;
      *v18 = (int)v19;
      *v20 = &v11[v29];
      LOBYTE(v11) = v45;
      *v25 = v24;
      v19 = (_BYTE *)(*v18 + 1);
  else
    v19 = *(_BYTE **)(v5 + 36);
  if ( v19 == (_BYTE *)*v20 )
    v36 = *v21;
    v37 = v19 - (_BYTE *)*v21;
    if ( v37 == -1 )
      sub_119C9C4("vector::_M_emplace_back_aux");
    v38 = v19 - (_BYTE *)*v21;
    v46 = (char)v11;
    if ( v19 == v36 )
      v38 = 1;
    v39 = v38 + v37;
    if ( v38 + v37 < v38 )
      v39 = -1;
    if ( v39 )
      v40 = (char *)operator new(v39);
      v36 = *v21;
      v41 = v40;
      v19 = (_BYTE *)*v18;
      v41 = 0;
    v42 = v19 == v36;
    v43 = &v41[v19 - v36];
    *v43 = v46;
    if ( !v42 )
      _aeabi_memmove(v41, v36);
    v44 = (int)(v43 + 1);
    if ( v36 )
      operator delete(v36);
    *(_DWORD *)(v5 + 32) = v41;
    *v18 = v44;
    *v20 = &v41[v39];
    *v19 = (_BYTE)v11;
    ++*v18;
}


void __fastcall std::__future_base::_Result<std::string>::~_Result(int a1)
{
  void *v1; // r4@1
  int v2; // r1@2
  void *v3; // r0@2
  unsigned int *v4; // r12@4
  signed int v5; // r1@6

  v1 = (void *)a1;
  *(_DWORD *)a1 = &off_26DFB08;
  if ( *(_BYTE *)(a1 + 12) )
  {
    v2 = *(_DWORD *)(a1 + 8);
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
        j_j_j_j_j__ZdlPv_9_1(v3);
    }
  }
  sub_119EDCC((int)v1);
  operator delete(v1);
}


int __fastcall std::_Function_base::_Base_manager<Core::Result::makeFailure(std::string &&)::{lambda(std::string *)#1}>::_M_manager(void **a1, int **a2, int a3)
{
  int **v3; // r5@1
  void **v4; // r4@1
  void *v5; // r4@6
  int *v6; // r0@7
  int *v7; // r6@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 3:
      v5 = *a1;
      if ( *a1 )
      {
        v6 = (int *)(*(_DWORD *)v5 - 12);
        if ( v6 != &dword_28898C0 )
        {
          v9 = (unsigned int *)(*(_DWORD *)v5 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v10 = __ldrex(v9);
            while ( __strex(v10 - 1, v9) );
          }
          else
            v10 = (*v9)--;
          if ( v10 <= 0 )
            j_j_j_j_j__ZdlPv_9(v6);
        }
        operator delete(v5);
      }
      break;
    case 2:
      v7 = (int *)operator new(4u);
      sub_DA73B4(v7, *v3);
      *v4 = v7;
    case 1:
      *a1 = *a2;
  }
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIDefRepositoryTests::UIDefRepository_FindDefWithInvalidDefName_ExpectException(void)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::game_server_platform::cluster_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::game_server_platform::cluster_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(a1);
}


int __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>::_M_run(int a1)
{
  int v1; // r5@1
  unsigned __int8 *v2; // r4@1
  unsigned int v3; // r1@2
  int v4; // r0@4
  int v5; // r0@6
  int v6; // r0@7
  int result; // r0@9

  v1 = *(_DWORD *)(a1 + 12);
  v2 = (unsigned __int8 *)(v1 + 40);
  do
  {
    do
      v3 = __ldrex(v2);
    while ( __strex(1u, v2) );
    __dmb();
  }
  while ( v3 );
  v4 = *(_DWORD *)(v1 + 8);
  if ( *(_DWORD *)(v1 + 24) != v4 )
    if ( v4 == *(_DWORD *)(v1 + 16) - 1 )
    {
      operator delete(*(void **)(v1 + 12));
      v6 = *(_DWORD *)(v1 + 20);
      *(_DWORD *)(v1 + 20) = v6 + 4;
      v5 = *(_DWORD *)(v6 + 4);
      *(_DWORD *)(v1 + 12) = v5;
      *(_DWORD *)(v1 + 16) = v5 + 512;
    }
    else
      v5 = v4 + 1;
    *(_DWORD *)(v1 + 8) = v5;
  result = 0;
  __dmb();
  *v2 = 0;
  return result;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::presence::presence_writer *>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::presence::presence_writer *>(
           a1,
           a2);
}


int __fastcall std::_Function_base::_Base_manager<web::websockets::client::details::wspp_callback_client::send_msg(web::websockets::client::websocket_outgoing_message &)::{lambda(pplx::task<unsigned int>)#1}>::_M_manager(void ***a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void ***v4; // r4@1
  void **v5; // r0@2
  void **v6; // r1@4
  void *v7; // r2@4
  unsigned int *v8; // r2@5
  unsigned int v9; // r3@6
  void *v10; // r2@8
  unsigned int *v11; // r2@9
  unsigned int v12; // r3@10
  void *v13; // r2@12
  unsigned int *v14; // r2@13
  unsigned int v15; // r3@14
  void **v17; // r4@18
  void *v18; // r5@19
  unsigned int *v19; // r0@20
  unsigned int v20; // r1@21
  unsigned int *v21; // r6@23
  unsigned int v22; // r0@24
  void *v23; // r5@27
  unsigned int *v24; // r0@28
  unsigned int v25; // r1@29
  unsigned int *v26; // r6@31
  unsigned int v27; // r0@32
  void *v28; // r5@35
  unsigned int *v29; // r0@36
  unsigned int v30; // r1@37
  unsigned int *v31; // r6@39
  unsigned int v32; // r0@40

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'web::websockets::client::details::wspp_callback_client::send_msg(web::websockets::client::websocket_outgoing_message &)::{lambda(pplx::task<unsigned int>)#1};
      goto LABEL_17;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(0x24u);
      v6 = *v3;
      *v5 = **v3;
      v7 = v6[1];
      v5[1] = v7;
      if ( v7 )
      {
        v8 = (unsigned int *)((char *)v7 + 4);
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 + 1, v8) );
      }
      v5[2] = v6[2];
      v10 = v6[3];
      v5[3] = v10;
      if ( v10 )
        v11 = (unsigned int *)((char *)v10 + 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 + 1, v11) );
      v5[4] = &off_26DDAC4;
      v5[5] = v6[5];
      v13 = v6[6];
      v5[6] = v13;
      if ( v13 )
        v14 = (unsigned int *)((char *)v13 + 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 + 1, v14) );
      *(_QWORD *)(v5 + 7) = *(_QWORD *)(v6 + 7);
LABEL_17:
      *v4 = v5;
      return 0;
    case 3:
      v17 = *a1;
      if ( *a1 )
        v17[4] = &off_26DDAC4;
        v18 = v17[6];
        if ( v18 )
        {
          v19 = (unsigned int *)((char *)v18 + 4);
          __dmb();
          do
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          if ( v20 == 1 )
          {
            v21 = (unsigned int *)((char *)v18 + 8);
            (*(void (__fastcall **)(void *))(*(_DWORD *)v18 + 8))(v18);
            __dmb();
            do
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            if ( v22 == 1 )
              (*(void (__fastcall **)(void *))(*(_DWORD *)v18 + 12))(v18);
          }
        }
        v23 = v17[3];
        if ( v23 )
          v24 = (unsigned int *)((char *)v23 + 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          if ( v25 == 1 )
            v26 = (unsigned int *)((char *)v23 + 8);
            (*(void (__fastcall **)(void *))(*(_DWORD *)v23 + 8))(v23);
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
            if ( v27 == 1 )
              (*(void (__fastcall **)(void *))(*(_DWORD *)v23 + 12))(v23);
        v28 = v17[1];
        if ( v28 )
          v29 = (unsigned int *)((char *)v28 + 4);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          if ( v30 == 1 )
            v31 = (unsigned int *)((char *)v28 + 8);
            (*(void (__fastcall **)(void *))(*(_DWORD *)v28 + 8))(v28);
              v32 = __ldrex(v31);
            while ( __strex(v32 - 1, v31) );
            if ( v32 == 1 )
              (*(void (__fastcall **)(void *))(*(_DWORD *)v28 + 12))(v28);
        j_operator delete(v17);
      break;
    default:
  }
  return 0;
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<RequestTelemetry *,std::__shared_ptr<RequestTelemetry *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<RequestTelemetry *>>,std::__shared_ptr<RequestTelemetry *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    *(_DWORD *)v4);
  v9 = v15;
  v15 = *(_DWORD *)(v4 + 4);
  v8 = v15;
  *(_DWORD *)(v4 + 4) = v9;
  if ( v8 )
  {
    v10 = (unsigned int *)(v8 + 4);
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
      v12 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  return v4;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<CallbackTokenContext<std::function<void ()(Social::UserPlatformConnectionResult)>> *,std::__shared_ptr<CallbackTokenContext<std::function<void ()(Social::UserPlatformConnectionResult)>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CallbackTokenContext<std::function<void ()(Social::UserPlatformConnectionResult)>> *>>,std::__shared_ptr<CallbackTokenContext<std::function<void ()(Social::UserPlatformConnectionResult)>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CallbackTokenContext<std::function<void ()(Social::UserPlatformConnectionResult)>> *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_26DEC04;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


unsigned int __fastcall std::set_terminate(void (*a1)(void))
{
  void (*v1)(void); // r2@1
  unsigned int result; // r0@2

  v1 = a1;
  __dmb();
  do
    result = __ldrex(&__cxxabiv1::__terminate_handler);
  while ( __strex((unsigned int)v1, &__cxxabiv1::__terminate_handler) );
  return result;
}


int std::get_terminate(void)
{
  int result; // r0@1

  result = __cxxabiv1::__terminate_handler;
  __dmb();
  return result;
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>::~_Impl(void *ptr)
{
  std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>::~_Impl(ptr);
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<MapDecoration *,std::__shared_ptr<MapDecoration *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<MapDecoration *>>,std::__shared_ptr<MapDecoration *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    *(_DWORD *)v3);
  v14 = v20;
  v20 = *(_DWORD *)(v3 + 4);
  v13 = v20;
  *(_DWORD *)(v3 + 4) = v14;
  if ( v13 )
  {
    v15 = (unsigned int *)(v13 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      }
      else
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  }
  return v3;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIScreenControllerBindTests::UI_BindFloatInAnyCollection(void)::{lambda(std::string const&,int)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


  return std::__shared_count<(__gnu_cxx::_Lock_policy)
{
           a2);
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<std::function<void ()(web::http::message_direction::direction,unsigned long long)> *,std::__shared_ptr<std::function<void ()(web::http::message_direction::direction,unsigned long long)> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::function<void ()(web::http::message_direction::direction,unsigned long long)> *>>,std::__shared_ptr<std::function<void ()(web::http::message_direction::direction,unsigned long long)> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::function<void ()(web::http::message_direction::direction,unsigned long long)
{
    (int)v5);
  v8 = v14;
  v14 = *(_DWORD *)(v4 + 4);
  v7 = v14;
  *(_DWORD *)(v4 + 4) = v8;
  if ( v7 )
  {
    v9 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  return v4;
}


int __fastcall std::_Function_base::_Base_manager<InventoryContentPacket::write(BinaryStream &)const::{lambda(BinaryStream &,ItemInstance const&)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<ServerFormBindingInformation *,std::__shared_ptr<ServerFormBindingInformation *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<ServerFormBindingInformation *>>,std::__shared_ptr<ServerFormBindingInformation *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<ServerFormBindingInformation *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_26E351C;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


void __fastcall std::default_delete<BaseAttributeMap>::operator()(int a1, int a2)
{
  int v2; // r10@1
  void *v3; // r5@2
  void *v4; // r7@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  int *v7; // r0@12
  _DWORD *v8; // r7@17
  unsigned int *v9; // r2@19
  signed int v10; // r1@21
  _DWORD *v11; // r6@27
  AttributeInstance *v12; // r0@27
  int v13; // r1@27
  void *v14; // r0@27
  void *v15; // r0@29

  v2 = a2;
  if ( a2 )
  {
    v4 = (void *)(*(_QWORD *)(a2 + 28) >> 32);
    v3 = (void *)*(_QWORD *)(a2 + 28);
    if ( v3 != v4 )
    {
      do
      {
        v7 = (int *)(*(_DWORD *)v3 - 12);
        if ( v7 != &dword_28898C0 )
        {
          v5 = (unsigned int *)(*(_DWORD *)v3 - 4);
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
            j_j_j_j__ZdlPv_9(v7);
        }
        v3 = (char *)v3 + 8;
      }
      while ( v3 != v4 );
      v3 = *(void **)(v2 + 28);
    }
    if ( v3 )
      operator delete(v3);
    v8 = *(_DWORD **)(v2 + 8);
    while ( v8 )
      v11 = v8;
      v12 = (AttributeInstance *)(v8 + 2);
      v8 = (_DWORD *)*v8;
      AttributeInstance::~AttributeInstance(v12);
      v13 = v11[1];
      v14 = (void *)(v13 - 12);
      if ( (int *)(v13 - 12) != &dword_28898C0 )
        v9 = (unsigned int *)(v13 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        else
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      operator delete(v11);
    _aeabi_memclr4(*(_QWORD *)v2, 4 * (*(_QWORD *)v2 >> 32));
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 12) = 0;
    v15 = *(void **)v2;
    if ( *(_DWORD *)v2 )
      if ( (void *)(v2 + 24) != v15 )
        operator delete(v15);
    operator delete((void *)v2);
  }
}


int __fastcall std::_Function_base::_Base_manager<web::websockets::client::details::wspp_callback_client::send_msg(web::websockets::client::websocket_outgoing_message &)::{lambda(unsigned int)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  _DWORD *v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'web::websockets::client::details::wspp_callback_client::send_msg(web::websockets::client::websocket_outgoing_message &)::{lambda(unsigned int)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(ptr);
}


int std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_get_deleter()
{
  return 0;
}


int __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>::_M_run(int a1)
{
  int v1; // r4@1
  unsigned __int8 *v2; // r5@1
  unsigned int v3; // r1@2
  _BYTE *v4; // r0@4
  int v5; // r0@5
  int v6; // r0@8
  int result; // r0@9

  v1 = *(_DWORD *)(a1 + 12);
  v2 = (unsigned __int8 *)(v1 + 40);
  do
  {
    do
      v3 = __ldrex(v2);
    while ( __strex(1u, v2) );
    __dmb();
  }
  while ( v3 );
  v4 = *(_BYTE **)(v1 + 24);
  if ( v4 == (_BYTE *)(*(_DWORD *)(v1 + 32) - 1) )
    if ( (unsigned int)((*(_QWORD *)v1 >> 32) - ((signed int)(*(_DWORD *)(v1 + 36) - *(_QWORD *)v1) >> 2)) <= 1 )
      std::deque<char,std::allocator<char>>::_M_reallocate_map(v1, 1u, 0);
    *(_DWORD *)(*(_DWORD *)(v1 + 36) + 4) = operator new(0x200u);
    **(_BYTE **)(v1 + 24) = 13;
    v6 = *(_DWORD *)(v1 + 36);
    *(_DWORD *)(v1 + 36) = v6 + 4;
    v5 = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v1 + 28) = v5;
    *(_DWORD *)(v1 + 32) = v5 + 512;
  else
    *v4 = 13;
    v5 = *(_DWORD *)(v1 + 24) + 1;
  *(_DWORD *)(v1 + 24) = v5;
  result = 0;
  __dmb();
  *v2 = 0;
  return result;
}


int __fastcall std::_Function_base::_Base_manager<Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<Concurrency::streams::details::streambuf_state_manager<char>::getc(void)::{lambda(int)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(ptr);
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<std::unordered_map<ResourceLocation,mce::ImageBuffer const*,std::hash<mce>,std::equal_to<mce>,std::allocator<std::pair<mce const,std::hash>>> *,std::__shared_ptr<std::unordered_map<ResourceLocation,mce::ImageBuffer const*,std::hash<mce>,std::equal_to<mce>,std::allocator<std::pair<mce const,std::hash>>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::unordered_map<ResourceLocation,mce::ImageBuffer const*,std::hash<mce>,std::equal_to<mce>,std::allocator<std::pair<mce const,std::hash>>> *>>,std::__shared_ptr<std::unordered_map<ResourceLocation,mce::ImageBuffer const*,std::hash<mce>,std::equal_to<mce>,std::allocator<std::pair<mce const,std::hash>>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::unordered_map<ResourceLocation,mce::ImageBuffer const*,std::hash<mce>,std::equal_to<mce>,std::allocator<std::pair<mce const,std::hash>>> *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_26D692C;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::system::token_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::system::token_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<AddEntityPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<CallbackTokenContext<std::function<void ()(Legacy::ImportStatus,float,std::unique_ptr<ImportResult,std::default_delete<std::default_delete>>)>> *,std::__shared_ptr<CallbackTokenContext<std::function<void ()(Legacy::ImportStatus,float,std::unique_ptr<ImportResult,std::default_delete<std::default_delete>>)>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CallbackTokenContext<std::function<void ()(Legacy::ImportStatus,float,std::unique_ptr<ImportResult,std::default_delete<std::default_delete>>)>> *>>,std::__shared_ptr<CallbackTokenContext<std::function<void ()(Legacy::ImportStatus,float,std::unique_ptr<ImportResult,std::default_delete<std::default_delete>>)>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CallbackTokenContext<std::function<void ()(Legacy::ImportStatus,float,std::unique_ptr<ImportResult,std::default_delete<std::default_delete>>)>> *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_26E51B8;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIDefRepositoryTests::UIDefRepository_LoadDefsListWithMissingBrace_ExpectException(void)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


std::bad_array_length *__fastcall std::bad_array_length::~bad_array_length(std::bad_array_length *this)
{
  std::bad_array_length *v1; // r4@1

  v1 = this;
  j_std::bad_array_length::~bad_array_length(this);
  j_operator delete((void *)v1);
  return v1;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  void *v1; // r4@1

  v1 = *(void **)(a1 + 16);
  (**(void (__fastcall ***)(_DWORD))v1)(*(_DWORD *)(a1 + 16));
  j_j_j__ZdlPv_3(v1);
}


int __fastcall std::_Function_base::_Base_manager<web::websockets::client::details::wspp_callback_client::send_msg(web::websockets::client::websocket_outgoing_message &)::{lambda(void)#1}>::_M_manager(int *a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  _DWORD *v4; // r4@1
  void **v5; // r0@2
  void **v6; // r1@4
  void *v7; // r2@4
  unsigned int *v8; // r2@5
  unsigned int v9; // r3@6
  void *v10; // r2@8
  unsigned int *v11; // r2@9
  unsigned int v12; // r3@10
  void *v13; // r2@12
  unsigned int *v14; // r2@13
  unsigned int v15; // r3@14
  void *v16; // r2@16
  unsigned int *v17; // r2@17
  unsigned int v18; // r3@18
  int v20; // r0@22
  void *v21; // r0@23

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'web::websockets::client::details::wspp_callback_client::send_msg(web::websockets::client::websocket_outgoing_message &)::{lambda(void)#1};
      goto LABEL_21;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(0x30u);
      v6 = *v3;
      *v5 = **v3;
      v7 = v6[1];
      v5[1] = v7;
      if ( v7 )
      {
        v8 = (unsigned int *)((char *)v7 + 4);
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 + 1, v8) );
      }
      v5[2] = v6[2];
      v10 = v6[3];
      v5[3] = v10;
      if ( v10 )
        v11 = (unsigned int *)((char *)v10 + 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 + 1, v11) );
      v5[4] = &off_26DDAC4;
      v5[5] = v6[5];
      v13 = v6[6];
      v5[6] = v13;
      if ( v13 )
        v14 = (unsigned int *)((char *)v13 + 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 + 1, v14) );
      *(_QWORD *)(v5 + 7) = *(_QWORD *)(v6 + 7);
      v5[9] = v6[9];
      v16 = v6[10];
      v5[10] = v16;
      if ( v16 )
        v17 = (unsigned int *)((char *)v16 + 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 + 1, v17) );
      v5[11] = v6[11];
LABEL_21:
      *v4 = v5;
      return 0;
    case 3:
      v20 = *a1;
      if ( *v4 )
        v21 = (void *)j_web::websockets::client::details::wspp_callback_client::send_msg(web::websockets::client::websocket_outgoing_message &)::{lambda(void)#1}::~websocket_outgoing_message(v20);
        j_operator delete(v21);
      break;
    default:
  }
  return 0;
}


int std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_get_deleter()
{
  return 0;
}


_DWORD *__fastcall std::to_string<long>(int *a1, int *a2)
{
  int *v2; // ST08_4@1
  int *v3; // ST0C_4@1
  void **v4; // ST00_4@1
  void **v5; // r5@1
  int v6; // r1@1
  void **v7; // r2@1
  char *v8; // r0@1
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  void **v12; // [sp+10h] [bp-E8h]@1
  int v13; // [sp+14h] [bp-E4h]@1
  void **v14; // [sp+18h] [bp-E0h]@1
  void **v15; // [sp+1Ch] [bp-DCh]@1
  int v16; // [sp+20h] [bp-D8h]@1
  int v17; // [sp+24h] [bp-D4h]@1
  int v18; // [sp+28h] [bp-D0h]@1
  int v19; // [sp+2Ch] [bp-CCh]@1
  int v20; // [sp+30h] [bp-C8h]@1
  int v21; // [sp+34h] [bp-C4h]@1
  int v22; // [sp+38h] [bp-C0h]@1
  int v23; // [sp+3Ch] [bp-BCh]@1
  char *v24; // [sp+40h] [bp-B8h]@1
  void **v25; // [sp+44h] [bp-B4h]@1
  int v26; // [sp+B4h] [bp-44h]@1
  __int16 v27; // [sp+B8h] [bp-40h]@1
  int v28; // [sp+BCh] [bp-3Ch]@1
  int v29; // [sp+C0h] [bp-38h]@1
  int v30; // [sp+C4h] [bp-34h]@1
  int v31; // [sp+C8h] [bp-30h]@1

  v2 = a2;
  v3 = a1;
  sub_21B6308((int)&v25);
  v25 = &off_26D3AF0;
  v4 = off_26D3F60;
  v5 = (void **)off_26D3F64;
  v26 = 0;
  v27 = 0;
  v30 = 0;
  v31 = 0;
  v28 = 0;
  v29 = 0;
  v12 = (void **)off_26D3F68;
  *(void ***)((char *)&v12 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v13 = 0;
  sub_21B5AD4((int)*(v12 - 3) + (_DWORD)&v12, 0);
  v14 = (void **)off_26D3F70;
  *(void ***)((char *)&v14 + *((_DWORD *)off_26D3F70 - 3)) = (void **)off_26D3F74;
  sub_21B5AD4((int)*(v14 - 3) + (_DWORD)&v14, 0);
  v12 = v5;
  *(_DWORD *)((char *)*(v5 - 3) + (_DWORD)&v12) = off_26D3F78;
  v12 = &off_26D3F94;
  v25 = &off_26D3FBC;
  v14 = &off_26D3FA8;
  v21 = 0;
  v19 = 0;
  v20 = 0;
  v17 = 0;
  v18 = 0;
  v15 = &off_26D40A8;
  v16 = 0;
  sub_21C9520((unsigned int **)&v22);
  v15 = &off_27734E8;
  v23 = 24;
  v24 = (char *)&unk_28898CC;
  sub_21B5AD4((int)*(v12 - 3) + (_DWORD)&v12, (unsigned int)&v15);
  v6 = *v2;
  sub_21CC2A8((char *)&v14);
  sub_21CFED8(v3, (int)&v15);
  v12 = v4;
  v7 = off_26D3F84;
  *(_DWORD *)((char *)*(v4 - 3) + (_DWORD)&v12) = off_26D3F80[0];
  v14 = v7;
  v8 = v24 - 12;
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  sub_21C802C((unsigned int **)&v22);
  return sub_21B6560(&v25);
}


int __fastcall std::_Function_base::_Base_manager<Concurrency::streams::details::streambuf_state_manager<char>::putc(char)::{lambda(int)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


const char *__fastcall std::bad_exception::what(std::bad_exception *this)
{
  return "std::bad_exception";
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::multiplayer::manager::multiplayer_manager *>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::multiplayer::manager::multiplayer_manager *>(
           a1,
           a2);
}


void __fastcall std::swap<AutoCompleteOption>(int a1, int *a2)
{
  std::swap<AutoCompleteOption>(a1, a2);
}


int __fastcall std::__exception_ptr::exception_ptr::swap(int result, std::__exception_ptr::exception_ptr *a2)
{
  int v2; // r3@1

  v2 = *(_DWORD *)result;
  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)a2 = v2;
  return result;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::system::xbox_live_services_settings *>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::system::xbox_live_services_settings *>(
           a1,
           a2);
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::tournaments::team_request_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::tournaments::team_request_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::contextual_search::contextual_search_game_clips_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::contextual_search::contextual_search_game_clips_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(a1);
}


int __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>::_M_run(int a1)
{
  int v1; // r4@1
  unsigned __int8 *v2; // r5@1
  unsigned int v3; // r1@2
  _BYTE *v4; // r0@4
  int v5; // r0@5
  int v6; // r0@8
  int result; // r0@9

  v1 = *(_DWORD *)(a1 + 12);
  v2 = (unsigned __int8 *)(v1 + 40);
  do
  {
    do
      v3 = __ldrex(v2);
    while ( __strex(1u, v2) );
    __dmb();
  }
  while ( v3 );
  v4 = *(_BYTE **)(v1 + 24);
  if ( v4 == (_BYTE *)(*(_DWORD *)(v1 + 32) - 1) )
    if ( (unsigned int)((*(_QWORD *)v1 >> 32) - ((signed int)(*(_DWORD *)(v1 + 36) - *(_QWORD *)v1) >> 2)) <= 1 )
      std::deque<char,std::allocator<char>>::_M_reallocate_map(v1, 1u, 0);
    *(_DWORD *)(*(_DWORD *)(v1 + 36) + 4) = operator new(0x200u);
    **(_BYTE **)(v1 + 24) = 8;
    v6 = *(_DWORD *)(v1 + 36);
    *(_DWORD *)(v1 + 36) = v6 + 4;
    v5 = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v1 + 28) = v5;
    *(_DWORD *)(v1 + 32) = v5 + 512;
  else
    *v4 = 8;
    v5 = *(_DWORD *)(v1 + 24) + 1;
  *(_DWORD *)(v1 + 24) = v5;
  result = 0;
  __dmb();
  *v2 = 0;
  return result;
}


int __fastcall std::_Function_base::_Base_manager<CraftingEventPacket::write(BinaryStream &)const::{lambda(BinaryStream &,ItemInstance const&)#2}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<int>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(ptr);
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_MakeUnitToUnitFunc(std::function<void ()(void)> const&)::{lambda(unsigned char)#1}>::_M_manager(int *a1, int *a2, int a3)
{
  int *v3; // r6@1
  int *v4; // r4@1
  int result; // r0@4
  _DWORD *v6; // r0@5
  int v7; // r6@5
  _DWORD *v8; // r5@5
  void (__fastcall *v9)(_DWORD *, int, signed int); // r3@5
  int v10; // r4@8
  void (__fastcall *v11)(int, int, signed int); // r3@9

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v10 = *a1;
    if ( *a1 )
    {
      v11 = *(void (__fastcall **)(int, int, signed int))(v10 + 8);
      if ( v11 )
        v11(v10, v10, 3);
      operator delete((void *)v10);
    }
    return 0;
  }
  if ( a3 != 2 )
    if ( a3 == 1 )
      *a1 = *a2;
      return 0;
  v6 = operator new(0x10u);
  v7 = *v3;
  v8 = v6;
  v6[2] = 0;
  v9 = *(void (__fastcall **)(_DWORD *, int, signed int))(v7 + 8);
  if ( v9 )
    v9(v6, v7, 2);
    v8[3] = *(_DWORD *)(v7 + 12);
    v8[2] = *(_DWORD *)(v7 + 8);
  result = 0;
  *v4 = (int)v8;
  return result;
}


        std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v27)
{
        !v9) )
  {
    (*(void (__fastcall **)(char *))(**(_DWORD **)v4 + 132))(&v26);
    pplx::get_ambient_scheduler((pplx *)&v29);
    v11 = v30;
    v16 = v29;
    v17 = v30;
    v18 = v29;
    v19 = 0;
    v20 = 0;
    v25 = 0;
    v23 = 0;
    v24 = 0;
    v21 = 0;
    v22 = 0;
    pplx::task_from_exception<unsigned int,std::__exception_ptr::exception_ptr>(
      v5,
      (const std::__exception_ptr::exception_ptr *)&v26,
      (int)&v16);
    if ( v11 )
    {
      v12 = (unsigned int *)(v11 + 4);
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
        v14 = (unsigned int *)(v11 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
        if ( &pthread_create )
        {
          __dmb();
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
        }
        else
          v15 = (*v14)--;
        if ( v15 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
    }
    result = std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v26);
  }
  else
    *(_DWORD *)v5 = *v3;
    result = v3[1];
    v3[1] = 0;
    *(_DWORD *)(v5 + 4) = result;
    *v3 = 0;
  return result;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIScreenControllerBindTests::UI_BindStringOnSubController(void)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  void *v1; // r4@1

  v1 = *(void **)(a1 + 16);
  (**(void (__fastcall ***)(_DWORD))v1)(*(_DWORD *)(a1 + 16));
  j_j_j__ZdlPv_3(v1);
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(a1);
}


int *__fastcall std::promise<Legacy::WorldConversionReport>::~promise(int *a1)
{
  int *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@2
  void (***v4)(void); // r1@4
  void (***v5)(void); // r0@7
  int v6; // r5@9
  unsigned int *v7; // r1@10
  unsigned int v8; // r0@12
  unsigned int *v9; // r6@16
  unsigned int v10; // r0@18
  void (***v12)(void); // [sp+4h] [bp-14h]@4

  v1 = a1;
  v2 = *a1;
  if ( v2 )
  {
    v3 = v1[1];
    if ( !v3 || *(_DWORD *)(v3 + 4) != 1 )
    {
      v4 = (void (***)(void))v1[2];
      v1[2] = 0;
      v12 = v4;
      std::__future_base::_State_baseV2::_M_break_promise(v2, (int *)&v12);
      if ( v12 )
        (**v12)();
      v12 = 0;
    }
  }
  v5 = (void (***)(void))v1[2];
  if ( v5 )
    (**v5)();
  v1[2] = 0;
  v6 = v1[1];
  if ( v6 )
    v7 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    else
      v8 = (*v7)--;
    if ( v8 == 1 )
      v9 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return v1;
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>(int a1, int a2, _QWORD *a3)
{
  return std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>(
           a1,
           a2,
           a3);
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>::~_Impl(void *ptr)
{
  std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>::~_Impl(ptr);
}


Json::Value *__fastcall std::_Destroy<ExprToken>(int a1)
{
  int v1; // r4@1
  void *v2; // r5@1 OVERLAPPED
  void *v3; // r6@1 OVERLAPPED

  v1 = a1;
  *(_QWORD *)&v2 = *(_QWORD *)(a1 + 16);
  if ( v2 != v3 )
  {
    do
    {
      std::_Destroy<ExprToken>((int)v2);
      v2 = (char *)v2 + 48;
    }
    while ( v3 != v2 );
    v2 = *(void **)(v1 + 16);
  }
  if ( v2 )
    operator delete(v2);
  return j_j_j__ZN4Json5ValueD2Ev_1((Json::Value *)v1);
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(a1);
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>(int a1, int a2, _DWORD *a3)
{
  return std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>(
           a1,
           a2,
           a3);
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(a1);
}


void __fastcall std::default_delete<DevConsoleLogger>::operator()(int a1, int a2)
{
  std::default_delete<DevConsoleLogger>::operator()(a1, a2);
}


int std::get_terminate(void)
{
  return std::get_terminate();
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  void *v1; // r4@1

  v1 = *(void **)(a1 + 16);
  (**(void (__fastcall ***)(_DWORD))v1)(*(_DWORD *)(a1 + 16));
  j_j_j__ZdlPv_3(v1);
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::achievements::achievements_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::achievements::achievements_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


int __fastcall std::__detail::_Compiler<std::regex_traits<char>>::~_Compiler(int a1)
{
  int v1; // r4@1
  void *v2; // r0@1
  unsigned int v3; // r5@2
  unsigned int v4; // r1@2
  unsigned int v5; // r6@3
  void *v6; // t1@4
  int v7; // r1@7
  void *v8; // r0@7
  int v9; // r5@8 OVERLAPPED
  int v10; // r6@8 OVERLAPPED
  void (*v11)(void); // r3@9
  void *v12; // r0@15
  int v13; // r1@17
  void *v14; // r0@17
  unsigned int *v16; // r2@19
  signed int v17; // r1@21
  unsigned int *v18; // r2@23
  signed int v19; // r1@25

  v1 = a1;
  v2 = *(void **)(a1 + 232);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v1 + 268);
    v4 = *(_DWORD *)(v1 + 252);
    if ( v4 < v3 + 4 )
    {
      v5 = v4 - 4;
      do
      {
        v6 = *(void **)(v5 + 4);
        v5 += 4;
        operator delete(v6);
      }
      while ( v5 < v3 );
      v2 = *(void **)(v1 + 232);
    }
    operator delete(v2);
  }
  v7 = *(_DWORD *)(v1 + 228);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
      __dmb();
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  *(_QWORD *)&v9 = *(_QWORD *)(v1 + 216);
  if ( v9 != v10 )
    do
      v11 = *(void (**)(void))(v9 + 28);
      if ( v11 )
        v11();
      v9 += 36;
    while ( v10 != v9 );
    v9 = *(_DWORD *)(v1 + 216);
  if ( v9 )
    operator delete((void *)v9);
  v12 = *(void **)(v1 + 184);
  if ( v12 )
    operator delete(v12);
  v13 = *(_DWORD *)(v1 + 172);
  v14 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v13 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  return v1;
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>(int a1, int a2, _DWORD *a3)
{
  return std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>(
           a1,
           a2,
           a3);
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<CallbackTokenContext<std::function<void ()(Legacy::ImportStatus,float,std::unique_ptr<ImportResult,std::default_delete<std::default_delete>>)>> *,std::__shared_ptr<CallbackTokenContext<std::function<void ()(Legacy::ImportStatus,float,std::unique_ptr<ImportResult,std::default_delete<std::default_delete>>)>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CallbackTokenContext<std::function<void ()(Legacy::ImportStatus,float,std::unique_ptr<ImportResult,std::default_delete<std::default_delete>>)>> *>>,std::__shared_ptr<CallbackTokenContext<std::function<void ()(Legacy::ImportStatus,float,std::unique_ptr<ImportResult,std::default_delete<std::default_delete>>)>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CallbackTokenContext<std::function<void ()(Legacy::ImportStatus,float,std::unique_ptr<ImportResult,std::default_delete<std::default_delete>>)>> *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<CallbackTokenContext<std::function<void ()(Legacy::ImportStatus,float,std::unique_ptr<ImportResult,std::default_delete<std::default_delete>>)>> *,std::__shared_ptr<CallbackTokenContext<std::function<void ()(Legacy::ImportStatus,float,std::unique_ptr<ImportResult,std::default_delete<std::default_delete>>)>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CallbackTokenContext<std::function<void ()(Legacy::ImportStatus,float,std::unique_ptr<ImportResult,std::default_delete<std::default_delete>>)>> *>>,std::__shared_ptr<CallbackTokenContext<std::function<void ()(Legacy::ImportStatus,float,std::unique_ptr<ImportResult,std::default_delete<std::default_delete>>)>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CallbackTokenContext<std::function<void ()(Legacy::ImportStatus,float,std::unique_ptr<ImportResult,std::default_delete<std::default_delete>>)>> *>>>(
           a1,
           a2);
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::system::ecdsa *>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1
  __int64 v5; // r1@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = j_operator new(0x10u);
  HIDWORD(v5) = 1;
  LODWORD(v5) = &off_276B538;
  *(_QWORD *)v4 = v5;
  v4[2] = 1;
  v4[3] = v3;
  *v2 = v4;
  return v2;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(ptr);
}


std::__exception_ptr::exception_ptr *__fastcall std::__exception_ptr::exception_ptr::exception_ptr(std::__exception_ptr::exception_ptr *this, void *a2)
{
  std::__exception_ptr::exception_ptr *v2; // r4@1

  v2 = this;
  *(_DWORD *)this = a2;
  j_std::__exception_ptr::exception_ptr::_M_addref(this);
  return v2;
}


int __fastcall std::_Function_base::_Base_manager<Concurrency::streams::details::streambuf_state_manager<char>::close(std::_Ios_Openmode)::{lambda(pplx::task<void>)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


void __fastcall std::__future_base::_Async_state_commonV2::~_Async_state_commonV2(std::__future_base::_Async_state_commonV2 *this)
{
  std::__future_base::_Async_state_commonV2 *v1; // r4@1
  void (***v2)(void); // r0@2

  v1 = this;
  *(_DWORD *)this = &off_26DFAF0;
  if ( !pthread_equal(*((_DWORD *)this + 6), 0) )
    std::terminate();
  *(_DWORD *)v1 = &off_26D78F8;
  sub_119E408((pthread_cond_t *)((char *)v1 + 12));
  v2 = (void (***)(void))*((_DWORD *)v1 + 1);
  if ( v2 )
    (**v2)();
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>(int a1, int a2, _DWORD *a3)
{
  return std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>(
           a1,
           a2,
           a3);
}


int __fastcall std::uniform_int_distribution<int>::operator()<std::mersenne_twister_engine<unsigned int,32u,624u,397u,31u,2567483615u,11u,4294967295u,7u,2636928640u,15u,4022730752u,18u,1812433253u>>(int a1, int a2, unsigned __int64 *a3)
{
  return std::uniform_int_distribution<int>::operator()<std::mersenne_twister_engine<unsigned int,32u,624u,397u,31u,2567483615u,11u,4294967295u,7u,2636928640u,15u,4022730752u,18u,1812433253u>>(
           a1,
           a2,
           a3);
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIScreenControllerBindTests::UI_BindFloat(void)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<std::error_code>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  _DWORD *v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<std::error_code>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


void __fastcall __noreturn std::rethrow_exception(std::__exception_ptr::exception_ptr *a1)
{
  std::rethrow_exception(a1);
}


std::_Function_base *__fastcall std::_Function_base::~_Function_base(std::_Function_base *this)
{
  std::_Function_base *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  v2 = (void (*)(void))*((_DWORD *)this + 2);
  if ( v2 )
    v2();
  return v1;
}


void __fastcall __noreturn std::make_exception_ptr<web::websockets::client::websocket_exception>(int a1, int a2)
{
  int v2; // r6@1
  char *v3; // r5@1
  int v4; // r3@1

  v2 = a2;
  v3 = j_j___cxa_allocate_exception_0(16);
  *(_DWORD *)v3 = &off_276C1E0;
  *(_QWORD *)(v3 + 4) = *(_QWORD *)(v2 + 4);
  sub_21E8AF4((int *)v3 + 3, (int *)(v2 + 12));
  j_j___cxa_throw_0(
    (int)v3,
    (int)&`typeinfo for'web::websockets::client::websocket_exception,
    (int)web::websockets::client::websocket_exception::~websocket_exception,
    v4);
}


RakNet *__fastcall std::swap<PingedCompatibleServer>(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r4@1
  _QWORD *v4; // r9@1
  int *v5; // r7@1
  __int64 v6; // r1@1
  _QWORD *v7; // r8@1
  int *v8; // r5@1
  void *v9; // r0@1
  void *v10; // r0@2
  void *v11; // r0@3
  RakNet *result; // r0@4
  unsigned int *v13; // r2@6
  signed int v14; // r1@8
  unsigned int *v15; // r2@10
  signed int v16; // r1@12
  unsigned int *v17; // r2@14
  signed int v18; // r1@16
  int v19; // [sp+10h] [bp-E0h]@1
  int v20; // [sp+14h] [bp-DCh]@1
  __int64 v21; // [sp+18h] [bp-D8h]@1
  int v22; // [sp+20h] [bp-D0h]@1
  int v23; // [sp+24h] [bp-CCh]@1
  int v24; // [sp+2Ch] [bp-C4h]@1
  __int64 v25; // [sp+B0h] [bp-40h]@1
  __int64 v26; // [sp+B8h] [bp-38h]@1
  __int16 v27; // [sp+C0h] [bp-30h]@1
  RakNet *v28; // [sp+C8h] [bp-28h]@1

  v2 = a1;
  v3 = a2;
  v4 = (_QWORD *)(a1 + 20);
  v28 = _stack_chk_guard;
  v19 = *(_DWORD *)a1;
  *(_DWORD *)a1 = &unk_28898CC;
  v5 = (int *)(a1 + 4);
  v20 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  v7 = (_QWORD *)(a1 + 8);
  LODWORD(v6) = *(_DWORD *)(a1 + 8);
  HIDWORD(v6) = *(_DWORD *)(a1 + 12);
  v21 = v6;
  v8 = (int *)(a1 + 16);
  v22 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 16) = &unk_28898CC;
  _aeabi_memcpy4(&v23, a1 + 20, 164);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v2,
    (int *)v3);
    v5,
    (int *)(v3 + 4));
  *v7 = *(_QWORD *)(v3 + 8);
    v8,
    (int *)(v3 + 16));
  *v4 = *(_QWORD *)(v3 + 20);
  RakNet::SystemAddress::operator=(v2 + 28, v3 + 28);
  *(_QWORD *)(v2 + 160) = *(_QWORD *)(v3 + 160);
  *(_QWORD *)(v2 + 168) = *(_QWORD *)(v3 + 168);
  *(_WORD *)(v2 + 176) = *(_WORD *)(v3 + 176);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id((int *)v3, &v19);
    (int *)(v3 + 4),
    (int *)((unsigned int)&v19 | 4));
  *(_QWORD *)(v3 + 8) = v21;
    (int *)(v3 + 16),
    &v22);
  *(_QWORD *)(v3 + 20) = *(_QWORD *)&v23;
  RakNet::SystemAddress::operator=(v3 + 28, (int)&v24);
  *(_QWORD *)(v3 + 160) = v25;
  *(_QWORD *)(v3 + 168) = v26;
  *(_WORD *)(v3 + 176) = v27;
  v9 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  }
  v10 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v20 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v19 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  result = (RakNet *)(_stack_chk_guard - v28);
  if ( _stack_chk_guard != v28 )
    _stack_chk_fail(result);
  return result;
}


std::random_device *__fastcall std::random_device::~random_device(std::random_device *this)
{
  std::random_device *v1; // r4@1

  v1 = this;
  sub_21E67A0((FILE **)this);
  return v1;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(a1);
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::system::nsal>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::system::nsal>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  void *v1; // r4@1

  v1 = *(void **)(a1 + 16);
  (**(void (__fastcall ***)(_DWORD))v1)(*(_DWORD *)(a1 + 16));
  j_j_j__ZdlPv_3(v1);
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<BaseRailBlock::Rail *,std::__shared_ptr<BaseRailBlock::Rail *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<BaseRailBlock::Rail *>>,std::__shared_ptr<BaseRailBlock::Rail *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<BaseRailBlock::Rail *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<BaseRailBlock::Rail *,std::__shared_ptr<BaseRailBlock::Rail *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<BaseRailBlock::Rail *>>,std::__shared_ptr<BaseRailBlock::Rail *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<BaseRailBlock::Rail *>>>(
           a1,
           a2);
}


const char *__fastcall std::bad_alloc::what(std::bad_alloc *this)
{
  return "std::bad_alloc";
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<CommandContext *,std::__shared_ptr<CommandContext *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CommandContext *>>,std::__shared_ptr<CommandContext *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    *(_DWORD *)v7);
  v11 = v17;
  v17 = *(_DWORD *)(v7 + 4);
  v10 = v17;
  *(_DWORD *)(v7 + 4) = v11;
  if ( v10 )
  {
    v12 = (unsigned int *)(v10 + 4);
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
      v14 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  }
  return v7;
}


void __fastcall std::swap<Realms::RealmsConfigInfo::Version>(int a1, int a2)
{
  std::swap<Realms::RealmsConfigInfo::Version>(a1, a2);
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<SkinPackModel *,std::__shared_ptr<SkinPackModel *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<SkinPackModel *>>,std::__shared_ptr<SkinPackModel *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<SkinPackModel *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_26D82F8;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(ptr);
}


unsigned int __fastcall std::hash<PackIdVersion>::operator()(int a1, int a2)
{
  int v2; // r4@1
  char *v3; // r0@1
  const void **v4; // r0@1
  int *v5; // r6@1
  _DWORD *v6; // r5@1
  int *v7; // r5@1
  unsigned int v8; // t1@1
  unsigned int v9; // r4@1
  void *v10; // r0@2
  unsigned int *v12; // r1@4
  signed int v13; // r0@6
  unsigned int *v14; // r2@8
  signed int v15; // r1@10
  int v16; // [sp+0h] [bp-20h]@1

  v2 = a2;
  mce::UUID::asString((mce::UUID *)&v16);
  v3 = SemVersion::asString((SemVersion *)(v2 + 16));
  v4 = sub_21E72F0((const void **)&v16, (const void **)v3);
  v5 = (int *)*v4;
  v6 = *v4;
  *v4 = &unk_28898CC;
  v8 = *(v6 - 3);
  v7 = v6 - 3;
  v9 = sub_21B417C(v5, v8, -955291385);
  if ( v7 != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v5 - 1);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  v10 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  return v9;
}


std::__exception_ptr::exception_ptr *__fastcall std::__exception_ptr::exception_ptr::~exception_ptr(std::__exception_ptr::exception_ptr *this)
{
  std::__exception_ptr::exception_ptr *v1; // r4@1

  v1 = this;
  j_std::__exception_ptr::exception_ptr::_M_release(this);
  return v1;
}


unsigned int __fastcall std::set_new_handler(void (*a1)(void))
{
  void (*v1)(void); // r2@1
  unsigned int result; // r0@2

  v1 = a1;
  __dmb();
  do
    result = __ldrex((unsigned int *)&dword_28881F4);
  while ( __strex((unsigned int)v1, (unsigned int *)&dword_28881F4) );
  return result;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<std::string>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<Potion *,std::__shared_ptr<Potion *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Potion *>>,std::__shared_ptr<Potion *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    *(_DWORD *)v3);
  v11 = v17;
  v17 = *(_DWORD *)(v3 + 4);
  v10 = v17;
  *(_DWORD *)(v3 + 4) = v11;
  if ( v10 )
  {
    v12 = (unsigned int *)(v10 + 4);
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
      v14 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  }
  return v3;
}


std::__future_base::_State_baseV2 *__fastcall std::__future_base::_State_baseV2::~_State_baseV2(std::__future_base::_State_baseV2 *this)
{
  std::__future_base::_State_baseV2 *v1; // r4@1
  void (***v2)(void); // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26D78F8;
  sub_DA7F4C((pthread_cond_t *)((char *)this + 12));
  v2 = (void (***)(void))*((_DWORD *)v1 + 1);
  if ( v2 )
    (**v2)();
  *((_DWORD *)v1 + 1) = 0;
  return v1;
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<Concurrency::streams::details::basic_istream_helper<unsigned char> *,std::__shared_ptr<Concurrency::streams::details::basic_istream_helper<unsigned char> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Concurrency::streams::details::basic_istream_helper<unsigned char> *>>,std::__shared_ptr<Concurrency::streams::details::basic_istream_helper<unsigned char> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    *(_DWORD *)v3);
  v14 = v20;
  v20 = *(_DWORD *)(v3 + 4);
  v13 = v20;
  *(_DWORD *)(v3 + 4) = v14;
  if ( v13 )
  {
    v15 = (unsigned int *)(v13 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      }
      else
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  }
  return v3;
}


int __fastcall std::__basic_future<LevelArchiver::Result>::__basic_future(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r0@1
  int v4; // r1@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned __int8 *v7; // r0@8
  unsigned int v8; // r1@9

  v2 = a1;
  v3 = *(_DWORD *)a2;
  *(_DWORD *)v2 = *(_DWORD *)a2;
  v4 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(v2 + 4) = v4;
  if ( v4 )
  {
    v5 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
      v3 = *(_DWORD *)v2;
    }
    else
      ++*v5;
  }
  if ( !v3 )
    sub_21E5EAC(3);
  v7 = (unsigned __int8 *)(v3 + 16);
  __dmb();
  do
    v8 = __ldrex(v7);
  while ( __strex(1u, v7) );
  if ( v8 )
    sub_21E5EAC(1);
  return v2;
}


_DWORD *__fastcall std::to_string(const Core::FileOpenMode *a1, char *a2)
{
  char *v2; // r8@1
  void **v3; // r4@1
  void **v4; // r7@1
  unsigned __int8 v5; // r0@1
  signed int v6; // r4@25
  char *v7; // r0@37
  int v8; // r4@37
  int v9; // r0@38
  void **v10; // r0@41
  char *v11; // r0@41
  unsigned int *v13; // r2@43
  signed int v14; // r1@45
  int *v15; // [sp+4h] [bp-4h]@1
  void **v16; // [sp+8h] [bp+0h]@1
  int v17; // [sp+Ch] [bp+4h]@1
  void **v18; // [sp+10h] [bp+8h]@1
  void **v19; // [sp+14h] [bp+Ch]@1
  int v20; // [sp+18h] [bp+10h]@1
  int v21; // [sp+1Ch] [bp+14h]@1
  int v22; // [sp+20h] [bp+18h]@1
  int v23; // [sp+24h] [bp+1Ch]@1
  int v24; // [sp+28h] [bp+20h]@1
  int v25; // [sp+2Ch] [bp+24h]@1
  int v26; // [sp+30h] [bp+28h]@1
  int v27; // [sp+34h] [bp+2Ch]@1
  char *v28; // [sp+38h] [bp+30h]@1
  void **v29; // [sp+3Ch] [bp+34h]@1
  int v30; // [sp+ACh] [bp+A4h]@1
  __int16 v31; // [sp+B0h] [bp+A8h]@1
  int v32; // [sp+B4h] [bp+ACh]@1
  int v33; // [sp+B8h] [bp+B0h]@1
  int v34; // [sp+BCh] [bp+B4h]@1
  int v35; // [sp+C0h] [bp+B8h]@1

  v15 = (int *)a1;
  v2 = a2;
  sub_21B6308((int)&v29);
  v29 = &off_26D3AF0;
  v3 = (void **)off_26D3F64;
  v4 = (void **)off_26D3F70;
  v30 = 0;
  v31 = 0;
  v34 = 0;
  v35 = 0;
  v32 = 0;
  v33 = 0;
  v16 = (void **)off_26D3F68;
  *(void ***)((char *)&v16 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v17 = 0;
  sub_21B5AD4((int)*(v16 - 3) + (_DWORD)&v16, 0);
  v18 = v4;
  *(_DWORD *)((char *)*(v4 - 3) + (_DWORD)&v18) = off_26D3F74;
  sub_21B5AD4((int)*(v18 - 3) + (_DWORD)&v18, 0);
  v16 = v3;
  *(_DWORD *)((char *)*(v3 - 3) + (_DWORD)&v16) = off_26D3F78;
  v16 = &off_26D3F94;
  v29 = &off_26D3FBC;
  v18 = &off_26D3FA8;
  v25 = 0;
  v23 = 0;
  v24 = 0;
  v21 = 0;
  v22 = 0;
  v19 = &off_26D40A8;
  v20 = 0;
  sub_21C9520((unsigned int **)&v26);
  v19 = &off_27734E8;
  v27 = 24;
  v28 = (char *)&unk_28898CC;
  sub_21B5AD4((int)*(v16 - 3) + (_DWORD)&v16, (unsigned int)&v19);
  v5 = *v2;
  if ( *v2 & 1 )
  {
    sub_21CBF38((char *)&v18, (int)"Read", 4);
    v5 = *v2;
  }
  if ( v5 & 2 )
    sub_21CBF38((char *)&v18, (int)"Write", 5);
  if ( v5 & 8 )
    sub_21CBF38((char *)&v18, (int)"Truncate", 8);
  if ( v5 & 4 )
    sub_21CBF38((char *)&v18, (int)"Create", 6);
  if ( v5 & 0x10 )
    sub_21CBF38((char *)&v18, (int)"Append", 6);
  if ( v5 & 0x20 )
    sub_21CBF38((char *)&v18, (int)"Binary", 6);
  if ( ((unsigned __int8)byte_283E46C ^ v5) & 0x3F )
    if ( ((unsigned __int8)byte_283E484 ^ v5) & 0x3F )
    {
      if ( ((unsigned __int8)byte_283E49C ^ v5) & 0x3F )
      {
        if ( ((unsigned __int8)byte_283E4B4 ^ v5) & 0x3F )
        {
          if ( ((unsigned __int8)byte_283E4CC ^ v5) & 0x3F )
          {
            if ( ((unsigned __int8)byte_283E4E4 ^ v5) & 0x3F )
            {
              if ( ((unsigned __int8)byte_283E4FC ^ v5) & 0x3F )
              {
                if ( ((unsigned __int8)byte_283E514 ^ v5) & 0x3F )
                {
                  if ( ((unsigned __int8)byte_283E52C ^ v5) & 0x3F )
                  {
                    if ( ((unsigned __int8)byte_283E544 ^ v5) & 0x3F )
                    {
                      if ( ((unsigned __int8)byte_283E55C ^ v5) & 0x3F )
                      {
                        if ( (v5 ^ (unsigned __int8)byte_283E574) & 0x3F )
                          goto LABEL_41;
                        v6 = 11;
                      }
                      else
                        v6 = 10;
                    }
                    else
                      v6 = 9;
                  }
                  else
                    v6 = 8;
                }
                else
                  v6 = 7;
              }
              else
                v6 = 6;
            }
            else
              v6 = 5;
          }
          else
            v6 = 4;
        }
        else
          v6 = 3;
      }
      else
        v6 = 2;
    }
    else
      v6 = 1;
  else
    v6 = 0;
  sub_21CBF38((char *)&v18, (int)"(", 1);
  v7 = (char *)&unk_283E460 + 24 * v6;
  v8 = *((_DWORD *)v7 + 1);
  if ( v8 )
    v9 = j_strlen_0(*((const char **)v7 + 1));
    sub_21CBF38((char *)&v18, v8, v9);
    sub_21B583C((int)*(v18 - 3) + (_DWORD)&v18, *(_DWORD *)((char *)*(v18 - 3) + (_DWORD)&v18 + 20) | 1);
  sub_21CBF38((char *)&v18, (int)")", 1);
LABEL_41:
  sub_21CFED8(v15, (int)&v19);
  v10 = off_26D3F84;
  v16 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v16) = off_26D3F80[0];
  v18 = v10;
  v11 = v28 - 12;
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v28 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21C802C((unsigned int **)&v26);
  return sub_21B6560(&v29);
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::system::verify_string_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::system::verify_string_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


int __fastcall std::__future_base::_State_baseV2::_M_has_deferred(std::__future_base::_State_baseV2 *this)
{
  return 0;
}


void __fastcall __noreturn std::__detail::_Scanner<char>::_M_scan_in_brace(int a1)
{
  std::__detail::_Scanner<char>::_M_scan_in_brace(a1);
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>::~_Impl(void *ptr)
{
  void *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = ptr;
  *(_DWORD *)ptr = &off_26D51AC;
  v2 = *((_DWORD *)ptr + 2);
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
  j_j_j__ZdlPv_3(v1);
}


int __fastcall std::promise<LevelArchiver::Result>::set_value(unsigned __int64 *a1, int a2)
{
  unsigned __int64 *v2; // r5@1
  int v3; // r6@1
  int v4; // r7@1 OVERLAPPED
  int v5; // r8@1 OVERLAPPED
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  _DWORD *v8; // r0@7
  __int64 v9; // r2@7
  int result; // r0@8
  unsigned int *v11; // r1@11
  unsigned int *v12; // r4@17
  _DWORD *v13; // [sp+8h] [bp-40h]@7
  __int64 v14; // [sp+10h] [bp-38h]@7
  char *v15; // [sp+18h] [bp-30h]@7
  int *v16; // [sp+1Ch] [bp-2Ch]@7
  int v17; // [sp+20h] [bp-28h]@7
  int (***(__fastcall *v18)(int, int, _BYTE *))(void); // [sp+24h] [bp-24h]@7
  int v19; // [sp+28h] [bp-20h]@7
  char v20; // [sp+2Fh] [bp-19h]@7

  v2 = a1;
  v3 = a2;
  *(_QWORD *)&v4 = *a1;
  if ( *a1 >> 32 )
  {
    v6 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
    }
    else
      ++*v6;
  }
  v8 = operator new(8u);
  v8[1] = v3;
  HIDWORD(v9) = std::_Function_handler<std::unique_ptr<std::__future_base::_Result_base,std::__future_base::_Result_base::_Deleter> ()(void),std::__future_base::_State_baseV2::_Setter<LevelArchiver::Result,LevelArchiver::Result const&>>::_M_invoke;
  LODWORD(v9) = std::_Function_base::_Base_manager<std::__future_base::_State_baseV2::_Setter<LevelArchiver::Result,LevelArchiver::Result const&>>::_M_manager;
  *v8 = v2;
  v13 = v8;
  v14 = v9;
  v20 = 0;
  v19 = 0;
  v17 = v4;
  v18 = std::__future_base::_State_baseV2::_M_do_set;
  v16 = (int *)&v13;
  v15 = &v20;
  std::call_once<void (std::__future_base::_State_baseV2::*)(std::function<std::unique_ptr<std::__future_base::_Result_base,std::__future_base::_Result_base::_Deleter> ()(void)> &,bool &),std::__future_base::_State_baseV2*,std::reference_wrapper<std::function<std::unique_ptr<std::__future_base::_Result_base,std::__future_base::_Result_base::_Deleter> ()(void)>>,std::reference_wrapper<bool>>(
    (pthread_once_t *)(v4 + 20),
    (__int64 *)&v18,
    &v17,
    (int *)&v16,
    (int *)&v15);
  if ( !v20 )
    sub_21E5EAC(2);
  result = sub_21E03D8((pthread_cond_t *)(v4 + 12));
  if ( (_DWORD)v14 )
    result = ((int (*)(void))v14)();
  if ( v5 )
    v11 = (unsigned int *)(v5 + 4);
        result = __ldrex(v11);
      while ( __strex(result - 1, v11) );
      result = (*v11)--;
    if ( result == 1 )
      v12 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v12);
        while ( __strex(result - 1, v12) );
      }
      else
        result = (*v12)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return result;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIScreenControllerBindTests::UI_BindStringInAnyCollection(void)::{lambda(std::string const&,int)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<std::vector<unsigned int,std::allocator<unsigned int>> *,std::__shared_ptr<std::vector<unsigned int,std::allocator<unsigned int>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::vector<unsigned int,std::allocator<unsigned int>> *>>,std::__shared_ptr<std::vector<unsigned int,std::allocator<unsigned int>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::vector<unsigned int,std::allocator<unsigned int>> *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_2702C94;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::do_while(std::function<pplx::task<bool> ()(void)>)::{lambda(bool)#1}>::_M_manager(int *a1, int *a2, int a3)
{
  int *v3; // r6@1
  int *v4; // r4@1
  int result; // r0@4
  _DWORD *v6; // r0@5
  int v7; // r6@5
  _DWORD *v8; // r5@5
  void (__fastcall *v9)(_DWORD *, int, signed int); // r3@5
  int v10; // r0@7
  unsigned int *v11; // r0@8
  unsigned int v12; // r1@10
  int v13; // r4@12
  int v14; // r5@13
  unsigned int *v15; // r1@14
  unsigned int v16; // r0@16
  unsigned int *v17; // r6@22
  unsigned int v18; // r0@24
  void (__fastcall *v19)(int, int, signed int); // r3@29

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v13 = *a1;
    if ( *a1 )
    {
      v14 = *(_DWORD *)(v13 + 20);
      if ( v14 )
      {
        v15 = (unsigned int *)(v14 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
        }
        else
          v16 = (*v15)--;
        if ( v16 == 1 )
          v17 = (unsigned int *)(v14 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          if ( &pthread_create )
          {
            __dmb();
            do
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
          }
          else
            v18 = (*v17)--;
          if ( v18 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
      }
      v19 = *(void (__fastcall **)(int, int, signed int))(v13 + 8);
      if ( v19 )
        v19(v13, v13, 3);
      operator delete((void *)v13);
    }
    return 0;
  }
  if ( a3 != 2 )
    if ( a3 == 1 )
      *a1 = *a2;
      return 0;
  v6 = operator new(0x18u);
  v7 = *v3;
  v8 = v6;
  v6[2] = 0;
  v9 = *(void (__fastcall **)(_DWORD *, int, signed int))(v7 + 8);
  if ( v9 )
    v9(v6, v7, 2);
    v8[3] = *(_DWORD *)(v7 + 12);
    v8[2] = *(_DWORD *)(v7 + 8);
  v8[4] = *(_DWORD *)(v7 + 16);
  v10 = *(_DWORD *)(v7 + 20);
  v8[5] = v10;
  if ( v10 )
    v11 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
    else
      ++*v11;
  result = 0;
  *v4 = (int)v8;
  return result;
}


void __fastcall std::__convert_to_v<double>(const char *a1, double *a2, _DWORD *a3)
{
  const char *v3; // r5@1
  double *v4; // r6@1
  _DWORD *v5; // r9@1
  char *v6; // r0@1
  char *v7; // r8@1
  unsigned int v8; // r7@2
  void *v9; // r4@2
  char *v11; // r3@3
  char *endptr; // [sp+4h] [bp-24h]@3

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = j_setlocale(6, 0);
  v7 = v6;
  if ( v6 )
  {
    v8 = j_strlen_2(v6) + 1;
    v9 = j_operator new[](v8);
    j_memcpy(v9, v7, v8);
    j_setlocale(6, "C");
  }
  else
    v9 = 0;
  _R0 = j_strtod_0(v3, &endptr);
  v11 = endptr;
  __asm { VMOV            D7, R0, R1 }
  *v4 = _R0;
  if ( _ZF || *v11 )
    *(_QWORD *)v4 = 0LL;
    *v5 = 4;
    __asm
    {
      VLDR            D6, =1.79769313e308
      VCMPE.F64       D7, D6
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      goto LABEL_19;
      VLDR            D6, =-1.79769313e308
    if ( _NF )
LABEL_19:
      __asm
      {
        VCMPE.F64       D7, #0.0
        VLDR            D7, =1.79769313e308
        VLDR            D6, =-1.79769313e308
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        __asm { VMOVLE.F64      D7, D6 }
      __asm { VSTR            D7, [R6] }
      *v5 = 4;
  j_setlocale(6, (const char *)v9);
  if ( v9 )
    j_operator delete[](v9);
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<web::http::http_response>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(a1);
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<std::__detail::_NFA<std::regex_traits<char>> *,std::__shared_ptr<std::__detail::_NFA<std::regex_traits<char>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::__detail::_NFA<std::regex_traits<char>> *>>,std::__shared_ptr<std::__detail::_NFA<std::regex_traits<char>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::__detail::_NFA<std::regex_traits<char>> *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_26DDDD8;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


  std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)
{
    (int)&v19,
    &v14);
  v17 = v15;
  v18 = v16;
  v15 = 0;
  v16 = 0;
  sub_DA7434(v2, (int)&v17);
  v3 = v18;
  if ( v18 )
  {
    v4 = (unsigned int *)(v18 + 4);
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
  v8 = v16;
  if ( v16 )
    v9 = (unsigned int *)(v16 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return v2;
}


  std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)
{
    (int)&v19,
    &v14);
  v17 = v15;
  v18 = v16;
  v15 = 0;
  v16 = 0;
  sub_DA7434(v2, (int)&v17);
  v3 = v18;
  if ( v18 )
  {
    v4 = (unsigned int *)(v18 + 4);
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
  v8 = v16;
  if ( v16 )
    v9 = (unsigned int *)(v16 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return v2;
}


int __fastcall std::__basic_future<Legacy::WorldConversionReport>::__basic_future(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r0@1
  int v4; // r1@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned __int8 *v7; // r0@8
  unsigned int v8; // r1@9

  v2 = a1;
  v3 = *(_DWORD *)a2;
  *(_DWORD *)v2 = *(_DWORD *)a2;
  v4 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(v2 + 4) = v4;
  if ( v4 )
  {
    v5 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
      v3 = *(_DWORD *)v2;
    }
    else
      ++*v5;
  }
  if ( !v3 )
    sub_21E5EAC(3);
  v7 = (unsigned __int8 *)(v3 + 16);
  __dmb();
  do
    v8 = __ldrex(v7);
  while ( __strex(1u, v7) );
  if ( v8 )
    sub_21E5EAC(1);
  return v2;
}


void *__fastcall std::exception::~exception(void *a1)
{
  void *v1; // r4@1

  v1 = a1;
  j_std::exception::~exception();
  j_operator delete(v1);
  return v1;
}


void __fastcall std::__future_base::_Result<void>::~_Result(int a1)
{
  std::__future_base::_Result<void>::~_Result(a1);
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<ServerFormBindingInformation *,std::__shared_ptr<ServerFormBindingInformation *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<ServerFormBindingInformation *>>,std::__shared_ptr<ServerFormBindingInformation *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    *(_DWORD *)v1);
  v3 = v16;
  v4 = *(_DWORD *)(v1 + 4);
  v16 = *(_DWORD *)(v1 + 4);
  *(_DWORD *)(v1 + 4) = v3;
  v5 = *(_DWORD *)v1;
  if ( *(_DWORD *)v1 )
  {
    *(_DWORD *)v5 = v5;
    if ( v3 )
    {
      v6 = (unsigned int *)(v3 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 + 1, v6) );
      }
      else
        ++*v6;
    }
    v8 = *(_DWORD *)(v5 + 4);
    if ( v8 )
      v9 = (unsigned int *)(v8 + 8);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 == 1 )
        (*(void (**)(void))(*(_DWORD *)v8 + 12))();
    *(_DWORD *)(v5 + 4) = v3;
    v4 = v16;
  }
  if ( v4 )
    v11 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return v1;
}


std::__future_base::_Async_state_commonV2 *__fastcall std::__future_base::_Async_state_commonV2::~_Async_state_commonV2(std::__future_base::_Async_state_commonV2 *this)
{
  std::__future_base::_Async_state_commonV2 *v1; // r4@1
  void (***v2)(void); // r0@2

  v1 = this;
  *(_DWORD *)this = &off_26DFAF0;
  if ( !pthread_equal(*((_DWORD *)this + 6), 0) )
    std::terminate();
  *(_DWORD *)v1 = &off_26D78F8;
  sub_119E408((pthread_cond_t *)((char *)v1 + 12));
  v2 = (void (***)(void))*((_DWORD *)v1 + 1);
  if ( v2 )
    (**v2)();
  *((_DWORD *)v1 + 1) = 0;
  return v1;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIScreenControllerBindTests::UI_BindBoolInAnyCollection(void)::{lambda(std::string const&,int)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


int __fastcall std::__future_base::_Result<std::string>::_M_destroy(int result)
{
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 8))();
  return result;
}


void __fastcall std::thread::_Impl_base::~_Impl_base(std::thread::_Impl_base *this)
{
  std::thread::_Impl_base::~_Impl_base(this);
}


int std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_get_deleter()
{
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<serialize<InventoryTransaction>::write(InventoryTransaction const&,BinaryStream &)::{lambda(BinaryStream &,InventoryAction const* const&)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<ResourcePackStackPacket::write(BinaryStream &)const::{lambda(BinaryStream &,PackInstanceId const&)#2}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


  return std::__shared_count<(__gnu_cxx::_Lock_policy)
{
           a2);
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIScreenControllerEventTests::UI_HandleEventFocusMove(void)::{lambda(FocusMoveScreenEventData &)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<ExplodePacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5
  _DWORD *v8; // r1@8

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(0xCu);
    v8 = *v3;
    *v5 = *(_DWORD *)*v3;
    v5[1] = v8[1];
    v5[2] = v8[2];
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<std::string>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


int __fastcall std::__future_base::_Result<Legacy::WorldConversionReport>::~_Result(int a1)
{
  int v1; // r4@1

  v1 = a1;
  *(_DWORD *)a1 = &off_26E867C;
  if ( *(_BYTE *)(a1 + 40) )
    Legacy::WorldConversionReport::~WorldConversionReport((Legacy::WorldConversionReport *)(a1 + 8));
  return sub_21E6218(v1);
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>::~_Impl(void *ptr)
{
  std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>::~_Impl(ptr);
}


void __fastcall std::default_delete<ExternalServerFile>::operator()(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r1@2
  void *v4; // r0@2
  int v5; // r5@3
  ExternalServer *v6; // r0@4
  int v7; // r6@4
  ExternalServer *v8; // r0@5
  void *v9; // r0@7
  unsigned int *v10; // r2@12
  signed int v11; // r1@14

  v2 = a2;
  if ( a2 )
  {
    v3 = *(_DWORD *)(a2 + 28);
    v4 = (void *)(v3 - 12);
    if ( (int *)(v3 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v3 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j_j__ZdlPv_9(v4);
    }
    v5 = *(_DWORD *)(v2 + 8);
    if ( v5 )
      do
        v6 = *(ExternalServer **)(v5 + 8);
        v7 = *(_DWORD *)v5;
        if ( v6 )
        {
          v8 = ExternalServer::~ExternalServer(v6);
          operator delete((void *)v8);
        }
        operator delete((void *)v5);
        v5 = v7;
      while ( v7 );
    _aeabi_memclr4(*(_QWORD *)v2, 4 * (*(_QWORD *)v2 >> 32));
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 12) = 0;
    v9 = *(void **)v2;
    if ( *(_DWORD *)v2 )
      if ( (void *)(v2 + 24) != v9 )
        operator delete(v9);
    operator delete((void *)v2);
  }
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<boost::asio::ssl::detail::openssl_init_base::do_init *>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1
  __int64 v5; // r1@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x10u);
  HIDWORD(v5) = 1;
  LODWORD(v5) = &off_26D6214;
  *(_QWORD *)v4 = v5;
  v4[2] = 1;
  v4[3] = v3;
  *v2 = v4;
  return v2;
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>(int a1, int a2, _DWORD *a3)
{
  return std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>(
           a1,
           a2,
           a3);
}


int std::get_new_handler(void)
{
  int result; // r0@1

  result = dword_28881F4;
  __dmb();
  return result;
}


unsigned int __fastcall std::set_unexpected(void (*a1)(void))
{
  void (*v1)(void); // r2@1
  unsigned int result; // r0@2

  v1 = a1;
  __dmb();
  do
    result = __ldrex(&__cxxabiv1::__unexpected_handler);
  while ( __strex((unsigned int)v1, &__cxxabiv1::__unexpected_handler) );
  return result;
}


int __fastcall std::__exception_ptr::exception_ptr::_M_get(std::__exception_ptr::exception_ptr *this)
{
  return *(_DWORD *)this;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::system::xbox_shell_sign_in_status>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::system::xbox_shell_sign_in_status>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


std::thread::_Impl_base *__fastcall std::thread::_Impl_base::~_Impl_base(std::thread::_Impl_base *this)
{
  std::thread::_Impl_base *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_26D51AC;
  v2 = *((_DWORD *)this + 2);
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


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(ptr);
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>::~_Impl(void *ptr)
{
  std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>::~_Impl(ptr);
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<PendingDownloadParams *,std::__shared_ptr<PendingDownloadParams *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<PendingDownloadParams *>>,std::__shared_ptr<PendingDownloadParams *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    (int)v5);
  v7 = v13;
  v13 = *(_DWORD *)(v3 + 4);
  v6 = v13;
  *(_DWORD *)(v3 + 4) = v7;
  if ( v6 )
  {
    v8 = (unsigned int *)(v6 + 4);
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
      v10 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  }
  return v3;
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<BaseRailBlock::Rail *,std::__shared_ptr<BaseRailBlock::Rail *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<BaseRailBlock::Rail *>>,std::__shared_ptr<BaseRailBlock::Rail *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    *(_DWORD *)v4);
  v9 = v15;
  v15 = *(_DWORD *)(v4 + 4);
  v8 = v15;
  *(_DWORD *)(v4 + 4) = v9;
  if ( v8 )
  {
    v10 = (unsigned int *)(v8 + 4);
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
      v12 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  return v4;
}


  return std::__shared_count<(__gnu_cxx::_Lock_policy)
{
           a2);
}


AchievementData *__fastcall std::swap<AchievementData>(int a1, int *a2)
{
  int v2; // r8@1
  int *v3; // r11@1
  int *v4; // r9@1
  int *v5; // r10@1
  int *v6; // ST0C_4@1
  int v7; // ST08_4@1
  int v8; // r2@1
  int v9; // r3@1
  int v10; // r4@1
  int v11; // r6@1
  int v12; // r7@1
  int *v13; // r4@1
  int *v14; // ST04_4@1
  int *v15; // r11@1
  int *v16; // r9@1
  int *v17; // r10@1
  int v18; // r8@1
  int *v19; // lr@1
  int v20; // r0@1
  int v21; // r1@1
  int v22; // r2@1
  int v23; // r3@1
  int v24; // r4@1
  int v25; // r5@1
  int v26; // r7@1
  int v27; // r1@1
  int v28; // r2@1
  int v29; // r3@1
  int v30; // r5@1
  int v31; // r7@1
  int v33; // [sp+10h] [bp-58h]@1
  int v34; // [sp+14h] [bp-54h]@1
  int v35; // [sp+18h] [bp-50h]@1
  int v36; // [sp+1Ch] [bp-4Ch]@1
  int v37; // [sp+20h] [bp-48h]@1
  int v38; // [sp+24h] [bp-44h]@1
  int v39; // [sp+28h] [bp-40h]@1
  int v40; // [sp+2Ch] [bp-3Ch]@1
  int v41; // [sp+30h] [bp-38h]@1
  int v42; // [sp+34h] [bp-34h]@1
  int v43; // [sp+38h] [bp-30h]@1
  int v44; // [sp+3Ch] [bp-2Ch]@1

  v2 = a1;
  v33 = *(_DWORD *)a1;
  *(_DWORD *)a1 = &unk_28898CC;
  v3 = (int *)(a1 + 4);
  v34 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  v4 = (int *)(a1 + 8);
  v35 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = &unk_28898CC;
  v5 = (int *)(a1 + 12);
  v36 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 12) = &unk_28898CC;
  v37 = *(_DWORD *)(a1 + 16);
  v38 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 20) = &unk_28898CC;
  v6 = (int *)(a1 + 20);
  v7 = a1 + 24;
  v8 = *(_DWORD *)(a1 + 28);
  v9 = *(_DWORD *)(a1 + 32);
  v10 = *(_DWORD *)(a1 + 36);
  v11 = *(_DWORD *)(a1 + 40);
  v12 = *(_DWORD *)(a1 + 44);
  v39 = *(_DWORD *)(a1 + 24);
  v40 = v8;
  v41 = v9;
  v42 = v10;
  v43 = v11;
  v44 = v12;
  v13 = a2;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id((int *)a1, a2);
  v14 = v13 + 1;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, v13 + 1);
  v15 = v13 + 2;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v4, v13 + 2);
  v16 = v13 + 3;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v5, v13 + 3);
  v17 = v13 + 5;
  *(_DWORD *)(v2 + 16) = v13[4];
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v6, v13 + 5);
  v18 = (int)(v13 + 6);
  v19 = v13;
  v20 = (int)(v13 + 6);
  v21 = v13[6];
  v22 = v13[7];
  v23 = v13[8];
  v24 = v13[9];
  v25 = *(_DWORD *)(v20 + 16);
  v26 = *(_DWORD *)(v20 + 20);
  *(_DWORD *)v7 = v21;
  *(_DWORD *)(v7 + 4) = v22;
  *(_DWORD *)(v7 + 8) = v23;
  *(_DWORD *)(v7 + 12) = v24;
  *(_DWORD *)(v7 + 16) = v25;
  *(_DWORD *)(v7 + 20) = v26;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v19, &v33);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    v14,
    (int *)((unsigned int)&v33 | 4));
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v15, &v35);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v16, &v36);
  v19[4] = v37;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v17, &v38);
  v27 = v40;
  v28 = v41;
  v29 = v42;
  v30 = v43;
  v31 = v44;
  *(_DWORD *)v18 = v39;
  *(_DWORD *)(v18 + 4) = v27;
  *(_DWORD *)(v18 + 8) = v28;
  *(_DWORD *)(v18 + 12) = v29;
  *(_DWORD *)(v18 + 16) = v30;
  *(_DWORD *)(v18 + 20) = v31;
  return AchievementData::~AchievementData((AchievementData *)&v33);
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<CallbackTokenContext<std::function<void ()(Legacy::RetrieveStatus)>> *,std::__shared_ptr<CallbackTokenContext<std::function<void ()(Legacy::RetrieveStatus)>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CallbackTokenContext<std::function<void ()(Legacy::RetrieveStatus)>> *>>,std::__shared_ptr<CallbackTokenContext<std::function<void ()(Legacy::RetrieveStatus)>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CallbackTokenContext<std::function<void ()(Legacy::RetrieveStatus)>> *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<CallbackTokenContext<std::function<void ()(Legacy::RetrieveStatus)>> *,std::__shared_ptr<CallbackTokenContext<std::function<void ()(Legacy::RetrieveStatus)>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CallbackTokenContext<std::function<void ()(Legacy::RetrieveStatus)>> *>>,std::__shared_ptr<CallbackTokenContext<std::function<void ()(Legacy::RetrieveStatus)>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CallbackTokenContext<std::function<void ()(Legacy::RetrieveStatus)>> *>>>(
           a1,
           a2);
}


        std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v27)
{
        !v9) )
  {
    (*(void (__fastcall **)(char *))(**(_DWORD **)v4 + 132))(&v26);
    pplx::get_ambient_scheduler((pplx *)&v29);
    v11 = v30;
    v16 = v29;
    v17 = v30;
    v18 = v29;
    v19 = 0;
    v20 = 0;
    v25 = 0;
    v23 = 0;
    v24 = 0;
    v21 = 0;
    v22 = 0;
    pplx::task_from_exception<int,std::__exception_ptr::exception_ptr>(
      v5,
      (const std::__exception_ptr::exception_ptr *)&v26,
      (int)&v16);
    if ( v11 )
    {
      v12 = (unsigned int *)(v11 + 4);
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
        v14 = (unsigned int *)(v11 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
        if ( &pthread_create )
        {
          __dmb();
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
        }
        else
          v15 = (*v14)--;
        if ( v15 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
    }
    result = std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v26);
  }
  else
    *(_DWORD *)v5 = *v3;
    result = v3[1];
    v3[1] = 0;
    *(_DWORD *)(v5 + 4) = result;
    *v3 = 0;
  return result;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<websocketpp::message_buffer::alloc::con_msg_manager<websocketpp::message_buffer::alloc::message<websocketpp::message_buffer::alloc::message>> *>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  __int64 v3; // r3@1
  _DWORD *v4; // r0@1

  v2 = a1;
  HIDWORD(v3) = a2;
  *a1 = 0;
  v4 = j_operator new(0x10u);
  LODWORD(v3) = 1;
  *v4 = &off_276D1E8;
  v4[1] = 1;
  *((_QWORD *)v4 + 1) = v3;
  *v2 = v4;
  return v2;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::xbox_live_context *,std::__shared_ptr<xbox::services::xbox_live_context *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<xbox::services::xbox_live_context *>>,std::__shared_ptr<xbox::services::xbox_live_context *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<xbox::services::xbox_live_context *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_26DEE60;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


  std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)
{
    (int)&v19,
    &v14);
  v17 = v15;
  v18 = v16;
  v15 = 0;
  v16 = 0;
  sub_DA7434(v2, (int)&v17);
  v3 = v18;
  if ( v18 )
  {
    v4 = (unsigned int *)(v18 + 4);
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
  v8 = v16;
  if ( v16 )
    v9 = (unsigned int *)(v16 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return v2;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIJsonLoadTests::UI_JsonLoad_ScreenWithMissingControlDefinition(void)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIScreenControllerBindTests::UI_BindGridSize(void)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>::~_Impl(void *ptr)
{
  std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>::~_Impl(ptr);
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // r6@1
  int v4; // r4@1
  _DWORD *v5; // r5@1
  _DWORD *v6; // r0@1
  int v7; // r5@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r6@8
  unsigned int v11; // r0@10

  v3 = a3;
  v4 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v5 = operator new(0x10u);
  *(_DWORD *)v4 = v5;
  v5[1] = 0;
  v5[2] = 0;
  *v5 = &off_26D529C;
  v5[3] = *v3;
  v6 = operator new(0x14u);
  v6[1] = 1;
  v6[2] = 1;
  *v6 = &off_26D52B0;
  v6[4] = v5;
  v7 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = v6;
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
  return v4;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<Potion *,std::__shared_ptr<Potion *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Potion *>>,std::__shared_ptr<Potion *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Potion *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<Potion *,std::__shared_ptr<Potion *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Potion *>>,std::__shared_ptr<Potion *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Potion *>>>(
           a1,
           a2);
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIScreenControllerBindTests::UI_BindString(void)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


pthread_mutex_t *__fastcall std::__future_base::_Async_state_commonV2::_M_complete_async(std::__future_base::_Async_state_commonV2 *this)
{
  std::__future_base::_Async_state_commonV2 *v2; // [sp+4h] [bp-14h]@1
  signed int (__fastcall *v3)(pthread_t *); // [sp+8h] [bp-10h]@1
  int v4; // [sp+Ch] [bp-Ch]@1

  v3 = sub_21E9834;
  v4 = 0;
  v2 = (std::__future_base::_Async_state_commonV2 *)((char *)this + 24);
  return std::call_once<void (std::thread::*)(void),std::reference_wrapper<std::thread>>(
           (pthread_once_t *)this + 7,
           (__int64 *)&v3,
           (int *)&v2);
}


int __fastcall std::__future_base::_Result<LevelArchiver::Result>::_M_destroy(int result)
{
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 8))();
  return result;
}


LevelSummary *__fastcall std::swap<LevelSummary>(int *a1, int a2)
{
  int *v2; // r9@1
  int v3; // r8@1
  int v4; // r0@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // r5@1
  int v8; // r6@1
  int v9; // r0@1
  int v10; // r3@1
  int v11; // r4@1
  int v12; // r5@1
  int v13; // r6@1
  int v14; // r7@1
  int v15; // r2@1
  int v16; // r3@1
  int v17; // r4@1
  int v18; // r6@1
  int v19; // r11@1
  int v20; // r2@1
  int v21; // r3@1
  int v22; // r4@1
  int v23; // r5@1
  int v24; // r6@1
  char v26; // [sp+8h] [bp-68h]@1
  int v27; // [sp+10h] [bp-60h]@1
  int v28; // [sp+14h] [bp-5Ch]@1
  int v29; // [sp+18h] [bp-58h]@1
  int v30; // [sp+1Ch] [bp-54h]@1
  int v31; // [sp+20h] [bp-50h]@1
  int v32; // [sp+24h] [bp-4Ch]@1
  int v33; // [sp+28h] [bp-48h]@1
  int v34; // [sp+2Ch] [bp-44h]@1
  int v35; // [sp+30h] [bp-40h]@1
  int v36; // [sp+34h] [bp-3Ch]@1
  int v37; // [sp+38h] [bp-38h]@1
  int v38; // [sp+3Ch] [bp-34h]@1
  int v39; // [sp+40h] [bp-30h]@1

  v2 = a1;
  v3 = a2;
  LevelSummary::LevelSummary((int *)&v26, a1);
  EntityInteraction::setInteractText(v2, (int *)v3);
  EntityInteraction::setInteractText(v2 + 1, (int *)(v3 + 4));
  v4 = (int)(v2 + 2);
  v5 = *(_DWORD *)(v3 + 12);
  v6 = *(_DWORD *)(v3 + 16);
  v7 = *(_DWORD *)(v3 + 20);
  v8 = *(_DWORD *)(v3 + 24);
  *(_DWORD *)v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  *(_DWORD *)(v4 + 16) = v8;
  v9 = (int)(v2 + 7);
  v10 = *(_DWORD *)(v3 + 32);
  v11 = *(_DWORD *)(v3 + 36);
  v12 = *(_DWORD *)(v3 + 40);
  v13 = *(_DWORD *)(v3 + 44);
  v14 = *(_DWORD *)(v3 + 48);
  *(_DWORD *)v9 = *(_DWORD *)(v3 + 28);
  *(_DWORD *)(v9 + 4) = v10;
  *(_DWORD *)(v9 + 8) = v11;
  *(_DWORD *)(v9 + 12) = v12;
  *(_DWORD *)(v9 + 16) = v13;
  *(_DWORD *)(v9 + 20) = v14;
  EntityInteraction::setInteractText(v2 + 13, (int *)(v3 + 52));
  EntityInteraction::setInteractText(v2 + 14, (int *)(v3 + 56));
  EntityInteraction::setInteractText((int *)v3, (int *)&v26);
  EntityInteraction::setInteractText((int *)(v3 + 4), (int *)((unsigned int)&v26 | 4));
  v15 = v28;
  v16 = v29;
  v17 = v30;
  v18 = v31;
  *(_DWORD *)(v3 + 8) = v27;
  *(_DWORD *)(v3 + 12) = v15;
  *(_DWORD *)(v3 + 16) = v16;
  *(_DWORD *)(v3 + 20) = v17;
  *(_DWORD *)(v3 + 24) = v18;
  v19 = v3 + 28;
  v20 = v33;
  v21 = v34;
  v22 = v35;
  v23 = v36;
  v24 = v37;
  *(_DWORD *)v19 = v32;
  *(_DWORD *)(v19 + 4) = v20;
  *(_DWORD *)(v19 + 8) = v21;
  *(_DWORD *)(v19 + 12) = v22;
  *(_DWORD *)(v19 + 16) = v23;
  *(_DWORD *)(v19 + 20) = v24;
  EntityInteraction::setInteractText((int *)(v3 + 52), &v38);
  EntityInteraction::setInteractText((int *)(v3 + 56), &v39);
  return LevelSummary::~LevelSummary((LevelSummary *)&v26);
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::system::sign_in_and_auth_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::system::sign_in_and_auth_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


  return std::__shared_count<(__gnu_cxx::_Lock_policy)
{
           a2);
}


int __fastcall std::_Function_base::_Base_manager<web::http::http_response::extract_string(bool)const::{lambda(unsigned long long)#1}>::_M_manager(_DWORD *a1, void **a2, int a3)
{
  void **v3; // r5@1
  _DWORD *v4; // r4@1
  _DWORD *v5; // r0@4
  int v6; // r4@5
  int v7; // r5@6
  unsigned int *v8; // r1@7
  unsigned int v9; // r0@9
  _DWORD *v10; // r1@11
  int v11; // r2@11
  unsigned int *v12; // r2@12
  unsigned int v13; // r3@14
  unsigned int *v15; // r6@21
  unsigned int v16; // r0@23

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *a1 )
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
          v15 = (unsigned int *)(v7 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          if ( &pthread_create )
          {
            __dmb();
            do
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
          }
          else
            v16 = (*v15)--;
          if ( v16 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
      }
      operator delete((void *)v6);
    }
  }
  else
    if ( a3 == 2 )
      v5 = operator new(0xCu);
      v10 = *v3;
      *v5 = *(_DWORD *)*v3;
      v11 = v10[1];
      v5[1] = v11;
      if ( v11 )
        v12 = (unsigned int *)(v11 + 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 + 1, v12) );
          ++*v12;
      *((_BYTE *)v5 + 8) = *((_BYTE *)v10 + 8);
      goto LABEL_18;
    if ( a3 == 1 )
      v5 = *a2;
LABEL_18:
      *v4 = v5;
      return 0;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftBindingFactoryMap::NullBindingFactory::getBooleanBinding(std::string const&)const::{lambda(void)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


signed int __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(int a1)
{
  int v1; // r8@1
  int v2; // r6@1
  int v3; // r0@1
  const void **v4; // r5@4
  int v5; // r0@5
  int v6; // r0@10
  int v7; // r0@15
  signed int v8; // r4@19
  _DWORD *v9; // r1@25
  unsigned int v10; // r7@26
  int v11; // r0@26
  int v12; // r6@27
  int v13; // r4@27
  signed int v14; // r0@29
  unsigned int v15; // r7@38
  int v16; // r6@39
  int v17; // r4@39
  signed int v18; // r0@41

  v1 = a1;
  v2 = a1 + 12;
  v3 = *(_DWORD *)(a1 + 144);
  if ( v3 == 1 )
  {
    EntityInteraction::setInteractText((int *)(v1 + 228), (int *)(v1 + 172));
    if ( (unsigned int)*(_QWORD *)(v1 + 160) == *(_QWORD *)(v1 + 160) >> 32 )
    {
      *(_DWORD *)(v1 + 144) = 28;
    }
    else
      v6 = *(_DWORD *)(v1 + 136);
      if ( v6 == 2 )
      {
        std::__detail::_Scanner<char>::_M_scan_in_bracket(v2);
      }
      else
        if ( v6 == 1 )
          std::__detail::_Scanner<char>::_M_scan_in_brace(v2);
        if ( !v6 )
          std::__detail::_Scanner<char>::_M_scan_normal(v2);
    v8 = 1;
  }
  else
    if ( v3 == 3 )
      v4 = (const void **)(v1 + 228);
      EntityInteraction::setInteractText((int *)(v1 + 228), (int *)(v1 + 172));
      if ( (unsigned int)*(_QWORD *)(v1 + 160) == *(_QWORD *)(v1 + 160) >> 32 )
        *(_DWORD *)(v1 + 144) = 28;
        v7 = *(_DWORD *)(v1 + 136);
        if ( v7 == 2 )
        {
          std::__detail::_Scanner<char>::_M_scan_in_bracket(v2);
        }
        else
          if ( v7 == 1 )
            std::__detail::_Scanner<char>::_M_scan_in_brace(v2);
          if ( !v7 )
            std::__detail::_Scanner<char>::_M_scan_normal(v2);
      v9 = *v4;
      if ( *((_DWORD *)*v4 - 3) )
        v15 = 0;
        v11 = 0;
        do
          v16 = *(_DWORD *)(v1 + 4);
          v17 = 16 * v11;
          if ( *(v9 - 1) >= 0 )
          {
            sub_119CB68((const void **)(v1 + 228));
            v9 = *v4;
          }
          v18 = std::regex_traits<char>::value(v16, *((_BYTE *)v9 + v15), 16);
          v9 = *v4;
          v11 = v18 + v17;
          ++v15;
        while ( v15 < *((_DWORD *)*v4 - 3) );
        LOBYTE(v11) = 0;
      goto LABEL_44;
    if ( v3 == 2 )
        v5 = *(_DWORD *)(v1 + 136);
        if ( v5 == 2 )
          if ( v5 == 1 )
          if ( !v5 )
        v10 = 0;
          v12 = *(_DWORD *)(v1 + 4);
          v13 = 8 * v11;
          v14 = std::regex_traits<char>::value(v12, *((_BYTE *)v9 + v10), 8);
          v11 = v14 + v13;
          ++v10;
        while ( v10 < *((_DWORD *)*v4 - 3) );
LABEL_44:
      v8 = 1;
      sub_119CB38(v4, 0, (_BYTE *)*(v9 - 3), (_BYTE *)1, v11);
      return v8;
    v8 = 0;
  return v8;
}


int std::get_new_handler(void)
{
  return std::get_new_handler();
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<std::unordered_map<ResourceLocation,mce::ImageBuffer const*,std::hash<mce>,std::equal_to<mce>,std::allocator<std::pair<mce const,std::hash>>> *,std::__shared_ptr<std::unordered_map<ResourceLocation,mce::ImageBuffer const*,std::hash<mce>,std::equal_to<mce>,std::allocator<std::pair<mce const,std::hash>>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::unordered_map<ResourceLocation,mce::ImageBuffer const*,std::hash<mce>,std::equal_to<mce>,std::allocator<std::pair<mce const,std::hash>>> *>>,std::__shared_ptr<std::unordered_map<ResourceLocation,mce::ImageBuffer const*,std::hash<mce>,std::equal_to<mce>,std::allocator<std::pair<mce const,std::hash>>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    *(_DWORD *)v1);
  v8 = v14;
  v14 = *(_DWORD *)(v1 + 4);
  v7 = v14;
  *(_DWORD *)(v1 + 4) = v8;
  if ( v7 )
  {
    v9 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  return v1;
}


int __fastcall std::_Function_base::_Base_manager<web::http::client::details::asio_context::handle_write_chunked_body(boost::system::error_code const&)::{lambda(pplx::task<unsigned int>)#1}>::_M_manager(void ***a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void ***v4; // r4@1
  void **v5; // r0@2
  void **v6; // r1@4
  void *v7; // r2@4
  unsigned int *v8; // r2@5
  unsigned int v9; // r3@6
  void **v11; // r4@10
  void *v12; // r5@11
  unsigned int *v13; // r0@12
  unsigned int v14; // r1@13
  unsigned int *v15; // r6@15
  unsigned int v16; // r0@16

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'web::http::client::details::asio_context::handle_write_chunked_body(boost::system::error_code const&)::{lambda(pplx::task<unsigned int>)#1};
      goto LABEL_9;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(0x10u);
      v6 = *v3;
      *v5 = **v3;
      v7 = v6[1];
      v5[1] = v7;
      if ( v7 )
      {
        v8 = (unsigned int *)((char *)v7 + 4);
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 + 1, v8) );
      }
      *((_QWORD *)v5 + 1) = *((_QWORD *)v6 + 1);
LABEL_9:
      *v4 = v5;
      return 0;
    case 3:
      v11 = *a1;
      if ( *a1 )
        v12 = v11[1];
        if ( v12 )
        {
          v13 = (unsigned int *)((char *)v12 + 4);
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          if ( v14 == 1 )
          {
            v15 = (unsigned int *)((char *)v12 + 8);
            (*(void (__fastcall **)(void *))(*(_DWORD *)v12 + 8))(v12);
            __dmb();
            do
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            if ( v16 == 1 )
              (*(void (__fastcall **)(void *))(*(_DWORD *)v12 + 12))(v12);
          }
        }
        j_operator delete(v11);
      break;
    default:
  }
  return 0;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(ptr);
}


int __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>::_M_run(int a1)
{
  int v1; // r5@1
  unsigned __int8 *v2; // r4@1
  unsigned int v3; // r1@2
  int v4; // r0@4
  int v5; // r0@6
  int v6; // r0@7
  int result; // r0@9

  v1 = *(_DWORD *)(a1 + 12);
  v2 = (unsigned __int8 *)(v1 + 40);
  do
  {
    do
      v3 = __ldrex(v2);
    while ( __strex(1u, v2) );
    __dmb();
  }
  while ( v3 );
  v4 = *(_DWORD *)(v1 + 8);
  if ( *(_DWORD *)(v1 + 24) != v4 )
    if ( v4 == *(_DWORD *)(v1 + 16) - 1 )
    {
      operator delete(*(void **)(v1 + 12));
      v6 = *(_DWORD *)(v1 + 20);
      *(_DWORD *)(v1 + 20) = v6 + 4;
      v5 = *(_DWORD *)(v6 + 4);
      *(_DWORD *)(v1 + 12) = v5;
      *(_DWORD *)(v1 + 16) = v5 + 512;
    }
    else
      v5 = v4 + 1;
    *(_DWORD *)(v1 + 8) = v5;
  result = 0;
  __dmb();
  *v2 = 0;
  return result;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIJsonLoadTests::UI_JsonLoad_ScreenWithUnsolvableLayout(void)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>(int a1, int a2, _DWORD *a3)
{
  return std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>(
           a1,
           a2,
           a3);
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::presence::presence_record>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::presence::presence_record>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


  return std::_Function_base::_Base_manager<web::websockets::client::details::wspp_callback_client::connect(void)::{lambda(std::weak_ptr<void>)
{
           a2,
           a3);
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>(int a1, int a2, _QWORD *a3)
{
  return std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>(
           a1,
           a2,
           a3);
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIScreenControllerBindTests::UI_BindStringInCollection(void)::{lambda(int)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::social::xbox_user_profile>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::social::xbox_user_profile>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


int std::get_unexpected(void)
{
  int result; // r0@1

  result = __cxxabiv1::__unexpected_handler;
  __dmb();
  return result;
}


int __fastcall std::__detail::_ScannerBase::_ScannerBase(int result, int a2)
{
  int v2; // r10@1
  int v3; // r4@1
  _DWORD *v4; // r1@1
  int v5; // r6@1

  v2 = a2;
  *(_BYTE *)result = 94;
  *(_DWORD *)(result + 4) = 23;
  *(_BYTE *)(result + 8) = 36;
  *(_DWORD *)(result + 12) = 24;
  *(_BYTE *)(result + 16) = 46;
  *(_DWORD *)(result + 20) = 0;
  *(_BYTE *)(result + 24) = 42;
  *(_DWORD *)(result + 28) = 20;
  *(_BYTE *)(result + 32) = 43;
  *(_DWORD *)(result + 36) = 21;
  *(_BYTE *)(result + 40) = 63;
  *(_DWORD *)(result + 44) = 18;
  *(_BYTE *)(result + 48) = 124;
  *(_DWORD *)(result + 52) = 19;
  *(_BYTE *)(result + 56) = 10;
  *(_DWORD *)(result + 60) = 19;
  *(_BYTE *)(result + 64) = 0;
  *(_DWORD *)(result + 68) = 19;
  *(_BYTE *)(result + 72) = 48;
  *(_BYTE *)(result + 73) = 0;
  *(_BYTE *)(result + 74) = 98;
  *(_BYTE *)(result + 75) = 8;
  *(_BYTE *)(result + 76) = 102;
  *(_BYTE *)(result + 77) = 12;
  *(_BYTE *)(result + 78) = 110;
  *(_BYTE *)(result + 79) = 10;
  *(_BYTE *)(result + 80) = 114;
  *(_BYTE *)(result + 81) = 13;
  *(_BYTE *)(result + 82) = 116;
  *(_BYTE *)(result + 83) = 9;
  *(_BYTE *)(result + 84) = 118;
  *(_BYTE *)(result + 85) = 11;
  *(_BYTE *)(result + 86) = 0;
  *(_BYTE *)(result + 87) = 0;
  *(_BYTE *)(result + 88) = 34;
  v3 = result + 88;
  *(_BYTE *)(result + 89) = 34;
  *(_BYTE *)(result + 90) = 47;
  *(_BYTE *)(result + 91) = 47;
  *(_BYTE *)(result + 92) = 92;
  *(_BYTE *)(result + 93) = 92;
  *(_BYTE *)(result + 94) = 97;
  *(_BYTE *)(result + 95) = 7;
  *(_BYTE *)(result + 96) = 98;
  *(_BYTE *)(result + 97) = 8;
  *(_BYTE *)(result + 98) = 102;
  *(_BYTE *)(result + 99) = 12;
  *(_BYTE *)(result + 100) = 110;
  *(_BYTE *)(result + 101) = 10;
  *(_BYTE *)(result + 102) = 114;
  *(_BYTE *)(result + 103) = 13;
  *(_BYTE *)(result + 104) = 116;
  *(_BYTE *)(result + 105) = 9;
  *(_BYTE *)(result + 106) = 118;
  *(_BYTE *)(result + 107) = 11;
  *(_BYTE *)(result + 108) = 0;
  *(_BYTE *)(result + 109) = 0;
  *(_DWORD *)(result + 112) = "^$\\.*+?()[]{}|";
  v4 = (_DWORD *)(result + 112);
  *(_DWORD *)(result + 116) = ".[\\*^$";
  *(_DWORD *)(result + 120) = ".[\\()*+?{|^$";
  v5 = result + 120;
  if ( v2 & 0x10 )
    v3 = result + 72;
  *(_DWORD *)(result + 136) = v3;
  *(_DWORD *)(result + 124) = 0;
  *(_DWORD *)(result + 128) = v2;
  if ( !(v2 & 0x10) )
  {
    if ( v2 & 0x120 )
      v5 = result + 116;
    v4 = (_DWORD *)v5;
  }
  *(_DWORD *)(result + 140) = *v4;
  *(_BYTE *)(result + 144) = 0;
  return result;
}


void __fastcall std::__detail::_StateSeq<std::regex_traits<char>>::_M_clone(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, void *a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, void *a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43)
{
  std::__detail::_StateSeq<std::regex_traits<char>>::_M_clone(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18,
    a19,
    a20,
    a21,
    a22,
    a23,
    a24,
    a25,
    a26,
    a27,
    a28,
    a29,
    a30,
    a31,
    a32,
    a33,
    a34,
    a35,
    a36,
    a37,
    a38,
    a39,
    a40,
    a41,
    a42,
    a43);
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(a1);
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIScreenControllerBindTests::UI_BindInt(void)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<web::websockets::client::details::wspp_callback_client::connect(void)::{lambda(std::weak_ptr<void>)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  _DWORD *v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'web::websockets::client::details::wspp_callback_client::connect(void)::{lambda(std::weak_ptr<void>)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<serialize<ShulkerBoxRecipe>::read(ReadOnlyBinaryStream &)::{lambda(ReadOnlyBinaryStream &)#2}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


void __fastcall std::default_delete<UnverifiedCertificate>::operator()(int a1, int a2)
{
  std::default_delete<UnverifiedCertificate>::operator()(a1, a2);
}


void __noreturn std::__throw_bad_weak_ptr(void)
{
  std::__throw_bad_weak_ptr();
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(ptr);
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<MapDecoration *,std::__shared_ptr<MapDecoration *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<MapDecoration *>>,std::__shared_ptr<MapDecoration *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<MapDecoration *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_26E9C9C;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>::~_Impl(void *ptr)
{
  std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>::~_Impl(ptr);
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(ptr);
}


int __fastcall std::_Function_base::_Base_manager<Concurrency::streams::details::streambuf_state_manager<char>::close(std::_Ios_Openmode)::{lambda(void)#2}::operator() const(void)::{lambda(void)#1}>::_M_manager(_DWORD *a1, void **a2, int a3)
{
  void **v3; // r5@1
  _DWORD *v4; // r4@1
  _DWORD *v5; // r0@4
  int v6; // r4@5
  int v7; // r5@6
  unsigned int *v8; // r1@7
  unsigned int v9; // r0@9
  _DWORD *v10; // r1@11
  int v11; // r1@11
  unsigned int *v12; // r1@12
  unsigned int v13; // r2@14
  unsigned int *v15; // r6@20
  unsigned int v16; // r0@22

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *a1 )
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
          v15 = (unsigned int *)(v7 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          if ( &pthread_create )
          {
            __dmb();
            do
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
          }
          else
            v16 = (*v15)--;
          if ( v16 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
      }
      operator delete((void *)v6);
    }
  }
  else
    if ( a3 == 2 )
      v5 = operator new(8u);
      v10 = *v3;
      *v5 = *(_DWORD *)*v3;
      v11 = v10[1];
      v5[1] = v11;
      if ( v11 )
        v12 = (unsigned int *)(v11 + 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 + 1, v12) );
          ++*v12;
      goto LABEL_17;
    if ( a3 == 1 )
      v5 = *a2;
LABEL_17:
      *v4 = v5;
      return 0;
  return 0;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(ptr);
}


std::bad_typeid *__fastcall std::bad_typeid::~bad_typeid(std::bad_typeid *this)
{
  std::bad_typeid *v1; // r4@1

  v1 = this;
  j_std::bad_typeid::~bad_typeid(this);
  j_operator delete((void *)v1);
  return v1;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::privacy::permission_check_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::privacy::permission_check_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<web::http::client::details::asio_context::handle_chunk(boost::system::error_code const&,int)::{lambda(pplx::task<unsigned int>)#1}>::_M_manager(void ***a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void ***v4; // r4@1
  void **v5; // r0@2
  void **v6; // r1@4
  void *v7; // r2@4
  unsigned int *v8; // r2@5
  unsigned int v9; // r3@6
  void **v11; // r4@10
  void *v12; // r5@11
  unsigned int *v13; // r0@12
  unsigned int v14; // r1@13
  unsigned int *v15; // r6@15
  unsigned int v16; // r0@16

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'web::http::client::details::asio_context::handle_chunk(boost::system::error_code const&,int)::{lambda(pplx::task<unsigned int>)#1};
      goto LABEL_9;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(0xCu);
      v6 = *v3;
      *v5 = **v3;
      v7 = v6[1];
      v5[1] = v7;
      if ( v7 )
      {
        v8 = (unsigned int *)((char *)v7 + 4);
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 + 1, v8) );
      }
      v5[2] = v6[2];
LABEL_9:
      *v4 = v5;
      return 0;
    case 3:
      v11 = *a1;
      if ( *a1 )
        v12 = v11[1];
        if ( v12 )
        {
          v13 = (unsigned int *)((char *)v12 + 4);
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          if ( v14 == 1 )
          {
            v15 = (unsigned int *)((char *)v12 + 8);
            (*(void (__fastcall **)(void *))(*(_DWORD *)v12 + 8))(v12);
            __dmb();
            do
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            if ( v16 == 1 )
              (*(void (__fastcall **)(void *))(*(_DWORD *)v12 + 12))(v12);
          }
        }
        j_operator delete(v11);
      break;
    default:
  }
  return 0;
}


int __fastcall std::__detail::_NFA<std::regex_traits<char>>::_M_insert_subexpr_end(int a1)
{
  int v1; // r10@1
  int v2; // r0@1
  __int64 v3; // kr00_8@1
  int v4; // r4@2
  int v5; // r5@2
  int v6; // r6@2
  int v7; // r7@2
  __int64 v8; // r1@2
  int v9; // r3@2
  int v10; // r7@2
  int v11; // r4@4
  int v13; // [sp+0h] [bp-70h]@1
  int v14; // [sp+4h] [bp-6Ch]@1
  int v15; // [sp+8h] [bp-68h]@1
  int v16; // [sp+Ch] [bp-64h]@1
  int v17; // [sp+10h] [bp-60h]@1
  __int64 v18; // [sp+14h] [bp-5Ch]@2
  void (__fastcall *v19)(__int64 *, __int64 *, signed int); // [sp+1Ch] [bp-54h]@1
  int v20; // [sp+20h] [bp-50h]@2
  int v21; // [sp+28h] [bp-48h]@1
  int v22; // [sp+2Ch] [bp-44h]@1
  int v23; // [sp+30h] [bp-40h]@1
  int v24; // [sp+34h] [bp-3Ch]@1
  int v25; // [sp+38h] [bp-38h]@1
  void (*v26)(void); // [sp+44h] [bp-2Ch]@1

  v1 = a1;
  v21 = 8;
  v22 = -1;
  v2 = *(_DWORD *)(a1 + 4);
  v23 = *(_DWORD *)(v2 - 4);
  *(_DWORD *)(v1 + 4) = v2 - 4;
  v13 = v21;
  v14 = v22;
  v15 = v23;
  v16 = v24;
  v17 = v25;
  v26 = 0;
  v19 = 0;
  v3 = *(_QWORD *)(v1 + 36);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    std::vector<std::__detail::_State<std::regex_traits<char>>,std::allocator<std::__detail::_State<std::regex_traits<char>>>>::_M_emplace_back_aux<std::__detail::_State<std::regex_traits<char>>>(
      (unsigned __int64 *)(v1 + 32),
      (int)&v13);
    v10 = *(_DWORD *)(v1 + 36);
  }
  else
    v4 = v14;
    v5 = v15;
    v6 = v16;
    v7 = v17;
    *(_DWORD *)v3 = v13;
    *(_DWORD *)(v3 + 4) = v4;
    *(_DWORD *)(v3 + 8) = v5;
    *(_DWORD *)(v3 + 12) = v6;
    *(_DWORD *)(v3 + 16) = v7;
    *(_DWORD *)(v3 + 28) = 0;
    v8 = v18;
    v9 = *(_QWORD *)(v3 + 20);
    v18 = *(_QWORD *)(v3 + 20);
    *(_QWORD *)(v3 + 20) = v8;
    HIDWORD(v8) = v19;
    v19 = *(void (__fastcall **)(__int64 *, __int64 *, signed int))(v3 + 28);
    *(_DWORD *)(v3 + 28) = HIDWORD(v8);
    HIDWORD(v8) = v20;
    v20 = *(_DWORD *)(v3 + 32);
    *(_DWORD *)(v3 + 32) = HIDWORD(v8);
    v10 = *(_DWORD *)(v1 + 36) + 36;
    *(_DWORD *)(v1 + 36) = v10;
  v11 = *(_DWORD *)(v1 + 32);
  if ( v19 )
    v19(&v18, &v18, 3);
  if ( v26 )
    v26();
  return 954437177 * ((v10 - v11) >> 2) - 1;
}


int __fastcall std::_Function_base::_Base_manager<Concurrency::streams::details::streambuf_state_manager<char>::bumpc(void)::{lambda(int)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>::~_Impl(void *ptr)
{
  std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>::~_Impl(ptr);
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIJsonLoadTests::UI_JsonLoad_ScreenWithInvalidSize(void)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServiceSetOnOtherThread_UsesDefaultOnMainThreadAndSetOnOtherThread(void)::{lambda(void)#1} ()(void)>>::~_Impl(void *ptr)
{
  void *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = ptr;
  *(_DWORD *)ptr = &off_26D51AC;
  v2 = *((_DWORD *)ptr + 2);
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
  j_j_j__ZdlPv_3(v1);
}


const void **__fastcall std::__detail::_Scanner<char>::_M_eat_escape_awk(int a1)
{
  int v1; // r4@1
  _BYTE *v2; // r0@1
  int v3; // r6@1
  int v4; // r0@1
  int v5; // r7@1
  int v6; // r5@1
  int v7; // r0@2
  int v8; // r0@4
  int i; // r1@4
  int v10; // t1@5
  const void **result; // r0@8
  bool v12; // zf@9
  int *v13; // r5@12
  __int64 v14; // r0@12
  int v15; // r1@13
  bool v16; // zf@13
  int v17; // r1@16
  __int64 v18; // r2@16
  char v19; // r7@16
  int v20; // r6@16
  int v21; // r0@19
  __int64 v22; // r0@21
  int v23; // r1@22
  bool v24; // zf@22
  int v25; // r1@25
  __int64 v26; // r2@25
  char v27; // r7@25
  int v28; // r6@25
  int v29; // r0@28

  v1 = a1;
  v2 = *(_BYTE **)(a1 + 148);
  *(_DWORD *)(v1 + 148) = v2 + 1;
  v3 = *v2;
  v4 = *(_DWORD *)(v1 + 156);
  v5 = v4 + v3;
  v6 = *(_BYTE *)(v4 + v3 + 285);
  if ( !*(_BYTE *)(v4 + v3 + 285) )
  {
    v6 = 0;
    v7 = (*(int (**)(void))(*(_DWORD *)v4 + 32))();
    if ( v7 )
    {
      *(_BYTE *)(v5 + 285) = v7;
      v6 = v7;
    }
  }
  v8 = *(_DWORD *)(v1 + 136);
  for ( i = *(_BYTE *)v8; i; i = v10 )
    if ( (unsigned __int8)i == v6 )
      *(_DWORD *)(v1 + 132) = 1;
      return sub_119CB38(
               (const void **)(v1 + 160),
               0,
               *(_BYTE **)(*(_DWORD *)(v1 + 160) - 12),
               (_BYTE *)1,
               *(_BYTE *)(v8 + 1));
    v10 = *(_BYTE *)(v8 + 2);
    v8 += 2;
  v12 = (v3 & 0xFE) == 56;
  if ( (v3 & 0xFE) != 56 )
    v12 = (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v1 + 156) + 24) + v3) & 4) == 0;
  if ( v12 )
    sub_119E4D8(2);
  v13 = (int *)(v1 + 160);
  sub_119CB38((const void **)(v1 + 160), 0, *(_BYTE **)(*(_DWORD *)(v1 + 160) - 12), (_BYTE *)1, v3);
  v14 = *(_QWORD *)(v1 + 148);
  if ( (_DWORD)v14 != HIDWORD(v14) )
    v15 = *(_BYTE *)v14;
    v16 = (v15 & 0xFE) == 56;
    if ( (v15 & 0xFE) != 56 )
      v16 = (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v1 + 156) + 24) + v15) & 4) == 0;
    if ( !v16 )
      *(_DWORD *)(v1 + 148) = v14 + 1;
      HIDWORD(v14) = *(_DWORD *)(v1 + 160);
      v18 = *(_QWORD *)(HIDWORD(v14) - 12);
      v19 = *(_BYTE *)v14;
      v20 = v18 + 1;
      if ( (unsigned int)(v18 + 1) > HIDWORD(v18) || *(_DWORD *)(v17 - 4) >= 1 )
      {
        sub_119CAF8((const void **)(v1 + 160), v18 + 1);
        v17 = *v13;
        LODWORD(v18) = *(_DWORD *)(*v13 - 12);
      }
      *(_BYTE *)(v17 + v18) = v19;
      v21 = *v13;
      if ( (int *)(*v13 - 12) != &dword_28898C0 )
        *(_DWORD *)(v21 - 4) = 0;
        *(_DWORD *)(v21 - 12) = v20;
        *(_BYTE *)(v21 + v20) = byte_26C67B8[0];
      v22 = *(_QWORD *)(v1 + 148);
      if ( (_DWORD)v22 != HIDWORD(v22) )
        v23 = *(_BYTE *)v22;
        v24 = (v23 & 0xFE) == 56;
        if ( (v23 & 0xFE) != 56 )
          v24 = (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v1 + 156) + 24) + v23) & 4) == 0;
        if ( !v24 )
        {
          *(_DWORD *)(v1 + 148) = v22 + 1;
          HIDWORD(v22) = *(_DWORD *)(v1 + 160);
          v26 = *(_QWORD *)(HIDWORD(v22) - 12);
          v27 = *(_BYTE *)v22;
          v28 = v26 + 1;
          if ( (unsigned int)(v26 + 1) > HIDWORD(v26) || *(_DWORD *)(v25 - 4) >= 1 )
          {
            sub_119CAF8((const void **)(v1 + 160), v26 + 1);
            v25 = *v13;
            LODWORD(v26) = *(_DWORD *)(*v13 - 12);
          }
          *(_BYTE *)(v25 + v26) = v27;
          v29 = *v13;
          if ( (int *)(*v13 - 12) != &dword_28898C0 )
            *(_DWORD *)(v29 - 4) = 0;
            *(_DWORD *)(v29 - 12) = v28;
            *(_BYTE *)(v29 + v28) = byte_26C67B8[0];
        }
  result = (const void **)2;
  *(_DWORD *)(v1 + 132) = 2;
  return result;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIJsonLoadTests::UI_JsonLoad_NonexistentScreen(void)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


const char *__fastcall std::bad_array_new_length::what(std::bad_array_new_length *this)
{
  return "std::bad_array_new_length";
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<boost::asio::ssl::context *>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  __int64 v3; // r3@1
  _DWORD *v4; // r0@1

  v2 = a1;
  HIDWORD(v3) = a2;
  *a1 = 0;
  v4 = j_operator new(0x10u);
  LODWORD(v3) = 1;
  *v4 = &off_276CDB0;
  v4[1] = 1;
  *((_QWORD *)v4 + 1) = v3;
  *v2 = v4;
  return v2;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<Concurrency::streams::details::basic_istream_helper<unsigned char> *,std::__shared_ptr<Concurrency::streams::details::basic_istream_helper<unsigned char> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Concurrency::streams::details::basic_istream_helper<unsigned char> *>>,std::__shared_ptr<Concurrency::streams::details::basic_istream_helper<unsigned char> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Concurrency::streams::details::basic_istream_helper<unsigned char> *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_26DDB54;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


int __fastcall std::_Function_base::_Base_manager<AddPlayerPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


void __fastcall __noreturn std::make_exception_ptr<web::http::http_exception>(int a1, int a2)
{
  int v2; // r6@1
  char *v3; // r5@1
  int v4; // r3@1

  v2 = a2;
  v3 = j_j___cxa_allocate_exception_0(16);
  *(_DWORD *)v3 = &off_276B6AC;
  *(_QWORD *)(v3 + 4) = *(_QWORD *)(v2 + 4);
  sub_21E8AF4((int *)v3 + 3, (int *)(v2 + 12));
  j_j___cxa_throw_0(
    (int)v3,
    (int)&`typeinfo for'web::http::http_exception,
    (int)web::http::http_exception::~http_exception,
    v4);
}


int __fastcall std::_Function_base::_Base_manager<serialize<ShulkerBoxRecipe>::write(ShulkerBoxRecipe const&,BinaryStream &)::{lambda(BinaryStream &,ItemInstance const&)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


void __fastcall std::swap<InputHandler::InputHandlerState>(int a1, int a2)
{
  std::swap<InputHandler::InputHandlerState>(a1, a2);
}


int __fastcall std::_Function_base::_Base_manager<serialize<GameRulesChangedPacketData>::read(ReadOnlyBinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<Concurrency::streams::details::streambuf_state_manager<char>::ungetc(void)::{lambda(int)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<std::string *,std::__shared_ptr<std::string,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::string>>,std::__shared_ptr<std::string,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::string>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<std::string *,std::__shared_ptr<std::string,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::string>>,std::__shared_ptr<std::string,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::string>>>(
           a1,
           a2);
}


int __fastcall std::__detail::_NFA<std::regex_traits<char>>::_M_insert_line_begin(int a1)
{
  int v1; // r4@1
  unsigned __int64 *v2; // r8@1
  __int64 v3; // kr00_8@1
  int v4; // r2@2
  int v5; // r5@2
  int v6; // r6@2
  int v7; // r7@2
  __int64 v8; // kr08_8@2
  void (*v9)(void); // r2@2
  int v10; // r2@2
  int v11; // r6@2
  int v12; // r4@4
  int v14; // [sp+0h] [bp-40h]@1
  int v15; // [sp+4h] [bp-3Ch]@1
  int v16; // [sp+8h] [bp-38h]@2
  int v17; // [sp+Ch] [bp-34h]@2
  int v18; // [sp+10h] [bp-30h]@2
  __int64 v19; // [sp+14h] [bp-2Ch]@2
  void (*v20)(void); // [sp+1Ch] [bp-24h]@1
  int v21; // [sp+20h] [bp-20h]@2

  v1 = a1;
  v14 = 3;
  v15 = -1;
  v20 = 0;
  v2 = (unsigned __int64 *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 36);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    std::vector<std::__detail::_State<std::regex_traits<char>>,std::allocator<std::__detail::_State<std::regex_traits<char>>>>::_M_emplace_back_aux<std::__detail::_State<std::regex_traits<char>>>(
      v2,
      (int)&v14);
    v11 = *(_DWORD *)(v1 + 36);
  }
  else
    v4 = v15;
    v5 = v16;
    v6 = v17;
    v7 = v18;
    *(_DWORD *)v3 = v14;
    *(_DWORD *)(v3 + 4) = v4;
    *(_DWORD *)(v3 + 8) = v5;
    *(_DWORD *)(v3 + 12) = v6;
    *(_DWORD *)(v3 + 16) = v7;
    *(_DWORD *)(v3 + 28) = 0;
    v8 = v19;
    v19 = *(_QWORD *)(v3 + 20);
    *(_QWORD *)(v3 + 20) = v8;
    v9 = v20;
    v20 = *(void (**)(void))(v3 + 28);
    *(_DWORD *)(v3 + 28) = v9;
    v10 = v21;
    v21 = *(_DWORD *)(v3 + 32);
    *(_DWORD *)(v3 + 32) = v10;
    v11 = *(_DWORD *)(a1 + 36) + 36;
    *(_DWORD *)(a1 + 36) = v11;
  v12 = *(_DWORD *)v2;
  if ( v20 )
    v20();
  return 954437177 * ((v11 - v12) >> 2) - 1;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  void *v1; // r4@1

  v1 = *(void **)(a1 + 16);
  (**(void (__fastcall ***)(_DWORD))v1)(*(_DWORD *)(a1 + 16));
  j_j_j__ZdlPv_3(v1);
}


void __fastcall std::__convert_to_v<float>(const char *a1, _DWORD *a2, _DWORD *a3)
{
  std::__convert_to_v<float>(a1, a2, a3);
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::RakWebSocketTests::RakWebSocket_DataFrame_Control_Fragmented_Interweaved(void)::{lambda(RakWebSocketDataFrame const&)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


void __fastcall std::default_delete<EndDragonFight>::operator()(int a1, int a2)
{
  int v2; // r11@1
  void *v3; // r0@2
  int v4; // r9@4
  __int64 v5; // r6@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int *v8; // r0@15
  void *v9; // r0@21

  v2 = a2;
  if ( a2 )
  {
    v3 = *(void **)(a2 + 80);
    if ( v3 )
      operator delete(v3);
    v4 = *(_DWORD *)(v2 + 16);
    if ( v4 )
    {
      std::_Rb_tree<char,std::pair<char const,PatternEntry>,std::_Select1st<std::pair<char const,PatternEntry>>,std::less<char>,std::allocator<std::pair<char const,PatternEntry>>>::_M_erase(
        v4 + 16,
        *(_DWORD *)(v4 + 24));
      v5 = *(_QWORD *)(v4 + 4);
      if ( (_DWORD)v5 != HIDWORD(v5) )
      {
        do
        {
          v8 = (int *)(*(_DWORD *)v5 - 12);
          if ( v8 != &dword_28898C0 )
          {
            v6 = (unsigned int *)(*(_DWORD *)v5 - 4);
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
              j_j_j_j__ZdlPv_9(v8);
          }
          LODWORD(v5) = v5 + 4;
        }
        while ( (_DWORD)v5 != HIDWORD(v5) );
        LODWORD(v5) = *(_DWORD *)(v4 + 4);
      }
      if ( (_DWORD)v5 )
        operator delete((void *)v5);
      operator delete((void *)v4);
    }
    *(_DWORD *)(v2 + 16) = 0;
    v9 = *(void **)(v2 + 4);
    if ( v9 )
      operator delete(v9);
    operator delete((void *)v2);
  }
}


void __fastcall std::_Destroy<xbox::services::multiplayer::multiplayer_activity_details>(int a1)
{
  std::_Destroy<xbox::services::multiplayer::multiplayer_activity_details>(a1);
}


void __fastcall std::swap<Realms::RealmsConfigInfo::Version>(int a1, int a2)
{
  int v2; // r4@1
  int *v3; // r6@1
  __int64 v4; // r1@1
  _QWORD *v5; // r7@1
  void *v6; // r0@1
  void *v7; // r0@2
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  int v12; // [sp+0h] [bp-28h]@1
  int v13; // [sp+4h] [bp-24h]@1
  __int64 v14; // [sp+8h] [bp-20h]@1

  v2 = a2;
  v12 = *(_DWORD *)a1;
  *(_DWORD *)a1 = &unk_28898CC;
  v3 = (int *)(a1 + 4);
  v13 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  v5 = (_QWORD *)(a1 + 8);
  LODWORD(v4) = *(_DWORD *)(a1 + 8);
  HIDWORD(v4) = *(_DWORD *)(a1 + 12);
  v14 = v4;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)a1,
    (int *)v2);
    v3,
    (int *)(v2 + 4));
  *v5 = *(_QWORD *)(v2 + 8);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id((int *)v2, &v12);
    (int *)(v2 + 4),
    (int *)((unsigned int)&v12 | 4));
  *(_QWORD *)(v2 + 8) = v14;
  v6 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


int __fastcall std::_Function_base::_Base_manager<CraftingEventPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#2}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_dispose(int a1)
{
  void *v1; // r4@1

  v1 = *(void **)(a1 + 16);
  (**(void (__fastcall ***)(_DWORD))v1)(*(_DWORD *)(a1 + 16));
  j_j_j__ZdlPv_3(v1);
}


int __fastcall __noreturn std::__detail::_Scanner<char>::_M_scan_in_brace(int a1)
{
  int v1; // r4@1
  __int64 i; // r0@1
  _BYTE *v3; // r1@3
  int v4; // r3@3
  int *v5; // r5@7
  int v6; // r1@9
  __int64 v7; // r2@9
  char v8; // r7@9
  int v9; // r6@9
  int v10; // r0@12

  v1 = a1;
  i = *(_QWORD *)(a1 + 148);
  if ( (_DWORD)i == HIDWORD(i) )
    sub_119E4A8(6);
  HIDWORD(i) = i + 1;
  *(_DWORD *)(v1 + 148) = i + 1;
  v4 = *(_BYTE *)i;
  if ( !(*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v1 + 156) + 24) + v4) & 4) )
  {
    if ( v4 == 44 )
    {
      LODWORD(i) = 26;
LABEL_6:
      *(_DWORD *)(v1 + 132) = i;
      return i;
    }
    if ( *(_WORD *)(v1 + 128) & 0x120 )
      if ( v4 == 92 && v3 != *(_BYTE **)(v1 + 152) && *v3 == 125 )
      {
        LODWORD(i) = i + 2;
        *(_DWORD *)(v1 + 124) = 0;
        *(_DWORD *)(v1 + 132) = 13;
        *(_DWORD *)(v1 + 148) = i;
        return i;
      }
    else if ( v4 == 125 )
      *(_DWORD *)(v1 + 124) = 0;
      LODWORD(i) = 13;
      goto LABEL_6;
    sub_119E4D8(7);
  }
  *(_DWORD *)(v1 + 132) = 27;
  v5 = (int *)(v1 + 160);
  sub_119CB38((const void **)(v1 + 160), 0, *(_BYTE **)(*(_DWORD *)(v1 + 160) - 12), (_BYTE *)1, v4);
  for ( i = *(_QWORD *)(v1 + 148); (_DWORD)i != HIDWORD(i); i = *(_QWORD *)(v1 + 148) )
    if ( !(*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v1 + 156) + 24) + *(_BYTE *)i) & 4) )
      break;
    *(_DWORD *)(v1 + 148) = i + 1;
    HIDWORD(i) = *(_DWORD *)(v1 + 160);
    v7 = *(_QWORD *)(HIDWORD(i) - 12);
    v8 = *(_BYTE *)i;
    v9 = v7 + 1;
    if ( (unsigned int)(v7 + 1) > HIDWORD(v7) || *(_DWORD *)(v6 - 4) >= 1 )
      sub_119CAF8((const void **)(v1 + 160), v7 + 1);
      v6 = *v5;
      LODWORD(v7) = *(_DWORD *)(*v5 - 12);
    *(_BYTE *)(v6 + v7) = v8;
    v10 = *v5;
    if ( (int *)(*v5 - 12) != &dword_28898C0 )
      *(_DWORD *)(v10 - 4) = 0;
      *(_DWORD *)(v10 - 12) = v9;
      *(_BYTE *)(v10 + v9) = byte_26C67B8[0];
  return i;
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>::~_Impl(void *ptr)
{
  void *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = ptr;
  *(_DWORD *)ptr = &off_26D51AC;
  v2 = *((_DWORD *)ptr + 2);
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
  j_j_j__ZdlPv_3(v1);
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>::~_Impl(void *ptr)
{
  std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>::~_Impl(ptr);
}


void __fastcall std::_Destroy<xbox::services::user_statistics::service_configuration_statistic>(int a1)
{
  std::_Destroy<xbox::services::user_statistics::service_configuration_statistic>(a1);
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::xbox_live_context *,std::__shared_ptr<xbox::services::xbox_live_context *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<xbox::services::xbox_live_context *>>,std::__shared_ptr<xbox::services::xbox_live_context *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    *(_DWORD *)v3);
  v7 = v13;
  v13 = *(_DWORD *)(v3 + 4);
  v6 = v13;
  *(_DWORD *)(v3 + 4) = v7;
  if ( v6 )
  {
    v8 = (unsigned int *)(v6 + 4);
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
      v10 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  }
  return v3;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<Social::XboxProfile>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<RequestTelemetry *,std::__shared_ptr<RequestTelemetry *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<RequestTelemetry *>>,std::__shared_ptr<RequestTelemetry *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    *(_DWORD *)v4);
  v9 = v15;
  v15 = *(_DWORD *)(v4 + 4);
  v8 = v15;
  *(_DWORD *)(v4 + 4) = v9;
  if ( v8 )
  {
    v10 = (unsigned int *)(v8 + 4);
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
      v12 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  return v4;
}


void __fastcall std::__convert_to_v<float>(const char *a1, _DWORD *a2, _DWORD *a3)
{
  const char *v3; // r5@1
  _DWORD *v4; // r6@1
  _DWORD *v5; // r9@1
  char *v6; // r0@1
  char *v7; // r8@1
  unsigned int v8; // r7@2
  void *v9; // r4@2
  char *endptr; // [sp+4h] [bp-24h]@3

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = j_setlocale(6, 0);
  v7 = v6;
  if ( v6 )
  {
    v8 = j_strlen_2(v6) + 1;
    v9 = j_operator new[](v8);
    j_memcpy(v9, v7, v8);
    j_setlocale(6, "C");
  }
  else
    v9 = 0;
  _R0 = COERCE_UNSIGNED_INT64(j_strtod_0(v3, &endptr));
  __asm
    VMOV            D7, R0, R1
    VCVT.F32.F64    S15, D7
    VSTR            S15, [R6]
  if ( _ZF || *endptr )
    *v4 = 0;
    *v5 = 4;
    __asm
    {
      VABS.F32        S14, S15
      VLDR            S13, =3.4028e38
      VCMP.F32        S14, S13
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !_ZF & _CF )
      goto LABEL_19;
      VCMPE.F32       S15, S13
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      VLDR            S14, =-3.4028e38
      VCMPE.F32       S15, S14
    if ( _NF )
LABEL_19:
      __asm
      {
        VCMPE.F32       S15, #0.0
        VLDR            S15, =3.4028e38
        VLDR            S14, =-3.4028e38
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        __asm { VMOVLE.F32      S15, S14 }
      __asm { VSTR            S15, [R6] }
      *v5 = 4;
  j_setlocale(6, (const char *)v9);
  if ( v9 )
    j_operator delete[](v9);
}


void __fastcall std::swap<InviteScreenController::friendEntry>(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  int v10; // [sp+0h] [bp-20h]@1
  int v11; // [sp+4h] [bp-1Ch]@1
  int v12; // [sp+8h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  v10 = *(_DWORD *)a1;
  *(_DWORD *)a1 = &unk_28898CC;
  v11 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  v12 = *(_DWORD *)(a1 + 8);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id((int *)a1, a2);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v2 + 4),
    v3 + 1);
  *(_DWORD *)(v2 + 8) = v3[2];
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v10);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3 + 1, &v11);
  v3[2] = v12;
  v4 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v11 - 4);
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
      j_j_j_j_j__ZdlPv_9_2(v4);
  }
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v5);
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<BaseRailBlock::Rail *,std::__shared_ptr<BaseRailBlock::Rail *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<BaseRailBlock::Rail *>>,std::__shared_ptr<BaseRailBlock::Rail *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<BaseRailBlock::Rail *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &loc_27048A4;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


int __fastcall std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>(int a1, int a2, _DWORD *a3)
{
  return std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>(
           a1,
           a2,
           a3);
}


int __fastcall std::__future_base::_Result<std::string>::~_Result(int a1)
{
  int v1; // r4@1
  int v2; // r1@2
  void *v3; // r0@2
  unsigned int *v5; // r12@4
  signed int v6; // r1@6

  v1 = a1;
  *(_DWORD *)a1 = &off_26DFB08;
  if ( *(_BYTE *)(a1 + 12) )
  {
    v2 = *(_DWORD *)(a1 + 8);
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
        j_j_j_j_j__ZdlPv_9_1(v3);
    }
  }
  sub_119EDCC(v1);
  return v1;
}


int __fastcall std::swap<ItemInstance>(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int result; // r0@5
  int v5; // [sp+0h] [bp-58h]@1
  int v6; // [sp+8h] [bp-50h]@5
  void *v7; // [sp+24h] [bp-34h]@3
  void *ptr; // [sp+34h] [bp-24h]@1

  v2 = a1;
  v3 = a2;
  ItemInstance::ItemInstance((ItemInstance *)&v5, a1);
  ItemInstance::operator=(v2, v3);
  ItemInstance::operator=(v3, (int)&v5);
  if ( ptr )
    operator delete(ptr);
  if ( v7 )
    operator delete(v7);
  result = v6;
  if ( v6 )
    result = (*(int (**)(void))(*(_DWORD *)v6 + 4))();
  return result;
}


void __fastcall std::default_delete<Certificate>::operator()(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@2
  int v4; // r1@2
  int v5; // r1@4

  v2 = a2;
  if ( a2 )
  {
    v3 = a2 + 64;
    v4 = *(_DWORD *)(a2 + 64);
    if ( v4 )
      std::default_delete<Certificate>::operator()(v3, v4);
    *(_DWORD *)(v2 + 64) = 0;
    v5 = *(_DWORD *)(v2 + 56);
    if ( v5 )
      std::default_delete<UnverifiedCertificate>::operator()(v2 + 56, v5);
    *(_DWORD *)(v2 + 56) = 0;
    WebToken::~WebToken((WebToken *)v2);
    j_j_j__ZdlPv_4((void *)v2);
  }
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<web::http::details::_http_response *,std::__shared_ptr<web::http::details::_http_response *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<web::http::details::_http_response *>>,std::__shared_ptr<web::http::details::_http_response *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<web::http::details::_http_response *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_26DE188;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


int __fastcall std::_Function_base::_Base_manager<serialize<ShapelessRecipe>::read(ReadOnlyBinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


unsigned int __fastcall std::swap<KeyboardMapper::KeyboardMappingData>(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1
  int *v4; // r1@1
  int v5; // r4@1
  unsigned int v6; // r10@1
  int v7; // r0@1
  __int64 v8; // r2@1
  int v9; // r4@1
  int v10; // t1@1
  int v11; // r9@1
  int *v12; // r7@2
  int v13; // r4@6
  int *v14; // r7@6
  int v15; // r0@8
  unsigned int v16; // r1@9
  int v17; // r0@9
  int v18; // r6@11
  unsigned int result; // r0@14
  unsigned int v20; // r0@15
  int v21; // r1@15
  int v22; // [sp+4h] [bp-4h]@1
  int *v23; // [sp+8h] [bp+0h]@1
  int v24; // [sp+10h] [bp+8h]@1
  int v25; // [sp+14h] [bp+Ch]@1
  __int64 v26; // [sp+18h] [bp+10h]@1
  int v27; // [sp+20h] [bp+18h]@3

  v2 = a1;
  v3 = a2;
  v4 = *(int **)a1;
  v5 = a1;
  v23 = v4;
  v6 = *(_DWORD *)(a1 + 4);
  v7 = *(_DWORD *)(a1 + 8);
  v24 = v7;
  v22 = *(_DWORD *)(v5 + 12);
  v25 = *(_DWORD *)(v5 + 12);
  v10 = *(_DWORD *)(v5 + 16);
  v9 = v5 + 16;
  LODWORD(v8) = v10;
  v11 = v9 + 8;
  HIDWORD(v8) = *(_DWORD *)(v9 + 4);
  v26 = v8;
  if ( (int *)(v9 + 8) == v4 )
  {
    v12 = &v27;
    v23 = &v27;
    v27 = *v4;
  }
  else
    v12 = v4;
  if ( v7 )
    v12[*(_DWORD *)(v7 + 4) % v6] = (int)&v24;
  *(_DWORD *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  *(_DWORD *)v2 = v11;
  *(_DWORD *)(v2 + 4) = 1;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  *(_QWORD *)v9 = *(_QWORD *)(v3 + 16);
  v13 = v3 + 24;
  v14 = *(int **)v3;
  if ( v3 + 24 == *(_DWORD *)v3 )
    *(_DWORD *)v2 = v11;
    v15 = *v14;
    v14 = (int *)v11;
    *(_DWORD *)(v2 + 24) = v15;
    *(_DWORD *)v2 = v14;
  v16 = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v2 + 4) = v16;
  v17 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v2 + 8) = v17;
  *(_DWORD *)(v2 + 12) = *(_DWORD *)(v3 + 12);
  if ( v17 )
    v14[*(_DWORD *)(v17 + 4) % v16] = v2 + 8;
  *(_DWORD *)(v3 + 4) = 1;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)v3 = v13;
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_QWORD *)(v3 + 16) = v26;
  v18 = (int)v23;
  if ( &v27 == v23 )
    *(_DWORD *)v3 = v13;
    v18 = v3 + 24;
    *(_DWORD *)(v3 + 24) = v27;
    *(_DWORD *)v3 = v23;
  *(_DWORD *)(v3 + 4) = v6;
  result = v24;
  *(_DWORD *)(v3 + 8) = v24;
  *(_DWORD *)(v3 + 12) = v22;
  if ( result )
    v20 = *(_DWORD *)(result + 4);
    v21 = v20 % v6;
    result = v20 / v6;
    *(_DWORD *)(v18 + 4 * v21) = v3 + 8;
  return result;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<ServerFormBindingInformation *,std::__shared_ptr<ServerFormBindingInformation *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<ServerFormBindingInformation *>>,std::__shared_ptr<ServerFormBindingInformation *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<ServerFormBindingInformation *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<ServerFormBindingInformation *,std::__shared_ptr<ServerFormBindingInformation *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<ServerFormBindingInformation *>>,std::__shared_ptr<ServerFormBindingInformation *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<ServerFormBindingInformation *>>>(
           a1,
           a2);
}


std::bad_array_new_length *__fastcall std::bad_array_new_length::~bad_array_new_length(std::bad_array_new_length *this)
{
  std::bad_array_new_length *v1; // r4@1

  v1 = this;
  j_std::bad_array_new_length::~bad_array_new_length(this);
  j_operator delete((void *)v1);
  return v1;
}


signed int __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_bracket_expression(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  int v3; // r0@1
  signed int result; // r0@3
  int v5; // r0@5
  int v6; // r0@10
  char v7; // r1@14
  int v8; // r0@22

  v1 = a1;
  v2 = a1 + 12;
  v3 = *(_DWORD *)(a1 + 144);
  if ( v3 == 9 )
  {
    EntityInteraction::setInteractText((int *)(v1 + 228), (int *)(v1 + 172));
    if ( (unsigned int)*(_QWORD *)(v1 + 160) == *(_QWORD *)(v1 + 160) >> 32 )
    {
      *(_DWORD *)(v1 + 144) = 28;
    }
    else
      v6 = *(_DWORD *)(v1 + 136);
      if ( v6 == 2 )
      {
        std::__detail::_Scanner<char>::_M_scan_in_bracket(v2);
      }
      else
        if ( v6 == 1 )
          std::__detail::_Scanner<char>::_M_scan_in_brace(v2);
        if ( !v6 )
          std::__detail::_Scanner<char>::_M_scan_normal(v2);
    v7 = 0;
  }
  else
    if ( v3 != 10 )
      return 0;
      v7 = 1;
      v5 = *(_DWORD *)(v1 + 136);
      if ( v5 == 2 )
        v7 = 1;
        if ( v5 == 1 )
        if ( !v5 )
  v8 = *(_DWORD *)v1 & 8;
  if ( *(_DWORD *)v1 & 1 )
    if ( v8 )
      std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_bracket_matcher<true,true>(v1, v7);
      result = 1;
      std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_bracket_matcher<true,false>(v1, v7);
  else if ( v8 )
    std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_bracket_matcher<false,true>(v1, v7);
    result = 1;
    std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_bracket_matcher<false,false>(v1, v7);
  return result;
}


void __noreturn std::terminate(void)
{
  void (*v0)(void); // r0@1

  v0 = (void (*)(void))j_std::get_terminate();
  j___cxxabiv1::__terminate(v0);
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::xbox_live_context_settings *>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<xbox::services::xbox_live_context_settings *>(
           a1,
           a2);
}


void __noreturn std::terminate(void)
{
  std::terminate();
}


int __fastcall std::__basic_future<std::string>::_M_get_result(int *a1)
{
  int v1; // r0@1
  int v2; // r4@2
  unsigned int v3; // r7@2
  std::__exception_ptr::exception_ptr *v5; // r0@4
  char v6; // [sp+4h] [bp-1Ch]@4
  int v7; // [sp+8h] [bp-18h]@2

  v1 = *a1;
  if ( !v1 )
    sub_119ED9C(3);
  v2 = std::__future_base::_State_baseV2::wait(v1);
  v7 = 0;
  v3 = std::__exception_ptr::operator==((_DWORD *)(v2 + 4), &v7);
  std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v7);
  if ( !v3 )
  {
    v5 = std::__exception_ptr::exception_ptr::exception_ptr(
           (std::__exception_ptr::exception_ptr *)&v6,
           (const std::__exception_ptr::exception_ptr *)(v2 + 4));
    std::rethrow_exception(v5);
  }
  return v2;
}


    if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(v2) == 1 )
{
      v10 = (_BYTE **)(v2 + 228);
      v9 = *(_BYTE **)(v2 + 228);
      if ( *((_DWORD *)v9 - 1) >= 0 )
      {
        sub_119CB68((const void **)(v2 + 228));
        v9 = *v10;
      }
      v11 = *v9;
      if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(v2) == 1 )
        v12 = *v10;
        if ( *((_DWORD *)*v10 - 1) >= 0 )
        {
          sub_119CB68((const void **)(v2 + 228));
          v12 = *v10;
        }
        if ( *v12 == 45 )
          if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(v2) == 1 )
          {
            v13 = *v10;
            if ( *((_DWORD *)*v10 - 1) >= 0 )
            {
              sub_119CB68((const void **)(v2 + 228));
              v13 = *v10;
            }
            v14 = *v13;
            j_j_j__ZNSt8__detail15_BracketMatcherISt12regex_traitsIcELb1ELb1EE13_M_make_rangeEcc(v5);
            return;
          }
          if ( *(_DWORD *)(v2 + 144) != 11 )
            sub_119E4A8(8);
        v17 = *v10;
          v17 = *v10;
        v18 = *v17;
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_add_char(v5);
      j_j_j__ZNSt8__detail15_BracketMatcherISt12regex_traitsIcELb1ELb1EE11_M_add_charEc(v5);
      return;
    }
    if ( *(_DWORD *)(v2 + 144) != 14 )
      sub_119E4D8(4);
    EntityInteraction::setInteractText((int *)(v2 + 228), (int *)(v2 + 172));
    if ( (unsigned int)*(_QWORD *)(v2 + 160) == *(_QWORD *)(v2 + 160) >> 32 )
    {
      *(_DWORD *)(v2 + 144) = 28;
    else
      v15 = *(_DWORD *)(v2 + 136);
      if ( v15 == 2 )
        std::__detail::_Scanner<char>::_M_scan_in_bracket(v3);
      else
        if ( v15 == 1 )
          std::__detail::_Scanner<char>::_M_scan_in_brace(v3);
        if ( !v15 )
          std::__detail::_Scanner<char>::_M_scan_normal(v3);
    v19 = *(_BYTE **)(v2 + 228);
    v20 = *(_DWORD *)(v2 + 8);
    if ( *((_DWORD *)v19 - 1) >= 0 )
      sub_119CB68((const void **)(v2 + 228));
      v19 = *(_BYTE **)(v2 + 228);
    v21 = *(_BYTE *)(*(_DWORD *)(v20 + 24) + *v19);
    v16 = std::regex_traits<char>::lookup_classname<char const*>(
            *(_DWORD *)(v5 + 88),
            v19,
            &v19[*((_DWORD *)v19 - 3)],
            1);
    v24 = v16;
    v22 = v21 & 1;
    if ( !(v16 & 0x3FF) )
      sub_119E4A8(1);
    if ( v22 )
      v23 = *(_QWORD *)(v5 + 72);
      if ( (_DWORD)v23 == HIDWORD(v23) )
        std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::_M_emplace_back_aux<std::regex_traits<char>::_RegexMask const&>(
          (unsigned __int64 *)(v5 + 68),
          &v24);
        *(_WORD *)v23 = v16;
        *(_DWORD *)(v5 + 72) += 2;
LABEL_47:
    *(_WORD *)(v5 + 80) = (unsigned __int8)(*(_BYTE *)(v5 + 80) | v16) | (unsigned __int16)((*(_BYTE *)(v5 + 81) | (v16 >> 8)) << 8);
    return;
  }
  EntityInteraction::setInteractText((int *)(v2 + 228), (int *)(v2 + 172));
  if ( (unsigned int)*(_QWORD *)(v2 + 160) == *(_QWORD *)(v2 + 160) >> 32 )
  {
    *(_DWORD *)(v2 + 144) = 28;
  else
    v8 = *(_DWORD *)(v2 + 136);
    if ( v8 == 2 )
      std::__detail::_Scanner<char>::_M_scan_in_bracket(v3);
      if ( v8 == 1 )
        std::__detail::_Scanner<char>::_M_scan_in_brace(v3);
      if ( !v8 )
        std::__detail::_Scanner<char>::_M_scan_normal(v3);
  j_j_j__ZNSt8__detail15_BracketMatcherISt12regex_traitsIcELb1ELb1EE24_M_add_equivalence_classERKSs(
    v5,
    (_BYTE **)(v2 + 228));
}


int __fastcall std::_Function_base::_Base_manager<serialize<GameRulesChangedPacketData>::write(GameRulesChangedPacketData const&,BinaryStream &)::{lambda(BinaryStream &,GameRulesChangedPacketData::NamedRule const&)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<FileDataResponse *,std::__shared_ptr<FileDataResponse *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<FileDataResponse *>>,std::__shared_ptr<FileDataResponse *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<FileDataResponse *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<FileDataResponse *,std::__shared_ptr<FileDataResponse *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<FileDataResponse *>>,std::__shared_ptr<FileDataResponse *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<FileDataResponse *>>>(
           a1,
           a2);
}


int std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_get_deleter()
{
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<bool>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


  std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)
{
    (int)&v19,
    &v14);
  v17 = v15;
  v18 = v16;
  v15 = 0;
  v16 = 0;
  sub_DA7434(v2, (int)&v17);
  v3 = v18;
  if ( v18 )
  {
    v4 = (unsigned int *)(v18 + 4);
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
  v8 = v16;
  if ( v16 )
    v9 = (unsigned int *)(v16 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return v2;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<web::http::details::_http_response *,std::__shared_ptr<web::http::details::_http_response *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<web::http::details::_http_response *>>,std::__shared_ptr<web::http::details::_http_response *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<web::http::details::_http_response *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<web::http::details::_http_response *,std::__shared_ptr<web::http::details::_http_response *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<web::http::details::_http_response *>>,std::__shared_ptr<web::http::details::_http_response *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<web::http::details::_http_response *>>>(
           a1,
           a2);
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIScreenControllerEventTests::UI_HandleEventButtonWithSubController(void)::{lambda(UIPropertyBag *)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


void __fastcall std::make_exception_ptr<web::http::oauth1::experimental::oauth1_exception>(int a1, int a2)
{
  int v2; // r6@1
  char *v3; // r5@1
  int v4; // r3@1

  v2 = a2;
  v3 = j_j___cxa_allocate_exception_0(8);
  *(_DWORD *)v3 = &off_276BAD4;
  sub_21E8AF4((int *)v3 + 1, (int *)(v2 + 4));
  j_j___cxa_throw_0(
    (int)v3,
    (int)&`typeinfo for'web::http::oauth1::experimental::oauth1_exception,
    (int)web::http::oauth1::experimental::oauth1_exception::~oauth1_exception,
    v4);
}


void __fastcall std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>::~_Impl(void *ptr)
{
  std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#3} ()(void)>>::~_Impl(ptr);
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIDefRepositoryTests::UIDefRepository_LoadDefsListWithExtraBrace_ExpectException(void)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


void __fastcall std::swap<AutoCompleteOption>(int a1, int *a2)
{
  int *v2; // r11@1
  int v3; // r8@1
  int *v4; // r10@1
  int *v5; // r9@1
  int v6; // r4@1
  int v7; // r5@1
  int v8; // r6@1
  int v9; // r7@1
  int v10; // r2@1
  int v11; // r3@1
  int v12; // r5@1
  int v13; // r6@1
  int v14; // r1@1
  int v15; // r2@1
  int v16; // r3@1
  int v17; // r6@1
  void *v18; // r0@1
  void *v19; // r0@2
  void *v20; // r0@3
  unsigned int *v21; // r2@5
  signed int v22; // r1@7
  unsigned int *v23; // r2@9
  signed int v24; // r1@11
  unsigned int *v25; // r2@13
  signed int v26; // r1@15
  int v27; // [sp+4h] [bp-4Ch]@1
  int v28; // [sp+8h] [bp-48h]@1
  int v29; // [sp+Ch] [bp-44h]@1
  int v30; // [sp+10h] [bp-40h]@1
  int v31; // [sp+14h] [bp-3Ch]@1
  int v32; // [sp+18h] [bp-38h]@1
  int v33; // [sp+1Ch] [bp-34h]@1
  int v34; // [sp+20h] [bp-30h]@1
  char v35; // [sp+24h] [bp-2Ch]@1

  v2 = a2;
  v27 = *(_DWORD *)a1;
  *(_DWORD *)a1 = &unk_28898CC;
  v3 = a1 + 12;
  v4 = (int *)(a1 + 4);
  v28 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  v5 = (int *)(a1 + 8);
  v29 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = &unk_28898CC;
  v6 = *(_DWORD *)(a1 + 16);
  v7 = *(_DWORD *)(a1 + 20);
  v8 = *(_DWORD *)(a1 + 24);
  v9 = *(_DWORD *)(a1 + 28);
  v30 = *(_DWORD *)(a1 + 12);
  v31 = v6;
  v32 = v7;
  v33 = v8;
  v34 = v9;
  v35 = *(_BYTE *)(a1 + 32);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id((int *)a1, a2);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v4, v2 + 1);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v5, v2 + 2);
  v10 = v2[4];
  v11 = v2[5];
  v12 = v2[6];
  v13 = v2[7];
  *(_DWORD *)v3 = v2[3];
  *(_DWORD *)(v3 + 4) = v10;
  *(_DWORD *)(v3 + 8) = v11;
  *(_DWORD *)(v3 + 12) = v12;
  *(_DWORD *)(v3 + 16) = v13;
  *(_BYTE *)(v3 + 20) = *((_BYTE *)v2 + 32);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v2, &v27);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v2 + 1, &v28);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v2 + 2, &v29);
  v14 = v31;
  v15 = v32;
  v16 = v33;
  v17 = v34;
  v2[3] = v30;
  v2[4] = v14;
  v2[5] = v15;
  v2[6] = v16;
  v2[7] = v17;
  *((_BYTE *)v2 + 32) = v35;
  v18 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v29 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  }
  v19 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v28 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v27 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(ptr);
}


pthread_mutex_t *__fastcall std::shared_timed_mutex::lock_shared(pthread_mutex_t *mutex)
{
  pthread_mutex_t *v1; // r4@1
  int v2; // r0@2
  int v3; // r0@4
  int v4; // r0@5
  pthread_mutex_t *result; // r0@7
  bool v6; // zf@7
  pthread_mutex_t *mutexa; // [sp+4h] [bp-1Ch]@1
  unsigned __int8 v8; // [sp+8h] [bp-18h]@1

  v1 = mutex;
  mutexa = mutex;
  v8 = 0;
  if ( &pthread_create )
  {
    v2 = j_pthread_mutex_lock_0(mutex);
    if ( v2 )
      sub_21E5E14(v2);
  }
  v8 = 1;
  while ( 1 )
    v3 = v1->__kind;
    if ( v3 >= 0 )
    {
      v4 = v3 & 0x7FFFFFFF;
      if ( v4 != 0x7FFFFFFF )
        break;
    }
    sub_21E03B8((pthread_cond_t *)&v1->__count, &mutexa);
  v1->__kind = v4 + 1;
  result = (pthread_mutex_t *)v8;
  v6 = v8 == 0;
  if ( v8 )
    result = mutexa;
    v6 = mutexa == 0;
  if ( !v6 )
    if ( &pthread_create )
      j_pthread_mutex_unlock_0(result);
    result = 0;
    v8 = 0;
  return result;
}


void __fastcall __noreturn std::make_exception_ptr<std::future_error>(int a1, int a2)
{
  int v2; // r6@1
  char *v3; // r5@1
  __int64 v4; // kr00_8@2

  v2 = a2;
  v3 = j___cxa_allocate_exception(16);
  *(_DWORD *)v3 = &off_2773868;
  sub_DA73B4((int *)v3 + 1, (int *)(v2 + 4));
  *(_DWORD *)v3 = &off_2773ED8;
  v4 = *(_QWORD *)(v2 + 8);
  *((_QWORD *)v3 + 1) = v4;
  j___cxa_throw((int)v3, (int)&off_2773F3C, (int)sub_21E6038, SHIDWORD(v4));
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<ResourceLoadManager::ResourceLoadTask *,std::__shared_ptr<ResourceLoadManager::ResourceLoadTask *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<ResourceLoadManager::ResourceLoadTask *>>,std::__shared_ptr<ResourceLoadManager::ResourceLoadTask *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<ResourceLoadManager::ResourceLoadTask *>>>(_DWORD *a1, int a2)
{
  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<ResourceLoadManager::ResourceLoadTask *,std::__shared_ptr<ResourceLoadManager::ResourceLoadTask *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<ResourceLoadManager::ResourceLoadTask *>>,std::__shared_ptr<ResourceLoadManager::ResourceLoadTask *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<ResourceLoadManager::ResourceLoadTask *>>>(
           a1,
           a2);
}


    if ( std::regex_traits<char>::isctype(*(_DWORD *)(v3 + 88), v2, *(_WORD *)(v3 + 80)) )
{
      v15 = 1;
    }
    else
    {
      v17 = (const void **)(*(_QWORD *)(v3 + 44) >> 32);
      v18 = *(_QWORD *)(v3 + 44);
      std::regex_traits<char>::transform_primary<char *>((int)&v30, *(_DWORD *)(v3 + 88), (int)&v31, (int)&v32);
      v19 = std::__find_if<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
              v18,
              v17,
              (const void **)&v30);
      v20 = *(const void ***)(v3 + 48);
      v21 = (void *)(v30 - 12);
      if ( (int *)(v30 - 12) != &dword_28898C0 )
      {
        v28 = (unsigned int *)(v30 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
        }
        else
          v29 = (*v28)--;
        if ( v29 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v21);
      }
      if ( v19 == v20 )
        v22 = (_WORD *)(*(_QWORD *)(v3 + 68) >> 32);
        v23 = (_WORD *)*(_QWORD *)(v3 + 68);
        if ( v23 != v22 )
          v24 = (int)(v22 - 1);
          {
            v19 = (const void **)((unsigned int)v19 & 0xFFFF0000 | *v23);
            v25 = std::regex_traits<char>::isctype(*(_DWORD *)(v3 + 88), v31, (unsigned int)v19) ^ 1;
            v15 |= v25;
            if ( (_WORD *)v24 == v23 )
              break;
            ++v23;
          }
          while ( v25 != 1 );
      else
        v15 = 1;
  }
  else
  {
    v15 = 1;
  v26 = *(_BYTE *)(v3 + 92);
  if ( *(_BYTE *)(v3 + 92) )
    v26 = 1;
  return ((unsigned __int8)v26 ^ (unsigned __int8)v15) & 1;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftBindingFactoryMap::NullBindingFactory::getAreaBinding(std::string const&)const::{lambda(void)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


  std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)
{
    (int)&v19,
    &v14);
  v17 = v15;
  v18 = v16;
  v15 = 0;
  v16 = 0;
  sub_DA7434(v2, (int)&v17);
  v3 = v18;
  if ( v18 )
  {
    v4 = (unsigned int *)(v18 + 4);
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
  v8 = v16;
  if ( v16 )
    v9 = (unsigned int *)(v16 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return v2;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIScreenControllerBindTests::UI_BindIntInAnyCollection(void)::{lambda(std::string const&,int)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


    if ( std::regex_traits<char>::isctype(*(_DWORD *)(v2 + 88), v3, *(_WORD *)(v2 + 80)) )
{
      v16 = 1;
    }
    else
    {
      v28 = (const void **)(*(_QWORD *)(v2 + 44) >> 32);
      v29 = *(_QWORD *)(v2 + 44);
      std::regex_traits<char>::transform_primary<char *>((int)&v45, *(_DWORD *)(v2 + 88), (int)&v47, (int)&v48);
      v30 = std::__find_if<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
              v29,
              v28,
              (const void **)&v45);
      v31 = *(const void ***)(v2 + 48);
      v32 = (void *)(v45 - 12);
      if ( (int *)(v45 - 12) != &dword_28898C0 )
      {
        v43 = (unsigned int *)(v45 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v44 = __ldrex(v43);
          while ( __strex(v44 - 1, v43) );
        }
        else
          v44 = (*v43)--;
        if ( v44 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v32);
      }
      if ( v30 == v31 )
        v33 = (_WORD *)(*(_QWORD *)(v2 + 68) >> 32);
        v34 = (_WORD *)*(_QWORD *)(v2 + 68);
        if ( v34 != v33 )
          v35 = (int)(v33 - 1);
          {
            v30 = (const void **)((unsigned int)v30 & 0xFFFF0000 | *v34);
            v36 = std::regex_traits<char>::isctype(*(_DWORD *)(v2 + 88), v47, (unsigned int)v30) ^ 1;
            v37 = v35 == (_DWORD)v34;
            v16 |= v36;
            if ( (_WORD *)v35 != v34 )
            {
              ++v34;
              v37 = v36 == 1;
            }
          }
          while ( !v37 );
      else
        v16 = 1;
    v38 = (char *)s2 - 12;
    if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
      v41 = (unsigned int *)((char *)s2 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v38);
  }
  else
  {
    v16 = 1;
  v39 = *(_BYTE *)(v2 + 92);
  if ( *(_BYTE *)(v2 + 92) )
    v39 = 1;
  return ((unsigned __int8)v39 ^ (unsigned __int8)v16) & 1;
}


std::bad_cast *__fastcall std::bad_cast::~bad_cast(std::bad_cast *this)
{
  std::bad_cast *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_27727A8;
  j_std::exception::~exception();
  return v1;
}


  std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#2} ()(void)
{
    (int)&v19,
    &v14);
  v17 = v15;
  v18 = v16;
  v15 = 0;
  v16 = 0;
  sub_DA7434(v2, (int)&v17);
  v3 = v18;
  if ( v18 )
  {
    v4 = (unsigned int *)(v18 + 4);
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
  v8 = v16;
  if ( v16 )
    v9 = (unsigned int *)(v16 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return v2;
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<boost::asio::detail::posix_mutex *>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1
  __int64 v5; // r1@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x10u);
  HIDWORD(v5) = 1;
  LODWORD(v5) = &off_26D61F8;
  *(_QWORD *)v4 = v5;
  v4[2] = 1;
  v4[3] = v3;
  *v2 = v4;
  return v2;
}


std::bad_array_length *__fastcall std::bad_array_length::~bad_array_length(std::bad_array_length *this)
{
  std::bad_array_length *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2774008;
  j_std::bad_alloc::~bad_alloc(this);
  return v1;
}


int __fastcall std::_Function_base::_Base_manager<MinecraftUnitTest::UIScreenControllerEventTests::UI_HandleEventButton(void)::{lambda(UIPropertyBag *)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#5} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(ptr);
}


  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<std::__detail::_NFA<std::regex_traits<char>> *,std::__shared_ptr<std::__detail::_NFA<std::regex_traits<char>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<std::__detail::_NFA<std::regex_traits<char>> *>>,std::__shared_ptr<std::__detail::_NFA<std::regex_traits<char>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
    *(_DWORD *)v4);
  v11 = v17;
  v17 = *(_DWORD *)(v4 + 4);
  v10 = v17;
  *(_DWORD *)(v4 + 4) = v11;
  if ( v10 )
  {
    v12 = (unsigned int *)(v10 + 4);
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
      v14 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  }
  return v4;
}


int __fastcall std::move<SkinHandle>(int result, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, unsigned __int64 *a10)
{
  int v10; // r7@1
  int v11; // r8@1
  unsigned __int64 *v12; // r12@2
  int v13; // r10@2
  int v14; // r11@3
  int v15; // r9@8
  int v16; // r6@8
  int v17; // r3@9
  int v18; // r4@9
  int v19; // r5@9
  int v20; // r7@9
  unsigned __int64 *v22; // r5@12
  unsigned int v23; // r1@13
  int v30; // r3@15
  int v31; // r2@16
  int v32; // r4@16
  unsigned int v34; // r0@19
  int v37; // r2@21
  char *v38; // r2@23
  int v39; // [sp+8h] [bp-40h]@2
  int v40; // [sp+10h] [bp-38h]@3
  int v41; // [sp+14h] [bp-34h]@2
  int v42; // [sp+1Ch] [bp-2Ch]@1
  int v43; // [sp+20h] [bp-28h]@3

  v10 = a2;
  v42 = a3;
  v11 = -1431655765 * ((a6 - a7) >> 3) + -1431655765 * ((a4 - a2) >> 3) + 21 * ((a9 - a5) >> 2) - 21;
  if ( v11 <= 0 )
  {
    v32 = *a10 >> 32;
    v13 = *a10;
    v38 = (char *)a10 + 12;
    v12 = a10 + 1;
    goto LABEL_25;
  }
  v39 = result;
  v41 = a5;
  v12 = a10 + 1;
  v13 = *(_DWORD *)a10;
  do
    v43 = v10;
    v40 = a4;
    v14 = -1431655765 * ((a4 - v10) >> 3);
    if ( -1431655765 * ((*(_DWORD *)v12 - v13) >> 3) < v14 )
      v14 = -1431655765 * ((*(_DWORD *)v12 - v13) >> 3);
    if ( v14 >= v11 )
      v14 = v11;
    if ( 24 * v14 >= 1 )
    {
      v15 = v10;
      v16 = -1431655765 * (24 * v14 >> 3) + 1;
      do
      {
        v17 = *(_DWORD *)(v15 + 4);
        v18 = *(_DWORD *)(v15 + 8);
        v19 = *(_DWORD *)(v15 + 12);
        v20 = *(_DWORD *)(v15 + 16);
        *(_DWORD *)v13 = *(_DWORD *)v15;
        *(_DWORD *)(v13 + 4) = v17;
        *(_DWORD *)(v13 + 8) = v18;
        *(_DWORD *)(v13 + 12) = v19;
        *(_DWORD *)(v13 + 16) = v20;
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)(v13 + 20),
          (int *)(v15 + 20));
        --v16;
        v15 += 24;
        v13 += 24;
      }
      while ( v16 > 1 );
    }
    _R0 = v14 + -1431655765 * ((v43 - v42) >> 3);
    if ( _R0 < 0 )
      v23 = ~(~_R0 / 0x15u);
    else
      if ( _R0 < 21 )
        v22 = a10;
        a4 = v40;
        v12 = a10 + 1;
        v10 = v43 + 24 * v14;
        goto LABEL_16;
      _R1 = 818089009;
      __asm { SMMUL.W         R1, R0, R1 }
      v23 = ((signed int)_R1 >> 2) + (_R1 >> 31);
    v22 = a10;
    v30 = *(_DWORD *)(v41 + 4 * v23);
    v42 = v30;
    v41 += 4 * v23;
    v10 = v30 + 24 * (_R0 + -21 * v23);
    a4 = v30 + 504;
LABEL_16:
    v32 = *v22 >> 32;
    v31 = *v22;
    _R1 = v14 + -1431655765 * ((v31 - v32) >> 3);
    if ( _R1 < 0 )
      v34 = ~(~_R1 / 0x15u);
      if ( _R1 <= 20 )
        v13 = v31 + 24 * v14;
        goto LABEL_22;
      _R0 = 818089009;
      __asm { SMMUL.W         R0, R1, R0 }
      v34 = ((signed int)_R0 >> 2) + (_R0 >> 31);
    v37 = *((_DWORD *)v22 + 3);
    *((_DWORD *)v22 + 3) = v37 + 4 * v34;
    v32 = *(_DWORD *)(v37 + 4 * v34);
    *((_DWORD *)v22 + 1) = v32;
    *((_DWORD *)v22 + 2) = v32 + 504;
    v13 = v32 + 24 * (_R1 + -21 * v34);
LABEL_22:
    v11 -= v14;
    *(_DWORD *)v22 = v13;
  while ( v11 > 0 );
  result = v39;
  v38 = (char *)a10 + 12;
LABEL_25:
  *(_DWORD *)result = v13;
  *(_DWORD *)(result + 4) = v32;
  *(_DWORD *)(result + 8) = *(_DWORD *)v12;
  *(_DWORD *)(result + 12) = *(_DWORD *)v38;
  return result;
}


int std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushAndPopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#4} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_get_deleter()
{
  return 0;
}


int __fastcall std::__detail::_Scanner<char>::_M_scan_in_bracket(int a1)
{
  int v1; // r4@1
  __int64 v2; // kr00_8@1
  _BYTE *v3; // r0@3
  int v4; // r1@3
  int v5; // r1@8
  signed int v6; // r1@10
  char *v7; // r1@15 OVERLAPPED
  signed int v8; // r2@15
  _DWORD *v9; // r0@15
  const void **v10; // r0@18
  _BYTE *v11; // r2@18
  int result; // r0@24

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 148);
  if ( (_DWORD)v2 == HIDWORD(v2) )
    sub_119E4A8(4);
  v3 = (_BYTE *)(v2 + 1);
  *(_DWORD *)(v1 + 148) = v2 + 1;
  v4 = *(_BYTE *)v2;
  if ( v4 == 93 )
  {
    if ( !(*(_BYTE *)(v1 + 128) & 0x10) && *(_BYTE *)(v1 + 144) )
      goto LABEL_18;
    *(_DWORD *)(v1 + 132) = 11;
    *(_DWORD *)(v1 + 124) = 0;
  }
  else
    if ( v4 != 92 )
    {
      if ( v4 == 91 )
      {
        if ( v3 == *(_BYTE **)(v1 + 152) )
          sub_119E4A8(4);
        v5 = *v3;
        if ( v5 == 58 )
        {
          v6 = 15;
          goto LABEL_23;
        }
        if ( v5 == 46 )
          v6 = 16;
        if ( v5 == 61 )
          v6 = 17;
LABEL_23:
          *(_DWORD *)(v1 + 132) = v6;
          *(_DWORD *)(v1 + 148) = v2 + 2;
          std::__detail::_Scanner<char>::_M_eat_class(v1, *v3);
        *(_DWORD *)(v1 + 132) = 1;
        v10 = (const void **)(v1 + 160);
        v11 = *(_BYTE **)(*(_DWORD *)(v1 + 160) - 12);
        LOBYTE(v4) = 91;
        goto LABEL_19;
      }
LABEL_18:
      *(_DWORD *)(v1 + 132) = 1;
      v10 = (const void **)(v1 + 160);
      v11 = *(_BYTE **)(*(_DWORD *)(v1 + 160) - 12);
LABEL_19:
      sub_119CB38(v10, 0, v11, (_BYTE *)1, v4);
      goto LABEL_24;
    }
    if ( !(*(_BYTE *)(v1 + 128) & 0x90) )
    *(_QWORD *)&v7 = *(_QWORD *)(v1 + 164);
    v9 = (_DWORD *)(v1 + (v8 >> 1));
    if ( v8 & 1 )
      v7 = *(char **)&v7[*v9];
    ((void (__fastcall *)(_DWORD *))v7)(v9);
LABEL_24:
  result = 0;
  *(_BYTE *)(v1 + 144) = 0;
  return result;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::matchmaking::hopper_statistics_response>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::matchmaking::hopper_statistics_response>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<web::websockets::client::details::wspp_callback_client::connect(void)::{lambda(std::weak_ptr<void>,boost::asio::ssl::stream<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>> &)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  _DWORD *v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'web::websockets::client::details::wspp_callback_client::connect(void)::{lambda(std::weak_ptr<void>,boost::asio::ssl::stream<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>> &)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<TransactionStatus>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


  std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>,std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PushOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)
{
    (int)&v19,
    &v14);
  v17 = v15;
  v18 = v16;
  v15 = 0;
  v16 = 0;
  sub_DA7434(v2, (int)&v17);
  v3 = v18;
  if ( v18 )
  {
    v4 = (unsigned int *)(v18 + 4);
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
  v8 = v16;
  if ( v16 )
    v9 = (unsigned int *)(v16 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return v2;
}


  return std::__shared_count<(__gnu_cxx::_Lock_policy)
{
           a2);
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *,std::__shared_ptr<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *>>,std::__shared_ptr<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_26EC03C;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


void __fastcall std::swap<TextureAtlasTile>(int *a1, int a2)
{
  std::swap<TextureAtlasTile>(a1, a2);
}


int __fastcall std::__future_base::_Result<void>::_M_destroy(int result)
{
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 8))();
  return result;
}


int __fastcall std::_Function_base::_Base_manager<pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::social::xbox_social_relationship_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1}>::_M_manager(void **a1, void ***a2, int a3)
{
  void ***v3; // r5@1
  void **v4; // r4@1
  void **v5; // r0@2
  void *v7; // r0@6

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
      v5 = &`typeinfo for'pplx::details::_Task_impl<xbox::services::xbox_live_result<xbox::services::social::xbox_social_relationship_result>>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<pplx::details::_ExceptionHolder> const&)::{lambda(void)#1};
      goto LABEL_5;
    case 1:
      v5 = *a2;
    case 2:
      v5 = (void **)j_operator new(4u);
      *v5 = **v3;
LABEL_5:
      *v4 = v5;
      return 0;
    case 3:
      v7 = *a1;
      if ( *v4 )
        j_operator delete(v7);
      break;
    default:
  }
  return 0;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::ServiceLocatorTests::ServiceLocator_SetServiceOnSeperateThreadsWithServicesSetOnEachThread_UsesCorrectServicesOnEachThread(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::_M_destroy(ptr);
}


_DWORD *__fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<RequestTelemetry *,std::__shared_ptr<RequestTelemetry *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<RequestTelemetry *>>,std::__shared_ptr<RequestTelemetry *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<RequestTelemetry *>>>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  v4 = operator new(0x14u);
  v4[1] = 1;
  v4[2] = 1;
  *v4 = &off_26DD3C4;
  v4[4] = v3;
  *v2 = v4;
  return v2;
}


int __fastcall std::_Function_base::_Base_manager<AddEntityPacket::write(BinaryStream &)const::{lambda(BinaryStream &,AttributeInstanceHandle const&)#1}>::_M_manager(void **a1, void **a2, int a3)
{
  void **v3; // r4@1
  void *v4; // r0@4
  void *v5; // r0@5

  v3 = a1;
  if ( a3 == 3 )
  {
    v5 = *a1;
    if ( *v3 )
      operator delete(v5);
    return 0;
  }
  if ( a3 == 2 )
    v4 = operator new(1u);
    goto LABEL_9;
  if ( a3 != 1 )
  v4 = *a2;
LABEL_9:
  *v3 = v4;
  return 0;
}


void __fastcall std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(void *ptr)
{
  std::_Sp_counted_deleter<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>> *,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>::_Deleter<std::allocator<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>>>,(std::__shared_ptr<std::thread::_Impl<std::_Bind_simple<MinecraftUnitTest::MPMCQueueTests::MPMCQueue_PopOnMultipleThreads_QueueHasExpectedSize(void)::{lambda(void)#1} ()(void)>>,(__gnu_cxx::_Lock_policy)2>)2>::~_Sp_counted_deleter(ptr);
}


std::bad_cast *__fastcall std::bad_cast::~bad_cast(std::bad_cast *this)
{
  std::bad_cast *v1; // r4@1

  v1 = this;
  j_std::bad_cast::~bad_cast(this);
  j_operator delete((void *)v1);
  return v1;
}


void __fastcall std::thread::_Impl_base::~_Impl_base(std::thread::_Impl_base *this)
{
  std::thread::_Impl_base *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_26D51AC;
  v2 = *((_DWORD *)this + 2);
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
  j_j_j__ZdlPv_3((void *)v1);
}


void __fastcall std::default_delete<SyncedPhotoView>::operator()(int a1, int a2)
{
  std::default_delete<SyncedPhotoView>::operator()(a1, a2);
}


int __fastcall std::promise<LevelArchiver::Result>::promise(int a1)
{
  int v1; // r5@1
  void *v2; // r0@1
  int v3; // r0@1

  v1 = a1;
  j__ZNSt12__shared_ptrINSt13__future_base13_State_baseV2ELN9__gnu_cxx12_Lock_policyE2EEC2ISaIS1_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_(a1);
  v2 = operator new(0x14u);
  v3 = sub_21E61FC((int)v2);
  *(_DWORD *)v3 = &off_2718978;
  *(_BYTE *)(v3 + 16) = 0;
  *(_DWORD *)(v1 + 8) = v3;
  return v1;
}


  return std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<MapDecoration *,std::__shared_ptr<MapDecoration *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<MapDecoration *>>,std::__shared_ptr<MapDecoration *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)
{
           a2);
}
