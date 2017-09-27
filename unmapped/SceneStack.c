

int __fastcall SceneStack::deferPushesUntilNextTick(int result)
{
  *(_BYTE *)(result + 34) = 1;
  return result;
}


int __fastcall SceneStack::_popScreen(SceneStack *this, int a2)
{
  SceneStack *v2; // r6@1
  int v3; // r8@1
  int v4; // r4@1
  __int64 v5; // kr00_8@1
  __int64 v6; // kr08_8@2
  unsigned int *v7; // r0@3
  unsigned int v8; // r1@5
  int v9; // r0@8
  int v10; // r5@8
  unsigned int *v11; // r1@9
  unsigned int v12; // r0@11
  unsigned int *v13; // r7@15
  unsigned int v14; // r0@17
  int i; // r5@22
  int v16; // r7@22
  unsigned int *v17; // r1@25
  unsigned int v18; // r0@27
  unsigned int *v19; // r5@31
  unsigned int v20; // r0@33
  int result; // r0@38

  v2 = this;
  v3 = a2;
  v4 = *(_DWORD *)(*((_DWORD *)this + 1) - 8);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v4 + 32))(*(_DWORD *)(*((_DWORD *)this + 1) - 8));
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 36))(v4);
  v5 = *(_QWORD *)v2;
  if ( HIDWORD(v5) != (_DWORD)v5 )
  {
    v6 = *(_QWORD *)(HIDWORD(v5) - 8);
    if ( HIDWORD(v6) )
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
    v9 = *((_DWORD *)v2 + 1);
    *((_DWORD *)v2 + 1) = v9 - 8;
    v10 = *(_DWORD *)(v9 - 4);
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
    v16 = *(_QWORD *)v2 >> 32;
    for ( i = *(_QWORD *)v2; v16 != i; i += 8 )
      (*(void (**)(void))(**(_DWORD **)i + 40))();
    (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v6 + 260))(v6, *((_DWORD *)v2 + 6));
      v17 = (unsigned int *)(HIDWORD(v6) + 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        v19 = (unsigned int *)(HIDWORD(v6) + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v6) + 8))(HIDWORD(v6));
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v6) + 12))(HIDWORD(v6));
  }
  result = *(_QWORD *)v2 >> 32;
  if ( result != (unsigned int)*(_QWORD *)v2 && *((_DWORD *)v2 + 7) <= 1 )
    if ( !*((_DWORD *)v2 + 22) )
      sub_DA7654();
    result = (*((int (__fastcall **)(_DWORD, _DWORD, _DWORD))v2 + 23))((char *)v2 + 80, *(_DWORD *)(result - 8), v3);
  return result;
}


void __fastcall SceneStack::getScreenNames(SceneStack *this, unsigned __int64 *a2)
{
  SceneStack *v2; // r11@1
  int v3; // r6@1
  int i; // r7@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  __int64 v7; // r0@11
  int v8; // r1@12
  void *v9; // r0@14
  void *v10; // [sp+4h] [bp-34h]@11

  v2 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v3 = *a2 >> 32;
  for ( i = *a2; i != v3; i += 8 )
  {
    (*(void (__fastcall **)(void **))(**(_DWORD **)i + 228))(&v10);
    v7 = *(_QWORD *)((char *)v2 + 4);
    if ( (_DWORD)v7 == HIDWORD(v7) )
    {
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
        (unsigned __int64 *)v2,
        &v10);
      v8 = (int)v10;
    }
    else
      *(_DWORD *)v7 = v10;
      HIDWORD(v7) = &unk_28898CC;
      v10 = &unk_28898CC;
      *((_DWORD *)v2 + 1) = v7 + 4;
    v9 = (void *)(v8 - 12);
    if ( (int *)(v8 - 12) != &dword_28898C0 )
      v5 = (unsigned int *)(v8 - 4);
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
        j_j_j_j_j__ZdlPv_9(v9);
  }
}


int __fastcall SceneStack::isScreenReplaceable(SceneStack *this)
{
  SceneStack *v1; // r4@1
  __int64 v2; // kr00_8@1
  int result; // r0@3
  int v4; // r1@7
  int v5; // r5@7
  int v6; // r4@8
  int v7; // r0@9
  bool v8; // zf@10

  v1 = this;
  v2 = *(_QWORD *)this;
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    result = 0;
  }
  else if ( (*(int (**)(void))(**(_DWORD **)(HIDWORD(v2) - 8) + 168))() == 1 )
    if ( (unsigned int)*(_QWORD *)v1 != *(_QWORD *)v1 >> 32 )
      return result;
  else
    result = 1;
  v4 = *(_QWORD *)((char *)v1 + 12) >> 32;
  v5 = *(_QWORD *)((char *)v1 + 12);
  if ( v5 != v4 )
    v6 = v4 - 8;
    do
    {
      v7 = (*(int (**)(void))(**(_DWORD **)v5 + 168))();
      if ( v7 )
        break;
      v8 = v6 == v5;
      v5 += 8;
    }
    while ( !v8 );
    result = v7 ^ 1;
  return result;
}


