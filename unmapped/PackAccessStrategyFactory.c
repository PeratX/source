

void __fastcall PackAccessStrategyFactory::createForZip(PackAccessStrategyFactory *this, const ResourceLocation *a2, int a3)
{
  PackAccessStrategyFactory::createForZip(this, a2, a3);
}


void *__fastcall PackAccessStrategyFactory::createForEncryptedZip(PackAccessStrategyFactory *this, const ResourceLocation *a2, const IContentKeyProvider *a3)
{
  PackAccessStrategyFactory *v3; // r4@1
  const IContentKeyProvider *v4; // r7@1
  const ResourceLocation *v5; // r5@1
  void *v6; // r6@1
  void *v7; // r0@2
  int v8; // r1@4
  int v9; // r0@4
  int v10; // r4@4
  unsigned int *v11; // r1@5
  unsigned int v12; // r0@7
  unsigned int *v13; // r5@11
  unsigned int v14; // r0@13
  void *result; // r0@18
  int v16; // [sp+0h] [bp-28h]@4
  char v17; // [sp+4h] [bp-24h]@4
  int v18; // [sp+8h] [bp-20h]@4
  void *v19; // [sp+Ch] [bp-1Ch]@1
  char v20; // [sp+10h] [bp-18h]@4

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = operator new(8u);
  EncryptedZipTransforms::EncryptedZipTransforms((int)v6, (int)v4);
  v19 = v6;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v7 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v7 = &ServiceLocator<AppPlatform>::mDefaultService;
  v8 = *((_DWORD *)v5 + 1);
  v9 = (*(int (**)(void))(**(_DWORD **)v7 + 316))();
  std::__shared_ptr<MemoryMappedFileAccess,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<MemoryMappedFileAccess>,IFileAccess &,std::unique_ptr<EncryptedZipTransforms,std::default_delete<std::default_delete>>>(
    (int)&v17,
    (int)&v20,
    v9,
    &v19);
  std::make_unique<ZipPackAccessStrategyOwningFileAcccess,std::shared_ptr<MemoryMappedFileAccess> &,ResourceLocation const&>(
    &v16,
    (int *)v5);
  *(_DWORD *)v3 = v16;
  v10 = v18;
  v16 = 0;
  if ( v18 )
  {
    v11 = (unsigned int *)(v18 + 4);
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
  }
  result = v19;
  if ( v19 )
    result = (void *)(*(int (__cdecl **)(void *))(*(_DWORD *)v19 + 4))(v19);
  return result;
}


int __fastcall PackAccessStrategyFactory::createForDirectory(PackAccessStrategyFactory *this, const ResourceLocation *a2, bool a3)
{
  PackAccessStrategyFactory *v3; // r4@1
  bool v4; // r6@1
  const ResourceLocation *v5; // r7@1
  DirectoryPackAccessStrategy *v6; // r5@1
  int result; // r0@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (DirectoryPackAccessStrategy *)operator new(0x38u);
  result = DirectoryPackAccessStrategy::DirectoryPackAccessStrategy(v6, v5, v4);
  *(_DWORD *)v3 = v6;
  return result;
}


int __fastcall PackAccessStrategyFactory::createForDirectoryWithEncryptedBlob(PackAccessStrategyFactory *this, const ResourceLocation *a2, const ResourceLocation *a3, const mce::UUID *a4, const IContentKeyProvider *a5)
{
  PackAccessStrategyFactory *v5; // r8@1
  const mce::UUID *v6; // r6@1
  const ResourceLocation *v7; // r7@1
  const ResourceLocation *v8; // r4@1
  DirectoryPackWithEncryptionAccessStrategy *v9; // r5@1
  int result; // r0@1

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = (DirectoryPackWithEncryptionAccessStrategy *)operator new(0x58u);
  result = DirectoryPackWithEncryptionAccessStrategy::DirectoryPackWithEncryptionAccessStrategy(v9, v8, v7, v6, a5);
  *(_DWORD *)v5 = v9;
  return result;
}


