

DownloadMonitor *__fastcall DownloadMonitor::~DownloadMonitor(DownloadMonitor *this)
{
  DownloadMonitor *v1; // r8@1
  char *v2; // r0@1
  _DWORD *v3; // r4@4
  unsigned int *v4; // r2@6
  signed int v5; // r1@8
  _DWORD *v6; // r6@14
  DownloadMonitor::CachedContentDetails *v7; // r0@14
  int v8; // r1@14
  void *v9; // r0@14
  char *v10; // r0@16
  int v11; // r4@19
  unsigned int *v12; // r2@21
  signed int v13; // r1@23
  void *v14; // r6@29
  int v15; // r1@29
  void *v16; // r0@29
  char *v17; // r0@31
  int v18; // r4@34
  int v19; // r5@34
  void (*v20)(void); // r3@35
  int v21; // r0@37
  unsigned int *v22; // r2@38
  unsigned int v23; // r1@40
  void *v24; // r4@49
  void *v25; // r5@49
  unsigned int *v26; // r2@51
  signed int v27; // r1@53
  int *v28; // r0@59
  int v29; // r5@64
  int v30; // r7@64
  int v31; // r4@65
  unsigned int *v32; // r1@66
  unsigned int v33; // r0@68
  unsigned int *v34; // r6@72
  unsigned int v35; // r0@74
  int v36; // r5@83
  int v37; // r7@83
  int v38; // r4@84
  unsigned int *v39; // r1@85
  unsigned int v40; // r0@87
  unsigned int *v41; // r6@91
  unsigned int v42; // r0@93
  int v43; // r1@102
  void *v44; // r0@102
  unsigned int *v46; // r2@104
  signed int v47; // r1@106

  v1 = this;
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)this + 176);
  v2 = (char *)*((_DWORD *)v1 + 44);
  if ( v2 && (char *)v1 + 200 != v2 )
    operator delete(v2);
  v3 = (_DWORD *)*((_DWORD *)v1 + 39);
  while ( v3 )
  {
    v6 = v3;
    v7 = (DownloadMonitor::CachedContentDetails *)(v3 + 2);
    v3 = (_DWORD *)*v3;
    DownloadMonitor::CachedContentDetails::~CachedContentDetails(v7);
    v8 = v6[1];
    v9 = (void *)(v8 - 12);
    if ( (int *)(v8 - 12) != &dword_28898C0 )
    {
      v4 = (unsigned int *)(v8 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v5 = __ldrex(v4);
        while ( __strex(v5 - 1, v4) );
      }
      else
        v5 = (*v4)--;
      if ( v5 <= 0 )
        j_j_j_j_j__ZdlPv_9(v9);
    }
    operator delete(v6);
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 148), 4 * (*(_QWORD *)((char *)v1 + 148) >> 32));
  *((_DWORD *)v1 + 39) = 0;
  *((_DWORD *)v1 + 40) = 0;
  v10 = (char *)*((_DWORD *)v1 + 37);
  if ( v10 && (char *)v1 + 172 != v10 )
    operator delete(v10);
  v11 = *((_DWORD *)v1 + 32);
  while ( v11 )
    v14 = (void *)v11;
    v15 = *(_DWORD *)(v11 + 8);
    v11 = *(_DWORD *)v11;
    v16 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v15 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9(v16);
    operator delete(v14);
  _aeabi_memclr4(*((_QWORD *)v1 + 15), 4 * (*((_QWORD *)v1 + 15) >> 32));
  *((_DWORD *)v1 + 32) = 0;
  *((_DWORD *)v1 + 33) = 0;
  v17 = (char *)*((_DWORD *)v1 + 30);
  if ( v17 && (char *)v1 + 144 != v17 )
    operator delete(v17);
  v18 = *(_QWORD *)((char *)v1 + 108) >> 32;
  v19 = *(_QWORD *)((char *)v1 + 108);
  if ( v19 != v18 )
    do
      v20 = *(void (**)(void))(v19 + 20);
      if ( v20 )
        v20();
      v21 = *(_DWORD *)(v19 + 8);
      if ( v21 )
        v22 = (unsigned int *)(v21 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
        }
        else
          v23 = (*v22)--;
        if ( v23 == 1 )
          (*(void (**)(void))(*(_DWORD *)v21 + 12))();
      v19 += 28;
    while ( v19 != v18 );
    v19 = *((_DWORD *)v1 + 27);
  if ( v19 )
    operator delete((void *)v19);
  v24 = (void *)(*((_QWORD *)v1 + 12) >> 32);
  v25 = (void *)*((_QWORD *)v1 + 12);
  if ( v25 != v24 )
      v28 = (int *)(*(_DWORD *)v25 - 12);
      if ( v28 != &dword_28898C0 )
        v26 = (unsigned int *)(*(_DWORD *)v25 - 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j_j__ZdlPv_9(v28);
      v25 = (char *)v25 + 4;
    while ( v25 != v24 );
    v25 = (void *)*((_DWORD *)v1 + 24);
  if ( v25 )
    operator delete(v25);
  v30 = *(_QWORD *)((char *)v1 + 84) >> 32;
  v29 = *(_QWORD *)((char *)v1 + 84);
  if ( v29 != v30 )
      v31 = *(_DWORD *)(v29 + 4);
      if ( v31 )
        v32 = (unsigned int *)(v31 + 4);
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
          v33 = (*v32)--;
        if ( v33 == 1 )
          v34 = (unsigned int *)(v31 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 8))(v31);
          if ( &pthread_create )
          {
            __dmb();
            do
              v35 = __ldrex(v34);
            while ( __strex(v35 - 1, v34) );
          }
          else
            v35 = (*v34)--;
          if ( v35 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 12))(v31);
      v29 += 8;
    while ( v29 != v30 );
    v29 = *((_DWORD *)v1 + 21);
  if ( v29 )
    operator delete((void *)v29);
  v37 = *((_QWORD *)v1 + 9) >> 32;
  v36 = *((_QWORD *)v1 + 9);
  if ( v36 != v37 )
      v38 = *(_DWORD *)(v36 + 4);
      if ( v38 )
        v39 = (unsigned int *)(v38 + 4);
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
          v40 = (*v39)--;
        if ( v40 == 1 )
          v41 = (unsigned int *)(v38 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 8))(v38);
              v42 = __ldrex(v41);
            while ( __strex(v42 - 1, v41) );
            v42 = (*v41)--;
          if ( v42 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 12))(v38);
      v36 += 8;
    while ( v36 != v37 );
    v36 = *((_DWORD *)v1 + 18);
  if ( v36 )
    operator delete((void *)v36);
  v43 = *((_DWORD *)v1 + 9);
  v44 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v43 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
    else
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9(v44);
  return v1;
}


int __fastcall DownloadMonitor::getDownloadProgress(int a1, unsigned __int64 *a2)
{
  const void **v6; // r5@1
  const void **v7; // r8@1
  int v8; // r4@1
  PackDownloader **v9; // r6@4
  PackDownloader **v10; // r7@4
  _DWORD *v11; // r0@5
  size_t v12; // r2@5
  int result; // r0@11

  __asm { VMOV.F32        S16, #1.0 }
  v7 = (const void **)(*a2 >> 32);
  v6 = (const void **)*a2;
  v8 = a1;
  while ( v6 != v7 )
  {
    v9 = (PackDownloader **)(*(_QWORD *)(v8 + 84) >> 32);
    v10 = (PackDownloader **)*(_QWORD *)(v8 + 84);
    if ( v10 != v9 )
    {
      while ( 1 )
      {
        v11 = *(_DWORD **)PackDownloader::getId(*v10);
        v12 = *(v11 - 3);
        if ( v12 == *((_DWORD *)*v6 - 3) && !memcmp(v11, *v6, v12) )
          break;
        v10 += 2;
        if ( v9 == v10 )
          goto LABEL_2;
      }
      if ( *v10 )
        _R0 = (*(int (**)(void))(*(_DWORD *)*v10 + 16))();
        __asm
        {
          VMOV            S0, R0
          VMUL.F32        S16, S0, S16
        }
    }
LABEL_2:
    ++v6;
  }
  __asm { VMOV            R0, S16 }
  return result;
}


__int64 __fastcall DownloadMonitor::getDownloadedBytes(int a1, unsigned __int64 *a2)
{
  const void **v2; // r7@1
  const void **v3; // r10@1
  int v4; // r5@1
  __int64 v5; // r8@1
  PackDownloader **v6; // r4@4
  PackDownloader **v7; // r6@4
  _DWORD *v8; // r0@5
  size_t v9; // r2@5
  __int64 v10; // r0@10

  v3 = (const void **)(*a2 >> 32);
  v2 = (const void **)*a2;
  v4 = a1;
  v5 = 0LL;
  while ( v2 != v3 )
  {
    v6 = (PackDownloader **)(*(_QWORD *)(v4 + 84) >> 32);
    v7 = (PackDownloader **)*(_QWORD *)(v4 + 84);
    if ( v7 != v6 )
    {
      while ( 1 )
      {
        v8 = *(_DWORD **)PackDownloader::getId(*v7);
        v9 = *(v8 - 3);
        if ( v9 == *((_DWORD *)*v2 - 3) && !memcmp(v8, *v2, v9) )
          break;
        v7 += 2;
        if ( v6 == v7 )
          goto LABEL_2;
      }
      if ( *v7 )
        LODWORD(v10) = FileDownloadManager::getDownloadSize(*v7);
        v5 += v10;
    }
LABEL_2:
    ++v2;
  }
  return v5;
}


void __fastcall DownloadMonitor::update(DownloadMonitor *this)
{
  DownloadMonitor::update(this);
}


void __fastcall DownloadMonitor::beginDownload(int a1, unsigned __int64 *a2, __int64 a3)
{
  DownloadMonitor::beginDownload(a1, a2, a3);
}


unsigned int __fastcall DownloadMonitor::getDownloadSize(int a1, unsigned __int64 *a2)
{
  int **v2; // r5@1
  int **v3; // r8@1
  unsigned __int64 *v4; // r7@2
  unsigned int v5; // r4@2
  unsigned int v6; // r6@2
  int v7; // r0@3
  unsigned __int64 v8; // kr08_8@4

  v3 = (int **)(*a2 >> 32);
  v2 = (int **)*a2;
  if ( v2 == v3 )
  {
    v5 = 0;
  }
  else
    v4 = (unsigned __int64 *)(a1 + 120);
    v6 = 0;
    do
    {
      v7 = std::_Hashtable<std::string,std::pair<std::string const,DownloadMonitor::DownloadHistory>,std::allocator<std::pair<std::string const,DownloadMonitor::DownloadHistory>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
             v4,
             v2);
      if ( v7 )
      {
        v8 = __PAIR__(v6, v5) + *(_QWORD *)(v7 + 16);
        v6 = (__PAIR__(v6, v5) + *(_QWORD *)(v7 + 16)) >> 32;
        v5 = v8;
      }
      ++v2;
    }
    while ( v3 != v2 );
  return v5;
}


