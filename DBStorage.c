

void __fastcall DBStorage::_savePlayerDataSync(int a1, const void **a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  int v5; // r0@1
  void (__fastcall *v6)(void **); // r12@1
  void *v7; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  int v10; // [sp+4h] [bp-2Ch]@1
  int v11; // [sp+Ch] [bp-24h]@1
  int v12; // [sp+10h] [bp-20h]@1
  int v13; // [sp+14h] [bp-1Ch]@1
  int v14; // [sp+18h] [bp-18h]@1
  void *ptr; // [sp+1Ch] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  j_DBStorage::_playerKey(&v10, (int)a2, a2);
  v5 = *(_DWORD *)(v3 + 36);
  v6 = *(void (__fastcall **)(void **))(**(_DWORD **)(v3 + 44) + 8);
  v13 = v10;
  v14 = *(_DWORD *)(v10 - 12);
  v11 = *v4;
  v12 = *(_DWORD *)(v11 - 12);
  v6(&ptr);
  j_DBStorage::_checkStatusValid((DBStorage *)v3, (const leveldb::Status *)&ptr);
  if ( ptr )
    j_operator delete[](ptr);
  v7 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
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


const void **__fastcall DBStorage::_legacyConsolePlayerKey(const void **a1, int a2, const void **a3)
{
  const void **v3; // r5@1
  const void **v4; // r4@1

  v3 = a1;
  v4 = a3;
  *a1 = &unk_28898CC;
  sub_21E6FCC(a1, *((_DWORD *)*a3 - 3) + 22);
  sub_21E7408(v3, "legacy_console_player_", 0x16u);
  return sub_21E72F0(v3, v4);
}


void __fastcall DBStorage::writeTag(int a1, int *a2, int a3)
{
  int v3; // r4@1
  int v4; // r7@1
  int *v5; // r5@1
  const void **v6; // r6@1
  void *v7; // r0@1
  int v8; // r0@2
  void (__fastcall *v9)(void **); // r7@2
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  void **v12; // [sp+8h] [bp-38h]@1
  const void **v13; // [sp+Ch] [bp-34h]@1
  _DWORD *v14; // [sp+10h] [bp-30h]@2
  int v15; // [sp+14h] [bp-2Ch]@2
  int v16; // [sp+18h] [bp-28h]@2
  int v17; // [sp+1Ch] [bp-24h]@2
  void *ptr; // [sp+20h] [bp-20h]@2
  int v19; // [sp+24h] [bp-1Ch]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (const void **)j_ThreadLocal<std::string>::getLocal(a1 + 64);
  sub_21E7EE0(v6, 0, *((_BYTE **)*v6 - 3), 0);
  v12 = &off_26E91F0;
  v13 = v6;
  (*(void (__fastcall **)(int *, int))(*(_DWORD *)v4 + 44))(&v19, v4);
  j_Tag::writeNamedTag((int)&v19, v4, (int)&v12);
  v7 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v19 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = *(_DWORD *)(v3 + 36);
  v9 = *(void (__fastcall **)(void **))(**(_DWORD **)(v3 + 44) + 8);
  v16 = *v5;
  v17 = *(_DWORD *)(v16 - 12);
  v14 = *v6;
  v15 = *(v14 - 3);
  v9(&ptr);
  j_DBStorage::_checkStatusValid((DBStorage *)v3, (const leveldb::Status *)&ptr);
  if ( ptr )
    j_operator delete[](ptr);
}


void __fastcall DBStorage::~DBStorage(DBStorage *this)
{
  DBStorage *v1; // r0@1

  v1 = j_DBStorage::~DBStorage(this);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall DBStorage::savePlayerData(int a1, const void **a2, _DWORD *a3)
{
  _DWORD *v3; // r4@1
  int v4; // r5@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v3 = a3;
  v4 = a1;
  j_DBStorage::_playerKey(&v8, (int)a2, a2);
  j_DBStorage::_writeAsync(v4, &v8, v3);
  v5 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
}


BackgroundTask *__fastcall DBStorage::_queueSaveCallback(DBStorage *this)
{
  DBStorage *v1; // r5@1
  BackgroundTask *result; // r0@1
  int (*v3)(void); // r3@2
  void (__fastcall *v4)(char *, char *, signed int); // r7@2
  int v5; // r5@4
  unsigned int *v6; // r0@5
  unsigned int v7; // r1@7
  int (*v8)(void); // r7@10
  _DWORD *v9; // r0@12
  int v10; // r1@12
  int v11; // r3@12
  int v12; // r1@12
  int v13; // r4@18
  unsigned int *v14; // r1@19
  unsigned int *v15; // r5@25
  int v16; // r4@34
  unsigned int *v17; // r1@35
  unsigned int *v18; // r5@41
  char v19; // [sp+8h] [bp-68h]@12
  int (*v20)(void); // [sp+10h] [bp-60h]@12
  int v21; // [sp+18h] [bp-58h]@4
  int v22; // [sp+1Ch] [bp-54h]@4
  int v23; // [sp+20h] [bp-50h]@11
  int v24; // [sp+24h] [bp-4Ch]@12
  int (*v25)(void); // [sp+28h] [bp-48h]@10
  int v26; // [sp+2Ch] [bp-44h]@11
  _DWORD *v27; // [sp+30h] [bp-40h]@12
  int (*v28)(void); // [sp+38h] [bp-38h]@12
  signed int (__fastcall *v29)(int *); // [sp+3Ch] [bp-34h]@12
  char v30; // [sp+40h] [bp-30h]@2
  int (*v31)(void); // [sp+48h] [bp-28h]@2
  int v32; // [sp+4Ch] [bp-24h]@3
  int v33; // [sp+50h] [bp-20h]@2
  int v34; // [sp+54h] [bp-1Ch]@4

  v1 = this;
  result = (BackgroundTask *)*((_DWORD *)this + 32);
  if ( result )
  {
    j_std::__shared_ptr<std::string,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::string>,std::string>(
      (int)&v33,
      (int)&v30,
      (_DWORD *)v1 + 14);
    v3 = 0;
    v31 = 0;
    v4 = (void (__fastcall *)(char *, char *, signed int))*((_DWORD *)v1 + 32);
    if ( v4 )
    {
      v4(&v30, (char *)v1 + 120, 2);
      v32 = *((_DWORD *)v1 + 33);
      v3 = (int (*)(void))*((_DWORD *)v1 + 32);
      v31 = (int (*)(void))*((_DWORD *)v1 + 32);
    }
    v21 = v33;
    v5 = TaskGroup::DISK;
    v22 = v34;
    if ( v34 )
      v6 = (unsigned int *)(v34 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 + 1, v6) );
        v3 = v31;
      }
      else
        ++*v6;
    v8 = 0;
    v25 = 0;
    if ( v3 )
      ((void (__fastcall *)(int *, char *, signed int))v3)(&v23, &v30, 2);
      v8 = v31;
      v26 = v32;
      v25 = v31;
    v28 = 0;
    v9 = j_operator new(0x18u);
    *v9 = v21;
    v10 = v22;
    v22 = 0;
    v9[1] = v10;
    v21 = 0;
    v11 = v24;
    v9[2] = v23;
    v9[3] = v11;
    v12 = v26;
    v9[4] = v8;
    v9[5] = v12;
    v27 = v9;
    v28 = (int (*)(void))sub_1AF9104;
    v29 = sub_1AF90EC;
    v20 = 0;
    result = j_TaskGroup::queue(v5, (int)&v27, (int)&v19, 1u, 0xFFFFFFFF);
    if ( v20 )
      result = (BackgroundTask *)v20();
    if ( v28 )
      result = (BackgroundTask *)v28();
    if ( v25 )
      result = (BackgroundTask *)((int (__fastcall *)(int *, int *, signed int))v25)(&v23, &v23, 3);
    v13 = v22;
    if ( v22 )
      v14 = (unsigned int *)(v22 + 4);
          result = (BackgroundTask *)__ldrex(v14);
        while ( __strex((unsigned int)result - 1, v14) );
        result = (BackgroundTask *)(*v14)--;
      if ( result == (BackgroundTask *)1 )
        v15 = (unsigned int *)(v13 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (BackgroundTask *)__ldrex(v15);
          while ( __strex((unsigned int)result - 1, v15) );
        }
        else
          result = (BackgroundTask *)(*v15)--;
        if ( result == (BackgroundTask *)1 )
          result = (BackgroundTask *)(*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
    if ( v31 )
      result = (BackgroundTask *)v31();
    v16 = v34;
      v17 = (unsigned int *)(v34 + 4);
          result = (BackgroundTask *)__ldrex(v17);
        while ( __strex((unsigned int)result - 1, v17) );
        result = (BackgroundTask *)(*v17)--;
        v18 = (unsigned int *)(v16 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
            result = (BackgroundTask *)__ldrex(v18);
          while ( __strex((unsigned int)result - 1, v18) );
          result = (BackgroundTask *)(*v18)--;
          result = (BackgroundTask *)(*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  }
  return result;
}


void __fastcall DBStorage::saveLevelData(DBStorage *this, const LevelData *a2)
{
  DBStorage::saveLevelData(this, a2);
}


void __fastcall DBStorage::deleteData(int a1, int *a2)
{
  int v2; // r4@1
  void *v3; // r6@1
  __int64 v4; // r0@1
  void *v5; // r0@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  char v8; // [sp+4h] [bp-3Ch]@1
  void (*v9)(void); // [sp+Ch] [bp-34h]@1
  int v10; // [sp+14h] [bp-2Ch]@1
  int v11; // [sp+18h] [bp-28h]@1
  void *v12; // [sp+1Ch] [bp-24h]@1
  void (*v13)(void); // [sp+24h] [bp-1Ch]@1

  v10 = a1;
  v2 = TaskGroup::DISK;
  sub_21E8AF4(&v11, a2);
  v13 = 0;
  v3 = j_operator new(8u);
  *(_DWORD *)v3 = v10;
  sub_21E8AF4((int *)v3 + 1, &v11);
  HIDWORD(v4) = sub_1AF9598;
  v12 = v3;
  LODWORD(v4) = sub_1AF95F0;
  *(_QWORD *)&v13 = v4;
  v9 = 0;
  j_TaskGroup::queue(v2, (int)&v12, (int)&v8, 1u, 0xFFFFFFFF);
  if ( v9 )
    v9();
  if ( v13 )
    v13();
  v5 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v11 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
}


LevelData *__fastcall DBStorage::_legacyLoadPlayer(double a1, int *a2)
{
  double v2; // r4@1
  int *v3; // r6@1
  int v4; // r1@2
  int v5; // r0@2
  int v6; // r7@3
  void *v7; // r0@4
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  char *v10; // r0@10
  char *v11; // r0@11
  int v13; // [sp+4h] [bp-194h]@4
  int v14; // [sp+8h] [bp-190h]@2
  int v15; // [sp+Ch] [bp-18Ch]@11
  char v16; // [sp+10h] [bp-188h]@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)LODWORD(a1) = 0;
  LODWORD(a1) = &v16;
  j_LevelData::LevelData(a1);
  if ( *(_DWORD *)(*v3 - 12) )
  {
    j_DBStorage::_legacyLoadClientPlayer((NbtIo *)&v14, SHIDWORD(v2), v3);
    v5 = v14;
    *(_DWORD *)LODWORD(v2) = v14;
    v14 = 0;
  }
  else
    if ( (*(int (__fastcall **)(_DWORD, char *))(*(_DWORD *)HIDWORD(v2) + 16))(HIDWORD(v2), &v16) != 1 )
      return j_LevelData::~LevelData((LevelData *)&v16);
    v10 = j_LevelData::getLoadedPlayerTag((LevelData *)&v16);
    if ( j_CompoundTag::isEmpty((CompoundTag *)v10) )
    v11 = j_LevelData::getLoadedPlayerTag((LevelData *)&v16);
    j_CompoundTag::clone((CompoundTag *)&v15, (int)v11);
    v5 = v15;
    *(_DWORD *)LODWORD(v2) = v15;
    v15 = 0;
  v6 = v5;
  if ( v5 )
    j_DBStorage::_playerKey(&v13, v4, (const void **)v3);
    j_DBStorage::asyncWriteTag(SHIDWORD(v2), &v13, v6);
    v7 = (void *)(v13 - 12);
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
        j_j_j_j__ZdlPv_9(v7);
    }
  return j_LevelData::~LevelData((LevelData *)&v16);
}


RakNet *__fastcall DBStorage::_legacyLoadClientPlayer(NbtIo *a1, int a2, int *a3)
{
  NbtIo *v3; // r4@1
  int *v4; // r5@1
  int v5; // r0@1
  int *v6; // r6@1
  int v7; // r1@1
  int v8; // r5@1
  char v9; // r6@1
  unsigned __int64 v10; // r2@1
  unsigned __int64 v11; // r2@4
  unsigned __int64 v12; // r2@6
  unsigned int v13; // r3@13
  signed int v14; // r7@13
  signed int v15; // r1@13
  unsigned __int64 v16; // r2@20
  void *v17; // r0@28
  void *v18; // r0@32
  RakNet *result; // r0@33
  unsigned int *v20; // r2@35
  signed int v21; // r1@37
  unsigned int *v22; // r2@39
  signed int v23; // r1@41
  unsigned int *v24; // r2@51
  signed int v25; // r1@53
  void **v26; // [sp+Ch] [bp-124h]@28
  int v27; // [sp+10h] [bp-120h]@28
  int v28; // [sp+14h] [bp-11Ch]@28
  int *v29; // [sp+18h] [bp-118h]@28
  int v30; // [sp+1Ch] [bp-114h]@26
  int v31; // [sp+20h] [bp-110h]@26
  char v32; // [sp+24h] [bp-10Ch]@26
  void (*v33)(void); // [sp+2Ch] [bp-104h]@26
  int v34; // [sp+38h] [bp-F8h]@24
  int v35; // [sp+3Ch] [bp-F4h]@24
  char v36; // [sp+40h] [bp-F0h]@24
  void (*v37)(void); // [sp+48h] [bp-E8h]@24
  char v38; // [sp+54h] [bp-DCh]@22
  void (*v39)(void); // [sp+5Ch] [bp-D4h]@22
  char v40; // [sp+68h] [bp-C8h]@20
  void (*v41)(void); // [sp+70h] [bp-C0h]@20
  int v42; // [sp+80h] [bp-B0h]@20
  char v43; // [sp+84h] [bp-ACh]@10
  void (*v44)(void); // [sp+8Ch] [bp-A4h]@10
  unsigned int v45; // [sp+98h] [bp-98h]@10
  unsigned int v46; // [sp+9Ch] [bp-94h]@10
  char v47; // [sp+A4h] [bp-8Ch]@8
  void (*v48)(void); // [sp+ACh] [bp-84h]@8
  char v49; // [sp+B8h] [bp-78h]@6
  void (*v50)(void); // [sp+C0h] [bp-70h]@6
  char v51; // [sp+CCh] [bp-64h]@4
  void (*v52)(void); // [sp+D4h] [bp-5Ch]@4
  int v53; // [sp+E0h] [bp-50h]@8
  char v54; // [sp+E4h] [bp-4Ch]@6
  char v55; // [sp+EBh] [bp-45h]@4
  int v56; // [sp+F0h] [bp-40h]@1
  int v57; // [sp+F4h] [bp-3Ch]@1
  char v58; // [sp+F8h] [bp-38h]@1
  void (__cdecl *v59)(char *); // [sp+100h] [bp-30h]@1
  char v60; // [sp+108h] [bp-28h]@1
  unsigned __int64 *v61; // [sp+10Ch] [bp-24h]@1
  int v62; // [sp+110h] [bp-20h]@1
  int v63; // [sp+114h] [bp-1Ch]@1
  int v64; // [sp+118h] [bp-18h]@1
  int v65; // [sp+11Ch] [bp-14h]@1
  const char *v66; // [sp+120h] [bp-10h]@1
  int v67; // [sp+124h] [bp-Ch]@1
  int v68; // [sp+130h] [bp+0h]@1
  int v69; // [sp+134h] [bp+4h]@1
  RakNet *v70; // [sp+538h] [bp+408h]@1

  v3 = a1;
  v4 = a3;
  v70 = _stack_chk_guard;
  v6 = (int *)(a2 + 60);
  v5 = *(_DWORD *)(a2 + 60);
  v7 = *(_DWORD *)(v5 - 12);
  v64 = v5;
  v65 = v7;
  v66 = "players";
  v67 = -1;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v68, (int)&v64, 2);
  sub_21E94B4((void **)&v63, (const char *)&v69);
  j_getPlayerFilename((const void **)&v64, v6, v4);
  v61 = 0;
  v62 = 0;
  v8 = v64;
  v56 = v64;
  v57 = *(_DWORD *)(v64 - 12);
  j_Core::File::open((int)&v58, (int)&v61, (__int64 *)&v56, 33);
  v9 = v60;
  v60 |= 2u;
  HIDWORD(v10) = v59;
  if ( v59 )
    v59(&v58);
  if ( !(v9 & 1) )
    goto LABEL_61;
  LODWORD(v10) = &v55;
  j_Core::FileImpl::readExactly((Core::FileImpl *)&v51, v61, v10, 4uLL);
  HIDWORD(v11) = v52;
  if ( v52 )
    v52();
  LODWORD(v11) = &v54;
  j_Core::FileImpl::readExactly((Core::FileImpl *)&v49, v61, v11, 4uLL);
  HIDWORD(v12) = v50;
  if ( v50 )
    v50();
  LODWORD(v12) = &v53;
  j_Core::FileImpl::readExactly((Core::FileImpl *)&v47, v61, v12, 4uLL);
  if ( v48 )
    v48();
  v45 = 0;
  v46 = 0;
  j_Core::FileImpl::getRemainingSize((Core::FileImpl *)&v43, v61);
  if ( v44 )
    v44();
  if ( v53 < 1 )
  v13 = v53 >> 31;
  v14 = 0;
  v15 = 0;
  if ( v53 > v45 )
    v15 = 1;
  if ( v13 > v46 )
    v14 = 1;
  if ( v13 == v46 )
    v14 = v15;
  if ( v14 )
  {
LABEL_61:
    *(_DWORD *)v3 = 0;
  }
  else
    LODWORD(v16) = sub_21E757C(v53, 0);
    v42 = v16;
    HIDWORD(v16) = v53 >> 31;
    j_Core::FileImpl::readExactly((Core::FileImpl *)&v40, v61, v16, v53);
    if ( v41 )
      v41();
    j_Core::File::close((Core::File *)&v38, (int *)&v61);
    if ( v39 )
      v39();
    v34 = v8;
    v35 = *(_DWORD *)(v8 - 12);
    j_Core::FileSystem::deleteFile((int)&v36, (__int64 *)&v34);
    if ( v37 )
      v37();
    v30 = v63;
    v31 = *(_DWORD *)(v63 - 12);
    j_Core::FileSystem::deleteEmptyDirectory((int)&v32, (__int64 *)&v30);
    if ( v33 )
      v33();
    v26 = &off_26E91B8;
    v27 = 0;
    v28 = *(_DWORD *)(v42 - 12);
    v29 = &v42;
    j_NbtIo::read(v3, (IDataInput *)&v26);
    v17 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
    {
      v24 = (unsigned int *)(v42 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
      }
      else
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    }
    v8 = v64;
  j_Core::File::~File((Core::File *)&v61);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9((void *)(v8 - 12));
  v18 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v63 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  result = (RakNet *)(_stack_chk_guard - v70);
  if ( _stack_chk_guard != v70 )
    j___stack_chk_fail_0((int)result);
  return result;
}


BackgroundTask *__fastcall DBStorage::syncAndSuspendStorage(DBStorage *this)
{
  DBStorage *v1; // r4@1

  v1 = this;
  (*(void (**)(void))(**((_DWORD **)this + 11) + 48))();
  j_TaskGroup::sync_DEPRECATED_ASK_TOMMO(TaskGroup::DISK);
  (*(void (**)(void))(**((_DWORD **)v1 + 11) + 48))();
  return j_j_j__ZN9DBStorage18_queueSaveCallbackEv_0(v1);
}


signed int __fastcall DBStorage::getKeysForPrefix(int a1, int a2, void **a3)
{
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = &unk_28898CC;
  return j_DBStorage::_read(a2, *((_DWORD *)*a3 - 3), *a3, a1);
}


void __fastcall DBStorage::_write(int a1, int *a2, int *a3)
{
  DBStorage *v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  void (__fastcall *v6)(void **, int, int, int *); // r6@1
  int v7; // [sp+8h] [bp-10h]@1
  int v8; // [sp+Ch] [bp-Ch]@1
  int v9; // [sp+10h] [bp-8h]@1
  int v10; // [sp+14h] [bp-4h]@1
  void *ptr; // [sp+18h] [bp+0h]@1

  v3 = (DBStorage *)a1;
  v4 = *(_DWORD *)(a1 + 44);
  v5 = *(_DWORD *)(a1 + 36);
  v6 = *(void (__fastcall **)(void **, int, int, int *))(*(_DWORD *)v4 + 8);
  v9 = *a2;
  v10 = *(_DWORD *)(v9 - 12);
  v7 = *a3;
  v8 = *(_DWORD *)(v7 - 12);
  v6(&ptr, v4, v5 + 1084, &v9);
  j_DBStorage::_checkStatusValid(v3, (const leveldb::Status *)&ptr);
  if ( ptr )
    j_operator delete[](ptr);
}


int __fastcall DBStorage::isCorrupted(DBStorage *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 12);
  if ( result != 1 )
    result = 0;
  return result;
}


