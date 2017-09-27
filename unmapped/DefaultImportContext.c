

void **__fastcall DefaultImportContext::_getImportTitle(DefaultImportContext *this, const PackManifest *a2, PackManifest *a3)
{
  void **v3; // r4@1
  void **result; // r0@2

  v3 = (void **)this;
  switch ( PackManifest::getPackType(a3) )
  {
    case 1:
      result = sub_119C884(v3, "content.import.started.resource_pack");
      break;
    case 2:
      result = sub_119C884(v3, "content.import.started.behavior_pack");
    case 3:
      result = sub_119C884(v3, "content.import.started.world_template");
    case 5:
      result = sub_119C884(v3, "content.import.started");
    default:
  }
  return result;
}


void __fastcall DefaultImportContext::_generateToastData(DefaultImportContext *this, const PackManifest *a2, PackManifest *a3)
{
  const PackManifest *v3; // r5@1
  PackManifest *v4; // r7@1
  Json::Value *v5; // r4@1
  ResourcePack *v6; // r6@1
  ResourcePackRepository *v7; // r6@2
  char *v8; // r0@2
  int v9; // r7@3
  void *v10; // r0@7
  int v11; // r7@8
  int v12; // r1@10
  void *v13; // r0@12
  int v14; // r7@13
  void *v15; // r0@17
  unsigned int *v16; // r2@19
  signed int v17; // r1@21
  unsigned int *v18; // r2@23
  signed int v19; // r1@25
  unsigned int *v20; // r2@27
  signed int v21; // r1@29
  int v22; // [sp+4h] [bp-6Ch]@15
  char v23; // [sp+8h] [bp-68h]@17
  int v24; // [sp+1Ch] [bp-54h]@12
  unsigned int v25; // [sp+20h] [bp-50h]@12
  int v26; // [sp+24h] [bp-4Ch]@12
  char v27; // [sp+28h] [bp-48h]@12
  int v28; // [sp+3Ch] [bp-34h]@5
  char v29; // [sp+40h] [bp-30h]@7

  v3 = a2;
  v4 = a3;
  v5 = this;
  v6 = 0;
  Json::Value::Value(this, 0);
  if ( v4 )
  {
    v7 = (ResourcePackRepository *)*((_DWORD *)v3 + 5);
    v8 = PackManifest::getIdentity(v4);
    v6 = (ResourcePack *)ResourcePackRepository::getResourcePackForPackId(v7, (const PackIdVersion *)v8);
  }
  v9 = Json::Value::operator[](v5, "icon_path");
  if ( v6 && ResourcePack::hasIcon((int)v6) == 1 )
    ResourcePack::getIconPath((const void **)&v28, (int)v6, 0);
  else
    ResourcePack::getIconPath((const void **)&v28, *(_DWORD *)(*((_DWORD *)v3 + 5) + 40), 0);
  Json::Value::Value((int)&v29, (const char **)&v28);
  Json::Value::operator=(v9, (const Json::Value *)&v29);
  Json::Value::~Value((Json::Value *)&v29);
  v10 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v28 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = Json::Value::operator[](v5, "icon_filesystem");
    v12 = ResourcePack::getIconFileSytem(v6);
    v12 = ResourcePack::getIconFileSytem(*(ResourcePack **)(*((_DWORD *)v3 + 5) + 40));
  ResourceUtil::stringFromPath(&v24, v12);
  sub_119CCEC((void **)&v26, v25, v24);
  Json::Value::Value((int)&v27, (const char **)&v26);
  Json::Value::operator=(v11, (const Json::Value *)&v27);
  Json::Value::~Value((Json::Value *)&v27);
  v13 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v26 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = Json::Value::operator[](v5, "icon_zip");
    ResourcePack::getIconZipPath((ResourcePack *)&v22, (int)v6);
    ResourcePack::getIconZipPath((ResourcePack *)&v22, *(_DWORD *)(*((_DWORD *)v3 + 5) + 40));
  Json::Value::Value((int)&v23, (const char **)&v22);
  Json::Value::operator=(v14, (const Json::Value *)&v23);
  Json::Value::~Value((Json::Value *)&v23);
  v15 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v22 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
}


