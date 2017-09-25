

signed int __fastcall CachedScenes::hasCachedScene(CachedScenes *this, const Json::Value *a2)
{
  CachedScenes *v2; // r9@1
  const Json::Value *v3; // r8@1
  unsigned int v4; // r10@1
  int *v5; // r0@1
  __int64 v6; // kr00_8@2
  int v7; // r6@2
  int v8; // r7@3
  int v9; // r4@3
  int v10; // r5@6
  signed int result; // r0@8
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  int *v14; // [sp+4h] [bp-2Ch]@1

  v2 = this;
  v3 = a2;
  Json::Value::toStyledString((Json::Value *)&v14, a2);
  v4 = sub_DA7754(v14, *(v14 - 3), -955291385);
  v5 = v14 - 3;
  if ( v14 - 3 != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v14 - 1);
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
      j_j_j_j_j__ZdlPv_9(v5);
  }
  v6 = *(_QWORD *)((char *)v2 + 4);
  v7 = *(_DWORD *)(v6 + 4 * (v4 % HIDWORD(v6)));
  if ( !v7 )
    goto LABEL_8;
  v8 = *(_DWORD *)v7;
  v9 = *(_DWORD *)(*(_DWORD *)v7 + 32);
  while ( v9 != v4 || !Json::Value::operator==((int)v3, (const char **)(v8 + 8)) )
    v10 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 )
      v9 = *(_DWORD *)(v10 + 32);
      v7 = v8;
      v8 = *(_DWORD *)v8;
      if ( *(_DWORD *)(v10 + 32) % *((_DWORD *)v2 + 2) == v4 % HIDWORD(v6) )
        continue;
  if ( v7 )
    result = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 )
      result = 1;
  else
LABEL_8:
    result = 0;
  return result;
}


int __fastcall CachedScenes::clearCache(CachedScenes *this)
{
  CachedScenes *v1; // r4@1
  int v2; // r5@1
  int v3; // r6@2
  int result; // r0@3

  v1 = this;
  v2 = *((_DWORD *)this + 3);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)v2;
      std::unique_ptr<CachedScene,std::default_delete<CachedScene>>::~unique_ptr((void **)(v2 + 24));
      Json::Value::~Value((Json::Value *)(v2 + 8));
      operator delete((void *)v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 4), 4 * (*(_QWORD *)((char *)v1 + 4) >> 32));
  result = 0;
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = 0;
  return result;
}


