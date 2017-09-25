

signed int __fastcall SkinRepository::isValidSkin(SkinRepository *this, const ResourceLocation *a2)
{
  signed int v2; // r4@3
  void *v3; // r0@7
  void **v4; // r5@8 OVERLAPPED
  void **v5; // r6@8 OVERLAPPED
  unsigned int *v7; // r2@16
  signed int v8; // r1@18
  void **v9; // [sp+4h] [bp-4Ch]@1
  void **v10; // [sp+8h] [bp-48h]@8
  int v11; // [sp+10h] [bp-40h]@7

  Resource::loadTexture((Resource *)&v9, a2);
  if ( *(_DWORD *)mce::TextureContainer::getTextureDescription((mce::TextureContainer *)&v9) == 64 )
  {
    if ( *((_DWORD *)mce::TextureContainer::getTextureDescription((mce::TextureContainer *)&v9) + 1) == 64 )
    {
      v2 = 1;
    }
    else
      v2 = 0;
      if ( *((_DWORD *)mce::TextureContainer::getTextureDescription((mce::TextureContainer *)&v9) + 1) == 32 )
        v2 = 1;
  }
  else
    v2 = 0;
  v3 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  *(_QWORD *)&v4 = *(_QWORD *)&v9;
  if ( v9 != v10 )
    do
      if ( *v4 )
        operator delete(*v4);
      v4 += 10;
    while ( v5 != v4 );
    v4 = v9;
  if ( v4 )
    operator delete(v4);
  return v2;
}


signed int __fastcall SkinRepository::isSkinPackOwned(SkinRepository *this, const mce::UUID *a2)
{
  Entitlement *v2; // r0@1

  v2 = (Entitlement *)EntitlementManager::getEntitlement(*((EntitlementManager **)this + 5), a2);
  return j_j_j__ZNK11Entitlement7isOwnedEv_0(v2);
}


signed int __fastcall SkinRepository::isKnownSkinPackUnLoaded(SkinRepository *this, const mce::UUID *a2)
{
  SkinRepository *v2; // r8@1
  char *v3; // lr@1
  char *v4; // r7@1
  const mce::UUID *v5; // r9@1
  char *v6; // r2@1
  unsigned int v7; // r0@2
  unsigned int v8; // r3@2
  unsigned int v9; // r10@2
  unsigned int v10; // r5@2
  char *v11; // r12@3
  __int64 v12; // kr00_8@4
  signed int v13; // r4@4
  signed int v14; // r6@4
  signed int v15; // r1@11
  signed int v16; // r4@13
  unsigned int v17; // r4@18
  signed int v18; // r1@18
  bool v19; // cf@20
  bool v20; // zf@20
  signed int v21; // r4@20
  signed int result; // r0@28
  __int64 v23; // kr10_8@29
  signed int v24; // r1@29
  __int64 v25; // kr18_8@29
  signed int v26; // r4@29
  signed int v27; // r1@36
  const mce::UUID *v28; // r6@38
  __int64 v29; // kr20_8@38
  signed int v30; // r3@38
  unsigned int v31; // r10@38
  signed int v32; // r1@42
  signed int v33; // r7@42
  char *v34; // r1@48
  Pack **i; // r5@53
  Pack **v36; // r7@53
  PackManifest *v37; // r0@54
  char *v38; // r0@54
  Pack *v39; // r0@57
  PackManifest *v40; // r0@58
  char *v41; // r0@58
  SkinPack **j; // r5@60
  SkinPack **v43; // r7@60
  char *v44; // r0@61

  v2 = this;
  v3 = (char *)this + 36;
  v4 = (char *)*((_DWORD *)this + 10);
  v5 = a2;
  v6 = (char *)this + 36;
  if ( v4 )
  {
    v7 = *(_DWORD *)a2;
    v8 = *((_DWORD *)a2 + 1);
    v9 = *((_DWORD *)a2 + 2);
    v6 = v3;
    v10 = *((_DWORD *)a2 + 3);
    do
    {
      v11 = v6;
      v6 = v4;
      while ( 1 )
      {
        v12 = *((_QWORD *)v6 + 2);
        v13 = 0;
        v14 = 0;
        if ( (unsigned int)v12 < v7 )
          v13 = 1;
        if ( HIDWORD(v12) < v8 )
          v14 = 1;
        if ( HIDWORD(v12) == v8 )
          v14 = v13;
        if ( !v14 )
        {
          v15 = 0;
          if ( v7 < (unsigned int)v12 )
            v15 = 1;
          v16 = 0;
          if ( v8 < HIDWORD(v12) )
            v16 = 1;
          if ( v8 == HIDWORD(v12) )
            v16 = v15;
          if ( v16 )
            break;
          v17 = *((_QWORD *)v6 + 3) >> 32;
          v18 = 0;
          if ( (unsigned int)*((_QWORD *)v6 + 3) < v9 )
            v18 = 1;
          v19 = v17 >= v10;
          v20 = v17 == v10;
          v21 = 0;
          if ( !v19 )
            v21 = 1;
          if ( v20 )
            v21 = v18;
          if ( !v21 )
        }
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
          v6 = v11;
          goto LABEL_28;
      }
      v4 = (char *)*((_DWORD *)v6 + 2);
    }
    while ( v4 );
  }
LABEL_28:
  result = 0;
  if ( v6 != v3 )
    v23 = *((_QWORD *)v6 + 2);
    v24 = 0;
    v25 = *(_QWORD *)v5;
    v26 = 0;
    if ( (unsigned int)*(_QWORD *)v5 < (unsigned int)v23 )
      v24 = 1;
    if ( HIDWORD(v25) < HIDWORD(v23) )
      v26 = 1;
    if ( HIDWORD(v25) == HIDWORD(v23) )
      v26 = v24;
    if ( !v26 )
      v27 = 0;
      if ( (unsigned int)v23 >= (unsigned int)v25 )
        v27 = 1;
      v28 = (const mce::UUID *)((char *)v5 + 8);
      v29 = *((_QWORD *)v6 + 3);
      v30 = 0;
      v31 = *((_DWORD *)v5 + 3);
      if ( HIDWORD(v23) >= HIDWORD(v25) )
        v30 = 1;
      if ( HIDWORD(v23) == HIDWORD(v25) )
        v30 = v27;
      v32 = 0;
      v33 = 0;
      if ( *((_DWORD *)v5 + 2) < (unsigned int)v29 )
        v32 = 1;
      if ( v31 < HIDWORD(v29) )
        v33 = 1;
      result = 0;
      if ( v31 == HIDWORD(v29) )
        v33 = v32;
      v34 = v6;
      if ( v33 )
        v34 = v3;
      if ( !v30 )
        v34 = v6;
      if ( v34 != v3 )
        v36 = (Pack **)(*((_QWORD *)v2 + 8) >> 32);
        for ( i = (Pack **)*((_QWORD *)v2 + 8); v36 != i; ++i )
          v37 = (PackManifest *)Pack::getManifest(*i);
          v38 = PackManifest::getIdentity(v37);
          if ( *(_QWORD *)v5 == *(_QWORD *)v38 && *(_QWORD *)v28 == *((_QWORD *)v38 + 1) )
            return 0;
        v39 = (Pack *)*((_DWORD *)v2 + 15);
        if ( v39 )
          v40 = (PackManifest *)Pack::getManifest(v39);
          v41 = PackManifest::getIdentity(v40);
          if ( *(_QWORD *)v5 == *(_QWORD *)v41 && *(_QWORD *)v28 == *((_QWORD *)v41 + 1) )
        v43 = (SkinPack **)(*(_QWORD *)((char *)v2 + 76) >> 32);
        for ( j = (SkinPack **)*(_QWORD *)((char *)v2 + 76); v43 != j; ++j )
          v44 = SkinPack::getId(*j);
          if ( *(_QWORD *)v5 == *(_QWORD *)v44 && *(_QWORD *)v28 == *((_QWORD *)v44 + 1) )
        result = 1;
  return result;
}


void __fastcall SkinRepository::onImagePickingSuccess(int a1, int *a2)
{
  SkinRepository::onImagePickingSuccess(a1, a2);
}


RakNet *__fastcall SkinRepository::getUserSkinPacksPath(SkinRepository *this)
{
  void **v1; // r4@1
  void *v2; // r0@2
  int v3; // r0@4
  int v4; // r2@4
  int v5; // r3@4
  RakNet *result; // r0@4
  int v7; // [sp+0h] [bp-430h]@4
  int v8; // [sp+4h] [bp-42Ch]@4
  int v9; // [sp+8h] [bp-428h]@4
  int v10; // [sp+Ch] [bp-424h]@4
  char v11; // [sp+14h] [bp-41Ch]@4
  int v12; // [sp+18h] [bp-418h]@4
  RakNet *v13; // [sp+41Ch] [bp-14h]@1

  v1 = (void **)this;
  v13 = _stack_chk_guard;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = &ServiceLocator<AppPlatform>::mDefaultService;
  v3 = *(_DWORD *)(*(int (**)(void))(**(_DWORD **)v2 + 292))();
  v4 = *(_DWORD *)(v3 - 12);
  v5 = *(_DWORD *)(dword_27CC694 - 12);
  v7 = v3;
  v8 = v4;
  v9 = dword_27CC694;
  v10 = v5;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v11, (int)&v7, 2);
  sub_119C884(v1, (const char *)&v12);
  result = (RakNet *)(_stack_chk_guard - v13);
  if ( _stack_chk_guard != v13 )
    _stack_chk_fail(result);
  return result;
}


signed int __fastcall SkinRepository::isSkinPackLoaded(SkinRepository *this, const mce::UUID *a2)
{
  SkinPack **v2; // r5@1 OVERLAPPED
  SkinPack **v3; // r6@1 OVERLAPPED
  const mce::UUID *v4; // r4@1
  char *v5; // r8@2
  char *v6; // r0@3
  signed int result; // r0@6

  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 76);
  v4 = a2;
  if ( v2 == v3 )
  {
LABEL_6:
    result = 0;
  }
  else
    v5 = (char *)a2 + 8;
    while ( 1 )
    {
      v6 = SkinPack::getId(*v2);
      if ( *(_QWORD *)v4 == *(_QWORD *)v6 && *(_QWORD *)v5 == *((_QWORD *)v6 + 1) )
        break;
      ++v2;
      if ( v3 == v2 )
        goto LABEL_6;
    }
    result = 1;
  return result;
}


int __fastcall SkinRepository::getKnownSkinPackIds(SkinRepository *this, int a2)
{
  SkinRepository *v2; // r4@1
  int v3; // r6@1
  int v4; // r5@1
  int (__fastcall *v5)(int, _DWORD **); // r7@1
  _DWORD *v6; // r0@1
  __int64 v7; // r1@1
  int result; // r0@1
  _DWORD *v9; // [sp+4h] [bp-24h]@1
  __int64 v10; // [sp+Ch] [bp-1Ch]@1

  v2 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v3 = a2;
  *((_DWORD *)this + 2) = 0;
  v4 = *(_DWORD *)(a2 + 56);
  v5 = *(int (__fastcall **)(int, _DWORD **))(*(_DWORD *)v4 + 12);
  v6 = operator new(8u);
  LODWORD(v7) = sub_E81E9C;
  *v6 = v3;
  v6[1] = v2;
  HIDWORD(v7) = sub_E81E64;
  v9 = v6;
  v10 = v7;
  result = v5(v4, &v9);
  if ( (_DWORD)v10 )
    result = ((int (*)(void))v10)();
  return result;
}


SkinPack *__fastcall SkinRepository::getSkinPackByIdHash(SkinRepository *this, int a2, unsigned __int64 a3)
{
  SkinPack **v3; // r5@1
  SkinPack **v4; // r10@1
  int v5; // r8@1
  int v6; // r9@1
  int v7; // r7@2
  char *v8; // r0@2
  SkinPack *result; // r0@4

  v4 = (SkinPack **)(*(_QWORD *)((char *)this + 76) >> 32);
  v3 = (SkinPack **)*(_QWORD *)((char *)this + 76);
  v5 = HIDWORD(a3);
  v6 = a3;
  if ( v3 == v4 )
  {
LABEL_4:
    result = 0;
  }
  else
    while ( 1 )
    {
      v7 = (int)(v3 + 1);
      v8 = SkinPack::getId(*v3);
      if ( !((unsigned int)((522133279 * (unsigned __int64)*((_DWORD *)v8 + 2) >> 32) + 522133279 * *((_DWORD *)v8 + 3)) ^ 522133279 * *(_DWORD *)v8 ^ *((_DWORD *)v8 + 1) ^ *((_DWORD *)v8 + 2) ^ v6 | v5) )
        break;
      ++v3;
      if ( v4 == (SkinPack **)v7 )
        goto LABEL_4;
    }
    result = *v3;
  return result;
}


signed int __fastcall SkinRepository::importSkinPack(SkinRepository *this, Pack *a2)
{
  Pack *v2; // r5@1
  SkinRepository *v3; // r4@1
  PackManifest *v4; // r0@1
  unsigned __int64 *v5; // r0@1
  __int64 v6; // r0@1
  void *v7; // r8@3
  unsigned int v8; // r2@3
  unsigned int v9; // r1@5
  unsigned int v10; // r6@5
  char *v11; // r7@11
  char *v12; // r5@13
  int v13; // r5@15
  char v15; // [sp+4h] [bp-24h]@1

  v2 = a2;
  v3 = this;
  v4 = (PackManifest *)Pack::getManifest(a2);
  v5 = (unsigned __int64 *)PackManifest::getIdentity(v4);
  std::_Rb_tree<mce::UUID,mce::UUID,std::_Identity<mce::UUID>,std::less<mce::UUID>,std::allocator<mce::UUID>>::_M_insert_unique<mce::UUID const&>(
    (int)&v15,
    (int)v3 + 32,
    v5);
  v6 = *(_QWORD *)((char *)v3 + 68);
  if ( (_DWORD)v6 == HIDWORD(v6) )
  {
    v7 = (void *)*((_DWORD *)v3 + 16);
    v8 = ((signed int)v6 - (signed int)v7) >> 2;
    if ( !v8 )
      v8 = 1;
    HIDWORD(v6) = v8 + (((signed int)v6 - (signed int)v7) >> 2);
    v10 = v8 + (((signed int)v6 - (signed int)v7) >> 2);
    if ( 0 != HIDWORD(v6) >> 30 )
      v10 = 0x3FFFFFFF;
    if ( v9 < v8 )
    if ( v10 )
    {
      if ( v10 >= 0x40000000 )
        sub_119C874();
      v11 = (char *)operator new(4 * v10);
      LODWORD(v6) = *((_QWORD *)v3 + 8) >> 32;
      v7 = (void *)*((_QWORD *)v3 + 8);
    }
    else
      v11 = 0;
    *(_DWORD *)&v11[v6 - (_DWORD)v7] = v2;
    v12 = &v11[v6 - (_DWORD)v7];
    if ( 0 != ((signed int)v6 - (signed int)v7) >> 2 )
      _aeabi_memmove4(v11, v7);
    v13 = (int)(v12 + 4);
    if ( v7 )
      operator delete(v7);
    *((_DWORD *)v3 + 16) = v11;
    *((_DWORD *)v3 + 17) = v13;
    *((_DWORD *)v3 + 18) = &v11[4 * v10];
  }
  else
    *(_DWORD *)v6 = v2;
    *((_DWORD *)v3 + 17) += 4;
  return 1;
}


