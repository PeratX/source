

void __fastcall SaveTransactionManager::UserStorageAreaObserver::~UserStorageAreaObserver(SaveTransactionManager::UserStorageAreaObserver *this, unsigned int *a2)
{
  SaveTransactionManager::UserStorageAreaObserver *v2; // r4@1
  int v3; // r5@1
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r0@15
  bool v8; // zf@15
  SaveTransactionManager::UserStorageAreaObserver *v9; // r12@18
  int v10; // r2@19
  int v11; // r2@20
  bool v12; // zf@21
  unsigned int *v13; // r3@21
  SaveTransactionManager::UserStorageAreaObserver *v14; // r6@24
  bool v15; // zf@24
  int v16; // r2@29
  unsigned int v17; // r2@42

  v2 = this;
  *(_DWORD *)this = &off_26D6998;
  v3 = *((_DWORD *)this + 4);
  if ( v3 )
  {
    a2 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(a2);
      while ( __strex(v4 - 1, a2) );
    }
    else
      v4 = (*a2)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
        {
          v6 = __ldrex(v5);
          a2 = (unsigned int *)(v6 - 1);
        }
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = *v5;
        a2 = (unsigned int *)(*v5 - 1);
        *v5 = (unsigned int)a2;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  *(_DWORD *)v2 = &off_26D69BC;
  v7 = *((_DWORD *)v2 + 1);
  v8 = v7 == 0;
  if ( v7 )
    a2 = (unsigned int *)(*(_QWORD *)(v7 + 4) >> 32);
    v3 = *(_QWORD *)(v7 + 4);
    v8 = v3 == (_DWORD)a2;
  if ( !v8 )
    v9 = (SaveTransactionManager::UserStorageAreaObserver *)*(a2 - 1);
    if ( v9 != v2 )
      v10 = ((signed int)a2 - v3) >> 4;
      if ( v10 >= 1 )
        v11 = v10 + 1;
          v12 = *(_DWORD *)v3 == (_DWORD)v2;
          v13 = (unsigned int *)v3;
          if ( *(SaveTransactionManager::UserStorageAreaObserver **)v3 != v2 )
          {
            v13 = (unsigned int *)(v3 + 4);
            v12 = *(_DWORD *)(v3 + 4) == (_DWORD)v2;
          }
          if ( v12 )
            goto LABEL_42;
          v13 = (unsigned int *)(v3 + 8);
          v14 = *(SaveTransactionManager::UserStorageAreaObserver **)(v3 + 8);
          v15 = v14 == v2;
          if ( v14 != v2 )
            v13 = (unsigned int *)(v3 + 12);
            v15 = *(_DWORD *)(v3 + 12) == (_DWORD)v2;
          if ( v15 )
          --v11;
          v3 += 16;
        while ( v11 > 1 );
      if ( 1 == ((signed int)a2 - v3) >> 2 )
        v13 = (unsigned int *)v3;
        goto LABEL_38;
      v16 = ((signed int)a2 - v3) >> 2;
      if ( v16 == 2 )
        if ( v16 != 3 )
          v13 = a2;
          goto LABEL_42;
        if ( *(SaveTransactionManager::UserStorageAreaObserver **)v3 == v2 )
LABEL_42:
          v17 = *v13;
          *v13 = (unsigned int)v9;
          *(a2 - 1) = v17;
          *(_DWORD *)(v7 + 8) -= 4;
          goto LABEL_43;
        v13 = (unsigned int *)(v3 + 4);
      if ( (SaveTransactionManager::UserStorageAreaObserver *)*v13 != v2 )
        ++v13;
LABEL_38:
        if ( (SaveTransactionManager::UserStorageAreaObserver *)*v13 != v2 )
        goto LABEL_42;
      goto LABEL_42;
    *(_DWORD *)(v7 + 8) = a2 - 1;
LABEL_43:
  j_j_j__ZdlPv_3((void *)v2);
}


