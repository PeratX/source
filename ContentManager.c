

void __fastcall ContentManager::generateItems(ContentManager *this, ContentSource *a2)
{
  ContentManager::generateItems(this, a2);
}


RakNet *__fastcall ContentManager::getWorldResourcePath(void **a1, int *a2, int *a3)
{
  void **v3; // r4@1
  int *v4; // r6@1
  int *v5; // r5@1
  int v6; // r0@1
  int v7; // r1@1
  int v8; // r3@1
  int v9; // r6@1
  int v10; // r5@1
  void *v11; // r0@1
  RakNet *result; // r0@2
  unsigned int *v13; // r2@4
  signed int v14; // r1@6
  int v15; // [sp+4h] [bp-444h]@1
  int v16; // [sp+10h] [bp-438h]@1
  int v17; // [sp+14h] [bp-434h]@1
  int v18; // [sp+18h] [bp-430h]@1
  int v19; // [sp+1Ch] [bp-42Ch]@1
  int v20; // [sp+20h] [bp-428h]@1
  int v21; // [sp+24h] [bp-424h]@1
  char v22; // [sp+2Ch] [bp-41Ch]@1
  int v23; // [sp+30h] [bp-418h]@1
  RakNet *v24; // [sp+434h] [bp-14h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v24 = _stack_chk_guard;
  MinecraftScreenModel::getLevelBasePath((MinecraftScreenModel *)&v15, *a2);
  v6 = v4[17];
  v7 = *v5;
  v8 = *(_DWORD *)(v6 - 12);
  v9 = *(_DWORD *)(*v5 - 12);
  v10 = *(_DWORD *)(v15 - 12);
  v16 = v15;
  v17 = v10;
  v18 = v7;
  v19 = v9;
  v20 = v6;
  v21 = v8;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v22, (int)&v16, 3);
  sub_21E94B4(v3, (const char *)&v23);
  v11 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v15 - 4);
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
      j_j_j_j__ZdlPv_9(v11);
  }
  result = (RakNet *)(_stack_chk_guard - v24);
  if ( _stack_chk_guard != v24 )
    _stack_chk_fail(result);
  return result;
}


RakNet *__fastcall ContentManager::getWorldBehaviorFolder(void **a1, int *a2, int *a3)
{
  void **v3; // r6@1
  int *v4; // r5@1
  int v5; // r1@1
  int v6; // r5@1
  int v7; // r4@1
  int v8; // r3@1
  void *v9; // r0@1
  RakNet *result; // r0@2
  unsigned int *v11; // r2@4
  signed int v12; // r1@6
  int v13; // [sp+4h] [bp-444h]@1
  int v14; // [sp+10h] [bp-438h]@1
  int v15; // [sp+14h] [bp-434h]@1
  int v16; // [sp+18h] [bp-430h]@1
  int v17; // [sp+1Ch] [bp-42Ch]@1
  int v18; // [sp+20h] [bp-428h]@1
  int v19; // [sp+24h] [bp-424h]@1
  char v20; // [sp+2Ch] [bp-41Ch]@1
  int v21; // [sp+30h] [bp-418h]@1
  RakNet *v22; // [sp+434h] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v22 = _stack_chk_guard;
  MinecraftScreenModel::getLevelBasePath((MinecraftScreenModel *)&v13, *a2);
  v5 = *v4;
  v6 = *(_DWORD *)(*v4 - 12);
  v7 = *(_DWORD *)(v13 - 12);
  v8 = *(_DWORD *)(ResourcePackRepository::BEHAVIOR_PACK_PATH - 12);
  v14 = v13;
  v15 = v7;
  v16 = v5;
  v17 = v6;
  v18 = ResourcePackRepository::BEHAVIOR_PACK_PATH;
  v19 = v8;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v20, (int)&v14, 3);
  sub_21E94B4(v3, (const char *)&v21);
  v9 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v13 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  }
  result = (RakNet *)(_stack_chk_guard - v22);
  if ( _stack_chk_guard != v22 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall ContentManager::reloadSources(ContentManager *this, int a2)
{
  ContentManager *v2; // r4@1
  int v3; // r5@1 OVERLAPPED
  int v4; // r6@1 OVERLAPPED
  int v5; // t1@3
  int v6; // t1@5
  ContentSource **v7; // r5@6 OVERLAPPED
  ContentSource **v8; // r6@6 OVERLAPPED
  ContentSource *v9; // t1@7
  ContentView **v10; // r4@8
  ContentView **v11; // r5@8
  __int64 v12; // kr00_8@8
  ContentView *v13; // t1@9

  v2 = this;
  *(_QWORD *)&v3 = *((_QWORD *)this + 4);
  if ( v3 != v4 )
  {
    if ( a2 == 1 )
    {
      do
      {
        (*(void (**)(void))(**(_DWORD **)v3 + 16))();
        v5 = *(_DWORD *)v3;
        v3 += 4;
        (*(void (**)(void))(*(_DWORD *)v5 + 8))();
      }
      while ( v4 != v3 );
    }
    else
        v6 = *(_DWORD *)v3;
        (*(void (**)(void))(*(_DWORD *)v6 + 8))();
  }
  *(_QWORD *)&v7 = *((_QWORD *)v2 + 4);
  while ( v8 != v7 )
    v9 = *v7;
    ++v7;
    ContentManager::generateItems(v2, v9);
  v12 = *(_QWORD *)((char *)v2 + 44);
  v10 = (ContentView **)(*(_QWORD *)((char *)v2 + 44) >> 32);
  v11 = (ContentView **)v12;
  while ( v10 != v11 )
    v13 = *v11;
    ++v11;
    ContentView::reload(v13);
}


void __fastcall ContentManager::deleteContent(int a1, unsigned __int64 *a2)
{
  int v2; // r11@1
  char *v3; // r4@1
  char *v4; // r12@1
  _DWORD *v5; // r5@1
  _DWORD *v6; // r7@1
  int v7; // r9@2
  int v8; // r0@3
  int v9; // r10@5
  int v10; // lr@5
  int v11; // r7@7
  int v12; // r8@7
  int v13; // r3@8
  int v14; // r6@8
  int *v15; // r7@14
  int *v16; // r11@14
  int v17; // r10@15
  signed int v18; // r6@17
  char *v19; // r5@17
  int v20; // r4@17
  unsigned int v21; // r0@17
  unsigned int v22; // r1@19
  unsigned int v23; // r9@19
  char *v24; // r6@27
  signed int v25; // r9@34
  char *v26; // r6@34
  int v27; // r4@34
  unsigned int v28; // r1@34
  unsigned int v29; // r2@36
  unsigned int v30; // r10@36
  int v31; // r8@43
  char *v32; // r4@44
  int *v33; // r11@53
  char *v34; // r2@54
  char *v35; // r9@54
  char *v36; // r10@54
  int v37; // r0@56
  int v38; // r7@56
  __int64 v39; // r0@56
  void *v40; // r5@58
  char *v41; // r6@58
  signed int v42; // r1@58
  unsigned int v43; // r2@58
  unsigned int v44; // r1@60
  unsigned int v45; // r8@60
  char *v46; // r11@66
  char *v47; // r9@68
  int v48; // r9@70
  int v49; // r6@76
  __int64 v50; // kr30_8@77
  void *v51; // r7@77
  signed int v52; // r0@77
  unsigned int v53; // r4@77
  void (__fastcall *v54)(_DWORD, void **); // r9@77
  __int64 v55; // kr38_8@80
  int v56; // r4@80
  __int64 v57; // r4@87
  __int64 i; // r4@89
  __int64 j; // r4@91
  _DWORD *v60; // [sp+0h] [bp-58h]@1
  int v61; // [sp+4h] [bp-54h]@1
  int v62; // [sp+4h] [bp-54h]@53
  _DWORD *v63; // [sp+8h] [bp-50h]@6
  char *ptr; // [sp+Ch] [bp-4Ch]@24
  char *ptra; // [sp+Ch] [bp-4Ch]@41
  char *ptrb; // [sp+Ch] [bp-4Ch]@53
  void *v67; // [sp+10h] [bp-48h]@77
  char *v68; // [sp+14h] [bp-44h]@77
  char *v69; // [sp+18h] [bp-40h]@77
  char v70; // [sp+1Ch] [bp-3Ch]@54
  int v71; // [sp+20h] [bp-38h]@53
  int v72; // [sp+24h] [bp-34h]@53
  int *v73; // [sp+28h] [bp-30h]@53
  int *v74; // [sp+2Ch] [bp-2Ch]@53
  int v75; // [sp+30h] [bp-28h]@53

  v2 = a1;
  v3 = 0;
  v61 = a1;
  v4 = 0;
  v6 = (_DWORD *)(*a2 >> 32);
  v5 = (_DWORD *)*a2;
  v60 = v6;
  if ( v5 != v6 )
  {
    v7 = 0;
    v3 = 0;
    v4 = 0;
    do
    {
      v8 = *v5;
      if ( *v5 )
      {
        if ( *(_QWORD *)(v8 + 32) == 6LL )
        {
          v10 = *(_QWORD *)(v2 + 44) >> 32;
          v9 = *(_QWORD *)(v2 + 44);
          if ( v9 != v10 )
          {
            v63 = v5;
            while ( 1 )
            {
              v11 = *(_QWORD *)(*(_DWORD *)v9 + 64) >> 32;
              v12 = *(_QWORD *)(*(_DWORD *)v9 + 64);
              if ( v12 != v11 )
                break;
LABEL_10:
              v9 += 4;
              if ( v9 == v10 )
                goto LABEL_49;
            }
              v13 = v12 + 4;
              v14 = *(_DWORD *)v12;
              if ( *(_QWORD *)(**(_DWORD **)v12 + 8) == *(_QWORD *)(v8 + 8) )
              v12 += 4;
              if ( v11 == v13 )
                goto LABEL_10;
            v16 = (int *)(*(_QWORD *)(v14 + 4) >> 32);
            v15 = (int *)*(_QWORD *)(v14 + 4);
            if ( v15 != v16 )
              do
              {
                v17 = *v15;
                if ( v3 == (char *)v7 )
                {
                  v18 = v3 - v4;
                  v19 = 0;
                  v20 = (v3 - v4) >> 2;
                  v21 = v20;
                  if ( !(v18 >> 2) )
                    v21 = 1;
                  v22 = v21 + (v18 >> 2);
                  v23 = v21 + (v18 >> 2);
                  if ( 0 != v22 >> 30 )
                    v23 = 0x3FFFFFFF;
                  if ( v22 < v21 )
                  if ( v23 )
                  {
                    ptr = v4;
                    if ( v23 >= 0x40000000 )
                      sub_21E57F4();
                    v19 = (char *)operator new(4 * v23);
                    v4 = ptr;
                  }
                  *(_DWORD *)&v19[4 * v20] = v17;
                  if ( v20 )
                    v24 = v4;
                    _aeabi_memmove4(v19, v4);
                    v4 = v24;
                  v3 = &v19[4 * v20];
                  if ( v4 )
                    operator delete(v4);
                  v7 = (int)&v19[4 * v23];
                  v4 = v19;
                }
                else
                  *(_DWORD *)v3 = v17;
                ++v15;
                v3 += 4;
              }
              while ( v16 != v15 );
            *(_DWORD *)(v14 + 8) = *(_DWORD *)(v14 + 4);
            v2 = v61;
LABEL_49:
            v5 = v63;
            v6 = v60;
          }
        }
        else if ( v3 == (char *)v7 )
          v25 = v3 - v4;
          v26 = 0;
          v27 = (v3 - v4) >> 2;
          v28 = v27;
          if ( !(v25 >> 2) )
            v28 = 1;
          v29 = v28 + (v25 >> 2);
          v30 = v28 + (v25 >> 2);
          if ( 0 != v29 >> 30 )
            v30 = 0x3FFFFFFF;
          if ( v29 < v28 )
          if ( v30 )
            ptra = v4;
            if ( v30 >= 0x40000000 )
              sub_21E57F4();
            v26 = (char *)operator new(4 * v30);
            v8 = *v5;
            v4 = ptra;
          v31 = (int)&v26[4 * v27];
          *(_DWORD *)&v26[4 * v27] = v8;
          if ( v27 )
            v32 = v4;
            _aeabi_memmove4(v26, v4);
            v4 = v32;
          v3 = (char *)(v31 + 4);
          if ( v4 )
            operator delete(v4);
          v7 = (int)&v26[4 * v30];
          v4 = v26;
        else
          *(_DWORD *)v3 = v8;
          v3 += 4;
      }
      ++v5;
    }
    while ( v5 != v6 );
  }
  v62 = v2;
  ptrb = v4;
  v75 = 0;
  v71 = 0;
  v72 = 0;
  v33 = &v71;
  v73 = &v71;
  v74 = &v71;
  if ( v4 != v3 )
    v34 = v4;
    v35 = &v70;
    v36 = v4;
      if ( *(_DWORD *)(*(_DWORD *)v36 + 56) )
        v37 = std::map<ContentSource *,std::vector<ContentItem const*,std::allocator<ContentItem const*>>,std::less<ContentSource *>,std::allocator<std::pair<ContentSource * const,std::vector<ContentItem const*,std::allocator<ContentItem const*>>>>>::operator[](
                (int)v35,
                (int *)(*(_DWORD *)v36 + 56));
        v38 = v37;
        v39 = *(_QWORD *)(v37 + 4);
        v34 = ptrb;
        if ( (_DWORD)v39 == HIDWORD(v39) )
          v40 = *(void **)v38;
          v41 = 0;
          v42 = v39 - *(_DWORD *)v38;
          v43 = v42 >> 2;
          if ( !(v42 >> 2) )
            v43 = 1;
          v44 = v43 + (v42 >> 2);
          v45 = v44;
          if ( 0 != v44 >> 30 )
            v45 = 0x3FFFFFFF;
          if ( v44 < v43 )
          if ( v45 )
            if ( v45 >= 0x40000000 )
            v41 = (char *)operator new(4 * v45);
            LODWORD(v39) = *(_QWORD *)v38 >> 32;
            v40 = (void *)*(_QWORD *)v38;
            v46 = v35;
          else
          v47 = &v41[v39 - (_DWORD)v40];
          *(_DWORD *)v47 = *(_DWORD *)v36;
          if ( ((signed int)v39 - (signed int)v40) >> 2 )
            _aeabi_memmove4(v41, v40);
          v48 = (int)(v47 + 4);
          if ( v40 )
            operator delete(v40);
          *(_DWORD *)v38 = v41;
          *(_DWORD *)(v38 + 4) = v48;
          v35 = v46;
          *(_DWORD *)(v38 + 8) = &v41[4 * v45];
          v34 = ptrb;
          v33 = &v71;
          *(_DWORD *)v39 = *(_DWORD *)v36;
          *(_DWORD *)(v38 + 4) += 4;
      v36 += 4;
    while ( v3 != v36 );
    v49 = (int)v73;
    for ( ptrb = v34; (int *)v49 != v33; v49 = sub_21D47E8(v49) )
      v50 = *(_QWORD *)(v49 + 16);
      v51 = 0;
      v52 = *(_DWORD *)(v49 + 24) - HIDWORD(v50);
      v53 = v52 >> 2;
      v54 = *(void (__fastcall **)(_DWORD, void **))(*(_DWORD *)v50 + 20);
      v67 = 0;
      v68 = 0;
      v69 = 0;
      if ( 0 != v52 >> 2 )
        if ( v53 >= 0x40000000 )
          sub_21E57F4();
        v51 = operator new(v52);
      v67 = v51;
      v68 = (char *)v51;
      v69 = (char *)v51 + 4 * v53;
      v55 = *(_QWORD *)(v49 + 20);
      v56 = (HIDWORD(v55) - (signed int)v55) >> 2;
      if ( 0 != v56 )
        _aeabi_memmove4(v51, v55);
      v68 = (char *)v51 + 4 * v56;
      v54(v50, &v67);
      if ( v67 )
        operator delete(v67);
  v57 = *(_QWORD *)(v62 + 32);
  if ( (_DWORD)v57 != HIDWORD(v57) )
      (*(void (**)(void))(**(_DWORD **)v57 + 16))();
      (*(void (**)(void))(**(_DWORD **)v57 + 8))();
      LODWORD(v57) = v57 + 4;
    while ( HIDWORD(v57) != (_DWORD)v57 );
    for ( i = *(_QWORD *)(v62 + 32); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 4 )
      ContentManager::generateItems((ContentManager *)v62, *(ContentSource **)i);
  for ( j = *(_QWORD *)(v62 + 44); HIDWORD(j) != (_DWORD)j; LODWORD(j) = j + 4 )
    ContentView::reload(*(ContentView **)j);
  std::_Rb_tree<ContentSource *,std::pair<ContentSource * const,std::vector<ContentItem const*,std::allocator<ContentItem const*>>>,std::_Select1st<std::pair<ContentSource * const,std::vector<ContentItem const*,std::allocator<ContentItem const*>>>>,std::less<ContentSource *>,std::allocator<std::pair<ContentSource * const,std::vector<ContentItem const*,std::allocator<ContentItem const*>>>>>::_M_erase(
    (int)&v70,
    v72);
  if ( ptrb )
    operator delete(ptrb);
}


void __fastcall ContentManager::deleteContent(ContentManager *this, const ContentItem *a2)
{
  ContentManager::deleteContent(this, a2);
}


int __fastcall ContentManager::generateContentId(ContentManager *this)
{
  return (*((_QWORD *)this + 7))++;
}


int __fastcall ContentManager::loadContent(unsigned int a1, int a2, int a3, int a4, __int64 a5)
{
  char v5; // cf@0
  unsigned int v6; // r4@1
  signed int v7; // r2@1
  int v8; // r6@1
  int v9; // r1@4
  int *v10; // r0@8
  int *v11; // r1@8
  int v12; // t1@9
  int v13; // r7@11
  _DWORD *v14; // r6@11
  int v15; // r0@11
  ContentView **v16; // r5@11
  ContentView **i; // r7@11
  __int64 v18; // r0@13
  int *v19; // r0@15
  int *v20; // r1@15
  int v21; // t1@16
  WorldTemplateManager *v22; // r7@18
  WorldTemplateSource *v23; // r6@18
  int v24; // r0@18
  ContentView **v25; // r5@18
  ContentView **j; // r7@18
  __int64 v27; // r0@20
  signed int v28; // r2@22
  WorldTemplateSource *v30; // [sp+0h] [bp-20h]@18
  _DWORD *v31; // [sp+4h] [bp-1Ch]@11

  v6 = a1;
  v7 = 0;
  v8 = 0;
  if ( a1 > 3 )
    v7 = 1;
  if ( a4 == !v5 )
    v9 = v7;
  else
    v9 = 1;
  {
    switch ( a1 )
    {
      case 1u:
        v10 = *(int **)(a1 + 32);
        v11 = *(int **)(v6 + 36);
        while ( v11 != v10 )
        {
          v12 = *v10;
          ++v10;
          v8 = v12;
          if ( *(_DWORD *)(v12 + 16) == 4 )
            return v8;
        }
        v13 = MinecraftScreenModel::getLevelSource(*(MinecraftScreenModel **)v6);
        v14 = operator new(0x28u);
        WorldContentSource::WorldContentSource((int)v14, v13);
        v14[5] = v6;
        v15 = *v14;
        v31 = v14;
        (*(void (__fastcall **)(_DWORD *))(v15 + 8))(v14);
        ContentManager::generateItems((ContentManager *)v6, (ContentSource *)v14);
        v16 = (ContentView **)(*(_QWORD *)(v6 + 44) >> 32);
        for ( i = (ContentView **)*(_QWORD *)(v6 + 44); v16 != i; ++i )
          ContentView::reload(*i);
        v18 = *(_QWORD *)(v6 + 36);
        if ( (_DWORD)v18 == HIDWORD(v18) )
          std::vector<std::unique_ptr<ContentSource,std::default_delete<ContentSource>>,std::allocator<std::unique_ptr<ContentSource,std::default_delete<ContentSource>>>>::_M_emplace_back_aux<std::unique_ptr<ContentSource,std::default_delete<ContentSource>>>(
            (_QWORD *)(v6 + 32),
            (int *)&v31);
          v8 = *(_DWORD *)(*(_DWORD *)(v6 + 36) - 4);
          if ( v31 )
            (*(void (**)(void))(*v31 + 4))();
        else
          v31 = 0;
          *(_DWORD *)v18 = v14;
          *(_DWORD *)(v6 + 36) = v18 + 4;
          v8 = *(_DWORD *)v18;
        v31 = 0;
        return v8;
      case 2u:
        v19 = *(int **)(a1 + 32);
        v20 = *(int **)(v6 + 36);
        if ( v19 == v20 )
          goto LABEL_18;
        break;
      case 3u:
        v28 = 3;
        return j_j_j__ZN14ContentManager20_loadResourceContentE11ContentType12ContentFlags(
                 a1,
                 v9,
                 (unsigned int)v28,
                 a5);
      case 4u:
        v28 = 4;
    }
    while ( 1 )
      v21 = *v19;
      ++v19;
      v8 = v21;
      if ( *(_DWORD *)(v21 + 16) == 5 )
      if ( v20 == v19 )
      {
LABEL_18:
        v22 = (WorldTemplateManager *)MainMenuScreenModel::getWorldTemplateManager(*(MainMenuScreenModel **)v6);
        v23 = (WorldTemplateSource *)operator new(0x1Cu);
        WorldTemplateSource::WorldTemplateSource(v23, v22);
        *((_DWORD *)v23 + 5) = v6;
        v24 = *(_DWORD *)v23;
        v30 = v23;
        (*(void (__fastcall **)(WorldTemplateSource *))(v24 + 8))(v23);
        ContentManager::generateItems((ContentManager *)v6, v23);
        v25 = (ContentView **)(*(_QWORD *)(v6 + 44) >> 32);
        for ( j = (ContentView **)*(_QWORD *)(v6 + 44); v25 != j; ++j )
          ContentView::reload(*j);
        v27 = *(_QWORD *)(v6 + 36);
        if ( (_DWORD)v27 == HIDWORD(v27) )
            (int *)&v30);
          if ( v30 )
            (*(void (**)(void))(*(_DWORD *)v30 + 4))();
          v30 = 0;
          *(_DWORD *)v27 = v23;
          *(_DWORD *)(v6 + 36) = v27 + 4;
          v8 = *(_DWORD *)v27;
        v30 = 0;
      }
  }
  return v8;
}


