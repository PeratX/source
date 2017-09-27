

ModalScreenData *__fastcall MainMenuScreenController::showPickCustomSkinDialog(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  __int64 v5; // kr00_8@2
  unsigned int *v6; // r0@3
  unsigned int v7; // r1@5
  int v8; // r5@7
  void (__fastcall *v9)(char *, int, signed int); // r3@7
  ModalScreenData *result; // r0@9
  _QWORD *v11; // r0@13
  __int64 v12; // r2@13 OVERLAPPED
  unsigned int *v13; // r1@14
  int (__fastcall *v14)(_DWORD *, void **, int); // r1@19
  unsigned int *v15; // r1@22
  unsigned int v16; // r0@24
  int v17; // r9@29
  void (__fastcall *v18)(int, void **); // r8@29
  unsigned int *v19; // r0@30
  unsigned int v20; // r1@32
  void (__fastcall *v21)(int *, int, signed int); // r3@35
  void (__fastcall *v22)(_DWORD, _DWORD, _DWORD); // r7@35
  void *v23; // r0@37
  unsigned int *v24; // r1@37
  unsigned int v25; // r2@40
  __int64 v26; // r2@43
  int v27; // r0@47
  unsigned int *v28; // r2@48
  unsigned int v29; // r1@50
  int v30; // r0@55
  unsigned int *v31; // r2@56
  unsigned int v32; // r1@58
  char v33; // [sp+4h] [bp-A4h]@8
  int (*v34)(void); // [sp+Ch] [bp-9Ch]@7
  int v35; // [sp+10h] [bp-98h]@8
  int v36; // [sp+14h] [bp-94h]@29
  int v37; // [sp+18h] [bp-90h]@29
  int v38; // [sp+1Ch] [bp-8Ch]@36
  void (__fastcall *v39)(_DWORD, _DWORD, _DWORD); // [sp+24h] [bp-84h]@35
  unsigned int *v40; // [sp+28h] [bp-80h]@36
  void *v41; // [sp+2Ch] [bp-7Ch]@43
  void (*v42)(void); // [sp+34h] [bp-74h]@37
  int (__fastcall *v43)(int); // [sp+38h] [bp-70h]@43
  _QWORD *v44; // [sp+3Ch] [bp-6Ch]@19
  void (*v45)(void); // [sp+44h] [bp-64h]@13
  int v46; // [sp+4Ch] [bp-5Ch]@2
  int v47; // [sp+50h] [bp-58h]@2
  void *v48; // [sp+54h] [bp-54h]@2
  int v49; // [sp+58h] [bp-50h]@2
  int v50; // [sp+5Ch] [bp-4Ch]@2
  int v51; // [sp+60h] [bp-48h]@2
  void *v52; // [sp+64h] [bp-44h]@2
  int v53; // [sp+68h] [bp-40h]@2
  int v54; // [sp+6Ch] [bp-3Ch]@2
  int v55; // [sp+70h] [bp-38h]@2
  void *v56; // [sp+74h] [bp-34h]@2
  void *v57; // [sp+78h] [bp-30h]@2
  void *v58; // [sp+7Ch] [bp-2Ch]@2
  void *v59; // [sp+80h] [bp-28h]@2
  int v60; // [sp+84h] [bp-24h]@2
  char v61; // [sp+88h] [bp-20h]@2

  v2 = a1;
  v3 = a2;
  v4 = MinecraftScreenModel::getHoloInput(*(MinecraftScreenModel **)(a1 + 424));
  if ( (*(int (**)(void))(*(_DWORD *)v4 + 92))() == 1 )
  {
    v48 = &unk_28898CC;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v52 = &unk_28898CC;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = &unk_28898CC;
    v57 = &unk_28898CC;
    v58 = &unk_28898CC;
    v59 = &unk_28898CC;
    v60 = 1;
    v61 = 0;
    sub_15903F4(&v48, "FileBrowser.Rift.SkinChooser", (_BYTE *)0x1C);
    sub_15903F4(&v52, "FileBrowser.Rift.Skin", (_BYTE *)0x15);
    sub_15903F4(&v58, "gui.back", (_BYTE *)8);
    v60 = 2;
    MinecraftScreenController::_getWeakPtrToThis<MainMenuScreenController>((int)&v46, v2);
    v5 = *(_QWORD *)&v46;
    if ( v47 )
    {
      v6 = (unsigned int *)(v47 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 + 1, v6) );
      }
      else
        ++*v6;
    }
    v45 = 0;
    v11 = operator new(8u);
    *v11 = v5;
    if ( HIDWORD(v5) )
      v13 = (unsigned int *)(HIDWORD(v5) + 8);
        {
          LODWORD(v12) = __ldrex(v13);
          HIDWORD(v12) = __strex(v12 + 1, v13);
        }
        while ( HIDWORD(v12) );
        ++*v13;
    v14 = sub_11BD580;
    v44 = v11;
    LODWORD(v12) = sub_11BD418;
    *(_QWORD *)&v45 = *(__int64 *)((char *)&v12 - 4);
    LODWORD(v12) = &v44;
    MinecraftScreenController::_displayCustomModalPopup(v2, (int)&v48, v12);
    if ( v45 )
      v45();
      v15 = (unsigned int *)(HIDWORD(v5) + 8);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v5) + 12))(HIDWORD(v5));
    v17 = MinecraftScreenModel::getHoloInput(*(MinecraftScreenModel **)(v2 + 424));
    v18 = *(void (__fastcall **)(int, void **))(*(_DWORD *)v17 + 100);
    v36 = v46;
    v37 = v47;
      v19 = (unsigned int *)(v47 + 8);
          v20 = __ldrex(v19);
        while ( __strex(v20 + 1, v19) );
        ++*v19;
    v39 = 0;
    v21 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
    v22 = 0;
    if ( v21 )
      v21(&v38, v3, 2);
      v40 = *(unsigned int **)(v3 + 12);
      v22 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v3 + 8);
      v39 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v3 + 8);
    v42 = 0;
    v23 = operator new(0x18u);
    *(_DWORD *)v23 = v36;
    v24 = (unsigned int *)v37;
    *((_DWORD *)v23 + 1) = v37;
    if ( v24 )
      v24 += 2;
          v25 = __ldrex(v24);
        while ( __strex(v25 + 1, v24) );
        v24 = (unsigned int *)*((_DWORD *)v23 + 5);
        v22 = v39;
        ++*v24;
    v26 = *(_QWORD *)&v38;
    *(_QWORD *)&v38 = *((_QWORD *)v23 + 1);
    *((_QWORD *)v23 + 1) = v26;
    LODWORD(v26) = v40;
    *((_DWORD *)v23 + 4) = v22;
    v40 = v24;
    *((_DWORD *)v23 + 5) = v26;
    v41 = v23;
    v42 = (void (*)(void))sub_11BD7F4;
    v43 = sub_11BD624;
    v18(v17, &v41);
    if ( v42 )
      v42();
    if ( v39 )
      v39(&v38, &v38, 3);
    v27 = v37;
    if ( v37 )
      v28 = (unsigned int *)(v37 + 8);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 == 1 )
        (*(void (**)(void))(*(_DWORD *)v27 + 12))();
    v30 = v47;
      v31 = (unsigned int *)(v47 + 8);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 == 1 )
        (*(void (**)(void))(*(_DWORD *)v30 + 12))();
    result = ModalScreenData::~ModalScreenData((ModalScreenData *)&v48);
  }
  else
    v8 = *(_DWORD *)(v2 + 424);
    v34 = 0;
    v9 = *(void (__fastcall **)(char *, int, signed int))(v3 + 8);
    if ( v9 )
      v9(&v33, v3, 2);
      v35 = *(_DWORD *)(v3 + 12);
      v34 = *(int (**)(void))(v3 + 8);
    result = (ModalScreenData *)MinecraftScreenModel::pickCustomSkin(v8, (int)&v33);
    if ( v34 )
      result = (ModalScreenData *)v34();
  return result;
}


