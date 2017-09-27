

    if ( (void *)v64 != ptr && LevelLoader::_checkLevelCompatibility((LevelLoader *)v4, (LevelSummary *)ptr) == 1 )
{
      v11 = (MinecraftEventing *)MinecraftGame::getEventing(*(MinecraftGame **)v4);
      MinecraftEventing::fireEventWorldImported(v11, *((_QWORD *)ptr + 4), *((_DWORD *)ptr + 5), *((_QWORD *)ptr + 4));
      v12 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)v4);
      if ( !ClientInstance::isInGame(v12) && !MinecraftGame::isStartingGame(*(MinecraftGame **)v4) )
      {
        v13 = (int *)((char *)ptr + 56);
        if ( *(_DWORD *)(*((_DWORD *)ptr + 14) - 12) )
        {
          v14 = (EntitlementManager *)MinecraftGame::getEntitlementManager(*(MinecraftGame **)v4);
          mce::UUID::fromString((int)&v57, v13);
          v15 = EntitlementManager::getEntitlement(v14, (const mce::UUID *)&v57);
          Entitlement::Entitlement((int)&v58, v15);
          Entitlement::getContentKey((Entitlement *)&v56, (int)&v58);
          if ( Entitlement::isOwned((Entitlement *)&v58) == 1 )
          {
            v16 = *(MinecraftGame **)v4;
            sub_119C854(&v55, (int *)ptr);
            sub_119C854(&v54, (int *)ptr + 1);
            sub_119C854(&v53, v13);
            v18 = *((_BYTE *)ptr + 40) != 0;
            v17 = (LevelSettings *)LevelSettings::LevelSettings((LevelSettings *)&v52);
            MinecraftGame::startLocalServer((int)v16, &v55, &v54, &v53, v18, v17);
            LevelSettings::~LevelSettings((LevelSettings *)&v52);
            v19 = (void *)(v53 - 12);
            if ( (int *)(v53 - 12) != &dword_28898C0 )
            {
              v42 = (unsigned int *)(v53 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v43 = __ldrex(v42);
                while ( __strex(v43 - 1, v42) );
              }
              else
                v43 = (*v42)--;
              if ( v43 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v19);
            }
            v20 = (void *)(v54 - 12);
            if ( (int *)(v54 - 12) != &dword_28898C0 )
              v44 = (unsigned int *)(v54 - 4);
                  v45 = __ldrex(v44);
                while ( __strex(v45 - 1, v44) );
                v45 = (*v44)--;
              if ( v45 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v20);
            v21 = (void *)(v55 - 12);
            if ( (int *)(v55 - 12) != &dword_28898C0 )
              v46 = (unsigned int *)(v55 - 4);
                  v47 = __ldrex(v46);
                while ( __strex(v47 - 1, v46) );
                v47 = (*v46)--;
              if ( v47 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v21);
          }
          v22 = (void *)(v56 - 12);
          if ( (int *)(v56 - 12) != &dword_28898C0 )
            v34 = (unsigned int *)(v56 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v35 = __ldrex(v34);
              while ( __strex(v35 - 1, v34) );
            else
              v35 = (*v34)--;
            if ( v35 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v22);
          Entitlement::~Entitlement((Entitlement *)&v58);
        }
        else
          v24 = *(MinecraftGame **)v4;
          sub_119C854(&v62, (int *)ptr);
          sub_119C854(&v61, (int *)ptr + 1);
          sub_119C854(&v60, v13);
          v26 = *((_BYTE *)ptr + 40) != 0;
          v25 = (LevelSettings *)LevelSettings::LevelSettings((LevelSettings *)&v59);
          MinecraftGame::startLocalServer((int)v24, &v62, &v61, &v60, v26, v25);
          LevelSettings::~LevelSettings((LevelSettings *)&v59);
          v27 = (void *)(v60 - 12);
          if ( (int *)(v60 - 12) != &dword_28898C0 )
            v36 = (unsigned int *)(v60 - 4);
                v37 = __ldrex(v36);
              while ( __strex(v37 - 1, v36) );
              v37 = (*v36)--;
            if ( v37 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v27);
          v28 = (void *)(v61 - 12);
          if ( (int *)(v61 - 12) != &dword_28898C0 )
            v38 = (unsigned int *)(v61 - 4);
                v39 = __ldrex(v38);
              while ( __strex(v39 - 1, v38) );
              v39 = (*v38)--;
            if ( v39 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v28);
          v29 = (void *)(v62 - 12);
          if ( (int *)(v62 - 12) != &dword_28898C0 )
            v40 = (unsigned int *)(v62 - 4);
                v41 = __ldrex(v40);
              while ( __strex(v41 - 1, v40) );
              v41 = (*v40)--;
            if ( v41 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v29);
      }
    }
    v31 = v64;
    v30 = (LevelSummary *)ptr;
    if ( ptr != (void *)v64 )
    {
      do
        v30 = (LevelSummary *)((char *)LevelSummary::~LevelSummary(v30) + 64);
      while ( v31 != v30 );
      v30 = (LevelSummary *)ptr;
    if ( v30 )
      operator delete((void *)v30);
  }
  v32 = *((_WORD *)v2 + 8);
  if ( (_BYTE)v32 )
  {
    __dmb();
    *(_BYTE *)(v4 + 20) = 0;
    result = (RakNet *)*((_BYTE *)v2 + 17);
  else
    result = (RakNet *)(v32 >> 8);
LABEL_31:
  if ( result )
    v33 = v2[3];
    v48 = v33;
    v49 = *(_DWORD *)(v33 - 12);
    result = Core::FileSystem::deleteFile((int)&v50, (__int64 *)&v48);
    if ( v51 )
      result = (RakNet *)v51(&v50);
  return result;
}


