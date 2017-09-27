

void __fastcall Legacy::WorldImporter::~WorldImporter(Legacy::WorldImporter *this)
{
  Legacy::WorldImporter *v1; // r0@1

  v1 = Legacy::WorldImporter::~WorldImporter(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall Legacy::WorldProcessRequest::~WorldProcessRequest(Legacy::WorldProcessRequest *this)
{
  Legacy::WorldProcessRequest *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void (*v4)(void); // r3@2
  unsigned int *v5; // r12@5
  signed int v6; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26E5154;
  v2 = *((_DWORD *)this + 30);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  LocalWorldInfo::~LocalWorldInfo((Legacy::WorldProcessRequest *)((char *)v1 + 24));
  v4 = (void (*)(void))*((_DWORD *)v1 + 3);
  if ( v4 )
    v4();
  operator delete((void *)v1);
}


char *__fastcall Legacy::WorldProcessRequest::getWorldInfo(Legacy::WorldProcessRequest *this)
{
  return (char *)this + 24;
}


void __fastcall Legacy::WorldImporter::importWorld(int a1, int a2, int a3, int *a4)
{
  Legacy::WorldImporter::importWorld(a1, a2, a3, a4);
}


void __fastcall Legacy::WorldProcessRequest::~WorldProcessRequest(Legacy::WorldProcessRequest *this)
{
  Legacy::WorldProcessRequest::~WorldProcessRequest(this);
}


int __fastcall Legacy::UploadWorldProcessRequest::getOutputPath(int result)
{
  *(_DWORD *)result = &unk_28898CC;
  return result;
}


int (**__fastcall Legacy::WorldImporter::populateWorldList(int a1, int a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  int v2; // r10@1
  pthread_mutex_t *v3; // r9@1
  int v4; // r7@1
  int v5; // r0@2
  int v6; // r4@3
  int v7; // r6@3
  __int64 v8; // r0@4
  int v9; // r4@8
  int v10; // r7@9
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  int v13; // r1@18
  void *v14; // r0@18
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@20

  v2 = a1;
  v3 = (pthread_mutex_t *)(a1 + 36);
  v4 = a2;
  if ( &pthread_create )
  {
    v5 = pthread_mutex_lock(v3);
    if ( v5 )
      sub_21E5E14(v5);
  }
  v6 = *(_QWORD *)(v2 + 20) >> 32;
  v7 = *(_QWORD *)(v2 + 20);
  if ( v7 != v6 )
    do
    {
      v8 = *(_QWORD *)(v4 + 4);
      if ( (_DWORD)v8 == HIDWORD(v8) )
      {
        std::vector<LegacyWorldInfo,std::allocator<LegacyWorldInfo>>::_M_emplace_back_aux<LegacyWorldInfo>(
          (unsigned __int64 *)v4,
          v7);
      }
      else
        *(_DWORD *)(LocalWorldInfo::LocalWorldInfo(v8, v7) + 96) = *(_DWORD *)(v7 + 96);
        *(_DWORD *)(v7 + 96) = &unk_28898CC;
        *(_DWORD *)(v4 + 4) += 104;
      v7 += 104;
    }
    while ( v6 != v7 );
    v9 = *(_QWORD *)(v2 + 20) >> 32;
    v7 = *(_QWORD *)(v2 + 20);
    if ( v9 != v7 )
      v10 = *(_QWORD *)(v2 + 20);
      do
        v13 = *(_DWORD *)(v10 + 96);
        v14 = (void *)(v13 - 12);
        if ( (int *)(v13 - 12) != &dword_28898C0 )
        {
          v11 = (unsigned int *)(v13 - 4);
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
            j_j_j_j__ZdlPv_9(v14);
        }
        LocalWorldInfo::~LocalWorldInfo((LocalWorldInfo *)v10);
        v10 += 104;
      while ( v10 != v9 );
  *(_DWORD *)(v2 + 24) = v7;
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))pthread_mutex_unlock(v3);
  return result;
}


Legacy::UploadWorldProcessRequest *__fastcall Legacy::UploadWorldProcessRequest::~UploadWorldProcessRequest(Legacy::UploadWorldProcessRequest *this)
{
  Legacy::UploadWorldProcessRequest *v1; // r4@1
  char *v2; // r5@1
  char *v3; // r0@1
  int v4; // r1@4
  void *v5; // r0@4
  void (*v6)(void); // r3@5
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E5184;
  v2 = (char *)this + 152;
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)this + 128);
  v3 = (char *)*((_DWORD *)v1 + 32);
  if ( v3 && v2 != v3 )
    operator delete(v3);
  *(_DWORD *)v1 = &off_26E5154;
  v4 = *((_DWORD *)v1 + 30);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v4 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  LocalWorldInfo::~LocalWorldInfo((Legacy::UploadWorldProcessRequest *)((char *)v1 + 24));
  v6 = (void (*)(void))*((_DWORD *)v1 + 3);
  if ( v6 )
    v6();
  return v1;
}


