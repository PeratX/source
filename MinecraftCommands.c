

int __fastcall MinecraftCommands::executeCommand(int a1, int a2, int a3, char a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, void *a34, int a35, int a36, int a37, char a38)
{
  return MinecraftCommands::executeCommand(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38);
}


int __fastcall MinecraftCommands::setOutputSender(int *a1, int *a2)
{
  int *v2; // r2@1
  int v3; // r3@1
  int result; // r0@1

  v2 = a1;
  v3 = *a2;
  *a2 = 0;
  result = *a1;
  *v2 = v3;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


signed int __fastcall MinecraftCommands::getOutputType(MinecraftCommands *this, const CommandOrigin *a2)
{
  MinecraftCommands *v2; // r4@1
  int v3; // r0@1
  signed int v4; // r5@2
  Level *v5; // r0@5
  Level *v6; // r6@5
  unsigned __int64 *v7; // r0@6
  unsigned __int64 *v8; // r0@8
  signed int v9; // r6@8

  v2 = this;
  v3 = (*(int (**)(void))(*(_DWORD *)this + 72))();
  if ( (v3 | 1) == 5 )
  {
    v4 = 4;
  }
  else if ( v3 == 6 )
    v4 = 3;
  else
    v5 = (Level *)(*(int (__fastcall **)(MinecraftCommands *))(*(_DWORD *)v2 + 24))(v2);
    v6 = v5;
    if ( v5 )
    {
      v7 = (unsigned __int64 *)Level::getGameRules(v5);
      v4 = 2;
      if ( GameRules::getBool(v7, (int **)&GameRules::SEND_COMMAND_FEEDBACK) )
        v4 = 3;
      v8 = (unsigned __int64 *)Level::getGameRules(v6);
      v9 = 1;
      if ( GameRules::getBool(v8, (int **)&GameRules::COMMAND_BLOCK_OUTPUT) )
        v9 = 3;
    }
    else
      v4 = 3;
      v9 = 3;
    if ( (*(int (__fastcall **)(MinecraftCommands *))(*(_DWORD *)v2 + 72))(v2) == 1 )
      v4 = v9;
    else if ( (*(int (__fastcall **)(MinecraftCommands *))(*(_DWORD *)v2 + 72))(v2) == 2 )
  return v4;
}


int __fastcall MinecraftCommands::registerChatPermissionsCallback(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 16;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 16);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 24);
  v10 = v13;
  *(_DWORD *)(v4 + 24) = v8;
  v14 = *(_DWORD *)(v4 + 28);
  *(_DWORD *)(v4 + 28) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


