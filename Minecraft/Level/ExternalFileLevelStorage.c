

RakNet *__fastcall ExternalFileLevelStorage::makeReadableLevelnameFile(int *a1, int *a2)
{
  int *v2; // r9@1
  int v3; // r7@1
  unsigned int v4; // r6@1
  unsigned __int64 v5; // r2@1
  RakNet *result; // r0@3
  RakNet *v7; // [sp+4h] [bp-10F4h]@1
  __int64 v8; // [sp+8h] [bp-10F0h]@1
  void **v9; // [sp+10h] [bp-10E8h]@1
  int v10; // [sp+14h] [bp-10E4h]@3
  void **v11; // [sp+18h] [bp-10E0h]@1
  int v12; // [sp+1Ch] [bp-10DCh]@3
  void **v13; // [sp+104Ch] [bp-ACh]@1
  char v14; // [sp+1060h] [bp-98h]@1
  int v15; // [sp+10BCh] [bp-3Ch]@1
  __int16 v16; // [sp+10C0h] [bp-38h]@1
  int v17; // [sp+10C4h] [bp-34h]@1
  int v18; // [sp+10C8h] [bp-30h]@1
  int v19; // [sp+10CCh] [bp-2Ch]@1
  int v20; // [sp+10D0h] [bp-28h]@1

  v2 = a2;
  v7 = _stack_chk_guard;
  v3 = *a1;
  v4 = *(_DWORD *)(*a1 - 12);
  sub_21B6308((int)&v13);
  v13 = &off_26D3AF0;
  v15 = 0;
  v16 = 0;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  v8 = __PAIR__(v4, v3);
  j_Core::FileStream::FileStream((int)&v9, (int)off_26D81A4, &v8, 16);
  v9 = &off_26D8170;
  v13 = &off_26D8198;
  v11 = &off_26D8184;
  if ( !(v14 & 5) )
    sub_21CBF38((char *)&v11, *v2, *(_DWORD *)(*v2 - 12));
  v9 = &off_26D679C;
  v13 = &off_26D67C4;
  v11 = &off_26D67B0;
  j_Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v12, (int)&off_26D67C4, v5);
  v9 = &off_26D67DC;
  v13 = &off_26D67F0;
  v10 = 0;
  sub_21B6560(&v13);
  result = (RakNet *)(_stack_chk_guard - v7);
  if ( _stack_chk_guard != v7 )
    j___stack_chk_fail((int)result);
  return result;
}


signed int __fastcall ExternalFileLevelStorage::readLevelDataFromFile(int *a1, LevelData *a2)
{
  int *v2; // r5@1
  LevelData *v3; // r7@1
  int v4; // r2@1
  int v5; // r3@1
  int *v6; // r0@1
  signed int v7; // r6@1
  void *v8; // r0@1
  signed int v9; // r4@3
  int v10; // r1@4
  int *v11; // r0@4
  void *v12; // r0@4
  unsigned int *v14; // r2@8
  signed int v15; // r1@10
  unsigned int *v16; // r2@16
  signed int v17; // r1@18
  int v18; // [sp+0h] [bp-840h]@4
  int v19; // [sp+4h] [bp-83Ch]@1
  int v20; // [sp+8h] [bp-838h]@1
  int v21; // [sp+Ch] [bp-834h]@1
  const char *v22; // [sp+10h] [bp-830h]@1
  int v23; // [sp+14h] [bp-82Ch]@1
  char v24; // [sp+18h] [bp-828h]@4
  int v25; // [sp+1Ch] [bp-824h]@4
  char v26; // [sp+420h] [bp-420h]@1
  int v27; // [sp+424h] [bp-41Ch]@1
  RakNet *v28; // [sp+828h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  v28 = _stack_chk_guard;
  v4 = *(_DWORD *)(ExternalFileLevelStorage::FN_LEVEL_DAT - 12);
  v5 = *(_DWORD *)(*a1 - 12);
  v20 = *a1;
  v21 = v5;
  v22 = (const char *)ExternalFileLevelStorage::FN_LEVEL_DAT;
  v23 = v4;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v26, (int)&v20, 2);
  v6 = (int *)sub_21E94B4((void **)&v19, (const char *)&v27);
  v7 = ExternalFileLevelStorage::_readLevelDataFromFile(v6, v3);
  v8 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v19 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  }
  if ( v7 )
    v9 = 1;
  else
    v10 = *(_DWORD *)(*v2 - 12);
    v20 = *v2;
    v21 = v10;
    v22 = "level.dat_old";
    v23 = -1;
    j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v24, (int)&v20, 2);
    v11 = (int *)sub_21E94B4((void **)&v18, (const char *)&v25);
    v9 = ExternalFileLevelStorage::_readLevelDataFromFile(v11, v3);
    v12 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
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
        j_j_j_j__ZdlPv_9(v12);
  if ( _stack_chk_guard != v28 )
    j___stack_chk_fail(_stack_chk_guard - v28);
  return v9;
}


int __fastcall ExternalFileLevelStorage::isLevelCloudSave(int *a1)
{
  int *v1; // r4@1
  int v2; // r0@1
  int v3; // r2@1
  int v4; // r3@1
  int v5; // r2@1
  int v6; // r3@1
  __int64 v7; // r0@1
  int v8; // r4@2
  __int64 v9; // r0@3
  void *v10; // r0@4
  void *v11; // r0@5
  unsigned int *v13; // r2@7
  signed int v14; // r1@9
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  __int64 v17; // [sp+0h] [bp-40h]@3
  __int64 v18; // [sp+8h] [bp-38h]@1
  int v19; // [sp+10h] [bp-30h]@1
  int v20; // [sp+14h] [bp-2Ch]@1
  int v21; // [sp+18h] [bp-28h]@1
  int v22; // [sp+1Ch] [bp-24h]@1
  int v23; // [sp+20h] [bp-20h]@1
  int v24; // [sp+24h] [bp-1Ch]@1

  v1 = a1;
  v2 = *a1;
  v3 = *(_DWORD *)(v2 - 12);
  v4 = *(_DWORD *)(ExternalFileLevelStorage::CLOUD_WORLD_SAVE_MARKER - 12);
  v21 = v2;
  v22 = v3;
  v23 = ExternalFileLevelStorage::CLOUD_WORLD_SAVE_MARKER;
  v24 = v4;
  j_Core::PathBuffer<std::string>::_join<Core::PathPart>((const void **)&v20, (unsigned int)&v21, 2u);
  v5 = *(_DWORD *)(ExternalFileLevelStorage::CLOUD_SYNC_LOCK - 12);
  v6 = *(_DWORD *)(*v1 - 12);
  v21 = *v1;
  v22 = v6;
  v23 = ExternalFileLevelStorage::CLOUD_SYNC_LOCK;
  v24 = v5;
  j_Core::PathBuffer<std::string>::_join<Core::PathPart>((const void **)&v19, (unsigned int)&v21, 2u);
  LODWORD(v7) = v20;
  HIDWORD(v7) = *(_DWORD *)(v20 - 12);
  v18 = v7;
  if ( j_Core::FileSystem::fileExists(&v18) )
  {
    v8 = 1;
  }
  else
    LODWORD(v9) = v19;
    HIDWORD(v9) = *(_DWORD *)(v19 - 12);
    v17 = v9;
    v8 = j_Core::FileSystem::fileExists(&v17);
  v10 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v20 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  return v8;
}


