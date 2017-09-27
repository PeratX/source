

JavaEnv *__fastcall AndroidStore::getRealmsSkuPrefix(AndroidStore *this, int a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  int v4; // r3@1
  int v5; // r0@1
  void *v6; // r0@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+4h] [bp-24h]@1
  int v11; // [sp+8h] [bp-20h]@1

  v2 = (int *)this;
  v3 = a2;
  JavaEnv::JavaEnv((JavaEnv *)&v11);
  v5 = _JNIEnv::CallObjectMethod(v11, *(_DWORD *)(v3 + 12), AndroidStoreNamespace::sGetRealmsSkuPrefix, v4);
  JStringToString::JStringToString(&v10, v11, v5);
  sub_DA73B4(v2, &v10);
  v6 = (void *)(v10 - 12);
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
      j_j_j_j_j__ZdlPv_9(v6);
  }
  return JavaEnv::~JavaEnv((JavaEnv *)&v11);
}


JavaEnv *__fastcall AndroidStore::createAmazonAppStore(_DWORD *a1, unsigned int a2)
{
  _DWORD *v2; // r4@1
  unsigned int v3; // r5@1
  int v5; // [sp+8h] [bp-28h]@1
  int v6; // [sp+Ch] [bp-24h]@1
  char v7; // [sp+10h] [bp-20h]@1
  int v8; // [sp+14h] [bp-1Ch]@1
  char v9; // [sp+18h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  JavaEnv::JavaEnv((JavaEnv *)&v9);
  NativeStoreListener::NativeStoreListener(&v7, v3);
  v6 = _JNIEnv::CallStaticObjectMethod(
         *(int *)&v9,
         AndroidStoreNamespace::sStoreFactory,
         AndroidStoreNamespace::sCreateAmazonAppStore,
         v8);
  std::make_unique<AndroidStore,_jobject *&,NativeStoreListener &>((char **)&v5, &v6, &v7);
  *v2 = v5;
  NativeStoreListener::~NativeStoreListener((NativeStoreListener *)&v7);
  return JavaEnv::~JavaEnv((JavaEnv *)&v9);
}


int __fastcall AndroidStore::AndroidStore(int a1, int a2, _DWORD *a3)
{
  int v3; // r5@1
  int v5; // [sp+0h] [bp-18h]@1

  v3 = a1;
  *(_DWORD *)a1 = &off_26D62B8;
  NativeStoreListener::NativeStoreListener((_QWORD *)(a1 + 4), a3);
  *(_DWORD *)(v3 + 12) = 0;
  JavaEnv::JavaEnv((JavaEnv *)&v5);
  *(_DWORD *)(v3 + 12) = (*(int (**)(void))(*(_DWORD *)v5 + 84))();
  JavaEnv::~JavaEnv((JavaEnv *)&v5);
  return v3;
}


signed int __fastcall AndroidStore::purchase(int a1, int *a2, int a3, int *a4)
{
  int v4; // r4@1
  int *v5; // r6@1
  int *v6; // r5@1
  int v7; // r9@1
  int v8; // r11@1
  int v9; // r10@1
  int v10; // r8@1
  int v11; // r5@1
  int v12; // r7@1
  void *v13; // r0@1
  void *v14; // r0@2
  unsigned int *v16; // r2@4
  signed int v17; // r1@6
  unsigned int *v18; // r2@8
  signed int v19; // r1@10
  int v20; // [sp+8h] [bp-38h]@1
  int v21; // [sp+Ch] [bp-34h]@1
  int v22; // [sp+10h] [bp-30h]@1

  v4 = a1;
  v5 = a4;
  v6 = a2;
  JavaEnv::JavaEnv((JavaEnv *)&v22);
  v7 = *(_DWORD *)(v4 + 12);
  v8 = v22;
  v9 = AndroidStoreNamespace::sPurchase;
  sub_DA73B4(&v21, v6);
  v10 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v8 + 668))(v8, v21);
  v11 = v22;
  sub_DA73B4(&v20, v5);
  v12 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v11 + 668))(v11, v20);
  _JNIEnv::CallVoidMethod(v8, v7, v9, v10);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v11 + 92))(v11, v12);
  v13 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v20 - 4);
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
      j_j_j_j_j__ZdlPv_9(v13);
  }
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v8 + 92))(v8, v10);
  v14 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v21 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
  JavaEnv::~JavaEnv((JavaEnv *)&v22);
  return 1;
}


void __fastcall AndroidStore::~AndroidStore(AndroidStore *this)
{
  AndroidStore::~AndroidStore(this);
}


