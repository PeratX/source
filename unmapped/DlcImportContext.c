

void __fastcall DlcImportContext::notifyMultiImportStarted(int a1, int *a2)
{
  int v2; // r5@1
  _DWORD *v3; // r4@1
  _DWORD *v4; // r6@1
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  int *v7; // r0@13
  int v8; // [sp+4h] [bp-4Ch]@1
  int v9; // [sp+8h] [bp-48h]@1
  char v10; // [sp+Ch] [bp-44h]@1
  void (*v11)(void); // [sp+14h] [bp-3Ch]@1
  char v12; // [sp+1Ch] [bp-34h]@1
  __int64 v13; // [sp+20h] [bp-30h]@1
  int v14; // [sp+28h] [bp-28h]@1

  v2 = a1;
  v13 = 0LL;
  v14 = 0;
  v8 = *a2;
  v9 = *(_DWORD *)(v8 - 12);
  Core::FileSystem::getDirectoryFiles((int)&v10, (int)&v13, (__int64 *)&v8);
  v12 |= 2u;
  v3 = (_DWORD *)HIDWORD(v13);
  v4 = (_DWORD *)v13;
  *(_DWORD *)(v2 + 72) += (HIDWORD(v13) - (signed int)v13) >> 2;
  if ( v11 )
  {
    v11();
    v3 = (_DWORD *)HIDWORD(v13);
    v4 = (_DWORD *)v13;
  }
  if ( v4 != v3 )
    do
    {
      v7 = (int *)(*v4 - 12);
      if ( v7 != &dword_28898C0 )
      {
        v5 = (unsigned int *)(*v4 - 4);
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
          j_j_j_j__ZdlPv_9(v7);
      }
      ++v4;
    }
    while ( v4 != v3 );
    v3 = (_DWORD *)v13;
  if ( v3 )
    operator delete(v3);
}