int __fastcall CachedScenes::getCachedScene(CachedScenes *this, const Json::Value *a2, const Json::Value *a3)
{
  CachedScenes *v3; // r4@1
  const Json::Value *v4; // r10@1
  const Json::Value *v5; // r11@1
  unsigned int v6; // r7@1
  int *v7; // r0@1
  __int64 v8; // kr00_8@2
  int v9; // r5@2
  int *v10; // r8@2
  int v11; // r9@3
  int v12; // r6@3
  int v13; // r4@6
  bool v14; // zf@9
  int v15; // r0@12
  int v16; // r1@12
  _DWORD *v17; // r0@12
  _DWORD *v18; // r2@13
  int result; // r0@14
  unsigned int *v20; // r2@16
  signed int v21; // r1@18
  CachedScenes *v22; // [sp+8h] [bp-30h]@1
  int *v23; // [sp+Ch] [bp-2Ch]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  Json::Value::toStyledString((Json::Value *)&v23, a3);
  v6 = sub_DA7754(v23, *(v23 - 3), -955291385);
  v22 = v3;
  v7 = v23 - 3;
  if ( v23 - 3 != &dword_28898C0 )
  {
    v20 = (unsigned int *)(v23 - 1);
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v8 = *(_QWORD *)((char *)v5 + 4);
  v9 = v6 % HIDWORD(v8);
  v10 = *(int **)(v8 + 4 * (v6 % HIDWORD(v8)));
  if ( !v10 )
    goto LABEL_15;
  v11 = *v10;
  v12 = *(_DWORD *)(*v10 + 32);
  while ( v12 != v6 || !Json::Value::operator==((int)v4, (const char **)(v11 + 8)) )
    v13 = *(_DWORD *)v11;
    if ( *(_DWORD *)v11 )
      v12 = *(_DWORD *)(v13 + 32);
      v10 = (int *)v11;
      v11 = *(_DWORD *)v11;
      if ( *(_DWORD *)(v13 + 32) % *((_DWORD *)v5 + 2) == v9 )
        continue;
  v14 = v10 == 0;
  if ( v10 )
    v9 = *v10;
    v14 = *v10 == 0;
  if ( v14 )
LABEL_15:
    result = 0;
    *(_DWORD *)v22 = 0;
  else
    v15 = *(_DWORD *)(v9 + 24);
    *(_DWORD *)(v9 + 24) = 0;
    *(_DWORD *)v22 = v15;
    v16 = *(_DWORD *)(v9 + 32) % (unsigned int)(*(_QWORD *)((char *)v5 + 4) >> 32);
    v17 = *(_DWORD **)(*(_QWORD *)((char *)v5 + 4) + 4 * v16);
    do
      v18 = v17;
      v17 = (_DWORD *)*v17;
    while ( v17 != (_DWORD *)v9 );
    result = std::_Hashtable<Json::Value,std::pair<Json::Value const,std::unique_ptr<CachedScene,std::default_delete<CachedScene>>>,std::allocator<std::pair<Json::Value const,std::unique_ptr<CachedScene,std::default_delete<CachedScene>>>>,std::__detail::_Select1st,std::equal_to<Json::Value>,CachedScenes::CachedSceneHash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(
               (int)v5 + 4,
               v16,
               v18,
               v9);
  return result;
}


CachedScenes *__fastcall CachedScenes::~CachedScenes(CachedScenes *this)
{
  CachedScenes *v1; // r4@1
  int v2; // r5@1
  int v3; // r6@2
  char *v4; // r0@3

  v1 = this;
  v2 = *((_DWORD *)this + 3);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)v2;
      std::unique_ptr<CachedScene,std::default_delete<CachedScene>>::~unique_ptr((void **)(v2 + 24));
      Json::Value::~Value((Json::Value *)(v2 + 8));
      operator delete((void *)v2);
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


int __fastcall CachedScenes::CachedScenes(int a1, char a2)
{
  int v2; // r4@1
  int v3; // r5@1
  unsigned int v4; // r0@1
  int v5; // r6@3
  void *v6; // r5@3
  int result; // r0@4

  v2 = a1;
  *(_BYTE *)a1 = a2;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 1065353216;
  v3 = a1 + 20;
  *(_DWORD *)(a1 + 24) = 0;
  v4 = sub_DA7744(COERCE_DOUBLE(__PAIR__(10, a1 + 20)));
  *(_DWORD *)(v3 - 12) = v4;
  if ( v4 == 1 )
  {
    *(_DWORD *)(v2 + 28) = 0;
    v6 = (void *)(v2 + 28);
  }
  else
    if ( v4 >= 0x40000000 )
      sub_DA7414();
    v5 = 4 * v4;
    v6 = operator new(4 * v4);
    _aeabi_memclr4(v6, v5);
  result = v2;
  *(_DWORD *)(v2 + 4) = v6;
  return result;
}


void **__fastcall CachedScenes::cacheVisualTree(_BYTE *a1, void ***a2, int a3, int *a4)
{
  void ***v4; // r6@1
  _BYTE *v5; // r7@1
  void **result; // r0@1
  int *v7; // r4@1
  int v8; // r5@1
  char *v9; // r0@3
  _DWORD **v10; // r7@3
  void *v11; // r0@3
  void **v12; // r1@3
  __int64 v13; // kr00_8@3
  int v14; // r5@3
  _DWORD *v15; // r9@3
  int v16; // r8@4
  __int64 v17; // r6@5
  int v18; // r0@6
  unsigned int *v19; // r2@7
  unsigned int v20; // r1@9
  int v21; // r6@18
  unsigned int *v22; // r1@19
  unsigned int v23; // r0@21
  unsigned int *v24; // r5@25
  unsigned int v25; // r0@27
  int v26; // r5@33
  unsigned int *v27; // r1@34
  unsigned int v28; // r0@36
  unsigned int *v29; // r6@40
  unsigned int v30; // r0@42
  int v31; // [sp+0h] [bp-20h]@3

  v4 = a2;
  v5 = a1;
  result = *a2;
  v7 = a4;
  v8 = a3;
  if ( *a2 && !*v5 )
  {
    v9 = VisualTree::getInitGlobalVars((VisualTree *)result);
    v10 = (_DWORD **)std::__detail::_Map_base<Json::Value,std::pair<Json::Value const,std::unique_ptr<CachedScene,std::default_delete<CachedScene>>>,std::allocator<std::pair<Json::Value const,std::unique_ptr<CachedScene,std::default_delete<CachedScene>>>>,std::__detail::_Select1st,std::equal_to<Json::Value>,CachedScenes::CachedSceneHash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                       (int)(v5 + 4),
                       (const Json::Value *)v9);
    v11 = operator new(0x10u);
    v12 = *v4;
    *v4 = 0;
    v13 = *(_QWORD *)v8;
    *(_DWORD *)v8 = 0;
    *(_DWORD *)(v8 + 4) = 0;
    v14 = *v7;
    *v7 = 0;
    *(_DWORD *)v11 = v12;
    *(_QWORD *)((char *)v11 + 4) = v13;
    *((_DWORD *)v11 + 3) = v14;
    v31 = 0;
    v15 = *v10;
    *v10 = v11;
    if ( v15 )
    {
      v16 = v15[3];
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 16);
        if ( (_DWORD)v17 != HIDWORD(v17) )
        {
          do
          {
            v18 = *(_DWORD *)(v17 + 4);
            if ( v18 )
            {
              v19 = (unsigned int *)(v18 + 8);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v20 = __ldrex(v19);
                while ( __strex(v20 - 1, v19) );
              }
              else
                v20 = (*v19)--;
              if ( v20 == 1 )
                (*(void (__cdecl **)(int))(*(_DWORD *)v18 + 12))(v18);
            }
            LODWORD(v17) = v17 + 8;
          }
          while ( (_DWORD)v17 != HIDWORD(v17) );
          LODWORD(v17) = *(_DWORD *)(v16 + 16);
        }
        if ( (_DWORD)v17 )
          operator delete((void *)v17);
        v21 = *(_DWORD *)(v16 + 4);
        if ( v21 )
          v22 = (unsigned int *)(v21 + 4);
          if ( &pthread_create )
            __dmb();
            do
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
          else
            v23 = (*v22)--;
          if ( v23 == 1 )
            v24 = (unsigned int *)(v21 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
            if ( &pthread_create )
              __dmb();
              do
                v25 = __ldrex(v24);
              while ( __strex(v25 - 1, v24) );
            else
              v25 = (*v24)--;
            if ( v25 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
        operator delete((void *)v16);
      }
      v15[3] = 0;
      v26 = v15[2];
      if ( v26 )
        v27 = (unsigned int *)(v26 + 4);
        if ( &pthread_create )
          __dmb();
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
      if ( *v15 )
        (*(void (__cdecl **)(_DWORD))(*(_DWORD *)*v15 + 4))(*v15);
      operator delete(v15);
    }
    result = std::unique_ptr<CachedScene,std::default_delete<CachedScene>>::~unique_ptr((void **)&v31);
  }
  return result;
}