_QWORD *__fastcall SceneStack::onGameEventNotification(_QWORD *result)
{
  int *v1; // r5@1 OVERLAPPED
  int *v2; // r6@1 OVERLAPPED
  int v3; // t1@2

  for ( *(_QWORD *)&v1 = *result; v2 != v1; result = (_QWORD *)(*(int (**)(void))(*(_DWORD *)v3 + 40))() )
  {
    v3 = *v1;
    v1 += 2;
  }
  return result;
}


signed int __fastcall SceneStack::updateScheduledScreen(SceneStack *this)
{
  SceneStack *v1; // r10@1
  __int64 v2; // r8@1
  void *v3; // r4@2
  void *v4; // r5@2
  char *v5; // r1@3
  int (**v6)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@3
  unsigned int *v7; // r2@4
  signed int v8; // r7@6
  char *v9; // r6@10
  int (**v10)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r7@10
  int *v11; // r0@11
  int v12; // r1@16
  signed int result; // r0@16
  signed int v14; // r0@17
  int v15; // r0@21
  int v16; // r4@23
  int v17; // r9@23
  int v18; // r0@24
  unsigned int *v19; // r0@25
  unsigned int v20; // r1@27
  int v21; // r6@30
  unsigned int *v22; // r1@31
  unsigned int v23; // r0@33
  unsigned int *v24; // r7@37
  unsigned int v25; // r0@39
  int v26; // r9@45
  int v27; // r7@46
  int v28; // r6@47
  unsigned int *v29; // r1@48
  unsigned int v30; // r0@50
  unsigned int *v31; // r5@54
  unsigned int v32; // r0@56
  int v33; // [sp+4h] [bp-3Ch]@24
  int v34; // [sp+8h] [bp-38h]@24
  void *v35; // [sp+Ch] [bp-34h]@2
  void *v36; // [sp+10h] [bp-30h]@2
  char v37; // [sp+18h] [bp-28h]@3

  v1 = this;
  *((_BYTE *)this + 34) = 0;
  v2 = *(_QWORD *)((char *)this + 12);
  if ( *((_DWORD *)this + 7) > (signed int)((*(_QWORD *)this >> 32) - *(_QWORD *)this) >> 3 )
  {
    SceneStack::getScreenNames((SceneStack *)&v35, (unsigned __int64 *)this);
    v3 = v36;
    v4 = v35;
    if ( v35 != v36 )
    {
      v5 = &v37;
      v6 = &pthread_create;
      do
      {
        v11 = (int *)(*(_DWORD *)v4 - 12);
        if ( v11 != &dword_28898C0 )
        {
          v7 = (unsigned int *)(*(_DWORD *)v4 - 4);
          if ( v6 )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 <= 0 )
            v9 = v5;
            v10 = v6;
            j_j_j_j_j__ZdlPv_9(v11);
            v6 = v10;
            v5 = v9;
        }
        v4 = (char *)v4 + 4;
      }
      while ( v4 != v3 );
      v4 = v35;
    }
    if ( v4 )
      operator delete(v4);
  }
  v12 = *((_DWORD *)v1 + 7);
  result = 0;
  if ( v12 )
    do
      v14 = 0;
      if ( (unsigned int)((HIDWORD(v2) - (signed int)v2) >> 3) < 2 )
        v14 = 1;
      if ( v12 != 1 )
        v12 = 0;
      SceneStack::_popScreen(v1, v12 & v14);
      v15 = *((_DWORD *)v1 + 7);
      v12 = v15 - 1;
      *((_DWORD *)v1 + 7) = v15 - 1;
    while ( v15 != 1 );
    result = 1;
  v17 = *(_QWORD *)((char *)v1 + 12) >> 32;
  v16 = *(_QWORD *)((char *)v1 + 12);
  if ( v16 != v17 )
      v33 = *(_DWORD *)v16;
      v18 = *(_DWORD *)(v16 + 4);
      v34 = v18;
      if ( v18 )
        v19 = (unsigned int *)(v18 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v20 = __ldrex(v19);
          while ( __strex(v20 + 1, v19) );
        else
          ++*v19;
      SceneStack::pushScreen((int)v1, (int)&v33, 0);
      v21 = v34;
      if ( v34 )
        v22 = (unsigned int *)(v34 + 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 == 1 )
          v24 = (unsigned int *)(v21 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
          if ( &pthread_create )
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
            v25 = (*v24)--;
          if ( v25 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
      v16 += 8;
    while ( v16 != v17 );
    v26 = *(_QWORD *)((char *)v1 + 12) >> 32;
    v16 = *(_QWORD *)((char *)v1 + 12);
    if ( v26 != v16 )
      v27 = *(_QWORD *)((char *)v1 + 12);
        v28 = *(_DWORD *)(v27 + 4);
        if ( v28 )
          v29 = (unsigned int *)(v28 + 4);
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
            v30 = (*v29)--;
          if ( v30 == 1 )
            v31 = (unsigned int *)(v28 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 8))(v28);
            if ( &pthread_create )
            {
              __dmb();
              do
                v32 = __ldrex(v31);
              while ( __strex(v32 - 1, v31) );
            }
            else
              v32 = (*v31)--;
            if ( v32 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 12))(v28);
        v27 += 8;
      while ( v27 != v26 );
  *((_DWORD *)v1 + 4) = v16;
  return result;
}


