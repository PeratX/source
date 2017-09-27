

int __fastcall LocalWorldUploadScreenController::LocalWorldUploadScreenController(int a1, int a2, int *a3)
{
  int *v3; // r6@1
  int v4; // r4@1
  int *v5; // r8@1
  int v6; // r0@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r1@4
  int v9; // r5@7
  unsigned int *v10; // r1@8
  unsigned int v11; // r0@10
  unsigned int *v12; // r7@14
  unsigned int v13; // r0@16
  int v15; // [sp+4h] [bp-24h]@1
  int v16; // [sp+8h] [bp-20h]@1

  v3 = (int *)a2;
  v4 = a1;
  v5 = a3;
  v15 = *(_DWORD *)a2;
  v6 = *(_DWORD *)(a2 + 4);
  v16 = v6;
  if ( v6 )
  {
    v7 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
    }
    else
      ++*v7;
  }
  PlayScreenController::PlayScreenController(v4, (int)&v15, 0);
  v9 = v16;
  if ( v16 )
    v10 = (unsigned int *)(v16 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  *(_DWORD *)v4 = &off_26E24E4;
  MainMenuScreenModel::createContentManager((MainMenuScreenModel *)(v4 + 500), *v3);
  sub_15901A4((int *)(v4 + 504), v5);
  LocalWorldUploadScreenController::_registerEventHandlers((LocalWorldUploadScreenController *)v4);
  return v4;
}


