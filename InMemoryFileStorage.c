

int (**__fastcall InMemoryFileStorage::populateFileList(int a1, int a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  int v2; // r4@1
  pthread_mutex_t *v3; // r6@1
  int v4; // r5@1
  int v5; // r0@2
  pthread_mutex_t **i; // r6@3
  pthread_mutex_t **v7; // r10@3
  unsigned int v8; // r2@5
  unsigned int v9; // r3@5
  void *v10; // r0@6
  void *v11; // r0@7
  __int64 v12; // r0@8
  void *v13; // r0@11
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20
  unsigned int *v18; // r2@22
  signed int v19; // r1@24
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@39
  pthread_mutex_t *mutex; // [sp+8h] [bp-38h]@3
  int v22; // [sp+Ch] [bp-34h]@5
  int v23; // [sp+10h] [bp-30h]@5
  int v24; // [sp+14h] [bp-2Ch]@6

  v2 = a1;
  v3 = (pthread_mutex_t *)(a1 + 4);
  v4 = a2;
  if ( &pthread_create )
  {
    v5 = j_pthread_mutex_lock_0(v3);
    if ( v5 )
      sub_21E5E14(v5);
  }
  mutex = v3;
  v7 = (pthread_mutex_t **)(*(_QWORD *)(v2 + 8) >> 32);
  for ( i = (pthread_mutex_t **)*(_QWORD *)(v2 + 8); i != v7; i += 2 )
    if ( !j_InMemoryFile::isMarkedForDelete((InMemoryFile *)*i) )
    {
      j_InMemoryFile::getFilename((InMemoryFile *)&v23, *i);
      j_InMemoryFile::getFilename((InMemoryFile *)&v22, *i);
      v8 = sub_21E79D4(&v22, "/", 0xFFFFFFFF, 1u) + 1;
      v9 = *(_DWORD *)(v23 - 12);
      if ( v9 < v8 )
        sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v8, v9);
      sub_21E9040((void **)&v24, &v23, v8, 0xFFFFFFFF);
      v10 = (void *)(v22 - 12);
      if ( (int *)(v22 - 12) != &dword_28898C0 )
      {
        v14 = (unsigned int *)(v22 - 4);
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
          j_j_j_j__ZdlPv_9(v10);
      }
      v11 = (void *)(v23 - 12);
      if ( (int *)(v23 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v23 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      v12 = *(_QWORD *)(v4 + 4);
      if ( (_DWORD)v12 == HIDWORD(v12) )
        j_std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
          (unsigned __int64 *)v4,
          &v24);
      else
        sub_21E8AF4((int *)v12, &v24);
        *(_DWORD *)(v4 + 4) += 4;
      v13 = (void *)(v24 - 12);
      if ( (int *)(v24 - 12) != &dword_28898C0 )
        v18 = (unsigned int *)(v24 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
    }
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))j_pthread_mutex_unlock_0(mutex);
  return result;
}


int __fastcall InMemoryFileStorage::InMemoryFileStorage(int result, int a2)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  return result;
}


int (**__fastcall InMemoryFileStorage::createFile(int a1, int a2, int *a3))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  int v3; // r6@1
  int v4; // r5@1
  pthread_mutex_t *v5; // r4@1
  int *v6; // r7@1
  int v7; // r0@2
  __int64 v8; // r0@3
  int v9; // r1@4
  unsigned int *v10; // r1@5
  unsigned int v11; // r0@7
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@12
  int v13; // [sp+0h] [bp-18h]@3

  v3 = a1;
  v4 = a2;
  v5 = (pthread_mutex_t *)(a2 + 4);
  v6 = a3;
  if ( &pthread_create )
  {
    v7 = j_pthread_mutex_lock_0((pthread_mutex_t *)(a2 + 4));
    if ( v7 )
      sub_21E5E14(v7);
  }
  j_std::__shared_ptr<InMemoryFile,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<InMemoryFile>,std::string const&>(
    v3,
    (int)&v13,
    v6);
  v8 = *(_QWORD *)(v4 + 12);
  if ( (_DWORD)v8 == HIDWORD(v8) )
    j_std::vector<std::shared_ptr<InMemoryFile>,std::allocator<std::shared_ptr<InMemoryFile>>>::_M_emplace_back_aux<std::shared_ptr<InMemoryFile> const&>(
      (unsigned __int64 *)(v4 + 8),
      v3);
  else
    *(_DWORD *)v8 = *(_DWORD *)v3;
    HIDWORD(v8) = *(_DWORD *)(v3 + 4);
    *(_DWORD *)(v8 + 4) = HIDWORD(v8);
    if ( HIDWORD(v8) )
    {
      v10 = (unsigned int *)(v9 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 + 1, v10) );
        LODWORD(v8) = *(_DWORD *)(v4 + 12);
      }
      else
        ++*v10;
    }
    *(_DWORD *)(v4 + 12) = v8 + 8;
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))j_pthread_mutex_unlock_0(v5);
  return result;
}


