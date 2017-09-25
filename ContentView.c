

char *__fastcall ContentView::addViewSource(ContentView *this, const ContentView *a2)
{
  ContentView *v2; // r4@1
  const ContentView *v3; // r8@1
  __int64 v4; // r0@1
  char *result; // r0@2
  void *v6; // r5@3
  unsigned int v7; // r2@3
  unsigned int v8; // r1@5
  unsigned int v9; // r6@5
  char *v10; // r7@11 OVERLAPPED
  char *v11; // r8@13
  int v12; // r8@15 OVERLAPPED

  v2 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 10);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v6 = (void *)*((_DWORD *)v2 + 19);
    v7 = ((signed int)v4 - (signed int)v6) >> 2;
    if ( !v7 )
      v7 = 1;
    HIDWORD(v4) = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    v9 = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    if ( 0 != HIDWORD(v4) >> 30 )
      v9 = 0x3FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x40000000 )
        sub_21E57F4();
      v10 = (char *)operator new(4 * v9);
      LODWORD(v4) = *(_QWORD *)((char *)v2 + 76) >> 32;
      v6 = (void *)*(_QWORD *)((char *)v2 + 76);
    }
    else
      v10 = 0;
    *(_DWORD *)&v10[v4 - (_DWORD)v6] = v3;
    v11 = &v10[v4 - (_DWORD)v6];
    if ( 0 != ((signed int)v4 - (signed int)v6) >> 2 )
      _aeabi_memmove4(v10, v6);
    v12 = (int)(v11 + 4);
    if ( v6 )
      operator delete(v6);
    result = &v10[4 * v9];
    *(_QWORD *)((char *)v2 + 76) = *(_QWORD *)&v10;
    *((_DWORD *)v2 + 21) = result;
  }
  else
    *(_DWORD *)v4 = v3;
    result = (char *)(*((_DWORD *)v2 + 20) + 4);
    *((_DWORD *)v2 + 20) = result;
  return result;
}


ContentView *__fastcall ContentView::~ContentView(ContentView *this)
{
  ContentView *v1; // r8@1
  void *v2; // r0@1
  void *v3; // r5@3
  void *v4; // r7@3
  void *v5; // r6@4
  void (*v6)(void); // r3@5
  void *v7; // r0@7
  void (*v8)(void); // r3@16
  void (*v9)(void); // r3@18
  void (*v10)(void); // r3@20
  void *v11; // r0@22

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 19);
  if ( v2 )
    operator delete(v2);
  v4 = (void *)(*((_QWORD *)v1 + 8) >> 32);
  v3 = (void *)*((_QWORD *)v1 + 8);
  if ( v3 != v4 )
  {
    do
    {
      v5 = *(void **)v3;
      if ( *(_DWORD *)v3 )
      {
        v6 = (void (*)(void))*((_DWORD *)v5 + 6);
        if ( v6 )
          v6();
        v7 = (void *)*((_DWORD *)v5 + 1);
        if ( v7 )
          operator delete(v7);
        if ( *(_DWORD *)v5 )
          (*(void (**)(void))(**(_DWORD **)v5 + 4))();
        operator delete(v5);
      }
      *(_DWORD *)v3 = 0;
      v3 = (char *)v3 + 4;
    }
    while ( v4 != v3 );
    v3 = (void *)*((_DWORD *)v1 + 16);
  }
  if ( v3 )
    operator delete(v3);
  v8 = (void (*)(void))*((_DWORD *)v1 + 14);
  if ( v8 )
    v8();
  v9 = (void (*)(void))*((_DWORD *)v1 + 10);
  if ( v9 )
    v9();
  v10 = (void (*)(void))*((_DWORD *)v1 + 6);
  if ( v10 )
    v10();
  v11 = (void *)*((_DWORD *)v1 + 1);
  if ( v11 )
    operator delete(v11);
  return v1;
}


