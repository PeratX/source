

__int64 __fastcall FileUploadManager::getFileSize(FileUploadManager *this)
{
  int v1; // r1@1
  bool v2; // zf@1
  __int64 result; // r0@4

  v1 = *(_DWORD *)(*((_DWORD *)this + 4) - 12);
  v2 = v1 == 0;
  if ( v1 )
    v2 = *(_DWORD *)(*((_DWORD *)this + 8) - 12) == 0;
  if ( v2 )
    result = 0LL;
  else
    result = *((_QWORD *)this + 3);
  return result;
}


int __fastcall FileUploadManager::_resumeUpload(FileUploadManager *this)
{
  FileUploadManager *v1; // r5@1
  int v2; // r4@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  int v7; // r8@7
  unsigned int *v8; // r7@7
  unsigned int v9; // r1@9
  unsigned int v10; // r1@14
  unsigned int v11; // r0@20
  int v12; // r6@25
  void (__fastcall *v13)(int, char *, _DWORD **); // r9@25
  unsigned int v14; // r0@27
  _DWORD *v15; // r0@30
  unsigned int v16; // r1@32
  __int64 v17; // r1@35
  unsigned int v18; // r0@39
  int result; // r0@46
  _DWORD *v20; // [sp+4h] [bp-2Ch]@35
  void (*v21)(void); // [sp+Ch] [bp-24h]@30

  v1 = this;
  v2 = *((_DWORD *)this + 2);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *((_DWORD *)v1 + 1);
  v8 = (unsigned int *)(v2 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v9 = __ldrex(v8);
    while ( __strex(v9 + 1, v8) );
  else
    ++*v8;
      v10 = __ldrex(v4);
    while ( __strex(v10 - 1, v4) );
    v10 = (*v4)--;
  if ( v10 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v11 = __ldrex(v8);
      while ( __strex(v11 - 1, v8) );
    else
      v11 = (*v8)--;
    if ( v11 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  v12 = *((_DWORD *)v1 + 24);
  v13 = *(void (__fastcall **)(int, char *, _DWORD **))(*(_DWORD *)v12 + 16);
      v14 = __ldrex(v8);
    while ( __strex(v14 + 1, v8) );
  v21 = 0;
  v15 = operator new(8u);
  *v15 = v7;
  v15[1] = v2;
      v16 = __ldrex(v8);
    while ( __strex(v16 + 1, v8) );
  LODWORD(v17) = sub_15EA9D4;
  v20 = v15;
  HIDWORD(v17) = sub_15EA840;
  *(_QWORD *)&v21 = v17;
  v13(v12, (char *)v1 + 16, &v20);
  if ( v21 )
    v21();
      v18 = __ldrex(v8);
    while ( __strex(v18 - 1, v8) );
    v18 = (*v8)--;
  if ( v18 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v8);
    while ( __strex(result - 1, v8) );
    result = (*v8)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


    if ( FileUploadManager::getUploadState(v6) == 5 )
{
  }
  return v1;
}


signed int __fastcall FileUploadManager::_uploadChunk(FileUploadManager *this, const UploadChunkInfo *a2)
{
  const UploadChunkInfo *v2; // r11@1
  FileUploadManager *v3; // r6@1
  signed int result; // r0@1
  int v5; // r10@2
  unsigned int v6; // r1@3
  unsigned int *v7; // r0@3
  unsigned int v8; // r2@6
  unsigned int v9; // r3@7
  int v10; // r7@8
  unsigned int *v11; // r9@8
  unsigned int v12; // r1@10
  unsigned int v13; // r1@15
  unsigned int v14; // r0@21
  unsigned int v15; // r0@28
  int v16; // r2@31
  int v17; // r3@31
  int v18; // r4@31
  int v19; // r5@31
  int v20; // r6@31
  _DWORD *v21; // r0@31
  unsigned int v22; // r1@33
  int v23; // r3@36
  int v24; // r2@36
  int v25; // r4@36
  int v26; // r5@36
  int v27; // r6@36
  int v28; // r7@36
  unsigned int v29; // r0@42
  int v30; // [sp+4h] [bp-64h]@26
  char v31; // [sp+8h] [bp-60h]@36
  void (*v32)(void); // [sp+10h] [bp-58h]@36
  int v33; // [sp+18h] [bp-50h]@31
  int v34; // [sp+1Ch] [bp-4Ch]@31
  int v35; // [sp+20h] [bp-48h]@31
  int v36; // [sp+24h] [bp-44h]@31
  int v37; // [sp+28h] [bp-40h]@31
  int v38; // [sp+2Ch] [bp-3Ch]@31
  _DWORD *v39; // [sp+34h] [bp-34h]@36
  void (*v40)(void); // [sp+3Ch] [bp-2Ch]@31
  signed int (__fastcall *v41)(int); // [sp+40h] [bp-28h]@36

  v2 = a2;
  v3 = this;
  result = UploadChunkInfo::isValid(a2);
  if ( result == 1 )
  {
    *((_DWORD *)v3 + 20) = 2;
    v5 = *((_DWORD *)v3 + 2);
    if ( !v5 )
      std::__throw_bad_weak_ptr();
    v6 = *(_DWORD *)(v5 + 4);
    v7 = (unsigned int *)(v5 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v6 )
          std::__throw_bad_weak_ptr();
        __dmb();
        v8 = __ldrex(v7);
        if ( v8 == v6 )
          break;
        __clrex();
        v6 = v8;
      }
      v9 = __strex(v6 + 1, v7);
      v6 = v8;
    }
    while ( v9 );
    __dmb();
    v10 = *((_DWORD *)v3 + 1);
    v11 = (unsigned int *)(v5 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
    else
      ++*v11;
        v13 = __ldrex(v7);
      while ( __strex(v13 - 1, v7) );
      v13 = (*v7)--;
    if ( v13 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
        do
          v14 = __ldrex(v11);
        while ( __strex(v14 - 1, v11) );
      else
        v14 = (*v11)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
    v30 = TaskGroup::DISK;
        v15 = __ldrex(v11);
      while ( __strex(v15 + 1, v11) );
    v16 = *((_DWORD *)v2 + 1);
    v17 = *((_DWORD *)v2 + 2);
    v18 = *((_DWORD *)v2 + 3);
    v19 = *((_DWORD *)v2 + 4);
    v20 = *((_DWORD *)v2 + 5);
    v33 = *(_DWORD *)v2;
    v34 = v16;
    v35 = v17;
    v36 = v18;
    v37 = v19;
    v38 = v20;
    v40 = 0;
    v21 = operator new(0x20u);
    *v21 = v10;
    v21[1] = v5;
        v22 = __ldrex(v11);
      while ( __strex(v22 + 1, v11) );
    v23 = (int)(v21 + 2);
    v24 = v34;
    v25 = v35;
    v26 = v36;
    v27 = v37;
    v28 = v38;
    *(_DWORD *)v23 = v33;
    *(_DWORD *)(v23 + 4) = v24;
    *(_DWORD *)(v23 + 8) = v25;
    *(_DWORD *)(v23 + 12) = v26;
    *(_DWORD *)(v23 + 16) = v27;
    *(_DWORD *)(v23 + 20) = v28;
    v39 = v21;
    v40 = (void (*)(void))sub_15EAE34;
    v41 = sub_15EAA78;
    v32 = 0;
    TaskGroup::queue(v30, (int)&v39, (int)&v31, 1u, 0xFFFFFFFF);
    if ( v32 )
      v32();
    if ( v40 )
      v40();
        v29 = __ldrex(v11);
      while ( __strex(v29 - 1, v11) );
      v29 = (*v11)--;
    if ( v29 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
        result = __ldrex(v11);
      while ( __strex(result - 1, v11) );
      result = (*v11)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
  return result;
}


int __fastcall FileUploadManager::uploadStream(int result)
{
  int v1; // r1@1
  bool v2; // zf@1

  v1 = *(_DWORD *)(*(_DWORD *)(result + 16) - 12);
  v2 = v1 == 0;
  if ( v1 )
    v2 = *(_DWORD *)(*(_DWORD *)(result + 32) - 12) == 0;
  if ( !v2 )
  {
    if ( *(_QWORD *)(result + 24) )
      result = j_j_j__ZN17FileUploadManager13_uploadStreamEv((FileUploadManager *)result);
  }
  return result;
}


int __fastcall FileUploadManager::_uploadStream(FileUploadManager *this)
{
  int v1; // r4@1
  unsigned int v2; // r2@2
  unsigned int *v3; // r1@2
  unsigned int v4; // r3@5
  unsigned int v5; // r7@6
  int v6; // r7@7
  unsigned int *v7; // r6@7
  unsigned int v8; // r0@9
  unsigned int v9; // r0@14
  unsigned int v10; // r0@20
  unsigned int v11; // r0@27
  unsigned int v12; // r0@32
  int v13; // r5@35
  unsigned int v14; // r0@37
  unsigned int v15; // r0@42
  unsigned int v16; // r0@47
  _DWORD *v17; // r0@50
  int v18; // r1@50
  unsigned int *v19; // r1@51
  unsigned int v20; // r2@53
  int v21; // r1@56
  unsigned int *v22; // r1@57
  unsigned int v23; // r2@59
  int v24; // r1@62
  unsigned int *v25; // r1@63
  unsigned int v26; // r2@65
  char *v27; // r0@72
  int v28; // r0@73
  unsigned int *v29; // r2@74
  unsigned int v30; // r1@76
  int v31; // r0@81
  unsigned int *v32; // r2@82
  unsigned int v33; // r1@84
  int v34; // r0@89
  unsigned int *v35; // r2@90
  unsigned int v36; // r1@92
  unsigned int v37; // r0@99
  unsigned int v38; // r0@106
  void *v39; // r0@111
  int result; // r0@114
  unsigned int *v41; // r2@120
  signed int v42; // r1@122
  unsigned int *v43; // r2@124
  signed int v44; // r1@126
  char v45; // [sp+8h] [bp-58h]@68
  void (*v46)(void); // [sp+10h] [bp-50h]@68
  int v47; // [sp+18h] [bp-48h]@35
  int v48; // [sp+1Ch] [bp-44h]@35
  int v49; // [sp+20h] [bp-40h]@40
  int v50; // [sp+24h] [bp-3Ch]@40
  int v51; // [sp+28h] [bp-38h]@45
  int v52; // [sp+2Ch] [bp-34h]@45
  char *v53; // [sp+30h] [bp-30h]@50
  _DWORD *v54; // [sp+34h] [bp-2Ch]@68
  void (*v55)(void); // [sp+3Ch] [bp-24h]@50
  signed int (__fastcall *v56)(int); // [sp+40h] [bp-20h]@68
  int v57; // [sp+44h] [bp-1Ch]@25

  v1 = *((_DWORD *)this + 2);
  if ( !v1 )
    std::__throw_bad_weak_ptr();
  v2 = *(_DWORD *)(v1 + 4);
  v3 = (unsigned int *)(v1 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v2 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v4 = __ldrex(v3);
      if ( v4 == v2 )
        break;
      __clrex();
      v2 = v4;
    }
    v5 = __strex(v2 + 1, v3);
    v2 = v4;
  }
  while ( v5 );
  __dmb();
  v6 = *((_DWORD *)this + 1);
  v7 = (unsigned int *)(v1 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v7);
    while ( __strex(v8 + 1, v7) );
  else
    ++*v7;
      v9 = __ldrex(v3);
    while ( __strex(v9 - 1, v3) );
    v9 = (*v3)--;
  if ( v9 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
    if ( &pthread_create )
      do
        v10 = __ldrex(v7);
      while ( __strex(v10 - 1, v7) );
    else
      v10 = (*v7)--;
    if ( v10 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
  sub_21E8AF4(&v57, (int *)&FileUploadManager::BOUNDARY);
      v11 = __ldrex(v7);
    while ( __strex(v11 + 1, v7) );
      v12 = __ldrex(v7);
    while ( __strex(v12 + 1, v7) );
  v13 = TaskGroup::DISK;
  v47 = v6;
  v48 = v1;
      v14 = __ldrex(v7);
    while ( __strex(v14 + 1, v7) );
  v49 = v6;
  v50 = v1;
      v15 = __ldrex(v7);
    while ( __strex(v15 + 1, v7) );
  v51 = v6;
  v52 = v1;
      v16 = __ldrex(v7);
    while ( __strex(v16 + 1, v7) );
  sub_21E8AF4((int *)&v53, &v57);
  v55 = 0;
  v17 = operator new(0x1Cu);
  *v17 = v47;
  v18 = v48;
  v17[1] = v48;
  if ( v18 )
    v19 = (unsigned int *)(v18 + 8);
        v20 = __ldrex(v19);
      while ( __strex(v20 + 1, v19) );
      ++*v19;
  v17[2] = v49;
  v21 = v50;
  v17[3] = v50;
  if ( v21 )
    v22 = (unsigned int *)(v21 + 8);
        v23 = __ldrex(v22);
      while ( __strex(v23 + 1, v22) );
      ++*v22;
  v17[4] = v51;
  v24 = v52;
  v17[5] = v52;
  if ( v24 )
    v25 = (unsigned int *)(v24 + 8);
        v26 = __ldrex(v25);
      while ( __strex(v26 + 1, v25) );
      ++*v25;
  v17[6] = v53;
  v53 = (char *)&unk_28898CC;
  v54 = v17;
  v55 = (void (*)(void))sub_15EBA8C;
  v56 = sub_15EB4D4;
  v46 = 0;
  TaskGroup::queue(v13, (int)&v54, (int)&v45, 1u, 0xFFFFFFFF);
  if ( v46 )
    v46();
  if ( v55 )
    v55();
  v27 = v53 - 12;
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v53 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = v52;
  if ( v52 )
    v29 = (unsigned int *)(v52 + 8);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 == 1 )
      (*(void (**)(void))(*(_DWORD *)v28 + 12))();
  v31 = v50;
  if ( v50 )
    v32 = (unsigned int *)(v50 + 8);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 == 1 )
      (*(void (**)(void))(*(_DWORD *)v31 + 12))();
  v34 = v48;
  if ( v48 )
    v35 = (unsigned int *)(v48 + 8);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 == 1 )
      (*(void (**)(void))(*(_DWORD *)v34 + 12))();
      v37 = __ldrex(v7);
    while ( __strex(v37 - 1, v7) );
    v37 = (*v7)--;
  if ( v37 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
      v38 = __ldrex(v7);
    while ( __strex(v38 - 1, v7) );
    v38 = (*v7)--;
  if ( v38 == 1 )
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v1 + 12))(v1);
  v39 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v57 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
      result = __ldrex(v7);
    while ( __strex(result - 1, v7) );
    result = (*v7)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
  return result;
}


signed int __fastcall FileUploadManager::setFailed(FileUploadManager *this)
{
  FileUploadManager *v1; // r4@1
  int v2; // r0@2
  bool v3; // zf@2
  signed int result; // r0@6

  v1 = this;
  if ( *(_DWORD *)(*((_DWORD *)this + 4) - 12) )
  {
    v2 = *(_DWORD *)(*((_DWORD *)this + 8) - 12);
    v3 = v2 == 0;
    if ( v2 )
      v3 = *((_QWORD *)v1 + 3) == 0LL;
    if ( !v3 )
      (*(void (**)(void))(**((_DWORD **)v1 + 24) + 36))();
  }
  result = 5;
  *((_DWORD *)v1 + 20) = 5;
  return result;
}


void __fastcall FileUploadManager::~FileUploadManager(FileUploadManager *this)
{
  FileUploadManager::~FileUploadManager(this);
}


    if ( FileUploadManager::getUploadState(v6) == 5 )
{
  }
  return v1;
}


char *__fastcall FileUploadManager::_generateMultiPartHelper(FileUploadManager *this, int a2, __int64 a3)
{
  FileUploadManager *v3; // r4@1
  __int64 v4; // r2@1
  __int64 v5; // r2@1
  void *v6; // r0@1
  void *v7; // r0@2
  __int64 v8; // r0@3
  __int64 v9; // r2@3
  __int64 v10; // r0@3
  void *v11; // r0@3
  void *v12; // r0@4
  void *v13; // r0@5
  void *v14; // r0@6
  char *result; // r0@7
  int v16; // r2@9
  signed int v17; // r1@11
  unsigned int *v18; // r2@13
  signed int v19; // r1@15
  unsigned int *v20; // r2@17
  signed int v21; // r1@19
  unsigned int *v22; // r2@21
  signed int v23; // r1@23
  unsigned int *v24; // r2@25
  signed int v25; // r1@27
  unsigned int *v26; // r2@29
  signed int v27; // r1@31
  int v28; // [sp+8h] [bp-448h]@2
  int v29; // [sp+Ch] [bp-444h]@1
  int v30; // [sp+14h] [bp-43Ch]@1
  unsigned int v31; // [sp+18h] [bp-438h]@1
  int v32; // [sp+1Ch] [bp-434h]@1
  int v33; // [sp+20h] [bp-430h]@1
  int v34; // [sp+24h] [bp-42Ch]@1
  unsigned int v35; // [sp+28h] [bp-428h]@1
  char v36; // [sp+34h] [bp-41Ch]@1
  int v37; // [sp+38h] [bp-418h]@1
  RakNet *v38; // [sp+43Ch] [bp-14h]@1

  v3 = this;
  v38 = _stack_chk_guard;
  LODWORD(a3) = FileUploadManager::BOUNDARY;
  Util::format((Util *)&v35, "--%s\r\n", a3);
  v32 = *((_DWORD *)v3 + 4);
  v33 = *(_DWORD *)(v32 - 12);
  Core::PathBuffer<Core::StackString<char,1024u>>::getEntryExtensionWithoutDot((int)&v36, (__int64 *)&v32);
  sub_21E94B4((void **)&v34, (const char *)&v37);
  LODWORD(v4) = v34;
  Util::format((Util *)&v31, "Content-Disposition: form-data; name=\"world\"; filename=\"world.%s\"\r\n", v4);
  sub_21E94B4((void **)&v30, "Content-Type: application/octet-stream\r\n\r\n");
  Util::format((Util *)&v29, "%s%s%s", __PAIR__(v31, v35), v30);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v3 + 11,
    &v29);
  v6 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
  {
    v16 = v29 - 4;
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v17 = __ldrex((unsigned int *)v5);
        HIDWORD(v5) = v17 - 1;
      }
      while ( __strex(v17 - 1, (unsigned int *)v5) );
    }
    else
      v17 = *(_DWORD *)v5;
      HIDWORD(v5) = *(_DWORD *)v5 - 1;
      *(_DWORD *)v5 = HIDWORD(v5);
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  *((_BYTE *)v3 + 40) = 1;
  LODWORD(v5) = FileUploadManager::BOUNDARY;
  Util::format((Util *)&v28, "\r\n--%s--\r\n", v5);
    (int *)v3 + 12,
    &v28);
  v7 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v28 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  *((_BYTE *)v3 + 41) = 1;
  *((_DWORD *)v3 + 14) = 0;
  *((_DWORD *)v3 + 15) = 0;
  v8 = *((_QWORD *)v3 + 3);
  *((_QWORD *)v3 + 8) = v8;
  v9 = *(_QWORD *)((char *)v3 + 44);
  HIDWORD(v9) = *(_DWORD *)(HIDWORD(v9) - 12);
  v10 = v8 + *(_DWORD *)(v9 - 12);
  *((_DWORD *)v3 + 18) = v10 + HIDWORD(v9);
  *((_DWORD *)v3 + 19) = __CFADD__((_DWORD)v10, HIDWORD(v9)) + HIDWORD(v10);
  v11 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v30 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v31 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v34 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v35 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  result = (char *)(_stack_chk_guard - v38);
  if ( _stack_chk_guard != v38 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall FileUploadManager::FileUploadManager(int a1, int a2, int a3)
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
  *(_DWORD *)a1 = &off_26EBBE0;
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
  *(_BYTE *)(v3 + 40) = 0;
  *(_BYTE *)(v3 + 41) = 0;
  *(_DWORD *)(v3 + 44) = &unk_28898CC;
  *(_DWORD *)(v3 + 48) = &unk_28898CC;
  *(_DWORD *)(v3 + 80) = 0;
  *(_DWORD *)(v3 + 84) = 0;
  *(_DWORD *)(v3 + 72) = 0;
  *(_DWORD *)(v3 + 76) = 0;
  *(_DWORD *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 68) = 0;
  *(_DWORD *)(v3 + 56) = 0;
  *(_DWORD *)(v3 + 60) = 0;
  *(_DWORD *)(v3 + 88) = *(_DWORD *)v4;
  v8 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v3 + 92) = v8;
  if ( v8 )
    v9 = (unsigned int *)(v8 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
      ++*v9;
  *(_DWORD *)(v3 + 96) = *(_DWORD *)v5;
  v11 = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(v3 + 100) = v11;
  if ( v11 )
    v12 = (unsigned int *)(v11 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
      ++*v12;
  *(_WORD *)(v3 + 104) = 0;
  *(_BYTE *)(v3 + 106) = 0;
  _aeabi_memclr4(v3 + 108, 44);
  MPMCQueue<std::function<void ()(void)>>::MPMCQueue(v3 + 108);
  return v3;
}


signed int __fastcall FileUploadManager::cancelUpload(FileUploadManager *this)
{
  FileUploadManager *v1; // r4@1
  int v2; // r0@2
  bool v3; // zf@2
  signed int result; // r0@6

  v1 = this;
  if ( *(_DWORD *)(*((_DWORD *)this + 4) - 12) )
  {
    v2 = *(_DWORD *)(*((_DWORD *)this + 8) - 12);
    v3 = v2 == 0;
    if ( v2 )
      v3 = *((_QWORD *)v1 + 3) == 0LL;
    if ( !v3 )
      (*(void (**)(void))(**((_DWORD **)v1 + 24) + 36))();
  }
  result = 5;
  *((_DWORD *)v1 + 20) = 5;
  return result;
}


int __fastcall FileUploadManager::canCancelUpload(FileUploadManager *this)
{
  int v1; // r2@2
  bool v2; // zf@2
  int result; // r0@5

  if ( !*(_DWORD *)(*((_DWORD *)this + 4) - 12) )
    goto LABEL_9;
  v1 = *(_DWORD *)(*((_DWORD *)this + 8) - 12);
  v2 = v1 == 0;
  if ( v1 )
    v2 = *((_QWORD *)this + 3) == 0LL;
  if ( v2 )
LABEL_9:
    result = 0;
  else
    result = (*(int (**)(void))(**((_DWORD **)this + 24) + 32))();
  return result;
}


int __fastcall FileUploadManager::getUploadProgress(FileUploadManager *this)
{
  int v1; // r2@1
  bool v2; // zf@1
  int result; // r0@5

  v1 = *(_DWORD *)(*((_DWORD *)this + 4) - 12);
  v2 = v1 == 0;
  if ( v1 )
    v2 = *(_DWORD *)(*((_DWORD *)this + 8) - 12) == 0;
  if ( v2 || !*((_QWORD *)this + 3) )
    result = 0;
  else
    result = (*(int (**)(void))(**((_DWORD **)this + 24) + 40))();
  return result;
}


int __fastcall FileUploadManager::addCallbackQueue(int a1, int a2)
{
  int v2; // r4@1
  unsigned __int8 *v3; // r7@1
  int v4; // r5@1
  unsigned int v5; // r1@2
  int v6; // r6@4
  void (__fastcall *v7)(int, int, signed int); // r3@5
  int result; // r0@9

  v2 = a1;
  v3 = (unsigned __int8 *)(a1 + 148);
  v4 = a2;
  do
  {
    do
      v5 = __ldrex(v3);
    while ( __strex(1u, v3) );
    __dmb();
  }
  while ( v5 );
  v6 = *(_DWORD *)(a1 + 132);
  if ( v6 == *(_DWORD *)(a1 + 140) - 16 )
    std::deque<std::function<void ()(void)>,std::allocator<std::function<void ()(void)>>>::_M_push_back_aux<std::function<void ()(void)> const&>(
      a1 + 108,
      v4);
  else
    *(_DWORD *)(v6 + 8) = 0;
    v7 = *(void (__fastcall **)(int, int, signed int))(v4 + 8);
    if ( v7 )
    {
      v7(v6, v4, 2);
      *(_DWORD *)(v6 + 12) = *(_DWORD *)(v4 + 12);
      *(_DWORD *)(v6 + 8) = *(_DWORD *)(v4 + 8);
      v6 = *(_DWORD *)(v2 + 132);
    }
    *(_DWORD *)(v2 + 132) = v6 + 16;
  result = 0;
  __dmb();
  *v3 = 0;
  return result;
}


unsigned int __fastcall FileUploadManager::uploadFile(int a1, int *a2, int a3, int a4, char a5)
{
  int v5; // r5@1
  int v6; // r9@1
  int *v7; // r6@1
  int v8; // r0@1
  bool v9; // zf@1
  unsigned int result; // r0@4
  int v11; // r10@5
  unsigned int v12; // r1@6
  unsigned int *v13; // r0@6
  unsigned int v14; // r7@9
  unsigned int v15; // r3@10
  int v16; // r8@11
  unsigned int *v17; // r4@11
  unsigned int v18; // r1@13
  unsigned int v19; // r1@18
  unsigned int v20; // r0@24
  int v21; // r5@29
  void (__fastcall *v22)(int, int, void **); // r11@29
  unsigned int v23; // r0@31
  void *v24; // r6@34
  unsigned int *v25; // r0@35
  unsigned int v26; // r1@37
  int v27; // r1@40
  void *v28; // r0@42
  unsigned int *v29; // r2@44
  unsigned int v30; // r1@46
  unsigned int *v31; // r2@59
  signed int v32; // r1@61
  int v33; // [sp+0h] [bp-50h]@21
  int v34; // [sp+Ch] [bp-44h]@34
  int v35; // [sp+10h] [bp-40h]@34
  char v36; // [sp+14h] [bp-3Ch]@34
  void *v37; // [sp+18h] [bp-38h]@40
  void (*v38)(void); // [sp+20h] [bp-30h]@34
  void (__fastcall *v39)(int *, int, int); // [sp+24h] [bp-2Ch]@40

  v5 = a1;
  v6 = a4;
  v7 = a2;
  v8 = *(_DWORD *)(*(_DWORD *)(a1 + 16) - 12);
  v9 = v8 == 0;
  if ( v8 )
    v9 = *(_DWORD *)(*(_DWORD *)(v5 + 32) - 12) == 0;
  if ( v9 || (result = *(_QWORD *)(v5 + 24) | (*(_QWORD *)(v5 + 24) >> 32), !*(_QWORD *)(v5 + 24)) )
  {
    v11 = *(_DWORD *)(v5 + 8);
    if ( !v11 )
      std::__throw_bad_weak_ptr();
    v12 = *(_DWORD *)(v11 + 4);
    v13 = (unsigned int *)(v11 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v12 )
          std::__throw_bad_weak_ptr();
        __dmb();
        v14 = __ldrex(v13);
        if ( v14 == v12 )
          break;
        __clrex();
        v12 = v14;
      }
      v15 = __strex(v12 + 1, v13);
      v12 = v14;
    }
    while ( v15 );
    __dmb();
    v16 = *(_DWORD *)(v5 + 4);
    v17 = (unsigned int *)(v11 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 + 1, v17) );
    else
      ++*v17;
        v19 = __ldrex(v13);
      while ( __strex(v19 - 1, v13) );
      v19 = (*v13)--;
    v33 = a3;
    if ( v19 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
        do
          v20 = __ldrex(v17);
        while ( __strex(v20 - 1, v17) );
      else
        v20 = (*v17)--;
      if ( v20 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
    *(_DWORD *)(v5 + 80) = 1;
    *(_DWORD *)(v5 + 84) = v6;
    v21 = *(_DWORD *)(v5 + 88);
    v22 = *(void (__fastcall **)(int, int, void **))(*(_DWORD *)v21 + 8);
        v23 = __ldrex(v17);
      while ( __strex(v23 + 1, v17) );
    sub_21E8AF4(&v34, v7);
    v35 = v6;
    v36 = a5;
    v38 = 0;
    v24 = operator new(0x14u);
    *(_DWORD *)v24 = v16;
    *((_DWORD *)v24 + 1) = v11;
    if ( v11 )
      v25 = (unsigned int *)(v11 + 8);
          v26 = __ldrex(v25);
        while ( __strex(v26 + 1, v25) );
        ++*v25;
    sub_21E8AF4((int *)v24 + 2, &v34);
    v27 = v35;
    *((_BYTE *)v24 + 16) = v36;
    *((_DWORD *)v24 + 3) = v27;
    v37 = v24;
    v38 = (void (*)(void))sub_15EA4D0;
    v39 = sub_15EA0A8;
    v22(v21, v33, &v37);
    if ( v38 )
      v38();
    v28 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v34 - 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j__ZdlPv_9(v28);
      v29 = (unsigned int *)(v11 + 8);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 == 1 )
        (*(void (**)(void))(*(_DWORD *)v11 + 12))();
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
      result = (*v17)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  }
  return result;
}