void __fastcall DownloadMonitor::beginDownload(int a1, unsigned __int64 *a2, __int64 a3)
{
  int v3; // r6@1
  const void **v4; // r7@1
  const void **v5; // r10@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  const void *v8; // r8@11
  size_t v9; // r9@11
  PackDownloader **v10; // r5@12
  PackDownloader **v11; // r11@12
  char *v12; // r0@13
  _DWORD *v13; // r0@13
  size_t v14; // r4@13
  __int64 v15; // r4@16
  _DWORD *v16; // r0@17
  __int64 v17; // r0@20
  int v18; // r4@23
  unsigned int *v19; // r1@24
  unsigned int v20; // r0@26
  unsigned int *v21; // r5@32
  unsigned int v22; // r0@34
  void *v23; // r0@39
  _QWORD *v24; // [sp+8h] [bp-58h]@2
  __int64 v25; // [sp+18h] [bp-48h]@1
  int v26; // [sp+20h] [bp-40h]@20
  int v27; // [sp+24h] [bp-3Ch]@3
  char v28; // [sp+28h] [bp-38h]@20
  char v29; // [sp+29h] [bp-37h]@20
  unsigned int v30; // [sp+2Ch] [bp-34h]@20
  int v31; // [sp+30h] [bp-30h]@21
  char v32; // [sp+38h] [bp-28h]@20

  v25 = a3;
  v3 = a1;
  v5 = (const void **)(*a2 >> 32);
  v4 = (const void **)*a2;
  if ( v4 != v5 )
  {
    v24 = (_QWORD *)(a1 + 72);
    do
    {
      v8 = *v4;
      v9 = *((_DWORD *)*v4 - 3);
      if ( v9 )
      {
        v11 = (PackDownloader **)(*(_QWORD *)(v3 + 84) >> 32);
        v10 = (PackDownloader **)*(_QWORD *)(v3 + 84);
        if ( v10 == v11 )
          goto LABEL_16;
        while ( 1 )
        {
          v12 = PackDownloader::getId(*v10);
          v8 = *v4;
          v13 = *(_DWORD **)v12;
          v9 = *((_DWORD *)*v4 - 3);
          v14 = *(v13 - 3);
          if ( v14 == v9 && !memcmp(v13, *v4, *(v13 - 3)) )
            break;
          v10 += 2;
          if ( v11 == v10 )
            goto LABEL_16;
        }
        v9 = v14;
        if ( !*v10 )
LABEL_16:
          v15 = *(_QWORD *)(v3 + 72);
          if ( (_DWORD)v15 == HIDWORD(v15) )
          {
LABEL_20:
            v26 = 0;
            sub_119C854(&v27, (int *)v4);
            v28 = v25;
            v29 = BYTE4(v25);
            std::__shared_ptr<PendingDownloadParams,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<PendingDownloadParams>,PendingDownloadParams>(
              (int)&v30,
              (int)&v32,
              (int)&v26);
            v17 = *(_QWORD *)(v3 + 76);
            if ( (_DWORD)v17 == HIDWORD(v17) )
            {
              std::vector<std::shared_ptr<PendingDownloadParams>,std::allocator<std::shared_ptr<PendingDownloadParams>>>::_M_emplace_back_aux<std::shared_ptr<PendingDownloadParams>>(
                v24,
                (int)&v30);
            }
            else
              *(_QWORD *)v17 = v30;
              HIDWORD(v17) = v31;
              v31 = 0;
              *(_DWORD *)(v17 + 4) = HIDWORD(v17);
              v30 = 0;
              *(_DWORD *)(v3 + 76) = v17 + 8;
            v18 = v31;
            if ( v31 )
              v19 = (unsigned int *)(v31 + 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v20 = __ldrex(v19);
                while ( __strex(v20 - 1, v19) );
              }
              else
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
            v23 = (void *)(v27 - 12);
            if ( (int *)(v27 - 12) != &dword_28898C0 )
              v6 = (unsigned int *)(v27 - 4);
                  v7 = __ldrex(v6);
                while ( __strex(v7 - 1, v6) );
                v7 = (*v6)--;
              if ( v7 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v23);
          }
          else
            while ( 1 )
              v16 = *(_DWORD **)(*(_DWORD *)v15 + 4);
              if ( *(v16 - 3) == v9 && !memcmp(v16, v8, v9) )
                break;
              LODWORD(v15) = v15 + 8;
              if ( HIDWORD(v15) == (_DWORD)v15 )
                goto LABEL_20;
      }
      ++v4;
    }
    while ( v4 != v5 );
  }
}


signed int __fastcall DownloadMonitor::_hasPendingDownloadFor(int a1, const void **a2)
{
  __int64 v2; // r6@1
  const void *v3; // r4@2
  size_t v4; // r5@2
  _DWORD *v5; // r0@3
  signed int result; // r0@6

  v2 = *(_QWORD *)(a1 + 72);
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
LABEL_6:
    result = 0;
  }
  else
    v3 = *a2;
    v4 = *((_DWORD *)*a2 - 3);
    while ( 1 )
    {
      v5 = *(_DWORD **)(*(_DWORD *)v2 + 4);
      if ( *(v5 - 3) == v4 && !memcmp(v5, v3, v4) )
        break;
      LODWORD(v2) = v2 + 8;
      if ( HIDWORD(v2) == (_DWORD)v2 )
        goto LABEL_6;
    }
    result = 1;
  return result;
}


int __fastcall DownloadMonitor::_tryAutoResumeDownload(DownloadMonitor *this)
{
  DownloadMonitor *v1; // r4@1
  __int64 v2; // r0@1
  int v3; // r1@2
  void *v4; // r0@7
  int v5; // r1@9
  void *v6; // r0@13
  int v7; // r0@16
  _DWORD *v8; // r0@16
  _DWORD *v10; // [sp+4h] [bp-3Ch]@16
  int (*v11)(void); // [sp+Ch] [bp-34h]@16
  char *(__fastcall *v12)(int, unsigned int **, const char **); // [sp+10h] [bp-30h]@16
  int v13; // [sp+14h] [bp-2Ch]@16
  int v14; // [sp+18h] [bp-28h]@16
  char v15; // [sp+1Ch] [bp-24h]@16
  int (*v16)(void); // [sp+24h] [bp-1Ch]@16

  v1 = this;
  LODWORD(v2) = getTimeMs();
  if ( *((_BYTE *)v1 + 53) )
  {
    v3 = *((_DWORD *)v1 + 13);
    if ( !(_BYTE)v3
      && (v3 & 0xFF0000
       || (signed int)(*(_QWORD *)((char *)v1 + 44) + (*(_QWORD *)((char *)v1 + 44) >> 32)) <= (signed int)v2) )
    {
      *((_BYTE *)v1 + 54) = 0;
      *((_DWORD *)v1 + 12) = v2;
      *((_BYTE *)v1 + 52) = 1;
      v2 = *(_QWORD *)((char *)v1 + 84);
      if ( (_DWORD)v2 == HIDWORD(v2)
        && (!*(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) ? (v4 = &ServiceLocator<AppPlatform>::mDefaultService) : (v4 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService)),
            LODWORD(v2) = (*(int (**)(void))(**(_DWORD **)v4 + 408))(),
            (_DWORD)v2) )
      {
        *((_BYTE *)v1 + 52) = 0;
        *((_BYTE *)v1 + 53) = 0;
        *((_DWORD *)v1 + 12) = 2147483648;
        v7 = *((_DWORD *)v1 + 9);
        v13 = v7;
        v14 = *(_DWORD *)(v7 - 12);
        v8 = operator new(4u);
        *v8 = v1;
        v10 = v8;
        v11 = (int (*)(void))sub_F655E8;
        v12 = sub_F64F44;
        LODWORD(v2) = Core::FileSystem::iterateOverDirectory((int)&v15, (__int64 *)&v13, 390LL, (int)&v10);
        if ( v16 )
          LODWORD(v2) = v16();
        if ( v11 )
          LODWORD(v2) = v11();
      }
      else
        *((_BYTE *)v1 + 54) = 0;
    }
  }
  else
    LODWORD(v2) = getTimeMs();
    if ( *((_BYTE *)v1 + 65) )
      v5 = *((_DWORD *)v1 + 16);
      if ( !(_BYTE)v5
        && (v5 & 0xFF0000 || (signed int)(*((_QWORD *)v1 + 7) + (*((_QWORD *)v1 + 7) >> 32)) <= (signed int)v2) )
        *((_DWORD *)v1 + 15) = v2;
        *((_BYTE *)v1 + 66) = 0;
        *((_BYTE *)v1 + 64) = 0;
        if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
          v6 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
        else
          v6 = &ServiceLocator<AppPlatform>::mDefaultService;
        if ( (*(int (**)(void))(**(_DWORD **)v6 + 408))() )
        {
          LODWORD(v2) = *((_BYTE *)v1 + 68);
          if ( *((_BYTE *)v1 + 68) )
          {
            *((_BYTE *)v1 + 68) = 0;
            LODWORD(v2) = 1;
            *((_BYTE *)v1 + 53) = 1;
          }
        }
          LODWORD(v2) = 1;
          *((_BYTE *)v1 + 68) = 1;
  return v2;
}


