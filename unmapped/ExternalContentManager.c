

char *__fastcall ExternalContentManager::getLoadingPacks(int a1, int a2, char *a3)
{
  int v3; // r9@1
  char *result; // r0@1
  char *v5; // r5@1
  int v6; // r4@1
  __int64 v7; // kr00_8@5
  int *v8; // r1@5
  int *v9; // r0@6

  v3 = a1;
  result = 0;
  *(_DWORD *)v3 = 0;
  *(_DWORD *)(v3 + 4) = 0;
  v5 = a3;
  *(_DWORD *)(v3 + 8) = 0;
  v6 = *(_DWORD *)(a2 + 88);
  while ( v6 )
  {
    result = (char *)*(_BYTE *)(v6 + 4);
    if ( result != v5 )
      goto LABEL_2;
    v7 = *(_QWORD *)(v3 + 4);
    v8 = (int *)(v6 + 8);
    if ( (_DWORD)v7 == HIDWORD(v7) )
    {
      result = std::vector<ResourceLocation,std::allocator<ResourceLocation>>::_M_emplace_back_aux<ResourceLocation const&>(
                 (_QWORD *)v3,
                 (int)v8);
LABEL_2:
      v6 = *(_DWORD *)v6;
    }
    else
      v9 = sub_119C854((int *)v7, v8);
      v9[1] = *(_DWORD *)(v6 + 12);
      result = (char *)(v9 + 2);
      *(_DWORD *)(v3 + 4) = result;
  }
  return result;
}


int __fastcall ExternalContentManager::_considerForZipHierarchyImport(ExternalContentManager *this, const PackManifest *a2, const PackReport *a3)
{
  PackReport *v3; // r5@1
  PackManifest *v4; // r4@1
  char *v5; // r0@1
  char *v6; // r0@2
  char *v7; // r0@3
  int result; // r0@4

  v3 = a3;
  v4 = a2;
  v5 = PackReport::getErrors(a3);
  if ( (*(_QWORD *)v5 >> 32) - (unsigned int)*(_QWORD *)v5 != 8
    || (v6 = PackReport::getErrors(v3), PackError::getPackErrorType(**(PackError ***)v6) != 2)
    || (v7 = PackReport::getErrors(v3), PackError::getErrorValue(**(PackError ***)v7) != 4) )
  {
    result = 0;
  }
  else
    result = PackManifest::getManifestOrigin(v4);
    if ( result != 1 )
      result = 0;
  return result;
}


