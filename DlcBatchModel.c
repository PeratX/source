

  if ( DlcBatchModel::isDownloading(v2) )
{
  else
    result = DlcBatchModel::isImporting(v2);
  return result;
}


      if ( DlcBatchModel::isDownloadActive(v14) == 1 )
{
        v23 = *(_DWORD *)(v2 + 424);
        v24 = (int *)StoreCatalogItemModel::getProductId(v10);
        sub_21E8AF4(&v55, v24);
        v56 = 0;
        v57 = 0;
        v58 = 0;
        v56 = (char *)operator new(4u);
        v58 = v56 + 4;
        v57 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                        (int)&v55,
                        (int)&v56,
                        (int)v56);
        v54 = 0;
        MainMenuScreenModel::navigateToDlcProgressScreen(v23, (unsigned __int64 *)&v56, (int)&v53, 1);
        if ( v54 )
          v54();
        v26 = (int)v57;
        v25 = v56;
        if ( v56 != v57 )
        {
          do
          {
            v29 = (int *)(*(_DWORD *)v25 - 12);
            if ( v29 != &dword_28898C0 )
            {
              v27 = (unsigned int *)(*(_DWORD *)v25 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v28 = __ldrex(v27);
                while ( __strex(v28 - 1, v27) );
              }
              else
                v28 = (*v27)--;
              if ( v28 <= 0 )
                j_j_j_j__ZdlPv_9(v29);
            }
            v25 += 4;
          }
          while ( v25 != (char *)v26 );
          v25 = v56;
        }
        v3 = v46;
        if ( v25 )
          operator delete(v25);
        v30 = (void *)(v55 - 12);
        if ( (int *)(v55 - 12) != &dword_28898C0 )
          v31 = (unsigned int *)(v55 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v32 = __ldrex(v31);
            while ( __strex(v32 - 1, v31) );
            goto LABEL_95;
          goto LABEL_94;
      }
      else
      {
        v33 = *(_DWORD *)(v2 + 432);
        v34 = (int *)StoreCatalogItemModel::getProductId(v10);
        sub_21E8AF4(&v49, v34);
        v50 = 0;
        v51 = 0;
        v52 = 0;
        v50 = (char *)operator new(4u);
        v52 = v50 + 4;
        v51 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                        (int)&v49,
                        (int)&v50,
                        (int)v50);
        v48 = 0;
        DlcPreCheckScreenHandler::tryDownload(v33, (unsigned __int64 *)&v50, (int)&v47, 1, 1, 1, 0);
        if ( v48 )
          v48();
        v36 = (int)v51;
        v35 = v50;
        if ( v50 != v51 )
            v39 = (int *)(*(_DWORD *)v35 - 12);
            if ( v39 != &dword_28898C0 )
              v37 = (unsigned int *)(*(_DWORD *)v35 - 4);
                  v38 = __ldrex(v37);
                while ( __strex(v38 - 1, v37) );
                v38 = (*v37)--;
              if ( v38 <= 0 )
                j_j_j_j__ZdlPv_9(v39);
            v35 += 4;
          while ( v35 != (char *)v36 );
          v35 = v50;
        if ( v35 )
          operator delete(v35);
        v30 = (void *)(v49 - 12);
        if ( (int *)(v49 - 12) != &dword_28898C0 )
          v31 = (unsigned int *)(v49 - 4);
LABEL_95:
            if ( v32 <= 0 )
              j_j_j_j__ZdlPv_9(v30);
            goto LABEL_67;
LABEL_94:
          v32 = (*v31)--;
          goto LABEL_95;
LABEL_67:
      if ( !v3 )
        return;
      goto LABEL_68;
    }
  }
}


void __fastcall DlcBatchModel::~DlcBatchModel(DlcBatchModel *this)
{
  DlcBatchModel *v1; // r0@1

  v1 = DlcBatchModel::~DlcBatchModel(this);
  j_j_j__ZdlPv_3((void *)v1);
}