signed int __fastcall ExternalFileLevelStorage::readLevelDataFromData(unsigned int *a1, LevelData *a2)
{
  LevelData *v2; // r6@1
  signed int v3; // r7@1
  unsigned int v4; // r7@5
  unsigned __int8 *v5; // r8@6
  int v6; // r5@6
  int v7; // r0@8
  CompoundTag *v8; // r7@11
  void **v9; // r0@17
  void *v10; // r0@17
  unsigned int *v12; // r2@21
  signed int v13; // r1@23
  CompoundTag *v14; // [sp+4h] [bp-204h]@11
  void **v15; // [sp+8h] [bp-200h]@11
  int v16; // [sp+Ch] [bp-1FCh]@11
  unsigned int v17; // [sp+10h] [bp-1F8h]@1
  int v18; // [sp+14h] [bp-1F4h]@1
  void **v19; // [sp+18h] [bp-1F0h]@1
  int v20; // [sp+1Ch] [bp-1ECh]@18
  void **v21; // [sp+20h] [bp-1E8h]@17
  void **v22; // [sp+24h] [bp-1E4h]@17
  int v23; // [sp+40h] [bp-1C8h]@18
  int v24; // [sp+48h] [bp-1C0h]@17
  int v25; // [sp+4Ch] [bp-1BCh]@18
  char v26; // [sp+D8h] [bp-130h]@8
  RakNet *v27; // [sp+1ECh] [bp-1Ch]@1

  v2 = a2;
  v27 = _stack_chk_guard;
  sub_21D12A4((int)&v19, a1, 24);
  v17 = 0;
  v18 = 0;
  sub_21B81C8((int)&v19, (int)&v18, 4);
  v3 = 0;
  if ( !*(_DWORD *)((char *)*(v19 - 3) + (_DWORD)&v19 + 20) && v18 )
  {
    sub_21B81C8((int)&v19, (int)&v17, 4);
    if ( *(_DWORD *)((char *)*(v19 - 3) + (_DWORD)&v19 + 20) )
    {
      v3 = 0;
    }
    else
      v4 = v17;
      if ( v17 )
      {
        v5 = (unsigned __int8 *)j_operator new(v17);
        v6 = v17;
      }
      else
        v6 = 0;
        v5 = 0;
      j___aeabi_memclr((int)v5, v4);
      sub_21B81C8((int)&v19, (int)v5, v6);
      v7 = j_RakNet::BitStream::BitStream((RakNet::BitStream *)&v26, v5, v4, 0);
      if ( v18 == 1 )
        v3 = 1;
        LevelData::v1_read((int)v2, (int)&v26, 1);
      else if ( v18 < 2 )
        v15 = &off_271973C;
        v16 = v7;
        j_NbtIo::read((NbtIo *)&v14, (IDataInput *)&v15);
        v8 = v14;
        if ( v14 )
        {
          LevelData::getTagData(v2, v14);
          (*(void (__fastcall **)(CompoundTag *))(*(_DWORD *)v8 + 4))(v8);
          v3 = 1;
        }
        else
          v3 = 0;
      j_RakNet::BitStream::~BitStream((RakNet::BitStream *)&v26);
      if ( v5 )
        j_operator delete(v5);
  }
  v9 = off_26D3F84;
  v19 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v19) = off_26D3F80[0];
  v21 = v9;
  v22 = &off_27734E8;
  v10 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v22 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v23);
  v19 = (void **)off_26D3F68;
  *(void ***)((char *)&v19 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v20 = 0;
  sub_21B6560(&v25);
  if ( _stack_chk_guard != v27 )
    j___stack_chk_fail(_stack_chk_guard - v27);
  return v3;
}


