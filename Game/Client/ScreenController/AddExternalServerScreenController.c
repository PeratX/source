

void __fastcall AddExternalServerScreenController::_registerEventHandlers(AddExternalServerScreenController *this)
{
  AddExternalServerScreenController::_registerEventHandlers(this);
}


void __fastcall AddExternalServerScreenController::~AddExternalServerScreenController(AddExternalServerScreenController *this)
{
  AddExternalServerScreenController *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E0CA0;
  v2 = *((_DWORD *)this + 111);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 110);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  MainMenuScreenController::~MainMenuScreenController(v1);
  operator delete((void *)v1);
}


void __fastcall AddExternalServerScreenController::_registerBindings(AddExternalServerScreenController *this)
{
  AddExternalServerScreenController::_registerBindings(this);
}


void __fastcall AddExternalServerScreenController::~AddExternalServerScreenController(AddExternalServerScreenController *this)
{
  AddExternalServerScreenController::~AddExternalServerScreenController(this);
}


void __fastcall AddExternalServerScreenController::_registerEventHandlers(AddExternalServerScreenController *this)
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
  int v14; // r5@10
  _DWORD *v15; // r0@10
  __int64 v16; // r1@10
  void *v17; // r0@12
  int v18; // r5@13
  _DWORD *v19; // r0@13
  __int64 v20; // r1@13
  void *v21; // r0@15
  int v22; // r5@16
  _DWORD *v23; // r0@16
  __int64 v24; // r1@16
  void *v25; // r0@18
  int v26; // r5@19
  _DWORD *v27; // r0@19
  __int64 v28; // r1@19
  void *v29; // r0@21
  int v30; // r5@22
  _DWORD *v31; // r0@22
  __int64 v32; // r1@22
  void *v33; // r0@24
  int v34; // r5@25
  _DWORD *v35; // r0@25
  __int64 v36; // r1@25
  void *v37; // r0@27
  unsigned int *v38; // r2@29
  signed int v39; // r1@31
  unsigned int *v40; // r2@33
  signed int v41; // r1@35
  unsigned int *v42; // r2@37
  signed int v43; // r1@39
  unsigned int *v44; // r2@41
  signed int v45; // r1@43
  unsigned int *v46; // r2@45
  signed int v47; // r1@47
  unsigned int *v48; // r2@49
  signed int v49; // r1@51
  unsigned int *v50; // r2@53
  signed int v51; // r1@55
  unsigned int *v52; // r2@57
  signed int v53; // r1@59
  unsigned int *v54; // r2@61
  signed int v55; // r1@63
  _DWORD *v56; // [sp+4h] [bp-ECh]@25
  __int64 v57; // [sp+Ch] [bp-E4h]@25
  int v58; // [sp+18h] [bp-D8h]@25
  _DWORD *v59; // [sp+1Ch] [bp-D4h]@22
  __int64 v60; // [sp+24h] [bp-CCh]@22
  int v61; // [sp+30h] [bp-C0h]@22
  _DWORD *v62; // [sp+34h] [bp-BCh]@19
  __int64 v63; // [sp+3Ch] [bp-B4h]@19
  int v64; // [sp+48h] [bp-A8h]@19
  _DWORD *v65; // [sp+4Ch] [bp-A4h]@16
  __int64 v66; // [sp+54h] [bp-9Ch]@16
  int v67; // [sp+60h] [bp-90h]@16
  _DWORD *v68; // [sp+64h] [bp-8Ch]@13
  __int64 v69; // [sp+6Ch] [bp-84h]@13
  int v70; // [sp+78h] [bp-78h]@13
  _DWORD *v71; // [sp+7Ch] [bp-74h]@10
  __int64 v72; // [sp+84h] [bp-6Ch]@10
  int v73; // [sp+90h] [bp-60h]@10
  _DWORD *v74; // [sp+94h] [bp-5Ch]@7
  __int64 v75; // [sp+9Ch] [bp-54h]@7
  int v76; // [sp+A8h] [bp-48h]@7
  _DWORD *v77; // [sp+ACh] [bp-44h]@4
  __int64 v78; // [sp+B4h] [bp-3Ch]@4
  int v79; // [sp+C0h] [bp-30h]@4
  _DWORD *v80; // [sp+C4h] [bp-2Ch]@1
  __int64 v81; // [sp+CCh] [bp-24h]@1
  int v82; // [sp+D8h] [bp-18h]@1

  v1 = this;
  sub_119C884((void **)&v82, "button.play_button");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v82);
  v3 = operator new(4u);
  LODWORD(v4) = sub_11267C0;
  *v3 = v1;
  HIDWORD(v4) = sub_112674C;
  v80 = v3;
  v81 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v80);
  if ( (_DWORD)v81 )
    ((void (*)(void))v81)();
  v5 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
  {
    v38 = (unsigned int *)(v82 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
    }
    else
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  sub_119C884((void **)&v79, "button.remove_button");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v79);
  v7 = operator new(4u);
  LODWORD(v8) = sub_1126852;
  *v7 = v1;
  HIDWORD(v8) = sub_1126844;
  v77 = v7;
  v78 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v77);
  if ( (_DWORD)v78 )
    ((void (*)(void))v78)();
  v9 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v79 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v76, "button.save_button");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v76);
  v11 = operator new(4u);
  LODWORD(v12) = sub_11268E4;
  *v11 = v1;
  HIDWORD(v12) = sub_1126888;
  v74 = v11;
  v75 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v74);
  if ( (_DWORD)v75 )
    ((void (*)(void))v75)();
  v13 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v76 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v73, "#name_text_box");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v73);
  v15 = operator new(4u);
  LODWORD(v16) = sub_1126D00;
  *v15 = v1;
  HIDWORD(v16) = sub_112695C;
  v71 = v15;
  v72 = v16;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v14, (int)&v71);
  if ( (_DWORD)v72 )
    ((void (*)(void))v72)();
  v17 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v73 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  sub_119C884((void **)&v70, "#name_text_box");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v70);
  v19 = operator new(4u);
  LODWORD(v20) = sub_112719C;
  *v19 = v1;
  HIDWORD(v20) = sub_1126D38;
  v68 = v19;
  v69 = v20;
  ScreenController::registerTextEditFinishedEventHandler((int)v1, v18, (int)&v68);
  if ( (_DWORD)v69 )
    ((void (*)(void))v69)();
  v21 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v70 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  sub_119C884((void **)&v67, "#ip_text_box");
  v22 = MinecraftScreenController::_getNameId(v1, (int **)&v67);
  v23 = operator new(4u);
  LODWORD(v24) = sub_1127578;
  *v23 = v1;
  HIDWORD(v24) = sub_11271D4;
  v65 = v23;
  v66 = v24;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v22, (int)&v65);
  if ( (_DWORD)v66 )
    ((void (*)(void))v66)();
  v25 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v67 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  sub_119C884((void **)&v64, "#ip_text_box");
  v26 = MinecraftScreenController::_getNameId(v1, (int **)&v64);
  v27 = operator new(4u);
  LODWORD(v28) = sub_1127A14;
  *v27 = v1;
  HIDWORD(v28) = sub_11275B0;
  v62 = v27;
  v63 = v28;
  ScreenController::registerTextEditFinishedEventHandler((int)v1, v26, (int)&v62);
  if ( (_DWORD)v63 )
    ((void (*)(void))v63)();
  v29 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v64 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  sub_119C884((void **)&v61, "#port_text_box");
  v30 = MinecraftScreenController::_getNameId(v1, (int **)&v61);
  v31 = operator new(4u);
  LODWORD(v32) = sub_1127DDC;
  *v31 = v1;
  HIDWORD(v32) = sub_1127A4C;
  v59 = v31;
  v60 = v32;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v30, (int)&v59);
  if ( (_DWORD)v60 )
    ((void (*)(void))v60)();
  v33 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v61 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v33);
  sub_119C884((void **)&v58, "#port_text_box");
  v34 = MinecraftScreenController::_getNameId(v1, (int **)&v58);
  v35 = operator new(4u);
  LODWORD(v36) = sub_112825C;
  *v35 = v1;
  HIDWORD(v36) = sub_1127E14;
  v56 = v35;
  v57 = v36;
  ScreenController::registerTextEditFinishedEventHandler((int)v1, v34, (int)&v56);
  if ( (_DWORD)v57 )
    ((void (*)(void))v57)();
  v37 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v58 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v37);
}


