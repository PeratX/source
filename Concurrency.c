

void __fastcall pplx::details::_PPLTaskHandle<bool,pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>,pplx::details::_ContinuationTaskHandleBase>::invoke(int a1)
{
  pplx::details::_PPLTaskHandle<bool,pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>,pplx::details::_ContinuationTaskHandleBase>::invoke(a1);
}


int __fastcall Concurrency::streams::streambuf<char>::sbumpc(int a1)
{
  int v1; // r0@1

  v1 = Concurrency::streams::streambuf<char>::get_base(a1);
  return (*(int (**)(void))(**(_DWORD **)v1 + 68))();
}


unsigned int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::_getc(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r8@1
  int v4; // r4@2
  signed int v5; // r2@2
  __int64 v6; // r0@2
  int v7; // r5@2
  const void **v8; // r7@5
  int v9; // r6@6
  int v10; // r6@8
  int v11; // r4@15
  unsigned int result; // r0@15
  unsigned int *v13; // r1@16
  unsigned int *v14; // r5@22
  int v15; // [sp+0h] [bp-50h]@15
  int v16; // [sp+4h] [bp-4Ch]@15
  int v17; // [sp+8h] [bp-48h]@15
  int v18; // [sp+Ch] [bp-44h]@15
  char v19; // [sp+14h] [bp-3Ch]@15
  int v20; // [sp+18h] [bp-38h]@15
  int v21; // [sp+1Ch] [bp-34h]@15
  int v22; // [sp+20h] [bp-30h]@15
  int v23; // [sp+24h] [bp-2Ch]@15
  __int16 v24; // [sp+28h] [bp-28h]@15
  int v25; // [sp+30h] [bp-20h]@11
  int v26; // [sp+34h] [bp-1Ch]@15

  v2 = a2;
  v3 = a1;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 36))(a2) )
  {
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 36))(v2);
    HIDWORD(v6) = *(_DWORD *)(v2 + 24);
    v5 = 1;
    LODWORD(v6) = v4 != 0;
    v7 = v6 + HIDWORD(v6);
    if ( (signed int)v6 + HIDWORD(v6) >= (unsigned int)v6 )
      v5 = 0;
    if ( v5 )
      msl::safeint3::SafeIntInternal::SafeIntExceptionHandler<msl::safeint3::SafeIntException>::SafeIntOnOverflow();
    v8 = (const void **)(v2 + 20);
    LODWORD(v6) = *(_DWORD *)(v2 + 20);
    if ( *(_DWORD *)(v6 - 4) <= -1 )
    {
      v9 = v6 + HIDWORD(v6);
    }
    else
      sub_119CB68((const void **)(v2 + 20));
      v6 = *(_QWORD *)(v2 + 20);
      if ( *(_DWORD *)(v6 - 4) > -1 )
      {
        sub_119CB68(v8);
        LODWORD(v6) = *v8;
      }
    if ( (_DWORD)v6 + v7 != v9 )
      _aeabi_memmove(&v25, v9);
    if ( v4 )
      v10 = (unsigned __int8)v25;
      v10 = -1;
  }
  else
    v10 = -1;
  pplx::get_ambient_scheduler((pplx *)&v25);
  v11 = v26;
  v15 = v25;
  v16 = v26;
  v17 = v25;
  v18 = 0;
  v19 = 0;
  v24 = 0;
  v22 = 0;
  v23 = 0;
  v20 = 0;
  v21 = 0;
  result = pplx::task_from_result<int>(v3, v10, (int)&v15);
  if ( v11 )
    v13 = (unsigned int *)(v11 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  return result;
}


int __fastcall Concurrency::streams::streambuf<char>::putn(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r0@1

  v2 = a1;
  v3 = Concurrency::streams::streambuf<char>::get_base(a2);
  return (*(int (__fastcall **)(int))(**(_DWORD **)v3 + 56))(v2);
}


unsigned int __fastcall Concurrency::streams::streambuf<char>::close(pplx *a1, int a2)
{
  pplx *v2; // r6@1
  __int64 v3; // kr00_8@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@4
  unsigned int result; // r0@8
  int v7; // r5@9
  unsigned int *v8; // r1@10
  unsigned int *v9; // r6@16
  unsigned int *v10; // r1@24
  unsigned int *v11; // r5@30
  int v12; // [sp+0h] [bp-48h]@9
  int v13; // [sp+4h] [bp-44h]@9
  int v14; // [sp+8h] [bp-40h]@9
  int v15; // [sp+Ch] [bp-3Ch]@9
  char v16; // [sp+14h] [bp-34h]@9
  int v17; // [sp+18h] [bp-30h]@9
  int v18; // [sp+1Ch] [bp-2Ch]@9
  int v19; // [sp+20h] [bp-28h]@9
  int v20; // [sp+24h] [bp-24h]@9
  __int16 v21; // [sp+28h] [bp-20h]@9
  int v22; // [sp+2Ch] [bp-1Ch]@9
  int v23; // [sp+30h] [bp-18h]@9

  v2 = a1;
  v3 = *(_QWORD *)Concurrency::streams::streambuf<char>::get_base(a2);
  if ( HIDWORD(v3) )
  {
    v4 = (unsigned int *)(HIDWORD(v3) + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  if ( (_DWORD)v3 )
    result = (*(int (__fastcall **)(pplx *))(*(_DWORD *)v3 + 44))(v2);
  else
    pplx::get_ambient_scheduler((pplx *)&v22);
    v7 = v23;
    v12 = v22;
    v13 = v23;
    v14 = v22;
    v15 = 0;
    v16 = 0;
    v21 = 0;
    v19 = 0;
    v20 = 0;
    v17 = 0;
    v18 = 0;
    result = pplx::task_from_result(v2, (const pplx::task_options *)&v12);
    if ( v7 )
      v8 = (unsigned int *)(v7 + 4);
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
        v9 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
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
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
    v10 = (unsigned int *)(HIDWORD(v3) + 4);
        result = __ldrex(v10);
      while ( __strex(result - 1, v10) );
      result = (*v10)--;
    if ( result == 1 )
      v11 = (unsigned int *)(HIDWORD(v3) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 8))(HIDWORD(v3));
          result = __ldrex(v11);
        while ( __strex(result - 1, v11) );
        result = (*v11)--;
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 12))(HIDWORD(v3));
  return result;
}


int __fastcall Concurrency::streams::details::streambuf_state_manager<char>::scopy(int a1, int a2, int a3)
{
  int v3; // r6@1
  const std::__exception_ptr::exception_ptr *v4; // r7@1
  int v5; // r9@1
  int v6; // r8@1
  unsigned int v7; // r5@1
  int result; // r0@3
  std::__exception_ptr::exception_ptr *v9; // r0@5
  char v10; // [sp+4h] [bp-24h]@5
  int v11; // [sp+8h] [bp-20h]@1

  v3 = a1;
  v4 = (const std::__exception_ptr::exception_ptr *)(a1 + 12);
  v5 = a2;
  v11 = 0;
  v6 = a3;
  v7 = std::__exception_ptr::operator==((_DWORD *)(a1 + 12), &v11);
  std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v11);
  if ( !v7 )
  {
    v9 = std::__exception_ptr::exception_ptr::exception_ptr((std::__exception_ptr::exception_ptr *)&v10, v4);
    std::rethrow_exception(v9);
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3) == 1 )
    result = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v3 + 176))(v3, v5, v6);
  else
    result = 0;
  return result;
}


void __fastcall pplx::details::_PPLTaskHandle<bool,pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>,pplx::details::_ContinuationTaskHandleBase>::invoke(int a1)
{
  int v1; // r4@1
  int v2; // r7@1
  int v3; // r0@2
  signed int v4; // r6@4
  int v5; // r1@10

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 16);
  if ( &pthread_create )
  {
    v3 = pthread_mutex_lock((pthread_mutex_t *)(v2 + 20));
    if ( v3 )
      sub_119CCFC(v3);
  }
  if ( *(_DWORD *)(v2 + 4) == 2 )
    v4 = 0;
  else
    v4 = 1;
    *(_DWORD *)(v2 + 4) = 1;
    pthread_mutex_unlock((pthread_mutex_t *)(v2 + 20));
  if ( v4 )
    pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_Continue(v1);
    v5 = *(_DWORD *)(v1 + 24);
    (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(v1 + 16) + 8))(*(_DWORD *)(v1 + 16));
}


int __fastcall Concurrency::streams::details::streambuf_state_manager<char>::sbumpc(int a1)
{
  int v1; // r4@1
  const std::__exception_ptr::exception_ptr *v2; // r5@1
  unsigned int v3; // r7@1
  int result; // r0@3
  char v5; // r1@3
  std::__exception_ptr::exception_ptr *v6; // r0@7
  char v7; // [sp+4h] [bp-1Ch]@7
  int v8; // [sp+8h] [bp-18h]@1

  v1 = a1;
  v2 = (const std::__exception_ptr::exception_ptr *)(a1 + 12);
  v8 = 0;
  v3 = std::__exception_ptr::operator==((_DWORD *)(a1 + 12), &v8);
  std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v8);
  if ( !v3 )
  {
    v6 = std::__exception_ptr::exception_ptr::exception_ptr((std::__exception_ptr::exception_ptr *)&v7, v2);
    std::rethrow_exception(v6);
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1) == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 152))(v1);
    v5 = 0;
    if ( result == -1 )
      v5 = 1;
    *(_BYTE *)(v1 + 18) = v5;
  else
    result = -1;
  return result;
}


std::__exception_ptr::exception_ptr *__fastcall Concurrency::streams::details::streambuf_state_manager<char>::nextc(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  __int64 v4; // r1@2
  std::__exception_ptr::exception_ptr *result; // r0@2
  int v6; // r4@4
  unsigned int *v7; // r1@5
  unsigned int *v8; // r5@12
  void *v9; // [sp+4h] [bp-2Ch]@2
  __int64 v10; // [sp+Ch] [bp-24h]@2
  char v11; // [sp+14h] [bp-1Ch]@2
  int v12; // [sp+18h] [bp-18h]@4
  int v13; // [sp+1Ch] [bp-14h]@9

  v2 = a2;
  v3 = a1;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 8))(a2) )
  {
    (*(void (__fastcall **)(char *, int))(*(_DWORD *)v2 + 164))(&v11, v2);
    v9 = operator new(1u);
    LODWORD(v4) = std::_Function_base::_Base_manager<Concurrency::streams::details::streambuf_state_manager<char>::nextc(void)::{lambda(int)#1}>::_M_manager;
    HIDWORD(v4) = std::_Function_handler<bool ()(int),Concurrency::streams::details::streambuf_state_manager<char>::nextc(void)::{lambda(int)#1}>::_M_invoke;
    v10 = v4;
    result = (std::__exception_ptr::exception_ptr *)Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(
                                                      v3,
                                                      v2,
                                                      (int)&v11,
                                                      (int)&v9,
                                                      24);
    if ( (_DWORD)v10 )
      result = (std::__exception_ptr::exception_ptr *)((int (*)(void))v10)();
    v6 = v12;
    if ( v12 )
    {
      v7 = (unsigned int *)(v12 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (std::__exception_ptr::exception_ptr *)__ldrex(v7);
        while ( __strex((unsigned int)result - 1, v7) );
      }
      else
        result = (std::__exception_ptr::exception_ptr *)(*v7)--;
      if ( result == (std::__exception_ptr::exception_ptr *)1 )
        v8 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (std::__exception_ptr::exception_ptr *)__ldrex(v8);
          while ( __strex((unsigned int)result - 1, v8) );
        }
        else
          result = (std::__exception_ptr::exception_ptr *)(*v8)--;
        if ( result == (std::__exception_ptr::exception_ptr *)1 )
          result = (std::__exception_ptr::exception_ptr *)(*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
  }
  else
    v13 = -1;
    result = Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_value_task<int>(
               v3,
               v2,
               &v13);
  return result;
}


std::__exception_ptr::exception_ptr *__fastcall pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_LogWorkItemAndInvokeUserLambda<pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1} const&,pplx::task<bool>>(int a1, int a2, int a3, int a4)
{
  int v4; // r1@1
  std::__exception_ptr::exception_ptr *result; // r0@1
  int v6; // r4@1
  unsigned int *v7; // r1@2
  unsigned int *v8; // r5@8
  int v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+4h] [bp-14h]@1

  v9 = *(_DWORD *)a4;
  v4 = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(a4 + 4) = 0;
  v10 = v4;
  *(_DWORD *)a4 = 0;
  result = Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1}::operator() const(
             a1,
             a3,
             (pplx::details::_Task_impl_base **)&v9);
  v6 = v10;
  if ( v10 )
  {
    v7 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = (std::__exception_ptr::exception_ptr *)__ldrex(v7);
      while ( __strex((unsigned int)result - 1, v7) );
    }
    else
      result = (std::__exception_ptr::exception_ptr *)(*v7)--;
    if ( result == (std::__exception_ptr::exception_ptr *)1 )
      v8 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (std::__exception_ptr::exception_ptr *)__ldrex(v8);
        while ( __strex((unsigned int)result - 1, v8) );
      }
      else
        result = (std::__exception_ptr::exception_ptr *)(*v8)--;
      if ( result == (std::__exception_ptr::exception_ptr *)1 )
        result = (std::__exception_ptr::exception_ptr *)(*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  }
  return result;
}


pplx::task_options *__fastcall Concurrency::streams::details::streambuf_state_manager<char>::_close_read(pplx *a1, int a2)
{
  pplx *v2; // r4@1
  int v4; // [sp+0h] [bp-48h]@1
  int v5; // [sp+4h] [bp-44h]@1
  int v6; // [sp+8h] [bp-40h]@1
  int v7; // [sp+Ch] [bp-3Ch]@1
  char v8; // [sp+14h] [bp-34h]@1
  int v9; // [sp+18h] [bp-30h]@1
  int v10; // [sp+1Ch] [bp-2Ch]@1
  int v11; // [sp+20h] [bp-28h]@1
  int v12; // [sp+24h] [bp-24h]@1
  __int16 v13; // [sp+28h] [bp-20h]@1
  int v14; // [sp+30h] [bp-18h]@1
  int v15; // [sp+34h] [bp-14h]@1

  v2 = a1;
  *(_BYTE *)(a2 + 16) = 0;
  pplx::get_ambient_scheduler((pplx *)&v14);
  v4 = v14;
  v5 = v15;
  v6 = v14;
  v7 = 0;
  v8 = 0;
  v13 = 0;
  v11 = 0;
  v12 = 0;
  v9 = 0;
  v10 = 0;
  pplx::task_from_result(v2, (const pplx::task_options *)&v4);
  return pplx::task_options::~task_options((pplx::task_options *)&v4);
}


std::__exception_ptr::exception_ptr *__fastcall Concurrency::streams::details::streambuf_state_manager<char>::putc(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  __int64 v6; // r1@2
  std::__exception_ptr::exception_ptr *result; // r0@2
  int v8; // r4@4
  unsigned int *v9; // r1@5
  unsigned int *v10; // r5@12
  void *v11; // [sp+4h] [bp-2Ch]@2
  __int64 v12; // [sp+Ch] [bp-24h]@2
  char v13; // [sp+14h] [bp-1Ch]@2
  int v14; // [sp+18h] [bp-18h]@4
  int v15; // [sp+1Ch] [bp-14h]@9

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 12))(a2) )
  {
    (*(void (__fastcall **)(char *, int, int))(*(_DWORD *)v3 + 136))(&v13, v3, v5);
    v11 = operator new(1u);
    LODWORD(v6) = std::_Function_base::_Base_manager<Concurrency::streams::details::streambuf_state_manager<char>::putc(char)::{lambda(int)#1}>::_M_manager;
    HIDWORD(v6) = std::_Function_handler<bool ()(int),Concurrency::streams::details::streambuf_state_manager<char>::putc(char)::{lambda(int)#1}>::_M_invoke;
    v12 = v6;
    result = (std::__exception_ptr::exception_ptr *)Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(
                                                      v4,
                                                      v3,
                                                      (int)&v13,
                                                      (int)&v11,
                                                      24);
    if ( (_DWORD)v12 )
      result = (std::__exception_ptr::exception_ptr *)((int (*)(void))v12)();
    v8 = v14;
    if ( v14 )
    {
      v9 = (unsigned int *)(v14 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (std::__exception_ptr::exception_ptr *)__ldrex(v9);
        while ( __strex((unsigned int)result - 1, v9) );
      }
      else
        result = (std::__exception_ptr::exception_ptr *)(*v9)--;
      if ( result == (std::__exception_ptr::exception_ptr *)1 )
        v10 = (unsigned int *)(v8 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (std::__exception_ptr::exception_ptr *)__ldrex(v10);
          while ( __strex((unsigned int)result - 1, v10) );
        }
        else
          result = (std::__exception_ptr::exception_ptr *)(*v10)--;
        if ( result == (std::__exception_ptr::exception_ptr *)1 )
          result = (std::__exception_ptr::exception_ptr *)(*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
    }
  }
  else
    v15 = -1;
    result = Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_value_task<int>(
               v4,
               v3,
               &v15);
  return result;
}


unsigned int __fastcall pplx::task<bool>::then<pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1}>(int a1, _DWORD *a2, int a3)
{
  int v3; // lr@0
  int v4; // r6@1
  int v5; // r4@1
  _DWORD *v6; // r5@1
  __int64 v7; // r0@1
  int v8; // r0@5
  unsigned int *v9; // r1@6
  unsigned int v10; // r2@7
  unsigned int result; // r0@10
  int v12; // r4@10
  unsigned int *v13; // r1@11
  unsigned int *v14; // r5@17
  int v15; // [sp+0h] [bp-58h]@1
  void *ptr; // [sp+4h] [bp-54h]@1
  int v17; // [sp+8h] [bp-50h]@1
  int v18; // [sp+Ch] [bp-4Ch]@1
  int v19; // [sp+10h] [bp-48h]@1
  int v20; // [sp+14h] [bp-44h]@1
  int v21; // [sp+18h] [bp-40h]@1
  int v22; // [sp+1Ch] [bp-3Ch]@1
  char v23; // [sp+24h] [bp-34h]@1
  int v24; // [sp+28h] [bp-30h]@1
  void *v25; // [sp+2Ch] [bp-2Ch]@1
  int v26; // [sp+30h] [bp-28h]@1
  int v27; // [sp+34h] [bp-24h]@1
  __int16 v28; // [sp+38h] [bp-20h]@1
  int v29; // [sp+3Ch] [bp-1Ch]@1
  int v30; // [sp+40h] [bp-18h]@1

  v4 = a1;
  v5 = a3;
  v6 = a2;
  pplx::get_ambient_scheduler((pplx *)&v29);
  v19 = v29;
  v20 = v30;
  v21 = v29;
  v22 = 0;
  v28 = 0;
  v26 = 0;
  v27 = 0;
  v25 = 0;
  v17 = 0;
  v18 = 0;
  ptr = 0;
  v23 = 1;
  v15 = v3;
  v24 = v3;
  LODWORD(v7) = &v25;
  HIDWORD(v7) = (unsigned int)&v15 | 4;
  std::vector<void *,std::allocator<void *>>::operator=(v7);
  if ( ptr )
    operator delete(ptr);
  pplx::task<bool>::_ThenImpl<bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1}>(
    v4,
    v6,
    v5,
    (int)&v19);
  if ( v25 )
    operator delete(v25);
  v8 = v22;
  if ( v22 )
  {
    v9 = (unsigned int *)(v22 + 4);
    __dmb();
    do
      v10 = __ldrex(v9);
    while ( __strex(v10 - 1, v9) );
    if ( v10 == 1 )
      (*(void (**)(void))(*(_DWORD *)v8 + 8))();
  }
  result = 0;
  v12 = v20;
  if ( v20 )
    v13 = (unsigned int *)(v20 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
    }
    else
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  return result;
}


unsigned int __fastcall pplx::task<int>::then<pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1}>(int a1, _DWORD *a2, int a3)
{
  int v3; // lr@0
  int v4; // r6@1
  int v5; // r4@1
  _DWORD *v6; // r5@1
  __int64 v7; // r0@1
  int v8; // r0@5
  unsigned int *v9; // r1@6
  unsigned int v10; // r2@7
  unsigned int result; // r0@10
  int v12; // r4@10
  unsigned int *v13; // r1@11
  unsigned int *v14; // r5@17
  int v15; // [sp+0h] [bp-58h]@1
  void *ptr; // [sp+4h] [bp-54h]@1
  int v17; // [sp+8h] [bp-50h]@1
  int v18; // [sp+Ch] [bp-4Ch]@1
  int v19; // [sp+10h] [bp-48h]@1
  int v20; // [sp+14h] [bp-44h]@1
  int v21; // [sp+18h] [bp-40h]@1
  int v22; // [sp+1Ch] [bp-3Ch]@1
  char v23; // [sp+24h] [bp-34h]@1
  int v24; // [sp+28h] [bp-30h]@1
  void *v25; // [sp+2Ch] [bp-2Ch]@1
  int v26; // [sp+30h] [bp-28h]@1
  int v27; // [sp+34h] [bp-24h]@1
  __int16 v28; // [sp+38h] [bp-20h]@1
  int v29; // [sp+3Ch] [bp-1Ch]@1
  int v30; // [sp+40h] [bp-18h]@1

  v4 = a1;
  v5 = a3;
  v6 = a2;
  pplx::get_ambient_scheduler((pplx *)&v29);
  v19 = v29;
  v20 = v30;
  v21 = v29;
  v22 = 0;
  v28 = 0;
  v26 = 0;
  v27 = 0;
  v25 = 0;
  v17 = 0;
  v18 = 0;
  ptr = 0;
  v23 = 1;
  v15 = v3;
  v24 = v3;
  LODWORD(v7) = &v25;
  HIDWORD(v7) = (unsigned int)&v15 | 4;
  std::vector<void *,std::allocator<void *>>::operator=(v7);
  if ( ptr )
    operator delete(ptr);
  pplx::task<int>::_ThenImpl<int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1}>(
    v4,
    v6,
    v5,
    (int)&v19);
  if ( v25 )
    operator delete(v25);
  v8 = v22;
  if ( v22 )
  {
    v9 = (unsigned int *)(v22 + 4);
    __dmb();
    do
      v10 = __ldrex(v9);
    while ( __strex(v10 - 1, v9) );
    if ( v10 == 1 )
      (*(void (**)(void))(*(_DWORD *)v8 + 8))();
  }
  result = 0;
  v12 = v20;
  if ( v20 )
    v13 = (unsigned int *)(v20 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
    }
    else
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  return result;
}


int __fastcall Concurrency::streams::streambuf<char>::getpos(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r0@1

  v2 = a1;
  v3 = Concurrency::streams::streambuf<char>::get_base(a2);
  return (*(int (__fastcall **)(int))(**(_DWORD **)v3 + 96))(v2);
}


signed int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::read_byte(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r8@1
  int v4; // r6@2
  signed int v5; // r2@2
  __int64 v6; // r0@2
  int v7; // r9@2
  int v8; // r7@6
  signed int result; // r0@14
  unsigned __int8 v10; // [sp+3h] [bp-1Dh]@10

  v2 = a1;
  v3 = a2;
  if ( !(*(int (**)(void))(*(_DWORD *)a1 + 36))() )
    goto LABEL_19;
  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 36))(v2);
  HIDWORD(v6) = *(_DWORD *)(v2 + 24);
  v5 = 1;
  LODWORD(v6) = v4 != 0;
  v7 = v6 + HIDWORD(v6);
  if ( (signed int)v6 + HIDWORD(v6) >= (unsigned int)v6 )
    v5 = 0;
  if ( v5 )
    j_msl::safeint3::SafeIntInternal::SafeIntExceptionHandler<msl::safeint3::SafeIntException>::SafeIntOnOverflow();
  LODWORD(v6) = *(_DWORD *)(v2 + 20);
  if ( *(_DWORD *)(v6 - 4) <= -1 )
  {
    v8 = v6 + HIDWORD(v6);
  }
  else
    sub_21E8010((const void **)(v2 + 20));
    v6 = *(_QWORD *)(v2 + 20);
    if ( *(_DWORD *)(v6 - 4) > -1 )
    {
      sub_21E8010((const void **)(v2 + 20));
      LODWORD(v6) = *(_DWORD *)(v2 + 20);
    }
  if ( (_DWORD)v6 + v7 != v8 )
    j___aeabi_memmove_1((int)&v10, v8);
  if ( v3 == 1 )
    *(_DWORD *)(v2 + 24) = v7;
  if ( v4 )
    result = v10;