char *__fastcall LevelLoader::queueLevelForImport(int a1, unsigned __int64 *a2, int *a3, char a4, char a5)
{
  int v5; // r4@1
  char v6; // r0@1
  __int64 *v7; // r0@2
  __int64 v8; // kr00_8@2
  __int64 *v9; // r0@4
  __int64 v10; // kr08_8@4
  char *result; // r0@6
  char v12; // [sp+Dh] [bp-Bh]@4
  char v13; // [sp+Eh] [bp-Ah]@1
  char v14; // [sp+Fh] [bp-9h]@1

  v5 = a1;
  v14 = a4;
  v13 = a5;
  v6 = *(_BYTE *)(a1 + 20);
  __dmb();
  if ( v6 & 1 )
  {
    v12 = 0;
    v9 = (__int64 *)(v5 + 4);
    v10 = *(_QWORD *)(v5 + 8);
    if ( (_DWORD)v10 != HIDWORD(v10) )
    {
      __gnu_cxx::new_allocator<ImportLevelData>::construct<ImportLevelData,std::shared_ptr<ImportContext> &,std::string const&,bool,bool &>(
        (int)v9,
        (unsigned __int64 *)v10,
        a2,
        a3,
        &v12,
        &v13);
      goto LABEL_6;
    }
    result = std::vector<ImportLevelData,std::allocator<ImportLevelData>>::_M_emplace_back_aux<std::shared_ptr<ImportContext> &,std::string const&,bool,bool &>(
               v9,
               a2,
               a3,
               &v12,
               &v13);
  }
  else
    __dmb();
    *(_BYTE *)(v5 + 20) = v14;
    v7 = (__int64 *)(v5 + 4);
    v8 = *(_QWORD *)(v5 + 8);
    if ( (_DWORD)v8 != HIDWORD(v8) )
      __gnu_cxx::new_allocator<ImportLevelData>::construct<ImportLevelData,std::shared_ptr<ImportContext> &,std::string const&,bool &,bool &>(
        (int)v7,
        (unsigned __int64 *)v8,
        &v14,
LABEL_6:
      result = (char *)(*(_DWORD *)(v5 + 8) + 16);
      *(_DWORD *)(v5 + 8) = result;
      return result;
    result = std::vector<ImportLevelData,std::allocator<ImportLevelData>>::_M_emplace_back_aux<std::shared_ptr<ImportContext> &,std::string const&,bool &,bool &>(
               v7,
               &v14,
  return result;
}


signed int __fastcall LevelLoader::_checkLevelCompatibility(LevelLoader *this, LevelSummary *a2)
{
  LevelSummary *v2; // r5@1
  MinecraftGame **v3; // r4@1
  void *v5; // r0@4
  void *v6; // r0@5
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  void *v9; // r0@10
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  unsigned int *v12; // r2@17
  signed int v13; // r1@19
  int v14; // [sp+8h] [bp-30h]@10
  int v15; // [sp+10h] [bp-28h]@10
  int v16; // [sp+18h] [bp-20h]@4
  int v17; // [sp+20h] [bp-18h]@4

  v2 = a2;
  v3 = (MinecraftGame **)this;
  if ( !LevelSummary::isEditionCompatible(a2) )
  {
    sub_119C884((void **)&v17, "disconnectionScreen.cantConnect");
    sub_119C884((void **)&v16, "disconnectionScreen.editionMismatch");
    LevelLoader::_navigateToDisconnectScreen(v3, &v17, &v16);
    v5 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v16 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    v6 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) == &dword_28898C0 )
      return 0;
    v7 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      goto LABEL_26;
    goto LABEL_25;
  }
  if ( LevelSummary::isNetworkCompatible(v2) )
    return 1;
  sub_119C884((void **)&v15, "disconnectionScreen.cantConnect");
  sub_119C884((void **)&v14, "disconnectionScreen.futureVersion");
  LevelLoader::_navigateToDisconnectScreen(v3, &v15, &v14);
  v9 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v14 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v6 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v15 - 4);