int __fastcall SceneStack::getTopScreen(SceneStack *this)
{
  return *((_DWORD *)this + 1) - 8;
}


int __fastcall SceneStack::getTopScreen(SceneStack *this)
{
  return *((_DWORD *)this + 1) - 8;
}


int __fastcall SceneStack::setPushScreenCallback(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 64;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 64);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 72);
  v10 = v13;
  *(_DWORD *)(v4 + 72) = v8;
  v14 = *(_DWORD *)(v4 + 76);
  *(_DWORD *)(v4 + 76) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


int __fastcall SceneStack::resetScreenChangeDirtyFlag(int result)
{
  *(_BYTE *)(result + 32) = 0;
  return result;
}


int __fastcall SceneStack::setPrePushScreenCallback(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 48;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 48);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 56);
  v10 = v13;
  *(_DWORD *)(v4 + 56) = v8;
  v14 = *(_DWORD *)(v4 + 60);
  *(_DWORD *)(v4 + 60) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


int __fastcall SceneStack::forEachVisibleScreen(_QWORD *a1, int a2, int a3, int a4, int a5)
{
  _QWORD *v5; // r5@1
  int v6; // r11@1
  int v7; // r9@1
  __int64 v8; // r0@1
  unsigned int v9; // r10@2
  unsigned int v10; // r8@2
  unsigned int v11; // r4@3
  int v12; // r4@4
  int v13; // r0@6
  int v14; // r7@17
  int v15; // r6@18
  int v16; // r0@21
  __int64 v17; // r6@28
  unsigned int v18; // r4@38
  int v19; // r9@39
  int v20; // r6@40
  int v21; // r7@41
  int v22; // r0@44
  bool v23; // zf@46
  __int64 v24; // r6@54
  int v26; // [sp+0h] [bp-30h]@2
  int v27; // [sp+8h] [bp-28h]@16
  int v28; // [sp+8h] [bp-28h]@38

  v5 = a1;
  v6 = a2;
  v8 = *a1;
  v7 = a4;
  HIDWORD(v8) -= v8;
  if ( !(SHIDWORD(v8) >> 3) )
    return v8;
  v9 = SHIDWORD(v8) >> 3;
  v10 = (SHIDWORD(v8) >> 3) - 1;
  v26 = a3;
  if ( SHIDWORD(v8) >> 3 == 1 )
  {
    v11 = 0;
    v10 = 0;
  }
  else
    v11 = (SHIDWORD(v8) >> 3) - 1;
    if ( (*(int (**)(void))(**(_DWORD **)(v8 + 8 * v10) + 152))() == 1 )
    {
      v12 = v9 - 2;
      while ( v12 )
      {
        v13 = (*(int (**)(void))(**(_DWORD **)(*(_DWORD *)v5 + 8 * v12--) + 152))();
        if ( !v13 )
        {
          v11 = v12 + 1;
          goto LABEL_10;
        }
      }
      v11 = 0;
    }
LABEL_10:
    if ( v10 )
      while ( (*(int (**)(void))(**(_DWORD **)(*(_DWORD *)v5 + 8 * v10) + 200))() )
        if ( !--v10 )
          v10 = 0;
          break;
    else
      v10 = 0;
  if ( v11 < v9 )
    v27 = v26 ^ 1;
    if ( a5 == 1 )
      do
        v14 = (*(int (**)(void))(**(_DWORD **)(*(_DWORD *)v5 + 8 * v11) + 184))();
        if ( v11 >= v10 )
          v15 = 0;
        else
          v15 = (*(int (**)(void))(**(_DWORD **)(*(_DWORD *)v5 + 8 * v11) + 192))();
        if ( !(*(int (**)(void))(**(_DWORD **)(*(_DWORD *)v5 + 8 * v11) + 168))() )
          v16 = (*(int (**)(void))(**(_DWORD **)(*(_DWORD *)v5 + 8 * v11) + 196))();
          if ( !(v7 ^ 1 | v16) )
            v16 = (*(int (**)(void))(**(_DWORD **)(*(_DWORD *)v5 + 8 * v11) + 196))() & v27;
          if ( !(v16 | v15 | v14) )
          {
            if ( !*(_DWORD *)(v6 + 8) )
              goto LABEL_66;
            (*(void (__fastcall **)(int, unsigned int))(v6 + 12))(v6, *(_DWORD *)v5 + 8 * v11);
          }
        ++v11;
      while ( v11 < v9 );
      goto LABEL_38;
    do
      LODWORD(v17) = (*(int (**)(void))(**(_DWORD **)(*(_DWORD *)v5 + 8 * v11) + 184))();
      if ( v11 >= v10 )
        HIDWORD(v17) = 0;
      else
        HIDWORD(v17) = (*(int (**)(void))(**(_DWORD **)(*(_DWORD *)v5 + 8 * v11) + 192))();
      if ( v7 == 1 )
        if ( !((*(int (**)(void))(**(_DWORD **)(*(_DWORD *)v5 + 8 * v11) + 196))() & v27 | HIDWORD(v17) | (unsigned int)v17) )
          goto LABEL_35;
      else if ( !v17 )
LABEL_35:
        if ( !*(_DWORD *)(v6 + 8) )
LABEL_66:
          sub_DA7654();
        (*(void (__fastcall **)(int, unsigned int))(v6 + 12))(v6, *(_DWORD *)v5 + 8 * v11);
        goto LABEL_37;
LABEL_37:
      ++v11;
    while ( v11 < v9 );
LABEL_38:
  v18 = 0;
  v28 = v26 ^ 1;
  if ( a5 != 1 )
    while ( 1 )
      LODWORD(v24) = (*(int (**)(void))(**(_DWORD **)(*(_DWORD *)v5 + 8 * v18) + 184))();
      if ( v18 >= v10 )
        HIDWORD(v24) = 0;
        HIDWORD(v24) = (*(int (**)(void))(**(_DWORD **)(*(_DWORD *)v5 + 8 * v18) + 192))();
        LODWORD(v8) = (*(int (**)(void))(**(_DWORD **)(*(_DWORD *)v5 + 8 * v18) + 196))() & v28 | HIDWORD(v24);
        if ( !(_DWORD)v8 )
          LODWORD(v8) = v24 ^ 1;
          if ( (_DWORD)v24 == 1 )
LABEL_62:
            LODWORD(v8) = (*(int (__fastcall **)(int, unsigned int))(v6 + 12))(v6, *(_DWORD *)v5 + 8 * v18);
            goto LABEL_64;
        LODWORD(v8) = v24 ^ 1 | HIDWORD(v24);
        if ( v24 == 1 )
          goto LABEL_62;
LABEL_64:
      if ( ++v18 >= v9 )
        return v8;
  v19 = v7 ^ 1;
  do
    v20 = (*(int (**)(void))(**(_DWORD **)(*(_DWORD *)v5 + 8 * v18) + 184))();
    if ( v18 >= v10 )
      v21 = 0;
      v21 = (*(int (**)(void))(**(_DWORD **)(*(_DWORD *)v5 + 8 * v18) + 192))();
    LODWORD(v8) = (*(int (**)(void))(**(_DWORD **)(*(_DWORD *)v5 + 8 * v18) + 168))();
    if ( !(_DWORD)v8 )
      v22 = (*(int (**)(void))(**(_DWORD **)(*(_DWORD *)v5 + 8 * v18) + 196))();
      if ( !(v22 | v19) )
        v22 = (*(int (**)(void))(**(_DWORD **)(*(_DWORD *)v5 + 8 * v18) + 196))() & v28;
      LODWORD(v8) = v8 | v21;
      v23 = (_DWORD)v8 == 0;
      if ( !(_DWORD)v8 )
        LODWORD(v8) = v20 ^ 1;
        v23 = v20 == 1;
      if ( v23 )
          goto LABEL_66;
        LODWORD(v8) = (*(int (__fastcall **)(int, unsigned int))(v6 + 12))(v6, *(_DWORD *)v5 + 8 * v18);
    ++v18;
  while ( v18 < v9 );
  return v8;
}