int __fastcall Legacy::MockWorldConverter::~MockWorldConverter(Legacy::MockWorldConverter *this)
{
  Legacy::MockWorldConverter *v1; // r8@1
  int *v2; // r0@1
  int *v3; // r0@2
  int *v4; // r0@3
  int *v5; // r0@4
  int v6; // r5@5
  int v7; // r7@5
  int v8; // r4@6
  unsigned int *v9; // r1@7
  unsigned int v10; // r0@9
  unsigned int *v11; // r6@13
  unsigned int v12; // r0@15

  v1 = this;
  *(_DWORD *)this = &off_26E862C;
  v2 = (int *)*((_DWORD *)this + 5);
  if ( v2 )
  {
    v3 = std::promise<Legacy::WorldConversionReport>::~promise(v2);
    operator delete(v3);
  }
  *((_DWORD *)v1 + 5) = 0;
  v4 = (int *)*((_DWORD *)v1 + 4);
  if ( v4 )
    v5 = std::promise<void>::~promise(v4);
    operator delete(v5);
  *((_DWORD *)v1 + 4) = 0;
  v7 = *(_QWORD *)((char *)v1 + 4) >> 32;
  v6 = *(_QWORD *)((char *)v1 + 4);
  if ( v6 != v7 )
    do
    {
      v8 = *(_DWORD *)(v6 + 4);
      if ( v8 )
      {
        v9 = (unsigned int *)(v8 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 == 1 )
          v11 = (unsigned int *)(v8 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
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
            (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
      }
      v6 += 8;
    }
    while ( v6 != v7 );
    v6 = *((_DWORD *)v1 + 1);
  if ( v6 )
    operator delete((void *)v6);
  return j_j_j__ZN6Legacy14WorldConverterD2Ev(v1);
}


_DWORD *__fastcall Legacy::WorldImporterNull::WorldImporterNull(Legacy::WorldImporterNull *this)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Legacy::WorldImporter::WorldImporter((int)this, 0);
  *result = &off_26E51D4;
  return result;
}


void **__fastcall Legacy::WorldImporter::createWorldImporter(Legacy::WorldImporter *this)
{
  Legacy::WorldImporter *v1; // r4@1
  _DWORD *v2; // r5@1
  void **result; // r0@1

  v1 = this;
  v2 = operator new(0x38u);
  Legacy::WorldImporter::WorldImporter((int)v2, 0);
  *(_DWORD *)v1 = v2;
  result = &off_26E51D4;
  *v2 = &off_26E51D4;
  return result;
}


unsigned int __fastcall Legacy::MockWorldConverter::addBlob(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  __int64 *v4; // r6@1
  int *v5; // r0@1
  int *v6; // r0@2
  __int64 v7; // kr00_8@3
  unsigned int *v8; // r1@4
  unsigned int v9; // r2@6
  unsigned __int8 *v10; // r1@10
  unsigned int v11; // r2@11
  __int64 *v12; // r1@13 OVERLAPPED
  __int64 *v13; // r2@13
  unsigned int *v14; // r0@15
  unsigned int v15; // r1@17
  _DWORD *v16; // r6@22
  _DWORD *v17; // r0@22
  int v18; // r6@22
  unsigned int *v19; // r1@23
  unsigned int v20; // r0@25
  unsigned int *v21; // r7@29
  unsigned int v22; // r0@31
  unsigned int result; // r0@37
  int v24; // r5@37
  __int64 v25; // kr08_8@37
  unsigned int *v26; // r1@38
  unsigned int v27; // r2@40
  unsigned __int8 *v28; // r1@44
  unsigned int v29; // r2@45
  int v30; // r4@47
  unsigned int *v31; // r1@48
  unsigned int *v32; // r5@54
  pthread_t thread1; // [sp+0h] [bp-28h]@22
  __int64 v34; // [sp+4h] [bp-24h]@13
  _DWORD *v35; // [sp+Ch] [bp-1Ch]@22
  int v36; // [sp+10h] [bp-18h]@22

  v2 = a1;
  v3 = a2;
  v4 = (__int64 *)operator new(0xCu);
  std::promise<void>::promise((int)v4);
  v5 = *(int **)(v3 + 16);
  *(_DWORD *)(v3 + 16) = v4;
  if ( v5 )
  {
    v6 = std::promise<void>::~promise(v5);
    operator delete(v6);
    v4 = *(__int64 **)(v3 + 16);
  }
  v7 = *v4;
  if ( (unsigned __int64)*v4 >> 32 )
    v8 = (unsigned int *)(HIDWORD(v7) + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  if ( !(_DWORD)v7 )
    sub_21E5EAC(3);
  v10 = (unsigned __int8 *)(v7 + 16);
  __dmb();
  do
    v11 = __ldrex(v10);
  while ( __strex(1u, v10) );
  if ( v11 )
    sub_21E5EAC(1);
  v34 = v7;
  *(_QWORD *)&v12 = *(_QWORD *)(v3 + 8);
  if ( v12 == v13 )
    std::vector<std::shared_future<void>,std::allocator<std::shared_future<void>>>::_M_emplace_back_aux<std::shared_future<void> const&>(
      (unsigned __int64 *)(v3 + 4),
      (int)&v34);
  else
    *v12 = v7;
    if ( HIDWORD(v7) )
      v14 = (unsigned int *)(HIDWORD(v7) + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 + 1, v14) );
        v12 = *(__int64 **)(v3 + 8);
      }
      else
        ++*v14;
    *(_DWORD *)(v3 + 8) = v12 + 1;
  thread1 = 0;
  v16 = operator new(0x10u);
  *v16 = &off_26E864C;
  v16[1] = 0;
  v16[2] = 0;
  v16[3] = v3;
  v17 = operator new(0x14u);
  v17[1] = 1;
  v17[2] = 1;
  *v17 = &off_26E8660;
  v17[4] = v16;
  v35 = v16;
  v36 = (int)v17;
  sub_21E99CC(&thread1, (int)&v35);
  v18 = v36;
  if ( v36 )
    v19 = (unsigned int *)(v36 + 4);
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
  sub_21E9858(&thread1);
  if ( !pthread_equal(thread1, 0) )
    std::terminate();
  v25 = *(_QWORD *)*(_DWORD *)(v3 + 16);
  v24 = *(_QWORD *)*(_DWORD *)(v3 + 16) >> 32;
  result = v25;
  if ( v24 )
    v26 = (unsigned int *)(v24 + 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 + 1, v26) );
      ++*v26;
  if ( !(_DWORD)v25 )
  v28 = (unsigned __int8 *)(v25 + 16);
    v29 = __ldrex(v28);
  while ( __strex(1u, v28) );
  if ( v29 )
  *(_DWORD *)v2 = v25;
  *(_DWORD *)(v2 + 4) = v24;
  v30 = HIDWORD(v34);
  if ( HIDWORD(v34) )
    v31 = (unsigned int *)(HIDWORD(v34) + 4);
        result = __ldrex(v31);
      while ( __strex(result - 1, v31) );
      result = (*v31)--;
    if ( result == 1 )
      v32 = (unsigned int *)(v30 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 8))(v30);
          result = __ldrex(v32);
        while ( __strex(result - 1, v32) );
        result = (*v32)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v30 + 12))(v30);
  return result;
}


