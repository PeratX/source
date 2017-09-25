

int __fastcall minecraft::api::PlayerInteractionInterface::handlePlayerInteractingWithEntityEvent(minecraft::api::PlayerInteractionInterface *this, Player *a2, Entity *a3)
{
  return 0;
}


void __fastcall Minecraft::setSimTimeScale(Minecraft *this, float _R1)
{
  Timer *v6; // r4@1
  Timer *v8; // r0@2

  __asm { VMOV.F32        S0, #1.0 }
  v6 = (Timer *)*((_DWORD *)this + 24);
  __asm
  {
    VMOV            S16, R1
    VCMPE.F32       S16, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    v8 = (Timer *)*((_DWORD *)this + 24);
    _R1 = 1.0;
  else
    _R0 = j_Timer::getTimeScale(*((Timer **)this + 24));
    __asm { VMOV            S0, R0 }
    v8 = v6;
    __asm
    {
      VMUL.F32        S0, S0, S16
      VMOV            R1, S0
    }
  j_j_j__ZN5Timer12setTimeScaleEf(v8, _R1);
}


int __fastcall minecraft::api::PlayerInteractionInterface::handlePlayerBreakingBlockEvent(minecraft::api::PlayerInteractionInterface *this, Player *a2, const BlockPos *a3, const FullBlock *a4, const ItemInstance *a5)
{
  return 0;
}


int __fastcall minecraft::api::PlayerInteractionInterface::handlePlayerUsingItem(minecraft::api::PlayerInteractionInterface *this, Player *a2, const ItemInstance *a3)
{
  return 0;
}


Minecraft *__fastcall Minecraft::~Minecraft(Minecraft *this)
{
  Minecraft *v1; // r4@1
  GameSession *v2; // r0@1
  GameSession *v3; // r0@2
  void *v4; // r5@3
  void (*v5)(void); // r3@4
  CommandRegistry *v6; // r0@6
  CommandRegistry *v7; // r0@7
  int v8; // r1@11
  void *v9; // r0@11
  int v10; // r0@12
  int v11; // r0@14
  int v12; // r0@16
  int v13; // r5@18
  int v14; // r0@20
  unsigned int *v16; // r2@23
  signed int v17; // r1@25

  v1 = this;
  DocumentationSystem::~DocumentationSystem((Minecraft *)((char *)this + 120));
  v2 = (GameSession *)*((_DWORD *)v1 + 23);
  if ( v2 )
  {
    v3 = GameSession::~GameSession(v2);
    j_operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 23) = 0;
  v4 = (void *)*((_DWORD *)v1 + 22);
  if ( v4 )
    v5 = (void (*)(void))*((_DWORD *)v4 + 6);
    if ( v5 )
      v5();
    v6 = (CommandRegistry *)*((_DWORD *)v4 + 1);
    if ( v6 )
    {
      v7 = j_CommandRegistry::~CommandRegistry(v6);
      j_operator delete((void *)v7);
    }
    *((_DWORD *)v4 + 1) = 0;
    if ( *(_DWORD *)v4 )
      (*(void (**)(void))(**(_DWORD **)v4 + 4))();
    j_operator delete(v4);
  *((_DWORD *)v1 + 22) = 0;
  v8 = *((_DWORD *)v1 + 12);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 11);
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  *((_DWORD *)v1 + 11) = 0;
  v11 = *((_DWORD *)v1 + 10);
  if ( v11 )
    (*(void (**)(void))(*(_DWORD *)v11 + 4))();
  *((_DWORD *)v1 + 10) = 0;
  v12 = *((_DWORD *)v1 + 9);
  if ( v12 )
    (*(void (**)(void))(*(_DWORD *)v12 + 4))();
  *((_DWORD *)v1 + 9) = 0;
  v13 = *((_DWORD *)v1 + 6);
  if ( v13 )
    std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<StructureTemplate,std::default_delete<StructureTemplate>>>,std::allocator<std::pair<std::string const,std::unique_ptr<StructureTemplate,std::default_delete<StructureTemplate>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::~_Hashtable(v13 + 16);
    sub_21E03AC((pthread_cond_t *)(v13 + 8));
    sub_21E03AC((pthread_cond_t *)(v13 + 4));
    j_operator delete((void *)v13);
  *((_DWORD *)v1 + 6) = 0;
  v14 = *((_DWORD *)v1 + 5);
  if ( v14 )
    (*(void (**)(void))(*(_DWORD *)v14 + 4))();
  *((_DWORD *)v1 + 5) = 0;
  return v1;
}


int __fastcall minecraft::api::PlayerInteractionInterface::handlePlayerSpawningEntityEvent(minecraft::api::PlayerInteractionInterface *this, Player *a2, const Entity *a3, ItemInstance *a4)
{
  return 0;
}


void __fastcall Minecraft::startClientGame(int a1, int *a2)
{
  Minecraft::startClientGame(a1, a2);
}


int __fastcall Minecraft::getServerNetworkHandler(Minecraft *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *((_DWORD *)this + 23);
  if ( v1 )
    result = *(_DWORD *)(v1 + 8);
  else
    result = 0;
  return result;
}


int __fastcall minecraft::api::PlayerInteractionInterface::handlePlayerModifyingBlockEvent(minecraft::api::PlayerInteractionInterface *this, Player *a2, const BlockPos *a3, const FullBlock *a4, const FullBlock *a5, const ItemInstance *a6)
{
  return 0;
}


void __fastcall Minecraft::resetGameSession(Minecraft *this)
{
  Minecraft *v1; // r1@1
  GameSession *v2; // r0@1
  GameSession *v3; // r0@2

  v1 = this;
  v2 = (GameSession *)*((_DWORD *)this + 23);
  *((_DWORD *)v1 + 23) = 0;
  if ( v2 )
  {
    v3 = GameSession::~GameSession(v2);
    j_j_j__ZdlPv_6((void *)v3);
  }
}


SubClientConnectionRequest *__fastcall Minecraft::joinWorldInProgress(int a1, int *a2)
{
  int v2; // r4@1
  int v3; // r0@1
  int v5; // [sp+4h] [bp-Ch]@1

  v2 = a1;
  v3 = *a2;
  *a2 = 0;
  v5 = v3;
  j_Minecraft::startClientGame(v2, &v5);
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 8))();
  return j_j_j__ZN11GameSession28subClientJoinWorldInProgressEv(*(GameSession **)(v2 + 92));
}