int __fastcall ContentView::getItem(ContentView *this, unsigned int a2)
{
  __int64 v2; // kr00_8@1
  int result; // r0@2

  v2 = *(_QWORD *)((char *)this + 4);
  if ( (HIDWORD(v2) - (signed int)v2) >> 2 <= a2 )
    result = 0;
  else
    result = *(_DWORD *)(v2 + 4 * a2);
  return result;
}


  while ( v45 < ContentView::getNumberOfItems(*(ContentView **)(v5 + 464)) )
{
    v46 = ContentView::getItem(*(ContentView **)(v5 + 464), v45);
    v47 = (_QWORD *)(v46 + 48);
    v48 = (_QWORD *)(v46 + 32);
    if ( *v44 )
    {
      v49 = (int *)v6;
      if ( *v44 & *v47 )
        goto LABEL_39;
    }
    else
      if ( *v48 == *((_QWORD *)v6 + 1) )
    if ( *v43 )
      v49 = (int *)((char *)v6 + 24);
      if ( *v43 & *v47 )
      if ( *v48 == *((_QWORD *)v6 + 4) )
    if ( *v102 )
      v49 = (int *)((char *)v6 + 48);
      if ( *v102 & *v47 )
      if ( *v48 == *((_QWORD *)v6 + 7) )
    if ( *v101 )
      v49 = (int *)((char *)v6 + 72);
      if ( *v101 & *v47 )
      if ( *v48 == *((_QWORD *)v6 + 10) )
    if ( *v99 )
      v49 = (int *)((char *)v6 + 96);
      if ( *v99 & *v47 )
      if ( *v48 == *((_QWORD *)v6 + 13) )
    if ( *v98 )
      v49 = (int *)((char *)v6 + 120);
      if ( *v98 & *v47 )
      if ( *v48 == *((_QWORD *)v6 + 16) )
    if ( *v97 )
      v49 = (int *)((char *)v6 + 144);
      if ( *v47 & *v97 )
LABEL_42:
      ++v45;
      if ( *v48 != *((_QWORD *)v6 + 19) )
        goto LABEL_42;
LABEL_39:
      if ( v139 == v140 )
      {
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
          (unsigned __int64 *)&v138,
          v49);
      }
      v139 = sub_21E8AF4(v139, v49) + 1;
  }
  v3 = HIDWORD(v100);
  v4 = (const char **)v100;
  v50 = (int *)(*(_DWORD *)v6 - 12);
  if ( v50 != &dword_28898C0 )
  {
    v83 = (unsigned int *)(*(_DWORD *)v6 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j__ZdlPv_9(v50);
  v51 = *((_DWORD *)v6 + 6);
  v52 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v51 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
  v53 = *((_DWORD *)v6 + 12);
  v54 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v53 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  v55 = *((_DWORD *)v6 + 18);
  v56 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v55 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j__ZdlPv_9(v56);
  v57 = *((_DWORD *)v6 + 24);
  v58 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v91 = (unsigned int *)(v57 - 4);
        v92 = __ldrex(v91);
      while ( __strex(v92 - 1, v91) );
      v92 = (*v91)--;
    if ( v92 <= 0 )
      j_j_j_j__ZdlPv_9(v58);
  v59 = *((_DWORD *)v6 + 30);
  v60 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v93 = (unsigned int *)(v59 - 4);
        v94 = __ldrex(v93);
      while ( __strex(v94 - 1, v93) );
      v94 = (*v93)--;
    if ( v94 <= 0 )
      j_j_j_j__ZdlPv_9(v60);
  v61 = *((_DWORD *)v6 + 36);
  v62 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v95 = (unsigned int *)(v61 - 4);
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 <= 0 )
      j_j_j_j__ZdlPv_9(v62);
  operator delete(v6);
LABEL_51:
  v63 = *v4;
  v65 = v139;
  v64 = (int *)v138;
  UIPropertyBag::set(v3, *((_DWORD *)v63 - 3), v63, v138, (unsigned int)v139);
  if ( v64 != v65 )
    do
      v68 = (int *)(*v64 - 12);
      if ( v68 != &dword_28898C0 )
        v66 = (unsigned int *)(*v64 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v67 = __ldrex(v66);
          while ( __strex(v67 - 1, v66) );
        }
        else
          v67 = (*v66)--;
        if ( v67 <= 0 )
          j_j_j_j__ZdlPv_9(v68);
      ++v64;
    while ( v64 != v65 );
    v64 = (int *)v138;
  if ( v64 )
    operator delete(v64);
}


