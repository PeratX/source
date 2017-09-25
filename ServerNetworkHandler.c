

void __fastcall ServerNetworkHandler::onInvalidPlayerJoinedLobby(int a1, int a2, int a3, int *a4)
{
  int v4; // r4@1
  int v5; // r0@1
  int v6; // r1@1
  int v7; // r5@1
  void *v8; // r0@1
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  int v11; // [sp+0h] [bp-30h]@1
  int v12; // [sp+4h] [bp-2Ch]@1
  int v13; // [sp+8h] [bp-28h]@1
  int v14; // [sp+Ch] [bp-24h]@1
  int v15; // [sp+10h] [bp-20h]@1

  v4 = a1;
  v5 = *(_DWORD *)a3;
  v6 = *(_DWORD *)(a3 + 4);
  v7 = *(_DWORD *)(a3 + 8);
  v14 = *(_DWORD *)(a3 + 12);
  v11 = v5;
  v12 = v6;
  v13 = v7;
  sub_21E8AF4(&v15, a4);
  Blacklist::addEntry(v4 + 64, (int)&v11);
  v8 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v15 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  }
}


RakNet *__fastcall ServerNetworkHandler::disconnectClient(int a1, int a2, int *a3, char a4)
{
  int v4; // r6@1
  int v5; // r11@1
  int *v6; // r7@1
  char v7; // r8@1
  int v8; // r7@1
  void (__fastcall *v9)(int, int, char **); // r10@1
  void *v10; // r9@1
  char *v11; // r5@1
  __int64 v12; // r0@1
  char *v13; // r0@3
  void *v14; // r0@4
  RakNet *result; // r0@5
  unsigned int *v16; // r2@7
  signed int v17; // r1@9
  unsigned int *v18; // r2@11
  signed int v19; // r1@13
  char *v20; // [sp+4h] [bp-F4h]@1
  __int64 v21; // [sp+Ch] [bp-ECh]@1
  void *v22; // [sp+14h] [bp-E4h]@1
  void **v23; // [sp+18h] [bp-E0h]@1
  signed int v24; // [sp+1Ch] [bp-DCh]@1
  signed int v25; // [sp+20h] [bp-D8h]@1
  char v26; // [sp+24h] [bp-D4h]@1
  char v27; // [sp+25h] [bp-D3h]@1
  int v28; // [sp+28h] [bp-D0h]@1
  char v29; // [sp+30h] [bp-C8h]@1
  RakNet *v30; // [sp+D0h] [bp-28h]@1

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v30 = _stack_chk_guard;
  v24 = 2;
  v25 = 1;
  v26 = 0;
  v23 = &off_26D6400;
  v27 = a4;
  sub_21E8AF4(&v28, a3);
  (*(void (**)(void))(**(_DWORD **)(v4 + 44) + 16))();
  sub_21E8AF4((int *)&v22, v6);
  v8 = *(_DWORD *)(v4 + 44);
  v9 = *(void (__fastcall **)(int, int, char **))(*(_DWORD *)v8 + 28);
  _aeabi_memcpy4((unsigned int)&v29 | 4, v5, 152);
  v10 = v22;
  v22 = &unk_28898CC;
  v11 = (char *)operator new(0xA8u);
  *(_DWORD *)v11 = v4;
  _aeabi_memcpy4(v11 + 4, &v29, 156);
  LODWORD(v12) = sub_15545F8;
  *((_DWORD *)v11 + 40) = v10;
  HIDWORD(v12) = sub_1554554;
  v11[164] = v7;
  v20 = v11;
  v21 = v12;
  v9(v8, v5, &v20);
  if ( (_DWORD)v21 )
    ((void (*)(void))v21)();
  v13 = (char *)v22 - 12;
  if ( (int *)((char *)v22 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)((char *)v22 - 4);
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
      j_j_j_j__ZdlPv_9(v13);
  }
  v14 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v28 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  result = (RakNet *)(_stack_chk_guard - v30);
  if ( _stack_chk_guard != v30 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const SubClientLoginPacket *a3)
{
  ServerNetworkHandler *v3; // r10@1
  const SubClientLoginPacket *v4; // r8@1
  const NetworkIdentifier *v5; // r11@1
  int v6; // r5@1 OVERLAPPED
  int v7; // r6@1 OVERLAPPED
  int v8; // r7@2
  int v9; // r9@9
  int v10; // r6@9
  __int64 v11; // kr00_8@9
  int v12; // r5@10
  const Certificate *v13; // r9@22
  void *v14; // r0@23
  unsigned int *v15; // r2@24
  signed int v16; // r1@26
  int v17; // r4@28
  bool v18; // zf@30
  void *v19; // r0@36
  unsigned int *v20; // r2@38
  signed int v21; // r1@40
  int v22; // [sp+Ch] [bp-5Ch]@33
  void *v23; // [sp+10h] [bp-58h]@28
  int v24; // [sp+14h] [bp-54h]@28
  int v25; // [sp+20h] [bp-48h]@23
  int v26; // [sp+24h] [bp-44h]@22
  char v27; // [sp+28h] [bp-40h]@22
  char v28; // [sp+38h] [bp-30h]@20

  v3 = this;
  v4 = a3;
  v5 = a2;
  *(_QWORD *)&v6 = *(_QWORD *)Level::getUsers(*((Level **)this + 7));
  if ( v6 == v7 )
  {
    v8 = 0;
  }
  else
    while ( 1 )
    {
      v8 = *(_DWORD *)v6;
      if ( *((_DWORD *)v5 + 36) == *(_DWORD *)(*(_DWORD *)v6 + 4536)
        && NetworkIdentifier::equalsTypeData(v5, (const NetworkIdentifier *)(v8 + 4392)) == 1
        && !Player::getClientSubId((Player *)v8) )
      {
        break;
      }
      v6 += 4;
      if ( v7 == v6 )
        v8 = 0;
    }
  v9 = *((_BYTE *)v4 + 12);
  v11 = *(_QWORD *)Level::getUsers(*((Level **)v3 + 7));
  v10 = v11;
  if ( (_DWORD)v11 == HIDWORD(v11) )
    v12 = 0;
      v12 = *(_DWORD *)v10;
      if ( *((_DWORD *)v5 + 36) == *(_DWORD *)(*(_DWORD *)v10 + 4536)
        && NetworkIdentifier::equalsTypeData(v5, (const NetworkIdentifier *)(v12 + 4392)) == 1
        && Player::getClientSubId((Player *)v12) == v9 )
      v10 += 4;
      if ( HIDWORD(v11) == v10 )
        v12 = 0;
  if ( v8 && !v12 && *((_DWORD *)v4 + 4) )
    sub_21E034C(&v28);
    if ( !SubClientConnectionRequest::verify(
            *((_DWORD *)v4 + 4),
            (__int64 *)v3 + 38,
            *(_QWORD *)&v28 / 1000000000LL,
            (unsigned __int64)(*(_QWORD *)&v28 / 1000000000LL) >> 32) )
      SubClientConnectionRequest::verifySelfSigned(*((SubClientConnectionRequest **)v4 + 4));
    v13 = (const Certificate *)SubClientConnectionRequest::getCertificate(*((SubClientConnectionRequest **)v4 + 4));
    ExtendedCertificate::getIdentity((ExtendedCertificate *)&v27, v13);
    ExtendedCertificate::getXuid((ExtendedCertificate *)&v26, v13);
    if ( Blacklist::isBlocked((int)v3 + 64, (int)&v27, &v26) == 1 )
      sub_21E94B4((void **)&v25, "disconnectionScreen.notAllowed");
      ServerNetworkHandler::disconnectClient((int)v3, (int)v5, &v25, 0);
      v14 = (void *)(v25 - 12);
      if ( (int *)(v25 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v25 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          goto LABEL_51;
        }
        goto LABEL_50;
    else
      SubClientConnectionRequest::getSkinData((SubClientConnectionRequest *)&v23, *((_DWORD *)v4 + 4));
      v17 = v24 - (_DWORD)v23;
      if ( v23 )
        operator delete(v23);
      v18 = v17 == 0x2000;
      if ( v17 != 0x2000 )
        v18 = v17 == 0x4000;
      if ( v18 )
        ServerNetworkHandler::_onSubClientAuthenticated(v3, v5, v13, v4);
      else
        sub_21E94B4((void **)&v22, "disconnectionScreen.invalidSkin");
        ServerNetworkHandler::disconnectClient((int)v3, (int)v5, &v22, 0);
        v14 = (void *)(v22 - 12);
        if ( (int *)(v22 - 12) != &dword_28898C0 )
          v15 = (unsigned int *)(v22 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
LABEL_51:
            if ( v16 <= 0 )
              j_j_j_j__ZdlPv_9(v14);
            goto LABEL_36;
          }
LABEL_50:
          v16 = (*v15)--;
LABEL_36:
    v19 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v26 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
}


void __fastcall ServerNetworkHandler::onReady_ClientGeneration(ServerNetworkHandler *this, Player *a2, const NetworkIdentifier *a3)
{
  ServerNetworkHandler::onReady_ClientGeneration(this, a2, a3);
}


void __fastcall ServerNetworkHandler::~ServerNetworkHandler(ServerNetworkHandler *this)
{
  ServerNetworkHandler::~ServerNetworkHandler(this);
}


void __fastcall ServerNetworkHandler::removeFromBlacklist(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r3@1
  int v6; // r5@1
  void *v7; // r0@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+0h] [bp-30h]@1
  int v11; // [sp+4h] [bp-2Ch]@1
  int v12; // [sp+8h] [bp-28h]@1
  int v13; // [sp+Ch] [bp-24h]@1
  int v14; // [sp+10h] [bp-20h]@1

  v3 = a1;
  v4 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = *(_DWORD *)(a2 + 8);
  v13 = *(_DWORD *)(a2 + 12);
  v10 = v4;
  v11 = v5;
  v12 = v6;
  sub_21E8AF4(&v14, a3);
  Blacklist::removeEntry(v3 + 64, (int)&v10);
  v7 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
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
      j_j_j_j__ZdlPv_9(v7);
  }
}


Player *__fastcall ServerNetworkHandler::_createNewPlayer(ServerNetworkHandler *this, const NetworkIdentifier *a2, const ConnectionRequest *a3)
{
  ServerNetworkHandler *v3; // r5@1
  ConnectionRequest *v4; // r11@1
  const NetworkIdentifier *v5; // r8@1
  _DWORD *v6; // r0@1
  __int64 v7; // r1@1
  Level *v8; // r7@1
  unsigned int v9; // r10@1
  unsigned int v10; // r9@1
  char *v11; // r0@1
  Level *v12; // ST24_4@1
  unsigned int v13; // ST28_4@1
  int v14; // r7@1
  const Certificate *v15; // r0@1
  int *v16; // r9@1
  int *v17; // r8@1
  int v18; // r0@3
  ServerNetworkHandler *v19; // r10@3
  Player *v20; // r5@3
  int v21; // r1@3
  void (__fastcall *v22)(Player *, int *); // r4@3
  const Certificate *v23; // r0@3
  void *v24; // r0@3
  Player *v25; // r4@4
  void *v26; // r0@4
  Player *v27; // r4@5
  void *v28; // r0@5
  const Player *v29; // r0@6
  Player *v30; // r5@6
  int v31; // r1@6
  int v32; // r5@6
  void (__fastcall *v33)(int, _DWORD **, _DWORD **); // r4@6
  _DWORD *v34; // r0@6
  _DWORD *v35; // r0@6
  __int64 v36; // r1@6
  char *v37; // r0@10
  Player *v38; // r0@12
  int v39; // r2@12
  char *v40; // r0@12
  Player *v41; // r5@13
  void (__fastcall *v42)(Player *, int); // r4@13
  char *v43; // r0@13
  int v44; // r0@13
  Player *v45; // r5@14
  void (__fastcall *v46)(Player *, int *, void **, void **); // r4@14
  void *v47; // r0@14
  void *v48; // r0@15
  void *v49; // r0@20
  __int64 v50; // r2@21
  int v51; // r5@24
  const Certificate *v52; // r0@24
  signed int v53; // r5@24
  void *v54; // r0@24
  Player *v55; // r4@28
  char *v56; // r0@28
  int v57; // r0@28
  char *v58; // r0@29
  int v59; // r0@32
  Player *v60; // r4@32
  void (__cdecl *v61)(int, Player **); // r2@32
  unsigned int *v63; // r2@41
  signed int v64; // r1@43
  unsigned int *v65; // r2@45
  signed int v66; // r1@47
  unsigned int *v67; // r2@49
  signed int v68; // r1@51
  unsigned int *v69; // r2@53
  signed int v70; // r1@55
  unsigned int *v71; // r2@57
  signed int v72; // r1@59
  unsigned int *v73; // r2@61
  signed int v74; // r1@63
  unsigned int *v75; // r2@65
  signed int v76; // r1@67
  Player *v77; // [sp+2Ch] [bp-C4h]@32
  int v78; // [sp+30h] [bp-C0h]@24
  int v79; // [sp+34h] [bp-BCh]@14
  int v80; // [sp+38h] [bp-B8h]@14
  void *ptr; // [sp+3Ch] [bp-B4h]@14
  void *v82; // [sp+48h] [bp-A8h]@14
  int v83; // [sp+54h] [bp-9Ch]@14
  _DWORD *v84; // [sp+58h] [bp-98h]@6
  __int64 v85; // [sp+60h] [bp-90h]@6
  _DWORD *v86; // [sp+68h] [bp-88h]@6
  void (*v87)(void); // [sp+70h] [bp-80h]@6
  int (__fastcall *v88)(int ***, int, int, int, int); // [sp+74h] [bp-7Ch]@6
  int v89; // [sp+78h] [bp-78h]@6
  int v90; // [sp+7Ch] [bp-74h]@6
  int v91; // [sp+80h] [bp-70h]@6
  int v92; // [sp+84h] [bp-6Ch]@5
  int v93; // [sp+88h] [bp-68h]@4
  int v94; // [sp+8Ch] [bp-64h]@3
  int v95; // [sp+90h] [bp-60h]@1
  int *v96; // [sp+94h] [bp-5Ch]@1
  char v97; // [sp+98h] [bp-58h]@1
  int v98; // [sp+A8h] [bp-48h]@1
  char v99; // [sp+AFh] [bp-41h]@1
  int v100; // [sp+B0h] [bp-40h]@1
  Player *v101; // [sp+B4h] [bp-3Ch]@1
  _DWORD *v102; // [sp+B8h] [bp-38h]@1
  __int64 v103; // [sp+C0h] [bp-30h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = operator new(4u);
  HIDWORD(v7) = sub_1554DB0;
  *v6 = v3;
  LODWORD(v7) = sub_1554DB8;
  v102 = v6;
  v103 = v7;
  v9 = *(_QWORD *)((char *)v3 + 28) >> 32;
  v8 = (Level *)*(_QWORD *)((char *)v3 + 28);
  v10 = *((_DWORD *)v3 + 11);
  v11 = Level::getLevelData(v8);
  v100 = LevelData::getGameType((LevelData *)v11);
  v99 = ConnectionRequest::getClientSubId(v4);
  (*(void (__fastcall **)(int *))(**((_DWORD **)v3 + 12) + 8))(&v98);
  v12 = v8;
  v13 = v10;
  v14 = (int)v5;
  v15 = (const Certificate *)ConnectionRequest::getCertificate(v4);
  ExtendedCertificate::getIdentity((ExtendedCertificate *)&v97, v15);
  v16 = (int *)ConnectionRequest::getCertificate(v4);
  v17 = (int *)operator new(0x48u);
  Certificate::Certificate(v17, v16);
  v96 = v17;
  v95 = *((_DWORD *)v3 + 62);
  std::make_unique<ServerPlayer,Level &,PacketSender &,NetworkHandler &,GameType,NetworkIdentifier const&,unsigned char,std::function<void ()(ServerPlayer&)> &,std::unique_ptr<SkinInfoData,std::default_delete<SkinInfoData>>,mce::UUID,std::unique_ptr<Certificate,std::default_delete<Certificate>>,int const&,minecraft::api::Api *>(
    (int *)&v101,
    v12,
    __PAIR__(v9, v13),
    &v100,
    v14,
    &v99,
    (int)&v102,
    &v98,
    (int)&v97,
    (int *)&v96,
    (int *)v3 + 60,
    &v95);
  std::unique_ptr<Certificate,std::default_delete<Certificate>>::~unique_ptr((int)&v96);
  if ( v98 )
    (*(void (**)(void))(*(_DWORD *)v98 + 4))();
  v98 = 0;
  v18 = ConnectionRequest::getClientRandomId(v4);
  v19 = v3;
  v20 = v101;
  *((_DWORD *)v101 + 1139) = v21;
  *((_DWORD *)v20 + 1138) = v18;
  v22 = *(void (__fastcall **)(Player *, int *))(*(_DWORD *)v20 + 1228);
  v23 = (const Certificate *)ConnectionRequest::getCertificate(v4);
  ExtendedCertificate::getIdentityName((ExtendedCertificate *)&v94, v23);
  v22(v20, &v94);
  v24 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
  {
    v63 = (unsigned int *)(v94 - 4);
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
      j_j_j_j__ZdlPv_9(v24);
  }
  v25 = v101;
  mce::UUID::asString((mce::UUID *)&v93);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v25 + 1136,
    &v93);
  v26 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v93 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = v101;
  ConnectionRequest::getClientPlatformId((ConnectionRequest *)&v92, (int)v4);
    (int *)v27 + 1145,
    &v92);
  v28 = (void *)(v92 - 12);
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v92 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = (const Player *)Level::getLevelStorage(*((Level **)v19 + 7));
  LevelStorage::loadServerPlayerData((LevelStorage *)&v91, v29, (int)v101);
  v30 = v101;
  Level::getNextRuntimeID((Level *)&v89, *((_DWORD *)v19 + 7));
  Entity::setRuntimeID((int)v30, v31, v89, v90);
  v32 = Player::getSupplies(v101);
  v33 = *(void (__fastcall **)(int, _DWORD **, _DWORD **))(*(_DWORD *)v32 + 16);
  v34 = operator new(4u);
  *v34 = &v101;
  v86 = v34;
  v87 = (void (*)(void))sub_1554FC0;
  v88 = sub_1554DF0;
  v35 = operator new(0xCu);
  LODWORD(v36) = sub_1555086;
  *v35 = v19;
  v35[1] = &v101;
  HIDWORD(v36) = sub_1554FF6;
  v35[2] = &v91;
  v84 = v35;
  v85 = v36;
  v33(v32, &v86, &v84);
  if ( (_DWORD)v85 )
    ((void (*)(void))v85)();
  if ( v87 )
    v87();
  v37 = Entity::getUniqueID(v101);
  if ( ((unsigned int)*(_QWORD *)v37 & (unsigned int)(*(_QWORD *)v37 >> 32)) == -1 )
    Entity::setUniqueID((int)v101, *((_DWORD *)v101 + 1140), *((_QWORD *)v101 + 571) ^ *((_QWORD *)v101 + 570));
  v38 = v101;
  v39 = *((_DWORD *)v101 + 1139);
  *((_DWORD *)v101 + 768) = *((_DWORD *)v101 + 1138);
  *((_DWORD *)v38 + 769) = v39;
  v40 = Level::getLevelData(*((Level **)v19 + 7));
  if ( LevelData::getForceGameType((LevelData *)v40) == 1 )
    v41 = v101;
    v42 = *(void (__fastcall **)(Player *, int))(*(_DWORD *)v101 + 1432);
    v43 = Level::getLevelData(*((Level **)v19 + 7));
    v44 = LevelData::getGameType((LevelData *)v43);
    v42(v41, v44);
  v45 = v101;
  v46 = *(void (__fastcall **)(Player *, int *, void **, void **))(*(_DWORD *)v101 + 1416);
  ConnectionRequest::getSkinId((ConnectionRequest *)&v83, (int)v4);
  ConnectionRequest::getSkinData((ConnectionRequest *)&v82, (int)v4);
  ConnectionRequest::getCapeData((ConnectionRequest *)&ptr, (int)v4);
  ConnectionRequest::getSkinGeometryName((ConnectionRequest *)&v80, (int)v4);
  ConnectionRequest::getSkinGeometry((ConnectionRequest *)&v79, (int)v4);
  v46(v45, &v83, &v82, &ptr);
  v47 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v79 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  v48 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v80 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  if ( ptr )
    operator delete(ptr);
  if ( v82 )
    operator delete(v82);
  v49 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v83 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  v50 = *((_QWORD *)v19 + 35);
  LODWORD(v50) = v50 ^ *((_DWORD *)v101 + 1140);
  if ( v50 != *((_QWORD *)v101 + 570) || *((_QWORD *)v101 + 571) != *((_QWORD *)v19 + 36) )
    v51 = *((_DWORD *)v19 + 15);
    v52 = (const Certificate *)ConnectionRequest::getCertificate(v4);
    ExtendedCertificate::getXuid((ExtendedCertificate *)&v78, v52);
    v53 = OpsList::isOp(v51, (const void **)&v78);
    v54 = (void *)(v78 - 12);
    if ( (int *)(v78 - 12) != &dword_28898C0 )
      v75 = (unsigned int *)(v78 - 4);
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
        j_j_j_j__ZdlPv_9(v54);
    if ( v53 == 1 )
      Abilities::setCommandPermissions((_BYTE **)v101 + 1080, *(_BYTE *)(*((_DWORD *)v19 + 61) + 8));
    else if ( !**((_BYTE **)v19 + 15) )
      Abilities::setCommandPermissions((_BYTE **)v101 + 1080, 0);
      v55 = v101;
      v56 = Level::getDefaultAbilities(*((Level **)v19 + 7));
      v57 = Abilities::getPlayerPermissions((Abilities *)v56);
      Abilities::setPlayerPermissions((PermissionsHandler **)v55 + 1080, v57);
  else
    Abilities::setCommandPermissions((_BYTE **)v101 + 1080, 3);
  v58 = Level::getLevelData(*((Level **)v19 + 7));
  if ( LevelData::hasCommandsEnabled((LevelData *)v58) == 1
    && (*(int (__cdecl **)(Player *, _DWORD))(*(_DWORD *)v101 + 604))(v101, *(_DWORD *)(*(_DWORD *)v101 + 604)) >= (unsigned int)*(_BYTE *)(*((_DWORD *)v19 + 61) + 8) )
    Abilities::setPlayerPermissions((PermissionsHandler **)v101 + 1080, 2);
  v59 = *((_DWORD *)v19 + 7);
  v60 = v101;
  v61 = *(void (__cdecl **)(int, Player **))(*(_DWORD *)v59 + 56);
  v101 = 0;
  v77 = v60;
  v61(v59, &v77);
  if ( v77 )
    (*(void (__cdecl **)(Player *, _DWORD))(*(_DWORD *)v77 + 32))(v77, *(_DWORD *)(*(_DWORD *)v77 + 32));
  v77 = 0;
  if ( v91 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v91 + 4))(v91, *(_DWORD *)(*(_DWORD *)v91 + 4));
  if ( v101 )
    (*(void (__cdecl **)(Player *, _DWORD))(*(_DWORD *)v101 + 32))(v101, *(_DWORD *)(*(_DWORD *)v101 + 32));
  if ( (_DWORD)v103 )
    ((void (__cdecl *)(_DWORD **, _DWORD **))v103)(&v102, &v102);
  return v60;
}


void __fastcall ServerNetworkHandler::_onClientAuthenticated(ServerNetworkHandler *this, const NetworkIdentifier *a2, const Certificate *a3)
{
  ServerNetworkHandler *v3; // r9@1
  const Certificate *v4; // r4@1
  const NetworkIdentifier *v5; // r5@1
  unsigned __int64 *v6; // r6@3
  signed int v7; // r4@3
  void *v8; // r0@3
  int v9; // r0@5
  int v10; // r4@5
  void *v11; // r0@7
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  void *v14; // r0@17
  int v15; // r4@18
  int v16; // r6@18
  int v17; // r8@18
  PackInstance *v18; // r5@18
  PackInstance *v19; // r11@18
  PackInstance *v20; // r10@19
  char *v21; // r4@23
  PackManifest *v22; // r0@23
  __int64 v23; // r0@23
  PackManifest *v24; // r0@23
  char *v25; // r10@23
  unsigned int v26; // r6@23
  __int64 v27; // kr08_8@23
  _DWORD *v28; // r11@23
  ServerNetworkHandler *v29; // r7@24
  _DWORD *v30; // r5@24
  int v31; // r9@24
  _DWORD *v32; // r8@27
  int v33; // r4@29
  int *v34; // r0@35
  int v35; // r3@35
  int *v36; // r1@35
  _DWORD *v37; // r4@37
  int v38; // r1@38
  int v39; // r2@38
  int v40; // r3@38
  PackInstance *v41; // r6@42
  PackInstance *v42; // r11@42
  PackInstance *v43; // r7@43
  PackManifest *v44; // r0@47
  __int64 v45; // r0@47
  PackManifest *v46; // r0@47
  char *v47; // r10@47
  unsigned int v48; // r8@47
  __int64 v49; // kr20_8@47
  ServerNetworkHandler *v50; // r7@47
  _DWORD *v51; // r9@47
  _DWORD *v52; // r6@48
  int v53; // r11@48
  _DWORD *v54; // r5@51
  int v55; // r4@53
  ResourcePackInfoData *v56; // r5@53
  int *v57; // r0@59
  int v58; // r3@59
  int *v59; // r1@59
  _DWORD *v60; // r4@61
  int v61; // r1@62
  int v62; // r2@62
  int v63; // r3@62
  char *v64; // r0@66
  void *v65; // r0@66
  ResourcePackInfoData *v66; // r0@66
  ResourcePackInfoData *v67; // r0@66
  ResourcePackInfoData *v68; // r4@66
  ResourcePackInfoData *v69; // r0@71
  ResourcePackInfoData *v70; // r4@71
  unsigned int *v71; // r2@77
  signed int v72; // r1@79
  unsigned int *v73; // r2@85
  signed int v74; // r1@87
  unsigned __int64 v75; // [sp+24h] [bp-164h]@24
  unsigned __int64 v76; // [sp+28h] [bp-160h]@48
  int v77; // [sp+30h] [bp-158h]@19
  PackInstance *v78; // [sp+34h] [bp-154h]@18
  int v79; // [sp+34h] [bp-154h]@43
  int v80; // [sp+38h] [bp-150h]@23
  unsigned int v81; // [sp+38h] [bp-150h]@47
  unsigned int v82; // [sp+3Ch] [bp-14Ch]@23
  unsigned int v83; // [sp+3Ch] [bp-14Ch]@47
  unsigned int v84; // [sp+40h] [bp-148h]@23
  char *v85; // [sp+40h] [bp-148h]@47
  void **v86; // [sp+44h] [bp-144h]@66
  int v87; // [sp+48h] [bp-140h]@66
  int v88; // [sp+4Ch] [bp-13Ch]@66
  char v89; // [sp+50h] [bp-138h]@66
  char v90; // [sp+54h] [bp-134h]@66
  void *v91; // [sp+58h] [bp-130h]@66
  ResourcePackInfoData *v92; // [sp+5Ch] [bp-12Ch]@66
  int v93; // [sp+60h] [bp-128h]@66
  void *ptr; // [sp+64h] [bp-124h]@66
  ResourcePackInfoData *v95; // [sp+68h] [bp-120h]@66
  _DWORD *v96; // [sp+6Ch] [bp-11Ch]@66
  char v97; // [sp+70h] [bp-118h]@43
  char v98; // [sp+80h] [bp-108h]@53
  int v99; // [sp+84h] [bp-104h]@62
  int v100; // [sp+88h] [bp-100h]@62
  int v101; // [sp+8Ch] [bp-FCh]@62
  int v102; // [sp+90h] [bp-F8h]@62
  char v103; // [sp+A8h] [bp-E0h]@62
  __int64 v104; // [sp+B0h] [bp-D8h]@62
  void *v105; // [sp+B8h] [bp-D0h]@62
  void *v106; // [sp+BCh] [bp-CCh]@62
  char v107; // [sp+C0h] [bp-C8h]@19
  char v108; // [sp+D0h] [bp-B8h]@37
  int v109; // [sp+D4h] [bp-B4h]@38
  int v110; // [sp+D8h] [bp-B0h]@38
  int v111; // [sp+DCh] [bp-ACh]@38
  int v112; // [sp+E0h] [bp-A8h]@38
  char v113; // [sp+F8h] [bp-90h]@38
  __int64 v114; // [sp+100h] [bp-88h]@38
  void *v115; // [sp+108h] [bp-80h]@38
  void *v116; // [sp+10Ch] [bp-7Ch]@38
  void *v117; // [sp+114h] [bp-74h]@18
  _DWORD *v118; // [sp+118h] [bp-70h]@18
  _DWORD *v119; // [sp+11Ch] [bp-6Ch]@18
  void **v120; // [sp+120h] [bp-68h]@18
  int v121; // [sp+124h] [bp-64h]@18
  int v122; // [sp+128h] [bp-60h]@18
  char v123; // [sp+12Ch] [bp-5Ch]@18
  int v124; // [sp+130h] [bp-58h]@18
  int v125; // [sp+138h] [bp-50h]@17
  int v126; // [sp+140h] [bp-48h]@7
  int v127; // [sp+148h] [bp-40h]@12
  int v128; // [sp+14Ch] [bp-3Ch]@3
  unsigned int v129; // [sp+150h] [bp-38h]@1
  unsigned int v130; // [sp+154h] [bp-34h]@1
  __int64 v131; // [sp+158h] [bp-30h]@1
  int v132; // [sp+15Ch] [bp-2Ch]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  ExtendedCertificate::getIdentity((ExtendedCertificate *)&v129, a3);
  if ( ServerNetworkHandler::_getActiveAndInProgressPlayerCount((int)v3, v132, v129, v130, v131) >= *((_DWORD *)v3 + 79) )
  {
    if ( !*((_BYTE *)v3 + 52) )
      goto LABEL_99;
    v6 = (unsigned __int64 *)*((_DWORD *)v3 + 14);
    ExtendedCertificate::getXuid((ExtendedCertificate *)&v128, v4);
    v7 = Whitelist::isIgnoringPlayerLimit(v6, (int)&v129, (const void **)&v128);
    v8 = (void *)(v128 - 12);
    if ( (int *)(v128 - 12) != &dword_28898C0 )
    {
      v71 = (unsigned int *)(v128 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v72 = __ldrex(v71);
        while ( __strex(v72 - 1, v71) );
      }
      else
        v72 = (*v71)--;
      if ( v72 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
    if ( !v7 )
LABEL_99:
      sub_21E94B4((void **)&v127, "disconnectionScreen.serverFull");
      ServerNetworkHandler::disconnectClient((int)v3, (int)v5, &v127, 0);
      v11 = (void *)(v127 - 12);
      if ( (int *)(v127 - 12) == &dword_28898C0 )
        return;
      v12 = (unsigned int *)(v127 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        goto LABEL_82;
      goto LABEL_81;
  }
  v9 = Level::getPlayer(*((Level **)v3 + 7), (const mce::UUID *)&v129);
  v10 = v9;
  if ( v9 )
    if ( (*(int (**)(void))(*(_DWORD *)v9 + 1408))() == 1 )
      sub_21E94B4((void **)&v126, "disconnectionScreen.loggedinOtherLocation");
      ServerNetworkHandler::disconnectClient((int)v3, (int)v5, &v126, 0);
      v11 = (void *)(v126 - 12);
      if ( (int *)(v126 - 12) == &dword_28898C0 )
      v12 = (unsigned int *)(v126 - 4);
LABEL_81:
      v13 = (*v12)--;
LABEL_82:
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
      return;
    sub_21E94B4((void **)&v125, "disconnectionScreen.loggedinOtherLocation");
    ServerNetworkHandler::disconnectClient((int)v3, v10 + 4392, &v125, 0);
    v14 = (void *)(v125 - 12);
    if ( (int *)(v125 - 12) != &dword_28898C0 )
      v73 = (unsigned int *)(v125 - 4);
          v74 = __ldrex(v73);
        while ( __strex(v74 - 1, v73) );
        v74 = (*v73)--;
      if ( v74 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
  v121 = 2;
  v122 = 1;
  v123 = 0;
  v120 = &off_26E9314;
  v124 = 0;
  (*(void (**)(void))(**((_DWORD **)v3 + 11) + 16))();
  v117 = 0;
  v118 = 0;
  v119 = 0;
  v15 = (*(int (**)(void))(**((_DWORD **)v3 + 7) + 116))();
  v16 = ResourcePackManager::getStack(v15, 1);
  v17 = ResourcePackManager::getStack(v15, 0);
  v19 = (PackInstance *)(*(_QWORD *)(v16 + 4) >> 32);
  v18 = (PackInstance *)*(_QWORD *)(v16 + 4);
  v78 = v19;
  if ( v18 != v19 )
    v20 = (PackInstance *)&v107;
    v77 = (int)v3 + 352;
    do
      if ( PackInstance::getPackCategory(v18) == 3
        || PackInstance::getPackCategory(v18) == 2 && PackInstance::getPackOrigin(v18) == 6 )
        PackInstance::getPackId(v20, (int)v18);
        v21 = PackInstance::getVersion(v18);
        v22 = (PackManifest *)PackInstance::getManifest(v18);
        v23 = PackManifest::getPackSize(v22);
        v82 = HIDWORD(v23);
        v84 = v23;
        v24 = (PackManifest *)PackInstance::getManifest(v18);
        v25 = PackManifest::getIdentity(v24);
        v26 = std::hash<PackIdVersion>::operator()(v77, (int)v25);
        v80 = (int)v21;
        v27 = *((_QWORD *)v3 + 44);
        v28 = *(_DWORD **)(v27 + 4 * (v26 % HIDWORD(v27)));
        if ( v28 )
        {
          v75 = __PAIR__(v17, (unsigned int)v18);
          v29 = v3;
          v30 = (_DWORD *)*v28;
          v31 = *(_DWORD *)(*v28 + 64);
          while ( v31 != v26 || !PackIdVersion::operator==((int)v25, (int)(v30 + 2)) )
          {
            v32 = (_DWORD *)*v30;
            if ( *v30 )
            {
              v31 = v32[16];
              v28 = v30;
              v30 = (_DWORD *)*v30;
              if ( v32[16] % *((_DWORD *)v29 + 89) == v26 % HIDWORD(v27) )
                continue;
            }
            v33 = 0;
            v3 = v29;
            v17 = HIDWORD(v75);
            v18 = (PackInstance *)v75;
            goto LABEL_35;
          }
          v18 = (PackInstance *)v75;
          if ( v28 )
            v33 = *v28;
          else
          v17 = HIDWORD(v75);
          v3 = v29;
        }
        else
          v33 = 0;
LABEL_35:
        v19 = v78;
        v20 = (PackInstance *)&v107;
        v34 = (int *)PackInstance::getSubpackFolderName(v18);
        v36 = (int *)&Util::EMPTY_STRING;
        if ( v33 )
          v36 = (int *)(v33 + 56);
        ResourcePackInfoData::ResourcePackInfoData((int)&v108, (int)&v107, v80, v35, __PAIR__(v82, v84), v36, v34);
        v37 = v118;
        if ( v118 == v119 )
          std::vector<ResourcePackInfoData,std::allocator<ResourcePackInfoData>>::_M_emplace_back_aux<ResourcePackInfoData>(
            (unsigned __int64 *)&v117,
            (int)&v108);
          v38 = v109;
          v39 = v110;
          v40 = v111;
          *v118 = *(_DWORD *)&v108;
          v37[1] = v38;
          v37[2] = v39;
          v37[3] = v40;
          SemVersion::SemVersion((int)(v37 + 4), (int)&v112);
          *((_BYTE *)v37 + 40) = v113;
          *((_QWORD *)v37 + 6) = v114;
          v37[14] = v115;
          v115 = &unk_28898CC;
          v37[15] = v116;
          v116 = &unk_28898CC;
          v118 = v37 + 16;
        ResourcePackInfoData::~ResourcePackInfoData((ResourcePackInfoData *)&v108);
      v18 = (PackInstance *)((char *)v18 + 120);
    while ( v18 != v19 );
  v42 = (PackInstance *)(*(_QWORD *)(v17 + 4) >> 32);
  v41 = (PackInstance *)*(_QWORD *)(v17 + 4);
  if ( v41 != v42 )
    v43 = (PackInstance *)&v97;
    v79 = (int)v3 + 352;
      if ( PackInstance::getPackCategory(v41) == 3
        || PackInstance::getPackCategory(v41) == 2 && PackInstance::getPackOrigin(v41) == 6 )
        PackInstance::getPackId(v43, (int)v41);
        v85 = PackInstance::getVersion(v41);
        v44 = (PackManifest *)PackInstance::getManifest(v41);
        v45 = PackManifest::getPackSize(v44);
        v81 = HIDWORD(v45);
        v83 = v45;
        v46 = (PackManifest *)PackInstance::getManifest(v41);
        v47 = PackManifest::getIdentity(v46);
        v48 = std::hash<PackIdVersion>::operator()(v79, (int)v47);
        v49 = *((_QWORD *)v3 + 44);
        v50 = v3;
        v51 = *(_DWORD **)(v49 + 4 * (v48 % HIDWORD(v49)));
        if ( v51 )
          v76 = __PAIR__((unsigned int)v42, (unsigned int)v41);
          v52 = (_DWORD *)*v51;
          v53 = *(_DWORD *)(*v51 + 64);
          while ( v53 != v48 || !PackIdVersion::operator==((int)v47, (int)(v52 + 2)) )
            v54 = (_DWORD *)*v52;
            if ( *v52 )
              v53 = v54[16];
              v51 = v52;
              v52 = (_DWORD *)*v52;
              if ( v54[16] % *((_DWORD *)v50 + 89) == v48 % HIDWORD(v49) )
            v55 = 0;
            v3 = v50;
            v42 = (PackInstance *)HIDWORD(v76);
            v41 = (PackInstance *)v76;
            v56 = (ResourcePackInfoData *)&v98;
            goto LABEL_59;
          v41 = (PackInstance *)v76;
          if ( v51 )
            v55 = *v51;
          v42 = (PackInstance *)HIDWORD(v76);
          v56 = (ResourcePackInfoData *)&v98;
          v3 = v50;
          v55 = 0;
LABEL_59:
        v57 = (int *)PackInstance::getSubpackFolderName(v41);
        v43 = (PackInstance *)&v97;
        v59 = (int *)&Util::EMPTY_STRING;
        if ( v55 )
          v59 = (int *)(v55 + 56);
        ResourcePackInfoData::ResourcePackInfoData((int)v56, (int)&v97, (int)v85, v58, __PAIR__(v81, v83), v59, v57);
        v60 = v118;
            (int)v56);
          v61 = v99;
          v62 = v100;
          v63 = v101;
          *v118 = *(_DWORD *)&v98;
          v60[1] = v61;
          v60[2] = v62;
          v60[3] = v63;
          SemVersion::SemVersion((int)(v60 + 4), (int)&v102);
          *((_BYTE *)v60 + 40) = v103;
          *((_QWORD *)v60 + 6) = v104;
          v60[14] = v105;
          v105 = &unk_28898CC;
          v60[15] = v106;
          v106 = &unk_28898CC;
          v118 = v60 + 16;
        ResourcePackInfoData::~ResourcePackInfoData(v56);
      v41 = (PackInstance *)((char *)v41 + 120);
    while ( v41 != v42 );
  v64 = Level::getLevelData(*((Level **)v3 + 7));
  v87 = 2;
  v88 = 1;
  v89 = 0;
  v86 = &off_26E9364;
  v90 = LevelData::isTexturepacksRequired((LevelData *)v64);
  v93 = 0;
  v91 = 0;
  v92 = 0;
  v65 = v117;
  ptr = v65;
  v66 = (ResourcePackInfoData *)v118;
  v95 = v66;
  v96 = v119;
  v68 = v95;
  v67 = (ResourcePackInfoData *)ptr;
  if ( ptr != (void *)v95 )
      v67 = (ResourcePackInfoData *)((char *)ResourcePackInfoData::~ResourcePackInfoData(v67) + 64);
    while ( v68 != v67 );
    v67 = (ResourcePackInfoData *)ptr;
  if ( v67 )
    operator delete((void *)v67);
  v70 = v92;
  v69 = (ResourcePackInfoData *)v91;
  if ( v91 != (void *)v92 )
      v69 = (ResourcePackInfoData *)((char *)ResourcePackInfoData::~ResourcePackInfoData(v69) + 64);
    while ( v70 != v69 );
    v69 = (ResourcePackInfoData *)v91;
  if ( v69 )
    operator delete((void *)v69);
}


int __fastcall ServerNetworkHandler::onSubclientLogoff(ServerNetworkHandler *this, const NetworkIdentifier *a2, const unsigned __int8 *a3)
{
  ServerNetworkHandler *v3; // r8@1
  const NetworkIdentifier *v4; // r5@1
  int v5; // r9@1
  int v6; // r4@1
  __int64 v7; // kr00_8@1
  int v8; // r6@2
  int v9; // r0@9

  v3 = this;
  v4 = a2;
  v5 = *a3;
  v7 = *(_QWORD *)Level::getUsers(*((Level **)this + 7));
  v6 = v7;
  if ( (_DWORD)v7 != HIDWORD(v7) )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)v6;
      if ( *((_DWORD *)v4 + 36) == *(_DWORD *)(*(_DWORD *)v6 + 4536)
        && NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v8 + 4392)) == 1
        && Player::getClientSubId((Player *)v8) == v5 )
      {
        break;
      }
      v6 += 4;
      if ( HIDWORD(v7) == v6 )
        goto LABEL_9;
    }
    if ( v8 )
      ServerNetworkHandler::_onPlayerLeft(v3, (ServerPlayer *)v8);
  }
LABEL_9:
  v9 = *((_DWORD *)v3 + 7);
  if ( *(_BYTE *)(v9 + 5865) )
    Level::forceFlushRemovedPlayers((Level *)v9);
  return j_j_j__ZN20ServerNetworkHandler24updateServerAnnouncementEv(v3);
}


int __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const MobEquipmentPacket *a3)
{
  const NetworkIdentifier *v3; // r5@1
  int v4; // r8@1
  __int64 v5; // r0@1
  int *v6; // r6@1
  int *v7; // r9@1
  int v8; // r4@2
  ItemInstance *v9; // r8@12
  int v10; // r5@12
  int v11; // r11@12
  char v12; // r7@12
  bool v13; // zf@12
  int v14; // r0@18
  int v15; // r0@20
  PlayerInventoryProxy *v16; // r5@24
  int v17; // r8@24
  int v18; // r7@24
  PlayerInventoryProxy *v19; // r0@26
  int v20; // r0@26
  PlayerInventoryProxy *v21; // r0@27
  int v22; // r0@27
  Dimension *v23; // r0@29
  ServerNetworkHandler *v25; // [sp+0h] [bp-E8h]@1
  const MobEquipmentPacket *v26; // [sp+4h] [bp-E4h]@1
  int v27; // [sp+8h] [bp-E0h]@12
  int v28; // [sp+10h] [bp-D8h]@33
  char v29; // [sp+16h] [bp-D2h]@16
  char v30; // [sp+17h] [bp-D1h]@12
  void *v31; // [sp+2Ch] [bp-BCh]@31
  void *ptr; // [sp+3Ch] [bp-ACh]@29
  __int64 v33; // [sp+50h] [bp-98h]@8
  int v34; // [sp+58h] [bp-90h]@12
  char v35; // [sp+5Ch] [bp-8Ch]@12
  __int64 v36; // [sp+60h] [bp-88h]@12
  int v37; // [sp+68h] [bp-80h]@12
  int v38; // [sp+70h] [bp-78h]@39
  void *v39; // [sp+8Ch] [bp-5Ch]@37
  void *v40; // [sp+9Ch] [bp-4Ch]@35
  int v41; // [sp+B0h] [bp-38h]@12
  int v42; // [sp+B4h] [bp-34h]@12
  char v43; // [sp+B8h] [bp-30h]@12
  char v44; // [sp+B9h] [bp-2Fh]@12
  char v45; // [sp+BAh] [bp-2Eh]@12
  char v46; // [sp+BBh] [bp-2Dh]@12
  char v47; // [sp+BCh] [bp-2Ch]@12

  v25 = this;
  v3 = a2;
  v26 = a3;
  v4 = *((_BYTE *)a3 + 12);
  LODWORD(v5) = Level::getUsers(*((Level **)this + 7));
  v7 = (int *)(*(_QWORD *)v5 >> 32);
  v6 = (int *)*(_QWORD *)v5;
  if ( v6 != v7 )
  {
    while ( 1 )
    {
      v8 = *v6;
      LODWORD(v5) = *((_DWORD *)v3 + 36);
      if ( (_DWORD)v5 == *(_DWORD *)(*v6 + 4536) )
      {
        LODWORD(v5) = NetworkIdentifier::equalsTypeData(v3, (const NetworkIdentifier *)(v8 + 4392));
        if ( (_DWORD)v5 == 1 )
        {
          LODWORD(v5) = Player::getClientSubId((Player *)v8);
          if ( (_DWORD)v5 == v4 )
            break;
        }
      }
      ++v6;
      if ( v7 == v6 )
        return v5;
    }
    if ( v8 )
      Entity::getRuntimeID((Entity *)&v33, v8);
      v5 = *((_QWORD *)v26 + 2);
      if ( !(v33 ^ v5) )
        if ( *((_DWORD *)v25 + 58) == *(_DWORD *)(v8 + 4536) )
          LODWORD(v5) = NetworkIdentifier::equalsTypeData(
                          (ServerNetworkHandler *)((char *)v25 + 88),
                          (const NetworkIdentifier *)(v8 + 4392));
          if ( (_DWORD)v5 )
            return v5;
          v5 = *((_QWORD *)v26 + 2);
        v9 = (const MobEquipmentPacket *)((char *)v26 + 24);
        v11 = *((_QWORD *)v26 + 12) >> 32;
        v10 = *((_QWORD *)v26 + 12);
        v12 = *((_BYTE *)v26 + 105);
        HIDWORD(v33) = 2;
        v34 = 1;
        v35 = 0;
        LODWORD(v33) = &off_26DA648;
        v36 = v5;
        ItemInstance::ItemInstance((ItemInstance *)&v37, (int)v26 + 24);
        v41 = v10;
        v42 = v11;
        v43 = 0;
        v44 = v12;
        v45 = v10;
        v46 = v11;
        v47 = v12;
        ItemInstance::ItemInstance((ItemInstance *)&v27, (int)v26 + 24);
        v13 = v30 == 0;
        if ( v30 )
          v13 = v27 == 0;
        if ( v13 || ItemInstance::isNull((ItemInstance *)&v27) || !v29 )
          ItemInstance::operator=((int)&v37, (int)&ItemInstance::EMPTY_ITEM);
        v14 = *((_BYTE *)v26 + 105);
        if ( v14 == 119 )
          (*(void (__fastcall **)(int, ItemInstance *))(*(_DWORD *)v8 + 1100))(v8, v9);
        else if ( v14 == 123 )
          v15 = Player::getSupplies((Player *)v8);
          PlayerInventoryProxy::selectSlot(v15, *((_DWORD *)v26 + 25), (Inventory *)0x7B);
        else if ( *((_DWORD *)v26 + 24) <= -1 )
          v19 = (PlayerInventoryProxy *)Player::getSupplies((Player *)v8);
          PlayerInventoryProxy::unlinkSlot(v19, *((_DWORD *)v26 + 25));
          v20 = Player::getSupplies((Player *)v8);
          PlayerInventoryProxy::selectSlot(v20, *((_DWORD *)v26 + 25), 0);
        else if ( ItemInstance::getId(v9) )
          v16 = (PlayerInventoryProxy *)Player::getSupplies((Player *)v8);
          v17 = PlayerInventoryProxy::getLinkedSlotForItem(v16, *((_DWORD *)v26 + 24));
          v18 = PlayerInventoryProxy::getLinkedSlot(v16, *((_DWORD *)v26 + 25));
          PlayerInventoryProxy::selectSlot((int)v16, *((_DWORD *)v26 + 25), 0);
          PlayerInventoryProxy::moveToSelectedSlot((int)v16, *((_DWORD *)v26 + 24));
          if ( v18 == -1 )
            PlayerInventoryProxy::unlinkSlot(v16, v17);
          else
            PlayerInventoryProxy::linkSlot(v16, v17, v18);
        else
          v21 = (PlayerInventoryProxy *)Player::getSupplies((Player *)v8);
          PlayerInventoryProxy::unlinkSlot(v21, *((_DWORD *)v26 + 24));
          v22 = Player::getSupplies((Player *)v8);
          PlayerInventoryProxy::selectSlot(v22, *((_DWORD *)v26 + 25), 0);
        v43 = 1;
        v23 = (Dimension *)Entity::getDimension((Entity *)v8);
        Dimension::sendPacketForEntity(v23, (const Entity *)v8, (const Packet *)&v33, (const Player *)v8);
        if ( ptr )
          operator delete(ptr);
        if ( v31 )
          operator delete(v31);
        if ( v28 )
          (*(void (**)(void))(*(_DWORD *)v28 + 4))();
        if ( v40 )
          operator delete(v40);
        if ( v39 )
          operator delete(v39);
        LODWORD(v5) = v38;
        if ( v38 )
          LODWORD(v5) = (*(int (**)(void))(*(_DWORD *)v38 + 4))();
  }
  return v5;
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const MapInfoRequestPacket *a3)
{
  ServerNetworkHandler::handle(this, a2, a3);
}


char *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const ShowCreditsPacket *a3)
{
  const ShowCreditsPacket *v3; // r9@1
  const NetworkIdentifier *v4; // r6@1
  char *v5; // r10@1
  char *result; // r0@1
  int v7; // r4@1
  int v8; // r5@1
  int v9; // r7@2
  ServerNetworkHandler *v10; // [sp+0h] [bp-28h]@1

  v10 = this;
  v3 = a3;
  v4 = a2;
  v5 = (char *)*((_BYTE *)a3 + 12);
  result = Level::getUsers(*((Level **)this + 7));
  v7 = *(_QWORD *)result >> 32;
  v8 = *(_QWORD *)result;
  if ( v8 != v7 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)v8;
      result = (char *)*((_DWORD *)v4 + 36);
      if ( result == *(char **)(*(_DWORD *)v8 + 4536) )
      {
        result = (char *)NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v9 + 4392));
        if ( result == (char *)1 )
        {
          result = (char *)Player::getClientSubId((Player *)v9);
          if ( result == v5 )
            break;
        }
      }
      v8 += 4;
      if ( v7 == v8 )
        return result;
    }
    if ( v9 )
      result = (char *)*((_DWORD *)v3 + 6);
      if ( result == (char *)1 )
        Level::resumePlayer(*((Level **)v10 + 7), (Player *)v9);
        result = (char *)(*(int (__fastcall **)(int, _DWORD, signed int))(*(_DWORD *)v9 + 532))(v9, 0, 1);
  }
  return result;
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const LoginPacket *a3)
{
  ServerNetworkHandler *v3; // r8@1
  const LoginPacket *v4; // r9@1
  int v5; // r11@1
  int v6; // r7@1
  __int64 v7; // kr00_8@1
  int v8; // r6@2
  signed int v9; // r4@6
  int v10; // r5@7
  const Certificate *v11; // r11@11
  void *v12; // r0@12
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  signed int v15; // r1@17
  Certificate *v16; // r0@38
  Certificate *v17; // r0@38
  Certificate *v18; // r0@38
  int v19; // r0@40
  signed int v20; // r6@44
  char *v21; // r0@44
  char *v22; // r0@45
  int v23; // r6@45
  signed int v24; // r0@45
  const char *v25; // r1@47
  void *v26; // r0@55
  char *v27; // r8@64
  _DWORD *v28; // r0@64
  char *v29; // r6@64
  size_t v30; // r2@64
  signed int v31; // r4@65
  unsigned int *v32; // r2@71
  signed int v33; // r1@73
  void *v34; // r0@90
  unsigned int *v35; // r2@91
  signed int v36; // r1@93
  int v37; // r4@95
  bool v38; // zf@97
  int v39; // r8@101
  ConnectionRequest **v40; // r4@102
  int **v41; // r6@102
  int **v42; // r7@102
  ConnectionRequest *v43; // r0@102
  ConnectionRequest *v44; // r0@103
  const KeyManager *v45; // r7@104
  void *v46; // r0@106
  void *v47; // r0@107
  int v48; // r6@108
  void *v49; // r0@108
  int v50; // r6@110
  void *v51; // r0@111
  void (*v52)(void); // r3@112
  void *v53; // r0@114
  void *v54; // r0@115
  void *v55; // r0@116
  WebToken *v56; // r0@118
  void *v57; // r0@119
  ConnectionRequest **v58; // r6@136
  int **v59; // r4@136
  int **v60; // r7@136
  ConnectionRequest *v61; // r0@136
  ConnectionRequest *v62; // r0@137
  unsigned int *v63; // r1@156
  signed int v64; // r0@158
  unsigned int *v65; // r2@160
  signed int v66; // r1@162
  unsigned int *v67; // r2@164
  signed int v68; // r1@166
  unsigned int *v69; // r2@168
  signed int v70; // r1@170
  unsigned int *v71; // r2@172
  signed int v72; // r1@174
  unsigned int *v73; // r2@176
  signed int v74; // r1@178
  unsigned int *v75; // r2@180
  signed int v76; // r1@182
  unsigned int *v77; // r2@184
  signed int v78; // r1@186
  unsigned int *v79; // r2@188
  signed int v80; // r1@190
  NetworkIdentifier *v81; // [sp+0h] [bp-B70h]@1
  int v82; // [sp+8h] [bp-B68h]@139
  int v83; // [sp+Ch] [bp-B64h]@114
  int v84; // [sp+10h] [bp-B60h]@114
  void (*v85)(void); // [sp+1Ch] [bp-B54h]@112
  int v86; // [sp+24h] [bp-B4Ch]@111
  void **v87; // [sp+28h] [bp-B48h]@111
  int v88; // [sp+2Ch] [bp-B44h]@111
  int v89; // [sp+30h] [bp-B40h]@111
  char v90; // [sp+34h] [bp-B3Ch]@111
  int v91; // [sp+38h] [bp-B38h]@111
  WebToken *v92; // [sp+3Ch] [bp-B34h]@111
  char v93; // [sp+40h] [bp-B30h]@110
  int v94; // [sp+54h] [bp-B1Ch]@108
  char v95; // [sp+58h] [bp-B18h]@108
  char v96; // [sp+68h] [bp-B08h]@108
  int v97; // [sp+7Ch] [bp-AF4h]@104
  void **v98; // [sp+80h] [bp-AF0h]@104
  int v99; // [sp+84h] [bp-AECh]@106
  int v100; // [sp+88h] [bp-AE8h]@104
  int v101; // [sp+8Ch] [bp-AE4h]@104
  char v102; // [sp+90h] [bp-AE0h]@104
  int v103; // [sp+A54h] [bp-11Ch]@104
  int v104; // [sp+A5Ch] [bp-114h]@100
  void *ptr; // [sp+A60h] [bp-110h]@95
  int v106; // [sp+A64h] [bp-10Ch]@95
  int v107; // [sp+A70h] [bp-100h]@90
  int v108; // [sp+A78h] [bp-F8h]@125
  int v109; // [sp+A7Ch] [bp-F4h]@87
  char v110; // [sp+A80h] [bp-F0h]@87
  int v111; // [sp+A98h] [bp-D8h]@82
  void **v112; // [sp+A9Ch] [bp-D4h]@82
  int v113; // [sp+AA0h] [bp-D0h]@82
  int v114; // [sp+AA4h] [bp-CCh]@82
  char v115; // [sp+AA8h] [bp-C8h]@82
  int v116; // [sp+AACh] [bp-C4h]@82
  void *s2; // [sp+AB0h] [bp-C0h]@64
  int v118; // [sp+AB8h] [bp-B8h]@49
  void **v119; // [sp+ABCh] [bp-B4h]@45
  int v120; // [sp+AC0h] [bp-B0h]@45
  int v121; // [sp+AC4h] [bp-ACh]@45
  char v122; // [sp+AC8h] [bp-A8h]@45
  int v123; // [sp+ACCh] [bp-A4h]@47
  int v124; // [sp+AD4h] [bp-9Ch]@66
  __int64 v125; // [sp+AD8h] [bp-98h]@42
  __int64 v126; // [sp+AE0h] [bp-90h]@43
  int v127; // [sp+AECh] [bp-84h]@12
  char v128; // [sp+AF0h] [bp-80h]@11
  int v129; // [sp+B04h] [bp-6Ch]@55
  int v130; // [sp+B0Ch] [bp-64h]@40
  __int64 v131; // [sp+B10h] [bp-60h]@8
  int v132; // [sp+B20h] [bp-50h]@30
  int v133; // [sp+B28h] [bp-48h]@25
  int v134; // [sp+B30h] [bp-40h]@20
  void **v135; // [sp+B34h] [bp-3Ch]@17
  int v136; // [sp+B38h] [bp-38h]@17
  int v137; // [sp+B3Ch] [bp-34h]@17
  char v138; // [sp+B40h] [bp-30h]@17
  int v139; // [sp+B44h] [bp-2Ch]@19

  v3 = this;
  v4 = a3;
  v81 = a2;
  v5 = *((_BYTE *)a3 + 12);
  v7 = *(_QWORD *)Level::getUsers(*((Level **)this + 7));
  v6 = v7;
  if ( (_DWORD)v7 != HIDWORD(v7) )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)v6;
      if ( *((_DWORD *)v81 + 36) == *(_DWORD *)(*(_DWORD *)v6 + 4536)
        && NetworkIdentifier::equalsTypeData(v81, (const NetworkIdentifier *)(v8 + 4392)) == 1
        && Player::getClientSubId((Player *)v8) == v5 )
      {
        break;
      }
      v6 += 4;
      if ( HIDWORD(v7) == v6 )
        goto LABEL_6;
    }
    if ( v8 )
      return;
  }
LABEL_6:
  v9 = *((_DWORD *)v4 + 4);
  if ( v9 != 137 )
    v15 = 2;
    v136 = 2;
    v137 = 1;
    v138 = 0;
    v135 = &off_26E9314;
    if ( v9 < 137 )
      v15 = 1;
    v139 = v15;
    (*(void (**)(void))(**((_DWORD **)v3 + 11) + 16))();
    if ( v9 >= 137 )
      sub_21E94B4((void **)&v133, "disconnectionScreen.outdatedServer");
      ServerNetworkHandler::disconnectClient((int)v3, (int)v81, &v133, 0);
      v12 = (void *)(v133 - 12);
      if ( (int *)(v133 - 12) == &dword_28898C0 )
        return;
      v13 = (unsigned int *)(v133 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        goto LABEL_153;
    else
      sub_21E94B4((void **)&v134, "disconnectionScreen.outdatedClient");
      ServerNetworkHandler::disconnectClient((int)v3, (int)v81, &v134, 0);
      v12 = (void *)(v134 - 12);
      if ( (int *)(v134 - 12) == &dword_28898C0 )
      v13 = (unsigned int *)(v134 - 4);
    goto LABEL_152;
  v10 = (int)v3;
  if ( !*((_DWORD *)v4 + 5) )
    sub_21E94B4((void **)&v132, "disconnectionScreen.disconnected");
    ServerNetworkHandler::disconnectClient((int)v3, (int)v81, &v132, 0);
    v12 = (void *)(v132 - 12);
    if ( (int *)(v132 - 12) == &dword_28898C0 )
    v13 = (unsigned int *)(v132 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      goto LABEL_153;
  sub_21E034C(&v131);
  if ( ConnectionRequest::verify(
         *((_DWORD *)v4 + 5),
         (__int64 *)v3 + 38,
         v131 / 1000000000,
         (unsigned __int64)(v131 / 1000000000) >> 32)
    || !*((_BYTE *)v3 + 80) && ConnectionRequest::verifySelfSigned(*((ConnectionRequest **)v4 + 5)) )
    v11 = (const Certificate *)ConnectionRequest::getCertificate(*((ConnectionRequest **)v4 + 5));
    ExtendedCertificate::getIdentity((ExtendedCertificate *)&v128, v11);
    if ( Level::getPlayer(*((Level **)v3 + 7), (const mce::UUID *)&v128) )
      sub_21E94B4((void **)&v127, "disconnectionScreen.notAllowed");
      ServerNetworkHandler::disconnectClient((int)v3, (int)v81, &v127, 0);
      v12 = (void *)(v127 - 12);
      if ( (int *)(v127 - 12) == &dword_28898C0 )
      v13 = (unsigned int *)(v127 - 4);
LABEL_152:
      v14 = (*v13)--;
LABEL_153:
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    if ( !*((_BYTE *)v3 + 272) )
      ExtendedCertificate::getIdentity((ExtendedCertificate *)&v125, v11);
      if ( *((_QWORD *)v3 + 35) ^ v125 || *((_QWORD *)v3 + 36) != v126 )
        sub_21E94B4((void **)&v124, "disconnectionScreen.multiplayerDisabled");
        ServerNetworkHandler::disconnectClient((int)v3, (int)v81, &v124, 0);
        v12 = (void *)(v124 - 12);
        if ( (int *)(v124 - 12) == &dword_28898C0 )
          return;
        v13 = (unsigned int *)(v124 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          goto LABEL_153;
        }
        goto LABEL_152;
    v20 = ConnectionRequest::isEduMode(*((ConnectionRequest **)v4 + 5));
    v21 = Level::getLevelData(*((Level **)v3 + 7));
    if ( (LevelData::isEduLevel((LevelData *)v21) ^ v20) == 1 )
      v22 = Level::getLevelData(*((Level **)v3 + 7));
      v23 = LevelData::isEduLevel((LevelData *)v22);
      v120 = 2;
      v121 = 1;
      v122 = 0;
      v119 = &off_26E9314;
      v24 = 5;
      if ( v23 )
        v24 = 6;
      v123 = v24;
      (*(void (**)(void))(**((_DWORD **)v3 + 11) + 16))();
      v25 = "disconnectionScreen.editionMismatchVanillaToEdu";
      if ( !v23 )
        v25 = "disconnectionScreen.editionMismatchEduToVanilla";
      sub_21E94B4((void **)&v118, v25);
      ServerNetworkHandler::disconnectClient((int)v3, (int)v81, &v118, 0);
      v12 = (void *)(v118 - 12);
      if ( (int *)(v118 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v118 - 4);
    if ( (*(int (**)(void))(**((_DWORD **)v3 + 63) + 16))() == 1
      && !(*(int (**)(void))(**((_DWORD **)v3 + 63) + 20))()
      && *(_DWORD *)(*((_DWORD *)v3 + 65) - 12) )
      ConnectionRequest::getTenantId((ConnectionRequest *)&s2, *((_DWORD *)v4 + 5));
      v27 = (char *)s2;
      v28 = *(_DWORD **)(v10 + 260);
      v29 = (char *)s2 - 12;
      v30 = *(v28 - 3);
      if ( v30 == *((_DWORD *)s2 - 3) )
        v31 = memcmp(v28, s2, v30) != 0;
      else
        v31 = 1;
      if ( (int *)v29 != &dword_28898C0 )
        v63 = (unsigned int *)(v27 - 4);
            v64 = __ldrex(v63);
          while ( __strex(v64 - 1, v63) );
        else
          v64 = (*v63)--;
        if ( v64 <= 0 )
          j_j_j_j__ZdlPv_9(v29);
      if ( v31 == 1 )
        v113 = 2;
        v114 = 1;
        v115 = 0;
        v112 = &off_26E9314;
        v116 = 4;
        (*(void (**)(void))(**(_DWORD **)(v10 + 44) + 16))();
        sub_21E94B4((void **)&v111, "disconnectionScreen.invalidTenant");
        ServerNetworkHandler::disconnectClient(v10, (int)v81, &v111, 0);
        v12 = (void *)(v111 - 12);
        if ( (int *)(v111 - 12) == &dword_28898C0 )
        v13 = (unsigned int *)(v111 - 4);
    ExtendedCertificate::getIdentity((ExtendedCertificate *)&v110, v11);
    ExtendedCertificate::getXuid((ExtendedCertificate *)&v109, v11);
    if ( !*(_BYTE *)(v10 + 52)
      || Whitelist::isAllowed(*(unsigned __int64 **)(v10 + 56), (int)&v110, (const void **)&v109) )
      if ( Blacklist::isBlocked(v10 + 64, (int)&v110, &v109) == 1 )
        sub_21E94B4((void **)&v107, "disconnectionScreen.notAllowed");
        ServerNetworkHandler::disconnectClient(v10, (int)v81, &v107, 0);
        v34 = (void *)(v107 - 12);
        if ( (int *)(v107 - 12) == &dword_28898C0 )
          goto LABEL_147;
        v35 = (unsigned int *)(v107 - 4);
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
          goto LABEL_145;
LABEL_144:
        v36 = (*v35)--;
        goto LABEL_145;
      ConnectionRequest::getSkinData((ConnectionRequest *)&ptr, *((_DWORD *)v4 + 5));
      v37 = v106 - (_DWORD)ptr;
      if ( ptr )
        operator delete(ptr);
      v38 = v37 == 0x2000;
      if ( v37 != 0x2000 )
        v38 = v37 == 0x4000;
      if ( !v38 )
        sub_21E94B4((void **)&v104, "disconnectionScreen.invalidSkin");
        ServerNetworkHandler::disconnectClient(v10, (int)v81, &v104, 0);
        v34 = (void *)(v104 - 12);
        if ( (int *)(v104 - 12) == &dword_28898C0 )
        v35 = (unsigned int *)(v104 - 4);
        if ( !&pthread_create )
          goto LABEL_144;
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
      v39 = NetworkHandler::getEncryptedPeerForUser(*(NetworkHandler **)(v10 + 32), v81);
      if ( v39 )
        v40 = (ConnectionRequest **)std::__detail::_Map_base<NetworkIdentifier,std::pair<NetworkIdentifier const,std::unique_ptr<ConnectionRequest,std::default_delete<ConnectionRequest>>>,std::allocator<std::pair<NetworkIdentifier const,std::unique_ptr<ConnectionRequest,std::default_delete<ConnectionRequest>>>>,std::__detail::_Select1st,std::equal_to<NetworkIdentifier>,std::hash<NetworkIdentifier>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                      v10 + 320,
                                      v81);
        v41 = (int **)*((_DWORD *)v4 + 5);
        v42 = (int **)operator new(0x10u);
        ConnectionRequest::ConnectionRequest(v42, v41);
        v43 = *v40;
        *v40 = (ConnectionRequest *)v42;
        if ( v43 )
          v44 = ConnectionRequest::~ConnectionRequest(v43);
          operator delete((void *)v44);
        Crypto::Random::Random::Random((int)&v102);
        Crypto::Random::Random::getBytes((char *)&v103, (int)&v102, 0x10u);
        Crypto::Random::Random::~Random((FILE **)&v102);
        v45 = *(const KeyManager **)(v10 + 36);
        Certificate::getIdentityPublicKey((Certificate *)&v97, (int)v11);
        KeyManager::KeyManager((int)&v98, &v97, 5u);
        PrivateKeyManager::computeSecret((PrivateKeyManager *)&v101, v45, (int)&v98);
        v98 = &off_26D4D8C;
        if ( v100 )
          (*(void (**)(void))(*(_DWORD *)v100 + 4))();
        v100 = 0;
        v46 = (void *)(v99 - 12);
        if ( (int *)(v99 - 12) != &dword_28898C0 )
          v65 = (unsigned int *)(v99 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v66 = __ldrex(v65);
            while ( __strex(v66 - 1, v65) );
          }
          else
            v66 = (*v65)--;
          if ( v66 <= 0 )
            j_j_j_j__ZdlPv_9(v46);
        v47 = (void *)(v97 - 12);
        if ( (int *)(v97 - 12) != &dword_28898C0 )
          v67 = (unsigned int *)(v97 - 4);
              v68 = __ldrex(v67);
            while ( __strex(v68 - 1, v67) );
            v68 = (*v67)--;
          if ( v68 <= 0 )
            j_j_j_j__ZdlPv_9(v47);
        Json::Value::Value(&v96, 0);
        v48 = Json::Value::operator[]((Json::Value *)&v96, "salt");
        Util::base64_encode((Util *)&v94, (const unsigned __int8 **)&v103, 1);
        Json::Value::Value((int)&v95, (const char **)&v94);
        Json::Value::operator=(v48, (const Json::Value *)&v95);
        Json::Value::~Value((Json::Value *)&v95);
        v49 = (void *)(v94 - 12);
        if ( (int *)(v94 - 12) != &dword_28898C0 )
          v69 = (unsigned int *)(v94 - 4);
              v70 = __ldrex(v69);
            while ( __strex(v70 - 1, v69) );
            v70 = (*v69)--;
          if ( v70 <= 0 )
            j_j_j_j__ZdlPv_9(v49);
        if ( (*(int (**)(void))(**(_DWORD **)(v10 + 252) + 16))() == 1 )
          v50 = Json::Value::operator[]((Json::Value *)&v96, "signedToken");
          Json::Value::Value((int)&v93, (const char **)(v10 + 264));
          Json::Value::operator=(v50, (const Json::Value *)&v93);
          Json::Value::~Value((Json::Value *)&v93);
        WebToken::createFromData((WebToken *)&v92, (const Json::Value *)&v96, *(const PrivateKeyManager **)(v10 + 36));
        WebToken::toString((WebToken *)&v86, (int *)v92);
        v88 = 2;
        v89 = 1;
        v90 = 0;
        v87 = &off_26E933C;
        sub_21E8AF4(&v91, &v86);
        v51 = (void *)(v86 - 12);
        if ( (int *)(v86 - 12) != &dword_28898C0 )
          v71 = (unsigned int *)(v86 - 4);
              v72 = __ldrex(v71);
            while ( __strex(v72 - 1, v71) );
            v72 = (*v71)--;
          if ( v72 <= 0 )
            j_j_j_j__ZdlPv_9(v51);
        v52 = *(void (**)(void))(**(_DWORD **)(v10 + 44) + 28);
        v85 = 0;
        v52();
        if ( v85 )
          v85();
        sub_21E8AF4(&v83, &v103);
        sub_21E72F0((const void **)&v83, (const void **)&v101);
        Crypto::Hash::hash((Crypto *)&v84, 2, &v83);
        v53 = (void *)(v83 - 12);
        if ( (int *)(v83 - 12) != &dword_28898C0 )
          v73 = (unsigned int *)(v83 - 4);
              v74 = __ldrex(v73);
            while ( __strex(v74 - 1, v73) );
            v74 = (*v73)--;
          if ( v74 <= 0 )
            j_j_j_j__ZdlPv_9(v53);
        EncryptedNetworkPeer::enableEncryption(v39, &v84);
        NetworkHandler::enableAsyncFlush(*(NetworkHandler **)(v10 + 32), v81);
        v54 = (void *)(v84 - 12);
        if ( (int *)(v84 - 12) != &dword_28898C0 )
          v75 = (unsigned int *)(v84 - 4);
              v76 = __ldrex(v75);
            while ( __strex(v76 - 1, v75) );
            v76 = (*v75)--;
          if ( v76 <= 0 )
            j_j_j_j__ZdlPv_9(v54);
        v55 = (void *)(v91 - 12);
        if ( (int *)(v91 - 12) != &dword_28898C0 )
          v77 = (unsigned int *)(v91 - 4);
              v78 = __ldrex(v77);
            while ( __strex(v78 - 1, v77) );
            v78 = (*v77)--;
          if ( v78 <= 0 )
            j_j_j_j__ZdlPv_9(v55);
        if ( v92 )
          v56 = WebToken::~WebToken(v92);
          operator delete((void *)v56);
        Json::Value::~Value((Json::Value *)&v96);
        v57 = (void *)(v101 - 12);
        if ( (int *)(v101 - 12) != &dword_28898C0 )
          v79 = (unsigned int *)(v101 - 4);
              v80 = __ldrex(v79);
            while ( __strex(v80 - 1, v79) );
            v80 = (*v79)--;
          if ( v80 <= 0 )
            j_j_j_j__ZdlPv_9(v57);
        v34 = (void *)(v103 - 12);
        if ( (int *)(v103 - 12) != &dword_28898C0 )
          v35 = (unsigned int *)(v103 - 4);
          if ( !&pthread_create )
            goto LABEL_144;
LABEL_145:
          if ( v36 <= 0 )
            j_j_j_j__ZdlPv_9(v34);
        if ( !NetworkHandler::getPeerForUser(*(NetworkHandler **)(v10 + 32), v81) )
          sub_21E94B4((void **)&v82, "disconnectionScreen.disconnected");
          ServerNetworkHandler::disconnectClient(v10, (int)v81, &v82, 0);
          v34 = (void *)(v82 - 12);
          if ( (int *)(v82 - 12) == &dword_28898C0 )
            goto LABEL_147;
          v35 = (unsigned int *)(v82 - 4);
        v58 = (ConnectionRequest **)std::__detail::_Map_base<NetworkIdentifier,std::pair<NetworkIdentifier const,std::unique_ptr<ConnectionRequest,std::default_delete<ConnectionRequest>>>,std::allocator<std::pair<NetworkIdentifier const,std::unique_ptr<ConnectionRequest,std::default_delete<ConnectionRequest>>>>,std::__detail::_Select1st,std::equal_to<NetworkIdentifier>,std::hash<NetworkIdentifier>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
        v59 = (int **)*((_DWORD *)v4 + 5);
        v60 = (int **)operator new(0x10u);
        ConnectionRequest::ConnectionRequest(v60, v59);
        v61 = *v58;
        *v58 = (ConnectionRequest *)v60;
        if ( v61 )
          v62 = ConnectionRequest::~ConnectionRequest(v61);
          operator delete((void *)v62);
        ServerNetworkHandler::_onClientAuthenticated((ServerNetworkHandler *)v10, v81, v11);
LABEL_147:
      v12 = (void *)(v109 - 12);
      if ( (int *)(v109 - 12) == &dword_28898C0 )
      v13 = (unsigned int *)(v109 - 4);
      goto LABEL_152;
    sub_21E94B4((void **)&v108, "disconnectionScreen.notAllowed");
    ServerNetworkHandler::disconnectClient(v10, (int)v81, &v108, 0);
    v34 = (void *)(v108 - 12);
    if ( (int *)(v108 - 12) == &dword_28898C0 )
      goto LABEL_147;
    v35 = (unsigned int *)(v108 - 4);
    if ( !&pthread_create )
      goto LABEL_144;
    __dmb();
    do
      v36 = __ldrex(v35);
    while ( __strex(v36 - 1, v35) );
    goto LABEL_145;
  if ( ConnectionRequest::getCertificate(*((ConnectionRequest **)v4 + 5)) )
    v16 = (Certificate *)ConnectionRequest::getCertificate(*((ConnectionRequest **)v4 + 5));
    Certificate::isValid(v16);
    v17 = (Certificate *)ConnectionRequest::getCertificate(*((ConnectionRequest **)v4 + 5));
    Certificate::getNotBeforeDate(v17);
    v18 = (Certificate *)ConnectionRequest::getCertificate(*((ConnectionRequest **)v4 + 5));
    Certificate::getExpirationDate(v18);
  ConnectionRequest::verifySelfSigned(*((ConnectionRequest **)v4 + 5));
    v19 = ConnectionRequest::getCertificate(*((ConnectionRequest **)v4 + 5));
    Certificate::getIdentityPublicKey((Certificate *)&v130, v19);
  else
    sub_21E94B4((void **)&v130, "(null)");
  sub_21E94B4((void **)&v129, "disconnectionScreen.notAuthenticated");
  ServerNetworkHandler::disconnectClient((int)v3, (int)v81, &v129, 0);
  v26 = (void *)(v129 - 12);
  if ( (int *)(v129 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v129 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v12 = (void *)(v130 - 12);
  if ( (int *)(v130 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v130 - 4);
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const ModalFormResponsePacket *a3)
{
  ServerNetworkHandler::handle(this, a2, a3);
}


int __fastcall ServerNetworkHandler::setIsTrial(int result, bool a2)
{
  *(_BYTE *)(result + 348) = a2;
  return result;
}


char *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const RequestChunkRadiusPacket *a3)
{
  const RequestChunkRadiusPacket *v3; // r8@1
  const NetworkIdentifier *v4; // r5@1
  char *v5; // r9@1
  char *result; // r0@1
  int v7; // r4@1
  int v8; // r7@1
  int v9; // r6@2

  v3 = a3;
  v4 = a2;
  v5 = (char *)*((_BYTE *)a3 + 12);
  result = Level::getUsers(*((Level **)this + 7));
  v8 = *(_QWORD *)result >> 32;
  v7 = *(_QWORD *)result;
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)v7;
      result = (char *)*((_DWORD *)v4 + 36);
      if ( result == *(char **)(*(_DWORD *)v7 + 4536) )
      {
        result = (char *)NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v9 + 4392));
        if ( result == (char *)1 )
        {
          result = (char *)Player::getClientSubId((Player *)v9);
          if ( result == v5 )
            break;
        }
      }
      v7 += 4;
      if ( v8 == v7 )
        return result;
    }
    if ( v9 )
      result = (char *)j_j_j__ZN12ServerPlayer20setClientChunkRadiusEj((ServerPlayer *)v9, *((_DWORD *)v3 + 4));
  }
  return result;
}


int *__fastcall ServerNetworkHandler::setTenantId(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int *result; // r0@1

  v2 = a1;
  v3 = a2;
  result = (int *)(*(int (**)(void))(**(_DWORD **)(a1 + 252) + 16))();
  if ( result == (int *)1 )
    result = EntityInteraction::setInteractText((int *)(v2 + 260), v3);
  return result;
}


int __fastcall ServerNetworkHandler::_getServerPlayer(ServerNetworkHandler *this, const NetworkIdentifier *a2, int a3)
{
  int v3; // r8@1
  const NetworkIdentifier *v4; // r5@1
  int v5; // r7@1
  __int64 v6; // kr00_8@1
  int v7; // r6@2

  v3 = a3;
  v4 = a2;
  v6 = *(_QWORD *)Level::getUsers(*((Level **)this + 7));
  v5 = v6;
  if ( (_DWORD)v6 == HIDWORD(v6) )
  {
LABEL_6:
    v7 = 0;
  }
  else
    while ( 1 )
    {
      v7 = *(_DWORD *)v5;
      if ( *((_DWORD *)v4 + 36) == *(_DWORD *)(*(_DWORD *)v5 + 4536)
        && NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v7 + 4392)) == 1
        && Player::getClientSubId((Player *)v7) == v3 )
      {
        break;
      }
      v5 += 4;
      if ( HIDWORD(v6) == v5 )
        goto LABEL_6;
    }
  return v7;
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const BookEditPacket *a3)
{
  ServerNetworkHandler::handle(this, a2, a3);
}


char *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const ItemFrameDropItemPacket *a3)
{
  const ItemFrameDropItemPacket *v3; // r8@1
  const NetworkIdentifier *v4; // r6@1
  char *v5; // r9@1
  char *result; // r0@1
  int v7; // r4@1
  int v8; // r7@1
  int v9; // r5@2
  BlockSource *v10; // r0@8
  BlockSource *v11; // r6@8
  ItemFrameBlockEntity *v12; // r4@8
  int v13; // r2@10

  v3 = a3;
  v4 = a2;
  v5 = (char *)*((_BYTE *)a3 + 12);
  result = Level::getUsers(*((Level **)this + 7));
  v8 = *(_QWORD *)result >> 32;
  v7 = *(_QWORD *)result;
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)v7;
      result = (char *)*((_DWORD *)v4 + 36);
      if ( result == *(char **)(*(_DWORD *)v7 + 4536) )
      {
        result = (char *)NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v9 + 4392));
        if ( result == (char *)1 )
        {
          result = (char *)Player::getClientSubId((Player *)v9);
          if ( result == v5 )
            break;
        }
      }
      v7 += 4;
      if ( v8 == v7 )
        return result;
    }
    if ( v9 )
      v10 = (BlockSource *)Entity::getRegion((Entity *)v9);
      v11 = v10;
      result = (char *)BlockSource::getBlockEntity(v10, (const ItemFrameDropItemPacket *)((char *)v3 + 16));
      v12 = (ItemFrameBlockEntity *)result;
      if ( result )
        result = (char *)BlockEntity::isType((int)result, 17);
          v13 = Player::isInCreativeMode((Player *)v9) ^ 1;
          result = (char *)j_j_j__ZN20ItemFrameBlockEntity14dropFramedItemER11BlockSourceb(v12, v11, v13);
  }
  return result;
}


void __fastcall ServerNetworkHandler::onXboxUserUnblocked(int a1, int *a2)
{
  int v2; // r4@1
  void *v3; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+0h] [bp-30h]@1
  int v7; // [sp+4h] [bp-2Ch]@1
  int v8; // [sp+8h] [bp-28h]@1
  int v9; // [sp+Ch] [bp-24h]@1
  int v10; // [sp+10h] [bp-20h]@1

  v2 = a1;
  v8 = 0;
  v9 = 0;
  v6 = 0;
  v7 = 0;
  sub_21E8AF4(&v10, a2);
  Blacklist::removeEntry(v2 + 64, (int)&v6);
  v3 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v10 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
}


int __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const EntityPickRequestPacket *a3)
{
  ServerNetworkHandler *v3; // r10@1
  const EntityPickRequestPacket *v4; // r9@1
  const NetworkIdentifier *v5; // r7@1
  int v6; // r6@1
  __int64 v7; // r4@1
  int v8; // r11@1
  Boat *v9; // r7@7
  signed int v10; // r0@7
  int (__fastcall *v11)(Boat *); // r1@7
  int v12; // r0@8
  int v13; // r4@9
  int v14; // r0@9
  int v15; // r0@9
  int v16; // r0@16
  int v17; // r4@20
  int v18; // r0@20
  int v19; // r4@87
  void (__fastcall *v20)(int, int, void ***, int); // r5@87
  int v21; // r0@87
  int v22; // r0@87
  int v23; // r7@87
  PlayerInventoryProxy *v24; // r0@87
  PlayerInventoryProxy *v25; // r0@87
  unsigned __int64 *v26; // r0@87
  int v27; // r4@87
  void (__fastcall *v28)(int, int, void ***, int); // r5@87
  int v29; // r0@87
  __int64 v30; // r4@89
  void *v31; // r0@90
  void *v32; // r0@92
  int v33; // r0@94
  int result; // r0@104
  char v35; // [sp+Ch] [bp-38Ch]@87
  int v36; // [sp+10h] [bp-388h]@87
  void **v37; // [sp+14h] [bp-384h]@87
  void *v38; // [sp+2Ch] [bp-36Ch]@87
  void **v39; // [sp+38h] [bp-360h]@87
  __int64 v40; // [sp+48h] [bp-350h]@89
  int v41; // [sp+54h] [bp-344h]@87
  char v42; // [sp+58h] [bp-340h]@43
  int v43; // [sp+60h] [bp-338h]@47
  void *v44; // [sp+7Ch] [bp-31Ch]@45
  void *v45; // [sp+8Ch] [bp-30Ch]@43
  char v46; // [sp+A0h] [bp-2F8h]@50
  int v47; // [sp+A8h] [bp-2F0h]@54
  void *v48; // [sp+C4h] [bp-2D4h]@52
  void *v49; // [sp+D4h] [bp-2C4h]@50
  char v50; // [sp+E8h] [bp-2B0h]@20
  int v51; // [sp+F0h] [bp-2A8h]@24
  void *v52; // [sp+10Ch] [bp-28Ch]@22
  void *v53; // [sp+11Ch] [bp-27Ch]@20
  char v54; // [sp+130h] [bp-268h]@79
  int v55; // [sp+138h] [bp-260h]@83
  void *v56; // [sp+154h] [bp-244h]@81
  void *v57; // [sp+164h] [bp-234h]@79
  char v58; // [sp+178h] [bp-220h]@65
  int v59; // [sp+180h] [bp-218h]@69
  void *v60; // [sp+19Ch] [bp-1FCh]@67
  void *v61; // [sp+1ACh] [bp-1ECh]@65
  char v62; // [sp+1C0h] [bp-1D8h]@58
  int v63; // [sp+1C8h] [bp-1D0h]@62
  void *v64; // [sp+1E4h] [bp-1B4h]@60
  void *v65; // [sp+1F4h] [bp-1A4h]@58
  char v66; // [sp+208h] [bp-190h]@28
  int v67; // [sp+210h] [bp-188h]@32
  void *v68; // [sp+22Ch] [bp-16Ch]@30
  void *v69; // [sp+23Ch] [bp-15Ch]@28
  char v70; // [sp+250h] [bp-148h]@72
  int v71; // [sp+258h] [bp-140h]@76
  void *v72; // [sp+274h] [bp-124h]@74
  void *v73; // [sp+284h] [bp-114h]@72
  char v74; // [sp+298h] [bp-100h]@36
  int v75; // [sp+2A0h] [bp-F8h]@40
  void *v76; // [sp+2BCh] [bp-DCh]@38
  void *v77; // [sp+2CCh] [bp-CCh]@36
  char v78; // [sp+2E0h] [bp-B8h]@9
  int v79; // [sp+2E8h] [bp-B0h]@13
  void *v80; // [sp+304h] [bp-94h]@11
  void *ptr; // [sp+314h] [bp-84h]@9
  char v82; // [sp+328h] [bp-70h]@7
  int v83; // [sp+330h] [bp-68h]@104
  void *v84; // [sp+34Ch] [bp-4Ch]@102
  void *v85; // [sp+35Ch] [bp-3Ch]@100

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = *((_BYTE *)a3 + 12);
  v7 = *(_QWORD *)Level::getUsers(*((Level **)this + 7));
  v8 = 0;
  if ( (_DWORD)v7 != HIDWORD(v7) )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)v7;
      if ( *((_DWORD *)v5 + 36) == *(_DWORD *)(*(_DWORD *)v7 + 4536)
        && NetworkIdentifier::equalsTypeData(v5, (const NetworkIdentifier *)(v8 + 4392)) == 1
        && Player::getClientSubId((Player *)v8) == v6 )
      {
        break;
      }
      LODWORD(v7) = v7 + 4;
      if ( HIDWORD(v7) == (_DWORD)v7 )
        v8 = 0;
    }
  }
  v9 = (Boat *)Level::fetchEntity(*((_DWORD *)v3 + 7), 0, *((_QWORD *)v4 + 2), *((_QWORD *)v4 + 2) >> 32, 0);
  ItemInstance::ItemInstance((int)&v82);
  v10 = Entity::hasCategory((int)v9, 2);
  v11 = *(int (__fastcall **)(Boat *))(*(_DWORD *)v9 + 488);
  if ( v10 == 1 )
    v12 = v11(v9);
    if ( Entity::isSpawnableInCreative(v12) == 1 )
      v13 = Item::mMobPlacer;
      v14 = (*(int (__fastcall **)(Boat *))(*(_DWORD *)v9 + 488))(v9);
      v15 = EntityClassTree::getEntityTypeIdLegacy(v14);
      ItemInstance::ItemInstance((ItemInstance *)&v78, v13, 1, v15);
      ItemInstance::operator=((int)&v82, (int)&v78);
      if ( ptr )
        operator delete(ptr);
      if ( v80 )
        operator delete(v80);
      if ( v79 )
        (*(void (**)(void))(*(_DWORD *)v79 + 4))();
      v79 = 0;
    else if ( (*(int (__fastcall **)(Boat *))(*(_DWORD *)v9 + 488))(v9) == 317 )
      ItemInstance::ItemInstance((ItemInstance *)&v74, Item::mArmorStand);
      ItemInstance::operator=((int)&v82, (int)&v74);
      if ( v77 )
        operator delete(v77);
      if ( v76 )
        operator delete(v76);
      if ( v75 )
        (*(void (**)(void))(*(_DWORD *)v75 + 4))();
      v75 = 0;
  else
    v16 = v11(v9);
    if ( v16 > 524371 )
      switch ( v16 )
        case 524384:
          ItemInstance::ItemInstance((ItemInstance *)&v66, Item::mHopperMinecart);
          ItemInstance::operator=((int)&v82, (int)&v66);
          if ( v69 )
            operator delete(v69);
          if ( v68 )
            operator delete(v68);
          if ( v67 )
            (*(void (**)(void))(*(_DWORD *)v67 + 4))();
          v67 = 0;
          break;
        case 524385:
          ItemInstance::ItemInstance((ItemInstance *)&v58, Item::mTNTMinecart);
          ItemInstance::operator=((int)&v82, (int)&v58);
          if ( v61 )
            operator delete(v61);
          if ( v60 )
            operator delete(v60);
          if ( v59 )
            (*(void (**)(void))(*(_DWORD *)v59 + 4))();
          v59 = 0;
        case 524386:
          ItemInstance::ItemInstance((ItemInstance *)&v70, Item::mChestMinecart);
          ItemInstance::operator=((int)&v82, (int)&v70);
          if ( v73 )
            operator delete(v73);
          if ( v72 )
            operator delete(v72);
          if ( v71 )
            (*(void (**)(void))(*(_DWORD *)v71 + 4))();
          v71 = 0;
        case 524388:
          ItemInstance::ItemInstance((ItemInstance *)&v54, Item::mCommandBlockMinecart);
          ItemInstance::operator=((int)&v82, (int)&v54);
          if ( v57 )
            operator delete(v57);
          if ( v56 )
            operator delete(v56);
          if ( v55 )
            (*(void (**)(void))(*(_DWORD *)v55 + 4))();
          v55 = 0;
        case 524387:
        default:
          if ( v16 == 524372 )
          {
            ItemInstance::ItemInstance((ItemInstance *)&v62, Item::mMinecart);
            ItemInstance::operator=((int)&v82, (int)&v62);
            if ( v65 )
              operator delete(v65);
            if ( v64 )
              operator delete(v64);
            if ( v63 )
              (*(void (**)(void))(*(_DWORD *)v63 + 4))();
            v63 = 0;
          }
    else
        case 71:
          ItemInstance::ItemInstance((ItemInstance *)&v42, Item::mEndCrystal);
          ItemInstance::operator=((int)&v82, (int)&v42);
          if ( v45 )
            operator delete(v45);
          if ( v44 )
            operator delete(v44);
          if ( v43 )
            (*(void (**)(void))(*(_DWORD *)v43 + 4))();
          v43 = 0;
        case 83:
          ItemInstance::ItemInstance((ItemInstance *)&v46, Item::mPainting);
          ItemInstance::operator=((int)&v82, (int)&v46);
          if ( v49 )
            operator delete(v49);
          if ( v48 )
            operator delete(v48);
          if ( v47 )
            (*(void (**)(void))(*(_DWORD *)v47 + 4))();
          v47 = 0;
        case 90:
          v17 = Item::mBoat;
          v18 = Boat::getWoodID(v9);
          ItemInstance::ItemInstance((ItemInstance *)&v50, v17, 1, v18);
          ItemInstance::operator=((int)&v82, (int)&v50);
          if ( v53 )
            operator delete(v53);
          if ( v52 )
            operator delete(v52);
          if ( v51 )
            (*(void (**)(void))(*(_DWORD *)v51 + 4))();
          v51 = 0;
  if ( !ItemInstance::isNull((ItemInstance *)&v82) )
    v41 = *((_BYTE *)v4 + 24);
    ServerPlayer::addItemCreative((ServerPlayer *)v8, (const ItemInstance *)&v82, &v41);
    InventoryContentPacket::fromPlayerInventoryId((int)&v39, 0, (Mob *)v8);
    v19 = *((_DWORD *)v3 + 11);
    v20 = *(void (__fastcall **)(int, int, void ***, int))(*(_DWORD *)v19 + 16);
    v21 = Player::getClientSubId((Player *)v8);
    v20(v19, v8 + 4392, &v39, v21);
    v22 = Player::getSupplies((Player *)v8);
    PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v35, v22);
    v23 = v36;
    v24 = (PlayerInventoryProxy *)Player::getSupplies((Player *)v8);
    LOBYTE(v19) = PlayerInventoryProxy::getSelectedContainerId(v24);
    v25 = (PlayerInventoryProxy *)Player::getSupplies((Player *)v8);
    v26 = (unsigned __int64 *)PlayerInventoryProxy::getLinkedSlots(v25);
    PlayerHotbarPacket::PlayerHotbarPacket((int)&v37, v23, v19, v26, 1);
    v27 = *((_DWORD *)v3 + 11);
    v28 = *(void (__fastcall **)(int, int, void ***, int))(*(_DWORD *)v27 + 16);
    v29 = Player::getClientSubId((Player *)v8);
    v28(v27, v8 + 4392, &v37, v29);
    v37 = &off_26DA620;
    if ( v38 )
      operator delete(v38);
    v39 = &off_26E974C;
    v30 = v40;
    if ( (_DWORD)v40 != HIDWORD(v40) )
      do
        v31 = *(void **)(v30 + 52);
        if ( v31 )
          operator delete(v31);
        v32 = *(void **)(v30 + 36);
        if ( v32 )
          operator delete(v32);
        v33 = *(_DWORD *)(v30 + 8);
        if ( v33 )
          (*(void (**)(void))(*(_DWORD *)v33 + 4))();
        *(_DWORD *)(v30 + 8) = 0;
        LODWORD(v30) = v30 + 72;
      while ( HIDWORD(v30) != (_DWORD)v30 );
      LODWORD(v30) = v40;
    if ( (_DWORD)v30 )
      operator delete((void *)v30);
  if ( v85 )
    operator delete(v85);
  if ( v84 )
    operator delete(v84);
  result = v83;
  if ( v83 )
    result = (*(int (**)(void))(*(_DWORD *)v83 + 4))();
  return result;
}


BossComponent *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const BossEventPacket *a3)
{
  const BossEventPacket *v3; // r4@1
  ServerNetworkHandler *v4; // r5@1
  Entity *v5; // r6@1
  int v6; // r1@1
  BossComponent *result; // r0@1
  Player *v8; // r5@1
  bool v9; // zf@1
  int v10; // r1@5

  v3 = a3;
  v4 = this;
  v5 = (Entity *)Level::fetchEntity(*((_DWORD *)this + 7), (int)a2, *((_QWORD *)a3 + 3), *((_QWORD *)a3 + 3) >> 32, 0);
  result = (BossComponent *)Level::fetchEntity(
                              *((_DWORD *)v4 + 7),
                              v6,
                              *((_QWORD *)v3 + 4),
                              *((_QWORD *)v3 + 4) >> 32,
                              0);
  v8 = result;
  v9 = v5 == 0;
  if ( v5 )
    v9 = result == 0;
  if ( !v9 )
  {
    result = (BossComponent *)Entity::getBossComponent(v5);
    if ( result )
    {
      v10 = *((_DWORD *)v3 + 10);
      if ( v10 == 3 )
      {
        result = (BossComponent *)j_j_j__ZN13BossComponent16unRegisterPlayerEP6Player(result, v8);
      }
      else if ( v10 == 1 )
        result = (BossComponent *)j_j_j__ZN13BossComponent14registerPlayerEP6Player(result, v8);
    }
  }
  return result;
}


Entity *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const AnimatePacket *a3)
{
  const AnimatePacket *v3; // r8@1
  const NetworkIdentifier *v4; // r6@1
  Entity *v5; // r9@1
  Entity *result; // r0@1
  int *v7; // r4@1
  int *v8; // r7@1
  int v9; // r5@2
  Dimension *v10; // r0@10
  Entity *v11; // r6@13
  int v12; // r2@16
  Entity *v13; // r0@16
  int v14; // r1@16
  Dimension *v15; // r0@19
  Entity *v16; // r6@20
  __int64 v17; // [sp+0h] [bp-30h]@18

  v3 = a3;
  v4 = a2;
  v5 = (Entity *)*((_BYTE *)a3 + 12);
  result = (Entity *)Level::getUsers(*((Level **)this + 7));
  v8 = (int *)(*(_QWORD *)result >> 32);
  v7 = (int *)*(_QWORD *)result;
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      v9 = *v7;
      result = (Entity *)*((_DWORD *)v4 + 36);
      if ( result == *(Entity **)(*v7 + 4536) )
      {
        result = (Entity *)NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v9 + 4392));
        if ( result == (Entity *)1 )
        {
          result = (Entity *)Player::getClientSubId((Player *)v9);
          if ( result == v5 )
            break;
        }
      }
      ++v7;
      if ( v8 == v7 )
        return result;
    }
    if ( v9 )
      result = (Entity *)*((_DWORD *)v3 + 6);
      if ( (signed int)result > 127 )
        if ( result == (Entity *)128 )
          result = (Entity *)Entity::getRide((Entity *)v9);
          v16 = result;
          if ( !result )
            return result;
          result = (Entity *)Entity::hasCategory((int)result, 131328);
          if ( result != (Entity *)1 )
          result = (Entity *)Entity::isRider(v16, (Entity *)v9);
          v12 = *((_DWORD *)v3 + 7);
          v13 = v16;
          v14 = 1;
        else
          if ( result != (Entity *)129 )
          v11 = result;
          result = (Entity *)Entity::isRider(v11, (Entity *)v9);
          v13 = v11;
          v14 = 0;
        return j_j_j__ZN4Boat13setRowingTimeE4Sidef_0(v13, v14, v12);
      if ( (unsigned int)result - 4 >= 2 )
          Entity::getRuntimeID((Entity *)&v17, v9);
          result = (Entity *)(*((_QWORD *)v3 + 2) ^ v17 | (*((_QWORD *)v3 + 2) >> 32) ^ HIDWORD(v17));
          if ( *((_QWORD *)v3 + 2) == v17 )
          {
            (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 928))(v9);
            v15 = (Dimension *)Entity::getDimension((Entity *)v9);
            result = (Entity *)Dimension::sendPacketForEntity(v15, (const Entity *)v9, v3, (const Player *)v9);
          }
      else
        v10 = (Dimension *)Entity::getDimension((Entity *)v9);
        result = (Entity *)j_j_j__ZN9Dimension19sendPacketForEntityERK6EntityRK6PacketPK6Player_0(
                             v10,
                             (const Entity *)v9,
                             v3,
                             (const Player *)v9);
  }
  return result;
}


signed int __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const ResourcePackChunkRequestPacket *a3)
{
  const ResourcePackChunkRequestPacket *v3; // r4@1
  FileUploadManager *v4; // r0@1

  v3 = a3;
  v4 = (FileUploadManager *)NetworkHandler::getResourcePackUploadManager(
                              *((_DWORD *)this + 8),
                              *((_DWORD *)this + 11),
                              a2,
                              (unsigned int)a3 + 16);
  return j_j_j__ZN17FileUploadManager11uploadChunkEi(v4, *((_DWORD *)v3 + 5));
}


int __fastcall ServerNetworkHandler::onDisconnect(int a1, NetworkIdentifier *a2)
{
  NetworkIdentifier *v2; // r5@1
  int v3; // r10@1
  unsigned int v4; // r0@1
  __int64 v5; // kr00_8@1
  unsigned int v6; // r11@1
  int v7; // r9@1
  int *v8; // r6@1
  int v9; // r8@2
  int v10; // r4@2
  int v11; // r7@6
  ServerPlayer **v12; // r4@8
  __int64 v13; // kr08_8@8
  int v14; // r0@13

  v2 = a2;
  v3 = a1;
  v4 = NetworkIdentifier::getHash(a2);
  v5 = *(_QWORD *)(v3 + 320);
  v6 = v4;
  v7 = v4 % HIDWORD(v5);
  v8 = *(int **)(v5 + 4 * (v4 % HIDWORD(v5)));
  if ( v8 )
  {
    v9 = *v8;
    v10 = *(_DWORD *)(*v8 + 168);
    while ( v10 != v6
         || *((_DWORD *)v2 + 36) != *(_DWORD *)(v9 + 152)
         || !NetworkIdentifier::equalsTypeData(v2, (const NetworkIdentifier *)(v9 + 8)) )
    {
      v11 = *(_DWORD *)v9;
      if ( *(_DWORD *)v9 )
      {
        v10 = *(_DWORD *)(v11 + 168);
        v8 = (int *)v9;
        v9 = *(_DWORD *)v9;
        if ( *(_DWORD *)(v11 + 168) % *(_DWORD *)(v3 + 324) == v7 )
          continue;
      }
      goto LABEL_8;
    }
    if ( v8 )
      std::_Hashtable<NetworkIdentifier,std::pair<NetworkIdentifier const,std::unique_ptr<ConnectionRequest,std::default_delete<ConnectionRequest>>>,std::allocator<std::pair<NetworkIdentifier const,std::unique_ptr<ConnectionRequest,std::default_delete<ConnectionRequest>>>>,std::__detail::_Select1st,std::equal_to<NetworkIdentifier>,std::hash<NetworkIdentifier>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(
        v3 + 320,
        v7,
        v8,
        *v8);
  }
LABEL_8:
  NetworkHandler::setCloseConnection(*(NetworkHandler **)(v3 + 32), v2);
  v13 = *(_QWORD *)Level::getUsers(*(Level **)(v3 + 28));
  v12 = (ServerPlayer **)v13;
  if ( (_DWORD)v13 != HIDWORD(v13) )
    do
      if ( *((_DWORD *)*v12 + 1134) == *((_DWORD *)v2 + 36)
        && NetworkIdentifier::equalsTypeData((ServerPlayer *)((char *)*v12 + 4392), v2) == 1 )
        ServerNetworkHandler::_onPlayerLeft((ServerNetworkHandler *)v3, *v12);
      ++v12;
    while ( (ServerPlayer **)HIDWORD(v13) != v12 );
  v14 = *(_DWORD *)(v3 + 28);
  if ( *(_BYTE *)(v14 + 5865) )
    Level::forceFlushRemovedPlayers((Level *)v14);
  return j_j_j__ZN20ServerNetworkHandler24updateServerAnnouncementEv((ServerNetworkHandler *)v3);
}


void __fastcall ServerNetworkHandler::addToBlacklist(int a1, int a2, int *a3)
{
  ServerNetworkHandler::addToBlacklist(a1, a2, a3);
}


unsigned __int64 *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const MobArmorEquipmentPacket *a3)
{
  const NetworkIdentifier *v3; // r7@1
  unsigned __int64 *v4; // r10@1
  unsigned __int64 *result; // r0@1
  int *v6; // r6@1
  int *v7; // r8@1
  int v8; // r5@2
  Dimension *v9; // r0@11
  ServerNetworkHandler *v10; // [sp+0h] [bp-170h]@1
  const MobArmorEquipmentPacket *v11; // [sp+4h] [bp-16Ch]@1
  __int64 v12; // [sp+8h] [bp-168h]@8
  char v13; // [sp+140h] [bp-30h]@11

  v10 = this;
  v3 = a2;
  v11 = a3;
  v4 = (unsigned __int64 *)*((_BYTE *)a3 + 12);
  result = (unsigned __int64 *)Level::getUsers(*((Level **)this + 7));
  v7 = (int *)(*result >> 32);
  v6 = (int *)*result;
  if ( v6 != v7 )
  {
    while ( 1 )
    {
      v8 = *v6;
      result = (unsigned __int64 *)*((_DWORD *)v3 + 36);
      if ( result == *(unsigned __int64 **)(*v6 + 4536) )
      {
        result = (unsigned __int64 *)NetworkIdentifier::equalsTypeData(v3, (const NetworkIdentifier *)(v8 + 4392));
        if ( result == (unsigned __int64 *)1 )
        {
          result = (unsigned __int64 *)Player::getClientSubId((Player *)v8);
          if ( result == v4 )
            break;
        }
      }
      ++v6;
      if ( v7 == v6 )
        return result;
    }
    if ( v8 )
      Entity::getRuntimeID((Entity *)&v12, v8);
      result = (unsigned __int64 *)(*((_QWORD *)v11 + 2) ^ v12 | (*((_QWORD *)v11 + 2) >> 32) ^ HIDWORD(v12));
      if ( *((_QWORD *)v11 + 2) == v12 )
        if ( *((_DWORD *)v10 + 58) != *(_DWORD *)(v8 + 4536)
          || (result = (unsigned __int64 *)NetworkIdentifier::equalsTypeData(
                                             (ServerNetworkHandler *)((char *)v10 + 88),
                                             (const NetworkIdentifier *)(v8 + 4392))) == 0 )
          MobArmorEquipmentPacket::MobArmorEquipmentPacket((int)&v12, (int)v11);
          v13 = 1;
          v9 = (Dimension *)Entity::getDimension((Entity *)v8);
          Dimension::sendPacketForEntity(v9, (const Entity *)v8, (const Packet *)&v12, (const Player *)v8);
          result = (unsigned __int64 *)MobArmorEquipmentPacket::~MobArmorEquipmentPacket((MobArmorEquipmentPacket *)&v12);
  }
  return result;
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const CommandBlockUpdatePacket *a3)
{
  ServerNetworkHandler::handle(this, a2, a3);
}


int __fastcall ServerNetworkHandler::activateWhitelist(int result)
{
  *(_BYTE *)(result + 52) = 1;
  return result;
}


unsigned __int64 *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const MovePlayerPacket *a3)
{
  const MovePlayerPacket *v3; // r8@1
  const NetworkIdentifier *v4; // r6@1
  unsigned __int64 *v5; // r9@1
  unsigned __int64 *result; // r0@1
  int *v7; // r4@1
  int *v8; // r7@1
  int v10; // r1@11
  float v11; // r2@11
  unsigned int v17; // r0@17
  unsigned int v18; // r0@19
  int v19; // r2@23
  __int64 *v20; // r1@23
  signed int v21; // r3@23
  void (__fastcall *v22)(int, __int64 *, int, signed int); // r7@23
  int v23; // r0@23
  Dimension *v24; // r0@28
  float v25; // [sp+4h] [bp-4Ch]@21
  __int64 v26; // [sp+10h] [bp-40h]@8
  float v27; // [sp+18h] [bp-38h]@11

  v3 = a3;
  v4 = a2;
  v5 = (unsigned __int64 *)*((_BYTE *)a3 + 12);
  result = (unsigned __int64 *)Level::getUsers(*((Level **)this + 7));
  v8 = (int *)(*result >> 32);
  v7 = (int *)*result;
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      _R5 = *v7;
      result = (unsigned __int64 *)*((_DWORD *)v4 + 36);
      if ( result == *(unsigned __int64 **)(*v7 + 4536) )
      {
        result = (unsigned __int64 *)NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(_R5 + 4392));
        if ( result == (unsigned __int64 *)1 )
        {
          result = (unsigned __int64 *)Player::getClientSubId((Player *)_R5);
          if ( result == v5 )
            break;
        }
      }
      ++v7;
      if ( v8 == v7 )
        return result;
    }
    if ( _R5 )
      Entity::getRuntimeID((Entity *)&v26, _R5);
      result = (unsigned __int64 *)(*((_QWORD *)v3 + 2) ^ v26 | (*((_QWORD *)v3 + 2) >> 32) ^ HIDWORD(v26));
      if ( *((_QWORD *)v3 + 2) == v26 )
        result = *(unsigned __int64 **)(_R5 + 4292);
        if ( !result )
          result = (unsigned __int64 *)*(_BYTE *)(_R5 + 4296);
          if ( !*(_BYTE *)(_R5 + 4296) )
          {
            v10 = *((_DWORD *)v3 + 7);
            v11 = *((float *)v3 + 8);
            LODWORD(v26) = *((_DWORD *)v3 + 6);
            HIDWORD(v26) = v10;
            v27 = v11;
            if ( *(_DWORD *)(_R5 + 512) )
            {
              *(_DWORD *)(_R5 + 360) = 0;
              Entity::setPreviousPosRot(_R5, _R5 + 72, (_QWORD *)(_R5 + 120));
              (*(void (**)(void))(**(_DWORD **)(_R5 + 512) + 136))();
              (*(void (__fastcall **)(int, char *))(*(_DWORD *)_R5 + 72))(_R5, (char *)v3 + 36);
              *(_DWORD *)(_R5 + 3420) = *((_DWORD *)v3 + 11);
LABEL_28:
              v24 = (Dimension *)Entity::getDimension((Entity *)_R5);
              return (unsigned __int64 *)Dimension::sendPacketForEntity(
                                           v24,
                                           (const Entity *)_R5,
                                           v3,
                                           (const Player *)_R5);
            }
            Entity::setPreviousPosRot(_R5, _R5 + 72, (_QWORD *)(_R5 + 120));
            __asm
              VLDR            S16, =-128.0
              VLDR            S0, [SP,#0x50+var_40+4]
              VLDR            S2, =512.0
              VCMPE.F32       S0, S16
              VMRS            APSR_nzcv, FPSCR
              VCMPE.F32       S0, S2
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              __asm { VMOVGT.F32      S16, S0 }
            __asm { VMRS            APSR_nzcv, FPSCR }
              __asm { VMOVGT.F32      S16, S2 }
            __asm { VSTR            S16, [SP,#0x50+var_40+4] }
            _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)_R5 + 56))(_R5);
              VLDR            S2, [R0,#4]
              VLDR            S0, [R0]
              VLDR            S6, [SP,#0x50+var_40]
              VSUB.F32        S2, S16, S2
              VLDR            S4, [R0,#8]
              VLDR            S8, [SP,#0x50+var_38]
              VSUB.F32        S0, S6, S0
              VSUB.F32        S4, S8, S4
              VSTR            S0, [R5,#0x6C]
              VSTR            S2, [R5,#0x70]
              VSTR            S4, [R5,#0x74]
            v17 = *((_WORD *)v3 + 24);
            if ( (unsigned __int8)v17 == 1 )
              if ( (*(int (__fastcall **)(int))(*(_DWORD *)_R5 + 316))(_R5) != 1 )
              {
                (*(void (__fastcall **)(int, __int64 *))(*(_DWORD *)_R5 + 48))(_R5, &v26);
                (*(void (__fastcall **)(int, char *))(*(_DWORD *)_R5 + 72))(_R5, (char *)v3 + 36);
LABEL_27:
                *(_DWORD *)(_R5 + 3420) = *((_DWORD *)v3 + 11);
                (*(void (__fastcall **)(int))(*(_DWORD *)_R5 + 92))(_R5);
                goto LABEL_28;
              }
              LOBYTE(v18) = *((_BYTE *)v3 + 49);
            else
              v18 = v17 >> 8;
            *(_BYTE *)(_R5 + 216) = v18;
              VLDR            S0, [SP,#0x50+var_40]
              VLDR            S6, [R5,#0x48]
              VLDR            S2, [SP,#0x50+var_40+4]
              VLDR            S8, [R5,#0x4C]
              VSUB.F32        S0, S0, S6
              VLDR            S4, [SP,#0x50+var_38]
              VLDR            S10, [R5,#0x50]
              VSUB.F32        S2, S2, S8
              VSUB.F32        S4, S4, S10
              VSTR            S0, [SP,#0x50+var_4C]
              VSTR            S2, [SP,#0x50+var_48]
              VSTR            S4, [SP,#0x50+var_44]
            (*(void (__fastcall **)(int, float *))(*(_DWORD *)_R5 + 1232))(_R5, &v25);
            if ( *(_BYTE *)(_R5 + 217) || !*(_BYTE *)(_R5 + 216) )
              v19 = (int)v3 + 36;
              v20 = &v26;
              v21 = 3;
              v22 = *(void (__fastcall **)(int, __int64 *, int, signed int))(*(_DWORD *)_R5 + 112);
              v23 = _R5;
              v21 = 1;
            v22(v23, v20, v19, v21);
            goto LABEL_27;
          }
  }
  return result;
}


char *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const PlayerHotbarPacket *a3)
{
  const PlayerHotbarPacket *v3; // r9@1
  const NetworkIdentifier *v4; // r7@1
  char *v5; // r10@1
  char *result; // r0@1
  __int64 v7; // r4@1
  int v8; // r6@2
  int v9; // r0@8
  int v10; // r7@9
  PlayerInventoryProxy *v11; // r0@10
  PlayerInventoryProxy *v12; // r0@11
  ServerNetworkHandler *v13; // [sp+0h] [bp-28h]@1

  v13 = this;
  v3 = a3;
  v4 = a2;
  v5 = (char *)*((_BYTE *)a3 + 12);
  result = Level::getUsers(*((Level **)this + 7));
  v7 = *(_QWORD *)result;
  if ( (_DWORD)v7 != HIDWORD(v7) )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)v7;
      result = (char *)*((_DWORD *)v4 + 36);
      if ( result == *(char **)(*(_DWORD *)v7 + 4536) )
      {
        result = (char *)NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v8 + 4392));
        if ( result == (char *)1 )
        {
          result = (char *)Player::getClientSubId((Player *)v8);
          if ( result == v5 )
            break;
        }
      }
      LODWORD(v7) = v7 + 4;
      if ( HIDWORD(v7) == (_DWORD)v7 )
        return result;
    }
    if ( v8 )
      v9 = Player::getSupplies((Player *)v8);
      PlayerInventoryProxy::selectSlot(v9, *((_DWORD *)v3 + 4), 0);
      if ( (signed int)((*((_QWORD *)v3 + 3) >> 32) - *((_QWORD *)v3 + 3)) >= 1 )
        v10 = 0;
        do
          v11 = (PlayerInventoryProxy *)Player::getSupplies((Player *)v8);
          if ( v10 >= PlayerInventoryProxy::getLinkedSlotsCount(v11) )
          v12 = (PlayerInventoryProxy *)Player::getSupplies((Player *)v8);
          PlayerInventoryProxy::linkSlot(v12, v10, *(_DWORD *)(*((_DWORD *)v3 + 6) + 4 * v10));
          ++v10;
        while ( v10 < (signed int)((*((_QWORD *)v3 + 3) >> 32) - *((_QWORD *)v3 + 3)) >> 2 );
      result = (char *)(*(int (**)(void))(**((_DWORD **)v13 + 6) + 20))();
  }
  return result;
}


int __fastcall ServerNetworkHandler::disallowIncomingConnections(ServerNetworkHandler *this)
{
  ServerNetworkHandler *v1; // r4@1

  v1 = this;
  *((_BYTE *)this + 272) = 0;
  sub_21E8190((void **)this + 74, (char *)&unk_257BC67, 0);
  return (*(int (**)(void))(**((_DWORD **)v1 + 10) + 12))();
}


void __fastcall ServerNetworkHandler::_sendAdditionalLevelData(ServerNetworkHandler *this, ServerPlayer *a2, const NetworkIdentifier *a3)
{
  Mob *v3; // r10@1
  BaseAttributeMap *v4; // r5@1
  _DWORD *v5; // r4@1
  int i; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  char **v9; // r0@11
  char *v10; // r1@12
  char *v11; // r0@14
  int v12; // r4@17
  void (__fastcall *v13)(int, const NetworkIdentifier *, void ***, int); // r5@17
  int v14; // r0@17
  int v15; // r4@17
  int v16; // r6@17
  unsigned int *v17; // r2@19
  signed int v18; // r1@21
  int v19; // r1@27
  void *v20; // r0@27
  char *v21; // r2@32
  int v22; // r1@32
  unsigned int v23; // r4@32
  int v24; // r3@32
  int v25; // r4@35
  void (__fastcall *v26)(int, const NetworkIdentifier *, void ***, int); // r5@35
  int v27; // r0@35
  Recipes *v28; // r0@35
  FurnaceRecipes *v29; // r0@35
  const Recipe **v30; // r4@35
  const Recipe **j; // r5@35
  void *v32; // r11@36
  int v33; // r0@37
  FurnaceRecipes *v34; // r0@48
  int v35; // r7@48
  int v36; // r5@48
  void *v37; // r6@49
  int v38; // r0@50
  FurnaceRecipes *v39; // r0@61
  int v40; // r7@61
  int k; // r11@61
  void *v42; // r5@62
  int v43; // r0@63
  int v44; // r4@74
  void (__fastcall *v45)(int, const NetworkIdentifier *, void ***, int); // r5@74
  int v46; // r0@74
  __int64 v47; // r4@74
  void *v48; // r0@75
  void *v49; // r0@77
  int v50; // r0@79
  __int64 v51; // r4@87
  void *v52; // r0@88
  void *v53; // r0@90
  int v54; // r0@92
  char **v55; // r4@98
  char **v56; // r6@98
  unsigned int *v57; // r2@100
  signed int v58; // r1@102
  int *v59; // r0@108
  const NetworkIdentifier *v60; // [sp+8h] [bp-1D0h]@1
  ServerNetworkHandler *v61; // [sp+Ch] [bp-1CCh]@1
  int v62; // [sp+10h] [bp-1C8h]@62
  int v63; // [sp+14h] [bp-1C4h]@63
  int v64; // [sp+18h] [bp-1C0h]@63
  int v65; // [sp+20h] [bp-1B8h]@62
  int v66; // [sp+28h] [bp-1B0h]@69
  void *v67; // [sp+44h] [bp-194h]@67
  void *v68; // [sp+54h] [bp-184h]@65
  int v69; // [sp+68h] [bp-170h]@62
  int v70; // [sp+70h] [bp-168h]@49
  int v71; // [sp+74h] [bp-164h]@50
  int v72; // [sp+78h] [bp-160h]@50
  int v73; // [sp+80h] [bp-158h]@49
  int v74; // [sp+88h] [bp-150h]@56
  void *v75; // [sp+A4h] [bp-134h]@54
  void *v76; // [sp+B4h] [bp-124h]@52
  int v77; // [sp+C8h] [bp-110h]@49
  FurnaceRecipes *v78; // [sp+D0h] [bp-108h]@36
  int v79; // [sp+D4h] [bp-104h]@37
  int v80; // [sp+D8h] [bp-100h]@37
  int v81; // [sp+E0h] [bp-F8h]@36
  int v82; // [sp+E8h] [bp-F0h]@43
  void *v83; // [sp+104h] [bp-D4h]@41
  void *ptr; // [sp+114h] [bp-C4h]@39
  int v85; // [sp+128h] [bp-B0h]@36
  void **v86; // [sp+130h] [bp-A8h]@35
  int v87; // [sp+134h] [bp-A4h]@35
  int v88; // [sp+138h] [bp-A0h]@35
  char v89; // [sp+13Ch] [bp-9Ch]@35
  void *v90; // [sp+140h] [bp-98h]@35
  void *v91; // [sp+144h] [bp-94h]@35
  void *v92; // [sp+148h] [bp-90h]@35
  char v93; // [sp+14Ch] [bp-8Ch]@35
  void **v94; // [sp+154h] [bp-84h]@32
  signed int v95; // [sp+158h] [bp-80h]@32
  signed int v96; // [sp+15Ch] [bp-7Ch]@32
  char v97; // [sp+160h] [bp-78h]@32
  char v98; // [sp+161h] [bp-77h]@32
  char *v99; // [sp+164h] [bp-74h]@32
  char *v100; // [sp+168h] [bp-70h]@32
  char *v101; // [sp+16Ch] [bp-6Ch]@32
  void **v102; // [sp+170h] [bp-68h]@17
  __int64 v103; // [sp+188h] [bp-50h]@17
  char *v104; // [sp+19Ch] [bp-3Ch]@11
  char *v105; // [sp+1A0h] [bp-38h]@12
  char **v106; // [sp+1A4h] [bp-34h]@1
  char **v107; // [sp+1A8h] [bp-30h]@1
  char **v108; // [sp+1ACh] [bp-2Ch]@1

  v3 = a2;
  v61 = this;
  v60 = a3;
  ServerPlayer::sendMobEffectPackets(a2);
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v4 = (BaseAttributeMap *)Mob::getAttributes(v3);
  v5 = (_DWORD *)BaseAttributeMap::begin(v4);
  for ( i = BaseAttributeMap::end(v4); v5 != (_DWORD *)i; v5 = (_DWORD *)*v5 )
  {
    AttributeInstance::getHandle((AttributeInstance *)&v104, (int)(v5 + 2));
    v9 = v107;
    if ( v107 == v108 )
    {
      std::vector<AttributeInstanceHandle,std::allocator<AttributeInstanceHandle>>::_M_emplace_back_aux<AttributeInstanceHandle>(
        (unsigned __int64 *)&v106,
        (int)&v104);
      v10 = v104;
    }
    else
      *v107 = v104;
      v10 = (char *)&unk_28898CC;
      v104 = (char *)&unk_28898CC;
      v9[1] = v105;
      v107 = v9 + 2;
    v11 = v10 - 12;
    if ( (int *)(v10 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v10 - 4);
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
        j_j_j_j__ZdlPv_9(v11);
  }
  if ( v107 != v106 )
    UpdateAttributesPacket::UpdateAttributesPacket((int)&v102, (int)v3, (unsigned __int64 *)&v106);
    v12 = *((_DWORD *)v61 + 11);
    v13 = *(void (__fastcall **)(int, const NetworkIdentifier *, void ***, int))(*(_DWORD *)v12 + 16);
    v14 = Player::getClientSubId(v3);
    v13(v12, v60, &v102, v14);
    v102 = &off_26E9D58;
    v16 = HIDWORD(v103);
    v15 = v103;
    if ( (_DWORD)v103 != HIDWORD(v103) )
      do
        v19 = *(_DWORD *)(v15 + 16);
        v20 = (void *)(v19 - 12);
        if ( (int *)(v19 - 12) != &dword_28898C0 )
        {
          v17 = (unsigned int *)(v19 - 4);
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
            j_j_j_j__ZdlPv_9(v20);
        }
        v15 += 20;
      while ( v15 != v16 );
      v15 = v103;
    if ( v15 )
      operator delete((void *)v15);
  (*(void (__fastcall **)(Mob *, signed int))(*(_DWORD *)v3 + 1064))(v3, 1);
  v95 = 2;
  v96 = 1;
  v21 = 0;
  v97 = 0;
  v94 = &off_26E974C;
  v98 = 121;
  v22 = dword_2806D24;
  v99 = 0;
  v100 = 0;
  v101 = 0;
  v23 = 954437177 * ((dword_2806D24 - Item::mCreativeList) >> 3);
  v24 = dword_2806D24;
  if ( dword_2806D24 != Item::mCreativeList )
    if ( v23 >= 0x38E38E4 )
      sub_21E57F4();
    v21 = (char *)operator new(dword_2806D24 - Item::mCreativeList);
    v22 = dword_2806D24;
    v24 = Item::mCreativeList;
  v99 = v21;
  v101 = &v21[72 * v23];
  v100 = (char *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemInstance const*,std::vector<ItemInstance,std::allocator<ItemInstance>>>,ItemInstance*>(
                   v24,
                   v22,
                   (int)v21);
  v25 = *((_DWORD *)v61 + 11);
  v26 = *(void (__fastcall **)(int, const NetworkIdentifier *, void ***, int))(*(_DWORD *)v25 + 16);
  v27 = Player::getClientSubId(v3);
  v26(v25, v60, &v94, v27);
  v87 = 2;
  v88 = 1;
  v89 = 0;
  v86 = &off_26E9D08;
  v92 = 0;
  v90 = 0;
  v91 = 0;
  v93 = 1;
  v28 = Recipes::getInstance((Recipes *)&off_26E9D08);
  v29 = (FurnaceRecipes *)Recipes::getRecipes(v28);
  v30 = (const Recipe **)(*(_QWORD *)v29 >> 32);
  for ( j = (const Recipe **)*(_QWORD *)v29; v30 != j; ++j )
    v78 = 0;
    ItemInstance::ItemInstance((int)&v81);
    v85 = 1;
    CraftingDataEntry::fillFromRecipe((CraftingDataEntry *)&v78, *j);
    v32 = v91;
    if ( v91 == v92 )
      std::vector<CraftingDataEntry,std::allocator<CraftingDataEntry>>::_M_emplace_back_aux<CraftingDataEntry>(
        (unsigned __int64 *)&v90,
        (int)&v78);
      v33 = (int)v78;
      v78 = 0;
      *(_DWORD *)v91 = v33;
      *((_DWORD *)v32 + 1) = v79;
      *((_DWORD *)v32 + 2) = v80;
      ItemInstance::ItemInstance((ItemInstance *)((char *)v32 + 16), (int)&v81);
      *((_DWORD *)v32 + 22) = v85;
      v91 = (char *)v91 + 96;
    if ( ptr )
      operator delete(ptr);
    if ( v83 )
      operator delete(v83);
    if ( v82 )
      (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v82 + 4))(v82, *(_DWORD *)(*(_DWORD *)v82 + 4));
    v82 = 0;
    v29 = v78;
    if ( v78 )
      v29 = (FurnaceRecipes *)(*(int (__cdecl **)(FurnaceRecipes *, _DWORD))(*(_DWORD *)v78 + 4))(
                                v78,
                                *(_DWORD *)(*(_DWORD *)v78 + 4));
  v34 = FurnaceRecipes::getInstance(v29);
  v35 = *((_DWORD *)v34 + 3);
  v36 = (int)v34 + 4;
  if ( (FurnaceRecipes *)v35 != (FurnaceRecipes *)((char *)v34 + 4) )
    do
      v70 = 0;
      ItemInstance::ItemInstance((int)&v73);
      v77 = 1;
      CraftingDataEntry::fillFromFurnaceRecipe(
        (CraftingDataEntry *)&v70,
        *(_DWORD *)(v35 + 16),
        (const ItemInstance *)(v35 + 24));
      v37 = v91;
      if ( v91 == v92 )
        std::vector<CraftingDataEntry,std::allocator<CraftingDataEntry>>::_M_emplace_back_aux<CraftingDataEntry>(
          (unsigned __int64 *)&v90,
          (int)&v70);
        v38 = v70;
        v70 = 0;
        *(_DWORD *)v91 = v38;
        *((_DWORD *)v37 + 1) = v71;
        *((_DWORD *)v37 + 2) = v72;
        ItemInstance::ItemInstance((ItemInstance *)((char *)v37 + 16), (int)&v73);
        *((_DWORD *)v37 + 22) = v77;
        v91 = (char *)v91 + 96;
      if ( v76 )
        operator delete(v76);
      if ( v75 )
        operator delete(v75);
      if ( v74 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v74 + 4))(v74, *(_DWORD *)(*(_DWORD *)v74 + 4));
      v74 = 0;
      if ( v70 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v70 + 4))(v70, *(_DWORD *)(*(_DWORD *)v70 + 4));
      v34 = (FurnaceRecipes *)sub_21D4820(v35);
      v35 = (int)v34;
    while ( v34 != (FurnaceRecipes *)v36 );
  v39 = FurnaceRecipes::getInstance(v34);
  v40 = *((_DWORD *)v39 + 9);
  for ( k = (int)v39 + 28; v40 != k; v40 = sub_21D4820(v40) )
    v62 = 0;
    ItemInstance::ItemInstance((int)&v65);
    v69 = 1;
    CraftingDataEntry::fillFromFurnaceAuxRecipe(
      (CraftingDataEntry *)&v62,
      *(_DWORD *)(v40 + 16),
      (const ItemInstance *)(v40 + 24));
    v42 = v91;
        (int)&v62);
      v43 = v62;
      v62 = 0;
      *(_DWORD *)v91 = v43;
      *((_DWORD *)v42 + 1) = v63;
      *((_DWORD *)v42 + 2) = v64;
      ItemInstance::ItemInstance((ItemInstance *)((char *)v42 + 16), (int)&v65);
      *((_DWORD *)v42 + 22) = v69;
    if ( v68 )
      operator delete(v68);
    if ( v67 )
      operator delete(v67);
    if ( v66 )
      (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v66 + 4))(v66, *(_DWORD *)(*(_DWORD *)v66 + 4));
    v66 = 0;
    if ( v62 )
      (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v62 + 4))(v62, *(_DWORD *)(*(_DWORD *)v62 + 4));
  v44 = *((_DWORD *)v61 + 11);
  v45 = *(void (__fastcall **)(int, const NetworkIdentifier *, void ***, int))(*(_DWORD *)v44 + 16);
  v46 = Player::getClientSubId(v3);
  v45(v44, v60, &v86, v46);
  v47 = *(_QWORD *)&v90;
  if ( v90 != v91 )
      v48 = *(void **)(v47 + 68);
      if ( v48 )
        operator delete(v48);
      v49 = *(void **)(v47 + 52);
      if ( v49 )
        operator delete(v49);
      v50 = *(_DWORD *)(v47 + 24);
      if ( v50 )
        (*(void (**)(void))(*(_DWORD *)v50 + 4))();
      *(_DWORD *)(v47 + 24) = 0;
      if ( *(_DWORD *)v47 )
        (*(void (**)(void))(**(_DWORD **)v47 + 4))();
      *(_DWORD *)v47 = 0;
      LODWORD(v47) = v47 + 96;
    while ( HIDWORD(v47) != (_DWORD)v47 );
    LODWORD(v47) = v90;
  if ( (_DWORD)v47 )
    operator delete((void *)v47);
  v51 = *(_QWORD *)&v99;
  if ( v99 != v100 )
      v52 = *(void **)(v51 + 52);
      if ( v52 )
        operator delete(v52);
      v53 = *(void **)(v51 + 36);
      if ( v53 )
        operator delete(v53);
      v54 = *(_DWORD *)(v51 + 8);
      if ( v54 )
        (*(void (**)(void))(*(_DWORD *)v54 + 4))();
      *(_DWORD *)(v51 + 8) = 0;
      LODWORD(v51) = v51 + 72;
    while ( HIDWORD(v51) != (_DWORD)v51 );
    LODWORD(v51) = v99;
  if ( (_DWORD)v51 )
    operator delete((void *)v51);
  v56 = v107;
  v55 = v106;
  if ( v106 != v107 )
      v59 = (int *)(*v55 - 12);
      if ( v59 != &dword_28898C0 )
        v57 = (unsigned int *)(*v55 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v58 = __ldrex(v57);
          while ( __strex(v58 - 1, v57) );
        else
          v58 = (*v57)--;
        if ( v58 <= 0 )
          j_j_j_j__ZdlPv_9(v59);
      v55 += 2;
    while ( v55 != v56 );
    v55 = v106;
  if ( v55 )
    operator delete(v55);
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const ModalFormResponsePacket *a3)
{
  int v3; // r4@1
  ServerNetworkHandler *v4; // r5@1
  int *v5; // r0@1
  void *v6; // r0@1
  void *v7; // r0@2
  void *v8; // r0@3
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  int v15; // [sp+14h] [bp-5Ch]@1
  int v16; // [sp+1Ch] [bp-54h]@1
  int v17; // [sp+20h] [bp-50h]@1
  char v18; // [sp+28h] [bp-48h]@1
  unsigned __int64 v19; // [sp+54h] [bp-1Ch]@1
  int v20; // [sp+5Ch] [bp-14h]@1

  v3 = *((_QWORD *)a3 + 2);
  v4 = this;
  Util::format((Util *)&v17, "Received response from client\n Form ID: %i\n Response: %s", *((_QWORD *)a3 + 2));
  sub_21E94B4((void **)&v16, "Server");
  v5 = (int *)sub_21E94B4((void **)&v15, (const char *)&unk_257BC67);
  v19 = 0LL;
  v20 = 0;
  TextPacket::TextPacket((int)&v18, 1, &v16, &v17, &v19, 0, v5);
  (*(void (**)(void))(**((_DWORD **)v4 + 11) + 8))();
  TextPacket::~TextPacket((TextPacket *)&v18);
  v6 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v15 - 4);
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
  }
  v7 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v16 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v17 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


char *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const BlockEntityDataPacket *a3)
{
  const BlockEntityDataPacket *v3; // r8@1
  const NetworkIdentifier *v4; // r6@1
  char *v5; // r9@1
  char *result; // r0@1
  int v7; // r4@1
  int v8; // r7@1
  int v9; // r5@2
  BlockSource *v10; // r0@8
  BlockEntity *v11; // r6@8
  void (__fastcall *v12)(BlockEntity *, char *, int); // r4@12
  int v13; // r0@12
  BlockSource *v14; // r0@12
  int v15; // r0@12

  v3 = a3;
  v4 = a2;
  v5 = (char *)*((_BYTE *)a3 + 12);
  result = Level::getUsers(*((Level **)this + 7));
  v8 = *(_QWORD *)result >> 32;
  v7 = *(_QWORD *)result;
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)v7;
      result = (char *)*((_DWORD *)v4 + 36);
      if ( result == *(char **)(*(_DWORD *)v7 + 4536) )
      {
        result = (char *)NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v9 + 4392));
        if ( result == (char *)1 )
        {
          result = (char *)Player::getClientSubId((Player *)v9);
          if ( result == v5 )
            break;
        }
      }
      v7 += 4;
      if ( v8 == v7 )
        return result;
    }
    if ( v9 )
      v10 = (BlockSource *)Entity::getRegion((Entity *)v9);
      result = (char *)BlockSource::getBlockEntity(v10, (const BlockEntityDataPacket *)((char *)v3 + 16));
      v11 = (BlockEntity *)result;
      if ( result )
        if ( BlockEntity::isType((int)result, 4)
          || BlockEntity::isType((int)v11, 21) == 1
          || (result = (char *)BlockEntity::isType((int)v11, 20), result == (char *)1) )
          v12 = *(void (__fastcall **)(BlockEntity *, char *, int))(*(_DWORD *)v11 + 60);
          v13 = Entity::getRegion((Entity *)v9);
          v12(v11, (char *)v3 + 28, v13);
          BlockEntity::setChanged(v11);
          v14 = (BlockSource *)Entity::getRegion((Entity *)v9);
          v15 = BlockSource::getDimension(v14);
          result = (char *)(*(int (**)(void))(*(_DWORD *)v15 + 212))();
  }
  return result;
}


signed int __fastcall ServerNetworkHandler::allowIncomingPacketId(ServerNetworkHandler *this, const NetworkIdentifier *a2, int a3)
{
  unsigned int v3; // r8@1
  const NetworkIdentifier *v4; // r11@1
  ServerNetworkHandler *v5; // r9@1
  void *v6; // r0@2
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  unsigned int v9; // r10@7
  unsigned int v10; // r6@7
  signed int *v11; // r4@7
  signed int v12; // r8@8
  int v13; // r5@8
  signed int v14; // r7@12
  signed int v15; // r0@16
  int v16; // r7@21
  __int64 v17; // kr08_8@21
  int v18; // r6@22
  signed int result; // r0@27
  unsigned int *v20; // r2@43
  signed int v21; // r1@45
  unsigned int v22; // [sp+4h] [bp-4Ch]@8
  signed int v23; // [sp+8h] [bp-48h]@14
  int v24; // [sp+10h] [bp-40h]@37
  int v25; // [sp+18h] [bp-38h]@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  if ( a3 >= 106 )
  {
    sub_21E94B4((void **)&v25, "disconnectionScreen.unknownPacket");
    ServerNetworkHandler::disconnectClient((int)v5, (int)v4, &v25, 0);
    v6 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) == &dword_28898C0 )
      return 0;
    v7 = (unsigned int *)(v25 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 > 0 )
    goto LABEL_49;
  }
  v9 = NetworkIdentifier::getHash(a2);
  v10 = v9 % (unsigned int)(*((_QWORD *)v5 + 40) >> 32);
  v11 = *(signed int **)(*((_QWORD *)v5 + 40) + 4 * v10);
  if ( !v11 )
    goto LABEL_52;
  v22 = v3;
  v12 = *v11;
  v13 = *(_DWORD *)(*v11 + 168);
  while ( v13 != v9
       || *((_DWORD *)v4 + 36) != *(_DWORD *)(v12 + 152)
       || !NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v12 + 8)) )
    v14 = *(_DWORD *)v12;
    if ( *(_DWORD *)v12 )
      v13 = *(_DWORD *)(v14 + 168);
      v11 = (signed int *)v12;
      v12 = *(_DWORD *)v12;
      if ( *(_DWORD *)(v14 + 168) % *((_DWORD *)v5 + 81) == v10 )
        continue;
    v3 = v22;
    v23 = 0;
    goto LABEL_21;
  v3 = v22;
  if ( v11 )
    v15 = *v11;
    if ( *v11 )
      v15 = 1;
  else
LABEL_52:
    v15 = 0;
  v23 = v15;
LABEL_21:
  v17 = *(_QWORD *)Level::getUsers(*((Level **)v5 + 7));
  v16 = v17;
  if ( (_DWORD)v17 == HIDWORD(v17) )
    goto LABEL_26;
  while ( 1 )
    v18 = *(_DWORD *)v16;
    if ( *((_DWORD *)v4 + 36) == *(_DWORD *)(*(_DWORD *)v16 + 4536)
      && NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v18 + 4392)) == 1
      && !Player::getClientSubId((Player *)v18) )
      break;
    v16 += 4;
    if ( HIDWORD(v17) == v16 )
      goto LABEL_26;
  if ( v18 )
    result = 1;
    if ( v3 <= 8 && (1 << v3) & 0x112 || v3 == 84 )
      goto LABEL_37;
LABEL_26:
    if ( v23 != 1 )
      if ( (v3 | 4) == 5 )
        return 1;
LABEL_37:
      sub_21E94B4((void **)&v24, "disconnectionScreen.unexpectedPacket");
      ServerNetworkHandler::disconnectClient((int)v5, (int)v4, &v24, 0);
      v6 = (void *)(v24 - 12);
      if ( (int *)(v24 - 12) == &dword_28898C0 )
        return 0;
      v20 = (unsigned int *)(v24 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      }
      else
        v21 = (*v20)--;
      if ( v21 > 0 )
LABEL_49:
      j_j_j_j__ZdlPv_9(v6);
    if ( (v3 > 8 || !((1 << v3) & 0x130)) && v3 != 84 )
  return result;
}


int __fastcall ServerNetworkHandler::_getPlayer(int a1, int a2, int a3, unsigned __int64 *a4)
{
  unsigned __int64 *v4; // r8@1
  int v5; // r9@1
  int v6; // r6@1
  __int64 v7; // r4@1
  int v8; // r7@2
  int v9; // r5@6
  __int64 v10; // r0@9

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = *(_QWORD *)Level::getUsers(*(Level **)(a1 + 28));
  if ( (_DWORD)v7 == HIDWORD(v7) )
  {
    v9 = 0;
  }
  else
    while ( 1 )
    {
      v8 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v6 + 144) == *(_DWORD *)(*(_DWORD *)v7 + 4536)
        && NetworkIdentifier::equalsTypeData((NetworkIdentifier *)v6, (const NetworkIdentifier *)(v8 + 4392)) == 1
        && Player::getClientSubId((Player *)v8) == v5 )
      {
        break;
      }
      LODWORD(v7) = v7 + 4;
      if ( HIDWORD(v7) == (_DWORD)v7 )
        return 0;
    }
    if ( v8 )
      v10 = *(_QWORD *)Entity::getUniqueID((Entity *)v8);
      HIDWORD(v10) ^= *v4 >> 32;
      if ( v10 == (unsigned int)*v4 )
        v9 = v8;
  return v9;
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const CraftingEventPacket *a3)
{
  const CraftingEventPacket *v3; // r8@1
  const NetworkIdentifier *v4; // r4@1
  int v5; // r9@1
  int *v6; // r6@1
  __int64 v7; // kr00_8@1
  int v8; // r7@2
  __int64 v9; // r0@8
  void *v10; // r9@9
  signed int v11; // r0@10
  int v12; // r5@12
  int v13; // r6@13
  unsigned int v14; // r1@14
  unsigned int *v15; // r0@14
  unsigned int v16; // r2@17
  unsigned int v17; // r3@18
  signed int v18; // r1@19
  int v19; // r0@23
  unsigned int *v20; // r1@26
  unsigned int v21; // r0@28
  unsigned int *v22; // r4@32
  unsigned int v23; // r0@34
  int v24; // r0@39
  unsigned int *v25; // r2@40
  unsigned int v26; // r1@42
  void *v27; // r7@48
  void *v28; // r0@49
  void *v29; // r0@51
  int v30; // r0@53
  int v31; // [sp+4h] [bp-2Ch]@13
  int v32; // [sp+8h] [bp-28h]@13

  v3 = a3;
  v4 = a2;
  v5 = *((_BYTE *)a3 + 12);
  v7 = *(_QWORD *)Level::getUsers(*((Level **)this + 7));
  v6 = (int *)v7;
  if ( (_DWORD)v7 != HIDWORD(v7) )
  {
    while ( 1 )
    {
      v8 = *v6;
      if ( *((_DWORD *)v4 + 36) == *(_DWORD *)(*v6 + 4536)
        && NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v8 + 4392)) == 1
        && Player::getClientSubId((Player *)v8) == v5 )
      {
        break;
      }
      ++v6;
      if ( (int *)HIDWORD(v7) == v6 )
        return;
    }
    if ( v8 )
      v9 = *(_QWORD *)((char *)v3 + 52);
      if ( HIDWORD(v9) == (_DWORD)v9 )
        v10 = 0;
        LODWORD(v9) = *(_QWORD *)((char *)v3 + 52) >> 32;
      else
        v11 = HIDWORD(v9) - v9;
        if ( (unsigned int)(954437177 * (v11 >> 3)) >= 0x38E38E4 )
          sub_21E57F4();
        v10 = operator new(v11);
        v9 = *(_QWORD *)((char *)v3 + 52);
      v12 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemInstance const*,std::vector<ItemInstance,std::allocator<ItemInstance>>>,ItemInstance*>(
              v9,
              SHIDWORD(v9),
              (int)v10);
      if ( *((_BYTE *)v3 + 13) )
        Player::getContainerManager((Player *)&v31, v8);
        v13 = v32;
        if ( v32 )
        {
          v14 = *(_DWORD *)(v32 + 4);
          v15 = (unsigned int *)(v32 + 4);
          while ( v14 )
          {
            __dmb();
            v16 = __ldrex(v15);
            if ( v16 == v14 )
            {
              v17 = __strex(v14 + 1, v15);
              v14 = v16;
              if ( !v17 )
              {
                __dmb();
                v18 = 0;
                if ( !*v15 )
                  v18 = 1;
                goto LABEL_23;
              }
            }
            else
              __clrex();
          }
        }
        v18 = 1;
        v13 = 0;
LABEL_23:
        v19 = v31;
        if ( v18 )
          v19 = 0;
        (*(void (**)(void))(*(_DWORD *)v19 + 8))();
        if ( v13 )
          v20 = (unsigned int *)(v13 + 4);
          if ( &pthread_create )
            do
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
          else
            v21 = (*v20)--;
          if ( v21 == 1 )
            v22 = (unsigned int *)(v13 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
            if ( &pthread_create )
              __dmb();
              do
                v23 = __ldrex(v22);
              while ( __strex(v23 - 1, v22) );
              v23 = (*v22)--;
            if ( v23 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
        v24 = v32;
          v25 = (unsigned int *)(v32 + 8);
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 == 1 )
            (*(void (**)(void))(*(_DWORD *)v24 + 12))();
      if ( v10 != (void *)v12 )
        v27 = v10;
        do
          v28 = (void *)*((_DWORD *)v27 + 13);
          if ( v28 )
            operator delete(v28);
          v29 = (void *)*((_DWORD *)v27 + 9);
          if ( v29 )
            operator delete(v29);
          v30 = *((_DWORD *)v27 + 2);
          if ( v30 )
            (*(void (**)(void))(*(_DWORD *)v30 + 4))();
          *((_DWORD *)v27 + 2) = 0;
          v27 = (char *)v27 + 72;
        while ( (void *)v12 != v27 );
      if ( v10 )
        operator delete(v10);
  }
}


void __fastcall ServerNetworkHandler::onTransferRequest(int a1, int a2, int *a3, int a4)
{
  ServerNetworkHandler::onTransferRequest(a1, a2, a3, a4);
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const CommandBlockUpdatePacket *a3)
{
  ServerNetworkHandler *v3; // r9@1
  const NetworkIdentifier *v4; // r6@1
  int v5; // r10@1
  int v6; // r5@1
  __int64 v7; // kr00_8@1
  int v8; // r7@2
  BlockSource *v9; // r0@8
  const BlockPos *v10; // r6@8
  int v11; // r0@9
  unsigned int v12; // r5@9
  char v13; // r3@11
  int v14; // r0@11
  signed int v15; // r1@13
  Entity *v16; // r0@16
  Entity **v17; // r5@17
  int v18; // r6@18
  void *v19; // r0@18
  unsigned int *v20; // r2@19
  signed int v21; // r1@21
  const CommandBlockUpdatePacket *v22; // [sp+14h] [bp-34h]@1
  int v23; // [sp+18h] [bp-30h]@18

  v3 = this;
  v22 = a3;
  v4 = a2;
  v5 = *((_BYTE *)a3 + 12);
  v7 = *(_QWORD *)Level::getUsers(*((Level **)this + 7));
  v6 = v7;
  if ( (_DWORD)v7 != HIDWORD(v7) )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)v6;
      if ( *((_DWORD *)v4 + 36) == *(_DWORD *)(*(_DWORD *)v6 + 4536)
        && NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v8 + 4392)) == 1
        && Player::getClientSubId((Player *)v8) == v5 )
      {
        break;
      }
      v6 += 4;
      if ( HIDWORD(v7) == v6 )
        return;
    }
    if ( v8 )
      v9 = (BlockSource *)Entity::getRegion((Entity *)v8);
      v10 = v9;
      if ( *((_BYTE *)v22 + 53) )
        v11 = BlockSource::getBlockEntity(v9, (const CommandBlockUpdatePacket *)((char *)v22 + 16));
        v12 = v11;
        if ( v11 && BlockEntity::isType(v11, 26) == 1 )
        {
          v13 = 0;
          v14 = *((_DWORD *)v22 + 7);
          if ( (unsigned int)*((_WORD *)v22 + 14) > 0xFF )
            v13 = 1;
          v15 = v14 & 0xFF0000;
          if ( v14 & 0xFF0000 )
            v15 = 1;
          CommandBlockEntity::updateBlock(
            v12,
            v10,
            (int *)v22 + 10,
            (int *)v22 + 12,
            (unsigned __int8)v14,
            v15,
            v13,
            *((_BYTE *)v22 + 52));
        }
      else
        v16 = (Entity *)Level::getRuntimeEntity(*((_DWORD *)v3 + 7), 0, *((_QWORD *)v22 + 4), 0);
        if ( v16 )
          v17 = (Entity **)Entity::getCommandBlockComponent(v16);
          if ( v17 )
          {
            v18 = *((_BYTE *)v22 + 52);
            sub_21E8AF4(&v23, (int *)v22 + 12);
            CommandBlockComponent::onCommandBlockUpdate(v17, (int *)v22 + 10, v18, &v23);
            v19 = (void *)(v23 - 12);
            if ( (int *)(v23 - 12) != &dword_28898C0 )
            {
              v20 = (unsigned int *)(v23 - 4);
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
                j_j_j_j__ZdlPv_9(v19);
            }
          }
  }
}


char *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const InteractPacket *a3)
{
  ServerNetworkHandler *v3; // r9@1
  const NetworkIdentifier *v4; // r7@1
  char *v5; // r10@1
  char *result; // r0@1
  int v7; // r5@1
  int v8; // r6@1
  int v9; // r4@2
  const Entity *v10; // r6@9
  Entity *v16; // r0@17
  int v17; // r0@18
  ContainerComponent *v18; // r5@18
  const InteractPacket *v19; // [sp+8h] [bp-28h]@1

  v19 = a3;
  v3 = this;
  v4 = a2;
  v5 = (char *)*((_BYTE *)a3 + 12);
  result = Level::getUsers(*((Level **)this + 7));
  v7 = *(_QWORD *)result >> 32;
  v8 = *(_QWORD *)result;
  if ( v8 != v7 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)v8;
      result = (char *)*((_DWORD *)v4 + 36);
      if ( result == *(char **)(*(_DWORD *)v8 + 4536) )
      {
        result = (char *)NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v9 + 4392));
        if ( result == (char *)1 )
        {
          result = (char *)Player::getClientSubId((Player *)v9);
          if ( result == v5 )
            break;
        }
      }
      v8 += 4;
      if ( v7 == v8 )
        return result;
    }
    if ( v9 )
      result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v9 + 316))(v9);
      if ( result == (char *)1 )
        v10 = (const Entity *)Level::getRuntimeEntity(*((_DWORD *)v3 + 7), 0, *((_QWORD *)v19 + 2), 0);
        if ( !v10 )
          goto LABEL_25;
        _R0 = Entity::distanceTo((Entity *)v9, v10);
        __asm
          VMOV.F32        S0, #12.0
          VMOV            S2, R0
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          result = (char *)*((_BYTE *)v19 + 13);
          if ( result == (char *)6 )
          {
            v16 = *(Entity **)(v9 + 512);
            if ( v16
              && (v17 = Entity::getContainerComponent(v16), (v18 = (ContainerComponent *)v17) != 0)
              && (unsigned __int8)Container::getContainerType(*(Container **)(v17 + 4)) != 247 )
            {
              result = (char *)j_j_j__ZN18ContainerComponent13openContainerER6Player_0(v18, (Player *)v9);
            }
            else
              result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v9 + 1360))(v9);
          }
          else if ( result == (char *)4 )
            *(_QWORD *)(v9 + 4600) = *(_QWORD *)Entity::getUniqueID(v10);
            *(_DWORD *)(v9 + 4608) = *((_DWORD *)v19 + 6);
            *(_DWORD *)(v9 + 4612) = *((_DWORD *)v19 + 7);
            result = (char *)*((_DWORD *)v19 + 8);
            *(_DWORD *)(v9 + 4616) = result;
          else if ( result == (char *)3 )
            result = (char *)Entity::isRider(v10, (Entity *)v9);
            if ( result == (char *)1 )
              result = (char *)(*(int (__fastcall **)(int, signed int, _DWORD))(*(_DWORD *)v9 + 596))(v9, 1, 0);
        else
LABEL_25:
          *(_DWORD *)(v9 + 4604) = -1;
          result = (char *)4600;
          *(_DWORD *)(v9 + 4600) = -1;
  }
  return result;
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const SpawnExperienceOrbPacket *a3)
{
  ServerNetworkHandler::handle(this, a2, a3);
}


void __fastcall ServerNetworkHandler::onReady_ClientGeneration(ServerNetworkHandler *this, Player *a2, const NetworkIdentifier *a3)
{
  ServerNetworkHandler *v3; // r9@1
  Player *v4; // r5@1
  int v5; // r0@1
  void *v6; // r0@2
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  char *v9; // r0@8
  void *v10; // r0@8
  int v11; // r6@9
  void (__fastcall *v12)(int, char *, int, char *); // r4@9
  char *v13; // r7@9
  int v14; // r0@9
  ResourcePackManager *v15; // r0@11
  PackSourceReport *v16; // r0@11
  void *v17; // r0@14
  unsigned int *v18; // r2@15
  signed int v19; // r1@17
  unsigned int *v20; // r2@19
  signed int v21; // r1@21
  int v22; // r6@35
  void (__fastcall *v23)(int, char *, char *, int); // r4@35
  char *v24; // r7@35
  int v25; // r0@35
  char *v26; // r0@35
  char *v27; // r4@36
  int v28; // r6@36
  unsigned int *v29; // r2@38
  signed int v30; // r1@40
  int *v31; // r0@46
  char *v32; // r0@51
  unsigned int *v33; // r2@53
  signed int v34; // r1@55
  unsigned int *v35; // r2@61
  signed int v36; // r1@63
  char v37; // [sp+4h] [bp-A4h]@35
  int v38; // [sp+30h] [bp-78h]@14
  int v39; // [sp+34h] [bp-74h]@34
  char *v40; // [sp+38h] [bp-70h]@13
  char v41; // [sp+3Ch] [bp-6Ch]@9
  int v42; // [sp+68h] [bp-40h]@8
  char *v43; // [sp+6Ch] [bp-3Ch]@8
  char *v44; // [sp+70h] [bp-38h]@8
  char *v45; // [sp+74h] [bp-34h]@8
  int v46; // [sp+78h] [bp-30h]@2
  int v47; // [sp+7Ch] [bp-2Ch]@7
  char *v48; // [sp+80h] [bp-28h]@1

  v3 = this;
  v4 = a2;
  v5 = (*(int (**)(void))(**((_DWORD **)this + 62) + 40))();
  (*(void (**)(void))(*(_DWORD *)v5 + 8))();
  v48 = (char *)&unk_28898CC;
  if ( sub_21E7D6C((const void **)v3 + 75, "realms") )
  {
    sub_21E8AF4(&v46, (int *)&unk_27EB800);
    sub_21E7408((const void **)&v46, "%multiplayer.player.joined", 0x1Au);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v48,
      &v46);
    v6 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) == &dword_28898C0 )
      goto LABEL_8;
    v7 = (unsigned int *)(v46 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      goto LABEL_32;
    }
LABEL_31:
    v8 = (*v7)--;
    goto LABEL_32;
  }
  sub_21E8AF4(&v47, (int *)&unk_27EB800);
  sub_21E7408((const void **)&v47, "%multiplayer.player.joined.realms", 0x21u);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v48,
    &v47);
  v6 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) == &dword_28898C0 )
    goto LABEL_8;
  v7 = (unsigned int *)(v47 - 4);
  if ( !&pthread_create )
    goto LABEL_31;
  __dmb();
  do
    v8 = __ldrex(v7);
  while ( __strex(v8 - 1, v7) );
LABEL_32:
  if ( v8 <= 0 )
    j_j_j_j__ZdlPv_9(v6);
LABEL_8:
  sub_21E8AF4(&v42, (int *)v4 + 1079);
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v9 = (char *)operator new(4u);
  v43 = v9;
  v45 = v9 + 4;
  v44 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v42,
                  (int)&v43,
                  (int)v9);
  v10 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v42 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  TextPacket::createTranslated((int)&v41, (int *)&v48, (unsigned __int64 *)&v43);
  v11 = *((_DWORD *)v3 + 11);
  v12 = *(void (__fastcall **)(int, char *, int, char *))(*(_DWORD *)v11 + 24);
  v13 = Player::getClientId(v4);
  v14 = Player::getClientSubId(v4);
  v12(v11, v13, v14, &v41);
  if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)v4 + 604))(v4) >= (unsigned int)*(_BYTE *)(*((_DWORD *)v3 + 61) + 8)
    && !*((_BYTE *)v3 + 81) )
    v15 = (ResourcePackManager *)(*(int (**)(void))(**((_DWORD **)v3 + 7) + 120))();
    v16 = (PackSourceReport *)ResourcePackManager::getPackSourceReport(v15);
    if ( v16 )
      if ( PackSourceReport::hasErrors(v16) == 1 )
      {
        v40 = (char *)&unk_28898CC;
        if ( sub_21E7D6C((const void **)v3 + 75, "realms") )
        {
          sub_21E8AF4(&v38, (int *)&unk_27EB7F8);
          sub_21E7408((const void **)&v38, "%multiplayer.packErrors", 0x17u);
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)&v40,
            &v38);
          v17 = (void *)(v38 - 12);
          if ( (int *)(v38 - 12) != &dword_28898C0 )
          {
            v18 = (unsigned int *)(v38 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v19 = __ldrex(v18);
              while ( __strex(v19 - 1, v18) );
              goto LABEL_73;
            }
            goto LABEL_72;
          }
        }
        else
          sub_21E8AF4(&v39, (int *)&unk_27EB7F8);
          sub_21E7408((const void **)&v39, "%multiplayer.packErrors.realms", 0x1Eu);
            &v39);
          v17 = (void *)(v39 - 12);
          if ( (int *)(v39 - 12) != &dword_28898C0 )
            v18 = (unsigned int *)(v39 - 4);
LABEL_73:
              if ( v19 <= 0 )
                j_j_j_j__ZdlPv_9(v17);
              goto LABEL_35;
LABEL_72:
            v19 = (*v18)--;
            goto LABEL_73;
LABEL_35:
        TextPacket::createTranslated((int)&v37, (int *)&v40, (unsigned __int64 *)&v43);
        v22 = *((_DWORD *)v3 + 11);
        v23 = *(void (__fastcall **)(int, char *, char *, int))(*(_DWORD *)v22 + 16);
        v24 = Player::getClientId(v4);
        v25 = Player::getClientSubId(v4);
        v23(v22, v24, &v37, v25);
        *((_BYTE *)v3 + 81) = 1;
        TextPacket::~TextPacket((TextPacket *)&v37);
        v26 = v40 - 12;
        if ( (int *)(v40 - 12) != &dword_28898C0 )
          v35 = (unsigned int *)(v40 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v36 = __ldrex(v35);
            while ( __strex(v36 - 1, v35) );
          else
            v36 = (*v35)--;
          if ( v36 <= 0 )
            j_j_j_j__ZdlPv_9(v26);
        goto LABEL_36;
      }
LABEL_36:
  TextPacket::~TextPacket((TextPacket *)&v41);
  v28 = (int)v44;
  v27 = v43;
  if ( v43 != v44 )
    do
      v31 = (int *)(*(_DWORD *)v27 - 12);
      if ( v31 != &dword_28898C0 )
        v29 = (unsigned int *)(*(_DWORD *)v27 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j__ZdlPv_9(v31);
      v27 += 4;
    while ( v27 != (char *)v28 );
    v27 = v43;
  if ( v27 )
    operator delete(v27);
  v32 = v48 - 12;
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v48 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
}


int __fastcall ServerNetworkHandler::allowIncomingConnections(int a1, int *a2, int a3)
{
  int v3; // r5@1
  void *v4; // r0@4
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  int v8; // [sp+4h] [bp-1Ch]@2

  v3 = a1;
  *(_BYTE *)(a1 + 272) = 1;
  if ( a3 == 1 )
    sub_21E8AF4(&v8, a2);
  else
    sub_21E94B4((void **)&v8, (const char *)&unk_257BC67);
  EntityInteraction::setInteractText((int *)(v3 + 296), &v8);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  return ServerNetworkHandler::updateServerAnnouncement((ServerNetworkHandler *)v3);
}


TextPacket *__fastcall ServerNetworkHandler::_displayGameMessage(int a1, int *a2, int *a3, int *a4)
{
  int v4; // r4@1
  char v6; // [sp+10h] [bp-48h]@1
  unsigned __int64 v7; // [sp+3Ch] [bp-1Ch]@1
  int v8; // [sp+40h] [bp-18h]@1
  int v9; // [sp+44h] [bp-14h]@1

  v4 = a1;
  LODWORD(v7) = 0;
  v8 = 0;
  v9 = 0;
  TextPacket::TextPacket((int)&v6, 1, a2, a3, &v7, 0, a4);
  (*(void (**)(void))(**(_DWORD **)(v4 + 44) + 8))();
  return TextPacket::~TextPacket((TextPacket *)&v6);
}


void __fastcall ServerNetworkHandler::_onClientAuthenticated(ServerNetworkHandler *this, const NetworkIdentifier *a2, const Certificate *a3)
{
  ServerNetworkHandler::_onClientAuthenticated(this, a2, a3);
}


void __fastcall ServerNetworkHandler::sendSubClientLoginMessageLocal(ServerNetworkHandler *this, const NetworkIdentifier *a2, const SubClientConnectionRequest *a3, int a4)
{
  int v4; // r10@1
  const NetworkIdentifier *v5; // r4@1
  ServerNetworkHandler *v6; // r5@1
  Player *v7; // r8@1
  int v8; // r6@1
  void (__fastcall *v9)(int, const NetworkIdentifier *, int *, int); // r7@1
  int v10; // r0@1
  int v11; // [sp+0h] [bp-60h]@1

  v4 = a4;
  v5 = a2;
  v6 = this;
  v7 = ServerNetworkHandler::_createNewPlayer(this, a2, a3, a4);
  ServerNetworkHandler::updateServerAnnouncement(v6);
  ServerNetworkHandler::_sendLevelData(v6, v7, v5);
  v8 = *((_DWORD *)v6 + 11);
  v9 = *(void (__fastcall **)(int, const NetworkIdentifier *, int *, int))(*(_DWORD *)v8 + 16);
  v10 = MinecraftCommands::getRegistry(*((MinecraftCommands **)v6 + 61));
  CommandRegistry::serializeAvailableCommands((CommandRegistry *)&v11, v10);
  v9(v8, v5, &v11, v4);
  AvailableCommandsPacket::~AvailableCommandsPacket((AvailableCommandsPacket *)&v11);
  ServerNetworkHandler::_sendAdditionalLevelData(v6, v7, v5);
}


int __fastcall ServerNetworkHandler::ServerNetworkHandler(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, char a13, unsigned __int64 *a14, int *a15, int a16, __int64 a17, int a18, int a19)
{
  return ServerNetworkHandler::ServerNetworkHandler(
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
           a19);
}


void __fastcall ServerNetworkHandler::onInvalidPlayerJoinedLobby(int a1, int a2, int a3, int *a4)
{
  ServerNetworkHandler::onInvalidPlayerJoinedLobby(a1, a2, a3, a4);
}


int __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const EntityEventPacket *a3)
{
  ServerNetworkHandler *v3; // r9@1
  const NetworkIdentifier *v4; // r7@1
  int v5; // r10@1
  int *v6; // r6@1
  __int64 v7; // kr00_8@1
  int v8; // r5@2
  int result; // r0@6
  int v10; // r2@7
  int v11; // r1@7
  Dimension *v12; // r0@11
  const EntityEventPacket *v13; // [sp+4h] [bp-34h]@1
  __int64 v14; // [sp+8h] [bp-30h]@9

  v3 = this;
  v13 = a3;
  v4 = a2;
  v5 = *((_BYTE *)a3 + 12);
  v7 = *(_QWORD *)Level::getUsers(*((Level **)this + 7));
  v6 = (int *)v7;
  if ( (_DWORD)v7 == HIDWORD(v7) )
    goto LABEL_6;
  while ( 1 )
  {
    v8 = *v6;
    if ( *((_DWORD *)v4 + 36) == *(_DWORD *)(*v6 + 4536)
      && NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v8 + 4392)) == 1
      && Player::getClientSubId((Player *)v8) == v5 )
    {
      break;
    }
    ++v6;
    if ( (int *)HIDWORD(v7) == v6 )
      goto LABEL_6;
  }
  if ( v8 && (Entity::getRuntimeID((Entity *)&v14, v8), *((_QWORD *)v13 + 2) == v14) )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 316))(v8);
    if ( result == 1 )
      (*(void (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v8 + 428))(
        v8,
        *((_BYTE *)v13 + 24),
        *((_DWORD *)v13 + 7));
      v12 = (Dimension *)Entity::getDimension((Entity *)v8);
      result = Dimension::sendPacketForEntity(v12, (const Entity *)v8, v13, 0);
  else
LABEL_6:
    result = Level::getRuntimeEntity(*((_DWORD *)v3 + 7), 0, *((_QWORD *)v13 + 2), 0);
    if ( result )
      v10 = *((_DWORD *)v13 + 7);
      v11 = *((_BYTE *)v13 + 24);
      result = (*(int (**)(void))(*(_DWORD *)result + 428))();
  return result;
}


void __fastcall ServerNetworkHandler::onXboxUserBlocked(int a1, int *a2)
{
  ServerNetworkHandler::onXboxUserBlocked(a1, a2);
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const NpcRequestPacket *a3)
{
  ServerNetworkHandler *v3; // r9@1
  const NetworkIdentifier *v4; // r7@1
  int v5; // r10@1
  int v6; // r6@1
  __int64 v7; // kr00_8@1
  int v8; // r5@2
  int v9; // r0@8
  Npc *v10; // r6@8
  NpcRequestPacket *v11; // [sp+8h] [bp-28h]@1

  v11 = a3;
  v3 = this;
  v4 = a2;
  v5 = *((_BYTE *)a3 + 12);
  v7 = *(_QWORD *)Level::getUsers(*((Level **)this + 7));
  v6 = v7;
  if ( (_DWORD)v7 != HIDWORD(v7) )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)v6;
      if ( *((_DWORD *)v4 + 36) == *(_DWORD *)(*(_DWORD *)v6 + 4536)
        && NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v8 + 4392)) == 1
        && Player::getClientSubId((Player *)v8) == v5 )
      {
        break;
      }
      v6 += 4;
      if ( HIDWORD(v7) == v6 )
        return;
    }
    if ( v8 )
      v9 = Level::getRuntimeEntity(*((_DWORD *)v3 + 7), 0, *((_QWORD *)v11 + 2), 0);
      v10 = (Npc *)v9;
      if ( v9 )
        if ( Entity::hasType(v9, 307) == 1 )
          j_j_j__ZN3Npc16handleNpcRequestERK6PlayerRK16NpcRequestPacket(v10, (const Player *)v8, v11);
  }
}


char *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const BlockPickRequestPacket *a3)
{
  const NetworkIdentifier *v3; // r4@1
  char *v4; // r9@1
  char *result; // r0@1
  int v6; // r5@1
  int v7; // r7@1
  int v8; // r6@2
  const BlockPos *v9; // r5@10
  int v10; // r4@10
  int *v11; // r0@10
  Material *v12; // r0@11
  BlockEntity *v13; // r1@18
  bool v14; // zf@18
  int v15; // r4@22
  void (__fastcall *v16)(int, int, void ***, int); // r5@22
  int v17; // r0@22
  int v18; // r0@22
  int v19; // r4@22
  PlayerInventoryProxy *v20; // r0@22
  char v21; // r7@22
  PlayerInventoryProxy *v22; // r0@22
  unsigned __int64 *v23; // r0@22
  int v24; // r4@22
  void (__fastcall *v25)(int, int, void ***, int); // r5@22
  int v26; // r0@22
  __int64 v27; // r4@24
  void *v28; // r0@25
  void *v29; // r0@27
  int v30; // r0@29
  ServerNetworkHandler *v31; // [sp+4h] [bp-114h]@1
  const BlockPickRequestPacket *v32; // [sp+8h] [bp-110h]@1
  char v33; // [sp+Ch] [bp-10Ch]@22
  int v34; // [sp+10h] [bp-108h]@22
  void **v35; // [sp+14h] [bp-104h]@22
  void *v36; // [sp+2Ch] [bp-ECh]@22
  void **v37; // [sp+38h] [bp-E0h]@22
  __int64 v38; // [sp+48h] [bp-D0h]@24
  int v39; // [sp+54h] [bp-C4h]@22
  char v40; // [sp+58h] [bp-C0h]@12
  int v41; // [sp+60h] [bp-B8h]@16
  void *v42; // [sp+7Ch] [bp-9Ch]@14
  void *ptr; // [sp+8Ch] [bp-8Ch]@12
  unsigned __int8 v44; // [sp+A4h] [bp-74h]@10
  char v45; // [sp+A8h] [bp-70h]@10
  char *v46; // [sp+B0h] [bp-68h]@39
  void *v47; // [sp+CCh] [bp-4Ch]@37
  void *v48; // [sp+DCh] [bp-3Ch]@35

  v31 = this;
  v3 = a2;
  v32 = a3;
  v4 = (char *)*((_BYTE *)a3 + 12);
  result = Level::getUsers(*((Level **)this + 7));
  v7 = *(_QWORD *)result >> 32;
  v6 = *(_QWORD *)result;
  if ( v6 != v7 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)v6;
      result = (char *)*((_DWORD *)v3 + 36);
      if ( result == *(char **)(*(_DWORD *)v6 + 4536) )
      {
        result = (char *)NetworkIdentifier::equalsTypeData(v3, (const NetworkIdentifier *)(v8 + 4392));
        if ( result == (char *)1 )
        {
          result = (char *)Player::getClientSubId((Player *)v8);
          if ( result == v4 )
            break;
        }
      }
      v6 += 4;
      if ( v7 == v6 )
        return result;
    }
    if ( v8 )
      result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v8 + 316))(v8);
      if ( result == (char *)1 )
        result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v8 + 652))(v8);
          ItemInstance::ItemInstance((int)&v45);
          v9 = (const BlockPos *)Entity::getRegion((Entity *)v8);
          BlockSource::getBlockAndData((BlockSource *)&v44, v9, (int)v32 + 16);
          v10 = v44;
          v11 = (int *)Block::getMaterial((Block *)Block::mBlocks[v44]);
          if ( !Material::isType(v11, 0) )
          {
            v12 = (Material *)Block::getMaterial((Block *)Block::mBlocks[v10]);
            if ( !Material::isLiquid(v12) )
            {
              (*(void (__fastcall **)(char *))(*(_DWORD *)Block::mBlocks[v10] + 272))(&v40);
              ItemInstance::operator=((int)&v45, (int)&v40);
              if ( ptr )
                operator delete(ptr);
              if ( v42 )
                operator delete(v42);
              if ( v41 )
                (*(void (__cdecl **)(int))(*(_DWORD *)v41 + 4))(v41);
              v41 = 0;
              v13 = (BlockEntity *)BlockSource::getBlockEntity(v9, (const BlockPickRequestPacket *)((char *)v32 + 16));
              v14 = v13 == 0;
              if ( v13 )
                v14 = *((_BYTE *)v32 + 28) == 0;
              if ( !v14 )
                ItemInstance::addCustomUserData((ItemInstance *)&v45, v13, v9);
              v39 = *((_BYTE *)v32 + 29);
              ServerPlayer::addItemCreative((ServerPlayer *)v8, (const ItemInstance *)&v45, &v39);
              InventoryContentPacket::fromPlayerInventoryId((int)&v37, 0, (Mob *)v8);
              v15 = *((_DWORD *)v31 + 11);
              v16 = *(void (__fastcall **)(int, int, void ***, int))(*(_DWORD *)v15 + 16);
              v17 = Player::getClientSubId((Player *)v8);
              v16(v15, v8 + 4392, &v37, v17);
              v18 = Player::getSupplies((Player *)v8);
              PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v33, v18);
              v19 = v34;
              v20 = (PlayerInventoryProxy *)Player::getSupplies((Player *)v8);
              v21 = PlayerInventoryProxy::getSelectedContainerId(v20);
              v22 = (PlayerInventoryProxy *)Player::getSupplies((Player *)v8);
              v23 = (unsigned __int64 *)PlayerInventoryProxy::getLinkedSlots(v22);
              PlayerHotbarPacket::PlayerHotbarPacket((int)&v35, v19, v21, v23, 1);
              v24 = *((_DWORD *)v31 + 11);
              v25 = *(void (__fastcall **)(int, int, void ***, int))(*(_DWORD *)v24 + 16);
              v26 = Player::getClientSubId((Player *)v8);
              v25(v24, v8 + 4392, &v35, v26);
              v35 = &off_26DA620;
              if ( v36 )
                operator delete(v36);
              v37 = &off_26E974C;
              v27 = v38;
              if ( (_DWORD)v38 != HIDWORD(v38) )
              {
                do
                {
                  v28 = *(void **)(v27 + 52);
                  if ( v28 )
                    operator delete(v28);
                  v29 = *(void **)(v27 + 36);
                  if ( v29 )
                    operator delete(v29);
                  v30 = *(_DWORD *)(v27 + 8);
                  if ( v30 )
                    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
                  *(_DWORD *)(v27 + 8) = 0;
                  LODWORD(v27) = v27 + 72;
                }
                while ( HIDWORD(v27) != (_DWORD)v27 );
                LODWORD(v27) = v38;
              }
              if ( (_DWORD)v27 )
                operator delete((void *)v27);
            }
          }
          if ( v48 )
            operator delete(v48);
          if ( v47 )
            operator delete(v47);
          result = v46;
          if ( v46 )
            result = (char *)(*(int (**)(void))(*(_DWORD *)v46 + 4))();
  }
  return result;
}


int __fastcall ServerNetworkHandler::_getPlayer(int a1, int a2, int a3, _QWORD *a4)
{
  _QWORD *v4; // r8@1
  int v5; // r9@1
  int v6; // r6@1
  __int64 v7; // r4@1
  int v8; // r7@2
  int v9; // r5@6
  __int64 v11; // [sp+0h] [bp-30h]@9

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = *(_QWORD *)Level::getUsers(*(Level **)(a1 + 28));
  if ( (_DWORD)v7 == HIDWORD(v7) )
  {
    v9 = 0;
  }
  else
    while ( 1 )
    {
      v8 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v6 + 144) == *(_DWORD *)(*(_DWORD *)v7 + 4536)
        && NetworkIdentifier::equalsTypeData((NetworkIdentifier *)v6, (const NetworkIdentifier *)(v8 + 4392)) == 1
        && Player::getClientSubId((Player *)v8) == v5 )
      {
        break;
      }
      LODWORD(v7) = v7 + 4;
      if ( HIDWORD(v7) == (_DWORD)v7 )
        return 0;
    }
    if ( v8 )
      Entity::getRuntimeID((Entity *)&v11, v8);
      if ( !(*v4 ^ v11) )
        v9 = v8;
  return v9;
}


void __fastcall ServerNetworkHandler::_onSubClientAuthenticated(ServerNetworkHandler *this, const NetworkIdentifier *a2, const Certificate *a3, const SubClientLoginPacket *a4)
{
  ServerNetworkHandler::_onSubClientAuthenticated(this, a2, a3, a4);
}


char *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const MoveEntityPacket *a3)
{
  ServerNetworkHandler *v3; // r8@1
  const NetworkIdentifier *v4; // r4@1
  char *v5; // r10@1
  char *result; // r0@1
  int v7; // r5@1 OVERLAPPED
  int v8; // r6@1 OVERLAPPED
  int v9; // r7@2
  MoveEntityPacketData *v10; // r9@8
  char *v11; // r5@8
  char *v12; // r0@10
  void (__fastcall *v20)(char *, int, char *, signed int); // r7@12
  void (__fastcall *v21)(char *, char *); // r7@13
  signed __int8 v22; // r1@14
  int v23; // r0@15
  __int64 v24; // r6@17
  int v25; // t1@18
  Dimension *v26; // r0@19
  int v27; // r4@19
  int v28; // r6@19
  int v29; // r7@19
  int v30; // r4@19
  int v31; // r6@19
  int v32; // r7@19
  const MoveEntityPacket *v33; // [sp+4h] [bp-74h]@1
  void **v34; // [sp+8h] [bp-70h]@19
  int v35; // [sp+Ch] [bp-6Ch]@19
  int v36; // [sp+10h] [bp-68h]@19
  char v37; // [sp+14h] [bp-64h]@19
  int v38; // [sp+18h] [bp-60h]@19
  int v39; // [sp+1Ch] [bp-5Ch]@19
  int v40; // [sp+20h] [bp-58h]@19
  int v41; // [sp+24h] [bp-54h]@19
  int v42; // [sp+28h] [bp-50h]@19
  int v43; // [sp+2Ch] [bp-4Ch]@19
  int v44; // [sp+30h] [bp-48h]@19
  int v45; // [sp+34h] [bp-44h]@19
  char v46; // [sp+38h] [bp-40h]@13
  char v47; // [sp+40h] [bp-38h]@12
  int v48; // [sp+48h] [bp-30h]@10
  int v49; // [sp+4Ch] [bp-2Ch]@10

  v3 = this;
  v33 = a3;
  v4 = a2;
  v5 = (char *)*((_BYTE *)a3 + 12);
  result = Level::getUsers(*((Level **)this + 7));
  *(_QWORD *)&v7 = *(_QWORD *)result;
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)v7;
      result = (char *)*((_DWORD *)v4 + 36);
      if ( result == *(char **)(*(_DWORD *)v7 + 4536) )
      {
        result = (char *)NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v9 + 4392));
        if ( result == (char *)1 )
        {
          result = (char *)Player::getClientSubId((Player *)v9);
          if ( result == v5 )
            break;
        }
      }
      v7 += 4;
      if ( v8 == v7 )
        return result;
    }
    if ( v9 )
      v10 = (const MoveEntityPacket *)((char *)v33 + 16);
      result = (char *)Level::getRuntimeEntity(*((_DWORD *)v3 + 7), 0, *((_QWORD *)v33 + 2), 0);
      v11 = result;
      if ( result )
        result = (char *)Entity::isRider((Entity *)result, (Entity *)v9);
          (*(void (__fastcall **)(int *, char *))(*(_DWORD *)v11 + 540))(&v48, v11);
          v12 = Entity::getUniqueID((Entity *)v9);
          result = (char *)(*(_QWORD *)v12 ^ v48 | (*(_QWORD *)v12 >> 32) ^ v49);
          if ( !result )
          {
            _R7 = (*(int (__fastcall **)(char *))(*(_DWORD *)v11 + 52))(v11);
            Entity::setPreviousPosRot((int)v11, _R7, (_QWORD *)v11 + 15);
            _R0 = v33;
            __asm
            {
              VLDR            S0, [R7]
              VLDR            S2, [R7,#4]
            }
            _R6 = (int)v33 + 24;
              VLDR            S6, [R0,#0x18]
              VLDR            S8, [R0,#0x1C]
              VSUB.F32        S0, S6, S0
              VLDR            S4, [R7,#8]
              VSUB.F32        S2, S8, S2
              VLDR            S10, [R0,#0x20]
              VSUB.F32        S4, S10, S4
              VMUL.F32        S0, S0, S0
              VMUL.F32        S2, S2, S2
              VMUL.F32        S4, S4, S4
              VADD.F32        S0, S2, S0
              VADD.F32        S0, S0, S4
              VCMPE.F32       S0, #0.0
              VMRS            APSR_nzcv, FPSCR
            if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
              (*(void (__fastcall **)(char *, char *))(*(_DWORD *)v11 + 48))(v11, (char *)v33 + 24);
              v21 = *(void (__fastcall **)(char *, char *))(*(_DWORD *)v11 + 72);
              MoveEntityPacketData::getRot((MoveEntityPacketData *)&v46, (int)v10);
              v21(v11, &v46);
            else
              v20 = *(void (__fastcall **)(char *, int, char *, signed int))(*(_DWORD *)v11 + 112);
              MoveEntityPacketData::getRot((MoveEntityPacketData *)&v47, (int)v10);
              v20(v11, _R6, &v47, 3);
            if ( Entity::hasCategory((int)v11, 2) == 1 )
              v23 = MoveEntityPacketData::getYHeadRot(v10, v22);
              Mob::snapToYHeadRot((Mob *)v11, *(float *)&v23);
            if ( Entity::isRide((Entity *)v11) == 1 )
              v24 = *(_QWORD *)(v11 + 476);
              while ( HIDWORD(v24) != (_DWORD)v24 )
              {
                v25 = *(_DWORD *)v24;
                LODWORD(v24) = v24 + 4;
                (*(void (__fastcall **)(char *, int, _DWORD))(*(_DWORD *)v11 + 136))(v11, v25, 0);
              }
            v26 = (Dimension *)Entity::getDimension((Entity *)v11);
            v35 = 2;
            v36 = 1;
            v37 = 0;
            v34 = &off_26E94A4;
            v27 = *((_DWORD *)v33 + 5);
            v28 = *((_DWORD *)v33 + 6);
            v29 = *((_DWORD *)v33 + 7);
            v38 = *(_DWORD *)v10;
            v39 = v27;
            v40 = v28;
            v41 = v29;
            v30 = *((_DWORD *)v33 + 9);
            v31 = *((_DWORD *)v33 + 10);
            v32 = *((_DWORD *)v33 + 11);
            v42 = *((_DWORD *)v33 + 8);
            v43 = v30;
            v44 = v31;
            v45 = v32;
            result = (char *)Dimension::sendPacketForEntity(v26, (const Entity *)v11, (const Packet *)&v34, 0);
          }
  }
  return result;
}


LevelSettings *__fastcall ServerNetworkHandler::_sendLevelData(ServerNetworkHandler *this, ServerPlayer *a2, const NetworkIdentifier *a3)
{
  ServerNetworkHandler *v3; // r8@1
  __int64 v4; // r10@1
  ServerPlayer *v5; // r9@1
  char *v6; // r4@1
  int v7; // r0@1
  __int64 v8; // kr00_8@1
  int v9; // r5@1
  int v10; // r7@1
  int v11; // r0@1
  __int64 v12; // kr08_8@1
  char *v13; // r0@1
  int *v14; // r5@1
  char *v15; // r0@1
  int *v16; // r0@1
  int v17; // r11@1
  __int64 v18; // kr10_8@1
  void *v19; // r0@3
  void *v20; // r0@4
  int v21; // r7@5
  void (__fastcall *v22)(int, _DWORD, void ***, int); // r4@5
  int v23; // r0@5
  char v24; // r0@5
  int v25; // r7@5
  void (__fastcall *v26)(int, _DWORD, void ***, int); // r4@5
  int v27; // r0@5
  int v28; // r0@5
  int v29; // r7@5
  void (__fastcall *v30)(int, _DWORD, void ***, int); // r4@5
  int v31; // r0@5
  int v32; // r0@5
  int v33; // r7@5
  void (__fastcall *v34)(int, _DWORD, void ***, int); // r4@5
  int v35; // r0@5
  char v36; // r0@5
  int v37; // r7@5
  void (__fastcall *v38)(int, _DWORD, void ***, int); // r4@5
  int v39; // r0@5
  char *v40; // r0@5
  LevelData *v41; // r7@5
  float v49; // r1@6
  int v50; // r7@6
  void (__fastcall *v51)(int, _DWORD, void ***, int); // r4@6
  int v52; // r0@6
  float v56; // r1@8
  int v57; // r7@8
  void (__fastcall *v58)(int, _DWORD, void ***, int); // r4@8
  int v59; // r0@8
  int v60; // r7@9
  char *v61; // r0@9
  int v62; // r3@9
  char *v63; // r0@9
  int v64; // r7@9
  int v65; // r4@9
  void (__fastcall *v66)(int, _DWORD, int, int); // r5@9
  int v67; // r0@9
  _DWORD *v68; // r4@9
  int v69; // r2@10
  int i; // r0@10
  int v71; // r1@12
  int v72; // r4@16
  void (__fastcall *v73)(int, _DWORD, void ***, int); // r7@16
  int v74; // r0@16
  int v75; // r0@16
  __int64 v76; // r1@17
  int v77; // r4@17
  void (__fastcall *v78)(int, _DWORD, void ***, int); // r7@17
  int v79; // r0@17
  PlayerListEntry *v80; // r0@18
  PlayerListEntry *v81; // r4@18
  void *v82; // r0@25
  void *v83; // r0@26
  void *v84; // r0@27
  unsigned int *v86; // r2@29
  signed int v87; // r1@31
  unsigned int *v88; // r2@33
  signed int v89; // r1@35
  unsigned int *v90; // r2@37
  signed int v91; // r1@39
  unsigned int *v92; // r2@41
  signed int v93; // r1@43
  unsigned int *v94; // r2@45
  signed int v95; // r1@47
  int v96; // [sp+24h] [bp-374h]@0
  int v97; // [sp+30h] [bp-368h]@1
  int v98; // [sp+3Ch] [bp-35Ch]@1
  void **v99; // [sp+44h] [bp-354h]@17
  int v100; // [sp+48h] [bp-350h]@17
  int v101; // [sp+4Ch] [bp-34Ch]@17
  char v102; // [sp+50h] [bp-348h]@17
  int v103; // [sp+54h] [bp-344h]@17
  __int64 v104; // [sp+58h] [bp-340h]@17
  __int64 v105; // [sp+60h] [bp-338h]@17
  void **v106; // [sp+68h] [bp-330h]@9
  int v107; // [sp+6Ch] [bp-32Ch]@9
  int v108; // [sp+70h] [bp-328h]@9
  char v109; // [sp+74h] [bp-324h]@9
  void *ptr; // [sp+78h] [bp-320h]@9
  void *v111; // [sp+7Ch] [bp-31Ch]@9
  int v112; // [sp+80h] [bp-318h]@9
  char v113; // [sp+84h] [bp-314h]@9
  int v114; // [sp+8Ch] [bp-30Ch]@9
  char v115; // [sp+90h] [bp-308h]@9
  void **v116; // [sp+C0h] [bp-2D8h]@8
  int v117; // [sp+C4h] [bp-2D4h]@8
  int v118; // [sp+C8h] [bp-2D0h]@8
  char v119; // [sp+CCh] [bp-2CCh]@8
  signed __int64 v120; // [sp+D0h] [bp-2C8h]@8
  int v121; // [sp+D8h] [bp-2C0h]@8
  int v122; // [sp+DCh] [bp-2BCh]@8
  int v123; // [sp+E0h] [bp-2B8h]@8
  void **v124; // [sp+E4h] [bp-2B4h]@6
  int v125; // [sp+E8h] [bp-2B0h]@6
  int v126; // [sp+ECh] [bp-2ACh]@6
  char v127; // [sp+F0h] [bp-2A8h]@6
  signed __int64 v128; // [sp+F4h] [bp-2A4h]@6
  int v129; // [sp+FCh] [bp-29Ch]@6
  int v130; // [sp+100h] [bp-298h]@6
  int v131; // [sp+104h] [bp-294h]@6
  void **v132; // [sp+108h] [bp-290h]@5
  int v133; // [sp+10Ch] [bp-28Ch]@5
  int v134; // [sp+110h] [bp-288h]@5
  char v135; // [sp+114h] [bp-284h]@5
  char v136; // [sp+115h] [bp-283h]@5
  void **v137; // [sp+118h] [bp-280h]@5
  int v138; // [sp+11Ch] [bp-27Ch]@5
  int v139; // [sp+120h] [bp-278h]@5
  char v140; // [sp+124h] [bp-274h]@5
  int v141; // [sp+128h] [bp-270h]@5
  void **v142; // [sp+12Ch] [bp-26Ch]@5
  int v143; // [sp+130h] [bp-268h]@5
  int v144; // [sp+134h] [bp-264h]@5
  char v145; // [sp+138h] [bp-260h]@5
  int v146; // [sp+13Ch] [bp-25Ch]@5
  char v147; // [sp+140h] [bp-258h]@5
  int v148; // [sp+144h] [bp-254h]@5
  int v149; // [sp+148h] [bp-250h]@5
  void **v150; // [sp+14Ch] [bp-24Ch]@5
  int v151; // [sp+150h] [bp-248h]@5
  int v152; // [sp+154h] [bp-244h]@5
  char v153; // [sp+158h] [bp-240h]@5
  int v154; // [sp+15Ch] [bp-23Ch]@5
  int v155; // [sp+160h] [bp-238h]@5
  int v156; // [sp+164h] [bp-234h]@5
  int v157; // [sp+168h] [bp-230h]@5
  char v158; // [sp+16Ch] [bp-22Ch]@5
  int v159; // [sp+170h] [bp-228h]@1
  int v160; // [sp+174h] [bp-224h]@1
  char v161; // [sp+178h] [bp-220h]@1
  __int64 v162; // [sp+180h] [bp-218h]@1
  void **v163; // [sp+188h] [bp-210h]@3
  int v164; // [sp+198h] [bp-200h]@28
  int v165; // [sp+288h] [bp-110h]@27
  int v166; // [sp+28Ch] [bp-10Ch]@26
  int v167; // [sp+290h] [bp-108h]@25
  char v168; // [sp+2A8h] [bp-F0h]@1

  v3 = this;
  HIDWORD(v4) = a3;
  v5 = a2;
  v6 = Level::getLevelData(*((Level **)this + 7));
  v7 = (*(int (__fastcall **)(ServerPlayer *))(*(_DWORD *)v5 + 524))(v5);
  LevelSettings::LevelSettings((int)&v168, (LevelData *)v6, v7);
  v8 = *(_QWORD *)Entity::getUniqueID(v5);
  LODWORD(v4) = v8;
  Entity::getRuntimeID((Entity *)&v162, (int)v5);
  v9 = *((_DWORD *)v5 + 1308);
  v10 = (*(int (__fastcall **)(ServerPlayer *))(*(_DWORD *)v5 + 52))(v5);
  Entity::getRotation((Entity *)&v161, (int)v5);
  v11 = Level::getLevelStorage(*((Level **)v3 + 7));
  (*(void (__fastcall **)(int *))(*(_DWORD *)v11 + 84))(&v160);
  v98 = v9;
  v12 = v4;
  v13 = Level::getLevelData(*((Level **)v3 + 7));
  v14 = (int *)LevelData::getLevelName((LevelData *)v13);
  v15 = Level::getLevelData(*((Level **)v3 + 7));
  v16 = (int *)LevelData::getPremiumTemplatePackId((LevelData *)v15);
  sub_21E8AF4(&v159, v16);
  v17 = *((_BYTE *)v3 + 348);
  v18 = *(_QWORD *)Level::getCurrentTick(*((Level **)v3 + 7));
  v97 = Player::getEnchantmentSeed(v5);
  if ( v17 )
    LOBYTE(v17) = 1;
  StartGamePacket::StartGamePacket(
    (int)&v163,
    (int)&v168,
    v12,
    SHIDWORD(v8),
    v162,
    v98,
    v10,
    &v161,
    &v160,
    v14,
    &v159,
    v17,
    v96,
    v18,
    v97);
  v19 = (void *)(v159 - 12);
  if ( (int *)(v159 - 12) != &dword_28898C0 )
  {
    v86 = (unsigned int *)(v159 - 4);
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
      j_j_j_j__ZdlPv_9(v19);
  }
  v20 = (void *)(v160 - 12);
  if ( (int *)(v160 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v160 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = *((_DWORD *)v3 + 11);
  v22 = *(void (__fastcall **)(int, _DWORD, void ***, int))(*(_DWORD *)v21 + 16);
  v23 = Player::getClientSubId(v5);
  v22(v21, HIDWORD(v12), &v163, v23);
  Player::getSpawnPosition((Player *)&v147, (int)v5);
  v24 = Player::isForcedRespawn(v5);
  v151 = 2;
  v152 = 1;
  v153 = 0;
  v150 = &off_26DFAB0;
  v154 = *(_DWORD *)&v147;
  v155 = v148;
  v156 = v149;
  v157 = 0;
  v158 = v24;
  v25 = *((_DWORD *)v3 + 11);
  v26 = *(void (__fastcall **)(int, _DWORD, void ***, int))(*(_DWORD *)v25 + 16);
  v27 = Player::getClientSubId(v5);
  v26(v25, HIDWORD(v12), &v150, v27);
  v28 = Level::getTime(*((Level **)v3 + 7));
  v143 = 2;
  v144 = 1;
  v145 = 0;
  v142 = &off_26E93B4;
  v146 = v28;
  v29 = *((_DWORD *)v3 + 11);
  v30 = *(void (__fastcall **)(int, _DWORD, void ***, int))(*(_DWORD *)v29 + 16);
  v31 = Player::getClientSubId(v5);
  v30(v29, HIDWORD(v12), &v142, v31);
  v32 = Level::getDifficulty(*((Level **)v3 + 7));
  v138 = 2;
  v139 = 1;
  v140 = 0;
  v137 = &off_26D8278;
  v141 = v32;
  v33 = *((_DWORD *)v3 + 11);
  v34 = *(void (__fastcall **)(int, _DWORD, void ***, int))(*(_DWORD *)v33 + 16);
  v35 = Player::getClientSubId(v5);
  v34(v33, HIDWORD(v12), &v137, v35);
  v36 = Level::hasCommandsEnabled(*((Level **)v3 + 7));
  v133 = 2;
  v134 = 1;
  v135 = 0;
  v132 = &off_26E983C;
  v136 = v36;
  v37 = *((_DWORD *)v3 + 11);
  v38 = *(void (__fastcall **)(int, _DWORD, void ***, int))(*(_DWORD *)v37 + 16);
  v39 = Player::getClientSubId(v5);
  v38(v37, HIDWORD(v12), &v132, v39);
  v40 = Level::getLevelData(*((Level **)v3 + 7));
  v41 = (LevelData *)v40;
  _R0 = LevelData::getLightningLevel((LevelData *)v40);
  __asm
    VMOV            S0, R0
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( _ZF )
    _R0 = LevelData::getRainLevel(v41);
    __asm
      VMOV            S0, R0
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      _R0 = LevelData::getRainLevel(v41);
      __asm
      {
        VMOV            S0, R0
        VLDR            S2, =65535.0
        VMUL.F32        S0, S0, S2
        VMOV            R0, S0
      }
      v117 = 2;
      v118 = 1;
      v119 = 0;
      v116 = &off_26E956C;
      v120 = 3001LL;
      v121 = 0;
      v122 = 0;
      v123 = mce::Math::floor(_R0, v56);
      v57 = *((_DWORD *)v3 + 11);
      v58 = *(void (__fastcall **)(int, _DWORD, void ***, int))(*(_DWORD *)v57 + 16);
      v59 = Player::getClientSubId(v5);
      v58(v57, HIDWORD(v12), &v116, v59);
  else
    _R0 = LevelData::getLightningLevel(v41);
      VLDR            S2, =65535.0
      VMUL.F32        S0, S0, S2
      VMOV            R0, S0
    v125 = 2;
    v126 = 1;
    v127 = 0;
    v124 = &off_26E956C;
    v128 = 3002LL;
    v129 = 0;
    v130 = 0;
    v131 = mce::Math::floor(_R0, v49);
    v50 = *((_DWORD *)v3 + 11);
    v51 = *(void (__fastcall **)(int, _DWORD, void ***, int))(*(_DWORD *)v50 + 16);
    v52 = Player::getClientSubId(v5);
    v51(v50, HIDWORD(v12), &v124, v52);
  v60 = Level::getAdventureSettings(*((Level **)v3 + 7));
  v61 = Entity::getUniqueID(v5);
  AdventureSettingsPacket::AdventureSettingsPacket(
    (int)&v115,
    v60,
    (int)v5 + 4320,
    v62,
    *(_QWORD *)v61,
    *(_QWORD *)v61 >> 32,
    0);
  (*(void (**)(void))(**((_DWORD **)v3 + 11) + 20))();
  v63 = Level::getGameRules(*((Level **)v3 + 7));
  GameRules::createAllGameRulesPacket((GameRules *)&v114, (int)v63);
  v64 = *((_DWORD *)v3 + 11);
  v65 = v114;
  v66 = *(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v64 + 16);
  v67 = Player::getClientSubId(v5);
  v66(v64, HIDWORD(v12), v65, v67);
  v107 = 2;
  v108 = 1;
  v109 = 0;
  v106 = &off_26E988C;
  v113 = 0;
  v112 = 0;
  ptr = 0;
  v111 = 0;
  v68 = *(_DWORD **)(*((_DWORD *)v3 + 7) + 640);
  if ( v68 )
    v69 = 0;
    for ( i = 0; ; i = (int)v111 )
      v71 = (int)(v68 + 6);
      if ( i == v69 )
        std::vector<PlayerListEntry,std::allocator<PlayerListEntry>>::_M_emplace_back_aux<PlayerListEntry const&>(
          (unsigned __int64 *)&ptr,
          v71);
      else
        PlayerListEntry::PlayerListEntry(i, v71);
        v111 = (char *)v111 + 72;
      v68 = (_DWORD *)*v68;
      if ( !v68 )
        break;
      v69 = v112;
  v72 = *((_DWORD *)v3 + 11);
  v73 = *(void (__fastcall **)(int, _DWORD, void ***, int))(*(_DWORD *)v72 + 16);
  v74 = Player::getClientSubId(v5);
  v73(v72, HIDWORD(v12), &v106, v74);
  v75 = *((_DWORD *)v3 + 7);
  if ( *(_BYTE *)(v75 + 5865) )
    v100 = 2;
    HIDWORD(v76) = 1;
    v101 = 1;
    v102 = 0;
    v99 = &off_26E956C;
    v103 = 3005;
    LODWORD(v76) = dword_2822498;
    v104 = *(_QWORD *)&Vec3::ZERO;
    v105 = v76;
    v77 = *((_DWORD *)v3 + 11);
    v78 = *(void (__fastcall **)(int, _DWORD, void ***, int))(*(_DWORD *)v77 + 16);
    v79 = Player::getClientSubId(v5);
    v78(v77, HIDWORD(v12), &v99, v79);
    v75 = *((_DWORD *)v3 + 7);
  Level::sendAllPlayerAbilities((Level *)v75, v5);
  v81 = (PlayerListEntry *)v111;
  v80 = (PlayerListEntry *)ptr;
  if ( ptr != v111 )
    do
      v80 = (PlayerListEntry *)((char *)PlayerListEntry::~PlayerListEntry(v80) + 72);
    while ( v81 != v80 );
    v80 = (PlayerListEntry *)ptr;
  if ( v80 )
    operator delete((void *)v80);
  if ( v114 )
    (*(void (**)(void))(*(_DWORD *)v114 + 4))();
  v163 = &off_26E93DC;
  v82 = (void *)(v167 - 12);
  if ( (int *)(v167 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v167 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v82);
  v83 = (void *)(v166 - 12);
  if ( (int *)(v166 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v166 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v83);
  v84 = (void *)(v165 - 12);
  if ( (int *)(v165 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v165 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v84);
  LevelSettings::~LevelSettings((LevelSettings *)&v164);
  return LevelSettings::~LevelSettings((LevelSettings *)&v168);
}


signed int __fastcall ServerNetworkHandler::_isServerFull(int a1, int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  int v5; // r4@1
  int v6; // r0@1
  signed int v7; // r1@1

  v5 = a1;
  v6 = ServerNetworkHandler::_getActiveAndInProgressPlayerCount(a1, SHIDWORD(a5), a3, a4, a5);
  v7 = 0;
  if ( v6 >= *(_DWORD *)(v5 + 316) )
    v7 = 1;
  return v7;
}


int __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const SetDifficultyPacket *a3)
{
  int v3; // r1@1

  v3 = *((_DWORD *)a3 + 4);
  return (*(int (**)(void))(**((_DWORD **)this + 7) + 84))();
}


int __fastcall ServerNetworkHandler::onWebsocketRequest(int a1, int a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r4@1
  int result; // r0@1
  int v9; // r7@2
  int (__fastcall *v10)(int, int, int, int *); // r8@3
  void (__fastcall *v11)(int *, int, signed int); // r3@3
  int v12; // [sp+0h] [bp-28h]@4
  int (*v13)(void); // [sp+8h] [bp-20h]@3
  int v14; // [sp+Ch] [bp-1Ch]@4

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  result = (*(int (**)(void))(**(_DWORD **)(a1 + 252) + 16))();
  if ( result == 1 )
  {
    v9 = *(_DWORD *)(v4 + 256);
    if ( v9 )
    {
      v10 = *(int (__fastcall **)(int, int, int, int *))(*(_DWORD *)v9 + 32);
      v13 = 0;
      v11 = *(void (__fastcall **)(int *, int, signed int))(v6 + 8);
      if ( v11 )
      {
        v11(&v12, v6, 2);
        v14 = *(_DWORD *)(v6 + 12);
        v13 = *(int (**)(void))(v6 + 8);
      }
      result = v10(v9, v5, v7, &v12);
      if ( v13 )
        result = v13();
    }
  }
  return result;
}


int __fastcall ServerNetworkHandler::updateServerAnnouncement(ServerNetworkHandler *this)
{
  ServerNetworkHandler *v1; // r4@1
  int result; // r0@1
  Entity **v3; // r5@2 OVERLAPPED
  Entity **v4; // r6@2 OVERLAPPED
  int v5; // r7@2
  Entity *v6; // t1@3
  int v7; // r5@6
  int (__fastcall *v8)(int, char *, char *, int); // r8@6
  char *v9; // r0@6
  char *v10; // r6@6
  char *v11; // r0@6
  int v12; // r0@6
  int v13; // ST04_4@6

  v1 = this;
  result = *((_BYTE *)this + 272);
  if ( result )
  {
    *(_QWORD *)&v3 = *(_QWORD *)Level::getUsers(*((Level **)v1 + 7));
    v5 = 0;
    while ( v4 != v3 )
    {
      v6 = *v3;
      ++v3;
      if ( !Entity::isRemoved(v6) )
        ++v5;
    }
    v7 = *((_DWORD *)v1 + 10);
    v8 = *(int (__fastcall **)(int, char *, char *, int))(*(_DWORD *)v7 + 8);
    v9 = Level::getLevelData(*((Level **)v1 + 7));
    v10 = LevelData::getLevelName((LevelData *)v9);
    v11 = Level::getLevelData(*((Level **)v1 + 7));
    v12 = LevelData::getGameType((LevelData *)v11);
    v13 = *((_DWORD *)v1 + 79);
    result = v8(v7, (char *)v1 + 296, v10, v12);
  }
  return result;
}


char *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const EntityFallPacket *a3)
{
  ServerNetworkHandler *v3; // r9@1
  const NetworkIdentifier *v4; // r6@1
  char *v5; // r10@1
  char *result; // r0@1
  int v7; // r4@1
  int v8; // r5@1
  int v9; // r7@2
  int v10; // r2@9
  int v11; // r1@9
  const EntityFallPacket *v12; // [sp+8h] [bp-28h]@1

  v12 = a3;
  v3 = this;
  v4 = a2;
  v5 = (char *)*((_BYTE *)a3 + 12);
  result = Level::getUsers(*((Level **)this + 7));
  v7 = *(_QWORD *)result >> 32;
  v8 = *(_QWORD *)result;
  if ( v8 != v7 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)v8;
      result = (char *)*((_DWORD *)v4 + 36);
      if ( result == *(char **)(*(_DWORD *)v8 + 4536) )
      {
        result = (char *)NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v9 + 4392));
        if ( result == (char *)1 )
        {
          result = (char *)Player::getClientSubId((Player *)v9);
          if ( result == v5 )
            break;
        }
      }
      v8 += 4;
      if ( v7 == v8 )
        return result;
    }
    if ( v9 )
      result = (char *)Level::getRuntimeEntity(*((_DWORD *)v3 + 7), 0, *((_QWORD *)v12 + 2), 0);
      if ( result )
        v10 = *((_BYTE *)v12 + 28);
        v11 = *((_DWORD *)v12 + 6);
        result = (char *)(*(int (**)(void))(*(_DWORD *)result + 552))();
  }
  return result;
}


char *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const InventoryTransactionPacket *a3)
{
  const InventoryTransactionPacket *v3; // r8@1
  const NetworkIdentifier *v4; // r5@1
  char *v5; // r9@1
  char *result; // r0@1
  int v7; // r4@1
  int v8; // r7@1
  int v9; // r6@2

  v3 = a3;
  v4 = a2;
  v5 = (char *)*((_BYTE *)a3 + 12);
  result = Level::getUsers(*((Level **)this + 7));
  v8 = *(_QWORD *)result >> 32;
  v7 = *(_QWORD *)result;
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)v7;
      result = (char *)*((_DWORD *)v4 + 36);
      if ( result == *(char **)(*(_DWORD *)v7 + 4536) )
      {
        result = (char *)NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v9 + 4392));
        if ( result == (char *)1 )
        {
          result = (char *)Player::getClientSubId((Player *)v9);
          if ( result == v5 )
            break;
        }
      }
      v7 += 4;
      if ( v8 == v7 )
        return result;
    }
    if ( v9 )
      result = (char *)(*(int (**)(void))(**((_DWORD **)v3 + 4) + 16))();
      if ( result != (char *)1 )
        result = (char *)(*(int (**)(void))(**((_DWORD **)v3 + 4) + 20))();
  }
  return result;
}


void __fastcall ServerNetworkHandler::sendSubClientLoginMessageLocal(ServerNetworkHandler *this, const NetworkIdentifier *a2, const SubClientConnectionRequest *a3, int a4)
{
  ServerNetworkHandler::sendSubClientLoginMessageLocal(this, a2, a3, a4);
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const SpawnExperienceOrbPacket *a3)
{
  const SpawnExperienceOrbPacket *v3; // r8@1
  const NetworkIdentifier *v4; // r5@1
  int v5; // r9@1
  int v6; // r4@1
  __int64 v7; // kr00_8@1
  int v8; // r6@2
  Player *v9; // r0@8

  v3 = a3;
  v4 = a2;
  v5 = *((_BYTE *)a3 + 12);
  v7 = *(_QWORD *)Level::getUsers(*((Level **)this + 7));
  v6 = v7;
  if ( (_DWORD)v7 != HIDWORD(v7) )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)v6;
      if ( *((_DWORD *)v4 + 36) == *(_DWORD *)(*(_DWORD *)v6 + 4536)
        && NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v8 + 4392)) == 1
        && Player::getClientSubId((Player *)v8) == v5 )
      {
        break;
      }
      v6 += 4;
      if ( HIDWORD(v7) == v6 )
        return;
    }
    if ( v8 )
      v9 = (Player *)Entity::getRegion((Entity *)v8);
      ExperienceOrb::spawnOrbs(
        v9,
        (const SpawnExperienceOrbPacket *)((char *)v3 + 16),
        *((_DWORD *)v3 + 7),
        0,
        (Player *)v8);
  }
}


int *__fastcall ServerNetworkHandler::setShareableIdentityToken(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int *result; // r0@1

  v2 = a1;
  v3 = a2;
  result = (int *)(*(int (**)(void))(**(_DWORD **)(a1 + 252) + 16))();
  if ( result == (int *)1 )
    result = EntityInteraction::setInteractText((int *)(v2 + 264), v3);
  return result;
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const ResourcePackClientResponsePacket *a3)
{
  const ResourcePackClientResponsePacket *v3; // r7@1
  ServerNetworkHandler *v4; // r11@1
  const NetworkIdentifier *v5; // r10@1
  unsigned int v6; // r8@2
  unsigned int v7; // r9@2
  int v8; // r4@2
  int v9; // r6@3
  int v10; // r5@3
  int v11; // r7@7
  int v12; // r0@10
  PackInstance *v13; // r4@10
  __int64 v14; // kr08_8@10
  PackManifest *v15; // r0@11
  char *v16; // r5@11
  int *v17; // r2@11
  int v18; // r0@15
  PackInstance *v19; // r4@15
  __int64 v20; // kr10_8@15
  PackManifest *v21; // r0@16
  char *v22; // r5@16
  int *v23; // r2@16
  char *v24; // r0@20
  char v25; // r0@20
  void *v26; // r1@20
  PackInstanceId *v27; // r1@20
  int v28; // r3@20
  PackInstanceId *v29; // r0@20
  PackInstanceId *v30; // r4@20
  PackInstanceId *v31; // r0@25
  PackInstanceId *v32; // r4@25
  unsigned int v33; // r8@30
  unsigned int v34; // r9@30
  signed int *v35; // r4@30
  signed int v36; // r6@31
  int v37; // r5@31
  signed int v38; // r0@34
  signed int v39; // r7@35
  void *v40; // r0@37
  unsigned int *v41; // r2@38
  signed int v42; // r1@40
  int v43; // r1@42
  _DWORD *v44; // r0@43
  _DWORD *v45; // r2@43
  int *v46; // r1@44
  int *v47; // r1@46
  int v48; // r0@48
  int v49; // r0@48
  PackInstance *v50; // r5@48
  PackInstance *v51; // r7@48
  PackInstance *v52; // r6@49
  unsigned int *v53; // r2@50
  signed int v54; // r1@52
  unsigned int *v55; // r2@54
  signed int v56; // r1@56
  int v57; // r9@67
  signed int v58; // r0@71
  int v59; // r4@74
  void *v60; // r10@75
  size_t v61; // r8@75
  _DWORD *v62; // r0@76
  PackInstance *v63; // r10@80
  PackInstance *v64; // r8@80
  int v65; // r5@80
  int v66; // r6@80
  int v67; // r0@80
  int v68; // r0@80
  void *v69; // r4@80
  int v70; // r1@80
  void *v71; // r0@80
  char *v72; // r0@82
  PackReport *v73; // r0@84
  int v74; // r0@89
  int v75; // r0@89
  PackInstance *v76; // r5@89
  PackInstance *v77; // r7@89
  PackInstance *v78; // r6@90
  bool v79; // zf@91
  bool v80; // zf@95
  unsigned int *v81; // r2@103
  signed int v82; // r1@105
  unsigned int *v83; // r2@107
  signed int v84; // r1@109
  int v85; // r9@120
  signed int v86; // r0@124
  int v87; // r4@127
  void *v88; // r10@128
  size_t v89; // r8@128
  _DWORD *v90; // r0@129
  PackInstance *v91; // r10@133
  PackInstance *v92; // r8@133
  int v93; // r5@133
  int v94; // r6@133
  int v95; // r0@133
  int v96; // r0@133
  void *v97; // r4@133
  int v98; // r1@133
  void *v99; // r0@133
  char *v100; // r0@135
  PackReport *v101; // r0@137
  NetworkIdentifier *v102; // [sp+Ch] [bp-D4h]@42
  char v103; // [sp+18h] [bp-C8h]@90
  void *v104; // [sp+28h] [bp-B8h]@103
  PackInstance *v105; // [sp+2Ch] [bp-B4h]@89
  PackInstance *v106; // [sp+30h] [bp-B0h]@89
  char v107; // [sp+38h] [bp-A8h]@49
  void *s2; // [sp+48h] [bp-98h]@50
  PackInstance *v109; // [sp+4Ch] [bp-94h]@48
  PackInstance *v110; // [sp+50h] [bp-90h]@48
  char v111; // [sp+58h] [bp-88h]@43
  int v112; // [sp+5Ch] [bp-84h]@42
  _DWORD *v113; // [sp+60h] [bp-80h]@42
  int *v114; // [sp+64h] [bp-7Ch]@42
  int *v115; // [sp+68h] [bp-78h]@42
  int v116; // [sp+6Ch] [bp-74h]@42
  int v117; // [sp+74h] [bp-6Ch]@37
  void **v118; // [sp+78h] [bp-68h]@20
  int v119; // [sp+7Ch] [bp-64h]@20
  int v120; // [sp+80h] [bp-60h]@20
  char v121; // [sp+84h] [bp-5Ch]@20
  void *v122; // [sp+88h] [bp-58h]@20
  PackInstanceId *v123; // [sp+8Ch] [bp-54h]@20
  int v124; // [sp+90h] [bp-50h]@20
  void *ptr; // [sp+94h] [bp-4Ch]@20
  PackInstanceId *v126; // [sp+98h] [bp-48h]@20
  PackInstanceId *v127; // [sp+9Ch] [bp-44h]@20
  char v128; // [sp+A0h] [bp-40h]@20
  void *v129; // [sp+A4h] [bp-3Ch]@10
  PackInstanceId *v130; // [sp+A8h] [bp-38h]@10
  PackInstanceId *v131; // [sp+ACh] [bp-34h]@10
  int v132; // [sp+B4h] [bp-2Ch]@98

  v3 = a3;
  v4 = this;
  v5 = a2;
  switch ( *((_BYTE *)a3 + 40) )
  {
    case 1:
      v6 = NetworkIdentifier::getHash(a2);
      v7 = v6 % (unsigned int)(*((_QWORD *)v4 + 40) >> 32);
      v8 = *(_DWORD *)(*((_QWORD *)v4 + 40) + 4 * v7);
      if ( v8 )
      {
        v9 = *(_DWORD *)v8;
        v10 = *(_DWORD *)(*(_DWORD *)v8 + 168);
        while ( v10 != v6
             || *((_DWORD *)v5 + 36) != *(_DWORD *)(v9 + 152)
             || !NetworkIdentifier::equalsTypeData(v5, (const NetworkIdentifier *)(v9 + 8)) )
        {
          v11 = *(_DWORD *)v9;
          if ( *(_DWORD *)v9 )
          {
            v10 = *(_DWORD *)(v11 + 168);
            v8 = v9;
            v9 = *(_DWORD *)v9;
            if ( *(_DWORD *)(v11 + 168) % *((_DWORD *)v4 + 81) == v7 )
              continue;
          }
          return;
        }
        v80 = v8 == 0;
        if ( v8 )
          v80 = *(_DWORD *)v8 == 0;
        if ( !v80 )
          sub_21E94B4((void **)&v132, (const char *)&unk_257BC67);
          ServerNetworkHandler::disconnectClient((int)v4, (int)v5, &v132, 1);
          v40 = (void *)(v132 - 12);
          if ( (int *)(v132 - 12) != &dword_28898C0 )
            v41 = (unsigned int *)(v132 - 4);
            if ( !&pthread_create )
              goto LABEL_144;
            __dmb();
            do
              v42 = __ldrex(v41);
            while ( __strex(v42 - 1, v41) );
            goto LABEL_145;
      }
      break;
    case 3:
      v129 = 0;
      v130 = 0;
      v131 = 0;
      v12 = (*(int (**)(void))(**((_DWORD **)this + 7) + 116))();
      v14 = *(_QWORD *)(ResourcePackManager::getStack(v12, 1) + 4);
      v13 = (PackInstance *)v14;
      if ( (_DWORD)v14 != HIDWORD(v14) )
        do
          v15 = (PackManifest *)PackInstance::getManifest(v13);
          v16 = PackManifest::getIdentity(v15);
          v17 = (int *)PackInstance::getSubpackFolderName(v13);
          if ( v130 == v131 )
            std::vector<PackInstanceId,std::allocator<PackInstanceId>>::_M_emplace_back_aux<PackIdVersion const&,std::string const&>(
              (unsigned __int64 *)&v129,
              (int)v16,
              v17);
          else
            v130 = (PackInstanceId *)(PackInstanceId::PackInstanceId((int)v130, (int)v16, v17) + 56);
          v13 = (PackInstance *)((char *)v13 + 120);
        while ( (PackInstance *)HIDWORD(v14) != v13 );
      v18 = (*(int (**)(void))(**((_DWORD **)v4 + 7) + 116))();
      v20 = *(_QWORD *)(ResourcePackManager::getStack(v18, 0) + 4);
      v19 = (PackInstance *)v20;
      if ( (_DWORD)v20 != HIDWORD(v20) )
          v21 = (PackManifest *)PackInstance::getManifest(v19);
          v22 = PackManifest::getIdentity(v21);
          v23 = (int *)PackInstance::getSubpackFolderName(v19);
              (int)v22,
              v23);
            v130 = (PackInstanceId *)(PackInstanceId::PackInstanceId((int)v130, (int)v22, v23) + 56);
          v19 = (PackInstance *)((char *)v19 + 120);
        while ( (PackInstance *)HIDWORD(v20) != v19 );
      v24 = Level::getLevelData(*((Level **)v4 + 7));
      v25 = LevelData::isTexturepacksRequired((LevelData *)v24);
      v119 = 2;
      v120 = 1;
      v121 = 0;
      v118 = &off_26E938C;
      v124 = 0;
      v122 = 0;
      v123 = 0;
      v26 = v129;
      ptr = v26;
      v27 = v130;
      v126 = v27;
      v127 = v131;
      v128 = v25;
      v28 = *((_BYTE *)v3 + 12);
      (*(void (**)(void))(**((_DWORD **)v4 + 11) + 16))();
      v30 = v126;
      v29 = (PackInstanceId *)ptr;
      if ( ptr != (void *)v126 )
          v29 = (PackInstanceId *)((char *)PackInstanceId::~PackInstanceId(v29) + 56);
        while ( v30 != v29 );
        v29 = (PackInstanceId *)ptr;
      if ( v29 )
        operator delete((void *)v29);
      v32 = v123;
      v31 = (PackInstanceId *)v122;
      if ( v122 != (void *)v123 )
          v31 = (PackInstanceId *)((char *)PackInstanceId::~PackInstanceId(v31) + 56);
        while ( v32 != v31 );
        v31 = (PackInstanceId *)v122;
      if ( v31 )
        operator delete((void *)v31);
    case 4:
      v33 = NetworkIdentifier::getHash(a2);
      v34 = v33 % (unsigned int)(*((_QWORD *)v4 + 40) >> 32);
      v35 = *(signed int **)(*((_QWORD *)v4 + 40) + 4 * v34);
      if ( !v35 )
        goto LABEL_37;
      v36 = *v35;
      v37 = *(_DWORD *)(*v35 + 168);
      while ( 1 )
        if ( v37 == v33 && *((_DWORD *)v5 + 36) == *(_DWORD *)(v36 + 152) )
          v38 = NetworkIdentifier::equalsTypeData(v5, (const NetworkIdentifier *)(v36 + 8));
          if ( v38 )
            break;
        v39 = *(_DWORD *)v36;
        if ( *(_DWORD *)v36 )
          v37 = *(_DWORD *)(v39 + 168);
          v35 = (signed int *)v36;
          v36 = *(_DWORD *)v36;
          if ( *(_DWORD *)(v39 + 168) % *((_DWORD *)v4 + 81) == v34 )
            continue;
      v79 = v35 == 0;
      if ( v35 )
        v38 = *v35;
        v79 = *v35 == 0;
      if ( v79 )
LABEL_37:
        sub_21E94B4((void **)&v117, "disconnectionScreen.disconnected");
        ServerNetworkHandler::disconnectClient((int)v4, (int)v5, &v117, 0);
        v40 = (void *)(v117 - 12);
        if ( (int *)(v117 - 12) != &dword_28898C0 )
          v41 = (unsigned int *)(v117 - 4);
          if ( &pthread_create )
LABEL_144:
            v42 = (*v41)--;
LABEL_145:
          if ( v42 <= 0 )
            j_j_j_j__ZdlPv_9(v40);
      else
        j_j_j__ZN20ServerNetworkHandler21sendLoginMessageLocalERK17NetworkIdentifierRK17ConnectionRequest(
          v4,
          v5,
          *(const ConnectionRequest **)(v38 + 160));
    case 2:
      v102 = a2;
      v116 = 0;
      v112 = 0;
      v113 = 0;
      v114 = &v112;
      v115 = &v112;
      v43 = *((_DWORD *)a3 + 6);
      if ( v43 )
        v44 = std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_copy(
                (int)&v111,
                v43,
                (int)&v112);
        v45 = v44;
        v113 = v44;
          v46 = v45;
          v45 = (_DWORD *)v45[2];
        while ( v45 );
        v114 = v46;
          v47 = v44;
          v44 = (_DWORD *)v44[3];
        while ( v44 );
        v115 = v47;
        v116 = *((_DWORD *)v3 + 9);
      v48 = (*(int (**)(void))(**((_DWORD **)v4 + 7) + 116))();
      v49 = ResourcePackManager::getStack(v48, 1);
      std::vector<PackInstance,std::allocator<PackInstance>>::vector((int)&v109, (unsigned __int64 *)(v49 + 4));
      v50 = v110;
      v51 = v109;
      if ( v109 != v110 )
        v52 = (PackInstance *)&v107;
          if ( PackInstance::getPackCategory(v51) == 2 )
            v57 = 0;
            if ( PackInstance::getPackOrigin(v51) == 6 )
              v57 = 1;
          v79 = PackInstance::getPackCategory(v51) == 3;
          v58 = 0;
          if ( v79 )
            v58 = 1;
          if ( v58 | v57 )
            PackInstance::getPackId(v52, (int)v51);
            mce::UUID::asString((mce::UUID *)&s2);
            v59 = (int)v114;
            if ( v114 != &v112 )
            {
              v60 = s2;
              v61 = *((_DWORD *)s2 - 3);
              do
              {
                v62 = *(_DWORD **)(v59 + 16);
                if ( *(v62 - 3) == v61 && !memcmp(v62, v60, v61) )
                  break;
                v59 = sub_21D4820(v59);
              }
              while ( (int *)v59 != &v112 );
            }
            if ( (int *)v59 != &v112 )
              v63 = v52;
              v64 = v50;
              v65 = NetworkHandler::getResourcePackUploadManager(
                      *((_DWORD *)v4 + 8),
                      *((_DWORD *)v4 + 11),
                      v102,
                      (unsigned int)&s2);
              v66 = PackInstance::getResourceLocation(v51);
              v67 = PackInstance::isZipped(v51);
              ResourcePackFileUploadManager::uploadResourcePack(v65, (int *)&s2, v66, v67, v57);
              v68 = sub_21D4A24(v59, (int)&v112);
              v69 = (void *)v68;
              v70 = *(_DWORD *)(v68 + 16);
              v50 = v64;
              v71 = (void *)(v70 - 12);
              if ( (int *)(v70 - 12) != &dword_28898C0 )
                v55 = (unsigned int *)(v70 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v56 = __ldrex(v55);
                  while ( __strex(v56 - 1, v55) );
                }
                else
                  v56 = (*v55)--;
                if ( v56 <= 0 )
                  j_j_j_j__ZdlPv_9(v71);
              operator delete(v69);
              v52 = v63;
              --v116;
            v72 = (char *)s2 - 12;
            if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
              v53 = (unsigned int *)((char *)s2 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v54 = __ldrex(v53);
                while ( __strex(v54 - 1, v53) );
              else
                v54 = (*v53)--;
              if ( v54 <= 0 )
                j_j_j_j__ZdlPv_9(v72);
          v51 = (PackInstance *)((char *)v51 + 120);
        while ( v51 != v50 );
        v51 = v110;
        v73 = v109;
        if ( v109 != v110 )
          do
            v73 = (PackReport *)((char *)PackReport::~PackReport(v73) + 120);
          while ( v51 != v73 );
          v51 = v109;
      if ( v51 )
        operator delete((void *)v51);
      v74 = (*(int (**)(void))(**((_DWORD **)v4 + 7) + 116))();
      v75 = ResourcePackManager::getStack(v74, 0);
      std::vector<PackInstance,std::allocator<PackInstance>>::vector((int)&v105, (unsigned __int64 *)(v75 + 4));
      v76 = v106;
      v77 = v105;
      if ( v105 != v106 )
        v78 = (PackInstance *)&v103;
          if ( PackInstance::getPackCategory(v77) == 2 )
            v85 = 0;
            if ( PackInstance::getPackOrigin(v77) == 6 )
              v85 = 1;
          v79 = PackInstance::getPackCategory(v77) == 3;
          v86 = 0;
            v86 = 1;
          if ( v86 | v85 )
            PackInstance::getPackId(v78, (int)v77);
            mce::UUID::asString((mce::UUID *)&v104);
            v87 = (int)v114;
              v88 = v104;
              v89 = *((_DWORD *)v104 - 3);
                v90 = *(_DWORD **)(v87 + 16);
                if ( *(v90 - 3) == v89 && !memcmp(v90, v88, v89) )
                v87 = sub_21D4820(v87);
              while ( (int *)v87 != &v112 );
            if ( (int *)v87 != &v112 )
              v91 = v78;
              v92 = v76;
              v93 = NetworkHandler::getResourcePackUploadManager(
                      (unsigned int)&v104);
              v94 = PackInstance::getResourceLocation(v77);
              v95 = PackInstance::isZipped(v77);
              ResourcePackFileUploadManager::uploadResourcePack(v93, (int *)&v104, v94, v95, v85);
              v96 = sub_21D4A24(v87, (int)&v112);
              v97 = (void *)v96;
              v98 = *(_DWORD *)(v96 + 16);
              v76 = v92;
              v99 = (void *)(v98 - 12);
              if ( (int *)(v98 - 12) != &dword_28898C0 )
                v83 = (unsigned int *)(v98 - 4);
                    v84 = __ldrex(v83);
                  while ( __strex(v84 - 1, v83) );
                  v84 = (*v83)--;
                if ( v84 <= 0 )
                  j_j_j_j__ZdlPv_9(v99);
              operator delete(v97);
              v78 = v91;
            v100 = (char *)v104 - 12;
            if ( (int *)((char *)v104 - 12) != &dword_28898C0 )
              v81 = (unsigned int *)((char *)v104 - 4);
                  v82 = __ldrex(v81);
                while ( __strex(v82 - 1, v81) );
                v82 = (*v81)--;
              if ( v82 <= 0 )
                j_j_j_j__ZdlPv_9(v100);
          v77 = (PackInstance *)((char *)v77 + 120);
        while ( v77 != v76 );
        v77 = v106;
        v101 = v105;
        if ( v105 != v106 )
            v101 = (PackReport *)((char *)PackReport::~PackReport(v101) + 120);
          while ( v77 != v101 );
          v77 = v105;
      if ( v77 )
        operator delete((void *)v77);
      std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
        (int)&v111,
        (int)v113);
    default:
      return;
  }
}


char *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const SetDefaultGameTypePacket *a3)
{
  ServerNetworkHandler *v3; // r9@1
  const NetworkIdentifier *v4; // r6@1
  char *v5; // r10@1
  char *result; // r0@1
  int v7; // r4@1
  int v8; // r5@1
  int v9; // r7@2
  char *v10; // r0@10
  const SetDefaultGameTypePacket *v11; // [sp+0h] [bp-28h]@1

  v11 = a3;
  v3 = this;
  v4 = a2;
  v5 = (char *)*((_BYTE *)a3 + 12);
  result = Level::getUsers(*((Level **)this + 7));
  v7 = *(_QWORD *)result >> 32;
  v8 = *(_QWORD *)result;
  if ( v8 != v7 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)v8;
      result = (char *)*((_DWORD *)v4 + 36);
      if ( result == *(char **)(*(_DWORD *)v8 + 4536) )
      {
        result = (char *)NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v9 + 4392));
        if ( result == (char *)1 )
        {
          result = (char *)Player::getClientSubId((Player *)v9);
          if ( result == v5 )
            break;
        }
      }
      v8 += 4;
      if ( v7 == v8 )
        return result;
    }
    if ( v9 )
      if ( (unsigned int)Player::getPlayerPermissionLevel((Player *)v9) > 1
        || (result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v9 + 1412))(v9), result == (char *)1) )
        v10 = Level::getLevelData(*((Level **)v3 + 7));
        LevelData::setGameType((int)v10, *((_DWORD *)v11 + 4));
        result = (char *)(*(int (**)(void))(**((_DWORD **)v3 + 11) + 20))();
  }
  return result;
}


void __fastcall ServerNetworkHandler::_onSubClientAuthenticated(ServerNetworkHandler *this, const NetworkIdentifier *a2, const Certificate *a3, const SubClientLoginPacket *a4)
{
  ServerNetworkHandler *v4; // r5@1
  const Certificate *v5; // r7@1
  const NetworkIdentifier *v6; // r8@1
  const SubClientLoginPacket *v7; // r9@1
  unsigned __int64 *v8; // r4@3
  signed int v9; // r7@3
  void *v10; // r0@3
  int v11; // r7@5
  void *v12; // r0@6
  int v13; // r3@7
  unsigned int *v14; // r2@9
  signed int v15; // r1@11
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  void **v18; // [sp+8h] [bp-68h]@7
  int v19; // [sp+Ch] [bp-64h]@7
  int v20; // [sp+10h] [bp-60h]@7
  char v21; // [sp+14h] [bp-5Ch]@7
  int v22; // [sp+18h] [bp-58h]@7
  int v23; // [sp+20h] [bp-50h]@6
  int v24; // [sp+24h] [bp-4Ch]@3
  char v25; // [sp+28h] [bp-48h]@3
  unsigned int v26; // [sp+38h] [bp-38h]@1
  unsigned int v27; // [sp+3Ch] [bp-34h]@1
  __int64 v28; // [sp+40h] [bp-30h]@1
  int v29; // [sp+44h] [bp-2Ch]@1

  v4 = this;
  v5 = a3;
  v6 = a2;
  v7 = a4;
  ExtendedCertificate::getIdentity((ExtendedCertificate *)&v26, a3);
  if ( ServerNetworkHandler::_getActiveAndInProgressPlayerCount((int)v4, v29, v26, v27, v28) < *((_DWORD *)v4 + 79) )
    goto LABEL_26;
  if ( *((_BYTE *)v4 + 52) )
  {
    v8 = (unsigned __int64 *)*((_DWORD *)v4 + 14);
    ExtendedCertificate::getIdentity((ExtendedCertificate *)&v25, v5);
    ExtendedCertificate::getXuid((ExtendedCertificate *)&v24, v5);
    v9 = Whitelist::isIgnoringPlayerLimit(v8, (int)&v25, (const void **)&v24);
    v10 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
    {
      v16 = (unsigned int *)(v24 - 4);
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
        j_j_j_j__ZdlPv_9(v10);
    }
    if ( v9 )
LABEL_26:
      v11 = Level::getPlayer(*((Level **)v4 + 7), (const mce::UUID *)&v26);
      if ( v11 )
        sub_21E94B4((void **)&v23, "disconnectionScreen.loggedinOtherLocation");
        ServerNetworkHandler::disconnectClient((int)v4, v11 + 4392, &v23, 0);
        v12 = (void *)(v23 - 12);
        if ( (int *)(v23 - 12) != &dword_28898C0 )
        {
          v14 = (unsigned int *)(v23 - 4);
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
            j_j_j_j__ZdlPv_9(v12);
        }
      v19 = 2;
      v20 = 1;
      v21 = 0;
      v18 = &off_26E9314;
      v22 = 0;
      v13 = *((_BYTE *)v7 + 12);
      (*(void (**)(void))(**((_DWORD **)v4 + 11) + 16))();
      ServerNetworkHandler::sendSubClientLoginMessageLocal(
        v4,
        v6,
        *((const SubClientConnectionRequest **)v7 + 4),
        *((_BYTE *)v7 + 12));
  }
}


char *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const SetPlayerGameTypePacket *a3)
{
  const SetPlayerGameTypePacket *v3; // r8@1
  const NetworkIdentifier *v4; // r5@1
  char *v5; // r9@1
  char *result; // r0@1
  int v7; // r4@1
  int v8; // r7@1
  int v9; // r6@2

  v3 = a3;
  v4 = a2;
  v5 = (char *)*((_BYTE *)a3 + 12);
  result = Level::getUsers(*((Level **)this + 7));
  v8 = *(_QWORD *)result >> 32;
  v7 = *(_QWORD *)result;
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)v7;
      result = (char *)*((_DWORD *)v4 + 36);
      if ( result == *(char **)(*(_DWORD *)v7 + 4536) )
      {
        result = (char *)NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v9 + 4392));
        if ( result == (char *)1 )
        {
          result = (char *)Player::getClientSubId((Player *)v9);
          if ( result == v5 )
            break;
        }
      }
      v7 += 4;
      if ( v8 == v7 )
        return result;
    }
    if ( v9 )
      result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v9 + 604))(v9);
      if ( result )
        result = (char *)(*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v9 + 1432))(v9, *((_DWORD *)v3 + 4));
  }
  return result;
}


int __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const DisconnectPacket *a3)
{
  unsigned __int8 v4; // [sp+7h] [bp-9h]@1

  v4 = *((_BYTE *)a3 + 12);
  return ServerNetworkHandler::onSubclientLogoff(this, a2, &v4);
}


void __fastcall ServerNetworkHandler::onXboxUserUnblocked(int a1, int *a2)
{
  ServerNetworkHandler::onXboxUserUnblocked(a1, a2);
}


char *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const LevelSoundEventPacket *a3)
{
  const LevelSoundEventPacket *v3; // r8@1
  const NetworkIdentifier *v4; // r5@1
  char *v5; // r9@1
  char *result; // r0@1
  int v7; // r4@1
  int v8; // r7@1
  int v9; // r6@2
  Level *v10; // r5@8
  int v11; // r1@8
  __int64 v12; // kr08_8@8
  int v13; // r6@8
  unsigned int v14; // r7@8

  v3 = a3;
  v4 = a2;
  v5 = (char *)*((_BYTE *)a3 + 12);
  result = Level::getUsers(*((Level **)this + 7));
  v8 = *(_QWORD *)result >> 32;
  v7 = *(_QWORD *)result;
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)v7;
      result = (char *)*((_DWORD *)v4 + 36);
      if ( result == *(char **)(*(_DWORD *)v7 + 4536) )
      {
        result = (char *)NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v9 + 4392));
        if ( result == (char *)1 )
        {
          result = (char *)Player::getClientSubId((Player *)v9);
          if ( result == v5 )
            break;
        }
      }
      v7 += 4;
      if ( v8 == v7 )
        return result;
    }
    if ( v9 )
      v10 = (Level *)Entity::getLevel((Entity *)v9);
      v11 = Entity::getRegion((Entity *)v9);
      v12 = *(_QWORD *)((char *)v3 + 28);
      v13 = 0;
      v14 = *((_WORD *)v3 + 18);
      if ( v14 > 0xFF )
        v13 = 1;
      v14 = (unsigned __int8)v14;
      if ( (_BYTE)v14 )
        v14 = 1;
      result = (char *)Level::broadcastSoundEvent(
                         v10,
                         v11,
                         *((_BYTE *)v3 + 13),
                         (int)v3 + 16,
                         v12,
                         SHIDWORD(v12),
                         v14,
                         v13);
  }
  return result;
}


void __fastcall ServerNetworkHandler::~ServerNetworkHandler(ServerNetworkHandler *this)
{
  ServerNetworkHandler *v1; // r0@1

  v1 = ServerNetworkHandler::~ServerNetworkHandler(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall ServerNetworkHandler::addToBlacklist(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r3@1
  int v6; // r5@1
  void *v7; // r0@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+0h] [bp-30h]@1
  int v11; // [sp+4h] [bp-2Ch]@1
  int v12; // [sp+8h] [bp-28h]@1
  int v13; // [sp+Ch] [bp-24h]@1
  int v14; // [sp+10h] [bp-20h]@1

  v3 = a1;
  v4 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = *(_DWORD *)(a2 + 8);
  v13 = *(_DWORD *)(a2 + 12);
  v10 = v4;
  v11 = v5;
  v12 = v6;
  sub_21E8AF4(&v14, a3);
  Blacklist::addEntry(v3 + 64, (int)&v10);
  v7 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
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
      j_j_j_j__ZdlPv_9(v7);
  }
}


char *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const AdventureSettingsPacket *a3)
{
  const AdventureSettingsPacket *v3; // r11@1
  ServerNetworkHandler *v4; // r5@1
  const NetworkIdentifier *v5; // r7@1
  signed int v6; // r0@1
  char *v7; // r0@4
  char *v8; // r4@7
  char *result; // r0@7
  int v10; // r5@7
  int v11; // r8@7
  int v12; // r6@8
  bool v13; // zf@13
  int v14; // r6@16
  int v15; // r1@17
  ServerNetworkHandler *v16; // r8@17
  signed int v17; // r10@17
  int v18; // r0@18
  unsigned int v19; // r11@20
  int v20; // r9@20
  signed int v21; // r5@20
  unsigned int v22; // r7@20
  __int64 v23; // r2@32
  __int64 v24; // r2@32
  int v25; // r6@32
  int v26; // r4@32
  int v27; // r5@32
  int v28; // r4@32
  int v29; // r5@32
  const AdventureSettingsPacket *v30; // [sp+0h] [bp-68h]@17
  signed int v31; // [sp+4h] [bp-64h]@2
  ServerNetworkHandler *v32; // [sp+8h] [bp-60h]@7
  char *v33; // [sp+Ch] [bp-5Ch]@2
  void **v34; // [sp+10h] [bp-58h]@32
  __int64 v35; // [sp+14h] [bp-54h]@32
  char v36; // [sp+1Ch] [bp-4Ch]@32
  __int64 v37; // [sp+20h] [bp-48h]@32
  int v38; // [sp+28h] [bp-40h]@32
  int v39; // [sp+2Ch] [bp-3Ch]@32
  int v40; // [sp+30h] [bp-38h]@32
  int v41; // [sp+34h] [bp-34h]@32
  int v42; // [sp+38h] [bp-30h]@32
  int v43; // [sp+3Ch] [bp-2Ch]@32
  unsigned __int8 v44; // [sp+43h] [bp-25h]@16

  v3 = a3;
  v4 = this;
  v5 = a2;
  v6 = Level::getPlayer(*((_DWORD *)this + 7), (int)a2, *((_QWORD *)a3 + 4), *((_QWORD *)a3 + 4) >> 32);
  if ( v6 )
  {
    v33 = (char *)(v6 + 4320);
    v31 = v6;
  }
  else
    if ( *((_BYTE *)v3 + 25) & 1 )
    {
      v31 = 0;
      v7 = Level::getDefaultAbilities(*((Level **)v4 + 7));
    }
    else
      v7 = 0;
    v33 = v7;
  v8 = (char *)*((_BYTE *)v3 + 12);
  v32 = v4;
  result = Level::getUsers(*((Level **)v4 + 7));
  v11 = *(_QWORD *)result >> 32;
  v10 = *(_QWORD *)result;
  if ( v10 != v11 )
    while ( 1 )
      v12 = *(_DWORD *)v10;
      result = (char *)*((_DWORD *)v5 + 36);
      if ( result == *(char **)(*(_DWORD *)v10 + 4536) )
      {
        result = (char *)NetworkIdentifier::equalsTypeData(v5, (const NetworkIdentifier *)(v12 + 4392));
        if ( result == (char *)1 )
        {
          result = (char *)Player::getClientSubId((Player *)v12);
          if ( result == v8 )
            break;
        }
      }
      v10 += 4;
      if ( v11 == v10 )
        return result;
    result = v33;
    v13 = v33 == 0;
    if ( v33 )
      v13 = v12 == 0;
    if ( !v13 )
      v14 = (int)v3 + 16;
      Abilities::setAbility((int)v33, (int **)&Abilities::FLYING, (*((_DWORD *)v3 + 4) & 0x200u) >> 9);
      v44 = 0;
      Abilities::setAbilityDiff((int)v33, &Abilities::BUILD_AND_MINE, *((_DWORD *)v3 + 6) & 1, &v44);
      Abilities::setAbilityDiff((int)v33, &Abilities::DOORS_AND_SWITCHES, (*((_DWORD *)v3 + 6) & 2u) >> 1, &v44);
      Abilities::setAbilityDiff((int)v33, &Abilities::OPEN_CONTAINERS, (*((_DWORD *)v3 + 6) & 4u) >> 2, &v44);
      Abilities::setAbilityDiff((int)v33, &Abilities::ATTACK_PLAYERS, (*((_DWORD *)v3 + 6) & 8u) >> 3, &v44);
      Abilities::setAbilityDiff((int)v33, &Abilities::ATTACK_MOBS, (*((_DWORD *)v3 + 6) & 0x10u) >> 4, &v44);
      Abilities::setAbilityDiff((int)v33, &Abilities::OPERATOR, (*((_DWORD *)v3 + 6) & 0x20u) >> 5, &v44);
      Abilities::setAbilityDiff((int)v33, &Abilities::TELEPORT, (*((_DWORD *)v3 + 6) & 0x80u) >> 7, &v44);
      if ( v44 )
        v15 = *((_BYTE *)v3 + 28);
        v30 = v3;
        v16 = v32;
        v17 = v31;
      else
        v15 = Abilities::getPlayerPermissions((Abilities *)v33);
        v18 = *((_BYTE *)v3 + 28);
        if ( v15 != v18 )
          v44 = 1;
          v15 = v18;
      Abilities::setPlayerPermissions((PermissionsHandler **)v33, v15);
      v19 = *(_BYTE *)(*((_DWORD *)v16 + 61) + 8);
      v20 = Abilities::getCommandPermissions((Abilities *)v33);
      v21 = 0;
      LOBYTE(v22) = 0;
      if ( Abilities::getBool((int)v33, &Abilities::OPERATOR) != 1 )
        goto LABEL_28;
      if ( v17 )
        v22 = v20;
        if ( *(_QWORD *)(v17 + 4560) != *((_QWORD *)v16 + 35) )
          goto LABEL_26;
        if ( *(_QWORD *)(v17 + 4568) == *((_QWORD *)v16 + 36) )
          v20 = 3;
      v22 = v20;
LABEL_26:
      if ( v22 < v19 )
        LOBYTE(v22) = v19;
LABEL_28:
      Abilities::setCommandPermissions((_BYTE **)v33, v22);
      result = (char *)v44;
      if ( !v17 )
        v21 = 1;
        if ( !v21 )
          v23 = *(_QWORD *)((char *)v30 + 4);
          v36 = *((_BYTE *)v30 + 12);
          v35 = v23;
          v34 = &off_26D80B0;
          v24 = *(_QWORD *)v14;
          v26 = *(_DWORD *)(v14 + 8);
          v27 = *(_DWORD *)(v14 + 12);
          v25 = v14 + 16;
          v37 = v24;
          v38 = v26;
          v39 = v27;
          HIDWORD(v24) = *(_DWORD *)(v25 + 4);
          v28 = *(_DWORD *)(v25 + 8);
          v29 = *(_DWORD *)(v25 + 12);
          v40 = *(_DWORD *)v25;
          v41 = HIDWORD(v24);
          v42 = v28;
          v43 = v29;
          BYTE4(v37) = v22;
          result = (char *)(*(int (**)(void))(**((_DWORD **)v16 + 11) + 20))();
      return result;
  return result;
}


char *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const ContainerClosePacket *a3)
{
  const NetworkIdentifier *v3; // r4@1
  char *v4; // r8@1
  char *result; // r0@1
  int v6; // r6@1
  int v7; // r7@1
  int v8; // r5@2

  v3 = a2;
  v4 = (char *)*((_BYTE *)a3 + 12);
  result = Level::getUsers(*((Level **)this + 7));
  v6 = *(_QWORD *)result >> 32;
  v7 = *(_QWORD *)result;
  if ( v7 != v6 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)v7;
      result = (char *)*((_DWORD *)v3 + 36);
      if ( result == *(char **)(*(_DWORD *)v7 + 4536) )
      {
        result = (char *)NetworkIdentifier::equalsTypeData(v3, (const NetworkIdentifier *)(v8 + 4392));
        if ( result == (char *)1 )
        {
          result = (char *)Player::getClientSubId((Player *)v8);
          if ( result == v4 )
            break;
        }
      }
      v7 += 4;
      if ( v6 == v7 )
        return result;
    }
    if ( v8 )
      result = (char *)j_j_j__ZN12ServerPlayer24doDeleteContainerManagerEv((ServerPlayer *)v8);
  }
  return result;
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const ResourcePackClientResponsePacket *a3)
{
  ServerNetworkHandler::handle(this, a2, a3);
}


void __fastcall ServerNetworkHandler::_sendAdditionalLevelData(ServerNetworkHandler *this, ServerPlayer *a2, const NetworkIdentifier *a3)
{
  ServerNetworkHandler::_sendAdditionalLevelData(this, a2, a3);
}


int __fastcall ServerNetworkHandler::_getActiveAndInProgressPlayerCount(int a1, int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  int v5; // r5@1
  unsigned int v6; // r6@1
  int v7; // r8@1
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  const Certificate *v10; // r4@12
  int v11; // r11@12
  bool v12; // zf@13
  unsigned int v13; // r7@17
  unsigned __int64 *v14; // r6@17
  signed int v15; // r4@17
  void *v16; // r0@17
  int v18; // [sp+18h] [bp-50h]@1
  int v19; // [sp+1Ch] [bp-4Ch]@2
  int v20; // [sp+20h] [bp-48h]@2
  unsigned int v21; // [sp+28h] [bp-40h]@1
  int v22; // [sp+2Ch] [bp-3Ch]@4
  __int64 v23; // [sp+30h] [bp-38h]@12
  __int64 v24; // [sp+38h] [bp-30h]@14

  v5 = a1;
  v6 = a3;
  v7 = *(_DWORD *)(a1 + 328);
  v21 = a4;
  v18 = a1;
  if ( v7 )
  {
    v19 = 0;
    v20 = 0;
    do
    {
      v10 = (const Certificate *)ConnectionRequest::getCertificate(*(ConnectionRequest **)(v7 + 160));
      ExtendedCertificate::getIdentity((ExtendedCertificate *)&v23, v10);
      v11 = Level::getPlayer(*(Level **)(v5 + 28), (const mce::UUID *)&v23);
      if ( (mce::UUID::EMPTY ^ v6 | *(&mce::UUID::EMPTY + 1) ^ v21 | HIDWORD(a5) ^ HIDWORD(qword_287E930) | (unsigned int)qword_287E930 ^ (unsigned int)a5) == 0 )
        goto LABEL_26;
      v12 = v23 == __PAIR__(v21, v6);
      if ( v23 == __PAIR__(v21, v6) )
        v12 = v24 == a5;
      if ( !v12 )
      {
LABEL_26:
        if ( !*(_BYTE *)(v5 + 52) )
          goto LABEL_27;
        v13 = v6;
        v14 = *(unsigned __int64 **)(v5 + 56);
        ExtendedCertificate::getXuid((ExtendedCertificate *)&v22, v10);
        v15 = Whitelist::isIgnoringPlayerLimit(v14, (int)&v23, (const void **)&v22);
        v6 = v13;
        v16 = (void *)(v22 - 12);
        if ( (int *)(v22 - 12) != &dword_28898C0 )
        {
          v8 = (unsigned int *)(v22 - 4);
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
            j_j_j_j__ZdlPv_9(v16);
        }
        v5 = v18;
        if ( !v15 )
LABEL_27:
          if ( v11 )
            ++v20;
            ++v19;
      }
      v7 = *(_DWORD *)v7;
    }
    while ( v7 );
  }
  else
  return v19 + v20;
}


ServerNetworkHandler *__fastcall ServerNetworkHandler::~ServerNetworkHandler(ServerNetworkHandler *this)
{
  ServerNetworkHandler *v1; // r11@1
  char *v2; // r10@1
  char *v3; // r0@1
  int v4; // r5@4
  ConnectionRequest *v5; // r0@5
  int v6; // r4@5
  ConnectionRequest *v7; // r0@6
  char *v8; // r0@8
  void *v9; // r5@11 OVERLAPPED
  void *v10; // r6@11 OVERLAPPED
  unsigned int *v11; // r2@13
  signed int v12; // r1@15
  int *v13; // r0@21
  int v14; // r1@26
  void *v15; // r0@26
  int v16; // r1@27
  void *v17; // r0@27
  int v18; // r1@28
  void *v19; // r0@28
  int v20; // r1@29
  void *v21; // r0@29
  int v22; // r0@30
  int v23; // r5@32 OVERLAPPED
  int v24; // r6@32 OVERLAPPED
  unsigned int *v25; // r2@34
  signed int v26; // r1@36
  int v27; // r1@42
  void *v28; // r0@42
  int v29; // r0@47
  int v30; // r1@48
  int v31; // r7@48
  char *v32; // r2@49
  int v33; // r3@50
  int v34; // r6@51
  bool v35; // zf@52
  char **v36; // r3@52
  char *v37; // r5@55
  bool v38; // zf@55
  int v39; // r3@60
  unsigned int *v40; // r2@65
  signed int v41; // r1@67
  unsigned int *v42; // r2@69
  signed int v43; // r1@71
  unsigned int *v44; // r2@73
  signed int v45; // r1@75
  unsigned int *v46; // r2@77
  signed int v47; // r1@79
  char *v48; // r7@89
  int v49; // r0@91
  int v50; // r1@92
  int v51; // r7@92
  char *v52; // r2@93
  int v53; // r3@94
  int v54; // r6@95
  bool v55; // zf@96
  char **v56; // r3@96
  char *v57; // r5@99
  bool v58; // zf@99
  int v59; // r3@104
  char *v60; // r7@117
  char *v62; // [sp+8h] [bp-58h]@1

  v1 = this;
  *(_DWORD *)this = &off_26EA280;
  *((_DWORD *)this + 1) = &off_26EA474;
  *((_DWORD *)this + 2) = &off_26EA4F0;
  *((_DWORD *)this + 4) = &off_26EA508;
  v2 = (char *)this + 16;
  v62 = (char *)this + 8;
  Level::removeListener(*((Level **)this + 7), (ServerNetworkHandler *)((char *)this + 4));
  std::_Hashtable<PackIdVersion,std::pair<PackIdVersion const,std::string>,std::allocator<std::pair<PackIdVersion const,std::string>>,std::__detail::_Select1st,std::equal_to<PackIdVersion>,std::hash<PackIdVersion>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)v1 + 352);
  v3 = (char *)*((_DWORD *)v1 + 88);
  if ( v3 && (char *)v1 + 376 != v3 )
    operator delete(v3);
  v4 = *((_DWORD *)v1 + 82);
  if ( v4 )
  {
    do
    {
      v5 = *(ConnectionRequest **)(v4 + 160);
      v6 = *(_DWORD *)v4;
      if ( v5 )
      {
        v7 = ConnectionRequest::~ConnectionRequest(v5);
        operator delete((void *)v7);
      }
      operator delete((void *)v4);
      v4 = v6;
    }
    while ( v6 );
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 40), 4 * (*((_QWORD *)v1 + 40) >> 32));
  *((_DWORD *)v1 + 82) = 0;
  *((_DWORD *)v1 + 83) = 0;
  v8 = (char *)*((_DWORD *)v1 + 80);
  if ( v8 && (char *)v1 + 344 != v8 )
    operator delete(v8);
  *(_QWORD *)&v9 = *((_QWORD *)v1 + 38);
  if ( v9 != v10 )
      v13 = (int *)(*(_DWORD *)v9 - 12);
      if ( v13 != &dword_28898C0 )
        v11 = (unsigned int *)(*(_DWORD *)v9 - 4);
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
          j_j_j_j__ZdlPv_9(v13);
      v9 = (char *)v9 + 4;
    while ( v9 != v10 );
    v9 = (void *)*((_DWORD *)v1 + 76);
  if ( v9 )
    operator delete(v9);
  v14 = *((_DWORD *)v1 + 75);
  v15 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
    else
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = *((_DWORD *)v1 + 74);
  v17 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v16 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = *((_DWORD *)v1 + 66);
  v19 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v18 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = *((_DWORD *)v1 + 65);
  v21 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v20 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = *((_DWORD *)v1 + 64);
  if ( v22 )
    (*(void (**)(void))(*(_DWORD *)v22 + 8))();
  *((_DWORD *)v1 + 64) = 0;
  *(_QWORD *)&v23 = *((_QWORD *)v1 + 8);
  if ( v23 != v24 )
      v27 = *(_DWORD *)(v23 + 16);
      v28 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
        v25 = (unsigned int *)(v27 - 4);
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
      v23 += 24;
    while ( v23 != v24 );
    v23 = *((_DWORD *)v1 + 16);
  if ( v23 )
    operator delete((void *)v23);
  *((_DWORD *)v1 + 4) = &off_26EA538;
  v29 = *((_DWORD *)v1 + 5);
  if ( v29 )
    v30 = *(_QWORD *)(v29 + 4) >> 32;
    v31 = *(_QWORD *)(v29 + 4);
    if ( v31 != v30 )
      v32 = *(char **)(v30 - 4);
      if ( v32 != v2 )
        v33 = (v30 - v31) >> 4;
        if ( v33 >= 1 )
          v34 = v33 + 1;
          {
            v35 = *(_DWORD *)v31 == (_DWORD)v2;
            v36 = (char **)v31;
            if ( *(char **)v31 != v2 )
            {
              v36 = (char **)(v31 + 4);
              v35 = *(_DWORD *)(v31 + 4) == (_DWORD)v2;
            }
            if ( v35 )
              goto LABEL_89;
            v36 = (char **)(v31 + 8);
            v37 = *(char **)(v31 + 8);
            v38 = v37 == v2;
            if ( v37 != v2 )
              v36 = (char **)(v31 + 12);
              v38 = *(_DWORD *)(v31 + 12) == (_DWORD)v2;
            if ( v38 )
            --v34;
            v31 += 16;
          }
          while ( v34 > 1 );
        if ( 1 == (v30 - v31) >> 2 )
          v36 = (char **)v31;
LABEL_85:
          if ( *v36 != v2 )
            v36 = (char **)(*(_QWORD *)(v29 + 4) >> 32);
          goto LABEL_89;
        v39 = (v30 - v31) >> 2;
        if ( v39 == 2 )
          if ( v39 != 3 )
            goto LABEL_89;
          if ( *(char **)v31 == v2 )
LABEL_89:
            v48 = *v36;
            *v36 = v32;
            *(_DWORD *)(v30 - 4) = v48;
            *(_DWORD *)(v29 + 8) -= 4;
            goto LABEL_90;
          v36 = (char **)(v31 + 4);
        if ( *v36 != v2 )
          ++v36;
          goto LABEL_85;
        goto LABEL_89;
      *(_DWORD *)(v29 + 8) = v30 - 4;
LABEL_90:
    *((_DWORD *)v1 + 5) = 0;
  *((_DWORD *)v1 + 2) = &off_26EA524;
  v49 = *((_DWORD *)v1 + 3);
  if ( v49 )
    v50 = *(_QWORD *)(v49 + 4) >> 32;
    v51 = *(_QWORD *)(v49 + 4);
    if ( v51 != v50 )
      v52 = *(char **)(v50 - 4);
      if ( v52 != v62 )
        v53 = (v50 - v51) >> 4;
        if ( v53 >= 1 )
          v54 = v53 + 1;
            v55 = *(_DWORD *)v51 == (_DWORD)v62;
            v56 = (char **)v51;
            if ( *(char **)v51 != v62 )
              v56 = (char **)(v51 + 4);
              v55 = *(_DWORD *)(v51 + 4) == (_DWORD)v62;
            if ( v55 )
              goto LABEL_117;
            v56 = (char **)(v51 + 8);
            v57 = *(char **)(v51 + 8);
            v58 = v57 == v62;
            if ( v57 != v62 )
              v56 = (char **)(v51 + 12);
              v58 = *(_DWORD *)(v51 + 12) == (_DWORD)v62;
            if ( v58 )
            --v54;
            v51 += 16;
          while ( v54 > 1 );
        if ( 1 == (v50 - v51) >> 2 )
          v56 = (char **)v51;
LABEL_113:
          if ( *v56 != v62 )
            v56 = (char **)(*(_QWORD *)(v49 + 4) >> 32);
          goto LABEL_117;
        v59 = (v50 - v51) >> 2;
        if ( v59 == 2 )
          if ( v59 != 3 )
            goto LABEL_117;
          if ( *(char **)v51 == v62 )
LABEL_117:
            v60 = *v56;
            *v56 = v52;
            *(_DWORD *)(v50 - 4) = v60;
            *(_DWORD *)(v49 + 8) -= 4;
            goto LABEL_118;
          v56 = (char **)(v51 + 4);
        if ( *v56 != v62 )
          ++v56;
          goto LABEL_113;
        goto LABEL_117;
      *(_DWORD *)(v49 + 8) = v50 - 4;
LABEL_118:
    *((_DWORD *)v1 + 3) = 0;
  return v1;
}


void __fastcall ServerNetworkHandler::sendLoginMessageLocal(ServerNetworkHandler *this, const NetworkIdentifier *a2, const ConnectionRequest *a3)
{
  ServerNetworkHandler::sendLoginMessageLocal(this, a2, a3);
}


char *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const StructureBlockUpdatePacket *a3)
{
  const StructureBlockUpdatePacket *v3; // r8@1
  const NetworkIdentifier *v4; // r5@1
  char *v5; // r9@1
  char *result; // r0@1
  int v7; // r4@1
  int v8; // r7@1
  int v9; // r6@2
  BlockSource *v10; // r0@8
  BlockSource *v11; // r5@8
  BlockEntity *v12; // r7@8

  v3 = a3;
  v4 = a2;
  v5 = (char *)*((_BYTE *)a3 + 12);
  result = Level::getUsers(*((Level **)this + 7));
  v8 = *(_QWORD *)result >> 32;
  v7 = *(_QWORD *)result;
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)v7;
      result = (char *)*((_DWORD *)v4 + 36);
      if ( result == *(char **)(*(_DWORD *)v7 + 4536) )
      {
        result = (char *)NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v9 + 4392));
        if ( result == (char *)1 )
        {
          result = (char *)Player::getClientSubId((Player *)v9);
          if ( result == v5 )
            break;
        }
      }
      v7 += 4;
      if ( v8 == v7 )
        return result;
    }
    if ( v9 )
      v10 = (BlockSource *)Entity::getRegion((Entity *)v9);
      v11 = v10;
      result = (char *)BlockSource::getBlockEntity(v10, (const StructureBlockUpdatePacket *)((char *)v3 + 16));
      v12 = (BlockEntity *)result;
      if ( result )
        result = (char *)BlockEntity::isType((int)result, 32);
          StructureBlockEntity::changeStructureType(v12, *((_DWORD *)v3 + 7));
          StructureBlockEntity::setStructureData(v12, (const StructureBlockUpdatePacket *)((char *)v3 + 32));
          StructureBlockEntity::setShowBoundingBox(v12, *((_BYTE *)v3 + 128));
          result = (char *)*((_BYTE *)v3 + 129);
          if ( *((_BYTE *)v3 + 129) )
          {
            StructureBlockEntity::setPowered(v12, v11, (const StructureBlockUpdatePacket *)((char *)v3 + 16), 1);
            result = (char *)j_j_j__ZN20StructureBlockEntity10setPoweredER11BlockSourceRK8BlockPosb(
                               v12,
                               v11,
                               (const StructureBlockUpdatePacket *)((char *)v3 + 16),
                               0);
          }
  }
  return result;
}


void __fastcall ServerNetworkHandler::_onPlayerLeft(ServerNetworkHandler *this, ServerPlayer *a2)
{
  ServerNetworkHandler::_onPlayerLeft(this, a2);
}


void __fastcall ServerNetworkHandler::onXboxUserBlocked(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r11@1
  void *v4; // r0@1
  Player **v5; // r6@2
  __int64 v6; // kr00_8@2
  unsigned int *v7; // r1@6
  signed int v8; // r0@8
  const Certificate *v9; // r0@13
  char *v10; // r4@13
  size_t v11; // r2@13
  char *v12; // r7@13
  signed int v13; // r9@14
  Player *v14; // r4@20
  void *v15; // r0@20
  unsigned int *v16; // r2@22
  signed int v17; // r1@24
  unsigned int *v18; // r2@30
  signed int v19; // r1@32
  int v20; // [sp+10h] [bp-48h]@20
  void *s1; // [sp+14h] [bp-44h]@13
  int v22; // [sp+18h] [bp-40h]@1
  int v23; // [sp+1Ch] [bp-3Ch]@1
  int v24; // [sp+20h] [bp-38h]@1
  int v25; // [sp+24h] [bp-34h]@1
  int v26; // [sp+28h] [bp-30h]@1

  v2 = a1;
  v24 = 0;
  v25 = 0;
  v22 = 0;
  v23 = 0;
  v3 = a2;
  sub_21E8AF4(&v26, a2);
  Blacklist::addEntry(v2 + 64, (int)&v22);
  v4 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v26 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  v6 = *(_QWORD *)Level::getUsers(*(Level **)(v2 + 28));
  v5 = (Player **)v6;
  if ( (_DWORD)v6 != HIDWORD(v6) )
    while ( 1 )
      v9 = (const Certificate *)Player::getCertificate(*v5);
      ExtendedCertificate::getXuid((ExtendedCertificate *)&s1, v9);
      v10 = (char *)s1;
      v12 = (char *)s1 - 12;
      v11 = *((_DWORD *)s1 - 3);
      if ( v11 == *(_DWORD *)(*v3 - 12) )
      {
        v13 = 0;
        if ( !memcmp(s1, (const void *)*v3, v11) )
          v13 = 1;
      }
      else
      if ( (int *)v12 != &dword_28898C0 )
        v7 = (unsigned int *)(v10 - 4);
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
          j_j_j_j__ZdlPv_9(v12);
      if ( v13 == 1 )
        break;
      ++v5;
      if ( v5 == (Player **)HIDWORD(v6) )
        return;
    v14 = *v5;
    sub_21E94B4((void **)&v20, "disconnectionScreen.notAllowed");
    ServerNetworkHandler::disconnectClient(v2, (int)v14 + 4392, &v20, 0);
    v15 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v20 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const TextPacket *a3)
{
  const TextPacket *v3; // r9@1
  const NetworkIdentifier *v4; // r6@1
  int v5; // r10@1
  int v6; // r3@1
  int v7; // r5@1
  __int64 v8; // kr00_8@1
  int v9; // r7@2
  _BYTE *v10; // r0@7
  int v11; // r0@9
  int v12; // r0@12
  int v13; // r2@12
  ServerNetworkHandler *v14; // [sp+10h] [bp-60h]@1
  char v15; // [sp+14h] [bp-5Ch]@9
  unsigned __int64 v16; // [sp+40h] [bp-30h]@9
  int v17; // [sp+48h] [bp-28h]@9

  v14 = this;
  v3 = a3;
  v4 = a2;
  v5 = *((_BYTE *)a3 + 12);
  v8 = *(_QWORD *)Level::getUsers(*((Level **)this + 7));
  v7 = v8;
  if ( (_DWORD)v8 == HIDWORD(v8) )
    goto LABEL_6;
  while ( 1 )
  {
    v9 = *(_DWORD *)v7;
    if ( *((_DWORD *)v4 + 36) == *(_DWORD *)(*(_DWORD *)v7 + 4536)
      && NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v9 + 4392)) == 1
      && Player::getClientSubId((Player *)v9) == v5 )
    {
      break;
    }
    v7 += 4;
    if ( HIDWORD(v8) == v7 )
      goto LABEL_6;
  }
  if ( !v9
    || (v12 = (*(int (**)(void))(**((_DWORD **)v14 + 62) + 48))(),
        v13 = *((_BYTE *)v3 + 13),
        ((*(int (**)(void))(*(_DWORD *)v12 + 8))() | 2) != 3) )
LABEL_6:
    if ( *((_BYTE *)v3 + 13) == 1 )
      v10 = (_BYTE *)*((_DWORD *)v3 + 5);
      if ( !*((_DWORD *)v10 - 3) )
        sub_21E5B04("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)", 0, 0, v6);
      if ( *v10 != 47 )
      {
        v16 = 0LL;
        v17 = 0;
        TextPacket::TextPacket((int)&v15, 1, (int *)v3 + 4, (int *)v3 + 5, &v16, 0, (int *)v3 + 10);
        (*(void (**)(void))(**((_DWORD **)v14 + 11) + 8))();
        TextPacket::~TextPacket((TextPacket *)&v15);
        v11 = Level::getEventing(*((Level **)v14 + 7));
        MinecraftEventing::fireEventPlayerMessageChat(v11, (const char **)v3 + 4, (const char **)v3 + 5);
      }
}


int __fastcall ServerNetworkHandler::ServerNetworkHandler(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, char a13, unsigned __int64 *a14, int *a15, int a16, __int64 a17, int a18, int a19)
{
  int v19; // r9@1
  LevelListener *v20; // r8@1
  int v21; // r10@1
  int v22; // r0@1
  int v23; // r12@1
  int v24; // r12@1
  int v25; // r1@1
  int v26; // r3@1
  int v27; // r2@1
  int v28; // r12@1
  int v29; // r12@1
  int v30; // r0@1
  int v31; // r2@1
  int v32; // r3@1
  double v33; // r0@1
  unsigned int v34; // r0@1
  int v35; // r6@3
  void *v36; // r5@3
  __int64 v37; // r0@4
  const void **i; // r5@7
  const void **v39; // r11@7
  const void **v40; // r7@9
  int *v41; // r0@9
  _DWORD *v42; // r0@15
  int v43; // r1@15
  unsigned __int64 *v45; // [sp+10h] [bp-D0h]@1
  int v46; // [sp+1Ch] [bp-C4h]@4
  char v47; // [sp+20h] [bp-C0h]@4
  __int16 v48; // [sp+28h] [bp-B8h]@4
  int v49; // [sp+30h] [bp-B0h]@4
  RakNet *v50; // [sp+B8h] [bp-28h]@1

  v19 = a1;
  v50 = _stack_chk_guard;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)a1 = &off_26EA280;
  *(_DWORD *)(a1 + 4) = &off_26EA474;
  v20 = (LevelListener *)(a1 + 4);
  *(_DWORD *)(a1 + 8) = &off_26EA4F0;
  *(_DWORD *)(a1 + 16) = &off_26EA508;
  v21 = a1 + 16;
  v22 = a1 + 24;
  *(_DWORD *)v22 = a2;
  *(_DWORD *)(v22 + 4) = a3;
  *(_DWORD *)(v22 + 8) = a4;
  *(_DWORD *)(v21 + 20) = a5;
  *(_DWORD *)(v21 + 24) = a6;
  v23 = v21 + 40;
  *(_DWORD *)(v21 + 28) = a7;
  *(_DWORD *)(v21 + 32) = a8;
  *(_BYTE *)(v21 + 36) = 0;
  *(_DWORD *)v23 = a9;
  *(_DWORD *)(v23 + 4) = a10;
  *(_DWORD *)(v23 + 8) = 0;
  v24 = v21 + 72;
  *(_DWORD *)(v21 + 52) = 0;
  *(_DWORD *)(v21 + 56) = 0;
  *(_DWORD *)(v21 + 60) = 0;
  *(_BYTE *)(v21 + 64) = a13;
  *(_BYTE *)(v21 + 65) = 0;
  v25 = unk_27EB704;
  v26 = *(_DWORD *)&word_27EB708;
  v27 = dword_27EB70C;
  *(_DWORD *)v24 = unk_27EB700;
  *(_DWORD *)(v24 + 4) = v25;
  *(_DWORD *)(v24 + 8) = v26;
  *(_DWORD *)(v21 + 84) = v27;
  _aeabi_memclr8(v21 + 88, 128);
  v28 = v21 + 228;
  *(_DWORD *)(v21 + 216) = 3;
  *(_DWORD *)(v21 + 224) = a12;
  *(_QWORD *)v28 = a17;
  *(_DWORD *)(v28 + 8) = a18;
  v29 = v21 + 268;
  *(_DWORD *)(v21 + 240) = 0;
  *(_DWORD *)(v21 + 244) = &unk_28898CC;
  *(_DWORD *)(v21 + 248) = &unk_28898CC;
  *(_DWORD *)(v21 + 252) = 0;
  v30 = *(_DWORD *)a11;
  v31 = *(_DWORD *)(a11 + 8);
  v32 = *(_DWORD *)(a11 + 12);
  *(_DWORD *)v29 = *(_DWORD *)(a11 + 4);
  *(_DWORD *)(v29 + 4) = v31;
  *(_DWORD *)(v29 + 8) = v32;
  *(_DWORD *)(v21 + 264) = v30;
  sub_21E94B4((void **)(v21 + 280), (const char *)&unk_257BC67);
  sub_21E8AF4((int *)(v19 + 300), a15);
  *(_DWORD *)(v19 + 304) = 0;
  *(_DWORD *)(v19 + 308) = 0;
  *(_DWORD *)(v19 + 312) = 0;
  *(_DWORD *)(v19 + 316) = a16;
  *(_DWORD *)(v19 + 328) = 0;
  *(_DWORD *)(v19 + 332) = 0;
  *(_QWORD *)(v19 + 336) = 1065353216LL;
  v45 = (unsigned __int64 *)(v19 + 304);
  LODWORD(v33) = v19 + 336;
  v34 = sub_21E6254(v33);
  *(_DWORD *)(v19 + 324) = v34;
  if ( v34 == 1 )
  {
    v36 = (void *)(v19 + 344);
    *(_DWORD *)(v19 + 344) = 0;
  }
  else
    if ( v34 >= 0x40000000 )
      sub_21E57F4();
    v35 = 4 * v34;
    v36 = operator new(4 * v34);
    _aeabi_memclr4(v36, v35);
  *(_DWORD *)(v19 + 320) = v36;
  *(_BYTE *)(v19 + 348) = 0;
  *(_DWORD *)(v19 + 352) = 0;
  *(_DWORD *)(v19 + 356) = *(_DWORD *)(a19 + 4);
  *(_DWORD *)(v19 + 360) = 0;
  *(_DWORD *)(v19 + 364) = *(_DWORD *)(a19 + 12);
  *(_QWORD *)(v19 + 368) = *(_QWORD *)(a19 + 16);
  v46 = v19 + 352;
  std::_Hashtable<PackIdVersion,std::pair<PackIdVersion const,std::string>,std::allocator<std::pair<PackIdVersion const,std::string>>,std::__detail::_Select1st,std::equal_to<PackIdVersion>,std::hash<PackIdVersion>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<PackIdVersion,std::pair<PackIdVersion const,std::string>,std::allocator<std::pair<PackIdVersion const,std::string>>,std::__detail::_Select1st,std::equal_to<PackIdVersion>,std::hash<PackIdVersion>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<PackIdVersion,std::pair<PackIdVersion const,std::string>,std::allocator<std::pair<PackIdVersion const,std::string>>,std::__detail::_Select1st,std::equal_to<PackIdVersion>,std::hash<PackIdVersion>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<PackIdVersion const,std::string>,true> const*)#1}>(
    (unsigned int *)(v19 + 352),
    a19,
    &v46);
  *(_BYTE *)(v19 + 272) = 0;
  sub_21E8190((void **)(v21 + 280), (char *)&unk_257BC67, 0);
  (*(void (**)(void))(**(_DWORD **)(v19 + 40) + 12))();
  NetworkHandler::getPrimaryNetworkId((NetworkHandler *)&v47, *(_DWORD *)(v19 + 32));
  *(_QWORD *)(v21 + 72) = *(_QWORD *)&v47;
  *(_WORD *)(v19 + 96) = v48;
  _aeabi_memcpy8(v19 + 104, &v49, 132);
  v37 = *(_QWORD *)(v19 + 308);
  if ( (_DWORD)v37 == HIDWORD(v37) )
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      v45,
      (int *)&TrustedKeys::AuthServicePublicKey);
    sub_21E8AF4((int *)v37, (int *)&TrustedKeys::AuthServicePublicKey);
    *(_DWORD *)(v19 + 308) += 4;
  v39 = (const void **)(*a14 >> 32);
  for ( i = (const void **)*a14; v39 != i; ++i )
    if ( *((_DWORD *)*i - 3) )
    {
      v40 = (const void **)(*(_QWORD *)(v19 + 304) >> 32);
      v41 = (int *)std::__find_if<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
                     *(_QWORD *)(v19 + 304),
                     v40,
                     i);
      if ( (const void **)v41 == v40 )
      {
        if ( v41 == *(int **)(v19 + 312) )
        {
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(v45, (int *)i);
        }
        else
          sub_21E8AF4(v41, (int *)i);
          *(_DWORD *)(v19 + 308) += 4;
      }
    }
  Level::addListener(*(Level **)(v19 + 28), v20);
  if ( (*(int (**)(void))(**(_DWORD **)(v19 + 252) + 16))() == 1 )
    v42 = operator new(4u);
    *v42 = &off_26EA54C;
    v43 = *(_DWORD *)(v19 + 256);
    *(_DWORD *)(v19 + 256) = v42;
    if ( v43 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v43 + 8))(v43);
  if ( _stack_chk_guard != v50 )
    _stack_chk_fail(_stack_chk_guard - v50);
  return v19;
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const SubClientLoginPacket *a3)
{
  ServerNetworkHandler::handle(this, a2, a3);
}


char *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const PlayerInputPacket *a3)
{
  const PlayerInputPacket *v3; // r8@1
  const NetworkIdentifier *v4; // r5@1
  char *v5; // r9@1
  char *result; // r0@1
  int v7; // r4@1
  int v8; // r7@1
  int v9; // r6@2
  unsigned int v10; // r0@8
  char v11; // r3@8
  float v12; // r1@8 OVERLAPPED
  float v13; // r2@8 OVERLAPPED
  bool v14; // r3@10
  bool v15; // [sp+0h] [bp-28h]@10

  v3 = a3;
  v4 = a2;
  v5 = (char *)*((_BYTE *)a3 + 12);
  result = Level::getUsers(*((Level **)this + 7));
  v8 = *(_QWORD *)result >> 32;
  v7 = *(_QWORD *)result;
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)v7;
      result = (char *)*((_DWORD *)v4 + 36);
      if ( result == *(char **)(*(_DWORD *)v7 + 4536) )
      {
        result = (char *)NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v9 + 4392));
        if ( result == (char *)1 )
        {
          result = (char *)Player::getClientSubId((Player *)v9);
          if ( result == v5 )
            break;
        }
      }
      v7 += 4;
      if ( v8 == v7 )
        return result;
    }
    if ( v9 )
      v10 = *((_WORD *)v3 + 12);
      v11 = 0;
      *(_QWORD *)&v12 = *((_QWORD *)v3 + 2);
      if ( v10 > 0xFF )
        v11 = 1;
      v15 = v11;
      v14 = v10;
      if ( (_BYTE)v10 )
        v14 = 1;
      result = (char *)ServerPlayer::setPlayerInput((ServerPlayer *)v9, v12, v13, v14, v15);
  }
  return result;
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const MapInfoRequestPacket *a3)
{
  const MapInfoRequestPacket *v3; // r5@1
  ServerNetworkHandler *v4; // r6@1
  const NetworkIdentifier *v5; // r9@1
  MapItemSavedData *v6; // r0@1
  int v7; // r7@1
  int v8; // r3@2
  int v9; // r6@2
  void (__fastcall *v10)(int, const NetworkIdentifier *, int, _DWORD); // r4@2
  int v11; // r4@8
  int v12; // r6@8
  int v13; // r7@9
  unsigned int *v14; // r1@10
  unsigned int v15; // r0@12
  unsigned int *v16; // r5@16
  unsigned int v17; // r0@18
  int v18; // [sp+4h] [bp-7Ch]@2
  void **v19; // [sp+8h] [bp-78h]@2
  void *v20; // [sp+18h] [bp-68h]@27
  __int64 v21; // [sp+28h] [bp-58h]@8
  void *v22; // [sp+34h] [bp-4Ch]@6
  void *ptr; // [sp+58h] [bp-28h]@4

  v3 = a3;
  v4 = this;
  v5 = a2;
  v6 = Level::getMapSavedData(*((_DWORD *)this + 7), (int)a2, *((_QWORD *)a3 + 2));
  v7 = (int)v6;
  if ( v6 )
  {
    ClientboundMapItemDataPacket::ClientboundMapItemDataPacket((int)&v19, v6, *((_DWORD *)v4 + 7));
    v8 = *((_BYTE *)v3 + 12);
    (*(void (**)(void))(**((_DWORD **)v4 + 11) + 16))();
    v9 = *((_DWORD *)v4 + 11);
    v10 = *(void (__fastcall **)(int, const NetworkIdentifier *, int, _DWORD))(*(_DWORD *)v9 + 16);
    MapItemSavedData::getFullDataPacket((MapItemSavedData *)&v18, v7);
    v10(v9, v5, v18, *((_BYTE *)v3 + 12));
    if ( v18 )
      (*(void (**)(void))(*(_DWORD *)v18 + 4))();
    v18 = 0;
    v19 = &off_26E9C74;
    if ( ptr )
      operator delete(ptr);
    if ( v22 )
      operator delete(v22);
    v12 = HIDWORD(v21);
    v11 = v21;
    if ( (_DWORD)v21 != HIDWORD(v21) )
    {
      do
      {
        v13 = *(_DWORD *)(v11 + 4);
        if ( v13 )
        {
          v14 = (unsigned int *)(v13 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
          }
          else
            v15 = (*v14)--;
          if ( v15 == 1 )
            v16 = (unsigned int *)(v13 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
            if ( &pthread_create )
            {
              __dmb();
              do
                v17 = __ldrex(v16);
              while ( __strex(v17 - 1, v16) );
            }
            else
              v17 = (*v16)--;
            if ( v17 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
        }
        v11 += 8;
      }
      while ( v11 != v12 );
      v11 = v21;
    }
    if ( v11 )
      operator delete((void *)v11);
    if ( v20 )
      operator delete(v20);
  }
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const ClientToServerHandshakePacket *a3)
{
  const NetworkIdentifier *v3; // r8@1
  ServerNetworkHandler *v4; // r9@1
  unsigned int v5; // r0@1
  __int64 v6; // kr00_8@1
  unsigned int v7; // r10@1
  int v8; // r11@1
  signed int *v9; // r6@1
  signed int v10; // r7@2
  int v11; // r4@2
  signed int v12; // r0@5
  signed int v13; // r5@6
  void *v14; // r0@8
  bool v15; // zf@10
  const Certificate *v16; // r0@13
  unsigned int *v17; // r2@14
  signed int v18; // r1@16
  int v19; // [sp+8h] [bp-30h]@8

  v3 = a2;
  v4 = this;
  v5 = NetworkIdentifier::getHash(a2);
  v6 = *((_QWORD *)v4 + 40);
  v7 = v5;
  v8 = v5 % HIDWORD(v6);
  v9 = *(signed int **)(v6 + 4 * (v5 % HIDWORD(v6)));
  if ( !v9 )
    goto LABEL_8;
  v10 = *v9;
  v11 = *(_DWORD *)(*v9 + 168);
  while ( 1 )
  {
    if ( v11 == v7 && *((_DWORD *)v3 + 36) == *(_DWORD *)(v10 + 152) )
    {
      v12 = NetworkIdentifier::equalsTypeData(v3, (const NetworkIdentifier *)(v10 + 8));
      if ( v12 )
        break;
    }
    v13 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 )
      v11 = *(_DWORD *)(v13 + 168);
      v9 = (signed int *)v10;
      v10 = *(_DWORD *)v10;
      if ( *(_DWORD *)(v13 + 168) % *((_DWORD *)v4 + 81) == v8 )
        continue;
  }
  v15 = v9 == 0;
  if ( v9 )
    v12 = *v9;
    v15 = *v9 == 0;
  if ( v15 )
LABEL_8:
    sub_21E94B4((void **)&v19, "disconnectionScreen.disconnected");
    ServerNetworkHandler::disconnectClient((int)v4, (int)v3, &v19, 0);
    v14 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v19 - 4);
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
        j_j_j_j__ZdlPv_9(v14);
  else
    v16 = (const Certificate *)ConnectionRequest::getCertificate(*(ConnectionRequest **)(v12 + 160));
    j_j_j__ZN20ServerNetworkHandler22_onClientAuthenticatedERK17NetworkIdentifierRK11Certificate(v4, v3, v16);
}


void __fastcall ServerNetworkHandler::_onPlayerLeft(ServerNetworkHandler *this, ServerPlayer *a2)
{
  ServerNetworkHandler *v2; // r5@1
  ServerPlayer *v3; // r4@1
  int v4; // r0@1
  void *v5; // r0@2
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  char *v8; // r0@8
  void *v9; // r0@8
  int v10; // r0@9
  char *v11; // r4@9
  int v12; // r6@9
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  int *v15; // r0@19
  char *v16; // r0@24
  unsigned int *v17; // r2@26
  signed int v18; // r1@28
  unsigned int *v19; // r2@30
  signed int v20; // r1@32
  char v21; // [sp+4h] [bp-6Ch]@9
  int v22; // [sp+30h] [bp-40h]@8
  char *v23; // [sp+34h] [bp-3Ch]@8
  char *v24; // [sp+38h] [bp-38h]@8
  char *v25; // [sp+3Ch] [bp-34h]@8
  int v26; // [sp+40h] [bp-30h]@2
  int v27; // [sp+44h] [bp-2Ch]@7
  char *v28; // [sp+48h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  v4 = (*(int (**)(void))(**((_DWORD **)this + 62) + 40))();
  (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v28 = (char *)&unk_28898CC;
  if ( sub_21E7D6C((const void **)v2 + 75, "realms") )
  {
    sub_21E8AF4(&v26, (int *)&unk_27EB800);
    sub_21E7408((const void **)&v26, "%multiplayer.player.left", 0x18u);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v28,
      &v26);
    v5 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) == &dword_28898C0 )
      goto LABEL_8;
    v6 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      goto LABEL_47;
    }
LABEL_46:
    v7 = (*v6)--;
    goto LABEL_47;
  }
  sub_21E8AF4(&v27, (int *)&unk_27EB800);
  sub_21E7408((const void **)&v27, "%multiplayer.player.left.realms", 0x1Fu);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v28,
    &v27);
  v5 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) == &dword_28898C0 )
    goto LABEL_8;
  v6 = (unsigned int *)(v27 - 4);
  if ( !&pthread_create )
    goto LABEL_46;
  __dmb();
  do
    v7 = __ldrex(v6);
  while ( __strex(v7 - 1, v6) );
LABEL_47:
  if ( v7 <= 0 )
    j_j_j_j__ZdlPv_9(v5);
LABEL_8:
  sub_21E8AF4(&v22, (int *)v3 + 1079);
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v8 = (char *)operator new(4u);
  v23 = v8;
  v25 = v8 + 4;
  v24 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v22,
                  (int)&v23,
                  (int)v8);
  v9 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v22 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  TextPacket::createTranslated((int)&v21, (int *)&v28, (unsigned __int64 *)&v23);
  (*(void (**)(void))(**((_DWORD **)v2 + 11) + 8))();
  ServerPlayer::disconnect(v3);
  v10 = Level::getLevelStorage(*((Level **)v2 + 7));
  (*(void (**)(void))(*(_DWORD *)v10 + 76))();
  (*(void (__fastcall **)(ServerPlayer *))(*(_DWORD *)v3 + 44))(v3);
  TextPacket::~TextPacket((TextPacket *)&v21);
  v12 = (int)v24;
  v11 = v23;
  if ( v23 != v24 )
    do
      v15 = (int *)(*(_DWORD *)v11 - 12);
      if ( v15 != &dword_28898C0 )
      {
        v13 = (unsigned int *)(*(_DWORD *)v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        }
        else
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      }
      v11 += 4;
    while ( v11 != (char *)v12 );
    v11 = v23;
  if ( v11 )
    operator delete(v11);
  v16 = v28 - 12;
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v28 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
}


void __fastcall ServerNetworkHandler::sendLoginMessageLocal(ServerNetworkHandler *this, const NetworkIdentifier *a2, const ConnectionRequest *a3)
{
  ConnectionRequest *v3; // r7@1
  const NetworkIdentifier *v4; // r4@1
  ServerNetworkHandler *v5; // r5@1
  Player *v6; // r8@1
  int v7; // r6@1
  void (__fastcall *v8)(int, const NetworkIdentifier *, char *, int); // r9@1
  int v9; // r0@1
  int v10; // r0@1
  char v11; // [sp+4h] [bp-5Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = ServerNetworkHandler::_createNewPlayer(this, a2, a3);
  ServerNetworkHandler::updateServerAnnouncement(v5);
  ServerNetworkHandler::_sendLevelData(v5, v6, v4);
  v7 = *((_DWORD *)v5 + 11);
  v8 = *(void (__fastcall **)(int, const NetworkIdentifier *, char *, int))(*(_DWORD *)v7 + 16);
  v9 = MinecraftCommands::getRegistry(*((MinecraftCommands **)v5 + 61));
  CommandRegistry::serializeAvailableCommands((CommandRegistry *)&v11, v9);
  v10 = ConnectionRequest::getClientSubId(v3);
  v8(v7, v4, &v11, v10);
  AvailableCommandsPacket::~AvailableCommandsPacket((AvailableCommandsPacket *)&v11);
  ServerNetworkHandler::_sendAdditionalLevelData(v5, v6, v4);
}


unsigned __int64 *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const PlayerActionPacket *a3)
{
  const NetworkIdentifier *v4; // r9@1
  unsigned __int64 *v5; // r5@1
  unsigned __int64 *result; // r0@1
  unsigned int *v7; // r4@1
  unsigned int *v8; // r6@1
  Level *v10; // r4@10
  BlockSource *v11; // r0@10
  BlockSource *v12; // r0@10
  const Block *v13; // r4@10
  Player *v20; // r6@11
  __int64 v21; // r2@11
  signed int v22; // r1@12
  int (__fastcall *v23)(unsigned int, signed int); // r2@12
  unsigned int v24; // r0@12
  float *v25; // r2@15
  Player *v26; // r0@15
  int v27; // r5@19
  _DWORD *v28; // r0@19
  int v29; // r2@19
  int v30; // r7@19
  int v31; // r1@19
  void *v32; // r4@19
  int v33; // r0@20
  Player **v34; // r6@24
  __int64 v35; // kr08_8@24
  char *v36; // r4@26
  char *v37; // r1@26
  int *v38; // r0@29
  void *v39; // r4@29
  int v40; // r10@29
  __int64 *v41; // r1@30
  int v42; // r1@32
  ArmorItem *v43; // r0@40
  const ItemInstance *v44; // r1@40
  const BlockPos *v45; // r0@49
  int v46; // r6@50
  BlockSource *v47; // r0@50
  unsigned int *v48; // r2@51
  signed int v49; // r6@53
  __int64 *v50; // r5@57
  int *v51; // r0@58
  void *v52; // r0@63
  void *v53; // r0@64
  int v54; // r2@65
  Dimension *v55; // r0@66
  unsigned int *v56; // r2@69
  signed int v57; // r1@71
  unsigned int *v58; // r2@73
  signed int v59; // r1@75
  ServerNetworkHandler *v60; // [sp+10h] [bp-B8h]@1
  float v61; // [sp+14h] [bp-B4h]@50
  float v62; // [sp+20h] [bp-A8h]@43
  float v63; // [sp+2Ch] [bp-9Ch]@15
  float v64; // [sp+38h] [bp-90h]@31
  float v65; // [sp+44h] [bp-84h]@11
  void *v66; // [sp+50h] [bp-78h]@19
  int v67; // [sp+54h] [bp-74h]@29
  void *v68; // [sp+58h] [bp-70h]@29
  int v69; // [sp+5Ch] [bp-6Ch]@29
  char *v70; // [sp+60h] [bp-68h]@29
  int v71; // [sp+68h] [bp-60h]@29
  char v72; // [sp+6Ch] [bp-5Ch]@29
  __int64 v73; // [sp+98h] [bp-30h]@8

  v60 = this;
  _R11 = a3;
  v4 = a2;
  v5 = (unsigned __int64 *)*((_BYTE *)a3 + 12);
  result = (unsigned __int64 *)Level::getUsers(*((Level **)this + 7));
  v7 = (unsigned int *)(*result >> 32);
  v8 = (unsigned int *)*result;
  if ( v8 != v7 )
  {
    while ( 1 )
    {
      _R8 = *v8;
      result = (unsigned __int64 *)*((_DWORD *)v4 + 36);
      if ( result == *(unsigned __int64 **)(*v8 + 4536) )
      {
        result = (unsigned __int64 *)NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(_R8 + 4392));
        if ( result == (unsigned __int64 *)1 )
        {
          result = (unsigned __int64 *)Player::getClientSubId((Player *)_R8);
          if ( result == v5 )
            break;
        }
      }
      ++v8;
      if ( v7 == v8 )
        return result;
    }
    if ( _R8 )
      Entity::getRuntimeID((Entity *)&v73, _R8);
      result = (unsigned __int64 *)(*((_QWORD *)_R11 + 5) ^ v73 | (*((_QWORD *)_R11 + 5) >> 32) ^ HIDWORD(v73));
      if ( *((_QWORD *)_R11 + 5) == v73 )
        switch ( *((_DWORD *)_R11 + 8) )
          case 0:
            v10 = (Level *)*((_DWORD *)v60 + 7);
            v11 = (BlockSource *)Entity::getRegion((Entity *)_R8);
            Level::extinguishFire(v10, v11, (const PlayerActionPacket *)((char *)_R11 + 16), *((_BYTE *)_R11 + 28));
            v12 = (BlockSource *)Entity::getRegion((Entity *)_R8);
            v13 = (const Block *)BlockSource::getBlock(v12, (const PlayerActionPacket *)((char *)_R11 + 16));
            (*(void (**)(void))(*(_DWORD *)v13 + 308))();
            if ( !(*(int (__fastcall **)(unsigned int))(*(_DWORD *)_R8 + 652))(_R8) )
            {
              _R0 = GameMode::getDestroyRate(*(GameMode **)(_R8 + 5172), v13);
              __asm
              {
                VLDR            S0, =65535.0
                VMOV            S2, R0
                VLDR            S4, [R11,#0x18]
                VMUL.F32        S0, S2, S0
                VLDR            S2, [R11,#0x14]
                VMOV            R0, S0
                VLDR            S0, [R11,#0x10]
                VCVT.F32.S32    S0, S0
                VCVT.F32.S32    S2, S2
                VCVT.F32.S32    S4, S4
              }
              v20 = (Player *)*((_DWORD *)v60 + 7);
                VSTR            S0, [SP,#0xC8+var_84]
                VSTR            S2, [SP,#0xC8+var_80]
                VSTR            S4, [SP,#0xC8+var_7C]
              HIDWORD(v21) = mce::Math::floor(_R0, *(float *)&v60);
              LODWORD(v21) = &v65;
              Level::broadcastLevelEvent(v20, 3600, v21, 0);
            }
            goto def_154EE6E;
          case 0xC:
            v22 = 0;
            v23 = *(int (__fastcall **)(unsigned int, signed int))(*(_DWORD *)_R8 + 788);
            v24 = _R8;
            return (unsigned __int64 *)v23(v24, v22);
          case 6:
            (*(void (__fastcall **)(unsigned int, signed int, signed int))(*(_DWORD *)_R8 + 1388))(_R8, 1, 1);
          case 0xE:
            result = (unsigned __int64 *)4296;
            *(_BYTE *)(_R8 + 4296) = 0;
            return result;
          case 1:
            __asm
              VLDR            S0, [R11,#0x10]; jumptable 0154EE6E case 1
              VLDR            S2, [R11,#0x14]
            v25 = &v63;
              VLDR            S4, [R11,#0x18]
              VCVT.F32.S32    S0, S0
              VCVT.F32.S32    S2, S2
              VCVT.F32.S32    S4, S4
            v26 = (Player *)*((_DWORD *)v60 + 7);
              VSTR            S0, [SP,#0xC8+var_9C]
              VSTR            S2, [SP,#0xC8+var_98]
              VSTR            S4, [SP,#0xC8+var_94]
            goto LABEL_32;
          case 7:
            if ( (*(int (__fastcall **)(unsigned int))(*(_DWORD *)_R8 + 316))(_R8) )
              (*(void (__fastcall **)(unsigned int, _DWORD))(*(_DWORD *)_R8 + 1248))(_R8, 0);
              *(_DWORD *)(_R8 + 224) = 0;
              result = (unsigned __int64 *)(*(int (__fastcall **)(unsigned int))(*(_DWORD *)_R8 + 516))(_R8);
              *(_DWORD *)(_R8 + 452) = result;
            else
              result = (unsigned __int64 *)*(_BYTE *)(_R8 + 4821);
              if ( *(_BYTE *)(_R8 + 4821) )
                result = (unsigned __int64 *)(*(int (__fastcall **)(unsigned int))(*(_DWORD *)_R8 + 1240))(_R8);
          case 0xD:
            result = (unsigned __int64 *)(*(int (__fastcall **)(unsigned int))(*(_DWORD *)_R8 + 316))(_R8);
            if ( !result )
              Player::updateTeleportDestPos((Player *)_R8);
              v27 = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)_R8 + 524))(_R8);
              v28 = operator new(0x20u);
              *v28 = 0;
              v28[1] = v27;
              v28[2] = 0;
              v29 = *(_DWORD *)(_R8 + 4664);
              v30 = *(_DWORD *)(_R8 + 4660);
              v28[5] = *(_DWORD *)(_R8 + 4668);
              v28[3] = v30;
              v28[4] = v29;
              *((_BYTE *)v28 + 24) = 0;
              *((_BYTE *)v28 + 25) = 1;
              v28[7] = 0;
              v31 = *((_DWORD *)v60 + 7);
              v66 = v28;
              Level::requestPlayerChangeDimension(v31, _R8, (int *)&v66);
              v32 = v66;
              if ( v66 )
                v33 = *((_DWORD *)v66 + 7);
                if ( v33 )
                  (*(void (**)(void))(*(_DWORD *)v33 + 4))();
                operator delete(v32);
              result = 0;
              v66 = 0;
          case 5:
            v35 = *(_QWORD *)Level::getUsers(*((Level **)v60 + 7));
            v34 = (Player **)v35;
            if ( (_DWORD)v35 == HIDWORD(v35) )
              goto LABEL_29;
          case 2:
            __asm { VLDR            S0, [R11,#0x10]; jumptable 0154EE6E case 2 }
            v25 = &v64;
              VSTR            S0, [SP,#0xC8+var_90]
              VSTR            S2, [SP,#0xC8+var_8C]
              VSTR            S4, [SP,#0xC8+var_88]
LABEL_32:
            v42 = 3601;
            goto LABEL_44;
          case 8:
            return (unsigned __int64 *)Player::handleJumpEffects((Player *)_R8);
          case 9:
            (*(void (__fastcall **)(unsigned int, signed int))(*(_DWORD *)_R8 + 796))(_R8, 1);
          case 0xF:
            if ( *(_BYTE *)(_R8 + 216) )
              goto def_154EE6E;
              VLDR            S0, [R8,#0x4C]
              VLDR            S2, [R8,#0x58]
              VSUB.F32        S0, S0, S2
              VLDR            S2, =0.1
              VCMPE.F32       S0, S2
              VMRS            APSR_nzcv, FPSCR
            if ( !(_NF ^ _VF)
              || Mob::isGliding((Mob *)_R8)
              || (*(int (__fastcall **)(unsigned int))(*(_DWORD *)_R8 + 208))(_R8) )
            v43 = (ArmorItem *)(*(int (__fastcall **)(unsigned int, signed int))(*(_DWORD *)_R8 + 1028))(_R8, 1);
            if ( ArmorItem::isFlyEnabled(v43, v44) != 1 )
              goto LABEL_42;
            Player::startGliding((Player *)_R8);
          case 0x10:
LABEL_42:
            Player::stopGliding((Player *)_R8);
          case 0x11:
              VLDR            S0, [R11,#0x10]; jumptable 0154EE6E case 17
              VMOV.F32        S6, #0.5
            v25 = &v62;
            __asm { VCVT.F32.S32    S4, S4 }
            v42 = 2008;
              VADD.F32        S0, S0, S6
              VADD.F32        S2, S2, S6
              VADD.F32        S4, S4, S6
              VSTR            S0, [SP,#0xC8+var_A8]
              VSTR            S2, [SP,#0xC8+var_A4]
              VSTR            S4, [SP,#0xC8+var_A0]
LABEL_44:
            Level::broadcastLevelEvent(v26, v42, (unsigned int)v25, 0);
          case 0xB:
            v22 = 1;
          case 0xA:
            (*(void (__fastcall **)(unsigned int, _DWORD))(*(_DWORD *)_R8 + 796))(_R8, 0);
          case 0x14:
            Player::setEnchantmentSeed((Player *)_R8, *((_DWORD *)_R11 + 7));
          case 0x12:
            v45 = (const BlockPos *)Entity::getRegion((Entity *)_R8);
            BlockSource::getBlockAndData((BlockSource *)&v73, v45, (int)_R11 + 16);
            result = (unsigned __int64 *)(unsigned __int8)v73;
            if ( !(_BYTE)v73 )
              return result;
            v46 = *((_DWORD *)v60 + 7);
            v47 = (BlockSource *)Entity::getRegion((Entity *)_R8);
              VLDR            S0, [R11,#0x10]
              VSTR            S0, [SP,#0xC8+var_B4]
              VSTR            S2, [SP,#0xC8+var_B0]
              VSTR            S4, [SP,#0xC8+var_AC]
            Level::broadcastDimensionEvent(
              v46,
              v47,
              2014,
              (int)&v61,
              (unsigned __int8)v73 | (BYTE1(v73) << 8) | (*((_DWORD *)_R11 + 7) << 16));
          default:
        while ( 1 )
          if ( (*(int (**)(void))(*(_DWORD *)*v34 + 784))() == 1 )
          {
            v36 = Player::getClientId(*v34);
            v37 = Player::getClientId((Player *)_R8);
            if ( *((_DWORD *)v36 + 36) != *((_DWORD *)v37 + 36)
              || NetworkIdentifier::equalsTypeData((NetworkIdentifier *)v36, (const NetworkIdentifier *)v37) != 1 )
              break;
          }
          ++v34;
          if ( (Player **)HIDWORD(v35) == v34 )
LABEL_29:
            sub_21E94B4((void **)&v71, "chat.type.sleeping");
            v38 = (int *)(*(int (__fastcall **)(unsigned int))(*(_DWORD *)_R8 + 188))(_R8);
            sub_21E8AF4(&v67, v38);
            v68 = 0;
            v69 = 0;
            v70 = 0;
            v39 = operator new(4u);
            v68 = v39;
            v70 = (char *)v39 + 4;
            v40 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v67,
                    (int)&v68,
                    (int)v39);
            v69 = v40;
            TextPacket::createTranslated((int)&v72, &v71, (unsigned __int64 *)&v68);
            if ( v39 != (void *)v40 )
              v41 = &v73;
              do
                v51 = (int *)(*(_DWORD *)v39 - 12);
                if ( v51 != &dword_28898C0 )
                {
                  v48 = (unsigned int *)(*(_DWORD *)v39 - 4);
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
                    v50 = v41;
                    j_j_j_j__ZdlPv_9(v51);
                    v41 = v50;
                }
                v39 = (char *)v39 + 4;
              while ( v39 != (void *)v40 );
              v39 = v68;
            if ( v39 )
              operator delete(v39);
            v52 = (void *)(v67 - 12);
            if ( (int *)(v67 - 12) != &dword_28898C0 )
              v56 = (unsigned int *)(v67 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v57 = __ldrex(v56);
                while ( __strex(v57 - 1, v56) );
              else
                v57 = (*v56)--;
              if ( v57 <= 0 )
                j_j_j_j__ZdlPv_9(v52);
            v53 = (void *)(v71 - 12);
            if ( (int *)(v71 - 12) != &dword_28898C0 )
              v58 = (unsigned int *)(v71 - 4);
                  v59 = __ldrex(v58);
                while ( __strex(v59 - 1, v58) );
                v59 = (*v58)--;
              if ( v59 <= 0 )
                j_j_j_j__ZdlPv_9(v53);
            v54 = *((_BYTE *)_R11 + 12);
            (*(void (**)(void))(**((_DWORD **)v60 + 11) + 24))();
            TextPacket::~TextPacket((TextPacket *)&v72);
def_154EE6E:
        v55 = (Dimension *)Entity::getDimension((Entity *)_R8);
        result = (unsigned __int64 *)Dimension::sendPacketForEntity(v55, (const Entity *)_R8, _R11, (const Player *)_R8);
  }
  return result;
}


signed int __fastcall ServerNetworkHandler::setMaxNumPlayers(ServerNetworkHandler *this, int a2)
{
  ServerNetworkHandler *v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  signed int v5; // r2@1
  signed int v6; // r6@1
  int v7; // r3@3
  int v8; // r1@10

  v2 = this;
  v3 = a2;
  v4 = ServerNetworkHandler::_getActiveAndInProgressPlayerCount(
         (int)this,
         qword_287E930,
         mce::UUID::EMPTY,
         *(&mce::UUID::EMPTY + 1),
         qword_287E930);
  v5 = v3;
  v6 = 0;
  if ( v4 > v3 )
    v5 = v4;
  v7 = *((_DWORD *)v2 + 79);
  if ( v3 > 30 )
    v5 = 30;
  *((_DWORD *)v2 + 79) = v5;
    v6 = -1;
    v6 = 1;
  if ( v7 != v5 )
  {
    ServerNetworkHandler::updateServerAnnouncement(v2);
    v8 = *((_DWORD *)v2 + 79);
    (*(void (**)(void))(**((_DWORD **)v2 + 63) + 28))();
  }
  return v6;
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const CraftingEventPacket *a3)
{
  ServerNetworkHandler::handle(this, a2, a3);
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const BookEditPacket *a3)
{
  const BookEditPacket *v3; // r8@1
  const NetworkIdentifier *v4; // r6@1
  int v5; // r9@1
  int v6; // r4@1
  __int64 v7; // kr00_8@1
  int v8; // r5@2
  int v9; // r0@8
  int v10; // r3@8
  WritableBookItem *v11; // r6@8
  const PageContent *v12; // r3@9
  void *v13; // r0@9
  void *v14; // r0@10
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  void *v17; // r0@15
  void *v18; // r0@16
  int v19; // r0@18
  void *v20; // r0@25
  const PageContent *v21; // r3@32
  void *v22; // r0@32
  unsigned int *v23; // r2@41
  signed int v24; // r1@43
  unsigned int *v25; // r2@45
  signed int v26; // r1@47
  unsigned int *v27; // r2@49
  signed int v28; // r1@51
  unsigned int *v29; // r2@53
  signed int v30; // r1@55
  unsigned int *v31; // r2@57
  signed int v32; // r1@59
  int v33; // [sp+0h] [bp-90h]@15
  int v34; // [sp+4h] [bp-8Ch]@15
  char v35; // [sp+8h] [bp-88h]@15
  int v36; // [sp+10h] [bp-80h]@23
  void *v37; // [sp+2Ch] [bp-64h]@21
  void *ptr; // [sp+3Ch] [bp-54h]@19
  int v39; // [sp+50h] [bp-40h]@25
  int v40; // [sp+54h] [bp-3Ch]@25
  int v41; // [sp+58h] [bp-38h]@32
  int v42; // [sp+5Ch] [bp-34h]@32
  int v43; // [sp+60h] [bp-30h]@9
  int v44; // [sp+64h] [bp-2Ch]@9

  v3 = a3;
  v4 = a2;
  v5 = *((_BYTE *)a3 + 12);
  v7 = *(_QWORD *)Level::getUsers(*((Level **)this + 7));
  v6 = v7;
  if ( (_DWORD)v7 != HIDWORD(v7) )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)v6;
      if ( *((_DWORD *)v4 + 36) == *(_DWORD *)(*(_DWORD *)v6 + 4536)
        && NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v8 + 4392)) == 1
        && Player::getClientSubId((Player *)v8) == v5 )
      {
        break;
      }
      v6 += 4;
      if ( HIDWORD(v7) == v6 )
        return;
    }
    if ( v8 )
      v9 = Player::getSupplies((Player *)v8);
      v11 = (WritableBookItem *)PlayerInventoryProxy::getItem(v9, *((_DWORD *)v3 + 5), 0);
      switch ( *((_DWORD *)v3 + 4) )
        case 0:
          BookEditPacket::getPage((BookEditPacket *)&v43, (int)v3);
          WritableBookItem::replacePage(v11, *((const ItemInstance **)v3 + 6), (int)&v43, v12);
          v13 = (void *)(v44 - 12);
          if ( (int *)(v44 - 12) != &dword_28898C0 )
          {
            v25 = (unsigned int *)(v44 - 4);
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
              j_j_j_j__ZdlPv_9(v13);
          }
          v14 = (void *)(v43 - 12);
          if ( (int *)(v43 - 12) != &dword_28898C0 )
            v15 = (unsigned int *)(v43 - 4);
            if ( !&pthread_create )
              goto LABEL_38;
            __dmb();
            do
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            goto LABEL_39;
          break;
        case 4:
          sub_21E8AF4(&v34, (int *)v3 + 8);
          sub_21E8AF4(&v33, (int *)v3 + 9);
          WritableBookItem::signBook((ItemInstance *)&v35, (int)v11, &v34, &v33);
          v17 = (void *)(v33 - 12);
          if ( (int *)(v33 - 12) != &dword_28898C0 )
            v29 = (unsigned int *)(v33 - 4);
                v30 = __ldrex(v29);
              while ( __strex(v30 - 1, v29) );
              v30 = (*v29)--;
            if ( v30 <= 0 )
              j_j_j_j__ZdlPv_9(v17);
          v18 = (void *)(v34 - 12);
          if ( (int *)(v34 - 12) != &dword_28898C0 )
            v31 = (unsigned int *)(v34 - 4);
                v32 = __ldrex(v31);
              while ( __strex(v32 - 1, v31) );
              v32 = (*v31)--;
            if ( v32 <= 0 )
              j_j_j_j__ZdlPv_9(v18);
          if ( !ItemInstance::isNull((ItemInstance *)&v35) )
            v19 = Player::getSupplies((Player *)v8);
            PlayerInventoryProxy::setItem(v19, *((_DWORD *)v3 + 5), (int)&v35, 0);
          if ( ptr )
            operator delete(ptr);
          if ( v37 )
            operator delete(v37);
          if ( v36 )
            (*(void (**)(void))(*(_DWORD *)v36 + 4))();
        case 2:
          WritableBookItem::deletePage((WritableBookItem *)&v39, v11, *((_DWORD *)v3 + 6));
          v20 = (void *)(v40 - 12);
          if ( (int *)(v40 - 12) != &dword_28898C0 )
            v23 = (unsigned int *)(v40 - 4);
                v24 = __ldrex(v23);
              while ( __strex(v24 - 1, v23) );
              v24 = (*v23)--;
            if ( v24 <= 0 )
              j_j_j_j__ZdlPv_9(v20);
          v14 = (void *)(v39 - 12);
          if ( (int *)(v39 - 12) != &dword_28898C0 )
            v15 = (unsigned int *)(v39 - 4);
        case 3:
          j_j_j__ZN16WritableBookItem9swapPagesERK12ItemInstanceii(
            v11,
            (const ItemInstance *)*((_QWORD *)v3 + 3),
            *((_QWORD *)v3 + 3) >> 32,
            v10);
        case 1:
          BookEditPacket::getPage((BookEditPacket *)&v41, (int)v3);
          WritableBookItem::addPageAt(v11, *((const ItemInstance **)v3 + 6), (int)&v41, v21);
          v22 = (void *)(v42 - 12);
          if ( (int *)(v42 - 12) != &dword_28898C0 )
            v27 = (unsigned int *)(v42 - 4);
                v28 = __ldrex(v27);
              while ( __strex(v28 - 1, v27) );
              v28 = (*v27)--;
            if ( v28 <= 0 )
              j_j_j_j__ZdlPv_9(v22);
          v14 = (void *)(v41 - 12);
          if ( (int *)(v41 - 12) != &dword_28898C0 )
            v15 = (unsigned int *)(v41 - 4);
                v16 = __ldrex(v15);
              while ( __strex(v16 - 1, v15) );
LABEL_38:
              v16 = (*v15)--;
LABEL_39:
            if ( v16 <= 0 )
              j_j_j_j__ZdlPv_9(v14);
        default:
          return;
  }
}


unsigned __int64 *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const RiderJumpPacket *a3)
{
  const RiderJumpPacket *v3; // r8@1
  const NetworkIdentifier *v4; // r6@1
  unsigned __int64 *v5; // r9@1
  unsigned __int64 *result; // r0@1
  int v7; // r4@1
  int v8; // r7@1
  int v9; // r5@2

  v3 = a3;
  v4 = a2;
  v5 = (unsigned __int64 *)*((_BYTE *)a3 + 12);
  result = (unsigned __int64 *)Level::getUsers(*((Level **)this + 7));
  v8 = *result >> 32;
  v7 = *result;
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)v7;
      result = (unsigned __int64 *)*((_DWORD *)v4 + 36);
      if ( result == *(unsigned __int64 **)(*(_DWORD *)v7 + 4536) )
      {
        result = (unsigned __int64 *)NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v9 + 4392));
        if ( result == (unsigned __int64 *)1 )
        {
          result = (unsigned __int64 *)Player::getClientSubId((Player *)v9);
          if ( result == v5 )
            break;
        }
      }
      v7 += 4;
      if ( v8 == v7 )
        return result;
    }
    if ( v9 )
      result = (unsigned __int64 *)Entity::isRiding((Entity *)v9);
      if ( result == (unsigned __int64 *)1 )
        result = (unsigned __int64 *)(*(int (**)(void))(**(_DWORD **)(v9 + 512) + 384))();
          result = (unsigned __int64 *)j_j_j__ZN3Mob12onPlayerJumpEi(*(Mob **)(v9 + 512), *((_DWORD *)v3 + 4));
  }
  return result;
}


char *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const SetEntityDataPacket *a3)
{
  ServerNetworkHandler *v3; // r9@1
  const NetworkIdentifier *v4; // r6@1
  char *v5; // r10@1
  char *result; // r0@1
  int v7; // r4@1
  int v8; // r5@1
  int v9; // r7@2
  const SetEntityDataPacket *v10; // [sp+8h] [bp-28h]@1

  v10 = a3;
  v3 = this;
  v4 = a2;
  v5 = (char *)*((_BYTE *)a3 + 12);
  result = Level::getUsers(*((Level **)this + 7));
  v7 = *(_QWORD *)result >> 32;
  v8 = *(_QWORD *)result;
  if ( v8 != v7 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)v8;
      result = (char *)*((_DWORD *)v4 + 36);
      if ( result == *(char **)(*(_DWORD *)v8 + 4536) )
      {
        result = (char *)NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v9 + 4392));
        if ( result == (char *)1 )
        {
          result = (char *)Player::getClientSubId((Player *)v9);
          if ( result == v5 )
            break;
        }
      }
      v8 += 4;
      if ( v7 == v8 )
        return result;
    }
    if ( v9 )
      result = (char *)Level::getRuntimeEntity(*((_DWORD *)v3 + 7), 0, *((_QWORD *)v10 + 2), 0);
      if ( result )
        result = (char *)(*(int (**)(void))(*(_DWORD *)result + 492))();
  }
  return result;
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const LoginPacket *a3)
{
  ServerNetworkHandler::handle(this, a2, a3);
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const NpcRequestPacket *a3)
{
  ServerNetworkHandler::handle(this, a2, a3);
}


void __fastcall ServerNetworkHandler::onTransferRequest(int a1, int a2, int *a3, int a4)
{
  int v4; // r6@1
  int v5; // r5@1
  int v6; // r4@1
  void *v7; // r0@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  void **v10; // [sp+0h] [bp-30h]@1
  int v11; // [sp+4h] [bp-2Ch]@1
  int v12; // [sp+8h] [bp-28h]@1
  char v13; // [sp+Ch] [bp-24h]@1
  int v14; // [sp+10h] [bp-20h]@1
  int v15; // [sp+14h] [bp-1Ch]@1

  v4 = a1;
  v5 = a2;
  v11 = 2;
  v6 = a4;
  v12 = 1;
  v13 = 0;
  v10 = &off_26E9A44;
  sub_21E8AF4(&v14, a3);
  v15 = v6;
  (*(void (__cdecl **)(_DWORD, int, void ***, _DWORD))(**(_DWORD **)(v4 + 44) + 16))(*(_DWORD *)(v4 + 44), v5, &v10, 0);
  v7 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
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
      j_j_j_j__ZdlPv_9(v7);
  }
}


unsigned __int64 *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const PlayerSkinPacket *a3)
{
  const PlayerSkinPacket *v3; // r9@1
  const NetworkIdentifier *v4; // r10@1
  unsigned __int64 *v5; // r8@1
  unsigned __int64 *result; // r0@1
  int v7; // r4@1
  int v8; // r6@1
  int v9; // r7@2
  const Certificate *v10; // r0@8
  int v11; // r5@9
  unsigned int v12; // r6@9
  __int64 v13; // kr10_8@10
  unsigned int v14; // r11@10
  int v15; // r0@10
  int v16; // r8@11
  int v17; // r5@11
  int v18; // r4@15
  int v19; // r8@17
  int v20; // r11@17
  int v21; // r1@17
  ServerNetworkHandler *v22; // r11@19
  int *v23; // r0@20
  const void **v24; // r0@20
  void *v25; // r0@20
  char *v26; // r0@21
  void *v27; // r0@21
  void *v28; // r0@22
  void *v29; // r0@23
  int v30; // r2@24
  int v31; // r5@24
  char *v32; // r6@24
  unsigned int *v33; // r2@26
  signed int v34; // r1@28
  int *v35; // r0@34
  char *v36; // r0@39
  bool v37; // zf@41
  __int64 v38; // r0@44
  __int64 v39; // r0@44
  unsigned int *v40; // r2@45
  signed int v41; // r1@47
  unsigned int *v42; // r2@49
  signed int v43; // r1@51
  unsigned int *v44; // r2@53
  signed int v45; // r1@55
  unsigned int *v46; // r2@57
  signed int v47; // r1@59
  unsigned int *v48; // r2@61
  signed int v49; // r1@63
  const PlayerSkinPacket *v50; // [sp+10h] [bp-98h]@17
  unsigned int v51; // [sp+14h] [bp-94h]@8
  unsigned int v52; // [sp+18h] [bp-90h]@8
  ServerNetworkHandler *v53; // [sp+20h] [bp-88h]@1
  char v54; // [sp+24h] [bp-84h]@24
  int v55; // [sp+50h] [bp-58h]@21
  int v56; // [sp+54h] [bp-54h]@21
  int v57; // [sp+58h] [bp-50h]@21
  char *v58; // [sp+5Ch] [bp-4Ch]@21
  char *v59; // [sp+60h] [bp-48h]@21
  char *v60; // [sp+64h] [bp-44h]@21
  int v61; // [sp+68h] [bp-40h]@20
  char *v62; // [sp+6Ch] [bp-3Ch]@20
  unsigned __int64 v63; // [sp+70h] [bp-38h]@8
  __int64 v64; // [sp+78h] [bp-30h]@9

  v53 = this;
  v3 = a3;
  v4 = a2;
  v5 = (unsigned __int64 *)*((_BYTE *)a3 + 12);
  result = (unsigned __int64 *)Level::getUsers(*((Level **)this + 7));
  v8 = *result >> 32;
  v7 = *result;
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)v7;
      result = (unsigned __int64 *)*((_DWORD *)v4 + 36);
      if ( result == *(unsigned __int64 **)(*(_DWORD *)v7 + 4536) )
      {
        result = (unsigned __int64 *)NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v9 + 4392));
        if ( result == (unsigned __int64 *)1 )
        {
          result = (unsigned __int64 *)Player::getClientSubId((Player *)v9);
          if ( result == v5 )
            break;
        }
      }
      v7 += 4;
      if ( v8 == v7 )
        return result;
    }
    if ( v9 )
      v10 = (const Certificate *)Player::getCertificate((Player *)v9);
      ExtendedCertificate::getIdentity((ExtendedCertificate *)&v63, v10);
      v51 = *((_QWORD *)v3 + 2) >> 32;
      v52 = *((_QWORD *)v3 + 2);
      result = (unsigned __int64 *)(v63 ^ *((_DWORD *)v3 + 4) | ((v63 ^ *((_QWORD *)v3 + 2)) >> 32));
      if ( !(v63 ^ *((_QWORD *)v3 + 2)) )
        v11 = *((_QWORD *)v3 + 3) >> 32;
        v12 = *((_QWORD *)v3 + 3);
        result = (unsigned __int64 *)(v64 ^ v12 | HIDWORD(v64) ^ v11);
        if ( v64 == *((_QWORD *)v3 + 3) )
          v13 = *(_QWORD *)(*((_DWORD *)v53 + 7) + 632);
          v14 = v51 ^ 522133279 * v52 ^ v12 ^ ((522133279 * (unsigned __int64)v12 >> 32) + 522133279 * v11);
          v15 = *(_DWORD *)(v13 + 4 * (v14 % HIDWORD(v13)));
          if ( !v15 )
            goto LABEL_17;
          v16 = *(_DWORD *)v15;
          v17 = *(_DWORD *)(*(_DWORD *)v15 + 96);
          while ( v17 != v14
               || *(_QWORD *)(v16 + 8) != __PAIR__(v51, v52)
               || *(_QWORD *)(v16 + 16) != *((_QWORD *)v3 + 3) )
          {
            v18 = *(_DWORD *)v16;
            if ( *(_DWORD *)v16 )
            {
              v17 = *(_DWORD *)(v18 + 96);
              v15 = v16;
              v16 = *(_DWORD *)v16;
              if ( *(_DWORD *)(v18 + 96) % HIDWORD(v13) == v14 % HIDWORD(v13) )
                continue;
            }
          }
          v37 = v15 == 0;
          if ( v15 )
            v16 = *(_DWORD *)v15;
            v37 = *(_DWORD *)v15 == 0;
          if ( v37 )
LABEL_17:
            v50 = v3;
            v19 = (int)v3 + 48;
            v20 = (int)v3 + 36;
            v21 = (int)v3 + 32;
          else
            EntityInteraction::setInteractText((int *)(v16 + 52), (int *)v3 + 8);
            LODWORD(v38) = v16 + 56;
            HIDWORD(v38) = (char *)v3 + 36;
            std::vector<unsigned char,std::allocator<unsigned char>>::operator=(v38);
            EntityInteraction::setInteractText((int *)(v16 + 80), (int *)v3 + 15);
            EntityInteraction::setInteractText((int *)(v16 + 84), (int *)v3 + 16);
            LODWORD(v39) = v16 + 68;
            HIDWORD(v39) = (char *)v3 + 48;
            std::vector<unsigned char,std::allocator<unsigned char>>::operator=(v39);
          (*(void (__fastcall **)(int, int, int, int))(*(_DWORD *)v9 + 1416))(v9, v21, v20, v19);
          if ( (*(int (__cdecl **)(_DWORD, _DWORD))(**((_DWORD **)v53 + 63) + 16))(
                 *((_DWORD *)v53 + 63),
                 *(_DWORD *)(**((_DWORD **)v53 + 63) + 16)) == 1 )
            v22 = (ServerNetworkHandler *)((char *)v53 + 44);
            v23 = sub_21E8AF4(&v61, (int *)&unk_27EB800);
            sub_21E7408((const void **)v23, "%multiplayer.player.changeSkin", 0x1Eu);
            v24 = sub_21E72F0((const void **)&v61, (const void **)&unk_27EB814);
            v62 = (char *)*v24;
            *v24 = &unk_28898CC;
            v25 = (void *)(v61 - 12);
            if ( (int *)(v61 - 12) != &dword_28898C0 )
              v40 = (unsigned int *)(v61 - 4);
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
                j_j_j_j__ZdlPv_9(v25);
            sub_21E8AF4(&v55, (int *)(v9 + 4316));
            sub_21E8AF4(&v56, (int *)v50 + 18);
            sub_21E8AF4(&v57, (int *)v50 + 17);
            v58 = 0;
            v59 = 0;
            v60 = 0;
            v26 = (char *)operator new(0xCu);
            v58 = v26;
            v60 = v26 + 12;
            v59 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                            (int)&v55,
                            (int)&v58,
                            (int)v26);
            v27 = (void *)(v57 - 12);
            if ( (int *)(v57 - 12) != &dword_28898C0 )
              v42 = (unsigned int *)(v57 - 4);
                  v43 = __ldrex(v42);
                while ( __strex(v43 - 1, v42) );
                v43 = (*v42)--;
              if ( v43 <= 0 )
                j_j_j_j__ZdlPv_9(v27);
            v28 = (void *)(v56 - 12);
            if ( (int *)(v56 - 12) != &dword_28898C0 )
              v44 = (unsigned int *)(v56 - 4);
                  v45 = __ldrex(v44);
                while ( __strex(v45 - 1, v44) );
                v45 = (*v44)--;
              if ( v45 <= 0 )
                j_j_j_j__ZdlPv_9(v28);
            v29 = (void *)(v55 - 12);
            if ( (int *)(v55 - 12) != &dword_28898C0 )
              v46 = (unsigned int *)(v55 - 4);
                  v47 = __ldrex(v46);
                while ( __strex(v47 - 1, v46) );
                v47 = (*v46)--;
              if ( v47 <= 0 )
                j_j_j_j__ZdlPv_9(v29);
            TextPacket::createTranslated((int)&v54, (int *)&v62, (unsigned __int64 *)&v58);
            v30 = *((_BYTE *)v50 + 12);
            (*(void (__cdecl **)(_DWORD, const NetworkIdentifier *))(**((_DWORD **)v53 + 11) + 24))(
              *((_DWORD *)v53 + 11),
              v4);
            TextPacket::~TextPacket((TextPacket *)&v54);
            v31 = (int)v59;
            v32 = v58;
            if ( v58 != v59 )
              do
                v35 = (int *)(*(_DWORD *)v32 - 12);
                if ( v35 != &dword_28898C0 )
                {
                  v33 = (unsigned int *)(*(_DWORD *)v32 - 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v34 = __ldrex(v33);
                    while ( __strex(v34 - 1, v33) );
                  }
                  else
                    v34 = (*v33)--;
                  if ( v34 <= 0 )
                    j_j_j_j__ZdlPv_9(v35);
                }
                v32 += 4;
              while ( v32 != (char *)v31 );
              v32 = v58;
            if ( v32 )
              operator delete(v32);
            v36 = v62 - 12;
            if ( (int *)(v62 - 12) != &dword_28898C0 )
              v48 = (unsigned int *)(v62 - 4);
                  v49 = __ldrex(v48);
                while ( __strex(v49 - 1, v48) );
                v49 = (*v48)--;
              if ( v49 <= 0 )
                j_j_j_j__ZdlPv_9(v36);
          result = (unsigned __int64 *)(*(int (__cdecl **)(_DWORD, const PlayerSkinPacket *))(**(_DWORD **)v22 + 20))(
                                         *(_DWORD *)v22,
                                         v50);
  }
  return result;
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const TextPacket *a3)
{
  ServerNetworkHandler::handle(this, a2, a3);
}


char *__fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const SimpleEventPacket *a3)
{
  ServerNetworkHandler *v3; // r9@1
  const NetworkIdentifier *v4; // r6@1
  char *v5; // r10@1
  char *result; // r0@1
  int v7; // r4@1
  int v8; // r5@1
  int v9; // r7@2
  const SimpleEventPacket *v10; // [sp+0h] [bp-28h]@1

  v10 = a3;
  v3 = this;
  v4 = a2;
  v5 = (char *)*((_BYTE *)a3 + 12);
  result = Level::getUsers(*((Level **)this + 7));
  v7 = *(_QWORD *)result >> 32;
  v8 = *(_QWORD *)result;
  if ( v8 != v7 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)v8;
      result = (char *)*((_DWORD *)v4 + 36);
      if ( result == *(char **)(*(_DWORD *)v8 + 4536) )
      {
        result = (char *)NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)(v9 + 4392));
        if ( result == (char *)1 )
        {
          result = (char *)Player::getClientSubId((Player *)v9);
          if ( result == v5 )
            break;
        }
      }
      v8 += 4;
      if ( v7 == v8 )
        return result;
    }
    if ( v9 )
      result = (char *)(*((_DWORD *)v10 + 4) - 1);
      if ( (unsigned int)result <= 1 )
        result = (char *)Abilities::getCommandPermissions((Abilities *)(v9 + 4320));
        if ( (unsigned int)result >= 2 )
          *((_DWORD *)v10 + 4);
          result = (char *)(*(int (**)(void))(**((_DWORD **)v3 + 7) + 88))();
  }
  return result;
}


Player *__fastcall ServerNetworkHandler::_createNewPlayer(ServerNetworkHandler *this, const NetworkIdentifier *a2, const SubClientConnectionRequest *a3, unsigned __int8 a4)
{
  ServerNetworkHandler *v4; // r10@1
  SubClientConnectionRequest *v5; // r11@1
  const NetworkIdentifier *v6; // r6@1
  _DWORD *v7; // r0@1
  __int64 v8; // r1@1
  __int64 v9; // ST24_8@1
  Level *v10; // r5@1
  char *v11; // r0@1
  const Certificate *v12; // r0@1
  int *v13; // r9@1
  int *v14; // r8@1
  int v15; // r0@3
  Player *v16; // r5@3
  int v17; // r1@3
  void (__fastcall *v18)(Player *, int *); // r4@3
  const Certificate *v19; // r0@3
  void *v20; // r0@3
  Player *v21; // r4@4
  void *v22; // r0@4
  Player *v23; // r4@5
  void *v24; // r0@5
  const Player *v25; // r0@6
  Player *v26; // r6@6
  int v27; // r1@6
  int v28; // r6@6
  void (__fastcall *v29)(int, _DWORD **, _DWORD **); // r4@6
  _DWORD *v30; // r0@6
  _DWORD *v31; // r0@6
  __int64 v32; // r1@6
  char *v33; // r0@10
  Player *v34; // r0@12
  int v35; // r2@12
  char *v36; // r0@12
  Player *v37; // r5@13
  void (__fastcall *v38)(Player *, int); // r4@13
  char *v39; // r0@13
  int v40; // r0@13
  Player *v41; // r5@14
  void (__fastcall *v42)(Player *, int *, void **, void **); // r4@14
  void *v43; // r0@14
  void *v44; // r0@15
  void *v45; // r0@20
  int v46; // r5@21
  const Certificate *v47; // r0@21
  signed int v48; // r5@21
  void *v49; // r0@21
  Player *v50; // r4@25
  char *v51; // r0@25
  int v52; // r0@25
  char *v53; // r0@26
  int v54; // r0@29
  Player *v55; // r4@29
  void (__cdecl *v56)(int, Player **); // r2@29
  unsigned int *v58; // r2@38
  signed int v59; // r1@40
  unsigned int *v60; // r2@42
  signed int v61; // r1@44
  unsigned int *v62; // r2@46
  signed int v63; // r1@48
  unsigned int *v64; // r2@50
  signed int v65; // r1@52
  unsigned int *v66; // r2@54
  signed int v67; // r1@56
  unsigned int *v68; // r2@58
  signed int v69; // r1@60
  unsigned int *v70; // r2@62
  signed int v71; // r1@64
  Player *v72; // [sp+2Ch] [bp-C4h]@29
  int v73; // [sp+30h] [bp-C0h]@21
  int v74; // [sp+34h] [bp-BCh]@14
  int v75; // [sp+38h] [bp-B8h]@14
  void *ptr; // [sp+3Ch] [bp-B4h]@14
  void *v77; // [sp+48h] [bp-A8h]@14
  int v78; // [sp+54h] [bp-9Ch]@14
  _DWORD *v79; // [sp+58h] [bp-98h]@6
  __int64 v80; // [sp+60h] [bp-90h]@6
  _DWORD *v81; // [sp+68h] [bp-88h]@6
  void (*v82)(void); // [sp+70h] [bp-80h]@6
  int (__fastcall *v83)(int ***, int, int, int, int); // [sp+74h] [bp-7Ch]@6
  int v84; // [sp+78h] [bp-78h]@6
  int v85; // [sp+7Ch] [bp-74h]@6
  int v86; // [sp+80h] [bp-70h]@6
  int v87; // [sp+84h] [bp-6Ch]@5
  int v88; // [sp+88h] [bp-68h]@4
  int v89; // [sp+8Ch] [bp-64h]@3
  int v90; // [sp+90h] [bp-60h]@1
  int *v91; // [sp+94h] [bp-5Ch]@1
  char v92; // [sp+98h] [bp-58h]@1
  int v93; // [sp+A8h] [bp-48h]@1
  int v94; // [sp+ACh] [bp-44h]@1
  Player *v95; // [sp+B0h] [bp-40h]@1
  _DWORD *v96; // [sp+B4h] [bp-3Ch]@1
  __int64 v97; // [sp+BCh] [bp-34h]@1
  unsigned __int8 v98; // [sp+C7h] [bp-29h]@1

  v4 = this;
  v5 = a3;
  v6 = a2;
  v98 = a4;
  v7 = operator new(4u);
  HIDWORD(v8) = sub_15550C4;
  *v7 = v4;
  LODWORD(v8) = sub_15550CC;
  v96 = v7;
  v97 = v8;
  HIDWORD(v9) = *((_DWORD *)v4 + 8);
  v10 = (Level *)*((_DWORD *)v4 + 7);
  LODWORD(v9) = *((_DWORD *)v4 + 11);
  v11 = Level::getLevelData(*((Level **)v4 + 7));
  v94 = LevelData::getGameType((LevelData *)v11);
  (*(void (__fastcall **)(int *))(**((_DWORD **)v4 + 12) + 8))(&v93);
  v12 = (const Certificate *)SubClientConnectionRequest::getCertificate(v5);
  ExtendedCertificate::getIdentity((ExtendedCertificate *)&v92, v12);
  v13 = (int *)SubClientConnectionRequest::getCertificate(v5);
  v14 = (int *)operator new(0x48u);
  Certificate::Certificate(v14, v13);
  v91 = v14;
  v90 = *((_DWORD *)v4 + 62);
  std::make_unique<ServerPlayer,Level &,PacketSender &,NetworkHandler &,GameType,NetworkIdentifier const&,unsigned char &,std::function<void ()(ServerPlayer&)> &,std::unique_ptr<SkinInfoData,std::default_delete<SkinInfoData>>,mce::UUID,std::unique_ptr<Certificate,std::default_delete<Certificate>>,int const&,minecraft::api::Api *>(
    (int *)&v95,
    v10,
    v9,
    &v94,
    (int)v6,
    (char *)&v98,
    (int)&v96,
    &v93,
    (int)&v92,
    (int *)&v91,
    (int *)v4 + 60,
    &v90);
  std::unique_ptr<Certificate,std::default_delete<Certificate>>::~unique_ptr((int)&v91);
  if ( v93 )
    (*(void (**)(void))(*(_DWORD *)v93 + 4))();
  v93 = 0;
  v15 = SubClientConnectionRequest::getClientRandomId(v5);
  v16 = v95;
  *((_DWORD *)v95 + 1139) = v17;
  *((_DWORD *)v16 + 1138) = v15;
  v18 = *(void (__fastcall **)(Player *, int *))(*(_DWORD *)v16 + 1228);
  v19 = (const Certificate *)SubClientConnectionRequest::getCertificate(v5);
  ExtendedCertificate::getIdentityName((ExtendedCertificate *)&v89, v19);
  v18(v16, &v89);
  v20 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
  {
    v58 = (unsigned int *)(v89 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
    }
    else
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  }
  v21 = v95;
  mce::UUID::asString((mce::UUID *)&v88);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v21 + 1136,
    &v88);
  v22 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v88 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = v95;
  SubClientConnectionRequest::getPlatformId((SubClientConnectionRequest *)&v87, (int)v5);
    (int *)v23 + 1145,
    &v87);
  v24 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v87 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = (const Player *)Level::getLevelStorage(*((Level **)v4 + 7));
  LevelStorage::loadServerPlayerData((LevelStorage *)&v86, v25, (int)v95);
  v26 = v95;
  Level::getNextRuntimeID((Level *)&v84, *((_DWORD *)v4 + 7));
  Entity::setRuntimeID((int)v26, v27, v84, v85);
  v28 = Player::getSupplies(v95);
  v29 = *(void (__fastcall **)(int, _DWORD **, _DWORD **))(*(_DWORD *)v28 + 16);
  v30 = operator new(4u);
  *v30 = &v95;
  v81 = v30;
  v82 = (void (*)(void))sub_15552D4;
  v83 = sub_1555104;
  v31 = operator new(0xCu);
  LODWORD(v32) = sub_155539A;
  *v31 = v4;
  v31[1] = &v95;
  HIDWORD(v32) = sub_155530A;
  v31[2] = &v86;
  v79 = v31;
  v80 = v32;
  v29(v28, &v81, &v79);
  if ( (_DWORD)v80 )
    ((void (*)(void))v80)();
  if ( v82 )
    v82();
  v33 = Entity::getUniqueID(v95);
  if ( ((unsigned int)*(_QWORD *)v33 & (unsigned int)(*(_QWORD *)v33 >> 32)) == -1 )
    Entity::setUniqueID((int)v95, *((_DWORD *)v95 + 1140), *((_QWORD *)v95 + 571) ^ *((_QWORD *)v95 + 570));
  v34 = v95;
  v35 = *((_DWORD *)v95 + 1139);
  *((_DWORD *)v95 + 768) = *((_DWORD *)v95 + 1138);
  *((_DWORD *)v34 + 769) = v35;
  v36 = Level::getLevelData(*((Level **)v4 + 7));
  if ( LevelData::getForceGameType((LevelData *)v36) == 1 )
    v37 = v95;
    v38 = *(void (__fastcall **)(Player *, int))(*(_DWORD *)v95 + 1432);
    v39 = Level::getLevelData(*((Level **)v4 + 7));
    v40 = LevelData::getGameType((LevelData *)v39);
    v38(v37, v40);
  v41 = v95;
  v42 = *(void (__fastcall **)(Player *, int *, void **, void **))(*(_DWORD *)v95 + 1416);
  SubClientConnectionRequest::getSkinId((SubClientConnectionRequest *)&v78, (int)v5);
  SubClientConnectionRequest::getSkinData((SubClientConnectionRequest *)&v77, (int)v5);
  SubClientConnectionRequest::getCapeData((SubClientConnectionRequest *)&ptr, (int)v5);
  SubClientConnectionRequest::getSkinGeometryName((SubClientConnectionRequest *)&v75, (int)v5);
  SubClientConnectionRequest::getSkinGeometry((SubClientConnectionRequest *)&v74, (int)v5);
  v42(v41, &v78, &v77, &ptr);
  v43 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v74 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  v44 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v75 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  if ( ptr )
    operator delete(ptr);
  if ( v77 )
    operator delete(v77);
  v45 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v78 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  v46 = *((_DWORD *)v4 + 15);
  v47 = (const Certificate *)SubClientConnectionRequest::getCertificate(v5);
  ExtendedCertificate::getXuid((ExtendedCertificate *)&v73, v47);
  v48 = OpsList::isOp(v46, (const void **)&v73);
  v49 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v73 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  if ( v48 == 1 )
    Abilities::setCommandPermissions((_BYTE **)v95 + 1080, *(_BYTE *)(*((_DWORD *)v4 + 61) + 8));
  else if ( !**((_BYTE **)v4 + 15) )
    Abilities::setCommandPermissions((_BYTE **)v95 + 1080, 0);
    v50 = v95;
    v51 = Level::getDefaultAbilities(*((Level **)v4 + 7));
    v52 = Abilities::getPlayerPermissions((Abilities *)v51);
    Abilities::setPlayerPermissions((PermissionsHandler **)v50 + 1080, v52);
  v53 = Level::getLevelData(*((Level **)v4 + 7));
  if ( LevelData::hasCommandsEnabled((LevelData *)v53) == 1
    && (*(int (__cdecl **)(Player *, _DWORD))(*(_DWORD *)v95 + 604))(v95, *(_DWORD *)(*(_DWORD *)v95 + 604)) >= (unsigned int)*(_BYTE *)(*((_DWORD *)v4 + 61) + 8) )
    Abilities::setPlayerPermissions((PermissionsHandler **)v95 + 1080, 2);
  v54 = *((_DWORD *)v4 + 7);
  v55 = v95;
  v56 = *(void (__cdecl **)(int, Player **))(*(_DWORD *)v54 + 56);
  v95 = 0;
  v72 = v55;
  v56(v54, &v72);
  if ( v72 )
    (*(void (__cdecl **)(Player *, _DWORD))(*(_DWORD *)v72 + 32))(v72, *(_DWORD *)(*(_DWORD *)v72 + 32));
  v72 = 0;
  if ( v86 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v86 + 4))(v86, *(_DWORD *)(*(_DWORD *)v86 + 4));
  if ( v95 )
    (*(void (__cdecl **)(Player *, _DWORD))(*(_DWORD *)v95 + 32))(v95, *(_DWORD *)(*(_DWORD *)v95 + 32));
  if ( (_DWORD)v97 )
    ((void (__cdecl *)(_DWORD **, _DWORD **))v97)(&v96, &v96);
  return v55;
}


int __fastcall ServerNetworkHandler::_getOrCreateDimension(ServerNetworkHandler *this, Player *a2)
{
  Entity *v2; // r5@1
  ServerNetworkHandler *v3; // r4@1
  int result; // r0@2
  unsigned int v5; // r1@3

  v2 = a2;
  v3 = this;
  if ( Entity::isRegionValid(a2) )
  {
    result = Entity::getDimension(v2);
  }
  else
    v5 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 524))(v2);
    if ( v5 == 3 )
      v5 = 0;
    result = Level::createDimension(*((_DWORD *)v3 + 7), v5);
  return result;
}


void __fastcall ServerNetworkHandler::handle(ServerNetworkHandler *this, const NetworkIdentifier *a2, const ClientToServerHandshakePacket *a3)
{
  ServerNetworkHandler::handle(this, a2, a3);
}
