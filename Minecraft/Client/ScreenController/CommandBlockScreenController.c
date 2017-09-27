

int __fastcall CommandBlockScreenController::CommandBlockScreenController(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  int v8; // r6@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r7@14
  unsigned int v12; // r0@16
  MinecraftScreenModel *v13; // r1@21
  int v14; // r1@21
  int v15; // r0@21
  int v17; // [sp+Ch] [bp-2Ch]@21
  int v18; // [sp+10h] [bp-28h]@21
  int v19; // [sp+14h] [bp-24h]@21
  int v20; // [sp+18h] [bp-20h]@21
  int v21; // [sp+1Ch] [bp-1Ch]@1
  int v22; // [sp+20h] [bp-18h]@1

  v3 = a1;
  v21 = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  v22 = v5;
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
  BlockScreenController::BlockScreenController(v3, (int)&v21, a3, 26);
  v8 = v22;
  if ( v22 )
    v9 = (unsigned int *)(v22 + 4);
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
  *(_DWORD *)v3 = &off_26E1420;
  *(_DWORD *)(v3 + 464) = 0;
  *(_WORD *)(v3 + 480) = 0;
  *(_DWORD *)(v3 + 472) = 0;
  *(_DWORD *)(v3 + 476) = 0;
  v13 = *(MinecraftScreenModel **)(v3 + 424);
  v17 = *(_DWORD *)v4;
  v18 = *(_DWORD *)(v4 + 4);
  v19 = *(_DWORD *)(v4 + 8);
  ClientInstanceScreenModel::createCommandBlockManager(&v20, v13, 0, (int)&v17, -1, -1);
  v14 = v20;
  v20 = 0;
  v15 = *(_DWORD *)(v3 + 472);
  *(_DWORD *)(v3 + 472) = v14;
  if ( v15 )
    (*(void (**)(void))(*(_DWORD *)v15 + 4))();
    if ( v20 )
      (*(void (**)(void))(*(_DWORD *)v20 + 4))();
  *(_BYTE *)(v3 + 476) = *(_BYTE *)(*(int (**)(void))(**(_DWORD **)(v3 + 472) + 52))();
  CommandBlockScreenController::_registerBindings((CommandBlockScreenController *)v3);
  CommandBlockScreenController::_registerEventHandlers((CommandBlockScreenController *)v3);
  CommandBlockScreenController::_registerBlockTypeDropdown((CommandBlockScreenController *)v3);
  CommandBlockScreenController::_registerConditionDropdown((CommandBlockScreenController *)v3);
  CommandBlockScreenController::_registerRedstoneDropdown((CommandBlockScreenController *)v3);
  return v3;
}


int __fastcall CommandBlockScreenController::setViewCommand(CommandBlockScreenController *this, ScreenViewCommand *a2)
{
  int v2; // r12@0
  int v3; // lr@0
  CommandBlockScreenController *v4; // r4@1
  int result; // r0@1
  ScreenViewCommand *v6; // r5@1
  void (__fastcall *v7)(int *, char *, signed int); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = this;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = (void (__fastcall *)(int *, char *, signed int))*((_DWORD *)a2 + 18);
  if ( v7 )
  {
    v7(&v11, (char *)a2 + 64, 2);
    result = *((_DWORD *)v6 + 19);
    v14 = *((_DWORD *)v6 + 19);
    v8 = *((_DWORD *)v6 + 18);
    v13 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v6 + 18);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = (int)v4 + 456;
  *(_QWORD *)&v11 = *((_QWORD *)v4 + 57);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v4 + 116);
  v10 = v13;
  *((_DWORD *)v4 + 116) = v8;
  v14 = *((_DWORD *)v4 + 117);
  *((_DWORD *)v4 + 117) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


void __fastcall CommandBlockScreenController::_registerEventHandlers(CommandBlockScreenController *this)
{
  ScreenController *v1; // r4@1
  unsigned __int64 *v2; // r5@1
  int v3; // r8@3
  void *v4; // r0@3
  unsigned __int64 *v5; // r5@4
  int v6; // r9@6
  void *v7; // r0@6
  unsigned __int64 *v8; // r5@7
  int v9; // r10@9
  void *v10; // r0@9
  unsigned __int64 *v11; // r5@10
  int v12; // r11@12
  void *v13; // r0@12
  unsigned __int64 *v14; // r6@13
  int v15; // r6@15
  void *v16; // r0@15
  unsigned __int64 *v17; // r7@16
  int v18; // r7@18
  void *v19; // r0@18
  _DWORD *v20; // r0@19
  __int64 v21; // r1@19
  _DWORD *v22; // r0@21
  __int64 v23; // r1@21
  _DWORD *v24; // r0@23
  __int64 v25; // r1@23
  _DWORD *v26; // r0@25
  __int64 v27; // r1@25
  _DWORD *v28; // r0@27
  __int64 v29; // r1@27
  _DWORD *v30; // r0@29
  __int64 v31; // r1@29
  unsigned __int64 *v32; // r5@31
  int v33; // r5@33
  _DWORD *v34; // r0@33
  __int64 v35; // r1@33
  void *v36; // r0@35
  unsigned int *v37; // r2@37
  signed int v38; // r1@39
  unsigned int *v39; // r2@41
  signed int v40; // r1@43
  unsigned int *v41; // r2@45
  signed int v42; // r1@47
  unsigned int *v43; // r2@49
  signed int v44; // r1@51
  unsigned int *v45; // r2@53
  signed int v46; // r1@55
  unsigned int *v47; // r2@57
  signed int v48; // r1@59
  unsigned int *v49; // r2@61
  signed int v50; // r1@63
  _DWORD *v51; // [sp+0h] [bp-D0h]@33
  __int64 v52; // [sp+8h] [bp-C8h]@33
  int v53; // [sp+14h] [bp-BCh]@31
  _DWORD *v54; // [sp+18h] [bp-B8h]@29
  __int64 v55; // [sp+20h] [bp-B0h]@29
  _DWORD *v56; // [sp+28h] [bp-A8h]@27
  __int64 v57; // [sp+30h] [bp-A0h]@27
  _DWORD *v58; // [sp+38h] [bp-98h]@25
  __int64 v59; // [sp+40h] [bp-90h]@25
  _DWORD *v60; // [sp+48h] [bp-88h]@23
  __int64 v61; // [sp+50h] [bp-80h]@23
  _DWORD *v62; // [sp+58h] [bp-78h]@21
  __int64 v63; // [sp+60h] [bp-70h]@21
  _DWORD *v64; // [sp+68h] [bp-68h]@19
  __int64 v65; // [sp+70h] [bp-60h]@19
  int v66; // [sp+7Ch] [bp-54h]@16
  int v67; // [sp+84h] [bp-4Ch]@13
  int v68; // [sp+8Ch] [bp-44h]@10
  int v69; // [sp+94h] [bp-3Ch]@7
  int v70; // [sp+9Ch] [bp-34h]@4
  int v71; // [sp+A4h] [bp-2Ch]@1

  v1 = this;
  sub_119C884((void **)&v71, "button.menu_exit");
  v2 = (unsigned __int64 *)ScreenController::_getNameRegistry(v1);
  if ( !NameRegistry::hasEntry(v2, (int **)&v71) )
    NameRegistry::registerName(v2, (int **)&v71);
  v3 = NameRegistry::getNameId(v2, (int **)&v71);
  v4 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
  {
    v37 = (unsigned int *)(v71 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  sub_119C884((void **)&v70, "button.menu_leave_screen");
  v5 = (unsigned __int64 *)ScreenController::_getNameRegistry(v1);
  if ( !NameRegistry::hasEntry(v5, (int **)&v70) )
    NameRegistry::registerName(v5, (int **)&v70);
  v6 = NameRegistry::getNameId(v5, (int **)&v70);
  v7 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v70 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v69, "command_block.command_text");
  v8 = (unsigned __int64 *)ScreenController::_getNameRegistry(v1);
  if ( !NameRegistry::hasEntry(v8, (int **)&v69) )
    NameRegistry::registerName(v8, (int **)&v69);
  v9 = NameRegistry::getNameId(v8, (int **)&v69);
  v10 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v69 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  sub_119C884((void **)&v68, "command_block.hover_note_textbox");
  v11 = (unsigned __int64 *)ScreenController::_getNameRegistry(v1);
  if ( !NameRegistry::hasEntry(v11, (int **)&v68) )
    NameRegistry::registerName(v11, (int **)&v68);
  v12 = NameRegistry::getNameId(v11, (int **)&v68);
  v13 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v68 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v67, "command_block.input_maximize");
  v14 = (unsigned __int64 *)ScreenController::_getNameRegistry(v1);
  if ( !NameRegistry::hasEntry(v14, (int **)&v67) )
    NameRegistry::registerName(v14, (int **)&v67);
  v15 = NameRegistry::getNameId(v14, (int **)&v67);
  v16 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v67 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  sub_119C884((void **)&v66, "command_block.input_minimize");
  v17 = (unsigned __int64 *)ScreenController::_getNameRegistry(v1);
  if ( !NameRegistry::hasEntry(v17, (int **)&v66) )
    NameRegistry::registerName(v17, (int **)&v66);
  v18 = NameRegistry::getNameId(v17, (int **)&v66);
  v19 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v66 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  v20 = operator new(4u);
  LODWORD(v21) = sub_1156E2C;
  *v20 = v1;
  HIDWORD(v21) = sub_1156D48;
  v64 = v20;
  v65 = v21;
  ScreenController::registerButtonClickHandler((int)v1, v15, (int)&v64);
  if ( (_DWORD)v65 )
    ((void (*)(void))v65)();
  v22 = operator new(4u);
  LODWORD(v23) = sub_1156E70;
  *v22 = v1;
  HIDWORD(v23) = sub_1156E62;
  v62 = v22;
  v63 = v23;
  ScreenController::registerButtonClickHandler((int)v1, v18, (int)&v62);
  if ( (_DWORD)v63 )
    ((void (*)(void))v63)();
  v24 = operator new(4u);
  LODWORD(v25) = sub_1156EB8;
  *v24 = v1;
  HIDWORD(v25) = sub_1156EA6;
  v60 = v24;
  v61 = v25;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v60);
  if ( (_DWORD)v61 )
    ((void (*)(void))v61)();
  v26 = operator new(4u);
  LODWORD(v27) = sub_1156F02;
  *v26 = v1;
  HIDWORD(v27) = sub_1156EEE;
  v58 = v26;
  v59 = v27;
  ScreenController::registerButtonClickHandler((int)v1, v3, (int)&v58);
  if ( (_DWORD)v59 )
    ((void (*)(void))v59)();
  v28 = operator new(4u);
  LODWORD(v29) = sub_115728C;
  *v28 = v1;
  HIDWORD(v29) = sub_1156F38;
  v56 = v28;
  v57 = v29;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v9, (int)&v56);
  if ( (_DWORD)v57 )
    ((void (*)(void))v57)();
  v30 = operator new(4u);
  LODWORD(v31) = sub_1157618;
  *v30 = v1;
  HIDWORD(v31) = sub_11572C4;
  v54 = v30;
  v55 = v31;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v12, (int)&v54);
  if ( (_DWORD)v55 )
    ((void (*)(void))v55)();
  sub_119C884((void **)&v53, "track_output");
  v32 = (unsigned __int64 *)ScreenController::_getNameRegistry(v1);
  if ( !NameRegistry::hasEntry(v32, (int **)&v53) )
    NameRegistry::registerName(v32, (int **)&v53);
  v33 = NameRegistry::getNameId(v32, (int **)&v53);
  v34 = operator new(4u);
  LODWORD(v35) = sub_1157678;
  *v34 = v1;
  HIDWORD(v35) = sub_115764E;
  v51 = v34;
  v52 = v35;
  ScreenController::registerToggleChangeEventHandler((int)v1, v33, (int)&v51);
  if ( (_DWORD)v52 )
    ((void (*)(void))v52)();
  v36 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v53 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v36);
}


int __fastcall CommandBlockScreenController::_getNameId(ScreenController *a1, int **a2)
{
  int **v2; // r4@1
  unsigned __int64 *v3; // r5@1

  v2 = a2;
  v3 = (unsigned __int64 *)ScreenController::_getNameRegistry(a1);
  if ( !NameRegistry::hasEntry(v3, v2) )
    NameRegistry::registerName(v3, v2);
  return j_j_j__ZN12NameRegistry9getNameIdERKSs_0(v3, v2);
}