LABEL_25:
    v8 = (*v7)--;
LABEL_26:
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  return 0;
}


LevelLoader *__fastcall LevelLoader::~LevelLoader(LevelLoader *this)
{
  LevelLoader *v1; // r9@1
  int v2; // r1@1
  void *v3; // r0@1
  LevelSummary *v4; // r0@2
  LevelSummary *v5; // r0@3
  int v6; // r5@4 OVERLAPPED
  int v7; // r6@4 OVERLAPPED
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  int v10; // r1@14
  void *v11; // r0@14
  int v12; // r4@15
  unsigned int *v13; // r1@16
  unsigned int v14; // r0@18
  unsigned int *v15; // r7@22
  unsigned int v16; // r0@24
  unsigned int *v18; // r2@34
  signed int v19; // r1@36

  v1 = this;
  v2 = *((_DWORD *)this + 6);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (LevelSummary *)*((_DWORD *)v1 + 4);
  if ( v4 )
    v5 = LevelSummary::~LevelSummary(v4);
    operator delete((void *)v5);
  *((_DWORD *)v1 + 4) = 0;
  *(_QWORD *)&v6 = *(_QWORD *)((char *)v1 + 4);
  if ( v6 != v7 )
    do
      v10 = *(_DWORD *)(v6 + 8);
      v11 = (void *)(v10 - 12);
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
          j_j_j_j_j__ZdlPv_9(v11);
      }
      v12 = *(_DWORD *)(v6 + 4);
      if ( v12 )
        v13 = (unsigned int *)(v12 + 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 == 1 )
          v15 = (unsigned int *)(v12 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
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
            (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
      v6 += 16;
    while ( v6 != v7 );
    v6 = *((_DWORD *)v1 + 1);
  if ( v6 )
    operator delete((void *)v6);
  return v1;
}


void __fastcall LevelLoader::checkForPendingLevelImport(LevelLoader *this)
{
  LevelLoader *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  int v4; // r11@3
  int v5; // r6@4
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  int v8; // r1@13
  void *v9; // r0@13
  int v10; // r8@14
  unsigned int *v11; // r1@15
  unsigned int v12; // r0@17
  unsigned int *v13; // r7@21
  unsigned int v14; // r0@23

  v1 = this;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
    {
      LevelLoader::importLevel((MinecraftGame **)v1, v2);
      v2 += 16;
    }
    while ( v3 != v2 );
    v4 = *(_QWORD *)((char *)v1 + 4) >> 32;
    v2 = *(_QWORD *)((char *)v1 + 4);
    if ( v4 != v2 )
      v5 = *(_QWORD *)((char *)v1 + 4);
      do
      {
        v8 = *(_DWORD *)(v5 + 8);
        v9 = (void *)(v8 - 12);
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
            j_j_j_j_j__ZdlPv_9_1(v9);
        }
        v10 = *(_DWORD *)(v5 + 4);
        if ( v10 )
          v11 = (unsigned int *)(v10 + 4);
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
        v5 += 16;
      }
      while ( v5 != v4 );
  }
  *((_DWORD *)v1 + 2) = v2;
}


void __fastcall LevelLoader::checkForPendingLevelImport(LevelLoader *this)
{
  LevelLoader::checkForPendingLevelImport(this);
}