signed int __fastcall InMemoryFileStorage::deleteFile(int a1, int *a2)
{
  int v2; // r10@1
  pthread_mutex_t *v3; // r4@1
  int *v4; // r9@1
  int v5; // r0@2
  int v6; // r6@3
  unsigned __int64 *v7; // r11@3
  void *v8; // r0@3
  int v9; // r0@4
  int v10; // r8@5
  unsigned __int64 *v11; // r4@6
  int v12; // r0@12
  void *v13; // r0@24
  void *v14; // r0@25
  void *v15; // r0@26
  void *v16; // r0@27
  int *v17; // r5@30
  int *v18; // r0@30
  unsigned int *v19; // r2@33
  signed int v20; // r1@35
  unsigned int *v21; // r2@37
  signed int v22; // r1@39
  unsigned int *v23; // r2@41
  signed int v24; // r1@43
  unsigned int *v25; // r2@45
  signed int v26; // r1@47
  unsigned int *v27; // r2@49
  signed int v28; // r1@51
  pthread_mutex_t *mutex; // [sp+0h] [bp-40h]@3
  int v31; // [sp+4h] [bp-3Ch]@3
  int v32; // [sp+8h] [bp-38h]@3
  int v33; // [sp+Ch] [bp-34h]@3
  int v34; // [sp+10h] [bp-30h]@3
  int v35; // [sp+14h] [bp-2Ch]@4

  v2 = a1;
  v3 = (pthread_mutex_t *)(a1 + 4);
  v4 = a2;
  if ( &pthread_create )
  {
    v5 = j_pthread_mutex_lock_0(v3);
    if ( v5 )
      sub_21E5E14(v5);
  }
  mutex = v3;
  v6 = *(_DWORD *)(v2 + 8);
  v7 = *(unsigned __int64 **)(v2 + 12);
  sub_21E8AF4(&v31, v4);
  sub_21E8AF4(&v32, &v31);
  sub_21E8AF4(&v34, &v32);
  sub_21E8AF4(&v33, &v34);
  v8 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v34 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E8AF4(&v35, &v33);
  v9 = ((signed int)v7 - v6) >> 5;
  if ( v9 >= 1 )
    v10 = v9 + 1;
    do
      v11 = (unsigned __int64 *)v6;
      if ( sub_1B254C4((const void **)&v35, (unsigned __int64 *)v6) )
        goto LABEL_24;
      v11 = (unsigned __int64 *)(v6 + 8);
      if ( sub_1B254C4((const void **)&v35, (unsigned __int64 *)(v6 + 8)) )
      v11 = (unsigned __int64 *)(v6 + 16);
      if ( sub_1B254C4((const void **)&v35, (unsigned __int64 *)(v6 + 16)) )
      v11 = (unsigned __int64 *)(v6 + 24);
      if ( sub_1B254C4((const void **)&v35, (unsigned __int64 *)(v6 + 24)) )
      --v10;
      v6 += 32;
    while ( v10 > 1 );
  if ( 1 == ((signed int)v7 - v6) >> 3 )
    v11 = (unsigned __int64 *)v6;
LABEL_20:
    if ( !sub_1B254C4((const void **)&v35, v11) )
      v11 = v7;
    goto LABEL_24;
  v12 = ((signed int)v7 - v6) >> 3;
  if ( v12 == 2 )
    goto LABEL_18;
  if ( v12 != 3 )
    v11 = v7;
  v11 = (unsigned __int64 *)v6;
  if ( !sub_1B254C4((const void **)&v35, (unsigned __int64 *)v6) )
    v11 = (unsigned __int64 *)(v6 + 8);
LABEL_18:
    if ( sub_1B254C4((const void **)&v35, v11) )
      goto LABEL_24;
    ++v11;
    goto LABEL_20;
LABEL_24:
  v13 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v35 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v33 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v32 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v31 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  if ( v11 == *(unsigned __int64 **)(v2 + 12) )
    v17 = *(int **)(v2 + 24);
    v18 = (int *)j_std::__find_if<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
                   *(_DWORD *)(v2 + 20),
                   *(const void ***)(v2 + 24),
                   (const void **)v4);
    if ( v18 == v17 )
      if ( v18 == *(int **)(v2 + 28) )
      {
        j_std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
          (unsigned __int64 *)(v2 + 20),
          v4);
      }
      else
        sub_21E8AF4(v18, v4);
        *(_DWORD *)(v2 + 24) += 4;
  else
    j_std::vector<std::shared_ptr<InMemoryFile>,std::allocator<std::shared_ptr<InMemoryFile>>>::_M_erase(
      v2 + 8,
      (int)v11);
    j_pthread_mutex_unlock_0(mutex);
  return 1;
}