signed int __fastcall DBStorage::hasKey(int a1, int a2, int a3)
{
  int v3; // r3@1
  int v4; // r12@1
  int v5; // r1@1
  signed int result; // r0@1
  int v7; // r3@2
  void (__fastcall *v8)(void **); // lr@2
  int v9; // [sp+4h] [bp-14h]@2
  int v10; // [sp+8h] [bp-10h]@2
  void *ptr; // [sp+Ch] [bp-Ch]@2

  v3 = a1;
  v4 = a2;
  v5 = *(_DWORD *)(a1 + 44);
  result = 0;
  if ( v5 )
  {
    v7 = *(_DWORD *)(v3 + 36);
    v8 = *(void (__fastcall **)(void **))(*(_DWORD *)v5 + 20);
    v9 = a3;
    v10 = v4;
    v8(&ptr);
    if ( ptr )
    {
      j_operator delete[](ptr);
      result = 0;
    }
    else
      result = 1;
  }
  return result;
}


void __fastcall DBStorage::asyncWriteTag(int a1, int *a2, int a3)
{
  int v3; // r5@1
  int *v4; // r4@1
  int v5; // r6@1
  void *v6; // r0@1
  char *v7; // r0@2
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  void **v12; // [sp+4h] [bp-24h]@1
  int *v13; // [sp+8h] [bp-20h]@1
  char *v14; // [sp+Ch] [bp-1Ch]@1
  int v15; // [sp+10h] [bp-18h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v14 = (char *)&unk_28898CC;
  v12 = &off_26E91F0;
  v13 = (int *)&v14;
  (*(void (__fastcall **)(int *, int))(*(_DWORD *)a3 + 44))(&v15, a3);
  j_Tag::writeNamedTag((int)&v15, v5, (int)&v12);
  v6 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v15 - 4);
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
  j_DBStorage::_writeAsync(v3, v4, &v14);
  v7 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v14 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