void __fastcall LevelLoader::setLevelForLoad(LevelLoader *this, const LevelSummary *a2)
{
  LevelLoader *v2; // r4@1
  int *v3; // r6@1
  int *v4; // r5@1
  LevelSummary *v5; // r0@1
  LevelSummary *v6; // r0@2

  v2 = this;
  v3 = (int *)a2;
  v4 = (int *)operator new(0x40u);
  LevelSummary::LevelSummary(v4, v3);
  v5 = (LevelSummary *)*((_DWORD *)v2 + 4);
  *((_DWORD *)v2 + 4) = v4;
  if ( v5 )
  {
    v6 = LevelSummary::~LevelSummary(v5);
    j_j_j__ZdlPv_4((void *)v6);
  }
}


void __fastcall LevelLoader::importLevel(MinecraftGame **a1, int a2)
{
  int v2; // r4@1
  MinecraftGame **v3; // r5@1
  ClientInstance *v4; // r0@2
  Minecraft *v5; // r0@2
  int v6; // r1@2
  MinecraftGame *v7; // r0@2
  int v8; // r6@4
  int v9; // r7@4
  int v10; // r6@4
  unsigned int *v11; // r1@5
  unsigned int v12; // r0@7
  unsigned int *v13; // r7@11
  unsigned int v14; // r0@13
  void *v15; // r0@18
  void *v16; // r0@19
  int v17; // r8@20
  int v18; // r0@20
  unsigned int *v19; // r0@21
  unsigned int v20; // r1@23
  void *v21; // r5@26
  unsigned int *v22; // r0@27
  unsigned int v23; // r1@29
  void *v24; // r0@34
  unsigned int *v25; // r1@36
  unsigned int v26; // r0@38
  unsigned int *v27; // r5@42
  unsigned int v28; // r0@44
  int v29; // r4@49
  unsigned int *v30; // r1@50
  unsigned int v31; // r0@52
  unsigned int *v32; // r5@56
  unsigned int v33; // r0@58
  unsigned int *v34; // r2@64
  signed int v35; // r1@66
  unsigned int *v36; // r2@72
  signed int v37; // r1@74
  unsigned int *v38; // r2@76
  signed int v39; // r1@78
  MinecraftGame **v40; // [sp+0h] [bp-60h]@20
  int v41; // [sp+4h] [bp-5Ch]@20
  int v42; // [sp+8h] [bp-58h]@20
  int v43; // [sp+Ch] [bp-54h]@26
  __int16 v44; // [sp+10h] [bp-50h]@26
  void *v45; // [sp+14h] [bp-4Ch]@32
  void (*v46)(void); // [sp+1Ch] [bp-44h]@26
  RakNet *(__fastcall *v47)(int **, _DWORD *); // [sp+20h] [bp-40h]@32
  char v48; // [sp+24h] [bp-3Ch]@32
  int v49; // [sp+28h] [bp-38h]@49
  int v50; // [sp+30h] [bp-30h]@4
  int v51; // [sp+38h] [bp-28h]@4
  char v52; // [sp+3Ch] [bp-24h]@4
  int v53; // [sp+40h] [bp-20h]@4

  v2 = a2;
  v3 = a1;
  if ( *(_BYTE *)(a2 + 12) )
  {
    v4 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*a1);
    v5 = (Minecraft *)ClientInstance::getServerData(v4);
    v6 = Minecraft::getLevel(v5);
    v7 = *v3;
    if ( v6 )
    {
      MinecraftGame::requestLeaveGame(v7, 1, 0);
    }
    else
      v8 = MinecraftGame::getMainSceneStack(v7);
      v9 = MinecraftGame::getPrimarySceneFactory(*v3);
      sub_119C884((void **)&v51, "progressScreen.message.importing");
      sub_119C884((void **)&v50, "import_file_association");
      SceneFactory::createImportExportProgressScreen((unsigned __int64 *)&v52, v9, &v51, COERCE_FLOAT(&v50));
      SceneStack::pushScreen(v8, (int)&v52, 0);
      v10 = v53;
      if ( v53 )
      {
        v11 = (unsigned int *)(v53 + 4);
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
      }
      v15 = (void *)(v50 - 12);
      if ( (int *)(v50 - 12) != &dword_28898C0 )
        v36 = (unsigned int *)(v50 - 4);
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v15);
      v16 = (void *)(v51 - 12);
      if ( (int *)(v51 - 12) != &dword_28898C0 )
        v38 = (unsigned int *)(v51 - 4);
            v39 = __ldrex(v38);
          while ( __strex(v39 - 1, v38) );
          v39 = (*v38)--;
        if ( v39 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v16);
  }
  v40 = v3;
  v17 = MinecraftGame::getLevelArchiver(*v3);
  v41 = *(_DWORD *)v2;
  v18 = *(_DWORD *)(v2 + 4);
  v42 = v18;
  if ( v18 )
    v19 = (unsigned int *)(v18 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 + 1, v19) );
      ++*v19;
  sub_119C854(&v43, (int *)(v2 + 8));
  v44 = *(_WORD *)(v2 + 12);
  v46 = 0;
  v21 = operator new(0x14u);
  *(_DWORD *)v21 = v40;
  *((_DWORD *)v21 + 1) = v41;
  *((_DWORD *)v21 + 2) = v42;
  if ( v42 )
    v22 = (unsigned int *)(v42 + 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 + 1, v22) );
      ++*v22;
  sub_119C854((int *)v21 + 3, &v43);
  *((_WORD *)v21 + 8) = v44;
  v45 = v21;
  v46 = (void (*)(void))sub_10FCB18;
  v47 = sub_10FC450;
  LevelArchiver::importLevel((int)&v48, v17, (int *)(v2 + 8), (int)&v45);
  if ( v46 )
    v46();
  v24 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v43 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
    v25 = (unsigned int *)(v42 + 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 == 1 )
      v27 = (unsigned int *)(v42 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 8))(v42);
      if ( &pthread_create )
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
      else
        v28 = (*v27)--;
      if ( v28 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 12))(v42);
  v29 = v49;
  if ( v49 )
    v30 = (unsigned int *)(v49 + 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 == 1 )
      v32 = (unsigned int *)(v29 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 8))(v29);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 12))(v29);
}