InMemoryFileStorage *__fastcall InMemoryFileStorage::~InMemoryFileStorage(InMemoryFileStorage *this)
{
  InMemoryFileStorage *v1; // r8@1
  void *v2; // r4@1
  void *v3; // r5@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  int v7; // r5@16
  int v8; // r7@16
  int v9; // r4@17
  unsigned int *v10; // r1@18
  unsigned int v11; // r0@20
  unsigned int *v12; // r6@24
  unsigned int v13; // r0@26

  v1 = this;
  v2 = (void *)(*(_QWORD *)((char *)this + 20) >> 32);
  v3 = (void *)*(_QWORD *)((char *)this + 20);
  if ( v3 != v2 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v3 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v3 - 4);
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
          j_j_j_j__ZdlPv_9(v6);
      }
      v3 = (char *)v3 + 4;
    }
    while ( v3 != v2 );
    v3 = (void *)*((_DWORD *)v1 + 5);
  }
  if ( v3 )
    j_operator delete(v3);
  v8 = *((_QWORD *)v1 + 1) >> 32;
  v7 = *((_QWORD *)v1 + 1);
  if ( v7 != v8 )
      v9 = *(_DWORD *)(v7 + 4);
      if ( v9 )
        v10 = (unsigned int *)(v9 + 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 == 1 )
          v12 = (unsigned int *)(v9 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
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
            (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
      v7 += 8;
    while ( v7 != v8 );
    v7 = *((_DWORD *)v1 + 2);
  if ( v7 )
    j_operator delete((void *)v7);
  return v1;
}


int (**__fastcall InMemoryFileStorage::flushToDisk(InMemoryFileStorage *this))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  InMemoryFileStorage *v1; // r9@1
  pthread_mutex_t *v2; // r4@1
  int v3; // r0@2
  _DWORD *v4; // r4@3
  _DWORD *v5; // r5@3
  _DWORD *v6; // r7@7
  _DWORD *v7; // r4@8
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  int *v10; // r0@17
  unsigned __int64 *v11; // r4@19
  int v12; // r7@19
  void **v13; // r6@20
  InMemoryFile *v14; // r5@20
  unsigned int *v15; // r2@21
  signed int v16; // r1@23
  unsigned __int64 v17; // kr10_8@29
  unsigned int *v18; // r0@30
  unsigned int v19; // r1@32
  void *v20; // r0@36
  unsigned int *v21; // r1@43
  unsigned int v22; // r0@45
  int v23; // r11@49
  InMemoryFile *v24; // r7@49
  void **v25; // r5@49
  unsigned int *v26; // r6@49
  unsigned int v27; // r0@51
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@57
  pthread_mutex_t *mutex; // [sp+0h] [bp-40h]@3
  int v30; // [sp+8h] [bp-38h]@20
  void *v31; // [sp+Ch] [bp-34h]@20
  void *ptr; // [sp+10h] [bp-30h]@4

  v1 = this;
  v2 = (pthread_mutex_t *)((char *)this + 4);
  if ( &pthread_create )
  {
    v3 = j_pthread_mutex_lock_0(v2);
    if ( v3 )
      sub_21E5E14(v3);
  }
  mutex = v2;
  v4 = (_DWORD *)(*(_QWORD *)((char *)v1 + 20) >> 32);
  v5 = (_DWORD *)*(_QWORD *)((char *)v1 + 20);
  if ( v5 != v4 )
    do
    {
      (*(void (__fastcall **)(void **))(**(_DWORD **)v1 + 32))(&ptr);
      if ( ptr )
        j_operator delete[](ptr);
      ++v5;
    }
    while ( v4 != v5 );
    v6 = (_DWORD *)(*(_QWORD *)((char *)v1 + 20) >> 32);
    v5 = (_DWORD *)*(_QWORD *)((char *)v1 + 20);
    if ( v6 != v5 )
      v7 = (_DWORD *)*(_QWORD *)((char *)v1 + 20);
      do
      {
        v10 = (int *)(*v7 - 12);
        if ( v10 != &dword_28898C0 )
        {
          v8 = (unsigned int *)(*v7 - 4);
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
            j_j_j_j__ZdlPv_9(v10);
        }
        ++v7;
      }
      while ( v7 != v6 );
  *((_DWORD *)v1 + 6) = v5;
  v12 = (int)v1 + 8;
  v11 = (unsigned __int64 *)*((_DWORD *)v1 + 2);
  if ( v11 != *((unsigned __int64 **)v1 + 3) )
    v13 = &v31;
    v14 = (InMemoryFile *)&v30;
      v17 = *v11;
      if ( *v11 >> 32 )
        v18 = (unsigned int *)(HIDWORD(v17) + 4);
        if ( &pthread_create )
          __dmb();
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 + 1, v18) );
        else
          ++*v18;
      j_InMemoryFile::flushToDisk((InMemoryFile *)v13, (leveldb::Env *)v17, *(_DWORD *)v1);
      if ( v31 )
        j_InMemoryFile::getFilename(v14, (pthread_mutex_t *)v17);
        v20 = (void *)(v30 - 12);
        if ( (int *)(v30 - 12) != &dword_28898C0 )
          v15 = (unsigned int *)(v30 - 4);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
      if ( j_InMemoryFile::isSafeToDelete((pthread_mutex_t *)v17) == 1 )
        v11 = (unsigned __int64 *)j_std::vector<std::shared_ptr<InMemoryFile>,std::allocator<std::shared_ptr<InMemoryFile>>>::_M_erase(
                                    v12,
                                    (int)v11);
      else
        ++v11;
        j_operator delete[](v31);
      if ( HIDWORD(v17) )
        v21 = (unsigned int *)(HIDWORD(v17) + 4);
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
          v22 = (*v21)--;
        if ( v22 == 1 )
          v23 = v12;
          v24 = v14;
          v25 = v13;
          v26 = (unsigned int *)(HIDWORD(v17) + 8);
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v17) + 8))(HIDWORD(v17));
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
            v27 = (*v26)--;
          v13 = v25;
          v14 = v24;
          v12 = v23;
          if ( v27 == 1 )
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v17) + 12))(HIDWORD(v17));
    while ( v11 != *((unsigned __int64 **)v1 + 3) );
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))j_pthread_mutex_unlock_0(mutex);
  return result;
}


