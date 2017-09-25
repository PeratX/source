

void __fastcall FileUploadScreenController::_registerEventHandlers(FileUploadScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  void *v5; // r0@3
  int v6; // r5@4
  _DWORD *v7; // r0@4
  __int64 v8; // r1@4
  void *v9; // r0@6
  int v10; // r5@7
  _DWORD *v11; // r0@7
  __int64 v12; // r1@7
  void *v13; // r0@9
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  _DWORD *v20; // [sp+4h] [bp-5Ch]@7
  __int64 v21; // [sp+Ch] [bp-54h]@7
  int v22; // [sp+18h] [bp-48h]@7
  _DWORD *v23; // [sp+1Ch] [bp-44h]@4
  __int64 v24; // [sp+24h] [bp-3Ch]@4
  int v25; // [sp+30h] [bp-30h]@4
  _DWORD *v26; // [sp+34h] [bp-2Ch]@1
  __int64 v27; // [sp+3Ch] [bp-24h]@1
  int v28; // [sp+48h] [bp-18h]@1

  v1 = this;
  sub_119C884((void **)&v28, "button.file_upload_play");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v28);
  v3 = operator new(4u);
  LODWORD(v4) = sub_1199B72;
  *v3 = v1;
  HIDWORD(v4) = sub_1199B60;
  v26 = v3;
  v27 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v26);
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  v5 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v28 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  sub_119C884((void **)&v25, "button.file_upload_cancel");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v25);
  v7 = operator new(4u);
  LODWORD(v8) = sub_1199CE4;
  *v7 = v1;
  HIDWORD(v8) = sub_1199BA8;
  v23 = v7;
  v24 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v23);
  if ( (_DWORD)v24 )
    ((void (*)(void))v24)();
  v9 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v25 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v22, "button.file_upload_wifi_warning_continue");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v22);
  v11 = operator new(4u);
  LODWORD(v12) = sub_1199D2E;
  *v11 = v1;
  HIDWORD(v12) = sub_1199D1A;
  v20 = v11;
  v21 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v20);
  if ( (_DWORD)v21 )
    ((void (*)(void))v21)();
  v13 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v22 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
}


signed int __fastcall FileUploadScreenController::_canCancelUpload(FileUploadScreenController *this)
{
  FileUploadScreenController *v1; // r4@1
  int v2; // r0@2
  bool v3; // zf@2
  FileUploadManager *v4; // r0@6
  FileUploadManager *v5; // r0@7
  signed int result; // r0@8
  FileUploadManager *v7; // r0@9
  FileUploadManager *v8; // r0@11
  int v9; // r1@11

  v1 = this;
  if ( !MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)this + 106), 1) )
  {
    v2 = MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)v1 + 106), 0);
    v3 = v2 == 1;
    if ( v2 == 1 )
      v3 = *((_BYTE *)v1 + 448) == 0;
    if ( v3 )
    {
      v4 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*((MainMenuScreenModel **)v1 + 106));
      if ( FileUploadManager::getUploadState(v4) != 5 )
        goto LABEL_15;
    }
  }
  v5 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*((MainMenuScreenModel **)v1 + 106));
  if ( FileUploadManager::getUploadState(v5) != 4 )
    v7 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*((MainMenuScreenModel **)v1 + 106));
    if ( FileUploadManager::canCancelUpload(v7) )
      result = 1;
    else
      v8 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*((MainMenuScreenModel **)v1 + 106));
      v9 = FileUploadManager::getUploadState(v8);
      result = 0;
      if ( v9 == 5 )
        result = 1;
  else
LABEL_15:
    result = 0;
  return result;
}


__int64 __fastcall FileUploadScreenController::_getFileSize(FileUploadScreenController *this)
{
  __int64 result; // r0@2
  FileUploadManager *v2; // r0@3

  if ( *((_BYTE *)this + 450) )
  {
    v2 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*((MainMenuScreenModel **)this + 106));
    result = j_j_j__ZNK17FileUploadManager11getFileSizeEv(v2);
  }
  else
    result = 0LL;
  return result;
}