FileUploadManager *__fastcall FileUploadManager::~FileUploadManager(FileUploadManager *this)
{
  FileUploadManager *v1; // r8@1
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
  int v28; // r1@37
  void *v29; // r0@37
  int v30; // r1@38
  void *v31; // r0@38
  int v32; // r0@39
  unsigned int *v33; // r2@40
  unsigned int v34; // r1@42
  unsigned int *v36; // r2@48
  signed int v37; // r1@50
  unsigned int *v38; // r2@52
  signed int v39; // r1@54
  unsigned int *v40; // r2@56
  signed int v41; // r1@58
  unsigned int *v42; // r2@60
  signed int v43; // r1@62
  int v44; // [sp+0h] [bp-38h]@1
  __int64 v45; // [sp+4h] [bp-34h]@1
  int v46; // [sp+Ch] [bp-2Ch]@1
  int v47; // [sp+10h] [bp-28h]@1
  int v48; // [sp+14h] [bp-24h]@1
  int v49; // [sp+18h] [bp-20h]@1
  int v50; // [sp+1Ch] [bp-1Ch]@1

  v1 = this;
  *(_DWORD *)this = &off_26EBBE0;
  v2 = *((_DWORD *)this + 30);
  v3 = *((_DWORD *)this + 31);
  v4 = *((_DWORD *)this + 32);
  v5 = *((_DWORD *)this + 33);
  v6 = *((_QWORD *)this + 17);
  v7 = *((_DWORD *)this + 36);
  v47 = *((_DWORD *)this + 29);
  v48 = v2;
  v49 = v3;
  v50 = v4;
  v44 = v5;
  v45 = v6;
  v46 = v7;
  v8 = (void **)((char *)this + 108);
  std::deque<std::function<void ()(void)>,std::allocator<std::function<void ()(void)>>>::_M_destroy_data_aux(
    (int)this + 108,
    (int)&v47,
    (int)&v44);
  v9 = (void *)*((_DWORD *)v1 + 27);
  if ( v9 )
  {
    v10 = *((_DWORD *)v1 + 36);
    v11 = *((_DWORD *)v1 + 32);
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
  v14 = *((_DWORD *)v1 + 25);
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
  v19 = *((_DWORD *)v1 + 23);
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
  v24 = *((_DWORD *)v1 + 12);
  v25 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v24 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = *((_DWORD *)v1 + 11);
  v27 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v26 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = *((_DWORD *)v1 + 8);
  v29 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v28 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = *((_DWORD *)v1 + 4);
  v31 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v30 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v32 = *((_DWORD *)v1 + 2);
  if ( v32 )
    v33 = (unsigned int *)(v32 + 8);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 == 1 )
      (*(void (**)(void))(*(_DWORD *)v32 + 12))();
  return v1;
}


