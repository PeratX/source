

void __fastcall NetworkWorldInfo::getVersion(NetworkWorldInfo *this, int a2)
{
  __int64 v2; // r2@1

  LODWORD(v2) = *(_DWORD *)(a2 + 24);
  HIDWORD(v2) = "v%s";
  Util::format(this, "v%s", v2);
}


char *__fastcall NetworkWorldInfo::getRemoteServer(NetworkWorldInfo *this)
{
  return (char *)this + 80;
}


      if ( v7 > NetworkWorldInfo::getExternalServerTimeStamp((NetworkWorldInfo *)(v3 + 392 * (2 * v6 | 1))) )
{
      NetworkWorldInfo::operator=((int)&v18, v3 + 392 * v6, v3 + 392 * v4);
      NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v18);
      v6 = v4;
    }
    while ( v4 < v5 );
  }
  if ( !(v14 & 1) && v4 == ((signed int)v14 - 2) / 2 )
  {
    v8 = v3 + 392 * v4;
    v4 = 2 * v4 | 1;
    NetworkWorldInfo::operator=((int)&v17, v8, v3 + 392 * v4);
    NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v17);
  NetworkWorldInfo::NetworkWorldInfo((int)&v16, SHIDWORD(v14));
  if ( v4 <= v15 )
    v9 = v4;
LABEL_14:
    v12 = v3 + 392 * v9;
  else
    while ( 1 )
    {
      v9 = (v4 - 1) / 2;
      v10 = NetworkWorldInfo::getExternalServerTimeStamp((NetworkWorldInfo *)(v3 + 392 * v9));
      v11 = NetworkWorldInfo::getExternalServerTimeStamp((NetworkWorldInfo *)&v16);
      v12 = v3 + 392 * v4;
      if ( v10 <= v11 )
        break;
      NetworkWorldInfo::operator=((int)&v20, v12, v3 + 392 * v9);
      NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v20);
      v4 = (v4 - 1) / 2;
      if ( v9 <= v15 )
        goto LABEL_14;
  NetworkWorldInfo::operator=((int)&v19, v12, (int)&v16);
  NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v19);
  NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v16);
  result = (char *)(_stack_chk_guard - v21);
  if ( _stack_chk_guard != v21 )
    _stack_chk_fail(result);
  return result;
}


    if ( v3 <= NetworkWorldInfo::getExternalServerTimeStamp(i) )
{
    NetworkWorldInfo::operator=((int)&v6, v1, (int)i);
    NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v6);
    v1 = (int)i;
  }
  NetworkWorldInfo::operator=((int)&v5, v1, (int)&v7);
  NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v5);
  NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v7);
  result = (RakNet *)(_stack_chk_guard - v8);
  if ( _stack_chk_guard != v8 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall NetworkWorldInfo::NetworkWorldInfo(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r8@1
  int *v4; // r4@1
  int *v5; // r7@1
  __int64 v6; // r2@1
  void *v7; // r0@4
  int v8; // r0@5
  void *v9; // r0@5
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  int v15; // [sp+14h] [bp-44h]@5
  int v16; // [sp+18h] [bp-40h]@2

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = 4;
  v4 = (int *)(a1 + 8);
  sub_119C884((void **)(a1 + 8), (const char *)&unk_257BC67);
  v5 = (int *)(v2 + 12);
  sub_119C884((void **)(v2 + 12), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 16), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 20), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 24), (const char *)&unk_257BC67);
  ExternalServer::ExternalServer(v2 + 28);
  PingedCompatibleServer::PingedCompatibleServer((PingedCompatibleServer *)(v2 + 80));
  Social::MultiplayerGameInfo::MultiplayerGameInfo(
    (Social::MultiplayerGameInfo *)(v2 + 264),
    (const Social::MultiplayerGameInfo *)v3);
  ThirdPartyServer::ThirdPartyServer(v2 + 352);
  *(_DWORD *)(v2 + 4) = 0;
  LODWORD(v6) = *(_DWORD *)(v3 + 76);
  if ( (signed int)v6 >= 1000 )
  {
    Util::format((Util *)&v16, "%i", v6);
  }
  else
    HIDWORD(v6) = *(_DWORD *)(v3 + 72);
    Util::format((Util *)&v16, "%i/%i", v6);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v4, &v16);
  v7 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v5 = (int *)(v2 + 12);
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  EntityInteraction::setInteractText(v5, (int *)(v3 + 16));
  EntityInteraction::setInteractText((int *)(v2 + 16), (int *)(v3 + 32));
  v8 = GameTypeConv::stringToGameType((unsigned int *)(v3 + 36));
  GameTypeConv::gameTypeToString((void **)&v15, v8);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v2 + 20),
    &v15);
  v9 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  EntityInteraction::setInteractText((int *)(v2 + 24), (int *)(v3 + 40));
  if ( *(_QWORD *)(v3 + 72) >> 32 == (unsigned int)*(_QWORD *)(v3 + 72) )
    *(_DWORD *)(v2 + 4) = 2;
  return v2;
}


