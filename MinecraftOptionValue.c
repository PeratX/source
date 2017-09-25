

void __fastcall MinecraftOptionValue::getVRRenderDistanceLevels(MinecraftOptionValue *this, int a2)
{
  MinecraftOptionValue::getVRRenderDistanceLevels(this, a2);
}


signed int __fastcall MinecraftOptionValue::getDefaultRenderDistanceLevel(MinecraftOptionValue *this)
{
  return 2;
}


signed int __fastcall MinecraftOptionValue::getDefaultTexelAA(MinecraftOptionValue *this)
{
  void *v1; // r0@2
  unsigned int v2; // r1@4
  signed int result; // r0@4

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v1 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v1 = &ServiceLocator<AppPlatform>::mDefaultService;
  v2 = (*(int (**)(void))(**(_DWORD **)v1 + 436))() & 0xFFFFFFFE;
  result = 0;
  if ( v2 == 2 )
    result = 1;
  return result;
}


signed int __fastcall MinecraftOptionValue::getDefaultVRTexelAA(MinecraftOptionValue *this)
{
  return 1;
}


void __fastcall MinecraftOptionValue::getSupportedMSAAValues(MinecraftOptionValue *this, bool a2)
{
  MinecraftOptionValue *v2; // r4@1
  mce::DeviceInformationBase *v3; // r0@1
  int v4; // r1@1
  __int64 v13; // kr00_8@9
  signed int v14; // r8@12
  _DWORD *v15; // r6@12
  int v16; // r9@12
  unsigned int v17; // r0@12
  unsigned int v18; // r1@14
  unsigned int v19; // r7@14

  v2 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v3 = (mce::DeviceInformationBase *)mce::RenderDeviceBase::getDeviceInformation(mce::Singleton<mce::RenderDevice>::mInstance);
  mce::DeviceInformationBase::getAdapterDescription(v3);
  v4 = *(_DWORD *)(mce::Singleton<mce::RendererSettings>::mInstance + 4);
  mce::RenderDevice::getMultisampleQualityLevels();
  v13 = *(_QWORD *)v2;
  if ( (_DWORD)v13 == HIDWORD(v13) )
  {
    if ( (_DWORD)v13 == *((_DWORD *)v2 + 2) )
    {
      v14 = HIDWORD(v13) - v13;
      v15 = 0;
      v16 = (HIDWORD(v13) - (signed int)v13) >> 2;
      v17 = (HIDWORD(v13) - (signed int)v13) >> 2;
      if ( !v17 )
        v17 = 1;
      v18 = v17 + (v14 >> 2);
      v19 = v17 + (v14 >> 2);
      if ( 0 != v18 >> 30 )
        v19 = 0x3FFFFFFF;
      if ( v18 < v17 )
      if ( v19 )
      {
        if ( v19 >= 0x40000000 )
          sub_119C874();
        v15 = operator new(4 * v19);
      }
      v15[v16] = 1;
      if ( v16 )
        _aeabi_memmove4(v15, v13);
      if ( (_DWORD)v13 )
        operator delete((void *)v13);
      *(_DWORD *)v2 = v15;
      *((_DWORD *)v2 + 1) = &v15[v16 + 1];
      *((_DWORD *)v2 + 2) = &v15[v19];
    }
    else
      *(_DWORD *)v13 = 1;
      *((_DWORD *)v2 + 1) = v13 + 4;
  }
}


signed int __fastcall MinecraftOptionValue::getDefaultVRRenderDistanceLevel(MinecraftOptionValue *this)
{
  return 2;
}


signed int __fastcall MinecraftOptionValue::getDefaultVRMSAA(MinecraftOptionValue *this)
{
  void *v1; // r0@2
  int v2; // r0@4
  signed int v3; // r1@4

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v1 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v1 = &ServiceLocator<AppPlatform>::mDefaultService;
  v2 = (*(int (**)(void))(**(_DWORD **)v1 + 436))();
  v3 = 2;
  if ( v2 == 1 )
    v3 = 4;
  return v3;
}


int __fastcall MinecraftOptionValue::setTexelAA(MinecraftOptionValue *this, bool a2)
{
  int result; // r0@1

  result = *((_BYTE *)this + 8);
  if ( !result )
  {
    result = mce::Singleton<mce::RendererSettings>::mInstance;
    *(_BYTE *)(mce::Singleton<mce::RendererSettings>::mInstance + 49) = a2;
  }
  return result;
}