void __fastcall Legacy::WorldImporterNull::~WorldImporterNull(Legacy::WorldImporterNull *this)
{
  Legacy::WorldImporter *v1; // r0@1

  v1 = Legacy::WorldImporter::~WorldImporter(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall Legacy::ConvertWorldProcessRequest::~ConvertWorldProcessRequest(Legacy::ConvertWorldProcessRequest *this)
{
  Legacy::ConvertWorldProcessRequest *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  void (*v6)(void); // r3@3
  unsigned int *v7; // r12@6
  signed int v8; // r1@8
  unsigned int *v9; // r12@10
  signed int v10; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26E516C;
  v2 = *((_DWORD *)this + 32);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  *(_DWORD *)v1 = &off_26E5154;
  v4 = *((_DWORD *)v1 + 30);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  LocalWorldInfo::~LocalWorldInfo((Legacy::ConvertWorldProcessRequest *)((char *)v1 + 24));
  v6 = (void (*)(void))*((_DWORD *)v1 + 3);
  if ( v6 )
    v6();
  operator delete((void *)v1);
}


int __fastcall Legacy::MockWorldConverter::MockWorldConverter(int result)
{
  *(_QWORD *)result = (unsigned int)&off_26E862C;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  return result;
}


int __fastcall Legacy::WorldProcessRequest::getStatusCallback(Legacy::WorldProcessRequest *this, int a2)
{
  Legacy::WorldProcessRequest *v2; // r4@1
  int result; // r0@1
  int v4; // r5@1
  void (__fastcall *v5)(Legacy::WorldProcessRequest *, int, signed int); // r3@1

  v2 = this;
  result = 0;
  v4 = a2;
  *((_DWORD *)v2 + 2) = 0;
  v5 = *(void (__fastcall **)(Legacy::WorldProcessRequest *, int, signed int))(a2 + 12);
  if ( v5 )
  {
    v5(v2, a2 + 4, 2);
    *((_DWORD *)v2 + 3) = *(_DWORD *)(v4 + 16);
    result = *(_DWORD *)(v4 + 12);
    *((_DWORD *)v2 + 2) = result;
  }
  return result;
}


signed int __fastcall Legacy::UploadWorldProcessRequest::getProcessingType(Legacy::UploadWorldProcessRequest *this)
{
  return 1;
}


void __fastcall Legacy::UploadWorldProcessRequest::~UploadWorldProcessRequest(Legacy::UploadWorldProcessRequest *this)
{
  Legacy::UploadWorldProcessRequest::~UploadWorldProcessRequest(this);
}


Legacy::WorldProcessRequest *__fastcall Legacy::WorldProcessRequest::~WorldProcessRequest(Legacy::WorldProcessRequest *this)
{
  Legacy::WorldProcessRequest *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void (*v4)(void); // r3@2
  unsigned int *v6; // r12@5
  signed int v7; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26E5154;
  v2 = *((_DWORD *)this + 30);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  LocalWorldInfo::~LocalWorldInfo((Legacy::WorldProcessRequest *)((char *)v1 + 24));
  v4 = (void (*)(void))*((_DWORD *)v1 + 3);
  if ( v4 )
    v4();
  return v1;
}


int __fastcall Legacy::WorldProcessRequest::WorldProcessRequest(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r7@1
  int v5; // r6@1
  void (__fastcall *v6)(int, int, signed int); // r3@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  *(_DWORD *)a1 = &off_26E5154;
  *(_DWORD *)(a1 + 12) = 0;
  v6 = *(void (__fastcall **)(int, int, signed int))(a3 + 8);
  if ( v6 )
  {
    v6(a1 + 4, a3, 2);
    *(_DWORD *)(v3 + 16) = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(v3 + 12) = *(_DWORD *)(v4 + 8);
  }
  LocalWorldInfo::LocalWorldInfo(v3 + 24, v5);
  sub_21E8AF4((int *)(v3 + 120), (int *)(v5 + 96));
  return v3;
}


void __fastcall Legacy::WorldImporter::importWorld(int a1, int a2, int a3, int *a4)
{
  int v4; // r7@1
  int v5; // r6@1 OVERLAPPED
  int *v6; // r11@1
  int v7; // r5@1
  int v8; // r9@1
  int v9; // r8@1
  unsigned int *v10; // r1@2
  unsigned int v11; // r0@4
  unsigned int *v12; // r4@8
  unsigned int v13; // r0@10
  int v14; // r4@15
  void (__fastcall *v15)(int *, int, signed int); // r3@15
  void *v16; // r10@17
  void (*v17)(void); // r5@18 OVERLAPPED
  void *v18; // r0@20
  int v19; // r0@24
  int v20; // r5@24
  unsigned int *v21; // r1@25
  unsigned int v22; // r0@27
  unsigned int *v23; // r4@31
  unsigned int v24; // r0@33
  int v25; // r0@38
  int v26; // r0@38
  unsigned int *v27; // r0@39
  unsigned int v28; // r1@41
  int v29; // r0@44
  unsigned int *v30; // r2@45
  unsigned int v31; // r1@47
  __int64 v32; // kr00_8@52
  unsigned int *v33; // r0@53
  unsigned int v34; // r1@55
  unsigned int v35; // r6@58
  int v36; // r4@60
  int v37; // r0@60
  int v38; // r1@60
  unsigned int *v39; // r1@61
  unsigned int v40; // r2@63
  _DWORD *v41; // r0@66
  __int64 v42; // r1@66
  int v43; // r1@66
  int v44; // r0@66
  void (__fastcall *v45)(int, int, char *, int *); // r6@73
  int v46; // r0@73
  unsigned int *v47; // r0@74
  unsigned int v48; // r1@76
  int v49; // r4@79
  unsigned int *v50; // r1@80
  unsigned int v51; // r0@82
  unsigned int *v52; // r5@86
  unsigned int v53; // r0@88
  void *v54; // r0@93
  void *v55; // r0@94
  unsigned int *v56; // r1@96
  unsigned int v57; // r0@98
  unsigned int *v58; // r4@102
  unsigned int v59; // r0@104
  unsigned int *v60; // r2@112
  signed int v61; // r1@114
  unsigned int *v62; // r2@116
  signed int v63; // r1@118
  int v64; // [sp+8h] [bp-100h]@73
  int v65; // [sp+Ch] [bp-FCh]@73
  _DWORD *v66; // [sp+10h] [bp-F8h]@66
  __int64 v67; // [sp+18h] [bp-F0h]@66
  int v68; // [sp+20h] [bp-E8h]@60
  int v69; // [sp+24h] [bp-E4h]@66
  char v70; // [sp+28h] [bp-E0h]@60
  int v71; // [sp+88h] [bp-80h]@93
  int v72; // [sp+90h] [bp-78h]@60
  int v73; // [sp+94h] [bp-74h]@15
  int v74; // [sp+98h] [bp-70h]@16
  void (*v75)(void); // [sp+A0h] [bp-68h]@15
  int v76; // [sp+A4h] [bp-64h]@16
  int v77; // [sp+B0h] [bp-58h]@24
  int v78; // [sp+B4h] [bp-54h]@17
  int v79; // [sp+B8h] [bp-50h]@18
  void (*v80)(void); // [sp+C0h] [bp-48h]@17
  int v81; // [sp+C4h] [bp-44h]@18
  void *v82; // [sp+C8h] [bp-40h]@20
  void (*v83)(void); // [sp+D0h] [bp-38h]@20
  void (__fastcall *v84)(int **, int, int, void **); // [sp+D4h] [bp-34h]@20
  int v85; // [sp+D8h] [bp-30h]@38
  int v86; // [sp+DCh] [bp-2Ch]@38

  v4 = a2;
  v5 = 0;
  *(_DWORD *)(a2 + 12) = 0;
  v6 = a4;
  v7 = *(_DWORD *)(a2 + 16);
  v8 = a3;
  v9 = a1;
  *(_DWORD *)(a2 + 16) = 0;
  if ( v7 )
  {
    v10 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  v73 = v4;
  v14 = *v6;
  v75 = 0;
  v15 = *(void (__fastcall **)(int *, int, signed int))(v14 + 12);
  if ( v15 )
    v15(&v74, v14 + 4, 2);
    v76 = *(_DWORD *)(v14 + 16);
    v75 = *(void (**)(void))(v14 + 12);
  v16 = operator new(0x18u);
  v78 = v73;
  v80 = 0;
  if ( v75 )
    ((void (__fastcall *)(int *, int *, signed int))v75)(&v79, &v74, 2);
    v5 = v76;
    v17 = v75;
    v81 = v76;
    v80 = v75;
  else
    v17 = 0;
  v83 = 0;
  v18 = operator new(0x14u);
  *(_DWORD *)v18 = v78;
  *(_QWORD *)((char *)v18 + 4) = *(_QWORD *)&v79;
  *(_QWORD *)((char *)v18 + 12) = *(_QWORD *)(&v5 - 1);
  v82 = v18;
  v83 = (void (*)(void))sub_130FDB8;
  v84 = sub_130FBE0;
  CallbackTokenContext<std::function<void ()(Legacy::ImportStatus,float,std::unique_ptr<ImportResult,std::default_delete<ImportResult>>)>>::CallbackTokenContext(
    (int)v16,
    (int)&v82);
  if ( v83 )
    v83();
  if ( v80 )
    v80();
  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<CallbackTokenContext<std::function<void ()(Legacy::ImportStatus,float,std::unique_ptr<ImportResult,std::default_delete<std::default_delete>>)>> *,std::__shared_ptr<CallbackTokenContext<std::function<void ()(Legacy::ImportStatus,float,std::unique_ptr<ImportResult,std::default_delete<std::default_delete>>)>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CallbackTokenContext<std::function<void ()(Legacy::ImportStatus,float,std::unique_ptr<ImportResult,std::default_delete<std::default_delete>>)>> *>>,std::__shared_ptr<CallbackTokenContext<std::function<void ()(Legacy::ImportStatus,float,std::unique_ptr<ImportResult,std::default_delete<std::default_delete>>)>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CallbackTokenContext<std::function<void ()(Legacy::ImportStatus,float,std::unique_ptr<ImportResult,std::default_delete<std::default_delete>>)>> *>>>(
    &v77,
    (int)v16);
  v19 = v77;
  *(_DWORD *)(v4 + 12) = v16;
  v20 = *(_DWORD *)(v4 + 16);
  *(_DWORD *)(v4 + 16) = v19;
  if ( v20 )
    v21 = (unsigned int *)(v20 + 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 == 1 )
      v23 = (unsigned int *)(v20 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
  v25 = *(_DWORD *)(v4 + 12);
  v85 = *(_DWORD *)(v25 + 16);
  v26 = *(_DWORD *)(v25 + 20);
  v86 = v26;
  if ( v26 )
    v27 = (unsigned int *)(v26 + 8);
        v28 = __ldrex(v27);
      while ( __strex(v28 + 1, v27) );
      ++*v27;
  CallbackToken::CallbackToken(v9, (int)&v85);
  v29 = v86;
  if ( v86 )
    v30 = (unsigned int *)(v86 + 8);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 == 1 )
      (*(void (**)(void))(*(_DWORD *)v29 + 12))();
  v32 = *(_QWORD *)(v4 + 12);
  if ( HIDWORD(v32) )
    v33 = (unsigned int *)(HIDWORD(v32) + 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 + 1, v33) );
      ++*v33;
  v35 = *(_DWORD *)(v4 + 52);
  if ( (*(int (**)(void))(*(_DWORD *)*v6 + 8))() == 1 )
    v35 = 5;
  (*(void (__fastcall **)(int *))(*(_DWORD *)*v6 + 12))(&v72);
  v36 = *v6;
  v37 = LocalWorldInfo::LocalWorldInfo((int)&v70, *v6 + 24);
  sub_21E8AF4((int *)(v37 + 96), (int *)(v36 + 120));
  v38 = *v6;
  *v6 = 0;
  v68 = v38;
    v39 = (unsigned int *)(HIDWORD(v32) + 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 + 1, v39) );
      ++*v39;
  v41 = operator new(0xCu);
  LODWORD(v42) = sub_1310178;
  *(_QWORD *)v41 = v32;
  HIDWORD(v42) = sub_131002C;
  v41[2] = v4;
  v66 = v41;
  v67 = v42;
  Legacy::WorldConverter::Create((Legacy::MockWorldConverter **)&v69, v35);
  v43 = v69;
  v69 = 0;
  v44 = *(_DWORD *)(v4 + 48);
  *(_DWORD *)(v4 + 48) = v43;
  if ( v44 )
    (*(void (**)(void))(*(_DWORD *)v44 + 4))();
    if ( v69 )
      (*(void (**)(void))(*(_DWORD *)v69 + 4))();
  if ( (_DWORD)v67 )
    ((void (*)(void))v67)();
  if ( v68 )
    (*(void (**)(void))(*(_DWORD *)v68 + 4))();
  v68 = 0;
  v45 = *(void (__fastcall **)(int, int, char *, int *))(*(_DWORD *)v4 + 12);
  v64 = *(_DWORD *)(v4 + 12);
  v46 = *(_DWORD *)(v4 + 16);
  v65 = v46;
  if ( v46 )
    v47 = (unsigned int *)(v46 + 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 + 1, v47) );
      ++*v47;
  v45(v4, v8, &v70, &v72);
  v49 = v65;
  if ( v65 )
    v50 = (unsigned int *)(v65 + 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 == 1 )
      v52 = (unsigned int *)(v49 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v49 + 8))(v49);
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
        v53 = (*v52)--;
      if ( v53 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v49 + 12))(v49);
  v54 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v71 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  LocalWorldInfo::~LocalWorldInfo((LocalWorldInfo *)&v70);
  v55 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v72 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v55);
    v56 = (unsigned int *)(HIDWORD(v32) + 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 == 1 )
      v58 = (unsigned int *)(HIDWORD(v32) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v32) + 8))(HIDWORD(v32));
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
        v59 = (*v58)--;
      if ( v59 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v32) + 12))(HIDWORD(v32));
    ((void (__cdecl *)(int *))v75)(&v74);
}