void __fastcall DefaultImportContext::notifyImportStarted(DefaultImportContext *this, const PackManifest *a2)
{
  DefaultImportContext::notifyImportStarted(this, a2);
}


void __fastcall DefaultImportContext::_generateToastData(DefaultImportContext *this, const PackManifest *a2, PackManifest *a3)
{
  DefaultImportContext::_generateToastData(this, a2, a3);
}


void __fastcall DefaultImportContext::notifyImportStarted(DefaultImportContext *this, const PackManifest *a2)
{
  DefaultImportContext *v2; // r4@1
  PackManifest *v3; // r5@1
  const PackManifest *v4; // r1@1
  void *v5; // r0@1
  void *v6; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  char v11; // [sp+8h] [bp-30h]@1
  int v12; // [sp+1Ch] [bp-1Ch]@1
  int v13; // [sp+20h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  MinecraftEventing::fireEventPackImportStarted(*((MinecraftEventing **)this + 6), a2);
  PackManifest::getName((PackManifest *)&v13, (int)v3);
  DefaultImportContext::_getImportTitle((DefaultImportContext *)&v12, v4, v3);
  DefaultImportContext::_generateToastData((DefaultImportContext *)&v11, v2, v3);
  DefaultImportContext::_pushToast((int)v2, &v13, &v12, (int **)&Util::EMPTY_STRING, (const Json::Value *)&v11);
  Json::Value::~Value((Json::Value *)&v11);
  v5 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v12 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  v6 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v13 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
}