void __fastcall FileUploadScreenController::~FileUploadScreenController(FileUploadScreenController *this)
{
  FileUploadScreenController::~FileUploadScreenController(this);
}


void __fastcall FileUploadScreenController::_registerEventHandlers(FileUploadScreenController *this)
{
  FileUploadScreenController::_registerEventHandlers(this);
}


int __fastcall FileUploadScreenController::tick(FileUploadScreenController *this)
{
  int v2; // r4@1
  FileUploadManager *v3; // r6@1
  int v9; // r0@3
  int v10; // r9@6
  FileUploadManager *v11; // r0@7
  unsigned int v12; // r6@7
  unsigned int v13; // r7@7
  __int64 v14; // kr00_8@7
  FileUploadManager *v15; // r0@8
  int v17; // r9@9
  FileUploadManager *v18; // r0@10
  unsigned int v19; // r6@10
  unsigned int v20; // r7@10
  __int64 v21; // kr08_8@10
  FileUploadManager *v22; // r0@11
  void *v24; // r0@13
  unsigned int *v25; // r2@14
  signed int v26; // r1@16
  signed int v27; // r6@21
  FileUploadManager *v28; // r0@24
  FileUploadManager *v29; // r0@30
  unsigned int *v31; // r2@33
  signed int v32; // r1@35
  double v33; // [sp+0h] [bp-58h]@0
  __int64 v34; // [sp+10h] [bp-48h]@0
  int v35; // [sp+18h] [bp-40h]@9
  int v36; // [sp+1Ch] [bp-3Ch]@6

  _R5 = this;
  v2 = MinecraftScreenController::tick(this);
  v3 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*((MainMenuScreenModel **)_R5 + 106));
  FileUploadManager::update(v3);
  _R0 = FileUploadManager::getUploadProgress(v3);
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, [R5,#0x1BC]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    __asm { VSTRNE          S0, [R5,#0x1BC] }
    v2 |= 1u;
  v9 = FileUploadManager::getUploadState(v3);
  if ( v9 != *((_DWORD *)_R5 + 113) )
    *((_DWORD *)_R5 + 113) = v9;
    if ( v9 == 5 )
    {
      v17 = *((_DWORD *)_R5 + 106);
      Util::toString(&v35, (int *)_R5 + 108);
      __asm { VLDR            S16, =0.0 }
      if ( *((_BYTE *)_R5 + 450) )
      {
        v18 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*((MainMenuScreenModel **)_R5 + 106));
        v21 = FileUploadManager::getFileSize(v18);
        v19 = HIDWORD(v21);
        v20 = v21;
        if ( *((_BYTE *)_R5 + 450) )
        {
          v22 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*((MainMenuScreenModel **)_R5 + 106));
          _R0 = FileUploadManager::getUploadProgress(v22);
          __asm { VMOV            S16, R0 }
        }
      }
      else
        v20 = 0;
        v19 = 0;
      __asm { VCVT.F64.F32    D0, S16 }
      LODWORD(v33) = &v35;
      __asm { VSTR            D0, [SP,#0x58+var_48] }
      MinecraftScreenModel::fireEventFileTransmissionState(v17, 1, 0, 1, v33, __PAIR__(v19, v20), v34);
      v24 = (void *)(v35 - 12);
      if ( (int *)(v35 - 12) != &dword_28898C0 )
        v31 = (unsigned int *)(v35 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
        else
          v32 = (*v31)--;
        if ( v32 <= 0 )
          goto LABEL_42;
    }
    else if ( v9 == 4 )
      v10 = *((_DWORD *)_R5 + 106);
      Util::toString(&v36, (int *)_R5 + 108);
        v11 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*((MainMenuScreenModel **)_R5 + 106));
        v14 = FileUploadManager::getFileSize(v11);
        v12 = HIDWORD(v14);
        v13 = v14;
          v15 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*((MainMenuScreenModel **)_R5 + 106));
          _R0 = FileUploadManager::getUploadProgress(v15);
        v13 = 0;
        v12 = 0;
      LODWORD(v33) = &v36;
      MinecraftScreenModel::fireEventFileTransmissionState(v10, 1, 2, 1, v33, __PAIR__(v12, v13), v34);
      v24 = (void *)(v36 - 12);
      if ( (int *)(v36 - 12) != &dword_28898C0 )
        v25 = (unsigned int *)(v36 - 4);
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          v26 = (*v25)--;
        if ( v26 <= 0 )
