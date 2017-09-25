

HTTPRequestInternalAndroid *__fastcall HTTPRequestInternalAndroid::~HTTPRequestInternalAndroid(HTTPRequestInternalAndroid *this)
{
  HTTPRequestInternalAndroid *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@1
  char v5; // [sp+4h] [bp-14h]@1

  v1 = this;
  *(_DWORD *)this = &off_26D60B4;
  JVMAttacher::JVMAttacher((int)&v5, HTTPRequestInternalAndroid::mVM);
  v2 = JVMAttacher::getEnv((JVMAttacher *)&v5);
  v3 = *((_DWORD *)v1 + 1);
  (*(void (**)(void))(*(_DWORD *)v2 + 88))();
  JVMAttacher::~JVMAttacher((JVMAttacher *)&v5);
  return v1;
}


int __fastcall HTTPRequestInternalAndroid::HTTPRequestInternalAndroid(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1
  int v4; // r5@1
  int v5; // r3@1
  int v6; // r0@1
  char v8; // [sp+4h] [bp-1Ch]@1

  v2 = a1;
  *(_DWORD *)a1 = &off_26D60B4;
  *(_DWORD *)(a1 + 8) = a2;
  JVMAttacher::JVMAttacher((int)&v8, HTTPRequestInternalAndroid::mVM);
  v3 = JVMAttacher::getEnv((JVMAttacher *)&v8);
  v4 = v3;
  v6 = _JNIEnv::NewObject(
         v3,
         HTTPRequestInternalAndroid::mJNIHTTPRequestClass,
         HTTPRequestInternalAndroid::mJNIRequestConstructor,
         v5);
  *(_DWORD *)(v2 + 4) = (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 84))(v4, v6);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 60))(v4) )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 64))(v4);
  JVMAttacher::~JVMAttacher((JVMAttacher *)&v8);
  return v2;
}


