

char *__fastcall ManifestValidationScreenController::_generateIconPath(ManifestValidationScreenController *this, const PackManifest *a2, PackManifest *a3)
{
  ManifestValidationScreenController *v3; // r4@1
  PackManifest *v4; // r5@1
  const PackManifest *v5; // r1@1
  const void **v6; // r0@2
  char *v7; // r0@2
  char *v8; // r0@3
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  const void **v11; // r0@8
  void *v12; // r0@9
  void *v13; // r0@10
  char *result; // r0@11
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  unsigned int *v17; // r2@17
  signed int v18; // r1@19
  unsigned int *v19; // r2@37
  signed int v20; // r1@39
  int v21; // [sp+4h] [bp-444h]@8
  int v22; // [sp+8h] [bp-440h]@2
  int v23; // [sp+Ch] [bp-43Ch]@2
  char *v24; // [sp+10h] [bp-438h]@2
  char *v25; // [sp+14h] [bp-434h]@2
  int v26; // [sp+18h] [bp-430h]@1
  int v27; // [sp+20h] [bp-428h]@1
  char v28; // [sp+2Ch] [bp-41Ch]@2
  int v29; // [sp+30h] [bp-418h]@2
  RakNet *v30; // [sp+434h] [bp-14h]@1

  v3 = this;
  v4 = a3;
  v30 = _stack_chk_guard;
  sub_1590164((void **)&v27, "pack_icon.png");
  ManifestValidationScreenController::_generateBaseIconPath((ManifestValidationScreenController *)&v26, v5, v4);
  if ( PackManifest::getManifestOrigin(v4) != 1 )
  {
    sub_15901A4(&v21, &v26);
    sub_1590224((const void **)&v21, "/", 1u);
    v11 = sub_1590394((const void **)&v21, (const void **)&v27);
    *(_DWORD *)v3 = *v11;
    *v11 = &unk_28898CC;
    v8 = (char *)(v21 - 12);
    if ( (int *)(v21 - 12) == &dword_28898C0 )
      goto LABEL_9;
    v9 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
LABEL_34:
      if ( v10 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v8);
    }
LABEL_33:
    v10 = (*v9)--;
    goto LABEL_34;
  }
  v22 = v26;
  v23 = *(_DWORD *)(v26 - 12);
  Core::PathBuffer<Core::StackString<char,1024u>>::getEntryNameWithoutExtension((int)&v28, (__int64 *)&v22);
  sub_1590164((void **)&v24, (const char *)&v29);
  sub_1590224((const void **)&v24, "/", 1u);
  v25 = v24;
  v24 = (char *)&unk_28898CC;
  v6 = sub_1590394((const void **)&v25, (const void **)&v27);
  *(_DWORD *)v3 = *v6;
  *v6 = &unk_28898CC;
  v7 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v25 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v7);
  v8 = v24 - 12;
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v24 - 4);
      goto LABEL_34;
    goto LABEL_33;
LABEL_9:
  v12 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v26 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v12);
  v13 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v27 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v13);
  result = (char *)(_stack_chk_guard - v30);
  if ( _stack_chk_guard != v30 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall ManifestValidationScreenController::_getPackID(ManifestValidationScreenController *this, int a2)
{
  ManifestValidationScreenController::_getPackID(this, a2);
}


int *__fastcall ManifestValidationScreenController::_getIconZip(ManifestValidationScreenController *this, int a2)
{
  int v2; // r5@1
  ManifestValidationScreenController *v3; // r4@1
  PackManifest *v4; // r0@1
  const PackManifest *v5; // r1@2
  int *result; // r0@3
  int v7; // r0@5
  unsigned int *v8; // r12@7
  signed int v9; // r1@9

  v2 = a2;
  v3 = this;
  v4 = *(PackManifest **)(a2 + 460);
  if ( v4 && PackManifest::getManifestOrigin(v4) == 1 )
  {
    ManifestValidationScreenController::_generateBaseIconPath(v3, v5, *(PackManifest **)(v2 + 460));
    result = (int *)(*(_DWORD *)v3 - 12);
    if ( *result )
      return result;
    if ( result != &dword_28898C0 )
    {
      v8 = (unsigned int *)(*(_DWORD *)v3 - 4);
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
        j_j_j_j_j__ZdlPv_9_2(result);
    }
  }
  v7 = MinecraftScreenModel::getResourcePackRepository(*(MinecraftScreenModel **)(v2 + 380));
  return ResourcePack::getIconZipPath(v3, *(_DWORD *)(v7 + 40));
}


_DWORD *__fastcall ManifestValidationScreenController::_generateErrorContent(int *a1, int a2, int a3, int **a4, int a5)
{
  int *v5; // r5@1
  int **v6; // r6@1
  int v7; // r7@1
  int v8; // r1@1
  char *v9; // r0@1
  void *v10; // r0@1
  char *v11; // r0@2
  char *v12; // r0@2
  void *v13; // r0@2
  void **v14; // r0@3
  void *v15; // r0@3
  unsigned int *v17; // r2@5
  signed int v18; // r1@7
  unsigned int *v19; // r2@9
  signed int v20; // r1@11
  unsigned int *v21; // r2@13
  signed int v22; // r1@15
  int v23; // [sp+0h] [bp-E0h]@2
  int v24; // [sp+4h] [bp-DCh]@1
  void **v25; // [sp+8h] [bp-D8h]@1
  int v26; // [sp+Ch] [bp-D4h]@4
  void **v27; // [sp+10h] [bp-D0h]@1
  void **v28; // [sp+14h] [bp-CCh]@3
  int v29; // [sp+30h] [bp-B0h]@4
  int v30; // [sp+38h] [bp-A8h]@3
  int v31; // [sp+3Ch] [bp-A4h]@4

  v5 = a1;
  v6 = a4;
  v7 = a3;
  sub_1592F24((int)&v25, 24);
  ManifestValidationScreenController::_colorLocString(&v24, v8, v7, v6);
  v9 = sub_1592F34((char *)&v27, v24, *(_DWORD *)(v24 - 12));
  sub_1592F34(v9, Util::NEW_LINE, *(_DWORD *)(Util::NEW_LINE - 12));
  v10 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v24 - 4);
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
      j_j_j_j_j__ZdlPv_9_2(v10);
  }
  PackError::getLocErrorMessage((PackError *)&v23, a5);
  v11 = sub_1592F34((char *)&v27, v23, *(_DWORD *)(v23 - 12));
  v12 = sub_1592F34(v11, Util::NEW_LINE, *(_DWORD *)(Util::NEW_LINE - 12));
  sub_1592F34(v12, Util::NEW_LINE, *(_DWORD *)(Util::NEW_LINE - 12));
  v13 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v23 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v13);
  sub_1592F44(v5, (int)&v28);
  v14 = off_26D3F84;
  v25 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v25) = off_26D3F80[0];
  v27 = v14;
  v28 = &off_27734E8;
  v15 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v30 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v15);
  v28 = &off_26D40A8;
  sub_1592F54((unsigned int **)&v29);
  v25 = (void **)off_26D3F68;
  *(void ***)((char *)&v25 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v26 = 0;
  return sub_21B6560(&v31);
}


int __fastcall ManifestValidationScreenController::ManifestValidationScreenController(int a1, int a2, _DWORD *a3, int a4, int a5, int *a6, char a7, int a8)
{
  int v8; // r4@1
  int v9; // r10@1
  int v10; // r0@1
  _DWORD *v11; // r11@1
  unsigned int *v12; // r0@2
  unsigned int v13; // r1@4
  int v14; // r6@7
  unsigned int *v15; // r1@8
  unsigned int v16; // r0@10
  unsigned int *v17; // r5@14
  unsigned int v18; // r0@16
  int v20; // [sp+4h] [bp-3Ch]@1
  int v21; // [sp+8h] [bp-38h]@1

  v8 = a1;
  v20 = *(_DWORD *)a2;
  v9 = a4;
  v10 = *(_DWORD *)(a2 + 4);
  v11 = a3;
  v21 = v10;
  if ( v10 )
  {
    v12 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
    }
    else
      ++*v12;
  }
  MinecraftScreenController::MinecraftScreenController(v8, (MinecraftScreenModel **)&v20);
  v14 = v21;
  if ( v21 )
    v15 = (unsigned int *)(v21 + 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      }
      else
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  *(_DWORD *)v8 = &off_26E25FC;
  sub_15901A4((int *)(v8 + 424), (int *)a5);
  *(_DWORD *)(v8 + 428) = *(_DWORD *)(a5 + 4);
  sub_15901A4((int *)(v8 + 432), a6);
  sub_15901A4((int *)(v8 + 436), (int *)&Util::EMPTY_STRING);
  sub_15901A4((int *)(v8 + 440), (int *)&Util::EMPTY_STRING);
  *(_BYTE *)(v8 + 444) = a7;
  *(_BYTE *)(v8 + 445) = 0;
  *(_DWORD *)(v8 + 448) = a8;
  *(_DWORD *)(v8 + 452) = *v11;
  *(_DWORD *)(v8 + 456) = v9;
  *(_DWORD *)(v8 + 460) = 0;
  ManifestValidationScreenController::_registerEventHandlers((ManifestValidationScreenController *)v8);
  ManifestValidationScreenController::_registerBindings((ManifestValidationScreenController *)v8);
  *(_BYTE *)(v8 + 445) = MinecraftScreenModel::supportsClipboard(*(MinecraftScreenModel **)(v8 + 380));
  ManifestValidationScreenController::_validate((ManifestValidationScreenController *)v8);
  return v8;
}


int __fastcall ManifestValidationScreenController::_handleCopyToClipboard(ManifestValidationScreenController *this)
{
  int v1; // r2@1

  v1 = *((_DWORD *)this + 95);
  return j_j_j__ZNK20MinecraftScreenModel12setClipboardERKSs();
}


int __fastcall ManifestValidationScreenController::_getIconFileSystem(ManifestValidationScreenController *this)
{
  ManifestValidationScreenController *v1; // r4@1
  PackManifest *v2; // r5@1
  int result; // r0@3
  int v4; // r0@6

  v1 = this;
  v2 = (PackManifest *)*((_DWORD *)this + 115);
  if ( !v2 )
    goto LABEL_9;
  if ( PackManifest::getPackOrigin(*((PackManifest **)this + 115)) == 1 )
    return 1;
  if ( PackManifest::getManifestOrigin(v2) != 2 )
  {
    result = 2;
  }
  else
LABEL_9:
    v4 = MinecraftScreenModel::getResourcePackRepository(*((MinecraftScreenModel **)v1 + 95));
    result = j_j_j__ZNK12ResourcePack16getIconFileSytemEv(*(ResourcePack **)(v4 + 40));
  return result;
}