void __fastcall SaveTransactionManager::_handleEndWrite(SaveTransactionManager *this)
{
  unsigned int v1; // r1@2

  __dmb();
  do
    v1 = __ldrex((unsigned int *)this);
  while ( __strex(v1 - 1, (unsigned int *)this) );
  if ( v1 == 1 )
    j_j_j__ZN22SaveTransactionManager19_hideGlobalSaveIconEv(this);
  else
    JUMPOUT(v1 == 1, SaveTransactionManager::UserListObserver::~UserListObserver);
}


int __fastcall SaveTransactionManager::_showGlobalSaveIcon(int result)
{
  int v1; // r4@1
  void (__fastcall *v2)(char *, int, signed int); // r3@1
  void *v3; // r0@3
  int v4; // r4@5
  int (*v5)(void); // r7@5
  int (__fastcall *v6)(int, _DWORD **); // r5@5
  _DWORD *v7; // r0@7
  int v8; // r1@7
  int v9; // [sp+0h] [bp-48h]@6
  int (*v10)(void); // [sp+8h] [bp-40h]@5
  int v11; // [sp+Ch] [bp-3Ch]@6
  _DWORD *v12; // [sp+14h] [bp-34h]@7
  int (*v13)(void); // [sp+1Ch] [bp-2Ch]@7
  int (__fastcall *v14)(int *); // [sp+20h] [bp-28h]@7
  char v15; // [sp+24h] [bp-24h]@2
  int (*v16)(void); // [sp+2Ch] [bp-1Ch]@2
  int v17; // [sp+30h] [bp-18h]@2

  v1 = result;
  v2 = *(void (__fastcall **)(char *, int, signed int))(result + 28);
  if ( v2 )
  {
    v16 = 0;
    v2(&v15, result + 20, 2);
    v17 = *(_DWORD *)(v1 + 32);
    v16 = *(int (**)(void))(v1 + 28);
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v3 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v3 = &ServiceLocator<AppPlatform>::mDefaultService;
    v4 = *(_DWORD *)v3;
    v5 = 0;
    v6 = *(int (__fastcall **)(int, _DWORD **))(**(_DWORD **)v3 + 348);
    v10 = 0;
    if ( v16 )
    {
      ((void (__fastcall *)(int *, char *, signed int))v16)(&v9, &v15, 2);
      v5 = v16;
      v11 = v17;
      v10 = v16;
    }
    v13 = 0;
    v7 = operator new(0x10u);
    *(_QWORD *)v7 = *(_QWORD *)&v9;
    v8 = v11;
    v7[2] = v5;
    v7[3] = v8;
    v12 = v7;
    v13 = (int (*)(void))sub_C254CE;
    v14 = sub_C254BC;
    result = v6(v4, &v12);
    if ( v13 )
      result = v13();
    if ( v10 )
      result = v10();
      result = v16();
  }
  return result;
}


int __fastcall SaveTransactionManager::_hideGlobalSaveIcon(int result)
{
  int v1; // r4@1
  void (__fastcall *v2)(char *, int, signed int); // r3@1
  void *v3; // r0@3
  int v4; // r4@5
  int (*v5)(void); // r7@5
  int (__fastcall *v6)(int, _DWORD **); // r5@5
  _DWORD *v7; // r0@7
  int v8; // r1@7
  int v9; // [sp+0h] [bp-48h]@6
  int (*v10)(void); // [sp+8h] [bp-40h]@5
  int v11; // [sp+Ch] [bp-3Ch]@6
  _DWORD *v12; // [sp+14h] [bp-34h]@7
  int (*v13)(void); // [sp+1Ch] [bp-2Ch]@7
  int (__fastcall *v14)(int *); // [sp+20h] [bp-28h]@7
  char v15; // [sp+24h] [bp-24h]@2
  int (*v16)(void); // [sp+2Ch] [bp-1Ch]@2
  int v17; // [sp+30h] [bp-18h]@2

  v1 = result;
  v2 = *(void (__fastcall **)(char *, int, signed int))(result + 28);
  if ( v2 )
  {
    v16 = 0;
    v2(&v15, result + 20, 2);
    v17 = *(_DWORD *)(v1 + 32);
    v16 = *(int (**)(void))(v1 + 28);
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v3 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v3 = &ServiceLocator<AppPlatform>::mDefaultService;
    v4 = *(_DWORD *)v3;
    v5 = 0;
    v6 = *(int (__fastcall **)(int, _DWORD **))(**(_DWORD **)v3 + 348);
    v10 = 0;
    if ( v16 )
    {
      ((void (__fastcall *)(int *, char *, signed int))v16)(&v9, &v15, 2);
      v5 = v16;
      v11 = v17;
      v10 = v16;
    }
    v13 = 0;
    v7 = operator new(0x10u);
    *(_QWORD *)v7 = *(_QWORD *)&v9;
    v8 = v11;
    v7[2] = v5;
    v7[3] = v8;
    v12 = v7;
    v13 = (int (*)(void))sub_C2555E;
    v14 = sub_C2554C;
    result = v6(v4, &v12);
    if ( v13 )
      result = v13();
    if ( v10 )
      result = v10();
      result = v16();
  }
  return result;
}


