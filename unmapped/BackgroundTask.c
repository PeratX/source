

int __fastcall BackgroundTask::BackgroundTask(int a1, _QWORD *a2)
{
  int v2; // r5@1

  v2 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  j_BackgroundTask::operator=((_QWORD *)a1, a2);
  return v2;
}


BackgroundTask *__fastcall BackgroundTask::~BackgroundTask(BackgroundTask *this)
{
  BackgroundTask *v1; // r4@1
  void (*v2)(void); // r3@1
  void (*v3)(void); // r3@3
  int v4; // r5@5
  unsigned int *v5; // r1@6
  unsigned int v6; // r0@8
  unsigned int *v7; // r6@12
  unsigned int v8; // r0@14

  v1 = this;
  v2 = (void (*)(void))*((_DWORD *)this + 8);
  if ( v2 )
    v2();
  v3 = (void (*)(void))*((_DWORD *)v1 + 4);
  if ( v3 )
    v3();
  v4 = *((_DWORD *)v1 + 1);
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
  return v1;
}


      if ( BackgroundTask::operator<(v4 + 48 * v6, v4 + 48 * (2 * v8 | 1)) )
{
      BackgroundTask::operator=((_QWORD *)(v4 + 48 * v8), (_QWORD *)(v4 + 48 * v6));
      v8 = v6;
    }
    while ( v6 < v7 );
  }
  if ( !(v15 & 1) && v6 == (v15 - 2) / 2 )
  {
    v9 = 3 * v6;
    v6 = 2 * v6 | 1;
    BackgroundTask::operator=((_QWORD *)(v4 + 16 * v9), (_QWORD *)(v4 + 48 * v6));
  BackgroundTask::BackgroundTask((int)&v16, v14);
  if ( v6 <= v5 )
    v10 = v6;
LABEL_14:
    v12 = (_QWORD *)(v4 + 48 * v10);
  else
    while ( 1 )
    {
      v10 = (v6 - 1) / 2;
      v11 = BackgroundTask::operator<(v4 + 48 * v10, (int)&v16);
      v12 = (_QWORD *)(v4 + 48 * v6);
      if ( v11 != 1 )
        break;
      BackgroundTask::operator=(v12, (_QWORD *)(v4 + 48 * v10));
      v6 = (v6 - 1) / 2;
      if ( v10 <= v5 )
        goto LABEL_14;
  BackgroundTask::operator=(v12, &v16);
  return BackgroundTask::~BackgroundTask((BackgroundTask *)&v16);
}


int __fastcall BackgroundTask::BackgroundTask(int result)
{
  __int64 v1; // r1@1

  HIDWORD(v1) = -1;
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 32) = 0;
  LODWORD(v1) = 0x7FFFFFFF;
  *(_QWORD *)(result + 40) = v1;
  return result;
}


int __fastcall BackgroundTask::acquireCallback(int result, int a2)
{
  int v2; // r2@1
  __int64 v3; // kr00_8@1
  int v4; // r2@1
  int v5; // r2@1

  *(_DWORD *)result = *(_DWORD *)a2;
  v2 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(result + 4) = v2;
  *(_DWORD *)a2 = 0;
  v3 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(result + 8);
  *(_QWORD *)(result + 8) = v3;
  v4 = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a2 + 32) = 0;
  *(_DWORD *)(result + 16) = v4;
  v5 = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(result + 20);
  *(_DWORD *)(result + 20) = v5;
  return result;
}


int __fastcall BackgroundTask::backDownPriority(int result)
{
  __int64 v1; // r2@1
  int v2; // r12@2
  unsigned int v3; // lr@2
  signed int v4; // r2@6
  signed int v5; // r1@6
  signed int v6; // r3@6

  v1 = *(_QWORD *)(result + 40);
  if ( SHIDWORD(v1) < 0 )
  {
    if ( (signed int)v1 <= 1 )
      LODWORD(v1) = 1;
    v3 = 2 * v1;
    v2 = ((signed int)v1 >> 31) + ((unsigned __int64)(signed int)v1 >> 31);
  }
  else
    v2 = (unsigned __int64)((signed int)v1 + (signed __int64)SHIDWORD(v1)) >> 32;
    v3 = v1 + HIDWORD(v1);
  v4 = 0x7FFFFFFF;
  v5 = 0;
  v6 = 0;
  if ( v3 < 0x7FFFFFFF )
    v5 = 1;
  if ( v2 < 0 )
    v6 = 1;
  if ( !v2 )
    v6 = v5;
  if ( v6 )
    v4 = v3;
  *(_DWORD *)(result + 40) = v4;
  return result;
}