void __fastcall ManifestValidationScreenController::_getPackHeaderDescription(ManifestValidationScreenController *this, int a2)
{
  ManifestValidationScreenController::_getPackHeaderDescription(this, a2);
}


void __fastcall ManifestValidationScreenController::_getPackType(ManifestValidationScreenController *this, int a2)
{
  ManifestValidationScreenController::_getPackType(this, a2);
}


void __fastcall ManifestValidationScreenController::_getPackHeaderTitle(ManifestValidationScreenController *this, int a2)
{
  ManifestValidationScreenController::_getPackHeaderTitle(this, a2);
}


_DWORD *__fastcall ManifestValidationScreenController::_getPackHeaderSize(ManifestValidationScreenController *this, int a2)
{
  Util *v2; // r4@1
  PackManifest *v3; // r0@1
  __int64 v4; // r0@2
  unsigned __int64 v5; // r2@2
  int v7; // [sp+4h] [bp-2Ch]@3
  int v8; // [sp+8h] [bp-28h]@3
  char v9; // [sp+Ch] [bp-24h]@3
  void (*v10)(void); // [sp+14h] [bp-1Ch]@3
  int v11; // [sp+20h] [bp-10h]@1
  int v12; // [sp+24h] [bp-Ch]@1

  v2 = this;
  v11 = 0;
  v12 = 0;
  v3 = *(PackManifest **)(a2 + 460);
  if ( v3 )
  {
    v4 = PackManifest::getPackSize(v3);
    v5 = v4;
    *(_QWORD *)&v11 = v4;
  }
  else
    v7 = *(_DWORD *)(a2 + 432);
    v8 = *(_DWORD *)(v7 - 12);
    Core::FileSystem::getFileSize((int)&v9, (__int64 *)&v7, (int)&v11);
    if ( v10 )
      v10();
    v5 = *(_QWORD *)&v11;
  return Util::getFilesizeString(v2, SHIDWORD(v4), v5);
}


void __fastcall ManifestValidationScreenController::~ManifestValidationScreenController(ManifestValidationScreenController *this)
{
  ManifestValidationScreenController::~ManifestValidationScreenController(this);
}


void __fastcall ManifestValidationScreenController::_delete(ManifestValidationScreenController *this)
{
  ManifestValidationScreenController *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@3
  ResourcePackRepository *v4; // r0@5

  v1 = this;
  v2 = *((_DWORD *)this + 115);
  *((_DWORD *)v1 + 115) = 0;
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  v3 = *((_DWORD *)v1 + 112);
  if ( v3 )
  {
    j_j_j__ZN14ContentManager13deleteContentEPK11ContentItem(
      *(ContentManager **)(*(_DWORD *)(v3 + 56) + 20),
      (const ContentItem *)v3);
  }
  else
    v4 = (ResourcePackRepository *)MinecraftScreenModel::getResourcePackRepository(*((MinecraftScreenModel **)v1 + 95));
    j_j_j__ZN22ResourcePackRepository10deletePackERK16ResourceLocation(
      v4,
      (ManifestValidationScreenController *)((char *)v1 + 424));
}


char *__fastcall ManifestValidationScreenController::_generateBaseIconPath(ManifestValidationScreenController *this, const PackManifest *a2, PackManifest *a3)
{
  void **v3; // r6@1
  char *v4; // r0@1
  void *v5; // r0@1
  unsigned int v6; // r0@3
  unsigned int v7; // r3@4
  unsigned int v8; // r2@4
  void *v9; // r0@5
  _BYTE *v10; // r0@6
  char *result; // r0@9
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  unsigned int *v14; // r2@19
  signed int v15; // r1@21
  unsigned int *v16; // r2@23
  signed int v17; // r1@25
  int v18; // [sp+0h] [bp-458h]@5
  _BYTE *v19; // [sp+8h] [bp-450h]@3
  _DWORD *v20; // [sp+Ch] [bp-44Ch]@2
  int v21; // [sp+10h] [bp-448h]@2
  int v22; // [sp+14h] [bp-444h]@1
  int v23; // [sp+18h] [bp-440h]@1
  int v24; // [sp+1Ch] [bp-43Ch]@1
  char v25; // [sp+20h] [bp-438h]@1
  void (*v26)(void); // [sp+28h] [bp-430h]@7
  char v27; // [sp+30h] [bp-428h]@2
  int v28; // [sp+3Ch] [bp-41Ch]@1
  char v29; // [sp+40h] [bp-418h]@1
  int v30; // [sp+440h] [bp-18h]@1
  RakNet *v31; // [sp+444h] [bp-14h]@1

  v3 = (void **)this;
  v31 = _stack_chk_guard;
  v28 = 1023;
  v30 = 0;
  v29 = 0;
  v4 = PackManifest::getLocation(a3);
  ResourceLocation::getFullPath((ResourceLocation *)&v22, (int)v4);
  v23 = v22;
  v24 = *(_DWORD *)(v22 - 12);
  Core::FileSystem::cleanPath_deprecated((int)&v25, (int)&v28, (__int64 *)&v23);
  v5 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v22 - 4);
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
      j_j_j_j_j__ZdlPv_9_2(v5);
  }
  sub_15903B4(v3, (unsigned int)&v29, v30);
  v27 |= 2u;
  v20 = *v3;
  v21 = *(v20 - 3);
  if ( Core::FileSystem::fileOrDirectoryExists((__int64 *)&v20) == 1 )
    sub_1590164((void **)&v19, "data/");
    v6 = sub_15904A4((int *)v3, v19, 0, *((_DWORD *)v19 - 3));
    if ( v6 != -1 )
      v7 = *((_DWORD *)*v3 - 3);
      v8 = *((_DWORD *)v19 - 3) + v6;
      if ( v7 < v8 )
        sub_1590204("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v8, v7);
      sub_15901F4((void **)&v18, (int *)v3, v8, 0xFFFFFFFF);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)v3,
        &v18);
      v9 = (void *)(v18 - 12);
      if ( (int *)(v18 - 12) != &dword_28898C0 )
      {
        v16 = (unsigned int *)(v18 - 4);
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
          j_j_j_j_j__ZdlPv_9_2(v9);
      }
    v10 = v19 - 12;
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v19 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      else
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v10);
  if ( v26 )
    v26();
  result = (char *)(_stack_chk_guard - v31);
  if ( _stack_chk_guard != v31 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall ManifestValidationScreenController::_registerEventHandlers(ManifestValidationScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  void *v5; // r0@3
  int v6; // r5@4
  _DWORD *v7; // r0@4
  __int64 v8; // r1@4
  void *v9; // r0@6
  int v10; // r5@7
  _DWORD *v11; // r0@7
  __int64 v12; // r1@7
  void *v13; // r0@9
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  _DWORD *v20; // [sp+4h] [bp-5Ch]@7
  __int64 v21; // [sp+Ch] [bp-54h]@7
  int v22; // [sp+18h] [bp-48h]@7
  _DWORD *v23; // [sp+1Ch] [bp-44h]@4
  __int64 v24; // [sp+24h] [bp-3Ch]@4
  int v25; // [sp+30h] [bp-30h]@4
  _DWORD *v26; // [sp+34h] [bp-2Ch]@1
  __int64 v27; // [sp+3Ch] [bp-24h]@1
  int v28; // [sp+48h] [bp-18h]@1

  v1 = this;
  sub_1590164((void **)&v28, "button.delete_manifest");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v28);
  v3 = operator new(4u);
  LODWORD(v4) = sub_11C2FE8;
  *v3 = v1;
  HIDWORD(v4) = sub_11C2D98;
  v26 = v3;
  v27 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v26);
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  v5 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v28 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v5);
  }
  sub_1590164((void **)&v25, "button.copy_to_clipboard");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v25);
  v7 = operator new(4u);
  LODWORD(v8) = sub_11C33CE;
  *v7 = v1;
  HIDWORD(v8) = sub_11C33B8;
  v23 = v7;
  v24 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v23);
  if ( (_DWORD)v24 )
    ((void (*)(void))v24)();
  v9 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v25 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v9);
  sub_1590164((void **)&v22, "button.refresh_manifest");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v22);
  v11 = operator new(4u);
  LODWORD(v12) = sub_11C342C;
  *v11 = v1;
  HIDWORD(v12) = sub_11C3404;
  v20 = v11;
  v21 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v20);
  if ( (_DWORD)v21 )
    ((void (*)(void))v21)();
  v13 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v22 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v13);
}


void __fastcall ManifestValidationScreenController::_colorLocString(int *a1, int a2, int a3, int **a4)
{
  int *v4; // r4@1
  int **v5; // r5@1
  const void **v6; // r0@7
  const void **v7; // r0@7
  char *v8; // r0@7
  void *v9; // r0@8
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  char *v12; // r0@14
  unsigned int *v13; // r2@16
  signed int v14; // r1@18
  unsigned int *v15; // r2@20
  signed int v16; // r1@22
  int v17; // [sp+0h] [bp-20h]@7
  char *v18; // [sp+4h] [bp-1Ch]@7
  _BYTE **v19; // [sp+8h] [bp-18h]@1

  v4 = a1;
  v5 = a4;
  v19 = (_BYTE **)&unk_28898CC;
  if ( a3 )
  {
    if ( a3 == 2 )
    {
      EntityInteraction::setInteractText((int *)&v19, (int *)&unk_27DBF14);
    }
    else
      if ( a3 != 1 )
      {
        I18n::get(a1, a4);
        goto LABEL_14;
      }
      EntityInteraction::setInteractText((int *)&v19, (int *)&unk_27DBF0C);
  }
  else
    EntityInteraction::setInteractText((int *)&v19, (int *)&unk_27DBF04);
  I18n::get(&v17, v5);
  v6 = sub_1590244((const void **)&v17, 0, (unsigned int)v19, *(v19 - 3));
  v18 = (char *)*v6;
  *v6 = &unk_28898CC;
  v7 = sub_1590394((const void **)&v18, (const void **)&unk_27DBF28);
  *v4 = (int)*v7;
  *v7 = &unk_28898CC;
  v8 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v8);
  v9 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v17 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v9);
LABEL_14:
  v12 = (char *)(v19 - 3);
  if ( (int *)(v19 - 3) != &dword_28898C0 )
    v13 = (unsigned int *)(v19 - 1);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v12);
}


void __fastcall ManifestValidationScreenController::_getPackVersion(ManifestValidationScreenController *this, int a2)
{
  ManifestValidationScreenController::_getPackVersion(this, a2);
}


