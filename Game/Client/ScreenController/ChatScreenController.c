

void __fastcall ChatScreenController::_registerEventHandlers(ChatScreenController *this)
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
  int v38; // r5@28
  _DWORD *v39; // r0@28
  __int64 v40; // r1@28
  void *v41; // r0@30
  int v42; // r5@31
  _DWORD *v43; // r0@31
  __int64 v44; // r1@31
  void *v45; // r0@33
  int v46; // r5@34
  _DWORD *v47; // r0@34
  __int64 v48; // r1@34
  void *v49; // r0@36
  unsigned int *v50; // r2@38
  signed int v51; // r1@40
  unsigned int *v52; // r2@42
  signed int v53; // r1@44
  unsigned int *v54; // r2@46
  signed int v55; // r1@48
  unsigned int *v56; // r2@50
  signed int v57; // r1@52
  unsigned int *v58; // r2@54
  signed int v59; // r1@56
  unsigned int *v60; // r2@58
  signed int v61; // r1@60
  unsigned int *v62; // r2@62
  signed int v63; // r1@64
  unsigned int *v64; // r2@66
  signed int v65; // r1@68
  unsigned int *v66; // r2@70
  signed int v67; // r1@72
  unsigned int *v68; // r2@74
  signed int v69; // r1@76
  unsigned int *v70; // r2@78
  signed int v71; // r1@80
  unsigned int *v72; // r2@82
  signed int v73; // r1@84
  _DWORD *v74; // [sp+4h] [bp-134h]@34
  __int64 v75; // [sp+Ch] [bp-12Ch]@34
  int v76; // [sp+18h] [bp-120h]@34
  _DWORD *v77; // [sp+1Ch] [bp-11Ch]@31
  __int64 v78; // [sp+24h] [bp-114h]@31
  int v79; // [sp+30h] [bp-108h]@31
  _DWORD *v80; // [sp+34h] [bp-104h]@28
  __int64 v81; // [sp+3Ch] [bp-FCh]@28
  int v82; // [sp+48h] [bp-F0h]@28
  _DWORD *v83; // [sp+4Ch] [bp-ECh]@25
  __int64 v84; // [sp+54h] [bp-E4h]@25
  int v85; // [sp+60h] [bp-D8h]@25
  _DWORD *v86; // [sp+64h] [bp-D4h]@22
  __int64 v87; // [sp+6Ch] [bp-CCh]@22
  int v88; // [sp+78h] [bp-C0h]@22
  _DWORD *v89; // [sp+7Ch] [bp-BCh]@19
  __int64 v90; // [sp+84h] [bp-B4h]@19
  int v91; // [sp+90h] [bp-A8h]@19
  _DWORD *v92; // [sp+94h] [bp-A4h]@16
  __int64 v93; // [sp+9Ch] [bp-9Ch]@16
  int v94; // [sp+A8h] [bp-90h]@16
  _DWORD *v95; // [sp+ACh] [bp-8Ch]@13
  __int64 v96; // [sp+B4h] [bp-84h]@13
  int v97; // [sp+C0h] [bp-78h]@13
  _DWORD *v98; // [sp+C4h] [bp-74h]@10
  __int64 v99; // [sp+CCh] [bp-6Ch]@10
  int v100; // [sp+D8h] [bp-60h]@10
  _DWORD *v101; // [sp+DCh] [bp-5Ch]@7
  __int64 v102; // [sp+E4h] [bp-54h]@7
  int v103; // [sp+F0h] [bp-48h]@7
  _DWORD *v104; // [sp+F4h] [bp-44h]@4
  __int64 v105; // [sp+FCh] [bp-3Ch]@4
  int v106; // [sp+108h] [bp-30h]@4
  _DWORD *v107; // [sp+10Ch] [bp-2Ch]@1
  __int64 v108; // [sp+114h] [bp-24h]@1
  int v109; // [sp+120h] [bp-18h]@1

  v1 = this;
  sub_119C884((void **)&v109, "#message_text_box");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v109);
  v3 = operator new(4u);
  LODWORD(v4) = sub_11490C4;
  *v3 = v1;
  HIDWORD(v4) = sub_1148D58;
  v107 = v3;
  v108 = v4;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v2, (int)&v107);
  if ( (_DWORD)v108 )
    ((void (*)(void))v108)();
  v5 = (void *)(v109 - 12);
  if ( (int *)(v109 - 12) != &dword_28898C0 )
  {
    v50 = (unsigned int *)(v109 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
    }
    else
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  sub_119C884((void **)&v106, "button.menu_autocomplete");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v106);
  v7 = operator new(4u);
  LODWORD(v8) = sub_11491DC;
  *v7 = v1;
  HIDWORD(v8) = sub_11490FC;
  v104 = v7;
  v105 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v104);
  if ( (_DWORD)v105 )
    ((void (*)(void))v105)();
  v9 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v106 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v103, "button.menu_autocomplete_back");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v103);
  v11 = operator new(4u);
  LODWORD(v12) = sub_11492F4;
  *v11 = v1;
  HIDWORD(v12) = sub_1149214;
  v101 = v11;
  v102 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v101);
  if ( (_DWORD)v102 )
    ((void (*)(void))v102)();
  v13 = (void *)(v103 - 12);
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v103 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v100, "button.menu_textedit_up");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v100);
  v15 = operator new(4u);
  LODWORD(v16) = sub_114934A;
  *v15 = v1;
  HIDWORD(v16) = sub_114932A;
  v98 = v15;
  v99 = v16;
  ScreenController::registerButtonClickHandler((int)v1, v14, (int)&v98);
  if ( (_DWORD)v99 )
    ((void (*)(void))v99)();
  v17 = (void *)(v100 - 12);
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v100 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  sub_119C884((void **)&v97, "button.menu_textedit_down");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v97);
  v19 = operator new(4u);
  LODWORD(v20) = sub_11493A0;
  *v19 = v1;
  HIDWORD(v20) = sub_1149380;
  v95 = v19;
  v96 = v20;
  ScreenController::registerButtonClickHandler((int)v1, v18, (int)&v95);
  if ( (_DWORD)v96 )
    ((void (*)(void))v96)();
  v21 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v97 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  sub_119C884((void **)&v94, "button.reopen_keyboard");
  v22 = MinecraftScreenController::_getNameId(v1, (int **)&v94);
  v23 = operator new(4u);
  LODWORD(v24) = sub_11493FE;
  *v23 = v1;
  HIDWORD(v24) = sub_11493D6;
  v92 = v23;
  v93 = v24;
  ScreenController::registerButtonClickHandler((int)v1, v22, (int)&v92);
  if ( (_DWORD)v93 )
    ((void (*)(void))v93)();
  v25 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v94 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  sub_119C884((void **)&v91, "button.menu_cancel");
  v26 = MinecraftScreenController::_getNameId(v1, (int **)&v91);
  v27 = operator new(4u);
  LODWORD(v28) = sub_1149482;
  *v27 = v1;
  HIDWORD(v28) = sub_1149434;
  v89 = v27;
  v90 = v28;
  ScreenController::registerButtonClickHandler((int)v1, v26, (int)&v89);
  if ( (_DWORD)v90 )
    ((void (*)(void))v90)();
  v29 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v91 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  sub_119C884((void **)&v88, "button.chat_menu_cancel");
  v30 = MinecraftScreenController::_getNameId(v1, (int **)&v88);
  v31 = operator new(4u);
  LODWORD(v32) = sub_11496AC;
  *v31 = v1;
  HIDWORD(v32) = sub_11494B8;
  v86 = v31;
  v87 = v32;
  ScreenController::registerButtonClickHandler((int)v1, v30, (int)&v86);
  if ( (_DWORD)v87 )
    ((void (*)(void))v87)();
  v33 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v88 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v33);
  sub_119C884((void **)&v85, "button.mute_chat");
  v34 = MinecraftScreenController::_getNameId(v1, (int **)&v85);
  v35 = operator new(4u);
  LODWORD(v36) = sub_11496F4;
  *v35 = v1;
  HIDWORD(v36) = sub_11496E2;
  v83 = v35;
  v84 = v36;
  ScreenController::registerButtonClickHandler((int)v1, v34, (int)&v83);
  if ( (_DWORD)v84 )
    ((void (*)(void))v84)();
  v37 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v85 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v37);
  sub_119C884((void **)&v82, "button.send_message");
  v38 = MinecraftScreenController::_getNameId(v1, (int **)&v82);
  v39 = operator new(4u);
  LODWORD(v40) = sub_1149810;
  *v39 = v1;
  HIDWORD(v40) = sub_114972C;
  v80 = v39;
  v81 = v40;
  ScreenController::registerButtonClickHandler((int)v1, v38, (int)&v80);
  if ( (_DWORD)v81 )
    ((void (*)(void))v81)();
  v41 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v82 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v41);
  sub_119C884((void **)&v79, "button.keyboard_toggle");
  v42 = MinecraftScreenController::_getNameId(v1, (int **)&v79);
  v43 = operator new(4u);
  LODWORD(v44) = sub_1149A30;
  *v43 = v1;
  HIDWORD(v44) = sub_1149848;
  v77 = v43;
  v78 = v44;
  ScreenController::registerButtonClickHandler((int)v1, v42, (int)&v77);
  if ( (_DWORD)v78 )
    ((void (*)(void))v78)();
  v45 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v79 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v45);
  sub_119C884((void **)&v76, "hide_chat");
  v46 = MinecraftScreenController::_getNameId(v1, (int **)&v76);
  v47 = operator new(4u);
  LODWORD(v48) = sub_1149A78;
  *v47 = v1;
  HIDWORD(v48) = sub_1149A66;
  v74 = v47;
  v75 = v48;
  ScreenController::registerToggleChangeEventHandler((int)v1, v46, (int)&v74);
  if ( (_DWORD)v75 )
    ((void (*)(void))v75)();
  v49 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v76 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v49);
  ChatScreenController::_registerEventHandlersHostOptions(v1);
}


void __fastcall ChatScreenController::~ChatScreenController(ChatScreenController *this)
{
  ChatScreenController::~ChatScreenController(this);
}


int __fastcall ChatScreenController::_hideKeyboard(ChatScreenController *this)
{
  ChatScreenController *v1; // r4@1

  v1 = this;
  MinecraftScreenModel::resetInput(*((MinecraftScreenModel **)this + 106));
  if ( !*((_DWORD *)v1 + 114) )
    sub_119C8E4();
  return (*((int (__fastcall **)(_DWORD))v1 + 115))((char *)v1 + 448);
}


int __fastcall ChatScreenController::_sendChatMessage(ChatScreenController *this)
{
  ChatScreenController *v1; // r8@1
  _BYTE *v2; // r1@1
  char *v3; // r11@2
  MinecraftScreenModel *v4; // r0@4
  void *v5; // r0@7
  int v6; // r6@11
  int *v7; // r1@11
  __int64 v8; // kr00_8@11
  __int64 v9; // r2@11
  int v10; // r1@13
  void *v11; // r0@13
  unsigned int *v12; // r2@14
  signed int v13; // r1@16
  int v14; // r1@18
  void *v15; // r0@18
  int v16; // r0@19
  int v17; // r0@19
  unsigned int *v18; // r2@20
  signed int v19; // r1@22
  int v20; // r0@35
  int result; // r0@35
  int v22; // r0@36

  v1 = this;
  v2 = (_BYTE *)*((_DWORD *)this + 116);
  if ( *((_DWORD *)v2 - 3) )
  {
    v3 = (char *)this + 464;
    if ( *((_DWORD *)v2 - 1) >= 0 )
    {
      sub_119CB68((const void **)this + 116);
      v2 = *(_BYTE **)v3;
    }
    v4 = (MinecraftScreenModel *)*((_DWORD *)v1 + 106);
    if ( *v2 == 47 )
      MinecraftScreenModel::leaveScreen(v4);
      ClientInstanceScreenModel::executeCommand(*((_DWORD *)v1 + 106), (int *)v1 + 116);
    else
      ClientInstanceScreenModel::sendChatMessage((int)v4, (int *)v1 + 116);
    while ( 1 )
      v6 = *((_DWORD *)v1 + 117);
      v7 = *(int **)(v6 + 8);
      v8 = *(_QWORD *)(v6 + 24);
      v9 = *(_QWORD *)(v6 + 16);
      if ( (unsigned int)(32 * (*(_DWORD *)(v6 + 36) - HIDWORD(v9))
                        + (((signed int)v8 - HIDWORD(v8)) >> 2)
                        + (((signed int)v9 - (signed int)v7) >> 2)
                        - 128) < 0x65 )
        break;
      if ( v7 == (int *)(v9 - 4) )
      {
        v14 = *v7;
        v15 = (void *)(v14 - 12);
        if ( (int *)(v14 - 12) != &dword_28898C0 )
        {
          v18 = (unsigned int *)(v14 - 4);
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
            j_j_j_j_j__ZdlPv_9_1(v15);
        }
        operator delete(*(void **)(v6 + 12));
        v16 = *(_DWORD *)(v6 + 20);
        *(_DWORD *)(v6 + 20) = v16 + 4;
        v17 = *(_DWORD *)(v16 + 4);
        *(_DWORD *)(v6 + 12) = v17;
        *(_DWORD *)(v6 + 16) = v17 + 512;
        *(_DWORD *)(v6 + 8) = v17;
      }
      else
        v10 = *v7;
        v11 = (void *)(v10 - 12);
        if ( (int *)(v10 - 12) != &dword_28898C0 )
          v12 = (unsigned int *)(v10 - 4);
              v13 = __ldrex(v12);
            while ( __strex(v13 - 1, v12) );
            v13 = (*v12)--;
          if ( v13 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v11);
        *(_DWORD *)(v6 + 8) += 4;
    if ( (_DWORD)v8 == *(_DWORD *)(v6 + 32) - 4 )
      std::deque<std::string,std::allocator<std::string>>::_M_push_back_aux<std::string const&>(
        *((_DWORD *)v1 + 117),
        (int *)v1 + 116);
      sub_119C854((int *)v8, (int *)v1 + 116);
      *(_DWORD *)(v6 + 24) += 4;
    v20 = *((_DWORD *)v1 + 117);
    *((_DWORD *)v1 + 118) = 32 * (*(_DWORD *)(v20 + 36) - (*(_QWORD *)(v20 + 16) >> 32))
                          + ((signed int)(*(_QWORD *)(v20 + 24) - (*(_QWORD *)(v20 + 24) >> 32)) >> 2)
                          + ((signed int)(*(_QWORD *)(v20 + 16) - *(_DWORD *)(v20 + 8)) >> 2)
                          - 128;
    sub_119CA68((const void **)v1 + 116, 0, *(_BYTE **)(*((_DWORD *)v1 + 116) - 12), 0);
    result = MinecraftScreenModel::isKeyboardEnabled(*((MinecraftScreenModel **)v1 + 106));
    if ( result == 1 )
      v22 = *((_DWORD *)v1 + 106);
      result = MinecraftScreenModel::updateTextBoxText();
  }
  else
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v5 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v5 = &ServiceLocator<AppPlatform>::mDefaultService;
    result = (*(int (**)(void))(**(_DWORD **)v5 + 56))();
      MinecraftScreenModel::resetInput(*((MinecraftScreenModel **)v1 + 106));
      if ( !*((_DWORD *)v1 + 114) )
        sub_119C8E4();
      result = (*((int (__fastcall **)(_DWORD))v1 + 115))((char *)v1 + 448);
  return result;
}


