

int *__fastcall ExternalServerFile::updateTimeStamp(ExternalServerFile *this, int a2)
{
  __int64 v2; // kr00_8@1
  unsigned int v3; // r6@1
  int *result; // r0@1
  int *v5; // r4@2
  int v6; // r7@2
  int v7; // r5@4
  bool v8; // zf@7
  int v9; // r4@10

  v2 = *(_QWORD *)this;
  v3 = a2 % (unsigned int)(*(_QWORD *)this >> 32);
  result = *(int **)(*(_QWORD *)this + 4 * v3);
  if ( result )
  {
    v5 = (int *)*result;
    v6 = *(_DWORD *)(*result + 4);
    while ( v6 != a2 )
    {
      v7 = *v5;
      if ( *v5 )
      {
        v6 = *(_DWORD *)(v7 + 4);
        result = (int *)v2;
        v5 = *(int **)v2;
        if ( *(_DWORD *)(v7 + 4) % HIDWORD(v2) == v3 )
          continue;
      }
      return result;
    }
    v8 = result == 0;
    if ( result )
      result = (int *)*result;
      v8 = result == 0;
    if ( !v8 )
      v9 = result[2];
      result = (int *)time(0);
      *(_DWORD *)(v9 + 44) = result;
  }
  return result;
}


void __fastcall ExternalServerFile::load(ExternalServerFile *this)
{
  ExternalServerFile::load(this);
}


int __fastcall ExternalServerFile::ExternalServerFile(double a1)
{
  double v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r7@3
  void *v4; // r6@3
  void *v5; // r0@4
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  int v9; // [sp+0h] [bp-28h]@4

  v1 = a1;
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 1065353216;
  LODWORD(a1) += 16;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v2 = sub_119C844(a1);
  *(_DWORD *)(LODWORD(v1) + 4) = v2;
  if ( v2 == 1 )
  {
    *(_DWORD *)(LODWORD(v1) + 24) = 0;
    v4 = (void *)(LODWORD(v1) + 24);
  }
  else
    if ( v2 >= 0x40000000 )
      sub_119C874();
    v3 = 4 * v2;
    v4 = operator new(4 * v2);
    _aeabi_memclr4(v4, v3);
  *(_DWORD *)LODWORD(v1) = v4;
  *(_DWORD *)(LODWORD(v1) + 28) = &unk_28898CC;
  sub_119C854(&v9, (int *)HIDWORD(v1));
  sub_119C894((const void **)&v9, "/external_servers.txt", 0x15u);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(LODWORD(v1) + 28),
    &v9);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v9 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v5);
  return LODWORD(v1);
}


signed int __fastcall ExternalServerFile::findAndEditServer(int a1, int *a2, int *a3, int a4, int a5)
{
  int v5; // r11@1
  int v6; // r6@1
  int *v7; // r9@1
  int *v8; // r8@1
  void *v9; // r0@2
  int v10; // r7@5
  const void *v11; // r5@6
  size_t v12; // r4@6
  int v13; // r10@7
  const void *v14; // r0@7
  int v15; // r0@8
  bool v16; // zf@8
  signed int result; // r0@12
  unsigned int v18; // r1@13

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v9 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v9 = &ServiceLocator<AppPlatform>::mDefaultService;
  if ( (*(int (**)(void))(**(_DWORD **)v9 + 156))() != 1 )
    goto LABEL_12;
  v10 = *(_DWORD *)(v5 + 8);
  if ( !v10 )
  v11 = (const void *)*v7;
  v12 = *(_DWORD *)(*v7 - 12);
  while ( 1 )
  {
    v13 = *(_DWORD *)(v10 + 8);
    v14 = *(const void **)(v13 + 40);
    if ( *((_DWORD *)v14 - 3) == v12 )
    {
      v15 = memcmp(v14, v11, v12);
      v16 = v15 == 0;
      if ( !v15 )
        v16 = *(_DWORD *)(v13 + 12) == v6;
      if ( v16 )
        break;
    }
    v10 = *(_DWORD *)v10;
    if ( !v10 )
      goto LABEL_12;
  }
  v18 = *(_DWORD *)(v13 + 8);
  if ( v18 <= 0xEA5F )
    ExternalServerFile::editServer((ExternalServerFile *)v5, v18, v8, v7, v6, a5);
    result = 1;
LABEL_12:
    result = 0;
  return result;
}


