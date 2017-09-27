

void __fastcall ResourcePackFileDownloaderManager::requestNextChunk(ResourcePackFileDownloaderManager *this)
{
  ResourcePackFileDownloaderManager::requestNextChunk(this);
}


signed int __fastcall ResourcePackFileDownloaderManager::_unzipContent(int a1, int *a2, int *a3)
{
  int v3; // r7@1
  int *v4; // r5@1
  int *v5; // r4@1
  char v6; // r6@1
  int *v7; // r0@5
  int *v8; // r2@5
  int *v9; // r1@6
  int *v10; // r1@8
  int *v11; // r0@11
  int *v12; // r2@11
  int *v13; // r1@12
  int *v14; // r1@14
  signed int v15; // r5@16
  signed int v16; // r4@20
  int v18; // [sp+0h] [bp-D8h]@18
  int v19; // [sp+4h] [bp-D4h]@18
  char v20; // [sp+8h] [bp-D0h]@18
  void (*v21)(void); // [sp+10h] [bp-C8h]@18
  int v22; // [sp+1Ch] [bp-BCh]@17
  int v23; // [sp+20h] [bp-B8h]@17
  char v24; // [sp+24h] [bp-B4h]@5
  int v25; // [sp+28h] [bp-B0h]@4
  int *v26; // [sp+2Ch] [bp-ACh]@4
  int *v27; // [sp+30h] [bp-A8h]@4
  int *v28; // [sp+34h] [bp-A4h]@4
  int v29; // [sp+38h] [bp-A0h]@4
  int v30; // [sp+3Ch] [bp-9Ch]@11
  int v31; // [sp+40h] [bp-98h]@10
  int *v32; // [sp+44h] [bp-94h]@10
  int *v33; // [sp+48h] [bp-90h]@10
  int *v34; // [sp+4Ch] [bp-8Ch]@10
  int v35; // [sp+50h] [bp-88h]@10
  __int64 v36; // [sp+54h] [bp-84h]@16
  int v37; // [sp+5Ch] [bp-7Ch]@16
  int v38; // [sp+60h] [bp-78h]@1
  int v39; // [sp+64h] [bp-74h]@1
  char v40; // [sp+68h] [bp-70h]@1
  void (*v41)(void); // [sp+70h] [bp-68h]@1
  char v42; // [sp+78h] [bp-60h]@1
  char v43; // [sp+7Ch] [bp-5Ch]@1
  int v44; // [sp+84h] [bp-54h]@4
  int v45; // [sp+90h] [bp-48h]@9
  int v46; // [sp+9Ch] [bp-3Ch]@10
  int v47; // [sp+A8h] [bp-30h]@15
  char v48; // [sp+ACh] [bp-2Ch]@1
  int v49; // [sp+B4h] [bp-24h]@16
  char v50; // [sp+B8h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  ZipUtils::ZipProgress::ZipProgress((ZipUtils::ZipProgress *)&v50);
  ZipUtils::UnzipSettings::UnzipSettings((ZipUtils::UnzipSettings *)&v43);
  v48 = 1;
  EntityInteraction::setInteractText(v4, (int *)(v3 + 36));
  v38 = *v4;
  v39 = *(_DWORD *)(v38 - 12);
  Core::FileSystem::createDirectoryRecursively((int)&v40, (__int64 *)&v38);
  v6 = v42;
  v42 |= 2u;
  if ( v41 )
    v41();
  if ( !(v6 & 1) )
    goto LABEL_25;
  v29 = 0;
  v25 = 0;
  v26 = 0;
  v27 = &v25;
  v28 = &v25;
  if ( v44 )
  {
    v7 = std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_copy(
           (int)&v24,
           v44,
           (int)&v25);
    v8 = v7;
    v26 = v7;
    do
    {
      v9 = v8;
      v8 = (int *)v8[2];
    }
    while ( v8 );
    v27 = v9;
      v10 = v7;
      v7 = (int *)v7[3];
    while ( v7 );
    v28 = v10;
    v29 = v45;
  }
  v35 = 0;
  v31 = 0;
  v32 = 0;
  v33 = &v31;
  v34 = &v31;
  if ( v46 )
    v11 = std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_copy(
            (int)&v30,
            v46,
            (int)&v31);
    v12 = v11;
    v32 = v11;
      v13 = v12;
      v12 = (int *)v12[2];
    while ( v12 );
    v33 = v13;
      v14 = v11;
      v11 = (int *)v11[3];
    while ( v11 );
    v34 = v14;
    v35 = v47;
  v36 = *(_QWORD *)&v48;
  sub_21E8AF4(&v37, &v49);
  v15 = ZipUtils::unzip(v5, v4, (int)&v50, (int)&v24);
  ZipUtils::UnzipSettings::~UnzipSettings((ZipUtils::UnzipSettings *)&v24);
  if ( !v15 )
    v16 = 1;
  else
LABEL_25:
    v22 = *v5;
    v23 = *(_DWORD *)(v22 - 12);
    if ( Core::FileSystem::fileOrDirectoryExists((__int64 *)&v22) == 1 )
      v18 = *v5;
      v19 = *(_DWORD *)(v18 - 12);
      Core::FileSystem::deleteFile((int)&v20, (__int64 *)&v18);
      if ( v21 )
        v21();
    v16 = 0;
  ZipUtils::UnzipSettings::~UnzipSettings((ZipUtils::UnzipSettings *)&v43);
  ZipUtils::ZipProgress::~ZipProgress((ZipUtils::ZipProgress *)&v50);
  return v16;
}