void __fastcall ExternalContentManager::_packImportCompleted(ExternalContentManager *this)
{
  ExternalContentManager *v1; // r4@1
  int v2; // r6@1
  int v3; // r0@2
  unsigned int *v4; // r0@3
  unsigned int v5; // r1@5
  int v6; // r6@8
  int v7; // r1@9
  void *v8; // r0@9
  int v9; // r6@10
  unsigned int *v10; // r1@11
  unsigned int v11; // r0@13
  unsigned int *v12; // r7@18
  unsigned int v13; // r0@20
  unsigned int *v14; // r0@27
  unsigned int v15; // r1@29
  char v16; // r1@32
  char v17; // r3@34
  int v18; // r4@36
  unsigned int *v19; // r1@37
  unsigned int v20; // r0@39
  unsigned int *v21; // r5@43
  unsigned int v22; // r0@45
  void *v23; // r0@50
  int v24; // r4@51
  unsigned int *v25; // r1@52
  unsigned int v26; // r0@54
  unsigned int *v27; // r5@58
  unsigned int v28; // r0@60
  unsigned int *v29; // r2@66
  signed int v30; // r1@68
  unsigned int *v31; // r2@70
  signed int v32; // r1@72
  int v33; // [sp+8h] [bp-30h]@26
  int v34; // [sp+Ch] [bp-2Ch]@26
  int v35; // [sp+10h] [bp-28h]@2
  int v36; // [sp+14h] [bp-24h]@2
  int v37; // [sp+18h] [bp-20h]@8
  unsigned __int16 v38; // [sp+1Ch] [bp-1Ch]@8

  v1 = this;
  *((_BYTE *)this + 28) = 0;
  v2 = *((_DWORD *)this + 10);
  if ( 8 * (*((_DWORD *)this + 17) - (*((_QWORD *)this + 6) >> 32))
     + ((signed int)(*((_QWORD *)this + 7) - (*((_QWORD *)this + 7) >> 32)) >> 4)
     - 32
     + ((signed int)(*((_QWORD *)this + 6) - v2) >> 4) )
  {
    v35 = *(_DWORD *)v2;
    v3 = *(_DWORD *)(v2 + 4);
    v36 = v3;
    if ( v3 )
    {
      v4 = (unsigned int *)(v3 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v5 = __ldrex(v4);
        while ( __strex(v5 + 1, v4) );
      }
      else
        ++*v4;
    }
    sub_119C854(&v37, (int *)(v2 + 8));
    v38 = *(_WORD *)(v2 + 12);
    v6 = *((_DWORD *)v1 + 10);
    if ( v6 == *((_DWORD *)v1 + 12) - 16 )
      std::deque<ExternalContentManager::ImportRequestData,std::allocator<ExternalContentManager::ImportRequestData>>::_M_pop_front_aux((int)v1 + 32);
    else
      v7 = *(_DWORD *)(v6 + 8);
      v8 = (void *)(v7 - 12);
      if ( (int *)(v7 - 12) != &dword_28898C0 )
        v31 = (unsigned int *)(v7 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v8);
      v9 = *(_DWORD *)(v6 + 4);
      if ( v9 )
        v10 = (unsigned int *)(v9 + 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 == 1 )
          v12 = (unsigned int *)(v9 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
          if ( &pthread_create )
          {
            __dmb();
            do
              v13 = __ldrex(v12);
            while ( __strex(v13 - 1, v12) );
          }
          else
            v13 = (*v12)--;
          if ( v13 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
      *((_DWORD *)v1 + 10) += 16;
    v33 = v35;
    v34 = v36;
    if ( v36 )
      v14 = (unsigned int *)(v36 + 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 + 1, v14) );
        ++*v14;
    v16 = 0;
    if ( v38 > 0xFFu )
      v16 = 1;
    v17 = v38;
    if ( (_BYTE)v38 )
      v17 = 1;
    ExternalContentManager::importContent((int)v1, (int)&v33, (int)&v37, v17, v16);
    v18 = v34;
    if ( v34 )
      v19 = (unsigned int *)(v34 + 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 == 1 )
        v21 = (unsigned int *)(v18 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
          v22 = (*v21)--;
        if ( v22 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
    v23 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v37 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v23);
    v24 = v36;
      v25 = (unsigned int *)(v36 + 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 == 1 )
        v27 = (unsigned int *)(v24 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
  }
}


signed int __fastcall ExternalContentManager::_packExists(ExternalContentManager *this, const PackManifest *a2)
{
  PackManifest *v2; // r4@1
  ExternalContentManager *v3; // r5@1
  int v4; // r0@1
  signed int result; // r0@4
  SkinRepository *v6; // r5@5
  char *v7; // r0@5
  ResourcePackRepository *v8; // r5@6
  char *v9; // r0@6
  ResourcePack *v10; // r0@6
  PackManifest *v11; // r0@7
  WorldTemplateManager *v12; // r5@10
  char *v13; // r0@10

  v2 = a2;
  v3 = this;
  v4 = PackManifest::getPackType(a2);
  if ( (unsigned int)(v4 - 1) < 2 )
  {
    v8 = (ResourcePackRepository *)*((_DWORD *)v3 + 1);
    v9 = PackManifest::getIdentity(v2);
    v10 = (ResourcePack *)ResourcePackRepository::getResourcePackForPackId(v8, (const PackIdVersion *)v9);
    result = 0;
    if ( v10 )
    {
      v11 = (PackManifest *)ResourcePack::getManifest(v10);
      if ( PackManifest::isPremium(v11) != 1 )
        result = 1;
    }
  }
  else if ( v4 == 3 )
    v12 = (WorldTemplateManager *)*((_DWORD *)v3 + 2);
    v13 = PackManifest::getIdentity(v2);
    result = WorldTemplateManager::isWorldTemplateInstalled(v12, (const PackIdVersion *)v13);
  else if ( v4 == 5 )
    v6 = (SkinRepository *)*((_DWORD *)v3 + 5);
    v7 = PackManifest::getIdentity(v2);
    result = SkinRepository::isSkinPackKnown(v6, (const mce::UUID *)v7);
  else
  return result;
}


void __fastcall ExternalContentManager::_packImportCompleted(ExternalContentManager *this)
{
  ExternalContentManager::_packImportCompleted(this);
}


void __fastcall ExternalContentManager::_importMCWorld(int *a1, int a2, int *a3, char a4, char a5)
{
  ExternalContentManager::_importMCWorld(a1, a2, a3, a4, a5);
}


RakNet *__fastcall ExternalContentManager::getTemplateFolder(ExternalContentManager *this)
{
  void **v1; // r4@1
  void *v2; // r0@2
  int v3; // r0@4
  int v4; // r2@4
  int v5; // r3@4
  RakNet *result; // r0@4
  int v7; // [sp+0h] [bp-430h]@4
  int v8; // [sp+4h] [bp-42Ch]@4
  int v9; // [sp+8h] [bp-428h]@4
  int v10; // [sp+Ch] [bp-424h]@4
  char v11; // [sp+14h] [bp-41Ch]@4
  int v12; // [sp+18h] [bp-418h]@4
  RakNet *v13; // [sp+41Ch] [bp-14h]@1

  v1 = (void **)this;
  v13 = _stack_chk_guard;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = &ServiceLocator<AppPlatform>::mDefaultService;
  v3 = *(_DWORD *)(*(int (**)(void))(**(_DWORD **)v2 + 292))();
  v4 = *(_DWORD *)(v3 - 12);
  v5 = *(_DWORD *)(ExternalContentManager::TEMPLATE_PATH - 12);
  v7 = v3;
  v8 = v4;
  v9 = ExternalContentManager::TEMPLATE_PATH;
  v10 = v5;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v11, (int)&v7, 2);
  sub_119C884(v1, (const char *)&v12);
  result = (RakNet *)(_stack_chk_guard - v13);
  if ( _stack_chk_guard != v13 )
    _stack_chk_fail(result);
  return result;
}


RakNet *__fastcall ExternalContentManager::_importMCAddon(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r6@1
  int v5; // r5@1
  int v6; // r1@1
  void *v7; // r0@1
  signed int v8; // r6@4
  __int64 v9; // kr00_8@5
  unsigned int *v10; // r0@6
  unsigned int v11; // r1@8
  _DWORD *v12; // r0@11
  __int64 v13; // r1@11
  void *v14; // r0@15
  RakNet *result; // r0@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20
  unsigned int *v18; // r2@22
  signed int v19; // r1@24
  _DWORD *v20; // [sp+8h] [bp-920h]@11
  __int64 v21; // [sp+10h] [bp-918h]@11
  int v22; // [sp+18h] [bp-910h]@5
  int v23; // [sp+1Ch] [bp-90Ch]@5
  char v24; // [sp+20h] [bp-908h]@11
  void (*v25)(void); // [sp+28h] [bp-900h]@11
  char v26; // [sp+34h] [bp-8F4h]@4
  int v27; // [sp+70h] [bp-8B8h]@2
  int v28; // [sp+74h] [bp-8B4h]@2
  char v29; // [sp+78h] [bp-8B0h]@2
  void (*v30)(void); // [sp+80h] [bp-8A8h]@2
  int v31; // [sp+8Ch] [bp-89Ch]@1
  int v32; // [sp+90h] [bp-898h]@1
  int v33; // [sp+94h] [bp-894h]@1
  int v34; // [sp+98h] [bp-890h]@1
  char v35; // [sp+9Ch] [bp-88Ch]@1
  char v36; // [sp+D8h] [bp-850h]@1
  int v37; // [sp+E0h] [bp-848h]@1
  int v38; // [sp+E4h] [bp-844h]@1
  const char *v39; // [sp+E8h] [bp-840h]@1
  int v40; // [sp+ECh] [bp-83Ch]@1
  char v41; // [sp+100h] [bp-828h]@1
  int v42; // [sp+104h] [bp-824h]@1
  char v43; // [sp+508h] [bp-420h]@1
  int v44; // [sp+50Ch] [bp-41Ch]@1
  RakNet *v45; // [sp+910h] [bp-18h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v45 = _stack_chk_guard;
  ZipUtils::ZipProgress::ZipProgress((ZipUtils::ZipProgress *)&v36);
  ZipUtils::UnzipSettings::UnzipSettings((ZipUtils::UnzipSettings *)&v35);
  v6 = *(_DWORD *)(*(_DWORD *)(v3 + 72) - 12);
  v37 = *(_DWORD *)(v3 + 72);
  v38 = v6;
  v39 = "addon";
  v40 = -1;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v43, (int)&v37, 2);
  sub_119C884((void **)&v34, (const char *)&v44);
  v31 = v34;
  v32 = *(_DWORD *)(v34 - 12);
  Core::FileSystem::getUniqueFilePathForDirectory((int)&v41, (__int64 *)&v31);
  sub_119C884((void **)&v33, (const char *)&v42);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v34, &v33);
  v7 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v33 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  v27 = v34;
  v28 = *(_DWORD *)(v34 - 12);
  Core::FileSystem::createDirectoryRecursively((int)&v29, (__int64 *)&v27);
  if ( v30 )
    v30();
  ZipUtils::UnzipSettings::UnzipSettings((ZipUtils::UnzipSettings *)&v26, (const ZipUtils::UnzipSettings *)&v35);
  v8 = ZipUtils::unzip(v4, &v34, (int)&v36, (int)&v26);
  ZipUtils::UnzipSettings::~UnzipSettings((ZipUtils::UnzipSettings *)&v26);
  if ( !v8 )
    (*(void (**)(void))(**(_DWORD **)v5 + 40))();
    v22 = v34;
    v23 = -1;
    v9 = *(_QWORD *)v5;
    if ( *(_QWORD *)v5 >> 32 )
      v10 = (unsigned int *)(HIDWORD(v9) + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 + 1, v10) );
      }
      else
        ++*v10;
    v12 = operator new(0xCu);
    LODWORD(v13) = sub_F57644;
    *v12 = v3;
    v12[1] = v9;
    HIDWORD(v13) = sub_F57430;
    v12[2] = HIDWORD(v9);
    v20 = v12;
    v21 = v13;
    Core::FileSystem::iterateOverDirectory((int)&v24, (__int64 *)&v22, 386LL, (int)&v20);
    if ( v25 )
      v25();
    if ( (_DWORD)v21 )
      ((void (*)(void))v21)();
  ExternalContentManager::_packImportCompleted((ExternalContentManager *)v3);
  v14 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v34 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  ZipUtils::UnzipSettings::~UnzipSettings((ZipUtils::UnzipSettings *)&v35);
  ZipUtils::ZipProgress::~ZipProgress((ZipUtils::ZipProgress *)&v36);
  result = (RakNet *)(_stack_chk_guard - v45);
  if ( _stack_chk_guard != v45 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall ExternalContentManager::_importMCWorld(int *a1, int a2, int *a3, char a4, char a5)
{
  int *v5; // r4@1
  int v6; // r0@1
  int v7; // r1@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r6@4
  int v10; // r5@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r6@14
  unsigned int v14; // r0@16
  int v15; // [sp+8h] [bp-18h]@1
  int v16; // [sp+Ch] [bp-14h]@1

  v5 = a1;
  v6 = *a1;
  v15 = *(_DWORD *)a2;
  v7 = *(_DWORD *)(a2 + 4);
  v16 = v7;
  if ( v7 )
  {
    v8 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  LevelLoader::queueLevelForImport(v6, (unsigned __int64 *)&v15, a3, a5, a4);
  v10 = v16;
  if ( v16 )
    v11 = (unsigned int *)(v16 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  ExternalContentManager::_packImportCompleted((ExternalContentManager *)v5);
}


unsigned int __fastcall ExternalContentManager::LoadingContentDataHasher::operator()(int a1, int a2)
{
  return sub_119C9A4(*(int **)(a2 + 4), *(_DWORD *)(*(_DWORD *)(a2 + 4) - 12), -955291385) ^ *(_BYTE *)(a2 + 8) ^ *(_BYTE *)a2;
}


ExternalContentManager *__fastcall ExternalContentManager::~ExternalContentManager(ExternalContentManager *this)
{
  ExternalContentManager *v1; // r11@1
  int v2; // r7@3
  unsigned int *v3; // r2@5
  signed int v4; // r1@7
  void *v5; // r6@13
  int v6; // r1@13
  void *v7; // r0@13
  char *v8; // r0@15
  int v9; // r0@18
  int v10; // r1@20
  void *v11; // r0@20
  int v12; // r1@21
  int v13; // r2@21
  int v14; // r3@21
  int v15; // r7@21
  __int64 v16; // kr00_8@21
  int v17; // r4@21
  void *v18; // r0@21
  unsigned int v19; // r6@22
  unsigned int v20; // r1@22
  unsigned int v21; // r7@23
  void *v22; // t1@24
  unsigned int *v24; // r2@28
  signed int v25; // r1@30
  int v26; // [sp+0h] [bp-60h]@1
  int v27; // [sp+4h] [bp-5Ch]@1
  char v28; // [sp+8h] [bp-58h]@1
  void (*v29)(void); // [sp+10h] [bp-50h]@1
  int v30; // [sp+1Ch] [bp-44h]@21
  __int64 v31; // [sp+20h] [bp-40h]@21
  int v32; // [sp+28h] [bp-38h]@21
  int v33; // [sp+2Ch] [bp-34h]@21
  int v34; // [sp+30h] [bp-30h]@21
  int v35; // [sp+34h] [bp-2Ch]@21
  int v36; // [sp+38h] [bp-28h]@21

  v1 = this;
  v26 = *((_DWORD *)this + 18);
  v27 = *(_DWORD *)(v26 - 12);
  Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v28, (__int64 *)&v26);
  if ( v29 )
    v29();
  v2 = *((_DWORD *)v1 + 22);
  while ( v2 )
  {
    v5 = (void *)v2;
    v6 = *(_DWORD *)(v2 + 8);
    v2 = *(_DWORD *)v2;
    v7 = (void *)(v6 - 12);
    if ( (int *)(v6 - 12) != &dword_28898C0 )
    {
      v3 = (unsigned int *)(v6 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v4 = __ldrex(v3);
        while ( __strex(v4 - 1, v3) );
      }
      else
        v4 = (*v3)--;
      if ( v4 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
    }
    operator delete(v5);
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 10), 4 * (*((_QWORD *)v1 + 10) >> 32));
  *((_DWORD *)v1 + 22) = 0;
  *((_DWORD *)v1 + 23) = 0;
  v8 = (char *)*((_DWORD *)v1 + 20);
  if ( v8 && (char *)v1 + 104 != v8 )
    operator delete(v8);
  v9 = *((_DWORD *)v1 + 19);
  if ( v9 )
    (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  *((_DWORD *)v1 + 19) = 0;
  v10 = *((_DWORD *)v1 + 18);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    else
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = *((_DWORD *)v1 + 11);
  v13 = *((_DWORD *)v1 + 12);
  v14 = *((_DWORD *)v1 + 13);
  v15 = *((_DWORD *)v1 + 14);
  v16 = *(_QWORD *)((char *)v1 + 60);
  v17 = *((_DWORD *)v1 + 17);
  v33 = *((_DWORD *)v1 + 10);
  v34 = v12;
  v35 = v13;
  v36 = v14;
  v30 = v15;
  v31 = v16;
  v32 = v17;
  std::deque<ExternalContentManager::ImportRequestData,std::allocator<ExternalContentManager::ImportRequestData>>::_M_destroy_data_aux(
    (int)v1 + 32,
    (int)&v33,
    (int)&v30);
  v18 = (void *)*((_DWORD *)v1 + 8);
  if ( v18 )
    v19 = *((_DWORD *)v1 + 17);
    v20 = *((_DWORD *)v1 + 13);
    if ( v20 < v19 + 4 )
      v21 = v20 - 4;
        v22 = *(void **)(v21 + 4);
        v21 += 4;
        operator delete(v22);
      while ( v21 < v19 );
      v18 = (void *)*((_DWORD *)v1 + 8);
    operator delete(v18);
  return v1;
}


int __fastcall ExternalContentManager::ExternalContentManager(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // r11@1
  void *v9; // r1@1
  int v10; // r12@2
  unsigned int v11; // lr@2
  unsigned int v12; // r8@2
  unsigned int v13; // r10@2
  int v14; // r2@2
  unsigned int v15; // r5@2
  unsigned int v16; // r6@2
  int v17; // r4@2
  int v18; // r0@2
  unsigned int v19; // r5@2
  int v20; // r6@2
  int v21; // r7@2
  unsigned __int64 v22; // kr18_8@2
  int v23; // r9@2
  void *v24; // r2@2
  int v25; // r1@2
  double v26; // r0@4
  void *v27; // r5@4
  unsigned int v28; // r6@5
  unsigned int v29; // r7@6
  void *v30; // t1@7
  int *v31; // r6@9
  unsigned int v32; // r0@9
  int v33; // r7@11
  void *v34; // r5@11
  AppPlatform **v35; // r0@13
  int v36; // r0@15
  int v37; // r1@15
  void *v38; // r0@15
  int v39; // r5@20
  DirectoryPackSource *v40; // r8@20
  char *v41; // r0@20
  _BYTE *v42; // r7@22
  unsigned int v43; // r2@22
  unsigned int v44; // r1@24
  unsigned int v45; // r6@24
  char *v46; // r5@30
  int v47; // r8@32
  DirectoryPackSource **v48; // r8@34
  void *v49; // r0@37
  InPackagePackSource *v50; // r8@38
  char *v51; // r0@38
  _BYTE *v52; // r7@40
  unsigned int v53; // r2@40
  unsigned int v54; // r1@42
  unsigned int v55; // r6@42
  char *v56; // r5@48
  int v57; // r8@50
  DirectoryPackSource **v58; // r8@52
  void *v59; // r5@55
  int v60; // r0@55
  unsigned int *v62; // r2@63
  signed int v63; // r1@65
  unsigned int *v64; // r2@67
  signed int v65; // r1@69
  int v66; // [sp+Ch] [bp-4DCh]@20
  void *v67; // [sp+10h] [bp-4D8h]@20
  DirectoryPackSource **v68; // [sp+14h] [bp-4D4h]@20
  char *v69; // [sp+18h] [bp-4D0h]@20
  int v70; // [sp+1Ch] [bp-4CCh]@18
  int v71; // [sp+20h] [bp-4C8h]@18
  char v72; // [sp+24h] [bp-4C4h]@18
  void (*v73)(void); // [sp+2Ch] [bp-4BCh]@18
  int v74; // [sp+38h] [bp-4B0h]@16
  int v75; // [sp+3Ch] [bp-4ACh]@16
  char v76; // [sp+40h] [bp-4A8h]@16
  void (*v77)(void); // [sp+48h] [bp-4A0h]@16
  int v78; // [sp+54h] [bp-494h]@15
  void *ptr; // [sp+58h] [bp-490h]@1
  int v80; // [sp+5Ch] [bp-48Ch]@2
  unsigned __int64 v81; // [sp+60h] [bp-488h]@2
  unsigned __int64 v82; // [sp+68h] [bp-480h]@2
  unsigned __int64 v83; // [sp+70h] [bp-478h]@2
  int v84; // [sp+78h] [bp-470h]@2
  int v85; // [sp+7Ch] [bp-46Ch]@2
  int v86; // [sp+80h] [bp-468h]@15
  int v87; // [sp+84h] [bp-464h]@15
  const char *v88; // [sp+88h] [bp-460h]@15
  int v89; // [sp+8Ch] [bp-45Ch]@15
  int v90; // [sp+98h] [bp-450h]@4
  unsigned int v91; // [sp+9Ch] [bp-44Ch]@4
  int v92; // [sp+A0h] [bp-448h]@4
  int v93; // [sp+A4h] [bp-444h]@4
  int v94; // [sp+A8h] [bp-440h]@4
  unsigned int v95; // [sp+ACh] [bp-43Ch]@4
  unsigned int v96; // [sp+B0h] [bp-438h]@4
  unsigned int v97; // [sp+B4h] [bp-434h]@4
  char v98; // [sp+B8h] [bp-430h]@15
  int v99; // [sp+BCh] [bp-42Ch]@15
  RakNet *v100; // [sp+4C0h] [bp-28h]@1

  v8 = a1;
  v100 = _stack_chk_guard;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  *(_DWORD *)(a1 + 8) = a4;
  *(_DWORD *)(a1 + 12) = a5;
  *(_DWORD *)(a1 + 16) = a6;
  *(_DWORD *)(a1 + 20) = a7;
  *(_DWORD *)(a1 + 24) = a8;
  *(_BYTE *)(a1 + 28) = 0;
  _aeabi_memclr8(&ptr, 40);
  std::_Deque_base<ExternalContentManager::ImportRequestData,std::allocator<ExternalContentManager::ImportRequestData>>::_M_initialize_map(
    (int)&ptr,
    0);
  _aeabi_memclr4(v8 + 32, 40);
    v8 + 32,
  v9 = ptr;
  if ( ptr )
  {
    v11 = *(_QWORD *)(v8 + 40) >> 32;
    v10 = *(_QWORD *)(v8 + 40);
    v13 = *(_QWORD *)(v8 + 48) >> 32;
    v12 = *(_QWORD *)(v8 + 48);
    v14 = v8 + 40;
    v17 = HIDWORD(v81);
    v16 = HIDWORD(v82);
    v15 = v82;
    *(_DWORD *)v14 = v81;
    *(_DWORD *)(v14 + 4) = v17;
    *(_QWORD *)(v14 + 8) = __PAIR__(v16, v15);
    v81 = __PAIR__(v11, v10);
    v82 = __PAIR__(v13, v12);
    v18 = *(_DWORD *)(v8 + 56);
    v19 = *(_DWORD *)(v8 + 60);
    v20 = *(_DWORD *)(v8 + 64);
    v21 = *(_DWORD *)(v8 + 68);
    v22 = v83;
    v23 = v85;
    *(_DWORD *)(v8 + 64) = v84;
    *(_DWORD *)(v8 + 68) = v23;
    *(_QWORD *)(v8 + 56) = v22;
    v83 = __PAIR__(v19, v18);
    v84 = v20;
    v85 = v21;
    v24 = *(void **)(v8 + 32);
    *(_DWORD *)(v8 + 32) = v9;
    ptr = v24;
    v25 = *(_DWORD *)(v8 + 36);
    *(_DWORD *)(v8 + 36) = v80;
    v80 = v25;
  }
  else
    v11 = HIDWORD(v81);
    v10 = v81;
    v13 = HIDWORD(v82);
    v12 = v82;
    v19 = HIDWORD(v83);
    v18 = v83;
    v20 = v84;
    v21 = v85;
  v96 = v12;
  v97 = v13;
  v90 = v18;
  v91 = v19;
  v92 = v20;
  v93 = v21;
  v94 = v10;
  v95 = v11;
  std::deque<ExternalContentManager::ImportRequestData,std::allocator<ExternalContentManager::ImportRequestData>>::_M_destroy_data_aux(
    (int)&v94,
    (int)&v90);
  v27 = ptr;
    v28 = v85;
    if ( HIDWORD(v82) < v85 + 4 )
    {
      v29 = HIDWORD(v82) - 4;
      do
      {
        v30 = *(void **)(v29 + 4);
        v29 += 4;
        operator delete(v30);
      }
      while ( v29 < v28 );
    }
    operator delete(v27);
  *(_DWORD *)(v8 + 72) = &unk_28898CC;
  v31 = (int *)(v8 + 72);
  *(_DWORD *)(v8 + 76) = 0;
  *(_DWORD *)(v8 + 88) = 0;
  *(_DWORD *)(v8 + 92) = 0;
  *(_DWORD *)(v8 + 96) = 1065353216;
  LODWORD(v26) = v8 + 96;
  *(_DWORD *)(LODWORD(v26) + 4) = 0;
  v32 = sub_119C844(v26);
  *(_DWORD *)(v8 + 84) = v32;
  if ( v32 == 1 )
    *(_DWORD *)(v8 + 104) = 0;
    v34 = (void *)(v8 + 104);
    if ( v32 >= 0x40000000 )
      sub_119C874();
    v33 = 4 * v32;
    v34 = operator new(4 * v32);
    _aeabi_memclr4(v34, v33);
  *(_DWORD *)(v8 + 80) = v34;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v35 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v35 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v36 = *AppPlatform::getTempPath(*v35);
  v37 = *(_DWORD *)(v36 - 12);
  v86 = v36;
  v87 = v37;
  v88 = "TempImportPacks";
  v89 = -1;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v98, (int)&v86, 2);
  sub_119C884((void **)&v78, (const char *)&v99);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v8 + 72),
    &v78);
  v38 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v78 - 4);
    if ( &pthread_create )
      __dmb();
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
    else
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v38);
  v74 = *v31;
  v75 = *(_DWORD *)(v74 - 12);
  Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v76, (__int64 *)&v74);
  if ( v77 )
    v77();
  v70 = *v31;
  v71 = *(_DWORD *)(v70 - 12);
  Core::FileSystem::createDirectoryRecursively((int)&v72, (__int64 *)&v70);
  if ( v73 )
    v73();
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v39 = *(_DWORD *)(v8 + 24);
  ExternalContentManager::getTemplateFolder((ExternalContentManager *)&v66);
  v40 = PackSourceFactory::createDirectoryPackSource(v39, &v66, 3, 4, 0);
  v41 = (char *)v68;
  if ( (char *)v68 == v69 )
    v42 = v67;
    v43 = ((char *)v68 - (_BYTE *)v67) >> 2;
    if ( !v43 )
      v43 = 1;
    v44 = v43 + (((char *)v68 - (_BYTE *)v67) >> 2);
    v45 = v43 + (((char *)v68 - (_BYTE *)v67) >> 2);
    if ( 0 != v44 >> 30 )
      v45 = 0x3FFFFFFF;
    if ( v44 < v43 )
    if ( v45 )
      if ( v45 >= 0x40000000 )
        sub_119C874();
      v46 = (char *)operator new(4 * v45);
      v41 = (char *)v68;
      v42 = v67;
      v46 = 0;
    *(_DWORD *)&v46[v41 - v42] = v40;
    v47 = (int)&v46[v41 - v42];
    if ( 0 != (v41 - v42) >> 2 )
      _aeabi_memmove4(v46, v42);
    v48 = (DirectoryPackSource **)(v47 + 4);
    if ( v42 )
      operator delete(v42);
    v67 = v46;
    v68 = v48;
    v69 = &v46[4 * v45];
    *v68 = v40;
    ++v68;
  v49 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v66 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v49);
  v50 = PackSourceFactory::createInPackagePackSource(*(_DWORD *)(v8 + 24), 3);
  v51 = (char *)v68;
    v52 = v67;
    v53 = ((char *)v68 - (_BYTE *)v67) >> 2;
    if ( !v53 )
      v53 = 1;
    v54 = v53 + (((char *)v68 - (_BYTE *)v67) >> 2);
    v55 = v53 + (((char *)v68 - (_BYTE *)v67) >> 2);
    if ( 0 != v54 >> 30 )
      v55 = 0x3FFFFFFF;
    if ( v54 < v53 )
    if ( v55 )
      if ( v55 >= 0x40000000 )
      v56 = (char *)operator new(4 * v55);
      v51 = (char *)v68;
      v52 = v67;
      v56 = 0;
    *(_DWORD *)&v56[v51 - v52] = v50;
    v57 = (int)&v56[v51 - v52];
    if ( 0 != (v51 - v52) >> 2 )
      _aeabi_memmove4(v56, v52);
    v58 = (DirectoryPackSource **)(v57 + 4);
    if ( v52 )
      operator delete(v52);
    v67 = v56;
    v68 = v58;
    v69 = &v56[4 * v55];
    *v68 = v50;
  v59 = operator new(0x10u);
  CompositePackSource::CompositePackSource((int)v59, (int)&v67);
  v60 = *(_DWORD *)(v8 + 76);
  *(_DWORD *)(v8 + 76) = v59;
  if ( v60 )
    (*(void (**)(void))(*(_DWORD *)v60 + 4))();
  if ( v67 )
    operator delete(v67);
  if ( _stack_chk_guard != v100 )
    _stack_chk_fail(_stack_chk_guard - v100);
  return v8;
}


