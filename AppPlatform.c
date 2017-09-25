

int __fastcall AppPlatform::createAndroidLaunchIntent(AppPlatform *this)
{
  return 0;
}


_DWORD *__fastcall AppPlatform::AppPlatform(_DWORD *a1)
{
  _DWORD *v1; // r8@1
  AppPlatform::HardwareInformation *v2; // r10@1
  double v3; // r0@1
  unsigned int v4; // r0@1
  int v5; // r7@3
  void *v6; // r6@3
  void *v7; // r6@4
  int (*v15)(void); // [sp+8h] [bp-58h]@8
  void (*v16)(void); // [sp+10h] [bp-50h]@8
  int (__fastcall *v17)(int (**)(void)); // [sp+14h] [bp-4Ch]@8
  int (*v18)(void); // [sp+18h] [bp-48h]@6
  void (*v19)(void); // [sp+20h] [bp-40h]@6
  int (__fastcall *v20)(int (**)(void)); // [sp+24h] [bp-3Ch]@6
  int (*v21)(void); // [sp+28h] [bp-38h]@4
  void (*v22)(void); // [sp+30h] [bp-30h]@4
  int (__fastcall *v23)(int (**)(void)); // [sp+34h] [bp-2Ch]@4

  v1 = a1;
  v2 = (AppPlatform::HardwareInformation *)(a1 + 4);
  *a1 = &off_26EA770;
  _aeabi_memclr8(a1 + 4, 48);
  v1[1] = 0;
  v1[2] = 0;
  AppPlatform::HardwareInformation::HardwareInformation(v2);
  v1[18] = 0;
  v1[19] = 0;
  v1[20] = 0;
  v1[21] = 0;
  v1[17] = 0;
  v1[19] = v1 + 17;
  v1[20] = v1 + 17;
  v1[24] = 0;
  v1[25] = 0;
  v1[26] = 1065353216;
  LODWORD(v3) = v1 + 26;
  *(_DWORD *)(LODWORD(v3) + 4) = 0;
  v4 = sub_21E6254(v3);
  v1[23] = v4;
  if ( v4 == 1 )
  {
    v1[28] = 0;
    v6 = v1 + 28;
  }
  else
    if ( v4 >= 0x40000000 )
      sub_21E57F4();
    v5 = 4 * v4;
    v6 = operator new(4 * v4);
    _aeabi_memclr4(v6, v5);
  v1[22] = v6;
  v1[31] = 0;
  AppLifecycleContext::AppLifecycleContext(v1 + 33);
  v1[34] = 1;
  v1[35] = &unk_28898CC;
  v1[36] = &unk_28898CC;
  v1[37] = 0;
  v7 = operator new(0x10u);
  FileSystemFileAccess::FileSystemFileAccess((int)v7, 0);
  v1[38] = v7;
  _R6 = operator new(0x10u);
  FileSystemFileAccess::FileSystemFileAccess((int)_R6, 1);
  v1[39] = _R6;
  _aeabi_memclr8(v1 + 40, 40);
  __asm
    VLDR            D0, =0.0
    VMOV            R7, R6, D0
  v21 = getTimeS;
  v22 = (void (*)(void))std::_Function_base::_Base_manager<double (*)(void)>::_M_manager;
  v23 = std::_Function_handler<double ()(void),double (*)(void)>::_M_invoke;
  BasicTimer::BasicTimer(
    (int)(v1 + 50),
    (int)std::_Function_handler<double ()(void),double (*)(void)>::_M_invoke,
    _R7,
    (int)_R6,
    (int)&v21);
  if ( v22 )
    v22();
  v18 = getTimeS;
  v19 = (void (*)(void))std::_Function_base::_Base_manager<double (*)(void)>::_M_manager;
  v20 = std::_Function_handler<double ()(void),double (*)(void)>::_M_invoke;
    (int)(v1 + 58),
    (int)&v18);
  if ( v19 )
    v19();
  v15 = getTimeS;
  v16 = (void (*)(void))std::_Function_base::_Base_manager<double (*)(void)>::_M_manager;
  v17 = std::_Function_handler<double ()(void),double (*)(void)>::_M_invoke;
    (int)(v1 + 66),
    (int)&v15);
  if ( v16 )
    v16();
  *((_BYTE *)v1 + 296) = 0;
  *((_BYTE *)v1 + 308) = 0;
  *((_BYTE *)v1 + 309) = 1;
  *((_BYTE *)v1 + 310) = 0;
  *((_BYTE *)v1 + 311) = 0;
  *((_BYTE *)v1 + 312) = 0;
  v1[79] = &unk_28898CC;
  v1[80] = &unk_28898CC;
  v1[82] = 0;
  v1[83] = 0;
  v1[84] = 0;
  v1[85] = 0;
  ServiceLocator<AppPlatform>::mDefaultService = v1;
  return v1;
}


char *__fastcall AppPlatform::getShareText(AppPlatform *this)
{
  return (char *)this + 144;
}


RakNet *__fastcall AppPlatform::copyImportFileToTempFolder(void **a1, int a2, int *a3)
{
  void **v3; // r8@1
  int *v4; // r9@1
  __int64 v5; // r0@1
  int v6; // r11@1
  int v7; // r10@1
  int v8; // r0@1
  int v9; // r5@2
  const char *v10; // r7@2
  size_t v11; // r4@2
  int *v12; // r0@2
  unsigned int v13; // r6@2
  char v14; // r4@9
  RakNet *result; // r0@14
  __int64 v16; // [sp+4h] [bp-E6Ch]@9
  int v17; // [sp+Ch] [bp-E64h]@9
  int v18; // [sp+10h] [bp-E60h]@9
  char v19; // [sp+14h] [bp-E5Ch]@9
  void (*v20)(void); // [sp+1Ch] [bp-E54h]@9
  char v21; // [sp+24h] [bp-E4Ch]@9
  __int64 v22; // [sp+28h] [bp-E48h]@1
  int v23; // [sp+30h] [bp-E40h]@2
  char v24; // [sp+34h] [bp-E3Ch]@2
  int v25; // [sp+434h] [bp-A3Ch]@2
  char v26; // [sp+438h] [bp-A38h]@9
  int v27; // [sp+43Ch] [bp-A34h]@9
  int v28; // [sp+83Ch] [bp-634h]@9
  int v29; // [sp+840h] [bp-630h]@1
  int v30; // [sp+844h] [bp-62Ch]@9
  unsigned int v31; // [sp+848h] [bp-628h]@9
  int v32; // [sp+84Ch] [bp-624h]@9
  int v33; // [sp+E40h] [bp-30h]@1
  RakNet *v34; // [sp+E48h] [bp-28h]@1

  v3 = a1;
  v4 = a3;
  v34 = _stack_chk_guard;
  LODWORD(v5) = *a3;
  v6 = *(_DWORD *)(a2 + 316);
  HIDWORD(v5) = *(_DWORD *)(*a3 - 12);
  v7 = *(_DWORD *)(v6 - 12);
  v22 = v5;
  v8 = Core::SplitPathT<1024u,64u>::SplitPathT((int)&v29, (const char **)&v22);
  if ( v33 )
  {
    v9 = 0;
    v23 = 1023;
    v10 = *(const char **)(v8 + 8 * v33 + 1016);
    v24 = 0;
    v25 = 0;
    v11 = strlen(v10);
    v12 = &v23;
    v13 = (unsigned int)&v23 | 4;
    if ( v11 < 0x400 )
    {
      if ( v11 )
      {
        _aeabi_memcpy((unsigned int)&v23 | 4, v10, v11);
        v12 = &v23;
      }
      *((_BYTE *)v12 + v11 + 4) = 0;
      v9 = v25 + v11;
    }
    else
      v24 = 0;
    v25 = v9;
  }
  else
    _aeabi_memclr8(&v23, 1028);
  v30 = v7;
  v29 = v6;
  v31 = v13;
  v32 = v9;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v26, (int)&v29, 2);
  v17 = *v4;
  v18 = *(_DWORD *)(v17 - 12);
  LODWORD(v16) = &v27;
  HIDWORD(v16) = v28;
  Core::FileSystem::copyFile((int)&v19, (__int64 *)&v17, &v16);
  v14 = v21;
  v21 |= 2u;
  if ( v20 )
    v20();
  if ( v14 & 1 )
    sub_21E94B4(v3, (const char *)&v27);
    sub_21E8AF4((int *)v3, (int *)&Util::EMPTY_STRING);
  result = (RakNet *)(_stack_chk_guard - v34);
  if ( _stack_chk_guard != v34 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall AppPlatform::requireControllerAtStartup(AppPlatform *this)
{
  return 0;
}


int __fastcall AppPlatform::isFullScreenKeyboard(AppPlatform *this)
{
  return 0;
}


int __fastcall AppPlatform::_fireAppFocusLost(AppPlatform *this)
{
  AppPlatform *v1; // r5@1
  int result; // r0@1
  int v3; // r4@1
  int v4; // r5@1

  v1 = this;
  result = AppLifecycleContext::setFocus((AppPlatform *)((char *)this + 132), 0);
  v3 = *((_DWORD *)v1 + 19);
  v4 = (int)v1 + 68;
  while ( v3 != v4 )
  {
    (*(void (**)(void))(**(_DWORD **)(v3 + 20) + 28))();
    result = sub_21D47E8(v3);
    v3 = result;
  }
  return result;
}


int __fastcall AppPlatform::realmsBeta(AppPlatform *this)
{
  return 0;
}


void __fastcall AppPlatform::loadTexture(int a1, int a2, int *a3)
{
  AppPlatform::loadTexture(a1, a2, a3);
}


RakNet *__fastcall AppPlatform::getShaderCachePath(AppPlatform *this, AppPlatform *a2)
{
  void **v2; // r4@1
  int v3; // r0@1
  __int64 v4; // r1@1
  int v5; // r3@1
  RakNet *result; // r0@1
  int v7; // [sp+0h] [bp-430h]@1
  int v8; // [sp+4h] [bp-42Ch]@1
  __int64 v9; // [sp+8h] [bp-428h]@1
  char v10; // [sp+14h] [bp-41Ch]@1
  int v11; // [sp+18h] [bp-418h]@1
  int v12; // [sp+418h] [bp-18h]@1
  RakNet *v13; // [sp+41Ch] [bp-14h]@1

  v2 = (void **)this;
  v13 = _stack_chk_guard;
  v3 = *AppPlatform::getTempPath(a2);
  LODWORD(v4) = AppPlatform::SHADERCACHE_PATH;
  v5 = *(_DWORD *)(v3 - 12);
  HIDWORD(v4) = *(_DWORD *)(AppPlatform::SHADERCACHE_PATH - 12);
  v7 = v3;
  v8 = v5;
  v9 = v4;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v10, (int)&v7, 2);
  sub_21E91E0(v2, (unsigned int)&v11, v12);
  result = (RakNet *)(_stack_chk_guard - v13);
  if ( _stack_chk_guard != v13 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall AppPlatform::supportsFilePicking(AppPlatform *this)
{
  return 0;
}


void __fastcall AppPlatform::loadRawTexture(int a1, int a2)
{
  int v2; // r4@1
  void *v3; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@1

  v2 = a1;
  (*(void (__fastcall **)(int *))(*(_DWORD *)a2 + 376))(&v6);
  mce::TextureContainer::TextureContainer(v2, &v6);
  v3 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v6 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
}


signed int __fastcall AppPlatform::supportsKeyboardMouse(AppPlatform *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = (*(int (**)(void))(*(_DWORD *)this + 436))();
  v2 = 0;
  if ( v1 != 3 )
    v2 = 1;
  return v2;
}


int __fastcall AppPlatform::pushNotificationReceived(int result)
{
  int v1; // r5@1
  int v2; // r6@1

  v1 = *(_DWORD *)(result + 76);
  v2 = result + 68;
  while ( v1 != v2 )
  {
    (*(void (**)(void))(**(_DWORD **)(v1 + 20) + 48))();
    result = sub_21D47E8(v1);
    v1 = result;
  }
  return result;
}


int __fastcall AppPlatform::requiresXboxLiveSigninToPlay(AppPlatform *this)
{
  return 0;
}


RakNet *__fastcall AppPlatform::listAssetFilesIn(int a1, int a2, int *a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r1@1
  _DWORD *v7; // r0@1
  __int64 v8; // r1@1
  RakNet *result; // r0@1
  _DWORD *v10; // [sp+4h] [bp-3Ch]@1
  __int64 v11; // [sp+Ch] [bp-34h]@1
  int v12; // [sp+14h] [bp-2Ch]@1
  int v13; // [sp+18h] [bp-28h]@1
  char v14; // [sp+1Ch] [bp-24h]@1
  int (*v15)(void); // [sp+24h] [bp-1Ch]@1

  v4 = a1;
  v5 = a4;
  *(_DWORD *)(a1 + 4) = 0;
  v6 = a1 + 4;
  *(_DWORD *)(v6 + 4) = 0;
  *(_DWORD *)(v6 + 8) = 0;
  *(_DWORD *)(v6 + 12) = 0;
  *(_DWORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 8) = v6;
  *(_DWORD *)(v6 + 12) = v6;
  v12 = *a3;
  v13 = *(_DWORD *)(v12 - 12);
  v7 = operator new(8u);
  LODWORD(v8) = sub_155CC80;
  *v7 = v5;
  v7[1] = v4;
  HIDWORD(v8) = sub_155CC00;
  v10 = v7;
  v11 = v8;
  result = Core::FileSystem::iterateOverDirectory((int)&v14, (__int64 *)&v12, 130LL, (int)&v10);
  if ( v15 )
    result = (RakNet *)v15();
  if ( (_DWORD)v11 )
    result = (RakNet *)((int (*)(void))v11)();
  return result;
}


signed int __fastcall AppPlatform::getPlatformUIScalingRules(AppPlatform *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = (*(int (**)(void))(*(_DWORD *)this + 436))();
  v2 = 0;
  if ( v1 == 2 )
    v2 = 4;
  return v2;
}


void __fastcall AppPlatform::notifyUriListenerRegistrationDone(AppPlatform *this)
{
  AppPlatform::notifyUriListenerRegistrationDone(this);
}


int __fastcall AppPlatform::getFileAccess(int a1, int a2)
{
  int v2; // r2@1

  v2 = a1 + 152;
  if ( a2 == 1 )
    v2 = a1 + 156;
  return *(_DWORD *)v2;
}


int __fastcall AppPlatform::_fireAppPaused(int result)
{
  int v1; // r4@1
  int v2; // r5@1

  v1 = *(_DWORD *)(result + 76);
  v2 = result + 68;
  while ( v1 != v2 )
  {
    (*(void (**)(void))(**(_DWORD **)(v1 + 20) + 12))();
    result = sub_21D47E8(v1);
    v1 = result;
  }
  return result;
}


void __fastcall AppPlatform::loadTexture(int a1, int a2, int *a3)
{
  int v3; // r6@1
  int v4; // r4@1
  int *v5; // r8@1
  char *v6; // r0@3
  __int64 v7; // r0@3
  void *v8; // r0@5
  __int64 v9; // r4@6
  unsigned int *v10; // r2@16
  signed int v11; // r1@18
  void *ptr; // [sp+8h] [bp-60h]@3
  int v13; // [sp+30h] [bp-38h]@3
  int v14; // [sp+34h] [bp-34h]@6
  int v15; // [sp+3Ch] [bp-2Ch]@5
  int v16; // [sp+68h] [bp+0h]@1
  void *v17; // [sp+7Ch] [bp+14h]@1

  v3 = a2;
  v4 = a1;
  v5 = a3;
  mce::ImageDescription::ImageDescription((int)&v16, 0, 0, 28, 1, 0);
  mce::ImageBuffer::ImageBuffer((mce::ImageBuffer *)&v17, (const mce::ImageDescription *)&v16);
  AppPlatform::loadImage(v3, (int)&v17, v5);
  if ( mce::ImageBuffer::isEmpty((mce::ImageBuffer *)&v17) == 1 )
  {
    _aeabi_memclr4(v4, 56);
    *(_DWORD *)(v4 + 12) = &unk_28898CC;
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 20) = 0;
    *(_DWORD *)(v4 + 24) = 0;
    *(_DWORD *)(v4 + 28) = 1;
    *(_BYTE *)(v4 + 32) = 0;
    *(_DWORD *)(v4 + 36) = 1;
    *(_DWORD *)(v4 + 40) = 1;
    *(_DWORD *)(v4 + 44) = 0;
    *(_DWORD *)(v4 + 48) = 8;
    *(_BYTE *)(v4 + 52) = 0;
  }
  else
    v6 = mce::ImageBuffer::getImageDescription((mce::ImageBuffer *)&v17);
    mce::ImageBuffer::ImageBuffer((mce::ImageBuffer *)&ptr, (const mce::ImageDescription *)v6);
    mce::TextureContainer::TextureContainer((int)&v13, (mce::ImageBuffer *)&ptr);
    if ( ptr )
      operator delete(ptr);
    LODWORD(v7) = &v13;
    mce::TextureContainer::setImage(v7, 0);
    mce::TextureContainer::TextureContainer(v4, (int)&v13);
    v8 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v15 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
        {
          v11 = __ldrex(v10);
          __strex(v11 - 1, v10);
        }
        while ( &v16 );
      }
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
    v9 = *(_QWORD *)&v13;
    if ( v13 != v14 )
      do
        if ( *(_DWORD *)v9 )
          operator delete(*(void **)v9);
        LODWORD(v9) = v9 + 40;
      while ( HIDWORD(v9) != (_DWORD)v9 );
      LODWORD(v9) = v13;
    if ( (_DWORD)v9 )
      operator delete((void *)v9);
  if ( v17 )
    operator delete(v17);
}


