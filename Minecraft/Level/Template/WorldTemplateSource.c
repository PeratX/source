

void __fastcall WorldTemplateSource::~WorldTemplateSource(WorldTemplateSource *this)
{
  WorldTemplateSource::~WorldTemplateSource(this);
}


WorldTemplateSource *__fastcall WorldTemplateSource::~WorldTemplateSource(WorldTemplateSource *this)
{
  WorldTemplateSource *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E5018;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    operator delete(v2);
  return v1;
}


void *__fastcall WorldTemplateSource::generateItems(WorldTemplateSource *this, int a2)
{
  WorldTemplateSource *v2; // r11@1
  int v3; // r10@1
  void *result; // r0@1
  signed int v5; // r7@1
  int v6; // r9@2
  WorldTemplateInfo *v7; // r5@3
  PackManifest *v8; // r0@4
  __int64 v9; // r0@4
  void *v10; // r6@5
  int *v11; // r0@5
  PackManifest *v12; // r0@5
  int *v13; // r0@5
  int *v14; // r0@5
  PackManifest *v15; // r0@5
  int v16; // r8@5
  void *v17; // r4@5
  int v18; // r0@5
  WorldTemplatePackManifest *v19; // r0@7
  int *v20; // r0@7
  PackManifest *v21; // r0@8
  int *v22; // r0@9
  __int64 v23; // r0@10
  void *v24; // [sp+0h] [bp-28h]@10

  v2 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v3 = a2;
  *((_DWORD *)this + 2) = 0;
  result = (void *)WorldTemplateManager::getWorldTemplateSize(*(WorldTemplateManager **)(a2 + 24));
  v5 = (signed int)result;
  if ( (signed int)result >= 1 )
  {
    v6 = 0;
    do
    {
      v7 = (WorldTemplateInfo *)WorldTemplateManager::getWorldTemplateAtIndex(*(WorldTemplateManager **)(v3 + 24), v6);
      if ( WorldTemplateInfo::isPremiumLocked(v7)
        || (v8 = (PackManifest *)WorldTemplateInfo::getPackManifest(v7),
            v9 = PackManifest::getPackSize(v8),
            (result = (void *)(v9 | HIDWORD(v9))) != 0) )
      {
        v10 = operator new(0x58u);
        WorldTemplateItem::WorldTemplateItem((int)v10, v3);
        *((_DWORD *)v10 + 8) = 2;
        *((_DWORD *)v10 + 9) = 0;
        v11 = (int *)WorldTemplateInfo::getWorldName(v7);
        EntityInteraction::setInteractText((int *)v10 + 4, v11);
        v12 = (PackManifest *)WorldTemplateInfo::getPackManifest(v7);
        v13 = (int *)PackManifest::getLastModifiedDate(v12);
        EntityInteraction::setInteractText((int *)v10 + 20, v13);
        v14 = (int *)WorldTemplateInfo::getDescription(v7);
        EntityInteraction::setInteractText((int *)v10 + 5, v14);
        v15 = (PackManifest *)WorldTemplateInfo::getPackManifest(v7);
        *((_QWORD *)v10 + 3) = PackManifest::getPackSize(v15);
        v16 = WorldTemplateInfo::getPackManifest(v7);
        v17 = operator new(0xB0u);
        PackManifest::PackManifest((int)v17, v16);
        v18 = *((_DWORD *)v10 + 15);
        *((_DWORD *)v10 + 15) = v17;
        if ( v18 )
          (*(void (__cdecl **)(int))(*(_DWORD *)v18 + 4))(v18);
        v19 = (WorldTemplatePackManifest *)WorldTemplateInfo::getPackManifest(v7);
        *((_DWORD *)v10 + 21) = WorldTemplatePackManifest::getGameType(v19);
        v20 = (int *)WorldTemplateInfo::getWorldIconPath(v7);
        EntityInteraction::setInteractText((int *)v10 + 16, v20);
        if ( *(_DWORD *)(*((_DWORD *)v10 + 16) - 12) )
        {
          v21 = (PackManifest *)WorldTemplateInfo::getPackManifest(v7);
          if ( PackManifest::getManifestOrigin(v21) == 1 )
          {
            v22 = (int *)WorldTemplateInfo::getWorldPath(v7);
            EntityInteraction::setInteractText((int *)v10 + 17, v22);
          }
        }
        v24 = v10;
        v23 = *(_QWORD *)((char *)v2 + 4);
        if ( (_DWORD)v23 == HIDWORD(v23) )
          std::vector<std::unique_ptr<ContentItem,std::default_delete<ContentItem>>,std::allocator<std::unique_ptr<ContentItem,std::default_delete<ContentItem>>>>::_M_emplace_back_aux<std::unique_ptr<ContentItem,std::default_delete<ContentItem>>>(
            v2,
            (int *)&v24);
          result = v24;
          if ( v24 )
            result = (void *)(*(int (**)(void))(*(_DWORD *)v24 + 4))();
        else
          v24 = 0;
          *(_DWORD *)v23 = v10;
          result = (void *)(v23 + 4);
          *((_DWORD *)v2 + 1) = result;
        v24 = 0;
      }
      ++v6;
    }
    while ( v6 < v5 );
  }
  return result;
}


