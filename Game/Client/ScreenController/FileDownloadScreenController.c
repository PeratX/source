

int __fastcall FileDownloadScreenController::_getDownloadProgress(FileDownloadScreenController *this)
{
  int result; // r0@2
  FileDownloadManager *v2; // r0@3

  if ( *((_BYTE *)this + 446) )
  {
    v2 = (FileDownloadManager *)MainMenuScreenModel::getWorldFileDownloadManager(*((MainMenuScreenModel **)this + 106));
    result = j_j_j__ZNK19FileDownloadManager15getDownloadSizeEv(v2);
  }
  else
    result = 0;
  return result;
}


signed int __fastcall FileDownloadScreenController::_canCancelDownload(FileDownloadScreenController *this)
{
  FileDownloadScreenController *v1; // r4@1
  int v2; // r0@2
  bool v3; // zf@2
  FileDownloadManager *v4; // r0@6
  FileDownloadManager *v5; // r0@7
  FileDownloadManager *v6; // r0@8
  signed int result; // r0@9
  FileDownloadManager *v8; // r0@10
  FileDownloadManager *v9; // r0@12
  int v10; // r1@12

  v1 = this;
  if ( !MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)this + 106), 1) )
  {
    v2 = MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)v1 + 106), 0);
    v3 = v2 == 1;
    if ( v2 == 1 )
      v3 = *((_BYTE *)v1 + 444) == 0;
    if ( v3 )
    {
      v4 = (FileDownloadManager *)MainMenuScreenModel::getWorldFileDownloadManager(*((MainMenuScreenModel **)v1 + 106));
      if ( FileDownloadManager::getDownloadState(v4) != 5 )
        goto LABEL_16;
    }
  }
  v5 = (FileDownloadManager *)MainMenuScreenModel::getWorldFileDownloadManager(*((MainMenuScreenModel **)v1 + 106));
  if ( FileDownloadManager::getDownloadState(v5) != 3
    && (v6 = (FileDownloadManager *)MainMenuScreenModel::getWorldFileDownloadManager(*((MainMenuScreenModel **)v1 + 106)),
        FileDownloadManager::getDownloadState(v6) != 4) )
    v8 = (FileDownloadManager *)MainMenuScreenModel::getWorldFileDownloadManager(*((MainMenuScreenModel **)v1 + 106));
    if ( FileDownloadManager::canCancelDownload(v8) )
      result = 1;
    else
      v9 = (FileDownloadManager *)MainMenuScreenModel::getWorldFileDownloadManager(*((MainMenuScreenModel **)v1 + 106));
      v10 = FileDownloadManager::getDownloadState(v9);
      result = 0;
      if ( v10 == 5 )
        result = 1;
  else
LABEL_16:
    result = 0;
  return result;
}


signed int __fastcall FileDownloadScreenController::_shouldShowWifiWarning(FileDownloadScreenController *this)
{
  FileDownloadScreenController *v1; // r5@1
  signed int result; // r0@2
  signed int v3; // r4@3
  FileDownloadManager *v4; // r0@5

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
      if ( !*((_BYTE *)v1 + 444) )
      {
        v4 = (FileDownloadManager *)MainMenuScreenModel::getWorldFileDownloadManager(*((MainMenuScreenModel **)v1 + 106));
        if ( FileDownloadManager::getDownloadState(v4) != 5 )
          v3 = 1;
      }
    }
    result = v3;
  return result;
}