LABEL_19:
    result = -1;
  return result;
}


int __fastcall Concurrency::streams::streambuf<char>::in_avail(int a1)
{
  int v1; // r0@1

  v1 = Concurrency::streams::streambuf<char>::get_base(a1);
  return (*(int (**)(void))(**(_DWORD **)v1 + 36))();
}


unsigned int __fastcall pplx::task<int>::then<pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1}>(int a1, _DWORD *a2, int a3)
{
  return pplx::task<int>::then<pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1}>(
           a1,
           a2,
           a3);
}


int __fastcall Concurrency::streams::details::streambuf_state_manager<char>::~streambuf_state_manager(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = a1;
  *(_DWORD *)a1 = &off_26DD570;
  std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)(a1 + 12));
  v2 = *(_DWORD *)(v1 + 8);
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
  return v1;
}


int (**__fastcall pplx::task<bool>::_ThenImpl<bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1}>(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, _DWORD *a7, int a8))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  int *v8; // r6@1
  int *v9; // r9@1
  int v10; // r8@1
  int v11; // r1@2
  unsigned int *v12; // r1@5
  unsigned int v13; // r2@7
  int v14; // r4@10
  unsigned int *v15; // r1@11
  unsigned int v16; // r0@13
  unsigned int *v17; // r5@17
  unsigned int v18; // r0@19
  int v19; // r1@24
  __int64 v20; // r0@24
  int v21; // r5@24
  void *v22; // r7@24
  char *v24; // r4@25
  int v25; // r3@25
  int v26; // [sp+Ch] [bp-2Ch]@2
  int v27; // [sp+10h] [bp-28h]@2
  int v28; // [sp+14h] [bp-24h]@10

  v8 = a2;
  v9 = (int *)a1;
  v10 = a3;
  if ( !*a2 )
  {
    v24 = j___cxa_allocate_exception(8);
    *(_DWORD *)v24 = &off_26D7A9C;
    sub_119C884((void **)v24 + 1, "then() cannot be called on a default constructed task.");
    j___cxa_throw(
      (int)v24,
      (int)&`typeinfo for'pplx::invalid_operation,
      (int)pplx::invalid_operation::~invalid_operation,
      v25);
  }
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v26 = *(_DWORD *)a6;
  v11 = *(_DWORD *)(a6 + 4);
  v27 = *(_DWORD *)(a6 + 4);
  if ( !a4 )
    a4 = 2;
  if ( v11 )
    v12 = (unsigned int *)(v11 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
    }
    else
      ++*v12;
  v28 = *(_DWORD *)(a6 + 8);
  pplx::task<bool>::_CreateImpl(a1, a4, (int)&v26);
  v14 = v27;
  if ( v27 )
    v15 = (unsigned int *)(v27 + 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
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
  v19 = *v9;
  *(_BYTE *)(v19 + 8) = *(_BYTE *)(*v8 + 8);
  *(_BYTE *)(v19 + 9) = 1;
  *(_DWORD *)(v19 + 60) = *a7;
  LODWORD(v20) = v19 + 64;
  HIDWORD(v20) = a7 + 1;
  std::vector<void *,std::allocator<void *>>::operator=(v20);
  v21 = *v8;
  v22 = operator new(0x3Cu);
  pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_ContinuationTaskHandle(
    (int)v22,
    (int)v8,
    (int)v9,
    v10,
    a5,
    a8);
  return pplx::details::_Task_impl_base::_ScheduleContinuation(v21, (int)v22);
}


void __fastcall pplx::task<int>::_ThenImpl<int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1}>(int a1, _DWORD *a2, int a3, int a4)
{
  _DWORD *v4; // r6@1
  int v5; // r4@1
  int v6; // r7@1
  int v7; // r5@1
  int v8; // r11@3
  unsigned int *v9; // r0@4
  unsigned int v10; // r1@5
  unsigned int v11; // r1@7
  int v12; // r4@13
  int v13; // r8@13
  unsigned int *v14; // r0@14
  unsigned int v15; // r1@16
  int v16; // r0@18
  unsigned int *v17; // r1@19
  unsigned int v18; // r2@21
  int *v19; // r0@24
  int v20; // r9@27
  char *v21; // r6@27
  char *v22; // r5@27
  int v23; // r10@27
  int v24; // r1@28 OVERLAPPED
  int v25; // r2@28 OVERLAPPED
  signed int v26; // r0@28
  int v27; // r5@31
  int v28; // r0@33
  unsigned int *v29; // r0@35
  unsigned int v30; // r1@37
  signed int v31; // r6@40
  char *v32; // r7@40
  int v33; // r6@46
  unsigned int *v34; // r1@47
  unsigned int v35; // r0@49
  unsigned int *v36; // r7@53
  unsigned int v37; // r0@55
  unsigned int *v38; // r1@63
  unsigned int v39; // r0@65
  unsigned int *v40; // r5@69
  unsigned int v41; // r0@71
  char *v42; // r4@77
  int v43; // r3@77
  _DWORD *v44; // [sp+14h] [bp-54h]@24
  int v45; // [sp+18h] [bp-50h]@24
  int v46; // [sp+1Ch] [bp-4Ch]@12
  int v47; // [sp+20h] [bp-48h]@40
  void *ptr; // [sp+24h] [bp-44h]@40
  void *v49; // [sp+28h] [bp-40h]@40
  char *v50; // [sp+2Ch] [bp-3Ch]@40
  int v51; // [sp+30h] [bp-38h]@34
  int v52; // [sp+34h] [bp-34h]@34
  int v53; // [sp+38h] [bp-30h]@40
  char v54; // [sp+3Ch] [bp-2Ch]@44

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  if ( !*a2 )
  {
    v42 = j___cxa_allocate_exception(8);
    *(_DWORD *)v42 = &off_26D7A9C;
    sub_119C884((void **)v42 + 1, "then() cannot be called on a default constructed task.");
    j___cxa_throw(
      (int)v42,
      (int)&`typeinfo for'pplx::invalid_operation,
      (int)pplx::invalid_operation::~invalid_operation,
      v43);
  }
  if ( *(_BYTE *)(a4 + 40) )
    v8 = *(_DWORD *)(a4 + 12);
    if ( v8 )
    {
      v9 = (unsigned int *)(v8 + 4);
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
        v11 = __ldrex(v9);
      while ( __strex(v11 - 1, v9) );
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
    }
    else
      v8 = 2;
  else
    v8 = 0;
  v46 = v5;
  if ( *(_BYTE *)(v6 + 41) )
    v12 = *(_QWORD *)v6 >> 32;
    v13 = *(_QWORD *)v6;
    if ( v12 )
      v14 = (unsigned int *)(v12 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 + 1, v14) );
      }
      else
        ++*v14;
    v44 = v4;
    v45 = v7;
    v19 = (int *)(v6 + 8);
    v16 = *v4;
    v12 = *(_QWORD *)(*v4 + 48) >> 32;
    v13 = *(_QWORD *)(*v4 + 48);
      v17 = (unsigned int *)(v12 + 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 + 1, v17) );
        ++*v17;
    v19 = (int *)(v16 + 56);
  v20 = *v19;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( *(_BYTE *)(v6 + 20) )
    v24 = *(_QWORD *)(v6 + 24) >> 32;
    v23 = *(_QWORD *)(v6 + 24);
    v25 = *(_DWORD *)(v6 + 32);
    v26 = v25 - v24;
    if ( 0 != (v25 - v24) >> 2 )
      if ( (unsigned int)(v26 >> 2) >= 0x40000000 )
        sub_119C874();
      v21 = (char *)operator new(v26);
      *(_QWORD *)&v24 = *(_QWORD *)(v6 + 28);
    v27 = (v25 - v24) >> 2;
    if ( v27 )
      _aeabi_memmove4(v21, v24);
    v28 = (int)&v21[4 * v27];
    v22 = v21;
    v21 = (char *)v28;
  v51 = v13;
  v52 = v12;
  if ( v12 )
    v29 = (unsigned int *)(v12 + 4);
    if ( &pthread_create )
        v30 = __ldrex(v29);
      while ( __strex(v30 + 1, v29) );
      ++*v29;
  v31 = v21 - v22;
  v32 = 0;
  v53 = v20;
  v47 = v23;
  ptr = 0;
  v49 = 0;
  v50 = 0;
  if ( v31 >> 2 )
    if ( (unsigned int)(v31 >> 2) >= 0x40000000 )
      sub_119C874();
    ptr = operator new(v31);
    v49 = ptr;
    v32 = (char *)ptr + 4 * (v31 >> 2);
    v50 = (char *)ptr + 4 * (v31 >> 2);
    _aeabi_memmove4(ptr, v22);
    ptr = 0;
    v49 = 0;
    v50 = 0;
  v49 = v32;
  pplx::task<int>::_ThenImpl<int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1}>(
    v46,
    v44,
    v45,
    v8,
    (int)&v54,
    (int)&v51,
    &v47,
    0);
  if ( ptr )
    operator delete(ptr);
  v33 = v52;
  if ( v52 )
    v34 = (unsigned int *)(v52 + 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 == 1 )
      v36 = (unsigned int *)(v33 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 8))(v33);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 12))(v33);
  if ( v22 )
    operator delete(v22);
    v38 = (unsigned int *)(v12 + 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 == 1 )
      v40 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
}


std::__exception_ptr::exception_ptr *__fastcall Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1}::operator() const(int a1, int a2, pplx::details::_Task_impl_base **a3)
{
  pplx::details::_Task_impl_base **v3; // r6@1
  int v4; // r5@1
  int v5; // r9@1
  int v6; // r1@1
  int v7; // r0@2
  int v8; // r1@2
  unsigned int v9; // r7@3
  std::__exception_ptr::exception_ptr *result; // r0@4
  int v11; // r5@5
  unsigned int *v12; // r1@6
  unsigned int v13; // r0@8
  unsigned int *v14; // r4@12
  unsigned int v15; // r0@14
  int v16; // [sp+0h] [bp-A0h]@5
  int v17; // [sp+4h] [bp-9Ch]@5
  int v18; // [sp+8h] [bp-98h]@5
  int v19; // [sp+Ch] [bp-94h]@5
  char v20; // [sp+14h] [bp-8Ch]@5
  int v21; // [sp+18h] [bp-88h]@5
  int v22; // [sp+1Ch] [bp-84h]@5
  int v23; // [sp+20h] [bp-80h]@5
  int v24; // [sp+24h] [bp-7Ch]@5
  __int16 v25; // [sp+28h] [bp-78h]@5
  char v26; // [sp+2Ch] [bp-74h]@5
  int v27; // [sp+30h] [bp-70h]@3
  char v28; // [sp+34h] [bp-6Ch]@3
  int v29; // [sp+7Ch] [bp-24h]@5
  int v30; // [sp+80h] [bp-20h]@5

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = pplx::task<bool>::get(a3);
  if ( !*(_DWORD *)(v4 + 16) )
    sub_119C8E4();
  v7 = (*(int (__fastcall **)(int, int))(v4 + 20))(v4 + 8, v6);
  v8 = *(_DWORD *)v4;
  *(_BYTE *)(*(_DWORD *)v4 + 18) = v7;
  if ( v7
    && ((*(void (__fastcall **)(char *))(*(_DWORD *)v8 + 132))(&v28),
        v27 = 0,
        v9 = std::__exception_ptr::operator==(&v28, &v27),
        std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v27),
        std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v28),
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


void __fastcall pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::~_ContinuationTaskHandle(int a1)
{
  pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::~_ContinuationTaskHandle(a1);
}


int __fastcall Concurrency::streams::streambuf<char>::get_base(int a1)
{
  int result; // r0@1
  int v2; // t1@1
  char *v3; // r4@2
  int v4; // r3@2
  char v5; // [sp+4h] [bp-1Ch]@2

  v2 = *(_DWORD *)(a1 + 4);
  result = a1 + 4;
  if ( !v2 )
  {
    v3 = j___cxa_allocate_exception(8);
    sub_119C884((void **)&v5, "Invalid streambuf object");
    sub_119E3D8((int)v3, (int *)&v5);
    j___cxa_throw((int)v3, (int)&off_2773780, (int)sub_21D3000, v4);
  }
  return result;
}


void __fastcall Concurrency::streams::streambuf<char>::~streambuf(void *ptr)
{
  Concurrency::streams::streambuf<char>::~streambuf(ptr);
}


  return Concurrency::streams::details::streambuf_state_manager<char>::close(std::_Ios_Openmode)::{lambda(void)#2}::operator()
{
           *a2);
}


std::__exception_ptr::exception_ptr *__fastcall pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_LogWorkItemAndInvokeUserLambda<pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1} const&,pplx::task<int>>(int a1, int a2, int a3, int a4)
{
  return pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_LogWorkItemAndInvokeUserLambda<pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1} const&,pplx::task<int>>(
           a1,
           a2,
           a3,
           a4);
}


int __fastcall Concurrency::streams::details::streambuf_state_manager<char>::alloc(int a1)
{
  int v1; // r4@1
  int result; // r0@2
  char *v3; // r4@5
  int v4; // r3@5
  int v5; // [sp+4h] [bp-1Ch]@5

  v1 = a1;
  if ( *(_BYTE *)(a1 + 19) )
  {
    v3 = j___cxa_allocate_exception(8);
    sub_119C884((void **)&v5, "The buffer is already allocated, this maybe caused by overlap of stream read or write");
    sub_119E3E8((int)v3, &v5);
    j___cxa_throw((int)v3, (int)&off_27737FC, (int)sub_21D2DBC, v4);
  }
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 184))(a1);
  if ( result )
    *(_BYTE *)(v1 + 19) = 1;
  return result;
}


signed int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::seekpos(int a1, int a2, size_t a3, int a4, int a5, int a6, char a7)
{
  int v7; // r6@1
  int v8; // r4@1
  size_t v9; // r9@1
  char *v10; // r7@1
  size_t v11; // r0@3
  signed int v12; // r5@3
  bool v13; // cf@3
  signed int v14; // r0@3
  int v15; // r0@9
  bool v16; // zf@9
  signed int result; // r0@16

  v7 = a2;
  v8 = a1;
  v9 = a3;
  v10 = (char *)(a2 + 20);
  if ( a4 >= 0 )
  {
    if ( a7 & 8 )
    {
      v11 = *(_DWORD *)(*(_DWORD *)(a2 + 20) - 12);
      v12 = 0;
      v13 = a3 >= v11;
      v16 = a3 == v11;
      v14 = 0;
      if ( !v16 && v13 )
        v14 = 1;
      if ( a4 > 0 )
        v12 = 1;
      if ( !a4 )
        v12 = v14;
      v15 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 8))(a2);
      v16 = v12 == 0;
      if ( !v12 )
        v16 = v15 == 1;
      if ( v16 )
        goto LABEL_16;
    }
    if ( a7 & 0x10 && (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7) == 1 )
      if ( *(_DWORD *)(*(_DWORD *)v10 - 12) < v9 )
        sub_119E388(v10, v9, 0);
LABEL_16:
      result = 0;
      *(_DWORD *)(v7 + 24) = v9;
      *(_DWORD *)v8 = v9;
      *(_DWORD *)(v8 + 4) = 0;
      *(_DWORD *)(v8 + 8) = 0;
      return result;
  }
  result = -1;
  *(_DWORD *)v8 = -1;
  *(_DWORD *)(v8 + 4) = -1;
  *(_DWORD *)(v8 + 8) = 0;
  return result;
}


unsigned int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::_putc(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r8@1
  signed int v5; // r5@1
  int v6; // r0@2
  int *v7; // r6@2
  unsigned int v8; // r7@2
  int v9; // r4@8
  unsigned int result; // r0@8
  unsigned int *v11; // r1@9
  unsigned int *v12; // r5@15
  int v13; // [sp+0h] [bp-50h]@8
  int v14; // [sp+4h] [bp-4Ch]@8
  int v15; // [sp+8h] [bp-48h]@8
  int v16; // [sp+Ch] [bp-44h]@8
  char v17; // [sp+14h] [bp-3Ch]@8
  int v18; // [sp+18h] [bp-38h]@8
  int v19; // [sp+1Ch] [bp-34h]@8
  int v20; // [sp+20h] [bp-30h]@8
  int v21; // [sp+24h] [bp-2Ch]@8
  __int16 v22; // [sp+28h] [bp-28h]@8
  int v23; // [sp+30h] [bp-20h]@8
  int v24; // [sp+34h] [bp-1Ch]@8

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 12))(a2) == 1 )
  {
    v7 = (int *)(v3 + 20);
    v6 = *(_DWORD *)(v3 + 20);
    v8 = *(_DWORD *)(v3 + 24) + 1;
    if ( *(_DWORD *)(v6 - 12) < v8 )
    {
      sub_119E388((char *)(v3 + 20), *(_DWORD *)(v3 + 24) + 1, 0);
      v6 = *v7;
    }
    if ( *(_DWORD *)(v6 - 4) > -1 )
      sub_119CB68((const void **)(v3 + 20));
    *(_BYTE *)(v6 + *(_DWORD *)(v3 + 24)) = v5;
    *(_DWORD *)(v3 + 24) = v8;
  }
  else
    v5 = -1;
  pplx::get_ambient_scheduler((pplx *)&v23);
  v9 = v24;
  v13 = v23;
  v14 = v24;
  v15 = v23;
  v16 = 0;
  v17 = 0;
  v22 = 0;
  v20 = 0;
  v21 = 0;
  v18 = 0;
  v19 = 0;
  result = pplx::task_from_result<int>(v4, v5, (int)&v13);
  if ( v9 )
    v11 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = __ldrex(v11);
      while ( __strex(result - 1, v11) );
    else
      result = (*v11)--;
    if ( result == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
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
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  return result;
}


int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::_alloc(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r0@2
  int v5; // r7@2
  int result; // r0@6

  v2 = a1;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)a1 + 12))() == 1 )
  {
    v4 = *(_DWORD *)(v2 + 20);
    v5 = *(_DWORD *)(v2 + 24);
    if ( *(_DWORD *)(v4 - 12) < (unsigned int)(v5 + v3) )
    {
      sub_119E388((char *)(v2 + 20), v5 + v3, 0);
      v5 = *(_QWORD *)(v2 + 20) >> 32;
      v4 = *(_QWORD *)(v2 + 20);
    }
    if ( *(_DWORD *)(v4 - 4) >= 0 )
      sub_119CB68((const void **)(v2 + 20));
      v4 = *(_DWORD *)(v2 + 20);
    result = v4 + v5;
  }
  else
    result = 0;
  return result;
}


int __fastcall pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_ContinuationTaskHandle(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r4@1
  int v7; // r0@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r2@4
  int v10; // r0@7
  unsigned int *v11; // r0@8
  unsigned int v12; // r1@10

  v6 = a1;
  *(_DWORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 9) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26DD9A0;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a3;
  v7 = *(_DWORD *)(a3 + 4);
  *(_DWORD *)(v6 + 20) = v7;
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
  *(_DWORD *)v6 = &off_26DD988;
  *(_DWORD *)(v6 + 24) = *(_DWORD *)a2;
  v10 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(v6 + 28) = v10;
  if ( v10 )
    v11 = (unsigned int *)(v10 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
      ++*v11;
  Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1}::_Ios_Openmode(
    (_DWORD *)(v6 + 32),
    a4);
  *(_BYTE *)(v6 + 9) = 1;
  *(_DWORD *)(v6 + 12) = a6;
  return v6;
}


int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::seekoff(int result, int a2, __int64 a3, int a5)
{
  int (__fastcall *v4)(int); // lr@4
  __int64 v5; // r2@5
  int v6; // lr@7

  if ( a5 == 2 )
  {
    v4 = *(int (__fastcall **)(int))(*(_DWORD *)a2 + 104);
    v5 = a3 + *(_DWORD *)(*(_DWORD *)(a2 + 20) - 12);
    return v4(result);
  }
  if ( a5 == 1 )
    v6 = *(_DWORD *)(a2 + 24);
    result = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 104))(result);
  else
    if ( !a5 )
    {
      v4 = *(int (__fastcall **)(int))(*(_DWORD *)a2 + 104);
      return v4(result);
    }
    *(_DWORD *)result = -1;
    *(_DWORD *)(result + 4) = -1;
    *(_DWORD *)(result + 8) = 0;
  return result;
}


unsigned int __fastcall Concurrency::streams::details::streambuf_state_manager<char>::_close_write(pplx *a1, int a2)
{
  pplx *v2; // r5@1
  int v3; // r4@1
  unsigned int result; // r0@1
  unsigned int *v5; // r1@2
  unsigned int *v6; // r5@8
  int v7; // [sp+0h] [bp-48h]@1
  int v8; // [sp+4h] [bp-44h]@1
  int v9; // [sp+8h] [bp-40h]@1
  int v10; // [sp+Ch] [bp-3Ch]@1
  char v11; // [sp+14h] [bp-34h]@1
  int v12; // [sp+18h] [bp-30h]@1
  int v13; // [sp+1Ch] [bp-2Ch]@1
  int v14; // [sp+20h] [bp-28h]@1
  int v15; // [sp+24h] [bp-24h]@1
  __int16 v16; // [sp+28h] [bp-20h]@1
  int v17; // [sp+30h] [bp-18h]@1
  int v18; // [sp+34h] [bp-14h]@1

  v2 = a1;
  *(_BYTE *)(a2 + 17) = 0;
  pplx::get_ambient_scheduler((pplx *)&v17);
  v3 = v18;
  v7 = v17;
  v8 = v18;
  v9 = v17;
  v10 = 0;
  v11 = 0;
  v16 = 0;
  v14 = 0;
  v15 = 0;
  v12 = 0;
  v13 = 0;
  result = pplx::task_from_result(v2, (const pplx::task_options *)&v7);
  if ( v3 )
  {
    v5 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v5);
      while ( __strex(result - 1, v5) );
    }
    else
      result = (*v5)--;
    if ( result == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v6);
        while ( __strex(result - 1, v6) );
      }
      else
        result = (*v6)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  return result;
}


void __fastcall pplx::details::_PPLTaskHandle<bool,pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>,pplx::details::_ContinuationTaskHandleBase>::~_PPLTaskHandle(void *ptr)
{
  pplx::details::_PPLTaskHandle<bool,pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>,pplx::details::_ContinuationTaskHandleBase>::~_PPLTaskHandle(ptr);
}