RakNet *__fastcall DefaultImportContext::notifyImportFailed(int a1, int a2, int a3, int a4, const char **a5)
{
  int v5; // r4@1
  PackManifest *v6; // r5@1
  int v7; // r8@1
  int v8; // r7@1
  void *v9; // r0@5
  void *v10; // r0@6
  void *v11; // r0@8
  void *v12; // r0@9
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  void *v15; // r0@14
  void *v16; // r0@15
  int v17; // r4@17
  void *v18; // r0@22
  void *v19; // r0@28
  void *v20; // r0@34
  void *v21; // r0@43
  RakNet *result; // r0@44
  unsigned int *v23; // r2@46
  signed int v24; // r1@48
  unsigned int *v25; // r2@54
  signed int v26; // r1@56
  unsigned int *v27; // r2@58
  signed int v28; // r1@60
  unsigned int *v29; // r2@70
  signed int v30; // r1@72
  unsigned int *v31; // r2@74
  signed int v32; // r1@76
  unsigned int *v33; // r2@78
  signed int v34; // r1@80
  unsigned int *v35; // r2@82
  signed int v36; // r1@84
  unsigned int *v37; // r2@86
  signed int v38; // r1@88
  unsigned int *v39; // r2@90
  signed int v40; // r1@92
  int v41; // [sp+4h] [bp-4E4h]@17
  char v42; // [sp+8h] [bp-4E0h]@14
  int v43; // [sp+1Ch] [bp-4CCh]@14
  int v44; // [sp+24h] [bp-4C4h]@14
  char v45; // [sp+28h] [bp-4C0h]@28
  int v46; // [sp+3Ch] [bp-4ACh]@28
  int v47; // [sp+44h] [bp-4A4h]@28
  char v48; // [sp+48h] [bp-4A0h]@22
  int v49; // [sp+5Ch] [bp-48Ch]@22
  int v50; // [sp+64h] [bp-484h]@22
  char v51; // [sp+68h] [bp-480h]@8
  int v52; // [sp+7Ch] [bp-46Ch]@8
  int v53; // [sp+84h] [bp-464h]@8
  char v54; // [sp+88h] [bp-460h]@34
  int v55; // [sp+9Ch] [bp-44Ch]@34
  int v56; // [sp+A4h] [bp-444h]@34
  int v57; // [sp+ACh] [bp-43Ch]@5
  int v58; // [sp+B0h] [bp-438h]@5
  int v59; // [sp+B4h] [bp-434h]@3
  int v60; // [sp+B8h] [bp-430h]@3
  int v61; // [sp+BCh] [bp-42Ch]@2
  char v62; // [sp+C4h] [bp-424h]@3
  int v63; // [sp+C8h] [bp-420h]@3
  int v64; // [sp+4C8h] [bp-20h]@3
  RakNet *v65; // [sp+4CCh] [bp-1Ch]@1

  v5 = a1;
  v6 = (PackManifest *)a3;
  v7 = a4;
  v8 = a2;
  v65 = _stack_chk_guard;
  if ( a3 )
  {
    PackManifest::getName((PackManifest *)&v61, a3);
  }
  else
    v59 = *(_DWORD *)(a1 + 32);
    v60 = *(_DWORD *)(v59 - 12);
    Core::PathBuffer<Core::StackString<char,1024u>>::getEntryNameWithoutExtension((int)&v62, (__int64 *)&v59);
    sub_119CCEC((void **)&v61, (unsigned int)&v63, v64);
  if ( !*(_DWORD *)(v61 - 12) )
    sub_119C884((void **)&v57, "manifestvalidation.unkown.packtitle");
    I18n::get(&v58, (int **)&v57);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v61, &v58);
    v9 = (void *)(v58 - 12);
    if ( (int *)(v58 - 12) != &dword_28898C0 )
    {
      v25 = (unsigned int *)(v58 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
      }
      else
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v9);
    }
    v10 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v57 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v10);
  switch ( v8 )
    case 0:
      sub_119C884((void **)&v53, "content.import.failed");
      sub_119C884((void **)&v52, "content.import.failed.subtitle");
      DefaultImportContext::_generateErrorToastData((Json::Value *)&v51, v5, 0, a5, (const char **)(v5 + 32));
      DefaultImportContext::_pushToast(v5, &v61, &v53, (int **)&v52, (const Json::Value *)&v51);
      Json::Value::~Value((Json::Value *)&v51);
      v11 = (void *)(v52 - 12);
      if ( (int *)(v52 - 12) != &dword_28898C0 )
        v37 = (unsigned int *)(v52 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
        }
        else
          v38 = (*v37)--;
        if ( v38 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v11);
      v12 = (void *)(v53 - 12);
      if ( (int *)(v53 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v53 - 4);
        if ( !&pthread_create )
          goto LABEL_40;
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        goto LABEL_41;
      break;
    case 4:
      sub_119C884((void **)&v44, "content.import.failed");
      sub_119C884((void **)&v43, "content.import.failed.subtitle");
      DefaultImportContext::_generateErrorToastData((Json::Value *)&v42, v5, 0, a5, (const char **)(v5 + 32));
      DefaultImportContext::_pushToast(v5, &v61, &v44, (int **)&v43, (const Json::Value *)&v42);
      Json::Value::~Value((Json::Value *)&v42);
      v15 = (void *)(v43 - 12);
      if ( (int *)(v43 - 12) != &dword_28898C0 )
        v29 = (unsigned int *)(v43 - 4);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v15);
      v16 = (void *)(v44 - 12);
      if ( (int *)(v44 - 12) != &dword_28898C0 )
        v31 = (unsigned int *)(v44 - 4);
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
          v32 = (*v31)--;
        if ( v32 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v16);
      if ( v6 )
        v17 = *(_DWORD *)(v5 + 24);
        PackReport::serializeEventErrorMessages((PackReport *)&v41, v7);
        MinecraftEventing::fireEventPackImportedCompleted(v17, 0, v6, 0, (int)&v41);
        v12 = (void *)(v41 - 12);
        if ( (int *)(v41 - 12) != &dword_28898C0 )
          v13 = (unsigned int *)(v41 - 4);
          if ( !&pthread_create )
            goto LABEL_40;
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          goto LABEL_41;
    case 2:
      sub_119C884((void **)&v50, "content.import.failed");
      sub_119C884((void **)&v49, "content.import.failed.subtitle_malformed_zip");
      DefaultImportContext::_generateErrorToastData((Json::Value *)&v48, v5, 0, a5, (const char **)(v5 + 32));
      DefaultImportContext::_pushToast(v5, &v61, &v50, (int **)&v49, (const Json::Value *)&v48);
      Json::Value::~Value((Json::Value *)&v48);
      v18 = (void *)(v49 - 12);
      if ( (int *)(v49 - 12) != &dword_28898C0 )
        v33 = (unsigned int *)(v49 - 4);
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
          v34 = (*v33)--;
        if ( v34 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v18);
      v12 = (void *)(v50 - 12);
      if ( (int *)(v50 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v50 - 4);
    case 3:
      sub_119C884((void **)&v47, "content.import.failed");
      sub_119C884((void **)&v46, "Content in this world is not supported by Minecraft: Education Edition.");
      DefaultImportContext::_generateToastData((DefaultImportContext *)&v45, (const PackManifest *)v5, 0);
      DefaultImportContext::_pushToast(v5, &v61, &v47, (int **)&v46, (const Json::Value *)&v45);
      Json::Value::~Value((Json::Value *)&v45);
      v19 = (void *)(v46 - 12);
      if ( (int *)(v46 - 12) != &dword_28898C0 )
        v35 = (unsigned int *)(v46 - 4);
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
          v36 = (*v35)--;
        if ( v36 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v19);
      v12 = (void *)(v47 - 12);
      if ( (int *)(v47 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v47 - 4);
    case 1:
      sub_119C884((void **)&v56, "content.import.failed");
      sub_119C884((void **)&v55, "content.import.failed.subtitle_duplicate");
      DefaultImportContext::_generateToastData((DefaultImportContext *)&v54, (const PackManifest *)v5, 0);
      DefaultImportContext::_pushToast(v5, &v61, &v56, (int **)&v55, (const Json::Value *)&v54);
      Json::Value::~Value((Json::Value *)&v54);
      v20 = (void *)(v55 - 12);
      if ( (int *)(v55 - 12) != &dword_28898C0 )
        v39 = (unsigned int *)(v55 - 4);
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
          v40 = (*v39)--;
        if ( v40 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v20);
      v12 = (void *)(v56 - 12);
      if ( (int *)(v56 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v56 - 4);
LABEL_40:
          v14 = (*v13)--;
LABEL_41:
        if ( v14 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v12);
    default:
  v21 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v61 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  result = (RakNet *)(_stack_chk_guard - v65);
  if ( _stack_chk_guard != v65 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall DefaultImportContext::_pushToast(int a1, int *a2, int *a3, int **a4, const Json::Value *a5)
{
  DefaultImportContext::_pushToast(a1, a2, a3, a4, a5);
}


void __fastcall DefaultImportContext::notifyImportSucceeded(int a1, int a2, int a3, PackManifest *a4, int a5, const char **a6)
{
  DefaultImportContext::notifyImportSucceeded(a1, a2, a3, a4, a5, a6);
}


signed int __fastcall DefaultImportContext::shouldUnzipToDestination(DefaultImportContext *this, const PackManifest *a2)
{
  int v2; // r1@1
  signed int result; // r0@1

  v2 = *((_BYTE *)this + 36);
  result = 0;
  if ( !v2 )
    result = 1;
  return result;
}


DefaultImportContext *__fastcall DefaultImportContext::~DefaultImportContext(DefaultImportContext *this)
{
  DefaultImportContext *v1; // r8@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r5@2
  int v5; // r7@2
  int v6; // r4@3
  unsigned int *v7; // r1@4
  unsigned int v8; // r0@6
  unsigned int *v9; // r6@10
  unsigned int v10; // r0@12
  unsigned int *v12; // r2@22
  signed int v13; // r1@24

  v1 = this;
  *(_DWORD *)this = &off_26DCE94;
  v2 = *((_DWORD *)this + 8);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  *(_DWORD *)v1 = &off_26DCED0;
  v5 = *(_QWORD *)((char *)v1 + 4) >> 32;
  v4 = *(_QWORD *)((char *)v1 + 4);
  if ( v4 != v5 )
    do
      v6 = *(_DWORD *)(v4 + 4);
      if ( v6 )
      {
        v7 = (unsigned int *)(v6 + 4);
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
          v9 = (unsigned int *)(v6 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
          if ( &pthread_create )
          {
            __dmb();
            do
              v10 = __ldrex(v9);
            while ( __strex(v10 - 1, v9) );
          }
          else
            v10 = (*v9)--;
          if ( v10 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
      }
      v4 += 8;
    while ( v4 != v5 );
    v4 = *((_DWORD *)v1 + 1);
  if ( v4 )
    operator delete((void *)v4);
  return v1;
}


void __fastcall DefaultImportContext::notifyImportSucceeded(int a1, int a2, int a3, PackManifest *a4, int a5, const char **a6)
{
  int v6; // r7@1
  int v7; // r8@1
  PackManifest *v8; // r9@1
  int v9; // r6@1
  int v10; // r4@1
  void *v11; // r0@1
  void *v12; // r0@4
  void *v13; // r0@5
  void *v14; // r0@6
  unsigned int *v15; // r2@7
  signed int v16; // r1@9
  void *v17; // r0@11
  unsigned int *v18; // r2@14
  signed int v19; // r1@16
  unsigned int *v20; // r2@22
  signed int v21; // r1@24
  unsigned int *v22; // r2@34
  signed int v23; // r1@36
  unsigned int *v24; // r2@38
  signed int v25; // r1@40
  char v26; // [sp+8h] [bp-68h]@4
  int v27; // [sp+20h] [bp-50h]@4
  int v28; // [sp+28h] [bp-48h]@4
  int v29; // [sp+2Ch] [bp-44h]@4
  char v30; // [sp+30h] [bp-40h]@11
  int v31; // [sp+44h] [bp-2Ch]@11
  int v32; // [sp+48h] [bp-28h]@11
  int v33; // [sp+4Ch] [bp-24h]@1

  v6 = a2;
  v7 = a1;
  v8 = a4;
  v9 = a3;
  v10 = *(_DWORD *)(a1 + 24);
  PackReport::serializeEventErrorMessages((PackReport *)&v33, a5);
  MinecraftEventing::fireEventPackImportedCompleted(v10, v6, v8, 1, (int)&v33);
  v11 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v33 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  }
  if ( v9 )
    if ( v9 == 1 )
      PackManifest::getName((PackManifest *)&v29, (int)v8);
      sub_119C884((void **)&v28, "content.import.succeeded_with_warnings");
      sub_119C884((void **)&v27, "content.import.succeeded_with_warnings.subtitle");
      DefaultImportContext::_generateErrorToastData((Json::Value *)&v26, v7, v8, a6, (const char **)(v7 + 32));
      DefaultImportContext::_pushToast(v7, &v29, &v28, (int **)&v27, (const Json::Value *)&v26);
      Json::Value::~Value((Json::Value *)&v26);
      v12 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
      {
        v22 = (unsigned int *)(v27 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
        }
        else
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v12);
      }
      v13 = (void *)(v28 - 12);
      if ( (int *)(v28 - 12) != &dword_28898C0 )
        v24 = (unsigned int *)(v28 - 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v13);
      v14 = (void *)(v29 - 12);
      if ( (int *)(v29 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v29 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          goto LABEL_31;
LABEL_30:
        v16 = (*v15)--;
LABEL_31:
        if ( v16 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v14);
        return;
  else
    PackManifest::getName((PackManifest *)&v32, (int)v8);
    sub_119C884((void **)&v31, "content.import.succeeded");
    DefaultImportContext::_generateToastData((DefaultImportContext *)&v30, (const PackManifest *)v7, v8);
    DefaultImportContext::_pushToast(v7, &v32, &v31, (int **)&Util::EMPTY_STRING, (const Json::Value *)&v30);
    Json::Value::~Value((Json::Value *)&v30);
    v17 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v31 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v17);
    v14 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v32 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        goto LABEL_31;
      goto LABEL_30;
}


void __fastcall DefaultImportContext::~DefaultImportContext(DefaultImportContext *this)
{
  DefaultImportContext::~DefaultImportContext(this);
}


int __fastcall DefaultImportContext::DefaultImportContext(int a1, int a2, int a3, int a4, int *a5)
{
  int v5; // r4@1
  int v6; // r0@1
  int result; // r0@1

  v5 = a1;
  *(_DWORD *)a1 = &off_26DCED0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)a1 = &off_26DCE94;
  v6 = a1 + 20;
  *(_DWORD *)v6 = a2;
  *(_DWORD *)(v6 + 4) = a3;
  *(_DWORD *)(v6 + 8) = a4;
  sub_119C854((int *)(v5 + 32), a5);
  result = v5;
  *(_BYTE *)(v5 + 36) = 0;
  return result;
}


Json::Value *__fastcall DefaultImportContext::_generateErrorToastData(Json::Value *a1, int a2, PackManifest *a3, const char **a4, const char **a5)
{
  int v5; // r6@1
  const char **v6; // r8@1
  PackManifest *v7; // r5@1
  Json::Value *v8; // r4@1
  ResourcePack *v9; // r7@1
  ResourcePackRepository *v10; // r7@2
  char *v11; // r0@2
  int v12; // r5@3
  void *v13; // r0@7
  int v14; // r5@8
  int v15; // r1@10
  void *v16; // r0@12
  int v17; // r5@13
  void *v18; // r0@17
  int v19; // r5@18
  int v20; // r5@18
  unsigned int *v22; // r2@19
  signed int v23; // r1@21
  unsigned int *v24; // r2@23
  signed int v25; // r1@25
  unsigned int *v26; // r2@27
  signed int v27; // r1@29
  int v28; // [sp+0h] [bp-90h]@18
  char v29; // [sp+10h] [bp-80h]@18
  int v30; // [sp+24h] [bp-6Ch]@15
  char v31; // [sp+28h] [bp-68h]@17
  int v32; // [sp+3Ch] [bp-54h]@12
  unsigned int v33; // [sp+40h] [bp-50h]@12
  int v34; // [sp+44h] [bp-4Ch]@12
  char v35; // [sp+48h] [bp-48h]@12
  int v36; // [sp+5Ch] [bp-34h]@5
  char v37; // [sp+60h] [bp-30h]@7

  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = a1;
  v9 = 0;
  Json::Value::Value(a1, 0);
  if ( v7 )
  {
    v10 = *(ResourcePackRepository **)(v5 + 20);
    v11 = PackManifest::getIdentity(v7);
    v9 = (ResourcePack *)ResourcePackRepository::getResourcePackForPackId(v10, (const PackIdVersion *)v11);
  }
  v12 = Json::Value::operator[](v8, "icon_path");
  if ( v9 && ResourcePack::hasIcon((int)v9) == 1 )
    ResourcePack::getIconPath((const void **)&v36, (int)v9, 0);
  else
    ResourcePack::getIconPath((const void **)&v36, *(_DWORD *)(*(_DWORD *)(v5 + 20) + 40), 0);
  Json::Value::Value((int)&v37, (const char **)&v36);
  Json::Value::operator=(v12, (const Json::Value *)&v37);
  Json::Value::~Value((Json::Value *)&v37);
  v13 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v36 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    }
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = Json::Value::operator[](v8, "icon_filesystem");
    v15 = ResourcePack::getIconFileSytem(v9);
    v15 = ResourcePack::getIconFileSytem(*(ResourcePack **)(*(_DWORD *)(v5 + 20) + 40));
  ResourceUtil::stringFromPath(&v32, v15);
  sub_119CCEC((void **)&v34, v33, v32);
  Json::Value::Value((int)&v35, (const char **)&v34);
  Json::Value::operator=(v14, (const Json::Value *)&v35);
  Json::Value::~Value((Json::Value *)&v35);
  v16 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v34 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = Json::Value::operator[](v8, "icon_zip");
    ResourcePack::getIconZipPath((ResourcePack *)&v30, (int)v9);
    ResourcePack::getIconZipPath((ResourcePack *)&v30, *(_DWORD *)(*(_DWORD *)(v5 + 20) + 40));
  Json::Value::Value((int)&v31, (const char **)&v30);
  Json::Value::operator=(v17, (const Json::Value *)&v31);
  Json::Value::~Value((Json::Value *)&v31);
  v18 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v30 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = Json::Value::operator[](v8, "error_pack_path");
  Json::Value::Value((int)&v29, v6);
  Json::Value::operator=(v19, (const Json::Value *)&v29);
  Json::Value::~Value((Json::Value *)&v29);
  v20 = Json::Value::operator[](v8, "error_pack_original_path");
  Json::Value::Value((int)&v28, a5);
  Json::Value::operator=(v20, (const Json::Value *)&v28);
  return Json::Value::~Value((Json::Value *)&v28);
}


void __fastcall DefaultImportContext::_pushToast(int a1, int *a2, int *a3, int **a4, const Json::Value *a5)
{
  int v5; // r4@1
  int **v6; // r5@1
  int *v7; // r6@1
  char *v8; // r0@1
  void *v9; // r0@1
  void *v10; // r0@2
  void *v11; // r0@3
  void *v12; // r0@4
  char *v13; // r4@5
  int v14; // r6@5
  unsigned int *v15; // r2@7
  signed int v16; // r1@9
  int *v17; // r0@15
  void *v18; // r0@20
  unsigned int *v19; // r2@22
  signed int v20; // r1@24
  unsigned int *v21; // r2@26
  signed int v22; // r1@28
  unsigned int *v23; // r2@30
  signed int v24; // r1@32
  unsigned int *v25; // r2@34
  signed int v26; // r1@36
  unsigned int *v27; // r2@38
  signed int v28; // r1@40
  void **v29; // [sp+4h] [bp-4Ch]@1
  int v30; // [sp+8h] [bp-48h]@2
  int v31; // [sp+10h] [bp-40h]@1
  int v32; // [sp+14h] [bp-3Ch]@1
  int v33; // [sp+18h] [bp-38h]@1
  char *v34; // [sp+1Ch] [bp-34h]@1
  char *v35; // [sp+20h] [bp-30h]@1
  char *v36; // [sp+24h] [bp-2Ch]@1
  int v37; // [sp+28h] [bp-28h]@1

  v5 = *(_DWORD *)(a1 + 28);
  v6 = a4;
  v7 = a3;
  sub_119C854(&v33, a2);
  sub_119C8A4((const void **)&v33, (const void **)&unk_27D3374);
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v8 = (char *)operator new(4u);
  v34 = v8;
  v36 = v8 + 4;
  v35 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v33,
                  (int)&v34,
                  (int)v8);
  I18n::get(&v37, v7, (unsigned __int64 *)&v34);
  I18n::get(&v32, v6);
  Json::FastWriter::FastWriter((Json::FastWriter *)&v29);
  Json::FastWriter::write((Json::FastWriter *)&v31, (const Json::Value *)&v29, a5);
  ToastManager::pushToast(v5, 3, &v37, &v32, &v31);
  v9 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v31 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  }
  v29 = &off_2725B14;
  v10 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v30 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  Json::Writer::~Writer((Json::Writer *)&v29);
  v11 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v32 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v37 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v14 = (int)v35;
  v13 = v34;
  if ( v34 != v35 )
    do
      v17 = (int *)(*(_DWORD *)v13 - 12);
      if ( v17 != &dword_28898C0 )
      {
        v15 = (unsigned int *)(*(_DWORD *)v13 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
        }
        else
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v17);
      }
      v13 += 4;
    while ( v13 != (char *)v14 );
    v13 = v34;
  if ( v13 )
    operator delete(v13);
  v18 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v33 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
}