int __fastcall ContentView::getItem(ContentView *this, unsigned int a2)
{
  __int64 v2; // kr00_8@1
  int result; // r0@2

  v2 = *(_QWORD *)((char *)this + 4);
  if ( (HIDWORD(v2) - (signed int)v2) >> 2 <= a2 )
    result = 0;
  else
    result = *(_DWORD *)(v2 + 4 * a2);
  return result;
}


        if ( ContentView::getNumberOfItems((ContentView *)v16[1]) && sub_21E7D6C((const void **)v16, "search") )
{
          sub_21E8AF4((int *)&v32, v16);
          sub_21E7408((const void **)&v32, "_panel", 6u);
          v21 = (int)v34;
          if ( v34 == v35 )
          {
            std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
              (unsigned __int64 *)&v33,
              &v32);
            v22 = v32;
          }
          else
            *v34 = v32;
            v22 = (char *)&unk_28898CC;
            v32 = (char *)&unk_28898CC;
            v34 = (char **)(v21 + 4);
          v23 = v22 - 12;
          if ( (int *)(v22 - 12) != &dword_28898C0 )
            v19 = (unsigned int *)(v22 - 4);
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
              j_j_j_j__ZdlPv_9(v23);
        }
        v16 += 3;
      }
      while ( v16 != v11 );
      v17 = v34;
      v18 = v33;
    }
    UIPropertyBag::set(v31, *((_DWORD *)*v4 - 3), *v4, (unsigned int)v18, (unsigned int)v17);
    if ( v18 != v17 )
    {
      do
      {
        v26 = (int *)(*v18 - 12);
        if ( v26 != &dword_28898C0 )
        {
          v24 = (unsigned int *)(*v18 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
            v25 = (*v24)--;
          if ( v25 <= 0 )
            j_j_j_j__ZdlPv_9(v26);
        ++v18;
      while ( v18 != v17 );
      v17 = v33;
    if ( v17 )
      operator delete(v17);
  }
  else
  {
    UIPropertyBag::set(v31, *((_DWORD *)*v4 - 3), *v4, 0, 0);
  if ( v8 != v11 )
    v27 = v8;
    do
      v30 = (int *)(*v27 - 12);
      if ( v30 != &dword_28898C0 )
        v28 = (unsigned int *)(*v27 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
        else
          v29 = (*v28)--;
        if ( v29 <= 0 )
          j_j_j_j__ZdlPv_9(v30);
      v27 += 3;
    while ( v27 != v11 );
  if ( v8 )
    operator delete(v8);
}


int *__fastcall ContentView::setSortFunc(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r5@1
  void (__fastcall *v6)(__int64 *); // r3@1
  void (__fastcall *v7)(int *, int, signed int); // r3@2
  void (*v8)(void); // r7@4
  __int64 v9; // r6@6
  int *result; // r0@8
  int v11; // [sp+0h] [bp-38h]@7
  int (*v12)(void); // [sp+8h] [bp-30h]@6
  int v13; // [sp+Ch] [bp-2Ch]@7
  __int64 v14; // [sp+10h] [bp-28h]@2
  void (*v15)(void); // [sp+18h] [bp-20h]@1
  int v16; // [sp+1Ch] [bp-1Ch]@2

  v3 = a1;
  v4 = 0;
  v5 = a2;
  v15 = 0;
  v6 = *(void (__fastcall **)(__int64 *))(a2 + 8);
  if ( v6 )
  {
    v6(&v14);
    v4 = *(_DWORD *)(v5 + 12);
    v16 = *(_DWORD *)(v5 + 12);
    v7 = *(void (__fastcall **)(int *, int, signed int))(v5 + 8);
    v15 = *(void (**)(void))(v5 + 8);
    *(_QWORD *)&a2 = v14;
  }
  else
    v7 = 0;
  v14 = *(_QWORD *)(v3 + 32);
  *(_QWORD *)(v3 + 32) = *(_QWORD *)&a2;
  v15 = *(void (**)(void))(v3 + 40);
  v8 = v15;
  *(_DWORD *)(v3 + 40) = v7;
  v16 = *(_DWORD *)(v3 + 44);
  *(_DWORD *)(v3 + 44) = v4;
  if ( v8 )
    v8();
    v7 = *(void (__fastcall **)(int *, int, signed int))(v3 + 40);
  v9 = *(_QWORD *)(v3 + 4);
  v12 = 0;
  if ( v7 )
    v7(&v11, v3 + 32, 2);
    v13 = *(_DWORD *)(v3 + 44);
    v12 = *(int (**)(void))(v3 + 40);
  result = std::sort<__gnu_cxx::__normal_iterator<ContentItem **,std::vector<ContentItem *,std::allocator<ContentItem *>>>,std::function<bool ()(ContentItem *,ContentItem *)>>(
             (int *)v9,
             (int *)HIDWORD(v9),
             (int)&v11);
  if ( v12 )
    result = (int *)v12();
  return result;
}


void __fastcall ContentView::createItemCollection(int a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // r7@1
  int v4; // r8@1
  int v5; // r0@1
  int v6; // r9@1
  __int64 v7; // r0@1
  int v8; // r10@1
  void *v9; // r0@1
  void *v10; // r5@1
  __int64 *v11; // r4@1
  __int64 v12; // r2@1
  int v13; // r1@2
  void (*v14)(void); // r3@4
  int v15; // r1@4
  __int64 v16; // r0@6
  _DWORD *v17; // r4@9
  void (*v18)(void); // r3@10
  void *v19; // r0@12
  void *v20; // [sp+4h] [bp-34h]@1
  __int64 v21; // [sp+8h] [bp-30h]@2
  void (*v22)(void); // [sp+10h] [bp-28h]@1
  int v23; // [sp+14h] [bp-24h]@2

  v3 = a2;
  v4 = a1;
  v5 = *a2;
  v6 = a3;
  *(_DWORD *)(v5 + 32) = 6;
  *(_DWORD *)(v5 + 36) = 0;
  LODWORD(v7) = ContentManager::generateContentId(*(ContentManager **)v4);
  v8 = *v3;
  *(_QWORD *)(*v3 + 8) = v7;
  v9 = operator new(0x20u);
  v10 = v9;
  *((_DWORD *)v9 + 5) = 0;
  *((_DWORD *)v9 + 6) = 0;
  *((_DWORD *)v9 + 7) = 0;
  *((_DWORD *)v9 + 2) = 0;
  *((_DWORD *)v9 + 3) = 0;
  *(_DWORD *)v9 = 0;
  *((_DWORD *)v9 + 1) = 0;
  *((_DWORD *)v9 + 4) = 0;
  v11 = (__int64 *)((char *)v9 + 16);
  v20 = v9;
  *v3 = 0;
  *(_DWORD *)v9 = v8;
  HIDWORD(v12) = *(_DWORD *)(v6 + 8);
  v22 = 0;
  if ( HIDWORD(v12) )
  {
    ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))HIDWORD(v12))(&v21, v6, 2);
    v9 = *(void **)(v6 + 12);
    v23 = *(_DWORD *)(v6 + 12);
    v13 = *(_DWORD *)(v6 + 8);
    v22 = *(void (**)(void))(v6 + 8);
    v12 = v21;
  }
  else
    v13 = 0;
  v21 = *v11;
  *v11 = v12;
  v14 = (void (*)(void))*((_DWORD *)v10 + 6);
  *((_DWORD *)v10 + 6) = v13;
  v15 = *((_DWORD *)v10 + 7);
  v22 = v14;
  v23 = v15;
  *((_DWORD *)v10 + 7) = v9;
  if ( v14 )
    v14();
  v16 = *(_QWORD *)(v4 + 68);
  if ( (_DWORD)v16 == HIDWORD(v16) )
    std::vector<std::unique_ptr<ContentView::ItemCollection,std::default_delete<ContentView::ItemCollection>>,std::allocator<std::unique_ptr<ContentView::ItemCollection,std::default_delete<ContentView::ItemCollection>>>>::_M_emplace_back_aux<std::unique_ptr<ContentView::ItemCollection,std::default_delete<ContentView::ItemCollection>>>(
      (unsigned __int64 *)(v4 + 64),
      (int *)&v20);
    HIDWORD(v16) = v20;
    v20 = 0;
    *(_DWORD *)v16 = HIDWORD(v16);
    *(_DWORD *)(v4 + 68) = v16 + 4;
  ContentView::reload((ContentView *)v4);
  v17 = v20;
  if ( v20 )
    v18 = (void (*)(void))*((_DWORD *)v20 + 6);
    if ( v18 )
      v18();
    v19 = (void *)v17[1];
    if ( v19 )
      operator delete(v19);
    if ( *v17 )
      (*(void (**)(void))(*(_DWORD *)*v17 + 4))();
    operator delete(v17);
}


  if ( ContentView::getNumberOfItems(**a1) )
{
    while ( 1 )
    {
      v3 = ContentView::getItem(*v1, v2);
      if ( *(_BYTE *)(v3 + 40) & 0x40 )
      {
        if ( PackReport::hasWarnings((PackReport *)(v3 + 80)) )
          break;
      }
      if ( ++v2 >= ContentView::getNumberOfItems(*v1) )
        goto LABEL_5;
    }
    result = 1;
  }
  else
  {
LABEL_5:
    result = 0;
  return result;
}


signed int __fastcall ContentView::getNumberOfItems(ContentView *this)
{
  return (signed int)((*(_QWORD *)((char *)this + 4) >> 32) - *(_QWORD *)((char *)this + 4)) >> 2;
}


__int64 __fastcall ContentView::getTotalSize(ContentView *this)
{
  int v1; // r0@1
  __int64 v2; // kr00_8@1
  __int64 result; // r0@2
  unsigned int v4; // r3@3
  unsigned int v5; // r12@3
  int v6; // r2@4

  v2 = *(_QWORD *)((char *)this + 4);
  v1 = *(_QWORD *)((char *)this + 4) >> 32;
  if ( v1 == (_DWORD)v2 )
  {
    result = 0LL;
  }
  else
    v4 = 0;
    v5 = (v1 - (signed int)v2) >> 2;
    do
    {
      v6 = *(_DWORD *)(v2 + 4 * v4++);
      result += *(_QWORD *)(v6 + 24);
    }
    while ( v4 < v5 );
  return result;
}


int __fastcall ContentView::ContentView(int result, int a2)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 68) = 0;
  *(_DWORD *)(result + 72) = 0;
  *(_DWORD *)(result + 76) = 0;
  *(_DWORD *)(result + 80) = 0;
  *(_DWORD *)(result + 84) = 0;
  return result;
}