int __fastcall ResourcePackFileDownloaderManager::chunkReceived(int result, int a2, unsigned __int64 *a3)
{
  int v3; // r9@1
  unsigned __int64 *v4; // r10@1
  int v5; // r1@1
  bool v6; // zf@1
  int v7; // r11@4
  unsigned int v8; // r2@5
  unsigned int *v9; // r1@5
  unsigned int v10; // r3@8
  unsigned int v11; // r7@9
  unsigned int *v12; // r8@10
  unsigned int v13; // r0@12
  unsigned int v14; // r0@17
  unsigned int v15; // r0@23
  unsigned int v16; // r0@30
  int v17; // r2@33
  int v18; // r3@33
  int v19; // r4@33
  int v20; // r5@33
  int v21; // r6@33
  int v22; // r0@33
  int v23; // r9@33
  char *v24; // r4@34
  int v25; // r6@34
  unsigned int v26; // r10@36
  _DWORD *v27; // r11@38
  int v28; // r12@38
  unsigned int v29; // r0@40
  int v30; // lr@43
  int v31; // r0@43
  int v32; // r2@43
  int v33; // r3@43
  int v34; // r4@43
  int v35; // r5@43
  int v36; // r6@43
  char *v37; // r5@43
  char *v38; // r1@44
  char *v39; // r6@44
  int v40; // r4@46
  __int64 v41; // r0@48
  unsigned int v42; // r0@56
  int v43; // [sp+8h] [bp-70h]@28
  void *ptr; // [sp+10h] [bp-68h]@10
  char *ptra; // [sp+10h] [bp-68h]@43
  int v46; // [sp+14h] [bp-64h]@36
  char v47; // [sp+18h] [bp-60h]@48
  void (*v48)(void); // [sp+20h] [bp-58h]@48
  int v49; // [sp+28h] [bp-50h]@33
  int v50; // [sp+2Ch] [bp-4Ch]@33
  int v51; // [sp+30h] [bp-48h]@33
  int v52; // [sp+34h] [bp-44h]@33
  int v53; // [sp+38h] [bp-40h]@33
  int v54; // [sp+3Ch] [bp-3Ch]@33
  _DWORD *v55; // [sp+44h] [bp-34h]@48
  void (*v56)(void); // [sp+4Ch] [bp-2Ch]@38

  v3 = a2;
  v4 = a3;
  v5 = *(_DWORD *)(*(_DWORD *)(result + 24) - 12);
  v6 = v5 == 0;
  if ( v5 )
    v6 = *(_DWORD *)(*(_DWORD *)(result + 20) - 12) == 0;
  if ( !v6 )
  {
    v7 = *(_DWORD *)(result + 8);
    if ( !v7 )
      std::__throw_bad_weak_ptr();
    v8 = *(_DWORD *)(v7 + 4);
    v9 = (unsigned int *)(v7 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v8 )
          std::__throw_bad_weak_ptr();
        __dmb();
        v10 = __ldrex(v9);
        if ( v10 == v8 )
          break;
        __clrex();
        v8 = v10;
      }
      v11 = __strex(v8 + 1, v9);
      v8 = v10;
    }
    while ( v11 );
    __dmb();
    v12 = (unsigned int *)(v7 + 8);
    ptr = *(void **)(result + 4);
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
    else
      ++*v12;
        v14 = __ldrex(v9);
      while ( __strex(v14 - 1, v9) );
      v14 = (*v9)--;
    if ( v14 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
        do
          v15 = __ldrex(v12);
        while ( __strex(v15 - 1, v12) );
      else
        v15 = (*v12)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
    v43 = TaskGroup::DISK;
        v16 = __ldrex(v12);
      while ( __strex(v16 + 1, v12) );
    v17 = *(_DWORD *)(v3 + 4);
    v18 = *(_DWORD *)(v3 + 8);
    v19 = *(_DWORD *)(v3 + 12);
    v20 = *(_DWORD *)(v3 + 16);
    v21 = *(_DWORD *)(v3 + 20);
    v49 = *(_DWORD *)v3;
    v50 = v17;
    v51 = v18;
    v52 = v19;
    v53 = v20;
    v54 = v21;
    v23 = *v4 >> 32;
    v22 = *v4;
    if ( v23 == v22 )
      v24 = 0;
      v25 = *v4 >> 32;
      v24 = (char *)operator new(v23 - v22);
      v23 = *v4 >> 32;
      v25 = *v4;
    v26 = v23 - v25;
    v46 = v7;
    if ( v23 != v25 )
      _aeabi_memmove(v24, v25);
    v56 = 0;
    v27 = operator new(0x30u);
    v28 = v25;
    *v27 = ptr;
    v27[1] = v46;
        v29 = __ldrex(v12);
      while ( __strex(v29 + 1, v12) );
    v30 = (int)&v24[v26];
    ptra = v24;
    v31 = (int)(v27 + 2);
    v32 = v50;
    v33 = v51;
    v34 = v52;
    v35 = v53;
    v36 = v54;
    *(_DWORD *)v31 = v49;
    *(_DWORD *)(v31 + 4) = v32;
    *(_DWORD *)(v31 + 8) = v33;
    *(_DWORD *)(v31 + 12) = v34;
    *(_DWORD *)(v31 + 16) = v35;
    *(_DWORD *)(v31 + 20) = v36;
    v37 = 0;
    v27[8] = 0;
    v27[9] = 0;
    v27[10] = 0;
    if ( v23 == v28 )
      v38 = (char *)v30;
      v39 = ptra;
      v37 = (char *)operator new(v26);
      v38 = ptra;
    v40 = v30 - (_DWORD)v38;
    v27[8] = v37;
    v27[9] = v37;
    v27[10] = &v37[v26];
    if ( (char *)v30 != v38 )
      _aeabi_memmove(v37, v38);
    HIDWORD(v41) = sub_1638FB0;
    v27[9] = &v37[v40];
    LODWORD(v41) = sub_1639390;
    v55 = v27;
    *(_QWORD *)&v56 = v41;
    v48 = 0;
    TaskGroup::queue(v43, (int)&v55, (int)&v47, 1u, 0xFFFFFFFF);
    if ( v48 )
      v48();
    if ( v56 )
      v56();
    if ( v39 )
      operator delete(v39);
        v42 = __ldrex(v12);
      while ( __strex(v42 - 1, v12) );
      v42 = (*v12)--;
    if ( v42 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v46 + 12))(v46);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v46 + 12))(v46);
  }
  return result;
}


