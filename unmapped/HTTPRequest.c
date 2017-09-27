

int *__fastcall HTTPRequest::HTTPRequest(int *a1, int *a2)
{
  int *v2; // r4@1
  int v3; // r1@1
  HTTPRequestInternalAndroid *v4; // r7@1
  int v5; // r0@1

  v2 = a1;
  sub_DA73B4(a1, a2);
  v2[1] = (int)&unk_28898CC;
  v2[2] = (int)&unk_28898CC;
  HTTPResponse::HTTPResponse((HTTPResponse *)(v2 + 4));
  v2[14] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[16] = 0;
  v2[18] = (int)(v2 + 16);
  v2[19] = (int)(v2 + 16);
  v2[22] = 0;
  v3 = (int)(v2 + 22);
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 8) = v3;
  *(_DWORD *)(v3 + 12) = v3;
  v4 = (HTTPRequestInternalAndroid *)operator new(0xCu);
  HTTPRequestInternalAndroid::HTTPRequestInternalAndroid(v4, (HTTPRequest *)v2);
  v5 = v2[14];
  v2[14] = (int)v4;
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  return v2;
}


_DWORD *__fastcall HTTPRequest::getCookieDataAsString(HTTPRequest *this, int a2)
{
  int v2; // r4@1
  int i; // r7@1
  int v4; // r0@3
  char *v5; // r8@7
  char *v6; // r0@7
  void **v7; // r0@8
  void *v8; // r0@8
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  int *v12; // [sp+4h] [bp-ECh]@1
  void **v13; // [sp+8h] [bp-E8h]@1
  int v14; // [sp+Ch] [bp-E4h]@9
  void **v15; // [sp+10h] [bp-E0h]@6
  void **v16; // [sp+14h] [bp-DCh]@4
  int v17; // [sp+1Ch] [bp-D4h]@2
  int v18; // [sp+20h] [bp-D0h]@2
  int v19; // [sp+30h] [bp-C0h]@9
  int v20; // [sp+38h] [bp-B8h]@8
  int v21; // [sp+3Ch] [bp-B4h]@9
  char v22; // [sp+C7h] [bp-29h]@6

  v2 = a2;
  v12 = (int *)this;
  sub_21D103C((int)&v13, 24);
  for ( i = *(_DWORD *)(v2 + 72); i != v2 + 64; i = sub_21D4820(i) )
  {
    if ( v18 == v17 )
      v4 = ((int (__fastcall *)(void ***))v16[7])(&v16);
    else
      v4 = v18 - v17;
    if ( v4 )
    {
      v22 = 32;
      sub_21CBF38((char *)&v15, (int)&v22, 1);
    }
    v5 = sub_21CBF38((char *)&v15, *(_DWORD *)(i + 16), *(_DWORD *)(*(_DWORD *)(i + 16) - 12));
    sub_21CBF38(v5, (int)"=", 1);
    v6 = sub_21CBF38(v5, *(_DWORD *)(i + 20), *(_DWORD *)(*(_DWORD *)(i + 20) - 12));
    sub_21CBF38(v6, (int)";", 1);
  }
  sub_21CFED8(v12, (int)&v16);
  v7 = off_26D3F84;
  v13 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v13) = off_26D3F80[0];
  v15 = v7;
  v16 = &off_27734E8;
  v8 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v20 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v16 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v19);
  v13 = (void **)off_26D3F68;
  *(void ***)((char *)&v13 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v14 = 0;
  return sub_21B6560(&v21);
}


HTTPRequest *__fastcall HTTPRequest::~HTTPRequest(HTTPRequest *this)
{
  HTTPRequest *v1; // r4@1
  int v2; // r0@1
  char *v3; // r0@3
  int v4; // r1@6
  void *v5; // r0@6
  int v6; // r1@7
  void *v7; // r0@7
  int v8; // r1@8
  void *v9; // r0@8
  int *v10; // r0@9
  unsigned int *v12; // r12@11
  signed int v13; // r1@13
  unsigned int *v14; // r12@15
  signed int v15; // r1@17
  unsigned int *v16; // r12@19
  signed int v17; // r1@21
  unsigned int *v18; // r12@23
  signed int v19; // r1@25

  v1 = this;
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (int)this + 84,
    *((_DWORD *)this + 23));
    (int)v1 + 60,
    *((_DWORD *)v1 + 17));
  v2 = *((_DWORD *)v1 + 14);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 14) = 0;
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)v1 + 20);
  v3 = (char *)*((_DWORD *)v1 + 5);
  if ( v3 && (char *)v1 + 44 != v3 )
    operator delete(v3);
  v4 = *((_DWORD *)v1 + 4);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v4 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = *((_DWORD *)v1 + 2);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v6 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 1);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v8 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (int *)(*(_DWORD *)v1 - 12);
  if ( v10 != &dword_28898C0 )
    v18 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  return v1;
}


void **__fastcall HTTPRequest::getVerbAsString(HTTPRequest *this, int a2)
{
  void **result; // r0@2

  switch ( *(_DWORD *)(a2 + 12) )
  {
    case 0:
      result = sub_21E94B4((void **)this, "GET");
      break;
    case 1:
      result = sub_21E94B4((void **)this, "POST");
    case 2:
      result = sub_21E94B4((void **)this, "PUT");
    case 3:
      result = sub_21E94B4((void **)this, "DELETE");
    default:
      result = sub_21E94B4((void **)this, "None");
  }
  return result;
}