int __fastcall DownloadMonitor::DownloadMonitor(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // r5@1
  int v11; // r1@1
  int v12; // r1@1
  int *v13; // r11@1
  AppPlatform **v14; // r0@2
  int v15; // r0@4
  int v16; // r1@4
  double v17; // r0@4
  double v18; // r0@4
  int v19; // r7@6
  void *v20; // r6@6
  double v21; // r0@7
  int v22; // r7@9
  void *v23; // r6@9
  unsigned int v24; // r0@10
  int v25; // r4@12
  void *v26; // r6@12
  int v28; // [sp+4h] [bp-45Ch]@13
  int v29; // [sp+8h] [bp-458h]@13
  char v30; // [sp+Ch] [bp-454h]@13
  void (*v31)(void); // [sp+14h] [bp-44Ch]@13
  int v32; // [sp+20h] [bp-440h]@4
  int v33; // [sp+24h] [bp-43Ch]@4
  const char *v34; // [sp+28h] [bp-438h]@4
  int v35; // [sp+2Ch] [bp-434h]@4
  char v36; // [sp+30h] [bp-430h]@4
  int v37; // [sp+34h] [bp-42Ch]@4
  RakNet *v38; // [sp+438h] [bp-28h]@1

  v10 = a1;
  v38 = _stack_chk_guard;
  *(_DWORD *)(a1 + 32) = a10;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a9;
  v11 = a1 + 8;
  *(_DWORD *)v11 = a4;
  *(_DWORD *)(v11 + 4) = a5;
  *(_DWORD *)(v11 + 8) = a6;
  v12 = a1 + 20;
  *(_DWORD *)v12 = a3;
  *(_DWORD *)(v12 + 4) = a7;
  *(_DWORD *)(v12 + 8) = a8;
  v13 = (int *)(a1 + 36);
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v14 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v14 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v15 = *AppPlatform::getTempPath(*v14);
  v16 = *(_DWORD *)(v15 - 12);
  v32 = v15;
  v33 = v16;
  v34 = "DownloadTemp";
  v35 = -1;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v36, (int)&v32, 2);
  sub_119C884((void **)(v10 + 36), (const char *)&v37);
  *(_DWORD *)(v10 + 44) = 5000;
  *(_DWORD *)(v10 + 48) = 2147483648;
  *(_BYTE *)(v10 + 52) = 0;
  *(_BYTE *)(v10 + 53) = 1;
  *(_BYTE *)(v10 + 54) = 0;
  *(_DWORD *)(v10 + 56) = 2000;
  *(_DWORD *)(v10 + 60) = 2147483648;
  *(_BYTE *)(v10 + 64) = 0;
  *(_BYTE *)(v10 + 65) = 1;
  *(_BYTE *)(v10 + 66) = 0;
  *(_BYTE *)(v10 + 68) = 0;
  *(_DWORD *)(v10 + 128) = 0;
  *(_DWORD *)(v10 + 132) = 0;
  _aeabi_memclr4(v10 + 72, 48);
  *(_DWORD *)(v10 + 136) = 1065353216;
  LODWORD(v17) = v10 + 136;
  *(_DWORD *)(LODWORD(v17) + 4) = 0;
  v18 = COERCE_DOUBLE(__PAIR__(10, sub_119C844(v17)));
  *(_DWORD *)(v10 + 124) = LODWORD(v18);
  if ( LODWORD(v18) == 1 )
  {
    *(_DWORD *)(v10 + 144) = 0;
    v20 = (void *)(v10 + 144);
  }
    if ( LODWORD(v18) >= 0x40000000 )
      sub_119C874();
    v19 = 4 * LODWORD(v18);
    v20 = operator new(4 * LODWORD(v18));
    _aeabi_memclr4(v20, v19);
  *(_DWORD *)(v10 + 120) = v20;
  *(_DWORD *)(v10 + 156) = 0;
  *(_DWORD *)(v10 + 160) = 0;
  *(_DWORD *)(v10 + 164) = 1065353216;
  LODWORD(v18) = v10 + 164;
  *(_DWORD *)(LODWORD(v18) + 4) = 0;
  v21 = COERCE_DOUBLE(__PAIR__(10, sub_119C844(v18)));
  *(_DWORD *)(v10 + 152) = LODWORD(v21);
  if ( LODWORD(v21) == 1 )
    *(_DWORD *)(v10 + 172) = 0;
    v23 = (void *)(v10 + 172);
    if ( LODWORD(v21) >= 0x40000000 )
    v22 = 4 * LODWORD(v21);
    v23 = operator new(4 * LODWORD(v21));
    _aeabi_memclr4(v23, v22);
  *(_DWORD *)(v10 + 148) = v23;
  *(_DWORD *)(v10 + 184) = 0;
  *(_DWORD *)(v10 + 188) = 0;
  *(_DWORD *)(v10 + 192) = 1065353216;
  *(_DWORD *)(v10 + 196) = 0;
  LODWORD(v21) = v10 + 192;
  v24 = sub_119C844(v21);
  *(_DWORD *)(v10 + 180) = v24;
  if ( v24 == 1 )
    *(_DWORD *)(v10 + 200) = 0;
    v26 = (void *)(v10 + 200);
    if ( v24 >= 0x40000000 )
    v25 = 4 * v24;
    v26 = operator new(4 * v24);
    _aeabi_memclr4(v26, v25);
  *(_DWORD *)(v10 + 176) = v26;
  v28 = *v13;
  v29 = *(_DWORD *)(v28 - 12);
  Core::FileSystem::createDirectoryRecursively((int)&v30, (__int64 *)&v28);
  if ( v31 )
    v31();
  if ( _stack_chk_guard != v38 )
    _stack_chk_fail(_stack_chk_guard - v38);
  return v10;
}


void __fastcall DownloadMonitor::checkStorageRequirements(unsigned int a1, unsigned __int64 *a2, int a3)
{
  DownloadMonitor::checkStorageRequirements(a1, a2, a3);
}


void __fastcall DownloadMonitor::_getAvailableDiskFreeSpaceAsync(int a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 *v3; // r6@1
  int v4; // r5@1
  int v5; // r2@1
  const char *v6; // r4@1
  int v7; // r4@3
  unsigned int *v8; // r0@4
  unsigned int v9; // r1@6
  _DWORD *v10; // r0@9
  int v11; // r1@9
  void (__fastcall *v12)(char *, int, signed int); // r3@9
  unsigned int *v13; // r0@12
  unsigned int v14; // r1@14
  _DWORD *v15; // r0@17
  void (*v16)(void); // r1@17
  int v17; // r1@17
  int v18; // r4@19
  unsigned int *v19; // r1@20
  unsigned int v20; // r0@22
  unsigned int *v21; // r5@26
  unsigned int v22; // r0@28
  int v23; // r4@37
  unsigned int *v24; // r1@38
  unsigned int v25; // r0@40
  unsigned int *v26; // r5@44
  unsigned int v27; // r0@46
  char *v28; // r0@51
  void *v29; // r0@52
  int v30; // r4@53
  unsigned int *v31; // r1@54
  unsigned int v32; // r0@56
  unsigned int *v33; // r5@60
  unsigned int v34; // r0@62
  unsigned int *v35; // r2@68
  signed int v36; // r1@70
  unsigned int *v37; // r2@72
  signed int v38; // r1@74
  char v39; // [sp+8h] [bp-68h]@10
  void (*v40)(void); // [sp+10h] [bp-60h]@9
  int v41; // [sp+14h] [bp-5Ch]@10
  int v42; // [sp+18h] [bp-58h]@11
  int v43; // [sp+1Ch] [bp-54h]@11
  _DWORD *v44; // [sp+20h] [bp-50h]@17
  void (*v45)(void); // [sp+28h] [bp-48h]@17
  int (__fastcall *v46)(int *); // [sp+2Ch] [bp-44h]@17
  char *v47; // [sp+30h] [bp-40h]@3
  int v48; // [sp+34h] [bp-3Ch]@3
  int v49; // [sp+38h] [bp-38h]@3
  _DWORD *v50; // [sp+3Ch] [bp-34h]@9
  void (*v51)(void); // [sp+44h] [bp-2Ch]@9
  signed int (__fastcall *v52)(int *); // [sp+48h] [bp-28h]@9
  int v53; // [sp+4Ch] [bp-24h]@3
  int v54; // [sp+50h] [bp-20h]@1
  int v55; // [sp+54h] [bp-1Ch]@3

  v3 = a2;
  v4 = a3;
  j__ZNSt12__shared_ptrIyLN9__gnu_cxx12_Lock_policyE2EEC2ISaIyEJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v54);
  v5 = *v3 >> 32;
  v6 = (const char *)*v3;
  if ( v5 == -1 )
    v5 = strlen(v6);
  sub_119CCEC((void **)&v53, (unsigned int)v6, v5);
  v7 = TaskGroup::DISK;
  sub_119C854((int *)&v47, &v53);
  v48 = v54;
  v49 = v55;
  if ( v55 )
  {
    v8 = (unsigned int *)(v55 + 4);
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
  v51 = 0;
  v10 = operator new(0xCu);
  *v10 = v47;
  v47 = (char *)&unk_28898CC;
  v10[1] = v48;
  v11 = v49;
  v49 = 0;
  v10[2] = v11;
  v48 = 0;
  v50 = v10;
  v51 = (void (*)(void))sub_F65CA8;
  v52 = sub_F65BAC;
  v40 = 0;
  v12 = *(void (__fastcall **)(char *, int, signed int))(v4 + 8);
  if ( v12 )
    v12(&v39, v4, 2);
    v41 = *(_DWORD *)(v4 + 12);
    v40 = *(void (**)(void))(v4 + 8);
  v42 = v54;
  v43 = v55;
    v13 = (unsigned int *)(v55 + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 + 1, v13) );
      ++*v13;
  v45 = 0;
  v15 = operator new(0x18u);
  *(_QWORD *)v15 = *(_QWORD *)&v39;
  v16 = v40;
  v15[2] = v16;
  v15[3] = v41;
  v15[4] = v42;
  v17 = v43;
  v43 = 0;
  v15[5] = v17;
  v42 = 0;
  v44 = v15;
  v45 = (void (*)(void))sub_F65E0C;
  v46 = sub_F65DF4;
  TaskGroup::queue(v7, (int)&v50, (int)&v44, 1u, 0xFFFFFFFF);
  if ( v45 )
    v45();
  v18 = v43;
  if ( v43 )
    v19 = (unsigned int *)(v43 + 4);
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
  if ( v40 )
    v40();
  if ( v51 )
    v51();
  v23 = v49;
  if ( v49 )
    v24 = (unsigned int *)(v49 + 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 == 1 )
      v26 = (unsigned int *)(v23 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
  v28 = v47 - 12;
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v47 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  v29 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v53 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  v30 = v55;
    v31 = (unsigned int *)(v55 + 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 == 1 )
      v33 = (unsigned int *)(v30 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 8))(v30);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 12))(v30);
}