int __fastcall FileDownloadScreenController::tick(FileDownloadScreenController *this)
{
  int v2; // r4@1
  FileDownloadManager *v3; // r6@1
  int v9; // r0@3
  int v10; // r9@6
  int v11; // r10@6
  unsigned int v12; // r1@6
  unsigned int v13; // r7@6
  void *v15; // r0@6
  unsigned int *v16; // r2@7
  signed int v17; // r1@9
  int v18; // r9@11
  int v19; // r10@11
  unsigned int v20; // r1@11
  unsigned int v21; // r7@11
  signed int v23; // r6@13
  FileDownloadManager *v24; // r0@16
  int v25; // r0@22
  unsigned int *v27; // r2@25
  signed int v28; // r1@27
  double v29; // [sp+0h] [bp-58h]@0
  __int64 v30; // [sp+10h] [bp-48h]@0
  int v31; // [sp+1Ch] [bp-3Ch]@11
  int v32; // [sp+24h] [bp-34h]@6

  _R5 = this;
  v2 = MinecraftScreenController::tick(this);
  v3 = (FileDownloadManager *)MainMenuScreenModel::getWorldFileDownloadManager(*((MainMenuScreenModel **)_R5 + 106));
  (*(void (**)(void))(*(_DWORD *)v3 + 8))();
  _R0 = (*(int (__fastcall **)(FileDownloadManager *))(*(_DWORD *)v3 + 16))(v3);
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, [R5,#0x1B8]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    __asm { VSTRNE          S0, [R5,#0x1B8] }
    v2 |= 1u;
  v9 = FileDownloadManager::getDownloadState(v3);
  if ( v9 != *((_DWORD *)_R5 + 112) )
    *((_DWORD *)_R5 + 112) = v9;
    if ( v9 == 5 )
    {
      v18 = *((_DWORD *)_R5 + 95);
      sub_119C884((void **)&v31, (const char *)&unk_257BC67);
      v19 = FileDownloadManager::getFileSize(v3);
      v21 = v20;
      _R0 = (*(int (__fastcall **)(FileDownloadManager *))(*(_DWORD *)v3 + 16))(v3);
      __asm
      {
        VMOV            S0, R0
        VCVT.F64.F32    D0, S0
      }
      LODWORD(v29) = &v31;
      __asm { VSTR            D0, [SP,#0x58+var_48] }
      MinecraftScreenModel::fireEventFileTransmissionState(v18, 0, 0, 1, v29, __PAIR__(v21, v19), v30);
      v15 = (void *)(v31 - 12);
      if ( (int *)(v31 - 12) != &dword_28898C0 )
        v27 = (unsigned int *)(v31 - 4);
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
          goto LABEL_34;
    }
    else if ( v9 == 4 )
      v10 = *((_DWORD *)_R5 + 95);
      sub_119C884((void **)&v32, (const char *)&unk_257BC67);
      v11 = FileDownloadManager::getFileSize(v3);
      v13 = v12;
      _R0 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 16))(v3);
      LODWORD(v29) = &v32;
      MinecraftScreenModel::fireEventFileTransmissionState(v10, 0, 2, 1, v29, __PAIR__(v13, v11), v30);
      v15 = (void *)(v32 - 12);
      if ( (int *)(v32 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v32 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
LABEL_34:
          j_j_j_j_j__ZdlPv_9_1(v15);
          goto LABEL_12;
LABEL_12:
  if ( MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)_R5 + 106), 1) )
    v23 = 0;
  else
    if ( MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)_R5 + 106), 0) == 1 )
      v23 = 0;
      if ( !*((_BYTE *)_R5 + 444) )
        v24 = (FileDownloadManager *)MainMenuScreenModel::getWorldFileDownloadManager(*((MainMenuScreenModel **)_R5 + 106));
        if ( FileDownloadManager::getDownloadState(v24) != 5 )
          v23 = 1;
  if ( v23 != *((_BYTE *)_R5 + 445) )
    *((_BYTE *)_R5 + 445) = v23;
  if ( !MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)_R5 + 106), 0) )
    if ( *((_BYTE *)_R5 + 446) )
      v25 = MainMenuScreenModel::getWorldFileDownloadManager(*((MainMenuScreenModel **)_R5 + 106));
      (*(void (**)(void))(*(_DWORD *)v25 + 12))();
  return v2;
}


