

void *__fastcall MemoryMappedFileAccess::_getTransforms(MemoryMappedFileAccess *this)
{
  void *result; // r0@1

  result = (void *)*((_DWORD *)this + 5);
  if ( !result )
    result = &MemoryMappedFileAccess::EMPTY_TRANSFORMS;
  return result;
}


MemoryMappedFileAccess *__fastcall MemoryMappedFileAccess::getWriteInterface(MemoryMappedFileAccess *this)
{
  MemoryMappedFileAccess *v1; // r4@1
  MemoryMappedFileAccess *result; // r0@1

  v1 = this;
  result = (MemoryMappedFileAccess *)(*(int (**)(void))(**((_DWORD **)this + 17) + 28))();
  if ( result )
    result = (MemoryMappedFileAccess *)((char *)v1 + 12);
  return result;
}


void __fastcall MemoryMappedFileAccess::~MemoryMappedFileAccess(MemoryMappedFileAccess *this)
{
  MemoryMappedFileAccess::~MemoryMappedFileAccess(this);
}


int __fastcall MemoryMappedFileAccess::_requestedOpenIsCompatibleWithOpenStream(int a1, int a2, int a3, int a4)
{
  return (a3 | a4) ^ 1;
}


int __fastcall MemoryMappedFileAccess::MemoryMappedFileReadAccess::MemoryMappedFileReadAccess(int result, MemoryMappedFileAccess *a2)
{
  *(_DWORD *)result = &off_26EBB40;
  *(_DWORD *)(result + 4) = a2;
  return result;
}