int __fastcall BackgroundTask::makeInternal(int result, int a2)
{
  int v2; // r8@0
  int (**v3)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@0
  __int64 v4; // kr00_8@1
  unsigned int *v5; // r2@2
  unsigned int v6; // r3@4
  __int64 v7; // r6@7
  int v8; // r3@7
  int v9; // r2@7
  __int64 v10; // [sp+0h] [bp-38h]@0
  int (**v11)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+Ch] [bp-2Ch]@0
  __int64 v12; // [sp+10h] [bp-28h]@0
  int v13; // [sp+1Ch] [bp-1Ch]@0

  v4 = BackgroundTask::mInternalTaskState;
  if ( unk_28237A0 )
  {
    v3 = &pthread_create;
    v5 = (unsigned int *)(unk_28237A0 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
      v3 = v11;
      v2 = v13;
    }
    else
      ++*v5;
  }
  v7 = *(_QWORD *)a2;
  *(_QWORD *)a2 = v12;
  v8 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = 0;
  v9 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = v2;
  *(_QWORD *)result = v4;
  *(_QWORD *)(result + 8) = v7;
  *(_DWORD *)(result + 16) = v8;
  *(_DWORD *)(result + 20) = v9;
  *(_QWORD *)(result + 24) = v10;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = v3;
  *(_DWORD *)(result + 40) = -1;
  *(_DWORD *)(result + 44) = -1;
  return result;
}


int __fastcall BackgroundTask::run(BackgroundTask *this)
{
  if ( !*((_DWORD *)this + 4) )
    sub_21E5F48();
  return (*((int (__fastcall **)(_DWORD))this + 5))((char *)this + 8);
}


signed int __fastcall BackgroundTask::operator<(int a1, int a2)
{
  signed int v2; // r12@1
  signed int v3; // r2@1
  signed int v4; // r3@3

  v2 = 0;
  v3 = 0;
  if ( **(_DWORD **)a1 == 3 )
    v3 = 1;
  v4 = 0;
  if ( **(_DWORD **)a2 == 3 )
    v4 = 1;
  if ( v3 == v4 )
  {
    if ( *(_DWORD *)(a2 + 40) < *(_DWORD *)(a1 + 40) )
      v2 = 1;
    v3 = v2;
  }
  return v3;
}


int __fastcall BackgroundTask::BackgroundTask(int result, int a2, int a3, int a4, __int64 a5)
{
  int v5; // r12@1
  __int64 v6; // kr00_8@1
  int v7; // r1@1
  int v8; // r1@1
  __int64 v9; // r1@1

  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)(result + 4) = 0;
  v5 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(result + 4) = v5;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(result + 16) = 0;
  v6 = *(_QWORD *)a3;
  *(_QWORD *)a3 = *(_QWORD *)(result + 8);
  *(_QWORD *)(result + 8) = v6;
  v7 = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(a3 + 8) = *(_DWORD *)(result + 16);
  *(_DWORD *)(result + 16) = v7;
  v8 = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(result + 20);
  *(_DWORD *)(result + 20) = v8;
  *(_DWORD *)(result + 32) = 0;
  v9 = *(_QWORD *)a4;
  *(_QWORD *)a4 = *(_QWORD *)(result + 24);
  *(_QWORD *)(result + 24) = v9;
  LODWORD(v9) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(a4 + 8) = *(_DWORD *)(result + 32);
  *(_DWORD *)(result + 32) = v9;
  LODWORD(v9) = *(_DWORD *)(a4 + 12);
  *(_DWORD *)(a4 + 12) = *(_DWORD *)(result + 36);
  *(_DWORD *)(result + 36) = v9;
  *(_QWORD *)(result + 40) = a5;
  return result;
}