unsigned int __fastcall DlcBatchModel::searchForContentIds(int a1, int a2)
{
  int v2; // r7@1
  int v3; // r5@1
  __int64 v4; // kr00_8@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r2@4
  int v7; // r8@7
  unsigned int *v8; // r0@8
  unsigned int v9; // r1@10
  void (__fastcall *v10)(int *, int, signed int); // r3@13
  void (__fastcall *v11)(_DWORD, _DWORD, _DWORD); // r4@13
  void *v12; // r0@15
  int v13; // r12@15
  unsigned int *v14; // r2@16
  unsigned int v15; // r3@18
  __int64 v16; // kr08_8@21
  int v17; // r2@21
  unsigned int result; // r0@25
  unsigned int *v19; // r2@26
  unsigned int v20; // r1@28
  unsigned int *v21; // r1@34
  int v22; // [sp+10h] [bp-40h]@14
  void (__fastcall *v23)(_DWORD, _DWORD, _DWORD); // [sp+18h] [bp-38h]@13
  int v24; // [sp+1Ch] [bp-34h]@14
  void *v25; // [sp+20h] [bp-30h]@21
  void (*v26)(void); // [sp+28h] [bp-28h]@15
  void (__fastcall *v27)(int, _QWORD *); // [sp+2Ch] [bp-24h]@21

  v2 = a1;
  *(_DWORD *)(a1 + 20) = 1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 12);
  if ( HIDWORD(v4) )
  {
    v5 = (unsigned int *)(HIDWORD(v4) + 8);
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
  v7 = *(_DWORD *)(a1 + 4);
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  v23 = 0;
  v10 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
  v11 = 0;
  if ( v10 )
    v10(&v22, v3, 2);
    v24 = *(_DWORD *)(v3 + 12);
    v11 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v3 + 8);
    v23 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v3 + 8);
  v26 = 0;
  v12 = operator new(0x1Cu);
  *(_DWORD *)v12 = v2;
  *(_QWORD *)((char *)v12 + 4) = v4;
    v14 = (unsigned int *)(HIDWORD(v4) + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      v13 = *((_DWORD *)v12 + 6);
      v11 = v23;
      ++*v14;
  v16 = *(_QWORD *)&v22;
  *(_QWORD *)&v22 = *(_QWORD *)((char *)v12 + 12);
  *(_QWORD *)((char *)v12 + 12) = v16;
  v17 = v24;
  *((_DWORD *)v12 + 5) = v11;
  v24 = v13;
  *((_DWORD *)v12 + 6) = v17;
  v25 = v12;
  v26 = (void (*)(void))sub_CC9A14;
  v27 = sub_CC9774;
  DownloadMonitor::searchForProductIdsByPackIds(v7, (unsigned __int64 *)(v2 + 52), (int)&v25);
  if ( v26 )
    v26();
  if ( v23 )
    v23(&v22, &v22, 3);
  result = HIDWORD(v4);
    v19 = (unsigned int *)(HIDWORD(v4) + 8);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)HIDWORD(v4) + 12))();
    v21 = (unsigned int *)(HIDWORD(v4) + 8);
        result = __ldrex(v21);
      while ( __strex(result - 1, v21) );
      result = (*v21)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