signed int __fastcall SceneStack::getSize(SceneStack *this)
{
  return (signed int)((*(_QWORD *)this >> 32) - *(_QWORD *)this) >> 3;
}


int __fastcall SceneStack::SceneStack(int result, unsigned int a2)
{
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 72) = 0;
  *(_DWORD *)(result + 88) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_QWORD *)(result + 24) = a2;
  return result;
}


int __fastcall SceneStack::setBufferTextCharEvents(int result, bool a2)
{
  *(_BYTE *)(result + 35) = a2;
  return result;
}


signed int __fastcall SceneStack::isOnSceneStack(unsigned __int64 *a1, const void **a2)
{
  int v2; // r4@1
  int v3; // r5@1
  const void **v4; // r10@1
  signed int result; // r0@1
  unsigned int *v6; // r1@5
  signed int v7; // r0@7
  char *v8; // r6@12
  size_t v9; // r2@12
  char *v10; // r7@12
  signed int v11; // r8@13
  void *s1; // [sp+4h] [bp-2Ch]@12

  v2 = *a1 >> 32;
  v3 = *a1;
  v4 = a2;
  result = 0;
  if ( v3 != v2 )
  {
    while ( 1 )
    {
      (*(void (__fastcall **)(void **))(**(_DWORD **)v3 + 228))(&s1);
      v8 = (char *)s1;
      v10 = (char *)s1 - 12;
      v9 = *((_DWORD *)s1 - 3);
      if ( v9 == *((_DWORD *)*v4 - 3) )
      {
        v11 = 0;
        if ( !memcmp(s1, *v4, v9) )
          v11 = 1;
      }
      else
      if ( (int *)v10 != &dword_28898C0 )
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
          j_j_j_j_j__ZdlPv_9(v10);
      if ( v11 == 1 )
        break;
      v3 += 8;
      if ( v3 == v2 )
        return 0;
    }
    result = 1;
  }
  return result;
}


void __fastcall SceneStack::handleLicenseChanged(SceneStack *this)
{
  JUMPOUT(SceneStack::handleLicenseChanged);
}