int __fastcall NetworkWorldInfo::NetworkWorldInfo(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r11@1
  int *v4; // r4@1
  int *v5; // r7@1
  __int64 v6; // r2@1
  void *v7; // r0@4
  char *v8; // r0@7
  void *v9; // r0@8
  void *v10; // r0@9
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  unsigned int *v14; // r2@17
  signed int v15; // r1@19
  unsigned int *v16; // r2@21
  signed int v17; // r1@23
  int v18; // [sp+0h] [bp-58h]@1
  ExternalServer *v19; // [sp+4h] [bp-54h]@1
  int v20; // [sp+8h] [bp-50h]@1
  int *v21; // [sp+8h] [bp-50h]@2
  int v22; // [sp+Ch] [bp-4Ch]@9
  int v23; // [sp+14h] [bp-44h]@6
  int v24; // [sp+18h] [bp-40h]@2

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = 2;
  v4 = (int *)(a1 + 8);
  sub_119C884((void **)(a1 + 8), (const char *)&unk_257BC67);
  v5 = (int *)(v2 + 12);
  sub_119C884((void **)(v2 + 12), (const char *)&unk_257BC67);
  v20 = v2 + 16;
  sub_119C884((void **)(v2 + 16), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 20), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 24), (const char *)&unk_257BC67);
  v19 = (ExternalServer *)ExternalServer::ExternalServer(v2 + 28);
  v18 = v2 + 80;
  PingedCompatibleServer::PingedCompatibleServer((int *)(v2 + 80), (int *)v3);
  *(_DWORD *)(v2 + 264) = 0;
  *(_DWORD *)(v2 + 268) = 0;
  *(_DWORD *)(v2 + 272) = 0;
  *(_DWORD *)(v2 + 276) = &unk_28898CC;
  *(_DWORD *)(v2 + 280) = &unk_28898CC;
  *(_DWORD *)(v2 + 284) = &unk_28898CC;
  *(_DWORD *)(v2 + 288) = &unk_28898CC;
  *(_DWORD *)(v2 + 292) = &unk_28898CC;
  *(_DWORD *)(v2 + 296) = &unk_28898CC;
  *(_DWORD *)(v2 + 300) = &unk_28898CC;
  *(_DWORD *)(v2 + 304) = &unk_28898CC;
  *(_DWORD *)(v2 + 312) = 0;
  *(_DWORD *)(v2 + 316) = 0;
  *(_DWORD *)(v2 + 320) = &unk_28898CC;
  *(_DWORD *)(v2 + 324) = &unk_28898CC;
  ThirdPartyServer::ThirdPartyServer(v2 + 352);
  *(_DWORD *)(v2 + 4) = 0;
  LODWORD(v6) = *(_DWORD *)(v3 + 20);
  if ( (signed int)v6 >= 1000 )
  {
    Util::format((Util *)&v24, "%i", v6, v18, v19, v20);
  }
  else
    HIDWORD(v6) = *(_DWORD *)(v3 + 24);
    Util::format((Util *)&v24, "%i/%i", v6, v18, v19, v20);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v4, &v24);
  v7 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v5 = (int *)(v2 + 12);
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  EntityInteraction::setInteractText(v5, (int *)v3);
  if ( *(_DWORD *)(*(_DWORD *)(v3 + 4) - 12) )
    sub_119C854(&v23, (int *)(v3 + 4));
    v8 = RakNet::SystemAddress::ToString((RakNet::SystemAddress *)(v3 + 28), 0, 124);
    sub_119C884((void **)&v23, v8);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v21, &v23);
  v9 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v23 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  GameTypeConv::gameTypeToString((void **)&v22, *(_DWORD *)(v3 + 8));
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v2 + 20),
    &v22);
  v10 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v22 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  EntityInteraction::setInteractText((int *)(v2 + 24), (int *)(v3 + 16));
  if ( (unsigned int)*(_QWORD *)(v3 + 20) == *(_QWORD *)(v3 + 20) >> 32 )
    *(_DWORD *)(v2 + 4) = 2;
  return v2;
}


      if ( v7 <= NetworkWorldInfo::getExternalServerTimeStamp(v2) )
{
        v11 = (NetworkWorldInfo *)((unsigned int)v11 & 0xFFFFFF00);
        sub_12EA174(v6);
      }
      else
      {
        NetworkWorldInfo::NetworkWorldInfo((int)&v14, v6);
        if ( v6 - (signed int)v2 >= 1 )
        {
          v8 = 392;
          v9 = 438261969 * ((v6 - (signed int)v2) >> 3) + 1;
          do
          {
            NetworkWorldInfo::operator=((int)&v15, (int)v5 + v8, v6 + v8 - 784);
            NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v15);
            --v9;
            v8 -= 392;
          }
          while ( v9 > 1 );
        }
        NetworkWorldInfo::operator=((int)&v13, (int)v2, (int)&v14);
        NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v13);
        NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v14);
      v4 = (NetworkWorldInfo *)(v6 + 392);
      v5 = (NetworkWorldInfo *)v6;
    }
    while ( (NetworkWorldInfo *)(v6 + 392) != v12 );
  }
  result = (RakNet *)(_stack_chk_guard - v16);
  if ( _stack_chk_guard != v16 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall NetworkWorldInfo::getWorldName(NetworkWorldInfo *this, int a2)
{
  NetworkWorldInfo::getWorldName(this, a2);
}


char *__fastcall NetworkWorldInfo::getThirdPartyServer(NetworkWorldInfo *this)
{
  return (char *)this + 352;
}


int __fastcall NetworkWorldInfo::NetworkWorldInfo(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = 3;
  sub_119C884((void **)(a1 + 8), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 12), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 16), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 20), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 24), (const char *)&unk_257BC67);
  ExternalServer::ExternalServer((_DWORD *)(v2 + 28), v3);
  PingedCompatibleServer::PingedCompatibleServer((PingedCompatibleServer *)(v2 + 80));
  *(_DWORD *)(v2 + 264) = 0;
  *(_DWORD *)(v2 + 268) = 0;
  *(_DWORD *)(v2 + 272) = 0;
  *(_DWORD *)(v2 + 276) = &unk_28898CC;
  *(_DWORD *)(v2 + 280) = &unk_28898CC;
  *(_DWORD *)(v2 + 284) = &unk_28898CC;
  *(_DWORD *)(v2 + 288) = &unk_28898CC;
  *(_DWORD *)(v2 + 292) = &unk_28898CC;
  *(_DWORD *)(v2 + 296) = &unk_28898CC;
  *(_DWORD *)(v2 + 300) = &unk_28898CC;
  *(_DWORD *)(v2 + 304) = &unk_28898CC;
  *(_DWORD *)(v2 + 312) = 0;
  *(_DWORD *)(v2 + 316) = 0;
  *(_DWORD *)(v2 + 320) = &unk_28898CC;
  *(_DWORD *)(v2 + 324) = &unk_28898CC;
  ThirdPartyServer::ThirdPartyServer(v2 + 352);
  NetworkWorldInfo::updateExternalServer((NetworkWorldInfo *)v2);
  return v2;
}


