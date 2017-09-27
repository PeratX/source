

int __fastcall WorldTemplateManager::WorldTemplateManager(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r10@1
  int v7; // r8@1
  int v8; // r9@1
  DirectoryPackSource *v9; // r6@1
  char *v10; // r0@1
  _BYTE *v11; // r7@3
  unsigned int v12; // r2@3
  unsigned int v13; // r1@5
  unsigned int v14; // r4@5
  char *v15; // r5@11 OVERLAPPED
  int v16; // r6@13
  int v17; // r6@15 OVERLAPPED
  void *v18; // r0@18
  int v19; // r5@19
  DirectoryPackSource *v20; // r6@19
  char *v21; // r0@19
  _BYTE *v22; // r7@21
  unsigned int v23; // r2@21
  unsigned int v24; // r1@23
  unsigned int v25; // r4@23
  char *v26; // r5@29 OVERLAPPED
  int v27; // r6@31
  int v28; // r6@33 OVERLAPPED
  void *v29; // r0@36
  int v30; // r5@37
  DirectoryPackSource *v31; // r6@37
  char *v32; // r0@37
  _BYTE *v33; // r7@39
  unsigned int v34; // r2@39
  unsigned int v35; // r1@41
  unsigned int v36; // r4@41
  char *v37; // r5@47 OVERLAPPED
  int v38; // r6@49
  int v39; // r6@51 OVERLAPPED
  void *v40; // r0@54
  InPackagePackSource *v41; // r6@55
  char *v42; // r0@55
  _BYTE *v43; // r7@57
  unsigned int v44; // r2@57
  unsigned int v45; // r1@59
  unsigned int v46; // r4@59
  char *v47; // r5@65 OVERLAPPED
  int v48; // r6@67
  int v49; // r6@69 OVERLAPPED
  void *v50; // r6@72
  int v51; // r0@72
  void *v52; // r6@74
  _DWORD *v53; // r0@74
  __int64 v54; // r2@74
  int v55; // r0@76
  unsigned int *v57; // r2@81
  signed int v58; // r1@83
  unsigned int *v59; // r2@85
  signed int v60; // r1@87
  unsigned int *v61; // r2@89
  signed int v62; // r1@91
  int v63; // [sp+8h] [bp-50h]@37
  int v64; // [sp+Ch] [bp-4Ch]@19
  int v65; // [sp+10h] [bp-48h]@1
  void *ptr; // [sp+14h] [bp-44h]@1
  DirectoryPackSource **v67; // [sp+18h] [bp-40h]@1
  char *v68; // [sp+1Ch] [bp-3Ch]@1
  _DWORD *v69; // [sp+20h] [bp-38h]@74
  void (*v70)(void); // [sp+28h] [bp-30h]@74

  v6 = a1;
  v7 = a2;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  *(_DWORD *)(a1 + 8) = a4;
  *(_DWORD *)(a1 + 12) = a6;
  *(_DWORD *)(a1 + 16) = 0;
  v8 = a1 + 16;
  *(_BYTE *)(v8 + 20) = 0;
  *(_DWORD *)(v8 + 4) = 0;
  *(_DWORD *)(v8 + 8) = 0;
  *(_DWORD *)(v8 + 12) = 0;
  *(_DWORD *)(v8 + 16) = 0;
  ptr = 0;
  v67 = 0;
  v68 = 0;
  ExternalContentManager::getTemplateFolder((ExternalContentManager *)&v65);
  v9 = PackSourceFactory::createDirectoryPackSource(a6, &v65, 3, 4, 0);
  v10 = (char *)v67;
  if ( (char *)v67 == v68 )
  {
    v11 = ptr;
    v12 = ((char *)v67 - (_BYTE *)ptr) >> 2;
    if ( !v12 )
      v12 = 1;
    v13 = v12 + (((char *)v67 - (_BYTE *)ptr) >> 2);
    v14 = v12 + (((char *)v67 - (_BYTE *)ptr) >> 2);
    if ( 0 != v13 >> 30 )
      v14 = 0x3FFFFFFF;
    if ( v13 < v12 )
    if ( v14 )
    {
      if ( v14 >= 0x40000000 )
        sub_DA7414();
      v15 = (char *)operator new(4 * v14);
      v10 = (char *)v67;
      v11 = ptr;
    }
    else
      v15 = 0;
    *(_DWORD *)&v15[v10 - v11] = v9;
    v16 = (int)&v15[v10 - v11];
    if ( 0 != (v10 - v11) >> 2 )
      _aeabi_memmove4(v15, v11);
    v17 = v16 + 4;
    if ( v11 )
      operator delete(v11);
    *(_QWORD *)&ptr = *(_QWORD *)&v15;
    v68 = &v15[4 * v14];
  }
  else
    *v67 = v9;
    ++v67;
  v18 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v65 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j_j__ZdlPv_9(v18);
  v19 = *(_DWORD *)(v6 + 12);
  ResourcePackRepository::getPremiumPackPath((ResourcePackRepository *)&v64);
  v20 = PackSourceFactory::createDirectoryPackSource(v19, &v64, 3, 6, 0);
  v21 = (char *)v67;
    v22 = ptr;
    v23 = ((char *)v67 - (_BYTE *)ptr) >> 2;
    if ( !v23 )
      v23 = 1;
    v24 = v23 + (((char *)v67 - (_BYTE *)ptr) >> 2);
    v25 = v23 + (((char *)v67 - (_BYTE *)ptr) >> 2);
    if ( 0 != v24 >> 30 )
      v25 = 0x3FFFFFFF;
    if ( v24 < v23 )
    if ( v25 )
      if ( v25 >= 0x40000000 )
      v26 = (char *)operator new(4 * v25);
      v21 = (char *)v67;
      v22 = ptr;
      v26 = 0;
    *(_DWORD *)&v26[v21 - v22] = v20;
    v27 = (int)&v26[v21 - v22];
    if ( 0 != (v21 - v22) >> 2 )
      _aeabi_memmove4(v26, v22);
    v28 = v27 + 4;
    if ( v22 )
      operator delete(v22);
    *(_QWORD *)&ptr = *(_QWORD *)&v26;
    v68 = &v26[4 * v25];
    *v67 = v20;
  v29 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v64 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j_j__ZdlPv_9(v29);
  v30 = *(_DWORD *)(v6 + 12);
  ResourcePackRepository::getPremiumWorldTemplatePath((ResourcePackRepository *)&v63);
  v31 = PackSourceFactory::createDirectoryPackSource(v30, &v63, 3, 6, 0);
  v32 = (char *)v67;
    v33 = ptr;
    v34 = ((char *)v67 - (_BYTE *)ptr) >> 2;
    if ( !v34 )
      v34 = 1;
    v35 = v34 + (((char *)v67 - (_BYTE *)ptr) >> 2);
    v36 = v34 + (((char *)v67 - (_BYTE *)ptr) >> 2);
    if ( 0 != v35 >> 30 )
      v36 = 0x3FFFFFFF;
    if ( v35 < v34 )
    if ( v36 )
      if ( v36 >= 0x40000000 )
      v37 = (char *)operator new(4 * v36);
      v32 = (char *)v67;
      v33 = ptr;
      v37 = 0;
    *(_DWORD *)&v37[v32 - v33] = v31;
    v38 = (int)&v37[v32 - v33];
    if ( 0 != (v32 - v33) >> 2 )
      _aeabi_memmove4(v37, v33);
    v39 = v38 + 4;
    if ( v33 )
      operator delete(v33);
    *(_QWORD *)&ptr = *(_QWORD *)&v37;
    v68 = &v37[4 * v36];
    *v67 = v31;
  v40 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v63 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j_j__ZdlPv_9(v40);
  v41 = PackSourceFactory::createInPackagePackSource(*(_DWORD *)(v6 + 12), 3);
  v42 = (char *)v67;
    v43 = ptr;
    v44 = ((char *)v67 - (_BYTE *)ptr) >> 2;
    if ( !v44 )
      v44 = 1;
    v45 = v44 + (((char *)v67 - (_BYTE *)ptr) >> 2);
    v46 = v44 + (((char *)v67 - (_BYTE *)ptr) >> 2);
    if ( 0 != v45 >> 30 )
      v46 = 0x3FFFFFFF;
    if ( v45 < v44 )
    if ( v46 )
      if ( v46 >= 0x40000000 )
      v47 = (char *)operator new(4 * v46);
      v42 = (char *)v67;
      v43 = ptr;
      v47 = 0;
    *(_DWORD *)&v47[v42 - v43] = v41;
    v48 = (int)&v47[v42 - v43];
    if ( 0 != (v42 - v43) >> 2 )
      _aeabi_memmove4(v47, v43);
    v49 = v48 + 4;
    if ( v43 )
      operator delete(v43);
    *(_QWORD *)&ptr = *(_QWORD *)&v47;
    v68 = &v47[4 * v46];
    *v67 = v41;
  v50 = operator new(0x10u);
  CompositePackSource::CompositePackSource((int)v50, (int)&ptr);
  v51 = *(_DWORD *)v8;
  *(_DWORD *)v8 = v50;
  if ( v51 )
    (*(void (**)(void))(*(_DWORD *)v51 + 4))();
  v52 = operator new(0x54u);
  v70 = 0;
  v53 = operator new(4u);
  HIDWORD(v54) = sub_CA0E0C;
  *v53 = v6;
  LODWORD(v54) = sub_CA0E74;
  v69 = v53;
  *(_QWORD *)&v70 = v54;
  ContentCatalogPackSource::ContentCatalogPackSource((int)v52, a5, v7, 3, (int)&v69);
  if ( v70 )
    v70();
  v55 = *(_DWORD *)(v6 + 32);
  *(_DWORD *)(v6 + 32) = v52;
  if ( v55 )
    (*(void (**)(void))(*(_DWORD *)v55 + 4))();
  if ( ptr )
    operator delete(ptr);
  return v6;
}