void __fastcall LevelLoader::setLevelForLoad(LevelLoader *this, const LevelSummary *a2)
{
  LevelLoader::setLevelForLoad(this, a2);
}


void __fastcall LevelLoader::_navigateToDisconnectScreen(MinecraftGame **a1, int *a2, int *a3)
{
  MinecraftGame **v3; // r6@1
  int *v4; // r8@1
  int *v5; // r5@1
  int v6; // r7@1
  int v7; // r0@1
  int v8; // r7@1
  unsigned int *v9; // r1@2
  unsigned int v10; // r0@4
  unsigned int *v11; // r4@8
  unsigned int v12; // r0@10
  int v13; // r7@15
  int v14; // r6@15
  int *v15; // r0@15
  int v16; // r4@15
  unsigned int *v17; // r1@16
  unsigned int v18; // r0@18
  unsigned int *v19; // r5@22
  unsigned int v20; // r0@24
  void *v21; // r0@29
  unsigned int *v22; // r2@31
  signed int v23; // r1@33
  int v24; // [sp+8h] [bp-30h]@15
  char v25; // [sp+Ch] [bp-2Ch]@15
  int v26; // [sp+10h] [bp-28h]@15
  char v27; // [sp+14h] [bp-24h]@1
  int v28; // [sp+18h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = MinecraftGame::getMainSceneStack(*a1);
  v7 = MinecraftGame::getPrimarySceneFactory(*v3);
  SceneFactory::createStartMenuScreen((SceneFactory *)&v27, v7);
  SceneStack::pushScreen(v6, (int)&v27, 1);
  v8 = v28;
  if ( v28 )
  {
    v9 = (unsigned int *)(v28 + 4);
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
  v13 = MinecraftGame::getMainSceneStack(*v3);
  v14 = MinecraftGame::getPrimarySceneFactory(*v3);
  v15 = (int *)sub_119C884((void **)&v24, (const char *)&unk_257BC67);
  SceneFactory::createDisconnectScreen((unsigned __int64 *)&v25, v14, v5, v4, v15);
  SceneStack::pushScreen(v13, (int)&v25, 0);
  v16 = v26;
  if ( v26 )
    v17 = (unsigned int *)(v26 + 4);
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
  v21 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v24 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
}


void __fastcall LevelLoader::_navigateToDisconnectScreen(MinecraftGame **a1, int *a2, int *a3)
{
  LevelLoader::_navigateToDisconnectScreen(a1, a2, a3);
}


int __fastcall LevelLoader::LevelLoader(int result, int a2)
{
  *(_DWORD *)result = a2;
  *(_BYTE *)(result + 20) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 24) = &unk_28898CC;
  return result;
}


