

int __fastcall RemixFileUploadRequest::onComplete(RemixFileUploadRequest *this)
{
  RemixFileUploadRequest *v1; // r4@1
  int result; // r0@1
  void (__fastcall *v3)(char *, char *, signed int); // r3@2

  v1 = this;
  result = *((_DWORD *)this + 20);
  if ( result )
  {
    result = (*((int (__fastcall **)(_DWORD, _DWORD, _DWORD))v1 + 21))(
               (char *)v1 + 72,
               *((_DWORD *)v1 + 17),
               (char *)v1 + 88);
    v3 = (void (__fastcall *)(char *, char *, signed int))*((_DWORD *)v1 + 20);
    if ( v3 )
    {
      v3((char *)v1 + 72, (char *)v1 + 72, 3);
      result = 0;
      *((_DWORD *)v1 + 20) = 0;
      *((_DWORD *)v1 + 21) = 0;
    }
  }
  return result;
}


RemixFileUploadRequest::Params *__fastcall RemixFileUploadRequest::Params::Params(RemixFileUploadRequest::Params *this, const RemixFileUploadRequest::Params *a2)
{
  const RemixFileUploadRequest::Params *v2; // r5@1
  RemixFileUploadRequest::Params *v3; // r4@1
  void (__fastcall *v4)(char *, char *, signed int); // r3@1

  v2 = a2;
  v3 = this;
  sub_119C854((int *)this, (int *)a2);
  sub_119C854((int *)v3 + 1, (int *)v2 + 1);
  sub_119C854((int *)v3 + 2, (int *)v2 + 2);
  *((_QWORD *)v3 + 2) = *((_QWORD *)v2 + 2);
  sub_119C854((int *)v3 + 6, (int *)v2 + 6);
  *((_DWORD *)v3 + 9) = 0;
  v4 = (void (__fastcall *)(char *, char *, signed int))*((_DWORD *)v2 + 9);
  if ( v4 )
  {
    v4((char *)v3 + 28, (char *)v2 + 28, 2);
    *((_DWORD *)v3 + 10) = *((_DWORD *)v2 + 10);
    *((_DWORD *)v3 + 9) = *((_DWORD *)v2 + 9);
  }
  return v3;
}


RemixRequest *__fastcall RemixFileUploadRequest::RemixFileUploadRequest(RemixRequest *a1, const RemixService *a2, const RemixFileUploadRequest::Params *a3, int a4)
{
  int v4; // r7@1
  const RemixFileUploadRequest::Params *v5; // r5@1
  RemixRequest *v6; // r4@1
  void (__fastcall *v7)(char *, int, signed int); // r3@1

  v4 = a4;
  v5 = a3;
  v6 = a1;
  RemixRequest::RemixRequest(a1, a2);
  *(_DWORD *)v6 = &off_26DE0B8;
  *((_DWORD *)v6 + 20) = 0;
  v7 = *(void (__fastcall **)(char *, int, signed int))(v4 + 8);
  if ( v7 )
  {
    v7((char *)v6 + 72, v4, 2);
    *((_DWORD *)v6 + 21) = *(_DWORD *)(v4 + 12);
    *((_DWORD *)v6 + 20) = *(_DWORD *)(v4 + 8);
  }
  *((_DWORD *)v6 + 22) = &unk_28898CC;
  RemixFileUploadRequest::Params::Params((RemixRequest *)((char *)v6 + 96), v5);
  return v6;
}


RemixFileUploadRequest *__fastcall RemixFileUploadRequest::~RemixFileUploadRequest(RemixFileUploadRequest *this)
{
  RemixFileUploadRequest *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void (*v4)(void); // r3@2
  int v5; // r1@4
  void *v6; // r0@4
  unsigned int *v8; // r12@6
  signed int v9; // r1@8
  unsigned int *v10; // r12@10
  signed int v11; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26DE0B8;
  RemixFileUploadRequest::Params::~Params((RemixFileUploadRequest *)((char *)this + 96));
  v2 = *((_DWORD *)v1 + 22);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = (void (*)(void))*((_DWORD *)v1 + 20);
  if ( v4 )
    v4();
  *(_DWORD *)v1 = &off_26DE14C;
  v5 = *((_DWORD *)v1 + 16);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v5 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  RequestHandler::~RequestHandler(v1);
  return v1;
}