int __fastcall ChatScreenController::setViewCommand(ChatScreenController *this, ScreenViewCommand *a2)
{
  int v2; // r12@0
  int v3; // lr@0
  ChatScreenController *v4; // r4@1
  int v5; // r0@1
  ScreenViewCommand *v6; // r5@1
  void (__fastcall *v7)(__int64 *, char *, signed int); // r3@1
  int v8; // r1@2
  int v9; // r2@4
  void (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // r0@6
  void (__fastcall *v12)(int *, char *, signed int); // r3@6
  int v13; // r1@7
  int v14; // r6@9
  void (__cdecl *v15)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r3@9
  int v16; // r0@11
  void (__fastcall *v17)(int *, char *, signed int); // r3@11
  int v18; // r1@12
  int v19; // r6@14
  void (__cdecl *v20)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r3@14
  int v21; // r0@16
  void (__fastcall *v22)(int *, char *, signed int); // r3@16
  int v23; // r1@17
  int v24; // r6@19
  void (__cdecl *v25)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r3@19
  int v26; // r0@21
  void (__fastcall *v27)(int *, char *, signed int); // r3@21
  int v28; // r1@22
  int v29; // r6@24
  void (__cdecl *v30)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r3@24
  int result; // r0@26
  void (__fastcall *v32)(__int64 *, char *, signed int); // r3@26
  int v33; // r1@27
  int v34; // r6@29
  int (__cdecl *v35)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r3@29
  __int64 v36; // [sp+0h] [bp-70h]@2
  void (__cdecl *v37)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-68h]@1
  int v38; // [sp+Ch] [bp-64h]@2
  int v39; // [sp+10h] [bp-60h]@7
  int v40; // [sp+14h] [bp-5Ch]@7
  void (__cdecl *v41)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+18h] [bp-58h]@6
  int v42; // [sp+1Ch] [bp-54h]@7
  int v43; // [sp+20h] [bp-50h]@12
  int v44; // [sp+24h] [bp-4Ch]@12
  void (__cdecl *v45)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+28h] [bp-48h]@11
  int v46; // [sp+2Ch] [bp-44h]@12
  int v47; // [sp+30h] [bp-40h]@17
  int v48; // [sp+34h] [bp-3Ch]@17
  void (__cdecl *v49)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+38h] [bp-38h]@16
  int v50; // [sp+3Ch] [bp-34h]@17
  int v51; // [sp+40h] [bp-30h]@22
  int v52; // [sp+44h] [bp-2Ch]@22
  void (__cdecl *v53)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+48h] [bp-28h]@21
  int v54; // [sp+4Ch] [bp-24h]@22
  __int64 v55; // [sp+50h] [bp-20h]@27
  int (__cdecl *v56)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+58h] [bp-18h]@26
  int v57; // [sp+5Ch] [bp-14h]@27

  v4 = this;
  v5 = 0;
  v6 = a2;
  v37 = 0;
  v7 = (void (__fastcall *)(__int64 *, char *, signed int))*((_DWORD *)a2 + 10);
  if ( v7 )
  {
    v7(&v36, (char *)a2 + 32, 2);
    v5 = *((_DWORD *)v6 + 11);
    v38 = *((_DWORD *)v6 + 11);
    v8 = *((_DWORD *)v6 + 10);
    v37 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v6 + 10);
    v3 = HIDWORD(v36);
    v2 = v36;
  }
  else
    v8 = 0;
  v9 = (int)v4 + 432;
  v36 = *((_QWORD *)v4 + 54);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v37 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v4 + 110);
  v10 = v37;
  *((_DWORD *)v4 + 110) = v8;
  v38 = *((_DWORD *)v4 + 111);
  *((_DWORD *)v4 + 111) = v5;
  if ( v10 )
    v10(&v36, &v36, 3, v10);
  v11 = 0;
  v41 = 0;
  v12 = (void (__fastcall *)(int *, char *, signed int))*((_DWORD *)v6 + 14);
  if ( v12 )
    v12(&v39, (char *)v6 + 48, 2);
    v11 = *((_DWORD *)v6 + 15);
    v42 = *((_DWORD *)v6 + 15);
    v13 = *((_DWORD *)v6 + 14);
    v41 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v6 + 14);
    v3 = v40;
    v2 = v39;
    v13 = 0;
  v14 = (int)v4 + 448;
  *(_QWORD *)&v39 = *((_QWORD *)v4 + 56);
  *(_DWORD *)v14 = v2;
  *(_DWORD *)(v14 + 4) = v3;
  v41 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v4 + 114);
  v15 = v41;
  *((_DWORD *)v4 + 114) = v13;
  v42 = *((_DWORD *)v4 + 115);
  *((_DWORD *)v4 + 115) = v11;
  if ( v15 )
    v15(&v39, &v39, 3, v15, v36, HIDWORD(v36), v37, v38);
  v16 = 0;
  v45 = 0;
  v17 = (void (__fastcall *)(int *, char *, signed int))*((_DWORD *)v6 + 38);
  if ( v17 )
    v17(&v43, (char *)v6 + 144, 2);
    v16 = *((_DWORD *)v6 + 39);
    v46 = *((_DWORD *)v6 + 39);
    v18 = *((_DWORD *)v6 + 38);
    v45 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v6 + 38);
    v3 = v44;
    v2 = v43;
    v18 = 0;
  v19 = (int)v4 + 560;
  *(_QWORD *)&v43 = *((_QWORD *)v4 + 70);
  *(_DWORD *)v19 = v2;
  *(_DWORD *)(v19 + 4) = v3;
  v45 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v4 + 142);
  v20 = v45;
  *((_DWORD *)v4 + 142) = v18;
  v46 = *((_DWORD *)v4 + 143);
  *((_DWORD *)v4 + 143) = v16;
  if ( v20 )
    v20(&v43, &v43, 3, v20, v36, HIDWORD(v36), v37, v38, v39, v40, v41, v42);
  v21 = 0;
  v49 = 0;
  v22 = (void (__fastcall *)(int *, char *, signed int))*((_DWORD *)v6 + 18);
  if ( v22 )
    v22(&v47, (char *)v6 + 64, 2);
    v21 = *((_DWORD *)v6 + 19);
    v50 = *((_DWORD *)v6 + 19);
    v23 = *((_DWORD *)v6 + 18);
    v49 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v6 + 18);
    v3 = v48;
    v2 = v47;
    v23 = 0;
  v24 = (int)v4 + 576;
  *(_QWORD *)&v47 = *((_QWORD *)v4 + 72);
  *(_DWORD *)v24 = v2;
  *(_DWORD *)(v24 + 4) = v3;
  v49 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v4 + 146);
  v25 = v49;
  *((_DWORD *)v4 + 146) = v23;
  v50 = *((_DWORD *)v4 + 147);
  *((_DWORD *)v4 + 147) = v21;
  if ( v25 )
    v25(&v47, &v47, 3, v25, v36, HIDWORD(v36), v37, v38, v39, v40, v41, v42, v43, v44, v45, v46);
  v26 = 0;
  v53 = 0;
  v27 = (void (__fastcall *)(int *, char *, signed int))*((_DWORD *)v6 + 26);
  if ( v27 )
    v27(&v51, (char *)v6 + 96, 2);
    v26 = *((_DWORD *)v6 + 27);
    v54 = *((_DWORD *)v6 + 27);
    v28 = *((_DWORD *)v6 + 26);
    v53 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v6 + 26);
    v3 = v52;
    v2 = v51;
    v28 = 0;
  v29 = (int)v4 + 592;
  *(_QWORD *)&v51 = *((_QWORD *)v4 + 74);
  *(_DWORD *)v29 = v2;
  *(_DWORD *)(v29 + 4) = v3;
  v53 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v4 + 150);
  v30 = v53;
  *((_DWORD *)v4 + 150) = v28;
  v54 = *((_DWORD *)v4 + 151);
  *((_DWORD *)v4 + 151) = v26;
  if ( v30 )
    v30(&v51, &v51, 3, v30, v36, HIDWORD(v36), v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50);
  result = 0;
  v56 = 0;
  v32 = (void (__fastcall *)(__int64 *, char *, signed int))*((_DWORD *)v6 + 30);
  if ( v32 )
    v32(&v55, (char *)v6 + 112, 2);
    result = *((_DWORD *)v6 + 31);
    v57 = *((_DWORD *)v6 + 31);
    v33 = *((_DWORD *)v6 + 30);
    v56 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v6 + 30);
    v32 = (void (__fastcall *)(__int64 *, char *, signed int))HIDWORD(v55);
    v2 = v55;
    v33 = 0;
  v34 = (int)v4 + 608;
  v55 = *((_QWORD *)v4 + 76);
  *(_DWORD *)v34 = v2;
  *(_DWORD *)(v34 + 4) = v32;
  v56 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v4 + 154);
  v35 = v56;
  *((_DWORD *)v4 + 154) = v33;
  v57 = *((_DWORD *)v4 + 155);
  *((_DWORD *)v4 + 155) = result;
  if ( v35 )
    result = v35(
               &v55,
               3,
               v35,
               v36,
               HIDWORD(v36),
               v37,
               v38,
               v39,
               v40,
               v41,
               v42,
               v43,
               v44,
               v45,
               v46,
               v47,
               v48,
               v49,
               v50,
               v51,
               v52,
               v53,
               v54);
  return result;
}


