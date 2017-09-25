

PackSourceFactory *__fastcall PackSourceFactory::~PackSourceFactory(PackSourceFactory *this)
{
  PackSourceFactory *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED
  char *v4; // r5@8 OVERLAPPED
  char *v5; // r6@8 OVERLAPPED
  char *v6; // r5@15 OVERLAPPED
  char *v7; // r6@15 OVERLAPPED

  v1 = this;
  *(_QWORD *)&v2 = *((_QWORD *)this + 3);
  if ( v2 != v3 )
  {
    do
    {
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 += 4;
    }
    while ( v3 != v2 );
    v2 = (char *)*((_DWORD *)v1 + 6);
  }
  if ( v2 )
    operator delete(v2);
  *(_QWORD *)&v4 = *(_QWORD *)((char *)v1 + 12);
  if ( v4 != v5 )
      if ( *(_DWORD *)v4 )
        (*(void (**)(void))(**(_DWORD **)v4 + 4))();
      *(_DWORD *)v4 = 0;
      v4 += 4;
    while ( v5 != v4 );
    v4 = (char *)*((_DWORD *)v1 + 3);
  if ( v4 )
    operator delete(v4);
  *(_QWORD *)&v6 = *(_QWORD *)v1;
  if ( v6 != v7 )
      if ( *(_DWORD *)v6 )
        (*(void (**)(void))(**(_DWORD **)v6 + 4))();
      *(_DWORD *)v6 = 0;
      v6 += 4;
    while ( v7 != v6 );
    v6 = *(char **)v1;
  if ( v6 )
    operator delete(v6);
  return v1;
}


RakNet *__fastcall PackSourceFactory::removeFromDirectoryPackSource(int a1, const void **a2)
{
  int v2; // r5@1
  const void **v3; // r4@1
  __int64 v4; // r0@1
  int v5; // r0@1
  __int64 i; // r6@4
  char *v7; // r0@5
  RakNet *result; // r0@8
  __int64 v9; // [sp+0h] [bp-A30h]@1
  int v10; // [sp+8h] [bp-A28h]@2
  char v11; // [sp+Ch] [bp-A24h]@3
  int v12; // [sp+40Ch] [bp-624h]@3
  char v13; // [sp+414h] [bp-61Ch]@1
  int v14; // [sp+A14h] [bp-1Ch]@1
  RakNet *v15; // [sp+A18h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  v15 = _stack_chk_guard;
  LODWORD(v4) = *a2;
  HIDWORD(v4) = *((_DWORD *)*a2 - 3);
  v9 = v4;
  v5 = Core::SplitPathT<1024u,64u>::SplitPathT((int)&v13, (const char **)&v9);
  if ( v14 )
  {
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::Path>((unsigned int *)&v10, v5 + 1024, v14 - 1);
  }
  else
    _aeabi_memclr8(&v10, 1028);
    v10 = 1023;
    v12 = 0;
    v11 = 0;
  for ( i = *(_QWORD *)(v2 + 12); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 4 )
    v7 = DirectoryPackSource::getPath(*(DirectoryPackSource **)i);
    if ( !strcmp((const char *)((unsigned int)&v10 | 4), *(const char **)v7) )
      DirectoryPackSource::removePack(*(_DWORD *)i, v3);
  result = (RakNet *)(_stack_chk_guard - v15);
  if ( _stack_chk_guard != v15 )
    _stack_chk_fail(result);
  return result;
}