int __fastcall HTTPRequest::setResponse(int a1, int a2, int *a3, int a4)
{
  int v4; // r6@1
  int v5; // r5@1
  int v6; // r4@1

  v4 = a1;
  v5 = a2;
  v6 = a4;
  EntityInteraction::setInteractText((int *)(a1 + 16), a3);
  *(_DWORD *)(v4 + 48) = v5;
  return j_j_j__ZNSt10_HashtableISsSt4pairIKSsSsESaIS2_ENSt8__detail10_Select1stESt8equal_toISsESt4hashISsENS4_18_Mod_range_hashingENS4_20_Default_ranged_hashENS4_20_Prime_rehash_policyENS4_17_Hashtable_traitsILb1ELb0ELb1EEEE14_M_move_assignEOSF_St17integral_constantIbLb1EE(
           v4 + 20,
           v6);
}


char *__fastcall HTTPRequest::getCookieData(HTTPRequest *this)
{
  return (char *)this + 60;
}


int __fastcall HTTPRequest::setCookies(int result, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  int v4; // r5@1
  int v5; // r1@2
  _DWORD *v6; // r0@3
  _DWORD *v7; // r2@3
  _DWORD *v8; // r1@4
  _DWORD *v9; // r1@6

  v2 = result;
  v3 = result + 60;
  v4 = a2;
  if ( result + 60 != a2 )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
      result + 60,
      *(_DWORD *)(result + 68));
    result = 0;
    *(_DWORD *)(v2 + 68) = 0;
    *(_DWORD *)(v2 + 72) = v2 + 64;
    *(_DWORD *)(v2 + 76) = v2 + 64;
    *(_DWORD *)(v2 + 80) = 0;
    v5 = *(_DWORD *)(v4 + 8);
    if ( v5 )
    {
      v6 = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_copy(
             v3,
             v5,
             v2 + 64);
      v7 = v6;
      *(_DWORD *)(v2 + 68) = v6;
      do
      {
        v8 = v7;
        v7 = (_DWORD *)v7[2];
      }
      while ( v7 );
      *(_DWORD *)(v2 + 72) = v8;
        v9 = v6;
        v6 = (_DWORD *)v6[3];
      while ( v6 );
      *(_DWORD *)(v2 + 76) = v9;
      result = *(_DWORD *)(v4 + 20);
      *(_DWORD *)(v2 + 80) = result;
    }
  }
  return result;
}


JVMAttacher *__fastcall HTTPRequest::abort(HTTPRequest *this)
{
  int v1; // r5@1
  JVMAttacher *v2; // r0@1
  int v3; // r4@1
  int v4; // r3@1
  char v6; // [sp+4h] [bp-1Ch]@1

  v1 = *((_DWORD *)this + 14);
  v2 = (JVMAttacher *)JVMAttacher::JVMAttacher((int)&v6, HTTPRequestInternalAndroid::mVM);
  v3 = JVMAttacher::getEnv(v2);
  _JNIEnv::CallVoidMethod(v3, *(_DWORD *)(v1 + 4), HTTPRequestInternalAndroid::mJNIAbortRequestMethod, v4);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 60))(v3) )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 64))(v3);
  return JVMAttacher::~JVMAttacher((JVMAttacher *)&v6);
}


int __fastcall HTTPRequest::setResponseStatus(int result, int a2)
{
  *(_DWORD *)(result + 52) = a2;
  return result;
}


int __fastcall HTTPRequest::setHeaders(int result, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  int v4; // r5@1
  int v5; // r1@2
  _DWORD *v6; // r0@3
  _DWORD *v7; // r2@3
  _DWORD *v8; // r1@4
  _DWORD *v9; // r1@6

  v2 = result;
  v3 = result + 84;
  v4 = a2;
  if ( result + 84 != a2 )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
      result + 84,
      *(_DWORD *)(result + 92));
    result = 0;
    *(_DWORD *)(v2 + 92) = 0;
    *(_DWORD *)(v2 + 96) = v2 + 88;
    *(_DWORD *)(v2 + 100) = v2 + 88;
    *(_DWORD *)(v2 + 104) = 0;
    v5 = *(_DWORD *)(v4 + 8);
    if ( v5 )
    {
      v6 = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_copy(
             v3,
             v5,
             v2 + 88);
      v7 = v6;
      *(_DWORD *)(v2 + 92) = v6;
      do
      {
        v8 = v7;
        v7 = (_DWORD *)v7[2];
      }
      while ( v7 );
      *(_DWORD *)(v2 + 96) = v8;
        v9 = v6;
        v6 = (_DWORD *)v6[3];
      while ( v6 );
      *(_DWORD *)(v2 + 100) = v9;
      result = *(_DWORD *)(v4 + 20);
      *(_DWORD *)(v2 + 104) = result;
    }
  }
  return result;
}


char *__fastcall HTTPRequest::getResponse(HTTPRequest *this)
{
  return (char *)this + 16;
}


int __fastcall HTTPRequest::setRequestMethod(int result, int a2)
{
  *(_DWORD *)(result + 12) = a2;
  return result;
}


char *__fastcall HTTPRequest::getHeaders(HTTPRequest *this)
{
  return (char *)this + 84;
}


char *__fastcall HTTPRequest::getRequestContentType(HTTPRequest *this)
{
  return (char *)this + 8;
}


char *__fastcall HTTPRequest::getRequestBody(HTTPRequest *this)
{
  return (char *)this + 4;
}