int __fastcall MemoryMappedFileAccess::fopen(int a1, const char **a2, _BYTE **a3)
{
  int v3; // r11@1
  _BYTE *v4; // r0@1
  const char **v5; // r7@1
  char v6; // r9@1
  signed int v7; // r6@1
  char v8; // r4@1
  int v9; // r1@1
  signed int v10; // r10@1
  signed int v11; // r2@2
  int v12; // r4@16
  int v13; // r0@23
  int i; // r5@24
  int v15; // r8@30
  int *v16; // r5@30
  int v17; // r9@33
  int v18; // r4@34
  int (__fastcall *v19)(int, const char **, int *); // r6@34
  int v20; // r7@34
  void *v21; // r0@34
  unsigned int v22; // r4@36
  int v23; // r1@36
  unsigned int v24; // r0@36
  int v25; // r0@39
  _DWORD *v26; // r0@40
  void *v27; // r0@44
  int v28; // r0@48
  _DWORD *v29; // r0@49
  unsigned int *v31; // r2@55
  signed int v32; // r1@57
  pthread_mutex_t *mutex; // [sp+4h] [bp-54h]@29
  int v34; // [sp+Ch] [bp-4Ch]@34
  int v35; // [sp+10h] [bp-48h]@30
  __int64 v36; // [sp+18h] [bp-40h]@30
  void *ptr; // [sp+20h] [bp-38h]@30
  int v38; // [sp+24h] [bp-34h]@30
  int v39; // [sp+28h] [bp-30h]@30
  int v40; // [sp+2Ch] [bp-2Ch]@30

  v3 = a1;
  v4 = *a3;
  v5 = a2;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = *((_DWORD *)*a3 - 3);
  v10 = 0;
  if ( !v9 )
    goto LABEL_22;
  do
  {
    v11 = *v4;
    if ( v11 > 113 )
    {
      if ( v11 == 114 )
        goto LABEL_12;
      if ( v11 == 119 )
      {
        v7 = 1;
        v10 = 1;
      }
    }
    else
      if ( v11 == 43 )
LABEL_12:
        v8 = 1;
        goto LABEL_13;
      if ( v11 == 97 )
        v6 = 1;
LABEL_13:
    --v9;
    ++v4;
  }
  while ( v9 );
  if ( v8 )
    if ( !(*(int (**)(void))(**(_DWORD **)(v3 + 68) + 24))() )
      return 0;
  else
    v8 = 0;
  if ( (_BYTE)v7 )
    if ( !(*(int (**)(void))(**(_DWORD **)(v3 + 68) + 28))() )
    v7 = 0;
LABEL_22:
  if ( &pthread_create )
    v13 = pthread_mutex_lock((pthread_mutex_t *)(v3 + 52));
    if ( v13 )
      sub_21E5E14(v13);
  for ( i = *(_DWORD *)(v3 + 32); ; i = *(_DWORD *)i )
    if ( !i )
      mutex = (pthread_mutex_t *)(v3 + 52);
      v36 = *(_QWORD *)v5;
      v39 = 0;
      v40 = 0;
      ptr = 0;
      v38 = 0;
      std::_Hashtable<std::string,std::pair<std::string const,MemoryMappedFileAccess::StreamDetails>,std::allocator<std::pair<std::string const,MemoryMappedFileAccess::StreamDetails>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<Core::Path,MemoryMappedFileAccess::StreamDetails>>(
        &v35,
        v3 + 24,
        (int)&v36);
      v15 = v35;
      v16 = (int *)(v35 + 8);
      if ( ptr )
        operator delete(ptr);
      *(_BYTE *)(v15 + 20) = v8;
      *(_BYTE *)(v15 + 21) = v7;
      *(_BYTE *)(v15 + 22) = v6;
      if ( !(_BYTE)v10 )
        v17 = (*(int (**)(void))(**(_DWORD **)(v3 + 68) + 24))();
        if ( !v17 )
          goto LABEL_51;
        v18 = *(_DWORD *)(v3 + 68);
        v19 = *(int (__fastcall **)(int, const char **, int *))(*(_DWORD *)v18 + 8);
        sub_21E94B4((void **)&v34, "rb");
        v20 = v19(v18, v5, &v34);
        v21 = (void *)(v34 - 12);
        if ( (int *)(v34 - 12) != &dword_28898C0 )
        {
          v31 = (unsigned int *)(v34 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v32 = __ldrex(v31);
            while ( __strex(v32 - 1, v31) );
          }
          else
            v32 = (*v31)--;
          if ( v32 <= 0 )
            j_j_j_j__ZdlPv_9(v21);
        }
        v12 = 0;
        if ( !v20 )
          goto LABEL_52;
        (*(void (__cdecl **)(_DWORD, int))(**(_DWORD **)(v3 + 68) + 16))(*(_DWORD *)(v3 + 68), v20);
        v22 = (*(int (__cdecl **)(_DWORD, int))(**(_DWORD **)(v3 + 68) + 20))(*(_DWORD *)(v3 + 68), v20);
        (*(void (__cdecl **)(_DWORD, _DWORD))(**(_DWORD **)(v3 + 68) + 16))(*(_DWORD *)(v3 + 68), v20);
        v23 = *(_QWORD *)(v15 + 8);
        v24 = (*(_QWORD *)(v15 + 8) >> 32) - v23;
        if ( v22 <= v24 )
          if ( v22 < v24 )
            *(_DWORD *)(v15 + 12) = v23 + v22;
        else
          std::vector<unsigned char,std::allocator<unsigned char>>::_M_default_append((int)v16, v22 - v24);
          v23 = *v16;
        (*(void (__fastcall **)(int, int, signed int, unsigned int))(*(_DWORD *)v17 + 8))(v17, v23, 1, v22);
        (*(void (__cdecl **)(_DWORD, int))(**(_DWORD **)(v3 + 68) + 12))(*(_DWORD *)(v3 + 68), v20);
        v27 = *(void **)(v3 + 20);
        if ( !v27 )
          v27 = &MemoryMappedFileAccess::EMPTY_TRANSFORMS;
        if ( (*(int (__cdecl **)(void *, int *))(*(_DWORD *)v27 + 8))(v27, v16) != 1 )
      if ( &pthread_create )
        v28 = pthread_mutex_lock((pthread_mutex_t *)(v3 + 64));
        if ( v28 )
          sub_21E5E14(v28);
      v29 = operator new(0x10u);
      *v29 = 0;
      v29[1] = 0;
      v29[2] = v16;
      v29[3] = 0;
      sub_21BC334((int)v29, v3 + 56);
      v12 = *(_DWORD *)(v3 + 60) + 8;
        pthread_mutex_unlock((pthread_mutex_t *)(v3 + 64));
      goto LABEL_52;
    if ( !sub_21E7D6C((const void **)(i + 4), *v5) )
      break;
  if ( (v10 | v7) & 0xFF )
    mutex = (pthread_mutex_t *)(v3 + 52);
LABEL_51:
    v12 = 0;
    goto LABEL_52;
  mutex = (pthread_mutex_t *)(v3 + 52);
    v25 = pthread_mutex_lock((pthread_mutex_t *)(v3 + 64));
    if ( v25 )
      sub_21E5E14(v25);
  v26 = operator new(0x10u);
  *v26 = 0;
  v26[1] = 0;
  *((_QWORD *)v26 + 1) = (unsigned int)(i + 8);
  sub_21BC334((int)v26, v3 + 56);
  v12 = *(_DWORD *)(v3 + 60) + 8;
    pthread_mutex_unlock((pthread_mutex_t *)(v3 + 64));
LABEL_52:
    pthread_mutex_unlock(mutex);
  return v12;
}