RakNet *__fastcall ManifestValidationScreenController::_getIconPath(ManifestValidationScreenController *this, int a2)
{
  int v2; // r5@1
  const void **v3; // r4@1
  PackManifest *v4; // r2@1
  RakNet *result; // r0@2
  int v6; // r0@4
  unsigned int *v7; // r12@6
  signed int v8; // r1@8

  v2 = a2;
  v3 = (const void **)this;
  v4 = *(PackManifest **)(a2 + 460);
  if ( v4 )
  {
    ManifestValidationScreenController::_generateIconPath(this, (const PackManifest *)a2, v4);
    result = (RakNet *)((char *)*v3 - 12);
    if ( *(_DWORD *)result )
      return result;
    if ( (int *)result != &dword_28898C0 )
    {
      v7 = (unsigned int *)((char *)*v3 - 4);
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
        j_j_j_j_j__ZdlPv_9_2((void *)result);
    }
  }
  v6 = MinecraftScreenModel::getResourcePackRepository(*(MinecraftScreenModel **)(v2 + 380));
  return ResourcePack::getIconPath(v3, *(_DWORD *)(v6 + 40), 1);
}


signed int __fastcall ManifestValidationScreenController::_getFileSystemFromOrigin(ManifestValidationScreenController *this, const PackManifest *a2)
{
  PackManifest *v2; // r4@1
  signed int result; // r0@2
  int v4; // r1@3

  v2 = a2;
  if ( PackManifest::getPackOrigin(a2) == 1 )
  {
    result = 1;
  }
  else
    v4 = PackManifest::getManifestOrigin(v2);
    result = 2;
    if ( v4 == 2 )
      result = 11;
  return result;
}


void __fastcall ManifestValidationScreenController::~ManifestValidationScreenController(ManifestValidationScreenController *this)
{
  ManifestValidationScreenController *v1; // r0@1

  v1 = ManifestValidationScreenController::~ManifestValidationScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


PackReport *__fastcall ManifestValidationScreenController::_handleManifestRefresh(ManifestValidationScreenController *this)
{
  ManifestValidationScreenController *v1; // r4@1
  int v2; // r0@1
  PackManagerContentSource *v3; // r5@2
  UIDefRepository *v4; // r0@2

  v1 = this;
  v2 = *((_DWORD *)this + 112);
  if ( v2 )
  {
    v3 = *(PackManagerContentSource **)(v2 + 56);
    v4 = (UIDefRepository *)MinecraftScreenModel::getUIDefRepo(*((MinecraftScreenModel **)v1 + 95));
    PackManagerContentSource::repopulateReports(v3, v4);
  }
  return j_j_j__ZN34ManifestValidationScreenController9_validateEv(v1);
}


ManifestValidationScreenController *__fastcall ManifestValidationScreenController::~ManifestValidationScreenController(ManifestValidationScreenController *this)
{
  ManifestValidationScreenController *v1; // r5@1
  int v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  int v5; // r1@4
  void *v6; // r0@4
  int v7; // r1@5
  void *v8; // r0@5
  int v9; // r1@6
  void *v10; // r0@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  unsigned int *v14; // r2@12
  signed int v15; // r1@14
  unsigned int *v16; // r2@16
  signed int v17; // r1@18
  unsigned int *v18; // r2@20
  signed int v19; // r1@22

  v1 = this;
  *(_DWORD *)this = &off_26E25FC;
  v2 = *((_DWORD *)this + 115);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 115) = 0;
  v3 = *((_DWORD *)v1 + 110);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v3 - 4);
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
      j_j_j_j_j__ZdlPv_9_2(v4);
  }
  v5 = *((_DWORD *)v1 + 109);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v5 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v6);
  v7 = *((_DWORD *)v1 + 108);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v7 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v8);
  v9 = *((_DWORD *)v1 + 106);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v9 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v10);
  MinecraftScreenController::~MinecraftScreenController(v1);
  return v1;
}


void __fastcall ManifestValidationScreenController::_registerBindings(ManifestValidationScreenController *this)
{
  ManifestValidationScreenController::_registerBindings(this);
}


void __fastcall ManifestValidationScreenController::_getPackID(ManifestValidationScreenController *this, int a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  PackManifest *v4; // r0@1
  int v5; // r1@3
  void *v6; // r0@5
  void *v7; // r0@9
  unsigned int *v8; // r2@10
  signed int v9; // r1@12
  int v10; // r1@14
  void *v11; // r0@14
  char *v12; // r4@16
  int v13; // r6@16
  unsigned int *v14; // r2@18
  signed int v15; // r1@20
  int *v16; // r0@26
  void *v17; // r0@31
  void *v18; // r0@32
  char *v19; // r0@33
  unsigned int *v20; // r2@35
  signed int v21; // r1@37
  unsigned int *v22; // r2@39
  signed int v23; // r1@41
  unsigned int *v24; // r2@43
  signed int v25; // r1@45
  unsigned int *v26; // r2@59
  signed int v27; // r1@61
  unsigned int *v28; // r2@67
  signed int v29; // r1@69
  int v30; // [sp+4h] [bp-64h]@16
  char *v31; // [sp+8h] [bp-60h]@16
  char *v32; // [sp+Ch] [bp-5Ch]@16
  char *v33; // [sp+10h] [bp-58h]@16
  int v34; // [sp+18h] [bp-50h]@16
  int v35; // [sp+1Ch] [bp-4Ch]@9
  __int64 v36; // [sp+20h] [bp-48h]@7
  __int64 v37; // [sp+28h] [bp-40h]@8
  int v38; // [sp+34h] [bp-34h]@14
  int v39; // [sp+38h] [bp-30h]@14
  int v40; // [sp+3Ch] [bp-2Ch]@3
  _DWORD *v41; // [sp+40h] [bp-28h]@1

  v2 = (int *)this;
  v3 = a2;
  v41 = &unk_28898CC;
  v4 = *(PackManifest **)(a2 + 460);
  if ( v4 && PackManifest::hasValidUUID(v4) == 1 )
  {
    PackManifest::getIdentity(*(PackManifest **)(v3 + 460));
    mce::UUID::asString((mce::UUID *)&v40);
    v5 = v40;
    if ( *(_DWORD *)(v40 - 12) )
    {
      EntityInteraction::setInteractText((int *)&v41, &v40);
      v5 = v40;
    }
    v6 = (void *)(v5 - 12);
    if ( (int *)(v5 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v5 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
      }
      else
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v6);
  }
  if ( *(v41 - 3) )
    mce::UUID::fromString((int)&v36, (int *)&v41);
    if ( *(_QWORD *)&mce::UUID::EMPTY != v36 )
      goto LABEL_16;
    if ( qword_287E930 != v37 )
    ManifestValidationScreenController::_colorLocString(&v35, v37, 1, &v41);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v41,
      &v35);
    v7 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) == &dword_28898C0 )
    v8 = (unsigned int *)(v35 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      goto LABEL_72;
    goto LABEL_71;
  sub_1590164((void **)&v38, "manifestvalidation.unkown.packid");
  ManifestValidationScreenController::_colorLocString(&v39, v10, 1, (int **)&v38);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v41,
    &v39);
  v11 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v39 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
    else
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v11);
  v7 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v38 - 4);
LABEL_72:
      if ( v9 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v7);
LABEL_71:
    v9 = (*v8)--;
    goto LABEL_72;
LABEL_16:
  sub_1590164((void **)&v34, "manifestvalidation.packid");
  sub_15901A4(&v30, (int *)&v41);
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v31 = (char *)operator new(4u);
  v33 = v31 + 4;
  v32 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v30,
                  (int)&v31,
                  (int)v31);
  I18n::get(v2, &v34, (unsigned __int64 *)&v31);
  v13 = (int)v32;
  v12 = v31;
  if ( v31 != v32 )
    do
      v16 = (int *)(*(_DWORD *)v12 - 12);
      if ( v16 != &dword_28898C0 )
        v14 = (unsigned int *)(*(_DWORD *)v12 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
        }
        else
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v16);
      v12 += 4;
    while ( v12 != (char *)v13 );
    v12 = v31;
  if ( v12 )
    operator delete(v12);
  v17 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v30 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v17);
  v18 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v34 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v18);
  v19 = (char *)(v41 - 3);
  if ( v41 - 3 != &dword_28898C0 )
    v24 = v41 - 1;
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v19);
}