int __fastcall AppPlatform::requiresLiveGoldForMultiplayer(AppPlatform *this)
{
  return 0;
}


signed int __fastcall AppPlatform::hasExternalStoragePermission(AppPlatform *this)
{
  return 1;
}


int __fastcall AppPlatform::supportsClipboard(AppPlatform *this)
{
  return 0;
}


signed int __fastcall AppPlatform::getScreenWidth(AppPlatform *this)
{
  return 854;
}


__int64 __fastcall AppPlatform::getUsedMemory(AppPlatform *this)
{
  AppPlatform *v1; // r4@1
  BasicTimer *v2; // r5@1
  int v3; // r4@2
  unsigned int v4; // r12@2
  unsigned int v5; // t1@2
  signed int v6; // r0@2
  unsigned int v7; // r3@2
  int v8; // lr@2
  int v9; // r2@2
  bool v10; // cf@2
  bool v11; // zf@2
  signed int v12; // r3@2
  __int64 result; // r0@10

  v1 = this;
  v2 = (AppPlatform *)((char *)this + 200);
  if ( BasicTimer::isFinished((AppPlatform *)((char *)this + 200)) )
  {
    (*(void (__fastcall **)(AppPlatform *))(*(_DWORD *)v1 + 656))(v1);
    v5 = *((_DWORD *)v1 + 42);
    v3 = (int)v1 + 168;
    v4 = v5;
    v6 = 0;
    v7 = *(_DWORD *)(v3 - 8);
    v8 = *(_DWORD *)(v3 - 4);
    v9 = *(_DWORD *)(v3 + 4);
    v10 = v5 >= v7;
    v11 = v5 == v7;
    v12 = 0;
    if ( v11 || !v10 )
      v12 = 1;
    if ( v9 <= v8 )
      v6 = 1;
    if ( v9 == v8 )
      v6 = v12;
    if ( !v6 )
    {
      *(_DWORD *)(v3 - 8) = v4;
      *(_DWORD *)(v3 - 4) = v9;
    }
    BasicTimer::resetTime(v2);
    result = *(_QWORD *)v3;
  }
  else
    result = *((_QWORD *)v1 + 21);
  return result;
}


int __fastcall AppPlatform::restartApp(int result, bool a2)
{
  *(_BYTE *)(result + 4) = a2;
  return result;
}


void __fastcall AppPlatform::notifyUriListenerRegistrationDone(AppPlatform *this)
{
  AppPlatform *v1; // r4@1
  int v2; // r0@2
  int v3; // r5@3
  int v4; // r6@3
  double v5; // r0@6
  unsigned int v6; // r0@6
  int v7; // r5@8
  int *v8; // r4@8
  int v9; // r7@9
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  unsigned int *v12; // r2@15
  signed int v13; // r1@17
  int v14; // r6@27
  int v15; // r1@27
  void *v16; // r0@27
  int v17; // r1@28
  void *v18; // r0@28
  char *v19; // r0@33
  unsigned int *v20; // r2@36
  signed int v21; // r1@38
  char *v22; // [sp+0h] [bp-48h]@6
  void *ptr; // [sp+4h] [bp-44h]@9
  unsigned int v24; // [sp+8h] [bp-40h]@6
  int v25; // [sp+Ch] [bp-3Ch]@6
  int v26; // [sp+10h] [bp-38h]@6
  signed int v27; // [sp+14h] [bp-34h]@6
  int v28; // [sp+18h] [bp-30h]@6
  int v29; // [sp+1Ch] [bp-2Ch]@31

  v1 = this;
  if ( &pthread_create )
  {
    v2 = pthread_mutex_lock((pthread_mutex_t *)&AppPlatform::mProtocolMutex);
    if ( v2 )
      sub_21E5E14(v2);
  }
  *((_BYTE *)v1 + 7) = 1;
  v3 = dword_27EBCB4;
  v4 = *(_DWORD *)(AppPlatform::mPendingProtocolActivation - 12);
    pthread_mutex_unlock((pthread_mutex_t *)&AppPlatform::mProtocolMutex);
  if ( v3 | v4 )
    (*(void (__fastcall **)(AppPlatform *, _DWORD *))(*(_DWORD *)v1 + 528))(
      v1,
      &AppPlatform::mPendingProtocolActivation);
    v22 = (char *)&unk_28898CC;
    v25 = 0;
    v26 = 0;
    v27 = 1065353216;
    v28 = 0;
    LODWORD(v5) = &v27;
    v6 = sub_21E6254(v5);
    v24 = v6;
    if ( v6 == 1 )
    {
      v8 = &v29;
      v29 = 0;
    }
    else
      if ( v6 >= 0x40000000 )
        sub_21E57F4();
      v7 = 4 * v6;
      v8 = (int *)operator new(4 * v6);
      _aeabi_memclr4(v8, v7);
    ptr = v8;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      &AppPlatform::mPendingProtocolActivation,
      (int *)&v22);
    std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_move_assign(
      (int)&dword_27EBCA8,
      (int)&ptr);
    v9 = v25;
    while ( v9 )
      v14 = v9;
      v15 = *(_DWORD *)(v9 + 8);
      v9 = *(_DWORD *)v9;
      v16 = (void *)(v15 - 12);
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
          j_j_j_j__ZdlPv_9(v16);
      }
      v17 = *(_DWORD *)(v14 + 4);
      v18 = (void *)(v17 - 12);
      if ( (int *)(v17 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v17 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      operator delete((void *)v14);
    _aeabi_memclr4(ptr, 4 * v24);
    if ( ptr && &v29 != ptr )
      operator delete(ptr);
    v19 = v22 - 12;
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v22 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
}


int __fastcall AppPlatform::setAllowLostFocusToasts(int result, bool a2)
{
  *(_BYTE *)(result + 310) = a2;
  return result;
}


int __fastcall AppPlatform::setShowLostFocusToasts(int result, bool a2)
{
  *(_BYTE *)(result + 309) = a2;
  return result;
}


RakNet *__fastcall AppPlatform::getSettingsPath(AppPlatform *this, int a2)
{
  void **v2; // r4@1
  int v3; // r0@1
  int v4; // r2@1
  int v5; // r3@1
  RakNet *result; // r0@1
  int v7; // [sp+0h] [bp-430h]@1
  int v8; // [sp+4h] [bp-42Ch]@1
  int v9; // [sp+8h] [bp-428h]@1
  int v10; // [sp+Ch] [bp-424h]@1
  char v11; // [sp+14h] [bp-41Ch]@1
  int v12; // [sp+18h] [bp-418h]@1
  int v13; // [sp+418h] [bp-18h]@1
  RakNet *v14; // [sp+41Ch] [bp-14h]@1

  v2 = (void **)this;
  v14 = _stack_chk_guard;
  v3 = *(_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a2 + 276))(a2);
  v4 = *(_DWORD *)(v3 - 12);
  v5 = *(_DWORD *)(AppPlatform::SETTINGS_PATH - 12);
  v7 = v3;
  v8 = v4;
  v9 = AppPlatform::SETTINGS_PATH;
  v10 = v5;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v11, (int)&v7, 2);
  sub_21E91E0(v2, (unsigned int)&v12, v13);
  result = (RakNet *)(_stack_chk_guard - v14);
  if ( _stack_chk_guard != v14 )
    _stack_chk_fail(result);
  return result;
}