LABEL_42:
          j_j_j_j_j__ZdlPv_9_1(v24);
          goto LABEL_20;
LABEL_20:
  if ( MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)_R5 + 106), 1) )
    v27 = 0;
  else
    if ( MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)_R5 + 106), 0) == 1 )
      v27 = 0;
      if ( !*((_BYTE *)_R5 + 448) )
        v28 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*((MainMenuScreenModel **)_R5 + 106));
        if ( FileUploadManager::getUploadState(v28) != 5 )
          v27 = 1;
  if ( v27 != *((_BYTE *)_R5 + 449) )
    *((_BYTE *)_R5 + 449) = v27;
  if ( !MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)_R5 + 106), 0) )
    if ( *((_BYTE *)_R5 + 450) )
      v29 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*((MainMenuScreenModel **)_R5 + 106));
      FileUploadManager::cancelUpload(v29);
  return v2;
}


signed int __fastcall FileUploadScreenController::_isUploadDone(FileUploadScreenController *this)
{
  FileUploadManager *v1; // r0@1
  int v2; // r0@1
  signed int v3; // r1@1

  v1 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*((MainMenuScreenModel **)this + 106));
  v2 = FileUploadManager::getUploadState(v1);
  v3 = 0;
  if ( v2 == 4 )
    v3 = 1;
  return v3;
}


int __fastcall FileUploadScreenController::FileUploadScreenController(int a1, int a2, int *a3, int *a4, char a5)
{
  int v5; // r4@1
  int *v6; // r8@1
  int v7; // r0@1
  int *v8; // r7@1
  unsigned int *v9; // r0@2
  unsigned int v10; // r1@4
  int v11; // r5@7
  unsigned int *v12; // r1@8
  unsigned int v13; // r0@10
  unsigned int *v14; // r6@14
  unsigned int v15; // r0@16
  int v16; // r0@22
  bool v17; // zf@22
  FileUploadManager *v18; // r0@26
  int v20; // [sp+0h] [bp-28h]@1
  int v21; // [sp+4h] [bp-24h]@1

  v5 = a1;
  v20 = *(_DWORD *)a2;
  v6 = a4;
  v7 = *(_DWORD *)(a2 + 4);
  v8 = a3;
  v21 = v7;
  if ( v7 )
  {
    v9 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
    }
    else
      ++*v9;
  }
  MainMenuScreenController::MainMenuScreenController(v5, (int)&v20);
  v11 = v21;
  if ( v21 )
    v12 = (unsigned int *)(v21 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  *(_DWORD *)v5 = &off_26E1E18;
  sub_119C854((int *)(v5 + 432), v8);
  sub_119C854((int *)(v5 + 436), v6);
  *(_BYTE *)(v5 + 440) = a5;
  *(_BYTE *)(v5 + 450) = 0;
  *(_WORD *)(v5 + 448) = 0;
  *(_DWORD *)(v5 + 444) = 0;
  *(_DWORD *)(v5 + 452) = 1;
  MinecraftScreenController::_setExitBehavior(v5, 3);
  FileUploadScreenController::_registerEventHandlers((FileUploadScreenController *)v5);
  FileUploadScreenController::_registerBindings((FileUploadScreenController *)v5);
  if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v5 + 424), 1) )
    goto LABEL_32;
  v16 = MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v5 + 424), 0);
  v17 = v16 == 1;
  if ( v16 == 1 )
    v17 = *(_BYTE *)(v5 + 448) == 0;
  if ( !v17
    || (v18 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*(MainMenuScreenModel **)(v5 + 424)),
        FileUploadManager::getUploadState(v18) == 5) )
LABEL_32:
    if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v5 + 424), 0) == 1 )
      FileUploadScreenController::_startUpload((FileUploadScreenController *)v5);
  return v5;
}


