

void __fastcall BookScreenManager::getBookPages(BookScreenManager *this, Player **a2)
{
  Player **v2; // r4@1
  BookScreenManager *v3; // r5@1
  int v4; // r0@1
  const ItemInstance *v5; // r0@1

  v2 = a2;
  v3 = this;
  v4 = Player::getSupplies(*a2);
  v5 = (const ItemInstance *)PlayerInventoryProxy::getItem(v4, (int)v2[1], 0);
  WrittenBookItem::getPages(v3, v5);
}


signed int __fastcall BookScreenManager::viewPage(BookScreenManager *this, const PageContent *a2)
{
  signed int result; // r0@1

  result = BookScreenManager::_viewPage(this, a2);
  if ( result != 1 )
    result = 0;
  return result;
}


void __fastcall BookScreenManager::editPage(BookScreenManager *this, int a2, const PageContent *a3)
{
  BookScreenManager *v3; // r4@1
  const PageContent *v4; // r5@1
  const ItemInstance *v5; // r6@1
  int v6; // r0@1
  WritableBookItem *v7; // r0@1
  const PageContent *v8; // r3@1
  BookEditPacket *v9; // r0@1
  void *v10; // r0@1
  void *v11; // r0@2
  unsigned int *v12; // r2@4
  signed int v13; // r1@6
  unsigned int *v14; // r2@8
  signed int v15; // r1@10
  void **v16; // [sp+4h] [bp-3Ch]@1
  int v17; // [sp+24h] [bp-1Ch]@2
  int v18; // [sp+28h] [bp-18h]@1

  v3 = this;
  v4 = a3;
  v5 = (const ItemInstance *)a2;
  v6 = Player::getSupplies(*(Player **)this);
  v7 = (WritableBookItem *)PlayerInventoryProxy::getItem(v6, *((_DWORD *)v3 + 1), 0);
  WritableBookItem::replacePage(v7, v5, (int)v4, v8);
  *((_BYTE *)v3 + 44) = 1;
  v9 = (BookEditPacket *)BookEditPacket::BookEditPacket((BookEditPacket *)&v16);
  BookEditPacket::setToReplacePage(v9, *((_DWORD *)v3 + 1), (int)v5, v4);
  (*(void (**)(void))(**((_DWORD **)v3 + 2) + 8))();
  v16 = &off_26E9C4C;
  v10 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v18 - 4);
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
      j_j_j_j__ZdlPv_9(v10);
  }
  v11 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v17 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


const void **__fastcall BookScreenManager::getSignedAuthor(BookScreenManager *this)
{
  BookScreenManager *v1; // r4@1
  int v2; // r0@1
  WrittenBookItem *v3; // r0@1
  const ItemInstance *v4; // r1@1

  v1 = this;
  v2 = Player::getSupplies(*(Player **)this);
  v3 = (WrittenBookItem *)PlayerInventoryProxy::getItem(v2, *((_DWORD *)v1 + 1), 0);
  return WrittenBookItem::getAuthor(v3, v4);
}


const void **__fastcall BookScreenManager::getTitle(BookScreenManager *this)
{
  BookScreenManager *v1; // r4@1
  int v2; // r0@1
  WrittenBookItem *v3; // r0@1
  const ItemInstance *v4; // r1@1

  v1 = this;
  v2 = Player::getSupplies(*(Player **)this);
  v3 = (WrittenBookItem *)PlayerInventoryProxy::getItem(v2, *((_DWORD *)v1 + 1), 0);
  return WrittenBookItem::getTitle(v3, v4);
}


    if ( !v3 && BookScreenManager::finalizeBook(*(Player ***)(v1 + 432), (int *)(v1 + 456), (int *)(v1 + 460)) == 1 )
{
  }
  return 1;
}


void __fastcall BookScreenManager::startBookExport(BookScreenManager *this)
{
  BookScreenManager *v1; // r10@1
  __int64 v2; // kr00_8@5
  _DWORD *v3; // r6@6
  unsigned int *v4; // r2@7
  signed int v5; // r1@9
  int *v6; // r0@15
  void *v7; // r0@17
  unsigned int *v8; // r2@19
  signed int v9; // r1@21
  int v10; // [sp+4h] [bp-64h]@3
  int v11; // [sp+8h] [bp-60h]@3
  char v12; // [sp+Ch] [bp-5Ch]@3
  void (*v13)(void); // [sp+14h] [bp-54h]@3
  int v14; // [sp+20h] [bp-48h]@1
  int v15; // [sp+24h] [bp-44h]@1
  char v16; // [sp+28h] [bp-40h]@1
  void (*v17)(void); // [sp+30h] [bp-38h]@1
  int v18; // [sp+3Ch] [bp-2Ch]@1

  v1 = this;
  BookScreenManager::_getExportTempDir((BookScreenManager *)&v18);
  v14 = v18;
  v15 = *(_DWORD *)(v18 - 12);
  Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v16, (__int64 *)&v14);
  if ( v17 )
    v17();
  v10 = v18;
  v11 = *(_DWORD *)(v18 - 12);
  Core::FileSystem::createOneDirectory((int)&v12, (__int64 *)&v10);
  if ( v13 )
    v13();
  *((_DWORD *)v1 + 10) = 0;
  v2 = *(_QWORD *)((char *)v1 + 28);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = (_DWORD *)v2;
    do
    {
      v6 = (int *)(*v3 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*v3 - 4);
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
      ++v3;
    }
    while ( v3 != (_DWORD *)HIDWORD(v2) );
  }
  *((_DWORD *)v1 + 8) = v2;
  v7 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


int __fastcall BookScreenManager::getPickPhotoName(BookScreenManager *this, int a2, unsigned int a3)
{
  void **v3; // r4@1
  int v4; // r3@1
  _DWORD *v5; // r0@1
  bool v6; // cf@1
  bool v7; // zf@1
  unsigned int v8; // r1@2
  __int64 v9; // r0@5
  int v10; // r0@5
  const char *v11; // r6@6
  size_t v12; // r0@6
  size_t v13; // r7@6
  const char *v14; // r5@6
  void **v15; // r0@4
  int result; // r0@13
  __int64 v17; // [sp+0h] [bp-A38h]@5
  int v18; // [sp+8h] [bp-A30h]@6
  char v19; // [sp+Ch] [bp-A2Ch]@6
  int v20; // [sp+40Ch] [bp-62Ch]@6
  char v21; // [sp+414h] [bp-624h]@5
  int v22; // [sp+A14h] [bp-24h]@5
  RakNet *v23; // [sp+A18h] [bp-20h]@1

  v3 = (void **)this;
  v23 = _stack_chk_guard;
  v4 = *(_DWORD *)(a2 + 16);
  v5 = (_DWORD *)(v4 + 4 * a3);
  v6 = 1;
  v7 = v5 == 0;
  if ( v5 )
  {
    v8 = (*(_DWORD *)(a2 + 20) - v4) >> 2;
    v6 = v8 >= a3;
    v7 = v8 == a3;
  }
  if ( !v7 && v6 )
    LODWORD(v9) = *v5;
    HIDWORD(v9) = *(_DWORD *)(v9 - 12);
    v17 = v9;
    v10 = Core::SplitPathT<1024u,64u>::SplitPathT((int)&v21, (const char **)&v17);
    if ( v22 )
    {
      v18 = 1023;
      v11 = *(const char **)(v10 + 8 * v22 + 1016);
      v19 = 0;
      v20 = 0;
      v12 = strlen(v11);
      v13 = v12;
      v14 = (const char *)((unsigned int)&v18 | 4);
      if ( v12 < 0x400 )
      {
        if ( v12 )
          _aeabi_memcpy((unsigned int)&v18 | 4, v11, v12);
        *((_BYTE *)&v18 + v13 + 4) = 0;
        v20 += v13;
      }
      else
        v19 = 0;
        v20 = 0;
    }
    else
      _aeabi_memclr8(&v18, 1028);
    sub_21E94B4(v3, v14);
    v15 = &_stack_chk_guard_ptr;
  else
    sub_21E8AF4((int *)v3, (int *)&Util::EMPTY_STRING);
  result = *(_DWORD *)*v15 - (_DWORD)v23;
  if ( result )
    _stack_chk_fail(result);
  return result;
}