int *__fastcall ExternalServerFile::save(ExternalServerFile *this)
{
  int v1; // r7@0
  ExternalServerFile *v2; // r4@1
  char v3; // r5@1
  bool v4; // zf@3
  unsigned int *v5; // r2@7
  signed int v6; // r1@9
  int v7; // r0@15
  __int64 v8; // r2@15
  unsigned __int64 v9; // r2@15
  char v10; // r5@15
  void *v11; // r0@17
  bool v12; // zf@18
  char v14; // [sp+14h] [bp-64h]@15
  void (__fastcall *v15)(char *, char *, signed int); // [sp+1Ch] [bp-5Ch]@15
  char v16; // [sp+24h] [bp-54h]@15
  unsigned __int64 v17; // [sp+28h] [bp-50h]@1
  int v18; // [sp+30h] [bp-48h]@1
  char v19; // [sp+34h] [bp-44h]@1
  void (__cdecl *v20)(char *); // [sp+3Ch] [bp-3Ch]@1
  char v21; // [sp+44h] [bp-34h]@1
  void *v22; // [sp+48h] [bp-30h]@1
  int v23; // [sp+4Ch] [bp-2Ch]@1

  v2 = this;
  v22 = 0;
  v23 = 0;
  HIDWORD(v17) = *((_DWORD *)this + 7);
  v18 = *(_DWORD *)(HIDWORD(v17) - 12);
  Core::File::open((int)&v19, (int)&v22, (__int64 *)((char *)&v17 + 4), 46);
  v3 = v21;
  v21 |= 2u;
  if ( v20 )
    v20(&v19);
  v4 = (v3 & 1) == 0;
  if ( v3 & 1 )
  {
    v1 = *((_DWORD *)v2 + 2);
    v4 = v1 == 0;
  }
  if ( !v4 )
    do
    {
      v7 = *(_DWORD *)(v1 + 8);
      LODWORD(v8) = *(_QWORD *)(v7 + 8);
      HIDWORD(v8) = *(_DWORD *)(v7 + 28);
      Util::format(
        (Util *)&v17,
        "%d:%s:%s:%d:%d\n",
        v8,
        (unsigned int)*(_QWORD *)(v7 + 40),
        (_DWORD)(*(_QWORD *)(v7 + 8) >> 32),
        (_DWORD)(*(_QWORD *)(v7 + 40) >> 32));
      LODWORD(v9) = v17;
      Core::FileImpl::write((Core::FileImpl *)&v14, v22, v9, *(_DWORD *)(v17 - 12));
      v10 = v16;
      v16 |= 2u;
      if ( v15 )
        v15(&v14, &v14, 3);
      v11 = (void *)(v17 - 12);
      if ( (int *)(v17 - 12) != &dword_28898C0 )
      {
        v5 = (unsigned int *)(v17 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v11);
      }
      v12 = (v10 & 1) == 0;
      if ( v10 & 1 )
        v1 = *(_DWORD *)v1;
        v12 = v1 == 0;
    }
    while ( !v12 );
  return Core::File::~File((Core::File *)&v22);
}