DirectoryPackSource *__fastcall PackSourceFactory::getDirectoryPackSource(int a1, int *a2, char a3)
{
  int v3; // r8@1
  int v4; // r4@1
  DirectoryPackSource **v5; // r9@1
  char v6; // ST00_1@1
  void *v7; // r0@1
  int v8; // r0@2
  int v9; // r7@3
  int v10; // r0@4
  _DWORD *v11; // r0@5
  char *v12; // r5@5
  size_t v13; // r2@5
  DirectoryPackSource **v14; // r6@6
  int v15; // r0@7
  _DWORD *v16; // r0@8
  size_t v17; // r2@8
  int v18; // r0@10
  _DWORD *v19; // r0@11
  size_t v20; // r2@11
  int v21; // r0@13
  _DWORD *v22; // r0@14
  size_t v23; // r2@14
  int v24; // r0@18
  int v25; // r0@20
  _DWORD *v26; // r0@21
  size_t v27; // r2@21
  int v28; // r0@26
  _DWORD *v29; // r0@27
  size_t v30; // r2@27
  int v31; // r0@30
  _DWORD *v32; // r0@31
  size_t v33; // r2@31
  void *v34; // r0@35
  void *v35; // r0@36
  void *v36; // r0@37
  DirectoryPackSource *v37; // r2@39
  unsigned int *v39; // r2@42
  signed int v40; // r1@44
  unsigned int *v41; // r2@46
  signed int v42; // r1@48
  unsigned int *v43; // r2@50
  signed int v44; // r1@52
  unsigned int *v45; // r2@54
  signed int v46; // r1@56
  unsigned int *v47; // r2@58
  signed int v48; // r1@60
  int v49; // [sp+4h] [bp-44h]@1
  unsigned __int8 v50; // [sp+8h] [bp-40h]@1
  int v51; // [sp+Ch] [bp-3Ch]@1
  unsigned __int8 v52; // [sp+10h] [bp-38h]@1
  int v53; // [sp+14h] [bp-34h]@1
  unsigned __int8 v54; // [sp+18h] [bp-30h]@1
  int v55; // [sp+1Ch] [bp-2Ch]@1
  unsigned __int8 v56; // [sp+20h] [bp-28h]@2
  void *s2; // [sp+24h] [bp-24h]@2

  v3 = a1;
  v5 = (DirectoryPackSource **)(*(_QWORD *)(a1 + 12) >> 32);
  v4 = *(_QWORD *)(a1 + 12);
  v6 = a3;
  sub_21E8AF4(&v49, a2);
  v50 = v6;
  sub_21E8AF4(&v51, &v49);
  v54 = v50;
  sub_21E8AF4(&v55, &v51);
  v52 = v54;
  sub_21E8AF4(&v53, &v55);
  v7 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
  {
    v39 = (unsigned int *)(v55 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
    }
    else
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  v56 = v52;
  sub_21E8AF4((int *)&s2, &v53);
  v8 = ((signed int)v5 - v4) >> 4;
  if ( v8 < 1 )
LABEL_17:
    if ( 1 == ((signed int)v5 - v4) >> 2 )
      v14 = (DirectoryPackSource **)v4;
      v24 = ((signed int)v5 - v4) >> 2;
      if ( v24 == 2 )
      {
        v14 = (DirectoryPackSource **)v4;
      }
      else
        if ( v24 != 3 )
        {
LABEL_33:
          v12 = (char *)s2;
          v14 = v5;
          goto LABEL_34;
        }
        v25 = DirectoryPackSource::getPackType(*(DirectoryPackSource **)v4);
        if ( v25 == v56 )
          v26 = *(_DWORD **)DirectoryPackSource::getPath(*(DirectoryPackSource **)v4);
          v27 = *(v26 - 3);
          if ( v27 == *((_DWORD *)s2 - 3) )
          {
            v14 = (DirectoryPackSource **)v4;
            if ( !memcmp(v26, s2, v27) )
              goto LABEL_34;
          }
        v14 = (DirectoryPackSource **)(v4 + 4);
      v28 = DirectoryPackSource::getPackType(*v14);
      if ( v28 == v56 )
        v29 = *(_DWORD **)DirectoryPackSource::getPath(*v14);
        v12 = (char *)s2;
        v30 = *(v29 - 3);
        if ( v30 == *((_DWORD *)s2 - 3) && !memcmp(v29, s2, v30) )
      ++v14;
    v31 = DirectoryPackSource::getPackType(*v14);
    if ( v31 == v56 )
      v32 = *(_DWORD **)DirectoryPackSource::getPath(*v14);
      v12 = (char *)s2;
      v33 = *(v32 - 3);
      if ( v33 == *((_DWORD *)s2 - 3) && !memcmp(v32, s2, v33) )
        goto LABEL_34;
    goto LABEL_33;
  v9 = v8 + 1;
  while ( 1 )
    v10 = DirectoryPackSource::getPackType(*(DirectoryPackSource **)v4);
    if ( v10 == v56 )
      v11 = *(_DWORD **)DirectoryPackSource::getPath(*(DirectoryPackSource **)v4);
      v13 = *(v11 - 3);
      if ( v13 == *((_DWORD *)s2 - 3) )
        if ( !memcmp(v11, s2, v13) )
          break;
    v14 = (DirectoryPackSource **)(v4 + 4);
    v15 = DirectoryPackSource::getPackType(*(DirectoryPackSource **)(v4 + 4));
    if ( v15 == v56 )
      v16 = *(_DWORD **)DirectoryPackSource::getPath(*v14);
      v17 = *(v16 - 3);
      if ( v17 == *((_DWORD *)s2 - 3) && !memcmp(v16, s2, v17) )
        break;
    v14 = (DirectoryPackSource **)(v4 + 8);
    v18 = DirectoryPackSource::getPackType(*(DirectoryPackSource **)(v4 + 8));
    if ( v18 == v56 )
      v19 = *(_DWORD **)DirectoryPackSource::getPath(*v14);
      v20 = *(v19 - 3);
      if ( v20 == *((_DWORD *)s2 - 3) && !memcmp(v19, s2, v20) )
    v14 = (DirectoryPackSource **)(v4 + 12);
    v21 = DirectoryPackSource::getPackType(*(DirectoryPackSource **)(v4 + 12));
    if ( v21 == v56 )
      v22 = *(_DWORD **)DirectoryPackSource::getPath(*v14);
      v23 = *(v22 - 3);
      if ( v23 == *((_DWORD *)s2 - 3) && !memcmp(v22, s2, v23) )
    --v9;
    v4 += 16;
    if ( v9 <= 1 )
      goto LABEL_17;
LABEL_34:
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v12 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v12 - 12);
  v34 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v53 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  v35 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v51 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  v36 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v49 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  if ( v14 == *(DirectoryPackSource ***)(v3 + 16) )
    v37 = 0;
  else
    v37 = *v14;
  return v37;
}