void __fastcall WorldTemplateManager::populateWorldTemplates(WorldTemplateManager *this)
{
  WorldTemplateManager *v1; // r4@1
  __int64 v2; // kr00_8@1
  WorldTemplateInfo **v3; // r5@2
  WorldTemplateInfo *v4; // r0@4
  __int64 v5; // r2@6
  void *v6; // r6@6
  void *v7; // r5@7
  int v8; // r5@11
  void (__fastcall *v9)(int, _DWORD **); // r6@11
  _DWORD *v10; // r0@11
  __int64 v11; // r2@13
  void *v12; // r5@13
  void *v13; // r7@14
  void *v14; // [sp+4h] [bp-64h]@13
  int v15; // [sp+8h] [bp-60h]@15
  void *v16; // [sp+Ch] [bp-5Ch]@13
  int v17; // [sp+10h] [bp-58h]@15
  int v18; // [sp+1Ch] [bp-4Ch]@16
  _DWORD *v19; // [sp+20h] [bp-48h]@11
  void (*v20)(void); // [sp+28h] [bp-40h]@11
  void (__fastcall *v21)(WorldTemplateManager ***, Pack *); // [sp+2Ch] [bp-3Ch]@11
  void *ptr; // [sp+30h] [bp-38h]@6
  int v23; // [sp+34h] [bp-34h]@8
  void *v24; // [sp+38h] [bp-30h]@6
  int v25; // [sp+3Ch] [bp-2Ch]@8
  int v26; // [sp+48h] [bp-20h]@9
  char v27; // [sp+4Ch] [bp-1Ch]@7

  v1 = this;
  v2 = *(_QWORD *)((char *)this + 20);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = (WorldTemplateInfo **)v2;
    do
    {
      if ( *v3 )
      {
        v4 = WorldTemplateInfo::~WorldTemplateInfo(*v3);
        operator delete((void *)v4);
      }
      *v3 = 0;
      ++v3;
    }
    while ( (WorldTemplateInfo **)HIDWORD(v2) != v3 );
  }
  *((_DWORD *)v1 + 6) = v2;
  v5 = *(_QWORD *)((char *)v1 + 4);
  (*(void (__fastcall **)(void **))(**((_DWORD **)v1 + 4) + 20))(&ptr);
  v6 = v24;
  if ( v24 )
      v7 = *(void **)v6;
      __gnu_cxx::new_allocator<std::pair<PackIdVersion const,PackReport>>::destroy<std::pair<PackIdVersion const,PackReport>>(
        (int)&v27,
        (int)v6 + 8);
      operator delete(v6);
      v6 = v7;
    while ( v7 );
  _aeabi_memclr4(ptr, 4 * v23);
  v24 = 0;
  v25 = 0;
  if ( ptr && &v26 != ptr )
    operator delete(ptr);
  v8 = *((_DWORD *)v1 + 4);
  v9 = *(void (__fastcall **)(int, _DWORD **))(*(_DWORD *)v8 + 12);
  v10 = operator new(4u);
  *v10 = v1;
  v19 = v10;
  v20 = (void (*)(void))sub_CA0EF0;
  v21 = sub_CA0EE8;
  v9(v8, &v19);
  if ( v20 )
    v20();
  v11 = *(_QWORD *)((char *)v1 + 4);
  (*(void (__fastcall **)(void **))(**((_DWORD **)v1 + 8) + 20))(&v14);
  v12 = v16;
  if ( v16 )
      v13 = *(void **)v12;
        (int)v12 + 8);
      operator delete(v12);
      v12 = v13;
    while ( v13 );
  _aeabi_memclr4(v14, 4 * v15);
  v16 = 0;
  v17 = 0;
  if ( v14 )
    if ( &v18 != v14 )
      operator delete(v14);
}