void __fastcall CommandBlockScreenController::~CommandBlockScreenController(CommandBlockScreenController *this)
{
  void *v1; // r0@1

  v1 = (void *)CommandBlockScreenController::~CommandBlockScreenController(this);
  j_j_j__ZdlPv_4(v1);
}


signed int __fastcall CommandBlockScreenController::_onRedstoneModeChange(CommandBlockScreenController *this, bool a2)
{
  CommandBlockScreenController *v2; // r4@1
  signed int result; // r0@2

  v2 = this;
  if ( (*(int (**)(void))(**((_DWORD **)this + 118) + 36))() )
    result = 1;
  else
    result = *((_BYTE *)v2 + 481);
  *((_BYTE *)v2 + 481) = result;
  return result;
}


int __fastcall CommandBlockScreenController::_getCommandBlockModeColor(int result, int a2, int a3, int a4)
{
  signed int v4; // r1@4
  signed int v5; // r2@4
  signed int v6; // r3@4

  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 1065353216;
  if ( a3 == 2 )
  {
    if ( a4 )
    {
      v4 = 1059162423;
      v5 = 1061410570;
      v6 = 1060420714;
    }
    else
      v4 = 1047032496;
      v5 = 1055186223;
      v6 = 1051361018;
  }
  else if ( a3 == 1 )
    v4 = 1050924810;
    v5 = 1047837802;
    v6 = 1058642330;
  else
    if ( a3 )
      return result;
    v4 = 1063507722;
    v5 = 1057451147;
    v6 = 1049918177;
  *(_DWORD *)result = v4;
  *(_DWORD *)(result + 4) = v5;
  *(_DWORD *)(result + 8) = v6;
  return result;
}


int __fastcall CommandBlockScreenController::~CommandBlockScreenController(CommandBlockScreenController *this)
{
  CommandBlockScreenController *v1; // r4@1
  int v2; // r1@2
  ClientInstanceScreenModel *v3; // r0@2
  int v4; // r0@5
  void (*v5)(void); // r3@7

  v1 = this;
  *(_DWORD *)this = &off_26E1420;
  if ( *((_BYTE *)this + 481) )
  {
    v2 = (*(int (**)(void))(**((_DWORD **)this + 118) + 64))();
    v3 = (ClientInstanceScreenModel *)*((_DWORD *)v1 + 106);
    if ( v2 == 1 )
      ClientInstanceScreenModel::sendCommandBlockUpdatePacket((int)v3, (unsigned __int64 *)v1 + 56);
    else
      ClientInstanceScreenModel::sendCommandBlockUpdatePacket(v3, (CommandBlockScreenController *)((char *)v1 + 436));
  }
  v4 = *((_DWORD *)v1 + 118);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 118) = 0;
  v5 = (void (*)(void))*((_DWORD *)v1 + 116);
  if ( v5 )
    v5();
  return j_j_j__ZN21BlockScreenControllerD2Ev(v1);
}