signed int __fastcall InMemoryFileStorage::findFile(int a1, int *a2, int a3)
{
  int v3; // r11@1
  pthread_mutex_t *v4; // r8@1
  int v5; // r9@1
  int *v6; // r5@1
  int v7; // r0@2
  int v8; // r4@3
  int v9; // r10@3
  void *v10; // r0@3
  int v11; // r0@4
  int v12; // r6@5
  int v13; // r7@6
  int v14; // r0@12
  void *v15; // r0@24
  void *v16; // r0@25
  void *v17; // r0@26
  void *v18; // r0@27
  int v19; // r4@29
  int v20; // r5@29
  unsigned int *v21; // r0@31
  unsigned int v22; // r1@33
  signed int v23; // r4@35
  unsigned int *v24; // r1@38
  unsigned int v25; // r0@40
  unsigned int *v26; // r6@44
  unsigned int v27; // r0@46
  unsigned int *v28; // r2@48
  signed int v29; // r1@50
  unsigned int *v31; // r2@60
  signed int v32; // r1@62
  unsigned int *v33; // r2@64
  signed int v34; // r1@66
  unsigned int *v35; // r2@68
  signed int v36; // r1@70
  unsigned int *v37; // r2@72
  signed int v38; // r1@74
  int v39; // [sp+4h] [bp-3Ch]@3
  int v40; // [sp+8h] [bp-38h]@3
  int v41; // [sp+Ch] [bp-34h]@3
  int v42; // [sp+10h] [bp-30h]@3
  int v43; // [sp+14h] [bp-2Ch]@4

  v3 = a1;
  v4 = (pthread_mutex_t *)(a1 + 4);
  v5 = a3;
  v6 = a2;
  if ( &pthread_create )
  {
    v7 = j_pthread_mutex_lock_0(v4);
    if ( v7 )
      sub_21E5E14(v7);
  }
  v9 = *(_QWORD *)(v3 + 8) >> 32;
  v8 = *(_QWORD *)(v3 + 8);
  sub_21E8AF4(&v39, v6);
  sub_21E8AF4(&v40, &v39);
  sub_21E8AF4(&v42, &v40);
  sub_21E8AF4(&v41, &v42);
  v10 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v42 - 4);
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
      j_j_j_j__ZdlPv_9(v10);
  sub_21E8AF4(&v43, &v41);
  v11 = (v9 - v8) >> 5;
  if ( v11 >= 1 )
    v12 = v11 + 1;
    do
      v13 = v8;
      if ( sub_1B252C8((const void **)&v43, (unsigned __int64 *)v8) )
        goto LABEL_24;
      v13 = v8 + 8;
      if ( sub_1B252C8((const void **)&v43, (unsigned __int64 *)(v8 + 8)) )
      v13 = v8 + 16;
      if ( sub_1B252C8((const void **)&v43, (unsigned __int64 *)(v8 + 16)) )
      v13 = v8 + 24;
      if ( sub_1B252C8((const void **)&v43, (unsigned __int64 *)(v8 + 24)) )
      --v12;
      v8 += 32;
    while ( v12 > 1 );
  if ( 1 == (v9 - v8) >> 3 )
    v13 = v8;