signed int __fastcall NetworkWorldInfo::getPingStatus(NetworkWorldInfo *this)
{
  signed int result; // r0@4

  if ( *((_DWORD *)this + 1) )
    goto LABEL_11;
  __asm
  {
    VLDR            S0, [R0,#0xF4]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
LABEL_11:
    result = 0;
  else
    __asm
    {
      VLDR            S2, =80.0
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      result = 1;
    else
      __asm { VLDR            S2, =160.0 }
      result = 3;
      __asm
      {
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        result = 2;
  return result;
}


char *__fastcall NetworkWorldInfo::getExternalServer(NetworkWorldInfo *this)
{
  return (char *)this + 28;
}


void __fastcall NetworkWorldInfo::updateExternalServer(NetworkWorldInfo *this)
{
  NetworkWorldInfo::updateExternalServer(this);
}


void __fastcall NetworkWorldInfo::updateExternalServer(NetworkWorldInfo *this)
{
  NetworkWorldInfo *v1; // r4@1
  ExternalServer *v2; // r5@1
  int *v3; // r0@1
  void *v4; // r0@1
  int v5; // r7@3
  __int64 v6; // r2@3
  void *v7; // r0@5
  void *v8; // r0@6
  void *v9; // r0@7
  void *v10; // r0@8
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  void *v13; // r0@14
  int *v14; // r0@15
  int *v15; // r0@15
  int v16; // r6@15
  unsigned int *v17; // r2@18
  signed int v18; // r1@20
  unsigned int *v19; // r2@22
  signed int v20; // r1@24
  unsigned int *v21; // r2@30
  signed int v22; // r1@32
  unsigned int *v23; // r2@34
  signed int v24; // r1@36
  unsigned int *v25; // r2@38
  signed int v26; // r1@40
  int v27; // [sp+0h] [bp-38h]@4
  int v28; // [sp+8h] [bp-30h]@7
  int v29; // [sp+Ch] [bp-2Ch]@7
  int v30; // [sp+14h] [bp-24h]@5
  int v31; // [sp+18h] [bp-20h]@5
  int v32; // [sp+1Ch] [bp-1Ch]@1

  v1 = this;
  v2 = (NetworkWorldInfo *)((char *)this + 28);
  v3 = (int *)ExternalServer::getName((NetworkWorldInfo *)((char *)this + 28));
  EntityInteraction::setInteractText((int *)v1 + 3, v3);
  GameTypeConv::gameTypeToString((void **)&v32, -1);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v1 + 5,
    &v32);
  v4 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v32 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  if ( *(_DWORD *)(*(_DWORD *)ExternalServer::getTitle(v2) - 12) )
    *((_DWORD *)v1 + 1) = 0;
    v5 = ExternalServer::getPlayers(v2);
    HIDWORD(v6) = ExternalServer::getMaxPlayers(v2);
    if ( v5 >= 1000 )
      LODWORD(v6) = v5;
      Util::format((Util *)&v27, "%i", v6);
      Util::format((Util *)&v27, "%i/%i", v6);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v1 + 2,
      &v27);
    v13 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v27 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v13);
    v14 = (int *)ExternalServer::getTitle(v2);
    EntityInteraction::setInteractText((int *)v1 + 4, v14);
    v15 = (int *)ExternalServer::getVersion(v2);
    EntityInteraction::setInteractText((int *)v1 + 6, v15);
    v16 = ExternalServer::getPlayers(v2);
    if ( v16 == ExternalServer::getMaxPlayers(v2) )
      *((_DWORD *)v1 + 1) = 2;
  else
    *((_DWORD *)v1 + 1) = 1;
    sub_119C884((void **)&v30, "achievement.unknown");
    I18n::get(&v31, (int **)&v30);
      &v31);
    v7 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v31 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
    v8 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v30 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
    sub_119C884((void **)&v28, "progressScreen.message.locating");
    I18n::get(&v29, (int **)&v28);
      (int *)v1 + 4,
      &v29);
    v9 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v29 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v9);
    v10 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v28 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v10);
}