signed int __fastcall BookScreenManager::finalizeBook(Player **a1, int *a2, int *a3)
{
  Player **v3; // r4@1
  int *v4; // r8@1
  int *v5; // r9@1
  int v6; // r0@1
  int v7; // r5@1
  void *v8; // r0@1
  void *v9; // r0@2
  signed int v10; // r4@4
  int v11; // r0@5
  char *v12; // r7@5
  int v13; // r5@5
  signed int v14; // r5@6
  void *v15; // r0@6
  int v16; // r5@8
  ListTag *v17; // r7@8
  void *v18; // r0@8
  Player *v19; // r5@11
  __int64 v20; // r0@11
  void *v21; // r0@11
  void *v22; // r0@12
  void *v23; // r0@13
  void *v24; // r0@14
  unsigned int *v26; // r2@23
  signed int v27; // r1@25
  unsigned int *v28; // r2@27
  signed int v29; // r1@29
  unsigned int *v30; // r2@39
  signed int v31; // r1@41
  unsigned int *v32; // r2@43
  signed int v33; // r1@45
  unsigned int *v34; // r2@47
  signed int v35; // r1@49
  unsigned int *v36; // r2@51
  signed int v37; // r1@53
  unsigned int *v38; // r2@55
  signed int v39; // r1@57
  unsigned int *v40; // r2@79
  signed int v41; // r1@81
  int v42; // [sp+0h] [bp-B0h]@11
  int v43; // [sp+4h] [bp-ACh]@11
  void **v44; // [sp+8h] [bp-A8h]@11
  int v45; // [sp+28h] [bp-88h]@14
  int v46; // [sp+2Ch] [bp-84h]@13
  int v47; // [sp+30h] [bp-80h]@8
  int v48; // [sp+34h] [bp-7Ch]@6
  int v49; // [sp+38h] [bp-78h]@1
  int v50; // [sp+3Ch] [bp-74h]@1
  char v51; // [sp+40h] [bp-70h]@1
  int v52; // [sp+48h] [bp-68h]@20
  void *v53; // [sp+64h] [bp-4Ch]@18
  void *ptr; // [sp+74h] [bp-3Ch]@16

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Player::getSupplies(*a1);
  v7 = PlayerInventoryProxy::getItem(v6, (int)v3[1], 0);
  sub_21E8AF4(&v50, v5);
  sub_21E8AF4(&v49, v4);
  WritableBookItem::signBook((ItemInstance *)&v51, v7, &v50, &v49);
  v8 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
  {
    v26 = (unsigned int *)(v49 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
    }
    else
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  v9 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v50 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  if ( ItemInstance::isNull((ItemInstance *)&v51) )
    v10 = 0;
  else
    v11 = Player::getSupplies(*v3);
    PlayerInventoryProxy::setItem(v11, (int)v3[1], (int)&v51, 0);
    *((_BYTE *)v3 + 44) = 1;
    v12 = ItemInstance::getUserData((ItemInstance *)&v51);
    v13 = *(_DWORD *)v12;
    if ( *(_DWORD *)v12 )
      sub_21E91E0((void **)&v48, dword_2809174, WrittenBookItem::TAG_PAGES);
      v14 = CompoundTag::contains(v13, (const void **)&v48, 9);
      v15 = (void *)(v48 - 12);
      if ( (int *)(v48 - 12) != &dword_28898C0 )
      {
        v38 = (unsigned int *)(v48 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v39 = __ldrex(v38);
          while ( __strex(v39 - 1, v38) );
        }
        else
          v39 = (*v38)--;
        if ( v39 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      }
      if ( v14 == 1 )
        v16 = *(_DWORD *)v12;
        sub_21E91E0((void **)&v47, dword_2809174, WrittenBookItem::TAG_PAGES);
        v17 = (ListTag *)CompoundTag::get(v16, (const void **)&v47);
        v18 = (void *)(v47 - 12);
        if ( (int *)(v47 - 12) != &dword_28898C0 )
          v40 = (unsigned int *)(v47 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v41 = __ldrex(v40);
            while ( __strex(v41 - 1, v40) );
          }
          else
            v41 = (*v40)--;
          if ( v41 <= 0 )
            j_j_j_j__ZdlPv_9(v18);
        if ( ListTag::size(v17) >= 10 )
          MinecraftEventing::fireEventAwardAchievement((int)*v3, 71);
    BookEditPacket::BookEditPacket((BookEditPacket *)&v44);
    v19 = v3[1];
    sub_21E8AF4(&v43, v5);
    sub_21E8AF4(&v42, v4);
    LODWORD(v20) = &v44;
    BookEditPacket::setToFinalize(v20, &v43, &v42);
    v21 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v42 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
      else
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    v22 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v43 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    (*(void (**)(void))(*(_DWORD *)v3[2] + 8))();
    v44 = &off_26E9C4C;
    v23 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v46 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    v24 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v45 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    v10 = 1;
  if ( ptr )
    operator delete(ptr);
  if ( v53 )
    operator delete(v53);
  if ( v52 )
    (*(void (**)(void))(*(_DWORD *)v52 + 4))();
  return v10;
}


signed int __fastcall BookScreenManager::_viewPage(BookScreenManager *this, const PageContent *a2)
{
  const PageContent *v2; // r4@1
  BookScreenManager *v3; // r6@1
  unsigned __int64 *v4; // r0@2
  int *v5; // r5@2
  int v6; // r0@3
  const ItemInstance *v7; // r0@3
  char *v8; // r7@3
  size_t v9; // r2@3
  char *v10; // r8@3
  Level *v11; // r0@5
  Level *v12; // r0@5
  int v13; // r7@5
  double v14; // r0@5
  int v15; // r6@5
  int v16; // r1@5
  char *v17; // r0@7
  signed int result; // r0@9
  unsigned int *v19; // r2@13
  signed int v20; // r1@15
  unsigned int *v21; // r1@21
  signed int v22; // r0@23
  void *s1; // [sp+0h] [bp-28h]@3

  v2 = a2;
  v3 = this;
  if ( PageContent::getType(a2) == 1 )
  {
    v5 = (int *)((char *)v3 + 12);
    v4 = (unsigned __int64 *)*((_DWORD *)v3 + 3);
    if ( v4 )
      return SyncedPhotoView::viewPhoto(v4, (int **)v2 + 1);
    v6 = Player::getSupplies(*(Player **)v3);
    v7 = (const ItemInstance *)PlayerInventoryProxy::getItem(v6, *((_DWORD *)v3 + 1), 0);
    WrittenBookItem::getBookId((WrittenBookItem *)&s1, v7);
    v8 = (char *)s1;
    v10 = (char *)s1 - 12;
    v9 = *((_DWORD *)s1 - 3);
    if ( v9 != *((_DWORD *)Util::EMPTY_STRING - 3) || memcmp(s1, Util::EMPTY_STRING, v9) )
    {
      v11 = (Level *)Entity::getLevel(*(Entity **)v3);
      Level::getPhotoStorage(v11);
      v12 = (Level *)Entity::getLevel(*(Entity **)v3);
      v13 = Level::getPacketSender(v12);
      LODWORD(v14) = operator new(0x28u);
      v15 = LODWORD(v14);
      SyncedPhotoView::SyncedPhotoView(v14, (int *)&s1, v13);
      v16 = *v5;
      *v5 = v15;
      if ( v16 )
        std::default_delete<SyncedPhotoView>::operator()((int)v5, v16);
      v17 = (char *)s1 - 12;
      if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
      {
        v19 = (unsigned int *)((char *)s1 - 4);
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
          j_j_j_j__ZdlPv_9(v17);
      }
      v4 = (unsigned __int64 *)*v5;
    }
    if ( (int *)v10 != &dword_28898C0 )
      v21 = (unsigned int *)(v8 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
      else
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    result = 0;
  }
  else
    result = 2;
  return result;
}


int __fastcall BookScreenManager::buildExportFiles(Entity **a1, unsigned __int64 *a2, __int64 a3, int a4)
{
  Entity **v4; // r8@1
  int *v5; // r9@1
  unsigned __int64 *v6; // r10@1
  Level *v7; // r0@1
  int v8; // r4@1
  int v9; // r0@1
  const ItemInstance *v10; // r0@1
  char *v11; // r6@1
  char *v12; // r4@1
  unsigned int v13; // r5@1
  int v14; // r0@2
  void *v15; // r0@7
  int v16; // r1@8
  int v17; // r5@8
  unsigned int v18; // r6@8
  char *v20; // r7@12
  int v21; // r4@12
  unsigned __int64 v22; // r0@12
  int v23; // r10@12
  void *v24; // r0@12
  _BOOL4 v25; // r0@13
  size_t v26; // r0@15
  size_t v27; // r5@15
  int v28; // r0@16
  unsigned int v29; // r1@16
  size_t v30; // r0@18
  size_t v31; // r5@18
  int v32; // r0@19
  unsigned int v33; // r1@19
  int v34; // r5@24
  char *v35; // r0@25
  unsigned int v36; // r0@26
  unsigned int v37; // r2@26
  void *v38; // r0@29
  void *v39; // r0@30
  __int64 v40; // r0@31
  int v41; // r5@38
  char *v42; // r0@39
  __int64 v43; // r0@43
  void *v44; // r0@46
  unsigned int *v45; // r2@49
  signed int v46; // r1@51
  unsigned int *v47; // r2@57
  signed int v48; // r1@59
  unsigned int *v49; // r2@61
  signed int v50; // r1@63
  unsigned int *v51; // r2@65
  signed int v52; // r1@67
  char *v58; // r0@85
  RakNet *v59; // r1@86
  int result; // r0@87
  unsigned int *v61; // r1@89
  signed int v62; // r0@91
  unsigned int *v63; // r2@93
  signed int v64; // r1@95
  unsigned int *v65; // r2@97
  signed int v66; // r1@99
  __int64 v67; // [sp+0h] [bp-1528h]@0
  unsigned __int64 *v68; // [sp+24h] [bp-1504h]@11
  __int64 v69; // [sp+3Ch] [bp-14ECh]@1
  unsigned __int64 *v70; // [sp+44h] [bp-14E4h]@8
  __int64 v71; // [sp+50h] [bp-14D8h]@41
  char v72; // [sp+58h] [bp-14D0h]@41
  void (*v73)(void); // [sp+60h] [bp-14C8h]@41
  unsigned int v74; // [sp+6Ch] [bp-14BCh]@41
  int v75; // [sp+70h] [bp-14B8h]@29
  int v76; // [sp+74h] [bp-14B4h]@28
  __int64 v77; // [sp+78h] [bp-14B0h]@26
  __int64 v78; // [sp+80h] [bp-14A8h]@26
  char v79; // [sp+88h] [bp-14A0h]@26
  void (*v80)(void); // [sp+90h] [bp-1498h]@26
  int v81; // [sp+9Ch] [bp-148Ch]@12
  char *v82; // [sp+A0h] [bp-1488h]@8
  int v83; // [sp+A4h] [bp-1484h]@1
  void *ptr; // [sp+A8h] [bp-1480h]@1
  char *v85; // [sp+B0h] [bp-1478h]@12
  int v86; // [sp+B4h] [bp-1474h]@12
  unsigned __int64 v87; // [sp+B8h] [bp-1470h]@12
  unsigned int v88; // [sp+CCh] [bp-145Ch]@18
  char v89; // [sp+D0h] [bp-1458h]@18
  int v90; // [sp+4D0h] [bp-1058h]@18
  char v91; // [sp+4D4h] [bp-1054h]@26
  int v92; // [sp+4D8h] [bp-1050h]@26
  int v93; // [sp+8D8h] [bp-C50h]@26
  unsigned int v94; // [sp+8DCh] [bp-C4Ch]@15
  char v95; // [sp+8E0h] [bp-C48h]@15
  int v96; // [sp+CE0h] [bp-848h]@15
  char v97; // [sp+CE4h] [bp-844h]@12
  int v98; // [sp+CE8h] [bp-840h]@15
  int v99; // [sp+10E8h] [bp-440h]@1
  signed int v100; // [sp+10ECh] [bp-43Ch]@1
  char v101; // [sp+10F0h] [bp-438h]@1
  int v102; // [sp+14F0h] [bp-38h]@1
  RakNet *v103; // [sp+14F4h] [bp-34h]@1

  v4 = a1;
  v69 = a3;
  v5 = &v99;
  v6 = a2;
  v103 = _stack_chk_guard;
  v7 = (Level *)Entity::getLevel(*a1);
  v8 = Level::getPhotoStorage(v7);
  v9 = Player::getSupplies(*v4);
  v10 = (const ItemInstance *)PlayerInventoryProxy::getItem(v9, (int)v4[1], 0);
  WrittenBookItem::getBookId((WrittenBookItem *)&v83, v10);
  PhotoStorage::getBookPath(&ptr, v8, &v83);
  v11 = (char *)ptr;
  v12 = (char *)ptr - 12;
  v13 = *((_DWORD *)ptr - 3);
  v100 = 1023;
  v101 = 0;
  v102 = 0;
  if ( v13 < 0x400 )
  {
    if ( v13 )
      _aeabi_memcpy(&v101, (const char *)ptr, v13);
    *((_BYTE *)&v100 + v13 + 4) = 0;
    v14 = v102 + v13;
  }
  else
    v14 = 0;
    v101 = 0;
  v102 = v14;
  if ( (int *)v12 != &dword_28898C0 )
    v61 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
    }
    else
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v15 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v83 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  BookScreenManager::_getExportTempDir((BookScreenManager *)&v82);
  v70 = v6;
  v16 = *v6 >> 32;
  v17 = *v6;
  v18 = (unsigned int)v4[10];
  _R0 = v18 + 2;
  if ( (v16 - v17) >> 3 < v18 + 2 )
    _R0 = (v16 - v17) >> 3;
  v4[10] = (Entity *)_R0;
  if ( v18 < _R0 )
    v68 = (unsigned __int64 *)(v4 + 7);
    do
      v20 = v82;
      v21 = *((_DWORD *)v82 - 3);
      Util::toString<unsigned int,(void *)0,(void *)0>((void **)&v81, v18);
      LODWORD(v22) = v81;
      HIDWORD(v22) = *(_DWORD *)(v81 - 12);
      v85 = v20;
      v86 = v21;
      v87 = v22;
      Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v97, (int)&v85, 2);
      v23 = v17 + 8 * v18;
      v24 = (void *)(v81 - 12);
      if ( (int *)(v81 - 12) != &dword_28898C0 )
      {
        v45 = (unsigned int *)(v81 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v46 = __ldrex(v45);
          while ( __strex(v46 - 1, v45) );
        }
        else
          v46 = (*v45)--;
        if ( v46 <= 0 )
          j_j_j_j__ZdlPv_9(v24);
      }
      v25 = PageContent::getType((PageContent *)(v17 + 8 * v18));
      if ( v25 )
        if ( v25 == 1 )
          v94 = 1023;
          v95 = 0;
          v96 = 0;
          v26 = strlen((const char *)&v98);
          v27 = v26;
          if ( v26 < 0x400 )
          {
            if ( v26 )
              _aeabi_memcpy4(&v95, &v98, v26);
            *((_BYTE *)&v94 + v27 + 4) = 0;
            v29 = v94;
            v28 = v96 + v27;
          }
          else
            v28 = 0;
            v29 = 1023;
            v95 = 0;
          v96 = v28;
          if ( v28 + 5 <= v29 )
            v35 = (char *)&v94 + v28;
            v35[8] = 103;
            *((_DWORD *)v35 + 1) = 1701866030;
            v35[9] = 0;
            v34 = v96 + 5;
            v34 = 0;
          v96 = v34;
          _aeabi_memcpy4(&v98, &v95, v34 + 1);
          v99 = v34;
          v36 = *(_DWORD *)(v23 + 4);
          v37 = *(_DWORD *)(v36 - 12);
          v85 = &v101;
          v86 = v102;
          v87 = __PAIR__(v37, v36);
          Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v91, (int)&v85, 2);
          LODWORD(v78) = &v92;
          HIDWORD(v78) = v93;
          LODWORD(v77) = &v98;
          HIDWORD(v77) = v99;
          Core::FileSystem::copyFile((int)&v79, &v78, &v77);
          if ( v80 )
            v80();
          sub_21E94B4((void **)&v76, (const char *)&v98);
          if ( !*(_DWORD *)(a4 + 8) )
            sub_21E5F48();
          (*(void (__fastcall **)(int *))(a4 + 12))(&v75);
          JpegCommentWriter::execute(SHIDWORD(v69), v69, &v76, &v75, (int)&Color::BLACK);
          v38 = (void *)(v75 - 12);
          if ( (int *)(v75 - 12) != &dword_28898C0 )
            v47 = (unsigned int *)(v75 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v48 = __ldrex(v47);
              while ( __strex(v48 - 1, v47) );
            }
            else
              v48 = (*v47)--;
            if ( v48 <= 0 )
              j_j_j_j__ZdlPv_9(v38);
          v39 = (void *)(v76 - 12);
          if ( (int *)(v76 - 12) != &dword_28898C0 )
            v49 = (unsigned int *)(v76 - 4);
                v50 = __ldrex(v49);
              while ( __strex(v50 - 1, v49) );
              v50 = (*v49)--;
            if ( v50 <= 0 )
              j_j_j_j__ZdlPv_9(v39);
          v40 = *((_QWORD *)v4 + 4);
          if ( (_DWORD)v40 == HIDWORD(v40) )
            std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<Core::PathBuffer<Core::StackString<char,1024u>> &>(
              v68,
              (int)&v97);
            sub_21E94B4((void **)v40, (const char *)&v98);
            v4[8] = (Entity *)((char *)v4[8] + 4);
      else if ( *(_DWORD *)(*(_DWORD *)v23 - 12) )
        v88 = 1023;
        v89 = 0;
        v90 = 0;
        v30 = strlen((const char *)&v98);
        v31 = v30;
        if ( v30 < 0x400 )
          if ( v30 )
            _aeabi_memcpy4(&v89, &v98, v30);
          *((_BYTE *)&v88 + v31 + 4) = 0;
          v33 = v88;
          v32 = v90 + v31;
          v32 = 0;
          v33 = 1023;
          v89 = 0;
        v90 = v32;
        if ( v32 + 4 <= v33 )
          v42 = (char *)&v88 + v32;
          *((_DWORD *)v42 + 1) = 1954051118;
          v42[8] = 0;
          v41 = v90 + 4;
          v41 = 0;
        v90 = v41;
        _aeabi_memcpy4(&v98, &v89, v41 + 1);
        v99 = v41;
        if ( !*(_DWORD *)(a4 + 8) )
          sub_21E5F48();
        (*(void (__fastcall **)(unsigned int *, int, int))(a4 + 12))(&v74, a4, v23);
        LODWORD(v71) = &v98;
        HIDWORD(v71) = v99;
        LODWORD(v67) = *(_DWORD *)(*(_DWORD *)v23 - 12);
        File::writeCreateOrAppendFileData((int)&v72, &v71, 0, 0, v67, v74);
        if ( v73 )
          v73();
        v43 = *((_QWORD *)v4 + 4);
        if ( (_DWORD)v43 == HIDWORD(v43) )
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<Core::PathBuffer<Core::StackString<char,1024u>> &>(
            v68,
            (int)&v97);
          sub_21E94B4((void **)v43, (const char *)&v98);
          v4[8] = (Entity *)((char *)v4[8] + 4);
        v44 = (void *)(v74 - 12);
        if ( (int *)(v74 - 12) != &dword_28898C0 )
          v51 = (unsigned int *)(v74 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v52 = __ldrex(v51);
            while ( __strex(v52 - 1, v51) );
            v52 = (*v51)--;
          if ( v52 <= 0 )
            j_j_j_j__ZdlPv_9(v44);
      ++v18;
      v17 = *(_DWORD *)v70;
      _R0 = (unsigned int)v4[10];
    while ( v18 < _R0 );
    v5 = &v99;
    v16 = *((_DWORD *)v70 + 1);
  if ( v17 == v16 )
    __asm { VMOV.F32        S16, #1.0 }
    __asm { VMOV            S0, R0 }
    __asm
      VCVT.F32.U32    S0, S0
      VMOV            S2, R0
      VCVT.F32.U32    S2, S2
      VDIV.F32        S16, S0, S2
  v58 = v82 - 12;
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v82 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v58);
  v59 = (RakNet *)v5[259];
  if ( _stack_chk_guard != v59 )
    _stack_chk_fail(_stack_chk_guard - v59);
  __asm { VMOVEQ          R0, S16 }
  return result;
}


void __fastcall BookScreenManager::editPage(BookScreenManager *this, int a2, const PageContent *a3)
{
  BookScreenManager::editPage(this, a2, a3);
}


void __fastcall BookScreenManager::deletePage(BookScreenManager *this, int a2)
{
  BookScreenManager *v2; // r4@1
  int v3; // r6@1
  int v4; // r0@1
  const ItemInstance *v5; // r0@1
  void *v6; // r0@1
  void *v7; // r0@2
  BookEditPacket *v8; // r0@3
  void *v9; // r0@3
  void *v10; // r0@4
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20
  void **v19; // [sp+4h] [bp-44h]@3
  int v20; // [sp+24h] [bp-24h]@4
  int v21; // [sp+28h] [bp-20h]@3
  int v22; // [sp+2Ch] [bp-1Ch]@1
  int v23; // [sp+30h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v4 = Player::getSupplies(*(Player **)this);
  v5 = (const ItemInstance *)PlayerInventoryProxy::getItem(v4, *((_DWORD *)v2 + 1), 0);
  WritableBookItem::deletePage((WritableBookItem *)&v22, v5, v3);
  v6 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v23 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v22 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  *((_BYTE *)v2 + 44) = 1;
  v8 = (BookEditPacket *)BookEditPacket::BookEditPacket((BookEditPacket *)&v19);
  BookEditPacket::setToDeletePage(v8, *((_DWORD *)v2 + 1), v3);
  (*(void (**)(void))(**((_DWORD **)v2 + 2) + 8))();
  v19 = &off_26E9C4C;
  v9 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v21 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v20 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


char *__fastcall BookScreenManager::getExportFiles(BookScreenManager *this)
{
  return (char *)this + 28;
}


signed int __fastcall BookScreenManager::getPickPictureSize(BookScreenManager *this)
{
  return (signed int)((*((_QWORD *)this + 2) >> 32) - *((_QWORD *)this + 2)) >> 2;
}


RakNet *__fastcall BookScreenManager::populatePickPics(int a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r11@1
  _DWORD *v3; // r9@1
  _DWORD *v4; // r8@1
  void **v5; // r1@2
  _DWORD *v6; // r4@2
  unsigned int *v7; // r2@3
  signed int v8; // r5@5
  void **v9; // r5@9
  int *v10; // r0@10
  double v11; // r0@12
  unsigned int v12; // r0@12
  int v13; // r5@14
  int *v14; // r4@14
  int v23; // r6@15
  int i; // r7@15
  int v25; // r7@19
  Level *v26; // r0@19
  Player *v27; // r0@19
  int v28; // r2@19
  int v29; // r5@20
  int v30; // r2@22
  int *v31; // r0@22
  int v32; // r1@24
  void *v33; // r0@24
  int v34; // r5@28
  unsigned int *v35; // r2@31
  signed int v36; // r1@33
  unsigned int *v37; // r2@35
  signed int v38; // r1@37
  __int64 v39; // r0@47
  const char *v40; // r5@48
  size_t v41; // r0@48
  size_t v42; // r6@48
  int v43; // r0@49
  unsigned int v44; // r8@55
  unsigned int v45; // r10@55
  unsigned int v46; // r11@55
  int v47; // r4@55
  int v48; // r7@56
  _DWORD *v49; // r9@56
  int v50; // r5@56
  _DWORD *v51; // r1@58
  size_t v52; // r2@58
  int v53; // r6@60
  unsigned __int64 *v54; // r6@67
  unsigned int *v55; // r2@69
  signed int v56; // r1@71
  unsigned __int64 *v57; // r5@77
  int v58; // r1@77
  void *v59; // r0@77
  RakNet *result; // r0@82
  unsigned int v61; // [sp+Ch] [bp-A84h]@21
  _QWORD *v62; // [sp+10h] [bp-A80h]@1
  const char *v63; // [sp+10h] [bp-A80h]@20
  int v64; // [sp+14h] [bp-A7Ch]@1
  void *s1; // [sp+18h] [bp-A78h]@55
  char v66; // [sp+1Ch] [bp-A74h]@17
  void *ptr; // [sp+24h] [bp-A6Ch]@2
  unsigned int v68; // [sp+28h] [bp-A68h]@12
  unsigned __int64 *v69; // [sp+2Ch] [bp-A64h]@12
  int v70; // [sp+30h] [bp-A60h]@12
  float v71; // [sp+34h] [bp-A5Ch]@12
  int v72; // [sp+38h] [bp-A58h]@12
  int v73; // [sp+3Ch] [bp-A54h]@80
  const char *v74[3]; // [sp+48h] [bp-A48h]@47
  int v75; // [sp+58h] [bp-A38h]@20
  char v76; // [sp+5Ch] [bp-A34h]@48
  int v77; // [sp+45Ch] [bp-634h]@48
  char v78[1536]; // [sp+464h] [bp-62Ch]@47
  int v79; // [sp+A64h] [bp-2Ch]@47
  RakNet *v80; // [sp+A68h] [bp-28h]@1

  v2 = a2;
  v64 = a1;
  v80 = _stack_chk_guard;
  v3 = *(_DWORD **)(a1 + 16);
  v62 = (_QWORD *)(a1 + 16);
  v4 = *(_DWORD **)(a1 + 20);
  if ( v4 != v3 )
  {
    v5 = &ptr;
    v6 = *(_DWORD **)(a1 + 16);
    do
    {
      v10 = (int *)(*v6 - 12);
      if ( v10 != &dword_28898C0 )
      {
        v7 = (unsigned int *)(*v6 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          v9 = v5;
          j_j_j_j__ZdlPv_9(v10);
          v5 = v9;
      }
      ++v6;
    }
    while ( v6 != v4 );
  }
  *(_DWORD *)(v64 + 20) = v3;
  v69 = 0;
  v70 = 0;
  v71 = 1.0;
  v72 = 0;
  HIDWORD(v11) = 10;
  LODWORD(v11) = &v71;
  v12 = sub_21E6254(v11);
  v68 = v12;
  if ( v12 == 1 )
    v14 = &v73;
    v73 = 0;
  else
    if ( v12 >= 0x40000000 )
      sub_21E57F4();
    v13 = 4 * v12;
    v14 = (int *)operator new(4 * v12);
    _aeabi_memclr4(v14, v13);
  ptr = v14;
  _R0 = (signed int)((*v2 >> 32) - *v2) >> 3;
  __asm
    VMOV            S0, R0
    VCVT.F32.U32    S0, S0
    VLDR            S2, [SP,#0xA90+var_A5C]
    VDIV.F32        S0, S0, S2
    VMOV            R0, S0
  _R0 = ceilf(_R0);
    VCVTR.U32.F32   S0, S0
    VMOV            R1, S0
  LODWORD(_R0) = &ptr;
  std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::rehash(_R0);
  v23 = *v2 >> 32;
  for ( i = *v2; v23 != i; i += 8 )
    if ( PageContent::getType((PageContent *)i) == 1 )
      std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert<std::string const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::string,true>>>>(
        (int *)&v66,
        (unsigned __int64 *)&ptr,
        (int **)(i + 4));
  v25 = v64;
  v26 = (Level *)Entity::getLevel(*(Entity **)v64);
  v27 = (Player *)Level::getPhotoStorage(v26);
  PhotoStorage::getLoosePhotos(v27, *(Entity **)v64, v62);
  v28 = *(_QWORD *)(v64 + 16);
  if ( *(_QWORD *)(v64 + 16) >> 32 != v28 )
    v29 = 0;
    v63 = (const char *)((unsigned int)&v75 | 4);
      v61 = v29;
      while ( 1 )
        LODWORD(v39) = *(_DWORD *)(v28 + 4 * v29);
        HIDWORD(v39) = *(_DWORD *)(v39 - 12);
        *(_QWORD *)v74 = v39;
        Core::SplitPathT<1024u,64u>::SplitPathT((int)v78, v74);
        if ( v79 )
          v40 = *(const char **)&v78[8 * v79 + 1016];
          v75 = 1023;
          v76 = 0;
          v77 = 0;
          v41 = strlen(v40);
          v42 = v41;
          if ( v41 < 0x400 )
          {
            if ( v41 )
              _aeabi_memcpy(v63, v40, v41);
            *((_BYTE *)&v75 + v42 + 4) = 0;
            v43 = v77 + v42;
          }
          else
            v43 = 0;
            v76 = 0;
          v77 = v43;
          _aeabi_memclr8(&v75, 1028);
        sub_21E94B4(&s1, v63);
        v44 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
        v45 = v68;
        v46 = v44 % v68;
        v47 = *((_DWORD *)ptr + v44 % v68);
        if ( v47 )
          v48 = *(_DWORD *)v47;
          v49 = s1;
          v50 = *(_DWORD *)(*(_DWORD *)v47 + 8);
          while ( 1 )
            if ( v50 == v44 )
            {
              v51 = *(_DWORD **)(v48 + 4);
              v52 = *(v49 - 3);
              if ( v52 == *(v51 - 3) && !memcmp(v49, v51, v52) )
                break;
            }
            v53 = *(_DWORD *)v48;
            if ( *(_DWORD *)v48 )
              v50 = *(_DWORD *)(v53 + 8);
              v47 = v48;
              v48 = *(_DWORD *)v48;
              if ( *(_DWORD *)(v53 + 8) % v45 == v46 )
                continue;
            v34 = 0;
            v25 = v64;
            goto LABEL_64;
          v25 = v64;
          v34 = v47 ? *(_DWORD *)v47 : 0;
          v34 = 0;
LABEL_64:
        if ( v49 - 3 != &dword_28898C0 )
          v35 = v49 - 1;
          if ( &pthread_create )
            __dmb();
            do
              v36 = __ldrex(v35);
            while ( __strex(v36 - 1, v35) );
            v36 = (*v35)--;
          if ( v36 <= 0 )
            j_j_j_j__ZdlPv_9(v49 - 3);
        if ( !v34 )
          break;
        v30 = *(_QWORD *)(v25 + 16) >> 32;
        v29 = v61;
        v31 = (int *)(*(_QWORD *)(v25 + 16) + 4 * v61);
        if ( v31 != (int *)(v30 - 4) )
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            v31,
            (int *)(v30 - 4));
          v30 = *(_DWORD *)(v25 + 20);
        *(_DWORD *)(v25 + 20) = v30 - 4;
        v32 = *(_DWORD *)(v30 - 4);
        v33 = (void *)(v32 - 12);
        if ( (int *)(v32 - 12) != &dword_28898C0 )
          v37 = (unsigned int *)(v32 - 4);
              v38 = __ldrex(v37);
            while ( __strex(v38 - 1, v37) );
            v38 = (*v37)--;
          if ( v38 <= 0 )
            j_j_j_j__ZdlPv_9(v33);
        v28 = *(_QWORD *)(v25 + 16);
        if ( v61 >= (signed int)((*(_QWORD *)(v25 + 16) >> 32) - v28) >> 2 )
          goto LABEL_67;
      v28 = *(_QWORD *)(v25 + 16);
      v29 = v61 + 1;
    while ( v61 + 1 < (signed int)((*(_QWORD *)(v25 + 16) >> 32) - v28) >> 2 );
LABEL_67:
  v54 = v69;
  while ( v54 )
    v57 = v54;
    v58 = *v54 >> 32;
    v54 = (unsigned __int64 *)*v54;
    v59 = (void *)(v58 - 12);
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v55 = (unsigned int *)(v58 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
      else
        v56 = (*v55)--;
      if ( v56 <= 0 )
        j_j_j_j__ZdlPv_9(v59);
    operator delete(v57);
  _aeabi_memclr4(ptr, 4 * v68);
  if ( ptr && &v73 != ptr )
    operator delete(ptr);
  result = (RakNet *)(_stack_chk_guard - v80);
  if ( _stack_chk_guard != v80 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall BookScreenManager::addPageAt(BookScreenManager *this, int a2, const PageContent *a3)
{
  BookScreenManager *v3; // r4@1
  const PageContent *v4; // r5@1
  const ItemInstance *v5; // r6@1
  int v6; // r0@1
  WritableBookItem *v7; // r0@1
  const PageContent *v8; // r3@1
  BookEditPacket *v9; // r0@1
  void *v10; // r0@1
  void *v11; // r0@2
  unsigned int *v12; // r2@4
  signed int v13; // r1@6
  unsigned int *v14; // r2@8
  signed int v15; // r1@10
  void **v16; // [sp+4h] [bp-3Ch]@1
  int v17; // [sp+24h] [bp-1Ch]@2
  int v18; // [sp+28h] [bp-18h]@1

  v3 = this;
  v4 = a3;
  v5 = (const ItemInstance *)a2;
  v6 = Player::getSupplies(*(Player **)this);
  v7 = (WritableBookItem *)PlayerInventoryProxy::getItem(v6, *((_DWORD *)v3 + 1), 0);
  WritableBookItem::addPageAt(v7, v5, (int)v4, v8);
  *((_BYTE *)v3 + 44) = 1;
  v9 = (BookEditPacket *)BookEditPacket::BookEditPacket((BookEditPacket *)&v16);
  BookEditPacket::setToAddPage(v9, *((_DWORD *)v3 + 1), (int)v5, v4);
  (*(void (**)(void))(**((_DWORD **)v3 + 2) + 8))();
  v16 = &off_26E9C4C;
  v10 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v18 - 4);
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
      j_j_j_j__ZdlPv_9(v10);
  }
  v11 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v17 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


void __fastcall BookScreenManager::_getBookId(BookScreenManager *this, Player **a2)
{
  Player **v2; // r4@1
  BookScreenManager *v3; // r5@1
  int v4; // r0@1
  const ItemInstance *v5; // r0@1

  v2 = a2;
  v3 = this;
  v4 = Player::getSupplies(*a2);
  v5 = (const ItemInstance *)PlayerInventoryProxy::getItem(v4, (int)v2[1], 0);
  WrittenBookItem::getBookId(v3, v5);
}


int __fastcall BookScreenManager::getPickPicture(BookScreenManager *this, int a2)
{
  int v2; // r2@1
  unsigned int v3; // r3@1
  int result; // r0@1

  v2 = *((_QWORD *)this + 2);
  v3 = (signed int)((*((_QWORD *)this + 2) >> 32) - v2) >> 2;
  result = 0;
  if ( v3 > a2 )
    result = v2 + 4 * a2;
  return result;
}


void __fastcall BookScreenManager::swapPages(BookScreenManager *this, int a2, int a3)
{
  BookScreenManager *v3; // r4@1
  int v4; // r5@1
  const ItemInstance *v5; // r6@1
  int v6; // r0@1
  WritableBookItem *v7; // r0@1
  int v8; // r3@1
  BookEditPacket *v9; // r0@1
  void *v10; // r0@1
  void *v11; // r0@2
  unsigned int *v12; // r2@4
  signed int v13; // r1@6
  unsigned int *v14; // r2@8
  signed int v15; // r1@10
  void **v16; // [sp+4h] [bp-3Ch]@1
  int v17; // [sp+24h] [bp-1Ch]@2
  int v18; // [sp+28h] [bp-18h]@1

  v3 = this;
  v4 = a3;
  v5 = (const ItemInstance *)a2;
  v6 = Player::getSupplies(*(Player **)this);
  v7 = (WritableBookItem *)PlayerInventoryProxy::getItem(v6, *((_DWORD *)v3 + 1), 0);
  WritableBookItem::swapPages(v7, v5, v4, v8);
  *((_BYTE *)v3 + 44) = 1;
  v9 = (BookEditPacket *)BookEditPacket::BookEditPacket((BookEditPacket *)&v16);
  BookEditPacket::setToSwapPages(v9, *((_DWORD *)v3 + 1), __PAIR__(v4, (unsigned int)v5));
  (*(void (**)(void))(**((_DWORD **)v3 + 2) + 8))();
  v16 = &off_26E9C4C;
  v10 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v18 - 4);
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
      j_j_j_j__ZdlPv_9(v10);
  }
  v11 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v17 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


void __fastcall BookScreenManager::startBookExport(BookScreenManager *this)
{
  BookScreenManager::startBookExport(this);
}


void __fastcall BookScreenManager::removePickPicture(BookScreenManager *this, int a2)
{
  BookScreenManager::removePickPicture(this, a2);
}


void __fastcall BookScreenManager::swapPages(BookScreenManager *this, int a2, int a3)
{
  BookScreenManager::swapPages(this, a2, a3);
}


char *__fastcall BookScreenManager::addPickPicture(BookScreenManager *this, const PageContent *a2)
{
  BookScreenManager *v2; // r4@1
  const PageContent *v3; // r5@1
  Level *v4; // r0@1
  Player *v5; // r0@1
  int v6; // r0@1
  int v7; // r2@1
  int v8; // r3@1
  void *v9; // r0@1
  int v10; // r0@3
  void *v11; // r0@3
  __int64 v12; // r0@6
  int v13; // r1@7
  void *v14; // r0@9
  void *v15; // r0@10
  char *result; // r0@11
  unsigned int *v17; // r2@13
  signed int v18; // r1@15
  unsigned int *v19; // r2@21
  signed int v20; // r1@23
  unsigned int *v21; // r2@25
  signed int v22; // r1@27
  unsigned int *v23; // r2@29
  signed int v24; // r1@31
  void *v25; // [sp+4h] [bp-C8Ch]@6
  int v26; // [sp+8h] [bp-C88h]@6
  __int64 v27; // [sp+Ch] [bp-C84h]@4
  __int64 v28; // [sp+14h] [bp-C7Ch]@4
  char v29; // [sp+1Ch] [bp-C74h]@4
  void (*v30)(void); // [sp+24h] [bp-C6Ch]@4
  int v31; // [sp+30h] [bp-C60h]@3
  int v32; // [sp+34h] [bp-C5Ch]@3
  int v33; // [sp+38h] [bp-C58h]@3
  __int64 v34; // [sp+3Ch] [bp-C54h]@2
  int v35; // [sp+44h] [bp-C4Ch]@1
  int v36; // [sp+48h] [bp-C48h]@1
  int v37; // [sp+4Ch] [bp-C44h]@1
  int v38; // [sp+50h] [bp-C40h]@1
  int v39; // [sp+54h] [bp-C3Ch]@1
  int v40; // [sp+60h] [bp-C30h]@4
  char v41; // [sp+64h] [bp-C2Ch]@4
  int v42; // [sp+464h] [bp-82Ch]@4
  char v43; // [sp+468h] [bp-828h]@3
  int v44; // [sp+46Ch] [bp-824h]@4
  int v45; // [sp+86Ch] [bp-424h]@4
  char v46; // [sp+870h] [bp-420h]@1
  int v47; // [sp+874h] [bp-41Ch]@2
  int v48; // [sp+C74h] [bp-1Ch]@2
  RakNet *v49; // [sp+C78h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v49 = _stack_chk_guard;
  v4 = (Level *)Entity::getLevel(*(Entity **)this);
  v5 = (Player *)Level::getPhotoStorage(v4);
  PhotoStorage::getPhotoPath((PhotoStorage *)&v35, v5, *(Entity **)v2);
  v6 = *((_DWORD *)v3 + 1);
  v7 = *(_DWORD *)(v6 - 12);
  v8 = *(_DWORD *)(v35 - 12);
  v36 = v35;
  v37 = v8;
  v38 = v6;
  v39 = v7;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v46, (int)&v36, 2);
  v9 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v35 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  }
  LODWORD(v34) = &v47;
  HIDWORD(v34) = v48;
  if ( Core::FileSystem::fileExists(&v34) == 1 )
    v10 = Entity::getLevel(*(Entity **)v2);
    Level::getScreenshotsFolder((Level *)&v31, v10);
    v32 = v31;
    v33 = *(_DWORD *)(v31 - 12);
    File::cleanPath((int)&v43, (__int64 *)&v32);
    v11 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v31 - 4);
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
        j_j_j_j__ZdlPv_9(v11);
    v40 = 1023;
    v42 = 0;
    v41 = 0;
    LODWORD(v28) = &v47;
    HIDWORD(v28) = v48;
    LODWORD(v27) = &v44;
    HIDWORD(v27) = v45;
    Core::PathBuffer<Core::StackString<char,1024u>>::makePathRelativeToParentPath((int)&v29, (int)&v40, &v28, &v27);
    if ( v30 )
      v30();
    sub_21E94B4((void **)&v26, &v41);
    sub_21E94B4(&v25, &v41);
    v12 = *(_QWORD *)((char *)v2 + 20);
    if ( (_DWORD)v12 == HIDWORD(v12) )
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
        (unsigned __int64 *)v2 + 2,
        &v25);
      v13 = (int)v25;
      *(_DWORD *)v12 = v25;
      HIDWORD(v12) = &unk_28898CC;
      v25 = &unk_28898CC;
      *((_DWORD *)v2 + 5) = v12 + 4;
    v14 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v13 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    v15 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v26 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
  result = (char *)(_stack_chk_guard - v49);
  if ( _stack_chk_guard != v49 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall BookScreenManager::getBookPages(BookScreenManager *this, Player **a2)
{
  BookScreenManager::getBookPages(this, a2);
}


int __fastcall BookScreenManager::sendBookEditedEvent(BookScreenManager *this)
{
  BookScreenManager *v1; // r4@1
  int result; // r0@1
  int v3; // r0@2
  WrittenBookItem *v4; // r5@2
  MinecraftEventing *v5; // r4@2
  const ItemInstance *v6; // r1@2
  const ItemInstance *v7; // r2@2
  unsigned int v8; // r3@2

  v1 = this;
  result = *((_BYTE *)this + 44);
  if ( result )
  {
    v3 = Player::getSupplies(*(Player **)v1);
    v4 = (WrittenBookItem *)PlayerInventoryProxy::getItem(v3, *((_DWORD *)v1 + 1), 0);
    v5 = *(MinecraftEventing **)v1;
    v7 = (const ItemInstance *)WrittenBookItem::getPageCount(v4, v6);
    result = j_j_j__ZN17MinecraftEventing19fireEventBookEditedEP6PlayerRK12ItemInstancej(v5, v4, v7, v8);
  }
  return result;
}


int __fastcall BookScreenManager::_getBook(BookScreenManager *this)
{
  BookScreenManager *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  v2 = Player::getSupplies(*(Player **)this);
  return PlayerInventoryProxy::getItem(v2, *((_DWORD *)v1 + 1), 0);
}


BookScreenManager *__fastcall BookScreenManager::~BookScreenManager(BookScreenManager *this)
{
  BookScreenManager *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  void *v7; // r5@16
  void *v8; // r7@16
  unsigned int *v9; // r2@18
  signed int v10; // r1@20
  int *v11; // r0@26
  int v12; // r1@31

  v1 = this;
  v3 = (void *)(*(_QWORD *)((char *)this + 28) >> 32);
  v2 = (void *)*(_QWORD *)((char *)this + 28);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
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
      v2 = (char *)v2 + 4;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 7);
  }
  if ( v2 )
    operator delete(v2);
  v8 = (void *)(*((_QWORD *)v1 + 2) >> 32);
  v7 = (void *)*((_QWORD *)v1 + 2);
  if ( v7 != v8 )
      v11 = (int *)(*(_DWORD *)v7 - 12);
      if ( v11 != &dword_28898C0 )
        v9 = (unsigned int *)(*(_DWORD *)v7 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      v7 = (char *)v7 + 4;
    while ( v7 != v8 );
    v7 = (void *)*((_DWORD *)v1 + 4);
  if ( v7 )
    operator delete(v7);
  v12 = *((_DWORD *)v1 + 3);
  if ( v12 )
    std::default_delete<SyncedPhotoView>::operator()((int)v1 + 12, v12);
  *((_DWORD *)v1 + 3) = 0;
  return v1;
}


int __fastcall BookScreenManager::BookScreenManager(int result, int a2, int a3, int a4)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = a4;
  *(_BYTE *)(result + 44) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  return result;
}