void __fastcall AddExternalServerScreenController::_removeServer(AddExternalServerScreenController *this)
{
  AddExternalServerScreenController::_removeServer(this);
}


int __fastcall AddExternalServerScreenController::AddExternalServerScreenController(int a1, int a2, unsigned int a3)
{
  int v3; // r4@1
  unsigned int v4; // r5@1
  int v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  int v8; // r6@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r7@14
  unsigned int v12; // r0@16
  int v13; // r0@21
  RakNet *v14; // r0@23
  const char *v15; // r1@24
  void *v16; // r0@31
  void *v17; // r0@32
  unsigned int *v19; // r2@34
  signed int v20; // r1@36
  unsigned int *v21; // r2@38
  signed int v22; // r1@40
  int v23; // [sp+0h] [bp-30h]@21
  int v24; // [sp+4h] [bp-2Ch]@21
  int v25; // [sp+8h] [bp-28h]@21
  int v26; // [sp+Ch] [bp-24h]@1
  int v27; // [sp+10h] [bp-20h]@1

  v3 = a1;
  v26 = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  v27 = v5;
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 4);
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
  MainMenuScreenController::MainMenuScreenController(v3, (int)&v26);
  v8 = v27;
  if ( v27 )
    v9 = (unsigned int *)(v27 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  *(_DWORD *)v3 = &off_26E0CA0;
  *(_DWORD *)(v3 + 452) = v4;
  *(_DWORD *)(v3 + 440) = &unk_28898CC;
  *(_DWORD *)(v3 + 444) = &unk_28898CC;
  *(_DWORD *)(v3 + 432) = (v4 >> 31) ^ 1;
  MinecraftScreenModel::getExternalServerInfo((MinecraftScreenModel *)&v23, *(_DWORD *)(v3 + 424), v4);
  EntityInteraction::setInteractText((int *)(v3 + 440), &v25);
  EntityInteraction::setInteractText((int *)(v3 + 444), &v24);
  v13 = SharedConstants::NetworkDefaultGamePort;
  if ( v23 > 0 )
    v13 = v23;
  *(_DWORD *)(v3 + 448) = v13;
  AddExternalServerScreenController::_registerEventHandlers((AddExternalServerScreenController *)v3);
  AddExternalServerScreenController::_registerBindings((AddExternalServerScreenController *)v3);
  *(_BYTE *)(v3 + 436) = 1;
  v14 = (RakNet *)(*(_QWORD *)(v3 + 440) >> 32);
  if ( *(_DWORD *)(*(_QWORD *)(v3 + 440) - 12) )
    v15 = 0;
    if ( *((_DWORD *)v14 - 3) && *(_DWORD *)(v3 + 448) > 0 )
      v15 = (const char *)1;
  else
  *(_BYTE *)(v3 + 436) = (_BYTE)v15;
  if ( !RakNet::NonNumericHostString(v14, v15) )
    *(_BYTE *)(v3 + 436) &= Util::isValidIP(*(_DWORD *)(*(_DWORD *)(v3 + 444) - 12), *(_DWORD *)(v3 + 444), 1, 1);
  v16 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v25 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v24 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  return v3;
}