void __fastcall FileUploadScreenController::_startUpload(FileUploadScreenController *this)
{
  FileUploadScreenController::_startUpload(this);
}


int __fastcall FileUploadScreenController::_getFileProgress(FileUploadScreenController *this)
{
  int result; // r0@2
  FileUploadManager *v2; // r0@3

  if ( *((_BYTE *)this + 450) )
  {
    v2 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*((MainMenuScreenModel **)this + 106));
    result = j_j_j__ZNK17FileUploadManager17getUploadProgressEv(v2);
  }
  else
    result = 0;
  return result;
}


void __fastcall FileUploadScreenController::_startUpload(FileUploadScreenController *this)
{
  FileUploadScreenController *v1; // r4@1
  int v2; // r0@3
  int *v3; // r2@3
  int v4; // r5@6
  FileUploadManager *v9; // r0@7
  unsigned int v10; // r6@7
  unsigned int v11; // r7@7
  __int64 v12; // kr00_8@7
  FileUploadManager *v13; // r0@8
  void *v15; // r0@10
  unsigned int *v16; // r2@12
  signed int v17; // r1@14
  double v18; // [sp+0h] [bp-48h]@0
  __int64 v19; // [sp+10h] [bp-38h]@0
  int v20; // [sp+1Ch] [bp-2Ch]@6

  v1 = this;
  if ( !*((_BYTE *)this + 450) && MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)this + 106), 0) == 1 )
  {
    v2 = MainMenuScreenModel::getWorldFileUploadManager(*((MainMenuScreenModel **)v1 + 106));
    v3 = (int *)((char *)v1 + 436);
    if ( *((_BYTE *)v1 + 440) )
      WorldFileUploadManager::uploadLocalWorldLevel(v2, (int *)v1 + 108, v3);
    else
      WorldFileUploadManager::uploadArchivedFile(v2, (int *)v1 + 108, (int)v3);
    *((_BYTE *)v1 + 450) = 1;
    v4 = *((_DWORD *)v1 + 106);
    Util::toString(&v20, (int *)v1 + 108);
    __asm { VLDR            S16, =0.0 }
    if ( *((_BYTE *)v1 + 450) )
    {
      v9 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*((MainMenuScreenModel **)v1 + 106));
      v12 = FileUploadManager::getFileSize(v9);
      v10 = HIDWORD(v12);
      v11 = v12;
      if ( *((_BYTE *)v1 + 450) )
      {
        v13 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*((MainMenuScreenModel **)v1 + 106));
        _R0 = FileUploadManager::getUploadProgress(v13);
        __asm { VMOV            S16, R0 }
      }
    }
      v11 = 0;
      v10 = 0;
    __asm { VCVT.F64.F32    D0, S16 }
    LODWORD(v18) = &v20;
    __asm { VSTR            D0, [SP,#0x48+var_38] }
    MinecraftScreenModel::fireEventFileTransmissionState(v4, 1, 1, 1, v18, __PAIR__(v10, v11), v19);
    v15 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v20 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      else
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
  }
}


FileUploadScreenController *__fastcall FileUploadScreenController::~FileUploadScreenController(FileUploadScreenController *this)
{
  FileUploadScreenController *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E1E18;
  v2 = *((_DWORD *)this + 109);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 108);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  MainMenuScreenController::~MainMenuScreenController(v1);
  return v1;
}


signed int __fastcall FileUploadScreenController::_isUploadFailed(FileUploadScreenController *this)
{
  FileUploadManager *v1; // r0@1
  int v2; // r0@1
  signed int v3; // r1@1

  v1 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*((MainMenuScreenModel **)this + 106));
  v2 = FileUploadManager::getUploadState(v1);
  v3 = 0;
  if ( v2 == 5 )
    v3 = 1;
  return v3;
}


void __fastcall FileUploadScreenController::~FileUploadScreenController(FileUploadScreenController *this)
{
  FileUploadScreenController *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E1E18;
  v2 = *((_DWORD *)this + 109);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 108);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  MainMenuScreenController::~MainMenuScreenController(v1);
  operator delete((void *)v1);
}