int __fastcall ContentView::countIf(int a1, int a2)
{
  int *v2; // r5@1
  int *v3; // r8@1
  int v4; // r4@1
  unsigned int v5; // r7@2
  unsigned int v6; // r6@2
  int v7; // t1@4
  int v8; // r2@4
  unsigned __int64 v9; // r0@4

  v3 = (int *)(*(_QWORD *)(a1 + 4) >> 32);
  v2 = (int *)*(_QWORD *)(a1 + 4);
  v4 = a2;
  if ( v2 == v3 )
  {
    LODWORD(v9) = 0;
  }
  else
    v5 = 0;
    v6 = 0;
    do
    {
      if ( !*(_DWORD *)(v4 + 8) )
        sub_21E5F48();
      v7 = *v2;
      ++v2;
      v8 = (*(int (__fastcall **)(int, int))(v4 + 12))(v4, v7);
      v9 = __PAIR__(v6, v5) + 1;
      if ( !v8 )
        v9 = __PAIR__(v6, v5);
      v6 = HIDWORD(v9);
      v5 = v9;
    }
    while ( v3 != v2 );
  return v9;
}


  if ( ContentView::getItem(*(ContentView **)(v3 + 520), a2 + 1) )
{
    v5 = *(ContentView **)(v3 + 520);
    v6 = *(_QWORD *)(v3 + 536);
    v7 = *(_QWORD *)(ContentView::getItem(v5, v2) + 8);
    HIDWORD(v7) ^= HIDWORD(v6);
    if ( v7 == (unsigned int)v6 )
      v4 = 1;
  }
  return v4;
}


  if ( ContentView::getNumberOfItems(**a1) )
{
    while ( 1 )
    {
      v3 = ContentView::getItem(*v1, v2);
      if ( *(_BYTE *)(v3 + 40) & 0x40 )
      {
        if ( PackReport::hasErrors((PackReport *)(v3 + 80)) )
          break;
      }
      if ( ++v2 >= ContentView::getNumberOfItems(*v1) )
        goto LABEL_5;
    }
    result = 1;
  }
  else
  {
LABEL_5:
    result = 0;
  return result;
}


  if ( ContentView::getItem(*(ContentView **)(v3 + 520), a2 - 1) )
{
    v5 = *(ContentView **)(v3 + 520);
    v6 = *(_QWORD *)(v3 + 536);
    v7 = *(_QWORD *)(ContentView::getItem(v5, v2) + 8);
    HIDWORD(v7) ^= HIDWORD(v6);
    if ( v7 == (unsigned int)v6 )
      v4 = 1;
  }
  return v4;
}