void __fastcall FileDownloadScreenController::~FileDownloadScreenController(FileDownloadScreenController *this)
{
  FileDownloadScreenController *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E1D8C;
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


void __fastcall FileDownloadScreenController::_startDownload(FileDownloadScreenController *this)
{
  FileDownloadScreenController *v1; // r6@1
  int v2; // r0@3
  int v3; // r4@3
  FileDownloadManager *v8; // r0@4
  int v9; // r7@4
  unsigned int v10; // r1@4
  unsigned int v11; // r5@4
  int v12; // r0@5
  void *v14; // r0@7
  unsigned int *v15; // r2@9
  signed int v16; // r1@11
  double v17; // [sp+0h] [bp-48h]@0
  __int64 v18; // [sp+10h] [bp-38h]@0
  int v19; // [sp+1Ch] [bp-2Ch]@3

  v1 = this;
  if ( !*((_BYTE *)this + 446) && MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)this + 106), 0) == 1 )
  {
    v2 = MainMenuScreenModel::getWorldFileDownloadManager(*((MainMenuScreenModel **)v1 + 106));
    WorldFileDownloadManager::downloadArchivedFile(v2, (_DWORD *)v1 + 108, (int *)v1 + 109);
    *((_BYTE *)v1 + 446) = 1;
    v3 = *((_DWORD *)v1 + 106);
    Util::toString(&v19, (int *)v1 + 108);
    __asm { VLDR            S16, =0.0 }
    if ( *((_BYTE *)v1 + 446) )
    {
      v8 = (FileDownloadManager *)MainMenuScreenModel::getWorldFileDownloadManager(*((MainMenuScreenModel **)v1 + 106));
      v9 = FileDownloadManager::getFileSize(v8);
      v11 = v10;
      if ( *((_BYTE *)v1 + 446) )
      {
        v12 = MainMenuScreenModel::getWorldFileDownloadManager(*((MainMenuScreenModel **)v1 + 106));
        _R0 = (*(int (**)(void))(*(_DWORD *)v12 + 16))();
        __asm { VMOV            S16, R0 }
      }
    }
    else
      v9 = 0;
      v11 = 0;
    __asm { VCVT.F64.F32    D0, S16 }
    LODWORD(v17) = &v19;
    __asm { VSTR            D0, [SP,#0x48+var_38] }
    MinecraftScreenModel::fireEventFileTransmissionState(v3, 0, 1, 1, v17, __PAIR__(v11, v9), v18);
    v14 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v19 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      else
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
  }
}


signed int __fastcall FileDownloadScreenController::_isDownloadFailed(FileDownloadScreenController *this)
{
  FileDownloadManager *v1; // r0@1
  int v2; // r0@1
  signed int v3; // r1@1

  v1 = (FileDownloadManager *)MainMenuScreenModel::getWorldFileDownloadManager(*((MainMenuScreenModel **)this + 106));
  v2 = FileDownloadManager::getDownloadState(v1);
  v3 = 0;
  if ( v2 == 5 )
    v3 = 1;
  return v3;
}


const void **__fastcall FileDownloadScreenController::getTitleLabel(FileDownloadScreenController *this, int a2)
{
  int v2; // r5@1
  void **v3; // r4@1
  const void **result; // r0@2
  FileDownloadManager *v5; // r0@3

  v2 = a2;
  v3 = (void **)this;
  sub_119C884((void **)this, (const char *)&unk_257BC67);
  if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v2 + 424), 0) )
  {
    result = (const void **)*(_BYTE *)(v2 + 446);
    if ( *(_BYTE *)(v2 + 446) )
    {
      v5 = (FileDownloadManager *)MainMenuScreenModel::getWorldFileDownloadManager(*(MainMenuScreenModel **)(v2 + 424));
      result = (const void **)FileDownloadManager::getDownloadState(v5);
      switch ( result )
      {
        case 1u:
          result = sub_119CAD8(v3, "progressScreen.message.initializingDownload", (_BYTE *)0x2B);
          break;
        case 5u:
          result = sub_119CAD8(v3, "progressScreen.message.failed", (_BYTE *)0x1D);
        case 3u:
          result = sub_119CAD8(v3, "progressScreen.message.importing", (_BYTE *)0x20);
        case 4u:
          result = sub_119CAD8(v3, "progressScreen.message.allDone", (_BYTE *)0x1E);
        case 2u:
          result = sub_119CAD8(v3, "progressScreen.message.downloadingWorld", (_BYTE *)0x27);
        default:
          return result;
      }
    }
  }
  else
    result = sub_119CAD8(v3, "progressScreen.message.failedNoNetwork", (_BYTE *)0x26);
  return result;
}