std::__exception_ptr::exception_ptr *__fastcall Concurrency::streams::details::streambuf_state_manager<char>::getc(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  __int64 v4; // r1@2
  std::__exception_ptr::exception_ptr *result; // r0@2
  int v6; // r4@4
  unsigned int *v7; // r1@5
  unsigned int *v8; // r5@12
  void *v9; // [sp+4h] [bp-2Ch]@2
  __int64 v10; // [sp+Ch] [bp-24h]@2
  char v11; // [sp+14h] [bp-1Ch]@2
  int v12; // [sp+18h] [bp-18h]@4
  int v13; // [sp+1Ch] [bp-14h]@9

  v2 = a2;
  v3 = a1;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 8))(a2) )
  {
    (*(void (__fastcall **)(char *, int))(*(_DWORD *)v2 + 156))(&v11, v2);
    v9 = operator new(1u);
    LODWORD(v4) = std::_Function_base::_Base_manager<Concurrency::streams::details::streambuf_state_manager<char>::getc(void)::{lambda(int)#1}>::_M_manager;
    HIDWORD(v4) = std::_Function_handler<bool ()(int),Concurrency::streams::details::streambuf_state_manager<char>::getc(void)::{lambda(int)#1}>::_M_invoke;
    v10 = v4;
    result = (std::__exception_ptr::exception_ptr *)Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(
                                                      v3,
                                                      v2,
                                                      (int)&v11,
                                                      (int)&v9,
                                                      24);
    if ( (_DWORD)v10 )
      result = (std::__exception_ptr::exception_ptr *)((int (*)(void))v10)();
    v6 = v12;
    if ( v12 )
    {
      v7 = (unsigned int *)(v12 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (std::__exception_ptr::exception_ptr *)__ldrex(v7);
        while ( __strex((unsigned int)result - 1, v7) );
      }
      else
        result = (std::__exception_ptr::exception_ptr *)(*v7)--;
      if ( result == (std::__exception_ptr::exception_ptr *)1 )
        v8 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (std::__exception_ptr::exception_ptr *)__ldrex(v8);
          while ( __strex((unsigned int)result - 1, v8) );
        }
        else
          result = (std::__exception_ptr::exception_ptr *)(*v8)--;
        if ( result == (std::__exception_ptr::exception_ptr *)1 )
          result = (std::__exception_ptr::exception_ptr *)(*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
  }
  else
    v13 = -1;
    result = Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_value_task<int>(
               v3,
               v2,
               &v13);
  return result;
}


std::__exception_ptr::exception_ptr *__fastcall Concurrency::streams::details::streambuf_state_manager<char>::sync(pplx *a1, int a2)
{
  int v2; // r5@1
  pplx *v3; // r8@1
  __int64 v4; // r1@2
  std::__exception_ptr::exception_ptr *result; // r0@2
  int v6; // r4@2
  unsigned int *v7; // r1@3
  std::__exception_ptr::exception_ptr *v8; // r5@7
  unsigned int v9; // r7@7
  int v10; // r5@8
  unsigned int *v11; // r1@9
  int v12; // r5@13
  unsigned int *v13; // r1@14
  unsigned int v14; // r0@16
  unsigned int *v15; // r5@20
  unsigned int *v16; // r4@26
  unsigned int *v17; // r4@32
  unsigned int v18; // r0@34
  int v19; // r4@41
  unsigned int *v20; // r1@42
  unsigned int *v21; // r5@48
  int (__fastcall *v22)(int); // r1@54
  int v23; // r0@54
  char v24; // [sp+4h] [bp-ACh]@2
  void *v25; // [sp+8h] [bp-A8h]@2
  __int64 v26; // [sp+10h] [bp-A0h]@2
  char v27; // [sp+18h] [bp-98h]@2
  int v28; // [sp+1Ch] [bp-94h]@41
  char v29; // [sp+20h] [bp-90h]@2
  int v30; // [sp+24h] [bp-8Ch]@2
  int v31; // [sp+28h] [bp-88h]@13
  int v32; // [sp+2Ch] [bp-84h]@13
  int v33; // [sp+30h] [bp-80h]@13
  int v34; // [sp+34h] [bp-7Ch]@13
  char v35; // [sp+3Ch] [bp-74h]@13
  int v36; // [sp+40h] [bp-70h]@13
  int v37; // [sp+44h] [bp-6Ch]@13
  int v38; // [sp+48h] [bp-68h]@13
  int v39; // [sp+4Ch] [bp-64h]@13
  __int16 v40; // [sp+50h] [bp-60h]@13
  char v41; // [sp+54h] [bp-5Ch]@13
  int v42; // [sp+58h] [bp-58h]@8
  int v43; // [sp+5Ch] [bp-54h]@8
  int v44; // [sp+60h] [bp-50h]@8
  int v45; // [sp+64h] [bp-4Ch]@8
  char v46; // [sp+6Ch] [bp-44h]@8
  int v47; // [sp+70h] [bp-40h]@8
  int v48; // [sp+74h] [bp-3Ch]@8
  int v49; // [sp+78h] [bp-38h]@8
  int v50; // [sp+7Ch] [bp-34h]@8
  __int16 v51; // [sp+80h] [bp-30h]@8
  int v52; // [sp+84h] [bp-2Ch]@7
  int v53; // [sp+88h] [bp-28h]@8
  int v54; // [sp+8Ch] [bp-24h]@8
  int v55; // [sp+90h] [bp-20h]@13
  int v56; // [sp+94h] [bp-1Ch]@13

  v2 = a2;
  v3 = a1;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 12))(a2) )
  {
    (*(void (__fastcall **)(char *, int))(*(_DWORD *)v2 + 180))(&v27, v2);
    v25 = operator new(1u);
    LODWORD(v4) = std::_Function_base::_Base_manager<Concurrency::streams::details::streambuf_state_manager<char>::sync(void)::{lambda(bool)#1}>::_M_manager;
    HIDWORD(v4) = std::_Function_handler<bool ()(bool),Concurrency::streams::details::streambuf_state_manager<char>::sync(void)::{lambda(bool)#1}>::_M_invoke;
    v26 = v4;
    Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(
      (int)&v29,
      v2,
      (int)&v27,
      (int)&v25,
      24);
    result = (std::__exception_ptr::exception_ptr *)pplx::task<bool>::then<Concurrency::streams::details::streambuf_state_manager<char>::sync(void)::{lambda(bool)#2}>(
                                                      (int)v3,
                                                      (int *)&v29,
                                                      (int)&v24);
    v6 = v30;
    if ( v30 )
    {
      v7 = (unsigned int *)(v30 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (std::__exception_ptr::exception_ptr *)__ldrex(v7);
        while ( __strex((unsigned int)result - 1, v7) );
      }
      else
        result = (std::__exception_ptr::exception_ptr *)(*v7)--;
      if ( result == (std::__exception_ptr::exception_ptr *)1 )
        v15 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (std::__exception_ptr::exception_ptr *)__ldrex(v15);
          while ( __strex((unsigned int)result - 1, v15) );
        }
        else
          result = (std::__exception_ptr::exception_ptr *)(*v15)--;
        if ( result == (std::__exception_ptr::exception_ptr *)1 )
          result = (std::__exception_ptr::exception_ptr *)(*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
    if ( (_DWORD)v26 )
      result = (std::__exception_ptr::exception_ptr *)((int (*)(void))v26)();
    v19 = v28;
    if ( v28 )
      v20 = (unsigned int *)(v28 + 4);
          result = (std::__exception_ptr::exception_ptr *)__ldrex(v20);
        while ( __strex((unsigned int)result - 1, v20) );
        result = (std::__exception_ptr::exception_ptr *)(*v20)--;
        v21 = (unsigned int *)(v19 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
            result = (std::__exception_ptr::exception_ptr *)__ldrex(v21);
          while ( __strex((unsigned int)result - 1, v21) );
          result = (std::__exception_ptr::exception_ptr *)(*v21)--;
          v22 = *(int (__fastcall **)(int))(*(_DWORD *)v19 + 12);
          v23 = v19;
          return (std::__exception_ptr::exception_ptr *)v22(v23);
  }
  else
    v8 = (std::__exception_ptr::exception_ptr *)(v2 + 12);
    v52 = 0;
    v9 = std::__exception_ptr::operator==(v8, &v52);
    std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v52);
    if ( v9 == 1 )
      pplx::get_ambient_scheduler((pplx *)&v53);
      v10 = v54;
      v42 = v53;
      v43 = v54;
      v44 = v53;
      v45 = 0;
      v46 = 0;
      v51 = 0;
      v49 = 0;
      v50 = 0;
      v47 = 0;
      v48 = 0;
      pplx::task_from_result(v3, (const pplx::task_options *)&v42);
      result = 0;
      if ( v10 )
        v11 = (unsigned int *)(v10 + 4);
            result = (std::__exception_ptr::exception_ptr *)__ldrex(v11);
          while ( __strex((unsigned int)result - 1, v11) );
          result = (std::__exception_ptr::exception_ptr *)(*v11)--;
          v16 = (unsigned int *)(v10 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = (std::__exception_ptr::exception_ptr *)__ldrex(v16);
            while ( __strex((unsigned int)result - 1, v16) );
          }
          else
            result = (std::__exception_ptr::exception_ptr *)(*v16)--;
          if ( result == (std::__exception_ptr::exception_ptr *)1 )
            v22 = *(int (__fastcall **)(int))(*(_DWORD *)v10 + 12);
            v23 = v10;
            return (std::__exception_ptr::exception_ptr *)v22(v23);
    else
      std::__exception_ptr::exception_ptr::exception_ptr((std::__exception_ptr::exception_ptr *)&v41, v8);
      pplx::get_ambient_scheduler((pplx *)&v55);
      v12 = v56;
      v31 = v55;
      v32 = v56;
      v33 = v55;
      v34 = 0;
      v35 = 0;
      v40 = 0;
      v38 = 0;
      v39 = 0;
      v36 = 0;
      v37 = 0;
      pplx::task_from_exception<void,std::__exception_ptr::exception_ptr>(
        (int)v3,
        (const std::__exception_ptr::exception_ptr *)&v41,
        (int)&v31);
      if ( v12 )
        v13 = (unsigned int *)(v12 + 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 == 1 )
          v17 = (unsigned int *)(v12 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
      result = std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v41);
  return result;
}


void __fastcall pplx::task<bool>::_ThenImpl<bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1}>(int a1, _DWORD *a2, int a3, int a4)
{
  pplx::task<bool>::_ThenImpl<bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1}>(
    a1,
    a2,
    a3,
    a4);
}


void __fastcall pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::~_ContinuationTaskHandle(int a1)
{
  void *v1; // r0@1

  v1 = (void *)pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::~_ContinuationTaskHandle(a1);
  j_j_j__ZdlPv_4(v1);
}


void __fastcall Concurrency::streams::details::streambuf_state_manager<char>::~streambuf_state_manager(int a1)
{
  Concurrency::streams::details::streambuf_state_manager<char>::~streambuf_state_manager(a1);
}


unsigned int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::_nextc(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r8@1
  unsigned int v4; // r0@2
  unsigned int v5; // r4@2
  signed int v6; // r1@2
  int v7; // r6@10
  signed int v8; // r2@10
  __int64 v9; // r0@10
  int v10; // r4@10
  const void **v11; // r7@13
  int v12; // r5@14
  int v13; // r6@16
  int v14; // r5@23
  unsigned int result; // r0@23
  unsigned int *v16; // r1@24
  unsigned int *v17; // r4@30
  int v18; // [sp+0h] [bp-50h]@23
  int v19; // [sp+4h] [bp-4Ch]@23
  int v20; // [sp+8h] [bp-48h]@23
  int v21; // [sp+Ch] [bp-44h]@23
  char v22; // [sp+14h] [bp-3Ch]@23
  int v23; // [sp+18h] [bp-38h]@23
  int v24; // [sp+1Ch] [bp-34h]@23
  int v25; // [sp+20h] [bp-30h]@23
  int v26; // [sp+24h] [bp-2Ch]@23
  __int16 v27; // [sp+28h] [bp-28h]@23
  int v28; // [sp+30h] [bp-20h]@19
  int v29; // [sp+34h] [bp-1Ch]@23

  v2 = a2;
  v3 = a1;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 36))(a2) )
  {
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 36))(v2) != 0;
    v5 = v4 + *(_DWORD *)(v2 + 24);
    v6 = 1;
    if ( v5 >= v4 )
      v6 = 0;
    if ( v6 )
      goto LABEL_38;
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 20) - 4) >= 0 )
    {
      sub_119CB68((const void **)(v2 + 20));
      if ( *(_DWORD *)(*(_DWORD *)(v2 + 20) - 4) >= 0 )
        sub_119CB68((const void **)(v2 + 20));
    }
    *(_DWORD *)(v2 + 24) = v5;
  }
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v2 + 36))(v2) )
    v13 = -1;
    goto LABEL_23;
  v7 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 36))(v2);
  HIDWORD(v9) = *(_DWORD *)(v2 + 24);
  v8 = 1;
  LODWORD(v9) = v7 != 0;
  v10 = v9 + HIDWORD(v9);
  if ( (signed int)v9 + HIDWORD(v9) >= (unsigned int)v9 )
    v8 = 0;
  if ( v8 )
LABEL_38:
    msl::safeint3::SafeIntInternal::SafeIntExceptionHandler<msl::safeint3::SafeIntException>::SafeIntOnOverflow();
  v11 = (const void **)(v2 + 20);
  LODWORD(v9) = *(_DWORD *)(v2 + 20);
  if ( *(_DWORD *)(v9 - 4) <= -1 )
    v12 = v9 + HIDWORD(v9);
  else
    sub_119CB68((const void **)(v2 + 20));
    v9 = *(_QWORD *)(v2 + 20);
    if ( *(_DWORD *)(v9 - 4) > -1 )
      sub_119CB68(v11);
      LODWORD(v9) = *v11;
  if ( (_DWORD)v9 + v10 != v12 )
    _aeabi_memmove(&v28, v12);
  if ( v7 )
    v13 = (unsigned __int8)v28;
LABEL_23:
  pplx::get_ambient_scheduler((pplx *)&v28);
  v14 = v29;
  v18 = v28;
  v19 = v29;
  v20 = v28;
  v21 = 0;
  v22 = 0;
  v27 = 0;
  v25 = 0;
  v26 = 0;
  v23 = 0;
  v24 = 0;
  result = pplx::task_from_result<int>(v3, v13, (int)&v18);
  if ( v14 )
    v16 = (unsigned int *)(v14 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = __ldrex(v16);
      while ( __strex(result - 1, v16) );
    else
      result = (*v16)--;
    if ( result == 1 )
      v17 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v17);
        while ( __strex(result - 1, v17) );
      }
      else
        result = (*v17)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return result;
}


int __fastcall Concurrency::streams::streambuf<char>::is_eof(int a1)
{
  int v1; // r0@1

  v1 = Concurrency::streams::streambuf<char>::get_base(a1);
  return (*(int (**)(void))(**(_DWORD **)v1 + 24))();
}


void __fastcall pplx::task<bool>::_ThenImpl<bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1}>(int a1, _DWORD *a2, int a3, int a4)
{
  _DWORD *v4; // r6@1
  int v5; // r4@1
  int v6; // r7@1
  int v7; // r5@1
  int v8; // r11@3
  unsigned int *v9; // r0@4
  unsigned int v10; // r1@5
  unsigned int v11; // r1@7
  int v12; // r4@13
  int v13; // r8@13
  unsigned int *v14; // r0@14
  unsigned int v15; // r1@16
  int v16; // r0@18
  unsigned int *v17; // r1@19
  unsigned int v18; // r2@21
  int *v19; // r0@24
  int v20; // r9@27
  char *v21; // r6@27
  char *v22; // r5@27
  int v23; // r10@27
  int v24; // r1@28 OVERLAPPED
  int v25; // r2@28 OVERLAPPED
  signed int v26; // r0@28
  int v27; // r5@31
  int v28; // r0@33
  unsigned int *v29; // r0@35
  unsigned int v30; // r1@37
  signed int v31; // r6@40
  char *v32; // r7@40
  int v33; // r6@46
  unsigned int *v34; // r1@47
  unsigned int v35; // r0@49
  unsigned int *v36; // r7@53
  unsigned int v37; // r0@55
  unsigned int *v38; // r1@63
  unsigned int v39; // r0@65
  unsigned int *v40; // r5@69
  unsigned int v41; // r0@71
  char *v42; // r4@77
  int v43; // r3@77
  _DWORD *v44; // [sp+14h] [bp-54h]@24
  int v45; // [sp+18h] [bp-50h]@24
  int v46; // [sp+1Ch] [bp-4Ch]@12
  int v47; // [sp+20h] [bp-48h]@40
  void *ptr; // [sp+24h] [bp-44h]@40
  void *v49; // [sp+28h] [bp-40h]@40
  char *v50; // [sp+2Ch] [bp-3Ch]@40
  int v51; // [sp+30h] [bp-38h]@34
  int v52; // [sp+34h] [bp-34h]@34
  int v53; // [sp+38h] [bp-30h]@40
  char v54; // [sp+3Ch] [bp-2Ch]@44

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  if ( !*a2 )
  {
    v42 = j___cxa_allocate_exception(8);
    *(_DWORD *)v42 = &off_26D7A9C;
    sub_119C884((void **)v42 + 1, "then() cannot be called on a default constructed task.");
    j___cxa_throw(
      (int)v42,
      (int)&`typeinfo for'pplx::invalid_operation,
      (int)pplx::invalid_operation::~invalid_operation,
      v43);
  }
  if ( *(_BYTE *)(a4 + 40) )
    v8 = *(_DWORD *)(a4 + 12);
    if ( v8 )
    {
      v9 = (unsigned int *)(v8 + 4);
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
        v11 = __ldrex(v9);
      while ( __strex(v11 - 1, v9) );
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
    }
    else
      v8 = 2;
  else
    v8 = 0;
  v46 = v5;
  if ( *(_BYTE *)(v6 + 41) )
    v12 = *(_QWORD *)v6 >> 32;
    v13 = *(_QWORD *)v6;
    if ( v12 )
      v14 = (unsigned int *)(v12 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 + 1, v14) );
      }
      else
        ++*v14;
    v44 = v4;
    v45 = v7;
    v19 = (int *)(v6 + 8);
    v16 = *v4;
    v12 = *(_QWORD *)(*v4 + 48) >> 32;
    v13 = *(_QWORD *)(*v4 + 48);
      v17 = (unsigned int *)(v12 + 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 + 1, v17) );
        ++*v17;
    v19 = (int *)(v16 + 56);
  v20 = *v19;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( *(_BYTE *)(v6 + 20) )
    v24 = *(_QWORD *)(v6 + 24) >> 32;
    v23 = *(_QWORD *)(v6 + 24);
    v25 = *(_DWORD *)(v6 + 32);
    v26 = v25 - v24;
    if ( 0 != (v25 - v24) >> 2 )
      if ( (unsigned int)(v26 >> 2) >= 0x40000000 )
        sub_119C874();
      v21 = (char *)operator new(v26);
      *(_QWORD *)&v24 = *(_QWORD *)(v6 + 28);
    v27 = (v25 - v24) >> 2;
    if ( v27 )
      _aeabi_memmove4(v21, v24);
    v28 = (int)&v21[4 * v27];
    v22 = v21;
    v21 = (char *)v28;
  v51 = v13;
  v52 = v12;
  if ( v12 )
    v29 = (unsigned int *)(v12 + 4);
    if ( &pthread_create )
        v30 = __ldrex(v29);
      while ( __strex(v30 + 1, v29) );
      ++*v29;
  v31 = v21 - v22;
  v32 = 0;
  v53 = v20;
  v47 = v23;
  ptr = 0;
  v49 = 0;
  v50 = 0;
  if ( v31 >> 2 )
    if ( (unsigned int)(v31 >> 2) >= 0x40000000 )
      sub_119C874();
    ptr = operator new(v31);
    v49 = ptr;
    v32 = (char *)ptr + 4 * (v31 >> 2);
    v50 = (char *)ptr + 4 * (v31 >> 2);
    _aeabi_memmove4(ptr, v22);
    ptr = 0;
    v49 = 0;
    v50 = 0;
  v49 = v32;
  pplx::task<bool>::_ThenImpl<bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1}>(
    v46,
    v44,
    v45,
    v8,
    (int)&v54,
    (int)&v51,
    &v47,
    0);
  if ( ptr )
    operator delete(ptr);
  v33 = v52;
  if ( v52 )
    v34 = (unsigned int *)(v52 + 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 == 1 )
      v36 = (unsigned int *)(v33 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 8))(v33);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 12))(v33);
  if ( v22 )
    operator delete(v22);
    v38 = (unsigned int *)(v12 + 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 == 1 )
      v40 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
}


int __fastcall Concurrency::streams::details::streambuf_state_manager<char>::commit(int a1)
{
  int v1; // r4@1
  int result; // r0@2
  char *v3; // r4@3
  int v4; // r3@3
  char v5; // [sp+4h] [bp-1Ch]@3

  v1 = a1;
  if ( !*(_BYTE *)(a1 + 19) )
  {
    v3 = j___cxa_allocate_exception(8);
    sub_119C884((void **)&v5, "The buffer needs to allocate first");
    sub_119E3E8((int)v3, (int *)&v5);
    j___cxa_throw((int)v3, (int)&off_27737FC, (int)sub_21D2DBC, v4);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 188))(a1);
  result = 0;
  *(_BYTE *)(v1 + 19) = 0;
  return result;
}


_DWORD *__fastcall Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1}::_Ios_Openmode(_DWORD *a1, int a2)
{
  return Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1}::_Ios_Openmode(
           a1,
           a2);
}


void __fastcall Concurrency::streams::streambuf<char>::~streambuf(void *ptr)
{
  void *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = ptr;
  *(_DWORD *)ptr = &off_26DDA34;
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
  j_j_j__ZdlPv_4(v1);
}


std::__exception_ptr::exception_ptr *__fastcall Concurrency::streams::details::streambuf_state_manager<char>::getn(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r8@1
  int v6; // r6@1
  int v7; // r7@1
  __int64 v8; // r1@3
  std::__exception_ptr::exception_ptr *result; // r0@3
  int v10; // r4@5
  unsigned int *v11; // r1@6
  int v12; // r5@12
  unsigned int *v13; // r1@13
  unsigned int *v14; // r5@19
  unsigned int *v15; // r4@25
  int (__fastcall *v16)(int); // r1@31
  int v17; // r0@31
  void *v18; // [sp+8h] [bp-68h]@3
  __int64 v19; // [sp+10h] [bp-60h]@3
  char v20; // [sp+18h] [bp-58h]@3
  int v21; // [sp+1Ch] [bp-54h]@5
  int v22; // [sp+20h] [bp-50h]@12
  int v23; // [sp+24h] [bp-4Ch]@12
  int v24; // [sp+28h] [bp-48h]@12
  int v25; // [sp+2Ch] [bp-44h]@12
  char v26; // [sp+34h] [bp-3Ch]@12
  int v27; // [sp+38h] [bp-38h]@12
  int v28; // [sp+3Ch] [bp-34h]@12
  int v29; // [sp+40h] [bp-30h]@12
  int v30; // [sp+44h] [bp-2Ch]@12
  __int16 v31; // [sp+48h] [bp-28h]@12
  int v32; // [sp+4Ch] [bp-24h]@10
  int v33; // [sp+50h] [bp-20h]@12
  int v34; // [sp+54h] [bp-1Ch]@12

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 8))(a2) )
  {
    if ( v6 )
    {
      (*(void (__fastcall **)(char *, int, int, int))(*(_DWORD *)v4 + 172))(&v20, v4, v7, v6);
      v18 = operator new(1u);
      LODWORD(v8) = std::_Function_base::_Base_manager<Concurrency::streams::details::streambuf_state_manager<char>::getn(char *,unsigned int)::{lambda(unsigned int)#1}>::_M_manager;
      HIDWORD(v8) = std::_Function_handler<bool ()(unsigned int),Concurrency::streams::details::streambuf_state_manager<char>::getn(char *,unsigned int)::{lambda(unsigned int)#1}>::_M_invoke;
      v19 = v8;
      result = (std::__exception_ptr::exception_ptr *)Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<unsigned int>(
                                                        v5,
                                                        v4,
                                                        (int)&v20,
                                                        (int)&v18,
                                                        24);
      if ( (_DWORD)v19 )
        result = (std::__exception_ptr::exception_ptr *)((int (*)(void))v19)();
      v10 = v21;
      if ( v21 )
      {
        v11 = (unsigned int *)(v21 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (std::__exception_ptr::exception_ptr *)__ldrex(v11);
          while ( __strex((unsigned int)result - 1, v11) );
        }
        else
          result = (std::__exception_ptr::exception_ptr *)(*v11)--;
        if ( result == (std::__exception_ptr::exception_ptr *)1 )
          v14 = (unsigned int *)(v10 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = (std::__exception_ptr::exception_ptr *)__ldrex(v14);
            while ( __strex((unsigned int)result - 1, v14) );
          }
          else
            result = (std::__exception_ptr::exception_ptr *)(*v14)--;
          if ( result == (std::__exception_ptr::exception_ptr *)1 )
            v16 = *(int (__fastcall **)(int))(*(_DWORD *)v10 + 12);
            v17 = v10;
            return (std::__exception_ptr::exception_ptr *)v16(v17);
      }
    }
    else
      pplx::get_ambient_scheduler((pplx *)&v33);
      v12 = v34;
      v22 = v33;
      v23 = v34;
      v24 = v33;
      v25 = 0;
      v26 = 0;
      v31 = 0;
      v29 = 0;
      v30 = 0;
      v27 = 0;
      v28 = 0;
      result = (std::__exception_ptr::exception_ptr *)pplx::task_from_result<unsigned int>(v5, 0, (int)&v22);
      if ( v12 )
        v13 = (unsigned int *)(v12 + 4);
            result = (std::__exception_ptr::exception_ptr *)__ldrex(v13);
          while ( __strex((unsigned int)result - 1, v13) );
          result = (std::__exception_ptr::exception_ptr *)(*v13)--;
          v15 = (unsigned int *)(v12 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
              result = (std::__exception_ptr::exception_ptr *)__ldrex(v15);
            while ( __strex((unsigned int)result - 1, v15) );
            result = (std::__exception_ptr::exception_ptr *)(*v15)--;
            v16 = *(int (__fastcall **)(int))(*(_DWORD *)v12 + 12);
            v17 = v12;
  }
  else
    v32 = 0;
    result = Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_value_task<unsigned int>(
               v5,
               v4,
               &v32);
  return result;
}


int __fastcall Concurrency::streams::streambuf<char>::seekpos(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r0@1

  v2 = a1;
  v3 = Concurrency::streams::streambuf<char>::get_base(a2);
  return (*(int (__fastcall **)(int))(**(_DWORD **)v3 + 104))(v2);
}


int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::validate_mode(char a1)
{
  int result; // r0@1
  char *v2; // r4@2
  int v3; // r3@2
  char v4; // [sp+4h] [bp-1Ch]@2

  result = a1 & 0x18;
  if ( result == 24 )
  {
    v2 = j___cxa_allocate_exception(8);
    sub_119C884((void **)&v4, "this combination of modes on container stream not supported");
    sub_119E3D8((int)v2, (int *)&v4);
    j___cxa_throw((int)v2, (int)&off_2773780, (int)sub_21D3000, v3);
  }
  return result;
}


int (**__fastcall pplx::task<int>::_ThenImpl<int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1}>(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, _DWORD *a7, int a8))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  int *v8; // r6@1
  int *v9; // r9@1
  int v10; // r8@1
  int v11; // r1@2
  unsigned int *v12; // r1@5
  unsigned int v13; // r2@7
  int v14; // r4@10
  unsigned int *v15; // r1@11
  unsigned int v16; // r0@13
  unsigned int *v17; // r5@17
  unsigned int v18; // r0@19
  int v19; // r1@24
  __int64 v20; // r0@24
  int v21; // r5@24
  void *v22; // r7@24
  char *v24; // r4@25
  int v25; // r3@25
  int v26; // [sp+Ch] [bp-2Ch]@2
  int v27; // [sp+10h] [bp-28h]@2
  int v28; // [sp+14h] [bp-24h]@10

  v8 = a2;
  v9 = (int *)a1;
  v10 = a3;
  if ( !*a2 )
  {
    v24 = j___cxa_allocate_exception(8);
    *(_DWORD *)v24 = &off_26D7A9C;
    sub_119C884((void **)v24 + 1, "then() cannot be called on a default constructed task.");
    j___cxa_throw(
      (int)v24,
      (int)&`typeinfo for'pplx::invalid_operation,
      (int)pplx::invalid_operation::~invalid_operation,
      v25);
  }
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v26 = *(_DWORD *)a6;
  v11 = *(_DWORD *)(a6 + 4);
  v27 = *(_DWORD *)(a6 + 4);
  if ( !a4 )
    a4 = 2;
  if ( v11 )
    v12 = (unsigned int *)(v11 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
    }
    else
      ++*v12;
  v28 = *(_DWORD *)(a6 + 8);
  pplx::task<int>::_CreateImpl(a1, a4, (int)&v26);
  v14 = v27;
  if ( v27 )
    v15 = (unsigned int *)(v27 + 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
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
  v19 = *v9;
  *(_BYTE *)(v19 + 8) = *(_BYTE *)(*v8 + 8);
  *(_BYTE *)(v19 + 9) = 1;
  *(_DWORD *)(v19 + 60) = *a7;
  LODWORD(v20) = v19 + 64;
  HIDWORD(v20) = a7 + 1;
  std::vector<void *,std::allocator<void *>>::operator=(v20);
  v21 = *v8;
  v22 = operator new(0x3Cu);
  pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_ContinuationTaskHandle(
    (int)v22,
    (int)v8,
    (int)v9,
    v10,
    a5,
    a8);
  return pplx::details::_Task_impl_base::_ScheduleContinuation(v21, (int)v22);
}


int __fastcall Concurrency::streams::streambuf<char>::sync(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1

  v2 = a1;
  v3 = Concurrency::streams::streambuf<char>::get_base(a2);
  return (*(int (__fastcall **)(int))(**(_DWORD **)v3 + 112))(v2);
}


std::__exception_ptr::exception_ptr *__fastcall Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1}::operator() const(int a1, int a2, pplx::details::_Task_impl_base **a3)
{
  pplx::details::_Task_impl_base **v3; // r6@1
  int v4; // r5@1
  int v5; // r9@1
  int v6; // r1@1
  int v7; // r0@2
  int v8; // r1@2
  unsigned int v9; // r7@3
  std::__exception_ptr::exception_ptr *result; // r0@4
  int v11; // r5@5
  unsigned int *v12; // r1@6
  unsigned int v13; // r0@8
  unsigned int *v14; // r4@12
  unsigned int v15; // r0@14
  int v16; // [sp+0h] [bp-A0h]@5
  int v17; // [sp+4h] [bp-9Ch]@5
  int v18; // [sp+8h] [bp-98h]@5
  int v19; // [sp+Ch] [bp-94h]@5
  char v20; // [sp+14h] [bp-8Ch]@5
  int v21; // [sp+18h] [bp-88h]@5
  int v22; // [sp+1Ch] [bp-84h]@5
  int v23; // [sp+20h] [bp-80h]@5
  int v24; // [sp+24h] [bp-7Ch]@5
  __int16 v25; // [sp+28h] [bp-78h]@5
  char v26; // [sp+2Ch] [bp-74h]@5
  int v27; // [sp+30h] [bp-70h]@3
  char v28; // [sp+34h] [bp-6Ch]@3
  int v29; // [sp+7Ch] [bp-24h]@5
  int v30; // [sp+80h] [bp-20h]@5

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = pplx::task<int>::get(a3);
  if ( !*(_DWORD *)(v4 + 16) )
    sub_119C8E4();
  v7 = (*(int (__fastcall **)(int, int))(v4 + 20))(v4 + 8, v6);
  v8 = *(_DWORD *)v4;
  *(_BYTE *)(*(_DWORD *)v4 + 18) = v7;
  if ( v7
    && ((*(void (__fastcall **)(char *))(*(_DWORD *)v8 + 132))(&v28),
        v27 = 0,
        v9 = std::__exception_ptr::operator==(&v28, &v27),
        std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v27),
        std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v28),
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


signed int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::getpos(int a1, int a2, char a3)
{
  char v3; // r6@1
  int v4; // r5@1
  int v5; // r4@1
  signed int result; // r0@5

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( a3 & 8 && (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 8))(a2) != 1
    || v3 & 0x10 && !(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4) )
  {
    result = -1;
    *(_DWORD *)v5 = -1;
    *(_DWORD *)(v5 + 4) = -1;
    *(_DWORD *)(v5 + 8) = 0;
  }
  else
    result = 0;
    *(_DWORD *)v5 = *(_DWORD *)(v4 + 24);
    *(_DWORD *)(v5 + 4) = 0;
  return result;
}