int __fastcall LocalWorldUploadScreenController::_displayLockedWorldPopup(LocalWorldUploadScreenController *this, int a2)
{
  LocalWorldUploadScreenController *v2; // r6@1
  int v3; // r7@1
  __int64 v4; // kr00_8@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  _DWORD *v7; // r0@7
  __int64 v8; // r2@7 OVERLAPPED
  unsigned int *v9; // r1@8
  int (__fastcall *v10)(_DWORD *, void **, int); // r1@13
  unsigned int *v11; // r1@16
  unsigned int v12; // r0@18
  int result; // r0@23
  unsigned int *v14; // r2@24
  unsigned int v15; // r1@26
  _DWORD *v16; // [sp+0h] [bp-68h]@13
  void (*v17)(void); // [sp+8h] [bp-60h]@7
  void *v18; // [sp+10h] [bp-58h]@1
  int v19; // [sp+14h] [bp-54h]@1
  int v20; // [sp+18h] [bp-50h]@1
  int v21; // [sp+1Ch] [bp-4Ch]@1
  void *v22; // [sp+20h] [bp-48h]@1
  int v23; // [sp+24h] [bp-44h]@1
  int v24; // [sp+28h] [bp-40h]@1
  int v25; // [sp+2Ch] [bp-3Ch]@1
  void *v26; // [sp+30h] [bp-38h]@1
  void *v27; // [sp+34h] [bp-34h]@1
  void *v28; // [sp+38h] [bp-30h]@1
  void *v29; // [sp+3Ch] [bp-2Ch]@1
  int v30; // [sp+40h] [bp-28h]@1
  char v31; // [sp+44h] [bp-24h]@1
  char v32; // [sp+48h] [bp-20h]@1
  int v33; // [sp+4Ch] [bp-1Ch]@1

  v2 = this;
  v3 = a2;
  MinecraftScreenController::_getWeakPtrToThis<LocalWorldUploadScreenController>((int)&v32, (int)this);
  v18 = &unk_28898CC;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = &unk_28898CC;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = &unk_28898CC;
  v27 = &unk_28898CC;
  v28 = &unk_28898CC;
  v29 = &unk_28898CC;
  v30 = 1;
  v31 = 0;
  sub_15903F4(&v18, "options.content.noRealms", (_BYTE *)0x18);
  sub_15903F4(&v22, "options.content.noRealms.message", (_BYTE *)0x20);
  sub_15903F4(&v27, "options.edit", (_BYTE *)0xC);
  sub_15903F4(&v29, "options.goBack", (_BYTE *)0xE);
  v4 = *(_QWORD *)&v32;
  if ( v33 )
  {
    v5 = (unsigned int *)(v33 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  v17 = 0;
  v7 = operator new(0xCu);
  *(_QWORD *)v7 = v4;
  if ( HIDWORD(v4) )
    v9 = (unsigned int *)(HIDWORD(v4) + 8);
      {
        LODWORD(v8) = __ldrex(v9);
        HIDWORD(v8) = __strex(v8 + 1, v9);
      }
      while ( HIDWORD(v8) );
      ++*v9;
  v10 = sub_11BC560;
  v7[2] = v3;
  LODWORD(v8) = sub_11BC2E0;
  v16 = v7;
  *(_QWORD *)&v17 = *(__int64 *)((char *)&v8 - 4);
  LODWORD(v8) = &v16;
  MinecraftScreenController::_displayCustomModalPopup((int)v2, (int)&v18, v8);
  if ( v17 )
    v17();
    v11 = (unsigned int *)(HIDWORD(v4) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  ModalScreenData::~ModalScreenData((ModalScreenData *)&v18);
  result = v33;
    v14 = (unsigned int *)(v33 + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


void __fastcall LocalWorldUploadScreenController::~LocalWorldUploadScreenController(LocalWorldUploadScreenController *this)
{
  LocalWorldUploadScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  ContentManager *v4; // r0@2
  ContentManager *v5; // r0@3
  unsigned int *v6; // r12@5
  signed int v7; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26E24E4;
  v2 = *((_DWORD *)this + 126);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v3);
  }
  v4 = (ContentManager *)*((_DWORD *)v1 + 125);
  if ( v4 )
    v5 = ContentManager::~ContentManager(v4);
    operator delete((void *)v5);
  *((_DWORD *)v1 + 125) = 0;
  PlayScreenController::~PlayScreenController(v1);
  operator delete((void *)v1);
}


void __fastcall LocalWorldUploadScreenController::~LocalWorldUploadScreenController(LocalWorldUploadScreenController *this)
{
  LocalWorldUploadScreenController::~LocalWorldUploadScreenController(this);
}


LocalWorldUploadScreenController *__fastcall LocalWorldUploadScreenController::~LocalWorldUploadScreenController(LocalWorldUploadScreenController *this)
{
  LocalWorldUploadScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  ContentManager *v4; // r0@2
  ContentManager *v5; // r0@3
  unsigned int *v7; // r12@5
  signed int v8; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26E24E4;
  v2 = *((_DWORD *)this + 126);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_2(v3);
  }
  v4 = (ContentManager *)*((_DWORD *)v1 + 125);
  if ( v4 )
    v5 = ContentManager::~ContentManager(v4);
    operator delete((void *)v5);
  *((_DWORD *)v1 + 125) = 0;
  PlayScreenController::~PlayScreenController(v1);
  return v1;
}


void __fastcall LocalWorldUploadScreenController::_registerEventHandlers(LocalWorldUploadScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  void *v5; // r0@3
  int v6; // r5@4
  void *v7; // r0@4
  __int64 v8; // r1@4
  void *v9; // r0@6
  int v10; // r5@7
  void *v11; // r0@7
  __int64 v12; // r1@7
  void *v13; // r0@9
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  void *v20; // [sp+4h] [bp-5Ch]@7
  __int64 v21; // [sp+Ch] [bp-54h]@7
  int v22; // [sp+18h] [bp-48h]@7
  void *v23; // [sp+1Ch] [bp-44h]@4
  __int64 v24; // [sp+24h] [bp-3Ch]@4
  int v25; // [sp+30h] [bp-30h]@4
  _DWORD *v26; // [sp+34h] [bp-2Ch]@1
  __int64 v27; // [sp+3Ch] [bp-24h]@1
  int v28; // [sp+48h] [bp-18h]@1

  v1 = this;
  sub_1590164((void **)&v28, "button.local_world_upload");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v28);
  v3 = operator new(4u);
  LODWORD(v4) = sub_11BC1F8;
  *v3 = v1;
  HIDWORD(v4) = sub_11BC130;
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
  sub_1590164((void **)&v25, "button.archived_world_upload");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v25);
  v7 = operator new(1u);
  LODWORD(v8) = sub_11BC27E;
  v23 = v7;
  HIDWORD(v8) = sub_11BC27A;
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
  sub_1590164((void **)&v22, "button.new_world_upload");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v22);
  v11 = operator new(1u);
  LODWORD(v12) = sub_11BC2B0;
  v20 = v11;
  HIDWORD(v12) = sub_11BC2AC;
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


Json::Value *__fastcall LocalWorldUploadScreenController::addStaticScreenVars(LocalWorldUploadScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  int v3; // r4@1
  int v5; // [sp+0h] [bp-20h]@1

  v2 = a2;
  PlayScreenController::addStaticScreenVars(this, a2);
  v3 = Json::Value::operator[](v2, "$local_world_upload");
  Json::Value::Value((Json::Value *)&v5, 1);
  Json::Value::operator=(v3, (const Json::Value *)&v5);
  return Json::Value::~Value((Json::Value *)&v5);
}


void __fastcall LocalWorldUploadScreenController::_registerEventHandlers(LocalWorldUploadScreenController *this)
{
  LocalWorldUploadScreenController::_registerEventHandlers(this);
}