ContentCatalogPackSource *__fastcall PackSourceFactory::getContentCatalogPackSource(unsigned __int64 *a1, int a2)
{
  unsigned __int64 *v2; // r9@1
  int v3; // r5@1
  int v4; // r6@1
  ContentCatalogPackSource **v5; // r8@1
  int v6; // r0@1
  int v7; // r4@2
  ContentCatalogPackSource **v8; // r7@3
  int v9; // r0@9
  ContentCatalogPackSource *result; // r0@22

  v2 = a1;
  v3 = a2;
  v5 = (ContentCatalogPackSource **)(*a1 >> 32);
  v4 = *a1;
  v6 = ((signed int)v5 - v4) >> 4;
  if ( v6 < 1 )
  {
LABEL_8:
    if ( 1 == ((signed int)v5 - v4) >> 2 )
    {
      v8 = (ContentCatalogPackSource **)v4;
    }
    else
      v9 = ((signed int)v5 - v4) >> 2;
      if ( v9 == 2 )
      {
        v8 = (ContentCatalogPackSource **)v4;
      }
      else
        if ( v9 != 3 )
        {
          v8 = v5;
          goto LABEL_21;
        }
        if ( ContentCatalogPackSource::getPackType(*(ContentCatalogPackSource **)v4) == v3 )
        v8 = (ContentCatalogPackSource **)(v4 + 4);
      if ( ContentCatalogPackSource::getPackType(*v8) == v3 )
        goto LABEL_21;
      ++v8;
    if ( ContentCatalogPackSource::getPackType(*v8) != v3 )
      v8 = v5;
  }
  else
    v7 = v6 + 1;
    while ( 1 )
      if ( ContentCatalogPackSource::getPackType(*(ContentCatalogPackSource **)v4) == v3 )
        break;
      v8 = (ContentCatalogPackSource **)(v4 + 4);
      if ( ContentCatalogPackSource::getPackType(*(ContentCatalogPackSource **)(v4 + 4)) == v3 )
      v8 = (ContentCatalogPackSource **)(v4 + 8);
      if ( ContentCatalogPackSource::getPackType(*(ContentCatalogPackSource **)(v4 + 8)) == v3 )
      v8 = (ContentCatalogPackSource **)(v4 + 12);
      if ( ContentCatalogPackSource::getPackType(*(ContentCatalogPackSource **)(v4 + 12)) == v3 )
      --v7;
      v4 += 16;
      if ( v7 <= 1 )
        goto LABEL_8;
LABEL_21:
  if ( v8 == *((ContentCatalogPackSource ***)v2 + 1) )
    result = 0;
    result = *v8;
  return result;
}