char *__fastcall minecraft::api::Api::network(minecraft::api::Api *this)
{
  return (char *)this + 16;
}


int __fastcall minecraft::api::PlayerInteractionInterface::handlePlayerModifyingEntityEvent(minecraft::api::PlayerInteractionInterface *this, Player *a2, const Entity *a3, ItemInstance *a4)
{
  return 0;
}


minecraft::api::Api *__fastcall minecraft::api::Api::~Api(minecraft::api::Api *this)
{
  minecraft::api::Api *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26D65D4;
  v2 = *((_DWORD *)this + 1);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  return v1;
}


ServerNetworkHandler *__fastcall Minecraft::activateWhitelist(Minecraft *this)
{
  ServerNetworkHandler *result; // r0@1

  result = *(ServerNetworkHandler **)(*((_DWORD *)this + 23) + 8);
  if ( result )
    result = (ServerNetworkHandler *)j_j_j__ZN20ServerNetworkHandler17activateWhitelistEv(result);
  else
    JUMPOUT(0, Minecraft::getLevelSource);
  return result;
}


Level *__fastcall Minecraft::tickSimtime(Minecraft *this, int a2, int a3)
{
  Level *result; // r0@1

  result = (Level *)*((_DWORD *)this + 23);
  if ( result )
    result = j_j_j__ZN11GameSession4tickEv(result);
  else
    JUMPOUT(0, Minecraft::tickRealtime);
  return result;
}


void __fastcall Minecraft::initCommands(Minecraft *this)
{
  Minecraft::initCommands(this);
}