RakNet *__fastcall DBStorage::pauseModificationsAndGetFiles(DBStorage *this, int a2)
{
  DBStorage *v2; // r6@1
  char *v3; // r5@1
  int v4; // r7@1
  const char **v5; // r8@1
  int v6; // r4@1
  int *v7; // r0@1
  void *v8; // r0@1
  int *v9; // r7@2
  unsigned int *v10; // r5@4
  int *v11; // r9@4
  unsigned int *v12; // r2@6
  signed int v13; // r1@8
  signed int v14; // r1@14
  unsigned __int64 v15; // r0@17
  void *v16; // r0@17
  int v17; // r0@18
  unsigned int v18; // r2@18
  int v19; // r3@18
  int v20; // r0@18
  int v21; // r1@18
  signed int v22; // r2@20
  int v23; // r5@21
  int *v24; // r0@21
  int v25; // r9@22
  int v26; // r1@24
  void *v27; // r0@24
  unsigned int *v28; // r2@25
  __int64 v29; // r4@31
  unsigned int v30; // r0@32
  unsigned int v31; // r2@32
  int v32; // r3@32
  int *v33; // r4@37
  int *v34; // r10@37
  unsigned int *v35; // r2@39
  signed int v36; // r1@41
  unsigned int *v37; // r2@43
  signed int v38; // r1@45
  int v39; // r0@51
  unsigned int v40; // r2@51
  int v41; // r3@51
  void *v42; // r0@51
  int v43; // r1@54
  void *v44; // r4@54
  void *v45; // r6@54
  unsigned int *v46; // r2@56
  signed int v47; // r1@58
  int *v48; // r0@64
  int *v49; // r5@69
  unsigned int *v50; // r2@71
  signed int v51; // r1@73
  int *v52; // r0@79
  RakNet *result; // r0@85
  int *v54; // [sp+8h] [bp-10B0h]@21
  int v55; // [sp+14h] [bp-10A4h]@1
  char v56; // [sp+18h] [bp-10A0h]@1
  int v57; // [sp+1Ch] [bp-109Ch]@43
  __int64 v58; // [sp+20h] [bp-1098h]@32
  void *v59; // [sp+28h] [bp-1090h]@31
  void *v60; // [sp+2Ch] [bp-108Ch]@31
  __int64 v61; // [sp+34h] [bp-1084h]@18
  int v62; // [sp+3Ch] [bp-107Ch]@6
  int v63; // [sp+40h] [bp-1078h]@1
  int *v64; // [sp+44h] [bp-1074h]@1
  int *v65; // [sp+48h] [bp-1070h]@2
  int *v66; // [sp+4Ch] [bp-106Ch]@33
  const char *v67; // [sp+50h] [bp-1068h]@17
  int v68; // [sp+54h] [bp-1064h]@17
  unsigned __int64 v69; // [sp+58h] [bp-1060h]@17
  char v70; // [sp+6Ch] [bp-104Ch]@51
  int v71; // [sp+70h] [bp-1048h]@51
  char v72; // [sp+474h] [bp-C44h]@32
  int v73; // [sp+478h] [bp-C40h]@32
  int v74; // [sp+878h] [bp-840h]@32
  char v75; // [sp+87Ch] [bp-83Ch]@18
  int v76; // [sp+880h] [bp-838h]@4
  unsigned int v77; // [sp+C80h] [bp-438h]@18
  char v78; // [sp+C84h] [bp-434h]@4
  int v79; // [sp+C88h] [bp-430h]@17

  v2 = this;
  v3 = &v56;
  v4 = a2;
  v5 = (const char **)(a2 + 60);
  *(_DWORD *)&v56 = _stack_chk_guard;
  v6 = *(_DWORD *)(a2 + 12);
  v7 = sub_21E8AF4(&v63, (int *)(a2 + 60));
  sub_21E7408((const void **)v7, "/db", 3u);
  j_BackupProxyEnv::pauseModificationsAndGetFiles((int)&v64, v6);
  v55 = v4;
  v8 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
  {
    v35 = (unsigned int *)(v63 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
    }
    else
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  v9 = v64;
  if ( v64 == v65 )
    *(_DWORD *)v2 = 0;
    *((_DWORD *)v2 + 1) = 0;
    *((_DWORD *)v2 + 2) = 0;
  else
    if ( v64 != v65 )
      v10 = (unsigned int *)&v78;
      v11 = &v76;
      {
        LODWORD(v15) = *v9;
        HIDWORD(v15) = *(_DWORD *)(*v9 - 12);
        v67 = "db";
        v68 = -1;
        v69 = v15;
        j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>(v10, (int)&v67, 2);
        sub_21E94B4((void **)&v62, (const char *)&v79);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v9, &v62);
        v16 = (void *)(v62 - 12);
        if ( (int *)(v62 - 12) != &dword_28898C0 )
        {
          v12 = (unsigned int *)(v62 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v13 = __ldrex(v12);
            while ( __strex(v13 - 1, v12) );
          }
          else
            v13 = (*v12)--;
          if ( v13 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
        }
        v17 = *v9;
        v18 = *(_DWORD *)(*v9 - 12);
        v19 = *((_DWORD *)*v5 - 3);
        v67 = *v5;
        v68 = v19;
        v69 = __PAIR__(v18, v17);
        j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v75, (int)&v67, 2);
        v61 = __PAIR__(v77, (unsigned int)v11);
        v20 = j_Core::FileSystem::directoryExists(&v61);
        v21 = (int)(v9 + 1);
        if ( v20 == 1 )
          if ( (int *)v21 != v65 )
            v22 = (signed int)v65 - v21;
            v21 = (int)v65;
            if ( v22 >= 1 )
            {
              v23 = (v22 >> 2) + 1;
              v24 = v9;
              v54 = v11;
              do
              {
                v25 = (int)(v24 + 1);
                xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                  v24,
                  v24 + 1);
                --v23;
                v24 = (int *)v25;
              }
              while ( v23 > 1 );
              v21 = (int)v65;
              v10 = (unsigned int *)&v78;
              v11 = v54;
            }
          v65 = (int *)(v21 - 4);
          v26 = *(_DWORD *)(v21 - 4);
          v27 = (void *)(v26 - 12);
          if ( (int *)(v26 - 12) != &dword_28898C0 )
            v28 = (unsigned int *)(v26 - 4);
            if ( &pthread_create )
              __dmb();
                v14 = __ldrex(v28);
              while ( __strex(v14 - 1, v28) );
            else
              v14 = (*v28)--;
            if ( v14 <= 0 )
              j_j_j_j__ZdlPv_9(v27);
        else
          ++v9;
      }
      while ( v9 != v65 );
    j_ExternalFileLevelStorage::getImportantFiles((ExternalFileLevelStorage *)&v59);
    v29 = *(_QWORD *)&v59;
    if ( v59 != v60 )
        v30 = *(_DWORD *)v29;
        v31 = *(_DWORD *)(*(_DWORD *)v29 - 12);
        v32 = *((_DWORD *)*v5 - 3);
        v68 = v32;
        v69 = __PAIR__(v31, v30);
        j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v72, (int)&v67, 2);
        LODWORD(v58) = &v73;
        HIDWORD(v58) = v74;
        if ( j_Core::FileSystem::fileOrDirectoryExists(&v58) == 1 )
          if ( v65 == v66 )
            j_std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
              (unsigned __int64 *)&v64,
              (int *)v29);
            sub_21E8AF4(v65, (int *)v29);
            ++v65;
        LODWORD(v29) = v29 + 4;
      while ( HIDWORD(v29) != (_DWORD)v29 );
    v34 = v65;
    v33 = v64;
        v39 = *v33;
        v40 = *(_DWORD *)(*v33 - 12);
        v41 = *(_DWORD *)(*(_DWORD *)(v55 + 56) - 12);
        v67 = *(const char **)(v55 + 56);
        v68 = v41;
        v69 = __PAIR__(v40, v39);
        j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v70, (int)&v67, 2);
        sub_21E94B4((void **)&v57, (const char *)&v71);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v33, &v57);
        v42 = (void *)(v57 - 12);
        if ( (int *)(v57 - 12) != &dword_28898C0 )
          v37 = (unsigned int *)(v57 - 4);
              v38 = __ldrex(v37);
            while ( __strex(v38 - 1, v37) );
            v38 = (*v37)--;
          if ( v38 <= 0 )
            j_j_j_j__ZdlPv_9(v42);
        ++v33;
      while ( v33 != v34 );
      v34 = v65;
      v33 = v64;
    v64 = 0;
    v65 = 0;
    v43 = (int)v66;
    *(_DWORD *)v2 = v33;
    *((_DWORD *)v2 + 1) = v34;
    *((_DWORD *)v2 + 2) = v43;
    v66 = 0;
    v45 = v60;
    v44 = v59;
        v48 = (int *)(*(_DWORD *)v44 - 12);
        if ( v48 != &dword_28898C0 )
          v46 = (unsigned int *)(*(_DWORD *)v44 - 4);
              v47 = __ldrex(v46);
            while ( __strex(v47 - 1, v46) );
            v47 = (*v46)--;
          if ( v47 <= 0 )
            j_j_j_j__ZdlPv_9(v48);
        v44 = (char *)v44 + 4;
      while ( v44 != v45 );
      v44 = v59;
    if ( v44 )
      j_operator delete(v44);
    v9 = v65;
    v49 = v64;
        v52 = (int *)(*v49 - 12);
        if ( v52 != &dword_28898C0 )
          v50 = (unsigned int *)(*v49 - 4);
              v51 = __ldrex(v50);
            while ( __strex(v51 - 1, v50) );
            v51 = (*v50)--;
          if ( v51 <= 0 )
            j_j_j_j__ZdlPv_9(v52);
        ++v49;
      while ( v49 != v9 );
      v9 = v64;
    v3 = &v56;
  if ( v9 )
    j_operator delete(v9);
  result = (RakNet *)((char *)_stack_chk_guard - *(_DWORD *)v3);
  if ( _stack_chk_guard != *(RakNet **)v3 )
    j___stack_chk_fail_0((int)result);
  return result;
}


