

int __fastcall StorageManagementScreenController::tick(StorageManagementScreenController *this)
{
  StorageManagementScreenController *v1; // r4@1
  int v2; // r6@1
  void *v3; // r0@5
  int v4; // r0@7
  unsigned int *v6; // r2@8
  signed int v7; // r1@10
  int v8; // [sp+4h] [bp-1Ch]@4

  v1 = this;
  v2 = MinecraftScreenController::tick(this);
  if ( *((_BYTE *)v1 + 519) )
  {
    *((_BYTE *)v1 + 519) = 0;
    StorageManagementScreenController::_deleteSelectedResources(v1);
  }
  if ( *((_BYTE *)v1 + 516) )
    sub_21E94B4((void **)&v8, "item_button_panel");
    if ( !*((_DWORD *)v1 + 127) )
      sub_21E5F48();
    (*((void (__fastcall **)(_DWORD, _DWORD))v1 + 128))((char *)v1 + 500, &v8);
    v3 = (void *)(v8 - 12);
    if ( (int *)(v8 - 12) != &dword_28898C0 )
    {
      v6 = (unsigned int *)(v8 - 4);
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
        j_j_j_j__ZdlPv_9(v3);
    }
    *((_BYTE *)v1 + 516) = 0;
  v4 = *((_DWORD *)v1 + 123);
  *((_DWORD *)v1 + 123) = 0;
  return v4 | v2;
}


int __fastcall StorageManagementScreenController::_deselectItem(int result, const ContentItem *a2)
{
  int v2; // r12@1
  int v3; // lr@1
  unsigned int v4; // r2@2
  const ContentItem *v5; // r3@3

  v2 = *(_QWORD *)(result + 468) >> 32;
  v3 = *(_QWORD *)(result + 468);
  if ( v2 != v3 )
  {
    v4 = 0;
    do
    {
      v5 = *(const ContentItem **)(v3 + 4 * v4);
      if ( v5 == a2 )
      {
        *(_DWORD *)(v3 + 4 * v4) = *(_DWORD *)(v2 - 4);
        *(_DWORD *)(v2 - 4) = v5;
        v2 = *(_DWORD *)(result + 472) - 4;
        *(_DWORD *)(result + 472) = v2;
        v3 = *(_DWORD *)(result + 468);
      }
      ++v4;
    }
    while ( v4 < (v2 - v3) >> 2 );
  }
  return result;
}


int __fastcall StorageManagementScreenController::setViewCommand(StorageManagementScreenController *this, ScreenViewCommand *a2)
{
  int v2; // r12@0
  int v3; // lr@0
  StorageManagementScreenController *v4; // r4@1
  int result; // r0@1
  ScreenViewCommand *v6; // r5@1
  void (__fastcall *v7)(int *, char *, signed int); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = this;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = (void (__fastcall *)(int *, char *, signed int))*((_DWORD *)a2 + 34);
  if ( v7 )
  {
    v7(&v11, (char *)a2 + 128, 2);
    result = *((_DWORD *)v6 + 35);
    v14 = *((_DWORD *)v6 + 35);
    v8 = *((_DWORD *)v6 + 34);
    v13 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v6 + 34);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = (int)v4 + 500;
  *(_QWORD *)&v11 = *(_QWORD *)((char *)v4 + 500);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v4 + 127);
  v10 = v13;
  *((_DWORD *)v4 + 127) = v8;
  v14 = *((_DWORD *)v4 + 128);
  *((_DWORD *)v4 + 128) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


void __fastcall StorageManagementScreenController::~StorageManagementScreenController(StorageManagementScreenController *this)
{
  StorageManagementScreenController *v1; // r0@1

  v1 = StorageManagementScreenController::~StorageManagementScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall StorageManagementScreenController::_deselectPacks(int result)
{
  *(_DWORD *)(result + 472) = *(_DWORD *)(result + 468);
  return result;
}


StorageManagementScreenController *__fastcall StorageManagementScreenController::~StorageManagementScreenController(StorageManagementScreenController *this)
{
  StorageManagementScreenController *v1; // r10@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  void (*v6)(void); // r3@3
  void *v7; // r5@5
  void *v8; // r7@5
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  int *v11; // r0@15
  void *v12; // r0@20
  unsigned int *v14; // r2@23
  signed int v15; // r1@25
  unsigned int *v16; // r2@27
  signed int v17; // r1@29

  v1 = this;
  *(_DWORD *)this = &off_26E7F38;
  v2 = *((_DWORD *)this + 132);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 131);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v4 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void (*)(void))*((_DWORD *)v1 + 127);
  if ( v6 )
    v6();
  v8 = (void *)(*((_QWORD *)v1 + 60) >> 32);
  v7 = (void *)*((_QWORD *)v1 + 60);
  if ( v7 != v8 )
    do
      v11 = (int *)(*(_DWORD *)v7 - 12);
      if ( v11 != &dword_28898C0 )
      {
        v9 = (unsigned int *)(*(_DWORD *)v7 - 4);
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
          j_j_j_j__ZdlPv_9(v11);
      }
      v7 = (char *)v7 + 12;
    while ( v7 != v8 );
    v7 = (void *)*((_DWORD *)v1 + 120);
  if ( v7 )
    operator delete(v7);
  v12 = (void *)*((_DWORD *)v1 + 117);
  if ( v12 )
    operator delete(v12);
  MainMenuScreenController::~MainMenuScreenController(v1);
  return v1;
}


void __fastcall StorageManagementScreenController::_loadData(StorageManagementScreenController *this)
{
  StorageManagementScreenController *v1; // r4@1
  int v2; // r1@1
  int v3; // r1@2
  int v4; // r1@2
  int v5; // r1@2
  int v6; // r1@2
  int v7; // r1@2
  __int64 v8; // r0@2
  unsigned __int64 *v9; // r0@2
  unsigned __int64 *v10; // r0@2
  unsigned __int64 *v11; // r0@2
  unsigned __int64 *v12; // r0@2
  void *ptr; // [sp+8h] [bp-20h]@2

  v1 = this;
  ContentManager::reloadSources(*((ContentManager **)this + 109), 1);
  if ( !*((_BYTE *)v1 + 432) )
  {
    ContentManager::loadContent(*((_DWORD *)v1 + 109), v2, 3, 0, 16LL);
    ContentManager::loadContent(*((_DWORD *)v1 + 109), v3, 3, 0, 1LL);
    ContentManager::loadContent(*((_DWORD *)v1 + 109), v4, 4, 0, 16LL);
    ContentManager::loadContent(*((_DWORD *)v1 + 109), v5, 4, 0, 1LL);
    ContentManager::loadContent(*((_DWORD *)v1 + 109), v6, 1, 0, 0LL);
    ContentManager::loadContent(*((_DWORD *)v1 + 109), v7, 2, 0, 0LL);
    LODWORD(v8) = *((_DWORD *)v1 + 109);
    ContentManager::populateDependencies(v8);
    v9 = (unsigned __int64 *)InvalidPacksFilterGroup::InvalidPacksFilterGroup((InvalidPacksFilterGroup *)&ptr);
    v10 = InvalidPacksFilterGroup::addFilter(v9, 0);
    v11 = InvalidPacksFilterGroup::addFilter(v10, 2);
    v12 = InvalidPacksFilterGroup::addFilter(v11, 1);
    InvalidPacksFilterGroup::addFilter(v12, 3);
    ContentManager::loadContent(*((ContentManager **)v1 + 109), (const InvalidPacksFilterGroup *)&ptr);
    *((_BYTE *)v1 + 432) = 1;
    if ( ptr )
      operator delete(ptr);
  }
}


void __fastcall StorageManagementScreenController::_loadData(StorageManagementScreenController *this)
{
  StorageManagementScreenController::_loadData(this);
}