signed int __fastcall AppPlatform::getScreenHeight(AppPlatform *this)
{
  return 480;
}


int __fastcall AppPlatform::setDpi(int result, int a2)
{
  *(_BYTE *)(result + 308) = 1;
  *(_DWORD *)(result + 300) = a2;
  return result;
}


int __fastcall AppPlatform::isTextToSpeechSpeaking(AppPlatform *this)
{
  return 0;
}


void __fastcall AppPlatform::_notifyUriListeners(AppPlatform *this, const ActivationUri *a2, int a3)
{
  AppPlatform *v3; // r5@1
  int v4; // r6@1
  int *v5; // r4@1
  int v6; // r0@2
  void *v7; // r0@11
  int v8; // r5@12 OVERLAPPED
  int v9; // r6@12 OVERLAPPED
  unsigned int *v10; // r2@16
  signed int v11; // r1@18
  int v12; // [sp+8h] [bp-20h]@7
  char v13; // [sp+Ch] [bp-1Ch]@11

  v3 = this;
  v4 = a3;
  v5 = (int *)a2;
  if ( &pthread_create )
  {
    v6 = pthread_mutex_lock((pthread_mutex_t *)&AppPlatform::mProtocolMutex);
    if ( v6 )
      sub_21E5E14(v6);
  }
  if ( *((_BYTE *)v3 + 7) )
    if ( &pthread_create )
      pthread_mutex_unlock((pthread_mutex_t *)&AppPlatform::mProtocolMutex);
    if ( v4 == 1 )
      sub_21E94B4((void **)&v12, "*");
    else
      sub_21E8AF4(&v12, v5);
    std::_Hashtable<std::string,std::pair<std::string const,UriListener *>,std::allocator<std::pair<std::string const,UriListener *>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>::equal_range(
      (int)&v13,
      (unsigned __int64 *)v3 + 11,
      (int **)&v12);
    v7 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v12 - 4);
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
    *(_QWORD *)&v8 = *(_QWORD *)&v13;
    while ( v8 != v9 )
      (*(void (**)(void))(**(_DWORD **)(v8 + 8) + 8))();
      v8 = *(_DWORD *)v8;
  else
    EntityInteraction::setInteractText(&AppPlatform::mPendingProtocolActivation, v5);
    std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::operator=(
      (unsigned __int64 *)&dword_27EBCA8,
      (int)(v5 + 1));
}


signed int __fastcall AppPlatform::getDefaultUIProfile(AppPlatform *this)
{
  int v1; // r0@2
  int v2; // r1@4
  signed int result; // r0@4

  if ( *((_BYTE *)this + 308) )
    v1 = *((_DWORD *)this + 76);
  else
    v1 = (*(int (**)(void))(*(_DWORD *)this + 680))();
  v2 = v1 | 4;
  result = 0;
  if ( v2 != 4 )
    result = 1;
  return result;
}


int __fastcall AppPlatform::addListener(AppPlatform *this, AppPlatformListener *a2, float _R2)
{
  AppPlatform *v3; // r4@1
  char *v4; // r5@1
  int v5; // r0@1
  AppPlatformListener *v10; // r8@1
  int *v12; // r0@2
  int v13; // r6@6
  _DWORD *v14; // r0@10
  int result; // r0@10

  v3 = this;
  v4 = (char *)this + 68;
  v5 = *((_DWORD *)this + 18);
  __asm { VMOV            S16, R2 }
  v10 = a2;
  for ( _R7 = (int)v4; v5; v5 = *v12 )
  {
    _R7 = v5;
    v12 = (int *)(v5 + 12);
    __asm
    {
      VLDR            S0, [R7,#0x10]
      VCMPE.F32       S0, S16
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v12 = (int *)(_R7 + 8);
  }
  if ( v4 == (char *)_R7 )
    v13 = 1;
  else
    __asm { VLDR            S0, [R7,#0x10] }
    v13 = 0;
      v13 = 1;
  v14 = operator new(0x18u);
  __asm { VSTR            S16, [R1,#0x10] }
  v14[5] = v10;
  sub_21D4928(v13, (int)v14, _R7, (int)v4);
  result = *((_DWORD *)v3 + 21) + 1;
  *((_DWORD *)v3 + 21) = result;
  return result;
}


signed int __fastcall AppPlatform::defaultsToServerInstanceThreading(AppPlatform *this)
{
  return 1;
}


int __fastcall AppPlatform::getKeyboardHeight(AppPlatform *this)
{
  return 0;
}


int __fastcall AppPlatform::isInitialized(AppPlatform *this)
{
  return AppPlatform::mIsInitialized;
}


void __fastcall AppPlatform::createHolographicPlatform(HolographicPlatform **a1)
{
  HolographicPlatform **v1; // r4@1
  HolographicPlatform *v2; // r5@1

  v1 = a1;
  v2 = (HolographicPlatform *)operator new(0x2D4u);
  HolographicPlatform::HolographicPlatform(v2);
  *v1 = v2;
}


signed int __fastcall AppPlatform::isQuitCapable(AppPlatform *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = (*(int (**)(void))(*(_DWORD *)this + 436))();
  v2 = 0;
  if ( v1 != 2 )
    v2 = 1;
  return v2;
}


unsigned __int64 *__fastcall AppPlatform::setPendingProtocolActivation(AppPlatform *this, const ActivationUri *a2)
{
  AppPlatform *v2; // r4@1

  v2 = this;
  EntityInteraction::setInteractText(&AppPlatform::mPendingProtocolActivation, (int *)this);
  return j_j_j__ZNSt10_HashtableISsSt4pairIKSsSsESaIS2_ENSt8__detail10_Select1stESt8equal_toISsESt4hashISsENS4_18_Mod_range_hashingENS4_20_Default_ranged_hashENS4_20_Prime_rehash_policyENS4_17_Hashtable_traitsILb1ELb0ELb1EEEEaSERKSF__3(
           (unsigned __int64 *)&dword_27EBCA8,
           (int)v2 + 4);
}


signed int __fastcall AppPlatform::loadImageFromStream(int a1, ImageUtils *a2, mce::ImageBuffer **a3)
{
  return j_j_j__ZN10ImageUtils19loadImageFromMemoryERN3mce11ImageBufferEPai(
           a2,
           *a3,
           *((signed __int8 **)*a3 - 3),
           (int)*a3);
}


int __fastcall AppPlatform::blankLineDismissesChat(AppPlatform *this)
{
  return 0;
}


      if ( AppPlatform::isReadyForGameUpdate((AppPlatform *)&dword_27C4D80) != 1 )
{
      break;
    }
    InitOnce::initOnce((InitOnce *)&v73);
    if ( !*(_DWORD *)(v80 + 60) )
    {
      if ( !(v53 & 1) )
      {
        if ( !v77 )
        {
          v32 = 0;
LABEL_55:
          v53 = v32;
          v33 = AppPlatform::getAppLifecycleContext((AppPlatform *)&dword_27C4D80);
          if ( v77 && v53 == 1 )
          {
            if ( AppLifecycleContext::canRender((AppLifecycleContext *)v33) == 1 )
            {
              v51 = v33;
              v59 = 0;
              while ( 1 )
              {
                v34 = (*(int (__fastcall **)(int *))(dword_27C4D80 + 352))(&dword_27C4D80);
                v35 = (unsigned __int8 *)(v34 + 40);
                do
                {
                  do
                    v36 = __ldrex(v35);
                  while ( __strex(1u, v35) );
                  __dmb();
                }
                while ( v36 );
                v37 = *(_DWORD *)(v34 + 8);
                if ( *(_DWORD *)(v34 + 24) == v37 )
                  break;
                LODWORD(v38) = *(_DWORD *)v37;
                HIDWORD(v38) = *(_DWORD *)(v37 + 4);
                v39 = *(void (**)(void))(v37 + 8);
                *(_DWORD *)(v37 + 8) = 0;
                v40 = *(void (__fastcall **)(_DWORD))(v37 + 12);
                v83 = v57;
                v84 = v58;
                *(_QWORD *)&v57 = v38;
                v41 = v59;
                v59 = v39;
                v85 = v41;
                v86 = v60;
                v60 = v40;
                if ( v41 )
                  v41();
                v16 = &v64;
                v42 = *(_DWORD *)(v34 + 8);
                if ( v42 == *(_DWORD *)(v34 + 16) - 16 )
                  v45 = *(void (**)(void))(v42 + 8);
                  v29 = &v54;
                  if ( v45 )
                    v45();
                  operator delete(*(void **)(v34 + 12));
                  v46 = *(_DWORD *)(v34 + 20);
                  *(_DWORD *)(v34 + 20) = v46 + 4;
                  v44 = *(_DWORD *)(v46 + 4);
                  *(_DWORD *)(v34 + 12) = v44;
                  *(_DWORD *)(v34 + 16) = v44 + 512;
                else
                  v43 = *(void (**)(void))(v42 + 8);
                  if ( v43 )
                  {
                    v43();
                    v42 = *(_DWORD *)(v34 + 8);
                  }
                  v44 = v42 + 16;
                *(_DWORD *)(v34 + 8) = v44;
                __dmb();
                *v35 = 0;
                if ( !v59 )
                  sub_DA7654();
                v60(&v57);
              }
              __dmb();
              *v35 = 0;
              if ( v59 )
                v59();
              v33 = v51;
            }
            v55 = 0;
            while ( SPSCQueue<std::function<void ()(void)>,512u>::try_dequeue<std::function<void ()(void)>>(
                      (int **)&dword_27C4FE0,
                      (int)v29) == 1 )
              if ( !v55 )
                sub_DA7654();
              v56(v29);
            (*(void (**)(void))(*(_DWORD *)v75 + 92))();
            AppPlatform_android::update((AppPlatform_android *)&dword_27C4D80);
            if ( !AppLifecycleContext::canRender((AppLifecycleContext *)v33) )
              sleepMs(10);
            AppLifecycleContext::advanceFrame((AppLifecycleContext *)v33);
            if ( v55 )
              v55(v29, v29, 3);
          }
          else
            sleepMs(50);
          if ( !(v52 & 1) )
            if ( (*(int (**)(void))(*(_DWORD *)v75 + 108))() != 1 )
              v52 = 0;
              continue;
            ANativeActivity_finish(*(_DWORD *)(v80 + 12));
          v52 = 1;
          continue;
        }
        _android_log_print(5, "Minecraft", "MinecraftGame::init && MinecraftGame::setSize!\n");
        App::init(v75, (int)&v78);
        v30 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance((MinecraftGame *)dword_27C4F9C);
        v31 = ClientInstance::getHoloInput(v30);
        byte_27C4F81 = (*(int (**)(void))(*(_DWORD *)v31 + 128))();
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v31 + 44))(v31) == 1 )
          (*(void (__fastcall **)(int, int *, char *, char *))(*(_DWORD *)v31 + 256))(v31, &v63, &v62, &v61);
          (*(void (**)(void))(*(_DWORD *)v75 + 96))();
        else
        (*(void (**)(void))(*(_DWORD *)v75 + 100))();
      }
      v32 = 1;
      goto LABEL_55;
    break;
  }
  engine_term_display((int)&v76);
  v47 = v75;
  v75 = 0;
  if ( v47 )
    (*(void (**)(void))(*(_DWORD *)v47 + 4))();
  dword_27C4F9C = 0;
  (*(void (**)(void))(dword_27C4D80 + 8))();
  if ( v74 )
    v74();
  result = v75;
  if ( v75 )
    result = (*(int (**)(void))(*(_DWORD *)v75 + 4))();
  return result;
}


__int64 __fastcall AppPlatform::getTotalMemory(AppPlatform *this)
{
  AppPlatform *v1; // r5@1
  BasicTimer *v2; // r4@1
  __int64 *v3; // r6@1
  __int64 result; // r0@2

  v1 = this;
  v2 = (AppPlatform *)((char *)this + 264);
  v3 = (__int64 *)((char *)this + 176);
  if ( BasicTimer::isFinished((AppPlatform *)((char *)this + 264)) || (result = *v3) == 0 )
  {
    (*(void (__fastcall **)(AppPlatform *))(*(_DWORD *)v1 + 664))(v1);
    BasicTimer::resetTime(v2);
    result = *v3;
  }
  return result;
}


int __fastcall AppPlatform::_updateTotalMemorySnapshot(int result)
{
  *(_DWORD *)(result + 176) = 0;
  *(_DWORD *)(result + 180) = 0;
  return result;
}


void __fastcall AppPlatform::_notifyUriListeners(AppPlatform *this, const ActivationUri *a2, int a3)
{
  AppPlatform::_notifyUriListeners(this, a2, a3);
}


int __fastcall AppPlatform::setControllerType(int result, int a2)
{
  *(_DWORD *)(result + 8) = a2;
  return result;
}


char *__fastcall AppPlatform::getHardwareInformationToModify(AppPlatform *this)
{
  return (char *)this + 16;
}


signed int __fastcall AppPlatform::getBuildPlatform(AppPlatform *this)
{
  return -1;
}


int __fastcall AppPlatform::preferZippedPacksDefault(AppPlatform *this)
{
  return 0;
}


int *__fastcall AppPlatform::getDeviceId(AppPlatform *this, int a2)
{
  int *v2; // r4@1
  int *v3; // r5@1
  void *v4; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  int v8; // [sp+4h] [bp-1Ch]@2

  v2 = (int *)this;
  v3 = (int *)(a2 + 320);
  if ( !*(_DWORD *)(*(_DWORD *)(a2 + 320) - 12) )
  {
    (*(void (__fastcall **)(int *))(*(_DWORD *)a2 + 496))(&v8);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v8);
    v4 = (void *)(v8 - 12);
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
        j_j_j_j__ZdlPv_9(v4);
    }
  }
  return sub_21E8AF4(v2, v3);
}