void __fastcall ContentManager::deleteContent(int a1, unsigned __int64 *a2)
{
  ContentManager::deleteContent(a1, a2);
}


int __fastcall ContentManager::_loadResourceContent(int a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r4@1
  unsigned int v5; // r6@1
  int v6; // r11@1
  int v7; // r0@1
  int v8; // r2@1
  int v9; // r1@1
  int v10; // r5@2
  int v11; // r3@2
  bool v12; // zf@2
  int v13; // r7@8
  int v14; // r5@8
  int v15; // r6@8
  int v16; // r10@8
  int v17; // r4@8
  signed int v18; // r9@8
  unsigned int v19; // r5@8
  int v20; // r8@10
  int v21; // ST00_4@10
  _DWORD *v22; // r6@10
  int v23; // r10@11
  int v24; // r0@11
  int v25; // r11@11
  InPackagePackSource *v26; // r4@11
  char *v27; // r0@11
  int *v29; // r10@13
  int v30; // r4@13
  int v31; // r1@13
  DirectoryPackSource *v32; // r4@13
  char *v33; // r0@13
  _BYTE *v34; // r6@15
  unsigned int v35; // r2@15
  unsigned int v36; // r1@17
  unsigned int v37; // r7@17
  char *v38; // r5@23
  char *v39; // r6@24
  unsigned int v40; // r2@24
  unsigned int v41; // r1@26
  unsigned int v42; // r7@26
  char *v43; // r5@32
  int v44; // r4@34
  char *v45; // r4@36
  int *v46; // r1@39
  DirectoryPackSource *v47; // r4@42
  char *v48; // r0@42
  _BYTE *v49; // r6@44
  unsigned int v50; // r2@44
  unsigned int v51; // r1@46
  unsigned int v52; // r7@46
  char *v53; // r5@52
  int v54; // r4@54
  DirectoryPackSource **v55; // r4@56
  void *v56; // r0@59
  int v57; // r4@60
  int v58; // r1@60
  DirectoryPackSource *v59; // r4@60
  char *v60; // r0@60
  char *v61; // r6@62
  unsigned int v62; // r2@62
  unsigned int v63; // r1@64
  unsigned int v64; // r7@64
  char *v65; // r5@70
  int v66; // r4@72
  char *v67; // r4@74
  int v68; // r4@77
  DirectoryPackSource *v69; // r4@77
  char *v70; // r0@77
  _BYTE *v71; // r6@79
  unsigned int v72; // r2@79
  unsigned int v73; // r1@81
  unsigned int v74; // r7@81
  char *v75; // r5@87
  int v76; // r4@89
  DirectoryPackSource **v77; // r4@91
  void *v78; // r0@94
  void *v79; // r4@95
  __int64 *v80; // r0@95
  int *v81; // r1@95 OVERLAPPED
  int *v82; // r2@95
  void *v83; // r0@100
  int v84; // r3@101
  void *v85; // r0@101
  int v86; // r4@103
  char *v87; // r4@105
  void *v88; // r0@108
  int v89; // r4@109
  int v90; // r1@109
  DirectoryPackSource *v91; // r4@109
  char *v92; // r0@109
  _BYTE *v93; // r6@111
  unsigned int v94; // r2@111
  unsigned int v95; // r1@113
  unsigned int v96; // r7@113
  char *v97; // r5@119
  int v98; // r4@121
  char *v99; // r4@123
  void *v100; // r0@126
  int *v101; // r1@127
  DirectoryPackSource *v102; // r4@130
  char *v103; // r0@130
  _BYTE *v104; // r6@132
  unsigned int v105; // r2@132
  unsigned int v106; // r1@134
  unsigned int v107; // r7@134
  char *v108; // r5@140
  int v109; // r4@142
  char *v110; // r4@144
  MainMenuScreenModel *v111; // r5@147
  int v112; // r3@147
  int v113; // r10@147
  MainMenuScreenModel *v114; // r0@147
  unsigned int *v115; // r0@148
  unsigned int v116; // r1@150
  __int64 v117; // kr38_8@153
  int *v118; // r9@153
  int v119; // r7@153
  unsigned int *v120; // r0@154
  unsigned int v121; // r1@156
  _DWORD *v122; // r0@159
  unsigned int *v123; // r1@160
  unsigned int v124; // r2@162
  __int64 v125; // r1@165
  ContentCatalogPackSource *v126; // r4@165
  char *v127; // r0@165
  _BYTE *v128; // r6@167
  unsigned int v129; // r2@167
  unsigned int v130; // r1@169
  unsigned int v131; // r7@169
  char *v132; // r5@175
  int v133; // r4@177
  char *v134; // r4@179
  unsigned int *v135; // r1@185
  unsigned int v136; // r0@187
  void *v137; // r4@192
  __int64 *v138; // r0@192
  int *v139; // r1@192 OVERLAPPED
  int *v140; // r2@192
  void *v141; // r0@197
  int v142; // r3@198
  unsigned int *v143; // r1@199
  unsigned int v144; // r0@201
  void *v145; // r0@206
  void *v146; // r0@207
  int v147; // r0@211
  __int64 i; // r4@211
  __int64 v149; // r0@213
  unsigned int *v151; // r2@219
  signed int v152; // r1@221
  unsigned int *v153; // r2@223
  signed int v154; // r1@225
  unsigned int *v155; // r2@227
  signed int v156; // r1@229
  unsigned int *v157; // r2@231
  signed int v158; // r1@233
  unsigned int *v159; // r2@235
  signed int v160; // r1@237
  unsigned int *v161; // r2@239
  signed int v162; // r1@241
  unsigned int *v163; // r2@243
  signed int v164; // r1@245
  unsigned int *v165; // r2@247
  signed int v166; // r1@249
  int v167; // [sp+18h] [bp-A0h]@0
  _QWORD *v168; // [sp+1Ch] [bp-9Ch]@8
  int v169; // [sp+20h] [bp-98h]@8
  int v170; // [sp+24h] [bp-94h]@8
  int v171; // [sp+28h] [bp-90h]@8
  int v172; // [sp+2Ch] [bp-8Ch]@211
  void *v173; // [sp+30h] [bp-88h]@192
  int v174; // [sp+34h] [bp-84h]@192
  _DWORD *v175; // [sp+38h] [bp-80h]@165
  void (*v176)(void); // [sp+40h] [bp-78h]@159
  int v177; // [sp+48h] [bp-70h]@128
  int v178; // [sp+4Ch] [bp-6Ch]@109
  int v179; // [sp+50h] [bp-68h]@77
  int v180; // [sp+54h] [bp-64h]@40
  void *ptr; // [sp+58h] [bp-60h]@11
  char *v182; // [sp+5Ch] [bp-5Ch]@11
  char *v183; // [sp+60h] [bp-58h]@11
  void *v184; // [sp+64h] [bp-54h]@95
  int v185; // [sp+68h] [bp-50h]@95
  int v186; // [sp+6Ch] [bp-4Ch]@95
  int v187; // [sp+70h] [bp-48h]@95
  int v188; // [sp+74h] [bp-44h]@60
  int v189; // [sp+78h] [bp-40h]@13
  char *v190; // [sp+7Ch] [bp-3Ch]@13
  DirectoryPackSource **v191; // [sp+80h] [bp-38h]@13
  char *v192; // [sp+84h] [bp-34h]@13
  __int64 v193; // [sp+88h] [bp-30h]@1

  v4 = HIDWORD(a3);
  v5 = a3;
  v6 = a1;
  v193 = a3;
  v8 = a1 + 32;
  v7 = *(_DWORD *)(a1 + 32);
  v9 = *(_DWORD *)(v8 + 4);
  if ( v7 == v9 )
  {
LABEL_8:
    v168 = (_QWORD *)v8;
    v171 = MinecraftScreenModel::getResourcePackManager(*(MinecraftScreenModel **)v6);
    v170 = MinecraftScreenModel::getResourcePackRepository(*(MinecraftScreenModel **)v6);
    v13 = MainMenuScreenModel::getPackManifestFactory(*(MainMenuScreenModel **)v6);
    v14 = v5 ^ 3;
    v15 = MainMenuScreenModel::getKeyProvider(*(MainMenuScreenModel **)v6);
    v16 = v14 | v4;
    v169 = v14 | v4;
    v17 = MainMenuScreenModel::getEntitlementManager(*(MainMenuScreenModel **)v6);
    v18 = 2;
    v19 = *(_DWORD *)(v6 + 8);
    if ( !v16 )
      v18 = 1;
    v20 = MinecraftScreenModel::getContentTierManager(*(MinecraftScreenModel **)v6);
    v21 = v15;
    v22 = operator new(0x60u);
    PackManagerContentSource::PackManagerContentSource(
      (int)v22,
      v171,
      v170,
      v13,
      v21,
      v17,
      __PAIR__(v20, v19),
      0,
      v167);
    if ( a4 & 1 )
    {
      v29 = (int *)v6;
      v190 = 0;
      v191 = 0;
      v25 = (int)v22;
      v192 = 0;
      v30 = v29[4];
      v31 = v22[11];
      ResourcePackRepository::getCachedResourcePacksPath((ResourcePackRepository *)&v189);
      v32 = PackSourceFactory::createDirectoryPackSource(v30, &v189, v18, 5, 0);
      v33 = (char *)v191;
      if ( (char *)v191 == v192 )
      {
        v39 = v190;
        v40 = ((char *)v191 - v190) >> 2;
        if ( !v40 )
          v40 = 1;
        v41 = v40 + (((char *)v191 - v190) >> 2);
        v42 = v40 + (((char *)v191 - v190) >> 2);
        if ( 0 != v41 >> 30 )
          v42 = 0x3FFFFFFF;
        if ( v41 < v40 )
        if ( v42 )
        {
          if ( v42 >= 0x40000000 )
            sub_21E57F4();
          v43 = (char *)operator new(4 * v42);
          v33 = (char *)v191;
          v39 = v190;
        }
        else
          v43 = 0;
        *(_DWORD *)&v43[v33 - v39] = v32;
        v54 = (int)&v43[v33 - v39];
        if ( 0 != (v33 - v39) >> 2 )
          _aeabi_memmove4(v43, v39);
        v55 = (DirectoryPackSource **)(v54 + 4);
        if ( v39 )
          operator delete(v39);
        v190 = v43;
        v191 = v55;
        v192 = &v43[4 * v42];
      }
      else
        *v191 = v32;
        ++v191;
      v56 = (void *)(v189 - 12);
      if ( (int *)(v189 - 12) != &dword_28898C0 )
        v151 = (unsigned int *)(v189 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v152 = __ldrex(v151);
          while ( __strex(v152 - 1, v151) );
          v152 = (*v151)--;
        if ( v152 <= 0 )
          j_j_j_j__ZdlPv_9(v56);
      v57 = v29[4];
      v58 = *(_DWORD *)(v25 + 44);
      ResourcePackRepository::getTemporaryPremiumPacksPath((ResourcePackRepository *)&v188);
      v59 = PackSourceFactory::createDirectoryPackSource(v57, &v188, v18, 7, 0);
      v60 = (char *)v191;
        v61 = v190;
        v62 = ((char *)v191 - v190) >> 2;
        if ( !v62 )
          v62 = 1;
        v63 = v62 + (((char *)v191 - v190) >> 2);
        v64 = v62 + (((char *)v191 - v190) >> 2);
        if ( 0 != v63 >> 30 )
          v64 = 0x3FFFFFFF;
        if ( v63 < v62 )
        if ( v64 )
          if ( v64 >= 0x40000000 )
          v65 = (char *)operator new(4 * v64);
          v60 = (char *)v191;
          v61 = v190;
          v65 = 0;
        *(_DWORD *)&v65[v60 - v61] = v59;
        v76 = (int)&v65[v60 - v61];
        if ( 0 != (v60 - v61) >> 2 )
          _aeabi_memmove4(v65, v61);
        v77 = (DirectoryPackSource **)(v76 + 4);
        if ( v61 )
          operator delete(v61);
        v190 = v65;
        v191 = v77;
        v192 = &v65[4 * v64];
        *v191 = v59;
      v78 = (void *)(v188 - 12);
      if ( (int *)(v188 - 12) != &dword_28898C0 )
        v153 = (unsigned int *)(v188 - 4);
            v154 = __ldrex(v153);
          while ( __strex(v154 - 1, v153) );
          v154 = (*v153)--;
        if ( v154 <= 0 )
          j_j_j_j__ZdlPv_9(v78);
      MinecraftScreenModel::getGlobalResourcePacksPath((MinecraftScreenModel *)&v187, *v29);
      v186 = 0;
      v185 = 3;
      v79 = operator new(0x10u);
      CompositePackSource::CompositePackSource((int)v79, (int)&v190);
      v184 = v79;
      v80 = (__int64 *)(v25 + 68);
      *(_QWORD *)&v81 = *(_QWORD *)(v25 + 72);
      if ( v81 == v82 )
        std::vector<PackManagerContentSource::PackData,std::allocator<PackManagerContentSource::PackData>>::_M_emplace_back_aux<std::string,ContentType,std::unique_ptr<CompositePackSource,std::default_delete<CompositePackSource>>>(
          v80,
          &v187,
          (__int64 *)&v185,
          (int *)&v184);
        __gnu_cxx::new_allocator<PackManagerContentSource::PackData>::construct<PackManagerContentSource::PackData,std::string,ContentType,std::unique_ptr<CompositePackSource,std::default_delete<CompositePackSource>>>(
          (int)v80,
          v81,
        *(_DWORD *)(v25 + 72) += 48;
      if ( v184 )
        (*(void (**)(void))(*(_DWORD *)v184 + 4))();
      v184 = 0;
      v83 = (void *)(v187 - 12);
      if ( (int *)(v187 - 12) != &dword_28898C0 )
        v159 = (unsigned int *)(v187 - 4);
            v160 = __ldrex(v159);
          while ( __strex(v160 - 1, v159) );
          v160 = (*v159)--;
        if ( v160 <= 0 )
          j_j_j_j__ZdlPv_9(v83);
      v84 = v25 + 24;
      *(_QWORD *)v84 = v193;
      *(_DWORD *)(v84 + 8) = 1;
      *(_DWORD *)(v84 + 12) = 0;
      v85 = v190;
    }
    else
      v23 = v6;
      ptr = 0;
      v182 = 0;
      v183 = 0;
      v24 = *(_DWORD *)(v6 + 16);
      v26 = PackSourceFactory::createInPackagePackSource(v24, v18);
      v27 = 0;
      v34 = ptr;
      v35 = -(signed int)ptr >> 2;
      if ( !v35 )
        v35 = 1;
      v36 = v35 + ((v182 - (_BYTE *)ptr) >> 2);
      v37 = v35 + ((v182 - (_BYTE *)ptr) >> 2);
      if ( 0 != v36 >> 30 )
        v37 = 0x3FFFFFFF;
      if ( v36 < v35 )
      if ( v37 )
        if ( v37 >= 0x40000000 )
          sub_21E57F4();
        v38 = (char *)operator new(4 * v37);
        v27 = v182;
        v34 = ptr;
        v38 = 0;
      *(_DWORD *)&v38[v27 - v34] = v26;
      v44 = (int)&v38[v27 - v34];
      if ( 0 != (v27 - v34) >> 2 )
        _aeabi_memmove4(v38, v34);
      v45 = (char *)(v44 + 4);
      if ( v34 )
        operator delete(v34);
      ptr = v38;
      v182 = v45;
      v183 = &v38[4 * v37];
      v46 = *(int **)(v25 + 44);
      if ( v169 )
        ResourcePackRepository::getBehaviorPacksPath((ResourcePackRepository *)&v180, v46);
        ResourcePackRepository::getResourcePacksPath((ResourcePackRepository *)&v180, v46);
      v47 = PackSourceFactory::createDirectoryPackSource(*(_DWORD *)(v23 + 16), &v180, v18, 4, 0);
      v48 = v182;
      if ( v182 == v183 )
        v49 = ptr;
        v50 = (v182 - (_BYTE *)ptr) >> 2;
        if ( !v50 )
          v50 = 1;
        v51 = v50 + ((v182 - (_BYTE *)ptr) >> 2);
        v52 = v50 + ((v182 - (_BYTE *)ptr) >> 2);
        if ( 0 != v51 >> 30 )
          v52 = 0x3FFFFFFF;
        if ( v51 < v50 )
        if ( v52 )
          if ( v52 >= 0x40000000 )
          v53 = (char *)operator new(4 * v52);
          v48 = v182;
          v49 = ptr;
          v53 = 0;
        *(_DWORD *)&v53[v48 - v49] = v47;
        v66 = (int)&v53[v48 - v49];
        if ( 0 != (v48 - v49) >> 2 )
          _aeabi_memmove4(v53, v49);
        v67 = (char *)(v66 + 4);
        if ( v49 )
          operator delete(v49);
        ptr = v53;
        v182 = v67;
        v183 = &v53[4 * v52];
        *(_DWORD *)v182 = v47;
        v182 += 4;
      v68 = *(_DWORD *)(v23 + 16);
      ResourcePackRepository::getPremiumPackPath((ResourcePackRepository *)&v179);
      v69 = PackSourceFactory::createDirectoryPackSource(v68, &v179, 1, 6, 0);
      v70 = v182;
        v71 = ptr;
        v72 = (v182 - (_BYTE *)ptr) >> 2;
        if ( !v72 )
          v72 = 1;
        v73 = v72 + ((v182 - (_BYTE *)ptr) >> 2);
        v74 = v72 + ((v182 - (_BYTE *)ptr) >> 2);
        if ( 0 != v73 >> 30 )
          v74 = 0x3FFFFFFF;
        if ( v73 < v72 )
        if ( v74 )
          if ( v74 >= 0x40000000 )
          v75 = (char *)operator new(4 * v74);
          v70 = v182;
          v71 = ptr;
          v75 = 0;
        *(_DWORD *)&v75[v70 - v71] = v69;
        v86 = (int)&v75[v70 - v71];
        if ( 0 != (v70 - v71) >> 2 )
          _aeabi_memmove4(v75, v71);
        v87 = (char *)(v86 + 4);
        if ( v71 )
          operator delete(v71);
        ptr = v75;
        v182 = v87;
        v183 = &v75[4 * v74];
        *(_DWORD *)v182 = v69;
      v88 = (void *)(v179 - 12);
      if ( (int *)(v179 - 12) != &dword_28898C0 )
        v155 = (unsigned int *)(v179 - 4);
            v156 = __ldrex(v155);
          while ( __strex(v156 - 1, v155) );
          v156 = (*v155)--;
        if ( v156 <= 0 )
          j_j_j_j__ZdlPv_9(v88);
      v89 = *(_DWORD *)(v23 + 16);
      v90 = *(_DWORD *)(v25 + 44);
      ResourcePackRepository::getPremiumResourcePackPath((ResourcePackRepository *)&v178);
      v91 = PackSourceFactory::createDirectoryPackSource(v89, &v178, 1, 6, 0);
      v92 = v182;
        v93 = ptr;
        v94 = (v182 - (_BYTE *)ptr) >> 2;
        if ( !v94 )
          v94 = 1;
        v95 = v94 + ((v182 - (_BYTE *)ptr) >> 2);
        v96 = v94 + ((v182 - (_BYTE *)ptr) >> 2);
        if ( 0 != v95 >> 30 )
          v96 = 0x3FFFFFFF;
        if ( v95 < v94 )
        if ( v96 )
          if ( v96 >= 0x40000000 )
          v97 = (char *)operator new(4 * v96);
          v92 = v182;
          v93 = ptr;
          v97 = 0;
        *(_DWORD *)&v97[v92 - v93] = v91;
        v98 = (int)&v97[v92 - v93];
        if ( 0 != (v92 - v93) >> 2 )
          _aeabi_memmove4(v97, v93);
        v99 = (char *)(v98 + 4);
        if ( v93 )
          operator delete(v93);
        ptr = v97;
        v182 = v99;
        v183 = &v97[4 * v96];
        *(_DWORD *)v182 = v91;
      v100 = (void *)(v178 - 12);
      if ( (int *)(v178 - 12) != &dword_28898C0 )
        v157 = (unsigned int *)(v178 - 4);
            v158 = __ldrex(v157);
          while ( __strex(v158 - 1, v157) );
          v158 = (*v157)--;
        if ( v158 <= 0 )
          j_j_j_j__ZdlPv_9(v100);
      v101 = *(int **)(v25 + 44);
      if ( v193 == 3 )
        ResourcePackRepository::getDevelopmentResourcePacksPath((ResourcePackRepository *)&v177, v101);
        ResourcePackRepository::getDevelopmentBehaviorPacksPath((ResourcePackRepository *)&v177, v101);
      v102 = PackSourceFactory::createDirectoryPackSource(*(_DWORD *)(v23 + 16), &v177, v18, 2, 1);
      v103 = v182;
        v104 = ptr;
        v105 = (v182 - (_BYTE *)ptr) >> 2;
        if ( !v105 )
          v105 = 1;
        v106 = v105 + ((v182 - (_BYTE *)ptr) >> 2);
        v107 = v105 + ((v182 - (_BYTE *)ptr) >> 2);
        if ( 0 != v106 >> 30 )
          v107 = 0x3FFFFFFF;
        if ( v106 < v105 )
        if ( v107 )
          if ( v107 >= 0x40000000 )
          v108 = (char *)operator new(4 * v107);
          v103 = v182;
          v104 = ptr;
          v108 = 0;
        *(_DWORD *)&v108[v103 - v104] = v102;
        v109 = (int)&v108[v103 - v104];
        if ( 0 != (v103 - v104) >> 2 )
          _aeabi_memmove4(v108, v104);
        v110 = (char *)(v109 + 4);
        if ( v104 )
          operator delete(v104);
        ptr = v108;
        v182 = v110;
        v183 = &v108[4 * v107];
        *(_DWORD *)v182 = v102;
      v111 = *(MainMenuScreenModel **)v23;
      v112 = v23;
      v113 = *(_DWORD *)(v23 + 4);
      v114 = v111;
      if ( v113 )
        v115 = (unsigned int *)(v113 + 8);
            v116 = __ldrex(v115);
          while ( __strex(v116 + 1, v115) );
          v114 = *(MainMenuScreenModel **)v112;
          ++*v115;
          v114 = v111;
      v117 = *(_QWORD *)(v112 + 12);
      v118 = (int *)v112;
      v119 = MainMenuScreenModel::getEntitlementManager(v114);
        v120 = (unsigned int *)(v113 + 8);
            v121 = __ldrex(v120);
          while ( __strex(v121 + 1, v120) );
          ++*v120;
      v176 = 0;
      v122 = operator new(0xCu);
      *v122 = v118;
      v122[1] = v111;
      v122[2] = v113;
        v123 = (unsigned int *)(v113 + 8);
            v124 = __ldrex(v123);
          while ( __strex(v124 + 1, v123) );
          ++*v123;
      LODWORD(v125) = sub_12D2BA4;
      v175 = v122;
      HIDWORD(v125) = sub_12D2AF4;
      *(_QWORD *)&v176 = v125;
      v126 = PackSourceFactory::createContentCatalogPackSource(
               (unsigned __int64 *)HIDWORD(v117),
               v117,
               v119,
               1,
               (int)&v175);
      v127 = v182;
        v128 = ptr;
        v129 = (v182 - (_BYTE *)ptr) >> 2;
        if ( !v129 )
          v129 = 1;
        v130 = v129 + ((v182 - (_BYTE *)ptr) >> 2);
        v131 = v129 + ((v182 - (_BYTE *)ptr) >> 2);
        if ( 0 != v130 >> 30 )
          v131 = 0x3FFFFFFF;
        if ( v130 < v129 )
        if ( v131 )
          if ( v131 >= 0x40000000 )
          v132 = (char *)operator new(4 * v131);
          v127 = v182;
          v128 = ptr;
          v132 = 0;
        *(_DWORD *)&v132[v127 - v128] = v126;
        v133 = (int)&v132[v127 - v128];
        if ( 0 != (v127 - v128) >> 2 )
          _aeabi_memmove4(v132, v128);
        v134 = (char *)(v133 + 4);
        if ( v128 )
          operator delete(v128);
        ptr = v132;
        v182 = v134;
        v183 = &v132[4 * v131];
        *(_DWORD *)v182 = v126;
      if ( v176 )
        v176();
        v135 = (unsigned int *)(v113 + 8);
            v136 = __ldrex(v135);
          while ( __strex(v136 - 1, v135) );
          v136 = (*v135)--;
        if ( v136 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v113 + 12))(v113);
      MinecraftScreenModel::getGlobalResourcePacksPath((MinecraftScreenModel *)&v174, *v118);
      v137 = operator new(0x10u);
      CompositePackSource::CompositePackSource((int)v137, (int)&ptr);
      v173 = v137;
      v138 = (__int64 *)(v25 + 68);
      *(_QWORD *)&v139 = *(_QWORD *)(v25 + 72);
      if ( v139 == v140 )
        std::vector<PackManagerContentSource::PackData,std::allocator<PackManagerContentSource::PackData>>::_M_emplace_back_aux<std::string,ContentType &,std::unique_ptr<CompositePackSource,std::default_delete<CompositePackSource>>>(
          v138,
          &v174,
          &v193,
          (int *)&v173);
        __gnu_cxx::new_allocator<PackManagerContentSource::PackData>::construct<PackManagerContentSource::PackData,std::string,ContentType &,std::unique_ptr<CompositePackSource,std::default_delete<CompositePackSource>>>(
          (int)v138,
          v139,
      if ( v173 )
        (*(void (**)(void))(*(_DWORD *)v173 + 4))();
      v173 = 0;
      v141 = (void *)(v174 - 12);
      if ( (int *)(v174 - 12) != &dword_28898C0 )
        v161 = (unsigned int *)(v174 - 4);
            v162 = __ldrex(v161);
          while ( __strex(v162 - 1, v161) );
          v162 = (*v161)--;
        if ( v162 <= 0 )
          j_j_j_j__ZdlPv_9(v141);
      v142 = v25 + 24;
      *(_QWORD *)v142 = v193;
      *(_DWORD *)(v142 + 8) = 16;
      *(_DWORD *)(v142 + 12) = 0;
        v143 = (unsigned int *)(v113 + 8);
            v144 = __ldrex(v143);
          while ( __strex(v144 - 1, v143) );
          v144 = (*v143)--;
        if ( v144 == 1 )
      v29 = v118;
      v145 = (void *)(v177 - 12);
      if ( (int *)(v177 - 12) != &dword_28898C0 )
        v163 = (unsigned int *)(v177 - 4);
            v164 = __ldrex(v163);
          while ( __strex(v164 - 1, v163) );
          v164 = (*v163)--;
        if ( v164 <= 0 )
          j_j_j_j__ZdlPv_9(v145);
      v146 = (void *)(v180 - 12);
      if ( (int *)(v180 - 12) != &dword_28898C0 )
        v165 = (unsigned int *)(v180 - 4);
            v166 = __ldrex(v165);
          while ( __strex(v166 - 1, v165) );
          v166 = (*v165)--;
        if ( v166 <= 0 )
          j_j_j_j__ZdlPv_9(v146);
      v85 = ptr;
    if ( v85 )
      operator delete(v85);
    *(_DWORD *)(v25 + 20) = v29;
    v147 = *(_DWORD *)v25;
    v172 = v25;
    (*(void (__fastcall **)(int))(v147 + 8))(v25);
    ContentManager::generateItems((ContentManager *)v29, (ContentSource *)v25);
    for ( i = *(_QWORD *)(v29 + 11); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 4 )
      ContentView::reload(*(ContentView **)i);
    v149 = *(_QWORD *)(v29 + 9);
    if ( (_DWORD)v149 == HIDWORD(v149) )
      std::vector<std::unique_ptr<ContentSource,std::default_delete<ContentSource>>,std::allocator<std::unique_ptr<ContentSource,std::default_delete<ContentSource>>>>::_M_emplace_back_aux<std::unique_ptr<ContentSource,std::default_delete<ContentSource>>>(
        v168,
        &v172);
      v10 = *(_DWORD *)(v29[9] - 4);
      if ( v172 )
        (*(void (**)(void))(*(_DWORD *)v172 + 4))();
      v172 = 0;
      *(_DWORD *)v149 = v25;
      v29[9] = v149 + 4;
      v10 = *(_DWORD *)v149;
    v172 = 0;
  }
  else
    while ( 1 )
      v10 = *(_DWORD *)v7;
      v11 = *(_DWORD *)(*(_DWORD *)v7 + 16);
      v12 = v11 == 1;
      if ( v11 == 1 )
        v12 = *(_QWORD *)(v10 + 24) == __PAIR__(v4, v5);
      if ( v12 && *(_QWORD *)(v10 + 32) == a4 )
        break;
      v7 += 4;
      if ( v9 == v7 )
        goto LABEL_8;
  return v10;
}


void __fastcall ContentManager::deleteContent(ContentManager *this, const ContentItem *a2)
{
  ContentManager *v2; // r5@1
  const ContentItem *v3; // r6@1
  void *v4; // r0@1
  void *v5; // r4@1
  void *v6; // [sp+4h] [bp-1Ch]@1
  void *v7; // [sp+8h] [bp-18h]@1
  void *v8; // [sp+Ch] [bp-14h]@1

  v2 = this;
  v3 = a2;
  v4 = operator new(4u);
  v5 = v4;
  v4 = (char *)v4 + 4;
  v6 = v5;
  v8 = v4;
  *(_DWORD *)v5 = v3;
  v7 = v4;
  ContentManager::deleteContent((int)v2, (unsigned __int64 *)&v6);
  operator delete(v5);
}


int __fastcall ContentManager::loadContent(ContentManager *this, const InvalidPacksFilterGroup *a2)
{
  ContentManager *v2; // r10@1
  unsigned __int64 *v3; // r9@1
  int v4; // r0@1
  char *v5; // r8@1
  int v6; // r1@1
  unsigned __int64 v7; // kr00_8@2
  int v8; // r6@3
  _BYTE *v9; // r5@4
  _BYTE *v10; // r7@4
  _BYTE *v11; // r2@6
  int v12; // r0@11
  int v13; // r6@11
  ContentView **i; // r5@11
  ContentView **v15; // r7@11
  __int64 v16; // r0@13
  __int64 v18; // [sp+0h] [bp-28h]@11

  v2 = this;
  v3 = (unsigned __int64 *)a2;
  v5 = (char *)this + 32;
  v4 = *((_DWORD *)this + 8);
  v6 = *((_DWORD *)v5 + 1);
  if ( v4 != v6 )
  {
    v7 = *v3;
    do
    {
      v8 = *(_DWORD *)v4;
      if ( *(_DWORD *)(*(_DWORD *)v4 + 16) == 3 )
      {
        v10 = (_BYTE *)(*(_QWORD *)(v8 + 28) >> 32);
        v9 = (_BYTE *)*(_QWORD *)(v8 + 28);
        if ( v10 - v9 == HIDWORD(v7) - (_DWORD)v7 )
        {
          if ( v9 == v10 )
            return v8;
          v11 = (_BYTE *)v7;
          while ( *v9 == *v11 )
          {
            ++v9;
            ++v11;
            if ( v10 == v9 )
              return v8;
          }
        }
      }
      v4 += 4;
    }
    while ( v4 != v6 );
  }
  v12 = MinecraftScreenModel::getResourcePackRepository(*(MinecraftScreenModel **)v2);
  std::make_unique<InvalidResourceSource,ResourcePackRepository &,InvalidPacksFilterGroup const&>(
    (_DWORD *)&v18 + 1,
    v12,
    v3);
  v18 = HIDWORD(v18);
  *(_DWORD *)(v18 + 20) = v2;
  v13 = v18;
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v18 + 8))(v18);
  ContentManager::generateItems(v2, (ContentSource *)v18);
  v15 = (ContentView **)(*(_QWORD *)((char *)v2 + 44) >> 32);
  for ( i = (ContentView **)*(_QWORD *)((char *)v2 + 44); v15 != i; ++i )
    ContentView::reload(*i);
  v16 = *(_QWORD *)((char *)v2 + 36);
  if ( (_DWORD)v16 == HIDWORD(v16) )
    std::vector<std::unique_ptr<ContentSource,std::default_delete<ContentSource>>,std::allocator<std::unique_ptr<ContentSource,std::default_delete<ContentSource>>>>::_M_emplace_back_aux<std::unique_ptr<ContentSource,std::default_delete<ContentSource>>>(
      v5,
      (int *)&v18);
    v8 = *(_DWORD *)(*((_DWORD *)v2 + 9) - 4);
    if ( (_DWORD)v18 )
      (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  else
    LODWORD(v18) = 0;
    *(_DWORD *)v16 = v13;
    *((_DWORD *)v2 + 9) = v16 + 4;
    v8 = *(_DWORD *)v16;
  LODWORD(v18) = 0;
  if ( HIDWORD(v18) )
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)HIDWORD(v18) + 4))(HIDWORD(v18));
  return v8;
}