void __fastcall SaveTransactionManager::UserListObserver::onUserAdded(int a1, Social::User **a2)
{
  SaveTransactionManager::UserListObserver::onUserAdded(a1, a2);
}


void __fastcall SaveTransactionManager::UserListObserver::onUserAdded(int a1, Social::User **a2)
{
  j_j_j__ZN22SaveTransactionManager14_handleAddUserERKSt10shared_ptrIN6Social4UserEE(*(_DWORD *)(a1 + 8), a2);
}


int __fastcall SaveTransactionManager::UserStorageAreaObserver::~UserStorageAreaObserver(SaveTransactionManager::UserStorageAreaObserver *this)
{
  SaveTransactionManager::UserStorageAreaObserver *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_26D6998;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  return j_j_j__ZN4Core8ObserverINS_23FileStorageAreaObserverENS_18SingleThreadedLockEED2Ev((int)v1);
}


void __fastcall SaveTransactionManager::UserListObserver::~UserListObserver(SaveTransactionManager::UserListObserver *this, int a2, int a3)
{
  SaveTransactionManager::UserListObserver::~UserListObserver(this, a2, a3);
}


void __fastcall SaveTransactionManager::_handleAddUser(int a1, Social::User **a2)
{
  SaveTransactionManager::_handleAddUser(a1, a2);
}


