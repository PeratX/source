

void __fastcall AppResourceLoader::~AppResourceLoader(AppResourceLoader *this)
{
  AppResourceLoader::~AppResourceLoader(this);
}


void __fastcall AppResourceLoader::~AppResourceLoader(AppResourceLoader *this)
{
  AppResourceLoader *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_2726968;
  v2 = (void (*)(void))*((_DWORD *)this + 3);
  if ( v2 )
    v2();
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall AppResourceLoader::loadAllVersionsOf(AppResourceLoader *this, const ResourceLocation *a2, int a3)
{
  AppResourceLoader::loadAllVersionsOf(this, a2, a3);
}


int __fastcall AppResourceLoader::load(int a1, int a2, int *a3, unsigned __int64 *a4)
{
  int *v4; // r6@1
  unsigned __int64 *v5; // r4@1
  int v6; // r2@1
  const void **v7; // r5@1
  const void **v8; // r7@1
  signed int v9; // r1@7
  int v10; // r4@13
  void *v11; // r0@13
  int *v12; // r7@15
  void *v13; // r0@16
  signed int v14; // r0@17
  int v15; // r4@18
  void *v16; // r0@18
  int v18; // r4@21
  void (__fastcall *v19)(int *, int, int *); // r6@21
  void *v20; // r0@21
  void *v21; // r0@22
  size_t v22; // r2@23
  unsigned int *v23; // r2@26
  signed int v24; // r1@28
  unsigned int *v25; // r2@34
  signed int v26; // r1@36
  unsigned int *v27; // r2@38
  signed int v28; // r1@40
  int v29; // [sp+8h] [bp-40h]@21
  int v30; // [sp+Ch] [bp-3Ch]@21
  int v31; // [sp+10h] [bp-38h]@5
  int v32; // [sp+14h] [bp-34h]@13
  int v33; // [sp+18h] [bp-30h]@13
  int v34; // [sp+1Ch] [bp-2Ch]@1

  v4 = a3;
  v5 = a4;
  (*(void (__fastcall **)(int *))(*(_DWORD *)a1 + 36))(&v34);
  v8 = (const void **)(*v5 >> 32);
  v7 = (const void **)*v5;
  if ( v7 == v8 )
  {
LABEL_17:
    v14 = 0;
  }
  else
    while ( 1 )
    {
      sub_21E8AF4(&v31, &v34);
      sub_21E72F0((const void **)&v31, v7);
      v32 = v31;
      v33 = *(_DWORD *)(v31 - 12);
      v10 = Core::FileSystem::fileOrDirectoryExists((__int64 *)&v32);
      v11 = (void *)(v31 - 12);
      if ( (int *)(v31 - 12) != &dword_28898C0 )
      {
        v6 = v31 - 4;
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex((unsigned int *)v6);
          while ( __strex(v9 - 1, (unsigned int *)v6) );
        }
        else
          v9 = (*(_DWORD *)v6)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      }
      if ( v10 == 1 )
        break;
      ++v7;
      if ( v7 == v8 )
        goto LABEL_17;
    }
    v12 = v4;
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v13 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v13 = &ServiceLocator<AppPlatform>::mDefaultService;
    v18 = *(_DWORD *)v13;
    v19 = *(void (__fastcall **)(int *, int, int *))(**(_DWORD **)v13 + 376);
    sub_21E8AF4(&v29, &v34);
    sub_21E72F0((const void **)&v29, v7);
    v19(&v30, v18, &v29);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v12, &v30);
    v20 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v30 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
      else
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    v21 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v29 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    v22 = *(_DWORD *)(*v12 - 12);
    if ( v22 == *((_DWORD *)Util::EMPTY_STRING - 3) )
      v6 = memcmp((const void *)*v12, Util::EMPTY_STRING, v22) != 0;
      v14 = 1;
      v6 = 1;
  v15 = v14 & v6;
  v16 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v34 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  return v15;
}