void __fastcall AddExternalServerScreenController::_saveFormDataThen(int a1, int a2)
{
  AddExternalServerScreenController::_saveFormDataThen(a1, a2);
}


signed int __fastcall AddExternalServerScreenController::_validateFormData(AddExternalServerScreenController *this)
{
  AddExternalServerScreenController *v1; // r4@1
  RakNet *v2; // r0@1
  __int64 v3; // kr00_8@1
  const char *v4; // r1@2

  v1 = this;
  *((_BYTE *)this + 436) = 1;
  v3 = *((_QWORD *)this + 55);
  v2 = (RakNet *)(*((_QWORD *)this + 55) >> 32);
  if ( *(_DWORD *)(v3 - 12) )
  {
    v4 = 0;
    if ( *((_DWORD *)v2 - 3) && *((_DWORD *)v1 + 112) > 0 )
      v4 = (const char *)1;
  }
  else
  *((_BYTE *)v1 + 436) = (_BYTE)v4;
  if ( !RakNet::NonNumericHostString(v2, v4) )
    *((_BYTE *)v1 + 436) &= Util::isValidIP(*(_DWORD *)(*((_DWORD *)v1 + 111) - 12), *((_DWORD *)v1 + 111), 1, 1);
  return 1;
}


AddExternalServerScreenController *__fastcall AddExternalServerScreenController::~AddExternalServerScreenController(AddExternalServerScreenController *this)
{
  AddExternalServerScreenController *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E0CA0;
  v2 = *((_DWORD *)this + 111);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 110);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  MainMenuScreenController::~MainMenuScreenController(v1);
  return v1;
}