signed int __fastcall ExternalServerFile::addServer(ExternalServerFile *a1, int *a2, void **a3, int a4)
{
  ExternalServerFile *v4; // r10@1
  int v5; // r6@1
  void **v6; // r4@1
  int *v7; // r5@1
  void *v8; // r0@2
  unsigned int v9; // r6@5
  __int64 v10; // kr00_8@5
  _DWORD *v11; // r0@6
  ExternalServerFile *v12; // r11@7
  _DWORD *v13; // r10@7
  int v14; // r4@7
  _DWORD *v15; // r7@9
  bool v16; // zf@12
  int v17; // r4@15
  _DWORD *v18; // r0@15
  size_t v19; // r2@15
  int *v21; // r0@22
  int v22; // r7@23
  int v23; // r4@23
  int v24; // r5@25
  bool v25; // zf@28
  _DWORD *v26; // r0@32
  int v27; // r5@33
  void *v28; // r4@33
  ExternalServer *v29; // r0@33
  ExternalServer *v30; // r0@34
  _DWORD *s2; // [sp+Ch] [bp-34h]@5
  int *v32; // [sp+10h] [bp-30h]@5
  int *v33; // [sp+14h] [bp-2Ch]@5
  int v34; // [sp+18h] [bp-28h]@5

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v8 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v8 = &ServiceLocator<AppPlatform>::mDefaultService;
  if ( (*(int (**)(void))(**(_DWORD **)v8 + 156))() != 1 )
    return 0;
  v34 = v5;
  v9 = 1;
  v32 = v7;
  v10 = *(_QWORD *)v4;
  s2 = *v6;
  v33 = (int *)v6;
  while ( 2 )
  {
    v11 = *(_DWORD **)(v10 + 4 * (v9 % HIDWORD(v10)));
    if ( !v11 )
      break;
    v12 = v4;
    v13 = (_DWORD *)*v11;
    v14 = *(_DWORD *)(*v11 + 4);
    while ( v9 != v14 )
    {
      v15 = (_DWORD *)*v13;
      if ( !*v13 )
      {
        v4 = v12;
        goto LABEL_22;
      }
      v14 = v15[1];
      v11 = v13;
      v13 = (_DWORD *)*v13;
      if ( v15[1] % HIDWORD(v10) != v9 % HIDWORD(v10) )
    }
    v16 = v11 == 0;
    v4 = v12;
    if ( v11 )
      v11 = (_DWORD *)*v11;
      v16 = v11 == 0;
    if ( v16 )
    v17 = v11[2];
    v18 = *(_DWORD **)(v17 + 40);
    v19 = *(v18 - 3);
    if ( v19 == *(s2 - 3) && !memcmp(v18, s2, v19) && *(_DWORD *)(v17 + 12) == v34 )
      return 0;
    if ( (signed int)++v9 < 60000 )
      continue;
    break;
  }
LABEL_22:
  v21 = *(int **)(v10 + 4 * (v9 % HIDWORD(v10)));
  if ( !v21 )
    goto LABEL_32;
  v22 = *v21;
  v23 = *(_DWORD *)(*v21 + 4);
  while ( v9 != v23 )
    v24 = *(_DWORD *)v22;
    if ( *(_DWORD *)v22 )
      v23 = *(_DWORD *)(v24 + 4);
      v21 = (int *)v22;
      v22 = *(_DWORD *)v22;
      if ( *(_DWORD *)(v24 + 4) % HIDWORD(v10) == v9 % HIDWORD(v10) )
        continue;
  v25 = v21 == 0;
  if ( v21 )
    v22 = *v21;
    v25 = *v21 == 0;
  if ( v25 )
LABEL_32:
    v26 = operator new(0xCu);
    *v26 = 0;
    v26[1] = v9;
    v26[2] = 0;
    v22 = std::_Hashtable<int,std::pair<int const,std::unique_ptr<ExternalServer,std::default_delete<ExternalServer>>>,std::allocator<std::pair<int const,std::unique_ptr<ExternalServer,std::default_delete<ExternalServer>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
            (int)v4,
            v9 % HIDWORD(v10),
            v9,
            (int)v26);
  v27 = time(0);
  v28 = operator new(0x30u);
  ExternalServer::ExternalServer((int)v28, v9, v32, v33, v34, v27);
  v29 = *(ExternalServer **)(v22 + 8);
  *(_DWORD *)(v22 + 8) = v28;
  if ( v29 )
    v30 = ExternalServer::~ExternalServer(v29);
    operator delete((void *)v30);
  ExternalServerFile::save(v4);
  return 1;
}