void __fastcall MainMenuScreenController::~MainMenuScreenController(MainMenuScreenController *this)
{
  MainMenuScreenController *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_26E2570;
  v2 = *((_DWORD *)this + 107);
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
  MinecraftScreenController::~MinecraftScreenController(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall MainMenuScreenController::MainMenuScreenController(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  int v7; // r6@7
  unsigned int *v8; // r1@8
  unsigned int v9; // r0@10
  unsigned int *v10; // r7@14
  unsigned int v11; // r0@16
  int v12; // r0@21
  unsigned int *v13; // r0@22
  unsigned int v14; // r1@24
  int v16; // [sp+4h] [bp-1Ch]@1
  int v17; // [sp+8h] [bp-18h]@1

  v2 = a2;
  v3 = a1;
  v16 = *(_DWORD *)a2;
  v4 = *(_DWORD *)(a2 + 4);
  v17 = v4;
  if ( v4 )
  {
    v5 = (unsigned int *)(v4 + 4);
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
  MinecraftScreenController::MinecraftScreenController(v3, (MinecraftScreenModel **)&v16);
  v7 = v17;
  if ( v17 )
    v8 = (unsigned int *)(v17 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  *(_DWORD *)v3 = &off_26E2570;
  *(_DWORD *)(v3 + 424) = *(_DWORD *)v2;
  v12 = *(_DWORD *)(v2 + 4);
  *(_DWORD *)(v3 + 428) = v12;
  if ( v12 )
    v13 = (unsigned int *)(v12 + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 + 1, v13) );
      ++*v13;
  return v3;
}


ModalScreenData *__fastcall MainMenuScreenController::confirmationNoMultiplayerDialog(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  __int64 v4; // r2@1
  int v6; // [sp+0h] [bp-58h]@2
  void (*v7)(void); // [sp+8h] [bp-50h]@1
  int v8; // [sp+Ch] [bp-4Ch]@2
  void *v9; // [sp+10h] [bp-48h]@1
  int v10; // [sp+14h] [bp-44h]@1
  int v11; // [sp+18h] [bp-40h]@1
  int v12; // [sp+1Ch] [bp-3Ch]@1
  void *v13; // [sp+20h] [bp-38h]@1
  int v14; // [sp+24h] [bp-34h]@1
  int v15; // [sp+28h] [bp-30h]@1
  int v16; // [sp+2Ch] [bp-2Ch]@1
  void *v17; // [sp+30h] [bp-28h]@1
  void *v18; // [sp+34h] [bp-24h]@1
  void *v19; // [sp+38h] [bp-20h]@1
  void *v20; // [sp+3Ch] [bp-1Ch]@1
  int v21; // [sp+40h] [bp-18h]@1
  char v22; // [sp+44h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v9 = &unk_28898CC;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = &unk_28898CC;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = &unk_28898CC;
  v18 = &unk_28898CC;
  v19 = &unk_28898CC;
  v20 = &unk_28898CC;
  v21 = 1;
  v22 = 0;
  sub_15903F4(&v9, "options.turnOffMultiplayer", (_BYTE *)0x1A);
  sub_15903F4(&v13, "options.turnOffMultiplayer.message", (_BYTE *)0x22);
  sub_15903F4(&v18, "options.continue", (_BYTE *)0x10);
  sub_15903F4(&v20, "options.goBack", (_BYTE *)0xE);
  v7 = 0;
  HIDWORD(v4) = *(_DWORD *)(v3 + 8);
  if ( HIDWORD(v4) )
  {
    ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))HIDWORD(v4))(&v6, v3, 2);
    v8 = *(_DWORD *)(v3 + 12);
    v7 = *(void (**)(void))(v3 + 8);
  }
  LODWORD(v4) = &v6;
  MinecraftScreenController::_displayCustomModalPopup(v2, (int)&v9, v4);
  if ( v7 )
    v7();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v9);
}