void __fastcall AppPlatform::_fireAppTerminated(AppPlatform *this)
{
  AppPlatform::_fireAppTerminated(this);
}


unsigned int **__fastcall AppPlatform::getFormattedDateString(AppPlatform *this, const __int32 *a2, const time_t *a3)
{
  int *v3; // r8@1
  const time_t *v4; // r7@1
  _DWORD *v5; // r0@1
  int v6; // r6@1
  char *v7; // ST00_4@1
  void **v8; // r0@1
  void *v9; // r0@1
  unsigned int *v11; // r2@3
  signed int v12; // r1@5
  char v13; // [sp+14h] [bp-ECh]@1
  char v14; // [sp+1Ch] [bp-E4h]@1
  void **v15; // [sp+20h] [bp-E0h]@1
  int v16; // [sp+24h] [bp-DCh]@2
  void **v17; // [sp+28h] [bp-D8h]@1
  void **v18; // [sp+2Ch] [bp-D4h]@1
  int v19; // [sp+48h] [bp-B8h]@2
  int v20; // [sp+50h] [bp-B0h]@1
  int v21; // [sp+54h] [bp-ACh]@2
  char v22; // [sp+DCh] [bp-24h]@1

  v3 = (int *)this;
  v4 = a3;
  v5 = sub_21C9DA4(&v22, (const char *)&unk_257BC67);
  v6 = sub_21BF310((int)v5);
  sub_21D103C((int)&v15, 24);
  sub_21B5BAC((unsigned int **)&v14, (int)*(v15 - 3) + (_DWORD)&v15, (unsigned int **)&v22);
  sub_21C802C((unsigned int **)&v14);
  localtime(v4);
  v7 = (char *)*(v15 - 3) + (_DWORD)&v15;
  *(_DWORD *)((char *)*(v17 - 3) + (_DWORD)&v17 + 120);
  (*(void (__fastcall **)(char *, int))(*(_DWORD *)v6 + 8))(&v13, v6);
  sub_21CFED8(v3, (int)&v18);
  v8 = off_26D3F84;
  v15 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v15) = off_26D3F80[0];
  v17 = v8;
  v18 = &off_27734E8;
  v9 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v20 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  }
  v18 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v19);
  v15 = (void **)off_26D3F68;
  *(void ***)((char *)&v15 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v16 = 0;
  sub_21B6560(&v21);
  return sub_21C802C((unsigned int **)&v22);
}


AppPlatform::HardwareInformation *__fastcall AppPlatform::HardwareInformation::~HardwareInformation(AppPlatform::HardwareInformation *this)
{
  AppPlatform::HardwareInformation *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  int *v10; // r0@5
  unsigned int *v12; // r2@7
  signed int v13; // r1@9
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  unsigned int *v20; // r2@23
  signed int v21; // r1@25

  v1 = this;
  v2 = *((_DWORD *)this + 4);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 3);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v4 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 2);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v6 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 1);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v8 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (int *)(*(_DWORD *)v1 - 12);
  if ( v10 != &dword_28898C0 )
    v20 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  return v1;
}


void __fastcall AppPlatform::registerUriListener(AppPlatform *this, UriListener *a2)
{
  AppPlatform::registerUriListener(this, a2);
}


int __fastcall AppPlatform::getUserInputStatus(AppPlatform *this)
{
  return 0;
}


int __fastcall AppPlatform::getUserInput(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


signed int __fastcall AppPlatform::getStorageDirectory(AppPlatform *this)
{
  return 2;
}


int __fastcall AppPlatform::getMultiplayerServiceListToRegister(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


void __fastcall AppPlatform::_fireAppTerminated(AppPlatform *this)
{
  AppPlatform *v1; // r5@1
  int v2; // r1@1
  _QWORD *v3; // r0@2
  int v4; // r6@3
  int v5; // r2@4
  int *v6; // r0@5
  int v7; // [sp+0h] [bp-28h]@2
  int v8; // [sp+4h] [bp-24h]@1
  _QWORD *v9; // [sp+8h] [bp-20h]@1
  int *v10; // [sp+Ch] [bp-1Ch]@1
  int *v11; // [sp+10h] [bp-18h]@1
  int v12; // [sp+14h] [bp-14h]@1

  v1 = this;
  v2 = 0;
  v12 = 0;
  v8 = 0;
  v9 = 0;
  v10 = &v8;
  v11 = &v8;
  if ( *((_DWORD *)this + 18) )
  {
    v3 = std::_Rb_tree<float,std::pair<float const,AppPlatformListener *>,std::_Select1st<std::pair<float const,AppPlatformListener *>>,std::less<float>,std::allocator<std::pair<float const,AppPlatformListener *>>>::_M_copy(
           (int)&v7,
           *((_DWORD *)this + 18),
           (int)&v8);
    v2 = (int)v3;
    v9 = v3;
    do
    {
      v4 = (int)v3;
      v3 = (_QWORD *)*((_DWORD *)v3 + 2);
    }
    while ( v3 );
    v5 = v2;
    v10 = (int *)v4;
      v6 = (int *)v5;
      v5 = *(_DWORD *)(v5 + 12);
    while ( v5 );
    v11 = v6;
    v12 = *((_DWORD *)v1 + 21);
    if ( (int *)v4 != &v8 )
      do
      {
        AppPlatformListener::terminate(*(AppPlatformListener **)(v4 + 20));
        v4 = sub_21D47E8(v4);
      }
      while ( (int *)v4 != &v8 );
      v2 = (int)v9;
  }
  std::_Rb_tree<float,std::pair<float const,AppPlatformListener *>,std::_Select1st<std::pair<float const,AppPlatformListener *>>,std::less<float>,std::allocator<std::pair<float const,AppPlatformListener *>>>::_M_erase(
    (int)&v7,
    v2);
}


int __fastcall AppPlatform::openStoragePermissionRequest(int a1, int a2, int a3)
{
  int v3; // r12@0
  int v4; // lr@0
  int v5; // r4@1
  int v6; // r0@1
  int v7; // r5@1
  void (__fastcall *v8)(int *, int, signed int); // r3@1
  int v9; // r1@2
  int v10; // r5@4
  void (__cdecl *v11)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v13; // [sp+0h] [bp-20h]@2
  int v14; // [sp+4h] [bp-1Ch]@2
  void (__cdecl *v15)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v16; // [sp+Ch] [bp-14h]@2

  v5 = a1;
  v6 = 0;
  v7 = a3;
  v15 = 0;
  v8 = *(void (__fastcall **)(int *, int, signed int))(a3 + 8);
  if ( v8 )
  {
    v8(&v13, a3, 2);
    v6 = *(_DWORD *)(v7 + 12);
    v16 = *(_DWORD *)(v7 + 12);
    v9 = *(_DWORD *)(v7 + 8);
    v15 = *(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v7 + 8);
    v4 = v14;
    v3 = v13;
  }
  else
    v9 = 0;
  v10 = v5 + 116;
  *(_QWORD *)&v13 = *(_QWORD *)(v5 + 116);
  *(_DWORD *)v10 = v3;
  *(_DWORD *)(v10 + 4) = v4;
  v15 = *(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v5 + 124);
  v11 = v15;
  *(_DWORD *)(v5 + 124) = v9;
  v16 = *(_DWORD *)(v5 + 128);
  *(_DWORD *)(v5 + 128) = v6;
  if ( v11 )
    v11(&v13, &v13, 3, v11);
  return (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 232))(v5);
}


signed int __fastcall AppPlatform::signWrapsTextEntry(AppPlatform *this)
{
  return 1;
}


void __fastcall AppPlatform::loadTextureFromStream(int a1, int a2, mce::ImageBuffer **a3)
{
  int v3; // r4@1
  mce::ImageBuffer **v4; // r5@1
  mce::ImageBuffer *v5; // r0@1
  int v6; // r3@1
  char *v7; // r0@1
  void *ptr; // [sp+Ch] [bp-7Ch]@1
  char v9; // [sp+34h] [bp-54h]@1
  void *v10; // [sp+48h] [bp-40h]@1

  v3 = a1;
  v4 = a3;
  mce::ImageDescription::ImageDescription((int)&v9, 0, 0, 0, 1, 0);
  v5 = mce::ImageBuffer::ImageBuffer((mce::ImageBuffer *)&v10, (const mce::ImageDescription *)&v9);
  ImageUtils::loadImageFromMemory(v5, *v4, *((signed __int8 **)*v4 - 3), v6);
  v7 = mce::ImageBuffer::getImageDescription((mce::ImageBuffer *)&v10);
  mce::ImageBuffer::ImageBuffer((mce::ImageBuffer *)&ptr, (const mce::ImageDescription *)v7);
  mce::TextureContainer::TextureContainer(v3, (mce::ImageBuffer *)&ptr);
  if ( ptr )
    operator delete(ptr);
  mce::TextureContainer::setImage(__PAIR__(&v10, v3), 0);
  if ( v10 )
    operator delete(v10);
}


int __fastcall AppPlatform::allowSplitScreen(AppPlatform *this)
{
  AppPlatform *v1; // r5@1
  char *v2; // r7@1
  int v3; // r4@1
  int v4; // r0@2
  unsigned int v5; // r1@2
  signed int v6; // r3@4
  bool v7; // cf@4
  signed int v8; // r1@4
  bool v9; // zf@6
  bool v10; // nf@6
  signed int v11; // r0@6

  v1 = this;
  v2 = (char *)this + 184;
  v3 = (*(int (**)(void))(*(_DWORD *)this + 436))();
  if ( BasicTimer::isFinished((AppPlatform *)((char *)v1 + 232))
    || (v4 = *(_QWORD *)v2 >> 32, v5 = *(_QWORD *)v2, !*(_QWORD *)v2) )
  {
    (*(void (__fastcall **)(AppPlatform *))(*(_DWORD *)v1 + 660))(v1);
    BasicTimer::resetTime((AppPlatform *)((char *)v1 + 232));
    v4 = *(_QWORD *)v2 >> 32;
    v5 = *(_QWORD *)v2;
  }
  v6 = 0;
  v7 = v5 >= 0x832155FF;
  v9 = v5 == -2094967297;
  v8 = 0;
  if ( !v9 && v7 )
    v8 = 1;
  v9 = v4 == 0;
  v10 = v4 < 0;
  v11 = 0;
  if ( !v10 && !v9 )
    v11 = 1;
  if ( v9 )
    v11 = v8;
  if ( v3 == 2 )
    v6 = 1;
  return v11 & v6;
}


__int32 __fastcall AppPlatform::getAvailableHWThreadCount(AppPlatform *this)
{
  __int32 v1; // r0@1

  v1 = j_sysconf(97);
  return v1 & ~(v1 >> 31);
}


void __fastcall AppPlatform::createHolographicPlatform(HolographicPlatform **a1)
{
  AppPlatform::createHolographicPlatform(a1);
}


void __fastcall AppPlatform::registerUriListener(int a1, int *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  _DWORD *v5; // r0@2
  _DWORD *v6; // r5@2
  int *v7; // r0@2
  unsigned int v8; // r0@2
  char *v9; // r0@2
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  _DWORD *v12; // r0@7
  _DWORD *v13; // r5@7
  int *v14; // r0@7
  unsigned int v15; // r0@7
  int *v16; // [sp+4h] [bp-24h]@2
  int v17; // [sp+8h] [bp-20h]@2
  int *v18; // [sp+Ch] [bp-1Ch]@7
  int v19; // [sp+10h] [bp-18h]@7

  v3 = a3;
  v4 = a1 + 88;
  if ( *(_DWORD *)(*a2 - 12) )
  {
    sub_21E8AF4((int *)&v16, a2);
    v17 = v3;
    v5 = operator new(0x10u);
    v6 = v5;
    *v5 = 0;
    v7 = v16;
    v6[1] = v16;
    v16 = (int *)&unk_28898CC;
    v6[2] = v17;
    v8 = sub_21B417C(v7, *(v7 - 3), -955291385);
    std::_Hashtable<std::string,std::pair<std::string const,UriListener *>,std::allocator<std::pair<std::string const,UriListener *>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>::_M_insert_multi_node(
      v4,
      0,
      v8,
      v6);
    v9 = (char *)(v16 - 3);
    if ( v16 - 3 == &dword_28898C0 )
      return;
    v10 = (unsigned int *)(v16 - 1);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      goto LABEL_14;
    }
  }
  else
    sub_21E94B4((void **)&v18, "*");
    v19 = v3;
    v12 = operator new(0x10u);
    v13 = v12;
    *v12 = 0;
    v14 = v18;
    v13[1] = v18;
    v18 = (int *)&unk_28898CC;
    v13[2] = v19;
    v15 = sub_21B417C(v14, *(v14 - 3), -955291385);
      v15,
      v13);
    v9 = (char *)(v18 - 3);
    if ( v18 - 3 == &dword_28898C0 )
    v10 = (unsigned int *)(v18 - 1);
  v11 = (*v10)--;