int *__fastcall ExternalServerFile::editServer(ExternalServerFile *a1, unsigned int a2, int *a3, int *a4, int a5, int a6)
{
  ExternalServerFile *v6; // r10@1
  int *v7; // r4@1
  int *v8; // r5@1
  unsigned int v9; // r7@1
  void *v10; // r0@2
  int *result; // r0@4
  unsigned int v12; // r6@5
  _DWORD *v13; // r0@5
  _DWORD *v14; // r8@6
  __int64 v15; // r4@6
  _DWORD *v16; // r11@8
  bool v17; // zf@12
  int v18; // r4@15
  int *v19; // [sp+0h] [bp-30h]@5
  int v20; // [sp+4h] [bp-2Ch]@2
  int *v21; // [sp+8h] [bp-28h]@2

  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
  {
    v20 = a5;
    v21 = v8;
    v10 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  }
  else
    v10 = &ServiceLocator<AppPlatform>::mDefaultService;
  result = (int *)(*(int (**)(void))(**(_DWORD **)v10 + 156))();
  if ( result == (int *)1 )
    v19 = v7;
    v12 = v9 % (unsigned int)(*(_QWORD *)v6 >> 32);
    v13 = *(_DWORD **)(*(_QWORD *)v6 + 4 * v12);
    if ( v13 )
    {
      v14 = (_DWORD *)*v13;
      LODWORD(v15) = *(_DWORD *)(*v13 + 4);
      while ( (_DWORD)v15 != v9 )
      {
        v16 = (_DWORD *)*v14;
        if ( *v14 )
        {
          v13 = v14;
          v14 = (_DWORD *)*v14;
          v15 = *(_QWORD *)v6;
          if ( v16[1] % (unsigned int)(*(_QWORD *)v6 >> 32) == v12 )
            continue;
        }
        goto LABEL_17;
      }
      v17 = v13 == 0;
      if ( v13 )
        LODWORD(v15) = *v13;
        v17 = *v13 == 0;
      if ( !v17 )
        EntityInteraction::setInteractText((int *)(*(_DWORD *)(v15 + 8) + 28), v21);
        EntityInteraction::setInteractText((int *)(*(_DWORD *)(v15 + 8) + 40), v19);
        v18 = *(_DWORD *)(v15 + 8);
        *(_DWORD *)(v18 + 12) = v20;
        if ( a6 == 1 )
          *(_DWORD *)(v18 + 44) = time(0);
    }
LABEL_17:
    result = j_j_j__ZN18ExternalServerFile4saveEv(v6);
  return result;
}