int __fastcall Legacy::UploadWorldProcessRequest::UploadWorldProcessRequest(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r7@1
  int v6; // r4@1
  void (__fastcall *v7)(int *, int, signed int); // r3@1
  int v8; // r6@1
  int v9; // r6@5
  unsigned int v10; // r1@5
  int v11; // r0@5
  _DWORD *v12; // r2@5
  int v14; // [sp+0h] [bp-28h]@2
  void (*v15)(void); // [sp+8h] [bp-20h]@1
  int v16; // [sp+Ch] [bp-1Ch]@2

  v4 = a1;
  v5 = a3;
  v15 = 0;
  v6 = a4;
  v7 = *(void (__fastcall **)(int *, int, signed int))(a3 + 8);
  v8 = a2;
  if ( v7 )
  {
    v7(&v14, a3, 2);
    v16 = *(_DWORD *)(v5 + 12);
    v15 = *(void (**)(void))(v5 + 8);
  }
  Legacy::WorldProcessRequest::WorldProcessRequest(v4, v8, (int)&v14);
  if ( v15 )
    v15();
  *(_DWORD *)v4 = &off_26E5184;
  v9 = *(_DWORD *)v6;
  *(_DWORD *)(v4 + 128) = *(_DWORD *)v6;
  v10 = *(_DWORD *)(v6 + 4);
  *(_DWORD *)(v4 + 132) = v10;
  v11 = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v4 + 136) = v11;
  *(_DWORD *)(v4 + 140) = *(_DWORD *)(v6 + 12);
  *(_QWORD *)(v4 + 144) = *(_QWORD *)(v6 + 16);
  v12 = *(_DWORD **)v6;
  if ( v6 + 24 == *(_DWORD *)v6 )
    v9 = v4 + 152;
    *(_DWORD *)(v4 + 128) = v4 + 152;
    *(_DWORD *)(v4 + 152) = *v12;
  if ( v11 )
    *(_DWORD *)(v9 + 4 * (*(_DWORD *)(v11 + 12) % v10)) = v4 + 136;
  *(_DWORD *)(v6 + 20) = 0;
  *(_DWORD *)(v6 + 24) = 0;
  *(_DWORD *)v6 = v6 + 24;
  *(_DWORD *)(v6 + 4) = 1;
  *(_DWORD *)(v6 + 8) = 0;
  *(_DWORD *)(v6 + 12) = 0;
  return v4;
}