int __fastcall ContentView::reload(ContentView *this)
{
  ContentView *v1; // r9@1
  char *v2; // r1@1
  __int64 i; // r0@1
  int v4; // t1@2
  int v5; // r8@3
  int v6; // r10@3
  _DWORD *v7; // r1@4
  unsigned __int64 v8; // kr50_8@4
  int v9; // r4@7
  __int64 v10; // r0@8
  char *v11; // r6@10
  _BYTE *v12; // r7@10
  signed int v13; // r1@10
  unsigned int v14; // r2@10
  unsigned int v15; // r1@12
  unsigned int v16; // r5@12
  char *v17; // r8@19
  int v18; // r8@21
  int j; // r7@24
  int v20; // r9@24
  __int64 v21; // kr18_8@24
  int v22; // r10@27
  __int64 v23; // r0@27
  void *v24; // r5@29
  char *v25; // r6@29
  unsigned int v26; // r2@29
  unsigned int v27; // r1@31
  unsigned int v28; // r11@31
  char *v29; // r4@38
  int *v30; // r5@47
  int *k; // r7@47
  int v32; // r4@53
  int v33; // r6@53
  int **v34; // r7@60
  int **v35; // r10@60
  int *v36; // r0@63
  int *v37; // r1@63 OVERLAPPED
  int *v38; // r2@63 OVERLAPPED
  bool v39; // zf@63
  unsigned int v40; // r3@66
  unsigned int v41; // r6@66
  int v42; // t1@67
  unsigned __int64 v43; // kr40_8@67
  int v44; // r1@69
  char *v45; // r1@69 OVERLAPPED
  int v46; // r11@69
  char *v47; // r2@69
  char *v48; // r6@71
  _BYTE *v49; // r8@71
  signed int v50; // r0@71
  unsigned int v51; // r2@71
  unsigned int v52; // r0@73
  unsigned int v53; // r4@73
  char *v54; // r0@79
  ContentView *v55; // r5@80
  int v56; // r9@80
  int v57; // r11@82
  void (__fastcall *v58)(char *, char *, signed int); // r3@85
  __int64 v59; // r5@86
  int result; // r0@88
  int v61; // [sp+4h] [bp-4Ch]@5
  _DWORD *v62; // [sp+8h] [bp-48h]@4
  ContentView *v63; // [sp+Ch] [bp-44h]@1
  _DWORD *v64; // [sp+10h] [bp-40h]@7
  int v65; // [sp+14h] [bp-3Ch]@7
  char *v66; // [sp+18h] [bp-38h]@1
  char v67; // [sp+1Ch] [bp-34h]@86
  void (*v68)(void); // [sp+24h] [bp-2Ch]@86
  int v69; // [sp+28h] [bp-28h]@86

  v1 = this;
  v63 = this;
  v2 = (char *)this + 4;
  v66 = v2;
  *((_DWORD *)v2 + 1) = *((_DWORD *)this + 1);
  for ( i = *((_QWORD *)this + 8); HIDWORD(i) != (_DWORD)i; *(_DWORD *)(v4 + 8) = *(_DWORD *)(v4 + 4) )
  {
    v4 = *(_DWORD *)i;
    LODWORD(i) = i + 4;
  }
  v5 = *(_QWORD *)((char *)v1 + 76) >> 32;
  v6 = *(_QWORD *)((char *)v1 + 76);
  if ( v5 == v6 )
    v8 = *(_QWORD *)ContentManager::getContentItems(*(ContentManager **)v1);
    v62 = (_DWORD *)(v8 >> 32);
    v7 = (_DWORD *)v8;
    if ( v7 != v62 )
    {
      v61 = (int)v1 + 16;
      while ( *((_DWORD *)v1 + 6) )
      {
        v9 = *v7;
        v64 = v7;
        v65 = *v7;
        if ( (*((int (__fastcall **)(_DWORD, _DWORD))v1 + 7))(v61, *v7) == 1 )
        {
          v10 = *((_QWORD *)v1 + 1);
          if ( (_DWORD)v10 == HIDWORD(v10) )
          {
            v11 = 0;
            v12 = *(_BYTE **)v66;
            v13 = v10 - *(_DWORD *)v66;
            v14 = v13 >> 2;
            if ( !(v13 >> 2) )
              v14 = 1;
            v15 = v14 + (v13 >> 2);
            v16 = v15;
            if ( 0 != v15 >> 30 )
              v16 = 0x3FFFFFFF;
            if ( v15 < v14 )
            if ( v16 )
            {
              if ( v16 >= 0x40000000 )
                sub_21E57F4();
              v11 = (char *)operator new(4 * v16);
              LODWORD(v10) = *(_QWORD *)((char *)v1 + 4) >> 32;
              v12 = (_BYTE *)*(_QWORD *)((char *)v1 + 4);
            }
            v17 = &v11[v10 - (_DWORD)v12];
            *(_DWORD *)v17 = v9;
            if ( ((signed int)v10 - (signed int)v12) >> 2 )
              _aeabi_memmove4(v11, v12);
            v18 = (int)(v17 + 4);
            if ( v12 )
              operator delete(v12);
            *((_DWORD *)v1 + 1) = v11;
            *((_DWORD *)v1 + 2) = v18;
            *((_DWORD *)v1 + 3) = &v11[4 * v16];
          }
          else
            *(_DWORD *)v10 = v9;
            *((_DWORD *)v1 + 2) += 4;
        }
        v21 = *((_QWORD *)v1 + 8);
        v20 = *((_QWORD *)v1 + 8) >> 32;
        for ( j = v21; v20 != j; j += 4 )
          if ( !*(_DWORD *)(*(_DWORD *)j + 24) )
            sub_21E5F48();
          if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)j + 28))(*(_DWORD *)j + 16, v9) == 1 )
            v22 = *(_DWORD *)j;
            v23 = *(_QWORD *)(*(_DWORD *)j + 8);
            if ( (_DWORD)v23 == HIDWORD(v23) )
              v24 = *(void **)(v22 + 4);
              v25 = 0;
              v26 = ((signed int)v23 - (signed int)v24) >> 2;
              if ( !v26 )
                v26 = 1;
              HIDWORD(v23) = v26 + (((signed int)v23 - (signed int)v24) >> 2);
              v28 = v26 + (((signed int)v23 - (signed int)v24) >> 2);
              if ( 0 != HIDWORD(v23) >> 30 )
                v28 = 0x3FFFFFFF;
              if ( v27 < v26 )
              if ( v28 )
              {
                if ( v28 >= 0x40000000 )
LABEL_93:
                  sub_21E57F4();
                v25 = (char *)operator new(4 * v28);
                LODWORD(v23) = *(_QWORD *)(v22 + 4) >> 32;
                v24 = (void *)*(_QWORD *)(v22 + 4);
              }
              *(_DWORD *)&v25[v23 - (_DWORD)v24] = v9;
              v29 = &v25[v23 - (_DWORD)v24];
              if ( ((signed int)v23 - (signed int)v24) >> 2 )
                _aeabi_memmove4(v25, v24);
              if ( v24 )
                operator delete(v24);
              *(_DWORD *)(v22 + 4) = v25;
              *(_DWORD *)(v22 + 8) = v29 + 4;
              v9 = v65;
              *(_DWORD *)(v22 + 12) = &v25[4 * v28];
            else
              *(_DWORD *)v23 = v9;
              *(_DWORD *)(v22 + 8) += 4;
        v1 = v63;
        v7 = v64 + 1;
        if ( v64 + 1 == v62 )
          goto LABEL_60;
      }
      goto LABEL_91;
    }
  else
    for ( ; v6 != v5; v6 += 4 )
      v30 = (int *)(*(_QWORD *)(*(_DWORD *)v6 + 4) >> 32);
      for ( k = (int *)*(_QWORD *)(*(_DWORD *)v6 + 4); k != v30; ++k )
        if ( !*((_DWORD *)v1 + 6) )
          goto LABEL_91;
        if ( (*((int (__fastcall **)(_DWORD, _DWORD))v1 + 7))((char *)v1 + 16, *k) == 1 )
          std::vector<ContentItem *,std::allocator<ContentItem *>>::push_back((int)v66, k);
        v33 = *((_QWORD *)v1 + 8) >> 32;
        v32 = *((_QWORD *)v1 + 8);
        if ( v32 != v33 )
          while ( *(_DWORD *)(*(_DWORD *)v32 + 24) )
            if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v32 + 28))(*(_DWORD *)v32 + 16, *k) == 1 )
              std::vector<ContentItem *,std::allocator<ContentItem *>>::push_back(*(_DWORD *)v32 + 4, k);
            v32 += 4;
            if ( v33 == v32 )
              goto LABEL_48;