RakNet *__fastcall BookScreenManager::_getExportTempDir(BookScreenManager *this)
{
  void **v1; // r4@1
  AppPlatform **v2; // r0@2
  RakNet *result; // r0@4
  int v4; // [sp+0h] [bp-840h]@4
  int v5; // [sp+4h] [bp-83Ch]@4
  int *v6; // [sp+8h] [bp-838h]@4
  int v7; // [sp+Ch] [bp-834h]@4
  const char *v8; // [sp+10h] [bp-830h]@4
  int v9; // [sp+14h] [bp-82Ch]@4
  char v10; // [sp+1Ch] [bp-824h]@4
  int v11; // [sp+20h] [bp-820h]@4
  char v12; // [sp+424h] [bp-41Ch]@4
  int v13; // [sp+428h] [bp-418h]@4
  int v14; // [sp+828h] [bp-18h]@4
  RakNet *v15; // [sp+82Ch] [bp-14h]@1

  v1 = (void **)this;
  v15 = _stack_chk_guard;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v4 = *AppPlatform::getTempPath(*v2);
  v5 = *(_DWORD *)(v4 - 12);
  File::cleanPath((int)&v12, (__int64 *)&v4);
  v6 = &v13;
  v7 = v14;
  v8 = "export_temp";
  v9 = -1;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v10, (int)&v6, 2);
  sub_21E94B4(v1, (const char *)&v11);
  result = (RakNet *)(_stack_chk_guard - v15);
  if ( _stack_chk_guard != v15 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall BookScreenManager::deletePage(BookScreenManager *this, int a2)
{
  BookScreenManager::deletePage(this, a2);
}


int __fastcall BookScreenManager::tickBookDownload(BookScreenManager *this, unsigned __int64 *a2)
{
  unsigned __int64 *v6; // r8@1
  const PageContent *v7; // r4@1
  const PageContent *v8; // r6@1
  BookScreenManager *v9; // r5@1
  signed int v11; // r0@3
  unsigned __int64 v12; // r0@6
  int result; // r0@8

  __asm { VMOV.F32        S16, #1.0 }
  v6 = a2;
  v7 = (const PageContent *)(*a2 >> 32);
  v8 = (const PageContent *)*a2;
  v9 = this;
  if ( v8 != v7 )
  {
    _R7 = 0;
    do
    {
      v11 = BookScreenManager::_viewPage(v9, v8);
      v8 = (const PageContent *)((char *)v8 + 8);
      if ( (unsigned int)(v11 - 1) < 2 )
        ++_R7;
    }
    while ( v7 != v8 );
    v12 = *v6;
    if ( (_DWORD)v12 != HIDWORD(v12) )
      __asm { VMOV            S0, R7 }
      _R0 = (HIDWORD(v12) - (signed int)v12) >> 3;
      __asm
      {
        VCVT.F32.S32    S0, S0
        VMOV            S2, R0
        VCVT.F32.U32    S2, S2
        VDIV.F32        S16, S0, S2
      }
  }
  __asm { VMOV            R0, S16 }
  return result;
}


void __fastcall BookScreenManager::removePickPicture(BookScreenManager *this, int a2)
{
  BookScreenManager *v2; // r4@1
  int v3; // r0@1
  int v4; // r2@1
  int *v5; // r0@2
  int v6; // r1@4
  void *v7; // r0@4
  unsigned int *v8; // r2@6
  signed int v9; // r1@8

  v2 = this;
  v4 = *((_QWORD *)this + 2) >> 32;
  v3 = *((_QWORD *)this + 2);
  if ( (v4 - v3) >> 2 > (unsigned int)a2 )
  {
    v5 = (int *)(v3 + 4 * a2);
    if ( v5 != (int *)(v4 - 4) )
    {
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        v5,
        (int *)(v4 - 4));
      v4 = *((_DWORD *)v2 + 5);
    }
    *((_DWORD *)v2 + 5) = v4 - 4;
    v6 = *(_DWORD *)(v4 - 4);
    v7 = (void *)(v6 - 12);
    if ( (int *)(v6 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v6 - 4);
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
        j_j_j_j__ZdlPv_9(v7);
  }
}


void __fastcall BookScreenManager::addPageAt(BookScreenManager *this, int a2, const PageContent *a3)
{
  BookScreenManager::addPageAt(this, a2, a3);
}


int __fastcall BookScreenManager::getScreenshotPath(BookScreenManager *this, const PageContent *a2, const PageContent *a3)
{
  void **v3; // r8@1
  const PageContent *v4; // r6@1
  const PageContent *v5; // r5@1
  Level *v6; // r0@3
  int v7; // r7@3
  int v8; // r0@3
  const ItemInstance *v9; // r0@3
  int v10; // r1@3
  int v11; // r2@3
  int v12; // r3@3
  void *v13; // r0@3
  void *v14; // r0@4
  int v15; // r0@5
  void *v16; // r0@5
  void **v17; // r0@8
  int result; // r0@10
  unsigned int *v19; // r2@12
  signed int v20; // r1@14
  unsigned int *v21; // r2@16
  signed int v22; // r1@18
  unsigned int *v23; // r2@20
  signed int v24; // r1@22
  int *v25; // [sp+0h] [bp-C80h]@6
  int v26; // [sp+4h] [bp-C7Ch]@6
  __int64 v27; // [sp+8h] [bp-C78h]@6
  char v28; // [sp+10h] [bp-C70h]@6
  void (*v29)(void); // [sp+18h] [bp-C68h]@6
  int v30; // [sp+24h] [bp-C5Ch]@5
  int v31; // [sp+28h] [bp-C58h]@5
  int v32; // [sp+2Ch] [bp-C54h]@5
  int v33; // [sp+30h] [bp-C50h]@3
  int v34; // [sp+34h] [bp-C4Ch]@3
  int v35; // [sp+38h] [bp-C48h]@3
  int v36; // [sp+3Ch] [bp-C44h]@3
  int v37; // [sp+40h] [bp-C40h]@3
  int v38; // [sp+44h] [bp-C3Ch]@3
  int v39; // [sp+4Ch] [bp-C34h]@6
  char v40; // [sp+50h] [bp-C30h]@6
  int v41; // [sp+450h] [bp-830h]@6
  char v42; // [sp+454h] [bp-82Ch]@5
  int v43; // [sp+458h] [bp-828h]@6
  int v44; // [sp+858h] [bp-428h]@6
  char v45; // [sp+85Ch] [bp-424h]@3
  int v46; // [sp+860h] [bp-420h]@6
  int v47; // [sp+C60h] [bp-20h]@6
  RakNet *v48; // [sp+C64h] [bp-1Ch]@1

  v3 = (void **)this;
  v4 = a2;
  v5 = a3;
  v48 = _stack_chk_guard;
  if ( *((_DWORD *)a2 + 3) && (unsigned int)(BookScreenManager::_viewPage(a2, a3) - 1) <= 1 )
  {
    v6 = (Level *)Entity::getLevel(*(Entity **)v4);
    v7 = Level::getPhotoStorage(v6);
    v8 = Player::getSupplies(*(Player **)v4);
    v9 = (const ItemInstance *)PlayerInventoryProxy::getItem(v8, *((_DWORD *)v4 + 1), 0);
    WrittenBookItem::getBookId((WrittenBookItem *)&v33, v9);
    PhotoStorage::getBookPath((void **)&v34, v7, &v33);
    v10 = *((_DWORD *)v5 + 1);
    v11 = *(_DWORD *)(v34 - 12);
    v12 = *(_DWORD *)(v10 - 12);
    v35 = v34;
    v36 = v11;
    v37 = v10;
    v38 = v12;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v45, (int)&v35, 2);
    v13 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
    {
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
        j_j_j_j__ZdlPv_9(v13);
    }
    v14 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v33 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    v15 = Entity::getLevel(*(Entity **)v4);
    Level::getScreenshotsFolder((Level *)&v30, v15);
    v31 = v30;
    v32 = *(_DWORD *)(v30 - 12);
    File::cleanPath((int)&v42, (__int64 *)&v31);
    v16 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v30 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    v39 = 1023;
    v41 = 0;
    v40 = 0;
    LODWORD(v27) = &v46;
    HIDWORD(v27) = v47;
    v25 = &v43;
    v26 = v44;
    Core::PathBuffer<Core::StackString<char,1024u>>::makePathRelativeToParentPath(
      (int)&v28,
      (int)&v39,
      &v27,
      (__int64 *)&v25);
    if ( v29 )
      v29();
    sub_21E94B4(v3, &v40);
    v17 = &_stack_chk_guard_ptr;
  }
  else
    sub_21E8AF4((int *)v3, (int *)&Util::EMPTY_STRING);
  result = *(_DWORD *)*v17 - (_DWORD)v48;
  if ( result )
    _stack_chk_fail(result);
  return result;
}