unsigned int __fastcall SaveTransactionManager::_handleRemoveUser(int a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // kr00_8@1
  int v3; // r10@1
  unsigned int *v4; // r6@2
  unsigned int v5; // r0@4
  int v6; // r8@6
  int *v7; // r10@6
  int v8; // r9@6
  signed int v9; // r0@6
  int v10; // r5@6
  int v11; // t1@8
  unsigned int v12; // r0@10
  unsigned int v13; // r0@15
  unsigned int v14; // r0@20
  unsigned int v15; // r0@25
  unsigned int v16; // r0@30
  unsigned int *v17; // r4@34
  unsigned int v18; // r0@36
  unsigned int v19; // r0@43
  int v20; // r1@47
  int v21; // r1@48
  int v22; // r6@49
  int v23; // r2@49
  bool v24; // zf@49
  int v25; // r2@52
  bool v26; // zf@52
  int v27; // r1@57
  unsigned int *v28; // r5@70
  unsigned int v29; // r0@72
  unsigned int *v30; // r4@76
  unsigned int v31; // r0@78
  unsigned int v32; // r0@85
  unsigned int *v33; // r4@89
  unsigned int v34; // r0@91
  unsigned int *v35; // r1@97
  unsigned int v36; // r0@99
  unsigned int *v37; // r4@103
  unsigned int v38; // r0@105
  int v39; // r0@110
  _DWORD *v40; // r1@110
  int v41; // r0@111
  _DWORD *v42; // r4@112
  int v43; // r0@112
  unsigned int result; // r0@114
  unsigned int *v45; // r5@115
  unsigned int v46; // r0@117
  unsigned int *v47; // r4@121
  unsigned int v48; // r0@123
  unsigned int *v49; // r4@134

  v2 = *a2;
  v3 = a1;
  if ( *a2 >> 32 )
  {
    v4 = (unsigned int *)(HIDWORD(v2) + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
    v11 = *(_DWORD *)(v3 + 8);
    v7 = (int *)(v3 + 8);
    v6 = v11;
    v10 = *(v7 - 1);
        v12 = __ldrex(v4);
      while ( __strex(v12 + 1, v4) );
        v13 = __ldrex(v4);
      while ( __strex(v13 + 1, v4) );
        v14 = __ldrex(v4);
      while ( __strex(v14 + 1, v4) );
        v15 = __ldrex(v4);
      while ( __strex(v15 + 1, v4) );
        v16 = __ldrex(v4);
      while ( __strex(v16 - 1, v4) );
      v16 = (*v4)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(HIDWORD(v2) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 8))(HIDWORD(v2));
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
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
        v19 = __ldrex(v4);
      while ( __strex(v19 + 1, v4) );
    v9 = 0;
    v8 = HIDWORD(v2);
  }
  else
    v7 = (int *)(a1 + 8);
    v6 = *(_DWORD *)(a1 + 8);
    v8 = 0;
    v9 = 1;
  v20 = (v6 - v10) >> 4;
  if ( v20 < 1 )
LABEL_56:
    if ( 1 == (v6 - v10) >> 2 )
      v22 = v10;
      v27 = (v6 - v10) >> 2;
      if ( v27 == 2 )
        v22 = v10;
        if ( v27 != 3 )
        {
          v22 = v6;
          goto LABEL_69;
        }
        if ( *(_DWORD *)(*(_DWORD *)v10 + 12) == (_DWORD)v2 )
        v22 = v10 + 4;
      if ( *(_DWORD *)(*(_DWORD *)v22 + 12) == (_DWORD)v2 )
        goto LABEL_69;
      v22 += 4;
    if ( *(_DWORD *)(*(_DWORD *)v22 + 12) != (_DWORD)v2 )
      v22 = v6;
    v21 = v20 + 1;
    while ( 1 )
      v23 = *(_DWORD *)(*(_DWORD *)v10 + 12);
      v24 = v23 == (_DWORD)v2;
      if ( v23 != (_DWORD)v2 )
        v24 = *(_DWORD *)(*(_DWORD *)(v10 + 4) + 12) == (_DWORD)v2;
      if ( v24 )
        break;
      v22 = v10 + 8;
      v25 = *(_DWORD *)(*(_DWORD *)(v10 + 8) + 12);
      v26 = v25 == (_DWORD)v2;
      if ( v25 != (_DWORD)v2 )
        v22 = v10 + 12;
        v26 = *(_DWORD *)(*(_DWORD *)(v10 + 12) + 12) == (_DWORD)v2;
      if ( v26 )
      --v21;
      v10 += 16;
      if ( v21 <= 1 )
        goto LABEL_56;
LABEL_69:
  if ( !v9 )
    v28 = (unsigned int *)(v8 + 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 == 1 )
      v30 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
        v32 = __ldrex(v28);
      while ( __strex(v32 - 1, v28) );
      v32 = (*v28)--;
    if ( v32 == 1 )
      v33 = (unsigned int *)(v8 + 8);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 == 1 )
  if ( HIDWORD(v2) )
    v35 = (unsigned int *)(HIDWORD(v2) + 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 == 1 )
      v37 = (unsigned int *)(HIDWORD(v2) + 8);
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        v38 = (*v37)--;
      if ( v38 == 1 )
  v39 = *v7;
  v40 = (_DWORD *)(*v7 - 4);
  if ( (_DWORD *)v22 != v40 )
    v41 = *(_DWORD *)v22;
    *(_DWORD *)v22 = *v40;
    *v40 = v41;
    v39 = *v7;
  v42 = (_DWORD *)(v39 - 4);
  *v7 = v39 - 4;
  v43 = *(_DWORD *)(v39 - 4);
  if ( v43 )
    (*(void (**)(void))(*(_DWORD *)v43 + 4))();
  result = 0;
  *v42 = 0;
    v45 = (unsigned int *)(HIDWORD(v2) + 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 == 1 )
      v47 = (unsigned int *)(HIDWORD(v2) + 8);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 == 1 )
        result = __ldrex(v45);
      while ( __strex(result - 1, v45) );
      result = (*v45)--;
    if ( result == 1 )
      v49 = (unsigned int *)(HIDWORD(v2) + 8);
          result = __ldrex(v49);
        while ( __strex(result - 1, v49) );
        result = (*v49)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  return result;
}