int __fastcall WorldTemplateManager::foundNewWorldTemplates(WorldTemplateManager *this)
{
  int v1; // r1@1

  v1 = *((_BYTE *)this + 36);
  *((_BYTE *)this + 36) = 0;
  return v1;
}


signed int __fastcall WorldTemplateManager::getWorldTemplateSize(WorldTemplateManager *this)
{
  return (signed int)((*(_QWORD *)((char *)this + 20) >> 32) - *(_QWORD *)((char *)this + 20)) >> 2;
}


int __fastcall WorldTemplateManager::getWorldTemplateAtIndex(WorldTemplateManager *this, int a2)
{
  __int64 v2; // kr00_8@2
  int result; // r0@3

  if ( a2 < 0 || (v2 = *(_QWORD *)((char *)this + 20), (HIDWORD(v2) - (signed int)v2) >> 2 <= a2) )
    result = 0;
  else
    result = *(_DWORD *)(v2 + 4 * a2);
  return result;
}


WorldTemplateInfo *__fastcall WorldTemplateManager::findInstalledWorldTemplateByPackId(int a1, unsigned __int64 *a2)
{
  WorldTemplateInfo **v2; // r6@1
  WorldTemplateInfo **v3; // r9@1
  unsigned __int64 *v4; // r10@1
  WorldTemplateInfo *v5; // r8@1
  int v6; // r5@4
  int v7; // r7@4
  PackManifest *v8; // r0@6
  char *v9; // r0@6
  WorldTemplateInfo *v10; // t1@10

  v3 = (WorldTemplateInfo **)(*(_QWORD *)(a1 + 20) >> 32);
  v2 = (WorldTemplateInfo **)*(_QWORD *)(a1 + 20);
  v4 = a2;
  v5 = 0;
  while ( v2 != v3 )
  {
    v7 = *v4 >> 32;
    v6 = *v4;
    if ( v6 == v7 )
    {
LABEL_2:
      ++v2;
    }
    else
      while ( 1 )
      {
        if ( !WorldTemplateInfo::isVirtualCatalogItem(*v2) )
        {
          v8 = (PackManifest *)WorldTemplateInfo::getPackManifest(*v2);
          v9 = PackManifest::getIdentity(v8);
          if ( *(_QWORD *)v6 == *(_QWORD *)v9 && *(_QWORD *)(v6 + 8) == *((_QWORD *)v9 + 1) )
            break;
        }
        v6 += 48;
        if ( v7 == v6 )
          goto LABEL_2;
      }
      v10 = *v2;
      v5 = v10;
  }
  return v5;
}