JVMAttacher *__fastcall HTTPRequestInternalAndroid::send(HTTPRequestInternalAndroid *this)
{
  HTTPRequestInternalAndroid *v1; // r10@1
  JVMAttacher *v2; // r0@1
  int v3; // r11@1
  __int64 v4; // kr00_8@1
  int v5; // r7@1
  int *v6; // r0@1
  int v7; // r5@1
  void *v8; // r0@1
  __int64 v9; // kr08_8@2
  int v10; // r7@2
  int *v11; // r0@2
  int v12; // r5@2
  void *v13; // r0@2
  __int64 v14; // kr10_8@3
  int v15; // r7@3
  int v16; // r5@3
  void *v17; // r0@3
  __int64 v18; // kr18_8@4
  int v19; // r7@4
  int *v20; // r0@4
  int v21; // r5@4
  void *v22; // r0@4
  __int64 v23; // kr20_8@5
  int v24; // r5@5
  int v25; // r6@5
  int v26; // r4@5
  int v27; // r3@5
  void *v28; // r0@5
  int v29; // r1@6
  int v30; // r3@6
  int v31; // r5@7
  int v32; // r3@7
  int v33; // r0@7
  int v34; // r3@7
  int v35; // r5@7
  int v36; // r8@7
  int v37; // r9@7
  double v38; // r0@7
  unsigned int v39; // r0@7
  int v40; // r6@9
  int *v41; // r5@9
  int v42; // r5@10
  int v43; // r6@11
  int v44; // r0@12
  unsigned int *v45; // r2@15
  signed int v46; // r1@17
  unsigned int *v47; // r2@19
  signed int v48; // r1@21
  int v49; // r0@31
  int v50; // r8@31
  int v51; // r3@31
  int v52; // r0@31
  int v53; // r3@31
  int v54; // r0@31
  int *v55; // r0@31
  void *v56; // r0@31
  void *v57; // r0@32
  int v58; // r6@34
  int v59; // r5@34
  unsigned int *v60; // r2@36
  signed int v61; // r1@38
  unsigned int *v62; // r2@40
  signed int v63; // r1@42
  int v64; // r7@52
  int v65; // r1@52
  void *v66; // r0@52
  int v67; // r1@53
  void *v68; // r0@53
  int v69; // r7@58
  unsigned int *v70; // r2@60
  signed int v71; // r1@62
  unsigned int *v72; // r2@64
  signed int v73; // r1@66
  int v74; // r6@76
  int v75; // r1@76
  void *v76; // r0@76
  int v77; // r1@77
  void *v78; // r0@77
  void *v79; // r0@82
  unsigned int *v81; // r2@84
  signed int v82; // r1@86
  unsigned int *v83; // r2@88
  signed int v84; // r1@90
  unsigned int *v85; // r2@92
  signed int v86; // r1@94
  unsigned int *v87; // r2@96
  signed int v88; // r1@98
  unsigned int *v89; // r2@100
  signed int v90; // r1@102
  unsigned int *v91; // r2@125
  signed int v92; // r1@127
  int v93; // [sp+8h] [bp-98h]@9
  int v94; // [sp+Ch] [bp-94h]@7
  void *ptr; // [sp+10h] [bp-90h]@34
  int v96; // [sp+14h] [bp-8Ch]@34
  int v97; // [sp+18h] [bp-88h]@34
  int v98; // [sp+1Ch] [bp-84h]@34
  __int64 v99; // [sp+20h] [bp-80h]@34
  int v100; // [sp+28h] [bp-78h]@56
  int v101; // [sp+2Ch] [bp-74h]@15
  int v102; // [sp+30h] [bp-70h]@19
  void *v103; // [sp+34h] [bp-6Ch]@10
  __int64 v104; // [sp+38h] [bp-68h]@7
  int v105; // [sp+40h] [bp-60h]@7
  signed int v106; // [sp+44h] [bp-5Ch]@7
  int v107; // [sp+48h] [bp-58h]@7
  int v108; // [sp+4Ch] [bp-54h]@80
  int v109; // [sp+50h] [bp-50h]@7
  int v110; // [sp+54h] [bp-4Ch]@5
  int v111; // [sp+58h] [bp-48h]@4
  int v112; // [sp+5Ch] [bp-44h]@3
  int v113; // [sp+60h] [bp-40h]@2
  int v114; // [sp+64h] [bp-3Ch]@1
  char v115; // [sp+68h] [bp-38h]@1
  void **v116; // [sp+74h] [bp-2Ch]@34

  v1 = this;
  v2 = (JVMAttacher *)JVMAttacher::JVMAttacher((int)&v115, HTTPRequestInternalAndroid::mVM);
  v3 = JVMAttacher::getEnv(v2);
  v4 = *(_QWORD *)((char *)v1 + 4);
  v5 = HTTPRequestInternalAndroid::mJNISetURLMethod;
  v6 = (int *)HTTPRequest::getURL((HTTPRequest *)HIDWORD(v4));
  sub_DA73B4(&v114, v6);
  v7 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 668))(v3, v114);
  _JNIEnv::CallVoidMethod(v3, v4, v5, v7);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v3 + 92))(v3, v7);
  v8 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != &dword_28898C0 )
  {
    v81 = (unsigned int *)(v114 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
    }
    else
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  }
  v9 = *(_QWORD *)((char *)v1 + 4);
  v10 = HTTPRequestInternalAndroid::mJNISetRequestBodyMethod;
  v11 = (int *)HTTPRequest::getRequestBody((HTTPRequest *)HIDWORD(v9));
  sub_DA73B4(&v113, v11);
  v12 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 668))(v3, v113);
  _JNIEnv::CallVoidMethod(v3, v9, v10, v12);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v3 + 92))(v3, v12);
  v13 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v113 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  v14 = *(_QWORD *)((char *)v1 + 4);
  v15 = HTTPRequestInternalAndroid::mJNISetCookieDataMethod;
  HTTPRequest::getCookieDataAsString((HTTPRequest *)&v112, SHIDWORD(v14));
  v16 = (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)v3 + 668))(v3, v112);
  _JNIEnv::CallVoidMethod(v3, v14, v15, v16);
  (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v3 + 92))(v3, v16);
  v17 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v112 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
  v18 = *(_QWORD *)((char *)v1 + 4);
  v19 = HTTPRequestInternalAndroid::mJNISetContentTypeMethod;
  v20 = (int *)HTTPRequest::getRequestContentType((HTTPRequest *)HIDWORD(v18));
  sub_DA73B4(&v111, v20);
  v21 = (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)v3 + 668))(v3, v111);
  _JNIEnv::CallVoidMethod(v3, v18, v19, v21);
  (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v3 + 92))(v3, v21);
  v22 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v111 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j_j__ZdlPv_9(v22);
  v23 = *(_QWORD *)((char *)v1 + 4);
  v24 = HTTPRequestInternalAndroid::mJNISendRequestMethod;
  HTTPRequest::getVerbAsString((HTTPRequest *)&v110, SHIDWORD(v23));
  v25 = (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)v3 + 668))(v3, v110);
  v26 = _JNIEnv::CallObjectMethod(v3, v23, v24, v25);
  (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v3 + 92))(v3, v25);
  v28 = (void *)(v110 - 12);
  if ( (int *)(v110 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v110 - 4);
      {
        v90 = __ldrex(v89);
        v27 = v90 - 1;
      }
      while ( __strex(v90 - 1, v89) );
      v90 = *v89;
      v27 = *v89 - 1;
      *v89 = v27;
    if ( v90 <= 0 )
      j_j_j_j_j__ZdlPv_9(v28);
  v29 = _JNIEnv::CallIntMethod(v3, v26, HTTPRequestInternalAndroid::mJNIGetResponseStatusMethod, v27);
  if ( v29 == 1 )
    v31 = _JNIEnv::CallIntMethod(v3, v26, HTTPRequestInternalAndroid::mJNIGetResponseCodeMethod, v30);
    v33 = _JNIEnv::CallObjectMethod(v3, v26, HTTPRequestInternalAndroid::mJNIGetResponseBodyMethod, v32);
    JStringToString::JStringToString(&v109, v3, v33);
    v94 = v31;
    v35 = _JNIEnv::CallObjectMethod(v3, v26, HTTPRequestInternalAndroid::mJNIGetResponseHeadersMethod, v34);
    v36 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 684))(v3, v35);
    v37 = v35;
    v105 = 0;
    v106 = 1065353216;
    v107 = 0;
    LODWORD(v38) = &v106;
    v39 = sub_DA7744(v38);
    v104 = v39;
    if ( v39 == 1 )
      v93 = v26;
      v108 = 0;
      v41 = &v108;
      if ( v39 >= 0x40000000 )
        sub_DA7414();
      v40 = 4 * v39;
      v41 = (int *)operator new(4 * v39);
      _aeabi_memclr4(v41, v40);
    v103 = v41;
    v42 = v36;
    if ( v36 >= 1 )
      v43 = 0;
        v49 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v3 + 692))(v3, v37, v43);
        v50 = v49;
        v52 = _JNIEnv::CallObjectMethod(v3, v49, HTTPRequestInternalAndroid::mJNIHeaderGetName, v51);
        JStringToString::JStringToString(&v102, v3, v52);
        v54 = _JNIEnv::CallObjectMethod(v3, v50, HTTPRequestInternalAndroid::mJNIHeaderGetValue, v53);
        JStringToString::JStringToString(&v101, v3, v54);
        v55 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                       (unsigned __int64 *)&v103,
                       (int **)&v102);
        EntityInteraction::setInteractText(v55, &v101);
        v56 = (void *)(v101 - 12);
        if ( (int *)(v101 - 12) != &dword_28898C0 )
        {
          v45 = (unsigned int *)(v101 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v46 = __ldrex(v45);
            while ( __strex(v46 - 1, v45) );
          }
          else
            v46 = (*v45)--;
          if ( v46 <= 0 )
            j_j_j_j_j__ZdlPv_9(v56);
        }
        v57 = (void *)(v102 - 12);
        if ( (int *)(v102 - 12) != &dword_28898C0 )
          v47 = (unsigned int *)(v102 - 4);
              v48 = __ldrex(v47);
            while ( __strex(v48 - 1, v47) );
            v48 = (*v47)--;
          if ( v48 <= 0 )
            j_j_j_j_j__ZdlPv_9(v57);
        ++v43;
      while ( v43 < v42 );
    v58 = *((_DWORD *)v1 + 2);
    ptr = 0;
    v96 = v104;
    v97 = 0;
    v98 = v105;
    v99 = *(_QWORD *)&v106;
    v116 = &ptr;
    std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<std::string const,std::string>,true> const*)#1}>(
      (unsigned int *)&ptr,
      (int)&v103,
      (int *)&v116);
    HTTPRequest::setResponse(v58, v94, &v109, (int)&ptr);
    v59 = v97;
    while ( v59 )
      v64 = v59;
      v65 = *(_DWORD *)(v59 + 8);
      v59 = *(_DWORD *)v59;
      v66 = (void *)(v65 - 12);
      if ( (int *)(v65 - 12) != &dword_28898C0 )
        v60 = (unsigned int *)(v65 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v61 = __ldrex(v60);
          while ( __strex(v61 - 1, v60) );
        else
          v61 = (*v60)--;
        if ( v61 <= 0 )
          j_j_j_j_j__ZdlPv_9(v66);
      v67 = *(_DWORD *)(v64 + 4);
      v68 = (void *)(v67 - 12);
      if ( (int *)(v67 - 12) != &dword_28898C0 )
        v62 = (unsigned int *)(v67 - 4);
            v63 = __ldrex(v62);
          while ( __strex(v63 - 1, v62) );
          v63 = (*v62)--;
        if ( v63 <= 0 )
          j_j_j_j_j__ZdlPv_9(v68);
      operator delete((void *)v64);
    _aeabi_memclr4(ptr, 4 * v96);
    v98 = 0;
    if ( ptr && &v100 != ptr )
      operator delete(ptr);
    HTTPRequest::setResponseStatus(*((_DWORD *)v1 + 2), 2);
    v69 = HIDWORD(v104);
    while ( v69 )
      v74 = v69;
      v75 = *(_DWORD *)(v69 + 8);
      v69 = *(_DWORD *)v69;
      v76 = (void *)(v75 - 12);
      if ( (int *)(v75 - 12) != &dword_28898C0 )
        v70 = (unsigned int *)(v75 - 4);
            v71 = __ldrex(v70);
          while ( __strex(v71 - 1, v70) );
          v71 = (*v70)--;
        if ( v71 <= 0 )
          j_j_j_j_j__ZdlPv_9(v76);
      v77 = *(_DWORD *)(v74 + 4);
      v78 = (void *)(v77 - 12);
      if ( (int *)(v77 - 12) != &dword_28898C0 )
        v72 = (unsigned int *)(v77 - 4);
            v73 = __ldrex(v72);
          while ( __strex(v73 - 1, v72) );
          v73 = (*v72)--;
        if ( v73 <= 0 )
          j_j_j_j_j__ZdlPv_9(v78);
      operator delete((void *)v74);
    _aeabi_memclr4(v103, 4 * v104);
    HIDWORD(v104) = 0;
    if ( v103 && &v108 != v103 )
      operator delete(v103);
    v26 = v93;
    v79 = (void *)(v109 - 12);
    if ( (int *)(v109 - 12) != &dword_28898C0 )
      v91 = (unsigned int *)(v109 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v92 = __ldrex(v91);
        while ( __strex(v92 - 1, v91) );
      else
        v92 = (*v91)--;
      if ( v92 <= 0 )
        j_j_j_j_j__ZdlPv_9(v79);
  else
    v44 = *((_DWORD *)v1 + 2);
    if ( v29 == 2 )
      HTTPRequest::setResponseStatus(v44, 3);
      HTTPRequest::setResponseStatus(v44, 4);
  (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v3 + 92))(v3, v26);
  return JVMAttacher::~JVMAttacher((JVMAttacher *)&v115);
}