void __fastcall CommandBlockScreenController::_getOutputText(CommandBlockScreenController *this, int a2)
{
  int v2; // r5@1
  void **v3; // r4@1
  int *v4; // r0@3
  char *v5; // r1@4
  char *v6; // r0@7
  unsigned int *v7; // r2@9
  signed int v8; // r1@11
  void *v9; // [sp+4h] [bp-1Ch]@3

  v2 = a2;
  v3 = (void **)this;
  if ( *(_BYTE *)(a2 + 476) && *(_BYTE *)(*(int (**)(void))(**(_DWORD **)(a2 + 472) + 52))() )
  {
    v4 = (int *)(*(int (**)(void))(**(_DWORD **)(v2 + 472) + 48))();
    sub_119C854((int *)&v9, v4);
    if ( *((_DWORD *)v9 - 3) )
    {
      *v3 = v9;
      v5 = (char *)&unk_28898CC;
      v9 = &unk_28898CC;
    }
    else
      sub_119C884(v3, "-");
      v5 = (char *)v9;
    v6 = v5 - 12;
    if ( (int *)(v5 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v5 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v6);
  }
  else
    sub_119C854((int *)v3, (int *)&Util::EMPTY_STRING);
}


const void **__fastcall CommandBlockScreenController::_getCommandBlockModeIconTexture(void **a1, int a2, int a3)
{
  void **v3; // r4@1
  const void **result; // r0@1

  v3 = a1;
  result = (const void **)&unk_28898CC;
  *v3 = &unk_28898CC;
  if ( a3 == 2 )
  {
    result = sub_119CAD8(v3, "textures/ui/ChainSquare", (_BYTE *)0x17);
  }
  else if ( a3 == 1 )
    result = sub_119CAD8(v3, "textures/ui/RepeatSquare", (_BYTE *)0x18);
  else if ( !a3 )
    result = sub_119CAD8(v3, "textures/ui/ImpulseSquare", (_BYTE *)0x19);
  return result;
}


void __fastcall CommandBlockScreenController::_registerEventHandlers(CommandBlockScreenController *this)
{
  CommandBlockScreenController::_registerEventHandlers(this);
}


signed int __fastcall CommandBlockScreenController::_onConditionModeChange(CommandBlockScreenController *this, bool a2)
{
  CommandBlockScreenController *v2; // r4@1
  signed int result; // r0@2

  v2 = this;
  if ( (*(int (**)(void))(**((_DWORD **)this + 118) + 32))() )
    result = 1;
  else
    result = *((_BYTE *)v2 + 481);
  *((_BYTE *)v2 + 481) = result;
  return result;
}


void __fastcall CommandBlockScreenController::_registerConditionDropdown(CommandBlockScreenController *this)
{
  CommandBlockScreenController::_registerConditionDropdown(this);
}


void __fastcall CommandBlockScreenController::_getOutputText(CommandBlockScreenController *this, int a2)
{
  CommandBlockScreenController::_getOutputText(this, a2);
}


void *__fastcall CommandBlockScreenController::_getLastPerformedCommandBlockConditionalModeString(CommandBlockScreenController *this, int a2)
{
  int v2; // r5@1
  void **v3; // r4@1
  int v4; // r0@3
  void *result; // r0@4

  v2 = a2;
  v3 = (void **)this;
  if ( *(_BYTE *)(a2 + 476) && *(_BYTE *)(*(int (**)(void))(**(_DWORD **)(a2 + 472) + 52))() )
  {
    v4 = *(_DWORD *)(v2 + 472);
    *v3 = &unk_28898CC;
    if ( (*(int (**)(void))(*(_DWORD *)v4 + 72))() == 1 )
      result = sub_119CAD8(v3, "commandBlockScreen.condition.conditional", (_BYTE *)0x28);
    else
      result = sub_119CAD8(v3, "commandBlockScreen.condition.unconditional", (_BYTE *)0x2A);
  }
  else
    result = sub_119C854((int *)v3, (int *)&Util::EMPTY_STRING);
  return result;
}


void *__fastcall CommandBlockScreenController::_getLastPerformedCommandBlockTypeModeString(CommandBlockScreenController *this, int a2)
{
  int v2; // r5@1
  void **v3; // r4@1
  int v4; // r0@3
  void *result; // r0@3

  v2 = a2;
  v3 = (void **)this;
  if ( *(_BYTE *)(a2 + 476) && *(_BYTE *)(*(int (**)(void))(**(_DWORD **)(a2 + 472) + 52))() )
  {
    v4 = *(_DWORD *)(v2 + 472);
    *v3 = &unk_28898CC;
    result = (void *)(*(int (**)(void))(*(_DWORD *)v4 + 80))();
    if ( result )
    {
      if ( result == (void *)1 )
      {
        result = sub_119CAD8(v3, "commandBlockScreen.blockType.repeat", (_BYTE *)0x23);
      }
      else if ( result == (void *)2 )
        result = sub_119CAD8(v3, "commandBlockScreen.blockType.chain", (_BYTE *)0x22);
    }
    else
      result = sub_119CAD8(v3, "commandBlockScreen.blockType.impulse", (_BYTE *)0x24);
  }
  else
    result = sub_119C854((int *)v3, (int *)&Util::EMPTY_STRING);
  return result;
}


void __fastcall CommandBlockScreenController::_registerRedstoneDropdown(CommandBlockScreenController *this)
{
  ScreenController *v1; // r8@1
  double v2; // r0@1
  void *v3; // r0@1
  void *v4; // r0@2
  __int64 v5; // r6@3
  double v6; // r0@3
  void *v7; // r0@3
  void *v8; // r0@4
  _DWORD *v9; // r0@5
  __int64 v10; // r1@5
  __int64 v11; // r1@5
  unsigned __int64 *v12; // r4@9
  int v13; // r4@11
  _DWORD *v14; // r0@11
  __int64 v15; // r1@11
  void *v16; // r0@13
  unsigned __int64 *v17; // r4@14
  int v18; // r4@16
  _DWORD *v19; // r0@16
  __int64 v20; // r1@16
  char *v21; // r4@18
  size_t v22; // r0@18
  int i; // r1@18
  int v24; // t1@19
  _DWORD *v25; // r0@20
  __int64 v26; // r1@20
  __int64 v27; // r1@20
  char *v28; // r0@24
  _DWORD *v29; // r5@25
  _DWORD *v30; // r2@25
  unsigned int v31; // r1@25
  int v32; // r0@25
  bool v33; // zf@25
  int v34; // r7@25
  int v35; // r3@25
  int v36; // r6@26
  int v37; // r2@28
  __int64 v38; // r1@30
  int v39; // r4@34
  unsigned int *v40; // r2@36
  signed int v41; // r1@38
  void *v42; // r5@44
  int v43; // r1@44
  void *v44; // r0@44
  int v45; // r9@49
  unsigned int *v46; // r2@51
  signed int v47; // r1@53
  unsigned int *v48; // r2@55
  signed int v49; // r1@57
  _BYTE *v50; // r4@67
  size_t v51; // r0@67
  int j; // r1@67
  int v53; // t1@68
  int *v54; // r4@69
  void *v55; // r0@73
  unsigned __int64 *v56; // r4@74
  int v57; // r11@76
  int *v58; // r4@76
  void *v59; // r0@78
  void *v60; // r0@80
  int v61; // r6@81
  unsigned int *v62; // r2@83
  signed int v63; // r1@85
  void *v64; // r5@91
  int v65; // r1@91
  void *v66; // r0@91
  unsigned __int64 *v67; // r6@96
  unsigned int *v68; // r2@98
  signed int v69; // r1@100
  unsigned __int64 *v70; // r5@106
  int v71; // r1@106
  void *v72; // r0@106
  unsigned int *v73; // r2@112
  signed int v74; // r1@114
  unsigned int *v75; // r2@116
  signed int v76; // r1@118
  unsigned int *v77; // r2@120
  signed int v78; // r1@122
  unsigned int *v79; // r2@124
  signed int v80; // r1@126
  unsigned int *v81; // r2@128
  signed int v82; // r1@130
  unsigned int *v83; // r2@132
  signed int v84; // r1@134
  unsigned int *v85; // r2@160
  signed int v86; // r1@162
  __int64 v87; // [sp+0h] [bp-200h]@3
  int v88; // [sp+30h] [bp-1D0h]@55
  char v89; // [sp+34h] [bp-1CCh]@76
  ScreenController *v90; // [sp+38h] [bp-1C8h]@76
  int *v91; // [sp+3Ch] [bp-1C4h]@76
  int (__fastcall *v92)(void **, int *, int); // [sp+44h] [bp-1BCh]@76
  signed int (__fastcall *v93)(int, int); // [sp+48h] [bp-1B8h]@76
  void *v94; // [sp+4Ch] [bp-1B4h]@69
  int (__fastcall *v95)(void **, void **, int); // [sp+54h] [bp-1ACh]@69
  signed int (*v96)(); // [sp+58h] [bp-1A8h]@69
  int v97; // [sp+5Ch] [bp-1A4h]@51
  char v98; // [sp+60h] [bp-1A0h]@69
  ScreenController *v99; // [sp+64h] [bp-19Ch]@69
  int *v100; // [sp+68h] [bp-198h]@69
  int (__fastcall *v101)(void **, int *, int); // [sp+70h] [bp-190h]@69
  signed int (__fastcall *v102)(int); // [sp+74h] [bp-18Ch]@69
  int v103; // [sp+78h] [bp-188h]@69
  void *v104; // [sp+7Ch] [bp-184h]@30
  __int64 v105; // [sp+84h] [bp-17Ch]@30
  void *ptr; // [sp+8Ch] [bp-174h]@25
  unsigned int v107; // [sp+90h] [bp-170h]@25
  int v108; // [sp+94h] [bp-16Ch]@25
  int v109; // [sp+98h] [bp-168h]@25
  __int64 v110; // [sp+9Ch] [bp-164h]@25
  int v111; // [sp+A4h] [bp-15Ch]@25
  ScreenController *v112; // [sp+A8h] [bp-158h]@25
  _DWORD *v113; // [sp+ACh] [bp-154h]@30
  int (__fastcall *v114)(int *, int *, int); // [sp+B4h] [bp-14Ch]@25
  int *(__fastcall *v115)(int *, unsigned __int64 **); // [sp+B8h] [bp-148h]@30
  int v116; // [sp+BCh] [bp-144h]@25
  void *v117; // [sp+C0h] [bp-140h]@20
  __int64 v118; // [sp+C8h] [bp-138h]@20
  _DWORD *v119; // [sp+D0h] [bp-130h]@20
  __int64 v120; // [sp+D8h] [bp-128h]@20
  char *s; // [sp+E0h] [bp-120h]@18
  int v122; // [sp+E4h] [bp-11Ch]@20
  _DWORD *v123; // [sp+E8h] [bp-118h]@16
  __int64 v124; // [sp+F0h] [bp-110h]@16
  _DWORD *v125; // [sp+F8h] [bp-108h]@11
  __int64 v126; // [sp+100h] [bp-100h]@11
  int v127; // [sp+10Ch] [bp-F4h]@9
  int v128; // [sp+114h] [bp-ECh]@9
  void *v129; // [sp+118h] [bp-E8h]@5
  __int64 v130; // [sp+120h] [bp-E0h]@5
  _DWORD *v131; // [sp+128h] [bp-D8h]@5
  __int64 v132; // [sp+130h] [bp-D0h]@5
  int v133; // [sp+138h] [bp-C8h]@5
  char v134; // [sp+144h] [bp-BCh]@3
  char v135; // [sp+148h] [bp-B8h]@3
  int v136; // [sp+14Ch] [bp-B4h]@3
  char v137; // [sp+150h] [bp-B0h]@3
  int v138; // [sp+154h] [bp-ACh]@3
  void *v139; // [sp+158h] [bp-A8h]@3
  unsigned int v140; // [sp+15Ch] [bp-A4h]@25
  int v141; // [sp+160h] [bp-A0h]@81
  int v142; // [sp+164h] [bp-9Ch]@25
  __int64 v143; // [sp+168h] [bp-98h]@25
  int v144; // [sp+170h] [bp-90h]@94
  int v145; // [sp+180h] [bp-80h]@1
  char v146; // [sp+184h] [bp-7Ch]@1
  int v147; // [sp+188h] [bp-78h]@1
  char v148; // [sp+18Ch] [bp-74h]@1
  void *v149; // [sp+190h] [bp-70h]@1
  int v150; // [sp+194h] [bp-6Ch]@108
  unsigned __int64 *v151; // [sp+198h] [bp-68h]@49
  int v152; // [sp+19Ch] [bp-64h]@108
  int v153; // [sp+1A8h] [bp-58h]@109
  char v154; // [sp+1D0h] [bp-30h]@3

  v1 = this;
  sub_119C884((void **)&v145, "#command_needs_redstone_mode");
  v146 = 1;
  sub_119C884((void **)&v147, "#command_always_on_mode");
  v148 = 0;
  LODWORD(v2) = &v149;
  std::_Hashtable<std::string,std::pair<std::string const,bool>,std::allocator<std::pair<std::string const,bool>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<std::string const,bool> const*>(
    v2,
    (int **)&v149,
    0);
  v3 = (void *)(v147 - 12);
  if ( (int *)(v147 - 12) != &dword_28898C0 )
  {
    v73 = (unsigned int *)(v147 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
    }
    else
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v145 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  v135 = 1;
  sub_119C884((void **)&v136, "commandBlockScreen.redstone.needs_redstone");
  v137 = 0;
  sub_119C884((void **)&v138, "commandBlockScreen.redstone.always_on");
  HIDWORD(v5) = &v154;
  LODWORD(v5) = &v134;
  v87 = v5;
  LODWORD(v6) = &v139;
  std::_Hashtable<bool,std::pair<bool const,std::string>,std::allocator<std::pair<bool const,std::string>>,std::__detail::_Select1st,std::equal_to<bool>,std::hash<bool>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_Hashtable<std::pair<bool const,std::string> const*>(
    v6,
    &v139,
  v7 = (void *)(v138 - 12);
  if ( (int *)(v138 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v138 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = (void *)(v136 - 12);
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v136 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  StringHash::StringHash<char [27]>(&v133, (int)"#redstone_dropdown_enabled");
  v9 = operator new(4u);
  LODWORD(v10) = sub_1158DAE;
  *v9 = v1;
  HIDWORD(v10) = sub_1158D98;
  v131 = v9;
  v132 = v10;
  v129 = operator new(1u);
  LODWORD(v11) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v11) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v130 = v11;
  ScreenController::bindBool((int)v1, &v133, (int)&v131, (int)&v129);
  if ( (_DWORD)v130 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, char *, char *))v130)(&v129, &v129, 3, v130, &v134, &v154);
  if ( (_DWORD)v132 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v132)(
      &v131,
      3,
      v132,
      v87,
      HIDWORD(v87));
  sub_119C884((void **)&v128, "redstone_dropdown");
  sub_119C884((void **)&v127, "button.dropdown_exit");
  v12 = (unsigned __int64 *)ScreenController::_getNameRegistry(v1);
  if ( !NameRegistry::hasEntry(v12, (int **)&v127) )
    NameRegistry::registerName(v12, (int **)&v127);
  v13 = NameRegistry::getNameId(v12, (int **)&v127);
  v14 = operator new(4u);
  LODWORD(v15) = sub_1158DF2;
  *v14 = v1;
  HIDWORD(v15) = sub_1158DE4;
  v125 = v14;
  v126 = v15;
  ScreenController::registerButtonClickHandler((int)v1, v13, (int)&v125);
  if ( (_DWORD)v126 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v126)(
      &v125,
      v126,
  v16 = (void *)(v127 - 12);
  if ( (int *)(v127 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v127 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = (unsigned __int64 *)ScreenController::_getNameRegistry(v1);
  if ( !NameRegistry::hasEntry(v17, (int **)&v128) )
    NameRegistry::registerName(v17, (int **)&v128);
  v18 = NameRegistry::getNameId(v17, (int **)&v128);
  v19 = operator new(4u);
  LODWORD(v20) = sub_1158E36;
  *v19 = v1;
  HIDWORD(v20) = sub_1158E28;
  v123 = v19;
  v124 = v20;
  ScreenController::registerToggleChangeEventHandler((int)v1, v18, (int)&v123);
  if ( (_DWORD)v124 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v124)(
      &v123,
      v124,
  s = (char *)&unk_28898CC;
  sub_119CAF8((const void **)&s, *(_DWORD *)(v128 - 12) + 1);
  sub_119C894((const void **)&s, "#", 1u);
  sub_119C8A4((const void **)&s, (const void **)&v128);
  v21 = s;
  v22 = strlen(s);
  for ( i = -2128831035; v22; i = 16777619 * (i ^ v24) )
    v24 = (unsigned __int8)*v21++;
    --v22;
  v122 = i;
  v25 = operator new(4u);
  LODWORD(v26) = sub_1158E7C;
  *v25 = v1;
  HIDWORD(v26) = sub_1158E6C;
  v119 = v25;
  v120 = v26;
  v117 = operator new(1u);
  LODWORD(v27) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v27) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v118 = v27;
  ScreenController::bindBool((int)v1, &v122, (int)&v119, (int)&v117);
  if ( (_DWORD)v118 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v118)(
      &v117,
      v118,
  if ( (_DWORD)v120 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v120)(
      &v119,
      v120,
  v28 = s - 12;
  if ( (int *)(s - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(s - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  StringHash::StringHash<char [32]>(&v116, (int)"#redstone_dropdown_toggle_label");
  ptr = 0;
  v107 = v140;
  v108 = 0;
  v109 = v142;
  v110 = v143;
  std::_Hashtable<bool,std::pair<bool const,std::string>,std::allocator<std::pair<bool const,std::string>>,std::__detail::_Select1st,std::equal_to<bool>,std::hash<bool>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_assign<std::_Hashtable<bool,std::pair<bool const,std::string>,std::allocator<std::pair<bool const,std::string>>,std::__detail::_Select1st,std::equal_to<bool>,std::hash<bool>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::(std::_Hashtable<bool,std::pair<bool const,std::string>,std::allocator<std::pair<bool const,std::string>>,std::__detail::_Select1st,std::equal_to<bool>,std::hash<bool>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<bool const,std::string>,false> const*)#1}>(
    (unsigned int *)&ptr,
    (int)&v139);
  v112 = v1;
  v114 = 0;
  v29 = operator new(0x20u);
  v30 = ptr;
  v31 = v107;
  v32 = v108;
  v33 = &v111 == ptr;
  v34 = v109;
  *v29 = ptr;
  v29[1] = v31;
  v29[2] = v32;
  v29[3] = v34;
  v35 = HIDWORD(v110);
  v29[4] = v110;
  v29[5] = v35;
  if ( v33 )
    v36 = (int)(v29 + 6);
    *v29 = v29 + 6;
    v29[6] = *v30;
  else
    v36 = (int)v30;
  v37 = (int)v1;
  if ( v32 )
    *(_DWORD *)(v36 + 4 * (*(_BYTE *)(v32 + 4) % v31)) = v29 + 2;
    v37 = (int)v112;
  HIDWORD(v110) = 0;
  v111 = 0;
  ptr = &v111;
  v107 = 1;
  v109 = 0;
  v29[7] = v37;
  v113 = v29;
  v114 = sub_1158F74;
  v115 = sub_1158EB4;
  v104 = operator new(1u);
  LODWORD(v38) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v38) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v105 = v38;
  ScreenController::bindString((int)v1, &v116, (int)&v113, (int)&v104);
  if ( (_DWORD)v105 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v105)(
      &v104,
      v105,
  if ( v114 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, int (__fastcall *)(int *, int *, int), _DWORD, _DWORD))v114)(
      &v113,
      v114,
  v39 = v108;
  while ( v39 )
    v42 = (void *)v39;
    v43 = *(_DWORD *)(v39 + 8);
    v39 = *(_DWORD *)v39;
    v44 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v43 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v44);
    operator delete(v42);
  _aeabi_memclr4(ptr, 4 * v107);
  if ( ptr && &v111 != ptr )
    operator delete(ptr);
  v45 = (int)v151;
  if ( v151 )
    do
      v50 = *(_BYTE **)(v45 + 4);
      v51 = strlen(*(const char **)(v45 + 4));
      for ( j = -2128831035; v51; j = 16777619 * (j ^ v53) )
        v53 = *v50++;
        --v51;
      v103 = j;
      sub_119C854(&v97, (int *)(v45 + 4));
      v98 = *(_BYTE *)(v45 + 8);
      v99 = v1;
      v101 = 0;
      v54 = (int *)operator new(0xCu);
      sub_119C854(v54, &v97);
      *((_BYTE *)v54 + 4) = v98;
      v54[2] = (int)v99;
      v100 = v54;
      v102 = sub_1159078;
      v101 = sub_1159098;
      v95 = 0;
      v94 = operator new(1u);
      v96 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
      v95 = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBool((int)v1, &v103, (int)&v100, (int)&v94);
      if ( v95 )
        v95(&v94, &v94, 3);
      if ( v101 )
        v101((void **)&v100, (int *)&v100, 3);
      v55 = (void *)(v97 - 12);
      if ( (int *)(v97 - 12) != &dword_28898C0 )
        v46 = (unsigned int *)(v97 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v47 = __ldrex(v46);
          while ( __strex(v47 - 1, v46) );
        }
        else
          v47 = (*v46)--;
        if ( v47 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v55);
      v56 = (unsigned __int64 *)ScreenController::_getNameRegistry(v1);
      if ( !NameRegistry::hasEntry(v56, (int **)(v45 + 4)) )
        NameRegistry::registerName(v56, (int **)(v45 + 4));
      v57 = NameRegistry::getNameId(v56, (int **)(v45 + 4));
      sub_119C854(&v88, (int *)(v45 + 4));
      v89 = *(_BYTE *)(v45 + 8);
      v90 = v1;
      v92 = 0;
      v58 = (int *)operator new(0xCu);
      sub_119C854(v58, &v88);
      *((_BYTE *)v58 + 4) = v89;
      v58[2] = (int)v90;
      v91 = v58;
      v93 = sub_115913C;
      v92 = sub_1159174;
      ScreenController::registerToggleChangeEventHandler((int)v1, v57, (int)&v91);
      if ( v92 )
        ((void (__cdecl *)(int **, int **, signed int, int (__fastcall *)(void **, int *, int), _DWORD, _DWORD))v92)(
          &v91,
          3,
          v92,
          v87,
          HIDWORD(v87));
      v59 = (void *)(v88 - 12);
      if ( (int *)(v88 - 12) != &dword_28898C0 )
        v48 = (unsigned int *)(v88 - 4);
            v49 = __ldrex(v48);
          while ( __strex(v49 - 1, v48) );
          v49 = (*v48)--;
        if ( v49 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v59);
      v45 = *(_DWORD *)v45;
    while ( v45 );
  v60 = (void *)(v128 - 12);
  if ( (int *)(v128 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v128 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v60);
  v61 = v141;
  while ( v61 )
    v64 = (void *)v61;
    v65 = *(_DWORD *)(v61 + 8);
    v61 = *(_DWORD *)v61;
    v66 = (void *)(v65 - 12);
    if ( (int *)(v65 - 12) != &dword_28898C0 )
      v62 = (unsigned int *)(v65 - 4);
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
        v63 = (*v62)--;
      if ( v63 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v66);
    operator delete(v64);
  _aeabi_memclr4(v139, 4 * v140);
  v141 = 0;
  v142 = 0;
  if ( v139 && &v144 != v139 )
    operator delete(v139);
  v67 = v151;
  while ( v67 )
    v70 = v67;
    v71 = *v67 >> 32;
    v67 = (unsigned __int64 *)*v67;
    v72 = (void *)(v71 - 12);
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v68 = (unsigned int *)(v71 - 4);
          v69 = __ldrex(v68);
        while ( __strex(v69 - 1, v68) );
        v69 = (*v68)--;
      if ( v69 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v72);
    operator delete(v70);
  _aeabi_memclr4(v149, 4 * v150);
  v151 = 0;
  v152 = 0;
  if ( v149 )
    if ( &v153 != v149 )
      operator delete(v149);
}


void __fastcall CommandBlockScreenController::_registerConditionDropdown(CommandBlockScreenController *this)
{
  ScreenController *v1; // r8@1
  double v2; // r0@1
  void *v3; // r0@1
  void *v4; // r0@2
  __int64 v5; // r6@3
  double v6; // r0@3
  void *v7; // r0@3
  void *v8; // r0@4
  _DWORD *v9; // r0@5
  __int64 v10; // r1@5
  __int64 v11; // r1@5
  unsigned __int64 *v12; // r4@9
  int v13; // r4@11
  _DWORD *v14; // r0@11
  __int64 v15; // r1@11
  void *v16; // r0@13
  unsigned __int64 *v17; // r4@14
  int v18; // r4@16
  _DWORD *v19; // r0@16
  __int64 v20; // r1@16
  char *v21; // r4@18
  size_t v22; // r0@18
  int i; // r1@18
  int v24; // t1@19
  _DWORD *v25; // r0@20
  __int64 v26; // r1@20
  __int64 v27; // r1@20
  char *v28; // r0@24
  _DWORD *v29; // r5@25
  _DWORD *v30; // r2@25
  unsigned int v31; // r1@25
  int v32; // r0@25
  bool v33; // zf@25
  int v34; // r7@25
  int v35; // r3@25
  int v36; // r6@26
  int v37; // r2@28
  __int64 v38; // r1@30
  int v39; // r4@34
  unsigned int *v40; // r2@36
  signed int v41; // r1@38
  void *v42; // r5@44
  int v43; // r1@44
  void *v44; // r0@44
  int v45; // r9@49
  unsigned int *v46; // r2@51
  signed int v47; // r1@53
  unsigned int *v48; // r2@55
  signed int v49; // r1@57
  _BYTE *v50; // r4@67
  size_t v51; // r0@67
  int j; // r1@67
  int v53; // t1@68
  int *v54; // r4@69
  void *v55; // r0@73
  unsigned __int64 *v56; // r4@74
  int v57; // r11@76
  int *v58; // r4@76
  void *v59; // r0@78
  void *v60; // r0@80
  int v61; // r6@81
  unsigned int *v62; // r2@83
  signed int v63; // r1@85
  void *v64; // r5@91
  int v65; // r1@91
  void *v66; // r0@91
  unsigned __int64 *v67; // r6@96
  unsigned int *v68; // r2@98
  signed int v69; // r1@100
  unsigned __int64 *v70; // r5@106
  int v71; // r1@106
  void *v72; // r0@106
  unsigned int *v73; // r2@112
  signed int v74; // r1@114
  unsigned int *v75; // r2@116
  signed int v76; // r1@118
  unsigned int *v77; // r2@120
  signed int v78; // r1@122
  unsigned int *v79; // r2@124
  signed int v80; // r1@126
  unsigned int *v81; // r2@128
  signed int v82; // r1@130
  unsigned int *v83; // r2@132
  signed int v84; // r1@134
  unsigned int *v85; // r2@160
  signed int v86; // r1@162
  __int64 v87; // [sp+0h] [bp-200h]@3
  int v88; // [sp+30h] [bp-1D0h]@55
  char v89; // [sp+34h] [bp-1CCh]@76
  ScreenController *v90; // [sp+38h] [bp-1C8h]@76
  int *v91; // [sp+3Ch] [bp-1C4h]@76
  int (__fastcall *v92)(void **, int *, int); // [sp+44h] [bp-1BCh]@76
  signed int (__fastcall *v93)(int, int); // [sp+48h] [bp-1B8h]@76
  void *v94; // [sp+4Ch] [bp-1B4h]@69
  int (__fastcall *v95)(void **, void **, int); // [sp+54h] [bp-1ACh]@69
  signed int (*v96)(); // [sp+58h] [bp-1A8h]@69
  int v97; // [sp+5Ch] [bp-1A4h]@51
  char v98; // [sp+60h] [bp-1A0h]@69
  ScreenController *v99; // [sp+64h] [bp-19Ch]@69
  int *v100; // [sp+68h] [bp-198h]@69
  int (__fastcall *v101)(void **, int *, int); // [sp+70h] [bp-190h]@69
  signed int (__fastcall *v102)(int); // [sp+74h] [bp-18Ch]@69
  int v103; // [sp+78h] [bp-188h]@69
  void *v104; // [sp+7Ch] [bp-184h]@30
  __int64 v105; // [sp+84h] [bp-17Ch]@30
  void *ptr; // [sp+8Ch] [bp-174h]@25
  unsigned int v107; // [sp+90h] [bp-170h]@25
  int v108; // [sp+94h] [bp-16Ch]@25
  int v109; // [sp+98h] [bp-168h]@25
  __int64 v110; // [sp+9Ch] [bp-164h]@25
  int v111; // [sp+A4h] [bp-15Ch]@25
  ScreenController *v112; // [sp+A8h] [bp-158h]@25
  _DWORD *v113; // [sp+ACh] [bp-154h]@30
  int (__fastcall *v114)(int *, int *, int); // [sp+B4h] [bp-14Ch]@25
  int *(__fastcall *v115)(int *, unsigned __int64 **); // [sp+B8h] [bp-148h]@30
  int v116; // [sp+BCh] [bp-144h]@25
  void *v117; // [sp+C0h] [bp-140h]@20
  __int64 v118; // [sp+C8h] [bp-138h]@20
  _DWORD *v119; // [sp+D0h] [bp-130h]@20
  __int64 v120; // [sp+D8h] [bp-128h]@20
  char *s; // [sp+E0h] [bp-120h]@18
  int v122; // [sp+E4h] [bp-11Ch]@20
  _DWORD *v123; // [sp+E8h] [bp-118h]@16
  __int64 v124; // [sp+F0h] [bp-110h]@16
  _DWORD *v125; // [sp+F8h] [bp-108h]@11
  __int64 v126; // [sp+100h] [bp-100h]@11
  int v127; // [sp+10Ch] [bp-F4h]@9
  int v128; // [sp+114h] [bp-ECh]@9
  void *v129; // [sp+118h] [bp-E8h]@5
  __int64 v130; // [sp+120h] [bp-E0h]@5
  _DWORD *v131; // [sp+128h] [bp-D8h]@5
  __int64 v132; // [sp+130h] [bp-D0h]@5
  int v133; // [sp+138h] [bp-C8h]@5
  char v134; // [sp+144h] [bp-BCh]@3
  char v135; // [sp+148h] [bp-B8h]@3
  int v136; // [sp+14Ch] [bp-B4h]@3
  char v137; // [sp+150h] [bp-B0h]@3
  int v138; // [sp+154h] [bp-ACh]@3
  void *v139; // [sp+158h] [bp-A8h]@3
  unsigned int v140; // [sp+15Ch] [bp-A4h]@25
  int v141; // [sp+160h] [bp-A0h]@81
  int v142; // [sp+164h] [bp-9Ch]@25
  __int64 v143; // [sp+168h] [bp-98h]@25
  int v144; // [sp+170h] [bp-90h]@94
  int v145; // [sp+180h] [bp-80h]@1
  char v146; // [sp+184h] [bp-7Ch]@1
  int v147; // [sp+188h] [bp-78h]@1
  char v148; // [sp+18Ch] [bp-74h]@1
  void *v149; // [sp+190h] [bp-70h]@1
  int v150; // [sp+194h] [bp-6Ch]@108
  unsigned __int64 *v151; // [sp+198h] [bp-68h]@49
  int v152; // [sp+19Ch] [bp-64h]@108
  int v153; // [sp+1A8h] [bp-58h]@109
  char v154; // [sp+1D0h] [bp-30h]@3

  v1 = this;
  sub_119C884((void **)&v145, "#command_conditional_mode");
  v146 = 1;
  sub_119C884((void **)&v147, "#command_unconditional_mode");
  v148 = 0;
  LODWORD(v2) = &v149;
  std::_Hashtable<std::string,std::pair<std::string const,bool>,std::allocator<std::pair<std::string const,bool>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<std::string const,bool> const*>(
    v2,
    (int **)&v149,
    0);
  v3 = (void *)(v147 - 12);
  if ( (int *)(v147 - 12) != &dword_28898C0 )
  {
    v73 = (unsigned int *)(v147 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
    }
    else
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v145 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  v135 = 1;
  sub_119C884((void **)&v136, "commandBlockScreen.condition.conditional");
  v137 = 0;
  sub_119C884((void **)&v138, "commandBlockScreen.condition.unconditional");
  HIDWORD(v5) = &v154;
  LODWORD(v5) = &v134;
  v87 = v5;
  LODWORD(v6) = &v139;
  std::_Hashtable<bool,std::pair<bool const,std::string>,std::allocator<std::pair<bool const,std::string>>,std::__detail::_Select1st,std::equal_to<bool>,std::hash<bool>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_Hashtable<std::pair<bool const,std::string> const*>(
    v6,
    &v139,
  v7 = (void *)(v138 - 12);
  if ( (int *)(v138 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v138 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = (void *)(v136 - 12);
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v136 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  StringHash::StringHash<char [28]>(&v133, (int)"#condition_dropdown_enabled");
  v9 = operator new(4u);
  LODWORD(v10) = sub_1158930;
  *v9 = v1;
  HIDWORD(v10) = sub_115891A;
  v131 = v9;
  v132 = v10;
  v129 = operator new(1u);
  LODWORD(v11) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v11) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v130 = v11;
  ScreenController::bindBool((int)v1, &v133, (int)&v131, (int)&v129);
  if ( (_DWORD)v130 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, char *, char *))v130)(&v129, &v129, 3, v130, &v134, &v154);
  if ( (_DWORD)v132 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v132)(
      &v131,
      3,
      v132,
      v87,
      HIDWORD(v87));
  sub_119C884((void **)&v128, "condition_dropdown");
  sub_119C884((void **)&v127, "button.dropdown_exit");
  v12 = (unsigned __int64 *)ScreenController::_getNameRegistry(v1);
  if ( !NameRegistry::hasEntry(v12, (int **)&v127) )
    NameRegistry::registerName(v12, (int **)&v127);
  v13 = NameRegistry::getNameId(v12, (int **)&v127);
  v14 = operator new(4u);
  LODWORD(v15) = sub_1158974;
  *v14 = v1;
  HIDWORD(v15) = sub_1158966;
  v125 = v14;
  v126 = v15;
  ScreenController::registerButtonClickHandler((int)v1, v13, (int)&v125);
  if ( (_DWORD)v126 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v126)(
      &v125,
      v126,
  v16 = (void *)(v127 - 12);
  if ( (int *)(v127 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v127 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = (unsigned __int64 *)ScreenController::_getNameRegistry(v1);
  if ( !NameRegistry::hasEntry(v17, (int **)&v128) )
    NameRegistry::registerName(v17, (int **)&v128);
  v18 = NameRegistry::getNameId(v17, (int **)&v128);
  v19 = operator new(4u);
  LODWORD(v20) = sub_11589B8;
  *v19 = v1;
  HIDWORD(v20) = sub_11589AA;
  v123 = v19;
  v124 = v20;
  ScreenController::registerToggleChangeEventHandler((int)v1, v18, (int)&v123);
  if ( (_DWORD)v124 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v124)(
      &v123,
      v124,
  s = (char *)&unk_28898CC;
  sub_119CAF8((const void **)&s, *(_DWORD *)(v128 - 12) + 1);
  sub_119C894((const void **)&s, "#", 1u);
  sub_119C8A4((const void **)&s, (const void **)&v128);
  v21 = s;
  v22 = strlen(s);
  for ( i = -2128831035; v22; i = 16777619 * (i ^ v24) )
    v24 = (unsigned __int8)*v21++;
    --v22;
  v122 = i;
  v25 = operator new(4u);
  LODWORD(v26) = sub_11589FE;
  *v25 = v1;
  HIDWORD(v26) = sub_11589EE;
  v119 = v25;
  v120 = v26;
  v117 = operator new(1u);
  LODWORD(v27) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v27) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v118 = v27;
  ScreenController::bindBool((int)v1, &v122, (int)&v119, (int)&v117);
  if ( (_DWORD)v118 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v118)(
      &v117,
      v118,
  if ( (_DWORD)v120 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v120)(
      &v119,
      v120,
  v28 = s - 12;
  if ( (int *)(s - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(s - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  StringHash::StringHash<char [33]>(&v116, (int)"#condition_dropdown_toggle_label");
  ptr = 0;
  v107 = v140;
  v108 = 0;
  v109 = v142;
  v110 = v143;
  std::_Hashtable<bool,std::pair<bool const,std::string>,std::allocator<std::pair<bool const,std::string>>,std::__detail::_Select1st,std::equal_to<bool>,std::hash<bool>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_assign<std::_Hashtable<bool,std::pair<bool const,std::string>,std::allocator<std::pair<bool const,std::string>>,std::__detail::_Select1st,std::equal_to<bool>,std::hash<bool>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::(std::_Hashtable<bool,std::pair<bool const,std::string>,std::allocator<std::pair<bool const,std::string>>,std::__detail::_Select1st,std::equal_to<bool>,std::hash<bool>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<bool const,std::string>,false> const*)#1}>(
    (unsigned int *)&ptr,
    (int)&v139);
  v112 = v1;
  v114 = 0;
  v29 = operator new(0x20u);
  v30 = ptr;
  v31 = v107;
  v32 = v108;
  v33 = &v111 == ptr;
  v34 = v109;
  *v29 = ptr;
  v29[1] = v31;
  v29[2] = v32;
  v29[3] = v34;
  v35 = HIDWORD(v110);
  v29[4] = v110;
  v29[5] = v35;
  if ( v33 )
    v36 = (int)(v29 + 6);
    *v29 = v29 + 6;
    v29[6] = *v30;
  else
    v36 = (int)v30;
  v37 = (int)v1;
  if ( v32 )
    *(_DWORD *)(v36 + 4 * (*(_BYTE *)(v32 + 4) % v31)) = v29 + 2;
    v37 = (int)v112;
  HIDWORD(v110) = 0;
  v111 = 0;
  ptr = &v111;
  v107 = 1;
  v109 = 0;
  v29[7] = v37;
  v113 = v29;
  v114 = sub_1158AF4;
  v115 = sub_1158A34;
  v104 = operator new(1u);
  LODWORD(v38) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v38) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v105 = v38;
  ScreenController::bindString((int)v1, &v116, (int)&v113, (int)&v104);
  if ( (_DWORD)v105 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v105)(
      &v104,
      v105,
  if ( v114 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, int (__fastcall *)(int *, int *, int), _DWORD, _DWORD))v114)(
      &v113,
      v114,
  v39 = v108;
  while ( v39 )
    v42 = (void *)v39;
    v43 = *(_DWORD *)(v39 + 8);
    v39 = *(_DWORD *)v39;
    v44 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v43 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v44);
    operator delete(v42);
  _aeabi_memclr4(ptr, 4 * v107);
  if ( ptr && &v111 != ptr )
    operator delete(ptr);
  v45 = (int)v151;
  if ( v151 )
    do
      v50 = *(_BYTE **)(v45 + 4);
      v51 = strlen(*(const char **)(v45 + 4));
      for ( j = -2128831035; v51; j = 16777619 * (j ^ v53) )
        v53 = *v50++;
        --v51;
      v103 = j;
      sub_119C854(&v97, (int *)(v45 + 4));
      v98 = *(_BYTE *)(v45 + 8);
      v99 = v1;
      v101 = 0;
      v54 = (int *)operator new(0xCu);
      sub_119C854(v54, &v97);
      *((_BYTE *)v54 + 4) = v98;
      v54[2] = (int)v99;
      v100 = v54;
      v102 = sub_1158BF8;
      v101 = sub_1158C18;
      v95 = 0;
      v94 = operator new(1u);
      v96 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
      v95 = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBool((int)v1, &v103, (int)&v100, (int)&v94);
      if ( v95 )
        v95(&v94, &v94, 3);
      if ( v101 )
        v101((void **)&v100, (int *)&v100, 3);
      v55 = (void *)(v97 - 12);
      if ( (int *)(v97 - 12) != &dword_28898C0 )
        v46 = (unsigned int *)(v97 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v47 = __ldrex(v46);
          while ( __strex(v47 - 1, v46) );
        }
        else
          v47 = (*v46)--;
        if ( v47 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v55);
      v56 = (unsigned __int64 *)ScreenController::_getNameRegistry(v1);
      if ( !NameRegistry::hasEntry(v56, (int **)(v45 + 4)) )
        NameRegistry::registerName(v56, (int **)(v45 + 4));
      v57 = NameRegistry::getNameId(v56, (int **)(v45 + 4));
      sub_119C854(&v88, (int *)(v45 + 4));
      v89 = *(_BYTE *)(v45 + 8);
      v90 = v1;
      v92 = 0;
      v58 = (int *)operator new(0xCu);
      sub_119C854(v58, &v88);
      *((_BYTE *)v58 + 4) = v89;
      v58[2] = (int)v90;
      v91 = v58;
      v93 = sub_1158CBC;
      v92 = sub_1158CF4;
      ScreenController::registerToggleChangeEventHandler((int)v1, v57, (int)&v91);
      if ( v92 )
        ((void (__cdecl *)(int **, int **, signed int, int (__fastcall *)(void **, int *, int), _DWORD, _DWORD))v92)(
          &v91,
          3,
          v92,
          v87,
          HIDWORD(v87));
      v59 = (void *)(v88 - 12);
      if ( (int *)(v88 - 12) != &dword_28898C0 )
        v48 = (unsigned int *)(v88 - 4);
            v49 = __ldrex(v48);
          while ( __strex(v49 - 1, v48) );
          v49 = (*v48)--;
        if ( v49 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v59);
      v45 = *(_DWORD *)v45;
    while ( v45 );
  v60 = (void *)(v128 - 12);
  if ( (int *)(v128 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v128 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v60);
  v61 = v141;
  while ( v61 )
    v64 = (void *)v61;
    v65 = *(_DWORD *)(v61 + 8);
    v61 = *(_DWORD *)v61;
    v66 = (void *)(v65 - 12);
    if ( (int *)(v65 - 12) != &dword_28898C0 )
      v62 = (unsigned int *)(v65 - 4);
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
        v63 = (*v62)--;
      if ( v63 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v66);
    operator delete(v64);
  _aeabi_memclr4(v139, 4 * v140);
  v141 = 0;
  v142 = 0;
  if ( v139 && &v144 != v139 )
    operator delete(v139);
  v67 = v151;
  while ( v67 )
    v70 = v67;
    v71 = *v67 >> 32;
    v67 = (unsigned __int64 *)*v67;
    v72 = (void *)(v71 - 12);
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v68 = (unsigned int *)(v71 - 4);
          v69 = __ldrex(v68);
        while ( __strex(v69 - 1, v68) );
        v69 = (*v68)--;
      if ( v69 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v72);
    operator delete(v70);
  _aeabi_memclr4(v149, 4 * v150);
  v151 = 0;
  v152 = 0;
  if ( v149 )
    if ( &v153 != v149 )
      operator delete(v149);
}


signed int __fastcall CommandBlockScreenController::_onBlockTypeChange(int a1)
{
  int v1; // r4@1
  signed int result; // r0@2

  v1 = a1;
  if ( (*(int (**)(void))(**(_DWORD **)(a1 + 472) + 28))() )
    result = 1;
  else
    result = *(_BYTE *)(v1 + 481);
  *(_BYTE *)(v1 + 481) = result;
  return result;
}


void __fastcall CommandBlockScreenController::_registerRedstoneDropdown(CommandBlockScreenController *this)
{
  CommandBlockScreenController::_registerRedstoneDropdown(this);
}


void __fastcall CommandBlockScreenController::_registerBindings(CommandBlockScreenController *this)
{
  CommandBlockScreenController *v1; // r4@1
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
  void *v44; // [sp+0h] [bp-200h]@53
  __int64 v45; // [sp+8h] [bp-1F8h]@53
  _DWORD *v46; // [sp+10h] [bp-1F0h]@53
  __int64 v47; // [sp+18h] [bp-1E8h]@53
  int v48; // [sp+20h] [bp-1E0h]@53
  void *v49; // [sp+24h] [bp-1DCh]@49
  __int64 v50; // [sp+2Ch] [bp-1D4h]@49
  _DWORD *v51; // [sp+34h] [bp-1CCh]@49
  __int64 v52; // [sp+3Ch] [bp-1C4h]@49
  int v53; // [sp+44h] [bp-1BCh]@49
  void *v54; // [sp+48h] [bp-1B8h]@45
  __int64 v55; // [sp+50h] [bp-1B0h]@45
  _DWORD *v56; // [sp+58h] [bp-1A8h]@45
  __int64 v57; // [sp+60h] [bp-1A0h]@45
  int v58; // [sp+68h] [bp-198h]@45
  void *v59; // [sp+6Ch] [bp-194h]@41
  __int64 v60; // [sp+74h] [bp-18Ch]@41
  _DWORD *v61; // [sp+7Ch] [bp-184h]@41
  __int64 v62; // [sp+84h] [bp-17Ch]@41
  int v63; // [sp+8Ch] [bp-174h]@41
  void *v64; // [sp+90h] [bp-170h]@37
  __int64 v65; // [sp+98h] [bp-168h]@37
  _DWORD *v66; // [sp+A0h] [bp-160h]@37
  __int64 v67; // [sp+A8h] [bp-158h]@37
  int v68; // [sp+B0h] [bp-150h]@37
  void *v69; // [sp+B4h] [bp-14Ch]@33
  __int64 v70; // [sp+BCh] [bp-144h]@33
  _DWORD *v71; // [sp+C4h] [bp-13Ch]@33
  __int64 v72; // [sp+CCh] [bp-134h]@33
  int v73; // [sp+D4h] [bp-12Ch]@33
  void *v74; // [sp+D8h] [bp-128h]@29
  __int64 v75; // [sp+E0h] [bp-120h]@29
  _DWORD *v76; // [sp+E8h] [bp-118h]@29
  __int64 v77; // [sp+F0h] [bp-110h]@29
  int v78; // [sp+F8h] [bp-108h]@29
  void *v79; // [sp+FCh] [bp-104h]@25
  __int64 v80; // [sp+104h] [bp-FCh]@25
  _DWORD *v81; // [sp+10Ch] [bp-F4h]@25
  __int64 v82; // [sp+114h] [bp-ECh]@25
  int v83; // [sp+11Ch] [bp-E4h]@25
  void *v84; // [sp+120h] [bp-E0h]@21
  __int64 v85; // [sp+128h] [bp-D8h]@21
  _DWORD *v86; // [sp+130h] [bp-D0h]@21
  __int64 v87; // [sp+138h] [bp-C8h]@21
  int v88; // [sp+140h] [bp-C0h]@21
  void *v89; // [sp+144h] [bp-BCh]@17
  __int64 v90; // [sp+14Ch] [bp-B4h]@17
  _DWORD *v91; // [sp+154h] [bp-ACh]@17
  __int64 v92; // [sp+15Ch] [bp-A4h]@17
  int v93; // [sp+164h] [bp-9Ch]@17
  void *v94; // [sp+168h] [bp-98h]@13
  __int64 v95; // [sp+170h] [bp-90h]@13
  _DWORD *v96; // [sp+178h] [bp-88h]@13
  __int64 v97; // [sp+180h] [bp-80h]@13
  int v98; // [sp+188h] [bp-78h]@13
  void *v99; // [sp+18Ch] [bp-74h]@9
  __int64 v100; // [sp+194h] [bp-6Ch]@9
  _DWORD *v101; // [sp+19Ch] [bp-64h]@9
  __int64 v102; // [sp+1A4h] [bp-5Ch]@9
  int v103; // [sp+1ACh] [bp-54h]@9
  void *v104; // [sp+1B0h] [bp-50h]@5
  __int64 v105; // [sp+1B8h] [bp-48h]@5
  _DWORD *v106; // [sp+1C0h] [bp-40h]@5
  __int64 v107; // [sp+1C8h] [bp-38h]@5
  int v108; // [sp+1D0h] [bp-30h]@5
  void *v109; // [sp+1D4h] [bp-2Ch]@1
  __int64 v110; // [sp+1DCh] [bp-24h]@1
  _DWORD *v111; // [sp+1E4h] [bp-1Ch]@1
  __int64 v112; // [sp+1ECh] [bp-14h]@1
  int v113; // [sp+1F4h] [bp-Ch]@1

  v1 = this;
  v113 = 1023560128;
  v2 = operator new(4u);
  LODWORD(v3) = sub_11567A4;
  *v2 = v1;
  HIDWORD(v3) = sub_1156788;
  v111 = v2;
  v112 = v3;
  v109 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v110 = v4;
  ScreenController::bindString((int)v1, &v113, (int)&v111, (int)&v109);
  if ( (_DWORD)v110 )
    ((void (*)(void))v110)();
  if ( (_DWORD)v112 )
    ((void (*)(void))v112)();
  v108 = -1868160247;
  v5 = operator new(4u);
  LODWORD(v6) = sub_11567E6;
  *v5 = v1;
  HIDWORD(v6) = sub_11567DA;
  v106 = v5;
  v107 = v6;
  v104 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v105 = v7;
  ScreenController::bindString((int)v1, &v108, (int)&v106, (int)&v104);
  if ( (_DWORD)v105 )
    ((void (*)(void))v105)();
  if ( (_DWORD)v107 )
    ((void (*)(void))v107)();
  v103 = -1752630933;
  v8 = operator new(4u);
  LODWORD(v9) = sub_1156838;
  *v8 = v1;
  HIDWORD(v9) = sub_115681C;
  v101 = v8;
  v102 = v9;
  v99 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v100 = v10;
  ScreenController::bindString((int)v1, &v103, (int)&v101, (int)&v99);
  if ( (_DWORD)v100 )
    ((void (*)(void))v100)();
  if ( (_DWORD)v102 )
    ((void (*)(void))v102)();
  StringHash::StringHash<char [26]>(&v98, (int)"#previous_block_type_text");
  v11 = operator new(4u);
  LODWORD(v12) = sub_115687A;
  *v11 = v1;
  HIDWORD(v12) = sub_115686E;
  v96 = v11;
  v97 = v12;
  v94 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v95 = v13;
  ScreenController::bindString((int)v1, &v98, (int)&v96, (int)&v94);
  if ( (_DWORD)v95 )
    ((void (*)(void))v95)();
  if ( (_DWORD)v97 )
    ((void (*)(void))v97)();
  StringHash::StringHash<char [30]>(&v93, (int)"#previous_condition_mode_text");
  v14 = operator new(4u);
  LODWORD(v15) = sub_11568BC;
  *v14 = v1;
  HIDWORD(v15) = sub_11568B0;
  v91 = v14;
  v92 = v15;
  v89 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v90 = v16;
  ScreenController::bindString((int)v1, &v93, (int)&v91, (int)&v89);
  if ( (_DWORD)v90 )
    ((void (*)(void))v90)();
  if ( (_DWORD)v92 )
    ((void (*)(void))v92)();
  StringHash::StringHash<char [29]>(&v88, (int)"#previous_redstone_mode_text");
  v17 = operator new(4u);
  LODWORD(v18) = sub_11568FE;
  *v17 = v1;
  HIDWORD(v18) = sub_11568F2;
  v86 = v17;
  v87 = v18;
  v84 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v85 = v19;
  ScreenController::bindString((int)v1, &v88, (int)&v86, (int)&v84);
  if ( (_DWORD)v85 )
    ((void (*)(void))v85)();
  if ( (_DWORD)v87 )
    ((void (*)(void))v87)();
  StringHash::StringHash<char [25]>(&v83, (int)"#block_type_icon_texture");
  v20 = operator new(4u);
  LODWORD(v21) = sub_11569F0;
  *v20 = v1;
  HIDWORD(v21) = sub_1156934;
  v81 = v20;
  v82 = v21;
  v79 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v80 = v22;
  ScreenController::bindString((int)v1, &v83, (int)&v81, (int)&v79);
  if ( (_DWORD)v80 )
    ((void (*)(void))v80)();
  if ( (_DWORD)v82 )
    ((void (*)(void))v82)();
  StringHash::StringHash<char [25]>(&v78, (int)"#maximized_input_visible");
  v23 = operator new(4u);
  LODWORD(v24) = sub_1156A36;
  *v23 = v1;
  HIDWORD(v24) = sub_1156A26;
  v76 = v23;
  v77 = v24;
  v74 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v75 = v25;
  ScreenController::bindBool((int)v1, &v78, (int)&v76, (int)&v74);
  if ( (_DWORD)v75 )
    ((void (*)(void))v75)();
  if ( (_DWORD)v77 )
    ((void (*)(void))v77)();
  StringHash::StringHash<char [38]>(&v73, (int)"#minimize_button_visible_binding_name");
  v26 = operator new(4u);
  LODWORD(v27) = sub_1156A7C;
  *v26 = v1;
  HIDWORD(v27) = sub_1156A6C;
  v71 = v26;
  v72 = v27;
  v69 = operator new(1u);
  LODWORD(v28) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v28) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v70 = v28;
  ScreenController::bindBool((int)v1, &v73, (int)&v71, (int)&v69);
  if ( (_DWORD)v70 )
    ((void (*)(void))v70)();
  if ( (_DWORD)v72 )
    ((void (*)(void))v72)();
  StringHash::StringHash<char [35]>(&v68, (int)"#close_button_visible_binding_name");
  v29 = operator new(4u);
  LODWORD(v30) = sub_1156AC4;
  *v29 = v1;
  HIDWORD(v30) = sub_1156AB2;
  v66 = v29;
  v67 = v30;
  v64 = operator new(1u);
  LODWORD(v31) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v31) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v65 = v31;
  ScreenController::bindBool((int)v1, &v68, (int)&v66, (int)&v64);
  if ( (_DWORD)v65 )
    ((void (*)(void))v65)();
  if ( (_DWORD)v67 )
    ((void (*)(void))v67)();
  v63 = 1919073626;
  v32 = operator new(4u);
  LODWORD(v33) = sub_1156B0C;
  *v32 = v1;
  HIDWORD(v33) = sub_1156AFA;
  v61 = v32;
  v62 = v33;
  v59 = operator new(1u);
  LODWORD(v34) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v34) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v60 = v34;
  ScreenController::bindBool((int)v1, &v63, (int)&v61, (int)&v59);
  if ( (_DWORD)v60 )
    ((void (*)(void))v60)();
  if ( (_DWORD)v62 )
    ((void (*)(void))v62)();
  v58 = 1037722853;
  v35 = operator new(4u);
  LODWORD(v36) = sub_1156B56;
  *v35 = v1;
  HIDWORD(v36) = sub_1156B42;
  v56 = v35;
  v57 = v36;
  v54 = operator new(1u);
  LODWORD(v37) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v37) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v55 = v37;
  ScreenController::bindBool((int)v1, &v58, (int)&v56, (int)&v54);
  if ( (_DWORD)v55 )
    ((void (*)(void))v55)();
  if ( (_DWORD)v57 )
    ((void (*)(void))v57)();
  StringHash::StringHash<char [32]>(&v53, (int)"#previous_block_type_text_color");
  v38 = operator new(4u);
  LODWORD(v39) = sub_1156C1A;
  *v38 = v1;
  HIDWORD(v39) = sub_1156B8C;
  v51 = v38;
  v52 = v39;
  v49 = operator new(1u);
  LODWORD(v40) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindColorERK10StringHashRKSt8functionIF5ColorvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSH_St18_Manager_operation;
  HIDWORD(v40) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindColorERK10StringHashRKSt8functionIF5ColorvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v50 = v40;
  ScreenController::bindColor((int)v1, &v53, (int)&v51, (int)&v49);
  if ( (_DWORD)v50 )
    ((void (*)(void))v50)();
  if ( (_DWORD)v52 )
    ((void (*)(void))v52)();
  StringHash::StringHash<char [41]>(&v48, (int)"#block_type_dropdown_label_color_binding");
  v41 = operator new(4u);
  LODWORD(v42) = sub_1156D10;
  *v41 = v1;
  HIDWORD(v42) = sub_1156C82;
  v46 = v41;
  v47 = v42;
  v44 = operator new(1u);
  LODWORD(v43) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindColorERK10StringHashRKSt8functionIF5ColorvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSH_St18_Manager_operation;
  HIDWORD(v43) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindColorERK10StringHashRKSt8functionIF5ColorvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v45 = v43;
  ScreenController::bindColor((int)v1, &v48, (int)&v46, (int)&v44);
  if ( (_DWORD)v45 )
    ((void (*)(void))v45)();
  if ( (_DWORD)v47 )
    ((void (*)(void))v47)();
}


void __fastcall CommandBlockScreenController::_registerBlockTypeDropdown(CommandBlockScreenController *this)
{
  CommandBlockScreenController::_registerBlockTypeDropdown(this);
}


void __fastcall CommandBlockScreenController::~CommandBlockScreenController(CommandBlockScreenController *this)
{
  CommandBlockScreenController::~CommandBlockScreenController(this);
}


void __fastcall CommandBlockScreenController::_registerBlockTypeDropdown(CommandBlockScreenController *this)
{
  ScreenController *v1; // r8@1
  double v2; // r0@1
  void *v3; // r0@1
  void *v4; // r0@2
  void *v5; // r0@3
  __int64 v6; // r6@4
  double v7; // r0@4
  void *v8; // r0@4
  void *v9; // r0@5
  void *v10; // r0@6
  _DWORD *v11; // r0@7
  __int64 v12; // r1@7
  __int64 v13; // r1@7
  unsigned __int64 *v14; // r4@11
  int v15; // r4@13
  int *v16; // r5@13
  void *v17; // r0@15
  void *v18; // r0@16
  unsigned __int64 *v19; // r4@17
  int v20; // r4@19
  _DWORD *v21; // r0@19
  __int64 v22; // r1@19
  char *v23; // r4@21
  size_t v24; // r0@21
  int i; // r1@21
  int v26; // t1@22
  _DWORD *v27; // r0@23
  __int64 v28; // r1@23
  __int64 v29; // r1@23
  char *v30; // r0@27
  _DWORD *v31; // r5@28
  _DWORD *v32; // r2@28
  unsigned int v33; // r1@28
  int v34; // r0@28
  bool v35; // zf@28
  int v36; // r7@28
  int v37; // r3@28
  int v38; // r6@29
  int v39; // r2@31
  __int64 v40; // r1@33
  int v41; // r4@37
  unsigned int *v42; // r2@39
  signed int v43; // r1@41
  void *v44; // r5@47
  int v45; // r1@47
  void *v46; // r0@47
  int v47; // r9@52
  unsigned int *v48; // r2@54
  signed int v49; // r1@56
  unsigned int *v50; // r2@58
  signed int v51; // r1@60
  _BYTE *v52; // r4@70
  size_t v53; // r0@70
  int j; // r1@70
  int v55; // t1@71
  int *v56; // r4@72
  void *v57; // r0@76
  unsigned __int64 *v58; // r4@77
  int v59; // r11@79
  int *v60; // r4@79
  void *v61; // r0@81
  void *v62; // r0@83
  int v63; // r6@84
  unsigned int *v64; // r2@86
  signed int v65; // r1@88
  void *v66; // r5@94
  int v67; // r1@94
  void *v68; // r0@94
  unsigned __int64 *v69; // r6@99
  unsigned int *v70; // r2@101
  signed int v71; // r1@103
  unsigned __int64 *v72; // r5@109
  int v73; // r1@109
  void *v74; // r0@109
  unsigned int *v75; // r2@115
  signed int v76; // r1@117
  unsigned int *v77; // r2@119
  signed int v78; // r1@121
  unsigned int *v79; // r2@123
  signed int v80; // r1@125
  unsigned int *v81; // r2@127
  signed int v82; // r1@129
  unsigned int *v83; // r2@131
  signed int v84; // r1@133
  unsigned int *v85; // r2@135
  signed int v86; // r1@137
  unsigned int *v87; // r2@139
  signed int v88; // r1@141
  unsigned int *v89; // r2@143
  signed int v90; // r1@145
  unsigned int *v91; // r2@147
  signed int v92; // r1@149
  unsigned int *v93; // r2@187
  signed int v94; // r1@189
  __int64 v95; // [sp+0h] [bp-220h]@4
  int v96; // [sp+30h] [bp-1F0h]@58
  char v97; // [sp+34h] [bp-1ECh]@79
  ScreenController *v98; // [sp+38h] [bp-1E8h]@79
  int *v99; // [sp+3Ch] [bp-1E4h]@79
  int (__fastcall *v100)(void **, int *, int); // [sp+44h] [bp-1DCh]@79
  signed int (__fastcall *v101)(int, int); // [sp+48h] [bp-1D8h]@79
  void *v102; // [sp+4Ch] [bp-1D4h]@72
  int (__fastcall *v103)(void **, void **, int); // [sp+54h] [bp-1CCh]@72
  signed int (*v104)(); // [sp+58h] [bp-1C8h]@72
  int v105; // [sp+5Ch] [bp-1C4h]@54
  char v106; // [sp+60h] [bp-1C0h]@72
  ScreenController *v107; // [sp+64h] [bp-1BCh]@72
  int *v108; // [sp+68h] [bp-1B8h]@72
  int (__fastcall *v109)(void **, int *, int); // [sp+70h] [bp-1B0h]@72
  signed int (__fastcall *v110)(int); // [sp+74h] [bp-1ACh]@72
  int v111; // [sp+78h] [bp-1A8h]@72
  void *v112; // [sp+7Ch] [bp-1A4h]@33
  __int64 v113; // [sp+84h] [bp-19Ch]@33
  void *ptr; // [sp+8Ch] [bp-194h]@28
  unsigned int v115; // [sp+90h] [bp-190h]@28
  int v116; // [sp+94h] [bp-18Ch]@28
  int v117; // [sp+98h] [bp-188h]@28
  __int64 v118; // [sp+9Ch] [bp-184h]@28
  int v119; // [sp+A4h] [bp-17Ch]@28
  ScreenController *v120; // [sp+A8h] [bp-178h]@28
  _DWORD *v121; // [sp+ACh] [bp-174h]@33
  int (__fastcall *v122)(int *, int *, int); // [sp+B4h] [bp-16Ch]@28
  int *(__fastcall *v123)(int *, unsigned __int64 **); // [sp+B8h] [bp-168h]@33
  int v124; // [sp+BCh] [bp-164h]@28
  void *v125; // [sp+C0h] [bp-160h]@23
  __int64 v126; // [sp+C8h] [bp-158h]@23
  _DWORD *v127; // [sp+D0h] [bp-150h]@23
  __int64 v128; // [sp+D8h] [bp-148h]@23
  char *s; // [sp+E0h] [bp-140h]@21
  int v130; // [sp+E4h] [bp-13Ch]@23
  _DWORD *v131; // [sp+E8h] [bp-138h]@19
  __int64 v132; // [sp+F0h] [bp-130h]@19
  int v133; // [sp+F8h] [bp-128h]@13
  ScreenController *v134; // [sp+FCh] [bp-124h]@13
  int *v135; // [sp+100h] [bp-120h]@13
  int (__fastcall *v136)(void **, int *, int); // [sp+108h] [bp-118h]@13
  signed int (__fastcall *v137)(int); // [sp+10Ch] [bp-114h]@13
  int v138; // [sp+114h] [bp-10Ch]@11
  int v139; // [sp+11Ch] [bp-104h]@11
  void *v140; // [sp+120h] [bp-100h]@7
  __int64 v141; // [sp+128h] [bp-F8h]@7
  _DWORD *v142; // [sp+130h] [bp-F0h]@7
  __int64 v143; // [sp+138h] [bp-E8h]@7
  int v144; // [sp+140h] [bp-E0h]@7
  char v145; // [sp+14Ch] [bp-D4h]@4
  char v146; // [sp+150h] [bp-D0h]@4
  int v147; // [sp+154h] [bp-CCh]@4
  char v148; // [sp+158h] [bp-C8h]@4
  int v149; // [sp+15Ch] [bp-C4h]@4
  char v150; // [sp+160h] [bp-C0h]@4
  int v151; // [sp+164h] [bp-BCh]@4
  void *v152; // [sp+168h] [bp-B8h]@4
  unsigned int v153; // [sp+16Ch] [bp-B4h]@28
  int v154; // [sp+170h] [bp-B0h]@84
  int v155; // [sp+174h] [bp-ACh]@28
  __int64 v156; // [sp+178h] [bp-A8h]@28
  int v157; // [sp+180h] [bp-A0h]@97
  int v158; // [sp+190h] [bp-90h]@1
  char v159; // [sp+194h] [bp-8Ch]@1
  int v160; // [sp+198h] [bp-88h]@1
  char v161; // [sp+19Ch] [bp-84h]@1
  int v162; // [sp+1A0h] [bp-80h]@1
  char v163; // [sp+1A4h] [bp-7Ch]@1
  void *v164; // [sp+1A8h] [bp-78h]@1
  int v165; // [sp+1ACh] [bp-74h]@111
  unsigned __int64 *v166; // [sp+1B0h] [bp-70h]@52
  int v167; // [sp+1B4h] [bp-6Ch]@111
  int v168; // [sp+1C0h] [bp-60h]@112
  char v169; // [sp+1F0h] [bp-30h]@4

  v1 = this;
  sub_119C884((void **)&v158, "#command_impulse_mode");
  v159 = 0;
  sub_119C884((void **)&v160, "#command_chain_mode");
  v161 = 2;
  sub_119C884((void **)&v162, "#command_repeat_mode");
  v163 = 1;
  LODWORD(v2) = &v164;
  std::_Hashtable<std::string,std::pair<std::string const,CommandBlockMode>,std::allocator<std::pair<std::string const,CommandBlockMode>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<std::string const,CommandBlockMode> const*>(
    v2,
    (int **)&v164,
    0);
  v3 = (void *)(v162 - 12);
  if ( (int *)(v162 - 12) != &dword_28898C0 )
  {
    v75 = (unsigned int *)(v162 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
    }
    else
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = (void *)(v160 - 12);
  if ( (int *)(v160 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v160 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  v5 = (void *)(v158 - 12);
  if ( (int *)(v158 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v158 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v146 = 0;
  sub_119C884((void **)&v147, "commandBlockScreen.blockType.impulse");
  v148 = 2;
  sub_119C884((void **)&v149, "commandBlockScreen.blockType.chain");
  v150 = 1;
  sub_119C884((void **)&v151, "commandBlockScreen.blockType.repeat");
  HIDWORD(v6) = &v169;
  LODWORD(v6) = &v145;
  v95 = v6;
  LODWORD(v7) = &v152;
  std::_Hashtable<CommandBlockMode,std::pair<CommandBlockMode const,std::string>,std::allocator<std::pair<CommandBlockMode const,std::string>>,std::__detail::_Select1st,std::equal_to<CommandBlockMode>,std::hash<CommandBlockMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<CommandBlockMode const,std::string> const*>(
    v7,
    &v152,
  v8 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v151 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = (void *)(v149 - 12);
  if ( (int *)(v149 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v149 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (void *)(v147 - 12);
  if ( (int *)(v147 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v147 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  StringHash::StringHash<char [29]>(&v144, (int)"#block_type_dropdown_enabled");
  v11 = operator new(4u);
  LODWORD(v12) = sub_1157E5A;
  *v11 = v1;
  HIDWORD(v12) = sub_1157E44;
  v142 = v11;
  v143 = v12;
  v140 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v141 = v13;
  ScreenController::bindBool((int)v1, &v144, (int)&v142, (int)&v140);
  if ( (_DWORD)v141 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, char *, char *))v141)(&v140, &v140, 3, v141, &v145, &v169);
  if ( (_DWORD)v143 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v143)(
      &v142,
      3,
      v143,
      v95,
      HIDWORD(v95));
  sub_119C884((void **)&v139, "block_type_dropdown");
  sub_119C884((void **)&v138, "button.dropdown_exit");
  v14 = (unsigned __int64 *)ScreenController::_getNameRegistry(v1);
  if ( !NameRegistry::hasEntry(v14, (int **)&v138) )
    NameRegistry::registerName(v14, (int **)&v138);
  v15 = NameRegistry::getNameId(v14, (int **)&v138);
  sub_119C854(&v133, &v139);
  v134 = v1;
  v136 = 0;
  v16 = (int *)operator new(8u);
  sub_119C854(v16, &v133);
  v16[1] = (int)v134;
  v135 = v16;
  v136 = sub_1157EA0;
  v137 = sub_1157E90;
  ScreenController::registerButtonClickHandler((int)v1, v15, (int)&v135);
  if ( v136 )
    ((void (__cdecl *)(int **, int **, signed int, int (__fastcall *)(void **, int *, int), _DWORD, _DWORD))v136)(
      &v135,
      v136,
  v17 = (void *)(v133 - 12);
  if ( (int *)(v133 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v133 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  v18 = (void *)(v138 - 12);
  if ( (int *)(v138 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v138 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = (unsigned __int64 *)ScreenController::_getNameRegistry(v1);
  if ( !NameRegistry::hasEntry(v19, (int **)&v139) )
    NameRegistry::registerName(v19, (int **)&v139);
  v20 = NameRegistry::getNameId(v19, (int **)&v139);
  v21 = operator new(4u);
  LODWORD(v22) = sub_1157F4E;
  *v21 = v1;
  HIDWORD(v22) = sub_1157F40;
  v131 = v21;
  v132 = v22;
  ScreenController::registerToggleChangeEventHandler((int)v1, v20, (int)&v131);
  if ( (_DWORD)v132 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v132)(
      &v131,
      v132,
  s = (char *)&unk_28898CC;
  sub_119CAF8((const void **)&s, *(_DWORD *)(v139 - 12) + 1);
  sub_119C894((const void **)&s, "#", 1u);
  sub_119C8A4((const void **)&s, (const void **)&v139);
  v23 = s;
  v24 = strlen(s);
  for ( i = -2128831035; v24; i = 16777619 * (i ^ v26) )
    v26 = (unsigned __int8)*v23++;
    --v24;
  v130 = i;
  v27 = operator new(4u);
  LODWORD(v28) = sub_1157F94;
  *v27 = v1;
  HIDWORD(v28) = sub_1157F84;
  v127 = v27;
  v128 = v28;
  v125 = operator new(1u);
  LODWORD(v29) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v29) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v126 = v29;
  ScreenController::bindBool((int)v1, &v130, (int)&v127, (int)&v125);
  if ( (_DWORD)v126 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v126)(
      &v125,
      v126,
  if ( (_DWORD)v128 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v128)(
      &v127,
      v128,
  v30 = s - 12;
  if ( (int *)(s - 12) != &dword_28898C0 )
    v91 = (unsigned int *)(s - 4);
        v92 = __ldrex(v91);
      while ( __strex(v92 - 1, v91) );
      v92 = (*v91)--;
    if ( v92 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  StringHash::StringHash<char [34]>(&v124, (int)"#block_type_dropdown_toggle_label");
  ptr = 0;
  v115 = v153;
  v116 = 0;
  v117 = v155;
  v118 = v156;
  std::_Hashtable<CommandBlockMode,std::pair<CommandBlockMode const,std::string>,std::allocator<std::pair<CommandBlockMode const,std::string>>,std::__detail::_Select1st,std::equal_to<CommandBlockMode>,std::hash<CommandBlockMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<CommandBlockMode,std::pair<CommandBlockMode const,std::string>,std::allocator<std::pair<CommandBlockMode const,std::string>>,std::__detail::_Select1st,std::equal_to<CommandBlockMode>,std::hash<CommandBlockMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<CommandBlockMode,std::pair<CommandBlockMode const,std::string>,std::allocator<std::pair<CommandBlockMode const,std::string>>,std::__detail::_Select1st,std::equal_to<CommandBlockMode>,std::hash<CommandBlockMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<CommandBlockMode const,std::string>,true> const*)#1}>(
    (unsigned int *)&ptr,
    (int)&v152);
  v120 = v1;
  v122 = 0;
  v31 = operator new(0x20u);
  v32 = ptr;
  v33 = v115;
  v34 = v116;
  v35 = &v119 == ptr;
  v36 = v117;
  *v31 = ptr;
  v31[1] = v33;
  v31[2] = v34;
  v31[3] = v36;
  v37 = HIDWORD(v118);
  v31[4] = v118;
  v31[5] = v37;
  if ( v35 )
    v38 = (int)(v31 + 6);
    *v31 = v31 + 6;
    v31[6] = *v32;
  else
    v38 = (int)v32;
  v39 = (int)v1;
  if ( v34 )
    *(_DWORD *)(v38 + 4 * (*(_DWORD *)(v34 + 12) % v33)) = v31 + 2;
    v39 = (int)v120;
  HIDWORD(v118) = 0;
  v119 = 0;
  ptr = &v119;
  v115 = 1;
  v117 = 0;
  v31[7] = v39;
  v121 = v31;
  v122 = sub_11580A0;
  v123 = sub_1157FCC;
  v112 = operator new(1u);
  LODWORD(v40) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v40) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v113 = v40;
  ScreenController::bindString((int)v1, &v124, (int)&v121, (int)&v112);
  if ( (_DWORD)v113 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v113)(
      &v112,
      v113,
  if ( v122 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, int (__fastcall *)(int *, int *, int), _DWORD, _DWORD))v122)(
      &v121,
      v122,
  v41 = v116;
  while ( v41 )
    v44 = (void *)v41;
    v45 = *(_DWORD *)(v41 + 8);
    v41 = *(_DWORD *)v41;
    v46 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v45 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v46);
    operator delete(v44);
  _aeabi_memclr4(ptr, 4 * v115);
  if ( ptr && &v119 != ptr )
    operator delete(ptr);
  v47 = (int)v166;
  if ( v166 )
    do
      v52 = *(_BYTE **)(v47 + 4);
      v53 = strlen(*(const char **)(v47 + 4));
      for ( j = -2128831035; v53; j = 16777619 * (j ^ v55) )
        v55 = *v52++;
        --v53;
      v111 = j;
      sub_119C854(&v105, (int *)(v47 + 4));
      v106 = *(_BYTE *)(v47 + 8);
      v107 = v1;
      v109 = 0;
      v56 = (int *)operator new(0xCu);
      sub_119C854(v56, &v105);
      *((_BYTE *)v56 + 4) = v106;
      v56[2] = (int)v107;
      v108 = v56;
      v110 = sub_11581A4;
      v109 = sub_11581C4;
      v103 = 0;
      v102 = operator new(1u);
      v104 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
      v103 = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBool((int)v1, &v111, (int)&v108, (int)&v102);
      if ( v103 )
        v103(&v102, &v102, 3);
      if ( v109 )
        v109((void **)&v108, (int *)&v108, 3);
      v57 = (void *)(v105 - 12);
      if ( (int *)(v105 - 12) != &dword_28898C0 )
        v48 = (unsigned int *)(v105 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v49 = __ldrex(v48);
          while ( __strex(v49 - 1, v48) );
        }
        else
          v49 = (*v48)--;
        if ( v49 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v57);
      v58 = (unsigned __int64 *)ScreenController::_getNameRegistry(v1);
      if ( !NameRegistry::hasEntry(v58, (int **)(v47 + 4)) )
        NameRegistry::registerName(v58, (int **)(v47 + 4));
      v59 = NameRegistry::getNameId(v58, (int **)(v47 + 4));
      sub_119C854(&v96, (int *)(v47 + 4));
      v97 = *(_BYTE *)(v47 + 8);
      v98 = v1;
      v100 = 0;
      v60 = (int *)operator new(0xCu);
      sub_119C854(v60, &v96);
      *((_BYTE *)v60 + 4) = v97;
      v60[2] = (int)v98;
      v99 = v60;
      v101 = sub_1158268;
      v100 = sub_115829C;
      ScreenController::registerToggleChangeEventHandler((int)v1, v59, (int)&v99);
      if ( v100 )
        ((void (__cdecl *)(int **, int **, signed int, int (__fastcall *)(void **, int *, int), _DWORD, _DWORD))v100)(
          &v99,
          3,
          v100,
          v95,
          HIDWORD(v95));
      v61 = (void *)(v96 - 12);
      if ( (int *)(v96 - 12) != &dword_28898C0 )
        v50 = (unsigned int *)(v96 - 4);
            v51 = __ldrex(v50);
          while ( __strex(v51 - 1, v50) );
          v51 = (*v50)--;
        if ( v51 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v61);
      v47 = *(_DWORD *)v47;
    while ( v47 );
  v62 = (void *)(v139 - 12);
  if ( (int *)(v139 - 12) != &dword_28898C0 )
    v93 = (unsigned int *)(v139 - 4);
        v94 = __ldrex(v93);
      while ( __strex(v94 - 1, v93) );
      v94 = (*v93)--;
    if ( v94 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v62);
  v63 = v154;
  while ( v63 )
    v66 = (void *)v63;
    v67 = *(_DWORD *)(v63 + 8);
    v63 = *(_DWORD *)v63;
    v68 = (void *)(v67 - 12);
    if ( (int *)(v67 - 12) != &dword_28898C0 )
      v64 = (unsigned int *)(v67 - 4);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v68);
    operator delete(v66);
  _aeabi_memclr4(v152, 4 * v153);
  v154 = 0;
  v155 = 0;
  if ( v152 && &v157 != v152 )
    operator delete(v152);
  v69 = v166;
  while ( v69 )
    v72 = v69;
    v73 = *v69 >> 32;
    v69 = (unsigned __int64 *)*v69;
    v74 = (void *)(v73 - 12);
    if ( (int *)(v73 - 12) != &dword_28898C0 )
      v70 = (unsigned int *)(v73 - 4);
          v71 = __ldrex(v70);
        while ( __strex(v71 - 1, v70) );
        v71 = (*v70)--;
      if ( v71 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v74);
    operator delete(v72);
  _aeabi_memclr4(v164, 4 * v165);
  v166 = 0;
  v167 = 0;
  if ( v164 )
    if ( &v168 != v164 )
      operator delete(v164);
}


void *__fastcall CommandBlockScreenController::_getLastPerformedCommandBlockRedstoneModeString(CommandBlockScreenController *this, int a2)
{
  int v2; // r5@1
  void **v3; // r4@1
  int v4; // r0@3
  void *result; // r0@4

  v2 = a2;
  v3 = (void **)this;
  if ( *(_BYTE *)(a2 + 476) && *(_BYTE *)(*(int (**)(void))(**(_DWORD **)(a2 + 472) + 52))() )
  {
    v4 = *(_DWORD *)(v2 + 472);
    *v3 = &unk_28898CC;
    if ( (*(int (**)(void))(*(_DWORD *)v4 + 76))() == 1 )
      result = sub_119CAD8(v3, "commandBlockScreen.redstone.needs_redstone", (_BYTE *)0x2A);
    else
      result = sub_119CAD8(v3, "commandBlockScreen.redstone.always_on", (_BYTE *)0x25);
  }
  else
    result = sub_119C854((int *)v3, (int *)&Util::EMPTY_STRING);
  return result;
}


int __fastcall CommandBlockScreenController::CommandBlockScreenController(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r8@1
  int v6; // r0@1
  int v7; // r6@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  int v10; // r5@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r7@14
  unsigned int v14; // r0@16
  MinecraftScreenModel *v15; // r1@21
  int v16; // r1@21
  int v17; // r0@21
  int v19; // [sp+8h] [bp-30h]@21
  int v20; // [sp+Ch] [bp-2Ch]@21
  int v21; // [sp+10h] [bp-28h]@21
  int v22; // [sp+14h] [bp-24h]@21
  int v23; // [sp+18h] [bp-20h]@1
  int v24; // [sp+1Ch] [bp-1Ch]@1

  v4 = a1;
  v23 = *(_DWORD *)a2;
  v5 = a4;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = a3;
  v24 = v6;
  if ( v6 )
  {
    v8 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  BlockScreenController::BlockScreenController(v4, (int)&v23, a3, a4);
  v10 = v24;
  if ( v24 )
    v11 = (unsigned int *)(v24 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  *(_DWORD *)v4 = &off_26E1420;
  *(_DWORD *)(v4 + 464) = 0;
  *(_DWORD *)(v4 + 472) = 0;
  *(_DWORD *)(v4 + 477) = 0;
  v15 = *(MinecraftScreenModel **)(v4 + 424);
  v19 = 0;
  v20 = 0;
  v21 = 0;
  ClientInstanceScreenModel::createCommandBlockManager(&v22, v15, 1, (int)&v19, v7, v5);
  v16 = v22;
  v22 = 0;
  v17 = *(_DWORD *)(v4 + 472);
  *(_DWORD *)(v4 + 472) = v16;
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
    if ( v22 )
      (*(void (**)(void))(*(_DWORD *)v22 + 4))();
  CommandBlockScreenController::_registerBindings((CommandBlockScreenController *)v4);
  CommandBlockScreenController::_registerEventHandlers((CommandBlockScreenController *)v4);
  CommandBlockScreenController::_registerBlockTypeDropdown((CommandBlockScreenController *)v4);
  CommandBlockScreenController::_registerConditionDropdown((CommandBlockScreenController *)v4);
  CommandBlockScreenController::_registerRedstoneDropdown((CommandBlockScreenController *)v4);
  return v4;
}


void __fastcall CommandBlockScreenController::_registerBindings(CommandBlockScreenController *this)
{
  CommandBlockScreenController::_registerBindings(this);
}