void *__fastcall DBStorage::createChunkStorage(_DWORD *a1, int a2, int *a3, int a4)
{
  _DWORD *v4; // r8@1
  signed int v5; // r6@1
  int *v6; // r4@1
  int v7; // r7@1
  void *v8; // r5@1
  int v9; // r0@1
  void *result; // r0@1
  void *v11; // r4@4
  void *v12; // [sp+0h] [bp-20h]@1
  void *v13; // [sp+4h] [bp-1Ch]@4

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = j_operator new(0x98u);
  v9 = *v6;
  *v6 = 0;
  v12 = (void *)v9;
  j_DBChunkStorage::DBChunkStorage((int)v8, (int *)&v12, v7);
  result = v12;
  if ( v12 )
    result = (void *)(*(int (**)(void))(*(_DWORD *)v12 + 4))();
  if ( v5 > 3 )
  {
    *v4 = v8;
  }
  else
    v11 = j_operator new(0x84u);
    v13 = v8;
    j_LegacyChunkStorage::LegacyChunkStorage((int)v11, (int *)&v13, v7, v5);
    result = v13;
    if ( v13 )
      result = (void *)(*(int (**)(void))(*(_DWORD *)v13 + 4))();
    *v4 = v11;
  return result;
}


void __fastcall DBStorage::_writeAsync(int a1, int *a2, _DWORD *a3)
{
  DBStorage::_writeAsync(a1, a2, a3);
}


void __fastcall DBStorage::_write(DBStorage *this, leveldb::WriteBatch *a2)
{
  DBStorage *v2; // r4@1
  int v3; // r2@1
  void *ptr; // [sp+4h] [bp-14h]@1

  v2 = this;
  v3 = *((_DWORD *)this + 9) + 1084;
  (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 11) + 16))(&ptr);
  j_DBStorage::_checkStatusValid(v2, (const leveldb::Status *)&ptr);
  if ( ptr )
    j_operator delete[](ptr);
}


signed int __fastcall DBStorage::_read(int a1, size_t a2, void *a3, int a4)
{
  size_t v4; // r6@1
  int v5; // r1@1
  int v6; // r0@1
  int v7; // r5@1
  void *v8; // r7@1
  int v9; // r1@2
  int v10; // r4@2
  char *v11; // r11@5
  unsigned int v12; // r9@5
  int v13; // r10@5
  int v14; // r7@5
  __int64 v15; // r0@5
  int *v16; // r0@6
  void *v17; // r0@8
  unsigned int *v18; // r2@10
  signed int v19; // r1@12
  unsigned __int64 v20; // r0@19
  signed int v21; // r5@19
  char v23; // [sp+8h] [bp-60h]@5
  unsigned int v24; // [sp+Ch] [bp-5Ch]@5
  char *v25; // [sp+10h] [bp-58h]@5
  int v26; // [sp+18h] [bp-50h]@5
  int v27; // [sp+1Ch] [bp-4Ch]@5
  int v28; // [sp+20h] [bp-48h]@5
  void *s1; // [sp+24h] [bp-44h]@3
  size_t v30; // [sp+28h] [bp-40h]@3
  void *s2; // [sp+2Ch] [bp-3Ch]@2
  size_t n; // [sp+30h] [bp-38h]@2
  unsigned int v33; // [sp+38h] [bp-30h]@5
  int v34; // [sp+3Ch] [bp-2Ch]@5

  v4 = a2;
  v5 = a1;
  v6 = *(_DWORD *)(a1 + 44);
  v7 = a4;
  v8 = a3;
  if ( v6 )
  {
    v9 = *(_DWORD *)(v5 + 36) + 1072;
    v10 = (*(int (**)(void))(*(_DWORD *)v6 + 24))();
    s2 = v8;
    n = v4;
    (*(void (**)(void))(*(_DWORD *)v10 + 20))();
    while ( (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10) == 1 )
    {
      (*(void (__fastcall **)(void **, int))(*(_DWORD *)v10 + 32))(&s1, v10);
      if ( v30 < n || j_memcmp_0(s1, s2, n) )
        break;
      (*(void (__fastcall **)(int *, int))(*(_DWORD *)v10 + 32))(&v27, v10);
      sub_21E91E0((void **)&v26, v27 + v4, v28 - v4);
      (*(void (__fastcall **)(char **, int))(*(_DWORD *)v10 + 36))(&v25, v10);
      v11 = v25;
      (*(void (__fastcall **)(char *, int))(*(_DWORD *)v10 + 36))(&v23, v10);
      v12 = v24;
      v13 = *(_DWORD *)(*(_DWORD *)(v7 + 12) - 12);
      v34 = v13;
      v14 = v13 + v24;
      v33 = v13 + v24;
      v15 = *(_QWORD *)(v7 + 4);
      if ( (_DWORD)v15 == HIDWORD(v15) )
      {
        j_std::vector<KeySpan,std::allocator<KeySpan>>::_M_emplace_back_aux<std::string const&,unsigned int,unsigned int>(
          (unsigned __int64 *)v7,
          &v26,
          &v34,
          (int *)&v33);
      }
      else
        v16 = sub_21E8AF4((int *)v15, &v26);
        v16[1] = v13;
        v16[2] = v14;
        *(_DWORD *)(v7 + 4) += 12;
      sub_21E7408((const void **)(v7 + 12), v11, v12);
      v17 = (void *)(v26 - 12);
      if ( (int *)(v26 - 12) != &dword_28898C0 )
        v18 = (unsigned int *)(v26 - 4);
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
          j_j_j_j__ZdlPv_9(v17);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 24))(v10);
    }
    v20 = *(_QWORD *)v7;
    v21 = 0;
    if ( (_DWORD)v20 != HIDWORD(v20) )
      v21 = 1;
    if ( v10 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 4))(v10);
  }
  else
  return v21;
}


RakNet *__fastcall DBStorage::readTag(NbtIo *a1, int a2, int *a3)
{
  NbtIo *v3; // r4@1
  int v4; // r6@1
  int *v5; // r7@1
  const void **v6; // r5@1
  int v7; // r1@1
  int v8; // r0@2
  int v9; // r7@2
  int v10; // r2@2
  void (__fastcall *v11)(void **); // r6@2
  RakNet *result; // r0@7
  void *ptr; // [sp+4h] [bp-134h]@2
  int *v14; // [sp+8h] [bp-130h]@5
  int v15; // [sp+Ch] [bp-12Ch]@2
  int v16; // [sp+10h] [bp-128h]@2
  RakNet *v17; // [sp+120h] [bp-18h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v17 = _stack_chk_guard;
  v6 = (const void **)j_ThreadLocal<std::string>::getLocal(a2 + 64);
  sub_21E7EE0(v6, 0, *((_BYTE **)*v6 - 3), 0);
  v7 = *(_DWORD *)(v4 + 44);
  if ( v7 )
  {
    v8 = *v5;
    v9 = *(_DWORD *)(v4 + 36);
    v10 = *(_DWORD *)(v8 - 12);
    v11 = *(void (__fastcall **)(void **))(*(_DWORD *)v7 + 20);
    v15 = v8;
    v16 = v10;
    v11(&ptr);
    if ( ptr )
    {
      j_operator delete[](ptr);
    }
    else if ( *((_DWORD *)*v6 - 3) )
      j_RakNet::BitStream::BitStream((RakNet::BitStream *)&v15, (unsigned __int8 *)*v6, *((_DWORD *)*v6 - 3), 0);
      ptr = &off_271973C;
      v14 = &v15;
      j_NbtIo::read(v3, (IDataInput *)&ptr);
      j_RakNet::BitStream::~BitStream((RakNet::BitStream *)&v15);
      goto LABEL_7;
  }
  *(_DWORD *)v3 = 0;
LABEL_7:
  result = (RakNet *)(_stack_chk_guard - v17);
  if ( _stack_chk_guard != v17 )
    j___stack_chk_fail_0((int)result);
  return result;
}


CompoundTag *__fastcall DBStorage::save(DBStorage *this, Entity *a2)
{
  Entity *v2; // r5@1
  DBStorage *v3; // r4@1
  CompoundTag *result; // r0@1
  unsigned int v5; // r0@2
  void *v6; // r0@2
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  int v9; // [sp+4h] [bp-34h]@2
  char v10; // [sp+8h] [bp-30h]@2

  v2 = a2;
  v3 = this;
  result = (CompoundTag *)j_Entity::isRemoved(a2);
  if ( !result )
  {
    j_CompoundTag::CompoundTag((int)&v10);
    (*(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v2 + 472))(v2, &v10);
    v5 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 488))(v2);
    j_EntityTypeToString((void **)&v9, v5, 0);
    j_DBStorage::asyncWriteTag((int)v3, &v9, (int)&v10);
    v6 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
    {
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
        j_j_j_j__ZdlPv_9(v6);
    }
    result = j_CompoundTag::~CompoundTag((CompoundTag *)&v10);
  }
  return result;
}


signed int __fastcall DBStorage::tryRepair(int a1, int *a2)
{
  void *v2; // r4@1
  signed int result; // r0@3
  void *ptr; // [sp+4h] [bp-Ch]@1

  j_leveldb::RepairDB((leveldb::Status **)&ptr, a2, *(_DWORD *)(a1 + 36));
  v2 = ptr;
  if ( ptr )
    j_operator delete[](ptr);
  result = 0;
  if ( !v2 )
    result = 1;
  return result;
}


signed int __fastcall DBStorage::hasAnyKeyWithPrefix(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r1@1
  int v4; // r4@1
  size_t v5; // r2@2
  signed int v6; // r6@2
  void *s1; // [sp+0h] [bp-18h]@2
  unsigned int v9; // [sp+4h] [bp-14h]@2

  v2 = a2;
  v3 = *(_DWORD *)(a1 + 36);
  v4 = (*(int (**)(void))(**(_DWORD **)(a1 + 44) + 24))();
  (*(void (**)(void))(*(_DWORD *)v4 + 20))();
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4) == 1 )
  {
    (*(void (__fastcall **)(void **, int))(*(_DWORD *)v4 + 32))(&s1, v4);
    v5 = *(_DWORD *)(v2 + 4);
    v6 = 0;
    if ( v9 >= v5 && !j_memcmp_0(s1, *(const void **)v2, v5) )
      v6 = 1;
  }
  else
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  return v6;
}


char *__fastcall DBStorage::getFullPath(DBStorage *this)
{
  return (char *)this + 60;
}


void *__fastcall DBStorage::_playerKey(DBStorage *this, const Player *a2, int a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  bool v5; // zf@1
  const void **v6; // r2@1

  v3 = a3;
  v4 = (int *)this;
  v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 1412))(a3) == 0;
  v6 = (const void **)(v3 + 4544);
  if ( !v5 )
    v6 = &LevelStorage::LOCAL_PLAYER_TAG;
  return j_DBStorage::_playerKey(v4, (int)&LevelStorage::LOCAL_PLAYER_TAG, v6);
}


