

int __fastcall ConnectionRequest::getDefaultInputMode(ConnectionRequest *this)
{
  ConnectionRequest *v1; // r4@1
  int v2; // r0@1
  bool v3; // zf@1
  int v4; // r5@6
  void *v5; // r0@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  int v9; // [sp+4h] [bp-3Ch]@1
  char v10; // [sp+8h] [bp-38h]@4
  char v11; // [sp+20h] [bp-20h]@4

  v1 = this;
  sub_21E94B4((void **)&v9, "DefaultInputMode");
  v2 = *((_DWORD *)v1 + 1);
  v3 = v2 == 0;
  if ( v2 )
  {
    v1 = (ConnectionRequest *)*((_DWORD *)v1 + 2);
    v3 = v1 == 0;
  }
  if ( v3 )
    Json::Value::Value(&v10, 0);
  else
    Json::Value::Value((Json::Value *)&v11, (const char *)&unk_257BC67);
    Json::Value::get((Json::Value *)&v10, (const char *)v1 + 32, (const Json::Value **)&v9, (const Json::Value *)&v11);
    Json::Value::~Value((Json::Value *)&v11);
  v4 = Json::Value::asInt((Json::Value *)&v10, 0);
  Json::Value::~Value((Json::Value *)&v10);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v4;
}