Legacy::ConvertWorldProcessRequest *__fastcall Legacy::ConvertWorldProcessRequest::~ConvertWorldProcessRequest(Legacy::ConvertWorldProcessRequest *this)
{
  Legacy::ConvertWorldProcessRequest *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  void (*v6)(void); // r3@3
  unsigned int *v8; // r12@6
  signed int v9; // r1@8
  unsigned int *v10; // r12@10
  signed int v11; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26E516C;
  v2 = *((_DWORD *)this + 32);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  *(_DWORD *)v1 = &off_26E5154;
  v4 = *((_DWORD *)v1 + 30);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v4 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  LocalWorldInfo::~LocalWorldInfo((Legacy::ConvertWorldProcessRequest *)((char *)v1 + 24));
  v6 = (void (*)(void))*((_DWORD *)v1 + 3);
  if ( v6 )
    v6();
  return v1;
}


int __fastcall Legacy::MockWorldConverter::complete(Legacy::MockWorldConverter *this, int a2)
{
  Legacy::MockWorldConverter *v2; // r4@1
  int v3; // r5@1
  void *v4; // r6@1
  int *v5; // r0@1
  int *v6; // r0@2
  _DWORD *v7; // r6@3
  _DWORD *v8; // r0@3
  int v9; // r6@3
  unsigned int *v10; // r1@4
  unsigned int v11; // r0@6
  unsigned int *v12; // r7@10
  unsigned int v13; // r0@12
  pthread_t thread1; // [sp+0h] [bp-20h]@3
  _DWORD *v16; // [sp+4h] [bp-1Ch]@3
  int v17; // [sp+8h] [bp-18h]@3

  v2 = this;
  v3 = a2;
  v4 = operator new(0xCu);
  std::promise<Legacy::WorldConversionReport>::promise((int)v4);
  v5 = *(int **)(v3 + 20);
  *(_DWORD *)(v3 + 20) = v4;
  if ( v5 )
  {
    v6 = std::promise<Legacy::WorldConversionReport>::~promise(v5);
    operator delete(v6);
  }
  thread1 = 0;
  v7 = operator new(0x10u);
  *v7 = &off_26E8690;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = v3;
  v8 = operator new(0x14u);
  v8[1] = 1;
  v8[2] = 1;
  *v8 = &off_26E86A4;
  v8[4] = v7;
  v16 = v7;
  v17 = (int)v8;
  sub_21E99CC(&thread1, (int)&v16);
  v9 = v17;
  if ( v17 )
    v10 = (unsigned int *)(v17 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  sub_21E9858(&thread1);
  if ( !pthread_equal(thread1, 0) )
    std::terminate();
  return std::__basic_future<Legacy::WorldConversionReport>::__basic_future((int)v2, *(_DWORD *)(v3 + 20));
}


int __fastcall Legacy::WorldConversionReport::WorldConversionReport(int result, int a2)
{
  int v2; // r2@1
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r7@1

  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = &unk_28898CC;
  v2 = result + 8;
  v3 = *(_DWORD *)(a2 + 12);
  v4 = *(_DWORD *)(a2 + 16);
  v5 = *(_DWORD *)(a2 + 20);
  v6 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)v2 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(v2 + 4) = v3;
  *(_DWORD *)(v2 + 8) = v4;
  *(_DWORD *)(v2 + 12) = v5;
  *(_DWORD *)(v2 + 16) = v6;
  *(_DWORD *)(result + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a2 + 28) = &unk_28898CC;
  return result;
}