int __fastcall DBStorage::getStatistics(int a1)
{
  int v1; // r0@1
  int (__cdecl *v2)(int, const char **); // r3@1
  const char *v4; // [sp+0h] [bp-10h]@1
  int v5; // [sp+4h] [bp-Ch]@1

  v1 = *(_DWORD *)(a1 + 44);
  v2 = *(int (__cdecl **)(int, const char **))(*(_DWORD *)v1 + 36);
  v4 = "leveldb.jsonstats";
  v5 = 17;
  return v2(v1, &v4);
}


void __fastcall DBStorage::_savePlayerDataSync(int a1, const void **a2, int *a3)
{
  DBStorage::_savePlayerDataSync(a1, a2, a3);
}


void __fastcall DBStorage::~DBStorage(DBStorage *this)
{
  DBStorage::~DBStorage(this);
}


int __fastcall DBStorage::_read(int a1, int a2, int a3, _DWORD *a4)
{
  _DWORD *v4; // r5@1
  int v5; // r3@1
  int v6; // r1@1
  int v7; // r0@2
  void (__fastcall *v8)(void **); // r4@2
  int v10; // [sp+4h] [bp-1Ch]@2
  int v11; // [sp+8h] [bp-18h]@2
  void *ptr; // [sp+Ch] [bp-14h]@2

  v4 = a4;
  v5 = a2;
  v6 = *(_DWORD *)(a1 + 44);
  if ( !v6 )
    return 0;
  v7 = *(_DWORD *)(a1 + 36);
  v8 = *(void (__fastcall **)(void **))(*(_DWORD *)v6 + 20);
  v11 = v5;
  v10 = a3;
  v8(&ptr);
  if ( ptr )
  {
    j_operator delete[](ptr);
  }
  return *(_DWORD *)(*v4 - 12) != 0;
}


void __fastcall DBStorage::saveLevelData(DBStorage *this, const LevelData *a2)
{
  DBStorage *v2; // r4@1
  void *v3; // r0@2
  int v4; // r0@6
  bool v5; // cf@7
  __int64 v6; // r0@7
  signed int v7; // r3@7
  int v8; // r2@18
  void *ptr; // [sp+4h] [bp-24h]@18
  char v10; // [sp+8h] [bp-20h]@16
  int v11; // [sp+10h] [bp-18h]@7

  v2 = this;
  j_ExternalFileLevelStorage::saveLevelData((int *)this + 15, a2);
  if ( *(_DWORD *)j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v3 = j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v3 = &ServiceLocator<AppPlatform>::mDefaultService;
  if ( (*(int (**)(void))(**(_DWORD **)v3 + 632))() == 1 )
  {
    if ( &pthread_create )
    {
      v4 = j_pthread_mutex_lock_0((pthread_mutex_t *)((char *)v2 + 108));
      if ( v4 )
        sub_21E5E14(v4);
    }
    sub_21E0378(&v11);
    v6 = *(_QWORD *)&v11 - *((_QWORD *)v2 + 14);
    v5 = (unsigned int)v6 >= 0xD964B800;
    LODWORD(v6) = 0;
    v7 = 0;
    if ( !v5 )
      LODWORD(v6) = 1;
    if ( SHIDWORD(v6) < 69 )
      v7 = 1;
    if ( HIDWORD(v6) == 69 )
      v7 = v6;
    if ( v7 )
      if ( &pthread_create )
        j_pthread_mutex_unlock_0((pthread_mutex_t *)((char *)v2 + 108));
    else
      sub_21E0378(&v10);
      *((_QWORD *)v2 + 14) = *(_QWORD *)&v10;
      v8 = *((_DWORD *)v2 + 9) + 1084;
      (*(void (__fastcall **)(void **))(**((_DWORD **)v2 + 11) + 16))(&ptr);
      if ( ptr )
        j_operator delete[](ptr);
  }
}


void __fastcall DBStorage::_write(DBStorage *this, leveldb::WriteBatch *a2)
{
  DBStorage::_write(this, a2);
}


int *__fastcall DBStorage::getState(DBStorage *this, int a2)
{
  *(_DWORD *)this = *(_DWORD *)(a2 + 48);
  return sub_21E8AF4((int *)this + 1, (int *)(a2 + 52));
}


void __fastcall DBStorage::_writeAsync(int a1, int *a2, _DWORD *a3)
{
  int *v3; // r6@1
  int v4; // r5@1
  int v5; // r4@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  void *v8; // r6@7
  int v9; // r2@7
  int v10; // r4@11
  unsigned int *v11; // r1@12
  unsigned int v12; // r0@14
  unsigned int *v13; // r5@18
  unsigned int v14; // r0@20
  void *v15; // r0@25
  int v16; // r4@26
  unsigned int *v17; // r1@27
  unsigned int v18; // r0@29
  unsigned int *v19; // r5@33
  unsigned int v20; // r0@35
  unsigned int *v21; // r2@41
  signed int v22; // r1@43
  char v23; // [sp+4h] [bp-4Ch]@7
  void (*v24)(void); // [sp+Ch] [bp-44h]@7
  int v25; // [sp+14h] [bp-3Ch]@1
  int v26; // [sp+18h] [bp-38h]@1
  int v27; // [sp+1Ch] [bp-34h]@1
  int v28; // [sp+20h] [bp-30h]@1
  void *v29; // [sp+24h] [bp-2Ch]@7
  void (*v30)(void); // [sp+2Ch] [bp-24h]@7
  signed int (__fastcall *v31)(int *); // [sp+30h] [bp-20h]@7
  int v32; // [sp+34h] [bp-1Ch]@1
  int v33; // [sp+38h] [bp-18h]@1
  char v34; // [sp+3Ch] [bp-14h]@1

  v3 = a2;
  v4 = a1;
  j_std::__shared_ptr<std::string,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::string>,std::string>(
    (int)&v32,
    (int)&v34,
    a3);
  v25 = v4;
  v5 = TaskGroup::DISK;
  sub_21E8AF4(&v26, v3);
  v27 = v32;
  v28 = v33;
  if ( v33 )
  {
    v6 = (unsigned int *)(v33 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
    }
    else
      ++*v6;
  }
  v30 = 0;
  v8 = j_operator new(0x10u);
  *(_DWORD *)v8 = v25;
  sub_21E8AF4((int *)v8 + 1, &v26);
  *((_DWORD *)v8 + 2) = v27;
  v9 = v28;
  v28 = 0;
  *((_DWORD *)v8 + 3) = v9;
  v27 = 0;
  v29 = v8;
  v30 = (void (*)(void))sub_1AF9444;
  v31 = sub_1AF93D8;
  v24 = 0;
  j_TaskGroup::queue(v5, (int)&v29, (int)&v23, 1u, 0xFFFFFFFF);
  if ( v24 )
    v24();
  if ( v30 )
    v30();
  v10 = v28;
  if ( v28 )
    v11 = (unsigned int *)(v28 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
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
  v15 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v26 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = v33;
    v17 = (unsigned int *)(v33 + 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      v19 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
}


void __fastcall DBStorage::loadPlayerData(NbtIo *a1, int a2, const void **a3, const void **a4, const void **a5)
{
  NbtIo *v5; // r8@1
  const void **v6; // r7@1
  int *v7; // r6@1
  int v8; // r5@1
  int v9; // r1@1
  void *v10; // r0@1
  double v11; // r0@3
  int v12; // r0@5
  char *v13; // r0@6
  unsigned int *v14; // r2@8
  unsigned int *v15; // r2@16
  unsigned int *v16; // r2@24
  signed int v17; // r1@26
  char *v18; // [sp+4h] [bp-34h]@6
  int v19; // [sp+8h] [bp-30h]@6
  int v20; // [sp+Ch] [bp-2Ch]@5
  int v21; // [sp+10h] [bp-28h]@3
  int v22; // [sp+14h] [bp-24h]@3
  int v23; // [sp+18h] [bp-20h]@1

  v5 = a1;
  v6 = a4;
  v7 = (int *)a3;
  v8 = a2;
  j_DBStorage::_playerKey(&v23, a2, a3);
  j_DBStorage::readTag(v5, v8, &v23);
  v9 = v23;
  v10 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v14);
      while ( __strex(v9 - 1, v14) );
    }
    else
      v9 = (*v14)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
  if ( !*(_DWORD *)v5 )
    j_DBStorage::_playerKey(&v21, v9, v6);
    j_DBStorage::readTag((NbtIo *)&v22, v8, &v21);
    *(_DWORD *)v5 = v22;
    HIDWORD(v11) = v21;
    v22 = 0;
    LODWORD(v11) = v21 - 12;
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v21 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          HIDWORD(v11) = __ldrex(v15);
        while ( __strex(HIDWORD(v11) - 1, v15) );
      }
      else
        HIDWORD(v11) = (*v15)--;
      if ( SHIDWORD(v11) <= 0 )
        j_j_j_j__ZdlPv_9((void *)LODWORD(v11));
    if ( !*(_DWORD *)v5 )
      LODWORD(v11) = &v20;
      j_DBStorage::_legacyLoadPlayer(v11, v7);
      v12 = v20;
      *(_DWORD *)v5 = v20;
      v20 = 0;
      if ( !v12 )
        v18 = (char *)&unk_28898CC;
        sub_21E6FCC((const void **)&v18, *((_DWORD *)*a5 - 3) + 22);
        sub_21E7408((const void **)&v18, "legacy_console_player_", 0x16u);
        sub_21E72F0((const void **)&v18, a5);
        j_DBStorage::readTag((NbtIo *)&v19, v8, (int *)&v18);
        *(_DWORD *)v5 = v19;
        v19 = 0;
        v13 = v18 - 12;
        if ( (int *)(v18 - 12) != &dword_28898C0 )
        {
          v16 = (unsigned int *)(v18 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
          }
          else
            v17 = (*v16)--;
          if ( v17 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        }
}


void *__fastcall DBStorage::_playerKey(int *a1, int a2, const void **a3)
{
  const void **v3; // r5@1
  int *v4; // r4@1
  size_t v5; // r6@1
  void *result; // r0@4

  v3 = a3;
  v4 = a1;
  v5 = *((_DWORD *)*a3 - 3);
  if ( !v5
    || v5 == *((_DWORD *)LevelStorage::LOCAL_PLAYER_TAG - 3) && !j_memcmp_0(*a3, LevelStorage::LOCAL_PLAYER_TAG, v5) )
  {
    result = sub_21E8AF4(v4, (int *)&LevelStorage::LOCAL_PLAYER_TAG);
  }
  else
    *v4 = (int)&unk_28898CC;
    sub_21E6FCC((const void **)v4, v5 + 7);
    sub_21E7408((const void **)v4, "player_", 7u);
    result = sub_21E72F0((const void **)v4, v3);
  return result;
}


CompoundTag *__fastcall DBStorage::save(DBStorage *this, Player *a2)
{
  Player *v2; // r5@1
  DBStorage *v3; // r4@1
  CompoundTag *result; // r0@1
  int v5; // r0@2
  const void **v6; // r2@2
  void *v7; // r0@4
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  int v10; // [sp+4h] [bp-34h]@4
  char v11; // [sp+8h] [bp-30h]@2

  v2 = a2;
  v3 = this;
  result = (CompoundTag *)j_Entity::isRemoved(a2);
  if ( !result )
  {
    j_CompoundTag::CompoundTag((int)&v11);
    (*(void (__fastcall **)(Player *, char *))(*(_DWORD *)v2 + 472))(v2, &v11);
    v5 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v2 + 1412))(v2);
    v6 = (const void **)((char *)v2 + 4544);
    if ( v5 )
      v6 = &LevelStorage::LOCAL_PLAYER_TAG;
    j_DBStorage::_playerKey(&v10, (int)&LevelStorage::LOCAL_PLAYER_TAG, v6);
    j_DBStorage::asyncWriteTag((int)v3, &v10, (int)&v11);
    v7 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v10 - 4);
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
    result = j_CompoundTag::~CompoundTag((CompoundTag *)&v11);
  }
  return result;
}


