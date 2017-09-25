

int __fastcall PackDownloader::PackDownloader(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, int *a7, unsigned __int64 *a8, int *a9, char a10)
{
  int v10; // r7@1
  int v11; // r11@1
  int v12; // r8@1
  int v13; // r10@1
  int v14; // r5@1
  unsigned int *v15; // r1@2
  unsigned int v16; // r0@4
  unsigned int *v17; // r6@8
  unsigned int v18; // r0@10
  int v19; // r5@15
  unsigned int *v20; // r1@16
  unsigned int v21; // r0@18
  unsigned int *v22; // r6@22
  unsigned int v23; // r0@24
  int v24; // r5@29
  unsigned int *v25; // r1@30
  unsigned int v26; // r0@32
  unsigned int *v27; // r6@36
  unsigned int v28; // r0@38
  int *v29; // r1@43
  int v30; // r12@43
  int v31; // r9@43
  unsigned int *v32; // r6@44
  unsigned int v33; // r0@46
  unsigned int *v34; // r6@50
  unsigned int v35; // r0@52
  int v36; // r6@56
  void (__fastcall *v37)(int); // r2@56
  int v38; // r0@56
  int *v39; // r9@56
  int v41; // [sp+4h] [bp-4Ch]@1
  int v42; // [sp+8h] [bp-48h]@1
  int v43; // [sp+Ch] [bp-44h]@1
  int v44; // [sp+10h] [bp-40h]@1
  int v45; // [sp+14h] [bp-3Ch]@1
  int v46; // [sp+18h] [bp-38h]@1
  int v47; // [sp+1Ch] [bp-34h]@1
  int v48; // [sp+20h] [bp-30h]@1

  v10 = a2;
  v11 = a1;
  v12 = a4;
  v13 = a3;
  j__ZNSt12__shared_ptrI16SystemFilePickerLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v45);
  v47 = v45;
  v48 = v46;
  v45 = 0;
  v46 = 0;
  j__ZNSt12__shared_ptrI20StreamFileDownloaderLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v41);
  v43 = v41;
  v44 = v42;
  v41 = 0;
  v42 = 0;
  FileDownloadManager::FileDownloadManager(v11, (int)&v47, (int)&v43);
  v14 = v44;
  if ( v44 )
  {
    v15 = (unsigned int *)(v44 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      }
      else
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  }
  v19 = v42;
  if ( v42 )
    v20 = (unsigned int *)(v42 + 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  v24 = v48;
  if ( v48 )
    v25 = (unsigned int *)(v48 + 4);
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
  v29 = (int *)HIDWORD(a6);
  v30 = a5;
  v31 = v46;
  if ( v46 )
    v32 = (unsigned int *)(v46 + 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 == 1 )
      v34 = (unsigned int *)(v31 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 8))(v31);
        v29 = (int *)HIDWORD(a6);
        v30 = a5;
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = *v34;
        --*v34;
      if ( v35 == 1 )
        v36 = v30;
        v37 = *(void (__fastcall **)(int))(*(_DWORD *)v31 + 12);
        v38 = v31;
        v39 = v29;
        v37(v38);
        v30 = v36;
        v29 = v39;
  *(_DWORD *)v11 = &off_26DD0D0;
  *(_DWORD *)(v11 + 104) = v10;
  *(_DWORD *)(v11 + 108) = v13;
  *(_DWORD *)(v11 + 112) = v12;
  *(_DWORD *)(v11 + 116) = v30;
  *(_QWORD *)(v11 + 120) = __PAIR__(a6, HIDWORD(a5));
  sub_119C854((int *)(v11 + 128), v29);
  std::vector<PackIdVersion,std::allocator<PackIdVersion>>::vector(v11 + 132, (unsigned __int64 *)a7);
  sub_119C854((int *)(v11 + 144), (int *)a8);
  *(_DWORD *)(v11 + 156) = 0;
  *(_QWORD *)(v11 + 164) = (unsigned int)&unk_28898CC;
  *(_DWORD *)(v11 + 172) = 0;
  *(_BYTE *)(v11 + 176) = (_BYTE)a9;
  return v11;
}