void __fastcall Legacy::WorldImporterNull::~WorldImporterNull(Legacy::WorldImporterNull *this)
{
  Legacy::WorldImporterNull::~WorldImporterNull(this);
}


int __fastcall Legacy::WorldImporterNull::_doRetrieve(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  void *v4; // r0@2
  int v5; // r5@4
  unsigned __int64 v6; // kr00_8@4
  int (__fastcall *v7)(int, _QWORD **); // r6@4
  unsigned int *v8; // r0@5
  unsigned int v9; // r1@7
  _QWORD *v10; // r0@10
  __int64 v11; // r1@10
  int result; // r0@10
  _QWORD *v13; // [sp+4h] [bp-24h]@10
  __int64 v14; // [sp+Ch] [bp-1Ch]@10

  v3 = a3;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v4 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v4 = &ServiceLocator<AppPlatform>::mDefaultService;
  v5 = *(_DWORD *)v4;
  v6 = *v3;
  v7 = *(int (__fastcall **)(int, _QWORD **))(**(_DWORD **)v4 + 348);
  if ( *v3 >> 32 )
  {
    v8 = (unsigned int *)(HIDWORD(v6) + 4);
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
  v10 = operator new(8u);
  LODWORD(v11) = sub_1310984;
  *v10 = v6;
  HIDWORD(v11) = sub_131095C;
  v13 = v10;
  v14 = v11;
  result = v7(v5, &v13);
  if ( (_DWORD)v14 )
    result = ((int (*)(void))v14)();
  return result;
}


int __fastcall Legacy::WorldConversionReport::WorldConversionReport(int result)
{
  *(_DWORD *)result = 2;
  *(_DWORD *)(result + 4) = &unk_28898CC;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 6;
  *(_DWORD *)(result + 28) = &unk_28898CC;
  return result;
}


signed int __fastcall Legacy::WorldImporter::_getConcurentBlobCount(Legacy::WorldImporter *this)
{
  return 4;
}


int __fastcall Legacy::ConvertWorldProcessRequest::ConvertWorldProcessRequest(int a1, int a2, int a3, int *a4)
{
  int v4; // r4@1
  int v5; // r7@1
  int *v6; // r5@1
  void (__fastcall *v7)(int *, int, signed int); // r3@1
  int v8; // r6@1
  int v10; // [sp+0h] [bp-28h]@2
  void (*v11)(void); // [sp+8h] [bp-20h]@1
  int v12; // [sp+Ch] [bp-1Ch]@2

  v4 = a1;
  v5 = a3;
  v11 = 0;
  v6 = a4;
  v7 = *(void (__fastcall **)(int *, int, signed int))(a3 + 8);
  v8 = a2;
  if ( v7 )
  {
    v7(&v10, a3, 2);
    v12 = *(_DWORD *)(v5 + 12);
    v11 = *(void (**)(void))(v5 + 8);
  }
  Legacy::WorldProcessRequest::WorldProcessRequest(v4, v8, (int)&v10);
  if ( v11 )
    v11();
  *(_DWORD *)v4 = &off_26E516C;
  sub_21E8AF4((int *)(v4 + 128), v6);
  return v4;
}


void __fastcall Legacy::ConvertWorldProcessRequest::~ConvertWorldProcessRequest(Legacy::ConvertWorldProcessRequest *this)
{
  Legacy::ConvertWorldProcessRequest::~ConvertWorldProcessRequest(this);
}


int __fastcall Legacy::WorldImporter::WorldImporter(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  Scheduler *v4; // r0@1
  int v6; // [sp+8h] [bp-30h]@1
  char v7; // [sp+Fh] [bp-29h]@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_26E513C;
  *(_BYTE *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  v4 = (Scheduler *)Scheduler::singleton(0);
  v7 = 1;
  v6 = 2;
  std::make_unique<WorkerPool,Scheduler &,char const(&)[25],int const&,bool,OSThreadPriority>(
    (_DWORD *)(v2 + 40),
    v4,
    "World Import Worker Pool",
    (int *)&unk_262D278,
    &v7,
    &v6);
  std::make_unique<TaskGroup,WorkerPool &,char const(&)[23]>(
    (_DWORD *)(v2 + 44),
    *(_DWORD *)(v2 + 40),
    "WorldImporterTaskGroup");
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 52) = v3;
  return v2;
}


int __fastcall Legacy::WorldConverter::Create(Legacy::MockWorldConverter **a1, unsigned int a2)
{
  Legacy::MockWorldConverter **v2; // r4@1
  Legacy::MockWorldConverter *v3; // r5@4
  int result; // r0@4

  v2 = a1;
  if ( a2 < 2 || a2 == 5 || a2 != 4 )
  {
    result = 0;
    *v2 = 0;
  }
  else
    v3 = (Legacy::MockWorldConverter *)operator new(0x18u);
    result = Legacy::MockWorldConverter::MockWorldConverter(v3);
    *v2 = v3;
  return result;
}


void __fastcall Legacy::MockWorldConverter::~MockWorldConverter(Legacy::MockWorldConverter *this)
{
  Legacy::MockWorldConverter::~MockWorldConverter(this);
}


unsigned int __fastcall Legacy::WorldImporter::retrieveWorldList(int a1, int a2, int a3, int a4)
{
  int v4; // r10@1
  int v5; // r7@1
  int v6; // r5@1
  int v7; // r9@1
  int v8; // r6@1
  unsigned int *v9; // r1@2
  unsigned int v10; // r0@4
  unsigned int *v11; // r4@8
  unsigned int v12; // r0@10
  void (__fastcall *v13)(int *, int, signed int); // r3@15
  void *v14; // r8@17
  void (*v15)(void); // r7@18
  void *v16; // r0@20
  int v17; // r0@24
  int v18; // r4@24
  unsigned int *v19; // r1@25
  unsigned int v20; // r0@27
  unsigned int *v21; // r5@31
  unsigned int v22; // r0@33
  int v23; // r0@38
  int v24; // r0@38
  unsigned int *v25; // r0@39
  unsigned int v26; // r1@41
  int v27; // r0@44
  unsigned int *v28; // r2@45
  unsigned int v29; // r1@47
  int v30; // r0@53
  __int64 v31; // kr00_8@54
  int v32; // r5@55
  unsigned int *v33; // r2@56
  signed int v34; // r1@58
  int v35; // r1@64
  void *v36; // r0@64
  int (__fastcall *v37)(int, int, int *); // r3@68
  int v38; // r0@68
  unsigned int *v39; // r0@69
  unsigned int v40; // r2@71
  unsigned int result; // r0@74
  int v42; // r4@74
  unsigned int *v43; // r1@75
  unsigned int *v44; // r5@81
  int v45; // [sp+Ch] [bp-7Ch]@68
  int v46; // [sp+10h] [bp-78h]@68
  int v47; // [sp+14h] [bp-74h]@15
  int v48; // [sp+18h] [bp-70h]@16
  void (*v49)(void); // [sp+20h] [bp-68h]@15
  int v50; // [sp+24h] [bp-64h]@16
  int v51; // [sp+30h] [bp-58h]@24
  int v52; // [sp+34h] [bp-54h]@17
  int v53; // [sp+38h] [bp-50h]@18
  void (*v54)(void); // [sp+40h] [bp-48h]@17
  int v55; // [sp+44h] [bp-44h]@18
  void *v56; // [sp+48h] [bp-40h]@20
  void (*v57)(void); // [sp+50h] [bp-38h]@20
  int (__fastcall *v58)(int *, int); // [sp+54h] [bp-34h]@20
  int v59; // [sp+58h] [bp-30h]@38
  int v60; // [sp+5Ch] [bp-2Ch]@38

  v4 = a2;
  *(_DWORD *)(a2 + 4) = 0;
  v5 = a4;
  v6 = *(_DWORD *)(a2 + 8);
  v7 = a3;
  v8 = a1;
  *(_DWORD *)(a2 + 8) = 0;
  if ( v6 )
  {
    v9 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  }
  v47 = v4;
  v49 = 0;
  v13 = *(void (__fastcall **)(int *, int, signed int))(v5 + 8);
  if ( v13 )
    v13(&v48, v5, 2);
    v50 = *(_DWORD *)(v5 + 12);
    v49 = *(void (**)(void))(v5 + 8);
  v14 = operator new(0x18u);
  v52 = v47;
  v54 = 0;
  if ( v49 )
    ((void (__fastcall *)(int *, int *, signed int))v49)(&v53, &v48, 2);
    v6 = v50;
    v15 = v49;
    v55 = v50;
    v54 = v49;
  else
    v15 = 0;
  v57 = 0;
  v16 = operator new(0x14u);
  *(_DWORD *)v16 = v52;
  *(_QWORD *)((char *)v16 + 4) = *(_QWORD *)&v53;
  *((_DWORD *)v16 + 3) = v15;
  *((_DWORD *)v16 + 4) = v6;
  v56 = v16;
  v57 = (void (*)(void))sub_130F8E4;
  v58 = sub_130F840;
  CallbackTokenContext<std::function<void ()(Legacy::RetrieveStatus)>>::CallbackTokenContext((int)v14, (int)&v56);
  if ( v57 )
    v57();
  if ( v54 )
    v54();
  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<CallbackTokenContext<std::function<void ()(Legacy::RetrieveStatus)>> *,std::__shared_ptr<CallbackTokenContext<std::function<void ()(Legacy::RetrieveStatus)>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CallbackTokenContext<std::function<void ()(Legacy::RetrieveStatus)>> *>>,std::__shared_ptr<CallbackTokenContext<std::function<void ()(Legacy::RetrieveStatus)>> *,(std::__shared_count<(__gnu_cxx::_Lock_policy)2>)2>::_Deleter<std::allocator<CallbackTokenContext<std::function<void ()(Legacy::RetrieveStatus)>> *>>>(
    &v51,
    (int)v14);
  v17 = v51;
  *(_DWORD *)(v4 + 4) = v14;
  v18 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = v17;
  if ( v18 )
    v19 = (unsigned int *)(v18 + 4);
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
  v23 = *(_DWORD *)(v4 + 4);
  v59 = *(_DWORD *)(v23 + 16);
  v24 = *(_DWORD *)(v23 + 20);
  v60 = v24;
  if ( v24 )
    v25 = (unsigned int *)(v24 + 8);
        v26 = __ldrex(v25);
      while ( __strex(v26 + 1, v25) );
      ++*v25;
  CallbackToken::CallbackToken(v8, (int)&v59);
  v27 = v60;
  if ( v60 )
    v28 = (unsigned int *)(v60 + 8);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 == 1 )
      (*(void (**)(void))(*(_DWORD *)v27 + 12))();
  if ( &pthread_create )
    v30 = pthread_mutex_lock((pthread_mutex_t *)(v4 + 36));
    if ( v30 )
      sub_21E5E14(v30);
  v31 = *(_QWORD *)(v4 + 20);
  if ( HIDWORD(v31) != (_DWORD)v31 )
    v32 = v31;
    do
      v35 = *(_DWORD *)(v32 + 96);
      v36 = (void *)(v35 - 12);
      if ( (int *)(v35 - 12) != &dword_28898C0 )
        v33 = (unsigned int *)(v35 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
        }
        else
          v34 = (*v33)--;
        if ( v34 <= 0 )
          j_j_j_j__ZdlPv_9(v36);
      LocalWorldInfo::~LocalWorldInfo((LocalWorldInfo *)v32);
      v32 += 104;
    while ( v32 != HIDWORD(v31) );
  *(_DWORD *)(v4 + 24) = v31;
    pthread_mutex_unlock((pthread_mutex_t *)(v4 + 36));
  v37 = *(int (__fastcall **)(int, int, int *))(*(_QWORD *)v4 + 8);
  v45 = *(_QWORD *)v4 >> 32;
  v38 = *(_DWORD *)(v4 + 8);
  v46 = v38;
  if ( v38 )
    v39 = (unsigned int *)(v38 + 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 + 1, v39) );
      ++*v39;
  result = v37(v4, v7, &v45);
  v42 = v46;
  if ( v46 )
    v43 = (unsigned int *)(v46 + 4);
        result = __ldrex(v43);
      while ( __strex(result - 1, v43) );
      result = (*v43)--;
    if ( result == 1 )
      v44 = (unsigned int *)(v42 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 8))(v42);
          result = __ldrex(v44);
        while ( __strex(result - 1, v44) );
        result = (*v44)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v42 + 12))(v42);
    result = ((int (*)(void))v49)();
  return result;
}