void __fastcall MainMenuScreenController::~MainMenuScreenController(MainMenuScreenController *this)
{
  MainMenuScreenController::~MainMenuScreenController(this);
}


ScreenController *__fastcall MainMenuScreenController::~MainMenuScreenController(MainMenuScreenController *this)
{
  MainMenuScreenController *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_26E2570;
  v2 = *((_DWORD *)this + 107);
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
  return j_j_j__ZN25MinecraftScreenControllerD2Ev_0(v1);
}


ModalScreenData *__fastcall MainMenuScreenController::showInvalidMultiplayerSkinModal(MainMenuScreenController *this)
{
  MainMenuScreenController *v1; // r5@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  _QWORD *v5; // r0@7
  __int64 v6; // r2@7 OVERLAPPED
  unsigned int *v7; // r1@8
  int (__fastcall *v8)(_DWORD *, void **, int); // r1@13
  unsigned int *v9; // r1@16
  unsigned int v10; // r0@18
  int v11; // r0@23
  unsigned int *v12; // r2@24
  unsigned int v13; // r1@26
  _QWORD *v15; // [sp+0h] [bp-60h]@13
  void (*v16)(void); // [sp+8h] [bp-58h]@7
  char v17; // [sp+10h] [bp-50h]@1
  int v18; // [sp+14h] [bp-4Ch]@1
  void *v19; // [sp+18h] [bp-48h]@1
  int v20; // [sp+1Ch] [bp-44h]@1
  int v21; // [sp+20h] [bp-40h]@1
  int v22; // [sp+24h] [bp-3Ch]@1
  void *v23; // [sp+28h] [bp-38h]@1
  int v24; // [sp+2Ch] [bp-34h]@1
  int v25; // [sp+30h] [bp-30h]@1
  int v26; // [sp+34h] [bp-2Ch]@1
  void *v27; // [sp+38h] [bp-28h]@1
  void *v28; // [sp+3Ch] [bp-24h]@1
  void *v29; // [sp+40h] [bp-20h]@1
  void *v30; // [sp+44h] [bp-1Ch]@1
  int v31; // [sp+48h] [bp-18h]@1
  char v32; // [sp+4Ch] [bp-14h]@1

  v1 = this;
  v19 = &unk_28898CC;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = &unk_28898CC;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = &unk_28898CC;
  v28 = &unk_28898CC;
  v29 = &unk_28898CC;
  v30 = &unk_28898CC;
  v31 = 1;
  v32 = 0;
  sub_15903F4(&v19, "disconnectionScreen.lockedSkin.title", (_BYTE *)0x24);
  sub_15903F4(&v23, "disconnectionScreen.lockedSkin", (_BYTE *)0x1E);
  sub_15903F4(&v28, "options.skin.change", (_BYTE *)0x13);
  sub_15903F4(&v30, "options.goBack", (_BYTE *)0xE);
  MinecraftScreenController::_getWeakPtrToThis<MainMenuScreenController>((int)&v17, (int)v1);
  v2 = *(_QWORD *)&v17;
  if ( v18 )
  {
    v3 = (unsigned int *)(v18 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
    }
    else
      ++*v3;
  }
  v16 = 0;
  v5 = operator new(8u);
  *v5 = v2;
  if ( HIDWORD(v2) )
    v7 = (unsigned int *)(HIDWORD(v2) + 8);
      {
        LODWORD(v6) = __ldrex(v7);
        HIDWORD(v6) = __strex(v6 + 1, v7);
      }
      while ( HIDWORD(v6) );
      ++*v7;
  v8 = sub_11BDA78;
  v15 = v5;
  LODWORD(v6) = sub_11BD928;
  *(_QWORD *)&v16 = *(__int64 *)((char *)&v6 - 4);
  LODWORD(v6) = &v15;
  MinecraftScreenController::_displayCustomModalPopup((int)v1, (int)&v19, v6);
  if ( v16 )
    v16();
    v9 = (unsigned int *)(HIDWORD(v2) + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  v11 = v18;
    v12 = (unsigned int *)(v18 + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      (*(void (**)(void))(*(_DWORD *)v11 + 12))();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v19);
}