RakNet *__fastcall ExternalContentManager::_importMCPack(int a1, int a2, int a3, PackManifest *this, PackReport *a5, int a6)
{
  int v6; // r9@1
  int v7; // r5@1
  PackManifest *v8; // r4@1
  int v9; // r7@1
  int v10; // r0@1
  char *v11; // r1@1
  void *v12; // r0@2
  unsigned int *v13; // r2@3
  signed int v14; // r1@5
  void *v15; // r0@25
  int v16; // r2@26
  int v17; // r3@26
  int v18; // r6@26
  char v19; // r8@26
  char *v20; // r0@26
  int v21; // r11@31
  int v22; // r1@31
  unsigned int *v23; // r1@32
  unsigned int v24; // r2@34
  void *v25; // r5@39
  void *v26; // r1@39
  int v27; // r0@39
  __int64 v28; // r6@39
  char *v29; // r0@41
  void *v30; // r0@42
  char *v31; // r0@43
  char *v32; // r0@44
  void *v33; // r0@45
  unsigned int *v39; // r2@53
  signed int v40; // r1@55
  char *v42; // r0@60
  void *v43; // r0@61
  void *v44; // r0@62
  void *v45; // r0@63
  void *v46; // r0@64
  char *v47; // r0@66
  RakNet *result; // r0@67
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
  unsigned int *v61; // r2@121
  signed int v62; // r1@123
  unsigned int *v63; // r2@125
  signed int v64; // r1@127
  unsigned int *v65; // r2@129
  signed int v66; // r1@131
  unsigned int *v67; // r2@133
  signed int v68; // r1@135
  unsigned int *v69; // r2@137
  signed int v70; // r1@139
  int v71; // [sp+8h] [bp-D28h]@31
  int v72; // [sp+Ch] [bp-D24h]@31
  int v73; // [sp+14h] [bp-D1Ch]@37
  char v74; // [sp+18h] [bp-D18h]@39
  char *v75; // [sp+1Ch] [bp-D14h]@39
  char v76; // [sp+20h] [bp-D10h]@39
  void *v77; // [sp+24h] [bp-D0Ch]@39
  int v78; // [sp+28h] [bp-D08h]@39
  __int16 v79; // [sp+2Ch] [bp-D04h]@39
  int v80; // [sp+30h] [bp-D00h]@39
  char *v81; // [sp+34h] [bp-CFCh]@39
  void *v82; // [sp+38h] [bp-CF8h]@39
  void (*v83)(void); // [sp+40h] [bp-CF0h]@39
  int v84; // [sp+48h] [bp-CE8h]@29
  int v85; // [sp+4Ch] [bp-CE4h]@29
  char v86; // [sp+50h] [bp-CE0h]@29
  void (*v87)(void); // [sp+58h] [bp-CD8h]@29
  void *v88; // [sp+64h] [bp-CCCh]@27
  int v89; // [sp+68h] [bp-CC8h]@27
  char v90; // [sp+6Ch] [bp-CC4h]@27
  void (*v91)(void); // [sp+74h] [bp-CBCh]@27
  char v92; // [sp+80h] [bp-CB0h]@27
  char v93; // [sp+88h] [bp-CA8h]@26
  char *v94; // [sp+8Ch] [bp-CA4h]@26
  int v95; // [sp+90h] [bp-CA0h]@26
  int v96; // [sp+94h] [bp-C9Ch]@26
  __int64 v97; // [sp+98h] [bp-C98h]@26
  int v98; // [sp+A0h] [bp-C90h]@26
  int v99; // [sp+A4h] [bp-C8Ch]@26
  int v100; // [sp+A8h] [bp-C88h]@26
  void *v101; // [sp+ACh] [bp-C84h]@25
  int v102; // [sp+B0h] [bp-C80h]@25
  int v103; // [sp+B4h] [bp-C7Ch]@25
  int v104; // [sp+B8h] [bp-C78h]@17
  int v105; // [sp+BCh] [bp-C74h]@7
  int v106; // [sp+C0h] [bp-C70h]@2
  int v107; // [sp+C4h] [bp-C6Ch]@12
  void *v108; // [sp+C8h] [bp-C68h]@1
  void *v109; // [sp+D0h] [bp-C60h]@26
  int v110; // [sp+D4h] [bp-C5Ch]@26
  int v111; // [sp+D8h] [bp-C58h]@26
  int v112; // [sp+DCh] [bp-C54h]@26
  int v113; // [sp+E8h] [bp-C48h]@27
  char v114; // [sp+F0h] [bp-C40h]@26
  int v115; // [sp+F4h] [bp-C3Ch]@26
  char v116; // [sp+4F8h] [bp-838h]@26
  int v117; // [sp+4FCh] [bp-834h]@26
  int v118; // [sp+8FCh] [bp-434h]@26
  char v119; // [sp+900h] [bp-430h]@25
  int v120; // [sp+904h] [bp-42Ch]@25
  RakNet *v121; // [sp+D08h] [bp-28h]@1

  v6 = a1;
  v7 = a2;
  v8 = this;
  v9 = a3;
  v121 = _stack_chk_guard;
  v108 = &unk_28898CC;
  v10 = PackManifest::getPackType(this);
  v11 = (char *)&unk_28898CC;
  switch ( v10 )
  {
    case 1:
      (*(void (__fastcall **)(int *))(**(_DWORD **)v7 + 20))(&v106);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)&v108,
        &v106);
      v12 = (void *)(v106 - 12);
      if ( (int *)(v106 - 12) == &dword_28898C0 )
        goto LABEL_25;
      v13 = (unsigned int *)(v106 - 4);
      if ( !&pthread_create )
        goto LABEL_22;
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      goto LABEL_23;
    case 3:
      (*(void (__fastcall **)(int *))(**(_DWORD **)v7 + 24))(&v105);
        &v105);
      v12 = (void *)(v105 - 12);
      if ( (int *)(v105 - 12) == &dword_28898C0 )
      v13 = (unsigned int *)(v105 - 4);
    case 2:
      (*(void (__fastcall **)(int *))(**(_DWORD **)v7 + 16))(&v107);
        &v107);
      v12 = (void *)(v107 - 12);
      if ( (int *)(v107 - 12) == &dword_28898C0 )
      v13 = (unsigned int *)(v107 - 4);
    case 5:
      (*(void (__fastcall **)(int *))(**(_DWORD **)v7 + 28))(&v104);
        &v104);
      v12 = (void *)(v104 - 12);
      if ( (int *)(v104 - 12) != &dword_28898C0 )
      {
        v13 = (unsigned int *)(v104 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        }
        else
LABEL_22:
          v14 = (*v13)--;
LABEL_23:
        if ( v14 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v12);
      }