void __fastcall ExternalServerFile::load(ExternalServerFile *this)
{
  ExternalServerFile *v1; // r5@1
  void *v2; // r0@2
  int v3; // r4@5
  ExternalServer *v4; // r0@6
  int v5; // r6@6
  ExternalServer *v6; // r0@7
  char v7; // r4@9
  _BYTE *v8; // r7@12
  int v9; // r4@13
  int *v10; // r0@13
  _BYTE *v11; // r6@13
  int v12; // r1@13
  char v13; // r2@14
  int v14; // r3@14
  int *v15; // r11@18
  int v16; // r4@19
  char *v17; // r5@20
  unsigned int **v18; // r10@20
  const void **v19; // r6@20
  unsigned int *v20; // r2@21
  signed int v21; // r1@23
  unsigned int v22; // r6@33
  unsigned int v23; // r3@33
  char *v24; // r0@39
  unsigned int *v25; // r2@42
  signed int v26; // r1@44
  char *v27; // r0@51
  const char **v28; // r4@52
  const char **v29; // r6@52
  int v30; // r7@52
  unsigned __int32 v31; // r9@53
  __int32 v32; // r5@53
  __int32 v33; // r4@53
  bool v34; // zf@55
  int v35; // r4@58
  int *v36; // r0@58
  int *v37; // r11@59
  int v38; // r6@59
  _DWORD *v39; // r7@61
  bool v40; // zf@65
  _DWORD *v41; // r0@69
  void *v42; // r4@70
  ExternalServer *v43; // r0@70
  ExternalServer *v44; // r0@71
  void *v45; // r0@72
  void *v46; // r0@73
  unsigned int *v47; // r2@77
  signed int v48; // r1@79
  char *v49; // r0@85
  void *v50; // r0@90
  unsigned int *v51; // r2@94
  signed int v52; // r1@96
  unsigned int *v53; // r2@102
  signed int v54; // r1@104
  unsigned int *v55; // r2@106
  signed int v56; // r1@108
  unsigned int *v57; // r2@118
  signed int v58; // r1@120
  int v59; // r2@127
  char *v60; // r0@129
  int v61; // r0@129
  char *v62; // r0@130
  void **v63; // r0@131
  void *v64; // r0@131
  unsigned int *v65; // r2@136
  signed int v66; // r1@138
  unsigned int *v67; // r2@140
  signed int v68; // r1@142
  int v69; // [sp+10h] [bp-220h]@58
  unsigned __int64 *v70; // [sp+14h] [bp-21Ch]@19
  void **v71; // [sp+20h] [bp-210h]@20
  void **v72; // [sp+24h] [bp-20Ch]@20
  void **v73; // [sp+28h] [bp-208h]@20
  void *v74; // [sp+2Ch] [bp-204h]@20
  void **v75; // [sp+30h] [bp-200h]@20
  int v76; // [sp+44h] [bp-1ECh]@53
  int v77; // [sp+48h] [bp-1E8h]@53
  _DWORD *v78; // [sp+4Ch] [bp-1E4h]@33
  const char **v79; // [sp+50h] [bp-1E0h]@32
  int *v80; // [sp+54h] [bp-1DCh]@32
  int *v81; // [sp+58h] [bp-1D8h]@32
  void **v82; // [sp+5Ch] [bp-1D4h]@20
  int v83; // [sp+60h] [bp-1D0h]@91
  void **v84; // [sp+64h] [bp-1CCh]@90
  void **v85; // [sp+68h] [bp-1C8h]@90
  int v86; // [sp+84h] [bp-1ACh]@20
  int v87; // [sp+8Ch] [bp-1A4h]@90
  int v88; // [sp+90h] [bp-1A0h]@91
  _DWORD *v89; // [sp+118h] [bp-118h]@19
  _BYTE *v90; // [sp+120h] [bp-110h]@18
  void **v91; // [sp+124h] [bp-10Ch]@18
  int v92; // [sp+128h] [bp-108h]@132
  void **v93; // [sp+12Ch] [bp-104h]@131
  void **v94; // [sp+130h] [bp-100h]@131
  int v95; // [sp+154h] [bp-DCh]@131
  int v96; // [sp+1E0h] [bp-50h]@9
  int v97; // [sp+1E4h] [bp-4Ch]@9
  char v98; // [sp+1E8h] [bp-48h]@9
  void (*v99)(void); // [sp+1F0h] [bp-40h]@9
  char v100; // [sp+1F8h] [bp-38h]@9
  void *ptr; // [sp+1FCh] [bp-34h]@9
  _BYTE *v102; // [sp+200h] [bp-30h]@9
  int v103; // [sp+204h] [bp-2Ch]@9

  v1 = this;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = &ServiceLocator<AppPlatform>::mDefaultService;
  if ( (*(int (**)(void))(**(_DWORD **)v2 + 156))() == 1 )
  {
    v3 = *((_DWORD *)v1 + 2);
    if ( v3 )
    {
      do
      {
        v4 = *(ExternalServer **)(v3 + 8);
        v5 = *(_DWORD *)v3;
        if ( v4 )
        {
          v6 = ExternalServer::~ExternalServer(v4);
          operator delete((void *)v6);
        }
        operator delete((void *)v3);
        v3 = v5;
      }
      while ( v5 );
    }
    _aeabi_memclr4(*(_QWORD *)v1, 4 * (*(_QWORD *)v1 >> 32));
    *((_DWORD *)v1 + 2) = 0;
    *((_DWORD *)v1 + 3) = 0;
    ptr = 0;
    v102 = 0;
    v103 = 0;
    v96 = *((_DWORD *)v1 + 7);
    v97 = *(_DWORD *)(v96 - 12);
    Core::FileSystem::readFileData((int)&v98, (__int64 *)&v96, (int)&ptr);
    v7 = v100;
    v100 |= 2u;
    if ( v99 )
      v99();
    if ( v7 & 1 )
      v8 = ptr;
      if ( ptr == v102 )
        v11 = &unk_28898CC;
      else
        v9 = v102 - (_BYTE *)ptr;
        v10 = sub_119CB28(v102 - (_BYTE *)ptr, 0);
        v11 = v10 + 3;
        v12 = 0;
        do
          v13 = v8[v12];
          v14 = (int)v10 + v12++;
          *(_BYTE *)(v14 + 12) = v13;
        while ( v9 != v12 );
        if ( v10 != &dword_28898C0 )
          v10[2] = 0;
          *v10 = v9;
          v11[v9] = byte_26C67B8[0];
      v90 = v11;
      v15 = (int *)&v91;
      sub_119DC40((int)&v91, (unsigned int *)&v90, 24);
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v20 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
        else
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v11 - 12);
      v70 = (unsigned __int64 *)v1;
      v89 = &unk_28898CC;
      v16 = *(_DWORD *)((char *)*(v91 - 3) + (_DWORD)&v91 + 124);
      if ( !v16 )
LABEL_29:
        sub_119C994();
      v17 = (char *)&v82;
      v18 = (unsigned int **)&v86;
      v19 = (const void **)&v89;
      v75 = off_26D3F60;
      v74 = off_26D3F6C;
      v73 = (void **)off_26D3F68;
      v71 = off_26D3F84;
      v72 = off_26D3F80[0];
      while ( 1 )
        if ( *(_BYTE *)(v16 + 28) )
          v59 = *(_BYTE *)(v16 + 39);
          sub_119C924(v16);
          v59 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v16 + 24))(v16, 10);
        v60 = sub_119D71C((char *)v15, v19, v59);
        v61 = (int)&v60[*(_DWORD *)(*(_DWORD *)v60 - 12)];
        if ( !v61 || *(_DWORD *)(v61 + 20) & 5 )
          break;
        if ( *(v89 - 3) >= 3u )
          sub_119DC40((int)v17, (unsigned int *)v19, 24);
          v79 = 0;
          v80 = 0;
          v81 = 0;
          if ( !(v17[(_DWORD)*(v82 - 3) + 20] & 2) )
          {
            while ( 1 )
            {
              v78 = &unk_28898CC;
              sub_119D71C(v17, (const void **)&v78, 58);
              v22 = sub_119EDAC(&v78, " \n\r\t", 0xFFFFFFFF, 4u) + 1;
              v23 = *(v78 - 3);
              if ( v23 < v22 )
                sub_119CA78(
                  "%s: __pos (which is %zu) > this->size() (which is %zu)",
                  (int)"basic_string::erase",
                  v22,
                  v23);
              sub_119CA68((const void **)&v78, v22, (_BYTE *)(v23 - v22), 0);
              if ( !sub_119C9E8((const void **)&v78, (const char *)&unk_257BC67) )
              {
                if ( v17[(_DWORD)*(v82 - 3) + 20] & 2 )
                  break;
              }
              if ( v80 == v81 )
                std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
                  (unsigned __int64 *)&v79,
                  (int *)&v78);
              else
                v80 = sub_119C854(v80, (int *)&v78) + 1;
              v24 = (char *)(v78 - 3);
              if ( v78 - 3 != &dword_28898C0 )
                v25 = v78 - 1;
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
                  j_j_j_j_j__ZdlPv_9_1(v24);
              if ( v17[(_DWORD)*(v82 - 3) + 20] & 2 )
                goto LABEL_52;
            }
            v27 = (char *)(v78 - 3);
            if ( v78 - 3 != &dword_28898C0 )
              v57 = v78 - 1;
              if ( &pthread_create )
                __dmb();
                do
                  v58 = __ldrex(v57);
                while ( __strex(v58 - 1, v57) );
                v58 = (*v57)--;
              if ( v58 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v27);
          }