int __fastcall DownloadMonitor::beginDownload(int a1, unsigned __int64 *a2)
{
  int v2; // r5@1
  unsigned __int64 *v3; // r4@1
  _DWORD *v4; // r0@1
  __int64 v5; // r1@1
  int result; // r0@1
  _DWORD *v7; // [sp+0h] [bp-20h]@1
  __int64 v8; // [sp+8h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  v4 = operator new(4u);
  LODWORD(v5) = sub_F611D4;
  *v4 = v2;
  HIDWORD(v5) = sub_F611C8;
  v7 = v4;
  v8 = v5;
  result = DownloadMonitor::searchForProductIdsByPackIds(v2, v3, (int)&v7);
  if ( (_DWORD)v8 )
    result = ((int (__cdecl *)(_DWORD **))v8)(&v7);
  return result;
}


void __fastcall DownloadMonitor::_getAvailableDiskFreeSpaceAsync(int a1, unsigned __int64 *a2, int a3)
{
  DownloadMonitor::_getAvailableDiskFreeSpaceAsync(a1, a2, a3);
}


void __fastcall DownloadMonitor::checkStorageRequirements(unsigned int a1, unsigned __int64 *a2, int a3)
{
  int v3; // r6@1
  unsigned __int64 *v4; // r5@1
  unsigned __int64 v5; // r8@1
  void (__fastcall *v6)(char *, int, signed int); // r3@1
  int v7; // r0@3
  _DWORD *v8; // r4@3
  int v9; // r7@3
  unsigned int v10; // r2@5
  unsigned int v11; // r1@5
  int v12; // r10@8
  char *v13; // r1@9
  _DWORD *v14; // r6@9
  int (**v15)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@9
  unsigned int *v16; // r2@10
  signed int v17; // r7@12
  char *v18; // r5@16
  int (**v19)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r7@16
  int *v20; // r0@17
  void *v21; // r5@22
  unsigned int *v22; // r7@22
  unsigned int *v23; // r6@22
  unsigned int v24; // r0@25
  _DWORD *v25; // r0@28
  __int64 v26; // r1@28
  unsigned int v27; // r0@33
  unsigned int v28; // r0@39
  _DWORD *v29; // [sp+0h] [bp-50h]@28
  __int64 v30; // [sp+8h] [bp-48h]@28
  int v31; // [sp+10h] [bp-40h]@22
  int v32; // [sp+14h] [bp-3Ch]@22
  char v33; // [sp+18h] [bp-38h]@2
  __int64 v34; // [sp+20h] [bp-30h]@1
  char v35; // [sp+28h] [bp-28h]@9

  v3 = a3;
  v4 = a2;
  v5 = __PAIR__((unsigned int)operator new(0x38u), a1);
  LODWORD(v34) = 0;
  v6 = *(void (__fastcall **)(char *, int, signed int))(v3 + 8);
  if ( v6 )
  {
    v6(&v33, v3, 2);
    v34 = *(_QWORD *)(v3 + 8);
  }
  std::vector<std::string,std::allocator<std::string>>::vector(SHIDWORD(v5), v4);
  v7 = 0;
  *(_DWORD *)(HIDWORD(v5) + 48) = 0;
  v8 = 0;
  *(_DWORD *)(HIDWORD(v5) + 12) = 0;
  v9 = HIDWORD(v5) + 12;
  *(_DWORD *)(v9 + 4) = 0;
  *(_DWORD *)(v9 + 8) = 0;
  *(_DWORD *)(v9 + 12) = 0;
  *(_DWORD *)(v9 + 16) = 0;
  *(_DWORD *)(v9 + 20) = 0;
  *(_DWORD *)(v9 + 24) = 0;
  if ( (_DWORD)v34 )
    ((void (__fastcall *)(int, char *, signed int))v34)(HIDWORD(v5) + 40, &v33, 2);
    *(_QWORD *)(HIDWORD(v5) + 48) = v34;
    v8 = (_DWORD *)(*(_QWORD *)(HIDWORD(v5) + 12) >> 32);
    v7 = *(_QWORD *)(HIDWORD(v5) + 12);
  v10 = ((signed int)v8 - v7) >> 2;
  v11 = (signed int)((*v4 >> 32) - *v4) >> 2;
  if ( v11 <= v10 )
    if ( v11 < v10 )
    {
      v12 = v7 + 4 * v11;
      if ( v8 != (_DWORD *)v12 )
      {
        v13 = &v35;
        v14 = (_DWORD *)v12;
        v15 = &pthread_create;
        do
        {
          v20 = (int *)(*v14 - 12);
          if ( v20 != &dword_28898C0 )
          {
            v16 = (unsigned int *)(*v14 - 4);
            if ( v15 )
            {
              __dmb();
              do
                v17 = __ldrex(v16);
              while ( __strex(v17 - 1, v16) );
            }
            else
              v17 = (*v16)--;
            if ( v17 <= 0 )
              v18 = v13;
              v19 = v15;
              j_j_j_j_j__ZdlPv_9_1(v20);
              v15 = v19;
              v13 = v18;
          }
          ++v14;
        }
        while ( v14 != v8 );
      }
      *(_DWORD *)(HIDWORD(v5) + 16) = v12;
    }
  else
    std::vector<std::string,std::allocator<std::string>>::_M_default_append(HIDWORD(v5) + 12, v11 - v10);
    ((void (*)(void))v34)();
  v21 = operator new(0x14u);
  *((_DWORD *)v21 + 1) = 1;
  v22 = (unsigned int *)((char *)v21 + 4);
  *((_DWORD *)v21 + 2) = 1;
  v23 = (unsigned int *)((char *)v21 + 8);
  *(_DWORD *)v21 = &off_26DD020;
  *((_DWORD *)v21 + 4) = HIDWORD(v5);
  v31 = *(_DWORD *)(v5 + 36);
  v32 = *(_DWORD *)(v31 - 12);
  if ( v21 )
    if ( &pthread_create )
      __dmb();
      do
        v24 = __ldrex(v22);
      while ( __strex(v24 + 1, v22) );
    else
      *v22 = 2;
  v25 = operator new(0xCu);
  LODWORD(v26) = sub_F602E8;
  *(_QWORD *)v25 = v5;
  HIDWORD(v26) = sub_F5FB48;
  v25[2] = v21;
  v29 = v25;
  v30 = v26;
  DownloadMonitor::_getAvailableDiskFreeSpaceAsync((int)v25, (unsigned __int64 *)&v31, (int)&v29);
  if ( (_DWORD)v30 )
    ((void (*)(void))v30)();
        v27 = __ldrex(v22);
      while ( __strex(v27 - 1, v22) );
      v27 = (*v22)--;
    if ( v27 == 1 )
      (*(void (__fastcall **)(void *))(*(_DWORD *)v21 + 8))(v21);
      if ( &pthread_create )
        __dmb();
          v28 = __ldrex(v23);
        while ( __strex(v28 - 1, v23) );
      else
        v28 = (*v23)--;
      if ( v28 == 1 )
        (*(void (__fastcall **)(void *))(*(_DWORD *)v21 + 12))(v21);
}


