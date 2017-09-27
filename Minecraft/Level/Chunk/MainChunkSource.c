

int __fastcall MainChunkSource::MainChunkSource(int a1, int *a2)
{
  int v2; // r4@1
  int v3; // r0@1
  double v4; // r0@1
  unsigned int v5; // r0@3
  int v6; // r6@5
  void *v7; // r5@5
  int v9; // [sp+4h] [bp-14h]@1

  v2 = a1;
  v3 = *a2;
  *a2 = 0;
  v9 = v3;
  j_ChunkSource::ChunkSource(v2, &v9);
  if ( v9 )
    (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  v9 = 0;
  *(_DWORD *)v2 = &off_2723560;
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 36) = 0;
  *(_DWORD *)(v2 + 40) = 1065353216;
  LODWORD(v4) = v2 + 40;
  *(_DWORD *)(LODWORD(v4) + 4) = 0;
  v5 = sub_21E6254(v4);
  *(_DWORD *)(v2 + 28) = v5;
  if ( v5 == 1 )
  {
    *(_DWORD *)(v2 + 48) = 0;
    v7 = (void *)(v2 + 48);
  }
  else
    if ( v5 >= 0x40000000 )
      sub_21E57F4();
    v6 = 4 * v5;
    v7 = j_operator new(4 * v5);
    j___aeabi_memclr4_0((int)v7, v6);
  *(_DWORD *)(v2 + 24) = v7;
  return v2;
}


void __fastcall MainChunkSource::~MainChunkSource(MainChunkSource *this)
{
  MainChunkSource::~MainChunkSource(this);
}


int __fastcall MainChunkSource::getExistingChunk(MainChunkSource *this, const ChunkPos *a2, unsigned __int64 *a3, int a4, int a5)
{
  __int64 v5; // kr00_8@1
  unsigned int v6; // r6@1
  unsigned int v7; // r7@1
  int v8; // r0@1
  int v9; // r8@2
  unsigned int v10; // r9@2 OVERLAPPED
  unsigned int v11; // r10@2 OVERLAPPED
  int v12; // r4@2
  bool v13; // zf@3
  bool v14; // zf@9
  int v15; // r1@12
  unsigned int v16; // r2@13
  unsigned int *v17; // r1@13
  int result; // r0@14
  unsigned int v19; // r3@17
  unsigned int v20; // r7@18
  int v21; // r1@19
  int v22; // r2@20
  signed int v23; // r1@20
  int v24; // r0@26
  MainChunkSource *v25; // [sp+0h] [bp-28h]@1

  v25 = this;
  v5 = *((_QWORD *)a2 + 3);
  v6 = 522133279 * *a3 ^ (*a3 >> 32);
  v7 = v6 % (unsigned int)(*((_QWORD *)a2 + 3) >> 32);
  v8 = *(_DWORD *)(v5 + 4 * v7);
  if ( v8 )
  {
    v9 = *(_DWORD *)v8;
    *(_QWORD *)&v10 = *a3;
    v12 = *(_DWORD *)(*(_DWORD *)v8 + 24);
    while ( 1 )
    {
      v13 = v12 == v6;
      if ( v12 == v6 )
        v13 = *(_QWORD *)(v9 + 8) == __PAIR__(v11, v10);
      if ( v13 )
        break;
      if ( *(_DWORD *)v9 )
      {
        v12 = *(_DWORD *)(v5 + 24);
        v8 = v9;
        v9 = *(_DWORD *)v9;
        if ( *(_DWORD *)(v5 + 24) % HIDWORD(v5) == v7 )
          continue;
      }
      goto LABEL_14;
    }
    v14 = v8 == 0;
    if ( v8 )
      v8 = *(_DWORD *)v8;
      v14 = v8 == 0;
    if ( !v14 )
      v15 = *(_DWORD *)(v8 + 20);
      *((_DWORD *)v25 + 1) = v15;
      if ( v15 )
        v16 = *(_DWORD *)(v15 + 4);
        v17 = (unsigned int *)(v15 + 4);
        do
        {
          while ( 1 )
          {
            if ( !v16 )
            {
              *((_DWORD *)v25 + 1) = 0;
              v23 = 1;
              goto LABEL_26;
            }
            __dmb();
            v19 = __ldrex(v17);
            if ( v19 == v16 )
              break;
            __clrex();
            v16 = v19;
          }
          v20 = __strex(v16 + 1, v17);
          v16 = v19;
        }
        while ( v20 );
        __dmb();
        v21 = *((_DWORD *)v25 + 1);
        if ( v21 )
          v22 = *(_DWORD *)(v21 + 4);
          v23 = 0;
          if ( !v22 )
            v23 = 1;
        else
          v23 = 1;
      else
        v23 = 1;
LABEL_26:
      v24 = *(_DWORD *)(v8 + 16);
      if ( v23 )
        v24 = 0;
      *(_DWORD *)v25 = v24;
      JUMPOUT(__CS__, a5);
  }
LABEL_14:
  result = 0;
  *(_DWORD *)v25 = 0;
  *((_DWORD *)v25 + 1) = 0;
  return result;
}