RakNet *__fastcall PackAccessStrategyFactory::create(PackAccessStrategyFactory *this, ResourceLocation *a2, const IContentKeyProvider *a3, PackReport *a4, int a5)
{
  PackAccessStrategyFactory *v5; // r7@1
  PackReport *v6; // r10@1
  ResourceLocation *v7; // r8@1
  int v8; // r1@1
  signed int v9; // r11@1
  int v10; // r0@2
  DirectoryPackWithEncryptionAccessStrategy *v11; // r9@3
  __int64 v12; // r1@4
  int v13; // r3@4
  __int64 v14; // r2@5
  int v15; // r6@5
  _DWORD *v16; // r0@6
  char *v17; // r1@10
  signed int v18; // r4@11
  char *v19; // r0@13
  _DWORD *v20; // r0@15
  int v21; // r4@19
  char *v22; // r0@19
  void *v23; // r0@20
  int v24; // r4@23
  DirectoryPackAccessStrategy *v25; // r0@23
  bool v26; // r2@23
  char *v27; // r0@26
  PackAccessStrategyFactory *v28; // r11@28
  void *v29; // r4@28
  void *v30; // r7@28
  unsigned int *v31; // r2@30
  signed int v32; // r1@32
  int *v33; // r0@38
  void *v34; // r4@43
  void *v35; // r7@43
  unsigned int *v36; // r2@45
  signed int v37; // r1@47
  int *v38; // r0@53
  void *v39; // r0@60
  RakNet *result; // r0@63
  unsigned int *v41; // r2@68
  signed int v42; // r1@70
  unsigned int *v43; // r2@76
  signed int v44; // r1@78
  unsigned int *v45; // r2@80
  signed int v46; // r1@82
  unsigned int *v47; // r2@84
  signed int v48; // r1@86
  void *v49; // r4@88
  void *v50; // r6@88
  unsigned int *v51; // r2@90
  signed int v52; // r1@92
  int *v53; // r0@98
  void *v54; // r4@103
  void *v55; // r6@103
  unsigned int *v56; // r2@105
  signed int v57; // r1@107
  int *v58; // r0@113
  __int64 v59; // r4@119
  unsigned int *v60; // r2@121
  signed int v61; // r1@123
  int *v62; // r0@129
  unsigned __int64 v63; // r4@134
  unsigned int *v64; // r2@136
  signed int v65; // r1@138
  int *v66; // r0@144
  unsigned int *v67; // r2@161
  signed int v68; // r1@163
  IContentKeyProvider *v69; // [sp+4h] [bp-964h]@1
  void *v70; // [sp+8h] [bp-960h]@28
  void *v71; // [sp+Ch] [bp-95Ch]@28
  int v72; // [sp+10h] [bp-958h]@28
  void **v73; // [sp+14h] [bp-954h]@28
  __int64 v74; // [sp+18h] [bp-950h]@28
  unsigned __int64 v75; // [sp+2Ch] [bp-93Ch]@119
  int v76; // [sp+34h] [bp-934h]@119
  void **v77; // [sp+38h] [bp-930h]@119
  __int64 v78; // [sp+3Ch] [bp-92Ch]@119
  void *v79; // [sp+50h] [bp-918h]@88
  void *v80; // [sp+54h] [bp-914h]@88
  int v81; // [sp+58h] [bp-910h]@88
  void **v82; // [sp+5Ch] [bp-90Ch]@88
  __int64 v83; // [sp+60h] [bp-908h]@88
  int v84; // [sp+74h] [bp-8F4h]@67
  char *v85; // [sp+78h] [bp-8F0h]@15
  int v86; // [sp+7Ch] [bp-8ECh]@15
  int v87; // [sp+80h] [bp-8E8h]@15
  int v88; // [sp+84h] [bp-8E4h]@15
  int v89; // [sp+88h] [bp-8E0h]@15
  int v90; // [sp+8Ch] [bp-8DCh]@15
  _DWORD *v91; // [sp+90h] [bp-8D8h]@6
  void (*v92)(void); // [sp+98h] [bp-8D0h]@6
  char *(__fastcall *v93)(int, int ***, int); // [sp+9Ch] [bp-8CCh]@6
  int v94; // [sp+A0h] [bp-8C8h]@6
  int v95; // [sp+A4h] [bp-8C4h]@6
  char v96; // [sp+A8h] [bp-8C0h]@6
  void (*v97)(void); // [sp+B0h] [bp-8B8h]@6
  char *v98; // [sp+BCh] [bp-8ACh]@6
  __int64 v99; // [sp+C0h] [bp-8A8h]@5
  __int64 v100; // [sp+C8h] [bp-8A0h]@4
  int v101; // [sp+D0h] [bp-898h]@2
  int v102; // [sp+D4h] [bp-894h]@1
  int v103; // [sp+D8h] [bp-890h]@1
  int v104; // [sp+DCh] [bp-88Ch]@1
  __int64 v105; // [sp+E0h] [bp-888h]@4
  const char *v106; // [sp+E8h] [bp-880h]@4
  int v107; // [sp+ECh] [bp-87Ch]@4
  _DWORD *v108; // [sp+F0h] [bp-878h]@15
  void (*v109)(void); // [sp+F8h] [bp-870h]@15
  int (__fastcall *v110)(int, int *, __int64 *); // [sp+FCh] [bp-86Ch]@15
  int v111; // [sp+100h] [bp-868h]@15
  int v112; // [sp+104h] [bp-864h]@15
  char v113; // [sp+108h] [bp-860h]@15
  void (*v114)(void); // [sp+110h] [bp-858h]@15
  char *v115; // [sp+11Ch] [bp-84Ch]@15
  int v116; // [sp+120h] [bp-848h]@15
  int v117; // [sp+124h] [bp-844h]@15
  unsigned __int8 v118; // [sp+12Bh] [bp-83Dh]@15
  char v119; // [sp+130h] [bp-838h]@5
  int v120; // [sp+134h] [bp-834h]@5
  int v121; // [sp+534h] [bp-434h]@5
  char v122; // [sp+538h] [bp-430h]@4
  int v123; // [sp+53Ch] [bp-42Ch]@4
  int v124; // [sp+93Ch] [bp-2Ch]@4
  RakNet *v125; // [sp+940h] [bp-28h]@1

  v5 = this;
  v6 = a4;
  v7 = a2;
  v69 = a3;
  v125 = _stack_chk_guard;
  ResourceLocation::getFullPath((ResourceLocation *)&v104, (int)a2);
  PackReport::setLocation(v6, v7);
  v102 = v104;
  v103 = *(_DWORD *)(v104 - 12);
  v8 = *((_DWORD *)v7 + 1);
  v9 = getFileType((__int64 *)&v102);
  if ( v9 == 1 )
  {
    PackAccessStrategyFactory::createForZip((PackAccessStrategyFactory *)&v101, v7, a5);
    v10 = v101;
    v101 = 0;
LABEL_3:
    v11 = (DirectoryPackWithEncryptionAccessStrategy *)v10;
LABEL_27:
    if ( (*(int (__fastcall **)(DirectoryPackWithEncryptionAccessStrategy *))(*(_DWORD *)v11 + 24))(v11) == 1 )
    {
      v70 = 0;
      v71 = 0;
      v72 = 0;
      PackDiscoveryError::PackDiscoveryError(&v73, 3, (unsigned __int64 *)&v70);
      v28 = v5;
      PackReport::addError<PackDiscoveryError>((int)v6, (int)&v73);
      v73 = &off_26D9084;
      v30 = (void *)HIDWORD(v74);
      v29 = (void *)v74;
      if ( (_DWORD)v74 != HIDWORD(v74) )
      {
        do
        {
          v33 = (int *)(*(_DWORD *)v29 - 12);
          if ( v33 != &dword_28898C0 )
          {
            v31 = (unsigned int *)(*(_DWORD *)v29 - 4);
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
              j_j_j_j__ZdlPv_9(v33);
          }
          v29 = (char *)v29 + 4;
        }
        while ( v29 != v30 );
        v29 = (void *)v74;
      }
      if ( v29 )
        operator delete(v29);
      v35 = v71;
      v34 = v70;
      if ( v70 != v71 )
          v38 = (int *)(*(_DWORD *)v34 - 12);
          if ( v38 != &dword_28898C0 )
            v36 = (unsigned int *)(*(_DWORD *)v34 - 4);
                v37 = __ldrex(v36);
              while ( __strex(v37 - 1, v36) );
              v37 = (*v36)--;
            if ( v37 <= 0 )
              j_j_j_j__ZdlPv_9(v38);
          v34 = (char *)v34 + 4;
        while ( v34 != v35 );
        v34 = v70;
      if ( v34 )
        operator delete(v34);
      *(_DWORD *)v28 = 0;
    }
    else
      *(_DWORD *)v5 = v11;
      v11 = 0;
    goto LABEL_60;
  }
  LODWORD(v12) = v104;
  HIDWORD(v12) = *(_DWORD *)(v104 - 12);
  v13 = *((_DWORD *)PackManifestFactory::MANIFEST_PATH - 3);
  v105 = v12;
  v106 = PackManifestFactory::MANIFEST_PATH;
  v107 = v13;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v122, (int)&v105, 2);
  LODWORD(v100) = &v123;
  HIDWORD(v100) = v124;
  if ( Core::FileSystem::fileOrDirectoryExists(&v100) )
    goto LABEL_170;
  LODWORD(v14) = v104;
  HIDWORD(v14) = *(_DWORD *)(v104 - 12);
  v15 = *(_DWORD *)(PackManifestFactory::MANIFEST_PATH_OLD - 12);
  v105 = v14;
  v106 = (const char *)PackManifestFactory::MANIFEST_PATH_OLD;
  v107 = v15;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v119, (int)&v105, 2);
  LODWORD(v99) = &v120;
  HIDWORD(v99) = v121;
  if ( Core::FileSystem::fileOrDirectoryExists(&v99) )
  v98 = (char *)&unk_28898CC;
  v94 = v104;
  v95 = *(_DWORD *)(v104 - 12);
  v16 = operator new(4u);
  *v16 = &v98;
  v91 = v16;
  v92 = (void (*)(void))sub_15688C4;
  v93 = sub_1568704;
  Core::FileSystem::iterateOverDirectory((int)&v96, (__int64 *)&v94, 646LL, (int)&v91);
  if ( v97 )
    v97();
  if ( v92 )
    v92();
  v17 = v98;
  if ( *((_DWORD *)v98 - 3) )
    EntityInteraction::setInteractText((int *)v7, (int *)&v98);
    PackReport::setLocation(v6, v7);
    v17 = v98;
    v18 = 1;
  else
    v18 = 0;
  v19 = v17 - 12;
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  if ( v18 == 1 )
LABEL_170:
    v89 = 0;
    v90 = 0;
    v87 = 0;
    v88 = 0;
    v85 = (char *)&unk_28898CC;
    v86 = 0;
    v118 = 0;
    v117 = *((_DWORD *)v7 + 1);
    ResourceLocation::getFullPath((ResourceLocation *)&v116, (int)v7);
    v115 = (char *)&unk_28898CC;
    v111 = v116;
    v112 = *(_DWORD *)(v116 - 12);
    v109 = 0;
    v20 = operator new(0x14u);
    *v20 = &v115;
    v20[1] = &v117;
    v20[2] = &v87;
    v20[3] = &v85;
    v20[4] = &v118;
    v108 = v20;
    v109 = (void (*)(void))sub_15686C4;
    v110 = sub_156850C;
    Core::FileSystem::iterateOverDirectory((int)&v113, (__int64 *)&v111, 130LL, (int)&v108);
    if ( v114 )
      v114();
    if ( v109 )
      v109();
    v21 = v118;
    v22 = v115 - 12;
    if ( (int *)(v115 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v115 - 4);
      if ( &pthread_create )
        __dmb();
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
      else
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    v23 = (void *)(v116 - 12);
    if ( (int *)(v116 - 12) != &dword_28898C0 )
      v45 = (unsigned int *)(v116 - 4);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    if ( v21 )
      v11 = (DirectoryPackWithEncryptionAccessStrategy *)operator new(0x58u);
      DirectoryPackWithEncryptionAccessStrategy::DirectoryPackWithEncryptionAccessStrategy(
        v11,
        v7,
        (const ResourceLocation *)&v85,
        (const mce::UUID *)&v87,
        v69);
      v24 = *((_DWORD *)v7 + 1);
      v25 = (DirectoryPackAccessStrategy *)operator new(0x38u);
      v11 = v25;
      v26 = 0;
      if ( v24 != 1 )
        v26 = 1;
      DirectoryPackAccessStrategy::DirectoryPackAccessStrategy(v25, v7, v26);
    v27 = v85 - 12;
    if ( (int *)(v85 - 12) != &dword_28898C0 )
      v47 = (unsigned int *)(v85 - 4);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    goto LABEL_27;
  if ( v9 == 3 )
    v79 = 0;
    v80 = 0;
    v81 = 0;
    PackLoadError::PackLoadError(&v82, 2, (unsigned __int64 *)&v79);
    PackReport::addError<PackLoadError>((int)v6, (int)&v82);
    v82 = &off_26D9084;
    v50 = (void *)HIDWORD(v83);
    v49 = (void *)v83;
    if ( (_DWORD)v83 != HIDWORD(v83) )
        v53 = (int *)(*(_DWORD *)v49 - 12);
        if ( v53 != &dword_28898C0 )
          v51 = (unsigned int *)(*(_DWORD *)v49 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v52 = __ldrex(v51);
            while ( __strex(v52 - 1, v51) );
          else
            v52 = (*v51)--;
          if ( v52 <= 0 )
            j_j_j_j__ZdlPv_9(v53);
        v49 = (char *)v49 + 4;
      while ( v49 != v50 );
      v49 = (void *)v83;
    if ( v49 )
      operator delete(v49);
    v55 = v80;
    v54 = v79;
    if ( v79 != v80 )
        v58 = (int *)(*(_DWORD *)v54 - 12);
        if ( v58 != &dword_28898C0 )
          v56 = (unsigned int *)(*(_DWORD *)v54 - 4);
              v57 = __ldrex(v56);
            while ( __strex(v57 - 1, v56) );
            v57 = (*v56)--;
          if ( v57 <= 0 )
            j_j_j_j__ZdlPv_9(v58);
        v54 = (char *)v54 + 4;
      while ( v54 != v55 );
      v54 = v79;
    if ( v54 )
      operator delete(v54);
    v11 = 0;
    *(_DWORD *)v5 = 0;
    if ( v9 == 2 )
      PackAccessStrategyFactory::createForEncryptedZip((PackAccessStrategyFactory *)&v84, v7, v69);
      v10 = v84;
      v84 = 0;
      goto LABEL_3;
    v75 = 0LL;
    v76 = 0;
    PackDiscoveryError::PackDiscoveryError(&v77, 1, &v75);
    PackReport::addError<PackDiscoveryError>((int)v6, (int)&v77);
    v77 = &off_26D9084;
    v59 = v78;
    if ( (_DWORD)v78 != HIDWORD(v78) )
        v62 = (int *)(*(_DWORD *)v59 - 12);
        if ( v62 != &dword_28898C0 )
          v60 = (unsigned int *)(*(_DWORD *)v59 - 4);
              v61 = __ldrex(v60);
            while ( __strex(v61 - 1, v60) );
            v61 = (*v60)--;
          if ( v61 <= 0 )
            j_j_j_j__ZdlPv_9(v62);
        LODWORD(v59) = v59 + 4;
      while ( (_DWORD)v59 != HIDWORD(v59) );
      LODWORD(v59) = v78;
    if ( (_DWORD)v59 )
      operator delete((void *)v59);
    v63 = v75;
    if ( (_DWORD)v75 != HIDWORD(v75) )
        v66 = (int *)(*(_DWORD *)v63 - 12);
        if ( v66 != &dword_28898C0 )
          v64 = (unsigned int *)(*(_DWORD *)v63 - 4);
              v65 = __ldrex(v64);
            while ( __strex(v65 - 1, v64) );
            v65 = (*v64)--;
          if ( v65 <= 0 )
            j_j_j_j__ZdlPv_9(v66);
        LODWORD(v63) = v63 + 4;
      while ( (_DWORD)v63 != HIDWORD(v63) );
      LODWORD(v63) = v75;
    if ( (_DWORD)v63 )
      operator delete((void *)v63);
    PackReport::setPackType((int)v6, 7);
LABEL_60:
  v39 = (void *)(v104 - 12);
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v104 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  if ( v11 )
    (*(void (__fastcall **)(DirectoryPackWithEncryptionAccessStrategy *))(*(_DWORD *)v11 + 4))(v11);
  result = (RakNet *)(_stack_chk_guard - v125);
  if ( _stack_chk_guard != v125 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall PackAccessStrategyFactory::createForZip(PackAccessStrategyFactory *this, const ResourceLocation *a2, int a3)
{
  PackAccessStrategyFactory *v3; // r4@1
  int v4; // r6@1
  const ResourceLocation *v5; // r5@1
  void *v6; // r0@2
  int v7; // r1@4
  __int64 v8; // r0@5
  int v9; // r6@7
  void (__fastcall *v10)(int, int *, int **, _DWORD); // r8@9
  int *v11; // r7@9
  void *v12; // r0@11
  void *v13; // r0@12
  int v14; // r0@13
  int v15; // r1@13
  bool v16; // zf@13
  char *v17; // r0@15
  int v18; // r4@16
  unsigned int *v19; // r1@17
  unsigned int v20; // r0@19
  unsigned int *v21; // r5@23
  unsigned int v22; // r0@25
  unsigned int *v23; // r2@31
  signed int v24; // r1@33
  unsigned int *v25; // r2@39
  signed int v26; // r1@41
  unsigned int *v27; // r2@43
  signed int v28; // r1@45
  int v29; // [sp+4h] [bp-6Ch]@13
  int v30; // [sp+8h] [bp-68h]@9
  int v31; // [sp+Ch] [bp-64h]@9
  int *v32; // [sp+10h] [bp-60h]@9
  int *v33; // [sp+14h] [bp-5Ch]@9
  void (*v34)(void); // [sp+1Ch] [bp-54h]@9
  char *(__fastcall *v35)(int, _DWORD *); // [sp+20h] [bp-50h]@9
  int v36; // [sp+28h] [bp-48h]@9
  char *v37; // [sp+2Ch] [bp-44h]@7
  int v38; // [sp+30h] [bp-40h]@7
  __int64 v39; // [sp+34h] [bp-3Ch]@6
  __int64 v40; // [sp+3Ch] [bp-34h]@5
  __int64 v41; // [sp+44h] [bp-2Ch]@4

  v3 = this;
  v4 = a3;
  v5 = a2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v6 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v6 = &ServiceLocator<AppPlatform>::mDefaultService;
  v7 = *((_DWORD *)v5 + 1);
  (*(void (**)(void))(**(_DWORD **)v6 + 316))();
  v41 = 0LL;
  if ( v4 == 1 )
  {
    std::__shared_ptr<MemoryMappedFileAccess,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<MemoryMappedFileAccess>,IFileAccess &>((int)&v40);
    v8 = v40;
    v40 = 0LL;
  }
    j__ZNSt12__shared_ptrI20FileSystemFileAccessLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v39);
    v8 = v39;
    v39 = 0LL;
  v41 = v8;
  std::make_unique<ZipPackAccessStrategyOwningFileAcccess,std::shared_ptr<IFileAccess> &,ResourceLocation const&>(
    &v38,
    (int)&v41,
    (int *)v5);
  v9 = v38;
  *(_DWORD *)v3 = v38;
  v38 = 0;
  v37 = (char *)&unk_28898CC;
  if ( !(*(int (__fastcall **)(int, const char **))(*(_DWORD *)v9 + 32))(v9, &PackManifestFactory::MANIFEST_PATH)
    && !(*(int (__fastcall **)(int, void *))(*(_DWORD *)v9 + 32))(v9, &PackManifestFactory::MANIFEST_PATH_OLD) )
    v10 = *(void (__fastcall **)(int, int *, int **, _DWORD))(*(_DWORD *)v9 + 52);
    sub_21E94B4((void **)&v36, (const char *)&unk_257BC67);
    sub_21E8AF4(&v30, (int *)v5);
    v31 = *((_DWORD *)v5 + 1);
    v32 = (int *)&v37;
    v34 = 0;
    v11 = (int *)operator new(0xCu);
    sub_21E8AF4(v11, &v30);
    v11[1] = v31;
    v11[2] = (int)v32;
    v33 = v11;
    v34 = (void (*)(void))sub_156915C;
    v35 = sub_1568F4C;
    v10(v9, &v36, &v33, 0);
    if ( v34 )
      v34();
    v12 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
    {
      v25 = (unsigned int *)(v30 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
      }
      else
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    }
    v13 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v36 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
  std::make_unique<ZipPackAccessStrategyOwningFileAcccess,std::shared_ptr<IFileAccess> &,ResourceLocation const&,std::string &>(
    &v29,
    (int *)v5,
    (int *)&v37);
  v14 = *(_DWORD *)v3;
  v15 = v29;
  v16 = *(_DWORD *)v3 == 0;
  v29 = 0;
  *(_DWORD *)v3 = v15;
  if ( !v16 )
    (*(void (**)(void))(*(_DWORD *)v14 + 4))();
  v17 = v37 - 12;
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v37 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = HIDWORD(v41);
  if ( HIDWORD(v41) )
    v19 = (unsigned int *)(HIDWORD(v41) + 4);
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
}
