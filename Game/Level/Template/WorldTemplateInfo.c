

signed int __fastcall WorldTemplateInfo::isVirtualCatalogItem(WorldTemplateInfo *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = PackManifest::getManifestOrigin(*((PackManifest **)this + 10));
  v2 = 0;
  if ( v1 == 3 )
    v2 = 1;
  return v2;
}


char *__fastcall WorldTemplateInfo::getDescription(WorldTemplateInfo *this)
{
  return (char *)this + 12;
}


char *__fastcall WorldTemplateInfo::getWorldName(WorldTemplateInfo *this)
{
  return (char *)this + 8;
}


char *__fastcall WorldTemplateInfo::getGameType(WorldTemplateInfo *this)
{
  return (char *)this + 28;
}


WorldTemplateInfo *__fastcall WorldTemplateInfo::~WorldTemplateInfo(WorldTemplateInfo *this)
{
  WorldTemplateInfo *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  int v10; // r1@5
  void *v11; // r0@5
  int v12; // r1@6
  void *v13; // r0@6
  int v14; // r1@7
  void *v15; // r0@7
  unsigned int *v17; // r2@9
  signed int v18; // r1@11
  unsigned int *v19; // r2@13
  signed int v20; // r1@15
  unsigned int *v21; // r2@17
  signed int v22; // r1@19
  unsigned int *v23; // r2@21
  signed int v24; // r1@23
  unsigned int *v25; // r2@25
  signed int v26; // r1@27
  unsigned int *v27; // r2@29
  signed int v28; // r1@31
  unsigned int *v29; // r2@33
  signed int v30; // r1@35

  v1 = this;
  v2 = *((_DWORD *)this + 8);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 7);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v4 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 6);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v6 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 5);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v8 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 4);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v10 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  v12 = *((_DWORD *)v1 + 3);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v12 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  v14 = *((_DWORD *)v1 + 2);
  v15 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v14 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
  return v1;
}


char *__fastcall WorldTemplateInfo::getAuthors(WorldTemplateInfo *this)
{
  return (char *)this + 16;
}


char *__fastcall WorldTemplateInfo::getVersion(WorldTemplateInfo *this)
{
  return (char *)this + 20;
}


char *__fastcall WorldTemplateInfo::getWorldPath(WorldTemplateInfo *this)
{
  return (char *)this + 24;
}


char *__fastcall WorldTemplateInfo::getWorldIconPath(WorldTemplateInfo *this)
{
  return (char *)this + 32;
}


signed int __fastcall WorldTemplateInfo::setWorldIconOverride(int a1, int *a2)
{
  int v2; // r4@1
  signed int result; // r0@1

  v2 = a1;
  EntityInteraction::setInteractText((int *)(a1 + 32), a2);
  result = 1;
  *(_BYTE *)(v2 + 37) = 1;
  return result;
}


signed int __fastcall WorldTemplateInfo::isPremium(WorldTemplateInfo *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = PackManifest::getPackCategory(*((PackManifest **)this + 10));
  v2 = 0;
  if ( v1 == 2 )
    v2 = 1;
  return v2;
}


int __fastcall WorldTemplateInfo::WorldTemplateInfo(int a1, int a2, char a3)
{
  int v3; // r5@1
  PackManifest *v4; // r7@1
  char v5; // r10@1
  PackManifest *v6; // r8@1
  const void **v7; // r6@1
  char *v8; // r0@1
  int *v9; // r0@1
  char *v10; // r0@1
  int *v11; // r11@1
  int v12; // r0@1
  signed int v13; // r4@1
  int v14; // r9@1
  const void **v15; // r5@1
  __int64 v16; // kr00_8@1
  void *v17; // r0@21
  void *v18; // r0@22
  unsigned int *v20; // r2@24
  signed int v21; // r1@26
  unsigned int *v22; // r2@28
  signed int v23; // r1@30
  int v24; // [sp+14h] [bp-44h]@1
  int v25; // [sp+18h] [bp-40h]@17
  int v26; // [sp+1Ch] [bp-3Ch]@17
  int v27; // [sp+20h] [bp-38h]@15
  int v28; // [sp+24h] [bp-34h]@15
  int v29; // [sp+28h] [bp-30h]@11
  int v30; // [sp+2Ch] [bp-2Ch]@11

  v3 = a1;
  *(_DWORD *)a1 = 6;
  v4 = (PackManifest *)(a1 + 12);
  v5 = a3;
  v6 = (PackManifest *)a2;
  PackManifest::getName((PackManifest *)(a1 + 8), a2);
  PackManifest::getDescription(v4, (int)v6);
  *(_DWORD *)(v3 + 16) = &unk_28898CC;
  v7 = (const void **)(v3 + 16);
  v8 = PackManifest::getIdentity(v6);
  v9 = (int *)SemVersion::asString((SemVersion *)(v8 + 16));
  sub_119C854((int *)(v3 + 20), v9);
  v10 = PackManifest::getLocation(v6);
  v11 = (int *)(v3 + 24);
  ResourceLocation::getFullPath((ResourceLocation *)(v3 + 24), (int)v10);
  v12 = WorldTemplatePackManifest::getGameType(v6);
  GameTypeConv::gameTypeToString((void **)(v3 + 28), v12);
  v24 = v3;
  v13 = 0;
  *(_DWORD *)(v3 + 32) = &unk_28898CC;
  v14 = v3 + 32;
  *(_BYTE *)(v14 + 4) = v5;
  *(_BYTE *)(v14 + 5) = 0;
  *(_DWORD *)(v14 + 8) = v6;
  v16 = *(_QWORD *)PackManifest::getMetaData(v6);
  v15 = (const void **)v16;
  if ( !*((_DWORD *)*v7 - 3) )
    v13 = 1;
  if ( (_DWORD)v16 != HIDWORD(v16) )
  {
    do
    {
      if ( !(v13 & 1) )
        sub_119C894(v7, ", ", 2u);
      sub_119C8A4(v7, v15);
      v13 = 0;
      ++v15;
      if ( !*((_DWORD *)*v7 - 3) )
        v13 = 1;
    }
    while ( (const void **)HIDWORD(v16) != v15 );
  }
  if ( v13 )
    sub_119CAD8((void **)v7, "pack.authors.none", (_BYTE *)0x11);
  LevelSummary::buildCustomIconPath((void **)&v30, v11);
  LevelSummary::buildWorldIconPath((void **)&v29, v11);
  if ( PackManifest::getManifestOrigin(v6) )
    if ( PackManifest::getManifestOrigin(v6) == 1 )
      if ( ZipUtils::exists(v11, (const char **)&LevelSummary::CUSTOM_ICON_FILENAME) == 1 )
      {
        EntityInteraction::setInteractText((int *)v14, &v30);
      }
      else if ( ZipUtils::exists(v11, (const char **)&LevelSummary::WORLD_ICON_FILENAME) == 1 )
        EntityInteraction::setInteractText((int *)v14, &v29);
  else
    v27 = v30;
    v28 = *(_DWORD *)(v30 - 12);
    if ( Core::FileSystem::fileExists((__int64 *)&v27) == 1 )
      EntityInteraction::setInteractText((int *)v14, &v30);
    else
      v25 = v29;
      v26 = *(_DWORD *)(v29 - 12);
      if ( Core::FileSystem::fileExists((__int64 *)&v25) == 1 )
  v17 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v29 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  v18 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v30 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  return v24;
}