void __fastcall MemoryMappedFileAccess::~MemoryMappedFileAccess(MemoryMappedFileAccess *this)
{
  MemoryMappedFileAccess *v1; // r0@1

  v1 = MemoryMappedFileAccess::~MemoryMappedFileAccess(this);
  j_j_j__ZdlPv_6((void *)v1);
}


MemoryMappedFileAccess *__fastcall MemoryMappedFileAccess::~MemoryMappedFileAccess(MemoryMappedFileAccess *this)
{
  MemoryMappedFileAccess *v1; // r11@1
  void **v2; // r1@1
  void **v3; // r0@1
  void **v4; // r5@1
  void **v5; // r6@2
  void ***v6; // r0@4
  void **v7; // r6@5
  int v8; // r7@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  int v11; // r6@16
  void *v12; // r0@16
  int v13; // r1@18
  void *v14; // r0@18
  char *v15; // r0@20
  int v16; // r0@23

  v1 = this;
  v2 = &off_26EBB14;
  *(_DWORD *)this = &off_26EBB14;
  v4 = (void **)((char *)this + 56);
  v3 = (void **)*((_DWORD *)this + 14);
  if ( v3 != v4 )
  {
    do
    {
      v5 = (void **)*v3;
      operator delete(v3);
      v3 = v5;
    }
    while ( v5 != v4 );
    v2 = *(void ***)v1;
  }
  *((_DWORD *)v1 + 14) = v4;
  *((_DWORD *)v1 + 15) = v4;
  ((void (__fastcall *)(MemoryMappedFileAccess *))v2[8])(v1);
  v6 = (void ***)*v4;
  if ( *v4 != v4 )
      v7 = *v6;
      operator delete(v6);
      v6 = (void ***)v7;
    while ( v7 != v4 );
  v8 = *((_DWORD *)v1 + 8);
  while ( v8 )
    v11 = v8;
    v12 = *(void **)(v8 + 8);
    v8 = *(_DWORD *)v8;
    if ( v12 )
      operator delete(v12);
    v13 = *(_DWORD *)(v11 + 4);
    v14 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v13 - 4);
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
        j_j_j_j__ZdlPv_9(v14);
    operator delete((void *)v11);
  _aeabi_memclr4(*((_QWORD *)v1 + 3), 4 * (*((_QWORD *)v1 + 3) >> 32));
  *((_DWORD *)v1 + 8) = 0;
  *((_DWORD *)v1 + 9) = 0;
  v15 = (char *)*((_DWORD *)v1 + 6);
  if ( v15 && (char *)v1 + 48 != v15 )
    operator delete(v15);
  v16 = *((_DWORD *)v1 + 5);
  if ( v16 )
    (*(void (**)(void))(*(_DWORD *)v16 + 4))();
  *((_DWORD *)v1 + 5) = 0;
  return v1;
}