_DWORD *__fastcall SceneStack::forEachAlwaysAcceptInputScreenWithTop(int a1, int a2)
{
  int v2; // r6@1
  unsigned __int64 *v3; // r4@1
  _DWORD *v4; // r5@2
  int (*v5)(void); // r3@2
  void (__fastcall *v6)(char *, int, signed int); // r7@2
  _DWORD *result; // r0@4
  _DWORD *v8; // r7@6
  int v9; // r0@6
  char v10; // [sp+4h] [bp-24h]@3
  int (*v11)(void); // [sp+Ch] [bp-1Ch]@2
  void (__fastcall *v12)(char *, _DWORD *); // [sp+10h] [bp-18h]@3

  v2 = a2;
  v3 = (unsigned __int64 *)a1;
  if ( !*(_DWORD *)(a2 + 8) )
    sub_DA7654();
  v4 = (_DWORD *)(*(_DWORD *)(a1 + 4) - 8);
  (*(void (__fastcall **)(int, _DWORD *))(a2 + 12))(a2, v4);
  v5 = 0;
  v11 = 0;
  v6 = *(void (__fastcall **)(char *, int, signed int))(v2 + 8);
  if ( v6 )
  {
    v6(&v10, v2, 2);
    v12 = *(void (__fastcall **)(char *, _DWORD *))(v2 + 12);
    v5 = *(int (**)(void))(v2 + 8);
    v11 = *(int (**)(void))(v2 + 8);
  }
  result = (_DWORD *)(*v3 >> 32);
  if ( result != (_DWORD *)*v3 )
    result -= 2;
    do
    {
      v8 = result;
      v9 = *result;
      if ( v9 != *v4 && (*(int (**)(void))(*(_DWORD *)v9 + 180))() == 1 )
      {
        if ( !v11 )
          sub_DA7654();
        v12(&v10, v8);
      }
      result = v8 - 2;
    }
    while ( v8 != *(_DWORD **)v3 );
    v5 = v11;
  if ( v5 )
    result = (_DWORD *)v5();
  return result;
}


int __fastcall SceneStack::setScreenTickingFlag(int result, bool a2)
{
  *(_BYTE *)(result + 33) = a2;
  return result;
}


void __fastcall SceneStack::pushScreen(int a1, int a2, int a3)
{
  SceneStack::pushScreen(a1, a2, a3);
}


int __fastcall SceneStack::setPopCallback(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 80;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 80);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 88);
  v10 = v13;
  *(_DWORD *)(v4 + 88) = v8;
  v14 = *(_DWORD *)(v4 + 92);
  *(_DWORD *)(v4 + 92) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


void __fastcall SceneStack::getScreenNames(SceneStack *this, unsigned __int64 *a2)
{
  SceneStack::getScreenNames(this, a2);
}


