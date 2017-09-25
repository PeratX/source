

unsigned int __fastcall SceneFactory::createDropperScreen(SceneFactory *this, Player *a2, const BlockPos *a3, const BlockPos *a4)
{
  Player *v4; // r4@1
  unsigned __int64 *v5; // r8@1
  const BlockPos *v6; // r6@1
  Options *v7; // r0@1
  int v8; // r0@1
  signed int v9; // r1@1
  MinecraftGame *v10; // r7@3
  ClientInstance *v11; // r5@3
  void **v12; // r0@3
  void *v13; // r0@3
  unsigned int *v14; // r0@5
  unsigned int v15; // r1@7
  unsigned int result; // r0@10
  int v17; // r4@10
  unsigned int *v18; // r1@11
  unsigned int *v19; // r5@17
  int v20; // r4@24
  unsigned int *v21; // r1@25
  unsigned int *v22; // r5@31
  unsigned int *v23; // r2@39
  signed int v24; // r1@41
  int v25; // [sp+14h] [bp-3Ch]@4
  int v26; // [sp+18h] [bp-38h]@4
  int v27; // [sp+1Ch] [bp-34h]@3
  int v28; // [sp+24h] [bp-2Ch]@3
  int v29; // [sp+28h] [bp-28h]@3
  int v30; // [sp+2Ch] [bp-24h]@4
  int v31; // [sp+30h] [bp-20h]@3

  v4 = a2;
  v5 = (unsigned __int64 *)this;
  v6 = a4;
  v7 = (Options *)ClientInstance::getOptions(*((ClientInstance **)a2 + 2));
  v8 = Options::getUIProfile(v7);
  v9 = 0;
  if ( !v8 )
    v9 = 1;
  v31 = v9;
  v10 = *(MinecraftGame **)v4;
  v11 = (ClientInstance *)*((_DWORD *)v4 + 2);
  v12 = sub_DA7364((void **)&v28, "redstone.dropper_screen");
  v27 = 1;
  createScreen<ClientInstanceScreenModel,RedstoneScreenController,BlockPos const&,RedstoneScreenType,InteractionModel &>(
    &v29,
    (int)v4,
    v10,
    v11,
    (const char **)v12,
    v6,
    &v27,
    &v31);
  v13 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v28 - 4);
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
      j_j_j_j_j__ZdlPv_9(v13);
  }
  v25 = v29;
  v26 = v30;
  if ( v30 )
    v14 = (unsigned int *)(v30 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  result = SceneFactory::_createScreen(v5, (int)v4, (unsigned __int64 *)&v25);
  v17 = v26;
  if ( v26 )
    v18 = (unsigned int *)(v26 + 4);
        result = __ldrex(v18);
      while ( __strex(result - 1, v18) );
      result = (*v18)--;
    if ( result == 1 )
      v19 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v19);
        while ( __strex(result - 1, v19) );
      }
      else
        result = (*v19)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  v20 = v30;
    v21 = (unsigned int *)(v30 + 4);
        result = __ldrex(v21);
      while ( __strex(result - 1, v21) );
      result = (*v21)--;
      v22 = (unsigned int *)(v20 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
          result = __ldrex(v22);
        while ( __strex(result - 1, v22) );
        result = (*v22)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
  return result;
}


void __fastcall SceneFactory::createOptionsScreen(unsigned __int64 *a1, int a2, int a3, char a4)
{
  SceneFactory::createOptionsScreen(a1, a2, a3, a4);
}


int __fastcall SceneFactory::createImportExportProgressScreen(unsigned __int64 *a1, int a2, int *a3, float a4)
{
  unsigned __int64 *v4; // r6@1
  int v5; // r5@1
  float v6; // r4@1
  char *v7; // r0@1
  int result; // r0@2
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  char *v11; // [sp+Ch] [bp-24h]@1
  __int64 v12; // [sp+10h] [bp-20h]@1

  v4 = a1;
  v5 = a2;
  v6 = a4;
  std::make_unique<ImportExportProgressHandler,std::string const&>((_DWORD *)&v12 + 1, a3);
  v12 = HIDWORD(v12);
  v11 = (char *)&unk_28898CC;
  SceneFactory::createProgressScreen(v4, v5, v6, (int *)&v12, 0, (int *)&v11);
  v7 = v11 - 12;
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
      j_j_j_j_j__ZdlPv_9(v7);
  }
  result = v12;
  if ( (_DWORD)v12 )
    result = (*(int (**)(void))(*(_DWORD *)v12 + 4))();
  return result;
}


unsigned int __fastcall SceneFactory::createSignScreen(SceneFactory *this, const BlockPos *a2, int a3)
{
  MinecraftGame **v3; // r4@1
  MinecraftGame *v4; // r6@1
  int v5; // r5@1
  ClientInstance *v6; // r7@1
  unsigned __int64 *v7; // r8@1
  void *v8; // r0@1
  unsigned int *v9; // r0@3
  unsigned int v10; // r1@5
  unsigned int result; // r0@8
  int v12; // r4@8
  unsigned int *v13; // r1@9
  unsigned int *v14; // r5@15
  int v15; // r4@22
  unsigned int *v16; // r1@23
  unsigned int *v17; // r5@29
  unsigned int *v18; // r2@37
  signed int v19; // r1@39
  int v20; // [sp+Ch] [bp-3Ch]@2
  int v21; // [sp+10h] [bp-38h]@2
  int v22; // [sp+14h] [bp-34h]@1
  int v23; // [sp+1Ch] [bp-2Ch]@1
  int v24; // [sp+20h] [bp-28h]@1
  int v25; // [sp+24h] [bp-24h]@2

  v3 = (MinecraftGame **)a2;
  v4 = *(MinecraftGame **)a2;
  v5 = a3;
  v6 = (ClientInstance *)*((_DWORD *)a2 + 2);
  v7 = (unsigned __int64 *)this;
  sub_DA7364((void **)&v23, "sign.sign_screen");
  v22 = MinecraftGame::getFont(*v3);
  createScreen<ClientInstanceScreenModel,SignScreenController,BlockPos const&,Font *>(
    &v24,
    (int)v3,
    v4,
    v6,
    (const char **)&v23,
    v5,
    &v22);
  v8 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v23 - 4);
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
      j_j_j_j_j__ZdlPv_9(v8);
  }
  v20 = v24;
  v21 = v25;
  if ( v25 )
    v9 = (unsigned int *)(v25 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
      ++*v9;
  result = SceneFactory::_createScreen(v7, (int)v3, (unsigned __int64 *)&v20);
  v12 = v21;
  if ( v21 )
    v13 = (unsigned int *)(v21 + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  v15 = v25;
    v16 = (unsigned int *)(v25 + 4);
        result = __ldrex(v16);
      while ( __strex(result - 1, v16) );
      result = (*v16)--;
      v17 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          result = __ldrex(v17);
        while ( __strex(result - 1, v17) );
        result = (*v17)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  return result;
}


unsigned int __fastcall SceneFactory::createRealmsWarningScreen(unsigned __int64 *a1, int a2, const Realms::World *a3, int *a4, int a5)
{
  unsigned __int64 *v5; // r8@1
  int v6; // r9@1
  int *v7; // r6@1
  MinecraftGame *v8; // r7@1
  const Realms::World *v9; // r4@1
  ClientInstance *v10; // r5@1
  void **v11; // r0@1
  void *v12; // r0@1
  unsigned int *v13; // r0@3
  unsigned int v14; // r1@5
  unsigned int result; // r0@8
  int v16; // r4@8
  unsigned int *v17; // r1@9
  unsigned int *v18; // r5@15
  int v19; // r4@22
  unsigned int *v20; // r1@23
  unsigned int *v21; // r5@29
  unsigned int *v22; // r2@37
  signed int v23; // r1@39
  int v24; // [sp+14h] [bp-3Ch]@2
  int v25; // [sp+18h] [bp-38h]@2
  int v26; // [sp+20h] [bp-30h]@1
  int v27; // [sp+24h] [bp-2Ch]@1
  int v28; // [sp+28h] [bp-28h]@2
  int v29; // [sp+2Ch] [bp-24h]@1

  v5 = a1;
  v6 = a2;
  v29 = a5;
  v7 = a4;
  v8 = *(MinecraftGame **)a2;
  v9 = a3;
  v10 = *(ClientInstance **)(a2 + 8);
  v11 = sub_DA7364((void **)&v26, "disconnect.realms_warning_screen");
  createScreen<MinecraftScreenModel,RealmsWarningScreenController,Realms::World const&,std::string const&,int &>(
    &v27,
    v6,
    v8,
    v10,
    (const char **)v11,
    v9,
    v7,
    &v29);
  v12 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v26 - 4);
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
      j_j_j_j_j__ZdlPv_9(v12);
  }
  v24 = v27;
  v25 = v28;
  if ( v28 )
    v13 = (unsigned int *)(v28 + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 + 1, v13) );
      ++*v13;
  result = SceneFactory::_createScreen(v5, v6, (unsigned __int64 *)&v24);
  v16 = v25;
  if ( v25 )
    v17 = (unsigned int *)(v25 + 4);
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
      result = (*v17)--;
    if ( result == 1 )
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
      }
      else
        result = (*v18)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  v19 = v28;
    v20 = (unsigned int *)(v28 + 4);
        result = __ldrex(v20);
      while ( __strex(result - 1, v20) );
      result = (*v20)--;
      v21 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          result = __ldrex(v21);
        while ( __strex(result - 1, v21) );
        result = (*v21)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  return result;
}


unsigned int __fastcall SceneFactory::createDlcProgressScreen(unsigned __int64 *a1, int a2, unsigned __int64 *a3, int a4, char a5)
{
  unsigned __int64 *v5; // r8@1
  int v6; // r9@1
  int v7; // r6@1
  MinecraftGame *v8; // r7@1
  unsigned __int64 *v9; // r4@1
  ClientInstance *v10; // r5@1
  void **v11; // r0@1
  void *v12; // r0@1
  unsigned int *v13; // r0@3
  unsigned int v14; // r1@5
  unsigned int result; // r0@8
  int v16; // r4@8
  unsigned int *v17; // r1@9
  unsigned int *v18; // r5@15
  int v19; // r4@22
  unsigned int *v20; // r1@23
  unsigned int *v21; // r5@29
  unsigned int *v22; // r2@37
  signed int v23; // r1@39
  int v24; // [sp+14h] [bp-3Ch]@2
  int v25; // [sp+18h] [bp-38h]@2
  int v26; // [sp+20h] [bp-30h]@1
  int v27; // [sp+24h] [bp-2Ch]@1
  int v28; // [sp+28h] [bp-28h]@2
  char v29; // [sp+2Fh] [bp-21h]@1

  v5 = a1;
  v6 = a2;
  v29 = a5;
  v7 = a4;
  v8 = *(MinecraftGame **)a2;
  v9 = a3;
  v10 = *(ClientInstance **)(a2 + 8);
  v11 = sub_DA7364((void **)&v26, "file_upload.file_transmission_screen");
  createScreen<MainMenuScreenModel,DlcProgressScreenController,std::vector<std::string,std::allocator<std::string>> const&,std::function<void ()(bool)> &,bool &>(
    &v27,
    v6,
    v8,
    v10,
    (const char **)v11,
    v9,
    v7,
    &v29);
  v12 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v26 - 4);
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
      j_j_j_j_j__ZdlPv_9(v12);
  }
  v24 = v27;
  v25 = v28;
  if ( v28 )
    v13 = (unsigned int *)(v28 + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 + 1, v13) );
      ++*v13;
  result = SceneFactory::_createScreen(v5, v6, (unsigned __int64 *)&v24);
  v16 = v25;
  if ( v25 )
    v17 = (unsigned int *)(v25 + 4);
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
      result = (*v17)--;
    if ( result == 1 )
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
      }
      else
        result = (*v18)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  v19 = v28;
    v20 = (unsigned int *)(v28 + 4);
        result = __ldrex(v20);
      while ( __strex(result - 1, v20) );
      result = (*v20)--;
      v21 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          result = __ldrex(v21);
        while ( __strex(result - 1, v21) );
        result = (*v21)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  return result;
}


int __fastcall SceneFactory::createFileCopyProgressScreen(unsigned __int64 *a1, int a2, int *a3, int a4, int a5, int *a6, char a7, int a8)
{
  int *v8; // r4@1
  int v9; // r7@1
  unsigned __int64 *v10; // r6@1
  char *v11; // r0@1
  int result; // r0@2
  unsigned int *v13; // r2@5
  signed int v14; // r1@7
  char *v15; // [sp+10h] [bp-28h]@1
  __int64 v16; // [sp+14h] [bp-24h]@1
  char v17; // [sp+1Eh] [bp-1Ah]@1
  char v18; // [sp+1Fh] [bp-19h]@1

  v8 = a3;
  v9 = a2;
  v10 = a1;
  v18 = a5;
  v17 = a7;
  std::make_unique<FileCopyProgressHandler,std::string const&,ResourceLocation const&,bool &,std::string const&,bool &,std::function<void ()(bool)> &>(
    (_DWORD *)&v16 + 1,
    a3,
    a4,
    &v18,
    a6,
    &v17,
    a8);
  v16 = HIDWORD(v16);
  v15 = (char *)&unk_28898CC;
  SceneFactory::createProgressScreen(v10, v9, *(float *)&v8, (int *)&v16, 0, (int *)&v15);
  v11 = v15 - 12;
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
      j_j_j_j_j__ZdlPv_9(v11);
  }
  result = v16;
  if ( (_DWORD)v16 )
    result = (*(int (**)(void))(*(_DWORD *)v16 + 4))();
  return result;
}


void __fastcall SceneFactory::createServerForm(unsigned __int64 *a1, int a2, int a3, int *a4)
{
  SceneFactory::createServerForm(a1, a2, a3, a4);
}


void __fastcall SceneFactory::createRemixUploadScreen(unsigned __int64 *a1, int a2, int a3)
{
  int v3; // r4@1
  MinecraftGame *v4; // r6@1
  int v5; // r5@1
  ClientInstance *v6; // r7@1
  unsigned __int64 *v7; // r8@1
  void **v8; // r0@1
  int v9; // r4@1
  unsigned int *v10; // r1@2
  unsigned int v11; // r0@4
  unsigned int *v12; // r5@8
  unsigned int v13; // r0@10
  void *v14; // r0@15
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  int v17; // [sp+Ch] [bp-2Ch]@1
  char v18; // [sp+10h] [bp-28h]@1
  int v19; // [sp+14h] [bp-24h]@1

  v3 = a2;
  v4 = *(MinecraftGame **)a2;
  v5 = a3;
  v6 = *(ClientInstance **)(a2 + 8);
  v7 = a1;
  v8 = sub_DA7364((void **)&v17, "file_upload.file_transmission_screen");
  createScreen<MinecraftScreenModel,RemixUploadScreenController,std::shared_ptr<RemixProgressTracker> &>(
    &v18,
    v3,
    v4,
    v6,
    (const char **)v8,
    v5);
  SceneFactory::_createScreen(v7, v3, (unsigned __int64 *)&v18);
  v9 = v19;
  if ( v19 )
  {
    v10 = (unsigned int *)(v19 + 4);
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
  }
  v14 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
}


unsigned int __fastcall SceneFactory::createUserManagementModalScreen(unsigned __int64 *a1, int a2, int a3, int a4)
{
  int v4; // r9@1
  MinecraftGame *v5; // r6@1
  int v6; // r5@1
  ClientInstance *v7; // r7@1
  int v8; // r4@1
  unsigned __int64 *v9; // r8@1
  void **v10; // r0@1
  void *v11; // r0@1
  unsigned int *v12; // r0@3
  unsigned int v13; // r1@5
  unsigned int result; // r0@8
  int v15; // r4@8
  unsigned int *v16; // r1@9
  unsigned int *v17; // r5@15
  int v18; // r4@22
  unsigned int *v19; // r1@23
  unsigned int *v20; // r5@29
  unsigned int *v21; // r2@37
  signed int v22; // r1@39
  int v23; // [sp+10h] [bp-38h]@2
  int v24; // [sp+14h] [bp-34h]@2
  int v25; // [sp+1Ch] [bp-2Ch]@1
  int v26; // [sp+20h] [bp-28h]@1
  int v27; // [sp+24h] [bp-24h]@2

  v4 = a2;
  v5 = *(MinecraftGame **)a2;
  v6 = a4;
  v7 = *(ClientInstance **)(a2 + 8);
  v8 = a3;
  v9 = a1;
  v10 = sub_DA7364((void **)&v25, "non_xbl_user_management.user_confirm_dialog_screen");
  createScreen<MinecraftScreenModel,UserManagementScreenController,UserManagementModalScreenData const&,std::function<void ()(bool)> &>(
    &v26,
    v4,
    v5,
    v7,
    (const char **)v10,
    v8,
    v6);
  v11 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v25 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  }
  v23 = v26;
  v24 = v27;
  if ( v27 )
    v12 = (unsigned int *)(v27 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
      ++*v12;
  result = SceneFactory::_createScreen(v9, v4, (unsigned __int64 *)&v23);
  v15 = v24;
  if ( v24 )
    v16 = (unsigned int *)(v24 + 4);
        result = __ldrex(v16);
      while ( __strex(result - 1, v16) );
      result = (*v16)--;
    if ( result == 1 )
      v17 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v17);
        while ( __strex(result - 1, v17) );
      }
      else
        result = (*v17)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  v18 = v27;
    v19 = (unsigned int *)(v27 + 4);
        result = __ldrex(v19);
      while ( __strex(result - 1, v19) );
      result = (*v19)--;
      v20 = (unsigned int *)(v18 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
          result = __ldrex(v20);
        while ( __strex(result - 1, v20) );
        result = (*v20)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
  return result;
}


void __fastcall SceneFactory::createRealmsPendingInvitesScreen(SceneFactory *this, int a2, char a3)
{
  int v3; // r4@1
  unsigned __int64 *v4; // r5@1
  MinecraftGame *v5; // r6@1
  ClientInstance *v6; // r7@1
  void **v7; // r0@1
  int v8; // r4@1
  unsigned int *v9; // r1@2
  unsigned int v10; // r0@4
  unsigned int *v11; // r5@8
  unsigned int v12; // r0@10
  void *v13; // r0@15
  unsigned int *v14; // r2@17
  signed int v15; // r1@19
  int v16; // [sp+10h] [bp-28h]@1
  char v17; // [sp+14h] [bp-24h]@1
  int v18; // [sp+18h] [bp-20h]@1
  char v19; // [sp+1Fh] [bp-19h]@1

  v3 = a2;
  v19 = a3;
  v4 = (unsigned __int64 *)this;
  v5 = *(MinecraftGame **)a2;
  v6 = *(ClientInstance **)(a2 + 8);
  v7 = sub_DA7364((void **)&v16, "realms_pending_invitations.realms_pending_invitations_screen");
  createScreen<MainMenuScreenModel,RealmsPendingInvitationsScreenController,bool &>(
    &v17,
    v3,
    v5,
    v6,
    (const char **)v7,
    &v19);
  SceneFactory::_createScreen(v4, v3, (unsigned __int64 *)&v17);
  v8 = v18;
  if ( v18 )
  {
    v9 = (unsigned int *)(v18 + 4);
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
  v13 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
}


void __fastcall SceneFactory::createStoreHomeScreen(unsigned __int64 *a1, int a2, int *a3)
{
  unsigned __int64 *v3; // r8@1
  int *v4; // r6@1
  int v5; // r4@1
  const void **v6; // r7@1
  int v7; // r4@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r5@8
  unsigned int v11; // r0@10
  char *v12; // r0@15
  unsigned int *v13; // r2@17
  signed int v14; // r1@19
  char v15; // [sp+8h] [bp-30h]@1
  int v16; // [sp+Ch] [bp-2Ch]@1
  char *v17; // [sp+10h] [bp-28h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (const void **)StoreCatalogRepository::getStoreScreenName((StoreCatalogRepository *)&dword_28898C0);
  v17 = (char *)&unk_28898CC;
  sub_DA7404((const void **)&v17, *((_DWORD *)*v6 - 3) + 11);
  sub_DA73D4((const void **)&v17, "store_home.", 0xBu);
  sub_DA7564((const void **)&v17, v6);
  createScreen<MainMenuScreenModel,StoreHomeScreenController,std::string const&>(
    &v15,
    v5,
    *(MinecraftGame **)v5,
    *(ClientInstance **)(v5 + 8),
    (const char **)&v17,
    v4);
  SceneFactory::_createScreen(v3, v5, (unsigned __int64 *)&v15);
  v7 = v16;
  if ( v16 )
  {
    v8 = (unsigned int *)(v16 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  v12 = v17 - 12;
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v17 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
}


void __fastcall SceneFactory::createStructureEditor(SceneFactory *this, const BlockPos *a2, int a3)
{
  SceneFactory::createStructureEditor(this, a2, a3);
}


void __fastcall SceneFactory::createStoreHomeScreen(unsigned __int64 *a1, int a2, int *a3)
{
  SceneFactory::createStoreHomeScreen(a1, a2, a3);
}


unsigned int __fastcall SceneFactory::createAnvilScreen(SceneFactory *this, Player *a2, const BlockPos *a3, const BlockPos *a4)
{
  Player *v4; // r4@1
  unsigned __int64 *v5; // r8@1
  const BlockPos *v6; // r6@1
  Options *v7; // r0@1
  int v8; // r0@1
  signed int v9; // r1@1
  MinecraftGame *v10; // r7@3
  ClientInstance *v11; // r5@3
  void **v12; // r0@3
  void *v13; // r0@3
  unsigned int *v14; // r0@5
  unsigned int v15; // r1@7
  unsigned int result; // r0@10
  int v17; // r4@10
  unsigned int *v18; // r1@11
  unsigned int *v19; // r5@17
  int v20; // r4@24
  unsigned int *v21; // r1@25
  unsigned int *v22; // r5@31
  unsigned int *v23; // r2@39
  signed int v24; // r1@41
  int v25; // [sp+10h] [bp-38h]@4
  int v26; // [sp+14h] [bp-34h]@4
  int v27; // [sp+1Ch] [bp-2Ch]@3
  int v28; // [sp+20h] [bp-28h]@3
  int v29; // [sp+24h] [bp-24h]@4
  int v30; // [sp+28h] [bp-20h]@3

  v4 = a2;
  v5 = (unsigned __int64 *)this;
  v6 = a4;
  v7 = (Options *)ClientInstance::getOptions(*((ClientInstance **)a2 + 2));
  v8 = Options::getUIProfile(v7);
  v9 = 0;
  if ( !v8 )
    v9 = 1;
  v30 = v9;
  v10 = *(MinecraftGame **)v4;
  v11 = (ClientInstance *)*((_DWORD *)v4 + 2);
  v12 = sub_DA7364((void **)&v27, "anvil.anvil_screen");
  createScreen<ClientInstanceScreenModel,AnvilScreenController,BlockPos const&,InteractionModel &>(
    &v28,
    (int)v4,
    v10,
    v11,
    (const char **)v12,
    v6,
    &v30);
  v13 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v27 - 4);
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
      j_j_j_j_j__ZdlPv_9(v13);
  }
  v25 = v28;
  v26 = v29;
  if ( v29 )
    v14 = (unsigned int *)(v29 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  result = SceneFactory::_createScreen(v5, (int)v4, (unsigned __int64 *)&v25);
  v17 = v26;
  if ( v26 )
    v18 = (unsigned int *)(v26 + 4);
        result = __ldrex(v18);
      while ( __strex(result - 1, v18) );
      result = (*v18)--;
    if ( result == 1 )
      v19 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v19);
        while ( __strex(result - 1, v19) );
      }
      else
        result = (*v19)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  v20 = v29;
    v21 = (unsigned int *)(v29 + 4);
        result = __ldrex(v21);
      while ( __strex(result - 1, v21) );
      result = (*v21)--;
      v22 = (unsigned int *)(v20 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
          result = __ldrex(v22);
        while ( __strex(result - 1, v22) );
        result = (*v22)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
  return result;
}


unsigned int __fastcall SceneFactory::createLateJoinPreGameScreen(unsigned __int64 *a1, int a2, int a3)
{
  int v3; // r4@1
  MinecraftGame *v4; // r6@1
  int v5; // r5@1
  ClientInstance *v6; // r7@1
  unsigned __int64 *v7; // r8@1
  void **v8; // r0@1
  void *v9; // r0@1
  unsigned int *v10; // r0@3
  unsigned int v11; // r1@5
  unsigned int result; // r0@8
  int v13; // r4@8
  unsigned int *v14; // r1@9
  unsigned int *v15; // r5@15
  int v16; // r4@22
  unsigned int *v17; // r1@23
  unsigned int *v18; // r5@29
  unsigned int *v19; // r2@37
  signed int v20; // r1@39
  int v21; // [sp+Ch] [bp-34h]@2
  int v22; // [sp+10h] [bp-30h]@2
  int v23; // [sp+18h] [bp-28h]@1
  int v24; // [sp+1Ch] [bp-24h]@1
  int v25; // [sp+20h] [bp-20h]@2

  v3 = a2;
  v4 = *(MinecraftGame **)a2;
  v5 = a3;
  v6 = *(ClientInstance **)(a2 + 8);
  v7 = a1;
  v8 = sub_DA7364((void **)&v23, "late_join.late_join_pregame_screen");
  createScreen<MinecraftScreenModel,LateJoinPreGameScreenController,std::function<void ()(void)> const&>(
    &v24,
    v3,
    v4,
    v6,
    (const char **)v8,
    v5);
  v9 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  }
  v21 = v24;
  v22 = v25;
  if ( v25 )
    v10 = (unsigned int *)(v25 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
      ++*v10;
  result = SceneFactory::_createScreen(v7, v3, (unsigned __int64 *)&v21);
  v13 = v22;
  if ( v22 )
    v14 = (unsigned int *)(v22 + 4);
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
      result = (*v14)--;
    if ( result == 1 )
      v15 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
      }
      else
        result = (*v15)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  v16 = v25;
    v17 = (unsigned int *)(v25 + 4);
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
      result = (*v17)--;
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
        result = (*v18)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  return result;
}


void __fastcall SceneFactory::createEditWorldScreen(SceneFactory *this, const LevelSummary *a2, int *a3)
{
  const LevelSummary *v3; // r4@1
  MinecraftGame *v4; // r6@1
  int *v5; // r5@1
  ClientInstance *v6; // r7@1
  unsigned __int64 *v7; // r8@1
  void **v8; // r0@1
  int v9; // r4@1
  unsigned int *v10; // r1@2
  unsigned int v11; // r0@4
  unsigned int *v12; // r5@8
  unsigned int v13; // r0@10
  void *v14; // r0@15
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  char v17; // [sp+13h] [bp-2Dh]@1
  int v18; // [sp+18h] [bp-28h]@1
  char v19; // [sp+1Ch] [bp-24h]@1
  int v20; // [sp+20h] [bp-20h]@1

  v3 = a2;
  v4 = *(MinecraftGame **)a2;
  v5 = a3;
  v6 = (ClientInstance *)*((_DWORD *)a2 + 2);
  v7 = (unsigned __int64 *)this;
  v8 = sub_DA7364((void **)&v18, "settings.screen_world_edit");
  v17 = 0;
  createScreen<MainMenuScreenModel,SettingsScreenController,LevelSummary const&,bool>(
    &v19,
    (int)v3,
    v4,
    v6,
    (const char **)v8,
    v5,
    &v17);
  SceneFactory::_createScreen(v7, (int)v3, (unsigned __int64 *)&v19);
  v9 = v20;
  if ( v20 )
  {
    v10 = (unsigned int *)(v20 + 4);
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
  }
  v14 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v18 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
}


void __fastcall SceneFactory::createRealmsSettingsScreen(SceneFactory *this, const Realms::World *a2, const Realms::World *a3)
{
  SceneFactory::createRealmsSettingsScreen(this, a2, a3);
}


void __fastcall SceneFactory::createServerItemPurchaseScreen(unsigned __int64 *a1, int a2, StoreCatalogItemModel *a3, int a4)
{
  SceneFactory::createServerItemPurchaseScreen(a1, a2, a3, a4);
}


unsigned int __fastcall SceneFactory::createPermissionsScreen(unsigned __int64 *a1, int a2, __int64 a3)
{
  int v3; // r4@1
  unsigned __int64 *v4; // r5@1
  MinecraftGame *v5; // r6@1
  ClientInstance *v6; // r7@1
  void **v7; // r0@1
  void *v8; // r0@1
  unsigned int *v9; // r0@3
  unsigned int v10; // r1@5
  unsigned int result; // r0@8
  int v12; // r4@8
  unsigned int *v13; // r1@9
  unsigned int *v14; // r5@15
  int v15; // r4@22
  unsigned int *v16; // r1@23
  unsigned int *v17; // r5@29
  unsigned int *v18; // r2@37
  signed int v19; // r1@39
  int v20; // [sp+8h] [bp-38h]@2
  int v21; // [sp+Ch] [bp-34h]@2
  int v22; // [sp+14h] [bp-2Ch]@1
  int v23; // [sp+18h] [bp-28h]@1
  int v24; // [sp+1Ch] [bp-24h]@2
  __int64 v25; // [sp+20h] [bp-20h]@1

  v3 = a2;
  v25 = a3;
  v4 = a1;
  v5 = *(MinecraftGame **)a2;
  v6 = *(ClientInstance **)(a2 + 8);
  v7 = sub_DA7364((void **)&v22, "permissions.permissions_screen");
  createScreen<ClientInstanceScreenModel,PermissionsScreenController,EntityUniqueID &>(
    &v23,
    v3,
    v5,
    v6,
    (const char **)v7,
    (unsigned __int64 *)&v25);
  v8 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v22 - 4);
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
      j_j_j_j_j__ZdlPv_9(v8);
  }
  v20 = v23;
  v21 = v24;
  if ( v24 )
    v9 = (unsigned int *)(v24 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
      ++*v9;
  result = SceneFactory::_createScreen(v4, v3, (unsigned __int64 *)&v20);
  v12 = v21;
  if ( v21 )
    v13 = (unsigned int *)(v21 + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  v15 = v24;
    v16 = (unsigned int *)(v24 + 4);
        result = __ldrex(v16);
      while ( __strex(result - 1, v16) );
      result = (*v16)--;
      v17 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          result = __ldrex(v17);
        while ( __strex(result - 1, v17) );
        result = (*v17)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  return result;
}


unsigned int __fastcall SceneFactory::createNoWifiWarningScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  unsigned int result; // r0@8
  int v11; // r4@8
  unsigned int *v12; // r1@9
  unsigned int *v13; // r5@15
  int v14; // r4@22
  unsigned int *v15; // r1@23
  unsigned int *v16; // r5@29
  unsigned int *v17; // r2@37
  signed int v18; // r1@39
  int v19; // [sp+8h] [bp-30h]@2
  int v20; // [sp+Ch] [bp-2Ch]@2
  int v21; // [sp+14h] [bp-24h]@1
  int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v21, "common.modal_screen");
  j__Z12createScreenI20MinecraftScreenModel29NoWifiWarningScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v22,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v19 = v22;
  v20 = v23;
  if ( v23 )
    v8 = (unsigned int *)(v23 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  result = SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v19);
  v11 = v20;
  if ( v20 )
    v12 = (unsigned int *)(v20 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v14 = v23;
    v15 = (unsigned int *)(v23 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return result;
}


unsigned int *__fastcall SceneFactory::createHolographicCursorScreen(SceneFactory *this, int a2)
{
  int v2; // r6@1
  MinecraftGame *v3; // r4@1
  SceneFactory *v4; // r8@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  __int64 v8; // kr00_8@2
  unsigned int *v9; // r0@3
  unsigned int v10; // r1@5
  ClientInstance *v11; // r5@8
  DefaultUIScreenSetupCleanupStrategy *v12; // r6@8
  unsigned int *result; // r0@8
  void (__fastcall *v14)(_DWORD, unsigned int **); // r2@9
  unsigned int v15; // r1@15
  unsigned int *v16; // r1@21
  unsigned int *v17; // r5@27
  int v18; // r4@34
  unsigned int *v19; // r1@35
  unsigned int *v20; // r5@41
  unsigned int *v21; // r2@49
  signed int v22; // r1@51
  int v23; // [sp+Ch] [bp-2Ch]@1
  char v24; // [sp+10h] [bp-28h]@1
  int v25; // [sp+14h] [bp-24h]@2
  unsigned int *v26; // [sp+18h] [bp-20h]@9

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v23, "ui_holo_cursor.ui_holo_cursor");
  j__Z12createScreenI20MinecraftScreenModel25MinecraftScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v24,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v8 = *(_QWORD *)&v24;
  if ( v25 )
    v9 = (unsigned int *)(v25 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
      ++*v9;
  v11 = *(ClientInstance **)(v2 + 8);
  v12 = (DefaultUIScreenSetupCleanupStrategy *)operator new(8u);
  result = (unsigned int *)DefaultUIScreenSetupCleanupStrategy::DefaultUIScreenSetupCleanupStrategy(v12, v11);
  if ( (_DWORD)v8 )
    v14 = *(void (__fastcall **)(_DWORD, unsigned int **))(*(_DWORD *)v8 + 272);
    v26 = (unsigned int *)v12;
    v14(v8, &v26);
    result = v26;
    if ( v26 )
      result = (unsigned int *)(*(int (**)(void))(*v26 + 4))();
    v12 = 0;
    v26 = 0;
  *(_QWORD *)v4 = v8;
  if ( HIDWORD(v8) )
    result = (unsigned int *)(HIDWORD(v8) + 4);
        v15 = __ldrex(result);
      while ( __strex(v15 + 1, result) );
      ++*result;
  if ( v12 )
    result = (unsigned int *)(*(int (__fastcall **)(DefaultUIScreenSetupCleanupStrategy *))(*(_DWORD *)v12 + 4))(v12);
    v16 = (unsigned int *)(HIDWORD(v8) + 4);
        result = (unsigned int *)__ldrex(v16);
      while ( __strex((unsigned int)result - 1, v16) );
      result = (unsigned int *)(*v16)--;
    if ( result == (unsigned int *)1 )
      v17 = (unsigned int *)(HIDWORD(v8) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v8) + 8))(HIDWORD(v8));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (unsigned int *)__ldrex(v17);
        while ( __strex((unsigned int)result - 1, v17) );
      }
      else
        result = (unsigned int *)(*v17)--;
      if ( result == (unsigned int *)1 )
        result = (unsigned int *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v8) + 12))(HIDWORD(v8));
  v18 = v25;
    v19 = (unsigned int *)(v25 + 4);
        result = (unsigned int *)__ldrex(v19);
      while ( __strex((unsigned int)result - 1, v19) );
      result = (unsigned int *)(*v19)--;
      v20 = (unsigned int *)(v18 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
          result = (unsigned int *)__ldrex(v20);
        while ( __strex((unsigned int)result - 1, v20) );
        result = (unsigned int *)(*v20)--;
        result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
  return result;
}


unsigned int __fastcall SceneFactory::createConnectGamepadScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  unsigned int result; // r0@8
  int v11; // r4@8
  unsigned int *v12; // r1@9
  unsigned int *v13; // r5@15
  int v14; // r4@22
  unsigned int *v15; // r1@23
  unsigned int *v16; // r5@29
  unsigned int *v17; // r2@37
  signed int v18; // r1@39
  int v19; // [sp+8h] [bp-30h]@2
  int v20; // [sp+Ch] [bp-2Ch]@2
  int v21; // [sp+14h] [bp-24h]@1
  int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v21, "common.modal_screen");
  j__Z12createScreenI20MinecraftScreenModel30ConnectGamepadScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v22,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v19 = v22;
  v20 = v23;
  if ( v23 )
    v8 = (unsigned int *)(v23 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  result = SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v19);
  v11 = v20;
  if ( v20 )
    v12 = (unsigned int *)(v20 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v14 = v23;
    v15 = (unsigned int *)(v23 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return result;
}


unsigned int __fastcall SceneFactory::createNoInvitesOrJoiningScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  unsigned int result; // r0@8
  int v11; // r4@8
  unsigned int *v12; // r1@9
  unsigned int *v13; // r5@15
  int v14; // r4@22
  unsigned int *v15; // r1@23
  unsigned int *v16; // r5@29
  unsigned int *v17; // r2@37
  signed int v18; // r1@39
  int v19; // [sp+8h] [bp-30h]@2
  int v20; // [sp+Ch] [bp-2Ch]@2
  int v21; // [sp+14h] [bp-24h]@1
  int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v21, "common.modal_screen");
  j__Z12createScreenI20MinecraftScreenModel34NoInvitesOrJoiningScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v22,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v19 = v22;
  v20 = v23;
  if ( v23 )
    v8 = (unsigned int *)(v23 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  result = SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v19);
  v11 = v20;
  if ( v20 )
    v12 = (unsigned int *)(v20 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v14 = v23;
    v15 = (unsigned int *)(v23 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return result;
}


unsigned int __fastcall SceneFactory::createConsoleScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  unsigned int result; // r0@8
  int v11; // r4@8
  unsigned int *v12; // r1@9
  unsigned int *v13; // r5@15
  int v14; // r4@22
  unsigned int *v15; // r1@23
  unsigned int *v16; // r5@29
  unsigned int *v17; // r2@37
  signed int v18; // r1@39
  int v19; // [sp+Ch] [bp-34h]@2
  int v20; // [sp+10h] [bp-30h]@2
  char v21; // [sp+17h] [bp-29h]@1
  int v22; // [sp+1Ch] [bp-24h]@1
  int v23; // [sp+20h] [bp-20h]@1
  int v24; // [sp+24h] [bp-1Ch]@2

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v22, "chat.chat_screen");
  v21 = 1;
  createScreen<ClientInstanceScreenModel,ChatScreenController,bool>(&v23, v2, v3, v5, (const char **)v6, &v21);
  v7 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v19 = v23;
  v20 = v24;
  if ( v24 )
    v8 = (unsigned int *)(v24 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  result = SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v19);
  v11 = v20;
  if ( v20 )
    v12 = (unsigned int *)(v20 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v14 = v24;
    v15 = (unsigned int *)(v24 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return result;
}


int __fastcall SceneFactory::generateGlobalVars(SceneFactory *a1, MinecraftGame **a2, const char **a3, int a4)
{
  MinecraftGame **v4; // r7@1
  SceneFactory *v5; // r4@1
  int v6; // r5@1
  const char **v7; // r6@1
  UIDefRepository *v8; // r0@1
  int v9; // r7@1
  int v11; // [sp+0h] [bp-28h]@1

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = (UIDefRepository *)MinecraftGame::getUIDefRepo(*a2);
  SceneFactory::createGlobalVars(v5, (UIDefRepository *)v4, v8);
  v9 = Json::Value::operator[](v5, "*screen_name*");
  Json::Value::Value((int)&v11, v7);
  Json::Value::operator=(v9, (const Json::Value *)&v11);
  Json::Value::~Value((Json::Value *)&v11);
  return (*(int (__fastcall **)(int, SceneFactory *))(*(_DWORD *)v6 + 80))(v6, v5);
}


unsigned int __fastcall SceneFactory::createProgressScreen(unsigned __int64 *a1, int a2, float a3, int *a4, char a5, int *a6)
{
  int v6; // r4@1
  unsigned __int64 *v7; // r8@1
  int *v8; // r9@1
  float v9; // r7@1
  MinecraftGame *v10; // r5@1
  ClientInstance *v11; // r6@1
  void *v12; // r0@4
  unsigned int *v13; // r0@6
  unsigned int v14; // r1@8
  unsigned int result; // r0@11
  int v16; // r4@11
  unsigned int *v17; // r1@12
  unsigned int *v18; // r5@18
  int v19; // r4@25
  unsigned int *v20; // r1@26
  unsigned int *v21; // r5@32
  unsigned int *v22; // r2@40
  signed int v23; // r1@42
  int v24; // [sp+14h] [bp-3Ch]@5
  int v25; // [sp+18h] [bp-38h]@5
  int v26; // [sp+20h] [bp-30h]@2
  int v27; // [sp+24h] [bp-2Ch]@4
  int v28; // [sp+28h] [bp-28h]@5
  char v29; // [sp+2Fh] [bp-21h]@1

  v6 = a2;
  v7 = a1;
  v8 = a4;
  v29 = a5;
  v9 = a3;
  v10 = *(MinecraftGame **)a2;
  v11 = *(ClientInstance **)(a2 + 8);
  if ( *(_DWORD *)(*a6 - 12) )
    sub_DA73B4(&v26, a6);
  else
    sub_DA7364((void **)&v26, "progress.world_loading_progress_screen");
  createScreen<MinecraftScreenModel,ProgressScreenController,std::string const&,std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,bool &>(
    &v27,
    v6,
    v10,
    v11,
    (const char **)&v26,
    v9,
    v8,
    &v29);
  v12 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v26 - 4);
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
      j_j_j_j_j__ZdlPv_9(v12);
  }
  v24 = v27;
  v25 = v28;
  if ( v28 )
    v13 = (unsigned int *)(v28 + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 + 1, v13) );
      ++*v13;
  result = SceneFactory::_createScreen(v7, v6, (unsigned __int64 *)&v24);
  v16 = v25;
  if ( v25 )
    v17 = (unsigned int *)(v25 + 4);
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
      result = (*v17)--;
    if ( result == 1 )
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
      }
      else
        result = (*v18)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  v19 = v28;
    v20 = (unsigned int *)(v28 + 4);
        result = __ldrex(v20);
      while ( __strex(result - 1, v20) );
      result = (*v20)--;
      v21 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          result = __ldrex(v21);
        while ( __strex(result - 1, v21) );
        result = (*v21)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  return result;
}


SceneFactory *__fastcall SceneFactory::~SceneFactory(SceneFactory *this)
{
  SceneFactory *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  v2 = *((_DWORD *)this + 3);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 3) = 0;
  return v1;
}


unsigned int __fastcall SceneFactory::createVRAlignScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  unsigned int result; // r0@8
  int v11; // r4@8
  unsigned int *v12; // r1@9
  unsigned int *v13; // r5@15
  int v14; // r4@22
  unsigned int *v15; // r1@23
  unsigned int *v16; // r5@29
  unsigned int *v17; // r2@37
  signed int v18; // r1@39
  int v19; // [sp+8h] [bp-30h]@2
  int v20; // [sp+Ch] [bp-2Ch]@2
  int v21; // [sp+14h] [bp-24h]@1
  int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v21, "vr_align_screen.vr_align_screen");
  j__Z12createScreenI20MinecraftScreenModel23VRAlignScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v22,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v19 = v22;
  v20 = v23;
  if ( v23 )
    v8 = (unsigned int *)(v23 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  result = SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v19);
  v11 = v20;
  if ( v20 )
    v12 = (unsigned int *)(v20 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v14 = v23;
    v15 = (unsigned int *)(v23 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return result;
}


void __fastcall SceneFactory::_createWorldSettingsScreenCache(SceneFactory *this)
{
  SceneFactory::_createWorldSettingsScreenCache(this);
}


unsigned int *__fastcall SceneFactory::createRealityModeTransitionScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  SceneFactory *v3; // r5@1
  int v4; // r7@1 OVERLAPPED
  int v5; // r8@1 OVERLAPPED
  ClientInstance *v6; // r4@1
  HoloRealitySetupCleanupStrategy *v7; // r6@1
  unsigned int *result; // r0@1
  void (__fastcall *v9)(int, unsigned int **); // r2@2
  unsigned int v10; // r1@8
  unsigned int *v11; // r1@14
  unsigned int *v12; // r4@20
  int v13; // r4@27
  unsigned int *v14; // r1@28
  unsigned int *v15; // r5@34
  int v16; // [sp+0h] [bp-28h]@1
  int v17; // [sp+4h] [bp-24h]@1
  char v18; // [sp+8h] [bp-20h]@1
  unsigned int *v19; // [sp+Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = this;
  std::__shared_ptr<InGameRealityTransitionScreen,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<InGameRealityTransitionScreen>,MinecraftGame &,ClientInstance &>(
    (int)&v16,
    (int)&v18,
    *(MinecraftGame **)v2,
    *(ClientInstance **)(v2 + 8));
  *(_QWORD *)&v4 = *(_QWORD *)&v16;
  v16 = 0;
  v17 = 0;
  v6 = *(ClientInstance **)(v2 + 8);
  v7 = (HoloRealitySetupCleanupStrategy *)operator new(0x48u);
  result = (unsigned int *)HoloRealitySetupCleanupStrategy::HoloRealitySetupCleanupStrategy(v7, v6);
  if ( v4 )
  {
    v9 = *(void (__fastcall **)(int, unsigned int **))(*(_DWORD *)v4 + 272);
    v19 = (unsigned int *)v7;
    v9(v4, &v19);
    result = v19;
    if ( v19 )
      result = (unsigned int *)(*(int (__cdecl **)(unsigned int *))(*v19 + 4))(v19);
    v7 = 0;
    v19 = 0;
  }
  *(_QWORD *)v3 = *(_QWORD *)&v4;
  if ( v5 )
    result = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(result);
      while ( __strex(v10 + 1, result) );
    }
    else
      ++*result;
  if ( v7 )
    result = (unsigned int *)(*(int (__fastcall **)(HoloRealitySetupCleanupStrategy *))(*(_DWORD *)v7 + 4))(v7);
    v11 = (unsigned int *)(v5 + 4);
        result = (unsigned int *)__ldrex(v11);
      while ( __strex((unsigned int)result - 1, v11) );
      result = (unsigned int *)(*v11)--;
    if ( result == (unsigned int *)1 )
      v12 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (unsigned int *)__ldrex(v12);
        while ( __strex((unsigned int)result - 1, v12) );
      }
      else
        result = (unsigned int *)(*v12)--;
      if ( result == (unsigned int *)1 )
        result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  v13 = v17;
  if ( v17 )
    v14 = (unsigned int *)(v17 + 4);
        result = (unsigned int *)__ldrex(v14);
      while ( __strex((unsigned int)result - 1, v14) );
      result = (unsigned int *)(*v14)--;
      v15 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
          result = (unsigned int *)__ldrex(v15);
        while ( __strex((unsigned int)result - 1, v15) );
        result = (unsigned int *)(*v15)--;
        result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  return result;
}


unsigned int __fastcall SceneFactory::createConvertPurchasesToXBLScreen(unsigned __int64 *a1, int a2, int a3)
{
  int v3; // r4@1
  MinecraftGame *v4; // r6@1
  int v5; // r5@1
  ClientInstance *v6; // r7@1
  unsigned __int64 *v7; // r8@1
  void **v8; // r0@1
  void *v9; // r0@1
  unsigned int *v10; // r0@3
  unsigned int v11; // r1@5
  unsigned int result; // r0@8
  int v13; // r4@8
  unsigned int *v14; // r1@9
  unsigned int *v15; // r5@15
  int v16; // r4@22
  unsigned int *v17; // r1@23
  unsigned int *v18; // r5@29
  unsigned int *v19; // r2@37
  signed int v20; // r1@39
  int v21; // [sp+Ch] [bp-34h]@2
  int v22; // [sp+10h] [bp-30h]@2
  int v23; // [sp+18h] [bp-28h]@1
  int v24; // [sp+1Ch] [bp-24h]@1
  int v25; // [sp+20h] [bp-20h]@2

  v3 = a2;
  v4 = *(MinecraftGame **)a2;
  v5 = a3;
  v6 = *(ClientInstance **)(a2 + 8);
  v7 = a1;
  v8 = sub_DA7364((void **)&v23, "convert_purchases_to_xbl.convert_purchases_to_xbl_screen");
  createScreen<MinecraftScreenModel,ConvertPurchasesToXBLScreenController,std::function<void ()(bool)> &>(
    &v24,
    v3,
    v4,
    v6,
    (const char **)v8,
    v5);
  v9 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  }
  v21 = v24;
  v22 = v25;
  if ( v25 )
    v10 = (unsigned int *)(v25 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
      ++*v10;
  result = SceneFactory::_createScreen(v7, v3, (unsigned __int64 *)&v21);
  v13 = v22;
  if ( v22 )
    v14 = (unsigned int *)(v22 + 4);
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
      result = (*v14)--;
    if ( result == 1 )
      v15 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
      }
      else
        result = (*v15)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  v16 = v25;
    v17 = (unsigned int *)(v25 + 4);
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
      result = (*v17)--;
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
        result = (*v18)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  return result;
}


unsigned int __fastcall SceneFactory::createManifestValidationScreen(unsigned __int64 *a1, int a2, _DWORD *a3, int a4, int a5, int *a6, char a7, int a8)
{
  int v8; // r9@1
  unsigned __int64 *v9; // r8@1
  int v10; // r5@1
  _DWORD *v11; // r4@1
  MinecraftGame *v12; // r6@1
  ClientInstance *v13; // r7@1
  void **v14; // r0@1
  void *v15; // r0@1
  unsigned int *v16; // r0@3
  unsigned int v17; // r1@5
  unsigned int result; // r0@8
  int v19; // r4@8
  unsigned int *v20; // r1@9
  unsigned int *v21; // r5@15
  int v22; // r4@22
  unsigned int *v23; // r1@23
  unsigned int *v24; // r5@29
  unsigned int *v25; // r2@37
  signed int v26; // r1@39
  int v27; // [sp+20h] [bp-40h]@2
  int v28; // [sp+24h] [bp-3Ch]@2
  int v29; // [sp+2Ch] [bp-34h]@1
  int v30; // [sp+30h] [bp-30h]@1
  int v31; // [sp+34h] [bp-2Ch]@2
  int v32; // [sp+38h] [bp-28h]@1
  char v33; // [sp+3Fh] [bp-21h]@1

  v8 = a2;
  v9 = a1;
  v10 = a4;
  v33 = a7;
  v11 = a3;
  v32 = a8;
  v12 = *(MinecraftGame **)a2;
  v13 = *(ClientInstance **)(a2 + 8);
  v14 = sub_DA7364((void **)&v29, "manifest_validation.manifest_validation_screen");
  createScreen<MinecraftScreenModel,ManifestValidationScreenController,PackManifestFactory &,IContentKeyProvider const&,ResourceLocation const&,std::string const&,bool &,PackContentItem const*&>(
    &v30,
    v8,
    v12,
    v13,
    (const char **)v14,
    v11,
    v10,
    a5,
    a6,
    &v33,
    &v32);
  v15 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
  {
    v25 = (unsigned int *)(v29 - 4);
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
      j_j_j_j_j__ZdlPv_9(v15);
  }
  v27 = v30;
  v28 = v31;
  if ( v31 )
    v16 = (unsigned int *)(v31 + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 + 1, v16) );
      ++*v16;
  result = SceneFactory::_createScreen(v9, v8, (unsigned __int64 *)&v27);
  v19 = v28;
  if ( v28 )
    v20 = (unsigned int *)(v28 + 4);
        result = __ldrex(v20);
      while ( __strex(result - 1, v20) );
      result = (*v20)--;
    if ( result == 1 )
      v21 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v21);
        while ( __strex(result - 1, v21) );
      }
      else
        result = (*v21)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  v22 = v31;
    v23 = (unsigned int *)(v31 + 4);
        result = __ldrex(v23);
      while ( __strex(result - 1, v23) );
      result = (*v23)--;
      v24 = (unsigned int *)(v22 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
          result = __ldrex(v24);
        while ( __strex(result - 1, v24) );
        result = (*v24)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
  return result;
}


void __fastcall SceneFactory::createGlobalVars(SceneFactory *this, UIDefRepository *a2, UIDefRepository *a3)
{
  UIDefRepository *v3; // r6@1
  Json::Value *v4; // r4@1
  ClientInputHandler *v5; // r0@1
  int v6; // r5@1
  void *v7; // r0@2
  int v8; // r9@4
  void *v9; // r0@5
  int v10; // r8@7
  void *v11; // r0@8
  char v12; // r11@11
  void *v13; // r0@15
  int v14; // r0@18
  char v15; // r1@18
  void *v16; // r0@22
  signed int v17; // r10@24
  void *v18; // r0@24
  Level *v19; // r7@25
  char *v20; // r0@27
  char *v21; // r0@29
  int v22; // r7@29
  signed int v23; // r0@29
  bool v24; // r10@29
  int v25; // r11@29
  signed int v26; // r9@29
  int v27; // r0@29
  bool v28; // r1@29
  int v29; // r7@31
  bool v30; // r1@31
  int v31; // r7@33
  bool v32; // r1@33
  int v33; // r7@35
  bool v34; // r1@35
  int v35; // r5@37
  OfferRepository *v36; // r0@37
  char v37; // r0@37
  int v38; // r5@37
  bool v39; // r1@37
  int v40; // r5@39
  int v41; // r0@39
  bool v42; // r1@39
  int v43; // r5@41
  void *v44; // r0@42
  char v45; // r0@44
  int v46; // r5@44
  bool v47; // r1@45
  int v48; // r0@47
  int v49; // r5@51
  bool v50; // r1@52
  int v51; // r0@54
  int v52; // r5@58
  int v53; // r0@58
  bool v54; // r1@58
  int v55; // r5@60
  int v56; // r0@61
  bool v57; // r1@61
  int v58; // r5@65
  int v59; // r0@65
  bool v60; // r1@65
  int v61; // r5@67
  int v62; // r5@67
  int v63; // r5@67
  Options *v64; // r0@67
  int v65; // r0@67
  bool v66; // r1@67
  int v67; // r5@69
  Options *v68; // r0@69
  int v69; // r0@69
  bool v70; // r1@69
  int v71; // r5@71
  char v72; // r1@72
  int v73; // r5@74
  int v74; // r0@75
  bool v75; // r1@75
  int v76; // r5@79
  int v77; // r0@79
  bool v78; // r1@79
  int v79; // r5@81
  char v80; // r0@81
  int v81; // r5@81
  char v82; // r0@81
  int v83; // r5@81
  int v84; // r5@81
  int v85; // r0@81
  bool v86; // r1@81
  int v87; // r5@83
  bool v88; // r1@83
  int v89; // r5@85
  bool v90; // r1@85
  int v91; // r5@87
  int v92; // r0@88
  bool v93; // r1@88
  int v94; // r5@92
  int v95; // r5@92
  int v96; // r5@92
  bool v97; // r1@92
  int v98; // r5@94
  void *v99; // r0@95
  int v100; // r0@97
  bool v101; // r1@97
  int v102; // r5@99
  void *v103; // r0@100
  char v104; // r0@102
  int v105; // r5@102
  void *v106; // r0@103
  int v107; // r0@105
  bool v108; // r1@105
  int v109; // r5@107
  bool v110; // r1@107
  int v111; // r5@109
  char v112; // r1@109
  int v113; // r7@109
  char v114; // r0@111
  int v115; // r5@113
  char v116; // r0@113
  char v117; // r1@115
  int v118; // r5@117
  bool v119; // r1@117
  int v120; // r5@119
  int v121; // r0@119
  Option *v122; // r0@119
  int v123; // r0@119
  int v124; // r5@119
  int v125; // r0@119
  Option *v126; // r0@119
  int v127; // r0@119
  int v128; // r5@119
  void *v129; // r0@120
  char v130; // r0@122
  int v131; // r5@122
  char v132; // r0@122
  int v133; // r5@122
  void *v134; // r0@123
  char v135; // r0@125
  int v136; // r5@125
  int v137; // r5@125
  char v138; // r0@125
  int v139; // r5@125
  void *v140; // r0@126
  char v141; // r0@128
  int v142; // r5@128
  void *v143; // r0@129
  char v144; // r0@131
  int v145; // r5@131
  int v146; // r5@131
  OfferRepository *v147; // r0@131
  char v148; // r0@131
  int v149; // r5@131
  char v150; // r0@131
  int v151; // r5@131
  void *v152; // r0@131
  unsigned int *v153; // r2@133
  signed int v154; // r1@135
  unsigned int *v155; // r2@137
  signed int v156; // r1@139
  char v157; // [sp+4h] [bp-364h]@16
  char v158; // [sp+8h] [bp-360h]@24
  UIDefRepository *v159; // [sp+Ch] [bp-35Ch]@1
  char v160; // [sp+10h] [bp-358h]@131
  char v161; // [sp+20h] [bp-348h]@131
  char v162; // [sp+30h] [bp-338h]@131
  char v163; // [sp+40h] [bp-328h]@131
  char v164; // [sp+50h] [bp-318h]@131
  char v165; // [sp+60h] [bp-308h]@128
  char v166; // [sp+70h] [bp-2F8h]@125
  char v167; // [sp+80h] [bp-2E8h]@125
  char v168; // [sp+90h] [bp-2D8h]@125
  char v169; // [sp+A0h] [bp-2C8h]@122
  char v170; // [sp+B0h] [bp-2B8h]@122
  char v171; // [sp+C0h] [bp-2A8h]@119
  char v172; // [sp+D0h] [bp-298h]@119
  char v173; // [sp+E0h] [bp-288h]@119
  char v174; // [sp+F0h] [bp-278h]@117
  char v175; // [sp+100h] [bp-268h]@113
  char v176; // [sp+110h] [bp-258h]@109
  char v177; // [sp+120h] [bp-248h]@107
  char v178; // [sp+130h] [bp-238h]@102
  char v179; // [sp+140h] [bp-228h]@99
  char v180; // [sp+150h] [bp-218h]@94
  char v181; // [sp+160h] [bp-208h]@92
  char v182; // [sp+170h] [bp-1F8h]@92
  char v183; // [sp+180h] [bp-1E8h]@92
  char v184; // [sp+190h] [bp-1D8h]@87
  char v185; // [sp+1A0h] [bp-1C8h]@85
  char v186; // [sp+1B0h] [bp-1B8h]@83
  char v187; // [sp+1C0h] [bp-1A8h]@81
  char v188; // [sp+1D0h] [bp-198h]@81
  char v189; // [sp+1E0h] [bp-188h]@81
  char v190; // [sp+1F0h] [bp-178h]@81
  char v191; // [sp+200h] [bp-168h]@79
  char v192; // [sp+210h] [bp-158h]@74
  char v193; // [sp+220h] [bp-148h]@71
  char v194; // [sp+230h] [bp-138h]@69
  char v195; // [sp+240h] [bp-128h]@67
  char v196; // [sp+250h] [bp-118h]@67
  char v197; // [sp+260h] [bp-108h]@67
  char v198; // [sp+270h] [bp-F8h]@65
  char v199; // [sp+280h] [bp-E8h]@60
  char v200; // [sp+290h] [bp-D8h]@58
  char v201; // [sp+2A0h] [bp-C8h]@51
  char v202; // [sp+2B0h] [bp-B8h]@44
  char v203; // [sp+2C0h] [bp-A8h]@41
  char v204; // [sp+2D0h] [bp-98h]@39
  char v205; // [sp+2E0h] [bp-88h]@37
  char v206; // [sp+2F0h] [bp-78h]@37
  char v207; // [sp+300h] [bp-68h]@35
  char v208; // [sp+310h] [bp-58h]@33
  char v209; // [sp+320h] [bp-48h]@31
  int v210; // [sp+338h] [bp-30h]@24
  int v211; // [sp+33Ch] [bp-2Ch]@4

  v3 = a2;
  v4 = this;
  v159 = a3;
  v5 = (ClientInputHandler *)ClientInstance::getInput(*((ClientInstance **)a2 + 2));
  v6 = ClientInputHandler::getCurrentInputMode(v5);
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v7 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v7 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(int *))(**(_DWORD **)v7 + 552))(&v211);
  v8 = ClientInstance::getHoloInput(*((ClientInstance **)v3 + 2));
    v9 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v9 = &ServiceLocator<AppPlatform>::mDefaultService;
  v10 = (*(int (**)(void))(**(_DWORD **)v9 + 440))();
    v11 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v11 = &ServiceLocator<AppPlatform>::mDefaultService;
  if ( (*(int (**)(void))(**(_DWORD **)v11 + 160))() == 1 )
    v12 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v8 + 308))(v8, 1024);
    v12 = 0;
  if ( (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v8 + 308))(v8, 2048) == 1 )
  {
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v13 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v13 = &ServiceLocator<AppPlatform>::mDefaultService;
    v14 = (*(int (**)(void))(**(_DWORD **)v13 + 436))();
    v15 = 0;
    if ( v14 != 2 )
      v15 = 1;
    v157 = v15;
  }
    v157 = 0;
    v16 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v16 = &ServiceLocator<AppPlatform>::mDefaultService;
  v158 = (*(int (**)(void))(**(_DWORD **)v16 + 556))();
  sub_DA7364((void **)&v210, "xbox_one");
  v17 = Util::startsWith(&v211, &v210);
  v18 = (void *)(v210 - 12);
  if ( (int *)(v210 - 12) != &dword_28898C0 )
    v153 = (unsigned int *)(v210 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v154 = __ldrex(v153);
      while ( __strex(v154 - 1, v153) );
    }
      v154 = (*v153)--;
    if ( v154 <= 0 )
      j_j_j_j_j__ZdlPv_9(v18);
  v19 = (Level *)ClientInstance::getLevel(*((ClientInstance **)v3 + 2));
  if ( (*(int (**)(void))(**(_DWORD **)v3 + 136))()
    || v19 && (v20 = Level::getLevelData(v19), LevelData::isEduLevel((LevelData *)v20) == 1) )
    sub_DA78A4((void **)&v211, "edu", (_BYTE *)3);
  v21 = UIDefRepository::getGlobalVariables(v159);
  Json::Value::Value(v4, (const Json::Value *)v21);
  v22 = Json::Value::operator[](v4, "$store_disabled");
  v23 = v17;
  v24 = v12;
  v25 = v8;
  v26 = v23;
  v27 = sub_DA7374((const void **)&v211, "edu");
  v28 = 0;
  if ( !v27 )
    v28 = 1;
  Json::Value::Value((Json::Value *)&v209, v28);
  Json::Value::operator=(v22, (const Json::Value *)&v209);
  Json::Value::~Value((Json::Value *)&v209);
  v29 = Json::Value::operator[](v4, "$game_pad");
  v30 = 0;
  if ( v6 == 3 )
    v30 = 1;
  Json::Value::Value((Json::Value *)&v208, v30);
  Json::Value::operator=(v29, (const Json::Value *)&v208);
  Json::Value::~Value((Json::Value *)&v208);
  v31 = Json::Value::operator[](v4, "$mouse");
  v32 = v6;
  if ( v6 != 1 )
    v32 = 0;
  Json::Value::Value((Json::Value *)&v207, v32);
  Json::Value::operator=(v31, (const Json::Value *)&v207);
  Json::Value::~Value((Json::Value *)&v207);
  v33 = Json::Value::operator[](v4, "$touch");
  v34 = 0;
  if ( v6 == 2 )
    v34 = 1;
  Json::Value::Value((Json::Value *)&v206, v34);
  Json::Value::operator=(v33, (const Json::Value *)&v206);
  Json::Value::~Value((Json::Value *)&v206);
  v35 = Json::Value::operator[](v4, "$trial");
  v36 = (OfferRepository *)MinecraftGame::getOfferRepository(*(MinecraftGame **)v3);
  v37 = OfferRepository::isTrial(v36);
  Json::Value::Value((Json::Value *)&v205, v37);
  Json::Value::operator=(v35, (const Json::Value *)&v205);
  Json::Value::~Value((Json::Value *)&v205);
  v38 = Json::Value::operator[](v4, "$build_platform_UWP");
  v39 = 0;
  if ( v10 == 7 )
    v39 = 1;
  Json::Value::Value((Json::Value *)&v204, v39);
  Json::Value::operator=(v38, (const Json::Value *)&v204);
  Json::Value::~Value((Json::Value *)&v204);
  v40 = Json::Value::operator[](v4, "$win10_edition");
  v41 = sub_DA7374((const void **)&v211, "win10");
  v42 = 0;
  if ( !v41 )
    v42 = 1;
  Json::Value::Value((Json::Value *)&v203, v42);
  Json::Value::operator=(v40, (const Json::Value *)&v203);
  Json::Value::~Value((Json::Value *)&v203);
  v43 = Json::Value::operator[](v4, "$ignore_add_servers");
    v44 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v44 = &ServiceLocator<AppPlatform>::mDefaultService;
  v45 = (*(int (**)(void))(**(_DWORD **)v44 + 156))();
  Json::Value::Value((Json::Value *)&v202, v45 ^ 1);
  Json::Value::operator=(v43, (const Json::Value *)&v202);
  Json::Value::~Value((Json::Value *)&v202);
  v46 = Json::Value::operator[](v4, "$disable_gamertag_controls");
  if ( v26 )
    v47 = 1;
  else if ( sub_DA7374((const void **)&v211, "playstation_4") )
    v48 = sub_DA7374((const void **)&v211, "switch");
    v47 = 0;
    if ( !v48 )
      v47 = 1;
  Json::Value::Value((Json::Value *)&v201, v47);
  Json::Value::operator=(v46, (const Json::Value *)&v201);
  Json::Value::~Value((Json::Value *)&v201);
  v49 = Json::Value::operator[](v4, "$console_edition");
    v50 = 1;
    v51 = sub_DA7374((const void **)&v211, "switch");
    v50 = 0;
    if ( !v51 )
      v50 = 1;
  Json::Value::Value((Json::Value *)&v200, v50);
  Json::Value::operator=(v49, (const Json::Value *)&v200);
  Json::Value::~Value((Json::Value *)&v200);
  v52 = Json::Value::operator[](v4, "$osx_edition");
  v53 = sub_DA7374((const void **)&v211, "osx");
  v54 = 0;
  if ( !v53 )
    v54 = 1;
  Json::Value::Value((Json::Value *)&v199, v54);
  Json::Value::operator=(v52, (const Json::Value *)&v199);
  Json::Value::~Value((Json::Value *)&v199);
  v55 = Json::Value::operator[](v4, "$pocket_edition");
  if ( sub_DA7374((const void **)&v211, "pocket") )
    v56 = sub_DA7374((const void **)&v211, "gear_vr");
    v57 = 0;
    if ( !v56 )
      v57 = 1;
    v57 = 1;
  Json::Value::Value((Json::Value *)&v198, v57);
  Json::Value::operator=(v55, (const Json::Value *)&v198);
  Json::Value::~Value((Json::Value *)&v198);
  v58 = Json::Value::operator[](v4, "$education_edition");
  v59 = sub_DA7374((const void **)&v211, "edu");
  v60 = 0;
  if ( !v59 )
    v60 = 1;
  Json::Value::Value((Json::Value *)&v197, v60);
  Json::Value::operator=(v58, (const Json::Value *)&v197);
  Json::Value::~Value((Json::Value *)&v197);
  v61 = Json::Value::operator[](v4, "$world_archive_support");
  Json::Value::Value((Json::Value *)&v196, v24);
  Json::Value::operator=(v61, (const Json::Value *)&v196);
  Json::Value::~Value((Json::Value *)&v196);
  v62 = Json::Value::operator[](v4, "$file_picking_supported");
  Json::Value::Value((Json::Value *)&v195, v24);
  Json::Value::operator=(v62, (const Json::Value *)&v195);
  Json::Value::~Value((Json::Value *)&v195);
  v63 = Json::Value::operator[](v4, "$desktop_screen");
  v64 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v3 + 2));
  v65 = Options::getUIProfile(v64);
  v66 = 0;
  if ( !v65 )
    v66 = 1;
  Json::Value::Value((Json::Value *)&v194, v66);
  Json::Value::operator=(v63, (const Json::Value *)&v194);
  Json::Value::~Value((Json::Value *)&v194);
  v67 = Json::Value::operator[](v4, "$pocket_screen");
  v68 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v3 + 2));
  v69 = Options::getUIProfile(v68);
  v70 = v69;
  if ( v69 )
    v70 = 1;
  Json::Value::Value((Json::Value *)&v193, v70);
  Json::Value::operator=(v67, (const Json::Value *)&v193);
  Json::Value::~Value((Json::Value *)&v193);
  v71 = Json::Value::operator[](v4, "$is_holographic");
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v25 + 44))(v25) )
    v72 = 1;
    v72 = (*(int (__fastcall **)(int))(*(_DWORD *)v25 + 76))(v25);
  Json::Value::Value((Json::Value *)&v192, v72);
  Json::Value::operator=(v71, (const Json::Value *)&v192);
  Json::Value::~Value((Json::Value *)&v192);
  v73 = Json::Value::operator[](v4, "$gear_vr");
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v25 + 44))(v25) == 1 )
    v74 = sub_DA7374((const void **)&v211, "gear_vr");
    v75 = 0;
    if ( !v74 )
      v75 = 1;
  Json::Value::Value((Json::Value *)&v191, v75);
  Json::Value::operator=(v73, (const Json::Value *)&v191);
  Json::Value::~Value((Json::Value *)&v191);
  v76 = Json::Value::operator[](v4, "$oculus_rift");
  v77 = MinecraftGame::getLaunchedForHMDPlatform(*(MinecraftGame **)v3);
  v78 = v77;
  if ( v77 != 1 )
    v78 = 0;
  Json::Value::Value((Json::Value *)&v190, v78);
  Json::Value::operator=(v76, (const Json::Value *)&v190);
  Json::Value::~Value((Json::Value *)&v190);
  v79 = Json::Value::operator[](v4, "$is_living_room_mode");
  v80 = ClientInstance::isLivingroomMode(*((ClientInstance **)v3 + 2));
  Json::Value::Value((Json::Value *)&v189, v80);
  Json::Value::operator=(v79, (const Json::Value *)&v189);
  Json::Value::~Value((Json::Value *)&v189);
  v81 = Json::Value::operator[](v4, "$is_reality_mode");
  v82 = ClientInstance::isHoloRealityMode(*((ClientInstance **)v3 + 2));
  Json::Value::Value((Json::Value *)&v188, v82);
  Json::Value::operator=(v81, (const Json::Value *)&v188);
  Json::Value::~Value((Json::Value *)&v188);
  v83 = Json::Value::operator[](v4, "$realms_beta");
  Json::Value::Value((Json::Value *)&v187, v158);
  Json::Value::operator=(v83, (const Json::Value *)&v187);
  Json::Value::~Value((Json::Value *)&v187);
  v84 = Json::Value::operator[](v4, "$fire_tv");
  v85 = sub_DA7374((const void **)&v211, "fire_tv");
  v86 = 0;
  if ( !v85 )
    v86 = 1;
  Json::Value::Value((Json::Value *)&v186, v86);
  Json::Value::operator=(v84, (const Json::Value *)&v186);
  Json::Value::~Value((Json::Value *)&v186);
  v87 = Json::Value::operator[](v4, "$is_ios");
  v88 = 0;
  if ( v10 == 2 )
    v88 = 1;
  Json::Value::Value((Json::Value *)&v185, v88);
  Json::Value::operator=(v87, (const Json::Value *)&v185);
  Json::Value::~Value((Json::Value *)&v185);
  v89 = Json::Value::operator[](v4, "$apple_tv");
  v90 = 0;
  if ( v10 == 10 )
    v90 = 1;
  Json::Value::Value((Json::Value *)&v184, v90);
  Json::Value::operator=(v89, (const Json::Value *)&v184);
  Json::Value::~Value((Json::Value *)&v184);
  v91 = Json::Value::operator[](v4, "$is_windows_10_mobile");
    v92 = sub_DA7374((const void **)&v211, "pocket");
    v93 = 0;
    if ( !v92 )
      v93 = 1;
  Json::Value::Value((Json::Value *)&v183, v93);
  Json::Value::operator=(v91, (const Json::Value *)&v183);
  Json::Value::~Value((Json::Value *)&v183);
  v94 = Json::Value::operator[](v4, "$image_picking_not_supported");
  Json::Value::Value((Json::Value *)&v182, v157 ^ 1);
  Json::Value::operator=(v94, (const Json::Value *)&v182);
  Json::Value::~Value((Json::Value *)&v182);
  v95 = Json::Value::operator[](v4, "$pre_release");
  Json::Value::Value((Json::Value *)&v181, 0);
  Json::Value::operator=(v95, (const Json::Value *)&v181);
  Json::Value::~Value((Json::Value *)&v181);
  v96 = Json::Value::operator[](v4, "$ios");
  v97 = 0;
    v97 = 1;
  Json::Value::Value((Json::Value *)&v180, v97);
  Json::Value::operator=(v96, (const Json::Value *)&v180);
  Json::Value::~Value((Json::Value *)&v180);
  v98 = Json::Value::operator[](v4, "$is_console");
    v99 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v99 = &ServiceLocator<AppPlatform>::mDefaultService;
  v100 = (*(int (**)(void))(**(_DWORD **)v99 + 436))();
  v101 = 0;
  if ( v100 == 2 )
    v101 = 1;
  Json::Value::Value((Json::Value *)&v179, v101);
  Json::Value::operator=(v98, (const Json::Value *)&v179);
  Json::Value::~Value((Json::Value *)&v179);
  v102 = Json::Value::operator[](v4, "$can_quit");
    v103 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v103 = &ServiceLocator<AppPlatform>::mDefaultService;
  v104 = (*(int (**)(void))(**(_DWORD **)v103 + 580))();
  Json::Value::Value((Json::Value *)&v178, v104);
  Json::Value::operator=(v102, (const Json::Value *)&v178);
  Json::Value::~Value((Json::Value *)&v178);
  v105 = Json::Value::operator[](v4, "$is_settopbox");
    v106 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v106 = &ServiceLocator<AppPlatform>::mDefaultService;
  v107 = (*(int (**)(void))(**(_DWORD **)v106 + 436))();
  v108 = 0;
  if ( v107 == 3 )
    v108 = 1;
  Json::Value::Value((Json::Value *)&v177, v108);
  Json::Value::operator=(v105, (const Json::Value *)&v177);
  Json::Value::~Value((Json::Value *)&v177);
  v109 = Json::Value::operator[](v4, "$microsoft_os");
  v110 = 0;
  if ( (unsigned int)(v10 - 7) < 2 )
    v110 = 1;
  Json::Value::Value((Json::Value *)&v176, v110);
  Json::Value::operator=(v109, (const Json::Value *)&v176);
  Json::Value::~Value((Json::Value *)&v176);
  v111 = Json::Value::operator[](v4, "$apple_os");
  v112 = 0;
  v113 = v10 | 1;
    v112 = 1;
  v114 = 0;
  if ( v113 == 3 )
    v114 = 1;
  Json::Value::Value((Json::Value *)&v175, v112 | v114);
  Json::Value::operator=(v111, (const Json::Value *)&v175);
  Json::Value::~Value((Json::Value *)&v175);
  v115 = Json::Value::operator[](v4, "$google_os");
  v116 = 0;
  if ( v113 == 5 )
    v116 = 1;
  v117 = v10;
  if ( v10 != 1 )
    v117 = 0;
  Json::Value::Value((Json::Value *)&v174, v117 | v116);
  Json::Value::operator=(v115, (const Json::Value *)&v174);
  Json::Value::~Value((Json::Value *)&v174);
  v118 = Json::Value::operator[](v4, "$nx_os");
  v119 = 0;
  if ( v10 == 12 )
    v119 = 1;
  Json::Value::Value((Json::Value *)&v173, v119);
  Json::Value::operator=(v118, (const Json::Value *)&v173);
  Json::Value::~Value((Json::Value *)&v173);
  v120 = Json::Value::operator[](v4, "$horizontal_safezone_size");
  v121 = ClientInstance::getOptions(*((ClientInstance **)v3 + 2));
  v122 = (Option *)Options::get(v121, 40);
  v123 = Option::getFloat(v122);
  SceneFactory::_createSafeZoneSizeVar((SceneFactory *)&v172, *(float *)&v123, v123, 1u);
  Json::Value::operator=(v120, (const Json::Value *)&v172);
  Json::Value::~Value((Json::Value *)&v172);
  v124 = Json::Value::operator[](v4, "$vertical_safezone_size");
  v125 = ClientInstance::getOptions(*((ClientInstance **)v3 + 2));
  v126 = (Option *)Options::get(v125, 40);
  v127 = Option::getFloat(v126);
  SceneFactory::_createSafeZoneSizeVar((SceneFactory *)&v171, *(float *)&v127, v127, 0);
  Json::Value::operator=(v124, (const Json::Value *)&v171);
  Json::Value::~Value((Json::Value *)&v171);
  v128 = Json::Value::operator[](v4, "$can_splitscreen");
    v129 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v129 = &ServiceLocator<AppPlatform>::mDefaultService;
  v130 = (*(int (**)(void))(**(_DWORD **)v129 + 196))();
  Json::Value::Value((Json::Value *)&v170, v130);
  Json::Value::operator=(v128, (const Json::Value *)&v170);
  Json::Value::~Value((Json::Value *)&v170);
  v131 = Json::Value::operator[](v4, "$is_secondary_client");
  v132 = ClientInstance::isPrimaryClient(*((ClientInstance **)v3 + 2));
  Json::Value::Value((Json::Value *)&v169, v132 ^ 1);
  Json::Value::operator=(v131, (const Json::Value *)&v169);
  Json::Value::~Value((Json::Value *)&v169);
  v133 = Json::Value::operator[](v4, "$multiplayer_requires_live_gold");
    v134 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v134 = &ServiceLocator<AppPlatform>::mDefaultService;
  v135 = (*(int (**)(void))(**(_DWORD **)v134 + 644))();
  Json::Value::Value((Json::Value *)&v168, v135);
  Json::Value::operator=(v133, (const Json::Value *)&v168);
  Json::Value::~Value((Json::Value *)&v168);
  v136 = Json::Value::operator[](v4, "$xbox_one");
  Json::Value::Value((Json::Value *)&v167, v26);
  Json::Value::operator=(v136, (const Json::Value *)&v167);
  Json::Value::~Value((Json::Value *)&v167);
  v137 = Json::Value::operator[](v4, "$is_pregame");
  v138 = ClientInstance::isPreGame(*((ClientInstance **)v3 + 2));
  Json::Value::Value((Json::Value *)&v166, v138);
  Json::Value::operator=(v137, (const Json::Value *)&v166);
  Json::Value::~Value((Json::Value *)&v166);
  v139 = Json::Value::operator[](v4, "$is_win10_arm");
    v140 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v140 = &ServiceLocator<AppPlatform>::mDefaultService;
  v141 = (*(int (**)(void))(**(_DWORD **)v140 + 564))();
  Json::Value::Value((Json::Value *)&v165, v141);
  Json::Value::operator=(v139, (const Json::Value *)&v165);
  Json::Value::~Value((Json::Value *)&v165);
  v142 = Json::Value::operator[](v4, "$vibration_supported");
    v143 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v143 = &ServiceLocator<AppPlatform>::mDefaultService;
  v144 = (*(int (**)(void))(**(_DWORD **)v143 + 364))();
  Json::Value::Value((Json::Value *)&v164, v144);
  Json::Value::operator=(v142, (const Json::Value *)&v164);
  Json::Value::~Value((Json::Value *)&v164);
  v145 = Json::Value::operator[](v4, "$is_mobile_vr");
  Json::Value::Value((Json::Value *)&v163, 0);
  Json::Value::operator=(v145, (const Json::Value *)&v163);
  Json::Value::~Value((Json::Value *)&v163);
  v146 = Json::Value::operator[](v4, "$is_xboxlive_enabled");
  v147 = (OfferRepository *)MinecraftGame::getOfferRepository(*(MinecraftGame **)v3);
  v148 = OfferRepository::isTrial(v147);
  Json::Value::Value((Json::Value *)&v162, v148 ^ 1);
  Json::Value::operator=(v146, (const Json::Value *)&v162);
  Json::Value::~Value((Json::Value *)&v162);
  v149 = Json::Value::operator[](v4, "$device_must_be_removed_for_xbl_signin");
  v150 = (*(int (__fastcall **)(int))(*(_DWORD *)v25 + 88))(v25);
  Json::Value::Value((Json::Value *)&v161, v150);
  Json::Value::operator=(v149, (const Json::Value *)&v161);
  Json::Value::~Value((Json::Value *)&v161);
  v151 = Json::Value::operator[](v4, "$is_publish");
  Json::Value::Value((Json::Value *)&v160, 1);
  Json::Value::operator=(v151, (const Json::Value *)&v160);
  Json::Value::~Value((Json::Value *)&v160);
  v152 = (void *)(v211 - 12);
  if ( (int *)(v211 - 12) != &dword_28898C0 )
    v155 = (unsigned int *)(v211 - 4);
        v156 = __ldrex(v155);
      while ( __strex(v156 - 1, v155) );
      v156 = (*v155)--;
    if ( v156 <= 0 )
      j_j_j_j_j__ZdlPv_9(v152);
}


unsigned int __fastcall SceneFactory::_createAchievementScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  unsigned int result; // r0@8
  int v11; // r4@8
  unsigned int *v12; // r1@9
  unsigned int *v13; // r5@15
  int v14; // r4@22
  unsigned int *v15; // r1@23
  unsigned int *v16; // r5@29
  unsigned int *v17; // r2@37
  signed int v18; // r1@39
  int v19; // [sp+8h] [bp-30h]@2
  int v20; // [sp+Ch] [bp-2Ch]@2
  int v21; // [sp+14h] [bp-24h]@1
  int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v21, "achievement.achievement_screen");
  j__Z12createScreenI20MinecraftScreenModel27AchievementScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v22,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v19 = v22;
  v20 = v23;
  if ( v23 )
    v8 = (unsigned int *)(v23 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  result = SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v19);
  v11 = v20;
  if ( v20 )
    v12 = (unsigned int *)(v20 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v14 = v23;
    v15 = (unsigned int *)(v23 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return result;
}


void __fastcall SceneFactory::createSkinPackPurchaseScreen(SceneFactory *this, const StoreCatalogItemModel *a2, StoreCatalogItemModel *a3)
{
  const StoreCatalogItemModel *v3; // r4@1
  MinecraftGame *v4; // r6@1
  StoreCatalogItemModel *v5; // r5@1
  ClientInstance *v6; // r7@1
  unsigned __int64 *v7; // r8@1
  void **v8; // r0@1
  int v9; // r4@1
  unsigned int *v10; // r1@2
  unsigned int v11; // r0@4
  unsigned int *v12; // r5@8
  unsigned int v13; // r0@10
  void *v14; // r0@15
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  int v17; // [sp+14h] [bp-34h]@1
  int v18; // [sp+18h] [bp-30h]@1
  int v19; // [sp+20h] [bp-28h]@1
  char v20; // [sp+24h] [bp-24h]@1
  int v21; // [sp+28h] [bp-20h]@1

  v3 = a2;
  v4 = *(MinecraftGame **)a2;
  v5 = a3;
  v6 = (ClientInstance *)*((_DWORD *)a2 + 2);
  v7 = (unsigned __int64 *)this;
  v8 = sub_DA7364((void **)&v19, "skin_pack_purchase.skin_pack_purchase_standard");
  v18 = -1;
  v17 = 0;
  createScreen<MainMenuScreenModel,SkinPackPurchaseScreenController,StoreCatalogItemModel const&,int,StoreScreenType>(
    &v20,
    (int)v3,
    v4,
    v6,
    (const char **)v8,
    v5,
    &v18,
    &v17);
  SceneFactory::_createScreen(v7, (int)v3, (unsigned __int64 *)&v20);
  v9 = v21;
  if ( v21 )
  {
    v10 = (unsigned int *)(v21 + 4);
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
  }
  v14 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v19 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
}


void __fastcall SceneFactory::createStructureEditor(SceneFactory *this, const BlockPos *a2, int a3)
{
  const BlockPos *v3; // r4@1
  MinecraftGame *v4; // r6@1
  int v5; // r5@1
  ClientInstance *v6; // r7@1
  unsigned __int64 *v7; // r8@1
  void **v8; // r0@1
  int v9; // r4@1
  unsigned int *v10; // r1@2
  unsigned int v11; // r0@4
  unsigned int *v12; // r5@8
  unsigned int v13; // r0@10
  void *v14; // r0@15
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  int v17; // [sp+Ch] [bp-2Ch]@1
  char v18; // [sp+10h] [bp-28h]@1
  int v19; // [sp+14h] [bp-24h]@1

  v3 = a2;
  v4 = *(MinecraftGame **)a2;
  v5 = a3;
  v6 = (ClientInstance *)*((_DWORD *)a2 + 2);
  v7 = (unsigned __int64 *)this;
  v8 = sub_DA7364((void **)&v17, "structure_editor.structure_editor_screen");
  createScreen<ClientInstanceScreenModel,StructureEditorScreenController,BlockPos const&>(
    &v18,
    (int)v3,
    v4,
    v6,
    (const char **)v8,
    v5);
  SceneFactory::_createScreen(v7, (int)v3, (unsigned __int64 *)&v18);
  v9 = v19;
  if ( v19 )
  {
    v10 = (unsigned int *)(v19 + 4);
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
  }
  v14 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
}


void __fastcall SceneFactory::createBeaconScreen(SceneFactory *this, Player *a2, const BlockPos *a3, const BlockPos *a4)
{
  Player *v4; // r4@1
  unsigned __int64 *v5; // r8@1
  const BlockPos *v6; // r6@1
  Options *v7; // r0@1
  int v8; // r0@1
  signed int v9; // r1@1
  MinecraftGame *v10; // r7@3
  ClientInstance *v11; // r5@3
  void **v12; // r0@3
  int v13; // r4@3
  unsigned int *v14; // r1@4
  unsigned int v15; // r0@6
  unsigned int *v16; // r5@10
  unsigned int v17; // r0@12
  void *v18; // r0@17
  unsigned int *v19; // r2@19
  signed int v20; // r1@21
  int v21; // [sp+14h] [bp-2Ch]@3
  char v22; // [sp+18h] [bp-28h]@3
  int v23; // [sp+1Ch] [bp-24h]@3
  int v24; // [sp+20h] [bp-20h]@3

  v4 = a2;
  v5 = (unsigned __int64 *)this;
  v6 = a4;
  v7 = (Options *)ClientInstance::getOptions(*((ClientInstance **)a2 + 2));
  v8 = Options::getUIProfile(v7);
  v9 = 0;
  if ( !v8 )
    v9 = 1;
  v24 = v9;
  v10 = *(MinecraftGame **)v4;
  v11 = (ClientInstance *)*((_DWORD *)v4 + 2);
  v12 = sub_DA7364((void **)&v21, "beacon.beacon_screen");
  createScreen<ClientInstanceScreenModel,BeaconScreenController,BlockPos const&,InteractionModel &>(
    &v22,
    (int)v4,
    v10,
    v11,
    (const char **)v12,
    v6,
    &v24);
  SceneFactory::_createScreen(v5, (int)v4, (unsigned __int64 *)&v22);
  v13 = v23;
  if ( v23 )
  {
    v14 = (unsigned int *)(v23 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  }
  v18 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v21 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v18);
}


unsigned int __fastcall SceneFactory::createEncryptionWarningScreen(unsigned __int64 *a1, int a2, int a3)
{
  int v3; // r4@1
  MinecraftGame *v4; // r6@1
  int v5; // r5@1
  ClientInstance *v6; // r7@1
  unsigned __int64 *v7; // r8@1
  void **v8; // r0@1
  void *v9; // r0@1
  unsigned int *v10; // r0@3
  unsigned int v11; // r1@5
  unsigned int result; // r0@8
  int v13; // r4@8
  unsigned int *v14; // r1@9
  unsigned int *v15; // r5@15
  int v16; // r4@22
  unsigned int *v17; // r1@23
  unsigned int *v18; // r5@29
  unsigned int *v19; // r2@37
  signed int v20; // r1@39
  int v21; // [sp+Ch] [bp-34h]@2
  int v22; // [sp+10h] [bp-30h]@2
  int v23; // [sp+18h] [bp-28h]@1
  int v24; // [sp+1Ch] [bp-24h]@1
  int v25; // [sp+20h] [bp-20h]@2

  v3 = a2;
  v4 = *(MinecraftGame **)a2;
  v5 = a3;
  v6 = *(ClientInstance **)(a2 + 8);
  v7 = a1;
  v8 = sub_DA7364((void **)&v23, "common.modal_screen");
  createScreen<MinecraftScreenModel,EncryptionWarningScreenController,std::function<void ()(bool)> &>(
    &v24,
    v3,
    v4,
    v6,
    (const char **)v8,
    v5);
  v9 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  }
  v21 = v24;
  v22 = v25;
  if ( v25 )
    v10 = (unsigned int *)(v25 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
      ++*v10;
  result = SceneFactory::_createScreen(v7, v3, (unsigned __int64 *)&v21);
  v13 = v22;
  if ( v22 )
    v14 = (unsigned int *)(v22 + 4);
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
      result = (*v14)--;
    if ( result == 1 )
      v15 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
      }
      else
        result = (*v15)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  v16 = v25;
    v17 = (unsigned int *)(v25 + 4);
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
      result = (*v17)--;
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
        result = (*v18)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  return result;
}


unsigned int __fastcall SceneFactory::createHudScreen(SceneFactory *this, int a2)
{
  int v2; // r6@1
  MinecraftGame *v3; // r4@1
  SceneFactory *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  __int64 v8; // kr00_8@2
  unsigned int *v9; // r0@3
  unsigned int v10; // r1@5
  int v11; // r1@9
  void (__fastcall *v12)(_DWORD, int *); // r2@9
  unsigned int *v13; // r0@13
  unsigned int v14; // r1@15
  unsigned int result; // r0@20
  unsigned int *v16; // r1@21
  unsigned int *v17; // r5@27
  int v18; // r4@34
  unsigned int *v19; // r1@35
  unsigned int *v20; // r5@41
  unsigned int *v21; // r2@49
  signed int v22; // r1@51
  int v23; // [sp+8h] [bp-30h]@8
  int v24; // [sp+10h] [bp-28h]@1
  char v25; // [sp+14h] [bp-24h]@1
  int v26; // [sp+18h] [bp-20h]@2
  int v27; // [sp+1Ch] [bp-1Ch]@9

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v24, "hud.hud_screen");
  j__Z12createScreenI25ClientInstanceScreenModel19HudScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v25,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v8 = *(_QWORD *)&v25;
  if ( v26 )
    v9 = (unsigned int *)(v26 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
      ++*v9;
  createScreenSetupStrategy((DefaultUIScreenSetupCleanupStrategy **)&v23, *(ClientInstance **)(v2 + 8), 9);
  if ( (_DWORD)v8 )
    v11 = v23;
    v12 = *(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)v8 + 272);
    v23 = 0;
    v27 = v11;
    v12(v8, &v27);
    if ( v27 )
      (*(void (**)(void))(*(_DWORD *)v27 + 4))();
    v27 = 0;
  *(_QWORD *)v4 = v8;
  if ( HIDWORD(v8) )
    v13 = (unsigned int *)(HIDWORD(v8) + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 + 1, v13) );
      ++*v13;
  if ( v23 )
    (*(void (**)(void))(*(_DWORD *)v23 + 4))();
  result = 0;
  v23 = 0;
    v16 = (unsigned int *)(HIDWORD(v8) + 4);
        result = __ldrex(v16);
      while ( __strex(result - 1, v16) );
      result = (*v16)--;
    if ( result == 1 )
      v17 = (unsigned int *)(HIDWORD(v8) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v8) + 8))(HIDWORD(v8));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v17);
        while ( __strex(result - 1, v17) );
      }
      else
        result = (*v17)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v8) + 12))(HIDWORD(v8));
  v18 = v26;
    v19 = (unsigned int *)(v26 + 4);
        result = __ldrex(v19);
      while ( __strex(result - 1, v19) );
      result = (*v19)--;
      v20 = (unsigned int *)(v18 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
          result = __ldrex(v20);
        while ( __strex(result - 1, v20) );
        result = (*v20)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
  return result;
}


unsigned int __fastcall SceneFactory::createWorldTemplateScreen(SceneFactory *this, int a2, char a3)
{
  int v3; // r4@1
  unsigned __int64 *v4; // r5@1
  MinecraftGame *v5; // r6@1
  ClientInstance *v6; // r7@1
  void **v7; // r0@1
  void *v8; // r0@1
  unsigned int *v9; // r0@3
  unsigned int v10; // r1@5
  unsigned int result; // r0@8
  int v12; // r4@8
  unsigned int *v13; // r1@9
  unsigned int *v14; // r5@15
  int v15; // r4@22
  unsigned int *v16; // r1@23
  unsigned int *v17; // r5@29
  unsigned int *v18; // r2@37
  signed int v19; // r1@39
  int v20; // [sp+Ch] [bp-34h]@2
  int v21; // [sp+10h] [bp-30h]@2
  int v22; // [sp+18h] [bp-28h]@1
  int v23; // [sp+1Ch] [bp-24h]@1
  int v24; // [sp+20h] [bp-20h]@2
  char v25; // [sp+27h] [bp-19h]@1

  v3 = a2;
  v25 = a3;
  v4 = (unsigned __int64 *)this;
  v5 = *(MinecraftGame **)a2;
  v6 = *(ClientInstance **)(a2 + 8);
  v7 = sub_DA7364((void **)&v22, "world_templates.world_templates_screen");
  createScreen<PlayScreenModel,WorldTemplatesScreenController,bool &>(&v23, v3, v5, v6, (const char **)v7, &v25);
  v8 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v22 - 4);
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
      j_j_j_j_j__ZdlPv_9(v8);
  }
  v20 = v23;
  v21 = v24;
  if ( v24 )
    v9 = (unsigned int *)(v24 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
      ++*v9;
  result = SceneFactory::_createScreen(v4, v3, (unsigned __int64 *)&v20);
  v12 = v21;
  if ( v21 )
    v13 = (unsigned int *)(v21 + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  v15 = v24;
    v16 = (unsigned int *)(v24 + 4);
        result = __ldrex(v16);
      while ( __strex(result - 1, v16) );
      result = (*v16)--;
      v17 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          result = __ldrex(v17);
        while ( __strex(result - 1, v17) );
        result = (*v17)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  return result;
}


_BOOL4 __fastcall SceneFactory::_isInGame(SceneFactory *this)
{
  return ClientInstance::getLevel(*((ClientInstance **)this + 2)) != 0;
}


void __fastcall SceneFactory::createCommandBlockScreen(SceneFactory *this, Player *a2, const BlockPos *a3, int a4)
{
  Player *v4; // r4@1
  MinecraftGame *v5; // r6@1
  int v6; // r5@1
  ClientInstance *v7; // r7@1
  unsigned __int64 *v8; // r8@1
  void **v9; // r0@1
  int v10; // r4@1
  unsigned int *v11; // r1@2
  unsigned int v12; // r0@4
  unsigned int *v13; // r5@8
  unsigned int v14; // r0@10
  void *v15; // r0@15
  unsigned int *v16; // r2@17
  signed int v17; // r1@19
  int v18; // [sp+Ch] [bp-2Ch]@1
  char v19; // [sp+10h] [bp-28h]@1
  int v20; // [sp+14h] [bp-24h]@1

  v4 = a2;
  v5 = *(MinecraftGame **)a2;
  v6 = a4;
  v7 = (ClientInstance *)*((_DWORD *)a2 + 2);
  v8 = (unsigned __int64 *)this;
  v9 = sub_DA7364((void **)&v18, "command_block.command_block_screen");
  createScreen<ClientInstanceScreenModel,CommandBlockScreenController,BlockPos const&>(
    &v19,
    (int)v4,
    v5,
    v7,
    (const char **)v9,
    v6);
  SceneFactory::_createScreen(v8, (int)v4, (unsigned __int64 *)&v19);
  v10 = v20;
  if ( v20 )
  {
    v11 = (unsigned int *)(v20 + 4);
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
  v15 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v18 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
}


unsigned int __fastcall SceneFactory::createXblGamerProfileCardScreen(SceneFactory *this, Social::XboxProfile *a2, int a3)
{
  Social::XboxProfile *v3; // r4@1
  MinecraftGame *v4; // r6@1
  int v5; // r5@1
  ClientInstance *v6; // r7@1
  unsigned __int64 *v7; // r8@1
  void **v8; // r0@1
  void *v9; // r0@1
  unsigned int *v10; // r0@3
  unsigned int v11; // r1@5
  unsigned int result; // r0@8
  int v13; // r4@8
  unsigned int *v14; // r1@9
  unsigned int *v15; // r5@15
  int v16; // r4@22
  unsigned int *v17; // r1@23
  unsigned int *v18; // r5@29
  unsigned int *v19; // r2@37
  signed int v20; // r1@39
  int v21; // [sp+Ch] [bp-34h]@2
  int v22; // [sp+10h] [bp-30h]@2
  int v23; // [sp+18h] [bp-28h]@1
  int v24; // [sp+1Ch] [bp-24h]@1
  int v25; // [sp+20h] [bp-20h]@2

  v3 = a2;
  v4 = *(MinecraftGame **)a2;
  v5 = a3;
  v6 = (ClientInstance *)*((_DWORD *)a2 + 2);
  v7 = (unsigned __int64 *)this;
  v8 = sub_DA7364((void **)&v23, "xbl_profile_card.xbl_profile_card_screen");
  createScreen<MinecraftScreenModel,XblGamerProfileCardScreenController,Social::XboxProfile &>(
    &v24,
    (int)v3,
    v4,
    v6,
    (const char **)v8,
    v5);
  v9 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  }
  v21 = v24;
  v22 = v25;
  if ( v25 )
    v10 = (unsigned int *)(v25 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
      ++*v10;
  result = SceneFactory::_createScreen(v7, (int)v3, (unsigned __int64 *)&v21);
  v13 = v22;
  if ( v22 )
    v14 = (unsigned int *)(v22 + 4);
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
      result = (*v14)--;
    if ( result == 1 )
      v15 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
      }
      else
        result = (*v15)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  v16 = v25;
    v17 = (unsigned int *)(v25 + 4);
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
      result = (*v17)--;
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
        result = (*v18)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  return result;
}


unsigned int *__fastcall SceneFactory::createHolographicPostRenderScreen(SceneFactory *this, int a2)
{
  int v2; // r6@1
  MinecraftGame *v3; // r4@1
  SceneFactory *v4; // r8@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  __int64 v8; // kr00_8@2
  unsigned int *v9; // r0@3
  unsigned int v10; // r1@5
  ClientInstance *v11; // r5@8
  HoloPlayspaceSetupCleanupStrategy *v12; // r6@8
  unsigned int *result; // r0@8
  void (__fastcall *v14)(_DWORD, unsigned int **); // r2@9
  unsigned int v15; // r1@15
  unsigned int *v16; // r1@21
  unsigned int *v17; // r5@27
  int v18; // r4@34
  unsigned int *v19; // r1@35
  unsigned int *v20; // r5@41
  unsigned int *v21; // r2@49
  signed int v22; // r1@51
  int v23; // [sp+Ch] [bp-2Ch]@1
  char v24; // [sp+10h] [bp-28h]@1
  int v25; // [sp+14h] [bp-24h]@2
  unsigned int *v26; // [sp+18h] [bp-20h]@9

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v23, "holographic_postrender_screen.holographic_postrender_screen");
  j__Z12createScreenI20MinecraftScreenModel25MinecraftScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v24,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v8 = *(_QWORD *)&v24;
  if ( v25 )
    v9 = (unsigned int *)(v25 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
      ++*v9;
  v11 = *(ClientInstance **)(v2 + 8);
  v12 = (HoloPlayspaceSetupCleanupStrategy *)operator new(0x48u);
  result = (unsigned int *)HoloPlayspaceSetupCleanupStrategy::HoloPlayspaceSetupCleanupStrategy(v12, v11);
  if ( (_DWORD)v8 )
    v14 = *(void (__fastcall **)(_DWORD, unsigned int **))(*(_DWORD *)v8 + 272);
    v26 = (unsigned int *)v12;
    v14(v8, &v26);
    result = v26;
    if ( v26 )
      result = (unsigned int *)(*(int (**)(void))(*v26 + 4))();
    v12 = 0;
    v26 = 0;
  *(_QWORD *)v4 = v8;
  if ( HIDWORD(v8) )
    result = (unsigned int *)(HIDWORD(v8) + 4);
        v15 = __ldrex(result);
      while ( __strex(v15 + 1, result) );
      ++*result;
  if ( v12 )
    result = (unsigned int *)(*(int (__fastcall **)(HoloPlayspaceSetupCleanupStrategy *))(*(_DWORD *)v12 + 4))(v12);
    v16 = (unsigned int *)(HIDWORD(v8) + 4);
        result = (unsigned int *)__ldrex(v16);
      while ( __strex((unsigned int)result - 1, v16) );
      result = (unsigned int *)(*v16)--;
    if ( result == (unsigned int *)1 )
      v17 = (unsigned int *)(HIDWORD(v8) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v8) + 8))(HIDWORD(v8));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (unsigned int *)__ldrex(v17);
        while ( __strex((unsigned int)result - 1, v17) );
      }
      else
        result = (unsigned int *)(*v17)--;
      if ( result == (unsigned int *)1 )
        result = (unsigned int *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v8) + 12))(HIDWORD(v8));
  v18 = v25;
    v19 = (unsigned int *)(v25 + 4);
        result = (unsigned int *)__ldrex(v19);
      while ( __strex((unsigned int)result - 1, v19) );
      result = (unsigned int *)(*v19)--;
      v20 = (unsigned int *)(v18 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
          result = (unsigned int *)__ldrex(v20);
        while ( __strex((unsigned int)result - 1, v20) );
        result = (unsigned int *)(*v20)--;
        result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
  return result;
}


void __fastcall SceneFactory::createSkinPickerScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  int v7; // r4@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r5@8
  unsigned int v11; // r0@10
  void *v12; // r0@15
  unsigned int *v13; // r2@17
  signed int v14; // r1@19
  int v15; // [sp+8h] [bp-28h]@1
  char v16; // [sp+Ch] [bp-24h]@1
  int v17; // [sp+10h] [bp-20h]@1

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v15, "skin_picker.skin_picker_screen");
  j__Z12createScreenI19MainMenuScreenModel26SkinPickerScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v16,
    v2,
    v3,
    v5,
    (const char **)v6);
  SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v16);
  v7 = v17;
  if ( v17 )
  {
    v8 = (unsigned int *)(v17 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  v12 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
}


unsigned int __fastcall SceneFactory::createProgressScreen(unsigned __int64 *a1, int a2, int *a3, int a4, char a5, char a6, char a7)
{
  int *v7; // r7@1
  int v8; // r9@1
  unsigned __int64 *v9; // r8@1
  int v10; // r6@1
  MinecraftGame *v11; // r5@1
  ClientInstance *v12; // r4@1
  void **v13; // r0@1
  void *v14; // r0@1
  unsigned int *v15; // r0@3
  unsigned int v16; // r1@5
  unsigned int result; // r0@8
  int v18; // r4@8
  unsigned int *v19; // r1@9
  unsigned int *v20; // r5@15
  int v21; // r4@22
  unsigned int *v22; // r1@23
  unsigned int *v23; // r5@29
  unsigned int *v24; // r2@37
  signed int v25; // r1@39
  int v26; // [sp+1Ch] [bp-3Ch]@2
  int v27; // [sp+20h] [bp-38h]@2
  int v28; // [sp+28h] [bp-30h]@1
  int v29; // [sp+2Ch] [bp-2Ch]@1
  int v30; // [sp+30h] [bp-28h]@2
  char v31; // [sp+35h] [bp-23h]@1
  char v32; // [sp+36h] [bp-22h]@1
  char v33; // [sp+37h] [bp-21h]@1

  v7 = a3;
  v8 = a2;
  v9 = a1;
  v10 = a4;
  v32 = a6;
  v33 = a5;
  v31 = a7;
  v11 = *(MinecraftGame **)a2;
  v12 = *(ClientInstance **)(a2 + 8);
  v13 = sub_DA7364((void **)&v28, "progress.world_loading_progress_screen");
  createScreen<MinecraftScreenModel,ProgressScreenController,std::string const&,std::deque<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>,bool &,bool &,bool &>(
    &v29,
    v8,
    v11,
    v12,
    (const char **)v13,
    v7,
    v10,
    &v33,
    &v32,
    &v31);
  v14 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v24 = (unsigned int *)(v28 - 4);
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
      j_j_j_j_j__ZdlPv_9(v14);
  }
  v26 = v29;
  v27 = v30;
  if ( v30 )
    v15 = (unsigned int *)(v30 + 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 + 1, v15) );
      ++*v15;
  result = SceneFactory::_createScreen(v9, v8, (unsigned __int64 *)&v26);
  v18 = v27;
  if ( v27 )
    v19 = (unsigned int *)(v27 + 4);
        result = __ldrex(v19);
      while ( __strex(result - 1, v19) );
      result = (*v19)--;
    if ( result == 1 )
      v20 = (unsigned int *)(v18 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v20);
        while ( __strex(result - 1, v20) );
      }
      else
        result = (*v20)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
  v21 = v30;
    v22 = (unsigned int *)(v30 + 4);
        result = __ldrex(v22);
      while ( __strex(result - 1, v22) );
      result = (*v22)--;
      v23 = (unsigned int *)(v21 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
          result = __ldrex(v23);
        while ( __strex(result - 1, v23) );
        result = (*v23)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
  return result;
}


unsigned int __fastcall SceneFactory::createModalProgressScreen(int a1, int a2, int a3, float a4, char a5, char a6, int *a7, int a8)
{
  unsigned __int64 *v12; // r8@1
  int v13; // r7@1
  int v14; // r4@1
  int v15; // r9@1
  MinecraftGame *v16; // r5@1
  ClientInstance *v17; // r6@1
  void *v18; // r0@4
  unsigned int *v19; // r0@6
  unsigned int v20; // r1@8
  unsigned int result; // r0@11
  int v22; // r4@11
  unsigned int *v23; // r1@12
  unsigned int *v24; // r5@18
  int v25; // r4@25
  unsigned int *v26; // r1@26
  unsigned int *v27; // r5@32
  unsigned int *v28; // r2@40
  signed int v29; // r1@42
  int v30; // [sp+18h] [bp-40h]@5
  int v31; // [sp+1Ch] [bp-3Ch]@5
  int v32; // [sp+24h] [bp-34h]@2
  int v33; // [sp+28h] [bp-30h]@4
  int v34; // [sp+2Ch] [bp-2Ch]@5
  float v35; // [sp+30h] [bp-28h]@4
  char v36; // [sp+36h] [bp-22h]@1
  char v37; // [sp+37h] [bp-21h]@1

  __asm { VLDR            S0, [SP,#0x58+arg_C] }
  v12 = (unsigned __int64 *)a1;
  v13 = a3;
  v14 = a2;
  v15 = LODWORD(a4);
  v37 = a5;
  v36 = a6;
  __asm { VSTR            S0, [SP,#0x58+var_28] }
  v16 = *(MinecraftGame **)a2;
  v17 = *(ClientInstance **)(a2 + 8);
  if ( *(_DWORD *)(*a7 - 12) )
    sub_DA73B4(&v32, a7);
  else
    sub_DA7364((void **)&v32, "progress.modal_progress_screen");
  createScreen<MinecraftScreenModel,ProgressScreenController,std::string const&,std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,bool &,bool &,float &>(
    &v33,
    v14,
    v16,
    v17,
    (const char **)&v32,
    *(float *)&v13,
    v15,
    (int)&v37,
    (int)&v36,
    (int)&v35);
  v18 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
  {
    v28 = (unsigned int *)(v32 - 4);
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
      j_j_j_j_j__ZdlPv_9(v18);
  }
  v30 = v33;
  v31 = v34;
  if ( v34 )
    v19 = (unsigned int *)(v34 + 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 + 1, v19) );
      ++*v19;
  result = SceneFactory::_createScreen(v12, v14, (unsigned __int64 *)&v30);
  v22 = v31;
  if ( v31 )
    v23 = (unsigned int *)(v31 + 4);
        result = __ldrex(v23);
      while ( __strex(result - 1, v23) );
      result = (*v23)--;
    if ( result == 1 )
      v24 = (unsigned int *)(v22 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v24);
        while ( __strex(result - 1, v24) );
      }
      else
        result = (*v24)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
  v25 = v34;
    v26 = (unsigned int *)(v34 + 4);
        result = __ldrex(v26);
      while ( __strex(result - 1, v26) );
      result = (*v26)--;
      v27 = (unsigned int *)(v25 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
          result = __ldrex(v27);
        while ( __strex(result - 1, v27) );
        result = (*v27)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
  return result;
}


void __fastcall SceneFactory::createServerItemPurchaseScreen(unsigned __int64 *a1, int a2, StoreCatalogItemModel *a3, int a4)
{
  int v4; // r4@1
  StoreCatalogItemModel *v5; // r5@1
  MinecraftGame *v6; // r6@1
  unsigned __int64 *v7; // r8@1
  ClientInstance *v8; // r7@1
  void **v9; // r0@1
  int v10; // r4@1
  unsigned int *v11; // r1@2
  unsigned int v12; // r0@4
  unsigned int *v13; // r5@8
  unsigned int v14; // r0@10
  void *v15; // r0@15
  unsigned int *v16; // r2@17
  signed int v17; // r1@19
  int v18; // [sp+14h] [bp-2Ch]@1
  char v19; // [sp+18h] [bp-28h]@1
  int v20; // [sp+1Ch] [bp-24h]@1
  int v21; // [sp+20h] [bp-20h]@1

  v4 = a2;
  v21 = a4;
  v5 = a3;
  v6 = *(MinecraftGame **)a2;
  v7 = a1;
  v8 = *(ClientInstance **)(a2 + 8);
  v9 = sub_DA7364((void **)&v18, "server_purchase_item.server_purchase_item");
  createScreen<MainMenuScreenModel,ServerItemPurchaseScreenController,StoreCatalogItemModel const&,StoreNavigationOrigin &>(
    &v19,
    v4,
    v6,
    v8,
    (const char **)v9,
    v5,
    &v21);
  SceneFactory::_createScreen(v7, v4, (unsigned __int64 *)&v19);
  v10 = v20;
  if ( v20 )
  {
    v11 = (unsigned int *)(v20 + 4);
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
  v15 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v18 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
}


void __fastcall SceneFactory::_createInventoryScreenCache(SceneFactory *this)
{
  SceneFactory::_createInventoryScreenCache(this);
}


unsigned int __fastcall SceneFactory::createCubeMapScreen(SceneFactory *this, int a2, char a3)
{
  int v3; // r7@1
  SceneFactory *v4; // r5@1
  int v5; // r0@1
  int v6; // r4@1
  __int64 v7; // kr00_8@1
  int v8; // r1@4
  void (__fastcall *v9)(_DWORD, int *); // r2@4
  unsigned int *v10; // r0@8
  unsigned int v11; // r1@10
  unsigned int result; // r0@15
  unsigned int *v13; // r1@16
  unsigned int *v14; // r4@22
  int v15; // r4@29
  unsigned int *v16; // r1@30
  unsigned int *v17; // r5@36
  int v18; // [sp+8h] [bp-30h]@3
  char v19; // [sp+Ch] [bp-2Ch]@1
  int v20; // [sp+10h] [bp-28h]@1
  char v21; // [sp+17h] [bp-21h]@1
  char v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@4

  v3 = a2;
  v21 = a3;
  v4 = this;
  v5 = ClientInstance::getHoloInput(*(ClientInstance **)(a2 + 8));
  v6 = (*(int (**)(void))(*(_DWORD *)v5 + 44))();
  std::__shared_ptr<CubemapBackgroundScreen,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<CubemapBackgroundScreen>,MinecraftGame &,ClientInstance &,bool &>(
    (int)&v19,
    (int)&v22,
    *(MinecraftGame **)v3,
    *(ClientInstance **)(v3 + 8),
    (bool *)&v21);
  v7 = *(_QWORD *)&v19;
  *(_DWORD *)&v19 = 0;
  v20 = 0;
  if ( v6 )
    v6 = 5;
  createScreenSetupStrategy((DefaultUIScreenSetupCleanupStrategy **)&v18, *(ClientInstance **)(v3 + 8), v6);
  if ( (_DWORD)v7 )
  {
    v8 = v18;
    v9 = *(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)v7 + 272);
    v18 = 0;
    v23 = v8;
    v9(v7, &v23);
    if ( v23 )
      (*(void (**)(void))(*(_DWORD *)v23 + 4))();
    v23 = 0;
  }
  *(_QWORD *)v4 = v7;
  if ( HIDWORD(v7) )
    v10 = (unsigned int *)(HIDWORD(v7) + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
    }
    else
      ++*v10;
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  result = 0;
  v18 = 0;
    v13 = (unsigned int *)(HIDWORD(v7) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v7) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v7) + 8))(HIDWORD(v7));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v7) + 12))(HIDWORD(v7));
  v15 = v20;
  if ( v20 )
    v16 = (unsigned int *)(v20 + 4);
        result = __ldrex(v16);
      while ( __strex(result - 1, v16) );
      result = (*v16)--;
      v17 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          result = __ldrex(v17);
        while ( __strex(result - 1, v17) );
        result = (*v17)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  return result;
}


void __fastcall SceneFactory::createAutoSaveInfoScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  int v7; // r4@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r5@8
  unsigned int v11; // r0@10
  void *v12; // r0@15
  unsigned int *v13; // r2@17
  signed int v14; // r1@19
  int v15; // [sp+8h] [bp-28h]@1
  char v16; // [sp+Ch] [bp-24h]@1
  int v17; // [sp+10h] [bp-20h]@1

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v15, "auto_save_info.auto_save_info_screen");
  j__Z12createScreenI19MainMenuScreenModel28AutoSaveInfoScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v16,
    v2,
    v3,
    v5,
    (const char **)v6);
  SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v16);
  v7 = v17;
  if ( v17 )
  {
    v8 = (unsigned int *)(v17 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  v12 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
}


unsigned int __fastcall SceneFactory::createXblFirstLaunchScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  unsigned int result; // r0@8
  int v11; // r4@8
  unsigned int *v12; // r1@9
  unsigned int *v13; // r5@15
  int v14; // r4@22
  unsigned int *v15; // r1@23
  unsigned int *v16; // r5@29
  unsigned int *v17; // r2@37
  signed int v18; // r1@39
  int v19; // [sp+8h] [bp-30h]@2
  int v20; // [sp+Ch] [bp-2Ch]@2
  int v21; // [sp+14h] [bp-24h]@1
  int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v21, "xbl_first_launch.xbl_first_launch_screen");
  j__Z12createScreenI20MinecraftScreenModel30XblFirstLaunchScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v22,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v19 = v22;
  v20 = v23;
  if ( v23 )
    v8 = (unsigned int *)(v23 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  result = SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v19);
  v11 = v20;
  if ( v20 )
    v12 = (unsigned int *)(v20 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v14 = v23;
    v15 = (unsigned int *)(v23 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return result;
}


void __fastcall SceneFactory::createCommandBlockMinecartScreen(unsigned __int64 *a1, int a2, int a3, unsigned __int64 *a4)
{
  int v4; // r4@1
  MinecraftGame *v5; // r6@1
  unsigned __int64 *v6; // r5@1
  ClientInstance *v7; // r7@1
  unsigned __int64 *v8; // r8@1
  void **v9; // r0@1
  int v10; // r4@1
  unsigned int *v11; // r1@2
  unsigned int v12; // r0@4
  unsigned int *v13; // r5@8
  unsigned int v14; // r0@10
  void *v15; // r0@15
  unsigned int *v16; // r2@17
  signed int v17; // r1@19
  int v18; // [sp+Ch] [bp-2Ch]@1
  char v19; // [sp+10h] [bp-28h]@1
  int v20; // [sp+14h] [bp-24h]@1

  v4 = a2;
  v5 = *(MinecraftGame **)a2;
  v6 = a4;
  v7 = *(ClientInstance **)(a2 + 8);
  v8 = a1;
  v9 = sub_DA7364((void **)&v18, "command_block.command_block_screen");
  createScreen<ClientInstanceScreenModel,CommandBlockScreenController,EntityUniqueID const&>(
    &v19,
    v4,
    v5,
    v7,
    (const char **)v9,
    v6);
  SceneFactory::_createScreen(v8, v4, (unsigned __int64 *)&v19);
  v10 = v20;
  if ( v20 )
  {
    v11 = (unsigned int *)(v20 + 4);
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
  v15 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v18 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
}


unsigned int __fastcall SceneFactory::createXblGamerProfileCardScreen(unsigned __int64 *a1, int a2, int *a3, int a4)
{
  int v4; // r9@1
  MinecraftGame *v5; // r6@1
  int v6; // r5@1
  ClientInstance *v7; // r7@1
  int *v8; // r4@1
  unsigned __int64 *v9; // r8@1
  void **v10; // r0@1
  void *v11; // r0@1
  unsigned int *v12; // r0@3
  unsigned int v13; // r1@5
  unsigned int result; // r0@8
  int v15; // r4@8
  unsigned int *v16; // r1@9
  unsigned int *v17; // r5@15
  int v18; // r4@22
  unsigned int *v19; // r1@23
  unsigned int *v20; // r5@29
  unsigned int *v21; // r2@37
  signed int v22; // r1@39
  int v23; // [sp+10h] [bp-38h]@2
  int v24; // [sp+14h] [bp-34h]@2
  int v25; // [sp+1Ch] [bp-2Ch]@1
  int v26; // [sp+20h] [bp-28h]@1
  int v27; // [sp+24h] [bp-24h]@2

  v4 = a2;
  v5 = *(MinecraftGame **)a2;
  v6 = a4;
  v7 = *(ClientInstance **)(a2 + 8);
  v8 = a3;
  v9 = a1;
  v10 = sub_DA7364((void **)&v25, "xbl_profile_card.xbl_profile_card_screen");
  createScreen<MinecraftScreenModel,XblGamerProfileCardScreenController,std::string const&,mce::UUID &>(
    &v26,
    v4,
    v5,
    v7,
    (const char **)v10,
    v8,
    v6);
  v11 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v25 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  }
  v23 = v26;
  v24 = v27;
  if ( v27 )
    v12 = (unsigned int *)(v27 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
      ++*v12;
  result = SceneFactory::_createScreen(v9, v4, (unsigned __int64 *)&v23);
  v15 = v24;
  if ( v24 )
    v16 = (unsigned int *)(v24 + 4);
        result = __ldrex(v16);
      while ( __strex(result - 1, v16) );
      result = (*v16)--;
    if ( result == 1 )
      v17 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v17);
        while ( __strex(result - 1, v17) );
      }
      else
        result = (*v17)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  v18 = v27;
    v19 = (unsigned int *)(v27 + 4);
        result = __ldrex(v19);
      while ( __strex(result - 1, v19) );
      result = (*v19)--;
      v20 = (unsigned int *)(v18 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
          result = __ldrex(v20);
        while ( __strex(result - 1, v20) );
        result = (*v20)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
  return result;
}


unsigned int __fastcall SceneFactory::createFurnaceScreen(SceneFactory *this, Player *a2, const BlockPos *a3, const BlockPos *a4)
{
  Player *v4; // r4@1
  unsigned __int64 *v5; // r8@1
  const BlockPos *v6; // r6@1
  Options *v7; // r0@1
  int v8; // r0@1
  signed int v9; // r1@1
  MinecraftGame *v10; // r7@3
  ClientInstance *v11; // r5@3
  void **v12; // r0@3
  void *v13; // r0@3
  unsigned int *v14; // r0@5
  unsigned int v15; // r1@7
  unsigned int result; // r0@10
  int v17; // r4@10
  unsigned int *v18; // r1@11
  unsigned int *v19; // r5@17
  int v20; // r4@24
  unsigned int *v21; // r1@25
  unsigned int *v22; // r5@31
  unsigned int *v23; // r2@39
  signed int v24; // r1@41
  int v25; // [sp+10h] [bp-38h]@4
  int v26; // [sp+14h] [bp-34h]@4
  int v27; // [sp+1Ch] [bp-2Ch]@3
  int v28; // [sp+20h] [bp-28h]@3
  int v29; // [sp+24h] [bp-24h]@4
  int v30; // [sp+28h] [bp-20h]@3

  v4 = a2;
  v5 = (unsigned __int64 *)this;
  v6 = a4;
  v7 = (Options *)ClientInstance::getOptions(*((ClientInstance **)a2 + 2));
  v8 = Options::getUIProfile(v7);
  v9 = 0;
  if ( !v8 )
    v9 = 1;
  v30 = v9;
  v10 = *(MinecraftGame **)v4;
  v11 = (ClientInstance *)*((_DWORD *)v4 + 2);
  v12 = sub_DA7364((void **)&v27, "furnace.furnace_screen");
  createScreen<ClientInstanceScreenModel,FurnaceScreenController,BlockPos const&,InteractionModel &>(
    &v28,
    (int)v4,
    v10,
    v11,
    (const char **)v12,
    v6,
    &v30);
  v13 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v27 - 4);
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
      j_j_j_j_j__ZdlPv_9(v13);
  }
  v25 = v28;
  v26 = v29;
  if ( v29 )
    v14 = (unsigned int *)(v29 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  result = SceneFactory::_createScreen(v5, (int)v4, (unsigned __int64 *)&v25);
  v17 = v26;
  if ( v26 )
    v18 = (unsigned int *)(v26 + 4);
        result = __ldrex(v18);
      while ( __strex(result - 1, v18) );
      result = (*v18)--;
    if ( result == 1 )
      v19 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v19);
        while ( __strex(result - 1, v19) );
      }
      else
        result = (*v19)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  v20 = v29;
    v21 = (unsigned int *)(v29 + 4);
        result = __ldrex(v21);
      while ( __strex(result - 1, v21) );
      result = (*v21)--;
      v22 = (unsigned int *)(v20 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
          result = __ldrex(v22);
        while ( __strex(result - 1, v22) );
        result = (*v22)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
  return result;
}


void __fastcall SceneFactory::createCoinPurchaseScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  int v7; // r4@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r5@8
  unsigned int v11; // r0@10
  void *v12; // r0@15
  unsigned int *v13; // r2@17
  signed int v14; // r1@19
  int v15; // [sp+8h] [bp-28h]@1
  char v16; // [sp+Ch] [bp-24h]@1
  int v17; // [sp+10h] [bp-20h]@1

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v15, "coin_purchase.coin_purchase_screen");
  j__Z12createScreenI19MainMenuScreenModel32MinecoinPurchaseScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v16,
    v2,
    v3,
    v5,
    (const char **)v6);
  SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v16);
  v7 = v17;
  if ( v17 )
  {
    v8 = (unsigned int *)(v17 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  v12 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
}


void __fastcall SceneFactory::createRealmsSettingsScreen(SceneFactory *this, const Realms::World *a2, const Realms::World *a3)
{
  const Realms::World *v3; // r4@1
  MinecraftGame *v4; // r6@1
  const Realms::World *v5; // r5@1
  ClientInstance *v6; // r7@1
  unsigned __int64 *v7; // r8@1
  void **v8; // r0@1
  int v9; // r4@1
  unsigned int *v10; // r1@2
  unsigned int v11; // r0@4
  unsigned int *v12; // r5@8
  unsigned int v13; // r0@10
  void *v14; // r0@15
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  int v17; // [sp+Ch] [bp-2Ch]@1
  char v18; // [sp+10h] [bp-28h]@1
  int v19; // [sp+14h] [bp-24h]@1

  v3 = a2;
  v4 = *(MinecraftGame **)a2;
  v5 = a3;
  v6 = (ClientInstance *)*((_DWORD *)a2 + 2);
  v7 = (unsigned __int64 *)this;
  v8 = sub_DA7364((void **)&v17, "settings.screen_realm_settings");
  createScreen<MainMenuScreenModel,SettingsScreenController,Realms::World const&>(
    &v18,
    (int)v3,
    v4,
    v6,
    (const char **)v8,
    v5);
  SceneFactory::_createScreen(v7, (int)v3, (unsigned __int64 *)&v18);
  v9 = v19;
  if ( v19 )
  {
    v10 = (unsigned int *)(v19 + 4);
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
  }
  v14 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
}


void __fastcall SceneFactory::createRealmsCreateScreen(unsigned __int64 *a1, int a2, int a3)
{
  SceneFactory::createRealmsCreateScreen(a1, a2, a3);
}


Json::Value *__fastcall SceneFactory::_createSafeZoneSizeVar(SceneFactory *this, float a2, int a3, unsigned int a4)
{
  unsigned int v4; // r5@1
  int v5; // r6@1
  SceneFactory *v6; // r4@1
  int v7; // r7@1
  float v8; // r1@1
  int v9; // r5@1
  int v11; // [sp+0h] [bp-38h]@1
  char v12; // [sp+10h] [bp-28h]@1

  v4 = a4;
  v5 = a3;
  v6 = this;
  Json::Value::Value(this, 6);
  v7 = Json::Value::operator[]((int)v6, v4 ^ 1);
  SceneFactory::_calculateSafeZoneSize((SceneFactory *)&v12, v8, v5);
  Json::Value::operator=(v7, (const Json::Value *)&v12);
  Json::Value::~Value((Json::Value *)&v12);
  v9 = Json::Value::operator[]((int)v6, v4);
  Json::Value::Value((Json::Value *)&v11, "100%");
  Json::Value::operator=(v9, (const Json::Value *)&v11);
  return Json::Value::~Value((Json::Value *)&v11);
}


void __fastcall SceneFactory::createRealmsWhitelistScreen(SceneFactory *this, const Realms::World *a2, const Realms::World *a3)
{
  SceneFactory::createRealmsWhitelistScreen(this, a2, a3);
}


void __fastcall SceneFactory::createStoreItemListScreen(unsigned __int64 *a1, int a2, int *a3, int *a4, int *a5)
{
  SceneFactory::createStoreItemListScreen(a1, a2, a3, a4, a5);
}


unsigned int __fastcall SceneFactory::createPatchNotesScreen(unsigned __int64 *a1, int a2, PatchNotesModel **a3)
{
  int v3; // r4@1
  MinecraftGame *v4; // r6@1
  PatchNotesModel **v5; // r5@1
  ClientInstance *v6; // r7@1
  unsigned __int64 *v7; // r8@1
  void **v8; // r0@1
  void *v9; // r0@1
  unsigned int *v10; // r0@3
  unsigned int v11; // r1@5
  unsigned int result; // r0@8
  int v13; // r4@8
  unsigned int *v14; // r1@9
  unsigned int *v15; // r5@15
  int v16; // r4@22
  unsigned int *v17; // r1@23
  unsigned int *v18; // r5@29
  unsigned int *v19; // r2@37
  signed int v20; // r1@39
  int v21; // [sp+Ch] [bp-34h]@2
  int v22; // [sp+10h] [bp-30h]@2
  int v23; // [sp+18h] [bp-28h]@1
  int v24; // [sp+1Ch] [bp-24h]@1
  int v25; // [sp+20h] [bp-20h]@2

  v3 = a2;
  v4 = *(MinecraftGame **)a2;
  v5 = a3;
  v6 = *(ClientInstance **)(a2 + 8);
  v7 = a1;
  v8 = sub_DA7364((void **)&v23, "patch_notes.patch_notes_screen");
  createScreen<MainMenuScreenModel,PatchNotesScreenController,std::unique_ptr<PatchNotesModel,std::default_delete<PatchNotesModel>>>(
    &v24,
    v3,
    v4,
    v6,
    (const char **)v8,
    v5);
  v9 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  }
  v21 = v24;
  v22 = v25;
  if ( v25 )
    v10 = (unsigned int *)(v25 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
      ++*v10;
  result = SceneFactory::_createScreen(v7, v3, (unsigned __int64 *)&v21);
  v13 = v22;
  if ( v22 )
    v14 = (unsigned int *)(v22 + 4);
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
      result = (*v14)--;
    if ( result == 1 )
      v15 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
      }
      else
        result = (*v15)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  v16 = v25;
    v17 = (unsigned int *)(v25 + 4);
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
      result = (*v17)--;
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
        result = (*v18)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  return result;
}


unsigned int __fastcall SceneFactory::createGlobalPauseScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  unsigned int result; // r0@8
  int v11; // r4@8
  unsigned int *v12; // r1@9
  unsigned int *v13; // r5@15
  int v14; // r4@22
  unsigned int *v15; // r1@23
  unsigned int *v16; // r5@29
  unsigned int *v17; // r2@37
  signed int v18; // r1@39
  int v19; // [sp+8h] [bp-30h]@2
  int v20; // [sp+Ch] [bp-2Ch]@2
  int v21; // [sp+14h] [bp-24h]@1
  int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v21, "globalpause.globalpause_screen");
  j__Z12createScreenI25ClientInstanceScreenModel27GlobalPauseScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v22,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v19 = v22;
  v20 = v23;
  if ( v23 )
    v8 = (unsigned int *)(v23 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  result = SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v19);
  v11 = v20;
  if ( v20 )
    v12 = (unsigned int *)(v20 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v14 = v23;
    v15 = (unsigned int *)(v23 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return result;
}


unsigned int __fastcall SceneFactory::createWorkbenchScreen(SceneFactory *this, const BlockPos *a2, int a3, char a4)
{
  const BlockPos *v4; // r4@1
  unsigned __int64 *v5; // r9@1
  int v6; // r6@1
  Options *v7; // r0@1
  MinecraftGame *v8; // r5@2
  ClientInstance *v9; // r7@2
  void **v10; // r0@2
  void *v11; // r0@2
  int v12; // r5@3
  unsigned int *v13; // r0@4
  unsigned int v14; // r1@6
  MinecraftGame *v15; // r7@8
  ClientInstance *v16; // r5@8
  void **v17; // r0@8
  void *v18; // r0@8
  int v19; // r5@9
  unsigned int *v20; // r0@10
  unsigned int v21; // r1@12
  unsigned int result; // r0@15
  int v23; // r4@15
  unsigned int *v24; // r1@16
  unsigned int *v25; // r5@22
  int v26; // r4@27
  unsigned int *v27; // r1@28
  unsigned int *v28; // r5@34
  int v29; // r4@41
  unsigned int *v30; // r1@42
  unsigned int *v31; // r5@48
  unsigned int *v32; // r1@56
  unsigned int *v33; // r2@70
  signed int v34; // r1@72
  unsigned int *v35; // r2@74
  signed int v36; // r1@76
  int v37; // [sp+14h] [bp-64h]@3
  int v38; // [sp+18h] [bp-60h]@3
  int v39; // [sp+1Ch] [bp-5Ch]@2
  char v40; // [sp+23h] [bp-55h]@2
  int v41; // [sp+28h] [bp-50h]@2
  int v42; // [sp+2Ch] [bp-4Ch]@2
  int v43; // [sp+30h] [bp-48h]@3
  int v44; // [sp+34h] [bp-44h]@9
  int v45; // [sp+38h] [bp-40h]@9
  int v46; // [sp+3Ch] [bp-3Ch]@8
  char v47; // [sp+43h] [bp-35h]@8
  int v48; // [sp+48h] [bp-30h]@8
  int v49; // [sp+4Ch] [bp-2Ch]@8
  int v50; // [sp+50h] [bp-28h]@9
  char v51; // [sp+57h] [bp-21h]@1

  v4 = a2;
  v51 = a4;
  v5 = (unsigned __int64 *)this;
  v6 = a3;
  v7 = (Options *)ClientInstance::getOptions(*((ClientInstance **)a2 + 2));
  if ( Options::getUIProfile(v7) )
  {
    v8 = *(MinecraftGame **)v4;
    v9 = (ClientInstance *)*((_DWORD *)v4 + 2);
    v10 = sub_DA7364((void **)&v41, "crafting_pocket.crafting_screen_pocket");
    v40 = 1;
    v39 = 1;
    createScreen<ClientInstanceScreenModel,CraftingScreenController,bool &,BlockPos const&,bool,CraftingType>(
      &v42,
      (int)v4,
      v8,
      v9,
      (const char **)v10,
      &v51,
      v6,
      &v40,
      &v39);
    v11 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
    {
      v33 = (unsigned int *)(v41 - 4);
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
        j_j_j_j_j__ZdlPv_9(v11);
    }
    v12 = v42;
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v42 + 20))(v42, v6);
    v37 = v12;
    v38 = v43;
    if ( v43 )
      v13 = (unsigned int *)(v43 + 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 + 1, v13) );
        ++*v13;
    result = SceneFactory::_createScreen(v5, (int)v4, (unsigned __int64 *)&v37);
    v23 = v38;
    if ( v38 )
      v24 = (unsigned int *)(v38 + 4);
          result = __ldrex(v24);
        while ( __strex(result - 1, v24) );
        result = (*v24)--;
      if ( result == 1 )
        v25 = (unsigned int *)(v23 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v25);
          while ( __strex(result - 1, v25) );
        }
        else
          result = (*v25)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
    v29 = v43;
      v30 = (unsigned int *)(v43 + 4);
          result = __ldrex(v30);
        while ( __strex(result - 1, v30) );
        result = (*v30)--;
        v31 = (unsigned int *)(v29 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 8))(v29);
            result = __ldrex(v31);
          while ( __strex(result - 1, v31) );
          goto LABEL_67;
LABEL_66:
        result = (*v31)--;
LABEL_67:
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v29 + 12))(v29);
        return result;
  }
  else
    v15 = *(MinecraftGame **)v4;
    v16 = (ClientInstance *)*((_DWORD *)v4 + 2);
    v17 = sub_DA7364((void **)&v48, "crafting.crafting_screen");
    v47 = 0;
    v46 = 1;
      &v49,
      v15,
      v16,
      (const char **)v17,
      &v47,
      &v46);
    v18 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v48 - 4);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j_j__ZdlPv_9(v18);
    v19 = v49;
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v49 + 20))(v49, v6);
    v44 = v19;
    v45 = v50;
    if ( v50 )
      v20 = (unsigned int *)(v50 + 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 + 1, v20) );
        ++*v20;
    result = SceneFactory::_createScreen(v5, (int)v4, (unsigned __int64 *)&v44);
    v26 = v45;
    if ( v45 )
      v27 = (unsigned int *)(v45 + 4);
          result = __ldrex(v27);
        while ( __strex(result - 1, v27) );
        result = (*v27)--;
        v28 = (unsigned int *)(v26 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
            result = __ldrex(v28);
          while ( __strex(result - 1, v28) );
          result = (*v28)--;
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
    v29 = v50;
      v32 = (unsigned int *)(v50 + 4);
          result = __ldrex(v32);
        while ( __strex(result - 1, v32) );
        result = (*v32)--;
        goto LABEL_66;
  return result;
}


void __fastcall SceneFactory::createRealmsPendingInvitesScreen(SceneFactory *this, int a2, char a3)
{
  SceneFactory::createRealmsPendingInvitesScreen(this, a2, a3);
}


unsigned int __fastcall SceneFactory::createVRInformationScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  unsigned int result; // r0@8
  int v11; // r4@8
  unsigned int *v12; // r1@9
  unsigned int *v13; // r5@15
  int v14; // r4@22
  unsigned int *v15; // r1@23
  unsigned int *v16; // r5@29
  unsigned int *v17; // r2@37
  signed int v18; // r1@39
  int v19; // [sp+8h] [bp-30h]@2
  int v20; // [sp+Ch] [bp-2Ch]@2
  int v21; // [sp+14h] [bp-24h]@1
  int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v21, "vrscheme.vr_information_screen");
  j__Z12createScreenI20MinecraftScreenModel29VRInformationScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v22,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v19 = v22;
  v20 = v23;
  if ( v23 )
    v8 = (unsigned int *)(v23 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  result = SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v19);
  v11 = v20;
  if ( v20 )
    v12 = (unsigned int *)(v20 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v14 = v23;
    v15 = (unsigned int *)(v23 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return result;
}


int __fastcall SceneFactory::getCurrentSceneStack(SceneFactory *this)
{
  SceneFactory *v1; // r4@1
  int result; // r0@3

  v1 = this;
  if ( *((_BYTE *)this + 4) || !ClientInstance::isPrimaryClient(*((ClientInstance **)this + 2)) )
    result = ClientInstance::getClientSceneStack(*((ClientInstance **)v1 + 2));
  else
    result = ClientInstance::getMainSceneStack(*((ClientInstance **)v1 + 2));
  return result;
}


signed int __fastcall SceneFactory::_getUIScreenSetupStrategy(SceneFactory *this, int a2)
{
  SceneFactory *v2; // r4@1
  int v3; // r0@2
  int v4; // r5@2
  int v5; // r0@4
  int v6; // r1@4
  bool v7; // zf@4
  signed int result; // r0@4
  int v9; // r1@8

  v2 = this;
  if ( a2 == 1 )
  {
    v3 = ClientInstance::getHoloInput(*((ClientInstance **)this + 2));
    v4 = (*(int (**)(void))(*(_DWORD *)v3 + 268))() != 0;
  }
  else
    v4 = 0;
  v5 = ClientInstance::getHoloInput(*((ClientInstance **)v2 + 2));
  v6 = (*(int (**)(void))(*(_DWORD *)v5 + 44))();
  v7 = v4 == 0;
  result = 0;
  if ( !v4 )
    v7 = v6 == 1;
  if ( v7 )
    v9 = ClientInstance::getLevel(*((ClientInstance **)v2 + 2));
    result = 4;
    if ( !v9 )
      result = 3;
  return result;
}


unsigned int __fastcall SceneFactory::createFileDownloadProgressScreen(unsigned __int64 *a1, int a2, int *a3, int *a4)
{
  int v4; // r9@1
  MinecraftGame *v5; // r6@1
  int *v6; // r5@1
  ClientInstance *v7; // r7@1
  int *v8; // r4@1
  unsigned __int64 *v9; // r8@1
  void **v10; // r0@1
  void *v11; // r0@1
  unsigned int *v12; // r0@3
  unsigned int v13; // r1@5
  unsigned int result; // r0@8
  int v15; // r4@8
  unsigned int *v16; // r1@9
  unsigned int *v17; // r5@15
  int v18; // r4@22
  unsigned int *v19; // r1@23
  unsigned int *v20; // r5@29
  unsigned int *v21; // r2@37
  signed int v22; // r1@39
  int v23; // [sp+10h] [bp-38h]@2
  int v24; // [sp+14h] [bp-34h]@2
  int v25; // [sp+1Ch] [bp-2Ch]@1
  int v26; // [sp+20h] [bp-28h]@1
  int v27; // [sp+24h] [bp-24h]@2

  v4 = a2;
  v5 = *(MinecraftGame **)a2;
  v6 = a4;
  v7 = *(ClientInstance **)(a2 + 8);
  v8 = a3;
  v9 = a1;
  v10 = sub_DA7364((void **)&v25, "file_upload.file_transmission_screen");
  createScreen<MainMenuScreenModel,FileDownloadScreenController,std::string const&,std::string const&>(
    &v26,
    v4,
    v5,
    v7,
    (const char **)v10,
    v8,
    v6);
  v11 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v25 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  }
  v23 = v26;
  v24 = v27;
  if ( v27 )
    v12 = (unsigned int *)(v27 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
      ++*v12;
  result = SceneFactory::_createScreen(v9, v4, (unsigned __int64 *)&v23);
  v15 = v24;
  if ( v24 )
    v16 = (unsigned int *)(v24 + 4);
        result = __ldrex(v16);
      while ( __strex(result - 1, v16) );
      result = (*v16)--;
    if ( result == 1 )
      v17 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v17);
        while ( __strex(result - 1, v17) );
      }
      else
        result = (*v17)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  v18 = v27;
    v19 = (unsigned int *)(v27 + 4);
        result = __ldrex(v19);
      while ( __strex(result - 1, v19) );
      result = (*v19)--;
      v20 = (unsigned int *)(v18 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
          result = __ldrex(v20);
        while ( __strex(result - 1, v20) );
        result = (*v20)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
  return result;
}


void __fastcall SceneFactory::createCreateWorldFromTemplateScreen(SceneFactory *this, const LevelSummary *a2, int *a3)
{
  const LevelSummary *v3; // r4@1
  MinecraftGame *v4; // r6@1
  int *v5; // r5@1
  ClientInstance *v6; // r7@1
  unsigned __int64 *v7; // r8@1
  void **v8; // r0@1
  int v9; // r4@1
  unsigned int *v10; // r1@2
  unsigned int v11; // r0@4
  unsigned int *v12; // r5@8
  unsigned int v13; // r0@10
  void *v14; // r0@15
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  char v17; // [sp+13h] [bp-2Dh]@1
  int v18; // [sp+18h] [bp-28h]@1
  char v19; // [sp+1Ch] [bp-24h]@1
  int v20; // [sp+20h] [bp-20h]@1

  v3 = a2;
  v4 = *(MinecraftGame **)a2;
  v5 = a3;
  v6 = (ClientInstance *)*((_DWORD *)a2 + 2);
  v7 = (unsigned __int64 *)this;
  v8 = sub_DA7364((void **)&v18, "settings.screen_template_create");
  v17 = 1;
  createScreen<MainMenuScreenModel,SettingsScreenController,LevelSummary const&,bool>(
    &v19,
    (int)v3,
    v4,
    v6,
    (const char **)v8,
    v5,
    &v17);
  SceneFactory::_createScreen(v7, (int)v3, (unsigned __int64 *)&v19);
  v9 = v20;
  if ( v20 )
  {
    v10 = (unsigned int *)(v20 + 4);
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
  }
  v14 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v18 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
}


unsigned int __fastcall SceneFactory::createInviteScreen(SceneFactory *this, SceneStack *a2, int a3)
{
  SceneStack *v3; // r9@1
  int v4; // r6@1
  SceneFactory *v5; // r8@1
  _DWORD *v6; // r0@1
  __int64 v7; // r1@1
  void *v8; // r0@3
  void *v9; // r0@4
  void *v10; // r0@5
  void *v11; // r0@6
  unsigned int result; // r0@8
  int v13; // r4@9
  unsigned int *v14; // r1@10
  unsigned int *v15; // r5@16
  unsigned int *v16; // r2@20
  signed int v17; // r1@22
  unsigned int *v18; // r2@24
  signed int v19; // r1@26
  unsigned int *v20; // r2@28
  signed int v21; // r1@30
  unsigned int *v22; // r2@32
  signed int v23; // r1@34
  _DWORD *v24; // [sp+10h] [bp-58h]@1
  __int64 v25; // [sp+18h] [bp-50h]@1
  int v26; // [sp+24h] [bp-44h]@1
  int v27; // [sp+2Ch] [bp-3Ch]@1
  int v28; // [sp+34h] [bp-34h]@1
  int v29; // [sp+3Ch] [bp-2Ch]@1
  int v30; // [sp+40h] [bp-28h]@1
  unsigned int v31; // [sp+44h] [bp-24h]@8

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v29, "invite.title");
  sub_DA7364((void **)&v28, "xbox.invitesignin.line1");
  sub_DA7364((void **)&v27, "xbox.invitesignin.line2");
  sub_DA7364((void **)&v26, "textures/ui/snowy");
  v6 = operator new(8u);
  LODWORD(v7) = sub_D742FC;
  *v6 = v3;
  v6[1] = v4;
  HIDWORD(v7) = sub_D741E8;
  v24 = v6;
  v25 = v7;
  SceneFactory::createXblOptionalSignInScreen((int)&v30, (int)v3, &v29, &v28, &v27, &v26, (int)&v24, 0);
  if ( (_DWORD)v25 )
    ((void (*)(void))v25)();
  v8 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v26 - 4);
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
      j_j_j_j_j__ZdlPv_9(v8);
  }
  v9 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v27 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v28 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v29 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  if ( v30 )
    *(_DWORD *)v5 = v30;
    result = v31;
    v31 = 0;
    *((_DWORD *)v5 + 1) = result;
    v30 = 0;
  else
    result = SceneFactory::_createInviteScreen(v5, (int)v3);
    v13 = v31;
    if ( v31 )
      v14 = (unsigned int *)(v31 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        v15 = (unsigned int *)(v13 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v15);
          while ( __strex(result - 1, v15) );
        }
        else
          result = (*v15)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  return result;
}


void __fastcall SceneFactory::createSkinPickerScreen(SceneFactory *this, int a2)
{
  SceneFactory::createSkinPickerScreen(this, a2);
}


void __fastcall SceneFactory::createSkinPackPurchaseScreen(SceneFactory *this, const StoreCatalogItemModel *a2, StoreCatalogItemModel *a3)
{
  SceneFactory::createSkinPackPurchaseScreen(this, a2, a3);
}


unsigned int __fastcall SceneFactory::createXblOptionalSignInScreen(int a1, int a2, int *a3, int *a4, int *a5, int *a6, int a7, int a8)
{
  int v8; // r5@1
  int v9; // r8@1
  int *v10; // r9@1
  int *v11; // r10@1
  Social::XboxLiveUserManager *v12; // r0@1
  int v13; // r4@1
  int v14; // r6@1
  unsigned int *v15; // r1@2
  unsigned int v16; // r0@4
  unsigned int *v17; // r7@8
  unsigned int v18; // r0@10
  unsigned int result; // r0@19
  MinecraftGame *v20; // r4@20
  ClientInstance *v21; // r7@20
  void **v22; // r0@20
  void *v23; // r0@20
  unsigned int *v24; // r0@22
  unsigned int v25; // r1@24
  int v26; // r4@27
  unsigned int *v27; // r1@28
  unsigned int *v28; // r5@34
  int v29; // r4@41
  unsigned int *v30; // r1@42
  unsigned int *v31; // r5@48
  unsigned int *v32; // r2@56
  signed int v33; // r1@58
  int v34; // [sp+1Ch] [bp-44h]@21
  int v35; // [sp+20h] [bp-40h]@21
  int v36; // [sp+28h] [bp-38h]@20
  int v37; // [sp+2Ch] [bp-34h]@20
  int v38; // [sp+30h] [bp-30h]@21
  Social::User *v39; // [sp+34h] [bp-2Ch]@1
  int v40; // [sp+38h] [bp-28h]@1

  v8 = a2;
  v9 = a1;
  v10 = a4;
  v11 = a3;
  ClientInstance::getUser((ClientInstance *)&v39, *(_DWORD *)(a2 + 8));
  v12 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v39);
  v13 = Social::XboxLiveUserManager::isSignedIn(v12);
  v14 = v40;
  if ( v40 )
  {
    v15 = (unsigned int *)(v40 + 4);
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
  if ( v13 )
    if ( a8 == 1 )
      if ( !*(_DWORD *)(a7 + 8) )
        sub_DA7654();
      (*(void (__fastcall **)(int))(a7 + 12))(a7);
    result = 0;
    *(_DWORD *)v9 = 0;
    *(_DWORD *)(v9 + 4) = 0;
  else
    v20 = *(MinecraftGame **)v8;
    v21 = *(ClientInstance **)(v8 + 8);
    v22 = sub_DA7364((void **)&v36, "xbl_optional_signin.xbl_optional_signin_screen");
    createScreen<MinecraftScreenModel,XblOptionalSigninScreenController,std::string const&,std::string const&,std::string const&,std::string const&,std::function<void ()(void)> &>(
      &v37,
      v8,
      v20,
      v21,
      (const char **)v22,
      v11,
      v10,
      a5,
      a6,
      a7);
    v23 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v36 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j_j__ZdlPv_9(v23);
    v34 = v37;
    v35 = v38;
    if ( v38 )
      v24 = (unsigned int *)(v38 + 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 + 1, v24) );
        ++*v24;
    result = SceneFactory::_createScreen((unsigned __int64 *)v9, v8, (unsigned __int64 *)&v34);
    v26 = v35;
    if ( v35 )
      v27 = (unsigned int *)(v35 + 4);
          result = __ldrex(v27);
        while ( __strex(result - 1, v27) );
        result = (*v27)--;
      if ( result == 1 )
        v28 = (unsigned int *)(v26 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v28);
          while ( __strex(result - 1, v28) );
        }
        else
          result = (*v28)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
    v29 = v38;
      v30 = (unsigned int *)(v38 + 4);
          result = __ldrex(v30);
        while ( __strex(result - 1, v30) );
        result = (*v30)--;
        v31 = (unsigned int *)(v29 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 8))(v29);
            result = __ldrex(v31);
          while ( __strex(result - 1, v31) );
          result = (*v31)--;
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v29 + 12))(v29);
  return result;
}


int __fastcall SceneFactory::_setUseClientInstanceStack(SceneFactory *this, int a2)
{
  SceneFactory *v2; // r4@1
  int result; // r0@1
  SceneStack *v4; // r0@4
  SceneStack *v5; // r0@5

  v2 = this;
  result = *((_BYTE *)this + 4);
  if ( a2 != result )
  {
    *((_BYTE *)v2 + 4) = a2;
    if ( a2 || !ClientInstance::isPrimaryClient(*((ClientInstance **)v2 + 2)) )
    {
      v5 = (SceneStack *)ClientInstance::getClientSceneStack(*((ClientInstance **)v2 + 2));
      result = j_j_j__ZN10SceneStack24deferPushesUntilNextTickEv(v5);
    }
    else
      v4 = (SceneStack *)ClientInstance::getMainSceneStack(*((ClientInstance **)v2 + 2));
      result = j_j_j__ZN10SceneStack24deferPushesUntilNextTickEv(v4);
  }
  return result;
}


void __fastcall SceneFactory::_createWorldSettingsScreenCache(SceneFactory *this)
{
  SceneFactory *v1; // r8@1
  Social::MultiplayerServiceManager *v2; // r0@1
  Social::MultiplayerServiceManager *v3; // r0@2
  int v4; // r5@2
  int v5; // r0@2
  char *v6; // r6@2
  signed int v7; // r4@2
  _DWORD *v8; // r0@2
  char *v9; // r5@2
  size_t v10; // r2@2
  int v11; // r5@6
  unsigned int *v12; // r1@7
  unsigned int v13; // r0@9
  signed int v14; // r10@11
  unsigned int *v15; // r6@14
  unsigned int v16; // r0@16
  UIDefRepository *v17; // r0@25
  int v18; // r4@25
  char v19; // r9@25
  char v20; // r6@25
  _DWORD *v21; // r0@26
  int v22; // r5@28
  char v23; // r7@28
  char v24; // r4@28
  char v25; // r0@28
  bool v26; // r2@28
  void *v27; // r0@30
  unsigned int *v28; // r2@32
  signed int v29; // r1@34
  unsigned int *v30; // r1@36
  signed int v31; // r0@38
  bool v32; // [sp+1Ch] [bp-5Ch]@0
  char v33; // [sp+20h] [bp-58h]@25
  char v34; // [sp+30h] [bp-48h]@25
  Social::User *v35; // [sp+40h] [bp-38h]@2
  int v36; // [sp+44h] [bp-34h]@6
  void *s2; // [sp+48h] [bp-30h]@2
  int v38; // [sp+50h] [bp-28h]@1

  v1 = this;
  sub_DA7364((void **)&v38, "settings.screen_world_controls_and_settings");
  v2 = (Social::MultiplayerServiceManager *)MinecraftGame::getMultiplayerServiceManager(*(MinecraftGame **)v1);
  if ( Social::MultiplayerServiceManager::isInRealm(v2) == 1 )
  {
    v3 = (Social::MultiplayerServiceManager *)MinecraftGame::getMultiplayerServiceManager(*(MinecraftGame **)v1);
    v4 = Social::MultiplayerServiceManager::getRealmWorld(v3);
    ClientInstance::getUser((ClientInstance *)&v35, *((_DWORD *)v1 + 2));
    v5 = Social::User::getLiveUser(v35);
    Social::XboxLiveUserManager::getCurrentXUID((Social::XboxLiveUserManager *)&s2, v5);
    v6 = (char *)s2;
    v7 = 0;
    v8 = *(_DWORD **)(v4 + 20);
    v9 = (char *)s2 - 12;
    v10 = *(v8 - 3);
    if ( v10 == *((_DWORD *)s2 - 3) && !memcmp(v8, s2, v10) )
      v7 = 1;
    if ( (int *)v9 != &dword_28898C0 )
    {
      v30 = (unsigned int *)(v6 - 4);
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
        j_j_j_j_j__ZdlPv_9(v9);
    }
    v11 = v36;
    if ( v36 )
      v12 = (unsigned int *)(v36 + 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 == 1 )
        v15 = (unsigned int *)(v11 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
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
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
    if ( v7 == 1 )
      sub_DA78A4((void **)&v38, "settings.screen_realm_controls_and_settings", (_BYTE *)0x2B);
    else
      sub_DA78A4((void **)&v38, "settings.screen_controls_and_settings", (_BYTE *)0x25);
    v14 = 1;
  }
  else
    v14 = 0;
  v17 = (UIDefRepository *)MinecraftGame::getUIDefRepo(*(MinecraftGame **)v1);
  SceneFactory::createGlobalVars((SceneFactory *)&v34, v1, v17);
  v18 = Json::Value::operator[]((Json::Value *)&v34, "*screen_name*");
  Json::Value::Value((int)&v33, (const char **)&v38);
  Json::Value::operator=(v18, (const Json::Value *)&v33);
  Json::Value::~Value((Json::Value *)&v33);
  v19 = ClientInstance::isMultiPlayerHost(*((ClientInstance **)v1 + 2));
  v20 = ClientInstance::isMultiPlayerClient(*((ClientInstance **)v1 + 2));
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v21 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v21 = &ServiceLocator<AppPlatform>::mDefaultService;
  v22 = *v21;
  v23 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v21 + 172))(*v21);
  v24 = (*(int (__fastcall **)(int))(*(_DWORD *)v22 + 168))(v22);
  v25 = (*(int (__fastcall **)(int))(*(_DWORD *)v22 + 164))(v22);
  SettingsScreenController::addStaticScreenVars(
    (SettingsScreenController *)&v34,
    0,
    v19,
    v20,
    1,
    v23,
    v24,
    v25,
    v32);
  if ( !v14 )
    WorldSettingsScreenController::addStaticScreenVars((WorldSettingsScreenController *)&v34, (Json::Value *)1, v26);
  SceneFactory::_preCacheScreen((int)v1, (const Json::Value *)&v34, &v38);
  Json::Value::~Value((Json::Value *)&v34);
  v27 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v38 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9(v27);
}


unsigned int __fastcall SceneFactory::createHopperScreen(unsigned __int64 *a1, int a2, int a3, __int64 *a4)
{
  int v4; // r4@1
  unsigned __int64 *v5; // r8@1
  __int64 *v6; // r6@1
  Options *v7; // r0@1
  int v8; // r0@1
  signed int v9; // r1@1
  MinecraftGame *v10; // r7@3
  ClientInstance *v11; // r5@3
  void **v12; // r0@3
  void *v13; // r0@3
  unsigned int *v14; // r0@5
  unsigned int v15; // r1@7
  unsigned int result; // r0@10
  int v17; // r4@10
  unsigned int *v18; // r1@11
  unsigned int *v19; // r5@17
  int v20; // r4@24
  unsigned int *v21; // r1@25
  unsigned int *v22; // r5@31
  unsigned int *v23; // r2@39
  signed int v24; // r1@41
  int v25; // [sp+10h] [bp-38h]@4
  int v26; // [sp+14h] [bp-34h]@4
  int v27; // [sp+1Ch] [bp-2Ch]@3
  int v28; // [sp+20h] [bp-28h]@3
  int v29; // [sp+24h] [bp-24h]@4
  int v30; // [sp+28h] [bp-20h]@3

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(a2 + 8));
  v8 = Options::getUIProfile(v7);
  v9 = 0;
  if ( !v8 )
    v9 = 1;
  v30 = v9;
  v10 = *(MinecraftGame **)v4;
  v11 = *(ClientInstance **)(v4 + 8);
  v12 = sub_DA7364((void **)&v27, "redstone.hopper_screen");
  createScreen<ClientInstanceScreenModel,RedstoneScreenController,EntityUniqueID const&,InteractionModel &>(
    &v28,
    v4,
    v10,
    v11,
    (const char **)v12,
    v6,
    &v30);
  v13 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v27 - 4);
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
      j_j_j_j_j__ZdlPv_9(v13);
  }
  v25 = v28;
  v26 = v29;
  if ( v29 )
    v14 = (unsigned int *)(v29 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  result = SceneFactory::_createScreen(v5, v4, (unsigned __int64 *)&v25);
  v17 = v26;
  if ( v26 )
    v18 = (unsigned int *)(v26 + 4);
        result = __ldrex(v18);
      while ( __strex(result - 1, v18) );
      result = (*v18)--;
    if ( result == 1 )
      v19 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v19);
        while ( __strex(result - 1, v19) );
      }
      else
        result = (*v19)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  v20 = v29;
    v21 = (unsigned int *)(v29 + 4);
        result = __ldrex(v21);
      while ( __strex(result - 1, v21) );
      result = (*v21)--;
      v22 = (unsigned int *)(v20 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
          result = __ldrex(v22);
        while ( __strex(result - 1, v22) );
        result = (*v22)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
  return result;
}


unsigned int __fastcall SceneFactory::createCreditsScreen(unsigned __int64 *a1, int a2, int a3)
{
  int v3; // r4@1
  MinecraftGame *v4; // r6@1
  int v5; // r5@1
  ClientInstance *v6; // r7@1
  unsigned __int64 *v7; // r8@1
  void **v8; // r0@1
  void *v9; // r0@1
  unsigned int *v10; // r0@3
  unsigned int v11; // r1@5
  unsigned int result; // r0@8
  int v13; // r4@8
  unsigned int *v14; // r1@9
  unsigned int *v15; // r5@15
  int v16; // r4@22
  unsigned int *v17; // r1@23
  unsigned int *v18; // r5@29
  unsigned int *v19; // r2@37
  signed int v20; // r1@39
  int v21; // [sp+Ch] [bp-34h]@2
  int v22; // [sp+10h] [bp-30h]@2
  int v23; // [sp+18h] [bp-28h]@1
  int v24; // [sp+1Ch] [bp-24h]@1
  int v25; // [sp+20h] [bp-20h]@2

  v3 = a2;
  v4 = *(MinecraftGame **)a2;
  v5 = a3;
  v6 = *(ClientInstance **)(a2 + 8);
  v7 = a1;
  v8 = sub_DA7364((void **)&v23, "credits.credits_screen");
  createScreen<MinecraftScreenModel,CreditsScreenController,std::function<void ()(void)> &>(
    &v24,
    v3,
    v4,
    v6,
    (const char **)v8,
    v5);
  v9 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  }
  v21 = v24;
  v22 = v25;
  if ( v25 )
    v10 = (unsigned int *)(v25 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
      ++*v10;
  result = SceneFactory::_createScreen(v7, v3, (unsigned __int64 *)&v21);
  v13 = v22;
  if ( v22 )
    v14 = (unsigned int *)(v22 + 4);
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
      result = (*v14)--;
    if ( result == 1 )
      v15 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
      }
      else
        result = (*v15)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  v16 = v25;
    v17 = (unsigned int *)(v25 + 4);
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
      result = (*v17)--;
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
        result = (*v18)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  return result;
}


int __fastcall SceneFactory::createNetworkProgressScreen(unsigned __int64 *a1, int a2, int *a3, int *a4)
{
  int v4; // r9@1
  unsigned __int64 *v5; // r10@1
  int *v6; // r7@1
  int *v7; // r8@1
  int *v8; // r0@1
  int v9; // r1@2
  int v10; // r0@2
  int *v11; // r0@5
  int v12; // r1@5
  void *v13; // r7@6
  int v14; // r0@6
  int v15; // r0@7
  ResourcePackProgressHandler *v16; // r7@11
  int v17; // r0@11
  int v18; // r0@12
  void *v19; // r7@16
  int v20; // r0@18
  int v21; // r0@19
  ResourceLoadProgressHandler *v22; // r7@23
  int v23; // r0@23
  int v24; // r0@24
  __int64 v25; // kr00_8@29
  __int64 v26; // kr08_8@29
  __int64 v27; // kr10_8@29
  __int64 v28; // kr18_8@29
  int v29; // r1@29
  int v30; // r0@29
  int v32; // [sp+10h] [bp-80h]@28
  int v33; // [sp+14h] [bp-7Ch]@29
  __int64 v34; // [sp+18h] [bp-78h]@29
  __int64 v35; // [sp+20h] [bp-70h]@29
  __int64 v36; // [sp+28h] [bp-68h]@29
  __int64 v37; // [sp+30h] [bp-60h]@29
  int v38; // [sp+38h] [bp-58h]@1
  int v39; // [sp+3Ch] [bp-54h]@3
  __int64 v40; // [sp+40h] [bp-50h]@29
  __int64 v41; // [sp+48h] [bp-48h]@29
  __int64 v42; // [sp+50h] [bp-40h]@1
  __int64 v43; // [sp+58h] [bp-38h]@1
  char v44; // [sp+60h] [bp-30h]@16
  void (*v45)(void); // [sp+68h] [bp-28h]@16

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  _aeabi_memclr8(&v38, 40);
  std::_Deque_base<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>::_M_initialize_map(
    (int)&v38,
    0);
  v8 = (int *)v42;
  if ( (_DWORD)v42 == (_DWORD)v43 - 4 )
  {
    if ( (unsigned int)(v39 - ((HIDWORD(v43) - v38) >> 2)) <= 1 )
      std::deque<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>::_M_reallocate_map(
        (int)&v38,
        1u,
        0);
    *(_DWORD *)(HIDWORD(v43) + 4) = operator new(0x200u);
    v11 = (int *)v42;
    v12 = *v6;
    *v6 = 0;
    *v11 = v12;
    HIDWORD(v43) += 4;
    v10 = *(_DWORD *)HIDWORD(v43);
    HIDWORD(v42) = v10;
    LODWORD(v43) = v10 + 512;
  }
  else
    v9 = *v6;
    *v8 = v9;
    v10 = (int)(v8 + 1);
  LODWORD(v42) = v10;
  v13 = operator new(0xCu);
  SearchingForSessionProgressHandler::SearchingForSessionProgressHandler((int)v13);
  v14 = v42;
    *(_DWORD *)v42 = v13;
    v15 = *(_DWORD *)HIDWORD(v43);
    HIDWORD(v42) = v15;
    LODWORD(v43) = v15 + 512;
    v15 = v14 + 4;
  LODWORD(v42) = v15;
  v16 = (ResourcePackProgressHandler *)operator new(0x38u);
  ResourcePackProgressHandler::ResourcePackProgressHandler(v16, 0);
  v17 = v42;
    *(_DWORD *)v42 = v16;
    v18 = *(_DWORD *)HIDWORD(v43);
    HIDWORD(v42) = v18;
    LODWORD(v43) = v18 + 512;
    v18 = v17 + 4;
  LODWORD(v42) = v18;
  v19 = operator new(0x20u);
  v45 = 0;
  WorldGenerationProgressHandler::WorldGenerationProgressHandler((int)v19, 0, (int)&v44);
  if ( v45 )
    v45();
  v20 = v42;
    *(_DWORD *)v42 = v19;
    v21 = *(_DWORD *)HIDWORD(v43);
    HIDWORD(v42) = v21;
    LODWORD(v43) = v21 + 512;
    v21 = v20 + 4;
  LODWORD(v42) = v21;
  v22 = (ResourceLoadProgressHandler *)operator new(0xCu);
  ResourceLoadProgressHandler::ResourceLoadProgressHandler(v22);
  v23 = v42;
    *(_DWORD *)v42 = v22;
    v24 = *(_DWORD *)HIDWORD(v43);
    HIDWORD(v42) = v24;
    LODWORD(v43) = v24 + 512;
    v24 = v23 + 4;
  LODWORD(v42) = v24;
  _aeabi_memclr8(&v32, 40);
    (int)&v32,
  if ( v38 )
    v25 = v34;
    v26 = v35;
    v35 = v41;
    v34 = v40;
    v40 = v25;
    v41 = v26;
    v27 = v36;
    v28 = v37;
    v37 = v43;
    v36 = v42;
    v42 = v27;
    v43 = v28;
    v29 = v32;
    v32 = v38;
    v38 = v29;
    v30 = v33;
    v33 = v39;
    v39 = v30;
  SceneFactory::createProgressScreen(v5, v4, v7, (int)&v32, 1, 0, 0);
  std::deque<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>::~deque((int)&v32);
  return std::deque<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>::~deque((int)&v38);
}


void __fastcall SceneFactory::createRealmsWhitelistScreen(SceneFactory *this, const Realms::World *a2, const Realms::World *a3)
{
  const Realms::World *v3; // r4@1
  MinecraftGame *v4; // r6@1
  const Realms::World *v5; // r5@1
  ClientInstance *v6; // r7@1
  unsigned __int64 *v7; // r8@1
  void **v8; // r0@1
  int v9; // r4@1
  unsigned int *v10; // r1@2
  unsigned int v11; // r0@4
  unsigned int *v12; // r5@8
  unsigned int v13; // r0@10
  void *v14; // r0@15
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  char v17; // [sp+13h] [bp-2Dh]@1
  int v18; // [sp+18h] [bp-28h]@1
  char v19; // [sp+1Ch] [bp-24h]@1
  int v20; // [sp+20h] [bp-20h]@1

  v3 = a2;
  v4 = *(MinecraftGame **)a2;
  v5 = a3;
  v6 = (ClientInstance *)*((_DWORD *)a2 + 2);
  v7 = (unsigned __int64 *)this;
  v8 = sub_DA7364((void **)&v18, "realms_whitelist.realms_whitelist_screen");
  v17 = 0;
  createScreen<MainMenuScreenModel,RealmsWhitelistScreenController,Realms::World const&,bool>(
    &v19,
    (int)v3,
    v4,
    v6,
    (const char **)v8,
    v5,
    &v17);
  SceneFactory::_createScreen(v7, (int)v3, (unsigned __int64 *)&v19);
  v9 = v20;
  if ( v20 )
  {
    v10 = (unsigned int *)(v20 + 4);
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
  }
  v14 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v18 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
}


void __fastcall SceneFactory::createRemixPreviewScreen(SceneFactory *this, const glTFExportData *a2, int a3)
{
  SceneFactory::createRemixPreviewScreen(this, a2, a3);
}


void __fastcall SceneFactory::_calculateSafeZoneSize(SceneFactory *this, float a2, int _R2)
{
  SceneFactory::_calculateSafeZoneSize(this, a2, _R2);
}


unsigned int __fastcall SceneFactory::_createInviteScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  unsigned int result; // r0@8
  int v11; // r4@8
  unsigned int *v12; // r1@9
  unsigned int *v13; // r5@15
  int v14; // r4@22
  unsigned int *v15; // r1@23
  unsigned int *v16; // r5@29
  unsigned int *v17; // r2@37
  signed int v18; // r1@39
  int v19; // [sp+8h] [bp-30h]@2
  int v20; // [sp+Ch] [bp-2Ch]@2
  int v21; // [sp+14h] [bp-24h]@1
  int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v21, "invite.invite_screen");
  j__Z12createScreenI20MinecraftScreenModel22InviteScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v22,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v19 = v22;
  v20 = v23;
  if ( v23 )
    v8 = (unsigned int *)(v23 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  result = SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v19);
  v11 = v20;
  if ( v20 )
    v12 = (unsigned int *)(v20 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v14 = v23;
    v15 = (unsigned int *)(v23 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return result;
}


void __fastcall SceneFactory::createMakeInfiniteScreen(unsigned __int64 *a1, int a2, int a3, int a4)
{
  SceneFactory::createMakeInfiniteScreen(a1, a2, a3, a4);
}


void __fastcall SceneFactory::createSkinPackUpsellScreen(SceneFactory *this, const StoreCatalogItemModel *a2, int a3, int a4)
{
  SceneFactory::createSkinPackUpsellScreen(this, a2, a3, a4);
}


unsigned int __fastcall SceneFactory::createPlayScreen(unsigned __int64 *a1, int a2, int a3)
{
  int v3; // r4@1
  unsigned __int64 *v4; // r5@1
  MinecraftGame *v5; // r6@1
  ClientInstance *v6; // r7@1
  void **v7; // r0@1
  void *v8; // r0@1
  unsigned int *v9; // r0@3
  unsigned int v10; // r1@5
  unsigned int result; // r0@8
  int v12; // r4@8
  unsigned int *v13; // r1@9
  unsigned int *v14; // r5@15
  int v15; // r4@22
  unsigned int *v16; // r1@23
  unsigned int *v17; // r5@29
  unsigned int *v18; // r2@37
  signed int v19; // r1@39
  int v20; // [sp+Ch] [bp-34h]@2
  int v21; // [sp+10h] [bp-30h]@2
  int v22; // [sp+18h] [bp-28h]@1
  int v23; // [sp+1Ch] [bp-24h]@1
  int v24; // [sp+20h] [bp-20h]@2
  int v25; // [sp+24h] [bp-1Ch]@1

  v3 = a2;
  v25 = a3;
  v4 = a1;
  v5 = *(MinecraftGame **)a2;
  v6 = *(ClientInstance **)(a2 + 8);
  v7 = sub_DA7364((void **)&v22, "play.play_screen");
  createScreen<PlayScreenModel,PlayScreenController,PlayScreenDefaultTab &>(&v23, v3, v5, v6, (const char **)v7, &v25);
  v8 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v22 - 4);
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
      j_j_j_j_j__ZdlPv_9(v8);
  }
  v20 = v23;
  v21 = v24;
  if ( v24 )
    v9 = (unsigned int *)(v24 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
      ++*v9;
  result = SceneFactory::_createScreen(v4, v3, (unsigned __int64 *)&v20);
  v12 = v21;
  if ( v21 )
    v13 = (unsigned int *)(v21 + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  v15 = v24;
    v16 = (unsigned int *)(v24 + 4);
        result = __ldrex(v16);
      while ( __strex(result - 1, v16) );
      result = (*v16)--;
      v17 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          result = __ldrex(v17);
        while ( __strex(result - 1, v17) );
        result = (*v17)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  return result;
}


unsigned int __fastcall SceneFactory::createChalkboardScreen(SceneFactory *this, const BlockPos *a2, int a3, char a4)
{
  const BlockPos *v4; // r4@1
  int v5; // r5@1
  MinecraftGame *v6; // r6@1
  unsigned __int64 *v7; // r8@1
  ClientInstance *v8; // r7@1
  void **v9; // r0@1
  void *v10; // r0@1
  unsigned int *v11; // r0@3
  unsigned int v12; // r1@5
  unsigned int result; // r0@8
  int v14; // r4@8
  unsigned int *v15; // r1@9
  unsigned int *v16; // r5@15
  int v17; // r4@22
  unsigned int *v18; // r1@23
  unsigned int *v19; // r5@29
  unsigned int *v20; // r2@37
  signed int v21; // r1@39
  int v22; // [sp+10h] [bp-38h]@2
  int v23; // [sp+14h] [bp-34h]@2
  int v24; // [sp+1Ch] [bp-2Ch]@1
  int v25; // [sp+20h] [bp-28h]@1
  int v26; // [sp+24h] [bp-24h]@2
  char v27; // [sp+2Bh] [bp-1Dh]@1

  v4 = a2;
  v27 = a4;
  v5 = a3;
  v6 = *(MinecraftGame **)a2;
  v7 = (unsigned __int64 *)this;
  v8 = (ClientInstance *)*((_DWORD *)a2 + 2);
  v9 = sub_DA7364((void **)&v24, "chalkboard.chalkboard_screen");
  createScreen<ClientInstanceScreenModel,ChalkboardScreenController,BlockPos const&,bool &>(
    &v25,
    (int)v4,
    v6,
    v8,
    (const char **)v9,
    v5,
    &v27);
  v10 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v20 = (unsigned int *)(v24 - 4);
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
      j_j_j_j_j__ZdlPv_9(v10);
  }
  v22 = v25;
  v23 = v26;
  if ( v26 )
    v11 = (unsigned int *)(v26 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
      ++*v11;
  result = SceneFactory::_createScreen(v7, (int)v4, (unsigned __int64 *)&v22);
  v14 = v23;
  if ( v23 )
    v15 = (unsigned int *)(v23 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
    if ( result == 1 )
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
      }
      else
        result = (*v16)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  v17 = v26;
    v18 = (unsigned int *)(v26 + 4);
        result = __ldrex(v18);
      while ( __strex(result - 1, v18) );
      result = (*v18)--;
      v19 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
          result = __ldrex(v19);
        while ( __strex(result - 1, v19) );
        result = (*v19)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  return result;
}


unsigned int *__fastcall SceneFactory::createRealityScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  SceneFactory *v3; // r5@1
  int v4; // r7@1 OVERLAPPED
  int v5; // r8@1 OVERLAPPED
  ClientInstance *v6; // r4@1
  HoloRealitySetupCleanupStrategy *v7; // r6@1
  unsigned int *result; // r0@1
  void (__fastcall *v9)(int, unsigned int **); // r2@2
  unsigned int v10; // r1@8
  unsigned int *v11; // r1@14
  unsigned int *v12; // r4@20
  int v13; // r4@27
  unsigned int *v14; // r1@28
  unsigned int *v15; // r5@34
  int v16; // [sp+0h] [bp-28h]@1
  int v17; // [sp+4h] [bp-24h]@1
  char v18; // [sp+8h] [bp-20h]@1
  unsigned int *v19; // [sp+Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = this;
  std::__shared_ptr<InGameRealityModeScreen,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<InGameRealityModeScreen>,MinecraftGame &,ClientInstance &>(
    (int)&v16,
    (int)&v18,
    *(MinecraftGame **)v2,
    *(ClientInstance **)(v2 + 8));
  *(_QWORD *)&v4 = *(_QWORD *)&v16;
  v16 = 0;
  v17 = 0;
  v6 = *(ClientInstance **)(v2 + 8);
  v7 = (HoloRealitySetupCleanupStrategy *)operator new(0x48u);
  result = (unsigned int *)HoloRealitySetupCleanupStrategy::HoloRealitySetupCleanupStrategy(v7, v6);
  if ( v4 )
  {
    v9 = *(void (__fastcall **)(int, unsigned int **))(*(_DWORD *)v4 + 272);
    v19 = (unsigned int *)v7;
    v9(v4, &v19);
    result = v19;
    if ( v19 )
      result = (unsigned int *)(*(int (__cdecl **)(unsigned int *))(*v19 + 4))(v19);
    v7 = 0;
    v19 = 0;
  }
  *(_QWORD *)v3 = *(_QWORD *)&v4;
  if ( v5 )
    result = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(result);
      while ( __strex(v10 + 1, result) );
    }
    else
      ++*result;
  if ( v7 )
    result = (unsigned int *)(*(int (__fastcall **)(HoloRealitySetupCleanupStrategy *))(*(_DWORD *)v7 + 4))(v7);
    v11 = (unsigned int *)(v5 + 4);
        result = (unsigned int *)__ldrex(v11);
      while ( __strex((unsigned int)result - 1, v11) );
      result = (unsigned int *)(*v11)--;
    if ( result == (unsigned int *)1 )
      v12 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (unsigned int *)__ldrex(v12);
        while ( __strex((unsigned int)result - 1, v12) );
      }
      else
        result = (unsigned int *)(*v12)--;
      if ( result == (unsigned int *)1 )
        result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  v13 = v17;
  if ( v17 )
    v14 = (unsigned int *)(v17 + 4);
        result = (unsigned int *)__ldrex(v14);
      while ( __strex((unsigned int)result - 1, v14) );
      result = (unsigned int *)(*v14)--;
      v15 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
          result = (unsigned int *)__ldrex(v15);
        while ( __strex((unsigned int)result - 1, v15) );
        result = (unsigned int *)(*v15)--;
        result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  return result;
}


unsigned int __fastcall SceneFactory::createWorldSeedCatalogScreen(unsigned __int64 *a1, int a2, int a3)
{
  int v3; // r4@1
  MinecraftGame *v4; // r6@1
  int v5; // r5@1
  ClientInstance *v6; // r7@1
  unsigned __int64 *v7; // r8@1
  void **v8; // r0@1
  void *v9; // r0@1
  unsigned int *v10; // r0@3
  unsigned int v11; // r1@5
  unsigned int result; // r0@8
  int v13; // r4@8
  unsigned int *v14; // r1@9
  unsigned int *v15; // r5@15
  int v16; // r4@22
  unsigned int *v17; // r1@23
  unsigned int *v18; // r5@29
  unsigned int *v19; // r2@37
  signed int v20; // r1@39
  int v21; // [sp+Ch] [bp-34h]@2
  int v22; // [sp+10h] [bp-30h]@2
  int v23; // [sp+18h] [bp-28h]@1
  int v24; // [sp+1Ch] [bp-24h]@1
  int v25; // [sp+20h] [bp-20h]@2

  v3 = a2;
  v4 = *(MinecraftGame **)a2;
  v5 = a3;
  v6 = *(ClientInstance **)(a2 + 8);
  v7 = a1;
  v8 = sub_DA7364((void **)&v23, "ugc_viewer.ugc_viewer_screen");
  createScreen<MainMenuScreenModel,WorldSeedCatalogScreenController,std::function<void ()(std::string const&,std::string const&,std::string const&)> &>(
    &v24,
    v3,
    v4,
    v6,
    (const char **)v8,
    v5);
  v9 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  }
  v21 = v24;
  v22 = v25;
  if ( v25 )
    v10 = (unsigned int *)(v25 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
      ++*v10;
  result = SceneFactory::_createScreen(v7, v3, (unsigned __int64 *)&v21);
  v13 = v22;
  if ( v22 )
    v14 = (unsigned int *)(v22 + 4);
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
      result = (*v14)--;
    if ( result == 1 )
      v15 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
      }
      else
        result = (*v15)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  v16 = v25;
    v17 = (unsigned int *)(v25 + 4);
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
      result = (*v17)--;
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
        result = (*v18)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  return result;
}


void __fastcall SceneFactory::createChestScreen(SceneFactory *this, Player *a2, const BlockPos *a3, const BlockPos *a4)
{
  SceneFactory *v4; // r4@1
  const BlockPos *v5; // r6@1
  Player *v6; // r5@1
  BlockSource *v7; // r0@1
  ChestBlockEntity *v8; // r7@1
  Options *v9; // r0@2
  int v10; // r0@2
  signed int v11; // r1@2
  _BOOL4 v12; // r0@5
  const char *v13; // r1@5
  void **v14; // r0@7
  MinecraftGame *v15; // r2@7
  ClientInstance *v16; // r3@7
  int v17; // r4@7
  unsigned int *v18; // r1@8
  unsigned int v19; // r0@10
  void **v20; // r0@13
  MinecraftGame *v21; // r2@13
  ClientInstance *v22; // r3@13
  int v23; // r4@13
  unsigned int *v24; // r1@14
  unsigned int v25; // r0@16
  void **v26; // r0@19
  MinecraftGame *v27; // r2@19
  ClientInstance *v28; // r3@19
  int v29; // r4@19
  unsigned int *v30; // r1@20
  unsigned int v31; // r0@22
  unsigned int *v32; // r5@27
  unsigned int v33; // r0@29
  unsigned int *v34; // r5@33
  unsigned int v35; // r0@35
  void *v36; // r0@40
  unsigned int *v37; // r2@41
  signed int v38; // r1@43
  unsigned int *v39; // r5@47
  unsigned int v40; // r0@49
  int v41; // [sp+10h] [bp-58h]@19
  char v42; // [sp+14h] [bp-54h]@19
  int v43; // [sp+18h] [bp-50h]@19
  int v44; // [sp+20h] [bp-48h]@19
  int v45; // [sp+24h] [bp-44h]@13
  char v46; // [sp+28h] [bp-40h]@13
  int v47; // [sp+2Ch] [bp-3Ch]@13
  int v48; // [sp+34h] [bp-34h]@13
  int v49; // [sp+38h] [bp-30h]@7
  char v50; // [sp+3Ch] [bp-2Ch]@7
  int v51; // [sp+40h] [bp-28h]@7
  int v52; // [sp+48h] [bp-20h]@7
  int v53; // [sp+4Ch] [bp-1Ch]@4

  v4 = this;
  v5 = a4;
  v6 = a2;
  v7 = (BlockSource *)Entity::getRegion(a3);
  v8 = (ChestBlockEntity *)BlockSource::getBlockEntity(v7, v5);
  if ( !v8 )
    goto LABEL_73;
  v9 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v6 + 2));
  v10 = Options::getUIProfile(v9);
  v11 = 0;
  if ( !v10 )
    v11 = 1;
  v53 = v11;
  if ( *(_DWORD *)BlockEntity::getType(v8) == 2 )
  {
    v12 = ChestBlockEntity::isLargeChest(v8);
    v13 = "chest.large_chest_screen";
    if ( !v12 )
      v13 = "chest.small_chest_screen";
    v14 = sub_DA7364((void **)&v52, v13);
    v15 = *(MinecraftGame **)v6;
    v16 = (ClientInstance *)*((_DWORD *)v6 + 2);
    v49 = 2;
    createScreen<ClientInstanceScreenModel,ChestScreenController,BlockPos const&,InteractionModel &,BlockEntityType>(
      &v50,
      (int)v6,
      v15,
      v16,
      (const char **)v14,
      v5,
      &v53,
      &v49);
    SceneFactory::_createScreen((unsigned __int64 *)v4, (int)v6, (unsigned __int64 *)&v50);
    v17 = v51;
    if ( v51 )
    {
      v18 = (unsigned int *)(v51 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
      }
      else
        v19 = (*v18)--;
      if ( v19 == 1 )
        v32 = (unsigned int *)(v17 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
        if ( &pthread_create )
        {
          __dmb();
          do
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
        }
        else
          v33 = (*v32)--;
        if ( v33 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
    }
    v36 = (void *)(v52 - 12);
    if ( (int *)(v52 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v52 - 4);
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        goto LABEL_68;
LABEL_67:
      v38 = (*v37)--;
LABEL_68:
      if ( v38 <= 0 )
        j_j_j_j_j__ZdlPv_9(v36);
      return;
    return;
  }
  if ( *(_DWORD *)BlockEntity::getType(v8) == 23 )
    v20 = sub_DA7364((void **)&v48, "chest.ender_chest_screen");
    v21 = *(MinecraftGame **)v6;
    v22 = (ClientInstance *)*((_DWORD *)v6 + 2);
    v45 = 23;
      &v46,
      v21,
      v22,
      (const char **)v20,
      &v45);
    SceneFactory::_createScreen((unsigned __int64 *)v4, (int)v6, (unsigned __int64 *)&v46);
    v23 = v47;
    if ( v47 )
      v24 = (unsigned int *)(v47 + 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 == 1 )
        v34 = (unsigned int *)(v23 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
          v35 = (*v34)--;
        if ( v35 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
    v36 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v48 - 4);
      goto LABEL_67;
  if ( *(_DWORD *)BlockEntity::getType(v8) != 25 )
LABEL_73:
    *(_DWORD *)v4 = 0;
    *((_DWORD *)v4 + 1) = 0;
  v26 = sub_DA7364((void **)&v44, "chest.shulker_box_screen");
  v27 = *(MinecraftGame **)v6;
  v28 = (ClientInstance *)*((_DWORD *)v6 + 2);
  v41 = 25;
  createScreen<ClientInstanceScreenModel,ChestScreenController,BlockPos const&,InteractionModel &,BlockEntityType>(
    &v42,
    (int)v6,
    v27,
    v28,
    (const char **)v26,
    v5,
    &v53,
    &v41);
  SceneFactory::_createScreen((unsigned __int64 *)v4, (int)v6, (unsigned __int64 *)&v42);
  v29 = v43;
  if ( v43 )
    v30 = (unsigned int *)(v43 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
    else
      v31 = (*v30)--;
    if ( v31 == 1 )
      v39 = (unsigned int *)(v29 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 8))(v29);
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
        v40 = (*v39)--;
      if ( v40 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 12))(v29);
  v36 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v44 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      goto LABEL_68;
    goto LABEL_67;
}


void __fastcall SceneFactory::createStoreItemListScreen(unsigned __int64 *a1, int a2, int *a3, int *a4, int *a5)
{
  int v5; // r4@1
  MinecraftGame *v6; // r9@1
  int *v7; // r5@1
  ClientInstance *v8; // r7@1
  int *v9; // r6@1
  unsigned __int64 *v10; // r8@1
  void **v11; // r0@1
  int v12; // r4@1
  unsigned int *v13; // r1@2
  unsigned int v14; // r0@4
  unsigned int *v15; // r5@8
  unsigned int v16; // r0@10
  void *v17; // r0@15
  unsigned int *v18; // r2@17
  signed int v19; // r1@19
  int v20; // [sp+18h] [bp-30h]@1
  char v21; // [sp+1Ch] [bp-2Ch]@1
  int v22; // [sp+20h] [bp-28h]@1

  v5 = a2;
  v6 = *(MinecraftGame **)a2;
  v7 = a4;
  v8 = *(ClientInstance **)(a2 + 8);
  v9 = a3;
  v10 = a1;
  v11 = sub_DA7364((void **)&v20, "store_item_list.store_item_list_screen");
  createScreen<MainMenuScreenModel,StoreItemListScreenController,StoreSearchQuery const&,std::string const&,std::string const&>(
    &v21,
    v5,
    v6,
    v8,
    (const char **)v11,
    v9,
    v7,
    a5);
  SceneFactory::_createScreen(v10, v5, (unsigned __int64 *)&v21);
  v12 = v22;
  if ( v22 )
  {
    v13 = (unsigned int *)(v22 + 4);
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
  }
  v17 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v20 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
}


unsigned int __fastcall SceneFactory::createDisconnectScreen(unsigned __int64 *a1, int a2, int *a3, int *a4, int *a5)
{
  int v5; // r4@1
  unsigned __int64 *v6; // r8@1
  MinecraftGame *v7; // r7@1
  ClientInstance *v8; // r5@1
  int *v9; // r9@1
  int *v10; // r6@1
  void *v11; // r0@4
  unsigned int *v12; // r0@6
  unsigned int v13; // r1@8
  unsigned int result; // r0@11
  int v15; // r4@11
  unsigned int *v16; // r1@12
  unsigned int *v17; // r5@18
  int v18; // r4@25
  unsigned int *v19; // r1@26
  unsigned int *v20; // r5@32
  unsigned int *v21; // r2@40
  signed int v22; // r1@42
  int v23; // [sp+14h] [bp-3Ch]@5
  int v24; // [sp+18h] [bp-38h]@5
  char v25; // [sp+1Fh] [bp-31h]@4
  int v26; // [sp+24h] [bp-2Ch]@2
  int v27; // [sp+28h] [bp-28h]@4
  int v28; // [sp+2Ch] [bp-24h]@5

  v5 = a2;
  v6 = a1;
  v7 = *(MinecraftGame **)a2;
  v8 = *(ClientInstance **)(a2 + 8);
  v9 = a4;
  v10 = a3;
  if ( *(_DWORD *)(*a5 - 12) )
    sub_DA73B4(&v26, a5);
  else
    sub_DA7364((void **)&v26, "disconnect.disconnect_screen");
  v25 = ClientInstance::isPrimaryClient(*(ClientInstance **)(v5 + 8)) ^ 1;
  createScreen<MinecraftScreenModel,DisconnectScreenController,std::string const&,std::string const&,bool>(
    &v27,
    v5,
    v7,
    v8,
    (const char **)&v26,
    v10,
    v9,
    &v25);
  v11 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  }
  v23 = v27;
  v24 = v28;
  if ( v28 )
    v12 = (unsigned int *)(v28 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
      ++*v12;
  result = SceneFactory::_createScreen(v6, v5, (unsigned __int64 *)&v23);
  v15 = v24;
  if ( v24 )
    v16 = (unsigned int *)(v24 + 4);
        result = __ldrex(v16);
      while ( __strex(result - 1, v16) );
      result = (*v16)--;
    if ( result == 1 )
      v17 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v17);
        while ( __strex(result - 1, v17) );
      }
      else
        result = (*v17)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  v18 = v28;
    v19 = (unsigned int *)(v28 + 4);
        result = __ldrex(v19);
      while ( __strex(result - 1, v19) );
      result = (*v19)--;
      v20 = (unsigned int *)(v18 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
          result = __ldrex(v20);
        while ( __strex(result - 1, v20) );
        result = (*v20)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
  return result;
}


unsigned int __fastcall SceneFactory::createGamepadDisconnectScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  unsigned int result; // r0@8
  int v11; // r4@8
  unsigned int *v12; // r1@9
  unsigned int *v13; // r5@15
  int v14; // r4@22
  unsigned int *v15; // r1@23
  unsigned int *v16; // r5@29
  unsigned int *v17; // r2@37
  signed int v18; // r1@39
  int v19; // [sp+8h] [bp-30h]@2
  int v20; // [sp+Ch] [bp-2Ch]@2
  int v21; // [sp+14h] [bp-24h]@1
  int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v21, "common.modal_screen");
  j__Z12createScreenI20MinecraftScreenModel33GamepadDisconnectScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v22,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v19 = v22;
  v20 = v23;
  if ( v23 )
    v8 = (unsigned int *)(v23 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  result = SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v19);
  v11 = v20;
  if ( v20 )
    v12 = (unsigned int *)(v20 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v14 = v23;
    v15 = (unsigned int *)(v23 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return result;
}


void __fastcall SceneFactory::createCoinPurchaseScreen(SceneFactory *this, int a2)
{
  SceneFactory::createCoinPurchaseScreen(this, a2);
}


int __fastcall SceneFactory::createRealmNetworkProgressScreen(unsigned __int64 *a1, int a2, int *a3, int *a4)
{
  int v4; // r9@1
  unsigned __int64 *v5; // r10@1
  int *v6; // r7@1
  int *v7; // r8@1
  int *v8; // r0@1
  int v9; // r1@2
  int v10; // r0@2
  int *v11; // r0@5
  int v12; // r1@5
  void *v13; // r7@6
  int v14; // r0@6
  int v15; // r0@7
  ResourcePackProgressHandler *v16; // r7@11
  int v17; // r0@11
  int v18; // r0@12
  void *v19; // r7@16
  int v20; // r0@18
  int v21; // r0@19
  ResourceLoadProgressHandler *v22; // r7@23
  int v23; // r0@23
  int v24; // r0@24
  __int64 v25; // kr00_8@29
  __int64 v26; // kr08_8@29
  __int64 v27; // kr10_8@29
  __int64 v28; // kr18_8@29
  int v29; // r1@29
  int v30; // r0@29
  int v32; // [sp+10h] [bp-80h]@28
  int v33; // [sp+14h] [bp-7Ch]@29
  __int64 v34; // [sp+18h] [bp-78h]@29
  __int64 v35; // [sp+20h] [bp-70h]@29
  __int64 v36; // [sp+28h] [bp-68h]@29
  __int64 v37; // [sp+30h] [bp-60h]@29
  int v38; // [sp+38h] [bp-58h]@1
  int v39; // [sp+3Ch] [bp-54h]@3
  __int64 v40; // [sp+40h] [bp-50h]@29
  __int64 v41; // [sp+48h] [bp-48h]@29
  __int64 v42; // [sp+50h] [bp-40h]@1
  __int64 v43; // [sp+58h] [bp-38h]@1
  char v44; // [sp+60h] [bp-30h]@16
  void (*v45)(void); // [sp+68h] [bp-28h]@16

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  _aeabi_memclr8(&v38, 40);
  std::_Deque_base<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>::_M_initialize_map(
    (int)&v38,
    0);
  v8 = (int *)v42;
  if ( (_DWORD)v42 == (_DWORD)v43 - 4 )
  {
    if ( (unsigned int)(v39 - ((HIDWORD(v43) - v38) >> 2)) <= 1 )
      std::deque<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>::_M_reallocate_map(
        (int)&v38,
        1u,
        0);
    *(_DWORD *)(HIDWORD(v43) + 4) = operator new(0x200u);
    v11 = (int *)v42;
    v12 = *v6;
    *v6 = 0;
    *v11 = v12;
    HIDWORD(v43) += 4;
    v10 = *(_DWORD *)HIDWORD(v43);
    HIDWORD(v42) = v10;
    LODWORD(v43) = v10 + 512;
  }
  else
    v9 = *v6;
    *v8 = v9;
    v10 = (int)(v8 + 1);
  LODWORD(v42) = v10;
  v13 = operator new(0xCu);
  SearchingForSessionProgressHandler::SearchingForSessionProgressHandler((int)v13);
  v14 = v42;
    *(_DWORD *)v42 = v13;
    v15 = *(_DWORD *)HIDWORD(v43);
    HIDWORD(v42) = v15;
    LODWORD(v43) = v15 + 512;
    v15 = v14 + 4;
  LODWORD(v42) = v15;
  v16 = (ResourcePackProgressHandler *)operator new(0x38u);
  ResourcePackProgressHandler::ResourcePackProgressHandler(v16, 0);
  v17 = v42;
    *(_DWORD *)v42 = v16;
    v18 = *(_DWORD *)HIDWORD(v43);
    HIDWORD(v42) = v18;
    LODWORD(v43) = v18 + 512;
    v18 = v17 + 4;
  LODWORD(v42) = v18;
  v19 = operator new(0x20u);
  v45 = 0;
  WorldGenerationProgressHandler::WorldGenerationProgressHandler((int)v19, 0, (int)&v44);
  if ( v45 )
    v45();
  v20 = v42;
    *(_DWORD *)v42 = v19;
    v21 = *(_DWORD *)HIDWORD(v43);
    HIDWORD(v42) = v21;
    LODWORD(v43) = v21 + 512;
    v21 = v20 + 4;
  LODWORD(v42) = v21;
  v22 = (ResourceLoadProgressHandler *)operator new(0xCu);
  ResourceLoadProgressHandler::ResourceLoadProgressHandler(v22);
  v23 = v42;
    *(_DWORD *)v42 = v22;
    v24 = *(_DWORD *)HIDWORD(v43);
    HIDWORD(v42) = v24;
    LODWORD(v43) = v24 + 512;
    v24 = v23 + 4;
  LODWORD(v42) = v24;
  _aeabi_memclr8(&v32, 40);
    (int)&v32,
  if ( v38 )
    v25 = v34;
    v26 = v35;
    v35 = v41;
    v34 = v40;
    v40 = v25;
    v41 = v26;
    v27 = v36;
    v28 = v37;
    v37 = v43;
    v36 = v42;
    v42 = v27;
    v43 = v28;
    v29 = v32;
    v32 = v38;
    v38 = v29;
    v30 = v33;
    v33 = v39;
    v39 = v30;
  SceneFactory::createProgressScreen(v5, v4, v7, (int)&v32, 1, 1, 1);
  std::deque<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>::~deque((int)&v32);
  return std::deque<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>::~deque((int)&v38);
}


unsigned int __fastcall SceneFactory::createBrewingStandScreen(SceneFactory *this, Player *a2, const BlockPos *a3, const BlockPos *a4)
{
  Player *v4; // r4@1
  unsigned __int64 *v5; // r8@1
  const BlockPos *v6; // r6@1
  Options *v7; // r0@1
  int v8; // r0@1
  signed int v9; // r1@1
  MinecraftGame *v10; // r7@3
  ClientInstance *v11; // r5@3
  void **v12; // r0@3
  void *v13; // r0@3
  unsigned int *v14; // r0@5
  unsigned int v15; // r1@7
  unsigned int result; // r0@10
  int v17; // r4@10
  unsigned int *v18; // r1@11
  unsigned int *v19; // r5@17
  int v20; // r4@24
  unsigned int *v21; // r1@25
  unsigned int *v22; // r5@31
  unsigned int *v23; // r2@39
  signed int v24; // r1@41
  int v25; // [sp+10h] [bp-38h]@4
  int v26; // [sp+14h] [bp-34h]@4
  int v27; // [sp+1Ch] [bp-2Ch]@3
  int v28; // [sp+20h] [bp-28h]@3
  int v29; // [sp+24h] [bp-24h]@4
  int v30; // [sp+28h] [bp-20h]@3

  v4 = a2;
  v5 = (unsigned __int64 *)this;
  v6 = a4;
  v7 = (Options *)ClientInstance::getOptions(*((ClientInstance **)a2 + 2));
  v8 = Options::getUIProfile(v7);
  v9 = 0;
  if ( !v8 )
    v9 = 1;
  v30 = v9;
  v10 = *(MinecraftGame **)v4;
  v11 = (ClientInstance *)*((_DWORD *)v4 + 2);
  v12 = sub_DA7364((void **)&v27, "brewing_stand.brewing_stand_screen");
  createScreen<ClientInstanceScreenModel,BrewingStandScreenController,BlockPos const&,InteractionModel &>(
    &v28,
    (int)v4,
    v10,
    v11,
    (const char **)v12,
    v6,
    &v30);
  v13 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v27 - 4);
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
      j_j_j_j_j__ZdlPv_9(v13);
  }
  v25 = v28;
  v26 = v29;
  if ( v29 )
    v14 = (unsigned int *)(v29 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  result = SceneFactory::_createScreen(v5, (int)v4, (unsigned __int64 *)&v25);
  v17 = v26;
  if ( v26 )
    v18 = (unsigned int *)(v26 + 4);
        result = __ldrex(v18);
      while ( __strex(result - 1, v18) );
      result = (*v18)--;
    if ( result == 1 )
      v19 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v19);
        while ( __strex(result - 1, v19) );
      }
      else
        result = (*v19)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  v20 = v29;
    v21 = (unsigned int *)(v29 + 4);
        result = __ldrex(v21);
      while ( __strex(result - 1, v21) );
      result = (*v21)--;
      v22 = (unsigned int *)(v20 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
          result = __ldrex(v22);
        while ( __strex(result - 1, v22) );
        result = (*v22)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
  return result;
}


void __fastcall SceneFactory::createAddEditExternalServerScreen(SceneFactory *this, int a2, signed int a3)
{
  unsigned __int64 *v3; // r5@1
  int v4; // r4@1
  MinecraftGame *v5; // r6@1
  const char *v6; // r1@1
  ClientInstance *v7; // r7@1
  void **v8; // r0@3
  int v9; // r4@3
  unsigned int *v10; // r1@4
  unsigned int v11; // r0@6
  unsigned int *v12; // r5@10
  unsigned int v13; // r0@12
  void *v14; // r0@17
  unsigned int *v15; // r2@19
  signed int v16; // r1@21
  int v17; // [sp+10h] [bp-28h]@3
  char v18; // [sp+14h] [bp-24h]@3
  int v19; // [sp+18h] [bp-20h]@3
  int v20; // [sp+1Ch] [bp-1Ch]@1

  v3 = (unsigned __int64 *)this;
  v4 = a2;
  v20 = a3;
  v5 = *(MinecraftGame **)a2;
  v6 = "add_external_server.add_external_server_screen_edit";
  v7 = *(ClientInstance **)(v4 + 8);
  if ( a3 <= -1 )
    v6 = "add_external_server.add_external_server_screen_new";
  v8 = sub_DA7364((void **)&v17, v6);
  createScreen<MainMenuScreenModel,AddExternalServerScreenController,int &>(
    &v18,
    v4,
    v5,
    v7,
    (const char **)v8,
    (unsigned int *)&v20);
  SceneFactory::_createScreen(v3, v4, (unsigned __int64 *)&v18);
  v9 = v19;
  if ( v19 )
  {
    v10 = (unsigned int *)(v19 + 4);
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
  }
  v14 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
}


int __fastcall SceneFactory::createRealmsJoinProgressScreen(unsigned __int64 *a1, int a2, int *a3, int *a4, int a5, char a6)
{
  unsigned __int64 *v6; // r8@1
  int v7; // r4@1
  int *v8; // r5@1
  int *v9; // r9@1
  int v10; // r1@1
  int *v11; // r0@1
  int v12; // r2@2
  _DWORD *v13; // r0@2
  int *v14; // r0@5
  int v15; // r1@5
  _DWORD **v16; // r1@5
  int v17; // r1@7
  int v18; // r0@7
  int *v19; // r0@10
  int v20; // r1@10
  ResourcePackProgressHandler *v21; // r5@11
  int v22; // r0@11
  int v23; // r0@12
  int v24; // r0@16
  int v25; // r1@17
  int v26; // r0@17
  int v27; // r1@20
  ResourceLoadProgressHandler *v28; // r5@21
  int v29; // r0@21
  int v30; // r0@22
  MinecraftGame *v31; // r5@26
  ClientInstance *v32; // r6@26
  void **v33; // r0@26
  int v34; // r4@26
  unsigned int *v35; // r1@27
  unsigned int v36; // r0@29
  unsigned int *v37; // r5@33
  unsigned int v38; // r0@35
  void *v39; // r0@40
  void *v40; // r0@41
  unsigned int *v42; // r2@43
  signed int v43; // r1@45
  unsigned int *v44; // r2@47
  signed int v45; // r1@49
  int v46; // [sp+14h] [bp-14h]@26
  char v47; // [sp+18h] [bp-10h]@26
  int v48; // [sp+1Ch] [bp-Ch]@26
  int v49; // [sp+20h] [bp-8h]@16
  int v50; // [sp+24h] [bp-4h]@1
  int v51; // [sp+28h] [bp+0h]@1
  int v52; // [sp+2Ch] [bp+4h]@3
  int *v53; // [sp+40h] [bp+18h]@1
  _DWORD *v54; // [sp+44h] [bp+1Ch]@5
  _DWORD *v55; // [sp+48h] [bp+20h]@1
  _DWORD **v56; // [sp+4Ch] [bp+24h]@3
  char v57; // [sp+57h] [bp+2Fh]@1

  v6 = a1;
  v7 = a2;
  v57 = a6;
  v8 = a4;
  v9 = a3;
  _aeabi_memclr8(&v51, 40);
  std::_Deque_base<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>::_M_initialize_map(
    (int)&v51,
    0);
  (*(void (__fastcall **)(int *))(**(_DWORD **)a5 + 36))(&v50);
  v10 = (int)v55;
  v11 = v53;
  if ( v53 == v55 - 1 )
  {
    if ( (unsigned int)(v52 - (((signed int)v56 - v51) >> 2)) <= 1 )
      std::deque<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>::_M_reallocate_map(
        (int)&v51,
        1u,
        0);
    v56[1] = operator new(0x200u);
    v14 = v53;
    v15 = *v8;
    *v8 = 0;
    *v14 = v15;
    v16 = v56 + 1;
    v56 = v16;
    v13 = *v16;
    v54 = v13;
    v10 = (int)(v13 + 128);
    v55 = v13 + 128;
  }
  else
    v12 = *v8;
    *v11 = v12;
    v13 = v11 + 1;
  v53 = v13;
  if ( v13 == (_DWORD *)(v10 - 4) )
    v19 = v53;
    v20 = *(_DWORD *)a5;
    *(_DWORD *)a5 = 0;
    *v19 = v20;
    ++v56;
    v18 = (int)*v56;
    v54 = (_DWORD *)v18;
    v55 = (_DWORD *)(v18 + 512);
    v17 = *(_DWORD *)a5;
    *v13 = v17;
    v18 = (int)(v13 + 1);
  v53 = (int *)v18;
  v21 = (ResourcePackProgressHandler *)operator new(0x38u);
  ResourcePackProgressHandler::ResourcePackProgressHandler(v21, 0);
  v22 = (int)v53;
    *v53 = (int)v21;
    v23 = (int)*v56;
    v54 = (_DWORD *)v23;
    v55 = (_DWORD *)(v23 + 512);
    v23 = v22 + 4;
  v53 = (int *)v23;
  std::make_unique<RealmsLoadingLevelProgressHandler,std::string &>(&v49, &v50);
  v24 = (int)v53;
    v27 = v49;
    v49 = 0;
    *v53 = v27;
    v26 = (int)*v56;
    v54 = (_DWORD *)v26;
    v55 = (_DWORD *)(v26 + 512);
    v25 = v49;
    *v53 = v25;
    v26 = v24 + 4;
  v53 = (int *)v26;
  v49 = 0;
  v28 = (ResourceLoadProgressHandler *)operator new(0xCu);
  ResourceLoadProgressHandler::ResourceLoadProgressHandler(v28);
  v29 = (int)v53;
    *v53 = (int)v28;
    v30 = (int)*v56;
    v54 = (_DWORD *)v30;
    v55 = (_DWORD *)(v30 + 512);
    v30 = v29 + 4;
  v53 = (int *)v30;
  v31 = *(MinecraftGame **)v7;
  v32 = *(ClientInstance **)(v7 + 8);
  v33 = sub_DA7364((void **)&v46, "progress.realms_loading_progress_screen");
  createScreen<MinecraftScreenModel,ProgressScreenController,std::string const&,std::deque<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>,bool &>(
    &v47,
    v7,
    v31,
    v32,
    (const char **)v33,
    v9,
    &v57);
  SceneFactory::_createScreen(v6, v7, (unsigned __int64 *)&v47);
  v34 = v48;
  if ( v48 )
    v35 = (unsigned int *)(v48 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
    }
    else
      v36 = (*v35)--;
    if ( v36 == 1 )
      v37 = (unsigned int *)(v34 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 8))(v34);
      if ( &pthread_create )
      {
        __dmb();
        do
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
      }
      else
        v38 = (*v37)--;
      if ( v38 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 12))(v34);
  v39 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v46 - 4);
        v43 = __ldrex(v42);
        __strex(v43 - 1, v42);
      while ( &v51 );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9(v39);
  v40 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v50 - 4);
        v45 = __ldrex(v44);
        __strex(v45 - 1, v44);
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j_j__ZdlPv_9(v40);
  return std::deque<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>::~deque((int)&v51);
}


void __fastcall SceneFactory::createDimensionChangeProgressScreen(unsigned __int64 *a1, int a2, int a3, int a4)
{
  unsigned __int64 *v4; // r6@1
  int v5; // r7@1
  int v6; // r4@1
  int v7; // r8@1
  void *v8; // r5@1
  void *v9; // r0@3
  void *v10; // r0@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  int v15; // [sp+Ch] [bp-3Ch]@3
  void *v16; // [sp+10h] [bp-38h]@3
  int v17; // [sp+18h] [bp-30h]@3
  char v18; // [sp+1Ch] [bp-2Ch]@1
  void (*v19)(void); // [sp+24h] [bp-24h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = operator new(0x20u);
  v19 = 0;
  DimensionChangeProgressHandler::DimensionChangeProgressHandler((int)v8, v6, (int)&v18);
  if ( v19 )
    v19();
  sub_DA7364((void **)&v17, "nether");
  v16 = v8;
  getScreenForDimensionID((void **)&v15, v5);
  SceneFactory::createProgressScreen(v4, v7, COERCE_FLOAT(&v17), (int *)&v16, 0, &v15);
  v9 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v15 - 4);
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
      j_j_j_j_j__ZdlPv_9(v9);
  }
  if ( v16 )
    (*(void (**)(void))(*(_DWORD *)v16 + 4))();
  v16 = 0;
  v10 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v17 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
}


void __fastcall SceneFactory::createSkinPackUpsellScreen(SceneFactory *this, const StoreCatalogItemModel *a2, int a3, int a4)
{
  const StoreCatalogItemModel *v4; // r4@1
  StoreCatalogItemModel *v5; // r5@1
  MinecraftGame *v6; // r6@1
  unsigned __int64 *v7; // r8@1
  ClientInstance *v8; // r7@1
  void **v9; // r0@1
  int v10; // r4@1
  unsigned int *v11; // r1@2
  unsigned int v12; // r0@4
  unsigned int *v13; // r5@8
  unsigned int v14; // r0@10
  void *v15; // r0@15
  unsigned int *v16; // r2@17
  signed int v17; // r1@19
  int v18; // [sp+14h] [bp-34h]@1
  int v19; // [sp+1Ch] [bp-2Ch]@1
  char v20; // [sp+20h] [bp-28h]@1
  int v21; // [sp+24h] [bp-24h]@1
  int v22; // [sp+28h] [bp-20h]@1

  v4 = a2;
  v22 = a4;
  v5 = (StoreCatalogItemModel *)a3;
  v6 = *(MinecraftGame **)a2;
  v7 = (unsigned __int64 *)this;
  v8 = (ClientInstance *)*((_DWORD *)a2 + 2);
  v9 = sub_DA7364((void **)&v19, "skin_pack_purchase.skin_pack_purchase_upsell_screen");
  v18 = 1;
  createScreen<MainMenuScreenModel,SkinPackPurchaseScreenController,StoreCatalogItemModel const&,int &,StoreScreenType>(
    &v20,
    (int)v4,
    v6,
    v8,
    (const char **)v9,
    v5,
    &v22,
    &v18);
  SceneFactory::_createScreen(v7, (int)v4, (unsigned __int64 *)&v20);
  v10 = v21;
  if ( v21 )
  {
    v11 = (unsigned int *)(v21 + 4);
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
  v15 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v19 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
}


unsigned int __fastcall SceneFactory::createHorseScreen(unsigned __int64 *a1, int a2, int a3, __int64 *a4)
{
  int v4; // r4@1
  unsigned __int64 *v5; // r8@1
  __int64 *v6; // r6@1
  Options *v7; // r0@1
  int v8; // r0@1
  signed int v9; // r1@1
  MinecraftGame *v10; // r7@3
  ClientInstance *v11; // r5@3
  void **v12; // r0@3
  void *v13; // r0@3
  unsigned int *v14; // r0@5
  unsigned int v15; // r1@7
  unsigned int result; // r0@10
  int v17; // r4@10
  unsigned int *v18; // r1@11
  unsigned int *v19; // r5@17
  int v20; // r4@24
  unsigned int *v21; // r1@25
  unsigned int *v22; // r5@31
  unsigned int *v23; // r2@39
  signed int v24; // r1@41
  int v25; // [sp+10h] [bp-38h]@4
  int v26; // [sp+14h] [bp-34h]@4
  int v27; // [sp+1Ch] [bp-2Ch]@3
  int v28; // [sp+20h] [bp-28h]@3
  int v29; // [sp+24h] [bp-24h]@4
  int v30; // [sp+28h] [bp-20h]@3

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(a2 + 8));
  v8 = Options::getUIProfile(v7);
  v9 = 0;
  if ( !v8 )
    v9 = 1;
  v30 = v9;
  v10 = *(MinecraftGame **)v4;
  v11 = *(ClientInstance **)(v4 + 8);
  v12 = sub_DA7364((void **)&v27, "horse.horse_screen");
  createScreen<ClientInstanceScreenModel,HorseScreenController,EntityUniqueID const&,InteractionModel &>(
    &v28,
    v4,
    v10,
    v11,
    (const char **)v12,
    v6,
    &v30);
  v13 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v27 - 4);
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
      j_j_j_j_j__ZdlPv_9(v13);
  }
  v25 = v28;
  v26 = v29;
  if ( v29 )
    v14 = (unsigned int *)(v29 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  result = SceneFactory::_createScreen(v5, v4, (unsigned __int64 *)&v25);
  v17 = v26;
  if ( v26 )
    v18 = (unsigned int *)(v26 + 4);
        result = __ldrex(v18);
      while ( __strex(result - 1, v18) );
      result = (*v18)--;
    if ( result == 1 )
      v19 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v19);
        while ( __strex(result - 1, v19) );
      }
      else
        result = (*v19)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  v20 = v29;
    v21 = (unsigned int *)(v29 + 4);
        result = __ldrex(v21);
      while ( __strex(result - 1, v21) );
      result = (*v21)--;
      v22 = (unsigned int *)(v20 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
          result = __ldrex(v22);
        while ( __strex(result - 1, v22) );
        result = (*v22)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
  return result;
}


unsigned int __fastcall SceneFactory::createWorldErrorReportScreen(SceneFactory *this, const LegacyWorldInfo *a2, int a3, char a4)
{
  const LegacyWorldInfo *v4; // r4@1
  int v5; // r5@1
  MinecraftGame *v6; // r6@1
  unsigned __int64 *v7; // r8@1
  ClientInstance *v8; // r7@1
  void **v9; // r0@1
  void *v10; // r0@1
  unsigned int *v11; // r0@3
  unsigned int v12; // r1@5
  unsigned int result; // r0@8
  int v14; // r4@8
  unsigned int *v15; // r1@9
  unsigned int *v16; // r5@15
  int v17; // r4@22
  unsigned int *v18; // r1@23
  unsigned int *v19; // r5@29
  unsigned int *v20; // r2@37
  signed int v21; // r1@39
  int v22; // [sp+10h] [bp-38h]@2
  int v23; // [sp+14h] [bp-34h]@2
  int v24; // [sp+1Ch] [bp-2Ch]@1
  int v25; // [sp+20h] [bp-28h]@1
  int v26; // [sp+24h] [bp-24h]@2
  char v27; // [sp+2Bh] [bp-1Dh]@1

  v4 = a2;
  v27 = a4;
  v5 = a3;
  v6 = *(MinecraftGame **)a2;
  v7 = (unsigned __int64 *)this;
  v8 = (ClientInstance *)*((_DWORD *)a2 + 2);
  v9 = sub_DA7364((void **)&v24, "world_conversion_error_report.world_conversion_error_report_screen");
  createScreen<PlayScreenModel,WorldConversionErrorReportScreenController,LegacyWorldInfo const&,bool &>(
    &v25,
    (int)v4,
    v6,
    v8,
    (const char **)v9,
    v5,
    &v27);
  v10 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v20 = (unsigned int *)(v24 - 4);
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
      j_j_j_j_j__ZdlPv_9(v10);
  }
  v22 = v25;
  v23 = v26;
  if ( v26 )
    v11 = (unsigned int *)(v26 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
      ++*v11;
  result = SceneFactory::_createScreen(v7, (int)v4, (unsigned __int64 *)&v22);
  v14 = v23;
  if ( v23 )
    v15 = (unsigned int *)(v23 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
    if ( result == 1 )
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
      }
      else
        result = (*v16)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  v17 = v26;
    v18 = (unsigned int *)(v26 + 4);
        result = __ldrex(v18);
      while ( __strex(result - 1, v18) );
      result = (*v18)--;
      v19 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
          result = __ldrex(v19);
        while ( __strex(result - 1, v19) );
        result = (*v19)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  return result;
}


ModalScreenData *__fastcall SceneFactory::createPlatformAchievementsConnectConfirmationScreen(unsigned __int64 *a1, int a2, int a3)
{
  unsigned __int64 *v3; // r5@1
  int v4; // r8@1
  int v5; // r6@1
  char *v6; // r0@1
  void *v7; // r0@1
  void *v8; // r0@2
  void *v9; // r0@3
  void (__fastcall *v10)(int *, int, signed int); // r3@4
  char *v11; // r4@8
  int v12; // r6@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  int *v15; // r0@18
  unsigned int *v17; // r2@24
  signed int v18; // r1@26
  unsigned int *v19; // r2@28
  signed int v20; // r1@30
  unsigned int *v21; // r2@32
  signed int v22; // r1@34
  int v23; // [sp+0h] [bp-90h]@5
  void (*v24)(void); // [sp+8h] [bp-88h]@4
  int v25; // [sp+Ch] [bp-84h]@5
  int v26; // [sp+14h] [bp-7Ch]@2
  int v27; // [sp+18h] [bp-78h]@2
  int v28; // [sp+1Ch] [bp-74h]@1
  char *v29; // [sp+20h] [bp-70h]@1
  char *v30; // [sp+24h] [bp-6Ch]@1
  char *v31; // [sp+28h] [bp-68h]@1
  void *v32; // [sp+2Ch] [bp-64h]@1
  int v33; // [sp+30h] [bp-60h]@1
  int v34; // [sp+34h] [bp-5Ch]@1
  int v35; // [sp+38h] [bp-58h]@1
  void *v36; // [sp+3Ch] [bp-54h]@1
  int v37; // [sp+40h] [bp-50h]@1
  int v38; // [sp+44h] [bp-4Ch]@1
  int v39; // [sp+48h] [bp-48h]@1
  void *v40; // [sp+4Ch] [bp-44h]@1
  void *v41; // [sp+50h] [bp-40h]@1
  void *v42; // [sp+54h] [bp-3Ch]@1
  void *v43; // [sp+58h] [bp-38h]@1
  int v44; // [sp+5Ch] [bp-34h]@1
  char v45; // [sp+60h] [bp-30h]@1
  int v46; // [sp+64h] [bp-2Ch]@1
  char v47; // [sp+68h] [bp-28h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v32 = &unk_28898CC;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = &unk_28898CC;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = &unk_28898CC;
  v41 = &unk_28898CC;
  v42 = &unk_28898CC;
  v43 = &unk_28898CC;
  v44 = 1;
  v45 = 0;
  v46 = 1;
  v47 = 0;
  sub_DA78A4(&v32, "nx.nintendoNetwork.networkName", (_BYTE *)0x1E);
  I18n::get(&v28, (int **)&v32);
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v6 = (char *)operator new(4u);
  v29 = v6;
  v31 = v6 + 4;
  v30 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v28,
                  (int)&v29,
                  (int)v6);
  v7 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v28 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  sub_DA7364((void **)&v26, "network.thirdparty.connect.achievements");
  I18n::get(&v27, &v26, (unsigned __int64 *)&v29);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v36,
    &v27);
  v8 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v27 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v26 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v44 = 2;
  sub_DA78A4(&v42, "gui.signIn", (_BYTE *)0xA);
  v24 = 0;
  v10 = *(void (__fastcall **)(int *, int, signed int))(v5 + 8);
  if ( v10 )
    v10(&v23, v5, 2);
    v25 = *(_DWORD *)(v5 + 12);
    v24 = *(void (**)(void))(v5 + 8);
  SceneFactory::createUserManagementModalScreen(v3, v4, (int)&v32, (int)&v23);
  if ( v24 )
    v24();
  v12 = (int)v30;
  v11 = v29;
  if ( v29 != v30 )
    do
      v15 = (int *)(*(_DWORD *)v11 - 12);
      if ( v15 != &dword_28898C0 )
      {
        v13 = (unsigned int *)(*(_DWORD *)v11 - 4);
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
          j_j_j_j_j__ZdlPv_9(v15);
      }
      v11 += 4;
    while ( v11 != (char *)v12 );
    v11 = v29;
  if ( v11 )
    operator delete(v11);
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v32);
}


unsigned int __fastcall SceneFactory::createEnchantingScreen(SceneFactory *this, Player *a2, const BlockPos *a3, int a4)
{
  Player *v4; // r4@1
  unsigned __int64 *v5; // r8@1
  int v6; // r6@1
  Options *v7; // r0@1
  int v8; // r0@1
  signed int v9; // r1@1
  MinecraftGame *v10; // r7@3
  ClientInstance *v11; // r5@3
  void **v12; // r0@3
  void *v13; // r0@3
  unsigned int *v14; // r0@5
  unsigned int v15; // r1@7
  unsigned int result; // r0@10
  int v17; // r4@10
  unsigned int *v18; // r1@11
  unsigned int *v19; // r5@17
  int v20; // r4@24
  unsigned int *v21; // r1@25
  unsigned int *v22; // r5@31
  unsigned int *v23; // r2@39
  signed int v24; // r1@41
  int v25; // [sp+10h] [bp-38h]@4
  int v26; // [sp+14h] [bp-34h]@4
  int v27; // [sp+1Ch] [bp-2Ch]@3
  int v28; // [sp+20h] [bp-28h]@3
  int v29; // [sp+24h] [bp-24h]@4
  int v30; // [sp+28h] [bp-20h]@3

  v4 = a2;
  v5 = (unsigned __int64 *)this;
  v6 = a4;
  v7 = (Options *)ClientInstance::getOptions(*((ClientInstance **)a2 + 2));
  v8 = Options::getUIProfile(v7);
  v9 = 0;
  if ( !v8 )
    v9 = 1;
  v30 = v9;
  v10 = *(MinecraftGame **)v4;
  v11 = (ClientInstance *)*((_DWORD *)v4 + 2);
  v12 = sub_DA7364((void **)&v27, "enchanting.enchanting_screen");
  createScreen<ClientInstanceScreenModel,EnchantingScreenController,BlockPos const&,InteractionModel &>(
    &v28,
    (int)v4,
    v10,
    v11,
    (const char **)v12,
    v6,
    &v30);
  v13 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v27 - 4);
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
      j_j_j_j_j__ZdlPv_9(v13);
  }
  v25 = v28;
  v26 = v29;
  if ( v29 )
    v14 = (unsigned int *)(v29 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  result = SceneFactory::_createScreen(v5, (int)v4, (unsigned __int64 *)&v25);
  v17 = v26;
  if ( v26 )
    v18 = (unsigned int *)(v26 + 4);
        result = __ldrex(v18);
      while ( __strex(result - 1, v18) );
      result = (*v18)--;
    if ( result == 1 )
      v19 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v19);
        while ( __strex(result - 1, v19) );
      }
      else
        result = (*v19)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  v20 = v29;
    v21 = (unsigned int *)(v29 + 4);
        result = __ldrex(v21);
      while ( __strex(result - 1, v21) );
      result = (*v21)--;
      v22 = (unsigned int *)(v20 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
          result = __ldrex(v22);
        while ( __strex(result - 1, v22) );
        result = (*v22)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
  return result;
}


ModalScreenData *__fastcall SceneFactory::createPlatformStoreConnectConfirmationScreen(unsigned __int64 *a1, int a2, int a3)
{
  unsigned __int64 *v3; // r5@1
  int v4; // r8@1
  int v5; // r6@1
  char *v6; // r0@1
  void *v7; // r0@1
  void *v8; // r0@2
  void *v9; // r0@3
  void (__fastcall *v10)(int *, int, signed int); // r3@4
  char *v11; // r4@8
  int v12; // r6@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  int *v15; // r0@18
  unsigned int *v17; // r2@24
  signed int v18; // r1@26
  unsigned int *v19; // r2@28
  signed int v20; // r1@30
  unsigned int *v21; // r2@32
  signed int v22; // r1@34
  int v23; // [sp+0h] [bp-90h]@5
  void (*v24)(void); // [sp+8h] [bp-88h]@4
  int v25; // [sp+Ch] [bp-84h]@5
  int v26; // [sp+14h] [bp-7Ch]@2
  int v27; // [sp+18h] [bp-78h]@2
  int v28; // [sp+1Ch] [bp-74h]@1
  char *v29; // [sp+20h] [bp-70h]@1
  char *v30; // [sp+24h] [bp-6Ch]@1
  char *v31; // [sp+28h] [bp-68h]@1
  void *v32; // [sp+2Ch] [bp-64h]@1
  int v33; // [sp+30h] [bp-60h]@1
  int v34; // [sp+34h] [bp-5Ch]@1
  int v35; // [sp+38h] [bp-58h]@1
  void *v36; // [sp+3Ch] [bp-54h]@1
  int v37; // [sp+40h] [bp-50h]@1
  int v38; // [sp+44h] [bp-4Ch]@1
  int v39; // [sp+48h] [bp-48h]@1
  void *v40; // [sp+4Ch] [bp-44h]@1
  void *v41; // [sp+50h] [bp-40h]@1
  void *v42; // [sp+54h] [bp-3Ch]@1
  void *v43; // [sp+58h] [bp-38h]@1
  int v44; // [sp+5Ch] [bp-34h]@1
  char v45; // [sp+60h] [bp-30h]@1
  int v46; // [sp+64h] [bp-2Ch]@1
  char v47; // [sp+68h] [bp-28h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v32 = &unk_28898CC;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = &unk_28898CC;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = &unk_28898CC;
  v41 = &unk_28898CC;
  v42 = &unk_28898CC;
  v43 = &unk_28898CC;
  v44 = 1;
  v45 = 0;
  v46 = 1;
  v47 = 0;
  sub_DA78A4(&v32, "nx.nintendoNetwork.networkName", (_BYTE *)0x1E);
  I18n::get(&v28, (int **)&v32);
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v6 = (char *)operator new(4u);
  v29 = v6;
  v31 = v6 + 4;
  v30 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v28,
                  (int)&v29,
                  (int)v6);
  v7 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v28 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  sub_DA7364((void **)&v26, "network.thirdparty.connect.store");
  I18n::get(&v27, &v26, (unsigned __int64 *)&v29);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v36,
    &v27);
  v8 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v27 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v26 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v44 = 2;
  sub_DA78A4(&v42, "gui.signIn", (_BYTE *)0xA);
  v46 = 0;
  v24 = 0;
  v10 = *(void (__fastcall **)(int *, int, signed int))(v5 + 8);
  if ( v10 )
    v10(&v23, v5, 2);
    v25 = *(_DWORD *)(v5 + 12);
    v24 = *(void (**)(void))(v5 + 8);
  SceneFactory::createUserManagementModalScreen(v3, v4, (int)&v32, (int)&v23);
  if ( v24 )
    v24();
  v12 = (int)v30;
  v11 = v29;
  if ( v29 != v30 )
    do
      v15 = (int *)(*(_DWORD *)v11 - 12);
      if ( v15 != &dword_28898C0 )
      {
        v13 = (unsigned int *)(*(_DWORD *)v11 - 4);
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
          j_j_j_j_j__ZdlPv_9(v15);
      }
      v11 += 4;
    while ( v11 != (char *)v12 );
    v11 = v29;
  if ( v11 )
    operator delete(v11);
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v32);
}


unsigned int __fastcall SceneFactory::createToastScreen(SceneFactory *this, int a2)
{
  int v2; // r7@1
  MinecraftGame *v3; // r4@1
  SceneFactory *v4; // r5@1
  ClientInstance *v5; // r6@1
  void **v6; // r0@1
  void *v7; // r0@1
  int v8; // r0@2
  int v9; // r4@2
  int v10; // r0@2
  int v11; // r0@2
  bool v12; // zf@2
  int v13; // r2@2
  int v14; // r0@6
  __int64 v15; // kr00_8@8
  unsigned int *v16; // r0@9
  unsigned int v17; // r1@11
  int v18; // r1@15
  void (__fastcall *v19)(_DWORD, int *); // r2@15
  unsigned int *v20; // r0@19
  unsigned int v21; // r1@21
  unsigned int result; // r0@26
  unsigned int *v23; // r1@27
  unsigned int *v24; // r5@33
  int v25; // r4@40
  unsigned int *v26; // r1@41
  unsigned int *v27; // r5@47
  unsigned int *v28; // r2@55
  signed int v29; // r1@57
  int v30; // [sp+4h] [bp-34h]@14
  int v31; // [sp+Ch] [bp-2Ch]@1
  char v32; // [sp+10h] [bp-28h]@1
  int v33; // [sp+14h] [bp-24h]@8
  int v34; // [sp+18h] [bp-20h]@15

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v31, "toast_screen.toast_screen");
  j__Z12createScreenI20MinecraftScreenModel21ToastScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v32,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
  {
    v28 = (unsigned int *)(v31 - 4);
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
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v8 = ClientInstance::getHoloInput(*(ClientInstance **)(v2 + 8));
  v9 = (*(int (**)(void))(*(_DWORD *)v8 + 268))();
  v10 = ClientInstance::getHoloInput(*(ClientInstance **)(v2 + 8));
  v11 = (*(int (**)(void))(*(_DWORD *)v10 + 44))();
  v12 = v9 == 0;
  v13 = 0;
  if ( !v9 )
    v12 = v11 == 1;
  if ( v12 )
    v14 = ClientInstance::getLevel(*(ClientInstance **)(v2 + 8));
    v13 = 4;
    if ( !v14 )
      v13 = 3;
  v15 = *(_QWORD *)&v32;
  if ( v33 )
    v16 = (unsigned int *)(v33 + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 + 1, v16) );
      ++*v16;
  createScreenSetupStrategy((DefaultUIScreenSetupCleanupStrategy **)&v30, *(ClientInstance **)(v2 + 8), v13);
  if ( (_DWORD)v15 )
    v18 = v30;
    v19 = *(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)v15 + 272);
    v30 = 0;
    v34 = v18;
    v19(v15, &v34);
    if ( v34 )
      (*(void (**)(void))(*(_DWORD *)v34 + 4))();
    v34 = 0;
  *(_QWORD *)v4 = v15;
  if ( HIDWORD(v15) )
    v20 = (unsigned int *)(HIDWORD(v15) + 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 + 1, v20) );
      ++*v20;
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  result = 0;
  v30 = 0;
    v23 = (unsigned int *)(HIDWORD(v15) + 4);
        result = __ldrex(v23);
      while ( __strex(result - 1, v23) );
      result = (*v23)--;
    if ( result == 1 )
      v24 = (unsigned int *)(HIDWORD(v15) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v15) + 8))(HIDWORD(v15));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v24);
        while ( __strex(result - 1, v24) );
      }
      else
        result = (*v24)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v15) + 12))(HIDWORD(v15));
  v25 = v33;
    v26 = (unsigned int *)(v33 + 4);
        result = __ldrex(v26);
      while ( __strex(result - 1, v26) );
      result = (*v26)--;
      v27 = (unsigned int *)(v25 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
          result = __ldrex(v27);
        while ( __strex(result - 1, v27) );
        result = (*v27)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
  return result;
}


unsigned int __fastcall SceneFactory::createAcceptDeclineInvitationScreen(unsigned __int64 *a1, int a2, int *a3, int *a4, int a5)
{
  int v5; // r9@1
  MinecraftGame *v6; // r6@1
  int *v7; // r5@1
  ClientInstance *v8; // r7@1
  int *v9; // r4@1
  unsigned __int64 *v10; // r8@1
  void **v11; // r0@1
  void *v12; // r0@1
  unsigned int *v13; // r0@3
  unsigned int v14; // r1@5
  unsigned int result; // r0@8
  int v16; // r4@8
  unsigned int *v17; // r1@9
  unsigned int *v18; // r5@15
  int v19; // r4@22
  unsigned int *v20; // r1@23
  unsigned int *v21; // r5@29
  unsigned int *v22; // r2@37
  signed int v23; // r1@39
  int v24; // [sp+10h] [bp-38h]@2
  int v25; // [sp+14h] [bp-34h]@2
  int v26; // [sp+1Ch] [bp-2Ch]@1
  int v27; // [sp+20h] [bp-28h]@1
  int v28; // [sp+24h] [bp-24h]@2

  v5 = a2;
  v6 = *(MinecraftGame **)a2;
  v7 = a4;
  v8 = *(ClientInstance **)(a2 + 8);
  v9 = a3;
  v10 = a1;
  v11 = sub_DA7364((void **)&v26, "common.modal_screen");
  createScreen<MinecraftScreenModel,AcceptDeclineInvitationScreenController,std::string &,std::string &,std::function<void ()(bool)> &>(
    &v27,
    v5,
    v6,
    v8,
    (const char **)v11,
    v9,
    v7,
    a5);
  v12 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v26 - 4);
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
      j_j_j_j_j__ZdlPv_9(v12);
  }
  v24 = v27;
  v25 = v28;
  if ( v28 )
    v13 = (unsigned int *)(v28 + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 + 1, v13) );
      ++*v13;
  result = SceneFactory::_createScreen(v10, v5, (unsigned __int64 *)&v24);
  v16 = v25;
  if ( v25 )
    v17 = (unsigned int *)(v25 + 4);
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
      result = (*v17)--;
    if ( result == 1 )
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
      }
      else
        result = (*v18)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  v19 = v28;
    v20 = (unsigned int *)(v28 + 4);
        result = __ldrex(v20);
      while ( __strex(result - 1, v20) );
      result = (*v20)--;
      v21 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          result = __ldrex(v21);
        while ( __strex(result - 1, v21) );
        result = (*v21)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  return result;
}


unsigned int __fastcall SceneFactory::createInBedScreen(SceneFactory *this, Player *a2, int a3)
{
  Player *v3; // r4@1
  MinecraftGame *v4; // r6@1
  int v5; // r5@1
  ClientInstance *v6; // r7@1
  unsigned __int64 *v7; // r8@1
  void **v8; // r0@1
  void *v9; // r0@1
  unsigned int *v10; // r0@3
  unsigned int v11; // r1@5
  unsigned int result; // r0@8
  int v13; // r4@8
  unsigned int *v14; // r1@9
  unsigned int *v15; // r5@15
  int v16; // r4@22
  unsigned int *v17; // r1@23
  unsigned int *v18; // r5@29
  unsigned int *v19; // r2@37
  signed int v20; // r1@39
  int v21; // [sp+Ch] [bp-34h]@2
  int v22; // [sp+10h] [bp-30h]@2
  int v23; // [sp+18h] [bp-28h]@1
  int v24; // [sp+1Ch] [bp-24h]@1
  int v25; // [sp+20h] [bp-20h]@2

  v3 = a2;
  v4 = *(MinecraftGame **)a2;
  v5 = a3;
  v6 = (ClientInstance *)*((_DWORD *)a2 + 2);
  v7 = (unsigned __int64 *)this;
  v8 = sub_DA7364((void **)&v23, "bed.in_bed_screen");
  createScreen<ClientInstanceScreenModel,InBedScreenController,Player &>(&v24, (int)v3, v4, v6, (const char **)v8, v5);
  v9 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  }
  v21 = v24;
  v22 = v25;
  if ( v25 )
    v10 = (unsigned int *)(v25 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
      ++*v10;
  result = SceneFactory::_createScreen(v7, (int)v3, (unsigned __int64 *)&v21);
  v13 = v22;
  if ( v22 )
    v14 = (unsigned int *)(v22 + 4);
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
      result = (*v14)--;
    if ( result == 1 )
      v15 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
      }
      else
        result = (*v15)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  v16 = v25;
    v17 = (unsigned int *)(v25 + 4);
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
      result = (*v17)--;
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
        result = (*v18)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  return result;
}


void __fastcall SceneFactory::createGlobalVars(SceneFactory *this, UIDefRepository *a2, UIDefRepository *a3)
{
  SceneFactory::createGlobalVars(this, a2, a3);
}


void __fastcall SceneFactory::createMakeInfiniteScreen(unsigned __int64 *a1, int a2, int a3, int a4)
{
  unsigned __int64 *v4; // r6@1
  int v5; // r7@1
  int v6; // r8@1
  double v7; // r0@1
  int v8; // r5@1
  char *v9; // r0@3
  void *v10; // r0@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  char *v15; // [sp+Ch] [bp-3Ch]@3
  int v16; // [sp+10h] [bp-38h]@3
  int v17; // [sp+18h] [bp-30h]@3
  char v18; // [sp+1Ch] [bp-2Ch]@1
  void (*v19)(void); // [sp+24h] [bp-24h]@1

  v4 = a1;
  v5 = a4;
  v6 = a2;
  LODWORD(v7) = operator new(0xE0u);
  v8 = LODWORD(v7);
  v19 = 0;
  MakeInfiniteProgressHandler::MakeInfiniteProgressHandler(v7, v5, (int)&v18);
  if ( v19 )
    v19();
  sub_DA7364((void **)&v17, "make_infinite");
  v16 = v8;
  v15 = (char *)&unk_28898CC;
  SceneFactory::createProgressScreen(v4, v6, COERCE_FLOAT(&v17), &v16, 0, (int *)&v15);
  v9 = v15 - 12;
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v15 - 4);
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
      j_j_j_j_j__ZdlPv_9(v9);
  }
  if ( v16 )
    (*(void (**)(void))(*(_DWORD *)v16 + 4))();
  v16 = 0;
  v10 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v17 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
}


unsigned int *__fastcall SceneFactory::createGameplayScreen(SceneFactory *this, int a2)
{
  int v2; // r6@1
  SceneFactory *v3; // r8@1
  SceneStack *v4; // r0@2
  SceneStack *v5; // r0@4
  AppPlatform **v6; // r0@6
  int v7; // r0@10
  Options *v8; // r0@11
  __int64 v9; // kr00_8@12
  HoloScreenSetupCleanupStrategy *v10; // r6@12
  unsigned int *result; // r0@12
  void (__fastcall *v12)(_DWORD, unsigned int **); // r2@13
  unsigned int v13; // r1@19
  __int64 v14; // kr08_8@21
  ClientInstance *v15; // r4@21
  DefaultLevelDrawSetupCleanupStrategy *v16; // r6@21
  void (__fastcall *v17)(_DWORD, unsigned int **); // r2@22
  unsigned int v18; // r1@28
  unsigned int *v19; // r1@35
  unsigned int *v20; // r4@41
  unsigned int *v21; // r1@49
  int v22; // r4@56
  unsigned int *v23; // r1@57
  unsigned int *v24; // r5@63
  unsigned int *v25; // r4@69
  unsigned int *v26; // r1@77
  char v27; // [sp+4h] [bp-34h]@21
  int v28; // [sp+8h] [bp-30h]@21
  char v29; // [sp+Ch] [bp-2Ch]@12
  int v30; // [sp+10h] [bp-28h]@12
  unsigned int *v31; // [sp+14h] [bp-24h]@13
  char v32; // [sp+18h] [bp-20h]@12
  unsigned int *v33; // [sp+1Ch] [bp-1Ch]@22

  v2 = a2;
  v3 = this;
  if ( ClientInstance::isPrimaryClient(*(ClientInstance **)(a2 + 8)) == 1 )
  {
    v4 = (SceneStack *)ClientInstance::getMainSceneStack(*(ClientInstance **)(v2 + 8));
    SceneStack::flushStack(v4, 0, 0);
  }
  if ( *(_BYTE *)(v2 + 4) != 1 )
    *(_BYTE *)(v2 + 4) = 1;
    v5 = (SceneStack *)ClientInstance::getClientSceneStack(*(ClientInstance **)(v2 + 8));
    SceneStack::deferPushesUntilNextTick(v5);
  MinecraftGame::setMultithreadedRendering(*(MinecraftGame **)v2, 0);
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v6 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v6 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  if ( !AppPlatform::isLowMemoryDevice(*v6) )
    SceneFactory::_createInventoryScreenCache((SceneFactory *)v2);
    SceneFactory::_createWorldSettingsScreenCache((SceneFactory *)v2);
  v7 = ClientInstance::getHoloInput(*(ClientInstance **)(v2 + 8));
  if ( (*(int (**)(void))(*(_DWORD *)v7 + 44))() == 1 )
    v8 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(v2 + 8));
    if ( Options::getVRLivingRoomMode(v8) != 1 )
      return SceneFactory::createRealityScreen(v3, v2);
    std::__shared_ptr<InGameLivingRoomScreen,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<InGameLivingRoomScreen>,MinecraftGame &,ClientInstance &>(
      (int)&v29,
      (int)&v32,
      *(MinecraftGame **)v2,
      *(ClientInstance **)(v2 + 8));
    v9 = *(_QWORD *)&v29;
    *(_DWORD *)&v29 = 0;
    v30 = 0;
    v10 = (HoloScreenSetupCleanupStrategy *)operator new(0x44u);
    result = (unsigned int *)HoloScreenSetupCleanupStrategy::HoloScreenSetupCleanupStrategy(v10);
    if ( (_DWORD)v9 )
    {
      v12 = *(void (__fastcall **)(_DWORD, unsigned int **))(*(_DWORD *)v9 + 272);
      v31 = (unsigned int *)v10;
      v12(v9, &v31);
      result = v31;
      if ( v31 )
        result = (unsigned int *)(*(int (**)(void))(*v31 + 4))();
      v10 = 0;
      v31 = 0;
    }
    *(_QWORD *)v3 = v9;
    if ( HIDWORD(v9) )
      result = (unsigned int *)(HIDWORD(v9) + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(result);
        while ( __strex(v13 + 1, result) );
      }
      else
        ++*result;
    if ( v10 )
      result = (unsigned int *)(*(int (__fastcall **)(HoloScreenSetupCleanupStrategy *))(*(_DWORD *)v10 + 4))(v10);
      v21 = (unsigned int *)(HIDWORD(v9) + 4);
          result = (unsigned int *)__ldrex(v21);
        while ( __strex((unsigned int)result - 1, v21) );
        result = (unsigned int *)(*v21)--;
      if ( result == (unsigned int *)1 )
        v25 = (unsigned int *)(HIDWORD(v9) + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v9) + 8))(HIDWORD(v9));
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (unsigned int *)__ldrex(v25);
          while ( __strex((unsigned int)result - 1, v25) );
        }
        else
          result = (unsigned int *)(*v25)--;
        if ( result == (unsigned int *)1 )
          result = (unsigned int *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v9) + 12))(HIDWORD(v9));
    v22 = v30;
    if ( v30 )
      v26 = (unsigned int *)(v30 + 4);
          result = (unsigned int *)__ldrex(v26);
        while ( __strex((unsigned int)result - 1, v26) );
        result = (unsigned int *)(*v26)--;
        v24 = (unsigned int *)(v22 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
            result = (unsigned int *)__ldrex(v24);
          while ( __strex((unsigned int)result - 1, v24) );
          goto LABEL_88;
LABEL_87:
        result = (unsigned int *)(*v24)--;
LABEL_88:
          result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
        return result;
    std::__shared_ptr<InGamePlayScreen,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<InGamePlayScreen>,MinecraftGame &,ClientInstance &>(
      (int)&v27,
    v14 = *(_QWORD *)&v27;
    *(_DWORD *)&v27 = 0;
    v28 = 0;
    v15 = *(ClientInstance **)(v2 + 8);
    v16 = (DefaultLevelDrawSetupCleanupStrategy *)operator new(0xCu);
    result = (unsigned int *)DefaultLevelDrawSetupCleanupStrategy::DefaultLevelDrawSetupCleanupStrategy(v16, v15);
    if ( (_DWORD)v14 )
      v17 = *(void (__fastcall **)(_DWORD, unsigned int **))(*(_DWORD *)v14 + 272);
      v33 = (unsigned int *)v16;
      v17(v14, &v33);
      result = v33;
      if ( v33 )
        result = (unsigned int *)(*(int (**)(void))(*v33 + 4))();
      v16 = 0;
      v33 = 0;
    *(_QWORD *)v3 = v14;
    if ( HIDWORD(v14) )
      result = (unsigned int *)(HIDWORD(v14) + 4);
          v18 = __ldrex(result);
        while ( __strex(v18 + 1, result) );
    if ( v16 )
      result = (unsigned int *)(*(int (__fastcall **)(DefaultLevelDrawSetupCleanupStrategy *))(*(_DWORD *)v16 + 4))(v16);
      v19 = (unsigned int *)(HIDWORD(v14) + 4);
          result = (unsigned int *)__ldrex(v19);
        while ( __strex((unsigned int)result - 1, v19) );
        result = (unsigned int *)(*v19)--;
        v20 = (unsigned int *)(HIDWORD(v14) + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v14) + 8))(HIDWORD(v14));
            result = (unsigned int *)__ldrex(v20);
          while ( __strex((unsigned int)result - 1, v20) );
          result = (unsigned int *)(*v20)--;
          result = (unsigned int *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v14) + 12))(HIDWORD(v14));
    v22 = v28;
    if ( v28 )
      v23 = (unsigned int *)(v28 + 4);
          result = (unsigned int *)__ldrex(v23);
        while ( __strex((unsigned int)result - 1, v23) );
        result = (unsigned int *)(*v23)--;
        goto LABEL_87;
  return result;
}


unsigned int __fastcall SceneFactory::createAchievementScreen(SceneFactory *this, SceneStack *a2, int a3)
{
  SceneStack *v3; // r9@1
  int v4; // r6@1
  SceneFactory *v5; // r8@1
  _DWORD *v6; // r0@1
  __int64 v7; // r1@1
  void *v8; // r0@3
  void *v9; // r0@4
  void *v10; // r0@5
  void *v11; // r0@6
  unsigned int result; // r0@8
  int v13; // r4@9
  unsigned int *v14; // r1@10
  unsigned int *v15; // r5@16
  unsigned int *v16; // r2@20
  signed int v17; // r1@22
  unsigned int *v18; // r2@24
  signed int v19; // r1@26
  unsigned int *v20; // r2@28
  signed int v21; // r1@30
  unsigned int *v22; // r2@32
  signed int v23; // r1@34
  _DWORD *v24; // [sp+10h] [bp-58h]@1
  __int64 v25; // [sp+18h] [bp-50h]@1
  int v26; // [sp+24h] [bp-44h]@1
  int v27; // [sp+2Ch] [bp-3Ch]@1
  int v28; // [sp+34h] [bp-34h]@1
  int v29; // [sp+3Ch] [bp-2Ch]@1
  int v30; // [sp+40h] [bp-28h]@1
  unsigned int v31; // [sp+44h] [bp-24h]@8

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v29, "gui.achievements");
  sub_DA7364((void **)&v28, "xbox.achievementssignin.line1");
  sub_DA7364((void **)&v27, "xbox.achievementssignin.line2");
  sub_DA7364((void **)&v26, "textures/ui/CheevList");
  v6 = operator new(8u);
  LODWORD(v7) = sub_D74BEC;
  *v6 = v3;
  v6[1] = v4;
  HIDWORD(v7) = sub_D74AD8;
  v24 = v6;
  v25 = v7;
  SceneFactory::createXblOptionalSignInScreen((int)&v30, (int)v3, &v29, &v28, &v27, &v26, (int)&v24, 0);
  if ( (_DWORD)v25 )
    ((void (*)(void))v25)();
  v8 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v26 - 4);
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
      j_j_j_j_j__ZdlPv_9(v8);
  }
  v9 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v27 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v28 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v29 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  if ( v30 )
    *(_DWORD *)v5 = v30;
    result = v31;
    v31 = 0;
    *((_DWORD *)v5 + 1) = result;
    v30 = 0;
  else
    result = SceneFactory::_createAchievementScreen(v5, (int)v3);
    v13 = v31;
    if ( v31 )
      v14 = (unsigned int *)(v31 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        v15 = (unsigned int *)(v13 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v15);
          while ( __strex(result - 1, v15) );
        }
        else
          result = (*v15)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  return result;
}


void __fastcall SceneFactory::createAddEditExternalServerScreen(SceneFactory *this, int a2, signed int a3)
{
  SceneFactory::createAddEditExternalServerScreen(this, a2, a3);
}


void __fastcall SceneFactory::createThirdPartyStoreScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  int v7; // r4@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r5@8
  unsigned int v11; // r0@10
  void *v12; // r0@15
  unsigned int *v13; // r2@17
  signed int v14; // r1@19
  int v15; // [sp+8h] [bp-28h]@1
  char v16; // [sp+Ch] [bp-24h]@1
  int v17; // [sp+10h] [bp-20h]@1

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v15, "thid_party_store.third_party_store_screen");
  j__Z12createScreenI19MainMenuScreenModel31ThirdPartyStoreScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v16,
    v2,
    v3,
    v5,
    (const char **)v6);
  SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v16);
  v7 = v17;
  if ( v17 )
  {
    v8 = (unsigned int *)(v17 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  v12 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
}


unsigned int __fastcall SceneFactory::createXblConsoleSignInSucceededScreen(unsigned __int64 *a1, int a2, _DWORD *a3, int a4, char a5)
{
  unsigned __int64 *v5; // r8@1
  int v6; // r9@1
  int v7; // r6@1
  MinecraftGame *v8; // r7@1
  _DWORD *v9; // r4@1
  ClientInstance *v10; // r5@1
  void **v11; // r0@1
  void *v12; // r0@1
  unsigned int *v13; // r0@3
  unsigned int v14; // r1@5
  unsigned int result; // r0@8
  int v16; // r4@8
  unsigned int *v17; // r1@9
  unsigned int *v18; // r5@15
  int v19; // r4@22
  unsigned int *v20; // r1@23
  unsigned int *v21; // r5@29
  unsigned int *v22; // r2@37
  signed int v23; // r1@39
  int v24; // [sp+14h] [bp-3Ch]@2
  int v25; // [sp+18h] [bp-38h]@2
  int v26; // [sp+20h] [bp-30h]@1
  int v27; // [sp+24h] [bp-2Ch]@1
  int v28; // [sp+28h] [bp-28h]@2
  char v29; // [sp+2Fh] [bp-21h]@1

  v5 = a1;
  v6 = a2;
  v29 = a5;
  v7 = a4;
  v8 = *(MinecraftGame **)a2;
  v9 = a3;
  v10 = *(ClientInstance **)(a2 + 8);
  v11 = sub_DA7364((void **)&v26, "xbl_console_signin_succeeded.xbl_console_signin_succeeded");
  createScreen<MinecraftScreenModel,XblConsoleSignInSucceededScreenController,Social::SignInResult const&,std::function<void ()(Social::SignInResult)> &,bool &>(
    &v27,
    v6,
    v8,
    v10,
    (const char **)v11,
    v9,
    v7,
    &v29);
  v12 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v26 - 4);
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
      j_j_j_j_j__ZdlPv_9(v12);
  }
  v24 = v27;
  v25 = v28;
  if ( v28 )
    v13 = (unsigned int *)(v28 + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 + 1, v13) );
      ++*v13;
  result = SceneFactory::_createScreen(v5, v6, (unsigned __int64 *)&v24);
  v16 = v25;
  if ( v25 )
    v17 = (unsigned int *)(v25 + 4);
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
      result = (*v17)--;
    if ( result == 1 )
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
      }
      else
        result = (*v18)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  v19 = v28;
    v20 = (unsigned int *)(v28 + 4);
        result = __ldrex(v20);
      while ( __strex(result - 1, v20) );
      result = (*v20)--;
      v21 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          result = __ldrex(v21);
        while ( __strex(result - 1, v21) );
        result = (*v21)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  return result;
}


unsigned int __fastcall SceneFactory::createDispenserScreen(SceneFactory *this, Player *a2, const BlockPos *a3, const BlockPos *a4)
{
  Player *v4; // r4@1
  unsigned __int64 *v5; // r8@1
  const BlockPos *v6; // r6@1
  Options *v7; // r0@1
  int v8; // r0@1
  signed int v9; // r1@1
  MinecraftGame *v10; // r7@3
  ClientInstance *v11; // r5@3
  void **v12; // r0@3
  void *v13; // r0@3
  unsigned int *v14; // r0@5
  unsigned int v15; // r1@7
  unsigned int result; // r0@10
  int v17; // r4@10
  unsigned int *v18; // r1@11
  unsigned int *v19; // r5@17
  int v20; // r4@24
  unsigned int *v21; // r1@25
  unsigned int *v22; // r5@31
  unsigned int *v23; // r2@39
  signed int v24; // r1@41
  int v25; // [sp+14h] [bp-3Ch]@4
  int v26; // [sp+18h] [bp-38h]@4
  int v27; // [sp+1Ch] [bp-34h]@3
  int v28; // [sp+24h] [bp-2Ch]@3
  int v29; // [sp+28h] [bp-28h]@3
  int v30; // [sp+2Ch] [bp-24h]@4
  int v31; // [sp+30h] [bp-20h]@3

  v4 = a2;
  v5 = (unsigned __int64 *)this;
  v6 = a4;
  v7 = (Options *)ClientInstance::getOptions(*((ClientInstance **)a2 + 2));
  v8 = Options::getUIProfile(v7);
  v9 = 0;
  if ( !v8 )
    v9 = 1;
  v31 = v9;
  v10 = *(MinecraftGame **)v4;
  v11 = (ClientInstance *)*((_DWORD *)v4 + 2);
  v12 = sub_DA7364((void **)&v28, "redstone.dispenser_screen");
  v27 = 2;
  createScreen<ClientInstanceScreenModel,RedstoneScreenController,BlockPos const&,RedstoneScreenType,InteractionModel &>(
    &v29,
    (int)v4,
    v10,
    v11,
    (const char **)v12,
    v6,
    &v27,
    &v31);
  v13 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v28 - 4);
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
      j_j_j_j_j__ZdlPv_9(v13);
  }
  v25 = v29;
  v26 = v30;
  if ( v30 )
    v14 = (unsigned int *)(v30 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  result = SceneFactory::_createScreen(v5, (int)v4, (unsigned __int64 *)&v25);
  v17 = v26;
  if ( v26 )
    v18 = (unsigned int *)(v26 + 4);
        result = __ldrex(v18);
      while ( __strex(result - 1, v18) );
      result = (*v18)--;
    if ( result == 1 )
      v19 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v19);
        while ( __strex(result - 1, v19) );
      }
      else
        result = (*v19)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  v20 = v30;
    v21 = (unsigned int *)(v30 + 4);
        result = __ldrex(v21);
      while ( __strex(result - 1, v21) );
      result = (*v21)--;
      v22 = (unsigned int *)(v20 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
          result = __ldrex(v22);
        while ( __strex(result - 1, v22) );
        result = (*v22)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
  return result;
}


void __fastcall SceneFactory::createFileUploadProgressScreen(unsigned __int64 *a1, int a2, int *a3, int *a4, char a5)
{
  SceneFactory::createFileUploadProgressScreen(a1, a2, a3, a4, a5);
}


unsigned int __fastcall SceneFactory::createLocalWorldPickerScreen(unsigned __int64 *a1, int a2, int *a3)
{
  int v3; // r4@1
  MinecraftGame *v4; // r6@1
  int *v5; // r5@1
  ClientInstance *v6; // r7@1
  unsigned __int64 *v7; // r8@1
  void **v8; // r0@1
  void *v9; // r0@1
  unsigned int *v10; // r0@3
  unsigned int v11; // r1@5
  unsigned int result; // r0@8
  int v13; // r4@8
  unsigned int *v14; // r1@9
  unsigned int *v15; // r5@15
  int v16; // r4@22
  unsigned int *v17; // r1@23
  unsigned int *v18; // r5@29
  unsigned int *v19; // r2@37
  signed int v20; // r1@39
  int v21; // [sp+Ch] [bp-34h]@2
  int v22; // [sp+10h] [bp-30h]@2
  int v23; // [sp+18h] [bp-28h]@1
  int v24; // [sp+1Ch] [bp-24h]@1
  int v25; // [sp+20h] [bp-20h]@2

  v3 = a2;
  v4 = *(MinecraftGame **)a2;
  v5 = a3;
  v6 = *(ClientInstance **)(a2 + 8);
  v7 = a1;
  v8 = sub_DA7364((void **)&v23, "local_world_picker.local_world_picker_screen");
  createScreen<PlayScreenModel,LocalWorldUploadScreenController,std::string const&>(
    &v24,
    v3,
    v4,
    v6,
    (const char **)v8,
    v5);
  v9 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  }
  v21 = v24;
  v22 = v25;
  if ( v25 )
    v10 = (unsigned int *)(v25 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
      ++*v10;
  result = SceneFactory::_createScreen(v7, v3, (unsigned __int64 *)&v21);
  v13 = v22;
  if ( v22 )
    v14 = (unsigned int *)(v22 + 4);
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
      result = (*v14)--;
    if ( result == 1 )
      v15 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
      }
      else
        result = (*v15)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  v16 = v25;
    v17 = (unsigned int *)(v25 + 4);
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
      result = (*v17)--;
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
        result = (*v18)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  return result;
}


void __fastcall SceneFactory::createCreateWorldScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  int v7; // r4@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r5@8
  unsigned int v11; // r0@10
  void *v12; // r0@15
  unsigned int *v13; // r2@17
  signed int v14; // r1@19
  char v15; // [sp+Fh] [bp-29h]@1
  int v16; // [sp+14h] [bp-24h]@1
  char v17; // [sp+18h] [bp-20h]@1
  int v18; // [sp+1Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v16, "settings.screen_world_create");
  v15 = 1;
  createScreen<MainMenuScreenModel,SettingsScreenController,bool>(&v17, v2, v3, v5, (const char **)v6, &v15);
  SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v17);
  v7 = v18;
  if ( v18 )
  {
    v8 = (unsigned int *)(v18 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  v12 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v16 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
}


unsigned int __fastcall SceneFactory::_createScreen(unsigned __int64 *a1, int a2, unsigned __int64 *a3)
{
  int v3; // r6@1
  unsigned __int64 *v4; // r5@1
  unsigned __int64 *v5; // r4@1
  int v6; // r0@1
  int v7; // r7@1
  int v8; // r0@1
  int v9; // r0@1
  bool v10; // zf@1
  int v11; // r2@1
  int v12; // r0@5
  unsigned __int64 v13; // kr00_8@7
  unsigned int *v14; // r0@8
  unsigned int v15; // r1@10
  __int64 v16; // r0@14
  void (__fastcall *v17)(_DWORD, int *); // r2@14
  unsigned int *v18; // r0@18
  unsigned int v19; // r1@20
  unsigned int result; // r0@25
  unsigned int *v21; // r1@26
  unsigned int *v22; // r5@32
  int v23; // [sp+4h] [bp-1Ch]@13
  int v24; // [sp+8h] [bp-18h]@14

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = ClientInstance::getHoloInput(*(ClientInstance **)(a2 + 8));
  v7 = (*(int (**)(void))(*(_DWORD *)v6 + 268))();
  v8 = ClientInstance::getHoloInput(*(ClientInstance **)(v3 + 8));
  v9 = (*(int (**)(void))(*(_DWORD *)v8 + 44))();
  v10 = v7 == 0;
  v11 = 0;
  if ( !v7 )
    v10 = v9 == 1;
  if ( v10 )
  {
    v12 = ClientInstance::getLevel(*(ClientInstance **)(v3 + 8));
    v11 = 4;
    if ( !v12 )
      v11 = 3;
  }
  v13 = *v5;
  if ( *v5 >> 32 )
    v14 = (unsigned int *)(HIDWORD(v13) + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
    }
    else
      ++*v14;
  createScreenSetupStrategy((DefaultUIScreenSetupCleanupStrategy **)&v23, *(ClientInstance **)(v3 + 8), v11);
  if ( (_DWORD)v13 )
    HIDWORD(v16) = v23;
    v17 = *(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)v13 + 272);
    LODWORD(v16) = 0;
    *(_QWORD *)&v23 = v16;
    v17(v13, &v24);
    if ( v24 )
      (*(void (**)(void))(*(_DWORD *)v24 + 4))();
    v24 = 0;
  *v4 = v13;
  if ( HIDWORD(v13) )
    v18 = (unsigned int *)(HIDWORD(v13) + 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 + 1, v18) );
      ++*v18;
  if ( v23 )
    (*(void (**)(void))(*(_DWORD *)v23 + 4))();
  result = 0;
  v23 = 0;
    v21 = (unsigned int *)(HIDWORD(v13) + 4);
        result = __ldrex(v21);
      while ( __strex(result - 1, v21) );
      result = (*v21)--;
    if ( result == 1 )
      v22 = (unsigned int *)(HIDWORD(v13) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v13) + 8))(HIDWORD(v13));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v22);
        while ( __strex(result - 1, v22) );
      }
      else
        result = (*v22)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v13) + 12))(HIDWORD(v13));
  return result;
}


void __fastcall SceneFactory::createCreateWorldFromTemplateScreen(SceneFactory *this, const LevelSummary *a2, int *a3)
{
  SceneFactory::createCreateWorldFromTemplateScreen(this, a2, a3);
}


unsigned int __fastcall SceneFactory::createMobEffectsScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  unsigned int result; // r0@8
  int v11; // r4@8
  unsigned int *v12; // r1@9
  unsigned int *v13; // r5@15
  int v14; // r4@22
  unsigned int *v15; // r1@23
  unsigned int *v16; // r5@29
  unsigned int *v17; // r2@37
  signed int v18; // r1@39
  int v19; // [sp+8h] [bp-30h]@2
  int v20; // [sp+Ch] [bp-2Ch]@2
  int v21; // [sp+14h] [bp-24h]@1
  int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v21, "mob_effect.mob_effect_screen");
  j__Z12createScreenI25ClientInstanceScreenModel25MobEffectScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v22,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v19 = v22;
  v20 = v23;
  if ( v23 )
    v8 = (unsigned int *)(v23 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  result = SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v19);
  v11 = v20;
  if ( v20 )
    v12 = (unsigned int *)(v20 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v14 = v23;
    v15 = (unsigned int *)(v23 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return result;
}


void __fastcall SceneFactory::_preCacheScreen(int a1, const Json::Value *a2, int *a3)
{
  SceneFactory::_preCacheScreen(a1, a2, a3);
}


void __fastcall SceneFactory::_createInventoryScreenCache(SceneFactory *this)
{
  SceneFactory *v1; // r4@1
  Player *v2; // r8@1
  Options *v3; // r0@2
  Json::Value *v4; // r6@2
  UIDefRepository *v5; // r0@5
  int v6; // r7@5
  bool v7; // r2@5
  char *v8; // r0@7
  char *v9; // r6@7
  char *v10; // r7@7
  signed int v11; // r0@7
  unsigned int v12; // r5@7
  char *v13; // r7@10
  __int64 v14; // r0@10
  signed int v15; // r0@10
  unsigned int v16; // r5@10
  char *v17; // r7@13
  __int64 v18; // r0@13
  signed int v19; // r0@13
  unsigned int v20; // r5@13
  char *v21; // r7@16
  __int64 v22; // r0@16
  signed int v23; // r0@16
  unsigned int v24; // r5@16
  int v25; // r6@19
  int v26; // r6@19
  int v27; // r6@19
  int v28; // r6@19
  int v29; // r6@19
  char *v30; // r0@19
  char *v31; // r0@19
  unsigned int *v32; // r2@21
  signed int v33; // r1@23
  int v34; // [sp+0h] [bp-C8h]@19
  char v35; // [sp+10h] [bp-B8h]@19
  char v36; // [sp+20h] [bp-A8h]@19
  char v37; // [sp+30h] [bp-98h]@19
  char v38; // [sp+40h] [bp-88h]@19
  char *v39; // [sp+50h] [bp-78h]@7
  char *v40; // [sp+54h] [bp-74h]@7
  char *v41; // [sp+58h] [bp-70h]@7
  char *v42; // [sp+5Ch] [bp-6Ch]@10
  char *v43; // [sp+60h] [bp-68h]@10
  char *v44; // [sp+64h] [bp-64h]@10
  char *v45; // [sp+68h] [bp-60h]@13
  char *v46; // [sp+6Ch] [bp-5Ch]@13
  char *v47; // [sp+70h] [bp-58h]@13
  char *v48; // [sp+74h] [bp-54h]@16
  char *v49; // [sp+78h] [bp-50h]@16
  char *v50; // [sp+7Ch] [bp-4Ch]@16
  char v51; // [sp+80h] [bp-48h]@5
  char v52; // [sp+90h] [bp-38h]@5
  char *v53; // [sp+A4h] [bp-24h]@2

  v1 = this;
  v2 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 2));
  if ( v2 )
  {
    v3 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v1 + 2));
    v4 = (Json::Value *)Options::getUIProfile(v3);
    v53 = (char *)&unk_28898CC;
    if ( v4 )
      sub_DA78A4((void **)&v53, "crafting_pocket.inventory_screen_pocket", (_BYTE *)0x27);
    else
      sub_DA78A4((void **)&v53, "crafting.inventory_screen", (_BYTE *)0x19);
    v5 = (UIDefRepository *)MinecraftGame::getUIDefRepo(*(MinecraftGame **)v1);
    SceneFactory::createGlobalVars((SceneFactory *)&v52, v1, v5);
    v6 = Json::Value::operator[]((Json::Value *)&v52, "*screen_name*");
    Json::Value::Value((int)&v51, (const char **)&v53);
    Json::Value::operator=(v6, (const Json::Value *)&v51);
    Json::Value::~Value((Json::Value *)&v51);
    if ( v4 != (Json::Value *)1 )
      v4 = 0;
    CraftingScreenController::addStaticScreenVars((CraftingScreenController *)&v52, v4, v7);
    v8 = Player::getFilteredCreativeItemList(v2);
    v9 = v8;
    v10 = 0;
    v11 = (*(_QWORD *)v8 >> 32) - *(_QWORD *)v8;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v12 = -858993459 * (v11 >> 4);
    if ( v11 )
    {
      if ( v12 >= 0x3333334 )
        sub_DA7414();
      v10 = (char *)operator new(v11);
    }
    v39 = v10;
    v40 = v10;
    v41 = &v10[80 * v12];
    v40 = (char *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemGroup const*,std::vector<ItemGroup,std::allocator<ItemGroup>>>,ItemGroup*>(
                    *(_QWORD *)v9,
                    *(_QWORD *)v9 >> 32,
                    (int)v10);
    v13 = 0;
    v14 = *(_QWORD *)(v9 + 12);
    v42 = 0;
    v43 = 0;
    v15 = HIDWORD(v14) - v14;
    v44 = 0;
    v16 = -858993459 * (v15 >> 4);
    if ( v15 )
      if ( v16 >= 0x3333334 )
      v13 = (char *)operator new(v15);
    v42 = v13;
    v43 = v13;
    v44 = &v13[80 * v16];
    v43 = (char *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemGroup const*,std::vector<ItemGroup,std::allocator<ItemGroup>>>,ItemGroup*>(
                    *(_QWORD *)(v9 + 12),
                    *(_QWORD *)(v9 + 12) >> 32,
                    (int)v13);
    v17 = 0;
    v18 = *((_QWORD *)v9 + 3);
    v45 = 0;
    v46 = 0;
    v19 = HIDWORD(v18) - v18;
    v47 = 0;
    v20 = -858993459 * (v19 >> 4);
    if ( v19 )
      if ( v20 >= 0x3333334 )
      v17 = (char *)operator new(v19);
    v45 = v17;
    v46 = v17;
    v47 = &v17[80 * v20];
    v46 = (char *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemGroup const*,std::vector<ItemGroup,std::allocator<ItemGroup>>>,ItemGroup*>(
                    *((_QWORD *)v9 + 3),
                    *((_QWORD *)v9 + 3) >> 32,
                    (int)v17);
    v21 = 0;
    v22 = *(_QWORD *)(v9 + 36);
    v48 = 0;
    v49 = 0;
    v23 = HIDWORD(v22) - v22;
    v50 = 0;
    v24 = -858993459 * (v23 >> 4);
    if ( v23 )
      if ( v24 >= 0x3333334 )
      v21 = (char *)operator new(v23);
    v48 = v21;
    v49 = v21;
    v50 = &v21[80 * v24];
    v49 = (char *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemGroup const*,std::vector<ItemGroup,std::allocator<ItemGroup>>>,ItemGroup*>(
                    *(_QWORD *)(v9 + 36),
                    *(_QWORD *)(v9 + 36) >> 32,
                    (int)v21);
    v25 = Json::Value::operator[]((Json::Value *)&v52, "$construction_precache_count");
    Json::Value::Value((Json::Value *)&v38, -858993459 * ((v40 - v39) >> 4));
    Json::Value::operator=(v25, (const Json::Value *)&v38);
    Json::Value::~Value((Json::Value *)&v38);
    v26 = Json::Value::operator[]((Json::Value *)&v52, "$nature_precache_count");
    Json::Value::Value((Json::Value *)&v37, -858993459 * ((v43 - v42) >> 4));
    Json::Value::operator=(v26, (const Json::Value *)&v37);
    Json::Value::~Value((Json::Value *)&v37);
    v27 = Json::Value::operator[]((Json::Value *)&v52, "$equipment_precache_count");
    Json::Value::Value((Json::Value *)&v36, -858993459 * ((v46 - v45) >> 4));
    Json::Value::operator=(v27, (const Json::Value *)&v36);
    Json::Value::~Value((Json::Value *)&v36);
    v28 = Json::Value::operator[]((Json::Value *)&v52, "$items_precache_count");
    Json::Value::Value((Json::Value *)&v35, -858993459 * ((v49 - v48) >> 4));
    Json::Value::operator=(v28, (const Json::Value *)&v35);
    Json::Value::~Value((Json::Value *)&v35);
    v29 = Json::Value::operator[]((Json::Value *)&v52, "$search_precache_count");
    v30 = Player::getCreativeItemList(v2);
    Json::Value::Value((Json::Value *)&v34, 954437177 * ((signed int)((*(_QWORD *)v30 >> 32) - *(_QWORD *)v30) >> 3));
    Json::Value::operator=(v29, (const Json::Value *)&v34);
    Json::Value::~Value((Json::Value *)&v34);
    SceneFactory::_preCacheScreen((int)v1, (const Json::Value *)&v52, (int *)&v53);
    std::array<std::vector<ItemGroup,std::allocator<ItemGroup>>,4u>::~array((int)&v39);
    Json::Value::~Value((Json::Value *)&v52);
    v31 = v53 - 12;
    if ( (int *)(v53 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v53 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
      }
      else
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j_j__ZdlPv_9(v31);
  }
}


unsigned int __fastcall SceneFactory::createRealmsPurchaseInfoScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  unsigned int result; // r0@8
  int v11; // r4@8
  unsigned int *v12; // r1@9
  unsigned int *v13; // r5@15
  int v14; // r4@22
  unsigned int *v15; // r1@23
  unsigned int *v16; // r5@29
  unsigned int *v17; // r2@37
  signed int v18; // r1@39
  int v19; // [sp+8h] [bp-30h]@2
  int v20; // [sp+Ch] [bp-2Ch]@2
  int v21; // [sp+14h] [bp-24h]@1
  int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v21, "realms_purchase_info.realms_purchase_info_screen");
  j__Z12createScreenI19MainMenuScreenModel34RealmsPurchaseInfoScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v22,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v19 = v22;
  v20 = v23;
  if ( v23 )
    v8 = (unsigned int *)(v23 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  result = SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v19);
  v11 = v20;
  if ( v20 )
    v12 = (unsigned int *)(v20 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v14 = v23;
    v15 = (unsigned int *)(v23 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return result;
}


unsigned int __fastcall SceneFactory::createDebugScreen(SceneFactory *this, int a2)
{
  int v2; // r7@1
  MinecraftGame *v3; // r4@1
  SceneFactory *v4; // r5@1
  ClientInstance *v5; // r6@1
  void **v6; // r0@1
  void *v7; // r0@1
  int v8; // r0@2
  int v9; // r0@3
  int v10; // r2@3
  __int64 v11; // kr00_8@7
  unsigned int *v12; // r0@8
  unsigned int v13; // r1@10
  int v14; // r1@14
  void (__fastcall *v15)(_DWORD, int *); // r2@14
  unsigned int *v16; // r0@18
  unsigned int v17; // r1@20
  unsigned int result; // r0@25
  unsigned int *v19; // r1@26
  unsigned int *v20; // r5@32
  int v21; // r4@39
  unsigned int *v22; // r1@40
  unsigned int *v23; // r5@46
  unsigned int *v24; // r2@54
  signed int v25; // r1@56
  int v26; // [sp+4h] [bp-34h]@13
  int v27; // [sp+Ch] [bp-2Ch]@1
  char v28; // [sp+10h] [bp-28h]@1
  int v29; // [sp+14h] [bp-24h]@7
  int v30; // [sp+18h] [bp-20h]@14

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v27, "debug_screen.debug_screen");
  j__Z12createScreenI20MinecraftScreenModel21DebugScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v28,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v24 = (unsigned int *)(v27 - 4);
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
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v8 = ClientInstance::getHoloInput(*(ClientInstance **)(v2 + 8));
  if ( (*(int (**)(void))(*(_DWORD *)v8 + 44))() == 1 )
    v9 = ClientInstance::getLevel(*(ClientInstance **)(v2 + 8));
    v10 = 4;
    if ( !v9 )
      v10 = 3;
  else
    v10 = 0;
  v11 = *(_QWORD *)&v28;
  if ( v29 )
    v12 = (unsigned int *)(v29 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
      ++*v12;
  createScreenSetupStrategy((DefaultUIScreenSetupCleanupStrategy **)&v26, *(ClientInstance **)(v2 + 8), v10);
  if ( (_DWORD)v11 )
    v14 = v26;
    v15 = *(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)v11 + 272);
    v26 = 0;
    v30 = v14;
    v15(v11, &v30);
    if ( v30 )
      (*(void (**)(void))(*(_DWORD *)v30 + 4))();
    v30 = 0;
  *(_QWORD *)v4 = v11;
  if ( HIDWORD(v11) )
    v16 = (unsigned int *)(HIDWORD(v11) + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 + 1, v16) );
      ++*v16;
  if ( v26 )
    (*(void (**)(void))(*(_DWORD *)v26 + 4))();
  result = 0;
  v26 = 0;
    v19 = (unsigned int *)(HIDWORD(v11) + 4);
        result = __ldrex(v19);
      while ( __strex(result - 1, v19) );
      result = (*v19)--;
    if ( result == 1 )
      v20 = (unsigned int *)(HIDWORD(v11) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v11) + 8))(HIDWORD(v11));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v20);
        while ( __strex(result - 1, v20) );
      }
      else
        result = (*v20)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v11) + 12))(HIDWORD(v11));
  v21 = v29;
    v22 = (unsigned int *)(v29 + 4);
        result = __ldrex(v22);
      while ( __strex(result - 1, v22) );
      result = (*v22)--;
      v23 = (unsigned int *)(v21 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
          result = __ldrex(v23);
        while ( __strex(result - 1, v23) );
        result = (*v23)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
  return result;
}


unsigned int __fastcall SceneFactory::createPortfolioScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  unsigned int result; // r0@8
  int v11; // r4@8
  unsigned int *v12; // r1@9
  unsigned int *v13; // r5@15
  int v14; // r4@22
  unsigned int *v15; // r1@23
  unsigned int *v16; // r5@29
  unsigned int *v17; // r2@37
  signed int v18; // r1@39
  int v19; // [sp+8h] [bp-30h]@2
  int v20; // [sp+Ch] [bp-2Ch]@2
  int v21; // [sp+14h] [bp-24h]@1
  int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v21, "portfolio.portfolio_screen");
  j__Z12createScreenI25ClientInstanceScreenModel25PortfolioScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v22,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v19 = v22;
  v20 = v23;
  if ( v23 )
    v8 = (unsigned int *)(v23 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  result = SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v19);
  v11 = v20;
  if ( v20 )
    v12 = (unsigned int *)(v20 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v14 = v23;
    v15 = (unsigned int *)(v23 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return result;
}


ModalScreenData *__fastcall SceneFactory::createPlatformNetworkConnectConfirmationScreen(unsigned __int64 *a1, int a2, int a3)
{
  unsigned __int64 *v3; // r5@1
  int v4; // r8@1
  int v5; // r6@1
  char *v6; // r0@1
  void *v7; // r0@1
  void *v8; // r0@2
  void *v9; // r0@3
  void (__fastcall *v10)(int *, int, signed int); // r3@4
  char *v11; // r4@8
  int v12; // r6@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  int *v15; // r0@18
  unsigned int *v17; // r2@24
  signed int v18; // r1@26
  unsigned int *v19; // r2@28
  signed int v20; // r1@30
  unsigned int *v21; // r2@32
  signed int v22; // r1@34
  int v23; // [sp+0h] [bp-90h]@5
  void (*v24)(void); // [sp+8h] [bp-88h]@4
  int v25; // [sp+Ch] [bp-84h]@5
  int v26; // [sp+14h] [bp-7Ch]@2
  int v27; // [sp+18h] [bp-78h]@2
  int v28; // [sp+1Ch] [bp-74h]@1
  char *v29; // [sp+20h] [bp-70h]@1
  char *v30; // [sp+24h] [bp-6Ch]@1
  char *v31; // [sp+28h] [bp-68h]@1
  void *v32; // [sp+2Ch] [bp-64h]@1
  int v33; // [sp+30h] [bp-60h]@1
  int v34; // [sp+34h] [bp-5Ch]@1
  int v35; // [sp+38h] [bp-58h]@1
  void *v36; // [sp+3Ch] [bp-54h]@1
  int v37; // [sp+40h] [bp-50h]@1
  int v38; // [sp+44h] [bp-4Ch]@1
  int v39; // [sp+48h] [bp-48h]@1
  void *v40; // [sp+4Ch] [bp-44h]@1
  void *v41; // [sp+50h] [bp-40h]@1
  void *v42; // [sp+54h] [bp-3Ch]@1
  void *v43; // [sp+58h] [bp-38h]@1
  int v44; // [sp+5Ch] [bp-34h]@1
  char v45; // [sp+60h] [bp-30h]@1
  int v46; // [sp+64h] [bp-2Ch]@1
  char v47; // [sp+68h] [bp-28h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v32 = &unk_28898CC;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = &unk_28898CC;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = &unk_28898CC;
  v41 = &unk_28898CC;
  v42 = &unk_28898CC;
  v43 = &unk_28898CC;
  v44 = 1;
  v45 = 0;
  v46 = 1;
  v47 = 0;
  sub_DA78A4(&v32, "nx.nintendoNetwork.networkName", (_BYTE *)0x1E);
  I18n::get(&v28, (int **)&v32);
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v6 = (char *)operator new(4u);
  v29 = v6;
  v31 = v6 + 4;
  v30 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v28,
                  (int)&v29,
                  (int)v6);
  v7 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v28 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  sub_DA7364((void **)&v26, "network.thirdparty.connect.benefit");
  I18n::get(&v27, &v26, (unsigned __int64 *)&v29);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v36,
    &v27);
  v8 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v27 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v26 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  sub_DA78A4(&v41, "gui.playOffline", (_BYTE *)0xF);
  sub_DA78A4(&v43, "gui.signIn", (_BYTE *)0xA);
  v47 = 1;
  v24 = 0;
  v10 = *(void (__fastcall **)(int *, int, signed int))(v5 + 8);
  if ( v10 )
    v10(&v23, v5, 2);
    v25 = *(_DWORD *)(v5 + 12);
    v24 = *(void (**)(void))(v5 + 8);
  SceneFactory::createUserManagementModalScreen(v3, v4, (int)&v32, (int)&v23);
  if ( v24 )
    v24();
  v12 = (int)v30;
  v11 = v29;
  if ( v29 != v30 )
    do
      v15 = (int *)(*(_DWORD *)v11 - 12);
      if ( v15 != &dword_28898C0 )
      {
        v13 = (unsigned int *)(*(_DWORD *)v11 - 4);
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
          j_j_j_j_j__ZdlPv_9(v15);
      }
      v11 += 4;
    while ( v11 != (char *)v12 );
    v11 = v29;
  if ( v11 )
    operator delete(v11);
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v32);
}


void __fastcall SceneFactory::createBeaconScreen(SceneFactory *this, Player *a2, const BlockPos *a3, const BlockPos *a4)
{
  SceneFactory::createBeaconScreen(this, a2, a3, a4);
}


void __fastcall SceneFactory::createChestScreen(unsigned __int64 *a1, int a2, int a3, int a4, __int64 a5)
{
  int v5; // r4@1
  unsigned __int64 *v6; // r5@1
  Options *v7; // r0@1
  int v8; // r0@1
  signed int v9; // r1@1
  MinecraftGame *v10; // r6@3
  ClientInstance *v11; // r7@3
  void **v12; // r0@3
  int v13; // r4@3
  unsigned int *v14; // r1@4
  unsigned int v15; // r0@6
  unsigned int *v16; // r5@10
  unsigned int v17; // r0@12
  void *v18; // r0@17
  unsigned int *v19; // r2@19
  signed int v20; // r1@21
  int v21; // [sp+10h] [bp-30h]@3
  char v22; // [sp+14h] [bp-2Ch]@3
  int v23; // [sp+18h] [bp-28h]@3
  int v24; // [sp+1Ch] [bp-24h]@3
  __int64 v25; // [sp+20h] [bp-20h]@1

  v5 = a2;
  v6 = a1;
  v25 = a5;
  v7 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(a2 + 8));
  v8 = Options::getUIProfile(v7);
  v9 = 0;
  if ( !v8 )
    v9 = 1;
  v24 = v9;
  v10 = *(MinecraftGame **)v5;
  v11 = *(ClientInstance **)(v5 + 8);
  v12 = sub_DA7364((void **)&v21, "chest.small_chest_screen");
  createScreen<ClientInstanceScreenModel,ChestScreenController,EntityUniqueID const&,InteractionModel &>(
    &v22,
    v5,
    v10,
    v11,
    (const char **)v12,
    &v25,
    &v24);
  SceneFactory::_createScreen(v6, v5, (unsigned __int64 *)&v22);
  v13 = v23;
  if ( v23 )
  {
    v14 = (unsigned int *)(v23 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  }
  v18 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v21 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v18);
}


unsigned int __fastcall SceneFactory::createActiveDirectoryAuthenticationScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  unsigned int result; // r0@8
  int v11; // r4@8
  unsigned int *v12; // r1@9
  unsigned int *v13; // r5@15
  int v14; // r4@22
  unsigned int *v15; // r1@23
  unsigned int *v16; // r5@29
  unsigned int *v17; // r2@37
  signed int v18; // r1@39
  int v19; // [sp+8h] [bp-30h]@2
  int v20; // [sp+Ch] [bp-2Ch]@2
  int v21; // [sp+14h] [bp-24h]@1
  int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v21, "authentication.screen");
  j__Z12createScreenI20MinecraftScreenModel45ActiveDirectoryAuthenticationScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v22,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v19 = v22;
  v20 = v23;
  if ( v23 )
    v8 = (unsigned int *)(v23 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  result = SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v19);
  v11 = v20;
  if ( v20 )
    v12 = (unsigned int *)(v20 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v14 = v23;
    v15 = (unsigned int *)(v23 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return result;
}


unsigned int __fastcall SceneFactory::createNoLicenseScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  unsigned int result; // r0@8
  int v11; // r4@8
  unsigned int *v12; // r1@9
  unsigned int *v13; // r5@15
  int v14; // r4@22
  unsigned int *v15; // r1@23
  unsigned int *v16; // r5@29
  unsigned int *v17; // r2@37
  signed int v18; // r1@39
  int v19; // [sp+8h] [bp-30h]@2
  int v20; // [sp+Ch] [bp-2Ch]@2
  int v21; // [sp+14h] [bp-24h]@1
  int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v21, "common.modal_screen");
  j__Z12createScreenI20MinecraftScreenModel25NoLicenseScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v22,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v19 = v22;
  v20 = v23;
  if ( v23 )
    v8 = (unsigned int *)(v23 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  result = SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v19);
  v11 = v20;
  if ( v20 )
    v12 = (unsigned int *)(v20 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v14 = v23;
    v15 = (unsigned int *)(v23 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return result;
}


unsigned int __fastcall SceneFactory::createMashupScreen(unsigned __int64 *a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  MinecraftGame *v6; // r6@1
  unsigned __int64 *v7; // r8@1
  ClientInstance *v8; // r7@1
  void **v9; // r0@1
  void *v10; // r0@1
  unsigned int *v11; // r0@3
  unsigned int v12; // r1@5
  unsigned int result; // r0@8
  int v14; // r4@8
  unsigned int *v15; // r1@9
  unsigned int *v16; // r5@15
  int v17; // r4@22
  unsigned int *v18; // r1@23
  unsigned int *v19; // r5@29
  unsigned int *v20; // r2@37
  signed int v21; // r1@39
  int v22; // [sp+10h] [bp-38h]@2
  int v23; // [sp+14h] [bp-34h]@2
  int v24; // [sp+1Ch] [bp-2Ch]@1
  int v25; // [sp+20h] [bp-28h]@1
  int v26; // [sp+24h] [bp-24h]@2
  int v27; // [sp+28h] [bp-20h]@1

  v4 = a2;
  v27 = a4;
  v5 = a3;
  v6 = *(MinecraftGame **)a2;
  v7 = a1;
  v8 = *(ClientInstance **)(a2 + 8);
  v9 = sub_DA7364((void **)&v24, "mashup.mashup_screen");
  createScreen<MainMenuScreenModel,MashupScreenController,MashupData &,StoreNavigationOrigin &>(
    &v25,
    v4,
    v6,
    v8,
    (const char **)v9,
    v5,
    &v27);
  v10 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v20 = (unsigned int *)(v24 - 4);
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
      j_j_j_j_j__ZdlPv_9(v10);
  }
  v22 = v25;
  v23 = v26;
  if ( v26 )
    v11 = (unsigned int *)(v26 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
      ++*v11;
  result = SceneFactory::_createScreen(v7, v4, (unsigned __int64 *)&v22);
  v14 = v23;
  if ( v23 )
    v15 = (unsigned int *)(v23 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
    if ( result == 1 )
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
      }
      else
        result = (*v16)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  v17 = v26;
    v18 = (unsigned int *)(v26 + 4);
        result = __ldrex(v18);
      while ( __strex(result - 1, v18) );
      result = (*v18)--;
      v19 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
          result = __ldrex(v19);
        while ( __strex(result - 1, v19) );
        result = (*v19)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  return result;
}


unsigned int __fastcall SceneFactory::createUpsellScreen(SceneFactory *this, int a2, int a3)
{
  int v3; // r4@1
  unsigned __int64 *v4; // r5@1
  MinecraftGame *v5; // r6@2
  ClientInstance *v6; // r7@2
  void **v7; // r0@2
  void *v8; // r0@2
  unsigned int *v9; // r0@4
  unsigned int v10; // r1@6
  MinecraftGame *v11; // r6@8
  ClientInstance *v12; // r7@8
  void **v13; // r0@8
  void *v14; // r0@8
  unsigned int *v15; // r0@10
  unsigned int v16; // r1@12
  unsigned int result; // r0@15
  int v18; // r4@15
  unsigned int *v19; // r1@16
  int v20; // r4@21
  unsigned int *v21; // r1@22
  unsigned int *v22; // r5@28
  unsigned int *v23; // r5@34
  int v24; // r4@41
  unsigned int *v25; // r1@42
  unsigned int *v26; // r5@48
  unsigned int *v27; // r1@56
  unsigned int *v28; // r2@70
  signed int v29; // r1@72
  unsigned int *v30; // r2@74
  signed int v31; // r1@76
  int v32; // [sp+8h] [bp-48h]@3
  int v33; // [sp+Ch] [bp-44h]@3
  int v34; // [sp+14h] [bp-3Ch]@2
  int v35; // [sp+18h] [bp-38h]@2
  int v36; // [sp+1Ch] [bp-34h]@3
  int v37; // [sp+20h] [bp-30h]@9
  int v38; // [sp+24h] [bp-2Ch]@9
  int v39; // [sp+2Ch] [bp-24h]@8
  int v40; // [sp+30h] [bp-20h]@8
  int v41; // [sp+34h] [bp-1Ch]@9

  v3 = a2;
  v4 = (unsigned __int64 *)this;
  if ( a3 )
  {
    v5 = *(MinecraftGame **)a2;
    v6 = *(ClientInstance **)(a2 + 8);
    v7 = sub_DA7364((void **)&v34, "trialUpsell.trial_upsell_expired_screen");
    j__Z12createScreenI20MinecraftScreenModel27TrialUpsellScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
      &v35,
      v3,
      v5,
      v6,
      (const char **)v7);
    v8 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
    {
      v28 = (unsigned int *)(v34 - 4);
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
        j_j_j_j_j__ZdlPv_9(v8);
    }
    v32 = v35;
    v33 = v36;
    if ( v36 )
      v9 = (unsigned int *)(v36 + 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 + 1, v9) );
        ++*v9;
    result = SceneFactory::_createScreen(v4, v3, (unsigned __int64 *)&v32);
    v18 = v33;
    if ( v33 )
      v19 = (unsigned int *)(v33 + 4);
          result = __ldrex(v19);
        while ( __strex(result - 1, v19) );
        result = (*v19)--;
      if ( result == 1 )
        v22 = (unsigned int *)(v18 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v22);
          while ( __strex(result - 1, v22) );
        }
        else
          result = (*v22)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
    v24 = v36;
      v25 = (unsigned int *)(v36 + 4);
          result = __ldrex(v25);
        while ( __strex(result - 1, v25) );
        result = (*v25)--;
        v26 = (unsigned int *)(v24 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
            result = __ldrex(v26);
          while ( __strex(result - 1, v26) );
          goto LABEL_67;
LABEL_66:
        result = (*v26)--;
LABEL_67:
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
        return result;
  }
  else
    v11 = *(MinecraftGame **)a2;
    v12 = *(ClientInstance **)(a2 + 8);
    v13 = sub_DA7364((void **)&v39, "trialUpsell.trial_upsell_screen");
      &v40,
      v11,
      v12,
      (const char **)v13);
    v14 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v39 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j_j__ZdlPv_9(v14);
    v37 = v40;
    v38 = v41;
    if ( v41 )
      v15 = (unsigned int *)(v41 + 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 + 1, v15) );
        ++*v15;
    result = SceneFactory::_createScreen(v4, v3, (unsigned __int64 *)&v37);
    v20 = v38;
    if ( v38 )
      v21 = (unsigned int *)(v38 + 4);
          result = __ldrex(v21);
        while ( __strex(result - 1, v21) );
        result = (*v21)--;
        v23 = (unsigned int *)(v20 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
            result = __ldrex(v23);
          while ( __strex(result - 1, v23) );
          result = (*v23)--;
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
    v24 = v41;
      v27 = (unsigned int *)(v41 + 4);
          result = __ldrex(v27);
        while ( __strex(result - 1, v27) );
        result = (*v27)--;
        goto LABEL_66;
  return result;
}


void __fastcall SceneFactory::_preCacheScreen(int a1, const Json::Value *a2, int *a3)
{
  int v3; // r5@1
  int *v4; // r8@1
  const Json::Value *v5; // r10@1
  int v6; // r9@2
  ClientInputHandler *v7; // r0@2
  int v8; // r6@2
  int v9; // r7@2
  VisualTree *v10; // r9@2
  unsigned int *v11; // r0@3
  unsigned int v12; // r1@5
  int v13; // r6@8
  unsigned int *v14; // r1@9
  unsigned int v15; // r0@11
  unsigned int *v16; // r4@15
  unsigned int v17; // r0@17
  int v18; // r6@22
  unsigned int *v19; // r1@23
  unsigned int v20; // r0@25
  unsigned int *v21; // r4@29
  unsigned int v22; // r0@31
  UIMeasureStrategy *v23; // r0@36
  void *v24; // r0@36
  __int64 v25; // r1@37
  UIControl **i; // r4@39
  UIControl **v27; // r6@39
  LayoutManager *v28; // r6@41
  _BYTE *v29; // r0@41
  unsigned int *v30; // r1@42
  unsigned int v31; // r2@44
  int v32; // r1@47
  int v33; // r4@47
  unsigned int *v34; // r1@48
  unsigned int v35; // r0@50
  unsigned int *v36; // r5@54
  unsigned int v37; // r0@56
  int v38; // r4@63
  UIControl **v39; // r6@63
  int v40; // r7@64
  unsigned int *v41; // r1@65
  unsigned int v42; // r0@67
  unsigned int *v43; // r5@71
  unsigned int v44; // r0@73
  int v45; // r4@82
  unsigned int *v46; // r1@83
  unsigned int v47; // r0@85
  unsigned int *v48; // r5@89
  unsigned int v49; // r0@91
  int v50; // r4@96
  unsigned int *v51; // r1@97
  unsigned int v52; // r0@99
  unsigned int *v53; // r5@103
  unsigned int v54; // r0@105
  unsigned int *v55; // r2@111
  signed int v56; // r1@113
  int v57; // [sp+1Ch] [bp-8Ch]@47
  int v58; // [sp+20h] [bp-88h]@41
  int v59; // [sp+24h] [bp-84h]@41
  VisualTree *v60; // [sp+28h] [bp-80h]@41
  LayoutManager *v61; // [sp+2Ch] [bp-7Ch]@41
  void *v62; // [sp+30h] [bp-78h]@37
  __int64 v63; // [sp+38h] [bp-70h]@37
  UIControl **v64; // [sp+40h] [bp-68h]@37
  UIControl **v65; // [sp+44h] [bp-64h]@39
  int v66; // [sp+4Ch] [bp-5Ch]@36
  char v67; // [sp+50h] [bp-58h]@22
  int v68; // [sp+54h] [bp-54h]@22
  UIControl *v69; // [sp+58h] [bp-50h]@2
  int v70; // [sp+5Ch] [bp-4Ch]@2
  UIControl *v71; // [sp+60h] [bp-48h]@2
  int v72; // [sp+64h] [bp-44h]@2
  int v73; // [sp+68h] [bp-40h]@2
  int v74; // [sp+6Ch] [bp-3Ch]@2
  int v75; // [sp+70h] [bp-38h]@2
  int v76; // [sp+74h] [bp-34h]@2
  int v77; // [sp+78h] [bp-30h]@2
  int v78; // [sp+7Ch] [bp-2Ch]@2
  int v79; // [sp+80h] [bp-28h]@41
  char v80; // [sp+84h] [bp-24h]@2

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( !CachedScenes::hasCachedScene(*(CachedScenes **)(a1 + 16), a2) )
  {
    v6 = MinecraftGame::getUIDefRepo(*(MinecraftGame **)v3);
    v7 = (ClientInputHandler *)ClientInstance::getInput(*(ClientInstance **)(v3 + 8));
    v8 = ClientInputHandler::getNameRegistry(v7);
    v9 = *(_DWORD *)(v3 + 12);
    v77 = MinecraftGame::getFont(*(MinecraftGame **)v3);
    v76 = MinecraftGame::getRuneFont(*(MinecraftGame **)v3);
    v75 = MinecraftGame::getUnicodeFont(*(MinecraftGame **)v3);
    v74 = MinecraftGame::getSmoothFont(*(MinecraftGame **)v3);
    v73 = MinecraftGame::getTextures(*(MinecraftGame **)v3);
    j__ZNSt12__shared_ptrI16UIControlFactoryLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJR15UIDefRepositoryRKN4Json5ValueER12NameRegistryRK13UISoundPlayerP4FontSI_SI_SI_PN3mce12TextureGroupEEEESt19_Sp_make_shared_tagRKT_DpOT0_(
      (int)&v78,
      (int)&v80,
      v6,
      v5,
      v8,
      v9,
      &v77,
      &v76,
      &v75,
      &v74,
      &v73);
    v10 = (VisualTree *)operator new(0x78u);
    VisualTree::VisualTree(v10);
    UIControlFactory::createControlTree((int)&v71, v78, (int)v4, (int)v10, 0, 1, 0, 0);
    v69 = v71;
    v70 = v72;
    if ( v72 )
    {
      v11 = (unsigned int *)(v72 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 + 1, v11) );
      }
      else
        ++*v11;
    }
    VisualTree::initRootControl((int)v10, (int)&v69);
    v13 = v70;
    if ( v70 )
      v14 = (unsigned int *)(v70 + 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 == 1 )
        v16 = (unsigned int *)(v13 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
        if ( &pthread_create )
        {
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
        }
        else
          v17 = (*v16)--;
        if ( v17 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
    UIControlFactory::getInitSelectedControl((UIControlFactory *)&v67, v78);
    VisualTree::setInitialSelectedControl((int)v10, (int)&v67);
    v18 = v68;
    if ( v68 )
      v19 = (unsigned int *)(v68 + 4);
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
    VisualTree::storeGlobalVars(v10, v5);
    v23 = (UIMeasureStrategy *)MinecraftGame::getUIMeasureStrategy(*(MinecraftGame **)v3);
    VisualTree::setMeasureStrategy(v10, v23);
    sub_DA73B4(&v66, v4);
    VisualTree::setRootControlName((int)v10, &v66);
    v24 = (void *)(v66 - 12);
    if ( (int *)(v66 - 12) != &dword_28898C0 )
      v55 = (unsigned int *)(v66 - 4);
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
        v56 = (*v55)--;
      if ( v56 <= 0 )
        j_j_j_j_j__ZdlPv_9(v24);
    v62 = operator new(1u);
    LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN10VisualTree11getControlsESt8functionIFbRK9UIControlEEEd_UlS5_E_E10_M_managerERSt9_Any_dataRKSA_St18_Manager_operation;
    HIDWORD(v25) = ZNSt17_Function_handlerIFbRK9UIControlEZN10VisualTree11getControlsESt8functionIS3_EEd_UlS2_E_E9_M_invokeERKSt9_Any_dataS2_;
    v63 = v25;
    VisualTree::getControls((int)&v64, (int)v10, (int)&v62);
    if ( (_DWORD)v63 )
      ((void (*)(void))v63)();
    v27 = v65;
    for ( i = v64; v27 != i; i += 2 )
      UIControl::clearControlCollectionFlag(*i);
    VisualTree::setClearPersistantMeshes(v10, 1);
    v28 = (LayoutManager *)operator new(0x1Cu);
    LayoutManager::LayoutManager(v28);
    v61 = v28;
    LayoutManager::update(v28, v10, v71);
    v29 = *(_BYTE **)(v3 + 16);
    v58 = v78;
    v60 = v10;
    v59 = v79;
    if ( v79 )
      v30 = (unsigned int *)(v79 + 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 + 1, v30) );
        ++*v30;
    v32 = (int)v61;
    v61 = 0;
    v57 = v32;
    CachedScenes::cacheVisualTree(v29, (void ***)&v60, (int)&v58, &v57);
    std::unique_ptr<LayoutManager,std::default_delete<LayoutManager>>::~unique_ptr(&v57);
    v33 = v59;
    if ( v59 )
      v34 = (unsigned int *)(v59 + 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 == 1 )
        v36 = (unsigned int *)(v33 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 8))(v33);
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 12))(v33);
    if ( v60 )
      (*(void (**)(void))(*(_DWORD *)v60 + 4))();
    v60 = 0;
    std::unique_ptr<LayoutManager,std::default_delete<LayoutManager>>::~unique_ptr(&v61);
    v39 = v65;
    v38 = (int)v64;
    if ( v64 != v65 )
      do
        v40 = *(_DWORD *)(v38 + 4);
        if ( v40 )
          v41 = (unsigned int *)(v40 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v42 = __ldrex(v41);
            while ( __strex(v42 - 1, v41) );
          }
          else
            v42 = (*v41)--;
          if ( v42 == 1 )
            v43 = (unsigned int *)(v40 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v40 + 8))(v40);
            if ( &pthread_create )
            {
              __dmb();
              do
                v44 = __ldrex(v43);
              while ( __strex(v44 - 1, v43) );
            }
            else
              v44 = (*v43)--;
            if ( v44 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v40 + 12))(v40);
        v38 += 8;
      while ( (UIControl **)v38 != v39 );
      v38 = (int)v64;
    if ( v38 )
      operator delete((void *)v38);
    v45 = v72;
      v46 = (unsigned int *)(v72 + 4);
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 == 1 )
        v48 = (unsigned int *)(v45 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v45 + 8))(v45);
            v49 = __ldrex(v48);
          while ( __strex(v49 - 1, v48) );
          v49 = (*v48)--;
        if ( v49 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v45 + 12))(v45);
    v50 = v79;
      v51 = (unsigned int *)(v79 + 4);
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
        v52 = (*v51)--;
      if ( v52 == 1 )
        v53 = (unsigned int *)(v50 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 8))(v50);
            v54 = __ldrex(v53);
          while ( __strex(v54 - 1, v53) );
          v54 = (*v53)--;
        if ( v54 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 12))(v50);
  }
}


unsigned int __fastcall SceneFactory::createNpcInteractScreen(SceneFactory *this, Player *a2, Entity *a3, int a4, char a5)
{
  unsigned __int64 *v5; // r8@1
  Player *v6; // r9@1
  Entity *v7; // r6@1
  MinecraftGame *v8; // r7@1
  Entity *v9; // r4@1
  ClientInstance *v10; // r5@1
  void **v11; // r0@1
  void *v12; // r0@1
  unsigned int *v13; // r0@3
  unsigned int v14; // r1@5
  unsigned int result; // r0@8
  int v16; // r4@8
  unsigned int *v17; // r1@9
  unsigned int *v18; // r5@15
  int v19; // r4@22
  unsigned int *v20; // r1@23
  unsigned int *v21; // r5@29
  unsigned int *v22; // r2@37
  signed int v23; // r1@39
  int v24; // [sp+14h] [bp-3Ch]@2
  int v25; // [sp+18h] [bp-38h]@2
  int v26; // [sp+20h] [bp-30h]@1
  int v27; // [sp+24h] [bp-2Ch]@1
  int v28; // [sp+28h] [bp-28h]@2
  char v29; // [sp+2Fh] [bp-21h]@1

  v5 = (unsigned __int64 *)this;
  v6 = a2;
  v29 = a5;
  v7 = (Entity *)a4;
  v8 = *(MinecraftGame **)a2;
  v9 = a3;
  v10 = (ClientInstance *)*((_DWORD *)a2 + 2);
  v11 = sub_DA7364((void **)&v26, "npc_interact.npc_screen");
  createScreen<ClientInstanceScreenModel,NpcInteractScreenController,Player &,Entity &,bool &>(
    &v27,
    (int)v6,
    v8,
    v10,
    (const char **)v11,
    (int)v9,
    v7,
    &v29);
  v12 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v26 - 4);
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
      j_j_j_j_j__ZdlPv_9(v12);
  }
  v24 = v27;
  v25 = v28;
  if ( v28 )
    v13 = (unsigned int *)(v28 + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 + 1, v13) );
      ++*v13;
  result = SceneFactory::_createScreen(v5, (int)v6, (unsigned __int64 *)&v24);
  v16 = v25;
  if ( v25 )
    v17 = (unsigned int *)(v25 + 4);
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
      result = (*v17)--;
    if ( result == 1 )
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
      }
      else
        result = (*v18)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  v19 = v28;
    v20 = (unsigned int *)(v28 + 4);
        result = __ldrex(v20);
      while ( __strex(result - 1, v20) );
      result = (*v20)--;
      v21 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          result = __ldrex(v21);
        while ( __strex(result - 1, v21) );
        result = (*v21)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  return result;
}


ModalScreenData *__fastcall SceneFactory::createOnlinePlayNotificationScreen(unsigned __int64 *a1, int a2, int a3)
{
  unsigned __int64 *v3; // r9@1
  int v4; // r8@1
  int v5; // r6@1
  void *v6; // r0@1
  void *v7; // r0@2
  void *v8; // r0@3
  void *v9; // r0@4
  void (__fastcall *v10)(int *, int, signed int); // r3@5
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20
  unsigned int *v18; // r2@22
  signed int v19; // r1@24
  int v20; // [sp+0h] [bp-28h]@6
  void (*v21)(void); // [sp+8h] [bp-20h]@5
  int v22; // [sp+Ch] [bp-1Ch]@6
  int v23; // [sp+14h] [bp-14h]@3
  int v24; // [sp+18h] [bp-10h]@3
  int v25; // [sp+20h] [bp-8h]@1
  int v26; // [sp+24h] [bp-4h]@1
  void *v27; // [sp+28h] [bp+0h]@1
  int v28; // [sp+2Ch] [bp+4h]@1
  int v29; // [sp+30h] [bp+8h]@1
  int v30; // [sp+34h] [bp+Ch]@1
  void *v31; // [sp+38h] [bp+10h]@1
  int v32; // [sp+3Ch] [bp+14h]@1
  int v33; // [sp+40h] [bp+18h]@1
  int v34; // [sp+44h] [bp+1Ch]@1
  void *v35; // [sp+48h] [bp+20h]@1
  void *v36; // [sp+4Ch] [bp+24h]@1
  void *v37; // [sp+50h] [bp+28h]@1
  void *v38; // [sp+54h] [bp+2Ch]@1
  int v39; // [sp+58h] [bp+30h]@1
  char v40; // [sp+5Ch] [bp+34h]@1
  int v41; // [sp+60h] [bp+38h]@1
  char v42; // [sp+64h] [bp+3Ch]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v27 = &unk_28898CC;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = &unk_28898CC;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = &unk_28898CC;
  v36 = &unk_28898CC;
  v37 = &unk_28898CC;
  v38 = &unk_28898CC;
  v39 = 1;
  v40 = 0;
  v41 = 1;
  v42 = 0;
  sub_DA78A4(&v27, "network.onlinePlay.title", (_BYTE *)0x18);
  sub_DA7364((void **)&v25, "network.onlinePlay.msg");
  I18n::get(&v26, (int **)&v25);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v31,
    &v26);
  v6 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v26 - 4);
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
      j_j_j_j_j__ZdlPv_9(v6);
  }
  v7 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v25 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  sub_DA73D4((const void **)&v31, "\n\n", 2u);
  sub_DA7364((void **)&v23, "network.onlinePlay.instruction");
  I18n::get(&v24, (int **)&v23);
  sub_DA7564((const void **)&v31, (const void **)&v24);
  v8 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v24 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v23 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v39 = 2;
  sub_DA78A4(&v37, "gui.ok", (_BYTE *)6);
  v41 = 2;
  v21 = 0;
  v10 = *(void (__fastcall **)(int *, int, signed int))(v5 + 8);
  if ( v10 )
    v10(&v20, v5, 2);
    v22 = *(_DWORD *)(v5 + 12);
    v21 = *(void (**)(void))(v5 + 8);
  SceneFactory::createUserManagementModalScreen(v3, v4, (int)&v27, (int)&v20);
  if ( v21 )
    v21();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v27);
}


int __fastcall SceneFactory::createInventoryScreen(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r8@1
  int v5; // r6@1
  int v6; // r0@3
  Options *v7; // r0@4
  int v8; // r0@4
  MinecraftGame *v9; // r5@4
  ClientInstance *v10; // r7@4
  int v11; // r0@5
  int v12; // r4@5
  unsigned int *v13; // r1@6
  unsigned int v14; // r0@8
  int v15; // r0@10
  int v16; // r4@10
  unsigned int *v17; // r1@11
  unsigned int v18; // r0@13
  unsigned int *v19; // r5@17
  unsigned int v20; // r0@19
  int result; // r0@21
  unsigned int *v22; // r5@24
  unsigned int v23; // r0@26
  void *v24; // r0@31
  void *v25; // r0@36
  unsigned int *v26; // r2@39
  signed int v27; // r1@41
  unsigned int *v28; // r2@43
  signed int v29; // r1@45
  char v30; // [sp+1Ah] [bp-4Eh]@5
  char v31; // [sp+1Bh] [bp-4Dh]@5
  int v32; // [sp+20h] [bp-48h]@5
  char v33; // [sp+24h] [bp-44h]@5
  int v34; // [sp+28h] [bp-40h]@5
  char v35; // [sp+2Eh] [bp-3Ah]@10
  char v36; // [sp+2Fh] [bp-39h]@10
  int v37; // [sp+34h] [bp-34h]@10
  char v38; // [sp+38h] [bp-30h]@10
  int v39; // [sp+3Ch] [bp-2Ch]@10
  int v40; // [sp+40h] [bp-28h]@1

  v3 = a2;
  v40 = a3;
  v4 = a1;
  v5 = ClientInstance::getLocalPlayer(*(ClientInstance **)(a2 + 8));
  if ( Entity::isRiding((Entity *)v5) == 1
    && Entity::getContainerComponent(*(Entity **)(v5 + 512))
    && (v6 = Entity::getContainerComponent(*(Entity **)(v5 + 512)),
        (unsigned __int8)Container::getContainerType(*(Container **)(v6 + 4)) != 247) )
  {
    result = 0;
    *(_DWORD *)v4 = 0;
    *(_DWORD *)(v4 + 4) = 0;
  }
  else
    v7 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(v3 + 8));
    v8 = Options::getUIProfile(v7);
    v9 = *(MinecraftGame **)v3;
    v10 = *(ClientInstance **)(v3 + 8);
    if ( v8 )
    {
      sub_DA7364((void **)&v32, "crafting_pocket.inventory_screen_pocket");
      v31 = 0;
      v11 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 52))(v5);
      v30 = 1;
      createScreen<ClientInstanceScreenModel,CraftingScreenController,bool,Vec3 const&,bool,CraftingType &>(
        &v33,
        v3,
        v9,
        v10,
        (const char **)&v32,
        &v31,
        v11,
        &v30,
        &v40);
      SceneFactory::_createScreen((unsigned __int64 *)v4, v3, (unsigned __int64 *)&v33);
      v12 = v34;
      if ( v34 )
      {
        v13 = (unsigned int *)(v34 + 4);
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
          v19 = (unsigned int *)(v12 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
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
            (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
      }
      v24 = (void *)(v32 - 12);
      if ( (int *)(v32 - 12) != &dword_28898C0 )
        v26 = (unsigned int *)(v32 - 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j_j__ZdlPv_9(v24);
      result = (*(int (**)(void))(**(_DWORD **)v4 + 248))();
    }
    else
      sub_DA7364((void **)&v37, "crafting.inventory_screen");
      v36 = 0;
      v15 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 52))(v5);
      v35 = 0;
        &v38,
        (const char **)&v37,
        &v36,
        v15,
        &v35,
      SceneFactory::_createScreen((unsigned __int64 *)v4, v3, (unsigned __int64 *)&v38);
      v16 = v39;
      if ( v39 )
        v17 = (unsigned int *)(v39 + 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 == 1 )
          v22 = (unsigned int *)(v16 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
            v23 = (*v22)--;
          if ( v23 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
      v25 = (void *)(v37 - 12);
      if ( (int *)(v37 - 12) != &dword_28898C0 )
        v28 = (unsigned int *)(v37 - 4);
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          v29 = (*v28)--;
        if ( v29 <= 0 )
          j_j_j_j_j__ZdlPv_9(v25);
  return result;
}


unsigned int __fastcall SceneFactory::createCreateWorldUpsellScreen(unsigned __int64 *a1, int a2, int a3, int a4, char a5, char a6, int *a7)
{
  int v7; // r4@1
  unsigned __int64 *v8; // r8@1
  MinecraftGame *v9; // r7@1
  ClientInstance *v10; // r6@1
  void **v11; // r0@2
  void *v12; // r0@2
  unsigned int *v13; // r2@3
  signed int v14; // r1@5
  void **v15; // r0@7
  unsigned int *v16; // r0@9
  unsigned int v17; // r1@11
  unsigned int result; // r0@14
  int v19; // r4@14
  unsigned int *v20; // r1@15
  unsigned int *v21; // r5@21
  int v22; // r4@28
  unsigned int *v23; // r1@29
  unsigned int *v24; // r5@35
  int v25; // [sp+14h] [bp-44h]@8
  int v26; // [sp+18h] [bp-40h]@8
  int v27; // [sp+20h] [bp-38h]@7
  int v28; // [sp+28h] [bp-30h]@2
  int v29; // [sp+2Ch] [bp-2Ch]@2
  int v30; // [sp+30h] [bp-28h]@8
  char v31; // [sp+36h] [bp-22h]@1
  char v32; // [sp+37h] [bp-21h]@1
  int v33; // [sp+38h] [bp-20h]@1

  v7 = a2;
  v8 = a1;
  v33 = a4;
  v32 = a5;
  v31 = a6;
  v9 = *(MinecraftGame **)a2;
  v10 = *(ClientInstance **)(a2 + 8);
  if ( a3 == 1 )
  {
    v11 = sub_DA7364((void **)&v28, "create_world_upsell.create_world_upsell_realms");
    createScreen<MainMenuScreenModel,CreateWorldUpsellScreenController,RealmsOfferTier &,bool &,bool &,std::string const&>(
      &v29,
      v7,
      v9,
      v10,
      (const char **)v11,
      &v33,
      &v32,
      &v31,
      a7);
    v12 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) == &dword_28898C0 )
      goto LABEL_8;
    v13 = (unsigned int *)(v28 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      goto LABEL_48;
    }
LABEL_47:
    v14 = (*v13)--;
    goto LABEL_48;
  }
  v15 = sub_DA7364((void **)&v27, "create_world_upsell.create_world_upsell");
  createScreen<MainMenuScreenModel,CreateWorldUpsellScreenController,RealmsOfferTier &,bool &,bool &,std::string const&>(
    &v29,
    v7,
    v9,
    v10,
    (const char **)v15,
    &v33,
    &v32,
    &v31,
    a7);
  v12 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) == &dword_28898C0 )
    goto LABEL_8;
  v13 = (unsigned int *)(v27 - 4);
  if ( !&pthread_create )
    goto LABEL_47;
  __dmb();
  do
    v14 = __ldrex(v13);
  while ( __strex(v14 - 1, v13) );
LABEL_48:
  if ( v14 <= 0 )
    j_j_j_j_j__ZdlPv_9(v12);
LABEL_8:
  v25 = v29;
  v26 = v30;
  if ( v30 )
    v16 = (unsigned int *)(v30 + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 + 1, v16) );
    else
      ++*v16;
  result = SceneFactory::_createScreen(v8, v7, (unsigned __int64 *)&v25);
  v19 = v26;
  if ( v26 )
    v20 = (unsigned int *)(v26 + 4);
        result = __ldrex(v20);
      while ( __strex(result - 1, v20) );
      result = (*v20)--;
    if ( result == 1 )
      v21 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v21);
        while ( __strex(result - 1, v21) );
      }
      else
        result = (*v21)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  v22 = v30;
    v23 = (unsigned int *)(v30 + 4);
        result = __ldrex(v23);
      while ( __strex(result - 1, v23) );
      result = (*v23)--;
      v24 = (unsigned int *)(v22 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
          result = __ldrex(v24);
        while ( __strex(result - 1, v24) );
        result = (*v24)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
  return result;
}


void __fastcall SceneFactory::createRealmsCreateScreen(unsigned __int64 *a1, int a2, int a3)
{
  int v3; // r4@1
  MinecraftGame *v4; // r6@1
  int v5; // r5@1
  ClientInstance *v6; // r7@1
  unsigned __int64 *v7; // r8@1
  void **v8; // r0@1
  int v9; // r4@1
  unsigned int *v10; // r1@2
  unsigned int v11; // r0@4
  unsigned int *v12; // r5@8
  unsigned int v13; // r0@10
  void *v14; // r0@15
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  int v17; // [sp+Ch] [bp-2Ch]@1
  char v18; // [sp+10h] [bp-28h]@1
  int v19; // [sp+14h] [bp-24h]@1

  v3 = a2;
  v4 = *(MinecraftGame **)a2;
  v5 = a3;
  v6 = *(ClientInstance **)(a2 + 8);
  v7 = a1;
  v8 = sub_DA7364((void **)&v17, "realms_create.realms_create_screen");
  createScreen<MainMenuScreenModel,RealmsCreateScreenController,RealmsCreateParams const&>(
    &v18,
    v3,
    v4,
    v6,
    (const char **)v8,
    v5);
  SceneFactory::_createScreen(v7, v3, (unsigned __int64 *)&v18);
  v9 = v19;
  if ( v19 )
  {
    v10 = (unsigned int *)(v19 + 4);
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
  }
  v14 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
}


void __fastcall SceneFactory::createEditWorldScreen(SceneFactory *this, const LevelSummary *a2, int *a3)
{
  SceneFactory::createEditWorldScreen(this, a2, a3);
}


unsigned int __fastcall SceneFactory::createPauseScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  unsigned int result; // r0@8
  int v11; // r4@8
  unsigned int *v12; // r1@9
  unsigned int *v13; // r5@15
  int v14; // r4@22
  unsigned int *v15; // r1@23
  unsigned int *v16; // r5@29
  unsigned int *v17; // r2@37
  signed int v18; // r1@39
  int v19; // [sp+8h] [bp-30h]@2
  int v20; // [sp+Ch] [bp-2Ch]@2
  int v21; // [sp+14h] [bp-24h]@1
  int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v21, "pause.pause_screen");
  j__Z12createScreenI25ClientInstanceScreenModel21PauseScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v22,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v19 = v22;
  v20 = v23;
  if ( v23 )
    v8 = (unsigned int *)(v23 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  result = SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v19);
  v11 = v20;
  if ( v20 )
    v12 = (unsigned int *)(v20 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v14 = v23;
    v15 = (unsigned int *)(v23 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return result;
}


unsigned int *__fastcall SceneFactory::_createScreen(int a1, int a2, int *a3, int *a4)
{
  int *v4; // r5@1
  int v5; // r4@1
  int v6; // r0@1
  int v7; // r2@2
  void (*v8)(void); // r12@2
  unsigned int *result; // r0@5
  unsigned int v10; // r1@8
  int v11; // [sp+4h] [bp-14h]@2

  v4 = a3;
  v5 = a1;
  v6 = *a3;
  if ( *a3 )
  {
    v7 = *a4;
    v8 = *(void (**)(void))(*(_DWORD *)v6 + 272);
    *a4 = 0;
    v11 = v7;
    v8();
    if ( v11 )
      (*(void (**)(void))(*(_DWORD *)v11 + 4))();
    v11 = 0;
    v6 = *v4;
  }
  *(_DWORD *)v5 = v6;
  result = (unsigned int *)v4[1];
  *(_DWORD *)(v5 + 4) = result;
  if ( result )
    ++result;
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(result);
      while ( __strex(v10 + 1, result) );
    }
    else
      ++*result;
  return result;
}


void __fastcall SceneFactory::createDeathScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  int v7; // r4@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r5@8
  unsigned int v11; // r0@10
  void *v12; // r0@15
  unsigned int *v13; // r2@17
  signed int v14; // r1@19
  int v15; // [sp+8h] [bp-28h]@1
  char v16; // [sp+Ch] [bp-24h]@1
  int v17; // [sp+10h] [bp-20h]@1

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v15, "death.death_screen");
  j__Z12createScreenI25ClientInstanceScreenModel21DeathScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v16,
    v2,
    v3,
    v5,
    (const char **)v6);
  SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v16);
  v7 = v17;
  if ( v17 )
  {
    v8 = (unsigned int *)(v17 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  v12 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
}


void __fastcall SceneFactory::createOptionsScreen(unsigned __int64 *a1, int a2, int a3, char a4)
{
  int v4; // r6@1
  unsigned __int64 *v5; // r8@1
  int v6; // r5@1
  Social::MultiplayerServiceManager *v7; // r0@2
  Social::MultiplayerServiceManager *v8; // r0@3
  int v9; // r4@3
  int v10; // r0@3
  char *v11; // r7@3
  signed int v12; // r10@3
  _DWORD *v13; // r0@3
  char *v14; // r4@3
  size_t v15; // r2@3
  int v16; // r4@7
  unsigned int *v17; // r1@8
  unsigned int v18; // r0@10
  unsigned int *v19; // r7@16
  unsigned int v20; // r0@18
  GlobalResourcesCrashRecovery *v21; // r0@25
  int v22; // r4@25
  unsigned int *v23; // r1@26
  unsigned int *v24; // r6@32
  void *v25; // r0@41
  unsigned int *v26; // r2@43
  signed int v27; // r1@45
  unsigned int *v28; // r1@51
  signed int v29; // r0@53
  char v30; // [sp+10h] [bp-88h]@25
  int v31; // [sp+14h] [bp-84h]@25
  int v32[16]; // [sp+18h] [bp-80h]@25
  Social::User *v33; // [sp+58h] [bp-40h]@3
  int v34; // [sp+5Ch] [bp-3Ch]@7
  void *s2; // [sp+60h] [bp-38h]@3
  int v36; // [sp+68h] [bp-30h]@1
  char v37; // [sp+6Fh] [bp-29h]@1
  int v38; // [sp+70h] [bp-28h]@1

  v4 = a2;
  v5 = a1;
  v38 = a3;
  v37 = a4;
  sub_DA7364((void **)&v36, "settings.screen_controls_and_settings");
  v6 = ClientInstance::getLevel(*(ClientInstance **)(v4 + 8));
  if ( v6 )
  {
    v7 = (Social::MultiplayerServiceManager *)MinecraftGame::getMultiplayerServiceManager(*(MinecraftGame **)v4);
    if ( Social::MultiplayerServiceManager::isInRealm(v7) )
    {
      v8 = (Social::MultiplayerServiceManager *)MinecraftGame::getMultiplayerServiceManager(*(MinecraftGame **)v4);
      v9 = Social::MultiplayerServiceManager::getRealmWorld(v8);
      ClientInstance::getUser((ClientInstance *)&v33, *(_DWORD *)(v4 + 8));
      v10 = Social::User::getLiveUser(v33);
      Social::XboxLiveUserManager::getCurrentXUID((Social::XboxLiveUserManager *)&s2, v10);
      v11 = (char *)s2;
      v12 = 0;
      v13 = *(_DWORD **)(v9 + 20);
      v14 = (char *)s2 - 12;
      v15 = *(v13 - 3);
      if ( v15 == *((_DWORD *)s2 - 3) && !memcmp(v13, s2, v15) )
        v12 = 1;
      if ( (int *)v14 != &dword_28898C0 )
      {
        v28 = (unsigned int *)(v11 - 4);
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
          j_j_j_j_j__ZdlPv_9(v14);
      }
      v16 = v34;
      if ( v34 )
        v17 = (unsigned int *)(v34 + 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 == 1 )
          v19 = (unsigned int *)(v16 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
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
            (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
      if ( v12 == 1 )
        sub_DA78A4((void **)&v36, "settings.screen_realm_controls_and_settings", (_BYTE *)0x2B);
    }
    else
      sub_DA78A4((void **)&v36, "settings.screen_world_controls_and_settings", (_BYTE *)0x2B);
  }
  else
    GlobalResourcesCrashRecovery::createMenuLoadLock(0);
  MinecraftGame::getCurrentLevelSummary((MinecraftGame *)v32, *(_DWORD *)v4);
  createScreen<MainMenuScreenModel,SettingsScreenController,LevelSummary &,SettingsTabIndex &,bool &>(
    &v30,
    v4,
    *(MinecraftGame **)v4,
    *(ClientInstance **)(v4 + 8),
    (const char **)&v36,
    v32,
    &v38,
    &v37);
  v21 = (GlobalResourcesCrashRecovery *)SceneFactory::_createScreen(v5, v4, (unsigned __int64 *)&v30);
  v22 = v31;
  if ( v31 )
    v23 = (unsigned int *)(v31 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v21 = (GlobalResourcesCrashRecovery *)__ldrex(v23);
      while ( __strex((unsigned int)v21 - 1, v23) );
      v21 = (GlobalResourcesCrashRecovery *)(*v23)--;
    if ( v21 == (GlobalResourcesCrashRecovery *)1 )
      v24 = (unsigned int *)(v22 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
      if ( &pthread_create )
        __dmb();
        do
          v21 = (GlobalResourcesCrashRecovery *)__ldrex(v24);
        while ( __strex((unsigned int)v21 - 1, v24) );
      else
        v21 = (GlobalResourcesCrashRecovery *)(*v24)--;
      if ( v21 == (GlobalResourcesCrashRecovery *)1 )
        v21 = (GlobalResourcesCrashRecovery *)(*(int (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
  if ( !v6 )
    GlobalResourcesCrashRecovery::deleteMenuLoadLock(v21);
  LevelSummary::~LevelSummary((LevelSummary *)v32);
  v25 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v36 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9(v25);
}


void __fastcall SceneFactory::createCommandBlockMinecartScreen(unsigned __int64 *a1, int a2, int a3, unsigned __int64 *a4)
{
  SceneFactory::createCommandBlockMinecartScreen(a1, a2, a3, a4);
}


void __fastcall SceneFactory::createDimensionChangeProgressScreen(unsigned __int64 *a1, int a2, int a3, int a4)
{
  SceneFactory::createDimensionChangeProgressScreen(a1, a2, a3, a4);
}


unsigned int __fastcall SceneFactory::createHopperScreen(SceneFactory *this, Player *a2, const BlockPos *a3, const BlockPos *a4)
{
  Player *v4; // r4@1
  unsigned __int64 *v5; // r8@1
  const BlockPos *v6; // r6@1
  Options *v7; // r0@1
  bool v8; // zf@1
  signed int v9; // r0@1
  MinecraftGame *v10; // r7@3
  ClientInstance *v11; // r5@3
  void **v12; // r0@3
  void *v13; // r0@3
  unsigned int *v14; // r0@5
  unsigned int v15; // r1@7
  unsigned int result; // r0@10
  int v17; // r4@10
  unsigned int *v18; // r1@11
  unsigned int *v19; // r5@17
  int v20; // r4@24
  unsigned int *v21; // r1@25
  unsigned int *v22; // r5@31
  unsigned int *v23; // r2@39
  signed int v24; // r1@41
  int v25; // [sp+10h] [bp-40h]@4
  int v26; // [sp+14h] [bp-3Ch]@4
  int v27; // [sp+18h] [bp-38h]@3
  int v28; // [sp+20h] [bp-30h]@3
  int v29; // [sp+24h] [bp-2Ch]@3
  int v30; // [sp+28h] [bp-28h]@4
  int v31; // [sp+2Ch] [bp-24h]@3

  v4 = a2;
  v5 = (unsigned __int64 *)this;
  v6 = a4;
  v7 = (Options *)ClientInstance::getOptions(*((ClientInstance **)a2 + 2));
  v8 = Options::getUIProfile(v7) == 0;
  v9 = 0;
  if ( v8 )
    v9 = 1;
  v31 = v9;
  v10 = *(MinecraftGame **)v4;
  v11 = (ClientInstance *)*((_DWORD *)v4 + 2);
  v12 = sub_DA7364((void **)&v28, "redstone.hopper_screen");
  v27 = 0;
  createScreen<ClientInstanceScreenModel,RedstoneScreenController,BlockPos const&,RedstoneScreenType,InteractionModel &>(
    &v29,
    (int)v4,
    v10,
    v11,
    (const char **)v12,
    v6,
    &v27,
    &v31);
  v13 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v28 - 4);
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
      j_j_j_j_j__ZdlPv_9(v13);
  }
  v25 = v29;
  v26 = v30;
  if ( v30 )
    v14 = (unsigned int *)(v30 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  result = SceneFactory::_createScreen(v5, (int)v4, (unsigned __int64 *)&v25);
  v17 = v26;
  if ( v26 )
    v18 = (unsigned int *)(v26 + 4);
        result = __ldrex(v18);
      while ( __strex(result - 1, v18) );
      result = (*v18)--;
    if ( result == 1 )
      v19 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v19);
        while ( __strex(result - 1, v19) );
      }
      else
        result = (*v19)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  v20 = v30;
    v21 = (unsigned int *)(v30 + 4);
        result = __ldrex(v21);
      while ( __strex(result - 1, v21) );
      result = (*v21)--;
      v22 = (unsigned int *)(v20 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
          result = __ldrex(v22);
        while ( __strex(result - 1, v22) );
        result = (*v22)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
  return result;
}


void __fastcall SceneFactory::createDevConsole(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  int v7; // r4@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r5@8
  unsigned int v11; // r0@10
  void *v12; // r0@15
  unsigned int *v13; // r2@17
  signed int v14; // r1@19
  int v15; // [sp+8h] [bp-28h]@1
  char v16; // [sp+Ch] [bp-24h]@1
  int v17; // [sp+10h] [bp-20h]@1

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v15, "dev_console.dev_console_screen");
  j__Z12createScreenI20MinecraftScreenModel26DevConsoleScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v16,
    v2,
    v3,
    v5,
    (const char **)v6);
  SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v16);
  v7 = v17;
  if ( v17 )
  {
    v8 = (unsigned int *)(v17 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  v12 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
}


void __fastcall SceneFactory::createCommandBlockScreen(SceneFactory *this, Player *a2, const BlockPos *a3, int a4)
{
  SceneFactory::createCommandBlockScreen(this, a2, a3, a4);
}


unsigned int __fastcall SceneFactory::createHowToPlayScreen(unsigned __int64 *a1, int a2, int a3)
{
  int v3; // r4@1
  unsigned __int64 *v4; // r5@1
  MinecraftGame *v5; // r6@1
  ClientInstance *v6; // r7@1
  void **v7; // r0@1
  void *v8; // r0@1
  unsigned int *v9; // r0@3
  unsigned int v10; // r1@5
  unsigned int result; // r0@8
  int v12; // r4@8
  unsigned int *v13; // r1@9
  unsigned int *v14; // r5@15
  int v15; // r4@22
  unsigned int *v16; // r1@23
  unsigned int *v17; // r5@29
  unsigned int *v18; // r2@37
  signed int v19; // r1@39
  int v20; // [sp+Ch] [bp-34h]@2
  int v21; // [sp+10h] [bp-30h]@2
  int v22; // [sp+18h] [bp-28h]@1
  int v23; // [sp+1Ch] [bp-24h]@1
  int v24; // [sp+20h] [bp-20h]@2
  int v25; // [sp+24h] [bp-1Ch]@1

  v3 = a2;
  v25 = a3;
  v4 = a1;
  v5 = *(MinecraftGame **)a2;
  v6 = *(ClientInstance **)(a2 + 8);
  v7 = sub_DA7364((void **)&v22, "how_to_play.how_to_play_screen");
  createScreen<MainMenuScreenModel,HowToPlayScreenController,HowToPlayTopicIndex &>(
    &v23,
    v3,
    v5,
    v6,
    (const char **)v7,
    &v25);
  v8 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v22 - 4);
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
      j_j_j_j_j__ZdlPv_9(v8);
  }
  v20 = v23;
  v21 = v24;
  if ( v24 )
    v9 = (unsigned int *)(v24 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
      ++*v9;
  result = SceneFactory::_createScreen(v4, v3, (unsigned __int64 *)&v20);
  v12 = v21;
  if ( v21 )
    v13 = (unsigned int *)(v21 + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  v15 = v24;
    v16 = (unsigned int *)(v24 + 4);
        result = __ldrex(v16);
      while ( __strex(result - 1, v16) );
      result = (*v16)--;
      v17 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          result = __ldrex(v17);
        while ( __strex(result - 1, v17) );
        result = (*v17)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  return result;
}


void __fastcall SceneFactory::createCreateWorldScreen(SceneFactory *this, int a2)
{
  SceneFactory::createCreateWorldScreen(this, a2);
}


unsigned int __fastcall SceneFactory::createBookScreen(SceneFactory *this, int a2, int a3, char a4)
{
  int v4; // r4@1
  unsigned __int64 *v5; // r5@1
  MinecraftGame *v6; // r6@1
  ClientInstance *v7; // r7@1
  void **v8; // r0@1
  void *v9; // r0@1
  unsigned int *v10; // r0@3
  unsigned int v11; // r1@5
  unsigned int result; // r0@8
  int v13; // r4@8
  unsigned int *v14; // r1@9
  unsigned int *v15; // r5@15
  int v16; // r4@22
  unsigned int *v17; // r1@23
  unsigned int *v18; // r5@29
  unsigned int *v19; // r2@37
  signed int v20; // r1@39
  int v21; // [sp+10h] [bp-38h]@2
  int v22; // [sp+14h] [bp-34h]@2
  int v23; // [sp+1Ch] [bp-2Ch]@1
  int v24; // [sp+20h] [bp-28h]@1
  int v25; // [sp+24h] [bp-24h]@2
  char v26; // [sp+2Bh] [bp-1Dh]@1
  int v27; // [sp+2Ch] [bp-1Ch]@1

  v4 = a2;
  v27 = a3;
  v5 = (unsigned __int64 *)this;
  v26 = a4;
  v6 = *(MinecraftGame **)a2;
  v7 = *(ClientInstance **)(a2 + 8);
  v8 = sub_DA7364((void **)&v23, "book.book_screen");
  createScreen<ClientInstanceScreenModel,BookScreenController,int &,bool &>(
    &v24,
    v4,
    v6,
    v7,
    (const char **)v8,
    &v27,
    &v26);
  v9 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  }
  v21 = v24;
  v22 = v25;
  if ( v25 )
    v10 = (unsigned int *)(v25 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
      ++*v10;
  result = SceneFactory::_createScreen(v5, v4, (unsigned __int64 *)&v21);
  v13 = v22;
  if ( v22 )
    v14 = (unsigned int *)(v22 + 4);
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
      result = (*v14)--;
    if ( result == 1 )
      v15 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
      }
      else
        result = (*v15)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  v16 = v25;
    v17 = (unsigned int *)(v25 + 4);
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
      result = (*v17)--;
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
        result = (*v18)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  return result;
}


unsigned int __fastcall SceneFactory::createRealmsSharingLauncherScreen(unsigned __int64 *a1, int a2, int *a3)
{
  int v3; // r4@1
  MinecraftGame *v4; // r6@1
  int *v5; // r5@1
  ClientInstance *v6; // r7@1
  unsigned __int64 *v7; // r8@1
  void **v8; // r0@1
  void *v9; // r0@1
  unsigned int *v10; // r0@3
  unsigned int v11; // r1@5
  unsigned int result; // r0@8
  int v13; // r4@8
  unsigned int *v14; // r1@9
  unsigned int *v15; // r5@15
  int v16; // r4@22
  unsigned int *v17; // r1@23
  unsigned int *v18; // r5@29
  unsigned int *v19; // r2@37
  signed int v20; // r1@39
  int v21; // [sp+Ch] [bp-34h]@2
  int v22; // [sp+10h] [bp-30h]@2
  int v23; // [sp+18h] [bp-28h]@1
  int v24; // [sp+1Ch] [bp-24h]@1
  int v25; // [sp+20h] [bp-20h]@2

  v3 = a2;
  v4 = *(MinecraftGame **)a2;
  v5 = a3;
  v6 = *(ClientInstance **)(a2 + 8);
  v7 = a1;
  v8 = sub_DA7364((void **)&v23, "common.modal_screen");
  createScreen<MinecraftScreenModel,RealmsShareLauncherController,std::string const&>(
    &v24,
    v3,
    v4,
    v6,
    (const char **)v8,
    v5);
  v9 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  }
  v21 = v24;
  v22 = v25;
  if ( v25 )
    v10 = (unsigned int *)(v25 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
      ++*v10;
  result = SceneFactory::_createScreen(v7, v3, (unsigned __int64 *)&v21);
  v13 = v22;
  if ( v22 )
    v14 = (unsigned int *)(v22 + 4);
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
      result = (*v14)--;
    if ( result == 1 )
      v15 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
      }
      else
        result = (*v15)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  v16 = v25;
    v17 = (unsigned int *)(v25 + 4);
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
      result = (*v17)--;
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
        result = (*v18)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  return result;
}


unsigned int __fastcall SceneFactory::createXblReportUserScreen(unsigned __int64 *a1, int a2, int *a3, int *a4)
{
  int v4; // r9@1
  MinecraftGame *v5; // r6@1
  int *v6; // r5@1
  ClientInstance *v7; // r7@1
  int *v8; // r4@1
  unsigned __int64 *v9; // r8@1
  void **v10; // r0@1
  void *v11; // r0@1
  unsigned int *v12; // r0@3
  unsigned int v13; // r1@5
  unsigned int result; // r0@8
  int v15; // r4@8
  unsigned int *v16; // r1@9
  unsigned int *v17; // r5@15
  int v18; // r4@22
  unsigned int *v19; // r1@23
  unsigned int *v20; // r5@29
  unsigned int *v21; // r2@37
  signed int v22; // r1@39
  int v23; // [sp+10h] [bp-38h]@2
  int v24; // [sp+14h] [bp-34h]@2
  int v25; // [sp+1Ch] [bp-2Ch]@1
  int v26; // [sp+20h] [bp-28h]@1
  int v27; // [sp+24h] [bp-24h]@2

  v4 = a2;
  v5 = *(MinecraftGame **)a2;
  v6 = a4;
  v7 = *(ClientInstance **)(a2 + 8);
  v8 = a3;
  v9 = a1;
  v10 = sub_DA7364((void **)&v25, "xbl_report_user.xbl_report_user_screen");
  createScreen<MinecraftScreenModel,XblReportUserScreenController,std::string const&,std::string const&>(
    &v26,
    v4,
    v5,
    v7,
    (const char **)v10,
    v8,
    v6);
  v11 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v25 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  }
  v23 = v26;
  v24 = v27;
  if ( v27 )
    v12 = (unsigned int *)(v27 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
      ++*v12;
  result = SceneFactory::_createScreen(v9, v4, (unsigned __int64 *)&v23);
  v15 = v24;
  if ( v24 )
    v16 = (unsigned int *)(v24 + 4);
        result = __ldrex(v16);
      while ( __strex(result - 1, v16) );
      result = (*v16)--;
    if ( result == 1 )
      v17 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v17);
        while ( __strex(result - 1, v17) );
      }
      else
        result = (*v17)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  v18 = v27;
    v19 = (unsigned int *)(v27 + 4);
        result = __ldrex(v19);
      while ( __strex(result - 1, v19) );
      result = (*v19)--;
      v20 = (unsigned int *)(v18 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
          result = __ldrex(v20);
        while ( __strex(result - 1, v20) );
        result = (*v20)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
  return result;
}


unsigned int __fastcall SceneFactory::createTradeScreen(unsigned __int64 *a1, int a2, int a3, __int64 *a4)
{
  int v4; // r4@1
  unsigned __int64 *v5; // r8@1
  __int64 *v6; // r6@1
  Options *v7; // r0@1
  int v8; // r0@1
  signed int v9; // r1@1
  MinecraftGame *v10; // r7@3
  ClientInstance *v11; // r5@3
  void **v12; // r0@3
  void *v13; // r0@3
  unsigned int *v14; // r0@5
  unsigned int v15; // r1@7
  unsigned int result; // r0@10
  int v17; // r4@10
  unsigned int *v18; // r1@11
  unsigned int *v19; // r5@17
  int v20; // r4@24
  unsigned int *v21; // r1@25
  unsigned int *v22; // r5@31
  unsigned int *v23; // r2@39
  signed int v24; // r1@41
  int v25; // [sp+10h] [bp-38h]@4
  int v26; // [sp+14h] [bp-34h]@4
  int v27; // [sp+1Ch] [bp-2Ch]@3
  int v28; // [sp+20h] [bp-28h]@3
  int v29; // [sp+24h] [bp-24h]@4
  int v30; // [sp+28h] [bp-20h]@3

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(a2 + 8));
  v8 = Options::getUIProfile(v7);
  v9 = 0;
  if ( !v8 )
    v9 = 1;
  v30 = v9;
  v10 = *(MinecraftGame **)v4;
  v11 = *(ClientInstance **)(v4 + 8);
  v12 = sub_DA7364((void **)&v27, "trade.trade_screen");
  createScreen<ClientInstanceScreenModel,TradeScreenController,EntityUniqueID const&,InteractionModel &>(
    &v28,
    v4,
    v10,
    v11,
    (const char **)v12,
    v6,
    &v30);
  v13 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v27 - 4);
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
      j_j_j_j_j__ZdlPv_9(v13);
  }
  v25 = v28;
  v26 = v29;
  if ( v29 )
    v14 = (unsigned int *)(v29 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  result = SceneFactory::_createScreen(v5, v4, (unsigned __int64 *)&v25);
  v17 = v26;
  if ( v26 )
    v18 = (unsigned int *)(v26 + 4);
        result = __ldrex(v18);
      while ( __strex(result - 1, v18) );
      result = (*v18)--;
    if ( result == 1 )
      v19 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v19);
        while ( __strex(result - 1, v19) );
      }
      else
        result = (*v19)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  v20 = v29;
    v21 = (unsigned int *)(v29 + 4);
        result = __ldrex(v21);
      while ( __strex(result - 1, v21) );
      result = (*v21)--;
      v22 = (unsigned int *)(v20 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
          result = __ldrex(v22);
        while ( __strex(result - 1, v22) );
        result = (*v22)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
  return result;
}


unsigned int __fastcall SceneFactory::createVRControlScreen(SceneFactory *this, int a2, char a3)
{
  int v3; // r4@1
  unsigned __int64 *v4; // r5@1
  MinecraftGame *v5; // r6@1
  ClientInstance *v6; // r7@1
  void **v7; // r0@1
  void *v8; // r0@1
  unsigned int *v9; // r0@3
  unsigned int v10; // r1@5
  unsigned int result; // r0@8
  int v12; // r4@8
  unsigned int *v13; // r1@9
  unsigned int *v14; // r5@15
  int v15; // r4@22
  unsigned int *v16; // r1@23
  unsigned int *v17; // r5@29
  unsigned int *v18; // r2@37
  signed int v19; // r1@39
  int v20; // [sp+Ch] [bp-34h]@2
  int v21; // [sp+10h] [bp-30h]@2
  int v22; // [sp+18h] [bp-28h]@1
  int v23; // [sp+1Ch] [bp-24h]@1
  int v24; // [sp+20h] [bp-20h]@2
  char v25; // [sp+27h] [bp-19h]@1

  v3 = a2;
  v25 = a3;
  v4 = (unsigned __int64 *)this;
  v5 = *(MinecraftGame **)a2;
  v6 = *(ClientInstance **)(a2 + 8);
  v7 = sub_DA7364((void **)&v22, "vrscheme.scheme_screen");
  createScreen<MinecraftScreenModel,VRSchemeScreenController,bool &>(&v23, v3, v5, v6, (const char **)v7, &v25);
  v8 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v22 - 4);
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
      j_j_j_j_j__ZdlPv_9(v8);
  }
  v20 = v23;
  v21 = v24;
  if ( v24 )
    v9 = (unsigned int *)(v24 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
      ++*v9;
  result = SceneFactory::_createScreen(v4, v3, (unsigned __int64 *)&v20);
  v12 = v21;
  if ( v21 )
    v13 = (unsigned int *)(v21 + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  v15 = v24;
    v16 = (unsigned int *)(v24 + 4);
        result = __ldrex(v16);
      while ( __strex(result - 1, v16) );
      result = (*v16)--;
      v17 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          result = __ldrex(v17);
        while ( __strex(result - 1, v17) );
        result = (*v17)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  return result;
}


unsigned int __fastcall SceneFactory::createStartupScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  unsigned int result; // r0@8
  int v11; // r4@8
  unsigned int *v12; // r1@9
  unsigned int *v13; // r5@15
  int v14; // r4@22
  unsigned int *v15; // r1@23
  unsigned int *v16; // r5@29
  unsigned int *v17; // r2@37
  signed int v18; // r1@39
  int v19; // [sp+8h] [bp-30h]@2
  int v20; // [sp+Ch] [bp-2Ch]@2
  int v21; // [sp+14h] [bp-24h]@1
  int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v21, "startup.startup_screen");
  j__Z12createScreenI20MinecraftScreenModel25MinecraftScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v22,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v19 = v22;
  v20 = v23;
  if ( v23 )
    v8 = (unsigned int *)(v23 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  result = SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v19);
  v11 = v20;
  if ( v20 )
    v12 = (unsigned int *)(v20 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v14 = v23;
    v15 = (unsigned int *)(v23 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return result;
}


int __fastcall SceneFactory::createStartMenuScreen(SceneFactory *this, int a2)
{
  int v2; // r6@1
  unsigned __int64 *v3; // r4@1
  SceneStack *v4; // r0@1
  signed int v5; // r1@2
  ClientInstance *v6; // r0@2
  SceneStack *v7; // r0@3
  GlobalResourcesCrashRecovery *v8; // r0@6
  MinecraftGame *v9; // r7@6
  ClientInstance *v10; // r5@6
  void **v11; // r0@6
  int v12; // r7@6
  unsigned int *v13; // r1@7
  unsigned int v14; // r0@9
  unsigned int *v15; // r4@13
  unsigned int v16; // r0@15
  void *v17; // r0@20
  int v23; // ST08_4@21
  int v24; // r0@21
  int v25; // r7@21
  int v32; // r0@21
  unsigned int *v34; // r2@22
  signed int v35; // r1@24
  unsigned __int64 *v36; // [sp+Ch] [bp-84h]@6
  int v37; // [sp+10h] [bp-80h]@20
  int v38; // [sp+14h] [bp-7Ch]@21
  __int64 v39; // [sp+18h] [bp-78h]@21
  __int64 v40; // [sp+20h] [bp-70h]@21
  __int64 v41; // [sp+28h] [bp-68h]@21
  __int64 v42; // [sp+30h] [bp-60h]@21
  __int64 v43; // [sp+38h] [bp-58h]@21
  __int64 v44; // [sp+40h] [bp-50h]@21
  __int64 v45; // [sp+48h] [bp-48h]@21
  __int64 v46; // [sp+50h] [bp-40h]@21
  int v47; // [sp+5Ch] [bp-34h]@6
  char v48; // [sp+60h] [bp-30h]@6
  int v49; // [sp+64h] [bp-2Ch]@6

  v2 = a2;
  v3 = (unsigned __int64 *)this;
  v4 = (SceneStack *)ClientInstance::getClientSceneStack(*(ClientInstance **)(a2 + 8));
  SceneStack::flushStack(v4, 0, 1);
  if ( *(_BYTE *)(v2 + 4) )
  {
    *(_BYTE *)(v2 + 4) = 0;
    v5 = ClientInstance::isPrimaryClient(*(ClientInstance **)(v2 + 8));
    v6 = *(ClientInstance **)(v2 + 8);
    if ( v5 )
      v7 = (SceneStack *)ClientInstance::getMainSceneStack(v6);
    else
      v7 = (SceneStack *)ClientInstance::getClientSceneStack(v6);
    SceneStack::deferPushesUntilNextTick(v7);
  }
  v8 = (GlobalResourcesCrashRecovery *)MinecraftGame::setMultithreadedRendering(*(MinecraftGame **)v2, 1);
  GlobalResourcesCrashRecovery::createMenuLoadLock(v8);
  v9 = *(MinecraftGame **)v2;
  v10 = *(ClientInstance **)(v2 + 8);
  v11 = sub_DA7364((void **)&v47, "start.start_screen");
  j__Z12createScreenI19MainMenuScreenModel25StartMenuScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v48,
    v2,
    v9,
    v10,
    (const char **)v11);
  SceneFactory::_createScreen(v3, v2, (unsigned __int64 *)&v48);
  v12 = v49;
  v36 = v3;
  if ( v49 )
    v13 = (unsigned int *)(v49 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
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
  v37 = v2;
  v17 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v47 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
  GlobalResourcesCrashRecovery::deleteMenuLoadLock((GlobalResourcesCrashRecovery *)v17);
  _aeabi_memclr8(&v39, 60);
  v39 = *(_QWORD *)&Matrix::IDENTITY;
  v40 = qword_27E89F0;
  v41 = qword_27E89F8;
  v42 = qword_27E8A00;
  _R4 = HIDWORD(qword_27E8A08);
  _R6 = qword_27E8A10;
  _KR00_8 = *(__int64 *)((char *)&qword_27E8A10 + 4);
  _R9 = *((_DWORD *)&qword_27E8A18 + 1);
  _R10 = *(_QWORD *)&qword_27E8A20;
  v43 = qword_27E8A08;
  v44 = qword_27E8A10;
  v45 = *(_QWORD *)&qword_27E8A18;
  v46 = *(_QWORD *)&qword_27E8A20;
  v23 = qword_27E8A08;
  v24 = ClientInstance::getHoloInput(*(ClientInstance **)(v37 + 8));
  v25 = v24;
  _R0 = (*(int (**)(void))(*(_DWORD *)v24 + 252))();
  _R1 = v23;
  __asm
    VMOV            S2, R4
    VMOV            S1, R0
    VMOV            S4, R6
    VMOV            S0, R1
    VMOV            S6, R5
    VMUL.F32        S0, S0, S1
    VMUL.F32        S2, S2, S1
    VMUL.F32        S4, S4, S1
    VMUL.F32        S6, S6, S1
    VMOV            S8, R8
    VMOV            S10, R9
    VMOV            S12, R10
    VMOV            S14, R11
    VSUB.F32        S0, S8, S0
    VSUB.F32        S2, S10, S2
    VSUB.F32        S4, S12, S4
    VSUB.F32        S6, S14, S6
    VSTR            S0, [SP,#0x90+var_48]
    VSTR            S2, [SP,#0x90+var_48+4]
    VSTR            S4, [SP,#0x90+var_40]
    VSTR            S6, [SP,#0x90+var_40+4]
  (*(void (__fastcall **)(int, __int64 *))(*(_DWORD *)v25 + 160))(v25, &v39);
  (*(void (__fastcall **)(int, signed int, _DWORD))(*(_DWORD *)v25 + 132))(v25, 1065353216, 0);
  v32 = *(_DWORD *)(v37 + 8);
  v38 = 2;
  ClientInstance::setClientPlayMode(v32, &v38);
  return (*(int (**)(void))(**(_DWORD **)v36 + 248))();
}


void __fastcall SceneFactory::createDeathScreen(SceneFactory *this, int a2)
{
  SceneFactory::createDeathScreen(this, a2);
}


void __fastcall SceneFactory::createRemixUploadScreen(unsigned __int64 *a1, int a2, int a3)
{
  SceneFactory::createRemixUploadScreen(a1, a2, a3);
}


unsigned int __fastcall SceneFactory::createXblConsoleSignInScreen(unsigned __int64 *a1, int a2, int *a3, int *a4)
{
  int v4; // r9@1
  MinecraftGame *v5; // r6@1
  int *v6; // r5@1
  ClientInstance *v7; // r7@1
  int *v8; // r4@1
  unsigned __int64 *v9; // r8@1
  void **v10; // r0@1
  void *v11; // r0@1
  unsigned int *v12; // r0@3
  unsigned int v13; // r1@5
  unsigned int result; // r0@8
  int v15; // r4@8
  unsigned int *v16; // r1@9
  unsigned int *v17; // r5@15
  int v18; // r4@22
  unsigned int *v19; // r1@23
  unsigned int *v20; // r5@29
  unsigned int *v21; // r2@37
  signed int v22; // r1@39
  int v23; // [sp+10h] [bp-38h]@2
  int v24; // [sp+14h] [bp-34h]@2
  int v25; // [sp+1Ch] [bp-2Ch]@1
  int v26; // [sp+20h] [bp-28h]@1
  int v27; // [sp+24h] [bp-24h]@2

  v4 = a2;
  v5 = *(MinecraftGame **)a2;
  v6 = a4;
  v7 = *(ClientInstance **)(a2 + 8);
  v8 = a3;
  v9 = a1;
  v10 = sub_DA7364((void **)&v25, "xbl_console_signin.xbl_console_signin");
  createScreen<MinecraftScreenModel,XblConsoleSignInScreenController,std::string const&,std::string const&>(
    &v26,
    v4,
    v5,
    v7,
    (const char **)v10,
    v8,
    v6);
  v11 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v25 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  }
  v23 = v26;
  v24 = v27;
  if ( v27 )
    v12 = (unsigned int *)(v27 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
      ++*v12;
  result = SceneFactory::_createScreen(v9, v4, (unsigned __int64 *)&v23);
  v15 = v24;
  if ( v24 )
    v16 = (unsigned int *)(v24 + 4);
        result = __ldrex(v16);
      while ( __strex(result - 1, v16) );
      result = (*v16)--;
    if ( result == 1 )
      v17 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v17);
        while ( __strex(result - 1, v17) );
      }
      else
        result = (*v17)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  v18 = v27;
    v19 = (unsigned int *)(v27 + 4);
        result = __ldrex(v19);
      while ( __strex(result - 1, v19) );
      result = (*v19)--;
      v20 = (unsigned int *)(v18 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
          result = __ldrex(v20);
        while ( __strex(result - 1, v20) );
        result = (*v20)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
  return result;
}


unsigned int __fastcall SceneFactory::createXblFriendFinderScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  unsigned int result; // r0@8
  int v11; // r4@8
  unsigned int *v12; // r1@9
  unsigned int *v13; // r5@15
  int v14; // r4@22
  unsigned int *v15; // r1@23
  unsigned int *v16; // r5@29
  unsigned int *v17; // r2@37
  signed int v18; // r1@39
  int v19; // [sp+8h] [bp-30h]@2
  int v20; // [sp+Ch] [bp-2Ch]@2
  int v21; // [sp+14h] [bp-24h]@1
  int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v21, "xbl_friend_finder.xbl_friend_finder");
  j__Z12createScreenI20MinecraftScreenModel31XblFriendFinderScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v22,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v19 = v22;
  v20 = v23;
  if ( v23 )
    v8 = (unsigned int *)(v23 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  result = SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v19);
  v11 = v20;
  if ( v20 )
    v12 = (unsigned int *)(v20 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v14 = v23;
    v15 = (unsigned int *)(v23 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return result;
}


void __fastcall SceneFactory::createResourcePackPurchaseScreen(unsigned __int64 *a1, int a2, StoreCatalogItemModel *a3, int a4)
{
  int v4; // r4@1
  StoreCatalogItemModel *v5; // r5@1
  MinecraftGame *v6; // r6@1
  unsigned __int64 *v7; // r8@1
  ClientInstance *v8; // r7@1
  void **v9; // r0@1
  int v10; // r4@1
  unsigned int *v11; // r1@2
  unsigned int v12; // r0@4
  unsigned int *v13; // r5@8
  unsigned int v14; // r0@10
  void *v15; // r0@15
  unsigned int *v16; // r2@17
  signed int v17; // r1@19
  int v18; // [sp+14h] [bp-2Ch]@1
  char v19; // [sp+18h] [bp-28h]@1
  int v20; // [sp+1Ch] [bp-24h]@1
  int v21; // [sp+20h] [bp-20h]@1

  v4 = a2;
  v21 = a4;
  v5 = a3;
  v6 = *(MinecraftGame **)a2;
  v7 = a1;
  v8 = *(ClientInstance **)(a2 + 8);
  v9 = sub_DA7364((void **)&v18, "resource_pack_purchase.resource_pack_purchase");
  createScreen<MainMenuScreenModel,ResourcePackPurchaseScreenController,StoreCatalogItemModel const&,StoreNavigationOrigin &>(
    &v19,
    v4,
    v6,
    v8,
    (const char **)v9,
    v5,
    &v21);
  SceneFactory::_createScreen(v7, v4, (unsigned __int64 *)&v19);
  v10 = v20;
  if ( v20 )
  {
    v11 = (unsigned int *)(v20 + 4);
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
  v15 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v18 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
}


void __fastcall SceneFactory::createServerForm(unsigned __int64 *a1, int a2, int a3, int *a4)
{
  int v4; // r4@1
  int *v5; // r6@1
  MinecraftGame *v6; // r7@1
  unsigned __int64 *v7; // r8@1
  ClientInstance *v8; // r5@1
  void **v9; // r0@1
  int v10; // r4@1
  unsigned int *v11; // r1@2
  unsigned int v12; // r0@4
  unsigned int *v13; // r5@8
  unsigned int v14; // r0@10
  void *v15; // r0@15
  unsigned int *v16; // r2@17
  signed int v17; // r1@19
  int v18; // [sp+14h] [bp-2Ch]@1
  char v19; // [sp+18h] [bp-28h]@1
  int v20; // [sp+1Ch] [bp-24h]@1
  int v21; // [sp+20h] [bp-20h]@1

  v4 = a2;
  v21 = a3;
  v5 = a4;
  v6 = *(MinecraftGame **)a2;
  v7 = a1;
  v8 = *(ClientInstance **)(a2 + 8);
  v9 = sub_DA7364((void **)&v18, "server_form.main_screen");
  createScreen<MainMenuScreenModel,ServerFormScreenController,unsigned int &,std::string const&>(
    &v19,
    v4,
    v6,
    v8,
    (const char **)v9,
    &v21,
    v5);
  SceneFactory::_createScreen(v7, v4, (unsigned __int64 *)&v19);
  v10 = v20;
  if ( v20 )
  {
    v11 = (unsigned int *)(v20 + 4);
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
  v15 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v18 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
}


void __fastcall SceneFactory::createFileUploadProgressScreen(unsigned __int64 *a1, int a2, int *a3, int *a4, char a5)
{
  unsigned __int64 *v5; // r8@1
  int v6; // r4@1
  int *v7; // r9@1
  MinecraftGame *v8; // r7@1
  int *v9; // r6@1
  ClientInstance *v10; // r5@1
  void **v11; // r0@1
  int v12; // r4@1
  unsigned int *v13; // r1@2
  unsigned int v14; // r0@4
  unsigned int *v15; // r5@8
  unsigned int v16; // r0@10
  void *v17; // r0@15
  unsigned int *v18; // r2@17
  signed int v19; // r1@19
  int v20; // [sp+18h] [bp-30h]@1
  char v21; // [sp+1Ch] [bp-2Ch]@1
  int v22; // [sp+20h] [bp-28h]@1
  char v23; // [sp+27h] [bp-21h]@1

  v5 = a1;
  v6 = a2;
  v23 = a5;
  v7 = a4;
  v8 = *(MinecraftGame **)a2;
  v9 = a3;
  v10 = *(ClientInstance **)(a2 + 8);
  v11 = sub_DA7364((void **)&v20, "file_upload.file_transmission_screen");
  createScreen<MainMenuScreenModel,FileUploadScreenController,std::string const&,std::string const&,bool &>(
    &v21,
    v6,
    v8,
    v10,
    (const char **)v11,
    v9,
    v7,
    &v23);
  SceneFactory::_createScreen(v5, v6, (unsigned __int64 *)&v21);
  v12 = v22;
  if ( v22 )
  {
    v13 = (unsigned int *)(v22 + 4);
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
  }
  v17 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v20 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
}


void __fastcall SceneFactory::createThirdPartyStoreScreen(SceneFactory *this, int a2)
{
  SceneFactory::createThirdPartyStoreScreen(this, a2);
}


void __fastcall SceneFactory::createRemixPreviewScreen(SceneFactory *this, const glTFExportData *a2, int a3)
{
  const glTFExportData *v3; // r4@1
  MinecraftGame *v4; // r6@1
  int v5; // r5@1
  ClientInstance *v6; // r7@1
  unsigned __int64 *v7; // r8@1
  void **v8; // r0@1
  int v9; // r4@1
  unsigned int *v10; // r1@2
  unsigned int v11; // r0@4
  unsigned int *v12; // r5@8
  unsigned int v13; // r0@10
  void *v14; // r0@15
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  int v17; // [sp+Ch] [bp-2Ch]@1
  char v18; // [sp+10h] [bp-28h]@1
  int v19; // [sp+14h] [bp-24h]@1

  v3 = a2;
  v4 = *(MinecraftGame **)a2;
  v5 = a3;
  v6 = (ClientInstance *)*((_DWORD *)a2 + 2);
  v7 = (unsigned __int64 *)this;
  v8 = sub_DA7364((void **)&v17, "remix_preview.remix_preview_screen");
  createScreen<ClientInstanceScreenModel,RemixPreviewScreenController,glTFExportData const&>(
    &v18,
    (int)v3,
    v4,
    v6,
    (const char **)v8,
    v5);
  SceneFactory::_createScreen(v7, (int)v3, (unsigned __int64 *)&v18);
  v9 = v19;
  if ( v19 )
  {
    v10 = (unsigned int *)(v19 + 4);
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
  }
  v14 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
}


void __fastcall SceneFactory::createChestScreen(SceneFactory *this, Player *a2, const BlockPos *a3, const BlockPos *a4)
{
  SceneFactory::createChestScreen(this, a2, a3, a4);
}


void __fastcall SceneFactory::_calculateSafeZoneSize(SceneFactory *this, float a2, int _R2)
{
  SceneFactory *v7; // r4@1
  const void **v9; // r0@2
  char *v10; // r0@4
  void *v11; // r0@5
  unsigned int *v12; // r2@7
  signed int v13; // r1@9
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  int v16; // [sp+0h] [bp-28h]@2
  char *v17; // [sp+4h] [bp-24h]@2

  __asm { VMOV.F32        S0, #1.0 }
  v7 = this;
  __asm
  {
    VMOV            S2, R2
    VSUB.F32        S0, S0, S2
    VLDR            S2, =50.0
    VMUL.F32        S0, S0, S2
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    Json::Value::Value(this, 0);
  else
    __asm { VMOV            R1, S0 }
    Util::toString((Util *)&v16, _R1);
    v9 = sub_DA73D4((const void **)&v16, "%", 1u);
    v17 = (char *)*v9;
    *v9 = &unk_28898CC;
    Json::Value::Value((int)v7, (const char **)&v17);
    v10 = v17 - 12;
    if ( (int *)(v17 - 12) != &dword_28898C0 )
    {
      v12 = (unsigned int *)(v17 - 4);
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
        j_j_j_j_j__ZdlPv_9(v10);
    }
    v11 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v16 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j_j__ZdlPv_9(v11);
}


void __fastcall SceneFactory::createChestScreen(unsigned __int64 *a1, int a2, int a3, int a4, __int64 a5)
{
  SceneFactory::createChestScreen(a1, a2, a3, a4, a5);
}


unsigned int __fastcall SceneFactory::createSafeZoneScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  unsigned int result; // r0@8
  int v11; // r4@8
  unsigned int *v12; // r1@9
  unsigned int *v13; // r5@15
  int v14; // r4@22
  unsigned int *v15; // r1@23
  unsigned int *v16; // r5@29
  unsigned int *v17; // r2@37
  signed int v18; // r1@39
  int v19; // [sp+8h] [bp-30h]@2
  int v20; // [sp+Ch] [bp-2Ch]@2
  int v21; // [sp+14h] [bp-24h]@1
  int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v21, "safe_zone.safe_zone_screen");
  j__Z12createScreenI20MinecraftScreenModel24SafeZoneScreenControllerJEESt10shared_ptrI10BaseScreenER12SceneFactoryR13MinecraftGameR14ClientInstanceRKSsDpOT1_(
    &v22,
    v2,
    v3,
    v5,
    (const char **)v6);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v19 = v22;
  v20 = v23;
  if ( v23 )
    v8 = (unsigned int *)(v23 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  result = SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v19);
  v11 = v20;
  if ( v20 )
    v12 = (unsigned int *)(v20 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v14 = v23;
    v15 = (unsigned int *)(v23 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return result;
}


unsigned int __fastcall SceneFactory::createCellularDataWarningScreen(unsigned __int64 *a1, int a2, int a3)
{
  int v3; // r4@1
  MinecraftGame *v4; // r6@1
  int v5; // r5@1
  ClientInstance *v6; // r7@1
  unsigned __int64 *v7; // r8@1
  void **v8; // r0@1
  void *v9; // r0@1
  unsigned int *v10; // r0@3
  unsigned int v11; // r1@5
  unsigned int result; // r0@8
  int v13; // r4@8
  unsigned int *v14; // r1@9
  unsigned int *v15; // r5@15
  int v16; // r4@22
  unsigned int *v17; // r1@23
  unsigned int *v18; // r5@29
  unsigned int *v19; // r2@37
  signed int v20; // r1@39
  int v21; // [sp+Ch] [bp-34h]@2
  int v22; // [sp+10h] [bp-30h]@2
  int v23; // [sp+18h] [bp-28h]@1
  int v24; // [sp+1Ch] [bp-24h]@1
  int v25; // [sp+20h] [bp-20h]@2

  v3 = a2;
  v4 = *(MinecraftGame **)a2;
  v5 = a3;
  v6 = *(ClientInstance **)(a2 + 8);
  v7 = a1;
  v8 = sub_DA7364((void **)&v23, "common.modal_screen");
  createScreen<MinecraftScreenModel,CellularDataWarningScreenController,std::function<void ()(bool)> &>(
    &v24,
    v3,
    v4,
    v6,
    (const char **)v8,
    v5);
  v9 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  }
  v21 = v24;
  v22 = v25;
  if ( v25 )
    v10 = (unsigned int *)(v25 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
      ++*v10;
  result = SceneFactory::_createScreen(v7, v3, (unsigned __int64 *)&v21);
  v13 = v22;
  if ( v22 )
    v14 = (unsigned int *)(v22 + 4);
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
      result = (*v14)--;
    if ( result == 1 )
      v15 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
      }
      else
        result = (*v15)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  v16 = v25;
    v17 = (unsigned int *)(v25 + 4);
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
      result = (*v17)--;
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
        result = (*v18)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  return result;
}


void __fastcall SceneFactory::createDevConsole(SceneFactory *this, int a2)
{
  SceneFactory::createDevConsole(this, a2);
}


int __fastcall SceneFactory::SceneFactory(int a1, MinecraftGame *a2, ClientInstance *a3)
{
  int v3; // r4@1
  MinecraftGame *v4; // r7@1
  ClientInstance *v5; // r5@1
  MinecraftUISoundPlayer *v6; // r6@1

  v3 = a1;
  v4 = a2;
  *(_DWORD *)a1 = a2;
  *(_BYTE *)(a1 + 4) = 0;
  v5 = a3;
  *(_DWORD *)(a1 + 8) = a3;
  v6 = (MinecraftUISoundPlayer *)operator new(8u);
  MinecraftUISoundPlayer::MinecraftUISoundPlayer(v6, v4);
  *(_DWORD *)(v3 + 12) = v6;
  *(_DWORD *)(v3 + 16) = ClientInstance::getCachedScenes(v5);
  return v3;
}


void __fastcall SceneFactory::createResourcePackPurchaseScreen(unsigned __int64 *a1, int a2, StoreCatalogItemModel *a3, int a4)
{
  SceneFactory::createResourcePackPurchaseScreen(a1, a2, a3, a4);
}


unsigned int __fastcall SceneFactory::createLeaveLevelScreen(_QWORD *a1, int a2, int *a3, int *a4, char a5)
{
  _QWORD *v5; // r8@1
  int v6; // r6@1
  int *v7; // r9@1
  int *v8; // r10@1
  int v9; // r0@1
  int v10; // r7@1
  MinecraftGame *v11; // r4@1
  ClientInstance *v12; // r5@1
  void **v13; // r0@3
  void *v14; // r0@3
  __int64 v15; // kr00_8@4
  unsigned int *v16; // r0@5
  unsigned int v17; // r1@7
  int v18; // r1@11
  void (__fastcall *v19)(_DWORD, int *); // r2@11
  unsigned int *v20; // r0@15
  unsigned int v21; // r1@17
  unsigned int result; // r0@22
  unsigned int *v23; // r1@23
  unsigned int *v24; // r5@29
  int v25; // r4@36
  unsigned int *v26; // r1@37
  unsigned int *v27; // r5@43
  unsigned int *v28; // r2@51
  signed int v29; // r1@53
  int v30; // [sp+10h] [bp-40h]@10
  int v31; // [sp+18h] [bp-38h]@3
  char v32; // [sp+1Ch] [bp-34h]@3
  int v33; // [sp+20h] [bp-30h]@4
  char v34; // [sp+27h] [bp-29h]@1
  int v35; // [sp+28h] [bp-28h]@11

  v5 = a1;
  v6 = a2;
  v34 = a5;
  v7 = a4;
  v8 = a3;
  v9 = ClientInstance::getHoloInput(*(ClientInstance **)(a2 + 8));
  v10 = (*(int (**)(void))(*(_DWORD *)v9 + 44))();
  v11 = *(MinecraftGame **)v6;
  v12 = *(ClientInstance **)(v6 + 8);
  if ( v10 )
    v10 = 5;
  v13 = sub_DA7364((void **)&v31, "progress.world_saving_progress_screen");
  createScreen<MinecraftScreenModel,LeaveLevelProgressScreenController,std::string const&,std::unique_ptr<LeaveLevelProgressHandler,std::default_delete<LeaveLevelProgressHandler>>,bool &>(
    &v32,
    v6,
    v11,
    v12,
    (const char **)v13,
    v8,
    v7,
    &v34);
  v14 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
  {
    v28 = (unsigned int *)(v31 - 4);
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
      j_j_j_j_j__ZdlPv_9(v14);
  }
  v15 = *(_QWORD *)&v32;
  if ( v33 )
    v16 = (unsigned int *)(v33 + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 + 1, v16) );
      ++*v16;
  createScreenSetupStrategy((DefaultUIScreenSetupCleanupStrategy **)&v30, *(ClientInstance **)(v6 + 8), v10);
  if ( (_DWORD)v15 )
    v18 = v30;
    v19 = *(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)v15 + 272);
    v30 = 0;
    v35 = v18;
    v19(v15, &v35);
    if ( v35 )
      (*(void (**)(void))(*(_DWORD *)v35 + 4))();
    v35 = 0;
  *v5 = v15;
  if ( HIDWORD(v15) )
    v20 = (unsigned int *)(HIDWORD(v15) + 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 + 1, v20) );
      ++*v20;
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  result = 0;
  v30 = 0;
    v23 = (unsigned int *)(HIDWORD(v15) + 4);
        result = __ldrex(v23);
      while ( __strex(result - 1, v23) );
      result = (*v23)--;
    if ( result == 1 )
      v24 = (unsigned int *)(HIDWORD(v15) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v15) + 8))(HIDWORD(v15));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v24);
        while ( __strex(result - 1, v24) );
      }
      else
        result = (*v24)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v15) + 12))(HIDWORD(v15));
  v25 = v33;
    v26 = (unsigned int *)(v33 + 4);
        result = __ldrex(v26);
      while ( __strex(result - 1, v26) );
      result = (*v26)--;
      v27 = (unsigned int *)(v25 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
          result = __ldrex(v27);
        while ( __strex(result - 1, v27) );
        result = (*v27)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
  return result;
}


unsigned int __fastcall SceneFactory::createChatScreen(SceneFactory *this, int a2)
{
  int v2; // r4@1
  MinecraftGame *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  ClientInstance *v5; // r7@1
  void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  unsigned int result; // r0@8
  int v11; // r4@8
  unsigned int *v12; // r1@9
  unsigned int *v13; // r5@15
  int v14; // r4@22
  unsigned int *v15; // r1@23
  unsigned int *v16; // r5@29
  unsigned int *v17; // r2@37
  signed int v18; // r1@39
  int v19; // [sp+Ch] [bp-34h]@2
  int v20; // [sp+10h] [bp-30h]@2
  char v21; // [sp+17h] [bp-29h]@1
  int v22; // [sp+1Ch] [bp-24h]@1
  int v23; // [sp+20h] [bp-20h]@1
  int v24; // [sp+24h] [bp-1Ch]@2

  v2 = a2;
  v3 = *(MinecraftGame **)a2;
  v4 = (unsigned __int64 *)this;
  v5 = *(ClientInstance **)(a2 + 8);
  v6 = sub_DA7364((void **)&v22, "chat.chat_screen");
  v21 = 0;
  createScreen<ClientInstanceScreenModel,ChatScreenController,bool>(&v23, v2, v3, v5, (const char **)v6, &v21);
  v7 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v19 = v23;
  v20 = v24;
  if ( v24 )
    v8 = (unsigned int *)(v24 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  result = SceneFactory::_createScreen(v4, v2, (unsigned __int64 *)&v19);
  v11 = v20;
  if ( v20 )
    v12 = (unsigned int *)(v20 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v14 = v24;
    v15 = (unsigned int *)(v24 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return result;
}