int __fastcall MinecraftOptionValue::setMSAAValue(MinecraftOptionValue *this, int a2)
{
  int result; // r0@1
  int v3; // r0@2
  int v4; // r2@6
  int v5; // r0@7
  int v6; // r3@7
  _QWORD *v7; // r4@13
  int v8; // r2@13
  int v9; // [sp-10h] [bp-10h]@13

  result = *((_BYTE *)this + 8);
  if ( !result )
  {
    v3 = a2;
    if ( a2 < 0 )
      v3 = -a2;
    if ( (v3 - 1) & v3 )
    {
      if ( a2 )
      {
        v4 = a2;
        do
        {
          v5 = v4;
          v6 = v4 & -v4;
          v4 ^= v6;
        }
        while ( v6 != v5 );
      }
      else
        v5 = 0;
      if ( 2 * v5 - a2 < a2 - v5 )
        v5 *= 2;
    }
    else
      v5 = a2;
    v7 = (_QWORD *)mce::Singleton<mce::RendererSettings>::mInstance;
    *(_DWORD *)(mce::Singleton<mce::RendererSettings>::mInstance + 12) = v5;
    v7 = (_QWORD *)((char *)v7 + 12);
    v8 = *((_DWORD *)v7 - 2);
    mce::RenderDevice::getClosestSupportedSampleDescription((int)&v9);
    result = v9;
    *v7 = *(_QWORD *)&v9;
  }
  return result;
}


int __fastcall MinecraftOptionValue::getRenderDistanceLevels(MinecraftOptionValue *this)
{
  MinecraftOptionValue *v1; // r8@1
  mce::DeviceInformationBase *v2; // r0@1
  char *v3; // r7@1
  AppPlatform **v4; // r0@2
  __int64 v5; // r0@4
  unsigned int v6; // r4@4
  unsigned int v7; // r6@4
  __int64 v8; // kr08_8@4
  unsigned int v9; // r0@5
  signed int v10; // r1@7
  signed int v11; // r0@9
  void *v12; // r0@17
  signed int v13; // r1@18
  int result; // r0@23
  signed int v15; // r1@26
  signed int v16; // r0@28
  signed int v17; // r1@34
  signed int v18; // r1@40
  signed int v19; // r1@47
  signed int v20; // r1@54
  signed int v21; // r1@60
  signed int v22; // r1@66
  signed int v23; // r1@72
  signed int v24; // r1@79

  v1 = this;
  v2 = (mce::DeviceInformationBase *)mce::RenderDeviceBase::getDeviceInformation(mce::Singleton<mce::RenderDevice>::mInstance);
  v3 = mce::DeviceInformationBase::getAdapterDescription(v2);
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v4 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v4 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v5 = AppPlatform::getAvailableMemory(*v4);
  v7 = *((_QWORD *)v3 + 4) >> 32;
  v6 = *((_QWORD *)v3 + 4);
  v8 = v5;
  if ( !*((_QWORD *)v3 + 4) )
  {
    v9 = *((_DWORD *)v3 + 5);
    v6 = 0;
    if ( !(v9 >> 1) )
    {
      v7 = 0;
      goto LABEL_15;
    }
    v6 = v9 >> 1;
    v7 = 0;
  }
  v10 = 0;
  if ( v6 < (unsigned int)v8 )
    v10 = 1;
  v11 = 0;
  if ( v7 < HIDWORD(v8) )
    v11 = 1;
  if ( v7 == HIDWORD(v8) )
    v11 = v10;
  if ( !v11 )
    v7 = HIDWORD(v8);
    v6 = v8;
LABEL_15:
  *(_DWORD *)v1 = 0;
  *((_DWORD *)v1 + 1) = 0;
  *((_DWORD *)v1 + 2) = 0;
  if ( v6 | v7 )
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v12 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v12 = &ServiceLocator<AppPlatform>::mDefaultService;
    if ( (*(int (**)(void))(**(_DWORD **)v12 + 436))() == 2 )
      v15 = 0;
      if ( !(_DWORD)v8 )
        v15 = 1;
      v16 = 0;
      if ( !HIDWORD(v8) )
        v16 = 1;
      if ( HIDWORD(v8) == 1 )
        v16 = v15;
      if ( v16 )
        result = std::vector<int,std::allocator<int>>::operator=(__PAIR__(&dword_27CB6E4, (unsigned int)v1));
      else
        result = std::vector<int,std::allocator<int>>::operator=(__PAIR__(&dword_27CB6D8, (unsigned int)v1));
      v17 = 0;
      if ( v6 <= 0xE1000000 )
        v17 = 1;
      if ( v7 )
        v17 = 0;
      if ( v17 )
      {
        v19 = 0;
        if ( v6 <= 0x70800000 )
          v19 = 1;
        if ( v7 )
          v19 = 0;
        if ( v19 )
        {
          v21 = 0;
          if ( v6 < 0x51400001 )
            v21 = 1;
          if ( v7 )
            v21 = 0;
          if ( v21 )
          {
            v23 = 0;
            if ( v6 <= 0x38400000 )
              v23 = 1;
            if ( v7 )
              v23 = 0;
            if ( v23 )
            {
              v24 = 0;
              if ( v6 <= 0x1C200000 )
                v24 = 1;
              if ( v7 )
                v24 = 0;
              if ( v24 )
                result = std::vector<int,std::allocator<int>>::operator=(__PAIR__(&dword_27CB680, (unsigned int)v1));
              else
                result = std::vector<int,std::allocator<int>>::operator=(__PAIR__(&dword_27CB674, (unsigned int)v1));
            }
            else
              result = std::vector<int,std::allocator<int>>::operator=(__PAIR__(&dword_27CB668, (unsigned int)v1));
          }
          else
            result = std::vector<int,std::allocator<int>>::operator=(__PAIR__(&dword_27CB65C, (unsigned int)v1));
        }
        else
          result = std::vector<int,std::allocator<int>>::operator=(__PAIR__(&dword_27CB650, (unsigned int)v1));
      }
        result = std::vector<int,std::allocator<int>>::operator=(__PAIR__(&dword_27CB644, (unsigned int)v1));
    v13 = 0;
    if ( (unsigned int)v8 < 0xF3C00001 )
      v13 = 1;
    if ( HIDWORD(v8) )
      v13 = 0;
    if ( v13 )
      v18 = 0;
      if ( (unsigned int)v8 < 0x76C00001 )
        v18 = 1;
      if ( HIDWORD(v8) )
        v18 = 0;
      if ( v18 )
        v20 = 0;
        if ( (unsigned int)v8 <= 0x1EA00000 )
          v20 = 1;
        if ( HIDWORD(v8) )
          v20 = 0;
        if ( v20 )
          v22 = 0;
          if ( (unsigned int)v8 <= 0xE600000 )
            v22 = 1;
          if ( HIDWORD(v8) )
            v22 = 0;
          if ( v22 )
            result = std::vector<int,std::allocator<int>>::operator=(__PAIR__(&dword_27CB6C0, (unsigned int)v1));
            result = std::vector<int,std::allocator<int>>::operator=(__PAIR__(&dword_27CB6B0, (unsigned int)v1));
          result = std::vector<int,std::allocator<int>>::operator=(__PAIR__(&dword_27CB6A4, (unsigned int)v1));
        result = std::vector<int,std::allocator<int>>::operator=(__PAIR__(&dword_27CB698, (unsigned int)v1));
      result = std::vector<int,std::allocator<int>>::operator=(__PAIR__(&dword_27CB68C, (unsigned int)v1));
  return result;
}