RakNet *__fastcall ContentManager::getWorldResourceFolder(void **a1, int *a2, int *a3)
{
  void **v3; // r6@1
  int *v4; // r5@1
  int v5; // r1@1
  int v6; // r5@1
  int v7; // r4@1
  int v8; // r3@1
  void *v9; // r0@1
  RakNet *result; // r0@2
  unsigned int *v11; // r2@4
  signed int v12; // r1@6
  int v13; // [sp+4h] [bp-444h]@1
  int v14; // [sp+10h] [bp-438h]@1
  int v15; // [sp+14h] [bp-434h]@1
  int v16; // [sp+18h] [bp-430h]@1
  int v17; // [sp+1Ch] [bp-42Ch]@1
  int v18; // [sp+20h] [bp-428h]@1
  int v19; // [sp+24h] [bp-424h]@1
  char v20; // [sp+2Ch] [bp-41Ch]@1
  int v21; // [sp+30h] [bp-418h]@1
  RakNet *v22; // [sp+434h] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v22 = _stack_chk_guard;
  MinecraftScreenModel::getLevelBasePath((MinecraftScreenModel *)&v13, *a2);
  v5 = *v4;
  v6 = *(_DWORD *)(*v4 - 12);
  v7 = *(_DWORD *)(v13 - 12);
  v8 = *(_DWORD *)(ResourcePackRepository::RESOURCE_PACKS_PATH - 12);
  v14 = v13;
  v15 = v7;
  v16 = v5;
  v17 = v6;
  v18 = ResourcePackRepository::RESOURCE_PACKS_PATH;
  v19 = v8;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v20, (int)&v14, 3);
  sub_21E94B4(v3, (const char *)&v21);
  v9 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v13 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  }
  result = (RakNet *)(_stack_chk_guard - v22);
  if ( _stack_chk_guard != v22 )
    _stack_chk_fail(result);
  return result;
}