LABEL_52:
          v28 = (const char **)v80;
          v29 = v79;
          v30 = (char *)v80 - (char *)v79;
          if ( (unsigned int)(((char *)v80 - (char *)v79) >> 2) >= 4 )
            v31 = strtol(*v79, 0, 0);
            sub_119C854(&v77, (int *)v29 + 1);
            sub_119C854(&v76, (int *)v29 + 2);
            v32 = 0;
            v33 = strtol(v29[3], 0, 0);
            if ( v30 == 20 )
              v32 = strtol(v29[4], 0, 0);
            v34 = v31 == 0;
            if ( v31 )
              v34 = v33 == 0;
            if ( !v34 )
              v69 = v33;
              v35 = v31 % (*v70 >> 32);
              v36 = *(int **)(*v70 + 4 * v35);
              if ( !v36 )
                goto LABEL_69;
              v37 = (int *)*v36;
              v38 = *(_DWORD *)(*v36 + 4);
              while ( v31 != v38 )
                v39 = (_DWORD *)*v37;
                if ( *v37 )
                  v38 = v39[1];
                  v36 = v37;
                  v37 = (int *)*v37;
                  if ( v39[1] % (*v70 >> 32) == v35 )
                    continue;
              v40 = v36 == 0;
              if ( v36 )
                v38 = *v36;
                v40 = *v36 == 0;
              if ( v40 )