int __fastcall RemixFileUploadRequest::Params::isValid(RemixFileUploadRequest::Params *this)
{
  int v1; // r1@2
  bool v2; // zf@2
  int result; // r0@5

  if ( !*(_DWORD *)(*(_DWORD *)this - 12) )
    goto LABEL_9;
  v1 = *(_DWORD *)(*((_DWORD *)this + 1) - 12);
  v2 = v1 == 0;
  if ( v1 )
    v2 = *(_DWORD *)(*((_DWORD *)this + 2) - 12) == 0;
  if ( v2 )
LABEL_9:
    result = 0;
  else
    result = *(_DWORD *)(*((_DWORD *)this + 6) - 12) != 0;
  return result;
}


void __fastcall RemixFileUploadRequest::~RemixFileUploadRequest(RemixFileUploadRequest *this)
{
  RemixFileUploadRequest *v1; // r0@1

  v1 = RemixFileUploadRequest::~RemixFileUploadRequest(this);
  j_j_j__ZdlPv_4((void *)v1);
}


int *__fastcall RemixFileUploadRequest::send(RemixFileUploadRequest *this)
{
  RemixFileUploadRequest *v1; // r4@1
  unsigned __int64 v2; // r2@1
  char v3; // r0@1
  char *v4; // r5@2 OVERLAPPED
  unsigned __int64 v5; // r8@2
  int v6; // r6@5
  int v7; // r6@5 OVERLAPPED
  int v8; // r5@10
  void *v9; // r0@10
  int v10; // r5@12
  unsigned int v11; // r0@13
  unsigned int *v12; // r7@13
  unsigned int v13; // r1@16
  unsigned int v14; // r2@17
  int v15; // r10@20
  unsigned int *v16; // r2@22
  signed int v17; // r1@24
  unsigned int v18; // r0@32
  unsigned int *v19; // r6@34
  unsigned int v20; // r0@36
  unsigned int v21; // r0@41
  unsigned int v22; // r0@47
  unsigned int v23; // r0@54
  unsigned int v24; // r0@60
  unsigned int v25; // r0@67
  _DWORD *v26; // r0@70
  unsigned int v27; // r1@72
  __int64 v28; // r2@75
  unsigned int v29; // r0@77
  unsigned int v30; // r0@86
  __int64 v31; // r0@96
  int v32; // r5@96
  unsigned int *v33; // r1@97
  unsigned int v34; // r0@99
  unsigned int *v35; // r4@103
  unsigned int v36; // r0@105
  int v37; // r4@110
  unsigned int *v38; // r1@111
  unsigned int v39; // r0@113
  unsigned int *v40; // r5@117
  unsigned int v41; // r0@119
  int v42; // r4@124
  unsigned int *v43; // r1@125
  unsigned int v44; // r0@127
  unsigned int *v45; // r5@131
  unsigned int v46; // r0@133
  int *result; // r0@140
  int v48; // r4@140
  unsigned int *v49; // r1@141
  unsigned int *v50; // r5@147
  int v51; // [sp+Ch] [bp-ACh]@95
  int v52; // [sp+10h] [bp-A8h]@95
  char v53; // [sp+14h] [bp-A4h]@95
  int v54; // [sp+18h] [bp-A0h]@96
  _DWORD *v55; // [sp+1Ch] [bp-9Ch]@75
  void (*v56)(void); // [sp+24h] [bp-94h]@70
  int v57; // [sp+30h] [bp-88h]@10
  char v58; // [sp+34h] [bp-84h]@8
  void (*v59)(void); // [sp+3Ch] [bp-7Ch]@8
  char v60; // [sp+48h] [bp-70h]@8
  void (*v61)(void); // [sp+50h] [bp-68h]@91
  void *ptr; // [sp+5Ch] [bp-5Ch]@2
  _BYTE *v63; // [sp+60h] [bp-58h]@2
  char *v64; // [sp+64h] [bp-54h]@2
  int v65; // [sp+68h] [bp-50h]@1
  int v66; // [sp+6Ch] [bp-4Ch]@1
  char v67; // [sp+70h] [bp-48h]@1
  void (__cdecl *v68)(char *); // [sp+78h] [bp-40h]@138
  char v69; // [sp+80h] [bp-38h]@1
  void *v70; // [sp+84h] [bp-34h]@1
  int v71; // [sp+88h] [bp-30h]@1
  int v72; // [sp+8Ch] [bp-2Ch]@1
  int v73; // [sp+90h] [bp-28h]@95

  v1 = this;
  std::__shared_ptr<RequestData,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<RequestData>,std::string &,std::string const&>(
    (int)&v72,
    (int)&v67,
    (int *)this + 24,
    (int *)&web::http::methods::PUT);
  v70 = 0;
  v71 = 0;
  v65 = *((_DWORD *)v1 + 25);
  v66 = *(_DWORD *)(v65 - 12);
  Core::File::open((int)&v67, (int)&v70, (__int64 *)&v65, 33);
  v3 = v69;
  v69 |= 2u;
  if ( v3 & 1 )
  {
    v4 = 0;
    ptr = 0;
    v63 = 0;
    v64 = 0;
    v5 = *((_QWORD *)v1 + 14);
    if ( (_DWORD)v5 )
    {
      v4 = (char *)operator new(v5);
      if ( v63 != ptr )
        _aeabi_memmove(v4, ptr);
      v6 = (int)&v4[v63 - (_BYTE *)ptr];
      _aeabi_memclr(v6, v5);
      v7 = v6 + v5;
      if ( ptr )
        operator delete(ptr);
      *(_QWORD *)&ptr = *(_QWORD *)&v4;
      v64 = &v4[v5];
    }
    LODWORD(v2) = v4;
    Core::FileImpl::readExactly((Core::FileImpl *)&v60, v70, v2, v5);
    Core::File::close((Core::File *)&v58, (int *)&v70);
    if ( v59 )
      v59();
    v8 = v72;
    sub_119C884((void **)&v57, "application/glb");
    RequestData::setBody(v8, &v57, (int)&ptr);
    v9 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v57 - 4);
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
    if ( *((_DWORD *)v1 + 33) )
      v10 = *((_DWORD *)v1 + 2);
      if ( !v10 )
        std::__throw_bad_weak_ptr();
      v11 = *(_DWORD *)(v10 + 4);
      v12 = (unsigned int *)(v10 + 4);
      do
        while ( 1 )
        {
          if ( !v11 )
            std::__throw_bad_weak_ptr();
          __dmb();
          v13 = __ldrex(v12);
          if ( v13 == v11 )
            break;
          __clrex();
          v11 = v13;
        }
        v14 = __strex(v11 + 1, v12);
        v11 = v13;
      while ( v14 );
      __dmb();
      v15 = *((_DWORD *)v1 + 1);
          v18 = __ldrex(v12);
        while ( __strex(v18 + 1, v12) );
        ++*v12;
      v19 = (unsigned int *)(v10 + 8);
          v20 = __ldrex(v19);
        while ( __strex(v20 + 1, v19) );
        ++*v19;
          v21 = __ldrex(v12);
        while ( __strex(v21 - 1, v12) );
        v21 = (*v12)--;
      if ( v21 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
        if ( &pthread_create )
          do
            v22 = __ldrex(v19);
          while ( __strex(v22 - 1, v19) );
        else
          v22 = (*v19)--;
        if ( v22 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
          v23 = __ldrex(v12);
        while ( __strex(v23 - 1, v12) );
        v23 = (*v12)--;
      if ( v23 == 1 )
            v24 = __ldrex(v19);
          while ( __strex(v24 - 1, v19) );
          v24 = (*v19)--;
        if ( v24 == 1 )
          v25 = __ldrex(v19);
        while ( __strex(v25 + 1, v19) );
      v56 = 0;
      v26 = operator new(0x10u);
      *v26 = v15;
      v26[1] = v10;
          v27 = __ldrex(v19);
        while ( __strex(v27 + 1, v19) );
      HIDWORD(v28) = sub_FCE23C;
      v26[2] = v5;
      LODWORD(v28) = sub_FCE3F0;
      v26[3] = HIDWORD(v5);
      v55 = v26;
      *(_QWORD *)&v56 = v28;
          v29 = __ldrex(v19);
        while ( __strex(v29 - 1, v19) );
        v29 = (*v19)--;
      if ( v29 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v10 + 12))(v10);
      web::http::details::_http_request::set_progress_handler(*(_DWORD *)(v72 + 12), (int)&v55);
      if ( v56 )
        v56();
          v30 = __ldrex(v19);
        while ( __strex(v30 - 1, v19) );
        v30 = (*v19)--;
      if ( v30 == 1 )
    if ( v61 )
      v61();
    if ( ptr )
      operator delete(ptr);
  }
  v51 = v72;
  v52 = v73;
  v72 = 0;
  v73 = 0;
  RemixRequest::_sendRequest((int)&v53, (int)v1, (int)&v51);
  if ( (char *)v1 + 44 != &v53 )
    v31 = *(_QWORD *)&v53;
    *(_DWORD *)&v53 = 0;
    v54 = 0;
    *((_DWORD *)v1 + 11) = v31;
    v32 = *((_DWORD *)v1 + 12);
    *((_DWORD *)v1 + 12) = HIDWORD(v31);
    if ( v32 )
      v33 = (unsigned int *)(v32 + 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 == 1 )
        v35 = (unsigned int *)(v32 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 8))(v32);
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
          v36 = (*v35)--;
        if ( v36 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 12))(v32);
  v37 = v54;
  if ( v54 )
    v38 = (unsigned int *)(v54 + 4);
    if ( &pthread_create )
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
    else
      v39 = (*v38)--;
    if ( v39 == 1 )
      v40 = (unsigned int *)(v37 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 8))(v37);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 12))(v37);
  v42 = v52;
  if ( v52 )
    v43 = (unsigned int *)(v52 + 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 == 1 )
      v45 = (unsigned int *)(v42 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 8))(v42);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 12))(v42);
  if ( v68 )
    v68(&v67);
  result = Core::File::~File((Core::File *)&v70);
  v48 = v73;
  if ( v73 )
    v49 = (unsigned int *)(v73 + 4);
        result = (int *)__ldrex(v49);
      while ( __strex((unsigned int)result - 1, v49) );
      result = (int *)(*v49)--;
    if ( result == (int *)1 )
      v50 = (unsigned int *)(v48 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v48 + 8))(v48);
          result = (int *)__ldrex(v50);
        while ( __strex((unsigned int)result - 1, v50) );
        result = (int *)(*v50)--;
      if ( result == (int *)1 )
        result = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v48 + 12))(v48);
  return result;
}