signed int __fastcall DBStorage::_checkStatusValid(DBStorage *this, const leveldb::Status *a2)
{
  unsigned int **v2; // r5@1
  DBStorage *v3; // r4@1
  void *v4; // r0@2
  void *v5; // r0@3
  signed int result; // r0@4
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  unsigned int *v9; // r2@10
  signed int v10; // r1@12
  int v11; // [sp+4h] [bp-24h]@3
  int v12; // [sp+8h] [bp-20h]@2

  v2 = (unsigned int **)a2;
  v3 = this;
  if ( *(_DWORD *)a2 )
  {
    j_leveldb::Status::ToString((leveldb::Status *)&v12, (unsigned int **)a2);
    v4 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
    {
      v7 = (unsigned int *)(v12 - 4);
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
        j_j_j_j__ZdlPv_9(v4);
    }
    *((_DWORD *)v3 + 12) = 1;
    j_leveldb::Status::ToString((leveldb::Status *)&v11, v2);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v3 + 13,
      &v11);
    v5 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v11 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    result = 0;
  }
  else
    result = 1;
  return result;
}


int *__fastcall DBStorage::loadData(int *a1, int a2, int *a3)
{
  int v3; // r6@1
  int *v4; // r4@1
  int *v5; // r7@1
  const void **v6; // r5@1
  int v7; // r1@1
  int v8; // r0@2
  int v9; // r7@2
  int v10; // r2@2
  void (__fastcall *v11)(void **); // r6@2
  int v13; // [sp+8h] [bp-20h]@2
  int v14; // [sp+Ch] [bp-1Ch]@2
  void *ptr; // [sp+10h] [bp-18h]@2

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = (const void **)j_ThreadLocal<std::string>::getLocal(a2 + 64);
  sub_21E7EE0(v6, 0, *((_BYTE **)*v6 - 3), 0);
  v7 = *(_DWORD *)(v3 + 44);
  if ( v7 )
  {
    v8 = *v5;
    v9 = *(_DWORD *)(v3 + 36);
    v10 = *(_DWORD *)(v8 - 12);
    v11 = *(void (__fastcall **)(void **))(*(_DWORD *)v7 + 20);
    v13 = v8;
    v14 = v10;
    v11(&ptr);
    if ( ptr )
      j_operator delete[](ptr);
  }
  return sub_21E8AF4(v4, (int *)v6);
}


int __fastcall DBStorage::onLowMemory(DBStorage *this)
{
  DBStorage *v1; // r4@1
  int result; // r0@1

  v1 = this;
  result = *((_DWORD *)this + 11);
  if ( result )
  {
    (*(void (**)(void))(**((_DWORD **)v1 + 5) + 32))();
    result = (*(int (**)(void))(**((_DWORD **)v1 + 10) + 16))();
  }
  return result;
}


void __fastcall DBStorage::loadPlayerData(NbtIo *a1, int a2, const void **a3, const void **a4, const void **a5)
{
  DBStorage::loadPlayerData(a1, a2, a3, a4, a5);
}


void __fastcall DBStorage::savePlayerData(int a1, const void **a2, _DWORD *a3)
{
  DBStorage::savePlayerData(a1, a2, a3);
}


void __fastcall DBStorage::loadAllPlayerIDs(DBStorage *this, int a2)
{
  DBStorage *v2; // r4@1
  int v3; // r5@1
  int v4; // r1@1
  int v5; // r6@2
  void (__fastcall *v6)(void **); // r7@2
  __int64 v7; // r2@2
  int v8; // r1@5
  int v9; // r6@6
  int v10; // r5@6
  __int64 v11; // kr00_8@8
  int *v12; // r1@8
  char *v13; // r0@12
  void *v14; // r4@13
  void *v15; // r6@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  int *v18; // r0@23
  unsigned int *v19; // r2@29
  signed int v20; // r1@31
  _BYTE *v21; // [sp+4h] [bp-44h]@1
  _BYTE *v22; // [sp+8h] [bp-40h]@1
  int v23; // [sp+Ch] [bp-3Ch]@1
  char *v24; // [sp+10h] [bp-38h]@1
  __int64 v25; // [sp+14h] [bp-34h]@2
  void *ptr; // [sp+1Ch] [bp-2Ch]@2

  v2 = this;
  v3 = a2;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = (char *)&unk_28898CC;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v4 = *(_DWORD *)(a2 + 44);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v3 + 36);
    v6 = *(void (__fastcall **)(void **))(*(_DWORD *)v4 + 20);
    LODWORD(v7) = LevelStorage::LOCAL_PLAYER_TAG;
    HIDWORD(v7) = *((_DWORD *)LevelStorage::LOCAL_PLAYER_TAG - 3);
    v25 = v7;
    v6(&ptr);
    if ( ptr )
      j_operator delete[](ptr);
    else
      j_std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
        (unsigned __int64 *)v2,
        (int *)&LevelStorage::LOCAL_PLAYER_TAG);
  }
  j_DBStorage::_read(v3, 7u, "player_", (int)&v21);
  v8 = (int)v21;
  if ( v22 != v21 )
    v9 = 0;
    v10 = -1431655765 * ((v22 - v21) >> 2);
    while ( 1 )
    {
      v11 = *(_QWORD *)((char *)v2 + 4);
      v12 = (int *)(v8 + v9);
      if ( (_DWORD)v11 == HIDWORD(v11) )
        j_std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const>(
          (unsigned __int64 *)v2,
          v12);
      else
        *((_DWORD *)v2 + 1) = sub_21E8AF4((int *)v11, v12) + 1;
      if ( !--v10 )
        break;
      v9 += 12;
      v8 = (int)v21;
    }
  v13 = v24 - 12;
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v15 = v22;
  v14 = v21;
  if ( v21 != v22 )
    do
      v18 = (int *)(*(_DWORD *)v14 - 12);
      if ( v18 != &dword_28898C0 )
      {
        v16 = (unsigned int *)(*(_DWORD *)v14 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
        }
        else
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      }
      v14 = (char *)v14 + 12;
    while ( v14 != v15 );
    v14 = v21;
  if ( v14 )
    j_operator delete(v14);
}


int __fastcall DBStorage::setCriticalSyncSaveCallback(int a1, int a2)
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
  v9 = v4 + 120;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 120);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 128);
  v10 = v13;
  *(_DWORD *)(v4 + 128) = v8;
  v14 = *(_DWORD *)(v4 + 132);
  *(_DWORD *)(v4 + 132) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


int __fastcall DBStorage::loadLocalPlayerData(DBStorage *this, int a2)
{
  DBStorage *v2; // r4@1
  double v3; // r0@1
  int v5; // [sp+4h] [bp-14h]@2

  v2 = this;
  j_DBStorage::readTag(this, a2, (int *)&LevelStorage::LOCAL_PLAYER_TAG);
  LODWORD(v3) = *(_DWORD *)v2;
  if ( !*(_DWORD *)v2 )
  {
    LODWORD(v3) = &v5;
    j_DBStorage::_legacyLoadPlayer(v3, (int *)&Util::EMPTY_STRING);
    *(_DWORD *)v2 = v5;
    LODWORD(v3) = 0;
  }
  return *(unsigned __int64 *)&v3;
}