unsigned int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::_bumpc(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r8@1
  int v4; // r9@2
  signed int v5; // r2@2
  __int64 v6; // r0@2
  int v7; // r6@2
  int v8; // r7@6
  int v9; // r6@8
  int v10; // r4@15
  unsigned int result; // r0@15
  unsigned int *v12; // r1@16
  unsigned int *v13; // r5@22
  int v14; // [sp+0h] [bp-50h]@15
  int v15; // [sp+4h] [bp-4Ch]@15
  int v16; // [sp+8h] [bp-48h]@15
  int v17; // [sp+Ch] [bp-44h]@15
  char v18; // [sp+14h] [bp-3Ch]@15
  int v19; // [sp+18h] [bp-38h]@15
  int v20; // [sp+1Ch] [bp-34h]@15
  int v21; // [sp+20h] [bp-30h]@15
  int v22; // [sp+24h] [bp-2Ch]@15
  __int16 v23; // [sp+28h] [bp-28h]@15
  int v24; // [sp+2Ch] [bp-24h]@11
  int v25; // [sp+30h] [bp-20h]@15

  v2 = a2;
  v3 = a1;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 36))(a2) )
  {
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 36))(v2);
    HIDWORD(v6) = *(_DWORD *)(v2 + 24);
    v5 = 1;
    LODWORD(v6) = v4 != 0;
    v7 = v6 + HIDWORD(v6);
    if ( (signed int)v6 + HIDWORD(v6) >= (unsigned int)v6 )
      v5 = 0;
    if ( v5 )
      msl::safeint3::SafeIntInternal::SafeIntExceptionHandler<msl::safeint3::SafeIntException>::SafeIntOnOverflow();
    LODWORD(v6) = *(_DWORD *)(v2 + 20);
    if ( *(_DWORD *)(v6 - 4) <= -1 )
    {
      v8 = v6 + HIDWORD(v6);
    }
    else
      sub_119CB68((const void **)(v2 + 20));
      v6 = *(_QWORD *)(v2 + 20);
      if ( *(_DWORD *)(v6 - 4) > -1 )
      {
        sub_119CB68((const void **)(v2 + 20));
        LODWORD(v6) = *(_DWORD *)(v2 + 20);
      }
    if ( (_DWORD)v6 + v7 != v8 )
      _aeabi_memmove(&v24, v8);
    *(_DWORD *)(v2 + 24) = v7;
    if ( v4 )
      v9 = (unsigned __int8)v24;
      v9 = -1;
  }
  else
    v9 = -1;
  pplx::get_ambient_scheduler((pplx *)&v24);
  v10 = v25;
  v14 = v24;
  v15 = v25;
  v16 = v24;
  v17 = 0;
  v18 = 0;
  v23 = 0;
  v21 = 0;
  v22 = 0;
  v19 = 0;
  v20 = 0;
  result = pplx::task_from_result<int>(v3, v9, (int)&v14);
  if ( v10 )
    v12 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  return result;
}


unsigned int __fastcall Concurrency::streams::details::streambuf_state_manager<char>::close(std::_Ios_Openmode)::{lambda(void)#2}::operator() const(int a1, int a2)
{
  return Concurrency::streams::details::streambuf_state_manager<char>::close(std::_Ios_Openmode)::{lambda(void)#2}::operator() const(
           a1,
           a2);
}


int __fastcall Concurrency::streams::streambuf<char>::ungetc(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1

  v2 = a1;
  v3 = Concurrency::streams::streambuf<char>::get_base(a2);
  return (*(int (__fastcall **)(int))(**(_DWORD **)v3 + 84))(v2);
}


int __fastcall Concurrency::streams::streambuf<char>::buffer_size(int a1)
{
  int v1; // r0@1

  v1 = Concurrency::streams::streambuf<char>::get_base(a1);
  return (*(int (**)(void))(**(_DWORD **)v1 + 28))();
}


_DWORD *__fastcall Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1}::_Ios_Openmode(_DWORD *a1, int a2)
{
  int v2; // r4@1
  _DWORD *v3; // r5@1
  int v4; // r0@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  void (__fastcall *v7)(_DWORD *, int, signed int); // r3@7

  v2 = a2;
  v3 = a1;
  *a1 = *(_DWORD *)a2;
  v4 = *(_DWORD *)(a2 + 4);
  v3[1] = v4;
  if ( v4 )
  {
    v5 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  v3[4] = 0;
  v7 = *(void (__fastcall **)(_DWORD *, int, signed int))(v2 + 16);
  if ( v7 )
    v7(v3 + 2, v2 + 8, 2);
    v3[5] = *(_DWORD *)(v2 + 20);
    v3[4] = *(_DWORD *)(v2 + 16);
  v3[6] = *(_DWORD *)(v2 + 24);
  return v3;
}


int __fastcall Concurrency::streams::streambuf<char>::is_open(int a1)
{
  int v1; // r0@1

  v1 = Concurrency::streams::streambuf<char>::get_base(a1);
  return (*(int (**)(void))(**(_DWORD **)v1 + 40))();
}


unsigned int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::_putn(int a1, int a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r9@1
  int v6; // r10@1
  int v7; // r8@1
  int v8; // r0@1
  int v9; // r7@1
  int v10; // r0@3
  int *v11; // r5@3
  unsigned int v12; // r7@3
  int v13; // r6@8
  unsigned int result; // r0@8
  unsigned int *v15; // r1@9
  unsigned int *v16; // r4@15
  int v17; // [sp+0h] [bp-58h]@8
  int v18; // [sp+4h] [bp-54h]@8
  int v19; // [sp+8h] [bp-50h]@8
  int v20; // [sp+Ch] [bp-4Ch]@8
  char v21; // [sp+14h] [bp-44h]@8
  int v22; // [sp+18h] [bp-40h]@8
  int v23; // [sp+1Ch] [bp-3Ch]@8
  int v24; // [sp+20h] [bp-38h]@8
  int v25; // [sp+24h] [bp-34h]@8
  __int16 v26; // [sp+28h] [bp-30h]@8
  int v27; // [sp+30h] [bp-28h]@8
  int v28; // [sp+34h] [bp-24h]@8

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 12))(a2);
  v9 = 0;
  if ( v6 && !(v8 ^ 1) )
  {
    v11 = (int *)(v4 + 20);
    v10 = *(_DWORD *)(v4 + 20);
    v12 = *(_DWORD *)(v4 + 24) + v6;
    if ( *(_DWORD *)(v10 - 12) < v12 )
    {
      sub_119E388((char *)(v4 + 20), *(_DWORD *)(v4 + 24) + v6, 0);
      v10 = *v11;
    }
    if ( *(_DWORD *)(v10 - 4) > -1 )
      sub_119CB68((const void **)(v4 + 20));
    _aeabi_memmove(v10 + *(_DWORD *)(v4 + 24), v7);
    *(_DWORD *)(v4 + 24) = v12;
    v9 = v6;
  }
  pplx::get_ambient_scheduler((pplx *)&v27);
  v13 = v28;
  v17 = v27;
  v18 = v28;
  v19 = v27;
  v20 = 0;
  v21 = 0;
  v26 = 0;
  v24 = 0;
  v25 = 0;
  v22 = 0;
  v23 = 0;
  pplx::task_from_result<unsigned int>(v5, v9, (int)&v17);
  result = 0;
  if ( v13 )
    v15 = (unsigned int *)(v13 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
    else
      result = (*v15)--;
    if ( result == 1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
      }
      else
        result = (*v16)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  return result;
}


void __fastcall Concurrency::streams::bytestream::open_istream<std::string>(int a1, int *a2)
{
  Concurrency::streams::bytestream::open_istream<std::string>(a1, a2);
}


int __fastcall Concurrency::streams::streambuf<char>::can_seek(int a1)
{
  int v1; // r0@1

  v1 = Concurrency::streams::streambuf<char>::get_base(a1);
  return (*(int (**)(void))(**(_DWORD **)v1 + 16))();
}


