

void __fastcall RequestData::setBody(int a1, int *a2, int *a3)
{
  int v3; // r5@1
  int *v4; // r6@1
  int *v5; // r5@1
  void *v6; // r0@1
  void *v7; // r0@2
  int v8; // r4@3
  void *v9; // r0@3
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  unsigned int *v12; // r2@9
  signed int v13; // r1@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  int v16; // [sp+4h] [bp-24h]@3
  int v17; // [sp+Ch] [bp-1Ch]@1
  int v18; // [sp+10h] [bp-18h]@1

  v3 = a1;
  v4 = a2;
  utility::conversions::to_string_t(&v18, a3);
  sub_119C884((void **)&v17, "text/plain; charset=utf-8");
  v5 = (int *)(v3 + 12);
  web::http::http_request::set_body(v5, &v18, &v17);
  v6 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v17 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  v7 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v18 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = *v5;
  utility::conversions::to_string_t(&v16, v4);
  web::http::http_headers::set_content_type(v8 + 20, &v16);
  v9 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
}


void __fastcall RequestData::setBody(int a1, int *a2, int *a3)
{
  RequestData::setBody(a1, a2, a3);
}


void __fastcall RequestData::setBody(int a1, int *a2, int a3)
{
  RequestData::setBody(a1, a2, a3);
}


void __fastcall RequestData::setBody(int a1, const web::json::value *a2)
{
  j_j_j__ZN3web4http12http_request8set_bodyERKNS_4json5valueE((web::http::http_request *)(a1 + 12), a2);
}


void __fastcall RequestData::setBody(int a1, int *a2, int a3)
{
  int v3; // r5@1
  __int64 v4; // r0@1
  int *v5; // r4@1
  int v6; // r6@1
  void *v7; // r0@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+4h] [bp-1Ch]@1

  v3 = a1;
  LODWORD(v4) = a1 + 12;
  v5 = a2;
  HIDWORD(v4) = a3;
  web::http::http_request::set_body(v4);
  v6 = *(_DWORD *)(v3 + 12);
  utility::conversions::to_string_t(&v10, v5);
  web::http::http_headers::set_content_type(v6 + 20, &v10);
  v7 = (void *)(v10 - 12);
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
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
}


int *__fastcall RequestData::RequestData(int *a1, int *a2, int *a3)
{
  int *v3; // r5@1
  int *v4; // r6@1
  int *v5; // r4@1
  void *v6; // r0@1
  void *v7; // r0@2
  void *v8; // r0@3
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  unsigned int *v12; // r2@9
  signed int v13; // r1@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  int v16; // [sp+4h] [bp-44h]@3
  int v17; // [sp+8h] [bp-40h]@1
  int v18; // [sp+Ch] [bp-3Ch]@1
  int v19; // [sp+10h] [bp-38h]@1
  char v20; // [sp+2Ch] [bp-1Ch]@3

  v3 = a3;
  v4 = a2;
  v5 = a1;
  sub_119C854(a1, a2);
  utility::conversions::to_string_t(&v17, v4);
  web::uri::uri((int)&v18, &v17);
  web::http::client::http_client::http_client((web::http::client::http_client *)(v5 + 1), (const web::uri *)&v18);
  web::details::uri_components::~uri_components((web::details::uri_components *)&v19);
  v6 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v18 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  v7 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v17 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C854(&v16, v3);
  std::__shared_ptr<web::http::details::_http_request,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<web::http::details::_http_request>,std::string>(
    (int)(v5 + 3),
    (int)&v20,
    &v16);
  v8 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  return v5;
}


void __fastcall RequestData::setBody(int a1, const web::json::value *a2)
{
  RequestData::setBody(a1, a2);
}
