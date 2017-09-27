

int __fastcall PostprocessingManager::Owns::Owns(int result, PostprocessingManager *a2)
{
  *(_QWORD *)result = *(_QWORD *)&ChunkPos::INVALID;
  *(_DWORD *)(result + 8) = a2;
  return result;
}


int __fastcall PostprocessingManager::PostprocessingManager(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  unsigned int v3; // r0@1
  int v4; // r6@3
  void *v5; // r5@3
  unsigned __int32 v6; // r0@4
  char v7; // r1@4
  int result; // r0@6

  v1 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 1065353216;
  v2 = a1 + 20;
  *(_DWORD *)(a1 + 24) = 0;
  v3 = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, a1 + 20)));
  *(_DWORD *)(v2 - 12) = v3;
  if ( v3 == 1 )
  {
    *(_DWORD *)(v1 + 28) = 0;
    v5 = (void *)(v1 + 28);
  }
  else
    if ( v3 >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * v3;
    v5 = operator new(4 * v3);
    v3 = _aeabi_memclr4(v5, v4);
  *(_DWORD *)(v1 + 4) = v5;
  v6 = AppPlatform::getAvailableHWThreadCount((AppPlatform *)v3);
  v7 = 0;
  if ( v6 > 2 )
    v7 = 1;
  result = v1;
  *(_BYTE *)(v1 + 32) = v7;
  return result;
}