void __fastcall ConnectionRequest::create(int a1, const PrivateKeyManager *a2, UnverifiedCertificate *a3, const char **a4, __int64 a5, const char **a6, __int64 *a7, __int64 *a8, const char **a9, const unsigned __int8 **a10, int a11, int a12, int a13, const char **a14, int a15, const char **a16, int a17, const char **a18)
{
  int v18; // r8@1
  const PrivateKeyManager *v19; // r9@1
  const char **v20; // r6@1
  int v21; // r7@1
  int v22; // r6@1
  int v23; // r1@1
  int v24; // r6@1
  int v25; // r6@1
  __int64 v26; // kr00_8@1
  int v27; // r7@2
  int *v28; // r0@2
  char *v29; // r1@2
  int v30; // r2@2
  char v31; // r3@3
  int v32; // r5@3
  void *v33; // r0@7
  char *v34; // r0@8
  int v35; // r6@9
  __int64 v36; // kr08_8@9
  int v37; // r7@10
  int *v38; // r0@10
  char *v39; // r1@10
  int v40; // r2@10
  char v41; // r3@11
  int v42; // r5@11
  void *v43; // r0@15
  char *v44; // r0@16
  int v45; // r6@17
  int v46; // r6@17
  void *v47; // r0@17
  int v48; // r6@19
  int v49; // r6@19
  int v50; // r6@19
  int v51; // r6@20
  void *v52; // r0@20
  int v53; // r6@21
  AppPlatform **v54; // r0@23
  char *v55; // r1@24
  int v56; // r6@27
  void *v57; // r0@29
  int v58; // r1@30
  int v59; // r6@33
  void *v60; // r0@35
  int v61; // r1@36
  int v62; // r6@39
  int v63; // r6@39
  int v64; // r6@39
  int v65; // r6@39
  int v66; // r7@40
  WebToken *v67; // r0@42
  WebToken *v68; // r0@44
  void *v69; // r0@45
  unsigned int *v70; // r2@47
  signed int v71; // r1@49
  unsigned int *v72; // r2@51
  signed int v73; // r1@53
  unsigned int *v74; // r2@55
  signed int v75; // r1@57
  unsigned int *v76; // r2@59
  signed int v77; // r1@61
  unsigned int *v78; // r2@63
  signed int v79; // r1@65
  unsigned int *v80; // r2@67
  signed int v81; // r1@69
  unsigned int *v82; // r2@71
  signed int v83; // r1@73
  __int64 v84; // [sp+0h] [bp-1A0h]@41
  char v85; // [sp+8h] [bp-198h]@40
  char v86; // [sp+18h] [bp-188h]@39
  char v87; // [sp+28h] [bp-178h]@39
  char v88; // [sp+38h] [bp-168h]@39
  char v89; // [sp+48h] [bp-158h]@39
  char v90; // [sp+58h] [bp-148h]@39
  char v91; // [sp+68h] [bp-138h]@33
  char v92; // [sp+78h] [bp-128h]@27
  int v93; // [sp+8Ch] [bp-114h]@20
  char v94; // [sp+90h] [bp-110h]@20
  char v95; // [sp+A0h] [bp-100h]@19
  char v96; // [sp+B0h] [bp-F0h]@19
  char v97; // [sp+C0h] [bp-E0h]@19
  int v98; // [sp+D4h] [bp-CCh]@17
  char v99; // [sp+D8h] [bp-C8h]@17
  char v100; // [sp+E8h] [bp-B8h]@17
  char *v101; // [sp+100h] [bp-A0h]@15
  int v102; // [sp+104h] [bp-9Ch]@15
  char v103; // [sp+108h] [bp-98h]@15
  char *v104; // [sp+120h] [bp-80h]@7
  int v105; // [sp+124h] [bp-7Ch]@7
  char v106; // [sp+128h] [bp-78h]@7
  char v107; // [sp+138h] [bp-68h]@1
  char v108; // [sp+148h] [bp-58h]@1
  char v109; // [sp+158h] [bp-48h]@1
  char v110; // [sp+168h] [bp-38h]@1
  int v111; // [sp+17Ch] [bp-24h]@1

  v18 = a1;
  v19 = a2;
  v20 = a4;
  Certificate::toString((Certificate *)&v111, a3);
  Json::Value::Value(&v110, 0);
  v21 = Json::Value::operator[]((Json::Value *)&v110, "ServerAddress");
  Json::Value::Value((int)&v109, v20);
  Json::Value::operator=(v21, (const Json::Value *)&v109);
  Json::Value::~Value((Json::Value *)&v109);
  v22 = Json::Value::operator[]((Json::Value *)&v110, "ClientRandomId");
  Json::Value::Value((Json::Value *)&v108, v23, a5);
  Json::Value::operator=(v22, (const Json::Value *)&v108);
  Json::Value::~Value((Json::Value *)&v108);
  v24 = Json::Value::operator[]((Json::Value *)&v110, "SkinId");
  Json::Value::Value((int)&v107, a6);
  Json::Value::operator=(v24, (const Json::Value *)&v107);
  Json::Value::~Value((Json::Value *)&v107);
  v25 = Json::Value::operator[]((Json::Value *)&v110, "SkinData");
  v26 = *a7;
  if ( (_DWORD)v26 == HIDWORD(v26) )
  {
    v29 = (char *)&unk_28898CC;
  }
  else
    v27 = HIDWORD(v26) - v26;
    v28 = sub_21E7E80(HIDWORD(v26) - v26, 0);
    v29 = (char *)(v28 + 3);
    v30 = 0;
    do
    {
      v31 = *(_BYTE *)(v26 + v30);
      v32 = HIDWORD(v26) + v30++;
      *(_BYTE *)(v32 + 12) = v31;
    }
    while ( v27 != v30 );
    if ( v28 != &dword_28898C0 )
      v28[2] = 0;
      *v28 = v27;
      v29[v27] = byte_26C67B8[0];
  v104 = v29;
  Util::base64_encode((Util *)&v105, (const unsigned __int8 **)&v104, 1);
  Json::Value::Value((int)&v106, (const char **)&v105);
  Json::Value::operator=(v25, (const Json::Value *)&v106);
  Json::Value::~Value((Json::Value *)&v106);
  v33 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v105 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
    else
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = v104 - 12;
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v104 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  v35 = Json::Value::operator[]((Json::Value *)&v110, "CapeData");
  v36 = *a8;
  if ( (_DWORD)v36 == HIDWORD(v36) )
    v39 = (char *)&unk_28898CC;
    v37 = HIDWORD(v36) - v36;
    v38 = sub_21E7E80(HIDWORD(v36) - v36, 0);
    v39 = (char *)(v38 + 3);
    v40 = 0;
      v41 = *(_BYTE *)(v36 + v40);
      v42 = HIDWORD(v36) + v40++;
      *(_BYTE *)(v42 + 12) = v41;
    while ( v37 != v40 );
    if ( v38 != &dword_28898C0 )
      v38[2] = 0;
      *v38 = v37;
      v39[v37] = byte_26C67B8[0];
  v101 = v39;
  Util::base64_encode((Util *)&v102, (const unsigned __int8 **)&v101, 1);
  Json::Value::Value((int)&v103, (const char **)&v102);
  Json::Value::operator=(v35, (const Json::Value *)&v103);
  Json::Value::~Value((Json::Value *)&v103);
  v43 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v102 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  v44 = v101 - 12;
  if ( (int *)(v101 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v101 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  v45 = Json::Value::operator[]((Json::Value *)&v110, "SkinGeometryName");
  Json::Value::Value((int)&v100, a9);
  Json::Value::operator=(v45, (const Json::Value *)&v100);
  Json::Value::~Value((Json::Value *)&v100);
  v46 = Json::Value::operator[]((Json::Value *)&v110, "SkinGeometry");
  Util::base64_encode((Util *)&v98, a10, 1);
  Json::Value::Value((int)&v99, (const char **)&v98);
  Json::Value::operator=(v46, (const Json::Value *)&v99);
  Json::Value::~Value((Json::Value *)&v99);
  v47 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v98 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  if ( a15 == 1 )
    v48 = Json::Value::operator[]((Json::Value *)&v110, "IsEduMode");
    Json::Value::Value((Json::Value *)&v97, 1);
    Json::Value::operator=(v48, (const Json::Value *)&v97);
    Json::Value::~Value((Json::Value *)&v97);
    v49 = Json::Value::operator[]((Json::Value *)&v110, "TenantId");
    Json::Value::Value((int)&v96, a16);
    Json::Value::operator=(v49, (const Json::Value *)&v96);
    Json::Value::~Value((Json::Value *)&v96);
    v50 = Json::Value::operator[]((Json::Value *)&v110, "ADRole");
    Json::Value::Value((Json::Value *)&v95, a17);
    Json::Value::operator=(v50, (const Json::Value *)&v95);
    Json::Value::~Value((Json::Value *)&v95);
  v51 = Json::Value::operator[]((Json::Value *)&v110, "GameVersion");
  Common::getGameVersionStringNet((Common *)&v93);
  Json::Value::Value((int)&v94, (const char **)&v93);
  Json::Value::operator=(v51, (const Json::Value *)&v94);
  Json::Value::~Value((Json::Value *)&v94);
  v52 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v93 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
  v53 = Json::Value::operator[]((Json::Value *)&v110, "DeviceModel");
  if ( ServiceLocator<AppPlatform>::mDefaultService )
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v54 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v54 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
    v55 = AppPlatform::getHardwareInformation(*v54);
    v55 = (char *)&Util::EMPTY_STRING;
  Json::Value::Value((int)&v92, (const char **)v55);
  Json::Value::operator=(v53, (const Json::Value *)&v92);
  Json::Value::~Value((Json::Value *)&v92);
  v56 = Json::Value::operator[]((Json::Value *)&v110, "DeviceOS");
      v57 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v57 = &ServiceLocator<AppPlatform>::mDefaultService;
    v58 = (*(int (**)(void))(**(_DWORD **)v57 + 440))();
    v58 = -1;
  Json::Value::Value((Json::Value *)&v91, v58);
  Json::Value::operator=(v56, (const Json::Value *)&v91);
  Json::Value::~Value((Json::Value *)&v91);
  v59 = Json::Value::operator[]((Json::Value *)&v110, "DefaultInputMode");
      v60 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v60 = &ServiceLocator<AppPlatform>::mDefaultService;
    v61 = (*(int (**)(void))(**(_DWORD **)v60 + 592))();
    v61 = 0;
  Json::Value::Value((Json::Value *)&v90, v61);
  Json::Value::operator=(v59, (const Json::Value *)&v90);
  Json::Value::~Value((Json::Value *)&v90);
  v62 = Json::Value::operator[]((Json::Value *)&v110, "CurrentInputMode");
  Json::Value::Value((Json::Value *)&v89, a11);
  Json::Value::operator=(v62, (const Json::Value *)&v89);
  Json::Value::~Value((Json::Value *)&v89);
  v63 = Json::Value::operator[]((Json::Value *)&v110, "UIProfile");
  Json::Value::Value((Json::Value *)&v88, a12);
  Json::Value::operator=(v63, (const Json::Value *)&v88);
  Json::Value::~Value((Json::Value *)&v88);
  v64 = Json::Value::operator[]((Json::Value *)&v110, "GuiScale");
  Json::Value::Value((Json::Value *)&v87, a13);
  Json::Value::operator=(v64, (const Json::Value *)&v87);
  Json::Value::~Value((Json::Value *)&v87);
  v65 = Json::Value::operator[]((Json::Value *)&v110, "LanguageCode");
  Json::Value::Value((int)&v86, a14);
  Json::Value::operator=(v65, (const Json::Value *)&v86);
  Json::Value::~Value((Json::Value *)&v86);
  if ( *((_DWORD *)*a18 - 3) )
    v66 = Json::Value::operator[]((Json::Value *)&v110, "PlatformUserId");
    Json::Value::Value((int)&v85, a18);
    Json::Value::operator=(v66, (const Json::Value *)&v85);
    Json::Value::~Value((Json::Value *)&v85);
  WebToken::createFromData((WebToken *)((char *)&v84 + 4), (const Json::Value *)&v110, v19);
  v84 = HIDWORD(v84);
  ConnectionRequest::ConnectionRequest(v18, (int *)&v84, &v111);
  if ( (_DWORD)v84 )
    v67 = WebToken::~WebToken((WebToken *)v84);
    operator delete((void *)v67);
  LODWORD(v84) = 0;
  if ( HIDWORD(v84) )
    v68 = WebToken::~WebToken((WebToken *)HIDWORD(v84));
    operator delete((void *)v68);
  Json::Value::~Value((Json::Value *)&v110);
  v69 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v111 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v69);
}


void __fastcall ConnectionRequest::toString(ConnectionRequest *this, UnverifiedCertificate **a2)
{
  UnverifiedCertificate **v2; // r5@1
  UnverifiedCertificate *v3; // r1@1
  void *v4; // r0@2
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int *v7; // r1@8
  void (__fastcall *v8)(void ***, int *); // r5@8
  void *v9; // r0@9
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  int v12; // [sp+4h] [bp-2Ch]@14
  int v13; // [sp+8h] [bp-28h]@9
  int v14; // [sp+Ch] [bp-24h]@7
  int v15; // [sp+10h] [bp-20h]@2
  void **v16; // [sp+14h] [bp-1Ch]@1
  ConnectionRequest *v17; // [sp+18h] [bp-18h]@1

  v2 = a2;
  *(_DWORD *)this = &unk_28898CC;
  v16 = &off_26E91F0;
  v17 = this;
  v3 = *a2;
  if ( v3 )
  {
    UnverifiedCertificate::toString((UnverifiedCertificate *)&v15, v3);
    BytesDataOutput::writeLongString((int)&v16, &v15);
    v4 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) == &dword_28898C0 )
      goto LABEL_8;
    v5 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
      goto LABEL_21;
    }
