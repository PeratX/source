

char *__fastcall TreatmentService::getCurrentTreatments(TreatmentService *this)
{
  return (char *)this + 60;
}


int __fastcall TreatmentService::TreatmentService(int a1, int a2, int *a3)
{
  int *v3; // r5@1
  int v4; // r6@1
  int v5; // r7@1
  int v6; // r4@1
  int v8; // [sp+4h] [bp-4Ch]@2
  int v9; // [sp+8h] [bp-48h]@2
  char v10; // [sp+Ch] [bp-44h]@2
  void (*v11)(void); // [sp+14h] [bp-3Ch]@2
  char v12; // [sp+23h] [bp-2Dh]@1
  char v13; // [sp+24h] [bp-2Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  ServiceClient::ServiceClient(a1, 0, 0);
  *(_DWORD *)v5 = &off_26DE804;
  *(_DWORD *)(v5 + 40) = v4;
  v12 = 0;
  std::__shared_ptr<bool,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<bool>,bool>(v5 + 44, (int)&v13, &v12);
  sub_119C854((int *)(v5 + 52), v3);
  sub_119C884((void **)(v5 + 56), "https://www.xboxab.com");
  *(_DWORD *)(v5 + 60) = 0;
  v6 = v5 + 60;
  *(_BYTE *)(v6 + 12) = 0;
  *(_DWORD *)(v6 + 4) = 0;
  *(_DWORD *)(v6 + 8) = 0;
  if ( *(_DWORD *)(*v3 - 12) )
  {
    v8 = *(_DWORD *)(v5 + 52);
    v9 = *(_DWORD *)(v8 - 12);
    Core::FileSystem::createDirectoryRecursively((int)&v10, (__int64 *)&v8);
    if ( v11 )
      v11();
  }
  return v5;
}


int __fastcall TreatmentService::fetchTreatmentsFor(int a1, int *a2)
{
  int v2; // r6@1
  int *v3; // r7@1
  int result; // r0@1
  __int64 v5; // r8@2
  unsigned int *v6; // r0@3
  unsigned int v7; // r1@5
  unsigned int v8; // r1@10
  _DWORD *v9; // r10@13
  unsigned int *v10; // r0@14
  unsigned int v11; // r1@16
  void *v12; // r0@19
  unsigned int *v13; // r1@20
  unsigned int v14; // r2@22
  __int64 v15; // r1@25
  unsigned int *v16; // r1@28
  unsigned int v17; // r0@30
  void *v18; // r0@35
  int v19; // r7@35
  unsigned int *v20; // r0@35
  unsigned int v21; // r1@38
  int v22; // r0@41
  unsigned int *v23; // r2@42
  unsigned int v24; // r1@44
  int v25; // r5@50
  unsigned int *v26; // r1@51
  unsigned int *v27; // r4@57
  unsigned int *v28; // r4@65
  unsigned int v29; // r0@67
  _DWORD *v30; // [sp+0h] [bp-38h]@50
  int v31; // [sp+4h] [bp-34h]@50
  void *v32; // [sp+8h] [bp-30h]@25
  void (*v33)(void); // [sp+10h] [bp-28h]@19

  v2 = a1;
  v3 = a2;
  result = *(_BYTE *)(a1 + 72);
  if ( !result )
  {
    v5 = *(_QWORD *)(v2 + 44);
    if ( HIDWORD(v5) )
    {
      v6 = (unsigned int *)(HIDWORD(v5) + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 + 1, v6) );
      }
      else
        ++*v6;
          v8 = __ldrex(v6);
        while ( __strex(v8 + 1, v6) );
    }
    v9 = operator new(0x70u);
      v10 = (unsigned int *)(HIDWORD(v5) + 8);
          v11 = __ldrex(v10);
        while ( __strex(v11 + 1, v10) );
        ++*v10;
    v33 = 0;
    v12 = operator new(0xCu);
    *(_DWORD *)v12 = v2;
    *(_QWORD *)((char *)v12 + 4) = v5;
      v13 = (unsigned int *)(HIDWORD(v5) + 8);
          v14 = __ldrex(v13);
        while ( __strex(v14 + 1, v13) );
        ++*v13;
    LODWORD(v15) = sub_FF52E8;
    v32 = v12;
    HIDWORD(v15) = sub_FF52B4;
    *(_QWORD *)&v33 = v15;
    TreatmentRequest::TreatmentRequest((int)v9, (TreatmentService *)v2, v3, (int)&v32);
    if ( v33 )
      v33();
      v16 = (unsigned int *)(HIDWORD(v5) + 8);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v5) + 12))(HIDWORD(v5));
    v18 = operator new(0x14u);
    v19 = (int)v18;
    *((_DWORD *)v18 + 1) = 1;
    *((_DWORD *)v18 + 2) = 1;
    v20 = (unsigned int *)((char *)v18 + 8);
    *(_DWORD *)v19 = &off_26DE818;
    *(_DWORD *)(v19 + 16) = v9;
    if ( v9 )
      v9[1] = v9;
          v21 = __ldrex(v20);
        while ( __strex(v21 + 1, v20) );
        *v20 = 2;
      v22 = v9[2];
      if ( v22 )
        v23 = (unsigned int *)(v22 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
        }
        else
          v24 = (*v23)--;
        if ( v24 == 1 )
          (*(void (**)(void))(*(_DWORD *)v22 + 12))();
      v9[2] = v19;
    v30 = v9;
    v31 = v19;
    result = ServiceClient::_submitRequest(v2, (int)&v30);
    v25 = v31;
    if ( v31 )
      v26 = (unsigned int *)(v31 + 4);
          result = __ldrex(v26);
        while ( __strex(result - 1, v26) );
        result = (*v26)--;
      if ( result == 1 )
        v27 = (unsigned int *)(v25 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
            result = __ldrex(v27);
          while ( __strex(result - 1, v27) );
          result = (*v27)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
      v28 = (unsigned int *)(HIDWORD(v5) + 8);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 == 1 )
          result = __ldrex(v28);
        while ( __strex(result - 1, v28) );
        result = (*v28)--;
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v5) + 12))(HIDWORD(v5));
  }
  return result;
}