unsigned int __fastcall MemoryMappedFileAccess::MemoryMappedFileWriteAccess::fwrite(MemoryMappedFileAccess::MemoryMappedFileWriteAccess *this, const void *a2, unsigned int a3, unsigned int a4, void *a5)
{
  unsigned int v5; // r4@1
  const char *v6; // r5@1
  int v7; // r6@1
  __int64 v8; // r0@3
  int v9; // r2@4
  unsigned int v10; // r3@6

  v5 = a4;
  v6 = (const char *)a2;
  v7 = *(_DWORD *)a5;
  if ( *(_DWORD *)a5 )
  {
    if ( *(_BYTE *)(v7 + 13) )
    {
      *(_BYTE *)(v7 + 15) = 1;
      v8 = *(_QWORD *)v7;
      HIDWORD(v8) -= v8;
      if ( *(_BYTE *)(v7 + 14) )
      {
        *((_DWORD *)a5 + 1) = HIDWORD(v8);
        v9 = HIDWORD(v8);
      }
      else
        v9 = *((_DWORD *)a5 + 1);
      v10 = v9 + a4;
      if ( v9 + v5 > HIDWORD(v8) )
        std::vector<unsigned char,std::allocator<unsigned char>>::_M_default_append(v7, v10 - HIDWORD(v8));
        LODWORD(v8) = *(_DWORD *)v7;
      _aeabi_memcpy(v8 + v9, v6, v5);
      *((_DWORD *)a5 + 1) += v5;
    }
    else
      v5 = 0;
  }
  else
    v5 = 0;
  return v5;
}


char *__fastcall MemoryMappedFileAccess::getReadInterface(MemoryMappedFileAccess *this)
{
  return (char *)this + 4;
}


int __fastcall MemoryMappedFileAccess::fclose(MemoryMappedFileAccess *this, void *a2)
{
  MemoryMappedFileAccess *v2; // r6@1
  pthread_mutex_t *v3; // r4@1
  char *v4; // r5@1
  int v5; // r0@2
  int v6; // r6@3
  void *i; // r7@3
  void *v8; // t1@3

  v2 = this;
  v3 = (pthread_mutex_t *)((char *)this + 64);
  v4 = (char *)a2;
  if ( &pthread_create )
  {
    v5 = pthread_mutex_lock(v3);
    if ( v5 )
      sub_21E5E14(v5);
  }
  v8 = (void *)*((_DWORD *)v2 + 14);
  v6 = (int)v2 + 56;
  for ( i = v8; i != (void *)v6; i = *(void **)i )
    if ( (char *)i + 8 == v4 )
    {
      sub_21BC344((int)i);
      operator delete(i);
      break;
    }
    pthread_mutex_unlock(v3);
  return 0;
}


signed int __fastcall MemoryMappedFileAccess::fseek(MemoryMappedFileAccess *this, void *a2, __int64 a3, int a4)
{
  unsigned __int64 *v4; // r12@1
  signed int v5; // r0@3
  signed int v6; // lr@3
  unsigned __int64 v7; // kr00_8@7
  signed int v8; // r2@8
  signed int v9; // r3@8
  signed int result; // r0@15

  v4 = *(unsigned __int64 **)a2;
  if ( a4 == 2 )
  {
    v5 = (*v4 >> 32) - *v4;
LABEL_6:
    v6 = 0;
    goto LABEL_7;
  }
  if ( a4 != 1 )
    v5 = 0;
    goto LABEL_6;
  v5 = *((_DWORD *)a2 + 1);
  v6 = v5 >> 31;
LABEL_7:
  v7 = __PAIR__(v6, v5) + a3;
  if ( (signed int)((__PAIR__((unsigned int)v6, v5) + a3) >> 32) > -1 )
    goto LABEL_19;
  v8 = 0;
  v9 = 0;
  if ( (unsigned int)v7 >= (unsigned int)((*v4 >> 32) - *v4) )
    v8 = 1;
  if ( SHIDWORD(v7) > -1 )
    v9 = 1;
  if ( !HIDWORD(v7) )
    v9 = v8;
  if ( v9 )
    result = -1;
  else
LABEL_19:
    result = 0;
    *((_DWORD *)a2 + 1) = v7;
  return result;
}