char *__fastcall MainChunkSource::getStorage(MainChunkSource *this)
{
  return (char *)this + 24;
}


unsigned int __fastcall MainChunkSource::getRandomChunk(MainChunkSource *this, Random *a2, Random *a3)
{
  Random *v3; // r4@1
  MainChunkSource *v4; // r5@1
  unsigned int v5; // r6@1
  unsigned int v6; // r1@2
  int i; // r0@2
  int v8; // r4@4
  unsigned int v9; // r1@5
  unsigned int *v10; // r7@5
  unsigned int v11; // r2@8
  unsigned int v12; // r3@9
  bool v13; // zf@10
  char v14; // r0@13
  unsigned int v15; // r0@16
  unsigned int result; // r0@18
  unsigned int *v17; // r5@28

  v3 = a2;
  v4 = this;
  v5 = *((_DWORD *)a2 + 9);
  if ( v5 )
  {
    v6 = j_Random::_genRandInt32(a3) % v5;
    for ( i = *((_DWORD *)v3 + 8); v6; --v6 )
      i = *(_DWORD *)i;
    v8 = *(_DWORD *)(i + 20);
    if ( v8 )
    {
      v9 = *(_DWORD *)(v8 + 4);
      v10 = (unsigned int *)(v8 + 4);
      while ( v9 )
      {
        __dmb();
        v11 = __ldrex(v10);
        if ( v11 == v9 )
        {
          v12 = __strex(v9 + 1, v10);
          v9 = v11;
          if ( !v12 )
          {
            __dmb();
            v13 = *v10 == 0;
            if ( *v10 )
            {
              v5 = *(_DWORD *)(i + 16);
              v13 = v5 == 0;
            }
            if ( v13 || (v14 = *j_LevelChunk::getState((LevelChunk *)v5), __dmb(), (unsigned __int8)v14 < 8u) )
              *(_DWORD *)v4 = 0;
              *((_DWORD *)v4 + 1) = 0;
            else
              *(_DWORD *)v4 = v5;
              *((_DWORD *)v4 + 1) = v8;
              if ( &pthread_create )
              {
                __dmb();
                do
                  v15 = __ldrex(v10);
                while ( __strex(v15 + 1, v10) );
              }
              else
                ++*v10;
            if ( &pthread_create )
              __dmb();
              do
                result = __ldrex(v10);
              while ( __strex(result - 1, v10) );
              result = (*v10)--;
            if ( result == 1 )
              v17 = (unsigned int *)(v8 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
                  result = __ldrex(v17);
                while ( __strex(result - 1, v17) );
                result = (*v17)--;
              if ( result == 1 )
                result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
            return result;
          }
        }
        else
          __clrex();
      }
    }
  }
  result = 0;
  *(_DWORD *)v4 = 0;
  *((_DWORD *)v4 + 1) = 0;
  return result;
}


void __fastcall MainChunkSource::~MainChunkSource(MainChunkSource *this)
{
  MainChunkSource *v1; // r8@1
  int v2; // r6@1
  void *v3; // r5@2
  int v4; // r0@2
  unsigned int *v5; // r2@3
  unsigned int v6; // r1@5
  char *v7; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_2723560;
  v2 = *((_DWORD *)this + 8);
  while ( v2 )
  {
    v3 = (void *)v2;
    v4 = *(_DWORD *)(v2 + 20);
    v2 = *(_DWORD *)v2;
    if ( v4 )
    {
      v5 = (unsigned int *)(v4 + 8);
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
        (*(void (**)(void))(*(_DWORD *)v4 + 12))();
    }
    j_operator delete(v3);
  }
  j___aeabi_memclr4_0(*((_QWORD *)v1 + 3), 4 * (*((_QWORD *)v1 + 3) >> 32));
  *((_DWORD *)v1 + 8) = 0;
  *((_DWORD *)v1 + 9) = 0;
  v7 = (char *)*((_DWORD *)v1 + 6);
  if ( v7 && (char *)v1 + 48 != v7 )
    j_operator delete(v7);
  j_ChunkSource::~ChunkSource(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall MainChunkSource::acquireDiscarded(int a1, LevelChunk **a2)
{
  MainChunkSource::acquireDiscarded(a1, a2);
}


ChunkSource *__fastcall MainChunkSource::~MainChunkSource(MainChunkSource *this)
{
  MainChunkSource *v1; // r8@1
  int v2; // r6@1
  void *v3; // r5@2
  int v4; // r0@2
  unsigned int *v5; // r2@3
  unsigned int v6; // r1@5
  char *v7; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_2723560;
  v2 = *((_DWORD *)this + 8);
  while ( v2 )
  {
    v3 = (void *)v2;
    v4 = *(_DWORD *)(v2 + 20);
    v2 = *(_DWORD *)v2;
    if ( v4 )
    {
      v5 = (unsigned int *)(v4 + 8);
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
        (*(void (**)(void))(*(_DWORD *)v4 + 12))();
    }
    j_operator delete(v3);
  }
  j___aeabi_memclr4_0(*((_QWORD *)v1 + 3), 4 * (*((_QWORD *)v1 + 3) >> 32));
  *((_DWORD *)v1 + 8) = 0;
  *((_DWORD *)v1 + 9) = 0;
  v7 = (char *)*((_DWORD *)v1 + 6);
  if ( v7 && (char *)v1 + 48 != v7 )
    j_operator delete(v7);
  return j_j_j__ZN11ChunkSourceD2Ev_1(v1);
}


void __fastcall MainChunkSource::acquireDiscarded(int a1, LevelChunk **a2)
{
  int v2; // r4@1
  char *v3; // r8@1
  int v4; // t1@1
  unsigned int v5; // r4@1
  unsigned int v6; // r5@1
  int v7; // r7@1
  int *v8; // r2@1
  int v9; // r10@2
  int v10; // r6@2
  bool v11; // zf@3
  int v12; // r9@6
  LevelChunk *v13; // r0@11
  LevelChunk *v14; // r0@12
  int v15; // [sp+4h] [bp-34h]@1
  LevelChunk **v16; // [sp+8h] [bp-30h]@1
  int v17; // [sp+Ch] [bp-2Ch]@1
  LevelChunk *v18; // [sp+10h] [bp-28h]@11

  v2 = a1;
  v16 = a2;
  v17 = a1;
  v3 = j_LevelChunk::getPosition(*a2);
  v4 = *(_DWORD *)(v2 + 24);
  v2 += 24;
  v15 = v2;
  v5 = *(_DWORD *)(v2 + 4);
  v6 = 522133279 * *(_QWORD *)v3 ^ (*(_QWORD *)v3 >> 32);
  v7 = v6 % v5;
  v8 = *(int **)(v4 + 4 * (v6 % v5));
  if ( v8 )
  {
    v9 = *v8;
    v10 = *(_DWORD *)(*v8 + 24);
    while ( 1 )
    {
      v11 = v10 == v6;
      if ( v10 == v6 )
        v11 = *(_QWORD *)(v9 + 8) == *(_QWORD *)v3;
      if ( v11 )
        break;
      v12 = *(_DWORD *)v9;
      if ( *(_DWORD *)v9 )
      {
        v10 = *(_DWORD *)(v12 + 24);
        v8 = (int *)v9;
        v9 = *(_DWORD *)v9;
        if ( *(_DWORD *)(v12 + 24) % v5 == v7 )
          continue;
      }
      goto LABEL_11;
    }
    if ( v8 )
      j_std::_Hashtable<ChunkPos,std::pair<ChunkPos const,std::weak_ptr<LevelChunk>>,std::allocator<std::pair<ChunkPos const,std::weak_ptr<LevelChunk>>>,std::__detail::_Select1st,std::equal_to<ChunkPos>,std::hash<ChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(
        v15,
        v7,
        v8,
        *v8);
  }
LABEL_11:
  v13 = *v16;
  *v16 = 0;
  v18 = v13;
  j_ChunkSource::acquireDiscarded(v17, &v18);
  if ( v18 )
    v14 = j_LevelChunk::~LevelChunk(v18);
    j_LevelChunk::operator delete((void *)v14);
}


int __fastcall MainChunkSource::createNewChunk(int a1, int a2, __int64 *a3, int a4)
{
  __int64 *v4; // r5@1
  int v5; // r4@1
  __int64 v6; // r0@1
  int v7; // r5@1
  unsigned int v8; // r6@1
  unsigned int v9; // r7@1
  int v10; // r4@1
  int *v11; // r0@1
  int v12; // r11@2
  int v13; // r9@2
  int v14; // r5@2
  bool v15; // zf@3
  int v16; // r10@6
  bool v17; // zf@9
  _QWORD *v18; // r0@13
  int v19; // r4@14
  unsigned int *v20; // r0@15
  unsigned int v21; // r1@17
  int result; // r0@20
  unsigned int *v23; // r2@21
  unsigned int v24; // r1@23
  int v25; // [sp+0h] [bp-30h]@1
  int v26; // [sp+4h] [bp-2Ch]@1
  __int64 *v27; // [sp+8h] [bp-28h]@1

  v4 = a3;
  v5 = a2;
  v27 = a3;
  v26 = a1;
  j_ChunkSource::createNewChunk(a1, a2, a3, a4);
  v6 = *v4;
  v7 = *(_DWORD *)(v5 + 24);
  v25 = v5 + 24;
  v8 = *(_DWORD *)(v5 + 28);
  v9 = 522133279 * v6 ^ HIDWORD(v6);
  v10 = v9 % *(_DWORD *)(v5 + 28);
  v11 = *(int **)(v7 + 4 * v10);
  if ( !v11 )
    goto LABEL_13;
  v12 = *v11;
  v13 = *v27;
  v14 = *(_DWORD *)(*v11 + 24);
  while ( 1 )
  {
    v15 = v14 == v9;
    if ( v14 == v9 )
      v15 = *(_QWORD *)(v12 + 8) == *v27;
    if ( v15 )
      break;
    v16 = *(_DWORD *)v12;
    if ( *(_DWORD *)v12 )
    {
      v14 = *(_DWORD *)(v16 + 24);
      v11 = (int *)v12;
      v12 = *(_DWORD *)v12;
      if ( *(_DWORD *)(v16 + 24) % v8 == v10 )
        continue;
    }
  }
  v17 = v11 == 0;
  if ( v11 )
    v13 = *v11;
    v17 = *v11 == 0;
  if ( v17 )
LABEL_13:
    v18 = j_operator new(0x20u);
    *(_DWORD *)v18 = 0;
    v18[1] = *v27;
    *((_DWORD *)v18 + 4) = 0;
    *((_DWORD *)v18 + 5) = 0;
    v13 = j_std::_Hashtable<ChunkPos,std::pair<ChunkPos const,std::weak_ptr<LevelChunk>>,std::allocator<std::pair<ChunkPos const,std::weak_ptr<LevelChunk>>>,std::__detail::_Select1st,std::equal_to<ChunkPos>,std::hash<ChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v25,
            v10,
            v9,
            (int)v18);
  *(_DWORD *)(v13 + 16) = *(_DWORD *)v26;
  v19 = *(_DWORD *)(v26 + 4);
  if ( v19 )
    v20 = (unsigned int *)(v19 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 + 1, v20) );
    else
      ++*v20;
  result = *(_DWORD *)(v13 + 20);
  if ( result )
    v23 = (unsigned int *)(result + 8);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 == 1 )
      result = (*(int (__cdecl **)(int))(*(_DWORD *)result + 12))(result);
  *(_DWORD *)(v13 + 20) = v19;
  return result;
}