LABEL_69:
                v41 = operator new(0xCu);
                *v41 = 0;
                v41[1] = v31;
                v41[2] = 0;
                v38 = std::_Hashtable<int,std::pair<int const,std::unique_ptr<ExternalServer,std::default_delete<ExternalServer>>>,std::allocator<std::pair<int const,std::unique_ptr<ExternalServer,std::default_delete<ExternalServer>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
                        (int)v70,
                        v35,
                        v31,
                        (int)v41);
              v42 = operator new(0x30u);
              ExternalServer::ExternalServer((int)v42, v31, &v77, &v76, v69, v32);
              v43 = *(ExternalServer **)(v38 + 8);
              v15 = (int *)&v91;
              *(_DWORD *)(v38 + 8) = v42;
              if ( v43 )
                v44 = ExternalServer::~ExternalServer(v43);
                operator delete((void *)v44);
            v17 = (char *)&v82;
            v18 = (unsigned int **)&v86;
            v45 = (void *)(v76 - 12);
            if ( (int *)(v76 - 12) != &dword_28898C0 )
              v53 = (unsigned int *)(v76 - 4);
                  v54 = __ldrex(v53);
                while ( __strex(v54 - 1, v53) );
                v54 = (*v53)--;
              if ( v54 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v45);
            v46 = (void *)(v77 - 12);
            if ( (int *)(v77 - 12) != &dword_28898C0 )
              v55 = (unsigned int *)(v77 - 4);
                  v56 = __ldrex(v55);
                while ( __strex(v56 - 1, v55) );
                v56 = (*v55)--;
              if ( v56 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v46);
            v28 = (const char **)v80;
            v29 = v79;
          if ( v29 != v28 )
            do
              v49 = (char *)(*v29 - 12);
              if ( (int *)v49 != &dword_28898C0 )
                v47 = (unsigned int *)(*v29 - 4);
                    v48 = __ldrex(v47);
                  while ( __strex(v48 - 1, v47) );
                  v48 = (*v47)--;
                if ( v48 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v49);
              ++v29;
            while ( v29 != v28 );
            v28 = v79;
          v19 = (const void **)&v89;
          if ( v28 )
            operator delete(v28);
          v82 = v75;
          *(_DWORD *)((char *)*(v75 - 3) + (_DWORD)v17) = v72;
          v84 = v71;
          v85 = &off_27734E8;
          v50 = (void *)(v87 - 12);
          if ( (int *)(v87 - 12) != &dword_28898C0 )
            v51 = (unsigned int *)(v87 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v52 = __ldrex(v51);
              while ( __strex(v52 - 1, v51) );
            else
              v52 = (*v51)--;
            if ( v52 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v50);
          v85 = &off_26D40A8;
          sub_119C954(v18);
          v82 = v73;
          *(_DWORD *)((char *)*(v73 - 3) + (_DWORD)v17) = v74;
          v83 = 0;
          sub_119C964(&v88);
        v16 = *(int *)((char *)v15 + (_DWORD)*(v91 - 3) + 124);
        if ( !v16 )
          goto LABEL_29;
      v62 = (char *)(v89 - 3);
      if ( v89 - 3 != &dword_28898C0 )
        v65 = v89 - 1;
            v66 = __ldrex(v65);
          while ( __strex(v66 - 1, v65) );
          v66 = (*v65)--;
        if ( v66 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v62);
      v63 = off_26D3F84;
      v91 = off_26D3F60;
      *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)v15) = off_26D3F80[0];
      v93 = v63;
      v94 = &off_27734E8;
      v64 = (void *)(v95 - 12);
      if ( (int *)(v95 - 12) != &dword_28898C0 )
        v67 = (unsigned int *)(v95 - 4);
            v68 = __ldrex(v67);
          while ( __strex(v68 - 1, v67) );
          v68 = (*v67)--;
        if ( v68 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v64);
      v94 = &off_26D40A8;
      sub_119C954((unsigned int **)v15 + 10);
      v91 = (void **)off_26D3F68;
      *(int *)((char *)v15 + *((_DWORD *)off_26D3F68 - 3)) = (int)off_26D3F6C;
      v92 = 0;
      sub_119C964(v15 + 13);
    if ( ptr )
      operator delete(ptr);
  }
}