DownloadMonitor::CachedContentDetails *__fastcall DownloadMonitor::CachedContentDetails::~CachedContentDetails(DownloadMonitor::CachedContentDetails *this)
{
  DownloadMonitor::CachedContentDetails *v1; // r11@1
  int v2; // r5@1
  int v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  unsigned int *v8; // r2@11
  signed int v9; // r1@13
  int v10; // r1@27
  void *v11; // r0@27
  int v12; // r1@28
  void *v13; // r0@28
  int v14; // r1@29
  void *v15; // r0@29
  int v16; // r1@34
  void *v17; // r0@34
  int v18; // r1@35
  void *v19; // r0@35
  int *v20; // r0@36
  unsigned int *v22; // r2@38
  signed int v23; // r1@40
  unsigned int *v24; // r2@42
  signed int v25; // r1@44
  unsigned int *v26; // r2@46
  signed int v27; // r1@48

  v1 = this;
  v3 = *(_QWORD *)((char *)this + 12) >> 32;
  v2 = *(_QWORD *)((char *)this + 12);
  if ( v2 != v3 )
  {
    do
    {
      v10 = *(_DWORD *)(v2 + 32);
      v11 = (void *)(v10 - 12);
      if ( (int *)(v10 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v10 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j_j__ZdlPv_9(v11);
      }
      v12 = *(_DWORD *)(v2 + 28);
      v13 = (void *)(v12 - 12);
      if ( (int *)(v12 - 12) != &dword_28898C0 )
        v6 = (unsigned int *)(v12 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j_j__ZdlPv_9(v13);
      v14 = *(_DWORD *)(v2 + 24);
      v15 = (void *)(v14 - 12);
      if ( (int *)(v14 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v14 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j_j__ZdlPv_9(v15);
      v2 += 48;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 3);
  }
  if ( v2 )
    operator delete((void *)v2);
  v16 = *((_DWORD *)v1 + 2);
  v17 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
  v18 = *((_DWORD *)v1 + 1);
  v19 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v18 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9(v19);
  v20 = (int *)(*(_DWORD *)v1 - 12);
  if ( v20 != &dword_28898C0 )
    v26 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9(v20);
  return v1;
}


signed int __fastcall DownloadMonitor::areAnyDownloadsActive(DownloadMonitor *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *(_QWORD *)((char *)this + 84);
  result = 0;
  if ( (_DWORD)v1 != HIDWORD(v1) )
    result = 1;
  return result;
}


int __fastcall DownloadMonitor::searchForProductIdsByPackIds(int a1, unsigned __int64 *a2, int a3)
{
  int v3; // r4@1
  unsigned __int64 *v4; // r5@1
  int v5; // r6@1
  _DWORD *v6; // r11@1
  void (__fastcall *v7)(char *, int, signed int); // r3@1
  int v8; // r4@3
  int v9; // r9@4
  int v10; // r8@4
  void (__fastcall *v11)(__int64 *, char *, signed int); // r7@4
  _DWORD *v12; // r0@5
  __int64 v13; // r1@5
  int v14; // r8@7
  void *v15; // r10@9
  unsigned int *v16; // r7@9
  unsigned int *v17; // r9@9
  int v18; // r6@9
  int v19; // r6@11
  int v20; // r4@12
  unsigned int *v21; // r2@15
  signed int v22; // r1@17
  unsigned int *v23; // r2@19
  signed int v24; // r1@21
  unsigned int *v25; // r2@23
  signed int v26; // r1@25
  unsigned int *v27; // r2@27
  signed int v28; // r1@29
  unsigned int *v29; // r2@47
  signed int v30; // r1@49
  unsigned int v31; // r0@57
  int v32; // r1@60
  int v33; // r2@60
  int v34; // r3@60
  unsigned int v35; // r6@60
  __int64 v36; // kr08_8@60
  unsigned int v37; // r8@60
  int v38; // r11@60
  int v39; // r5@61
  int v40; // r10@61
  _DWORD *v41; // r1@63
  size_t v42; // r2@63
  int v43; // r7@65
  int *v44; // r11@68
  int v45; // r1@68
  void *v46; // r0@70
  void *v47; // r0@73
  ContentCatalogService *v48; // r5@74
  int v49; // r1@74
  int v50; // r2@74
  int v51; // r3@74
  unsigned int *v52; // r0@75
  unsigned int v53; // r1@77
  int v54; // r4@80
  _DWORD *v55; // r6@80
  int v56; // r1@80
  int v57; // r2@80
  int v58; // r3@80
  int v59; // r12@80
  int v60; // r0@80
  int v61; // r1@80
  int v62; // r2@80
  int v63; // r3@80
  void *v64; // r0@83
  void *v65; // r0@84
  void *v66; // r0@85
  int v67; // r4@86
  unsigned int *v68; // r1@87
  unsigned int v69; // r0@89
  unsigned int *v70; // r5@93
  unsigned int v71; // r0@95
  int result; // r0@100
  int v73; // [sp+18h] [bp-170h]@9
  int v74; // [sp+20h] [bp-168h]@9
  _DWORD *v75; // [sp+24h] [bp-164h]@1
  void *v76; // [sp+28h] [bp-160h]@9
  int v77; // [sp+2Ch] [bp-15Ch]@7
  int v78; // [sp+30h] [bp-158h]@60
  int v79; // [sp+3Ch] [bp-14Ch]@60
  int *s1; // [sp+44h] [bp-144h]@61
  int v81; // [sp+48h] [bp-140h]@74
  int v82; // [sp+4Ch] [bp-13Ch]@74
  int v83; // [sp+50h] [bp-138h]@74
  int v84; // [sp+54h] [bp-134h]@74
  int v85; // [sp+58h] [bp-130h]@74
  char v86; // [sp+70h] [bp-118h]@74
  int v87; // [sp+78h] [bp-110h]@74
  _DWORD *v88; // [sp+7Ch] [bp-10Ch]@74
  int v89; // [sp+80h] [bp-108h]@74
  int v90; // [sp+88h] [bp-100h]@80
  int v91; // [sp+8Ch] [bp-FCh]@80
  int v92; // [sp+90h] [bp-F8h]@80
  int v93; // [sp+94h] [bp-F4h]@80
  int v94; // [sp+98h] [bp-F0h]@80
  char v95; // [sp+B0h] [bp-D8h]@80
  _DWORD *v96; // [sp+BCh] [bp-CCh]@80
  void (*v97)(void); // [sp+C4h] [bp-C4h]@80
  void (__fastcall *v98)(int *, int); // [sp+C8h] [bp-C0h]@80
  int v99; // [sp+CCh] [bp-BCh]@47
  int v100[11]; // [sp+D0h] [bp-B8h]@73
  int *v101; // [sp+FCh] [bp-8Ch]@60
  int v102; // [sp+100h] [bp-88h]@55
  _DWORD *v103; // [sp+104h] [bp-84h]@55
  int v104; // [sp+108h] [bp-80h]@55
  int v105; // [sp+110h] [bp-78h]@60
  int v106; // [sp+114h] [bp-74h]@60
  int v107; // [sp+118h] [bp-70h]@60
  int v108; // [sp+11Ch] [bp-6Ch]@60
  int v109; // [sp+120h] [bp-68h]@60
  int v110; // [sp+128h] [bp-60h]@27
  int v111; // [sp+12Ch] [bp-5Ch]@23
  int v112; // [sp+130h] [bp-58h]@19
  char v113; // [sp+138h] [bp-50h]@60
  char v114; // [sp+140h] [bp-48h]@2
  void (__fastcall *v115)(__int64 *, char *, signed int); // [sp+148h] [bp-40h]@1
  int v116; // [sp+14Ch] [bp-3Ch]@2
  __int64 v117; // [sp+150h] [bp-38h]@4
  void (__fastcall *v118)(__int64 *, char *, signed int); // [sp+158h] [bp-30h]@3
  int v119; // [sp+15Ch] [bp-2Ch]@4

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = operator new(0x30u);
  v75 = v6;
  v115 = 0;
  v7 = *(void (__fastcall **)(char *, int, signed int))(v3 + 8);
  if ( v7 )
  {
    v7(&v114, v3, 2);
    v116 = *(_DWORD *)(v3 + 12);
    v115 = *(void (__fastcall **)(__int64 *, char *, signed int))(v3 + 8);
  }
  std::vector<PackIdVersion,std::allocator<PackIdVersion>>::vector((int)v6, v4);
  v6[3] = 0;
  v8 = (int)(v6 + 3);
  *(_DWORD *)(v8 + 4) = 0;
  *(_DWORD *)(v8 + 8) = 0;
  *(_DWORD *)(v8 + 12) = 0;
  *(_DWORD *)(v8 + 16) = 0;
  v118 = 0;
  if ( v115 )
    v9 = v5;
    v115(&v117, &v114, 2);
    v10 = v116;
    v11 = v115;
    v6[10] = 0;
    v119 = v10;
    v118 = v11;
    if ( v11 )
    {
      v12 = operator new(0x10u);
      *(_QWORD *)v12 = v117;
      v118 = 0;
      HIDWORD(v13) = std::_Function_handler<void ()(std::vector<std::string,std::allocator<std::string>>),std::function<void ()(std::vector<std::string,std::allocator<std::string>> const&)>>::_M_invoke;
      LODWORD(v13) = std::_Function_base::_Base_manager<std::function<void ()(std::vector<std::string,std::allocator<std::string>> const&)>>::_M_manager;
      v12[2] = v11;
      v12[3] = v10;
      v6[8] = v12;
      *((_QWORD *)v6 + 5) = v13;
    }
  else
  std::vector<std::string,std::allocator<std::string>>::reserve(
    (int)(v6 + 3),
    -1431655765 * ((signed int)((*v4 >> 32) - *v4) >> 4));
  v14 = v9;
  v77 = v9;
    ((void (*)(void))v115)();
  v15 = operator new(0x14u);
  v76 = v15;
  *((_DWORD *)v15 + 1) = 1;
  v16 = (unsigned int *)((char *)v15 + 4);
  *((_DWORD *)v15 + 2) = 1;
  v17 = (unsigned int *)((char *)v15 + 8);
  *(_DWORD *)v15 = &off_26DD004;
  v73 = (int)v15 + 4;
  *((_DWORD *)v15 + 4) = v6;
  v18 = *v4;
  v74 = *v4 >> 32;
  if ( v18 == v74 )
    goto LABEL_117;
  do
    v102 = v14;
    v103 = v6;
    v104 = (int)v15;
    if ( &pthread_create )
      __dmb();
      do
        v31 = __ldrex(v16);
      while ( __strex(v31 + 1, v16) );
    else
      ++*v16;
    v32 = *(_DWORD *)(v18 + 4);
    v33 = *(_DWORD *)(v18 + 8);
    v34 = *(_DWORD *)(v18 + 12);
    v105 = *(_DWORD *)v18;
    v106 = v32;
    v107 = v33;
    v108 = v34;
    SemVersion::SemVersion((int)&v109, v18 + 16);
    v78 = v18 + 16;
    v113 = *(_BYTE *)(v18 + 40);
    mce::UUID::asString((mce::UUID *)&v101);
    v79 = v18;
    v35 = sub_119C9A4(v101, *(v101 - 3), -955291385);
    v36 = *(_QWORD *)(v14 + 176);
    v37 = v35 % (unsigned int)(*(_QWORD *)(v14 + 176) >> 32);
    v38 = *(_DWORD *)(v36 + 4 * v37);
    if ( v38 )
      v39 = *(_DWORD *)v38;
      s1 = v101;
      v40 = *(_DWORD *)(*(_DWORD *)v38 + 12);
      while ( 1 )
      {
        if ( v40 == v35 )
        {
          v41 = *(_DWORD **)(v39 + 4);
          v42 = *(s1 - 3);
          if ( v42 == *(v41 - 3) && !memcmp(s1, v41, v42) )
            break;
        }
        v43 = *(_DWORD *)v39;
        if ( *(_DWORD *)v39 )
          v40 = *(_DWORD *)(v43 + 12);
          v38 = v36;
          v39 = *(_DWORD *)v36;
          if ( *(_DWORD *)(v43 + 12) % HIDWORD(v36) == v37 )
            continue;
        v16 = (unsigned int *)v73;
        v20 = 0;
        v14 = v77;
        v15 = v76;
        v19 = v79;
        goto LABEL_68;
      }
      v14 = v77;
      v19 = v79;
      if ( v38 )
        v20 = *(_DWORD *)v38;
      else
      v15 = v76;
      v16 = (unsigned int *)v73;
LABEL_68:
      v44 = &dword_28898C0;
      v45 = (int)s1;
      v45 = (int)v101;
      v20 = 0;
    v46 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != v44 )
      v21 = (unsigned int *)(v45 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v46);
    if ( v20 )
      sub_F5D510(&v102, (int *)(v20 + 8));
      SearchQuery::SearchQuery((int)v100, (int *)&CatalogContentType::DurableOffer);
      mce::UUID::asString((mce::UUID *)&v99);
      SearchQuery::addTag((int)v100, &v99);
      v47 = (void *)(v99 - 12);
      if ( (int *)(v99 - 12) != v44 )
        v29 = (unsigned int *)(v99 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
        else
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v47);
      v48 = *(ContentCatalogService **)v14;
      v49 = *(_DWORD *)(v19 + 4);
      v50 = *(_DWORD *)(v19 + 8);
      v51 = *(_DWORD *)(v19 + 12);
      v81 = *(_DWORD *)v19;
      v82 = v49;
      v83 = v50;
      v84 = v51;
      SemVersion::SemVersion((int)&v85, v78);
      v86 = *(_BYTE *)(v19 + 40);
      v87 = v102;
      v88 = v103;
      v89 = v104;
      if ( v104 )
        v52 = (unsigned int *)(v104 + 4);
            v53 = __ldrex(v52);
          while ( __strex(v53 + 1, v52) );
          ++*v52;
      v90 = v105;
      v91 = v106;
      v92 = v107;
      v93 = v108;
      SemVersion::SemVersion((int)&v94, (int)&v109);
      v54 = v19;
      v95 = v113;
      v97 = 0;
      v55 = operator new(0x70u);
      v56 = v82;
      v57 = v83;
      v58 = v84;
      *v55 = v81;
      v55[1] = v56;
      v55[2] = v57;
      v55[3] = v58;
      SemVersion::SemVersion((int)(v55 + 4), (int)&v85);
      *((_BYTE *)v55 + 40) = v86;
      v59 = (int)(v55 + 16);
      v55[12] = v87;
      v55[13] = v88;
      v60 = v89;
      v89 = 0;
      v55[14] = v60;
      v88 = 0;
      v61 = v91;
      v62 = v92;
      v63 = v93;
      *(_DWORD *)v59 = v90;
      *(_DWORD *)(v59 + 4) = v61;
      *(_DWORD *)(v59 + 8) = v62;
      *(_DWORD *)(v59 + 12) = v63;
      SemVersion::SemVersion((int)(v55 + 20), (int)&v94);
      *((_BYTE *)v55 + 104) = v95;
      v96 = v55;
      v98 = sub_F5F5FC;
      v97 = (void (*)(void))sub_F5F780;
      ContentCatalogService::searchCatalog(v48, v100, (int)&v96);
      if ( v97 )
        v97();
      sub_F5D788((int)&v81);
      SearchQuery::~SearchQuery((SearchQuery *)v100);
      v19 = v54;
    v64 = (void *)(v112 - 12);
    if ( (int *)(v112 - 12) != v44 )
      v23 = (unsigned int *)(v112 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v64);
    v65 = (void *)(v111 - 12);
    if ( (int *)(v111 - 12) != v44 )
      v25 = (unsigned int *)(v111 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v65);
    v66 = (void *)(v110 - 12);
    if ( (int *)(v110 - 12) != v44 )
      v27 = (unsigned int *)(v110 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v66);
    v67 = v104;
    v6 = v75;
    if ( v104 )
      v68 = (unsigned int *)(v104 + 4);
          v69 = __ldrex(v68);
        while ( __strex(v69 - 1, v68) );
        v69 = (*v68)--;
      if ( v69 == 1 )
        v70 = (unsigned int *)(v67 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v67 + 8))(v67);
            v71 = __ldrex(v70);
          while ( __strex(v71 - 1, v70) );
          v71 = (*v70)--;
        if ( v71 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v67 + 12))(v67);
    v18 = v19 + 48;
    result = v74;
  while ( v18 != v74 );
  if ( v15 )
LABEL_117:
        result = __ldrex(v16);
      while ( __strex(result - 1, v16) );
      result = (*v16)--;
    if ( result == 1 )
      (*(void (__fastcall **)(void *))(*(_DWORD *)v15 + 8))(v15);
          result = __ldrex(v17);
        while ( __strex(result - 1, v17) );
        result = (*v17)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(void *))(*(_DWORD *)v15 + 12))(v15);
  return result;
}