InPackagePackSource *__fastcall PackSourceFactory::createInPackagePackSource(int a1, int a2)
{
  char v2; // r6@1
  int v3; // r4@1
  InPackagePackSource *result; // r0@1
  void *v5; // r5@2
  __int64 v6; // r0@2
  int v7; // r0@6
  Option *v8; // r0@7
  int v9; // r0@7
  void *v10; // [sp+4h] [bp-14h]@2

  v2 = a2;
  v3 = a1;
  result = PackSourceFactory::getInPackagePackSource(a1, a2);
  if ( !result )
  {
    v5 = operator new(0x14u);
    InPackagePackSource::InPackagePackSource((int)v5, v2);
    v10 = v5;
    v6 = *(_QWORD *)(v3 + 28);
    if ( (_DWORD)v6 == HIDWORD(v6) )
    {
      std::vector<std::unique_ptr<InPackagePackSource,std::default_delete<InPackagePackSource>>,std::allocator<std::unique_ptr<InPackagePackSource,std::default_delete<InPackagePackSource>>>>::_M_emplace_back_aux<std::unique_ptr<InPackagePackSource,std::default_delete<InPackagePackSource>>>(
        (_QWORD *)(v3 + 24),
        (int *)&v10);
      if ( v10 )
        (*(void (**)(void))(*(_DWORD *)v10 + 4))();
    }
    else
      v10 = 0;
      *(_DWORD *)v6 = v5;
      *(_DWORD *)(v3 + 28) = v6 + 4;
    v10 = 0;
    v7 = *(_DWORD *)(v3 + 36);
    if ( v7 )
      v8 = (Option *)Options::get(v7, 158);
      v9 = Option::getBool(v8);
      InPackagePackSource::setPrefersZips(*(InPackagePackSource **)(*(_DWORD *)(v3 + 28) - 4), v9);
    result = *(InPackagePackSource **)(*(_DWORD *)(v3 + 28) - 4);
  }
  return result;
}


int __fastcall PackSourceFactory::getDirectoryPackSourceContaining(PackSourceFactory *this, const PackIdVersion *a2)
{
  int v2; // r5@1
  int v3; // r9@1
  const PackIdVersion *v4; // r8@1
  int v5; // r4@1
  int v6; // r7@2
  void (__fastcall *v7)(int, _DWORD **); // r11@2
  _DWORD *v8; // r0@2
  _DWORD *v10; // [sp+0h] [bp-38h]@2
  int (__fastcall *v11)(void **, _QWORD **, int); // [sp+8h] [bp-30h]@2
  _BYTE *(__fastcall *v12)(int **, Pack *); // [sp+Ch] [bp-2Ch]@2
  char v13; // [sp+13h] [bp-25h]@2

  v3 = *(_QWORD *)((char *)this + 12) >> 32;
  v2 = *(_QWORD *)((char *)this + 12);
  v4 = a2;
  v5 = 0;
  if ( v2 != v3 )
  {
    while ( 1 )
    {
      v13 = 0;
      v6 = *(_DWORD *)v2;
      v7 = *(void (__fastcall **)(int, _DWORD **))(**(_DWORD **)v2 + 8);
      v8 = operator new(8u);
      v10 = v8;
      *v8 = v4;
      v8[1] = &v13;
      v12 = sub_15845B6;
      v11 = sub_15845DA;
      v7(v6, &v10);
      if ( v11 )
        v11((void **)&v10, (_QWORD **)&v10, 3);
      if ( v13 )
        break;
      v2 += 4;
      if ( v3 == v2 )
        return 0;
    }
    v5 = *(_DWORD *)v2;
  }
  return v5;
}