LABEL_14:
  if ( v11 <= 0 )
    j_j_j_j__ZdlPv_9(v9);
}


int __fastcall AppPlatform::_fireAppResumed(AppPlatform *this)
{
  AppPlatform *v1; // r5@1
  int result; // r0@1
  int v3; // r4@1
  int v4; // r5@1

  v1 = this;
  result = AppLifecycleContext::setHasGraphicsContext((AppPlatform *)((char *)this + 132), 1);
  v3 = *((_DWORD *)v1 + 19);
  v4 = (int)v1 + 68;
  while ( v3 != v4 )
  {
    (*(void (**)(void))(**(_DWORD **)(v3 + 20) + 24))();
    result = sub_21D47E8(v3);
    v3 = result;
  }
  return result;
}


int __fastcall AppPlatform::isNetworkThrottled(AppPlatform *this)
{
  return (*(int (**)(void))(*(_DWORD *)this + 408))() ^ 1;
}


signed int __fastcall AppPlatform::getDefaultInputMode(AppPlatform *this)
{
  unsigned int v1; // r0@1
  signed int result; // r0@2

  v1 = (*(int (**)(void))(*(_DWORD *)this + 436))() - 1;
  if ( v1 <= 2 )
    result = dword_262D41C[v1];
  else
    result = 1;
  return result;
}


signed int __fastcall AppPlatform::getPixelsPerMillimeter(AppPlatform *this)
{
  return 1092616192;
}


int __fastcall AppPlatform::supportsShare(AppPlatform *this)
{
  return 0;
}


int __fastcall AppPlatform::_fireAppSuspended(AppPlatform *this)
{
  AppPlatform *v1; // r4@1
  int result; // r0@1
  int v3; // r5@1
  int v4; // r7@1
  int v5; // r6@5
  int v6; // r0@6
  int i; // r4@7

  v1 = this;
  result = AppLifecycleContext::setHasGraphicsContext((AppPlatform *)((char *)this + 132), 0);
  v3 = *((_DWORD *)v1 + 19);
  v4 = (int)v1 + 68;
  if ( (AppPlatform *)v3 != (AppPlatform *)((char *)v1 + 68) )
  {
    do
    {
      (*(void (**)(void))(**(_DWORD **)(v3 + 20) + 16))();
      result = sub_21D47E8(v3);
      v3 = result;
    }
    while ( result != v4 );
    v3 = *((_DWORD *)v1 + 19);
  }
  if ( v4 != v3 )
    v5 = (int)v1 + 68;
      v6 = sub_21D4858(v5);
      (*(void (**)(void))(**(_DWORD **)(v6 + 20) + 20))();
      result = sub_21D4858(v5);
      v5 = result;
    while ( result != v3 );
    for ( i = *((_DWORD *)v1 + 19); i != v4; i = result )
      (*(void (**)(void))(**(_DWORD **)(i + 20) + 8))();
      result = sub_21D47E8(i);
  return result;
}


int __fastcall AppPlatform::unregisterUriListener(int result, const UriListener *a2)
{
  int v2; // r9@1
  const UriListener *v3; // r4@1
  int v4; // r7@1
  int v5; // r6@2
  int v6; // r1@3
  _DWORD *v7; // r0@3
  _DWORD *v8; // r2@4

  v2 = result;
  v3 = a2;
  v4 = *(_DWORD *)(result + 96);
  if ( v4 )
  {
    do
    {
      v5 = *(_DWORD *)v4;
      result = *(_DWORD *)(v4 + 8);
      if ( (const UriListener *)result == v3 )
      {
        v6 = *(_DWORD *)(v4 + 12) % (unsigned int)(*(_QWORD *)(v2 + 88) >> 32);
        v7 = *(_DWORD **)(*(_QWORD *)(v2 + 88) + 4 * v6);
        do
        {
          v8 = v7;
          v7 = (_DWORD *)*v7;
        }
        while ( v7 != (_DWORD *)v4 );
        result = std::_Hashtable<std::string,std::pair<std::string const,UriListener *>,std::allocator<std::pair<std::string const,UriListener *>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>::_M_erase(
                   v2 + 88,
                   v6,
                   v8,
                   (void *)v4);
      }
      v4 = v5;
    }
    while ( v5 );
  }
  return result;
}


signed int __fastcall AppPlatform::isNetworkEnabled(AppPlatform *this, bool a2)
{
  return 1;
}


int __fastcall AppPlatform::setUIScalingRules(int result, int a2)
{
  *(_DWORD *)(result + 304) = a2;
  *(_BYTE *)(result + 308) = 1;
  return result;
}


int __fastcall AppPlatform::getBroadcastingMultiplayerServiceIds(int result, bool a2, bool a3)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


int __fastcall AppPlatform::createUserInput(AppPlatform *this, int a2)
{
  AppPlatform *v2; // r4@1

  v2 = this;
  (*(void (**)(void))(*(_DWORD *)this + 300))();
  return (*(int (__fastcall **)(AppPlatform *))(*(_DWORD *)v2 + 304))(v2);
}


signed int __fastcall AppPlatform::supportsInPackageRecursion(AppPlatform *this)
{
  return 1;
}


void __fastcall AppPlatform::~AppPlatform(AppPlatform *this)
{
  AppPlatform::~AppPlatform(this);
}


signed int __fastcall AppPlatform::supportsManualAddedServers(AppPlatform *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = (*(int (**)(void))(*(_DWORD *)this + 436))();
  v2 = 0;
  if ( v1 != 2 )
    v2 = 1;
  return v2;
}


int __fastcall AppPlatform::_updateAvailableMemorySnapshot(int result)
{
  *(_DWORD *)(result + 184) = 0;
  *(_DWORD *)(result + 188) = 0;
  return result;
}


int __fastcall AppPlatform::useXboxControlHelpers(AppPlatform *this)
{
  return 0;
}


void __fastcall AppPlatform::loadRawTexture(int a1, int a2)
{
  AppPlatform::loadRawTexture(a1, a2);
}


int __fastcall AppPlatform::calculateIfLowMemoryDevice(AppPlatform *this)
{
  AppPlatform *v1; // r4@1
  BasicTimer *v2; // r5@1
  char *v3; // r6@1
  unsigned int v4; // r0@2
  unsigned int v5; // r1@2
  int result; // r0@4
  unsigned int v7; // kr10_4@4
  char v8; // r1@4

  v1 = this;
  v2 = (AppPlatform *)((char *)this + 264);
  v3 = (char *)this + 176;
  if ( BasicTimer::isFinished((AppPlatform *)((char *)this + 264))
    || (v4 = *(_QWORD *)v3 >> 32, v5 = *(_QWORD *)v3, !*(_QWORD *)v3) )
  {
    (*(void (__fastcall **)(AppPlatform *))(*(_DWORD *)v1 + 664))(v1);
    BasicTimer::resetTime(v2);
    v4 = *(_QWORD *)v3 >> 32;
    v5 = *(_QWORD *)v3;
  }
  v7 = v5 - 1;
  result = (__PAIR__(v4, v5) - 1) >> 32;
  v8 = 0;
  if ( v7 < 0x20000000 )
    v8 = 1;
  if ( result )
    v8 = 0;
  *((_BYTE *)v1 + 312) = v8;
  return result;
}


int __fastcall AppPlatform::hasIDEProfiler(AppPlatform *this)
{
  return 0;
}


int __fastcall AppPlatform::getMemorySnapshotTimeDelay(AppPlatform *this, int _R1)
{
  int result; // r0@1

  __asm
  {
    VLDR            D0, =0.0
    VMOV            R0, R1, D0
  }
  return result;
}


int __fastcall AppPlatform::hasHardwareBackButton(AppPlatform *this)
{
  return 0;
}