LABEL_20:
    v6 = (*v5)--;
    goto LABEL_21;
  }
  Certificate::toString((Certificate *)&v14, v2[1]);
  BytesDataOutput::writeLongString((int)&v16, &v14);
  v4 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) == &dword_28898C0 )
    goto LABEL_8;
  v5 = (unsigned int *)(v14 - 4);
  if ( !&pthread_create )
    goto LABEL_20;
  __dmb();
  do
    v6 = __ldrex(v5);
  while ( __strex(v6 - 1, v5) );
LABEL_21:
  if ( v6 <= 0 )
    j_j_j_j__ZdlPv_9(v4);
LABEL_8:
  v7 = (int *)v2[2];
  v8 = (void (__fastcall *)(void ***, int *))v16[3];
  if ( v7 )
    WebToken::toString((WebToken *)&v13, v7);
    v8(&v16, &v13);
    v9 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) == &dword_28898C0 )
      return;
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      goto LABEL_29;
  else
    sub_21E94B4((void **)&v12, (const char *)&unk_257BC67);
    v8(&v16, &v12);
    v9 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) == &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
  v11 = (*v10)--;
LABEL_29:
  if ( v11 <= 0 )
    j_j_j_j__ZdlPv_9(v9);
}


void __fastcall ConnectionRequest::getClientPlatformId(ConnectionRequest *this, int a2)
{
  ConnectionRequest::getClientPlatformId(this, a2);
}


int __fastcall ConnectionRequest::getCurrentInputMode(ConnectionRequest *this)
{
  ConnectionRequest *v1; // r4@1
  int v2; // r0@1
  bool v3; // zf@1
  int v4; // r5@6
  void *v5; // r0@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  int v9; // [sp+4h] [bp-3Ch]@1
  char v10; // [sp+8h] [bp-38h]@4
  char v11; // [sp+20h] [bp-20h]@4

  v1 = this;
  sub_21E94B4((void **)&v9, "CurrentInputMode");
  v2 = *((_DWORD *)v1 + 1);
  v3 = v2 == 0;
  if ( v2 )
  {
    v1 = (ConnectionRequest *)*((_DWORD *)v1 + 2);
    v3 = v1 == 0;
  }
  if ( v3 )
    Json::Value::Value(&v10, 0);
  else
    Json::Value::Value((Json::Value *)&v11, (const char *)&unk_257BC67);
    Json::Value::get((Json::Value *)&v10, (const char *)v1 + 32, (const Json::Value **)&v9, (const Json::Value *)&v11);
    Json::Value::~Value((Json::Value *)&v11);
  v4 = Json::Value::asInt((Json::Value *)&v10, 0);
  Json::Value::~Value((Json::Value *)&v10);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v4;
}


void __fastcall ConnectionRequest::getCapeData(ConnectionRequest *this, int a2)
{
  ConnectionRequest::getCapeData(this, a2);
}


int __fastcall ConnectionRequest::verify(int a1, __int64 *a2, unsigned int a3, unsigned int a4)
{
  int v4; // r8@1
  unsigned int v5; // r9@1
  int v6; // r7@1
  unsigned int v7; // r10@1
  __int64 *v8; // r5@1
  int v9; // r1@2
  int v10; // r5@6
  char *v11; // r0@6
  int v12; // r0@6
  int v13; // r4@6
  char *v14; // r5@6 OVERLAPPED
  char *v15; // r6@6 OVERLAPPED
  char *v16; // r1@7
  unsigned int *v17; // r2@8
  signed int v18; // r7@10
  char *v19; // r7@14
  int *v20; // r0@15
  void *v21; // r0@20
  Certificate *v22; // r0@22
  int v23; // r0@23
  int v24; // r5@25
  int v25; // r1@26
  int result; // r0@31
  unsigned int *v27; // r2@33
  signed int v28; // r1@35
  unsigned __int64 v29; // [sp+4h] [bp-4Ch]@7
  Certificate *v30; // [sp+Ch] [bp-44h]@22
  int v31; // [sp+10h] [bp-40h]@25
  int v32; // [sp+14h] [bp-3Ch]@6
  char *v33; // [sp+18h] [bp-38h]@6
  char *v34; // [sp+1Ch] [bp-34h]@6
  char *v35; // [sp+20h] [bp-30h]@6
  Certificate *v36; // [sp+24h] [bp-2Ch]@5
  char v37; // [sp+28h] [bp-28h]@7

  v4 = a1;
  v5 = a4;
  v6 = *(_DWORD *)(a1 + 4);
  v7 = a3;
  v8 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  if ( v6 )
  {
    std::unique_ptr<Certificate,std::default_delete<Certificate>>::~unique_ptr(v6 + 64);
    v9 = *(_DWORD *)(v6 + 56);
    if ( v9 )
      std::default_delete<UnverifiedCertificate>::operator()(v6 + 56, v9);
    *(_DWORD *)(v6 + 56) = 0;
    WebToken::~WebToken((WebToken *)v6);
    operator delete((void *)v6);
  }
  UnverifiedCertificate::verify((int)&v36, *(_DWORD *)v4, v8);
  if ( v36 )
    v10 = *(_DWORD *)(v4 + 8);
    Certificate::getIdentityPublicKey((Certificate *)&v32, (int)v36);
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v11 = (char *)operator new(4u);
    v33 = v11;
    v35 = v11 + 4;
    v34 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v32,
                    (int)&v33,
                    (int)v11);
    v12 = WebToken::verify(v10, (__int64 *)&v33);
    v13 = v12;
    *(_QWORD *)&v14 = *(_QWORD *)&v33;
    if ( v33 != v34 )
    {
      v16 = &v37;
      v29 = __PAIR__(v7, v12);
      do
      {
        v20 = (int *)(*(_DWORD *)v14 - 12);
        if ( v20 != &dword_28898C0 )
        {
          v17 = (unsigned int *)(*(_DWORD *)v14 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
          }
          else
            v18 = (*v17)--;
          if ( v18 <= 0 )
            v19 = v16;
            j_j_j_j__ZdlPv_9(v20);
            v16 = v19;
        }
        v14 += 4;
      }
      while ( v14 != v15 );
      v14 = v33;
      v7 = HIDWORD(v29);
      v13 = v29;
    }
    if ( v14 )
      operator delete(v14);
    v21 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v32 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
      else
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    if ( v13 == 1 )
      v22 = v36;
      v36 = 0;
      v30 = v22;
      if ( Certificate::validate(v22, 0, __PAIR__(v5, v7)) == 1 )
        v23 = (int)v30;
        v30 = 0;
        v23 = 0;
      v31 = 0;
      v24 = *(_DWORD *)(v4 + 4);
      *(_DWORD *)(v4 + 4) = v23;
      if ( v24 )
        std::unique_ptr<Certificate,std::default_delete<Certificate>>::~unique_ptr(v24 + 64);
        v25 = *(_DWORD *)(v24 + 56);
        if ( v25 )
          std::default_delete<UnverifiedCertificate>::operator()(v24 + 56, v25);
        *(_DWORD *)(v24 + 56) = 0;
        WebToken::~WebToken((WebToken *)v24);
        operator delete((void *)v24);
      std::unique_ptr<Certificate,std::default_delete<Certificate>>::~unique_ptr((int)&v31);
      std::unique_ptr<Certificate,std::default_delete<Certificate>>::~unique_ptr((int)&v30);
  std::unique_ptr<Certificate,std::default_delete<Certificate>>::~unique_ptr((int)&v36);
  if ( *(_DWORD *)(v4 + 4) )
    result = *(_DWORD *)(v4 + 8) != 0;
  else
    result = 0;
  return result;
}