WorldTemplateManager *__fastcall WorldTemplateManager::~WorldTemplateManager(WorldTemplateManager *this)
{
  WorldTemplateManager *v1; // r4@1
  int v2; // r0@1
  WorldTemplateInfo **v3; // r5@3
  WorldTemplateInfo **v4; // r7@3
  WorldTemplateInfo *v5; // r0@5
  int v6; // r0@10

  v1 = this;
  v2 = *((_DWORD *)this + 8);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 8) = 0;
  v4 = (WorldTemplateInfo **)(*(_QWORD *)((char *)v1 + 20) >> 32);
  v3 = (WorldTemplateInfo **)*(_QWORD *)((char *)v1 + 20);
  if ( v3 != v4 )
  {
    do
    {
      if ( *v3 )
      {
        v5 = WorldTemplateInfo::~WorldTemplateInfo(*v3);
        operator delete((void *)v5);
      }
      *v3 = 0;
      ++v3;
    }
    while ( v4 != v3 );
    v3 = (WorldTemplateInfo **)*((_DWORD *)v1 + 5);
  }
  if ( v3 )
    operator delete(v3);
  v6 = *((_DWORD *)v1 + 4);
  if ( v6 )
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
  *((_DWORD *)v1 + 4) = 0;
  return v1;
}