int __fastcall AppPlatform::getDefaultSafeZoneScale(AppPlatform *this)
{
  int v1; // r0@1
  int result; // r0@3

  v1 = (*(int (**)(void))(*(_DWORD *)this + 436))();
  __asm
  {
    VLDR            S2, =0.9
    VMOV.F32        S0, #1.0
  }
  if ( (v1 & 0xFFFFFFFE) == 2 )
    __asm { VMOVEQ.F32      S0, S2 }
  __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall AppPlatform::resetMemorySnapshotTimers(AppPlatform *this, int a2, double a3)
{
  AppPlatform *v3; // r6@1
  unsigned int v4; // r4@1
  unsigned int v5; // r5@1
  int v6; // r1@1
  int v7; // r1@1

  v3 = this;
  v4 = HIDWORD(a3);
  v5 = LODWORD(a3);
  BasicTimer::resetTime((AppPlatform *)((char *)this + 200), a2, a3);
  BasicTimer::resetTime((AppPlatform *)((char *)v3 + 232), v6, COERCE_DOUBLE(__PAIR__(v4, v5)));
  return j_j_j__ZN10BasicTimer9resetTimeEd_0((AppPlatform *)((char *)v3 + 264), v7, COERCE_DOUBLE(__PAIR__(v4, v5)));
}


int __fastcall AppPlatform::_fireAppFocusGained(AppPlatform *this)
{
  AppPlatform *v1; // r5@1
  int result; // r0@1
  int v3; // r4@1
  int v4; // r5@1

  v1 = this;
  result = AppLifecycleContext::setFocus((AppPlatform *)((char *)this + 132), 1);
  v3 = *((_DWORD *)v1 + 19);
  v4 = (int)v1 + 68;
  while ( v3 != v4 )
  {
    (*(void (**)(void))(**(_DWORD **)(v3 + 20) + 32))();
    result = sub_21D47E8(v3);
    v3 = result;
  }
  return result;
}


const char *__fastcall AppPlatform::StringizeUIScalingRules(unsigned int a1)
{
  const char *result; // r0@2

  if ( a1 > 4 )
    result = "BadUIScalingRules";
  else
    result = off_26EAA40[a1];
  return result;
}


int __fastcall AppPlatform::showPointMenuCursor(AppPlatform *this)
{
  return 0;
}


int *__fastcall AppPlatform::getTempPath(AppPlatform *this)
{
  int *v1; // r5@1
  int v2; // r0@2
  int v3; // r1@2
  void *v4; // r0@2
  char *v5; // r0@3
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  int v11; // [sp+0h] [bp-48h]@4
  int v12; // [sp+4h] [bp-44h]@4
  char v13; // [sp+8h] [bp-40h]@4
  void (*v14)(void); // [sp+10h] [bp-38h]@4
  char v15; // [sp+18h] [bp-30h]@4
  const char *v16; // [sp+1Ch] [bp-2Ch]@2
  int v17; // [sp+20h] [bp-28h]@2
  int v18; // [sp+28h] [bp-20h]@2
  int v19; // [sp+2Ch] [bp-1Ch]@2
  const char *v20; // [sp+30h] [bp-18h]@2
  int v21; // [sp+34h] [bp-14h]@2

  v1 = (int *)((char *)this + 316);
  if ( !*(_DWORD *)(*((_DWORD *)this + 79) - 12) )
  {
    v2 = *(_DWORD *)(*(int (**)(void))(*(_DWORD *)this + 684))();
    v3 = *(_DWORD *)(v2 - 12);
    v18 = v2;
    v19 = v3;
    v20 = "minecraftpe";
    v21 = -1;
    Core::PathBuffer<std::string>::_join<Core::PathPart>((const void **)&v16, (unsigned int)&v18, 2u);
    sub_21E94B4((void **)&v17, v16);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v1, &v17);
    v4 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
    {
      v7 = (unsigned int *)(v17 - 4);
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
    v5 = (char *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v16 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    v11 = *v1;
    v12 = *(_DWORD *)(v11 - 12);
    Core::FileSystem::createDirectoryRecursively((int)&v13, (__int64 *)&v11);
    v15 |= 2u;
    if ( v14 )
      v14();
  }
  return v1;
}


int __fastcall AppPlatform::notifyUriListeners(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int result; // r0@3

  v2 = a2;
  v3 = a1;
  if ( *(_DWORD *)(*(_DWORD *)a2 - 12) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 672))(a1);
  }
  else
    result = *(_DWORD *)(a2 + 16);
    if ( !result )
      return result;
  return (*(int (__fastcall **)(int, int, signed int))(*(_DWORD *)v3 + 672))(v3, v2, 1);
}


int __fastcall AppPlatform::getIPAddresses(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


int __fastcall AppPlatform::getShowLostFocusToasts(AppPlatform *this)
{
  int result; // r0@2

  if ( *((_BYTE *)this + 309) )
    result = *((_BYTE *)this + 310) != 0;
  else
    result = 0;
  return result;
}


int __fastcall AppPlatform::getLegacyDeviceId(int result)
{
  *(_DWORD *)result = &unk_28898CC;
  return result;
}


__int64 __fastcall AppPlatform::getAvailableMemory(AppPlatform *this)
{
  AppPlatform *v1; // r5@1
  BasicTimer *v2; // r4@1
  __int64 *v3; // r6@1
  __int64 result; // r0@2

  v1 = this;
  v2 = (AppPlatform *)((char *)this + 232);
  v3 = (__int64 *)((char *)this + 184);
  if ( BasicTimer::isFinished((AppPlatform *)((char *)this + 232)) || (result = *v3) == 0 )
  {
    (*(void (__fastcall **)(AppPlatform *))(*(_DWORD *)v1 + 660))(v1);
    BasicTimer::resetTime(v2);
    result = *v3;
  }
  return result;
}


int __fastcall AppPlatform::hasFastAlphaTest(AppPlatform *this)
{
  return 0;
}


int __fastcall AppPlatform::isWin10Arm(AppPlatform *this)
{
  return 0;
}


char *__fastcall AppPlatform::getShareTitle(AppPlatform *this)
{
  return (char *)this + 140;
}


int __fastcall AppPlatform::supportsMSAA(AppPlatform *this)
{
  return 0;
}


void __fastcall AppPlatform::initialize(AppPlatform *this)
{
  AppPlatform *v1; // r4@1
  signed int v2; // r5@1
  Scheduler *v3; // r0@3
  int v4; // r1@3
  TaskGroup *v5; // r0@3
  TaskGroup *v6; // r0@4
  _DWORD *v8; // r0@5
  int v15; // r1@9
  int v17; // r1@9
  double v18; // ST00_8@9
  int v20; // r1@9
  double v21; // ST00_8@9
  double v22; // [sp+0h] [bp-40h]@0
  char v23; // [sp+Ch] [bp-34h]@5
  void (*v24)(void); // [sp+14h] [bp-2Ch]@5
  _DWORD *v25; // [sp+1Ch] [bp-24h]@5
  void (*v26)(void); // [sp+24h] [bp-1Ch]@5
  signed int (__fastcall *v27)(int *); // [sp+28h] [bp-18h]@5
  int v28; // [sp+2Ch] [bp-14h]@3

  v1 = this;
  v2 = (*(int (**)(void))(*(_DWORD *)this + 12))();
  AppPlatform::mIsInitialized = 1;
  if ( v2 < 2 )
    v2 = 2;
  v3 = (Scheduler *)Scheduler::singleton((Scheduler *)&AppPlatform::mIsInitialized);
  Scheduler::start(v3, v2);
  std::make_unique<TaskGroup,WorkerPool &,char const(&)[21]>(&v28, WorkerPool::ASYNC, "Initialization group");
  v4 = v28;
  v28 = 0;
  v5 = (TaskGroup *)*((_DWORD *)v1 + 82);
  *((_DWORD *)v1 + 82) = v4;
  if ( v5 )
  {
    v6 = TaskGroup::~TaskGroup(v5);
    operator delete((void *)v6);
  }
  _R5 = *((_DWORD *)v1 + 82);
  v8 = operator new(4u);
  *v8 = v1;
  v25 = v8;
  v26 = (void (*)(void))sub_155C5AE;
  v27 = sub_155C560;
  v24 = 0;
  TaskGroup::queue(_R5, (int)&v25, (int)&v23, 1u, 0xFFFFFFFF);
  if ( v24 )
    v24();
  if ( v26 )
    v26();
  *((_DWORD *)v1 + 40) = 0;
  *((_DWORD *)v1 + 41) = 0;
  *((_DWORD *)v1 + 42) = 0;
  *((_DWORD *)v1 + 43) = 0;
  _R0 = (*(int (__fastcall **)(AppPlatform *))(*(_DWORD *)v1 + 624))(v1);
  __asm
    VLDR            D0, =0.0
    VMOV            R6, R5, D0
    VMOV            D0, R0, R1
    VSTR            D0, [SP,#0x40+var_40]
  BasicTimer::resetTime((AppPlatform *)((char *)v1 + 200), v15, COERCE_DOUBLE(__PAIR__(_R5, _R6)), v22);
  BasicTimer::resetTime((AppPlatform *)((char *)v1 + 232), v17, COERCE_DOUBLE(__PAIR__(_R5, _R6)), v18);
  _R0 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v1 + 624))(v1);
  BasicTimer::resetTime((AppPlatform *)((char *)v1 + 264), v20, COERCE_DOUBLE(__PAIR__(_R5, _R6)), v21);
}


int (*__fastcall AppPlatform::getModalErrorMessageProc(AppPlatform *this))()
{
  return nullsub_51;
}


int __fastcall AppPlatform::removeListener(AppPlatform *this, AppPlatformListener *a2)
{
  AppPlatform *v2; // r4@1
  char *v3; // r5@1
  int result; // r0@1
  AppPlatformListener *v5; // r6@1
  void *v6; // r0@5

  v2 = this;
  v3 = (char *)this + 68;
  result = *((_DWORD *)this + 19);
  v5 = a2;
  while ( (char *)result != v3 )
  {
    if ( *(AppPlatformListener **)(result + 20) == v5 )
    {
      v6 = (void *)sub_21D4A24(result, (int)v3);
      operator delete(v6);
      result = *((_DWORD *)v2 + 21) - 1;
      *((_DWORD *)v2 + 21) = result;
      return result;
    }
    result = sub_21D47E8(result);
  }
  return result;
}


int __fastcall AppPlatform::setPointerFocus(int result, bool a2)
{
  *(_BYTE *)(result + 5) = a2;
  return result;
}


int __fastcall AppPlatform::isFireTV(AppPlatform *this)
{
  return 0;
}


AppPlatform::HardwareInformation *__fastcall AppPlatform::HardwareInformation::HardwareInformation(AppPlatform::HardwareInformation *this)
{
  AppPlatform::HardwareInformation *v1; // r4@1

  v1 = this;
  sub_21E94B4((void **)this, (const char *)&unk_257BC67);
  sub_21E94B4((void **)v1 + 1, (const char *)&unk_257BC67);
  sub_21E94B4((void **)v1 + 2, (const char *)&unk_257BC67);
  sub_21E94B4((void **)v1 + 3, (const char *)&unk_257BC67);
  sub_21E94B4((void **)v1 + 4, (const char *)&unk_257BC67);
  *((_DWORD *)v1 + 7) = 0;
  *((_DWORD *)v1 + 5) = 0;
  *((_DWORD *)v1 + 6) = 0;
  *((_BYTE *)v1 + 32) = 0;
  *((_DWORD *)v1 + 9) = 0;
  *((_DWORD *)v1 + 10) = 0;
  return v1;
}


signed int __fastcall AppPlatform::splitScreenRenderDistScalar(AppPlatform *this, unsigned int a2)
{
  signed int result; // r0@2

  if ( a2 - 1 <= 3 )
    result = dword_26109CC[a2 - 1];
  else
    result = 1065353216;
  return result;
}


void __fastcall AppPlatform::loadImage(int a1, int a2, int *a3)
{
  int v3; // r8@1
  int *v4; // r4@1
  int v5; // r6@1
  signed int v6; // r7@1
  void *v7; // r0@1
  void (__fastcall *v8)(int, int, int *); // r3@3
  signed int v9; // r7@4
  void *v10; // r0@4
  signed int v11; // r7@8
  void *v12; // r0@9
  void *v13; // r0@10
  unsigned int *v14; // r2@15
  signed int v15; // r1@17
  unsigned int *v16; // r2@23
  signed int v17; // r1@25
  unsigned int *v18; // r2@31
  signed int v19; // r1@33
  unsigned int *v20; // r2@39
  signed int v21; // r1@41
  int v22; // [sp+8h] [bp-38h]@9
  int v23; // [sp+10h] [bp-30h]@7
  int v24; // [sp+18h] [bp-28h]@4
  int v25; // [sp+20h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E94B4((void **)&v25, ".png");
  v6 = Util::endsWith(v4, (const void **)&v25);
  v7 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v25 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  if ( v6 == 1 )
    v8 = *(void (__fastcall **)(int, int, int *))(*(_DWORD *)v5 + 32);
LABEL_13:
    v8(v5, v3, v4);
    return;
  sub_21E94B4((void **)&v24, ".tga");
  v9 = Util::endsWith(v4, (const void **)&v24);
  v10 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v24 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  if ( v9 == 1 )
    v8 = *(void (__fastcall **)(int, int, int *))(*(_DWORD *)v5 + 36);
    goto LABEL_13;
  sub_21E94B4((void **)&v23, ".jpeg");
  if ( Util::endsWith(v4, (const void **)&v23) )
    v11 = 1;
  else
    sub_21E94B4((void **)&v22, ".jpg");
    v11 = Util::endsWith(v4, (const void **)&v22);
    v12 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v22 - 4);
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
        j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v23 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  if ( v11 == 1 )
    v8 = *(void (__fastcall **)(int, int, int *))(*(_DWORD *)v5 + 40);
}