void __fastcall ManifestValidationScreenController::_registerBindings(ManifestValidationScreenController *this)
{
  ManifestValidationScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  _DWORD *v5; // r0@5
  __int64 v6; // r1@5
  __int64 v7; // r1@5
  _DWORD *v8; // r0@9
  __int64 v9; // r1@9
  __int64 v10; // r1@9
  _DWORD *v11; // r0@13
  __int64 v12; // r1@13
  __int64 v13; // r1@13
  _DWORD *v14; // r0@17
  __int64 v15; // r1@17
  __int64 v16; // r1@17
  _DWORD *v17; // r0@21
  __int64 v18; // r1@21
  __int64 v19; // r1@21
  _DWORD *v20; // r0@25
  __int64 v21; // r1@25
  __int64 v22; // r1@25
  _DWORD *v23; // r0@29
  __int64 v24; // r1@29
  __int64 v25; // r1@29
  _DWORD *v26; // r0@33
  __int64 v27; // r1@33
  __int64 v28; // r1@33
  _DWORD *v29; // r0@37
  __int64 v30; // r1@37
  __int64 v31; // r1@37
  _DWORD *v32; // r0@41
  __int64 v33; // r1@41
  __int64 v34; // r1@41
  _DWORD *v35; // r0@45
  __int64 v36; // r1@45
  __int64 v37; // r1@45
  _DWORD *v38; // r0@49
  __int64 v39; // r1@49
  __int64 v40; // r1@49
  _DWORD *v41; // r0@53
  __int64 v42; // r1@53
  __int64 v43; // r1@53
  _DWORD *v44; // r0@57
  __int64 v45; // r1@57
  __int64 v46; // r1@57
  void *v47; // [sp+4h] [bp-224h]@57
  __int64 v48; // [sp+Ch] [bp-21Ch]@57
  _DWORD *v49; // [sp+14h] [bp-214h]@57
  __int64 v50; // [sp+1Ch] [bp-20Ch]@57
  int v51; // [sp+24h] [bp-204h]@57
  void *v52; // [sp+28h] [bp-200h]@53
  __int64 v53; // [sp+30h] [bp-1F8h]@53
  _DWORD *v54; // [sp+38h] [bp-1F0h]@53
  __int64 v55; // [sp+40h] [bp-1E8h]@53
  int v56; // [sp+48h] [bp-1E0h]@53
  void *v57; // [sp+4Ch] [bp-1DCh]@49
  __int64 v58; // [sp+54h] [bp-1D4h]@49
  _DWORD *v59; // [sp+5Ch] [bp-1CCh]@49
  __int64 v60; // [sp+64h] [bp-1C4h]@49
  int v61; // [sp+6Ch] [bp-1BCh]@49
  void *v62; // [sp+70h] [bp-1B8h]@45
  __int64 v63; // [sp+78h] [bp-1B0h]@45
  _DWORD *v64; // [sp+80h] [bp-1A8h]@45
  __int64 v65; // [sp+88h] [bp-1A0h]@45
  int v66; // [sp+90h] [bp-198h]@45
  void *v67; // [sp+94h] [bp-194h]@41
  __int64 v68; // [sp+9Ch] [bp-18Ch]@41
  _DWORD *v69; // [sp+A4h] [bp-184h]@41
  __int64 v70; // [sp+ACh] [bp-17Ch]@41
  int v71; // [sp+B4h] [bp-174h]@41
  void *v72; // [sp+B8h] [bp-170h]@37
  __int64 v73; // [sp+C0h] [bp-168h]@37
  _DWORD *v74; // [sp+C8h] [bp-160h]@37
  __int64 v75; // [sp+D0h] [bp-158h]@37
  int v76; // [sp+D8h] [bp-150h]@37
  void *v77; // [sp+DCh] [bp-14Ch]@33
  __int64 v78; // [sp+E4h] [bp-144h]@33
  _DWORD *v79; // [sp+ECh] [bp-13Ch]@33
  __int64 v80; // [sp+F4h] [bp-134h]@33
  int v81; // [sp+FCh] [bp-12Ch]@33
  void *v82; // [sp+100h] [bp-128h]@29
  __int64 v83; // [sp+108h] [bp-120h]@29
  _DWORD *v84; // [sp+110h] [bp-118h]@29
  __int64 v85; // [sp+118h] [bp-110h]@29
  int v86; // [sp+120h] [bp-108h]@29
  void *v87; // [sp+124h] [bp-104h]@25
  __int64 v88; // [sp+12Ch] [bp-FCh]@25
  _DWORD *v89; // [sp+134h] [bp-F4h]@25
  __int64 v90; // [sp+13Ch] [bp-ECh]@25
  int v91; // [sp+144h] [bp-E4h]@25
  void *v92; // [sp+148h] [bp-E0h]@21
  __int64 v93; // [sp+150h] [bp-D8h]@21
  _DWORD *v94; // [sp+158h] [bp-D0h]@21
  __int64 v95; // [sp+160h] [bp-C8h]@21
  int v96; // [sp+168h] [bp-C0h]@21
  void *v97; // [sp+16Ch] [bp-BCh]@17
  __int64 v98; // [sp+174h] [bp-B4h]@17
  _DWORD *v99; // [sp+17Ch] [bp-ACh]@17
  __int64 v100; // [sp+184h] [bp-A4h]@17
  int v101; // [sp+18Ch] [bp-9Ch]@17
  void *v102; // [sp+190h] [bp-98h]@13
  __int64 v103; // [sp+198h] [bp-90h]@13
  _DWORD *v104; // [sp+1A0h] [bp-88h]@13
  __int64 v105; // [sp+1A8h] [bp-80h]@13
  int v106; // [sp+1B0h] [bp-78h]@13
  void *v107; // [sp+1B4h] [bp-74h]@9
  __int64 v108; // [sp+1BCh] [bp-6Ch]@9
  _DWORD *v109; // [sp+1C4h] [bp-64h]@9
  __int64 v110; // [sp+1CCh] [bp-5Ch]@9
  int v111; // [sp+1D4h] [bp-54h]@9
  void *v112; // [sp+1D8h] [bp-50h]@5
  __int64 v113; // [sp+1E0h] [bp-48h]@5
  _DWORD *v114; // [sp+1E8h] [bp-40h]@5
  __int64 v115; // [sp+1F0h] [bp-38h]@5
  int v116; // [sp+1F8h] [bp-30h]@5
  void *v117; // [sp+1FCh] [bp-2Ch]@1
  __int64 v118; // [sp+204h] [bp-24h]@1
  _DWORD *v119; // [sp+20Ch] [bp-1Ch]@1
  __int64 v120; // [sp+214h] [bp-14h]@1
  int v121; // [sp+21Ch] [bp-Ch]@1

  v1 = this;
  v121 = -186145655;
  v2 = operator new(4u);
  LODWORD(v3) = sub_11C346E;
  *v2 = v1;
  HIDWORD(v3) = sub_11C3462;
  v119 = v2;
  v120 = v3;
  v117 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v118 = v4;
  ScreenController::bindString((int)v1, &v121, (int)&v119, (int)&v117);
  if ( (_DWORD)v118 )
    ((void (*)(void))v118)();
  if ( (_DWORD)v120 )
    ((void (*)(void))v120)();
  v116 = -983422617;
  v5 = operator new(4u);
  LODWORD(v6) = sub_11C352C;
  *v5 = v1;
  HIDWORD(v6) = sub_11C34A4;
  v114 = v5;
  v115 = v6;
  v112 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v113 = v7;
  ScreenController::bindString((int)v1, &v116, (int)&v114, (int)&v112);
  if ( (_DWORD)v113 )
    ((void (*)(void))v113)();
  if ( (_DWORD)v115 )
    ((void (*)(void))v115)();
  v111 = 1659133967;
  v8 = operator new(4u);
  LODWORD(v9) = sub_11C356E;
  *v8 = v1;
  HIDWORD(v9) = sub_11C3562;
  v109 = v8;
  v110 = v9;
  v107 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v108 = v10;
  ScreenController::bindString((int)v1, &v111, (int)&v109, (int)&v107);
  if ( (_DWORD)v108 )
    ((void (*)(void))v108)();
  if ( (_DWORD)v110 )
    ((void (*)(void))v110)();
  v106 = -1417655854;
  v11 = operator new(4u);
  LODWORD(v12) = sub_11C35F6;
  *v11 = v1;
  HIDWORD(v12) = sub_11C35A4;
  v104 = v11;
  v105 = v12;
  v102 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v103 = v13;
  ScreenController::bindString((int)v1, &v106, (int)&v104, (int)&v102);
  if ( (_DWORD)v103 )
    ((void (*)(void))v103)();
  if ( (_DWORD)v105 )
    ((void (*)(void))v105)();
  v101 = 436897493;
  v14 = operator new(4u);
  LODWORD(v15) = sub_11C363C;
  *v14 = v1;
  HIDWORD(v15) = sub_11C362C;
  v99 = v14;
  v100 = v15;
  v97 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v98 = v16;
  ScreenController::bindBool((int)v1, &v101, (int)&v99, (int)&v97);
  if ( (_DWORD)v98 )
    ((void (*)(void))v98)();
  if ( (_DWORD)v100 )
    ((void (*)(void))v100)();
  v96 = 1232321188;
  v17 = operator new(4u);
  LODWORD(v18) = sub_11C3682;
  *v17 = v1;
  HIDWORD(v18) = sub_11C3672;
  v94 = v17;
  v95 = v18;
  v92 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v93 = v19;
  ScreenController::bindBool((int)v1, &v96, (int)&v94, (int)&v92);
  if ( (_DWORD)v93 )
    ((void (*)(void))v93)();
  if ( (_DWORD)v95 )
    ((void (*)(void))v95)();
  v91 = -1794722200;
  v20 = operator new(4u);
  LODWORD(v21) = sub_11C36C8;
  *v20 = v1;
  HIDWORD(v21) = sub_11C36B8;
  v89 = v20;
  v90 = v21;
  v87 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v88 = v22;
  ScreenController::bindBool((int)v1, &v91, (int)&v89, (int)&v87);
  if ( (_DWORD)v88 )
    ((void (*)(void))v88)();
  if ( (_DWORD)v90 )
    ((void (*)(void))v90)();
  v86 = -386078700;
  v23 = operator new(4u);
  LODWORD(v24) = sub_11C370A;
  *v23 = v1;
  HIDWORD(v24) = sub_11C36FE;
  v84 = v23;
  v85 = v24;
  v82 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v83 = v25;
  ScreenController::bindString((int)v1, &v86, (int)&v84, (int)&v82);
  if ( (_DWORD)v83 )
    ((void (*)(void))v83)();
  if ( (_DWORD)v85 )
    ((void (*)(void))v85)();
  StringHash::StringHash<char [25]>(&v81, (int)"#pack_header_description");
  v26 = operator new(4u);
  LODWORD(v27) = sub_11C374C;
  *v26 = v1;
  HIDWORD(v27) = sub_11C3740;
  v79 = v26;
  v80 = v27;
  v77 = operator new(1u);
  LODWORD(v28) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v28) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v78 = v28;
  ScreenController::bindString((int)v1, &v81, (int)&v79, (int)&v77);
  if ( (_DWORD)v78 )
    ((void (*)(void))v78)();
  if ( (_DWORD)v80 )
    ((void (*)(void))v80)();
  v76 = 573533179;
  v29 = operator new(4u);
  LODWORD(v30) = sub_11C37DA;
  *v29 = v1;
  HIDWORD(v30) = sub_11C3782;
  v74 = v29;
  v75 = v30;
  v72 = operator new(1u);
  LODWORD(v31) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v31) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v73 = v31;
  ScreenController::bindString((int)v1, &v76, (int)&v74, (int)&v72);
  if ( (_DWORD)v73 )
    ((void (*)(void))v73)();
  if ( (_DWORD)v75 )
    ((void (*)(void))v75)();
  StringHash::StringHash<char [26]>(&v71, (int)"#pack_header_size_visible");
  v32 = operator new(4u);
  LODWORD(v33) = sub_11C3820;
  *v32 = v1;
  HIDWORD(v33) = sub_11C3810;
  v69 = v32;
  v70 = v33;
  v67 = operator new(1u);
  LODWORD(v34) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v34) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v68 = v34;
  ScreenController::bindBool((int)v1, &v71, (int)&v69, (int)&v67);
  if ( (_DWORD)v68 )
    ((void (*)(void))v68)();
  if ( (_DWORD)v70 )
    ((void (*)(void))v70)();
  v66 = 1266009409;
  v35 = operator new(4u);
  LODWORD(v36) = sub_11C3862;
  *v35 = v1;
  HIDWORD(v36) = sub_11C3856;
  v64 = v35;
  v65 = v36;
  v62 = operator new(1u);
  LODWORD(v37) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v37) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v63 = v37;
  ScreenController::bindString((int)v1, &v66, (int)&v64, (int)&v62);
  if ( (_DWORD)v63 )
    ((void (*)(void))v63)();
  if ( (_DWORD)v65 )
    ((void (*)(void))v65)();
  v61 = 836953856;
  v38 = operator new(4u);
  LODWORD(v39) = sub_11C38A4;
  *v38 = v1;
  HIDWORD(v39) = sub_11C3898;
  v59 = v38;
  v60 = v39;
  v57 = operator new(1u);
  LODWORD(v40) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v40) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v58 = v40;
  ScreenController::bindString((int)v1, &v61, (int)&v59, (int)&v57);
  if ( (_DWORD)v58 )
    ((void (*)(void))v58)();
  if ( (_DWORD)v60 )
    ((void (*)(void))v60)();
  v56 = 1878936171;
  v41 = operator new(4u);
  LODWORD(v42) = sub_11C38EA;
  *v41 = v1;
  HIDWORD(v42) = sub_11C38DA;
  v54 = v41;
  v55 = v42;
  v52 = operator new(1u);
  LODWORD(v43) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v43) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v53 = v43;
  ScreenController::bindString((int)v1, &v56, (int)&v54, (int)&v52);
  if ( (_DWORD)v53 )
    ((void (*)(void))v53)();
  if ( (_DWORD)v55 )
    ((void (*)(void))v55)();
  v51 = 555663427;
  v44 = operator new(4u);
  LODWORD(v45) = sub_11C3930;
  *v44 = v1;
  HIDWORD(v45) = sub_11C3920;
  v49 = v44;
  v50 = v45;
  v47 = operator new(1u);
  LODWORD(v46) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v46) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v48 = v46;
  ScreenController::bindString((int)v1, &v51, (int)&v49, (int)&v47);
  if ( (_DWORD)v48 )
    ((void (*)(void))v48)();
  if ( (_DWORD)v50 )
    ((void (*)(void))v50)();
}