int __fastcall MemoryMappedFileAccess::MemoryMappedFileWriteAccess::MemoryMappedFileWriteAccess(int result, MemoryMappedFileAccess *a2)
{
  *(_DWORD *)result = &off_26EBB54;
  *(_DWORD *)(result + 4) = a2;
  return result;
}


unsigned int __fastcall MemoryMappedFileAccess::MemoryMappedFileReadAccess::fread(MemoryMappedFileAccess::MemoryMappedFileReadAccess *this, void *a2, unsigned int a3, unsigned int a4, void *a5)
{
  unsigned int v5; // r4@1
  int v6; // r2@1
  __int64 v7; // kr00_8@3
  int v8; // r2@3

  v5 = a4;
  v6 = *(_DWORD *)a5;
  if ( *(_DWORD *)a5 )
  {
    if ( *(_BYTE *)(v6 + 12) )
    {
      v7 = *(_QWORD *)v6;
      v8 = *((_DWORD *)a5 + 1);
      if ( HIDWORD(v7) - (signed int)v7 < v8 + a4 )
        v5 = HIDWORD(v7) - v7 - v8;
      if ( (_DWORD)v7 != HIDWORD(v7) )
      {
        _aeabi_memcpy(a2, (const char *)(v8 + v7), v5);
        *((_DWORD *)a5 + 1) += v5;
      }
    }
    else
      v5 = 0;
  }
  else
    v5 = 0;
  return v5;
}


int (**__fastcall MemoryMappedFileAccess::unload(MemoryMappedFileAccess *this))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  char *v1; // r4@1
  int v2; // r0@2
  int v3; // r1@3
  int v4; // r11@3
  bool v5; // zf@3
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int v8; // r7@16
  int (__fastcall *v9)(int, int *, int *); // r4@16
  void *v10; // r0@16
  void *v11; // r0@18
  signed int v12; // r9@21
  unsigned int v13; // r5@21
  __int64 v14; // r0@21
  unsigned int v15; // r4@21
  unsigned int v16; // r7@21
  unsigned int i; // r2@21
  unsigned int v18; // r3@22
  int v19; // r3@25
  int v20; // r10@25
  int v21; // r7@27
  unsigned int *v22; // r2@29
  signed int v23; // r1@31
  int v24; // r6@37
  void *v25; // r0@37
  int v26; // r1@39
  void *v27; // r0@39
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@41
  pthread_mutex_t *mutex; // [sp+Ch] [bp-4Ch]@3
  MemoryMappedFileAccess *v30; // [sp+14h] [bp-44h]@1
  int v31; // [sp+18h] [bp-40h]@15
  int v32; // [sp+1Ch] [bp-3Ch]@16
  int v33; // [sp+24h] [bp-34h]@7
  int v34; // [sp+28h] [bp-30h]@16
  int v35; // [sp+2Ch] [bp-2Ch]@16

  v1 = (char *)this + 52;
  v30 = this;
  if ( &pthread_create )
  {
    v2 = pthread_mutex_lock((pthread_mutex_t *)((char *)this + 52));
    if ( v2 )
      sub_21E5E14(v2);
  }
  mutex = (pthread_mutex_t *)v1;
  v4 = (*(int (**)(void))(**((_DWORD **)v30 + 17) + 28))();
  v5 = v4 == 0;
  if ( v4 )
    v3 = *((_DWORD *)v30 + 8);
    v5 = v3 == 0;
  if ( !v5 )
    do
    {
      v31 = v3;
      if ( *(_BYTE *)(v3 + 23) )
      {
        v8 = *((_DWORD *)v30 + 17);
        v9 = *(int (__fastcall **)(int, int *, int *))(*(_DWORD *)v8 + 8);
        v34 = *(_DWORD *)(v3 + 4);
        v35 = *(_DWORD *)(v34 - 12);
        sub_21E94B4((void **)&v33, "wb");
        v32 = v9(v8, &v34, &v33);
        v10 = (void *)(v33 - 12);
        if ( (int *)(v33 - 12) != &dword_28898C0 )
        {
          v6 = (unsigned int *)(v33 - 4);
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
        }
        if ( v32 )
          v11 = (void *)*((_DWORD *)v30 + 5);
          if ( !v11 )
            v11 = &MemoryMappedFileAccess::EMPTY_TRANSFORMS;
          if ( (*(int (__cdecl **)(void *))(*(_DWORD *)v11 + 12))(v11) == 1 )
            v12 = -1;
            v13 = -16385;
            v14 = *(_QWORD *)(v31 + 8);
            v15 = HIDWORD(v14) - v14;
            v16 = v14 - 1 - HIDWORD(v14);
            for ( i = 0; ; i = v20 )
            {
              v18 = v16;
              if ( v13 > v16 )
                v18 = v13;
              if ( v15 <= i )
                break;
              v19 = v12 - v18;
              v13 -= 0x4000;
              v12 -= 0x4000;
              v20 = i + 0x4000;
              (*(void (__fastcall **)(int, unsigned int, signed int, int))(*(_DWORD *)v4 + 8))(
                v4,
                *(_DWORD *)(v31 + 8) + i,
                1,
                v19);
            }
      }
      v3 = *(_DWORD *)v31;
    }
    while ( *(_DWORD *)v31 );
  v21 = *((_DWORD *)v30 + 8);
  while ( v21 )
    v24 = v21;
    v25 = *(void **)(v21 + 8);
    v21 = *(_DWORD *)v21;
    if ( v25 )
      operator delete(v25);
    v26 = *(_DWORD *)(v24 + 4);
    v27 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v26 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      else
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    operator delete((void *)v24);
  _aeabi_memclr4(*((_QWORD *)v30 + 3), 4 * (*((_QWORD *)v30 + 3) >> 32));
  *((_DWORD *)v30 + 8) = 0;
  *((_DWORD *)v30 + 9) = 0;
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))pthread_mutex_unlock(mutex);
  return result;
}