char *__fastcall NetworkWorldInfo::getPlayerCount(NetworkWorldInfo *this)
{
  return (char *)this + 8;
}


char *__fastcall NetworkWorldInfo::getFriendGame(NetworkWorldInfo *this)
{
  return (char *)this + 264;
}


signed int __fastcall NetworkWorldInfo::hasRoomForPlayers(int a1, int a2)
{
  signed int result; // r0@4
  ExternalServer *v3; // r4@5
  int v4; // r5@5
  int v5; // r1@5
  __int64 v6; // r1@8
  __int64 v7; // r1@11

  switch ( a2 )
  {
    case 1:
      v6 = *(_QWORD *)(a1 + 100);
      result = 0;
      if ( (signed int)v6 < SHIDWORD(v6) )
        result = 1;
      break;
    case 3:
      v7 = *(_QWORD *)(a1 + 336);
      if ( SHIDWORD(v7) < (signed int)v7 )
    case 2:
      v3 = (ExternalServer *)(a1 + 28);
      v4 = ExternalServer::getPlayers((ExternalServer *)(a1 + 28));
      v5 = ExternalServer::getMaxPlayers(v3);
      if ( v4 < v5 )
    default:
      result = 1;
  }
  return result;
}


int __fastcall NetworkWorldInfo::NetworkWorldInfo(int a1, ThirdPartyServer *a2)
{
  int v2; // r6@1
  ThirdPartyServer *v3; // r8@1
  int *v4; // r4@1
  int *v5; // r7@1
  int v6; // r0@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = 3;
  sub_119C884((void **)(a1 + 8), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 12), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 16), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 20), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 24), (const char *)&unk_257BC67);
  v4 = (int *)ThirdPartyServer::getTitle(v3);
  v5 = (int *)ThirdPartyServer::getUrl(v3);
  v6 = ThirdPartyServer::getPort(v3);
  ExternalServer::ExternalServer(v2 + 28, -1, v4, v5, v6, 0);
  PingedCompatibleServer::PingedCompatibleServer((PingedCompatibleServer *)(v2 + 80));
  *(_DWORD *)(v2 + 264) = 0;
  *(_DWORD *)(v2 + 268) = 0;
  *(_DWORD *)(v2 + 272) = 0;
  *(_DWORD *)(v2 + 276) = &unk_28898CC;
  *(_DWORD *)(v2 + 280) = &unk_28898CC;
  *(_DWORD *)(v2 + 284) = &unk_28898CC;
  *(_DWORD *)(v2 + 288) = &unk_28898CC;
  *(_DWORD *)(v2 + 292) = &unk_28898CC;
  *(_DWORD *)(v2 + 296) = &unk_28898CC;
  *(_DWORD *)(v2 + 300) = &unk_28898CC;
  *(_DWORD *)(v2 + 304) = &unk_28898CC;
  *(_DWORD *)(v2 + 312) = 0;
  *(_DWORD *)(v2 + 316) = 0;
  *(_DWORD *)(v2 + 320) = &unk_28898CC;
  *(_DWORD *)(v2 + 324) = &unk_28898CC;
  ThirdPartyServer::ThirdPartyServer((int *)(v2 + 352), (int *)v3);
  return v2;
}