void __fastcall ExternalFileLevelStorage::markLevelAsCloudSave(int *a1)
{
  int v1; // r0@1
  int v2; // r2@1
  int v3; // r3@1
  __int64 v4; // r0@1
  __int64 v5; // r0@2
  char v6; // r0@2
  __int64 v7; // r0@3
  __int64 v8; // r1@3
  void (__cdecl *v9)(_DWORD); // r4@3
  void (__cdecl *v10)(_DWORD); // r3@3
  void *v11; // r0@10
  unsigned int *v12; // r2@12
  signed int v13; // r1@14
  __int64 v14; // [sp+8h] [bp-70h]@3
  char v15; // [sp+10h] [bp-68h]@3
  int v16; // [sp+14h] [bp-64h]@3
  void (__cdecl *v17)(_DWORD); // [sp+18h] [bp-60h]@3
  int v18; // [sp+1Ch] [bp-5Ch]@3
  char v19; // [sp+20h] [bp-58h]@3
  int v20; // [sp+28h] [bp-50h]@3
  int v21; // [sp+2Ch] [bp-4Ch]@3
  __int64 v22; // [sp+30h] [bp-48h]@2
  int v23; // [sp+38h] [bp-40h]@2
  int v24; // [sp+3Ch] [bp-3Ch]@3
  void (__cdecl *v25)(_DWORD); // [sp+40h] [bp-38h]@3
  int v26; // [sp+44h] [bp-34h]@3
  char v27; // [sp+48h] [bp-30h]@2
  __int64 v28; // [sp+4Ch] [bp-2Ch]@1
  int v29; // [sp+54h] [bp-24h]@1
  int v30; // [sp+58h] [bp-20h]@1
  int v31; // [sp+5Ch] [bp-1Ch]@1
  void (__cdecl *v32)(_DWORD); // [sp+60h] [bp-18h]@1
  int v33; // [sp+64h] [bp-14h]@1

  v1 = *a1;
  v2 = *(_DWORD *)(v1 - 12);
  v3 = *(_DWORD *)(ExternalFileLevelStorage::CLOUD_WORLD_SAVE_MARKER - 12);
  v30 = v1;
  v31 = v2;
  v32 = (void (__cdecl *)(_DWORD))ExternalFileLevelStorage::CLOUD_WORLD_SAVE_MARKER;
  v33 = v3;
  j_Core::PathBuffer<std::string>::_join<Core::PathPart>((const void **)&v29, (unsigned int)&v30, 2u);
  LODWORD(v4) = v29;
  HIDWORD(v4) = *(_DWORD *)(v29 - 12);
  v28 = v4;
  if ( !j_Core::FileSystem::fileExists(&v28) )
  {
    LODWORD(v5) = v29;
    HIDWORD(v5) = *(_DWORD *)(v29 - 12);
    v22 = v5;
    j_Core::FileSystem::createDirectoryForFile((int)&v23, &v22);
    v6 = v27;
    v27 |= 2u;
    if ( v6 & 1 )
    {
      v20 = 0;
      v21 = 0;
      LODWORD(v7) = v29;
      HIDWORD(v7) = *(_DWORD *)(v29 - 12);
      v14 = v7;
      Core::FileSystem::openFile((int)&v15, &v14, (int)&v20, 46);
      v27 = v27 & 0xFC | v19 & 3;
      LODWORD(v8) = *(_DWORD *)&v15;
      HIDWORD(v8) = v16;
      v9 = v17;
      v17 = 0;
      v30 = v23;
      v31 = v24;
      *(_QWORD *)&v23 = v8;
      v10 = v25;
      v25 = v9;
      v32 = v10;
      v33 = v26;
      v26 = v18;
      if ( v10 )
      {
        v10(&v30);
        v19 |= 3u;
        if ( v17 )
          v17(&v15);
      }
      else
      v27 |= 2u;
      j_Core::File::~File((Core::File *)&v20);
    }
    if ( v25 )
      v25(&v23);
  }
  v11 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v29 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


RakNet *__fastcall ExternalFileLevelStorage::saveLevelData(int *a1, LevelData *a2)
{
  int *v2; // r5@1
  LevelData *v3; // r4@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r3@1
  int v7; // r2@1
  int v8; // r1@1
  char v9; // r7@5
  char v10; // r7@10
  __int64 v11; // r2@15
  int v12; // r7@15
  int *v13; // r0@16
  void *v14; // r0@16
  void *v15; // r0@17
  void *v16; // r0@18
  void *v17; // r0@19
  RakNet *result; // r0@20
  unsigned int *v19; // r2@22
  signed int v20; // r1@24
  unsigned int *v21; // r2@26
  signed int v22; // r1@28
  unsigned int *v23; // r2@30
  signed int v24; // r1@32
  unsigned int *v25; // r2@46
  signed int v26; // r1@48
  RakNet *v27; // [sp+0h] [bp-CFCh]@1
  int v28; // [sp+4h] [bp-CF8h]@16
  __int64 v29; // [sp+8h] [bp-CF4h]@15
  int v30; // [sp+10h] [bp-CECh]@13
  int v31; // [sp+14h] [bp-CE8h]@13
  char v32; // [sp+18h] [bp-CE4h]@13
  void (*v33)(void); // [sp+20h] [bp-CDCh]@13
  int v34; // [sp+2Ch] [bp-CD0h]@10
  int v35; // [sp+30h] [bp-CCCh]@10
  int v36; // [sp+34h] [bp-CC8h]@10
  int v37; // [sp+38h] [bp-CC4h]@10
  char v38; // [sp+3Ch] [bp-CC0h]@10
  void (*v39)(void); // [sp+44h] [bp-CB8h]@10
  char v40; // [sp+4Ch] [bp-CB0h]@10
  int v41; // [sp+50h] [bp-CACh]@8
  int v42; // [sp+54h] [bp-CA8h]@8
  char v43; // [sp+58h] [bp-CA4h]@8
  void (*v44)(void); // [sp+60h] [bp-C9Ch]@8
  int v45; // [sp+6Ch] [bp-C90h]@5
  int v46; // [sp+70h] [bp-C8Ch]@5
  int v47; // [sp+74h] [bp-C88h]@5
  int v48; // [sp+78h] [bp-C84h]@5
  char v49; // [sp+7Ch] [bp-C80h]@5
  void (*v50)(void); // [sp+84h] [bp-C78h]@5
  char v51; // [sp+8Ch] [bp-C70h]@5
  int v52; // [sp+90h] [bp-C6Ch]@4
  int v53; // [sp+94h] [bp-C68h]@4
  int v54; // [sp+98h] [bp-C64h]@2
  int v55; // [sp+9Ch] [bp-C60h]@2
  char v56; // [sp+A0h] [bp-C5Ch]@2
  void (*v57)(void); // [sp+A8h] [bp-C54h]@2
  int v58; // [sp+B4h] [bp-C48h]@1
  int v59; // [sp+B8h] [bp-C44h]@1
  int v60; // [sp+BCh] [bp-C40h]@1
  int v61; // [sp+C0h] [bp-C3Ch]@1
  int v62; // [sp+C4h] [bp-C38h]@1
  const char *v63; // [sp+C8h] [bp-C34h]@1
  int v64; // [sp+CCh] [bp-C30h]@1
  char v65; // [sp+E4h] [bp-C18h]@15
  int v66; // [sp+E8h] [bp-C14h]@15
  int v67; // [sp+4E8h] [bp-814h]@15
  int v68; // [sp+4ECh] [bp-810h]@1
  int v69; // [sp+4F0h] [bp-80Ch]@1
  int v70; // [sp+8F4h] [bp-408h]@1
  int v71; // [sp+8F8h] [bp-404h]@1
  int v72; // [sp+CFCh] [bp+0h]@1
  int v73; // [sp+D00h] [bp+4h]@1

  v2 = a1;
  v3 = a2;
  v27 = _stack_chk_guard;
  v4 = *a1;
  v5 = *(_DWORD *)(v4 - 12);
  v61 = v4;
  v62 = v5;
  v63 = "level.dat_new";
  v64 = -1;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v72, (int)&v61, 2);
  sub_21E94B4((void **)&v60, (const char *)&v73);
  v6 = *(_DWORD *)(*v2 - 12);
  v7 = *(_DWORD *)(ExternalFileLevelStorage::FN_LEVEL_DAT - 12);
  v61 = *v2;
  v62 = v6;
  v63 = (const char *)ExternalFileLevelStorage::FN_LEVEL_DAT;
  v64 = v7;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v70, (int)&v61, 2);
  sub_21E94B4((void **)&v59, (const char *)&v71);
  v8 = *(_DWORD *)(*v2 - 12);
  v62 = v8;
  v63 = "level.dat_old";
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v68, (int)&v61, 2);
  sub_21E94B4((void **)&v58, (const char *)&v69);
  if ( !ExternalFileLevelStorage::_writeLevelDat(&v60, v3) )
    goto LABEL_17;
  v54 = v58;
  v55 = -1;
  j_Core::FileSystem::deleteFile((int)&v56, (__int64 *)&v54);
  if ( v57 )
    v57();
  v52 = v59;
  v53 = -1;
  if ( j_Core::FileSystem::fileExists((__int64 *)&v52) != 1 )
    goto LABEL_10;
  v47 = v59;
  v48 = *(_DWORD *)(v59 - 12);
  v45 = v58;
  v46 = *(_DWORD *)(v58 - 12);
  j_Core::FileSystem::renameFile((int)&v49, (__int64 *)&v47, (__int64 *)&v45);
  v9 = v51;
  v51 |= 2u;
  if ( v50 )
    v50();
  if ( v9 & 1 )
  {
    v41 = v59;
    v42 = -1;
    j_Core::FileSystem::deleteFile((int)&v43, (__int64 *)&v41);
    if ( v44 )
      v44();
LABEL_10:
    v36 = v60;
    v37 = *(_DWORD *)(v60 - 12);
    v34 = v59;
    v35 = *(_DWORD *)(v59 - 12);
    j_Core::FileSystem::renameFile((int)&v38, (__int64 *)&v36, (__int64 *)&v34);
    v10 = v40;
    v40 |= 2u;
    if ( v39 )
      v39();
    if ( v10 & 1 )
    {
      v30 = v60;
      v31 = *(_DWORD *)(v60 - 12);
      j_Core::FileSystem::deleteFile((int)&v32, (__int64 *)&v30);
      if ( v33 )
        v33();
      LODWORD(v11) = *v2;
      HIDWORD(v11) = *(_DWORD *)(*v2 - 12);
      v12 = *(_DWORD *)(ExternalFileLevelStorage::FN_LEVELNAME - 12);
      *(_QWORD *)&v61 = v11;
      v63 = (const char *)ExternalFileLevelStorage::FN_LEVELNAME;
      v64 = v12;
      j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v65, (int)&v61, 2);
      LODWORD(v29) = &v66;
      HIDWORD(v29) = v67;
      if ( !j_Core::FileSystem::fileExists(&v29) )
      {
        sub_21E94B4((void **)&v28, (const char *)&v66);
        v13 = (int *)j_LevelData::getLevelName(v3);
        j_ExternalFileLevelStorage::makeReadableLevelnameFile(&v28, v13);
        v14 = (void *)(v28 - 12);
        if ( (int *)(v28 - 12) != &dword_28898C0 )
        {
          v25 = (unsigned int *)(v28 - 4);
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
            j_j_j_j__ZdlPv_9(v14);
        }
      }
    }
  }