Legacy::WorldConversionReport *__fastcall Legacy::WorldConversionReport::~WorldConversionReport(Legacy::WorldConversionReport *this)
{
  Legacy::WorldConversionReport *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  v2 = *((_DWORD *)this + 7);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 1);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v1;
}


char *__fastcall Legacy::UploadWorldProcessRequest::getUserData(Legacy::UploadWorldProcessRequest *this)
{
  return (char *)this + 128;
}


void __fastcall Legacy::UploadWorldProcessRequest::~UploadWorldProcessRequest(Legacy::UploadWorldProcessRequest *this)
{
  Legacy::UploadWorldProcessRequest *v1; // r4@1
  char *v2; // r5@1
  char *v3; // r0@1
  int v4; // r1@4
  void *v5; // r0@4
  void (*v6)(void); // r3@5
  unsigned int *v7; // r2@8
  signed int v8; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E5184;
  v2 = (char *)this + 152;
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)this + 128);
  v3 = (char *)*((_DWORD *)v1 + 32);
  if ( v3 && v2 != v3 )
    operator delete(v3);
  *(_DWORD *)v1 = &off_26E5154;
  v4 = *((_DWORD *)v1 + 30);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v4 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  LocalWorldInfo::~LocalWorldInfo((Legacy::UploadWorldProcessRequest *)((char *)v1 + 24));
  v6 = (void (*)(void))*((_DWORD *)v1 + 3);
  if ( v6 )
    v6();
  operator delete((void *)v1);
}