void __fastcall DownloadMonitor::_queueDownload(int a1, int a2)
{
  int v2; // r6@1 OVERLAPPED
  int v3; // r5@1 OVERLAPPED
  int v4; // r4@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  _DWORD *v7; // r0@7
  __int64 v8; // r1@7
  _DWORD *v9; // [sp+0h] [bp-20h]@7
  __int64 v10; // [sp+8h] [bp-18h]@7

  v2 = *(_DWORD *)a2;
  v3 = a1;
  **(_DWORD **)a2 = 1;
  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 )
  {
    v5 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  v7 = operator new(0xCu);
  LODWORD(v8) = sub_F63C8C;
  *(_QWORD *)v7 = *(_QWORD *)&v3;
  HIDWORD(v8) = sub_F63224;
  v7[2] = v4;
  v9 = v7;
  v10 = v8;
  DownloadMonitor::_getContentDetails(v3, (int **)(v2 + 4), (int)&v9);
  if ( (_DWORD)v10 )
    ((void (*)(void))v10)();
}


void __fastcall DownloadMonitor::_getContentDetails(int a1, int **a2, int a3)
{
  DownloadMonitor::_getContentDetails(a1, a2, a3);
}


void __fastcall DownloadMonitor::update(DownloadMonitor *this)
{
  DownloadMonitor *v1; // r4@1
  const void **v2; // r5@1
  const void **v3; // r7@1
  PackDownloader **v4; // r0@2
  PackDownloader **i; // r6@2
  _DWORD *v6; // r0@5
  size_t v7; // r2@5
  const void **v8; // r11@9
  const void **v9; // r5@10
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  int *v12; // r0@19
  __int64 v13; // r0@21
  DownloadMonitor *v14; // r6@22
  int v15; // r0@24
  unsigned int *v16; // r0@25
  unsigned int v17; // r1@27
  int *v18; // r5@30
  int *v19; // r4@30
  int v20; // t1@31
  int v21; // r5@34
  unsigned int *v22; // r1@35
  unsigned int v23; // r0@37
  unsigned int *v24; // r7@41
  unsigned int v25; // r0@43
  int v26; // [sp+0h] [bp-30h]@24
  int v27; // [sp+4h] [bp-2Ch]@24

  v1 = this;
  v2 = (const void **)(*((_QWORD *)this + 12) >> 32);
  v3 = (const void **)*((_QWORD *)this + 12);
  if ( v3 != v2 )
  {
    do
    {
      v4 = (PackDownloader **)(*(_QWORD *)((char *)v1 + 84) >> 32);
      for ( i = (PackDownloader **)*(_QWORD *)((char *)v1 + 84); i != v4; i += 2 )
      {
        v6 = *(_DWORD **)PackDownloader::getId(*i);
        v7 = *(v6 - 3);
        if ( v7 == *((_DWORD *)*v3 - 3) && !memcmp(v6, *v3, v7) )
        {
          std::vector<std::shared_ptr<PackDownloader>,std::allocator<std::shared_ptr<PackDownloader>>>::_M_erase(
            (int)v1 + 84,
            (int)i);
          break;
        }
        v4 = (PackDownloader **)*((_DWORD *)v1 + 22);
      }
      ++v3;
    }
    while ( v3 != v2 );
    v8 = (const void **)(*((_QWORD *)v1 + 12) >> 32);
    v3 = (const void **)*((_QWORD *)v1 + 12);
    if ( v8 != v3 )
      v9 = (const void **)*((_QWORD *)v1 + 12);
      do
        v12 = (int *)((char *)*v9 - 12);
        if ( v12 != &dword_28898C0 )
          v10 = (unsigned int *)((char *)*v9 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v11 = __ldrex(v10);
            while ( __strex(v11 - 1, v10) );
          }
          else
            v11 = (*v10)--;
          if ( v11 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v12);
        ++v9;
      while ( v9 != v8 );
  }
  *((_DWORD *)v1 + 25) = v3;
  DownloadMonitor::_tryAutoResumeDownload(v1);
  v13 = *((_QWORD *)v1 + 9);
  if ( (_DWORD)v13 == HIDWORD(v13) )
    v14 = (DownloadMonitor *)((char *)v1 + 88);
  else
    if ( (unsigned int)((*((_DWORD *)v1 + 22) - *((_DWORD *)v1 + 21)) >> 3) <= 3 && !**(_DWORD **)v13 )
      v26 = *(_DWORD *)v13;
      v15 = *(_DWORD *)(v13 + 4);
      v27 = v15;
      if ( v15 )
        v16 = (unsigned int *)(v15 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 + 1, v16) );
        else
          ++*v16;
      DownloadMonitor::_queueDownload((int)v1, (int)&v26);
      v21 = v27;
      if ( v27 )
        v22 = (unsigned int *)(v27 + 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 == 1 )
          v24 = (unsigned int *)(v21 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
            v25 = (*v24)--;
          if ( v25 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
  v18 = *(int **)v14;
  v19 = (int *)*((_DWORD *)v1 + 21);
  if ( v19 != *(int **)v14 )
      v20 = *v19;
      v19 += 2;
      (*(void (__cdecl **)(int))(*(_DWORD *)v20 + 8))(v20);
    while ( v18 != v19 );
}


void __fastcall DownloadMonitor::_queueDownload(int a1, int a2)
{
  DownloadMonitor::_queueDownload(a1, a2);
}


PackDownloader **__fastcall DownloadMonitor::_removeDownloaderById(int a1, const void **a2)
{
  int v2; // r7@1
  const void **v3; // r4@1
  int v4; // r5@1
  PackDownloader **v5; // r6@1
  PackDownloader **result; // r0@1
  _DWORD *v7; // r0@4
  size_t v8; // r2@4

  v2 = a1;
  v3 = a2;
  v4 = a1 + 84;
  v5 = *(PackDownloader ***)(a1 + 84);
  result = *(PackDownloader ***)(a1 + 88);
  while ( v5 != result )
  {
    v7 = *(_DWORD **)PackDownloader::getId(*v5);
    v8 = *(v7 - 3);
    if ( v8 == *((_DWORD *)*v3 - 3) && !memcmp(v7, *v3, v8) )
      return (PackDownloader **)j_j_j__ZNSt6vectorISt10shared_ptrI14PackDownloaderESaIS2_EE8_M_eraseEN9__gnu_cxx17__normal_iteratorIPS2_S4_EE(
                                  v4,
                                  (int)v5);
    result = *(PackDownloader ***)(v2 + 88);
    v5 += 2;
  }
  return result;
}


signed int __fastcall DownloadMonitor::hasDownloadFailedForAny(int a1, unsigned __int64 *a2)
{
  int **v2; // r4@1
  int **v3; // r6@1
  unsigned __int64 *v4; // r5@2
  int v5; // r0@3
  bool v6; // zf@3
  signed int result; // r0@6

  v3 = (int **)(*a2 >> 32);
  v2 = (int **)*a2;
  if ( v2 == v3 )
  {
LABEL_8:
    result = 0;
  }
  else
    v4 = (unsigned __int64 *)(a1 + 120);
    while ( 1 )
    {
      v5 = std::_Hashtable<std::string,std::pair<std::string const,DownloadMonitor::DownloadHistory>,std::allocator<std::pair<std::string const,DownloadMonitor::DownloadHistory>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
             v4,
             v2);
      v6 = v5 == 0;
      if ( v5 )
        v6 = *(_BYTE *)(v5 + 24) == 0;
      if ( !v6 )
        break;
      ++v2;
      if ( v3 == v2 )
        goto LABEL_8;
    }
    result = 1;
  return result;
}