ContentCatalogPackSource *__fastcall PackSourceFactory::createContentCatalogPackSource(unsigned __int64 *a1, int a2, int a3, int a4, int a5)
{
  int v5; // r7@1
  int v6; // r8@1
  unsigned __int64 *v7; // r5@1
  ContentCatalogPackSource *v8; // r4@1
  void (__fastcall *v9)(char *, int, signed int); // r3@2
  __int64 v10; // r0@6
  int v12; // [sp+8h] [bp-30h]@6
  char v13; // [sp+Ch] [bp-2Ch]@3
  void (*v14)(void); // [sp+14h] [bp-24h]@2
  int v15; // [sp+18h] [bp-20h]@3
  char v16; // [sp+1Fh] [bp-19h]@1

  v5 = a2;
  v6 = a3;
  v7 = a1;
  v16 = a4;
  v8 = PackSourceFactory::getContentCatalogPackSource(a1, a4);
  if ( v8 )
  {
    v14 = 0;
    v9 = *(void (__fastcall **)(char *, int, signed int))(a5 + 8);
    if ( v9 )
    {
      v9(&v13, a5, 2);
      v15 = *(_DWORD *)(a5 + 12);
      v14 = *(void (**)(void))(a5 + 8);
    }
    ContentCatalogPackSource::setAsyncCallback((int)v8, (int)&v13);
    if ( v14 )
      v14();
  }
  else
    std::make_unique<ContentCatalogPackSource,ContentCatalogService &,EntitlementManager &,PackType &,std::function<void ()(bool)> &>(
      &v12,
      v5,
      v6,
      &v16,
      a5);
    v10 = *(unsigned __int64 *)((char *)v7 + 4);
    if ( (_DWORD)v10 == HIDWORD(v10) )
      std::vector<std::unique_ptr<ContentCatalogPackSource,std::default_delete<ContentCatalogPackSource>>,std::allocator<std::unique_ptr<ContentCatalogPackSource,std::default_delete<ContentCatalogPackSource>>>>::_M_emplace_back_aux<std::unique_ptr<ContentCatalogPackSource,std::default_delete<ContentCatalogPackSource>>>(
        v7,
        &v12);
      if ( v12 )
        (*(void (**)(void))(*(_DWORD *)v12 + 4))();
    else
      HIDWORD(v10) = v12;
      v12 = 0;
      *(_DWORD *)v10 = HIDWORD(v10);
      *((_DWORD *)v7 + 1) = v10 + 4;
    v12 = 0;
    v8 = *(ContentCatalogPackSource **)(*((_DWORD *)v7 + 1) - 4);
  return v8;
}