void __fastcall FileUploadScreenController::_registerBindings(FileUploadScreenController *this)
{
  FileUploadScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  _DWORD *v5; // r0@5
  __int64 v6; // r1@5
  __int64 v7; // r1@5
  _DWORD *v8; // r0@9
  __int64 v9; // r1@9
  __int64 v10; // r1@9
  _DWORD *v11; // r0@13
  __int64 v12; // r1@13
  __int64 v13; // r1@13
  __int64 v14; // r1@17
  _DWORD *v15; // r0@21
  __int64 v16; // r1@21
  __int64 v17; // r1@21
  _DWORD *v18; // r0@25
  __int64 v19; // r1@25
  __int64 v20; // r1@25
  _DWORD *v21; // r0@29
  __int64 v22; // r1@29
  __int64 v23; // r1@29
  _DWORD *v24; // r0@33
  __int64 v25; // r1@33
  __int64 v26; // r1@33
  _DWORD *v27; // r0@37
  __int64 v28; // r1@37
  __int64 v29; // r1@37
  _DWORD *v30; // r0@41
  __int64 v31; // r1@41
  __int64 v32; // r1@41
  _DWORD *v33; // r0@45
  __int64 v34; // r1@45
  __int64 v35; // r1@45
  _DWORD *v36; // r0@49
  __int64 v37; // r1@49
  __int64 v38; // r1@49
  void *v39; // [sp+4h] [bp-1DCh]@49
  __int64 v40; // [sp+Ch] [bp-1D4h]@49
  _DWORD *v41; // [sp+14h] [bp-1CCh]@49
  __int64 v42; // [sp+1Ch] [bp-1C4h]@49
  int v43; // [sp+24h] [bp-1BCh]@49
  void *v44; // [sp+28h] [bp-1B8h]@45
  __int64 v45; // [sp+30h] [bp-1B0h]@45
  _DWORD *v46; // [sp+38h] [bp-1A8h]@45
  __int64 v47; // [sp+40h] [bp-1A0h]@45
  int v48; // [sp+48h] [bp-198h]@45
  void *v49; // [sp+4Ch] [bp-194h]@41
  __int64 v50; // [sp+54h] [bp-18Ch]@41
  _DWORD *v51; // [sp+5Ch] [bp-184h]@41
  __int64 v52; // [sp+64h] [bp-17Ch]@41
  int v53; // [sp+6Ch] [bp-174h]@41
  void *v54; // [sp+70h] [bp-170h]@37
  __int64 v55; // [sp+78h] [bp-168h]@37
  _DWORD *v56; // [sp+80h] [bp-160h]@37
  __int64 v57; // [sp+88h] [bp-158h]@37
  int v58; // [sp+90h] [bp-150h]@37
  void *v59; // [sp+94h] [bp-14Ch]@33
  __int64 v60; // [sp+9Ch] [bp-144h]@33
  _DWORD *v61; // [sp+A4h] [bp-13Ch]@33
  __int64 v62; // [sp+ACh] [bp-134h]@33
  int v63; // [sp+B4h] [bp-12Ch]@33
  void *v64; // [sp+B8h] [bp-128h]@29
  __int64 v65; // [sp+C0h] [bp-120h]@29
  _DWORD *v66; // [sp+C8h] [bp-118h]@29
  __int64 v67; // [sp+D0h] [bp-110h]@29
  int v68; // [sp+D8h] [bp-108h]@29
  void *v69; // [sp+DCh] [bp-104h]@25
  __int64 v70; // [sp+E4h] [bp-FCh]@25
  _DWORD *v71; // [sp+ECh] [bp-F4h]@25
  __int64 v72; // [sp+F4h] [bp-ECh]@25
  int v73; // [sp+FCh] [bp-E4h]@25
  void *v74; // [sp+100h] [bp-E0h]@21
  __int64 v75; // [sp+108h] [bp-D8h]@21
  _DWORD *v76; // [sp+110h] [bp-D0h]@21
  __int64 v77; // [sp+118h] [bp-C8h]@21
  int v78; // [sp+120h] [bp-C0h]@21
  void *v79; // [sp+124h] [bp-BCh]@17
  __int64 v80; // [sp+12Ch] [bp-B4h]@17
  void *v81; // [sp+134h] [bp-ACh]@17
  void (*v82)(void); // [sp+13Ch] [bp-A4h]@17
  void (__fastcall *v83)(int *); // [sp+140h] [bp-A0h]@17
  int v84; // [sp+144h] [bp-9Ch]@17
  void *v85; // [sp+148h] [bp-98h]@13
  __int64 v86; // [sp+150h] [bp-90h]@13
  _DWORD *v87; // [sp+158h] [bp-88h]@13
  __int64 v88; // [sp+160h] [bp-80h]@13
  int v89; // [sp+168h] [bp-78h]@13
  void *v90; // [sp+16Ch] [bp-74h]@9
  __int64 v91; // [sp+174h] [bp-6Ch]@9
  _DWORD *v92; // [sp+17Ch] [bp-64h]@9
  __int64 v93; // [sp+184h] [bp-5Ch]@9
  int v94; // [sp+18Ch] [bp-54h]@9
  void *v95; // [sp+190h] [bp-50h]@5
  __int64 v96; // [sp+198h] [bp-48h]@5
  _DWORD *v97; // [sp+1A0h] [bp-40h]@5
  __int64 v98; // [sp+1A8h] [bp-38h]@5
  int v99; // [sp+1B0h] [bp-30h]@5
  void *v100; // [sp+1B4h] [bp-2Ch]@1
  __int64 v101; // [sp+1BCh] [bp-24h]@1
  _DWORD *v102; // [sp+1C4h] [bp-1Ch]@1
  __int64 v103; // [sp+1CCh] [bp-14h]@1
  int v104; // [sp+1D4h] [bp-Ch]@1

  v1 = this;
  v104 = -562286346;
  v2 = operator new(4u);
  LODWORD(v3) = sub_1199D9C;
  *v2 = v1;
  HIDWORD(v3) = sub_1199D64;
  v102 = v2;
  v103 = v3;
  v100 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v101 = v4;
  ScreenController::bindFloat((int)v1, &v104, (int)&v102, (int)&v100);
  if ( (_DWORD)v101 )
    ((void (*)(void))v101)();
  if ( (_DWORD)v103 )
    ((void (*)(void))v103)();
  v99 = 885503002;
  v5 = operator new(4u);
  LODWORD(v6) = sub_1199E1A;
  *v5 = v1;
  HIDWORD(v6) = sub_1199DD2;
  v97 = v5;
  v98 = v6;
  v95 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v96 = v7;
  ScreenController::bindBool((int)v1, &v99, (int)&v97, (int)&v95);
  if ( (_DWORD)v96 )
    ((void (*)(void))v96)();
  if ( (_DWORD)v98 )
    ((void (*)(void))v98)();
  v94 = 33923360;
  v8 = operator new(4u);
  LODWORD(v9) = sub_1199E96;
  *v8 = v1;
  HIDWORD(v9) = sub_1199E50;
  v92 = v8;
  v93 = v9;
  v90 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v91 = v10;
  ScreenController::bindBool((int)v1, &v94, (int)&v92, (int)&v90);
  if ( (_DWORD)v91 )
    ((void (*)(void))v91)();
  if ( (_DWORD)v93 )
    ((void (*)(void))v93)();
  v89 = -378600938;
  v11 = operator new(4u);
  LODWORD(v12) = sub_1199F8C;
  *v11 = v1;
  HIDWORD(v12) = sub_1199ECC;
  v87 = v11;
  v88 = v12;
  v85 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v86 = v13;
  ScreenController::bindString((int)v1, &v89, (int)&v87, (int)&v85);
  if ( (_DWORD)v86 )
    ((void (*)(void))v86)();
  if ( (_DWORD)v88 )
    ((void (*)(void))v88)();
  StringHash::StringHash<char [23]>(&v84, (int)"#dual_title_left_label");
  v81 = operator new(1u);
  v82 = (void (*)(void))sub_119A090;
  v83 = sub_1199FC4;
  v79 = operator new(1u);
  LODWORD(v14) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v14) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v80 = v14;
  ScreenController::bindString((int)v1, &v84, (int)&v81, (int)&v79);
  if ( (_DWORD)v80 )
    ((void (*)(void))v80)();
  if ( v82 )
    v82();
  StringHash::StringHash<char [24]>(&v78, (int)"#dual_title_right_label");
  v15 = operator new(4u);
  LODWORD(v16) = sub_119A308;
  *v15 = v1;
  HIDWORD(v16) = sub_119A0C0;
  v76 = v15;
  v77 = v16;
  v74 = operator new(1u);
  LODWORD(v17) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v17) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v75 = v17;
  ScreenController::bindString((int)v1, &v78, (int)&v76, (int)&v74);
  if ( (_DWORD)v75 )
    ((void (*)(void))v75)();
  if ( (_DWORD)v77 )
    ((void (*)(void))v77)();
  v73 = 1339174216;
  v18 = operator new(4u);
  LODWORD(v19) = sub_119A36A;
  *v18 = v1;
  HIDWORD(v19) = sub_119A33E;
  v71 = v18;
  v72 = v19;
  v69 = operator new(1u);
  LODWORD(v20) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v20) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v70 = v20;
  ScreenController::bindBool((int)v1, &v73, (int)&v71, (int)&v69);
  if ( (_DWORD)v70 )
    ((void (*)(void))v70)();
  if ( (_DWORD)v72 )
    ((void (*)(void))v72)();
  StringHash::StringHash<char [23]>(&v68, (int)"#cancel_button_visible");
  v21 = operator new(4u);
  LODWORD(v22) = sub_119A3A8;
  *v21 = v1;
  HIDWORD(v22) = sub_119A3A0;
  v66 = v21;
  v67 = v22;
  v64 = operator new(1u);
  LODWORD(v23) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v23) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v65 = v23;
  ScreenController::bindBool((int)v1, &v68, (int)&v66, (int)&v64);
  if ( (_DWORD)v65 )
    ((void (*)(void))v65)();
  if ( (_DWORD)v67 )
    ((void (*)(void))v67)();
  StringHash::StringHash<char [25]>(&v63, (int)"#warning_button2_visible");
  v24 = operator new(4u);
  LODWORD(v25) = sub_119A424;
  *v24 = v1;
  HIDWORD(v25) = sub_119A3DE;
  v61 = v24;
  v62 = v25;
  v59 = operator new(1u);
  LODWORD(v26) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v26) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v60 = v26;
  ScreenController::bindBool((int)v1, &v63, (int)&v61, (int)&v59);
  if ( (_DWORD)v60 )
    ((void (*)(void))v60)();
  if ( (_DWORD)v62 )
    ((void (*)(void))v62)();
  StringHash::StringHash<char [24]>(&v58, (int)"#upload_content_visible");
  v27 = operator new(4u);
  LODWORD(v28) = sub_119A4A2;
  *v27 = v1;
  HIDWORD(v28) = sub_119A45A;
  v56 = v27;
  v57 = v28;
  v54 = operator new(1u);
  LODWORD(v29) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v29) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v55 = v29;
  ScreenController::bindBool((int)v1, &v58, (int)&v56, (int)&v54);
  if ( (_DWORD)v55 )
    ((void (*)(void))v55)();
  if ( (_DWORD)v57 )
    ((void (*)(void))v57)();
  StringHash::StringHash<char [25]>(&v53, (int)"#warning_content_visible");
  v30 = operator new(4u);
  LODWORD(v31) = sub_119A51E;
  *v30 = v1;
  HIDWORD(v31) = sub_119A4D8;
  v51 = v30;
  v52 = v31;
  v49 = operator new(1u);
  LODWORD(v32) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v32) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v50 = v32;
  ScreenController::bindBool((int)v1, &v53, (int)&v51, (int)&v49);
  if ( (_DWORD)v50 )
    ((void (*)(void))v50)();
  if ( (_DWORD)v52 )
    ((void (*)(void))v52)();
  v48 = 1566351654;
  v33 = operator new(4u);
  LODWORD(v34) = sub_119A5C8;
  *v33 = v1;
  HIDWORD(v34) = sub_119A554;
  v46 = v33;
  v47 = v34;
  v44 = operator new(1u);
  LODWORD(v35) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v35) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v45 = v35;
  ScreenController::bindString((int)v1, &v48, (int)&v46, (int)&v44);
  if ( (_DWORD)v45 )
    ((void (*)(void))v45)();
  if ( (_DWORD)v47 )
    ((void (*)(void))v47)();
  v43 = -625024179;
  v36 = operator new(4u);
  LODWORD(v37) = sub_119A62A;
  *v36 = v1;
  HIDWORD(v37) = sub_119A5FE;
  v41 = v36;
  v42 = v37;
  v39 = operator new(1u);
  LODWORD(v38) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v38) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v40 = v38;
  ScreenController::bindString((int)v1, &v43, (int)&v41, (int)&v39);
  if ( (_DWORD)v40 )
    ((void (*)(void))v40)();
  if ( (_DWORD)v42 )
    ((void (*)(void))v42)();
}