LABEL_17:
  v15 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v58 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v59 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v60 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  result = (RakNet *)(_stack_chk_guard - v27);
  if ( _stack_chk_guard != v27 )
    j___stack_chk_fail((int)result);
  return result;
}


int __fastcall ExternalFileLevelStorage::getLevelModifiedTimestamp(int *a1)
{
  _DWORD *v1; // r0@1
  _DWORD *v3; // [sp+8h] [bp-38h]@1
  void (*v4)(void); // [sp+10h] [bp-30h]@1
  int (__fastcall *v5)(int, _DWORD ***, int); // [sp+14h] [bp-2Ch]@1
  int v6; // [sp+18h] [bp-28h]@1
  int v7; // [sp+1Ch] [bp-24h]@1
  char v8; // [sp+20h] [bp-20h]@1
  void (*v9)(void); // [sp+28h] [bp-18h]@1
  int v10; // [sp+34h] [bp-Ch]@1

  v10 = 0;
  v6 = *a1;
  v7 = *(_DWORD *)(v6 - 12);
  v1 = j_operator new(4u);
  *v1 = &v10;
  v3 = v1;
  v4 = (void (*)(void))sub_196C3B8;
  v5 = sub_196C328;
  j_Core::FileSystem::iterateOverDirectory((int)&v8, (__int64 *)&v6, 708LL, (int)&v3);
  if ( v9 )
    v9();
  if ( v4 )
    v4();
  return v10;
}


char *__fastcall ExternalFileLevelStorage::getImportantFiles(ExternalFileLevelStorage *this)
{
  ExternalFileLevelStorage *v1; // r11@1
  void *v2; // r0@1
  __int64 v3; // r0@2
  char *v4; // r1@3
  char *v5; // r0@5
  int *v6; // r0@6
  int *v7; // r5@6
  int *v8; // r0@7
  char *result; // r0@10
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  unsigned int *v12; // r2@16
  signed int v13; // r1@18
  char *v14; // [sp+4h] [bp-44h]@2
  int v15; // [sp+Ch] [bp-3Ch]@1

  v1 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  sub_21E94B4((void **)&v15, "level.dat_old");
  j_std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>((unsigned __int64 *)v1, &v15);
  v2 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v15 - 4);
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
      j_j_j_j__ZdlPv_9(v2);
  }
  sub_21E94B4((void **)&v14, "level.dat_new");
  v3 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v3 == HIDWORD(v3) )
    j_std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
      (unsigned __int64 *)v1,
      &v14);
    v4 = v14;
  else
    *(_DWORD *)v3 = v14;
    *((_DWORD *)v1 + 1) = v3 + 4;
    v4 = (char *)&unk_28898CC;
    v14 = (char *)&unk_28898CC;
  v5 = v4 - 12;
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v4 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v7 = (int *)(*(_QWORD *)((char *)v1 + 4) >> 32);
  v6 = (int *)*(_QWORD *)((char *)v1 + 4);
  if ( v6 == v7 )
    j_std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      &ExternalFileLevelStorage::FN_LEVEL_DAT);
    v7 = (int *)(*(_QWORD *)((char *)v1 + 4) >> 32);
    v8 = (int *)*(_QWORD *)((char *)v1 + 4);
    v8 = sub_21E8AF4(v6, &ExternalFileLevelStorage::FN_LEVEL_DAT) + 1;
    *((_DWORD *)v1 + 1) = v8;
  if ( v8 == v7 )
    result = j_std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
               (unsigned __int64 *)v1,
               &ExternalFileLevelStorage::FN_LEVELNAME);
    result = (char *)(sub_21E8AF4(v8, &ExternalFileLevelStorage::FN_LEVELNAME) + 1);
    *((_DWORD *)v1 + 1) = result;
  return result;
}