int __fastcall pplx::details::_PPLTaskHandle<bool,pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>,pplx::details::_ContinuationTaskHandleBase>::_GetTaskImplBase(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 16);
  v2 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(result + 4) = v2;
  if ( v2 )
  {
    result = v2 + 4;
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


int __fastcall Concurrency::streams::streambuf<char>::size(int a1)
{
  int v1; // r0@1

  v1 = Concurrency::streams::streambuf<char>::get_base(a1);
  return (*(int (**)(void))(**(_DWORD **)v1 + 100))();
}


unsigned int __fastcall Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r8@1
  int v6; // r7@1
  int v7; // r5@1
  int v8; // r9@1
  unsigned int *v9; // r6@2
  unsigned int v10; // r0@2
  unsigned int v11; // r2@5
  unsigned int v12; // r3@6
  unsigned int v13; // r0@9
  void (__fastcall *v14)(int *, int, signed int); // r3@12
  int v15; // r0@14
  int v16; // r1@15
  bool v17; // zf@15
  int v18; // r0@19
  unsigned int *v19; // r0@20
  unsigned int v20; // r1@22
  int v21; // r5@25
  unsigned int *v22; // r1@26
  unsigned int v23; // r0@28
  unsigned int *v24; // r4@32
  unsigned int v25; // r0@34
  int v26; // r5@41
  unsigned int *v27; // r1@42
  unsigned int v28; // r0@44
  unsigned int *v29; // r4@48
  unsigned int v30; // r0@50
  unsigned int result; // r0@57
  unsigned int *v32; // r4@61
  char *v33; // r5@71
  int v34; // r3@71
  int v35; // [sp+0h] [bp-48h]@19
  int v36; // [sp+4h] [bp-44h]@19
  int v37; // [sp+8h] [bp-40h]@7
  int v38; // [sp+Ch] [bp-3Ch]@7
  int v39; // [sp+10h] [bp-38h]@13
  void (__cdecl *v40)(int *); // [sp+18h] [bp-30h]@12
  int v41; // [sp+1Ch] [bp-2Ch]@13
  int v42; // [sp+20h] [bp-28h]@14

  v5 = *(_DWORD *)(a2 + 8);
  v6 = a4;
  v7 = a3;
  v8 = a1;
  if ( !v5 )
    std::__throw_bad_weak_ptr();
  v9 = (unsigned int *)(v5 + 4);
  v10 = *(_DWORD *)(v5 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v10 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v11 = __ldrex(v9);
      if ( v11 == v10 )
        break;
      __clrex();
      v10 = v11;
    }
    v12 = __strex(v10 + 1, v9);
    v10 = v11;
  }
  while ( v12 );
  __dmb();
  v37 = *(_DWORD *)(a2 + 4);
  v38 = v5;
  if ( &pthread_create )
    __dmb();
    do
      v13 = __ldrex(v9);
    while ( __strex(v13 + 1, v9) );
  else
    ++*v9;
  v40 = 0;
  v14 = *(void (__fastcall **)(int *, int, signed int))(v6 + 8);
  if ( v14 )
    v14(&v39, v6, 2);
    v41 = *(_DWORD *)(v6 + 12);
    v40 = *(void (__cdecl **)(int *))(v6 + 8);
  v42 = a5;
  v15 = *(_DWORD *)v7;
  if ( !*(_DWORD *)v7 )
    v33 = j___cxa_allocate_exception(8);
    *(_DWORD *)v33 = &off_26D7A9C;
    sub_119C884((void **)v33 + 1, "is_done() cannot be called on a default constructed task.");
    j___cxa_throw(
      (int)v33,
      (int)&`typeinfo for'pplx::invalid_operation,
      (int)pplx::invalid_operation::~invalid_operation,
      v34);
  v16 = *(_DWORD *)(v15 + 4);
  v17 = v16 == 3;
  if ( v16 != 3 )
    v17 = *(_DWORD *)(v15 + 4) == 4;
  if ( v17 )
    v35 = *(_DWORD *)v7;
    v18 = *(_DWORD *)(v7 + 4);
    v36 = v18;
    if ( v18 )
      v19 = (unsigned int *)(v18 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 + 1, v19) );
      }
      else
        ++*v19;
    Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1}::operator() const(
      v8,
      (int)&v37,
      (pplx::details::_Task_impl_base **)&v35);
    v21 = v36;
    if ( v36 )
      v22 = (unsigned int *)(v36 + 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 == 1 )
        v24 = (unsigned int *)(v21 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
        if ( &pthread_create )
        {
          __dmb();
          do
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
        }
        else
          v25 = (*v24)--;
        if ( v25 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
    pplx::task<int>::then<pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1}>(
      (_DWORD *)v7,
      (int)&v37);
  if ( v40 )
    v40(&v39);
  v26 = v38;
  if ( v38 )
    v27 = (unsigned int *)(v38 + 4);
    if ( &pthread_create )
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    else
      v28 = (*v27)--;
    if ( v28 == 1 )
      v29 = (unsigned int *)(v26 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
      result = __ldrex(v9);
    while ( __strex(result - 1, v9) );
    result = (*v9)--;
  if ( result == 1 )
    v32 = (unsigned int *)(v5 + 8);
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
        result = __ldrex(v32);
      while ( __strex(result - 1, v32) );
      result = (*v32)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return result;
}


void __fastcall pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_Continue(int a1)
{
  pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_Continue(a1);
}


void __fastcall pplx::details::_PPLTaskHandle<bool,pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>,pplx::details::_ContinuationTaskHandleBase>::~_PPLTaskHandle(void *ptr)
{
  void *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = ptr;
  *(_DWORD *)ptr = &off_26DD9A0;
  v2 = *((_DWORD *)ptr + 5);
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
  j_j_j__ZdlPv_4(v1);
}


int __fastcall pplx::details::_PPLTaskHandle<bool,pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>,pplx::details::_ContinuationTaskHandleBase>::~_PPLTaskHandle(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = a1;
  *(_DWORD *)a1 = &off_26DD9A0;
  v2 = *(_DWORD *)(a1 + 20);
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


unsigned int __fastcall pplx::task<bool>::then<pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1}>(int a1, _DWORD *a2, int a3)
{
  return pplx::task<bool>::then<pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1}>(
           a1,
           a2,
           a3);
}


int __fastcall Concurrency::streams::streambuf<char>::has_size(int a1)
{
  int v1; // r0@1

  v1 = Concurrency::streams::streambuf<char>::get_base(a1);
  return (*(int (**)(void))(**(_DWORD **)v1 + 20))();
}


int __fastcall Concurrency::streams::streambuf<char>::exception(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1

  v2 = a1;
  v3 = Concurrency::streams::streambuf<char>::get_base(a2);
  return (*(int (__fastcall **)(int))(**(_DWORD **)v3 + 132))(v2);
}


int __fastcall Concurrency::streams::streambuf<char>::set_buffer_size(int a1)
{
  int v1; // r0@1

  v1 = Concurrency::streams::streambuf<char>::get_base(a1);
  return (*(int (**)(void))(**(_DWORD **)v1 + 32))();
}


void __fastcall Concurrency::streams::bytestream::open_istream<std::string>(int a1, int *a2)
{
  int v2; // r5@1
  __int64 v3; // kr00_8@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@4
  unsigned int v6; // r1@10
  unsigned int v7; // r1@15
  unsigned int *v8; // r6@19
  unsigned int v9; // r0@21
  int v10; // r4@26
  unsigned int *v11; // r1@27
  unsigned int v12; // r0@29
  unsigned int *v13; // r5@33
  unsigned int v14; // r0@35
  int v15; // r4@40
  unsigned int *v16; // r1@41
  unsigned int v17; // r0@43
  unsigned int *v18; // r5@47
  unsigned int v19; // r0@49
  void *v20; // r0@54
  unsigned int *v21; // r2@56
  signed int v22; // r1@58
  int v23; // [sp+4h] [bp-34h]@1
  void **v24; // [sp+8h] [bp-30h]@1
  __int64 v25; // [sp+Ch] [bp-2Ch]@1
  void **v26; // [sp+14h] [bp-24h]@1
  __int64 v27; // [sp+18h] [bp-20h]@6
  char v28; // [sp+24h] [bp-14h]@26

  v2 = a1;
  v23 = *a2;
  *a2 = (int)&unk_28898CC;
  Concurrency::streams::container_buffer<std::string>::container_buffer((int)&v24, &v23, 8u);
  v26 = &off_26DDAC4;
  v3 = v25;
  if ( HIDWORD(v25) )
  {
    v4 = (unsigned int *)(HIDWORD(v25) + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
    v27 = v3;
        v6 = __ldrex(v4);
      while ( __strex(v6 + 1, v4) );
        v7 = __ldrex(v4);
      while ( __strex(v7 - 1, v4) );
      v7 = (*v4)--;
    if ( v7 == 1 )
      v8 = (unsigned int *)(HIDWORD(v3) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 8))(HIDWORD(v3));
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
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 12))(HIDWORD(v3));
  }
  else
    v27 = (unsigned int)v25;
  std::__shared_ptr<Concurrency::streams::details::basic_istream_helper<unsigned char>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<Concurrency::streams::details::basic_istream_helper<unsigned char>>,Concurrency::streams::streambuf<unsigned char> &>(
    v2,
    (int)&v28,
    (int)&v26);
  Concurrency::streams::basic_istream<unsigned char>::_verify_and_throw(
    "stream buffer not set up for input of data");
  v10 = HIDWORD(v27);
  if ( HIDWORD(v27) )
    v11 = (unsigned int *)(HIDWORD(v27) + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  v24 = &off_26DDA34;
  v15 = HIDWORD(v25);
    v16 = (unsigned int *)(HIDWORD(v25) + 4);
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
  v20 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v23 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
}


int __fastcall Concurrency::streams::streambuf<char>::nextc(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1

  v2 = a1;
  v3 = Concurrency::streams::streambuf<char>::get_base(a2);
  return (*(int (__fastcall **)(int))(**(_DWORD **)v3 + 80))(v2);
}


int __fastcall pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_ContinuationTaskHandle(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_ContinuationTaskHandle(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6);
}


void __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::~basic_container_buffer(int a1)
{
  void *v1; // r0@1

  v1 = (void *)Concurrency::streams::details::basic_container_buffer<std::string>::~basic_container_buffer(a1);
  j_j_j__ZdlPv_4(v1);
}


int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::~basic_container_buffer(int a1)
{
  int v1; // r4@1
  int v2; // r6@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r5@8
  unsigned int v6; // r0@10
  int v7; // r5@15
  unsigned int *v8; // r1@16
  unsigned int v9; // r0@18
  unsigned int *v10; // r6@22
  unsigned int v11; // r0@24
  int v12; // r5@29
  unsigned int *v13; // r1@30
  unsigned int v14; // r0@32
  unsigned int *v15; // r6@36
  unsigned int v16; // r0@38
  int v17; // r1@43
  void *v18; // r0@43
  int v19; // r0@44
  unsigned int *v20; // r2@45
  unsigned int v21; // r1@47
  unsigned int *v23; // r2@53
  signed int v24; // r1@55
  int v25; // [sp+0h] [bp-60h]@29
  int v26; // [sp+4h] [bp-5Ch]@29
  char v27; // [sp+8h] [bp-58h]@1
  int v28; // [sp+Ch] [bp-54h]@15
  int v29; // [sp+10h] [bp-50h]@1
  int v30; // [sp+14h] [bp-4Ch]@1
  int v31; // [sp+18h] [bp-48h]@1
  int v32; // [sp+1Ch] [bp-44h]@1
  char v33; // [sp+24h] [bp-3Ch]@1
  int v34; // [sp+28h] [bp-38h]@1
  int v35; // [sp+2Ch] [bp-34h]@1
  int v36; // [sp+30h] [bp-30h]@1
  int v37; // [sp+34h] [bp-2Ch]@1
  __int16 v38; // [sp+38h] [bp-28h]@1
  int v39; // [sp+40h] [bp-20h]@1
  int v40; // [sp+44h] [bp-1Ch]@1

  v1 = a1;
  *(_DWORD *)a1 = &off_26DD4A0;
  *(_BYTE *)(a1 + 16) = 0;
  pplx::get_ambient_scheduler((pplx *)&v39);
  v2 = v40;
  v29 = v39;
  v30 = v40;
  v31 = v39;
  v32 = 0;
  v33 = 0;
  v38 = 0;
  v36 = 0;
  v37 = 0;
  v34 = 0;
  v35 = 0;
  pplx::task_from_result((pplx *)&v27, (const pplx::task_options *)&v29);
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
  v7 = v28;
  if ( v28 )
    v8 = (unsigned int *)(v28 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  (*(void (__fastcall **)(int *, int))(*(_DWORD *)v1 + 196))(&v25, v1);
  v12 = v26;
  if ( v26 )
    v13 = (unsigned int *)(v26 + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      v15 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  v17 = *(_DWORD *)(v1 + 20);
  v18 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v17 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  *(_DWORD *)v1 = &off_26DD570;
  std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)(v1 + 12));
  v19 = *(_DWORD *)(v1 + 8);
  if ( v19 )
    v20 = (unsigned int *)(v19 + 8);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      (*(void (**)(void))(*(_DWORD *)v19 + 12))();
  return v1;
}


int __fastcall Concurrency::streams::streambuf<char>::putn_nocopy(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r0@1

  v2 = a1;
  v3 = Concurrency::streams::streambuf<char>::get_base(a2);
  return (*(int (__fastcall **)(int))(**(_DWORD **)v3 + 60))(v2);
}


void __fastcall pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::~_ContinuationTaskHandle(int a1)
{
  pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::~_ContinuationTaskHandle(a1);
}


int (**__fastcall pplx::task<bool>::_ThenImpl<bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1}>(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, _DWORD *a7, int a8))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  return pplx::task<bool>::_ThenImpl<bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1}>(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}


int __fastcall Concurrency::streams::streambuf<char>::putc(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r0@1

  v2 = a1;
  v3 = Concurrency::streams::streambuf<char>::get_base(a2);
  return (*(int (__fastcall **)(int))(**(_DWORD **)v3 + 52))(v2);
}


int __fastcall pplx::details::_PPLTaskHandle<bool,pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>,pplx::details::_ContinuationTaskHandleBase>::_GetTaskImplBase(int result, int a2)
{
  return pplx::details::_PPLTaskHandle<bool,pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>,pplx::details::_ContinuationTaskHandleBase>::_GetTaskImplBase(
           result,
           a2);
}


std::__exception_ptr::exception_ptr *__fastcall Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_value_task<int>(int a1, int a2, int *a3)
{
  return Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_value_task<int>(
           a1,
           a2,
           a3);
}


void __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::~basic_container_buffer(int a1)
{
  Concurrency::streams::details::basic_container_buffer<std::string>::~basic_container_buffer(a1);
}


int __fastcall Concurrency::streams::streambuf<char>::release(int a1)
{
  int v1; // r0@1

  v1 = Concurrency::streams::streambuf<char>::get_base(a1);
  return (*(int (**)(void))(**(_DWORD **)v1 + 128))();
}


unsigned int __fastcall Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(int a1, int a2, int a3, int a4, int a5)
{
  return Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(
           a1,
           a2,
           a3,
           a4,
           a5);
}


int __fastcall Concurrency::streams::streambuf<char>::acquire(int a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // r0@1

  *a2 = 0;
  *a3 = 0;
  v3 = Concurrency::streams::streambuf<char>::get_base(a1);
  return (*(int (**)(void))(**(_DWORD **)v3 + 124))();
}


void __fastcall Concurrency::streams::container_buffer<std::string>::~container_buffer(void *ptr)
{
  void *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = ptr;
  *(_DWORD *)ptr = &off_26DDA34;
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
  j_j_j__ZdlPv_4(v1);
}


int __fastcall pplx::details::_PPLTaskHandle<int,pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>,pplx::details::_ContinuationTaskHandleBase>::_GetTaskImplBase(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 16);
  v2 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(result + 4) = v2;
  if ( v2 )
  {
    result = v2 + 4;
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


int __fastcall Concurrency::streams::streambuf<char>::bumpc(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1

  v2 = a1;
  v3 = Concurrency::streams::streambuf<char>::get_base(a2);
  return (*(int (__fastcall **)(int))(**(_DWORD **)v3 + 64))(v2);
}


int __fastcall pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_ContinuationTaskHandle(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_ContinuationTaskHandle(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6);
}


signed int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::_sgetc(int a1)
{
  int v1; // r5@1
  int v2; // r4@2
  signed int v3; // r2@2
  __int64 v4; // r0@2
  int v5; // r7@2
  const void **v6; // r6@5
  int v7; // r5@6
  signed int result; // r0@12
  unsigned __int8 v9; // [sp+3h] [bp-15h]@10

  v1 = a1;
  if ( !(*(int (**)(void))(*(_DWORD *)a1 + 36))() )
    goto LABEL_17;
  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 36))(v1);
  HIDWORD(v4) = *(_DWORD *)(v1 + 24);
  v3 = 1;
  LODWORD(v4) = v2 != 0;
  v5 = v4 + HIDWORD(v4);
  if ( (signed int)v4 + HIDWORD(v4) >= (unsigned int)v4 )
    v3 = 0;
  if ( v3 )
    msl::safeint3::SafeIntInternal::SafeIntExceptionHandler<msl::safeint3::SafeIntException>::SafeIntOnOverflow();
  v6 = (const void **)(v1 + 20);
  LODWORD(v4) = *(_DWORD *)(v1 + 20);
  if ( *(_DWORD *)(v4 - 4) <= -1 )
  {
    v7 = v4 + HIDWORD(v4);
  }
  else
    sub_119CB68((const void **)(v1 + 20));
    v4 = *(_QWORD *)(v1 + 20);
    if ( *(_DWORD *)(v4 - 4) > -1 )
    {
      sub_119CB68(v6);
      LODWORD(v4) = *v6;
    }
  if ( (_DWORD)v4 + v5 != v7 )
    _aeabi_memmove(&v9, v7);
  if ( v2 )
    result = v9;
LABEL_17:
    result = -1;
  return result;
}


int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::basic_container_buffer(int a1, _DWORD *a2, unsigned int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  unsigned int v5; // r5@1
  _DWORD *v6; // r7@1

  v3 = a1;
  v4 = 0;
  v5 = a3;
  v6 = a2;
  *(_DWORD *)a1 = &off_26DD570;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  std::__exception_ptr::exception_ptr::exception_ptr((std::__exception_ptr::exception_ptr *)(a1 + 12));
  *(_BYTE *)(v3 + 16) = (v5 >> 3) & 1;
  *(_BYTE *)(v3 + 17) = (v5 >> 4) & 1;
  *(_BYTE *)(v3 + 18) = 0;
  *(_BYTE *)(v3 + 19) = 0;
  *(_DWORD *)v3 = &off_26DD4A0;
  *(_DWORD *)(v3 + 20) = *v6;
  *v6 = &unk_28898CC;
  if ( !(v5 & 8) )
    v4 = *(_DWORD *)(*(_DWORD *)(v3 + 20) - 12);
  *(_DWORD *)(v3 + 24) = v4;
  Concurrency::streams::details::basic_container_buffer<std::string>::validate_mode(v5);
  return v3;
}


void __fastcall pplx::details::_PPLTaskHandle<int,pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>,pplx::details::_ContinuationTaskHandleBase>::invoke(int a1)
{
  int v1; // r4@1
  int v2; // r7@1
  int v3; // r0@2
  signed int v4; // r6@4
  int v5; // r1@10

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 16);
  if ( &pthread_create )
  {
    v3 = pthread_mutex_lock((pthread_mutex_t *)(v2 + 20));
    if ( v3 )
      sub_119CCFC(v3);
  }
  if ( *(_DWORD *)(v2 + 4) == 2 )
    v4 = 0;
  else
    v4 = 1;
    *(_DWORD *)(v2 + 4) = 1;
    pthread_mutex_unlock((pthread_mutex_t *)(v2 + 20));
  if ( v4 )
    pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_Continue(v1);
    v5 = *(_DWORD *)(v1 + 24);
    (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(v1 + 16) + 8))(*(_DWORD *)(v1 + 16));
}


int __fastcall Concurrency::streams::streambuf<char>::can_write(int a1)
{
  int v1; // r0@1

  v1 = Concurrency::streams::streambuf<char>::get_base(a1);
  return (*(int (**)(void))(**(_DWORD **)v1 + 12))();
}


std::__exception_ptr::exception_ptr *__fastcall Concurrency::streams::details::streambuf_state_manager<char>::bumpc(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  __int64 v4; // r1@2
  std::__exception_ptr::exception_ptr *result; // r0@2
  int v6; // r4@4
  unsigned int *v7; // r1@5
  unsigned int *v8; // r5@12
  void *v9; // [sp+4h] [bp-2Ch]@2
  __int64 v10; // [sp+Ch] [bp-24h]@2
  char v11; // [sp+14h] [bp-1Ch]@2
  int v12; // [sp+18h] [bp-18h]@4
  int v13; // [sp+1Ch] [bp-14h]@9

  v2 = a2;
  v3 = a1;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 8))(a2) )
  {
    (*(void (__fastcall **)(char *, int))(*(_DWORD *)v2 + 148))(&v11, v2);
    v9 = operator new(1u);
    LODWORD(v4) = std::_Function_base::_Base_manager<Concurrency::streams::details::streambuf_state_manager<char>::bumpc(void)::{lambda(int)#1}>::_M_manager;
    HIDWORD(v4) = std::_Function_handler<bool ()(int),Concurrency::streams::details::streambuf_state_manager<char>::bumpc(void)::{lambda(int)#1}>::_M_invoke;
    v10 = v4;
    result = (std::__exception_ptr::exception_ptr *)Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(
                                                      v3,
                                                      v2,
                                                      (int)&v11,
                                                      (int)&v9,
                                                      24);
    if ( (_DWORD)v10 )
      result = (std::__exception_ptr::exception_ptr *)((int (*)(void))v10)();
    v6 = v12;
    if ( v12 )
    {
      v7 = (unsigned int *)(v12 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (std::__exception_ptr::exception_ptr *)__ldrex(v7);
        while ( __strex((unsigned int)result - 1, v7) );
      }
      else
        result = (std::__exception_ptr::exception_ptr *)(*v7)--;
      if ( result == (std::__exception_ptr::exception_ptr *)1 )
        v8 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (std::__exception_ptr::exception_ptr *)__ldrex(v8);
          while ( __strex((unsigned int)result - 1, v8) );
        }
        else
          result = (std::__exception_ptr::exception_ptr *)(*v8)--;
        if ( result == (std::__exception_ptr::exception_ptr *)1 )
          result = (std::__exception_ptr::exception_ptr *)(*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
  }
  else
    v13 = -1;
    result = Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_value_task<int>(
               v3,
               v2,
               &v13);
  return result;
}


int __fastcall pplx::details::_PPLTaskHandle<int,pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>,pplx::details::_ContinuationTaskHandleBase>::_GetTaskImplBase(int result, int a2)
{
  return pplx::details::_PPLTaskHandle<int,pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>,pplx::details::_ContinuationTaskHandleBase>::_GetTaskImplBase(
           result,
           a2);
}


std::__exception_ptr::exception_ptr *__fastcall Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_value_task<int>(int a1, int a2, int *a3)
{
  int v3; // r5@1
  int v4; // r8@1
  int *v5; // r9@1
  unsigned int v6; // r6@1
  int v7; // r4@2
  int v8; // r5@2
  std::__exception_ptr::exception_ptr *result; // r0@2
  unsigned int *v10; // r1@3
  int v11; // r5@7
  unsigned int *v12; // r1@8
  unsigned int v13; // r0@10
  unsigned int *v14; // r4@14
  unsigned int *v15; // r4@20
  unsigned int v16; // r0@22
  int v17; // [sp+0h] [bp-64h]@7
  int v18; // [sp+4h] [bp-60h]@7
  int v19; // [sp+8h] [bp-5Ch]@7
  int v20; // [sp+Ch] [bp-58h]@7
  char v21; // [sp+14h] [bp-50h]@7
  int v22; // [sp+18h] [bp-4Ch]@7
  int v23; // [sp+1Ch] [bp-48h]@7
  int v24; // [sp+20h] [bp-44h]@7
  int v25; // [sp+24h] [bp-40h]@7
  __int16 v26; // [sp+28h] [bp-3Ch]@7
  char v27; // [sp+2Ch] [bp-38h]@7
  int v28; // [sp+30h] [bp-34h]@2
  int v29; // [sp+34h] [bp-30h]@2
  int v30; // [sp+38h] [bp-2Ch]@2
  int v31; // [sp+3Ch] [bp-28h]@2
  char v32; // [sp+44h] [bp-20h]@2
  int v33; // [sp+48h] [bp-1Ch]@2
  int v34; // [sp+4Ch] [bp-18h]@2
  int v35; // [sp+50h] [bp-14h]@2
  int v36; // [sp+54h] [bp-10h]@2
  __int16 v37; // [sp+58h] [bp-Ch]@2
  int v38; // [sp+60h] [bp-4h]@1
  int v39; // [sp+64h] [bp+0h]@1
  int v40; // [sp+68h] [bp+4h]@2
  int v41; // [sp+6Ch] [bp+8h]@2
  int v42; // [sp+70h] [bp+Ch]@7
  int v43; // [sp+74h] [bp+10h]@7

  v3 = a2;
  v4 = a1;
  v5 = a3;
  (*(void (__fastcall **)(int *))(*(_DWORD *)a2 + 132))(&v39);
  v38 = 0;
  v6 = std::__exception_ptr::operator==(&v39, &v38);
  std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v38);
  std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v39);
  if ( v6 == 1 )
  {
    v7 = *v5;
    pplx::get_ambient_scheduler((pplx *)&v40);
    v8 = v41;
    v28 = v40;
    v29 = v41;
    v30 = v40;
    v31 = 0;
    v32 = 0;
    v37 = 0;
    v35 = 0;
    v36 = 0;
    v33 = 0;
    v34 = 0;
    pplx::task_from_result<int>(v4, v7, (int)&v28);
    result = 0;
    if ( v8 )
    {
      v10 = (unsigned int *)(v8 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (std::__exception_ptr::exception_ptr *)__ldrex(v10);
        while ( __strex((unsigned int)result - 1, v10) );
      }
      else
        result = (std::__exception_ptr::exception_ptr *)(*v10)--;
      if ( result == (std::__exception_ptr::exception_ptr *)1 )
        v14 = (unsigned int *)(v8 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (std::__exception_ptr::exception_ptr *)__ldrex(v14);
          while ( __strex((unsigned int)result - 1, v14) );
        }
        else
          result = (std::__exception_ptr::exception_ptr *)(*v14)--;
        if ( result == (std::__exception_ptr::exception_ptr *)1 )
          result = (std::__exception_ptr::exception_ptr *)(*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
    }
  }
  else
    (*(void (__fastcall **)(char *, int))(*(_DWORD *)v3 + 132))(&v27, v3);
    pplx::get_ambient_scheduler((pplx *)&v42);
    v11 = v43;
    v17 = v42;
    v18 = v43;
    v19 = v42;
    v20 = 0;
    v21 = 0;
    v26 = 0;
    v24 = 0;
    v25 = 0;
    v22 = 0;
    v23 = 0;
    pplx::task_from_exception<int,std::__exception_ptr::exception_ptr>(
      v4,
      (const std::__exception_ptr::exception_ptr *)&v27,
      (int)&v17);
    if ( v11 )
      v12 = (unsigned int *)(v11 + 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 == 1 )
        v15 = (unsigned int *)(v11 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
    result = std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v27);
  return result;
}


_DWORD *__fastcall Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1}::_Ios_Openmode(_DWORD *a1, int a2)
{
  return Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1}::_Ios_Openmode(
           a1,
           a2);
}


std::__exception_ptr::exception_ptr *__fastcall Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1}::operator() const(int a1, int a2, pplx::details::_Task_impl_base **a3)
{
  return Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1}::operator() const(
           a1,
           a2,
           a3);
}


int __fastcall Concurrency::streams::details::streambuf_state_manager<char>::sgetc(int a1)
{
  int v1; // r4@1
  const std::__exception_ptr::exception_ptr *v2; // r5@1
  unsigned int v3; // r7@1
  int result; // r0@3
  char v5; // r1@3
  std::__exception_ptr::exception_ptr *v6; // r0@7
  char v7; // [sp+4h] [bp-1Ch]@7
  int v8; // [sp+8h] [bp-18h]@1

  v1 = a1;
  v2 = (const std::__exception_ptr::exception_ptr *)(a1 + 12);
  v8 = 0;
  v3 = std::__exception_ptr::operator==((_DWORD *)(a1 + 12), &v8);
  std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v8);
  if ( !v3 )
  {
    v6 = std::__exception_ptr::exception_ptr::exception_ptr((std::__exception_ptr::exception_ptr *)&v7, v2);
    std::rethrow_exception(v6);
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1) == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 160))(v1);
    v5 = 0;
    if ( result == -1 )
      v5 = 1;
    *(_BYTE *)(v1 + 18) = v5;
  else
    result = -1;
  return result;
}


int __fastcall Concurrency::streams::details::streambuf_state_manager<char>::is_open(int a1)
{
  int v1; // r4@1
  int result; // r0@2

  v1 = a1;
  if ( (*(int (**)(void))(*(_DWORD *)a1 + 8))() )
    result = 1;
  else
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
  return result;
}


std::__exception_ptr::exception_ptr *__fastcall pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_LogWorkItemAndInvokeUserLambda<pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1} const&,pplx::task<bool>>(int a1, int a2, int a3, int a4)
{
  return pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_LogWorkItemAndInvokeUserLambda<pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1} const&,pplx::task<bool>>(
           a1,
           a2,
           a3,
           a4);
}


void __fastcall pplx::details::_PPLTaskHandle<int,pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>,pplx::details::_ContinuationTaskHandleBase>::~_PPLTaskHandle(void *ptr)
{
  pplx::details::_PPLTaskHandle<int,pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>,pplx::details::_ContinuationTaskHandleBase>::~_PPLTaskHandle(ptr);
}


int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::_commit(int result, int a2)
{
  *(_DWORD *)(result + 24) += a2;
  return result;
}


int __fastcall Concurrency::streams::streambuf<char>::getc(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1

  v2 = a1;
  v3 = Concurrency::streams::streambuf<char>::get_base(a2);
  return (*(int (__fastcall **)(int))(**(_DWORD **)v3 + 72))(v2);
}


int __fastcall Concurrency::streams::streambuf<char>::commit(int a1)
{
  int v1; // r0@1

  v1 = Concurrency::streams::streambuf<char>::get_base(a1);
  return (*(int (**)(void))(**(_DWORD **)v1 + 120))();
}


int __fastcall Concurrency::streams::streambuf<char>::getn(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r0@1

  v2 = a1;
  v3 = Concurrency::streams::streambuf<char>::get_base(a2);
  return (*(int (__fastcall **)(int))(**(_DWORD **)v3 + 88))(v2);
}


unsigned int __fastcall Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r8@1
  int v6; // r7@1
  int v7; // r5@1
  int v8; // r9@1
  unsigned int *v9; // r6@2
  unsigned int v10; // r0@2
  unsigned int v11; // r2@5
  unsigned int v12; // r3@6
  unsigned int v13; // r0@9
  void (__fastcall *v14)(int *, int, signed int); // r3@12
  int v15; // r0@14
  int v16; // r1@15
  bool v17; // zf@15
  int v18; // r0@19
  unsigned int *v19; // r0@20
  unsigned int v20; // r1@22
  int v21; // r5@25
  unsigned int *v22; // r1@26
  unsigned int v23; // r0@28
  unsigned int *v24; // r4@32
  unsigned int v25; // r0@34
  int v26; // r5@41
  unsigned int *v27; // r1@42
  unsigned int v28; // r0@44
  unsigned int *v29; // r4@48
  unsigned int v30; // r0@50
  unsigned int result; // r0@57
  unsigned int *v32; // r4@61
  char *v33; // r5@71
  int v34; // r3@71
  int v35; // [sp+0h] [bp-48h]@19
  int v36; // [sp+4h] [bp-44h]@19
  int v37; // [sp+8h] [bp-40h]@7
  int v38; // [sp+Ch] [bp-3Ch]@7
  int v39; // [sp+10h] [bp-38h]@13
  void (__cdecl *v40)(int *); // [sp+18h] [bp-30h]@12
  int v41; // [sp+1Ch] [bp-2Ch]@13
  int v42; // [sp+20h] [bp-28h]@14

  v5 = *(_DWORD *)(a2 + 8);
  v6 = a4;
  v7 = a3;
  v8 = a1;
  if ( !v5 )
    std::__throw_bad_weak_ptr();
  v9 = (unsigned int *)(v5 + 4);
  v10 = *(_DWORD *)(v5 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v10 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v11 = __ldrex(v9);
      if ( v11 == v10 )
        break;
      __clrex();
      v10 = v11;
    }
    v12 = __strex(v10 + 1, v9);
    v10 = v11;
  }
  while ( v12 );
  __dmb();
  v37 = *(_DWORD *)(a2 + 4);
  v38 = v5;
  if ( &pthread_create )
    __dmb();
    do
      v13 = __ldrex(v9);
    while ( __strex(v13 + 1, v9) );
  else
    ++*v9;
  v40 = 0;
  v14 = *(void (__fastcall **)(int *, int, signed int))(v6 + 8);
  if ( v14 )
    v14(&v39, v6, 2);
    v41 = *(_DWORD *)(v6 + 12);
    v40 = *(void (__cdecl **)(int *))(v6 + 8);
  v42 = a5;
  v15 = *(_DWORD *)v7;
  if ( !*(_DWORD *)v7 )
    v33 = j___cxa_allocate_exception(8);
    *(_DWORD *)v33 = &off_26D7A9C;
    sub_119C884((void **)v33 + 1, "is_done() cannot be called on a default constructed task.");
    j___cxa_throw(
      (int)v33,
      (int)&`typeinfo for'pplx::invalid_operation,
      (int)pplx::invalid_operation::~invalid_operation,
      v34);
  v16 = *(_DWORD *)(v15 + 4);
  v17 = v16 == 3;
  if ( v16 != 3 )
    v17 = *(_DWORD *)(v15 + 4) == 4;
  if ( v17 )
    v35 = *(_DWORD *)v7;
    v18 = *(_DWORD *)(v7 + 4);
    v36 = v18;
    if ( v18 )
      v19 = (unsigned int *)(v18 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 + 1, v19) );
      }
      else
        ++*v19;
    Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1}::operator() const(
      v8,
      (int)&v37,
      (pplx::details::_Task_impl_base **)&v35);
    v21 = v36;
    if ( v36 )
      v22 = (unsigned int *)(v36 + 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 == 1 )
        v24 = (unsigned int *)(v21 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
        if ( &pthread_create )
        {
          __dmb();
          do
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
        }
        else
          v25 = (*v24)--;
        if ( v25 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
    pplx::task<bool>::then<pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1}>(
      (_DWORD *)v7,
      (int)&v37);
  if ( v40 )
    v40(&v39);
  v26 = v38;
  if ( v38 )
    v27 = (unsigned int *)(v38 + 4);
    if ( &pthread_create )
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    else
      v28 = (*v27)--;
    if ( v28 == 1 )
      v29 = (unsigned int *)(v26 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
      result = __ldrex(v9);
    while ( __strex(result - 1, v9) );
    result = (*v9)--;
  if ( result == 1 )
    v32 = (unsigned int *)(v5 + 8);
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
        result = __ldrex(v32);
      while ( __strex(result - 1, v32) );
      result = (*v32)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return result;
}


int __fastcall pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::~_ContinuationTaskHandle(int a1)
{
  int v1; // r4@1
  void (*v2)(void); // r3@1
  int v3; // r5@3
  unsigned int *v4; // r1@4
  unsigned int v5; // r0@6
  unsigned int *v6; // r6@10
  unsigned int v7; // r0@12
  int v8; // r5@17
  unsigned int *v9; // r1@18
  unsigned int v10; // r0@20
  unsigned int *v11; // r6@24
  unsigned int v12; // r0@26
  int v13; // r5@31
  unsigned int *v14; // r1@32
  unsigned int v15; // r0@34
  unsigned int *v16; // r6@38
  unsigned int v17; // r0@40

  v1 = a1;
  *(_DWORD *)a1 = &off_26DD830;
  v2 = *(void (**)(void))(a1 + 48);
  if ( v2 )
    v2();
  v3 = *(_DWORD *)(v1 + 36);
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
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
  v8 = *(_DWORD *)(v1 + 28);
  if ( v8 )
    v9 = (unsigned int *)(v8 + 4);
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
  *(_DWORD *)v1 = &off_26DD848;
  v13 = *(_DWORD *)(v1 + 20);
  if ( v13 )
    v14 = (unsigned int *)(v13 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  return v1;
}


unsigned int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::_getn(int a1, int a2, int a3, unsigned int a4)
{
  int v4; // r6@1
  int v5; // r9@1
  unsigned int v6; // r4@1
  int v7; // r8@1
  int v8; // r7@1
  __int64 v9; // r0@2
  int v10; // r0@4
  int v11; // r11@4
  int v12; // r7@8
  int v13; // r4@14
  unsigned int result; // r0@14
  unsigned int *v15; // r1@15
  unsigned int *v16; // r5@21
  int v17; // [sp+0h] [bp-58h]@14
  int v18; // [sp+4h] [bp-54h]@14
  int v19; // [sp+8h] [bp-50h]@14
  int v20; // [sp+Ch] [bp-4Ch]@14
  char v21; // [sp+14h] [bp-44h]@14
  int v22; // [sp+18h] [bp-40h]@14
  int v23; // [sp+1Ch] [bp-3Ch]@14
  int v24; // [sp+20h] [bp-38h]@14
  int v25; // [sp+24h] [bp-34h]@14
  __int16 v26; // [sp+28h] [bp-30h]@14
  int v27; // [sp+2Ch] [bp-2Ch]@14
  int v28; // [sp+30h] [bp-28h]@14

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = 0;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 36))(a2) )
  {
    LODWORD(v9) = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 36))(v4);
    HIDWORD(v9) = *(_DWORD *)(v4 + 24);
    if ( (unsigned int)v9 < v6 )
      v6 = v9;
    LODWORD(v9) = 1;
    v11 = v6 + HIDWORD(v9);
    if ( v6 + HIDWORD(v9) >= v6 )
      v10 = 0;
    if ( v10 )
      msl::safeint3::SafeIntInternal::SafeIntExceptionHandler<msl::safeint3::SafeIntException>::SafeIntOnOverflow();
    LODWORD(v9) = *(_DWORD *)(v4 + 20);
    if ( *(_DWORD *)(v9 - 4) <= -1 )
    {
      v12 = v9 + HIDWORD(v9);
    }
    else
      sub_119CB68((const void **)(v4 + 20));
      v9 = *(_QWORD *)(v4 + 20);
      if ( *(_DWORD *)(v9 - 4) > -1 )
      {
        sub_119CB68((const void **)(v4 + 20));
        LODWORD(v9) = *(_DWORD *)(v4 + 20);
      }
    if ( (_DWORD)v9 + v11 != v12 )
      _aeabi_memmove(v7, v12);
    v8 = v6;
    *(_DWORD *)(v4 + 24) = v11;
  }
  pplx::get_ambient_scheduler((pplx *)&v27);
  v13 = v28;
  v17 = v27;
  v18 = v28;
  v19 = v27;
  v20 = 0;
  v21 = 0;
  v26 = 0;
  v24 = 0;
  v25 = 0;
  v22 = 0;
  v23 = 0;
  pplx::task_from_result<unsigned int>(v5, v8, (int)&v17);
  result = 0;
  if ( v13 )
    v15 = (unsigned int *)(v13 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
    if ( result == 1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
      else
        result = (*v16)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  return result;
}


signed int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::acquire(int a1, _DWORD *a2, int *a3)
{
  int *v3; // r6@1
  _DWORD *v4; // r4@1
  signed int v5; // r7@1
  int v6; // r5@1
  int v7; // r0@2
  char *v8; // r0@3
  int v9; // r5@3
  char *v10; // t1@3
  int v11; // r6@3

  v3 = a3;
  v4 = a2;
  v5 = 0;
  v6 = a1;
  *a2 = 0;
  *a3 = 0;
  if ( (*(int (**)(void))(*(_DWORD *)a1 + 8))() == 1 )
  {
    v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 36))(v6);
    *v3 = v7;
    if ( v7 )
    {
      v10 = *(char **)(v6 + 20);
      v9 = v6 + 20;
      v8 = v10;
      v11 = *(_DWORD *)(v9 + 4);
      if ( *((_DWORD *)v10 - 1) >= 0 )
      {
        sub_119CB68((const void **)v9);
        v8 = *(char **)v9;
      }
      *v4 = &v8[v11];
    }
    v5 = 1;
  }
  return v5;
}