void __fastcall ResourcePackFileDownloaderManager::downloadFile(int a1, int *a2, _DWORD *a3, unsigned int a4, int a5, int a6, unsigned __int64 a7, const void **a8)
{
  ResourcePackFileDownloaderManager::downloadFile(a1, a2, a3, a4, a5, a6, a7, a8);
}


int __fastcall ResourcePackFileDownloaderManager::_isInitialized(ResourcePackFileDownloaderManager *this)
{
  int result; // r0@2

  if ( *(_DWORD *)(*((_DWORD *)this + 6) - 12) )
    result = *(_DWORD *)(*((_DWORD *)this + 5) - 12) != 0;
  else
    result = 0;
  return result;
}


unsigned __int64 __fastcall ResourcePackFileDownloaderManager::getDownloadedBytes(ResourcePackFileDownloaderManager *this)
{
  int v1; // r1@1
  bool v2; // zf@1
  unsigned __int64 result; // r0@4

  v1 = *(_DWORD *)(*((_DWORD *)this + 6) - 12);
  v2 = v1 == 0;
  if ( v1 )
    v2 = *(_DWORD *)(*((_DWORD *)this + 5) - 12) == 0;
  if ( v2 )
    result = 0LL;
  else
    result = j_j_j__ZNK18UploadChunkManager18getDownloadedBytesEv((ResourcePackFileDownloaderManager *)((char *)this + 48));
  return result;
}


int __fastcall ResourcePackFileDownloaderManager::ResourcePackFileDownloaderManager(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  AppPlatform **v5; // r0@2
  int *v6; // r0@4
  const void **v7; // r0@4
  char *v8; // r0@4
  void *v9; // r0@5
  unsigned int *v11; // r2@7
  signed int v12; // r1@9
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  int v15; // [sp+Ch] [bp-44h]@4
  char *v16; // [sp+10h] [bp-40h]@4

  v3 = a1;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = &off_26EC120;
  *(_QWORD *)(a1 + 12) = *(_QWORD *)&a2;
  *(_DWORD *)(a1 + 20) = &unk_28898CC;
  *(_DWORD *)(a1 + 24) = &unk_28898CC;
  *(_DWORD *)(a1 + 28) = &unk_28898CC;
  v4 = a1 + 28;
  *(_DWORD *)(v4 + 4) = &unk_28898CC;
  *(_DWORD *)(v4 + 8) = &unk_28898CC;
  *(_BYTE *)(v4 + 12) = 1;
  UploadChunkManager::UploadChunkManager((UploadChunkManager *)(a1 + 48));
  *(_DWORD *)(v3 + 88) = 0;
  *(_DWORD *)(v3 + 104) = 0;
  _aeabi_memclr8(v3 + 112, 44);
  MPMCQueue<std::function<void ()(void)>>::MPMCQueue(v3 + 112);
  UploadChunkInfo::UploadChunkInfo((UploadChunkInfo *)(v3 + 160), -1, 0xFFFFFFFFFFFFFFFFLL, 0LL);
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v5 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v5 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v6 = AppPlatform::getTempPath(*v5);
  sub_21E8AF4(&v15, v6);
  sub_21E7408((const void **)&v15, "/", 1u);
  v7 = sub_21E72F0((const void **)&v15, (const void **)&ResourcePackRepository::RESOURCE_PACK_DOWNLOAD_CACHE_PATH);
  v16 = (char *)*v7;
  *v7 = &unk_28898CC;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v4,
    (int *)&v16);
  v8 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v16 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  }
  v9 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  return v3;
}