void __fastcall TreatmentService::~TreatmentService(TreatmentService *this)
{
  TreatmentService *v1; // r0@1

  v1 = TreatmentService::~TreatmentService(this);
  j_j_j__ZdlPv_4((void *)v1);
}


char *__fastcall TreatmentService::getHostUrl(TreatmentService *this)
{
  return (char *)this + 56;
}


int __fastcall TreatmentService::setTestTreatmentsOverride(int a1, unsigned __int64 *a2)
{
  *(_BYTE *)(a1 + 72) = 1;
  return j_j_j__ZNSt6vectorISsSaISsEEaSERKS1__1(a1 + 60, a2);
}


char *__fastcall TreatmentService::getCacheLocation(TreatmentService *this)
{
  return (char *)this + 52;
}


int __fastcall TreatmentService::clearCurrentTreatments(TreatmentService *this)
{
  TreatmentService *v1; // r11@1
  int result; // r0@1
  __int64 v3; // kr00_8@2
  _DWORD *v4; // r6@3
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  int *v7; // r0@12

  v1 = this;
  result = *((_BYTE *)this + 72);
  if ( !result )
  {
    v3 = *(_QWORD *)((char *)v1 + 60);
    if ( HIDWORD(v3) != (_DWORD)v3 )
    {
      v4 = (_DWORD *)v3;
      do
      {
        v7 = (int *)(*v4 - 12);
        if ( v7 != &dword_28898C0 )
        {
          v5 = (unsigned int *)(*v4 - 4);
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
            j_j_j_j_j__ZdlPv_9_1(v7);
        }
        ++v4;
      }
      while ( v4 != (_DWORD *)HIDWORD(v3) );
    }
    *((_DWORD *)v1 + 16) = v3;
    result = MinecraftEventing::fireEventTreatmentsCleared(*((MinecraftEventing **)v1 + 10));
  }
  return result;
}


TreatmentService *__fastcall TreatmentService::~TreatmentService(TreatmentService *this)
{
  TreatmentService *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  int v7; // r1@16
  void *v8; // r0@16
  int v9; // r1@17
  void *v10; // r0@17
  int v11; // r5@18
  unsigned int *v12; // r1@19
  unsigned int v13; // r0@21
  unsigned int *v14; // r6@25
  unsigned int v15; // r0@27
  unsigned int *v17; // r2@33
  signed int v18; // r1@35
  unsigned int *v19; // r2@37
  signed int v20; // r1@39

  v1 = this;
  *(_DWORD *)this = &off_26DE804;
  v3 = (void *)(*(_QWORD *)((char *)this + 60) >> 32);
  v2 = (void *)*(_QWORD *)((char *)this + 60);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v6);
      }
      v2 = (char *)v2 + 4;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 15);
  }
  if ( v2 )
    operator delete(v2);
  v7 = *((_DWORD *)v1 + 14);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = *((_DWORD *)v1 + 13);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v9 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = *((_DWORD *)v1 + 12);
  if ( v11 )
    v12 = (unsigned int *)(v11 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      else
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  ServiceClient::~ServiceClient(v1);
  return v1;
}


void __fastcall TreatmentService::~TreatmentService(TreatmentService *this)
{
  TreatmentService::~TreatmentService(this);
}