void __fastcall RemixFileUploadRequest::~RemixFileUploadRequest(RemixFileUploadRequest *this)
{
  RemixFileUploadRequest::~RemixFileUploadRequest(this);
}


              if ( RemixFileUploadRequest::Params::isValid((RemixFileUploadRequest::Params *)&v66) == 1 )
{
                v24 = *(_DWORD *)(v3 + 12);
                v25 = *(_DWORD *)(v24 + 12);
                if ( v25 )
                {
                  LODWORD(v55) = &v65;
                  MinecraftEventing::fireEventFileTransmissionState(v25, 1, 1, 3, v55, v23, 0LL);
                  v24 = *(_DWORD *)(v3 + 12);
                }
                v59 = *(_DWORD *)v4;
                v26 = *(_DWORD *)(v4 + 4);
                v56 = (const RemixService *)v24;
                v60 = v26;
                if ( v26 )
                  v27 = (unsigned int *)(v26 + 8);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v28 = __ldrex(v27);
                    while ( __strex(v28 + 1, v27) );
                  }
                  else
                    ++*v27;
                sub_119C854(&v61, &v65);
                v62 = v23;
                v64 = 0;
                v30 = operator new(0x18u);
                v31 = (int)v30;
                *v30 = v59;
                v32 = v60;
                *(_DWORD *)(v31 + 4) = v60;
                if ( v32 )
                  v33 = (unsigned int *)(v32 + 8);
                      v34 = __ldrex(v33);
                    while ( __strex(v34 + 1, v33) );
                    ++*v33;
                sub_119C854((int *)(v31 + 8), &v61);
                v35 = HIDWORD(v62);
                HIDWORD(v36) = sub_F6E8FC;
                *(_DWORD *)(v31 + 16) = v62;
                *(_DWORD *)(v31 + 20) = v35;
                LODWORD(v36) = sub_F6ED40;
                v63 = v31;
                *(_QWORD *)&v64 = v36;
                RemixService::_requestFileUpload(v56, v3 + 40, (const RemixFileUploadRequest::Params *)&v66, (int)&v63);
                if ( v64 )
                  v64();
                v37 = (void *)(v61 - 12);
                if ( (int *)(v61 - 12) != &dword_28898C0 )
                  v53 = (unsigned int *)(v61 - 4);
                      v54 = __ldrex(v53);
                    while ( __strex(v54 - 1, v53) );
                    v54 = (*v53)--;
                  if ( v54 <= 0 )
                    j_j_j_j_j__ZdlPv_9_1(v37);
                v38 = v60;
                if ( v60 )
                  v39 = (unsigned int *)(v60 + 8);
                      v40 = __ldrex(v39);
                    while ( __strex(v40 - 1, v39) );
                    v40 = (*v39)--;
                  if ( v40 == 1 )
                    (*(void (**)(void))(*(_DWORD *)v38 + 12))();
              }
              else
              {
                *(_DWORD *)(v3 + 16) = 10;
                *(_BYTE *)(v3 + 93) = 1;
                v29 = *(_DWORD *)(*(_DWORD *)(v3 + 12) + 12);
                if ( v29 )
                  MinecraftEventing::fireEventFileTransmissionState(v29, 1, 0, 3, v55, v23, 0LL);
              v41 = (void *)(v65 - 12);
              if ( (int *)(v65 - 12) != &dword_28898C0 )
                v51 = (unsigned int *)(v65 - 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v52 = __ldrex(v51);
                  while ( __strex(v52 - 1, v51) );
                else
                  v52 = (*v51)--;
                if ( v52 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v41);
              RemixFileUploadRequest::Params::~Params((RemixFileUploadRequest::Params *)&v66);
            }
          }
          if ( &pthread_create )
          {
            __dmb();
            do
              v42 = __ldrex(v6);
            while ( __strex(v42 - 1, v6) );
          else
            v42 = (*v6)--;
          if ( v42 == 1 )
            v43 = (unsigned int *)(v5 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
            if ( &pthread_create )
            {
              __dmb();
              do
                v44 = __ldrex(v43);
              while ( __strex(v44 - 1, v43) );
            else
              v44 = (*v43)--;
            if ( v44 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
          break;
        }
      }
      else
      {
        __clrex();
        v7 = v8;
    }
  }
  v45 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
  {
    v47 = (unsigned int *)(v58 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
    else
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v45);
  v46 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v57 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v46);
}


signed int __fastcall RemixFileUploadRequest::_isFileRequest(RemixFileUploadRequest *this)
{
  return 1;
}


RemixFileUploadRequest::Params *__fastcall RemixFileUploadRequest::Params::~Params(RemixFileUploadRequest::Params *this)
{
  RemixFileUploadRequest::Params *v1; // r5@1
  void (*v2)(void); // r3@1
  int v3; // r1@3
  void *v4; // r0@3
  int v5; // r1@4
  void *v6; // r0@4
  int v7; // r1@5
  void *v8; // r0@5
  int *v9; // r0@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  unsigned int *v15; // r2@16
  signed int v16; // r1@18
  unsigned int *v17; // r2@20
  signed int v18; // r1@22

  v1 = this;
  v2 = (void (*)(void))*((_DWORD *)this + 9);
  if ( v2 )
    v2();
  v3 = *((_DWORD *)v1 + 6);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v3 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = *((_DWORD *)v1 + 2);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v5 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  v7 = *((_DWORD *)v1 + 1);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v7 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = (int *)(*(_DWORD *)v1 - 12);
  if ( v9 != &dword_28898C0 )
    v17 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  return v1;
}
