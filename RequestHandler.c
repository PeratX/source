

int __fastcall RequestHandler::RequestHandler(int result, int a2, int a3, int a4, int a5)
{
  int v5; // r12@1

  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  v5 = result + 12;
  *(_DWORD *)result = &off_26DE3A4;
  *(_DWORD *)v5 = a2;
  *(_DWORD *)(v5 + 4) = a3;
  *(_DWORD *)(v5 + 8) = a4;
  *(_DWORD *)(v5 + 12) = a5;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_BYTE *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 56) = 0;
  return result;
}


RequestTelemetry *__fastcall RequestHandler::_recordTelemetry(int a1, int a2, int a3)
{
  int v3; // r7@1
  unsigned int v4; // r6@2
  unsigned int *v5; // r3@2
  unsigned int v6; // r5@5
  unsigned int v7; // r4@6
  unsigned int v8; // r6@7
  signed int v9; // r3@7
  RequestTelemetry *result; // r0@11
  unsigned int *v11; // r1@17
  unsigned int *v12; // r5@23

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 4);
    v5 = (unsigned int *)(v3 + 4);
    while ( v4 )
    {
      __dmb();
      v6 = __ldrex(v5);
      if ( v6 == v4 )
      {
        v7 = __strex(v4 + 1, v5);
        v4 = v6;
        if ( !v7 )
        {
          __dmb();
          v8 = *v5;
          v9 = 0;
          if ( !v8 )
            v9 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v9 = 1;
  v3 = 0;
LABEL_11:
  result = *(RequestTelemetry **)a1;
  if ( v9 )
    result = 0;
  if ( !a2 && result )
    result = (RequestTelemetry *)RequestTelemetry::setResponseComplete(result, a3);
    v11 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
      do
        result = (RequestTelemetry *)__ldrex(v11);
      while ( __strex((unsigned int)result - 1, v11) );
    else
      result = (RequestTelemetry *)(*v11)--;
    if ( result == (RequestTelemetry *)1 )
      v12 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
        __dmb();
        do
          result = (RequestTelemetry *)__ldrex(v12);
        while ( __strex((unsigned int)result - 1, v12) );
        result = (RequestTelemetry *)(*v12)--;
      if ( result == (RequestTelemetry *)1 )
        result = (RequestTelemetry *)(*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  return result;
}


signed int __fastcall RequestHandler::update(RequestHandler *this)
{
  RequestHandler *v1; // r4@1
  signed int v2; // r5@1
  __int64 v3; // kr00_8@2
  signed __int64 v4; // r8@2
  signed int v5; // r0@2
  signed int v6; // r6@2
  int v7; // r0@8
  signed int v8; // r1@10
  signed int v9; // r0@12
  int v10; // r0@17
  unsigned int *v11; // r0@18
  unsigned int v12; // r1@20
  int v13; // r0@23
  unsigned int *v14; // r2@24
  unsigned int v15; // r1@26
  int v17; // [sp+0h] [bp-30h]@17
  int v18; // [sp+4h] [bp-2Ch]@17
  __int64 v19; // [sp+8h] [bp-28h]@2

  v1 = this;
  v2 = 0;
  if ( !*((_BYTE *)this + 40) )
  {
    sub_119D43C(&v19);
    v3 = v19 - *((_QWORD *)v1 + 4);
    v4 = 1000000000LL * *((_QWORD *)v1 + 3);
    v5 = 0;
    v6 = 0;
    if ( (unsigned int)v4 < (unsigned int)v3 )
      v5 = 1;
    if ( SHIDWORD(v4) < SHIDWORD(v3) )
      v6 = 1;
    if ( HIDWORD(v4) == HIDWORD(v3) )
      v6 = v5;
    v7 = (*(int (__fastcall **)(RequestHandler *))(*(_DWORD *)v1 + 16))(v1);
    if ( v6 || v7 == 1 )
    {
      v8 = 0;
      if ( (unsigned int)v4 >= (unsigned int)v3 )
        v8 = 1;
      v9 = 0;
      if ( SHIDWORD(v4) >= SHIDWORD(v3) )
        v9 = 1;
      if ( HIDWORD(v4) == HIDWORD(v3) )
        v9 = v8;
      if ( !v9 )
      {
        v17 = *((_DWORD *)v1 + 13);
        v10 = *((_DWORD *)v1 + 14);
        v18 = v10;
        if ( v10 )
        {
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
        }
        RequestHandler::_recordTelemetry((int)&v17, 0, 3);
        v13 = v18;
        if ( v18 )
          v14 = (unsigned int *)(v18 + 8);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 == 1 )
            (*(void (__cdecl **)(int))(*(_DWORD *)v13 + 12))(v13);
      }
      v2 = 1;
      *((_BYTE *)v1 + 40) = 1;
      (*(void (__fastcall **)(RequestHandler *))(*(_DWORD *)v1 + 20))(v1);
    }
  }
  return v2;
}


void __fastcall RequestHandler::_getAuthorizationHeader(int a1, int a2, int *a3)
{
  RequestHandler::_getAuthorizationHeader(a1, a2, a3);
}


int __fastcall RequestHandler::getTelemetry(int result, int a2)
{
  int v2; // r2@1

  *(_DWORD *)result = *(_DWORD *)(a2 + 52);
  v2 = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(result + 4) = v2;
  *(_DWORD *)(a2 + 52) = 0;
  return result;
}


__int64 __fastcall RequestHandler::startTimer(RequestHandler *this)
{
  RequestHandler *v1; // r4@1
  __int64 result; // r0@1
  int v3; // [sp+0h] [bp-10h]@1

  v1 = this;
  sub_119D43C(&v3);
  result = *(_QWORD *)&v3;
  *((_QWORD *)v1 + 4) = *(_QWORD *)&v3;
  return result;
}


void __fastcall RequestHandler::_getAuthorizationHeader(int a1, int a2, int *a3)
{
  ServiceClient::getAuthorizationHeader(a1, *(_DWORD *)(a2 + 12), a3);
}


RequestHandler *__fastcall RequestHandler::~RequestHandler(RequestHandler *this)
{
  RequestHandler *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r5@15
  unsigned int *v8; // r1@16
  unsigned int v9; // r0@18
  unsigned int *v10; // r6@22
  unsigned int v11; // r0@24
  int v12; // r0@29
  unsigned int *v13; // r2@30
  unsigned int v14; // r1@32

  v1 = this;
  *(_DWORD *)this = &off_26DE3A4;
  v2 = *((_DWORD *)this + 14);
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
  v7 = *((_DWORD *)v1 + 12);
  if ( v7 )
    v8 = (unsigned int *)(v7 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  v12 = *((_DWORD *)v1 + 2);
  if ( v12 )
    v13 = (unsigned int *)(v12 + 8);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      (*(void (**)(void))(*(_DWORD *)v12 + 12))();
  return v1;
}


void __fastcall RequestHandler::~RequestHandler(RequestHandler *this)
{
  RequestHandler::~RequestHandler(this);
}


void __fastcall RequestHandler::~RequestHandler(RequestHandler *this)
{
  RequestHandler *v1; // r0@1

  v1 = RequestHandler::~RequestHandler(this);
  j_j_j__ZdlPv_4((void *)v1);
}


signed int __fastcall RequestHandler::isDone(RequestHandler *this)
{
  int v1; // r0@1
  signed int v2; // r2@3
  char *v3; // r4@6
  int v4; // r3@6

  v1 = *((_DWORD *)this + 11);
  if ( !v1 )
  {
    v3 = j___cxa_allocate_exception(8);
    *(_DWORD *)v3 = &off_26D7A9C;
    sub_119C884((void **)v3 + 1, "is_done() cannot be called on a default constructed task.");
    j___cxa_throw(
      (int)v3,
      (int)&`typeinfo for'pplx::invalid_operation,
      (int)pplx::invalid_operation::~invalid_operation,
      v4);
  }
  if ( *(_DWORD *)(v1 + 4) == 3 )
    v2 = 1;
  else
    v2 = 0;
    if ( *(_DWORD *)(v1 + 4) == 4 )
      v2 = 1;
  return v2;
}