void __fastcall ResourcePackFileDownloaderManager::requestNextChunk(ResourcePackFileDownloaderManager *this)
{
  ResourcePackFileDownloaderManager *v1; // r10@1
  int v2; // r0@1
  bool v3; // zf@1
  char *v4; // r7@4
  int v5; // r1@4
  int v6; // r12@4
  _DWORD *v7; // r8@5
  int v8; // lr@5
  _DWORD *v9; // r0@7
  _DWORD *v10; // r11@8
  int v11; // r3@9
  _DWORD *v12; // r2@10
  int v13; // r0@10
  int v14; // r1@10
  int v15; // r4@10
  int v16; // r5@10
  int v17; // r6@10
  int v18; // r7@10
  int v19; // r3@12
  int v20; // r4@12
  int v21; // r5@12
  int v22; // r6@12
  int v23; // r7@12
  signed int v24; // r0@13
  _DWORD *v25; // r1@15
  size_t v26; // r2@15
  _BYTE *v27; // r6@15
  int v28; // r0@20
  char *v29; // r0@20
  char *v30; // r0@21
  unsigned int *v31; // r2@25
  signed int v32; // r1@27
  unsigned int *v33; // r2@33
  signed int v34; // r1@35
  char *v35; // [sp+0h] [bp-48h]@20
  void *s1; // [sp+4h] [bp-44h]@15
  int v37; // [sp+8h] [bp-40h]@12
  int v38; // [sp+Ch] [bp-3Ch]@12
  int v39; // [sp+10h] [bp-38h]@12
  int v40; // [sp+14h] [bp-34h]@12
  int v41; // [sp+18h] [bp-30h]@12
  int v42; // [sp+1Ch] [bp-2Ch]@12

  v1 = this;
  v2 = *(_DWORD *)(*((_DWORD *)this + 6) - 12);
  v3 = v2 == 0;
  if ( v2 )
    v3 = *(_DWORD *)(*((_DWORD *)v1 + 5) - 12) == 0;
  if ( !v3 )
  {
    v4 = UploadChunkManager::getMissingChunks((ResourcePackFileDownloaderManager *)((char *)v1 + 48));
    v6 = *(_QWORD *)v4 >> 32;
    v5 = *(_QWORD *)v4;
    if ( v6 == v5 )
    {
      v7 = 0;
      v8 = *(_QWORD *)v4 >> 32;
    }
    else
      if ( (unsigned int)(-1431655765 * ((v6 - v5) >> 3)) >= 0xAAAAAAB )
        sub_21E57F4();
      v9 = operator new(v6 - v5);
      v6 = *(_QWORD *)v4 >> 32;
      v8 = *(_QWORD *)v4;
      v7 = v9;
    v10 = v7;
    if ( v8 != v6 )
      v10 = v7;
      v11 = v8;
      do
      {
        v8 += 24;
        v12 = v10;
        v10 += 6;
        v13 = *(_DWORD *)v11;
        v14 = *(_DWORD *)(v11 + 4);
        v15 = *(_DWORD *)(v11 + 8);
        v16 = *(_DWORD *)(v11 + 12);
        v17 = *(_DWORD *)(v11 + 16);
        v18 = *(_DWORD *)(v11 + 20);
        v11 = v8;
        *v12 = v13;
        v12[1] = v14;
        v12[2] = v15;
        v12[3] = v16;
        v12[4] = v17;
        v12[5] = v18;
      }
      while ( v6 != v8 );
    if ( v7 != v10 )
      v19 = v7[1];
      v20 = v7[2];
      v21 = v7[3];
      v22 = v7[4];
      v23 = v7[5];
      v37 = *v7;
      v38 = v19;
      v39 = v20;
      v40 = v21;
      v41 = v22;
      v42 = v23;
      if ( UploadChunkInfo::operator==((int *)v1 + 40, &v37) == 1 )
        v24 = *((_DWORD *)v1 + 46);
        *((_DWORD *)v1 + 46) = v24 + 1;
        if ( v24 >= 3 )
        {
          sub_21E7EE0((const void **)v1 + 6, 0, *(_BYTE **)(*((_DWORD *)v1 + 6) - 12), 0);
          sub_21E7EE0((const void **)v1 + 5, 0, *(_BYTE **)(*((_DWORD *)v1 + 5) - 12), 0);
          UploadChunkManager::reset((ResourcePackFileDownloaderManager *)((char *)v1 + 48));
          ResourcePackFileDownloaderManager::_completionCallback((int)v1, 0, (int *)&Util::EMPTY_STRING);
        }
      else
        *((_DWORD *)v1 + 46) = 1;
      ResourcePackFileDownloaderManager::_requestChunk(v1, v37);
LABEL_23:
      operator delete(v7);
      return;
    CryptoUtils::getFileChecksum((Crypto::Hash::Hash *)&s1, (int *)v1 + 8);
    v25 = (_DWORD *)*((_DWORD *)v1 + 6);
    v26 = *((_DWORD *)s1 - 3);
    v27 = (_BYTE *)*(v25 - 3);
    if ( (_BYTE *)v26 == v27 && !memcmp(s1, v25, v26) )
      v35 = (char *)&unk_28898CC;
      v28 = ResourcePackFileDownloaderManager::_unzipContent((int)v1, (int *)v1 + 8, (int *)&v35);
      ResourcePackFileDownloaderManager::_completionCallback((int)v1, v28, (int *)&v35);
      v29 = v35 - 12;
      if ( (int *)(v35 - 12) != &dword_28898C0 )
        v33 = (unsigned int *)(v35 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
        else
          v34 = (*v33)--;
        if ( v34 <= 0 )
          j_j_j_j__ZdlPv_9(v29);
      sub_21E7EE0((const void **)v1 + 6, 0, v27, 0);
      sub_21E7EE0((const void **)v1 + 5, 0, *(_BYTE **)(*((_DWORD *)v1 + 5) - 12), 0);
      UploadChunkManager::reset((ResourcePackFileDownloaderManager *)((char *)v1 + 48));
      ResourcePackFileDownloaderManager::_completionCallback((int)v1, 0, (int *)&Util::EMPTY_STRING);
    v30 = (char *)s1 - 12;
    if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)((char *)s1 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j__ZdlPv_9(v30);
    if ( v7 )
      goto LABEL_23;
  }
}


ResourcePackFileDownloaderManager *__fastcall ResourcePackFileDownloaderManager::~ResourcePackFileDownloaderManager(ResourcePackFileDownloaderManager *this)
{
  ResourcePackFileDownloaderManager *v1; // r9@1
  int v2; // r0@2
  bool v3; // zf@2
  int v4; // r1@10
  int v5; // r2@10
  int v6; // r3@10
  int v7; // r7@10
  __int64 v8; // kr00_8@10
  int v9; // r4@10
  void *v10; // r0@10
  unsigned int v11; // r6@11
  unsigned int v12; // r1@11
  unsigned int v13; // r7@12
  void *v14; // t1@13
  void (*v15)(void); // r3@16
  void (*v16)(void); // r3@18
  void *v17; // r0@20
  int v18; // r1@22
  void *v19; // r0@22
  int v20; // r1@23
  void *v21; // r0@23
  int v22; // r1@24
  void *v23; // r0@24
  int v24; // r1@25
  void *v25; // r0@25
  int v26; // r1@26
  void *v27; // r0@26
  int v28; // r0@27
  unsigned int *v29; // r2@28
  unsigned int v30; // r1@30
  unsigned int *v32; // r2@36
  signed int v33; // r1@38
  unsigned int *v34; // r2@40
  signed int v35; // r1@42
  unsigned int *v36; // r2@44
  signed int v37; // r1@46
  unsigned int *v38; // r2@48
  signed int v39; // r1@50
  unsigned int *v40; // r2@52
  signed int v41; // r1@54
  int v42; // [sp+4h] [bp-7Ch]@8
  int v43; // [sp+8h] [bp-78h]@8
  char v44; // [sp+Ch] [bp-74h]@8
  void (*v45)(void); // [sp+14h] [bp-6Ch]@8
  int v46; // [sp+20h] [bp-60h]@7
  int v47; // [sp+24h] [bp-5Ch]@7
  int v48; // [sp+28h] [bp-58h]@5
  int v49; // [sp+2Ch] [bp-54h]@5
  char v50; // [sp+30h] [bp-50h]@5
  void (*v51)(void); // [sp+38h] [bp-48h]@5
  int v52; // [sp+44h] [bp-3Ch]@10
  __int64 v53; // [sp+48h] [bp-38h]@10
  int v54; // [sp+50h] [bp-30h]@10
  int v55; // [sp+54h] [bp-2Ch]@10
  int v56; // [sp+58h] [bp-28h]@10
  int v57; // [sp+5Ch] [bp-24h]@10
  int v58; // [sp+60h] [bp-20h]@10

  v1 = this;
  *(_DWORD *)this = &off_26EC120;
  if ( *(_DWORD *)(*((_DWORD *)this + 6) - 12) )
  {
    v2 = *(_DWORD *)(*((_DWORD *)this + 5) - 12);
    v3 = v2 == 0;
    if ( v2 )
      v3 = *((_BYTE *)v1 + 40) == 0;
    if ( !v3 )
    {
      v48 = *((_DWORD *)v1 + 7);
      v49 = *(_DWORD *)(v48 - 12);
      Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v50, (__int64 *)&v48);
      if ( v51 )
        v51();
      v46 = *((_DWORD *)v1 + 8);
      v47 = *(_DWORD *)(v46 - 12);
      if ( Core::FileSystem::fileOrDirectoryExists((__int64 *)&v46) == 1 )
      {
        v42 = *((_DWORD *)v1 + 8);
        v43 = *(_DWORD *)(v42 - 12);
        Core::FileSystem::deleteEmptyDirectory((int)&v44, (__int64 *)&v42);
        if ( v45 )
          v45();
      }
    }
  }
  v4 = *((_DWORD *)v1 + 31);
  v5 = *((_DWORD *)v1 + 32);
  v6 = *((_DWORD *)v1 + 33);
  v7 = *((_DWORD *)v1 + 34);
  v8 = *(_QWORD *)((char *)v1 + 140);
  v9 = *((_DWORD *)v1 + 37);
  v55 = *((_DWORD *)v1 + 30);
  v56 = v4;
  v57 = v5;
  v58 = v6;
  v52 = v7;
  v53 = v8;
  v54 = v9;
  std::deque<std::function<void ()(void)>,std::allocator<std::function<void ()(void)>>>::_M_destroy_data_aux(
    (int)v1 + 112,
    (int)&v55,
    (int)&v52);
  v10 = (void *)*((_DWORD *)v1 + 28);
  if ( v10 )
    v11 = *((_DWORD *)v1 + 37);
    v12 = *((_DWORD *)v1 + 33);
    if ( v12 < v11 + 4 )
      v13 = v12 - 4;
      do
        v14 = *(void **)(v13 + 4);
        v13 += 4;
        operator delete(v14);
      while ( v13 < v11 );
      v10 = (void *)*((_DWORD *)v1 + 28);
    operator delete(v10);
  v15 = (void (*)(void))*((_DWORD *)v1 + 26);
  if ( v15 )
    v15();
  v16 = (void (*)(void))*((_DWORD *)v1 + 22);
  if ( v16 )
    v16();
  v17 = (void *)*((_DWORD *)v1 + 16);
  if ( v17 )
    operator delete(v17);
  v18 = *((_DWORD *)v1 + 9);
  v19 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
      __dmb();
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    else
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = *((_DWORD *)v1 + 8);
  v21 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v20 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = *((_DWORD *)v1 + 7);
  v23 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v22 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = *((_DWORD *)v1 + 6);
  v25 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v24 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = *((_DWORD *)v1 + 5);
  v27 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v26 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = *((_DWORD *)v1 + 2);
  if ( v28 )
    v29 = (unsigned int *)(v28 + 8);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 == 1 )
      (*(void (**)(void))(*(_DWORD *)v28 + 12))();
  return v1;
}