const void **__fastcall LevelLoader::checkForPendingLevelLoad(LevelLoader *this)
{
  LevelLoader *v1; // r4@1
  ClientInstance *v2; // r0@1
  Minecraft *v3; // r0@1
  int v4; // r0@1
  LevelSummary *v5; // r1@1
  int v6; // r5@1
  MinecraftGame *v7; // r6@5
  LevelSettings *v8; // r0@5
  int v9; // r7@5
  void *v10; // r0@5
  void *v11; // r0@6
  void *v12; // r0@7
  LevelSummary *v13; // r0@8
  LevelSummary *v14; // r0@9
  int *v15; // r6@10
  const void **result; // r0@10
  int v17; // r5@14
  int v18; // r0@14
  int v19; // r4@14
  unsigned int *v20; // r1@15
  unsigned int v21; // r0@17
  unsigned int *v22; // r5@21
  unsigned int v23; // r0@23
  unsigned int *v24; // r2@30
  signed int v25; // r1@32
  unsigned int *v26; // r2@34
  signed int v27; // r1@36
  unsigned int *v28; // r2@38
  signed int v29; // r1@40
  char v30; // [sp+Ch] [bp-F4h]@14
  int v31; // [sp+10h] [bp-F0h]@14
  char v32; // [sp+14h] [bp-ECh]@5
  int v33; // [sp+DCh] [bp-24h]@5
  int v34; // [sp+E0h] [bp-20h]@5
  int v35; // [sp+E4h] [bp-1Ch]@5

  v1 = this;
  v2 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)this);
  v3 = (Minecraft *)ClientInstance::getServerData(v2);
  v4 = Minecraft::getLevel(v3);
  v5 = (LevelSummary *)*((_DWORD *)v1 + 4);
  v6 = v4;
  if ( v5 )
  {
    if ( v4 )
    {
      MinecraftGame::requestLeaveGame(*(MinecraftGame **)v1, 1, 0);
      v5 = (LevelSummary *)*((_DWORD *)v1 + 4);
    }
    if ( LevelLoader::_checkLevelCompatibility(v1, v5) == 1 )
      v7 = *(MinecraftGame **)v1;
      sub_119C854(&v35, *((int **)v1 + 4));
      sub_119C854(&v34, (int *)(*((_DWORD *)v1 + 4) + 4));
      sub_119C854(&v33, (int *)(*((_DWORD *)v1 + 4) + 56));
      v9 = *(_BYTE *)(*((_DWORD *)v1 + 4) + 40) != 0;
      v8 = (LevelSettings *)LevelSettings::LevelSettings((LevelSettings *)&v32);
      MinecraftGame::startLocalServer((int)v7, &v35, &v34, &v33, v9, v8);
      LevelSettings::~LevelSettings((LevelSettings *)&v32);
      v10 = (void *)(v33 - 12);
      if ( (int *)(v33 - 12) != &dword_28898C0 )
      {
        v24 = (unsigned int *)(v33 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v10);
      }
      v11 = (void *)(v34 - 12);
      if ( (int *)(v34 - 12) != &dword_28898C0 )
        v26 = (unsigned int *)(v34 - 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v11);
      v12 = (void *)(v35 - 12);
      if ( (int *)(v35 - 12) != &dword_28898C0 )
        v28 = (unsigned int *)(v35 - 4);
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          v29 = (*v28)--;
        if ( v29 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v12);
    v13 = (LevelSummary *)*((_DWORD *)v1 + 4);
    *((_DWORD *)v1 + 4) = 0;
    if ( v13 )
      v14 = LevelSummary::~LevelSummary(v13);
      operator delete((void *)v14);
  }
  v15 = (int *)((char *)v1 + 24);
  result = *(const void ***)(*((_DWORD *)v1 + 6) - 12);
  if ( result )
    if ( v6 )
    result = (const void **)MinecraftGame::isPrimaryUserSigninInProgress(*(MinecraftGame **)v1);
    if ( !result )
      v17 = MinecraftGame::getMainSceneStack(*(MinecraftGame **)v1);
      v18 = MinecraftGame::getPrimarySceneFactory(*(MinecraftGame **)v1);
      SceneFactory::createRealmsSharingLauncherScreen((unsigned __int64 *)&v30, v18, v15);
      SceneStack::pushScreen(v17, (int)&v30, 0);
      v19 = v31;
      if ( v31 )
        v20 = (unsigned int *)(v31 + 4);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 == 1 )
          v22 = (unsigned int *)(v19 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
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
            (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
      result = sub_119CAD8((void **)v15, (char *)&unk_257BC67, 0);
  return result;
}


void __fastcall LevelLoader::importLevel(MinecraftGame **a1, int a2)
{
  LevelLoader::importLevel(a1, a2);
}