void __fastcall HTTPRequestInternalAndroid::~HTTPRequestInternalAndroid(HTTPRequestInternalAndroid *this)
{
  HTTPRequestInternalAndroid *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@1
  char v4; // [sp+4h] [bp-14h]@1

  v1 = this;
  *(_DWORD *)this = &off_26D60B4;
  JVMAttacher::JVMAttacher((int)&v4, HTTPRequestInternalAndroid::mVM);
  v2 = JVMAttacher::getEnv((JVMAttacher *)&v4);
  v3 = *((_DWORD *)v1 + 1);
  (*(void (**)(void))(*(_DWORD *)v2 + 88))();
  JVMAttacher::~JVMAttacher((JVMAttacher *)&v4);
  operator delete((void *)v1);
}


void __fastcall HTTPRequestInternalAndroid::~HTTPRequestInternalAndroid(HTTPRequestInternalAndroid *this)
{
  HTTPRequestInternalAndroid::~HTTPRequestInternalAndroid(this);
}


JVMAttacher *__fastcall HTTPRequestInternalAndroid::abort(HTTPRequestInternalAndroid *this)
{
  HTTPRequestInternalAndroid *v1; // r5@1
  JVMAttacher *v2; // r0@1
  int v3; // r4@1
  int v4; // r3@1
  char v6; // [sp+4h] [bp-1Ch]@1

  v1 = this;
  v2 = (JVMAttacher *)JVMAttacher::JVMAttacher((int)&v6, HTTPRequestInternalAndroid::mVM);
  v3 = JVMAttacher::getEnv(v2);
  _JNIEnv::CallVoidMethod(v3, *((_DWORD *)v1 + 1), HTTPRequestInternalAndroid::mJNIAbortRequestMethod, v4);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 60))(v3) )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 64))(v3);
  return JVMAttacher::~JVMAttacher((JVMAttacher *)&v6);
}