LABEL_25:
      v101 = v108;
      v102 = *((_DWORD *)v108 - 3);
      File::cleanPathSeparators((int)&v119, (__int64 *)&v101);
      sub_119C884((void **)&v103, (const char *)&v120);
        &v103);
      v15 = (void *)(v103 - 12);
      if ( (int *)(v103 - 12) != &dword_28898C0 )
        v39 = (unsigned int *)(v103 - 4);
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
          v40 = (*v39)--;
        if ( v40 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v15);
      PackManifest::getName((PackManifest *)&v100, (int)v8);
      (*(void (__fastcall **)(int *))(**(_DWORD **)v7 + 12))(&v99);
      v16 = *(_DWORD *)(v99 - 12);
      v17 = *((_DWORD *)v108 - 3);
      v109 = v108;
      v110 = v17;
      v111 = v99;
      v112 = v16;
      Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v116, (int)&v109, 2);
      LODWORD(v97) = &v117;
      HIDWORD(v97) = v118;
      Core::FileSystem::getUniqueFilePathForDirectory((int)&v114, &v97);
      sub_119C884((void **)&v98, (const char *)&v115);
      v18 = PackManifest::getManifestOrigin(v8);
      v19 = (*(int (**)(void))(**(_DWORD **)v7 + 32))();
      v20 = PackManifest::getLocation(v8);
      ResourceLocation::getFullPath((ResourceLocation *)&v96, (int)v20);
      v94 = (char *)&unk_28898CC;
      v95 = 0;
      v93 = PackManifest::getPackType(v8);
      EntityInteraction::setInteractText((int *)&v94, (int *)v9);
      v95 = *(_DWORD *)(v9 + 4);
      if ( !std::_Hashtable<ExternalContentManager::LoadingContentData,ExternalContentManager::LoadingContentData,std::allocator<ExternalContentManager::LoadingContentData>,std::__detail::_Identity,std::equal_to<ExternalContentManager::LoadingContentData>,ExternalContentManager::LoadingContentDataHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::find(
              (unsigned __int64 *)(v6 + 80),
              (int)&v93) )
        v113 = v6 + 80;
        std::_Hashtable<ExternalContentManager::LoadingContentData,ExternalContentManager::LoadingContentData,std::allocator<ExternalContentManager::LoadingContentData>,std::__detail::_Identity,std::equal_to<ExternalContentManager::LoadingContentData>,ExternalContentManager::LoadingContentDataHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert<ExternalContentManager::LoadingContentData const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<ExternalContentManager::LoadingContentData,true>>>>(
          (int *)&v92,
          (unsigned __int64 *)(v6 + 80),
          (int)&v93,
          &v113);
        v88 = v108;
        v89 = *((_DWORD *)v108 - 3);
        Core::FileSystem::createDirectoryRecursively((int)&v90, (__int64 *)&v88);
        if ( v91 )
          v91();
        v84 = v98;
        v85 = *(_DWORD *)(v98 - 12);
        Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v86, (__int64 *)&v84);
        if ( v87 )
          v87();
        v21 = *(_DWORD *)v7;
        v71 = *(_DWORD *)v7;
        v22 = *(_DWORD *)(v7 + 4);
        v72 = v22;
        if ( v22 )
          v23 = (unsigned int *)(v22 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v24 = __ldrex(v23);
            while ( __strex(v24 + 1, v23) );
          }
          else
            ++*v23;
        sub_119C854(&v73, &v100);
        if ( v18 != 1 )
          LOBYTE(v18) = 0;
        v74 = v18;
        sub_119C854((int *)&v75, &v96);
        v76 = v93;
        sub_119C854((int *)&v77, (int *)&v94);
        v78 = v95;
        LOBYTE(v79) = PackManifest::getPackType(v8);
        HIBYTE(v79) = PackReport::hasWarnings(a5);
        sub_119C854(&v80, &v98);
        sub_119C854((int *)&v81, (int *)&v108);
        v83 = 0;
        v25 = operator new(0x34u);
        *(_DWORD *)v25 = v6;
        *((_DWORD *)v25 + 1) = v71;
        *((_DWORD *)v25 + 2) = v72;
        *((_BYTE *)v25 + 12) = a6;
        sub_119C854((int *)v25 + 4, &v73);
        *((_BYTE *)v25 + 20) = v74;
        *((_DWORD *)v25 + 6) = v75;
        v75 = (char *)&unk_28898CC;
        *((_BYTE *)v25 + 28) = v76;
        v26 = v77;
        v77 = &unk_28898CC;
        v27 = v78;
        *((_DWORD *)v25 + 8) = v26;
        *((_DWORD *)v25 + 9) = v27;
        *((_WORD *)v25 + 20) = v79;
        sub_119C854((int *)v25 + 11, &v80);
        HIDWORD(v28) = sub_F56AF0;
        LODWORD(v28) = sub_F56DC0;
        *((_DWORD *)v25 + 12) = v81;
        v81 = (char *)&unk_28898CC;
        v82 = v25;
        *(_QWORD *)&v83 = v28;
        PackMover::copyPack(v8, &v98, v19 ^ 1, v21 + 4, (int)&v82);
        if ( v83 )
          v83();
        v29 = v81 - 12;
        if ( (int *)(v81 - 12) != &dword_28898C0 )
          v61 = (unsigned int *)(v81 - 4);
              v62 = __ldrex(v61);
            while ( __strex(v62 - 1, v61) );
            v62 = (*v61)--;
          if ( v62 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v29);
        v30 = (void *)(v80 - 12);
        if ( (int *)(v80 - 12) != &dword_28898C0 )
          v63 = (unsigned int *)(v80 - 4);
              v64 = __ldrex(v63);
            while ( __strex(v64 - 1, v63) );
            v64 = (*v63)--;
          if ( v64 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v30);
        v31 = (char *)v77 - 12;
        if ( (int *)((char *)v77 - 12) != &dword_28898C0 )
          v65 = (unsigned int *)((char *)v77 - 4);
              v66 = __ldrex(v65);
            while ( __strex(v66 - 1, v65) );
            v66 = (*v65)--;
          if ( v66 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v31);
        v32 = v75 - 12;
        if ( (int *)(v75 - 12) != &dword_28898C0 )
          v67 = (unsigned int *)(v75 - 4);
              v68 = __ldrex(v67);
            while ( __strex(v68 - 1, v67) );
            v68 = (*v67)--;
          if ( v68 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v32);
        v33 = (void *)(v73 - 12);
        if ( (int *)(v73 - 12) != &dword_28898C0 )
          v69 = (unsigned int *)(v73 - 4);
              v70 = __ldrex(v69);
            while ( __strex(v70 - 1, v69) );
            v70 = (*v69)--;
          if ( v70 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v33);
      v42 = v94 - 12;
      if ( (int *)(v94 - 12) != &dword_28898C0 )
        v51 = (unsigned int *)(v94 - 4);
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v42);
      v43 = (void *)(v96 - 12);
      if ( (int *)(v96 - 12) != &dword_28898C0 )
        v53 = (unsigned int *)(v96 - 4);
            v54 = __ldrex(v53);
          while ( __strex(v54 - 1, v53) );
          v54 = (*v53)--;
        if ( v54 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v43);
      v44 = (void *)(v98 - 12);
      if ( (int *)(v98 - 12) != &dword_28898C0 )
        v55 = (unsigned int *)(v98 - 4);
            v56 = __ldrex(v55);
          while ( __strex(v56 - 1, v55) );
          v56 = (*v55)--;
        if ( v56 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v44);
      v45 = (void *)(v99 - 12);
      if ( (int *)(v99 - 12) != &dword_28898C0 )
        v57 = (unsigned int *)(v99 - 4);
            v58 = __ldrex(v57);
          while ( __strex(v58 - 1, v57) );
          v58 = (*v57)--;
        if ( v58 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v45);
      v46 = (void *)(v100 - 12);
      if ( (int *)(v100 - 12) != &dword_28898C0 )
        v59 = (unsigned int *)(v100 - 4);
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
          v60 = (*v59)--;
        if ( v60 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v46);
      v11 = (char *)v108;
      break;
    default:
  }
  v47 = v11 - 12;
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
    }
    else
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v47);
  result = (RakNet *)(_stack_chk_guard - v121);
  if ( _stack_chk_guard != v121 )
    _stack_chk_fail(result);
  return result;
}