SkinRepository *__fastcall SkinRepository::~SkinRepository(SkinRepository *this)
{
  SkinRepository *v1; // r8@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void (*v4)(void); // r3@2
  int v5; // r0@4
  unsigned int *v6; // r2@5
  unsigned int v7; // r1@7
  void (*v8)(void); // r3@16
  SkinPack **v9; // r5@18 OVERLAPPED
  SkinPack **v10; // r6@18 OVERLAPPED
  SkinPack *v11; // r0@20
  void *v12; // r0@25
  int v13; // r0@27
  TaskGroup *v14; // r0@29
  TaskGroup *v15; // r0@30
  SkinRepository *result; // r0@31

  v1 = this;
  *(_DWORD *)this = &off_26DAE9C;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 108);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void (**)(void))(v2 + 16);
      if ( v4 )
        v4();
      v5 = *(_DWORD *)(v2 + 4);
      if ( v5 )
      {
        v6 = (unsigned int *)(v5 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
        }
        else
          v7 = (*v6)--;
        if ( v7 == 1 )
          (*(void (**)(void))(*(_DWORD *)v5 + 12))();
      }
      v2 += 24;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 27);
  }
  if ( v2 )
    operator delete((void *)v2);
  v8 = (void (*)(void))*((_DWORD *)v1 + 24);
  if ( v8 )
    v8();
  *(_QWORD *)&v9 = *(_QWORD *)((char *)v1 + 76);
  if ( v9 != v10 )
      if ( *v9 )
        v11 = SkinPack::~SkinPack(*v9);
        operator delete((void *)v11);
      *v9 = 0;
      ++v9;
    while ( v10 != v9 );
    v9 = (SkinPack **)*((_DWORD *)v1 + 19);
  if ( v9 )
    operator delete(v9);
  v12 = (void *)*((_DWORD *)v1 + 16);
  if ( v12 )
    operator delete(v12);
  v13 = *((_DWORD *)v1 + 14);
  if ( v13 )
    (*(void (**)(void))(*(_DWORD *)v13 + 4))();
  *((_DWORD *)v1 + 14) = 0;
  std::_Rb_tree<mce::UUID,mce::UUID,std::_Identity<mce::UUID>,std::less<mce::UUID>,std::allocator<mce::UUID>>::_M_erase(
    (int)v1 + 32,
    *((_DWORD *)v1 + 10));
  v14 = (TaskGroup *)*((_DWORD *)v1 + 6);
  if ( v14 )
    v15 = TaskGroup::~TaskGroup(v14);
    operator delete((void *)v15);
  result = v1;
  *((_DWORD *)v1 + 6) = 0;
  return result;
}


void __fastcall SkinRepository::_preLoadSkinPack(SkinRepository *this, Pack *a2)
{
  SkinRepository *v2; // r4@1
  Pack *v3; // r5@1
  int v4; // r0@1
  PackManifest *v5; // r0@2
  int v6; // r0@3
  int v7; // r5@3
  int (__fastcall *v8)(int, int *, char **); // r6@3
  int v9; // r5@3
  void *v10; // r0@3
  char *v11; // r0@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  unsigned int *v14; // r2@12
  signed int v15; // r1@14
  int v16; // [sp+8h] [bp-28h]@3
  char *v17; // [sp+Ch] [bp-24h]@1

  v2 = this;
  v3 = a2;
  v17 = (char *)&unk_28898CC;
  v4 = Pack::getAccessStrategy(a2);
  if ( (*(int (**)(void))(*(_DWORD *)v4 + 56))() == 2
    || (v5 = (PackManifest *)Pack::getManifest(v3), PackManifest::getPackOrigin(v5) == 1) )
  {
    v6 = Pack::getAccessStrategy(v3);
    v7 = v6;
    v8 = *(int (__fastcall **)(int, int *, char **))(*(_DWORD *)v6 + 40);
    sub_119C884((void **)&v16, "geometry.json");
    v9 = v8(v7, &v16, &v17);
    v10 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
    {
      v14 = (unsigned int *)(v16 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v10);
    }
    if ( v9 == 1 )
      SkinGeometryGroup::loadModelPackFromString(*((_DWORD *)v2 + 1), (int *)&v17, 0);
  }
  v11 = v17 - 12;
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
}


void __fastcall SkinRepository::onImagePickingCanceled(SkinRepository *this)
{
  SkinRepository::onImagePickingCanceled(this);
}


int __fastcall SkinRepository::loadSkinPack(SkinRepository *this, const mce::UUID *a2, int a3)
{
  SkinRepository *v3; // r5@1
  int v4; // r8@1
  int v5; // r6@1
  __int64 v6; // kr00_8@1
  __int64 v7; // kr08_8@1
  int (__fastcall *v8)(int, _DWORD **); // r11@1
  _DWORD *v9; // r0@1
  int result; // r0@1
  _DWORD *v11; // [sp+4h] [bp-34h]@1
  int (*v12)(void); // [sp+Ch] [bp-2Ch]@1
  char *(__fastcall *v13)(int **, Pack *); // [sp+10h] [bp-28h]@1

  v3 = this;
  v4 = a3;
  v5 = *((_DWORD *)this + 14);
  v6 = *(_QWORD *)a2;
  v7 = *((_QWORD *)a2 + 1);
  v8 = *(int (__fastcall **)(int, _DWORD **))(*(_DWORD *)v5 + 12);
  v9 = operator new(0x20u);
  *v9 = v3;
  v9[1] = 0;
  *((_QWORD *)v9 + 1) = v6;
  *((_QWORD *)v9 + 2) = v7;
  v9[6] = v4;
  v9[7] = 0;
  v11 = v9;
  v12 = (int (*)(void))sub_E81DC6;
  v13 = sub_E81CE4;
  result = v8(v5, &v11);
  if ( v12 )
    result = v12();
  return result;
}


char *__fastcall SkinRepository::getLoadedSkinPacks(SkinRepository *this)
{
  return (char *)this + 76;
}


int __fastcall SkinRepository::addLoadListener(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  void (__fastcall *v8)(int *, int, signed int); // r3@7
  __int64 v9; // r0@9 OVERLAPPED
  int v10; // r1@10
  unsigned int *v11; // r1@11
  unsigned int v12; // r2@13
  void (__fastcall *v13)(_DWORD, _DWORD, _DWORD); // r2@17
  int v14; // r2@17
  int result; // r0@20
  unsigned int *v16; // r2@21
  unsigned int v17; // r1@23
  int v18; // [sp+0h] [bp-28h]@1
  int v19; // [sp+4h] [bp-24h]@1
  int v20; // [sp+8h] [bp-20h]@8
  void (__fastcall *v21)(_DWORD, _DWORD, _DWORD); // [sp+10h] [bp-18h]@7
  int v22; // [sp+14h] [bp-14h]@8

  v3 = a1;
  v18 = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  v19 = v5;
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 8);
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
  v21 = 0;
  v8 = *(void (__fastcall **)(int *, int, signed int))(a3 + 8);
  if ( v8 )
    v8(&v20, a3, 2);
    v22 = *(_DWORD *)(v4 + 12);
    v21 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v4 + 8);
  v9 = *(_QWORD *)(v3 + 112);
  if ( (_DWORD)v9 == HIDWORD(v9) )
    std::vector<SkinRepository::LoadListener,std::allocator<SkinRepository::LoadListener>>::_M_emplace_back_aux<SkinRepository::LoadListener>(
      (unsigned __int64 *)(v3 + 108),
      (int)&v18);
  else
    *(_DWORD *)v9 = v18;
    HIDWORD(v9) = v19;
    *(_DWORD *)(v9 + 4) = v19;
    if ( HIDWORD(v9) )
      v11 = (unsigned int *)(v10 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 + 1, v11) );
      }
      else
        ++*v11;
    *(_DWORD *)(v9 + 16) = 0;
    *(__int64 *)((char *)&v9 + 4) = *(_QWORD *)&v20;
    *(_QWORD *)&v20 = *(_QWORD *)(v9 + 8);
    *(_QWORD *)(v9 + 8) = *(__int64 *)((char *)&v9 + 4);
    v13 = v21;
    v21 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v9 + 16);
    *(_DWORD *)(v9 + 16) = v13;
    v14 = v22;
    v22 = *(_DWORD *)(v9 + 20);
    *(_DWORD *)(v9 + 20) = v14;
    *(_DWORD *)(v3 + 112) += 24;
  if ( v21 )
    v21(&v20, &v20, 3);
  result = v19;
  if ( v19 )
    v16 = (unsigned int *)(v19 + 8);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


signed int __fastcall SkinRepository::canPickSkin(SkinRepository *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 104);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


void __fastcall SkinRepository::_initPackSources(SkinRepository *this)
{
  SkinRepository::_initPackSources(this);
}


SkinPack *__fastcall SkinRepository::getSkinPackById(SkinRepository *this, const mce::UUID *a2)
{
  SkinPack **v2; // r5@1 OVERLAPPED
  SkinPack **v3; // r6@1 OVERLAPPED
  const mce::UUID *v4; // r4@1
  char *v5; // r8@2
  char *v6; // r0@3
  SkinPack *result; // r0@6

  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 76);
  v4 = a2;
  if ( v2 == v3 )
  {
LABEL_6:
    result = 0;
  }
  else
    v5 = (char *)a2 + 8;
    while ( 1 )
    {
      v6 = SkinPack::getId(*v2);
      if ( *(_QWORD *)v4 == *(_QWORD *)v6 && *(_QWORD *)v5 == *((_QWORD *)v6 + 1) )
        break;
      ++v2;
      if ( v3 == v2 )
        goto LABEL_6;
    }
    result = *v2;
  return result;
}


RakNet *__fastcall SkinRepository::getPremiumSkinPacksPath(SkinRepository *this)
{
  void **v1; // r4@1
  int v2; // r3@1
  int v3; // r2@1
  void *v4; // r0@1
  RakNet *result; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  int v8; // [sp+0h] [bp-438h]@1
  int v9; // [sp+8h] [bp-430h]@1
  int v10; // [sp+Ch] [bp-42Ch]@1
  int v11; // [sp+10h] [bp-428h]@1
  int v12; // [sp+14h] [bp-424h]@1
  char v13; // [sp+1Ch] [bp-41Ch]@1
  int v14; // [sp+20h] [bp-418h]@1
  RakNet *v15; // [sp+424h] [bp-14h]@1

  v1 = (void **)this;
  v15 = _stack_chk_guard;
  ResourcePackRepository::getPremiumPackPath((ResourcePackRepository *)&v8);
  v2 = *(_DWORD *)(v8 - 12);
  v3 = *(_DWORD *)(dword_27CC694 - 12);
  v9 = v8;
  v10 = v2;
  v11 = dword_27CC694;
  v12 = v3;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v13, (int)&v9, 2);
  sub_119C884(v1, (const char *)&v14);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  result = (RakNet *)(_stack_chk_guard - v15);
  if ( _stack_chk_guard != v15 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall SkinRepository::reloadSkinPackLocText(int result)
{
  int v1; // r5@1
  int v2; // r4@1
  int (__fastcall *v3)(int, _DWORD **); // r6@2
  _DWORD *v4; // r0@2
  __int64 v5; // r1@2
  _DWORD *v6; // [sp+0h] [bp-20h]@2
  __int64 v7; // [sp+8h] [bp-18h]@2

  v1 = result;
  v2 = *(_DWORD *)(result + 56);
  if ( v2 )
  {
    v3 = *(int (__fastcall **)(int, _DWORD **))(*(_DWORD *)v2 + 12);
    v4 = operator new(4u);
    LODWORD(v5) = sub_E81FAE;
    *v4 = v1;
    HIDWORD(v5) = sub_E81F90;
    v6 = v4;
    v7 = v5;
    result = v3(v2, &v6);
    if ( (_DWORD)v7 )
      result = ((int (__cdecl *)(_DWORD **))v7)(&v6);
  }
  return result;
}


void __fastcall SkinRepository::_preLoadSkinPack(SkinRepository *this, Pack *a2)
{
  SkinRepository::_preLoadSkinPack(this, a2);
}


signed int __fastcall SkinRepository::storeSkin(SkinRepository *this, const ResourceLocation *a2, const ResourceLocation *a3)
{
  char *v3; // r5@1
  const ResourceLocation *v4; // r9@1
  const ResourceLocation *v5; // r4@1
  signed int v6; // r7@1
  int v7; // r5@2
  unsigned int v8; // r4@2
  void *v9; // r0@2
  int v10; // r5@3
  unsigned int v11; // r4@3
  void *v12; // r0@3
  unsigned __int64 v13; // r2@4
  unsigned __int64 v14; // r2@4
  unsigned int *v16; // r2@8
  signed int v17; // r1@10
  unsigned int *v18; // r2@12
  signed int v19; // r1@14
  char v20; // [sp+4h] [bp-21D4h]@1
  int v21; // [sp+8h] [bp-21D0h]@3
  int v22; // [sp+Ch] [bp-21CCh]@2
  __int64 v23; // [sp+10h] [bp-21C8h]@2
  __int64 v24; // [sp+18h] [bp-21C0h]@3
  void **v25; // [sp+24h] [bp-21B4h]@3
  int v26; // [sp+28h] [bp-21B0h]@4
  void **v27; // [sp+2Ch] [bp-21ACh]@3
  int v28; // [sp+30h] [bp-21A8h]@4
  void **v29; // [sp+1060h] [bp-1178h]@3
  int v30; // [sp+10D0h] [bp-1108h]@3
  __int16 v31; // [sp+10D4h] [bp-1104h]@3
  int v32; // [sp+10D8h] [bp-1100h]@3
  int v33; // [sp+10DCh] [bp-10FCh]@3
  int v34; // [sp+10E0h] [bp-10F8h]@3
  int v35; // [sp+10E4h] [bp-10F4h]@3
  void **v36; // [sp+10E8h] [bp-10F0h]@2
  int v37; // [sp+10ECh] [bp-10ECh]@4
  void **v38; // [sp+10F0h] [bp-10E8h]@2
  int v39; // [sp+10F4h] [bp-10E4h]@4
  void **v40; // [sp+2124h] [bp-B4h]@2
  int v41; // [sp+2194h] [bp-44h]@2
  __int16 v42; // [sp+2198h] [bp-40h]@2
  int v43; // [sp+219Ch] [bp-3Ch]@2
  int v44; // [sp+21A0h] [bp-38h]@2
  int v45; // [sp+21A4h] [bp-34h]@2
  int v46; // [sp+21A8h] [bp-30h]@2

  v3 = &v20;
  v4 = a3;
  v5 = a2;
  *(_DWORD *)&v20 = _stack_chk_guard;
  v6 = 0;
  if ( SkinRepository::isValidSkin(_stack_chk_guard, a2) == 1 )
  {
    ResourceLocation::getFullPath((ResourceLocation *)&v22, (int)v5);
    v7 = v22;
    v8 = *(_DWORD *)(v22 - 12);
    sub_119D70C((int)&v40);
    v40 = &off_26D3AF0;
    v41 = 0;
    v42 = 0;
    v46 = 0;
    v45 = 0;
    v44 = 0;
    v43 = 0;
    v23 = __PAIR__(v8, v7);
    Core::FileStream::FileStream((int)&v36, (int)off_26D7EA4, &v23, 12);
    v36 = &off_26D7E64;
    v40 = &off_26D7E8C;
    v38 = &off_26D7E78;
    v9 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
    {
      v16 = (unsigned int *)(v22 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v9);
    }
    ResourceLocation::getFullPath((ResourceLocation *)&v21, (int)v4);
    v10 = v21;
    v11 = *(_DWORD *)(v21 - 12);
    sub_119D70C((int)&v29);
    v29 = &off_26D3AF0;
    v30 = 0;
    v31 = 0;
    v35 = 0;
    v34 = 0;
    v33 = 0;
    v32 = 0;
    v24 = __PAIR__(v11, v10);
    Core::FileStream::FileStream((int)&v25, (int)off_26D81A4, &v24, 52);
    v25 = &off_26D8170;
    v29 = &off_26D8198;
    v27 = &off_26D8184;
    v12 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v21 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v12);
    sub_119DA6C((char *)&v27, v43);
    v25 = &off_26D679C;
    v29 = &off_26D67C4;
    v27 = &off_26D67B0;
    Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v28, (int)&off_26D67C4, v13);
    v25 = &off_26D67DC;
    v29 = &off_26D67F0;
    v26 = 0;
    sub_119C964(&v29);
    LODWORD(v14) = &v37;
    v36 = &off_26D7EEC;
    v40 = &off_26D7F14;
    v38 = &off_26D7F00;
    Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v39, (int)&off_26D7F14, v14);
    v36 = &off_26D7F6C;
    v40 = &off_26D7F80;
    v37 = 0;
    sub_119C964(&v40);
    v3 = &v20;
    v6 = 1;
  }
  if ( _stack_chk_guard != *(RakNet **)v3 )
    _stack_chk_fail((char *)_stack_chk_guard - *(_DWORD *)v3);
  return v6;
}