void __fastcall DownloadMonitor::_getContentDetails(int a1, int **a2, int a3)
{
  ContentCatalogService **v3; // r6@1
  int v4; // r4@1
  int *v5; // r5@1
  int v6; // r0@1
  int v7; // ST04_4@3
  char *v8; // r0@4
  char *v9; // r0@5
  ContentCatalogService *v10; // r8@6
  void (__fastcall *v11)(int *, int, signed int); // r3@6
  void *v12; // r4@8
  __int64 v13; // r0@8
  void *v14; // r0@12
  void *v15; // r0@13
  void *v16; // r0@14
  void *v17; // r0@15
  unsigned int *v18; // r2@17
  signed int v19; // r1@19
  unsigned int *v20; // r2@21
  signed int v21; // r1@23
  unsigned int *v22; // r2@25
  signed int v23; // r1@27
  unsigned int *v24; // r2@29
  signed int v25; // r1@31
  unsigned int *v26; // r2@33
  signed int v27; // r1@35
  unsigned int *v28; // r2@37
  signed int v29; // r1@39
  ContentCatalogService **v30; // [sp+8h] [bp-60h]@6
  int v31; // [sp+Ch] [bp-5Ch]@6
  int v32; // [sp+10h] [bp-58h]@7
  void (__fastcall *v33)(int *, int *, signed int); // [sp+18h] [bp-50h]@6
  int v34; // [sp+1Ch] [bp-4Ch]@7
  void *v35; // [sp+20h] [bp-48h]@8
  void (*v36)(void); // [sp+28h] [bp-40h]@8
  void (__fastcall *v37)(int **, unsigned int); // [sp+2Ch] [bp-3Ch]@8
  char *v38; // [sp+30h] [bp-38h]@4
  char *v39; // [sp+34h] [bp-34h]@4
  int v40; // [sp+38h] [bp-30h]@4
  int v41; // [sp+3Ch] [bp-2Ch]@14
  int v42; // [sp+40h] [bp-28h]@13

  v3 = (ContentCatalogService **)a1;
  v4 = a3;
  v5 = (int *)a2;
  v6 = std::_Hashtable<std::string,std::pair<std::string const,DownloadMonitor::CachedContentDetails>,std::allocator<std::pair<std::string const,DownloadMonitor::CachedContentDetails>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)(a1 + 148),
         a2);
  if ( v6 )
  {
    if ( !*(_DWORD *)(v4 + 8) )
      sub_119C8E4();
    v7 = *(_BYTE *)(v6 + 32);
    (*(void (__fastcall **)(int, int, int, int))(v4 + 12))(v4, v6 + 8, v6 + 12, v6 + 16);
  }
  else
    v38 = (char *)&unk_28898CC;
    v39 = (char *)&unk_28898CC;
    HydrateParams::HydrateParams(&v40, v5, (int *)&v39, &v38);
    v8 = v38 - 12;
    if ( (int *)(v38 - 12) != &dword_28898C0 )
    {
      v18 = (unsigned int *)(v38 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v8);
    }
    v9 = v39 - 12;
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v39 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v9);
    HydrateParams::disableEtag((HydrateParams *)&v40);
    v10 = *v3;
    v30 = v3;
    sub_119C854(&v31, v5);
    v33 = 0;
    v11 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
    if ( v11 )
      v11(&v32, v4, 2);
      v34 = *(_DWORD *)(v4 + 12);
      v33 = *(void (__fastcall **)(int *, int *, signed int))(v4 + 8);
    v36 = 0;
    v12 = operator new(0x18u);
    *(_DWORD *)v12 = v30;
    sub_119C854((int *)v12 + 1, &v31);
    v13 = *(_QWORD *)&v32;
    *(_QWORD *)&v32 = *((_QWORD *)v12 + 1);
    *((_QWORD *)v12 + 1) = v13;
    LODWORD(v13) = v33;
    *((_DWORD *)v12 + 4) = v13;
    HIDWORD(v13) = v34;
    v34 = *((_DWORD *)v12 + 5);
    *((_DWORD *)v12 + 5) = HIDWORD(v13);
    v35 = v12;
    v36 = (void (*)(void))sub_F62C50;
    v37 = sub_F619B8;
    ContentCatalogService::hydrateItem(v10, &v40, (int)&v35);
    if ( v36 )
      v36();
    if ( v33 )
      v33(&v32, &v32, 3);
    v14 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v31 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
    v15 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v42 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    v16 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v41 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
    v17 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v40 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v17);
}