int __fastcall AndroidStore::isGameLicensed(AndroidStore *this)
{
  AndroidStore *v1; // r4@1
  int v2; // r3@1
  int v3; // r4@1
  int v5; // [sp+0h] [bp-10h]@1

  v1 = this;
  JavaEnv::JavaEnv((JavaEnv *)&v5);
  v3 = _JNIEnv::CallBooleanMethod(v5, *((_DWORD *)v1 + 3), AndroidStoreNamespace::sHasVerifiedLicense, v2);
  JavaEnv::~JavaEnv((JavaEnv *)&v5);
  if ( v3 != 1 )
    v3 = 0;
  return v3;
}


JavaEnv *__fastcall AndroidStore::acknowledgePurchase(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r5@1
  int v6; // r9@1
  int v7; // r4@1
  int v8; // r7@1
  int v9; // r8@1
  int v10; // r5@1
  int v11; // r6@1
  void *v12; // r0@1
  void *v13; // r0@2
  unsigned int *v15; // r2@4
  signed int v16; // r1@6
  unsigned int *v17; // r2@8
  signed int v18; // r1@10
  int v19; // [sp+8h] [bp-30h]@1
  int v20; // [sp+Ch] [bp-2Ch]@1
  int v21; // [sp+10h] [bp-28h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  JavaEnv::JavaEnv((JavaEnv *)&v21);
  v6 = *(_DWORD *)(v3 + 12);
  v7 = v21;
  v8 = AndroidStoreNamespace::sAcknowledgePurchase;
  sub_DA73B4(&v20, (int *)(v5 + 8));
  v9 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v7 + 668))(v7, v20);
  v10 = v21;
  getProductTypeString((void **)&v19, v4);
  v11 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v10 + 668))(v10, v19);
  _JNIEnv::CallVoidMethod(v7, v6, v8, v9);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v10 + 92))(v10, v11);
  v12 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
  }
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v7 + 92))(v7, v9);
  v13 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v20 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  return JavaEnv::~JavaEnv((JavaEnv *)&v21);
}


signed int __fastcall AndroidStore::allowsSubscriptions(AndroidStore *this)
{
  return 1;
}


JavaEnv *__fastcall AndroidStore::queryPurchases(AndroidStore *this, bool a2)
{
  AndroidStore *v2; // r4@1
  int v3; // r3@1
  int v5; // [sp+0h] [bp-10h]@1

  v2 = this;
  JavaEnv::JavaEnv((JavaEnv *)&v5);
  _JNIEnv::CallVoidMethod(v5, *((_DWORD *)v2 + 3), AndroidStoreNamespace::sQueryPurchases, v3);
  return JavaEnv::~JavaEnv((JavaEnv *)&v5);
}


int __fastcall AndroidStore::requiresRestorePurchasesButton(AndroidStore *this)
{
  return 0;
}


JavaEnv *__fastcall AndroidStore::getProductSkuPrefix(AndroidStore *this, int a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  int v4; // r3@1
  int v5; // r0@1
  void *v6; // r0@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+4h] [bp-24h]@1
  int v11; // [sp+8h] [bp-20h]@1

  v2 = (int *)this;
  v3 = a2;
  JavaEnv::JavaEnv((JavaEnv *)&v11);
  v5 = _JNIEnv::CallObjectMethod(v11, *(_DWORD *)(v3 + 12), AndroidStoreNamespace::sGetProductSkuPrefix, v4);
  JStringToString::JStringToString(&v10, v11, v5);
  sub_DA73B4(v2, &v10);
  v6 = (void *)(v10 - 12);
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
      j_j_j_j_j__ZdlPv_9(v6);
  }
  return JavaEnv::~JavaEnv((JavaEnv *)&v11);
}


JavaEnv *__fastcall AndroidStore::createGooglePlayStore(_DWORD *a1, int *a2, unsigned int a3)
{
  _DWORD *v3; // r8@1
  unsigned int v4; // r4@1
  int *v5; // r7@1
  int v6; // r6@1
  __int64 v7; // r4@1
  int v8; // r7@1
  int v9; // r5@1
  void *v10; // r0@1
  unsigned int *v12; // r2@3
  signed int v13; // r1@5
  int v14; // [sp+8h] [bp-38h]@2
  int v15; // [sp+Ch] [bp-34h]@1
  int v16; // [sp+10h] [bp-30h]@2
  char v17; // [sp+14h] [bp-2Ch]@1
  int v18; // [sp+1Ch] [bp-24h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  JavaEnv::JavaEnv((JavaEnv *)&v18);
  NativeStoreListener::NativeStoreListener(&v17, v4);
  v6 = v18;
  v7 = *(_QWORD *)&AndroidStoreNamespace::sStoreFactory;
  sub_DA73B4(&v15, v5);
  v8 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v6 + 668))(v6, v15);
  v9 = _JNIEnv::CallStaticObjectMethod(v6, v7, SHIDWORD(v7), v8);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v6 + 92))(v6, v8);
  v10 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v15 - 4);
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
  v16 = v9;
  std::make_unique<AndroidStore,_jobject *&,NativeStoreListener &>((char **)&v14, &v16, &v17);
  *v3 = v14;
  NativeStoreListener::~NativeStoreListener((NativeStoreListener *)&v17);
  return JavaEnv::~JavaEnv((JavaEnv *)&v18);
}