int __fastcall PostprocessingManager::tryLock(PostprocessingManager *this, const ChunkPos *a2, unsigned __int64 *a3)
{
  int v3; // r9@0
  pthread_mutex_t *v4; // r5@1
  PostprocessingManager *v5; // r6@1
  unsigned __int64 *v6; // r4@1
  int v7; // r0@3
  int v8; // r1@4 OVERLAPPED
  unsigned int v9; // r10@4
  int v10; // r1@5
  int v11; // r0@6
  int v12; // r11@7
  int v13; // r8@7
  unsigned int v14; // r6@7
  int *v15; // r0@7
  bool v16; // zf@7
  int v17; // r7@10
  int v18; // r4@10
  int v19; // r9@21
  __int64 v20; // kr00_8@22
  int v21; // r6@22
  int v22; // r5@22
  int v23; // r0@22
  int v24; // r11@23
  int v25; // r4@23
  bool v26; // zf@24
  int v27; // r8@27
  bool v28; // zf@30
  _DWORD *v29; // r0@34
  bool v30; // nf@35
  unsigned __int8 v31; // vf@35
  signed int v32; // r4@37
  unsigned __int64 v33; // r0@39
  unsigned __int64 *v35; // [sp+0h] [bp-50h]@4
  PostprocessingManager *v36; // [sp+4h] [bp-4Ch]@4
  int v37; // [sp+Ch] [bp-44h]@6
  int v38; // [sp+10h] [bp-40h]@6
  int v39; // [sp+14h] [bp-3Ch]@4
  int v40; // [sp+1Ch] [bp-34h]@4
  pthread_mutex_t *mutex; // [sp+20h] [bp-30h]@1
  int v42; // [sp+24h] [bp-2Ch]@4
  unsigned int v43; // [sp+28h] [bp-28h]@5
  int v44; // [sp+28h] [bp-28h]@21

  v4 = (pthread_mutex_t *)a2;
  v5 = this;
  v6 = a3;
  mutex = (pthread_mutex_t *)a2;
  if ( !*((_BYTE *)a2 + 32) )
    goto LABEL_49;
  if ( &pthread_create )
  {
    v7 = pthread_mutex_lock((pthread_mutex_t *)a2);
    if ( v7 )
      sub_21E5E14(v7);
  }
  *(_QWORD *)&v8 = *v6;
  v40 = (int)&v4->__count;
  v9 = *v6 - 1;
  v42 = *v6 >> 32;
  v36 = v5;
  v39 = *v6;
  v35 = v6;
  if ( v4->__nusers )
    v10 = v8 - 1;
    v43 = v4->__owner;
    while ( 2 )
    {
      v38 = v10;
      v37 = 522133279 * v10;
      v11 = v42 - 1;
      do
      {
        v12 = v11;
        v13 = v11 ^ v37;
        v14 = (v11 ^ (unsigned int)v37) % v43;
        v15 = *(int **)(v4->__count + 4 * v14);
        v16 = v15 == 0;
        if ( v15 )
        {
          v3 = *v15;
          v16 = *v15 == 0;
        }
        if ( !v16 )
          v17 = *(_DWORD *)(v3 + 16);
          v18 = 0;
          do
          {
            if ( v17 != v13 || *(_QWORD *)(v3 + 8) != __PAIR__(v12, v10) )
            {
              if ( v18 )
                goto LABEL_38;
              v18 = 0;
            }
            else
              ++v18;
            v3 = *(_DWORD *)v3;
            if ( !v3 )
              break;
            v17 = *(_DWORD *)(v3 + 16);
          }
          while ( *(_DWORD *)(v3 + 16) % v43 == v14 );
          if ( !v18 )
            goto LABEL_19;
LABEL_38:
          v32 = 1;
          v5 = v36;
          *(_QWORD *)v36 = *(_QWORD *)&ChunkPos::INVALID;
          *((_DWORD *)v36 + 2) = v4;
          goto LABEL_39;
LABEL_19:
        v11 = v12 + 1;
      }
      while ( v12 <= v42 );
      ++v10;
      if ( v38 <= v39 )
        continue;
      break;
    }
  do
    v19 = v42 - 1;
    v44 = 522133279 * v9;
    do
      v20 = *(_QWORD *)&v4->__count;
      v21 = v19 ^ v44;
      v22 = (v19 ^ (unsigned int)v44) % HIDWORD(v20);
      v23 = *(_DWORD *)(v20 + 4 * v22);
      if ( !v23 )
        goto LABEL_34;
      v24 = *(_DWORD *)v23;
      v25 = *(_DWORD *)(*(_DWORD *)v23 + 16);
      while ( 1 )
        v26 = v25 == v21;
        if ( v25 == v21 )
          v26 = *(_QWORD *)(v24 + 8) == __PAIR__(v19, v9);
        if ( v26 )
          break;
        v27 = *(_DWORD *)v24;
        if ( *(_DWORD *)v24 )
          v25 = *(_DWORD *)(v27 + 16);
          v23 = v24;
          v24 = *(_DWORD *)v24;
          if ( *(_DWORD *)(v27 + 16) % HIDWORD(v20) == v22 )
            continue;
      v28 = v23 == 0;
      if ( v23 )
        v28 = *(_DWORD *)v23 == 0;
      if ( v28 )
LABEL_34:
        v29 = operator new(0x18u);
        *v29 = 0;
        v29[2] = v9;
        v29[3] = v19;
        std::_Hashtable<ChunkPos,ChunkPos,std::allocator<ChunkPos>,std::__detail::_Identity,std::equal_to<ChunkPos>,std::hash<ChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert_unique_node(
          v40,
          v22,
          v21,
          (int)v29);
      v4 = mutex;
      v31 = __OFSUB__(v19, v42);
      v16 = v19 == v42;
      v30 = v19++ - v42 < 0;
    while ( (unsigned __int8)(v30 ^ v31) | v16 );
    v31 = __OFSUB__(v9, v39);
    v16 = v9 == v39;
    v30 = ((v9++ - v39) & 0x80000000) != 0;
  while ( (unsigned __int8)(v30 ^ v31) | v16 );
  v5 = v36;
  v32 = 0;
LABEL_39:
  LODWORD(v33) = &pthread_create;
    LODWORD(v33) = pthread_mutex_unlock(v4);
  v16 = v32 == 0;
  v6 = v35;
  if ( v16 )
LABEL_49:
    v33 = *v6;
    *(_QWORD *)v5 = *v6;
    *((_DWORD *)v5 + 2) = v4;
  return v33;
}


int __fastcall PostprocessingManager::Owns::Owns(int result, const ChunkPos *a2, PostprocessingManager *a3)
{
  *(_QWORD *)result = *(_QWORD *)a2;
  *(_DWORD *)(result + 8) = a3;
  return result;
}


PostprocessingManager::Owns *__fastcall PostprocessingManager::Owns::~Owns(PostprocessingManager::Owns *this)
{
  PostprocessingManager::Owns *v1; // r4@1

  v1 = this;
  if ( *(_QWORD *)&ChunkPos::INVALID != *(_QWORD *)this )
    PostprocessingManager::_release(*((PostprocessingManager **)this + 2), this);
  return v1;
}


PostprocessingManager *__fastcall PostprocessingManager::~PostprocessingManager(PostprocessingManager *this)
{
  PostprocessingManager *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  char *v4; // r0@3

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 3);
  if ( v2 )
  {
    do
    {
      v3 = *(void **)v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 4), 4 * (*(_QWORD *)((char *)v1 + 4) >> 32));
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = 0;
  v4 = (char *)*((_DWORD *)v1 + 1);
  if ( v4 && (char *)v1 + 28 != v4 )
    operator delete(v4);
  return v1;
}