void __fastcall SaveTransactionManager::_handleBeginWrite(int result)
{
  unsigned int v1; // r1@2

  __dmb();
  do
    v1 = __ldrex((unsigned int *)result);
  while ( __strex(v1 + 1, (unsigned int *)result) );
  if ( v1 )
    JUMPOUT(v1 == 0, SaveTransactionManager::_handleEndWrite);
  else
    j_j_j__ZN22SaveTransactionManager19_showGlobalSaveIconEv((SaveTransactionManager *)result);
}


unsigned int *__fastcall SaveTransactionManager::UserStorageAreaObserver::_onEndWrites(SaveTransactionManager::UserStorageAreaObserver *this)
{
  unsigned int *result; // r0@1
  unsigned int v2; // r1@2

  result = (unsigned int *)*((_DWORD *)this + 2);
  __dmb();
  do
    v2 = __ldrex(result);
  while ( __strex(v2 - 1, result) );
  if ( v2 == 1 )
    result = (unsigned int *)j_j_j__ZN22SaveTransactionManager19_hideGlobalSaveIconEv((SaveTransactionManager *)result);
  else
    JUMPOUT(v2 == 1, SaveTransactionManager::UserStorageAreaObserver::_onWriteFile);
  return result;
}


SaveTransactionManager *__fastcall SaveTransactionManager::~SaveTransactionManager(SaveTransactionManager *this)
{
  SaveTransactionManager *v1; // r10@1
  __int64 v2; // r4@1
  unsigned int v3; // r6@2
  int v4; // r0@3
  int v5; // r5@4
  unsigned int *v6; // r1@5
  unsigned int v7; // r0@7
  unsigned int *v8; // r1@13
  unsigned int v9; // r0@15
  unsigned int *v10; // r7@19
  unsigned int v11; // r0@21
  int v12; // r7@28
  void (*v13)(void); // r3@32
  int v14; // r0@34
  char *v15; // r5@36
  char *v16; // r7@36

  v1 = this;
  v2 = *(_QWORD *)((char *)this + 4);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = 0;
    do
    {
      v4 = *(_DWORD *)(v2 + 4 * v3);
      if ( !v4 )
        goto LABEL_26;
      v5 = *(_DWORD *)(v4 + 16);
      if ( v5 )
      {
        v6 = (unsigned int *)(v5 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 + 1, v6) );
          v4 = *(_DWORD *)(v2 + 4 * v3);
          *(_DWORD *)(v2 + 4 * v3) = 0;
          if ( !v4 )
          {
LABEL_13:
            v8 = (unsigned int *)(v5 + 4);
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
              v10 = (unsigned int *)(v5 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
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
                (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
            goto LABEL_26;
          }
          goto LABEL_12;
        }
        ++*v6;
      }
      *(_DWORD *)(v2 + 4 * v3) = 0;
LABEL_12:
      (*(void (**)(void))(*(_DWORD *)v4 + 4))();
        goto LABEL_13;
LABEL_26:
      v2 = *(_QWORD *)((char *)v1 + 4);
      ++v3;
    }
    while ( v3 < (HIDWORD(v2) - (signed int)v2) >> 2 );
  }
    v12 = v2;
      if ( *(_DWORD *)v12 )
        (*(void (**)(void))(**(_DWORD **)v12 + 4))();
      *(_DWORD *)v12 = 0;
      v12 += 4;
    while ( HIDWORD(v2) != v12 );
  *((_DWORD *)v1 + 2) = v2;
  v13 = (void (*)(void))*((_DWORD *)v1 + 7);
  if ( v13 )
    v13();
  v14 = *((_DWORD *)v1 + 4);
  if ( v14 )
    (*(void (**)(void))(*(_DWORD *)v14 + 4))();
  *((_DWORD *)v1 + 4) = 0;
  v16 = (char *)(*(_QWORD *)((char *)v1 + 4) >> 32);
  v15 = (char *)*(_QWORD *)((char *)v1 + 4);
  if ( v15 != v16 )
      if ( *(_DWORD *)v15 )
        (*(void (**)(void))(**(_DWORD **)v15 + 4))();
      *(_DWORD *)v15 = 0;
      v15 += 4;
    while ( v16 != v15 );
    v15 = (char *)*((_DWORD *)v1 + 1);
  if ( v15 )
    operator delete(v15);
  return v1;
}