unsigned __int64 *__fastcall ChatScreenController::_registerBindingsSubCommand(int a1, unsigned __int64 *a2, int *a3, int *a4)
{
  unsigned __int64 *v4; // r11@1
  int v5; // r10@1
  int *v6; // r7@1
  unsigned __int64 v7; // r0@1
  int *v8; // r8@1
  int v9; // r3@1
  unsigned int v10; // r4@1
  char *v11; // r2@1
  int v12; // r4@4
  _DWORD *v13; // r0@4
  int v14; // r1@4
  int v15; // r1@4
  __int64 v16; // r1@4
  int v17; // r3@8
  unsigned __int64 v18; // r0@8
  unsigned int v19; // r4@8
  char *v20; // r2@8
  int v21; // r4@11
  _DWORD *v22; // r0@11
  int v23; // r1@11
  int v24; // r1@11
  __int64 v25; // r1@11
  char *v26; // r7@15
  unsigned __int64 v27; // r0@15
  unsigned int v28; // r4@15
  int v29; // r2@15
  int v30; // r5@18
  int v31; // r4@18
  _DWORD *v32; // r0@18
  __int64 v33; // r1@18
  char *v34; // r7@22
  unsigned __int64 v35; // r0@22
  unsigned int v36; // r4@22
  int v37; // r2@22
  int v38; // r5@25
  int v39; // r4@25
  _DWORD *v40; // r0@25
  __int64 v41; // r1@25
  void *v43; // [sp+8h] [bp-E0h]@25
  __int64 v44; // [sp+10h] [bp-D8h]@25
  int v45; // [sp+18h] [bp-D0h]@22
  int v46; // [sp+1Ch] [bp-CCh]@22
  int v47; // [sp+20h] [bp-C8h]@22
  _DWORD *v48; // [sp+24h] [bp-C4h]@25
  void (*v49)(void); // [sp+2Ch] [bp-BCh]@25
  int *(__fastcall *v50)(int *, _DWORD **, int); // [sp+30h] [bp-B8h]@25
  int v51; // [sp+34h] [bp-B4h]@22
  void *v52; // [sp+38h] [bp-B0h]@18
  __int64 v53; // [sp+40h] [bp-A8h]@18
  int v54; // [sp+48h] [bp-A0h]@15
  int v55; // [sp+4Ch] [bp-9Ch]@15
  int v56; // [sp+50h] [bp-98h]@15
  _DWORD *v57; // [sp+54h] [bp-94h]@18
  void (*v58)(void); // [sp+5Ch] [bp-8Ch]@18
  int *(__fastcall *v59)(int *, _DWORD **, int); // [sp+60h] [bp-88h]@18
  int v60; // [sp+64h] [bp-84h]@15
  void *v61; // [sp+68h] [bp-80h]@11
  __int64 v62; // [sp+70h] [bp-78h]@11
  char *v63; // [sp+78h] [bp-70h]@8
  int v64; // [sp+7Ch] [bp-6Ch]@8
  char *v65; // [sp+80h] [bp-68h]@8
  _DWORD *v66; // [sp+84h] [bp-64h]@11
  void (*v67)(void); // [sp+8Ch] [bp-5Ch]@11
  int *(__fastcall *v68)(int *, _DWORD **, int); // [sp+90h] [bp-58h]@11
  int v69; // [sp+94h] [bp-54h]@8
  void *v70; // [sp+98h] [bp-50h]@4
  __int64 v71; // [sp+A0h] [bp-48h]@4
  char *v72; // [sp+A8h] [bp-40h]@1
  int v73; // [sp+ACh] [bp-3Ch]@1
  char *v74; // [sp+B0h] [bp-38h]@1
  _DWORD *v75; // [sp+B4h] [bp-34h]@4
  void (*v76)(void); // [sp+BCh] [bp-2Ch]@4
  int (__fastcall *v77)(int, _QWORD **); // [sp+C0h] [bp-28h]@4

  v4 = a2;
  v5 = a1;
  v7 = *a2;
  v6 = a3;
  LODWORD(v7) = HIDWORD(v7) - v7;
  v8 = a4;
  v9 = HIDWORD(v7);
  v10 = -1431655765 * ((signed int)v7 >> 2);
  v11 = 0;
  v72 = 0;
  v73 = 0;
  v74 = 0;
  if ( (_DWORD)v7 )
  {
    if ( v10 >= 0x15555556 )
      sub_119C874();
    v11 = (char *)operator new(v7);
    HIDWORD(v7) = *v4 >> 32;
    v9 = *v4;
  }
  v72 = v11;
  v74 = &v11[12 * v10];
  v12 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<HostOptionSubCommand const*,std::vector<HostOptionSubCommand,std::allocator<HostOptionSubCommand>>>,HostOptionSubCommand*>(
          v9,
          SHIDWORD(v7),
          (int)v11);
  v13 = operator new(0xCu);
  v14 = (int)v72;
  *v13 = v14;
  v15 = (int)v74;
  v13[1] = v12;
  v13[2] = v15;
  v75 = v13;
  v76 = (void (*)(void))sub_114CA10;
  v77 = sub_114C9F4;
  v70 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v71 = v16;
  ScreenController::bindGridSize(v5, v6, (int)&v75, (int)&v70);
  if ( (_DWORD)v71 )
    ((void (*)(void))v71)();
  if ( v76 )
    v76();
  std::vector<HostOptionSubCommand,std::allocator<HostOptionSubCommand>>::~vector((unsigned __int64 *)&v72);
  v69 = -742427320;
  v18 = *v4;
  v17 = HIDWORD(v18);
  LODWORD(v18) = HIDWORD(v18) - v18;
  v19 = -1431655765 * ((signed int)v18 >> 2);
  v20 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  if ( (_DWORD)v18 )
    if ( v19 >= 0x15555556 )
    v20 = (char *)operator new(v18);
    HIDWORD(v18) = *v4 >> 32;
    v17 = *v4;
  v63 = v20;
  v65 = &v20[12 * v19];
  v21 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<HostOptionSubCommand const*,std::vector<HostOptionSubCommand,std::allocator<HostOptionSubCommand>>>,HostOptionSubCommand*>(
          v17,
          SHIDWORD(v18),
          (int)v20);
  v22 = operator new(0xCu);
  v23 = (int)v63;
  *v22 = v23;
  v24 = (int)v65;
  v22[1] = v21;
  v22[2] = v24;
  v66 = v22;
  v67 = (void (*)(void))sub_114CA70;
  v68 = sub_114CA5C;
  v61 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v62 = v25;
  ScreenController::bindStringForCollection(v5, v8, &v69, (int)&v66, (int)&v61);
  if ( (_DWORD)v62 )
    ((void (*)(void))v62)();
  if ( v67 )
    v67();
  std::vector<HostOptionSubCommand,std::allocator<HostOptionSubCommand>>::~vector((unsigned __int64 *)&v63);
  v26 = 0;
  v60 = 1126334437;
  v27 = *v4;
  v54 = 0;
  v55 = 0;
  LODWORD(v27) = HIDWORD(v27) - v27;
  v56 = 0;
  v28 = -1431655765 * ((signed int)v27 >> 2);
  v29 = HIDWORD(v27);
  if ( (_DWORD)v27 )
    if ( v28 >= 0x15555556 )
    v26 = (char *)operator new(v27);
    HIDWORD(v27) = *v4 >> 32;
    v29 = *v4;
  v30 = (int)&v26[12 * v28];
  v31 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<HostOptionSubCommand const*,std::vector<HostOptionSubCommand,std::allocator<HostOptionSubCommand>>>,HostOptionSubCommand*>(
          v29,
          SHIDWORD(v27),
          (int)v26);
  v32 = operator new(0xCu);
  *v32 = v26;
  v32[1] = v31;
  v32[2] = v30;
  v57 = v32;
  v58 = (void (*)(void))sub_114CAD2;
  v59 = sub_114CABC;
  v52 = operator new(1u);
  LODWORD(v33) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v33) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v53 = v33;
  ScreenController::bindStringForCollection(v5, v8, &v60, (int)&v57, (int)&v52);
  if ( (_DWORD)v53 )
    ((void (*)(void))v53)();
  if ( v58 )
    v58();
  std::vector<HostOptionSubCommand,std::allocator<HostOptionSubCommand>>::~vector((unsigned __int64 *)&v54);
  v34 = 0;
  v51 = 625635130;
  v35 = *v4;
  v45 = 0;
  v46 = 0;
  LODWORD(v35) = HIDWORD(v35) - v35;
  v47 = 0;
  v36 = -1431655765 * ((signed int)v35 >> 2);
  v37 = HIDWORD(v35);
  if ( (_DWORD)v35 )
    if ( v36 >= 0x15555556 )
    v34 = (char *)operator new(v35);
    HIDWORD(v35) = *v4 >> 32;
    v37 = *v4;
  v38 = (int)&v34[12 * v36];
  v39 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<HostOptionSubCommand const*,std::vector<HostOptionSubCommand,std::allocator<HostOptionSubCommand>>>,HostOptionSubCommand*>(
          v37,
          SHIDWORD(v35),
          (int)v34);
  v40 = operator new(0xCu);
  *v40 = v34;
  v40[1] = v39;
  v40[2] = v38;
  v48 = v40;
  v49 = (void (*)(void))sub_114CB34;
  v50 = sub_114CB1E;
  v43 = operator new(1u);
  LODWORD(v41) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v41) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v44 = v41;
  ScreenController::bindStringForCollection(v5, v8, &v51, (int)&v48, (int)&v43);
  if ( (_DWORD)v44 )
    ((void (*)(void))v44)();
  if ( v49 )
    v49();
  return std::vector<HostOptionSubCommand,std::allocator<HostOptionSubCommand>>::~vector((unsigned __int64 *)&v45);
}


void __fastcall ChatScreenController::_getBottomButtonFocusOverrideUp(int a1, int *a2, __int64 a3)
{
  ChatScreenController::_getBottomButtonFocusOverrideUp(a1, a2, a3);
}


signed int __fastcall ChatScreenController::_hostOptionNavigation(ChatScreenController *this)
{
  ChatScreenController *v1; // r8@1
  signed int result; // r0@1
  unsigned int v3; // r1@1
  __int64 v4; // kr00_8@3
  int *v5; // r1@4
  _DWORD *v6; // r7@4
  unsigned int *v7; // r2@5
  signed int v8; // r5@7
  int *v9; // r4@11
  int *v10; // r0@12
  int v11; // [sp+0h] [bp-28h]@4

  v1 = this;
  result = 0;
  v3 = *((_DWORD *)v1 + 130);
  if ( v3 <= 7 )
  {
    if ( (1 << v3) & 0xCC )
    {
      *((_DWORD *)v1 + 130) = 1;
      sub_119CA68((const void **)v1 + 116, 0, *(_BYTE **)(*((_DWORD *)v1 + 116) - 12), 0);
      v4 = *(_QWORD *)((char *)v1 + 524);
      if ( HIDWORD(v4) != (_DWORD)v4 )
      {
        v5 = &v11;
        v6 = (_DWORD *)v4;
        do
        {
          v10 = (int *)(*v6 - 12);
          if ( v10 != &dword_28898C0 )
          {
            v7 = (unsigned int *)(*v6 - 4);
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
              v9 = v5;
              j_j_j_j_j__ZdlPv_9_1(v10);
              v5 = v9;
          }
          ++v6;
        }
        while ( v6 != (_DWORD *)HIDWORD(v4) );
      }
      *((_DWORD *)v1 + 132) = v4;
      *((_DWORD *)v1 + 134) = 0;
      result = 1;
      *((_BYTE *)v1 + 479) = 1;
    }
    else
      if ( (1 << v3) & 0x30 )
        *((_DWORD *)v1 + 130) = 3;
        sub_119CAD8((void **)v1 + 116, "/tp ", (_BYTE *)4);
        ChatScreenController::_beginNewCommand(v1);
        sub_119CA68((const void **)v1 + 135, 0, *(_BYTE **)(*((_DWORD *)v1 + 135) - 12), 0);
        sub_119CA68((const void **)v1 + 136, 0, *(_BYTE **)(*((_DWORD *)v1 + 136) - 12), 0);
      else
        if ( v3 != 1 )
          return result;
        *((_DWORD *)v1 + 130) = 0;
  }
  return result;
}


int __fastcall ChatScreenController::_isSendButtonVisible(ChatScreenController *this)
{
  int result; // r0@2

  if ( *(_DWORD *)(*((_DWORD *)this + 116) - 12) )
    result = ClientInstanceScreenModel::canInteractWhileKeyboardIsOpen(*((ClientInstanceScreenModel **)this + 106));
  else
    result = 0;
  return result;
}


signed int __fastcall ChatScreenController::_isTeleportScreenOpen(ChatScreenController *this)
{
  unsigned int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 130) - 3;
  result = 0;
  if ( v1 < 3 )
    result = 1;
  return result;
}


int __fastcall ChatScreenController::handleGameEventNotification(int a1, int a2)
{
  int v2; // r5@1
  char *v3; // r1@2

  v2 = a1;
  if ( a2 == 6 )
  {
    v3 = ClientInstanceScreenModel::getLastChatMessage(*(ClientInstanceScreenModel **)(a1 + 424));
    if ( *(_DWORD *)(*(_DWORD *)v3 - 12) )
      ChatScreenController::_handleChatMessage(v2, (const void **)v3);
  }
  return j_j_j__ZN16ScreenController27handleGameEventNotificationEN2ui21GameEventNotificationE(v2);
}


const void **__fastcall ChatScreenController::_teleportWhereHelper(ChatScreenController *this)
{
  ChatScreenController *v1; // r4@1
  _BYTE *v2; // r2@1
  unsigned int v3; // r0@2

  v1 = this;
  v2 = *(_BYTE **)(*((_DWORD *)this + 136) - 12);
  if ( v2
    || (v3 = *((_DWORD *)this + 134), v3 < 3)
    || (signed int)((*(_QWORD *)((char *)v1 + 524) >> 32) - *(_QWORD *)((char *)v1 + 524)) >> 2 >= v3 )
  {
    sub_119CA68((const void **)v1 + 136, 0, v2, 0);
    sub_119CA68((const void **)v1 + 135, 0, *(_BYTE **)(*((_DWORD *)v1 + 135) - 12), 0);
    sub_119CAD8((void **)v1 + 116, "/tp ", (_BYTE *)4);
    ChatScreenController::_beginNewCommand(v1);
  }
  *((_DWORD *)v1 + 130) = 5;
  return sub_119CBA8((void **)v1 + 137, "players_collection", (_BYTE *)0x12);
}


void __fastcall ChatScreenController::_getBottomButtonFocusOverrideUp(int a1, int *a2, __int64 a3)
{
  int *v3; // r4@1
  void *v4; // r0@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  int v7; // [sp+4h] [bp-1Ch]@2

  v3 = a2;
  if ( *(_DWORD *)(a1 + 520) )
  {
    Util::format((Util *)&v7, "host_option_%d_focus_id", a3);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v7);
    v4 = (void *)(v7 - 12);
    if ( (int *)(v7 - 12) != &dword_28898C0 )
    {
      v5 = (unsigned int *)(v7 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v4);
    }
  }
}


int *__fastcall ChatScreenController::onOpen(ChatScreenController *this)
{
  ChatScreenController *v1; // r4@1
  void *v2; // r0@2
  char *v3; // r5@3
  GuiMessage *v4; // r0@3
  GuiMessage *v5; // r6@3
  ClientInstanceScreenModel *v6; // r1@3
  char *v7; // r1@8
  int v8; // r1@12
  __int64 v9; // r2@12
  int v10; // r5@14
  void *v11; // r0@14
  void *v12; // r0@17
  unsigned int *v14; // r2@19
  signed int v15; // r1@21
  unsigned int *v16; // r2@27
  signed int v17; // r1@29
  int v18; // [sp+4h] [bp-19Ch]@16
  int v19; // [sp+Ch] [bp-194h]@13
  char v20; // [sp+10h] [bp-190h]@11
  int v21; // [sp+188h] [bp-18h]@1

  v1 = this;
  sub_119C884((void **)&v21, "messages_factory");
  if ( !*((_DWORD *)v1 + 11) )
    sub_119C8E4();
  (*((void (__fastcall **)(_DWORD, _DWORD))v1 + 12))((char *)v1 + 36, &v21);
  v2 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v21 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v2);
  }
  v3 = ClientInstanceScreenModel::getGuiMessageList(*((ClientInstanceScreenModel **)v1 + 106));
  v4 = (GuiMessage *)(*(_QWORD *)v3 >> 32);
  v5 = (GuiMessage *)*(_QWORD *)v3;
  v6 = (ClientInstanceScreenModel *)*((_DWORD *)v1 + 106);
  while ( v5 != v4 )
    if ( ClientInstanceScreenModel::isChatMute(v6) != 1 || GuiMessage::isForceVisible(v5) == 1 )
      v7 = GuiMessage::getString(v5);
      if ( *(_DWORD *)(*(_DWORD *)v7 - 12) )
        ChatScreenController::_handleChatMessage((int)v1, (const void **)v7);
    v6 = (ClientInstanceScreenModel *)*((_DWORD *)v1 + 106);
    v5 = (GuiMessage *)((char *)v5 + 24);
    v4 = (GuiMessage *)*((_DWORD *)v3 + 1);
  MinecraftScreenModel::getLevelData((MinecraftScreenModel *)&v20, (int)v6);
  if ( LevelData::hasCommandsEnabled((LevelData *)&v20) == 1 )
    LevelData::~LevelData((LevelData *)&v20);
  else
    sub_119C884((void **)&v19, "text_box");
    if ( !*((_DWORD *)v1 + 150) )
      sub_119C8E4();
    v10 = (*((int (__fastcall **)(_DWORD, _DWORD))v1 + 151))((char *)v1 + 592, &v19);
    v11 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v19 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v11);
    if ( !v10 )
      sub_119C884((void **)&v18, "text_box");
      if ( !*((_DWORD *)v1 + 146) )
        sub_119C8E4();
      (*((void (__fastcall **)(_DWORD, _DWORD))v1 + 147))((char *)v1 + 576, &v18);
      v8 = v18;
      LODWORD(v9) = &dword_28898C0;
      v12 = (void *)(v18 - 12);
      if ( (int *)(v18 - 12) != &dword_28898C0 )
        LODWORD(v9) = v18 - 4;
        if ( &pthread_create )
        {
          __dmb();
          do
          {
            v8 = __ldrex((unsigned int *)v9);
            HIDWORD(v9) = v8 - 1;
          }
          while ( __strex(v8 - 1, (unsigned int *)v9) );
        }
        else
          v8 = *(_DWORD *)v9;
          HIDWORD(v9) = *(_DWORD *)v9 - 1;
          *(_DWORD *)v9 = HIDWORD(v9);
        if ( v8 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v12);
  return ScreenController::onOpen(v1, v8, v9);
}


  if ( ChatScreenController::_hostOptionNavigation(**a1) == 1 )
{
    v2 = (MinecraftScreenModel **)((char *)v1 + 424);
  }
  else
  {
    if ( !*((_BYTE *)v1 + 477) || MinecraftScreenModel::isInputModeMouse(*v2) == 1 )
      MinecraftScreenModel::leaveScreen(*v2);
  MinecraftScreenModel::resetInput(*v2);
  if ( !*((_DWORD *)v1 + 114) )
    sub_119C8E4();
  (*((void (__fastcall **)(_DWORD))v1 + 115))((char *)v1 + 448);
  return 1;
}