void __fastcall ManifestValidationScreenController::_colorLocString(int *a1, int a2, int a3, int **a4)
{
  ManifestValidationScreenController::_colorLocString(a1, a2, a3, a4);
}


void __fastcall ManifestValidationScreenController::_getPackHeaderDescription(ManifestValidationScreenController *this, int a2)
{
  int v2; // r1@1
  int *v3; // r4@1
  int *v4; // r0@2
  int v5; // r1@4
  void *v6; // r0@4
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  unsigned int *v9; // r12@14
  signed int v10; // r1@16
  int v11; // [sp+8h] [bp-20h]@4

  v2 = *(_DWORD *)(a2 + 460);
  v3 = (int *)this;
  if ( v2 )
  {
    PackManifest::getDescription(this, v2);
    v4 = (int *)(*v3 - 12);
    if ( *v4 )
      return;
    if ( v4 != &dword_28898C0 )
    {
      v9 = (unsigned int *)(*v3 - 4);
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
        j_j_j_j_j__ZdlPv_9_2(v4);
    }
  }
  sub_1590164((void **)&v11, "manifestvalidation.unkown.packdescription");
  ManifestValidationScreenController::_colorLocString(v3, v5, 1, (int **)&v11);
  v6 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v6);
}


void __fastcall ManifestValidationScreenController::_getPackVersion(ManifestValidationScreenController *this, int a2)
{
  int *v2; // r4@1
  _DWORD *v3; // r2@1
  PackManifest *v4; // r0@1
  char *v5; // r6@2
  int v6; // r1@2
  int v7; // r2@2
  int v8; // r3@2
  int *v9; // r0@2
  int v10; // r1@2
  void *v11; // r0@3
  void *v12; // r0@4
  void *v13; // r0@5
  void *v14; // r0@6
  int v15; // r1@9
  void *v16; // r0@9
  void *v17; // r0@10
  char *v18; // r4@11
  int v19; // r6@11
  unsigned int *v20; // r2@13
  signed int v21; // r1@15
  int *v22; // r0@21
  void *v23; // r0@26
  void *v24; // r0@27
  char *v25; // r0@28
  unsigned int *v26; // r2@30
  signed int v27; // r1@32
  unsigned int *v28; // r2@34
  signed int v29; // r1@36
  unsigned int *v30; // r2@38
  signed int v31; // r1@40
  unsigned int *v32; // r2@42
  signed int v33; // r1@44
  unsigned int *v34; // r2@46
  signed int v35; // r1@48
  unsigned int *v36; // r2@50
  signed int v37; // r1@52
  unsigned int *v38; // r2@66
  signed int v39; // r1@68
  unsigned int *v40; // r2@70
  signed int v41; // r1@72
  unsigned int *v42; // r2@86
  signed int v43; // r1@88
  int v44; // [sp+0h] [bp-80h]@11
  char *v45; // [sp+4h] [bp-7Ch]@11
  char *v46; // [sp+8h] [bp-78h]@11
  char *v47; // [sp+Ch] [bp-74h]@11
  int v48; // [sp+14h] [bp-6Ch]@11
  int v49; // [sp+1Ch] [bp-64h]@9
  int v50; // [sp+20h] [bp-60h]@9
  int v51; // [sp+24h] [bp-5Ch]@3
  int v52; // [sp+28h] [bp-58h]@2
  int v53; // [sp+2Ch] [bp-54h]@2
  int v54; // [sp+30h] [bp-50h]@2
  int v55; // [sp+34h] [bp-4Ch]@2
  int v56; // [sp+38h] [bp-48h]@2
  int v57; // [sp+40h] [bp-40h]@6
  int v58; // [sp+44h] [bp-3Ch]@5
  int v59; // [sp+48h] [bp-38h]@4
  char v60; // [sp+50h] [bp-30h]@2
  _DWORD *v61; // [sp+58h] [bp-28h]@1

  v2 = (int *)this;
  v3 = &unk_28898CC;
  v61 = &unk_28898CC;
  v4 = *(PackManifest **)(a2 + 460);
  if ( v4 )
  {
    v5 = PackManifest::getIdentity(v4);
    v6 = *((_DWORD *)v5 + 1);
    v7 = *((_DWORD *)v5 + 2);
    v8 = *((_DWORD *)v5 + 3);
    v52 = *(_DWORD *)v5;
    v53 = v6;
    v54 = v7;
    v55 = v8;
    SemVersion::SemVersion((int)&v56, (int)(v5 + 16));
    v60 = v5[40];
    v9 = (int *)SemVersion::asString((SemVersion *)&v56);
    EntityInteraction::setInteractText((int *)&v61, v9);
    if ( !SemVersion::isValid((SemVersion *)&v56) )
    {
      ManifestValidationScreenController::_colorLocString(&v51, v10, 2, &v61);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)&v61,
        &v51);
      v11 = (void *)(v51 - 12);
      if ( (int *)(v51 - 12) != &dword_28898C0 )
      {
        v42 = (unsigned int *)(v51 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
        }
        else
          v43 = (*v42)--;
        if ( v43 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v11);
      }
    }
    v12 = (void *)(v59 - 12);
    if ( (int *)(v59 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v59 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
      else
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v12);
    v13 = (void *)(v58 - 12);
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v58 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v13);
    v14 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v57 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v14);
    v3 = v61;
  }
  if ( !*(v3 - 3) )
    sub_1590164((void **)&v49, "manifestvalidation.unkown.packversion");
    ManifestValidationScreenController::_colorLocString(&v50, v15, 1, (int **)&v49);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v61,
      &v50);
    v16 = (void *)(v50 - 12);
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v50 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v16);
    v17 = (void *)(v49 - 12);
    if ( (int *)(v49 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v49 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v17);
  sub_1590164((void **)&v48, "manifestvalidation.packversion");
  sub_15901A4(&v44, (int *)&v61);
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v45 = (char *)operator new(4u);
  v47 = v45 + 4;
  v46 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v44,
                  (int)&v45,
                  (int)v45);
  I18n::get(v2, &v48, (unsigned __int64 *)&v45);
  v19 = (int)v46;
  v18 = v45;
  if ( v45 != v46 )
    do
      v22 = (int *)(*(_DWORD *)v18 - 12);
      if ( v22 != &dword_28898C0 )
        v20 = (unsigned int *)(*(_DWORD *)v18 - 4);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v22);
      v18 += 4;
    while ( v18 != (char *)v19 );
    v18 = v45;
  if ( v18 )
    operator delete(v18);
  v23 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v44 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
    else
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v23);
  v24 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v48 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v24);
  v25 = (char *)(v61 - 3);
  if ( v61 - 3 != &dword_28898C0 )
    v30 = v61 - 1;
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v25);
}


void __fastcall ManifestValidationScreenController::_registerEventHandlers(ManifestValidationScreenController *this)
{
  ManifestValidationScreenController::_registerEventHandlers(this);
}


void __fastcall ManifestValidationScreenController::_getPackHeaderTitle(ManifestValidationScreenController *this, int a2)
{
  int v2; // r1@1
  int *v3; // r4@1
  int *v4; // r0@2
  int v5; // r1@4
  void *v6; // r0@4
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  unsigned int *v9; // r12@14
  signed int v10; // r1@16
  int v11; // [sp+8h] [bp-20h]@4

  v2 = *(_DWORD *)(a2 + 460);
  v3 = (int *)this;
  if ( v2 )
  {
    PackManifest::getName(this, v2);
    v4 = (int *)(*v3 - 12);
    if ( *v4 )
      return;
    if ( v4 != &dword_28898C0 )
    {
      v9 = (unsigned int *)(*v3 - 4);
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
        j_j_j_j_j__ZdlPv_9_2(v4);
    }
  }
  sub_1590164((void **)&v11, "manifestvalidation.unkown.packtitle");
  ManifestValidationScreenController::_colorLocString(v3, v5, 1, (int **)&v11);
  v6 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v6);
}


void __fastcall ManifestValidationScreenController::_getPackType(ManifestValidationScreenController *this, int a2)
{
  int *v2; // r4@1
  PackManifest *v3; // r0@1
  int v4; // r0@2
  void *v5; // r0@5
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  int v8; // r1@10
  int v9; // [sp+8h] [bp-30h]@10
  int v10; // [sp+10h] [bp-28h]@20
  int v11; // [sp+18h] [bp-20h]@15
  int v12; // [sp+20h] [bp-18h]@5

  v2 = (int *)this;
  v3 = *(PackManifest **)(a2 + 460);
  if ( !v3 )
    goto LABEL_30;
  v4 = PackManifest::getPackType(v3);
  if ( v4 == 3 )
  {
    sub_1590164((void **)&v10, "menu.worldtemplates");
    I18n::get(v2, (int **)&v10);
    v5 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) == &dword_28898C0 )
      return;
    v6 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      goto LABEL_26;
    }
    goto LABEL_25;
  }
  if ( v4 == 2 )
    sub_1590164((void **)&v11, "menu.behaviors");
    I18n::get(v2, (int **)&v11);
    v5 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) == &dword_28898C0 )
    v6 = (unsigned int *)(v11 - 4);
  if ( v4 != 1 )