void __fastcall ResourcePackFileDownloaderManager::_completionCallback(int a1, int a2, int *a3)
{
  int v3; // r5@1
  int v4; // r4@1
  void (__fastcall *v5)(int, int, char **); // r3@3
  char *v6; // r0@3
  char *v7; // r0@4
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  char *v12; // [sp+0h] [bp-28h]@2
  char *v13; // [sp+8h] [bp-20h]@3

  v3 = a1;
  v4 = a2;
  if ( *(_DWORD *)(a1 + 88) )
  {
    sub_21E8AF4((int *)&v12, a3);
    if ( !*(_DWORD *)(v3 + 88) )
      sub_21E5F48();
    v5 = *(void (__fastcall **)(int, int, char **))(v3 + 92);
    v13 = v12;
    v12 = (char *)&unk_28898CC;
    v5(v3 + 80, v4, &v13);
    v6 = v13 - 12;
    if ( (int *)(v13 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v13 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
    }
    v7 = v12 - 12;
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v12 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
  }
}


void __fastcall ResourcePackFileDownloaderManager::~ResourcePackFileDownloaderManager(ResourcePackFileDownloaderManager *this)
{
  ResourcePackFileDownloaderManager::~ResourcePackFileDownloaderManager(this);
}


int __fastcall ResourcePackFileDownloaderManager::addProgressCallback(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 96;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 96);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 104);
  v10 = v13;
  *(_DWORD *)(v4 + 104) = v8;
  v14 = *(_DWORD *)(v4 + 108);
  *(_DWORD *)(v4 + 108) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


