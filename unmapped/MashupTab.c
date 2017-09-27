

void __fastcall MashupTab::~MashupTab(MashupTab *this)
{
  MashupTab *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26D7434;
  v2 = *((_DWORD *)this + 4);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 2);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  operator delete((void *)v1);
}


int __fastcall MashupTab::setToggle(int result, bool a2)
{
  *(_BYTE *)(result + 12) = a2;
  return result;
}


  v1 = MashupTab::getTabType(*(MashupTab **)((*(_QWORD *)(**(_DWORD **)a1 + 456) >> 32)
{
  v2 = 0;
  if ( v1 == 2 )
    v2 = 1;
  return v2;
}


int __fastcall MashupTab::MashupTab(int result, int a2)
{
  *(_DWORD *)result = &off_26D7434;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = &unk_28898CC;
  *(_BYTE *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = &unk_28898CC;
  return result;
}


char *__fastcall MashupTab::getTabName(MashupTab *this)
{
  return (char *)this + 16;
}


  v1 = MashupTab::getTabType(*(MashupTab **)((*(_QWORD *)(**(_DWORD **)a1 + 456) >> 32)
{
  v2 = 0;
  if ( v1 == 3 )
    v2 = 1;
  return v2;
}


  result = MashupTab::getTabType(*(MashupTab **)((*(_QWORD *)(**(_DWORD **)a1 + 456) >> 32)
{
  if ( result != 1 )
    result = 0;
  return result;
}


char *__fastcall MashupTab::getTabIconTexture(MashupTab *this)
{
  return (char *)this + 8;
}


  v1 = MashupTab::getTabType(*(MashupTab **)((*(_QWORD *)(**(_DWORD **)a1 + 456) >> 32)
{
  v2 = 0;
  if ( !v1 )
    v2 = 1;
  return v2;
}


void __fastcall MashupTab::~MashupTab(MashupTab *this)
{
  MashupTab::~MashupTab(this);
}


MashupTab *__fastcall MashupTab::~MashupTab(MashupTab *this)
{
  MashupTab *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26D7434;
  v2 = *((_DWORD *)this + 4);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 2);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  return v1;
}


char *__fastcall MashupTab::buildTabCollection(int a1, StoreCatalogItemModel *a2, int a3)
{
  StoreCatalogItemModel *v3; // r6@1
  int v4; // r4@1
  int v5; // r5@1
  char *result; // r0@1
  __int64 i; // r8@1
  char v8; // r2@3
  __int64 v9; // r0@5
  char v10; // r2@7
  __int64 v11; // r0@9
  char v12; // r2@11
  __int64 v13; // r0@13
  char v14; // r2@15
  __int64 v15; // r0@17
  char *v16; // [sp+0h] [bp-38h]@17
  char *v17; // [sp+4h] [bp-34h]@13
  char *v18; // [sp+8h] [bp-30h]@9
  char *v19; // [sp+Ch] [bp-2Ch]@5

  v3 = a2;
  v4 = a1;
  v5 = a3;
  result = StoreCatalogItemModel::getMashupTabs(a2);
  *(_DWORD *)v4 = 0;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 12) = &unk_28898CC;
  *(_DWORD *)(v4 + 16) = &unk_28898CC;
  for ( i = *(_QWORD *)result; HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 8 )
  {
    result = *(char **)i;
    switch ( *(_DWORD *)i )
    {
      case 0:
        v8 = 0;
        if ( v5 == 2 )
          v8 = 1;
        createHomeTab((const StoreCatalogItemModel *)&v19, (int)v3, v8);
        v9 = *(_QWORD *)(v4 + 4);
        if ( (_DWORD)v9 == HIDWORD(v9) )
        {
          std::vector<std::unique_ptr<MashupTab,std::default_delete<MashupTab>>,std::allocator<std::unique_ptr<MashupTab,std::default_delete<MashupTab>>>>::_M_emplace_back_aux<std::unique_ptr<HomeTab,std::default_delete<HomeTab>>>(
            (_QWORD *)v4,
            (int *)&v19);
          result = v19;
          if ( v19 )
            result = (char *)(*(int (**)(void))(*(_DWORD *)v19 + 4))();
          v19 = 0;
        }
        else
          *(_DWORD *)v9 = v19;
          result = (char *)(v9 + 4);
          *(_DWORD *)(v4 + 4) = result;
        break;
      case 1:
        v10 = v5;
        if ( v5 != 1 )
          v10 = 0;
        createTexturePackTab((const StoreCatalogItemModel *)&v18, (int)v3, v10);
        v11 = *(_QWORD *)(v4 + 4);
        if ( (_DWORD)v11 == HIDWORD(v11) )
          std::vector<std::unique_ptr<MashupTab,std::default_delete<MashupTab>>,std::allocator<std::unique_ptr<MashupTab,std::default_delete<MashupTab>>>>::_M_emplace_back_aux<std::unique_ptr<TexturePackTab,std::default_delete<TexturePackTab>>>(
            (int *)&v18);
          result = v18;
          if ( v18 )
            result = (char *)(*(int (**)(void))(*(_DWORD *)v18 + 4))();
          v18 = 0;
          *(_DWORD *)v11 = v18;
          result = (char *)(v11 + 4);
      case 2:
        v12 = 0;
        if ( !v5 )
          v12 = 1;
        createSkinPackTab((const StoreCatalogItemModel *)&v17, (int)v3, v12);
        v13 = *(_QWORD *)(v4 + 4);
        if ( (_DWORD)v13 == HIDWORD(v13) )
          std::vector<std::unique_ptr<MashupTab,std::default_delete<MashupTab>>,std::allocator<std::unique_ptr<MashupTab,std::default_delete<MashupTab>>>>::_M_emplace_back_aux<std::unique_ptr<SkinPackTab,std::default_delete<SkinPackTab>>>(
            (int *)&v17);
          result = v17;
          if ( v17 )
            result = (char *)(*(int (**)(void))(*(_DWORD *)v17 + 4))();
          v17 = 0;
          *(_DWORD *)v13 = v17;
          result = (char *)(v13 + 4);
      case 3:
        v14 = 0;
        if ( v5 == 3 )
          v14 = 1;
        createWorldTab((const StoreCatalogItemModel *)&v16, (int)v3, v14);
        v15 = *(_QWORD *)(v4 + 4);
        if ( (_DWORD)v15 == HIDWORD(v15) )
          std::vector<std::unique_ptr<MashupTab,std::default_delete<MashupTab>>,std::allocator<std::unique_ptr<MashupTab,std::default_delete<MashupTab>>>>::_M_emplace_back_aux<std::unique_ptr<WorldTab,std::default_delete<WorldTab>>>(
            (int *)&v16);
          result = v16;
          if ( v16 )
            result = (char *)(*(int (**)(void))(*(_DWORD *)v16 + 4))();
          HIDWORD(v15) = v16;
          v16 = 0;
          *(_DWORD *)v15 = HIDWORD(v15);
          result = (char *)(v15 + 4);
        v16 = 0;
      default:
        continue;
    }
  }
  return result;
}