int __fastcall MinecraftCommands::requestCommandExecution(int a1, int *a2, int *a3, int a4, int a5)
{
  int v5; // r10@1
  int *v6; // r5@1
  char v7; // r3@4
  unsigned int *v8; // r0@6
  unsigned int v9; // r1@8
  Level *v10; // r0@10
  Level *v11; // r7@10
  int v12; // r0@13
  int v13; // r4@13
  void *v14; // r0@13
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  int v17; // r1@19
  MinecraftCommands *v18; // r0@20
  const CommandOrigin *v19; // r1@20
  char *v20; // r5@21
  int v21; // r7@21
  unsigned int *v22; // r2@23
  signed int v23; // r1@25
  int *v24; // r0@31
  void *v25; // r0@36
  void *v26; // r0@37
  void *v27; // r0@38
  int v28; // r0@39
  const CommandOrigin *v29; // r0@40
  int v30; // r0@43
  int v31; // r1@45
  int v32; // r5@47
  unsigned int *v33; // r1@48
  unsigned int v34; // r0@50
  unsigned int *v35; // r6@54
  unsigned int v36; // r0@56
  MinecraftCommands *v37; // r0@58
  const CommandOrigin *v38; // r1@58
  void *v39; // r5@59
  void *v40; // r7@59
  unsigned int *v41; // r2@61
  signed int v42; // r1@63
  int *v43; // r0@69
  void *v44; // r0@74
  int v45; // r0@75
  const CommandOrigin *v46; // r0@76
  void (__fastcall *v47)(int); // r1@81
  int v48; // r5@86
  unsigned int *v49; // r1@87
  unsigned int v50; // r0@89
  unsigned int *v51; // r6@93
  unsigned int v52; // r0@95
  unsigned int *v54; // r2@101
  signed int v55; // r1@103
  unsigned int *v56; // r2@105
  signed int v57; // r1@107
  unsigned int *v58; // r2@109
  signed int v59; // r1@111
  unsigned int *v60; // r2@125
  signed int v61; // r1@127
  int v62; // [sp+0h] [bp-D8h]@1
  int v63; // [sp+4h] [bp-D4h]@0
  int v64; // [sp+8h] [bp-D0h]@21
  int v65; // [sp+Ch] [bp-CCh]@21
  int v66; // [sp+10h] [bp-C8h]@47
  char *v67; // [sp+14h] [bp-C4h]@21
  char *v68; // [sp+18h] [bp-C0h]@21
  char *v69; // [sp+1Ch] [bp-BCh]@21
  int v70; // [sp+20h] [bp-B8h]@47
  int v71; // [sp+24h] [bp-B4h]@21
  int v72; // [sp+28h] [bp-B0h]@21
  int v73; // [sp+2Ch] [bp-ACh]@43
  void *ptr; // [sp+30h] [bp-A8h]@41
  int v75; // [sp+34h] [bp-A4h]@41
  int v76; // [sp+38h] [bp-A0h]@47
  int v77; // [sp+3Ch] [bp-9Ch]@47
  void **v78; // [sp+40h] [bp-98h]@13
  int v79; // [sp+44h] [bp-94h]@47
  int v80; // [sp+48h] [bp-90h]@47
  int v81; // [sp+4Ch] [bp-8Ch]@47
  int v82; // [sp+50h] [bp-88h]@13
  int v83; // [sp+54h] [bp-84h]@47
  int v84; // [sp+58h] [bp-80h]@13
  int v85; // [sp+5Ch] [bp-7Ch]@47
  int v86; // [sp+60h] [bp-78h]@47
  int v87; // [sp+64h] [bp-74h]@47
  int v88; // [sp+68h] [bp-70h]@47
  int v89; // [sp+6Ch] [bp-6Ch]@47
  int v90; // [sp+70h] [bp-68h]@47
  void *v91; // [sp+74h] [bp-64h]@5
  int v92; // [sp+78h] [bp-60h]@5
  __int64 v93; // [sp+7Ch] [bp-5Ch]@47
  int v94; // [sp+84h] [bp-54h]@47
  int v95; // [sp+8Ch] [bp-4Ch]@59
  char v96; // [sp+90h] [bp-48h]@59
  int v97; // [sp+94h] [bp-44h]@79
  void *v98; // [sp+98h] [bp-40h]@77
  int v99; // [sp+9Ch] [bp-3Ch]@77
  CommandContext *v100; // [sp+A8h] [bp-30h]@1
  int v101; // [sp+ACh] [bp-2Ch]@5
  int v102; // [sp+B0h] [bp-28h]@1
  char v103; // [sp+B4h] [bp-24h]@1

  v5 = a1;
  v102 = a4;
  v6 = a3;
  std::__shared_ptr<CommandContext,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<CommandContext>,std::string const&,std::unique_ptr<CommandOrigin,std::default_delete<std::default_delete>>,int &>(
    (int)&v100,
    (int)&v103,
    a3,
    a2,
    &v102);
  if ( CommandRegistry::isCommandOfType(*(_DWORD *)(v5 + 4), v6, 16) == 1
    && *(_DWORD *)(v5 + 24)
    && !(*(int (__fastcall **)(int))(v5 + 28))(v5 + 16) )
  {
    if ( a5 )
    {
      v31 = 0;
    }
    else
      v37 = (MinecraftCommands *)CommandContext::getCommandOrigin(v100);
      v31 = MinecraftCommands::getOutputType(v37, v38);
    CommandOutput::CommandOutput((int)&v96, v31);
    sub_21E94B4((void **)&v95, "permissions.Communications");
    v93 = 0LL;
    v94 = 0;
    CommandOutput::error(&v96, &v95, (unsigned __int64 *)&v93);
    v40 = (void *)HIDWORD(v93);
    v39 = (void *)v93;
    if ( (_DWORD)v93 != HIDWORD(v93) )
      do
      {
        v43 = (int *)(*(_DWORD *)v39 - 12);
        if ( v43 != &dword_28898C0 )
        {
          v41 = (unsigned int *)(*(_DWORD *)v39 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v42 = __ldrex(v41);
            while ( __strex(v42 - 1, v41) );
          }
          else
            v42 = (*v41)--;
          if ( v42 <= 0 )
            j_j_j_j__ZdlPv_9(v43);
        }
        v39 = (char *)v39 + 8;
      }
      while ( v39 != v40 );
      v39 = (void *)v93;
    if ( v39 )
      operator delete(v39);
    v44 = (void *)(v95 - 12);
    if ( (int *)(v95 - 12) != &dword_28898C0 )
      v60 = (unsigned int *)(v95 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
      else
        v61 = (*v60)--;
      if ( v61 <= 0 )
        j_j_j_j__ZdlPv_9(v44);
    v45 = MCRESULT::getFullCode((MCRESULT *)&MCRESULT_ChatMuted);
    CommandOutput::set<int>((int)&v96, "statusCode", v45);
    if ( !CommandOutput::empty((CommandOutput *)&v96) )
      v46 = (const CommandOrigin *)CommandContext::getCommandOrigin(v100);
      MinecraftCommands::handleOutput((MinecraftCommands *)v5, v46, (const CommandOutput *)&v96);
    v13 = *(_DWORD *)&MCRESULT_ChatMuted;
    std::_Destroy_aux<false>::__destroy<CommandOutputMessage *>((int)v98, v99);
    if ( v98 )
      operator delete(v98);
    v30 = v97;
  }
  else
    if ( CommandRegistry::getCommandStatus(*(_DWORD *)(v5 + 4), v6) == 1 )
      v91 = (void *)v100;
      v92 = v101;
      if ( v101 )
        v8 = (unsigned int *)(v101 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 + 1, v8) );
        else
          ++*v8;
      v13 = MinecraftCommands::executeCommand(
              v5,
              (int)&v91,
              0,
              v7,
              v62,
              v63,
              v64,
              v65,
              v66,
              (int)v67,
              (int)v68,
              (int)v69,
              v70,
              v71,
              v72,
              v73,
              (int)ptr,
              v75,
              v76,
              v77,
              (int)v78,
              v79,
              v80,
              v81,
              v82,
              v83,
              v84,
              v85,
              v86,
              v87,
              v88,
              v89,
              v90,
              v91,
              v92,
              v93,
              SHIDWORD(v93),
              v94);
      v32 = v92;
      if ( v92 )
        v33 = (unsigned int *)(v92 + 4);
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
          v34 = (*v33)--;
        if ( v34 == 1 )
          v35 = (unsigned int *)(v32 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 8))(v32);
              v36 = __ldrex(v35);
            while ( __strex(v36 - 1, v35) );
            v36 = (*v35)--;
          if ( v36 == 1 )
            v47 = *(void (__fastcall **)(int))(*(_DWORD *)v32 + 12);
            v30 = v32;
            goto LABEL_85;
      goto LABEL_86;
    v10 = (Level *)Minecraft::getLevel(*(Minecraft **)(v5 + 12));
    v11 = v10;
    if ( v10 && Level::isClientSide(v10) == 1 && Level::getPacketSender(v11) )
      CommandRequestPacket::CommandRequestPacket((int)&v78, (int *)v100, a5);
      v12 = Level::getPacketSender(v11);
      (*(void (**)(void))(*(_DWORD *)v12 + 8))();
      v13 = *(_DWORD *)&MCRESULT_CommandRequestInitiated;
      v78 = &off_26E9CE0;
      CommandOriginData::~CommandOriginData((CommandOriginData *)&v84);
      v14 = (void *)(v82 - 12);
      if ( (int *)(v82 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v82 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      v17 = 0;
      v18 = (MinecraftCommands *)CommandContext::getCommandOrigin(v100);
      v17 = MinecraftCommands::getOutputType(v18, v19);
    CommandOutput::CommandOutput((int)&v72, v17);
    sub_21E94B4((void **)&v71, "commands.generic.unknown");
    CommandRegistry::getCommandName((void **)&v64, *(_DWORD *)(v5 + 4), v6);
    CommandOutputParameter::CommandOutputParameter(&v65, &v64);
    v67 = 0;
    v68 = 0;
    v69 = 0;
    v67 = (char *)operator new(8u);
    v69 = v67 + 8;
    v68 = (char *)std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                    (int)&v65,
                    (int)&v67,
                    (int)v67);
    CommandOutput::error(&v72, &v71, (unsigned __int64 *)&v67);
    v21 = (int)v68;
    v20 = v67;
    if ( v67 != v68 )
        v24 = (int *)(*(_DWORD *)v20 - 12);
        if ( v24 != &dword_28898C0 )
          v22 = (unsigned int *)(*(_DWORD *)v20 - 4);
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
            v23 = (*v22)--;
          if ( v23 <= 0 )
            j_j_j_j__ZdlPv_9(v24);
        v20 += 8;
      while ( v20 != (char *)v21 );
      v20 = v67;
    if ( v20 )
      operator delete(v20);
    v25 = (void *)(v65 - 12);
    if ( (int *)(v65 - 12) != &dword_28898C0 )
      v54 = (unsigned int *)(v65 - 4);
          v55 = __ldrex(v54);
        while ( __strex(v55 - 1, v54) );
        v55 = (*v54)--;
      if ( v55 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    v26 = (void *)(v64 - 12);
    if ( (int *)(v64 - 12) != &dword_28898C0 )
      v56 = (unsigned int *)(v64 - 4);
          v57 = __ldrex(v56);
        while ( __strex(v57 - 1, v56) );
        v57 = (*v56)--;
      if ( v57 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    v27 = (void *)(v71 - 12);
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v58 = (unsigned int *)(v71 - 4);
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
        v59 = (*v58)--;
      if ( v59 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    v28 = MCRESULT::getFullCode((MCRESULT *)&MCRESULT_FailedToParseCommand);
    CommandOutput::set<int>((int)&v72, "statusCode", v28);
    if ( !CommandOutput::empty((CommandOutput *)&v72) )
      v29 = (const CommandOrigin *)CommandContext::getCommandOrigin(v100);
      MinecraftCommands::handleOutput((MinecraftCommands *)v5, v29, (const CommandOutput *)&v72);
    v13 = *(_DWORD *)&MCRESULT_CommandNotFound;
    std::_Destroy_aux<false>::__destroy<CommandOutputMessage *>((int)ptr, v75);
    if ( ptr )
      operator delete(ptr);
    v30 = v73;
  if ( v30 )
    v47 = *(void (__fastcall **)(int))(*(_DWORD *)v30 + 4);
LABEL_85:
    v47(v30);
LABEL_86:
  v48 = v101;
  if ( v101 )
    v49 = (unsigned int *)(v101 + 4);
    if ( &pthread_create )
      __dmb();
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 == 1 )
      v51 = (unsigned int *)(v48 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v48 + 8))(v48);
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
        v52 = (*v51)--;
      if ( v52 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v48 + 12))(v48);
  return v13;
}