int __fastcall ConnectionRequest::getClientRandomId(ConnectionRequest *this)
{
  ConnectionRequest *v1; // r4@1
  int v2; // r0@1
  bool v3; // zf@1
  int v4; // r1@4
  int v5; // r6@6
  void *v6; // r0@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  int v10; // [sp+4h] [bp-3Ch]@1
  char v11; // [sp+8h] [bp-38h]@4
  char v12; // [sp+20h] [bp-20h]@4

  v1 = this;
  sub_21E94B4((void **)&v10, "ClientRandomId");
  v2 = *((_DWORD *)v1 + 1);
  v3 = v2 == 0;
  if ( v2 )
  {
    v1 = (ConnectionRequest *)*((_DWORD *)v1 + 2);
    v3 = v1 == 0;
  }
  if ( v3 )
    Json::Value::Value(&v11, 0);
  else
    Json::Value::Value((Json::Value *)&v12, (const char *)&unk_257BC67);
    Json::Value::get((Json::Value *)&v11, (const char *)v1 + 32, (const Json::Value **)&v10, (const Json::Value *)&v12);
    Json::Value::~Value((Json::Value *)&v12);
  v5 = Json::Value::asUInt64((Json::Value *)&v11, v4, 0LL);
  Json::Value::~Value((Json::Value *)&v11);
  v6 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
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
      j_j_j_j__ZdlPv_9(v6);
  return v5;
}


int **__fastcall ConnectionRequest::ConnectionRequest(int **a1, int **a2)
{
  int **v2; // r6@1
  int **v3; // r4@1
  int *v4; // r7@1
  int *v5; // r5@2
  int *v6; // r7@4
  int **v7; // r8@4
  int *v8; // r5@5
  int *v9; // r6@7
  int *v10; // r5@8

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( *a2 )
  {
    v5 = (int *)operator new(0x40u);
    UnverifiedCertificate::UnverifiedCertificate(v5, v4);
    *v3 = v5;
  }
  else
    *a1 = 0;
  v6 = v2[1];
  v7 = v3 + 1;
  if ( v6 )
    v8 = (int *)operator new(0x48u);
    Certificate::Certificate(v8, v6);
    *v7 = v8;
    *v7 = 0;
  v9 = v2[2];
  if ( v9 )
    v10 = (int *)operator new(0x38u);
    WebToken::WebToken(v10, v9);
    v3[2] = v10;
    v3[2] = 0;
  *((_BYTE *)v3 + 12) = 0;
  return v3;
}


void __fastcall ConnectionRequest::getSkinData(ConnectionRequest *this, int a2)
{
  ConnectionRequest::getSkinData(this, a2);
}


void __fastcall ConnectionRequest::getSkinGeometryName(ConnectionRequest *this, int a2)
{
  ConnectionRequest::getSkinGeometryName(this, a2);
}