int __fastcall DlcBatchModel::DlcBatchModel(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_26D7E40;
  *(_QWORD *)(a1 + 4) = *(_QWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  v4 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(v2 + 16) = v4;
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
  *(_QWORD *)(v2 + 20) = *(_QWORD *)(v3 + 20);
  std::vector<std::string,std::allocator<std::string>>::vector(v2 + 28, (unsigned __int64 *)(v3 + 28));
  std::vector<std::string,std::allocator<std::string>>::vector(v2 + 40, (unsigned __int64 *)(v3 + 40));
  std::vector<PackIdVersion,std::allocator<PackIdVersion>>::vector(v2 + 52, (unsigned __int64 *)(v3 + 52));
  return v2;
}


signed int __fastcall DlcBatchModel::compareToContent(int a1, unsigned __int64 *a2)
{
  const void **v2; // r4@1
  const void **v3; // r5@1 OVERLAPPED
  const void **v4; // r6@1 OVERLAPPED
  size_t v5; // r2@3

  v2 = (const void **)*a2;
  *(_QWORD *)&v3 = *(_QWORD *)(a1 + 28);
  if ( (char *)v4 - (char *)v3 == (*a2 >> 32) - (_DWORD)v2 )
  {
    if ( v3 == v4 )
      return 1;
    while ( 1 )
    {
      v5 = *((_DWORD *)*v3 - 3);
      if ( v5 != *((_DWORD *)*v2 - 3) || memcmp(*v3, *v2, v5) )
        break;
      ++v3;
      ++v2;
      if ( v4 == v3 )
        return 1;
    }
  }
  return 0;
}


            if ( DlcBatchModel::isDownloadActive(v14) == 1 )
{
              MainMenuScreenModel::navigateToPurchaseOfferScreen(
                *(_DWORD *)(v2 + 424),
                (StoreCatalogItemModel *)*(_QWORD *)(v3 + 8),
                *(_QWORD *)(v3 + 8) >> 32);
            }
            else
            {
              v21 = *(_DWORD *)(v2 + 432);
              v22 = (int *)StoreCatalogItemModel::getProductId(*(StoreCatalogItemModel **)(v3 + 8));
              sub_21E8AF4(&v39, v22);
              v40 = 0;
              v41 = 0;
              v42 = 0;
              v40 = (char *)operator new(4u);
              v42 = v40 + 4;
              v41 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                              (int)&v39,
                              (int)&v40,
                              (int)v40);
              v38 = 0;
              DlcPreCheckScreenHandler::tryDownload(v21, (unsigned __int64 *)&v40, (int)&v37, 0, 1, 1, 1);
              if ( v38 )
                v38();
              v23 = (int)v41;
              v24 = v40;
              if ( v40 != v41 )
              {
                do
                {
                  v27 = (int *)(*(_DWORD *)v24 - 12);
                  if ( v27 != &dword_28898C0 )
                  {
                    v25 = (unsigned int *)(*(_DWORD *)v24 - 4);
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
                      j_j_j_j__ZdlPv_9(v27);
                  }
                  v24 += 4;
                }
                while ( v24 != (char *)v23 );
                v24 = v40;
              }
              if ( v24 )
                operator delete(v24);
              v28 = (void *)(v39 - 12);
              if ( (int *)(v39 - 12) != &dword_28898C0 )
                v34 = (unsigned int *)(v39 - 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v35 = __ldrex(v34);
                  while ( __strex(v35 - 1, v34) );
                else
                  v35 = (*v34)--;
                if ( v35 <= 0 )
                  j_j_j_j__ZdlPv_9(v28);
            if ( v4 )
LABEL_78:
              if ( &pthread_create )
                __dmb();
                  v29 = __ldrex(v6);
                while ( __strex(v29 - 1, v6) );
              else
                v29 = (*v6)--;
              if ( v29 == 1 )
                v30 = (unsigned int *)(v4 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
                    v31 = __ldrex(v30);
                  while ( __strex(v31 - 1, v30) );
                  v31 = (*v30)--;
                if ( v31 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
            return;
          }
        }
        else
        {
          __clrex();
          v5 = v7;
      }
    }
  }
}


int __fastcall DlcBatchModel::DlcBatchModel(int a1, int a2, int a3, unsigned __int64 *a4)
{
  int v4; // r5@1
  unsigned __int64 *v5; // r4@1
  char v7; // [sp+7h] [bp-31h]@1
  char v8; // [sp+8h] [bp-30h]@1

  v4 = a1;
  v5 = a4;
  *(_DWORD *)a1 = &off_26D7E40;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = a3;
  v7 = 0;
  std::__shared_ptr<bool,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<bool>,bool>(a1 + 12, (int)&v8, &v7);
  *(_DWORD *)(v4 + 20) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  *(_DWORD *)(v4 + 28) = 0;
  *(_DWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 36) = 0;
  *(_DWORD *)(v4 + 40) = 0;
  *(_DWORD *)(v4 + 44) = 0;
  *(_DWORD *)(v4 + 48) = 0;
  std::vector<PackIdVersion,std::allocator<PackIdVersion>>::vector(v4 + 52, v5);
  return v4;
}