int *__fastcall NetworkWorldInfo::updateThirdPartyServer(NetworkWorldInfo *this)
{
  NetworkWorldInfo *v1; // r4@1
  int *result; // r0@1
  int *v3; // r0@2

  v1 = this;
  NetworkWorldInfo::updateExternalServer(this);
  result = (int *)*((_DWORD *)v1 + 1);
  if ( result == (int *)1 )
  {
    v3 = (int *)ThirdPartyServer::getTitle((NetworkWorldInfo *)((char *)v1 + 352));
    EntityInteraction::setInteractText((int *)v1 + 3, v3);
    result = j_EntityInteraction::setInteractText((int *)v1 + 4, (int *)&Util::EMPTY_STRING);
  }
  return result;
}


char *__fastcall NetworkWorldInfo::getOwnerName(NetworkWorldInfo *this)
{
  return (char *)this + 12;
}


void __fastcall NetworkWorldInfo::getWorldName(NetworkWorldInfo *this, int a2)
{
  __int64 v2; // r2@1
  Util *v3; // r4@1
  int *v4; // r1@1
  int v5; // r5@2
  void *v6; // r0@2
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  unsigned int v9; // [sp+4h] [bp-1Ch]@2

  LODWORD(v2) = *(_DWORD *)(a2 + 24);
  v3 = this;
  v4 = (int *)(a2 + 16);
  if ( *(_DWORD *)(v2 - 12) )
  {
    v5 = *v4;
    HIDWORD(v2) = "v%s";
    Util::format((Util *)&v9, "v%s", v2);
    Util::format(v3, "%s - %s", __PAIR__(v9, v5));
    v6 = (void *)(v9 - 12);
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
        j_j_j_j_j__ZdlPv_9_1(v6);
    }
  }
  else
    sub_119C854((int *)this, v4);
}