void __fastcall ConnectionRequest::getSkinId(ConnectionRequest *this, int a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int v4; // r0@1
  bool v5; // zf@1
  void *v6; // r0@6
  void *v7; // r0@7
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  int v12; // [sp+4h] [bp-44h]@6
  int v13; // [sp+Ch] [bp-3Ch]@1
  char v14; // [sp+10h] [bp-38h]@4
  char v15; // [sp+20h] [bp-28h]@4

  v2 = a2;
  v3 = (int *)this;
  sub_21E94B4((void **)&v13, "SkinId");
  v4 = *(_DWORD *)(v2 + 4);
  v5 = v4 == 0;
  if ( v4 )
  {
    v2 = *(_DWORD *)(v2 + 8);
    v5 = v2 == 0;
  }
  if ( v5 )
    Json::Value::Value(&v14, 0);
  else
    Json::Value::Value((Json::Value *)&v15, (const char *)&unk_257BC67);
    Json::Value::get(
      (Json::Value *)&v14,
      (const char *)(v2 + 32),
      (const Json::Value **)&v13,
      (const Json::Value *)&v15);
    Json::Value::~Value((Json::Value *)&v15);
  sub_21E94B4((void **)&v12, (const char *)&unk_257BC67);
  Json::Value::asString(v3, (int)&v14, &v12);
  v6 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  Json::Value::~Value((Json::Value *)&v14);
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


void __fastcall ConnectionRequest::getSkinGeometry(ConnectionRequest *this, int a2)
{
  int v2; // r5@1
  const void **v3; // r4@1
  int v4; // r0@1
  bool v5; // zf@1
  void *v6; // r0@6
  void *v7; // r0@7
  void *v8; // r0@8
  unsigned int *v9; // r2@10
  signed int v10; // r1@12
  unsigned int *v11; // r2@14
  signed int v12; // r1@16
  unsigned int *v13; // r2@18
  signed int v14; // r1@20
  int v15; // [sp+4h] [bp-4Ch]@6
  int v16; // [sp+Ch] [bp-44h]@1
  char v17; // [sp+10h] [bp-40h]@4
  int v18; // [sp+24h] [bp-2Ch]@6
  char v19; // [sp+28h] [bp-28h]@4

  v2 = a2;
  v3 = (const void **)this;
  sub_21E94B4((void **)&v16, "SkinGeometry");
  v4 = *(_DWORD *)(v2 + 4);
  v5 = v4 == 0;
  if ( v4 )
  {
    v2 = *(_DWORD *)(v2 + 8);
    v5 = v2 == 0;
  }
  if ( v5 )
    Json::Value::Value(&v17, 0);
  else
    Json::Value::Value((Json::Value *)&v19, (const char *)&unk_257BC67);
    Json::Value::get(
      (Json::Value *)&v17,
      (const char *)(v2 + 32),
      (const Json::Value **)&v16,
      (const Json::Value *)&v19);
    Json::Value::~Value((Json::Value *)&v19);
  sub_21E94B4((void **)&v15, (const char *)&unk_257BC67);
  Json::Value::asString(&v18, (int)&v17, &v15);
  Util::base64_decode(v3, &v18);
  v6 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v15 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  Json::Value::~Value((Json::Value *)&v17);
  v8 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v16 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


void __fastcall ConnectionRequest::getClientPlatformId(ConnectionRequest *this, int a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int v4; // r0@1
  bool v5; // zf@1
  void *v6; // r0@6
  void *v7; // r0@7
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  int v12; // [sp+4h] [bp-44h]@6
  int v13; // [sp+Ch] [bp-3Ch]@1
  char v14; // [sp+10h] [bp-38h]@4
  char v15; // [sp+20h] [bp-28h]@4

  v2 = a2;
  v3 = (int *)this;
  sub_21E94B4((void **)&v13, "PlatformUserId");
  v4 = *(_DWORD *)(v2 + 4);
  v5 = v4 == 0;
  if ( v4 )
  {
    v2 = *(_DWORD *)(v2 + 8);
    v5 = v2 == 0;
  }
  if ( v5 )
    Json::Value::Value(&v14, 0);
  else
    Json::Value::Value((Json::Value *)&v15, (const char *)&unk_257BC67);
    Json::Value::get(
      (Json::Value *)&v14,
      (const char *)(v2 + 32),
      (const Json::Value **)&v13,
      (const Json::Value *)&v15);
    Json::Value::~Value((Json::Value *)&v15);
  sub_21E94B4((void **)&v12, (const char *)&unk_257BC67);
  Json::Value::asString(v3, (int)&v14, &v12);
  v6 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  Json::Value::~Value((Json::Value *)&v14);
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


void __fastcall ConnectionRequest::getGameVersionString(ConnectionRequest *this, int a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int v4; // r0@1
  bool v5; // zf@1
  void *v6; // r0@6
  void *v7; // r0@7
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  int v12; // [sp+4h] [bp-44h]@6
  int v13; // [sp+Ch] [bp-3Ch]@1
  char v14; // [sp+10h] [bp-38h]@4
  char v15; // [sp+20h] [bp-28h]@4

  v2 = a2;
  v3 = (int *)this;
  sub_21E94B4((void **)&v13, "GameVersion");
  v4 = *(_DWORD *)(v2 + 4);
  v5 = v4 == 0;
  if ( v4 )
  {
    v2 = *(_DWORD *)(v2 + 8);
    v5 = v2 == 0;
  }
  if ( v5 )
    Json::Value::Value(&v14, 0);
  else
    Json::Value::Value((Json::Value *)&v15, (const char *)&unk_257BC67);
    Json::Value::get(
      (Json::Value *)&v14,
      (const char *)(v2 + 32),
      (const Json::Value **)&v13,
      (const Json::Value *)&v15);
    Json::Value::~Value((Json::Value *)&v15);
  sub_21E94B4((void **)&v12, (const char *)&unk_257BC67);
  Json::Value::asString(v3, (int)&v14, &v12);
  v6 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  Json::Value::~Value((Json::Value *)&v14);
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


void __fastcall ConnectionRequest::getCapeData(ConnectionRequest *this, int a2)
{
  int v2; // r5@1
  ConnectionRequest *v3; // r4@1
  int v4; // r0@1
  bool v5; // zf@1
  void *v6; // r0@6
  void *v7; // r0@7
  void *v8; // r0@8
  char *v9; // r6@9
  _BYTE *v10; // r0@9
  signed int v11; // r5@9
  int v12; // r1@12
  char v13; // t1@13
  int v14; // r1@14
  void *v15; // r0@14
  unsigned int *v16; // r2@16
  signed int v17; // r1@18
  unsigned int *v18; // r2@20
  signed int v19; // r1@22
  unsigned int *v20; // r2@24
  signed int v21; // r1@26
  unsigned int *v22; // r2@28
  signed int v23; // r1@30
  int v24; // [sp+4h] [bp-4Ch]@6
  int v25; // [sp+Ch] [bp-44h]@1
  char v26; // [sp+10h] [bp-40h]@4
  int v27; // [sp+20h] [bp-30h]@6
  char *v28; // [sp+24h] [bp-2Ch]@6
  char v29; // [sp+28h] [bp-28h]@4

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v25, "CapeData");
  v4 = *(_DWORD *)(v2 + 4);
  v5 = v4 == 0;
  if ( v4 )
  {
    v2 = *(_DWORD *)(v2 + 8);
    v5 = v2 == 0;
  }
  if ( v5 )
    Json::Value::Value(&v26, 0);
  else
    Json::Value::Value((Json::Value *)&v29, (const char *)&unk_257BC67);
    Json::Value::get(
      (Json::Value *)&v26,
      (const char *)(v2 + 32),
      (const Json::Value **)&v25,
      (const Json::Value *)&v29);
    Json::Value::~Value((Json::Value *)&v29);
  sub_21E94B4((void **)&v24, (const char *)&unk_257BC67);
  Json::Value::asString(&v27, (int)&v26, &v24);
  Util::base64_decode((const void **)&v28, &v27);
  v6 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v27 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v24 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  Json::Value::~Value((Json::Value *)&v26);
  v8 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v25 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = v28;
  v10 = 0;
  v11 = *((_DWORD *)v28 - 3);
  *(_DWORD *)v3 = 0;
  *((_DWORD *)v3 + 1) = 0;
  *((_DWORD *)v3 + 2) = 0;
  if ( v11 )
    v10 = operator new(v11);
    *(_DWORD *)v3 = v10;
    *((_DWORD *)v3 + 2) = &v10[v11];
    if ( v11 >= 1 )
      v12 = &v9[v11 + 1] - v9;
      {
        v13 = *v9++;
        --v12;
        *v10++ = v13;
      }
      while ( v12 > 1 );
    *(_DWORD *)v3 = 0;
    *((_DWORD *)v3 + 2) = 0;
  v14 = (int)v28;
  *((_DWORD *)v3 + 1) = v10;
  v15 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v14 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
}


int *__fastcall ConnectionRequest::ConnectionRequest(int a1, int *a2, int *a3)
{
  int *v3; // r4@1
  int v4; // r5@1
  int v5; // r3@1
  int *v6; // r7@1
  int v7; // r1@1
  int v9; // [sp+0h] [bp-58h]@1
  int v10; // [sp+38h] [bp-20h]@3

  v3 = (int *)a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v4 = a1 + 4;
  v5 = *a2;
  *a2 = 0;
  *(_DWORD *)(v4 + 4) = v5;
  *(_BYTE *)(v4 + 8) = 0;
  UnverifiedCertificate::fromString((int)&v9, a3);
  v6 = (int *)operator new(0x40u);
  UnverifiedCertificate::UnverifiedCertificate(v6, &v9);
  v7 = *v3;
  *v3 = (int)v6;
  if ( v7 )
    std::default_delete<UnverifiedCertificate>::operator()((int)v3, v7);
  if ( v10 )
    std::default_delete<UnverifiedCertificate>::operator()((int)&v10, v10);
  v10 = 0;
  WebToken::~WebToken((WebToken *)&v9);
  return v3;
}


void *__fastcall ConnectionRequest::getData(Json::Value *a1, int a2, const Json::Value **a3)
{
  int v3; // r7@0
  Json::Value *v4; // r5@1
  int v5; // r0@1
  const Json::Value **v6; // r4@1
  bool v7; // zf@1
  void *result; // r0@4
  int v9; // [sp+0h] [bp-28h]@4

  v4 = a1;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = a3;
  v7 = v5 == 0;
  if ( v5 )
  {
    v3 = *(_DWORD *)(a2 + 8);
    v7 = v3 == 0;
  }
  if ( v7 )
    result = Json::Value::Value(v4, 0);
  else
    Json::Value::Value((Json::Value *)&v9, (const char *)&unk_257BC67);
    Json::Value::get(v4, (const char *)(v3 + 32), v6, (const Json::Value *)&v9);
    result = (void *)Json::Value::~Value((Json::Value *)&v9);
  return result;
}


signed int __fastcall ConnectionRequest::isEduMode(ConnectionRequest *this)
{
  ConnectionRequest *v1; // r4@1
  int v2; // r0@1
  bool v3; // zf@1
  signed int v4; // r5@6
  void *v5; // r0@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  int v9; // [sp+4h] [bp-3Ch]@1
  char v10; // [sp+8h] [bp-38h]@4
  char v11; // [sp+20h] [bp-20h]@4

  v1 = this;
  sub_21E94B4((void **)&v9, "IsEduMode");
  v2 = *((_DWORD *)v1 + 1);
  v3 = v2 == 0;
  if ( v2 )
  {
    v1 = (ConnectionRequest *)*((_DWORD *)v1 + 2);
    v3 = v1 == 0;
  }
  if ( v3 )
    Json::Value::Value(&v10, 0);
  else
    Json::Value::Value((Json::Value *)&v11, (const char *)&unk_257BC67);
    Json::Value::get((Json::Value *)&v10, (const char *)v1 + 32, (const Json::Value **)&v9, (const Json::Value *)&v11);
    Json::Value::~Value((Json::Value *)&v11);
  v4 = Json::Value::asBool((Json::Value *)&v10, 0);
  Json::Value::~Value((Json::Value *)&v10);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v4;
}


Certificate *__fastcall ConnectionRequest::validate(Certificate **a1, int a2, Certificate **a3, int a4, __int64 a5)
{
  Certificate **v5; // r5@1
  Certificate **v6; // r4@1
  Certificate *result; // r0@2

  v5 = a3;
  v6 = a1;
  if ( Certificate::validate(*a3, a2, a5) == 1 )
  {
    result = *v5;
    *v5 = 0;
    *v6 = result;
  }
  else
    result = 0;
    *v6 = 0;
  return result;
}


ConnectionRequest *__fastcall ConnectionRequest::~ConnectionRequest(ConnectionRequest *this)
{
  ConnectionRequest *v1; // r4@1
  WebToken *v2; // r0@1
  WebToken *v3; // r0@2
  ConnectionRequest *result; // r0@5

  v1 = this;
  v2 = (WebToken *)*((_DWORD *)this + 2);
  if ( v2 )
  {
    v3 = WebToken::~WebToken(v2);
    operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 2) = 0;
  std::unique_ptr<Certificate,std::default_delete<Certificate>>::~unique_ptr((int)v1 + 4);
  if ( *(_DWORD *)v1 )
    std::default_delete<UnverifiedCertificate>::operator()((int)v1, *(_DWORD *)v1);
  result = v1;
  *(_DWORD *)v1 = 0;
  return result;
}


void __fastcall ConnectionRequest::fromString(__int64 a1)
{
  ConnectionRequest::fromString(a1);
}


void __fastcall ConnectionRequest::getSkinGeometryName(ConnectionRequest *this, int a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int v4; // r0@1
  bool v5; // zf@1
  void *v6; // r0@6
  void *v7; // r0@7
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  int v12; // [sp+4h] [bp-44h]@6
  int v13; // [sp+Ch] [bp-3Ch]@1
  char v14; // [sp+10h] [bp-38h]@4
  char v15; // [sp+20h] [bp-28h]@4

  v2 = a2;
  v3 = (int *)this;
  sub_21E94B4((void **)&v13, "SkinGeometryName");
  v4 = *(_DWORD *)(v2 + 4);
  v5 = v4 == 0;
  if ( v4 )
  {
    v2 = *(_DWORD *)(v2 + 8);
    v5 = v2 == 0;
  }
  if ( v5 )
    Json::Value::Value(&v14, 0);
  else
    Json::Value::Value((Json::Value *)&v15, (const char *)&unk_257BC67);
    Json::Value::get(
      (Json::Value *)&v14,
      (const char *)(v2 + 32),
      (const Json::Value **)&v13,
      (const Json::Value *)&v15);
    Json::Value::~Value((Json::Value *)&v15);
  sub_21E94B4((void **)&v12, (const char *)&unk_257BC67);
  Json::Value::asString(v3, (int)&v14, &v12);
  v6 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  Json::Value::~Value((Json::Value *)&v14);
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


void __fastcall ConnectionRequest::getTenantId(ConnectionRequest *this, int a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int v4; // r0@1
  bool v5; // zf@1
  void *v6; // r0@6
  void *v7; // r0@7
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  int v12; // [sp+4h] [bp-44h]@6
  int v13; // [sp+Ch] [bp-3Ch]@1
  char v14; // [sp+10h] [bp-38h]@4
  char v15; // [sp+20h] [bp-28h]@4

  v2 = a2;
  v3 = (int *)this;
  sub_21E94B4((void **)&v13, "TenantId");
  v4 = *(_DWORD *)(v2 + 4);
  v5 = v4 == 0;
  if ( v4 )
  {
    v2 = *(_DWORD *)(v2 + 8);
    v5 = v2 == 0;
  }
  if ( v5 )
    Json::Value::Value(&v14, 0);
  else
    Json::Value::Value((Json::Value *)&v15, (const char *)&unk_257BC67);
    Json::Value::get(
      (Json::Value *)&v14,
      (const char *)(v2 + 32),
      (const Json::Value **)&v13,
      (const Json::Value *)&v15);
    Json::Value::~Value((Json::Value *)&v15);
  sub_21E94B4((void **)&v12, (const char *)&unk_257BC67);
  Json::Value::asString(v3, (int)&v14, &v12);
  v6 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  Json::Value::~Value((Json::Value *)&v14);
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


void __fastcall ConnectionRequest::getServerAddress(ConnectionRequest *this, int a2)
{
  ConnectionRequest::getServerAddress(this, a2);
}


int __fastcall ConnectionRequest::getADRole(ConnectionRequest *this)
{
  ConnectionRequest *v1; // r4@1
  int v2; // r0@1
  bool v3; // zf@1
  unsigned __int8 v4; // r5@6
  void *v5; // r0@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  int v9; // [sp+4h] [bp-3Ch]@1
  char v10; // [sp+8h] [bp-38h]@4
  char v11; // [sp+20h] [bp-20h]@4

  v1 = this;
  sub_21E94B4((void **)&v9, "ADRole");
  v2 = *((_DWORD *)v1 + 1);
  v3 = v2 == 0;
  if ( v2 )
  {
    v1 = (ConnectionRequest *)*((_DWORD *)v1 + 2);
    v3 = v1 == 0;
  }
  if ( v3 )
    Json::Value::Value(&v10, 0);
  else
    Json::Value::Value((Json::Value *)&v11, (const char *)&unk_257BC67);
    Json::Value::get((Json::Value *)&v10, (const char *)v1 + 32, (const Json::Value **)&v9, (const Json::Value *)&v11);
    Json::Value::~Value((Json::Value *)&v11);
  v4 = Json::Value::asInt((Json::Value *)&v10, 0);
  Json::Value::~Value((Json::Value *)&v10);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v4;
}


void __fastcall ConnectionRequest::getSkinId(ConnectionRequest *this, int a2)
{
  ConnectionRequest::getSkinId(this, a2);
}


Json::Value *__fastcall ConnectionRequest::getBinaryData(const void **a1, int a2, const Json::Value **a3)
{
  int v3; // r7@0
  const void **v4; // r4@1
  int v5; // r0@1
  const Json::Value **v6; // r5@1
  bool v7; // zf@1
  void *v8; // r0@6
  void *v9; // r0@7
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  int v15; // [sp+4h] [bp-44h]@6
  char v16; // [sp+8h] [bp-40h]@4
  int v17; // [sp+1Ch] [bp-2Ch]@6
  char v18; // [sp+20h] [bp-28h]@4

  v4 = a1;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = a3;
  v7 = v5 == 0;
  if ( v5 )
  {
    v3 = *(_DWORD *)(a2 + 8);
    v7 = v3 == 0;
  }
  if ( v7 )
    Json::Value::Value(&v16, 0);
  else
    Json::Value::Value((Json::Value *)&v18, (const char *)&unk_257BC67);
    Json::Value::get((Json::Value *)&v16, (const char *)(v3 + 32), v6, (const Json::Value *)&v18);
    Json::Value::~Value((Json::Value *)&v18);
  sub_21E94B4((void **)&v15, (const char *)&unk_257BC67);
  Json::Value::asString(&v17, (int)&v16, &v15);
  Util::base64_decode(v4, &v17);
  v8 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v17 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  return Json::Value::~Value((Json::Value *)&v16);
}


void __fastcall ConnectionRequest::fromString(__int64 a1)
{
  int v1; // r4@1
  WebToken *v2; // r0@2
  void *v3; // r0@3
  void *v4; // r0@4
  unsigned int *v5; // r2@6
  signed int v6; // r1@8
  unsigned int *v7; // r2@10
  signed int v8; // r1@12
  WebToken *v9; // [sp+0h] [bp-30h]@1
  int v10; // [sp+4h] [bp-2Ch]@1
  int v11; // [sp+8h] [bp-28h]@1
  void **v12; // [sp+Ch] [bp-24h]@1
  int v13; // [sp+10h] [bp-20h]@1
  __int64 v14; // [sp+14h] [bp-1Ch]@1

  v1 = a1;
  v12 = &off_26E91B8;
  v13 = 0;
  LODWORD(a1) = *(_DWORD *)(*(_DWORD *)HIDWORD(a1) - 12);
  v14 = a1;
  BytesDataInput::readLongString((BytesDataInput *)&v11, (int)&v12);
  ((void (__fastcall *)(int *, void ***))v12[3])(&v10, &v12);
  std::make_unique<WebToken,std::string &>(&v9, &v10);
  ConnectionRequest::ConnectionRequest(v1, (int *)&v9, &v11);
  if ( v9 )
  {
    v2 = WebToken::~WebToken(v9);
    operator delete((void *)v2);
  }
  v9 = 0;
  v3 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v5 = (unsigned int *)(v10 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  v4 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v11 - 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
}


void __fastcall ConnectionRequest::getServerAddress(ConnectionRequest *this, int a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int v4; // r0@1
  bool v5; // zf@1
  void *v6; // r0@6
  void *v7; // r0@7
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  int v12; // [sp+4h] [bp-44h]@6
  int v13; // [sp+Ch] [bp-3Ch]@1
  char v14; // [sp+10h] [bp-38h]@4
  char v15; // [sp+20h] [bp-28h]@4

  v2 = a2;
  v3 = (int *)this;
  sub_21E94B4((void **)&v13, "ServerAddress");
  v4 = *(_DWORD *)(v2 + 4);
  v5 = v4 == 0;
  if ( v4 )
  {
    v2 = *(_DWORD *)(v2 + 8);
    v5 = v2 == 0;
  }
  if ( v5 )
    Json::Value::Value(&v14, 0);
  else
    Json::Value::Value((Json::Value *)&v15, (const char *)&unk_257BC67);
    Json::Value::get(
      (Json::Value *)&v14,
      (const char *)(v2 + 32),
      (const Json::Value **)&v13,
      (const Json::Value *)&v15);
    Json::Value::~Value((Json::Value *)&v15);
  sub_21E94B4((void **)&v12, (const char *)&unk_257BC67);
  Json::Value::asString(v3, (int)&v14, &v12);
  v6 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  Json::Value::~Value((Json::Value *)&v14);
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


int __fastcall ConnectionRequest::getGuiScale(ConnectionRequest *this)
{
  ConnectionRequest *v1; // r4@1
  int v2; // r0@1
  bool v3; // zf@1
  int v4; // r5@6
  void *v5; // r0@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  int v9; // [sp+4h] [bp-3Ch]@1
  char v10; // [sp+8h] [bp-38h]@4
  char v11; // [sp+20h] [bp-20h]@4

  v1 = this;
  sub_21E94B4((void **)&v9, "GuiScale");
  v2 = *((_DWORD *)v1 + 1);
  v3 = v2 == 0;
  if ( v2 )
  {
    v1 = (ConnectionRequest *)*((_DWORD *)v1 + 2);
    v3 = v1 == 0;
  }
  if ( v3 )
    Json::Value::Value(&v10, 0);
  else
    Json::Value::Value((Json::Value *)&v11, (const char *)&unk_257BC67);
    Json::Value::get((Json::Value *)&v10, (const char *)v1 + 32, (const Json::Value **)&v9, (const Json::Value *)&v11);
    Json::Value::~Value((Json::Value *)&v11);
  v4 = Json::Value::asInt((Json::Value *)&v10, 0);
  Json::Value::~Value((Json::Value *)&v10);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v4;
}


int __fastcall ConnectionRequest::getUIProfile(ConnectionRequest *this)
{
  ConnectionRequest *v1; // r4@1
  int v2; // r0@1
  bool v3; // zf@1
  int v4; // r5@6
  void *v5; // r0@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  int v9; // [sp+4h] [bp-3Ch]@1
  char v10; // [sp+8h] [bp-38h]@4
  char v11; // [sp+20h] [bp-20h]@4

  v1 = this;
  sub_21E94B4((void **)&v9, "UIProfile");
  v2 = *((_DWORD *)v1 + 1);
  v3 = v2 == 0;
  if ( v2 )
  {
    v1 = (ConnectionRequest *)*((_DWORD *)v1 + 2);
    v3 = v1 == 0;
  }
  if ( v3 )
    Json::Value::Value(&v10, 0);
  else
    Json::Value::Value((Json::Value *)&v11, (const char *)&unk_257BC67);
    Json::Value::get((Json::Value *)&v10, (const char *)v1 + 32, (const Json::Value **)&v9, (const Json::Value *)&v11);
    Json::Value::~Value((Json::Value *)&v11);
  v4 = Json::Value::asInt((Json::Value *)&v10, 0);
  Json::Value::~Value((Json::Value *)&v10);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v4;
}


void __fastcall ConnectionRequest::create(int a1, const PrivateKeyManager *a2, UnverifiedCertificate *a3, const char **a4, __int64 a5, const char **a6, __int64 *a7, __int64 *a8, const char **a9, const unsigned __int8 **a10, int a11, int a12, int a13, const char **a14, int a15, const char **a16, int a17, const char **a18)
{
  ConnectionRequest::create(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
}


void __fastcall ConnectionRequest::toString(ConnectionRequest *this, UnverifiedCertificate **a2)
{
  ConnectionRequest::toString(this, a2);
}


int __fastcall ConnectionRequest::verifySelfSigned(ConnectionRequest *this)
{
  ConnectionRequest *v1; // r9@1
  int v2; // r5@1
  int v3; // r1@2
  int v4; // r5@5
  char *v5; // r5@5
  int v6; // r7@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  int *v9; // r0@15
  void *v10; // r0@20
  __int64 v11; // r0@22
  __int64 v12; // r2@22
  int v13; // r0@23
  int v14; // r5@25
  int v15; // r1@26
  int result; // r0@31
  unsigned int *v17; // r2@33
  signed int v18; // r1@35
  int v19; // [sp+0h] [bp-40h]@22
  int v20; // [sp+4h] [bp-3Ch]@25
  int v21; // [sp+8h] [bp-38h]@5
  char *v22; // [sp+Ch] [bp-34h]@5
  char *v23; // [sp+10h] [bp-30h]@5
  char *v24; // [sp+14h] [bp-2Ch]@5
  Certificate *v25; // [sp+18h] [bp-28h]@5

  v1 = this;
  v2 = *((_DWORD *)this + 1);
  *((_DWORD *)this + 1) = 0;
  if ( v2 )
  {
    std::unique_ptr<Certificate,std::default_delete<Certificate>>::~unique_ptr(v2 + 64);
    v3 = *(_DWORD *)(v2 + 56);
    if ( v3 )
      std::default_delete<UnverifiedCertificate>::operator()(v2 + 56, v3);
    *(_DWORD *)(v2 + 56) = 0;
    WebToken::~WebToken((WebToken *)v2);
    operator delete((void *)v2);
  }
  v4 = *(_DWORD *)v1;
  UnverifiedCertificate::getIdentityPublicKey((UnverifiedCertificate *)&v21, *(_DWORD *)v1);
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v22 = (char *)operator new(4u);
  v24 = v22 + 4;
  v23 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v21,
                  (int)&v22,
                  (int)v22);
  UnverifiedCertificate::verify((int)&v25, v4, (__int64 *)&v22);
  v6 = (int)v23;
  v5 = v22;
  if ( v22 != v23 )
    do
    {
      v9 = (int *)(*(_DWORD *)v5 - 12);
      if ( v9 != &dword_28898C0 )
      {
        v7 = (unsigned int *)(*(_DWORD *)v5 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      }
      v5 += 4;
    }
    while ( v5 != (char *)v6 );
    v5 = v22;
  if ( v5 )
    operator delete(v5);
  v10 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  if ( v25 )
    LODWORD(v11) = Certificate::getNotBeforeDate(v25);
    v12 = v11;
    LODWORD(v11) = v25;
    v25 = 0;
    v19 = v11;
    if ( Certificate::validate((Certificate *)v11, SHIDWORD(v11), v12) == 1 )
      v13 = v19;
      v19 = 0;
      v13 = 0;
    v20 = 0;
    v14 = *((_DWORD *)v1 + 1);
    *((_DWORD *)v1 + 1) = v13;
    if ( v14 )
      std::unique_ptr<Certificate,std::default_delete<Certificate>>::~unique_ptr(v14 + 64);
      v15 = *(_DWORD *)(v14 + 56);
      if ( v15 )
        std::default_delete<UnverifiedCertificate>::operator()(v14 + 56, v15);
      *(_DWORD *)(v14 + 56) = 0;
      WebToken::~WebToken((WebToken *)v14);
      operator delete((void *)v14);
    std::unique_ptr<Certificate,std::default_delete<Certificate>>::~unique_ptr((int)&v20);
    std::unique_ptr<Certificate,std::default_delete<Certificate>>::~unique_ptr((int)&v19);
  std::unique_ptr<Certificate,std::default_delete<Certificate>>::~unique_ptr((int)&v25);
  if ( *((_DWORD *)v1 + 1) )
    result = *((_DWORD *)v1 + 2) != 0;
  else
    result = 0;
  return result;
}


void __fastcall ConnectionRequest::getSkinData(ConnectionRequest *this, int a2)
{
  int v2; // r5@1
  ConnectionRequest *v3; // r4@1
  int v4; // r0@1
  bool v5; // zf@1
  void *v6; // r0@6
  void *v7; // r0@7
  void *v8; // r0@8
  char *v9; // r6@9
  _BYTE *v10; // r0@9
  signed int v11; // r5@9
  int v12; // r1@12
  char v13; // t1@13
  int v14; // r1@14
  void *v15; // r0@14
  unsigned int *v16; // r2@16
  signed int v17; // r1@18
  unsigned int *v18; // r2@20
  signed int v19; // r1@22
  unsigned int *v20; // r2@24
  signed int v21; // r1@26
  unsigned int *v22; // r2@28
  signed int v23; // r1@30
  int v24; // [sp+4h] [bp-4Ch]@6
  int v25; // [sp+Ch] [bp-44h]@1
  char v26; // [sp+10h] [bp-40h]@4
  int v27; // [sp+20h] [bp-30h]@6
  char *v28; // [sp+24h] [bp-2Ch]@6
  char v29; // [sp+28h] [bp-28h]@4

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v25, "SkinData");
  v4 = *(_DWORD *)(v2 + 4);
  v5 = v4 == 0;
  if ( v4 )
  {
    v2 = *(_DWORD *)(v2 + 8);
    v5 = v2 == 0;
  }
  if ( v5 )
    Json::Value::Value(&v26, 0);
  else
    Json::Value::Value((Json::Value *)&v29, (const char *)&unk_257BC67);
    Json::Value::get(
      (Json::Value *)&v26,
      (const char *)(v2 + 32),
      (const Json::Value **)&v25,
      (const Json::Value *)&v29);
    Json::Value::~Value((Json::Value *)&v29);
  sub_21E94B4((void **)&v24, (const char *)&unk_257BC67);
  Json::Value::asString(&v27, (int)&v26, &v24);
  Util::base64_decode((const void **)&v28, &v27);
  v6 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v27 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v24 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  Json::Value::~Value((Json::Value *)&v26);
  v8 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v25 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = v28;
  v10 = 0;
  v11 = *((_DWORD *)v28 - 3);
  *(_DWORD *)v3 = 0;
  *((_DWORD *)v3 + 1) = 0;
  *((_DWORD *)v3 + 2) = 0;
  if ( v11 )
    v10 = operator new(v11);
    *(_DWORD *)v3 = v10;
    *((_DWORD *)v3 + 2) = &v10[v11];
    if ( v11 >= 1 )
      v12 = &v9[v11 + 1] - v9;
      {
        v13 = *v9++;
        --v12;
        *v10++ = v13;
      }
      while ( v12 > 1 );
    *(_DWORD *)v3 = 0;
    *((_DWORD *)v3 + 2) = 0;
  v14 = (int)v28;
  *((_DWORD *)v3 + 1) = v10;
  v15 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v14 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
}


void __fastcall ConnectionRequest::getDeviceModel(ConnectionRequest *this, int a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int v4; // r0@1
  bool v5; // zf@1
  void *v6; // r0@6
  void *v7; // r0@7
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  int v12; // [sp+4h] [bp-44h]@6
  int v13; // [sp+Ch] [bp-3Ch]@1
  char v14; // [sp+10h] [bp-38h]@4
  char v15; // [sp+20h] [bp-28h]@4

  v2 = a2;
  v3 = (int *)this;
  sub_21E94B4((void **)&v13, "DeviceModel");
  v4 = *(_DWORD *)(v2 + 4);
  v5 = v4 == 0;
  if ( v4 )
  {
    v2 = *(_DWORD *)(v2 + 8);
    v5 = v2 == 0;
  }
  if ( v5 )
    Json::Value::Value(&v14, 0);
  else
    Json::Value::Value((Json::Value *)&v15, (const char *)&unk_257BC67);
    Json::Value::get(
      (Json::Value *)&v14,
      (const char *)(v2 + 32),
      (const Json::Value **)&v13,
      (const Json::Value *)&v15);
    Json::Value::~Value((Json::Value *)&v15);
  sub_21E94B4((void **)&v12, (const char *)&unk_257BC67);
  Json::Value::asString(v3, (int)&v14, &v12);
  v6 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  Json::Value::~Value((Json::Value *)&v14);
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


void __fastcall ConnectionRequest::getSkinGeometry(ConnectionRequest *this, int a2)
{
  ConnectionRequest::getSkinGeometry(this, a2);
}


void __fastcall ConnectionRequest::getTenantId(ConnectionRequest *this, int a2)
{
  ConnectionRequest::getTenantId(this, a2);
}


int __fastcall ConnectionRequest::getDeviceOS(ConnectionRequest *this)
{
  ConnectionRequest *v1; // r4@1
  int v2; // r0@1
  bool v3; // zf@1
  int v4; // r5@6
  void *v5; // r0@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  int v9; // [sp+4h] [bp-3Ch]@1
  char v10; // [sp+8h] [bp-38h]@4
  char v11; // [sp+20h] [bp-20h]@4

  v1 = this;
  sub_21E94B4((void **)&v9, "DeviceOS");
  v2 = *((_DWORD *)v1 + 1);
  v3 = v2 == 0;
  if ( v2 )
  {
    v1 = (ConnectionRequest *)*((_DWORD *)v1 + 2);
    v3 = v1 == 0;
  }
  if ( v3 )
    Json::Value::Value(&v10, 0);
  else
    Json::Value::Value((Json::Value *)&v11, (const char *)&unk_257BC67);
    Json::Value::get((Json::Value *)&v10, (const char *)v1 + 32, (const Json::Value **)&v9, (const Json::Value *)&v11);
    Json::Value::~Value((Json::Value *)&v11);
  v4 = Json::Value::asInt((Json::Value *)&v10, 0);
  Json::Value::~Value((Json::Value *)&v10);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v4;
}