void __fastcall SkinRepository::onImagePickingCanceled(SkinRepository *this)
{
  SkinRepository *v1; // r4@1
  void (__fastcall *v2)(char *, _DWORD, char **); // r3@2
  char *v3; // r0@2
  char *v4; // r0@3
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  unsigned int *v7; // r2@9
  signed int v8; // r1@11
  char *v9; // [sp+8h] [bp-28h]@1
  char *v10; // [sp+10h] [bp-20h]@2

  v1 = this;
  *((_BYTE *)this + 104) = 0;
  sub_119C884((void **)&v9, (const char *)&unk_257BC67);
  if ( !*((_DWORD *)v1 + 24) )
    sub_119C8E4();
  v2 = (void (__fastcall *)(char *, _DWORD, char **))*((_DWORD *)v1 + 25);
  v10 = v9;
  v9 = (char *)&unk_28898CC;
  v2((char *)v1 + 88, 0, &v10);
  v3 = v10 - 12;
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v10 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = v9 - 12;
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v9 - 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
}


void __fastcall SkinRepository::~SkinRepository(SkinRepository *this)
{
  SkinRepository::~SkinRepository(this);
}


int __fastcall SkinRepository::freeMemoryMappedData(SkinRepository *this)
{
  SkinRepository *v1; // r4@1
  int v2; // r5@1
  int (__fastcall *v3)(int, _DWORD **); // r6@1
  _DWORD *v4; // r0@1
  int result; // r0@1
  _DWORD *v6; // [sp+0h] [bp-20h]@1
  int (__cdecl *v7)(_DWORD); // [sp+8h] [bp-18h]@1
  int (__fastcall *v8)(int, Pack *); // [sp+Ch] [bp-14h]@1

  v1 = this;
  v2 = *((_DWORD *)this + 14);
  v3 = *(int (__fastcall **)(int, _DWORD **))(*(_DWORD *)v2 + 12);
  v4 = operator new(4u);
  *v4 = v1;
  v6 = v4;
  v7 = (int (__cdecl *)(_DWORD))sub_E81E2E;
  v8 = sub_E81E08;
  result = v3(v2, &v6);
  if ( v7 )
    result = v7(&v6);
  return result;
}


signed int __fastcall SkinRepository::isSkinPackLoading(SkinRepository *this, const mce::UUID *a2)
{
  SkinRepository *v2; // r8@1
  const mce::UUID *v3; // r4@1
  __int64 v4; // r6@1
  char *v5; // r9@2
  PackManifest *v6; // r0@3
  char *v7; // r0@3
  Pack *v8; // r0@6
  PackManifest *v9; // r0@7
  char *v10; // r0@7

  v2 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 8);
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    v5 = (char *)a2 + 8;
    do
    {
      v6 = (PackManifest *)Pack::getManifest(*(Pack **)v4);
      v7 = PackManifest::getIdentity(v6);
      if ( *(_QWORD *)v3 == *(_QWORD *)v7 && *(_QWORD *)v5 == *((_QWORD *)v7 + 1) )
        return 1;
      LODWORD(v4) = v4 + 4;
    }
    while ( HIDWORD(v4) != (_DWORD)v4 );
  }
  v8 = (Pack *)*((_DWORD *)v2 + 15);
  if ( v8 )
    v9 = (PackManifest *)Pack::getManifest(v8);
    v10 = PackManifest::getIdentity(v9);
    if ( *(_QWORD *)v3 == *(_QWORD *)v10 && *((_QWORD *)v3 + 1) == *((_QWORD *)v10 + 1) )
      return 1;
  return 0;
}


Skin *__fastcall SkinRepository::resolveSkinHandle(int a1, unsigned int *a2)
{
  int v2; // r4@1
  Skin *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+0h] [bp-30h]@1
  int v9; // [sp+14h] [bp-1Ch]@1

  v2 = a1;
  SkinRepository::deserializeSkinName((int)&v8, (int)a2, a2);
  v3 = SkinRepository::resolveSkinHandle(v2, (int)&v8);
  v4 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v9 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  return v3;
}


void __fastcall SkinRepository::~SkinRepository(SkinRepository *this)
{
  SkinRepository *v1; // r0@1

  v1 = SkinRepository::~SkinRepository(this);
  j_j_j__ZdlPv_4((void *)v1);
}


BackgroundTask *__fastcall SkinRepository::update(SkinRepository *this)
{
  SkinRepository *v1; // r4@1
  BackgroundTask *result; // r0@1
  BackgroundTask *v3; // r2@1
  int v4; // r6@3
  int v5; // r5@5
  _DWORD *v6; // r0@5
  __int64 v7; // r1@5
  _DWORD *v8; // r0@5
  __int64 v9; // r1@5
  _DWORD *v10; // [sp+8h] [bp-30h]@5
  __int64 v11; // [sp+10h] [bp-28h]@5
  _DWORD *v12; // [sp+18h] [bp-20h]@5
  __int64 v13; // [sp+20h] [bp-18h]@5

  v1 = this;
  v3 = (BackgroundTask *)(*((_QWORD *)this + 8) >> 32);
  result = (BackgroundTask *)*((_QWORD *)this + 8);
  if ( result != v3 && !*((_DWORD *)v1 + 15) )
  {
    v4 = *(_DWORD *)result;
    *((_DWORD *)v1 + 15) = *(_DWORD *)result;
    if ( (BackgroundTask *)((char *)result + 4) != v3 )
    {
      _aeabi_memmove4(result, (char *)result + 4);
      v4 = *((_DWORD *)v1 + 15);
      v3 = (BackgroundTask *)*((_DWORD *)v1 + 17);
    }
    *((_DWORD *)v1 + 17) = (char *)v3 - 4;
    v5 = *((_DWORD *)v1 + 6);
    v6 = operator new(8u);
    LODWORD(v7) = sub_E815CA;
    *v6 = v1;
    v6[1] = v4;
    HIDWORD(v7) = sub_E815BA;
    v12 = v6;
    v13 = v7;
    v8 = operator new(8u);
    LODWORD(v9) = sub_E81670;
    *v8 = v1;
    v8[1] = v4;
    HIDWORD(v9) = sub_E81604;
    v10 = v8;
    v11 = v9;
    result = TaskGroup::queue(v5, (int)&v12, (int)&v10, 1u, 0xFFFFFFFF);
    if ( (_DWORD)v11 )
      result = (BackgroundTask *)((int (*)(void))v11)();
    if ( (_DWORD)v13 )
      result = (BackgroundTask *)((int (*)(void))v13)();
  }
  return result;
}


Skin *__fastcall SkinRepository::resolveSkinHandle(int a1, int a2)
{
  int v2; // r4@1
  __int64 v3; // r2@2
  SkinPack **v4; // r5@5 OVERLAPPED
  SkinPack **v5; // r6@5 OVERLAPPED
  char *v6; // r0@6
  Skin *result; // r0@9
  SkinPack *v8; // r0@11
  int v9; // r1@12

  v2 = a2;
  if ( *(_QWORD *)&mce::UUID::EMPTY == *(_QWORD *)a2 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    HIDWORD(v3) ^= HIDWORD(qword_287E930);
    if ( v3 == (unsigned int)qword_287E930 )
      goto LABEL_9;
  }
  if ( *(_DWORD *)(a2 + 16) == -1 && !*(_DWORD *)(*(_DWORD *)(a2 + 20) - 12) )
    goto LABEL_9;
  *(_QWORD *)&v4 = *(_QWORD *)(a1 + 76);
  if ( v4 == v5 )
  while ( 1 )
    v6 = SkinPack::getId(*v4);
    if ( *(_QWORD *)v2 == *(_QWORD *)v6 && *(_QWORD *)(v2 + 8) == *((_QWORD *)v6 + 1) )
      break;
    ++v4;
    if ( v5 == v4 )
  v8 = *v4;
  if ( *v4 )
    v9 = *(_DWORD *)(v2 + 16);
    if ( v9 == -1 )
      result = SkinPack::getSkinByName((int)v8, (_BYTE **)(v2 + 20));
    else
      result = (Skin *)SkinPack::getSkinAt(v8, v9);
    if ( !result )
      result = 0;
  else
LABEL_9:
    result = 0;
  return result;
}


int __fastcall SkinRepository::pickSkin(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int v5; // r5@1
  int result; // r0@1
  int v7; // r0@2
  void (__fastcall *v8)(int *); // r3@2
  int v9; // r1@3
  int v10; // r5@5
  void (__cdecl *v11)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@5
  int v12; // r3@7
  _DWORD *v13; // r0@8
  int v14; // [sp+0h] [bp-20h]@3
  int v15; // [sp+4h] [bp-1Ch]@3
  void (__cdecl *v16)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@2
  int v17; // [sp+Ch] [bp-14h]@3

  v4 = a1;
  v5 = a2;
  result = *(_BYTE *)(a1 + 104);
  if ( !result )
  {
    *(_BYTE *)(v4 + 104) = 1;
    v7 = 0;
    v16 = 0;
    v8 = *(void (__fastcall **)(int *))(a2 + 8);
    if ( v8 )
    {
      v8(&v14);
      v7 = *(_DWORD *)(v5 + 12);
      v17 = *(_DWORD *)(v5 + 12);
      v9 = *(_DWORD *)(v5 + 8);
      v16 = *(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v5 + 8);
      v3 = v15;
      v2 = v14;
    }
    else
      v9 = 0;
    v10 = v4 + 88;
    *(_QWORD *)&v14 = *(_QWORD *)(v4 + 88);
    *(_DWORD *)v10 = v2;
    *(_DWORD *)(v10 + 4) = v3;
    v16 = *(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 96);
    v11 = v16;
    *(_DWORD *)(v4 + 96) = v9;
    v17 = *(_DWORD *)(v4 + 100);
    *(_DWORD *)(v4 + 100) = v7;
    if ( v11 )
      v11(&v14, &v14, 3, v11);
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v13 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v13 = &ServiceLocator<AppPlatform>::mDefaultService;
    result = (*(int (__cdecl **)(_DWORD, int, _DWORD, int))(*(_DWORD *)*v13 + 140))(
               *v13,
               v4,
               *(_DWORD *)(*(_DWORD *)*v13 + 140),
               v12);
  }
  return result;
}


void __fastcall SkinRepository::onImagePickingSuccess(int a1, int *a2)
{
  int v2; // r4@1
  void (__fastcall *v3)(int, signed int, char **); // r3@2
  char *v4; // r0@2
  char *v5; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  char *v10; // [sp+0h] [bp-28h]@1
  char *v11; // [sp+4h] [bp-24h]@2

  v2 = a1;
  *(_BYTE *)(a1 + 104) = 0;
  sub_119C854((int *)&v10, a2);
  if ( !*(_DWORD *)(v2 + 96) )
    sub_119C8E4();
  v3 = *(void (__fastcall **)(int, signed int, char **))(v2 + 100);
  v11 = v10;
  v10 = (char *)&unk_28898CC;
  v3(v2 + 88, 1, &v11);
  v4 = v11 - 12;
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = v10 - 12;
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
}


_BOOL4 __fastcall SkinRepository::isTextureLoaded(SkinRepository *this, const ResourceLocation *a2)
{
  return mce::TextureGroup::loadTexture(*((mce::TextureGroup **)this + 2), a2, 1) != 0;
}