int __fastcall ChatScreenController::_handleMenuCancel(ChatScreenController *this)
{
  ChatScreenController *v1; // r4@1
  MinecraftScreenModel **v2; // r5@2

  v1 = this;
  if ( ChatScreenController::_hostOptionNavigation(this) == 1 )
  {
    v2 = (MinecraftScreenModel **)((char *)v1 + 424);
  }
  else
    if ( !*((_BYTE *)v1 + 477) || MinecraftScreenModel::isInputModeMouse(*v2) == 1 )
      MinecraftScreenModel::leaveScreen(*v2);
  MinecraftScreenModel::resetInput(*v2);
  if ( !*((_DWORD *)v1 + 114) )
    sub_119C8E4();
  return (*((int (__fastcall **)(_DWORD))v1 + 115))((char *)v1 + 448);
}


signed int __fastcall ChatScreenController::_beginNewCommand(ChatScreenController *this)
{
  ChatScreenController *v1; // r11@1
  __int64 v2; // kr00_8@1
  _DWORD *v3; // r5@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  int v7; // r0@16
  signed int result; // r0@16

  v1 = this;
  v2 = *(_QWORD *)((char *)this + 524);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = (_DWORD *)v2;
    do
    {
      v6 = (int *)(*v3 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*v3 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v6);
      }
      ++v3;
    }
    while ( v3 != (_DWORD *)HIDWORD(v2) );
  }
  *((_DWORD *)v1 + 132) = v2;
  if ( (_DWORD)v2 == *((_DWORD *)v1 + 133) )
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)((char *)v1 + 524),
      (int *)v1 + 116);
  else
    sub_119C854((int *)v2, (int *)v1 + 116);
    *((_DWORD *)v1 + 132) += 4;
  v7 = *((_DWORD *)v1 + 106);
  MinecraftScreenModel::updateTextBoxText();
  *((_DWORD *)v1 + 134) = 2;
  result = 1;
  *((_BYTE *)v1 + 479) = 1;
  return result;
}


unsigned __int64 *__fastcall ChatScreenController::_registerBindings(ChatScreenController *this)
{
  ChatScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  _DWORD *v4; // r0@3
  __int64 v5; // r1@3
  __int64 v6; // r1@3
  _DWORD *v7; // r0@7
  __int64 v8; // r1@7
  __int64 v9; // r1@7
  _DWORD *v10; // r0@11
  __int64 v11; // r1@11
  __int64 v12; // r1@11
  _DWORD *v13; // r0@15
  __int64 v14; // r1@15
  __int64 v15; // r1@15
  _DWORD *v16; // r0@19
  __int64 v17; // r1@19
  __int64 v18; // r1@19
  _DWORD *v19; // r0@23
  __int64 v20; // r1@23
  __int64 v21; // r1@23
  _DWORD *v22; // r0@27
  __int64 v23; // r1@27
  __int64 v24; // r1@27
  _DWORD *v25; // r0@31
  __int64 v26; // r1@31
  __int64 v27; // r1@31
  _DWORD *v28; // r0@35
  __int64 v29; // r1@35
  __int64 v30; // r1@35
  _DWORD *v31; // r0@39
  __int64 v32; // r1@39
  __int64 v33; // r1@39
  _DWORD *v34; // r0@43
  __int64 v35; // r1@43
  __int64 v36; // r1@43
  void *v38; // [sp+8h] [bp-1C0h]@43
  __int64 v39; // [sp+10h] [bp-1B8h]@43
  _DWORD *v40; // [sp+18h] [bp-1B0h]@43
  __int64 v41; // [sp+20h] [bp-1A8h]@43
  int v42; // [sp+28h] [bp-1A0h]@43
  void *v43; // [sp+2Ch] [bp-19Ch]@39
  __int64 v44; // [sp+34h] [bp-194h]@39
  _DWORD *v45; // [sp+3Ch] [bp-18Ch]@39
  __int64 v46; // [sp+44h] [bp-184h]@39
  int v47; // [sp+4Ch] [bp-17Ch]@39
  int v48; // [sp+50h] [bp-178h]@39
  void *v49; // [sp+54h] [bp-174h]@35
  __int64 v50; // [sp+5Ch] [bp-16Ch]@35
  _DWORD *v51; // [sp+64h] [bp-164h]@35
  __int64 v52; // [sp+6Ch] [bp-15Ch]@35
  int v53; // [sp+74h] [bp-154h]@35
  int v54; // [sp+78h] [bp-150h]@35
  void *v55; // [sp+7Ch] [bp-14Ch]@31
  __int64 v56; // [sp+84h] [bp-144h]@31
  _DWORD *v57; // [sp+8Ch] [bp-13Ch]@31
  __int64 v58; // [sp+94h] [bp-134h]@31
  int v59; // [sp+9Ch] [bp-12Ch]@31
  int v60; // [sp+A0h] [bp-128h]@31
  void *v61; // [sp+A4h] [bp-124h]@27
  __int64 v62; // [sp+ACh] [bp-11Ch]@27
  _DWORD *v63; // [sp+B4h] [bp-114h]@27
  __int64 v64; // [sp+BCh] [bp-10Ch]@27
  int v65; // [sp+C4h] [bp-104h]@27
  void *v66; // [sp+C8h] [bp-100h]@23
  __int64 v67; // [sp+D0h] [bp-F8h]@23
  _DWORD *v68; // [sp+D8h] [bp-F0h]@23
  __int64 v69; // [sp+E0h] [bp-E8h]@23
  int v70; // [sp+E8h] [bp-E0h]@23
  void *v71; // [sp+ECh] [bp-DCh]@19
  __int64 v72; // [sp+F4h] [bp-D4h]@19
  _DWORD *v73; // [sp+FCh] [bp-CCh]@19
  __int64 v74; // [sp+104h] [bp-C4h]@19
  int v75; // [sp+10Ch] [bp-BCh]@19
  void *v76; // [sp+110h] [bp-B8h]@15
  __int64 v77; // [sp+118h] [bp-B0h]@15
  _DWORD *v78; // [sp+120h] [bp-A8h]@15
  __int64 v79; // [sp+128h] [bp-A0h]@15
  int v80; // [sp+130h] [bp-98h]@15
  void *v81; // [sp+134h] [bp-94h]@11
  __int64 v82; // [sp+13Ch] [bp-8Ch]@11
  _DWORD *v83; // [sp+144h] [bp-84h]@11
  __int64 v84; // [sp+14Ch] [bp-7Ch]@11
  int v85; // [sp+154h] [bp-74h]@11
  void *v86; // [sp+158h] [bp-70h]@7
  __int64 v87; // [sp+160h] [bp-68h]@7
  _DWORD *v88; // [sp+168h] [bp-60h]@7
  __int64 v89; // [sp+170h] [bp-58h]@7
  int v90; // [sp+178h] [bp-50h]@7
  void *v91; // [sp+17Ch] [bp-4Ch]@3
  __int64 v92; // [sp+184h] [bp-44h]@3
  _DWORD *v93; // [sp+18Ch] [bp-3Ch]@3
  __int64 v94; // [sp+194h] [bp-34h]@3
  int v95; // [sp+19Ch] [bp-2Ch]@3
  _DWORD *v96; // [sp+1A0h] [bp-28h]@1
  __int64 v97; // [sp+1A8h] [bp-20h]@1
  int v98; // [sp+1B0h] [bp-18h]@1
  int v99; // [sp+1B4h] [bp-14h]@1

  v1 = this;
  v98 = -1348682599;
  v99 = 262016312;
  v2 = operator new(4u);
  LODWORD(v3) = sub_1149B38;
  *v2 = v1;
  HIDWORD(v3) = sub_1149AB0;
  v96 = v2;
  v97 = v3;
  ScreenController::bindForCollection((int)v1, &v99, &v98, (int)&v96);
  if ( (_DWORD)v97 )
    ((void (*)(void))v97)();
  v95 = -290273689;
  v4 = operator new(4u);
  LODWORD(v5) = sub_1149B7E;
  *v4 = v1;
  HIDWORD(v5) = sub_1149B6E;
  v93 = v4;
  v94 = v5;
  v91 = operator new(1u);
  LODWORD(v6) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v6) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v92 = v6;
  ScreenController::bindString((int)v1, &v95, (int)&v93, (int)&v91);
  if ( (_DWORD)v92 )
    ((void (*)(void))v92)();
  if ( (_DWORD)v94 )
    ((void (*)(void))v94)();
  v90 = -342436240;
  v7 = operator new(4u);
  LODWORD(v8) = sub_1149C04;
  *v7 = v1;
  HIDWORD(v8) = sub_1149BB4;
  v88 = v7;
  v89 = v8;
  v86 = operator new(1u);
  LODWORD(v9) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v9) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v87 = v9;
  ScreenController::bindString((int)v1, &v90, (int)&v88, (int)&v86);
  if ( (_DWORD)v87 )
    ((void (*)(void))v87)();
  if ( (_DWORD)v89 )
    ((void (*)(void))v89)();
  v85 = -128416307;
  v10 = operator new(4u);
  LODWORD(v11) = sub_1149C70;
  *v10 = v1;
  HIDWORD(v11) = sub_1149C3C;
  v83 = v10;
  v84 = v11;
  v81 = operator new(1u);
  LODWORD(v12) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v12) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v82 = v12;
  ScreenController::bindString((int)v1, &v85, (int)&v83, (int)&v81);
  if ( (_DWORD)v82 )
    ((void (*)(void))v82)();
  if ( (_DWORD)v84 )
    ((void (*)(void))v84)();
  v80 = -938121547;
  v13 = operator new(4u);
  LODWORD(v14) = sub_1149CD4;
  *v13 = v1;
  HIDWORD(v14) = sub_1149CA6;
  v78 = v13;
  v79 = v14;
  v76 = operator new(1u);
  LODWORD(v15) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v15) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v77 = v15;
  ScreenController::bindBool((int)v1, &v80, (int)&v78, (int)&v76);
  if ( (_DWORD)v77 )
    ((void (*)(void))v77)();
  if ( (_DWORD)v79 )
    ((void (*)(void))v79)();
  v75 = -1462161691;
  v16 = operator new(4u);
  LODWORD(v17) = sub_1149D16;
  *v16 = v1;
  HIDWORD(v17) = sub_1149D0A;
  v73 = v16;
  v74 = v17;
  v71 = operator new(1u);
  LODWORD(v18) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v18) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v72 = v18;
  ScreenController::bindBool((int)v1, &v75, (int)&v73, (int)&v71);
  if ( (_DWORD)v72 )
    ((void (*)(void))v72)();
  if ( (_DWORD)v74 )
    ((void (*)(void))v74)();
  v70 = -923034284;
  v19 = operator new(4u);
  LODWORD(v20) = sub_1149D6C;
  *v19 = v1;
  HIDWORD(v20) = sub_1149D4C;
  v68 = v19;
  v69 = v20;
  v66 = operator new(1u);
  LODWORD(v21) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v21) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v67 = v21;
  ScreenController::bindBool((int)v1, &v70, (int)&v68, (int)&v66);
  if ( (_DWORD)v67 )
    ((void (*)(void))v67)();
  if ( (_DWORD)v69 )
    ((void (*)(void))v69)();
  v65 = -1720731923;
  v22 = operator new(4u);
  LODWORD(v23) = sub_1149DF8;
  *v22 = v1;
  HIDWORD(v23) = sub_1149DA4;
  v63 = v22;
  v64 = v23;
  v61 = operator new(1u);
  LODWORD(v24) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v24) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v62 = v24;
  ScreenController::bindString((int)v1, &v65, (int)&v63, (int)&v61);
  if ( (_DWORD)v62 )
    ((void (*)(void))v62)();
  if ( (_DWORD)v64 )
    ((void (*)(void))v64)();
  v60 = 262016312;
  v59 = 2145380485;
  v25 = operator new(4u);
  LODWORD(v26) = sub_1149E3A;
  *v25 = v1;
  HIDWORD(v26) = sub_1149E2E;
  v57 = v25;
  v58 = v26;
  v55 = operator new(1u);
  LODWORD(v27) = ZNSt14_Function_base13_Base_managerIZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v27) = ZNSt17_Function_handlerIFbiEZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v56 = v27;
  ScreenController::bindIntForCollection((int)v1, &v60, &v59, (int)&v57, (int)&v55);
  if ( (_DWORD)v56 )
    ((void (*)(void))v56)();
  if ( (_DWORD)v58 )
    ((void (*)(void))v58)();
  v54 = 262016312;
  v53 = 2137668085;
  v28 = operator new(4u);
  LODWORD(v29) = sub_1149E80;
  *v28 = v1;
  HIDWORD(v29) = sub_1149E70;
  v51 = v28;
  v52 = v29;
  v49 = operator new(1u);
  LODWORD(v30) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v30) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v50 = v30;
  ScreenController::bindStringForCollection((int)v1, &v54, &v53, (int)&v51, (int)&v49);
  if ( (_DWORD)v50 )
    ((void (*)(void))v50)();
  if ( (_DWORD)v52 )
    ((void (*)(void))v52)();
  v48 = 262016312;
  StringHash::StringHash<char [25]>(&v47, (int)"#auto_complete_dimension");
  v31 = operator new(4u);
  LODWORD(v32) = sub_1149ED8;
  *v31 = v1;
  HIDWORD(v32) = sub_1149EB6;
  v45 = v31;
  v46 = v32;
  v43 = operator new(1u);
  LODWORD(v33) = ZNSt14_Function_base13_Base_managerIZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v33) = ZNSt17_Function_handlerIFbiEZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v44 = v33;
  ScreenController::bindIntForCollection((int)v1, &v48, &v47, (int)&v45, (int)&v43);
  if ( (_DWORD)v44 )
    ((void (*)(void))v44)();
  if ( (_DWORD)v46 )
    ((void (*)(void))v46)();
  v42 = 74232569;
  v34 = operator new(4u);
  LODWORD(v35) = sub_1149F1A;
  *v34 = v1;
  HIDWORD(v35) = sub_1149F0E;
  v40 = v34;
  v41 = v35;
  v38 = operator new(1u);
  LODWORD(v36) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v36) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v39 = v36;
  ScreenController::bindBool((int)v1, &v42, (int)&v40, (int)&v38);
  if ( (_DWORD)v39 )
    ((void (*)(void))v39)();
  if ( (_DWORD)v41 )
    ((void (*)(void))v41)();
  return ChatScreenController::_registerBindingsHostOptions(v1);
}