int __fastcall StorageManagementScreenController::_deleteSelectedResources(StorageManagementScreenController *this)
{
  StorageManagementScreenController *v1; // r4@1
  signed int v2; // r5@1
  __int64 v3; // kr00_8@2
  unsigned int v4; // r1@2
  const void **v5; // r0@4
  void *v6; // r1@6
  int v7; // r0@6
  char *v8; // r1@7
  char *v9; // r0@9
  void *v10; // r0@10
  void *v11; // r0@11
  void *v12; // r0@12
  unsigned int v13; // r5@13
  void *v14; // r0@13
  signed int v15; // r7@15
  signed int v16; // r5@15
  void *v17; // r0@17
  void *v18; // r0@19
  void *v19; // r0@21
  __int64 v20; // kr08_8@25
  unsigned int *v21; // r0@26
  unsigned int v22; // r1@28
  unsigned int v23; // r1@33
  void *v24; // r0@36
  __int64 v25; // r2@36 OVERLAPPED
  unsigned int *v26; // r1@37
  int (__fastcall *v27)(_DWORD *, void **, int); // r1@42
  unsigned int *v28; // r4@45
  unsigned int v29; // r0@47
  unsigned int v30; // r0@54
  char *v31; // r0@59
  int *v32; // r4@60
  int *v33; // r6@60
  unsigned int *v34; // r2@62
  signed int v35; // r1@64
  int *v36; // r0@70
  _DWORD *v37; // r4@75
  _DWORD *v38; // r6@75
  unsigned int *v39; // r2@77
  signed int v40; // r1@79
  int *v41; // r0@85
  unsigned int *v43; // r2@92
  signed int v44; // r1@94
  unsigned int *v45; // r2@96
  signed int v46; // r1@98
  unsigned int *v47; // r2@100
  signed int v48; // r1@102
  unsigned int *v49; // r2@104
  signed int v50; // r1@106
  unsigned int *v51; // r2@108
  signed int v52; // r1@110
  unsigned int *v53; // r2@112
  signed int v54; // r1@114
  unsigned int *v55; // r2@116
  signed int v56; // r1@118
  unsigned int *v57; // r2@140
  signed int v58; // r1@142
  unsigned int *v59; // r2@144
  signed int v60; // r1@146
  void *v61; // [sp+0h] [bp-B8h]@42
  void (*v62)(void); // [sp+8h] [bp-B0h]@36
  int v63; // [sp+14h] [bp-A4h]@16
  int v64; // [sp+1Ch] [bp-9Ch]@15
  int v65; // [sp+20h] [bp-98h]@15
  int v66; // [sp+24h] [bp-94h]@13
  char *v67; // [sp+28h] [bp-90h]@13
  int *v68; // [sp+2Ch] [bp-8Ch]@13
  int *v69; // [sp+30h] [bp-88h]@13
  int *v70; // [sp+34h] [bp-84h]@13
  int v71; // [sp+3Ch] [bp-7Ch]@2
  int v72; // [sp+40h] [bp-78h]@2
  unsigned int v73; // [sp+48h] [bp-70h]@2
  char *v74; // [sp+4Ch] [bp-6Ch]@6
  _DWORD *v75; // [sp+50h] [bp-68h]@2
  _DWORD *v76; // [sp+54h] [bp-64h]@2
  _DWORD *v77; // [sp+58h] [bp-60h]@2
  void *v78; // [sp+5Ch] [bp-5Ch]@2
  int v79; // [sp+60h] [bp-58h]@2
  int v80; // [sp+64h] [bp-54h]@2
  int v81; // [sp+68h] [bp-50h]@2
  void *v82; // [sp+6Ch] [bp-4Ch]@2
  int v83; // [sp+70h] [bp-48h]@2
  int v84; // [sp+74h] [bp-44h]@2
  int v85; // [sp+78h] [bp-40h]@2
  void *v86; // [sp+7Ch] [bp-3Ch]@2
  void *v87; // [sp+80h] [bp-38h]@2
  void *v88; // [sp+84h] [bp-34h]@2
  void *v89; // [sp+88h] [bp-30h]@2
  int v90; // [sp+8Ch] [bp-2Ch]@2
  char v91; // [sp+90h] [bp-28h]@2

  v1 = this;
  v2 = (*(_QWORD *)((char *)this + 468) >> 32) - *(_QWORD *)((char *)this + 468);
  if ( v2 >> 2 )
  {
    v78 = &unk_28898CC;
    v79 = 0;
    v80 = 0;
    v81 = 0;
    v82 = &unk_28898CC;
    v83 = 0;
    v84 = 0;
    v85 = 0;
    v86 = &unk_28898CC;
    v87 = &unk_28898CC;
    v88 = &unk_28898CC;
    v89 = &unk_28898CC;
    v90 = 1;
    v91 = 0;
    v75 = 0;
    v76 = 0;
    v77 = 0;
    sub_21E94B4((void **)&v73, "\n\n");
    sub_21E94B4((void **)&v71, "storageManager.delete.content.redownload");
    I18n::get(&v72, (int **)&v71);
    v3 = *(_QWORD *)(v73 - 12);
    v4 = *(_DWORD *)(v72 - 12) + v3;
    if ( v4 > HIDWORD(v3) && v4 <= *(_DWORD *)(v72 - 8) )
      v5 = sub_21E82D8((const void **)&v72, 0, v73, (_BYTE *)v3);
    else
      v5 = sub_21E72F0((const void **)&v73, (const void **)&v72);
    v6 = (void *)*v5;
    v74 = (char *)*v5;
    *v5 = &unk_28898CC;
    v7 = (int)v76;
    if ( v76 == v77 )
    {
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
        (unsigned __int64 *)&v75,
        &v74);
      v8 = v74;
    }
      *v76 = v6;
      v76 = (_DWORD *)(v7 + 4);
      v8 = (char *)&unk_28898CC;
      v74 = (char *)&unk_28898CC;
    v9 = v8 - 12;
    if ( (int *)(v8 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v8 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
      }
      else
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    v10 = (void *)(v72 - 12);
    if ( (int *)(v72 - 12) != &dword_28898C0 )
      v45 = (unsigned int *)(v72 - 4);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    v11 = (void *)(v71 - 12);
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v47 = (unsigned int *)(v71 - 4);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v12 = (void *)(v73 - 12);
    if ( (int *)(v73 - 12) != &dword_28898C0 )
      v49 = (unsigned int *)(v73 - 4);
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
        v50 = (*v49)--;
      if ( v50 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    std::vector<std::string,std::allocator<std::string>>::operator=((int)&v83, (unsigned __int64 *)&v75);
    v13 = v2 >> 2;
    v68 = 0;
    v69 = 0;
    v70 = 0;
    v67 = (char *)&unk_28898CC;
    Util::toString<unsigned int,(void *)0,(void *)0>((void **)&v66, v13);
    sub_21E72F0((const void **)&v67, (const void **)&v66);
    v14 = (void *)(v66 - 12);
    if ( (int *)(v66 - 12) != &dword_28898C0 )
      v51 = (unsigned int *)(v66 - 4);
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
        v52 = (*v51)--;
      if ( v52 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    sub_21E7408((const void **)&v67, " ", 1u);
    if ( v13 == 1 )
      sub_21E94B4((void **)&v64, "storageManager.title.item.single");
      I18n::get(&v65, (int **)&v64);
      v15 = 0;
      v16 = 1;
      sub_21E94B4((void **)&v63, "storageManager.title.item.plural");
      I18n::get(&v65, (int **)&v63);
      v15 = 1;
      v16 = 0;
    sub_21E72F0((const void **)&v67, (const void **)&v65);
    v17 = (void *)(v65 - 12);
    if ( (int *)(v65 - 12) != &dword_28898C0 )
      v53 = (unsigned int *)(v65 - 4);
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
        v54 = (*v53)--;
      if ( v54 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    if ( v15 == 1 )
      v18 = (void *)(v63 - 12);
      if ( (int *)(v63 - 12) != &dword_28898C0 )
        v57 = (unsigned int *)(v63 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v58 = __ldrex(v57);
          while ( __strex(v58 - 1, v57) );
        }
        else
          v58 = (*v57)--;
        if ( v58 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
    if ( v16 == 1 )
      v19 = (void *)(v64 - 12);
      if ( (int *)(v64 - 12) != &dword_28898C0 )
        v59 = (unsigned int *)(v64 - 4);
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
          v60 = (*v59)--;
        if ( v60 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
    if ( v69 == v70 )
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
        (unsigned __int64 *)&v68,
        (int *)&v67);
      sub_21E8AF4(v69, (int *)&v67);
      ++v69;
    std::vector<std::string,std::allocator<std::string>>::operator=((int)&v79, (unsigned __int64 *)&v68);
    sub_21E8190(&v82, "storageManager.delete.content", (_BYTE *)0x1D);
    sub_21E8190(&v78, "storageManager.delete.title", (_BYTE *)0x1B);
    sub_21E8190(&v87, "storageManager.delete.confirm", (_BYTE *)0x1D);
    sub_21E8190(&v89, "gui.cancel", (_BYTE *)0xA);
    v20 = *((_QWORD *)v1 + 53);
    if ( HIDWORD(v20) )
      v21 = (unsigned int *)(HIDWORD(v20) + 8);
          v22 = __ldrex(v21);
        while ( __strex(v22 + 1, v21) );
        ++*v21;
          v23 = __ldrex(v21);
        while ( __strex(v23 + 1, v21) );
    v62 = 0;
    v24 = operator new(0xCu);
    *(_DWORD *)v24 = v1;
    *(_QWORD *)((char *)v24 + 4) = v20;
      v26 = (unsigned int *)(HIDWORD(v20) + 8);
          LODWORD(v25) = __ldrex(v26);
          HIDWORD(v25) = __strex(v25 + 1, v26);
        while ( HIDWORD(v25) );
        ++*v26;
    v27 = sub_14002B0;
    v61 = v24;
    LODWORD(v25) = sub_1400158;
    *(_QWORD *)&v62 = *(__int64 *)((char *)&v25 - 4);
    LODWORD(v25) = &v61;
    MinecraftScreenController::_displayCustomModalPopup((int)v1, (int)&v78, v25);
    if ( v62 )
      v62();
      v28 = (unsigned int *)(HIDWORD(v20) + 8);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v20) + 12))(HIDWORD(v20));
          v30 = __ldrex(v28);
        while ( __strex(v30 - 1, v28) );
        v30 = (*v28)--;
      if ( v30 == 1 )
    v31 = v67 - 12;
    if ( (int *)(v67 - 12) != &dword_28898C0 )
      v55 = (unsigned int *)(v67 - 4);
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
        v56 = (*v55)--;
      if ( v56 <= 0 )
        j_j_j_j__ZdlPv_9(v31);
    v33 = v69;
    v32 = v68;
    if ( v68 != v69 )
      do
        v36 = (int *)(*v32 - 12);
        if ( v36 != &dword_28898C0 )
          v34 = (unsigned int *)(*v32 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v35 = __ldrex(v34);
            while ( __strex(v35 - 1, v34) );
          }
          else
            v35 = (*v34)--;
          if ( v35 <= 0 )
            j_j_j_j__ZdlPv_9(v36);
        ++v32;
      while ( v32 != v33 );
      v32 = v68;
    if ( v32 )
      operator delete(v32);
    v38 = v76;
    v37 = v75;
    if ( v75 != v76 )
        v41 = (int *)(*v37 - 12);
        if ( v41 != &dword_28898C0 )
          v39 = (unsigned int *)(*v37 - 4);
              v40 = __ldrex(v39);
            while ( __strex(v40 - 1, v39) );
            v40 = (*v39)--;
          if ( v40 <= 0 )
            j_j_j_j__ZdlPv_9(v41);
        ++v37;
      while ( v37 != v38 );
      v37 = v75;
    if ( v37 )
      operator delete(v37);
    ModalScreenData::~ModalScreenData((ModalScreenData *)&v78);
  }
  return 0;
}


int __fastcall StorageManagementScreenController::StorageManagementScreenController(int a1, int a2, int a3)
{
  int v3; // r8@1
  int v4; // r5@1
  int v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  int v8; // r6@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r7@14
  unsigned int v12; // r0@16
  int v13; // r5@21
  unsigned int *v14; // r1@22
  unsigned int v15; // r0@24
  unsigned int *v16; // r6@28
  unsigned int v17; // r0@30
  char v19; // [sp+4h] [bp-3Ch]@21
  int v20; // [sp+8h] [bp-38h]@21
  int v21; // [sp+Ch] [bp-34h]@21
  int v22; // [sp+10h] [bp-30h]@1
  int v23; // [sp+14h] [bp-2Ch]@1

  v3 = a1;
  v22 = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  v23 = v5;
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
    }
    else
      ++*v6;
  }
  MainMenuScreenController::MainMenuScreenController(v3, (int)&v22);
  v8 = v23;
  if ( v23 )
    v9 = (unsigned int *)(v23 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  *(_DWORD *)v3 = &off_26E7F38;
  *(_BYTE *)(v3 + 432) = 0;
  *(_DWORD *)(v3 + 436) = v4;
  *(_DWORD *)(v3 + 508) = 0;
  *(_DWORD *)(v3 + 484) = 0;
  *(_DWORD *)(v3 + 488) = 0;
  *(_DWORD *)(v3 + 476) = 0;
  *(_DWORD *)(v3 + 480) = 0;
  *(_DWORD *)(v3 + 468) = 0;
  *(_DWORD *)(v3 + 472) = 0;
  *(_BYTE *)(v3 + 520) = 0;
  *(_DWORD *)(v3 + 516) = 0;
  *(_DWORD *)(v3 + 524) = &unk_28898CC;
  *(_DWORD *)(v3 + 528) = &unk_28898CC;
  *(_BYTE *)(v3 + 532) = 0;
  StorageManagementScreenController::_registerBindings((StorageManagementScreenController *)v3);
  MinecraftScreenController::_setExitBehavior(v3, 3);
  std::make_unique<StorageDependencyScreenController,std::shared_ptr<MainMenuScreenModel> &,ContentManager &,std::vector<ContentItem *,std::allocator<ContentItem *>> &>(
    &v21,
    v3 + 424,
    *(_DWORD *)(v3 + 436),
    v3 + 468);
  *(_DWORD *)(v3 + 496) = v21;
  std::__shared_ptr<ScreenController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<StorageDependencyScreenController,std::default_delete<std::default_delete>>(
    (int)&v19,
    &v21);
  ScreenController::_registerSubController(v3, (int)&v19);
  v13 = v20;
  if ( v20 )
    v14 = (unsigned int *)(v20 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  if ( v21 )
    (*(void (**)(void))(*(_DWORD *)v21 + 4))();
  return v3;
}


void __fastcall StorageManagementScreenController::_registerBindings(StorageManagementScreenController *this)
{
  StorageManagementScreenController::_registerBindings(this);
}


signed int __fastcall StorageManagementScreenController::_deleteButtonPressed(StorageManagementScreenController *this)
{
  StorageManagementScreenController *v1; // r4@1
  unsigned int v2; // r5@1
  _DWORD *v3; // r0@1
  signed int v4; // r4@1
  _DWORD *v6; // [sp+0h] [bp-20h]@1
  void (__cdecl *v7)(_DWORD); // [sp+8h] [bp-18h]@1
  int (__fastcall *v8)(int **, int); // [sp+Ch] [bp-14h]@1

  v1 = this;
  *((_BYTE *)this + 532) = 1;
  v2 = *((_DWORD *)this + 124);
  v3 = operator new(4u);
  *v3 = v1;
  v6 = v3;
  v7 = (void (__cdecl *)(_DWORD))sub_1400120;
  v8 = sub_14000FE;
  v4 = StorageDependencyScreenController::createDepdendencyPopup(__PAIR__(&v6, v2));
  if ( v7 )
    v7(&v6);
  return v4;
}


void __fastcall StorageManagementScreenController::_registerBindings(StorageManagementScreenController *this)
{
  StorageManagementScreenController *v1; // r8@1
  int v2; // r5@1
  int v3; // r5@3
  int v4; // r5@5
  int v5; // r5@7
  int v6; // r5@9
  int v7; // r5@11
  void *v8; // r5@13
  void *v9; // r0@13
  void *v10; // r0@14
  int v11; // r6@15
  _DWORD *v12; // r0@15
  int v13; // r5@19
  _DWORD *v14; // r0@19
  ContentView *v15; // r0@19
  void *v16; // r0@21
  void *v17; // r0@22
  void *v18; // r0@23
  void *v19; // r0@24
  void *v20; // r0@25
  void *v21; // r0@26
  void *v22; // r0@27
  int v23; // r4@28
  int i; // r7@28
  int v25; // r6@29
  int v26; // r2@29
  int v27; // r5@32
  _DWORD *v28; // r0@32
  void *v29; // r0@34
  _DWORD *v30; // r0@35
  _DWORD *v31; // r0@39
  _DWORD *v32; // r0@43
  _DWORD *v33; // r0@47
  _DWORD *v34; // r0@49
  _DWORD *v35; // r0@53
  int v36; // r5@57
  _DWORD *v37; // r0@57
  void *v38; // r0@59
  int v39; // r5@60
  _DWORD *v40; // r0@60
  void *v41; // r0@62
  int v42; // r7@63
  int v43; // r10@63
  const void **v44; // r6@64
  const void **v45; // r4@64
  int *v46; // r9@64
  unsigned int *v47; // r2@65
  signed int v48; // r1@67
  unsigned int *v49; // r2@69
  signed int v50; // r1@71
  unsigned int *v51; // r2@73
  signed int v52; // r1@75
  unsigned int *v53; // r2@77
  signed int v54; // r1@79
  unsigned int *v55; // r2@81
  signed int v56; // r1@83
  unsigned int *v57; // r2@85
  signed int v58; // r1@87
  unsigned int *v59; // r2@89
  signed int v60; // r1@91
  unsigned int *v61; // r2@93
  signed int v62; // r1@95
  unsigned int *v63; // r2@97
  signed int v64; // r1@99
  unsigned int *v65; // r2@101
  signed int v66; // r1@103
  unsigned int *v67; // r2@105
  signed int v68; // r1@107
  unsigned int *v69; // r2@109
  signed int v70; // r1@111
  unsigned int *v71; // r2@113
  signed int v72; // r1@115
  unsigned int *v73; // r2@117
  signed int v74; // r1@119
  unsigned int *v75; // r2@121
  signed int v76; // r1@123
  const void **v77; // r7@124
  unsigned int *v78; // r2@125
  signed int v79; // r1@127
  unsigned int *v80; // r2@129
  signed int v81; // r1@131
  unsigned int *v82; // r2@133
  signed int v83; // r1@135
  unsigned int *v84; // r2@137
  signed int v85; // r1@139
  unsigned int *v86; // r2@141
  signed int v87; // r1@143
  unsigned int *v88; // r2@153
  signed int v89; // r1@155
  unsigned int *v90; // r2@157
  signed int v91; // r1@159
  unsigned int *v92; // r2@169
  signed int v93; // r1@171
  unsigned int *v94; // r2@173
  signed int v95; // r1@175
  char *v96; // r5@176
  unsigned int *v97; // r2@185
  signed int v98; // r1@187
  unsigned int *v99; // r2@189
  signed int v100; // r1@191
  unsigned int *v101; // r2@209
  signed int v102; // r1@211
  unsigned int *v103; // r2@213
  signed int v104; // r1@215
  unsigned int *v105; // r2@217
  signed int v106; // r1@219
  unsigned int *v107; // r2@229
  signed int v108; // r1@231
  int *v109; // r7@232
  unsigned int *v110; // r2@233
  signed int v111; // r1@235
  unsigned int *v112; // r2@237
  signed int v113; // r1@239
  unsigned int *v114; // r2@249
  signed int v115; // r1@251
  char *v116; // r7@252
  unsigned int *v117; // r2@253
  signed int v118; // r1@255
  unsigned int *v119; // r2@257
  signed int v120; // r1@259
  unsigned int *v121; // r2@273
  signed int v122; // r1@275
  char *v123; // r7@276
  unsigned int *v124; // r2@277
  signed int v125; // r1@279
  unsigned int *v126; // r2@281
  signed int v127; // r1@283
  unsigned int *v128; // r2@297
  signed int v129; // r1@299
  char *v130; // r7@300
  unsigned int *v131; // r2@301
  signed int v132; // r1@303
  unsigned int *v133; // r2@305
  signed int v134; // r1@307
  unsigned int *v135; // r2@321
  signed int v136; // r1@323
  char *v137; // r7@324
  unsigned int *v138; // r2@325
  signed int v139; // r1@327
  unsigned int *v140; // r2@329
  signed int v141; // r1@331
  unsigned int *v142; // r2@345
  signed int v143; // r1@347
  char *v144; // r7@348
  unsigned int *v145; // r2@349
  signed int v146; // r1@351
  unsigned int *v147; // r2@353
  signed int v148; // r1@355
  unsigned int *v149; // r2@369
  signed int v150; // r1@371
  unsigned int *v151; // r2@373
  signed int v152; // r1@375
  unsigned int *v153; // r2@377
  signed int v154; // r1@379
  unsigned int *v155; // r2@393
  signed int v156; // r1@395
  unsigned int *v157; // r2@397
  signed int v158; // r1@399
  unsigned int *v159; // r2@401
  signed int v160; // r1@403
  unsigned int *v161; // r2@417
  signed int v162; // r1@419
  char *v163; // r7@420
  unsigned int *v164; // r2@433
  signed int v165; // r1@435
  char *v166; // r7@436
  unsigned int *v167; // r2@437
  signed int v168; // r1@439
  unsigned int *v169; // r2@441
  signed int v170; // r1@443
  unsigned int *v171; // r2@457
  signed int v172; // r1@459
  char *v173; // r7@460
  unsigned int *v174; // r2@461
  signed int v175; // r1@463
  unsigned int *v176; // r2@465
  signed int v177; // r1@467
  unsigned int *v178; // r2@473
  signed int v179; // r1@475
  char *v180; // r7@476
  unsigned int *v181; // r2@477
  signed int v182; // r1@479
  unsigned int *v183; // r2@481
  signed int v184; // r1@483
  unsigned int *v185; // r2@497
  signed int v186; // r1@499
  char *v187; // r7@500
  unsigned int *v188; // r2@501
  signed int v189; // r1@503
  unsigned int *v190; // r2@505
  signed int v191; // r1@507
  unsigned int *v192; // r2@521
  signed int v193; // r1@523
  unsigned int *v194; // r2@525
  signed int v195; // r1@527
  unsigned int *v196; // r2@529
  signed int v197; // r1@531
  unsigned int *v198; // r2@545
  signed int v199; // r1@547
  unsigned int *v200; // r2@549
  signed int v201; // r1@551
  unsigned int *v202; // r2@553
  signed int v203; // r1@555
  unsigned int *v204; // r2@569
  signed int v205; // r1@571
  unsigned int *v206; // r2@585
  signed int v207; // r1@587
  unsigned int *v208; // r2@589
  signed int v209; // r1@591
  unsigned int *v210; // r2@593
  signed int v211; // r1@595
  int v212; // r0@625
  const void **v213; // r0@625
  const char *v214; // r6@625
  size_t v215; // r0@625
  int v216; // r1@625
  const char *j; // r2@625
  int v218; // t1@626
  _DWORD *v219; // r0@627
  char *v220; // r0@632
  const void **v221; // r0@633
  const char *v222; // r6@633
  size_t v223; // r0@633
  int v224; // r1@633
  const char *k; // r2@633
  int v226; // t1@634
  _DWORD *v227; // r0@635
  char *v228; // r0@640
  const void **v229; // r0@641
  const char *v230; // r6@641
  size_t v231; // r0@641
  int v232; // r1@641
  const char *l; // r2@641
  int v234; // t1@642
  _DWORD *v235; // r0@643
  char *v236; // r0@648
  const void **v237; // r0@649
  const char *v238; // r6@649
  size_t v239; // r0@649
  int v240; // r1@649
  const char *m; // r2@649
  int v242; // t1@650
  _DWORD *v243; // r0@651
  char *v244; // r0@656
  const void **v245; // r0@657
  const char *v246; // r6@657
  size_t v247; // r0@657
  int v248; // r1@657
  const char *n; // r2@657
  int v250; // t1@658
  _DWORD *v251; // r0@659
  char *v252; // r0@664
  const void **v253; // r0@665
  const char *v254; // r6@665
  size_t v255; // r0@665
  int v256; // r1@665
  const char *ii; // r2@665
  int v258; // t1@666
  char *v259; // r0@672
  const void **v260; // r0@673
  int v261; // r6@673
  _DWORD *v262; // r0@673
  char *v263; // r0@675
  char *v264; // r0@676
  const void **v265; // r0@677
  const char *v266; // r4@677
  size_t v267; // r0@677
  int v268; // r1@677
  const char *jj; // r2@677
  int v270; // t1@678
  int *v271; // r0@679
  char *v272; // r7@679
  size_t v273; // r0@679
  int kk; // r1@679
  int v275; // t1@680
  _DWORD *v276; // r0@681
  char *v277; // r0@685
  char *v278; // r0@687
  const void **v279; // r0@688
  const char *v280; // r9@688
  size_t v281; // r0@688
  int v282; // r1@688
  const char *ll; // r2@688
  int v284; // t1@689
  int *v285; // r0@690
  char *v286; // r7@690
  size_t v287; // r0@690
  int mm; // r1@690
  int v289; // t1@691
  _DWORD *v290; // r0@692
  char *v291; // r0@696
  char *v292; // r0@698
  const void **v293; // r0@699
  const char *v294; // r9@699
  size_t v295; // r0@699
  int v296; // r1@699
  const char *nn; // r2@699
  int v298; // t1@700
  int *v299; // r0@701
  char *v300; // r6@701
  char *v301; // r7@701
  size_t v302; // r0@701
  int i1; // r1@701
  int v304; // t1@702
  _DWORD *v305; // r0@703
  char *v306; // r0@707
  char *v307; // r0@709
  const void **v308; // r0@710
  const char *v309; // r9@710
  size_t v310; // r0@710
  int v311; // r1@710
  const char *i2; // r2@710
  int v313; // t1@711
  int *v314; // r0@712
  char *v315; // r6@712
  char *v316; // r7@712
  size_t v317; // r0@712
  int i3; // r1@712
  int v319; // t1@713
  _DWORD *v320; // r0@714
  char *v321; // r0@718
  char *v322; // r0@720
  const void **v323; // r0@721
  const char *v324; // r9@721
  size_t v325; // r0@721
  int v326; // r1@721
  const char *i4; // r2@721
  int v328; // t1@722
  int *v329; // r0@723
  char *v330; // r6@723
  char *v331; // r7@723
  size_t v332; // r0@723
  int i5; // r1@723
  int v334; // t1@724
  _DWORD *v335; // r0@725
  char *v336; // r0@729
  char *v337; // r0@731
  const void **v338; // r0@732
  const char *v339; // r9@732
  size_t v340; // r0@732
  int v341; // r1@732
  const char *i6; // r2@732
  int v343; // t1@733
  int *v344; // r0@734
  char *v345; // r6@734
  char *v346; // r7@734
  size_t v347; // r0@734
  int i7; // r1@734
  int v349; // t1@735
  _DWORD *v350; // r0@736
  char *v351; // r0@740
  char *v352; // r0@742
  const void **v353; // r0@743
  const char *v354; // r9@743
  size_t v355; // r0@743
  int v356; // r1@743
  const char *i8; // r2@743
  int v358; // t1@744
  int *v359; // r0@745
  char *v360; // r6@745
  char *v361; // r7@745
  size_t v362; // r0@745
  int i9; // r1@745
  int v364; // t1@746
  _DWORD *v365; // r0@747
  char *v366; // r0@751
  char *v367; // r0@753
  const void **v368; // r0@754
  char *v369; // r9@754
  const char *v370; // r7@754
  size_t v371; // r0@754
  int v372; // r1@754
  const char *i10; // r2@754
  int v374; // t1@755
  int *v375; // r0@756
  char *v376; // r6@756
  size_t v377; // r0@756
  int i11; // r1@756
  int v379; // t1@757
  _DWORD *v380; // r0@758
  char *v381; // r0@762
  char *v382; // r0@764
  const void **v383; // r0@765
  const char *v384; // r4@765
  size_t v385; // r0@765
  int v386; // r1@765
  const char *i12; // r2@765
  int v388; // t1@766
  int *v389; // r0@767
  char *v390; // r6@767
  size_t v391; // r0@767
  int i13; // r1@767
  int v393; // t1@768
  _DWORD *v394; // r0@769
  char *v395; // r0@773
  char *v396; // r0@775
  int v397; // r6@776
  _DWORD *v398; // r0@776
  void *v399; // r0@778
  const void **v400; // r0@779
  const char *v401; // r9@779
  size_t v402; // r0@779
  int v403; // r1@779
  const char *i14; // r2@779
  int v405; // t1@780
  int *v406; // r0@781
  char *v407; // r6@781
  char *v408; // r7@781
  size_t v409; // r0@781
  int i15; // r1@781
  int v411; // t1@782
  _DWORD *v412; // r0@783
  char *v413; // r0@787
  char *v414; // r0@789
  const void **v415; // r0@790
  const char *v416; // r9@790
  size_t v417; // r0@790
  int v418; // r1@790
  const char *i16; // r2@790
  int v420; // t1@791
  int *v421; // r0@792
  char *v422; // r6@792
  char *v423; // r7@792
  size_t v424; // r0@792
  int i17; // r1@792
  int v426; // t1@793
  _DWORD *v427; // r0@794
  char *v428; // r0@798
  char *v429; // r0@800
  const void **v430; // r0@801
  const char *v431; // r9@801
  size_t v432; // r0@801
  int v433; // r1@801
  const char *i18; // r2@801
  int v435; // t1@802
  int *v436; // r0@803
  char *v437; // r6@803
  char *v438; // r7@803
  size_t v439; // r0@803
  int i19; // r1@803
  int v441; // t1@804
  _DWORD *v442; // r0@805
  char *v443; // r0@809
  char *v444; // r0@811
  const void **v445; // r0@812
  const char *v446; // r9@812
  size_t v447; // r0@812
  int v448; // r1@812
  const char *i20; // r2@812
  int v450; // t1@813
  int *v451; // r0@814
  char *v452; // r6@814
  char *v453; // r7@814
  size_t v454; // r0@814
  int i21; // r1@814
  int v456; // t1@815
  _DWORD *v457; // r0@816
  char *v458; // r0@820
  char *v459; // r0@822
  const void **v460; // r0@823
  const char *v461; // r4@823
  size_t v462; // r0@823
  int v463; // r1@823
  const char *i22; // r2@823
  int v465; // t1@824
  char *v466; // r6@825
  char *v467; // r7@825
  size_t v468; // r0@825
  int i23; // r1@825
  int v470; // t1@826
  _DWORD *v471; // r0@827
  char *v472; // r0@831
  char *v473; // r0@833
  const void **v474; // r0@834
  const char *v475; // r9@834
  size_t v476; // r0@834
  int v477; // r1@834
  const char *i24; // r2@834
  int v479; // t1@835
  int *v480; // r0@836
  char *v481; // r7@836
  size_t v482; // r0@836
  int i25; // r1@836
  int v484; // t1@837
  char *v485; // r0@842
  char *v486; // r0@844
  char *v487; // r6@845
  size_t v488; // r0@845
  int i26; // r1@845
  int v490; // t1@846
  _DWORD *v491; // r0@847
  signed int (__fastcall *v492)(ContentView ***, unsigned int); // r6@847 OVERLAPPED
  char *v493; // r0@851
  const void **v494; // r0@852
  const char *v495; // r4@852
  size_t v496; // r0@852
  const char *v497; // r2@852
  int v498; // r1@852
  int (__fastcall *i27)(void **, _DWORD **, int); // r5@852 OVERLAPPED
  int v500; // t1@853
  char *v501; // r7@854
  size_t v502; // r0@854
  int i28; // r1@854
  int v504; // t1@855
  _DWORD *v505; // r0@856
  char *v506; // r0@860
  char *v507; // r0@862
  _DWORD *v508; // r0@864
  __int64 v509; // r1@864
  __int64 v510; // r1@864
  _DWORD *v511; // r0@868
  __int64 v512; // r1@868
  __int64 v513; // r1@868
  _DWORD *v514; // r0@872
  __int64 v515; // r1@872
  __int64 v516; // r1@872
  _DWORD *v517; // r0@876
  __int64 v518; // r1@876
  __int64 v519; // r1@876
  _DWORD *v520; // r0@880
  __int64 v521; // r1@880
  __int64 v522; // r1@880
  _DWORD *v523; // r0@884
  __int64 v524; // r1@884
  __int64 v525; // r1@884
  _DWORD *v526; // r0@888
  __int64 v527; // r1@888
  __int64 v528; // r1@888
  _DWORD *v529; // r0@892
  __int64 v530; // r1@892
  __int64 v531; // r1@892
  _DWORD *v532; // r0@896
  __int64 v533; // r1@896
  __int64 v534; // r1@896
  int v535; // r5@900
  _DWORD *v536; // r0@900
  __int64 v537; // r1@900
  void *v538; // r0@902
  int v539; // r5@903
  _DWORD *v540; // r0@903
  __int64 v541; // r1@903
  void *v542; // r0@905
  _DWORD *v543; // r0@906
  __int64 v544; // r1@906
  int v545; // r5@908
  _DWORD *v546; // r0@908
  __int64 v547; // r1@908
  void *v548; // r0@910
  int v549; // r5@911
  _DWORD *v550; // r0@911
  __int64 v551; // r1@911
  void *v552; // r0@913
  int v553; // r5@914
  _DWORD *v554; // r0@914
  __int64 v555; // r1@914
  void *v556; // r0@916
  unsigned int *v557; // r2@966
  signed int v558; // r1@968
  unsigned int *v559; // r2@970
  signed int v560; // r1@972
  unsigned int *v561; // r2@974
  signed int v562; // r1@976
  unsigned int *v563; // r2@978
  signed int v564; // r1@980
  unsigned int *v565; // r2@982
  signed int v566; // r1@984
  int v567; // [sp+94h] [bp-8C4h]@625
  const char *v568; // [sp+B4h] [bp-8A4h]@852
  int v569; // [sp+CCh] [bp-88Ch]@625
  int v570; // [sp+D0h] [bp-888h]@625
  _DWORD *v571; // [sp+D4h] [bp-884h]@914
  __int64 v572; // [sp+DCh] [bp-87Ch]@914
  int v573; // [sp+E8h] [bp-870h]@914
  _DWORD *v574; // [sp+ECh] [bp-86Ch]@911
  __int64 v575; // [sp+F4h] [bp-864h]@911
  int v576; // [sp+100h] [bp-858h]@911
  _DWORD *v577; // [sp+104h] [bp-854h]@908
  __int64 v578; // [sp+10Ch] [bp-84Ch]@908
  int v579; // [sp+118h] [bp-840h]@908
  _DWORD *v580; // [sp+11Ch] [bp-83Ch]@906
  __int64 v581; // [sp+124h] [bp-834h]@906
  int v582; // [sp+12Ch] [bp-82Ch]@906
  _DWORD *v583; // [sp+130h] [bp-828h]@903
  __int64 v584; // [sp+138h] [bp-820h]@903
  int v585; // [sp+144h] [bp-814h]@903
  _DWORD *v586; // [sp+148h] [bp-810h]@900
  __int64 v587; // [sp+150h] [bp-808h]@900
  int v588; // [sp+15Ch] [bp-7FCh]@900
  void *v589; // [sp+160h] [bp-7F8h]@896
  __int64 v590; // [sp+168h] [bp-7F0h]@896
  _DWORD *v591; // [sp+170h] [bp-7E8h]@896
  __int64 v592; // [sp+178h] [bp-7E0h]@896
  int v593; // [sp+180h] [bp-7D8h]@896
  void *v594; // [sp+184h] [bp-7D4h]@892
  __int64 v595; // [sp+18Ch] [bp-7CCh]@892
  _DWORD *v596; // [sp+194h] [bp-7C4h]@892
  __int64 v597; // [sp+19Ch] [bp-7BCh]@892
  int v598; // [sp+1A4h] [bp-7B4h]@892
  int v599; // [sp+1A8h] [bp-7B0h]@892
  void *v600; // [sp+1ACh] [bp-7ACh]@888
  __int64 v601; // [sp+1B4h] [bp-7A4h]@888
  _DWORD *v602; // [sp+1BCh] [bp-79Ch]@888
  __int64 v603; // [sp+1C4h] [bp-794h]@888
  int v604; // [sp+1CCh] [bp-78Ch]@888
  int v605; // [sp+1D0h] [bp-788h]@888
  void *v606; // [sp+1D4h] [bp-784h]@884
  __int64 v607; // [sp+1DCh] [bp-77Ch]@884
  _DWORD *v608; // [sp+1E4h] [bp-774h]@884
  __int64 v609; // [sp+1ECh] [bp-76Ch]@884
  int v610; // [sp+1F4h] [bp-764h]@884
  int v611; // [sp+1F8h] [bp-760h]@884
  void *v612; // [sp+1FCh] [bp-75Ch]@880
  __int64 v613; // [sp+204h] [bp-754h]@880
  _DWORD *v614; // [sp+20Ch] [bp-74Ch]@880
  __int64 v615; // [sp+214h] [bp-744h]@880
  int v616; // [sp+21Ch] [bp-73Ch]@880
  int v617; // [sp+220h] [bp-738h]@880
  void *v618; // [sp+224h] [bp-734h]@876
  __int64 v619; // [sp+22Ch] [bp-72Ch]@876
  _DWORD *v620; // [sp+234h] [bp-724h]@876
  __int64 v621; // [sp+23Ch] [bp-71Ch]@876
  int v622; // [sp+244h] [bp-714h]@876
  int v623; // [sp+248h] [bp-710h]@876
  void *v624; // [sp+24Ch] [bp-70Ch]@872
  __int64 v625; // [sp+254h] [bp-704h]@872
  _DWORD *v626; // [sp+25Ch] [bp-6FCh]@872
  __int64 v627; // [sp+264h] [bp-6F4h]@872
  int v628; // [sp+26Ch] [bp-6ECh]@872
  int v629; // [sp+270h] [bp-6E8h]@872
  void *v630; // [sp+274h] [bp-6E4h]@868
  __int64 v631; // [sp+27Ch] [bp-6DCh]@868
  _DWORD *v632; // [sp+284h] [bp-6D4h]@868
  __int64 v633; // [sp+28Ch] [bp-6CCh]@868
  int v634; // [sp+294h] [bp-6C4h]@868
  int v635; // [sp+298h] [bp-6C0h]@868
  void *v636; // [sp+29Ch] [bp-6BCh]@864
  __int64 v637; // [sp+2A4h] [bp-6B4h]@864
  _DWORD *v638; // [sp+2ACh] [bp-6ACh]@864
  __int64 v639; // [sp+2B4h] [bp-6A4h]@864
  int v640; // [sp+2BCh] [bp-69Ch]@864
  int v641; // [sp+2C0h] [bp-698h]@864
  void *v642; // [sp+2C4h] [bp-694h]@856
  int (__fastcall *v643)(void **, void **, int); // [sp+2CCh] [bp-68Ch]@856
  signed int (*v644)(); // [sp+2D0h] [bp-688h]@856
  _DWORD *v645; // [sp+2D4h] [bp-684h]@856
  void (*v646)(void); // [sp+2DCh] [bp-67Ch]@856
  char *v647; // [sp+2E4h] [bp-674h]@585
  int v648; // [sp+2E8h] [bp-670h]@856
  char *v649; // [sp+2ECh] [bp-66Ch]@593
  int v650; // [sp+2F0h] [bp-668h]@854
  void *v651; // [sp+2F4h] [bp-664h]@847
  int (__fastcall *v652)(void **, void **, int); // [sp+2FCh] [bp-65Ch]@847
  signed int (*v653)(); // [sp+300h] [bp-658h]@847
  _DWORD *v654; // [sp+304h] [bp-654h]@847
  int (__fastcall *v655)(void **, _DWORD **, int); // [sp+30Ch] [bp-64Ch]@847
  void **(__fastcall *v656)(void **, ContentView ***, unsigned int); // [sp+310h] [bp-648h]@847
  char *v657; // [sp+314h] [bp-644h]@569
  int v658; // [sp+318h] [bp-640h]@847
  int v659; // [sp+31Ch] [bp-63Ch]@845
  void *v660; // [sp+320h] [bp-638h]@838
  void (*v661)(void); // [sp+328h] [bp-630h]@838
  signed int (*v662)(); // [sp+32Ch] [bp-62Ch]@838
  void *v663; // [sp+330h] [bp-628h]@838
  void (*v664)(void); // [sp+338h] [bp-620h]@838
  int (*v665)(); // [sp+33Ch] [bp-61Ch]@838
  char *v666; // [sp+340h] [bp-618h]@545
  int v667; // [sp+344h] [bp-614h]@838
  char *v668; // [sp+348h] [bp-610h]@553
  int v669; // [sp+34Ch] [bp-60Ch]@836
  void *v670; // [sp+350h] [bp-608h]@827
  int (__fastcall *v671)(void **, void **, int); // [sp+358h] [bp-600h]@827
  signed int (*v672)(); // [sp+35Ch] [bp-5FCh]@827
  _DWORD *v673; // [sp+360h] [bp-5F8h]@827
  void (*v674)(void); // [sp+368h] [bp-5F0h]@827
  signed int (__fastcall *v675)(ContentView ***, unsigned int); // [sp+36Ch] [bp-5ECh]@827
  char *v676; // [sp+370h] [bp-5E8h]@521
  int v677; // [sp+374h] [bp-5E4h]@827
  char *v678; // [sp+378h] [bp-5E0h]@529
  int v679; // [sp+37Ch] [bp-5DCh]@825
  void *v680; // [sp+380h] [bp-5D8h]@816
  void (*v681)(void); // [sp+388h] [bp-5D0h]@816
  signed int (*v682)(); // [sp+38Ch] [bp-5CCh]@816
  _DWORD *v683; // [sp+390h] [bp-5C8h]@816
  void (*v684)(void); // [sp+398h] [bp-5C0h]@816
  signed int (__fastcall *v685)(ContentView ***, unsigned int); // [sp+39Ch] [bp-5BCh]@816
  char *v686; // [sp+3A0h] [bp-5B8h]@497
  int v687; // [sp+3A4h] [bp-5B4h]@816
  char *v688; // [sp+3A8h] [bp-5B0h]@505
  int v689; // [sp+3ACh] [bp-5ACh]@814
  void *v690; // [sp+3B0h] [bp-5A8h]@805
  void (*v691)(void); // [sp+3B8h] [bp-5A0h]@805
  signed int (*v692)(); // [sp+3BCh] [bp-59Ch]@805
  _DWORD *v693; // [sp+3C0h] [bp-598h]@805
  void (*v694)(void); // [sp+3C8h] [bp-590h]@805
  void *(__fastcall *v695)(int *, ContentView ***, unsigned int); // [sp+3CCh] [bp-58Ch]@805
  char *v696; // [sp+3D0h] [bp-588h]@473
  int v697; // [sp+3D4h] [bp-584h]@805
  char *v698; // [sp+3D8h] [bp-580h]@481
  int v699; // [sp+3DCh] [bp-57Ch]@803
  void *v700; // [sp+3E0h] [bp-578h]@794
  void (*v701)(void); // [sp+3E8h] [bp-570h]@794
  signed int (*v702)(); // [sp+3ECh] [bp-56Ch]@794
  _DWORD *v703; // [sp+3F0h] [bp-568h]@794
  void (*v704)(void); // [sp+3F8h] [bp-560h]@794
  void *(__fastcall *v705)(int *, ContentView ***, unsigned int); // [sp+3FCh] [bp-55Ch]@794
  char *v706; // [sp+400h] [bp-558h]@457
  int v707; // [sp+404h] [bp-554h]@794
  char *v708; // [sp+408h] [bp-550h]@465
  int v709; // [sp+40Ch] [bp-54Ch]@792
  void *v710; // [sp+410h] [bp-548h]@783
  void (*v711)(void); // [sp+418h] [bp-540h]@783
  signed int (*v712)(); // [sp+41Ch] [bp-53Ch]@783
  _DWORD *v713; // [sp+420h] [bp-538h]@783
  void (*v714)(void); // [sp+428h] [bp-530h]@783
  void *(__fastcall *v715)(int *, ContentView ***, unsigned int); // [sp+42Ch] [bp-52Ch]@783
  char *v716; // [sp+430h] [bp-528h]@433
  int v717; // [sp+434h] [bp-524h]@783
  char *v718; // [sp+438h] [bp-520h]@441
  int v719; // [sp+43Ch] [bp-51Ch]@781
  _DWORD *v720; // [sp+440h] [bp-518h]@776
  void (*v721)(void); // [sp+448h] [bp-510h]@776
  int (__fastcall *v722)(int *, int); // [sp+44Ch] [bp-50Ch]@776
  int v723; // [sp+450h] [bp-508h]@417
  void *v724; // [sp+454h] [bp-504h]@769
  void (*v725)(void); // [sp+45Ch] [bp-4FCh]@769
  signed int (*v726)(); // [sp+460h] [bp-4F8h]@769
  _DWORD *v727; // [sp+464h] [bp-4F4h]@769
  void (*v728)(void); // [sp+46Ch] [bp-4ECh]@769
  signed int (__fastcall *v729)(__int64 **, unsigned int); // [sp+470h] [bp-4E8h]@769
  char *v730; // [sp+474h] [bp-4E4h]@393
  int v731; // [sp+478h] [bp-4E0h]@769
  char *v732; // [sp+47Ch] [bp-4DCh]@401
  int v733; // [sp+480h] [bp-4D8h]@767
  void *v734; // [sp+484h] [bp-4D4h]@758
  void (*v735)(void); // [sp+48Ch] [bp-4CCh]@758
  signed int (*v736)(); // [sp+490h] [bp-4C8h]@758
  _DWORD *v737; // [sp+494h] [bp-4C4h]@758
  void (*v738)(void); // [sp+49Ch] [bp-4BCh]@758
  signed int (__fastcall *v739)(__int64 **, unsigned int); // [sp+4A0h] [bp-4B8h]@758
  char *v740; // [sp+4A4h] [bp-4B4h]@369
  int v741; // [sp+4A8h] [bp-4B0h]@758
  char *v742; // [sp+4ACh] [bp-4ACh]@377
  int v743; // [sp+4B0h] [bp-4A8h]@756
  void *v744; // [sp+4B4h] [bp-4A4h]@747
  void (*v745)(void); // [sp+4BCh] [bp-49Ch]@747
  signed int (*v746)(); // [sp+4C0h] [bp-498h]@747
  _DWORD *v747; // [sp+4C4h] [bp-494h]@747
  void (*v748)(void); // [sp+4CCh] [bp-48Ch]@747
  _BOOL4 (__fastcall *v749)(int); // [sp+4D0h] [bp-488h]@747
  char *v750; // [sp+4D4h] [bp-484h]@345
  int v751; // [sp+4D8h] [bp-480h]@747
  char *v752; // [sp+4DCh] [bp-47Ch]@353
  int v753; // [sp+4E0h] [bp-478h]@745
  void *v754; // [sp+4E4h] [bp-474h]@736
  void (*v755)(void); // [sp+4ECh] [bp-46Ch]@736
  signed int (*v756)(); // [sp+4F0h] [bp-468h]@736
  _DWORD *v757; // [sp+4F4h] [bp-464h]@736
  void (*v758)(void); // [sp+4FCh] [bp-45Ch]@736
  int *(__fastcall *v759)(void **, ContentView ***, unsigned int); // [sp+500h] [bp-458h]@736
  char *v760; // [sp+504h] [bp-454h]@321
  int v761; // [sp+508h] [bp-450h]@736
  char *v762; // [sp+50Ch] [bp-44Ch]@329
  int v763; // [sp+510h] [bp-448h]@734
  void *v764; // [sp+514h] [bp-444h]@725
  void (*v765)(void); // [sp+51Ch] [bp-43Ch]@725
  signed int (*v766)(); // [sp+520h] [bp-438h]@725
  _DWORD *v767; // [sp+524h] [bp-434h]@725
  void (*v768)(void); // [sp+52Ch] [bp-42Ch]@725
  _DWORD *(__fastcall *v769)(Util *, ContentView ***, unsigned int); // [sp+530h] [bp-428h]@725
  char *v770; // [sp+534h] [bp-424h]@297
  int v771; // [sp+538h] [bp-420h]@725
  char *v772; // [sp+53Ch] [bp-41Ch]@305
  int v773; // [sp+540h] [bp-418h]@723
  void *v774; // [sp+544h] [bp-414h]@714
  void (*v775)(void); // [sp+54Ch] [bp-40Ch]@714
  signed int (*v776)(); // [sp+550h] [bp-408h]@714
  _DWORD *v777; // [sp+554h] [bp-404h]@714
  void (*v778)(void); // [sp+55Ch] [bp-3FCh]@714
  int *(__fastcall *v779)(int *, ContentView ***, unsigned int); // [sp+560h] [bp-3F8h]@714
  char *v780; // [sp+564h] [bp-3F4h]@273
  int v781; // [sp+568h] [bp-3F0h]@714
  char *v782; // [sp+56Ch] [bp-3ECh]@281
  int v783; // [sp+570h] [bp-3E8h]@712
  void *v784; // [sp+574h] [bp-3E4h]@703
  void (*v785)(void); // [sp+57Ch] [bp-3DCh]@703
  signed int (*v786)(); // [sp+580h] [bp-3D8h]@703
  _DWORD *v787; // [sp+584h] [bp-3D4h]@703
  void (*v788)(void); // [sp+58Ch] [bp-3CCh]@703
  void (__fastcall *v789)(void **, ContentView ***, unsigned int); // [sp+590h] [bp-3C8h]@703
  char *v790; // [sp+594h] [bp-3C4h]@249
  int v791; // [sp+598h] [bp-3C0h]@703
  char *v792; // [sp+59Ch] [bp-3BCh]@257
  int v793; // [sp+5A0h] [bp-3B8h]@701
  void *v794; // [sp+5A4h] [bp-3B4h]@692
  void (*v795)(void); // [sp+5ACh] [bp-3ACh]@692
  signed int (*v796)(); // [sp+5B0h] [bp-3A8h]@692
  _DWORD *v797; // [sp+5B4h] [bp-3A4h]@692
  void (*v798)(void); // [sp+5BCh] [bp-39Ch]@692
  signed int (__fastcall *v799)(ContentView ***, unsigned int); // [sp+5C0h] [bp-398h]@692
  char *v800; // [sp+5C4h] [bp-394h]@229
  int v801; // [sp+5C8h] [bp-390h]@692
  char *v802; // [sp+5CCh] [bp-38Ch]@237
  int v803; // [sp+5D0h] [bp-388h]@690
  void *v804; // [sp+5D4h] [bp-384h]@681
  void (*v805)(void); // [sp+5DCh] [bp-37Ch]@681
  signed int (*v806)(); // [sp+5E0h] [bp-378h]@681
  _DWORD *v807; // [sp+5E4h] [bp-374h]@681
  void (*v808)(void); // [sp+5ECh] [bp-36Ch]@681
  int *(__fastcall *v809)(int *, ContentView ***, unsigned int); // [sp+5F0h] [bp-368h]@681
  char *s; // [sp+5F4h] [bp-364h]@209
  int v811; // [sp+5F8h] [bp-360h]@681
  char *v812; // [sp+5FCh] [bp-35Ch]@217
  int v813; // [sp+600h] [bp-358h]@679
  _DWORD *v814; // [sp+604h] [bp-354h]@673
  int (__fastcall *v815)(void **, _DWORD **, int); // [sp+60Ch] [bp-34Ch]@673
  signed int (__fastcall *v816)(int, int); // [sp+610h] [bp-348h]@673
  char *v817; // [sp+614h] [bp-344h]@189
  char *v818; // [sp+618h] [bp-340h]@185
  void *v819; // [sp+61Ch] [bp-33Ch]@667
  void (*v820)(void); // [sp+624h] [bp-334h]@667
  signed int (*v821)(); // [sp+628h] [bp-330h]@667
  void *v822; // [sp+62Ch] [bp-32Ch]@667
  void (*v823)(void); // [sp+634h] [bp-324h]@667
  int (*v824)(); // [sp+638h] [bp-320h]@667
  char *v825; // [sp+63Ch] [bp-31Ch]@173
  int v826; // [sp+640h] [bp-318h]@667
  void *v827; // [sp+644h] [bp-314h]@659
  int (__fastcall *v828)(void **, void **, int); // [sp+64Ch] [bp-30Ch]@659
  signed int (*v829)(); // [sp+650h] [bp-308h]@659
  _DWORD *v830; // [sp+654h] [bp-304h]@659
  int (__fastcall *v831)(void **, _DWORD **, int); // [sp+65Ch] [bp-2FCh]@659
  signed int (__fastcall *v832)(ContentView ***); // [sp+660h] [bp-2F8h]@659
  char *v833; // [sp+664h] [bp-2F4h]@157
  int v834; // [sp+668h] [bp-2F0h]@659
  void *v835; // [sp+66Ch] [bp-2ECh]@651
  int (__fastcall *v836)(void **, void **, int); // [sp+674h] [bp-2E4h]@651
  signed int (*v837)(); // [sp+678h] [bp-2E0h]@651
  _DWORD *v838; // [sp+67Ch] [bp-2DCh]@651
  int (__fastcall *v839)(void **, _DWORD **, int); // [sp+684h] [bp-2D4h]@651
  signed int (__fastcall *v840)(ContentView ***); // [sp+688h] [bp-2D0h]@651
  char *v841; // [sp+68Ch] [bp-2CCh]@124
  int v842; // [sp+690h] [bp-2C8h]@651
  void *v843; // [sp+694h] [bp-2C4h]@643
  void (*v844)(void); // [sp+69Ch] [bp-2BCh]@643
  signed int (*v845)(); // [sp+6A0h] [bp-2B8h]@643
  _DWORD *v846; // [sp+6A4h] [bp-2B4h]@643
  void (*v847)(void); // [sp+6ACh] [bp-2ACh]@643
  void (__fastcall *v848)(int *, int); // [sp+6B0h] [bp-2A8h]@643
  char *v849; // [sp+6B4h] [bp-2A4h]@133
  int v850; // [sp+6B8h] [bp-2A0h]@643
  void *v851; // [sp+6BCh] [bp-29Ch]@635
  int (__fastcall *v852)(void **, void **, int); // [sp+6C4h] [bp-294h]@635
  signed int (*v853)(); // [sp+6C8h] [bp-290h]@635
  _DWORD *v854; // [sp+6CCh] [bp-28Ch]@635
  int (__fastcall *v855)(void **, _DWORD **, int); // [sp+6D4h] [bp-284h]@635
  signed int (__fastcall *v856)(ContentView ***); // [sp+6D8h] [bp-280h]@635
  char *v857; // [sp+6DCh] [bp-27Ch]@64
  int v858; // [sp+6E0h] [bp-278h]@635
  void *v859; // [sp+6E4h] [bp-274h]@627
  void (*v860)(void); // [sp+6ECh] [bp-26Ch]@627
  signed int (*v861)(); // [sp+6F0h] [bp-268h]@627
  _DWORD *v862; // [sp+6F4h] [bp-264h]@627
  void (*v863)(void); // [sp+6FCh] [bp-25Ch]@627
  _BOOL4 (__fastcall *v864)(ContentView ***); // [sp+700h] [bp-258h]@627
  char *v865; // [sp+704h] [bp-254h]@64
  int v866; // [sp+708h] [bp-250h]@627
  _DWORD *v867; // [sp+70Ch] [bp-24Ch]@60
  void (*v868)(void); // [sp+714h] [bp-244h]@60
  signed int (__fastcall *v869)(int); // [sp+718h] [bp-240h]@60
  int v870; // [sp+720h] [bp-238h]@60
  _DWORD *v871; // [sp+724h] [bp-234h]@57
  void (*v872)(void); // [sp+72Ch] [bp-22Ch]@57
  int (__fastcall *v873)(int **, int); // [sp+730h] [bp-228h]@57
  int v874; // [sp+738h] [bp-220h]@57
  void *v875; // [sp+73Ch] [bp-21Ch]@53
  void (*v876)(void); // [sp+744h] [bp-214h]@53
  signed int (*v877)(); // [sp+748h] [bp-210h]@53
  _DWORD *v878; // [sp+74Ch] [bp-20Ch]@53
  void (*v879)(void); // [sp+754h] [bp-204h]@53
  _BOOL4 (__fastcall *v880)(int); // [sp+758h] [bp-200h]@53
  int v881; // [sp+75Ch] [bp-1FCh]@53
  void *v882; // [sp+760h] [bp-1F8h]@49
  void (*v883)(void); // [sp+768h] [bp-1F0h]@49
  signed int (*v884)(); // [sp+76Ch] [bp-1ECh]@49
  _DWORD *v885; // [sp+770h] [bp-1E8h]@49
  void (*v886)(void); // [sp+778h] [bp-1E0h]@49
  int (__fastcall *v887)(int **, int); // [sp+77Ch] [bp-1DCh]@49
  int v888; // [sp+780h] [bp-1D8h]@49
  int v889; // [sp+784h] [bp-1D4h]@49
  _DWORD *v890; // [sp+788h] [bp-1D0h]@47
  void (*v891)(void); // [sp+790h] [bp-1C8h]@47
  void (__fastcall *v892)(int **, const char **, int); // [sp+794h] [bp-1C4h]@47
  int v893; // [sp+798h] [bp-1C0h]@47
  void *v894; // [sp+79Ch] [bp-1BCh]@43
  void (*v895)(void); // [sp+7A4h] [bp-1B4h]@43
  signed int (*v896)(); // [sp+7A8h] [bp-1B0h]@43
  _DWORD *v897; // [sp+7ACh] [bp-1ACh]@43
  void (*v898)(void); // [sp+7B4h] [bp-1A4h]@43
  signed int (__fastcall *v899)(int); // [sp+7B8h] [bp-1A0h]@43
  int v900; // [sp+7BCh] [bp-19Ch]@43
  void *v901; // [sp+7C0h] [bp-198h]@39
  void (*v902)(void); // [sp+7C8h] [bp-190h]@39
  signed int (*v903)(); // [sp+7CCh] [bp-18Ch]@39
  _DWORD *v904; // [sp+7D0h] [bp-188h]@39
  void (*v905)(void); // [sp+7D8h] [bp-180h]@39
  _BOOL4 (__fastcall *v906)(int); // [sp+7DCh] [bp-17Ch]@39
  int v907; // [sp+7E0h] [bp-178h]@39
  void *v908; // [sp+7E4h] [bp-174h]@35
  void (*v909)(void); // [sp+7ECh] [bp-16Ch]@35
  signed int (*v910)(); // [sp+7F0h] [bp-168h]@35
  _DWORD *v911; // [sp+7F4h] [bp-164h]@35
  void (*v912)(void); // [sp+7FCh] [bp-15Ch]@35
  signed int (__fastcall *v913)(int); // [sp+800h] [bp-158h]@35
  int v914; // [sp+804h] [bp-154h]@35
  _DWORD *v915; // [sp+808h] [bp-150h]@32
  void (*v916)(void); // [sp+810h] [bp-148h]@32
  int (__fastcall *v917)(StorageManagementScreenController ***, int); // [sp+814h] [bp-144h]@32
  int v918; // [sp+81Ch] [bp-13Ch]@32
  void *v919; // [sp+820h] [bp-138h]@29
  int (__fastcall *v920)(void **, void **, int); // [sp+828h] [bp-130h]@29
  signed int (__fastcall *v921)(int, int, int); // [sp+82Ch] [bp-12Ch]@29
  int v922; // [sp+84Ch] [bp-10Ch]@21
  int v923; // [sp+850h] [bp-108h]@21
  char v924; // [sp+854h] [bp-104h]@21
  int v925; // [sp+858h] [bp-100h]@21
  int v926; // [sp+85Ch] [bp-FCh]@21
  char v927; // [sp+860h] [bp-F8h]@21
  int v928; // [sp+864h] [bp-F4h]@21
  int v929; // [sp+868h] [bp-F0h]@21
  char v930; // [sp+86Ch] [bp-ECh]@21
  int v931; // [sp+870h] [bp-E8h]@21
  int v932; // [sp+874h] [bp-E4h]@21
  char v933; // [sp+878h] [bp-E0h]@21
  int v934; // [sp+87Ch] [bp-DCh]@21
  int v935; // [sp+880h] [bp-D8h]@21
  char v936; // [sp+884h] [bp-D4h]@21
  int v937; // [sp+888h] [bp-D0h]@21
  int v938; // [sp+88Ch] [bp-CCh]@21
  char v939; // [sp+890h] [bp-C8h]@21
  int v940; // [sp+894h] [bp-C4h]@21
  int v941; // [sp+898h] [bp-C0h]@21
  char v942; // [sp+89Ch] [bp-BCh]@21
  _DWORD *v943; // [sp+8A0h] [bp-B8h]@19
  void (*v944)(void); // [sp+8A8h] [bp-B0h]@19
  signed int (__fastcall *v945)(int **, int); // [sp+8ACh] [bp-ACh]@19
  _DWORD *v946; // [sp+8B0h] [bp-A8h]@15
  void (*v947)(void); // [sp+8B8h] [bp-A0h]@15
  _BOOL4 (__fastcall *v948)(int **, int); // [sp+8BCh] [bp-9Ch]@15
  void *v949; // [sp+8C0h] [bp-98h]@15
  int v950; // [sp+8C8h] [bp-90h]@13
  int v951; // [sp+8CCh] [bp-8Ch]@13
  _DWORD *v952; // [sp+8D0h] [bp-88h]@11
  void (*v953)(void); // [sp+8D8h] [bp-80h]@11
  signed int (__fastcall *v954)(int, int); // [sp+8DCh] [bp-7Ch]@11
  void *v955; // [sp+8E0h] [bp-78h]@9
  void (*v956)(void); // [sp+8E8h] [bp-70h]@9
  signed int (__fastcall *v957)(int, int); // [sp+8ECh] [bp-6Ch]@9
  _DWORD *v958; // [sp+8F0h] [bp-68h]@7
  void (*v959)(void); // [sp+8F8h] [bp-60h]@7
  int (__fastcall *v960)(int **, int); // [sp+8FCh] [bp-5Ch]@7
  _DWORD *v961; // [sp+900h] [bp-58h]@5
  void (*v962)(void); // [sp+908h] [bp-50h]@5
  int (__fastcall *v963)(int **, int); // [sp+90Ch] [bp-4Ch]@5
  _DWORD *v964; // [sp+910h] [bp-48h]@3
  void (*v965)(void); // [sp+918h] [bp-40h]@3
  int (__fastcall *v966)(int, int); // [sp+91Ch] [bp-3Ch]@3
  void *v967; // [sp+920h] [bp-38h]@1
  void (*v968)(void); // [sp+928h] [bp-30h]@1
  signed int (__fastcall *v969)(int, int); // [sp+92Ch] [bp-2Ch]@1

  v1 = this;
  v2 = *((_DWORD *)this + 109);
  v967 = operator new(1u);
  v969 = sub_13FB0E2;
  v968 = (void (*)(void))sub_13FB0F6;
  *((_DWORD *)v1 + 110) = ContentManager::getContentView(v2, (int)&v967);
  if ( v968 )
    v968();
  v3 = *((_DWORD *)v1 + 109);
  v964 = operator new(4u);
  v966 = sub_13FB124;
  *v964 = v1;
  v965 = (void (*)(void))sub_13FB14C;
  *((_DWORD *)v1 + 111) = ContentManager::getContentView(v3, (int)&v964);
  if ( v965 )
    v965();
  v4 = *((_DWORD *)v1 + 109);
  v961 = operator new(4u);
  v963 = sub_13FB182;
  *v961 = v1;
  v962 = (void (*)(void))sub_13FB1D0;
  *((_DWORD *)v1 + 112) = ContentManager::getContentView(v4, (int)&v961);
  if ( v962 )
    v962();
  v5 = *((_DWORD *)v1 + 109);
  v958 = operator new(4u);
  v960 = sub_13FB206;
  *v958 = v1;
  v959 = (void (*)(void))sub_13FB254;
  *((_DWORD *)v1 + 113) = ContentManager::getContentView(v5, (int)&v958);
  if ( v959 )
    v959();
  v6 = *((_DWORD *)v1 + 109);
  v955 = operator new(1u);
  v957 = sub_13FB28A;
  v956 = (void (*)(void))sub_13FB29E;
  *((_DWORD *)v1 + 114) = ContentManager::getContentView(v6, (int)&v955);
  if ( v956 )
    v956();
  v7 = *((_DWORD *)v1 + 109);
  v952 = operator new(4u);
  v954 = sub_13FB2CC;
  *v952 = v1;
  v953 = (void (*)(void))sub_13FB300;
  *((_DWORD *)v1 + 115) = ContentManager::getContentView(v7, (int)&v952);
  if ( v953 )
    v953();
  v8 = operator new(0x40u);
  ContentItem::ContentItem((int)v8, 0, 2, 0);
  sub_21E94B4((void **)&v950, "storageManager.miscellaneous");
  I18n::get(&v951, (int **)&v950);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v8 + 4,
    &v951);
  v9 = (void *)(v951 - 12);
  if ( (int *)(v951 - 12) != &dword_28898C0 )
  {
    v47 = (unsigned int *)(v951 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  }
  v10 = (void *)(v950 - 12);
  if ( (int *)(v950 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v950 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = *((_DWORD *)v1 + 115);
  v949 = v8;
  v12 = operator new(4u);
  *v12 = v1;
  v946 = v12;
  v948 = sub_13FB336;
  v947 = (void (*)(void))sub_13FB388;
  ContentView::createItemCollection(v11, &v949, (int)&v946);
  if ( v947 )
    v947();
  if ( v949 )
    (*(void (**)(void))(*(_DWORD *)v949 + 4))();
  v949 = 0;
  v13 = *((_DWORD *)v1 + 109);
  v14 = operator new(4u);
  *v14 = v1;
  v943 = v14;
  v945 = sub_13FB3C0;
  v944 = (void (*)(void))sub_13FB518;
  v15 = (ContentView *)ContentManager::getContentView(v13, (int)&v943);
  *((_DWORD *)v1 + 116) = v15;
  if ( v944 )
    v944();
    v15 = (ContentView *)*((_DWORD *)v1 + 116);
  ContentView::addViewSource(v15, *((const ContentView **)v1 + 110));
  ContentView::addViewSource(*((ContentView **)v1 + 116), *((const ContentView **)v1 + 111));
  ContentView::addViewSource(*((ContentView **)v1 + 116), *((const ContentView **)v1 + 112));
  ContentView::addViewSource(*((ContentView **)v1 + 116), *((const ContentView **)v1 + 113));
  ContentView::addViewSource(*((ContentView **)v1 + 116), *((const ContentView **)v1 + 114));
  ContentView::addViewSource(
    (ContentView *)(*(_QWORD *)((char *)v1 + 460) >> 32),
    (const ContentView *)*(_QWORD *)((char *)v1 + 460));
  ContentView::reload(*((ContentView **)v1 + 116));
  sub_21E94B4((void **)&v922, "world");
  v923 = *((_DWORD *)v1 + 110);
  v924 = 0;
  sub_21E94B4((void **)&v925, "world_template");
  v926 = *((_DWORD *)v1 + 111);
  v927 = 0;
  sub_21E94B4((void **)&v928, "resource");
  v929 = *((_DWORD *)v1 + 112);
  v930 = 0;
  sub_21E94B4((void **)&v931, "behavior");
  v932 = *((_DWORD *)v1 + 113);
  v933 = 0;
  sub_21E94B4((void **)&v934, "skin");
  v935 = *((_DWORD *)v1 + 114);
  v936 = 0;
  sub_21E94B4((void **)&v937, "cache");
  v938 = *((_DWORD *)v1 + 115);
  v939 = 0;
  sub_21E94B4((void **)&v940, "search");
  v941 = *((_DWORD *)v1 + 116);
  v942 = 0;
  std::vector<StorageManagementScreenController::ContentTab,std::allocator<StorageManagementScreenController::ContentTab>>::_M_assign_aux<StorageManagementScreenController::ContentTab const*>(
    (int)v1 + 480,
    (int)&v922,
    (int)&v943);
  v16 = (void *)(v940 - 12);
  if ( (int *)(v940 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v940 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v937 - 12);
  if ( (int *)(v937 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v937 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v934 - 12);
  if ( (int *)(v934 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v934 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v931 - 12);
  if ( (int *)(v931 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v931 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v928 - 12);
  if ( (int *)(v928 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v928 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v925 - 12);
  if ( (int *)(v925 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v925 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v922 - 12);
  if ( (int *)(v922 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v922 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = *((_QWORD *)v1 + 60) >> 32;
  for ( i = *((_QWORD *)v1 + 60); v23 != i; i += 12 )
    v25 = *(_DWORD *)(i + 4);
    v920 = 0;
    v919 = operator new(1u);
    v921 = sub_13FB814;
    v920 = sub_13FB834;
    ContentView::setSortFunc(v25, (int)&v919, v26);
    if ( v920 )
      v920(&v919, &v919, 3);
  sub_21E94B4((void **)&v918, "navigation_tab");
  v27 = MinecraftScreenController::_getNameId(v1, (int **)&v918);
  v28 = operator new(4u);
  *v28 = v1;
  v915 = v28;
  v917 = sub_13FB864;
  v916 = (void (*)(void))sub_13FBA38;
  ScreenController::registerToggleChangeEventHandler((int)v1, v27, (int)&v915);
  if ( v916 )
    v916();
  v29 = (void *)(v918 - 12);
  if ( (int *)(v918 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v918 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  StringHash::StringHash<char [24]>(&v914, (int)"#category_panel_visible");
  v30 = operator new(4u);
  *v30 = v1;
  v911 = v30;
  v913 = sub_13FBA6E;
  v912 = (void (*)(void))sub_13FBA80;
  v908 = operator new(1u);
  v910 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v909 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v914, (int)&v911, (int)&v908);
  if ( v909 )
    v909();
  if ( v912 )
    v912();
  v907 = -1315385814;
  v31 = operator new(4u);
  *v31 = v1;
  v904 = v31;
  v906 = sub_13FBAB6;
  v905 = (void (*)(void))sub_13FBAC6;
  v901 = operator new(1u);
  v903 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v902 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v907, (int)&v904, (int)&v901);
  if ( v902 )
    v902();
  if ( v905 )
    v905();
  StringHash::StringHash<char [23]>(&v900, (int)"#delete_button_enabled");
  v32 = operator new(4u);
  *v32 = v1;
  v897 = v32;
  v899 = sub_13FBAFC;
  v898 = (void (*)(void))sub_13FBB0E;
  v894 = operator new(1u);
  v896 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v895 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v900, (int)&v897, (int)&v894);
  if ( v895 )
    v895();
  if ( v898 )
    v898();
  v893 = -1007119069;
  v33 = operator new(4u);
  *v33 = v1;
  v890 = v33;
  v892 = sub_13FBB44;
  v891 = (void (*)(void))sub_13FBF98;
  ScreenController::bindForGlobal((int)v1, &v893, (int)&v890);
  if ( v891 )
    v891();
  v889 = -1058971227;
  v888 = -613750253;
  v34 = operator new(4u);
  *v34 = v1;
  v885 = v34;
  v887 = sub_13FCB58;
  v886 = (void (*)(void))sub_13FCD6C;
  v882 = operator new(1u);
  v884 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v883 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBoolForCollection((int)v1, &v889, &v888, (int)&v885, (int)&v882);
  if ( v883 )
    v883();
  if ( v886 )
    v886();
  v881 = -642823048;
  v35 = operator new(4u);
  *v35 = v1;
  v878 = v35;
  v880 = sub_13FD784;
  v879 = (void (*)(void))sub_13FD794;
  v875 = operator new(1u);
  v877 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v876 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v881, (int)&v878, (int)&v875);
  if ( v876 )
    v876();
  if ( v879 )
    v879();
  sub_21E94B4((void **)&v874, "toggle.enableMultiselect");
  v36 = MinecraftScreenController::_getNameId(v1, (int **)&v874);
  v37 = operator new(4u);
  *v37 = v1;
  v871 = v37;
  v873 = sub_13FD7CA;
  v872 = (void (*)(void))sub_13FD7E0;
  ScreenController::registerToggleChangeEventHandler((int)v1, v36, (int)&v871);
  if ( v872 )
    v872();
  v38 = (void *)(v874 - 12);
  if ( (int *)(v874 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v874 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  sub_21E94B4((void **)&v870, "button.deselect_resource");
  v39 = MinecraftScreenController::_getNameId(v1, (int **)&v870);
  v40 = operator new(4u);
  *v40 = v1;
  v867 = v40;
  v869 = sub_13FD816;
  v868 = (void (*)(void))sub_13FD826;
  ScreenController::registerButtonClickHandler((int)v1, v39, (int)&v867);
  if ( v868 )
    v868();
  v41 = (void *)(v870 - 12);
  if ( (int *)(v870 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v870 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  v42 = *((_QWORD *)v1 + 60) >> 32;
  v43 = *((_QWORD *)v1 + 60);
  if ( v43 != v42 )
    v44 = (const void **)&v865;
    v45 = (const void **)&v857;
    v46 = &dword_28898C0;
    do
      v212 = *(_DWORD *)(v43 + 4);
      v865 = (char *)&unk_28898CC;
      v570 = v212;
      sub_21E6FCC(v44, *(_DWORD *)(*(_DWORD *)v43 - 12) + 1);
      sub_21E7408(v44, "#", 1u);
      sub_21E72F0(v44, (const void **)v43);
      v213 = sub_21E7408(v44, "_visible", 8u);
      v214 = (const char *)*v213;
      *v213 = &unk_28898CC;
      v569 = v43;
      v567 = v42;
      v215 = strlen(v214);
      v216 = -2128831035;
      for ( j = v214; v215; v216 = 16777619 * (v216 ^ v218) )
      {
        v218 = *j++;
        --v215;
      }
      v866 = v216;
      v863 = 0;
      v219 = operator new(4u);
      *v219 = v570;
      v862 = v219;
      v860 = 0;
      v864 = sub_13FD85C;
      v863 = (void (*)(void))sub_13FD86E;
      v859 = operator new(1u);
      v861 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
      v860 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBool((int)v1, &v866, (int)&v862, (int)&v859);
      if ( v860 )
        v860();
      if ( v863 )
        v863();
      if ( (int *)(v214 - 12) != v46 )
        v71 = (unsigned int *)(v214 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v72 = __ldrex(v71);
          while ( __strex(v72 - 1, v71) );
        }
        else
          v72 = (*v71)--;
        if ( v72 <= 0 )
          j_j_j_j__ZdlPv_9((void *)(v214 - 12));
      v220 = v865 - 12;
      if ( (int *)(v865 - 12) != v46 )
        v73 = (unsigned int *)(v865 - 4);
            v74 = __ldrex(v73);
          while ( __strex(v74 - 1, v73) );
          v74 = (*v73)--;
        if ( v74 <= 0 )
          j_j_j_j__ZdlPv_9(v220);
      v857 = (char *)&unk_28898CC;
      sub_21E6FCC(v45, *(_DWORD *)(*(_DWORD *)v43 - 12) + 1);
      sub_21E7408(v45, "#", 1u);
      sub_21E72F0(v45, (const void **)v43);
      v221 = sub_21E7408(v45, "_length", 7u);
      v222 = (const char *)*v221;
      *v221 = &unk_28898CC;
      v223 = strlen(v222);
      v224 = -2128831035;
      for ( k = v222; v223; v224 = 16777619 * (v224 ^ v226) )
        v226 = *k++;
        --v223;
      v858 = v224;
      v855 = 0;
      v227 = operator new(4u);
      *v227 = v570;
      v854 = v227;
      v852 = 0;
      v856 = sub_13FD8A4;
      v855 = sub_13FD8AC;
      v851 = operator new(1u);
      v853 = ZNSt17_Function_handlerIFbvEZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
      v852 = ZNSt14_Function_base13_Base_managerIZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
      ScreenController::bindInt((int)v1, &v858, (int)&v854, (int)&v851);
      if ( v852 )
        v852(&v851, &v851, 3);
      if ( v855 )
        v855((void **)&v854, &v854, 3);
      v77 = (const void **)&v841;
      if ( (int *)(v222 - 12) != &dword_28898C0 )
        v75 = (unsigned int *)(v222 - 4);
            v76 = __ldrex(v75);
          while ( __strex(v76 - 1, v75) );
          v77 = (const void **)&v841;
          v76 = (*v75)--;
        if ( v76 <= 0 )
          j_j_j_j__ZdlPv_9((void *)(v222 - 12));
      v228 = v857 - 12;
      if ( (int *)(v857 - 12) != &dword_28898C0 )
        v78 = (unsigned int *)(v857 - 4);
            v79 = __ldrex(v78);
          while ( __strex(v79 - 1, v78) );
          v79 = (*v78)--;
        if ( v79 <= 0 )
          j_j_j_j__ZdlPv_9(v228);
      v849 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v849, *(_DWORD *)(*(_DWORD *)v43 - 12) + 1);
      sub_21E7408((const void **)&v849, "#", 1u);
      sub_21E72F0((const void **)&v849, (const void **)v43);
      v229 = sub_21E7408((const void **)&v849, "_size", 5u);
      v230 = (const char *)*v229;
      *v229 = &unk_28898CC;
      v231 = strlen(v230);
      v232 = -2128831035;
      for ( l = v230; v231; v232 = 16777619 * (v232 ^ v234) )
        v234 = *l++;
        --v231;
      v850 = v232;
      v847 = 0;
      v235 = operator new(8u);
      *v235 = 0;
      v235[1] = v570;
      v846 = v235;
      v844 = 0;
      v848 = sub_13FD8E4;
      v847 = (void (*)(void))sub_13FDC58;
      v843 = operator new(1u);
      v845 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
      v844 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
      ScreenController::bindString((int)v1, &v850, (int)&v846, (int)&v843);
      if ( v844 )
        v844();
      if ( v847 )
        v847();
      if ( (int *)(v230 - 12) != &dword_28898C0 )
        v80 = (unsigned int *)(v230 - 4);
            v81 = __ldrex(v80);
          while ( __strex(v81 - 1, v80) );
          v81 = (*v80)--;
        if ( v81 <= 0 )
          j_j_j_j__ZdlPv_9((void *)(v230 - 12));
      v236 = v849 - 12;
      if ( (int *)(v849 - 12) != &dword_28898C0 )
        v82 = (unsigned int *)(v849 - 4);
            v83 = __ldrex(v82);
          while ( __strex(v83 - 1, v82) );
          v83 = (*v82)--;
        if ( v83 <= 0 )
          j_j_j_j__ZdlPv_9(v236);
      v841 = (char *)&unk_28898CC;
      sub_21E6FCC(v77, *(_DWORD *)(*(_DWORD *)v43 - 12) + 1);
      sub_21E7408(v77, "#", 1u);
      sub_21E72F0(v77, (const void **)v43);
      v237 = sub_21E7408(v77, "_warning", 8u);
      v238 = (const char *)*v237;
      *v237 = &unk_28898CC;
      v239 = strlen(v238);
      v240 = -2128831035;
      for ( m = v238; v239; v240 = 16777619 * (v240 ^ v242) )
        v242 = *m++;
        --v239;
      v842 = v240;
      v839 = 0;
      v243 = operator new(4u);
      *v243 = v570;
      v838 = v243;
      v836 = 0;
      v840 = sub_13FDC92;
      v839 = sub_13FDCD2;
      v835 = operator new(1u);
      v837 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
      v836 = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBool((int)v1, &v842, (int)&v838, (int)&v835);
      if ( v836 )
        v836(&v835, &v835, 3);
      if ( v839 )
        v839((void **)&v838, &v838, 3);
      if ( (int *)(v238 - 12) != &dword_28898C0 )
        v84 = (unsigned int *)(v238 - 4);
            v85 = __ldrex(v84);
          while ( __strex(v85 - 1, v84) );
          v85 = (*v84)--;
        if ( v85 <= 0 )
          j_j_j_j__ZdlPv_9((void *)(v238 - 12));
      v244 = v841 - 12;
      if ( (int *)(v841 - 12) != &dword_28898C0 )
        v86 = (unsigned int *)(v841 - 4);
            v87 = __ldrex(v86);
          while ( __strex(v87 - 1, v86) );
          v87 = (*v86)--;
        if ( v87 <= 0 )
          j_j_j_j__ZdlPv_9(v244);
      v833 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v833, *(_DWORD *)(*(_DWORD *)v43 - 12) + 1);
      sub_21E7408((const void **)&v833, "#", 1u);
      sub_21E72F0((const void **)&v833, (const void **)v43);
      v245 = sub_21E7408((const void **)&v833, "_error", 6u);
      v246 = (const char *)*v245;
      *v245 = &unk_28898CC;
      v247 = strlen(v246);
      v248 = -2128831035;
      for ( n = v246; v247; v248 = 16777619 * (v248 ^ v250) )
        v250 = *n++;
        --v247;
      v834 = v248;
      v831 = 0;
      v251 = operator new(4u);
      *v251 = v570;
      v830 = v251;
      v828 = 0;
      v832 = sub_13FDD08;
      v831 = sub_13FDD48;
      v827 = operator new(1u);
      v829 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
      v828 = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBool((int)v1, &v834, (int)&v830, (int)&v827);
      if ( v828 )
        v828(&v827, &v827, 3);
      if ( v831 )
        v831((void **)&v830, &v830, 3);
      if ( (int *)(v246 - 12) != &dword_28898C0 )
        v88 = (unsigned int *)(v246 - 4);
            v89 = __ldrex(v88);
          while ( __strex(v89 - 1, v88) );
          v89 = (*v88)--;
        if ( v89 <= 0 )
          j_j_j_j__ZdlPv_9((void *)(v246 - 12));
      v96 = "_tab";
      v252 = v833 - 12;
      if ( (int *)(v833 - 12) != &dword_28898C0 )
        v90 = (unsigned int *)(v833 - 4);
            v91 = __ldrex(v90);
          while ( __strex(v91 - 1, v90) );
          v91 = (*v90)--;
        if ( v91 <= 0 )
          j_j_j_j__ZdlPv_9(v252);
      v825 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v825, *(_DWORD *)(*(_DWORD *)v43 - 12) + 1);
      sub_21E7408((const void **)&v825, "#", 1u);
      sub_21E72F0((const void **)&v825, (const void **)v43);
      v253 = sub_21E7408((const void **)&v825, "_update", 7u);
      v254 = (const char *)*v253;
      *v253 = &unk_28898CC;
      v255 = strlen(v254);
      v256 = -2128831035;
      for ( ii = v254; v255; v256 = 16777619 * (v256 ^ v258) )
        v258 = *ii++;
        --v255;
      v826 = v256;
      v823 = 0;
      v822 = operator new(1u);
      v820 = 0;
      v824 = sub_13FDD7E;
      v823 = (void (*)(void))sub_13FDD82;
      v819 = operator new(1u);
      v821 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
      v820 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBool((int)v1, &v826, (int)&v822, (int)&v819);
      if ( v820 )
        v820();
      if ( v823 )
        v823();
      if ( (int *)(v254 - 12) != &dword_28898C0 )
        v92 = (unsigned int *)(v254 - 4);
            v93 = __ldrex(v92);
          while ( __strex(v93 - 1, v92) );
          v93 = (*v92)--;
        if ( v93 <= 0 )
          j_j_j_j__ZdlPv_9((void *)(v254 - 12));
      v259 = v825 - 12;
      if ( (int *)(v825 - 12) != &dword_28898C0 )
        v94 = (unsigned int *)(v825 - 4);
            v95 = __ldrex(v94);
          while ( __strex(v95 - 1, v94) );
          v96 = "_tab";
          v95 = (*v94)--;
        if ( v95 <= 0 )
          j_j_j_j__ZdlPv_9(v259);
      v817 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v817, *(_DWORD *)(*(_DWORD *)v43 - 12) + 1);
      sub_21E7408((const void **)&v817, "#", 1u);
      sub_21E72F0((const void **)&v817, (const void **)v43);
      v260 = sub_21E7408((const void **)&v817, v96, 4u);
      v818 = (char *)*v260;
      *v260 = &unk_28898CC;
      v261 = MinecraftScreenController::_getNameId(v1, (int **)&v818);
      v815 = 0;
      v262 = operator new(4u);
      *v262 = v43;
      v814 = v262;
      v816 = sub_13FDDB0;
      v815 = sub_13FDDBC;
      ScreenController::registerToggleChangeEventHandler((int)v1, v261, (int)&v814);
      if ( v815 )
        v815((void **)&v814, &v814, 3);
      v263 = v818 - 12;
      if ( (int *)(v818 - 12) != &dword_28898C0 )
        v97 = (unsigned int *)(v818 - 4);
            v98 = __ldrex(v97);
          while ( __strex(v98 - 1, v97) );
          v98 = (*v97)--;
        if ( v98 <= 0 )
          j_j_j_j__ZdlPv_9(v263);
      v264 = v817 - 12;
      if ( (int *)(v817 - 12) != &dword_28898C0 )
        v99 = (unsigned int *)(v817 - 4);
            v100 = __ldrex(v99);
          while ( __strex(v100 - 1, v99) );
          v100 = (*v99)--;
        if ( v100 <= 0 )
          j_j_j_j__ZdlPv_9(v264);
      v812 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v812, *(_DWORD *)(*(_DWORD *)v43 - 12) + 5);
      sub_21E7408((const void **)&v812, "#sub_", 5u);
      sub_21E72F0((const void **)&v812, (const void **)v43);
      v265 = sub_21E7408((const void **)&v812, "_name", 5u);
      v266 = (const char *)*v265;
      *v265 = &unk_28898CC;
      v267 = strlen(v266);
      v268 = -2128831035;
      for ( jj = v266; v267; v268 = 16777619 * (v268 ^ v270) )
        v270 = *jj++;
        --v267;
      v813 = v268;
      v271 = sub_21E8AF4((int *)&s, (int *)v43);
      sub_21E7408((const void **)v271, "_panel", 6u);
      v272 = s;
      v273 = strlen(s);
      for ( kk = -2128831035; v273; kk = 16777619 * (kk ^ v275) )
        v275 = (unsigned __int8)*v272++;
        --v273;
      v811 = kk;
      v808 = 0;
      v276 = operator new(4u);
      *v276 = v570;
      v807 = v276;
      v805 = 0;
      v809 = sub_13FDDF2;
      v808 = (void (*)(void))sub_13FDE0C;
      v804 = operator new(1u);
      v806 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
      v805 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
      ScreenController::bindStringForCollection((int)v1, &v813, &v811, (int)&v807, (int)&v804);
      if ( v805 )
        v805();
      if ( v808 )
        v808();
      v277 = s - 12;
      if ( (int *)(s - 12) != &dword_28898C0 )
        v101 = (unsigned int *)(s - 4);
            v102 = __ldrex(v101);
          while ( __strex(v102 - 1, v101) );
          v102 = (*v101)--;
        if ( v102 <= 0 )
          j_j_j_j__ZdlPv_9(v277);
      if ( (int *)(v266 - 12) != &dword_28898C0 )
        v103 = (unsigned int *)(v266 - 4);
            v104 = __ldrex(v103);
          while ( __strex(v104 - 1, v103) );
          v104 = (*v103)--;
        if ( v104 <= 0 )
          j_j_j_j__ZdlPv_9((void *)(v266 - 12));
      v278 = v812 - 12;
      if ( (int *)(v812 - 12) != &dword_28898C0 )
        v105 = (unsigned int *)(v812 - 4);
            v106 = __ldrex(v105);
          while ( __strex(v106 - 1, v105) );
          v106 = (*v105)--;
        if ( v106 <= 0 )
          j_j_j_j__ZdlPv_9(v278);
      v802 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v802, *(_DWORD *)(*(_DWORD *)v43 - 12) + 5);
      sub_21E7408((const void **)&v802, "#sub_", 5u);
      sub_21E72F0((const void **)&v802, (const void **)v43);
      v279 = sub_21E7408((const void **)&v802, "_valid", 6u);
      v280 = (const char *)*v279;
      *v279 = &unk_28898CC;
      v281 = strlen(v280);
      v282 = -2128831035;
      for ( ll = v280; v281; v282 = 16777619 * (v282 ^ v284) )
        v284 = *ll++;
        --v281;
      v803 = v282;
      v285 = sub_21E8AF4((int *)&v800, (int *)v43);
      sub_21E7408((const void **)v285, "_panel", 6u);
      v286 = v800;
      v287 = strlen(v800);
      for ( mm = -2128831035; v287; mm = 16777619 * (mm ^ v289) )
        v289 = (unsigned __int8)*v286++;
        --v287;
      v801 = mm;
      v798 = 0;
      v290 = operator new(4u);
      *v290 = v570;
      v797 = v290;
      v795 = 0;
      v799 = sub_13FDE42;
      v798 = (void (*)(void))sub_13FDE5C;
      v794 = operator new(1u);
      v796 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
      v795 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBoolForCollection((int)v1, &v803, &v801, (int)&v797, (int)&v794);
      if ( v795 )
        v795();
      v109 = &dword_28898C0;
      if ( v798 )
        v798();
      v291 = v800 - 12;
      if ( (int *)(v800 - 12) != &dword_28898C0 )
        v107 = (unsigned int *)(v800 - 4);
            v108 = __ldrex(v107);
          while ( __strex(v108 - 1, v107) );
          v109 = &dword_28898C0;
          v108 = (*v107)--;
        if ( v108 <= 0 )
          j_j_j_j__ZdlPv_9(v291);
      if ( (int *)(v280 - 12) != v109 )
        v110 = (unsigned int *)(v280 - 4);
            v111 = __ldrex(v110);
          while ( __strex(v111 - 1, v110) );
          v111 = (*v110)--;
        if ( v111 <= 0 )
          j_j_j_j__ZdlPv_9((void *)(v280 - 12));
      v292 = v802 - 12;
      if ( (int *)(v802 - 12) != v109 )
        v112 = (unsigned int *)(v802 - 4);
            v113 = __ldrex(v112);
          while ( __strex(v113 - 1, v112) );
          v113 = (*v112)--;
        if ( v113 <= 0 )
          j_j_j_j__ZdlPv_9(v292);
      v792 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v792, *(_DWORD *)(*(_DWORD *)v43 - 12) + 5);
      sub_21E7408((const void **)&v792, "#sub_", 5u);
      sub_21E72F0((const void **)&v792, (const void **)v43);
      v293 = sub_21E7408((const void **)&v792, "_version", 8u);
      v294 = (const char *)*v293;
      *v293 = &unk_28898CC;
      v295 = strlen(v294);
      v296 = -2128831035;
      for ( nn = v294; v295; v296 = 16777619 * (v296 ^ v298) )
        v298 = *nn++;
        --v295;
      v793 = v296;
      v299 = sub_21E8AF4((int *)&v790, (int *)v43);
      sub_21E7408((const void **)v299, "_panel", 6u);
      v300 = (char *)v109;
      v301 = v790;
      v302 = strlen(v790);
      for ( i1 = -2128831035; v302; i1 = 16777619 * (i1 ^ v304) )
        v304 = (unsigned __int8)*v301++;
        --v302;
      v791 = i1;
      v788 = 0;
      v305 = operator new(4u);
      *v305 = v570;
      v787 = v305;
      v785 = 0;
      v789 = sub_13FDE94;
      v788 = (void (*)(void))sub_13FE050;
      v784 = operator new(1u);
      v786 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
      v785 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
      ScreenController::bindStringForCollection((int)v1, &v793, &v791, (int)&v787, (int)&v784);
      if ( v785 )
        v785();
      v116 = v300;
      if ( v788 )
        v788();
      v306 = v790 - 12;
      if ( v790 - 12 != v300 )
        v114 = (unsigned int *)(v790 - 4);
            v115 = __ldrex(v114);
          while ( __strex(v115 - 1, v114) );
          v116 = v300;
          v115 = (*v114)--;
        if ( v115 <= 0 )
          j_j_j_j__ZdlPv_9(v306);
      if ( v294 - 12 != v116 )
        v117 = (unsigned int *)(v294 - 4);
            v118 = __ldrex(v117);
          while ( __strex(v118 - 1, v117) );
          v118 = (*v117)--;
        if ( v118 <= 0 )
          j_j_j_j__ZdlPv_9((void *)(v294 - 12));
      v307 = v792 - 12;
      if ( v792 - 12 != v116 )
        v119 = (unsigned int *)(v792 - 4);
            v120 = __ldrex(v119);
          while ( __strex(v120 - 1, v119) );
          v120 = (*v119)--;
        if ( v120 <= 0 )
          j_j_j_j__ZdlPv_9(v307);
      v782 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v782, *(_DWORD *)(*(_DWORD *)v43 - 12) + 5);
      sub_21E7408((const void **)&v782, "#sub_", 5u);
      sub_21E72F0((const void **)&v782, (const void **)v43);
      v308 = sub_21E7408((const void **)&v782, "_description", 0xCu);
      v309 = (const char *)*v308;
      *v308 = &unk_28898CC;
      v310 = strlen(v309);
      v311 = -2128831035;
      for ( i2 = v309; v310; v311 = 16777619 * (v311 ^ v313) )
        v313 = *i2++;
        --v310;
      v783 = v311;
      v314 = sub_21E8AF4((int *)&v780, (int *)v43);
      sub_21E7408((const void **)v314, "_panel", 6u);
      v315 = v116;
      v316 = v780;
      v317 = strlen(v780);
      for ( i3 = -2128831035; v317; i3 = 16777619 * (i3 ^ v319) )
        v319 = (unsigned __int8)*v316++;
        --v317;
      v781 = i3;
      v778 = 0;
      v320 = operator new(4u);
      *v320 = v570;
      v777 = v320;
      v775 = 0;
      v779 = sub_13FE086;
      v778 = (void (*)(void))sub_13FE0A0;
      v774 = operator new(1u);
      v776 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
      v775 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
      ScreenController::bindStringForCollection((int)v1, &v783, &v781, (int)&v777, (int)&v774);
      if ( v775 )
        v775();
      v123 = v315;
      if ( v778 )
        v778();
      v321 = v780 - 12;
      if ( v780 - 12 != v315 )
        v121 = (unsigned int *)(v780 - 4);
            v122 = __ldrex(v121);
          while ( __strex(v122 - 1, v121) );
          v123 = v315;
          v122 = (*v121)--;
        if ( v122 <= 0 )
          j_j_j_j__ZdlPv_9(v321);
      if ( v309 - 12 != v123 )
        v124 = (unsigned int *)(v309 - 4);
            v125 = __ldrex(v124);
          while ( __strex(v125 - 1, v124) );
          v125 = (*v124)--;
        if ( v125 <= 0 )
          j_j_j_j__ZdlPv_9((void *)(v309 - 12));
      v322 = v782 - 12;
      if ( v782 - 12 != v123 )
        v126 = (unsigned int *)(v782 - 4);
            v127 = __ldrex(v126);
          while ( __strex(v127 - 1, v126) );
          v127 = (*v126)--;
        if ( v127 <= 0 )
          j_j_j_j__ZdlPv_9(v322);
      v772 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v772, *(_DWORD *)(*(_DWORD *)v43 - 12) + 5);
      sub_21E7408((const void **)&v772, "#sub_", 5u);
      sub_21E72F0((const void **)&v772, (const void **)v43);
      v323 = sub_21E7408((const void **)&v772, "_size", 5u);
      v324 = (const char *)*v323;
      *v323 = &unk_28898CC;
      v325 = strlen(v324);
      v326 = -2128831035;
      for ( i4 = v324; v325; v326 = 16777619 * (v326 ^ v328) )
        v328 = *i4++;
        --v325;
      v773 = v326;
      v329 = sub_21E8AF4((int *)&v770, (int *)v43);
      sub_21E7408((const void **)v329, "_panel", 6u);
      v330 = v123;
      v331 = v770;
      v332 = strlen(v770);
      for ( i5 = -2128831035; v332; i5 = 16777619 * (i5 ^ v334) )
        v334 = (unsigned __int8)*v331++;
        --v332;
      v771 = i5;
      v768 = 0;
      v335 = operator new(4u);
      *v335 = v570;
      v767 = v335;
      v765 = 0;
      v769 = sub_13FE0D6;
      v768 = (void (*)(void))sub_13FE0F0;
      v764 = operator new(1u);
      v766 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
      v765 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
      ScreenController::bindStringForCollection((int)v1, &v773, &v771, (int)&v767, (int)&v764);
      if ( v765 )
        v765();
      v130 = v330;
      if ( v768 )
        v768();
      v336 = v770 - 12;
      if ( v770 - 12 != v330 )
        v128 = (unsigned int *)(v770 - 4);
            v129 = __ldrex(v128);
          while ( __strex(v129 - 1, v128) );
          v130 = v330;
          v129 = (*v128)--;
        if ( v129 <= 0 )
          j_j_j_j__ZdlPv_9(v336);
      if ( v324 - 12 != v130 )
        v131 = (unsigned int *)(v324 - 4);
            v132 = __ldrex(v131);
          while ( __strex(v132 - 1, v131) );
          v132 = (*v131)--;
        if ( v132 <= 0 )
          j_j_j_j__ZdlPv_9((void *)(v324 - 12));
      v337 = v772 - 12;
      if ( v772 - 12 != v130 )
        v133 = (unsigned int *)(v772 - 4);
            v134 = __ldrex(v133);
          while ( __strex(v134 - 1, v133) );
          v134 = (*v133)--;
        if ( v134 <= 0 )
          j_j_j_j__ZdlPv_9(v337);
      v762 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v762, *(_DWORD *)(*(_DWORD *)v43 - 12) + 5);
      sub_21E7408((const void **)&v762, "#sub_", 5u);
      sub_21E72F0((const void **)&v762, (const void **)v43);
      v338 = sub_21E7408((const void **)&v762, "_date", 5u);
      v339 = (const char *)*v338;
      *v338 = &unk_28898CC;
      v340 = strlen(v339);
      v341 = -2128831035;
      for ( i6 = v339; v340; v341 = 16777619 * (v341 ^ v343) )
        v343 = *i6++;
        --v340;
      v763 = v341;
      v344 = sub_21E8AF4((int *)&v760, (int *)v43);
      sub_21E7408((const void **)v344, "_panel", 6u);
      v345 = v130;
      v346 = v760;
      v347 = strlen(v760);
      for ( i7 = -2128831035; v347; i7 = 16777619 * (i7 ^ v349) )
        v349 = (unsigned __int8)*v346++;
        --v347;
      v761 = i7;
      v758 = 0;
      v350 = operator new(4u);
      *v350 = v570;
      v757 = v350;
      v755 = 0;
      v759 = sub_13FE128;
      v758 = (void (*)(void))sub_13FE178;
      v754 = operator new(1u);
      v756 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
      v755 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
      ScreenController::bindStringForCollection((int)v1, &v763, &v761, (int)&v757, (int)&v754);
      if ( v755 )
        v755();
      v137 = v345;
      if ( v758 )
        v758();
      v351 = v760 - 12;
      if ( v760 - 12 != v345 )
        v135 = (unsigned int *)(v760 - 4);
            v136 = __ldrex(v135);
          while ( __strex(v136 - 1, v135) );
          v137 = v345;
          v136 = (*v135)--;
        if ( v136 <= 0 )
          j_j_j_j__ZdlPv_9(v351);
      if ( v339 - 12 != v137 )
        v138 = (unsigned int *)(v339 - 4);
            v139 = __ldrex(v138);
          while ( __strex(v139 - 1, v138) );
          v139 = (*v138)--;
        if ( v139 <= 0 )
          j_j_j_j__ZdlPv_9((void *)(v339 - 12));
      v352 = v762 - 12;
      if ( v762 - 12 != v137 )
        v140 = (unsigned int *)(v762 - 4);
            v141 = __ldrex(v140);
          while ( __strex(v141 - 1, v140) );
          v141 = (*v140)--;
        if ( v141 <= 0 )
          j_j_j_j__ZdlPv_9(v352);
      v752 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v752, *(_DWORD *)(*(_DWORD *)v43 - 12) + 1);
      sub_21E7408((const void **)&v752, "#", 1u);
      sub_21E72F0((const void **)&v752, (const void **)v43);
      v353 = sub_21E7408((const void **)&v752, "_checkVisible", 0xDu);
      v354 = (const char *)*v353;
      *v353 = &unk_28898CC;
      v355 = strlen(v354);
      v356 = -2128831035;
      for ( i8 = v354; v355; v356 = 16777619 * (v356 ^ v358) )
        v358 = *i8++;
        --v355;
      v753 = v356;
      v359 = sub_21E8AF4((int *)&v750, (int *)v43);
      sub_21E7408((const void **)v359, "_panel", 6u);
      v360 = v137;
      v361 = v750;
      v362 = strlen(v750);
      for ( i9 = -2128831035; v362; i9 = 16777619 * (i9 ^ v364) )
        v364 = (unsigned __int8)*v361++;
        --v362;
      v751 = i9;
      v748 = 0;
      v365 = operator new(4u);
      *v365 = v1;
      v747 = v365;
      v745 = 0;
      v749 = sub_13FE1AE;
      v748 = (void (*)(void))sub_13FE1BE;
      v744 = operator new(1u);
      v746 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
      v745 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBoolForCollection((int)v1, &v753, &v751, (int)&v747, (int)&v744);
      if ( v745 )
        v745();
      v144 = v360;
      if ( v748 )
        v748();
      v366 = v750 - 12;
      if ( v750 - 12 != v360 )
        v142 = (unsigned int *)(v750 - 4);
            v143 = __ldrex(v142);
          while ( __strex(v143 - 1, v142) );
          v144 = v360;
          v143 = (*v142)--;
        if ( v143 <= 0 )
          j_j_j_j__ZdlPv_9(v366);
      if ( v354 - 12 != v144 )
        v145 = (unsigned int *)(v354 - 4);
            v146 = __ldrex(v145);
          while ( __strex(v146 - 1, v145) );
          v146 = (*v145)--;
        if ( v146 <= 0 )
          j_j_j_j__ZdlPv_9((void *)(v354 - 12));
      v367 = v752 - 12;
      if ( v752 - 12 != v144 )
        v147 = (unsigned int *)(v752 - 4);
            v148 = __ldrex(v147);
          while ( __strex(v148 - 1, v147) );
          v148 = (*v147)--;
        if ( v148 <= 0 )
          j_j_j_j__ZdlPv_9(v367);
      v742 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v742, *(_DWORD *)(*(_DWORD *)v43 - 12) + 1);
      sub_21E7408((const void **)&v742, "#", 1u);
      sub_21E72F0((const void **)&v742, (const void **)v43);
      v368 = sub_21E7408((const void **)&v742, "_isSelected", 0xBu);
      v369 = v144;
      v370 = (const char *)*v368;
      *v368 = &unk_28898CC;
      v371 = strlen(v370);
      v372 = -2128831035;
      for ( i10 = v370; v371; v372 = 16777619 * (v372 ^ v374) )
        v374 = *i10++;
        --v371;
      v743 = v372;
      v375 = sub_21E8AF4((int *)&v740, (int *)v43);
      sub_21E7408((const void **)v375, "_panel", 6u);
      v376 = v740;
      v377 = strlen(v740);
      for ( i11 = -2128831035; v377; i11 = 16777619 * (i11 ^ v379) )
        v379 = (unsigned __int8)*v376++;
        --v377;
      v741 = i11;
      v738 = 0;
      v380 = operator new(8u);
      *v380 = v1;
      v380[1] = v570;
      v737 = v380;
      v735 = 0;
      v739 = sub_13FE1F4;
      v738 = (void (*)(void))sub_13FE220;
      v734 = operator new(1u);
      v736 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
      v735 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBoolForCollection((int)v1, &v743, &v741, (int)&v737, (int)&v734);
      if ( v735 )
        v735();
      if ( v738 )
        v738();
      v381 = v740 - 12;
      if ( v740 - 12 != v369 )
        v149 = (unsigned int *)(v740 - 4);
            v150 = __ldrex(v149);
          while ( __strex(v150 - 1, v149) );
          v150 = (*v149)--;
        if ( v150 <= 0 )
          j_j_j_j__ZdlPv_9(v381);
      if ( v370 - 12 != v369 )
        v151 = (unsigned int *)(v370 - 4);
            v152 = __ldrex(v151);
          while ( __strex(v152 - 1, v151) );
          v152 = (*v151)--;
        if ( v152 <= 0 )
          j_j_j_j__ZdlPv_9((void *)(v370 - 12));
      v382 = v742 - 12;
      if ( v742 - 12 != v369 )
        v153 = (unsigned int *)(v742 - 4);
            v154 = __ldrex(v153);
          while ( __strex(v154 - 1, v153) );
          v154 = (*v153)--;
        if ( v154 <= 0 )
          j_j_j_j__ZdlPv_9(v382);
      v732 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v732, *(_DWORD *)(*(_DWORD *)v43 - 12) + 1);
      sub_21E7408((const void **)&v732, "#", 1u);
      sub_21E72F0((const void **)&v732, (const void **)v43);
      v383 = sub_21E7408((const void **)&v732, "_optionsVisible", 0xFu);
      v384 = (const char *)*v383;
      *v383 = &unk_28898CC;
      v385 = strlen(v384);
      v386 = -2128831035;
      for ( i12 = v384; v385; v386 = 16777619 * (v386 ^ v388) )
        v388 = *i12++;
        --v385;
      v733 = v386;
      v389 = sub_21E8AF4((int *)&v730, (int *)v43);
      sub_21E7408((const void **)v389, "_panel", 6u);
      v390 = v730;
      v391 = strlen(v730);
      for ( i13 = -2128831035; v391; i13 = 16777619 * (i13 ^ v393) )
        v393 = (unsigned __int8)*v390++;
        --v391;
      v731 = i13;
      v728 = 0;
      v394 = operator new(8u);
      *v394 = v1;
      v394[1] = v570;
      v727 = v394;
      v725 = 0;
      v729 = sub_13FE25A;
      v728 = (void (*)(void))sub_13FE2A6;
      v724 = operator new(1u);
      v726 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
      v725 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBoolForCollection((int)v1, &v733, &v731, (int)&v727, (int)&v724);
      if ( v725 )
        v725();
      if ( v728 )
        v728();
      v395 = v730 - 12;
      if ( v730 - 12 != v369 )
        v155 = (unsigned int *)(v730 - 4);
            v156 = __ldrex(v155);
          while ( __strex(v156 - 1, v155) );
          v156 = (*v155)--;
        if ( v156 <= 0 )
          j_j_j_j__ZdlPv_9(v395);
      if ( v384 - 12 != v369 )
        v157 = (unsigned int *)(v384 - 4);
            v158 = __ldrex(v157);
          while ( __strex(v158 - 1, v157) );
          v158 = (*v157)--;
        if ( v158 <= 0 )
          j_j_j_j__ZdlPv_9((void *)(v384 - 12));
      v396 = v732 - 12;
      if ( v732 - 12 != v369 )
        v159 = (unsigned int *)(v732 - 4);
            v160 = __ldrex(v159);
          while ( __strex(v160 - 1, v159) );
          v160 = (*v159)--;
        if ( v160 <= 0 )
          j_j_j_j__ZdlPv_9(v396);
      sub_21E8AF4(&v723, (int *)v43);
      sub_21E7408((const void **)&v723, "_item_dropdown", 0xEu);
      v397 = MinecraftScreenController::_getNameId(v1, (int **)&v723);
      v721 = 0;
      v398 = operator new(8u);
      *v398 = v1;
      v398[1] = v570;
      v720 = v398;
      v722 = sub_13FE2E0;
      v721 = (void (*)(void))sub_13FE3F2;
      ScreenController::registerToggleChangeEventHandler((int)v1, v397, (int)&v720);
      if ( v721 )
        v721();
      v163 = v369;
      v399 = (void *)(v723 - 12);
      if ( (char *)(v723 - 12) != v369 )
        v161 = (unsigned int *)(v723 - 4);
            v162 = __ldrex(v161);
          while ( __strex(v162 - 1, v161) );
          v163 = v369;
          v162 = (*v161)--;
        if ( v162 <= 0 )
          j_j_j_j__ZdlPv_9(v399);
      v718 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v718, *(_DWORD *)(*(_DWORD *)v43 - 12) + 1);
      sub_21E7408((const void **)&v718, "#", 1u);
      sub_21E72F0((const void **)&v718, (const void **)v43);
      v400 = sub_21E7408((const void **)&v718, "_texture", 8u);
      v401 = (const char *)*v400;
      *v400 = &unk_28898CC;
      v402 = strlen(v401);
      v403 = -2128831035;
      for ( i14 = v401; v402; v403 = 16777619 * (v403 ^ v405) )
        v405 = *i14++;
        --v402;
      v719 = v403;
      v406 = sub_21E8AF4((int *)&v716, (int *)v43);
      sub_21E7408((const void **)v406, "_panel", 6u);
      v407 = v163;
      v408 = v716;
      v409 = strlen(v716);
      for ( i15 = -2128831035; v409; i15 = 16777619 * (i15 ^ v411) )
        v411 = (unsigned __int8)*v408++;
        --v409;
      v717 = i15;
      v714 = 0;
      v412 = operator new(4u);
      *v412 = v570;
      v713 = v412;
      v711 = 0;
      v715 = sub_13FE42C;
      v714 = (void (*)(void))sub_13FE468;
      v710 = operator new(1u);
      v712 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
      v711 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
      ScreenController::bindStringForCollection((int)v1, &v719, &v717, (int)&v713, (int)&v710);
      if ( v711 )
        v711();
      v166 = v407;
      if ( v714 )
        v714();
      v413 = v716 - 12;
      if ( v716 - 12 != v407 )
        v164 = (unsigned int *)(v716 - 4);
            v165 = __ldrex(v164);
          while ( __strex(v165 - 1, v164) );
          v166 = v407;
          v165 = (*v164)--;
        if ( v165 <= 0 )
          j_j_j_j__ZdlPv_9(v413);
      if ( v401 - 12 != v166 )
        v167 = (unsigned int *)(v401 - 4);
            v168 = __ldrex(v167);
          while ( __strex(v168 - 1, v167) );
          v168 = (*v167)--;
        if ( v168 <= 0 )
          j_j_j_j__ZdlPv_9((void *)(v401 - 12));
      v414 = v718 - 12;
      if ( v718 - 12 != v166 )
        v169 = (unsigned int *)(v718 - 4);
            v170 = __ldrex(v169);
          while ( __strex(v170 - 1, v169) );
          v170 = (*v169)--;
        if ( v170 <= 0 )
          j_j_j_j__ZdlPv_9(v414);
      v708 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v708, *(_DWORD *)(*(_DWORD *)v43 - 12) + 1);
      sub_21E7408((const void **)&v708, "#", 1u);
      sub_21E72F0((const void **)&v708, (const void **)v43);
      v415 = sub_21E7408((const void **)&v708, "_texture_zip", 0xCu);
      v416 = (const char *)*v415;
      *v415 = &unk_28898CC;
      v417 = strlen(v416);
      v418 = -2128831035;
      for ( i16 = v416; v417; v418 = 16777619 * (v418 ^ v420) )
        v420 = *i16++;
        --v417;
      v709 = v418;
      v421 = sub_21E8AF4((int *)&v706, (int *)v43);
      sub_21E7408((const void **)v421, "_panel", 6u);
      v422 = v166;
      v423 = v706;
      v424 = strlen(v706);
      for ( i17 = -2128831035; v424; i17 = 16777619 * (i17 ^ v426) )
        v426 = (unsigned __int8)*v423++;
        --v424;
      v707 = i17;
      v704 = 0;
      v427 = operator new(4u);
      *v427 = v570;
      v703 = v427;
      v701 = 0;
      v705 = sub_13FE4A0;
      v704 = (void (*)(void))sub_13FE4DC;
      v700 = operator new(1u);
      v702 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
      v701 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
      ScreenController::bindStringForCollection((int)v1, &v709, &v707, (int)&v703, (int)&v700);
      if ( v701 )
        v701();
      v173 = v422;
      if ( v704 )
        v704();
      v428 = v706 - 12;
      if ( v706 - 12 != v422 )
        v171 = (unsigned int *)(v706 - 4);
            v172 = __ldrex(v171);
          while ( __strex(v172 - 1, v171) );
          v173 = v422;
          v172 = (*v171)--;
        if ( v172 <= 0 )
          j_j_j_j__ZdlPv_9(v428);
      if ( v416 - 12 != v173 )
        v174 = (unsigned int *)(v416 - 4);
            v175 = __ldrex(v174);
          while ( __strex(v175 - 1, v174) );
          v175 = (*v174)--;
        if ( v175 <= 0 )
          j_j_j_j__ZdlPv_9((void *)(v416 - 12));
      v429 = v708 - 12;
      if ( v708 - 12 != v173 )
        v176 = (unsigned int *)(v708 - 4);
            v177 = __ldrex(v176);
          while ( __strex(v177 - 1, v176) );
          v177 = (*v176)--;
        if ( v177 <= 0 )
          j_j_j_j__ZdlPv_9(v429);
      v698 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v698, *(_DWORD *)(*(_DWORD *)v43 - 12) + 1);
      sub_21E7408((const void **)&v698, "#", 1u);
      sub_21E72F0((const void **)&v698, (const void **)v43);
      v430 = sub_21E7408((const void **)&v698, "_texture_file_system", 0x14u);
      v431 = (const char *)*v430;
      *v430 = &unk_28898CC;
      v432 = strlen(v431);
      v433 = -2128831035;
      for ( i18 = v431; v432; v433 = 16777619 * (v433 ^ v435) )
        v435 = *i18++;
        --v432;
      v699 = v433;
      v436 = sub_21E8AF4((int *)&v696, (int *)v43);
      sub_21E7408((const void **)v436, "_panel", 6u);
      v437 = v173;
      v438 = v696;
      v439 = strlen(v696);
      for ( i19 = -2128831035; v439; i19 = 16777619 * (i19 ^ v441) )
        v441 = (unsigned __int8)*v438++;
        --v439;
      v697 = i19;
      v694 = 0;
      v442 = operator new(4u);
      *v442 = v570;
      v693 = v442;
      v691 = 0;
      v695 = sub_13FE514;
      v694 = (void (*)(void))sub_13FE550;
      v690 = operator new(1u);
      v692 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
      v691 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
      ScreenController::bindStringForCollection((int)v1, &v699, &v697, (int)&v693, (int)&v690);
      v180 = v437;
      if ( v691 )
        v691();
      if ( v694 )
        v694();
      v443 = v696 - 12;
      if ( v696 - 12 != v437 )
        v178 = (unsigned int *)(v696 - 4);
            v179 = __ldrex(v178);
          while ( __strex(v179 - 1, v178) );
          v180 = v437;
          v179 = (*v178)--;
        if ( v179 <= 0 )
          j_j_j_j__ZdlPv_9(v443);
      if ( v431 - 12 != v180 )
        v181 = (unsigned int *)(v431 - 4);
            v182 = __ldrex(v181);
          while ( __strex(v182 - 1, v181) );
          v182 = (*v181)--;
        if ( v182 <= 0 )
          j_j_j_j__ZdlPv_9((void *)(v431 - 12));
      v444 = v698 - 12;
      if ( v698 - 12 != v180 )
        v183 = (unsigned int *)(v698 - 4);
            v184 = __ldrex(v183);
          while ( __strex(v184 - 1, v183) );
          v184 = (*v183)--;
        if ( v184 <= 0 )
          j_j_j_j__ZdlPv_9(v444);
      v688 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v688, *(_DWORD *)(*(_DWORD *)v43 - 12) + 5);
      sub_21E7408((const void **)&v688, "#sub_", 5u);
      sub_21E72F0((const void **)&v688, (const void **)v43);
      v445 = sub_21E7408((const void **)&v688, "_warning", 8u);
      v446 = (const char *)*v445;
      *v445 = &unk_28898CC;
      v447 = strlen(v446);
      v448 = -2128831035;
      for ( i20 = v446; v447; v448 = 16777619 * (v448 ^ v450) )
        v450 = *i20++;
        --v447;
      v689 = v448;
      v451 = sub_21E8AF4((int *)&v686, (int *)v43);
      v452 = v180;
      sub_21E7408((const void **)v451, "_panel", 6u);
      v453 = v686;
      v454 = strlen(v686);
      for ( i21 = -2128831035; v454; i21 = 16777619 * (i21 ^ v456) )
        v456 = (unsigned __int8)*v453++;
        --v454;
      v687 = i21;
      v684 = 0;
      v457 = operator new(4u);
      *v457 = v570;
      v683 = v457;
      v681 = 0;
      v685 = sub_13FE586;
      v684 = (void (*)(void))sub_13FE5A6;
      v187 = v452;
      v680 = operator new(1u);
      v682 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
      v681 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBoolForCollection((int)v1, &v689, &v687, (int)&v683, (int)&v680);
      if ( v681 )
        v681();
      if ( v684 )
        v684();
      v458 = v686 - 12;
      if ( v686 - 12 != v452 )
        v185 = (unsigned int *)(v686 - 4);
            v186 = __ldrex(v185);
          while ( __strex(v186 - 1, v185) );
          v187 = v452;
          v186 = (*v185)--;
        if ( v186 <= 0 )
          j_j_j_j__ZdlPv_9(v458);
      if ( v446 - 12 != v187 )
        v188 = (unsigned int *)(v446 - 4);
            v189 = __ldrex(v188);
          while ( __strex(v189 - 1, v188) );
          v189 = (*v188)--;
        if ( v189 <= 0 )
          j_j_j_j__ZdlPv_9((void *)(v446 - 12));
      v459 = v688 - 12;
      if ( v688 - 12 != v187 )
        v190 = (unsigned int *)(v688 - 4);
            v191 = __ldrex(v190);
          while ( __strex(v191 - 1, v190) );
          v191 = (*v190)--;
        if ( v191 <= 0 )
          j_j_j_j__ZdlPv_9(v459);
      v678 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v678, *(_DWORD *)(*(_DWORD *)v43 - 12) + 5);
      sub_21E7408((const void **)&v678, "#sub_", 5u);
      sub_21E72F0((const void **)&v678, (const void **)v43);
      v460 = sub_21E7408((const void **)&v678, "_error", 6u);
      v461 = (const char *)*v460;
      *v460 = &unk_28898CC;
      v462 = strlen(v461);
      v463 = -2128831035;
      for ( i22 = v461; v462; v463 = 16777619 * (v463 ^ v465) )
        v465 = *i22++;
        --v462;
      v679 = v463;
      sub_21E8AF4((int *)&v676, (int *)v43);
      v466 = v187;
      sub_21E7408((const void **)&v676, "_panel", 6u);
      v467 = v676;
      v468 = strlen(v676);
      for ( i23 = -2128831035; v468; i23 = 16777619 * (i23 ^ v470) )
        v470 = (unsigned __int8)*v467++;
        --v468;
      v677 = i23;
      v674 = 0;
      v471 = operator new(4u);
      *v471 = v570;
      v673 = v471;
      v671 = 0;
      v675 = sub_13FE5DC;
      v674 = (void (*)(void))sub_13FE5FC;
      v670 = operator new(1u);
      v672 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
      v671 = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBoolForCollection((int)v1, &v679, &v677, (int)&v673, (int)&v670);
      if ( v671 )
        v671(&v670, &v670, 3);
      if ( v674 )
        v674();
      v472 = v676 - 12;
      if ( v676 - 12 != v466 )
        v192 = (unsigned int *)(v676 - 4);
            v193 = __ldrex(v192);
          while ( __strex(v193 - 1, v192) );
          v193 = (*v192)--;
        if ( v193 <= 0 )
          j_j_j_j__ZdlPv_9(v472);
      if ( v461 - 12 != v466 )
        v194 = (unsigned int *)(v461 - 4);
            v195 = __ldrex(v194);
          while ( __strex(v195 - 1, v194) );
          v195 = (*v194)--;
        if ( v195 <= 0 )
          j_j_j_j__ZdlPv_9((void *)(v461 - 12));
      v473 = v678 - 12;
      if ( v678 - 12 != v466 )
        v196 = (unsigned int *)(v678 - 4);
            v197 = __ldrex(v196);
          while ( __strex(v197 - 1, v196) );
          v197 = (*v196)--;
        if ( v197 <= 0 )
          j_j_j_j__ZdlPv_9(v473);
      v668 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v668, *(_DWORD *)(*(_DWORD *)v43 - 12) + 5);
      sub_21E7408((const void **)&v668, "#sub_", 5u);
      sub_21E72F0((const void **)&v668, (const void **)v43);
      v474 = sub_21E7408((const void **)&v668, "_update", 7u);
      v475 = (const char *)*v474;
      *v474 = &unk_28898CC;
      v476 = strlen(v475);
      v477 = -2128831035;
      for ( i24 = v475; v476; v477 = 16777619 * (v477 ^ v479) )
        v479 = *i24++;
        --v476;
      v669 = v477;
      v480 = sub_21E8AF4((int *)&v666, (int *)v43);
      sub_21E7408((const void **)v480, "_panel", 6u);
      v481 = v666;
      v482 = strlen(v666);
      for ( i25 = -2128831035; v482; i25 = 16777619 * (i25 ^ v484) )
        v484 = (unsigned __int8)*v481++;
        --v482;
      v667 = i25;
      v664 = 0;
      v663 = operator new(1u);
      v661 = 0;
      v665 = sub_13FE632;
      v664 = (void (*)(void))sub_13FE636;
      v660 = operator new(1u);
      v662 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
      v661 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBoolForCollection((int)v1, &v669, &v667, (int)&v663, (int)&v660);
      if ( v661 )
        v661();
      if ( v664 )
        v664();
      v485 = v666 - 12;
      if ( v666 - 12 != v466 )
        v198 = (unsigned int *)(v666 - 4);
            v199 = __ldrex(v198);
          while ( __strex(v199 - 1, v198) );
          v199 = (*v198)--;
        if ( v199 <= 0 )
          j_j_j_j__ZdlPv_9(v485);
      if ( v475 - 12 != v466 )
        v200 = (unsigned int *)(v475 - 4);
            v201 = __ldrex(v200);
          while ( __strex(v201 - 1, v200) );
          v201 = (*v200)--;
        if ( v201 <= 0 )
          j_j_j_j__ZdlPv_9((void *)(v475 - 12));
      v486 = v668 - 12;
      if ( v668 - 12 != v466 )
        v202 = (unsigned int *)(v668 - 4);
            v203 = __ldrex(v202);
          while ( __strex(v203 - 1, v202) );
          v203 = (*v202)--;
        if ( v203 <= 0 )
          j_j_j_j__ZdlPv_9(v486);
      v659 = 467871276;
      sub_21E8AF4((int *)&v657, (int *)v43);
      sub_21E7408((const void **)&v657, "_panel", 6u);
      v487 = v657;
      v488 = strlen(v657);
      for ( i26 = -2128831035; v488; i26 = 16777619 * (i26 ^ v490) )
        v490 = (unsigned __int8)*v487++;
        --v488;
      v658 = i26;
      v655 = 0;
      v491 = operator new(4u);
      *v491 = v570;
      v654 = v491;
      v655 = sub_13FE6BC;
      v656 = sub_13FE664;
      v652 = 0;
      v651 = operator new(1u);
      v653 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
      v652 = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
      ScreenController::bindStringForCollection((int)v1, &v659, &v658, (int)&v654, (int)&v651);
      v46 = &dword_28898C0;
      v492 = sub_13FE6F2;
      if ( v652 )
        v652(&v651, &v651, 3);
      if ( v655 )
        v655((void **)&v654, &v654, 3);
      v493 = v657 - 12;
      if ( (int *)(v657 - 12) != &dword_28898C0 )
        v204 = (unsigned int *)(v657 - 4);
            v205 = __ldrex(v204);
          while ( __strex(v205 - 1, v204) );
          v205 = (*v204)--;
        if ( v205 <= 0 )
          j_j_j_j__ZdlPv_9(v493);
      v649 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v649, *(_DWORD *)(*(_DWORD *)v43 - 12) + 5);
      sub_21E7408((const void **)&v649, "#sub_", 5u);
      sub_21E72F0((const void **)&v649, (const void **)v43);
      v494 = sub_21E7408((const void **)&v649, "_warning_button", 0xFu);
      v495 = (const char *)*v494;
      *v494 = &unk_28898CC;
      v568 = v495;
      v496 = strlen(v495);
      v497 = v495;
      v498 = -2128831035;
      for ( i27 = sub_13FE724; v496; v498 = 16777619 * (v498 ^ v500) )
        v500 = *v497++;
        --v496;
      v650 = v498;
      sub_21E8AF4((int *)&v647, (int *)v43);
      sub_21E7408((const void **)&v647, "_panel", 6u);
      v501 = v647;
      v502 = strlen(v647);
      for ( i28 = -2128831035; v502; i28 = 16777619 * (i28 ^ v504) )
        v504 = (unsigned __int8)*v501++;
        --v502;
      v648 = i28;
      v646 = 0;
      v505 = operator new(4u);
      *v505 = v570;
      v645 = v505;
      *(_QWORD *)&v646 = *(_QWORD *)(&v492 - 1);
      v643 = 0;
      v42 = v567;
      v642 = operator new(1u);
      v644 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
      v643 = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBoolForCollection((int)v1, &v650, &v648, (int)&v645, (int)&v642);
      v45 = (const void **)&v857;
      if ( v643 )
        v643(&v642, &v642, 3);
      if ( v646 )
        v646();
      v506 = v647 - 12;
      if ( (int *)(v647 - 12) != &dword_28898C0 )
        v206 = (unsigned int *)(v647 - 4);
            v207 = __ldrex(v206);
          while ( __strex(v207 - 1, v206) );
          v207 = (*v206)--;
        v45 = (const void **)&v857;
        if ( v207 <= 0 )
          j_j_j_j__ZdlPv_9(v506);
      if ( (int *)(v568 - 12) != &dword_28898C0 )
        v208 = (unsigned int *)(v568 - 4);
            v209 = __ldrex(v208);
          while ( __strex(v209 - 1, v208) );
          v209 = (*v208)--;
        if ( v209 <= 0 )
          j_j_j_j__ZdlPv_9((void *)(v568 - 12));
      v507 = v649 - 12;
      if ( (int *)(v649 - 12) != &dword_28898C0 )
        v210 = (unsigned int *)(v649 - 4);
            v211 = __ldrex(v210);
          while ( __strex(v211 - 1, v210) );
          v211 = (*v210)--;
        if ( v211 <= 0 )
          j_j_j_j__ZdlPv_9(v507);
      v43 += 12;
      v44 = (const void **)&v865;
    while ( v569 + 12 != v567 );
  StringHash::StringHash<char [51]>(&v641, (int)"#sub_resource_generate_texture_list_button_visible");
  v640 = -400289764;
  v508 = operator new(4u);
  LODWORD(v509) = sub_13FE782;
  *v508 = v1;
  HIDWORD(v509) = sub_13FE75A;
  v638 = v508;
  v639 = v509;
  v636 = operator new(1u);
  LODWORD(v510) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v510) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v637 = v510;
  ScreenController::bindBoolForCollection((int)v1, &v641, &v640, (int)&v638, (int)&v636);
  if ( (_DWORD)v637 )
    ((void (*)(void))v637)();
  if ( (_DWORD)v639 )
    ((void (*)(void))v639)();
  v635 = -1406362813;
  v634 = -361200046;
  v511 = operator new(4u);
  LODWORD(v512) = sub_13FE7D4;
  *v511 = v1;
  HIDWORD(v512) = sub_13FE7B8;
  v632 = v511;
  v633 = v512;
  v630 = operator new(1u);
  LODWORD(v513) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v513) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v631 = v513;
  ScreenController::bindStringForCollection((int)v1, &v635, &v634, (int)&v632, (int)&v630);
  if ( (_DWORD)v631 )
    ((void (*)(void))v631)();
  if ( (_DWORD)v633 )
    ((void (*)(void))v633)();
  StringHash::StringHash<char [30]>(&v629, (int)"#sub_world_template_game_type");
  v628 = 1054482667;
  v514 = operator new(4u);
  LODWORD(v515) = sub_13FE826;
  *v514 = v1;
  HIDWORD(v515) = sub_13FE80A;
  v626 = v514;
  v627 = v515;
  v624 = operator new(1u);
  LODWORD(v516) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v516) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v625 = v516;
  ScreenController::bindStringForCollection((int)v1, &v629, &v628, (int)&v626, (int)&v624);
  if ( (_DWORD)v625 )
    ((void (*)(void))v625)();
  if ( (_DWORD)v627 )
    ((void (*)(void))v627)();
  v622 = -361200046;
  v623 = -1544635130;
  v517 = operator new(4u);
  LODWORD(v518) = sub_13FE89C;
  *v517 = v1;
  HIDWORD(v518) = sub_13FE85C;
  v620 = v517;
  v621 = v518;
  v618 = operator new(1u);
  LODWORD(v519) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v519) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v619 = v519;
  ScreenController::bindStringForCollection((int)v1, &v623, &v622, (int)&v620, (int)&v618);
  if ( (_DWORD)v619 )
    ((void (*)(void))v619)();
  if ( (_DWORD)v621 )
    ((void (*)(void))v621)();
  StringHash::StringHash<char [25]>(&v617, (int)"#world_icon_texture_file");
  v616 = -361200046;
  v520 = operator new(4u);
  LODWORD(v521) = sub_13FE914;
  *v520 = v1;
  HIDWORD(v521) = sub_13FE8D2;
  v614 = v520;
  v615 = v521;
  v612 = operator new(1u);
  LODWORD(v522) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v522) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v613 = v522;
  ScreenController::bindStringForCollection((int)v1, &v617, &v616, (int)&v614, (int)&v612);
  if ( (_DWORD)v613 )
    ((void (*)(void))v613)();
  if ( (_DWORD)v615 )
    ((void (*)(void))v615)();
  StringHash::StringHash<char [29]>(&v611, (int)"#world_template_icon_texture");
  v610 = 1054482667;
  v523 = operator new(4u);
  LODWORD(v524) = sub_13FE98C;
  *v523 = v1;
  HIDWORD(v524) = sub_13FE94C;
  v608 = v523;
  v609 = v524;
  v606 = operator new(1u);
  LODWORD(v525) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v525) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v607 = v525;
  ScreenController::bindStringForCollection((int)v1, &v611, &v610, (int)&v608, (int)&v606);
  if ( (_DWORD)v607 )
    ((void (*)(void))v607)();
  if ( (_DWORD)v609 )
    ((void (*)(void))v609)();
  StringHash::StringHash<char [33]>(&v605, (int)"#world_template_icon_texture_zip");
  v604 = 1054482667;
  v526 = operator new(4u);
  LODWORD(v527) = sub_13FE9E0;
  *v526 = v1;
  HIDWORD(v527) = sub_13FE9C2;
  v602 = v526;
  v603 = v527;
  v600 = operator new(1u);
  LODWORD(v528) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v528) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v601 = v528;
  ScreenController::bindStringForCollection((int)v1, &v605, &v604, (int)&v602, (int)&v600);
  if ( (_DWORD)v601 )
    ((void (*)(void))v601)();
  if ( (_DWORD)v603 )
    ((void (*)(void))v603)();
  StringHash::StringHash<char [34]>(&v599, (int)"#world_template_icon_texture_file");
  v598 = 1054482667;
  v529 = operator new(4u);
  LODWORD(v530) = sub_13FEA58;
  *v529 = v1;
  HIDWORD(v530) = sub_13FEA16;
  v596 = v529;
  v597 = v530;
  v594 = operator new(1u);
  LODWORD(v531) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v531) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v595 = v531;
  ScreenController::bindStringForCollection((int)v1, &v599, &v598, (int)&v596, (int)&v594);
  if ( (_DWORD)v595 )
    ((void (*)(void))v595)();
  if ( (_DWORD)v597 )
    ((void (*)(void))v597)();
  v593 = -470794762;
  v532 = operator new(4u);
  LODWORD(v533) = sub_13FEA9E;
  *v532 = v1;
  HIDWORD(v533) = sub_13FEA8E;
  v591 = v532;
  v592 = v533;
  v589 = operator new(1u);
  LODWORD(v534) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v534) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v590 = v534;
  ScreenController::bindString((int)v1, &v593, (int)&v591, (int)&v589);
  if ( (_DWORD)v590 )
    ((void (*)(void))v590)();
  if ( (_DWORD)v592 )
    ((void (*)(void))v592)();
  sub_21E94B4((void **)&v588, "button.searchClear");
  v535 = MinecraftScreenController::_getNameId(v1, (int **)&v588);
  v536 = operator new(4u);
  LODWORD(v537) = sub_13FEAF8;
  *v536 = v1;
  HIDWORD(v537) = sub_13FEAD4;
  v586 = v536;
  v587 = v537;
  ScreenController::registerButtonClickHandler((int)v1, v535, (int)&v586);
  if ( (_DWORD)v587 )
    ((void (*)(void))v587)();
  v538 = (void *)(v588 - 12);
  if ( (int *)(v588 - 12) != &dword_28898C0 )
    v557 = (unsigned int *)(v588 - 4);
        v558 = __ldrex(v557);
      while ( __strex(v558 - 1, v557) );
      v558 = (*v557)--;
    if ( v558 <= 0 )
      j_j_j_j__ZdlPv_9(v538);
  sub_21E94B4((void **)&v585, "search_control");
  v539 = MinecraftScreenController::_getNameId(v1, (int **)&v585);
  v540 = operator new(4u);
  LODWORD(v541) = sub_13FEF58;
  *v540 = v1;
  HIDWORD(v541) = sub_13FEB30;
  v583 = v540;
  v584 = v541;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v539, (int)&v583);
  if ( (_DWORD)v584 )
    ((void (*)(void))v584)();
  v542 = (void *)(v585 - 12);
  if ( (int *)(v585 - 12) != &dword_28898C0 )
    v559 = (unsigned int *)(v585 - 4);
        v560 = __ldrex(v559);
      while ( __strex(v560 - 1, v559) );
      v560 = (*v559)--;
    if ( v560 <= 0 )
      j_j_j_j__ZdlPv_9(v542);
  v582 = 697958132;
  v543 = operator new(4u);
  LODWORD(v544) = sub_13FFF2C;
  *v543 = v1;
  HIDWORD(v544) = sub_13FEF90;
  v580 = v543;
  v581 = v544;
  ScreenController::bindForGlobal((int)v1, &v582, (int)&v580);
  if ( (_DWORD)v581 )
    ((void (*)(void))v581)();
  sub_21E94B4((void **)&v579, "button.generateTextureList");
  v545 = MinecraftScreenController::_getNameId(v1, (int **)&v579);
  v546 = operator new(4u);
  LODWORD(v547) = sub_13FFFA6;
  *v546 = v1;
  HIDWORD(v547) = sub_13FFF62;
  v577 = v546;
  v578 = v547;
  ScreenController::registerButtonClickHandler((int)v1, v545, (int)&v577);
  if ( (_DWORD)v578 )
    ((void (*)(void))v578)();
  v548 = (void *)(v579 - 12);
  if ( (int *)(v579 - 12) != &dword_28898C0 )
    v561 = (unsigned int *)(v579 - 4);
        v562 = __ldrex(v561);
      while ( __strex(v562 - 1, v561) );
      v562 = (*v561)--;
    if ( v562 <= 0 )
      j_j_j_j__ZdlPv_9(v548);
  sub_21E94B4((void **)&v576, "button.deleteResources");
  v549 = MinecraftScreenController::_getNameId(v1, (int **)&v576);
  v550 = operator new(4u);
  LODWORD(v551) = sub_1400044;
  *v550 = v1;
  HIDWORD(v551) = sub_13FFFDC;
  v574 = v550;
  v575 = v551;
  ScreenController::registerButtonClickHandler((int)v1, v549, (int)&v574);
  if ( (_DWORD)v575 )
    ((void (*)(void))v575)();
  v552 = (void *)(v576 - 12);
  if ( (int *)(v576 - 12) != &dword_28898C0 )
    v563 = (unsigned int *)(v576 - 4);
        v564 = __ldrex(v563);
      while ( __strex(v564 - 1, v563) );
      v564 = (*v563)--;
    if ( v564 <= 0 )
      j_j_j_j__ZdlPv_9(v552);
  sub_21E94B4((void **)&v573, "button.warningDependency");
  v553 = MinecraftScreenController::_getNameId(v1, (int **)&v573);
  v554 = operator new(4u);
  LODWORD(v555) = sub_14000C8;
  *v554 = v1;
  HIDWORD(v555) = sub_140007A;
  v571 = v554;
  v572 = v555;
  ScreenController::registerButtonClickHandler((int)v1, v553, (int)&v571);
  if ( (_DWORD)v572 )
    ((void (*)(void))v572)();
  v556 = (void *)(v573 - 12);
  if ( (int *)(v573 - 12) != &dword_28898C0 )
    v565 = (unsigned int *)(v573 - 4);
        v566 = __ldrex(v565);
      while ( __strex(v566 - 1, v565) );
      v566 = (*v565)--;
    if ( v566 <= 0 )
      j_j_j_j__ZdlPv_9(v556);
}


signed int __fastcall StorageManagementScreenController::_isSelected(StorageManagementScreenController *this, const ContentItem *a2)
{
  const ContentItem **v2; // r0@1
  const ContentItem **v3; // r2@1
  __int64 v4; // kr00_8@1
  signed int result; // r0@2
  const ContentItem *v6; // t1@6

  v4 = *(_QWORD *)((char *)this + 468);
  v2 = (const ContentItem **)(*(_QWORD *)((char *)this + 468) >> 32);
  v3 = (const ContentItem **)v4;
  if ( (const ContentItem **)v4 == v2 )
  {
    result = 0;
  }
  else
    while ( 1 )
    {
      v6 = *v3;
      ++v3;
      if ( v6 == a2 )
        break;
      if ( v2 == v3 )
        return 0;
    }
    result = 1;
  return result;
}


void __fastcall StorageManagementScreenController::~StorageManagementScreenController(StorageManagementScreenController *this)
{
  StorageManagementScreenController::~StorageManagementScreenController(this);
}