LABEL_91:
          sub_21E5F48();
LABEL_48:
        ;
LABEL_60:
  v35 = (int **)(*((_QWORD *)v1 + 8) >> 32);
  v34 = (int **)*((_QWORD *)v1 + 8);
  while ( v34 != v35 )
    v36 = *v34;
    *(_QWORD *)&v37 = *(_QWORD *)(*v34 + 1);
    v39 = v38 == v37;
    if ( v38 != v37 )
      v39 = v37 == v38;
    if ( v39 )
      goto LABEL_61;
    v40 = 0;
    v41 = 0;
    do
      v42 = *v37;
      ++v37;
      v43 = __PAIR__(v41, v40) + *(_QWORD *)(v42 + 24);
      v41 = (__PAIR__(v41, v40) + *(_QWORD *)(v42 + 24)) >> 32;
      v40 = v43;
    while ( v38 != v37 );
    if ( !((unsigned int)v43 | v41) )
    v44 = *v36;
    *(_DWORD *)(v44 + 24) = v43;
    *(_DWORD *)(v44 + 28) = v41;
    *(_QWORD *)&v45 = *((_QWORD *)v1 + 1);
    v46 = *v36;
    if ( v45 == v47 )
      v48 = 0;
      v49 = *(_BYTE **)v66;
      v50 = (signed int)&v45[-*(_DWORD *)v66];
      v51 = v50 >> 2;
      if ( !(v50 >> 2) )
        v51 = 1;
      v52 = v51 + (v50 >> 2);
      v53 = v52;
      if ( 0 != v52 >> 30 )
        v53 = 0x3FFFFFFF;
      if ( v52 < v51 )
      if ( v53 )
        if ( v53 >= 0x40000000 )
          goto LABEL_93;
        v54 = (char *)operator new(4 * v53);
        v45 = (char *)(*(_QWORD *)((char *)v1 + 4) >> 32);
        v49 = (_BYTE *)*(_QWORD *)((char *)v1 + 4);
        v48 = v54;
      v55 = v1;
      v56 = (int)&v48[v45 - v49];
      *(_DWORD *)&v48[v45 - v49] = v46;
      if ( (v45 - v49) >> 2 )
        _aeabi_memmove4(v48, v49);
      v57 = v56 + 4;
      if ( v49 )
        operator delete(v49);
      v1 = v55;
      *((_DWORD *)v55 + 1) = v48;
      *((_DWORD *)v55 + 2) = v57;
      *((_DWORD *)v55 + 3) = &v48[4 * v53];