void __fastcall WorldTemplateSource::~WorldTemplateSource(WorldTemplateSource *this)
{
  WorldTemplateSource *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E5018;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    operator delete(v2);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall WorldTemplateSource::WorldTemplateSource(int result, int a2)
{
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_QWORD *)(result + 16) = 5LL;
  *(_DWORD *)result = &off_26E5098;
  *(_DWORD *)(result + 24) = a2;
  return result;
}


void __fastcall WorldTemplateSource::load(WorldTemplateSource *this)
{
  j_j_j__ZN20WorldTemplateManager22populateWorldTemplatesEv_0(*((WorldTemplateManager **)this + 6));
}


void __fastcall WorldTemplateSource::deleteContent(int a1, unsigned __int64 *a2)
{
  int v2; // r8@1
  int v3; // r11@1
  int i; // r4@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // r6@11
  char *v8; // r0@11
  WorldTemplateManager *v9; // r9@16
  char *v10; // r0@16
  void *v11; // r0@16
  int v12; // [sp+4h] [bp-6Ch]@14
  int v13; // [sp+8h] [bp-68h]@14
  char v14; // [sp+Ch] [bp-64h]@14
  void (__fastcall *v15)(char *, char *, signed int); // [sp+14h] [bp-5Ch]@14
  int v16; // [sp+20h] [bp-50h]@12
  int v17; // [sp+24h] [bp-4Ch]@12
  char v18; // [sp+28h] [bp-48h]@12
  void (__fastcall *v19)(char *, char *, signed int); // [sp+30h] [bp-40h]@12
  int v20; // [sp+3Ch] [bp-34h]@11
  int v21; // [sp+40h] [bp-30h]@11
  int v22; // [sp+44h] [bp-2Ch]@3

  v3 = *a2 >> 32;
  v2 = *a2;
  for ( i = a1; v2 != v3; v2 += 4 )
  {
    v7 = *(_DWORD *)v2;
    v8 = PackManifest::getLocation(*(PackManifest **)(*(_DWORD *)v2 + 60));
    ResourceLocation::getFullPath((ResourceLocation *)&v22, (int)v8);
    v20 = v22;
    v21 = *(_DWORD *)(v22 - 12);
    if ( Core::FileSystem::directoryExists((__int64 *)&v20) == 1 )
    {
      v16 = v22;
      v17 = *(_DWORD *)(v22 - 12);
      Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v18, (__int64 *)&v16);
      if ( v19 )
        v19(&v18, &v18, 3);
    }
    else
      v12 = v22;
      v13 = *(_DWORD *)(v22 - 12);
      Core::FileSystem::deleteFile((int)&v14, (__int64 *)&v12);
      if ( v15 )
        v15(&v14, &v14, 3);
    v9 = *(WorldTemplateManager **)(i + 24);
    v10 = PackManifest::getIdentity(*(PackManifest **)(v7 + 60));
    WorldTemplateManager::deleteWorldTemplate(v9, (const PackIdVersion *)v10);
    v11 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v5 = (unsigned int *)(v22 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
  }
}


void __fastcall WorldTemplateSource::load(WorldTemplateSource *this)
{
  WorldTemplateSource::load(this);
}


void __fastcall WorldTemplateSource::deleteContent(int a1, unsigned __int64 *a2)
{
  WorldTemplateSource::deleteContent(a1, a2);
}