int __fastcall DownloadMonitor::addDownloadCallback(int a1, int a2, int a3)
{
  unsigned int v3; // r4@0
  int v4; // r5@0
  int v5; // r12@0
  int v6; // r6@1
  int v7; // r9@1
  char v8; // r1@1
  int v9; // r7@1
  unsigned int v10; // r2@1
  char *v11; // r0@4
  void (__fastcall *v12)(int *, int, signed int); // r3@4
  void (*v13)(void); // r1@5
  void (*v14)(void); // r3@5
  int v15; // r6@9
  unsigned int *v16; // r0@10
  unsigned int v17; // r1@12
  int v18; // r0@15
  unsigned int *v19; // r2@16
  unsigned int v20; // r1@18
  __int64 v21; // kr18_8@23
  unsigned int *v22; // r0@25
  unsigned int v23; // r1@27
  int result; // r0@36
  unsigned int *v25; // r2@37
  unsigned int v26; // r1@39
  char v27; // [sp+4h] [bp-4Ch]@1
  int v28; // [sp+8h] [bp-48h]@1
  int v29; // [sp+Ch] [bp-44h]@1
  unsigned __int64 v30; // [sp+10h] [bp-40h]@5
  void (*v31)(void); // [sp+18h] [bp-38h]@1
  char *v32; // [sp+1Ch] [bp-34h]@5
  int v33; // [sp+20h] [bp-30h]@5
  unsigned int v34; // [sp+24h] [bp-2Ch]@5
  void (*v35)(void); // [sp+28h] [bp-28h]@4
  int v36; // [sp+2Ch] [bp-24h]@5

  v6 = a2;
  v7 = a1;
  v8 = 1;
  v27 = 1;
  v9 = a3;
  v28 = 0;
  v29 = 0;
  v31 = 0;
  v10 = *(_DWORD *)(v6 + 4);
  if ( v10 )
  {
    v8 = 0;
    if ( !*(_DWORD *)(v10 + 4) )
      v8 = 1;
  }
  v35 = 0;
  v27 = v8 ^ 1;
  v11 = &v27;
  v12 = *(void (__fastcall **)(int *, int, signed int))(v9 + 8);
  if ( v12 )
    v12(&v33, v9, 2);
    v11 = *(char **)(v9 + 12);
    v36 = *(_DWORD *)(v9 + 12);
    v13 = *(void (**)(void))(v9 + 8);
    v35 = *(void (**)(void))(v9 + 8);
    v3 = HIDWORD(v30);
    v9 = v30;
    v10 = v34;
    v4 = v33;
    v5 = (int)v32;
    v14 = v31;
  else
    v14 = 0;
    v13 = 0;
  v33 = v9;
  v34 = v3;
  v30 = __PAIR__(v10, v4);
  v35 = v14;
  v36 = v5;
  v31 = v13;
  v32 = v11;
  if ( v14 )
    v14();
  v28 = *(_DWORD *)v6;
  v15 = *(_DWORD *)(v6 + 4);
  if ( v15 )
    v16 = (unsigned int *)(v15 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 + 1, v16) );
    }
    else
      ++*v16;
  v18 = v29;
  if ( v29 )
    v19 = (unsigned int *)(v29 + 8);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 == 1 )
      (*(void (**)(void))(*(_DWORD *)v18 + 12))();
  v29 = v15;
  v21 = *(_QWORD *)(v7 + 112);
  if ( (_DWORD)v21 == HIDWORD(v21) )
    std::vector<DownloadMonitor::DownloadCallback,std::allocator<DownloadMonitor::DownloadCallback>>::_M_emplace_back_aux<DownloadMonitor::DownloadCallback const&>(
      (unsigned __int64 *)(v7 + 108),
      (int)&v27);
    *(_BYTE *)v21 = v27;
    *(_DWORD *)(v21 + 4) = v28;
    *(_DWORD *)(v21 + 8) = v15;
    if ( v15 )
      v22 = (unsigned int *)(v15 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 + 1, v22) );
      }
      else
        ++*v22;
    *(_DWORD *)(v21 + 20) = 0;
    if ( v31 )
      ((void (__fastcall *)(_DWORD, unsigned __int64 *, signed int))v31)(v21 + 12, &v30, 2);
      *(_DWORD *)(v21 + 24) = v32;
      *(_DWORD *)(v21 + 20) = v31;
    *(_DWORD *)(v7 + 112) += 28;
  if ( v31 )
    ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, signed int))v31)(&v30, &v30, 3);
  result = v29;
    v25 = (unsigned int *)(v29 + 8);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


signed int __fastcall DownloadMonitor::isDownloadActiveForAny(int a1, _QWORD *a2)
{
  const void **v2; // r7@1 OVERLAPPED
  const void **v3; // r8@1 OVERLAPPED
  int v4; // r9@1
  PackDownloader **v5; // r5@4 OVERLAPPED
  PackDownloader **v6; // r6@4 OVERLAPPED
  _DWORD *v7; // r0@5
  size_t v8; // r2@5
  __int64 v9; // r4@10
  const void *v10; // r10@11
  size_t v11; // r6@11
  _DWORD *v12; // r0@12

  *(_QWORD *)&v2 = *a2;
  v4 = a1;
  while ( 1 )
  {
    if ( v2 == v3 )
      return 0;
    *(_QWORD *)&v5 = *(_QWORD *)(v4 + 84);
    if ( v5 != v6 )
    {
      while ( 1 )
      {
        v7 = *(_DWORD **)PackDownloader::getId(*v5);
        v8 = *(v7 - 3);
        if ( v8 == *((_DWORD *)*v2 - 3) && !memcmp(v7, *v2, v8) )
          break;
        v5 += 2;
        if ( v6 == v5 )
          goto LABEL_10;
      }
      if ( *v5 )
        return 1;
    }
LABEL_10:
    v9 = *(_QWORD *)(v4 + 72);
    if ( (_DWORD)v9 != HIDWORD(v9) )
      break;
LABEL_2:
    ++v2;
  }
  v10 = *v2;
  v11 = *((_DWORD *)*v2 - 3);
    v12 = *(_DWORD **)(*(_DWORD *)v9 + 4);
    if ( *(v12 - 3) == v11 && !memcmp(v12, v10, v11) )
      return 1;
    LODWORD(v9) = v9 + 8;
    if ( HIDWORD(v9) == (_DWORD)v9 )
      goto LABEL_2;
}


DownloadMonitor::CachedContentDetails *__fastcall DownloadMonitor::CachedContentDetails::CachedContentDetails(DownloadMonitor::CachedContentDetails *this, const DownloadMonitor::CachedContentDetails *a2)
{
  const DownloadMonitor::CachedContentDetails *v2; // r5@1
  DownloadMonitor::CachedContentDetails *v3; // r4@1

  v2 = a2;
  v3 = this;
  sub_119C854((int *)this, (int *)a2);
  sub_119C854((int *)v3 + 1, (int *)v2 + 1);
  sub_119C854((int *)v3 + 2, (int *)v2 + 2);
  std::vector<PackIdVersion,std::allocator<PackIdVersion>>::vector((int)v3 + 12, (unsigned __int64 *)((char *)v2 + 12));
  *((_BYTE *)v3 + 24) = *((_BYTE *)v2 + 24);
  return v3;
}


PackDownloader *__fastcall DownloadMonitor::getDownloaderById(int a1, const void **a2)
{
  PackDownloader **v2; // r5@1 OVERLAPPED
  PackDownloader **v3; // r6@1 OVERLAPPED
  const void **v4; // r4@1
  _DWORD *v5; // r0@2
  size_t v6; // r2@2
  PackDownloader *result; // r0@5

  *(_QWORD *)&v2 = *(_QWORD *)(a1 + 84);
  v4 = a2;
  if ( v2 == v3 )
  {
LABEL_5:
    result = 0;
  }
  else
    while ( 1 )
    {
      v5 = *(_DWORD **)PackDownloader::getId(*v2);
      v6 = *(v5 - 3);
      if ( v6 == *((_DWORD *)*v4 - 3) && !memcmp(v5, *v4, v6) )
        break;
      v2 += 2;
      if ( v3 == v2 )
        goto LABEL_5;
    }
    result = *v2;
  return result;
}


PackDownloader **__fastcall DownloadMonitor::cancelDownload(PackDownloader **result, unsigned __int64 *a2)
{
  const void **v2; // r5@1
  const void **v3; // r11@1
  PackDownloader **i; // r4@1
  __int64 v5; // r6@2
  size_t v6; // r2@3
  FileDownloadManager *v7; // r6@7
  int v8; // r9@8
  int v9; // r10@8
  unsigned int v10; // r1@8
  unsigned int v11; // r7@8
  PackDownloader **j; // r6@8
  _DWORD *v18; // r0@11
  size_t v19; // r2@11
  double v20; // [sp+0h] [bp-40h]@0
  __int64 v21; // [sp+10h] [bp-30h]@0

  v3 = (const void **)(*a2 >> 32);
  v2 = (const void **)*a2;
  for ( i = result; v2 != v3; ++v2 )
  {
    v5 = *(_QWORD *)(i + 21);
    if ( (_DWORD)v5 != HIDWORD(v5) )
    {
      while ( 1 )
      {
        result = *(PackDownloader ***)PackDownloader::getId(*(PackDownloader **)v5);
        v6 = (size_t)*(result - 3);
        if ( v6 == *((_DWORD *)*v2 - 3) )
        {
          result = (PackDownloader **)memcmp(result, *v2, v6);
          if ( !result )
            break;
        }
        LODWORD(v5) = v5 + 8;
        if ( HIDWORD(v5) == (_DWORD)v5 )
          goto LABEL_14;
      }
      v7 = *(FileDownloadManager **)v5;
      if ( v7 )
        v8 = (int)i[5];
        v9 = FileDownloadManager::getFileSize(v7);
        v11 = v10;
        _R0 = (*(int (__fastcall **)(FileDownloadManager *))(*(_DWORD *)v7 + 16))(v7);
        __asm
          VMOV            S0, R0
          VCVT.F64.F32    D0, S0
        LODWORD(v20) = v2;
        __asm { VSTR            D0, [SP,#0x40+var_30] }
        MinecraftEventing::fireEventFileTransmissionState(v8, 0, -1, 2, v20, __PAIR__(v11, v9), v21);
        (*(void (__fastcall **)(FileDownloadManager *))(*(_DWORD *)v7 + 12))(v7);
        result = (PackDownloader **)(*(_QWORD *)(i + 21) >> 32);
        for ( j = (PackDownloader **)*(_QWORD *)(i + 21); j != result; j += 2 )
          v18 = *(_DWORD **)PackDownloader::getId(*j);
          v19 = *(v18 - 3);
          if ( v19 == *((_DWORD *)*v2 - 3) && !memcmp(v18, *v2, v19) )
          {
            result = (PackDownloader **)std::vector<std::shared_ptr<PackDownloader>,std::allocator<std::shared_ptr<PackDownloader>>>::_M_erase(
                                          (int)(i + 21),
                                          (int)j);
          }
          result = (PackDownloader **)i[22];
    }
LABEL_14:
    ;
  }
  return result;
}