void __fastcall SaveTransactionManager::UserListObserver::onUserStorageAreaChanged(int a1, unsigned __int64 *a2)
{
  int v2; // r5@1
  unsigned __int64 *v3; // r4@1

  v2 = a1;
  v3 = a2;
  SaveTransactionManager::_handleRemoveUser(*(_DWORD *)(a1 + 8), a2);
  j_j_j__ZN22SaveTransactionManager14_handleAddUserERKSt10shared_ptrIN6Social4UserEE(
    *(_DWORD *)(v2 + 8),
    (Social::User **)v3);
}


void __fastcall SaveTransactionManager::_handleAddUser(int a1, Social::User **a2)
{
  Social::User **v2; // r7@1
  int v3; // r4@1
  int *v4; // r6@1
  void *v5; // r5@1
  __int64 v6; // r0@1
  unsigned int *v7; // r2@2
  unsigned int v8; // r3@4
  __int64 v9; // r0@9
  void *v10; // [sp+0h] [bp-18h]@7
  int v11; // [sp+10h] [bp-8h]@13

  v2 = a2;
  v3 = a1;
  v4 = (int *)Social::User::getStorageArea(*a2);
  v5 = operator new(0x14u);
  v6 = *(_QWORD *)v2;
  if ( *(_QWORD *)v2 >> 32 )
  {
    v7 = (unsigned int *)(HIDWORD(v6) + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
    }
    else
      ++*v7;
  }
  *(_DWORD *)v5 = &off_26D6998;
  *((_DWORD *)v5 + 1) = 0;
  *((_DWORD *)v5 + 2) = v3;
  *(_QWORD *)((char *)v5 + 12) = v6;
  v10 = v5;
  if ( *v4 )
    Core::FileStorageArea::addObserver(*v4, (int)v5);
  v9 = *(_QWORD *)(v3 + 8);
  if ( (_DWORD)v9 == HIDWORD(v9) )
    std::vector<std::unique_ptr<SaveTransactionManager::UserStorageAreaObserver,std::default_delete<SaveTransactionManager::UserStorageAreaObserver>>,std::allocator<std::unique_ptr<SaveTransactionManager::UserStorageAreaObserver,std::default_delete<SaveTransactionManager::UserStorageAreaObserver>>>>::_M_emplace_back_aux<std::unique_ptr<SaveTransactionManager::UserStorageAreaObserver,std::default_delete<SaveTransactionManager::UserStorageAreaObserver>>>(
      (_QWORD *)(v3 + 4),
      (int *)&v10);
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v10 = 0;
    *(_DWORD *)v9 = v5;
    *(_DWORD *)(v3 + 8) = v9 + 4;
  v10 = 0;
  JUMPOUT(__CS__, v11);
}