RakNet *__fastcall PackDownloader::cancelDownload(PackDownloader *this)
{
  PackDownloader *v1; // r4@1
  int v2; // r0@1
  RakNet *result; // r0@1
  int v4; // r0@2
  int v5; // [sp+4h] [bp-2Ch]@2
  int v6; // [sp+8h] [bp-28h]@2
  char v7; // [sp+Ch] [bp-24h]@2
  int (*v8)(void); // [sp+14h] [bp-1Ch]@2
  int v9; // [sp+20h] [bp-10h]@1
  int v10; // [sp+24h] [bp-Ch]@1

  v1 = this;
  FileDownloadManager::cancelDownload(this);
  v2 = *((_DWORD *)v1 + 41);
  v9 = v2;
  v10 = *(_DWORD *)(v2 - 12);
  result = (RakNet *)Core::FileSystem::fileExists((__int64 *)&v9);
  if ( result == (RakNet *)1 )
  {
    v4 = *((_DWORD *)v1 + 41);
    v5 = v4;
    v6 = *(_DWORD *)(v4 - 12);
    result = Core::FileSystem::deleteFile((int)&v7, (__int64 *)&v5);
    if ( v8 )
      result = (RakNet *)v8();
  }
  return result;
}


void __fastcall PackDownloader::~PackDownloader(PackDownloader *this)
{
  PackDownloader *v1; // r0@1

  v1 = PackDownloader::~PackDownloader(this);
  j_j_j__ZdlPv_4((void *)v1);
}