void __fastcall pplx::task<int>::_ThenImpl<int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1}>(int a1, _DWORD *a2, int a3, int a4)
{
  pplx::task<int>::_ThenImpl<int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1}>(
    a1,
    a2,
    a3,
    a4);
}


int __fastcall Concurrency::streams::details::streambuf_state_manager<char>::close(int a1, int a2, int a3, const std::__exception_ptr::exception_ptr *a4)
{
  int v4; // r5@1
  std::__exception_ptr::exception_ptr *v5; // r7@1
  int v6; // r10@1
  const std::__exception_ptr::exception_ptr *v7; // r8@1
  int v8; // r9@1
  unsigned int v9; // r6@1
  int v11; // [sp+4h] [bp-24h]@1

  v4 = a2;
  v5 = (std::__exception_ptr::exception_ptr *)(a2 + 12);
  v6 = a1;
  v11 = 0;
  v7 = a4;
  v8 = a3;
  v9 = std::__exception_ptr::operator==((_DWORD *)(a2 + 12), &v11);
  std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v11);
  if ( v9 == 1 )
    std::__exception_ptr::exception_ptr::operator=(v5, v7);
  return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v4 + 44))(v6, v4, v8);
}


void __fastcall pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_Continue(int a1)
{
  int v1; // r4@1
  int v2; // r6@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  int v5; // r5@5
  unsigned int *v6; // r1@6
  unsigned int v7; // r0@8
  unsigned int *v8; // r7@13
  unsigned int v9; // r0@15
  int v10; // r4@21
  unsigned int *v11; // r1@22
  unsigned int v12; // r0@24
  unsigned int *v13; // r5@28
  unsigned int v14; // r0@30
  int v15; // r4@35
  unsigned int *v16; // r1@36
  unsigned int v17; // r0@38
  unsigned int *v18; // r5@42
  unsigned int v19; // r0@44
  char v20; // [sp+4h] [bp-24h]@21
  int v21; // [sp+8h] [bp-20h]@21
  int v22; // [sp+Ch] [bp-1Ch]@1
  int v23; // [sp+10h] [bp-18h]@1

  v1 = a1;
  v23 = 0;
  v22 = *(_DWORD *)(a1 + 24);
  v2 = *(_DWORD *)(a1 + 28);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
      v5 = v23;
      if ( v23 )
      {
        v6 = (unsigned int *)(v23 + 4);
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
          v8 = (unsigned int *)(v5 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
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
            (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
      }
    }
    else
      ++*v3;
    v23 = v2;
  }
  pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_LogWorkItemAndInvokeUserLambda<pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1} const&,pplx::task<bool>>(
    (int)&v20,
    v1,
    v1 + 32,
    (int)&v22);
  pplx::details::_Task_impl_base::_AsyncInit<bool,bool>(v1 + 16, (int *)&v20);
  v10 = v21;
  if ( v21 )
    v11 = (unsigned int *)(v21 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  v15 = v23;
  if ( v23 )
    v16 = (unsigned int *)(v23 + 4);
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
}


std::__exception_ptr::exception_ptr *__fastcall Concurrency::streams::streambuf<char>::close(pplx *a1, int a2, int a3, const std::__exception_ptr::exception_ptr *a4)
{
  pplx *v4; // r9@1
  const std::__exception_ptr::exception_ptr *v5; // r7@1
  int v6; // r10@1
  __int64 v7; // kr00_8@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  void (__fastcall *v10)(pplx *, _DWORD, int, char *); // r6@8
  std::__exception_ptr::exception_ptr *result; // r0@8
  int v12; // r6@9
  unsigned int *v13; // r1@10
  unsigned int *v14; // r4@16
  unsigned int *v15; // r1@24
  unsigned int *v16; // r4@30
  int v17; // [sp+0h] [bp-58h]@9
  int v18; // [sp+4h] [bp-54h]@9
  int v19; // [sp+8h] [bp-50h]@9
  int v20; // [sp+Ch] [bp-4Ch]@9
  char v21; // [sp+14h] [bp-44h]@9
  int v22; // [sp+18h] [bp-40h]@9
  int v23; // [sp+1Ch] [bp-3Ch]@9
  int v24; // [sp+20h] [bp-38h]@9
  int v25; // [sp+24h] [bp-34h]@9
  __int16 v26; // [sp+28h] [bp-30h]@9
  char v27; // [sp+2Ch] [bp-2Ch]@8
  int v28; // [sp+30h] [bp-28h]@9
  int v29; // [sp+34h] [bp-24h]@9

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = *(_QWORD *)Concurrency::streams::streambuf<char>::get_base(a2);
  if ( HIDWORD(v7) )
  {
    v8 = (unsigned int *)(HIDWORD(v7) + 4);
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
  if ( (_DWORD)v7 )
    v10 = *(void (__fastcall **)(pplx *, _DWORD, int, char *))(*(_DWORD *)v7 + 48);
    std::__exception_ptr::exception_ptr::exception_ptr((std::__exception_ptr::exception_ptr *)&v27, v5);
    v10(v4, v7, v6, &v27);
    result = std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v27);
  else
    pplx::get_ambient_scheduler((pplx *)&v28);
    v12 = v29;
    v17 = v28;
    v18 = v29;
    v19 = v28;
    v20 = 0;
    v21 = 0;
    v26 = 0;
    v24 = 0;
    v25 = 0;
    v22 = 0;
    v23 = 0;
    result = (std::__exception_ptr::exception_ptr *)pplx::task_from_result(v4, (const pplx::task_options *)&v17);
    if ( v12 )
      v13 = (unsigned int *)(v12 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (std::__exception_ptr::exception_ptr *)__ldrex(v13);
        while ( __strex((unsigned int)result - 1, v13) );
      }
      else
        result = (std::__exception_ptr::exception_ptr *)(*v13)--;
      if ( result == (std::__exception_ptr::exception_ptr *)1 )
        v14 = (unsigned int *)(v12 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (std::__exception_ptr::exception_ptr *)__ldrex(v14);
          while ( __strex((unsigned int)result - 1, v14) );
        }
        else
          result = (std::__exception_ptr::exception_ptr *)(*v14)--;
        if ( result == (std::__exception_ptr::exception_ptr *)1 )
          result = (std::__exception_ptr::exception_ptr *)(*(int (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
    v15 = (unsigned int *)(HIDWORD(v7) + 4);
        result = (std::__exception_ptr::exception_ptr *)__ldrex(v15);
      while ( __strex((unsigned int)result - 1, v15) );
      result = (std::__exception_ptr::exception_ptr *)(*v15)--;
    if ( result == (std::__exception_ptr::exception_ptr *)1 )
      v16 = (unsigned int *)(HIDWORD(v7) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v7) + 8))(HIDWORD(v7));
          result = (std::__exception_ptr::exception_ptr *)__ldrex(v16);
        while ( __strex((unsigned int)result - 1, v16) );
        result = (std::__exception_ptr::exception_ptr *)(*v16)--;
        result = (std::__exception_ptr::exception_ptr *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v7) + 12))(HIDWORD(v7));
  return result;
}


int __fastcall pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_ContinuationTaskHandle(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r4@1
  int v7; // r0@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r2@4
  int v10; // r0@7
  unsigned int *v11; // r0@8
  unsigned int v12; // r1@10

  v6 = a1;
  *(_DWORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 9) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26DD848;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a3;
  v7 = *(_DWORD *)(a3 + 4);
  *(_DWORD *)(v6 + 20) = v7;
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
  *(_DWORD *)v6 = &off_26DD830;
  *(_DWORD *)(v6 + 24) = *(_DWORD *)a2;
  v10 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(v6 + 28) = v10;
  if ( v10 )
    v11 = (unsigned int *)(v10 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
      ++*v11;
  Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1}::_Ios_Openmode(
    (_DWORD *)(v6 + 32),
    a4);
  *(_BYTE *)(v6 + 9) = 1;
  *(_DWORD *)(v6 + 12) = a6;
  return v6;
}


int __fastcall Concurrency::streams::streambuf<char>::alloc(int a1)
{
  int v1; // r0@1

  v1 = Concurrency::streams::streambuf<char>::get_base(a1);
  return (*(int (**)(void))(**(_DWORD **)v1 + 116))();
}


void __fastcall pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_Continue(int a1)
{
  int v1; // r4@1
  int v2; // r6@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  int v5; // r5@5
  unsigned int *v6; // r1@6
  unsigned int v7; // r0@8
  unsigned int *v8; // r7@13
  unsigned int v9; // r0@15
  int v10; // r4@21
  unsigned int *v11; // r1@22
  unsigned int v12; // r0@24
  unsigned int *v13; // r5@28
  unsigned int v14; // r0@30
  int v15; // r4@35
  unsigned int *v16; // r1@36
  unsigned int v17; // r0@38
  unsigned int *v18; // r5@42
  unsigned int v19; // r0@44
  char v20; // [sp+4h] [bp-24h]@21
  int v21; // [sp+8h] [bp-20h]@21
  int v22; // [sp+Ch] [bp-1Ch]@1
  int v23; // [sp+10h] [bp-18h]@1

  v1 = a1;
  v23 = 0;
  v22 = *(_DWORD *)(a1 + 24);
  v2 = *(_DWORD *)(a1 + 28);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
      v5 = v23;
      if ( v23 )
      {
        v6 = (unsigned int *)(v23 + 4);
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
          v8 = (unsigned int *)(v5 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
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
            (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
      }
    }
    else
      ++*v3;
    v23 = v2;
  }
  pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_LogWorkItemAndInvokeUserLambda<pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1} const&,pplx::task<int>>(
    (int)&v20,
    v1,
    v1 + 32,
    (int)&v22);
  pplx::details::_Task_impl_base::_AsyncInit<int,int>(v1 + 16, (int *)&v20);
  v10 = v21;
  if ( v21 )
    v11 = (unsigned int *)(v21 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  v15 = v23;
  if ( v23 )
    v16 = (unsigned int *)(v23 + 4);
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
}


std::__exception_ptr::exception_ptr *__fastcall Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1}::operator() const(int a1, int a2, pplx::details::_Task_impl_base **a3)
{
  return Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1}::operator() const(
           a1,
           a2,
           a3);
}


int __fastcall Concurrency::streams::streambuf<char>::can_read(int a1)
{
  int v1; // r0@1

  v1 = Concurrency::streams::streambuf<char>::get_base(a1);
  return (*(int (**)(void))(**(_DWORD **)v1 + 8))();
}


void __fastcall Concurrency::streams::details::streambuf_state_manager<char>::~streambuf_state_manager(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = a1;
  *(_DWORD *)a1 = &off_26DD570;
  std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)(a1 + 12));
  v2 = *(_DWORD *)(v1 + 8);
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
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::basic_container_buffer(int a1, unsigned int a2)
{
  int v2; // r5@1
  unsigned int v3; // r4@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_26DD570;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  std::__exception_ptr::exception_ptr::exception_ptr((std::__exception_ptr::exception_ptr *)(a1 + 12));
  *(_BYTE *)(v2 + 16) = (v3 >> 3) & 1;
  *(_BYTE *)(v2 + 17) = (v3 >> 4) & 1;
  *(_BYTE *)(v2 + 18) = 0;
  *(_BYTE *)(v2 + 19) = 0;
  *(_DWORD *)v2 = &off_26DD4A0;
  *(_DWORD *)(v2 + 20) = &unk_28898CC;
  *(_DWORD *)(v2 + 24) = 0;
  Concurrency::streams::details::basic_container_buffer<std::string>::validate_mode(v3);
  return v2;
}