SceneStack *__fastcall SceneStack::~SceneStack(SceneStack *this)
{
  SceneStack *v1; // r9@1
  int v2; // r0@1
  __int64 v3; // kr00_8@1
  int v4; // r5@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r7@9
  unsigned int v8; // r0@11
  void (*v9)(void); // r3@17
  void (*v10)(void); // r3@19
  void (*v11)(void); // r3@21
  void *v12; // r0@23
  int v13; // r5@25
  int v14; // r7@25
  int v15; // r4@26
  unsigned int *v16; // r1@27
  unsigned int v17; // r0@29
  unsigned int *v18; // r6@33
  unsigned int v19; // r0@35
  int v20; // r5@44
  int v21; // r7@44
  int v22; // r6@45
  unsigned int *v23; // r1@46
  unsigned int v24; // r0@48
  unsigned int *v25; // r4@52
  unsigned int v26; // r0@54

  v1 = this;
  v3 = *(_QWORD *)this;
  v2 = *(_QWORD *)this >> 32;
  if ( (_DWORD)v3 != v2 )
  {
    do
    {
      *((_DWORD *)v1 + 1) = v2 - 8;
      v4 = *(_DWORD *)(v2 - 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
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
          v7 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v2 = *(_QWORD *)v1 >> 32;
    }
    while ( (unsigned int)*(_QWORD *)v1 != v2 );
  }
  v9 = (void (*)(void))*((_DWORD *)v1 + 22);
  if ( v9 )
    v9();
  v10 = (void (*)(void))*((_DWORD *)v1 + 18);
  if ( v10 )
    v10();
  v11 = (void (*)(void))*((_DWORD *)v1 + 14);
  if ( v11 )
    v11();
  v12 = (void *)*((_DWORD *)v1 + 9);
  if ( v12 )
    operator delete(v12);
  v14 = *(_QWORD *)((char *)v1 + 12) >> 32;
  v13 = *(_QWORD *)((char *)v1 + 12);
  if ( v13 != v14 )
      v15 = *(_DWORD *)(v13 + 4);
      if ( v15 )
        v16 = (unsigned int *)(v15 + 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 == 1 )
          v18 = (unsigned int *)(v15 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
            v19 = (*v18)--;
          if ( v19 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
      v13 += 8;
    while ( v13 != v14 );
    v13 = *((_DWORD *)v1 + 3);
  if ( v13 )
    operator delete((void *)v13);
  v21 = *(_QWORD *)v1 >> 32;
  v20 = *(_QWORD *)v1;
  if ( v20 != v21 )
      v22 = *(_DWORD *)(v20 + 4);
      if ( v22 )
        v23 = (unsigned int *)(v22 + 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 == 1 )
          v25 = (unsigned int *)(v22 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
      v20 += 8;
    while ( v20 != v21 );
    v20 = *(_DWORD *)v1;
  if ( v20 )
    operator delete((void *)v20);
  return v1;
}


int __fastcall SceneStack::schedulePopScreen(int result, int a2)
{
  *(_DWORD *)(result + 28) += a2;
  return result;
}


void __fastcall SceneStack::pushScreen(int a1, int a2, int a3)
{
  _DWORD *v3; // r6@1
  int v4; // r9@1
  int v5; // r8@1
  int v6; // r0@1
  int v7; // r1@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r2@4
  int v10; // r7@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r4@14
  unsigned int v14; // r0@16
  __int64 v15; // r0@22
  signed int v16; // r4@22
  signed int v17; // r4@24
  int v18; // r5@27
  int v19; // r1@27
  int v20; // r0@29
  bool v21; // zf@30
  int v22; // r4@34
  int *v23; // r10@34
  int v24; // r11@34
  int v25; // r5@35
  int v26; // r8@36
  unsigned int *v27; // r1@37
  unsigned int v28; // r0@39
  unsigned int *v29; // r6@43
  unsigned int v30; // r0@45
  int v31; // r0@54
  unsigned int *v32; // r0@55
  unsigned int v33; // r1@57
  int v34; // r4@63
  __int64 v35; // kr00_8@65
  __int64 v36; // r0@70
  int v37; // r1@71
  unsigned int *v38; // r1@72
  unsigned int v39; // r0@74
  __int64 v40; // r4@82
  int v41; // t1@83
  _DWORD *v42; // [sp+0h] [bp-30h]@34
  int v43; // [sp+4h] [bp-2Ch]@1
  int v44; // [sp+8h] [bp-28h]@1

  v3 = (_DWORD *)a2;
  v4 = a1;
  v5 = a3;
  v43 = *(_DWORD *)a2;
  v6 = a1 + 48;
  v7 = *(_DWORD *)(a2 + 4);
  v44 = v7;
  if ( v7 )
  {
    v8 = (unsigned int *)(v7 + 4);
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
  std::function<void ()(std::shared_ptr<AbstractScene>)>::operator()(v6, (int)&v43);
  v10 = v44;
  if ( v44 )
    v11 = (unsigned int *)(v44 + 4);
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
  if ( v5 == 1 )
    v15 = *(_QWORD *)v4;
    v16 = HIDWORD(v15) - v15;
    if ( HIDWORD(v15) - (signed int)v15 < 1 )
      v17 = 0;
    else if ( (*(int (**)(void))(**(_DWORD **)(HIDWORD(v15) - 8) + 176))() )
      v18 = (v16 >> 3) - 2;
      v19 = 1;
        v17 = v19;
        if ( v18 + 2 < 2 )
          break;
        v20 = (*(int (**)(void))(**(_DWORD **)(*(_DWORD *)v4 + 8 * v18) + 176))();
        v19 = v17 + 1;
        --v18;
      while ( v20 != 1 );
  else
    v17 = 0;
  v21 = *(_BYTE *)(v4 + 33) == 0;
  if ( !*(_BYTE *)(v4 + 33) )
    v21 = *(_DWORD *)(v4 + 28) == 0;
  if ( !v21 || *(_BYTE *)(v4 + 34) )
    if ( v5 )
      v42 = v3;
      *(_DWORD *)(v4 + 28) = v17;
      v23 = (int *)(v4 + 16);
      v22 = *(_DWORD *)(v4 + 16);
      v24 = *(_DWORD *)(v4 + 12);
      if ( v22 != v24 )
        v25 = *(_DWORD *)(v4 + 12);
        {
          v26 = *(_DWORD *)(v25 + 4);
          if ( v26 )
          {
            v27 = (unsigned int *)(v26 + 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v28 = __ldrex(v27);
              while ( __strex(v28 - 1, v27) );
            }
            else
              v28 = (*v27)--;
            if ( v28 == 1 )
              v29 = (unsigned int *)(v26 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v30 = __ldrex(v29);
                while ( __strex(v30 - 1, v29) );
              }
              else
                v30 = (*v29)--;
              if ( v30 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
          }
          v25 += 8;
        }
        while ( v25 != v22 );
      *v23 = v24;
      v3 = v42;
      v24 = *(_DWORD *)(v4 + 16);
    if ( v24 == *(_DWORD *)(v4 + 20) )
      j_j_j__ZNSt6vectorISt10shared_ptrI13AbstractSceneESaIS2_EE19_M_emplace_back_auxIJRKS2_EEEvDpOT_(
        (unsigned __int64 *)(v4 + 12),
        (int)v3);
      *(_DWORD *)v24 = *v3;
      v31 = v3[1];
      *(_DWORD *)(v24 + 4) = v31;
      if ( v31 )
        v32 = (unsigned int *)(v31 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v33 = __ldrex(v32);
          while ( __strex(v33 + 1, v32) );
          v24 = *v23;
        else
          ++*v32;
      *v23 = v24 + 8;
    if ( v17 >= 1 && v5 == 1 )
      v34 = v17 + 1;
        SceneStack::_popScreen((SceneStack *)v4, 0);
        --v34;
      while ( v34 > 1 );
    v35 = *(_QWORD *)v4;
    if ( HIDWORD(v35) != (_DWORD)v35 )
      (*(void (**)(void))(**(_DWORD **)(HIDWORD(v35) - 8) + 32))();
    if ( *(_BYTE *)(v4 + 35) && *(_DWORD *)(v4 + 36) != *(_DWORD *)(v4 + 40) )
      (*(void (**)(void))(*(_DWORD *)*v3 + 240))();
      *(_DWORD *)(v4 + 40) = *(_DWORD *)(v4 + 36);
    *(_BYTE *)(v4 + 35) = 0;
    v36 = *(_QWORD *)(v4 + 4);
    if ( (_DWORD)v36 == HIDWORD(v36) )
      std::vector<std::shared_ptr<AbstractScene>,std::allocator<std::shared_ptr<AbstractScene>>>::_M_emplace_back_aux<std::shared_ptr<AbstractScene> const&>(
        (unsigned __int64 *)v4,
      *(_DWORD *)v36 = *v3;
      HIDWORD(v36) = v3[1];
      *(_DWORD *)(v36 + 4) = HIDWORD(v36);
      if ( HIDWORD(v36) )
        v38 = (unsigned int *)(v37 + 4);
            v39 = __ldrex(v38);
          while ( __strex(v39 + 1, v38) );
          LODWORD(v36) = *(_DWORD *)(v4 + 4);
          ++*v38;
      *(_DWORD *)(v4 + 4) = v36 + 8;
    *(_BYTE *)(v4 + 32) = 1;
    if ( !*(_DWORD *)(v4 + 72) )
      sub_DA7654();
    (*(void (__fastcall **)(int, _DWORD))(v4 + 76))(v4 + 64, *v3);
    v40 = *(_QWORD *)v4;
    while ( HIDWORD(v40) != (_DWORD)v40 )
      v41 = *(_DWORD *)v40;
      LODWORD(v40) = v40 + 8;
      (*(void (**)(void))(*(_DWORD *)v41 + 40))();
}


int __fastcall SceneStack::forEachScreen(unsigned __int64 *a1, int a2, int a3)
{
  int v3; // r4@1
  int result; // r0@2
  unsigned __int64 v5; // kr00_8@2
  int v6; // r5@3
  bool v7; // zf@5
  int v8; // r5@10
  unsigned __int64 v9; // kr08_8@10
  int v10; // r6@11

  v3 = a2;
  if ( a3 == 1 )
  {
    v5 = *a1;
    result = *a1 >> 32;
    if ( result != (_DWORD)v5 )
    {
      v6 = result - 8;
      while ( *(_DWORD *)(v3 + 8) )
      {
        result = (*(int (__fastcall **)(int, int))(v3 + 12))(v3, v6);
        v7 = (_DWORD)v5 == v6;
        if ( (_DWORD)v5 != v6 )
        {
          result ^= 1u;
          v6 -= 8;
          v7 = result == 1;
        }
        if ( v7 )
          return result;
      }
      goto LABEL_16;
    }
  }
  else
    v9 = *a1;
    v8 = v9;
    if ( (_DWORD)v9 != result )
      v10 = result - 8;
        result = (*(int (__fastcall **)(int, int))(v3 + 12))(v3, v8);
        if ( v10 != v8 )
          v8 += 8;
          if ( !result )
            continue;
        return result;
LABEL_16:
      sub_DA7654();
  return result;
}


signed int __fastcall SceneStack::flushStack(SceneStack *this, int a2, int a3)
{
  SceneStack *v3; // r11@1
  __int64 v4; // kr00_8@1
  int v5; // r9@1
  int v6; // r4@2
  int v7; // r8@3
  unsigned int *v8; // r1@4
  unsigned int v9; // r0@6
  unsigned int *v10; // r7@10
  unsigned int v11; // r0@12
  int v12; // r5@18
  int v13; // r6@19
  int v14; // r4@19
  int v15; // t1@22
  signed int result; // r0@28
  bool v17; // zf@30
  int v18; // [sp+0h] [bp-28h]@1

  v18 = a2;
  v3 = this;
  v4 = *(_QWORD *)((char *)this + 12);
  v5 = a3;
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    v6 = v4;
    do
    {
      v7 = *(_DWORD *)(v6 + 4);
      if ( v7 )
      {
        v8 = (unsigned int *)(v7 + 4);
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
      v6 += 8;
    }
    while ( v6 != HIDWORD(v4) );
  }
  *((_DWORD *)v3 + 4) = v4;
  v12 = *((_DWORD *)v3 + 1);
  if ( v5 )
    v13 = v18;
    v14 = (v12 - *(_DWORD *)v3) >> 3;
  else
    v14 = 0;
    if ( v12 == *(_DWORD *)v3 )
      v13 = v18;
    else
      do
        v15 = *(_DWORD *)(v12 - 8);
        v12 -= 8;
        if ( (*(int (**)(void))(*(_DWORD *)v15 + 176))() )
          break;
        ++v14;
      while ( v12 != *(_DWORD *)v3 );
  result = *((_DWORD *)v3 + 7);
  if ( v14 > result )
    *((_DWORD *)v3 + 7) = v14;
  v17 = v13 == 1;
  if ( v13 == 1 )
    result = *((_BYTE *)v3 + 33);
    v17 = result == 0;
  if ( v17 )
    result = j_j_j__ZN10SceneStack21updateScheduledScreenEv(v3);
  return result;
}


int *__fastcall SceneStack::getScreenName(SceneStack *this, __int64 *a2)
{
  __int64 v2; // kr00_8@1
  int *result; // r0@2

  v2 = *a2;
  if ( (_DWORD)v2 == HIDWORD(v2) )
    result = sub_DA73B4((int *)this, (int *)&Util::EMPTY_STRING);
  else
    result = (int *)(*(int (__fastcall **)(SceneStack *))(**(_DWORD **)(HIDWORD(v2) - 8) + 228))(this);
  return result;
}


_DWORD *__fastcall SceneStack::forEachAlwaysAcceptInputScreen(unsigned __int64 *a1, int a2, _DWORD *a3)
{
  unsigned __int64 *v3; // r6@1
  int v4; // r5@1
  _DWORD *result; // r0@1
  unsigned __int64 v6; // kr00_8@1
  _DWORD *v7; // r4@1
  _DWORD *v8; // r7@3
  int v9; // r0@3

  v3 = a1;
  v4 = a2;
  v6 = *a1;
  result = (_DWORD *)(*a1 >> 32);
  v7 = a3;
  if ( result != (_DWORD *)v6 )
  {
    result -= 2;
    do
    {
      v8 = result;
      v9 = *result;
      if ( v9 != *v7 && (*(int (**)(void))(*(_DWORD *)v9 + 180))() == 1 )
      {
        if ( !*(_DWORD *)(v4 + 8) )
          sub_DA7654();
        (*(void (__fastcall **)(int, _DWORD *))(v4 + 12))(v4, v8);
      }
      result = v8 - 2;
    }
    while ( v8 != *(_DWORD **)v3 );
  }
  return result;
}


signed int __fastcall SceneStack::isEmpty(SceneStack *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *(_QWORD *)this;
  result = 0;
  if ( (_DWORD)v1 == HIDWORD(v1) )
    result = 1;
  return result;
}


char *__fastcall SceneStack::handleTextChar(int a1, const char **a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  char *result; // r0@1
  const char *v6; // r1@2
  unsigned int v7; // r6@2
  __int64 v8; // r0@4
  void *v9; // r5@6
  int v10; // r1@6
  unsigned int v11; // r2@6
  unsigned int v12; // r1@8
  unsigned int v13; // r7@8
  char *v14; // r6@14
  bool v15; // zf@16
  int v16; // r2@16
  int v17; // r8@16
  __int16 v18; // r0@16
  int v19; // r8@18
  int v20; // [sp+0h] [bp-20h]@4
  __int16 v21; // [sp+4h] [bp-1Ch]@5
  char v22; // [sp+5h] [bp-1Bh]@4

  v3 = a1;
  v4 = a3;
  result = (char *)*(_BYTE *)(a1 + 35);
  if ( result )
  {
    v6 = *a2;
    v7 = *((_DWORD *)v6 - 3);
    if ( v7 > 4 )
      v7 = 4;
    _aeabi_memcpy(&v20, v6, v7);
    *((_BYTE *)&v20 + v7) = 0;
    v22 = v4;
    v8 = *(_QWORD *)(v3 + 40);
    if ( (_DWORD)v8 == HIDWORD(v8) )
    {
      v9 = *(void **)(v3 + 36);
      HIDWORD(v8) = ((signed int)v8 - (signed int)v9) >> 1;
      v11 = -1431655765 * HIDWORD(v8);
      if ( (void *)v8 == v9 )
        v11 = 1;
      v12 = v11 + -1431655765 * v10;
      v13 = v12;
      if ( v12 > 0x2AAAAAAA )
        v13 = 715827882;
      if ( v12 < v11 )
      if ( v13 )
      {
        if ( v13 >= 0x2AAAAAAB )
          sub_DA7414();
        v14 = (char *)operator new(6 * v13);
        LODWORD(v8) = *(_QWORD *)(v3 + 36) >> 32;
        v9 = (void *)*(_QWORD *)(v3 + 36);
      }
      else
        v14 = 0;
      v16 = v8 - (_DWORD)v9;
      v15 = (_DWORD)v8 == (_DWORD)v9;
      v17 = -1431655765 * (((signed int)v8 - (signed int)v9) >> 1);
      v18 = v21;
      *(_DWORD *)&v14[v16] = v20;
      *(_WORD *)&v14[v16 + 4] = v18;
      if ( !v15 )
        _aeabi_memmove(v14, v9);
      v19 = (int)&v14[6 * v17 + 6];
      if ( v9 )
        operator delete(v9);
      *(_DWORD *)(v3 + 36) = v14;
      *(_DWORD *)(v3 + 40) = v19;
      result = &v14[6 * v13];
      *(_DWORD *)(v3 + 44) = result;
    }
    else
      HIDWORD(v8) = v20;
      *(_WORD *)(v8 + 4) = v21;
      *(_DWORD *)v8 = HIDWORD(v8);
      result = (char *)(*(_DWORD *)(v3 + 40) + 6);
      *(_DWORD *)(v3 + 40) = result;
  }
  return result;
}