AndroidStore *__fastcall AndroidStore::~AndroidStore(AndroidStore *this)
{
  AndroidStore *v1; // r4@1
  int v2; // r3@1
  int v3; // r1@1
  int v5; // [sp+0h] [bp-18h]@1

  v1 = this;
  *(_DWORD *)this = &off_26D62B8;
  JavaEnv::JavaEnv((JavaEnv *)&v5);
  _JNIEnv::CallVoidMethod(v5, *((_DWORD *)v1 + 3), AndroidStoreNamespace::sDestructor, v2);
  v3 = *((_DWORD *)v1 + 3);
  (*(void (**)(void))(*(_DWORD *)v5 + 88))();
  JavaEnv::~JavaEnv((JavaEnv *)&v5);
  NativeStoreListener::~NativeStoreListener((AndroidStore *)((char *)v1 + 4));
  return v1;
}


JavaEnv *__fastcall AndroidStore::getExtraLicenseData(AndroidStore *this, int a2)
{
  AndroidStore *v2; // r4@1
  int v3; // r5@1
  int v4; // r3@1
  int v5; // r5@1
  int v6; // r8@1
  int v7; // r9@1
  int v8; // r11@1
  int v9; // r3@1
  int v10; // r10@1
  int v11; // r1@1
  int v12; // r8@1
  int v13; // r3@1
  int v14; // r7@1
  int v15; // r1@1
  int v16; // r6@1
  int v17; // r3@1
  __int64 v18; // r0@1
  int v20; // [sp+4h] [bp-2Ch]@1

  v2 = this;
  v3 = a2;
  JavaEnv::JavaEnv((JavaEnv *)&v20);
  v5 = _JNIEnv::CallObjectMethod(v20, *(_DWORD *)(v3 + 12), AndroidStoreNamespace::sGetExtraLicenseData, v4);
  v6 = (*(int (**)(void))(*(_DWORD *)v20 + 132))();
  v7 = (*(int (**)(void))(*(_DWORD *)v20 + 132))();
  v8 = (*(int (**)(void))(*(_DWORD *)v20 + 132))();
  v10 = _JNIEnv::CallLongMethod(v20, v5, v6, v9);
  v12 = v11;
  v14 = _JNIEnv::CallLongMethod(v20, v5, v7, v13);
  v16 = v15;
  LODWORD(v18) = _JNIEnv::CallLongMethod(v20, v5, v8, v17);
  *(_DWORD *)v2 = v10;
  *((_DWORD *)v2 + 1) = v12;
  *((_DWORD *)v2 + 2) = v14;
  *((_DWORD *)v2 + 3) = v16;
  *((_QWORD *)v2 + 2) = v18;
  return JavaEnv::~JavaEnv((JavaEnv *)&v20);
}


JavaEnv *__fastcall AndroidStore::getStoreId(AndroidStore *this, int a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  int v4; // r3@1
  int v5; // r0@1
  void *v6; // r0@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+4h] [bp-24h]@1
  int v11; // [sp+8h] [bp-20h]@1

  v2 = (int *)this;
  v3 = a2;
  JavaEnv::JavaEnv((JavaEnv *)&v11);
  v5 = _JNIEnv::CallObjectMethod(v11, *(_DWORD *)(v3 + 12), AndroidStoreNamespace::sGetStoreId, v4);
  JStringToString::JStringToString(&v10, v11, v5);
  sub_DA73B4(v2, &v10);
  v6 = (void *)(v10 - 12);
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
      j_j_j_j_j__ZdlPv_9(v6);
  }
  return JavaEnv::~JavaEnv((JavaEnv *)&v11);
}