RakNet *__fastcall ExternalContentManager::importContent(int a1, unsigned __int64 *a2, int *a3, char a4, char a5)
{
  int v5; // r7@1
  char v6; // r9@1
  int *v7; // r10@1
  unsigned __int64 *v8; // r5@1
  unsigned __int64 v9; // r4@2
  unsigned int *v10; // r0@3
  unsigned int v11; // r1@5
  signed int v12; // r4@8
  unsigned int *v13; // r0@13
  unsigned int v14; // r1@15
  int v15; // r6@18
  __int64 v16; // r0@19
  void *v17; // r0@21
  int v18; // r4@22
  unsigned int *v19; // r1@23
  unsigned int v20; // r0@25
  unsigned int *v21; // r6@29
  unsigned int v22; // r0@31
  int v23; // r0@34
  signed int v24; // r1@34
  int v25; // r0@39
  unsigned int *v26; // r0@40
  unsigned int v27; // r1@42
  int v28; // r0@44
  unsigned int *v29; // r0@45
  unsigned int v30; // r1@47
  void *v31; // r0@52
  unsigned int *v32; // r1@54
  unsigned int v33; // r0@56
  unsigned int *v34; // r4@60
  unsigned int v35; // r0@62
  int v36; // r0@67
  unsigned int *v37; // r0@68
  unsigned int v38; // r1@70
  unsigned int *v39; // r0@75
  unsigned int v40; // r1@77
  unsigned int *v41; // r0@81
  unsigned int v42; // r1@83
  _DWORD *v43; // r0@86
  int v44; // r4@86
  int v45; // r0@86
  int v46; // r0@86
  int v47; // r0@86
  int v48; // r0@86
  unsigned int *v49; // r0@87
  unsigned int v50; // r1@89
  unsigned int *v51; // r0@93
  unsigned int v52; // r1@95
  unsigned int *v53; // r0@99
  unsigned int v54; // r1@101
  void *v55; // r6@104
  void *v56; // r0@106
  char *v57; // r0@107
  unsigned int *v63; // r2@115
  signed int v64; // r1@117
  unsigned int *v65; // r2@119
  signed int v66; // r1@121
  char *v80; // r0@148
  void *v81; // r0@149
  int v82; // r4@150
  unsigned int *v83; // r1@151
  unsigned int v84; // r0@153
  unsigned int *v85; // r5@157
  unsigned int v86; // r0@159
  int v87; // r4@164
  unsigned int *v88; // r1@165
  unsigned int v89; // r0@167
  unsigned int *v90; // r5@171
  unsigned int v91; // r0@173
  int v92; // r4@178
  unsigned int *v93; // r1@179
  unsigned int v94; // r0@181
  unsigned int *v95; // r5@185
  unsigned int v96; // r0@187
  char *v97; // r0@192
  int v98; // r4@193
  unsigned int *v99; // r1@194
  unsigned int v100; // r0@196
  unsigned int *v101; // r5@200
  unsigned int v102; // r0@202
  int v103; // r4@207
  unsigned int *v104; // r1@208
  unsigned int v105; // r0@210
  unsigned int *v106; // r5@214
  unsigned int v107; // r0@216
  unsigned int *v108; // r1@220
  unsigned int v109; // r0@222
  unsigned int *v110; // r1@240
  unsigned int v111; // r0@242
  void *v112; // r0@253
  RakNet *result; // r0@254
  unsigned int *v114; // r2@256
  signed int v115; // r1@258
  unsigned int *v116; // r2@264
  signed int v117; // r1@266
  unsigned int *v118; // r2@268
  signed int v119; // r1@270
  unsigned int *v120; // r2@272
  signed int v121; // r1@274
  unsigned int *v122; // r2@276
  signed int v123; // r1@278
  unsigned int *v124; // r2@280
  signed int v125; // r1@282
  int v126; // [sp+8h] [bp-500h]@44
  int v127; // [sp+10h] [bp-4F8h]@86
  int v128; // [sp+14h] [bp-4F4h]@86
  int v129; // [sp+18h] [bp-4F0h]@92
  int v130; // [sp+1Ch] [bp-4ECh]@92
  int v131; // [sp+20h] [bp-4E8h]@98
  int v132; // [sp+24h] [bp-4E4h]@98
  char *v133; // [sp+28h] [bp-4E0h]@104
  int v134; // [sp+2Ch] [bp-4DCh]@104
  int v135; // [sp+30h] [bp-4D8h]@104
  __int16 v136; // [sp+34h] [bp-4D4h]@104
  void *v137; // [sp+38h] [bp-4D0h]@104
  void (*v138)(void); // [sp+40h] [bp-4C8h]@104
  char *(__fastcall *v139)(int **); // [sp+44h] [bp-4C4h]@104
  int v140; // [sp+48h] [bp-4C0h]@44
  int v141; // [sp+4Ch] [bp-4BCh]@44
  int v142; // [sp+50h] [bp-4B8h]@44
  int v143; // [sp+54h] [bp-4B4h]@74
  int v144; // [sp+58h] [bp-4B0h]@74
  int v145; // [sp+5Ch] [bp-4ACh]@80
  int v146; // [sp+60h] [bp-4A8h]@80
  int v147; // [sp+64h] [bp-4A4h]@86
  char *v148; // [sp+68h] [bp-4A0h]@86
  int v149; // [sp+6Ch] [bp-49Ch]@86
  int v150; // [sp+70h] [bp-498h]@86
  void (*v151)(void); // [sp+78h] [bp-490h]@86
  signed int (__fastcall *v152)(int **); // [sp+7Ch] [bp-48Ch]@86
  char *v153; // [sp+80h] [bp-488h]@44
  char *v154; // [sp+84h] [bp-484h]@44
  int v155; // [sp+88h] [bp-480h]@44
  int v156; // [sp+8Ch] [bp-47Ch]@44
  int v157; // [sp+90h] [bp-478h]@80
  int v158; // [sp+94h] [bp-474h]@44
  int v159; // [sp+98h] [bp-470h]@74
  int v160; // [sp+9Ch] [bp-46Ch]@39
  int v161; // [sp+A0h] [bp-468h]@39
  int v162; // [sp+A4h] [bp-464h]@67
  int v163; // [sp+A8h] [bp-460h]@67
  int v164; // [sp+ACh] [bp-45Ch]@7
  int v165; // [sp+B0h] [bp-458h]@7
  int v166; // [sp+B4h] [bp-454h]@7
  int v167; // [sp+B8h] [bp-450h]@12
  unsigned __int64 v168; // [sp+BCh] [bp-44Ch]@12
  int v169; // [sp+C4h] [bp-444h]@18
  __int16 v170; // [sp+C8h] [bp-440h]@18
  char v171; // [sp+D8h] [bp-430h]@7
  int v172; // [sp+DCh] [bp-42Ch]@7
  int v173; // [sp+4DCh] [bp-2Ch]@7
  RakNet *v174; // [sp+4E0h] [bp-28h]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v174 = _stack_chk_guard;
  if ( *(_BYTE *)(a1 + 28) )
  {
    v9 = *a2;
    if ( *a2 >> 32 )
    {
      v10 = (unsigned int *)(HIDWORD(v9) + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 + 1, v10) );
      }
      else
        ++*v10;
    }
    sub_119C854(&v167, a3);
    v168 = v9;
    if ( HIDWORD(v9) )
      v13 = (unsigned int *)(HIDWORD(v9) + 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 + 1, v13) );
        ++*v13;
    sub_119C854(&v169, &v167);
    LOBYTE(v170) = v6;
    HIBYTE(v170) = a5;
    v15 = *(_DWORD *)(v5 + 56);
    if ( v15 == *(_DWORD *)(v5 + 64) - 16 )
      std::deque<ExternalContentManager::ImportRequestData,std::allocator<ExternalContentManager::ImportRequestData>>::_M_push_back_aux<ExternalContentManager::ImportRequestData>(
        v5 + 32,
        (int)&v168);
    else
      v16 = (unsigned int)v168;
      *(_QWORD *)v15 = (unsigned int)v168;
      LODWORD(v16) = HIDWORD(v168);
      HIDWORD(v168) = HIDWORD(v16);
      *(_DWORD *)(v15 + 4) = v16;
      LODWORD(v168) = HIDWORD(v16);
      sub_119C854((int *)(v15 + 8), &v169);
      *(_WORD *)(v15 + 12) = v170;
      *(_DWORD *)(v5 + 56) += 16;
    v17 = (void *)(v169 - 12);
    if ( (int *)(v169 - 12) != &dword_28898C0 )
      v63 = (unsigned int *)(v169 - 4);
          v64 = __ldrex(v63);
        while ( __strex(v64 - 1, v63) );
        v64 = (*v63)--;
      if ( v64 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v17);
    v18 = HIDWORD(v168);
    if ( HIDWORD(v168) )
      v19 = (unsigned int *)(HIDWORD(v168) + 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 == 1 )
        v21 = (unsigned int *)(v18 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
        if ( &pthread_create )
        {
          __dmb();
          do
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
        }
        else
          v22 = (*v21)--;
        if ( v22 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
    v31 = (void *)(v167 - 12);
    if ( (int *)(v167 - 12) != &dword_28898C0 )
      v65 = (unsigned int *)(v167 - 4);
          v66 = __ldrex(v65);
        while ( __strex(v66 - 1, v65) );
        v66 = (*v65)--;
      if ( v66 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v31);
      v32 = (unsigned int *)(HIDWORD(v9) + 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 == 1 )
        LODWORD(v9) = HIDWORD(v9) + 8;
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v9) + 8))(HIDWORD(v9));
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
          v35 = (*v34)--;
        if ( v35 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v9) + 12))(HIDWORD(v9));
    goto LABEL_254;
  }
  *(_BYTE *)(a1 + 28) = 1;
  v164 = *a3;
  v165 = *(_DWORD *)(v164 - 12);
  Core::PathBuffer<Core::StackString<char,1024u>>::getEntryExtensionWithoutDot((int)&v171, (__int64 *)&v164);
  Util::toLower((void **)&v166, v173, (unsigned int)&v172);
  if ( sub_119C9E8((const void **)&v166, "mcworld") )
    v12 = 0;
    if ( !sub_119C9E8((const void **)&v166, "mcperf") )
      v12 = 1;
  else
    v12 = 1;
  v23 = sub_119C9E8((const void **)&v166, "mcaddon");
  v24 = 0;
  if ( !v23 )
    v24 = 1;
  if ( !(v24 | v12) )
    j__ZNSt12__shared_ptrISt10unique_ptrI12PackManifestSt14default_deleteIS1_EELN9__gnu_cxx12_Lock_policyE2EEC2ISaIS4_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v158);
    j__ZNSt12__shared_ptrI10PackReportLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v156);
    sub_119C854((int *)&v153, v7);
    v154 = v153;
    v153 = (char *)&unk_28898CC;
    v140 = v5;
    v155 = 2;
    v126 = TaskGroup::DISK;
    v141 = *(_DWORD *)v8;
    v28 = *((_DWORD *)v8 + 1);
    v142 = v28;
    if ( v28 )
      v29 = (unsigned int *)(v28 + 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 + 1, v29) );
        ++*v29;
    v143 = v158;
    v144 = v159;
    if ( v159 )
      v39 = (unsigned int *)(v159 + 4);
          v40 = __ldrex(v39);
        while ( __strex(v40 + 1, v39) );
        ++*v39;
    v145 = v156;
    v146 = v157;
    if ( v157 )
      v41 = (unsigned int *)(v157 + 4);
          v42 = __ldrex(v41);
        while ( __strex(v42 + 1, v41) );
        ++*v41;
    sub_119C854(&v147, v7);
    sub_119C854((int *)&v148, (int *)&v154);
    v149 = v155;
    v151 = 0;
    v43 = operator new(0x28u);
    v44 = (int)v43;
    *v43 = v140;
    v43[1] = v141;
    v45 = v142;
    v142 = 0;
    v141 = 0;
    *(_DWORD *)(v44 + 8) = v45;
    *(_DWORD *)(v44 + 12) = v143;
    v46 = v144;
    v144 = 0;
    v143 = 0;
    *(_DWORD *)(v44 + 16) = v46;
    *(_DWORD *)(v44 + 20) = v145;
    v47 = v146;
    v146 = 0;
    *(_DWORD *)(v44 + 24) = v47;
    v145 = 0;
    sub_119C854((int *)(v44 + 28), &v147);
    *(_DWORD *)(v44 + 32) = v148;
    v148 = (char *)&unk_28898CC;
    *(_DWORD *)(v44 + 36) = v149;
    v150 = v44;
    v151 = (void (*)(void))sub_F52F2C;
    v152 = sub_F52E04;
    v127 = *(_DWORD *)v8;
    v48 = *((_DWORD *)v8 + 1);
    v128 = v48;
    if ( v48 )
      v49 = (unsigned int *)(v48 + 4);
          v50 = __ldrex(v49);
        while ( __strex(v50 + 1, v49) );
        ++*v49;
    v129 = v158;
    v130 = v159;
      v51 = (unsigned int *)(v159 + 4);
          v52 = __ldrex(v51);
        while ( __strex(v52 + 1, v51) );
        ++*v51;
    v131 = v156;
    v132 = v157;
      v53 = (unsigned int *)(v157 + 4);
          v54 = __ldrex(v53);
        while ( __strex(v54 + 1, v53) );
        ++*v53;
    sub_119C854((int *)&v133, (int *)&v154);
    v134 = v155;
    sub_119C854(&v135, v7);
    LOBYTE(v136) = v6;
    HIBYTE(v136) = a5;
    v138 = 0;
    v55 = operator new(0x2Cu);
    *(_DWORD *)v55 = v5;
    *((_DWORD *)v55 + 1) = v127;
    *((_DWORD *)v55 + 2) = v128;
    *((_DWORD *)v55 + 3) = v129;
    *((_DWORD *)v55 + 4) = v130;
    *((_DWORD *)v55 + 5) = v131;
    *((_DWORD *)v55 + 6) = v132;
    *((_DWORD *)v55 + 7) = v133;
    v133 = (char *)&unk_28898CC;
    *((_DWORD *)v55 + 8) = v134;
    sub_119C854((int *)v55 + 9, &v135);
    *((_WORD *)v55 + 20) = v136;
    v137 = v55;
    v138 = (void (*)(void))sub_F55258;
    v139 = sub_F53404;
    TaskGroup::queue(v126, (int)&v150, (int)&v137, 1u, 0xFFFFFFFF);
    if ( v138 )
      v138();
    v56 = (void *)(v135 - 12);
    if ( (int *)(v135 - 12) != &dword_28898C0 )
      v116 = (unsigned int *)(v135 - 4);
          v117 = __ldrex(v116);
        while ( __strex(v117 - 1, v116) );
        v117 = (*v116)--;
      if ( v117 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v56);
    v57 = v133 - 12;
    if ( (int *)(v133 - 12) != &dword_28898C0 )
      v118 = (unsigned int *)(v133 - 4);
          v119 = __ldrex(v118);
        while ( __strex(v119 - 1, v118) );
        v119 = (*v118)--;
      if ( v119 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v57);
    if ( v151 )
      v151();
    v80 = v148 - 12;
    if ( (int *)(v148 - 12) != &dword_28898C0 )
      v120 = (unsigned int *)(v148 - 4);
          v121 = __ldrex(v120);
        while ( __strex(v121 - 1, v120) );
        v121 = (*v120)--;
      if ( v121 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v80);
    v81 = (void *)(v147 - 12);
    if ( (int *)(v147 - 12) != &dword_28898C0 )
      v122 = (unsigned int *)(v147 - 4);
          v123 = __ldrex(v122);
        while ( __strex(v123 - 1, v122) );
        v123 = (*v122)--;
      if ( v123 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v81);
    v82 = v146;
    if ( v146 )
      v83 = (unsigned int *)(v146 + 4);
          v84 = __ldrex(v83);
        while ( __strex(v84 - 1, v83) );
        v84 = (*v83)--;
      if ( v84 == 1 )
        v85 = (unsigned int *)(v82 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v82 + 8))(v82);
            v86 = __ldrex(v85);
          while ( __strex(v86 - 1, v85) );
          v86 = (*v85)--;
        if ( v86 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v82 + 12))(v82);
    v87 = v144;
    if ( v144 )
      v88 = (unsigned int *)(v144 + 4);
          v89 = __ldrex(v88);
        while ( __strex(v89 - 1, v88) );
        v89 = (*v88)--;
      if ( v89 == 1 )
        v90 = (unsigned int *)(v87 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v87 + 8))(v87);
            v91 = __ldrex(v90);
          while ( __strex(v91 - 1, v90) );
          v91 = (*v90)--;
        if ( v91 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v87 + 12))(v87);
    v92 = v142;
    if ( v142 )
      v93 = (unsigned int *)(v142 + 4);
          v94 = __ldrex(v93);
        while ( __strex(v94 - 1, v93) );
        v94 = (*v93)--;
      if ( v94 == 1 )
        v95 = (unsigned int *)(v92 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v92 + 8))(v92);
            v96 = __ldrex(v95);
          while ( __strex(v96 - 1, v95) );
          v96 = (*v95)--;
        if ( v96 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v92 + 12))(v92);
    v97 = v154 - 12;
    if ( (int *)(v154 - 12) != &dword_28898C0 )
      v124 = (unsigned int *)(v154 - 4);
          v125 = __ldrex(v124);
        while ( __strex(v125 - 1, v124) );
        v125 = (*v124)--;
      if ( v125 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v97);
    v98 = v157;
      v99 = (unsigned int *)(v157 + 4);
          v100 = __ldrex(v99);
        while ( __strex(v100 - 1, v99) );
        v100 = (*v99)--;
      if ( v100 == 1 )
        v101 = (unsigned int *)(v98 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v98 + 8))(v98);
            v102 = __ldrex(v101);
          while ( __strex(v102 - 1, v101) );
          v102 = (*v101)--;
        if ( v102 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v98 + 12))(v98);
    v103 = v159;
    if ( !v159 )
      goto LABEL_253;
    v104 = (unsigned int *)(v159 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 != 1 )
    v106 = (unsigned int *)(v103 + 8);
    (*(void (__fastcall **)(int))(*(_DWORD *)v103 + 8))(v103);
    if ( !&pthread_create )
      goto LABEL_250;
    __dmb();
    do
      v107 = __ldrex(v106);
    while ( __strex(v107 - 1, v106) );