void __fastcall AppResourceLoader::loadRawTexture(AppResourceLoader *this, const ResourceLocation *a2, const void **a3)
{
  AppResourceLoader *v3; // r4@1
  const void **v4; // r5@1
  const ResourceLocation *v5; // r6@1
  int *v6; // r0@2
  int v7; // r7@5
  const void **v8; // r0@5
  char *v9; // r0@5
  void *v10; // r0@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  int v15; // [sp+4h] [bp-2Ch]@5
  char *v16; // [sp+8h] [bp-28h]@5

  v3 = this;
  v4 = a3;
  v5 = a2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v6 = (int *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v6 = (int *)&ServiceLocator<AppPlatform>::mDefaultService;
  if ( !*((_DWORD *)v5 + 3) )
    sub_21E5F48();
  v7 = *v6;
  (*((void (__fastcall **)(_DWORD, _DWORD))v5 + 4))(&v15, (char *)v5 + 4);
  v8 = sub_21E72F0((const void **)&v15, v4);
  v16 = (char *)*v8;
  *v8 = &unk_28898CC;
  AppPlatform::loadRawTexture((int)v3, v7);
  v9 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v16 - 4);
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
  v10 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


void __fastcall AppResourceLoader::loadAllVersionsOf(AppResourceLoader *this, const ResourceLocation *a2, int a3)
{
  const ResourceLocation *v3; // r6@1
  int v4; // r8@1
  AppResourceLoader *v5; // r4@1
  int *v6; // r7@1
  void *v7; // r0@1
  void *v8; // r0@2
  char *v9; // r0@4
  int v10; // r0@4
  int v11; // r1@4
  void *v12; // r0@4
  void *v13; // r0@5
  unsigned int *v14; // r2@6
  signed int v15; // r1@8
  void *v16; // r0@11
  void *v17; // r0@12
  unsigned int *v18; // r2@14
  signed int v19; // r1@16
  unsigned int *v20; // r2@18
  signed int v21; // r1@20
  unsigned int *v22; // r2@22
  signed int v23; // r1@24
  unsigned int *v24; // r2@26
  signed int v25; // r1@28
  unsigned int *v26; // r2@46
  signed int v27; // r1@48
  int v28; // [sp+4h] [bp-3Ch]@4
  int v29; // [sp+8h] [bp-38h]@4
  char v30; // [sp+Ch] [bp-34h]@4
  int v31; // [sp+10h] [bp-30h]@1
  int v32; // [sp+18h] [bp-28h]@1
  int v33; // [sp+1Ch] [bp-24h]@1
  int v34; // [sp+20h] [bp-20h]@11

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_21E94B4((void **)&v32, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v31, (const char *)&unk_257BC67);
  v6 = sub_21E8AF4(&v33, &v32) + 1;
  sub_21E8AF4(v6, &v31);
  v7 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v31 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v32 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  if ( (*(int (__fastcall **)(const ResourceLocation *, int, int *))(*(_DWORD *)v3 + 8))(v3, v4, v6) == 1 )
    sub_21E8AF4(&v28, &v33);
    sub_21E8AF4(&v29, v6);
    *(_DWORD *)v5 = 0;
    *((_DWORD *)v5 + 1) = 0;
    *((_DWORD *)v5 + 2) = 0;
    v9 = (char *)operator new(8u);
    *(_DWORD *)v5 = v9;
    *((_DWORD *)v5 + 2) = v9 + 8;
    v10 = std::__uninitialized_copy<false>::__uninit_copy<ResourcePath const*,ResourcePath*>(&v28, (int *)&v30, (int)v9);
    v11 = v29;
    *((_DWORD *)v5 + 1) = v10;
    v12 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v11 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
      }
      else
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v28 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
  else
  v16 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v34 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v33 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
}


signed int __fastcall AppResourceLoader::load(int a1, int *a2, int *a3)
{
  int v3; // r7@1
  int *v4; // r6@1
  int *v5; // r8@1
  void *v6; // r0@2
  int v7; // r5@5
  void (__fastcall *v8)(int *, int, int *); // r4@5
  int v9; // r0@5
  int v10; // r2@5
  int v11; // r3@5
  void *v12; // r0@5
  void *v13; // r0@6
  void *v14; // r0@7
  size_t v15; // r2@8
  signed int result; // r0@9
  unsigned int *v17; // r2@13
  signed int v18; // r1@15
  unsigned int *v19; // r2@17
  signed int v20; // r1@19
  unsigned int *v21; // r2@21
  signed int v22; // r1@23
  int v23; // [sp+4h] [bp-44Ch]@5
  int v24; // [sp+8h] [bp-448h]@5
  int v25; // [sp+Ch] [bp-444h]@5
  int v26; // [sp+10h] [bp-440h]@5
  int v27; // [sp+14h] [bp-43Ch]@5
  int v28; // [sp+18h] [bp-438h]@5
  int v29; // [sp+1Ch] [bp-434h]@5
  char v30; // [sp+2Ch] [bp-424h]@5
  int v31; // [sp+30h] [bp-420h]@5
  RakNet *v32; // [sp+434h] [bp-1Ch]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v32 = _stack_chk_guard;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v6 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v6 = &ServiceLocator<AppPlatform>::mDefaultService;
  if ( !*(_DWORD *)(v3 + 12) )
    sub_21E5F48();
  v7 = *(_DWORD *)v6;
  v8 = *(void (__fastcall **)(int *, int, int *))(**(_DWORD **)v6 + 376);
  (*(void (__fastcall **)(int *, int))(v3 + 16))(&v23, v3 + 4);
  v9 = *v4;
  v10 = *(_DWORD *)(*v4 - 12);
  v11 = *(_DWORD *)(v23 - 12);
  v26 = v23;
  v27 = v11;
  v28 = v9;
  v29 = v10;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v30, (int)&v26, 2);
  sub_21E94B4((void **)&v24, (const char *)&v31);
  v8(&v25, v7, &v24);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v5, &v25);
  v12 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v25 - 4);
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
      j_j_j_j__ZdlPv_9(v12);
  }
  v13 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v24 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v23 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = *(_DWORD *)(*v5 - 12);
  if ( v15 == *((_DWORD *)Util::EMPTY_STRING - 3) )
    result = memcmp((const void *)*v5, Util::EMPTY_STRING, v15) != 0;
    result = 1;
  if ( _stack_chk_guard != v32 )
    _stack_chk_fail(result);
  return result;
}