unsigned int *__fastcall SaveTransactionManager::UserStorageAreaObserver::_onBeginWrites(SaveTransactionManager::UserStorageAreaObserver *this)
{
  unsigned int *result; // r0@1
  unsigned int v2; // r1@2

  result = (unsigned int *)*((_DWORD *)this + 2);
  __dmb();
  do
    v2 = __ldrex(result);
  while ( __strex(v2 + 1, result) );
  if ( v2 )
    JUMPOUT(v2 == 0, SaveTransactionManager::UserStorageAreaObserver::_onEndWrites);
  else
    result = (unsigned int *)j_j_j__ZN22SaveTransactionManager19_showGlobalSaveIconEv((SaveTransactionManager *)result);
  return result;
}


void __fastcall SaveTransactionManager::UserStorageAreaObserver::~UserStorageAreaObserver(SaveTransactionManager::UserStorageAreaObserver *this, unsigned int *a2)
{
  SaveTransactionManager::UserStorageAreaObserver::~UserStorageAreaObserver(this, a2);
}


void __fastcall SaveTransactionManager::UserListObserver::~UserListObserver(SaveTransactionManager::UserListObserver *this, int a2, int a3)
{
  SaveTransactionManager::UserListObserver **v3; // lr@0
  int v4; // r1@1
  bool v5; // zf@1
  SaveTransactionManager::UserListObserver *v6; // r12@4
  int v7; // r3@5
  int v8; // r4@6
  bool v9; // zf@7
  SaveTransactionManager::UserListObserver **v10; // r3@7
  SaveTransactionManager::UserListObserver *v11; // r5@10
  bool v12; // zf@10
  int v13; // r3@15
  SaveTransactionManager::UserListObserver *v14; // r2@28

  *(_DWORD *)this = &off_26D6984;
  v4 = *((_DWORD *)this + 1);
  v5 = v4 == 0;
  if ( v4 )
  {
    v3 = (SaveTransactionManager::UserListObserver **)(*(_QWORD *)(v4 + 4) >> 32);
    a3 = *(_QWORD *)(v4 + 4);
    v5 = a3 == (_DWORD)v3;
  }
  if ( v5 )
    goto LABEL_29;
  v6 = *(v3 - 1);
  if ( v6 == this )
    *(_DWORD *)(v4 + 8) = v3 - 1;
    j_j_j__ZdlPv_3((void *)this);
    return;
  v7 = ((signed int)v3 - a3) >> 4;
  if ( v7 >= 1 )
    v8 = v7 + 1;
    do
    {
      v9 = *(_DWORD *)a3 == (_DWORD)this;
      v10 = (SaveTransactionManager::UserListObserver **)a3;
      if ( *(SaveTransactionManager::UserListObserver **)a3 != this )
      {
        v10 = (SaveTransactionManager::UserListObserver **)(a3 + 4);
        v9 = *(_DWORD *)(a3 + 4) == (_DWORD)this;
      }
      if ( v9 )
        goto LABEL_28;
      v10 = (SaveTransactionManager::UserListObserver **)(a3 + 8);
      v11 = *(SaveTransactionManager::UserListObserver **)(a3 + 8);
      v12 = v11 == this;
      if ( v11 != this )
        v10 = (SaveTransactionManager::UserListObserver **)(a3 + 12);
        v12 = *(_DWORD *)(a3 + 12) == (_DWORD)this;
      if ( v12 )
      --v8;
      a3 += 16;
    }
    while ( v8 > 1 );
  if ( 1 == ((signed int)v3 - a3) >> 2 )
    v10 = (SaveTransactionManager::UserListObserver **)a3;
    goto LABEL_24;
  v13 = ((signed int)v3 - a3) >> 2;
  if ( v13 == 2 )
LABEL_22:
    if ( *v10 != this )
      ++v10;
LABEL_24:
      if ( *v10 != this )
        v10 = v3;
      goto LABEL_28;
    goto LABEL_28;
  if ( v13 != 3 )
    v10 = v3;
  v10 = (SaveTransactionManager::UserListObserver **)a3;
  if ( *(SaveTransactionManager::UserListObserver **)a3 != this )
    v10 = (SaveTransactionManager::UserListObserver **)(a3 + 4);
    goto LABEL_22;
LABEL_28:
  v14 = *v10;
  *v10 = v6;
  *(v3 - 1) = v14;
  *(_DWORD *)(v4 + 8) -= 4;
LABEL_29:
  j_j_j__ZdlPv_3((void *)this);
}