int __fastcall ResourcePackFileDownloaderManager::update(ResourcePackFileDownloaderManager *this)
{
  ResourcePackFileDownloaderManager *v1; // r4@1
  unsigned __int8 *v2; // r7@1
  unsigned int v3; // r0@2
  int v4; // r0@4
  __int64 v5; // r1@5
  int (*v6)(void); // r5@5
  void (__fastcall *v7)(_DWORD); // r0@5
  int (*v8)(void); // r3@5
  int v9; // r0@7
  void (*v10)(void); // r3@7
  int v11; // r0@10
  int v12; // r0@13
  int result; // r0@17
  __int64 v14; // [sp+0h] [bp-48h]@5
  int (*v15)(void); // [sp+8h] [bp-40h]@1
  void (__fastcall *v16)(_DWORD); // [sp+Ch] [bp-3Ch]@5
  __int64 v17; // [sp+10h] [bp-38h]@5
  int (*v18)(void); // [sp+18h] [bp-30h]@5
  void (__fastcall *v19)(_DWORD); // [sp+1Ch] [bp-2Ch]@5

  v1 = this;
  v2 = (unsigned __int8 *)this + 152;
  v15 = 0;
  while ( 1 )
  {
    do
    {
      do
        v3 = __ldrex(v2);
      while ( __strex(1u, v2) );
      __dmb();
    }
    while ( v3 );
    v4 = *((_DWORD *)v1 + 30);
    if ( *((_DWORD *)v1 + 34) == v4 )
      break;
    LODWORD(v5) = *(_DWORD *)v4;
    HIDWORD(v5) = *(_DWORD *)(v4 + 4);
    v6 = *(int (**)(void))(v4 + 8);
    *(_DWORD *)(v4 + 8) = 0;
    v7 = *(void (__fastcall **)(_DWORD))(v4 + 12);
    v17 = v14;
    v14 = v5;
    v8 = v15;
    v15 = v6;
    v18 = v8;
    v19 = v16;
    v16 = v7;
    if ( v8 )
      ((void (__fastcall *)(__int64 *, __int64 *, signed int))v8)(&v17, &v17, 3);
    v9 = *((_DWORD *)v1 + 30);
    v10 = *(void (**)(void))(v9 + 8);
    if ( v9 == *((_DWORD *)v1 + 32) - 16 )
      if ( v10 )
        v10();
      operator delete(*((void **)v1 + 31));
      v12 = *((_DWORD *)v1 + 33);
      *((_DWORD *)v1 + 33) = v12 + 4;
      v11 = *(_DWORD *)(v12 + 4);
      *((_DWORD *)v1 + 31) = v11;
      *((_DWORD *)v1 + 32) = v11 + 512;
    else
      {
        v9 = *((_DWORD *)v1 + 30);
      }
      v11 = v9 + 16;
    *((_DWORD *)v1 + 30) = v11;
    __dmb();
    *v2 = 0;
    if ( !v15 )
      sub_21E5F48();
    v16(&v14);
  }
  result = 0;
  __dmb();
  *v2 = 0;
  if ( v15 )
    result = v15();
  return result;
}


int __fastcall ResourcePackFileDownloaderManager::addCompletionCallback(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 80;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 80);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 88);
  v10 = v13;
  *(_DWORD *)(v4 + 88) = v8;
  v14 = *(_DWORD *)(v4 + 92);
  *(_DWORD *)(v4 + 92) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


void __fastcall ResourcePackFileDownloaderManager::cancel(ResourcePackFileDownloaderManager *this)
{
  ResourcePackFileDownloaderManager::cancel(this);
}