int __fastcall MemoryMappedFileAccess::MemoryMappedFileAccess(double a1, _DWORD *a2)
{
  double v2; // r4@1
  unsigned int v3; // r0@1
  int v4; // r7@3
  void *v5; // r6@3
  int result; // r0@4

  v2 = a1;
  *(_DWORD *)LODWORD(a1) = &off_26EBB14;
  *(_DWORD *)(LODWORD(a1) + 4) = &off_26EBB40;
  *(_DWORD *)(LODWORD(v2) + 8) = LODWORD(v2);
  *(_DWORD *)(LODWORD(a1) + 12) = &off_26EBB54;
  *(_DWORD *)(LODWORD(v2) + 16) = LODWORD(v2);
  LODWORD(a1) = *a2;
  *a2 = 0;
  *(_DWORD *)(LODWORD(v2) + 20) = LODWORD(a1);
  *(_DWORD *)(LODWORD(v2) + 32) = 0;
  *(_DWORD *)(LODWORD(v2) + 36) = 0;
  *(_DWORD *)(LODWORD(v2) + 40) = 1065353216;
  LODWORD(a1) = LODWORD(v2) + 40;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v3 = sub_21E6254(a1);
  *(_DWORD *)(LODWORD(v2) + 28) = v3;
  if ( v3 == 1 )
  {
    *(_DWORD *)(LODWORD(v2) + 48) = 0;
    v5 = (void *)(LODWORD(v2) + 48);
  }
  else
    if ( v3 >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * v3;
    v5 = operator new(4 * v3);
    _aeabi_memclr4(v5, v4);
  *(_DWORD *)(LODWORD(v2) + 24) = v5;
  *(_DWORD *)(LODWORD(v2) + 52) = 0;
  *(_DWORD *)(LODWORD(v2) + 60) = 0;
  *(_DWORD *)(LODWORD(v2) + 56) = 0;
  *(_DWORD *)(LODWORD(v2) + 56) = LODWORD(v2) + 56;
  *(_DWORD *)(LODWORD(v2) + 60) = LODWORD(v2) + 56;
  *(_DWORD *)(LODWORD(v2) + 64) = 0;
  result = LODWORD(v2);
  *(_DWORD *)(LODWORD(v2) + 68) = HIDWORD(v2);
  return result;
}