int __fastcall SkinRepository::SkinRepository(int a1, int a2, int a3, int a4, __int64 a5)
{
  int v5; // r4@1
  int v6; // r10@1
  void *v7; // r0@3
  int v8; // r1@4
  TaskGroup *v9; // r0@4
  TaskGroup *v10; // r0@5
  int v11; // r5@6
  __int64 v12; // kr00_8@6
  __int64 v13; // kr08_8@6
  void (__fastcall *v14)(int, _DWORD **); // r8@6
  _DWORD *v15; // r0@6
  __int64 v16; // r1@6
  unsigned int *v18; // r2@9
  signed int v19; // r1@11
  int v20; // [sp+4h] [bp-5Ch]@4
  int v21; // [sp+8h] [bp-58h]@1
  int v22; // [sp+Ch] [bp-54h]@1
  int v23; // [sp+10h] [bp-50h]@1
  char v24; // [sp+14h] [bp-4Ch]@1
  void (*v25)(void); // [sp+1Ch] [bp-44h]@1
  _DWORD *v26; // [sp+28h] [bp-38h]@6
  __int64 v27; // [sp+30h] [bp-30h]@6

  v5 = a1;
  *(_DWORD *)a1 = &off_26DAE9C;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 12) = a4;
  *(_QWORD *)(a1 + 16) = a5;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = &off_26DAE80;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(v5 + 44) = v5 + 36;
  *(_DWORD *)(v5 + 48) = v5 + 36;
  *(_DWORD *)(a1 + 96) = 0;
  *(_BYTE *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 108) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  v6 = a1 + 56;
  *(_DWORD *)(v6 + 4) = 0;
  *(_DWORD *)(v6 + 8) = 0;
  *(_DWORD *)(v6 + 12) = 0;
  *(_DWORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 20) = 0;
  *(_DWORD *)(v6 + 24) = 0;
  *(_DWORD *)(v6 + 28) = 0;
  SkinRepository::getUserSkinPacksPath((SkinRepository *)&v21);
  v22 = v21;
  v23 = *(_DWORD *)(v21 - 12);
  Core::FileSystem::createOneDirectoryIfNotExisting((int)&v24, (__int64 *)&v22);
  if ( v25 )
    v25();
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v21 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  std::make_unique<TaskGroup,WorkerPool &,char const(&)[29]>(&v20, WorkerPool::ASYNC, "Skin Pack loading task group");
  v8 = v20;
  v20 = 0;
  v9 = *(TaskGroup **)(v5 + 24);
  *(_DWORD *)(v5 + 24) = v8;
  if ( v9 )
    v10 = TaskGroup::~TaskGroup(v9);
    operator delete((void *)v10);
  SkinRepository::_initPackSources((SkinRepository *)v5);
  v11 = *(_DWORD *)v6;
  v12 = *(_QWORD *)&SkinRepository::VANILLA_SKIN_PACK_UUID;
  v13 = *(_QWORD *)&dword_27CC6D0;
  v14 = *(void (__fastcall **)(int, _DWORD **))(**(_DWORD **)v6 + 12);
  v15 = operator new(0x20u);
  LODWORD(v16) = sub_E81DC6;
  *v15 = v5;
  v15[1] = 0;
  HIDWORD(v16) = sub_E81CE4;
  *((_QWORD *)v15 + 1) = v12;
  *((_QWORD *)v15 + 2) = v13;
  v15[6] = 0;
  v15[7] = 0;
  v26 = v15;
  v27 = v16;
  v14(v11, &v26);
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  return v5;
}


char *__fastcall SkinRepository::_loadSkinPack(SkinRepository *this, Pack *a2, int a3)
{
  SkinRepository *v3; // r6@1
  Pack *v4; // r7@1
  int *v5; // r9@1
  int v6; // r4@1
  int v7; // r5@1
  PackManifest *v8; // r0@2
  char *v9; // r8@2
  SkinPack **v10; // r10@4
  _QWORD *v11; // r9@5
  char *v12; // r0@6
  SkinPack **v13; // r1@8
  int v14; // r0@8
  signed int v15; // r2@9
  char *v16; // r4@10
  int v17; // r8@10
  SkinPack **v18; // r7@10
  SkinPack *v19; // r1@11
  SkinPack *v20; // r0@11
  SkinPack *v21; // r0@12
  _DWORD *v22; // r7@15
  SkinPack *v23; // r0@15
  SkinPack *v24; // r0@16
  int (__fastcall *v25)(int, int *, char **); // r7@20
  int v26; // r7@20
  void *v27; // r0@20
  int v28; // r0@22
  int v29; // r9@23
  PackManifest *v30; // r0@24
  bool v31; // zf@26
  int (__fastcall *v32)(int, int *, char **); // r7@30
  int v33; // r5@30
  void *v34; // r0@30
  int v35; // r0@34
  int v36; // r5@34
  void *v37; // r0@34
  Pack **v38; // r5@35
  int v39; // r5@38
  const Json::ValueIteratorBase *v40; // r6@38
  void **v41; // r11@38
  int *v42; // r10@38
  Json::Value *v43; // r6@39
  int v44; // r5@39
  void *v45; // r0@39
  int v46; // r5@40
  __int64 v47; // r0@40
  Json::Value *v48; // r10@41
  const char *v49; // r5@41
  size_t v50; // r0@41
  size_t v51; // r6@41
  int v52; // r0@42
  void *v53; // r0@48
  void *v54; // r0@49
  int v55; // r5@50
  char v56; // r0@50
  char v57; // r0@53
  void *v58; // r6@57
  size_t v59; // r5@57
  char *v60; // r0@63
  void *v61; // r0@64
  int v62; // r5@66
  __int64 v63; // r0@66
  void **v64; // r6@66
  const char *v65; // r5@67
  size_t v66; // r0@67
  size_t v67; // r6@67
  int v68; // r0@68
  void *v69; // r0@75
  void *v70; // r0@76
  int v71; // r5@77
  void *v72; // r0@77
  SkinPack *v73; // r5@78
  void *v74; // r0@78
  void *v75; // r0@79
  void *v76; // r0@80
  void *v77; // r0@81
  void *v78; // r0@82
  unsigned int *v79; // r2@84
  signed int v80; // r1@86
  unsigned int *v81; // r2@88
  signed int v82; // r1@90
  unsigned int *v83; // r2@92
  signed int v84; // r1@94
  unsigned int *v85; // r2@96
  signed int v86; // r1@98
  unsigned int *v87; // r2@100
  signed int v88; // r1@102
  unsigned int *v89; // r2@104
  signed int v90; // r1@106
  unsigned int *v91; // r2@108
  signed int v92; // r1@110
  unsigned int *v93; // r2@112
  signed int v94; // r1@114
  unsigned int *v95; // r2@116
  signed int v96; // r1@118
  unsigned int *v97; // r2@120
  signed int v98; // r1@122
  unsigned int *v99; // r2@124
  signed int v100; // r1@126
  unsigned int *v101; // r2@148
  signed int v102; // r1@150
  unsigned int *v103; // r2@152
  signed int v104; // r1@154
  __int64 v105; // r0@189
  unsigned int *v106; // r2@191
  signed int v107; // r1@193
  unsigned int *v108; // r2@199
  signed int v109; // r1@201
  unsigned int *v110; // r2@203
  signed int v111; // r1@205
  SkinPack *v112; // r0@216
  void *v113; // r0@217
  char *v114; // r0@218
  char *v115; // r0@219
  RakNet *v116; // r1@220
  char *result; // r0@220
  unsigned int *v118; // r2@222
  signed int v119; // r1@224
  unsigned int *v120; // r2@230
  signed int v121; // r1@232
  unsigned int *v122; // r2@238
  signed int v123; // r1@240
  const char *v124; // [sp+2Ch] [bp-15CCh]@38
  const char *v125; // [sp+3Ch] [bp-15BCh]@38
  SkinRepository *v126; // [sp+40h] [bp-15B8h]@4
  SkinRepository *v127; // [sp+44h] [bp-15B4h]@20
  int v128; // [sp+48h] [bp-15B0h]@4
  Json::Value *v129; // [sp+48h] [bp-15B0h]@50
  Pack *v130; // [sp+4Ch] [bp-15ACh]@4
  char v131; // [sp+54h] [bp-15A4h]@78
  int v132; // [sp+8Ch] [bp-156Ch]@66
  int v133; // [sp+90h] [bp-1568h]@38
  int v134; // [sp+98h] [bp-1560h]@66
  int v135; // [sp+9Ch] [bp-155Ch]@66
  int v136; // [sp+A0h] [bp-1558h]@69
  int v137; // [sp+A8h] [bp-1550h]@50
  void *s1; // [sp+ACh] [bp-154Ch]@50
  int v139; // [sp+B0h] [bp-1548h]@61
  int v140; // [sp+B8h] [bp-1540h]@40
  int v141; // [sp+BCh] [bp-153Ch]@40
  int v142; // [sp+C0h] [bp-1538h]@48
  int v143; // [sp+C8h] [bp-1530h]@38
  int v144; // [sp+CCh] [bp-152Ch]@39
  char v145; // [sp+D0h] [bp-1528h]@38
  char v146; // [sp+D8h] [bp-1520h]@38
  SkinPack *v147; // [sp+E0h] [bp-1518h]@35
  int v148; // [sp+E8h] [bp-1510h]@34
  int v149; // [sp+ECh] [bp-150Ch]@34
  char v150; // [sp+F0h] [bp-1508h]@33
  char v151; // [sp+100h] [bp-14F8h]@33
  int v152; // [sp+174h] [bp-1484h]@30
  char *v153; // [sp+178h] [bp-1480h]@26
  int v154; // [sp+180h] [bp-1478h]@20
  char *v155; // [sp+184h] [bp-1474h]@20
  const char *v156[3]; // [sp+188h] [bp-1470h]@40
  __int64 v157; // [sp+1A0h] [bp-1458h]@66
  int v158; // [sp+1B0h] [bp-1448h]@38
  char v159; // [sp+1B4h] [bp-1444h]@67
  int v160; // [sp+5B4h] [bp-1044h]@67
  int v161; // [sp+5B8h] [bp-1040h]@38
  char v162; // [sp+5BCh] [bp-103Ch]@41
  int v163; // [sp+9BCh] [bp-C3Ch]@41
  char v164[1536]; // [sp+9C4h] [bp-C34h]@40
  int v165; // [sp+FC4h] [bp-634h]@40
  char v166; // [sp+FC8h] [bp-630h]@66
  int v167; // [sp+15C8h] [bp-30h]@1
  RakNet *v168; // [sp+15CCh] [bp-2Ch]@1

  v3 = this;
  v4 = a2;
  v5 = &v167;
  v6 = a3;
  v168 = _stack_chk_guard;
  v7 = Pack::getAccessStrategy(a2);
  if ( v7 )
  {
    v8 = (PackManifest *)Pack::getManifest(v4);
    v9 = PackManifest::getIdentity(v8);
    if ( *(_QWORD *)&mce::UUID::EMPTY != *(_QWORD *)v9
      || qword_287E930 != __PAIR__(
                            (unsigned int)(*((_QWORD *)v9 + 1) >> 32) ^ HIDWORD(qword_287E930),
                            (unsigned int)*((_QWORD *)v9 + 1)) )
    {
      v128 = v6;
      v130 = v4;
      v10 = (SkinPack **)*((_DWORD *)v3 + 19);
      v126 = (SkinRepository *)((char *)v3 + 76);
      if ( v10 != *((SkinPack ***)v3 + 20) )
      {
        v11 = v9 + 8;
        do
        {
          v12 = SkinPack::getId(*v10);
          if ( *(_QWORD *)v9 != *(_QWORD *)v12 || *v11 != *((_QWORD *)v12 + 1) )
          {
            ++v10;
          }
          else
            v13 = (SkinPack **)*((_DWORD *)v3 + 20);
            v14 = (int)(v10 + 1);
            if ( v10 + 1 != v13 )
            {
              v15 = (signed int)v13 - v14;
              v14 = *((_DWORD *)v3 + 20);
              if ( v15 >= 1 )
              {
                v16 = v9;
                v17 = (v15 >> 2) + 1;
                v18 = v10;
                do
                {
                  v19 = v18[1];
                  v18[1] = 0;
                  v20 = *v18;
                  *v18 = v19;
                  if ( v20 )
                  {
                    v21 = SkinPack::~SkinPack(v20);
                    operator delete((void *)v21);
                  }
                  --v17;
                  ++v18;
                }
                while ( v17 > 1 );
                v14 = *((_DWORD *)v3 + 20);
                v9 = v16;
              }
            }
            v22 = (_DWORD *)(v14 - 4);
            *((_DWORD *)v3 + 20) = v14 - 4;
            v23 = *(SkinPack **)(v14 - 4);
            if ( v23 )
              v24 = SkinPack::~SkinPack(v23);
              operator delete((void *)v24);
            *v22 = 0;
        }
        while ( v10 != *((SkinPack ***)v3 + 20) );
      }
      v155 = (char *)&unk_28898CC;
      v25 = *(int (__fastcall **)(int, int *, char **))(*(_DWORD *)v7 + 40);
      sub_119C884((void **)&v154, "skins.json");
      v127 = v3;
      v26 = v25(v7, &v154, &v155);
      v5 = &v167;
      v27 = (void *)(v154 - 12);
      if ( (int *)(v154 - 12) != &dword_28898C0 )
        v106 = (unsigned int *)(v154 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v107 = __ldrex(v106);
          while ( __strex(v107 - 1, v106) );
        else
          v107 = (*v106)--;
        if ( v107 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v27);
      if ( v26 )
        v28 = Pack::getAccessStrategy(v130);
        if ( (*(int (**)(void))(*(_DWORD *)v28 + 56))() == 2 )
          v29 = 1;
          v30 = (PackManifest *)Pack::getManifest(v130);
          v29 = PackManifest::getPackOrigin(v30);
          if ( v29 != 1 )
            v29 = 0;
        v31 = v29 == 1;
        v153 = (char *)&unk_28898CC;
        if ( v29 == 1 )
          v31 = v128 == 1;
        if ( v31 )
          v32 = *(int (__fastcall **)(int, int *, char **))(*(_DWORD *)v7 + 40);
          sub_119C884((void **)&v152, "geometry.json");
          v33 = v32(v7, &v152, &v153);
          v34 = (void *)(v152 - 12);
          if ( (int *)(v152 - 12) != &dword_28898C0 )
            v108 = (unsigned int *)(v152 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v109 = __ldrex(v108);
              while ( __strex(v109 - 1, v108) );
            else
              v109 = (*v108)--;
            if ( v109 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v34);
          if ( v33 == 1 )
            SkinGeometryGroup::loadModelPackFromString(*((_DWORD *)v3 + 1), (int *)&v153, 0);
        Json::Reader::Reader((Json::Reader *)&v151);
        Json::Value::Value(&v150, 0);
        if ( Json::Reader::parse((int)&v151, (int *)&v155, (int)&v150, 1) )
          v35 = Pack::getAccessStrategy(v130);
          I18n::appendLanguageStrings(v35);
          v36 = Json::Value::operator[]((Json::Value *)&v150, "localization_name");
          sub_119C884((void **)&v148, (const char *)&unk_257BC67);
          Json::Value::asString(&v149, v36, &v148);
          v37 = (void *)(v148 - 12);
          if ( (int *)(v148 - 12) != &dword_28898C0 )
            v110 = (unsigned int *)(v148 - 4);
                v111 = __ldrex(v110);
              while ( __strex(v111 - 1, v110) );
              v111 = (*v110)--;
            if ( v111 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v37);
          v38 = (Pack **)operator new(0x38u);
          SkinPack::SkinPack(v38, v130, &v149);
          v147 = (SkinPack *)v38;
          if ( *(_QWORD *)&SkinRepository::VANILLA_SKIN_PACK_UUID != *(_QWORD *)v9
            || *(_QWORD *)&dword_27CC6D0 != __PAIR__(
                                              (unsigned int)(*((_QWORD *)v9 + 1) >> 32) ^ unk_27CC6D4,
                                              (unsigned int)*((_QWORD *)v9 + 1)) )
            SkinPack::setPremium((SkinPack *)v38);
          v39 = Json::Value::operator[]((Json::Value *)&v150, "skins");
          Json::Value::begin((Json::Value *)&v146, v39);
          Json::Value::end((Json::Value *)&v145, v39);
          v124 = (const char *)((unsigned int)&v158 | 4);
          v125 = (const char *)((unsigned int)&v161 | 4);
          v40 = (const Json::ValueIteratorBase *)&v145;
          v41 = (void **)&v143;
          v42 = &v133;
          while ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v146, v40) != 1 )
            v43 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v146);
            v44 = Json::Value::operator[](v43, "localization_name");
            sub_119C884(v41, (const char *)&unk_257BC67);
            Json::Value::asString(&v144, v44, (int *)v41);
            v45 = (void *)(v143 - 12);
            if ( (int *)(v143 - 12) != &dword_28898C0 )
              v79 = (unsigned int *)(v143 - 4);
              if ( &pthread_create )
                __dmb();
                  v80 = __ldrex(v79);
                while ( __strex(v80 - 1, v79) );
              else
                v80 = (*v79)--;
              if ( v80 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v45);
            v46 = Json::Value::operator[](v43, "texture");
            sub_119C884((void **)&v140, (const char *)&unk_257BC67);
            Json::Value::asString(&v141, v46, &v140);
            LODWORD(v47) = v141;
            HIDWORD(v47) = *(_DWORD *)(v141 - 12);
            *(_QWORD *)v156 = v47;
            Core::SplitPathT<1024u,64u>::SplitPathT((int)v164, v156);
            if ( v165 )
              v48 = v43;
              v49 = *(const char **)&v164[8 * v165 + 1016];
              v161 = 1023;
              v162 = 0;
              v163 = 0;
              v50 = strlen(v49);
              v51 = v50;
              if ( v50 < 0x400 )
                if ( v50 )
                  _aeabi_memcpy(v125, v49, v50);
                *((_BYTE *)&v161 + v51 + 4) = 0;
                v52 = v163 + v51;
                v52 = 0;
                v162 = 0;
              v43 = v48;
              v42 = &v133;
              v163 = v52;
              _aeabi_memclr8(&v161, 1028);
            sub_119C884((void **)&v142, v125);
            v53 = (void *)(v141 - 12);
            if ( (int *)(v141 - 12) != &dword_28898C0 )
              v81 = (unsigned int *)(v141 - 4);
                  v82 = __ldrex(v81);
                while ( __strex(v82 - 1, v81) );
                v82 = (*v81)--;
              if ( v82 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v53);
            v54 = (void *)(v140 - 12);
            if ( (int *)(v140 - 12) != &dword_28898C0 )
              v83 = (unsigned int *)(v140 - 4);
                  v84 = __ldrex(v83);
                while ( __strex(v84 - 1, v83) );
                v84 = (*v83)--;
              if ( v84 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v54);
            v55 = Json::Value::operator[](v43, "geometry");
            sub_119C884((void **)&v137, (const char *)&unk_257BC67);
            Json::Value::asString((int *)&s1, v55, &v137);
            v129 = v43;
            v56 = byte_27CC6A0;
            __dmb();
            if ( !(v56 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27CC6A0) )
              sub_119C884((void **)&dword_27CC69C, "geometry.humanoid.custom");
              _cxa_atexit(sub_21E6EDC);
              j___cxa_guard_release((unsigned int *)&byte_27CC6A0);
            v57 = byte_27CC6A8;
            if ( !(v57 & 1) && j___cxa_guard_acquire(&byte_27CC6A8) )
              sub_119C884((void **)&dword_27CC6A4, "geometry.humanoid.customSlim");
              j___cxa_guard_release(&byte_27CC6A8);
            if ( v29
              || (v58 = s1, v59 = *((_DWORD *)s1 - 3), v59 == *(_DWORD *)(dword_27CC69C - 12))
              && !memcmp(s1, (const void *)dword_27CC69C, *((_DWORD *)s1 - 3))
              || v59 == *(_DWORD *)(dword_27CC6A4 - 12) && !memcmp(v58, (const void *)dword_27CC6A4, v59) )
              sub_119C854(&v139, (int *)&s1);
              sub_119C854(&v139, &dword_27CC69C);
            v60 = (char *)s1 - 12;
            if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
              v85 = (unsigned int *)((char *)s1 - 4);
                  v86 = __ldrex(v85);
                while ( __strex(v86 - 1, v85) );
                v86 = (*v85)--;
              if ( v86 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v60);
            v61 = (void *)(v137 - 12);
            if ( (int *)(v137 - 12) != &dword_28898C0 )
              v87 = (unsigned int *)(v137 - 4);
                  v88 = __ldrex(v87);
                while ( __strex(v88 - 1, v87) );
                v88 = (*v87)--;
              if ( v88 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v61);
            v41 = (void **)&v143;
            if ( v29 == 1 )
              v62 = Json::Value::operator[](v129, "cape");
              sub_119C884((void **)&v134, (const char *)&unk_257BC67);
              Json::Value::asString(&v135, v62, &v134);
              LODWORD(v63) = v135;
              HIDWORD(v63) = *(_DWORD *)(v135 - 12);
              v157 = v63;
              Core::SplitPathT<1024u,64u>::SplitPathT((int)&v166, (const char **)&v157);
              v64 = (void **)&v132;
              if ( v167 )
                v65 = (const char *)*((_DWORD *)&v166 + 2 * v167 + 254);
                v158 = 1023;
                v159 = 0;
                v160 = 0;
                v66 = strlen(v65);
                v67 = v66;
                if ( v66 < 0x400 )
                  if ( v66 )
                    _aeabi_memcpy(v124, v65, v66);
                  *((_BYTE *)&v158 + v67 + 4) = 0;
                  v68 = v160 + v67;
                else
                  v68 = 0;
                  v159 = 0;
                v64 = (void **)&v132;
                v42 = &v133;
                v160 = v68;
                _aeabi_memclr8(&v158, 1028);
              sub_119C884((void **)&v136, v124);
              v69 = (void *)(v135 - 12);
              if ( (int *)(v135 - 12) != &dword_28898C0 )
                v101 = (unsigned int *)(v135 - 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v102 = __ldrex(v101);
                  while ( __strex(v102 - 1, v101) );
                  v102 = (*v101)--;
                if ( v102 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v69);
              v70 = (void *)(v134 - 12);
              if ( (int *)(v134 - 12) != &dword_28898C0 )
                v103 = (unsigned int *)(v134 - 4);
                    v104 = __ldrex(v103);
                  while ( __strex(v104 - 1, v103) );
                  v104 = (*v103)--;
                if ( v104 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v70);
              sub_119C854(&v136, (int *)&Util::EMPTY_STRING);
            v71 = Json::Value::operator[](v129, "type");
            sub_119C884(v64, (const char *)&unk_257BC67);
            Json::Value::asString(v42, v71, (int *)v64);
            v72 = (void *)(v132 - 12);
            if ( (int *)(v132 - 12) != &dword_28898C0 )
              v89 = (unsigned int *)(v132 - 4);
                  v90 = __ldrex(v89);
                while ( __strex(v90 - 1, v89) );
                v90 = (*v89)--;
              if ( v90 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v72);
            v73 = v147;
            Skin::Skin((int)&v131, v147, &v144, &v142, &v136, &v139, v42);
            SkinPack::addSkin(v73, (const Skin *)&v131);
            Skin::~Skin((Skin *)&v131);
            v74 = (void *)(v133 - 12);
            if ( (int *)(v133 - 12) != &dword_28898C0 )
              v91 = (unsigned int *)(v133 - 4);
                  v92 = __ldrex(v91);
                while ( __strex(v92 - 1, v91) );
                v92 = (*v91)--;
              if ( v92 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v74);
            v40 = (const Json::ValueIteratorBase *)&v145;
            v75 = (void *)(v136 - 12);
            if ( (int *)(v136 - 12) != &dword_28898C0 )
              v93 = (unsigned int *)(v136 - 4);
                  v94 = __ldrex(v93);
                while ( __strex(v94 - 1, v93) );
                v94 = (*v93)--;
              if ( v94 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v75);
            v76 = (void *)(v139 - 12);
            if ( (int *)(v139 - 12) != &dword_28898C0 )
              v95 = (unsigned int *)(v139 - 4);
                  v96 = __ldrex(v95);
                while ( __strex(v96 - 1, v95) );
                v96 = (*v95)--;
              if ( v96 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v76);
            v77 = (void *)(v142 - 12);
            if ( (int *)(v142 - 12) != &dword_28898C0 )
              v97 = (unsigned int *)(v142 - 4);
                  v98 = __ldrex(v97);
                while ( __strex(v98 - 1, v97) );
                v98 = (*v97)--;
              if ( v98 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v77);
            v78 = (void *)(v144 - 12);
            if ( (int *)(v144 - 12) != &dword_28898C0 )
              v99 = (unsigned int *)(v144 - 4);
                  v100 = __ldrex(v99);
                while ( __strex(v100 - 1, v99) );
                v100 = (*v99)--;
              if ( v100 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v78);
            Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v146);
          v105 = *((_QWORD *)v127 + 10);
          if ( (_DWORD)v105 == HIDWORD(v105) )
            std::vector<std::unique_ptr<SkinPack,std::default_delete<SkinPack>>,std::allocator<std::unique_ptr<SkinPack,std::default_delete<SkinPack>>>>::_M_emplace_back_aux<std::unique_ptr<SkinPack,std::default_delete<SkinPack>>>(
              v126,
              (int *)&v147);
            if ( v147 )
              v112 = SkinPack::~SkinPack(v147);
              operator delete((void *)v112);
            HIDWORD(v105) = v147;
            v147 = 0;
            *(_DWORD *)v105 = HIDWORD(v105);
            *((_DWORD *)v127 + 20) = v105 + 4;
          v113 = (void *)(v149 - 12);
          if ( (int *)(v149 - 12) != &dword_28898C0 )
            v122 = (unsigned int *)(v149 - 4);
                v123 = __ldrex(v122);
              while ( __strex(v123 - 1, v122) );
              v123 = (*v122)--;
            if ( v123 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v113);
        Json::Value::~Value((Json::Value *)&v150);
        Json::Reader::~Reader((Json::Reader *)&v151);
        v5 = &v167;
        v114 = v153 - 12;
        if ( (int *)(v153 - 12) != &dword_28898C0 )
          v120 = (unsigned int *)(v153 - 4);
          if ( &pthread_create )
            do
              v121 = __ldrex(v120);
            while ( __strex(v121 - 1, v120) );
            v121 = (*v120)--;
          if ( v121 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v114);
      v115 = v155 - 12;
      if ( (int *)(v155 - 12) != &dword_28898C0 )
        v118 = (unsigned int *)(v155 - 4);
            v119 = __ldrex(v118);
          while ( __strex(v119 - 1, v118) );
          v119 = (*v118)--;
        if ( v119 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v115);
    }
  }
  v116 = (RakNet *)v5[1];
  result = (char *)(_stack_chk_guard - v116);
  if ( _stack_chk_guard != v116 )
    _stack_chk_fail(result);
  return result;
}