RakNet *__fastcall MinecraftCommands::handleOutput(MinecraftCommands *this, const CommandOrigin *a2, const CommandOutput *a3)
{
  MinecraftCommands *v3; // r6@1
  const CommandOrigin *v4; // r5@1
  CommandOutput *v5; // r10@1
  int v6; // r7@1
  int v7; // r0@1
  Level *v8; // r0@5
  int v9; // r4@5
  void (__fastcall *v10)(int, int, void ***, int); // r11@5
  int v11; // r0@5
  RakNet *result; // r0@10
  void **v13; // [sp+0h] [bp-F8h]@5
  int v14; // [sp+10h] [bp-E8h]@9
  int v15; // [sp+24h] [bp-D4h]@7
  void *ptr; // [sp+28h] [bp-D0h]@5
  int v17; // [sp+2Ch] [bp-CCh]@5
  char v18; // [sp+38h] [bp-C0h]@1
  int v19; // [sp+C8h] [bp-30h]@1
  RakNet *v20; // [sp+D0h] [bp-28h]@1

  v3 = this;
  v4 = a2;
  v5 = a3;
  v20 = _stack_chk_guard;
  v6 = (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)a2 + 60))(a2);
  v7 = Minecraft::getNetworkHandler(*((Minecraft **)v3 + 3));
  NetworkHandler::getLocalNetworkId((NetworkHandler *)&v18, v7);
  if ( *(_DWORD *)(v6 + 144) == v19
    && NetworkIdentifier::equalsTypeData((NetworkIdentifier *)v6, (const NetworkIdentifier *)&v18)
    || NetworkIdentifier::isUnassigned((NetworkIdentifier *)v6) == 1 )
  {
    (*(void (**)(void))(**(_DWORD **)v3 + 8))();
  }
  else
    v8 = (Level *)Minecraft::getLevel(*((Minecraft **)v3 + 3));
    v9 = Level::getPacketSender(v8);
    v10 = *(void (__fastcall **)(int, int, void ***, int))(*(_DWORD *)v9 + 16);
    CommandOutputPacket::CommandOutputPacket((int)&v13, (int)v4, (int)v5);
    v11 = (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v4 + 64))(v4);
    v10(v9, v6, &v13, v11);
    v13 = &off_26E9CB8;
    std::_Destroy_aux<false>::__destroy<CommandOutputMessage *>((int)ptr, v17);
    if ( ptr )
      operator delete(ptr);
    if ( v15 )
      (*(void (**)(void))(*(_DWORD *)v15 + 4))();
    v15 = 0;
    CommandOriginData::~CommandOriginData((CommandOriginData *)&v14);
  CommandOutputSender::sendToAdmins(*(_DWORD *)v3, (int)v4, v5, *((_BYTE *)v3 + 8));
  result = (RakNet *)(_stack_chk_guard - v20);
  if ( _stack_chk_guard != v20 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall MinecraftCommands::executeCommand(int a1, int a2, int a3, char a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, void *a34, int a35, int a36, int a37, char a38)
{
  CommandContext **v38; // r10@1
  int v39; // r8@1
  int v40; // r4@1
  int v41; // r0@1
  MinecraftCommands *v42; // r0@1
  const CommandOrigin *v43; // r1@1
  int v44; // r6@1
  int v45; // r1@2
  Level *v46; // r0@4
  Command *v47; // r6@8
  const CommandOrigin *v48; // r0@9
  int v49; // r0@9
  char *v50; // r1@9
  int v51; // r0@12
  const CommandOrigin *v52; // r0@12
  int v53; // r0@13
  int v54; // r10@13
  int *v55; // r5@14
  int *v56; // r6@14 OVERLAPPED
  unsigned int *v57; // r2@16
  signed int v58; // r1@18
  void *v59; // r0@27
  int *v60; // r5@29 OVERLAPPED
  int v61; // r0@31
  __int64 v62; // r4@31
  unsigned int *v63; // r2@33
  signed int v64; // r1@35
  int *v65; // r0@41
  void *v66; // r0@46
  const CommandOrigin *v67; // r0@47
  unsigned int *v68; // r2@48
  signed int v69; // r1@50
  int *v70; // r0@56
  int *v71; // r0@61
  int v72; // r0@61
  const CommandOrigin *v73; // r0@62
  void *v74; // r5@63
  int v75; // r7@63
  unsigned int *v76; // r2@65
  signed int v77; // r1@67
  int *v78; // r0@73
  unsigned int *v80; // r2@84
  signed int v81; // r1@86
  int v82; // [sp+8h] [bp-D8h]@11
  int v83; // [sp+Ch] [bp-D4h]@16
  int *v84; // [sp+14h] [bp-CCh]@14
  int *v85; // [sp+18h] [bp-C8h]@14
  void *v86; // [sp+20h] [bp-C0h]@14
  void *v87; // [sp+24h] [bp-BCh]@14
  void *v88; // [sp+28h] [bp-B8h]@14
  Command *v89; // [sp+2Ch] [bp-B4h]@8
  char v90; // [sp+30h] [bp-B0h]@7
  __int64 v91; // [sp+8Ch] [bp-54h]@31
  int v92; // [sp+94h] [bp-4Ch]@31
  int v93; // [sp+9Ch] [bp-44h]@31
  char v94; // [sp+A0h] [bp-40h]@4
  int v95; // [sp+A4h] [bp-3Ch]@81
  void *ptr; // [sp+A8h] [bp-38h]@79
  int v97; // [sp+ACh] [bp-34h]@79

  v38 = (CommandContext **)a2;
  v39 = a1;
  v40 = a3;
  v41 = CommandContext::getCommandOrigin(*(CommandContext **)a2);
  v42 = (MinecraftCommands *)(*(int (**)(void))(*(_DWORD *)v41 + 68))();
  v44 = (int)v42;
  if ( v40 )
    v45 = 0;
  else
    v45 = MinecraftCommands::getOutputType(v42, v43);
  CommandOutput::CommandOutput((int)&v94, v45);
  v46 = (Level *)Minecraft::getLevel(*(Minecraft **)(v39 + 12));
  if ( v46 && !Level::hasCommandsEnabled(v46) && (*(int (__fastcall **)(int))(*(_DWORD *)v44 + 72))(v44) != 6 )
  {
    v61 = MCRESULT::getFullCode((MCRESULT *)&MCRESULT_CommandsDisabled);
    CommandOutput::set<int>((int)&v94, "statusCode", v61);
    CommandOutput::set<char const*>((int)&v94, "statusMessage", "commands.generic.disabled");
    sub_21E94B4((void **)&v93, "commands.generic.disabled");
    v91 = 0LL;
    v92 = 0;
    CommandOutput::error(&v94, &v93, (unsigned __int64 *)&v91);
    v62 = v91;
    if ( (_DWORD)v91 != HIDWORD(v91) )
    {
      do
      {
        v65 = (int *)(*(_DWORD *)v62 - 12);
        if ( v65 != &dword_28898C0 )
        {
          v63 = (unsigned int *)(*(_DWORD *)v62 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v64 = __ldrex(v63);
            while ( __strex(v64 - 1, v63) );
          }
          else
            v64 = (*v63)--;
          if ( v64 <= 0 )
            j_j_j_j__ZdlPv_9(v65);
        }
        LODWORD(v62) = v62 + 8;
      }
      while ( (_DWORD)v62 != HIDWORD(v62) );
      LODWORD(v62) = v91;
    }
    if ( (_DWORD)v62 )
      operator delete((void *)v62);
    v66 = (void *)(v93 - 12);
    if ( (int *)(v93 - 12) != &dword_28898C0 )
      v80 = (unsigned int *)(v93 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v81 = __ldrex(v80);
        while ( __strex(v81 - 1, v80) );
      else
        v81 = (*v80)--;
      if ( v81 <= 0 )
        j_j_j_j__ZdlPv_9(v66);
    v67 = (const CommandOrigin *)CommandContext::getCommandOrigin(*v38);
    MinecraftCommands::handleOutput((MinecraftCommands *)v39, v67, (const CommandOutput *)&v94);
    v54 = *(_DWORD *)&MCRESULT_CommandsDisabled;
  }
    CommandRegistry::Parser::Parser(
      (CommandRegistry::Parser *)&v90,
      *(const CommandRegistry **)(v39 + 4),
      *((_DWORD *)*v38 + 2));
    if ( CommandRegistry::Parser::parse((int)&v90, (int *)*v38) == 1
      && (CommandRegistry::Parser::createCommand((CommandRegistry::Parser *)&v89, (const CommandOrigin *)&v90, v44),
          v47 = v89,
          v89 = 0,
          v47) )
      v48 = (const CommandOrigin *)CommandContext::getCommandOrigin(*v38);
      Command::run(v47, v48, (CommandOutput *)&v94);
      v49 = CommandOutput::getSuccessCount((CommandOutput *)&v94);
      v50 = &MCRESULT_ExecutionFail;
      if ( v49 > 0 )
        v50 = &MCRESULT_Success;
      v82 = *(_DWORD *)v50;
      if ( !CommandOutput::empty((CommandOutput *)&v94) )
        v51 = MCRESULT::getFullCode((MCRESULT *)&v82);
        CommandOutput::set<int>((int)&v94, "statusCode", v51);
        v52 = (const CommandOrigin *)CommandContext::getCommandOrigin(*v38);
        MinecraftCommands::handleOutput((MinecraftCommands *)v39, v52, (const CommandOutput *)&v94);
      v53 = CommandOutput::getSuccessCount((CommandOutput *)&v94);
      CommandOutput::set<int>((int)&v94, "successCount", v53);
      v54 = v82;
      (*(void (__fastcall **)(Command *))(*(_DWORD *)v47 + 4))(v47);
    else
      v86 = 0;
      v87 = 0;
      v88 = 0;
      CommandRegistry::Parser::getErrorParams((CommandRegistry::Parser *)&v84, (int)&v90);
      v55 = v85;
      v56 = v84;
      if ( v84 != v85 )
          CommandOutputParameter::CommandOutputParameter(&v83, v56);
          if ( v87 == v88 )
            std::vector<CommandOutputParameter,std::allocator<CommandOutputParameter>>::_M_emplace_back_aux<CommandOutputParameter>(
              (unsigned __int64 *)&v86,
              (int)&v83);
            CommandOutputParameter::CommandOutputParameter((int)v87, (int)&v83);
            v87 = (char *)v87 + 8;
          v59 = (void *)(v83 - 12);
          if ( (int *)(v83 - 12) != &dword_28898C0 )
            v57 = (unsigned int *)(v83 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v58 = __ldrex(v57);
              while ( __strex(v58 - 1, v57) );
            }
            else
              v58 = (*v57)--;
            if ( v58 <= 0 )
              j_j_j_j__ZdlPv_9(v59);
          ++v56;
        while ( v56 != v55 );
        *(_QWORD *)(&v56 - 1) = *(_QWORD *)&v84;
        if ( v84 != v85 )
          do
            v70 = (int *)(*v60 - 12);
            if ( v70 != &dword_28898C0 )
              v68 = (unsigned int *)(*v60 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v69 = __ldrex(v68);
                while ( __strex(v69 - 1, v68) );
              }
              else
                v69 = (*v68)--;
              if ( v69 <= 0 )
                j_j_j_j__ZdlPv_9(v70);
            ++v60;
          while ( v60 != v56 );
          v56 = v84;
      if ( v56 )
        operator delete(v56);
      v71 = (int *)CommandRegistry::Parser::getErrorMessage((CommandRegistry::Parser *)&v90);
      CommandOutput::error(&v94, v71, (unsigned __int64 *)&v86);
      v72 = MCRESULT::getFullCode((MCRESULT *)&MCRESULT_FailedToParseCommand);
      CommandOutput::set<int>((int)&v94, "statusCode", v72);
        v73 = (const CommandOrigin *)CommandContext::getCommandOrigin(*v38);
        MinecraftCommands::handleOutput((MinecraftCommands *)v39, v73, (const CommandOutput *)&v94);
      v75 = (int)v87;
      v74 = v86;
      v54 = *(_DWORD *)&MCRESULT_FailedToParseCommand;
      if ( v86 != v87 )
          v78 = (int *)(*(_DWORD *)v74 - 12);
          if ( v78 != &dword_28898C0 )
            v76 = (unsigned int *)(*(_DWORD *)v74 - 4);
                v77 = __ldrex(v76);
              while ( __strex(v77 - 1, v76) );
              v77 = (*v76)--;
            if ( v77 <= 0 )
              j_j_j_j__ZdlPv_9(v78);
          v74 = (char *)v74 + 8;
        while ( v74 != (void *)v75 );
        v74 = v86;
      if ( v74 )
        operator delete(v74);
    CommandRegistry::Parser::~Parser((CommandRegistry::Parser *)&v90);
  std::_Destroy_aux<false>::__destroy<CommandOutputMessage *>((int)ptr, v97);
  if ( ptr )
    operator delete(ptr);
  if ( v95 )
    (*(void (**)(void))(*(_DWORD *)v95 + 4))();
  return v54;
}


_DWORD *__fastcall MinecraftCommands::MinecraftCommands(_DWORD *a1, int a2, int a3)
{
  _DWORD *v3; // r11@1
  int v4; // r4@1
  int v5; // r5@1
  void *v6; // r6@1
  void *v7; // r6@1
  int v8; // r0@1
  _DWORD *v9; // r0@3
  int v10; // r4@5
  void *v11; // r0@5
  int v12; // r4@6
  void *v13; // r4@6
  void *v14; // r6@6
  unsigned int *v15; // r2@8
  signed int v16; // r1@10
  int *v17; // r0@16
  void *v18; // r0@21
  ItemInstance *v19; // r5@22
  int v20; // r10@22
  void **v21; // r4@23
  unsigned int *v22; // r2@24
  signed int v23; // r1@26
  int v24; // r0@32
  void *v25; // r0@33
  unsigned int *v26; // r2@34
  void **v27; // r12@35
  signed int v28; // r1@36
  int v29; // r9@48
  int v30; // r8@48
  char *v31; // r0@51
  int i; // r6@53
  unsigned int v33; // r0@55
  unsigned int v34; // r2@57
  unsigned int v35; // r3@57
  void *v36; // r0@58
  int v37; // r7@60
  int v38; // r4@60
  char *v39; // r0@63
  unsigned int *v40; // r2@66
  signed int v41; // r1@68
  unsigned int *v42; // r2@74
  signed int v43; // r1@76
  unsigned int v44; // r4@82
  void *v45; // r0@82
  int v46; // r5@83
  void *v47; // r4@83
  int v48; // r6@83
  unsigned int *v49; // r2@85
  signed int v50; // r1@87
  int *v51; // r0@93
  void *v52; // r0@98
  void *v53; // r0@99
  void *v54; // r0@100
  void *v55; // r0@101
  signed int v56; // r7@102
  unsigned int *v57; // r2@103
  signed int v58; // r1@105
  unsigned int *v59; // r2@107
  signed int v60; // r1@109
  char *v61; // r0@119
  char **v62; // r1@119
  char **v63; // r0@120
  char *v64; // r1@120
  char *v65; // r0@122
  char *v66; // r0@123
  int v67; // r4@125
  void *v68; // r0@125
  char **v69; // r4@126
  char **v70; // r6@126
  unsigned int *v71; // r2@128
  signed int v72; // r1@130
  int *v73; // r0@136
  _BYTE *v74; // r0@141
  int *v75; // r4@142
  int *v76; // r6@142
  unsigned int *v77; // r2@144
  signed int v78; // r1@146
  int *v79; // r0@152
  void *v80; // r4@157
  void *v81; // r6@157
  unsigned int *v82; // r2@159
  signed int v83; // r1@161
  int *v84; // r0@167
  unsigned int *v86; // r2@173
  signed int v87; // r1@175
  unsigned int *v88; // r2@177
  signed int v89; // r1@179
  unsigned int *v90; // r2@189
  signed int v91; // r1@191
  unsigned int *v92; // r2@193
  signed int v93; // r1@195
  unsigned int *v94; // r2@197
  signed int v95; // r1@199
  unsigned int *v96; // r2@201
  signed int v97; // r1@203
  unsigned int *v98; // r2@205
  signed int v99; // r1@207
  unsigned int *v100; // r2@229
  signed int v101; // r1@231
  unsigned int *v102; // r2@233
  signed int v103; // r1@235
  int v104; // [sp+10h] [bp-120h]@125
  int v105; // [sp+14h] [bp-11Ch]@119
  unsigned int v106; // [sp+18h] [bp-118h]@119
  char *v107; // [sp+1Ch] [bp-114h]@107
  char *v108; // [sp+20h] [bp-110h]@119
  char v109; // [sp+24h] [bp-10Ch]@119
  char **v110; // [sp+28h] [bp-108h]@102
  char **v111; // [sp+2Ch] [bp-104h]@102
  char **v112; // [sp+30h] [bp-100h]@102
  int v113; // [sp+34h] [bp-FCh]@83
  int v114; // [sp+38h] [bp-F8h]@83
  int v115; // [sp+3Ch] [bp-F4h]@83
  int v116; // [sp+40h] [bp-F0h]@83
  int v117; // [sp+44h] [bp-ECh]@83
  int v118; // [sp+48h] [bp-E8h]@83
  void *v119; // [sp+4Ch] [bp-E4h]@83
  int v120; // [sp+50h] [bp-E0h]@83
  char *v121; // [sp+54h] [bp-DCh]@83
  int v122; // [sp+5Ch] [bp-D4h]@83
  int v123; // [sp+64h] [bp-CCh]@82
  __int16 v124; // [sp+6Ah] [bp-C6h]@60
  char v125; // [sp+6Ch] [bp-C4h]@59
  char v126; // [sp+70h] [bp-C0h]@59
  int v127; // [sp+74h] [bp-BCh]@58
  char *v128; // [sp+78h] [bp-B8h]@55
  _BYTE *v129; // [sp+80h] [bp-B0h]@53
  int v130; // [sp+84h] [bp-ACh]@48
  char v131; // [sp+88h] [bp-A8h]@47
  char v132; // [sp+8Ch] [bp-A4h]@47
  int v133; // [sp+90h] [bp-A0h]@23
  int v134; // [sp+94h] [bp-9Ch]@33
  char *v135; // [sp+98h] [bp-98h]@24
  char v136; // [sp+9Ch] [bp-94h]@47
  int v137; // [sp+A0h] [bp-90h]@22
  int v138; // [sp+A4h] [bp-8Ch]@22
  int *v139; // [sp+A8h] [bp-88h]@22
  int *v140; // [sp+ACh] [bp-84h]@22
  int v141; // [sp+B0h] [bp-80h]@22
  int *v142; // [sp+B4h] [bp-7Ch]@22
  int *v143; // [sp+B8h] [bp-78h]@22
  int *v144; // [sp+BCh] [bp-74h]@22
  void *v145; // [sp+C0h] [bp-70h]@6
  void *v146; // [sp+C4h] [bp-6Ch]@6
  int v147; // [sp+D0h] [bp-60h]@6
  int v148; // [sp+D8h] [bp-58h]@5
  _DWORD *v149; // [sp+DCh] [bp-54h]@3
  void (*v150)(void); // [sp+E4h] [bp-4Ch]@3
  signed int (__fastcall *v151)(int **, Block *); // [sp+E8h] [bp-48h]@3
  void *v152; // [sp+ECh] [bp-44h]@3
  void *v153; // [sp+F0h] [bp-40h]@3
  int v154; // [sp+F4h] [bp-3Ch]@3

  v3 = a1;
  v4 = a3;
  v5 = a2;
  *a1 = 0;
  v6 = operator new(0x16Cu);
  CommandRegistry::CommandRegistry();
  v3[1] = v6;
  *((_BYTE *)v3 + 8) = 2;
  v3[3] = v5;
  v3[6] = 0;
  v7 = operator new(8u);
  CommandOutputSender::CommandOutputSender((int)v7, v4);
  v8 = *v3;
  *v3 = v7;
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  v152 = 0;
  v153 = 0;
  v154 = 0;
  v9 = operator new(4u);
  *v9 = &v152;
  v149 = v9;
  v150 = (void (*)(void))sub_15CD480;
  v151 = sub_15CD2DC;
  Block::forEachBlock((int)&v149);
  if ( v150 )
    v150();
  v10 = v3[1];
  sub_21E94B4((void **)&v148, "Block");
  CommandRegistry::addEnumValues<Block const*>(v10, (int)&v148, (unsigned __int64 *)&v152);
  v11 = (void *)(v148 - 12);
  if ( (int *)(v148 - 12) != &dword_28898C0 )
  {
    v86 = (unsigned int *)(v148 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
    }
    else
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  }
  v12 = v3[1];
  sub_21E94B4((void **)&v147, "EntityType");
  EntityFactory::buildSummonEntityTypeEnum((EntityFactory *)&v145);
  CommandRegistry::addEnumValues<EntityType>(v12, (int)&v147, (unsigned __int64 *)&v145);
  v14 = v146;
  v13 = v145;
  if ( v145 != v146 )
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
          j_j_j_j__ZdlPv_9(v17);
      }
      v13 = (char *)v13 + 8;
    while ( v13 != v14 );
    v13 = v145;
  if ( v13 )
    operator delete(v13);
  v18 = (void *)(v147 - 12);
  if ( (int *)(v147 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v147 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v142 = 0;
  v143 = 0;
  v144 = 0;
  v141 = 0;
  v137 = 0;
  v138 = 0;
  v139 = &v137;
  v140 = &v137;
  v20 = dword_2806D24;
  v19 = (ItemInstance *)Item::mCreativeList;
  if ( Item::mCreativeList != dword_2806D24 )
    v21 = (void **)&v133;
      v135 = (char *)&unk_28898CC;
      v24 = *((_DWORD *)v19 + 1);
      if ( v24 )
        Util::toLower((void **)&v134, *(_DWORD *)(*(_DWORD *)(v24 + 12) - 12), *(_DWORD *)(v24 + 12));
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)&v135,
          &v134);
        v25 = (void *)(v134 - 12);
        if ( (int *)(v134 - 12) != &dword_28898C0 )
          v26 = (unsigned int *)(v134 - 4);
          if ( &pthread_create )
          {
            v27 = v21;
            __dmb();
            do
              v28 = __ldrex(v26);
            while ( __strex(v28 - 1, v26) );
            goto LABEL_43;
          }
          goto LABEL_44;
      else if ( *(_DWORD *)v19 )
        Util::toLower(v21, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v19 + 24) - 12), *(_DWORD *)(*(_DWORD *)v19 + 24));
          (int *)v21);
        v25 = (void *)(v133 - 12);
        if ( (int *)(v133 - 12) != &dword_28898C0 )
          v26 = (unsigned int *)(v133 - 4);