_BOOL4 __fastcall WorldTemplateManager::_isValidWorld(WorldTemplateManager *this, int a2)
{
  return a2 >= 0 && (signed int)((*(_QWORD *)((char *)this + 20) >> 32) - *(_QWORD *)((char *)this + 20)) >> 2 > a2;
}


void __fastcall WorldTemplateManager::_onDiscoverWorldTemplate(WorldTemplateManager *this, Pack *a2)
{
  WorldTemplateManager *v2; // r9@1
  PackManifest *v3; // r11@1
  int v4; // r6@2
  char *v5; // r0@2
  char *v6; // r7@2
  int v7; // r1@2
  int v8; // r2@2
  int v9; // r3@2
  Entitlement *v10; // r0@2
  char v11; // r10@2
  void *v12; // r0@2
  void *v13; // r0@3
  void *v14; // r0@4
  WorldTemplateInfo **v15; // r4@6
  WorldTemplateInfo **v16; // r6@6
  PackManifest *v17; // r0@7
  char *v18; // r7@7
  char *v19; // r0@7
  WorldTemplateInfo *v20; // r7@10
  char *v21; // r0@10
  void *v22; // r0@10
  __int64 v23; // r0@11
  WorldTemplateInfo *v24; // r6@13
  __int64 v25; // r0@13
  WorldTemplateInfo *v26; // r7@15
  __int64 v27; // r0@15
  WorldTemplateInfo *v28; // r0@18
  WorldTemplateInfo *v29; // r0@22
  WorldTemplateInfo *v30; // r0@25
  WorldTemplateInfo *v31; // r4@26
  char *v32; // r0@26
  void *v33; // r0@26
  unsigned int *v34; // r2@27
  signed int v35; // r1@29
  unsigned int *v36; // r2@31
  signed int v37; // r1@33
  unsigned int *v38; // r2@35
  signed int v39; // r1@37
  unsigned int *v40; // r2@39
  signed int v41; // r1@41
  unsigned int *v42; // r2@55
  signed int v43; // r1@57
  WorldTemplateInfo *v44; // [sp+4h] [bp-6Ch]@13
  WorldTemplateInfo *v45; // [sp+8h] [bp-68h]@15
  int v46; // [sp+Ch] [bp-64h]@10
  WorldTemplateInfo *v47; // [sp+10h] [bp-60h]@10
  int v48; // [sp+14h] [bp-5Ch]@26
  int v49; // [sp+18h] [bp-58h]@2
  int v50; // [sp+1Ch] [bp-54h]@2
  int v51; // [sp+20h] [bp-50h]@2
  int v52; // [sp+24h] [bp-4Ch]@2
  int v53; // [sp+28h] [bp-48h]@2
  int v54; // [sp+30h] [bp-40h]@4
  int v55; // [sp+34h] [bp-3Ch]@3
  int v56; // [sp+38h] [bp-38h]@2
  char v57; // [sp+40h] [bp-30h]@2

  v2 = this;
  v3 = (PackManifest *)Pack::getManifest(a2);
  if ( PackManifest::getPackCategory(v3) == 2 )
  {
    v4 = *(_DWORD *)v2;
    v5 = PackManifest::getIdentity(v3);
    v6 = v5;
    v7 = *((_DWORD *)v5 + 1);
    v8 = *((_DWORD *)v5 + 2);
    v9 = *((_DWORD *)v5 + 3);
    v49 = *(_DWORD *)v5;
    v50 = v7;
    v51 = v8;
    v52 = v9;
    SemVersion::SemVersion((int)&v53, (int)(v5 + 16));
    v57 = v6[40];
    v10 = (Entitlement *)EntitlementManager::getEntitlement(v4, (int)&v49);
    v11 = Entitlement::isOwned(v10);
    v12 = (void *)(v56 - 12);
    if ( (int *)(v56 - 12) != &dword_28898C0 )
    {
      v36 = (unsigned int *)(v56 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
      }
      else
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j_j__ZdlPv_9(v12);
    }
    v13 = (void *)(v55 - 12);
    if ( (int *)(v55 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v55 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j_j__ZdlPv_9(v13);
    v14 = (void *)(v54 - 12);
    if ( (int *)(v54 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v54 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j_j__ZdlPv_9(v14);
    if ( PackManifest::getManifestOrigin(v3) == 3 )
      v16 = (WorldTemplateInfo **)(*(_QWORD *)((char *)v2 + 20) >> 32);
      v15 = (WorldTemplateInfo **)*(_QWORD *)((char *)v2 + 20);
      if ( v15 == v16 )
LABEL_10:
        v20 = (WorldTemplateInfo *)operator new(0x2Cu);
        WorldTemplateInfo::WorldTemplateInfo((int)v20, (int)v3, v11 ^ 1);
        v47 = v20;
        v21 = PackManifest::getPackIconLocation(v3);
        ResourceLocation::getFullPath((ResourceLocation *)&v46, (int)v21);
        WorldTemplateInfo::setWorldIconOverride((int)v20, &v46);
        v22 = (void *)(v46 - 12);
        if ( (int *)(v46 - 12) != &dword_28898C0 )
        {
          v42 = (unsigned int *)(v46 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v43 = __ldrex(v42);
            while ( __strex(v43 - 1, v42) );
          }
          else
            v43 = (*v42)--;
          if ( v43 <= 0 )
            j_j_j_j_j__ZdlPv_9(v22);
        }
        v23 = *((_QWORD *)v2 + 3);
        if ( (_DWORD)v23 == HIDWORD(v23) )
          std::vector<std::unique_ptr<WorldTemplateInfo,std::default_delete<WorldTemplateInfo>>,std::allocator<std::unique_ptr<WorldTemplateInfo,std::default_delete<WorldTemplateInfo>>>>::_M_emplace_back_aux<std::unique_ptr<WorldTemplateInfo,std::default_delete<WorldTemplateInfo>>>(
            (WorldTemplateManager *)((char *)v2 + 20),
            (int *)&v47);
          if ( v47 )
            v30 = WorldTemplateInfo::~WorldTemplateInfo(v47);
            operator delete((void *)v30);
        else
          HIDWORD(v23) = v47;
          v47 = 0;
          *(_DWORD *)v23 = HIDWORD(v23);
          *((_DWORD *)v2 + 6) = v23 + 4;
        while ( 1 )
          v17 = (PackManifest *)WorldTemplateInfo::getPackManifest(*v15);
          v18 = PackManifest::getIdentity(v17);
          v19 = PackManifest::getIdentity(v3);
          if ( *(_QWORD *)v19 == *(_QWORD *)v18 && *((_QWORD *)v19 + 1) == *((_QWORD *)v18 + 1) )
            break;
          ++v15;
          if ( v16 == v15 )
            goto LABEL_10;
        v31 = *v15;
        v32 = PackManifest::getPackIconLocation(v3);
        ResourceLocation::getFullPath((ResourceLocation *)&v48, (int)v32);
        WorldTemplateInfo::setWorldIconOverride((int)v31, &v48);
        v33 = (void *)(v48 - 12);
        if ( (int *)(v48 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v48 - 4);
              v35 = __ldrex(v34);
            while ( __strex(v35 - 1, v34) );
            v35 = (*v34)--;
          if ( v35 <= 0 )
            j_j_j_j_j__ZdlPv_9(v33);
    else
      v26 = (WorldTemplateInfo *)operator new(0x2Cu);
      WorldTemplateInfo::WorldTemplateInfo((int)v26, (int)v3, v11 ^ 1);
      v45 = v26;
      v27 = *((_QWORD *)v2 + 3);
      if ( (_DWORD)v27 == HIDWORD(v27) )
        std::vector<std::unique_ptr<WorldTemplateInfo,std::default_delete<WorldTemplateInfo>>,std::allocator<std::unique_ptr<WorldTemplateInfo,std::default_delete<WorldTemplateInfo>>>>::_M_emplace_back_aux<std::unique_ptr<WorldTemplateInfo,std::default_delete<WorldTemplateInfo>>>(
          (WorldTemplateManager *)((char *)v2 + 20),
          (int *)&v45);
        if ( v45 )
          v29 = WorldTemplateInfo::~WorldTemplateInfo(v45);
          operator delete((void *)v29);
        v45 = 0;
        *(_DWORD *)v27 = v26;
        *((_DWORD *)v2 + 6) = v27 + 4;
      v45 = 0;
  }
  else
    v24 = (WorldTemplateInfo *)operator new(0x2Cu);
    WorldTemplateInfo::WorldTemplateInfo((int)v24, (int)v3, 0);
    v44 = v24;
    v25 = *((_QWORD *)v2 + 3);
    if ( (_DWORD)v25 == HIDWORD(v25) )
      std::vector<std::unique_ptr<WorldTemplateInfo,std::default_delete<WorldTemplateInfo>>,std::allocator<std::unique_ptr<WorldTemplateInfo,std::default_delete<WorldTemplateInfo>>>>::_M_emplace_back_aux<std::unique_ptr<WorldTemplateInfo,std::default_delete<WorldTemplateInfo>>>(
        (WorldTemplateManager *)((char *)v2 + 20),
        (int *)&v44);
      if ( v44 )
        v28 = WorldTemplateInfo::~WorldTemplateInfo(v44);
        operator delete((void *)v28);
      v44 = 0;
      *(_DWORD *)v25 = v24;
      *((_DWORD *)v2 + 6) = v25 + 4;
    v44 = 0;
}


void __fastcall WorldTemplateManager::_onDiscoverWorldTemplate(WorldTemplateManager *this, Pack *a2)
{
  WorldTemplateManager::_onDiscoverWorldTemplate(this, a2);
}


int __fastcall WorldTemplateManager::getWorldTemplateAtIndex(WorldTemplateManager *this, int a2)
{
  __int64 v2; // kr00_8@2
  int result; // r0@3

  if ( a2 < 0 || (v2 = *(_QWORD *)((char *)this + 20), (HIDWORD(v2) - (signed int)v2) >> 2 <= a2) )
    result = 0;
  else
    result = *(_DWORD *)(v2 + 4 * a2);
  return result;
}


int __fastcall WorldTemplateManager::deleteWorldTemplate(WorldTemplateManager *this, const PackIdVersion *a2)
{
  WorldTemplateManager *v2; // r4@1
  const PackIdVersion *v3; // r5@1
  int result; // r0@1
  int i; // r6@1
  __int64 v6; // kr00_8@1
  PackManifest *v7; // r0@4
  char *v8; // r0@4
  int v9; // r5@5
  int v10; // r7@5
  char *v11; // r0@5
  int v12; // r0@5
  int v13; // r5@7
  int v14; // r1@8
  WorldTemplateInfo *v15; // r0@8
  WorldTemplateInfo *v16; // r0@9
  _DWORD *v17; // r5@13
  WorldTemplateInfo *v18; // r0@13
  WorldTemplateInfo *v19; // r0@14

  v2 = this;
  v3 = a2;
  v6 = *(_QWORD *)((char *)this + 20);
  result = *(_QWORD *)((char *)this + 20) >> 32;
  for ( i = v6; i != result; i += 4 )
  {
    v7 = (PackManifest *)WorldTemplateInfo::getPackManifest(*(WorldTemplateInfo **)i);
    v8 = PackManifest::getIdentity(v7);
    if ( PackIdVersion::operator==((int)v8, (int)v3) == 1 )
    {
      v9 = *((_DWORD *)v2 + 3);
      v10 = i + 4;
      v11 = WorldTemplateInfo::getWorldPath(*(WorldTemplateInfo **)i);
      PackSourceFactory::removeFromDirectoryPackSource(v9, (const void **)v11);
      v12 = *((_DWORD *)v2 + 6);
      if ( i + 4 == v12 )
      {
        v12 = i + 4;
      }
      else if ( v12 - v10 >= 1 )
        v13 = ((v12 - v10) >> 2) + 1;
        do
        {
          v14 = *(_DWORD *)(i + 4);
          *(_DWORD *)(i + 4) = 0;
          v15 = *(WorldTemplateInfo **)i;
          *(_DWORD *)i = v14;
          if ( v15 )
          {
            v16 = WorldTemplateInfo::~WorldTemplateInfo(v15);
            operator delete((void *)v16);
          }
          --v13;
          i += 4;
        }
        while ( v13 > 1 );
        v12 = *((_DWORD *)v2 + 6);
      v17 = (_DWORD *)(v12 - 4);
      *((_DWORD *)v2 + 6) = v12 - 4;
      v18 = *(WorldTemplateInfo **)(v12 - 4);
      if ( v18 )
        v19 = WorldTemplateInfo::~WorldTemplateInfo(v18);
        operator delete((void *)v19);
      result = 0;
      *v17 = 0;
      return result;
    }
    result = *((_DWORD *)v2 + 6);
  }
  return result;
}


void __fastcall WorldTemplateManager::populateWorldTemplates(WorldTemplateManager *this)
{
  WorldTemplateManager::populateWorldTemplates(this);
}


signed int __fastcall WorldTemplateManager::isWorldTemplateInstalled(WorldTemplateManager *this, const PackIdVersion *a2)
{
  WorldTemplateInfo **v2; // r5@1 OVERLAPPED
  WorldTemplateInfo **v3; // r6@1 OVERLAPPED
  const PackIdVersion *v4; // r4@1
  char *v5; // r8@2
  PackManifest *v6; // r0@4
  char *v7; // r0@4
  signed int result; // r0@7

  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 20);
  v4 = a2;
  if ( v2 == v3 )
  {
LABEL_7:
    result = 0;
  }
  else
    v5 = (char *)a2 + 8;
    while ( 1 )
    {
      if ( !WorldTemplateInfo::isVirtualCatalogItem(*v2) )
      {
        v6 = (PackManifest *)WorldTemplateInfo::getPackManifest(*v2);
        v7 = PackManifest::getIdentity(v6);
        if ( *(_QWORD *)v4 == *(_QWORD *)v7 && *(_QWORD *)v5 == *((_QWORD *)v7 + 1) )
          break;
      }
      ++v2;
      if ( v3 == v2 )
        goto LABEL_7;
    }
    result = 1;
  return result;
}