char *__fastcall SkinRepository::getSkinKeyProvider(SkinRepository *this)
{
  return (char *)this + 28;
}


signed int __fastcall SkinRepository::isSkinPackKnown(SkinRepository *this, const mce::UUID *a2)
{
  char *v2; // r7@1
  char *v3; // lr@1
  char *v4; // r12@1
  char *v5; // r0@1
  __int64 v6; // kr00_8@2
  unsigned int v7; // r9@2 OVERLAPPED
  unsigned int v8; // r10@2 OVERLAPPED
  char *v9; // r8@3
  __int64 v10; // r6@4
  signed int v11; // r4@4
  signed int v12; // r5@4
  signed int v13; // r4@11
  signed int v14; // r5@13
  bool v15; // cf@18
  __int64 v16; // r4@18
  bool v17; // zf@20
  signed int v18; // r5@20
  __int64 v19; // kr08_8@29
  signed int v20; // r7@29
  __int64 v21; // kr10_8@29
  signed int v22; // r3@29
  signed int v23; // r2@29
  signed int v24; // r3@36
  __int64 v25; // kr18_8@38
  signed int v26; // r4@38
  __int64 v27; // kr20_8@38
  signed int v28; // r1@42
  signed int result; // r0@52

  v2 = (char *)*((_DWORD *)this + 10);
  v3 = (char *)this + 36;
  v4 = (char *)this + 36;
  v5 = (char *)this + 36;
  if ( v2 )
  {
    v6 = *(_QWORD *)a2;
    v5 = v4;
    *(_QWORD *)&v7 = *((_QWORD *)a2 + 1);
    do
    {
      v9 = v5;
      v5 = v2;
      while ( 1 )
      {
        v10 = *((_QWORD *)v5 + 2);
        v11 = 0;
        v12 = 0;
        if ( (unsigned int)v10 < (unsigned int)v6 )
          v11 = 1;
        if ( HIDWORD(v10) < HIDWORD(v6) )
          v12 = 1;
        if ( HIDWORD(v10) == HIDWORD(v6) )
          v12 = v11;
        if ( !v12 )
        {
          v13 = 0;
          if ( (unsigned int)v6 < (unsigned int)v10 )
            v13 = 1;
          v14 = 0;
          if ( HIDWORD(v6) < HIDWORD(v10) )
            v14 = 1;
          if ( HIDWORD(v6) == HIDWORD(v10) )
            v14 = v13;
          if ( v14 )
            break;
          v16 = *((_QWORD *)v5 + 3);
          v15 = (unsigned int)v16 >= v7;
          LODWORD(v16) = 0;
          if ( !v15 )
            LODWORD(v16) = 1;
          v15 = HIDWORD(v16) >= v8;
          v17 = HIDWORD(v16) == v8;
          v18 = 0;
            v18 = 1;
          if ( v17 )
            v18 = v16;
          if ( !v18 )
        }
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
          v5 = v9;
          goto LABEL_28;
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
    }
    while ( v2 );
  }
LABEL_28:
  if ( v5 != v3 )
    v19 = *((_QWORD *)v5 + 2);
    v20 = 0;
    v21 = *(_QWORD *)a2;
    v22 = 0;
    v23 = 0;
    if ( (unsigned int)*(_QWORD *)a2 < (unsigned int)v19 )
      v20 = 1;
    if ( HIDWORD(v21) < HIDWORD(v19) )
      v22 = 1;
    if ( HIDWORD(v21) == HIDWORD(v19) )
      v22 = v20;
    if ( !v22 )
      v24 = 0;
      if ( (unsigned int)v19 >= (unsigned int)v21 )
        v24 = 1;
      v25 = *((_QWORD *)v5 + 3);
      v26 = 0;
      v27 = *((_QWORD *)a2 + 1);
      if ( HIDWORD(v19) >= HIDWORD(v21) )
        v26 = 1;
      if ( HIDWORD(v19) == HIDWORD(v21) )
        v26 = v24;
      v4 = v5;
      v28 = 0;
      if ( (unsigned int)v27 < (unsigned int)v25 )
        v28 = 1;
      if ( HIDWORD(v27) < HIDWORD(v25) )
        v23 = 1;
      if ( HIDWORD(v27) == HIDWORD(v25) )
        v23 = v28;
      if ( v23 )
        v4 = v3;
      if ( !v26 )
        v4 = v5;
  result = 0;
  if ( v4 != v3 )
    result = 1;
  return result;
}


void __fastcall SkinRepository::_initPackSources(SkinRepository *this)
{
  SkinRepository *v1; // r8@1
  InPackagePackSource *v2; // r7@1
  void *v3; // r5@1
  char *v4; // r4@1
  int v5; // r6@1
  DirectoryPackSource *v6; // r0@1
  DirectoryPackSource *v7; // r9@1
  unsigned int v8; // r6@3
  char *v9; // r7@9
  signed int v10; // r2@11
  int v11; // r4@11
  int v12; // r4@13
  void *v13; // r0@16
  int v14; // r5@17
  DirectoryPackSource *v15; // r5@17
  int v16; // r0@17
  void *v17; // r6@19
  unsigned int v18; // r2@19
  unsigned int v19; // r1@21
  unsigned int v20; // r4@21
  char *v21; // r7@27
  int v22; // r5@29
  int v23; // r5@31
  void *v24; // r0@34
  void *v25; // r6@35
  int v26; // r0@35
  void *v27; // r6@37
  void *v28; // r4@38
  int v29; // r5@42
  void (__fastcall *v30)(int, _DWORD **); // r4@42
  _DWORD *v31; // r0@42
  __int64 v32; // r1@42
  unsigned int *v33; // r2@47
  signed int v34; // r1@49
  unsigned int *v35; // r2@51
  signed int v36; // r1@53
  _DWORD *v37; // [sp+4h] [bp-64h]@42
  __int64 v38; // [sp+Ch] [bp-5Ch]@42
  void *ptr; // [sp+14h] [bp-54h]@37
  int v40; // [sp+18h] [bp-50h]@39
  void *v41; // [sp+1Ch] [bp-4Ch]@37
  int v42; // [sp+20h] [bp-48h]@39
  int v43; // [sp+2Ch] [bp-3Ch]@40
  int v44; // [sp+30h] [bp-38h]@17
  int v45; // [sp+34h] [bp-34h]@1
  unsigned __int64 v46; // [sp+38h] [bp-30h]@1
  char *v47; // [sp+40h] [bp-28h]@1
  char v48; // [sp+44h] [bp-24h]@38

  v1 = this;
  v46 = 0LL;
  v47 = 0;
  v2 = PackSourceFactory::createInPackagePackSource(*((_DWORD *)this + 4), 5);
  v3 = operator new(4u);
  *(_DWORD *)v3 = v2;
  v4 = (char *)v3 + 4;
  LODWORD(v46) = v3;
  HIDWORD(v46) = (char *)v3 + 4;
  v47 = (char *)v3 + 4;
  v5 = *((_DWORD *)v1 + 4);
  SkinRepository::getUserSkinPacksPath((SkinRepository *)&v45);
  v6 = PackSourceFactory::createDirectoryPackSource(v5, &v45, 5, 4, 0);
  v7 = v6;
  if ( (char *)v3 + 4 == (char *)v3 + 4 )
  {
    v8 = 2;
    if ( v8 )
    {
      if ( v8 >= 0x40000000 )
        sub_119C874();
      v9 = (char *)operator new(4 * v8);
      v4 = (char *)HIDWORD(v46);
      v3 = (void *)v46;
    }
    else
      v9 = 0;
    v10 = v4 - (_BYTE *)v3;
    v11 = (int)&v9[v4 - (_BYTE *)v3];
    *(_DWORD *)&v9[v10] = v7;
    if ( 0 != v10 >> 2 )
      _aeabi_memmove4(v9, v3);
    v12 = v11 + 4;
    if ( v3 )
      operator delete(v3);
    v46 = __PAIR__(v12, (unsigned int)v9);
    v47 = &v9[4 * v8];
  }
  else
    *(_DWORD *)v4 = v6;
    HIDWORD(v46) = (char *)v3 + 8;
  v13 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v45 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = *((_DWORD *)v1 + 4);
  SkinRepository::getPremiumSkinPacksPath((SkinRepository *)&v44);
  v15 = PackSourceFactory::createDirectoryPackSource(v14, &v44, 5, 6, 0);
  v16 = HIDWORD(v46);
  if ( (char *)HIDWORD(v46) == v47 )
    v17 = (void *)v46;
    v18 = (HIDWORD(v46) - (signed int)v46) >> 2;
    if ( !v18 )
      v18 = 1;
    v19 = v18 + ((HIDWORD(v46) - (signed int)v46) >> 2);
    v20 = v18 + ((HIDWORD(v46) - (signed int)v46) >> 2);
    if ( 0 != v19 >> 30 )
      v20 = 0x3FFFFFFF;
    if ( v19 < v18 )
    if ( v20 )
      if ( v20 >= 0x40000000 )
      v21 = (char *)operator new(4 * v20);
      v16 = HIDWORD(v46);
      v17 = (void *)v46;
      v21 = 0;
    *(_DWORD *)&v21[v16 - (_DWORD)v17] = v15;
    v22 = (int)&v21[v16 - (_DWORD)v17];
    if ( 0 != (v16 - (signed int)v17) >> 2 )
      _aeabi_memmove4(v21, v17);
    v23 = v22 + 4;
    if ( v17 )
      operator delete(v17);
    v46 = __PAIR__(v23, (unsigned int)v21);
    v47 = &v21[4 * v20];
    *(_DWORD *)HIDWORD(v46) = v15;
    HIDWORD(v46) += 4;
  v24 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v44 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  v25 = operator new(0x10u);
  CompositePackSource::CompositePackSource((int)v25, (int)&v46);
  v26 = *((_DWORD *)v1 + 14);
  *((_DWORD *)v1 + 14) = v25;
  if ( v26 )
    (*(void (**)(void))(*(_DWORD *)v26 + 4))();
    v25 = (void *)*((_DWORD *)v1 + 14);
  (*(void (__fastcall **)(void **, void *, _DWORD, char *))(*(_DWORD *)v25 + 20))(
    &ptr,
    v25,
    *((_DWORD *)v1 + 3),
    (char *)v1 + 28);
  v27 = v41;
  if ( v41 )
    do
      v28 = *(void **)v27;
      __gnu_cxx::new_allocator<std::pair<PackIdVersion const,PackReport>>::destroy<std::pair<PackIdVersion const,PackReport>>(
        (int)&v48,
        (int)v27 + 8);
      operator delete(v27);
      v27 = v28;
    while ( v28 );
  _aeabi_memclr4(ptr, 4 * v40);
  v41 = 0;
  v42 = 0;
  if ( ptr && &v43 != ptr )
    operator delete(ptr);
  v29 = *((_DWORD *)v1 + 14);
  v30 = *(void (__fastcall **)(int, _DWORD **))(*(_DWORD *)v29 + 12);
  v31 = operator new(4u);
  LODWORD(v32) = sub_E82006;
  *v31 = v1;
  HIDWORD(v32) = sub_E81FE4;
  v37 = v31;
  v38 = v32;
  v30(v29, &v37);
  if ( (_DWORD)v38 )
    ((void (*)(void))v38)();
  if ( (_DWORD)v46 )
    operator delete((void *)v46);
}


void __fastcall SkinRepository::deserializeSkinName(int a1, int a2, unsigned int *a3)
{
  int v3; // r8@1
  _DWORD *v4; // r4@1
  _DWORD *v5; // r5@1
  int **v6; // r6@4
  char v7; // r0@4
  int **v8; // r7@6
  __int64 v9; // kr08_8@7
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  int v12; // r1@16
  int v13; // t1@16
  void *v14; // r0@16
  void *v15; // r0@18
  void *v16; // r0@19
  void *v17; // r0@20
  void *v18; // r0@21
  void *v19; // r0@22
  void *v20; // r0@23
  void *v21; // r0@24
  void *v22; // r0@25
  void *v23; // r0@26
  void *v24; // r0@27
  void *v25; // r0@28
  void *v26; // r0@29
  void *v27; // r0@30
  void *v28; // r0@31
  void *v29; // r0@32
  void *v30; // r0@33
  void *v31; // r0@34
  void *v32; // r0@35
  void *v33; // r0@36
  void *v34; // r0@37
  void *v35; // r0@38
  void *v36; // r0@39
  int v37; // r0@41
  unsigned int v38; // r1@42
  unsigned int v39; // r2@42
  unsigned int v40; // r3@42
  unsigned int v41; // r0@42
  int v42; // r1@46
  int v43; // r2@46
  unsigned __int64 v44; // kr20_8@46
  int v45; // r1@47
  unsigned __int64 v46; // kr28_8@47
  unsigned int *v47; // r2@51
  signed int v48; // r1@53
  int *v49; // r0@59
  unsigned int *v50; // r2@65
  signed int v51; // r1@67
  unsigned int *v52; // r2@69
  signed int v53; // r1@71
  unsigned int *v54; // r2@73
  signed int v55; // r1@75
  unsigned int *v56; // r2@77
  signed int v57; // r1@79
  unsigned int *v58; // r2@81
  signed int v59; // r1@83
  unsigned int *v60; // r2@85
  signed int v61; // r1@87
  unsigned int *v62; // r2@89
  signed int v63; // r1@91
  unsigned int *v64; // r2@93
  signed int v65; // r1@95
  unsigned int *v66; // r2@97
  signed int v67; // r1@99
  unsigned int *v68; // r2@101
  signed int v69; // r1@103
  unsigned int *v70; // r2@105
  signed int v71; // r1@107
  unsigned int *v72; // r2@109
  signed int v73; // r1@111
  unsigned int *v74; // r2@113
  signed int v75; // r1@115
  unsigned int *v76; // r2@117
  signed int v77; // r1@119
  unsigned int *v78; // r2@121
  signed int v79; // r1@123
  unsigned int *v80; // r2@125
  signed int v81; // r1@127
  unsigned int *v82; // r2@129
  signed int v83; // r1@131
  unsigned int *v84; // r2@133
  signed int v85; // r1@135
  unsigned int *v86; // r2@137
  signed int v87; // r1@139
  unsigned int *v88; // r2@141
  signed int v89; // r1@143
  unsigned int *v90; // r2@145
  signed int v91; // r1@147
  unsigned int *v92; // r2@149
  signed int v93; // r1@151
  unsigned __int64 v94; // [sp+28h] [bp-4F8h]@2
  unsigned __int64 v95; // [sp+30h] [bp-4F0h]@3
  int v96; // [sp+3Ch] [bp-4E4h]@2
  __int64 v97; // [sp+40h] [bp-4E0h]@1
  int v98; // [sp+48h] [bp-4D8h]@1
  int v99; // [sp+5Ch] [bp-4C4h]@6
  char v100; // [sp+60h] [bp-4C0h]@6
  int v101; // [sp+64h] [bp-4BCh]@6
  int v102; // [sp+68h] [bp-4B8h]@6
  int v103; // [sp+6Ch] [bp-4B4h]@6
  int v104; // [sp+74h] [bp-4ACh]@6
  char v105; // [sp+78h] [bp-4A8h]@6
  int v106; // [sp+7Ch] [bp-4A4h]@6
  int v107; // [sp+80h] [bp-4A0h]@6
  int v108; // [sp+84h] [bp-49Ch]@6
  int v109; // [sp+8Ch] [bp-494h]@6
  char v110; // [sp+90h] [bp-490h]@6
  int v111; // [sp+94h] [bp-48Ch]@6
  int v112; // [sp+98h] [bp-488h]@6
  int v113; // [sp+9Ch] [bp-484h]@6
  int v114; // [sp+A4h] [bp-47Ch]@6
  char v115; // [sp+A8h] [bp-478h]@6
  int v116; // [sp+ACh] [bp-474h]@6
  int v117; // [sp+B0h] [bp-470h]@6
  int v118; // [sp+B4h] [bp-46Ch]@6
  int v119; // [sp+BCh] [bp-464h]@6
  char v120; // [sp+C0h] [bp-460h]@6
  int v121; // [sp+C4h] [bp-45Ch]@6
  int v122; // [sp+C8h] [bp-458h]@6
  int v123; // [sp+CCh] [bp-454h]@6
  int v124; // [sp+D4h] [bp-44Ch]@6
  char v125; // [sp+D8h] [bp-448h]@6
  int v126; // [sp+DCh] [bp-444h]@6
  int v127; // [sp+E0h] [bp-440h]@6
  int v128; // [sp+E4h] [bp-43Ch]@6
  int v129; // [sp+ECh] [bp-434h]@6
  char v130; // [sp+F0h] [bp-430h]@6
  int v131; // [sp+F4h] [bp-42Ch]@6
  int v132; // [sp+F8h] [bp-428h]@6
  int v133; // [sp+FCh] [bp-424h]@6
  int v134; // [sp+104h] [bp-41Ch]@6
  char v135; // [sp+108h] [bp-418h]@6
  int v136; // [sp+10Ch] [bp-414h]@6
  int v137; // [sp+110h] [bp-410h]@6
  int v138; // [sp+114h] [bp-40Ch]@6
  int v139; // [sp+11Ch] [bp-404h]@6
  char v140; // [sp+120h] [bp-400h]@6
  int v141; // [sp+124h] [bp-3FCh]@6
  int v142; // [sp+128h] [bp-3F8h]@6
  int v143; // [sp+12Ch] [bp-3F4h]@6
  int v144; // [sp+134h] [bp-3ECh]@6
  char v145; // [sp+138h] [bp-3E8h]@6
  int v146; // [sp+13Ch] [bp-3E4h]@6
  int v147; // [sp+140h] [bp-3E0h]@6
  int v148; // [sp+144h] [bp-3DCh]@6
  int v149; // [sp+14Ch] [bp-3D4h]@6
  char v150; // [sp+150h] [bp-3D0h]@6
  int v151; // [sp+154h] [bp-3CCh]@6
  int v152; // [sp+158h] [bp-3C8h]@6
  int v153; // [sp+15Ch] [bp-3C4h]@6
  int v154; // [sp+164h] [bp-3BCh]@6
  char v155; // [sp+168h] [bp-3B8h]@6
  int v156; // [sp+16Ch] [bp-3B4h]@6
  int v157; // [sp+170h] [bp-3B0h]@6
  int v158; // [sp+174h] [bp-3ACh]@6
  int v159; // [sp+17Ch] [bp-3A4h]@6
  char v160; // [sp+180h] [bp-3A0h]@6
  int v161; // [sp+184h] [bp-39Ch]@6
  int v162; // [sp+188h] [bp-398h]@6
  int v163; // [sp+18Ch] [bp-394h]@6
  int v164; // [sp+194h] [bp-38Ch]@6
  char v165; // [sp+198h] [bp-388h]@6
  int v166; // [sp+19Ch] [bp-384h]@6
  int v167; // [sp+1A0h] [bp-380h]@6
  int v168; // [sp+1A4h] [bp-37Ch]@6
  int v169; // [sp+1ACh] [bp-374h]@6
  char v170; // [sp+1B0h] [bp-370h]@6
  int v171; // [sp+1B4h] [bp-36Ch]@6
  int v172; // [sp+1B8h] [bp-368h]@6
  int v173; // [sp+1BCh] [bp-364h]@6
  int v174; // [sp+1C4h] [bp-35Ch]@6
  char v175; // [sp+1C8h] [bp-358h]@6
  int v176; // [sp+1CCh] [bp-354h]@6
  int v177; // [sp+1D0h] [bp-350h]@6
  int v178; // [sp+1D4h] [bp-34Ch]@6
  int v179; // [sp+1DCh] [bp-344h]@6
  char v180; // [sp+1E0h] [bp-340h]@6
  int v181; // [sp+1E4h] [bp-33Ch]@6
  int v182; // [sp+1E8h] [bp-338h]@6
  int v183; // [sp+1ECh] [bp-334h]@6
  int v184; // [sp+1F4h] [bp-32Ch]@6
  char v185; // [sp+1F8h] [bp-328h]@6
  int v186; // [sp+1FCh] [bp-324h]@6
  int v187; // [sp+200h] [bp-320h]@6
  int v188; // [sp+204h] [bp-31Ch]@6
  int v189; // [sp+20Ch] [bp-314h]@6
  char v190; // [sp+210h] [bp-310h]@6
  int v191; // [sp+214h] [bp-30Ch]@6
  int v192; // [sp+218h] [bp-308h]@6
  int v193; // [sp+21Ch] [bp-304h]@6
  int v194; // [sp+224h] [bp-2FCh]@6
  char v195; // [sp+228h] [bp-2F8h]@6
  int v196; // [sp+22Ch] [bp-2F4h]@6
  int v197; // [sp+230h] [bp-2F0h]@6
  int v198; // [sp+234h] [bp-2ECh]@6
  int v199; // [sp+23Ch] [bp-2E4h]@6
  char v200; // [sp+240h] [bp-2E0h]@6
  int v201; // [sp+244h] [bp-2DCh]@6
  int v202; // [sp+248h] [bp-2D8h]@6
  int v203; // [sp+24Ch] [bp-2D4h]@6
  int v204; // [sp+254h] [bp-2CCh]@6
  char v205; // [sp+258h] [bp-2C8h]@6
  int v206; // [sp+25Ch] [bp-2C4h]@6
  int v207; // [sp+260h] [bp-2C0h]@6
  int v208; // [sp+264h] [bp-2BCh]@6
  int *v209[2]; // [sp+268h] [bp-2B8h]@6
  int v210; // [sp+270h] [bp-2B0h]@6
  int v211; // [sp+274h] [bp-2ACh]@6
  int v212; // [sp+278h] [bp-2A8h]@6
  int v213; // [sp+27Ch] [bp-2A4h]@6
  int v214; // [sp+280h] [bp-2A0h]@6
  int v215; // [sp+288h] [bp-298h]@6
  int v216; // [sp+28Ch] [bp-294h]@6
  int v217; // [sp+290h] [bp-290h]@6
  int v218; // [sp+294h] [bp-28Ch]@6
  int v219; // [sp+298h] [bp-288h]@6
  int v220; // [sp+2A0h] [bp-280h]@6
  int v221; // [sp+2A4h] [bp-27Ch]@6
  int v222; // [sp+2A8h] [bp-278h]@6
  int v223; // [sp+2ACh] [bp-274h]@6
  int v224; // [sp+2B0h] [bp-270h]@6
  int v225; // [sp+2B8h] [bp-268h]@6
  int v226; // [sp+2BCh] [bp-264h]@6
  int v227; // [sp+2C0h] [bp-260h]@6
  int v228; // [sp+2C4h] [bp-25Ch]@6
  int v229; // [sp+2C8h] [bp-258h]@6
  int v230; // [sp+2D0h] [bp-250h]@6
  int v231; // [sp+2D4h] [bp-24Ch]@6
  int v232; // [sp+2D8h] [bp-248h]@6
  int v233; // [sp+2DCh] [bp-244h]@6
  int v234; // [sp+2E0h] [bp-240h]@6
  int v235; // [sp+2E8h] [bp-238h]@6
  int v236; // [sp+2ECh] [bp-234h]@6
  int v237; // [sp+2F0h] [bp-230h]@6
  int v238; // [sp+2F4h] [bp-22Ch]@6
  int v239; // [sp+2F8h] [bp-228h]@6
  int v240; // [sp+300h] [bp-220h]@6
  int v241; // [sp+304h] [bp-21Ch]@6
  int v242; // [sp+308h] [bp-218h]@6
  int v243; // [sp+30Ch] [bp-214h]@6
  int v244; // [sp+310h] [bp-210h]@6
  int v245; // [sp+318h] [bp-208h]@6
  int v246; // [sp+31Ch] [bp-204h]@6
  int v247; // [sp+320h] [bp-200h]@6
  int v248; // [sp+324h] [bp-1FCh]@6
  int v249; // [sp+328h] [bp-1F8h]@6
  int v250; // [sp+330h] [bp-1F0h]@6
  int v251; // [sp+334h] [bp-1ECh]@6
  int v252; // [sp+338h] [bp-1E8h]@6
  int v253; // [sp+33Ch] [bp-1E4h]@6
  int v254; // [sp+340h] [bp-1E0h]@6
  int v255; // [sp+348h] [bp-1D8h]@6
  int v256; // [sp+34Ch] [bp-1D4h]@6
  int v257; // [sp+350h] [bp-1D0h]@6
  int v258; // [sp+354h] [bp-1CCh]@6
  int v259; // [sp+358h] [bp-1C8h]@6
  int v260; // [sp+360h] [bp-1C0h]@6
  int v261; // [sp+364h] [bp-1BCh]@6
  int v262; // [sp+368h] [bp-1B8h]@6
  int v263; // [sp+36Ch] [bp-1B4h]@6
  int v264; // [sp+370h] [bp-1B0h]@6
  int v265; // [sp+378h] [bp-1A8h]@6
  int v266; // [sp+37Ch] [bp-1A4h]@6
  int v267; // [sp+380h] [bp-1A0h]@6
  int v268; // [sp+384h] [bp-19Ch]@6
  int v269; // [sp+388h] [bp-198h]@6
  int v270; // [sp+390h] [bp-190h]@6
  int v271; // [sp+394h] [bp-18Ch]@6
  int v272; // [sp+398h] [bp-188h]@6
  int v273; // [sp+39Ch] [bp-184h]@6
  int v274; // [sp+3A0h] [bp-180h]@6
  int v275; // [sp+3A8h] [bp-178h]@6
  int v276; // [sp+3ACh] [bp-174h]@6
  int v277; // [sp+3B0h] [bp-170h]@6
  int v278; // [sp+3B4h] [bp-16Ch]@6
  int v279; // [sp+3B8h] [bp-168h]@6
  int v280; // [sp+3C0h] [bp-160h]@6
  int v281; // [sp+3C4h] [bp-15Ch]@6
  int v282; // [sp+3C8h] [bp-158h]@6
  int v283; // [sp+3CCh] [bp-154h]@6
  int v284; // [sp+3D0h] [bp-150h]@6
  int v285; // [sp+3D8h] [bp-148h]@6
  int v286; // [sp+3DCh] [bp-144h]@6
  int v287; // [sp+3E0h] [bp-140h]@6
  int v288; // [sp+3E4h] [bp-13Ch]@6
  int v289; // [sp+3E8h] [bp-138h]@6
  int v290; // [sp+3F0h] [bp-130h]@6
  int v291; // [sp+3F4h] [bp-12Ch]@6
  int v292; // [sp+3F8h] [bp-128h]@6
  int v293; // [sp+3FCh] [bp-124h]@6
  int v294; // [sp+400h] [bp-120h]@6
  int v295; // [sp+408h] [bp-118h]@6
  int v296; // [sp+40Ch] [bp-114h]@6
  int v297; // [sp+410h] [bp-110h]@6
  int v298; // [sp+414h] [bp-10Ch]@6
  int v299; // [sp+418h] [bp-108h]@6
  int v300; // [sp+420h] [bp-100h]@6
  int v301; // [sp+424h] [bp-FCh]@6
  int v302; // [sp+428h] [bp-F8h]@6
  int v303; // [sp+42Ch] [bp-F4h]@6
  int v304; // [sp+430h] [bp-F0h]@6
  int v305; // [sp+438h] [bp-E8h]@6
  int v306; // [sp+43Ch] [bp-E4h]@6
  int v307; // [sp+440h] [bp-E0h]@6
  int v308; // [sp+444h] [bp-DCh]@6
  int v309; // [sp+448h] [bp-D8h]@6
  int v310; // [sp+450h] [bp-D0h]@6
  int v311; // [sp+454h] [bp-CCh]@6
  int v312; // [sp+458h] [bp-C8h]@6
  int v313; // [sp+45Ch] [bp-C4h]@6
  int v314; // [sp+460h] [bp-C0h]@6
  int v315; // [sp+468h] [bp-B8h]@6
  int v316; // [sp+46Ch] [bp-B4h]@6
  int v317; // [sp+470h] [bp-B0h]@6
  int v318; // [sp+474h] [bp-ACh]@6
  int v319; // [sp+478h] [bp-A8h]@6
  int v320; // [sp+480h] [bp-A0h]@6
  int v321; // [sp+484h] [bp-9Ch]@6
  int v322; // [sp+488h] [bp-98h]@6
  int v323; // [sp+48Ch] [bp-94h]@6
  char v324; // [sp+490h] [bp-90h]@6

  v3 = a1;
  v97 = 0LL;
  v98 = 0;
  Util::splitString(a3, 95, (int)&v97);
  v4 = (_DWORD *)HIDWORD(v97);
  v5 = (_DWORD *)v97;
  if ( HIDWORD(v97) - (_DWORD)v97 == 8 )
  {
    v96 = -1;
    mce::UUID::fromString((int)&v94, (int *)v97);
    if ( *(_QWORD *)&mce::UUID::EMPTY == v94 && qword_287E930 == v95 )
    {
      v6 = (int **)v97;
      v7 = byte_27CC698;
      __dmb();
      if ( !(v7 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27CC698) )
      {
        sub_119C884((void **)v209, "Standard");
        v213 = unk_27CC6D4;
        v210 = SkinRepository::VANILLA_SKIN_PACK_UUID;
        v211 = unk_27CC6CC;
        v212 = dword_27CC6D0;
        sub_119C884((void **)&v204, "f0b7f10f-63fd-4aa0-a6bc-8ab13111e396");
        mce::UUID::fromString((int)&v205, &v204);
        sub_119C884((void **)&v214, "BattleAndBeasts");
        v215 = *(_DWORD *)&v205;
        v216 = v206;
        v217 = v207;
        v218 = v208;
        sub_119C884((void **)&v199, "8262b177-bbc0-4098-9009-dc21f45a5d12");
        mce::UUID::fromString((int)&v200, &v199);
        sub_119C884((void **)&v219, "MashupAdventureTime");
        v220 = *(_DWORD *)&v200;
        v221 = v201;
        v222 = v202;
        v223 = v203;
        sub_119C884((void **)&v194, "eb258083-fb5c-4780-bca7-7f3fb9065539");
        mce::UUID::fromString((int)&v195, &v194);
        sub_119C884((void **)&v224, "Skyrim");
        v225 = *(_DWORD *)&v195;
        v226 = v196;
        v227 = v197;
        v228 = v198;
        sub_119C884((void **)&v189, "f2c9ef8d-690b-41df-9682-d85225774b77");
        mce::UUID::fromString((int)&v190, &v189);
        sub_119C884((void **)&v229, "GreekMythology");
        v230 = *(_DWORD *)&v190;
        v231 = v191;
        v232 = v192;
        v233 = v193;
        sub_119C884((void **)&v184, "8c0a59ed-e923-4e7a-902b-5e610fa9f6c2");
        mce::UUID::fromString((int)&v185, &v184);
        sub_119C884((void **)&v234, "MagicTheGathering");
        v235 = *(_DWORD *)&v185;
        v236 = v186;
        v237 = v187;
        v238 = v188;
        sub_119C884((void **)&v179, "64a7fbf1-3bca-4f42-8a3b-8b5d711744c9");
        mce::UUID::fromString((int)&v180, &v179);
        sub_119C884((void **)&v239, "Fallout");
        v240 = *(_DWORD *)&v180;
        v241 = v181;
        v242 = v182;
        v243 = v183;
        sub_119C884((void **)&v174, "29c6be6a-eb64-4b49-9809-4871a3809fb8");
        mce::UUID::fromString((int)&v175, &v174);
        sub_119C884((void **)&v244, "ChineseMythology");
        v245 = *(_DWORD *)&v175;
        v246 = v176;
        v247 = v177;
        v248 = v178;
        sub_119C884((void **)&v169, "98500e08-627e-4f46-a4d3-705a01f6f110");
        mce::UUID::fromString((int)&v170, &v169);
        sub_119C884((void **)&v249, "PowerRangers");
        v250 = *(_DWORD *)&v170;
        v251 = v171;
        v252 = v172;
        v253 = v173;
        sub_119C884((void **)&v164, "d55a3dda-b482-4ff6-bf30-3d2ba9324c19");
        mce::UUID::fromString((int)&v165, &v164);
        sub_119C884((void **)&v254, "BiomeSettlers03");
        v255 = *(_DWORD *)&v165;
        v256 = v166;
        v257 = v167;
        v258 = v168;
        sub_119C884((void **)&v159, "ac96fbcf-a996-432f-9143-f95743fded15");
        mce::UUID::fromString((int)&v160, &v159);
        sub_119C884((void **)&v259, "FestiveMashup2016");
        v260 = *(_DWORD *)&v160;
        v261 = v161;
        v262 = v162;
        v263 = v163;
        sub_119C884((void **)&v154, "1977173b-d963-4756-ae4b-83ad6a09463d");
        mce::UUID::fromString((int)&v155, &v154);
        sub_119C884((void **)&v264, "CampfireTales");
        v265 = *(_DWORD *)&v155;
        v266 = v156;
        v267 = v157;
        v268 = v158;
        sub_119C884((void **)&v149, "838bdb6b-bf30-42ca-a4d8-e35865fba8e2");
        mce::UUID::fromString((int)&v150, &v149);
        sub_119C884((void **)&v269, "Minecon");
        v270 = *(_DWORD *)&v150;
        v271 = v151;
        v272 = v152;
        v273 = v153;
        sub_119C884((void **)&v144, "b6afd18f-9fd5-47b6-a41c-4792ba929f23");
        mce::UUID::fromString((int)&v145, &v144);
        sub_119C884((void **)&v274, "Villains");
        v275 = *(_DWORD *)&v145;
        v276 = v146;
        v277 = v147;
        v278 = v148;
        sub_119C884((void **)&v139, "5a5dcffc-f194-4a8b-a7b7-94fa7997a434");
        mce::UUID::fromString((int)&v140, &v139);
        sub_119C884((void **)&v279, "Biome2");
        v280 = *(_DWORD *)&v140;
        v281 = v141;
        v282 = v142;
        v283 = v143;
        sub_119C884((void **)&v134, "598de0d1-08a8-448b-89d4-6ba73bcbe593");
        mce::UUID::fromString((int)&v135, &v134);
        sub_119C884((void **)&v284, "StoryMode");
        v285 = *(_DWORD *)&v135;
        v286 = v136;
        v287 = v137;
        v288 = v138;
        sub_119C884((void **)&v129, "f1a8bd56-6313-418e-8da6-4957a4a7a52b");
        mce::UUID::fromString((int)&v130, &v129);
        sub_119C884((void **)&v289, "Redstone");
        v290 = *(_DWORD *)&v130;
        v291 = v131;
        v292 = v132;
        v293 = v133;
        sub_119C884((void **)&v124, "ccba1ea2-c7cc-417f-a32c-f4f35b25f8b7");
        mce::UUID::fromString((int)&v125, &v124);
        sub_119C884((void **)&v294, "JTTW");
        v295 = *(_DWORD *)&v125;
        v296 = v126;
        v297 = v127;
        v298 = v128;
        sub_119C884((void **)&v119, "83cefe69-bf02-40d1-8225-0764847d8e39");
        mce::UUID::fromString((int)&v120, &v119);
        sub_119C884((void **)&v299, "Festive");
        v300 = *(_DWORD *)&v120;
        v301 = v121;
        v302 = v122;
        v303 = v123;
        sub_119C884((void **)&v114, "1f581bc6-11c0-4a77-b0fa-91b7ca2636a0");
        mce::UUID::fromString((int)&v115, &v114);
        sub_119C884((void **)&v304, "PvPWarriors");
        v305 = *(_DWORD *)&v115;
        v306 = v116;
        v307 = v117;
        v308 = v118;
        sub_119C884((void **)&v109, "ca1a5fa0-967e-486b-a21b-7dd19fc2629d");
        mce::UUID::fromString((int)&v110, &v109);
        sub_119C884((void **)&v309, "Halloween");
        v310 = *(_DWORD *)&v110;
        v311 = v111;
        v312 = v112;
        v313 = v113;
        sub_119C884((void **)&v104, "acf11539-f3ca-4ac6-b3a9-fdd1c2cf3806");
        mce::UUID::fromString((int)&v105, &v104);
        sub_119C884((void **)&v314, "CityFolk");
        v315 = *(_DWORD *)&v105;
        v316 = v106;
        v317 = v107;
        v318 = v108;
        sub_119C884((void **)&v99, "a7df1b9a-5d81-4130-a9f8-5aa362247739");
        mce::UUID::fromString((int)&v100, &v99);
        sub_119C884((void **)&v319, "TownFolk");
        v8 = (int **)&v324;
        v320 = *(_DWORD *)&v100;
        v321 = v101;
        v322 = v102;
        v323 = v103;
        std::_Hashtable<std::string,std::pair<std::string const,mce::UUID>,std::allocator<std::pair<std::string const,mce::UUID>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<std::string const,mce::UUID> const*>(
          (int)&unk_27CC6AC,
          v209,
          (int **)&v324,
          0);
        do
        {
          v13 = (int)*(v8 - 6);
          v8 -= 6;
          v12 = v13;
          v14 = (void *)(v13 - 12);
          if ( (int *)(v13 - 12) != &dword_28898C0 )
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
              j_j_j_j_j__ZdlPv_9_1(v14);
          }
        }
        while ( v8 != v209 );
        v15 = (void *)(v99 - 12);
        if ( (int *)(v99 - 12) != &dword_28898C0 )
          v50 = (unsigned int *)(v99 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v51 = __ldrex(v50);
            while ( __strex(v51 - 1, v50) );
          else
            v51 = (*v50)--;
          if ( v51 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v15);
        v16 = (void *)(v104 - 12);
        if ( (int *)(v104 - 12) != &dword_28898C0 )
          v52 = (unsigned int *)(v104 - 4);
              v53 = __ldrex(v52);
            while ( __strex(v53 - 1, v52) );
            v53 = (*v52)--;
          if ( v53 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v16);
        v17 = (void *)(v109 - 12);
        if ( (int *)(v109 - 12) != &dword_28898C0 )
          v54 = (unsigned int *)(v109 - 4);
              v55 = __ldrex(v54);
            while ( __strex(v55 - 1, v54) );
            v55 = (*v54)--;
          if ( v55 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v17);
        v18 = (void *)(v114 - 12);
        if ( (int *)(v114 - 12) != &dword_28898C0 )
          v56 = (unsigned int *)(v114 - 4);
              v57 = __ldrex(v56);
            while ( __strex(v57 - 1, v56) );
            v57 = (*v56)--;
          if ( v57 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v18);
        v19 = (void *)(v119 - 12);
        if ( (int *)(v119 - 12) != &dword_28898C0 )
          v58 = (unsigned int *)(v119 - 4);
              v59 = __ldrex(v58);
            while ( __strex(v59 - 1, v58) );
            v59 = (*v58)--;
          if ( v59 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v19);
        v20 = (void *)(v124 - 12);
        if ( (int *)(v124 - 12) != &dword_28898C0 )
          v60 = (unsigned int *)(v124 - 4);
              v61 = __ldrex(v60);
            while ( __strex(v61 - 1, v60) );
            v61 = (*v60)--;
          if ( v61 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v20);
        v21 = (void *)(v129 - 12);
        if ( (int *)(v129 - 12) != &dword_28898C0 )
          v62 = (unsigned int *)(v129 - 4);
              v63 = __ldrex(v62);
            while ( __strex(v63 - 1, v62) );
            v63 = (*v62)--;
          if ( v63 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v21);
        v22 = (void *)(v134 - 12);
        if ( (int *)(v134 - 12) != &dword_28898C0 )
          v64 = (unsigned int *)(v134 - 4);
              v65 = __ldrex(v64);
            while ( __strex(v65 - 1, v64) );
            v65 = (*v64)--;
          if ( v65 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v22);
        v23 = (void *)(v139 - 12);
        if ( (int *)(v139 - 12) != &dword_28898C0 )
          v66 = (unsigned int *)(v139 - 4);
              v67 = __ldrex(v66);
            while ( __strex(v67 - 1, v66) );
            v67 = (*v66)--;
          if ( v67 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v23);
        v24 = (void *)(v144 - 12);
        if ( (int *)(v144 - 12) != &dword_28898C0 )
          v68 = (unsigned int *)(v144 - 4);
              v69 = __ldrex(v68);
            while ( __strex(v69 - 1, v68) );
            v69 = (*v68)--;
          if ( v69 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v24);
        v25 = (void *)(v149 - 12);
        if ( (int *)(v149 - 12) != &dword_28898C0 )
          v70 = (unsigned int *)(v149 - 4);
              v71 = __ldrex(v70);
            while ( __strex(v71 - 1, v70) );
            v71 = (*v70)--;
          if ( v71 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v25);
        v26 = (void *)(v154 - 12);
        if ( (int *)(v154 - 12) != &dword_28898C0 )
          v72 = (unsigned int *)(v154 - 4);
              v73 = __ldrex(v72);
            while ( __strex(v73 - 1, v72) );
            v73 = (*v72)--;
          if ( v73 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v26);
        v27 = (void *)(v159 - 12);
        if ( (int *)(v159 - 12) != &dword_28898C0 )
          v74 = (unsigned int *)(v159 - 4);
              v75 = __ldrex(v74);
            while ( __strex(v75 - 1, v74) );
            v75 = (*v74)--;
          if ( v75 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v27);
        v28 = (void *)(v164 - 12);
        if ( (int *)(v164 - 12) != &dword_28898C0 )
          v76 = (unsigned int *)(v164 - 4);
              v77 = __ldrex(v76);
            while ( __strex(v77 - 1, v76) );
            v77 = (*v76)--;
          if ( v77 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v28);
        v29 = (void *)(v169 - 12);
        if ( (int *)(v169 - 12) != &dword_28898C0 )
          v78 = (unsigned int *)(v169 - 4);
              v79 = __ldrex(v78);
            while ( __strex(v79 - 1, v78) );
            v79 = (*v78)--;
          if ( v79 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v29);
        v30 = (void *)(v174 - 12);
        if ( (int *)(v174 - 12) != &dword_28898C0 )
          v80 = (unsigned int *)(v174 - 4);
              v81 = __ldrex(v80);
            while ( __strex(v81 - 1, v80) );
            v81 = (*v80)--;
          if ( v81 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v30);
        v31 = (void *)(v179 - 12);
        if ( (int *)(v179 - 12) != &dword_28898C0 )
          v82 = (unsigned int *)(v179 - 4);
              v83 = __ldrex(v82);
            while ( __strex(v83 - 1, v82) );
            v83 = (*v82)--;
          if ( v83 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v31);
        v32 = (void *)(v184 - 12);
        if ( (int *)(v184 - 12) != &dword_28898C0 )
          v84 = (unsigned int *)(v184 - 4);
              v85 = __ldrex(v84);
            while ( __strex(v85 - 1, v84) );
            v85 = (*v84)--;
          if ( v85 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v32);
        v33 = (void *)(v189 - 12);
        if ( (int *)(v189 - 12) != &dword_28898C0 )
          v86 = (unsigned int *)(v189 - 4);
              v87 = __ldrex(v86);
            while ( __strex(v87 - 1, v86) );
            v87 = (*v86)--;
          if ( v87 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v33);
        v34 = (void *)(v194 - 12);
        if ( (int *)(v194 - 12) != &dword_28898C0 )
          v88 = (unsigned int *)(v194 - 4);
              v89 = __ldrex(v88);
            while ( __strex(v89 - 1, v88) );
            v89 = (*v88)--;
          if ( v89 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v34);
        v35 = (void *)(v199 - 12);
        if ( (int *)(v199 - 12) != &dword_28898C0 )
          v90 = (unsigned int *)(v199 - 4);
              v91 = __ldrex(v90);
            while ( __strex(v91 - 1, v90) );
            v91 = (*v90)--;
          if ( v91 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v35);
        v36 = (void *)(v204 - 12);
        if ( (int *)(v204 - 12) != &dword_28898C0 )
          v92 = (unsigned int *)(v204 - 4);
              v93 = __ldrex(v92);
            while ( __strex(v93 - 1, v92) );
            v93 = (*v92)--;
          if ( v93 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v36);
        _cxa_atexit(std::unordered_map<std::string,mce::UUID,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,mce::UUID>>>::~unordered_map);
        j___cxa_guard_release((unsigned int *)&byte_27CC698);
      }
      v37 = std::_Hashtable<std::string,std::pair<std::string const,mce::UUID>,std::allocator<std::pair<std::string const,mce::UUID>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
              (unsigned __int64 *)&unk_27CC6AC,
              v6);
      if ( v37 )
        v38 = *(_DWORD *)(v37 + 16);
        v39 = *(_DWORD *)(v37 + 20);
        v40 = *(_DWORD *)(v37 + 24);
        v41 = *(_DWORD *)(v37 + 28);
      else
        v39 = *(&mce::UUID::EMPTY + 1);
        v38 = mce::UUID::EMPTY;
        v41 = HIDWORD(qword_287E930);
        v40 = qword_287E930;
      v94 = __PAIR__(v39, v38);
      v95 = __PAIR__(v41, v40);
    }
    if ( Util::toInt<int,(void *)0>((unsigned int *)(v97 + 4), &v96) )
      v42 = v97;
      v43 = HIDWORD(v94);
      v44 = v95;
      *(_DWORD *)v3 = v94;
      *(_DWORD *)(v3 + 4) = v43;
      *(_QWORD *)(v3 + 8) = v44;
      *(_DWORD *)(v3 + 16) = -1;
      sub_119C854((int *)(v3 + 20), (int *)(v42 + 4));
    else
      v45 = v96;
      v46 = v95;
      *(_QWORD *)v3 = v94;
      *(_QWORD *)(v3 + 8) = v46;
      *(_DWORD *)(v3 + 16) = v45;
      *(_DWORD *)(v3 + 20) = &unk_28898CC;
    v4 = (_DWORD *)HIDWORD(v97);
    v5 = (_DWORD *)v97;
  }
  else
    v9 = qword_287E930;
    *(_QWORD *)v3 = *(_QWORD *)&mce::UUID::EMPTY;
    *(_QWORD *)(v3 + 8) = v9;
    *(_DWORD *)(v3 + 16) = -1;
    *(_DWORD *)(v3 + 20) = &unk_28898CC;
  if ( v5 != v4 )
    do
      v49 = (int *)(*v5 - 12);
      if ( v49 != &dword_28898C0 )
        v47 = (unsigned int *)(*v5 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
        else
          v48 = (*v47)--;
        if ( v48 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v49);
      ++v5;
    while ( v5 != v4 );
    v4 = (_DWORD *)v97;
  if ( v4 )
    operator delete(v4);
}


void __fastcall SkinRepository::deserializeSkinName(int a1, int a2, unsigned int *a3)
{
  SkinRepository::deserializeSkinName(a1, a2, a3);
}


Skin *__fastcall SkinRepository::getSkinBySerializableName(int a1, unsigned int *a2)
{
  int v2; // r4@1
  Skin *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+0h] [bp-30h]@1
  int v9; // [sp+14h] [bp-1Ch]@1

  v2 = a1;
  SkinRepository::deserializeSkinName((int)&v8, (int)a2, a2);
  v3 = SkinRepository::resolveSkinHandle(v2, (int)&v8);
  v4 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v9 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  return v3;
}