void __fastcall SaveTransactionManager::UserListObserver::onUserStorageAreaChanged(int a1, unsigned __int64 *a2)
{
  SaveTransactionManager::UserListObserver::onUserStorageAreaChanged(a1, a2);
}


int __fastcall SaveTransactionManager::SaveTransactionManager(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r11@1
  int v5; // r6@1
  __int64 v6; // kr00_8@1
  int v7; // r7@1
  int v8; // r0@1
  int v9; // r0@1
  _DWORD *v10; // r0@1
  _DWORD *v11; // r7@1
  int v12; // r0@1
  __int64 v13; // r0@3
  void *v14; // r8@5
  unsigned int v15; // r2@5
  unsigned int v16; // r1@7
  unsigned int v17; // r10@7
  char *v18; // r9@13
  char *v19; // r6@15

  v3 = a1;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  v4 = a2;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v5 = a1 + 20;
  v6 = *(_QWORD *)a3;
  v7 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)a3 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a3 + 4) = v7;
  *(_QWORD *)v5 = v6;
  v8 = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(a3 + 8) = *(_DWORD *)(v3 + 28);
  *(_DWORD *)(v3 + 28) = v8;
  v9 = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(v5 + 12);
  *(_DWORD *)(v5 + 12) = v9;
  v10 = operator new(0xCu);
  v11 = v10;
  *v10 = &off_26D6964;
  v10[1] = 0;
  v10[2] = v3;
  v12 = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v3 + 16) = v11;
  if ( v12 )
  {
    (*(void (**)(void))(*(_DWORD *)v12 + 4))();
    v11 = *(_DWORD **)(v3 + 16);
  }
  v11[1] = v4 + 136;
  v13 = *(_QWORD *)(v4 + 144);
  if ( (_DWORD)v13 == HIDWORD(v13) )
    v14 = *(void **)(v4 + 140);
    v15 = ((signed int)v13 - (signed int)v14) >> 2;
    if ( !v15 )
      v15 = 1;
    HIDWORD(v13) = v15 + (((signed int)v13 - (signed int)v14) >> 2);
    v17 = v15 + (((signed int)v13 - (signed int)v14) >> 2);
    if ( 0 != HIDWORD(v13) >> 30 )
      v17 = 0x3FFFFFFF;
    if ( v16 < v15 )
    if ( v17 )
    {
      if ( v17 >= 0x40000000 )
        sub_DA7414();
      v18 = (char *)operator new(4 * v17);
      LODWORD(v13) = *(_QWORD *)(v4 + 140) >> 32;
      v14 = (void *)*(_QWORD *)(v4 + 140);
    }
    else
      v18 = 0;
    v19 = &v18[v13 - (_DWORD)v14];
    *(_DWORD *)&v18[v13 - (_DWORD)v14] = v11;
    if ( 0 != ((signed int)v13 - (signed int)v14) >> 2 )
      _aeabi_memmove4(v18, v14);
    if ( v14 )
      operator delete(v14);
    *(_DWORD *)(v4 + 140) = v18;
    *(_DWORD *)(v4 + 144) = v19 + 4;
    *(_DWORD *)(v4 + 148) = &v18[4 * v17];
  else
    *(_DWORD *)v13 = v11;
    *(_DWORD *)(v4 + 144) += 4;
  return v3;
}


int __fastcall SaveTransactionManager::deleteShowIconFunction(int result)
{
  int v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = result;
  v2 = *(void (**)(void))(result + 28);
  if ( v2 )
  {
    v2();
    result = 0;
    *(_DWORD *)(v1 + 28) = 0;
    *(_DWORD *)(v1 + 32) = 0;
  }
  return result;
}