char *__fastcall ContentManager::_addContentItem(char *result, int *a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r12@1
  __int64 v4; // kr08_8@1

  v2 = (*((_QWORD *)result + 7))++;
  v3 = *a2;
  *(_QWORD *)(*a2 + 8) = v2;
  v4 = *((_QWORD *)result + 3);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    result = j_j_j__ZNSt6vectorISt10unique_ptrI11ContentItemSt14default_deleteIS1_EESaIS4_EE19_M_emplace_back_auxIJS4_EEEvDpOT_(
               result + 20,
               a2);
  }
  else
    *a2 = 0;
    *(_DWORD *)v4 = v3;
    *((_DWORD *)result + 6) += 4;
  return result;
}


ContentManager *__fastcall ContentManager::~ContentManager(ContentManager *this)
{
  ContentManager *v1; // r4@1
  ResourcePackRepository *v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  int v5; // r1@4
  void *v6; // r0@4
  ContentView **v7; // r5@5 OVERLAPPED
  ContentView **v8; // r6@5 OVERLAPPED
  ContentView *v9; // r0@7
  char *v10; // r5@12 OVERLAPPED
  char *v11; // r6@12 OVERLAPPED
  char *v12; // r5@19 OVERLAPPED
  char *v13; // r6@19 OVERLAPPED
  int v14; // r5@26
  unsigned int *v15; // r1@27
  unsigned int v16; // r0@29
  unsigned int *v17; // r6@33
  unsigned int v18; // r0@35
  unsigned int *v20; // r2@41
  signed int v21; // r1@43
  unsigned int *v22; // r2@45
  signed int v23; // r1@47

  v1 = this;
  v2 = (ResourcePackRepository *)*((_DWORD *)this + 16);
  if ( v2 )
    ResourcePackRepository::unregisterContentManager(v2, v1);
  v3 = *((_DWORD *)v1 + 18);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v20 = (unsigned int *)(v3 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = *((_DWORD *)v1 + 17);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v5 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  *(_QWORD *)&v7 = *(_QWORD *)((char *)v1 + 44);
  if ( v7 != v8 )
    do
      if ( *v7 )
      {
        v9 = ContentView::~ContentView(*v7);
        operator delete((void *)v9);
      }
      *v7 = 0;
      ++v7;
    while ( v8 != v7 );
    v7 = (ContentView **)*((_DWORD *)v1 + 11);
  if ( v7 )
    operator delete(v7);
  *(_QWORD *)&v10 = *((_QWORD *)v1 + 4);
  if ( v10 != v11 )
      if ( *(_DWORD *)v10 )
        (*(void (**)(void))(**(_DWORD **)v10 + 4))();
      *(_DWORD *)v10 = 0;
      v10 += 4;
    while ( v11 != v10 );
    v10 = (char *)*((_DWORD *)v1 + 8);
  if ( v10 )
    operator delete(v10);
  *(_QWORD *)&v12 = *(_QWORD *)((char *)v1 + 20);
  if ( v12 != v13 )
      if ( *(_DWORD *)v12 )
        (*(void (**)(void))(**(_DWORD **)v12 + 4))();
      *(_DWORD *)v12 = 0;
      v12 += 4;
    while ( v13 != v12 );
    v12 = (char *)*((_DWORD *)v1 + 5);
  if ( v12 )
    operator delete(v12);
  v14 = *((_DWORD *)v1 + 1);
  if ( v14 )
    v15 = (unsigned int *)(v14 + 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( &pthread_create )
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      else
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return v1;
}


int __fastcall ContentManager::loadContent(ContentManager *this, const LevelSummary *a2)
{
  ContentManager *v2; // r7@1
  int *v3; // r6@1
  int v4; // r0@1
  char *v5; // r5@1
  int v6; // r1@1
  int v7; // r4@2
  int v8; // r2@2
  bool v9; // zf@2
  size_t v10; // r2@6
  size_t v11; // r2@10
  int v12; // ST18_4@14
  int v13; // ST1C_4@14
  int v14; // r6@14
  int v15; // r9@14
  int v16; // r5@14
  int v17; // r4@14
  unsigned int v18; // r10@14
  __int64 v19; // ST08_8@14
  ContentSource *v20; // r10@14
  ContentManager *v21; // r11@14
  InPackagePackSource *v22; // r4@14
  char *v23; // r0@14
  _BYTE *v25; // r6@16
  unsigned int v26; // r2@16
  unsigned int v27; // r1@18
  unsigned int v28; // r7@18
  char *v29; // r5@24
  int v30; // r4@26
  char *v31; // r4@28
  DirectoryPackSource *v32; // r4@31
  char *v33; // r0@31
  _BYTE *v34; // r6@33
  unsigned int v35; // r2@33
  unsigned int v36; // r1@35
  unsigned int v37; // r7@35
  char *v38; // r5@41
  int v39; // r4@43
  char *v40; // r4@45
  int v41; // r4@48
  DirectoryPackSource *v42; // r4@48
  char *v43; // r0@48
  _BYTE *v44; // r6@50
  unsigned int v45; // r2@50
  unsigned int v46; // r1@52
  unsigned int v47; // r7@52
  char *v48; // r5@58
  int v49; // r4@60
  char *v50; // r4@62
  void *v51; // r0@65
  int v52; // r4@66
  DirectoryPackSource *v53; // r4@66
  char *v54; // r0@66
  _BYTE *v55; // r6@68
  unsigned int v56; // r2@68
  unsigned int v57; // r1@70
  unsigned int v58; // r7@70
  char *v59; // r5@76
  int v60; // r4@78
  char *v61; // r4@80
  void *v62; // r0@83
  int v63; // r4@84
  DirectoryPackSource *v64; // r4@84
  char *v65; // r0@84
  _BYTE *v66; // r6@86
  unsigned int v67; // r2@86
  unsigned int v68; // r1@88
  unsigned int v69; // r7@88
  char *v70; // r5@94
  int v71; // r4@96
  char *v72; // r4@98
  void *v73; // r0@101
  int v74; // r4@102
  int v75; // r1@102
  DirectoryPackSource *v76; // r4@102
  char *v77; // r0@102
  _BYTE *v78; // r6@104
  unsigned int v79; // r2@104
  unsigned int v80; // r1@106
  unsigned int v81; // r7@106
  char *v82; // r5@112
  int v83; // r4@114
  char *v84; // r4@116
  void *v85; // r0@119
  __int64 v86; // kr30_8@120
  MainMenuScreenModel *v87; // r0@120
  unsigned int *v88; // r0@121
  unsigned int v89; // r1@123
  __int64 v90; // r6@126
  int v91; // r4@126
  unsigned int *v92; // r0@127
  unsigned int v93; // r1@129
  void *v94; // r0@132
  unsigned int *v95; // r1@133
  unsigned int v96; // r2@135
  __int64 v97; // r1@138
  ContentCatalogPackSource *v98; // r4@138
  char *v99; // r0@138
  _BYTE *v100; // r6@140
  unsigned int v101; // r2@140
  unsigned int v102; // r1@142
  unsigned int v103; // r7@142
  char *v104; // r5@148
  int v105; // r4@150
  char *v106; // r4@152
  unsigned int *v107; // r1@158
  unsigned int v108; // r0@160
  void *v109; // r4@165
  __int64 v110; // kr40_8@165
  InPackagePackSource *v111; // r4@170
  char *v112; // r0@170
  _BYTE *v114; // r7@172
  unsigned int v115; // r2@172
  unsigned int v116; // r1@174
  unsigned int v117; // r6@174
  char *v118; // r5@180
  int v119; // r4@182
  char *v120; // r4@184
  DirectoryPackSource *v121; // r4@187
  char *v122; // r0@187
  _BYTE *v123; // r7@189
  unsigned int v124; // r2@189
  unsigned int v125; // r1@191
  unsigned int v126; // r6@191
  char *v127; // r5@197
  int v128; // r4@199
  char *v129; // r4@201
  int v130; // r4@204
  DirectoryPackSource *v131; // r4@204
  char *v132; // r0@204
  _BYTE *v133; // r7@206
  unsigned int v134; // r2@206
  unsigned int v135; // r1@208
  unsigned int v136; // r6@208
  char *v137; // r5@214
  int v138; // r4@216
  char *v139; // r4@218
  void *v140; // r0@221
  int v141; // r4@222
  DirectoryPackSource *v142; // r4@222
  char *v143; // r0@222
  _BYTE *v144; // r7@224
  unsigned int v145; // r2@224
  unsigned int v146; // r1@226
  unsigned int v147; // r6@226
  char *v148; // r5@232
  int v149; // r4@234
  char *v150; // r4@236
  void *v151; // r0@239
  int v152; // r4@240
  DirectoryPackSource *v153; // r4@240
  char *v154; // r0@240
  _BYTE *v155; // r7@242
  unsigned int v156; // r2@242
  unsigned int v157; // r1@244
  unsigned int v158; // r6@244
  char *v159; // r5@250
  int v160; // r4@252
  char *v161; // r4@254
  void *v162; // r0@257
  int v163; // r4@258
  int v164; // r1@258
  DirectoryPackSource *v165; // r4@258
  char *v166; // r0@258
  _BYTE *v167; // r7@260
  unsigned int v168; // r2@260
  unsigned int v169; // r1@262
  unsigned int v170; // r6@262
  char *v171; // r5@268
  int v172; // r4@270
  char *v173; // r4@272
  void *v174; // r0@275
  void *v175; // r4@276
  __int64 v176; // kr78_8@276
  __int64 i; // r4@281
  __int64 v178; // r0@283
  unsigned int *v179; // r1@290
  unsigned int v180; // r0@292
  void *v181; // r0@299
  void *v182; // r0@300
  void *v183; // r0@301
  void *v184; // r0@302
  unsigned int *v186; // r2@304
  signed int v187; // r1@306
  unsigned int *v188; // r2@308
  signed int v189; // r1@310
  unsigned int *v190; // r2@312
  signed int v191; // r1@314
  unsigned int *v192; // r2@316
  signed int v193; // r1@318
  unsigned int *v194; // r2@320
  signed int v195; // r1@322
  unsigned int *v196; // r2@324
  signed int v197; // r1@326
  unsigned int *v198; // r2@328
  signed int v199; // r1@330
  unsigned int *v200; // r2@332
  signed int v201; // r1@334
  unsigned int *v202; // r2@336
  signed int v203; // r1@338
  unsigned int *v204; // r2@340
  signed int v205; // r1@342
  unsigned int *v206; // r2@344
  signed int v207; // r1@346
  unsigned int *v208; // r2@348
  signed int v209; // r1@350
  _QWORD *v210; // [sp+18h] [bp-A8h]@14
  __int64 *v211; // [sp+1Ch] [bp-A4h]@168
  ContentSource *v212; // [sp+20h] [bp-A0h]@281
  void *v213; // [sp+24h] [bp-9Ch]@276
  int v214; // [sp+28h] [bp-98h]@276
  int v215; // [sp+2Ch] [bp-94h]@276
  int v216; // [sp+30h] [bp-90h]@258
  int v217; // [sp+34h] [bp-8Ch]@240
  int v218; // [sp+38h] [bp-88h]@222
  int v219; // [sp+3Ch] [bp-84h]@204
  void *ptr; // [sp+40h] [bp-80h]@170
  char *v221; // [sp+44h] [bp-7Ch]@170
  char *v222; // [sp+48h] [bp-78h]@170
  void *v223; // [sp+4Ch] [bp-74h]@165
  int v224; // [sp+50h] [bp-70h]@165
  int v225; // [sp+54h] [bp-6Ch]@165
  void *v226; // [sp+5Ch] [bp-64h]@138
  void (*v227)(void); // [sp+64h] [bp-5Ch]@132
  int v228; // [sp+6Ch] [bp-54h]@102
  int v229; // [sp+70h] [bp-50h]@84
  int v230; // [sp+74h] [bp-4Ch]@66
  int v231; // [sp+78h] [bp-48h]@48
  void *v232; // [sp+7Ch] [bp-44h]@14
  char *v233; // [sp+80h] [bp-40h]@14
  char *v234; // [sp+84h] [bp-3Ch]@14
  int v235; // [sp+88h] [bp-38h]@12
  int v236; // [sp+8Ch] [bp-34h]@8
  int v237; // [sp+90h] [bp-30h]@6
  int v238; // [sp+94h] [bp-2Ch]@6

  v2 = this;
  v3 = (int *)a2;
  v5 = (char *)this + 32;
  v4 = *((_DWORD *)this + 8);
  v6 = *((_DWORD *)v5 + 1);
  if ( v4 == v6 )
  {
LABEL_6:
    ContentManager::getWorldResourceFolder((void **)&v238, (int *)v2, v3);
    ContentManager::getWorldBehaviorFolder((void **)&v237, (int *)v2, v3);
    v10 = *(_DWORD *)(*v3 - 12);
    if ( v10 == *((_DWORD *)LevelSummary::INVALID_LEVEL_ID - 3)
      && !memcmp((const void *)*v3, LevelSummary::INVALID_LEVEL_ID, v10) )
    {
      sub_21E8AF4(&v236, (int *)&Util::EMPTY_STRING);
    }
    else
      ContentManager::getWorldResourcePath((void **)&v236, (int *)v2, v3);
    v11 = *(_DWORD *)(*v3 - 12);
    if ( v11 == *((_DWORD *)LevelSummary::INVALID_LEVEL_ID - 3)
      && !memcmp((const void *)*v3, LevelSummary::INVALID_LEVEL_ID, v11) )
      sub_21E8AF4(&v235, (int *)&Util::EMPTY_STRING);
      ContentManager::getWorldBehaviorPath((void **)&v235, (int *)v2, v3);
    v12 = (int)v5;
    v13 = MinecraftScreenModel::getResourcePackManager(*(MinecraftScreenModel **)v2);
    v14 = MinecraftScreenModel::getResourcePackRepository(*(MinecraftScreenModel **)v2);
    v15 = MainMenuScreenModel::getPackManifestFactory(*(MainMenuScreenModel **)v2);
    v16 = MainMenuScreenModel::getKeyProvider(*(MainMenuScreenModel **)v2);
    v17 = MainMenuScreenModel::getEntitlementManager(*(MainMenuScreenModel **)v2);
    v18 = *((_DWORD *)v2 + 2);
    v19 = __PAIR__(MinecraftScreenModel::getContentTierManager(*(MinecraftScreenModel **)v2), v18);
    v20 = (ContentSource *)operator new(0x60u);
    PackManagerContentSource::PackManagerContentSource((int)v20, v13, v14, v15, v16, v17, v19, 24, 0, v12);
    v232 = 0;
    v233 = 0;
    v234 = 0;
    v21 = v2;
    v22 = PackSourceFactory::createInPackagePackSource(*((_DWORD *)v2 + 4), 1);
    v23 = 0;
    v25 = v232;
    v26 = -(signed int)v232 >> 2;
    if ( !v26 )
      v26 = 1;
    v27 = v26 + ((v233 - (_BYTE *)v232) >> 2);
    v28 = v26 + ((v233 - (_BYTE *)v232) >> 2);
    if ( 0 != v27 >> 30 )
      v28 = 0x3FFFFFFF;
    if ( v27 < v26 )
    if ( v28 )
      if ( v28 >= 0x40000000 )
        sub_21E57F4();
      v29 = (char *)operator new(4 * v28);
      v23 = v233;
      v25 = v232;
      v29 = 0;
    *(_DWORD *)&v29[v23 - v25] = v22;
    v30 = (int)&v29[v23 - v25];
    if ( 0 != (v23 - v25) >> 2 )
      _aeabi_memmove4(v29, v25);
    v31 = (char *)(v30 + 4);
    if ( v25 )
      operator delete(v25);
    v232 = v29;
    v233 = v31;
    v234 = &v29[4 * v28];
    v32 = PackSourceFactory::createDirectoryPackSource(*((_DWORD *)v21 + 4), &v238, 1, 3, 0);
    v33 = v233;
    if ( v233 == v234 )
      v34 = v232;
      v35 = (v233 - (_BYTE *)v232) >> 2;
      if ( !v35 )
        v35 = 1;
      v36 = v35 + ((v233 - (_BYTE *)v232) >> 2);
      v37 = v35 + ((v233 - (_BYTE *)v232) >> 2);
      if ( 0 != v36 >> 30 )
        v37 = 0x3FFFFFFF;
      if ( v36 < v35 )
      if ( v37 )
      {
        if ( v37 >= 0x40000000 )
          sub_21E57F4();
        v38 = (char *)operator new(4 * v37);
        v33 = v233;
        v34 = v232;
      }
      else
        v38 = 0;
      *(_DWORD *)&v38[v33 - v34] = v32;
      v39 = (int)&v38[v33 - v34];
      if ( 0 != (v33 - v34) >> 2 )
        _aeabi_memmove4(v38, v34);
      v40 = (char *)(v39 + 4);
      if ( v34 )
        operator delete(v34);
      v232 = v38;
      v233 = v40;
      v234 = &v38[4 * v37];
      *(_DWORD *)v233 = v32;
      v233 += 4;
    v41 = *((_DWORD *)v21 + 4);
    ResourcePackRepository::getResourcePacksPath((ResourcePackRepository *)&v231, *((int **)v20 + 11));
    v42 = PackSourceFactory::createDirectoryPackSource(v41, &v231, 1, 4, 0);
    v43 = v233;
      v44 = v232;
      v45 = (v233 - (_BYTE *)v232) >> 2;
      if ( !v45 )
        v45 = 1;
      v46 = v45 + ((v233 - (_BYTE *)v232) >> 2);
      v47 = v45 + ((v233 - (_BYTE *)v232) >> 2);
      if ( 0 != v46 >> 30 )
        v47 = 0x3FFFFFFF;
      if ( v46 < v45 )
      if ( v47 )
        if ( v47 >= 0x40000000 )
        v48 = (char *)operator new(4 * v47);
        v43 = v233;
        v44 = v232;
        v48 = 0;
      *(_DWORD *)&v48[v43 - v44] = v42;
      v49 = (int)&v48[v43 - v44];
      if ( 0 != (v43 - v44) >> 2 )
        _aeabi_memmove4(v48, v44);
      v50 = (char *)(v49 + 4);
      if ( v44 )
        operator delete(v44);
      v232 = v48;
      v233 = v50;
      v234 = &v48[4 * v47];
      *(_DWORD *)v233 = v42;
    v51 = (void *)(v231 - 12);
    if ( (int *)(v231 - 12) != &dword_28898C0 )
      v186 = (unsigned int *)(v231 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v187 = __ldrex(v186);
        while ( __strex(v187 - 1, v186) );
        v187 = (*v186)--;
      if ( v187 <= 0 )
        j_j_j_j__ZdlPv_9(v51);
    v52 = *((_DWORD *)v21 + 4);
    ResourcePackRepository::getDevelopmentResourcePacksPath((ResourcePackRepository *)&v230, *((int **)v20 + 11));
    v53 = PackSourceFactory::createDirectoryPackSource(v52, &v230, 1, 2, 1);
    v54 = v233;
      v55 = v232;
      v56 = (v233 - (_BYTE *)v232) >> 2;
      if ( !v56 )
        v56 = 1;
      v57 = v56 + ((v233 - (_BYTE *)v232) >> 2);
      v58 = v56 + ((v233 - (_BYTE *)v232) >> 2);
      if ( 0 != v57 >> 30 )
        v58 = 0x3FFFFFFF;
      if ( v57 < v56 )
      if ( v58 )
        if ( v58 >= 0x40000000 )
        v59 = (char *)operator new(4 * v58);
        v54 = v233;
        v55 = v232;
        v59 = 0;
      *(_DWORD *)&v59[v54 - v55] = v53;
      v60 = (int)&v59[v54 - v55];
      if ( 0 != (v54 - v55) >> 2 )
        _aeabi_memmove4(v59, v55);
      v61 = (char *)(v60 + 4);
      if ( v55 )
        operator delete(v55);
      v232 = v59;
      v233 = v61;
      v234 = &v59[4 * v58];
      *(_DWORD *)v233 = v53;
    v62 = (void *)(v230 - 12);
    if ( (int *)(v230 - 12) != &dword_28898C0 )
      v188 = (unsigned int *)(v230 - 4);
          v189 = __ldrex(v188);
        while ( __strex(v189 - 1, v188) );
        v189 = (*v188)--;
      if ( v189 <= 0 )
        j_j_j_j__ZdlPv_9(v62);
    v63 = *((_DWORD *)v21 + 4);
    ResourcePackRepository::getPremiumPackPath((ResourcePackRepository *)&v229);
    v64 = PackSourceFactory::createDirectoryPackSource(v63, &v229, 1, 6, 0);
    v65 = v233;
      v66 = v232;
      v67 = (v233 - (_BYTE *)v232) >> 2;
      if ( !v67 )
        v67 = 1;
      v68 = v67 + ((v233 - (_BYTE *)v232) >> 2);
      v69 = v67 + ((v233 - (_BYTE *)v232) >> 2);
      if ( 0 != v68 >> 30 )
        v69 = 0x3FFFFFFF;
      if ( v68 < v67 )
      if ( v69 )
        if ( v69 >= 0x40000000 )
        v70 = (char *)operator new(4 * v69);
        v65 = v233;
        v66 = v232;
        v70 = 0;
      *(_DWORD *)&v70[v65 - v66] = v64;
      v71 = (int)&v70[v65 - v66];
      if ( 0 != (v65 - v66) >> 2 )
        _aeabi_memmove4(v70, v66);
      v72 = (char *)(v71 + 4);
      if ( v66 )
        operator delete(v66);
      v232 = v70;
      v233 = v72;
      v234 = &v70[4 * v69];
      *(_DWORD *)v233 = v64;
    v73 = (void *)(v229 - 12);
    if ( (int *)(v229 - 12) != &dword_28898C0 )
      v190 = (unsigned int *)(v229 - 4);
          v191 = __ldrex(v190);
        while ( __strex(v191 - 1, v190) );
        v191 = (*v190)--;
      if ( v191 <= 0 )
        j_j_j_j__ZdlPv_9(v73);
    v74 = *((_DWORD *)v21 + 4);
    v75 = *((_DWORD *)v20 + 11);
    ResourcePackRepository::getPremiumResourcePackPath((ResourcePackRepository *)&v228);
    v76 = PackSourceFactory::createDirectoryPackSource(v74, &v228, 1, 6, 0);
    v77 = v233;
      v78 = v232;
      v79 = (v233 - (_BYTE *)v232) >> 2;
      if ( !v79 )
        v79 = 1;
      v80 = v79 + ((v233 - (_BYTE *)v232) >> 2);
      v81 = v79 + ((v233 - (_BYTE *)v232) >> 2);
      if ( 0 != v80 >> 30 )
        v81 = 0x3FFFFFFF;
      if ( v80 < v79 )
      if ( v81 )
        if ( v81 >= 0x40000000 )
        v82 = (char *)operator new(4 * v81);
        v77 = v233;
        v78 = v232;
        v82 = 0;
      *(_DWORD *)&v82[v77 - v78] = v76;
      v83 = (int)&v82[v77 - v78];
      if ( 0 != (v77 - v78) >> 2 )
        _aeabi_memmove4(v82, v78);
      v84 = (char *)(v83 + 4);
      if ( v78 )
        operator delete(v78);
      v232 = v82;
      v233 = v84;
      v234 = &v82[4 * v81];
      *(_DWORD *)v233 = v76;
    v85 = (void *)(v228 - 12);
    if ( (int *)(v228 - 12) != &dword_28898C0 )
      v192 = (unsigned int *)(v228 - 4);
          v193 = __ldrex(v192);
        while ( __strex(v193 - 1, v192) );
        v193 = (*v192)--;
      if ( v193 <= 0 )
        j_j_j_j__ZdlPv_9(v85);
    v86 = *(_QWORD *)v21;
    v87 = (MainMenuScreenModel *)*(_QWORD *)v21;
    if ( *(_QWORD *)v21 >> 32 )
      v88 = (unsigned int *)(HIDWORD(v86) + 8);
          v89 = __ldrex(v88);
        while ( __strex(v89 + 1, v88) );
        v87 = *(MainMenuScreenModel **)v21;
        ++*v88;
        v87 = (MainMenuScreenModel *)v86;
    v90 = *(_QWORD *)((char *)v21 + 12);
    v91 = MainMenuScreenModel::getEntitlementManager(v87);
    if ( HIDWORD(v86) )
      v92 = (unsigned int *)(HIDWORD(v86) + 8);
          v93 = __ldrex(v92);
        while ( __strex(v93 + 1, v92) );
        ++*v92;
    v227 = 0;
    v94 = operator new(0xCu);
    *(_DWORD *)v94 = v21;
    *(_QWORD *)((char *)v94 + 4) = v86;
      v95 = (unsigned int *)(HIDWORD(v86) + 8);
          v96 = __ldrex(v95);
        while ( __strex(v96 + 1, v95) );
        ++*v95;
    LODWORD(v97) = sub_12D2690;
    v226 = v94;
    HIDWORD(v97) = sub_12D25E0;
    *(_QWORD *)&v227 = v97;
    v98 = PackSourceFactory::createContentCatalogPackSource((unsigned __int64 *)HIDWORD(v90), v90, v91, 1, (int)&v226);
    v99 = v233;
      v100 = v232;
      v101 = (v233 - (_BYTE *)v232) >> 2;
      if ( !v101 )
        v101 = 1;
      v102 = v101 + ((v233 - (_BYTE *)v232) >> 2);
      v103 = v101 + ((v233 - (_BYTE *)v232) >> 2);
      if ( 0 != v102 >> 30 )
        v103 = 0x3FFFFFFF;
      if ( v102 < v101 )
      if ( v103 )
        if ( v103 >= 0x40000000 )
        v104 = (char *)operator new(4 * v103);
        v99 = v233;
        v100 = v232;
        v104 = 0;
      *(_DWORD *)&v104[v99 - v100] = v98;
      v105 = (int)&v104[v99 - v100];
      if ( 0 != (v99 - v100) >> 2 )
        _aeabi_memmove4(v104, v100);
      v106 = (char *)(v105 + 4);
      if ( v100 )
        operator delete(v100);
      v232 = v104;
      v233 = v106;
      v234 = &v104[4 * v103];
      *(_DWORD *)v233 = v98;
    if ( v227 )
      v227();
      v107 = (unsigned int *)(HIDWORD(v86) + 8);
          v108 = __ldrex(v107);
        while ( __strex(v108 - 1, v107) );
        v108 = (*v107)--;
      if ( v108 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v86) + 12))(HIDWORD(v86));
    v225 = 0;
    v224 = 3;
    v109 = operator new(0x10u);
    CompositePackSource::CompositePackSource((int)v109, (int)&v232);
    v223 = v109;
    v110 = *((_QWORD *)v20 + 9);
    if ( (_DWORD)v110 == HIDWORD(v110) )
      std::vector<PackManagerContentSource::PackData,std::allocator<PackManagerContentSource::PackData>>::_M_emplace_back_aux<std::string const&,ContentType,std::unique_ptr<CompositePackSource,std::default_delete<CompositePackSource>>>(
        (__int64 *)((char *)v20 + 68),
        &v236,
        (__int64 *)&v224,
        (int *)&v223);
      __gnu_cxx::new_allocator<PackManagerContentSource::PackData>::construct<PackManagerContentSource::PackData,std::string const&,ContentType,std::unique_ptr<CompositePackSource,std::default_delete<CompositePackSource>>>(
        (int)v20 + 68,
        (int *)v110,
      *((_DWORD *)v20 + 18) += 48;
    v211 = (__int64 *)((char *)v20 + 68);
    if ( v223 )
      (*(void (**)(void))(*(_DWORD *)v223 + 4))();
    ptr = 0;
    v221 = 0;
    v222 = 0;
    v223 = 0;
    v111 = PackSourceFactory::createInPackagePackSource(*((_DWORD *)v21 + 4), 2);
    v112 = 0;
    v114 = ptr;
    v115 = -(signed int)ptr >> 2;
    if ( !v115 )
      v115 = 1;
    v116 = v115 + ((v221 - (_BYTE *)ptr) >> 2);
    v117 = v115 + ((v221 - (_BYTE *)ptr) >> 2);
    if ( 0 != v116 >> 30 )
      v117 = 0x3FFFFFFF;
    if ( v116 < v115 )
    if ( v117 )
      if ( v117 >= 0x40000000 )
      v118 = (char *)operator new(4 * v117);
      v112 = v221;
      v114 = ptr;
      v118 = 0;
    *(_DWORD *)&v118[v112 - v114] = v111;
    v119 = (int)&v118[v112 - v114];
    if ( 0 != (v112 - v114) >> 2 )
      _aeabi_memmove4(v118, v114);
    v120 = (char *)(v119 + 4);
    if ( v114 )
      operator delete(v114);
    ptr = v118;
    v221 = v120;
    v222 = &v118[4 * v117];
    v121 = PackSourceFactory::createDirectoryPackSource(*((_DWORD *)v21 + 4), &v237, 2, 3, 0);
    v122 = v221;
    if ( v221 == v222 )
      v123 = ptr;
      v124 = (v221 - (_BYTE *)ptr) >> 2;
      if ( !v124 )
        v124 = 1;
      v125 = v124 + ((v221 - (_BYTE *)ptr) >> 2);
      v126 = v124 + ((v221 - (_BYTE *)ptr) >> 2);
      if ( 0 != v125 >> 30 )
        v126 = 0x3FFFFFFF;
      if ( v125 < v124 )
      if ( v126 )
        if ( v126 >= 0x40000000 )
        v127 = (char *)operator new(4 * v126);
        v122 = v221;
        v123 = ptr;
        v127 = 0;
      *(_DWORD *)&v127[v122 - v123] = v121;
      v128 = (int)&v127[v122 - v123];
      if ( 0 != (v122 - v123) >> 2 )
        _aeabi_memmove4(v127, v123);
      v129 = (char *)(v128 + 4);
      if ( v123 )
        operator delete(v123);
      ptr = v127;
      v221 = v129;
      v222 = &v127[4 * v126];
      *(_DWORD *)v221 = v121;
      v221 += 4;
    v130 = *((_DWORD *)v21 + 4);
    ResourcePackRepository::getBehaviorPacksPath((ResourcePackRepository *)&v219, *((int **)v20 + 11));
    v131 = PackSourceFactory::createDirectoryPackSource(v130, &v219, 2, 4, 0);
    v132 = v221;
      v133 = ptr;
      v134 = (v221 - (_BYTE *)ptr) >> 2;
      if ( !v134 )
        v134 = 1;
      v135 = v134 + ((v221 - (_BYTE *)ptr) >> 2);
      v136 = v134 + ((v221 - (_BYTE *)ptr) >> 2);
      if ( 0 != v135 >> 30 )
        v136 = 0x3FFFFFFF;
      if ( v135 < v134 )
      if ( v136 )
        if ( v136 >= 0x40000000 )
        v137 = (char *)operator new(4 * v136);
        v132 = v221;
        v133 = ptr;
        v137 = 0;
      *(_DWORD *)&v137[v132 - v133] = v131;
      v138 = (int)&v137[v132 - v133];
      if ( 0 != (v132 - v133) >> 2 )
        _aeabi_memmove4(v137, v133);
      v139 = (char *)(v138 + 4);
      if ( v133 )
        operator delete(v133);
      ptr = v137;
      v221 = v139;
      v222 = &v137[4 * v136];
      *(_DWORD *)v221 = v131;
    v140 = (void *)(v219 - 12);
    if ( (int *)(v219 - 12) != &dword_28898C0 )
      v194 = (unsigned int *)(v219 - 4);
          v195 = __ldrex(v194);
        while ( __strex(v195 - 1, v194) );
        v195 = (*v194)--;
      if ( v195 <= 0 )
        j_j_j_j__ZdlPv_9(v140);
    v141 = *((_DWORD *)v21 + 4);
    ResourcePackRepository::getDevelopmentBehaviorPacksPath((ResourcePackRepository *)&v218, *((int **)v20 + 11));
    v142 = PackSourceFactory::createDirectoryPackSource(v141, &v218, 2, 2, 1);
    v143 = v221;
      v144 = ptr;
      v145 = (v221 - (_BYTE *)ptr) >> 2;
      if ( !v145 )
        v145 = 1;
      v146 = v145 + ((v221 - (_BYTE *)ptr) >> 2);
      v147 = v145 + ((v221 - (_BYTE *)ptr) >> 2);
      if ( 0 != v146 >> 30 )
        v147 = 0x3FFFFFFF;
      if ( v146 < v145 )
      if ( v147 )
        if ( v147 >= 0x40000000 )
        v148 = (char *)operator new(4 * v147);
        v143 = v221;
        v144 = ptr;
        v148 = 0;
      *(_DWORD *)&v148[v143 - v144] = v142;
      v149 = (int)&v148[v143 - v144];
      if ( 0 != (v143 - v144) >> 2 )
        _aeabi_memmove4(v148, v144);
      v150 = (char *)(v149 + 4);
      if ( v144 )
        operator delete(v144);
      ptr = v148;
      v221 = v150;
      v222 = &v148[4 * v147];
      *(_DWORD *)v221 = v142;
    v151 = (void *)(v218 - 12);
    if ( (int *)(v218 - 12) != &dword_28898C0 )
      v196 = (unsigned int *)(v218 - 4);
          v197 = __ldrex(v196);
        while ( __strex(v197 - 1, v196) );
        v197 = (*v196)--;
      if ( v197 <= 0 )
        j_j_j_j__ZdlPv_9(v151);
    v152 = *((_DWORD *)v21 + 4);
    ResourcePackRepository::getPremiumPackPath((ResourcePackRepository *)&v217);
    v153 = PackSourceFactory::createDirectoryPackSource(v152, &v217, 2, 6, 0);
    v154 = v221;
      v155 = ptr;
      v156 = (v221 - (_BYTE *)ptr) >> 2;
      if ( !v156 )
        v156 = 1;
      v157 = v156 + ((v221 - (_BYTE *)ptr) >> 2);
      v158 = v156 + ((v221 - (_BYTE *)ptr) >> 2);
      if ( 0 != v157 >> 30 )
        v158 = 0x3FFFFFFF;
      if ( v157 < v156 )
      if ( v158 )
        if ( v158 >= 0x40000000 )
        v159 = (char *)operator new(4 * v158);
        v154 = v221;
        v155 = ptr;
        v159 = 0;
      *(_DWORD *)&v159[v154 - v155] = v153;
      v160 = (int)&v159[v154 - v155];
      if ( 0 != (v154 - v155) >> 2 )
        _aeabi_memmove4(v159, v155);
      v161 = (char *)(v160 + 4);
      if ( v155 )
        operator delete(v155);
      ptr = v159;
      v221 = v161;
      v222 = &v159[4 * v158];
      *(_DWORD *)v221 = v153;
    v162 = (void *)(v217 - 12);
    if ( (int *)(v217 - 12) != &dword_28898C0 )
      v198 = (unsigned int *)(v217 - 4);
          v199 = __ldrex(v198);
        while ( __strex(v199 - 1, v198) );
        v199 = (*v198)--;
      if ( v199 <= 0 )
        j_j_j_j__ZdlPv_9(v162);
    v163 = *((_DWORD *)v21 + 4);
    v164 = *((_DWORD *)v20 + 11);
    ResourcePackRepository::getPremiumBehaviorPackPath((ResourcePackRepository *)&v216);
    v165 = PackSourceFactory::createDirectoryPackSource(v163, &v216, 2, 6, 0);
    v166 = v233;
      v167 = v232;
      v168 = (v233 - (_BYTE *)v232) >> 2;
      if ( !v168 )
        v168 = 1;
      v169 = v168 + ((v233 - (_BYTE *)v232) >> 2);
      v170 = v168 + ((v233 - (_BYTE *)v232) >> 2);
      if ( 0 != v169 >> 30 )
        v170 = 0x3FFFFFFF;
      if ( v169 < v168 )
      if ( v170 )
        if ( v170 >= 0x40000000 )
        v171 = (char *)operator new(4 * v170);
        v166 = v233;
        v167 = v232;
        v171 = 0;
      *(_DWORD *)&v171[v166 - v167] = v165;
      v172 = (int)&v171[v166 - v167];
      if ( 0 != (v166 - v167) >> 2 )
        _aeabi_memmove4(v171, v167);
      v173 = (char *)(v172 + 4);
      if ( v167 )
        operator delete(v167);
      v232 = v171;
      v233 = v173;
      v234 = &v171[4 * v170];
      *(_DWORD *)v233 = v165;
    v174 = (void *)(v216 - 12);
    if ( (int *)(v216 - 12) != &dword_28898C0 )
      v200 = (unsigned int *)(v216 - 4);
          v201 = __ldrex(v200);
        while ( __strex(v201 - 1, v200) );
        v201 = (*v200)--;
      if ( v201 <= 0 )
        j_j_j_j__ZdlPv_9(v174);
    v215 = 0;
    v214 = 4;
    v175 = operator new(0x10u);
    CompositePackSource::CompositePackSource((int)v175, (int)&ptr);
    v213 = v175;
    v176 = *((_QWORD *)v20 + 9);
    if ( (_DWORD)v176 == HIDWORD(v176) )
        v211,
        &v235,
        (__int64 *)&v214,
        (int *)&v213);
        (int)v211,
        (int *)v176,
    if ( v213 )
      (*(void (**)(void))(*(_DWORD *)v213 + 4))();
    v212 = v20;
    v213 = 0;
    *((_DWORD *)v20 + 5) = v21;
    (*(void (__fastcall **)(ContentSource *))(*(_DWORD *)v20 + 8))(v20);
    ContentManager::generateItems(v21, v20);
    for ( i = *(_QWORD *)((char *)v21 + 44); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 4 )
      ContentView::reload(*(ContentView **)i);
    v178 = *(_QWORD *)((char *)v21 + 36);
    if ( (_DWORD)v178 == HIDWORD(v178) )
      std::vector<std::unique_ptr<ContentSource,std::default_delete<ContentSource>>,std::allocator<std::unique_ptr<ContentSource,std::default_delete<ContentSource>>>>::_M_emplace_back_aux<std::unique_ptr<ContentSource,std::default_delete<ContentSource>>>(
        v210,
        (int *)&v212);
      v7 = *(_DWORD *)(*((_DWORD *)v21 + 9) - 4);
      if ( v212 )
        (*(void (**)(void))(*(_DWORD *)v212 + 4))();
      v212 = 0;
      *(_DWORD *)v178 = v20;
      *((_DWORD *)v21 + 9) = v178 + 4;
      v7 = *(_DWORD *)v178;
    v212 = 0;
    if ( ptr )
      operator delete(ptr);
      v179 = (unsigned int *)(HIDWORD(v86) + 8);
          v180 = __ldrex(v179);
        while ( __strex(v180 - 1, v179) );
        v180 = (*v179)--;
      if ( v180 == 1 )
    if ( v232 )
      operator delete(v232);
    v181 = (void *)(v235 - 12);
    if ( (int *)(v235 - 12) != &dword_28898C0 )
      v202 = (unsigned int *)(v235 - 4);
          v203 = __ldrex(v202);
        while ( __strex(v203 - 1, v202) );
        v203 = (*v202)--;
      if ( v203 <= 0 )
        j_j_j_j__ZdlPv_9(v181);
    v182 = (void *)(v236 - 12);
    if ( (int *)(v236 - 12) != &dword_28898C0 )
      v204 = (unsigned int *)(v236 - 4);
          v205 = __ldrex(v204);
        while ( __strex(v205 - 1, v204) );
        v205 = (*v204)--;
      if ( v205 <= 0 )
        j_j_j_j__ZdlPv_9(v182);
    v183 = (void *)(v237 - 12);
    if ( (int *)(v237 - 12) != &dword_28898C0 )
      v206 = (unsigned int *)(v237 - 4);
          v207 = __ldrex(v206);
        while ( __strex(v207 - 1, v206) );
        v207 = (*v206)--;
      if ( v207 <= 0 )
        j_j_j_j__ZdlPv_9(v183);
    v184 = (void *)(v238 - 12);
    if ( (int *)(v238 - 12) != &dword_28898C0 )
      v208 = (unsigned int *)(v238 - 4);
          v209 = __ldrex(v208);
        while ( __strex(v209 - 1, v208) );
        v209 = (*v208)--;
      if ( v209 <= 0 )
        j_j_j_j__ZdlPv_9(v184);
  }
  else
    while ( 1 )
      v7 = *(_DWORD *)v4;
      v8 = *(_DWORD *)(*(_DWORD *)v4 + 16);
      v9 = v8 == 1;
      if ( v8 == 1 )
        v9 = *(_QWORD *)(v7 + 32) == 8LL;
      if ( v9 )
        break;
      v4 += 4;
      if ( v6 == v4 )
        goto LABEL_6;
  return v7;
}


void __fastcall ContentManager::reloadItems(ContentManager *this)
{
  ContentManager::reloadItems(this);
}


void __fastcall ContentManager::reloadSources(ContentManager *this, int a2)
{
  ContentManager::reloadSources(this, a2);
}


int __fastcall ContentManager::reloadViews(int result)
{
  __int64 i; // r4@1
  ContentView *v2; // t1@2

  for ( i = *(_QWORD *)(result + 44); HIDWORD(i) != (_DWORD)i; result = ContentView::reload(v2) )
  {
    v2 = *(ContentView **)i;
    LODWORD(i) = i + 4;
  }
  return result;
}


void __fastcall ContentManager::generateItems(ContentManager *this, ContentSource *a2)
{
  int v2; // r11@1
  int v3; // lr@1
  __int64 v4; // kr00_8@2
  int v5; // r2@3
  _DWORD *v6; // lr@7
  int v7; // r2@8
  ContentManager *v8; // r10@9
  _DWORD *v9; // r8@9
  _DWORD *v10; // r9@10
  int v11; // r4@10
  int v12; // r12@10
  unsigned int v13; // r10@11
  unsigned int v14; // r5@12
  int v15; // r3@12
  unsigned int v16; // r3@16
  int v17; // r4@16
  unsigned int v18; // r3@20
  unsigned int v19; // r3@24
  unsigned __int8 v20; // vf@28
  unsigned int v21; // r6@32
  int v22; // r2@32
  unsigned int v23; // r6@38
  unsigned int v24; // r7@45
  unsigned int v25; // r1@45
  ContentManager *v26; // r11@56
  _DWORD *v27; // r10@56
  int v28; // r12@58
  _DWORD *v29; // r4@58
  int v30; // r0@59
  int v31; // r2@59
  unsigned int v32; // r4@60
  unsigned __int64 *v33; // r3@60
  unsigned int v34; // r2@60
  __int64 v35; // r6@62
  int v36; // r0@65
  _DWORD *v37; // r4@71
  _DWORD *v38; // r7@73
  ContentSource *v39; // r5@78
  int v40; // r1@78
  void *v41; // r4@78
  void *v42; // r6@78
  ContentManager *v43; // r8@79
  __int64 v44; // r0@81
  int v45; // r11@81
  void *v46; // r4@83
  char *v47; // r7@83
  unsigned int v48; // r2@83
  unsigned int v49; // r1@85
  unsigned int v50; // r10@85
  char *v51; // r11@92
  int v52; // r11@94
  int v53; // r0@96
  int v54; // r0@97
  __int64 v55; // r1@97
  int *v56; // r1@97 OVERLAPPED
  int v57; // r4@104
  _DWORD *v58; // [sp+4h] [bp-44h]@1
  void *v59; // [sp+4h] [bp-44h]@78
  char *v60; // [sp+8h] [bp-40h]@1
  ContentManager *v61; // [sp+Ch] [bp-3Ch]@2
  int v62; // [sp+10h] [bp-38h]@97
  void *v63; // [sp+14h] [bp-34h]@78
  void *v64; // [sp+18h] [bp-30h]@78
  ContentSource *v65; // [sp+20h] [bp-28h]@1

  v65 = a2;
  v2 = *((_DWORD *)this + 5);
  v60 = (char *)this + 20;
  v58 = (_DWORD *)*((_DWORD *)this + 6);
  v3 = ((signed int)v58 - v2) >> 4;
  if ( v3 < 1 )
  {
    v61 = this;
  }
  else
    v4 = *(_QWORD *)((char *)a2 + 4);
    if ( HIDWORD(v4) != (_DWORD)v4 )
    {
      v13 = (HIDWORD(v4) - (signed int)v4) >> 2;
LABEL_12:
      v14 = 0;
      v15 = v4;
      do
      {
        if ( *(_DWORD *)v15 && *(_QWORD *)(*(_DWORD *)v2 + 8) == *(_QWORD *)(*(_DWORD *)v15 + 8) )
        {
          v9 = (_DWORD *)v2;
          *(_DWORD *)v15 = 0;
          goto LABEL_52;
        }
        ++v14;
        v15 += 4;
      }
      while ( v14 < v13 );
      v16 = 0;
      v9 = (_DWORD *)(v2 + 4);
      v17 = v4;
      while ( !*(_DWORD *)v17 || *(_QWORD *)(*(_DWORD *)v17 + 8) != *(_QWORD *)(*(_DWORD *)(v2 + 4) + 8) )
        ++v16;
        v17 += 4;
        if ( v16 >= v13 )
          v18 = 0;
          v9 = (_DWORD *)(v2 + 8);
          v17 = v4;
          while ( !*(_DWORD *)v17
               || *(_QWORD *)(*(_DWORD *)(v2 + 8) + 8) != __PAIR__(
                                                            (unsigned int)(*(_QWORD *)(*(_DWORD *)v17 + 8) >> 32) ^ (unsigned int)(*(_QWORD *)(*(_DWORD *)(v2 + 8) + 8) >> 32),
                                                            (unsigned int)*(_QWORD *)(*(_DWORD *)v17 + 8)) )
          {
            ++v18;
            v17 += 4;
            if ( v18 >= v13 )
            {
              v19 = 0;
              v9 = (_DWORD *)(v2 + 12);
              v17 = v4;
              while ( !*(_DWORD *)v17
                   || *(_QWORD *)(*(_DWORD *)(v2 + 12) + 8) != __PAIR__(
                                                                 (unsigned int)(*(_QWORD *)(*(_DWORD *)v17 + 8) >> 32) ^ (unsigned int)(*(_QWORD *)(*(_DWORD *)(v2 + 12) + 8) >> 32),
                                                                 (unsigned int)*(_QWORD *)(*(_DWORD *)v17 + 8)) )
              {
                ++v19;
                v17 += 4;
                if ( v19 >= v13 )
                {
                  v20 = __OFSUB__(v3--, 1);
                  v2 += 16;
                  if ( (unsigned __int8)((v3 < 0) ^ v20) | (v3 == 0) )
                    goto LABEL_7;
                  goto LABEL_12;
                }
              }
              goto LABEL_50;
            }
          }
          break;
LABEL_50:
      *(_DWORD *)v17 = 0;
LABEL_52:
      v8 = this;
      v6 = v58;
      goto LABEL_55;
    }
    v5 = v3 + 1;
    do
      --v5;
      v2 += 16;
    while ( v5 > 1 );
LABEL_7:
  v6 = (_DWORD *)*((_DWORD *)this + 6);
  if ( 1 == ((signed int)v58 - v2) >> 2 )
    v12 = *(_QWORD *)((char *)a2 + 4) >> 32;
    v11 = *(_QWORD *)((char *)a2 + 4);
    v8 = v61;
    v7 = ((signed int)v58 - v2) >> 2;
    if ( v7 == 3 )
      v12 = *(_QWORD *)((char *)a2 + 4) >> 32;
      v11 = *(_QWORD *)((char *)a2 + 4);
      v10 = (_DWORD *)*((_DWORD *)this + 6);
      v8 = v61;
      if ( v12 != v11 )
        v21 = 0;
        v22 = *(_QWORD *)((char *)a2 + 4);
        while ( !*(_DWORD *)v22 || *(_QWORD *)(*(_DWORD *)v2 + 8) != *(_QWORD *)(*(_DWORD *)v22 + 8) )
          ++v21;
          v22 += 4;
          if ( v21 >= (v12 - v11) >> 2 )
            goto LABEL_36;
        goto LABEL_53;
LABEL_36:
      v2 += 4;
    else
      v9 = (_DWORD *)*((_DWORD *)this + 6);
      if ( v7 != 2 )
        goto LABEL_55;
    if ( v12 != v11 )
      v23 = 0;
      v22 = v11;
      while ( !*(_DWORD *)v22 || *(_QWORD *)(*(_DWORD *)v2 + 8) != *(_QWORD *)(*(_DWORD *)v22 + 8) )
        ++v23;
        v22 += 4;
        if ( v23 >= (v12 - v11) >> 2 )
          goto LABEL_42;
LABEL_53:
      v9 = (_DWORD *)v2;
      *(_DWORD *)v22 = 0;
      v6 = v10;
LABEL_42:
    v2 += 4;
    v6 = v10;
  v9 = v6;
  if ( v12 != v11 )
    v24 = 0;
    v25 = (v12 - v11) >> 2;
    while ( !*(_DWORD *)v11 || *(_QWORD *)(*(_DWORD *)v2 + 8) != *(_QWORD *)(*(_DWORD *)v11 + 8) )
      ++v24;
      v11 += 4;
      if ( v24 >= v25 )
        v9 = v6;
    v9 = (_DWORD *)v2;
    *(_DWORD *)v11 = 0;
LABEL_55:
  if ( v9 != v6 )
    v26 = v8;
    v27 = v9 + 1;
    while ( v27 != v6 )
      v31 = *(_QWORD *)((char *)v65 + 4) >> 32;
      v30 = *(_QWORD *)((char *)v65 + 4);
      if ( v31 == v30 )
        v28 = *v27;
        v29 = v6;
LABEL_65:
        *v27 = 0;
        v36 = *v9;
        *v9 = v28;
        if ( v36 )
          (*(void (**)(void))(*(_DWORD *)v36 + 4))();
        ++v27;
        ++v9;
        v6 = v29;
      else
        v32 = 0;
        v33 = (unsigned __int64 *)(*v27 + 8);
        v34 = (v31 - v30) >> 2;
        while ( 1 )
          if ( *(_DWORD *)v30 )
            LODWORD(v35) = *(_QWORD *)(*(_DWORD *)v30 + 8) >> 32;
            HIDWORD(v35) = *(_QWORD *)(*(_DWORD *)v30 + 8) ^ *v33;
            if ( v35 == *v33 >> 32 )
              break;
          ++v32;
          v30 += 4;
          if ( v32 >= v34 )
            v29 = v6;
            goto LABEL_65;
        *(_DWORD *)v30 = 0;
    v8 = v26;
  v37 = (_DWORD *)*((_DWORD *)v8 + 6);
  if ( v9 != v37 )
    if ( v37 != v9 )
      v38 = v9;
        if ( *v38 )
          (*(void (**)(void))(*(_DWORD *)*v38 + 4))();
        *v38 = 0;
        ++v38;
      while ( v37 != v38 );
    *((_DWORD *)v8 + 6) = v9;
  v39 = v65;
  v40 = (int)v65;
  *((_DWORD *)v65 + 2) = *((_DWORD *)v65 + 1);
  (*(void (__fastcall **)(void **))(*(_DWORD *)v40 + 12))(&v63);
  v41 = v64;
  v42 = v63;
  v59 = v64;
  if ( v63 != v64 )
    v43 = (ContentManager *)((char *)v8 + 56);
    while ( 1 )
      v44 = *((_QWORD *)v39 + 1);
      v45 = *(_DWORD *)v42;
      if ( (_DWORD)v44 == HIDWORD(v44) )
        v46 = (void *)*((_DWORD *)v39 + 1);
        v47 = 0;
        v48 = ((signed int)v44 - (signed int)v46) >> 2;
        if ( !v48 )
          v48 = 1;
        HIDWORD(v44) = v48 + (((signed int)v44 - (signed int)v46) >> 2);
        v50 = v48 + (((signed int)v44 - (signed int)v46) >> 2);
        if ( 0 != HIDWORD(v44) >> 30 )
          v50 = 0x3FFFFFFF;
        if ( v49 < v48 )
        if ( v50 )
          if ( v50 >= 0x40000000 )
            sub_21E57F4();
          v47 = (char *)operator new(4 * v50);
          LODWORD(v44) = *(_QWORD *)((char *)v39 + 4) >> 32;
          v46 = (void *)*(_QWORD *)((char *)v39 + 4);
        *(_DWORD *)&v47[v44 - (_DWORD)v46] = v45;
        v51 = &v47[v44 - (_DWORD)v46];
        if ( 0 != ((signed int)v44 - (signed int)v46) >> 2 )
          _aeabi_memmove4(v47, v46);
        v52 = (int)(v51 + 4);
        if ( v46 )
          operator delete(v46);
        *((_DWORD *)v39 + 1) = v47;
        *((_DWORD *)v39 + 2) = v52;
        v53 = (int)&v47[4 * v50];
        v8 = v61;
        v41 = v59;
        *((_DWORD *)v39 + 3) = v53;
        *(_DWORD *)v44 = v45;
        *((_DWORD *)v39 + 2) += 4;
      v54 = *(_DWORD *)v42;
      *(_DWORD *)v42 = 0;
      v62 = v54;
      v55 = (*(_QWORD *)v43)++;
      *(_QWORD *)(v54 + 8) = v55;
      *(_QWORD *)&v56 = *((_QWORD *)v8 + 3);
      if ( v56 == (int *)HIDWORD(v55) )
        std::vector<std::unique_ptr<ContentItem,std::default_delete<ContentItem>>,std::allocator<std::unique_ptr<ContentItem,std::default_delete<ContentItem>>>>::_M_emplace_back_aux<std::unique_ptr<ContentItem,std::default_delete<ContentItem>>>(
          v60,
          &v62);
        if ( v62 )
          (*(void (**)(void))(*(_DWORD *)v62 + 4))();
        v62 = 0;
        *v56 = v54;
        *((_DWORD *)v8 + 6) = v56 + 1;
      v42 = (char *)v42 + 4;
      v62 = 0;
      if ( v41 == v42 )
        break;
      v39 = v65;
    v42 = v64;
    v57 = (int)v63;
    if ( v63 != v64 )
        if ( *(_DWORD *)v57 )
          (*(void (**)(void))(**(_DWORD **)v57 + 4))();
        *(_DWORD *)v57 = 0;
        v57 += 4;
      while ( v42 != (void *)v57 );
      v42 = v63;
  if ( v42 )
    operator delete(v42);
}


int __fastcall ContentManager::populateDependencies(__int64 this)
{
  int v1; // r5@1
  int v2; // r7@1
  bool v3; // cf@3
  bool v4; // zf@3
  signed __int64 v5; // r2@3
  signed int v6; // r3@6
  int v7; // r4@14
  signed int v8; // r1@17
  int v9; // r9@22 OVERLAPPED
  int v10; // r10@22 OVERLAPPED
  int v11; // r8@23
  signed int v12; // r1@26
  const PackManifest *v13; // r1@29
  __int64 v14; // r0@31
  void *v15; // r6@33
  char *v16; // r5@33
  unsigned int v17; // r2@33
  unsigned int v18; // r1@35
  unsigned int v19; // r11@35
  char *v20; // r1@42
  char *v21; // ST00_4@43
  int v22; // r1@44
  void *v23; // r0@45
  int v24; // r6@45
  int v25; // r0@46
  __int64 v26; // r0@47
  void *v27; // r11@49
  char *v28; // r5@49
  unsigned int v29; // r2@49
  unsigned int v30; // r1@51
  unsigned int v31; // r6@51
  char *v32; // r8@58
  int v33; // r8@60
  int v35; // [sp+4h] [bp-2Ch]@1
  int v36; // [sp+8h] [bp-28h]@1

  v35 = this;
  v1 = *(_QWORD *)(this + 20) >> 32;
  v2 = *(_QWORD *)(this + 20);
  v36 = v1;
  if ( v2 != v1 )
  {
    LODWORD(this) = *(_QWORD *)(this + 20);
    do
    {
      HIDWORD(this) = *(_DWORD *)this;
      LODWORD(this) = this + 4;
      v5 = *(_QWORD *)(HIDWORD(this) + 32) - 3LL;
      v3 = (unsigned int)v5 >= 1;
      v4 = (_DWORD)v5 == 1;
      LODWORD(v5) = 0;
      if ( !v4 && v3 )
        LODWORD(v5) = 1;
      if ( HIDWORD(v5) )
        v6 = 1;
      else
        v6 = v5;
      if ( !v6 )
      {
        *(_DWORD *)(HIDWORD(this) + 324) = *(_DWORD *)(HIDWORD(this) + 320);
        LODWORD(v5) = *(_DWORD *)(HIDWORD(this) + 332);
        *(_DWORD *)(HIDWORD(this) + 336) = v5;
      }
    }
    while ( v1 != (_DWORD)this );
    while ( v2 != v1 )
      v7 = *(_DWORD *)v2;
      this = *(_QWORD *)(*(_DWORD *)v2 + 32) - 3LL;
      v3 = (unsigned int)this >= 1;
      v4 = (_DWORD)this == 1;
      LODWORD(this) = 0;
        LODWORD(this) = 1;
      if ( HIDWORD(this) )
        v8 = 1;
        v8 = this;
      if ( !v8 )
        LODWORD(this) = *(_DWORD *)(v7 + 60);
        if ( (_DWORD)this )
        {
          LODWORD(this) = *(_BYTE *)(v7 + 48);
          if ( !(this & 1) )
          {
            LODWORD(this) = v35;
            for ( *(_QWORD *)&v9 = *(_QWORD *)(v35 + 20); v10 != v9; v9 += 4 )
            {
              v11 = *(_DWORD *)v9;
              this = *(_QWORD *)(*(_DWORD *)v9 + 32) - 3LL;
              v3 = (unsigned int)this >= 1;
              v4 = (_DWORD)this == 1;
              LODWORD(this) = 0;
              if ( !v4 && v3 )
                LODWORD(this) = 1;
              if ( HIDWORD(this) )
                v12 = 1;
              else
                v12 = this;
              if ( !v12 )
              {
                v13 = *(const PackManifest **)(v11 + 60);
                if ( v13 )
                {
                  LODWORD(this) = PackDependencyManager::packIsDependedUpon(
                                    *(PackDependencyManager **)(v7 + 60),
                                    v13,
                                    (const PackManifest *)v5);
                  if ( (_DWORD)this == 1 )
                  {
                    v14 = *(_QWORD *)(v11 + 324);
                    if ( (_DWORD)v14 == HIDWORD(v14) )
                    {
                      v15 = *(void **)(v11 + 320);
                      v16 = 0;
                      v17 = ((signed int)v14 - (signed int)v15) >> 2;
                      if ( !v17 )
                        v17 = 1;
                      HIDWORD(v14) = v17 + (((signed int)v14 - (signed int)v15) >> 2);
                      v19 = v17 + (((signed int)v14 - (signed int)v15) >> 2);
                      if ( 0 != HIDWORD(v14) >> 30 )
                        v19 = 0x3FFFFFFF;
                      if ( v18 < v17 )
                      if ( v19 )
                      {
                        if ( v19 >= 0x40000000 )
                          goto LABEL_66;
                        v16 = (char *)operator new(4 * v19);
                        LODWORD(v14) = *(_QWORD *)(v11 + 320) >> 32;
                        v15 = (void *)*(_QWORD *)(v11 + 320);
                      }
                      LODWORD(v5) = v14 - (_DWORD)v15;
                      HIDWORD(v14) = &v16[v5];
                      *(_DWORD *)&v16[v5] = v7;
                      if ( ((signed int)v14 - (signed int)v15) >> 2 )
                        v21 = &v16[v5];
                        _aeabi_memmove4(v16, v15);
                        v20 = v21;
                      v22 = (int)(v20 + 4);
                      if ( v15 )
                        v23 = v15;
                        v24 = v22;
                        operator delete(v23);
                        v22 = v24;
                      *(_DWORD *)(v11 + 320) = v16;
                      *(_DWORD *)(v11 + 324) = v22;
                      v25 = (int)&v16[4 * v19];
                      v1 = v36;
                      *(_DWORD *)(v11 + 328) = v25;
                    }
                    else
                      *(_DWORD *)v14 = v7;
                      *(_DWORD *)(v11 + 324) += 4;
                    v26 = *(_QWORD *)(v7 + 336);
                    if ( (_DWORD)v26 == HIDWORD(v26) )
                      v27 = *(void **)(v7 + 332);
                      v28 = 0;
                      v29 = ((signed int)v26 - (signed int)v27) >> 2;
                      if ( !v29 )
                        v29 = 1;
                      HIDWORD(v26) = v29 + (((signed int)v26 - (signed int)v27) >> 2);
                      v31 = v29 + (((signed int)v26 - (signed int)v27) >> 2);
                      if ( 0 != HIDWORD(v26) >> 30 )
                        v31 = 0x3FFFFFFF;
                      if ( v30 < v29 )
                      if ( v31 )
                        if ( v31 >= 0x40000000 )
LABEL_66:
                          sub_21E57F4();
                        v28 = (char *)operator new(4 * v31);
                        LODWORD(v26) = *(_QWORD *)(v7 + 332) >> 32;
                        v27 = (void *)*(_QWORD *)(v7 + 332);
                      LODWORD(v5) = v26 - (_DWORD)v27;
                      *(_DWORD *)&v28[v26 - (_DWORD)v27] = v11;
                      v32 = &v28[v26 - (_DWORD)v27];
                      if ( ((signed int)v26 - (signed int)v27) >> 2 )
                        _aeabi_memmove4(v28, v27);
                      v33 = (int)(v32 + 4);
                      if ( v27 )
                        operator delete(v27);
                      *(_DWORD *)(v7 + 332) = v28;
                      *(_DWORD *)(v7 + 336) = v33;
                      LODWORD(this) = &v28[4 * v31];
                      *(_DWORD *)(v7 + 340) = this;
                      *(_DWORD *)this = v11;
                      LODWORD(this) = *(_DWORD *)(v7 + 336) + 4;
                      *(_DWORD *)(v7 + 336) = this;
                  }
                }
              }
            }
          }
        }
      v2 += 4;
  }
  return this;
}


int __fastcall ContentManager::ContentManager(int a1, int a2, __int64 a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r1@1
  unsigned int *v7; // r1@2
  unsigned int v8; // r7@4
  ResourcePackRepository *v9; // r0@7

  v5 = a1;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v6 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 4) = v6;
  if ( v6 )
  {
    v7 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
    }
    else
      ++*v7;
  }
  *(_QWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 16) = a4;
  _aeabi_memclr4(a1 + 20, 36);
  *(_DWORD *)(v5 + 56) = 1;
  *(_DWORD *)(v5 + 60) = 0;
  *(_DWORD *)(v5 + 64) = a5;
  sub_21E94B4((void **)(v5 + 68), "/world_resource_packs.json");
  sub_21E94B4((void **)(v5 + 72), "/world_behavior_packs.json");
  v9 = *(ResourcePackRepository **)(v5 + 64);
  if ( v9 )
    ResourcePackRepository::registerContentManager(v9, (ContentManager *)v5);
  return v5;
}