ChatScreenController *__fastcall ChatScreenController::~ChatScreenController(ChatScreenController *this)
{
  ChatScreenController *v1; // r10@1
  void (*v2)(void); // r3@1
  void (*v3)(void); // r3@3
  void (*v4)(void); // r3@5
  void (*v5)(void); // r3@7
  int v6; // r1@9
  void *v7; // r0@9
  int v8; // r1@10
  void *v9; // r0@10
  int v10; // r1@11
  void *v11; // r0@11
  void *v12; // r5@12
  void *v13; // r7@12
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  int *v16; // r0@22
  int v17; // r1@27
  void *v18; // r0@27
  void (*v19)(void); // r3@28
  void (*v20)(void); // r3@30
  unsigned int *v22; // r2@33
  signed int v23; // r1@35
  unsigned int *v24; // r2@37
  signed int v25; // r1@39
  unsigned int *v26; // r2@41
  signed int v27; // r1@43
  unsigned int *v28; // r2@45
  signed int v29; // r1@47

  v1 = this;
  *(_DWORD *)this = &off_26E1208;
  v2 = (void (*)(void))*((_DWORD *)this + 154);
  if ( v2 )
    v2();
  v3 = (void (*)(void))*((_DWORD *)v1 + 150);
  if ( v3 )
    v3();
  v4 = (void (*)(void))*((_DWORD *)v1 + 146);
  if ( v4 )
    v4();
  v5 = (void (*)(void))*((_DWORD *)v1 + 142);
  if ( v5 )
    v5();
  v6 = *((_DWORD *)v1 + 137);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v6 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  v8 = *((_DWORD *)v1 + 136);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v8 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = *((_DWORD *)v1 + 135);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v10 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v13 = (void *)(*(_QWORD *)((char *)v1 + 524) >> 32);
  v12 = (void *)*(_QWORD *)((char *)v1 + 524);
  if ( v12 != v13 )
    do
      v16 = (int *)(*(_DWORD *)v12 - 12);
      if ( v16 != &dword_28898C0 )
      {
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
          j_j_j_j_j__ZdlPv_9_1(v16);
      }
      v12 = (char *)v12 + 4;
    while ( v12 != v13 );
    v12 = (void *)*((_DWORD *)v1 + 131);
  if ( v12 )
    operator delete(v12);
  IntellisenseHandler::~IntellisenseHandler((ChatScreenController *)((char *)v1 + 480));
  v17 = *((_DWORD *)v1 + 116);
  v18 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v17 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = (void (*)(void))*((_DWORD *)v1 + 114);
  if ( v19 )
    v19();
  v20 = (void (*)(void))*((_DWORD *)v1 + 110);
  if ( v20 )
    v20();
  ClientInstanceScreenController::~ClientInstanceScreenController(v1);
  return v1;
}


UIPropertyBag *__fastcall ChatScreenController::_handleChatMessage(int a1, const void **a2)
{
  int v2; // r4@1
  const void **v3; // r5@1
  int v4; // r0@1
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  int v9; // [sp+4h] [bp-44h]@1
  char v10; // [sp+8h] [bp-40h]@1

  v2 = a1;
  v3 = a2;
  v4 = UIPropertyBag::UIPropertyBag((int)&v10);
  UIPropertyBag::set<char [8]>(v4, 4, "name", "message");
  UIPropertyBag::set<std::string>((int)&v10, 5, "#text", v3);
  sub_119C884((void **)&v9, "messages_factory");
  if ( !*(_DWORD *)(v2 + 12) )
    sub_119C8E4();
  (*(void (__fastcall **)(int, int *, char *))(v2 + 16))(v2 + 4, &v9, &v10);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
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
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  return UIPropertyBag::~UIPropertyBag((UIPropertyBag *)&v10);
}


int __fastcall ChatScreenController::_showKeyboard(ChatScreenController *this)
{
  ChatScreenController *v1; // r4@1
  int result; // r0@1

  v1 = this;
  result = MinecraftScreenModel::isKeyboardActive(*((MinecraftScreenModel **)this + 106));
  if ( !result )
  {
    if ( !*((_DWORD *)v1 + 110) )
      sub_119C8E4();
    result = (*((int (__fastcall **)(_DWORD))v1 + 111))((char *)v1 + 432);
  }
  return result;
}


    if ( ChatScreenController::_hostOptionNavigation((ChatScreenController *)v1) == 1 )
{
      v7 = (MinecraftScreenModel **)(v1 + 424);
    }
    else
    {
      if ( !*(_BYTE *)(v1 + 477) || MinecraftScreenModel::isInputModeMouse(*v7) == 1 )
        MinecraftScreenModel::leaveScreen(*v7);
    MinecraftScreenModel::resetInput(*v7);
    if ( !*(_DWORD *)(v1 + 456) )
      sub_119C8E4();
    (*(void (__fastcall **)(int))(v1 + 460))(v1 + 448);
  }
  return 1;
}


const void **__fastcall ChatScreenController::_teleportWhoHelper(ChatScreenController *this)
{
  ChatScreenController *v1; // r4@1
  _BYTE *v2; // r2@1
  unsigned int v3; // r0@2

  v1 = this;
  v2 = *(_BYTE **)(*((_DWORD *)this + 135) - 12);
  if ( v2
    || (v3 = *((_DWORD *)this + 134), v3 < 3)
    || (signed int)((*(_QWORD *)((char *)v1 + 524) >> 32) - *(_QWORD *)((char *)v1 + 524)) >> 2 >= v3 )
  {
    sub_119CA68((const void **)v1 + 135, 0, v2, 0);
    sub_119CA68((const void **)v1 + 136, 0, *(_BYTE **)(*((_DWORD *)v1 + 136) - 12), 0);
    sub_119CAD8((void **)v1 + 116, "/tp ", (_BYTE *)4);
    ChatScreenController::_beginNewCommand(v1);
  }
  *((_DWORD *)v1 + 130) = 4;
  return sub_119CBA8((void **)v1 + 137, "players_collection", (_BYTE *)0x12);
}


const void **__fastcall ChatScreenController::_getBottomButtonFocusOverrideDown(int a1, void **a2)
{
  const void **result; // r0@1

  result = *(const void ***)(a1 + 520);
  if ( result )
    result = sub_119CBA8(a2, "host_option_0_focus_id", (_BYTE *)0x16);
  return result;
}


int __fastcall ChatScreenController::_registerSubControllers(ChatScreenController *this)
{
  ChatScreenController *v1; // r4@1
  int v2; // r4@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r5@8
  unsigned int v6; // r0@10
  int result; // r0@15
  int v8; // [sp+4h] [bp-1Ch]@1
  char v9; // [sp+8h] [bp-18h]@1
  int v10; // [sp+Ch] [bp-14h]@1

  v1 = this;
  std::make_unique<UserDataScreenController,std::shared_ptr<ClientInstanceScreenModel> &>(&v8, (int)this + 424);
  std::__shared_ptr<ScreenController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<UserDataScreenController,std::default_delete<std::default_delete>>(
    (int)&v9,
    &v8);
  ScreenController::_registerSubController((int)v1, (int)&v9);
  v2 = v10;
  if ( v10 )
  {
    v3 = (unsigned int *)(v10 + 4);
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
  result = v8;
  if ( v8 )
    result = (*(int (**)(void))(*(_DWORD *)v8 + 4))();
  return result;
}


void __fastcall ChatScreenController::_registerEventHandlersHostOptions(ChatScreenController *this)
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
  unsigned int *v26; // r2@20
  signed int v27; // r1@22
  unsigned int *v28; // r2@24
  signed int v29; // r1@26
  unsigned int *v30; // r2@28
  signed int v31; // r1@30
  unsigned int *v32; // r2@32
  signed int v33; // r1@34
  unsigned int *v34; // r2@36
  signed int v35; // r1@38
  unsigned int *v36; // r2@40
  signed int v37; // r1@42
  _DWORD *v38; // [sp+4h] [bp-A4h]@16
  __int64 v39; // [sp+Ch] [bp-9Ch]@16
  int v40; // [sp+18h] [bp-90h]@16
  _DWORD *v41; // [sp+1Ch] [bp-8Ch]@13
  __int64 v42; // [sp+24h] [bp-84h]@13
  int v43; // [sp+30h] [bp-78h]@13
  _DWORD *v44; // [sp+34h] [bp-74h]@10
  __int64 v45; // [sp+3Ch] [bp-6Ch]@10
  int v46; // [sp+48h] [bp-60h]@10
  _DWORD *v47; // [sp+4Ch] [bp-5Ch]@7
  __int64 v48; // [sp+54h] [bp-54h]@7
  int v49; // [sp+60h] [bp-48h]@7
  _DWORD *v50; // [sp+64h] [bp-44h]@4
  __int64 v51; // [sp+6Ch] [bp-3Ch]@4
  int v52; // [sp+78h] [bp-30h]@4
  _DWORD *v53; // [sp+7Ch] [bp-2Ch]@1
  __int64 v54; // [sp+84h] [bp-24h]@1
  int v55; // [sp+90h] [bp-18h]@1

  v1 = this;
  sub_119C884((void **)&v55, "button.host_toggle");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v55);
  v3 = operator new(4u);
  LODWORD(v4) = sub_114A4B8;
  *v3 = v1;
  HIDWORD(v4) = sub_114A3F0;
  v53 = v3;
  v54 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v53);
  if ( (_DWORD)v54 )
    ((void (*)(void))v54)();
  v5 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
  {
    v26 = (unsigned int *)(v55 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
    }
    else
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  sub_119C884((void **)&v52, "button.host_main");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v52);
  v7 = operator new(4u);
  LODWORD(v8) = sub_114A5B8;
  *v7 = v1;
  HIDWORD(v8) = sub_114A4F0;
  v50 = v7;
  v51 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v50);
  if ( (_DWORD)v51 )
    ((void (*)(void))v51)();
  v9 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v52 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v49, "navigation_tab");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v49);
  v11 = operator new(4u);
  LODWORD(v12) = sub_114A62C;
  *v11 = v1;
  HIDWORD(v12) = sub_114A5EE;
  v47 = v11;
  v48 = v12;
  ScreenController::registerToggleChangeEventHandler((int)v1, v10, (int)&v47);
  if ( (_DWORD)v48 )
    ((void (*)(void))v48)();
  v13 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v49 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v46, "button.teleport_clear");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v46);
  v15 = operator new(4u);
  LODWORD(v16) = sub_114A6C4;
  *v15 = v1;
  HIDWORD(v16) = sub_114A664;
  v44 = v15;
  v45 = v16;
  ScreenController::registerButtonClickHandler((int)v1, v14, (int)&v44);
  if ( (_DWORD)v45 )
    ((void (*)(void))v45)();
  v17 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v46 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  sub_119C884((void **)&v43, "button.menu_navigation");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v43);
  v19 = operator new(4u);
  LODWORD(v20) = sub_114ACF0;
  *v19 = v1;
  HIDWORD(v20) = sub_114A6FC;
  v41 = v19;
  v42 = v20;
  ScreenController::registerButtonClickHandler((int)v1, v18, (int)&v41);
  if ( (_DWORD)v42 )
    ((void (*)(void))v42)();
  v21 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v43 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  sub_119C884((void **)&v40, "button.sub_command");
  v22 = MinecraftScreenController::_getNameId(v1, (int **)&v40);
  v23 = operator new(4u);
  LODWORD(v24) = sub_114B298;
  *v23 = v1;
  HIDWORD(v24) = sub_114AD28;
  v38 = v23;
  v39 = v24;
  ScreenController::registerButtonClickHandler((int)v1, v22, (int)&v38);
  if ( (_DWORD)v39 )
    ((void (*)(void))v39)();
  v25 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v40 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
}