signed int __fastcall Minecraft::update(Minecraft *this)
{
  int v2; // r0@1
  signed int v4; // r4@5
  signed int v5; // r2@6
  int v6; // r1@6
  signed int v7; // r0@6
  int v8; // r7@13
  int v9; // r12@13
  __int64 v10; // kr00_8@13
  int v11; // r5@13
  char *v12; // r8@13
  signed int v13; // lr@14
  int v14; // r11@14
  __int64 v15; // r2@15
  __int64 v17; // r0@15
  bool v18; // zf@17
  signed int v21; // r1@17
  int v22; // r0@24
  int v23; // r4@24
  unsigned int v24; // r1@24
  unsigned int v25; // r0@26
  unsigned int v26; // r9@26
  char *v27; // r6@32
  int v28; // r5@35
  int v29; // r0@37
  int v30; // r7@46
  unsigned int *v31; // r2@47
  signed int v32; // r1@49
  int v33; // r0@55
  bool v34; // zf@55
  void *v35; // r0@59
  int v36; // r5@64
  GameSession *v37; // r0@66
  GameSession *v40; // r0@72
  double v44; // r0@76
  int v46; // r5@77
  int v47; // r6@79
  NetworkStatistics *v48; // r0@82
  signed int v49; // r5@85
  int v50; // r6@87
  NetworkStatistics *v53; // r0@92
  double v57; // r0@96
  int v60; // r0@98
  bool v61; // zf@98
  int v62; // r0@102
  Level *v63; // r0@103
  int v64; // r0@105
  __int64 v66; // [sp+0h] [bp-90h]@0
  int v67; // [sp+18h] [bp-78h]@88
  double v68; // [sp+20h] [bp-70h]@88
  int v70; // [sp+30h] [bp-60h]@88
  int v71; // [sp+38h] [bp-58h]@70
  double v72; // [sp+40h] [bp-50h]@70
  int v74; // [sp+50h] [bp-40h]@70
  int v75; // [sp+5Ch] [bp-34h]@47
  __int64 v76; // [sp+60h] [bp-30h]@13

  _R10 = this;
  v2 = *((_DWORD *)this + 23);
  _ZF = v2 == 0;
  if ( v2 )
    _ZF = *(_DWORD *)(v2 + 8) == 0;
  if ( _ZF )
  {
    NetworkHandler::runEvents(*((NetworkHandler **)_R10 + 26));
    v4 = 0;
  }
  else
    v5 = 0;
    v6 = *((_DWORD *)_R10 + 21);
    v7 = 0;
    if ( !*((_DWORD *)_R10 + 20) )
      v7 = 1;
    if ( v6 < 0 )
      v5 = 1;
    if ( !v6 )
      v5 = v7;
    if ( !v5 )
    {
      sub_21E0378(&v76);
      v10 = *(_QWORD *)NetworkHandler::getConnections(*((NetworkHandler **)_R10 + 26));
      v9 = HIDWORD(v10);
      v8 = v10;
      v11 = 0;
      v12 = 0;
      if ( (_DWORD)v10 != HIDWORD(v10) )
      {
        v13 = 1000000000;
        v14 = 0;
        v12 = 0;
        do
        {
          v17 = (unsigned int)v13 * *((_QWORD *)_R10 + 10);
          v15 = v76 - *(_QWORD *)(v8 + 176);
          _CF = (unsigned int)v17 >= (unsigned int)v15;
          LODWORD(v17) = 0;
          if ( _CF )
            LODWORD(v17) = 1;
          _VF = __OFSUB__(HIDWORD(v17), HIDWORD(v15));
          v18 = HIDWORD(v17) == HIDWORD(v15);
          _NF = HIDWORD(v17) - HIDWORD(v15) < 0;
          v21 = 0;
          if ( !(_NF ^ _VF) )
            v21 = 1;
          if ( v18 )
            v21 = v17;
          if ( !v21 )
          {
            if ( v11 == v14 )
            {
              v22 = (v11 - (signed int)v12) >> 3;
              v23 = 678152731 * v22;
              v24 = 678152731 * v22;
              if ( (char *)v11 == v12 )
                v24 = 1;
              v25 = v24 + 678152731 * v22;
              v26 = v25;
              if ( v25 > 0x1AF286B )
                v26 = 28256363;
              if ( v25 < v24 )
              if ( v26 )
              {
                if ( v26 >= 0x1AF286C )
                  sub_21E57F4();
                v27 = (char *)j_operator new(152 * v26);
              }
              else
                v27 = 0;
              j___aeabi_memcpy8((int)&v27[152 * v23], v8, 152);
              if ( v12 == (char *)v14 )
                v12 = (char *)v14;
                v29 = (int)v27;
                v28 = 0;
                do
                {
                  j___aeabi_memcpy8((int)&v27[v28], (int)&v12[v28], 152);
                  v28 += 152;
                }
                while ( v14 - (_DWORD)v12 != v28 );
                v29 = (int)&v27[v28];
              v11 = v29 + 152;
              if ( v12 )
                j_operator delete(v12);
              v9 = HIDWORD(v10);
              v14 = (int)&v27[152 * v26];
              v13 = 1000000000;
              v12 = v27;
            }
            else
              j___aeabi_memcpy8(v11, v8, 152);
              v11 += 152;
          }
          v8 += 192;
        }
        while ( v8 != v9 );
      }
      if ( v12 != (char *)v11 )
        v30 = (int)v12;
          sub_21E94B4((void **)&v75, "disconnectionScreen.timeout");
          v33 = *((_DWORD *)_R10 + 23);
          v34 = v33 == 0;
          if ( v33 )
            v33 = *(_DWORD *)(v33 + 8);
            v34 = v33 == 0;
          if ( !v34 )
            j_ServerNetworkHandler::disconnectClient(v33, v30, &v75, 0);
          NetworkHandler::closeConnection(*((_DWORD *)_R10 + 26), v30);
          v35 = (void *)(v75 - 12);
          if ( (int *)(v75 - 12) != &dword_28898C0 )
            v31 = (unsigned int *)(v75 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v32 = __ldrex(v31);
              while ( __strex(v32 - 1, v31) );
              v32 = (*v31)--;
            if ( v32 <= 0 )
              j_j_j_j__ZdlPv_9(v35);
          v30 += 152;
        while ( v30 != v11 );
      if ( v12 )
        j_operator delete(v12);
    }
    v4 = 1;
  v36 = j_Timer::getTicks(*((Timer **)_R10 + 24));
  if ( v36 )
    if ( v4 == 1 )
      do
        v37 = (GameSession *)*((_DWORD *)_R10 + 23);
        if ( v37 )
          GameSession::tick(v37);
        --v36;
      while ( v36 );
    else
        v72 = 0.0;
        v74 = 9;
        v71 = unk_27F636C;
        unk_27F636C = &v71;
        _R0 = j_getTimeS();
        __asm
          VMOV            D0, R0, R2
          VSTR            D0, [SP,#0x90+var_50]
          VSTR            D0, [SP,#0x90+var_48]
        _R2 = v71;
        if ( v71 )
          __asm
            VMOV            D0, R0, R1
            VLDR            D1, [R2,#8]
            VADD.F64        D0, D1, D0
            VSTR            D0, [R2,#8]
        v40 = (GameSession *)*((_DWORD *)_R10 + 23);
        if ( v40 )
          GameSession::tick(v40);
          VMOV            D1, R0, R1
          VLDR            D0, [SP,#0x90+var_50]
          VADD.F64        D2, D0, D1
          VSTR            D2, [SP,#0x90+var_50]
          VLDR            D0, [SP,#0x90+var_48]
          VADD.F64        D0, D0, D1
        _R0 = v71;
            VLDR            D2, [R0,#8]
            VSUB.F64        D1, D2, D1
            VSTR            D1, [R0,#8]
            VLDR            D2, [SP,#0x90+var_50]
        HIDWORD(v44) = v74;
        __asm { VMOV            R2, R3, D2 }
        unk_27F636C = v71;
        LODWORD(v44) = &ProfilerLite::gProfilerLiteInstance;
        __asm { VSTR            D0, [SP,#0x90+var_90] }
        j_ProfilerLite::_endScope(v44, _R2, _R3, v66);
  v46 = j_Timer::getTicks(*((Timer **)_R10 + 25));
  if ( v46 )
      v47 = 0;
        if ( *((_BYTE *)_R10 + 56) )
          *((_BYTE *)_R10 + 56) = 0;
          (*(void (**)(void))(**(_DWORD **)_R10 + 8))();
        v48 = (NetworkStatistics *)*((_DWORD *)_R10 + 9);
        if ( v48 )
          NetworkStatistics::tick(v48);
        NetworkHandler::update(*((NetworkHandler **)_R10 + 26));
        (*(void (**)(void))(**(_DWORD **)_R10 + 16))();
        ++v47;
      while ( v46 != v47 );
      v49 = 1;
      v50 = 0;
        v68 = 0.0;
        v70 = 5;
        v67 = unk_27F636C;
        unk_27F636C = &v67;
          VSTR            D0, [SP,#0x90+var_70]
          VSTR            D0, [SP,#0x90+var_68]
        _R2 = v67;
        if ( v67 )
        v53 = (NetworkStatistics *)*((_DWORD *)_R10 + 9);
        if ( v53 )
          NetworkStatistics::tick(v53);
          VLDR            D0, [SP,#0x90+var_70]
          VSTR            D2, [SP,#0x90+var_70]
          VLDR            D0, [SP,#0x90+var_68]
        _R0 = v67;
            VLDR            D2, [SP,#0x90+var_70]
        HIDWORD(v57) = v70;
        unk_27F636C = v67;
        LODWORD(v57) = &ProfilerLite::gProfilerLiteInstance;
        j_ProfilerLite::_endScope(v57, _R2, _R3, v66);
        ++v50;
      while ( v46 != v50 );
    v49 = 0;
  _R0 = j_getTimeS();
  __asm
    VLDR            D0, [R10,#0x48]
    VMOV            D1, R0, R1
    VSUB.F64        D0, D1, D0
    VSTR            D0, [R10,#0x40]
    VSTR            D1, [R10,#0x48]
  v60 = *((_DWORD *)_R10 + 23);
  v61 = v60 == 0;
  if ( v60 )
    v60 = *(_DWORD *)(v60 + 4);
    v61 = v60 == 0;
  if ( !v61 && j_Level::hasLevelStorage((Level *)v60) == 1 )
    v62 = *((_DWORD *)_R10 + 23);
    if ( v62 )
      v63 = *(Level **)(v62 + 4);
      v63 = 0;
    v64 = j_Level::getLevelStorage(v63);
    if ( (*(int (**)(void))(*(_DWORD *)v64 + 52))() == 1 )
      *((_BYTE *)_R10 + 56) = 1;
  return v49;
}


int __fastcall Minecraft::isOnlineClient(Minecraft *this)
{
  int v1; // r0@1
  bool v2; // zf@1
  int result; // r0@4

  v1 = *((_DWORD *)this + 23);
  v2 = v1 == 0;
  if ( v1 )
  {
    v1 = *(_DWORD *)(v1 + 4);
    v2 = v1 == 0;
  }
  if ( v2 )
    result = 0;
  else
    result = j_Level::isClientSide((Level *)v1);
  return result;
}


char *__fastcall minecraft::api::Api::entities(minecraft::api::Api *this)
{
  return (char *)this + 12;
}


int __fastcall Minecraft::setSimTimePause(Minecraft *this, int a2)
{
  Minecraft *v2; // r5@1
  int v3; // r4@1
  Timer *v4; // r0@1
  int v5; // r1@1
  int result; // r0@3

  v2 = this;
  v3 = a2;
  v4 = (Timer *)*((_DWORD *)this + 24);
  v5 = -1;
  if ( v3 )
    v5 = 1;
  j_Timer::stepTick(v4, v5);
  j_Timer::resetTimePassed(*((Timer **)v2 + 25));
  result = *((_DWORD *)v2 + 23);
  if ( result )
  {
    result = *(_DWORD *)(result + 4);
    if ( result )
      *(_BYTE *)(result + 5865) = v3;
  }
  return result;
}


int __fastcall Minecraft::clientReset(Minecraft *this)
{
  Minecraft *v1; // r4@1
  GameSession *v2; // r0@2
  GameSession *v3; // r0@3

  v1 = this;
  if ( *((_DWORD *)this + 23) )
  {
    (*(void (**)(void))(**(_DWORD **)this + 28))();
    v2 = (GameSession *)*((_DWORD *)v1 + 23);
    *((_DWORD *)v1 + 23) = 0;
    if ( v2 )
    {
      v3 = GameSession::~GameSession(v2);
      j_operator delete((void *)v3);
    }
  }
  else
    *((_DWORD *)this + 23) = 0;
  return (*(int (**)(void))(**(_DWORD **)v1 + 24))();
}


int __fastcall Minecraft::getNetEventCallback(Minecraft *this)
{
  GameSession *v1; // r0@1
  int result; // r0@2

  v1 = (GameSession *)*((_DWORD *)this + 23);
  if ( v1 )
    result = GameSession::getNetEventCallback(v1);
  else
    result = 0;
  return result;
}


int __fastcall Minecraft::usesNonLocalConnection(Minecraft *this, const NetworkIdentifier *a2)
{
  return NetworkHandler::isLocalConnectionId(*((NetworkHandler **)this + 26), a2) ^ 1;
}


void __fastcall Minecraft::initCommands(Minecraft *this)
{
  Minecraft *v1; // r5@1
  int v2; // r4@1
  _DWORD *v3; // r6@1
  void *v4; // r4@1
  void (*v5)(void); // r3@2
  CommandRegistry *v6; // r0@4
  CommandRegistry *v7; // r0@5

  v1 = this;
  v2 = (*(int (**)(void))(**((_DWORD **)this + 28) + 12))();
  v3 = j_operator new(0x20u);
  MinecraftCommands::MinecraftCommands(v3, (int)v1, v2);
  v4 = (void *)*((_DWORD *)v1 + 22);
  *((_DWORD *)v1 + 22) = v3;
  if ( v4 )
  {
    v5 = (void (*)(void))*((_DWORD *)v4 + 6);
    if ( v5 )
      v5();
    v6 = (CommandRegistry *)*((_DWORD *)v4 + 1);
    if ( v6 )
    {
      v7 = j_CommandRegistry::~CommandRegistry(v6);
      j_operator delete((void *)v7);
    }
    *((_DWORD *)v4 + 1) = 0;
    if ( *(_DWORD *)v4 )
      (*(void (**)(void))(**(_DWORD **)v4 + 4))();
    j_j_j__ZdlPv_6(v4);
  }
}


int __fastcall Minecraft::isInitialized(Minecraft *this)
{
  return (unsigned __int8)byte_282202C;
}


int __fastcall Minecraft::onClientCreatedLevel(int a1, int *a2)
{
  int v2; // r0@1
  int v3; // r2@1
  int result; // r0@1
  int v5; // [sp+4h] [bp-Ch]@1

  v2 = *(_DWORD *)(a1 + 92);
  v3 = *a2;
  *a2 = 0;
  v5 = v3;
  GameSession::setLevel(v2, &v5);
  result = v5;
  if ( v5 )
    result = (*(int (**)(void))(*(_DWORD *)v5 + 4))();
  return result;
}


void __fastcall minecraft::api::Api::~Api(minecraft::api::Api *this)
{
  minecraft::api::Api *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26D65D4;
  v2 = *((_DWORD *)this + 1);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  operator delete((void *)v1);
}


int __fastcall Minecraft::setLeaveGame(int result)
{
  *(_BYTE *)(result + 56) = 1;
  return result;
}


int __fastcall minecraft::api::PlayerInteractionInterface::handlePlayerAttackingEntityEvent(minecraft::api::PlayerInteractionInterface *this, Player *a2, Entity *a3)
{
  return 0;
}


int __fastcall minecraft::api::PlayerInteractionInterface::handlePlayerUsingItemOnEntity(minecraft::api::PlayerInteractionInterface *this, Player *a2, const ItemInstance *a3, Entity *a4)
{
  return 0;
}


void __fastcall Minecraft::initAsDedicatedServer(Minecraft *this)
{
  Minecraft::initAsDedicatedServer(this);
}


void __fastcall Minecraft::resetGameSession(Minecraft *this)
{
  Minecraft::resetGameSession(this);
}


int __fastcall Minecraft::startLeaveGame(Minecraft *this, int a2)
{
  Minecraft *v2; // r4@1
  int v3; // r5@1
  int v4; // r0@4

  v2 = this;
  v3 = a2;
  if ( *((_DWORD *)this + 23) )
  {
    (*(void (**)(void))(**(_DWORD **)this + 28))();
    GameSession::startLeaveGame(*((GameSession **)v2 + 23));
  }
  if ( v3 == 1 )
    j_NetworkHandler::disconnect(*((NetworkHandler **)v2 + 26));
    v4 = j_NetworkHandler::getServerLocator(*((NetworkHandler **)v2 + 26));
    (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  return (*(int (**)(void))(**(_DWORD **)v2 + 24))();
}


int __fastcall minecraft::api::PlayerInteractionInterface::handlePlayerUsingItemOnBlock(minecraft::api::PlayerInteractionInterface *this, Player *a2, const ItemInstance *a3, const BlockPos *a4, const FullBlock *a5, signed __int8 a6, const Vec3 *a7)
{
  return 0;
}


char *__fastcall minecraft::api::Api::players(minecraft::api::Api *this)
{
  return (char *)this + 8;
}


_BOOL4 __fastcall Minecraft::hasCommands(Minecraft *this)
{
  return *((_DWORD *)this + 22) != 0;
}


int __fastcall minecraft::api::PlayerInteractionInterface::handlePlayerRemovingEntityEvent(minecraft::api::PlayerInteractionInterface *this, Player *a2, const Entity *a3, ItemInstance *a4)
{
  return 0;
}


RakNet *__fastcall Minecraft::disconnectClient(int a1, int a2, int *a3)
{
  int v3; // r6@1
  int v4; // r0@1
  int v5; // r5@1
  bool v6; // zf@1

  v3 = a1;
  v4 = *(_DWORD *)(a1 + 92);
  v5 = a2;
  v6 = v4 == 0;
  if ( v4 )
  {
    v4 = *(_DWORD *)(v4 + 8);
    v6 = v4 == 0;
  }
  if ( !v6 )
    j_ServerNetworkHandler::disconnectClient(v4, a2, a3, 0);
  return j_j_j__ZN14NetworkHandler15closeConnectionERK17NetworkIdentifierRKSs(*(_DWORD *)(v3 + 104), v5);
}


int __fastcall Minecraft::getLastTimestep(Minecraft *this, int _R1)
{
  int result; // r0@1

  _R0 = *((_DWORD *)this + 25);
  __asm
  {
    VLDR            S0, [R0,#0x1C]
    VCVT.F64.F32    D0, S0
    VMOV            R0, R1, D0
  }
  return result;
}


int __fastcall Minecraft::isModded(Minecraft *this)
{
  return 0;
}


void __fastcall Minecraft::teardown(Minecraft *this)
{
  Minecraft *v1; // r5@1
  int v2; // r0@1
  void *v3; // r4@3
  void (*v4)(void); // r3@4
  CommandRegistry *v5; // r0@6
  CommandRegistry *v6; // r0@7

  v1 = this;
  v2 = *((_DWORD *)this + 11);
  *((_DWORD *)v1 + 11) = 0;
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  v3 = (void *)*((_DWORD *)v1 + 22);
  *((_DWORD *)v1 + 22) = 0;
  if ( v3 )
  {
    v4 = (void (*)(void))*((_DWORD *)v3 + 6);
    if ( v4 )
      v4();
    v5 = (CommandRegistry *)*((_DWORD *)v3 + 1);
    if ( v5 )
    {
      v6 = j_CommandRegistry::~CommandRegistry(v5);
      j_operator delete((void *)v6);
    }
    *((_DWORD *)v3 + 1) = 0;
    if ( *(_DWORD *)v3 )
      (*(void (**)(void))(**(_DWORD **)v3 + 4))();
    j_j_j__ZdlPv_6(v3);
  }
}


void __fastcall Minecraft::init(Minecraft *this, int a2)
{
  Minecraft::init(this, a2);
}


int __fastcall Minecraft::getLevel(Minecraft *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *((_DWORD *)this + 23);
  if ( v1 )
    result = *(_DWORD *)(v1 + 4);
  else
    result = 0;
  return result;
}


char *__fastcall minecraft::api::Api::playerInteractions(minecraft::api::Api *this)
{
  return (char *)this + 20;
}


int __fastcall minecraft::api::PlayerInteractionInterface::handlePlayerPlacingBlockEvent(minecraft::api::PlayerInteractionInterface *this, Player *a2, const BlockPos *a3, const FullBlock *a4, const FullBlock *a5)
{
  return 0;
}


int __fastcall Minecraft::setGameModeReal(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r0@2

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 92);
  if ( v2 )
  {
    v3 = j_Level::getPrimaryLocalPlayer(*(Level **)(v2 + 4));
    (*(void (**)(void))(*(_DWORD *)v3 + 1432))();
  }
  return (*(int (**)(void))(**(_DWORD **)v1 + 12))();
}


void __fastcall Minecraft::startClientGame(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r6@1
  GameSession *v4; // r0@1
  GameSession *v5; // r0@2
  __int64 v6; // kr00_8@3
  int v7; // r5@3
  void *v8; // r8@3
  int v9; // r0@3
  GameSession *v10; // r0@5
  GameSession *v11; // r0@6
  int v12; // [sp+4h] [bp-24h]@3

  v2 = a1;
  v3 = a2;
  v4 = *(GameSession **)(a1 + 92);
  *(_DWORD *)(v2 + 92) = 0;
  if ( v4 )
  {
    v5 = GameSession::~GameSession(v4);
    j_operator delete((void *)v5);
  }
  v6 = *(_QWORD *)(v2 + 104);
  v7 = *(_BYTE *)(v2 + 116);
  v8 = j_operator new(0x1Cu);
  v9 = *v3;
  *v3 = 0;
  v12 = v9;
  GameSession::GameSession((int)v8, v6, (NetEventCallback **)&v12, SHIDWORD(v6), v7);
  if ( v12 )
    (*(void (**)(void))(*(_DWORD *)v12 + 8))();
  v10 = *(GameSession **)(v2 + 92);
  *(_DWORD *)(v2 + 92) = v8;
  if ( v10 )
    v11 = GameSession::~GameSession(v10);
    j_operator delete((void *)v11);
}


int __fastcall minecraft::api::PlayerInteractionInterface::handlePlayerInteractingWithBlockEvent(minecraft::api::PlayerInteractionInterface *this, Player *a2, const BlockPos *a3, const FullBlock *a4)
{
  return 0;
}


signed int __fastcall Minecraft::validateLevel(int a1)
{
  double v1; // r0@2
  signed int v2; // r4@5
  int v3; // r5@6
  void *v4; // r0@8
  char *v5; // r0@11
  unsigned int *v7; // r2@13
  signed int v8; // r1@15
  unsigned int *v9; // r2@17
  signed int v10; // r1@19
  char v11; // [sp+8h] [bp-198h]@6
  int v12; // [sp+17Ch] [bp-24h]@2
  int v13; // [sp+180h] [bp-20h]@3
  int v14; // [sp+184h] [bp-1Ch]@1
  char *v15; // [sp+188h] [bp-18h]@1

  v15 = (char *)&unk_28898CC;
  (*(void (__fastcall **)(int *))(**(_DWORD **)(a1 + 44) + 28))(&v14);
  if ( v14 )
  {
    (*(void (__fastcall **)(int *))(*(_DWORD *)v14 + 60))(&v12);
  }
  else
    v12 = 6;
    sub_21E94B4((void **)&v13, (const char *)&unk_257BC67);
  if ( v12 )
    v2 = 1;
    LODWORD(v1) = &v11;
    j_LevelData::LevelData(v1);
    (*(void (__cdecl **)(int))(*(_DWORD *)v14 + 16))(v14);
    v3 = j_LevelData::getNetworkVersion((LevelData *)&v11);
    j_LevelData::~LevelData((LevelData *)&v11);
    v2 = 0;
    if ( v3 <= 137 )
      v2 = 1;
  v4 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v13 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
    (*(void (__cdecl **)(int))(*(_DWORD *)v14 + 4))(v14);
  v5 = v15 - 12;
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v15 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v2;
}


void __fastcall Minecraft::init(Minecraft *this, int a2)
{
  int v2; // r5@1
  Minecraft *v3; // r4@1
  Block *v9; // r0@2
  GoalDefinition *v10; // r0@2
  MobEffect *v11; // r0@2
  unsigned int *v12; // r0@2
  Enchant *v13; // r0@2
  Item *v14; // r0@2
  Item *v15; // r0@2
  Item *v16; // r0@2
  ResourcePackManager *v17; // r1@2
  Json::Value *v18; // r0@2
  Biome *v19; // r0@2
  BlockEntity *v20; // r0@2
  PotionBrewing *v21; // r0@2
  EntityMapping *v22; // r0@4
  FilterList *v23; // r0@4

  v2 = a2;
  v3 = this;
  _R0 = j_getTimeS();
  __asm
  {
    VMOV            D0, R0, R1
    VSTR            D0, [R4,#0x48]
  }
  if ( !byte_282202C )
    byte_282202C = 1;
    v9 = (Block *)Material::initMaterials((Material *)&byte_282202C);
    v10 = (GoalDefinition *)Block::initBlocks(v9);
    v11 = (MobEffect *)GoalDefinition::init(v10);
    v12 = MobEffect::initEffects(v11);
    v13 = (Enchant *)Potion::initPotions((Potion *)v12);
    v14 = (Item *)Enchant::initEnchants(v13);
    v15 = (Item *)Item::addBlockItems(v14);
    v16 = (Item *)Item::registerItems(v15);
    Item::initCreativeCategories(v16);
    v18 = Item::initServerData(*((Item **)v3 + 5), v17);
    ProjectileFactory::initFactory(v18);
    v20 = (BlockEntity *)Biome::initBiomes(v19);
    BlockEntity::initBlockEntities(v20);
    if ( v2 == 1 )
      v21 = (PotionBrewing *)j_PotionBrewing::initPotionBrewing(v21);
    v22 = (EntityMapping *)EntityDefinition::initEntityDefinitions(v21);
    v23 = (FilterList *)EntityMapping::initEntityIdentifiers(v22);
    FilterList::initialize(v23);
  j_j_j__ZN9Minecraft12initCommandsEv(v3);
}


void __fastcall minecraft::api::Api::~Api(minecraft::api::Api *this)
{
  minecraft::api::Api::~Api(this);
}