void __fastcall AddExternalServerScreenController::_removeServer(AddExternalServerScreenController *this)
{
  AddExternalServerScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  void *v4; // r0@3
  void *v5; // r0@4
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  unsigned int *v8; // r2@10
  signed int v9; // r1@12
  _DWORD *v10; // [sp+4h] [bp-34h]@1
  __int64 v11; // [sp+Ch] [bp-2Ch]@1
  int v12; // [sp+18h] [bp-20h]@1
  int v13; // [sp+20h] [bp-18h]@1

  v1 = this;
  sub_119C884((void **)&v13, "addExternalServerScreen.removeButtonLabel");
  sub_119C884((void **)&v12, "addExternalServerScreen.removeConfirmation");
  v2 = operator new(4u);
  LODWORD(v3) = sub_1128506;
  *v2 = v1;
  HIDWORD(v3) = sub_11284E2;
  v10 = v2;
  v11 = v3;
  MinecraftScreenController::_displayStandardModalPopup((int)v1, &v13, &v12, 1, (int)&v10);
  if ( (_DWORD)v11 )
    ((void (*)(void))v11)();
  v4 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v12 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v13 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
}


Json::Value *__fastcall AddExternalServerScreenController::addStaticScreenVars(AddExternalServerScreenController *this, Json::Value *a2)
{
  AddExternalServerScreenController *v2; // r4@1
  int v3; // r0@1
  int v4; // r1@1
  int v5; // r5@1
  int v7; // [sp+0h] [bp-20h]@3

  v2 = this;
  v3 = Json::Value::operator[](a2, "$edit_mode");
  v4 = *((_DWORD *)v2 + 108);
  v5 = v3;
  if ( v4 != 1 )
    LOBYTE(v4) = 0;
  Json::Value::Value((Json::Value *)&v7, v4);
  Json::Value::operator=(v5, (const Json::Value *)&v7);
  return Json::Value::~Value((Json::Value *)&v7);
}


void __fastcall AddExternalServerScreenController::_saveFormDataThen(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  __int64 v5; // r1@6
  void *v6; // r0@8
  void *v7; // r0@9
  unsigned int *v8; // r2@11
  signed int v9; // r1@13
  unsigned int *v10; // r2@15
  signed int v11; // r1@17
  void *v12; // [sp+Ch] [bp-34h]@6
  __int64 v13; // [sp+14h] [bp-2Ch]@6
  int v14; // [sp+20h] [bp-20h]@6
  int v15; // [sp+28h] [bp-18h]@6

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 424);
  if ( *(_DWORD *)(v2 + 432) )
  {
    MinecraftScreenModel::editExternalServer(
      v4,
      *(_QWORD *)(v2 + 448) >> 32,
      (int *)(v2 + 440),
      (int *)(v2 + 444),
      *(_QWORD *)(v2 + 448),
      1);
LABEL_4:
    if ( !*(_DWORD *)(v3 + 8) )
      sub_119C8E4();
    (*(void (__fastcall **)(int))(v3 + 12))(v3);
    return;
  }
  if ( MinecraftScreenModel::addExternalServer(v4, (int *)(v2 + 440), (void **)(v2 + 444), *(_DWORD *)(v2 + 448)) )
    goto LABEL_4;
  sub_119C884((void **)&v15, "addExternalServerScreen.addServer");
  sub_119C884((void **)&v14, "addExternalServerScreen.alreadyAdded");
  v12 = operator new(1u);
  LODWORD(v5) = ZNSt14_Function_base13_Base_managerIZN25MinecraftScreenController26_displayStandardModalPopupERKSsS3_21ModalScreenButtonModeSt8functionIFvbEEEd_UlbE_E10_M_managerERSt9_Any_dataRKSA_St18_Manager_operation;
  HIDWORD(v5) = ZNSt17_Function_handlerIFvbEZN25MinecraftScreenController26_displayStandardModalPopupERKSsS3_21ModalScreenButtonModeSt8functionIS0_EEd_UlbE_E9_M_invokeERKSt9_Any_datab;
  v13 = v5;
  MinecraftScreenController::_displayStandardModalPopup(v2, &v15, &v14, 2, (int)&v12);
  if ( (_DWORD)v13 )
    ((void (*)(void))v13)();
  v6 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v14 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  v7 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v15 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
}