int __fastcall NetworkWorldInfo::NetworkWorldInfo(int a1, int a2)
{
  int v2; // r9@1
  int v3; // r7@1

  v2 = a2;
  v3 = a1;
  *(_QWORD *)a1 = *(_QWORD *)a2;
  sub_119C854((int *)(a1 + 8), (int *)(a2 + 8));
  sub_119C854((int *)(v3 + 12), (int *)(v2 + 12));
  sub_119C854((int *)(v3 + 16), (int *)(v2 + 16));
  sub_119C854((int *)(v3 + 20), (int *)(v2 + 20));
  sub_119C854((int *)(v3 + 24), (int *)(v2 + 24));
  ExternalServer::ExternalServer((_DWORD *)(v3 + 28), v2 + 28);
  PingedCompatibleServer::PingedCompatibleServer((int *)(v3 + 80), (int *)(v2 + 80));
  Social::MultiplayerGameInfo::MultiplayerGameInfo(
    (Social::MultiplayerGameInfo *)(v3 + 264),
    (const Social::MultiplayerGameInfo *)(v2 + 264));
  ThirdPartyServer::ThirdPartyServer((int *)(v3 + 352), (int *)(v2 + 352));
  return v3;
}


NetworkWorldInfo *__fastcall NetworkWorldInfo::~NetworkWorldInfo(NetworkWorldInfo *this)
{
  NetworkWorldInfo *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  int v10; // r1@5
  void *v11; // r0@5
  int v12; // r1@6
  void *v13; // r0@6
  int v14; // r1@7
  void *v15; // r0@7
  int v16; // r1@8
  void *v17; // r0@8
  unsigned int *v19; // r2@10
  signed int v20; // r1@12
  unsigned int *v21; // r2@14
  signed int v22; // r1@16
  unsigned int *v23; // r2@18
  signed int v24; // r1@20
  unsigned int *v25; // r2@22
  signed int v26; // r1@24
  unsigned int *v27; // r2@26
  signed int v28; // r1@28
  unsigned int *v29; // r2@30
  signed int v30; // r1@32
  unsigned int *v31; // r2@34
  signed int v32; // r1@36
  unsigned int *v33; // r2@38
  signed int v34; // r1@40

  v1 = this;
  ThirdPartyServer::~ThirdPartyServer((NetworkWorldInfo *)((char *)this + 352));
  Social::MultiplayerGameInfo::~MultiplayerGameInfo((NetworkWorldInfo *)((char *)v1 + 264));
  v2 = *((_DWORD *)v1 + 24);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_2(v3);
  }
  v4 = *((_DWORD *)v1 + 21);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v4 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v5);
  v6 = *((_DWORD *)v1 + 20);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v6 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v7);
  ExternalServer::~ExternalServer((NetworkWorldInfo *)((char *)v1 + 28));
  v8 = *((_DWORD *)v1 + 6);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v8 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v9);
  v10 = *((_DWORD *)v1 + 5);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v10 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v11);
  v12 = *((_DWORD *)v1 + 4);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v12 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v13);
  v14 = *((_DWORD *)v1 + 3);
  v15 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v14 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v15);
  v16 = *((_DWORD *)v1 + 2);
  v17 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v16 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v17);
  return v1;
}


    if ( v17 <= NetworkWorldInfo::getExternalServerTimeStamp(v16) )
{
      v20 = NetworkWorldInfo::getExternalServerTimeStamp((NetworkWorldInfo *)(v5 + 392));
      if ( v20 <= NetworkWorldInfo::getExternalServerTimeStamp((NetworkWorldInfo *)(v6 - 392)) )
      {
        v23 = NetworkWorldInfo::getExternalServerTimeStamp(v16);
        if ( v23 <= NetworkWorldInfo::getExternalServerTimeStamp((NetworkWorldInfo *)(v6 - 392)) )
        {
LABEL_12:
          v21 = v5;
          v22 = (int)v16;
          goto LABEL_13;
        }
LABEL_11:
        v21 = v5;
        v22 = v6 - 392;
        goto LABEL_13;
      }
    }
    else
    {
      v18 = NetworkWorldInfo::getExternalServerTimeStamp(v16);
      if ( v18 > NetworkWorldInfo::getExternalServerTimeStamp((NetworkWorldInfo *)(v6 - 392)) )
        goto LABEL_12;
      v19 = NetworkWorldInfo::getExternalServerTimeStamp((NetworkWorldInfo *)(v5 + 392));
      if ( v19 > NetworkWorldInfo::getExternalServerTimeStamp((NetworkWorldInfo *)(v6 - 392)) )
        goto LABEL_11;
    v21 = v5;
    v22 = v5 + 392;
LABEL_13:
    std::iter_swap<__gnu_cxx::__normal_iterator<NetworkWorldInfo *,std::vector<NetworkWorldInfo,std::allocator<NetworkWorldInfo>>>,__gnu_cxx::__normal_iterator<NetworkWorldInfo *,std::vector<NetworkWorldInfo,std::allocator<NetworkWorldInfo>>>>(
      v21,
      v22);
    v24 = (NetworkWorldInfo *)v6;
    for ( i = (NetworkWorldInfo *)(v5 + 392); ; i = (NetworkWorldInfo *)((char *)i + 392) )
      v26 = NetworkWorldInfo::getExternalServerTimeStamp(i);
      if ( v26 > NetworkWorldInfo::getExternalServerTimeStamp((NetworkWorldInfo *)v5) )
        continue;
      do
        v24 = (NetworkWorldInfo *)((char *)v24 - 392);
        v27 = NetworkWorldInfo::getExternalServerTimeStamp((NetworkWorldInfo *)v5);
      while ( v27 > NetworkWorldInfo::getExternalServerTimeStamp(v24) );
      if ( i >= v24 )
        break;
      std::iter_swap<__gnu_cxx::__normal_iterator<NetworkWorldInfo *,std::vector<NetworkWorldInfo,std::allocator<NetworkWorldInfo>>>,__gnu_cxx::__normal_iterator<NetworkWorldInfo *,std::vector<NetworkWorldInfo,std::allocator<NetworkWorldInfo>>>>(
        (int)i,
        (int)v24);
    v4 = v4 & 0xFFFFFF00 | v32;
    sub_12E9C20(i, v6, v8, v4);
    _R5 = (signed int)i - v5;
    v6 = (int)i;
    if ( (signed int)i - v5 <= 6272 )
      goto LABEL_25;
  }
  v31 = 438261969 * (_R5 >> 3);
  v28 = (v31 - 2) / 2;
  v29 = v5 + 392 * v28;
  do
  {
    NetworkWorldInfo::NetworkWorldInfo((int)&v34, v29);
    NetworkWorldInfo::NetworkWorldInfo((int)&v33, (int)&v34);
    v9 = v9 & 0xFFFFFF00 | v32;
    sub_12E9EB8(v5, v28, __PAIR__(&v33, v31));
    NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v33);
    NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v34);
    --v28;
    v29 -= 392;
  while ( v28 != -1 );
  if ( _R5 > 392 )
    do
      v6 -= 392;
      v29 = v29 & 0xFFFFFF00 | v32;
      sub_12E9E14(v5, v6, v6);
    while ( v6 - v5 > 392 );