int (**__fastcall PostprocessingManager::_release(PostprocessingManager *this, const ChunkPos *a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  const ChunkPos *v2; // r5@1
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@1
  int v4; // r0@3
  int v5; // r0@4
  int v6; // r0@5
  int v7; // r10@6
  unsigned int v8; // r4@6
  unsigned int v9; // r6@6
  int v10; // r7@6
  unsigned int v11; // r1@6
  unsigned int v12; // r5@6
  void ***v13; // r0@6
  void **v14; // r8@7
  void **v15; // r9@7
  void *v16; // r4@7
  _DWORD *v17; // r11@10
  int *v18; // r4@14
  void **v19; // r7@14
  int v20; // r1@16
  _DWORD *v21; // r9@19
  int v22; // r1@20
  unsigned int v23; // r1@21
  int *v24; // [sp+0h] [bp-48h]@4
  int v25; // [sp+4h] [bp-44h]@4
  int v26; // [sp+8h] [bp-40h]@4
  void **v27; // [sp+Ch] [bp-3Ch]@7
  int v28; // [sp+10h] [bp-38h]@4
  int v29; // [sp+14h] [bp-34h]@5
  unsigned int v30; // [sp+18h] [bp-30h]@6
  pthread_mutex_t *mutex; // [sp+1Ch] [bp-2Ch]@1
  int v32; // [sp+20h] [bp-28h]@5

  mutex = (pthread_mutex_t *)this;
  v2 = a2;
  result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))*((_BYTE *)this + 32);
  if ( result )
  {
    if ( &pthread_create )
    {
      v4 = pthread_mutex_lock(mutex);
      if ( v4 )
        sub_21E5E14(v4);
    }
    v24 = &mutex->__kind;
    v25 = (*(_QWORD *)v2 >> 32) - 1;
    v5 = *(_QWORD *)v2 - 1;
    v28 = *(_QWORD *)v2 >> 32;
    v26 = *(_QWORD *)v2;
    while ( 1 )
      v32 = v5;
      v29 = 522133279 * v5;
      v6 = v25;
      do
      {
        v7 = v6;
        v8 = mutex->__count;
        v9 = mutex->__owner;
        v30 = mutex->__count;
        v10 = v6 ^ v29;
        v11 = (v6 ^ (unsigned int)v29) % v9;
        v12 = v11;
        v13 = *(void ****)(v8 + 4 * v11);
        if ( v13 )
        {
          v14 = *(void ***)(v8 + 4 * v11);
          v15 = *v13;
          v27 = *(void ***)(v8 + 4 * v11);
          v16 = (*v13)[4];
          while ( v16 != (void *)v10 || *((_QWORD *)v15 + 1) != __PAIR__(v7, v32) )
          {
            v17 = *v15;
            if ( *v15 )
            {
              v16 = (void *)v17[4];
              v14 = v15;
              v15 = (void **)*v15;
              if ( v17[4] % v9 == v11 )
                continue;
            }
            goto LABEL_27;
          }
          if ( v14 )
            v18 = (int *)v27;
            v19 = (void **)*v14;
            if ( v27 != v14 )
              if ( *v19 )
              {
                v20 = *((_DWORD *)*v19 + 4) % v9;
                if ( v20 != v12 )
                  *(_DWORD *)(v30 + 4 * v20) = v14;
              }
              goto LABEL_26;
            v21 = *v19;
            if ( *v19 )
              v22 = v21[4] % v9;
              if ( v22 == v12 )
LABEL_26:
                *v14 = *v19;
                operator delete(v19);
                --mutex->__nusers;
                goto LABEL_27;
              *(_DWORD *)(v30 + 4 * v22) = v27;
              v23 = mutex->__count;
              v18 = *(int **)(v23 + 4 * v12);
            else
            if ( v24 == v18 )
              *v24 = (int)v21;
            *(_DWORD *)(v23 + 4 * v12) = 0;
            goto LABEL_26;
        }
LABEL_27:
        v6 = v7 + 1;
      }
      while ( v7 <= v28 );
      v5 = v32 + 1;
      if ( v32 > v26 )
        result = &pthread_create;
        if ( &pthread_create )
          result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))pthread_mutex_unlock(mutex);
        return result;
  }
  return result;
}