RakNet *__fastcall AppResourceLoader::loadTexture(AppResourceLoader *this, const ResourceLocation *a2, int *a3)
{
  AppResourceLoader *v3; // r4@1
  const ResourceLocation *v4; // r7@1
  int *v5; // r5@1
  int *v6; // r0@2
  int v7; // r6@5
  int v8; // r0@5
  int v9; // r2@5
  int v10; // r3@5
  void *v11; // r0@5
  void *v12; // r0@6
  RakNet *result; // r0@7
  unsigned int *v14; // r2@9
  signed int v15; // r1@11
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  int v18; // [sp+0h] [bp-440h]@5
  int v19; // [sp+4h] [bp-43Ch]@5
  int v20; // [sp+8h] [bp-438h]@5
  int v21; // [sp+Ch] [bp-434h]@5
  int v22; // [sp+10h] [bp-430h]@5
  int v23; // [sp+14h] [bp-42Ch]@5
  char v24; // [sp+20h] [bp-420h]@5
  int v25; // [sp+24h] [bp-41Ch]@5
  RakNet *v26; // [sp+428h] [bp-18h]@1

  v3 = this;
  v4 = a2;
  v5 = a3;
  v26 = _stack_chk_guard;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v6 = (int *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v6 = (int *)&ServiceLocator<AppPlatform>::mDefaultService;
  if ( !*((_DWORD *)v4 + 3) )
    sub_21E5F48();
  v7 = *v6;
  (*((void (__fastcall **)(_DWORD, _DWORD))v4 + 4))(&v18, (char *)v4 + 4);
  v8 = *v5;
  v9 = *(_DWORD *)(*v5 - 12);
  v10 = *(_DWORD *)(v18 - 12);
  v20 = v18;
  v21 = v10;
  v22 = v8;
  v23 = v9;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v24, (int)&v20, 2);
  sub_21E94B4((void **)&v19, (const char *)&v25);
  AppPlatform::loadTexture((int)v3, v7, &v19);
  v11 = (void *)(v19 - 12);
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
      j_j_j_j__ZdlPv_9(v11);
  }
  v12 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v18 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  result = (RakNet *)(_stack_chk_guard - v26);
  if ( _stack_chk_guard != v26 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall AppResourceLoader::AppResourceLoader(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  void (__fastcall *v4)(int *); // r3@1
  void (__fastcall *v5)(int, int *, signed int); // r3@2
  void (*v6)(void); // r3@3
  int v8; // [sp+0h] [bp-20h]@2
  void (__fastcall *v9)(int, int *, signed int); // [sp+8h] [bp-18h]@1
  int v10; // [sp+Ch] [bp-14h]@2

  v2 = a1;
  v3 = a2;
  v9 = 0;
  v4 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v4 )
  {
    v4(&v8);
    v10 = *(_DWORD *)(v3 + 12);
    v9 = *(void (__fastcall **)(int, int *, signed int))(v3 + 8);
    v5 = v9;
    *(_DWORD *)v2 = &off_2726968;
    *(_DWORD *)(v2 + 12) = 0;
    if ( v5 )
    {
      v5(v2 + 4, &v8, 2);
      *(_DWORD *)(v2 + 16) = v10;
      v6 = (void (*)(void))v9;
      *(_DWORD *)(v2 + 12) = v9;
      if ( v6 )
        v6();
    }
  }
  else
    *(_DWORD *)a1 = &off_2726968;
    *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)v2 = &off_26EAAC4;
  return v2;
}


void __fastcall AppResourceLoader::loadRawTexture(AppResourceLoader *this, const ResourceLocation *a2, const void **a3)
{
  AppResourceLoader::loadRawTexture(this, a2, a3);
}
