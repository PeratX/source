

void __fastcall FileDownloadManager::~FileDownloadManager(FileDownloadManager *this)
{
  FileDownloadManager *v1; // r0@1

  v1 = FileDownloadManager::~FileDownloadManager(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall FileDownloadManager::downloadFile(int a1, int a2, int a3, int *a4, int a5, int a6, int a7)
{
  FileDownloadManager::downloadFile(a1, a2, a3, a4, a5, a6, a7);
}


int __fastcall FileDownloadManager::_writeData(int a1, unsigned __int64 *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r5@1
  unsigned __int64 *v8; // r9@1
  unsigned int v9; // r6@2
  unsigned int *v10; // r1@2
  unsigned int v11; // r4@5
  unsigned int v12; // r7@6
  int v13; // r10@7
  int v14; // r4@7
  unsigned int *v15; // r8@7
  unsigned int v16; // r0@9
  unsigned int v17; // r0@14
  __int64 v18; // r10@17
  unsigned int v19; // r0@20
  int v20; // r2@25
  unsigned int v21; // r0@27
  int v22; // r0@30
  int v23; // r1@30
  int v24; // r7@30
  char *v25; // r6@31
  int v26; // r1@31
  int v27; // r5@33
  _DWORD *v28; // r0@35
  int v29; // r2@35
  int v30; // r5@35
  unsigned int v31; // r3@37
  int v32; // r6@41
  unsigned int v33; // r0@42
  void (__fastcall *v34)(int *, int, signed int); // r3@45
  void (__fastcall *v35)(_DWORD, _DWORD, _DWORD); // r5@45
  void *v36; // r0@47
  int v37; // r12@47
  unsigned int *v38; // r2@48
  unsigned int v39; // r3@50
  int v40; // r3@53
  __int64 v41; // kr10_8@53
  int v42; // r1@53
  unsigned int *v43; // r2@58
  unsigned int v44; // r1@60
  unsigned int v45; // r0@69
  int result; // r0@76
  int v47; // [sp+Ch] [bp-74h]@28
  int v48; // [sp+10h] [bp-70h]@17
  int v49; // [sp+14h] [bp-6Ch]@43
  int v50; // [sp+18h] [bp-68h]@40
  __int64 v51; // [sp+20h] [bp-60h]@45
  int v52; // [sp+28h] [bp-58h]@46
  void (__fastcall *v53)(_DWORD, _DWORD, _DWORD); // [sp+30h] [bp-50h]@45
  int v54; // [sp+34h] [bp-4Ch]@46
  void *v55; // [sp+3Ch] [bp-44h]@53
  void (*v56)(void); // [sp+44h] [bp-3Ch]@47
  int (__fastcall *v57)(int *); // [sp+48h] [bp-38h]@53
  _DWORD *v58; // [sp+4Ch] [bp-34h]@40
  void (*v59)(void); // [sp+54h] [bp-2Ch]@35
  signed int (__fastcall *v60)(int); // [sp+58h] [bp-28h]@40

  v7 = *(_DWORD *)(a1 + 8);
  v8 = a2;
  if ( !v7 )
    std::__throw_bad_weak_ptr();
  v9 = *(_DWORD *)(v7 + 4);
  v10 = (unsigned int *)(v7 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v9 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v11 = __ldrex(v10);
      if ( v11 == v9 )
        break;
      __clrex();
      v9 = v11;
    }
    v12 = __strex(v9 + 1, v10);
    v9 = v11;
  }
  while ( v12 );
  __dmb();
  v13 = *(_DWORD *)(a1 + 4);
  v14 = v7;
  v15 = (unsigned int *)(v7 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v16 = __ldrex(v15);
    while ( __strex(v16 + 1, v15) );
  else
    ++*v15;
      v17 = __ldrex(v10);
    while ( __strex(v17 - 1, v10) );
    v17 = (*v10)--;
  HIDWORD(v18) = a4;
  v48 = a3;
  if ( v17 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
    if ( &pthread_create )
      do
        v19 = __ldrex(v15);
      while ( __strex(v19 - 1, v15) );
    else
      v19 = (*v15)--;
    if ( v19 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  v20 = TaskGroup::DISK;
      v21 = __ldrex(v15);
    while ( __strex(v21 + 1, v15) );
    v47 = v20;
    v47 = TaskGroup::DISK;
  v22 = *v8 >> 32;
  v23 = *v8;
  v24 = v22 - v23;
  if ( v22 == v23 )
    v25 = 0;
    v26 = *v8 >> 32;
    v25 = (char *)operator new(v22 - v23);
    v22 = *v8 >> 32;
    v26 = *v8;
  v27 = v22 - v26;
  if ( v22 != v26 )
    _aeabi_memmove(v25, v26);
  v59 = 0;
  v28 = operator new(0x28u);
  v29 = (int)&v25[v27];
  v30 = v13;
  *v28 = v13;
  v28[1] = v14;
  LODWORD(v18) = v48;
      v31 = __ldrex(v15);
    while ( __strex(v31 + 1, v15) );
  v28[2] = v25;
  v28[3] = v29;
  v28[4] = &v25[v24];
  *((_QWORD *)v28 + 3) = v18;
  v28[8] = a5;
  v28[9] = a6;
  v58 = v28;
  v59 = (void (*)(void))sub_15E58D0;
  v60 = sub_15E5628;
  v50 = v30;
    v32 = a7;
      v33 = __ldrex(v15);
    while ( __strex(v33 + 1, v15) );
    v49 = v14;
  v51 = v18;
  v53 = 0;
  v34 = *(void (__fastcall **)(int *, int, signed int))(v32 + 8);
  v35 = 0;
  if ( v34 )
    v34(&v52, v32, 2);
    v54 = *(_DWORD *)(v32 + 12);
    v35 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v32 + 8);
    v53 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v32 + 8);
  v56 = 0;
  v36 = operator new(0x20u);
  *(_DWORD *)v36 = v50;
  *((_DWORD *)v36 + 1) = v14;
  if ( v14 )
    v38 = (unsigned int *)(v14 + 8);
        v39 = __ldrex(v38);
      while ( __strex(v39 + 1, v38) );
      v37 = *((_DWORD *)v36 + 7);
      v35 = v53;
      ++*v38;
  v40 = HIDWORD(v51);
  *((_DWORD *)v36 + 2) = v51;
  *((_DWORD *)v36 + 3) = v40;
  v41 = *(_QWORD *)&v52;
  *(_QWORD *)&v52 = *((_QWORD *)v36 + 2);
  *((_QWORD *)v36 + 2) = v41;
  v42 = v54;
  *((_DWORD *)v36 + 6) = v35;
  v54 = v37;
  *((_DWORD *)v36 + 7) = v42;
  v55 = v36;
  v56 = (void (*)(void))sub_15E5B6C;
  v57 = sub_15E5A24;
  TaskGroup::queue(v47, (int)&v58, (int)&v55, 1u, 0xFFFFFFFF);
  if ( v56 )
    v56();
  if ( v53 )
    v53(&v52, &v52, 3);
    v43 = (unsigned int *)(v14 + 8);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 == 1 )
      (*(void (**)(void))(*(_DWORD *)v14 + 12))();
  if ( v59 )
    v59();
      v45 = __ldrex(v15);
    while ( __strex(v45 - 1, v15) );
    v45 = (*v15)--;
  if ( v45 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v49 + 12))(v49);
      result = __ldrex(v15);
    while ( __strex(result - 1, v15) );
    result = (*v15)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v49 + 12))(v49);
  return result;
}


    if ( FileDownloadManager::getDownloadState(v6) == 5 )
{
  }
  return v1;
}