LABEL_30:
    sub_1590164((void **)&v9, "manifestvalidation.unkown.packtype");
    ManifestValidationScreenController::_colorLocString(v2, v8, 1, (int **)&v9);
    v5 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) == &dword_28898C0 )
    v6 = (unsigned int *)(v9 - 4);
  sub_1590164((void **)&v12, "menu.resourcepacks");
  I18n::get(v2, (int **)&v12);
  v5 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) == &dword_28898C0 )
    return;
  v6 = (unsigned int *)(v12 - 4);
  if ( &pthread_create )
    __dmb();
    do
      v7 = __ldrex(v6);
    while ( __strex(v7 - 1, v6) );
    goto LABEL_26;
LABEL_25:
  v7 = (*v6)--;
LABEL_26:
  if ( v7 <= 0 )
    j_j_j_j_j__ZdlPv_9_2(v5);
}


PackReport *__fastcall ManifestValidationScreenController::_validate(ManifestValidationScreenController *this)
{
  ManifestValidationScreenController *v1; // r6@1
  int v2; // r0@1
  int v3; // r0@4
  int v4; // r1@7
  int v5; // r0@7
  char *v6; // r0@15
  const PackContentItem *v7; // r1@16
  int v8; // r4@17
  int v9; // r1@19
  void *v10; // r0@19
  void *v11; // r0@20
  unsigned int *v12; // r2@22
  signed int v13; // r1@24
  int v14; // r0@30
  char *v15; // r1@31
  char *v16; // r0@33
  int *v17; // r1@34
  void *v18; // r5@37
  void *v19; // r9@37
  unsigned int *v20; // r2@39
  signed int v21; // r1@41
  int *v22; // r0@47
  ManifestValidationScreenController *v23; // r9@50
  int *v24; // r5@52 OVERLAPPED
  int *v25; // r6@52 OVERLAPPED
  unsigned int *v26; // r2@54
  signed int v27; // r1@56
  int *v28; // r0@62
  char *v29; // r0@68
  char *v30; // r4@68
  __int64 v31; // r0@68
  int *v32; // r11@68
  signed int v33; // r2@68
  int v34; // r0@71
  int *v35; // r5@72
  int *v36; // r7@72
  int *v37; // r1@73
  void *v38; // r5@76
  void *v39; // r10@76
  unsigned int *v40; // r2@78
  signed int v41; // r1@80
  int *v42; // r0@86
  ManifestValidationScreenController *v43; // r9@89
  int *v44; // r5@91 OVERLAPPED
  int *v45; // r6@91 OVERLAPPED
  unsigned int *v46; // r2@93
  signed int v47; // r1@95
  int *v48; // r0@101
  int *v49; // r5@107
  unsigned int *v50; // r2@108
  signed int v51; // r1@110
  unsigned int *v52; // r2@112
  signed int v53; // r1@114
  int v54; // r1@124
  void *v55; // r0@124
  int *v56; // r0@125
  int v57; // r4@129
  int v58; // r7@129
  unsigned int *v59; // r2@131
  signed int v60; // r1@133
  unsigned int *v61; // r2@135
  signed int v62; // r1@137
  unsigned int *v63; // r2@139
  signed int v64; // r1@141
  int v65; // r1@155
  void *v66; // r0@155
  int v67; // r1@156
  void *v68; // r0@156
  int v69; // r1@157
  void *v70; // r0@157
  _DWORD *v71; // r0@163
  void *v72; // r0@163
  void *v73; // r4@164
  void *v74; // r7@164
  unsigned int *v75; // r2@166
  signed int v76; // r1@168
  int *v77; // r0@174
  void *v78; // r4@179
  void *v79; // r7@179
  unsigned int *v80; // r2@181
  signed int v81; // r1@183
  int *v82; // r0@189
  void *v83; // r0@194
  char *v84; // r0@197
  char *v85; // r0@197
  int *v86; // r9@197
  __int64 v87; // kr28_8@197
  int v88; // r1@199
  void *v89; // r0@199
  void *v90; // r0@200
  unsigned int *v91; // r2@202
  signed int v92; // r1@204
  unsigned int *v93; // r2@206
  signed int v94; // r1@208
  unsigned int *v95; // r2@210
  signed int v96; // r1@212
  void *v97; // r0@226
  void *v98; // r0@227
  char *v99; // r0@228
  char *v100; // r0@228
  void *v101; // r0@228
  int *v102; // r9@230
  __int64 v103; // kr30_8@230
  unsigned int *v104; // r2@232
  signed int v105; // r1@234
  unsigned int *v106; // r2@236
  signed int v107; // r1@238
  unsigned int *v108; // r2@240
  signed int v109; // r1@242
  unsigned int *v110; // r2@244
  signed int v111; // r1@246
  unsigned int *v112; // r2@248
  signed int v113; // r1@250
  unsigned int *v114; // r2@252
  signed int v115; // r1@254
  void *v116; // r0@268
  void *v117; // r0@269
  char *v118; // r0@270
  char *v119; // r0@270
  void *v120; // r0@270
  void *v121; // r0@272
  void *v122; // r0@273
  void *v123; // r0@274
  void **v124; // r0@277
  void *v125; // r0@277
  void **v126; // r6@278
  void **v127; // r7@278
  void **v128; // r3@278
  void *v129; // r0@278
  unsigned int *v131; // r2@280
  signed int v132; // r1@282
  unsigned int *v133; // r2@284
  signed int v134; // r1@286
  unsigned int *v135; // r2@288
  signed int v136; // r1@290
  unsigned int *v137; // r2@292
  signed int v138; // r1@294
  unsigned int *v139; // r2@296
  signed int v140; // r1@298
  unsigned int *v141; // r2@328
  signed int v142; // r1@330
  unsigned int *v143; // r2@332
  signed int v144; // r1@334
  unsigned int *v145; // r2@347
  signed int v146; // r1@349
  unsigned int *v147; // r2@351
  signed int v148; // r1@353
  int i; // [sp+14h] [bp-43Ch]@17
  int *v150; // [sp+14h] [bp-43Ch]@72
  int v151; // [sp+1Ch] [bp-434h]@274
  int v152; // [sp+20h] [bp-430h]@272
  int v153; // [sp+24h] [bp-42Ch]@272
  int v154; // [sp+2Ch] [bp-424h]@19
  int v155; // [sp+30h] [bp-420h]@19
  int v156; // [sp+34h] [bp-41Ch]@252
  int v157; // [sp+3Ch] [bp-414h]@248
  int v158; // [sp+40h] [bp-410h]@244
  int v159; // [sp+44h] [bp-40Ch]@210
  int v160; // [sp+4Ch] [bp-404h]@206
  int v161; // [sp+50h] [bp-400h]@202
  int v162; // [sp+58h] [bp-3F8h]@199
  int v163; // [sp+5Ch] [bp-3F4h]@199
  void *v164; // [sp+60h] [bp-3F0h]@163
  void *v165; // [sp+64h] [bp-3ECh]@163
  int v166; // [sp+68h] [bp-3E8h]@163
  void **v167; // [sp+6Ch] [bp-3E4h]@163
  __int64 v168; // [sp+70h] [bp-3E0h]@164
  int v169; // [sp+88h] [bp-3C8h]@163
  int v170; // [sp+8Ch] [bp-3C4h]@163
  void **v171; // [sp+90h] [bp-3C0h]@72
  __int64 ptr; // [sp+94h] [bp-3BCh]@76
  int *v173; // [sp+A8h] [bp-3A8h]@73
  int *v174; // [sp+ACh] [bp-3A4h]@73
  int *v175; // [sp+B0h] [bp-3A0h]@73
  void **v176; // [sp+B4h] [bp-39Ch]@37
  __int64 v177; // [sp+B8h] [bp-398h]@37
  char *v178; // [sp+CCh] [bp-384h]@30
  int *v179; // [sp+D0h] [bp-380h]@30
  int *v180; // [sp+D4h] [bp-37Ch]@30
  int *v181; // [sp+D8h] [bp-378h]@30
  int v182; // [sp+DCh] [bp-374h]@17
  int v183; // [sp+E0h] [bp-370h]@17
  char v184; // [sp+E8h] [bp-368h]@13
  char v185; // [sp+150h] [bp-300h]@12
  char v186; // [sp+164h] [bp-2ECh]@12
  char *v187; // [sp+1D4h] [bp-27Ch]@11
  int v188; // [sp+1D8h] [bp-278h]@7
  int v189; // [sp+1DCh] [bp-274h]@6
  void **v190; // [sp+1E0h] [bp-270h]@6
  int v191; // [sp+1E4h] [bp-26Ch]@278
  void **v192; // [sp+1E8h] [bp-268h]@21
  void **v193; // [sp+1ECh] [bp-264h]@274
  int v194; // [sp+208h] [bp-248h]@278
  int v195; // [sp+210h] [bp-240h]@277
  int v196; // [sp+214h] [bp-23Ch]@278
  void **v197; // [sp+29Ch] [bp-1B4h]@6
  int v198; // [sp+2A0h] [bp-1B0h]@279
  void **v199; // [sp+2A4h] [bp-1ACh]@19
  void **v200; // [sp+2A8h] [bp-1A8h]@272
  int v201; // [sp+2C4h] [bp-18Ch]@279
  int v202; // [sp+2CCh] [bp-184h]@278
  int v203; // [sp+2D0h] [bp-180h]@279
  char v204; // [sp+358h] [bp-F8h]@6
  int v205[26]; // [sp+3C0h] [bp-90h]@2

  v1 = this;
  v2 = *((_DWORD *)this + 112);
  if ( v2 )
    PackReport::PackReport(v205, (int *)(v2 + 80));
  else
    PackReport::PackReport((int)v205);
  v3 = *((_DWORD *)v1 + 115);
  *((_DWORD *)v1 + 115) = 0;
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  PackReport::PackReport((int)&v204);
  sub_1592F24((int)&v197, 24);
  sub_1592F24((int)&v190, 24);
  PackAccessStrategyFactory::create(
    (PackAccessStrategyFactory *)&v189,
    (ManifestValidationScreenController *)((char *)v1 + 424),
    *((const IContentKeyProvider **)v1 + 114),
    (PackReport *)&v204,
    1);
  if ( v189 )
  {
    PackManifestFactory::create((PackManifest **)&v188, (char *)v1 + 452, v189, (int)v1 + 424, (int)v205, 0);
    v4 = v188;
    v188 = 0;
    v5 = *((_DWORD *)v1 + 115);
    *((_DWORD *)v1 + 115) = v4;
    if ( v5 )
    {
      (*(void (**)(void))(*(_DWORD *)v5 + 4))();
      if ( v188 )
        (*(void (**)(void))(*(_DWORD *)v188 + 4))();
    }
    if ( !PackReport::hasErrors((PackReport *)&v204) )
      v187 = (char *)&unk_28898CC;
      if ( (*(int (**)(void))(*(_DWORD *)v189 + 40))() == 1 )
      {
        Json::Reader::Reader((Json::Reader *)&v186);
        Json::Value::Value(&v185, 0);
        if ( Json::Reader::parse((int)&v186, (int *)&v187, (int)&v185, 1) == 1 )
        {
          PackReport::PackReport((int)&v184);
          PackReport::deserialize((PackReport *)&v184, (const Json::Value *)&v185);
          PackReport::merge((int)v205, (unsigned int)&v184);
          PackReport::~PackReport((PackReport *)&v184);
        }
        Json::Value::~Value((Json::Value *)&v185);
        Json::Reader::~Reader((Json::Reader *)&v186);
      }
      v6 = v187 - 12;
      if ( (int *)(v187 - 12) != &dword_28898C0 )
        v108 = (unsigned int *)(v187 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v109 = __ldrex(v108);
          while ( __strex(v109 - 1, v108) );
        else
          v109 = (*v108)--;
        if ( v109 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v6);
    v7 = (const PackContentItem *)*((_DWORD *)v1 + 112);
    if ( v7 )
      PackDependencyManager::getMissingDependencyIdentities((PackDependencyManager *)&v182, v7);
      v8 = v182;
      for ( i = v183; v8 != i; v1 = v23 )
        v179 = 0;
        v180 = 0;
        v181 = 0;
        mce::UUID::asString((mce::UUID *)&v178);
        v14 = (int)v180;
        if ( v180 == v181 )
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
            (unsigned __int64 *)&v179,
            &v178);
          v15 = v178;
          *v180 = (int)v178;
          v15 = (char *)&unk_28898CC;
          v178 = (char *)&unk_28898CC;
          v180 = (int *)(v14 + 4);
        v16 = v15 - 12;
        if ( (int *)(v15 - 12) != &dword_28898C0 )
          v12 = (unsigned int *)(v15 - 4);
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
            j_j_j_j_j__ZdlPv_9_2(v16);
        v17 = (int *)SemVersion::asString((SemVersion *)(v8 + 16));
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
            v17);
          sub_15901A4(v180, v17);
          ++v180;
        PackDiscoveryError::PackDiscoveryError(&v176, 20, (unsigned __int64 *)&v179);
        PackReport::addWarning<PackDiscoveryError>((int)v205, (int)&v176);
        v176 = &off_26D9084;
        v19 = (void *)HIDWORD(v177);
        v18 = (void *)v177;
        if ( (_DWORD)v177 != HIDWORD(v177) )
            v22 = (int *)(*(_DWORD *)v18 - 12);
            if ( v22 != &dword_28898C0 )
            {
              v20 = (unsigned int *)(*(_DWORD *)v18 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v21 = __ldrex(v20);
                while ( __strex(v21 - 1, v20) );
              }
              else
                v21 = (*v20)--;
              if ( v21 <= 0 )
                j_j_j_j_j__ZdlPv_9_2(v22);
            }
            v18 = (char *)v18 + 4;
          while ( v18 != v19 );
          v18 = (void *)v177;
        v23 = v1;
        if ( v18 )
          operator delete(v18);
        *(_QWORD *)&v24 = *(_QWORD *)&v179;
        if ( v179 != v180 )
            v28 = (int *)(*v24 - 12);
            if ( v28 != &dword_28898C0 )
              v26 = (unsigned int *)(*v24 - 4);
                  v27 = __ldrex(v26);
                while ( __strex(v27 - 1, v26) );
                v27 = (*v26)--;
              if ( v27 <= 0 )
                j_j_j_j_j__ZdlPv_9_2(v28);
            ++v24;
          while ( v24 != v25 );
          v24 = v179;
        if ( v24 )
          operator delete(v24);
        v8 += 48;
      v29 = PackManifest::getLegacyModuleDependencies(*(PackManifest **)(*((_DWORD *)v1 + 112) + 60));
      v30 = v29;
      v31 = *(_QWORD *)v29;
      v32 = 0;
      v33 = HIDWORD(v31) - v31;
      if ( (HIDWORD(v31) - (signed int)v31) >> 3 )
        if ( (unsigned int)(v33 >> 3) >= 0x20000000 )
          sub_1590364();
        v32 = (int *)operator new(v33);
        v31 = *(_QWORD *)v30;
      v34 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<LegacyPackIdVersion const*,std::vector<LegacyPackIdVersion,std::allocator<LegacyPackIdVersion>>>,LegacyPackIdVersion*>(
              (int *)v31,
              (int *)HIDWORD(v31),
              (int)v32);
      if ( v32 != (int *)v34 )
        v150 = (int *)v34;
        v35 = (int *)&v171;
        v36 = v32;
        do
          v173 = 0;
          v174 = 0;
          v175 = 0;
            (unsigned __int64 *)&v173,
            v36);
          v37 = v36 + 1;
          if ( v174 == v175 )
            std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
              (unsigned __int64 *)&v173,
              v37);
            sub_15901A4(v174, v37);
            ++v174;
          PackDiscoveryError::PackDiscoveryError(v35, 20, (unsigned __int64 *)&v173);
          PackReport::addWarning<PackDiscoveryError>((int)v205, (int)v35);
          v171 = &off_26D9084;
          v38 = (void *)HIDWORD(ptr);
          v39 = (void *)ptr;
          if ( (_DWORD)ptr != HIDWORD(ptr) )
              v42 = (int *)(*(_DWORD *)v39 - 12);
              if ( v42 != &dword_28898C0 )
                v40 = (unsigned int *)(*(_DWORD *)v39 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v41 = __ldrex(v40);
                  while ( __strex(v41 - 1, v40) );
                }
                else
                  v41 = (*v40)--;
                if ( v41 <= 0 )
                  j_j_j_j_j__ZdlPv_9_2(v42);
              v39 = (char *)v39 + 4;
            while ( v39 != v38 );
            v39 = (void *)ptr;
          v43 = v1;
          if ( v39 )
            operator delete(v39);
          *(_QWORD *)&v44 = *(_QWORD *)&v173;
          if ( v173 != v174 )
              v48 = (int *)(*v44 - 12);
              if ( v48 != &dword_28898C0 )
                v46 = (unsigned int *)(*v44 - 4);
                    v47 = __ldrex(v46);
                  while ( __strex(v47 - 1, v46) );
                  v47 = (*v46)--;
                if ( v47 <= 0 )
                  j_j_j_j_j__ZdlPv_9_2(v48);
              ++v44;
            while ( v44 != v45 );
            v44 = v173;
          if ( v44 )
            operator delete(v44);
          v36 += 2;
          v35 = (int *)&v171;
          v1 = v43;
        while ( v36 != v150 );
        v49 = v32;
          v54 = v49[1];
          v55 = (void *)(v54 - 12);
          if ( (int *)(v54 - 12) != &dword_28898C0 )
            v50 = (unsigned int *)(v54 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v51 = __ldrex(v50);
              while ( __strex(v51 - 1, v50) );
            else
              v51 = (*v50)--;
            if ( v51 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v55);
          v56 = (int *)(*v49 - 12);
          if ( v56 != &dword_28898C0 )
            v52 = (unsigned int *)(*v49 - 4);
                v53 = __ldrex(v52);
              while ( __strex(v53 - 1, v52) );
              v53 = (*v52)--;
            if ( v53 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v56);
          v49 += 2;
        while ( v49 != v150 );
      if ( v32 )
        operator delete(v32);
      v58 = v183;
      v57 = v182;
      if ( v182 != v183 )
          v65 = *(_DWORD *)(v57 + 32);
          v66 = (void *)(v65 - 12);
          if ( (int *)(v65 - 12) != &dword_28898C0 )
            v59 = (unsigned int *)(v65 - 4);
                v60 = __ldrex(v59);
              while ( __strex(v60 - 1, v59) );
              v60 = (*v59)--;
            if ( v60 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v66);
          v67 = *(_DWORD *)(v57 + 28);
          v68 = (void *)(v67 - 12);
          if ( (int *)(v67 - 12) != &dword_28898C0 )
            v61 = (unsigned int *)(v67 - 4);
                v62 = __ldrex(v61);
              while ( __strex(v62 - 1, v61) );
              v62 = (*v61)--;
            if ( v62 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v68);
          v69 = *(_DWORD *)(v57 + 24);
          v70 = (void *)(v69 - 12);
          if ( (int *)(v69 - 12) != &dword_28898C0 )
            v63 = (unsigned int *)(v69 - 4);
                v64 = __ldrex(v63);
              while ( __strex(v64 - 1, v63) );
              v64 = (*v63)--;
            if ( v64 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v70);
          v57 += 48;
        while ( v57 != v58 );
        v57 = v182;
      if ( v57 )
        operator delete((void *)v57);
    if ( PackReport::wasUpgraded((PackReport *)v205) == 1 )
      sub_1590164((void **)&v169, "manifestvalidation.info");
      v164 = 0;
      v165 = 0;
      v166 = 0;
      v71 = PackDiscoveryError::PackDiscoveryError(&v167, 24, (unsigned __int64 *)&v164);
      ManifestValidationScreenController::_generateErrorContent(&v170, (int)v1, 0, (int **)&v169, (int)v71);
      sub_1592F34((char *)&v199, v170, *(_DWORD *)(v170 - 12));
      v72 = (void *)(v170 - 12);
      if ( (int *)(v170 - 12) != &dword_28898C0 )
        v141 = (unsigned int *)(v170 - 4);
            v142 = __ldrex(v141);
          while ( __strex(v142 - 1, v141) );
          v142 = (*v141)--;
        if ( v142 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v72);
      v167 = &off_26D9084;
      v74 = (void *)HIDWORD(v168);
      v73 = (void *)v168;
      if ( (_DWORD)v168 != HIDWORD(v168) )
          v77 = (int *)(*(_DWORD *)v73 - 12);
          if ( v77 != &dword_28898C0 )
            v75 = (unsigned int *)(*(_DWORD *)v73 - 4);
                v76 = __ldrex(v75);
              while ( __strex(v76 - 1, v75) );
              v76 = (*v75)--;
            if ( v76 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v77);
          v73 = (char *)v73 + 4;
        while ( v73 != v74 );
        v73 = (void *)v168;
      if ( v73 )
        operator delete(v73);
      v79 = v165;
      v78 = v164;
      if ( v164 != v165 )
          v82 = (int *)(*(_DWORD *)v78 - 12);
          if ( v82 != &dword_28898C0 )
            v80 = (unsigned int *)(*(_DWORD *)v78 - 4);
                v81 = __ldrex(v80);
              while ( __strex(v81 - 1, v80) );
              v81 = (*v80)--;
            if ( v81 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v82);
          v78 = (char *)v78 + 4;
        while ( v78 != v79 );
        v78 = v164;
      if ( v78 )
        operator delete(v78);
      v83 = (void *)(v169 - 12);
      if ( (int *)(v169 - 12) != &dword_28898C0 )
        v143 = (unsigned int *)(v169 - 4);
            v144 = __ldrex(v143);
          while ( __strex(v144 - 1, v143) );
          v144 = (*v143)--;
        if ( v144 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v83);
    if ( PackReport::hasErrors((PackReport *)v205) || PackReport::hasWarnings((PackReport *)v205) )
      v84 = sub_1592F34((char *)&v192, *((_DWORD *)v1 + 108), *(_DWORD *)(*((_DWORD *)v1 + 108) - 12));
      v85 = sub_1592F34(v84, Util::NEW_LINE, *(_DWORD *)(Util::NEW_LINE - 12));
      sub_1592F34(v85, Util::NEW_LINE, *(_DWORD *)(Util::NEW_LINE - 12));
      v87 = *(_QWORD *)PackReport::getErrors((PackReport *)v205);
      v86 = (int *)v87;
      if ( (_DWORD)v87 != HIDWORD(v87) )
          sub_1590164((void **)&v160, "manifestvalidation.error");
          ManifestValidationScreenController::_generateErrorContent(&v161, (int)v1, 1, (int **)&v160, *v86);
          sub_1592F34((char *)&v199, v161, *(_DWORD *)(v161 - 12));
          v97 = (void *)(v161 - 12);
          if ( (int *)(v161 - 12) != &dword_28898C0 )
            v91 = (unsigned int *)(v161 - 4);
                v92 = __ldrex(v91);
              while ( __strex(v92 - 1, v91) );
              v92 = (*v91)--;
            if ( v92 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v97);
          v98 = (void *)(v160 - 12);
          if ( (int *)(v160 - 12) != &dword_28898C0 )
            v93 = (unsigned int *)(v160 - 4);
                v94 = __ldrex(v93);
              while ( __strex(v94 - 1, v93) );
              v94 = (*v93)--;
            if ( v94 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v98);
          PackError::getLocErrorMessage((PackError *)&v159, *v86);
          v99 = sub_1592F34((char *)&v192, v159, *(_DWORD *)(v159 - 12));
          v100 = sub_1592F34(v99, Util::NEW_LINE, *(_DWORD *)(Util::NEW_LINE - 12));
          sub_1592F34(v100, Util::NEW_LINE, *(_DWORD *)(Util::NEW_LINE - 12));
          v101 = (void *)(v159 - 12);
          if ( (int *)(v159 - 12) != &dword_28898C0 )
            v95 = (unsigned int *)(v159 - 4);
                v96 = __ldrex(v95);
              while ( __strex(v96 - 1, v95) );
              v96 = (*v95)--;
            if ( v96 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v101);
          v86 += 2;
        while ( v86 != (int *)HIDWORD(v87) );
      v103 = *(_QWORD *)PackReport::getWarnings((PackReport *)v205);
      v102 = (int *)v103;
      if ( (_DWORD)v103 != HIDWORD(v103) )
          sub_1590164((void **)&v157, "manifestvalidation.warning");
          ManifestValidationScreenController::_generateErrorContent(&v158, (int)v1, 2, (int **)&v157, *v102);
          sub_1592F34((char *)&v199, v158, *(_DWORD *)(v158 - 12));
          v116 = (void *)(v158 - 12);
          if ( (int *)(v158 - 12) != &dword_28898C0 )
            v110 = (unsigned int *)(v158 - 4);
                v111 = __ldrex(v110);
              while ( __strex(v111 - 1, v110) );
              v111 = (*v110)--;
            if ( v111 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v116);
          v117 = (void *)(v157 - 12);
          if ( (int *)(v157 - 12) != &dword_28898C0 )
            v112 = (unsigned int *)(v157 - 4);
                v113 = __ldrex(v112);
              while ( __strex(v113 - 1, v112) );
              v113 = (*v112)--;
            if ( v113 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v117);
          PackError::getLocErrorMessage((PackError *)&v156, *v102);
          v118 = sub_1592F34((char *)&v192, v156, *(_DWORD *)(v156 - 12));
          v119 = sub_1592F34(v118, Util::NEW_LINE, *(_DWORD *)(Util::NEW_LINE - 12));
          sub_1592F34(v119, Util::NEW_LINE, *(_DWORD *)(Util::NEW_LINE - 12));
          v120 = (void *)(v156 - 12);
          if ( (int *)(v156 - 12) != &dword_28898C0 )
            v114 = (unsigned int *)(v156 - 4);
                v115 = __ldrex(v114);
              while ( __strex(v115 - 1, v114) );
              v115 = (*v114)--;
            if ( v115 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v120);
          v102 += 2;
        while ( v102 != (int *)HIDWORD(v103) );
    else
      sub_1590164((void **)&v162, "manifestvalidation.noerror");
      ManifestValidationScreenController::_colorLocString(&v163, v88, 0, (int **)&v162);
      sub_1592F34((char *)&v199, v163, *(_DWORD *)(v163 - 12));
      v89 = (void *)(v163 - 12);
      if ( (int *)(v163 - 12) != &dword_28898C0 )
        v145 = (unsigned int *)(v163 - 4);
            v146 = __ldrex(v145);
          while ( __strex(v146 - 1, v145) );
          v146 = (*v145)--;
        if ( v146 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v89);
      v90 = (void *)(v162 - 12);
      if ( (int *)(v162 - 12) != &dword_28898C0 )
        v147 = (unsigned int *)(v162 - 4);
            v148 = __ldrex(v147);
          while ( __strex(v148 - 1, v147) );
          v148 = (*v147)--;
        if ( v148 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v90);
      sub_1592F34((char *)&v192, *((_DWORD *)v1 + 108), *(_DWORD *)(*((_DWORD *)v1 + 108) - 12));
  }
    sub_1590164((void **)&v154, "manifestvalidation.noerror");
    ManifestValidationScreenController::_colorLocString(&v155, v9, 0, (int **)&v154);
    sub_1592F34((char *)&v199, v155, *(_DWORD *)(v155 - 12));
    v10 = (void *)(v155 - 12);
    if ( (int *)(v155 - 12) != &dword_28898C0 )
      v104 = (unsigned int *)(v155 - 4);
      if ( &pthread_create )
        __dmb();
          v105 = __ldrex(v104);
        while ( __strex(v105 - 1, v104) );
      else
        v105 = (*v104)--;
      if ( v105 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v10);
    v11 = (void *)(v154 - 12);
    if ( (int *)(v154 - 12) != &dword_28898C0 )
      v106 = (unsigned int *)(v154 - 4);
          v107 = __ldrex(v106);
        while ( __strex(v107 - 1, v106) );
        v107 = (*v106)--;
      if ( v107 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v11);
    sub_1592F34((char *)&v192, *((_DWORD *)v1 + 108), *(_DWORD *)(*((_DWORD *)v1 + 108) - 12));
  sub_1592F44(&v152, (int)&v200);
  Util::stringTrim(&v153, &v152);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v1 + 109,
    &v153);
  v121 = (void *)(v153 - 12);
  if ( (int *)(v153 - 12) != &dword_28898C0 )
    v131 = (unsigned int *)(v153 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v132 = __ldrex(v131);
      while ( __strex(v132 - 1, v131) );
      v132 = (*v131)--;
    if ( v132 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v121);
  v122 = (void *)(v152 - 12);
  if ( (int *)(v152 - 12) != &dword_28898C0 )
    v133 = (unsigned int *)(v152 - 4);
        v134 = __ldrex(v133);
      while ( __strex(v134 - 1, v133) );
      v134 = (*v133)--;
    if ( v134 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v122);
  sub_1592F44(&v151, (int)&v193);
    (int *)v1 + 110,
    &v151);
  v123 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v135 = (unsigned int *)(v151 - 4);
        v136 = __ldrex(v135);
      while ( __strex(v136 - 1, v135) );
      v136 = (*v135)--;
    if ( v136 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v123);
    (*(void (**)(void))(*(_DWORD *)v189 + 4))();
  v124 = off_26D3F84;
  v190 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v190) = off_26D3F80[0];
  v192 = v124;
  v193 = &off_27734E8;
  v125 = (void *)(v195 - 12);
  if ( (int *)(v195 - 12) != &dword_28898C0 )
    v137 = (unsigned int *)(v195 - 4);
        v138 = __ldrex(v137);
      while ( __strex(v138 - 1, v137) );
      v138 = (*v137)--;
    if ( v138 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v125);
  v193 = &off_26D40A8;
  sub_1592F54((unsigned int **)&v194);
  v190 = (void **)off_26D3F68;
  v126 = off_26D3F60;
  v127 = off_26D3F80[0];
  *(void ***)((char *)&v190 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v191 = 0;
  sub_21B6560(&v196);
  v197 = v126;
  v128 = off_26D3F84;
  *(_DWORD *)((char *)*(v126 - 3) + (_DWORD)&v197) = v127;
  v199 = v128;
  v200 = &off_27734E8;
  v129 = (void *)(v202 - 12);
  if ( (int *)(v202 - 12) != &dword_28898C0 )
    v139 = (unsigned int *)(v202 - 4);
        v140 = __ldrex(v139);
      while ( __strex(v140 - 1, v139) );
      v140 = (*v139)--;
    if ( v140 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v129);
  v200 = &off_26D40A8;
  sub_1592F54((unsigned int **)&v201);
  v197 = (void **)off_26D3F68;
  *(void ***)((char *)&v197 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v198 = 0;
  sub_21B6560(&v203);
  PackReport::~PackReport((PackReport *)&v204);
  return PackReport::~PackReport((PackReport *)v205);
}


int __fastcall ManifestValidationScreenController::onTerminate(ManifestValidationScreenController *this)
{
  ManifestValidationScreenController *v1; // r4@1
  ResourcePackRepository *v2; // r0@1
  ResourcePackRepository *v3; // r0@1

  v1 = this;
  v2 = (ResourcePackRepository *)MinecraftScreenModel::getResourcePackRepository(*((MinecraftScreenModel **)this + 95));
  ResourcePackRepository::untrackInvalidPack(v2, (ManifestValidationScreenController *)((char *)v1 + 424));
  v3 = (ResourcePackRepository *)MinecraftScreenModel::getResourcePackRepository(*((MinecraftScreenModel **)v1 + 95));
  ResourcePackRepository::refreshPacks(v3);
  return j_j_j__ZN16ScreenController11onTerminateEv_0(v1);
}