const void **__fastcall DefaultImportContext::getWorldTemplatePath(DefaultImportContext *this)
{
  int *v1; // r4@1
  void *v2; // r0@2
  int *v3; // r0@4

  v1 = (int *)this;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = &ServiceLocator<AppPlatform>::mDefaultService;
  v3 = (int *)(*(int (**)(void))(**(_DWORD **)v2 + 292))();
  sub_119C854(v1, v3);
  return sub_119C8A4((const void **)v1, (const void **)&ExternalContentManager::TEMPLATE_PATH);
}


RakNet *__fastcall DefaultImportContext::generatePackFolderName(DefaultImportContext *this, const PackManifest *a2, int a3)
{
  int *v3; // r8@1
  const PackManifest *v4; // r5@1
  void *v5; // r0@1
  void *v6; // r0@2
  void *v7; // r0@3
  void *v8; // r0@5
  const char *v9; // r6@7
  int v10; // r4@7
  size_t v11; // r0@7
  size_t v12; // r7@7
  unsigned int v13; // r0@8
  int v14; // r0@13
  void *v15; // r0@15
  RakNet *result; // r0@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20
  unsigned int *v19; // r2@22
  signed int v20; // r1@24
  unsigned int *v21; // r2@26
  signed int v22; // r1@28
  unsigned int *v23; // r2@30
  signed int v24; // r1@32
  unsigned int *v25; // r2@46
  signed int v26; // r1@48
  int v27; // [sp+0h] [bp-448h]@15
  int v28; // [sp+4h] [bp-444h]@5
  int v29; // [sp+8h] [bp-440h]@3
  int v30; // [sp+10h] [bp-438h]@2
  int v31; // [sp+14h] [bp-434h]@1
  unsigned int v32; // [sp+20h] [bp-428h]@7
  char v33; // [sp+24h] [bp-424h]@7
  int v34; // [sp+424h] [bp-24h]@7
  RakNet *v35; // [sp+428h] [bp-20h]@1

  v3 = (int *)this;
  v4 = a2;
  v35 = _stack_chk_guard;
  PackManifest::getName((PackManifest *)&v31, a3);
  Util::removeIllegalChars(v3, &v31);
  v5 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v31 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  sub_119C884((void **)&v30, " ");
  Util::stringReplace(v3, (_BYTE **)&v30, (char **)&Util::EMPTY_STRING, -1);
  v6 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v30 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  Util::removeAllColorCodes((const void **)&v29, v3);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v29);
  v7 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v29 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  if ( (unsigned int)Util::utf8len(v3, 0) >= 0xB )
    Util::utf8substring((const void **)&v28, v3, 0, 10);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v28);
    v8 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v28 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
      }
      else
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
  if ( *((_BYTE *)v4 + 36) )
    v9 = (const char *)*v3;
    v32 = 1023;
    v10 = 0;
    v33 = 0;
    v34 = 0;
    v11 = strlen(v9);
    v12 = v11;
    if ( v11 < 0x400 )
      if ( v11 )
        _aeabi_memcpy(&v33, v9, v11);
      *((_BYTE *)&v32 + v12 + 4) = 0;
      v13 = v32;
      v10 = v34 + v12;
      v33 = 0;
      v13 = 1023;
    v34 = v10;
    if ( v10 + 4 <= v13 )
      *(unsigned int *)((char *)&v32 + v10 + 4) = 1885960750;
      *((_BYTE *)&v32 + v10 + 8) = 0;
      v14 = v34 + 4;
      v14 = 0;
    v34 = v14;
    sub_119C884((void **)&v27, &v33);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v27);
    v15 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v27 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
  result = (RakNet *)(_stack_chk_guard - v35);
  if ( _stack_chk_guard != v35 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall DefaultImportContext::~DefaultImportContext(DefaultImportContext *this)
{
  DefaultImportContext *v1; // r0@1

  v1 = DefaultImportContext::~DefaultImportContext(this);
  j_j_j__ZdlPv_4((void *)v1);
}