int *__fastcall AppPlatform::setShareData(int a1, int *a2, int *a3)
{
  int v3; // r5@1
  int *v4; // r4@1

  v3 = a1;
  v4 = a3;
  EntityInteraction::setInteractText((int *)(a1 + 140), a2);
  return EntityInteraction::setInteractText((int *)(v3 + 144), v4);
}


void __fastcall AppPlatform::teardown(AppPlatform *this)
{
  AppPlatform *v1; // r4@1
  TaskGroup *v2; // r0@1
  TaskGroup *v3; // r0@2

  v1 = this;
  TaskGroup::flush(*((TaskGroup **)this + 82));
  v2 = (TaskGroup *)*((_DWORD *)v1 + 82);
  *((_DWORD *)v1 + 82) = 0;
  if ( v2 )
  {
    v3 = TaskGroup::~TaskGroup(v2);
    operator delete((void *)v3);
  }
  j_j_j__ZN9Scheduler16destroySingletonEv(v2);
}


int __fastcall AppPlatform::setARVRPlatform(int result, int a2)
{
  *(_DWORD *)(result + 148) = a2;
  return result;
}


int __fastcall AppPlatform::_fireLowMemory(int result)
{
  int v1; // r4@1
  int v2; // r5@1

  v1 = *(_DWORD *)(result + 76);
  v2 = result + 68;
  while ( v1 != v2 )
  {
    (*(void (**)(void))(**(_DWORD **)(v1 + 20) + 8))();
    result = sub_21D47E8(v1);
    v1 = result;
  }
  return result;
}


int __fastcall AppPlatform::getBroadcastAddresses(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


signed int __fastcall AppPlatform::supportsGamepad(AppPlatform *this)
{
  return 1;
}


int __fastcall AppPlatform::hasBuyButtonWhenInvalidLicense(AppPlatform *this)
{
  return 0;
}


void __fastcall AppPlatform::loadImage(int a1, int a2, int *a3)
{
  AppPlatform::loadImage(a1, a2, a3);
}


_DWORD *__fastcall AppPlatform::readAssetFileZipped(int *a1, int a2, int *a3, const char **a4)
{
  int *v4; // r5@1
  const char **v5; // r7@1
  int *v6; // r6@1
  __int64 v7; // r0@1
  int v8; // r4@1
  int v9; // r0@1
  int v10; // r0@1
  int v11; // r6@1
  int v12; // r1@2
  int v13; // r2@2
  void (__fastcall *v14)(_DWORD, int); // r3@2
  int v15; // r1@3
  int v16; // r2@3
  void (__fastcall *v17)(_DWORD, int); // r3@3
  int v18; // r0@5
  int v19; // r1@8
  int v20; // r2@8
  void (__fastcall *v21)(_DWORD, int); // r3@8
  void **v22; // r0@14
  void *v23; // r0@14
  unsigned int *v25; // r2@16
  signed int v26; // r1@18
  void *ptr; // [sp+0h] [bp-F0h]@1
  char v28; // [sp+8h] [bp-E8h]@1
  void **v29; // [sp+18h] [bp-D8h]@1
  int v30; // [sp+1Ch] [bp-D4h]@15
  void **v31; // [sp+20h] [bp-D0h]@6
  void **v32; // [sp+24h] [bp-CCh]@11
  int v33; // [sp+40h] [bp-B0h]@15
  int v34; // [sp+48h] [bp-A8h]@14
  int v35; // [sp+4Ch] [bp-A4h]@15

  v4 = a1;
  v5 = a4;
  v6 = a3;
  sub_21D103C((int)&v29, 24);
  FileSystemFileAccess::FileSystemFileAccess((int)&v28, 1);
  HIDWORD(v7) = &v28;
  LODWORD(v7) = &ptr;
  ZlibFileAccessWrapper::ZlibFileAccessWrapper(v7);
  v8 = *v6;
  v9 = ZlibFileAccessWrapper::getZipFunctions((ZlibFileAccessWrapper *)&ptr);
  v10 = j_unzOpen64(v8, v9);
  v11 = v10;
  if ( v10 )
  {
    if ( !j_unzLocateFile(v10, *v5, 2) )
    {
      if ( !j_unzOpenCurrentFile(v11) )
      {
        _aeabi_memclr8(&unk_27EBB90, 256);
        while ( 1 )
        {
          v18 = j_unzReadCurrentFile(v11, (int)&unk_27EBB90, 0xFFu);
          v16 = v18;
          if ( v18 < 1 )
            break;
          sub_21CBD44((char *)&v31, (int)&unk_27EBB90, v18);
        }
        if ( v18 )
          j_unzCloseCurrentFile(v11, v15, v18, v17);
          j_unzClose(v11, v19, v20, v21);
          sub_21E8AF4(v4, (int *)&Util::EMPTY_STRING);
          goto LABEL_12;
      }
      j_unzCloseCurrentFile(v11, v15, v16, v17);
    }
    j_unzClose(v11, v12, v13, v14);
  }
  sub_21CFED8(v4, (int)&v32);
LABEL_12:
  if ( ptr )
    operator delete(ptr);
  FileSystemFileAccess::~FileSystemFileAccess((FileSystemFileAccess *)&v28);
  v22 = off_26D3F84;
  v29 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v29) = off_26D3F80[0];
  v31 = v22;
  v32 = &off_27734E8;
  v23 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v34 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v32 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v33);
  v29 = (void **)off_26D3F68;
  *(void ***)((char *)&v29 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v30 = 0;
  return sub_21B6560(&v35);
}


int __fastcall AppPlatform::checkLicense(AppPlatform *this)
{
  return 0;
}


void __fastcall AppPlatform::registerUriListener(AppPlatform *this, UriListener *a2)
{
  UriListener *v2; // r5@1
  AppPlatform *v3; // r4@1
  _DWORD *v4; // r0@1
  _DWORD *v5; // r5@1
  int *v6; // r0@1
  unsigned int v7; // r0@1
  char *v8; // r0@1
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  int *v11; // [sp+4h] [bp-24h]@1
  UriListener *v12; // [sp+8h] [bp-20h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v11, "*");
  v12 = v2;
  v4 = operator new(0x10u);
  v5 = v4;
  *v4 = 0;
  v6 = v11;
  v5[1] = v11;
  v11 = (int *)&unk_28898CC;
  v5[2] = v12;
  v7 = sub_21B417C(v6, *(v6 - 3), -955291385);
  std::_Hashtable<std::string,std::pair<std::string const,UriListener *>,std::allocator<std::pair<std::string const,UriListener *>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>::_M_insert_multi_node(
    (int)v3 + 88,
    0,
    v7,
    v5);
  v8 = (char *)(v11 - 3);
  if ( v11 - 3 != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v11 - 1);
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
      j_j_j_j__ZdlPv_9(v8);
  }
}


int __fastcall AppPlatform::_updateUsedMemorySnapshot(int result)
{
  *(_DWORD *)(result + 160) = 0;
  *(_DWORD *)(result + 164) = 0;
  *(_DWORD *)(result + 168) = 0;
  *(_DWORD *)(result + 172) = 0;
  return result;
}


int __fastcall AppPlatform::setTextToSpeechEnabled(int result, int a2)
{
  *(_BYTE *)(result + 324) = a2;
  if ( !a2 )
    result = (*(int (**)(void))(*(_DWORD *)result + 608))();
  return result;
}


int __fastcall AppPlatform::getPlatformDpi(AppPlatform *this)
{
  return 0;
}


char *__fastcall AppPlatform::getHardwareInformation(AppPlatform *this)
{
  return (char *)this + 16;
}


signed int __fastcall AppPlatform::supportsTouch(AppPlatform *this)
{
  AppPlatform *v1; // r5@1
  signed int v2; // r4@1

  v1 = this;
  v2 = 0;
  if ( (*(int (**)(void))(*(_DWORD *)this + 436))() != 3
    && (*(int (__fastcall **)(AppPlatform *))(*(_DWORD *)v1 + 436))(v1) != 2 )
  {
    v2 = 1;
  }
  return v2;
}


int __fastcall AppPlatform::runStoragePermissionResultCallback(int result)
{
  int v1; // r4@1
  void (__fastcall *v2)(__int64 *, int, signed int); // r3@1
  int (__fastcall *v3)(int, _DWORD **); // r9@2
  int v4; // r7@2
  int (*v5)(void); // r5@2
  _DWORD *v6; // r0@2
  void (__fastcall *v7)(int, int, signed int); // r3@6
  __int64 v8; // [sp+0h] [bp-40h]@2
  int (*v9)(void); // [sp+8h] [bp-38h]@2
  int v10; // [sp+Ch] [bp-34h]@2
  _DWORD *v11; // [sp+14h] [bp-2Ch]@2
  int (*v12)(void); // [sp+1Ch] [bp-24h]@2
  int (__fastcall *v13)(int *); // [sp+20h] [bp-20h]@2

  v1 = result;
  v2 = *(void (__fastcall **)(__int64 *, int, signed int))(result + 124);
  if ( v2 )
  {
    v3 = *(int (__fastcall **)(int, _DWORD **))(*(_DWORD *)result + 348);
    v9 = 0;
    v2(&v8, result + 116, 2);
    v10 = *(_DWORD *)(v1 + 128);
    v4 = v10;
    v9 = *(int (**)(void))(v1 + 124);
    v5 = v9;
    v12 = 0;
    v6 = operator new(0x10u);
    *(_QWORD *)v6 = v8;
    v6[2] = v5;
    v6[3] = v4;
    v11 = v6;
    v12 = (int (*)(void))sub_155CB80;
    v13 = sub_155CB70;
    result = v3(v1, &v11);
    if ( v12 )
      result = v12();
    if ( v9 )
      result = v9();
    v7 = *(void (__fastcall **)(int, int, signed int))(v1 + 124);
    if ( v7 )
    {
      v7(v1 + 116, v1 + 116, 3);
      result = 0;
      *(_DWORD *)(v1 + 124) = 0;
      *(_DWORD *)(v1 + 128) = 0;
    }
  }
  return result;
}


int __fastcall AppPlatform::getUIScalingRules(AppPlatform *this)
{
  int result; // r0@2

  if ( *((_BYTE *)this + 308) )
    result = *((_DWORD *)this + 76);
  else
    result = (*(int (**)(void))(*(_DWORD *)this + 680))();
  return result;
}


int __fastcall AppPlatform::setThreadsFrozen(int result, bool a2)
{
  *(_BYTE *)(result + 311) = a2;
  return result;
}


signed int __fastcall AppPlatform::getPlatformType(AppPlatform *this)
{
  return 1;
}


char *__fastcall AppPlatform::getAppLifecycleContext(AppPlatform *this)
{
  return (char *)this + 132;
}


signed int __fastcall AppPlatform::supportsVibration(AppPlatform *this)
{
  return 1;
}


int __fastcall AppPlatform::getKeyFromKeyCode(AppPlatform *this, int a2, int a3, int a4)
{
  return 0;
}


int __fastcall AppPlatform::isAutoCompactionEnabled(AppPlatform *this)
{
  return 0;
}


int __fastcall AppPlatform::getDpi(AppPlatform *this)
{
  int result; // r0@2

  if ( *((_BYTE *)this + 308) )
    result = *((_DWORD *)this + 75);
  else
    result = (*(int (**)(void))(*(_DWORD *)this + 676))();
  return result;
}


void __fastcall AppPlatform::teardown(AppPlatform *this)
{
  AppPlatform::teardown(this);
}


void __fastcall AppPlatform::loadTextureFromStream(int a1, int a2, mce::ImageBuffer **a3)
{
  AppPlatform::loadTextureFromStream(a1, a2, a3);
}


  if ( AppPlatform::isLowMemoryDevice(*v6)
{
     || v8 == *(_DWORD *)(dword_27D6C3C - 12) && !memcmp(v7, (const void *)dword_27D6C3C, v8)
     || v8 == *(_DWORD *)(dword_27D6C38 - 12) && !memcmp(v7, (const void *)dword_27D6C38, v8)) )
  {
    result = FetchImageParams::FetchImageParams(v3, v5, 966367642000LL);
  }
  else
    result = (const void **)FetchImageParams::FetchImageParams();
  return result;
}