int __fastcall DBStorage::DBStorage(int a1, int *a2, int *a3, int *a4, int a5)
{
  int v5; // r11@1
  int *v6; // r6@1
  int *v7; // r10@1
  int *v8; // r8@1
  int v9; // r4@1
  leveldb *v10; // r7@1
  void *v11; // r0@1
  __int64 v12; // r1@1
  int *v13; // r9@3
  int v14; // r1@3
  void *v15; // r0@3
  void (__fastcall *v16)(int *, int, char *); // r5@4
  leveldb::Env *v17; // r0@4
  __int64 v18; // r0@5
  int v19; // r6@5
  int v20; // r0@5
  int v21; // r6@6
  __int64 v22; // r0@7
  int v23; // r5@7
  int v24; // r0@7
  __int64 v25; // r0@8
  int v26; // r6@8
  int v27; // r1@14
  int v28; // r1@16
  char *v29; // r0@23
  AppPlatform **v30; // r0@25
  void *v31; // r0@26
  char *v32; // r0@29
  unsigned int *v33; // r2@30
  signed int v34; // r1@32
  __int64 v35; // r0@35
  __int64 v36; // kr00_8@35
  _DWORD *v37; // r1@35
  int v38; // r0@35
  _DWORD *v39; // r0@37
  signed int v40; // r7@37
  int v41; // r1@37
  unsigned int v42; // r1@39
  signed int v43; // r0@41
  leveldb *v44; // r0@49
  void *v45; // r1@53
  int v46; // r0@53
  int v47; // r1@55
  signed int v48; // r2@55
  signed int v49; // r0@55
  int v50; // r1@57
  signed int v51; // r0@61
  _DWORD *v52; // r0@63
  int v53; // r1@63
  _DWORD *v54; // r0@65
  int v55; // r1@65
  void *v56; // r0@70
  char *v57; // r1@70
  void *v58; // r1@74
  unsigned int *v59; // r2@75
  signed int v60; // r1@77
  int v61; // r0@84
  void *v62; // r0@86
  unsigned int v63; // r0@88
  signed int v64; // r0@89
  void *v65; // r0@92
  void *v66; // r0@95
  void *v67; // r0@96
  unsigned int *v69; // r2@100
  signed int v70; // r1@102
  unsigned int *v71; // r2@104
  signed int v72; // r1@106
  unsigned int *v73; // r2@108
  signed int v74; // r1@110
  unsigned int *v75; // r2@112
  signed int v76; // r1@114
  unsigned int *v77; // r2@128
  signed int v78; // r1@130
  unsigned int *v79; // r2@147
  signed int v80; // r1@149
  int *v81; // [sp+10h] [bp-D20h]@1
  int *v82; // [sp+14h] [bp-D1Ch]@1
  AppPlatformListener *v83; // [sp+18h] [bp-D18h]@1
  int v84; // [sp+1Ch] [bp-D14h]@92
  int v85; // [sp+20h] [bp-D10h]@86
  char *v86; // [sp+24h] [bp-D0Ch]@70
  void *v87; // [sp+28h] [bp-D08h]@67
  int v88; // [sp+2Ch] [bp-D04h]@67
  int v89; // [sp+34h] [bp-CFCh]@26
  void *ptr; // [sp+38h] [bp-CF8h]@19
  char *v91; // [sp+3Ch] [bp-CF4h]@19
  int v92; // [sp+40h] [bp-CF0h]@18
  int v93; // [sp+44h] [bp-CECh]@18
  int v94; // [sp+48h] [bp-CE8h]@18
  __int64 v95; // [sp+4Ch] [bp-CE4h]@16
  char v96; // [sp+54h] [bp-CDCh]@16
  void (*v97)(void); // [sp+5Ch] [bp-CD4h]@16
  __int64 v98; // [sp+68h] [bp-CC8h]@14
  char v99; // [sp+70h] [bp-CC0h]@14
  void (*v100)(void); // [sp+78h] [bp-CB8h]@14
  int v101; // [sp+84h] [bp-CACh]@12
  int v102; // [sp+88h] [bp-CA8h]@12
  char v103; // [sp+8Ch] [bp-CA4h]@12
  void (*v104)(void); // [sp+94h] [bp-C9Ch]@12
  int v105; // [sp+A0h] [bp-C90h]@11
  int v106; // [sp+A4h] [bp-C8Ch]@11
  char v107; // [sp+A8h] [bp-C88h]@4
  int v108; // [sp+B8h] [bp-C78h]@4
  int v109; // [sp+BCh] [bp-C74h]@3
  void *v110; // [sp+C0h] [bp-C70h]@1
  __int64 v111; // [sp+C8h] [bp-C68h]@1
  int v112; // [sp+D0h] [bp-C60h]@3
  int v113; // [sp+D4h] [bp-C5Ch]@3
  const char *v114; // [sp+D8h] [bp-C58h]@3
  int v115; // [sp+DCh] [bp-C54h]@3
  void *v116; // [sp+ECh] [bp-C44h]@68
  char v117; // [sp+F0h] [bp-C40h]@16
  int v118; // [sp+F4h] [bp-C3Ch]@16
  int v119; // [sp+4F4h] [bp-83Ch]@16
  char v120; // [sp+4F8h] [bp-838h]@14
  int v121; // [sp+4FCh] [bp-834h]@14
  int v122; // [sp+8FCh] [bp-434h]@14
  char v123; // [sp+900h] [bp-430h]@3
  int v124; // [sp+904h] [bp-42Ch]@3
  RakNet *v125; // [sp+D08h] [bp-28h]@1

  v5 = a1;
  v6 = a2;
  v7 = a4;
  v8 = a3;
  v125 = _stack_chk_guard;
  *(_DWORD *)a1 = &off_27197C0;
  v83 = (AppPlatformListener *)(a1 + 4);
  j_AppPlatformListener::AppPlatformListener((_QWORD *)(a1 + 4));
  *(_DWORD *)v5 = &off_2724B58;
  *(_DWORD *)(v5 + 4) = &off_2724BDC;
  *(_DWORD *)(v5 + 12) = 0;
  v9 = v5 + 12;
  *(_DWORD *)(v9 + 4) = 0;
  *(_DWORD *)(v9 + 8) = 0;
  *(_DWORD *)(v9 + 12) = 0;
  *(_DWORD *)(v9 + 16) = 0;
  *(_DWORD *)(v9 + 20) = 0;
  v10 = (leveldb *)j_operator new(0x440u);
  v82 = (int *)(v5 + 12);
  j___aeabi_memclr4_0((int)v10, 1088);
  j_leveldb::Options::Options(v10);
  *((_BYTE *)v10 + 1072) = 0;
  *((_BYTE *)v10 + 1073) = 1;
  *((_DWORD *)v10 + 269) = 0;
  *((_DWORD *)v10 + 270) = 0;
  *((_BYTE *)v10 + 1084) = 0;
  *(_DWORD *)(v5 + 36) = v10;
  *(_DWORD *)(v5 + 40) = 0;
  *(_DWORD *)(v5 + 44) = 0;
  *(_DWORD *)(v5 + 48) = 0;
  sub_21E8AF4((int *)(v5 + 52), (int *)&Util::EMPTY_STRING);
  sub_21E8AF4((int *)(v5 + 56), v6);
  sub_21E8AF4((int *)(v5 + 60), v8);
  v11 = j_operator new(1u);
  LODWORD(v12) = sub_1AF8F18;
  v110 = v11;
  HIDWORD(v12) = sub_1AF8EFC;
  v111 = v12;
  j_ThreadLocal<std::string>::ThreadLocal(v5 + 64, (int)&v110);
  v81 = (int *)(v5 + 52);
  if ( (_DWORD)v111 )
    ((void (*)(void))v111)();
  *(_DWORD *)(v5 + 104) = &unk_28898CC;
  v13 = (int *)(v5 + 104);
  *(_DWORD *)(v5 + 108) = 0;
  sub_21E0378((_QWORD *)(v5 + 112));
  *(_DWORD *)(v5 + 128) = 0;
  j_AppPlatformListener::initListener(v83, 0.5);
  v14 = *(_DWORD *)(*v8 - 12);
  v112 = *v8;
  v113 = v14;
  v114 = "db";
  v115 = -1;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v123, (int)&v112, 2);
  sub_21E94B4((void **)&v109, (const char *)&v124);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v5 + 104),
    &v109);
  v15 = (void *)(v109 - 12);
  if ( (int *)(v109 - 12) != &dword_28898C0 )
  {
    v59 = (unsigned int *)(v109 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
    }
    else
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  }
  v16 = *(void (__fastcall **)(int *, int, char *))(*(_DWORD *)a5 + 8);
  j_mce::UUID::fromString((int)&v107, v7);
  v16(&v108, a5, &v107);
  v17 = *(leveldb::Env **)(v108 - 12);
  if ( v17 )
    j_leveldb::Env::Default(v17);
    LODWORD(v18) = j_operator new(0x14u);
    v19 = v18;
    j_EncryptedProxyEnv::EncryptedProxyEnv(v18, v7, &v108);
    v20 = *(_DWORD *)(v5 + 16);
    *(_DWORD *)(v5 + 16) = v19;
    if ( v20 )
      (*(void (**)(void))(*(_DWORD *)v20 + 4))();
      v21 = *(_DWORD *)(v5 + 16);
    LODWORD(v22) = j_operator new(0x40u);
    v23 = v22;
    j_BackupProxyEnv::BackupProxyEnv(v22);
    v24 = *v82;
    *v82 = v23;
  else
    j_leveldb::Env::Default(0);
    LODWORD(v25) = j_operator new(0x40u);
    v26 = v25;
    j_BackupProxyEnv::BackupProxyEnv(v25);
    *v82 = v26;
  if ( v24 )
    (*(void (**)(void))(*(_DWORD *)v24 + 4))();
  v105 = *v13;
  v106 = *(_DWORD *)(v105 - 12);
  if ( !j_Core::FileSystem::directoryExists((__int64 *)&v105) )
    v101 = *v13;
    v102 = *(_DWORD *)(v101 - 12);
    j_Core::FileSystem::createDirectoryRecursively((int)&v103, (__int64 *)&v101);
    if ( v104 )
      v104();
  v27 = *(_DWORD *)(*v13 - 12);
  v112 = *v13;
  v113 = v27;
  v114 = "LOCK";
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v120, (int)&v112, 2);
  LODWORD(v98) = &v121;
  HIDWORD(v98) = v122;
  j_Core::FileSystem::deleteFile((int)&v99, &v98);
  if ( v100 )
    v100();
  v28 = *(_DWORD *)(*v13 - 12);
  v113 = v28;
  v114 = "LOG";
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v117, (int)&v112, 2);
  LODWORD(v95) = &v118;
  HIDWORD(v95) = v119;
  j_Core::FileSystem::deleteFile((int)&v96, &v95);
  if ( v97 )
    v97();
  sub_21E8AF4(&v94, (int *)(v5 + 104));
  sub_21E7408((const void **)&v94, "/CURRENT", 8u);
  v92 = v94;
  v93 = *(_DWORD *)(v94 - 12);
  if ( j_Core::FileSystem::fileOrDirectoryExists((__int64 *)&v92) != 1 )
LABEL_24:
    if ( *(_DWORD *)j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v30 = (AppPlatform **)j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v30 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
    v35 = j_AppPlatform::getAvailableMemory(*v30);
    v36 = v35;
    v37 = j_leveldb::NewBloomFilterPolicy((leveldb *)0xA, SHIDWORD(v35));
    v38 = *(_DWORD *)(v5 + 24);
    *(_DWORD *)(v5 + 24) = v37;
    if ( v38 )
      (*(void (**)(void))(*(_DWORD *)v38 + 4))();
    v39 = j_operator new(0x14u);
    v40 = 0;
    *v39 = 0;
    v39[1] = 0;
    v39[2] = 0;
    v39[3] = 0;
    v39[4] = 0;
    *v39 = &off_2725D24;
    v41 = *(_DWORD *)(v5 + 40);
    *(_DWORD *)(v5 + 40) = v39;
    if ( v41 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 4))(v41);
    v42 = 0;
    if ( (unsigned int)v36 > 0x80000000 )
      v42 = 1;
    v43 = 0;
    if ( SHIDWORD(v36) > 0 )
      v43 = 1;
    if ( HIDWORD(v36) )
      v42 = v43;
    if ( (unsigned int)v36 > 0xE600000 )
      v40 = 1;
      v40 = v43;
    v44 = (leveldb *)&loc_1400000;
    if ( v40 )
      v44 = (leveldb *)&unk_2800000;
    if ( v42 )
      v44 = (leveldb *)83886080;
    v45 = j_leveldb::NewLRUCache(v44, v42);
    v46 = *(_DWORD *)(v5 + 20);
    *(_DWORD *)(v5 + 20) = v45;
    if ( v46 )
      (*(void (**)(void))(*(_DWORD *)v46 + 4))();
    v47 = *(_DWORD *)(v5 + 36);
    *(_DWORD *)(v47 + 28) = 163840;
    v48 = 0;
    *(_BYTE *)(v47 + 4) = 1;
    *(_DWORD *)(v47 + 12) = &NullLogger::instance;
    *(_DWORD *)(*(_DWORD *)(v5 + 36) + 1068) = *(_DWORD *)(v5 + 24);
    *(_DWORD *)(*(_DWORD *)(v5 + 36) + 24) = *(_DWORD *)(v5 + 20);
    v49 = 0;
      v49 = 1;
    v50 = *(_DWORD *)(v5 + 36);
      v48 = 1;
    if ( !HIDWORD(v36) )
      v48 = v49;
    v51 = 0x100000;
    if ( v48 )
      v51 = 0x400000;
    *(_DWORD *)(v50 + 16) = v51;
    *(_DWORD *)(v50 + 8) = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(*(_QWORD *)(v5 + 36) + 1080) = *(_QWORD *)(v5 + 36) >> 32;
    v52 = j_operator new(0x28u);
    v52[4] = 0;
    v52[5] = 0;
    v52[2] = 0;
    v52[3] = 0;
    *((_BYTE *)v52 + 24) = 4;
    v52[7] = -1;
    *((_BYTE *)v52 + 32) = 1;
    *v52 = &off_2724C2C;
    v53 = *(_DWORD *)(v5 + 28);
    *(_DWORD *)(v5 + 28) = v52;
    if ( v53 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v53 + 4))(v53);
    v54 = j_operator new(0x28u);
    v54[4] = 0;
    v54[5] = 0;
    v54[2] = 0;
    v54[3] = 0;
    *((_BYTE *)v54 + 24) = 2;
    v54[7] = -1;
    *((_BYTE *)v54 + 32) = 0;
    *v54 = &off_26EC33C;
    v55 = *(_DWORD *)(v5 + 32);
    *(_DWORD *)(v5 + 32) = v54;
    if ( v55 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v55 + 4))(v55);
    *(_DWORD *)(*(_DWORD *)(v5 + 36) + 40) = *(_DWORD *)(v5 + 28);
    *(_DWORD *)((*(_QWORD *)(v5 + 32) >> 32) + 44) = *(_QWORD *)(v5 + 32);
    v88 = 0;
    j_leveldb::DB::Open((leveldb::DBImpl *)&v87, *(_DWORD *)(v5 + 36), (int *)(v5 + 104), &v88);
    if ( !v87 )
      goto LABEL_157;
    j_leveldb::RepairDB((leveldb::Status **)&v116, (int *)(v5 + 104), *(_DWORD *)(v5 + 36));
    if ( v116 )
      j_operator delete[](v116);
      j_leveldb::DB::Open((leveldb::DBImpl *)&v86, *(_DWORD *)(v5 + 36), (int *)(v5 + 104), &v88);
      v56 = v87;
      v57 = v86;
      if ( v87 != v86 )
      {
        if ( v87 )
        {
          j_operator delete[](v87);
          v57 = v86;
        }
        if ( v57 )
          v58 = j_leveldb::Status::CopyState((leveldb::Status *)v57, v57);
          v56 = v86;
        else
          v56 = 0;
          v58 = 0;
        v87 = v58;
      }
      if ( v56 )
        j_operator delete[](v56);