int __fastcall ExternalFileLevelStorage::_writeLevelDat(int *a1, LevelData *a2)
{
  int *v2; // r5@1
  LevelData *v3; // r4@1
  char v4; // r0@1
  int v5; // r4@2
  int v6; // r5@3
  void *v7; // r0@4
  unsigned __int64 v8; // r2@5
  unsigned __int64 v9; // r2@5
  char v10; // r0@5
  __int64 v11; // r1@7
  void (*v12)(void); // r5@7
  void (*v13)(void); // r3@7
  char v14; // r0@11
  unsigned __int64 v15; // r2@13
  __int64 v16; // r1@13
  void (*v17)(void); // r5@13
  void (*v18)(void); // r3@13
  unsigned int *v20; // r2@28
  signed int v21; // r1@30
  char v22; // [sp+8h] [bp-1B8h]@13
  int v23; // [sp+Ch] [bp-1B4h]@13
  void (*v24)(void); // [sp+10h] [bp-1B0h]@13
  int v25; // [sp+14h] [bp-1ACh]@13
  char v26; // [sp+18h] [bp-1A8h]@13
  char v27; // [sp+20h] [bp-1A0h]@7
  int v28; // [sp+24h] [bp-19Ch]@7
  void (*v29)(void); // [sp+28h] [bp-198h]@7
  int v30; // [sp+2Ch] [bp-194h]@7
  char v31; // [sp+30h] [bp-190h]@7
  int v32; // [sp+34h] [bp-18Ch]@7
  char v33; // [sp+38h] [bp-188h]@5
  void (*v34)(void); // [sp+40h] [bp-180h]@7
  int v35; // [sp+44h] [bp-17Ch]@7
  char v36; // [sp+48h] [bp-178h]@5
  int v37; // [sp+50h] [bp-170h]@5
  int v38; // [sp+54h] [bp-16Ch]@3
  void **v39; // [sp+58h] [bp-168h]@3
  int v40; // [sp+5Ch] [bp-164h]@3
  int v41; // [sp+60h] [bp-160h]@1
  int v42; // [sp+64h] [bp-15Ch]@1
  char v43; // [sp+68h] [bp-158h]@1
  void (__cdecl *v44)(char *); // [sp+70h] [bp-150h]@23
  char v45; // [sp+78h] [bp-148h]@1
  void *v46; // [sp+7Ch] [bp-144h]@1
  int v47; // [sp+80h] [bp-140h]@1
  int v48; // [sp+84h] [bp-13Ch]@4
  __int64 v49; // [sp+88h] [bp-138h]@7
  void (*v50)(void); // [sp+90h] [bp-130h]@7
  int v51; // [sp+94h] [bp-12Ch]@7
  int v52; // [sp+98h] [bp-128h]@3
  unsigned __int64 v53; // [sp+A4h] [bp-11Ch]@13
  RakNet *v54; // [sp+1ACh] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v54 = _stack_chk_guard;
  j_LevelData::getSeed(a2);
  v46 = 0;
  v47 = 0;
  v41 = *v2;
  v42 = *(_DWORD *)(v41 - 12);
  j_Core::File::open((int)&v43, (int)&v46, (__int64 *)&v41, 46);
  v4 = v45;
  v45 |= 2u;
  if ( v4 & 1 )
  {
    v39 = &off_2719708;
    v40 = j_RakNet::BitStream::BitStream((RakNet::BitStream *)&v52);
    LevelData::createTag((LevelData *)&v38, v3);
    v6 = v38;
    if ( v38 )
    {
      (*(void (__fastcall **)(int *, int))(*(_DWORD *)v38 + 44))(&v48, v38);
      j_Tag::writeNamedTag((int)&v48, v6, (int)&v39);
      v7 = (void *)(v48 - 12);
      if ( (int *)(v48 - 12) != &dword_28898C0 )
      {
        v20 = (unsigned int *)(v48 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
        }
        else
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
      }
    }
    v37 = j_LevelData::getStorageVersion(v3);
    LODWORD(v8) = &v37;
    j_Core::FileImpl::write((Core::FileImpl *)&v33, v46, v8, 4LL);
    v10 = v36;
    v36 |= 2u;
    if ( v10 & 1 )
      v32 = (unsigned int)(v52 + 7) >> 3;
      LODWORD(v9) = &v32;
      j_Core::FileImpl::write((Core::FileImpl *)&v27, v46, v9, 4LL);
      v36 = v36 & 0xFC | v31 & 3;
      LODWORD(v11) = *(_DWORD *)&v27;
      HIDWORD(v11) = v28;
      v12 = v29;
      v29 = 0;
      v49 = *(_QWORD *)&v33;
      *(_QWORD *)&v33 = v11;
      v13 = v34;
      v34 = v12;
      v50 = v13;
      v51 = v35;
      v35 = v30;
      if ( v13 )
        v13();
        v31 |= 3u;
        if ( v29 )
          v29();
      else
      v14 = v36;
      v36 |= 2u;
      if ( v14 & 1 )
        LODWORD(v15) = v53;
        HIDWORD(v15) = v32 >> 31;
        j_Core::FileImpl::write((Core::FileImpl *)&v22, v46, v15, v32);
        v36 = v36 & 0xFC | v26 & 3;
        LODWORD(v16) = *(_DWORD *)&v22;
        HIDWORD(v16) = v23;
        v17 = v24;
        v24 = 0;
        v49 = *(_QWORD *)&v33;
        *(_QWORD *)&v33 = v16;
        v18 = v34;
        v34 = v17;
        v50 = v18;
        v51 = v35;
        v35 = v25;
        if ( v18 )
          v18();
          v26 |= 3u;
          if ( v24 )
            v24();
        v5 = v36 & 1;
        v36 |= 2u;
        v5 = 0;
    else
      v5 = 0;
    if ( v34 )
      v34();
      (*(void (**)(void))(*(_DWORD *)v38 + 4))();
    j_RakNet::BitStream::~BitStream((RakNet::BitStream *)&v52);
  }
  else
    v5 = 0;
  if ( v44 )
    v44(&v43);
  j_Core::File::~File((Core::File *)&v46);
  if ( _stack_chk_guard != v54 )
    j___stack_chk_fail(_stack_chk_guard - v54);
  return v5;
}