int __fastcall ResourcePackFileDownloaderManager::getProgress(ResourcePackFileDownloaderManager *this)
{
  int v1; // r1@1
  bool v2; // zf@1
  int result; // r0@4

  v1 = *(_DWORD *)(*((_DWORD *)this + 6) - 12);
  v2 = v1 == 0;
  if ( v1 )
    v2 = *(_DWORD *)(*((_DWORD *)this + 5) - 12) == 0;
  if ( v2 )
    result = 0;
  else
    result = j_j_j__ZNK18UploadChunkManager11getProgressEv((ResourcePackFileDownloaderManager *)((char *)this + 48));
  return result;
}


void __fastcall ResourcePackFileDownloaderManager::cancel(ResourcePackFileDownloaderManager *this)
{
  ResourcePackFileDownloaderManager *v1; // r4@1

  v1 = this;
  sub_21E7EE0((const void **)this + 6, 0, *(_BYTE **)(*((_DWORD *)this + 6) - 12), 0);
  sub_21E7EE0((const void **)v1 + 5, 0, *(_BYTE **)(*((_DWORD *)v1 + 5) - 12), 0);
  UploadChunkManager::reset((ResourcePackFileDownloaderManager *)((char *)v1 + 48));
  j_j_j__ZN33ResourcePackFileDownloaderManager19_completionCallbackEbRKSs((int)v1, 0, (int *)&Util::EMPTY_STRING);
}


void __fastcall ResourcePackFileDownloaderManager::_completionCallback(int a1, int a2, int *a3)
{
  ResourcePackFileDownloaderManager::_completionCallback(a1, a2, a3);
}


void __fastcall ResourcePackFileDownloaderManager::_requestChunk(ResourcePackFileDownloaderManager *this, int a2)
{
  ResourcePackFileDownloaderManager *v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  void (__cdecl *v5)(_DWORD, _DWORD, _DWORD, _DWORD); // r2@1
  int v6; // r3@1
  void *v7; // r0@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  void **v10; // [sp+0h] [bp-30h]@1
  int v11; // [sp+4h] [bp-2Ch]@1
  int v12; // [sp+8h] [bp-28h]@1
  char v13; // [sp+Ch] [bp-24h]@1
  int v14; // [sp+10h] [bp-20h]@1
  int v15; // [sp+14h] [bp-1Ch]@1

  v2 = this;
  v3 = a2;
  v11 = 2;
  v12 = 1;
  v13 = 0;
  v10 = &off_26E9A1C;
  sub_21E8AF4(&v14, (int *)this + 5);
  v15 = v3;
  v4 = *((_DWORD *)v2 + 3);
  v5 = *(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 12);
  v12 = 0;
  v5(v4, &v10, v5, v6);
  v7 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v14 - 4);
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