JavaEnv *__fastcall AndroidStore::queryProducts(int a1, unsigned __int64 *a2)
{
  int v2; // r11@1
  unsigned __int64 *v3; // r6@1
  int *v4; // r5@1
  int *v5; // r10@1
  int v6; // r4@1
  int v7; // r0@2
  int i; // r9@2
  void *v9; // r0@5
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  int v12; // r9@18
  __int64 v13; // kr18_8@18
  int v14; // r0@18
  unsigned int v15; // r6@19
  unsigned int v16; // r10@19
  int v17; // r3@20
  _QWORD *v18; // r4@22
  int v20; // [sp+Ch] [bp-44h]@4
  int v21; // [sp+10h] [bp-40h]@1
  int v22; // [sp+14h] [bp-3Ch]@1
  int v23; // [sp+18h] [bp-38h]@1
  int v24; // [sp+1Ch] [bp-34h]@1
  int v25; // [sp+24h] [bp-2Ch]@5

  v2 = a1;
  v3 = a2;
  JavaEnv::JavaEnv((JavaEnv *)&v24);
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v5 = (int *)(*v3 >> 32);
  v4 = (int *)*v3;
  v6 = v24;
  if ( v4 != v5 )
  {
    v7 = 0;
    for ( i = 0; ; i = v22 )
    {
      v20 = v6;
      if ( i == v7 )
      {
        std::vector<StringToJString,std::allocator<StringToJString>>::_M_emplace_back_aux<_JNIEnv *,std::string const&>(
          (unsigned __int64 *)&v21,
          &v20,
          v4);
      }
      else
        sub_DA73B4(&v25, v4);
        *(_DWORD *)i = v6;
        *(_DWORD *)(i + 4) = (*(int (__fastcall **)(int, int))(*(_DWORD *)v6 + 668))(v6, v25);
        v9 = (void *)(v25 - 12);
        if ( (int *)(v25 - 12) != &dword_28898C0 )
        {
          v10 = (unsigned int *)(v25 - 4);
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
            j_j_j_j_j__ZdlPv_9(v9);
        }
        v22 += 8;
      v6 = v24;
      ++v4;
      if ( v4 == v5 )
        break;
      v7 = v23;
    }
    v5 = (int *)(*v3 >> 32);
    v4 = (int *)*v3;
  }
  v12 = (*(int (__fastcall **)(int, signed int, _DWORD, _DWORD))(*(_DWORD *)v6 + 688))(
          v6,
          v5 - v4,
          AndroidStoreNamespace::sStringClass,
          0);
  v13 = *(_QWORD *)&v21;
  v14 = v24;
  if ( v22 != v21 )
    v15 = 0;
    v16 = (v22 - v21) >> 3;
    do
      v17 = *(_DWORD *)(v13 + 4 + 8 * v15);
      (*(void (**)(void))(*(_DWORD *)v14 + 696))();
      v14 = v24;
      ++v15;
    while ( v15 < v16 );
  _JNIEnv::CallVoidMethod(v14, *(_DWORD *)(v2 + 12), AndroidStoreNamespace::sQueryProducts, v12);
  if ( (_DWORD)v13 != HIDWORD(v13) )
    v18 = (_QWORD *)v13;
      (*(void (**)(void))(*(_DWORD *)*v18 + 92))();
      ++v18;
    while ( v18 != (_QWORD *)HIDWORD(v13) );
  if ( (_DWORD)v13 )
    operator delete((void *)v13);
  return JavaEnv::~JavaEnv((JavaEnv *)&v24);
}


void __fastcall AndroidStore::~AndroidStore(AndroidStore *this)
{
  AndroidStore *v1; // r0@1

  v1 = AndroidStore::~AndroidStore(this);
  j_j_j__ZdlPv_3((void *)v1);
}


JavaEnv *__fastcall AndroidStore::createAmazonAppStoreForFireTV(_DWORD *a1, unsigned int a2)
{
  _DWORD *v2; // r4@1
  unsigned int v3; // r5@1
  int v5; // [sp+8h] [bp-28h]@1
  int v6; // [sp+Ch] [bp-24h]@1
  char v7; // [sp+10h] [bp-20h]@1
  int v8; // [sp+14h] [bp-1Ch]@1
  char v9; // [sp+18h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  JavaEnv::JavaEnv((JavaEnv *)&v9);
  NativeStoreListener::NativeStoreListener(&v7, v3);
  v6 = _JNIEnv::CallStaticObjectMethod(
         *(int *)&v9,
         AndroidStoreNamespace::sStoreFactory,
         AndroidStoreNamespace::sCreateAmazonAppStore,
         v8);
  std::make_unique<AndroidStore,_jobject *&,NativeStoreListener &>((char **)&v5, &v6, &v7);
  *v2 = v5;
  NativeStoreListener::~NativeStoreListener((NativeStoreListener *)&v7);
  return JavaEnv::~JavaEnv((JavaEnv *)&v9);
}


int __fastcall AndroidStore::isTrial(AndroidStore *this)
{
  return 0;
}