LABEL_25:
  result = (char *)(_stack_chk_guard - v35);
  if ( _stack_chk_guard != v35 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall NetworkWorldInfo::NetworkWorldInfo(int a1)
{
  int v1; // r6@1

  v1 = a1;
  *(_DWORD *)a1 = 0;
  sub_119C884((void **)(a1 + 8), (const char *)&unk_257BC67);
  sub_119C884((void **)(v1 + 12), (const char *)&unk_257BC67);
  sub_119C884((void **)(v1 + 16), (const char *)&unk_257BC67);
  sub_119C884((void **)(v1 + 20), (const char *)&unk_257BC67);
  sub_119C884((void **)(v1 + 24), (const char *)&unk_257BC67);
  ExternalServer::ExternalServer(v1 + 28);
  PingedCompatibleServer::PingedCompatibleServer((PingedCompatibleServer *)(v1 + 80));
  *(_DWORD *)(v1 + 264) = 0;
  *(_DWORD *)(v1 + 268) = 0;
  *(_DWORD *)(v1 + 272) = 0;
  *(_DWORD *)(v1 + 276) = &unk_28898CC;
  *(_DWORD *)(v1 + 280) = &unk_28898CC;
  *(_DWORD *)(v1 + 284) = &unk_28898CC;
  *(_DWORD *)(v1 + 288) = &unk_28898CC;
  *(_DWORD *)(v1 + 292) = &unk_28898CC;
  *(_DWORD *)(v1 + 296) = &unk_28898CC;
  *(_DWORD *)(v1 + 300) = &unk_28898CC;
  *(_DWORD *)(v1 + 304) = &unk_28898CC;
  *(_DWORD *)(v1 + 312) = 0;
  *(_DWORD *)(v1 + 316) = 0;
  *(_DWORD *)(v1 + 320) = &unk_28898CC;
  *(_DWORD *)(v1 + 324) = &unk_28898CC;
  ThirdPartyServer::ThirdPartyServer(v1 + 352);
  return v1;
}


int __fastcall NetworkWorldInfo::setRemoteServer(NetworkWorldInfo *this, PingedCompatibleServer *a2)
{
  NetworkWorldInfo *v2; // r4@1
  PingedCompatibleServer *v3; // r5@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  EntityInteraction::setInteractText((int *)this + 20, (int *)a2);
  EntityInteraction::setInteractText((int *)v2 + 21, (int *)v3 + 1);
  *((_QWORD *)v2 + 11) = *((_QWORD *)v3 + 1);
  EntityInteraction::setInteractText((int *)v2 + 24, (int *)v3 + 4);
  *(_QWORD *)((char *)v2 + 100) = *(_QWORD *)((char *)v3 + 20);
  RakNet::SystemAddress::operator=((int)v2 + 108, (int)v3 + 28);
  *((_QWORD *)v2 + 30) = *((_QWORD *)v3 + 20);
  *((_QWORD *)v2 + 31) = *((_QWORD *)v3 + 21);
  result = *((_WORD *)v3 + 88);
  *((_WORD *)v2 + 128) = result;
  return result;
}