PackDownloader **__fastcall DlcBatchModel::cancelDownload(DlcBatchModel *this)
{
  return j_j_j__ZN15DownloadMonitor14cancelDownloadERKSt6vectorISsSaISsEE(
           *((PackDownloader ***)this + 1),
           (unsigned __int64 *)((char *)this + 28));
}


signed int __fastcall DlcBatchModel::isCheckStorageSpaceComplete(DlcBatchModel *this, bool *a2)
{
  signed int v2; // r2@1
  bool v3; // r3@1
  signed int result; // r0@1

  v2 = *((_DWORD *)this + 6);
  v3 = 0;
  result = 0;
  if ( v2 == 2 )
    v3 = 1;
  *a2 = v3;
  if ( v2 > 1 )
    result = 1;
  return result;
}


int __fastcall DlcBatchModel::getDownloadProgress(DlcBatchModel *this)
{
  return j_j_j__ZNK15DownloadMonitor19getDownloadProgressERKSt6vectorISsSaISsEE(
           *((_DWORD *)this + 1),
           (unsigned __int64 *)((char *)this + 28));
}


signed int __fastcall DlcBatchModel::isDownloading(DlcBatchModel *this)
{
  DlcBatchModel *v1; // r4@1
  const void **v2; // r5@1 OVERLAPPED
  const void **v3; // r6@1 OVERLAPPED
  FileDownloadManager *v4; // r0@2
  signed int result; // r0@5

  v1 = this;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 28);
  if ( v2 == v3 )
  {
LABEL_5:
    result = 0;
  }
  else
    while ( 1 )
    {
      v4 = DownloadMonitor::getDownloaderById(*((_DWORD *)v1 + 1), v2);
      if ( v4 )
      {
        if ( FileDownloadManager::getDownloadState(v4) == 2 )
          break;
      }
      ++v2;
      if ( v3 == v2 )
        goto LABEL_5;
    }
    result = 1;
  return result;
}


signed int __fastcall DlcBatchModel::isImporting(DlcBatchModel *this)
{
  DlcBatchModel *v1; // r4@1
  const void **v2; // r5@1
  const void **v3; // r7@1
  int v4; // r6@2
  FileDownloadManager *v5; // r0@3
  signed int result; // r0@7

  v1 = this;
  v3 = (const void **)(*(_QWORD *)((char *)this + 28) >> 32);
  v2 = (const void **)*(_QWORD *)((char *)this + 28);
  if ( v2 == v3 )
  {
    result = 0;
  }
  else
    v4 = 0;
    do
    {
      v5 = DownloadMonitor::getDownloaderById(*((_DWORD *)v1 + 1), v2);
      if ( v5 && FileDownloadManager::getDownloadState(v5) == 3 )
        ++v4;
      ++v2;
    }
    while ( v3 != v2 );
    if ( v4 > 0 && v4 == (signed int)((*(_QWORD *)((char *)v1 + 28) >> 32) - *(_QWORD *)((char *)v1 + 28)) >> 2 )
      result = 1;
  return result;
}