LABEL_43:
            v21 = v27;
LABEL_45:
            if ( v28 <= 0 )
              j_j_j_j__ZdlPv_9(v25);
            goto LABEL_47;
LABEL_44:
          v28 = (*v26)--;
          goto LABEL_45;
LABEL_47:
      std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(
        (int)&v131,
        (int)&v136,
        (const void **)&v135);
      if ( v132 )
        v29 = ItemInstance::getId(v19);
        v130 = v29;
        v30 = (int)v143;
        if ( v143 == v144 )
          std::vector<std::pair<std::string,CommandItem>,std::allocator<std::pair<std::string,CommandItem>>>::_M_emplace_back_aux<std::string &,int>(
            (unsigned __int64 *)&v142,
            (int *)&v135,
            &v130);
          sub_21E8AF4(v143, (int *)&v135);
          CommandItem::CommandItem(v30 + 4, v29);
          v143 = (int *)(v30 + 12);
      v31 = v135 - 12;
      if ( (int *)(v135 - 12) != &dword_28898C0 )
        v22 = (unsigned int *)(v135 - 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j__ZdlPv_9(v31);
      v19 = (ItemInstance *)((char *)v19 + 72);
    while ( v19 != (ItemInstance *)v20 );
  sub_21E94B4((void **)&v129, "tile.");
  for ( i = dword_2806DC8; i; i = *(_DWORD *)i )
    if ( *(_DWORD *)(*(_DWORD *)(i + 8) + 48) == 5 )
      v33 = sub_21E76A0((int *)(i + 4), v129, 0, *((_DWORD *)v129 - 3));
      v128 = (char *)&unk_28898CC;
      if ( v33 )
        EntityInteraction::setInteractText((int *)&v128, (int *)(i + 4));
      else
        v34 = *((_DWORD *)v129 - 3);
        v35 = *(_DWORD *)(*(_DWORD *)(i + 4) - 12);
        if ( v35 < v34 )
          sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v34, v35);
        sub_21E9040((void **)&v127, (int *)(i + 4), v34, 0xFFFFFFFF);
          (int *)&v128,
          &v127);
        v36 = (void *)(v127 - 12);
        if ( (int *)(v127 - 12) != &dword_28898C0 )
          v42 = (unsigned int *)(v127 - 4);
              v43 = __ldrex(v42);
            while ( __strex(v43 - 1, v42) );
          else
            v43 = (*v42)--;
          if ( v43 <= 0 )
            j_j_j_j__ZdlPv_9(v36);
        (int)&v125,
        (const void **)&v128);
      if ( v126 )
        v37 = *(_WORD *)(*(_DWORD *)(i + 8) + 18);
        v124 = *(_WORD *)(*(_DWORD *)(i + 8) + 18);
        v38 = (int)v143;
          std::vector<std::pair<std::string,CommandItem>,std::allocator<std::pair<std::string,CommandItem>>>::_M_emplace_back_aux<std::string &,short>(
            (int *)&v128,
            &v124);
          sub_21E8AF4(v143, (int *)&v128);
          CommandItem::CommandItem(v38 + 4, v37);
          v143 = (int *)(v38 + 12);
      v39 = v128 - 12;
      if ( (int *)(v128 - 12) != &dword_28898C0 )
        v40 = (unsigned int *)(v128 - 4);
            v41 = __ldrex(v40);
          while ( __strex(v41 - 1, v40) );
          v41 = (*v40)--;
        if ( v41 <= 0 )
          j_j_j_j__ZdlPv_9(v39);
  v44 = v3[1];
  sub_21E94B4((void **)&v123, "Item");
  CommandRegistry::addEnumValues<CommandItem>(__PAIR__(&v123, v44), (unsigned __int64 *)&v142);
  v45 = (void *)(v123 - 12);
  if ( (int *)(v123 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v123 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  v46 = v3[1];
  sub_21E94B4((void **)&v122, "Dimension");
  sub_21E94B4((void **)&v113, "overworld");
  v114 = 0;
  sub_21E94B4((void **)&v115, "nether");
  v116 = 1;
  sub_21E94B4((void **)&v117, "the_end");
  v118 = 2;
  v119 = 0;
  v120 = 0;
  v121 = 0;
  v47 = operator new(0x18u);
  v119 = v47;
  v121 = (char *)v47 + 24;
  v48 = std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,DimensionId> const*,std::pair<std::string,DimensionId>*>(
          (int)&v113,
          (int)&v119,
          (int)v47);
  v120 = v48;
  CommandRegistry::addEnumValues<DimensionId>(v46, (int)&v122, (unsigned __int64 *)&v119);
  if ( v47 != (void *)v48 )
      v51 = (int *)(*(_DWORD *)v47 - 12);
      if ( v51 != &dword_28898C0 )
        v49 = (unsigned int *)(*(_DWORD *)v47 - 4);
            v50 = __ldrex(v49);
          while ( __strex(v50 - 1, v49) );
          v50 = (*v49)--;
        if ( v50 <= 0 )
          j_j_j_j__ZdlPv_9(v51);
      v47 = (char *)v47 + 8;
    while ( v47 != (void *)v48 );
    v47 = v119;
  if ( v47 )
    operator delete(v47);
  v52 = (void *)(v117 - 12);
  if ( (int *)(v117 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v117 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
  v53 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v115 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  v54 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v113 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  v55 = (void *)(v122 - 12);
  if ( (int *)(v122 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v122 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v55);
  v110 = 0;
  v111 = 0;
  v112 = 0;
  v56 = 1;
  do
    WorldGenerator::getFeatureName(&v105, (char)v56);
    sub_21E91E0((void **)&v107, v106, v105);
    v61 = v107;
    v107 = (char *)&unk_28898CC;
    v108 = v61;
    v109 = v56;
    v62 = v111;
    if ( v111 == v112 )
      std::vector<std::pair<std::string,StructureFeatureType>,std::allocator<std::pair<std::string,StructureFeatureType>>>::_M_emplace_back_aux<std::pair<std::string,StructureFeatureType>>(
        (unsigned __int64 *)&v110,
        (int)&v108);
      v64 = v108;
      *v111 = v61;
      v63 = v62 + 2;
      v108 = (char *)&unk_28898CC;
      *((_BYTE *)v62 + 4) = v56;
      v64 = (char *)&unk_28898CC;
      v111 = v63;
    v65 = v64 - 12;
    if ( (int *)(v64 - 12) != &dword_28898C0 )
      v57 = (unsigned int *)(v64 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j__ZdlPv_9(v65);
    v66 = v107 - 12;
    if ( (int *)(v107 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v107 - 4);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j__ZdlPv_9(v66);
    ++v56;
  while ( v56 < 9 );
  v67 = v3[1];
  sub_21E94B4((void **)&v104, "Feature");
  CommandRegistry::addEnumValues<StructureFeatureType>(v67, (int)&v104, (unsigned __int64 *)&v110);
  v68 = (void *)(v104 - 12);
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v104 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j__ZdlPv_9(v68);
  v70 = v111;
  v69 = v110;
  if ( v110 != v111 )
      v73 = (int *)(*v69 - 12);
      if ( v73 != &dword_28898C0 )
        v71 = (unsigned int *)(*v69 - 4);
            v72 = __ldrex(v71);
          while ( __strex(v72 - 1, v71) );
          v72 = (*v71)--;
        if ( v72 <= 0 )
          j_j_j_j__ZdlPv_9(v73);
      v69 += 2;
    while ( v69 != v70 );
    v69 = v110;
  if ( v69 )
    operator delete(v69);
  v74 = v129 - 12;
  if ( (int *)(v129 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v129 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j__ZdlPv_9(v74);
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    (int)&v136,
    v138);
  v76 = v143;
  v75 = v142;
  if ( v142 != v143 )
      v79 = (int *)(*v75 - 12);
      if ( v79 != &dword_28898C0 )
        v77 = (unsigned int *)(*v75 - 4);
            v78 = __ldrex(v77);
          while ( __strex(v78 - 1, v77) );
          v78 = (*v77)--;
        if ( v78 <= 0 )
          j_j_j_j__ZdlPv_9(v79);
      v75 += 3;
    while ( v75 != v76 );
    v75 = v142;
  if ( v75 )
    operator delete(v75);
  v81 = v153;
  v80 = v152;
  if ( v152 != v153 )
      v84 = (int *)(*(_DWORD *)v80 - 12);
      if ( v84 != &dword_28898C0 )
        v82 = (unsigned int *)(*(_DWORD *)v80 - 4);
            v83 = __ldrex(v82);
          while ( __strex(v83 - 1, v82) );
          v83 = (*v82)--;
        if ( v83 <= 0 )
          j_j_j_j__ZdlPv_9(v84);
      v80 = (char *)v80 + 8;
    while ( v80 != v81 );
    v80 = v152;
  if ( v80 )
    operator delete(v80);
  return v3;
}