signed int __fastcall DlcImportContext::shouldUnzipToDestination(DlcImportContext *this, const PackManifest *a2)
{
  PackManifest *v2; // r4@1
  DlcImportContext *v3; // r5@1
  signed int v4; // r4@2
  char *v5; // r0@4
  __int64 v6; // r3@4
  int v7; // r5@4
  void (__fastcall *v8)(int, int *, _QWORD **, _DWORD); // r6@4
  _QWORD *v9; // r0@4
  void *v10; // r0@6
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  _QWORD *v14; // [sp+4h] [bp-34h]@4
  void (*v15)(void); // [sp+Ch] [bp-2Ch]@4
  char *(__fastcall *v16)(_BYTE ***, int *); // [sp+10h] [bp-28h]@4
  int v17; // [sp+18h] [bp-20h]@4
  unsigned __int8 v18; // [sp+1Fh] [bp-19h]@4
  int v19; // [sp+20h] [bp-18h]@4

  v2 = a2;
  v3 = this;
  if ( PackManifest::getPackType(a2) == 3 )
  {
    v4 = 0;
  }
  else if ( *((_BYTE *)v3 + 36) )
    v5 = PackManifest::getLocation(v2);
    HIDWORD(v6) = &v19;
    PackAccessStrategyFactory::createForZip((PackAccessStrategyFactory *)&v19, (const ResourceLocation *)v5, 0);
    v18 = 0;
    v7 = v19;
    v8 = *(void (__fastcall **)(int, int *, _QWORD **, _DWORD))(*(_DWORD *)v19 + 52);
    sub_21E94B4((void **)&v17, (const char *)&unk_257BC67);
    v9 = operator new(8u);
    LODWORD(v6) = &v18;
    *v9 = v6;
    v14 = v9;
    v15 = (void (*)(void))sub_135ADEC;
    v16 = sub_135ACD8;
    v8(v7, &v17, &v14, 0);
    if ( v15 )
      v15();
    v10 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
    {
      v12 = (unsigned int *)(v17 - 4);
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
    v4 = v18;
    if ( v18 )
      v4 = 1;
    if ( v19 )
      (*(void (**)(void))(*(_DWORD *)v19 + 4))();
  else
    v4 = 1;
  return v4;
}


void __fastcall DlcImportContext::~DlcImportContext(DlcImportContext *this)
{
  DlcImportContext *v1; // r0@1

  v1 = DlcImportContext::~DlcImportContext(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall DlcImportContext::generatePackFolderName(DlcImportContext *this, const PackManifest *a2, PackManifest *a3)
{
  PackManifest *v3; // r5@1
  DlcImportContext *v4; // r4@1
  int v5; // r6@1
  const void **v6; // r0@2
  void *v7; // r0@2
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+4h] [bp-1Ch]@2

  v3 = a3;
  v4 = this;
  v5 = PackManifest::getPackType(a3);
  PackManifest::getIdentity(v3);
  if ( v5 == 3 )
  {
    mce::UUID::asString((mce::UUID *)&v10);
    v6 = sub_21E7408((const void **)&v10, ".mctemplate", 0xBu);
    *(_DWORD *)v4 = *v6;
    *v6 = &unk_28898CC;
    v7 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v10 - 4);
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
  else
    mce::UUID::asString(v4);
}


RakNet *__fastcall DlcImportContext::getBehaviorPacksPath(DlcImportContext *this, int a2)
{
  int v2; // r1@1

  v2 = *(_DWORD *)(a2 + 20);
  return ResourcePackRepository::getPremiumBehaviorPackPath(this);
}


void __fastcall DlcImportContext::prepareForImport(DlcImportContext *this)
{
  DlcImportContext *v1; // r4@1
  void *v2; // r0@1
  int i; // r5@2
  int v4; // r8@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  unsigned int *v9; // r2@12
  signed int v10; // r1@14
  unsigned int *v11; // r2@28
  signed int v12; // r1@30
  unsigned int *v13; // r2@32
  signed int v14; // r1@34
  unsigned int *v15; // r2@36
  signed int v16; // r1@38
  int v17; // r0@52
  ResourcePack *v18; // r7@54
  ResourcePackRepository *v19; // r6@55
  PackManifest *v20; // r0@55
  char *v21; // r0@55
  ResourcePackRepository *v22; // r6@55
  PackManifest *v23; // r0@55
  char *v24; // r0@55
  int v25; // r7@56
  WorldTemplateInfo *v26; // r9@56
  void *v27; // r0@56
  void *v28; // r0@57
  void *v29; // r0@58
  WorldTemplateManager *v30; // r6@62
  PackManifest *v31; // r0@62
  char *v32; // r0@62
  void *v33; // r0@63
  void *v34; // r0@64
  void *v35; // r0@65
  void *v36; // r0@67
  void *v37; // r0@68
  void *v38; // r0@69
  unsigned int *v39; // r2@71
  signed int v40; // r1@73
  unsigned int *v41; // r2@79
  signed int v42; // r1@81
  unsigned int *v43; // r2@83
  signed int v44; // r1@85
  unsigned int *v45; // r2@87
  signed int v46; // r1@89
  int v47; // [sp+14h] [bp-D4h]@60
  int v48; // [sp+18h] [bp-D0h]@60
  char v49; // [sp+1Ch] [bp-CCh]@60
  void (*v50)(void); // [sp+24h] [bp-C4h]@60
  int v51; // [sp+30h] [bp-B8h]@56
  int v52; // [sp+34h] [bp-B4h]@56
  int v53; // [sp+38h] [bp-B0h]@56
  int v54; // [sp+3Ch] [bp-ACh]@56
  int v55; // [sp+40h] [bp-A8h]@56
  int v56; // [sp+48h] [bp-A0h]@36
  int v57; // [sp+4Ch] [bp-9Ch]@32
  int v58; // [sp+50h] [bp-98h]@28
  char v59; // [sp+58h] [bp-90h]@56
  int v60; // [sp+60h] [bp-88h]@56
  void *ptr; // [sp+64h] [bp-84h]@56
  int v62; // [sp+68h] [bp-80h]@56
  int v63; // [sp+6Ch] [bp-7Ch]@56
  char v64; // [sp+70h] [bp-78h]@52
  int v65; // [sp+74h] [bp-74h]@56
  int v66; // [sp+78h] [bp-70h]@56
  int v67; // [sp+7Ch] [bp-6Ch]@56
  int v68; // [sp+80h] [bp-68h]@56
  int v69; // [sp+88h] [bp-60h]@12
  int v70; // [sp+8Ch] [bp-5Ch]@8
  int v71; // [sp+90h] [bp-58h]@4
  char v72; // [sp+98h] [bp-50h]@56
  int v73; // [sp+A4h] [bp-44h]@1
  char v74; // [sp+A8h] [bp-40h]@1
  int v75; // [sp+B0h] [bp-38h]@69
  int v76; // [sp+B4h] [bp-34h]@68
  int v77; // [sp+B8h] [bp-30h]@67

  v1 = this;
  SemVersion::SemVersion((SemVersion *)&v74);
  sub_21E94B4((void **)&v73, "*");
  SemVersion::fromString((const void **)&v73, (int)&v74);
  v2 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
  {
    v39 = (unsigned int *)(v73 - 4);
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
      j_j_j_j__ZdlPv_9(v2);
  }
  v4 = *((_QWORD *)v1 + 7) >> 32;
  for ( i = *((_QWORD *)v1 + 7); i != v4; i += 48 )
    PackIdVersion::PackIdVersion((int)&v64, i, (int)&v74, 0);
    v17 = *(_BYTE *)(i + 40);
    if ( v17 == 3 )
      v25 = *((_DWORD *)v1 + 12);
      v51 = *(_DWORD *)&v64;
      v52 = v65;
      v53 = v66;
      v54 = v67;
      SemVersion::SemVersion((int)&v55, (int)&v68);
      v59 = v72;
      ptr = 0;
      v62 = 0;
      v63 = 0;
      std::vector<PackIdVersion,std::allocator<PackIdVersion>>::_M_range_initialize<PackIdVersion const*>(
        (char **)&ptr,
        (int)&v51,
        (int)&v60);
      v26 = WorldTemplateManager::findInstalledWorldTemplateByPackId(v25, (unsigned __int64 *)&ptr);
      std::vector<PackIdVersion,std::allocator<PackIdVersion>>::~vector((unsigned __int64 *)&ptr);
      v27 = (void *)(v58 - 12);
      if ( (int *)(v58 - 12) != &dword_28898C0 )
      {
        v11 = (unsigned int *)(v58 - 4);
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
          j_j_j_j__ZdlPv_9(v27);
      }
      v28 = (void *)(v57 - 12);
      if ( (int *)(v57 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v57 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
      v29 = (void *)(v56 - 12);
      if ( (int *)(v56 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v56 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j__ZdlPv_9(v29);
      if ( v26 )
        v47 = *(_DWORD *)WorldTemplateInfo::getWorldPath(v26);
        v48 = *(_DWORD *)(v47 - 12);
        Core::FileSystem::deleteFile((int)&v49, (__int64 *)&v47);
        if ( v50 )
          v50();
        v30 = (WorldTemplateManager *)*((_DWORD *)v1 + 12);
        v31 = (PackManifest *)WorldTemplateInfo::getPackManifest(v26);
        v32 = PackManifest::getIdentity(v31);
        WorldTemplateManager::deleteWorldTemplate(v30, (const PackIdVersion *)v32);
    else if ( v17 == 1 )
      v18 = (ResourcePack *)ResourcePackRepository::getResourcePackForPackId(
                              *((ResourcePackRepository **)v1 + 10),
                              (const PackIdVersion *)&v64);
      if ( v18 )
        ResourcePackManager::removePack(*((ResourcePackManager **)v1 + 11), v18, 1);
        v19 = (ResourcePackRepository *)*((_DWORD *)v1 + 10);
        v20 = (PackManifest *)ResourcePack::getManifest(v18);
        v21 = PackManifest::getLocation(v20);
        ResourcePackRepository::deletePack(v19, (const ResourceLocation *)v21);
        v22 = (ResourcePackRepository *)*((_DWORD *)v1 + 10);
        v23 = (PackManifest *)ResourcePack::getManifest(v18);
        v24 = PackManifest::getLocation(v23);
        ResourcePackRepository::removePack(v22, (const ResourceLocation *)v24);
    v33 = (void *)(v71 - 12);
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v5 = (unsigned int *)(v71 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      else
        v6 = (*v5)--;
      if ( v6 <= 0 )
        j_j_j_j__ZdlPv_9(v33);
    v34 = (void *)(v70 - 12);
    if ( (int *)(v70 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v70 - 4);
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j__ZdlPv_9(v34);
    v35 = (void *)(v69 - 12);
    if ( (int *)(v69 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v69 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v35);
  v36 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v77 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  v37 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v76 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  v38 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v75 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
}


RakNet *__fastcall DlcImportContext::getResourcePacksPath(DlcImportContext *this, int a2)
{
  int v2; // r1@1

  v2 = *(_DWORD *)(a2 + 20);
  return ResourcePackRepository::getPremiumResourcePackPath(this);
}


int __fastcall DlcImportContext::notifyImportSucceeded(int a1, int a2, int a3, PackManifest *a4, int a5)
{
  int v5; // r6@1
  int v6; // r4@1
  PackManifest *v7; // r5@1
  int v8; // r7@1
  void *v9; // r0@1
  int result; // r0@2
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  int v13; // [sp+4h] [bp-3Ch]@3
  int v14; // [sp+8h] [bp-38h]@3
  char v15; // [sp+Ch] [bp-34h]@3
  void (*v16)(void); // [sp+14h] [bp-2Ch]@3
  int v17; // [sp+20h] [bp-20h]@1

  v5 = a2;
  v6 = a1;
  v7 = a4;
  v8 = *(_DWORD *)(a1 + 24);
  PackReport::serializeEventErrorMessages((PackReport *)&v17, a5);
  MinecraftEventing::fireEventPackImportedCompleted(v8, v5, v7, 1, (int)&v17);
  v9 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v17 - 4);
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
  result = *(_DWORD *)(v6 + 76) + 1;
  *(_DWORD *)(v6 + 76) = result;
  if ( result >= *(_DWORD *)(v6 + 72) )
    v13 = *(_DWORD *)(v6 + 68);
    v14 = *(_DWORD *)(v13 - 12);
    Core::FileSystem::deleteFile((int)&v15, (__int64 *)&v13);
    if ( v16 )
      v16();
    result = *(_DWORD *)(v6 + 88);
    if ( result )
      result = (*(int (__fastcall **)(int, signed int))(v6 + 92))(v6 + 80, 1);
  return result;
}


void __fastcall DlcImportContext::notifyImportStarted(DlcImportContext *this, const PackManifest *a2)
{
  j_j_j__ZN17MinecraftEventing26fireEventPackImportStartedERK12PackManifest(*((MinecraftEventing **)this + 6), a2);
}


int __fastcall DlcImportContext::DlcImportContext(int a1, int a2, int a3, int a4, int a5, int a6, int *a7, unsigned __int64 *a8, int *a9, int a10, int a11)
{
  int v11; // r4@1
  int v12; // r9@1
  int v13; // r6@1
  int v14; // r7@1
  char *v15; // r0@1
  void (__fastcall *v16)(int, int, signed int); // r3@2
  unsigned int *v18; // r2@5
  signed int v19; // r1@7
  char *v20; // [sp+Ch] [bp-34h]@1

  v11 = a1;
  v12 = a4;
  v13 = a3;
  v14 = a2;
  v20 = (char *)&unk_28898CC;
  DefaultImportContext::DefaultImportContext(a1, a2, a5, a6, (int *)&v20);
  v15 = v20 - 12;
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v20 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  }
  *(_DWORD *)v11 = &off_26E6F30;
  *(_DWORD *)(v11 + 40) = v14;
  *(_DWORD *)(v11 + 44) = v13;
  *(_DWORD *)(v11 + 48) = v12;
  sub_21E8AF4((int *)(v11 + 52), a7);
  std::vector<PackIdVersion,std::allocator<PackIdVersion>>::vector(v11 + 56, a8);
  sub_21E8AF4((int *)(v11 + 68), a9);
  *(_DWORD *)(v11 + 88) = 0;
  *(_DWORD *)(v11 + 72) = 0;
  *(_DWORD *)(v11 + 76) = 0;
  v16 = *(void (__fastcall **)(int, int, signed int))(a11 + 8);
  if ( v16 )
    v16(v11 + 80, a11, 2);
    *(_DWORD *)(v11 + 92) = *(_DWORD *)(a11 + 12);
    *(_DWORD *)(v11 + 88) = *(_DWORD *)(a11 + 8);
  return v11;
}


void __fastcall DlcImportContext::generatePackFolderName(DlcImportContext *this, const PackManifest *a2, PackManifest *a3)
{
  DlcImportContext::generatePackFolderName(this, a2, a3);
}


void __fastcall DlcImportContext::~DlcImportContext(DlcImportContext *this)
{
  DlcImportContext::~DlcImportContext(this);
}


void __fastcall DlcImportContext::notifyMultiImportStarted(int a1, int *a2)
{
  DlcImportContext::notifyMultiImportStarted(a1, a2);
}


DlcImportContext *__fastcall DlcImportContext::~DlcImportContext(DlcImportContext *this)
{
  DlcImportContext *v1; // r4@1
  void (*v2)(void); // r3@1
  int v3; // r1@3
  void *v4; // r0@3
  int v5; // r1@4
  void *v6; // r0@4
  unsigned int *v8; // r12@6
  signed int v9; // r1@8
  unsigned int *v10; // r12@10
  signed int v11; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26E6F30;
  v2 = (void (*)(void))*((_DWORD *)this + 22);
  if ( v2 )
    v2();
  v3 = *((_DWORD *)v1 + 17);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v3 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  std::vector<PackIdVersion,std::allocator<PackIdVersion>>::~vector((unsigned __int64 *)v1 + 7);
  v5 = *((_DWORD *)v1 + 13);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v5 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  DefaultImportContext::~DefaultImportContext(v1);
  return v1;
}


void __fastcall DlcImportContext::notifyImportStarted(DlcImportContext *this, const PackManifest *a2)
{
  DlcImportContext::notifyImportStarted(this, a2);
}


int __fastcall DlcImportContext::notifyImportFailed(int a1, int a2, PackManifest *a3, int a4, int *a5)
{
  PackManifest *v5; // r6@1
  PackReport *v6; // r5@1
  bool v7; // zf@1
  int v8; // r8@1
  int v9; // r7@4
  void *v10; // r0@4
  int v11; // r0@5
  int v12; // r1@5
  int *v13; // r4@11
  __int64 v14; // kr00_8@11
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  void *v17; // r0@21
  int result; // r0@23
  unsigned int *v19; // r2@29
  signed int v20; // r1@31
  int v21; // [sp+4h] [bp-8Ch]@24
  int v22; // [sp+8h] [bp-88h]@24
  char v23; // [sp+Ch] [bp-84h]@24
  void (*v24)(void); // [sp+14h] [bp-7Ch]@24
  int v25; // [sp+20h] [bp-70h]@13
  int v26; // [sp+24h] [bp-6Ch]@8
  int v27; // [sp+28h] [bp-68h]@8
  char v28; // [sp+2Ch] [bp-64h]@8
  void (*v29)(void); // [sp+34h] [bp-5Ch]@8
  int v30; // [sp+40h] [bp-50h]@6
  int v31; // [sp+44h] [bp-4Ch]@6
  char v32; // [sp+48h] [bp-48h]@6
  void (*v33)(void); // [sp+50h] [bp-40h]@6
  int v34; // [sp+5Ch] [bp-34h]@5
  int v35; // [sp+60h] [bp-30h]@5
  int v36; // [sp+64h] [bp-2Ch]@4

  v5 = a3;
  v6 = (PackReport *)a4;
  v7 = a3 == 0;
  v8 = a1;
  if ( a3 )
    v7 = a4 == 0;
  if ( !v7 )
  {
    v9 = *(_DWORD *)(a1 + 24);
    PackReport::serializeEventErrorMessages((PackReport *)&v36, a4);
    MinecraftEventing::fireEventPackImportedCompleted(v9, 0, v5, 0, (int)&v36);
    v10 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
    {
      v19 = (unsigned int *)(v36 - 4);
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
        j_j_j_j__ZdlPv_9(v10);
    }
  }
  v34 = *a5;
  v35 = *(_DWORD *)(v34 - 12);
  v11 = Core::FileSystem::directoryExists((__int64 *)&v34);
  v12 = *a5;
  if ( v11 == 1 )
    v30 = *a5;
    v31 = *(_DWORD *)(v12 - 12);
    Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v32, (__int64 *)&v30);
    if ( v33 )
      v33();
  else
    v26 = *a5;
    v27 = *(_DWORD *)(v12 - 12);
    Core::FileSystem::deleteFile((int)&v28, (__int64 *)&v26);
    if ( v29 )
      v29();
  if ( v6 )
    v14 = *(_QWORD *)PackReport::getErrors(v6);
    v13 = (int *)v14;
    if ( (_DWORD)v14 != HIDWORD(v14) )
      do
        PackError::getEventErrorMessage((PackError *)&v25, *v13);
        v17 = (void *)(v25 - 12);
        if ( (int *)(v25 - 12) != &dword_28898C0 )
        {
          v15 = (unsigned int *)(v25 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
          }
          else
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
        }
        v13 += 2;
      while ( v13 != (int *)HIDWORD(v14) );
  result = *(_DWORD *)(v8 + 76) + 1;
  *(_DWORD *)(v8 + 76) = result;
  if ( result >= *(_DWORD *)(v8 + 72) )
    v21 = *(_DWORD *)(v8 + 68);
    v22 = *(_DWORD *)(v21 - 12);
    Core::FileSystem::deleteFile((int)&v23, (__int64 *)&v21);
    if ( v24 )
      v24();
    result = *(_DWORD *)(v8 + 88);
    if ( result )
      result = (*(int (__fastcall **)(int, _DWORD))(v8 + 92))(v8 + 80, 0);
  return result;
}


void __fastcall DlcImportContext::prepareForImport(DlcImportContext *this)
{
  DlcImportContext::prepareForImport(this);
}