LABEL_157:
      v61 = *(_DWORD *)(v5 + 44);
      *(_DWORD *)(v5 + 44) = v88;
      if ( v61 )
        (*(void (**)(void))(*(_DWORD *)v61 + 4))();
    j_leveldb::Status::ToString((leveldb::Status *)&v85, (unsigned int **)&v87);
    v62 = (void *)(v85 - 12);
    if ( (int *)(v85 - 12) != &dword_28898C0 )
      v73 = (unsigned int *)(v85 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v74 = __ldrex(v73);
        while ( __strex(v74 - 1, v73) );
      else
        v74 = (*v73)--;
      if ( v74 <= 0 )
        j_j_j_j__ZdlPv_9(v62);
    if ( v87 )
      v63 = *((_BYTE *)v87 + 4);
      if ( v63 > 5 )
        v64 = 6;
        goto LABEL_92;
      v63 = 0;
    v64 = dword_262EB60[v63];
LABEL_92:
    *(_DWORD *)(v5 + 48) = v64;
    j_leveldb::Status::ToString((leveldb::Status *)&v84, (unsigned int **)&v87);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v81, &v84);
    v65 = (void *)(v84 - 12);
    if ( (int *)(v84 - 12) != &dword_28898C0 )
      v75 = (unsigned int *)(v84 - 4);
          v76 = __ldrex(v75);
        while ( __strex(v76 - 1, v75) );
        v76 = (*v75)--;
      if ( v76 <= 0 )
        j_j_j_j__ZdlPv_9(v65);
      j_operator delete[](v87);
    goto LABEL_95;
  v91 = (char *)&unk_28898CC;
  j_leveldb::ReadFileToString((leveldb::Status **)&ptr, *v82, (int)&v94, (const void **)&v91);
  if ( !ptr && sub_21E76A0((int *)&v91, "MANIFEST", 0, 8u) != -1 )
    if ( ptr )
      j_operator delete[](ptr);
    v29 = v91 - 12;
    if ( (int *)(v91 - 12) != &dword_28898C0 )
      v79 = (unsigned int *)(v91 - 4);
          v80 = __ldrex(v79);
        while ( __strex(v80 - 1, v79) );
        v80 = (*v79)--;
      if ( v80 <= 0 )
        j_j_j_j__ZdlPv_9(v29);
    goto LABEL_24;
  *(_DWORD *)(v5 + 48) = 3;
  sub_21E94B4((void **)&v89, "failed to read CURRENT file");
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v81, &v89);
  v31 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v89 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  if ( ptr )
    j_operator delete[](ptr);
  v32 = v91 - 12;
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v91 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
LABEL_95:
  v66 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v94 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v66);
  v67 = (void *)(v108 - 12);
  if ( (int *)(v108 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v108 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v67);
  if ( _stack_chk_guard != v125 )
    j___stack_chk_fail_0(_stack_chk_guard - v125);
  return v5;
}


void __fastcall DBStorage::asyncWriteTag(int a1, int *a2, int a3)
{
  DBStorage::asyncWriteTag(a1, a2, a3);
}


int __fastcall DBStorage::setCompactionCallback(int a1, int a2)
{
  __int64 v2; // r6@0
  int v3; // r8@1
  int v4; // r6@1
  void (__fastcall *v5)(int *); // r3@1
  void *v6; // r0@4
  int result; // r0@4
  int v8; // [sp+4h] [bp-3Ch]@1
  int v9; // [sp+8h] [bp-38h]@2
  int (__fastcall *v10)(int *, int *, signed int); // [sp+10h] [bp-30h]@1
  int v11; // [sp+14h] [bp-2Ch]@2
  void *v12; // [sp+18h] [bp-28h]@4
  int (*v13)(void); // [sp+20h] [bp-20h]@4
  int (__fastcall *v14)(int *, int); // [sp+24h] [bp-1Ch]@4

  v3 = *(_DWORD *)(a1 + 12);
  v8 = a1;
  v4 = a2;
  v10 = 0;
  v5 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v5 )
  {
    v5(&v9);
    HIDWORD(v2) = *(_DWORD *)(v4 + 12);
    v11 = *(_DWORD *)(v2 + 12);
    LODWORD(v2) = *(_DWORD *)(v2 + 8);
    v10 = (int (__fastcall *)(int *, int *, signed int))v2;
  }
  else
    LODWORD(v2) = 0;
  v13 = 0;
  v6 = j_operator new(0x14u);
  *(_DWORD *)v6 = v8;
  *(_QWORD *)((char *)v6 + 4) = *(_QWORD *)&v9;
  *(_QWORD *)((char *)v6 + 12) = v2;
  v12 = v6;
  v13 = (int (*)(void))sub_1AF984C;
  v14 = sub_1AF97DC;
  result = j_BackupProxyEnv::setCompactionCallback(v3, (int)&v12);
  if ( v13 )
    result = v13();
  if ( v10 )
    result = v10(&v9, &v9, 3);
  return result;
}


void __fastcall DBStorage::loadAllPlayerIDs(DBStorage *this, int a2)
{
  DBStorage::loadAllPlayerIDs(this, a2);
}


void __fastcall DBStorage::deleteData(int a1, int *a2)
{
  DBStorage::deleteData(a1, a2);
}


DBStorage *__fastcall DBStorage::~DBStorage(DBStorage *this)
{
  DBStorage *v1; // r4@1
  char *v2; // r5@1
  int v3; // r0@1
  int v4; // r0@3
  void (*v5)(void); // r3@5
  int v6; // r1@7
  void *v7; // r0@7
  int v8; // r1@8
  void *v9; // r0@8
  int v10; // r1@9
  void *v11; // r0@9
  int v12; // r1@10
  void *v13; // r0@10
  int v14; // r0@11
  int v15; // r0@13
  void *v16; // r0@15
  int v17; // r0@17
  int v18; // r0@19
  int v19; // r0@21
  int v20; // r0@23
  int v21; // r0@25
  int v22; // r0@27
  unsigned int *v24; // r2@30
  signed int v25; // r1@32
  unsigned int *v26; // r2@34
  signed int v27; // r1@36
  unsigned int *v28; // r2@38
  signed int v29; // r1@40
  unsigned int *v30; // r2@42
  signed int v31; // r1@44

  v1 = this;
  *(_DWORD *)this = &off_2724B58;
  *((_DWORD *)this + 1) = &off_2724BDC;
  v2 = (char *)this + 4;
  v3 = *((_DWORD *)this + 11);
  *((_DWORD *)v2 + 10) = 0;
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  v4 = *((_DWORD *)v1 + 3);
  *((_DWORD *)v1 + 3) = 0;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  j_DBStorage::_queueSaveCallback(v1);
  v5 = (void (*)(void))*((_DWORD *)v1 + 32);
  if ( v5 )
    v5();
  v6 = *((_DWORD *)v1 + 26);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v24 = (unsigned int *)(v6 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    }
    else
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  j_ThreadLocal<std::string>::~ThreadLocal((int)v1 + 64);
  v8 = *((_DWORD *)v1 + 15);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v8 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 14);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v10 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = *((_DWORD *)v1 + 13);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v12 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = *((_DWORD *)v1 + 11);
  if ( v14 )
    (*(void (**)(void))(*(_DWORD *)v14 + 4))();
  *((_DWORD *)v1 + 11) = 0;
  v15 = *((_DWORD *)v1 + 10);
  if ( v15 )
    (*(void (**)(void))(*(_DWORD *)v15 + 4))();
  *((_DWORD *)v1 + 10) = 0;
  v16 = (void *)*((_DWORD *)v1 + 9);
  if ( v16 )
    j_operator delete(v16);
  *((_DWORD *)v1 + 9) = 0;
  v17 = *((_DWORD *)v1 + 8);
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  *((_DWORD *)v1 + 8) = 0;
  v18 = *((_DWORD *)v1 + 7);
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  *((_DWORD *)v1 + 7) = 0;
  v19 = *((_DWORD *)v1 + 6);
  if ( v19 )
    (*(void (**)(void))(*(_DWORD *)v19 + 4))();
  *((_DWORD *)v1 + 6) = 0;
  v20 = *((_DWORD *)v1 + 5);
  if ( v20 )
    (*(void (**)(void))(*(_DWORD *)v20 + 4))();
  *((_DWORD *)v1 + 5) = 0;
  v21 = *((_DWORD *)v1 + 4);
  if ( v21 )
    (*(void (**)(void))(*(_DWORD *)v21 + 4))();
  *((_DWORD *)v1 + 4) = 0;
  v22 = *((_DWORD *)v1 + 3);
  if ( v22 )
    (*(void (**)(void))(*(_DWORD *)v22 + 4))();
  j_AppPlatformListener::~AppPlatformListener((AppPlatformListener *)v2);
  j_LevelStorage::~LevelStorage(v1);
  return v1;
}