char *__fastcall ContentManager::getSources(ContentManager *this)
{
  return (char *)this + 32;
}


void __fastcall ContentManager::reloadItems(ContentManager *this)
{
  ContentManager *v1; // r4@1
  ContentSource **v2; // r5@1 OVERLAPPED
  ContentSource **v3; // r6@1 OVERLAPPED
  ContentSource *v4; // t1@2
  ContentView **v5; // r4@3
  ContentView **v6; // r5@3
  __int64 v7; // kr00_8@3
  ContentView *v8; // t1@4

  v1 = this;
  *(_QWORD *)&v2 = *((_QWORD *)this + 4);
  while ( v3 != v2 )
  {
    v4 = *v2;
    ++v2;
    ContentManager::generateItems(v1, v4);
  }
  v7 = *(_QWORD *)((char *)v1 + 44);
  v5 = (ContentView **)(*(_QWORD *)((char *)v1 + 44) >> 32);
  v6 = (ContentView **)v7;
  while ( v5 != v6 )
    v8 = *v6;
    ++v6;
    ContentView::reload(v8);
}


int __fastcall ContentManager::getContentView(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r8@1
  __int64 v4; // r0@1
  unsigned int v5; // r5@3
  int v6; // r11@3
  char *v7; // r10@3
  int v8; // r7@5
  _DWORD *v9; // r4@8
  signed int v10; // r10@8
  signed int v11; // r11@8
  unsigned int v12; // r0@8
  unsigned int v13; // r1@10
  unsigned int v14; // r6@10
  void *v15; // r7@26
  int v16; // r12@26
  int v17; // r0@26
  void (__fastcall *v18)(__int64 *, int, signed int); // r3@26
  int v19; // r1@27
  int v20; // r2@29
  void (*v21)(void); // r3@29
  int v22; // r1@29
  __int64 v23; // r0@31
  int v24; // r4@32
  ContentView *v25; // r0@34
  int v27; // [sp+4h] [bp-44h]@1
  _BYTE *ptr; // [sp+8h] [bp-40h]@2
  ContentView *v29; // [sp+Ch] [bp-3Ch]@26
  __int64 v30; // [sp+10h] [bp-38h]@27
  void (*v31)(void); // [sp+18h] [bp-30h]@26
  int v32; // [sp+1Ch] [bp-2Ch]@27

  v2 = a1;
  v3 = a2;
  v27 = a1;
  v4 = *(_QWORD *)(a1 + 20);
  if ( HIDWORD(v4) == (_DWORD)v4 )
  {
    ptr = 0;
  }
  else
    v5 = 0;
    v6 = 0;
    v7 = 0;
    do
    {
      if ( !*(_DWORD *)(v3 + 8) )
        sub_21E5F48();
      v8 = *(_DWORD *)(v4 + 4 * v5);
      if ( (*(int (__fastcall **)(int, int))(v3 + 12))(v3, v8) == 1 )
      {
        if ( v7 == (char *)v6 )
        {
          v9 = 0;
          v10 = v7 - ptr;
          v11 = v10 >> 2;
          v12 = v10 >> 2;
          if ( !(v10 >> 2) )
            v12 = 1;
          v13 = v12 + (v10 >> 2);
          v14 = v12 + (v10 >> 2);
          if ( 0 != v13 >> 30 )
            v14 = 0x3FFFFFFF;
          if ( v13 < v12 )
          if ( v14 )
          {
            if ( v14 >= 0x40000000 )
              sub_21E57F4();
            v9 = operator new(4 * v14);
          }
          v9[v11] = v8;
          if ( v11 )
            _aeabi_memmove4(v9, ptr);
          v7 = (char *)&v9[v11 + 1];
          if ( ptr )
            operator delete(ptr);
          v6 = (int)&v9[v14];
          ptr = v9;
          v2 = v27;
        }
        else
          *(_DWORD *)v7 = v8;
          v7 += 4;
      }
      v4 = *(_QWORD *)(v2 + 20);
      ++v5;
    }
    while ( v5 < (HIDWORD(v4) - (signed int)v4) >> 2 );
  v15 = operator new(0x58u);
  ContentView::ContentView((int)v15, v2);
  v17 = 0;
  v29 = (ContentView *)v15;
  v31 = 0;
  v18 = *(void (__fastcall **)(__int64 *, int, signed int))(v3 + 8);
  if ( v18 )
    v18(&v30, v3, 2);
    v17 = *(_DWORD *)(v3 + 12);
    v32 = *(_DWORD *)(v3 + 12);
    v19 = *(_DWORD *)(v3 + 8);
    v31 = *(void (**)(void))(v3 + 8);
    v18 = (void (__fastcall *)(__int64 *, int, signed int))HIDWORD(v30);
    v16 = v30;
    v19 = 0;
  v20 = (int)v15 + 16;
  v30 = *((_QWORD *)v15 + 2);
  *(_DWORD *)v20 = v16;
  *(_DWORD *)(v20 + 4) = v18;
  v21 = (void (*)(void))*((_DWORD *)v15 + 6);
  *((_DWORD *)v15 + 6) = v19;
  v22 = *((_DWORD *)v15 + 7);
  v31 = v21;
  v32 = v22;
  *((_DWORD *)v15 + 7) = v17;
  if ( v21 )
    v21();
  ContentView::reload((ContentView *)v15);
  v23 = *(_QWORD *)(v2 + 48);
  if ( (_DWORD)v23 == HIDWORD(v23) )
    std::vector<std::unique_ptr<ContentView,std::default_delete<ContentView>>,std::allocator<std::unique_ptr<ContentView,std::default_delete<ContentView>>>>::_M_emplace_back_aux<std::unique_ptr<ContentView,std::default_delete<ContentView>>>(
      (_QWORD *)(v2 + 44),
      (int *)&v29);
    v24 = *(_DWORD *)(*(_DWORD *)(v2 + 48) - 4);
    if ( v29 )
      v25 = ContentView::~ContentView(v29);
      operator delete((void *)v25);
    v29 = 0;
    *(_DWORD *)v23 = v15;
    *(_DWORD *)(v2 + 48) = v23 + 4;
    v24 = *(_DWORD *)v23;
  if ( ptr )
    operator delete(ptr);
  return v24;
}