void __fastcall MinecraftOptionValue::getVRRenderDistanceLevels(MinecraftOptionValue *this, int a2)
{
  MinecraftOptionValue *v2; // r8@1
  int v3; // r5@1
  void *v4; // r0@2
  char *v5; // r5@5
  int v6; // r1@5 OVERLAPPED
  int v7; // r2@5 OVERLAPPED
  unsigned int v8; // r6@5
  int v9; // r6@8
  __int64 v10; // kr00_8@12
  int *v15; // r2@13
  _DWORD *v16; // r3@13
  int v18; // t1@14
  _DWORD *v20; // r11@18
  int v21; // r2@18
  int *v22; // r7@18
  int *v23; // r10@18
  char *v24; // r4@19
  int v25; // r1@20
  unsigned int v26; // r2@23
  unsigned int v27; // r0@25
  unsigned int v28; // r5@25
  _DWORD *v29; // r0@31
  _BYTE *v30; // r6@31
  signed int v31; // r2@33
  int v32; // r4@33
  void *v33; // r0@42
  void *ptr; // [sp+0h] [bp-30h]@12
  int *v35; // [sp+4h] [bp-2Ch]@12
  int v36; // [sp+8h] [bp-28h]@17

  v2 = this;
  v3 = a2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v4 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v4 = &ServiceLocator<AppPlatform>::mDefaultService;
  if ( (*(int (**)(void))(**(_DWORD **)v4 + 436))() == 1 )
  {
    v5 = 0;
    *(_QWORD *)&v6 = *(_QWORD *)&dword_27CB6CC;
    *(_DWORD *)v2 = 0;
    *((_DWORD *)v2 + 1) = 0;
    *((_DWORD *)v2 + 2) = 0;
    v8 = (v7 - v6) >> 2;
    if ( v8 )
    {
      if ( v8 >= 0x40000000 )
        sub_119C874();
      v5 = (char *)operator new(v7 - v6);
      *(_QWORD *)&v6 = *(_QWORD *)&dword_27CB6CC;
    }
    *(_DWORD *)v2 = v5;
    *((_DWORD *)v2 + 1) = v5;
    *((_DWORD *)v2 + 2) = &v5[4 * v8];
    v9 = (v7 - v6) >> 2;
    if ( 0 != v9 )
      _aeabi_memmove4(v5, v6);
    *((_DWORD *)v2 + 1) = &v5[4 * v9];
  }
    (*(void (__fastcall **)(void **, int))(*(_DWORD *)v3 + 8))(&ptr, v3);
    v10 = *(_QWORD *)&ptr;
    if ( ptr != v35 )
      __asm { VMOV.F32        S0, #0.5 }
      v15 = (int *)ptr;
      v16 = ptr;
      do
      {
        v18 = *v15;
        ++v15;
        _R7 = v18;
        __asm
        {
          VMOV            S2, R7
          VCVT.F32.S32    S2, S2
          VMUL.F32        S2, S2, S0
          VCVTR.S32.F32   S2, S2
          VMOV            R7, S2
        }
        *v16 = _R7;
        ++v16;
      }
      while ( !_ZF );
    if ( *(_DWORD *)v10 < 3 )
      v20 = operator new(4u);
      *v20 = 3;
      v21 = (int)(v20 + 1);
      v23 = v35;
      v22 = (int *)ptr;
      if ( ptr == v35 )
        v24 = (char *)(v20 + 1);
      else
        do
          v25 = *v22;
          if ( *v22 >= 4 )
          {
            if ( v24 == (char *)v21 )
            {
              v26 = (v24 - (char *)v20) >> 2;
              if ( !v26 )
                v26 = 1;
              v27 = v26 + ((v24 - (char *)v20) >> 2);
              v28 = v26 + ((v24 - (char *)v20) >> 2);
              if ( 0 != v27 >> 30 )
                v28 = 0x3FFFFFFF;
              if ( v27 < v26 )
              if ( v28 )
              {
                if ( v28 >= 0x40000000 )
                  sub_119C874();
                v29 = operator new(4 * v28);
                v25 = *v22;
                v30 = v20;
                v20 = v29;
              }
              else
                v20 = 0;
              v31 = v24 - v30;
              v32 = (int)v20 + v24 - v30;
              *(_DWORD *)((char *)v20 + v31) = v25;
              if ( 0 != v31 >> 2 )
                _aeabi_memmove4(v20, v30);
              v24 = (char *)(v32 + 4);
              if ( v30 )
                operator delete(v30);
              v21 = (int)&v20[v28];
            }
            else
              *(_DWORD *)v24 = v25;
              v24 += 4;
          }
          ++v22;
        while ( v23 != v22 );
      *(_DWORD *)v2 = v20;
      *((_DWORD *)v2 + 1) = v24;
      v33 = ptr;
      *((_DWORD *)v2 + 2) = v21;
      if ( v33 )
        operator delete(v33);
    else
      *(_DWORD *)v2 = v10;
      ptr = 0;
      v35 = 0;
      *((_DWORD *)v2 + 1) = HIDWORD(v10);
      *((_DWORD *)v2 + 2) = v36;
      v36 = 0;
}


int __fastcall MinecraftOptionValue::MinecraftOptionValue(int result, int a2, char a3)
{
  *(_DWORD *)result = &off_26D98E0;
  *(_DWORD *)(result + 4) = a2;
  *(_BYTE *)(result + 8) = a3;
  return result;
}


int __fastcall MinecraftOptionValue::getDefaultMSAA(MinecraftOptionValue *this)
{
  void *v1; // r0@2
  int result; // r0@5
  void *v3; // r0@7

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v1 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v1 = &ServiceLocator<AppPlatform>::mDefaultService;
  if ( (*(int (**)(void))(**(_DWORD **)v1 + 564))() )
  {
    result = 1;
  }
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v3 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v3 = &ServiceLocator<AppPlatform>::mDefaultService;
    result = (*(int (**)(void))(**(_DWORD **)v3 + 436))();
    if ( result != 1 )
      result = 4;
  return result;
}


void __fastcall MinecraftOptionValue::getSupportedMSAAValues(MinecraftOptionValue *this, bool a2)
{
  MinecraftOptionValue::getSupportedMSAAValues(this, a2);
}