signed int __fastcall FileUploadScreenController::_shouldShowWifiWarning(FileUploadScreenController *this)
{
  FileUploadScreenController *v1; // r5@1
  signed int result; // r0@2
  signed int v3; // r4@3
  FileUploadManager *v4; // r0@5

  v1 = this;
  if ( MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)this + 106), 1) )
  {
    result = 0;
  }
  else
    v3 = 0;
    if ( MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)v1 + 106), 0) == 1 )
    {
      v3 = 0;
      if ( !*((_BYTE *)v1 + 448) )
      {
        v4 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*((MainMenuScreenModel **)v1 + 106));
        if ( FileUploadManager::getUploadState(v4) != 5 )
          v3 = 1;
      }
    }
    result = v3;
  return result;
}


const void **__fastcall FileUploadScreenController::getTitleLabel(FileUploadScreenController *this, int a2)
{
  int v2; // r5@1
  void **v3; // r4@1
  const void **result; // r0@2
  FileUploadManager *v5; // r0@3

  v2 = a2;
  v3 = (void **)this;
  sub_119C884((void **)this, (const char *)&unk_257BC67);
  if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v2 + 424), 0) )
  {
    result = (const void **)*(_BYTE *)(v2 + 450);
    if ( *(_BYTE *)(v2 + 450) )
    {
      v5 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*(MainMenuScreenModel **)(v2 + 424));
      result = (const void **)FileUploadManager::getUploadState(v5);
      switch ( result )
      {
        case 1u:
          result = sub_119CAD8(v3, "progressScreen.message.initializingUpload", (_BYTE *)0x29);
          break;
        case 5u:
          result = sub_119CAD8(v3, "progressScreen.message.failed", (_BYTE *)0x1D);
        case 3u:
          result = sub_119CAD8(v3, "progressScreen.message.exporting", (_BYTE *)0x20);
        case 4u:
          result = sub_119CAD8(v3, "progressScreen.message.allDone", (_BYTE *)0x1E);
        case 2u:
          result = sub_119CAD8(v3, "progressScreen.message.uploadingWorld", (_BYTE *)0x25);
        default:
          return result;
      }
    }
  }
  else
    result = sub_119CAD8(v3, "progressScreen.message.failedNoNetwork", (_BYTE *)0x26);
  return result;
}


void __fastcall FileUploadScreenController::_registerBindings(FileUploadScreenController *this)
{
  FileUploadScreenController::_registerBindings(this);
}


signed int __fastcall FileUploadScreenController::_canStartPlay(FileUploadScreenController *this)
{
  FileUploadScreenController *v1; // r5@1
  signed int v2; // r4@1
  FileUploadManager *v3; // r0@2

  v1 = this;
  v2 = 0;
  if ( MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)this + 106), 0) == 1 )
  {
    v3 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*((MainMenuScreenModel **)v1 + 106));
    if ( FileUploadManager::getUploadState(v3) == 4 )
      v2 = 1;
  }
  return v2;
}