char *__fastcall ContentManager::getContentItems(ContentManager *this)
{
  return (char *)this + 20;
}


RakNet *__fastcall ContentManager::getWorldBehaviorPath(void **a1, int *a2, int *a3)
{
  void **v3; // r4@1
  int *v4; // r6@1
  int *v5; // r5@1
  int v6; // r0@1
  int v7; // r1@1
  int v8; // r3@1
  int v9; // r6@1
  int v10; // r5@1
  void *v11; // r0@1
  RakNet *result; // r0@2
  unsigned int *v13; // r2@4
  signed int v14; // r1@6
  int v15; // [sp+4h] [bp-444h]@1
  int v16; // [sp+10h] [bp-438h]@1
  int v17; // [sp+14h] [bp-434h]@1
  int v18; // [sp+18h] [bp-430h]@1
  int v19; // [sp+1Ch] [bp-42Ch]@1
  int v20; // [sp+20h] [bp-428h]@1
  int v21; // [sp+24h] [bp-424h]@1
  char v22; // [sp+2Ch] [bp-41Ch]@1
  int v23; // [sp+30h] [bp-418h]@1
  RakNet *v24; // [sp+434h] [bp-14h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v24 = _stack_chk_guard;
  MinecraftScreenModel::getLevelBasePath((MinecraftScreenModel *)&v15, *a2);
  v6 = v4[18];
  v7 = *v5;
  v8 = *(_DWORD *)(v6 - 12);
  v9 = *(_DWORD *)(*v5 - 12);
  v10 = *(_DWORD *)(v15 - 12);
  v16 = v15;
  v17 = v10;
  v18 = v7;
  v19 = v9;
  v20 = v6;
  v21 = v8;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v22, (int)&v16, 3);
  sub_21E94B4(v3, (const char *)&v23);
  v11 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v15 - 4);
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
      j_j_j_j__ZdlPv_9(v11);
  }
  result = (RakNet *)(_stack_chk_guard - v24);
  if ( _stack_chk_guard != v24 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall ContentManager::_addContentSource(int a1, ContentSource **a2)
{
  ContentSource **v2; // r5@1
  int v3; // r4@1
  __int64 v4; // r6@1
  ContentView *v5; // t1@2
  __int64 v6; // r0@3
  int v7; // r0@4

  v2 = a2;
  v3 = a1;
  *((_DWORD *)*a2 + 5) = a1;
  (*(void (**)(void))(*(_DWORD *)*a2 + 8))();
  ContentManager::generateItems((ContentManager *)v3, *v2);
  v4 = *(_QWORD *)(v3 + 44);
  while ( HIDWORD(v4) != (_DWORD)v4 )
  {
    v5 = *(ContentView **)v4;
    LODWORD(v4) = v4 + 4;
    ContentView::reload(v5);
  }
  v6 = *(_QWORD *)(v3 + 36);
  if ( (_DWORD)v6 == HIDWORD(v6) )
    std::vector<std::unique_ptr<ContentSource,std::default_delete<ContentSource>>,std::allocator<std::unique_ptr<ContentSource,std::default_delete<ContentSource>>>>::_M_emplace_back_aux<std::unique_ptr<ContentSource,std::default_delete<ContentSource>>>(
      (_QWORD *)(v3 + 32),
      (int *)v2);
    v7 = *(_DWORD *)(v3 + 36);
  else
    HIDWORD(v6) = *v2;
    *v2 = 0;
    *(_DWORD *)v6 = HIDWORD(v6);
    v7 = *(_DWORD *)(v3 + 36) + 4;
    *(_DWORD *)(v3 + 36) = v7;
  return *(_DWORD *)(v7 - 4);
}