void *__fastcall ExternalServerFile::getServerInfo(ExternalServerFile *this, int a2, unsigned int a3)
{
  __int64 v3; // kr00_8@1
  ExternalServerFile *v4; // r8@1
  unsigned int v5; // r7@1
  _DWORD *v6; // r0@1
  _DWORD *v7; // r6@2
  int v8; // r4@2
  _DWORD *v9; // r5@4
  bool v10; // zf@7
  int v11; // r5@10
  void *result; // r0@10

  v3 = *(_QWORD *)a2;
  v4 = this;
  v5 = a3 % (unsigned int)(*(_QWORD *)a2 >> 32);
  v6 = *(_DWORD **)(*(_QWORD *)a2 + 4 * v5);
  if ( !v6 )
    goto LABEL_11;
  v7 = (_DWORD *)*v6;
  v8 = *(_DWORD *)(*v6 + 4);
  while ( v8 != a3 )
  {
    v9 = (_DWORD *)*v7;
    if ( *v7 )
    {
      v8 = v9[1];
      v6 = v7;
      v7 = (_DWORD *)*v7;
      if ( v9[1] % HIDWORD(v3) == v5 )
        continue;
    }
  }
  v10 = v6 == 0;
  if ( v6 )
    v6 = (_DWORD *)*v6;
    v10 = v6 == 0;
  if ( v10 )
LABEL_11:
    *(_DWORD *)v4 = 0;
    sub_119C884((void **)v4 + 1, (const char *)&unk_257BC67);
    result = sub_119C884((void **)v4 + 2, (const char *)&unk_257BC67);
  else
    v11 = v6[2];
    *(_DWORD *)v4 = *(_DWORD *)(v11 + 12);
    sub_119C854((int *)v4 + 1, (int *)(v11 + 40));
    result = sub_119C854((int *)v4 + 2, (int *)(v11 + 28));
  return result;
}


int *__fastcall ExternalServerFile::removeServer(ExternalServerFile *this, int a2)
{
  ExternalServerFile *v2; // r8@1
  int v3; // r9@1 OVERLAPPED
  unsigned int v4; // r10@1 OVERLAPPED
  unsigned int v5; // r7@1
  int *result; // r0@1
  int v7; // r6@2
  int v8; // r4@2
  int v9; // r5@4
  bool v10; // zf@7
  int v11; // r1@10
  _DWORD *v12; // r0@10
  _DWORD *v13; // r2@11

  v2 = this;
  *(_QWORD *)&v3 = *(_QWORD *)this;
  v5 = a2 % (unsigned int)(*(_QWORD *)this >> 32);
  result = *(int **)(*(_QWORD *)this + 4 * v5);
  if ( result )
  {
    v7 = *result;
    v8 = *(_DWORD *)(*result + 4);
    while ( v8 != a2 )
    {
      v9 = *(_DWORD *)v7;
      if ( *(_DWORD *)v7 )
      {
        v8 = *(_DWORD *)(v9 + 4);
        result = (int *)v7;
        v7 = *(_DWORD *)v7;
        if ( *(_DWORD *)(v9 + 4) % v4 == v5 )
          continue;
      }
      return result;
    }
    v10 = result == 0;
    if ( result )
      v7 = *result;
      v10 = *result == 0;
    if ( !v10 )
      v11 = *(_DWORD *)(v7 + 4) % v4;
      v12 = *(_DWORD **)(v3 + 4 * v11);
      do
        v13 = v12;
        v12 = (_DWORD *)*v12;
      while ( v12 != (_DWORD *)v7 );
      std::_Hashtable<int,std::pair<int const,std::unique_ptr<ExternalServer,std::default_delete<ExternalServer>>>,std::allocator<std::pair<int const,std::unique_ptr<ExternalServer,std::default_delete<ExternalServer>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_erase(
        (int)v2,
        v11,
        v13,
        v7);
      result = j_j_j__ZN18ExternalServerFile4saveEv(v2);
  }
  return result;
}