signed int __fastcall FileDownloadScreenController::_canStartPlay(FileDownloadScreenController *this)
{
  FileDownloadScreenController *v1; // r5@1
  signed int v2; // r4@1
  FileDownloadManager *v3; // r0@2

  v1 = this;
  v2 = 0;
  if ( MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)this + 106), 0) == 1 )
  {
    v3 = (FileDownloadManager *)MainMenuScreenModel::getWorldFileDownloadManager(*((MainMenuScreenModel **)v1 + 106));
    if ( FileDownloadManager::getDownloadState(v3) == 4 )
      v2 = 1;
  }
  return v2;
}


FileDownloadScreenController *__fastcall FileDownloadScreenController::~FileDownloadScreenController(FileDownloadScreenController *this)
{
  FileDownloadScreenController *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E1D8C;
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


void __fastcall FileDownloadScreenController::_startDownload(FileDownloadScreenController *this)
{
  FileDownloadScreenController::_startDownload(this);
}


void __fastcall FileDownloadScreenController::_registerEventHandlers(FileDownloadScreenController *this)
{
  FileDownloadScreenController::_registerEventHandlers(this);
}


void __fastcall FileDownloadScreenController::_registerEventHandlers(FileDownloadScreenController *this)
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
  LODWORD(v4) = sub_11979E2;
  *v3 = v1;
  HIDWORD(v4) = sub_11979D0;
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
  LODWORD(v8) = sub_1197B58;
  *v7 = v1;
  HIDWORD(v8) = sub_1197A18;
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
  LODWORD(v12) = sub_1197BA2;
  *v11 = v1;
  HIDWORD(v12) = sub_1197B8E;
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


void __fastcall FileDownloadScreenController::_registerBindings(FileDownloadScreenController *this)
{
  FileDownloadScreenController::_registerBindings(this);
}


signed int __fastcall FileDownloadScreenController::_isDownloadDone(FileDownloadScreenController *this)
{
  FileDownloadManager *v1; // r0@1
  int v2; // r0@1
  signed int v3; // r1@1

  v1 = (FileDownloadManager *)MainMenuScreenModel::getWorldFileDownloadManager(*((MainMenuScreenModel **)this + 106));
  v2 = FileDownloadManager::getDownloadState(v1);
  v3 = 0;
  if ( v2 == 4 )
    v3 = 1;
  return v3;
}


int __fastcall FileDownloadScreenController::_getFileSize(FileDownloadScreenController *this)
{
  int result; // r0@2
  FileDownloadManager *v2; // r0@3

  if ( *((_BYTE *)this + 446) )
  {
    v2 = (FileDownloadManager *)MainMenuScreenModel::getWorldFileDownloadManager(*((MainMenuScreenModel **)this + 106));
    result = j_j_j__ZNK19FileDownloadManager11getFileSizeEv(v2);
  }
  else
    result = 0;
  return result;
}


signed int __fastcall FileDownloadScreenController::_isImporting(FileDownloadScreenController *this)
{
  FileDownloadManager *v1; // r0@1
  int v2; // r0@1
  signed int v3; // r1@1

  v1 = (FileDownloadManager *)MainMenuScreenModel::getWorldFileDownloadManager(*((MainMenuScreenModel **)this + 106));
  v2 = FileDownloadManager::getDownloadState(v1);
  v3 = 0;
  if ( v2 == 3 )
    v3 = 1;
  return v3;
}


int __fastcall FileDownloadScreenController::FileDownloadScreenController(int a1, int a2, int *a3, int *a4)
{
  int v4; // r4@1
  int *v5; // r8@1
  int v6; // r0@1
  int *v7; // r7@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  int v10; // r5@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r6@14
  unsigned int v14; // r0@16
  int v15; // r0@22
  bool v16; // zf@22
  FileDownloadManager *v17; // r0@26
  int v19; // [sp+0h] [bp-28h]@1
  int v20; // [sp+4h] [bp-24h]@1

  v4 = a1;
  v19 = *(_DWORD *)a2;
  v5 = a4;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = a3;
  v20 = v6;
  if ( v6 )
  {
    v8 = (unsigned int *)(v6 + 4);
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
  MainMenuScreenController::MainMenuScreenController(v4, (int)&v19);
  v10 = v20;
  if ( v20 )
    v11 = (unsigned int *)(v20 + 4);
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
  *(_DWORD *)v4 = &off_26E1D8C;
  sub_119C854((int *)(v4 + 432), v7);
  sub_119C854((int *)(v4 + 436), v5);
  *(_BYTE *)(v4 + 446) = 0;
  *(_WORD *)(v4 + 444) = 0;
  *(_DWORD *)(v4 + 440) = 0;
  *(_DWORD *)(v4 + 448) = 1;
  MinecraftScreenController::_setExitBehavior(v4, 3);
  FileDownloadScreenController::_registerEventHandlers((FileDownloadScreenController *)v4);
  FileDownloadScreenController::_registerBindings((FileDownloadScreenController *)v4);
  if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v4 + 424), 1) )
    goto LABEL_32;
  v15 = MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v4 + 424), 0);
  v16 = v15 == 1;
  if ( v15 == 1 )
    v16 = *(_BYTE *)(v4 + 444) == 0;
  if ( !v16
    || (v17 = (FileDownloadManager *)MainMenuScreenModel::getWorldFileDownloadManager(*(MainMenuScreenModel **)(v4 + 424)),
        FileDownloadManager::getDownloadState(v17) == 5) )