void __fastcall FileDownloadManager::downloadFile(int a1, int a2, int a3, int *a4, int a5, int a6, int a7)
{
  int v7; // r7@1
  int v8; // r8@1
  int v9; // r9@1
  int *v10; // r11@1
  int v11; // r0@1
  bool v12; // zf@1
  void (*v13)(void); // r3@6
  char *v14; // r0@6
  char *v15; // r0@7
  unsigned int *v16; // r2@8
  signed int v17; // r1@10
  void *v18; // r0@12
  void *v19; // r0@13
  void *v20; // r0@14
  void *v21; // r0@15
  int v22; // r10@16 OVERLAPPED
  unsigned int *v23; // r0@17
  unsigned int v24; // r1@17
  unsigned int v25; // r2@20
  unsigned int v26; // r3@21
  int v27; // r9@22 OVERLAPPED
  unsigned int *v28; // r6@22
  unsigned int v29; // r1@24
  unsigned int v30; // r1@29
  unsigned int v31; // r0@35
  int v32; // r11@40
  void (__fastcall *v33)(int, int, int, int *); // r1@40
  int v34; // r5@41
  unsigned int v35; // r0@42
  void (__fastcall *v36)(int *, int, signed int); // r3@45
  void (__fastcall *v37)(_DWORD, _DWORD, _DWORD); // r4@45
  void *v38; // r0@47
  int v39; // r12@47
  int v40; // r1@47
  unsigned int *v41; // r1@48
  unsigned int v42; // r2@50
  __int64 v43; // r2@53
  __int64 v44; // kr00_8@53
  int v45; // r1@53
  int v46; // r0@57
  unsigned int *v47; // r2@58
  unsigned int v48; // r1@60
  unsigned int v49; // r0@67
  unsigned int *v50; // r2@73
  signed int v51; // r1@75
  unsigned int *v52; // r2@77
  signed int v53; // r1@79
  unsigned int *v54; // r2@81
  signed int v55; // r1@83
  unsigned int *v56; // r2@85
  signed int v57; // r1@87
  unsigned int *v58; // r2@105
  signed int v59; // r1@107
  void (__fastcall *v60)(int, int, int, int *); // [sp+10h] [bp-90h]@41
  int *v61; // [sp+14h] [bp-8Ch]@32
  int v62; // [sp+1Ch] [bp-84h]@17
  char *v63; // [sp+20h] [bp-80h]@5
  __int64 v64; // [sp+24h] [bp-7Ch]@40
  int v65; // [sp+2Ch] [bp-74h]@46
  int v66; // [sp+30h] [bp-70h]@53
  void (__fastcall *v67)(_DWORD, _DWORD, _DWORD); // [sp+34h] [bp-6Ch]@45
  int v68; // [sp+38h] [bp-68h]@46
  void *v69; // [sp+3Ch] [bp-64h]@53
  void (__cdecl *v70)(void **, void **, signed int); // [sp+44h] [bp-5Ch]@47
  int (__fastcall *v71)(int, int); // [sp+48h] [bp-58h]@53
  int v72; // [sp+50h] [bp-50h]@12
  int v73; // [sp+54h] [bp-4Ch]@12
  int v74; // [sp+58h] [bp-48h]@12
  __int64 v75; // [sp+60h] [bp-40h]@12
  int v76; // [sp+68h] [bp-38h]@12
  char *v77; // [sp+74h] [bp-2Ch]@6

  v7 = a1;
  v8 = a3;
  v9 = a2;
  v10 = (int *)(a1 + 16);
  v11 = *(_DWORD *)(*(_DWORD *)(a1 + 16) - 12);
  v12 = v11 == 0;
  if ( v11 )
    v12 = *(_DWORD *)(*(_DWORD *)(v7 + 32) - 12) == 0;
  if ( v12 || !*(_QWORD *)(v7 + 24) )
  {
    sub_21E8AF4(&v73, a4);
    sub_21E94B4((void **)&v72, (const char *)&unk_257BC67);
    sub_21E8AF4(&v74, &v73);
    v75 = 0LL;
    sub_21E8AF4(&v76, &v72);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v10, &v74);
    *(_QWORD *)(v7 + 24) = v75;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)(v7 + 32),
      &v76);
    v18 = (void *)(v76 - 12);
    if ( (int *)(v76 - 12) != &dword_28898C0 )
    {
      v50 = (unsigned int *)(v76 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
      }
      else
        v51 = (*v50)--;
      if ( v51 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    }
    v19 = (void *)(v74 - 12);
    if ( (int *)(v74 - 12) != &dword_28898C0 )
      v52 = (unsigned int *)(v74 - 4);
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
        v53 = (*v52)--;
      if ( v53 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    v20 = (void *)(v72 - 12);
    if ( (int *)(v72 - 12) != &dword_28898C0 )
      v54 = (unsigned int *)(v72 - 4);
          v55 = __ldrex(v54);
        while ( __strex(v55 - 1, v54) );
        v55 = (*v54)--;
      if ( v55 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    v21 = (void *)(v73 - 12);
    if ( (int *)(v73 - 12) != &dword_28898C0 )
      v56 = (unsigned int *)(v73 - 4);
          v57 = __ldrex(v56);
        while ( __strex(v57 - 1, v56) );
        v57 = (*v56)--;
      if ( v57 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    v22 = *(_DWORD *)(v7 + 8);
    if ( !v22 )
      std::__throw_bad_weak_ptr();
    v62 = v9;
    v23 = (unsigned int *)(v22 + 4);
    v24 = *(_DWORD *)(v22 + 4);
    do
      while ( 1 )
        if ( !v24 )
          std::__throw_bad_weak_ptr();
        v25 = __ldrex(v23);
        if ( v25 == v24 )
          break;
        __clrex();
        v24 = v25;
      v26 = __strex(v24 + 1, v23);
      v24 = v25;
    while ( v26 );
    __dmb();
    v27 = *(_DWORD *)(v7 + 4);
    v28 = (unsigned int *)(v22 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 + 1, v28) );
    else
      ++*v28;
        v30 = __ldrex(v23);
      while ( __strex(v30 - 1, v23) );
      v30 = (*v23)--;
    v61 = v10;
    if ( v30 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
          v31 = __ldrex(v28);
        while ( __strex(v31 - 1, v28) );
        v31 = (*v28)--;
      if ( v31 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
    *(_DWORD *)(v7 + 40) = 1;
    v32 = *(_DWORD *)(v7 + 52);
    v33 = *(void (__fastcall **)(int, int, int, int *))(*(_DWORD *)v32 + 12);
    v64 = *(_QWORD *)(&v22 - 1);
      v34 = a7;
      v60 = v33;
        v35 = __ldrex(v28);
      while ( __strex(v35 + 1, v28) );
    v67 = 0;
    v36 = *(void (__fastcall **)(int *, int, signed int))(v34 + 8);
    v37 = 0;
    if ( v36 )
      v36(&v65, v34, 2);
      v68 = *(_DWORD *)(v34 + 12);
      v37 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v34 + 8);
      v67 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v34 + 8);
    v70 = 0;
    v38 = operator new(0x18u);
    *(_DWORD *)v38 = v64;
    v40 = HIDWORD(v64);
    *((_DWORD *)v38 + 1) = HIDWORD(v64);
    if ( v40 )
      v41 = (unsigned int *)(v40 + 8);
          v42 = __ldrex(v41);
        while ( __strex(v42 + 1, v41) );
        v39 = *((_DWORD *)v38 + 5);
        v37 = v67;
        ++*v41;
    v43 = *(_QWORD *)&v65;
    v44 = *((_QWORD *)v38 + 1);
    v65 = *((_QWORD *)v38 + 1);
    v66 = HIDWORD(v44);
    *((_QWORD *)v38 + 1) = v43;
    v45 = v68;
    *((_DWORD *)v38 + 4) = v37;
    v68 = v39;
    *((_DWORD *)v38 + 5) = v45;
    v69 = v38;
    v70 = (void (__cdecl *)(void **, void **, signed int))sub_15E4CA8;
    v71 = sub_15E4464;
    v60(v32, v62, v8, v61);
    if ( v70 )
      v70(&v69, &v69, 3);
    if ( v67 )
      v67(&v65, &v65, 3);
    v46 = HIDWORD(v64);
    if ( HIDWORD(v64) )
      v47 = (unsigned int *)(HIDWORD(v64) + 8);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 == 1 )
        (*(void (__cdecl **)(int, _DWORD, unsigned int *))(*(_DWORD *)v46 + 12))(
          v46,
          *(_DWORD *)(*(_DWORD *)v46 + 12),
          v47);
        v49 = __ldrex(v28);
      while ( __strex(v49 - 1, v28) );
      v49 = (*v28)--;
    if ( v49 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
  }
  else
    sub_21E8AF4((int *)&v63, (int *)&Util::EMPTY_STRING);
    if ( !*(_DWORD *)(a7 + 8) )
      sub_21E5F48();
    v13 = *(void (**)(void))(a7 + 12);
    v77 = v63;
    v63 = (char *)&unk_28898CC;
    v13();
    v14 = v77 - 12;
    if ( (int *)(v77 - 12) != &dword_28898C0 )
      v58 = (unsigned int *)(v77 - 4);
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
        v59 = (*v58)--;
      if ( v59 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    v15 = v63 - 12;
    if ( (int *)(v63 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v63 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
}


int __fastcall FileDownloadManager::FileDownloadManager(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  void *v6; // r0@1
  void *v7; // r0@2
  int v8; // r0@3
  unsigned int *v9; // r0@4
  unsigned int v10; // r1@6
  int v11; // r0@9
  unsigned int *v12; // r0@10
  unsigned int v13; // r1@12
  unsigned int *v15; // r2@16
  signed int v16; // r1@18
  unsigned int *v17; // r2@20
  signed int v18; // r1@22
  int v19; // [sp+4h] [bp-2Ch]@1
  int v20; // [sp+Ch] [bp-24h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  *(_DWORD *)a1 = &off_26EBACC;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  sub_21E94B4((void **)&v20, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v19, (const char *)&unk_257BC67);
  sub_21E8AF4((int *)(v3 + 16), &v20);
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 28) = 0;
  sub_21E8AF4((int *)(v3 + 32), &v19);
  v6 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v19 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v20 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  *(_DWORD *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 44) = *(_DWORD *)v4;
  v8 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v3 + 48) = v8;
  if ( v8 )
    v9 = (unsigned int *)(v8 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
      ++*v9;
  *(_DWORD *)(v3 + 52) = *(_DWORD *)v5;
  v11 = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(v3 + 56) = v11;
  if ( v11 )
    v12 = (unsigned int *)(v11 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
      ++*v12;
  _aeabi_memclr4(v3 + 60, 44);
  MPMCQueue<std::function<void ()(void)>>::MPMCQueue(v3 + 60);
  return v3;
}


FileDownloadManager *__fastcall FileDownloadManager::~FileDownloadManager(FileDownloadManager *this)
{
  FileDownloadManager *v1; // r8@1
  int v2; // r1@1
  int v3; // r2@1
  int v4; // r3@1
  int v5; // r7@1
  __int64 v6; // kr00_8@1
  int v7; // r4@1
  void **v8; // r5@1
  void *v9; // r0@1
  unsigned int v10; // r6@2
  unsigned int v11; // r1@2
  unsigned int v12; // r7@3
  void *v13; // t1@4
  int v14; // r5@7
  unsigned int *v15; // r1@8
  unsigned int v16; // r0@10
  unsigned int *v17; // r6@14
  unsigned int v18; // r0@16
  int v19; // r5@21
  unsigned int *v20; // r1@22
  unsigned int v21; // r0@24
  unsigned int *v22; // r6@28
  unsigned int v23; // r0@30
  int v24; // r1@35
  void *v25; // r0@35
  int v26; // r1@36
  void *v27; // r0@36
  int v28; // r0@37
  unsigned int *v29; // r2@38
  unsigned int v30; // r1@40
  unsigned int *v32; // r2@46
  signed int v33; // r1@48
  unsigned int *v34; // r2@50
  signed int v35; // r1@52
  int v36; // [sp+0h] [bp-38h]@1
  __int64 v37; // [sp+4h] [bp-34h]@1
  int v38; // [sp+Ch] [bp-2Ch]@1
  int v39; // [sp+10h] [bp-28h]@1
  int v40; // [sp+14h] [bp-24h]@1
  int v41; // [sp+18h] [bp-20h]@1
  int v42; // [sp+1Ch] [bp-1Ch]@1

  v1 = this;
  *(_DWORD *)this = &off_26EBACC;
  v2 = *((_DWORD *)this + 18);
  v3 = *((_DWORD *)this + 19);
  v4 = *((_DWORD *)this + 20);
  v5 = *((_DWORD *)this + 21);
  v6 = *((_QWORD *)this + 11);
  v7 = *((_DWORD *)this + 24);
  v39 = *((_DWORD *)this + 17);
  v40 = v2;
  v41 = v3;
  v42 = v4;
  v36 = v5;
  v37 = v6;
  v38 = v7;
  v8 = (void **)((char *)this + 60);
  std::deque<std::function<void ()(void)>,std::allocator<std::function<void ()(void)>>>::_M_destroy_data_aux(
    (int)this + 60,
    (int)&v39,
    (int)&v36);
  v9 = (void *)*((_DWORD *)v1 + 15);
  if ( v9 )
  {
    v10 = *((_DWORD *)v1 + 24);
    v11 = *((_DWORD *)v1 + 20);
    if ( v11 < v10 + 4 )
    {
      v12 = v11 - 4;
      do
      {
        v13 = *(void **)(v12 + 4);
        v12 += 4;
        operator delete(v13);
      }
      while ( v12 < v10 );
      v9 = *v8;
    }
    operator delete(v9);
  }
  v14 = *((_DWORD *)v1 + 14);
  if ( v14 )
    v15 = (unsigned int *)(v14 + 4);
    if ( &pthread_create )
      __dmb();
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    else
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( &pthread_create )
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      else
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  v19 = *((_DWORD *)v1 + 12);
  if ( v19 )
    v20 = (unsigned int *)(v19 + 4);
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
  v24 = *((_DWORD *)v1 + 8);
  v25 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v24 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = *((_DWORD *)v1 + 4);
  v27 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v26 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
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


    if ( FileDownloadManager::getDownloadState(v6) == 5 )
{
  }
  return v1;
}


signed int __fastcall FileDownloadManager::cancelDownload(FileDownloadManager *this)
{
  FileDownloadManager *v1; // r4@1
  signed int result; // r0@1

  v1 = this;
  (*(void (**)(void))(**((_DWORD **)this + 13) + 24))();
  result = 5;
  *((_DWORD *)v1 + 10) = 5;
  return result;
}


int __fastcall FileDownloadManager::update(FileDownloadManager *this)
{
  FileDownloadManager *v1; // r4@1
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
  (*(void (**)(void))(**((_DWORD **)this + 13) + 8))();
  v2 = (unsigned __int8 *)v1 + 100;
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
    v4 = *((_DWORD *)v1 + 17);
    if ( *((_DWORD *)v1 + 21) == v4 )
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
    v9 = *((_DWORD *)v1 + 17);
    v10 = *(void (**)(void))(v9 + 8);
    if ( v9 == *((_DWORD *)v1 + 19) - 16 )
      if ( v10 )
        v10();
      operator delete(*((void **)v1 + 18));
      v12 = *((_DWORD *)v1 + 20);
      *((_DWORD *)v1 + 20) = v12 + 4;
      v11 = *(_DWORD *)(v12 + 4);
      *((_DWORD *)v1 + 18) = v11;
      *((_DWORD *)v1 + 19) = v11 + 512;
    else
      {
        v9 = *((_DWORD *)v1 + 17);
      }
      v11 = v9 + 16;
    *((_DWORD *)v1 + 17) = v11;
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


void __fastcall FileDownloadManager::~FileDownloadManager(FileDownloadManager *this)
{
  FileDownloadManager::~FileDownloadManager(this);
}