signed int __fastcall ExternalFileLevelStorage::_readLevelDataFromFile(int *a1, LevelData *a2)
{
  LevelData *v2; // r5@1
  char v3; // r0@1
  signed int v4; // r6@1
  char v5; // r4@2
  int v6; // r4@6
  void *v7; // r8@7
  unsigned __int64 v8; // r6@7
  unsigned __int64 v9; // r2@9
  char v10; // r6@9
  void *v11; // r0@15
  unsigned int *v13; // r2@21
  signed int v14; // r1@23
  int v15; // [sp+10h] [bp-88h]@15
  char v16; // [sp+14h] [bp-84h]@13
  void (*v17)(void); // [sp+1Ch] [bp-7Ch]@13
  char v18; // [sp+28h] [bp-70h]@9
  void (*v19)(void); // [sp+30h] [bp-68h]@9
  char v20; // [sp+38h] [bp-60h]@9
  char v21; // [sp+3Ch] [bp-5Ch]@2
  void (__cdecl *v22)(char *); // [sp+44h] [bp-54h]@2
  char v23; // [sp+4Ch] [bp-4Ch]@2
  unsigned __int64 v24; // [sp+50h] [bp-48h]@2
  int v25; // [sp+58h] [bp-40h]@1
  int v26; // [sp+5Ch] [bp-3Ch]@1
  char v27; // [sp+60h] [bp-38h]@1
  void (__cdecl *v28)(char *); // [sp+68h] [bp-30h]@18
  char v29; // [sp+70h] [bp-28h]@1
  unsigned __int64 *v30; // [sp+74h] [bp-24h]@1
  int v31; // [sp+78h] [bp-20h]@1

  v2 = a2;
  v30 = 0;
  v31 = 0;
  v25 = *a1;
  v26 = *(_DWORD *)(v25 - 12);
  j_Core::File::open((int)&v27, (int)&v30, (__int64 *)&v25, 33);
  v3 = v29;
  v4 = 0;
  v29 |= 2u;
  if ( v3 & 1 )
  {
    v24 = 0LL;
    j_Core::FileImpl::getSize((Core::FileImpl *)&v21, v30);
    v5 = v23;
    v23 |= 2u;
    if ( v22 )
      v22(&v21);
    if ( v5 & 1 )
    {
      v6 = v24;
      if ( (_DWORD)v24 )
      {
        v7 = j_operator new(v24);
        v8 = v24;
      }
      else
        v7 = 0;
      j___aeabi_memclr((int)v7, v6);
      LODWORD(v9) = v7;
      j_Core::FileImpl::readExactly((Core::FileImpl *)&v18, v30, v9, v8);
      v10 = v20;
      v20 |= 2u;
      if ( v19 )
        v19();
      if ( v10 & 1 )
        j_Core::File::close((Core::File *)&v16, (int *)&v30);
        if ( v17 )
          v17();
        sub_21E91E0((void **)&v15, (unsigned int)v7, v6);
        v4 = j_ExternalFileLevelStorage::readLevelDataFromData((unsigned int *)&v15, v2);
        v11 = (void *)(v15 - 12);
        if ( (int *)(v15 - 12) != &dword_28898C0 )
        {
          v13 = (unsigned int *)(v15 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
          }
          else
            v14 = (*v13)--;
          if ( v14 <= 0 )
            j_j_j_j__ZdlPv_9(v11);
        }
        v4 = 0;
      if ( v7 )
        j_operator delete(v7);
    }
    else
      v4 = 0;
  }
  if ( v28 )
    v28(&v27);
  j_Core::File::~File((Core::File *)&v30);
  return v4;
}