void __fastcall ResourcePackFileDownloaderManager::~ResourcePackFileDownloaderManager(ResourcePackFileDownloaderManager *this)
{
  ResourcePackFileDownloaderManager *v1; // r0@1

  v1 = ResourcePackFileDownloaderManager::~ResourcePackFileDownloaderManager(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall ResourcePackFileDownloaderManager::_confirmChunkReceived(ResourcePackFileDownloaderManager *this, const UploadChunkInfo *a2)
{
  ResourcePackFileDownloaderManager *v2; // r4@1
  UploadChunkManager *v3; // r5@1
  int result; // r0@1
  int v5; // r1@2

  v2 = this;
  v3 = (ResourcePackFileDownloaderManager *)((char *)this + 48);
  UploadChunkManager::confirmChunkReceived((ResourcePackFileDownloaderManager *)((char *)this + 48), a2);
  result = *((_DWORD *)v2 + 26);
  if ( result )
  {
    v5 = UploadChunkManager::getProgress(v3);
    if ( !*((_DWORD *)v2 + 26) )
      sub_21E5F48();
    result = (*((int (__fastcall **)(_DWORD, _DWORD))v2 + 27))((char *)v2 + 96, v5);
  }
  return result;
}


int __fastcall ResourcePackFileDownloaderManager::deleteFilesOnDestruction(int result, bool a2)
{
  *(_BYTE *)(result + 40) = a2;
  return result;
}


void __fastcall ResourcePackFileDownloaderManager::downloadFile(int a1, int *a2, _DWORD *a3, unsigned int a4, int a5, int a6, unsigned __int64 a7, const void **a8)
{
  int v8; // r4@1
  _DWORD *v9; // r11@1
  _DWORD *v10; // r8@1
  _BYTE *v11; // r7@1
  _DWORD *v12; // r0@2
  int *v13; // r6@2
  size_t v14; // r2@2
  _DWORD *v15; // r1@3
  unsigned int v16; // r8@8
  char v17; // r5@10
  __int64 v18; // r2@15
  void *v19; // r0@17
  __int64 v20; // r2@18
  int *v21; // r5@18
  void *v22; // r0@18
  unsigned int *v23; // r2@19
  signed int v24; // r1@21
  __int64 v25; // r2@23
  int *v26; // r0@24
  int v27; // r1@24
  void *v28; // r0@24
  unsigned int *v29; // r2@28
  unsigned int *v30; // r2@33
  signed int v31; // r1@35
  int v32; // [sp+4h] [bp-8Ch]@25
  int v33; // [sp+8h] [bp-88h]@25
  char v34; // [sp+Ch] [bp-84h]@25
  void (*v35)(void); // [sp+14h] [bp-7Ch]@25
  int v36; // [sp+20h] [bp-70h]@24
  int v37; // [sp+24h] [bp-6Ch]@23
  int v38; // [sp+28h] [bp-68h]@18
  int v39; // [sp+2Ch] [bp-64h]@15
  int v40; // [sp+30h] [bp-60h]@15
  int v41; // [sp+34h] [bp-5Ch]@15
  char v42; // [sp+38h] [bp-58h]@15
  void (*v43)(void); // [sp+40h] [bp-50h]@15
  int v44; // [sp+4Ch] [bp-44h]@10
  int v45; // [sp+50h] [bp-40h]@10
  char v46; // [sp+54h] [bp-3Ch]@10
  void (*v47)(void); // [sp+5Ch] [bp-34h]@10
  char v48; // [sp+64h] [bp-2Ch]@10

  v8 = a1;
  v9 = a3;
  v10 = *(_DWORD **)(a1 + 24);
  v11 = (_BYTE *)*(v10 - 3);
  if ( v11 )
  {
    v13 = (int *)(a1 + 20);
    v12 = *(_DWORD **)(a1 + 20);
    v14 = *(v12 - 3);
    if ( v14 )
    {
      v15 = (_DWORD *)*a2;
      if ( v14 == *(v15 - 3) && !memcmp(v12, v15, v14) && v11 == *((_BYTE **)*a8 - 3) && !memcmp(v10, *a8, (size_t)v11) )
      {
        j_j_j__ZN33ResourcePackFileDownloaderManager16requestNextChunkEv((ResourcePackFileDownloaderManager *)v8);
      }
      else
        sub_21E7EE0((const void **)(v8 + 24), 0, v11, 0);
        sub_21E7EE0((const void **)(v8 + 20), 0, *(_BYTE **)(*(_DWORD *)(v8 + 20) - 12), 0);
        UploadChunkManager::reset((UploadChunkManager *)(v8 + 48));
        j_j_j__ZN33ResourcePackFileDownloaderManager19_completionCallbackEbRKSs(v8, 0, (int *)&Util::EMPTY_STRING);
      return;
    }
    v16 = a4;
  }
  else
  EntityInteraction::setInteractText(v13, a2);
  EntityInteraction::setInteractText((int *)(v8 + 24), (int *)a8);
  v44 = *(_DWORD *)(v8 + 28);
  v45 = *(_DWORD *)(v44 - 12);
  Core::FileSystem::createDirectoryRecursively((int)&v46, (__int64 *)&v44);
  v17 = v48;
  v48 |= 2u;
  if ( v47 )
    v47();
  if ( !(v17 & 1) )
    sub_21E7EE0((const void **)(v8 + 24), 0, *(_BYTE **)(*(_DWORD *)(v8 + 24) - 12), 0);
    sub_21E7EE0((const void **)v13, 0, *(_BYTE **)(*(_DWORD *)(v8 + 20) - 12), 0);
    UploadChunkManager::reset((UploadChunkManager *)(v8 + 48));
    ResourcePackFileDownloaderManager::_completionCallback(v8, 0, (int *)&Util::EMPTY_STRING);
    return;
  if ( *(_DWORD *)(*v9 - 12) )
    LODWORD(v18) = *(_DWORD *)(v8 + 28);
    HIDWORD(v18) = *v9;
    Util::format((Util *)&v39, "%s/%s", v18);
    v40 = v39;
    v41 = *(_DWORD *)(v39 - 12);
    Core::FileSystem::createDirectoryRecursively((int)&v42, (__int64 *)&v40);
    if ( v43 )
      v43();
    v19 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v39 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    LODWORD(v20) = *(_DWORD *)(v8 + 28);
    HIDWORD(v20) = *v9;
    Util::format((Util *)&v38, "%s/%s/%s", v20, *(_DWORD *)(v8 + 20));
    v21 = (int *)(v8 + 36);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)(v8 + 36),
      &v38);
    v22 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) == &dword_28898C0 )
      goto LABEL_24;
    v23 = (unsigned int *)(v38 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      goto LABEL_46;
    goto LABEL_45;
  HIDWORD(v25) = *(_DWORD *)(v8 + 20);
  LODWORD(v25) = *(_DWORD *)(v8 + 28);
  Util::format((Util *)&v37, "%s/%s", v25);
  v21 = (int *)(v8 + 36);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v8 + 36),
    &v37);
  v22 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v37 - 4);
LABEL_46:
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
LABEL_45:
    v24 = (*v23)--;
    goto LABEL_46;
LABEL_24:
  v26 = sub_21E8AF4(&v36, v21);
  sub_21E7408((const void **)v26, ".zip", 4u);
    (int *)(v8 + 32),
    &v36);
  v27 = v36;
  v28 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v36 - 4);
        v27 = __ldrex(v29);
      while ( __strex(v27 - 1, v29) );
    else
      v27 = (*v29)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  UploadChunkManager::reset((UploadChunkManager *)(v8 + 48), v27, a7, v16);
  v32 = *(_DWORD *)(v8 + 32);
  v33 = -1;
  Core::FileSystem::createEmptyFile((int)&v34, (__int64 *)&v32);
  if ( v35 )
    v35();
  ResourcePackFileDownloaderManager::requestNextChunk((ResourcePackFileDownloaderManager *)v8);
}


void __fastcall ResourcePackFileDownloaderManager::_requestChunk(ResourcePackFileDownloaderManager *this, int a2)
{
  ResourcePackFileDownloaderManager::_requestChunk(this, a2);
}