int __fastcall FileUploadManager::update(FileUploadManager *this)
{
  FileUploadManager *v1; // r4@1
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
  (*(void (**)(void))(**((_DWORD **)this + 24) + 8))();
  v2 = (unsigned __int8 *)v1 + 148;
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
    v4 = *((_DWORD *)v1 + 29);
    if ( *((_DWORD *)v1 + 33) == v4 )
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
    v9 = *((_DWORD *)v1 + 29);
    v10 = *(void (**)(void))(v9 + 8);
    if ( v9 == *((_DWORD *)v1 + 31) - 16 )
      if ( v10 )
        v10();
      operator delete(*((void **)v1 + 30));
      v12 = *((_DWORD *)v1 + 32);
      *((_DWORD *)v1 + 32) = v12 + 4;
      v11 = *(_DWORD *)(v12 + 4);
      *((_DWORD *)v1 + 30) = v11;
      *((_DWORD *)v1 + 31) = v11 + 512;
    else
      {
        v9 = *((_DWORD *)v1 + 29);
      }
      v11 = v9 + 16;
    *((_DWORD *)v1 + 29) = v11;
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


int __fastcall FileUploadManager::setUseStream(int result, bool a2)
{
  *(_BYTE *)(result + 106) = a2;
  return result;
}


int __fastcall FileUploadManager::setUploadAllAtOnce(int result, bool a2)
{
  *(_BYTE *)(result + 104) = a2;
  return result;
}


signed int __fastcall FileUploadManager::uploadChunk(signed int result, int a2, __int64 a3, int a4, int a5, int a6, int a7)
{
  int v7; // r1@1
  bool v8; // zf@1
  __int64 v9; // [sp+0h] [bp-20h]@1
  int v10; // [sp+8h] [bp-18h]@1
  int v11; // [sp+Ch] [bp-14h]@1
  int v12; // [sp+10h] [bp-10h]@1
  int v13; // [sp+14h] [bp-Ch]@1

  v9 = a3;
  v13 = a7;
  v10 = a4;
  v11 = a5;
  v12 = a6;
  v7 = *(_DWORD *)(*(_DWORD *)(result + 16) - 12);
  v8 = v7 == 0;
  if ( v7 )
    v8 = *(_DWORD *)(*(_DWORD *)(result + 32) - 12) == 0;
  if ( !v8 )
  {
    if ( *(_QWORD *)(result + 24) )
      result = FileUploadManager::_uploadChunk((FileUploadManager *)result, (const UploadChunkInfo *)&v9);
  }
  return result;
}


signed int __fastcall FileUploadManager::uploadChunk(FileUploadManager *this, int a2)
{
  FileUploadManager *v2; // r4@1
  signed int result; // r0@1
  bool v4; // zf@2
  int v5; // [sp+0h] [bp-28h]@5

  v2 = this;
  result = *(_DWORD *)(*((_DWORD *)this + 4) - 12);
  if ( result )
  {
    result = *(_DWORD *)(*((_DWORD *)v2 + 8) - 12);
    v4 = result == 0;
    if ( result )
    {
      result = *((_QWORD *)v2 + 3) | (*((_QWORD *)v2 + 3) >> 32);
      v4 = *((_QWORD *)v2 + 3) == 0LL;
    }
    if ( !v4 )
      (*(void (__fastcall **)(int *))(**((_DWORD **)v2 + 24) + 44))(&v5);
      result = FileUploadManager::_uploadChunk(v2, (const UploadChunkInfo *)&v5);
  }
  return result;
}


void __fastcall FileUploadManager::~FileUploadManager(FileUploadManager *this)
{
  FileUploadManager *v1; // r0@1

  v1 = FileUploadManager::~FileUploadManager(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall FileUploadManager::setContinueOnReception(int result, bool a2)
{
  *(_BYTE *)(result + 105) = a2;
  return result;
}


int __fastcall FileUploadManager::MultiPartStreamHelper::MultiPartStreamHelper(int result)
{
  *(_BYTE *)result = 0;
  *(_BYTE *)(result + 1) = 0;
  *(_DWORD *)(result + 4) = &unk_28898CC;
  *(_DWORD *)(result + 8) = &unk_28898CC;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  return result;
}