DlcBatchModel *__fastcall DlcBatchModel::~DlcBatchModel(DlcBatchModel *this)
{
  DlcBatchModel *v1; // r10@1
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
  void *v16; // r5@34
  void *v17; // r7@34
  unsigned int *v18; // r2@36
  signed int v19; // r1@38
  int *v20; // r0@44
  void *v21; // r5@49
  void *v22; // r7@49
  unsigned int *v23; // r2@51
  signed int v24; // r1@53
  int *v25; // r0@59
  int v26; // r5@64
  unsigned int *v27; // r1@65
  unsigned int v28; // r0@67
  unsigned int *v29; // r6@71
  unsigned int v30; // r0@73

  v1 = this;
  *(_DWORD *)this = &off_26D7E40;
  v3 = *(_QWORD *)((char *)this + 52) >> 32;
  v2 = *(_QWORD *)((char *)this + 52);
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
    v2 = *((_DWORD *)v1 + 13);
  }
  if ( v2 )
    operator delete((void *)v2);
  v17 = (void *)(*((_QWORD *)v1 + 5) >> 32);
  v16 = (void *)*((_QWORD *)v1 + 5);
  if ( v16 != v17 )
      v20 = (int *)(*(_DWORD *)v16 - 12);
      if ( v20 != &dword_28898C0 )
        v18 = (unsigned int *)(*(_DWORD *)v16 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j_j__ZdlPv_9(v20);
      v16 = (char *)v16 + 4;
    while ( v16 != v17 );
    v16 = (void *)*((_DWORD *)v1 + 10);
  if ( v16 )
    operator delete(v16);
  v22 = (void *)(*(_QWORD *)((char *)v1 + 28) >> 32);
  v21 = (void *)*(_QWORD *)((char *)v1 + 28);
  if ( v21 != v22 )
      v25 = (int *)(*(_DWORD *)v21 - 12);
      if ( v25 != &dword_28898C0 )
        v23 = (unsigned int *)(*(_DWORD *)v21 - 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j_j__ZdlPv_9(v25);
      v21 = (char *)v21 + 4;
    while ( v21 != v22 );
    v21 = (void *)*((_DWORD *)v1 + 7);
  if ( v21 )
    operator delete(v21);
  v26 = *((_DWORD *)v1 + 4);
  if ( v26 )
    v27 = (unsigned int *)(v26 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    else
      v28 = (*v27)--;
    if ( v28 == 1 )
      v29 = (unsigned int *)(v26 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
      if ( &pthread_create )
        __dmb();
        do
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
      else
        v30 = (*v29)--;
      if ( v30 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
  return v1;
}


void __fastcall DlcBatchModel::~DlcBatchModel(DlcBatchModel *this)
{
  DlcBatchModel::~DlcBatchModel(this);
}


int __fastcall DlcBatchModel::DlcBatchModel(int a1, int a2, int a3, unsigned __int64 *a4)
{
  int v4; // r5@1
  unsigned __int64 *v5; // r4@1
  int result; // r0@1
  char v7; // [sp+3h] [bp-15h]@1
  char v8; // [sp+4h] [bp-14h]@1

  v4 = a1;
  v5 = a4;
  *(_DWORD *)a1 = &off_26D7E40;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = a3;
  v7 = 0;
  std::__shared_ptr<bool,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<bool>,bool>(a1 + 12, (int)&v8, &v7);
  *(_DWORD *)(v4 + 20) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  std::vector<std::string,std::allocator<std::string>>::vector(v4 + 28, v5);
  *(_DWORD *)(v4 + 40) = 0;
  *(_DWORD *)(v4 + 44) = 0;
  result = v4;
  *(_DWORD *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 52) = 0;
  *(_DWORD *)(v4 + 56) = 0;
  *(_DWORD *)(v4 + 60) = 0;
  return result;
}


signed int __fastcall DlcBatchModel::isFailed(DlcBatchModel *this)
{
  return j_j_j__ZNK15DownloadMonitor23hasDownloadFailedForAnyERKSt6vectorISsSaISsEE(
           *((_DWORD *)this + 1),
           (unsigned __int64 *)((char *)this + 28));
}


char *__fastcall DlcBatchModel::getContentTitles(DlcBatchModel *this)
{
  return (char *)this + 40;
}


  if ( DlcBatchModel::isDownloading(v3) == 1 )
{
    sub_119C884((void **)&v7, "progressScreen.message.downloadingContent");
  }
  else if ( DlcBatchModel::isImporting(v3) == 1 )
  {
    sub_119C884((void **)&v7, "progressScreen.message.importingContent");
  else
    sub_119C854(&v7, (int *)&Util::EMPTY_STRING);
  I18n::get(v2, (int **)&v7);
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v5 = (unsigned int *)(v7 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
}


__int64 __fastcall DlcBatchModel::getDownloadedBytes(DlcBatchModel *this)
{
  return j_j_j__ZNK15DownloadMonitor18getDownloadedBytesERKSt6vectorISsSaISsEE(
           *((_DWORD *)this + 1),
           (unsigned __int64 *)((char *)this + 28));
}


char *__fastcall DlcBatchModel::getContentIds(DlcBatchModel *this)
{
  return (char *)this + 28;
}


signed int __fastcall DlcBatchModel::compareToPackIds(int a1, unsigned __int64 *a2)
{
  int v2; // r2@1
  int v3; // r12@1
  int v4; // r0@1
  int v5; // r3@1
  unsigned int v7; // r12@4
  unsigned int v8; // r3@4
  bool v9; // zf@5

  v3 = *(_QWORD *)(a1 + 52) >> 32;
  v2 = *(_QWORD *)(a1 + 52);
  v5 = *a2 >> 32;
  v4 = *a2;
  if ( v5 - v4 == v3 - v2 )
  {
    if ( v5 == v4 )
      return 1;
    v7 = -1431655765 * ((v5 - v4) >> 4);
    v8 = 0;
    while ( 1 )
    {
      v9 = *(_QWORD *)v4 == *(_QWORD *)v2;
      if ( *(_QWORD *)v4 == *(_QWORD *)v2 )
        v9 = *(_QWORD *)(v4 + 8) == *(_QWORD *)(v2 + 8);
      if ( !v9 )
        break;
      ++v8;
      v2 += 48;
      v4 += 48;
      if ( v8 >= v7 )
        return 1;
    }
  }
  return 0;
}


signed int __fastcall DlcBatchModel::isDownloadActive(DlcBatchModel *this)
{
  return j_j_j__ZNK15DownloadMonitor22isDownloadActiveForAnyERKSt6vectorISsSaISsEE(
           *((_DWORD *)this + 1),
           (DlcBatchModel *)((char *)this + 28));
}


void __fastcall DlcBatchModel::beginDownload(DlcBatchModel *this, int a2)
{
  __int64 v2; // r2@4

  if ( *((_DWORD *)this + 7) != *((_DWORD *)this + 8) || *((_DWORD *)this + 13) == *((_DWORD *)this + 14) )
  {
    LODWORD(v2) = 0;
    HIDWORD(v2) = a2;
    j_j_j__ZN15DownloadMonitor13beginDownloadERKSt6vectorISsSaISsEEbb(
      *((_DWORD *)this + 1),
      (unsigned __int64 *)((char *)this + 28),
      v2);
  }
  else
    j_j_j__ZN15DownloadMonitor13beginDownloadERKSt6vectorI13PackIdVersionSaIS1_EE(
      (unsigned __int64 *)((char *)this + 52));
}


signed int __fastcall DlcBatchModel::isContentSearchComplete(DlcBatchModel *this)
{
  signed int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 5);
  result = 0;
  if ( v1 > 1 )
    result = 1;
  return result;
}


unsigned int __fastcall DlcBatchModel::getDownloadSize(DlcBatchModel *this)
{
  return j_j_j__ZNK15DownloadMonitor15getDownloadSizeERKSt6vectorISsSaISsEE(
           *((_DWORD *)this + 1),
           (unsigned __int64 *)((char *)this + 28));
}


signed int __fastcall DlcBatchModel::getDlcInstalledState(DlcBatchModel *this)
{
  DlcBatchModel *v1; // r4@1
  const void **v2; // r5@1 OVERLAPPED
  const void **v3; // r6@1 OVERLAPPED
  char i; // r7@2
  StoreCatalogItem *v5; // r0@3
  int v6; // r0@4
  signed int result; // r0@9

  v1 = this;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 28);
  if ( v3 == v2 )
    return 0;
  for ( i = 0; v3 != v2; ++v2 )
  {
    v5 = (StoreCatalogItem *)StoreCatalogRepository::getStoreCatalogItemByProductId(*((_DWORD *)v1 + 2), v2);
    if ( !v5 )
      return 0;
    v6 = StoreCatalogItem::getInstallState(v5);
    if ( v6 == 2 )
    {
      i = 1;
    }
    else if ( v6 != 1 )
  }
  result = 1;
  if ( i & 1 )
    result = 2;
  return result;
}


void __fastcall DlcBatchModel::beginDownload(DlcBatchModel *this, int a2)
{
  DlcBatchModel::beginDownload(this, a2);
}


unsigned int __fastcall DlcBatchModel::checkStorageSpace(int a1, int a2)
{
  int v2; // r7@1
  int v3; // r6@1
  __int64 v4; // kr00_8@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  unsigned int v7; // r8@7
  void (__fastcall *v8)(int *, int, signed int); // r3@7
  unsigned int *v9; // r0@10
  unsigned int v10; // r1@12
  void *v11; // r0@15
  int (__fastcall *v12)(_DWORD, _DWORD, _DWORD); // r2@15
  int v13; // r2@15
  unsigned int *v14; // r2@16
  unsigned int v15; // r3@18
  __int64 v16; // r2@21
  unsigned int result; // r0@23
  unsigned int *v18; // r2@24
  unsigned int v19; // r1@26
  unsigned int *v20; // r1@34
  int v21; // [sp+4h] [bp-44h]@8
  int (__fastcall *v22)(_DWORD, _DWORD, _DWORD); // [sp+Ch] [bp-3Ch]@7
  int v23; // [sp+10h] [bp-38h]@8
  __int64 v24; // [sp+14h] [bp-34h]@9
  void *v25; // [sp+1Ch] [bp-2Ch]@21
  void (*v26)(void); // [sp+24h] [bp-24h]@15

  v2 = a1;
  *(_DWORD *)(a1 + 24) = 1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 12);
  if ( HIDWORD(v4) )
  {
    v5 = (unsigned int *)(HIDWORD(v4) + 8);
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
  v7 = *(_DWORD *)(v2 + 4);
  v22 = 0;
  v8 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
  if ( v8 )
    v8(&v21, v3, 2);
    v23 = *(_DWORD *)(v3 + 12);
    v22 = *(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(v3 + 8);
  v24 = v4;
    v9 = (unsigned int *)(HIDWORD(v4) + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
      ++*v9;
  v26 = 0;
  v11 = operator new(0x1Cu);
  *(_DWORD *)v11 = v2;
  *(_QWORD *)((char *)v11 + 4) = *(_QWORD *)&v21;
  v12 = v22;
  *((_DWORD *)v11 + 3) = v12;
  *((_DWORD *)v11 + 4) = v23;
  *((_DWORD *)v11 + 5) = v24;
  v13 = HIDWORD(v24);
  *((_DWORD *)v11 + 6) = HIDWORD(v24);
  if ( v13 )
    v14 = (unsigned int *)(v13 + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  HIDWORD(v16) = sub_CC9B4C;
  v25 = v11;
  LODWORD(v16) = sub_CC9C8C;
  *(_QWORD *)&v26 = v16;
  DownloadMonitor::checkStorageRequirements(v7, (unsigned __int64 *)(v2 + 28), (int)&v25);
  if ( v26 )
    v26();
  result = HIDWORD(v24);
  if ( HIDWORD(v24) )
    v18 = (unsigned int *)(HIDWORD(v24) + 8);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  if ( v22 )
    result = v22(&v21, &v21, 3);
    v20 = (unsigned int *)(HIDWORD(v4) + 8);
        result = __ldrex(v20);
      while ( __strex(result - 1, v20) );
      result = (*v20)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}