void __fastcall Legacy::MockWorldConverter::~MockWorldConverter(Legacy::MockWorldConverter *this)
{
  void *v1; // r0@1

  v1 = (void *)Legacy::MockWorldConverter::~MockWorldConverter(this);
  j_j_j__ZdlPv_5(v1);
}


int __fastcall Legacy::ConvertWorldProcessRequest::getProcessingType(Legacy::ConvertWorldProcessRequest *this)
{
  return 0;
}


Legacy::WorldImporter *__fastcall Legacy::WorldImporter::~WorldImporter(Legacy::WorldImporter *this)
{
  Legacy::WorldImporter *v1; // r11@1
  int v2; // r0@1
  TaskGroup *v3; // r0@3
  TaskGroup *v4; // r0@4
  WorkerPool *v5; // r0@5
  WorkerPool *v6; // r0@6
  int v7; // r5@7
  int v8; // r7@7
  unsigned int *v9; // r2@9
  signed int v10; // r1@11
  int v11; // r1@17
  void *v12; // r0@17
  int v13; // r5@22
  unsigned int *v14; // r1@23
  unsigned int v15; // r0@25
  unsigned int *v16; // r6@29
  unsigned int v17; // r0@31
  int v18; // r5@36
  unsigned int *v19; // r1@37
  unsigned int v20; // r0@39
  unsigned int *v21; // r6@43
  unsigned int v22; // r0@45

  v1 = this;
  *(_DWORD *)this = &off_26E513C;
  TaskGroup::flush(*((TaskGroup **)this + 11));
  v2 = *((_DWORD *)v1 + 12);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 12) = 0;
  v3 = (TaskGroup *)*((_DWORD *)v1 + 11);
  if ( v3 )
  {
    v4 = TaskGroup::~TaskGroup(v3);
    operator delete((void *)v4);
  }
  *((_DWORD *)v1 + 11) = 0;
  v5 = (WorkerPool *)*((_DWORD *)v1 + 10);
  if ( v5 )
    v6 = WorkerPool::~WorkerPool(v5);
    operator delete((void *)v6);
  *((_DWORD *)v1 + 10) = 0;
  v8 = *(_QWORD *)((char *)v1 + 20) >> 32;
  v7 = *(_QWORD *)((char *)v1 + 20);
  if ( v7 != v8 )
    do
    {
      v11 = *(_DWORD *)(v7 + 96);
      v12 = (void *)(v11 - 12);
      if ( (int *)(v11 - 12) != &dword_28898C0 )
      {
        v9 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      }
      LocalWorldInfo::~LocalWorldInfo((LocalWorldInfo *)v7);
      v7 += 104;
    }
    while ( v7 != v8 );
    v7 = *((_DWORD *)v1 + 5);
  if ( v7 )
    operator delete((void *)v7);
  v13 = *((_DWORD *)v1 + 4);
  if ( v13 )
    v14 = (unsigned int *)(v13 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    else
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      else
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  v18 = *((_DWORD *)v1 + 2);
  if ( v18 )
    v19 = (unsigned int *)(v18 + 4);
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
  return v1;
}