unsigned __int64 *__fastcall ChatScreenController::_registerBindingsHostOptions(ChatScreenController *this)
{
  ChatScreenController *v1; // r11@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r0@5
  _DWORD *v4; // r0@9
  _DWORD *v5; // r0@13
  _DWORD *v6; // r0@17
  _DWORD *v7; // r0@21
  _DWORD *v8; // r0@25
  _DWORD *v9; // r0@29
  _DWORD *v10; // r0@33
  _DWORD *v11; // r0@37
  char v12; // r0@41
  char *v13; // r0@43
  void *v14; // r0@43
  void *v15; // r0@44
  __int64 v16; // r1@46
  __int64 v17; // r1@50
  __int64 v18; // r1@54
  void **v19; // r9@58
  unsigned int *v20; // r2@59
  signed int v21; // r1@61
  unsigned int *v22; // r2@63
  signed int v23; // r1@65
  unsigned int *v24; // r2@67
  signed int v25; // r1@69
  void **v26; // r6@83
  int v27; // r1@83
  void *v28; // r0@83
  int v29; // r1@84
  void *v30; // r0@84
  char *v31; // r0@85
  void *v32; // r0@87
  void *v33; // r0@88
  void *v34; // r0@89
  void *v35; // r0@90
  void *v36; // r0@91
  void *v37; // r0@92
  void *v38; // r0@93
  void *v39; // r0@94
  void *v40; // r0@95
  char v41; // r0@96
  char *v42; // r0@98
  void *v43; // r0@98
  void *v44; // r0@99
  void *v45; // r0@100
  void *v46; // r0@101
  void *v47; // r0@103
  __int64 v48; // r1@103
  __int64 v49; // r1@103
  void *v50; // r0@107
  __int64 v51; // r1@107
  __int64 v52; // r1@107
  void *v53; // r0@111
  __int64 v54; // r1@111
  __int64 v55; // r1@111
  void *v56; // r0@115
  __int64 v57; // r1@115
  __int64 v58; // r1@115
  _DWORD *v59; // r0@119
  __int64 v60; // r1@119
  _DWORD *v61; // r0@121
  __int64 v62; // r1@121
  __int64 v63; // r1@121
  _DWORD *v64; // r0@125
  __int64 v65; // r1@125
  __int64 v66; // r1@125
  _DWORD *v67; // r0@129
  __int64 v68; // r1@129
  __int64 v69; // r1@129
  __int64 v70; // kr00_8@133
  _DWORD *v71; // r0@133
  int v72; // r6@133
  __int64 v73; // r1@133
  __int64 v74; // r1@133
  _DWORD *v75; // r0@137
  __int64 v76; // r1@137
  __int64 v77; // r1@137
  _DWORD *v78; // r0@141
  __int64 v79; // r1@141
  __int64 v80; // r1@141
  void *v81; // r0@145
  __int64 v82; // r1@145
  __int64 v83; // r1@145
  void *v84; // r0@149
  __int64 v85; // r1@149
  __int64 v86; // r1@149
  void *v87; // r0@153
  __int64 v88; // r1@153
  __int64 v89; // r1@153
  void *v90; // r0@157
  __int64 v91; // r1@157
  __int64 v92; // r1@157
  void *v93; // r0@161
  __int64 v94; // r1@161
  __int64 v95; // r1@161
  unsigned int *v97; // r2@166
  signed int v98; // r1@168
  unsigned int *v99; // r2@170
  signed int v100; // r1@172
  unsigned int *v101; // r2@174
  signed int v102; // r1@176
  unsigned int *v103; // r2@178
  signed int v104; // r1@180
  unsigned int *v105; // r2@182
  signed int v106; // r1@184
  unsigned int *v107; // r2@186
  signed int v108; // r1@188
  unsigned int *v109; // r2@190
  signed int v110; // r1@192
  unsigned int *v111; // r2@194
  signed int v112; // r1@196
  unsigned int *v113; // r2@198
  signed int v114; // r1@200
  unsigned int *v115; // r2@238
  signed int v116; // r1@240
  unsigned int *v117; // r2@242
  signed int v118; // r1@244
  unsigned int *v119; // r2@246
  signed int v120; // r1@248
  unsigned int *v121; // r2@250
  signed int v122; // r1@252
  unsigned int *v123; // r2@254
  signed int v124; // r1@256
  unsigned int *v125; // r2@258
  signed int v126; // r1@260
  void *v127; // [sp+8h] [bp-5A8h]@161
  __int64 v128; // [sp+10h] [bp-5A0h]@161
  void *v129; // [sp+18h] [bp-598h]@161
  __int64 v130; // [sp+20h] [bp-590h]@161
  int v131; // [sp+28h] [bp-588h]@161
  int v132; // [sp+2Ch] [bp-584h]@161
  void *v133; // [sp+30h] [bp-580h]@157
  __int64 v134; // [sp+38h] [bp-578h]@157
  void *v135; // [sp+40h] [bp-570h]@157
  __int64 v136; // [sp+48h] [bp-568h]@157
  int v137; // [sp+50h] [bp-560h]@157
  int v138; // [sp+54h] [bp-55Ch]@157
  void *v139; // [sp+58h] [bp-558h]@153
  __int64 v140; // [sp+60h] [bp-550h]@153
  void *v141; // [sp+68h] [bp-548h]@153
  __int64 v142; // [sp+70h] [bp-540h]@153
  int v143; // [sp+78h] [bp-538h]@153
  int v144; // [sp+7Ch] [bp-534h]@153
  void *v145; // [sp+80h] [bp-530h]@149
  __int64 v146; // [sp+88h] [bp-528h]@149
  void *v147; // [sp+90h] [bp-520h]@149
  __int64 v148; // [sp+98h] [bp-518h]@149
  int v149; // [sp+A0h] [bp-510h]@149
  int v150; // [sp+A4h] [bp-50Ch]@149
  void *v151; // [sp+A8h] [bp-508h]@145
  __int64 v152; // [sp+B0h] [bp-500h]@145
  void *v153; // [sp+B8h] [bp-4F8h]@145
  __int64 v154; // [sp+C0h] [bp-4F0h]@145
  int v155; // [sp+C8h] [bp-4E8h]@145
  int v156; // [sp+CCh] [bp-4E4h]@145
  void *v157; // [sp+D0h] [bp-4E0h]@141
  __int64 v158; // [sp+D8h] [bp-4D8h]@141
  _DWORD *v159; // [sp+E0h] [bp-4D0h]@141
  __int64 v160; // [sp+E8h] [bp-4C8h]@141
  int v161; // [sp+F0h] [bp-4C0h]@141
  void *v162; // [sp+F4h] [bp-4BCh]@137
  __int64 v163; // [sp+FCh] [bp-4B4h]@137
  _DWORD *v164; // [sp+104h] [bp-4ACh]@137
  __int64 v165; // [sp+10Ch] [bp-4A4h]@137
  int v166; // [sp+114h] [bp-49Ch]@137
  void *v167; // [sp+118h] [bp-498h]@133
  __int64 v168; // [sp+120h] [bp-490h]@133
  _DWORD *v169; // [sp+128h] [bp-488h]@133
  __int64 v170; // [sp+130h] [bp-480h]@133
  int v171; // [sp+138h] [bp-478h]@133
  void *v172; // [sp+13Ch] [bp-474h]@129
  __int64 v173; // [sp+144h] [bp-46Ch]@129
  _DWORD *v174; // [sp+14Ch] [bp-464h]@129
  __int64 v175; // [sp+154h] [bp-45Ch]@129
  int v176; // [sp+15Ch] [bp-454h]@129
  void *v177; // [sp+160h] [bp-450h]@125
  __int64 v178; // [sp+168h] [bp-448h]@125
  _DWORD *v179; // [sp+170h] [bp-440h]@125
  __int64 v180; // [sp+178h] [bp-438h]@125
  int v181; // [sp+180h] [bp-430h]@125
  void *v182; // [sp+184h] [bp-42Ch]@121
  __int64 v183; // [sp+18Ch] [bp-424h]@121
  _DWORD *v184; // [sp+194h] [bp-41Ch]@121
  __int64 v185; // [sp+19Ch] [bp-414h]@121
  int v186; // [sp+1A4h] [bp-40Ch]@121
  _DWORD *v187; // [sp+1A8h] [bp-408h]@119
  __int64 v188; // [sp+1B0h] [bp-400h]@119
  int v189; // [sp+1B8h] [bp-3F8h]@119
  void *v190; // [sp+1BCh] [bp-3F4h]@115
  __int64 v191; // [sp+1C4h] [bp-3ECh]@115
  void *v192; // [sp+1CCh] [bp-3E4h]@115
  __int64 v193; // [sp+1D4h] [bp-3DCh]@115
  int v194; // [sp+1DCh] [bp-3D4h]@115
  int v195; // [sp+1E0h] [bp-3D0h]@115
  void *v196; // [sp+1E4h] [bp-3CCh]@111
  __int64 v197; // [sp+1ECh] [bp-3C4h]@111
  void *v198; // [sp+1F4h] [bp-3BCh]@111
  __int64 v199; // [sp+1FCh] [bp-3B4h]@111
  int v200; // [sp+204h] [bp-3ACh]@111
  int v201; // [sp+208h] [bp-3A8h]@111
  void *v202; // [sp+20Ch] [bp-3A4h]@107
  __int64 v203; // [sp+214h] [bp-39Ch]@107
  void *v204; // [sp+21Ch] [bp-394h]@107
  __int64 v205; // [sp+224h] [bp-38Ch]@107
  int v206; // [sp+22Ch] [bp-384h]@107
  int v207; // [sp+230h] [bp-380h]@107
  void *v208; // [sp+234h] [bp-37Ch]@103
  __int64 v209; // [sp+23Ch] [bp-374h]@103
  void *v210; // [sp+244h] [bp-36Ch]@103
  __int64 v211; // [sp+24Ch] [bp-364h]@103
  int v212; // [sp+254h] [bp-35Ch]@103
  int v213; // [sp+258h] [bp-358h]@98
  int v214; // [sp+25Ch] [bp-354h]@98
  int v215; // [sp+260h] [bp-350h]@98
  int v216; // [sp+264h] [bp-34Ch]@98
  int v217; // [sp+268h] [bp-348h]@98
  int v218; // [sp+26Ch] [bp-344h]@98
  int v219; // [sp+270h] [bp-340h]@98
  int v220; // [sp+274h] [bp-33Ch]@98
  int v221; // [sp+278h] [bp-338h]@96
  int v222; // [sp+27Ch] [bp-334h]@96
  int v223; // [sp+2A4h] [bp-30Ch]@87
  int v224; // [sp+2A8h] [bp-308h]@87
  int v225; // [sp+2ACh] [bp-304h]@87
  int v226; // [sp+2B0h] [bp-300h]@87
  int v227; // [sp+2B4h] [bp-2FCh]@87
  int v228; // [sp+2B8h] [bp-2F8h]@87
  int v229; // [sp+2BCh] [bp-2F4h]@87
  int v230; // [sp+2C0h] [bp-2F0h]@87
  int v231; // [sp+2C4h] [bp-2ECh]@87
  int v232; // [sp+2C8h] [bp-2E8h]@87
  int v233; // [sp+2CCh] [bp-2E4h]@87
  int v234; // [sp+2D0h] [bp-2E0h]@87
  int v235; // [sp+2D4h] [bp-2DCh]@87
  int v236; // [sp+2D8h] [bp-2D8h]@87
  void *v237[18]; // [sp+324h] [bp-28Ch]@58
  char *v238[2]; // [sp+36Ch] [bp-244h]@58
  int v239; // [sp+374h] [bp-23Ch]@58
  void *v240; // [sp+378h] [bp-238h]@54
  __int64 v241; // [sp+380h] [bp-230h]@54
  void *v242; // [sp+388h] [bp-228h]@54
  void (*v243)(void); // [sp+390h] [bp-220h]@54
  int *(__fastcall *v244)(int *, int, int); // [sp+394h] [bp-21Ch]@54
  int v245; // [sp+398h] [bp-218h]@54
  int v246; // [sp+39Ch] [bp-214h]@54
  void *v247; // [sp+3A0h] [bp-210h]@50
  __int64 v248; // [sp+3A8h] [bp-208h]@50
  void *v249; // [sp+3B0h] [bp-200h]@50
  void (*v250)(void); // [sp+3B8h] [bp-1F8h]@50
  int (__fastcall *v251)(int, int); // [sp+3BCh] [bp-1F4h]@50
  int v252; // [sp+3C0h] [bp-1F0h]@50
  int v253; // [sp+3C4h] [bp-1ECh]@50
  void *v254; // [sp+3C8h] [bp-1E8h]@46
  __int64 v255; // [sp+3D0h] [bp-1E0h]@46
  void *v256; // [sp+3D8h] [bp-1D8h]@46
  void (*v257)(void); // [sp+3E0h] [bp-1D0h]@46
  int (__fastcall *v258)(int); // [sp+3E4h] [bp-1CCh]@46
  int v259; // [sp+3E8h] [bp-1C8h]@46
  int v260; // [sp+3ECh] [bp-1C4h]@43
  int v261; // [sp+3F0h] [bp-1C0h]@43
  int v262; // [sp+3F4h] [bp-1BCh]@43
  int v263; // [sp+3F8h] [bp-1B8h]@43
  void *v264; // [sp+3FCh] [bp-1B4h]@37
  void (*v265)(void); // [sp+404h] [bp-1ACh]@37
  signed int (*v266)(); // [sp+408h] [bp-1A8h]@37
  _DWORD *v267; // [sp+40Ch] [bp-1A4h]@37
  void (*v268)(void); // [sp+414h] [bp-19Ch]@37
  int *(__fastcall *v269)(int *, int **, int); // [sp+418h] [bp-198h]@37
  int v270; // [sp+41Ch] [bp-194h]@37
  int v271; // [sp+420h] [bp-190h]@37
  void *v272; // [sp+424h] [bp-18Ch]@33
  void (*v273)(void); // [sp+42Ch] [bp-184h]@33
  signed int (*v274)(); // [sp+430h] [bp-180h]@33
  _DWORD *v275; // [sp+434h] [bp-17Ch]@33
  void (*v276)(void); // [sp+43Ch] [bp-174h]@33
  int (__fastcall *v277)(int, int); // [sp+440h] [bp-170h]@33
  int v278; // [sp+444h] [bp-16Ch]@33
  int v279; // [sp+448h] [bp-168h]@33
  void *v280; // [sp+44Ch] [bp-164h]@29
  void (*v281)(void); // [sp+454h] [bp-15Ch]@29
  signed int (*v282)(); // [sp+458h] [bp-158h]@29
  _DWORD *v283; // [sp+45Ch] [bp-154h]@29
  void (*v284)(void); // [sp+464h] [bp-14Ch]@29
  signed int (__fastcall *v285)(int **, int); // [sp+468h] [bp-148h]@29
  int v286; // [sp+46Ch] [bp-144h]@29
  int v287; // [sp+470h] [bp-140h]@29
  void *v288; // [sp+474h] [bp-13Ch]@25
  void (*v289)(void); // [sp+47Ch] [bp-134h]@25
  signed int (*v290)(); // [sp+480h] [bp-130h]@25
  _DWORD *v291; // [sp+484h] [bp-12Ch]@25
  void (*v292)(void); // [sp+48Ch] [bp-124h]@25
  signed int (__fastcall *v293)(int); // [sp+490h] [bp-120h]@25
  int v294; // [sp+494h] [bp-11Ch]@25
  void *v295; // [sp+498h] [bp-118h]@21
  void (*v296)(void); // [sp+4A0h] [bp-110h]@21
  signed int (*v297)(); // [sp+4A4h] [bp-10Ch]@21
  _DWORD *v298; // [sp+4A8h] [bp-108h]@21
  void (*v299)(void); // [sp+4B0h] [bp-100h]@21
  signed int (__fastcall *v300)(int); // [sp+4B4h] [bp-FCh]@21
  int v301; // [sp+4B8h] [bp-F8h]@21
  void *v302; // [sp+4BCh] [bp-F4h]@17
  void (*v303)(void); // [sp+4C4h] [bp-ECh]@17
  signed int (*v304)(); // [sp+4C8h] [bp-E8h]@17
  _DWORD *v305; // [sp+4CCh] [bp-E4h]@17
  void (*v306)(void); // [sp+4D4h] [bp-DCh]@17
  signed int (__fastcall *v307)(int); // [sp+4D8h] [bp-D8h]@17
  int v308; // [sp+4DCh] [bp-D4h]@17
  void *v309; // [sp+4E0h] [bp-D0h]@13
  void (*v310)(void); // [sp+4E8h] [bp-C8h]@13
  signed int (*v311)(); // [sp+4ECh] [bp-C4h]@13
  _DWORD *v312; // [sp+4F0h] [bp-C0h]@13
  void (*v313)(void); // [sp+4F8h] [bp-B8h]@13
  signed int (__fastcall *v314)(int); // [sp+4FCh] [bp-B4h]@13
  int v315; // [sp+500h] [bp-B0h]@13
  void *v316; // [sp+504h] [bp-ACh]@9
  void (*v317)(void); // [sp+50Ch] [bp-A4h]@9
  signed int (*v318)(); // [sp+510h] [bp-A0h]@9
  _DWORD *v319; // [sp+514h] [bp-9Ch]@9
  void (*v320)(void); // [sp+51Ch] [bp-94h]@9
  int (__fastcall *v321)(int); // [sp+520h] [bp-90h]@9
  int v322; // [sp+524h] [bp-8Ch]@9
  void *v323; // [sp+528h] [bp-88h]@5
  void (*v324)(void); // [sp+530h] [bp-80h]@5
  signed int (*v325)(); // [sp+534h] [bp-7Ch]@5
  _DWORD *v326; // [sp+538h] [bp-78h]@5
  void (*v327)(void); // [sp+540h] [bp-70h]@5
  int (__fastcall *v328)(int **); // [sp+544h] [bp-6Ch]@5
  int v329; // [sp+548h] [bp-68h]@5
  void *v330; // [sp+54Ch] [bp-64h]@1
  void (*v331)(void); // [sp+554h] [bp-5Ch]@1
  signed int (*v332)(); // [sp+558h] [bp-58h]@1
  _DWORD *v333; // [sp+55Ch] [bp-54h]@1
  void (*v334)(void); // [sp+564h] [bp-4Ch]@1
  int (__fastcall *v335)(int); // [sp+568h] [bp-48h]@1
  int v336; // [sp+56Ch] [bp-44h]@1

  v1 = this;
  v336 = -1694885902;
  v2 = operator new(4u);
  *v2 = v1;
  v333 = v2;
  v335 = sub_114B8F8;
  v334 = (void (*)(void))sub_114B904;
  v330 = operator new(1u);
  v332 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v331 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v336, (int)&v333, (int)&v330);
  if ( v331 )
    v331();
  if ( v334 )
    v334();
  v329 = 331180638;
  v3 = operator new(4u);
  *v3 = v1;
  v326 = v3;
  v328 = sub_114B93A;
  v327 = (void (*)(void))sub_114B986;
  v323 = operator new(1u);
  v325 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v324 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v329, (int)&v326, (int)&v323);
  if ( v324 )
    v324();
  if ( v327 )
    v327();
  v322 = -27735115;
  v4 = operator new(4u);
  *v4 = v1;
  v319 = v4;
  v321 = sub_114B9BC;
  v320 = (void (*)(void))sub_114B9CC;
  v316 = operator new(1u);
  v318 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v317 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v322, (int)&v319, (int)&v316);
  if ( v317 )
    v317();
  if ( v320 )
    v320();
  StringHash::StringHash<char [28]>(&v315, (int)"#host_teleport_main_visible");
  v5 = operator new(4u);
  *v5 = v1;
  v312 = v5;
  v314 = sub_114BA02;
  v313 = (void (*)(void))sub_114BA16;
  v309 = operator new(1u);
  v311 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v310 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v315, (int)&v312, (int)&v309);
  if ( v310 )
    v310();
  if ( v313 )
    v313();
  StringHash::StringHash<char [31]>(&v308, (int)"#host_teleport_players_visible");
  v6 = operator new(4u);
  *v6 = v1;
  v305 = v6;
  v307 = sub_114BA4C;
  v306 = (void (*)(void))sub_114BA62;
  v302 = operator new(1u);
  v304 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v303 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v308, (int)&v305, (int)&v302);
  if ( v303 )
    v303();
  if ( v306 )
    v306();
  v301 = 1809650937;
  v7 = operator new(4u);
  *v7 = v1;
  v298 = v7;
  v300 = sub_114BA98;
  v299 = (void (*)(void))sub_114BAAA;
  v295 = operator new(1u);
  v297 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v296 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v301, (int)&v298, (int)&v295);
  if ( v296 )
    v296();
  if ( v299 )
    v299();
  v294 = -691106254;
  v8 = operator new(4u);
  *v8 = v1;
  v291 = v8;
  v293 = sub_114BAE0;
  v292 = (void (*)(void))sub_114BAF2;
  v288 = operator new(1u);
  v290 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v289 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v294, (int)&v291, (int)&v288);
  if ( v289 )
    v289();
  if ( v292 )
    v292();
  StringHash::StringHash<char [25]>(&v287, (int)"host_teleport_collection");
  StringHash::StringHash<char [23]>(&v286, (int)"#host_teleport_visible");
  v9 = operator new(4u);
  *v9 = v1;
  v283 = v9;
  v285 = sub_114BB28;
  v284 = (void (*)(void))sub_114BB56;
  v280 = operator new(1u);
  v282 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v281 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBoolForCollection((int)v1, &v287, &v286, (int)&v283, (int)&v280);
  if ( v281 )
    v281();
  if ( v284 )
    v284();
  StringHash::StringHash<char [25]>(&v279, (int)"host_teleport_collection");
  v278 = -1964079490;
  v10 = operator new(4u);
  *v10 = v1;
  v275 = v10;
  v277 = sub_114BB8C;
  v276 = (void (*)(void))sub_114BBB4;
  v272 = operator new(1u);
  v274 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v273 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBoolForCollection((int)v1, &v279, &v278, (int)&v275, (int)&v272);
  if ( v273 )
    v273();
  if ( v276 )
    v276();
  StringHash::StringHash<char [25]>(&v271, (int)"host_teleport_collection");
  v270 = -647284292;
  v11 = operator new(4u);
  *v11 = v1;
  v267 = v11;
  v269 = sub_114BBEC;
  v268 = (void (*)(void))sub_114BC1C;
  v264 = operator new(1u);
  v266 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v265 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v271, &v270, (int)&v267, (int)&v264);
  if ( v265 )
    v265();
  if ( v268 )
    v268();
  v12 = byte_27DA618;
  __dmb();
  if ( !(v12 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27DA618) )
  {
    v260 = 4;
    sub_119C884((void **)&v261, "hostOption.teleport.who");
    v262 = 5;
    sub_119C884((void **)&v263, "hostOption.teleport.where");
    dword_27DA620 = 0;
    dword_27DA624 = 0;
    dword_27DA628 = 0;
    v13 = (char *)operator new(0x10u);
    dword_27DA620 = (int)v13;
    dword_27DA628 = (int)(v13 + 16);
    dword_27DA624 = std::__uninitialized_copy<false>::__uninit_copy<std::pair<HostOptionStates,std::string> const*,std::pair<HostOptionStates,std::string>*>(
                      &v260,
                      (int *)&v264,
                      (int)v13);
    v14 = (void *)(v263 - 12);
    if ( (int *)(v263 - 12) != &dword_28898C0 )
    {
      v115 = (unsigned int *)(v263 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v116 = __ldrex(v115);
        while ( __strex(v116 - 1, v115) );
      }
      else
        v116 = (*v115)--;
      if ( v116 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
    }
    v15 = (void *)(v261 - 12);
    if ( (int *)(v261 - 12) != &dword_28898C0 )
      v117 = (unsigned int *)(v261 - 4);
          v118 = __ldrex(v117);
        while ( __strex(v118 - 1, v117) );
        v118 = (*v117)--;
      if ( v118 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    _cxa_atexit(std::vector<std::pair<HostOptionStates,std::string>,std::allocator<std::pair<HostOptionStates,std::string>>>::~vector);
    j___cxa_guard_release((unsigned int *)&byte_27DA618);
  }
  StringHash::StringHash<char [30]>(&v259, (int)"#host_teleport_grid_dimension");
  v256 = operator new(1u);
  v257 = (void (*)(void))sub_114BD20;
  v258 = sub_114BD08;
  v254 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v255 = v16;
  ScreenController::bindGridSize((int)v1, &v259, (int)&v256, (int)&v254);
  if ( (_DWORD)v255 )
    ((void (*)(void))v255)();
  if ( v257 )
    v257();
  StringHash::StringHash<char [25]>(&v253, (int)"host_teleport_collection");
  v252 = -348647487;
  v249 = operator new(1u);
  v250 = (void (*)(void))sub_114BD60;
  v251 = sub_114BD50;
  v247 = operator new(1u);
  LODWORD(v17) = ZNSt14_Function_base13_Base_managerIZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v17) = ZNSt17_Function_handlerIFbiEZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v248 = v17;
  ScreenController::bindIntForCollection((int)v1, &v253, &v252, (int)&v249, (int)&v247);
  if ( (_DWORD)v248 )
    ((void (*)(void))v248)();
  if ( v250 )
    v250();
  StringHash::StringHash<char [25]>(&v246, (int)"host_teleport_collection");
  v245 = -742427320;
  v242 = operator new(1u);
  v243 = (void (*)(void))sub_114BDA8;
  v244 = sub_114BD90;
  v240 = operator new(1u);
  LODWORD(v18) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v18) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v241 = v18;
  ScreenController::bindStringForCollection((int)v1, &v246, &v245, (int)&v242, (int)&v240);
  if ( (_DWORD)v241 )
    ((void (*)(void))v241)();
  if ( v243 )
    v243();
  sub_119C884(v237, "hostOption.time.sunrise");
  sub_119C884(&v237[1], "textures/ui/time_1sunrise");
  sub_119C884(&v237[2], "sunrise");
  sub_119C884(&v237[3], "hostOption.time.day");
  sub_119C884(&v237[4], "textures/ui/time_2day");
  sub_119C884(&v237[5], "day");
  sub_119C884(&v237[6], "hostOption.time.noon");
  sub_119C884(&v237[7], "textures/ui/time_3noon");
  sub_119C884(&v237[8], "noon");
  sub_119C884(&v237[9], "hostOption.time.sunset");
  sub_119C884(&v237[10], "textures/ui/time_4sunset");
  sub_119C884(&v237[11], "sunset");
  sub_119C884(&v237[12], "hostOption.time.night");
  sub_119C884(&v237[13], "textures/ui/time_5night");
  sub_119C884(&v237[14], "night");
  sub_119C884(&v237[15], "hostOption.time.midnight");
  sub_119C884(&v237[16], "textures/ui/time_6midnight");
  sub_119C884(&v237[17], "midnight");
  v19 = (void **)v238;
  v238[0] = 0;
  v238[1] = 0;
  v239 = 0;
  std::vector<HostOptionSubCommand,std::allocator<HostOptionSubCommand>>::_M_range_initialize<HostOptionSubCommand const*>(
    v238,
    (int *)v237,
    (int *)v238);
  do
    v26 = v19;
    v19 -= 3;
    v27 = (int)*(v26 - 1);
    v28 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v27 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v28);
    v29 = (int)*(v26 - 2);
    v30 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v29 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v30);
    v31 = (char *)*v19 - 12;
    if ( (int *)v31 != &dword_28898C0 )
      v24 = (unsigned int *)((char *)*v19 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v31);
  while ( v19 != v237 );
  StringHash::StringHash<char [26]>(&v236, (int)"#host_time_grid_dimension");
  v235 = -1921643246;
  ChatScreenController::_registerBindingsSubCommand((int)v1, (unsigned __int64 *)v238, &v236, &v235);
  sub_119C884((void **)&v223, "hostOption.weather.clear");
  sub_119C884((void **)&v224, "textures/ui/weather_clear");
  sub_119C884((void **)&v225, "clear");
  sub_119C884((void **)&v226, "hostOption.weather.rain");
  sub_119C884((void **)&v227, "textures/ui/weather_rain");
  sub_119C884((void **)&v228, "rain");
  sub_119C884((void **)&v229, "hostOption.weather.thunderstorm");
  sub_119C884((void **)&v230, "textures/ui/weather_thunderstorm");
  sub_119C884((void **)&v231, "thunder");
  v232 = 0;
  v233 = 0;
  v234 = 0;
    (char **)&v232,
    &v223,
    &v232);
  v32 = (void *)(v231 - 12);
  if ( (int *)(v231 - 12) != &dword_28898C0 )
    v97 = (unsigned int *)(v231 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v98 = __ldrex(v97);
      while ( __strex(v98 - 1, v97) );
    else
      v98 = (*v97)--;
    if ( v98 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v32);
  v33 = (void *)(v230 - 12);
  if ( (int *)(v230 - 12) != &dword_28898C0 )
    v99 = (unsigned int *)(v230 - 4);
        v100 = __ldrex(v99);
      while ( __strex(v100 - 1, v99) );
      v100 = (*v99)--;
    if ( v100 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v33);
  v34 = (void *)(v229 - 12);
  if ( (int *)(v229 - 12) != &dword_28898C0 )
    v101 = (unsigned int *)(v229 - 4);
        v102 = __ldrex(v101);
      while ( __strex(v102 - 1, v101) );
      v102 = (*v101)--;
    if ( v102 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v34);
  v35 = (void *)(v228 - 12);
  if ( (int *)(v228 - 12) != &dword_28898C0 )
    v103 = (unsigned int *)(v228 - 4);
        v104 = __ldrex(v103);
      while ( __strex(v104 - 1, v103) );
      v104 = (*v103)--;
    if ( v104 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v35);
  v36 = (void *)(v227 - 12);
  if ( (int *)(v227 - 12) != &dword_28898C0 )
    v105 = (unsigned int *)(v227 - 4);
        v106 = __ldrex(v105);
      while ( __strex(v106 - 1, v105) );
      v106 = (*v105)--;
    if ( v106 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v36);
  v37 = (void *)(v226 - 12);
  if ( (int *)(v226 - 12) != &dword_28898C0 )
    v107 = (unsigned int *)(v226 - 4);
        v108 = __ldrex(v107);
      while ( __strex(v108 - 1, v107) );
      v108 = (*v107)--;
    if ( v108 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v37);
  v38 = (void *)(v225 - 12);
  if ( (int *)(v225 - 12) != &dword_28898C0 )
    v109 = (unsigned int *)(v225 - 4);
        v110 = __ldrex(v109);
      while ( __strex(v110 - 1, v109) );
      v110 = (*v109)--;
    if ( v110 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v38);
  v39 = (void *)(v224 - 12);
  if ( (int *)(v224 - 12) != &dword_28898C0 )
    v111 = (unsigned int *)(v224 - 4);
        v112 = __ldrex(v111);
      while ( __strex(v112 - 1, v111) );
      v112 = (*v111)--;
    if ( v112 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v39);
  v40 = (void *)(v223 - 12);
  if ( (int *)(v223 - 12) != &dword_28898C0 )
    v113 = (unsigned int *)(v223 - 4);
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
      v114 = (*v113)--;
    if ( v114 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v40);
  StringHash::StringHash<char [29]>(&v222, (int)"#host_weather_grid_dimension");
  StringHash::StringHash<char [24]>(&v221, (int)"host_weather_collection");
  ChatScreenController::_registerBindingsSubCommand((int)v1, (unsigned __int64 *)&v232, &v222, &v221);
  v41 = byte_27DA61C;
  if ( !(v41 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27DA61C) )
    v213 = 2;
    sub_119C884((void **)&v214, "hostOption.setWorldSpawn");
    v215 = 3;
    sub_119C884((void **)&v216, "hostOption.teleport");
    v217 = 6;
    sub_119C884((void **)&v218, "hostOption.time");
    v219 = 7;
    sub_119C884((void **)&v220, "hostOption.weather");
    dword_27DA630 = 0;
    dword_27DA634 = 0;
    dword_27DA638 = 0;
    v42 = (char *)operator new(0x20u);
    dword_27DA630 = (int)v42;
    dword_27DA638 = (int)(v42 + 32);
    dword_27DA634 = std::__uninitialized_copy<false>::__uninit_copy<std::pair<HostOptionStates,std::string> const*,std::pair<HostOptionStates,std::string>*>(
                      &v213,
                      &v221,
                      (int)v42);
    v43 = (void *)(v220 - 12);
    if ( (int *)(v220 - 12) != &dword_28898C0 )
      v119 = (unsigned int *)(v220 - 4);
          v120 = __ldrex(v119);
        while ( __strex(v120 - 1, v119) );
        v120 = (*v119)--;
      if ( v120 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v43);
    v44 = (void *)(v218 - 12);
    if ( (int *)(v218 - 12) != &dword_28898C0 )
      v121 = (unsigned int *)(v218 - 4);
          v122 = __ldrex(v121);
        while ( __strex(v122 - 1, v121) );
        v122 = (*v121)--;
      if ( v122 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v44);
    v45 = (void *)(v216 - 12);
    if ( (int *)(v216 - 12) != &dword_28898C0 )
      v123 = (unsigned int *)(v216 - 4);
          v124 = __ldrex(v123);
        while ( __strex(v124 - 1, v123) );
        v124 = (*v123)--;
      if ( v124 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v45);
    v46 = (void *)(v214 - 12);
    if ( (int *)(v214 - 12) != &dword_28898C0 )
      v125 = (unsigned int *)(v214 - 4);
          v126 = __ldrex(v125);
        while ( __strex(v126 - 1, v125) );
        v126 = (*v125)--;
      if ( v126 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v46);
    j___cxa_guard_release((unsigned int *)&byte_27DA61C);
  StringHash::StringHash<char [26]>(&v212, (int)"#host_main_grid_dimension");
  v47 = operator new(1u);
  LODWORD(v48) = sub_114C034;
  v210 = v47;
  HIDWORD(v48) = sub_114C01C;
  v211 = v48;
  v208 = operator new(1u);
  LODWORD(v49) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v49) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v209 = v49;
  ScreenController::bindGridSize((int)v1, &v212, (int)&v210, (int)&v208);
  if ( (_DWORD)v209 )
    ((void (*)(void))v209)();
  if ( (_DWORD)v211 )
    ((void (*)(void))v211)();
  v207 = -737619362;
  v206 = -348647487;
  v50 = operator new(1u);
  LODWORD(v51) = sub_114C074;
  v204 = v50;
  HIDWORD(v51) = sub_114C064;
  v205 = v51;
  v202 = operator new(1u);
  LODWORD(v52) = ZNSt14_Function_base13_Base_managerIZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v52) = ZNSt17_Function_handlerIFbiEZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v203 = v52;
  ScreenController::bindIntForCollection((int)v1, &v207, &v206, (int)&v204, (int)&v202);
  if ( (_DWORD)v203 )
    ((void (*)(void))v203)();
  if ( (_DWORD)v205 )
    ((void (*)(void))v205)();
  v201 = -737619362;
  v200 = -742427320;
  v53 = operator new(1u);
  LODWORD(v54) = sub_114C0BC;
  v198 = v53;
  HIDWORD(v54) = sub_114C0A4;
  v199 = v54;
  v196 = operator new(1u);
  LODWORD(v55) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v55) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v197 = v55;
  ScreenController::bindStringForCollection((int)v1, &v201, &v200, (int)&v198, (int)&v196);
  if ( (_DWORD)v197 )
    ((void (*)(void))v197)();
  if ( (_DWORD)v199 )
    ((void (*)(void))v199)();
  v195 = -737619362;
  v194 = -2055874494;
  v56 = operator new(1u);
  LODWORD(v57) = sub_114C104;
  v192 = v56;
  HIDWORD(v57) = sub_114C0EC;
  v193 = v57;
  v190 = operator new(1u);
  LODWORD(v58) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v58) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v191 = v58;
  ScreenController::bindBoolForCollection((int)v1, &v195, &v194, (int)&v192, (int)&v190);
  if ( (_DWORD)v191 )
    ((void (*)(void))v191)();
  if ( (_DWORD)v193 )
    ((void (*)(void))v193)();
  StringHash::StringHash<char [33]>(&v189, (int)"#navigation_tab_focus_precedence");
  v59 = operator new(4u);
  LODWORD(v60) = sub_114C1C0;
  *v59 = v1;
  HIDWORD(v60) = sub_114C134;
  v187 = v59;
  v188 = v60;
  ScreenController::bindForGlobal((int)v1, &v189, (int)&v187);
  if ( (_DWORD)v188 )
    ((void (*)(void))v188)();
  StringHash::StringHash<char [37]>(&v186, (int)"#keyboard_button_focus_override_down");
  v61 = operator new(4u);
  LODWORD(v62) = sub_114C288;
  *v61 = v1;
  HIDWORD(v62) = sub_114C1F8;
  v184 = v61;
  v185 = v62;
  v182 = operator new(1u);
  LODWORD(v63) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v63) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v183 = v63;
  ScreenController::bindString((int)v1, &v186, (int)&v184, (int)&v182);
  if ( (_DWORD)v183 )
    ((void (*)(void))v183)();
  if ( (_DWORD)v185 )
    ((void (*)(void))v185)();
  StringHash::StringHash<char [35]>(&v181, (int)"#text_edit_box_focus_override_down");
  v64 = operator new(4u);
  LODWORD(v65) = sub_114C350;
  *v64 = v1;
  HIDWORD(v65) = sub_114C2C0;
  v179 = v64;
  v180 = v65;
  v177 = operator new(1u);
  LODWORD(v66) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v66) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v178 = v66;
  ScreenController::bindString((int)v1, &v181, (int)&v179, (int)&v177);
  if ( (_DWORD)v178 )
    ((void (*)(void))v178)();
  if ( (_DWORD)v180 )
    ((void (*)(void))v180)();
  StringHash::StringHash<char [38]>(&v176, (int)"#host_main_button_focus_override_down");
  v67 = operator new(4u);
  LODWORD(v68) = sub_114C418;
  *v67 = v1;
  HIDWORD(v68) = sub_114C388;
  v174 = v67;
  v175 = v68;
  v172 = operator new(1u);
  LODWORD(v69) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v69) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v173 = v69;
  ScreenController::bindString((int)v1, &v176, (int)&v174, (int)&v172);
  if ( (_DWORD)v173 )
    ((void (*)(void))v173)();
  if ( (_DWORD)v175 )
    ((void (*)(void))v175)();
  v70 = *(_QWORD *)&dword_27DA630;
  StringHash::StringHash<char [35]>(&v171, (int)"#keyboard_button_focus_override_up");
  v71 = operator new(8u);
  v72 = ((HIDWORD(v70) - (signed int)v70) >> 3) - 1;
  LODWORD(v73) = sub_114C4D0;
  HIDWORD(v73) = sub_114C450;
  *v71 = v1;
  v71[1] = v72;
  v169 = v71;
  v170 = v73;
  v167 = operator new(1u);
  LODWORD(v74) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v74) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v168 = v74;
  ScreenController::bindString((int)v1, &v171, (int)&v169, (int)&v167);
  if ( (_DWORD)v168 )
    ((void (*)(void))v168)();
  if ( (_DWORD)v170 )
    ((void (*)(void))v170)();
  StringHash::StringHash<char [33]>(&v166, (int)"#text_edit_box_focus_override_up");
  v75 = operator new(8u);
  LODWORD(v76) = sub_114C58C;
  *v75 = v1;
  v75[1] = v72;
  HIDWORD(v76) = sub_114C50C;
  v164 = v75;
  v165 = v76;
  v162 = operator new(1u);
  LODWORD(v77) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v77) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v163 = v77;
  ScreenController::bindString((int)v1, &v166, (int)&v164, (int)&v162);
  if ( (_DWORD)v163 )
    ((void (*)(void))v163)();
  if ( (_DWORD)v165 )
    ((void (*)(void))v165)();
  StringHash::StringHash<char [36]>(&v161, (int)"#host_main_button_focus_override_up");
  v78 = operator new(8u);
  LODWORD(v79) = sub_114C648;
  *v78 = v1;
  v78[1] = v72;
  HIDWORD(v79) = sub_114C5C8;
  v159 = v78;
  v160 = v79;
  v157 = operator new(1u);
  LODWORD(v80) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v80) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v158 = v80;
  ScreenController::bindString((int)v1, &v161, (int)&v159, (int)&v157);
  if ( (_DWORD)v158 )
    ((void (*)(void))v158)();
  if ( (_DWORD)v160 )
    ((void (*)(void))v160)();
  v156 = -737619362;
  v155 = -1590917031;
  v81 = operator new(1u);
  LODWORD(v82) = sub_114C694;
  v153 = v81;
  HIDWORD(v82) = sub_114C684;
  v154 = v82;
  v151 = operator new(1u);
  LODWORD(v83) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v83) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v152 = v83;
  ScreenController::bindStringForCollection((int)v1, &v156, &v155, (int)&v153, (int)&v151);
  if ( (_DWORD)v152 )
    ((void (*)(void))v152)();
  if ( (_DWORD)v154 )
    ((void (*)(void))v154)();
  v150 = -737619362;
  StringHash::StringHash<char [33]>(&v149, (int)"#host_option_focus_override_left");
  v84 = operator new(1u);
  LODWORD(v85) = sub_114C6D4;
  v147 = v84;
  HIDWORD(v85) = sub_114C6C4;
  v148 = v85;
  v145 = operator new(1u);
  LODWORD(v86) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v86) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v146 = v86;
  ScreenController::bindStringForCollection((int)v1, &v150, &v149, (int)&v147, (int)&v145);
  if ( (_DWORD)v146 )
    ((void (*)(void))v146)();
  if ( (_DWORD)v148 )
    ((void (*)(void))v148)();
  v144 = -737619362;
  StringHash::StringHash<char [34]>(&v143, (int)"#host_option_focus_override_right");
  v87 = operator new(1u);
  LODWORD(v88) = sub_114C714;
  v141 = v87;
  HIDWORD(v88) = sub_114C704;
  v142 = v88;
  v139 = operator new(1u);
  LODWORD(v89) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v89) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v140 = v89;
  ScreenController::bindStringForCollection((int)v1, &v144, &v143, (int)&v141, (int)&v139);
  if ( (_DWORD)v140 )
    ((void (*)(void))v140)();
  if ( (_DWORD)v142 )
    ((void (*)(void))v142)();
  v138 = -737619362;
  StringHash::StringHash<char [31]>(&v137, (int)"#host_option_focus_override_up");
  v90 = operator new(1u);
  LODWORD(v91) = sub_114C7CC;
  v135 = v90;
  HIDWORD(v91) = sub_114C744;
  v136 = v91;
  v133 = operator new(1u);
  LODWORD(v92) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v92) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v134 = v92;
  ScreenController::bindStringForCollection((int)v1, &v138, &v137, (int)&v135, (int)&v133);
  if ( (_DWORD)v134 )
    ((void (*)(void))v134)();
  if ( (_DWORD)v136 )
    ((void (*)(void))v136)();
  v132 = -737619362;
  StringHash::StringHash<char [33]>(&v131, (int)"#host_option_focus_override_down");
  v93 = operator new(1u);
  LODWORD(v94) = sub_114C89C;
  v129 = v93;
  HIDWORD(v94) = sub_114C7FC;
  v130 = v94;
  v127 = operator new(1u);
  LODWORD(v95) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v95) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v128 = v95;
  ScreenController::bindStringForCollection((int)v1, &v132, &v131, (int)&v129, (int)&v127);
  if ( (_DWORD)v128 )
    ((void (*)(void))v128)();
  if ( (_DWORD)v130 )
    ((void (*)(void))v130)();
  std::vector<HostOptionSubCommand,std::allocator<HostOptionSubCommand>>::~vector((unsigned __int64 *)&v232);
  return std::vector<HostOptionSubCommand,std::allocator<HostOptionSubCommand>>::~vector((unsigned __int64 *)v238);
}


void __fastcall ChatScreenController::_registerEventHandlersHostOptions(ChatScreenController *this)
{
  ChatScreenController::_registerEventHandlersHostOptions(this);
}


void __fastcall ChatScreenController::_registerEventHandlers(ChatScreenController *this)
{
  ChatScreenController::_registerEventHandlers(this);
}


void __fastcall ChatScreenController::~ChatScreenController(ChatScreenController *this)
{
  ChatScreenController *v1; // r0@1

  v1 = ChatScreenController::~ChatScreenController(this);
  j_j_j__ZdlPv_4((void *)v1);
}