char *__fastcall AppPlatform::queueInitializerTask(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r4@1
  void (__fastcall *v5)(int); // r3@2
  char *result; // r0@4

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 336);
  if ( v4 == *(_QWORD *)(a1 + 336) >> 32 )
  {
    result = j_j_j__ZNSt6vectorISt8functionIFvvEESaIS2_EE19_M_emplace_back_auxIJRKS2_EEEvDpOT__0(
               (_QWORD *)(a1 + 332),
               a2);
  }
  else
    *(_DWORD *)(v4 + 8) = 0;
    v5 = *(void (__fastcall **)(int))(a2 + 8);
    if ( v5 )
    {
      v5(v4);
      *(_DWORD *)(v4 + 12) = *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v4 + 8) = *(_DWORD *)(v3 + 8);
      v4 = *(_DWORD *)(v2 + 336);
    }
    result = (char *)(v4 + 16);
    *(_DWORD *)(v2 + 336) = v4 + 16;
  return result;
}


int __fastcall AppPlatform::_recordTotalPhysicalMemory(int result)
{
  *(_DWORD *)(result + 192) = 0;
  *(_DWORD *)(result + 196) = 0;
  return result;
}


_DWORD *__fastcall AppPlatform::getSecureStorage(AppPlatform *this)
{
  AppPlatform *v1; // r4@1
  _DWORD *result; // r0@1

  v1 = this;
  result = operator new(4u);
  *(_DWORD *)v1 = result;
  *result = &off_26EAA28;
  return result;
}


void __fastcall AppPlatform::initialize(AppPlatform *this)
{
  AppPlatform::initialize(this);
}


int __fastcall AppPlatform::showKeyboard(int result)
{
  *(_BYTE *)(result + 6) = 1;
  return result;
}


signed int __fastcall AppPlatform::getMaxActiveTesselatorChunks(AppPlatform *this)
{
  unsigned int v1; // r0@1
  signed int result; // r0@2

  v1 = (*(int (**)(void))(*(_DWORD *)this + 436))();
  if ( v1 <= 3 )
    result = dword_26109DC[v1];
  else
    result = 10;
  return result;
}


int *__fastcall AppPlatform::readAssetFile(int *a1, int a2, int *a3)
{
  int *v3; // r4@1
  char v4; // r0@1
  __int64 v5; // r1@3
  void (*v6)(void); // r5@3
  void (*v7)(void); // r3@3
  char v8; // r0@7
  unsigned __int64 v9; // r2@9
  __int64 v10; // r1@9
  void (*v11)(void); // r7@9
  void (*v12)(void); // r3@9
  char v13; // r0@13
  char *v14; // r1@14
  char *v15; // r0@16
  unsigned int *v17; // r2@20
  signed int v18; // r1@22
  char v19; // [sp+8h] [bp-90h]@9
  int v20; // [sp+Ch] [bp-8Ch]@9
  void (*v21)(void); // [sp+10h] [bp-88h]@9
  int v22; // [sp+14h] [bp-84h]@9
  char v23; // [sp+18h] [bp-80h]@9
  unsigned __int64 v24; // [sp+24h] [bp-74h]@3
  int v25; // [sp+2Ch] [bp-6Ch]@3
  void (*v26)(void); // [sp+30h] [bp-68h]@3
  int v27; // [sp+34h] [bp-64h]@3
  char v28; // [sp+38h] [bp-60h]@3
  unsigned int v29; // [sp+40h] [bp-58h]@3
  int v30; // [sp+44h] [bp-54h]@3
  int v31; // [sp+48h] [bp-50h]@1
  int v32; // [sp+4Ch] [bp-4Ch]@1
  __int64 v33; // [sp+50h] [bp-48h]@1
  void (*v34)(void); // [sp+58h] [bp-40h]@3
  int v35; // [sp+5Ch] [bp-3Ch]@3
  char v36; // [sp+60h] [bp-38h]@1
  unsigned __int64 *v37; // [sp+68h] [bp-30h]@1
  int v38; // [sp+6Ch] [bp-2Ch]@1
  __int64 v39; // [sp+70h] [bp-28h]@3
  void (*v40)(void); // [sp+78h] [bp-20h]@3
  int v41; // [sp+7Ch] [bp-1Ch]@3

  v3 = a1;
  v37 = 0;
  v38 = 0;
  v31 = *a3;
  v32 = *(_DWORD *)(v31 - 12);
  Core::File::open((int)&v33, (int)&v37, (__int64 *)&v31, 33);
  v4 = v36;
  v36 |= 2u;
  if ( v4 & 1 )
  {
    v29 = 0;
    v30 = 0;
    Core::FileImpl::getSize((Core::FileImpl *)((char *)&v24 + 4), v37);
    v36 = v36 & 0xFC | v28 & 3;
    LODWORD(v5) = HIDWORD(v24);
    HIDWORD(v5) = v25;
    v6 = v26;
    v26 = 0;
    v39 = v33;
    v33 = v5;
    v7 = v34;
    v34 = v6;
    v40 = v7;
    v41 = v35;
    v35 = v27;
    if ( v7 )
    {
      ((void (__cdecl *)(__int64 *))v7)(&v39);
      v28 |= 3u;
      if ( v26 )
        ((void (__cdecl *)(char *))v26)((char *)&v24 + 4);
    }
    else
    v8 = v36;
    v36 |= 2u;
    if ( v8 & 1 )
      sub_21E6E1C(&v24, v29, 0);
      LODWORD(v9) = v24;
      Core::FileImpl::readExactly((Core::FileImpl *)&v19, v37, v9, *(_DWORD *)(v24 - 12));
      v36 = v36 & 0xFC | v23 & 3;
      LODWORD(v10) = *(_DWORD *)&v19;
      HIDWORD(v10) = v20;
      v11 = v21;
      v21 = 0;
      v39 = v33;
      v33 = v10;
      v12 = v34;
      v34 = v11;
      v40 = v12;
      v41 = v35;
      v35 = v22;
      if ( v12 )
      {
        v12();
        v23 |= 3u;
        if ( v21 )
          v21();
      }
      else
      v13 = v36;
      v36 |= 2u;
      if ( v13 & 1 )
        *v3 = v24;
        v14 = (char *)&unk_28898CC;
        LODWORD(v24) = &unk_28898CC;
        sub_21E8AF4(v3, (int *)&Util::EMPTY_STRING);
        v14 = (char *)v24;
      v15 = v14 - 12;
      if ( (int *)(v14 - 12) != &dword_28898C0 )
        v17 = (unsigned int *)(v14 - 4);
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
          j_j_j_j__ZdlPv_9(v15);
      sub_21E8AF4(v3, (int *)&Util::EMPTY_STRING);
  }
  else
    sub_21E8AF4(v3, (int *)&Util::EMPTY_STRING);
  if ( v34 )
    ((void (__cdecl *)(__int64 *))v34)(&v33);
  return Core::File::~File((Core::File *)&v37);
}


void __fastcall AppPlatform::registerUriListener(int a1, int *a2, int a3)
{
  AppPlatform::registerUriListener(a1, a2, a3);
}


signed int __fastcall AppPlatform::supports3DExport(AppPlatform *this)
{
  unsigned int v1; // r0@1
  signed int result; // r0@2
  signed int v3; // r1@3

  v1 = (*(int (**)(void))(*(_DWORD *)this + 436))();
  if ( v1 <= 3 )
  {
    v3 = 0;
    if ( !(v1 & 0xF) )
      v3 = 1;
    result = v3;
  }
  else
    result = 0;
  return result;
}


int __fastcall AppPlatform::useInMemoryLevelDB(AppPlatform *this)
{
  return 0;
}


void __fastcall AppPlatform::~AppPlatform(AppPlatform *this)
{
  AppPlatform *v1; // r0@1

  v1 = AppPlatform::~AppPlatform(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall AppPlatform::hideKeyboard(int result)
{
  *(_BYTE *)(result + 6) = 0;
  return result;
}


AppPlatform *__fastcall AppPlatform::~AppPlatform(AppPlatform *this)
{
  AppPlatform *v1; // r10@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void (__fastcall *v4)(int, int, signed int); // r3@2
  TaskGroup *v5; // r0@8
  TaskGroup *v6; // r0@9
  int v7; // r1@10
  void *v8; // r0@10
  int v9; // r1@11
  void *v10; // r0@11
  void (*v11)(void); // r3@12
  void (*v12)(void); // r3@14
  void (*v13)(void); // r3@16
  int v14; // r0@18
  int v15; // r0@20
  int v16; // r1@22
  void *v17; // r0@22
  int v18; // r1@23
  void *v19; // r0@23
  void (*v20)(void); // r3@24
  unsigned __int64 *v21; // r7@26
  unsigned int *v22; // r2@28
  signed int v23; // r1@30
  unsigned __int64 *v24; // r6@36
  int v25; // r1@36
  void *v26; // r0@36
  char *v27; // r0@38
  unsigned int *v29; // r2@42
  signed int v30; // r1@44
  unsigned int *v31; // r2@46
  signed int v32; // r1@48
  unsigned int *v33; // r2@50
  signed int v34; // r1@52
  unsigned int *v35; // r2@54
  signed int v36; // r1@56

  v1 = this;
  *(_DWORD *)this = &off_26EA770;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 332);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void (__fastcall **)(int, int, signed int))(v2 + 8);
      if ( v4 )
        v4(v2, v2, 3);
      v2 += 16;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 83);
  }
  if ( v2 )
    operator delete((void *)v2);
  v5 = (TaskGroup *)*((_DWORD *)v1 + 82);
  if ( v5 )
    v6 = TaskGroup::~TaskGroup(v5);
    operator delete((void *)v6);
  *((_DWORD *)v1 + 82) = 0;
  v7 = *((_DWORD *)v1 + 80);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
    else
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = *((_DWORD *)v1 + 79);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v9 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void (*)(void))*((_DWORD *)v1 + 72);
  if ( v11 )
    v11();
  v12 = (void (*)(void))*((_DWORD *)v1 + 64);
  if ( v12 )
    v12();
  v13 = (void (*)(void))*((_DWORD *)v1 + 56);
  if ( v13 )
    v13();
  v14 = *((_DWORD *)v1 + 39);
  if ( v14 )
    (*(void (**)(void))(*(_DWORD *)v14 + 4))();
  *((_DWORD *)v1 + 39) = 0;
  v15 = *((_DWORD *)v1 + 38);
  if ( v15 )
    (*(void (**)(void))(*(_DWORD *)v15 + 4))();
  *((_DWORD *)v1 + 38) = 0;
  v16 = *((_DWORD *)v1 + 36);
  v17 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v16 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = *((_DWORD *)v1 + 35);
  v19 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v18 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void (*)(void))*((_DWORD *)v1 + 31);
  if ( v20 )
    v20();
  v21 = (unsigned __int64 *)*((_DWORD *)v1 + 24);
  while ( v21 )
    v24 = v21;
    v25 = *v21 >> 32;
    v21 = (unsigned __int64 *)*v21;
    v26 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v25 - 4);
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
        j_j_j_j__ZdlPv_9(v26);
    operator delete(v24);
  _aeabi_memclr4(*((_QWORD *)v1 + 11), 4 * (*((_QWORD *)v1 + 11) >> 32));
  *((_DWORD *)v1 + 24) = 0;
  *((_DWORD *)v1 + 25) = 0;
  v27 = (char *)*((_DWORD *)v1 + 22);
  if ( v27 && (char *)v1 + 112 != v27 )
    operator delete(v27);
  std::_Rb_tree<float,std::pair<float const,AppPlatformListener *>,std::_Select1st<std::pair<float const,AppPlatformListener *>>,std::less<float>,std::allocator<std::pair<float const,AppPlatformListener *>>>::_M_erase(
    (int)v1 + 64,
    *((_DWORD *)v1 + 18));
  AppPlatform::HardwareInformation::~HardwareInformation((AppPlatform *)((char *)v1 + 16));
  return v1;
}