InPackagePackSource *__fastcall PackSourceFactory::getInPackagePackSource(int a1, int a2)
{
  int v2; // r9@1
  int v3; // r5@1
  int v4; // r6@1
  InPackagePackSource **v5; // r8@1
  int v6; // r0@1
  int v7; // r4@2
  InPackagePackSource **v8; // r7@3
  int v9; // r0@9
  InPackagePackSource *result; // r0@22

  v2 = a1;
  v3 = a2;
  v5 = (InPackagePackSource **)(*(_QWORD *)(a1 + 24) >> 32);
  v4 = *(_QWORD *)(a1 + 24);
  v6 = ((signed int)v5 - v4) >> 4;
  if ( v6 < 1 )
  {
LABEL_8:
    if ( 1 == ((signed int)v5 - v4) >> 2 )
    {
      v8 = (InPackagePackSource **)v4;
    }
    else
      v9 = ((signed int)v5 - v4) >> 2;
      if ( v9 == 2 )
      {
        v8 = (InPackagePackSource **)v4;
      }
      else
        if ( v9 != 3 )
        {
          v8 = v5;
          goto LABEL_21;
        }
        if ( InPackagePackSource::getPackType(*(InPackagePackSource **)v4) == v3 )
        v8 = (InPackagePackSource **)(v4 + 4);
      if ( InPackagePackSource::getPackType(*v8) == v3 )
        goto LABEL_21;
      ++v8;
    if ( InPackagePackSource::getPackType(*v8) != v3 )
      v8 = v5;
  }
  else
    v7 = v6 + 1;
    while ( 1 )
      if ( InPackagePackSource::getPackType(*(InPackagePackSource **)v4) == v3 )
        break;
      v8 = (InPackagePackSource **)(v4 + 4);
      if ( InPackagePackSource::getPackType(*(InPackagePackSource **)(v4 + 4)) == v3 )
      v8 = (InPackagePackSource **)(v4 + 8);
      if ( InPackagePackSource::getPackType(*(InPackagePackSource **)(v4 + 8)) == v3 )
      v8 = (InPackagePackSource **)(v4 + 12);
      if ( InPackagePackSource::getPackType(*(InPackagePackSource **)(v4 + 12)) == v3 )
      --v7;
      v4 += 16;
      if ( v7 <= 1 )
        goto LABEL_8;
LABEL_21:
  if ( v8 == *(InPackagePackSource ***)(v2 + 28) )
    result = 0;
    result = *v8;
  return result;
}


int __fastcall PackSourceFactory::PackSourceFactory(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r5@2
  _DWORD *v5; // r0@2
  __int64 v6; // r1@2
  _DWORD *v8; // [sp+0h] [bp-28h]@2
  __int64 v9; // [sp+8h] [bp-20h]@2

  v2 = a2;
  v3 = a1;
  _aeabi_memclr4(a1, 36);
  *(_DWORD *)(v3 + 36) = v2;
  if ( v2 )
  {
    v4 = Options::get(v2, 158);
    v5 = operator new(4u);
    LODWORD(v6) = sub_158431C;
    *v5 = v3;
    HIDWORD(v6) = sub_15842F4;
    v8 = v5;
    v9 = v6;
    Option::registerObserver(v4, v3, (int)&v8);
    if ( (_DWORD)v9 )
      ((void (*)(void))v9)();
  }
  return v3;
}


DirectoryPackSource *__fastcall PackSourceFactory::createDirectoryPackSource(int a1, int *a2, char a3, int a4, int a5)
{
  int v5; // r8@1
  char v6; // r6@1
  int *v7; // r5@1
  int v8; // r4@1
  DirectoryPackSource *result; // r0@1
  void *v10; // r7@2
  __int64 v11; // r0@2
  void *v12; // [sp+8h] [bp-20h]@2

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  result = PackSourceFactory::getDirectoryPackSource(a1, a2, a3);
  if ( !result )
  {
    v10 = operator new(0x20u);
    DirectoryPackSource::DirectoryPackSource((int)v10, v7, v6, v5, a5, 0);
    v12 = v10;
    v11 = *(_QWORD *)(v8 + 16);
    if ( (_DWORD)v11 == HIDWORD(v11) )
    {
      std::vector<std::unique_ptr<DirectoryPackSource,std::default_delete<DirectoryPackSource>>,std::allocator<std::unique_ptr<DirectoryPackSource,std::default_delete<DirectoryPackSource>>>>::_M_emplace_back_aux<std::unique_ptr<DirectoryPackSource,std::default_delete<DirectoryPackSource>>>(
        (_QWORD *)(v8 + 12),
        (int *)&v12);
      if ( v12 )
        (*(void (**)(void))(*(_DWORD *)v12 + 4))();
    }
    else
      v12 = 0;
      *(_DWORD *)v11 = v10;
      *(_DWORD *)(v8 + 16) = v11 + 4;
    v12 = 0;
    result = *(DirectoryPackSource **)(*(_DWORD *)(v8 + 16) - 4);
  }
  return result;
}