int __fastcall pplx::details::_PPLTaskHandle<int,pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>,pplx::details::_ContinuationTaskHandleBase>::~_PPLTaskHandle(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = a1;
  *(_DWORD *)a1 = &off_26DD848;
  v2 = *(_DWORD *)(a1 + 20);
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


std::__exception_ptr::exception_ptr *__fastcall Concurrency::streams::details::streambuf_state_manager<char>::putn_nocopy(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r8@1
  int v6; // r6@1
  int v7; // r7@1
  __int64 v8; // r1@3
  std::__exception_ptr::exception_ptr *result; // r0@3
  int v10; // r4@5
  unsigned int *v11; // r1@6
  int v12; // r5@12
  unsigned int *v13; // r1@13
  unsigned int *v14; // r5@19
  unsigned int *v15; // r4@25
  int (__fastcall *v16)(int); // r1@31
  int v17; // r0@31
  void *v18; // [sp+8h] [bp-68h]@3
  __int64 v19; // [sp+10h] [bp-60h]@3
  char v20; // [sp+18h] [bp-58h]@3
  int v21; // [sp+1Ch] [bp-54h]@5
  int v22; // [sp+20h] [bp-50h]@12
  int v23; // [sp+24h] [bp-4Ch]@12
  int v24; // [sp+28h] [bp-48h]@12
  int v25; // [sp+2Ch] [bp-44h]@12
  char v26; // [sp+34h] [bp-3Ch]@12
  int v27; // [sp+38h] [bp-38h]@12
  int v28; // [sp+3Ch] [bp-34h]@12
  int v29; // [sp+40h] [bp-30h]@12
  int v30; // [sp+44h] [bp-2Ch]@12
  __int16 v31; // [sp+48h] [bp-28h]@12
  int v32; // [sp+4Ch] [bp-24h]@10
  int v33; // [sp+50h] [bp-20h]@12
  int v34; // [sp+54h] [bp-1Ch]@12

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 12))(a2) )
  {
    if ( v6 )
    {
      (*(void (__fastcall **)(char *, int, int, int))(*(_DWORD *)v4 + 144))(&v20, v4, v7, v6);
      v18 = operator new(1u);
      LODWORD(v8) = std::_Function_base::_Base_manager<Concurrency::streams::details::streambuf_state_manager<char>::putn_nocopy(char const*,unsigned int)::{lambda(unsigned int)#1}>::_M_manager;
      HIDWORD(v8) = std::_Function_handler<bool ()(unsigned int),Concurrency::streams::details::streambuf_state_manager<char>::putn_nocopy(char const*,unsigned int)::{lambda(unsigned int)#1}>::_M_invoke;
      v19 = v8;
      result = (std::__exception_ptr::exception_ptr *)Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<unsigned int>(
                                                        v5,
                                                        v4,
                                                        (int)&v20,
                                                        (int)&v18,
                                                        24);
      if ( (_DWORD)v19 )
        result = (std::__exception_ptr::exception_ptr *)((int (*)(void))v19)();
      v10 = v21;
      if ( v21 )
      {
        v11 = (unsigned int *)(v21 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (std::__exception_ptr::exception_ptr *)__ldrex(v11);
          while ( __strex((unsigned int)result - 1, v11) );
        }
        else
          result = (std::__exception_ptr::exception_ptr *)(*v11)--;
        if ( result == (std::__exception_ptr::exception_ptr *)1 )
          v14 = (unsigned int *)(v10 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = (std::__exception_ptr::exception_ptr *)__ldrex(v14);
            while ( __strex((unsigned int)result - 1, v14) );
          }
          else
            result = (std::__exception_ptr::exception_ptr *)(*v14)--;
          if ( result == (std::__exception_ptr::exception_ptr *)1 )
            v16 = *(int (__fastcall **)(int))(*(_DWORD *)v10 + 12);
            v17 = v10;
            return (std::__exception_ptr::exception_ptr *)v16(v17);
      }
    }
    else
      pplx::get_ambient_scheduler((pplx *)&v33);
      v12 = v34;
      v22 = v33;
      v23 = v34;
      v24 = v33;
      v25 = 0;
      v26 = 0;
      v31 = 0;
      v29 = 0;
      v30 = 0;
      v27 = 0;
      v28 = 0;
      result = (std::__exception_ptr::exception_ptr *)pplx::task_from_result<unsigned int>(v5, 0, (int)&v22);
      if ( v12 )
        v13 = (unsigned int *)(v12 + 4);
            result = (std::__exception_ptr::exception_ptr *)__ldrex(v13);
          while ( __strex((unsigned int)result - 1, v13) );
          result = (std::__exception_ptr::exception_ptr *)(*v13)--;
          v15 = (unsigned int *)(v12 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
              result = (std::__exception_ptr::exception_ptr *)__ldrex(v15);
            while ( __strex((unsigned int)result - 1, v15) );
            result = (std::__exception_ptr::exception_ptr *)(*v15)--;
            v16 = *(int (__fastcall **)(int))(*(_DWORD *)v12 + 12);
            v17 = v12;
  }
  else
    v32 = 0;
    result = Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_value_task<unsigned int>(
               v5,
               v4,
               &v32);
  return result;
}


unsigned int __fastcall Concurrency::streams::details::streambuf_state_manager<char>::close(std::_Ios_Openmode)::{lambda(void)#2}::operator() const(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  int v7; // r0@9
  unsigned int *v8; // r1@10
  unsigned int v9; // r2@11
  unsigned int result; // r0@14
  int v11; // r4@14
  unsigned int *v12; // r1@15
  unsigned int *v13; // r5@21
  int v14; // r4@28
  unsigned int *v15; // r1@29
  unsigned int *v16; // r5@35
  int v17; // r4@42
  unsigned int *v18; // r1@43
  unsigned int *v19; // r5@49
  int v20; // [sp+0h] [bp-58h]@7
  int v21; // [sp+4h] [bp-54h]@7
  int v22; // [sp+8h] [bp-50h]@7
  int v23; // [sp+Ch] [bp-4Ch]@7
  char v24; // [sp+14h] [bp-44h]@7
  int v25; // [sp+18h] [bp-40h]@7
  void *ptr; // [sp+1Ch] [bp-3Ch]@7
  int v27; // [sp+20h] [bp-38h]@7
  int v28; // [sp+24h] [bp-34h]@7
  __int16 v29; // [sp+28h] [bp-30h]@7
  int v30; // [sp+30h] [bp-28h]@1
  int v31; // [sp+34h] [bp-24h]@1
  char v32; // [sp+38h] [bp-20h]@1
  int v33; // [sp+3Ch] [bp-1Ch]@42
  int v34; // [sp+40h] [bp-18h]@7
  int v35; // [sp+44h] [bp-14h]@7

  v2 = a2;
  v3 = a1;
  (*(void (__fastcall **)(char *))(**(_DWORD **)a2 + 196))(&v32);
  v30 = *(_DWORD *)v2;
  v4 = *(_DWORD *)(v2 + 4);
  v31 = v4;
  if ( v4 )
  {
    v5 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  pplx::get_ambient_scheduler((pplx *)&v34);
  v20 = v34;
  v21 = v35;
  v22 = v34;
  v23 = 0;
  v24 = 0;
  v29 = 0;
  v27 = 0;
  v28 = 0;
  v25 = 0;
  ptr = 0;
  pplx::task<void>::then<Concurrency::streams::details::streambuf_state_manager<char>::close(std::_Ios_Openmode)::{lambda(void)#2}::operator() const(void)::{lambda(void)#1}>(
    v3,
    (int *)&v32,
    (int)&v30,
    (int)&v20);
  if ( ptr )
    operator delete(ptr);
  v7 = v23;
  if ( v23 )
    v8 = (unsigned int *)(v23 + 4);
    __dmb();
    do
      v9 = __ldrex(v8);
    while ( __strex(v9 - 1, v8) );
    if ( v9 == 1 )
      (*(void (**)(void))(*(_DWORD *)v7 + 8))();
  result = 0;
  v11 = v21;
  if ( v21 )
    v12 = (unsigned int *)(v21 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v14 = v31;
  if ( v31 )
    v15 = (unsigned int *)(v31 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  v17 = v33;
  if ( v33 )
    v18 = (unsigned int *)(v33 + 4);
        result = __ldrex(v18);
      while ( __strex(result - 1, v18) );
      result = (*v18)--;
      v19 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
          result = __ldrex(v19);
        while ( __strex(result - 1, v19) );
        result = (*v19)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  return result;
}


unsigned int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::_scopy(int a1, int a2, unsigned int a3)
{
  int v3; // r6@1
  int v4; // r8@1
  unsigned int v5; // r4@1
  __int64 v6; // r0@2
  int v7; // r0@4
  int v8; // r5@4
  const void **v9; // r7@7
  int v10; // r6@8
  unsigned int result; // r0@10

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( (*(int (**)(void))(*(_DWORD *)a1 + 36))() )
  {
    LODWORD(v6) = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 36))(v3);
    HIDWORD(v6) = *(_DWORD *)(v3 + 24);
    if ( (unsigned int)v6 < v5 )
      v5 = v6;
    LODWORD(v6) = 1;
    v8 = v5 + HIDWORD(v6);
    if ( v5 + HIDWORD(v6) >= v5 )
      v7 = 0;
    if ( v7 )
      msl::safeint3::SafeIntInternal::SafeIntExceptionHandler<msl::safeint3::SafeIntException>::SafeIntOnOverflow();
    v9 = (const void **)(v3 + 20);
    LODWORD(v6) = *(_DWORD *)(v3 + 20);
    if ( *(_DWORD *)(v6 - 4) <= -1 )
    {
      v10 = v6 + HIDWORD(v6);
    }
    else
      sub_119CB68((const void **)(v3 + 20));
      v6 = *(_QWORD *)(v3 + 20);
      if ( *(_DWORD *)(v6 - 4) > -1 )
      {
        sub_119CB68(v9);
        LODWORD(v6) = *v9;
      }
    if ( (_DWORD)v6 + v8 != v10 )
      _aeabi_memmove(v4, v10);
    result = v5;
  }
  else
    result = 0;
  return result;
}


unsigned int __fastcall Concurrency::streams::details::streambuf_state_manager<char>::close(int a1, int a2, char a3)
{
  int v3; // r9@1
  char v4; // r10@1
  int v5; // r6@1
  int v6; // r5@1
  unsigned int *v7; // r1@2
  unsigned int v8; // r0@4
  unsigned int *v9; // r4@8
  unsigned int v10; // r0@10
  __int64 v11; // r0@18
  int v12; // r5@18
  unsigned int *v13; // r1@19
  unsigned int v14; // r0@21
  unsigned int *v15; // r4@25
  unsigned int v16; // r0@27
  int v17; // r5@32
  unsigned int *v18; // r1@33
  unsigned int v19; // r0@35
  unsigned int *v20; // r4@39
  unsigned int v21; // r0@41
  int v22; // r8@46
  unsigned int v23; // r0@47
  unsigned int *v24; // r5@47
  unsigned int v25; // r1@50
  unsigned int v26; // r2@51
  int v27; // r4@54
  unsigned int v28; // r0@58
  unsigned int v29; // r0@62
  unsigned int *v30; // r7@66
  unsigned int v31; // r0@68
  int v32; // r0@75
  int v33; // r1@76
  bool v34; // zf@76
  unsigned int v35; // r0@82
  __int64 v36; // r0@86
  int v37; // r6@86
  unsigned int *v38; // r1@87
  unsigned int v39; // r0@89
  unsigned int v40; // r0@93
  unsigned int *v41; // r4@97
  unsigned int v42; // r0@99
  __int64 v43; // r0@103
  int v44; // r6@103
  unsigned int *v45; // r1@104
  unsigned int v46; // r0@106
  int v47; // r6@111
  unsigned int *v48; // r1@112
  unsigned int v49; // r0@114
  unsigned int *v50; // r4@118
  unsigned int v51; // r0@120
  int v52; // r6@125
  unsigned int *v53; // r1@126
  unsigned int v54; // r0@128
  unsigned int *v55; // r4@132
  unsigned int v56; // r0@134
  int v57; // r0@141
  unsigned int *v58; // r1@142
  unsigned int v59; // r2@143
  int v60; // r6@146
  unsigned int *v61; // r1@147
  unsigned int v62; // r0@149
  unsigned int *v63; // r4@153
  unsigned int v64; // r0@155
  int v65; // r6@160
  unsigned int *v66; // r1@161
  unsigned int v67; // r0@163
  unsigned int *v68; // r4@167
  unsigned int v69; // r0@169
  int v70; // r6@174
  unsigned int *v71; // r1@175
  unsigned int v72; // r0@177
  unsigned int *v73; // r4@181
  unsigned int v74; // r0@183
  unsigned int *v75; // r4@187
  unsigned int v76; // r0@189
  int v77; // r6@194
  unsigned int *v78; // r1@195
  unsigned int v79; // r0@197
  unsigned int *v80; // r4@201
  unsigned int v81; // r0@203
  int v82; // r0@210
  unsigned int *v83; // r1@211
  unsigned int v84; // r2@212
  int v85; // r6@215
  unsigned int *v86; // r1@216
  unsigned int v87; // r0@218
  unsigned int *v88; // r4@222
  unsigned int v89; // r0@224
  unsigned int *v90; // r1@230
  unsigned int v91; // r0@232
  int v92; // r4@243
  unsigned int *v93; // r1@244
  unsigned int v94; // r0@246
  unsigned int *v95; // r6@250
  unsigned int v96; // r0@252
  int v97; // r0@259
  unsigned int *v98; // r1@260
  unsigned int v99; // r2@261
  int v100; // r4@264
  unsigned int *v101; // r1@265
  unsigned int v102; // r0@267
  unsigned int *v103; // r6@271
  unsigned int v104; // r0@273
  unsigned int result; // r0@280
  unsigned int *v106; // r4@284
  char *v107; // r6@292
  int v108; // r3@292
  int v109; // [sp+0h] [bp-140h]@243
  int v110; // [sp+4h] [bp-13Ch]@243
  int v111; // [sp+8h] [bp-138h]@243
  int v112; // [sp+Ch] [bp-134h]@243
  char v113; // [sp+14h] [bp-12Ch]@243
  int v114; // [sp+18h] [bp-128h]@243
  void *v115; // [sp+1Ch] [bp-124h]@243
  int v116; // [sp+20h] [bp-120h]@243
  int v117; // [sp+24h] [bp-11Ch]@243
  __int16 v118; // [sp+28h] [bp-118h]@243
  char v119; // [sp+2Ch] [bp-114h]@243
  char v120; // [sp+30h] [bp-110h]@243
  int v121; // [sp+34h] [bp-10Ch]@243
  int v122; // [sp+38h] [bp-108h]@102
  int v123; // [sp+3Ch] [bp-104h]@102
  int v124; // [sp+40h] [bp-100h]@102
  int v125; // [sp+44h] [bp-FCh]@102
  char v126; // [sp+4Ch] [bp-F4h]@102
  int v127; // [sp+50h] [bp-F0h]@102
  void *v128; // [sp+54h] [bp-ECh]@102
  int v129; // [sp+58h] [bp-E8h]@102
  int v130; // [sp+5Ch] [bp-E4h]@102
  __int16 v131; // [sp+60h] [bp-E0h]@102
  int v132; // [sp+68h] [bp-D8h]@91
  int v133; // [sp+6Ch] [bp-D4h]@91
  char v134; // [sp+70h] [bp-D0h]@102
  int v135; // [sp+74h] [bp-CCh]@103
  int v136; // [sp+78h] [bp-C8h]@85
  int v137; // [sp+7Ch] [bp-C4h]@85
  int v138; // [sp+80h] [bp-C0h]@85
  int v139; // [sp+84h] [bp-BCh]@85
  char v140; // [sp+8Ch] [bp-B4h]@85
  int v141; // [sp+90h] [bp-B0h]@85
  void *ptr; // [sp+94h] [bp-ACh]@85
  int v143; // [sp+98h] [bp-A8h]@85
  int v144; // [sp+9Ch] [bp-A4h]@85
  __int16 v145; // [sp+A0h] [bp-A0h]@85
  int v146; // [sp+A8h] [bp-98h]@80
  int v147; // [sp+ACh] [bp-94h]@80
  char v148; // [sp+B0h] [bp-90h]@80
  int v149; // [sp+B4h] [bp-8Ch]@174
  char v150; // [sp+B8h] [bp-88h]@85
  int v151; // [sp+BCh] [bp-84h]@125
  char v152; // [sp+C0h] [bp-80h]@85
  int v153; // [sp+C4h] [bp-7Ch]@86
  char v154; // [sp+C8h] [bp-78h]@17
  int v155; // [sp+CCh] [bp-74h]@18
  int v156; // [sp+D0h] [bp-70h]@1
  int v157; // [sp+D4h] [bp-6Ch]@1
  int v158; // [sp+D8h] [bp-68h]@1
  int v159; // [sp+DCh] [bp-64h]@1
  char v160; // [sp+E4h] [bp-5Ch]@1
  int v161; // [sp+E8h] [bp-58h]@1
  int v162; // [sp+ECh] [bp-54h]@1
  int v163; // [sp+F0h] [bp-50h]@1
  int v164; // [sp+F4h] [bp-4Ch]@1
  __int16 v165; // [sp+F8h] [bp-48h]@1
  int v166; // [sp+100h] [bp-40h]@1
  int v167; // [sp+104h] [bp-3Ch]@1
  int v168; // [sp+108h] [bp-38h]@85
  int v169; // [sp+10Ch] [bp-34h]@85
  int v170; // [sp+110h] [bp-30h]@102
  int v171; // [sp+114h] [bp-2Ch]@102
  int v172; // [sp+118h] [bp-28h]@243
  int v173; // [sp+11Ch] [bp-24h]@243

  v3 = a1;
  v4 = a3;
  v5 = a2;
  pplx::get_ambient_scheduler((pplx *)&v166);
  v6 = v167;
  v156 = v166;
  v157 = v167;
  v158 = v166;
  v159 = 0;
  v160 = 0;
  v165 = 0;
  v163 = 0;
  v164 = 0;
  v161 = 0;
  v162 = 0;
  pplx::task_from_result((pplx *)v3, (const pplx::task_options *)&v156);
  if ( v6 )
  {
    v7 = (unsigned int *)(v6 + 4);
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
  }
  if ( v4 & 8 && (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5) == 1 )
    (*(void (__fastcall **)(char *, int))(*(_DWORD *)v5 + 192))(&v154, v5);
    if ( &v154 != (char *)v3 )
      v11 = *(_QWORD *)&v154;
      *(_DWORD *)&v154 = 0;
      v155 = 0;
      *(_DWORD *)v3 = v11;
      v12 = *(_DWORD *)(v3 + 4);
      *(_DWORD *)(v3 + 4) = HIDWORD(v11);
      if ( v12 )
        v13 = (unsigned int *)(v12 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        }
        else
          v14 = (*v13)--;
        if ( v14 == 1 )
          v15 = (unsigned int *)(v12 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
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
            (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
    v17 = v155;
    if ( v155 )
      v18 = (unsigned int *)(v155 + 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 == 1 )
        v20 = (unsigned int *)(v17 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  v22 = *(_DWORD *)(v5 + 8);
  if ( !v22 )
    std::__throw_bad_weak_ptr();
  v23 = *(_DWORD *)(v22 + 4);
  v24 = (unsigned int *)(v22 + 4);
  do
    while ( 1 )
      if ( !v23 )
        std::__throw_bad_weak_ptr();
      v25 = __ldrex(v24);
      if ( v25 == v23 )
        break;
      __clrex();
      v23 = v25;
    v26 = __strex(v23 + 1, v24);
    v23 = v25;
  while ( v26 );
  __dmb();
  v27 = *(_DWORD *)(v5 + 4);
  if ( &pthread_create )
    __dmb();
    do
      v28 = __ldrex(v24);
    while ( __strex(v28 + 1, v24) );
  else
    ++*v24;
      v29 = __ldrex(v24);
    while ( __strex(v29 - 1, v24) );
    v29 = (*v24)--;
  if ( v29 == 1 )
    v30 = (unsigned int *)(v22 + 8);
    (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
  if ( v4 & 0x10 && (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5) == 1 )
    v32 = *(_DWORD *)v3;
    if ( !*(_DWORD *)v3 )
      v107 = j___cxa_allocate_exception(8);
      *(_DWORD *)v107 = &off_26D7A9C;
      sub_119C884((void **)v107 + 1, "is_done() cannot be called on a default constructed task.");
      j___cxa_throw(
        (int)v107,
        (int)&`typeinfo for'pplx::invalid_operation,
        (int)pplx::invalid_operation::~invalid_operation,
        v108);
    v33 = *(_DWORD *)(v32 + 4);
    v34 = v33 == 3;
    if ( v33 != 3 )
      v34 = *(_DWORD *)(v32 + 4) == 4;
    if ( v34 )
      (*(void (__fastcall **)(char *, int))(*(_DWORD *)v5 + 196))(&v148, v5);
      v146 = v27;
      v147 = v22;
          v35 = __ldrex(v24);
        while ( __strex(v35 + 1, v24) );
        ++*v24;
      pplx::get_ambient_scheduler((pplx *)&v168);
      v136 = v168;
      v137 = v169;
      v138 = v168;
      v139 = 0;
      v140 = 0;
      v145 = 0;
      v143 = 0;
      v144 = 0;
      v141 = 0;
      ptr = 0;
      pplx::task<void>::then<Concurrency::streams::details::streambuf_state_manager<char>::close(std::_Ios_Openmode)::{lambda(void)#1}>(
        (int)&v150,
        (int *)&v148,
        (int)&v146,
        (int)&v136);
      pplx::operator&&((int)&v152, v3, (int)&v150);
      if ( &v152 != (char *)v3 )
        v36 = *(_QWORD *)&v152;
        *(_DWORD *)&v152 = 0;
        v153 = 0;
        *(_DWORD *)v3 = v36;
        v37 = *(_DWORD *)(v3 + 4);
        *(_DWORD *)(v3 + 4) = HIDWORD(v36);
        if ( v37 )
          v38 = (unsigned int *)(v37 + 4);
              v39 = __ldrex(v38);
            while ( __strex(v39 - 1, v38) );
            v39 = (*v38)--;
          if ( v39 == 1 )
            v41 = (unsigned int *)(v37 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 8))(v37);
            if ( &pthread_create )
            {
              __dmb();
              do
                v42 = __ldrex(v41);
              while ( __strex(v42 - 1, v41) );
            }
            else
              v42 = (*v41)--;
            if ( v42 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 12))(v37);
      v47 = v153;
      if ( v153 )
        v48 = (unsigned int *)(v153 + 4);
            v49 = __ldrex(v48);
          while ( __strex(v49 - 1, v48) );
          v49 = (*v48)--;
        if ( v49 == 1 )
          v50 = (unsigned int *)(v47 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 8))(v47);
              v51 = __ldrex(v50);
            while ( __strex(v51 - 1, v50) );
            v51 = (*v50)--;
          if ( v51 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 12))(v47);
      v52 = v151;
      if ( v151 )
        v53 = (unsigned int *)(v151 + 4);
            v54 = __ldrex(v53);
          while ( __strex(v54 - 1, v53) );
          v54 = (*v53)--;
        if ( v54 == 1 )
          v55 = (unsigned int *)(v52 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v52 + 8))(v52);
              v56 = __ldrex(v55);
            while ( __strex(v56 - 1, v55) );
            v56 = (*v55)--;
          if ( v56 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v52 + 12))(v52);
      if ( ptr )
        operator delete(ptr);
      v57 = v139;
      if ( v139 )
        v58 = (unsigned int *)(v139 + 4);
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
        if ( v59 == 1 )
          (*(void (**)(void))(*(_DWORD *)v57 + 8))();
      v60 = v137;
      if ( v137 )
        v61 = (unsigned int *)(v137 + 4);
            v62 = __ldrex(v61);
          while ( __strex(v62 - 1, v61) );
          v62 = (*v61)--;
        if ( v62 == 1 )
          v63 = (unsigned int *)(v60 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v60 + 8))(v60);
              v64 = __ldrex(v63);
            while ( __strex(v64 - 1, v63) );
            v64 = (*v63)--;
          if ( v64 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v60 + 12))(v60);
      v65 = v147;
      if ( v147 )
        v66 = (unsigned int *)(v147 + 4);
            v67 = __ldrex(v66);
          while ( __strex(v67 - 1, v66) );
          v67 = (*v66)--;
        if ( v67 == 1 )
          v68 = (unsigned int *)(v65 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v65 + 8))(v65);
              v69 = __ldrex(v68);
            while ( __strex(v69 - 1, v68) );
            v69 = (*v68)--;
          if ( v69 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v65 + 12))(v65);
      v70 = v149;
      if ( !v149 )
        goto LABEL_243;
      v71 = (unsigned int *)(v149 + 4);
          v72 = __ldrex(v71);
        while ( __strex(v72 - 1, v71) );
        v72 = (*v71)--;
      if ( v72 != 1 )
      v73 = (unsigned int *)(v70 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v70 + 8))(v70);
          v74 = __ldrex(v73);
        while ( __strex(v74 - 1, v73) );
LABEL_241:
        if ( v74 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v70 + 12))(v70);
LABEL_243:
        pplx::get_ambient_scheduler((pplx *)&v172);
        v109 = v172;
        v110 = v173;
        v111 = v172;
        v112 = 0;
        v113 = 0;
        v118 = 0;
        v116 = 0;
        v117 = 0;
        v114 = 0;
        v115 = 0;
        pplx::task<void>::then<Concurrency::streams::details::streambuf_state_manager<char>::close(std::_Ios_Openmode)::{lambda(pplx::task<void>)#1}>(
          (int)&v120,
          (int *)v3,
          (int)&v119,
          (int)&v109);
        v92 = v121;
        if ( v121 )
          v93 = (unsigned int *)(v121 + 4);
              v94 = __ldrex(v93);
            while ( __strex(v94 - 1, v93) );
            v94 = (*v93)--;
          if ( v94 == 1 )
            v95 = (unsigned int *)(v92 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v92 + 8))(v92);
                v96 = __ldrex(v95);
              while ( __strex(v96 - 1, v95) );
              v96 = (*v95)--;
            if ( v96 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v92 + 12))(v92);
        if ( v115 )
          operator delete(v115);
        v97 = v112;
        if ( v112 )
          v98 = (unsigned int *)(v112 + 4);
            v99 = __ldrex(v98);
          while ( __strex(v99 - 1, v98) );
          if ( v99 == 1 )
            (*(void (**)(void))(*(_DWORD *)v97 + 8))();
        v100 = v110;
        if ( v110 )
          v101 = (unsigned int *)(v110 + 4);
              v102 = __ldrex(v101);
            while ( __strex(v102 - 1, v101) );
            v102 = (*v101)--;
          if ( v102 == 1 )
            v103 = (unsigned int *)(v100 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v100 + 8))(v100);
                v104 = __ldrex(v103);
              while ( __strex(v104 - 1, v103) );
              v104 = (*v103)--;
            if ( v104 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v100 + 12))(v100);
        goto LABEL_278;
      v132 = v27;
      v133 = v22;
          v40 = __ldrex(v24);
        while ( __strex(v40 + 1, v24) );
      pplx::get_ambient_scheduler((pplx *)&v170);
      v122 = v170;
      v123 = v171;
      v124 = v170;
      v125 = 0;
      v126 = 0;
      v131 = 0;
      v129 = 0;
      v130 = 0;
      v127 = 0;
      v128 = 0;
      pplx::task<void>::then<Concurrency::streams::details::streambuf_state_manager<char>::close(std::_Ios_Openmode)::{lambda(void)#2}>(
        (int)&v134,
        (int *)v3,
        (int)&v132,
        (int)&v122);
      if ( &v134 != (char *)v3 )
        v43 = *(_QWORD *)&v134;
        *(_DWORD *)&v134 = 0;
        v135 = 0;
        *(_DWORD *)v3 = v43;
        v44 = *(_DWORD *)(v3 + 4);
        *(_DWORD *)(v3 + 4) = HIDWORD(v43);
        if ( v44 )
          v45 = (unsigned int *)(v44 + 4);
              v46 = __ldrex(v45);
            while ( __strex(v46 - 1, v45) );
            v46 = (*v45)--;
          if ( v46 == 1 )
            v75 = (unsigned int *)(v44 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 8))(v44);
                v76 = __ldrex(v75);
              while ( __strex(v76 - 1, v75) );
              v76 = (*v75)--;
            if ( v76 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 12))(v44);
      v77 = v135;
      if ( v135 )
        v78 = (unsigned int *)(v135 + 4);
            v79 = __ldrex(v78);
          while ( __strex(v79 - 1, v78) );
          v79 = (*v78)--;
        if ( v79 == 1 )
          v80 = (unsigned int *)(v77 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v77 + 8))(v77);
              v81 = __ldrex(v80);
            while ( __strex(v81 - 1, v80) );
            v81 = (*v80)--;
          if ( v81 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v77 + 12))(v77);
      if ( v128 )
        operator delete(v128);
      v82 = v125;
      if ( v125 )
        v83 = (unsigned int *)(v125 + 4);
          v84 = __ldrex(v83);
        while ( __strex(v84 - 1, v83) );
        if ( v84 == 1 )
          (*(void (**)(void))(*(_DWORD *)v82 + 8))();
      v85 = v123;
      if ( v123 )
        v86 = (unsigned int *)(v123 + 4);
            v87 = __ldrex(v86);
          while ( __strex(v87 - 1, v86) );
          v87 = (*v86)--;
        if ( v87 == 1 )
          v88 = (unsigned int *)(v85 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v85 + 8))(v85);
              v89 = __ldrex(v88);
            while ( __strex(v89 - 1, v88) );
            v89 = (*v88)--;
          if ( v89 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v85 + 12))(v85);
      v70 = v133;
      if ( !v133 )
      v90 = (unsigned int *)(v133 + 4);
          v91 = __ldrex(v90);
        while ( __strex(v91 - 1, v90) );
        v91 = (*v90)--;
      if ( v91 != 1 )
        goto LABEL_241;
    v74 = (*v73)--;
    goto LABEL_241;
LABEL_278:
      result = __ldrex(v24);
    while ( __strex(result - 1, v24) );
    result = (*v24)--;
  if ( result == 1 )
    v106 = (unsigned int *)(v22 + 8);
        result = __ldrex(v106);
      while ( __strex(result - 1, v106) );
      result = (*v106)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
  return result;
}


void __fastcall Concurrency::streams::container_buffer<std::string>::~container_buffer(void *ptr)
{
  Concurrency::streams::container_buffer<std::string>::~container_buffer(ptr);
}


void __fastcall pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::~_ContinuationTaskHandle(int a1)
{
  void *v1; // r0@1

  v1 = (void *)pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::~_ContinuationTaskHandle(a1);
  j_j_j__ZdlPv_4(v1);
}


unsigned int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::_ungetc(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  unsigned int result; // r0@2
  int v5; // r4@3
  unsigned int *v6; // r1@4
  unsigned int *v7; // r5@10
  int v8; // [sp+8h] [bp-58h]@3
  int v9; // [sp+Ch] [bp-54h]@3
  int v10; // [sp+10h] [bp-50h]@3
  int v11; // [sp+14h] [bp-4Ch]@3
  char v12; // [sp+1Ch] [bp-44h]@3
  int v13; // [sp+20h] [bp-40h]@3
  int v14; // [sp+24h] [bp-3Ch]@3
  int v15; // [sp+28h] [bp-38h]@3
  int v16; // [sp+2Ch] [bp-34h]@3
  __int16 v17; // [sp+30h] [bp-30h]@3
  int v18; // [sp+38h] [bp-28h]@1
  int v19; // [sp+3Ch] [bp-24h]@1
  int v20; // [sp+48h] [bp-18h]@3
  int v21; // [sp+4Ch] [bp-14h]@3

  v2 = a2;
  v3 = a1;
  (*(void (__fastcall **)(int *))(*(_DWORD *)a2 + 108))(&v18);
  if ( (v18 & v19) == -1 )
  {
    pplx::get_ambient_scheduler((pplx *)&v20);
    v5 = v21;
    v8 = v20;
    v9 = v21;
    v10 = v20;
    v11 = 0;
    v12 = 0;
    v17 = 0;
    v15 = 0;
    v16 = 0;
    v13 = 0;
    v14 = 0;
    result = pplx::task_from_result<int>(v3, -1, (int)&v8);
    if ( v5 )
    {
      v6 = (unsigned int *)(v5 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v6);
        while ( __strex(result - 1, v6) );
      }
      else
        result = (*v6)--;
      if ( result == 1 )
        v7 = (unsigned int *)(v5 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v7);
          while ( __strex(result - 1, v7) );
        }
        else
          result = (*v7)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
    }
  }
  else
    result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v2 + 72))(v3, v2);
  return result;
}


std::__exception_ptr::exception_ptr *__fastcall Concurrency::streams::details::streambuf_state_manager<char>::ungetc(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  __int64 v4; // r1@2
  std::__exception_ptr::exception_ptr *result; // r0@2
  int v6; // r4@4
  unsigned int *v7; // r1@5
  unsigned int *v8; // r5@12
  void *v9; // [sp+4h] [bp-2Ch]@2
  __int64 v10; // [sp+Ch] [bp-24h]@2
  char v11; // [sp+14h] [bp-1Ch]@2
  int v12; // [sp+18h] [bp-18h]@4
  int v13; // [sp+1Ch] [bp-14h]@9

  v2 = a2;
  v3 = a1;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 8))(a2) )
  {
    (*(void (__fastcall **)(char *, int))(*(_DWORD *)v2 + 168))(&v11, v2);
    v9 = operator new(1u);
    LODWORD(v4) = std::_Function_base::_Base_manager<Concurrency::streams::details::streambuf_state_manager<char>::ungetc(void)::{lambda(int)#1}>::_M_manager;
    HIDWORD(v4) = std::_Function_handler<bool ()(int),Concurrency::streams::details::streambuf_state_manager<char>::ungetc(void)::{lambda(int)#1}>::_M_invoke;
    v10 = v4;
    result = (std::__exception_ptr::exception_ptr *)Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(
                                                      v3,
                                                      v2,
                                                      (int)&v11,
                                                      (int)&v9,
                                                      24);
    if ( (_DWORD)v10 )
      result = (std::__exception_ptr::exception_ptr *)((int (*)(void))v10)();
    v6 = v12;
    if ( v12 )
    {
      v7 = (unsigned int *)(v12 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (std::__exception_ptr::exception_ptr *)__ldrex(v7);
        while ( __strex((unsigned int)result - 1, v7) );
      }
      else
        result = (std::__exception_ptr::exception_ptr *)(*v7)--;
      if ( result == (std::__exception_ptr::exception_ptr *)1 )
        v8 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (std::__exception_ptr::exception_ptr *)__ldrex(v8);
          while ( __strex((unsigned int)result - 1, v8) );
        }
        else
          result = (std::__exception_ptr::exception_ptr *)(*v8)--;
        if ( result == (std::__exception_ptr::exception_ptr *)1 )
          result = (std::__exception_ptr::exception_ptr *)(*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
  }
  else
    v13 = -1;
    result = Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_value_task<int>(
               v3,
               v2,
               &v13);
  return result;
}


int __fastcall Concurrency::streams::streambuf<char>::scopy(int a1)
{
  int v1; // r0@1

  v1 = Concurrency::streams::streambuf<char>::get_base(a1);
  return (*(int (**)(void))(**(_DWORD **)v1 + 92))();
}


int __fastcall Concurrency::streams::streambuf<char>::seekoff(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r0@1

  v2 = a1;
  v3 = Concurrency::streams::streambuf<char>::get_base(a2);
  return (*(int (__fastcall **)(int))(**(_DWORD **)v3 + 108))(v2);
}


int __fastcall Concurrency::streams::streambuf<char>::sgetc(int a1)
{
  int v1; // r0@1

  v1 = Concurrency::streams::streambuf<char>::get_base(a1);
  return (*(int (**)(void))(**(_DWORD **)v1 + 76))();
}


unsigned int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::_sync(int a1)
{
  int v1; // r5@1
  int v2; // r4@1
  unsigned int result; // r0@1
  unsigned int *v4; // r1@2
  unsigned int *v5; // r5@8
  int v6; // [sp+0h] [bp-48h]@1
  int v7; // [sp+4h] [bp-44h]@1
  int v8; // [sp+8h] [bp-40h]@1
  int v9; // [sp+Ch] [bp-3Ch]@1
  char v10; // [sp+14h] [bp-34h]@1
  int v11; // [sp+18h] [bp-30h]@1
  int v12; // [sp+1Ch] [bp-2Ch]@1
  int v13; // [sp+20h] [bp-28h]@1
  int v14; // [sp+24h] [bp-24h]@1
  __int16 v15; // [sp+28h] [bp-20h]@1
  int v16; // [sp+30h] [bp-18h]@1
  int v17; // [sp+34h] [bp-14h]@1

  v1 = a1;
  pplx::get_ambient_scheduler((pplx *)&v16);
  v2 = v17;
  v6 = v16;
  v7 = v17;
  v8 = v16;
  v9 = 0;
  v10 = 0;
  v15 = 0;
  v13 = 0;
  v14 = 0;
  v11 = 0;
  v12 = 0;
  result = pplx::task_from_result<bool>(v1, 1, (int)&v6);
  if ( v2 )
  {
    v4 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v4);
      while ( __strex(result - 1, v4) );
    }
    else
      result = (*v4)--;
    if ( result == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v5);
        while ( __strex(result - 1, v5) );
      }
      else
        result = (*v5)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  return result;
}


_DWORD *__fastcall Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1}::_Ios_Openmode(_DWORD *a1, int a2)
{
  int v2; // r4@1
  _DWORD *v3; // r5@1
  int v4; // r0@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  void (__fastcall *v7)(_DWORD *, int, signed int); // r3@7

  v2 = a2;
  v3 = a1;
  *a1 = *(_DWORD *)a2;
  v4 = *(_DWORD *)(a2 + 4);
  v3[1] = v4;
  if ( v4 )
  {
    v5 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  v3[4] = 0;
  v7 = *(void (__fastcall **)(_DWORD *, int, signed int))(v2 + 16);
  if ( v7 )
    v7(v3 + 2, v2 + 8, 2);
    v3[5] = *(_DWORD *)(v2 + 20);
    v3[4] = *(_DWORD *)(v2 + 16);
  v3[6] = *(_DWORD *)(v2 + 24);
  return v3;
}


int __fastcall Concurrency::streams::container_buffer<std::string>::container_buffer(int a1, unsigned int a2)
{
  int v2; // r4@1
  unsigned int v3; // r6@1
  void *v4; // r5@1
  __int64 v5; // kr00_8@1
  bool v6; // zf@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r1@4
  unsigned int v9; // r1@9
  unsigned int *v10; // r6@13
  unsigned int v11; // r0@15
  int v12; // r5@20
  unsigned int *v13; // r1@21
  unsigned int v14; // r0@23
  unsigned int *v15; // r6@27
  unsigned int v16; // r0@29
  int v18; // [sp+0h] [bp-18h]@1
  int v19; // [sp+4h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v4 = operator new(0x1Cu);
  Concurrency::streams::details::basic_container_buffer<std::string>::basic_container_buffer((int)v4, v3);
  std::__shared_ptr<Concurrency::streams::details::basic_container_buffer<std::string>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<Concurrency::streams::details::basic_container_buffer<std::string>>(
    (int)&v18,
    (int)v4);
  v5 = *(_QWORD *)&v18;
  v6 = v19 == 0;
  v18 = 0;
  v19 = 0;
  *(_DWORD *)v2 = &off_26DDA34;
  *(_QWORD *)(v2 + 4) = v5;
  if ( !v6 )
  {
    v7 = (unsigned int *)(HIDWORD(v5) + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
    }
    else
      ++*v7;
        v9 = __ldrex(v7);
      while ( __strex(v9 - 1, v7) );
      v9 = (*v7)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(HIDWORD(v5) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v5) + 8))(HIDWORD(v5));
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
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v5) + 12))(HIDWORD(v5));
  }
  v12 = v19;
  if ( v19 )
    v13 = (unsigned int *)(v19 + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      v15 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  *(_DWORD *)v2 = &off_26DD410;
  return v2;
}


int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::release(int result, int a2, int a3)
{
  if ( a2 )
    *(_DWORD *)(result + 24) += a3;
  return result;
}


int __fastcall pplx::task<bool>::_ContinuationTaskHandle<bool,bool,pplx::task<bool> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool ()(bool)>,std::_Ios_Openmode)::{lambda(pplx::task<bool>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::~_ContinuationTaskHandle(int a1)
{
  int v1; // r4@1
  void (*v2)(void); // r3@1
  int v3; // r5@3
  unsigned int *v4; // r1@4
  unsigned int v5; // r0@6
  unsigned int *v6; // r6@10
  unsigned int v7; // r0@12
  int v8; // r5@17
  unsigned int *v9; // r1@18
  unsigned int v10; // r0@20
  unsigned int *v11; // r6@24
  unsigned int v12; // r0@26
  int v13; // r5@31
  unsigned int *v14; // r1@32
  unsigned int v15; // r0@34
  unsigned int *v16; // r6@38
  unsigned int v17; // r0@40

  v1 = a1;
  *(_DWORD *)a1 = &off_26DD988;
  v2 = *(void (**)(void))(a1 + 48);
  if ( v2 )
    v2();
  v3 = *(_DWORD *)(v1 + 36);
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
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
  v8 = *(_DWORD *)(v1 + 28);
  if ( v8 )
    v9 = (unsigned int *)(v8 + 4);
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
  *(_DWORD *)v1 = &off_26DD9A0;
  v13 = *(_DWORD *)(v1 + 20);
  if ( v13 )
    v14 = (unsigned int *)(v13 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  return v1;
}


void __fastcall pplx::details::_PPLTaskHandle<int,pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>,pplx::details::_ContinuationTaskHandleBase>::~_PPLTaskHandle(void *ptr)
{
  void *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = ptr;
  *(_DWORD *)ptr = &off_26DD848;
  v2 = *((_DWORD *)ptr + 5);
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
  j_j_j__ZdlPv_4(v1);
}


unsigned int __fastcall Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(int a1, int a2, int a3, int a4, int a5)
{
  return Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(
           a1,
           a2,
           a3,
           a4,
           a5);
}


std::__exception_ptr::exception_ptr *__fastcall Concurrency::streams::details::streambuf_state_manager<char>::putn(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  int v6; // r6@1
  int v7; // r7@1
  __int64 v8; // r1@3
  std::__exception_ptr::exception_ptr *result; // r0@3
  int v10; // r4@5
  unsigned int *v11; // r1@6
  int v12; // r5@12
  unsigned int *v13; // r1@13
  unsigned int *v14; // r5@19
  unsigned int *v15; // r4@25
  int (__fastcall *v16)(int); // r1@31
  int v17; // r0@31
  void *v18; // [sp+8h] [bp-68h]@3
  __int64 v19; // [sp+10h] [bp-60h]@3
  char v20; // [sp+18h] [bp-58h]@3
  int v21; // [sp+1Ch] [bp-54h]@5
  int v22; // [sp+20h] [bp-50h]@12
  int v23; // [sp+24h] [bp-4Ch]@12
  int v24; // [sp+28h] [bp-48h]@12
  int v25; // [sp+2Ch] [bp-44h]@12
  char v26; // [sp+34h] [bp-3Ch]@12
  int v27; // [sp+38h] [bp-38h]@12
  int v28; // [sp+3Ch] [bp-34h]@12
  int v29; // [sp+40h] [bp-30h]@12
  int v30; // [sp+44h] [bp-2Ch]@12
  __int16 v31; // [sp+48h] [bp-28h]@12
  int v32; // [sp+50h] [bp-20h]@10
  int v33; // [sp+54h] [bp-1Ch]@12
  int v34; // [sp+58h] [bp-18h]@12

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 12))(a2) )
  {
    if ( v6 )
    {
      (*(void (__fastcall **)(char *, int, int, int))(*(_DWORD *)v4 + 140))(&v20, v4, v7, v6);
      v18 = operator new(1u);
      LODWORD(v8) = std::_Function_base::_Base_manager<Concurrency::streams::details::streambuf_state_manager<char>::putn(char const*,unsigned int)::{lambda(unsigned int)#1}>::_M_manager;
      HIDWORD(v8) = std::_Function_handler<bool ()(unsigned int),Concurrency::streams::details::streambuf_state_manager<char>::putn(char const*,unsigned int)::{lambda(unsigned int)#1}>::_M_invoke;
      v19 = v8;
      result = (std::__exception_ptr::exception_ptr *)Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<unsigned int>(
                                                        v5,
                                                        v4,
                                                        (int)&v20,
                                                        (int)&v18,
                                                        24);
      if ( (_DWORD)v19 )
        result = (std::__exception_ptr::exception_ptr *)((int (*)(void))v19)();
      v10 = v21;
      if ( v21 )
      {
        v11 = (unsigned int *)(v21 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (std::__exception_ptr::exception_ptr *)__ldrex(v11);
          while ( __strex((unsigned int)result - 1, v11) );
        }
        else
          result = (std::__exception_ptr::exception_ptr *)(*v11)--;
        if ( result == (std::__exception_ptr::exception_ptr *)1 )
          v14 = (unsigned int *)(v10 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = (std::__exception_ptr::exception_ptr *)__ldrex(v14);
            while ( __strex((unsigned int)result - 1, v14) );
          }
          else
            result = (std::__exception_ptr::exception_ptr *)(*v14)--;
          if ( result == (std::__exception_ptr::exception_ptr *)1 )
            v16 = *(int (__fastcall **)(int))(*(_DWORD *)v10 + 12);
            v17 = v10;
            return (std::__exception_ptr::exception_ptr *)v16(v17);
      }
    }
    else
      pplx::get_ambient_scheduler((pplx *)&v33);
      v12 = v34;
      v22 = v33;
      v23 = v34;
      v24 = v33;
      v25 = 0;
      v26 = 0;
      v31 = 0;
      v29 = 0;
      v30 = 0;
      v27 = 0;
      v28 = 0;
      result = (std::__exception_ptr::exception_ptr *)pplx::task_from_result<unsigned int>(v5, 0, (int)&v22);
      if ( v12 )
        v13 = (unsigned int *)(v12 + 4);
            result = (std::__exception_ptr::exception_ptr *)__ldrex(v13);
          while ( __strex((unsigned int)result - 1, v13) );
          result = (std::__exception_ptr::exception_ptr *)(*v13)--;
          v15 = (unsigned int *)(v12 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
              result = (std::__exception_ptr::exception_ptr *)__ldrex(v15);
            while ( __strex((unsigned int)result - 1, v15) );
            result = (std::__exception_ptr::exception_ptr *)(*v15)--;
            v16 = *(int (__fastcall **)(int))(*(_DWORD *)v12 + 12);
            v17 = v12;
  }
  else
    v32 = 0;
    result = Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_value_task<unsigned int>(
               v5,
               v4,
               &v32);
  return result;
}


int __fastcall Concurrency::streams::container_buffer<std::string>::container_buffer(int a1, int *a2, unsigned int a3)
{
  int v3; // r4@1
  unsigned int v4; // r6@1
  int *v5; // r7@1
  void *v6; // r5@1
  __int64 v7; // kr00_8@1
  bool v8; // zf@1
  unsigned int *v9; // r0@2
  unsigned int v10; // r1@4
  unsigned int v11; // r1@9
  unsigned int *v12; // r6@13
  unsigned int v13; // r0@15
  int v14; // r5@20
  unsigned int *v15; // r1@21
  unsigned int v16; // r0@23
  unsigned int *v17; // r6@27
  unsigned int v18; // r0@29
  void *v19; // r0@34
  unsigned int *v21; // r2@36
  signed int v22; // r1@38
  int v23; // [sp+0h] [bp-28h]@1
  char v24; // [sp+4h] [bp-24h]@1
  int v25; // [sp+8h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0x1Cu);
  v23 = *v5;
  *v5 = (int)&unk_28898CC;
  Concurrency::streams::details::basic_container_buffer<std::string>::basic_container_buffer((int)v6, &v23, v4);
  std::__shared_ptr<Concurrency::streams::details::basic_container_buffer<std::string>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<Concurrency::streams::details::basic_container_buffer<std::string>>(
    (int)&v24,
    (int)v6);
  v7 = *(_QWORD *)&v24;
  v8 = v25 == 0;
  *(_DWORD *)&v24 = 0;
  v25 = 0;
  *(_DWORD *)v3 = &off_26DDA34;
  *(_QWORD *)(v3 + 4) = v7;
  if ( !v8 )
  {
    v9 = (unsigned int *)(HIDWORD(v7) + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
    }
    else
      ++*v9;
        v11 = __ldrex(v9);
      while ( __strex(v11 - 1, v9) );
      v11 = (*v9)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(HIDWORD(v7) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v7) + 8))(HIDWORD(v7));
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
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v7) + 12))(HIDWORD(v7));
  }
  v14 = v25;
  if ( v25 )
    v15 = (unsigned int *)(v25 + 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  v19 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v23 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  *(_DWORD *)v3 = &off_26DD410;
  return v3;
}


void __fastcall pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_Continue(int a1)
{
  pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_Continue(a1);
}


void __fastcall pplx::details::_PPLTaskHandle<int,pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>,pplx::details::_ContinuationTaskHandleBase>::invoke(int a1)
{
  pplx::details::_PPLTaskHandle<int,pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>,pplx::details::_ContinuationTaskHandleBase>::invoke(a1);
}


signed int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::_sbumpc(int a1)
{
  int v1; // r4@1
  int v2; // r8@2
  signed int v3; // r2@2
  __int64 v4; // r0@2
  int v5; // r5@2
  int v6; // r6@6
  signed int result; // r0@12
  unsigned __int8 v8; // [sp+7h] [bp-19h]@10

  v1 = a1;
  if ( !(*(int (**)(void))(*(_DWORD *)a1 + 36))() )
    goto LABEL_17;
  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 36))(v1);
  HIDWORD(v4) = *(_DWORD *)(v1 + 24);
  v3 = 1;
  LODWORD(v4) = v2 != 0;
  v5 = v4 + HIDWORD(v4);
  if ( (signed int)v4 + HIDWORD(v4) >= (unsigned int)v4 )
    v3 = 0;
  if ( v3 )
    msl::safeint3::SafeIntInternal::SafeIntExceptionHandler<msl::safeint3::SafeIntException>::SafeIntOnOverflow();
  LODWORD(v4) = *(_DWORD *)(v1 + 20);
  if ( *(_DWORD *)(v4 - 4) <= -1 )
  {
    v6 = v4 + HIDWORD(v4);
  }
  else
    sub_119CB68((const void **)(v1 + 20));
    v4 = *(_QWORD *)(v1 + 20);
    if ( *(_DWORD *)(v4 - 4) > -1 )
    {
      sub_119CB68((const void **)(v1 + 20));
      LODWORD(v4) = *(_DWORD *)(v1 + 20);
    }
  if ( (_DWORD)v4 + v5 != v6 )
    _aeabi_memmove(&v8, v6);
  *(_DWORD *)(v1 + 24) = v5;
  if ( v2 )
    result = v8;
LABEL_17:
    result = -1;
  return result;
}


int (**__fastcall pplx::task<int>::_ThenImpl<int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1}>(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, _DWORD *a7, int a8))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  return pplx::task<int>::_ThenImpl<int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1}>(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}


unsigned int __fastcall Concurrency::streams::details::basic_container_buffer<std::string>::in_avail(int a1)
{
  __int64 v1; // kr00_8@1
  unsigned int v2; // r1@1

  v1 = *(_QWORD *)(a1 + 20);
  v2 = *(_DWORD *)(v1 - 12);
  if ( v2 < HIDWORD(v1) )
    msl::safeint3::SafeIntInternal::SafeIntExceptionHandler<msl::safeint3::SafeIntException>::SafeIntOnOverflow();
  return v2 - HIDWORD(v1);
}


int __fastcall Concurrency::streams::streambuf<char>::~streambuf(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = a1;
  *(_DWORD *)a1 = &off_26DDA34;
  v2 = *(_DWORD *)(a1 + 8);
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


std::__exception_ptr::exception_ptr *__fastcall pplx::task<int>::_ContinuationTaskHandle<int,int,pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1},std::integral_constant<bool,true>,pplx::details::_TypeSelectorAsyncTask>::_LogWorkItemAndInvokeUserLambda<pplx::task<int> Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1} const&,pplx::task<int>>(int a1, int a2, int a3, int a4)
{
  int v4; // r1@1
  std::__exception_ptr::exception_ptr *result; // r0@1
  int v6; // r4@1
  unsigned int *v7; // r1@2
  unsigned int *v8; // r5@8
  int v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+4h] [bp-14h]@1

  v9 = *(_DWORD *)a4;
  v4 = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(a4 + 4) = 0;
  v10 = v4;
  *(_DWORD *)a4 = 0;
  result = Concurrency::streams::details::streambuf_state_manager<char>::create_exception_checked_task<int>(pplx::task<int>,std::function<bool ()(int)>,std::_Ios_Openmode)::{lambda(pplx::task<int>)#1}::operator() const(
             a1,
             a3,
             (pplx::details::_Task_impl_base **)&v9);
  v6 = v10;
  if ( v10 )
  {
    v7 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = (std::__exception_ptr::exception_ptr *)__ldrex(v7);
      while ( __strex((unsigned int)result - 1, v7) );
    }
    else
      result = (std::__exception_ptr::exception_ptr *)(*v7)--;
    if ( result == (std::__exception_ptr::exception_ptr *)1 )
      v8 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (std::__exception_ptr::exception_ptr *)__ldrex(v8);
        while ( __strex((unsigned int)result - 1, v8) );
      }
      else
        result = (std::__exception_ptr::exception_ptr *)(*v8)--;
      if ( result == (std::__exception_ptr::exception_ptr *)1 )
        result = (std::__exception_ptr::exception_ptr *)(*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  }
  return result;
}