LABEL_20:
    if ( !sub_1B252C8((const void **)&v43, (unsigned __int64 *)v13) )
      v13 = v9;
    goto LABEL_24;
  v14 = (v9 - v8) >> 3;
  if ( v14 == 2 )
    goto LABEL_18;
  if ( v14 != 3 )
    v13 = v9;
  v13 = v8;
  if ( !sub_1B252C8((const void **)&v43, (unsigned __int64 *)v8) )
    v13 = v8 + 8;
LABEL_18:
    if ( sub_1B252C8((const void **)&v43, (unsigned __int64 *)v13) )
      goto LABEL_24;
    v13 += 8;
    goto LABEL_20;
LABEL_24:
  v15 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v43 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v41 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v40 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v39 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  if ( v13 == *(_DWORD *)(v3 + 12) )
    v23 = 0;
  else
    *(_DWORD *)v5 = *(_DWORD *)v13;
    v19 = *(_DWORD *)(v5 + 4);
    v20 = *(_DWORD *)(v13 + 4);
    if ( v20 != v19 )
      if ( v20 )
      {
        v21 = (unsigned int *)(v20 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v22 = __ldrex(v21);
          while ( __strex(v22 + 1, v21) );
          v19 = *(_DWORD *)(v5 + 4);
        }
        else
          ++*v21;
      }
      if ( v19 )
        v24 = (unsigned int *)(v19 + 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 == 1 )
          v26 = (unsigned int *)(v19 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          if ( &pthread_create )
          {
            __dmb();
            do
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
          }
          else
            v27 = (*v26)--;
          if ( v27 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
      *(_DWORD *)(v5 + 4) = v20;
    v23 = 1;
    j_pthread_mutex_unlock_0(v4);
  return v23;
}