signed int __fastcall ExternalFileLevelStorage::readSyncFileData(int *a1, int *a2, int a3, _BYTE *a4)
{
  _BYTE *v4; // r4@0
  int *v5; // r7@1
  int *v6; // r6@1
  _BYTE *v7; // r8@1
  int v8; // r5@1
  int v9; // r3@1
  int v10; // r2@1
  __int64 v11; // r0@1
  signed int v12; // r7@1
  __int64 v13; // r0@2
  _BYTE *v14; // r0@2
  bool v15; // zf@2
  int v16; // r7@6
  int *v17; // r0@6
  char *v18; // r12@6
  int v19; // r2@6
  char v20; // r3@7
  int v21; // r1@7
  char *v22; // r0@11
  void *v23; // r0@12
  __int64 v24; // r0@13
  void *v25; // r0@15
  void *v26; // r0@21
  unsigned int *v28; // r2@23
  signed int v29; // r1@25
  unsigned int *v30; // r2@31
  signed int v31; // r1@33
  unsigned int *v32; // r2@35
  signed int v33; // r1@37
  unsigned int *v34; // r2@39
  signed int v35; // r1@41
  int v36; // [sp+0h] [bp-78h]@12
  char *v37; // [sp+8h] [bp-70h]@11
  void **v38; // [sp+Ch] [bp-6Ch]@11
  int v39; // [sp+10h] [bp-68h]@13
  int v40; // [sp+14h] [bp-64h]@15
  _DWORD *v41; // [sp+18h] [bp-60h]@13
  __int64 v42; // [sp+1Ch] [bp-5Ch]@2
  char v43; // [sp+24h] [bp-54h]@2
  void (*v44)(void); // [sp+2Ch] [bp-4Ch]@16
  unsigned __int8 v45; // [sp+34h] [bp-44h]@2
  void *ptr; // [sp+38h] [bp-40h]@2
  _BYTE *v47; // [sp+3Ch] [bp-3Ch]@2
  int v48; // [sp+40h] [bp-38h]@2
  __int64 v49; // [sp+44h] [bp-34h]@1
  int v50; // [sp+4Ch] [bp-2Ch]@1
  int v51; // [sp+50h] [bp-28h]@1
  int v52; // [sp+54h] [bp-24h]@1
  int v53; // [sp+58h] [bp-20h]@1
  int v54; // [sp+5Ch] [bp-1Ch]@1

  v5 = a1;
  v6 = a2;
  v7 = a4;
  v8 = a3;
  EntityInteraction::setInteractText(a2, (int *)&Util::EMPTY_STRING);
  *(_DWORD *)v8 = 0;
  *(_DWORD *)(v8 + 4) = 0;
  *v7 = 1;
  v9 = *(_DWORD *)(*v5 - 12);
  v10 = *(_DWORD *)(ExternalFileLevelStorage::CLOUD_SYNC_LOCK - 12);
  v51 = *v5;
  v52 = v9;
  v53 = ExternalFileLevelStorage::CLOUD_SYNC_LOCK;
  v54 = v10;
  j_Core::PathBuffer<std::string>::_join<Core::PathPart>((const void **)&v50, (unsigned int)&v51, 2u);
  LODWORD(v11) = v50;
  HIDWORD(v11) = *(_DWORD *)(v50 - 12);
  v49 = v11;
  v12 = 0;
  if ( j_Core::FileSystem::fileExists(&v49) == 1 )
  {
    ptr = 0;
    v47 = 0;
    LODWORD(v13) = v50;
    v48 = 0;
    HIDWORD(v13) = *(_DWORD *)(v50 - 12);
    v42 = v13;
    j_Core::FileSystem::readFileData((int)&v43, &v42, (int)&ptr);
    v14 = (_BYTE *)v45;
    v15 = (v45 & 1) == 0;
    v45 |= 2u;
    if ( !v15 )
    {
      v14 = v47;
      v4 = ptr;
      v15 = v47 == ptr;
    }
      if ( v4 == v14 )
      {
        v18 = (char *)&unk_28898CC;
      }
      else
        v16 = v14 - v4;
        v17 = sub_21E7E80(v14 - v4, 0);
        v18 = (char *)(v17 + 3);
        v19 = 0;
        do
        {
          v20 = v4[v19];
          v21 = (int)v17 + v19++;
          *(_BYTE *)(v21 + 12) = v20;
        }
        while ( v16 != v19 );
        if ( v17 != &dword_28898C0 )
          v17[2] = 0;
          *v17 = v16;
          v18[v16] = byte_26C67B8[0];
      v37 = v18;
      ReadOnlyBinaryStream::ReadOnlyBinaryStream((int)&v38, &v37);
      v22 = v37 - 12;
      if ( (int *)(v37 - 12) != &dword_28898C0 )
        v30 = (unsigned int *)(v37 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v31 = __ldrex(v30);
          while ( __strex(v31 - 1, v30) );
        else
          v31 = (*v30)--;
        if ( v31 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      j_ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v36, (int)&v38);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v6, &v36);
      v23 = (void *)(v36 - 12);
      if ( (int *)(v36 - 12) != &dword_28898C0 )
        v32 = (unsigned int *)(v36 - 4);
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
      LODWORD(v24) = j_ReadOnlyBinaryStream::getVarInt64((ReadOnlyBinaryStream *)&v38);
      *(_QWORD *)v8 = v24;
      if ( *(_DWORD *)(*v41 - 12) != v39 )
        *v7 = j_ReadOnlyBinaryStream::getBool((ReadOnlyBinaryStream *)&v38);
      v38 = &off_26E91A4;
      v25 = (void *)(v40 - 12);
      if ( (int *)(v40 - 12) != &dword_28898C0 )
        v34 = (unsigned int *)(v40 - 4);
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
          v35 = (*v34)--;
        if ( v35 <= 0 )
          j_j_j_j__ZdlPv_9(v25);
    if ( v44 )
      v44();
    if ( ptr )
      j_operator delete(ptr);
    v12 = 1;
  }
  v26 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v50 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    else
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  return v12;
}


signed int __fastcall ExternalFileLevelStorage::readShallowLevelSummaryFromSyncFile(int *a1, int a2)
{
  int *v2; // r7@1
  int v3; // r4@1
  void *v4; // r0@3
  int *v5; // r6@4
  void *v6; // r0@4
  int v7; // r12@5
  int v8; // r4@5
  void *v9; // r0@6
  signed int v10; // r4@7
  char *v11; // r0@9
  void *v12; // r0@10
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20
  unsigned int *v18; // r2@22
  signed int v19; // r1@24
  unsigned int *v20; // r2@26
  signed int v21; // r1@28
  unsigned int *v22; // r2@46
  signed int v23; // r1@48
  int v24; // [sp+0h] [bp-470h]@6
  char v25; // [sp+7h] [bp-469h]@5
  char v26; // [sp+8h] [bp-468h]@5
  char *v27; // [sp+14h] [bp-45Ch]@5
  int v28; // [sp+18h] [bp-458h]@4
  int v29; // [sp+1Ch] [bp-454h]@3
  int v30; // [sp+20h] [bp-450h]@1
  int v31; // [sp+24h] [bp-44Ch]@1
  char v32; // [sp+28h] [bp-448h]@1
  void (*v33)(void); // [sp+30h] [bp-440h]@1
  int v34; // [sp+3Ch] [bp-434h]@1
  int v35; // [sp+40h] [bp-430h]@1
  int v36; // [sp+44h] [bp-42Ch]@1
  int v37; // [sp+48h] [bp-428h]@1
  char v38; // [sp+50h] [bp-420h]@1
  int v39; // [sp+54h] [bp-41Ch]@1
  RakNet *v40; // [sp+458h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  v40 = _stack_chk_guard;
  v35 = *a1;
  v36 = *(_DWORD *)(v35 - 12);
  j_Core::PathBuffer<Core::StackString<char,1024u>>::getEntryNameWithoutExtension((int)&v38, (__int64 *)&v35);
  sub_21E94B4((void **)&v37, (const char *)&v39);
  v30 = *v2;
  v31 = *(_DWORD *)(v30 - 12);
  j_Core::FileSystem::getLastModificationTime((int)&v32, (__int64 *)&v30, (int)&v34);
  if ( v33 )
    v33();
  sub_21E8AF4(&v29, &v37);
  EntityInteraction::setInteractText((int *)v3, &v29);
  v4 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v29 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E8AF4(&v28, &v37);
  v5 = (int *)(v3 + 4);
  EntityInteraction::setInteractText((int *)(v3 + 4), &v28);
  v6 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v28 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = v3 + 8;
  *(_DWORD *)v7 = v34;
  *(_DWORD *)(v7 + 4) = -1;
  *(_DWORD *)(v7 + 8) = 5;
  *(_DWORD *)(v3 + 32) = 0;
  v8 = v3 + 32;
  *(_DWORD *)(v8 + 4) = 0;
  v27 = (char *)&unk_28898CC;
  if ( j_ExternalFileLevelStorage::readSyncFileData(v2, (int *)&v27, (int)&v26, &v25) == 1 )
    sub_21E8AF4(&v24, (int *)&v27);
    EntityInteraction::setInteractText(v5, &v24);
    v9 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v24 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      }
      else
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    *(_QWORD *)v8 = *(_QWORD *)&v26;
    v10 = 1;
  else
    v10 = 0;
  v11 = v27 - 12;
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v27 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v37 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  if ( _stack_chk_guard != v40 )
    j___stack_chk_fail(_stack_chk_guard - v40);
  return v10;
}