LABEL_61:
      ++v34;
    else
      *(_DWORD *)v45 = v46;
      *((_DWORD *)v1 + 2) += 4;
  v58 = (void (__fastcall *)(char *, char *, signed int))*((_DWORD *)v1 + 10);
  if ( v58 )
    v59 = *(_QWORD *)((char *)v1 + 4);
    v68 = 0;
    v58(&v67, (char *)v1 + 32, 2);
    v69 = *((_DWORD *)v1 + 11);
    v68 = (void (*)(void))*((_DWORD *)v1 + 10);
    std::sort<__gnu_cxx::__normal_iterator<ContentItem **,std::vector<ContentItem *,std::allocator<ContentItem *>>>,std::function<bool ()(ContentItem *,ContentItem *)>>(
      (int *)v59,
      (int *)HIDWORD(v59),
      (int)&v67);
    if ( v68 )
      v68();
  result = *((_DWORD *)v1 + 14);
  if ( result )
    result = (*((int (__fastcall **)(_DWORD))v1 + 15))((char *)v1 + 48);
  return result;
}


void __fastcall ContentView::createItemCollection(int a1, _DWORD *a2, int a3)
{
  ContentView::createItemCollection(a1, a2, a3);
}


int __fastcall ContentView::onReload(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 48;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 48);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 56);
  v10 = v13;
  *(_DWORD *)(v4 + 56) = v8;
  v14 = *(_DWORD *)(v4 + 60);
  *(_DWORD *)(v4 + 60) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}