void __fastcall AddExternalServerScreenController::_registerBindings(AddExternalServerScreenController *this)
{
  AddExternalServerScreenController *v1; // r4@1
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
  void *v26; // [sp+0h] [bp-128h]@29
  __int64 v27; // [sp+8h] [bp-120h]@29
  _DWORD *v28; // [sp+10h] [bp-118h]@29
  __int64 v29; // [sp+18h] [bp-110h]@29
  int v30; // [sp+20h] [bp-108h]@29
  void *v31; // [sp+24h] [bp-104h]@25
  __int64 v32; // [sp+2Ch] [bp-FCh]@25
  _DWORD *v33; // [sp+34h] [bp-F4h]@25
  __int64 v34; // [sp+3Ch] [bp-ECh]@25
  int v35; // [sp+44h] [bp-E4h]@25
  void *v36; // [sp+48h] [bp-E0h]@21
  __int64 v37; // [sp+50h] [bp-D8h]@21
  _DWORD *v38; // [sp+58h] [bp-D0h]@21
  __int64 v39; // [sp+60h] [bp-C8h]@21
  int v40; // [sp+68h] [bp-C0h]@21
  void *v41; // [sp+6Ch] [bp-BCh]@17
  __int64 v42; // [sp+74h] [bp-B4h]@17
  _DWORD *v43; // [sp+7Ch] [bp-ACh]@17
  __int64 v44; // [sp+84h] [bp-A4h]@17
  int v45; // [sp+8Ch] [bp-9Ch]@17
  void *v46; // [sp+90h] [bp-98h]@13
  __int64 v47; // [sp+98h] [bp-90h]@13
  _DWORD *v48; // [sp+A0h] [bp-88h]@13
  __int64 v49; // [sp+A8h] [bp-80h]@13
  int v50; // [sp+B0h] [bp-78h]@13
  void *v51; // [sp+B4h] [bp-74h]@9
  __int64 v52; // [sp+BCh] [bp-6Ch]@9
  _DWORD *v53; // [sp+C4h] [bp-64h]@9
  __int64 v54; // [sp+CCh] [bp-5Ch]@9
  int v55; // [sp+D4h] [bp-54h]@9
  void *v56; // [sp+D8h] [bp-50h]@5
  __int64 v57; // [sp+E0h] [bp-48h]@5
  _DWORD *v58; // [sp+E8h] [bp-40h]@5
  __int64 v59; // [sp+F0h] [bp-38h]@5
  int v60; // [sp+F8h] [bp-30h]@5
  void *v61; // [sp+FCh] [bp-2Ch]@1
  __int64 v62; // [sp+104h] [bp-24h]@1
  _DWORD *v63; // [sp+10Ch] [bp-1Ch]@1
  __int64 v64; // [sp+114h] [bp-14h]@1
  char v65; // [sp+11Ch] [bp-Ch]@1

  v1 = this;
  StringHash::StringHash<char [23]>(&v65, (int)"#name_text_box_content");
  v2 = operator new(4u);
  LODWORD(v3) = sub_11282A2;
  *v2 = v1;
  HIDWORD(v3) = sub_1128292;
  v63 = v2;
  v64 = v3;
  v61 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v62 = v4;
  ScreenController::bindString((int)v1, (int *)&v65, (int)&v63, (int)&v61);
  if ( (_DWORD)v62 )
    ((void (*)(void))v62)();
  if ( (_DWORD)v64 )
    ((void (*)(void))v64)();
  v60 = -1308756761;
  v5 = operator new(4u);
  LODWORD(v6) = sub_11282E8;
  *v5 = v1;
  HIDWORD(v6) = sub_11282D8;
  v58 = v5;
  v59 = v6;
  v56 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v57 = v7;
  ScreenController::bindString((int)v1, &v60, (int)&v58, (int)&v56);
  if ( (_DWORD)v57 )
    ((void (*)(void))v57)();
  if ( (_DWORD)v59 )
    ((void (*)(void))v59)();
  StringHash::StringHash<char [23]>(&v55, (int)"#port_text_box_content");
  v8 = operator new(4u);
  LODWORD(v9) = sub_112832E;
  *v8 = v1;
  HIDWORD(v9) = sub_112831E;
  v53 = v8;
  v54 = v9;
  v51 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v52 = v10;
  ScreenController::bindString((int)v1, &v55, (int)&v53, (int)&v51);
  if ( (_DWORD)v52 )
    ((void (*)(void))v52)();
  if ( (_DWORD)v54 )
    ((void (*)(void))v54)();
  v50 = -900593982;
  v11 = operator new(4u);
  LODWORD(v12) = sub_1128390;
  *v11 = v1;
  HIDWORD(v12) = sub_1128364;
  v48 = v11;
  v49 = v12;
  v46 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v47 = v13;
  ScreenController::bindString((int)v1, &v50, (int)&v48, (int)&v46);
  if ( (_DWORD)v47 )
    ((void (*)(void))v47)();
  if ( (_DWORD)v49 )
    ((void (*)(void))v49)();
  v45 = 993632579;
  v14 = operator new(4u);
  LODWORD(v15) = sub_11283D6;
  *v14 = v1;
  HIDWORD(v15) = sub_11283C6;
  v43 = v14;
  v44 = v15;
  v41 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v42 = v16;
  ScreenController::bindBool((int)v1, &v45, (int)&v43, (int)&v41);
  if ( (_DWORD)v42 )
    ((void (*)(void))v42)();
  if ( (_DWORD)v44 )
    ((void (*)(void))v44)();
  v40 = -229667762;
  v17 = operator new(4u);
  LODWORD(v18) = sub_112841E;
  *v17 = v1;
  HIDWORD(v18) = sub_112840C;
  v38 = v17;
  v39 = v18;
  v36 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v37 = v19;
  ScreenController::bindBool((int)v1, &v40, (int)&v38, (int)&v36);
  if ( (_DWORD)v37 )
    ((void (*)(void))v37)();
  if ( (_DWORD)v39 )
    ((void (*)(void))v39)();
  v35 = -579130886;
  v20 = operator new(4u);
  LODWORD(v21) = sub_1128464;
  *v20 = v1;
  HIDWORD(v21) = sub_1128454;
  v33 = v20;
  v34 = v21;
  v31 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v32 = v22;
  ScreenController::bindBool((int)v1, &v35, (int)&v33, (int)&v31);
  if ( (_DWORD)v32 )
    ((void (*)(void))v32)();
  if ( (_DWORD)v34 )
    ((void (*)(void))v34)();
  v30 = -1911296751;
  v23 = operator new(4u);
  LODWORD(v24) = sub_11284AC;
  *v23 = v1;
  HIDWORD(v24) = sub_112849A;
  v28 = v23;
  v29 = v24;
  v26 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v27 = v25;
  ScreenController::bindBool((int)v1, &v30, (int)&v28, (int)&v26);
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  if ( (_DWORD)v29 )
    ((void (*)(void))v29)();
}


ThirdPartyInfo *__fastcall AddExternalServerScreenController::_joinWorld(AddExternalServerScreenController *this)
{
  return j_j_j__ZN20MinecraftScreenModel25startExternalNetworkWorldERKSsS1_i(
           *((_DWORD *)this + 106),
           (int *)this + 110,
           (int *)this + 111,
           *((_DWORD *)this + 112));
}