void __fastcall ExternalFileLevelStorage::markLevelForSync(int *a1, char **a2, unsigned int a3, bool a4)
{
  char **v4; // r6@1
  int v5; // r0@1
  unsigned int v6; // r5@1
  bool v7; // r4@1
  int v8; // r2@1
  int v9; // r3@1
  __int64 v10; // r0@1
  char v11; // r0@1
  int v12; // r1@2
  __int64 v13; // r0@2
  __int64 v14; // r1@2
  void (__cdecl *v15)(_DWORD); // r6@2
  void (__cdecl *v16)(_DWORD); // r3@2
  char v17; // r0@6
  void *v18; // r0@11
  void *v19; // r0@12
  void *v20; // r0@13
  void *v21; // r0@16
  unsigned int *v22; // r2@18
  signed int v23; // r1@20
  unsigned int *v24; // r2@26
  signed int v25; // r1@28
  unsigned int *v26; // r2@30
  signed int v27; // r1@32
  unsigned int *v28; // r2@42
  signed int v29; // r1@44
  char v30; // [sp+Ch] [bp-ACh]@9
  void (*v31)(void); // [sp+14h] [bp-A4h]@9
  char v32; // [sp+20h] [bp-98h]@7
  void (*v33)(void); // [sp+28h] [bp-90h]@7
  char v34[12]; // [sp+34h] [bp-84h]@2
  char v35; // [sp+40h] [bp-78h]@2
  int v36; // [sp+44h] [bp-74h]@2
  void (__cdecl *v37)(_DWORD); // [sp+48h] [bp-70h]@2
  int v38; // [sp+4Ch] [bp-6Ch]@2
  char v39; // [sp+50h] [bp-68h]@2
  void *v40; // [sp+58h] [bp-60h]@2
  int v41; // [sp+5Ch] [bp-5Ch]@2
  void **v42; // [sp+60h] [bp-58h]@2
  int v43; // [sp+68h] [bp-50h]@13
  int v44; // [sp+70h] [bp-48h]@12
  __int64 v45; // [sp+78h] [bp-40h]@1
  int v46; // [sp+80h] [bp-38h]@1
  int v47; // [sp+84h] [bp-34h]@1
  void (__cdecl *v48)(_DWORD); // [sp+88h] [bp-30h]@1
  int v49; // [sp+8Ch] [bp-2Ch]@1
  char v50; // [sp+90h] [bp-28h]@1
  int v51; // [sp+94h] [bp-24h]@1
  int v52; // [sp+98h] [bp-20h]@2
  int v53; // [sp+9Ch] [bp-1Ch]@2
  void (__cdecl *v54)(_DWORD); // [sp+A0h] [bp-18h]@2
  int v55; // [sp+A4h] [bp-14h]@2

  v4 = a2;
  v5 = *a1;
  v6 = a3;
  v7 = a4;
  v8 = *(_DWORD *)(v5 - 12);
  v9 = *(_DWORD *)(ExternalFileLevelStorage::CLOUD_SYNC_LOCK - 12);
  v46 = v5;
  v47 = v8;
  v48 = (void (__cdecl *)(_DWORD))ExternalFileLevelStorage::CLOUD_SYNC_LOCK;
  v49 = v9;
  j_Core::PathBuffer<std::string>::_join<Core::PathPart>((const void **)&v51, (unsigned int)&v46, 2u);
  LODWORD(v10) = v51;
  HIDWORD(v10) = *(_DWORD *)(v51 - 12);
  v45 = v10;
  j_Core::FileSystem::createDirectoryForFile((int)&v46, &v45);
  v11 = v50;
  v50 |= 2u;
  if ( v11 & 1 )
  {
    j_BinaryStream::BinaryStream((BinaryStream *)&v42);
    j_BinaryStream::writeString((int)&v42, v4);
    j_BinaryStream::writeVarInt64((BinaryStream *)&v42, v12, v6);
    j_BinaryStream::writeBool((BinaryStream *)&v42, v7);
    v40 = 0;
    v41 = 0;
    LODWORD(v13) = v51;
    HIDWORD(v13) = *(_DWORD *)(v51 - 12);
    *(_QWORD *)&v34[4] = v13;
    Core::FileSystem::openFile((int)&v35, (__int64 *)&v34[4], (int)&v40, 46);
    v50 = v50 & 0xFC | v39 & 3;
    LODWORD(v14) = *(_DWORD *)&v35;
    HIDWORD(v14) = v36;
    v15 = v37;
    v37 = 0;
    v52 = v46;
    v53 = v47;
    *(_QWORD *)&v46 = v14;
    v16 = v48;
    v48 = v15;
    v54 = v16;
    v55 = v49;
    v49 = v38;
    if ( v16 )
    {
      v16(&v52);
      v39 |= 3u;
      if ( v37 )
        v37(&v35);
    }
    else
    v17 = v50;
    v50 |= 2u;
    if ( v17 & 1 )
      j_BinaryStream::getAndReleaseData((BinaryStream *)v34, (int)&v42);
      j_Core::FileImpl::write((Core::FileImpl *)&v32, v40, *(unsigned int *)v34, *(_DWORD *)(*(_DWORD *)v34 - 12));
      if ( v33 )
        v33();
      j_Core::File::close((Core::File *)&v30, (int *)&v40);
      if ( v31 )
        v31();
      v18 = (void *)(*(_DWORD *)v34 - 12);
      if ( (int *)(*(_DWORD *)v34 - 12) != &dword_28898C0 )
      {
        v28 = (unsigned int *)(*(_DWORD *)v34 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
        }
        else
          v29 = (*v28)--;
        if ( v29 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      }
    j_Core::File::~File((Core::File *)&v40);
    v42 = &off_26D53E4;
    v19 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v44 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
      else
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    v42 = &off_26E91A4;
    v20 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v43 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
  }
  if ( v48 )
    v48(&v46);
  v21 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v51 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
}
