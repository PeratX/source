

__int64 __fastcall StopwatchHandler::clearAll(StopwatchHandler *this)
{
  StopwatchHandler *v1; // r4@1
  __int64 result; // r0@1

  v1 = this;
  j_std::_Rb_tree<std::string,std::pair<std::string const,std::unique_ptr<Stopwatch,std::default_delete<Stopwatch>>>,std::_Select1st<std::pair<std::string const,std::unique_ptr<Stopwatch,std::default_delete<Stopwatch>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Stopwatch,std::default_delete<Stopwatch>>>>>::_M_erase(
    (int)this,
    *((_DWORD *)this + 2));
  result = (unsigned int)v1 + 4;
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = (char *)v1 + 4;
  *((_QWORD *)v1 + 2) = result;
  return result;
}


int __fastcall StopwatchHandler::print(int result)
{
  int v1; // r4@1
  int v2; // r6@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  __int64 v5; // kr00_8@11
  void (__fastcall *v6)(_DWORD, int *); // r8@11
  void *v7; // r0@11
  int v8; // [sp+4h] [bp-2Ch]@3

  v1 = *(_DWORD *)(result + 12);
  v2 = result + 4;
  if ( v1 != result + 4 )
  {
    do
    {
      v5 = *(_QWORD *)(v1 + 16);
      v6 = *(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)HIDWORD(v5) + 16);
      sub_21E94B4((void **)&v8, (const char *)v5);
      v6(HIDWORD(v5), &v8);
      v7 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
      {
        v3 = (unsigned int *)(v8 - 4);
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
          j_j_j_j__ZdlPv_9(v7);
      }
      result = sub_21D47E8(v1);
      v1 = result;
    }
    while ( result != v2 );
  }
  return result;
}


_DWORD *__fastcall StopwatchHandler::get(int a1, const void **a2)
{
  int v2; // r9@1
  int v3; // r10@1
  int v4; // r0@1
  const void **v5; // r8@1
  int v6; // r5@1
  const void *v7; // r6@2
  int v8; // r11@2
  size_t v9; // r4@2
  _DWORD *v10; // r0@4
  size_t v11; // r7@4
  size_t v12; // r2@4
  int v13; // r0@6
  _DWORD *v14; // r1@13
  unsigned int v15; // r4@13
  unsigned int v16; // r6@13
  size_t v17; // r2@13
  int v18; // r0@15
  _DWORD *v19; // r6@20
  void *v20; // r0@23
  unsigned int *v22; // r2@25
  signed int v23; // r1@27
  char v24; // [sp+4h] [bp-34h]@21
  int v25; // [sp+Ch] [bp-2Ch]@21
  _DWORD *v26; // [sp+10h] [bp-28h]@21

  v2 = a1;
  v3 = a1 + 4;
  v4 = *(_DWORD *)(a1 + 8);
  v5 = a2;
  v6 = v3;
  if ( v4 )
  {
    v7 = *a2;
    v8 = v3;
    v9 = *((_DWORD *)*a2 - 3);
    do
    {
      v6 = v4;
      while ( 1 )
      {
        v10 = *(_DWORD **)(v6 + 16);
        v11 = *(v10 - 3);
        v12 = *(v10 - 3);
        if ( v11 > v9 )
          v12 = v9;
        v13 = j_memcmp_0(v10, v7, v12);
        if ( !v13 )
          v13 = v11 - v9;
        if ( v13 >= 0 )
          break;
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = v8;
          goto LABEL_12;
        }
      }
      v4 = *(_DWORD *)(v6 + 8);
      v8 = v6;
    }
    while ( v4 );
  }
LABEL_12:
  if ( v6 == v3 )
    goto LABEL_35;
  v14 = *(_DWORD **)(v6 + 16);
  v15 = *((_DWORD *)*v5 - 3);
  v16 = *(v14 - 3);
  v17 = *((_DWORD *)*v5 - 3);
  if ( v15 > v16 )
    v17 = *(v14 - 3);
  v18 = j_memcmp_0(*v5, v14, v17);
  if ( !v18 )
    v18 = v15 - v16;
  if ( v18 < 0 )
    v6 = v3;
LABEL_35:
    v19 = j_operator new(0x30u);
    *v19 = &off_27269C0;
    v19[10] = 0;
    v19[11] = 0;
    v19[2] = 0;
    v19[3] = -1074790400;
    v19[4] = 0;
    v19[5] = 0;
    v19[8] = 0;
    v19[9] = 0;
    sub_21E8AF4(&v25, (int *)v5);
    v26 = v19;
    j_std::_Rb_tree<std::string,std::pair<std::string const,std::unique_ptr<Stopwatch,std::default_delete<Stopwatch>>>,std::_Select1st<std::pair<std::string const,std::unique_ptr<Stopwatch,std::default_delete<Stopwatch>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Stopwatch,std::default_delete<Stopwatch>>>>>::_M_insert_unique<std::pair<std::string,std::unique_ptr<Stopwatch,std::default_delete<Stopwatch>>>>(
      (int *)&v24,
      v2,
      (const void **)&v25);
    if ( v26 )
      (*(void (**)(void))(*v26 + 4))();
    v26 = 0;
    v20 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v25 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      else
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
  else
    v19 = *(_DWORD **)(v6 + 20);
  return v19;
}


int __fastcall StopwatchHandler::printEvery(int result, int a2)
{
  int v2; // r2@1
  int v3; // r6@2
  int v4; // r4@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  __int64 v7; // kr00_8@12
  void (__fastcall *v8)(_DWORD, int *); // r8@12
  void *v9; // r0@12
  int v10; // [sp+4h] [bp-2Ch]@4

  v2 = *(_DWORD *)(result + 24) + 1;
  *(_DWORD *)(result + 24) = v2;
  if ( v2 >= a2 )
  {
    v3 = result + 4;
    *(_DWORD *)(result + 24) = 0;
    v4 = *(_DWORD *)(result + 12);
    if ( v4 != result + 4 )
    {
      do
      {
        v7 = *(_QWORD *)(v4 + 16);
        v8 = *(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)HIDWORD(v7) + 16);
        sub_21E94B4((void **)&v10, (const char *)v7);
        v8(HIDWORD(v7), &v10);
        v9 = (void *)(v10 - 12);
        if ( (int *)(v10 - 12) != &dword_28898C0 )
        {
          v5 = (unsigned int *)(v10 - 4);
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
            j_j_j_j__ZdlPv_9(v9);
        }
        result = sub_21D47E8(v4);
        v4 = result;
      }
      while ( result != v3 );
    }
  }
  return result;
}


int __fastcall StopwatchHandler::clear(int a1, const void **a2)
{
  int v2; // r4@1
  int v4; // [sp+0h] [bp-10h]@1
  int v5; // [sp+4h] [bp-Ch]@1

  v2 = a1;
  j_std::_Rb_tree<std::string,std::pair<std::string const,std::unique_ptr<Stopwatch,std::default_delete<Stopwatch>>>,std::_Select1st<std::pair<std::string const,std::unique_ptr<Stopwatch,std::default_delete<Stopwatch>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Stopwatch,std::default_delete<Stopwatch>>>>>::equal_range(
    (int)&v4,
    a1,
    a2);
  return j_std::_Rb_tree<std::string,std::pair<std::string const,std::unique_ptr<Stopwatch,std::default_delete<Stopwatch>>>,std::_Select1st<std::pair<std::string const,std::unique_ptr<Stopwatch,std::default_delete<Stopwatch>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Stopwatch,std::default_delete<Stopwatch>>>>>::_M_erase_aux(
           v2,
           v4,
           v5);
}