LABEL_251:
    if ( v107 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v103 + 12))(v103);
    goto LABEL_253;
    v162 = *(_DWORD *)v8;
    v36 = *((_DWORD *)v8 + 1);
    v163 = v36;
    if ( v36 )
      v37 = (unsigned int *)(v36 + 4);
          v38 = __ldrex(v37);
        while ( __strex(v38 + 1, v37) );
        ++*v37;
    ExternalContentManager::_importMCAddon(v5, (int)&v162, v7);
    v103 = v163;
    if ( !v163 )
    v108 = (unsigned int *)(v163 + 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 != 1 )
    goto LABEL_251;
  if ( v12 == 1 )
    v160 = *(_DWORD *)v8;
    v25 = *((_DWORD *)v8 + 1);
    v161 = v25;
    if ( v25 )
      v26 = (unsigned int *)(v25 + 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 + 1, v26) );
        ++*v26;
    ExternalContentManager::_importMCWorld((int *)v5, (int)&v160, v7, v6, a5);
    v103 = v161;
    if ( !v161 )
    v110 = (unsigned int *)(v161 + 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 != 1 )
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v103 + 8))(v103);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      goto LABEL_251;
LABEL_250:
    v107 = (*v106)--;
  (*(void (__cdecl **)(_DWORD))(**(_DWORD **)v8 + 48))(*(_DWORD *)v8);
LABEL_253:
  v112 = (void *)(v166 - 12);
  if ( (int *)(v166 - 12) != &dword_28898C0 )
    v114 = (unsigned int *)(v166 - 4);
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v112);
LABEL_254:
  result = (RakNet *)(_stack_chk_guard - v174);
  if ( _stack_chk_guard != v174 )
    _stack_chk_fail(result);
  return result;
}