LABEL_32:
    if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v4 + 424), 0) == 1 )
      FileDownloadScreenController::_startDownload((FileDownloadScreenController *)v4);
  return v4;
}


void __fastcall FileDownloadScreenController::_registerBindings(FileDownloadScreenController *this)
{
  FileDownloadScreenController *v1; // r4@1
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
  LODWORD(v3) = sub_1197C14;
  *v2 = v1;
  HIDWORD(v3) = sub_1197BD8;
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
  LODWORD(v6) = sub_1197C92;
  *v5 = v1;
  HIDWORD(v6) = sub_1197C4A;
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
  LODWORD(v9) = sub_1197D0E;
  *v8 = v1;
  HIDWORD(v9) = sub_1197CC8;
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
  LODWORD(v12) = sub_1197E04;
  *v11 = v1;
  HIDWORD(v12) = sub_1197D44;
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
  v82 = (void (*)(void))sub_1197F08;
  v83 = sub_1197E3C;
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
  LODWORD(v16) = sub_1198180;
  *v15 = v1;
  HIDWORD(v16) = sub_1197F38;
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
  LODWORD(v19) = sub_11981E2;
  *v18 = v1;
  HIDWORD(v19) = sub_11981B6;
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
  LODWORD(v22) = sub_1198220;
  *v21 = v1;
  HIDWORD(v22) = sub_1198218;
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
  LODWORD(v25) = sub_119829C;
  *v24 = v1;
  HIDWORD(v25) = sub_1198256;
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
  LODWORD(v28) = sub_119831A;
  *v27 = v1;
  HIDWORD(v28) = sub_11982D2;
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
  LODWORD(v31) = sub_1198396;
  *v30 = v1;
  HIDWORD(v31) = sub_1198350;
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
  LODWORD(v34) = sub_11983F8;
  *v33 = v1;
  HIDWORD(v34) = sub_11983CC;
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
  LODWORD(v37) = sub_119845A;
  *v36 = v1;
  HIDWORD(v37) = sub_119842E;
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


void __fastcall FileDownloadScreenController::~FileDownloadScreenController(FileDownloadScreenController *this)
{
  FileDownloadScreenController::~FileDownloadScreenController(this);
}


int __fastcall FileDownloadScreenController::_getFileProgress(FileDownloadScreenController *this)
{
  int result; // r0@2
  int v2; // r0@3

  if ( *((_BYTE *)this + 446) )
  {
    v2 = MainMenuScreenModel::getWorldFileDownloadManager(*((MainMenuScreenModel **)this + 106));
    result = (*(int (**)(void))(*(_DWORD *)v2 + 16))();
  }
  else
    result = 0;
  return result;
}