RakNet *__fastcall PackDownloader::downloadContent(int a1, int *a2, __int64 a3, int a4, int a5)
{
  int v5; // r6@1
  _DWORD *v6; // r10@1
  int v7; // r8@1
  int *v8; // r9@1
  int v9; // r0@1
  int v10; // r1@2
  __int64 v11; // kr00_8@4
  void (*v12)(void); // r3@4
  __int64 v13; // r4@6
  int *v14; // r0@6
  __int64 v15; // r0@6
  int *v16; // r7@6
  void *v17; // r0@6
  void *v18; // r0@7
  __int64 v19; // r4@10
  _DWORD *v20; // r0@15
  __int64 v21; // r1@15
  RakNet *result; // r0@17
  unsigned int *v23; // r2@19
  signed int v24; // r1@21
  unsigned int *v25; // r2@23
  signed int v26; // r1@25
  _DWORD *v27; // [sp+10h] [bp-4B0h]@15
  __int64 v28; // [sp+18h] [bp-4A8h]@15
  int v29; // [sp+20h] [bp-4A0h]@12
  int v30; // [sp+24h] [bp-49Ch]@12
  char v31; // [sp+28h] [bp-498h]@12
  void (*v32)(void); // [sp+30h] [bp-490h]@12
  int v33; // [sp+3Ch] [bp-484h]@10
  int v34; // [sp+40h] [bp-480h]@10
  char v35; // [sp+44h] [bp-47Ch]@10
  void (*v36)(void); // [sp+4Ch] [bp-474h]@10
  __int64 v37; // [sp+58h] [bp-468h]@10
  int v38; // [sp+60h] [bp-460h]@9
  int v39; // [sp+64h] [bp-45Ch]@9
  int v40; // [sp+68h] [bp-458h]@6
  int v41; // [sp+6Ch] [bp-454h]@6
  __int64 v42; // [sp+70h] [bp-450h]@2
  void (*v43)(void); // [sp+78h] [bp-448h]@1
  int v44; // [sp+7Ch] [bp-444h]@2
  __int64 v45; // [sp+80h] [bp-440h]@6
  __int64 v46; // [sp+88h] [bp-438h]@6
  char v47; // [sp+94h] [bp-42Ch]@6
  int v48; // [sp+98h] [bp-428h]@6
  RakNet *v49; // [sp+49Ch] [bp-24h]@1

  v5 = a1;
  v6 = (_DWORD *)HIDWORD(a3);
  v7 = a3;
  v8 = a2;
  v49 = _stack_chk_guard;
  *(_DWORD *)(a1 + 40) = 1;
  v9 = 0;
  v43 = 0;
  HIDWORD(a3) = *(_DWORD *)(a5 + 8);
  if ( HIDWORD(a3) )
  {
    ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))HIDWORD(a3))(&v42, a5, 2);
    v9 = *(_DWORD *)(a5 + 12);
    v44 = *(_DWORD *)(a5 + 12);
    v10 = *(_DWORD *)(a5 + 8);
    v43 = *(void (**)(void))(a5 + 8);
    a3 = v42;
  }
  else
    v10 = 0;
  v11 = *(_QWORD *)(v5 + 148);
  v42 = *(_QWORD *)(v5 + 148);
  *(_QWORD *)(v5 + 148) = a3;
  v43 = *(void (**)(void))(v5 + 156);
  v12 = v43;
  *(_DWORD *)(v5 + 156) = v10;
  v44 = *(_DWORD *)(v5 + 160);
  *(_DWORD *)(v5 + 160) = v9;
  if ( v12 )
    v12();
  LODWORD(v13) = *v6;
  HIDWORD(v13) = *(_DWORD *)(*v6 - 12);
  v14 = sub_119C854(&v40, v8);
  sub_119C894((const void **)v14, ".partial", 8u);
  LODWORD(v15) = v40;
  HIDWORD(v15) = *(_DWORD *)(v40 - 12);
  v45 = v13;
  v46 = v15;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v47, (int)&v45, 2);
  sub_119C884((void **)&v41, (const char *)&v48);
  v16 = (int *)(v5 + 164);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v5 + 164),
    &v41);
  v17 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v41 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    }
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  v18 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v40 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  if ( a4 != 1
    || (v38 = *v16, v39 = *(_DWORD *)(v38 - 12), Core::FileSystem::fileOrDirectoryExists((__int64 *)&v38) != 1) )
    v29 = *v16;
    v30 = *(_DWORD *)(v29 - 12);
    Core::FileSystem::deleteFile((int)&v31, (__int64 *)&v29);
    if ( v32 )
      v32();
    v19 = 0LL;
    v37 = 0LL;
    v33 = *v16;
    v34 = *(_DWORD *)(v33 - 12);
    Core::FileSystem::getFileOrDirectorySize((int)&v35, (__int64 *)&v33, (int)&v37);
    v19 = v37;
    if ( v36 )
      v36();
  v20 = operator new(4u);
  LODWORD(v21) = sub_F68840;
  *v20 = v5;
  HIDWORD(v21) = sub_F685B4;
  v27 = v20;
  v28 = v21;
  FileDownloadManager::downloadFile(v5, (int)v8, v7, (int *)(v5 + 164), v19, SHIDWORD(v19), (int)&v27);
  if ( (_DWORD)v28 )
    ((void (*)(void))v28)();
  result = (RakNet *)(_stack_chk_guard - v49);
  if ( _stack_chk_guard != v49 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall PackDownloader::~PackDownloader(PackDownloader *this)
{
  PackDownloader::~PackDownloader(this);
}


PackDownloader *__fastcall PackDownloader::~PackDownloader(PackDownloader *this)
{
  PackDownloader *v1; // r8@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r1@15
  void *v8; // r0@15
  void (*v9)(void); // r3@16
  int v10; // r1@18
  void *v11; // r0@18
  int v12; // r5@19
  int v13; // r7@19
  unsigned int *v14; // r2@21
  signed int v15; // r1@23
  unsigned int *v16; // r2@25
  signed int v17; // r1@27
  unsigned int *v18; // r2@29
  signed int v19; // r1@31
  int v20; // r1@45
  void *v21; // r0@45
  int v22; // r1@46
  void *v23; // r0@46
  int v24; // r1@47
  void *v25; // r0@47
  int v26; // r1@52
  void *v27; // r0@52
  unsigned int *v29; // r2@54
  signed int v30; // r1@56
  unsigned int *v31; // r2@58
  signed int v32; // r1@60
  unsigned int *v33; // r2@62
  signed int v34; // r1@64

  v1 = this;
  *(_DWORD *)this = &off_26DD0D0;
  v2 = *((_DWORD *)this + 43);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  v7 = *((_DWORD *)v1 + 41);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v7 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = (void (*)(void))*((_DWORD *)v1 + 39);
  if ( v9 )
    v9();
  v10 = *((_DWORD *)v1 + 36);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v10 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v13 = *(_QWORD *)((char *)v1 + 132) >> 32;
  v12 = *(_QWORD *)((char *)v1 + 132);
  if ( v12 != v13 )
    do
      v20 = *(_DWORD *)(v12 + 32);
      v21 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v20 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v21);
      v22 = *(_DWORD *)(v12 + 28);
      v23 = (void *)(v22 - 12);
      if ( (int *)(v22 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v22 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v23);
      v24 = *(_DWORD *)(v12 + 24);
      v25 = (void *)(v24 - 12);
      if ( (int *)(v24 - 12) != &dword_28898C0 )
        v18 = (unsigned int *)(v24 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v25);
      v12 += 48;
    while ( v12 != v13 );
    v12 = *((_DWORD *)v1 + 33);
  if ( v12 )
    operator delete((void *)v12);
  v26 = *((_DWORD *)v1 + 32);
  v27 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v26 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  FileDownloadManager::~FileDownloadManager(v1);
  return v1;
}


RakNet *__fastcall PackDownloader::_onDownloadComplete(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  void *v5; // r0@4
  void *v6; // r0@6
  __int64 v7; // kr00_8@9
  __int64 v8; // kr08_8@9
  int v9; // r6@9
  int v10; // r8@9
  _DWORD *v11; // r0@9
  _DWORD *v12; // r0@11
  int v13; // r5@11
  unsigned int *v14; // r1@12
  unsigned int v15; // r0@14
  int (__fastcall *v16)(int, signed int); // r2@17
  RakNet *result; // r0@17
  unsigned int *v18; // r6@21
  unsigned int v19; // r0@23
  int v20; // r0@28
  int v21; // r1@28
  unsigned int *v22; // r1@29
  unsigned int v23; // r2@31
  int v24; // r4@34
  unsigned int *v25; // r1@35
  unsigned int v26; // r0@37
  unsigned int *v27; // r5@41
  unsigned int v28; // r0@43
  void *v29; // r0@48
  unsigned int *v30; // r2@51
  signed int v31; // r1@53
  unsigned int *v32; // r2@55
  signed int v33; // r1@57
  unsigned int *v34; // r2@59
  signed int v35; // r1@61
  void *ptr; // [sp+20h] [bp-4A8h]@9
  int v37; // [sp+24h] [bp-4A4h]@28
  int v38; // [sp+28h] [bp-4A0h]@28
  int v39; // [sp+2Ch] [bp-49Ch]@7
  int v40; // [sp+30h] [bp-498h]@7
  int v41; // [sp+34h] [bp-494h]@7
  int v42; // [sp+38h] [bp-490h]@7
  char v43; // [sp+3Ch] [bp-48Ch]@7
  void (*v44)(void); // [sp+44h] [bp-484h]@7
  int v45; // [sp+50h] [bp-478h]@6
  int v46; // [sp+54h] [bp-474h]@6
  int v47; // [sp+58h] [bp-470h]@6
  int v48; // [sp+5Ch] [bp-46Ch]@5
  int v49; // [sp+60h] [bp-468h]@2
  int v50; // [sp+64h] [bp-464h]@2
  int v51; // [sp+68h] [bp-460h]@2
  char v52; // [sp+6Ch] [bp-45Ch]@2
  void (*v53)(void); // [sp+74h] [bp-454h]@2
  _DWORD *v54; // [sp+84h] [bp-444h]@9
  void (*v55)(void); // [sp+8Ch] [bp-43Ch]@9
  int (__fastcall *v56)(int **, int); // [sp+90h] [bp-438h]@9
  char v57; // [sp+98h] [bp-430h]@6
  int v58; // [sp+9Ch] [bp-42Ch]@6
  RakNet *v59; // [sp+4A0h] [bp-28h]@1

  v3 = a1;
  v4 = a3;
  v59 = _stack_chk_guard;
  if ( a2 )
  {
    ResourcePackRepository::getPremiumPackPath((ResourcePackRepository *)&v49);
    v50 = v49;
    v51 = *(_DWORD *)(v49 - 12);
    Core::FileSystem::createDirectoryRecursively((int)&v52, (__int64 *)&v50);
    if ( v53 )
      v53();
    v5 = (void *)(v49 - 12);
    if ( (int *)(v49 - 12) != &dword_28898C0 )
    {
      v30 = (unsigned int *)(v49 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
      }
      else
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    sub_119C854(&v48, v4);
    if ( *(_DWORD *)(*(_DWORD *)(v3 + 144) - 12) )
      v45 = *v4;
      v46 = *(_DWORD *)(v45 - 12);
      Core::PathBuffer<Core::StackString<char,1024u>>::getEntryExtensionWithoutDot((int)&v57, (__int64 *)&v45);
      sub_119C884((void **)&v47, (const char *)&v58);
      Util::stringReplace(&v48, (_BYTE **)&v47, (char **)(v3 + 144), -1);
      v6 = (void *)(v47 - 12);
      if ( (int *)(v47 - 12) != &dword_28898C0 )
        v34 = (unsigned int *)(v47 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v6);
      v41 = *v4;
      v42 = *(_DWORD *)(v41 - 12);
      v39 = v48;
      v40 = *(_DWORD *)(v48 - 12);
      Core::FileSystem::renameFileOrDirectory((int)&v43, (__int64 *)&v41, (__int64 *)&v39);
      if ( v44 )
        v44();
    *(_DWORD *)(v3 + 40) = 3;
    v7 = *(_QWORD *)(v3 + 108);
    v8 = *(_QWORD *)(v3 + 116);
    v9 = *(_DWORD *)(v3 + 124);
    ptr = operator new(0x60u);
    v10 = *(_BYTE *)(v3 + 176);
    v11 = operator new(4u);
    *v11 = v3;
    v54 = v11;
    v55 = (void (*)(void))sub_F68996;
    v56 = sub_F6892C;
    DlcImportContext::DlcImportContext(
      (int)ptr,
      v7,
      SHIDWORD(v7),
      v8,
      SHIDWORD(v8),
      v9,
      (int *)(v3 + 128),
      (unsigned __int64 *)(v3 + 132),
      &v48,
      v10 != 0,
      (int)&v54);
    if ( v55 )
      v55();
    v12 = operator new(0x14u);
    v12[1] = 1;
    v12[2] = 1;
    *v12 = &off_26DD110;
    v12[4] = ptr;
    *(_DWORD *)(v3 + 168) = ptr;
    v13 = *(_DWORD *)(v3 + 172);
    *(_DWORD *)(v3 + 172) = v12;
    if ( v13 )
      v14 = (unsigned int *)(v13 + 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 == 1 )
        v18 = (unsigned int *)(v13 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
    (*(void (**)(void))(**(_DWORD **)(v3 + 168) + 8))();
    v20 = *(_DWORD *)(v3 + 104);
    v37 = *(_DWORD *)(v3 + 168);
    v21 = *(_DWORD *)(v3 + 172);
    v38 = v21;
    if ( v21 )
      v22 = (unsigned int *)(v21 + 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 + 1, v22) );
        ++*v22;
    ExternalContentManager::importContent(v20, (int)&v37, (int)&v48, 0, 0);
    v24 = v38;
    if ( v38 )
      v25 = (unsigned int *)(v38 + 4);
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
    v29 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v48 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v29);
    result = (RakNet *)(_stack_chk_guard - v59);
    if ( _stack_chk_guard != v59 )
      goto LABEL_50;
  }
  else
    *(_DWORD *)(a1 + 40) = 5;
    if ( !*(_DWORD *)(a1 + 156) )
      sub_119C8E4();
    v16 = *(int (__fastcall **)(int, signed int))(a1 + 160);
LABEL_50:
      _stack_chk_fail(result);
    result = (RakNet *)v16(v3 + 148, 5);
  return result;
}


char *__fastcall PackDownloader::getId(PackDownloader *this)
{
  return (char *)this + 128;
}


int __fastcall PackDownloader::getDownloadProgress(PackDownloader *this)
{
  int result; // r0@2
  int v2; // r0@3

  if ( *((_DWORD *)this + 10) == 3 )
  {
    v2 = *((_DWORD *)this + 42);
    if ( v2 )
      result = j_j_j__ZN8ZipUtils15ZipProgressList11getProgressEv((ZipUtils::ZipProgressList *)(v2 + 4));
    else
      result = 0;
  }
  else
    result = j_j_j__ZNK19FileDownloadManager19getDownloadProgressEv(this);
  return result;
}
